// decompiled by r2ghidra: 0239_ITbtDxe.pe32
// functions: 21

/* entry0 @ 0x103a4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103b8(arg1,in_RDX);
    fcn.00010670(arg1,in_RDX);
    return;
}


/* fcn.000103b8 @ 0x103b8 */

void fcn.000103b8(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    ulong noname_0_00;
    int64_t iVar7;
    
    *0x11238 = *(arg1 + 0x60);
    *0x11230 = arg1;
    fcn.000109f4();
    noname_0_00 = 0x111d8;
    iVar3 = fcn.00010a60(0x111d8);
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010370(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar6 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x00010360();
        }
        fcn.00010370(uVar6,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    iVar3 = fcn.00010a60(0x11140);
    if ((iVar3 != 0) && ((*(iVar3 + 0x18) & 1) != 0)) {
        uVar1 = *(iVar3 + 0x2c);
        iVar7 = 0;
        uVar5 = 0;
        uVar4 = 0;
        do {
            *(uVar4 + 0x111f0) = 0;
            *(uVar4 + 0x111f3) = uVar1 >> (uVar5 & 0x1f) & 7;
            if (*(iVar3 + 0x30 + iVar7) == '\0') {
                *(uVar4 + 0x111f4) = 0;
            }
            else {
                *(uVar4 + 0x111f4) = 1;
            }
            iVar7 = iVar7 + 1;
            uVar4 = uVar4 + 5;
            uVar5 = uVar5 + 3;
        } while (uVar4 < 0x14);
        *0x11258 = 1;
    }
    return;
}


/* fcn.00010670 @ 0x10670 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00010670(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    bool bVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uchar *puVar9;
    int64_t iVar10;
    ulong uStackX_8;
    uchar *puStackX_10;
    int64_t aiStackX_18 [2];
    int64_t var_38h_2;
    int64_t var_40h;
    ulong uStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    iVar3 = 0;
    uVar8 = 0x2000;
    aiStackX_18[1] = 0;
    var_38h = 0;
    uStack_48 = 0;
    iStack_50 = 0;
    iVar10 = 2;
    uStack_58 = 0;
    bVar2 = false;
    do {
        if (*((uVar8 & 0x7000 | 0x68000) + 0xc0000000) != -1) {
            bVar2 = true;
        }
        uVar8 = uVar8 + 0x1000;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    if (bVar2) {
        uStackX_8 = 0;
        aiStackX_18[0] = 0;
        uVar6 = 0;
        puStackX_10 = arg2;
        (**(*0x11238 + 0x140))(0x111a0,0,&uStackX_8);
        fcn.0001097c(uStackX_8,uVar6,aiStackX_18);
        iVar3 = fcn.00010a60(0x11140);
        iVar10 = fcn.00010a60(0x11150);
        puStackX_10 = 0xffffffff;
        (**(*0x11238 + 0x28))(1,10,1,&puStackX_10);
        *0x11260 = puStackX_10;
        fcn.00010280(puStackX_10,0x12,0);
        puStackX_10[8] = *(aiStackX_18[0] + 0x44);
        puStackX_10[9] = *(aiStackX_18[0] + 0x20);
        *(puStackX_10 + 10) = *(aiStackX_18[0] + 0x22);
        if (iVar10 != 0) {
            uVar5 = 0;
            do {
                if (*(iVar10 + 0x18 + uVar5 * 4) == '\x01') {
                    *puStackX_10 = 1;
                    break;
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
            } while (uVar4 < 4);
            iVar7 = 0;
            puVar9 = iVar10 + 0x18;
            do {
                uVar1 = *puVar9;
                puVar9 = puVar9 + 4;
                puStackX_10[iVar7 + 4] = uVar1;
                iVar7 = iVar7 + 1;
            } while (iVar7 < 4);
            *(puStackX_10 + 0xd) = *(iVar10 + 0x28);
            *(puStackX_10 + 0xf) = *(iVar10 + 0x2a);
        }
        if (iVar3 != 0) {
            puStackX_10[1] = *(iVar3 + 0x36);
            puStackX_10[2] = *(iVar3 + 0x37);
            uVar4 = *(iVar3 + 0x24) >> 0x18;
            puStackX_10[0xc] = uVar4 >> 7 & uVar4 >> 6;
        }
        if (*(aiStackX_18[0] + 0x21) == '\x01') {
            (**(*0x11238 + 0x170))(0x200,8,0x105a0,0,0x111b0,&var_28h);
        }
        aiStackX_18[1] = 0;
        (**(*0x11238 + 0x148))(aiStackX_18 + 1,0x11120,0x11260,0);
        (**(*0x11238 + 0x170))(0x200,8,0x10608,0,0x111b0,&var_38h);
        uVar6 = 0;
        iVar3 = (**(*0x11238 + 0x140))(0x111a0,0,&uStack_58);
        if (((-1 < iVar3) && (iVar3 = fcn.0001097c(uStack_58,uVar6,&iStack_50), -1 < iVar3)) &&
           (*(iStack_50 + 0x1c) == '\x01')) {
            iVar3 = (**(*0x11238 + 0x170))(0x200,8,0x104b8,0,0x11190,&uStack_48);
            if (iVar3 < 0) {
                (**(*0x11238 + 0x70))(uStack_48);
            }
            else {
                var_30h = 0;
                (**(*0x11238 + 0x148))(&var_30h,0x11130,0x111d0,0);
            }
        }
    }
    return iVar3;
}


/* fcn.000109f4 @ 0x109f4 */

int64_t fcn.000109f4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11240 == 0) {
        *0x11240 = 0;
        if (*(*0x11230 + 0x68) != 0) {
            piVar2 = *(*0x11230 + 0x70);
            do {
                if ((*0x11180 == *piVar2) && (*0x11188 == piVar2[1])) {
                    *0x11240 = (*(*0x11230 + 0x70))[uVar1 * 3 + 2];
                    return *0x11240;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11230 + 0x68));
        }
    }
    return *0x11240;
}


