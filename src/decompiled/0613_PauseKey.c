// decompiled by r2ghidra: 0613_PauseKey.pe32
// functions: 19

/* entry0 @ 0x10390 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103bc(arg1,arg2);
    fcn.00010520(arg1,arg2);
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
    
    *0x112f8 = *(arg1 + 0x60);
    *0x11300 = *(arg1 + 0x58);
    *0x112f0 = arg1;
    fcn.00010cb8();
    puVar4 = fcn.00010cb8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001041b:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010300();
                fcn.000102f0();
                uVar2 = in(0x1808);
                fcn.000102d0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102c0();
                }
                fcn.000102d0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102f0();
                }
                else {
                    fcn.000102e0();
                }
code_r0x00010484:
                (**(*0x112f8 + 0x140))(0x111e0,0,0x11310);
                (**(*0x112f8 + 0x140))(0x111d0,0,0x11330);
                (**(*0x112f8 + 0x140))(0x111a0,0,0x11320);
                (**(*0x112f8 + 0x140))(0x11220,0,0x11318);
    //WARNING: Could not recover jumptable at 0x00010519. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x112f8 + 0x140))(0x111c0,0,0x11328);
                return;
            }
            if ((*0x11248 == *(puVar4 + 4)) && (*0x11250 == *(puVar4 + 8))) goto code_r0x00010484;
        }
        else if (uVar1 == 4) goto code_r0x0001041b;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010520 @ 0x10520 */

int64_t fcn.00010520(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    int64_t arg4;
    ulong auStackX_8 [2];
    ulong *puStackX_18;
    int64_t iStackX_20;
    ulong uStack_18;
    uchar auStack_10 [16];
    
    if (*0x11340 == 0) {
        *0x11338 = *(arg2 + 0x60);
        *0x11348 = *(arg2 + 0x58);
        *0x11340 = arg2;
    }
    iStackX_20 = arg1;
    iVar1 = (**(*0x11338 + 0x118))(arg1,0x11268,auStackX_8,arg1,0,2);
    if ((-1 < iVar1) && (iVar1 = (**(*0x11338 + 0x140))(0x11258,0), -1 < iVar1)) {
        arg4 = 0x112d8;
        arg3 = 0;
        iVar1 = (**puStackX_18)(puStackX_18,auStackX_8[0]);
        if (-1 < iVar1) {
            *0x11350 = fcn.00010d24(*0x112d8,3,arg3,arg4);
            *0x11368 = fcn.00010d24(*0x112d8,2,arg3,arg4);
            (**(*0x11338 + 0x80))(&iStackX_20,0x11200,0,0x11240);
            iVar1 = (**(*0x11338 + 0x50))(0x200,8,0x10678,0,&uStack_18);
            if (-1 < iVar1) {
                (**(*0x11338 + 0xa8))(0x111b0,uStack_18,auStack_10);
            }
            fcn.00010c58();
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010cb8 @ 0x10cb8 */

int64_t fcn.00010cb8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11308 == 0) {
        *0x11308 = 0;
        if (*(*0x112f0 + 0x68) != 0) {
            piVar2 = *(*0x112f0 + 0x70);
            do {
                if ((*0x11210 == *piVar2) && (*0x11218 == piVar2[1])) {
                    *0x11308 = (*(*0x112f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x11308;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x112f0 + 0x68));
        }
    }
    return *0x11308;
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


/* fcn.00010d24 @ 0x10d24 */

int64_t fcn.00010d24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    arg1_00 = fcn.00010ef0(arg1);
    if (arg1_00 != NULL) {
        fcn.00010a68(iVar6,aiStack_38,arg3);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x1129a;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.00010b24(arg1_00,0,0x1129a,iVar3);
                if (iVar3 == 0) goto code_r0x00010ea0;
                iStackX_18 = 0;
                iVar4 = (**(*0x11310 + 8))(*0x11310,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.00010fe0(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x11310 + 8))(*0x11310,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x112f8 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x00010ea0;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x00010ea0;
                if (iVar6 == 0) break;
                (**(*0x112f8 + 0x48))(iVar6);
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
code_r0x00010ea0:
        (**(*0x112f8 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x112f8 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x112f8 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.00010c58 @ 0x10c58 */

ulong fcn.00010c58(void)

{
    ulong uVar1;
    
    if (*(*0x112f0 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (**(*0x112f8 + 0x170))(0x200,0x10,0x109dc,0,0x11190,0x11360);
    }
    return uVar1;
}


/* fcn.00010fb0 @ 0x10fb0 */

ulong fcn.00010fb0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x112f8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010f7c @ 0x10f7c */

int64_t fcn.00010f7c(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00010fe0 @ 0x10fe0 */

void fcn.00010fe0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010fb0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010350(arg1_00,arg1);
    }
    return;
}


/* fcn.00010350 @ 0x10350 */

int64_t fcn.00010350(int64_t arg1,int64_t arg2)

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


/* fcn.00010310 @ 0x10310 */

int64_t fcn.00010310(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010ef0 @ 0x10ef0 */

int64_t fcn.00010ef0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x11310 + 0x18))(*0x11310,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00010fe0(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x11310 + 0x18))(*0x11310,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x112f8 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00010a68 @ 0x10a68 */

int64_t fcn.00010a68(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x11300 + 0x48))(L"PlatformLang",0x11180,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00010fb0();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x11300 + 0x48))(L"PlatformLang",0x11180,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x112f8 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00010b24 @ 0x10b24 */

char * fcn.00010b24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
code_r0x00010b74:
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
                if (uVar4 < 4) goto code_r0x00010b74;
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
                    goto code_r0x00010c0f;
                }
            }
            else {
code_r0x00010c0f:
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
                            if (uVar4 <= arg3_00) goto code_r0x00010bdc;
                        }
                        else {
code_r0x00010bdc:
                            iVar3 = fcn.00010f7c(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.00010fe0(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = fcn.00010310(arg1_00,pcVar5,arg3_00);
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
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x00010c14;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x00010c0f;
                }
            }
code_r0x00010c14:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


