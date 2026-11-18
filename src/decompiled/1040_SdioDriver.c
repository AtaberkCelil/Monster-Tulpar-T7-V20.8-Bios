// decompiled by r2ghidra: 1040_SdioDriver.pe32
// functions: 80

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010340(arg1,in_RDX);
    fcn.00010414(arg1,in_RDX);
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x16c30 = *(arg1 + 0x60);
    *0x16c38 = *(arg1 + 0x58);
    *0x16c28 = arg1;
    fcn.000140a8();
    puVar4 = fcn.000140a8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001039f:
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
            if ((*0x16ae8 == *(puVar4 + 4)) && (*0x16af0 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001039f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010414 @ 0x10414 */

void fcn.00010414(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    
    *0x16c50 = 0x1728;
    *0x169c0 = arg1;
    *0x169c8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x16c30 + 0x40))(6,0x1728,0x16c20);
    if (-1 < iVar1) {
        (**(*0x16c30 + 0x148))(0x169c8,0x16960,0x169a0,0x16910,0x16a40,0);
        (**(*0x16c30 + 0x170))(0x200,8,0x107cc,0,0x168f0,&iStackX_10);
        (**(*0x16c30 + 0x170))(0x200,8,0x106cc,0,0x16900,auStackX_8);
        (**(*0x16c30 + 0x170))(0x200,8,0x106cc,0x16970,0x16970,auStackX_18);
        (**(*0x16c30 + 0x170))(0x200,8,0x10ab4,0,0x16980,auStackX_20);
    }
    return;
}


/* fcn.000140a8 @ 0x140a8 */

int64_t fcn.000140a8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x16c40 == 0) {
        *0x16c40 = 0;
        if (*(*0x16c28 + 0x68) != 0) {
            piVar2 = *(*0x16c28 + 0x70);
            do {
                if ((*0x16940 == *piVar2) && (*0x16948 == piVar2[1])) {
                    *0x16c40 = (*(*0x16c28 + 0x70))[uVar1 * 3 + 2];
                    return *0x16c40;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x16c28 + 0x68));
        }
    }
    return *0x16c40;
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


/* fcn.00011c98 @ 0x11c98 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00011c98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_50h)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    ulong *arg2_00;
    ulong uVar7;
    uint16_t *puVar8;
    ulong uStackX_8;
    ulong uStackX_18;
    int64_t iStackX_20;
    char in_stack_00000028;
    int8_t var_34h;
    int8_t var_44h;
    int64_t var_48h;
    ulong in_stack_ffffffffffffffc0;
    uint uVar9;
    ulong auStack_38 [2];
    int64_t var_bp_10h;
    
    uVar9 = in_stack_ffffffffffffffc0 >> 0x20;
    auStack_38[0] = 0;
    piVar1 = arg4 + 0x38;
    piVar3 = *piVar1;
    if (piVar3 != piVar1) {
        do {
            piVar6 = piVar3 + -0xf;
            if (*(piVar3 + -0x6f) == in_stack_00000028) break;
            piVar3 = *piVar3;
            piVar6 = NULL;
        } while (piVar3 != piVar1);
        if ((piVar6 != NULL) && ((*(piVar6 + 10) - 2U & 0xfd) == 0)) {
            return 0;
        }
    }
    uStackX_8 = arg1;
    uStackX_18 = arg3;
    iVar4 = fcn.00011f64(arg4,CONCAT71(arg2 >> 8,in_stack_00000028));
    iVar5 = *0x16c30;
    for (piVar3 = *piVar1;
        (piVar6 = NULL, piVar3 != piVar1 && (piVar6 = piVar3 + -0xf, *(piVar3 + -0x6f) != in_stack_00000028));
        piVar3 = *piVar3) {
    }
    if (iVar4 < 0) {
        if (piVar6 == NULL) {
            return -0x7ffffffffffffff9;
        }
    }
    else {
        if (piVar6 == NULL) {
            return -0x7ffffffffffffff9;
        }
        *(piVar6 + 10) = 4;
        uVar7 = CONCAT44(uVar9,2);
        iVar5 = (**(iVar5 + 0x118))(arg2,0x16920,&iStackX_20,*0x169c8,arg2,uVar7);
        uVar9 = uVar7 >> 0x20;
        if (iVar5 < 0) {
            return -0x7ffffffffffffff9;
        }
        if ((*(piVar6[9] + 0x1c) - 2U & 0xfd) == 0) {
            arg2_00 = &uStackX_8;
            uStackX_8._0_5_ = CONCAT14(*(piVar6 + 9),0x51a03);
        }
        else {
            arg2_00 = &uStackX_18;
            uStackX_18._0_5_ = CONCAT14(*(piVar6 + 9),0x51d03);
        }
        iVar5 = fcn.00013fcc(iStackX_20,arg2_00);
        piVar6[0xb] = iVar5;
        iVar5 = (**(*0x16c30 + 0x148))(piVar6,0x16920,piVar6[0xb],0);
        if (-1 < iVar5) {
            uVar7 = 0x169d0;
            if (*(arg4 + 0x74) == 0) {
                uVar7 = 0x16930;
            }
            iVar5 = (**(*0x16c30 + 0x118))(arg2,uVar7,auStack_38,*0x169c8,*piVar6,CONCAT44(uVar9,8));
            if (iVar5 < 0) {
                return iVar5;
            }
            if (piVar6[1] == '\0') {
                return 0;
            }
            iVar5 = 0;
            puVar8 = piVar6 + 0xc;
            iVar4 = 0x1b;
            do {
                iVar2 = iVar5 + 0x68;
                iVar5 = iVar5 + 1;
                *puVar8 = *(iVar2 + piVar6[9]);
                puVar8 = puVar8 + 1;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar5 = fcn.00013824(piVar6);
            if (iVar5 < 0) {
                return -0x7ffffffffffffff9;
            }
            iVar5 = (**(*0x16c30 + 0x40))(4,0x20,&uStackX_18);
            if (iVar5 < 0) {
                return -0x7ffffffffffffff9;
            }
            piVar6[0xd] = uStackX_18;
            uStackX_18[3] = piVar6;
            uStackX_18[2] = 0x12f84;
            *uStackX_18 = 0x2003c;
            iVar5 = piVar6[9];
            if ((((*(iVar5 + 0x1c) - 0x10U & 0xef) == 0) || (*(iVar5 + 0x1c) != '\x02')) ||
               ((*(iVar5 + 0x3c) >> 0xe & 1) != 0)) {
                *(uStackX_18 + 1) = 1;
            }
            else {
                *(uStackX_18 + 1) = (*(iVar5 + 0x3c) >> 7 & 0x7f) + 1;
            }
            iVar5 = (**(*0x16c30 + 0x148))(piVar6,0x16990,piVar6[0xc],0x169f0,piVar6[0xd],0);
            if (iVar5 < 0) {
                return -0x7ffffffffffffff9;
            }
            if (*(*(piVar6[0xc] + 8) + 4) == '\0') {
                return 0;
            }
            (**(*0x16c30 + 0x108))(*piVar6,0,0,1);
            return 0;
        }
    }
    *(piVar6 + 10) = 2;
    return -0x7ffffffffffffff9;
}


/* fcn.00012358 @ 0x12358 */

int64_t * fcn.00012358(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    
    piVar1 = arg1 + 0x38;
    piVar4 = NULL;
    piVar2 = *piVar1;
    if (piVar2 != piVar1) {
        do {
            piVar5 = piVar2 + -0xf;
            if (*(piVar2 + -0x6f) == arg2) break;
            piVar2 = *piVar2;
            piVar5 = piVar4;
        } while (piVar2 != piVar1);
        if (((piVar5 != NULL) && (*(piVar5 + 10) == '\x04')) &&
           (piVar4 = NULL, (*(*(piVar5[9] + 8) + 0x24) >> 0x10 & 1) == 0)) {
            iVar3 = (**(*0x16c30 + 0x118))(*piVar5,0x16990,0,*0x169c8,*piVar5,4);
            if (-1 < iVar3) {
                (**(*0x16c30 + 0x90))(*piVar5,0x16990,piVar5[0xc]);
                (**(*0x16c30 + 0x48))(*(piVar5[0xc] + 8));
                (**(*0x16c30 + 0x48))(piVar5[0xc]);
            }
            (**(*0x16c30 + 0x120))(*arg1,0x16930,*0x169c8,*piVar5);
            iVar3 = (**(*0x16c30 + 0x118))(*piVar5,0x169f0,0,*0x169c8,*piVar5,4);
            if (-1 < iVar3) {
                (**(*0x16c30 + 0x90))(*piVar5,0x169f0,piVar5[0xd]);
                (**(*0x16c30 + 0x48))(piVar5[0xd]);
            }
            piVar4 = (**(*0x16c30 + 0x90))(*piVar5,0x16920,piVar5[0xb]);
            (**(*0x16c30 + 0x48))(piVar5[0xb]);
            *(piVar5[0xf] + 8) = piVar5[0x10];
            *piVar5[0x10] = piVar5[0xf];
            (**(*0x16c30 + 0x48))(piVar5);
        }
    }
    return piVar4;
}


/* fcn.0001454c @ 0x1454c */

ulong fcn.0001454c(int64_t arg1,int64_t noname_1,int64_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int iVar4;
    int iVar5;
    int64_t in_stack_00000028;
    
    iVar2 = *(arg1 + 8);
    iVar5 = 2000;
    iVar4 = 2000;
    do {
        uVar1 = *(iVar2 + 0x24);
        fcn.00014174(1,noname_1);
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
            return 0x8000000000000012;
        }
    } while ((uVar1 & 1) != 0);
    do {
        uVar1 = *(iVar2 + 0x24);
        fcn.00014174(1,noname_1);
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
            return 0x8000000000000012;
        }
    } while ((uVar1 & 2) != 0);
    *(iVar2 + 8) = arg3;
    *(iVar2 + 0xe) = arg2;
    if ((arg2 >> 8 & 0x3f) == 0x15) {
        uVar3 = 0;
    }
    else {
        uVar3 = fcn.00014634(arg1,noname_1,in_stack_00000028);
        if ((arg2 & 0x1b) == 0x1b) {
            iVar4 = 50000;
            do {
                uVar1 = *(iVar2 + 0x24);
                fcn.00014174(1,noname_1);
                iVar4 = iVar4 + -1;
                if ((uVar1 >> 0x14 & 1) != 0) break;
            } while (iVar4 != 0);
            if (iVar4 == 0) {
                return 0x8000000000000012;
            }
        }
    }
    return uVar3;
}


/* fcn.00014e6c @ 0x14e6c */

int64_t fcn.00014e6c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(arg1 + 8);
    *(iVar2 + 0xc) = 0;
    iVar3 = fcn.0001454c(arg1,arg2,0xd1a,*(arg1 + 0x34) << 0x10);
    if (-1 < iVar3) {
        uVar1 = *(iVar2 + 0x10);
        *(arg1 + 0xb4) = uVar1;
        *(arg1 + 0x1d) = uVar1 >> 9 & 0xf;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00013dc0 @ 0x13dc0 */

ulong fcn.00013dc0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x16c30 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 26208 named .text
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


/* fcn.00010904 @ 0x10904 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00010904(void)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    uchar uStackX_8;
    char cStackX_9;
    char cStackX_a;
    int64_t iStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    ulong uStack_48;
    ulong uStack_40;
    int64_t var_30h_2;
    int64_t var_28h_2;
    ulong uStack_28;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x16c30 + 0x138))(2,0x16930,0,&var_28h,&iStackX_10);
    if (-1 < iVar1) {
        uVar3 = 0;
        if (var_28h != 0) {
            do {
                iVar1 = (**(*0x16c30 + 0x98))(*(iStackX_10 + uVar3 * 8),0x16930,&var_bp_20h);
                if ((((-1 < iVar1) && (iVar1 = (**(var_bp_20h + 0x30))(var_bp_20h,0,9,3,&uStackX_8), -1 < iVar1))
                    && (cStackX_9 == '\x05')) && (cStackX_a == '\b')) {
                    iVar1 = fcn.00013dc0();
                    if ((iVar1 != 0) && (puVar2 = fcn.00010280(iVar1,0x40), puVar2 != NULL)) {
                        iVar1 = (**(var_bp_20h + 0x70))(var_bp_20h,&uStack_48,&uStack_40,&var_30h_2,&var_28h_2);
                        if (-1 < iVar1) {
                            puVar2[2] = uStack_48;
                            puVar2[3] = uStack_40;
                            puVar2[4] = var_30h_2;
                            puVar2[5] = var_28h_2;
                            iVar1 = (**(var_bp_20h + 0x58))(var_bp_20h,1,6,2,&uStack_28,0x80);
                            if (-1 < iVar1) {
                                puVar2[7] = uStack_28;
                                *puVar2 = 0x16cc0;
                                puVar2[1] = *0x16cc8;
                                **0x16cc8 = puVar2;
                                *0x16cc8 = puVar2;
                                goto code_r0x00010a80;
                            }
                        }
                        (**(*0x16c30 + 0x48))(puVar2);
                    }
                    break;
                }
code_r0x00010a80:
                uVar3 = uVar3 + 1;
            } while (uVar3 < var_28h);
        }
        (**(*0x16c30 + 0x48))(iStackX_10);
    }
    return;
}


/* fcn.00010d7c @ 0x10d7c */

ulong fcn.00010d7c(uint32_t arg1)

{
    char *pcVar1;
    uint in_register_0000000c;
    char *pcVar2;
    char *pcVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    pcVar3 = NULL;
    while ((pcVar2 = pcVar1, *pcVar2 != '\x7f' || (pcVar2[1] != -1))) {
        pcVar3 = pcVar2;
        pcVar1 = pcVar2 + *(pcVar2 + 2);
    }
    if ((pcVar3 != NULL) && (((pcVar3[1] == '\x04' && (*(pcVar3 + 4) == *0x16a18)) && (*(pcVar3 + 0xc) == *0x16a20)))) {
        return 0;
    }
    return 0x800000000000000e;
}


/* fcn.00013d48 @ 0x13d48 */

int64_t fcn.00013d48(int64_t arg1)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    
    pcVar3 = "en-US";
    cVar2 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar2 = cVar2 + -0x20;
    }
    cVar1 = str.en_US[0];
    if (str.en_US[0] + 0x9fU < 0x1a) {
        cVar1 = str.en_US[0] + -0x20;
    }
    if (*arg1 != '\0') {
        do {
            if ((*pcVar3 == '\0') || (cVar2 != cVar1)) break;
            pcVar3 = pcVar3 + 1;
            cVar2 = pcVar3[arg1 + -0x16b60];
            if (cVar2 + 0x9fU < 0x1a) {
                cVar2 = cVar2 + -0x20;
            }
            cVar1 = *pcVar3;
            if (cVar1 + 0x9fU < 0x1a) {
                cVar1 = cVar1 + -0x20;
            }
        } while (pcVar3[arg1 + -0x16b60] != '\0');
    }
    return cVar2 - cVar1;
}