/* fcn.00010a60 @ 0x10a60 */

void fcn.00010a60(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000109f4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010a8e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010a8e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.00010da0 @ 0x10da0 */

void fcn.00010da0(int64_t arg1)

{
    char cVar1;
    int iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    
    uVar8 = arg1;
    uVar4 = fcn.00010cc4(arg1);
    uVar9 = 0x10000000;
    iVar10 = 0xc0000000;
    iVar7 = 0;
    iVar2 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000);
    if ((iVar2 != 0) && (iVar2 != 0xff)) {
        if (0xffffff < uVar8) {
            uVar4 = (uVar8 >> 0x18) + 2 + uVar4;
            uVar3 = *((uVar4 >> 4 & 0x10000000 | uVar4 & 0xffffffff) + 0xc0000000) >> 4;
            if (uVar3 == 5) {
                iVar7 = 2;
            }
            else if ((uVar3 - 4 & 0xfd) == 0) {
                iVar7 = 3;
            }
            else {
                iVar7 = 1;
                fcn.00010d20(arg1 & 0xffffffff);
            }
        }
        uVar8 = uVar8 & 0xff | 0xff0000;
        iVar5 = fcn.00010cc4(arg1 & 0xffffffff);
        if ((*((iVar5 + 0xbU >> 4 & uVar9 | iVar5 + 0xbU & 0xffffffff) + iVar10) == '\x06') &&
           (uVar6 = *((iVar5 + 0x18U >> 4 & uVar9 | iVar5 + 0x18U & 0xffffffff) + iVar10),
           uVar8 = (uVar6 >> 8 & 0xff) << 8 | uVar8, uVar6 >> 8 != '\0')) {
            while (iVar7 != 1) {
                uVar6 = (uVar8 & 0xff00) << 0xc;
                if (uVar8 == '\0') {
                    uVar4 = uVar6 | uVar8 >> 1 & 0xf8000;
                }
                else {
                    uVar4 = CONCAT44(uVar8,uVar6) & 0xffffffffff | uVar8 >> 1 & 0xf8000;
                }
                if (((uVar8 & 0x1f0000) == 0x1f0000) && ((uVar8 & 0xe00000) == 0xe00000)) {
                    uVar8 = uVar8 & 0xff00ffff;
                }
                else {
                    uVar6 = uVar8 >> 0x15 & 7;
                    if ((uVar6 == 7) ||
                       ((uVar6 == 0 &&
                        ((cVar1 = *((uVar4 + 0xe >> 4 & uVar9 | uVar4 + 0xe & 0xffffffff) + iVar10), cVar1 == -1 ||
                         (-1 < cVar1)))))) {
                        uVar6 = 0x1f;
                        if (iVar7 != 2) {
                            uVar6 = 0;
                        }
                        if ((uVar8 >> 0x10 & 0x1f) == uVar6) break;
                        uVar8 = (uVar8 & 0xffff0000) + 0x10000 & 0x1f0000 | uVar8 & 0xff00ffff;
                    }
                    else {
                        uVar8 = uVar8 ^ ((uVar8 & 0xffe00000) + 0x200000 ^ uVar8) & 0xe00000;
                    }
                }
                uVar4 = fcn.00010cc4(uVar8);
                if (*((uVar4 >> 4 & uVar9 | uVar4 & 0xffffffff) + iVar10) != -1) {
                    uVar3 = fcn.00011028(uVar4);
                    uVar9 = 0x10000000;
                    iVar10 = 0xc0000000;
                    if (uVar3 != 0) {
                        uVar8 = uVar3 << 0x18 | uVar8 & 0xffffff;
                        fcn.00010da0(uVar8);
                        uVar9 = 0x10000000;
                        iVar10 = 0xc0000000;
                    }
                }
            }
        }
        if (iVar7 != 1) {
            fcn.00010d20(arg1 & 0xffffffff);
        }
    }
    return;
}


