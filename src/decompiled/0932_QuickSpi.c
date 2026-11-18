// decompiled by r2ghidra: 0932_QuickSpi.pe32
// functions: 65

/* entry0 @ 0x1048c */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t iStackX_8;
    
    *0x14ba8 = *(arg2 + 0x60);
    *0x14ba0 = arg2;
    fcn.00014090();
    noname_0 = 0x14aa0;
    iVar3 = fcn.000140fc(0x14aa0);
    if (iVar3 == 0) {
        uVar4 = fcn.00010380();
        fcn.00010370();
        uVar1 = in(0x1808);
        fcn.00010350(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010340();
        }
        fcn.00010350(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010370();
        }
        else {
            fcn.00010360();
        }
    }
    iVar3 = 0x144e0;
    (**(*0x14ba8 + 0x98))(arg1,0x144e0,&iStackX_8);
    *(iStackX_8 + 0x58) = 0x10384;
    fcn.00010560(arg1,iVar3);
    return;
}


/* fcn.00014090 @ 0x14090 */

int64_t fcn.00014090(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14bb0 == 0) {
        *0x14bb0 = 0;
        if (*(*0x14ba0 + 0x68) != 0) {
            piVar2 = *(*0x14ba0 + 0x70);
            do {
                if ((*0x14550 == *piVar2) && (*0x14558 == piVar2[1])) {
                    *0x14bb0 = (*(*0x14ba0 + 0x70))[uVar1 * 3 + 2];
                    return *0x14bb0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14ba0 + 0x68));
        }
    }
    return *0x14bb0;
}


/* fcn.000140fc @ 0x140fc */

