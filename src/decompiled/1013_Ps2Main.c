// decompiled by r2ghidra: 1013_Ps2Main.pe32
// functions: 47

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
    
    *0x14968 = *(arg1 + 0x60);
    *0x14960 = arg1;
    fcn.00013ec8();
    puVar4 = fcn.00013ec8();
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
            if ((*0x145e8 == *(puVar4 + 4)) && (*0x145f0 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010444 @ 0x10444 */

int64_t fcn.00010444(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong noname_2;
    
    if (*0x149b0 == 0) {
        *0x14980 = *(arg2 + 0x60);
        *0x14978 = *(arg2 + 0x58);
        *0x149b0 = arg2;
    }
    *0x14448 = 0;
    noname_2 = 0x14420;
    uVar3 = 0x14448;
    *0x14440 = arg1;
    *0x14880 = arg2;
    iVar2 = (**(*(arg2 + 0x60) + 0x148))(0x14448,0x14400,0x14420,0x14350,0x145c8,0);
    if (-1 < iVar2) {
        *0x14b10 = 0;
        cVar1 = in(100);
        if (cVar1 != -1) {
            uVar3 = 0x14380;
            fcn.000140a0(0x14380,0x10c8c,noname_2,0x14b00);
        }
        if ((*0x148c8 != '\0') && (cVar1 = in(100), cVar1 != -1)) {
            fcn.000109b8(CONCAT71(uVar3 >> 8,0x65));
            fcn.00012be4();
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00013ec8 @ 0x13ec8 */

int64_t fcn.00013ec8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14970 == 0) {
        *0x14970 = 0;
        if (*(*0x14960 + 0x68) != 0) {
            piVar2 = *(*0x14960 + 0x70);
            do {
                if ((*0x143f0 == *piVar2) && (*0x143f8 == piVar2[1])) {
                    *0x14970 = (*(*0x14960 + 0x70))[uVar1 * 3 + 2];
                    return *0x14970;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14960 + 0x68));
        }
    }
    return *0x14970;
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


/* fcn.000140a0 @ 0x140a0 */

void fcn.000140a0(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x14980 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x14980 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.000109b8 @ 0x109b8 */

void fcn.000109b8(int64_t arg1)

{
    uint8_t uVar1;
    unkint7 extraout_RAX;
    ulong uVar2;
    
    uVar2 = 5000;
    fcn.000109f0(5000);
    if (-1 < extraout_RAX) {
        fcn.0001095c(CONCAT71(uVar2 >> 8,0x60));
        out(0x60,arg1);
        do {
            uVar1 = in(100);
        } while ((uVar1 & 2) != 0);
    }
    return;
}


/* fcn.00012be4 @ 0x12be4 */

void fcn.00012be4(void)

{
    int64_t iVar1;
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    if (*0x1488d == '\0') {
        iVar1 = (**(*0x14980 + 0x140))(0x14340,0,0x14af8);
        if (-1 < iVar1) {
            iVar1 = (**(*0x14980 + 0x140))(0x143d0,0,0x14a20);
            if (-1 < iVar1) {
                iVar1 = (**(*0x14af8 + 0x20))(*0x14af8,1,auStackX_8);
                if (-1 < iVar1) {
                    iVar1 = (**(*0x14a20 + 0x28))(*0x14a20,auStackX_8[0],0x12a8c);
                    if (-1 < iVar1) {
                        *0x149e0 = 0;
                        *0x1488d = '\x01';
                        (**(*0x14af8 + 0x28))(*0x14af8,1);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000107fc @ 0x107fc */

char * fcn.000107fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcStackX_8;
    
    pcVar2 = (**(*(*0x14880 + 0x60) + 0x118))(arg2,0x143a0,&pcStackX_8,*(arg1 + 0x28),arg2,arg4);
    pcVar3 = NULL;
    if (pcVar2 < 0) {
        if ((pcVar2 != 0x8000000000000014) && (pcVar2 != 0x800000000000000f)) {
            pcVar2 = 0x8000000000000003;
        }
    }
    else {
        pcVar4 = pcVar3;
        if (pcStackX_8 != NULL) {
            while (pcVar2 = pcStackX_8, *pcVar2 != '\x7f') {
                pcVar4 = pcVar2;
                pcStackX_8 = pcVar2 + pcVar2[3] * 0x100 + pcVar2[2];
            }
        }
        cVar1 = *pcVar4;
        *arg3 = pcVar4;
        if ((cVar1 != '\x02') || (pcVar2 = pcVar3, pcVar4[1] != '\x01')) {
            pcVar2 = 0x8000000000000003;
        }
        if (arg4 != 2) {
            (**(*(*0x14880 + 0x60) + 0x120))(arg2,0x143a0,*(arg1 + 0x28),arg2);
        }
    }
    return pcVar2;
}


/* fcn.000107b4 @ 0x107b4 */

int64_t fcn.000107b4(ulong noname_0,uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    unkuint7 Var2;
    uint32_t uVar3;
    
    puVar1 = 0x14450;
    uVar3 = *0x14450;
    while( true ) {
        Var2 = puVar1 >> 8;
        if (uVar3 == 0) {
            return Var2 << 8;
        }
        if (((uVar3 == arg1) && (puVar1[1] == arg2)) &&
           (((puVar1[2] == '\x01' && (*0x148c9 != '\0')) || (puVar1[2] == '\x02')))) break;
        puVar1 = puVar1 + 10;
        uVar3 = *puVar1;
    }
    if (arg3 != 0) {
        *arg3 = puVar1;
    }
    return CONCAT71(Var2,1);
}


/* fcn.00013fbc @ 0x13fbc */

int64_t fcn.00013fbc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x14988 == '\0') {
        iVar1 = fcn.00013f34();
        if (-1 < iVar1) {
            iVar1 = (***0x149a0)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x14990 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x14990)(*0x14990,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.0001095c @ 0x1095c */

void fcn.0001095c(int64_t arg1)

{
    uint8_t uVar1;
    unkint7 extraout_RAX;
    
    fcn.000109f0(5000);
    if (-1 < extraout_RAX) {
        out(100,arg1);
        do {
            uVar1 = in(100);
        } while ((uVar1 & 2) != 0);
    }
    return;
}


/* fcn.00010a44 @ 0x10a44 */

uint8_t fcn.00010a44(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    int iVar3;
    
    iVar3 = 0x50;
    while( true ) {
        uVar1 = in(100);
        if ((uVar1 & 0x21) == 1) {
            uVar2 = in(0x60);
            *arg1 = uVar2;
            return uVar1 >> 6 & 1;
        }
        if ((uVar1 & 0x21) == 0x21) break;
        (**(*(*0x14880 + 0x60) + 0xf8))(500);
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
            return 1;
        }
    }
    return 1;
}


/* fcn.000109f0 @ 0x109f0 */

ulong fcn.000109f0(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg1 != 0) {
        do {
            uVar1 = in(100);
            if ((uVar1 & 2) == 0) {
                return 0;
            }
            (**(*(*0x14880 + 0x60) + 0xf8))(1000);
            uVar2 = uVar2 + 1;
        } while (uVar2 < (arg1 & 0xffffffffU));
    }
    return 0x8000000000000012;
}


/* fcn.00010988 @ 0x10988 */

void fcn.00010988(int64_t arg1)

{
    uint8_t uVar1;
    unkint7 extraout_RAX;
    
    fcn.000109f0(5000);
    if (-1 < extraout_RAX) {
        out(0x60,arg1);
        do {
            uVar1 = in(100);
        } while ((uVar1 & 2) != 0);
    }
    return;
}


/* fcn.000133c8 @ 0x133c8 */

ulong fcn.000133c8(uint32_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t *arg1_00;
    int64_t iVar5;
    char cVar6;
    char cVar7;
    uint32_t auStackX_8 [2];
    char acStackX_10 [8];
    uint32_t var_20h;
    uint32_t var_28h;
    uint32_t var_30h;
    
    auStackX_8[0]._0_1_ = '\0';
    cVar7 = -0x38;
    if (((arg1 == '\0') && (*0x148cd == '\0')) || (*0x1495f != '\0')) {
        *0x1488a = 1;
        uVar4 = 0;
        *0x14938 = 1;
    }
    else {
        *0x148cf = 1;
        fcn.00010aac();
        fcn.00013fbc(1,0x1020001);
        cVar6 = '\x03';
code_r0x00013414:
        do {
            uVar1 = in(100);
            if ((uVar1 & 1) != 0) {
                in(0x60);
                (**(*0x14980 + 0xf8))(10000,0x60);
                cVar7 = cVar7 + -1;
                if (cVar7 != '\0') goto code_r0x00013414;
            }
            uVar4 = 0;
            fcn.00013fbc(1,0x1021000);
            iVar3 = fcn.00013070(CONCAT71(uVar4 >> 8,0xff),auStackX_8);
            if (iVar3 == 0) {
                cVar2 = fcn.00013008(acStackX_10);
                if (cVar2 == '\0') {
                    arg1_00 = &var_20h;
                    cVar2 = fcn.00013008(arg1_00);
                    if (((cVar2 == '\0') && (acStackX_10[0] == -0x56)) && (var_20h == '\0')) {
                        iVar5 = CONCAT71(arg1_00 >> 8,0xf3);
                        iVar3 = fcn.00013070(iVar5,auStackX_8);
                        if (-1 < iVar3) {
                            iVar5 = CONCAT71(iVar5 >> 8,200);
                            iVar3 = fcn.00013070(iVar5,auStackX_8);
                            if (-1 < iVar3) {
                                iVar5 = CONCAT71(iVar5 >> 8,0xf3);
                                iVar3 = fcn.00013070(iVar5,auStackX_8);
                                if (-1 < iVar3) {
                                    iVar5 = CONCAT71(iVar5 >> 8,100);
                                    iVar3 = fcn.00013070(iVar5,auStackX_8);
                                    if (-1 < iVar3) {
                                        iVar5 = CONCAT71(iVar5 >> 8,0xf3);
                                        iVar3 = fcn.00013070(iVar5,auStackX_8);
                                        if (-1 < iVar3) {
                                            iVar5 = CONCAT71(iVar5 >> 8,0x50);
                                            iVar3 = fcn.00013070(iVar5,auStackX_8);
                                            if (-1 < iVar3) {
                                                fcn.00013070(CONCAT71(iVar5 >> 8,0xf2),auStackX_8);
                                                fcn.00013008(auStackX_8);
                                                if (auStackX_8[0] == '\x03') {
                                                    *0x145e0 = 4;
                                                }
                                                uVar4 = 0;
                                                iVar3 = fcn.00013070(0xf3,auStackX_8);
                                                if (-1 < iVar3) {
                                                    iVar5 = CONCAT71(uVar4 >> 8,100);
                                                    iVar3 = fcn.00013070(iVar5,auStackX_8);
                                                    if (-1 < iVar3) {
                                                        iVar5 = CONCAT71(iVar5 >> 8,0xe8);
                                                        iVar3 = fcn.00013070(iVar5,auStackX_8);
                                                        if (-1 < iVar3) {
                                                            iVar5 = CONCAT71(iVar5 >> 8,2);
                                                            iVar3 = fcn.00013070(iVar5,auStackX_8);
                                                            if (-1 < iVar3) {
                                                                fcn.00013070(CONCAT71(iVar5 >> 8,0xf4),auStackX_8);
                                                                *0x1488a = 1;
                                                                fcn.00010b30();
                                                                uVar4 = 0;
                                                                *0x14938 = 1;
                                                                *0x14939 = 1;
                                                                *0x1495f = '\x01';
                                                                goto code_r0x00013590;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            cVar6 = cVar6 + -1;
        } while (cVar6 != '\0');
        *0x1495f = '\x01';
        fcn.00010ae4();
        uVar4 = 0x8000000000000007;
code_r0x00013590:
        *0x148cf = 0;
    }
    return uVar4;
}


/* fcn.00010918 @ 0x10918 */

uint64_t fcn.00010918(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    fcn.00010988(arg1);
    cVar1 = fcn.00010a44(arg2);
    if (cVar1 == '\0') {
        uVar2 = -(*arg2 != -6) & 0x8000000000000007;
    }
    else {
        uVar2 = 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.00010aac @ 0x10aac */

void fcn.00010aac(void)

{
    uint8_t uVar1;
    unkint7 extraout_RAX;
    
    if (*0x14560 != '\0') {
        fcn.000109f0(5000);
        if (-1 < extraout_RAX) {
            out(100,0xad);
            do {
                uVar1 = in(100);
            } while ((uVar1 & 2) != 0);
            *0x14560 = '\0';
        }
    }
    return;
}


/* fcn.000126d0 @ 0x126d0 */

void fcn.000126d0(void)

{
    int iVar1;
    
    if (*0x14889 == '\0') {
        *0x14889 = 1;
        if (((*0x148cb == '\0') || (*0x1488d == '\0')) || (*0x14560 == '\0')) {
            if ((((*0x14ac0 & 7) != *0x14af1) && (*0x14acd == '\0')) && (*0x14af2 == '\0')) {
                fcn.00010aac();
                fcn.00010e74();
                fcn.00012ca0();
                fcn.00010ae4();
            }
        }
        else {
            if ((*0x14ac0 & 7) != *0x14af1) {
                *0x14af3 = 0;
                fcn.00010e74();
                if (*0x14af2 == '\x01') {
                    iVar1 = 1000;
                    do {
                        if (*0x14af2 == '\0') break;
                        (**(*(*0x14880 + 0x60) + 0xf8))(1000);
                        iVar1 = iVar1 + -1;
                    } while (iVar1 != 0);
                }
            }
            *0x14af2 = '\0';
        }
        *0x14889 = '\0';
    }
    return;
}


/* fcn.00010e74 @ 0x10e74 */

void fcn.00010e74(ulong param_1)

{
    uint8_t uVar1;
    
    if ((((*0x14ac0 & 7) != *0x14af1) && (*0x14af2 == '\0')) && (uVar1 = in(100), (uVar1 & 1) == 0)) {
        *0x14af2 = '\x01';
        fcn.00010988(CONCAT71(param_1 >> 8,0xed));
    }
    return;
}


/* fcn.00012ca0 @ 0x12ca0 */

void fcn.00012ca0(void)

{
    uint8_t uVar1;
    int iVar2;
    
    if (*0x14af2 == '\x01') {
        fcn.00010aac();
        iVar2 = 1000;
        do {
            while (uVar1 = in(100), (uVar1 & 1) != 0) {
                if ((uVar1 & 0x20) == 0) {
                    (**0x14558)();
                }
                else {
                    (**0x14540)(0);
                }
            }
            if (*0x14af2 == '\0') {
                return;
            }
            (**(*(*0x14880 + 0x60) + 0xf8))();
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        *0x14af2 = '\0';
        fcn.00010ae4();
    }
    return;
}


/* fcn.00010ae4 @ 0x10ae4 */

int64_t fcn.00010ae4(void)

{
    int64_t iVar1;
    
    if (*0x14560 == '\0') {
        iVar1 = fcn.000109f0(5000);
        if (-1 < iVar1) {
            out(100,0xae);
            iVar1 = fcn.000109f0(300);
            *0x14560 = -1 < iVar1;
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010b68 @ 0x10b68 */

ulong fcn.00010b68(void)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t arg1;
    uint16_t uVar5;
    char acStackX_8 [8];
    
    if (*0x1488c != '\0') {
        return 0;
    }
    *0x1488c = 1;
    fcn.000133c8(0);
    if (*0x148ca == '\0') {
        *0x14560 = 1;
    }
    else {
        uVar4 = 0;
        fcn.00013fbc(1,0x1010003);
        arg1 = CONCAT71(uVar4 >> 8,0x6d);
        fcn.000109b8(arg1);
        in(0x60);
        uVar5 = 0;
        do {
            arg1 = CONCAT71(arg1 >> 8,0xf5);
            iVar3 = fcn.00010918(arg1,acStackX_8);
            if (iVar3 == 0) break;
            uVar1 = in(100);
            if ((uVar1 & 0x40) != 0) {
                arg1 = 6000;
                (**(*(*0x14880 + 0x60) + 0xf8))(6000);
                in(0x60);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
        fcn.00010aac();
        in(0x60);
        uVar5 = 0;
        while( true ) {
            arg1 = CONCAT71(arg1 >> 8,0xff);
            iVar3 = fcn.00010918(arg1,acStackX_8);
            if (iVar3 == 0) break;
            in(0x60);
            uVar5 = uVar5 + 1;
            if (2 < uVar5) {
                return 0;
            }
        }
        do {
            uVar1 = in(100);
        } while ((uVar1 & 1) == 0);
        cVar2 = in(0x60);
        if (cVar2 != -0x56) {
            acStackX_8[0] = -2;
            fcn.0001095c(CONCAT71(arg1 >> 8,0xab));
            fcn.00010a44(acStackX_8);
            if (acStackX_8[0] == '\0') {
                return 0;
            }
            *0x14888 = 0;
            return 0;
        }
    }
    *0x14888 = 1;
    return 0;
}


/* fcn.00014060 @ 0x14060 */

int64_t fcn.00014060(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00014034(arg1);
    if (iVar1 != 0) {
        (**(*0x14980 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.00014034 @ 0x14034 */

ulong fcn.00014034(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x14980 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00010f8c @ 0x10f8c */

void fcn.00010f8c(void)

{
    int64_t iVar1;
    
    iVar1 = (**(*0x14980 + 0x140))(0x14390,0,0x148a0);
    if (-1 < iVar1) {
        *0x1488f = 1;
    }
    return;
}


/* fcn.00011e4c @ 0x11e4c */

void fcn.00011e4c(ulong noname_0,int64_t arg1)

{
    uchar uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    uVar1 = arg1;
    uVar4 = 0;
    if (*0x14890 != 0) {
        piVar2 = 0x14890;
        do {
            arg1 = CONCAT71(arg1 >> 8,uVar1);
            noname_0 = 0x14a40;
            iVar3 = (**piVar2)(0x14a40,arg1);
            if (-1 < iVar3) goto code_r0x00011ea3;
            uVar4 = uVar4 + 1;
            piVar2 = uVar4 * 8 + 0x14890;
        } while (*piVar2 != 0);
    }
    fcn.00011f0c(noname_0,CONCAT71(arg1 >> 8,uVar1));
code_r0x00011ea3:
    if (*0x14acc != '\0') {
        if ((((*0x14ab8 != 0) || (*0x14aba != 0)) || (*0x14acd != '\0')) ||
           (((*0x14abc & 0x7fffffff) == 0 || ((*0x14ac0 & 0x40) != 0)))) {
            fcn.00012838(0x14a40,0x14ab8);
        }
        *0x14acc = '\0';
    }
    return;
}


/* fcn.00010d30 @ 0x10d30 */

void fcn.00010d30(int64_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    
    uVar3 = (**(*0x14968 + 0x18))(0x10);
    uVar4 = *0x14ac0 & 7;
    if (*0x148cb == '\0') {
        if (*0x14889 == '\0') {
            *0x14889 = 1;
            uVar2 = in(100);
            uVar1 = uVar2 & 1;
            while (uVar1 != 0) {
                if ((uVar2 & 0x20) != 0) {
                    (**0x14540)(arg1);
                    goto code_r0x00010e42;
                }
                if ((uVar2 & 1) != 0) {
                    *0x1488e = 1;
                    (**0x14558)(arg1);
                    *0x1488e = 0;
                    if (*0x14ad0 != *0x14ad8) {
                        (**(*(*0x14880 + 0x60) + 0xf8))(10000);
                        break;
                    }
                }
                (**(*(*0x14880 + 0x60) + 0xf8))(10000);
                uVar2 = in(100);
                uVar1 = uVar2 & 0x21;
            }
            if (((uVar4 != *0x14af1) && (*0x14af2 == '\0')) && (*0x14acd == '\0')) {
                fcn.00010aac();
                fcn.00010e74();
            }
            fcn.00012ca0();
            fcn.00010ae4();
code_r0x00010e42:
            *0x14889 = '\0';
        }
    }
    else if ((uVar4 != *0x14af1) && (*0x14af2 == '\0')) {
        fcn.000126d0();
    }
    //WARNING: Could not recover jumptable at 0x00010e62. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14968 + 0x20))(uVar3);
    return;
}


/* fcn.0001279c @ 0x1279c */

ulong fcn.0001279c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (*0x14ad0 == *0x14ad8) {
        (**(*0x14980 + 0x168))(arg1,arg2 & 0xff,0);
        if (4 < arg2) {
            *(arg1 + 4) = *0x14abc | 0x80000000;
            *(arg1 + 8) = *0x14ac0 | 0x80;
        }
        uVar1 = 0x8000000000000006;
    }
    else {
        (**(*0x14980 + 0x160))(arg1,*0x14ad0,arg2 & 0xff);
        *0x14ad0 = *0x14ad0 + 0x14;
        if (*0x14ae8 <= *0x14ad0) {
            *0x14ad0 = *0x14ae0;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014164 @ 0x14164 */

int64_t fcn.00014164(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1 = arg1 & 7;
    piVar2 = piVar1;
    if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
        iVar3 = 8 - arg1;
        for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 1;
            iVar3 = iVar3 + -1;
        }
    }
    for (; (piVar2 <= piVar1 + 4U && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
        arg2 = arg2 + 8;
    }
    while( true ) {
        if (piVar1 + 0xcU <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.00011f0c @ 0x11f0c */

//WARNING: Possible PIC construction at 0x00012056: Changing call to branch

void fcn.00011f0c(ulong noname_0,uint32_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    bool bVar3;
    ushort uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint8_t *puVar7;
    uint8_t uVar8;
    uint in_register_00000014;
    uint64_t unaff_RBX;
    uint64_t uVar9;
    ulong unaff_RBP;
    ulong unaff_RSI;
    ulong unaff_RDI;
    uint8_t uVar10;
    ulong unaff_R14;
    int32_t var_16h;
    ulong auStack_30 [5];
    
    uVar9 = 0;
    uVar8 = arg1;
    if (*0x14acd == '\0') {
        if ((arg1 & 0xff) == 0xe0) {
code_r0x00011f47:
            *0x14acc = CONCAT11(1,*0x14acc);
            return;
        }
        if ((arg1 & 0xff) == 0xe1) {
            *0x14acc = CONCAT11(2,*0x14acc);
            return;
        }
        bVar3 = false;
        uVar9 = unaff_RBX;
    }
    else {
        if (uVar8 == 0xe0) goto code_r0x00011f47;
        if (*0x14acd == '\x02') {
            if (uVar8 != *(*0x14af0 + 0x147e4)) {
code_r0x0001205b:
                *0x14acc = *0x14acc & 0xff;
                *0x14af0 = 0;
                return;
            }
            if (*0x14af0 == 2) {
                *0x14ab8 = 0x48;
                *0x14ac4 = 0x68;
                *0x14ac9 = 0;
                *0x14acc = 1;
                *0x14af0 = 0;
                return;
            }
            if (*0x14af0 != 4) {
                *0x14af0 = *0x14af0 + 1;
                return;
            }
code_r0x00012053:
            bVar3 = false;
        }
        else {
            if (*0x14acd != '\x01') goto code_r0x00012053;
            uVar5 = uVar9;
            do {
                if ((uVar8 & 0x7f) == *(uVar5 + 0x147e0)) goto code_r0x0001205b;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 3);
            if ((*0x14ac0 & 0x82) != 0) {
                if (uVar8 == 0x2a) {
                    *0x148a8 = '\x01';
                }
                if (uVar8 == 0xaa) {
                    if (*0x148a8 == '\0') {
                        *0x14abc = *0x14abc & 0xfffffffd;
                    }
                    *0x148a8 = '\0';
                }
            }
            if (((arg1 - 0x2a & 0x7f) == 0) ||
               ((uVar8 < '\0' &&
                (((0x26 < arg1 + 0x49 || ((0x7000000003U >> (arg1 + 0x49 & 0x3f) & 1) == 0)) && (uVar8 != 0x9d))))))
            goto code_r0x0001205b;
            bVar3 = true;
        }
        *0x20 = &stack0xffffffffffffffd0;
        auStack_30[0] = 0x1205b;
    }
    *(*0x20 + 8) = uVar9;
    *(*0x20 + 0x10) = unaff_RBP;
    *(*0x20 + 0x18) = unaff_RSI;
    *(*0x20 + 0x20) = unaff_RDI;
    *(*0x20 + -8) = unaff_R14;
    *0x14ab8 = 0;
    uVar9 = arg1 & 0xff;
    *0x14ac4 = 0;
    *0x14ac9 = uVar8;
    if (uVar8 == 1) {
        *0x14ac4 = 0x59;
        *0x14ab8 = 0x17;
        goto code_r0x000120c2;
    }
    uVar2 = uVar9;
    if ((*0x1488f != '\0') && ((*0x496 & 3) != 0)) {
        *0x496 = *0x496 & 0xfc;
        if ((uVar2 + 6 & 0xfa) != 0) {
            *0x14ab8 = 0;
            *0x14ac4 = 0;
            return;
        }
        if (uVar8 == 0xfb) {
            *0x14ab8 = 0;
            *0x14ac4 = 0;
            return;
        }
    }
    if (uVar2 < 0xab) {
        if (uVar2 == 0xaa) {
            if (!bVar3) {
                *0x14abc = *0x14abc & 0xfffffffd;
                *0x14ab8 = 0;
                *0x14ac4 = 0;
                return;
            }
            *0x14ab8 = 0;
            *0x14ac4 = 0;
            return;
        }
        if (uVar2 < 0x46) {
            if (uVar2 == 0x45) {
                if (*0x148a9 == '\0') {
                    *0x14ac0 = *0x14ac0 ^ 2;
                    *0x148a9 = '\x01';
                }
                *0x14ac4 = 0x55;
code_r0x00012172:
                *0x14acc = CONCAT11(*0x14acd,1);
            }
            else {
                if (uVar2 == 0x1d) {
                    *0x14acc = CONCAT11(*0x14acd,1);
                    if (*0x14acd != '\x01') {
                        *0x14abc = *0x14abc | 8;
                        *0x14ab8 = 0;
                        *0x14ac4 = 0;
                        return;
                    }
                    *0x14abc = *0x14abc | 4;
                    *0x14ab8 = 0;
                    *0x14ac4 = 0;
                    return;
                }
                if (uVar2 == 0x2a) {
                    *0x14abc = *0x14abc | 2;
                    goto code_r0x000120c2;
                }
                if (uVar2 == 0x36) {
                    *0x14abc = *0x14abc | 1;
                    goto code_r0x000120c2;
                }
                if (uVar2 == 0x37) {
                    if (*0x14acd == '\x01') {
                        *0x14abc = *0x14abc | 0x200;
                        *0x14ab8 = 0;
                        *0x14ac4 = 0;
                        return;
                    }
                }
                else {
                    if (uVar2 == 0x38) {
                        *0x14acc = CONCAT11(*0x14acd,1);
                        if (*0x14acd != '\x01') {
                            *0x14abc = *0x14abc | 0x20;
                            *0x14ab8 = 0;
                            *0x14ac4 = 0;
                            return;
                        }
                        *0x14abc = *0x14abc | 0x10;
                        *0x14ab8 = 0;
                        *0x14ac4 = 0;
                        return;
                    }
                    if (uVar2 == 0x3a) {
                        if (*0x148b8 == '\0') {
                            *0x14ac0 = *0x14ac0 ^ 4;
                            *0x148b8 = '\x01';
                        }
                        *0x14ac4 = 0x1f;
                        goto code_r0x00012172;
                    }
                }
            }
        }
        else if (uVar2 == 0x46) {
            if (*0x14acd != '\x01') {
                if (*0x14898 == '\0') {
                    *0x14ac0 = *0x14ac0 ^ 1;
                    *0x14898 = '\x01';
                }
                *0x14ac4 = 0x67;
                goto code_r0x00012172;
            }
        }
        else if (uVar2 == 0x5b) {
            if (*0x14acd == '\x01') {
                *0x14abc = *0x14abc | 0x80;
                goto code_r0x000120c2;
            }
        }
        else if (uVar2 == 0x5c) {
            if (*0x14acd == '\x01') {
                *0x14abc = *0x14abc | 0x40;
                goto code_r0x000120c2;
            }
        }
        else if (uVar2 == 0x5d) {
            if (*0x14acd == '\x01') {
                *0x14abc = *0x14abc | 0x100;
                goto code_r0x000120c2;
            }
        }
        else if (uVar2 == 0x9d) {
            if (*0x14acd != '\x01') {
                *0x14abc = *0x14abc & 0xfffffff7;
                *0x14ab8 = 0;
                *0x14ac4 = 0;
                return;
            }
            *0x14abc = *0x14abc & 0xfffffffb;
            *0x14ab8 = 0;
            *0x14ac4 = 0;
            return;
        }
    }
    else if (uVar2 < 0xdc) {
        if (uVar2 == 0xdb) {
            if (*0x14acd == '\x01') {
                *0x14abc = *0x14abc & 0xffffff7f;
                *0x14ab8 = 0;
                *0x14ac4 = 0;
                return;
            }
        }
        else {
            if (uVar2 == 0xb6) {
                *0x14abc = *0x14abc & 0xfffffffe;
                *0x14ab8 = 0;
                *0x14ac4 = 0;
                return;
            }
            if (uVar2 == 0xb7) {
                if (*0x14acd == '\x01') {
                    *0x14abc = *0x14abc & 0xfffffdff;
                    *0x14ab8 = 0;
                    *0x14ac4 = 0;
                    return;
                }
            }
            else {
                if (uVar2 == 0xb8) {
                    if (*0x14acd != '\x01') {
                        *0x14abc = *0x14abc & 0xffffffdf;
                        *0x14ab8 = 0;
                        *0x14ac4 = 0;
                        return;
                    }
                    *0x14abc = *0x14abc & 0xffffffef;
                    *0x14ab8 = 0;
                    *0x14ac4 = 0;
                    return;
                }
                if (uVar2 == 0xba) {
                    *0x148b8 = '\0';
                }
                else if (uVar2 == 0xc5) {
                    *0x148a9 = '\0';
                }
                else if ((uVar2 == 0xc6) && (*0x14acd != '\x01')) {
                    *0x14898 = '\0';
                }
            }
        }
    }
    else if (uVar2 == 0xdc) {
        if (*0x14acd == '\x01') {
            *0x14abc = *0x14abc & 0xffffffbf;
            *0x14ab8 = 0;
            *0x14ac4 = 0;
            return;
        }
    }
    else if (uVar2 == 0xdd) {
        if (*0x14acd == '\x01') {
            *0x14abc = *0x14abc & 0xfffffeff;
            *0x14ab8 = 0;
            *0x14ac4 = 0;
            return;
        }
    }
    else {
        uVar5 = uVar2 - 0xfa;
        if (uVar2 - 0xfa != 0) {
            uVar6 = uVar2 - 0xfe;
            uVar5 = uVar6;
            if ((uVar6 != 0) && (uVar6 != 1)) goto code_r0x00012179;
        }
        *(*0x20 + -0x30) = 0x1244c;
        fcn.00010eb0(uVar5,CONCAT71(CONCAT44(in_register_00000014,arg1) >> 8,uVar8));
    }
code_r0x00012179:
    if (uVar8 == 0x2b) {
        if (*0x14570 != '\0') {
            *(*0x20 + -0x30) = 0x12190;
            fcn.00010fcc();
        }
        if (*0x148b9 != '\0') {
            uVar8 = 0;
            if (*0x14acd != '\x01') {
                uVar8 = *0x14abc & 3;
            }
            uVar4 = 0x7d;
            if (uVar8 == 0) {
                uVar4 = 0x5d;
            }
            *0x14ab8 = CONCAT22(uVar4,*0x14ab8);
            *0x14ac4 = 0x2b;
            goto code_r0x000120c2;
        }
code_r0x000124b6:
        if ((*0x14acd == '\x01') && (uVar8 == 0x37)) {
code_r0x0001254b:
            if (uVar8 == 0x56) {
                uVar8 = 0;
                if (*0x14acd != '\x01') {
                    uVar8 = *0x14abc & 3;
                }
                uVar4 = 0x7c;
            }
            else {
                if (uVar8 == 0x7d) {
                    uVar4 = 0x7c;
                    if ((*0x14abc & 3) == 0) {
                        uVar4 = 0xa5;
                    }
                    *0x14ab8 = CONCAT22(uVar4,*0x14ab8);
                    *0x14ac4 = 0x3d;
                    goto code_r0x000120c2;
                }
                if (uVar8 != 0x73) {
                    if ((((*0x14acd == '\x01') || (0xc < uVar8 + 0xb9)) || (bVar3)) ||
                       (((((*0x14ac0 & 2) == 0 || ((*0x14abc & 3) != 0)) &&
                         (((*0x14ac0 & 2) != 0 || ((*0x14abc & 3) == 0)))) && ((uVar2 - 0x4a & 0xfb) != 0)))) {
                        if (str.__vZ__f__r_[0] != -1) {
                            puVar7 = str.__vZ__f__r_ + 2;
                            uVar10 = str.__vZ__f__r_[0];
                            do {
                                if (uVar8 == uVar10) {
                                    *0x14ab8 = CONCAT22(*0x14aba,puVar7[-1]);
                                    *0x14ac4 = *puVar7;
                                    *0x14acc = CONCAT11(*0x14acd,1);
                                }
                                uVar10 = puVar7[1];
                                puVar7 = puVar7 + 3;
                            } while (uVar10 != 0xff);
                            return;
                        }
                        return;
                    }
                    *0x14acc = CONCAT11(*0x14acd,1);
                    *0x14ab8 = CONCAT12("789-456+1230."[uVar2 - 0x47],*0x14ab8);
                    if ((*0x14abc & 0xc) == 0 || (*0x14abc & 0x30) == 0) {
                        *0x14ac4 = "ABCX,-./\x1c\x1d\x1e\v\f"[uVar2 - 0x47];
                        return;
                    }
                    if (uVar8 != 0x53) {
                        *0x14ac4 = "ABCX,-./\x1c\x1d\x1e\v\f"[uVar2 - 0x47];
                        return;
                    }
                    *0x14ab8 = 8;
                    *0x14ac4 = 0x3e;
                    goto code_r0x000120c2;
                }
                uVar8 = *0x14abc & 3;
                uVar4 = 0x5f;
            }
            if (uVar8 == 0) {
                uVar4 = 0x5c;
            }
            *0x14ab8 = CONCAT22(uVar4,*0x14ab8);
            *0x14ac4 = 0xf;
            goto code_r0x000120c2;
        }
    }
    else {
        if (uVar8 != 0x35) {
            if (uVar8 < 0x3a) goto code_r0x000124b6;
            goto code_r0x0001254b;
        }
        if (*0x14acd == '\x01') {
            *0x14ac4 = 0x56;
            *0x14ab8 = CONCAT22(0x2f,*0x14ab8);
            goto code_r0x000120c2;
        }
    }
    uVar10 = *0x14abc & 3;
    if ((((uVar8 - 0x10 < 10) || (uVar8 - 0x1e < 9)) || (uVar8 - 0x2c < 7)) && ((*0x14ac0 & 4) != 0)) {
        uVar10 = (*0x14abc & 3) == 0;
    }
    if (uVar10 == 0) {
        cVar1 = *(uVar9 + 0x14780);
    }
    else {
        cVar1 = *(uVar9 + 0x147f0);
    }
    *0x14ac4 = *(uVar9 + 0x14740);
    *0x14ab8 = CONCAT12(cVar1,*0x14ab8);
    if (cVar1 == '\0') {
        return;
    }
code_r0x000120c2:
    *0x14acc = CONCAT11(*0x14acd,1);
    return;
}


/* fcn.00012838 @ 0x12838 */

//WARNING: Variable defined which should be unmapped: var_1eh

ulong fcn.00012838(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    bool bVar7;
    int64_t iVar8;
    ulong *puVar9;
    ulong *puVar10;
    int64_t iVar11;
    uint16_t uVar12;
    uint64_t uVar13;
    uint32_t var_38h;
    int64_t var_40h;
    int16_t iStack_48;
    ulong uStack_46;
    ulong uStack_3e;
    ushort uStack_36;
    int64_t var_26h;
    int64_t var_1eh;
    int16_t var_16h;
    
    iVar1 = *(arg1 + 0x98);
    uStack_46 = 0;
    uStack_3e = 0;
    uStack_36 = 0;
    iStack_48 = 0;
    (**(*0x14968 + 0x160))(&iStack_48,arg2,0x14);
    uStack_3e._0_7_ = CONCAT16(1,uStack_3e);
    uStack_36 = CONCAT11(uStack_36._1_1_,1);
    if ((*0x148b0 == NULL) && (iVar11 = (**(*0x14980 + 0x140))(0x14410,0,0x148b0), iVar11 < 0)) {
        iVar11 = -0x7ffffffffffffff2;
    }
    else {
        iVar11 = (***0x148b0)(*0x148b0,&iStack_48);
    }
    uVar12 = uStack_46;
    iVar8 = *0x14980;
    puVar10 = *0x14a08;
    if (uStack_46 < 0x21) {
        uVar13 = uStack_46;
        if ((0x100002301U >> (uStack_46 & 0x3f) & 1) != 0) goto joined_r0x00012906;
    }
    uStack_46 = uStack_46 & 0xfffffffffffcffff;
    uVar13 = uStack_46;
joined_r0x00012906:
    do {
        puVar9 = puVar10;
        *0x14980 = iVar8;
        uStack_46 = uVar13;
        if (puVar9 == NULL) {
            if (*(arg1 + 0x98) != *(arg1 + 0x90)) {
                uVar13 = iVar1 + 0x14;
                if (*(arg1 + 0xa8) < uVar13) {
                    uVar13 = *(arg1 + 0xa0);
                }
                if (*(arg1 + 0x90) == uVar13) {
                    return 4;
                }
            }
            (**(iVar8 + 0x160))(*(arg1 + 0x98),&iStack_48,0x14);
            *(arg1 + 0x98) = *(arg1 + 0x98) + 0x14;
            if (*(arg1 + 0xa8) <= *(arg1 + 0x98)) {
                *(arg1 + 0x98) = *(arg1 + 0xa0);
            }
            if (iVar11 == 5) {
                fcn.00012838(arg1,arg2);
            }
            return 0;
        }
        bVar7 = false;
        bVar3 = false;
        bVar5 = true;
        if (*(puVar9 + 2) == 0) {
            if (((*(puVar9 + 0x12) == 0) && (*(puVar9 + 0x14) == 0)) && (bVar3 = false, *(puVar9 + 3) == '\0')) {
                bVar3 = true;
            }
code_r0x00012948:
            bVar4 = bVar5;
        }
        else {
            bVar3 = false;
            bVar4 = bVar7;
            if (*(puVar9 + 2) == iStack_48) goto code_r0x00012948;
        }
        if (*(puVar9 + 0x14) < 0) {
            uStack_46._2_4_ = uVar13 >> 0x10;
            bVar6 = bVar7;
            if (*(puVar9 + 0x14) == uStack_46._2_4_) goto code_r0x00012962;
        }
        else {
code_r0x00012962:
            bVar6 = bVar5;
        }
        if (*(puVar9 + 3) < '\0') {
            uStack_46._6_1_ = uVar13 >> 0x30;
            if (*(puVar9 + 3) == uStack_46._6_1_) goto code_r0x00012971;
        }
        else {
code_r0x00012971:
            bVar7 = bVar5;
        }
        if (((!bVar3) && (((!bVar4 || (*(puVar9 + 0x12) != uVar12)) || ((!bVar6 || (!bVar7)))))) ||
           (*(puVar9 + 5) != '\0')) {
code_r0x000129e8:
            iVar8 = *0x14980;
            puVar10 = *puVar9;
            uVar13 = uStack_46;
        }
        else {
            *(puVar9 + 5) = 1;
            (**(iVar8 + 0x160))(puVar9 + 7,&iStack_48,0xc);
            (**(*0x14980 + 0x68))(puVar9[6]);
            puVar2 = *0x14a08;
            while( true ) {
                uVar12 = uStack_46;
                iVar8 = *0x14980;
                puVar10 = *0x14a08;
                uVar13 = uStack_46;
                if (puVar2 == NULL) break;
                if (puVar2 == puVar9) goto code_r0x000129e8;
                puVar2 = *puVar2;
            }
        }
    } while( true );
}


/* fcn.00010fcc @ 0x10fcc */

void fcn.00010fcc(void)

{
    int64_t iVar1;
    int16_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h_2;
    int32_t var_18h_2;
    int32_t var_14h;
    int64_t var_10h_2;
    uint32_t var_8h;
    
    var_20h = 0;
    var_18h = 0;
    var_20h_2._0_4_ = 0xef9fc172;
    var_10h = 0x17;
    var_20h_2._4_4_ = 0x4693a1b2;
    var_18h_2 = 0x326d27b3;
    var_14h = 0x426041fc;
    iVar1 = (**(*0x14968 + 0x140))(&var_20h_2,0,&var_20h);
    if (-1 < iVar1) {
        iVar1 = (**(*0x14968 + 0x40))(4,var_10h,&var_18h);
        if (-1 < iVar1) {
            iVar1 = (**(var_20h + 0x40))(var_20h,0,&var_10h,var_18h);
            if (iVar1 == -0x7ffffffffffffff2) {
                return;
            }
            if (iVar1 == -0x7ffffffffffffffe) {
                return;
            }
            if (iVar1 == -0x7ffffffffffffffb) {
                if (var_18h != 0) {
                    (**(*0x14980 + 0x48))();
                }
                iVar1 = (**(*0x14968 + 0x40))(4,var_10h,&var_18h);
                if (iVar1 < 0) {
                    return;
                }
                (**(var_20h + 0x40))(var_20h,0,&var_10h,var_18h);
            }
            *0x14570 = 0;
            var_10h_2 = *(var_18h + 2);
            _var_8h = *(var_18h + 10);
            if ((var_10h_2 == 0x42777f6eecd17560) && (_var_8h == 0x40a0dbff4c1b1aa0)) {
                *0x148b9 = 1;
            }
            else {
                *0x148b9 = 0;
            }
        }
        (**(*0x14980 + 0x48))(var_18h);
    }
    return;
}


/* fcn.00010eb0 @ 0x10eb0 */

void fcn.00010eb0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 & 0xff;
    if (uVar1 == 0xfa) {
        if (*0x14af2 == '\x01') {
            *0x14af2 = 2;
            *0x14af1 = *0x14ac0 & 7;
            fcn.00010988(*0x14ac0 & 0xffffffffffffff07);
            if (*0x1488b != '\0') {
                *0x1488b = 0;
                return;
            }
            return;
        }
        if (*0x14af2 == '\x02') {
            *0x14af2 = 0;
            return;
        }
    }
    else if (uVar1 != 0xfe) {
        if (uVar1 == 0xff) {
            *0x14af2 = 0;
            return;
        }
        return;
    }
    if (*0x1488b != '\0') {
        *0x14af2 = 0;
        *0x14af1 = *0x14ac0 & 7;
        *0x1488b = 0;
        return;
    }
    if (1 < *0x14af2 - 1U) {
        *0x14af2 = 0;
        return;
    }
    fcn.00010988(0xf4);
    *0x14af2 = 0;
    *0x1488b = 1;
    fcn.000126d0();
    return;
}


/* fcn.000140f8 @ 0x140f8 */

ulong fcn.000140f8(int64_t arg1)

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
            if (cVar4 != cVar2) goto code_r0x00014160;
        }
        arg1 = arg1 + 1;
        pcVar6 = pcVar6 + 1;
        cVar4 = *arg1;
    }
    in_RAX = CONCAT71(in_RAX >> 8,*pcVar6);
    bVar5 = *arg1 == *pcVar6;
code_r0x00014160:
    return CONCAT71(in_RAX >> 8,bVar5);
}


/* fcn.00013154 @ 0x13154 */

int64_t fcn.00013154(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    int iVar5;
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    *arg1 = 0x148e0;
    iVar5 = 1000;
    fcn.0001423e(0x14920,0x10,0);
    *0x14930 = 0;
    *0x148f8 = fcn.00014060(0x20);
    if (*0x148f8 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if ((*0x148cb != '\0') && (*0x1495e == '\0')) {
        if ((*0x14af8 == 0) && (iVar2 = (**(*0x14980 + 0x140))(0x14340,0,0x14af8), iVar2 < 0)) {
            return iVar2;
        }
        if ((*0x14a20 == 0) && (iVar2 = (**(*0x14980 + 0x140))(0x143d0,0,0x14a20), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x14af8 + 0x20))(*0x14af8,0xc,auStackX_8);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = (**(*0x14a20 + 0x28))(*0x14a20,auStackX_8[0],0x130d4);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = (**(*0x14af8 + 0x28))(*0x14af8,0xc);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = *0x14af8;
        iVar3 = (**(*0x14af8 + 0x28))(*0x14af8,2);
        if (iVar3 < 0) {
            return iVar3;
        }
        fcn.000109b8(CONCAT71(iVar2 >> 8,0x67));
        uVar4 = 5000;
        *0x14954 = 1;
        iVar2 = fcn.000109f0(5000);
        if (iVar2 < 0) {
            return iVar2;
        }
        out(100,0xd4);
        do {
            uVar1 = in(100);
        } while ((uVar1 & 2) != 0);
        iVar2 = CONCAT71(uVar4 >> 8,0xf4);
        fcn.00010988(iVar2);
        do {
            if (*0x1495e != '\0') break;
            iVar2 = 500;
            (**(*(*0x14880 + 0x60) + 0xf8))(500);
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *0x14954 = 0;
        if (*0x1495e == '\0') {
            in(0x60);
            fcn.000109b8(CONCAT71(iVar2 >> 8,0x65));
            (**(*0x14af8 + 0x30))(*0x14af8,0xc);
        }
    }
    **0x148f8 = 4;
    (*0x148f8)[1] = 4;
    (*0x148f8)[2] = 1;
    *(*0x148f8 + 0x19) = 1;
    *(*0x148f8 + 3) = 1;
    *0x148e8 = 0x13874;
    *0x148e0 = 0x135e4;
    return 0;
}


/* fcn.00013008 @ 0x13008 */

uchar fcn.00013008(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    int iVar3;
    
    iVar3 = 2000;
    while( true ) {
        uVar1 = in(100);
        if ((uVar1 & 0x21) == 0x21) {
            uVar2 = in(0x60);
            *arg1 = uVar2;
            if ((uVar1 & 0x40) != 0) {
                uVar2 = in(0x60);
                *arg1 = uVar2;
                return 1;
            }
            return 0;
        }
        if ((uVar1 & 0x21) == 1) break;
        (**(*(*0x14880 + 0x60) + 0xf8))(500);
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
            return 1;
        }
    }
    return 1;
}


/* fcn.00013a28 @ 0x13a28 */

void fcn.00013a28(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uchar uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar2 = in(100);
    if (*(*0x145e0 + 0x14958) == '\x01') {
        *0x14940 = *0x14959;
        if ((*0x14958 & 0x10) == 0) {
            *0x14940 = *0x14959;
        }
        uVar4 = *0x1495a;
        if ((*0x14958 & 0x20) == 0) {
            uVar4 = *0x1495a;
        }
        *0x14944 = -uVar4;
        *0x1494c = *0x14958 & 1;
        *0x1494d = *0x14958 >> 1 & 1;
        if (*0x145e0 == 4) {
            *0x14948 = *0x1495b;
        }
        else {
            *0x14948 = 0;
        }
        *0x14950 = 1;
        *(*0x145e0 + 0x14958) = 0;
    }
    uVar1 = *0x1495d;
    if ((uVar2 & 0x21) == 0x21) {
        uVar3 = in(0x60);
        uVar5 = *0x1495d;
        uVar4 = *0x145e0;
        *(uVar5 + 0x14958) = uVar3;
        if (uVar5 == uVar4 - 1) {
            fcn.00010b30();
            *0x1495d = 0;
            *(*0x145e0 + 0x14958) = 1;
        }
        else {
            *0x1495d = uVar1 + 1;
        }
    }
    return;
}


/* fcn.0001423e @ 0x1423e */

int64_t fcn.0001423e(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00013b14 @ 0x13b14 */

//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.00013b14(ulong param_1,ulong param_2)

{
    bool bVar1;
    uint8_t uVar2;
    uchar uVar3;
    int iVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint8_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    bool bVar15;
    uint8_t auStackX_8 [8];
    int8_t var_30h;
    uchar auStack_48 [32];
    int8_t var_bp_20h;
    
    uVar7 = CONCAT71(param_1 >> 8,*0x148cb);
    bVar1 = false;
    if ((*0x148cb == '\0') || (*0x1495e == '\0')) {
        if ((*0x148d0 != '\0') || (((*0x1488e != '\0' || (*0x148ab != '\0')) || (*0x149b8 != '\0')))) {
            return 0x8000000000000007;
        }
        if (*(*0x145e0 + 0x14958) != '\x01') {
            auStackX_8[0] = 0;
            while (uVar2 = auStackX_8[0], *0x14af2 != '\0') {
                if ((uVar7 != '\0') && (*0x1488d == '\0')) {
                    fcn.00010d30(0);
                }
                uVar7 = 500;
                (**(*0x14980 + 0xf8))();
                auStackX_8[0] = uVar2 + 1;
                if (0x27 < auStackX_8[0]) {
                    if (((*0x14af2 != '\0') && (*0x148cb != '\0')) && (*0x1488d == '\0')) {
                        fcn.00010eb0(uVar7,CONCAT71(param_2 >> 8,0xfe));
                    }
                    break;
                }
                uVar7 = CONCAT71(uVar7 >> 8,*0x148cb);
            }
            *0x148d0 = 1;
            uVar2 = in(100);
            bVar15 = (uVar2 & 0x21) == 1;
            if (bVar15) {
                auStack_48[0] = in(0x60);
            }
            uVar14 = bVar15;
            if (*0x1488a == '\0') {
                uVar7 = 5000;
                iVar6 = fcn.000109f0(5000);
                if (-1 < iVar6) {
                    out(100,0xa8);
                    do {
                        uVar2 = in(100);
                    } while ((uVar2 & 2) != 0);
                    *0x1488a = '\x01';
                }
            }
            uVar12 = uVar14;
            if (*0x148ce != '\0') {
                fcn.00010aac();
                uVar2 = in(100);
                if ((uVar2 & 0x21) == 1) {
                    uVar3 = in(0x60);
                    uVar12 = bVar15 + 1;
                    auStack_48[uVar14] = uVar3;
                    uVar7 = uVar14;
                }
                fcn.00013070(CONCAT71(uVar7 >> 8,0xf4),auStackX_8);
                *0x148ce = '\0';
            }
            uVar2 = *0x145e0;
            puVar9 = *0x145e0;
            uVar7 = 0;
            auStackX_8[0] = 0;
            *(puVar9 + 0x5256) = 0;
            uVar14 = 0x32;
            if (uVar2 != 0) {
                do {
                    bVar15 = false;
                    uVar11 = 0;
                    uVar13 = uVar12;
                    do {
                        uVar2 = in(100);
                        uVar12 = uVar13;
                        if ((uVar2 & 0x21) == 1) {
                            uVar3 = in(0x60);
                            uVar12 = uVar13 + 1;
                            auStack_48[uVar13] = uVar3;
                        }
                        puVar9 = NULL;
                        uVar10 = uVar7;
                        iVar4 = uVar7;
                        if ((uVar2 & 0x21) == 0x21) {
                            uVar3 = in(0x60);
                            uVar8 = *0x145e0;
                            puVar9 = uVar8;
                            bVar15 = true;
                            *(uVar7 + 0x14958) = uVar3;
                            bVar1 = bVar15;
                            if (iVar4 != uVar8 - 1) goto code_r0x00013d56;
                            fcn.00010b30();
                            break;
                        }
                        (**(*0x14980 + 0xf8))(100);
                        uVar11 = uVar11 + 1;
                        uVar13 = uVar12;
                    } while (uVar11 < uVar14);
                    puVar9 = CONCAT71(puVar9 >> 8,*0x145e0);
code_r0x00013d56:
                    uVar14 = 100;
                    iVar5 = (puVar9 & 0xff) - 1;
                    if (iVar4 == iVar5) {
                        if (bVar15) {
                            *((puVar9 & 0xff) + 0x14958) = 1;
                        }
                        else if ((iVar4 == iVar5) && (bVar1)) {
                            *0x148ce = '\x01';
                        }
                    }
                    if (!bVar15) {
                        if (uVar10 != 0) {
                            uVar14 = uVar7;
                            fcn.00010b30();
                            if (uVar10 < *0x145e0) {
                                do {
                                    uVar11 = 0;
                                    do {
                                        uVar2 = in(100);
                                        if ((uVar2 & 0x21) == 0x21) {
                                            uVar3 = in(0x60);
                                            *(uVar7 + 0x14958) = uVar3;
                                            uVar14 = uVar7;
                                            break;
                                        }
                                        uVar14 = 1000;
                                        (**(*0x14980 + 0xf8))(1000);
                                        uVar11 = uVar11 + 1;
                                    } while (uVar11 < 0x32);
                                    uVar2 = uVar7 + 1;
                                    uVar7 = uVar2;
                                } while (uVar2 < *0x145e0);
                            }
                            puVar9 = auStackX_8;
                            fcn.00013070(CONCAT71(uVar14 >> 8,0xf4),puVar9);
                            puVar9 = CONCAT71(puVar9 >> 8,*0x145e0);
                            uVar7 = auStackX_8[0];
                        }
                        break;
                    }
                    auStackX_8[0] = uVar10 + 1;
                    uVar7 = auStackX_8[0];
                } while (auStackX_8[0] < puVar9);
            }
            iVar6 = 0x14958;
            uVar14 = uVar12;
            if ((*((puVar9 & 0xff) + 0x14958) == '\x01') && ((*0x14958 & 8) == 0)) {
                if (uVar7 != '\0') {
                    do {
                        uVar2 = uVar7 - 1;
                        uVar7 = uVar2;
                    } while (uVar2 != 0);
                    auStackX_8[0] = 0;
                }
                *((puVar9 & 0xff) + 0x14958) = 0;
                fcn.00010aac();
                uVar2 = in(100);
                if ((uVar2 & 0x21) == 1) {
                    uVar3 = in(0x60);
                    uVar14 = uVar12 + 1;
                    auStack_48[uVar12] = uVar3;
                }
                puVar9 = auStackX_8;
                iVar6 = CONCAT71(iVar6 >> 8,0xf4);
                fcn.00013070(iVar6,puVar9);
            }
            fcn.00010ae4();
            fcn.00010b30();
            uVar7 = 0;
            uVar2 = uVar14;
            while (uVar2 != 0) {
                puVar9 = CONCAT71(puVar9 >> 8,auStack_48[uVar7]);
                fcn.00011e4c(iVar6,puVar9);
                uVar7 = uVar7 + 1;
                uVar2 = uVar14 - 1;
                uVar14 = uVar2;
            }
            *0x148d0 = '\0';
        }
    }
    return 0;
}


/* fcn.00013070 @ 0x13070 */

int64_t fcn.00013070(int64_t arg1,uint32_t *arg2)

{
    uint8_t uVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    char cVar5;
    
    uVar4 = 5000;
    iVar3 = fcn.000109f0(5000);
    if (-1 < iVar3) {
        out(100,0xd4);
        do {
            uVar1 = in(100);
        } while ((uVar1 & 2) != 0);
        fcn.00010988(CONCAT71(uVar4 >> 8,arg1));
        cVar5 = '\x03';
        do {
            cVar2 = fcn.00013008(arg2);
            if (cVar2 != '\0') break;
            if (*arg2 == -6) {
                return 0;
            }
            cVar5 = cVar5 + -1;
        } while (cVar5 != '\0');
        iVar3 = -0x7ffffffffffffff9;
    }
    return iVar3;
}


/* fcn.00010b30 @ 0x10b30 */

void fcn.00010b30(void)

{
    uint8_t uVar1;
    unkint7 extraout_RAX;
    
    if (*0x1488a != '\0') {
        fcn.000109f0(5000);
        if (-1 < extraout_RAX) {
            out(100,0xa7);
            do {
                uVar1 = in(100);
            } while ((uVar1 & 2) != 0);
            *0x1488a = '\0';
        }
    }
    return;
}


/* fcn.00013f34 @ 0x13f34 */

ulong fcn.00013f34(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x14988 == '\0') {
        if (*0x149a0 == 0) {
            if (*0x14998 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x14980 + 0x140))(0x145f8,0,0x149a0);
        }
    }
    else if (*0x14990 == 0) {
        if ((*0x14998 == '\0') && (*0x149a8 != 0)) {
    //WARNING: Could not recover jumptable at 0x00013f73. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x149a8 + 0xd0))(0x14608,0,0x14990);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