/* fcn.00010bb4 @ 0x10bb4 */

int64_t fcn.00010bb4(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    int64_t iVar3;
    int *piVar4;
    uint64_t uVar5;
    int64_t in_stack_00000028;
    ulong uStack_18;
    int *piStack_10;
    
    if ((*0x11250 == 0) && (fcn.00010aac(), *0x11250 == 0)) {
        iVar3 = -0x7ffffffffffffffa;
    }
    else {
        uStack_18 = 0;
        iVar3 = fcn.00010af0(arg1,noname_1,&piStack_10,&uStack_18);
        if (-1 < iVar3) {
            if (piStack_10 != NULL) {
                for (piVar4 = piStack_10; piVar4 <= piStack_10[1] + piStack_10; piVar4 = piVar4 + 1) {
                    if ((*piVar4 == arg2) && (*(piVar4 + -1) == '\b')) {
                        if (((in_stack_00000028 != 2) || (piVar4[1] != '\v')) &&
                           ((in_stack_00000028 != 4 || (piVar4[1] != '\f')))) {
                            return -0x7ffffffffffffffc;
                        }
                        if (piVar4 + 5 != arg3) {
                            fcn.000102a0(piVar4 + 5,arg3,in_stack_00000028);
                        }
                        pcVar1 = piStack_10 + 9;
                        cVar2 = '\0';
                        *pcVar1 = '\0';
                        for (uVar5 = piStack_10[1]; uVar5 != 0; uVar5 = uVar5 - 1) {
                            cVar2 = cVar2 + *piStack_10;
                            piStack_10 = piStack_10 + 1;
                        }
                        *pcVar1 = -cVar2;
                        return iVar3;
                    }
                }
            }
            iVar3 = -0x7ffffffffffffff2;
        }
    }
    return iVar3;
}


/* fcn.0001097c @ 0x1097c */

ulong fcn.0001097c(uint32_t arg1,ulong noname_1,int64_t arg2)

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
            if ((*(iVar2 + 8) == *0x111c0) && (*(iVar2 + 0x10) == *0x111c8)) {
                *arg2 = iVar2;
                return 0;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar4 < *(iVar1 + 0x1e));
    }
    return 0x800000000000000e;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 3712 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010aac @ 0x10aac */

void fcn.00010aac(void)

{
    (**(*0x11238 + 0x140))(70000,0,0x11248);
    //WARNING: Could not recover jumptable at 0x00010ae8. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x11238 + 0x140))(0x11160,0,0x11250);
    return;
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010af0 @ 0x10af0 */

int64_t fcn.00010af0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint auStackX_10 [2];
    int64_t aiStack_28 [2];
    
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg2);
    if ((*0x11248 == 0) && (fcn.00010aac(), *0x11248 == 0)) {
        return -0x7ffffffffffffffa;
    }
    auStackX_10[0] = 0;
    iVar3 = 0;
    do {
        iVar1 = (**(*0x11248 + 8))(iVar3,aiStack_28,auStackX_10,arg4);
        if (iVar1 == -0x7ffffffffffffff2) {
            return -0x7ffffffffffffff2;
        }
        iVar3 = iVar3 + 1;
        if (aiStack_28[0] + 0x10 == arg1) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.00010340(aiStack_28[0] + 0x10,arg1,8);
        }
    } while (iVar2 != 0);
    *arg3 = aiStack_28[0];
    return iVar1;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010cc4 @ 0x10cc4 */

uint64_t fcn.00010cc4(int64_t arg1)

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


/* fcn.00010d20 @ 0x10d20 */

void fcn.00010d20(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = arg1;
    uVar1 = (arg1 >> 8 & 0xe000 | uVar3 & 0x1f0000) >> 1;
    if (arg1 == '\0') {
        uVar2 = (uVar3 & 0xff00) << 0xc;
    }
    else {
        uVar1 = uVar1 | (uVar3 & 0xff00) << 0xc;
        uVar2 = (arg1 & 0xffU) << 0x20;
    }
    uVar2 = uVar2 >> 4 & 0x10000000 | uVar1 | uVar2 & 0xffffffff | 4;
    if ((*(uVar2 + 0xc0000000) & 4) != 0) {
        *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfffb;
    }
    return;
}


/* fcn.00011028 @ 0x11028 */

uint64_t fcn.00011028(int64_t arg1)

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