/* fcn.00011aa0 @ 0x11aa0 */

int64_t fcn.00011aa0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_8;
    
    if (arg3 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iStackX_8 = arg1;
        (**(*0x16c30 + 0x168))(arg2,0x80,0);
        *arg2 = iStackX_8;
        iVar1 = arg2 + 0x38;
        *(arg2 + 0x50) = arg3;
        *(arg2 + 0x74) = arg4;
        *iVar1 = iVar1;
        *(arg2 + 0x40) = iVar1;
        iVar1 = fcn.00011b5c(arg2);
        if (-1 < iVar1) {
            if (*0x16c18 != 0) {
                (**(*0x16c30 + 0x58))(*0x16c18,0,1000000);
            }
            iVar1 = (**(*0x16c30 + 0x80))(&iStackX_8,0x16950,0,arg2);
        }
    }
    return iVar1;
}


/* fcn.0001056c @ 0x1056c */

void fcn.0001056c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint64_t arg1_00;
    int64_t *piVar4;
    char cVar5;
    uint64_t arg3;
    ulong unaff_RSI;
    uint64_t uVar6;
    int64_t *apiStackX_8 [2];
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    uint32_t var_40h;
    int64_t var_48h;
    
    apiStackX_8[0] = NULL;
    if (arg1 != 0) {
        (**(*0x16c30 + 0x58))(arg1,0,1000000);
    }
    iVar2 = (**(*0x16c30 + 0x138))(2,0x16950,0,&uStackX_18,&iStackX_20);
    if (-1 < iVar2) {
        uVar6 = 0;
        if (uStackX_18 != 0) {
            do {
                (**(*0x16c30 + 0x98))(*(iStackX_20 + uVar6 * 8),0x16950,apiStackX_8);
                if ((apiStackX_8[0] != NULL) && (arg3 = 0, apiStackX_8[0][0xe] != '\0')) {
                    do {
                        cVar5 = arg3;
                        arg1_00 = *(apiStackX_8[0][arg3 + 1] + 0x24) >> 0x10 & 0xffffffffffffff01;
                        if ((*(arg3 + 0x78 + apiStackX_8[0]) != arg1_00) &&
                           (iVar2 = fcn.00011c98(arg1_00,*apiStackX_8[0],arg3,apiStackX_8[0],unaff_RSI), -1 < iVar2
                           )) {
                            piVar1 = apiStackX_8[0] + 7;
                            piVar3 = *piVar1;
                            if (piVar3 != piVar1) {
                                do {
                                    piVar4 = piVar3 + -0xf;
                                    if (*(piVar3 + -0x6f) == cVar5) break;
                                    piVar3 = *piVar3;
                                    piVar4 = NULL;
                                } while (piVar3 != piVar1);
                                if ((piVar4 != NULL) && (*(*(piVar4[0xc] + 8) + 4) == '\x01')) {
                                    fcn.00012358(apiStackX_8[0],CONCAT71(piVar1 >> 8,cVar5));
                                }
                            }
                        }
                        arg3 = cVar5 + 1U;
                    } while (cVar5 + 1U < *(apiStackX_8[0] + 0xe));
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStackX_18);
        }
        (**(*0x16c30 + 0x48))(iStackX_20);
        if (arg1 == 0) {
            return;
        }
    }
    (**(*0x16c30 + 0x58))(arg1,1,1000000);
    return;
}


/* fcn.0001250c @ 0x1250c */

void fcn.0001250c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong *apuStackX_8 [4];
    
    *0x16c50 = 0x1728;
    (**(*0x16c30 + 0x168))(*0x16c20,0x1728,0);
    iVar2 = (**(*0x16c30 + 0x140))(0x168e0,0,apuStackX_8);
    iVar1 = *0x16c20;
    if (-1 < iVar2) {
        (**(*0x16c30 + 0x160))(*0x16c20,0x16a30,0x10);
        iVar2 = *0x16c30;
        *(iVar1 + 0x10) = 0x1710;
        (**(iVar2 + 0x160))(iVar1 + 0x18,*0x16c10);
        (**apuStackX_8[0])(apuStackX_8[0],*0x16c20,0x16c50);
    }
    return;
}


/* fcn.00011b5c @ 0x11b5c */

int64_t fcn.00011b5c(uint32_t arg1)

{
    uint8_t *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    char cVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    uint8_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    bool bVar13;
    uint64_t auStack_38 [5];
    uint8_t uStack_10;
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar7 + 0x74) == 0) {
        iVar3 = (**(*(iVar7 + 0x50) + 0x30))(*(iVar7 + 0x50),0,0,0x29,auStack_38);
        if (iVar3 < 0) {
            return iVar3;
        }
        cVar6 = (uStack_10 >> 4 & 7) + 1;
        uVar12 = ((uStack_10 & 7) + 4) * '\x04';
        uVar11 = 0xfffffff0;
        *(iVar7 + 0x70) = cVar6;
        bVar13 = (*(auStack_38 + uVar12) & 6) == 4;
        if (bVar13) {
            uVar11 = 0xfffffffffffffff0;
        }
        uVar10 = 8;
        if (!bVar13) {
            uVar10 = 4;
        }
        uVar9 = 0;
        if (cVar6 != '\0') {
            do {
                uVar4 = *(auStack_38 + uVar10 * uVar9 + uVar12) & uVar11;
                *(iVar7 + 8 + uVar9 * 8) = uVar4;
                if (uVar4 == 0) {
                    return -0x7ffffffffffffff9;
                }
                uVar8 = uVar9 + 1;
                uVar9 = uVar8;
            } while (uVar8 < *(iVar7 + 0x70));
        }
    }
    if (*(iVar7 + 0x74) == 1) {
        puVar2 = *(iVar7 + 0x50);
        puVar1 = iVar7 + 0x70;
        iVar3 = (**puVar2)(puVar2,puVar1);
        if ((iVar3 < 0) || (*puVar1 == 0)) {
            return -0x7ffffffffffffff9;
        }
        uVar11 = 0;
        if (*puVar1 != 0) {
            do {
                iVar3 = iVar7 + uVar11 * 8;
                iVar5 = (*puVar2[1])(puVar2,uVar11,iVar3 + 8);
                if (iVar5 < 0) {
                    return -0x7ffffffffffffff9;
                }
                if (*(iVar3 + 8) == 0) {
                    return -0x7ffffffffffffff9;
                }
                uVar10 = uVar11 + 1;
                uVar11 = uVar10;
            } while (uVar10 < *puVar1);
        }
    }
    return 0;
}


/* fcn.00011f64 @ 0x11f64 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong * fcn.00011f64(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    ulong *puVar6;
    ulong *arg1_00;
    char cVar7;
    uint32_t in_R8D;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t aiStack_48 [2];
    int64_t var_10h;
    int64_t var_8h;
    
    puVar6 = NULL;
    puVar5 = arg1 + 0x38;
    puVar2 = *puVar5;
    cVar7 = arg2;
    iStackX_18 = 0;
    iStackX_20 = 0;
    for (; (arg1_00 = puVar6, puVar2 != puVar5 && (arg1_00 = puVar2 + -0xf, *(puVar2 + -0x6f) != cVar7));
        puVar2 = *puVar2) {
    }
    iVar4 = arg2;
    if (arg1_00 == NULL) {
        puVar2 = (**(*0x16c30 + 0x40))(4,0x88);
        if (puVar2 < 0) {
            return puVar2;
        }
        in_R8D = 0;
        iVar4 = 0;
        (**(*0x16c30 + 0x168))(0,0x88);
        *0xa = 1;
        *0x80 = *(arg1 + 0x40);
        *0x9 = cVar7;
        *0x50 = arg1;
        *0x78 = puVar5;
        **0x80 = 0x78;
        *(arg1 + 0x40) = 0x78;
    }
    iVar4 = CONCAT71(iVar4 >> 8,cVar7);
    iVar3 = fcn.00012224(arg1_00,iVar4,in_R8D);
    if (iVar3 < 0) {
        *((arg2 & 0xffU) + 0x78 + arg1) = 0;
code_r0x0001203c:
        *(arg1_00[0xf] + 8) = arg1_00[0x10];
        *arg1_00[0x10] = arg1_00[0xf];
        (**(*0x16c30 + 0x48))(arg1_00);
        return 0x8000000000000007;
    }
    *((arg2 & 0xffU) + 0x78 + arg1) = 1;
    iVar3 = fcn.00012e10(arg1_00[9],iVar4);
    if ((-1 < iVar3) && (*(arg1_00[9] + 0x12) == '\x01')) {
        *(arg1_00 + 1) = 0;
        return NULL;
    }
    iVar4 = fcn.000141a8(arg1_00[9],CONCAT71(iVar4 >> 8,cVar7));
    if (iVar4 < 0) goto code_r0x0001203c;
    *(arg1_00 + 1) = 1;
    puVar5 = fcn.00012850(arg1_00[9]);
    if (puVar5 < 0) {
        return puVar5;
    }
    iVar4 = arg1_00[9];
    uVar1 = *(*(iVar4 + 8) + 0x40);
    if ((**0x16c10 == '\0') || (**0x16c10 == '\x01')) {
        if (((uVar1 >> 0x13 & 1) == 0) || (*(iVar4 + 0xad) == '\0')) {
            *(iVar4 + 0xb0) = uVar1 >> 0x16 & 1;
            goto code_r0x00012153;
        }
code_r0x00012107:
        *(iVar4 + 0xb0) = 2;
    }
    else {
        if (**0x16c10 == '\x02') {
            if ((uVar1 >> 0x16 & 1) != 0) {
                *(iVar4 + 0xb0) = 1;
                goto code_r0x00012153;
            }
            if (((uVar1 >> 0x13 & 1) != 0) && (*(iVar4 + 0xad) != '\0')) goto code_r0x00012107;
        }
        else if (**0x16c10 != '\x03') goto code_r0x00012153;
        *(iVar4 + 0xb0) = 0;
    }
code_r0x00012153:
    puVar5 = puVar6;
    if (*0x16c58 == 0) {
        puVar6 = (**(*0x16c30 + 0x28))(0,4,1,aiStack_48);
        *0x16c58 = aiStack_48[0];
        puVar5 = NULL;
        if (*(arg1 + 0x74) == 0) {
            puVar5 = *(arg1 + 0x50);
            aiStack_48[1] = 0x1000;
            puVar6 = (*puVar5[9])(puVar5,2,aiStack_48[0],aiStack_48 + 1,&iStackX_18,&iStackX_20);
            if (puVar6 < 0) {
                return puVar6;
            }
            *0x16c58 = iStackX_18;
        }
    }
    fcn.000125bc(arg1_00[9]);
    if (*0x16c58 != 0) {
        puVar6 = (**(*0x16c30 + 0x30))(*0x16c58,1);
        if (((*(arg1 + 0x74) == 0) && (puVar5 != NULL)) && (iStackX_20 != 0)) {
            (*puVar5[10])(puVar5);
        }
        *0x16c58 = 0;
    }
    return puVar6;
}


/* fcn.00013fcc @ 0x13fcc */