void fcn.000140fc(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00014090();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001412a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001412a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.00010560 @ 0x10560 */

ulong fcn.00010560(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t aiStackX_10 [3];
    
    *0x145e0 = arg1;
    *0x145e8 = arg1;
    aiStackX_10[0] = arg1;
    (**(*0x14ba8 + 0x148))(0x145e8,0x14560,0x145c0,0x14580,0x145f0,0x14520,0x14608,0);
    uVar1 = (**(*0x14ba8 + 0x148))(aiStackX_10,0x14500,0x145b8,0);
    iVar2 = fcn.000140fc(0x14590);
    *0x145b0 = *(iVar2 + 0x3c3c);
    *0x14c10 = iVar2 + 0x18;
    *0x145b1 = *(iVar2 + 0x3c80);
    *0x14c08 = *(iVar2 + 0x3c73);
    *0x14c0c = *(iVar2 + 0x3cb7);
    if (iVar2 + 0x3c3f != 0x14bc0) {
        section..text(0x14bc0,iVar2 + 0x3c3f,0x24);
    }
    if (*0x14c10 + 0x3c6b != 0x14be4) {
        section..text(0x14be4,*0x14c10 + 0x3c6b,0x24);
    }
    return uVar1;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 16992 named .text
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


/* fcn.0001260c @ 0x1260c */

void fcn.0001260c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uStackX_8;
    uchar auStack_18 [16];
    
    if (arg1 != 0) {
        *(*(arg1 + 0x28) + 0x120c) = uStackX_8 & 0xfffffffe | 0x80000000;
        *(arg1 + 0x20498) = 0;
        if (*(arg1 + 0x204b0) != 0) {
            (**(*0x14ba8 + 0x70))();
        }
        if (*(arg1 + 0x20430) != 0) {
            (**(*0x14ba8 + 0x70))();
        }
        (**(*0x14ba8 + 0x120))(*(arg1 + 8),0x14530,arg1 + 0x20420,*(arg1 + 8));
        (**(*0x14ba8 + 0x150))(*(arg1 + 8),0x145a0,arg1 + 0x20420,0);
        puVar2 = fcn.000132fc(auStack_18);
        fcn.000138e4(*puVar2,*(arg2 + 4) & 1);
        fcn.00013214(*(arg1 + 0x28));
        piVar1 = arg1 + 0x31;
        if (*piVar1 != 0) {
            (**(*(arg1 + 0x18) + 0x50))(*(arg1 + 0x18),*(arg1 + 0x41));
            (**(*(arg1 + 0x18) + 0x60))(*(arg1 + 0x18),0x10,*piVar1);
            fcn.00012570(arg1,piVar1);
        }
        piVar1 = arg1 + 0x10211;
        if (*piVar1 != 0) {
            (**(*(arg1 + 0x18) + 0x50))(*(arg1 + 0x18),*(arg1 + 0x10221));
            (**(*(arg1 + 0x18) + 0x60))(*(arg1 + 0x18),1,*piVar1);
            fcn.00012570(arg1,piVar1);
        }
        piVar1 = arg1 + 0x18;
        (**(*piVar1 + 0x78))(*piVar1,1,*(arg1 + 0x20));
        (**(*0x14ba8 + 0x120))(*(arg1 + 8),0x14530,piVar1,*(arg1 + 8));
        (**(*0x14ba8 + 0x150))(*(arg1 + 8),0x14530,piVar1,0);
        piVar1 = *(arg1 + 0x10);
        if (piVar1 != NULL) {
            iVar3 = 0;
            if (*piVar1 != 0) {
                piVar4 = piVar1;
                do {
                    (**(*0x14ba8 + 0x48))(*piVar4);
                    if (piVar4[1] != 0) {
                        (**(*0x14ba8 + 0x48))();
                    }
                    iVar3 = iVar3 + 1;
                    piVar4 = piVar1 + iVar3 * 2;
                } while (*piVar4 != 0);
            }
            (**(*0x14ba8 + 0x48))(piVar1);
        }
        fcn.000102c0(arg1,0x204f8);
        (**(*0x14ba8 + 0x48))(arg1);
    }
    return;
}


/* fcn.00013c2c @ 0x13c2c */

ulong fcn.00013c2c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14ba8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.00013e68 @ 0x13e68 */

ulong fcn.00013e68(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *arg2_00;
    char cVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    char16_t *pcVar5;
    uint32_t uVar6;
    uint in_register_0000000c;
    uint32_t *arg2_01;
    uint32_t *puVar7;
    uint in_register_00000014;
    char *pcVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    char in_stack_00000028;
    
    puVar7 = CONCAT44(in_register_00000014,arg2);
    arg2_01 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    if ((arg2_01 == NULL) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if (puVar7 != NULL) {
            if (in_stack_00000028 == '\0') {
                iVar4 = fcn.00013c9c(puVar7,arg2_01);
                if (iVar4 == 0) {
code_r0x00013ee9:
                    puVar13 = *arg3;
                    uVar11 = uVar10;
                    if (puVar13 != NULL) {
                        for (; pcVar8 = *puVar13, pcVar8 != NULL; puVar13 = puVar13 + 2) {
code_r0x00013f8b:
                            cVar1 = *pcVar8;
                            if (cVar1 != '\0') {
                                uVar9 = uVar10;
                                while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                    uVar9 = uVar9 + 1;
                                    cVar1 = pcVar8[uVar9];
                                }
                                if (uVar9 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar1 = *arg2_01;
                                puVar7 = arg2_01;
                                pcVar3 = pcVar8;
                                for (uVar14 = uVar9;
                                    (((cVar1 != '\0' && (*pcVar3 != '\0')) && (*puVar7 == *pcVar3)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    puVar7 = puVar7 + 1;
                                    pcVar3 = pcVar3 + 1;
                                    cVar1 = *puVar7;
                                }
                                uVar6 = *puVar7 - *pcVar3;
                                puVar7 = uVar6;
                                if (uVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar8 = pcVar8 + uVar9;
                                cVar1 = *pcVar8;
                                if (cVar1 == '\0') goto code_r0x00013f91;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar8 = pcVar8 + 1;
                                    cVar1 = *pcVar8;
                                } while (cVar1 != '\0');
                                goto code_r0x00013f8b;
                            }
code_r0x00013f91:
                            uVar11 = uVar11 + 1;
                        }
                    }
                    puVar12 = fcn.00013c2c();
                    if (puVar12 != NULL) {
                        arg2_00 = *arg3;
                        if (((arg2_00 != NULL) && (uVar11 << 4 != 0)) && (puVar12 != arg2_00)) {
                            puVar7 = puVar12;
                            section..text(puVar12,arg2_00,uVar11 << 4);
                        }
                        cVar1 = *arg2_01;
                        uVar9 = uVar10;
                        while (cVar1 != '\0') {
                            uVar9 = uVar9 + 1;
                            cVar1 = *(uVar9 + arg2_01);
                        }
                        iVar4 = fcn.00013c5c(puVar7,uVar9 + 1,arg2_01);
                        *(puVar12 + uVar11 * 4) = iVar4;
                        if (iVar4 != 0) {
                            pcVar5 = L"Intel Touch Host Controller QuickSpi Driver";
                            do {
                                pcVar5 = pcVar5 + 1;
                                uVar10 = uVar10 + 1;
                            } while (*pcVar5 != L'\0');
                            iVar4 = fcn.00013c5c(puVar7,uVar10 * 2 + 2,0x14ac0);
                            *(puVar12 + uVar11 * 4 + 2) = iVar4;
                            if (iVar4 != 0) {
                                (puVar12 + uVar11 * 4 + 4)[0] = 0;
                                (puVar12 + uVar11 * 4 + 4)[1] = 0;
                                (puVar12 + uVar11 * 4 + 6)[0] = 0;
                                (puVar12 + uVar11 * 4 + 6)[1] = 0;
                                if (*arg3 != 0) {
                                    (**(*0x14ba8 + 0x48))();
                                }
                                *arg3 = puVar12;
                                return 0;
                            }
                            (**(*0x14ba8 + 0x48))(*(puVar12 + uVar11 * 4));
                        }
                        (**(*0x14ba8 + 0x48))(puVar12);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*puVar7 != '\0') {
                puVar12 = puVar7;
                do {
                    puVar7 = *arg2_01 & 0xffffff;
                    if ((*arg2_01 & 0xffffff) == (*puVar12 & 0xffffff)) goto code_r0x00013ee9;
                    puVar12 = puVar12 + 3;
                } while (*puVar12 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.000116dc @ 0x116dc */

int64_t fcn.000116dc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uchar uVar1;
    uchar uVar2;
    uint uVar3;
    uint uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *puVar7;
    uchar *puVar8;
    uint in_register_00000014;
    int64_t iVar9;
    int iVar10;
    uint32_t arg2_00;
    char cVar11;
    ulong uStack_68;
    ulong uStack_60;
    ulong uStack_58;
    ulong uStack_50;
    uchar auStack_48 [16];
    uchar auStack_38 [16];
    
    iVar9 = CONCAT44(in_register_00000014,arg2);
    uVar5 = *(iVar9 + 0x20);
    cVar11 = '\x03';
    if (*(iVar9 + 0x18) == 0) {
        iVar6 = *(arg1 + 0x28);
        arg2_00 = 17000000;
        *(iVar6 + 0x10b8) = 0;
        *(iVar6 + 0x1170) = 0x1000;
        *(iVar6 + 0x1270) = 0x1000;
        *(iVar6 + 0x10b4) = 4;
        *(iVar6 + 0x1014) = 0xbbbeb0b;
        *(iVar6 + 0x1018) = 0x2b2e2f2;
        *(iVar6 + 0x10ec) = *(iVar6 + 0x10ec) & 0x8000 | 0x25884;
        *(iVar6 + 0x10f0) = *(iVar6 + 0x10f0) & 0xf4ff2dc8 | 0x321c8;
        *(iVar6 + 0x1010) = *(iVar6 + 0x1010) & 0xff007f | 0x4000200;
    }
    else {
        uVar1 = *(iVar9 + 0x1c);
        uVar2 = *(iVar9 + 0x18);
        iVar6 = *(arg1 + 0x28);
        uVar3 = *(iVar9 + 0x10);
        uVar4 = *(iVar9 + 0x14);
        *(iVar6 + 0x10b8) = *(iVar9 + 0xc);
        *(iVar6 + 0x1170) = uVar3;
        *(iVar6 + 0x1270) = uVar3;
        *(iVar6 + 0x10b4) = uVar4;
        *(iVar6 + 0x1014) = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar2),uVar2),uVar2);
        *(iVar6 + 0x1018) = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar1),uVar1),uVar1);
        *(iVar6 + 0x10ec) = *(iVar6 + 0x10ec) & 0x8000 | 0x25884;
        *(iVar6 + 0x10f0) = *(iVar6 + 0x10f0) & 0xf4ff2dc8 | 0x321c8;
        *(iVar6 + 0x1010) = *(iVar6 + 0x1010) & 0xff007f | 0x4000200;
        arg2_00 = *(iVar9 + 8);
    }
    iVar6 = *(arg1 + 0x28);
    iVar10 = 100;
    while ((*(iVar6 + 0x1008) >> 0x1d & 1) == 0) {
        (**(*0x14ba8 + 0xf8))(1000);
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
            return -0x7ffffffffffffff9;
        }
    }
    if (((*(*(arg1 + 0x28) + 0x1008) & 6) == 0) && (iVar6 = fcn.00012da0(*(arg1 + 0x28)), iVar6 < 0)) {
        return iVar6;
    }
    fcn.00012dfc(*(arg1 + 0x28),arg2_00);
    uVar5 = uVar5 >> 0xe & 3;
    *(*(arg1 + 0x28) + 0x1010) = (uVar5 << 0x10 | uVar5) << 2 | *(*(arg1 + 0x28) + 0x1010) & 0xfff3fff3;
    *(*(arg1 + 0x28) + 0x1128) = *(*(arg1 + 0x28) + 0x1128) | 0x80000000;
    puVar8 = auStack_48;
    puVar7 = fcn.000132fc(puVar8);
    uStack_68 = *puVar7;
    uStack_60 = puVar7[1];
    fcn.00012f98(puVar8,arg3 & 0xffffffff,&uStack_68,*(iVar9 + 4));
    iVar6 = *(arg1 + 0x28);
    iVar10 = 700;
    *(iVar6 + 0x1008) = *(iVar6 + 0x1008) & 0xfffffffd;
    while ((*(iVar6 + 0x1008) & 4) != 0) {
        (**(*0x14ba8 + 0xf8))(1000);
        iVar10 = iVar10 + -1;
        if (iVar10 == 0) {
            return -0x7ffffffffffffff9;
        }
    }
    do {
        iVar6 = *(arg1 + 0x28);
        iVar10 = 0xfa;
        do {
            if ((*(iVar6 + 0x1110) & 0x10) != 0) {
                *(iVar6 + 0x1110) = *(iVar6 + 0x1110);
                iVar6 = fcn.00013048(iVar6);
                goto code_r0x000119cb;
            }
            (**(*0x14ba8 + 0xf8))(1000);
            iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar6 = -0x7fffffffffffffee;
code_r0x000119cb:
        if (-1 < iVar6) {
            return iVar6;
        }
        puVar8 = auStack_38;
        puVar7 = fcn.000132fc(puVar8);
        uStack_58 = *puVar7;
        uStack_50 = puVar7[1];
        fcn.00012f98(puVar8,arg3 & 0xffffffff,&uStack_58,*(iVar9 + 4));
        cVar11 = cVar11 + -1;
        if (cVar11 == '\0') {
            return iVar6;
        }
    } while( true );
}


/* fcn.00011a24 @ 0x11a24 */

int64_t fcn.00011a24(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    int iVar3;
    
    iVar2 = fcn.00012f4c(*(arg1 + 0x28));
    if (-1 < iVar2) {
        uVar1 = *(*(arg1 + 0x28) + 0x10b4);
        iVar2 = *(arg1 + 0x28);
        *(iVar2 + 0x1044) = *(iVar2 + 0x1044) | 3;
        *(iVar2 + 0x1040) = *(iVar2 + 0x1040) & 0xfd | 0x40602;
        *(iVar2 + 0x1048) = uVar1;
        *(*(arg1 + 0x28) + 0x104c) = 1;
        *(*(arg1 + 0x28) + 0x1040) = *(*(arg1 + 0x28) + 0x1040) | 1;
        iVar2 = fcn.00012ec8(*(arg1 + 0x28));
        if (-1 < iVar2) {
            iVar2 = *(arg1 + 0x28);
            iVar3 = 1000;
            do {
                if ((*(iVar2 + 0x1110) & 0x10) != 0) {
                    *(iVar2 + 0x1110) = *(iVar2 + 0x1110);
                    iVar2 = fcn.000130f8(iVar2,arg1 + 0x204dc);
                    return iVar2;
                }
                (**(*0x14ba8 + 0xf8))(1000);
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            iVar2 = -0x7fffffffffffffee;
        }
    }
    return iVar2;
}


/* fcn.00011d90 @ 0x11d90 */

int64_t fcn.00011d90(int64_t arg1)

{
    uint64_t *arg1_00;
    int64_t *piVar1;
    uint64_t *arg1_01;
    uint8_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint64_t arg2;
    int64_t iStackX_8;
    
    arg1_00 = arg1 + 0x31;
    arg2 = 0;
    *(*(arg1 + 0x28) + 0x10ec) = *(*(arg1 + 0x28) + 0x10ec) | 0xffff0000;
    iVar6 = *(arg1 + 0x18);
    iVar5 = (**(iVar6 + 0x58))(iVar6,0,4,0x10,arg1_00,0);
    if (-1 < iVar5) {
        iStackX_8 = 0x10000;
        iVar5 = (**(iVar6 + 0x48))(iVar6,2,*arg1_00,&iStackX_8,arg1 + 0x39,arg1 + 0x41);
        if ((iVar5 < 0) || (iStackX_8 != 0x10000)) {
            iVar6 = -0x7ffffffffffffff7;
code_r0x00011ed9:
            if (iVar6 < 0) {
                return iVar6;
            }
            uVar3 = *arg1_00;
            arg1_01 = arg1 + 0x10211;
            uVar4 = *arg1_01;
            iVar6 = *(arg1 + 0x28);
            if (((uVar4 | uVar3) & 0xfff) != 0) {
                return -0x7ffffffffffffffe;
            }
            *(iVar6 + 0x1090) = uVar4 & 0xfffff000;
            *(iVar6 + 0x1094) = uVar4 >> 0x20;
            *(iVar6 + 0x1200) = uVar3 & 0xfffff000;
            *(iVar6 + 0x1204) = uVar3 >> 0x20;
            *(arg1 + 0x10209) = 0x10;
            *(arg1 + 0x203e9) = 1;
            uVar7 = *(arg1 + 0x204e0);
            if (*(arg1 + 0x204e0) < *(arg1 + 0x204e2)) {
                uVar7 = *(arg1 + 0x204e2);
            }
            *(arg1 + 0x1020d) = uVar7 + 0xfff & 0xfffff000;
            *(arg1 + 0x203ed) = *(arg1 + 0x204e4) + 0xfff & 0xfffff000;
            iVar6 = fcn.00011ba0(arg1,arg1_00);
            if (iVar6 < 0) {
                return iVar6;
            }
            uVar7 = 0;
            if (*(arg1 + 0x10209) != 0) {
                do {
                    fcn.00011b0c(arg1_00,uVar7);
                    uVar7 = uVar7 + 1;
                } while (uVar7 < *(arg1 + 0x10209));
            }
            iVar6 = fcn.00011ba0(arg1,arg1_01);
            if (-1 < iVar6) {
                if (*(arg1 + 0x203e9) != 0) {
                    do {
                        fcn.00011b0c(arg1_01,arg2);
                        uVar7 = arg2 + 1;
                        arg2 = uVar7;
                    } while (uVar7 < *(arg1 + 0x203e9));
                }
                iVar6 = *(arg1 + 0x28);
                uVar2 = *(arg1 + 0x11241);
                *(iVar6 + 0x1208) = (*(arg1 + 0x1061) - 1 & 0xff) << 8 | *(iVar6 + 0x1208) & 0xffff008f | 0xf;
                *(iVar6 + 0x1098) = (uVar2 - 1) * 0x1000000 | *(iVar6 + 0x1098) & 0xffffff;
                *(*(arg1 + 0x28) + 0x120c) = *(*(arg1 + 0x28) + 0x120c) & 0xef80ffff | 0x800021;
                return 0;
            }
            return iVar6;
        }
        fcn.000102c0(*arg1_00,0x10000);
        piVar1 = arg1 + 0x10211;
        iVar5 = (**(iVar6 + 0x58))(iVar6,0,4,1,piVar1,0);
        if (-1 < iVar5) {
            iStackX_8 = 0x1000;
            iVar6 = (**(iVar6 + 0x48))(iVar6,2,*piVar1,&iStackX_8,arg1 + 0x10219,arg1 + 0x10221);
            if ((-1 < iVar6) && (iStackX_8 == 0x1000)) {
                fcn.000102c0(*piVar1,0x1000);
                goto code_r0x00011ed9;
            }
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00012a74 @ 0x12a74 */

int64_t fcn.00012a74(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t *arg1_00;
    int64_t iVar2;
    ulong in_RDX;
    int64_t arg2;
    int iVar3;
    int64_t in_R8;
    
    *(arg1 + 0x204a8) = 1;
    arg1_00 = fcn.00013bf0(arg1,in_RDX,in_R8);
    *(arg1 + 0x204a0) = arg1_00;
    if (arg1_00 == NULL) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        fcn.000102c0(arg1_00,0x1000);
        arg2 = 2;
        iVar2 = fcn.00012350(arg1,2,0);
        if (-1 < iVar2) {
            iVar3 = 1000;
            do {
                if ((*(arg1 + 0x204a9) == '\x01') && (*(arg1 + 0x204c6) == '\x01')) break;
                fcn.000141a8(1000,arg2);
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            if (iVar3 == 0) {
                iVar2 = -0x7fffffffffffffee;
            }
            else {
                *(arg1 + 0x204a8) = 0;
                *(arg1 + 0x204a0) = arg1_00;
                uVar1 = *arg1_00;
                *(arg1 + 0x204a0) = arg1_00 + 1;
                fcn.00011200(arg1,arg1_00 + 1,uVar1 >> 8 & 0xffff);
                iVar2 = 0;
            }
        }
    }
    return iVar2;
}


/* fcn.00013bf0 @ 0x13bf0 */

int64_t fcn.00013bf0(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg1;
    iVar1 = (**(*0x14ba8 + 0x28))(0,4,1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    return aiStackX_18[0];
}


/* fcn.00012350 @ 0x12350 */

ulong fcn.00012350(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t arg2_00;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    int iVar9;
    uint64_t *puVar10;
    uint16_t uVar11;
    uint32_t auStackX_10 [2];
    
    piVar1 = *(arg1 + 0x10211);
    uVar8 = 0;
    uVar11 = 0;
    if ((arg2 >> 8 & 3) != 0) {
        uVar8 = 4 - (arg2 >> 8 & 3);
    }
    puVar10 = piVar1 + 1;
    if (*puVar10 << 8 < (arg2 >> 8 & 0xffff) + uVar8 + 4) {
        uVar3 = 0x8000000000000005;
    }
    else {
        puVar5 = *piVar1 * 0x400;
        auStackX_10[0] = arg2;
        if (puVar5 != auStackX_10) {
            section..text(puVar5,auStackX_10,4);
        }
        puVar5 = puVar5 + 1;
        arg2_00 = (*(piVar1 + 1) & 0xffffff) - 4;
        do {
            *puVar10 = *puVar10 & 0xfffffffffeffffff;
            uVar6 = auStackX_10[0] >> 8 & 0xffff;
            uVar7 = uVar6;
            if (arg2_00 <= uVar6) {
                uVar7 = arg2_00;
            }
            iVar9 = uVar7;
            if ((iVar9 != 0) && (puVar5 != arg3)) {
                section..text(puVar5,arg3,uVar7);
            }
            uVar6 = (auStackX_10[0] + iVar9 * -0x100 ^ auStackX_10[0]) & 0xffff00;
            arg2_00 = uVar6;
            auStackX_10[0] = auStackX_10[0] ^ uVar6;
            uVar4 = iVar9 + 4;
            if (uVar11 != 0) {
                uVar4 = uVar7;
            }
            *puVar10 = *puVar10 & 0xffffffffff000000;
            *puVar10 = *puVar10 | uVar4 & 0xffffff;
            if ((auStackX_10[0] & 0xffff00) == 0) break;
            uVar11 = uVar11 + 1;
            arg3 = arg3 + uVar4;
            puVar10 = piVar1 + uVar11 * 2 + 1;
            arg2_00 = *puVar10 & 0xffffff;
            puVar5 = piVar1[uVar11 * 2] << 10;
        } while (uVar11 < *(arg1 + 0x11241));
        if (uVar8 != 0) {
            arg2_00 = uVar8;
            uVar7 = piVar1[uVar11 * 2 + 1];
            piVar1[uVar11 * 2 + 1] = (uVar7 + arg2_00 ^ uVar7) & 0xffffff ^ uVar7;
            if (uVar8 != 0) {
                fcn.000102c0(puVar5 + uVar4,arg2_00);
            }
        }
        piVar1[uVar11 * 2 + 1] = piVar1[uVar11 * 2 + 1] | 0x1000000;
        iVar9 = 100;
        *(*(arg1 + 0x28) + 0x1098) = *(*(arg1 + 0x28) + 0x1098) | 9;
        iVar2 = *(arg1 + 0x28);
        do {
            if ((*(iVar2 + 0x1098) & 1) == 0) {
                *(iVar2 + 0x109c) = *(iVar2 + 0x109c) | 1;
                fcn.00011b0c(arg1 + 0x10211,0);
                return 0;
            }
            fcn.000141a8(1,arg2_00);
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        uVar3 = 0x8000000000000012;
    }
    return uVar3;
}


/* fcn.000141a8 @ 0x141a8 */

int64_t fcn.000141a8(int64_t arg1,int64_t arg2)

{
    fcn.00014148((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00014148 @ 0x14148 */

void fcn.00014148(int64_t arg1)

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


/* fcn.00012c98 @ 0x12c98 */

void fcn.00012c98(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    
    *(arg1 + 0x20448) = 0;
    *(arg1 + 0x20450) = 0;
    *(arg1 + 0x20440) = 0;
    *(arg1 + 0x20468) = 0;
    puVar1 = arg1 + 0x20420;
    *(arg1 + 0x20470) = 0;
    *(arg1 + 0x20458) = 0x7fff;
    *(arg1 + 0x20460) = 0x7fff;
    *(arg1 + 0x20438) = arg1 + 0x20440;
    *puVar1 = 0x12c18;
    iVar2 = *0x14ba8;
    *(arg1 + 0x20428) = 0x12c24;
    iVar2 = (**(iVar2 + 0x50))(0x100,0x10,0x12c14,arg1,arg1 + 0x20430);
    if (-1 < iVar2) {
        if (*(arg1 + 0x204cc) == 1) {
            (**(*0x14ba8 + 0x148))(arg1 + 8,0x145a0,puVar1,0x14540,0,0);
        }
        if (*(arg1 + 0x204d0) == 1) {
            (**(*0x14ba8 + 0x148))(arg1 + 8,0x145a0,puVar1,0);
        }
    }
    return;
}


/* fcn.00010d90 @ 0x10d90 */

void fcn.00010d90(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x30) != 0) {
        *(arg2 + 4) = 1;
    }
    if (*(iVar2 + 0x34) != 0) {
        *(arg2 + 8) = 1;
    }
    if ((*(iVar2 + 0xc) != 0) && (*(iVar2 + 0x10) != 0)) {
        iVar1 = fcn.00013c2c(iVar2,(*arg2 + 1) * 0x2d14);
        if (iVar1 != 0) {
            if (*arg2 != 0) {
                if ((*arg2 * 0x2d14 != 0) && (iVar1 != *(arg2 + 0xc))) {
                    section..text(iVar1,*(arg2 + 0xc),*arg2 * 0x2d14);
                }
                (**(*0x14ba8 + 0x48))(*(arg2 + 0xc));
            }
            *(arg2 + 0xc) = iVar1;
            iVar1 = *arg2 * 0x2d14 + iVar1;
            if (iVar1 != iVar2 + 0x3c) {
                section..text(iVar1,iVar2 + 0x3c,0x2d14);
            }
            *arg2 = *arg2 + 1;
        }
    }
    return;
}


/* fcn.00010e4c @ 0x10e4c */

void fcn.00010e4c(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int *piVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t *puVar3;
    int64_t iVar4;
    uint32_t in_register_00000014;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 1) {
        *puVar3 = in_register_00000014;
        if (in_register_00000014 != 9) {
            return;
        }
        puVar3[1] = puVar3[1] + 1;
        puVar3[2] = puVar3[1];
        return;
    }
    if (arg2 == 2) {
        if (0xffff < in_register_00000014) {
            *puVar3 = in_register_00000014 >> 0x10;
            in_register_00000014 = in_register_00000014 & 0xffff;
        }
        puVar3[1] = puVar3[1] + 1;
        uVar2 = puVar3[1];
        if (*puVar3 == 0xd) {
            if (in_register_00000014 == 4) {
                puVar3[0xc] = 1;
                puVar3[0x11] = 1;
            }
            if (in_register_00000014 == 5) {
                puVar3[0xd] = 1;
                puVar3[0x12] = 1;
            }
            if (in_register_00000014 == 2) {
                puVar3[0xe] = 1;
                puVar3[0x13] = 1;
            }
            if (in_register_00000014 == 0x42) {
                puVar3[2] = uVar2;
            }
        }
        if (*puVar3 != 1) {
            return;
        }
        if (in_register_00000014 == 0x30) {
            puVar3[3] = uVar2;
        }
        if (in_register_00000014 != 0x31) {
            return;
        }
        puVar3[4] = uVar2;
        return;
    }
    if (arg2 == 5) {
        puVar3[6] = in_register_00000014;
        return;
    }
    if (arg2 == 9) {
        puVar3[5] = in_register_00000014;
        return;
    }
    if (arg2 == 0x1d) {
        puVar3[7] = in_register_00000014;
        return;
    }
    if (arg2 != 0x20) {
        if (arg2 == 0x21) {
            if (puVar3[0xf] != 0xffff) {
                fcn.00010d90(arg1,arg3);
            }
            puVar3[0xf] = in_register_00000014;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[4] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[7] = 0;
            puVar3[8] = 0;
            fcn.000102c0(puVar3 + 0x14,0x2d00);
            puVar3[0x10] = 1;
            *(puVar3 + 0x1f) = 0;
            return;
        }
        if (arg2 == 0x25) {
            puVar3[8] = in_register_00000014;
            return;
        }
        if (arg2 != 0x28) {
            return;
        }
        if (in_register_00000014 != 2) {
            return;
        }
        uVar2 = puVar3[0x10];
        if (*((uVar2 - 1) * 0x2d + 0x7c + puVar3) == '\x01') {
            puVar3[0x10] = uVar2 + 1;
            *(uVar2 * 0x2d + 0x78 + puVar3) = *((uVar2 - 1) * 0x2d + 0x78 + puVar3);
        }
        *((puVar3[0x10] - 1) * 0x2d + 0x7c + puVar3) = 1;
        return;
    }
    iVar4 = (puVar3[0x10] - 1) * 0x2d;
    if (((*(iVar4 + 100 + puVar3) == 0) && (puVar3[2] != 0)) && (puVar3[1] == puVar3[2])) {
        *(iVar4 + 0x60 + puVar3) = *(iVar4 + 0x78 + puVar3);
        iVar4 = (puVar3[0x10] - 1) * 0x2d;
        *(iVar4 + 100 + puVar3) = puVar3[7] * puVar3[8] + *(iVar4 + 0x78 + puVar3);
    }
    else {
        if (*(iVar4 + 0x6c + puVar3) == 0) {
            if (((*(iVar4 + 0x74 + puVar3) == 0) && (puVar3[3] != 0)) && (puVar3[4] != 0)) {
                *(iVar4 + 0x68 + puVar3) = *(iVar4 + 0x78 + puVar3);
                iVar4 = (puVar3[0x10] - 1) * 0x2d;
                *(iVar4 + 0x6c + puVar3) = *(iVar4 + 0x78 + puVar3) + puVar3[7];
                *((puVar3[0x10] - 1) * 0x2d + 0x50 + puVar3) = puVar3[5];
                *((puVar3[0x10] - 1) * 0x2d + 0x54 + puVar3) = puVar3[6];
                piVar1 = (puVar3[0x10] - 1) * 0x2d + 0x78 + puVar3;
                *piVar1 = *piVar1 + puVar3[7];
                iVar4 = (puVar3[0x10] - 1) * 0x2d;
                *(iVar4 + 0x70 + puVar3) = *(iVar4 + 0x78 + puVar3);
                iVar4 = (puVar3[0x10] - 1) * 0x2d;
                *(iVar4 + 0x74 + puVar3) = *(iVar4 + 0x78 + puVar3) + puVar3[7];
                *((puVar3[0x10] - 1) * 0x2d + 0x58 + puVar3) = puVar3[5];
                *((puVar3[0x10] - 1) * 0x2d + 0x5c + puVar3) = puVar3[6];
                iVar4 = (puVar3[0x10] - 1) * 0x2d;
                uVar2 = puVar3[7];
                goto code_r0x00010fae;
            }
            if (((*(iVar4 + 0x6c + puVar3) == 0) && (puVar3[3] != 0)) && (puVar3[1] == puVar3[3])) {
                *(iVar4 + 0x68 + puVar3) = *(iVar4 + 0x78 + puVar3);
                iVar4 = (puVar3[0x10] - 1) * 0x2d;
                *(iVar4 + 0x6c + puVar3) = puVar3[7] * puVar3[8] + *(iVar4 + 0x78 + puVar3);
                *((puVar3[0x10] - 1) * 0x2d + 0x50 + puVar3) = puVar3[5];
                *((puVar3[0x10] - 1) * 0x2d + 0x54 + puVar3) = puVar3[6];
                goto code_r0x00010f99;
            }
        }
        if (((*(iVar4 + 0x74 + puVar3) != 0) || (puVar3[4] == 0)) || (puVar3[1] != puVar3[4])) {
            uVar2 = puVar3[8] * puVar3[7];
            goto code_r0x00010fae;
        }
        *(iVar4 + 0x70 + puVar3) = *(iVar4 + 0x78 + puVar3);
        iVar4 = (puVar3[0x10] - 1) * 0x2d;
        *(iVar4 + 0x74 + puVar3) = puVar3[7] * puVar3[8] + *(iVar4 + 0x78 + puVar3);
        *((puVar3[0x10] - 1) * 0x2d + 0x58 + puVar3) = puVar3[5];
        *((puVar3[0x10] - 1) * 0x2d + 0x5c + puVar3) = puVar3[6];
    }
code_r0x00010f99:
    puVar3[5] = 0;
    puVar3[6] = 0;
    iVar4 = (puVar3[0x10] - 1) * 0x2d;
    uVar2 = puVar3[7] * puVar3[8];
code_r0x00010fae:
    piVar1 = iVar4 + 0x78 + puVar3;
    *piVar1 = *piVar1 + uVar2;
    return;
}


/* fcn.00012da0 @ 0x12da0 */

ulong fcn.00012da0(int64_t arg1)

{
    int iVar1;
    
    iVar1 = 300;
    *(arg1 + 0x1008) = *(arg1 + 0x1008) | 2;
    do {
        if ((*(arg1 + 0x1008) & 4) != 0) {
            return 0;
        }
        (**(*0x14ba8 + 0xf8))(1000);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x8000000000000007;
}


/* fcn.00012dfc @ 0x12dfc */

void fcn.00012dfc(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = *(arg1 + 0x1010) & 0xff7fffff;
    uVar1 = uVar2 | 0x800000;
    if (16999999 < arg2) {
        uVar1 = uVar2;
    }
    if (arg2 < 2100000) {
code_r0x00012e74:
        uVar2 = 7;
    }
    else {
        if (arg2 < 2500000) {
code_r0x00012e83:
            uVar2 = 6;
            goto code_r0x00012eaa;
        }
        if (2999999 < arg2) {
            if (arg2 < 0x393870) {
                uVar2 = 4;
                goto code_r0x00012eaa;
            }
            if (arg2 < 5000000) {
                uVar2 = 3;
                goto code_r0x00012eaa;
            }
            if (arg2 < 8000000) {
                uVar2 = 2;
                goto code_r0x00012eaa;
            }
            if (arg2 < 17000000) {
                uVar2 = 1;
                goto code_r0x00012eaa;
            }
            if (arg2 < 20000000) goto code_r0x00012e74;
            if (arg2 < 25000000) goto code_r0x00012e83;
            if (29999999 < arg2) {
                uVar2 = (arg2 < 40000000) + 3;
                goto code_r0x00012eaa;
            }
        }
        uVar2 = 5;
    }
code_r0x00012eaa:
    *(arg1 + 0x1010) = (uVar2 << 0x10 | uVar2) << 4 | uVar1 & 0xff8fff8f;
    return;
}


/* fcn.000132fc @ 0x132fc */

ulong * fcn.000132fc(int64_t arg1)

{
    char cVar1;
    int in_EDX;
    ulong *puVar2;
    int32_t var_10h;
    int64_t var_ch;
    int32_t var_4h;
    
    puVar2 = arg1;
    cVar1 = fcn.000144a4();
    if (cVar1 == '\0') {
        cVar1 = fcn.00014480();
        if (cVar1 != '\0') {
            if (in_EDX == 0) {
                var_10h = 0x8040007;
            }
            else {
                if (in_EDX != 1) goto code_r0x00013379;
                var_10h = 0x8040016;
            }
            var_ch._0_4_ = 5;
            goto code_r0x00013386;
        }
    }
    else {
        if (in_EDX == 0) {
            var_10h = 0x90e0006;
            var_ch._0_4_ = 5;
code_r0x00013323:
            *arg1 = CONCAT44(var_ch,var_10h);
            *(arg1 + 8) = 0;
            return puVar2;
        }
        if (in_EDX == 1) {
            var_10h = 0x90c0011;
            var_ch._0_4_ = 7;
            goto code_r0x00013323;
        }
    }
code_r0x00013379:
    var_10h = 0;
    var_ch._0_4_ = 0;
code_r0x00013386:
    *puVar2 = CONCAT44(var_ch,var_10h);
    puVar2[1] = 0;
    return puVar2;
}


/* fcn.00012f98 @ 0x12f98 */

ulong fcn.00012f98(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint64_t arg2_00;
    uint32_t uVar3;
    
    fcn.000138e4(*arg2,arg3 & 1);
    (**(*0x14ba8 + 0xf8))((arg1 & 0xffffffffU) * 10000);
    uVar1 = *arg2;
    uVar3 = ~arg3 & 1;
    arg2_00 = uVar3;
    if ((uVar3 < 2) && (cVar2 = fcn.000133bc(uVar1), cVar2 != '\0')) {
        cVar2 = fcn.00013398(uVar1);
        if (cVar2 == '\0') {
            return 0x8000000000000003;
        }
        fcn.0001342c(uVar1,arg2_00,0xfffffffe,uVar3);
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00013048 @ 0x13048 */

uint64_t fcn.00013048(int64_t arg1)

{
    uint64_t uVar1;
    char acStackX_10 [24];
    
    uVar1 = fcn.00012f4c(arg1);
    if (-1 < uVar1) {
        *(arg1 + 0x1044) = *(arg1 + 0x1044) | 3;
        *(arg1 + 0x1040) = ((*(arg1 + 0x10bc) >> 8) << 2) << 0x10 | *(arg1 + 0x1040) & 0xfd | 0x402;
        *(arg1 + 0x1048) = *(arg1 + 0x1170);
        *(arg1 + 0x1040) = *(arg1 + 0x1040) | 1;
        uVar1 = fcn.00012ec8(arg1);
        if (-1 < uVar1) {
            fcn.00012ff0(arg1,acStackX_10);
            uVar1 = -(acStackX_10[0] != '\x03') & 0x8000000000000007;
        }
    }
    return uVar1;
}


/* fcn.00012f4c @ 0x12f4c */

ulong fcn.00012f4c(int64_t arg1)

{
    int iVar1;
    
    iVar1 = 1000;
    do {
        if ((*(arg1 + 0x1044) & 8) == 0) {
            return 0;
        }
        (**(*0x14ba8 + 0xf8))(1000);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x8000000000000012;
}


/* fcn.00012ec8 @ 0x12ec8 */

uint64_t fcn.00012ec8(int64_t arg1)

{
    uint64_t uVar1;
    int iVar2;
    
    iVar2 = 1000;
    do {
        if ((*(arg1 + 0x1044) & 8) == 0) break;
        (**(*0x14ba8 + 0xf8))(1000);
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (iVar2 == 0) {
        uVar1 = 0x8000000000000012;
    }
    else if ((*(arg1 + 0x1044) & 2) == 0) {
        uVar1 = ~-((*(arg1 + 0x1044) & 1) != 0) & 0x8000000000000007;
    }
    else {
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.00012ff0 @ 0x12ff0 */

ulong fcn.00012ff0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    uVar1 = *(arg1 + 0x1040);
    if ((uVar1 >> 0x10) - 1 < 0x40) {
        if (uVar1 >> 0x12 != 0) {
            uVar3 = uVar1 >> 0x12;
            iVar2 = arg1 - arg2;
            do {
                *arg2 = *(iVar2 + 0x104c + arg2);
                arg2 = arg2 + 4;
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        *(arg1 + 0x1044) = *(arg1 + 0x1044) | 3;
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.000130f8 @ 0x130f8 */

int64_t fcn.000130f8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char *arg2_00;
    char acStackX_18 [16];
    
    iVar1 = fcn.00013c2c(arg1,0x1c);
    arg2_00 = NULL;
    if (iVar1 != 0) {
        arg2_00 = fcn.000102c0(iVar1,0x1c);
    }
    iVar1 = fcn.00012f4c(arg1);
    if (-1 < iVar1) {
        *(arg1 + 0x1044) = *(arg1 + 0x1044) | 3;
        *(arg1 + 0x1040) = ((*(arg1 + 0x10bc) >> 8) << 2) << 0x10 | *(arg1 + 0x1040) & 0xfd | 0x402;
        *(arg1 + 0x1048) = *(arg1 + 0x1170);
        *(arg1 + 0x1040) = *(arg1 + 0x1040) | 1;
        iVar1 = fcn.00012ec8(arg1);
        if (-1 < iVar1) {
            fcn.00012ff0(arg1,arg2_00);
            if (acStackX_18 != arg2_00) {
                section..text(acStackX_18,arg2_00,4);
            }
            if (acStackX_18[0] == '\a') {
                if (arg2 != arg2_00 + 4) {
                    section..text(arg2,arg2_00 + 4,0x18);
                }
                iVar1 = 0;
            }
            else {
                iVar1 = -0x7ffffffffffffff9;
            }
        }
    }
    return iVar1;
}


/* fcn.00011ba0 @ 0x11ba0 */

ulong fcn.00011ba0(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint16_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    uint64_t *puVar13;
    uint64_t uStackX_8;
    
    iVar4 = CONCAT44(in_register_00000014,arg2);
    iVar1 = *(arg1 + 0x18);
    uVar12 = 0;
    uVar8 = uVar12;
    if (*(iVar4 + 0x101d8) != 0) {
        do {
            uVar6 = (*(iVar4 + 0x101dc) >> 0xc) + ((*(iVar4 + 0x101dc) & 0xfff) != 0);
            iVar9 = uVar8 * 0x101c;
            puVar13 = iVar4 + 0x18 + iVar9;
            iVar3 = (**(iVar1 + 0x58))(iVar1,0,4,uVar6,puVar13,0);
            if (iVar3 < 0) {
                return 0x8000000000000009;
            }
            uVar7 = uVar6 << 0xc;
            uStackX_8 = uVar7;
            iVar3 = (**(iVar1 + 0x48))(iVar1,2,*puVar13,&uStackX_8,iVar4 + 0x20 + iVar9,iVar4 + 0x28 + iVar9);
            if (iVar3 < 0) {
                return 0x8000000000000009;
            }
            if (uStackX_8 != uVar7) {
                return 0x8000000000000009;
            }
            if (uStackX_8 != 0) {
                fcn.000102c0(*puVar13,uStackX_8);
            }
            uVar7 = *puVar13;
            uVar10 = uStackX_8;
            uVar11 = uVar12;
            if (uStackX_8 == 0) {
code_r0x00011d42:
                *(iVar9 + 0x1030 + iVar4) = uVar11 + 1;
            }
            else {
                do {
                    if (0xff < uVar11) break;
                    iVar5 = uVar11 * 0x10 + iVar9;
                    iVar3 = (uVar11 + 3) * 0x10 + iVar9;
                    puVar13 = iVar3 + iVar4;
                    *puVar13 = *puVar13 & 0xffc0000000000000;
                    puVar13 = iVar3 + iVar4;
                    *puVar13 = *puVar13 | uVar7 >> 10;
                    uVar2 = *(iVar5 + 0x38 + iVar4);
                    *(iVar5 + 0x38 + iVar4) = uVar2 & 0xfffffffffe001000 | 0x1000;
                    if (uVar10 < 0x1001) {
                        *(uVar11 * 0x10 + iVar9 + 0x38 + iVar4) =
                             uVar10 & 0xffffff | uVar2 & 0xfffffffffe000000 | 0x1000000;
                        break;
                    }
                    uVar11 = uVar11 + 1;
                    uVar7 = uVar7 + 0x1000;
                    uVar10 = uVar10 - 0x1000;
                } while (uVar10 != 0);
                if (uVar11 != 0x100) goto code_r0x00011d42;
                puVar13 = iVar9 + 0x1028 + iVar4;
                *puVar13 = *puVar13 | 0x1000000;
                *(iVar9 + 0x1030 + iVar4) = 0x100;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(iVar4 + 0x101d8));
    }
    return 0;
}


/* fcn.00011b0c @ 0x11b0c */

void fcn.00011b0c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t arg1_00;
    int64_t arg2_00;
    uint16_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    iVar2 = *arg1;
    uVar5 = 0;
    iVar6 = (arg2 & 0xffffU) * 0x101c;
    iVar1 = *(iVar6 + 0x1030 + arg1);
    if (iVar1 != 0) {
        uVar3 = 0;
        do {
            arg1_00 = (uVar3 + (arg2 & 0xffff) * iVar1) * 0x10 + iVar2;
            arg2_00 = (uVar5 + 3) * 0x10 + iVar6 + arg1;
            if (arg1_00 != arg2_00) {
                section..text(arg1_00,arg2_00,0x10);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            uVar3 = uVar4;
        } while (uVar3 < *(iVar6 + 0x1030 + arg1));
    }
    return;
}


/* fcn.0001133c @ 0x1133c */

ulong fcn.0001133c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int iVar4;
    int64_t iVar5;
    ulong uVar6;
    char cVar7;
    int16_t iVar8;
    int iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int iVar12;
    int iVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    int64_t iVar19;
    uint32_t uStack_48;
    
    iVar5 = fcn.00013c2c(arg1,0xc);
    uVar10 = 0;
    if ((iVar5 == 0) || (iVar5 = fcn.000102c0(iVar5,0xc), iVar5 == 0)) {
        uVar6 = 0x8000000000000009;
    }
    else {
        if (iVar5 != arg3) {
            section..text(iVar5,arg3,0xc);
        }
        *(arg3 + 4) = 0;
        *arg3 = 0;
        *(arg4 + 8) = 0;
        *arg4 = 0;
        *(arg4 + 0x18) = 0;
        *(arg4 + 0x10) = 0;
        if (*arg1 != 0) {
            iVar1 = *(arg1 + 0xc);
            uVar14 = uVar10;
            do {
                if (*(arg2 + 3) == *(uVar14 * 0x2d14 + iVar1)) {
                    iVar19 = uVar14 * 0x2d14;
                    uStack_48 = 0;
                    if (*(iVar19 + 4 + iVar1) == 0) {
                        return 0;
                    }
                    do {
                        uVar15 = 0;
                        uVar11 = 0;
                        if ((*(arg3 + 4) != 0) && (*(arg3 + 8) != 0)) {
                            return 0;
                        }
                        *arg3 = 0;
                        *(arg3 + 8) = 0;
                        *(arg4 + 8) = 0;
                        iVar17 = uVar10 * 0x2d + iVar19;
                        *arg4 = 0;
                        *(arg4 + 0x18) = 0;
                        *(arg4 + 0x10) = 0;
                        uVar18 = *(iVar1 + 0x2c + iVar17);
                        if (uVar18 < *(iVar1 + 0x30 + iVar17)) {
                            iVar2 = *(arg1 + 0xc);
                            uVar11 = uVar15;
                            do {
                                uVar11 = uVar11 + 1;
                                uVar15 = uVar15 + (((*((uVar18 >> 3) + 4 + arg2) & 1 << (uVar18 & 7)) != 0) <<
                                                  (uVar18 - *(iVar17 + 0x2c + iVar2) & 0x1f));
                                uVar18 = uVar18 + 1;
                                *(arg3 + 4) = uVar15;
                            } while (uVar18 < *(iVar1 + 0x30 + iVar17));
                        }
                        uVar16 = 0;
                        uVar15 = *(iVar1 + 0x34 + iVar17);
                        uVar18 = 0;
                        if (uVar15 < *(iVar1 + 0x38 + iVar17)) {
                            iVar2 = *(arg1 + 0xc);
                            uVar18 = uVar16;
                            do {
                                uVar18 = uVar18 + 1;
                                uVar16 = uVar16 + (((*((uVar15 >> 3) + 4 + arg2) & 1 << (uVar15 & 7)) != 0) <<
                                                  (uVar15 - *(iVar17 + 0x34 + iVar2) & 0x1f));
                                uVar15 = uVar15 + 1;
                                *(arg3 + 8) = uVar16;
                            } while (uVar15 < *(iVar1 + 0x38 + iVar17));
                        }
                        uVar15 = *(iVar1 + 0x24 + iVar17);
                        if (uVar15 < *(iVar1 + 0x28 + iVar17)) {
                            iVar2 = *(arg1 + 0xc);
                            do {
                                uVar3 = uVar15;
                                uVar16 = uVar15 >> 3;
                                uVar15 = uVar15 + 1;
                                *arg3 = *arg3 + (((*(uVar16 + 4 + arg2) & 1 << (uVar3 & 7)) != 0) <<
                                                (uVar3 - *(iVar2 + 0x24 + iVar17) & 0x1f));
                            } while (uVar15 < *(iVar1 + 0x28 + iVar17));
                        }
                        if (*(iVar19 + 8 + iVar1) == 1) {
                            *arg4 = *(iVar1 + 0x18 + iVar17);
                            *(arg4 + 8) = *(iVar1 + 0x14 + iVar17);
                            *(arg4 + 0x10) = *(iVar1 + 0x20 + iVar17);
                            *(arg4 + 0x18) = *(iVar1 + 0x1c + iVar17);
                        }
                        if ((*(iVar19 + 0xc + iVar1) == 1) || (*(iVar19 + 0x10 + iVar1) == 1)) {
                            iVar9 = *(arg3 + 4);
                            *arg4 = 0;
                            *(arg4 + 8) = 0x400;
                            *(arg4 + 0x10) = 0;
                            *(arg4 + 0x18) = 0x400;
                            cVar7 = iVar9;
                            iVar8 = iVar9;
                            if (uVar11 < 0x11) {
                                iVar4 = iVar8;
                                if (uVar11 < 9) {
                                    iVar4 = cVar7;
                                }
                            }
                            else {
                                iVar4 = iVar9;
                            }
                            iVar13 = *(iVar5 + 4);
                            iVar12 = 0;
                            if (iVar4 + iVar13 < 1) {
                                iVar4 = 0;
                            }
                            else {
                                if (uVar11 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar11 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                iVar4 = iVar13 + iVar4;
                            }
                            if (iVar4 < 0x400) {
                                if (uVar11 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar11 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                if (0 < iVar4 + iVar13) {
                                    if (uVar11 < 0x11) {
                                        if (uVar11 < 9) {
                                            iVar9 = cVar7;
                                        }
                                        else {
                                            iVar9 = iVar8;
                                        }
                                    }
                                    iVar12 = iVar13 + iVar9;
                                }
                            }
                            else {
                                iVar12 = 0x400;
                            }
                            iVar9 = *(arg3 + 8);
                            *(arg3 + 4) = iVar12;
                            cVar7 = iVar9;
                            iVar8 = iVar9;
                            if (uVar18 < 0x11) {
                                iVar4 = iVar8;
                                if (uVar18 < 9) {
                                    iVar4 = cVar7;
                                }
                            }
                            else {
                                iVar4 = iVar9;
                            }
                            iVar12 = *(iVar5 + 8);
                            iVar13 = 0;
                            if (iVar4 + iVar12 < 1) {
                                iVar4 = iVar13;
                            }
                            else {
                                if (uVar18 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar18 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                iVar4 = iVar12 + iVar4;
                            }
                            if (iVar4 < 0x400) {
                                if (uVar18 < 0x11) {
                                    iVar4 = iVar8;
                                    if (uVar18 < 9) {
                                        iVar4 = cVar7;
                                    }
                                }
                                else {
                                    iVar4 = iVar9;
                                }
                                if (0 < iVar4 + iVar12) {
                                    if (uVar18 < 0x11) {
                                        if (uVar18 < 9) {
                                            iVar9 = cVar7;
                                        }
                                        else {
                                            iVar9 = iVar8;
                                        }
                                    }
                                    iVar13 = iVar12 + iVar9;
                                }
                            }
                            else {
                                iVar13 = 0x400;
                            }
                            *(arg3 + 8) = iVar13;
                        }
                        uStack_48 = uStack_48 + 1;
                        uVar10 = uStack_48;
                    } while (uStack_48 < *(iVar19 + 4 + iVar1));
                    return 0;
                }
                uVar11 = uVar14 + 1;
                uVar14 = uVar11;
            } while (uVar11 < *arg1);
        }
        uVar6 = 0x800000000000000e;
    }
    return uVar6;
}


/* fcn.000138e4 @ 0x138e4 */

ulong fcn.000138e4(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint in_register_00000014;
    
    if ((arg2 < 2) && (uVar2 = arg2, cVar1 = fcn.000133bc(arg1), cVar1 != '\0')) {
        cVar1 = fcn.00013398(arg1 & 0xffffffff);
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        fcn.0001342c(arg1 & 0xffffffff,CONCAT44(in_register_00000014,uVar2),0xfffffffe,arg2);
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00013214 @ 0x13214 */

ulong fcn.00013214(int64_t arg1)

{
    int iVar1;
    
    *(arg1 + 0x10b8) = 0;
    *(arg1 + 0x1170) = 0;
    *(arg1 + 0x1270) = 0;
    *(arg1 + 0x10b4) = 0;
    *(arg1 + 0x1014) = 0;
    *(arg1 + 0x1018) = 0;
    *(arg1 + 0x10ec) = *(arg1 + 0x10ec) & 0x8000;
    *(arg1 + 0x10f0) = *(arg1 + 0x10f0) & 0xf4fc0c00;
    *(arg1 + 0x1010) = *(arg1 + 0x1010) & 0x30003;
    *(arg1 + 0x120c) = *(arg1 + 0x120c) & 0xff00ffde;
    *(arg1 + 0x1098) = *(arg1 + 0x1098) & 0xfffff6;
    *(arg1 + 0x109c) = *(arg1 + 0x109c) | 1;
    *(arg1 + 0x120c) = *(arg1 + 0x120c) & 0xff00ffff;
    *(arg1 + 0x1090) = 0;
    *(arg1 + 0x1094) = 0;
    *(arg1 + 0x1200) = 0;
    *(arg1 + 0x1204) = 0;
    *(arg1 + 0x1208) = *(arg1 + 0x1208) & 0xffff0080;
    *(arg1 + 0x1098) = *(arg1 + 0x1098) & 0xffffff;
    iVar1 = 300;
    *(arg1 + 0x1008) = *(arg1 + 0x1008) | 2;
    do {
        if ((*(arg1 + 0x1008) & 4) != 0) {
            return 0;
        }
        (**(*0x14ba8 + 0xf8))(1000);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x8000000000000007;
}


/* fcn.00012570 @ 0x12570 */

void fcn.00012570(int64_t arg1,uint32_t arg2)

{
    uint in_register_00000014;
    int64_t iVar1;
    uint16_t uVar2;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    uVar2 = 0;
    if (*(iVar1 + 0x101d8) != 0) {
        do {
            (**(*(arg1 + 0x18) + 0x50))(*(arg1 + 0x18),*(uVar2 * 0x101c + 0x28 + iVar1));
            (**(*(arg1 + 0x18) + 0x60))
                      (*(arg1 + 0x18),(*(iVar1 + 0x101dc) >> 0xc) + ((*(iVar1 + 0x101dc) & 0xfff) != 0),
                       *(uVar2 * 0x101c + 0x18 + iVar1));
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x101d8));
    }
    return;
}


/* fcn.0001208c @ 0x1208c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

uint64_t fcn.0001208c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    uint32_t *arg1_01;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *arg1_02;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t arg3_00;
    uint64_t uVar7;
    uint32_t uVar8;
    uint32_t *arg2_00;
    int64_t var_38h;
    uint uStack_78;
    int iStack_74;
    int iStack_70;
    ulong uStack_68;
    ulong uStack_60;
    int64_t var_50h;
    int32_t var_48h;
    int64_t var_40h;
    ulong uStack_40;
    int32_t var_30h;
    ulong uStack_30;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    iVar3 = *arg2;
    iVar2 = (arg3 & 0xffffU) * 0x101c;
    uVar8 = (arg3 & 0xffff) * *(iVar2 + 0x1030 + arg2);
    arg1_00 = fcn.00013c2c(arg1,5);
    uVar7 = 0;
    if ((arg1_00 == 0) || (arg1_01 = fcn.000102c0(arg1_00,5), arg1_01 == NULL)) {
        return 0x8000000000000009;
    }
    uVar1 = *(iVar2 + 0x1030 + arg2);
    uVar6 = uVar7;
    arg3_00 = uVar7;
    if (uVar1 != 0) {
        do {
            uVar4 = uVar6 + uVar8;
            arg3_00 = arg3_00 + (*(iVar3 + 8 + uVar4 * 0x10) & 0xffffff);
            if ((*(iVar3 + 8 + uVar4 * 0x10) & 0x1000000) != 0) break;
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < uVar1);
        if (3 < arg3_00) {
            if ((*(iVar2 + 0x38 + arg2) & 0xffffff) < (*(iVar3 + 8 + uVar8 * 0x10) & 0xffffff)) {
                uVar7 = 0x8000000000000005;
                goto code_r0x00012316;
            }
            arg2_00 = *(iVar3 + uVar8 * 0x10) * 0x400;
            if (arg1_01 != arg2_00) {
                section..text(arg1_01,arg2_00,4);
            }
            uVar8 = *arg1_01 & 0xff;
            if (((uVar8 == 5) && (*(arg1 + 0x204a8) == '\x01')) && (arg1_02 = *(arg1 + 0x204a0), arg1_02 != NULL)) {
                arg2_00 = arg2_00 + 1;
                if ((arg3_00 != 0) && (arg1_02 != arg2_00)) {
code_r0x00012200:
                    section..text(arg1_02,arg2_00,arg3_00);
                }
            }
            else {
                if (((uVar8 != 9) || ((*(arg1 + 0x204a8) != '\x01' || (arg1_02 = *(arg1 + 0x204a0), arg1_02 == NULL))))
                   && ((uVar8 != 8 || ((*(arg1 + 0x204a8) != '\x01' || (arg1_02 = *(arg1 + 0x204a0), arg1_02 == NULL)))
                       ))) {
                    if (uVar8 == 1) {
                        uStack_68 = *(arg1 + 0x204c8);
                        uStack_60 = *(arg1 + 0x204d0);
                        iStack_74 = *(arg1 + 0x204c3) * 0x100 + *(arg1 + 0x204c2);
                        uStack_78 = 0;
                        iStack_70 = *(arg1 + 0x204c5) * 0x100 + *(arg1 + 0x204c4);
                        var_50h._0_4_ = *(arg1 + 0x204d8);
                        iVar3 = fcn.0001133c(&uStack_68,arg2_00,&uStack_78,&var_40h);
                        if (iVar3 == 0) {
                            *(arg1 + 0x204c3) = iStack_74 >> 8;
                            *(arg1 + 0x204c2) = iStack_74;
                            *(arg1 + 0x204c5) = iStack_70 >> 8;
                            *(arg1 + 0x204c4) = iStack_70;
                            *(arg1 + 0x204c1) = uStack_78;
                            *(*(arg1 + 0x20438) + 0x18) = uStack_40;
                            **(arg1 + 0x20438) = var_40h;
                            *(*(arg1 + 0x20438) + 0x20) = uStack_30;
                            *(*(arg1 + 0x20438) + 8) = _var_30h;
                            iVar3 = *0x14ba8;
                            *(arg1 + 0x20498) = 1;
                            (**(iVar3 + 0x68))(*(arg1 + 0x20430));
                            uVar7 = 0;
                        }
                    }
                    goto code_r0x00012316;
                }
                if ((arg3_00 != 0) && (arg1_02 != arg2_00)) goto code_r0x00012200;
            }
            *(arg1 + 0x204a0) = *(arg1 + 0x204a0) + arg3_00;
            *(arg1 + 0x204a9) = 1;
            goto code_r0x00012316;
        }
    }
    uVar7 = 0x8000000000000004;
code_r0x00012316:
    (**(*0x14ba8 + 0x48))(arg1_01);
    return uVar7;
}


/* fcn.00011200 @ 0x11200 */

void fcn.00011200(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    uint32_t uStackX_8;
    uchar auStack_2d58 [60];
    uint uStack_2d1c;
    
    fcn.000102c0(auStack_2d58,0x2d50);
    uStack_2d1c = 0xffff;
    for (uVar6 = arg3 & 0xffffffff; uVar6 != 0; uVar6 = uVar6 + iVar3) {
        uVar1 = *arg2;
        uVar2 = uVar1 >> 2;
        uVar5 = uVar1 & 3;
        if (uVar1 == 0xfe) {
            uVar4 = *(arg2 + 1);
            uVar2 = *(arg2 + 2);
            iVar3 = -*(arg2 + 1);
        }
        else {
            if ((((uVar5 != 0) && (uVar5 != 1)) && (uVar5 != 2)) && (uVar5 == 3)) {
                uVar5 = 4;
            }
            uVar4 = uVar5 + 1;
            iVar3 = -1 - uVar5;
        }
        arg2 = arg2 + uVar4;
        uStackX_8 = uVar2;
        fcn.00010e4c(auStack_2d58,uStackX_8,arg1 + 0x204c8);
    }
    fcn.00010d90(auStack_2d58,arg1 + 0x204c8);
    return;
}


/* fcn.00013d30 @ 0x13d30 */

ulong fcn.00013d30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.00013c9c(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00013e35:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x00013e2b:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x00013e43:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00013e43;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x00013e2b;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00013e35;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000144a4 @ 0x144a4 */

ulong fcn.000144a4(void)

{
    char cVar1;
    
    cVar1 = fcn.00014444();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00014444(), cVar1 != '\x05')) && (cVar1 = fcn.00014444(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00014444(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.00014480 @ 0x14480 */

uchar fcn.00014480(void)

{
    char cVar1;
    uchar uVar2;
    
    cVar1 = fcn.00014444();
    uVar2 = 1;
    if (cVar1 != '\x01') {
        uVar2 = 1;
        cVar1 = fcn.00014444();
        if (cVar1 != '\x04') {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00014444 @ 0x14444 */

void fcn.00014444(void)

{
    if (*0x14ab0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x14ab0 = '\x05';
        }
        else {
            *0x14ab0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00013940 @ 0x13940 */

uint64_t fcn.00013940(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int8_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    
    uVar2 = arg1 & 0xffffffff;
    cVar1 = fcn.000133bc(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar7 = uVar2 & 0x1ff;
        uVar2 = uVar2 >> 0x10 & 0x1f;
        iVar3 = fcn.00013630(auStackX_18);
        iVar5 = (uVar2 & 0xffffffff) * 0x1e;
        if (*(iVar5 + 2 + iVar3) == -1) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar6 = *(iVar5 + 2 + iVar3) + (uVar7 >> 3 & 0x1fffffff) * 4;
            iVar4 = (uVar7 & 7) << 2;
            *arg2 = (*((uVar6 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar5 + iVar3) << 0x10 | uVar6 & 0xffff) & 3 << iVar4)
                    >> iVar4;
            uVar2 = 0 >> iVar4;
        }
    }
    return uVar2;
}


/* fcn.00013630 @ 0x13630 */

ulong fcn.00013630(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000144a4();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x14640;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x14880;
    }
    return uVar2;
}


/* fcn.000133bc @ 0x133bc */

uint64_t fcn.000133bc(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.000144a4();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.00013630(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.00013630(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.000136e8 @ 0x136e8 */

ulong fcn.000136e8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    int iVar5;
    int in_R8D;
    uint *in_R9;
    uchar auStackX_8 [8];
    
    uVar3 = arg2 & 0x1f;
    iVar1 = fcn.00013630(auStackX_8);
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 4);
    }
    else if (iVar5 == 1) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xc);
    }
    else if (iVar5 == 2) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 10);
    }
    else if (iVar5 == 3) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x10);
    }
    else if (iVar5 == 4) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xe);
    }
    else if (iVar5 == 5) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x14);
    }
    else if (iVar5 == 6) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x16);
    }
    else {
        if (iVar5 != 7) {
            return 0x8000000000000003;
        }
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x18);
    }
    if (uVar2 == 0xffff) {
        return 0x8000000000000003;
    }
    if (iVar5 - 6U < 2) {
        in_R8D = in_R8D * 8;
    }
    else {
        in_R8D = in_R8D * 4;
    }
    *in_R9 = *(*puVar4 << 0x10 | (uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.00013aa0 @ 0x13aa0 */

ulong fcn.00013aa0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013660(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00013808(6,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00013b48 @ 0x13b48 */

ulong fcn.00013b48(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013660(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00013808(7,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.000135f4 @ 0x135f4 */

int fcn.000135f4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.00013630(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10;
}


/* fcn.00013af4 @ 0x13af4 */

ulong fcn.00013af4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013660(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00013808(6,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00013b9c @ 0x13b9c */

ulong fcn.00013b9c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013660(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00013808(7,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.00013a50 @ 0x13a50 */

ulong fcn.00013a50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013660(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000136e8(7,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00013a00 @ 0x13a00 */

ulong fcn.00013a00(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00013660(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.000136e8(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.000141dc @ 0x141dc */

ulong fcn.000141dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint *in_stack_00000048;
    uint8_t *in_stack_00000050;
    
    uVar7 = arg4;
    if ((uVar7 < 0x14) && ((0x800f3U >> (uVar7 & 0x1f) & 1) != 0)) {
        if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar1 = arg1 + 0xd8;
            iVar8 = 0xfffffff;
            iVar5 = 0xfffffff;
            do {
                if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
                iVar5 = iVar5 + -1;
            } while (0 < iVar5);
            if (iVar5 != 0) {
                *in_stack_00000050 = 4;
                *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) =
                     arg2 << 0x18 | arg3 & 0xffff;
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
                *(uVar6 + 0xc0000000) = arg4 << 8 | *(uVar6 + 0xc0000000) & 0x7f;
                *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) = 0xf000;
                if ((((uVar7 == 1) || (uVar7 == 5)) || (uVar7 == 7)) || (uVar7 == 0x13)) {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000048;
                }
                else {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
                }
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
                do {
                    uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                    if ((uVar2 & 1) == 0) break;
                    iVar8 = iVar8 + -1;
                } while (0 < iVar8);
                if (iVar8 != 0) {
                    uVar4 = uVar2 >> 1 & 3;
                    *in_stack_00000050 = uVar4;
                    if (uVar4 == 0) {
                        if (((arg4 & 0xfffffff9U) == 0) && (uVar7 != 2)) {
                            *in_stack_00000048 =
                                 *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000);
                        }
                        return 0;
                    }
                    if (uVar4 != 2) {
                        return 0x8000000000000007;
                    }
                    return 0x8000000000000010;
                }
            }
            uVar3 = 0x8000000000000012;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00013398 @ 0x13398 */

bool fcn.00013398(int64_t arg1)

{
    unkint7 extraout_RAX;
    int aiStackX_10 [6];
    
    fcn.00013940(arg1,aiStackX_10);
    return -1 < extraout_RAX && aiStackX_10[0] == 0;
}


/* fcn.0001342c @ 0x1342c */

void fcn.0001342c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uStackX_8;
    uint32_t uStackX_10;
    uchar auStackX_18 [8];
    
    uStackX_10 = CONCAT31(uStackX_10._1_3_,arg2);
    uVar5 = ~arg3 | arg4;
    uVar8 = arg1;
    uVar1 = arg1 >> 0x10;
    uVar7 = 0;
    if ((uVar5 & 0xfffffffe) != 0) {
        cVar2 = fcn.000133bc(arg1);
        uVar7 = 0;
        if (cVar2 != '\0') {
            uVar6 = uVar8 & 0x1ff;
            arg2 = uVar1 & 0xf1f;
            iVar3 = fcn.000136e8(6,arg2);
            if ((-1 < iVar3) && (uVar7 = uStackX_10 >> (uVar6 & 0x1f) & 1, uVar7 != 0)) {
                arg2 = uVar6 >> 5;
                fcn.00013aa0(uVar1 & 0xf1f,arg2,1 << (uVar6 & 0x1f));
            }
        }
    }
    uVar6 = 0;
    if ((uVar5 & 1) != 0) {
        cVar2 = fcn.000133bc(arg1 & 0xffffffff);
        uVar6 = 0;
        if (cVar2 != '\0') {
            uVar5 = uVar8 & 0x1ff;
            arg2 = uVar1 & 0xf1f;
            iVar3 = fcn.000136e8(7,arg2);
            if ((-1 < iVar3) && (uVar6 = uStackX_8 >> (uVar5 & 0x1f) & 1, uVar6 != 0)) {
                arg2 = uVar5 >> 5;
                fcn.00013b48(uVar1 & 0xf1f,arg2,1 << (uVar5 & 0x1f));
            }
        }
    }
    iVar3 = fcn.00013630(auStackX_18);
    uVar5 = fcn.000135f4(arg1 & 0xffffffff,arg2);
    puVar4 = *((uVar1 & 0x1f) * 0x1e + iVar3) << 0x10 | (uVar5 & 0xffff0000 | 0xfffd0000) << 8 | uVar5 & 0xffff;
    *puVar4 = *puVar4 & arg3 | arg4;
    if (uVar7 != 0) {
        fcn.00013af4(uVar1 & 0xf1f,(uVar8 & 0x1ff) >> 5,1 << (uVar8 & 0x1ff & 0x1f));
    }
    if (uVar6 != 0) {
        fcn.00013b9c(uVar8 >> 0x10 & 0xf1f,(uVar8 & 0x1ff) >> 5,1 << (uVar8 & 0x1ff & 0x1f));
    }
    return;
}


/* fcn.00013660 @ 0x13660 */

uint64_t fcn.00013660(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStackX_8;
    uint32_t auStackX_18 [4];
    
    uVar6 = arg1;
    uVar7 = arg2;
    iVar2 = fcn.00013630(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.000144a4();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.00013630();
        cVar1 = fcn.000144a4();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00013808 @ 0x13808 */

ulong fcn.00013808(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    iVar2 = fcn.00013630(auStackX_10);
    if (iVar6 == 6) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x16);
        fcn.00013a00(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    else {
        if (iVar6 != 7) {
            return 0x8000000000000003;
        }
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x18);
        fcn.00013a50(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    if (uVar1 == 0xffff) {
        return 0x8000000000000003;
    }
    auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
    uVar3 = fcn.000141dc(0xf9000,CONCAT71(arg2_00 >> 8,*puVar5),uVar1 + arg3 * 8,0x13);
    return uVar3;
}


/* fcn.00013c9c @ 0x13c9c */

ulong fcn.00013c9c(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00013cfc:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00013cfc;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* fcn.00013c5c @ 0x13c5c */

void fcn.00013c5c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013c2c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


