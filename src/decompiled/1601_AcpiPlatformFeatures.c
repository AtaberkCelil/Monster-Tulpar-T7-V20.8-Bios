// decompiled by r2ghidra: 1601_AcpiPlatformFeatures.pe32
// functions: 21

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010338(arg1,in_RDX);
    fcn.00010b60(arg1,in_RDX);
    return;
}


/* fcn.00010338 @ 0x10338 */

void fcn.00010338(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    int64_t arg1_00;
    
    *0x110e8 = *(arg1 + 0x60);
    *0x110f0 = *(arg1 + 0x58);
    puVar4 = *0x11100;
    *0x110e0 = arg1;
    if (*0x11100 == NULL) {
        arg1_00 = 0x11100;
        fcn.00010e8c(noname_0,0x11100);
        puVar4 = *0x11100;
        if (*0x11100 == NULL) {
            fcn.00010e8c(noname_0,arg1_00);
            puVar4 = *0x11100;
        }
    }
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103bd:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102e0();
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
            if ((*0x10fe8 == *(puVar4 + 4)) && (*0x10ff0 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103bd;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010b60 @ 0x10b60 */

ulong fcn.00010b60(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t *arg2_00;
    int64_t iVar8;
    uchar *puVar9;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t *piStackX_18;
    ulong uStackX_20;
    int64_t *piStack_98;
    ulong uStack_90;
    uchar auStack_88 [8];
    uchar auStack_80 [8];
    uchar auStack_78 [8];
    ulong *puStack_70;
    uchar auStack_68 [16];
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    (**(*0x110e8 + 0x140))(0x10fa0,0,0x11108);
    uStackX_20 = 0xca9;
    (**(*0x110f0 + 0x48))(L"Setup",0x10f90,0,&uStackX_20,0x11120);
    uStackX_20 = 0x80d;
    (**(*0x110f0 + 0x48))(L"PchSetup",0x10fd0,0,&uStackX_20,0x11de0);
    uVar4 = *0x1103c;
    uVar3 = *0x11038;
    uVar2 = *0x11034;
    uVar1 = *0x11030;
    iVar8 = 0;
    uStack_90 = 0;
    piStackX_18 = NULL;
    piStack_98 = NULL;
    uStack_38 = *0x11030;
    uStack_34 = *0x11034;
    uStack_30 = *0x11038;
    uStack_2c = *0x1103c;
    uStack_58 = *0x11030;
    uStack_54 = *0x11034;
    uStack_50 = *0x11038;
    uStack_4c = *0x1103c;
    iVar5 = (**(*0x110e8 + 0x138))(2,0x10fb0,0,&iStackX_10,auStack_88);
    if (-1 < iVar5) {
        fcn.00010784(0x10fb0,&uStack_58,&puStack_70,0);
    }
    uStack_48 = uVar1;
    uStack_44 = uVar2;
    uStack_40 = uVar3;
    uStack_3c = uVar4;
    puVar9 = auStack_80;
    arg2_00 = 0x10f70;
    piVar6 = NULL;
    iVar5 = (**(*0x110e8 + 0x138))(2,0x10f70,0,puVar9,auStack_78);
    piVar7 = piStack_98;
    if (-1 < iVar5) {
        piVar6 = 0x10f70;
        arg2_00 = &uStack_48;
        iVar5 = fcn.00010784(0x10f70,arg2_00,&piStack_98,CONCAT71(puVar9 >> 8,1));
        piVar7 = piStack_98;
    }
    while (piStack_98 = piVar7, iVar5 == 0) {
        arg2_00 = &uStack_38;
        iVar5 = (*piVar7[3])(piVar7,arg2_00,0x19,iVar8,&piStackX_18,auStack_68,&iStackX_8);
        piVar6 = piVar7;
        piVar7 = piStack_98;
        if (-1 < iVar5) {
            arg2_00 = &iStackX_10;
            fcn.00010878(piStackX_18,arg2_00);
            uStack_90 = 0;
            if (iStackX_10 != 1) {
                arg2_00 = piStackX_18;
                iVar5 = (**puStack_70)(puStack_70,piStackX_18,*(piStackX_18 + 4),&uStack_90);
            }
            iVar8 = iVar8 + 1;
            piVar6 = piStackX_18;
            (**(*0x110e8 + 0x48))(piStackX_18);
            piStackX_18 = NULL;
            piVar7 = piStack_98;
        }
    }
    fcn.00010434(CONCAT71(piVar6 >> 8,*0x11de8),CONCAT71(arg2_00 >> 8,*0x12566));
    return 0;
}


/* fcn.00010e8c @ 0x10e8c */

ulong fcn.00010e8c(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x110e0;
    uVar4 = 0;
    *arg1 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*0x10fc0 == *piVar5) && (*0x10fc8 == piVar5[1])) {
                *arg1 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
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


/* fcn.00010e20 @ 0x10e20 */

ulong fcn.00010e20(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x110e8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00010e50 @ 0x10e50 */

int64_t fcn.00010e50(void)

{
    if (*0x110f8 == 0) {
        (**(*0x110e8 + 0x140))(0x10f60,0,0x110f8);
    }
    return *0x110f8;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3328 named .text
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


/* fcn.00010dcc @ 0x10dcc */

uint64_t fcn.00010dcc(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    
    uVar2 = arg1;
    if ((*0xfdcb0618 >> (arg1 & 0x1f) & 1) == 0) {
        uVar1 = fcn.00010ee8(arg1);
        uVar3 = (uVar1 & 0x1f) << 3;
        uVar1 = fcn.00010f20(CONCAT71(arg1 >> 8,uVar2));
        uVar3 = (uVar3 | uVar1 & 7) << 0xc;
    }
    else {
        uVar3 = *((arg1 & 0xffU) * 8 + 0x10ffc);
    }
    return uVar3;
}


/* fcn.00010d90 @ 0x10d90 */

void fcn.00010d90(void)

{
    if (*0x10fe0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x10fe0 = '\x05';
        }
        else {
            *0x10fe0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010784 @ 0x10784 */

int64_t fcn.00010784(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t in_stack_00000028;
    int64_t *in_stack_00000030;
    uint in_stack_00000038;
    uint in_stack_0000003c;
    ulong auStack_38 [2];
    
    puVar1 = CONCAT44(in_stack_0000003c,in_stack_00000038);
    uVar3 = 0;
    if (*puVar1 == 0) {
        iVar2 = in_stack_00000028;
    }
    else {
        while (iVar2 = (**(*0x110e8 + 0x98))(*(*in_stack_00000030 + uVar3 * 8),arg1,arg3), arg4 != '\0') {
            auStack_38[0] = 0;
            in_stack_00000038 = 0;
            iVar2 = (**(*arg3 + 0x10))(*arg3,arg2,0,auStack_38,&stack0x00000030,&stack0x00000028,&stack0x00000038)
            ;
            if ((iVar2 == 0) || (uVar3 = uVar3 + 1, *puVar1 <= uVar3)) break;
        }
    }
    (**(*0x110e8 + 0x48))(*in_stack_00000030);
    return iVar2;
}


/* fcn.00010878 @ 0x10878 */

ulong fcn.00010878(uint32_t arg1,int64_t arg2)

{
    bool bVar1;
    char cVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int iVar5;
    int64_t iVar6;
    ulong uVar7;
    ulong uVar8;
    uint in_register_0000000c;
    int *piVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    uint64_t uVar12;
    uchar *puStackX_8;
    int16_t *piStackX_10;
    
    piVar9 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar9 != 0x53434146) {
        iVar6 = fcn.00010e50();
        iVar6 = (**(iVar6 + 0x28))(0x225);
        if (piVar9 + 10 != iVar6) {
            section..text(piVar9 + 10,iVar6,6);
        }
        if (*piVar9 != 0x54445353) {
            iVar6 = fcn.00010e50();
            uVar7 = (**(iVar6 + 0x20))(0x163);
            *(piVar9 + 4) = uVar7;
            iVar6 = fcn.00010e50();
            iVar5 = (**(iVar6 + 0x18))(0x226);
            piVar9[6] = iVar5;
            iVar6 = fcn.00010e50();
            iVar5 = (**(iVar6 + 0x18))(0x224);
            piVar9[7] = iVar5;
            piVar9[8] = 0x1000013;
        }
    }
    iVar5 = *piVar9;
    *arg2 = 0xe;
    uVar11 = *0x11180;
    if (iVar5 != 0x54414457) {
        if (*piVar9 != 0x54445353) {
            if (*piVar9 != 0x5449504c) {
                if (*piVar9 == 0x544d5357) {
                    piVar9[9] = 7;
                    return 0;
                }
                return 0;
            }
            uVar10 = piVar9[1] - 0x24;
            uVar12 = uVar10 / 7;
            if ((uVar10 - uVar12 >> 1) + uVar12 >> 5 != '\0') {
                uVar10 = *0x11180;
                if ((*0x11180 & 1) != 0) {
                    piVar9[0xc] = 0;
                    piVar9[0x13] = 0x632;
                    piVar9[0x14] = 0;
                    piVar9[0x15] = 0;
                    piVar9[0x16] = 0;
                }
                uVar7 = 0x2005;
                if ((uVar11 & 2) != 0) {
                    cVar2 = fcn.00010d90();
                    if ((cVar2 == '\x05') || (cVar2 = fcn.00010d90(), cVar2 == '\x03')) {
                        uVar8 = 0xfe00193c;
                        *(piVar9 + 0x23) = uVar7;
                    }
                    else {
                        uVar8 = 0xfe001098;
                        piVar9[0x23] = 0x8000;
                        piVar9[0x24] = 0;
                    }
                    *(piVar9 + 0x21) = uVar8;
                    piVar9[0x1a] = 0;
                }
                if ((uVar10 & 4) != 0) {
                    piVar9[0x28] = 0;
                    piVar9[0x2f] = -0x1ffe708;
                    piVar9[0x30] = 0;
                    *(piVar9 + 0x31) = uVar7;
                    return 0;
                }
                return 0;
            }
            return 0;
        }
        if ((piVar9 + 4 != "PtidDevc") && (iVar6 = fcn.000102a0(piVar9 + 4,0x11078,8), iVar6 != 0)) {
            return 0;
        }
        if (*0x11155 != '\0') {
            return 0;
        }
code_r0x00010a16:
        *arg2 = 1;
        return 0;
    }
    bVar1 = false;
    if (*0x11df1 == '\0') goto code_r0x00010a16;
    uVar3 = in(0x408);
    if ((uVar3 & 1) != 0) {
        out(0x408,uVar3 & 0xfffe);
        uVar4 = in(0x408);
        if (uVar3 == uVar4) {
            bVar1 = true;
            goto code_r0x00010a62;
        }
        out(0x408,uVar3);
    }
    uVar3 = in(0x408);
    out(0x408,uVar3 & 0xfffe);
code_r0x00010a62:
    puStackX_8 = NULL;
    uVar7 = 6;
    (**(*0x110e8 + 0x40))(6,1,&puStackX_8);
    *puStackX_8 = 0;
    iVar6 = fcn.00010e8c(uVar7,&piStackX_10);
    if (iVar6 < 0) {
        return 0;
    }
    for (; *piStackX_10 != -1; piStackX_10 = piStackX_10 + piStackX_10[1]) {
        if (((*piStackX_10 == 4) && (*(piStackX_10 + 4) == *0x10f80)) && (*(piStackX_10 + 8) == *0x10f88)) {
            *puStackX_8 = piStackX_10[0xc];
        }
    }
    if (bVar1) {
        piVar9[0x10] = piVar9[0x10] + -1;
        piVar9[9] = piVar9[9] + -0x18;
    }
    uVar10 = 0;
    if (piVar9[0x10] != 0) {
        do {
            if (piVar9[uVar10 * 6 + 0x11] == ' ') {
                piVar9[uVar10 * 6 + 0x12] = 0x1000100;
                *(piVar9 + uVar10 * 6 + 0x13) = puStackX_8;
                piVar9[uVar10 * 6 + 0x15] = 1;
                piVar9[uVar10 * 6 + 0x16] = 1;
            }
            if (piVar9[uVar10 * 6 + 0x11] == '!') {
                piVar9[uVar10 * 6 + 0x12] = 0x1000100;
                *(piVar9 + uVar10 * 6 + 0x13) = puStackX_8;
                piVar9[uVar10 * 6 + 0x15] = 0;
                piVar9[uVar10 * 6 + 0x16] = 1;
            }
            uVar11 = uVar10 + 1;
            uVar10 = uVar11;
        } while (uVar11 < piVar9[0x10]);
        return 0;
    }
    return 0;
}


/* fcn.00010434 @ 0x10434 */

void fcn.00010434(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int64_t iVar5;
    uint *puVar6;
    ulong uVar7;
    char *pcVar8;
    uint *puVar9;
    uint64_t uVar10;
    char cVar11;
    char *pcVar12;
    int iVar13;
    uint16_t uVar14;
    uint16_t uVar15;
    int64_t iVar16;
    ulong uStackX_18;
    ulong *puStackX_20;
    
    cVar11 = arg1;
    iVar16 = 0;
    uStackX_18 = 0;
    (**(*0x110e8 + 0x140))(0x10fb0,0,&puStackX_20);
    iVar5 = fcn.00010e20();
    if (iVar5 == 0) {
        return;
    }
    puVar6 = fcn.000102c0(iVar5,0x34);
    if (puVar6 == NULL) {
        return;
    }
    puVar6[1] = 0x34;
    *(puVar6 + 2) = 1;
    *puVar6 = 0x50474244;
    iVar5 = fcn.00010e50();
    iVar5 = (**(iVar5 + 0x28))(0x225);
    if (puVar6 + 10 != iVar5) {
        section..text(puVar6 + 10,iVar5,6);
    }
    iVar5 = fcn.00010e50();
    uVar7 = (**(iVar5 + 0x20))(0x163);
    *(puVar6 + 4) = uVar7;
    iVar5 = fcn.00010e50();
    uVar4 = (**(iVar5 + 0x18))(0x226);
    puVar6[6] = uVar4;
    iVar5 = fcn.00010e50();
    uVar4 = (**(iVar5 + 0x18))(0x224);
    puVar6[8] = 0x1000013;
    puVar6[7] = uVar4;
    pcVar8 = "\\_SB.UAH0";
    *(puVar6 + 9) = 0;
    if (cVar11 != '\x01') {
        pcVar8 = 0x11040;
    }
    pcVar12 = "\\_SB.UAH1";
    if (cVar11 != '\x02') {
        pcVar12 = pcVar8;
    }
    pcVar8 = "\\_SB.UAH2";
    if (cVar11 != '\x03') {
        pcVar8 = pcVar12;
    }
    cVar1 = *pcVar8;
    while (cVar1 != '\0') {
        iVar16 = iVar16 + 1;
        cVar1 = pcVar8[iVar16];
    }
    uVar15 = iVar16 + 1;
    uVar14 = iVar16 + 0x27;
    iVar13 = uVar14 + 0x2c;
    puVar9 = fcn.00010e20(pcVar12,iVar13);
    if (puVar9 == NULL) {
        return;
    }
    *(puVar9 + 2) = 0;
    *puVar9 = 0x32474244;
    puVar9[1] = iVar13;
    iVar16 = fcn.00010e50();
    iVar16 = (**(iVar16 + 0x28))(0x225);
    if (puVar9 + 10 != iVar16) {
        section..text(puVar9 + 10,iVar16,6);
    }
    iVar16 = fcn.00010e50();
    uVar7 = (**(iVar16 + 0x20))(0x163);
    *(puVar9 + 4) = uVar7;
    iVar16 = fcn.00010e50();
    uVar4 = (**(iVar16 + 0x18))(0x226);
    puVar9[6] = uVar4;
    iVar16 = fcn.00010e50();
    uVar4 = (**(iVar16 + 0x18))(0x224);
    puVar9[8] = 0x1000013;
    puVar9[7] = uVar4;
    puVar9[9] = 0x2c;
    puVar9[10] = 1;
    *(puVar9 + 0x2d) = uVar14;
    *(puVar9 + 0x32) = 0x26;
    *(puVar9 + 0xb) = 0;
    *(puVar9 + 0x2f) = 1;
    *(puVar9 + 0xc) = uVar15;
    *(puVar9 + 0x36) = 0x80000000;
    *(puVar9 + 0x3a) = 1;
    puVar9[0xf] = 0x160000;
    *(puVar9 + 0x10) = 0x22;
    *(puVar9 + 0x4e) = 0xc;
    pcVar12 = *(puVar9 + 0x32) + puVar9 + 0xb;
    if ((uVar15 != 0) && (pcVar12 != pcVar8)) {
        section..text(pcVar12,pcVar8,uVar15);
    }
    if (cVar11 == '\0') {
        puVar6[10] = 0x801;
        *(puVar6 + 0xb) = 0x3f8;
        *(puVar9 + 0x42) = 0x801;
        *(puVar9 + 0x46) = 0x3f8;
    }
    else {
        if (2 < cVar11 - 1U) goto code_r0x00010755;
        uVar10 = fcn.00010dcc(CONCAT71(pcVar12 >> 8,cVar11 - 1U));
        puVar6[10] = 0x800;
        if (uVar10 < 0xfe020000) {
            uVar2 = *((uVar10 + 0x10 >> 4 & 0x10000000 | uVar10 + 0x10 & 0xffffffff) + 0xc0000000);
            uVar3 = *((uVar10 + 0x14 >> 4 & 0x10000000 | uVar10 + 0x14 & 0xffffffff) + 0xc0000000);
        }
        else {
            uVar2 = *(uVar10 + 0x10);
            uVar3 = *(uVar10 + 0x14);
        }
        *(puVar6 + 0xb) = (uVar2 & 0xfffff000) + (uVar3 << 0x20);
        *(puVar9 + 0x42) = 0x800;
        *(puVar9 + 0x46) = *(puVar6 + 0xb);
        if (arg2 == '\x01') {
            if (uVar10 - *(puVar6 + 0xb) != 0x1000) {
                return;
            }
            *(puVar9 + 0x4e) = 0x2000;
            *(puVar9 + 0x3a) = 0x14;
        }
    }
    (**puStackX_20)(puStackX_20,puVar6,puVar6[1],&uStackX_18);
    uStackX_18 = 0;
    (**puStackX_20)(puStackX_20,puVar9,puVar9[1],&uStackX_18);
code_r0x00010755:
    (**(*0x110e8 + 0x48))(puVar6);
    (**(*0x110e8 + 0x48))(puVar9);
    return;
}


/* fcn.00010ee8 @ 0x10ee8 */

uchar fcn.00010ee8(uint32_t arg1)

{
    if (arg1 < 7) {
        arg1 = arg1 & 0xff;
        if ((arg1 == 0) || (arg1 == 1)) {
            return 0x1e;
        }
        if (arg1 == 2) {
            return 0x19;
        }
        if ((((arg1 == 3) || (arg1 == 4)) || (arg1 == 5)) || (arg1 == 6)) {
            return 0x11;
        }
    }
    return 0xff;
}


/* fcn.00010f20 @ 0x10f20 */

uchar fcn.00010f20(uint32_t arg1)

{
    if (6 < arg1) {
        return 0xff;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 0) {
        return 0;
    }
    if (arg1 == 1) {
        return 1;
    }
    if (arg1 != 2) {
        if (arg1 == 3) {
            return 0;
        }
        if (arg1 == 4) {
            return 1;
        }
        if (arg1 != 5) {
            if (arg1 != 6) {
                return 0xff;
            }
            return 3;
        }
    }
    return 2;
}