ulong fcn.00013fcc(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x16bc4;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00013e8c(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00013df0(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00013dc0(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.000102a0(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x16bc4) {
                fcn.000102a0(iVar4,0x16bc4,4);
            }
            uVar2 = fcn.00013edc(arg1,iVar3);
            (**(*0x16c30 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00013824 @ 0x13824 */

//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00013824(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint *puStackX_8;
    ulong *puStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    
    iVar2 = *(arg1 + 0x48);
    iVar3 = (**(*0x16c30 + 0x40))(4,0x38,&puStackX_10);
    if (-1 < iVar3) {
        iVar3 = (**(*0x16c30 + 0x40))(4,0x30,&puStackX_8);
        if (iVar3 < 0) {
            (**(*0x16c30 + 0x48))(puStackX_10);
        }
        else {
            (**(*0x16c30 + 0x168))(puStackX_8,0x30);
            *(arg1 + 0x60) = puStackX_10;
            puStackX_10[6] = arg1;
            puStackX_10[1] = puStackX_8;
            puStackX_10[2] = 0x139ec;
            puStackX_10[3] = 0x139ac;
            puStackX_10[4] = 0x139cc;
            puStackX_10[5] = 0x139ec;
            *puStackX_8 = 0;
            *(puStackX_8 + 1) = (*(*(*(arg1 + 0x50) + 8 + *(arg1 + 9) * 8) + 0x40) & 0xc0000000) != 0x40000000;
            *(puStackX_8 + 5) = 1;
            *(puStackX_8 + 6) = 0;
            *(puStackX_8 + 7) = 0;
            *(puStackX_8 + 2) = 0;
            puStackX_8[3] = 0x200;
            iVar1 = *(iVar2 + 0xb0);
            if (iVar1 == 2) {
                puStackX_8[4] = 4;
            }
            else if (iVar1 == 1) {
                puStackX_8[4] = 0x1000;
            }
            puStackX_8[10] = 1;
            *(puStackX_8 + 8) = 0;
            puStackX_8[0xb] = puStackX_8[3];
            *puStackX_10 = 0x2001f;
            *(puStackX_8 + 6) = *(*(arg1 + 0x48) + 0x60);
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00012224 @ 0x12224 */

ulong fcn.00012224(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    int64_t iVar6;
    
    iVar6 = *(arg1 + 0x50);
    uVar5 = 0;
    do {
        if (*(uVar5 * 0x2e0 + 0x10 + *0x16c10) == '\0') goto code_r0x00012261;
        uVar5 = uVar5 + 1;
    } while (uVar5 < 8);
    uVar5 = 0xff;
code_r0x00012261:
    if (uVar5 == 0xff) {
        uVar1 = 0x8000000000000007;
    }
    else {
        iVar2 = uVar5 * 0x2e0;
        *(iVar2 + 0x18 + *0x16c10) = *(iVar6 + 8 + arg2 * 8);
        *(iVar2 + 0x2e8 + *0x16c10) = *(iVar6 + 0x60);
        iVar6 = *0x16c10 + 0x10 + iVar2;
        *(arg1 + 0x48) = iVar6;
        uVar4 = 0;
        do {
            uVar3 = uVar4;
            if (*(uVar4 * 9 + 0x16c6b) == *(iVar2 + 0x18 + *0x16c10)) goto code_r0x000122e5;
            uVar4 = uVar3 + 1;
        } while (uVar3 + 1 < 8);
        uVar3 = 0xff;
code_r0x000122e5:
        if (uVar3 != 0xff) {
            *(iVar6 + 0x54) = *(uVar3 * 9 + 0x16c6a);
        }
        iVar6 = *(arg1 + 0x48);
        if ((*(*(iVar6 + 8) + 0x24) >> 0x10 & 1) == 0) {
            uVar1 = 0x800000000000000e;
        }
        else {
            *(iVar6 + 0x1d) = 0;
            *(iVar6 + 0xad) = *(*(iVar6 + 8) + 0xfe);
            **(arg1 + 0x48) = 1;
            *(*(arg1 + 0x48) + 1) = uVar5 + 1;
            *(*(arg1 + 0x48) + 0x10) = *(arg1 + 9);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.00012e10 @ 0x12e10 */

int64_t fcn.00012e10(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    int64_t extraout_RAX_05;
    int64_t extraout_RAX_06;
    uint8_t uVar4;
    uint8_t uVar5;
    unkbyte7 Var6;
    
    uVar4 = arg2;
    Var6 = arg2 >> 8;
    uVar5 = uVar4;
    iVar3 = fcn.00014408(arg1);
    if (-1 < iVar3) {
        fcn.0001454c(arg1,CONCAT71(Var6,uVar5),0,0);
        iVar3 = extraout_RAX;
        if (-1 < extraout_RAX) {
            iVar3 = *(arg1 + 8);
            fcn.0001454c(arg1,CONCAT71(Var6,uVar5),0x502,0);
            if (extraout_RAX_00 < 0) {
                iVar3 = extraout_RAX_00;
            }
            else {
                uVar1 = *(iVar3 + 0x10);
                uVar5 = uVar1 >> 0x18;
                *(arg1 + 0x13) = uVar5 >> 4 & 7;
                *(arg1 + 0x20) = uVar1 & 0xffffff;
                uVar4 = uVar5 >> 3 & 1;
                iVar3 = 0;
            }
            if (((iVar3 < 0) || (uVar4 != 0)) || (uVar5 = 0, *(arg1 + 0x13) == '\0')) {
                iVar3 = -0x7ffffffffffffff2;
            }
            else {
                iVar2 = *(arg1 + 8);
                *(arg1 + 0x12) = 1;
                uVar4 = 0x17;
                do {
                    if ((*(arg1 + 0x20) >> (uVar4 & 0x1f) & 1) != 0) {
                        uVar5 = uVar4;
                        break;
                    }
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
                fcn.0001454c(arg1,CONCAT71(Var6,uVar5),0x502,1 << (uVar5 & 0x1f));
                iVar3 = extraout_RAX_01;
                if (-1 < extraout_RAX_01) {
                    fcn.0001454c(arg1,CONCAT71(Var6,uVar5),0x31a,0);
                    iVar3 = extraout_RAX_02;
                    if (-1 < extraout_RAX_02) {
                        *(arg1 + 0x34) = *(iVar2 + 0x10) >> 0x10;
                        *(arg1 + 0x1d) = 3;
                        fcn.00014de0(arg1,CONCAT71(Var6,uVar5));
                        iVar3 = extraout_RAX_03;
                        if (-1 < extraout_RAX_03) {
                            fcn.000129c8(arg1,CONCAT71(Var6,uVar5));
                            iVar3 = extraout_RAX_04;
                            if (-1 < extraout_RAX_04) {
                                fcn.00012c18(arg1,CONCAT71(Var6,uVar5));
                                iVar3 = extraout_RAX_05;
                                if (-1 < extraout_RAX_05) {
                                    fcn.00012b3c(arg1,CONCAT71(Var6,uVar5));
                                    iVar3 = 0;
                                    if (extraout_RAX_06 < 0) {
                                        iVar3 = extraout_RAX_06;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return iVar3;
}


/* fcn.000141a8 @ 0x141a8 */

int64_t fcn.000141a8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    
    iVar1 = *(arg1 + 8);
    uVar2 = arg2;
    iVar4 = fcn.00014408(arg1);
    if (iVar4 < 0) {
        return iVar4;
    }
    iVar4 = fcn.00016434(arg1,arg2);
    if (iVar4 == -0x7ffffffffffffff2) {
        iVar4 = fcn.00014408(arg1);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = fcn.00015ec8(arg1,CONCAT71(arg2 >> 8,uVar2));
        if (iVar4 < 0) {
            *arg1 = 0;
            return iVar4;
        }
    }
    uVar3 = *(iVar1 + 0xfe);
    if ((((*(iVar1 + 0x40) >> 0x1c & 1) == 0) || (uVar3 != 3)) && (((*(iVar1 + 0x40) >> 0x1b & 1) == 0 || (uVar3 < 4))))
    {
        *(arg1 + 0x2d0) = 0;
    }
    else {
        *(iVar1 + 0x3e) = *(iVar1 + 0x3e) | 0x3000;
        *(arg1 + 0x2d0) = 1;
    }
    return iVar4;
}


/* fcn.00012850 @ 0x12850 */

ulong fcn.00012850(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    char *pcVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    
    puVar7 = arg1 + 0x30;
    bVar2 = false;
    uVar5 = 0;
    iVar8 = 5;
    puVar3 = puVar7;
    do {
        if (*puVar3 != 0x30) break;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + -1;
    } while (uVar5 < 5);
    if ((*(arg1 + 0x1c) - 0x10U & 0xef) == 0) {
        if (uVar5 != 5) {
            pcVar6 = "eMMC ";
            goto code_r0x0001294a;
        }
        pcVar6 = "MMC Memory Card - Device ";
    }
    else {
        if (uVar5 != 5) {
            if (*(arg1 + 0x60) < 0x400001) {
                pcVar6 = "SDSC - ";
            }
            else {
                pcVar6 = "SDHC - ";
                if (0x4000000 < *(arg1 + 0x60)) {
                    pcVar6 = "SDXC - ";
                }
            }
code_r0x0001294a:
            uVar4 = 0;
            while( true ) {
                cVar1 = *pcVar6;
                if (cVar1 == '\0') break;
                pcVar6 = pcVar6 + 1;
                *(uVar4 + 0x68 + arg1) = cVar1;
                uVar4 = uVar4 + 1;
            }
            puVar3 = arg1 + 0x68 + uVar4;
            iVar9 = 5;
            do {
                uVar5 = 0x20;
                if (0x1f < *puVar7) {
                    uVar5 = *puVar7;
                }
                puVar7 = puVar7 + -1;
                *puVar3 = uVar5;
                puVar3 = puVar3 + 1;
                iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            if ((*(arg1 + 0x1c) - 0x10U & 0xef) == 0) {
                iVar9 = 6;
                uVar5 = 0x20;
                if (0x1f < *puVar7) {
                    uVar5 = *puVar7;
                }
                *(uVar4 + 0x6d + arg1) = uVar5;
            }
            uVar4 = iVar9 + uVar4;
            goto code_r0x000129b5;
        }
        pcVar6 = "SD Memory Card - Device ";
        bVar2 = true;
    }
    uVar5 = 0;
    while( true ) {
        uVar4 = uVar5;
        if (*pcVar6 == '\0') break;
        uVar5 = uVar5 + 1;
        *(uVar4 + 0x68 + arg1) = *pcVar6;
        pcVar6 = pcVar6 + 1;
    }
    if (bVar2) {
        *(uVar4 + 0x68 + arg1) = *0x16a28;
        *0x16a28 = *0x16a28 + '\x01';
    }
    else if (*(arg1 + 0xac) == '\0') {
        *(uVar4 + 0x68 + arg1) = *0x16a00 + -1;
    }
    else {
        *(uVar4 + 0x68 + arg1) = *0x16a00;
        *0x16a00 = *0x16a00 + '\x01';
    }
    uVar4 = uVar5 + 1;
code_r0x000129b5:
    *(uVar4 + 0x68 + arg1) = 0;
    return 0;
}


/* fcn.000125bc @ 0x125bc */

void fcn.000125bc(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char cVar4;
    int64_t extraout_RAX;
    uint8_t *puVar5;
    int64_t extraout_RAX_00;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t *puVar6;
    uchar in_DL;
    char cVar7;
    unkbyte7 in_RDX;
    int16_t iVar8;
    uint8_t uVar9;
    int16_t iVar10;
    
    iVar3 = *0x16c58;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar6 = NULL;
    iVar10 = 0;
    if (*(arg1_00 + 0x54) != 0) {
        iVar10 = *(*(arg1_00 + 0x54) * 2 + 0x16bb8);
    }
    iVar8 = 0x102;
    fcn.00015214(arg1,CONCAT71(in_RDX,in_DL),0,1);
    if (extraout_RAX < 0) {
code_r0x00012635:
        if ((*(arg1_00 + 0x60) & 0xfffff800) < 0x109001) goto code_r0x00012649;
    }
    else {
        cVar7 = '\0';
        *(arg1_00 + 0x56) = 0;
        if (*(iVar3 + 0x1fe) != -0x55ab) {
            fcn.00012754(arg1_00,CONCAT71(in_RDX,in_DL));
            goto code_r0x00012635;
        }
        uVar1 = *(arg1_00 + 0x60);
        uVar9 = 0;
        puVar5 = iVar3 + 0x1be;
        do {
            if (((*puVar5 & 0x7f) != 0) || (uVar1 < *(puVar5 + 8))) goto code_r0x00012727;
            cVar7 = cVar7 + '\x01';
            if ((*puVar5 < '\0') && (puVar6 == NULL)) {
                puVar6 = puVar5;
            }
            uVar9 = uVar9 + 1;
            puVar5 = puVar5 + 0x10;
        } while (uVar9 < 4);
        if (cVar7 == '\0') {
code_r0x00012727:
            cVar4 = fcn.0001279c(arg1_00,CONCAT71(in_RDX,cVar7),iVar3);
            if ((cVar4 == '\0') || (fcn.00012754(arg1_00,CONCAT71(in_RDX,cVar7)), *(arg1_00 + 0x60) < 0x109000))
            goto code_r0x00012649;
        }
        else {
            puVar5 = iVar3 + 0x1be;
            if (puVar6 != NULL) {
                puVar5 = puVar6;
            }
            uVar2 = *(puVar5 + 8);
            *(arg1_00 + 0x56) = uVar2;
            fcn.00015214(arg1,CONCAT71(in_RDX,cVar7),uVar2,1);
            if (extraout_RAX_00 < 0) goto code_r0x00012635;
            cVar4 = fcn.0001279c(arg1_00,CONCAT71(in_RDX,cVar7),iVar3);
            if (cVar4 == '\0') {
                iVar8 = (-(uVar1 < 0x109000) & 0x101) + 0x201;
                goto code_r0x00012649;
            }
            fcn.00012754(arg1_00,CONCAT71(in_RDX,cVar7));
        }
        *(arg1_00 + 0x56) = 0;
    }
    iVar8 = 0x201;
code_r0x00012649:
    if (iVar10 != 0) {
        iVar8 = iVar10;
    }
    *(arg1_00 + 0x66) = iVar8;
    *(arg1_00 + 0x67) = iVar8 >> 8;
    return;
}


/* fcn.00015214 @ 0x15214 */

int64_t fcn.00015214(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t arg2_00;
    uint64_t arg2_01;
    int64_t iVar2;
    uint64_t in_stack_00000028;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    arg2_01 = arg3 & 0xffffffff;
    arg2_00 = 0xfff;
    if (((*(arg1_00 + 0x2d0) == '\0') &&
        ((((in_stack_00000028 & 0xffffffff00000000) != 0 || ((*(arg1_00 + 0xb0) == 2 && ((in_stack_00000028 & 3) != 0)))
          ) || ((*(arg1_00 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))) ||
       ((*(arg1_00 + 0x2d0) == '\x01' &&
        (((*(arg1_00 + 0xb0) == 2 && ((in_stack_00000028 & 7) != 0)) ||
         ((*(arg1_00 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))))) {
        *0x16c48 = 0;
    }
    else {
        *0x16c48 = *(arg1_00 + 0xb0);
    }
    iVar2 = *(arg1_00 + 0x2d8);
    iVar1 = fcn.00014e6c(arg1_00,0xfff);
    if ((iVar1 < 0) || (*(arg1_00 + 0x1d) != '\x04')) {
code_r0x000152ba:
        iVar2 = -0x7ffffffffffffff9;
    }
    else {
        if (*0x16c48 == 2) {
            iVar2 = fcn.0001564c(arg1,arg2_01,in_stack_00000028,iVar2);
            arg2_00 = arg2_01;
            if (iVar2 < 0) goto code_r0x000152ba;
        }
        iVar2 = fcn.00015548(arg1_00,arg2_00,arg2,arg3);
        if (-1 < iVar2) {
            iVar2 = fcn.00014ed0(arg1_00,arg2_00,&stack0x00000028,*(arg1_00 + 100));
            if (iVar2 < 0) {
                fcn.000151b8(arg1_00,arg2_00);
            }
            else {
                iVar2 = fcn.000151b8(arg1_00,arg2_00);
                if (iVar2 < 0) {
                    iVar2 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00012754 @ 0x12754 */

ulong fcn.00012754(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    *(arg1 + 0x57) = 0xffff;
    *(arg1 + 0x5e) = 0x3f3f;
    uVar1 = *(arg1 + 0x60) / 0x3ec1;
    if (uVar1 < 2) {
        uVar1 = uVar1 + 1;
    }
    if (0xffff < uVar1) {
        uVar1 = 0xffff;
    }
    *(arg1 + 0x5a) = uVar1;
    *(arg1 + 0x5c) = uVar1;
    return 0xff00;
}


/* fcn.0001279c @ 0x1279c */

int64_t fcn.0001279c(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint in_R8;
    
    uVar4 = 0xaa55;
    if ((*(CONCAT44(in_R8,arg2) + 0x1fe) == -0x55ab) &&
       ((((*(CONCAT44(in_R8,arg2) + 3) == 0x4f44534d || (*(CONCAT44(in_R8,arg2) + 3) == 0x4957534d)) ||
         (*(CONCAT44(in_R8,arg2) + 3) == 0x5346544e)) ||
        ((*(CONCAT44(in_R8,arg2) + 0x39) = 0x20, *(CONCAT44(in_R8,arg2) + 0x36) == 0x20544146 ||
         (*(CONCAT44(in_R8,arg2) + 0x52) == 0x33544146)))))) {
        uVar1 = *(CONCAT44(in_R8,arg2) + 0x18);
        uVar2 = *(CONCAT44(in_R8,arg2) + 0x1a);
        uVar4 = uVar1 * uVar2;
        if (uVar1 * uVar2 != 0) {
            if (*(CONCAT44(in_R8,arg2) + 0x13) != 0) {
                *(arg1 + 0x60) = *(CONCAT44(in_R8,arg2) + 0x13);
            }
            *(arg1 + 0x57) = uVar2;
            *(arg1 + 0x58) = uVar2;
            *(arg1 + 0x5e) = uVar1;
            *(arg1 + 0x5f) = uVar1;
            uVar3 = *(arg1 + 0x60) / (uVar1 * uVar2);
            if (uVar3 < 2) {
                uVar3 = uVar3 + 1;
            }
            if (0xffff < uVar3) {
                uVar3 = 0xffff;
            }
            *(arg1 + 0x5a) = uVar3;
            *(arg1 + 0x5c) = uVar3;
            return (uVar3 >> 8) << 8;
        }
    }
    return CONCAT71(uVar4 >> 8,0xff);
}


/* fcn.00014b10 @ 0x14b10 */

int64_t fcn.00014b10(uint32_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar4;
    int64_t arg2_00;
    uint64_t noname_1;
    int64_t iVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uStackX_10;
    uint16_t in_stack_00000030;
    char in_stack_00000038;
    uint32_t uStack_48;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_10 = CONCAT31(uStackX_10._1_3_,arg2);
    uVar1 = *(arg1_00 + 8);
    uVar6 = arg4 >> 0x1c & 7;
    *(arg1_00 + 0x14) = uVar6;
    iVar5 = -0x7ffffffffffffff9;
    uStack_48 = uStack_48 & 0xffff0000;
    if (uVar6 <= *(arg1_00 + 0x13)) {
        if (arg3 == 0x34) {
            iVar5 = fcn.00014ac0(arg1_00,arg2);
            return iVar5;
        }
        if (arg3 == 0x35) {
            uVar7 = in_stack_00000030 | 0x3400;
            uVar2 = (arg4 & 0xffffffffU) >> 0x1b;
            uVar8 = arg4 & 0x1ff;
            iVar3 = fcn.00014ac0(arg1_00,arg2);
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar9 = *(arg1_00 + 8);
            iVar3 = fcn.0001454c(arg1_00,arg2,uVar7,uStackX_10 | 0x80000e80);
            arg2_00 = 0;
            if (iVar3 < 0) {
                return iVar3;
            }
            if ((*(uVar9 + 0x10) >> 8 & 0xcb) == 0) {
                if ((uVar2 & 1) == 0) {
                    noname_1 = uStack_48;
                    uVar9 = 1;
                }
                else {
                    if ((*(arg1_00 + 0x15) & 2) == 0) {
                        return -0x7ffffffffffffff9;
                    }
                    iVar3 = fcn.00014ac0(arg1_00,0);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    iVar3 = fcn.00014ac0(arg1_00,arg2_00);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    noname_1 = 0x22;
                    uVar9 = uVar8;
                    uVar8 = uStackX_10 * 0x101;
                }
                uVar4 = uVar1;
                *(uVar4 + 4) = uVar8;
                uVar7 = noname_1 | 0x10;
                if (in_stack_00000038 == '\0') {
                    uVar7 = noname_1;
                }
                *(uVar4 + 6) = uVar9;
                *(uVar4 + 0xc) = uVar7;
                uVar1 = *(arg1_00 + 8);
                iVar3 = fcn.0001454c(arg1_00,noname_1,in_stack_00000030 | 0x3520,arg4);
                if (iVar3 < 0) {
                    return iVar3;
                }
                if ((*(uVar1 + 0x10) >> 8 & 0xcb) == 0) {
                    uVar1 = uVar8 * uVar9;
                    if ((uVar2 & 1) != 0) {
                        uVar1 = uVar8;
                    }
                    iVar5 = fcn.00014ed0(arg1_00,0,&stack0x00000028,uVar1);
                }
            }
        }
    }
    return iVar5;
}


/* fcn.00014174 @ 0x14174 */

int64_t fcn.00014174(int64_t arg1,int64_t arg2)

{
    fcn.00014114((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00014114 @ 0x14114 */

void fcn.00014114(int64_t arg1)

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


/* fcn.00014408 @ 0x14408 */

int64_t fcn.00014408(int64_t arg1)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar2;
    uchar uVar3;
    unkbyte7 in_RDX;
    uint32_t in_R9D;
    
    iVar1 = *(arg1 + 8);
    uVar3 = 1;
    fcn.000144d4(arg1,CONCAT71(in_RDX,1));
    iVar2 = extraout_RAX;
    if (-1 < extraout_RAX) {
        *(iVar1 + 0x34) = *(iVar1 + 0x34) | 0x1ff;
        *(iVar1 + 0x36) = *(iVar1 + 0x36) | 0xfff;
        *(iVar1 + 0x38) = *(iVar1 + 0x38) | 0xff;
        *(iVar1 + 0x3a) = *(iVar1 + 0x3a) | 0xff;
        *(*(arg1 + 8) + 0x2e) = 0xe;
        if ((*(iVar1 + 0x40) >> 0x18 & 1) == 0) {
            if ((*(iVar1 + 0x40) >> 0x19 & 1) == 0) {
                *(iVar1 + 0x29) = 10;
                *(arg1 + 0xbc) = 0;
            }
            else {
                *(iVar1 + 0x29) = 0xc;
                *(arg1 + 0xbc) = 0x60000;
            }
        }
        else {
            *(iVar1 + 0x29) = 0xe;
            *(arg1 + 0xbc) = 0x300000;
        }
        *(iVar1 + 0x29) = *(iVar1 + 0x29) | 1;
        fcn.00014258(arg1,CONCAT71(in_RDX,uVar3),400000,in_R9D);
        iVar2 = extraout_RAX_00;
        if (-1 < extraout_RAX_00) {
            fcn.00014174(1000,CONCAT71(in_RDX,uVar3));
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00014de0 @ 0x14de0 */

uint64_t fcn.00014de0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint64_t uVar3;
    
    uVar1 = *(arg1 + 0x1d);
    if (((uVar1 == 6) || (uVar1 < 3)) || (8 < uVar1)) {
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar2 = 0x71b;
        if ((*(arg1 + 0x1c) - 0x10U & 0xef) == 0) {
            uVar2 = 0x71a;
        }
        uVar3 = fcn.0001454c(arg1,arg2,uVar2,*(arg1 + 0x34) << 0x10);
        if (-1 < uVar3) {
            if (*(arg1 + 0x12) == '\x01') {
                uVar3 = 0;
            }
            else {
                uVar3 = fcn.00014e6c(arg1,arg2);
                if (-1 < uVar3) {
                    uVar3 = -(*(arg1 + 0x1d) != '\x04') & 0x8000000000000007;
                }
            }
        }
    }
    return uVar3;
}


/* fcn.000129c8 @ 0x129c8 */

int64_t fcn.000129c8(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint8_t uVar3;
    uint32_t uVar4;
    char cVar5;
    uint8_t uVar6;
    
    uVar3 = arg2;
    uVar6 = 1;
    cVar5 = ' ';
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x13) != '\0') {
        do {
            iVar1 = fcn.00014b10(arg1,arg2,0x34,0x400);
            if (iVar1 < 0) {
                return iVar1;
            }
            iVar1 = fcn.00014b10(arg1,arg2,0x34,uVar3 | 1 << (uVar6 & 0x1f) & 0xffU | 0x80000400);
            if (iVar1 < 0) {
                return iVar1;
            }
            while( true ) {
                iVar1 = fcn.00014b10(arg1,arg2,0x34,0x600);
                if (iVar1 < 0) {
                    return iVar1;
                }
                uVar4 = 1 << (uVar6 & 0x1f);
                arg2 = uVar4;
                if ((uVar3 & uVar4) != 0) break;
                fcn.00014174(1000,arg2);
                cVar5 = cVar5 + -1;
                if (cVar5 == '\0') {
                    return -0x7fffffffffffffee;
                }
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= *(CONCAT44(in_register_0000000c,arg1) + 0x13));
    }
    iVar2 = fcn.00014b10(arg1,arg2,0x34,0x80000801);
    iVar1 = 0;
    if (iVar2 < 0) {
        iVar1 = iVar2;
    }
    return iVar1;
}


/* fcn.00012c18 @ 0x12c18 */

int64_t fcn.00012c18(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    uint32_t arg1_00;
    uint64_t uVar2;
    char cVar3;
    char cVar4;
    unkbyte7 Var5;
    uint8_t uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    int iStackX_10;
    uint32_t var_38h;
    
    cVar3 = arg2;
    Var5 = arg2 >> 8;
    iStackX_10 = CONCAT31(iStackX_10._1_3_,cVar3);
    arg1_00 = arg1;
    cVar4 = cVar3;
    iVar1 = fcn.00014b10(arg1_00,arg2,0x34,0x1000);
    if (iVar1 < 0) {
        return iVar1;
    }
    *(arg1 + 0x15) = cVar3;
    uVar8 = 0;
    do {
        fcn.00014b10(arg1_00,CONCAT71(Var5,cVar4),0x34,(uVar8 + 9) * 0x200);
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        uVar6 = uVar8 + 1;
        *(arg1 + 0x18) = *(arg1 + 0x18) | iStackX_10 << ((uVar8 & 3) << 3);
        uVar8 = uVar6;
    } while (uVar6 < 3);
    uVar7 = *(arg1 + 0x18);
    while( true ) {
        fcn.00014b10(arg1_00,CONCAT71(Var5,cVar4),0x34,uVar7 << 9);
        if (extraout_RAX_00 < 0) {
            return extraout_RAX_00;
        }
        if (cVar3 == ' ') {
            fcn.00014b10(arg1_00,CONCAT71(Var5,cVar4),0x34,(uVar7 + 1) * 0x200);
            if (extraout_RAX_02 < 0) {
                return extraout_RAX_02;
            }
            uVar8 = 0;
            do {
                fcn.00014b10(arg1_00,CONCAT71(Var5,cVar4),0x34,(uVar8 + 1 + uVar7 + 1) * 0x200);
                if (extraout_RAX_03 < 0) {
                    return extraout_RAX_03;
                }
                uVar2 = uVar8;
                uVar8 = uVar8 + 1;
                *(uVar2 + 0x83 + arg1) = 0x20;
            } while (uVar8 < 0x20);
            return 0;
        }
        if (cVar3 == -1) {
            return 0;
        }
        fcn.00014b10(arg1_00,CONCAT71(Var5,cVar4),0x34,(uVar7 + 1) * 0x200);
        if (extraout_RAX_01 < 0) break;
        uVar7 = uVar7 + 1 + iStackX_10 + 1;
        if (0x17fff < uVar7) {
            return 0;
        }
    }
    return extraout_RAX_01;
}


/* fcn.00012b3c @ 0x12b3c */

void fcn.00012b3c(int64_t arg1,int64_t arg2)

{
    int64_t extraout_RAX;
    uchar uVar1;
    unkbyte7 Var2;
    uint8_t uVar3;
    uint16_t uVar4;
    
    uVar1 = arg2;
    Var2 = arg2 >> 8;
    if ((*(arg1 + 0x15) & 2) != 0) {
        uVar3 = 0;
        do {
            uVar4 = uVar3 * 0x100 | 0x10;
            fcn.00014b10(arg1,CONCAT71(Var2,uVar1),0x34,(uVar4 | 0xffc00000) << 9);
            if (-1 < extraout_RAX) {
                fcn.00014b10(arg1,CONCAT71(Var2,uVar1),0x34,uVar4 + 1 << 9 | 0x80000002);
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 <= *(arg1 + 0x13));
    }
    return;
}


/* fcn.00014954 @ 0x14954 */

int64_t fcn.00014954(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    ushort in_stack_00000030;
    uint32_t in_stack_00000038;
    int16_t in_stack_00000040;
    char in_stack_00000048;
    char in_stack_00000050;
    
    iVar2 = *(arg1 + 8);
    iVar1 = fcn.00014e6c(arg1,arg2);
    if (-1 < iVar1) {
        if (arg3 == '\x0e') {
            bVar3 = *(arg1 + 0x1d) == '\t';
        }
        else {
            bVar3 = *(arg1 + 0x1d) == '\x04';
        }
        if (bVar3) {
            if ((in_stack_00000048 != '\0') &&
               (iVar1 = fcn.0001454c(arg1,arg2,0x371a,*(arg1 + 0x34) << 0x10), iVar1 < 0)) {
                return iVar1;
            }
            *(iVar2 + 4) = in_stack_00000038;
            *(iVar2 + 6) = in_stack_00000030;
            if (in_stack_00000050 == '\0') {
                *(iVar2 + 0xc) = 0;
            }
            else {
                *(iVar2 + 0xc) = 0x10;
            }
            iVar2 = fcn.0001454c(arg1,arg2,arg3 << 8 | in_stack_00000040 + 0x20U,arg4);
            if (-1 < iVar2) {
                iVar2 = fcn.00014ed0(arg1,arg2,&stack0x00000028,in_stack_00000038);
                if (iVar2 < 0) {
                    fcn.000151b8(arg1,arg2);
                }
                else if ((arg3 != '\x13') && (iVar2 = fcn.000151b8(arg1,arg2), iVar2 < 0)) {
                    return -0x7ffffffffffffff9;
                }
                return iVar2;
            }
        }
        iVar1 = -0x7ffffffffffffff9;
    }
    return iVar1;
}


/* fcn.000139f0 @ 0x139f0 */

ulong fcn.000139f0(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong extraout_RAX;
    ulong extraout_RAX_00;
    uint in_R8;
    uint64_t in_stack_00000028;
    char in_stack_00000030;
    
    puVar1 = *(arg1 + 8);
    if (*puVar1 == arg2) {
        if (arg4 == 0) {
            uVar3 = 0;
        }
        else {
            if ((puVar1[4] < 2) || (in_stack_00000028 % puVar1[4] == 0)) {
                uVar4 = arg4 / puVar1[3];
                if (arg4 % puVar1[3] != 0) {
                    return 0x8000000000000004;
                }
                uVar2 = *(puVar1 + 6);
                if ((CONCAT44(in_R8,arg3) < uVar2 || CONCAT44(in_R8,arg3) == uVar2) &&
                   (uVar4 + CONCAT44(in_R8,arg3) <= uVar2 + 1)) {
                    uVar4 = uVar4 & 0xffffffff;
                    if (in_stack_00000030 == '\0') {
                        fcn.00013aa0(*(arg1 + 0x30),0,CONCAT44(in_R8,arg3),uVar4);
                        return extraout_RAX;
                    }
                    fcn.00013be4(*(arg1 + 0x30),0,CONCAT44(in_R8,arg3),uVar4);
                    return extraout_RAX_00;
                }
            }
            uVar3 = 0x8000000000000002;
        }
    }
    else {
        uVar3 = 0x800000000000000d;
    }
    return uVar3;
}


/* fcn.00013aa0 @ 0x13aa0 */

int64_t fcn.00013aa0(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t noname_1_00;
    uint64_t arg3_00;
    uint64_t uVar4;
    ulong uStackX_8;
    ulong in_stack_00000028;
    uint64_t uStack_38;
    uchar auStack_30 [8];
    
    uStackX_8 = 0;
    iVar3 = 0;
    iVar2 = *(arg1 + 0x48);
    arg3_00 = arg3 & 0xffffffff;
    uStack_38 = *(iVar2 + 100) * arg3_00;
    noname_1_00 = uStack_38;
    if ((*(iVar2 + 0xb0) - 1U < 2) && (*(*(arg1 + 0x50) + 0x74) == 0)) {
        iVar3 = *(*(arg1 + 0x50) + 0x50);
        noname_1_00 = 1;
        iVar1 = (**(iVar3 + 0x48))(iVar3,1,in_stack_00000028,&uStack_38,auStack_30,&uStackX_8);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    if (0xffff < arg3) {
        noname_1_00 = (arg3 - 0x10000) / 0xffff;
        uVar4 = noname_1_00 + 1;
        do {
            fcn.00015214(iVar2,noname_1_00,arg2,0xffff);
            arg3_00 = arg3_00 - 0xffff;
            noname_1_00 = *(iVar2 + 100) * 0xffff;
            arg2 = arg2 + 0xffff;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    iVar2 = fcn.00015214(iVar2,noname_1_00,arg2,arg3_00);
    if (((1 < *(*(arg1 + 0x48) + 0xb0) - 1U) || (*(*(arg1 + 0x50) + 0x74) != 0)) ||
       (iVar3 = (**(iVar3 + 0x50))(iVar3,uStackX_8), -1 < iVar3)) {
        iVar3 = iVar2;
    }
    return iVar3;
}


/* fcn.00013be4 @ 0x13be4 */

int64_t fcn.00013be4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t noname_1_00;
    uint64_t arg3_00;
    uint64_t uVar4;
    ulong uStackX_8;
    ulong in_stack_00000028;
    int64_t iStack_38;
    uchar auStack_30 [8];
    
    uStackX_8 = 0;
    iVar3 = 0;
    iVar2 = *(arg1 + 0x48);
    arg3_00 = arg3 & 0xffffffff;
    if ((*(*(iVar2 + 8) + 0x24) >> 0x13 & 1) == 0) {
        iVar3 = -0x7ffffffffffffff8;
    }
    else {
        noname_1_00 = *(arg1 + 0x48);
        iStack_38 = *(noname_1_00 + 100) * arg3_00;
        if ((*(noname_1_00 + 0xb0) - 1U < 2) && (*(*(arg1 + 0x50) + 0x74) == 0)) {
            iVar3 = *(*(arg1 + 0x50) + 0x50);
            noname_1_00 = 0;
            iVar1 = (**(iVar3 + 0x48))(iVar3,0,in_stack_00000028,&iStack_38,auStack_30,&uStackX_8);
            if (iVar1 < 0) {
                return iVar1;
            }
        }
        if (0xffff < arg3) {
            noname_1_00 = (arg3 - 0x10000) / 0xffff;
            uVar4 = noname_1_00 + 1;
            do {
                fcn.00015378(iVar2,noname_1_00,arg2,0xffff);
                arg3_00 = arg3_00 - 0xffff;
                noname_1_00 = *(iVar2 + 100) * 0xffff;
                arg2 = arg2 + 0xffff;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
        }
        iVar2 = fcn.00015378(iVar2,noname_1_00,arg2,arg3_00);
        if (((1 < *(*(arg1 + 0x48) + 0xb0) - 1U) || (*(*(arg1 + 0x50) + 0x74) != 0)) ||
           (iVar3 = (**(iVar3 + 0x50))(iVar3,uStackX_8), -1 < iVar3)) {
            iVar3 = iVar2;
        }
    }
    return iVar3;
}


/* fcn.00015378 @ 0x15378 */

int64_t fcn.00015378(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg2_00;
    uint64_t arg2_01;
    int64_t iVar4;
    uint64_t in_stack_00000028;
    
    cVar1 = *(arg1 + 0x2d0);
    arg2_00 = CONCAT71(noname_1 >> 8,cVar1);
    iVar2 = *(arg1 + 8);
    arg2_01 = arg3 & 0xffffffff;
    if (((cVar1 == '\0') &&
        ((((in_stack_00000028 & 0xffffffff00000000) != 0 || ((*(arg1 + 0xb0) == 2 && ((in_stack_00000028 & 3) != 0))))
         || ((*(arg1 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))) ||
       ((cVar1 == '\x01' &&
        (((*(arg1 + 0xb0) == 2 && ((in_stack_00000028 & 7) != 0)) ||
         ((*(arg1 + 0xb0) == 1 && ((in_stack_00000028 & 0xfff) != 0)))))))) {
        *0x16c48 = 0;
    }
    else {
        *0x16c48 = *(arg1 + 0xb0);
    }
    iVar4 = *(arg1 + 0x2d8);
    *(iVar2 + 0x34) = *(iVar2 + 0x34) | 0x1ff;
    *(iVar2 + 0x36) = *(iVar2 + 0x36) | 0x3ff;
    *(iVar2 + 0x38) = *(iVar2 + 0x38) & 0xe000;
    *(iVar2 + 0x3a) = *(iVar2 + 0x3a) & 0xf000;
    iVar3 = fcn.00014e6c(arg1,arg2_00);
    if ((iVar3 < 0) || (*(arg1 + 0x1d) != '\x04')) {
code_r0x00015454:
        iVar4 = -0x7ffffffffffffff9;
    }
    else {
        if (*0x16c48 == 2) {
            iVar4 = fcn.0001564c(arg1,arg2_01,in_stack_00000028,iVar4);
            arg2_00 = arg2_01;
            if (iVar4 < 0) goto code_r0x00015454;
        }
        iVar4 = fcn.00015548(arg1,arg2_00,arg2,arg3);
        if (-1 < iVar4) {
            iVar4 = fcn.00014ed0(arg1,arg2_00,&stack0x00000028,*(arg1 + 100));
            if (iVar4 < 0) {
                fcn.000151b8(arg1,arg2_00);
            }
            else {
                iVar4 = fcn.000151b8(arg1,arg2_00);
                if (iVar4 < 0) {
                    iVar4 = -0x7ffffffffffffff9;
                }
            }
        }
    }
    *(iVar2 + 0x34) = *(iVar2 + 0x34) | 0x1ff;
    *(iVar2 + 0x36) = *(iVar2 + 0x36) | 0x3ff;
    *(iVar2 + 0x38) = *(iVar2 + 0x38) | 0x1ff;
    *(iVar2 + 0x3a) = *(iVar2 + 0x3a) | 0x2ff;
    return iVar4;
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


/* fcn.00013e30 @ 0x13e30 */

bool fcn.00013e30(uint32_t arg1)

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


/* fcn.00013e8c @ 0x13e8c */

char * fcn.00013e8c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00013e30(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00013df0 @ 0x13df0 */

void fcn.00013df0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013dc0();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00013edc @ 0x13edc */

int64_t fcn.00013edc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x16bc4;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00013e30(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00013e30(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00013e8c(arg1);
        iVar4 = fcn.00013e8c(arg2);
        iVar2 = fcn.00013dc0();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.000102a0(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.000102a0(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00013e8c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00013df0(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00016434 @ 0x16434 */

int64_t fcn.00016434(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    *(arg1 + 0xb8) = 0;
    iVar2 = fcn.0001454c(arg1,arg2,0,0);
    if (((-1 < iVar2) && (iVar2 = fcn.00016618(arg1,arg2), -1 < iVar2)) &&
       (iVar2 = fcn.000147d4(arg1,arg2), -1 < iVar2)) {
        iVar1 = *(arg1 + 8);
        if (*(arg1 + 0x1d) - 2U < 2) {
            iVar2 = fcn.0001454c(arg1,arg2,0x31a,0);
            if (-1 < iVar2) {
                *(arg1 + 0x34) = *(iVar1 + 0x10) >> 0x10;
                *(arg1 + 0x1d) = 3;
                iVar2 = fcn.00014858(arg1,arg2);
                if (((((-1 < iVar2) && (iVar2 = fcn.00014de0(arg1,arg2), -1 < iVar2)) &&
                     ((*(arg1 + 0xb8) != '\0' || (iVar2 = fcn.00016264(arg1,arg2), -1 < iVar2)))) &&
                    (iVar2 = fcn.0001634c(arg1,arg2), -1 < iVar2)) &&
                   ((*(arg1 + 0xb8) != '\x01' || (iVar2 = fcn.000167f0(arg1,arg2), -1 < iVar2)))) {
                    iVar2 = fcn.00016540(arg1);
                }
            }
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.00015ec8 @ 0x15ec8 */

int64_t fcn.00015ec8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t iVar2;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    int64_t extraout_RAX_04;
    int64_t extraout_RAX_05;
    int64_t extraout_RAX_06;
    int64_t extraout_RAX_07;
    int64_t extraout_RAX_08;
    uint8_t uVar3;
    uint8_t uVar4;
    unkbyte7 Var5;
    uint32_t arg4;
    uint32_t *arg4_00;
    uint32_t auStackX_8 [2];
    
    uVar3 = arg2;
    Var5 = arg2 >> 8;
    iVar2 = *(arg1 + 8);
    arg4_00 = auStackX_8;
    *(arg1 + 0xb8) = 0;
    uVar4 = uVar3;
    iVar1 = fcn.00015774(arg1,arg2,0xc0ff8080,arg4_00);
    arg4 = arg4_00;
    if (iVar1 < 0) {
        return -0x7ffffffffffffff2;
    }
    *(arg1 + 0x20) = auStackX_8[0];
    if ((*(arg1 + 0xbc) != 0) || ((*(arg1 + 0x20) & 0x80) != 0)) {
        if (((*(iVar2 + 0x40) >> 0x1a & 1) != 0) && ((*(arg1 + 0x20) & 0x80) != 0)) {
            *(iVar2 + 0x29) = *(iVar2 + 0x29) & 0xfe;
            *(iVar2 + 0x29) = 10;
            *(iVar2 + 0x29) = *(iVar2 + 0x29) | 1;
            fcn.00014174(1000,CONCAT71(Var5,uVar4));
            *(iVar2 + 0x2c) = *(iVar2 + 0x2c) & 0xfb;
            *(iVar2 + 0x3e) = *(iVar2 + 0x3e) | 8;
            fcn.00014174(5000,CONCAT71(Var5,uVar4));
            if ((*(iVar2 + 0x3e) & 8) != 0) {
                fcn.00014258(arg1,CONCAT71(Var5,uVar4),400000,arg4);
                fcn.00014174(1000,CONCAT71(Var5,uVar4));
                if ((((*(iVar2 + 0x24) & 0xf00000) == 0xf00000) &&
                    (fcn.00015774(arg1,CONCAT71(Var5,uVar4),0xc0000080,auStackX_8), -1 < extraout_RAX)) &&
                   ((auStackX_8[0] & 0xbfffffff) == 0x80ff8080)) {
                    *(arg1 + 0x20) = auStackX_8[0];
                    *(arg1 + 0xb8) = 1;
                }
            }
            if (*(arg1 + 0xb8) == '\0') {
                if (*(arg1 + 0xbc) == 0) {
                    return -0x7ffffffffffffff9;
                }
                *(iVar2 + 0x29) = *(iVar2 + 0x29) & 0xfe;
                iVar2 = fcn.00014408(arg1);
                if (iVar2 < 0) {
                    return iVar2;
                }
                fcn.00015774(arg1,CONCAT71(Var5,uVar4),0xc0ff8000,auStackX_8);
                *(arg1 + 0x20) = auStackX_8[0];
                if (extraout_RAX_00 < 0) {
                    return extraout_RAX_00;
                }
            }
        }
        *(arg1 + 0x1d) = 1;
        *(arg1 + 0x1c) = (-((*(arg1 + 0x20) & 0x40000000) != 0) & 0x10U) + 0x10;
        fcn.000147d4(arg1,CONCAT71(Var5,uVar4));
        if (extraout_RAX_01 < 0) {
            return extraout_RAX_01;
        }
        if (*(arg1 + 0x1d) - 2U < 2) {
            fcn.0001454c(arg1,CONCAT71(Var5,uVar4),0x31a,uVar3 * 0x10000 + 0x20000);
            if (extraout_RAX_02 < 0) {
                return extraout_RAX_02;
            }
            *(arg1 + 0x1d) = 3;
            *(arg1 + 0x34) = uVar3 + 2;
            fcn.00014858(arg1,CONCAT71(Var5,uVar4));
            if (extraout_RAX_03 < 0) {
                return extraout_RAX_03;
            }
            fcn.00014de0(arg1,CONCAT71(Var5,uVar4));
            if (extraout_RAX_04 < 0) {
                return extraout_RAX_04;
            }
            if ((3 < *(arg1 + 0xa2)) && (fcn.00015964(arg1,CONCAT71(Var5,uVar4)), extraout_RAX_05 < 0)) {
                return extraout_RAX_05;
            }
            iVar2 = fcn.000161ac(arg1);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.00015c14(arg1);
            if (-1 < iVar2) {
                return 0;
            }
            iVar2 = fcn.00015b1c(arg1);
            if (-1 < iVar2) {
                return iVar2;
            }
            if (((3 < *(arg1 + 0xa2)) && ((*(*(arg1 + 8) + 0x40) >> 0x15 & 1) != 0)) &&
               (fcn.0001454c(arg1,CONCAT71(Var5,uVar4),0x61b,0x3b90100), extraout_RAX_06 < 0)) {
                return extraout_RAX_06;
            }
            fcn.00015828(arg1,CONCAT71(Var5,uVar4));
            if (extraout_RAX_07 < 0) {
                return extraout_RAX_07;
            }
            fcn.00014e6c(arg1,CONCAT71(Var5,uVar4));
            if ((-1 < extraout_RAX_08) || (extraout_RAX_08 == -0x7fffffffffffffe5)) {
                iVar2 = fcn.00015a18(arg1);
                return iVar2;
            }
        }
    }
    return -0x7ffffffffffffff9;
}


/* fcn.000144d4 @ 0x144d4 */

uint64_t fcn.000144d4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    unkbyte7 Var6;
    int iVar7;
    
    uVar4 = arg2;
    Var6 = arg2 >> 8;
    iVar2 = *(arg1 + 8);
    iVar7 = 50000;
    if ((arg2 & 0xf8U) == 0) {
        *(iVar2 + 0x2f) = uVar4;
        uVar5 = uVar4;
        do {
            uVar1 = *(iVar2 + 0x2f);
            fcn.00014174(1,CONCAT71(Var6,uVar5));
            iVar7 = iVar7 + -1;
            if ((uVar4 & uVar1) == 0) break;
        } while (iVar7 != 0);
        uVar3 = ~-(iVar7 != 0) & 0x8000000000000012;
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00014258 @ 0x14258 */

ulong fcn.00014258(uint32_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    ulong uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    uint16_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint8_t uVar11;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(iVar6 + 8);
    uVar7 = 0;
    uVar11 = 0;
    if ((*(iVar6 + 0xb8) != '\x01') || (3 < (*(iVar2 + 0x3e) & 7))) goto code_r0x000142da;
    if (arg3 < 200000000) {
        if (99999999 < arg3) {
            uVar3 = *(iVar2 + 0x3e) | 2;
            goto code_r0x000142cd;
        }
        if (49999999 < arg3) {
            uVar3 = *(iVar2 + 0x3e) | 1;
            goto code_r0x000142cd;
        }
    }
    else {
        uVar3 = *(iVar2 + 0x3e) | 3;
code_r0x000142cd:
        *(iVar2 + 0x3e) = uVar3;
    }
    fcn.00014174(10,arg2);
code_r0x000142da:
    *(iVar2 + 0x2c) = 0;
    uVar1 = *(iVar2 + 0x40);
    uVar9 = ((-(*(iVar6 + 0xad) < 2) & 0xffff4000) + 0xff00 & uVar1) >> 8;
    uVar10 = 0;
    if (uVar9 != 0) {
        uVar10 = uVar9 * 1000000;
    }
    if (arg3 < uVar10) {
        if (*(iVar6 + 0xad) < 2) {
            do {
                uVar11 = uVar11 + 1;
                uVar9 = (1 << (uVar11 & 0x1f)) * 2;
                arg2 = uVar10 % uVar9;
                if (uVar10 / uVar9 <= arg3) break;
            } while (uVar11 < 8);
            uVar4 = 1 << (uVar11 & 0x1f);
        }
        else {
            uVar4 = uVar10 / (arg3 * 2);
            arg2 = uVar10 % (arg3 * 2);
            if (arg2 != 0) {
                uVar4 = uVar4 + 1;
            }
            uVar7 = uVar4 >> 2 & 0xc0;
        }
    }
    else {
        uVar4 = uVar7;
        arg3 = uVar10;
    }
    iVar8 = 50000;
    *(iVar2 + 0x2c) = uVar4 << 8 | uVar7;
    *(iVar2 + 0x2c) = *(iVar2 + 0x2c) | 1;
    do {
        uVar7 = *(iVar2 + 0x2c);
        fcn.00014174(1,arg2);
        iVar8 = iVar8 + -1;
        if ((uVar7 & 2) != 0) break;
    } while (iVar8 != 0);
    if (iVar8 == 0) {
        uVar5 = 0x8000000000000012;
    }
    else {
        *(iVar2 + 0x2c) = *(iVar2 + 0x2c) | 4;
        if (((uVar1 >> 0x15 & 1) != 0) && (arg3 + 0xfe8287c0 < 0x19bfcc1)) {
            *(iVar2 + 0x28) = *(iVar2 + 0x28) | 4;
        }
        *(iVar2 + 0x2c) = *(iVar2 + 0x2c) | 8;
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00014634 @ 0x14634 */

int64_t fcn.00014634(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    
    iVar1 = *(arg1 + 8);
    uVar4 = 0;
    while ((uVar4 <= arg3 || (arg3 == 0))) {
        fcn.00014174(1000,arg2);
        arg2 = 0x8001;
        if ((*(iVar1 + 0x30) & 0x8001) == 1) break;
        if (*(iVar1 + 0x30) < 0) {
            uVar4 = *(iVar1 + 0x32);
            *(iVar1 + 0x32) = *(iVar1 + 0x32) | 0xfff;
            *(iVar1 + 0x30) = 0x8000;
            uVar2 = -((uVar4 & 0xf) != 0) & 2;
            uVar3 = uVar2 | 4;
            if ((uVar4 & 0x70) == 0) {
                uVar3 = uVar2;
            }
            fcn.000144d4(arg1,CONCAT71(0x80,uVar3));
            return (-((uVar4 & 0x62) != 0) & 0x14) + 0x8000000000000007;
        }
        uVar4 = uVar4 + 1;
    }
    if ((arg3 < uVar4) && (arg3 != 0)) {
        return -0x7fffffffffffffee;
    }
    if ((*(iVar1 + 0xe) & 3) == 3) {
        *(iVar1 + 0x30) = 3;
    }
    else {
        *(iVar1 + 0x30) = 1;
    }
    return 0;
}


/* fcn.00014ed0 @ 0x14ed0 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00014ed0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    ulong uVar11;
    int32_t var_10h;
    char in_stack_00000028;
    int64_t in_stack_00000030;
    
    iVar3 = *(arg1 + 8);
    uVar11 = 0x8000000000000012;
    uVar1 = *(iVar3 + 0xe);
    iVar10 = in_stack_00000030;
    while( true ) {
        if ((in_stack_00000030 != 0) && (iVar10 == 0)) goto code_r0x0001518d;
        fcn.00014174(1000,arg2);
        uVar2 = *(iVar3 + 0x30);
        iVar10 = iVar10 + -1;
        if (((uVar1 >> 8 & 0x3f) == 0x15) && (((*(arg1 + 0x1c) - 0x10U & 0xef) == 0 && ((uVar2 & 0x20) != 0)))) break;
        arg2 = 8;
        if ((uVar2 & 8) == 0) {
            if ((uVar2 & 0x20) == 0) {
                if ((uVar2 & 0x10) == 0) {
                    arg2 = 0x8002;
                    if ((uVar2 & 0x8002) == 2) {
                        *(iVar3 + 0x32) = *(iVar3 + 0x32) | 0xfff;
                        *(iVar3 + 0x30) = 0x8000;
                        goto code_r0x0001518a;
                    }
                    if (uVar2 < 0) {
                        uVar2 = *(iVar3 + 0x32);
                        uVar11 = 0x8000000000000007;
                        if ((uVar2 & 0x200) == 0) {
                            if (*(arg1 + 0x12) != '\0') {
                                fcn.0001454c(arg1,0x8002,0x341a,*(arg1 + 0x14) | 0x80000c00);
                            }
                            *(iVar3 + 0x32) = *(iVar3 + 0x32) | 0xfff;
                            *(iVar3 + 0x30) = 0x8000;
                            uVar6 = -((uVar2 & 0xf) != 0) & 2;
                            uVar7 = uVar6 | 4;
                            if ((uVar2 & 0x70) == 0) {
                                uVar7 = uVar6;
                            }
                            fcn.000144d4(arg1,CONCAT71(arg2 >> 8,uVar7));
                            if (((uVar2 & 0x22) != 0) || ((uVar2 & 0x40) != 0)) {
                                uVar11 = 0x800000000000001b;
                            }
                        }
                        else {
                            *(iVar3 + 0x32) = *(iVar3 + 0x32) | 0x200;
                            *(iVar3 + 0x30) = 0x8000;
                            iVar10 = fcn.0001454c(arg1,0x8002,0xcdb,0);
                            if (-1 < iVar10) {
                                fcn.000144d4(arg1,CONCAT71(arg2 >> 8,6));
                            }
                        }
code_r0x0001518d:
                        *(iVar3 + 0x30) = 0x3a;
                        return uVar11;
                    }
                }
                else {
                    *(iVar3 + 0x30) = 0x10;
                    iVar5 = *(arg1 + 8);
                    uVar9 = (arg4 & 0xffffffffU) >> 2;
                    if (in_stack_00000028 == '\0') {
                        do {
                            *(iVar5 + 0x20) = **arg3;
                            *arg3 = *arg3 + 4;
                            uVar8 = uVar9 - 1;
                            uVar9 = uVar8;
                        } while (uVar8 != 0);
                        arg2 = 0;
                    }
                    else {
                        do {
                            **arg3 = *(iVar5 + 0x20);
                            *arg3 = *arg3 + 4;
                            uVar8 = uVar9 - 1;
                            uVar9 = uVar8;
                        } while (uVar8 != 0);
                        arg2 = 0;
                    }
                }
            }
            else {
                *(iVar3 + 0x30) = 0x20;
                iVar5 = *(arg1 + 8);
                uVar9 = (arg4 & 0xffffffffU) >> 2;
                if (in_stack_00000028 == '\0') {
                    do {
                        *(iVar5 + 0x20) = **arg3;
                        *arg3 = *arg3 + 4;
                        uVar8 = uVar9 - 1;
                        uVar9 = uVar8;
                    } while (uVar8 != 0);
                    arg2 = 0;
                }
                else {
                    do {
                        **arg3 = *(iVar5 + 0x20);
                        *arg3 = *arg3 + 4;
                        uVar8 = uVar9 - 1;
                        uVar9 = uVar8;
                    } while (uVar8 != 0);
                    arg2 = 0;
                }
            }
        }
        else {
            *(iVar3 + 0x30) = 8;
            puVar4 = *(arg1 + 8);
            *arg3 = *arg3 + 0x1000;
            if (*(arg1 + 0x2d0) == '\x01') {
                puVar4[0x16] = *arg3;
                puVar4[0x17] = *arg3 >> 0x20;
            }
            else {
                *puVar4 = *arg3;
            }
            *(puVar4 + 0xc) = 8;
        }
    }
    uVar8 = arg4 >> 2;
    *(iVar3 + 0x30) = 0x20;
    iVar10 = *(arg1 + 8);
    if (in_stack_00000028 == '\0') {
        do {
            *(iVar10 + 0x20) = **arg3;
            *arg3 = *arg3 + 4;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
    else {
        do {
            **arg3 = *(iVar10 + 0x20);
            *arg3 = *arg3 + 4;
            uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
    }
code_r0x0001518a:
    uVar11 = 0;
    goto code_r0x0001518d;
}


/* fcn.000151b8 @ 0x151b8 */

int64_t fcn.000151b8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    do {
        iVar1 = fcn.00014e6c(arg1,arg2);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (*(arg1 + 0x1d) == '\x04') {
            return 0;
        }
        if (2 < *(arg1 + 0x1d) - 5U) {
            return -0x7ffffffffffffff9;
        }
        iVar1 = fcn.0001454c(arg1,arg2,0xc1b,0);
    } while (-1 < iVar1);
    return iVar1;
}


/* fcn.00014ac0 @ 0x14ac0 */

int64_t fcn.00014ac0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t in_R8;
    uint32_t in_R9D;
    uint32_t *in_stack_00000028;
    char in_stack_00000038;
    
    uVar1 = *(arg1 + 8);
    iVar2 = fcn.0001454c(arg1,arg2,in_R8,in_R9D);
    if (-1 < iVar2) {
        uVar1 = *(uVar1 + 0x10);
        if ((uVar1 >> 8 & 0xcb) == 0) {
            if (in_stack_00000038 != '\0') {
                *in_stack_00000028 = uVar1 & 0xff;
            }
            iVar2 = 0;
        }
        else {
            iVar2 = -0x7ffffffffffffff9;
        }
    }
    return iVar2;
}


/* fcn.0001564c @ 0x1564c */

ulong fcn.0001564c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(iVar5 + 8);
    uVar8 = *(iVar5 + 100) * (arg2 & 0xffffffffU);
    uVar9 = uVar8 & 0xffff;
    uVar7 = uVar8 >> 0x10;
    uVar10 = uVar7 + 1;
    if (uVar9 == 0) {
        uVar10 = uVar7;
    }
    if (uVar10 < 0x201) {
        if (*(iVar5 + 0x2d0) == '\x01') {
            uVar7 = 0;
            if (uVar10 != 0) {
                piVar4 = arg4 + 4;
                uVar6 = uVar10;
                do {
                    *piVar4 = arg3;
                    arg3 = arg3 + 0x10000;
                    *(piVar4 + 1) = 0;
                    *(piVar4 + -4) = 0x21;
                    piVar4 = piVar4 + 2;
                    uVar6 = uVar6 - 1;
                    uVar7 = uVar10;
                } while (uVar6 != 0);
            }
            if (uVar9 != 0) {
                *(arg4 + 2 + (uVar7 - 1) * 0x10) = uVar8;
            }
            puVar1 = arg4 + (uVar7 - 1) * 0x10;
            *puVar1 = *puVar1 | 2;
            *(iVar2 + 0x58) = arg4;
        }
        else {
            uVar7 = 0;
            if (uVar10 != 0) {
                iVar5 = arg4 + 1;
                uVar6 = uVar10;
                do {
                    *(iVar5 + 3) = arg3;
                    arg3 = arg3 + 0x10000;
                    *(iVar5 + -1) = 0x21;
                    iVar5 = iVar5 + 8;
                    uVar6 = uVar6 - 1;
                    uVar7 = uVar10;
                } while (uVar6 != 0);
            }
            if (uVar9 != 0) {
                *(arg4 + 2 + (uVar7 - 1) * 8) = uVar8;
            }
            puVar1 = arg4 + (uVar7 - 1) * 8;
            *puVar1 = *puVar1 | 2;
            *(iVar2 + 0x58) = arg4;
        }
        *(iVar2 + 0x36) = *(iVar2 + 0x36) | 0x3ff;
        *(iVar2 + 0x3a) = *(iVar2 + 0x3a) | 0x2ff;
        uVar3 = 0;
    }
    else {
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00015548 @ 0x15548 */

ulong fcn.00015548(int64_t arg1,ulong noname_1,uint32_t arg2,uint32_t arg3)

{
    uint *puVar1;
    int iVar2;
    ulong uVar3;
    ushort uVar4;
    int16_t iVar5;
    uint64_t noname_1_00;
    uint in_R8;
    uint64_t uVar6;
    uint in_stack_00000028;
    char in_stack_00000030;
    
    iVar2 = *0x16c48;
    uVar6 = CONCAT44(in_R8,arg2);
    noname_1_00 = 0;
    puVar1 = *(arg1 + 8);
    uVar4 = 0;
    if (*0x16c48 == 1) {
        *puVar1 = in_stack_00000028;
    }
    if ((*(arg1 + 0x1c) != '\x04') && (*(arg1 + 0x1c) != ' ')) {
        if (0x3fffff < uVar6) {
            return 0x8000000000000007;
        }
        uVar6 = uVar6 * *(arg1 + 100);
    }
    if ((*(arg1 + 0x1c) & 0x36) != 0) {
        uVar4 = *(arg1 + 100);
    }
    *(puVar1 + 1) = uVar4;
    if (arg3 == 0) {
        return 0x8000000000000007;
    }
    *(puVar1 + 6) = arg3;
    if (in_stack_00000030 == '\0') {
        if (arg3 == 1) {
            iVar5 = 0x1800;
        }
        else {
            noname_1_00 = 0x26;
            iVar5 = 0x1900;
        }
    }
    else if (arg3 == 1) {
        noname_1_00 = 0x10;
        iVar5 = 0x1100;
    }
    else {
        noname_1_00 = 0x36;
        iVar5 = 0x1200;
    }
    if (iVar2 == 2) {
        *(puVar1 + 10) = *(puVar1 + 10) & 0xe7 | 0x10;
    }
    else if (iVar2 != 1) goto code_r0x0001561b;
    noname_1_00 = noname_1_00 | 1;
code_r0x0001561b:
    *(puVar1 + 3) = noname_1_00;
    uVar3 = fcn.0001454c(arg1,noname_1_00,iVar5 + 0x3a,uVar6);
    return uVar3;
}


/* fcn.00014748 @ 0x14748 */

void fcn.00014748(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint16_t auStackX_8 [16];
    int *in_stack_00000028;
    
    auStackX_8[0] = 1;
    auStackX_8[1] = 10;
    auStackX_8[2] = 100;
    auStackX_8[3] = 1000;
    uVar1 = *(*(arg1 + 8) + 0x40);
    if ((uVar1 >> 0x15 & 1) != 0) {
        *arg2 = 1;
    }
    uVar1 = (-(*(arg1 + 0xad) < 2) & 0xffff4000) + 0xff00 & uVar1;
    if (0xff < uVar1) {
        *in_stack_00000028 = (uVar1 >> 8) * 1000000;
    }
    *arg3 = *(((*(arg1 + 0xa3) >> 3 & 0xf) - 1) + 0x16bc8) * auStackX_8[*(arg1 + 0xa3) & 7] * 10000;
    return;
}


/* fcn.00015a18 @ 0x15a18 */

int64_t fcn.00015a18(int64_t arg1)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    char cVar2;
    unkbyte7 in_RDX;
    
    cVar2 = '\0';
    iVar1 = *(arg1 + 8);
    if (*(arg1 + 0xa2) < 4) {
        *(arg1 + 0xac) = 0;
    }
    else {
        if (((*(iVar1 + 0x3e) & 7) == 4) || ((*(iVar1 + 0x3e) & 7) == 5)) {
            cVar2 = '\x01';
        }
        *(iVar1 + 0x28) = *(iVar1 + 0x28) & 0xdd;
        if (((*(arg1 + 0xad) < 2) || ((*(iVar1 + 0x40) >> 0x12 & 1) == 0)) ||
           ((*(iVar1 + 0x40) & 0xc0000000) != 0x40000000)) {
            *(iVar1 + 0x28) = *(iVar1 + 0x28) | 2;
            if (cVar2 == '\0') {
                *(arg1 + 0xac) = 1;
            }
            else {
                *(arg1 + 0xac) = 5;
            }
        }
        else {
            *(iVar1 + 0x28) = *(iVar1 + 0x28) | 0x20;
            if (cVar2 == '\0') {
                *(arg1 + 0xac) = 2;
            }
            else {
                *(arg1 + 0xac) = 6;
            }
        }
        fcn.0001454c(arg1,CONCAT71(in_RDX,cVar2),0x61b,(*(arg1 + 0xac) | 0x3b700) << 8);
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        fcn.00014e6c(arg1,CONCAT71(in_RDX,cVar2));
        if ((extraout_RAX_00 < 0) && (*(arg1 + 0xb4) != 0x80)) {
            return -0x7ffffffffffffff9;
        }
    }
    return 0;
}


/* fcn.00015d5c @ 0x15d5c */

ulong fcn.00015d5c(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uchar *puStackX_8;
    uchar auStack_a8 [128];
    
    iVar1 = *(arg1 + 8);
    if (*(arg1 + 0xac) == '\x01') {
        uVar5 = 0x40;
    }
    else {
        uVar5 = 0;
        if (*(arg1 + 0xac) == '\x02') {
            uVar5 = 0x80;
        }
    }
    fcn.00014258(arg1,arg2,200000000,arg3);
    *(iVar1 + 0x3e) = *(iVar1 + 0x3e) & 0xff7f;
    fcn.00014174(1000,arg2);
    uVar4 = 0;
    *(iVar1 + 0x3e) = *(iVar1 + 0x3e) | 0x40;
    do {
        puStackX_8 = auStack_a8;
        iVar2 = *(arg1 + 8);
        *(iVar2 + 4) = uVar5;
        *(iVar2 + 6) = 1;
        *(iVar2 + 0xc) = 0x10;
        iVar2 = fcn.0001454c(arg1,arg2,0x153a,0);
        if (iVar2 < 0) {
code_r0x00015e61:
            *(iVar1 + 0x32) = *(iVar1 + 0x32) | 0xfff;
            *(iVar1 + 0x30) = 0xffff;
        }
        else {
            iVar2 = fcn.00014ed0(arg1,arg2,&puStackX_8,uVar5);
            if (iVar2 < 0) goto code_r0x00015e61;
            if ((*(iVar1 + 0x3e) & 0x40) == 0) break;
            fcn.00014174(3000,arg2);
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x50);
    if ((*(iVar1 + 0x3e) & 0x80) == 0) {
        *(iVar1 + 0x3e) = *(iVar1 + 0x3e) & 0xfc;
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00015b1c @ 0x15b1c */

int64_t fcn.00015b1c(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t arg2;
    int64_t iVar3;
    ulong noname_2;
    int64_t arg3;
    
    iVar3 = *(arg1 + 8);
    uVar2 = *(iVar3 + 0x40);
    if ((uVar2 & 0x4200000) == 0x4200000) {
        if (*(arg1 + 0xad) == '\x02') {
            uVar2 = uVar2 & 0xff00;
        }
        else {
            uVar2 = uVar2 & 0x3f00;
        }
        arg2 = uVar2;
        if (((0x3400 < uVar2) && ((*(arg1 + 0xa4) & 0x10) != 0)) && (*(arg1 + 0xb8) != '\0')) {
            iVar1 = fcn.00015a18(arg1);
            if (iVar1 < 0) {
                return iVar1;
            }
            if (*(arg1 + 0xac) != '\0') {
                noname_2 = 0x61b;
                arg3 = 0x3b90200;
                iVar1 = fcn.0001454c(arg1,arg2,0x61b,0x3b90200);
                if (iVar1 < 0) {
                    return iVar1;
                }
                iVar1 = fcn.00014e6c(arg1,arg2);
                if ((-1 < iVar1) && (*(arg1 + 0x1d) == '\x04')) {
                    *(iVar3 + 0x3e) = *(iVar3 + 0x3e) | 3;
                    iVar1 = fcn.00015d5c(arg1,arg2,noname_2,arg3);
                    iVar3 = 0;
                    if (iVar1 < 0) {
                        iVar3 = iVar1;
                    }
                    return iVar3;
                }
                return -0x7ffffffffffffff9;
            }
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00015774 @ 0x15774 */

int64_t fcn.00015774(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    
    iVar2 = *(arg1 + 8);
    iVar3 = fcn.0001454c(arg1,arg2,0,0);
    uVar4 = 0;
    if (-1 < iVar3) {
        do {
            iVar3 = fcn.0001454c(arg1,arg2,0x102,arg3);
            if (iVar3 < 0) {
                return -0x7ffffffffffffff9;
            }
            iVar1 = *(iVar2 + 0x10);
            *arg4 = iVar1;
            if (iVar1 < 0) {
                return 0;
            }
            fcn.00014174(10000,arg2);
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x65);
        iVar3 = -0x7fffffffffffffee;
    }
    return iVar3;
}


/* fcn.000147d4 @ 0x147d4 */

int64_t fcn.000147d4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int *piVar4;
    
    iVar1 = *(arg1 + 8);
    iVar2 = fcn.0001454c(arg1,arg2,0x209,0);
    if (-1 < iVar2) {
        piVar4 = arg1 + 0x30;
        *(arg1 + 0x24) = *(iVar1 + 0x10);
        uVar3 = 3;
        *(arg1 + 0x28) = *(iVar1 + 0x14);
        *(arg1 + 0x2c) = *(iVar1 + 0x18);
        *piVar4 = *(iVar1 + 0x1c);
        do {
            *piVar4 = *(arg1 + 0x27 + (uVar3 - 1) * 4) + *piVar4 * 0x100;
            piVar4 = piVar4 + -1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        *(arg1 + 0x24) = *(arg1 + 0x24) << 8;
        iVar2 = 0;
        *(arg1 + 0x1d) = 2;
    }
    return iVar2;
}


/* fcn.00014858 @ 0x14858 */

int64_t fcn.00014858(uint32_t arg1,int64_t arg2)

{
    int *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int *piVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(arg1_00 + 8);
    uVar6 = 3;
    if (*(arg1_00 + 0x1d) == '\x03') {
        iVar3 = fcn.0001454c(arg1_00,arg2,0x909,*(arg1_00 + 0x34) << 0x10);
        if (-1 < iVar3) {
            piVar1 = arg1_00 + 0x44;
            *(arg1_00 + 0x38) = *(iVar2 + 0x10);
            *(arg1_00 + 0x3c) = *(iVar2 + 0x14);
            *(arg1_00 + 0x40) = *(iVar2 + 0x18);
            *piVar1 = *(iVar2 + 0x1c);
            piVar4 = piVar1;
            do {
                *piVar4 = *(arg1_00 + 0x3b + (uVar6 - 1) * 4) + *piVar4 * 0x100;
                piVar4 = piVar4 + -1;
                uVar5 = uVar6 - 1;
                uVar6 = uVar5;
            } while (uVar5 != 0);
            *(arg1_00 + 0x38) = *(arg1_00 + 0x38) << 8;
            *(arg1_00 + 0x48) = *(arg1_00 + 0x38) >> 0x15 & 1;
            *(arg1_00 + 0x49) = *(arg1_00 + 0x38) >> 0x16 & 0xf;
            *(arg1_00 + 0x4a) = *(arg1_00 + 0x40) >> 0xf & 1;
            *(arg1_00 + 0x4b) = *(arg1_00 + 0x42) & 0xf;
            *(arg1_00 + 0xa1) = *(arg1_00 + 0x47) >> 6;
            *(arg1_00 + 0xa2) = *(arg1_00 + 0x47) >> 2 & 0xf;
            *(arg1_00 + 0xa3) = *piVar1;
            iVar3 = 0;
        }
    }
    else {
        iVar3 = -0x7ffffffffffffff9;
    }
    return iVar3;
}


/* fcn.00015964 @ 0x15964 */

int64_t fcn.00015964(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong in_R8;
    uchar auStack_208 [194];
    uchar uStack_146;
    uchar uStack_144;
    uint uStack_134;
    
    iVar1 = fcn.00014954(arg1,arg2,CONCAT71(in_R8 >> 8,8),0);
    if (-1 < iVar1) {
        *(arg1 + 0xa4) = uStack_144;
        *(arg1 + 0xa8) = uStack_134;
        fcn.000102a0(arg1 + 0xc0,auStack_208,0x200);
        if (*(arg1 + 0xa1) == '\x03') {
            *(arg1 + 0xa1) = uStack_146;
        }
    }
    return iVar1;
}


/* fcn.000161ac @ 0x161ac */

ulong fcn.000161ac(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    uVar4 = 1 << (*(arg1 + 0x40) >> 0x10 & 0xf);
    uVar3 = (*(arg1 + 0x40) & 0x3ff) << 2 | *(arg1 + 0x3c) >> 0x1e;
    *(arg1 + 100) = uVar4;
    if (uVar3 == 0xfff) {
        iVar1 = *(arg1 + 0xa8);
    }
    else {
        *(arg1 + 0x60) = uVar3 + 1 << (*(arg1 + 0x3c) >> 0xf & 7) + 2;
        if (uVar4 < 0x201) goto code_r0x00016251;
        iVar2 = fcn.0001454c(arg1,uVar3,0x101a,0x200);
        if (iVar2 < 0) {
            return 0x8000000000000007;
        }
        iVar1 = *(arg1 + 0x60) * (*(arg1 + 100) >> 9);
        *(arg1 + 100) = 0x200;
    }
    *(arg1 + 0x60) = iVar1;
code_r0x00016251:
    *(arg1 + 0x60) = *(arg1 + 0x60) + -1;
    return 0;
}


/* fcn.00015c14 @ 0x15c14 */

int64_t fcn.00015c14(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_RDX;
    uint32_t arg3;
    uint32_t uVar3;
    
    iVar2 = *(arg1 + 8);
    if ((((*(iVar2 + 0x40) & 0x4200000) != 0x4200000) || ((*(arg1 + 0xa4) & 0x40) == 0)) || (*(arg1 + 0xb8) == '\0')) {
        return -0x7ffffffffffffffd;
    }
    iVar1 = fcn.00015b1c(arg1);
    if (iVar1 < 0) {
        return iVar1;
    }
    uVar3 = 0x3b90100;
    iVar1 = fcn.0001454c(arg1,in_RDX,0x61b,0x3b90100);
    if (iVar1 < 0) {
        return iVar1;
    }
    if ((*(arg1 + 0xa4) & 2) == 0) {
        if ((*(arg1 + 0xa4) & 1) == 0) goto code_r0x00015cba;
        arg3 = 26000000;
    }
    else {
        arg3 = 52000000;
    }
    iVar1 = fcn.00014258(arg1,in_RDX,arg3,uVar3);
    if (iVar1 < 0) {
        return iVar1;
    }
code_r0x00015cba:
    iVar1 = fcn.0001454c(arg1,in_RDX,0x61b,0x3b70600);
    if (-1 < iVar1) {
        *(arg1 + 0xac) = 6;
        uVar3 = 0x3b90300;
        iVar1 = fcn.0001454c(arg1,in_RDX,0x61b,0x3b90300);
        if (-1 < iVar1) {
            *(iVar2 + 0x3e) = *(iVar2 + 0x3e) & 0xf8;
            *(iVar2 + 0x3e) = *(iVar2 + 0x3e) | 5;
            iVar2 = fcn.00014258(arg1,in_RDX,200000000,uVar3);
            iVar1 = 0;
            if (iVar2 < 0) {
                iVar1 = iVar2;
            }
        }
    }
    return iVar1;
}


/* fcn.00015828 @ 0x15828 */

int64_t fcn.00015828(int64_t arg1,int64_t arg2)

{
    int64_t extraout_RAX;
    int64_t iVar1;
    uchar uVar2;
    unkbyte7 Var3;
    uint32_t arg4;
    uint32_t *arg3;
    uint32_t auStackX_8 [2];
    char acStackX_10 [8];
    uint32_t uStackX_18;
    
    uVar2 = arg2;
    Var3 = arg2 >> 8;
    auStackX_8[0] = 0;
    arg3 = auStackX_8;
    iVar1 = *(arg1 + 8);
    acStackX_10[0] = '\0';
    fcn.00014748(arg1,arg2,acStackX_10,arg3);
    arg4 = arg3;
    if (((*(iVar1 + 0x44) & 4) == 0) || ((*(iVar1 + 0x40) >> 0x1a & 1) == 0)) {
code_r0x0001591c:
        if (acStackX_10[0] != '\0') {
            if ((*(arg1 + 0xa4) & 2) != 0) goto code_r0x000158fc;
            if ((*(arg1 + 0xa4) & 1) != 0) {
                uStackX_18 = 26000000;
                goto code_r0x00015902;
            }
        }
    }
    else if (acStackX_10[0] != '\0') {
        if ((*(arg1 + 0xa4) & 4) == 0) goto code_r0x0001591c;
        if (*(arg1 + 0xb8) == '\0') {
            *(iVar1 + 0x29) = *(iVar1 + 0x29) & 0xfe;
            *(iVar1 + 0x29) = 10;
            *(iVar1 + 0x29) = *(iVar1 + 0x29) | 1;
            fcn.00014174(1000,CONCAT71(Var3,uVar2));
            *(iVar1 + 0x2c) = *(iVar1 + 0x2c) & 0xfb;
            *(iVar1 + 0x3e) = *(iVar1 + 0x3e) | 8;
            fcn.00014174(5000,CONCAT71(Var3,uVar2));
            *(arg1 + 0xb8) = 1;
        }
        *(iVar1 + 0x3e) = *(iVar1 + 0x3e) & 0xfff8 | 4;
        fcn.00014174(1000,CONCAT71(Var3,uVar2));
code_r0x000158fc:
        uStackX_18 = 52000000;
        goto code_r0x00015902;
    }
    if (auStackX_8[0] < uStackX_18) {
code_r0x00015957:
        uStackX_18 = auStackX_8[0];
        if (auStackX_8[0] < 25000000) goto code_r0x00015902;
    }
    else {
        if (uStackX_18 < 25000000) goto code_r0x00015902;
        if (auStackX_8[0] < uStackX_18) goto code_r0x00015957;
    }
    uStackX_18 = 25000000;
code_r0x00015902:
    fcn.00014258(arg1,CONCAT71(Var3,uVar2),uStackX_18,arg4);
    iVar1 = extraout_RAX;
    if (-1 < extraout_RAX) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00016760 @ 0x16760 */

int64_t fcn.00016760(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    int64_t extraout_RAX;
    int64_t iVar1;
    uint8_t uStack_41;
    uint8_t uStack_3b;
    
    *arg3 = 0;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    fcn.00014954(arg1,arg2,CONCAT71(arg3 >> 8,6),0);
    iVar1 = extraout_RAX;
    if (-1 < extraout_RAX) {
        *arg3 = uStack_3b & 0x1f;
        if (arg4 != 0) {
            *arg4 = uStack_41 & 0x1f;
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00016618 @ 0x16618 */

ulong fcn.00016618(int64_t arg1,int64_t arg2)

{
    uint32_t arg3;
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint16_t uVar4;
    
    iVar2 = *(arg1 + 8);
    iVar3 = fcn.0001454c(arg1,arg2,0x81a,0x1aa);
    uVar4 = 0;
    if ((-1 < iVar3) && (*(iVar2 + 0x10) == 0x1aa)) {
        *(arg1 + 0xbc) = *(arg1 + 0xbc) | 0x40000000;
    }
    arg3 = *(arg1 + 0xbc);
    iVar2 = *(arg1 + 8);
    do {
        iVar3 = fcn.0001454c(arg1,arg2,0x371a,0);
        if (iVar3 < 0) {
            return 0x800000000000000e;
        }
        iVar3 = fcn.0001454c(arg1,arg2,0x2902,arg3);
        if (iVar3 < 0) {
            return 0x800000000000000e;
        }
        uVar1 = *(iVar2 + 0x10);
        if (uVar1 < 0) {
            *(arg1 + 0x20) = uVar1;
            *(arg1 + 0x1d) = 1;
            *(arg1 + 0x1c) = (-((uVar1 & 0x40000000) != 0) & 2U) + 2;
            return 0;
        }
        fcn.00014174(10000,arg2);
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x65);
    return 0x800000000000000e;
}


/* fcn.00016264 @ 0x16264 */

int64_t fcn.00016264(int64_t arg1,int64_t arg2)

{
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t iVar1;
    uchar uVar2;
    unkbyte7 Var3;
    uint32_t uVar4;
    uint32_t arg3;
    uint32_t arg4;
    uint32_t *arg3_00;
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    uVar2 = arg2;
    Var3 = arg2 >> 8;
    auStackX_20[0] = 0;
    arg3_00 = auStackX_20;
    uStackX_18 = 0;
    auStackX_10[0]._0_1_ = 0;
    uVar4 = 25000000;
    fcn.00014748(arg1,arg2,auStackX_10,arg3_00);
    arg4 = arg3_00;
    if ((auStackX_10[0] != 0) &&
       ((((*(arg1 + 0x53) & 0xf) == 2 && (*(arg1 + 0x51) < '\0')) || ((*(arg1 + 0x40) & 0x40000000) != 0)))) {
        arg4 = 0;
        fcn.00016760(arg1,CONCAT71(Var3,uVar2),auStackX_10,0);
        if ((extraout_RAX == 0) && ((auStackX_10[0] & 1) != 0)) {
            arg4 = 0x80000001;
            fcn.0001454c(arg1,CONCAT71(Var3,uVar2),0x61b,0x80000001);
            iVar1 = 0;
            if (extraout_RAX_00 < 0) {
                iVar1 = extraout_RAX_00;
            }
            uVar4 = 25000000;
            if (-1 < iVar1) {
                uVar4 = 50000000;
            }
        }
    }
    if (auStackX_20[0] < uStackX_18) {
code_r0x0001633f:
        arg3 = auStackX_20[0];
        if (auStackX_20[0] < uVar4) goto code_r0x00016320;
    }
    else {
        if (uStackX_18 < uVar4) {
            arg3 = uStackX_18;
            goto code_r0x00016320;
        }
        if (auStackX_20[0] < uStackX_18) goto code_r0x0001633f;
    }
    arg3 = uVar4;
code_r0x00016320:
    fcn.00014258(arg1,CONCAT71(Var3,uVar2),arg3,arg4);
    iVar1 = extraout_RAX_01;
    if (-1 < extraout_RAX_01) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001634c @ 0x1634c */

int64_t fcn.0001634c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t noname_1;
    uint8_t uVar4;
    uint32_t uVar5;
    ulong in_R8;
    uchar *puVar6;
    uchar auStackX_8 [5];
    uchar auStackX_d [3];
    
    iVar1 = *(arg1 + 8);
    iVar2 = fcn.00014954(arg1,arg2,CONCAT71(in_R8 >> 8,0x33),0);
    if (-1 < iVar2) {
        uVar5 = 0;
        puVar6 = arg1 + 0x4c;
        do {
            iVar3 = 7 - uVar5;
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            noname_1 = CONCAT31(iVar3 >> 8,auStackX_8[iVar3]);
            *puVar6 = auStackX_8[iVar3];
            puVar6 = puVar6 + 1;
        } while (uVar4 < 8);
        if (-1 < iVar2) {
            if ((*(arg1 + 0x52) & 4) != 0) {
                iVar2 = fcn.0001454c(arg1,noname_1,0x371a,*(arg1 + 0x34) << 0x10);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.0001454c(arg1,noname_1,0x61a,2);
                if (iVar2 < 0) {
                    return iVar2;
                }
                *(iVar1 + 0x28) = *(iVar1 + 0x28) | 2;
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.000167f0 @ 0x167f0 */

int64_t fcn.000167f0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    uint8_t uVar2;
    unkbyte7 Var3;
    uint16_t uVar4;
    uint32_t arg3;
    uint32_t uVar5;
    uint8_t *arg4;
    unkbyte7 Var7;
    int64_t iVar6;
    uint8_t auStackX_8 [8];
    uint8_t auStackX_10 [8];
    
    uVar2 = arg2;
    Var3 = arg2 >> 8;
    iVar6 = *(arg1 + 8);
    arg4 = auStackX_10;
    uVar4 = 0;
    auStackX_10[0] = uVar2;
    iVar1 = fcn.00016760(arg1,arg2,auStackX_8,arg4);
    if (iVar1 < 0) {
        return iVar1;
    }
    if ((auStackX_10[0] & 0x10) == 0) {
        if ((auStackX_10[0] & 2) != 0) {
            uVar4 = 0x1000;
        }
    }
    else {
        uVar4 = 0x4000;
    }
    uVar5 = *(iVar6 + 0x44);
    Var7 = arg4 >> 8;
    if (((uVar5 & 4) == 0) || ((auStackX_8[0] & 0x10) == 0)) {
        if (((uVar5 & 1) == 0) || (((auStackX_8[0] & 4) == 0 || ((uVar5 >> 0xd & 1) != 0)))) {
            if ((auStackX_8[0] & 2) == 0) goto code_r0x000168ad;
            uVar4 = uVar4 | 1;
            iVar6 = CONCAT71(Var7,1);
            goto code_r0x0001688e;
        }
        iVar6 = CONCAT71(Var7,2);
        fcn.00016708(arg1,CONCAT71(Var3,uVar2),uVar4 | 2,iVar6);
        uVar5 = iVar6;
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        arg3 = 100000000;
    }
    else {
        uVar4 = uVar4 | 4;
        iVar6 = CONCAT71(Var7,4);
code_r0x0001688e:
        fcn.00016708(arg1,CONCAT71(Var3,uVar2),uVar4,iVar6);
        uVar5 = iVar6;
        if (extraout_RAX_00 < 0) {
            return extraout_RAX_00;
        }
        arg3 = 50000000;
    }
    fcn.00014258(arg1,CONCAT71(Var3,uVar2),arg3,uVar5);
code_r0x000168ad:
    fcn.00014174(10000,CONCAT71(Var3,uVar2));
    return 0;
}


/* fcn.00016540 @ 0x16540 */

ulong fcn.00016540(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar2;
    uint16_t uVar3;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((*(arg1_00 + 0xa1) == '\0') || (*(arg1_00 + 0x1c) != '\x04')) {
        uVar3 = 1 << (*(arg1_00 + 0x42) & 0xf);
        *(arg1_00 + 100) = uVar3;
        uVar2 = ((*(arg1_00 + 0x40) & 0x3ff) << 2 | *(arg1_00 + 0x3c) >> 0x1e) + 1 << (*(arg1_00 + 0x3c) >> 0xf & 7) + 2
        ;
        *(arg1_00 + 0x60) = uVar2;
        if (0x200 < uVar3) {
            iVar1 = fcn.0001454c(arg1_00,uVar2,0x101a,0x200);
            if (iVar1 < 0) {
                return 0x8000000000000007;
            }
            uVar3 = *(arg1_00 + 100);
            *(arg1_00 + 100) = 0x200;
            *(arg1_00 + 0x60) = *(arg1_00 + 0x60) * (uVar3 >> 9);
        }
    }
    else {
        *(arg1_00 + 100) = 0x200;
        *(arg1_00 + 0x60) = (((*(arg1_00 + 0x40) & 0x3f) << 0x10 | *(arg1_00 + 0x3e)) + 1) * 0x400;
    }
    *(arg1_00 + 0x60) = *(arg1_00 + 0x60) + -1;
    return 0;
}


/* fcn.00016708 @ 0x16708 */

int64_t fcn.00016708(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = *(arg1 + 8);
    iVar2 = fcn.0001454c(arg1,arg2,0x61b,arg3 & 0xffff | 0x80000000);
    if (-1 < iVar2) {
        if (arg4 != '\0') {
            *(iVar1 + 0x3e) = *(iVar1 + 0x3e) & 0xfff8 | arg4 & 0xff;
        }
        iVar2 = 0;
    }
    return iVar2;
}


