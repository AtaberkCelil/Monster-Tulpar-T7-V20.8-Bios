// decompiled by r2ghidra: 0638_Smbios.pe32
// functions: 87

/* entry0 @ 0x10480 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000104ac(arg1,arg2);
    fcn.00014620(arg1,arg2);
    return;
}


/* fcn.000104ac @ 0x104ac */

void fcn.000104ac(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t arg2_00;
    int64_t iVar5;
    uint32_t uVar6;
    ulong noname_0;
    uint64_t noname_0_00;
    int64_t iStackX_8;
    
    *0x19570 = *(arg2 + 0x60);
    *0x19568 = arg2;
    iStackX_8 = arg1;
    fcn.000159a8();
    noname_0 = 0x18610;
    iVar3 = fcn.000159d8(0x18610);
    if (iVar3 == 0) {
        uVar4 = fcn.00010340();
        fcn.00010330();
        uVar1 = in(0x1808);
        fcn.00010310(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar6 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            fcn.00010300();
        }
        fcn.00010310(uVar6,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010330();
        }
        else {
            fcn.00010320();
        }
    }
    if ((*0x19580 != NULL) || (iVar3 = (**(*0x19570 + 0x140))(0x18350,0,0x19580), -1 < iVar3)) {
        (***0x19580)(*0x19580,0x19588);
    }
    fcn.00015948(0x18360,0x19590);
    fcn.00015c94();
    iStackX_8 = 0;
    iVar3 = fcn.00015948(0x18290,&iStackX_8);
    if (iVar3 < 0) {
        arg2_00 = fcn.000159d8(0x18290);
    }
    else {
        arg2_00 = iStackX_8;
    }
    if (arg2_00 != 0) {
        *0x195e0 = *(arg2_00 + 0x1c);
        *0x195d0 = ((*(arg2_00 + 2) - 0x28) / *(arg2_00 + 0x20)) * *(arg2_00 + 0x1c);
        iVar5 = fcn.00015e88(*0x195d0);
        *0x195e8 = iVar5;
        if (iVar5 != 0) {
            uVar4 = arg2_00 + 0x28;
            *0x195d8 = *0x195d0 + iVar5;
            noname_0_00 = *(arg2_00 + 2) + arg2_00;
            if (uVar4 < noname_0_00) {
                noname_0_00 = *0x195e0;
                do {
                    (**(*0x19570 + 0x160))(iVar5,uVar4 + 8,noname_0_00);
                    noname_0_00 = *0x195e0;
                    uVar4 = uVar4 + *(arg2_00 + 0x20);
                    iVar5 = iVar5 + noname_0_00;
                } while (uVar4 < *(arg2_00 + 2) + arg2_00);
            }
            if ((iVar3 < 0) && (iVar3 = fcn.00015ebc(noname_0_00,*(arg2_00 + 2),arg2_00), iVar3 != 0)) {
                (**(*0x19570 + 0xc0))(0x18290,iVar3);
            }
        }
    }
    return;
}


/* fcn.00014620 @ 0x14620 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h

int64_t fcn.00014620(int64_t arg1,int64_t arg2)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    ushort *puVar6;
    uint64_t uVar7;
    char *pcVar8;
    int16_t iVar9;
    uint64_t uVar10;
    char *pcVar11;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_2fh;
    int64_t var_77h;
    int32_t var_7fh;
    int16_t var_83h;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    int64_t iStack_78;
    uint uStack_70;
    uint uStack_6c;
    uint uStack_68;
    uint uStack_64;
    uint64_t uStack_60;
    char *pcStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    uchar auStack_38 [7];
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    int64_t var_19h;
    int64_t var_11h;
    int32_t var_9h;
    int32_t var_5h;
    uint32_t var_1h;
    
    uVar10 = 0;
    var_27h._1_4_ = 0x47f;
    bVar2 = false;
    pcStack_58 = NULL;
    aiStack_48[0] = 0;
    var_27h._5_2_ = 0;
    if (*0x195a8 == 0) {
        *0x19598 = *(arg2 + 0x60);
        *0x195a0 = *(arg2 + 0x58);
        *0x195a8 = arg2;
    }
    stack0x00000018 = 0xffffffff;
    unique0x100004b0 = arg1;
    (**(*0x19598 + 0x28))(0,6,1,&var_1fh + 1);
    *0x18440 = stack0x00000018;
    fcn.00018160(stack0x00000018,0x183d8,0x1f);
    uStack_60 = 0xffffffff;
    (**(*0x19598 + 0x28))(1,6,1,&uStack_60);
    *0x18570 = uStack_60;
    fcn.00018160(uStack_60,0x185f0,0x18);
    (**(*0x19598 + 0x140))(0x182b0,0,0x19548);
    uStack_88 = 0xec87d643;
    uStack_84 = 0x4bb5eba4;
    uStack_80 = 0x3e3fe5a1;
    uStack_7c = 0xa90db236;
    iStack_78 = 0xca9;
    (**(*0x195a0 + 0x48))(L"Setup",&uStack_88,0,&iStack_78,0x19680);
    aiStack_48[1] = 1;
    iVar3 = (**(*0x195a0 + 0x48))(L"SecureBoot",0x18240,0,aiStack_48 + 1,0x19530);
    uVar7 = *0x19530;
    if (iVar3 < 0) {
        uVar7 = uVar10;
    }
    *0x19530 = uVar7;
    iVar3 = (**(*0x19598 + 0x138))(2,0x182d0,0,&uStack_60,&iStack_50);
    if (-1 < iVar3) {
        if (uStack_60 != 0) {
            do {
                iVar3 = (**(*0x19598 + 0x98))(*(iStack_50 + uVar10 * 8),0x18628,&uStack_70);
                if ((-1 < iVar3) &&
                   (iVar3 = (**(CONCAT44(uStack_6c,uStack_70) + 0x18))
                                      (CONCAT44(uStack_6c,uStack_70),0x182a0,0x18,0,&pcStack_58,&iStack_78,
                                       &var_1fh + 1), iVar3 == 0)) break;
                uVar10 = uVar10 + 1;
            } while (uVar10 < uStack_60);
        }
        (**(*0x19598 + 0x48))(iStack_50);
    }
    iVar9 = -1;
    if (iVar3 == 0) {
        bVar2 = true;
        iStack_78 = iStack_78 + -0x10;
        pcVar11 = pcStack_58 + 0x10;
        cVar1 = *pcVar11;
        pcVar8 = pcVar11;
        while (cVar1 != '\x7f') {
            iVar9 = iVar9 + 1;
            *(pcVar8 + 2) = iVar9;
            for (piVar4 = pcVar8 + pcVar8[1]; *piVar4 != 0; piVar4 = piVar4 + 1) {
            }
            pcVar8 = pcVar8 + ((piVar4 - pcVar8) + 2);
            cVar1 = *pcVar8;
        }
        *0x1a32a = iVar9 + 1;
        *(pcVar8 + 2) = *0x1a32a;
        fcn.00010804(pcVar11);
        *0x183c0 = iStack_78 + 0x1a00;
    }
    else {
        *0x183c0 = 0x1a00;
        pcVar11 = stack0x00000018;
    }
    *0x19538 = 0xffffffff;
    uVar10 = (*0x183c0 >> 0xc) + ((*0x183c0 & 0xfff) != 0);
    iVar3 = (**(*0x19598 + 0x28))(1,6,uVar10,0x19538);
    if (-1 < iVar3) {
        fcn.0001810e(*0x19538,*0x183c0,CONCAT71(uVar10 >> 8,0xff));
        if (bVar2) {
            fcn.00018160(*0x19538,pcVar11,iStack_78);
            pcVar8 = pcStack_58;
            (**(*0x19598 + 0x48))(pcStack_58);
        }
        else {
            pcVar11 = &var_27h + 1;
            pcVar8 = *0x19538;
            fcn.00018160(*0x19538,pcVar11,6);
            *0x1a32a = 0;
        }
        iVar3 = CONCAT71(pcVar8 >> 8,4);
        iVar5 = fcn.00012f64(iVar3,CONCAT71(pcVar11 >> 8,1),aiStack_48,&var_1fh + 1);
        if (-1 < iVar5) {
            iVar3 = aiStack_48[0];
            (**(*0x19598 + 0x48))();
        }
        fcn.0001110c(iVar3,*0x183c0);
        iVar3 = 0x200;
        (**(*0x19598 + 0x170))(0x200,0x10,0x13a1c,0,0x18340,auStack_38);
        (**(*0x19598 + 0x170))(0x200,0x10,0x13eec,0,0x18650,&var_29h + 1);
        pcVar11 = *0x19538;
        puVar6 = 0x1a340;
        do {
            *puVar6 = 0xffff;
            *(puVar6 + 1) = 0;
            puVar6 = puVar6 + 5;
            iVar3 = iVar3 + -1;
            iVar5 = stack0x00000008;
        } while (iVar3 != 0);
        for (; *pcVar11 != '\x7f'; pcVar11 = pcVar11 + ((piVar4 - pcVar11) + 2)) {
            fcn.00014170(*(pcVar11 + 2),iVar5);
            for (piVar4 = pcVar11 + pcVar11[1]; *piVar4 != 0; piVar4 = piVar4 + 1) {
            }
        }
        fcn.00014170(*(pcVar11 + 2),iVar5);
        fcn.00012550();
        uStack_88 = 0xeb9d2d31;
        uStack_84 = 0x11d32d88;
        uStack_80 = 0x9000169a;
        uStack_7c = 0x4dc13f27;
        (**(*0x19598 + 0xc0))(&uStack_88,*0x18440);
        uStack_70 = 0xf2fd1544;
        uStack_6c = 0x4a2c9794;
        uStack_68 = 0xbbe52e99;
        uStack_64 = 0x94e320cf;
        (**(*0x19598 + 0xc0))(&uStack_70,*0x18570);
        (**(*0x19598 + 0x80))(&var_fh + 1,0x182e0,0,0x183f8);
        (**(*0x19598 + 0x80))(&var_fh + 1,0x18310,0,0x18450);
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.000159a8 @ 0x159a8 */

int64_t fcn.000159a8(void)

{
    if (*0x19578 == 0) {
        fcn.00015948(0x18320,0x19578);
    }
    return *0x19578;
}


/* fcn.00015948 @ 0x15948 */

ulong fcn.00015948(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x19568;
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


/* fcn.000159d8 @ 0x159d8 */

void fcn.000159d8(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000159a8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00015a06:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00015a06;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
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


/* fcn.00015c94 @ 0x15c94 */

ulong fcn.00015c94(void)

{
    ulong uVar1;
    char cVar2;
    ulong *puVar3;
    
    uVar1 = *0x18660;
    puVar3 = 0x19050;
    do {
        if (*puVar3 == NULL) {
            return 0;
        }
        cVar2 = (**puVar3)(uVar1,0x195b0);
        puVar3 = puVar3 + 1;
    } while (cVar2 == '\0');
    return 0;
}


/* fcn.00015e88 @ 0x15e88 */

ulong fcn.00015e88(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x19570 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00015ebc @ 0x15ebc */

int64_t fcn.00015ebc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x19570 + 0x40))(6,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* section..text @ 0x102a0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 32640 named .text
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


/* fcn.00010710 @ 0x10710 */

ulong fcn.00010710(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    uint64_t in_RAX;
    int16_t *piVar3;
    char *pcVar4;
    char cVar5;
    int16_t iVar6;
    char *pcVar7;
    uchar uVar8;
    
    cVar5 = arg4;
    pcVar7 = *arg1;
    *arg2 = 0;
    uVar8 = 0;
    do {
        cVar1 = *pcVar7;
        pcVar4 = CONCAT71(in_RAX >> 8,cVar1);
        iVar6 = pcVar7;
        if (cVar1 == '\x7f') {
            if (arg3 == '\x7f') {
                uVar2 = pcVar7[1];
                uVar8 = 1;
                *arg2 = pcVar7;
                for (piVar3 = pcVar7 + uVar2; *piVar3 != 0; piVar3 = piVar3 + 1) {
                }
                *arg1 = pcVar7 + ((piVar3 - iVar6) + 2);
            }
code_r0x000107b7:
            return CONCAT71(pcVar4 >> 8,uVar8);
        }
        if ((cVar1 == arg3) && (cVar5 = cVar5 + -1, cVar5 == '\0')) {
            uVar2 = pcVar7[1];
            uVar8 = 1;
            *arg2 = pcVar7;
            for (piVar3 = pcVar7 + uVar2; *piVar3 != 0; piVar3 = piVar3 + 1) {
            }
            pcVar4 = pcVar7 + ((piVar3 - iVar6) + 2);
            *arg1 = pcVar4;
            goto code_r0x000107b7;
        }
        for (piVar3 = pcVar7 + pcVar7[1]; *piVar3 != 0; piVar3 = piVar3 + 1) {
        }
        in_RAX = (piVar3 - iVar6) + 2;
        pcVar7 = pcVar7 + in_RAX;
    } while( true );
}


/* fcn.00010a7c @ 0x10a7c */

int64_t fcn.00010a7c(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    unkuint7 Var6;
    char cVar7;
    int16_t *piVar8;
    char *pcVar9;
    
    cVar7 = arg2;
    iVar2 = *arg1;
    piVar8 = *(iVar2 + 1) + iVar2;
    iVar1 = *piVar8;
    piVar4 = piVar8;
    while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        iVar1 = *piVar4;
    }
    piVar5 = piVar8;
    while (cVar7 = cVar7 + -1, cVar7 != '\0') {
        for (; *piVar5 != '\0'; piVar5 = piVar5 + 1) {
        }
        piVar5 = piVar5 + 1;
    }
    uVar3 = piVar5 - piVar8;
    pcVar9 = piVar8 + uVar3;
    Var6 = uVar3 >> 8;
    if (pcVar9 < (piVar4 - iVar2) + 2 + iVar2) {
        *arg1 = pcVar9;
        return CONCAT71(Var6,1);
    }
    return Var6 << 8;
}


/* fcn.00012348 @ 0x12348 */

ulong fcn.00012348(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t *arg1_00;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    int16_t *piVar5;
    int64_t iVar6;
    uint in_R8;
    char *arg2_00;
    int16_t *piVar7;
    int16_t *piStackX_8;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    iVar3 = 0;
    piStackX_8 = arg1;
    if (*arg2_00 != '\0') {
        do {
            iVar3 = iVar3 + 1;
        } while (arg2_00[iVar3] != '\0');
        if (iVar3 != 0) {
            cVar2 = fcn.00010a7c(&piStackX_8,arg2);
            arg1_00 = piStackX_8;
            if (cVar2 != '\0') {
                cVar2 = *piStackX_8;
                piVar5 = piStackX_8;
                while (cVar2 != '\0') {
                    piVar5 = piVar5 + 1;
                    cVar2 = *piVar5;
                }
                iVar1 = *piStackX_8;
                piVar7 = piStackX_8;
                while (iVar1 != 0) {
                    piVar7 = piVar7 + 1;
                    iVar1 = *piVar7;
                }
                pcVar4 = arg2_00;
                iVar3 = 0;
                do {
                    iVar6 = iVar3;
                    pcVar4 = pcVar4 + 1;
                    iVar3 = iVar6 + 1;
                } while (*pcVar4 != '\0');
                iVar6 = iVar6 + 2;
                fcn.00018160(iVar6 + piStackX_8,piVar5 + 1,piVar7 + (2 - (piVar5 + 1)));
                fcn.00018160(arg1_00,arg2_00,iVar6);
                return 0;
            }
            return 0x800000000000000e;
        }
    }
    fcn.00010ae0(arg1,arg2);
    return 0;
}


/* fcn.00010ae0 @ 0x10ae0 */

uint8_t * fcn.00010ae0(uint32_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    bool bVar2;
    uint8_t *puVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    uint in_register_00000014;
    uint8_t *puVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    uint8_t uVar8;
    uint8_t *apuStackX_8 [4];
    
    apuStackX_8[0] = CONCAT44(in_register_0000000c,arg1);
    uVar8 = 0;
    puVar3 = NULL;
    if (*apuStackX_8[0] < 0x2a) {
        puVar5 = *(*apuStackX_8[0] * 8 + 0x18af0);
    }
    else {
        puVar5 = puVar3;
    }
    if (puVar5 != NULL) {
        for (; *puVar5 != 0xff; puVar5 = puVar5 + 3) {
            if (apuStackX_8[0][*puVar5] == arg2) {
                apuStackX_8[0][*puVar5] = 0;
                break;
            }
        }
    }
    fcn.00010a7c(apuStackX_8,CONCAT44(in_register_00000014,arg2));
    uVar1 = *apuStackX_8[0];
    while (uVar1 != 0) {
        puVar3 = puVar3 + 1;
        uVar1 = puVar3[apuStackX_8[0]];
    }
    puVar3 = puVar3 + apuStackX_8[0];
    puVar5 = puVar3 + 1;
    for (; *puVar3 != 0; puVar3 = puVar3 + 1) {
    }
    apuStackX_8[0][0] = 0x20;
    apuStackX_8[0][1] = 0;
    puVar3 = puVar3 + (2 - puVar5);
    apuStackX_8[0] = apuStackX_8[0] + 2;
    bVar2 = false;
    uVar4 = puVar5 - apuStackX_8[0];
    puVar7 = apuStackX_8[0];
    if (puVar5 < apuStackX_8[0]) {
        uVar4 = -uVar4;
        if (apuStackX_8[0] <= puVar5 + puVar3) {
            puVar7 = apuStackX_8[0] + puVar3;
            bVar2 = true;
            uVar8 = 1;
            puVar5 = puVar5 + puVar3;
        }
    }
    if ((0x7 < puVar3) && (7 < uVar4)) {
        uVar4 = puVar5 & 7;
        uVar6 = puVar7 & 7;
        if (bVar2) {
            puVar5 = puVar5 + -1;
            puVar7 = puVar7 + -1;
        }
        if ((uVar4 == uVar6) && (uVar4 != 0)) {
            if (!bVar2) {
                uVar4 = 8 - uVar4;
            }
            puVar3 = puVar3 + -uVar4;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = *puVar5;
                puVar5 = puVar5 + uVar8 * -2 + 1;
                puVar7 = puVar7 + uVar8 * -2 + 1;
            }
        }
        if (bVar2) {
            puVar5 = puVar5 + -7;
            puVar7 = puVar7 + -7;
        }
        for (uVar4 = puVar3 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + uVar8 * -0x10 + 8;
            puVar7 = puVar7 + uVar8 * -0x10 + 8;
        }
        puVar3 = puVar3 & 7;
        if (puVar3 == NULL) {
            return apuStackX_8[0];
        }
        if (bVar2) {
            puVar5 = puVar5 + 8;
            puVar7 = puVar7 + 8;
        }
    }
    if (bVar2) {
        puVar5 = puVar5 + -1;
        puVar7 = puVar7 + -1;
    }
    for (; puVar3 != NULL; puVar3 = puVar3 + -1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + uVar8 * -2 + 1;
        puVar7 = puVar7 + uVar8 * -2 + 1;
    }
    return apuStackX_8[0];
}


/* fcn.00018160 @ 0x18160 */

int64_t fcn.00018160(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010b78 @ 0x10b78 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00010b78(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    uint in_register_0000000c;
    uint8_t *puVar6;
    uint64_t uVar7;
    uint in_register_00000014;
    int64_t *piVar8;
    unkbyte7 Var10;
    int64_t iVar9;
    uint8_t *puVar11;
    uint8_t uVar12;
    uint8_t *puVar13;
    char *pcVar14;
    int64_t in_R9;
    uint8_t uVar15;
    uint8_t *puVar16;
    uint8_t *puStackX_20;
    int64_t var_58h;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    puVar5 = CONCAT44(in_register_00000014,arg2);
    puVar6 = CONCAT44(in_register_0000000c,arg1);
    if (*puVar6 != 0) {
        if (*puVar5 < 0x2a) {
            puVar11 = *(*puVar5 * 8 + 0x18af0);
        }
        else {
            puVar11 = NULL;
        }
        if (puVar11 != NULL) {
            if (*puVar5 == 3) {
                puVar11 = puVar11 + ((arg3 & 0xff) * 6 + -6) * 3;
            }
            uVar15 = 0;
            if (*puVar11 != 0xff) {
                uVar7 = 0;
                puVar16 = puVar11;
                do {
                    if ((*puVar6 & '\x01' << (uVar15 & 0x1f)) != 0) {
                        uVar1 = *puVar5;
                        piVar8 = &iStack_58;
                        arg3 = CONCAT71(arg3 >> 8,uVar1);
                        in_R9 = CONCAT71(in_R9 >> 8,1);
                        puStackX_20 = puVar5;
                        cVar3 = fcn.00010710(&puStackX_20,piVar8,arg3,in_R9);
                        Var10 = piVar8 >> 8;
                        if (cVar3 == '\0') {
                            iVar9 = CONCAT71(Var10,0xff);
                        }
                        else {
                            iVar9 = CONCAT71(Var10,*(*puVar16 + iStack_58));
                        }
                        pcVar14 = *(puVar6 + uVar7 * 8 + 4);
                        iVar4 = 0;
                        if (*pcVar14 != '\0') {
                            do {
                                iVar4 = iVar4 + 1;
                            } while (pcVar14[iVar4] != '\0');
                            if (iVar4 != 0) {
                                if (iVar9 == '\0') {
                                    iVar9 = CONCAT71(in_R9 >> 8,1);
                                    puVar13 = CONCAT71(arg3 >> 8,uVar1);
                                    uVar12 = 0;
                                    puStackX_20 = puVar5;
                                    cVar3 = fcn.00010710(&puStackX_20,&iStack_50,puVar13,iVar9);
                                    if (cVar3 != '\0') {
                                        if (uVar1 < 0x2a) {
                                            puVar13 = *(uVar1 * 8 + 0x18af0);
                                        }
                                        else {
                                            puVar13 = NULL;
                                        }
                                        if (puVar13 != NULL) {
                                            while (uVar2 = *puVar13, uVar2 != 0xff) {
                                                puVar13 = puVar13 + 3;
                                                uVar2 = *(uVar2 + iStack_50);
                                                if (uVar12 < uVar2) {
                                                    uVar12 = uVar2;
                                                }
                                            }
                                            *(*puVar16 + iStack_50) = uVar12 + 1;
                                            iVar9 = iStack_50;
                                        }
                                    }
                                    in_R9 = CONCAT71(iVar9 >> 8,1);
                                    piVar8 = aiStack_48;
                                    puStackX_20 = puVar5;
                                    cVar3 = fcn.00010710(&puStackX_20,piVar8,CONCAT71(puVar13 >> 8,uVar1),in_R9);
                                    Var10 = piVar8 >> 8;
                                    if (cVar3 == '\0') {
                                        iVar9 = CONCAT71(Var10,0xff);
                                    }
                                    else {
                                        iVar9 = CONCAT71(Var10,*(*puVar16 + aiStack_48[0]));
                                    }
                                }
                                fcn.00012348(puVar5,iVar9,pcVar14);
                                arg3 = pcVar14;
                                goto code_r0x00010d12;
                            }
                        }
                        fcn.00010ae0(arg2,iVar9);
                    }
code_r0x00010d12:
                    uVar15 = uVar15 + 1;
                    uVar7 = uVar15;
                    puVar16 = puVar11 + uVar7 * 3;
                } while (*puVar16 != 0xff);
            }
            uVar15 = 0;
            while (uVar1 = *puVar11, uVar1 != 0xff) {
                puVar11 = puVar11 + 3;
                if (uVar15 < puVar5[uVar1]) {
                    uVar15 = puVar5[uVar1];
                }
            }
            puVar5 = puVar5 + puVar5[1];
            if (uVar15 != 0) {
                uVar7 = uVar15;
                do {
                    for (; *puVar5 != 0; puVar5 = puVar5 + 1) {
                    }
                    puVar5 = puVar5 + 1;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            *puVar5 = 0;
        }
    }
    return;
}


/* fcn.00015e58 @ 0x15e58 */

uint64_t fcn.00015e58(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if ((((uVar2 != 0) && (*0x195e8 <= uVar2)) && (uVar2 <= *0x195d8)) && (uVar1 = 0, uVar2 + *0x195e0 < *0x195d8)) {
        uVar1 = uVar2 + *0x195e0;
    }
    return uVar1;
}


/* fcn.0001810e @ 0x1810e */

int64_t fcn.0001810e(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010f50 @ 0x10f50 */

int64_t fcn.00010f50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    unkuint3 *pVar6;
    int64_t *piVar7;
    unkuint3 *pVar8;
    uint32_t uVar9;
    
    iVar4 = *0x195e8;
    do {
        iVar2 = *0x19598;
        if (iVar4 == 0) {
            return -0x7ffffffffffffff2;
        }
        if (*(iVar4 + 0x20) == 0) {
            iVar1 = *(iVar4 + 0x10);
            if (*(iVar1 + 0x34) == 0) {
                iVar3 = *(iVar1 + 0x30) + iVar1;
            }
            else {
                iVar3 = *(iVar1 + 0x34) + iVar1;
                iVar3 = *(iVar3 + 0x10) + iVar3;
            }
            piVar5 = iVar3 + (-iVar3 & 7);
            piVar7 = piVar5;
            do {
                if (iVar1 + -1 + *(iVar1 + 0x20) <= piVar7) break;
                if ((*(piVar7 + 0x13) & 1) == 0) {
                    iVar3 = 0x18;
                    uVar9 = *(piVar7 + 0x14);
                }
                else {
                    uVar9 = *(piVar7 + 3);
                    iVar3 = 0x20;
                    if (uVar9 == 0xffffffff) break;
                }
                pVar6 = iVar3 + piVar7;
                if ((*arg1 == *piVar7) && (*(arg1 + 8) == piVar7[1])) {
                    pVar8 = pVar6 + (uVar9 - iVar3) + -1;
                    goto code_r0x00011098;
                }
                piVar7 = piVar7 + (-uVar9 & 7) + uVar9;
            } while (piVar5 <= piVar7);
code_r0x00010fdf:
            pVar6 = NULL;
code_r0x00010fe2:
            if (pVar6 != NULL) {
                uVar9 = *(pVar6 + 1);
                *arg3 = uVar9;
                iVar4 = (**(iVar2 + 0x40))(4,uVar9,arg2);
                if (iVar4 < 0) {
                    *arg3 = 0;
                    return iVar4;
                }
                (**(*0x19598 + 0x160))(*arg2,pVar6,*arg3);
                return 0;
            }
        }
        iVar4 = fcn.00015e58(iVar4);
    } while( true );
code_r0x00011098:
    if (pVar8 <= pVar6) goto code_r0x00010fdf;
    if (*(pVar6 + 3) == '\x19') {
        pVar6 = pVar6 + 1;
        goto code_r0x00010fe2;
    }
    uVar9 = (-*pVar6 & 3) + *pVar6;
    if (uVar9 == 0) goto code_r0x00010fdf;
    pVar6 = pVar6 + uVar9;
    goto code_r0x00011098;
}


/* fcn.00012e5c @ 0x12e5c */

ulong fcn.00012e5c(int64_t arg1)

{
    char cVar1;
    ulong uVar2;
    int64_t iStackX_10;
    int16_t in_stack_00000018;
    
    iStackX_10 = *0x19538;
    cVar1 = fcn.000107c8(&iStackX_10,arg1 & 0xffff);
    if (cVar1 == '\0') {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar2 = fcn.00012758(1,iStackX_10,0,0,in_stack_00000018);
    }
    return uVar2;
}


/* fcn.00012e18 @ 0x12e18 */

void fcn.00012e18(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint in_register_00000014;
    int16_t in_stack_00000018;
    
    if ((*CONCAT44(in_register_00000014,arg2) == '\x04') && ((*0x1b760 & 0x3f) != 0)) {
        fcn.00012c98(0,0,arg1 & 0xffff,arg2);
    }
    else {
        fcn.00012758(0,0,arg2,arg3 & 0xffff,in_stack_00000018);
    }
    return;
}


/* fcn.00010a14 @ 0x10a14 */

uint64_t fcn.00010a14(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char *pcVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar3 = 0;
    if (arg1 < 0x2a) {
        uVar4 = *((arg1 & 0xff) * 8 + 0x18af0);
    }
    else {
        uVar4 = uVar3;
    }
    if (uVar4 != 0) {
        pcVar2 = uVar4 + ((arg3 & 0xff) * 6 + -6) * 3;
        cVar1 = *pcVar2;
        if (cVar1 != -1) {
            do {
                if (cVar1 == arg2) {
                    uVar3 = pcVar2[1] - 1;
                    break;
                }
                pcVar2 = pcVar2 + 3;
                cVar1 = *pcVar2;
            } while (cVar1 != -1);
            if (*pcVar2 != -1) {
                return uVar3;
            }
        }
    }
    return 0xff;
}


/* fcn.000106b4 @ 0x106b4 */

uint64_t fcn.000106b4(ulong noname_0,uint32_t arg1)

{
    uint8_t uVar1;
    uint64_t in_RAX;
    int16_t *piVar2;
    char *pcVar3;
    uint8_t uVar4;
    
    uVar4 = 0;
    pcVar3 = *0x19538;
    while( true ) {
        if (*pcVar3 == '\x7f') {
            return in_RAX & 0xffffffffffffff00;
        }
        uVar1 = uVar4 + 1;
        if (*pcVar3 != '\x03') {
            uVar1 = uVar4;
        }
        uVar4 = uVar1;
        if (*(pcVar3 + 2) == arg1) break;
        for (piVar2 = pcVar3 + pcVar3[1]; *piVar2 != 0; piVar2 = piVar2 + 1) {
        }
        in_RAX = (piVar2 - pcVar3) + 2;
        pcVar3 = pcVar3 + in_RAX;
    }
    return uVar4;
}


/* fcn.00010e94 @ 0x10e94 */

void fcn.00010e94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    uint64_t arg3_00;
    
    for (piVar1 = *(arg2 + 1) + arg2; *piVar1 != 0; piVar1 = piVar1 + 1) {
    }
    arg3_00 = (piVar1 - arg2) + 2;
    fcn.00018160(arg3,arg2,arg3_00);
    if (arg1 != 0) {
        if ((*arg1 & 0x10000) != 0) {
            *(arg3 + 4) = *(arg1 + 0x3c);
        }
        if ((*arg1 & 0x20000) != 0) {
            *(arg3 + 0xc) = *(arg1 + 0x3d);
        }
        if ((*arg1 & 0x40000) != 0) {
            *(arg3 + 0xe) = *(arg1 + 0x3f);
        }
        if ((*arg1 & 0x80000) != 0) {
            *(arg3 + 0x10) = *(arg1 + 0x41);
        }
        if ((*arg1 & 0x100000) != 0) {
            *(arg3 + 0x12) = *(arg1 + 0x43);
        }
        if ((*arg1 & 0x200000) != 0) {
            *(arg3 + 0x14) = *(arg1 + 0x45);
        }
        fcn.00010b78(arg1,arg3,CONCAT71(arg3_00 >> 8,1));
    }
    return;
}


/* fcn.00010df0 @ 0x10df0 */

void fcn.00010df0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    uint64_t arg3_00;
    
    for (piVar1 = *(arg2 + 1) + arg2; *piVar1 != 0; piVar1 = piVar1 + 1) {
    }
    arg3_00 = (piVar1 - arg2) + 2;
    fcn.00018160(arg3,arg2,arg3_00);
    if (arg1 != 0) {
        if ((*arg1 & 0x10000) != 0) {
            *(arg3 + 5) = *(arg1 + 0x2c);
        }
        if ((*arg1 & 0x20000) != 0) {
            *(arg3 + 0xd) = *(arg1 + 0x2d);
        }
        if ((*arg1 & 0x80000) != 0) {
            *(arg3 + 0x11) = *(arg1 + 0x34);
        }
        if ((*arg1 & 0x40000) != 0) {
            *(arg3 + 0x12) = *(arg1 + 0x33);
        }
        fcn.00010b78(arg1,arg3,CONCAT71(arg3_00 >> 8,arg4));
    }
    return;
}


/* fcn.00010d90 @ 0x10d90 */

void fcn.00010d90(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    uint64_t arg3_00;
    
    for (piVar1 = *(arg2 + 1) + arg2; *piVar1 != 0; piVar1 = piVar1 + 1) {
    }
    arg3_00 = (piVar1 - arg2) + 2;
    fcn.00018160(arg3,arg2,arg3_00);
    if (arg1 != 0) {
        fcn.00010b78(arg1,arg3,CONCAT71(arg3_00 >> 8,1));
    }
    return;
}


/* fcn.00013020 @ 0x13020 */

//WARNING: Variable defined which should be unmapped: var_2h

ulong fcn.00013020(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int16_t *piVar6;
    uint32_t uVar7;
    char *arg2_00;
    char *pcVar8;
    int16_t *piVar9;
    uint32_t uVar10;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    uint32_t var_2h;
    
    uVar7 = *0x19538;
    if ((*(((arg3 & 0xffffU) - 2) + arg2) != 0) || (uVar10 = arg3 & 0xffff, uVar10 < *(arg2 + 1) + 2)) {
        return 0x8000000000000018;
    }
    iStackX_10 = CONCAT44(*0x1953c,*0x19538);
    cVar1 = fcn.000107c8(&iStackX_10,arg1 & 0xffff);
    if (cVar1 != '\0') {
        for (piVar9 = *(iStackX_10 + 1) + iStackX_10; *piVar9 != 0; piVar9 = piVar9 + 1) {
        }
        iVar4 = iStackX_10;
        iVar2 = fcn.0001250c(uVar7);
        uVar7 = *0x183c0;
        if (uVar10 <= uVar7 - (iVar2 + (iVar4 - piVar9) + -2)) goto code_r0x000130eb;
        if (*0x19559 != '\0') {
            return 0x8000000000000009;
        }
        iVar4 = fcn.00012e5c(arg1 & 0xffff);
        if (iVar4 < 0) {
            return 0x8000000000000009;
        }
    }
    uVar7 = *0x183c0;
code_r0x000130eb:
    iVar5 = (**(*0x19598 + 0x40))(4,uVar7,&iStackX_20);
    iVar4 = iStackX_20;
    if (iVar5 < 0) {
        return 0x8000000000000009;
    }
    fcn.00018160(iStackX_20,CONCAT44(*0x1953c,*0x19538),*0x183c0);
    if ((*0x19540 != 0) && (*0x19559 != '\0')) {
        (**(*0x19540 + 0x18))(*0x19540,*0x19538,*0x183c0,auStackX_18);
    }
    iStackX_10 = CONCAT44(*0x1953c,*0x19538);
    cVar1 = fcn.000107c8(&iStackX_10,arg1);
    iVar5 = iStackX_10;
    if (cVar1 == '\0') {
        fcn.00012e18(arg1 & 0xffff,arg2,arg3 & 0xffff);
    }
    else {
        fcn.00018160(iStackX_10,arg2,arg3 & 0xffffU);
        iVar4 = iVar4 + (iVar5 - CONCAT44(*0x1953c,*0x19538));
        for (piVar9 = *(iVar4 + 1) + iVar4; *piVar9 != 0; piVar9 = piVar9 + 1) {
        }
        arg2_00 = iVar4 + (piVar9 - iVar4) + 2;
        for (piVar9 = *(iVar5 + 1) + iVar5; *piVar9 != 0; piVar9 = piVar9 + 1) {
        }
        iVar2 = 0;
        cVar1 = *arg2_00;
        pcVar8 = arg2_00;
        while (cVar1 != '\x7f') {
            for (piVar6 = pcVar8 + pcVar8[1]; *piVar6 != 0; piVar6 = piVar6 + 1) {
            }
            uVar3 = (piVar6 - pcVar8) + 2;
            iVar2 = iVar2 + uVar3;
            pcVar8 = pcVar8 + uVar3;
            cVar1 = *pcVar8;
        }
        for (piVar6 = pcVar8 + pcVar8[1]; *piVar6 != 0; piVar6 = piVar6 + 1) {
        }
        fcn.00018160(iVar5 + (piVar9 - iVar5) + 2,arg2_00,(piVar6 - pcVar8) + iVar2 + 2);
    }
    (**(*0x19598 + 0x48))(iStackX_20);
    fcn.00012550();
    if ((*0x19540 != 0) && (*0x19559 != '\0')) {
        (**(*0x19540 + 8))(*0x19540,*0x19538,*0x183c0,auStackX_18);
    }
    return 0;
}


/* fcn.00011f80 @ 0x11f80 */

int64_t fcn.00011f80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar *puVar2;
    int iVar3;
    uint16_t uVar4;
    int16_t *piVar5;
    uint64_t arg3_00;
    uchar *arg2_00;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x19598 + 0x28))(0,4,1,&iStackX_20);
    if (-1 < iVar1) {
        if (iStackX_20 != arg1) {
            section..text(iStackX_20,arg1,0x11);
        }
        iVar1 = iStackX_20;
        puVar2 = iStackX_20 + 0x11;
        for (piVar5 = *(arg1 + 1) + arg1; *piVar5 != 0; piVar5 = piVar5 + 1) {
        }
        uVar4 = (piVar5 - arg1) - 0xf;
        arg3_00 = uVar4;
        if ((uVar4 != 0) && (iStackX_20 + 0x800 != arg1 + 0x11)) {
            section..text(iStackX_20 + 0x800,arg1 + 0x11,arg3_00);
        }
        uVar6 = 0;
        uVar7 = arg3 & 0xff;
        iVar3 = 0x13;
        *puVar2 = *(uVar7 + 10 + arg2);
        *(iVar1 + 0x12) = *(uVar7 + 0xf + arg2);
        puVar2 = iVar1 + 0x13;
        if (*(uVar7 + 0xf + arg2) != '\0') {
            arg2_00 = arg2 + 0x14 + uVar7 * 0x50;
            do {
                if (puVar2 != arg2_00) {
                    section..text(puVar2,arg2_00,5);
                }
                iVar3 = iVar3 + 5;
                puVar2 = puVar2 + 5;
                uVar6 = uVar6 + 1;
                arg2_00 = arg2_00 + 5;
            } while (uVar6 < *(uVar7 + 0xf + arg2));
        }
        *puVar2 = *(uVar7 + 0x1a4 + arg2);
        puVar2[1] = *(uVar7 + 0x1a9 + arg2);
        *(puVar2 + 2) = *(arg2 + 0x1ae + uVar7 * 2);
        puVar2[4] = *(uVar7 + 0x1b8 + arg2);
        *(iStackX_20 + 1) = iVar3 + 5;
        if ((arg3_00 != 0) && (puVar2 + 5 != iStackX_20 + 0x800)) {
            section..text(puVar2 + 5,iStackX_20 + 0x800,arg3_00);
        }
        iVar1 = fcn.00013020(*(arg1 + 2),iStackX_20,CONCAT62(piVar5 >> 0x10,uVar4) + iVar3 + 5);
        (**(*0x19598 + 0x30))(iStackX_20,1);
    }
    return iVar1;
}


/* fcn.0001250c @ 0x1250c */

ulong fcn.0001250c(uint32_t arg1)

{
    uint16_t uVar1;
    int16_t *piVar2;
    uint in_register_0000000c;
    char *pcVar3;
    int16_t iVar4;
    
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    while( true ) {
        piVar2 = pcVar3 + pcVar3[1];
        if (*pcVar3 == '\x7f') break;
        for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
        }
        uVar1 = (piVar2 - pcVar3) + 2;
        iVar4 = iVar4 + uVar1;
        pcVar3 = pcVar3 + uVar1;
    }
    for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
    }
    return CONCAT62(piVar2 >> 0x10,(piVar2 - pcVar3) + 2 + iVar4);
}


/* fcn.000107c8 @ 0x107c8 */

int64_t fcn.000107c8(int64_t arg1,uint32_t arg2)

{
    char *pcVar1;
    int16_t *piVar2;
    unkuint7 Var3;
    
    while( true ) {
        Var3 = *arg1 >> 8;
        if (*(*arg1 + 2) == arg2) {
            return CONCAT71(Var3,1);
        }
        pcVar1 = *arg1;
        if (*pcVar1 == '\x7f') break;
        for (piVar2 = pcVar1 + pcVar1[1]; *piVar2 != 0; piVar2 = piVar2 + 1) {
        }
        *arg1 = *arg1 + (piVar2 - pcVar1) + 2;
    }
    return Var3 << 8;
}


/* fcn.00012550 @ 0x12550 */

ulong fcn.00012550(void)

{
    char cVar1;
    char cVar2;
    ushort uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int16_t *piVar6;
    int16_t *piVar7;
    char *pcVar8;
    int16_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint auStackX_8 [2];
    
    auStackX_8[0] = 0;
    if (*0x19540 != 0) {
        (**(*0x19540 + 0x18))(*0x19540,0xf0000,0x10000,auStackX_8);
    }
    uVar3 = fcn.0001250c(*0x19538);
    iVar9 = 1;
    *(*0x18440 + 0x16) = uVar3;
    *(*0x18440 + 0x18) = *0x19538;
    for (pcVar8 = CONCAT44(*0x1953c,*0x19538); *pcVar8 != '\x7f'; pcVar8 = pcVar8 + ((piVar6 - pcVar8) + 2)) {
        iVar9 = iVar9 + 1;
        for (piVar6 = pcVar8 + pcVar8[1]; *piVar6 != 0; piVar6 = piVar6 + 1) {
        }
    }
    *(*0x18440 + 0x1c) = iVar9;
    piVar6 = *(*0x18440 + 0x18);
    uVar5 = 0;
    while (*piVar6 != '\x7f') {
        for (piVar7 = piVar6 + *(piVar6 + 1); *piVar7 != 0; piVar7 = piVar7 + 1) {
        }
        piVar7 = piVar7 + 1;
        uVar4 = piVar7 - piVar6;
        piVar6 = piVar7;
        if (uVar5 < uVar4) {
            uVar5 = uVar4;
        }
    }
    *(*0x18440 + 8) = uVar5;
    iVar10 = 0xf;
    cVar2 = '\0';
    (*0x18440)[0x15] = '\0';
    pcVar8 = *0x18440 + 0x10;
    cVar1 = cVar2;
    do {
        cVar1 = cVar1 + *pcVar8;
        pcVar8 = pcVar8 + 1;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    (*0x18440)[0x15] = -cVar1;
    (*0x18440)[4] = '\0';
    cVar1 = cVar2;
    if ((*0x18440)[5] != '\0') {
        uVar11 = (*0x18440)[5];
        pcVar8 = *0x18440;
        do {
            cVar1 = cVar1 + *pcVar8;
            pcVar8 = pcVar8 + 1;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    (*0x18440)[4] = -cVar1;
    if (*0x19560 != 0) {
        fcn.00018160(*0x19560,*0x18440,0x1f);
    }
    uVar5 = fcn.0001250c(*0x19538);
    *(*0x18570 + 0xc) = uVar5;
    *(*0x18570 + 0x10) = CONCAT44(*0x1953c,*0x19538);
    (*0x18570)[5] = '\0';
    iVar10 = *0x19520;
    if ((*0x18570)[6] != '\0') {
        uVar11 = (*0x18570)[6];
        pcVar8 = *0x18570;
        do {
            cVar2 = cVar2 + *pcVar8;
            pcVar8 = pcVar8 + 1;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    (*0x18570)[5] = -cVar2;
    if (iVar10 != 0) {
        fcn.00018160(iVar10,*0x18570,0x18);
    }
    if (*0x19540 != 0) {
        (**(*0x19540 + 8))(*0x19540,0xf0000,0x10000,auStackX_8);
    }
    return 0;
}


/* fcn.00012758 @ 0x12758 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00012758(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4,int16_t arg_60h)

{
    char cVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int16_t *piVar5;
    char *pcVar6;
    int16_t iVar7;
    int64_t iVar8;
    char *arg1_00;
    uint in_R8;
    uint64_t uVar9;
    uint64_t uVar10;
    char **ppcVar11;
    int64_t iVar12;
    char *arg2_00;
    int iVar13;
    uint16_t uStackX_8;
    uint16_t uStackX_20;
    uint16_t in_stack_00000028;
    int16_t var_40h;
    char *pcStack_68;
    char *pcStack_60;
    char *pcStack_58;
    char *pcStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    uint32_t var_8h;
    
    pcVar6 = CONCAT44(in_R8,arg3);
    uStackX_20 = arg4;
    pcStack_60 = NULL;
    iVar8 = -0x7ffffffffffffff2;
    uStackX_8 = 0;
    ppcVar11 = arg4;
    if ((*0x19540 != 0) && (*0x19559 != '\0')) {
        ppcVar11 = &pcStack_68;
        (**(*0x19540 + 0x18))(*0x19540,*0x19538 & 0xffffffff,*0x183c0,ppcVar11);
    }
    iVar13 = arg1;
    iVar12 = *0x19540;
    if (iVar13 == 0) {
code_r0x00012894:
        if (pcVar6 == NULL) goto code_r0x000127f0;
        if (in_stack_00000028 < 0xfffe) {
            pcStack_50 = *0x19538;
            cVar1 = fcn.000107c8(&pcStack_50,in_stack_00000028);
            if (cVar1 != '\0') {
                iVar8 = -0x7fffffffffffffec;
                goto code_r0x000127f0;
            }
        }
        if ((*(pcVar6 + ((arg4 & 0xffffU) - 2)) != 0) || (uStackX_20 < pcVar6[1] + 2)) goto code_r0x000127e6;
        if ((((*pcVar6 == '\x04') && (pcVar6[1] == 0x2a)) &&
            (((((pcVar6[4] != '\0' || (pcVar6[7] != '\0')) || (pcVar6[0x10] != '\0')) ||
              ((pcVar6[0x20] != '\0' || (pcVar6[0x21] != '\0')))) || (pcVar6[0x22] != '\0')))) &&
           ((*(pcVar6 + 0x2a) == 0 && (*(pcVar6 + 0x2e) == 0)))) {
            fcn.00018160(pcVar6 + 0x2a,pcVar6 + 0x30,uStackX_20 - 0x30);
            uStackX_20 = uStackX_20 - 6;
        }
        iStack_40 = (**(*0x19598 + 0x40))(4,*0x183c0,&pcStack_58);
        arg2_00 = pcStack_58;
        if (iStack_40 < 0) {
            iVar8 = -0x7ffffffffffffff7;
        }
        else {
            fcn.00018160(pcStack_58,*0x19538,*0x183c0);
            uStackX_8 = fcn.0001250c(*0x19538);
            if (*0x183c0 - uStackX_8 < uStackX_20) {
                if ((*0x19559 == '\0') && (*0x185da != '\0')) {
                    ppcVar11 = &pcStack_60;
                    uStackX_8 = *0x183c0 + uStackX_20;
                    pcStack_60 = 0xffffffff;
                    iVar8 = (**(*0x19598 + 0x28))(1,6,(uStackX_8 >> 0xc) + ((uStackX_8 & 0xfff) != 0),ppcVar11);
                    if (-1 < iVar8) {
                        fcn.00018160(pcStack_60,*0x19538,*0x183c0);
                        arg1_00 = pcStack_60;
                        goto code_r0x00012a60;
                    }
                }
                iVar8 = -0x7ffffffffffffff7;
            }
            else {
                arg1_00 = *0x19538;
code_r0x00012a60:
                uVar3 = *0x1a32a;
                if (iVar13 == 2) {
                    if (*arg1_00 != '\x7f') {
                        ppcVar11 = *arg2;
                        uVar2 = 0;
                        do {
                            for (piVar5 = arg1_00 + arg1_00[1]; *piVar5 != 0; piVar5 = piVar5 + 1) {
                            }
                            if (*arg2 == uVar2) break;
                            uVar4 = (piVar5 - arg1_00) + 2;
                            arg1_00 = arg1_00 + uVar4;
                            arg2_00 = arg2_00 + uVar4;
                            uVar2 = uVar2 + 1;
                        } while (*arg1_00 != '\x7f');
                    }
                }
                else {
                    for (; (*arg1_00 != '\x7f' && (*(arg1_00 + 2) <= in_stack_00000028)); arg1_00 = arg1_00 + uVar2) {
                        for (piVar5 = arg1_00 + arg1_00[1]; *piVar5 != 0; piVar5 = piVar5 + 1) {
                        }
                        uVar2 = (piVar5 - arg1_00) + 2;
                        arg2_00 = arg2_00 + uVar2;
                    }
                }
                iVar7 = 0;
                if (in_stack_00000028 < 0xfffe) {
                    *(pcVar6 + 2) = in_stack_00000028;
                    if (uVar3 < in_stack_00000028) {
                        *0x1a32a = in_stack_00000028;
                    }
                }
                else {
                    *(pcVar6 + 2) = *0x1a32a;
                }
                fcn.00018160(arg1_00,pcVar6,uStackX_20);
                pcStack_50 = arg1_00 + uStackX_20;
                cVar1 = *arg2_00;
                pcVar6 = arg2_00;
                while (cVar1 != '\x7f') {
                    for (piVar5 = pcVar6 + pcVar6[1]; *piVar5 != 0; piVar5 = piVar5 + 1) {
                    }
                    uVar3 = (piVar5 - pcVar6) + 2;
                    iVar7 = iVar7 + uVar3;
                    pcVar6 = pcVar6 + uVar3;
                    cVar1 = *pcVar6;
                }
                for (piVar5 = pcVar6 + pcVar6[1]; *piVar5 != 0; piVar5 = piVar5 + 1) {
                }
                uVar9 = (piVar5 - pcVar6) + iVar7 + 2;
                fcn.00018160(pcStack_50,arg2_00,uVar9);
                cVar1 = fcn.00010710(&pcStack_50,&iStack_48,CONCAT71(uVar9 >> 8,0x7f),CONCAT71(ppcVar11 >> 8,1));
                if ((cVar1 != '\0') && (*(iStack_48 + 2) <= *0x1a32a)) {
                    *0x1a32a = *0x1a32a + 1;
                    *(iStack_48 + 2) = *0x1a32a;
                }
                iVar8 = 0;
            }
        }
        if (iStack_40 == 0) {
            (**(*0x19598 + 0x48))(pcStack_58);
        }
        if (iVar8 == 0) goto code_r0x00012bf1;
    }
    else {
        if (iVar13 != 1) {
            if (iVar13 == 2) goto code_r0x00012894;
code_r0x000127e6:
            iVar8 = -0x7fffffffffffffe8;
            goto code_r0x000127f0;
        }
        piVar5 = *(arg2 + 1) + arg2;
        iVar7 = *piVar5;
        while (iVar7 != 0) {
            piVar5 = piVar5 + 1;
            iVar7 = *piVar5;
        }
        iVar8 = 0;
        uVar10 = (piVar5 - arg2) + 2;
        iVar7 = fcn.0001250c(arg2);
        uVar3 = iVar7 - uVar10;
        uVar9 = uVar3;
        fcn.00018160(arg2,(uVar10 & 0xffff) + arg2,uVar9);
        fcn.0001810e(uVar3 + arg2,uVar10 & 0xffff,CONCAT71(uVar9 >> 8,0xff));
code_r0x00012bf1:
        if ((*0x19559 == '\0') && (pcStack_60 != NULL)) {
            (**(*0x19598 + 0x30))(*0x19538,(*0x183c0 >> 0xc) + ((*0x183c0 & 0xfff) != 0));
            *0x19538 = pcStack_60;
            *0x183c0 = uStackX_8;
        }
        fcn.00012550();
    }
    iVar12 = *0x19540;
code_r0x000127f0:
    if ((iVar12 != 0) && (*0x19559 != '\0')) {
        (**(iVar12 + 8))(iVar12,*0x19538 & 0xffffffff,*0x183c0,&pcStack_68);
    }
    return iVar8;
}


/* fcn.00012c98 @ 0x12c98 */

ulong fcn.00012c98(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int16_t *piVar1;
    ulong uVar2;
    int16_t unaff_DI;
    uint64_t arg3_00;
    uint in_R9;
    uint16_t in_stack_00000028;
    int64_t iStackY_28;
    
    (**(*0x19598 + 0x40))(4,in_stack_00000028 + 0x400);
    fcn.0001810e(iStackY_28,in_stack_00000028 + 0x400,0);
    arg3_00 = in_stack_00000028;
    fcn.00018160(iStackY_28,CONCAT44(in_R9,arg4),arg3_00);
    fcn.00010b78(0x1b760,iStackY_28,CONCAT71(arg3_00 >> 8,1));
    for (piVar1 = *(iStackY_28 + 1) + iStackY_28; *piVar1 != 0; piVar1 = piVar1 + 1) {
    }
    uVar2 = fcn.00012758(arg1 & 0xff,arg2,iStackY_28,CONCAT62(piVar1 >> 0x10,piVar1 - iStackY_28) + 2,unaff_DI);
    (**(*0x19598 + 0x48))(iStackY_28);
    return uVar2;
}


/* fcn.00015b64 @ 0x15b64 */

int64_t fcn.00015b64(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    iVar1 = *in_stack_00000028;
    if (iVar1 == 0) {
        *arg3 = 0;
    }
    iVar1 = (**(*0x195a0 + 0x48))(arg1,arg2,0,arg3,iVar1);
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x19598 + 0x48))();
        }
        iVar1 = fcn.00015b38(*arg3);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x195a0 + 0x48))(arg1,arg2,0,arg3,iVar1);
        }
    }
    return iVar1;
}


/* fcn.00012d78 @ 0x12d78 */

void fcn.00012d78(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int16_t in_stack_00000018;
    
    if ((*CONCAT44(in_register_0000000c,arg1) == '\x04') && ((*0x1b760 & 0x3f) != 0)) {
        fcn.00012c98(0,0,0xfffe,arg1);
    }
    else {
        fcn.00012758(0,0,arg1,arg2 & 0xffff,in_stack_00000018);
    }
    return;
}


/* fcn.00015cd8 @ 0x15cd8 */

int64_t fcn.00015cd8(void)

{
    int64_t iVar1;
    
    if (*0x195c8 == 0) {
        iVar1 = (**(*0x19570 + 0x140))(0x18250,0,0x195c8);
        if (iVar1 < 0) {
            *0x195c8 = 0;
        }
    }
    return *0x195c8;
}


/* fcn.00015d28 @ 0x15d28 */

uint64_t fcn.00015d28(void)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_8 [4];
    
    uVar4 = 0;
    if (*0x195c0 == 0) {
        iVar1 = fcn.00015948(0x18220,aiStackX_8);
        *0x195c0 = uVar4;
        if (-1 < iVar1) {
            uVar3 = 0;
            piVar2 = aiStackX_8[0] + 0x10;
            if (*(aiStackX_8[0] + 4) != 0) {
                do {
                    uVar3 = uVar4;
                    if ((*piVar2 == 7) && (0x4f < *(piVar2 + 6) << 0xc)) break;
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar3;
                    piVar2 = piVar2 + *(aiStackX_8[0] + 8);
                } while (uVar3 < *(aiStackX_8[0] + 4));
            }
            if (uVar3 < *(aiStackX_8[0] + 4)) {
                *0x195c0 = *(piVar2 + 2);
            }
        }
    }
    return *0x195c0;
}


/* fcn.00015da4 @ 0x15da4 */

ulong fcn.00015da4(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    int64_t aiStackX_10 [3];
    uchar auStack_48 [64];
    
    aiStackX_10[0] = arg1;
    puVar1 = fcn.00015cd8();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.00015d28();
        arg1_00 = auStack_48;
        if (puVar3 != NULL) {
            arg1_00 = puVar3;
        }
        if (arg1_00 != 0x18300) {
            section..text(arg1_00,0x18300,0x10);
        }
        *(arg1_00 + 0x10) = 0x28;
        *(arg1_00 + 0x20) = 0xffffffffffffffff;
        *(arg1_00 + 0x18) = 4;
        *(arg1_00 + 0x1c) = 0x28;
        if (arg1_00 + 0x28 != 0x184c8) {
            section..text(arg1_00 + 0x28,0x184c8,0x10);
        }
        *(arg1_00 + 0x38) = 2;
        aiStackX_10[0] = 0x40;
        (**puVar1)(puVar1,arg1_00,aiStackX_10);
        uVar2 = *(arg1_00 + 0x20);
    }
    return uVar2;
}


/* fcn.000132a0 @ 0x132a0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h_2
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h_2
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.000132a0(void)

{
    uint16_t uVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    char *pcVar7;
    int64_t *piVar8;
    uint16_t uVar9;
    char *pcVar10;
    int16_t *piVar11;
    uint8_t uVar12;
    char *pcVar13;
    int64_t *arg1;
    uint64_t uVar14;
    uint64_t uVar15;
    uint8_t uVar16;
    uint64_t *arg3;
    int64_t *piVar17;
    char cVar18;
    char *pcVar19;
    int64_t var_8h_2;
    int64_t var_10h_2;
    int64_t var_20h;
    int64_t var_28h_2;
    int64_t var_40h_2;
    int64_t var_50h_2;
    int64_t var_60h_2;
    int64_t var_70h_2;
    int64_t var_80h_2;
    int64_t var_90h;
    int32_t var_98h;
    int16_t var_9ch;
    int16_t var_9eh;
    int64_t var_a0h;
    int64_t var_b0h;
    int64_t var_c0h;
    int64_t var_d0h;
    int64_t var_e0h;
    int64_t var_f0h;
    int64_t var_100h;
    int64_t var_110h;
    int64_t var_120h;
    int64_t var_130h;
    int64_t var_140h;
    int32_t var_148h;
    int16_t var_14ch;
    int16_t var_14eh;
    int64_t var_150h;
    int32_t var_158h;
    int16_t var_15ch;
    int16_t var_15eh;
    int64_t var_160h;
    int32_t var_168h;
    int16_t var_16ch;
    int16_t var_16eh;
    int64_t var_170h;
    int32_t var_178h;
    int16_t var_17ch;
    int16_t var_17eh;
    int64_t var_180h;
    int32_t var_188h;
    int16_t var_18ch;
    int16_t var_18eh;
    uint32_t var_1e0h;
    uint32_t var_1e8h;
    int32_t var_1f8h;
    int16_t var_1fch;
    char **ppcVar20;
    int64_t *piStack_2a8;
    uint64_t uStack_2a0;
    int64_t *piStack_298;
    uint uStack_290;
    uint uStack_28c;
    uint uStack_288;
    uint uStack_284;
    char *pcStack_280;
    char acStack_278 [4];
    char acStack_274 [4];
    char *pcStack_270;
    char acStack_268 [4];
    char acStack_264 [2];
    ushort uStack_262;
    char acStack_260 [4];
    char acStack_25c [2];
    ushort uStack_25a;
    char acStack_258 [4];
    char acStack_254 [2];
    ushort uStack_252;
    char acStack_250 [4];
    char acStack_24c [2];
    ushort uStack_24a;
    char acStack_248 [4];
    char acStack_244 [2];
    ushort uStack_242;
    char acStack_240 [4];
    char acStack_23c [2];
    ushort uStack_23a;
    char acStack_238 [4];
    char acStack_234 [2];
    ushort uStack_232;
    char acStack_230 [4];
    char acStack_22c [2];
    ushort uStack_22a;
    char acStack_228 [4];
    char acStack_224 [2];
    ushort uStack_222;
    char acStack_220 [4];
    char acStack_21c [2];
    ushort uStack_21a;
    char acStack_218 [4];
    char acStack_214 [2];
    ushort uStack_212;
    char acStack_210 [4];
    char acStack_20c [2];
    ushort uStack_20a;
    char acStack_208 [4];
    char acStack_204 [2];
    ushort uStack_202;
    char acStack_200 [4];
    char acStack_1fc [2];
    ushort uStack_1fa;
    char acStack_1f8 [4];
    char acStack_1f4 [2];
    ushort uStack_1f2;
    char acStack_1f0 [4];
    char acStack_1ec [2];
    ushort uStack_1ea;
    char acStack_1e8 [4];
    char acStack_1e4 [2];
    ushort uStack_1e2;
    char acStack_1e0 [4];
    char acStack_1dc [2];
    char cStack_1da;
    uchar uStack_1d9;
    char acStack_1d8 [4];
    char acStack_1d4 [2];
    char cStack_1d2;
    uchar uStack_1d1;
    ulong uStack_1d0;
    ulong uStack_1c8;
    ulong uStack_1b8;
    char acStack_1b0 [24];
    char acStack_198 [8];
    char acStack_190 [8];
    char acStack_188 [8];
    char acStack_180 [8];
    char acStack_178 [8];
    char acStack_170 [8];
    char acStack_168 [8];
    char acStack_160 [8];
    char acStack_158 [8];
    char acStack_150 [8];
    char acStack_148 [8];
    char acStack_140 [4];
    char acStack_13c [2];
    ushort uStack_13a;
    char acStack_138 [8];
    char acStack_130 [8];
    char acStack_128 [8];
    char acStack_120 [8];
    char acStack_118 [8];
    char acStack_110 [8];
    char acStack_108 [8];
    char acStack_100 [8];
    char acStack_f8 [8];
    char acStack_f0 [8];
    char acStack_e8 [8];
    char acStack_e0 [8];
    char acStack_d8 [8];
    char acStack_d0 [8];
    char acStack_c8 [8];
    char acStack_c0 [8];
    char acStack_b8 [8];
    char acStack_b0 [8];
    char acStack_a8 [8];
    char acStack_a0 [8];
    char acStack_98 [8];
    char acStack_90 [4];
    char acStack_8c [2];
    ushort uStack_8a;
    int32_t var_80h;
    int16_t var_bp_7ch;
    int16_t var_7ah;
    char *var_bp_78h;
    char *var_70h;
    char *var_68h;
    char *var_60h;
    char *var_58h;
    char *var_50h;
    char *var_48h;
    char *var_40h;
    char *var_38h;
    char *var_30h;
    char *var_28h;
    char *var_20h_2;
    char *var_18h;
    char *var_10h;
    char *var_8h;
    int16_t var_4h_2;
    int8_t var_6h;
    int8_t var_7h;
    
    uVar15 = 0;
    uStack_1b8 = *0x19538;
    uStack_262 = 0;
    acStack_260 = str.fr_FR._0_4_;
    acStack_25c = str.fr_FR._4_2_;
    uStack_25a = 0;
    acStack_264 = str.en_US._4_2_;
    acStack_258 = str.es_ES._0_4_;
    acStack_254 = str.es_ES._4_2_;
    uStack_252 = 0;
    acStack_250 = str.de_DE._0_4_;
    acStack_24c = str.de_DE._4_2_;
    uStack_24a = 0;
    acStack_248 = str.ru_RU._0_4_;
    acStack_244 = str.ru_RU._4_2_;
    uStack_242 = 0;
    acStack_240 = str.ko_KR._0_4_;
    acStack_23c = str.ko_KR._4_2_;
    uStack_23a = 0;
    acStack_238 = str.it_IT._0_4_;
    acStack_234 = str.it_IT._4_2_;
    uStack_232 = 0;
    acStack_230 = str.da_DK._0_4_;
    acStack_22c = str.da_DK._4_2_;
    uStack_22a = 0;
    acStack_228 = str.fi_FI._0_4_;
    acStack_224 = str.fi_FI._4_2_;
    uStack_222 = 0;
    acStack_220 = str.nl_NL._0_4_;
    acStack_21c = str.nl_NL._4_2_;
    uStack_21a = 0;
    acStack_218 = str.no_NO._0_4_;
    acStack_214 = str.no_NO._4_2_;
    uStack_212 = 0;
    acStack_210 = str.nb_NO._0_4_;
    acStack_20c = str.nb_NO._4_2_;
    uStack_20a = 0;
    acStack_208 = str.nn_NO._0_4_;
    uStack_290 = 0x8be4df61;
    uStack_28c = 0x11d293ca;
    uStack_288 = 0xe0000daa;
    uStack_284 = 0x8c2b0398;
    acStack_268 = str.en_US._0_4_;
    acStack_204 = str.nn_NO._4_2_;
    uStack_202 = 0;
    acStack_200 = str.pt_PT._0_4_;
    acStack_1fc = str.pt_PT._4_2_;
    uStack_1fa = 0;
    acStack_1f8 = str.pt_BR._0_4_;
    acStack_1f4 = str.pt_BR._4_2_;
    uStack_1f2 = 0;
    acStack_1f0 = str.sv_SE._0_4_;
    acStack_1ec = str.sv_SE._4_2_;
    uStack_1ea = 0;
    acStack_1e8 = str.ja_JP._0_4_;
    acStack_1e4 = str.ja_JP._4_2_;
    uStack_1e2 = 0;
    acStack_1e0 = str.zh_chs._0_4_;
    acStack_1dc = str.zh_chs._4_2_;
    cStack_1da = str.zh_chs[6];
    uStack_1d9 = 0;
    acStack_1d8 = str.zh_cht._0_4_;
    acStack_1d4 = str.zh_cht._4_2_;
    acStack_198 = str.enUSiso8859_1._0_8_;
    acStack_190 = str.enUSiso8859_1._8_8_;
    cStack_1d2 = str.zh_cht[6];
    uStack_1d1 = 0;
    acStack_188 = str.frFRiso8859_1._0_8_;
    acStack_180 = str.frFRiso8859_1._8_8_;
    uStack_1d0 = 0x736e61482d687a;
    uStack_1c8 = 0x746e61482d687a;
    acStack_178 = str.esESiso8859_1._0_8_;
    acStack_170 = str.esESiso8859_1._8_8_;
    acStack_140 = str.koKRunicode._8_4_;
    acStack_13c = str.koKRunicode._12_2_;
    acStack_168 = str.deDEiso8859_1._0_8_;
    acStack_160 = str.deDEiso8859_1._8_8_;
    acStack_158 = str.ruRUiso8859_5._0_8_;
    acStack_150 = str.ruRUiso8859_5._8_8_;
    uStack_13a = 0;
    acStack_148 = str.koKRunicode._0_8_;
    acStack_138 = str.itITiso8859_1._0_8_;
    acStack_130 = str.itITiso8859_1._8_8_;
    acStack_128 = str.daDKiso8859_1._0_8_;
    acStack_120 = str.daDKiso8859_1._8_8_;
    acStack_118 = str.fiFIiso8859_1._0_8_;
    acStack_110 = str.fiFIiso8859_1._8_8_;
    acStack_108 = str.nlNLiso8859_1._0_8_;
    acStack_100 = str.nlNLiso8859_1._8_8_;
    acStack_f8 = str.noNOiso8859_1._0_8_;
    acStack_f0 = str.noNOiso8859_1._8_8_;
    acStack_e8 = str.nbNOiso8859_1._0_8_;
    acStack_e0 = str.nbNOiso8859_1._8_8_;
    acStack_d8 = str.nnNOiso8859_1._0_8_;
    acStack_d0 = str.nnNOiso8859_1._8_8_;
    var_bp_78h._4_2_ = str.zhCNunicode._12_2_;
    uVar16 = 1;
    uVar14 = str.zhCNunicode._8_4_;
    acStack_90 = str.jaJPunicode._8_4_;
    acStack_8c = str.jaJPunicode._12_2_;
    uStack_8a = 0;
    var_bp_78h._6_2_ = 0;
    var_68h._4_2_ = str.zhTWunicode._12_2_;
    acStack_c8 = str.ptPTiso8859_1._0_8_;
    acStack_c0 = str.ptPTiso8859_1._8_8_;
    var_48h._4_2_ = str.zhTWunicode._12_2_;
    acStack_b8 = str.ptBRiso8859_1._0_8_;
    acStack_b0 = str.ptBRiso8859_1._8_8_;
    var_58h._4_2_ = str.zhCNunicode._12_2_;
    var_48h._6_2_ = 0;
    acStack_a8 = str.svSEiso8859_1._0_8_;
    acStack_a0 = str.svSEiso8859_1._8_8_;
    var_68h._0_4_ = str.zhTWunicode._8_4_;
    acStack_98 = str.jaJPunicode._0_8_;
    var_58h._6_2_ = 0;
    var_48h._0_4_ = str.zhTWunicode._8_4_;
    var_28h_2._4_2_ = str.en_US._4_2_;
    acStack_274._0_2_ = str.en_US._4_2_;
    _var_80h = str.zhCNunicode._0_8_;
    var_bp_78h._0_4_ = str.zhCNunicode._8_4_;
    var_70h = str.zhTWunicode._0_8_;
    var_68h._6_2_ = 0;
    var_60h = str.zhCNunicode._0_8_;
    var_58h._0_4_ = str.zhCNunicode._8_4_;
    var_50h = str.zhTWunicode._0_8_;
    piStack_298 = NULL;
    pcStack_280 = NULL;
    var_28h_2._0_4_ = str.en_US._0_4_;
    acStack_278 = str.en_US._0_4_;
    iVar3 = fcn.00015b64(0x18998,&uStack_290,uVar14,&uStack_2a0);
    if (-1 < iVar3) {
        piVar17 = piStack_298;
    }
    else {
        piVar17 = &var_28h_2;
    }
    ppcVar20 = &pcStack_280;
    arg3 = &uStack_2a0;
    iVar4 = fcn.00015b64(0x189b8,&uStack_290,uVar14,arg3);
    if (-1 < iVar4) {
        pcVar10 = pcStack_280;
    }
    else {
        uStack_2a0 = 6;
        pcVar10 = acStack_278;
    }
    pcStack_270 = pcVar10;
    uVar14 = arg3 & 0xffffffffffffff00;
    if (uStack_2a0 != 0) {
        uVar12 = 1;
        do {
            pcVar13 = pcVar10 + uVar15;
            uVar16 = uVar14 + 1;
            uVar14 = CONCAT71(uVar14 >> 8,uVar16);
            uVar15 = uVar16;
            uVar16 = uVar12 + 1;
            if (*pcVar13 != ';') {
                uVar16 = uVar12;
            }
            uVar12 = uVar16;
        } while (uVar15 < uStack_2a0);
    }
    iVar5 = (**(*0x19598 + 0x40))(4,0x400,&piStack_2a8,uVar14,ppcVar20);
    if (iVar5 < 0) {
        (**(*0x19598 + 0x48))(pcVar10);
        piStack_2a8 = piVar17;
    }
    else {
        uVar15 = 0;
        (**(*0x19598 + 0x168))(piStack_2a8,0x400);
        *piStack_2a8 = '\r';
        *(piStack_2a8 + 1) = '\x16';
        *(piStack_2a8 + 4) = uVar16;
        *(piStack_2a8 + 5) = '\0';
        arg1 = piStack_2a8 + 0x16;
        if (uVar16 != 0) {
            pcStack_280 = uVar16;
            cVar18 = '\0';
            do {
                uVar15 = 0;
                pcVar13 = acStack_1b0;
                piStack_298 = arg1;
                (**(*0x19598 + 0x168))(acStack_1b0,0x14);
                for (; *pcVar10 != '\0'; pcVar10 = pcVar10 + 1) {
                    cVar2 = *pcVar10;
                    if (cVar2 == ';') {
                        pcVar10 = pcVar10 + 1;
                        break;
                    }
                    if (cVar2 != ' ') {
                        *pcVar13 = cVar2;
                        pcVar13 = pcVar13 + 1;
                    }
                }
                pcVar13 = acStack_198;
                iVar5 = 0x15;
                pcVar19 = acStack_268;
                do {
                    pcVar6 = acStack_1b0;
                    cVar2 = *pcVar19;
                    pcVar7 = pcVar19;
                    while ((cVar2 != '\0' && (cVar2 == *pcVar6))) {
                        pcVar7 = pcVar7 + 1;
                        pcVar6 = pcVar6 + 1;
                        cVar2 = *pcVar7;
                    }
                    if (*pcVar7 == *pcVar6) {
                        cVar18 = cVar18 + '\x01';
                        uVar15 = 0;
                        cVar2 = *pcVar13;
                        while (cVar2 != '\0') {
                            uVar15 = uVar15 + 1;
                            cVar2 = pcVar13[uVar15];
                        }
                        uStack_2a0 = uVar15;
                        fcn.00018160(arg1,pcVar13,uVar15);
                        *(arg1 + uStack_2a0) = '\0';
                        arg1 = arg1 + uStack_2a0 + 1;
                    }
                    pcVar6 = acStack_1b0;
                    piVar8 = piVar17;
                    cVar2 = acStack_1b0[0];
                    while ((cVar2 != '\0' && (cVar2 == *piVar8))) {
                        pcVar6 = pcVar6 + 1;
                        piVar8 = piVar8 + 1;
                        cVar2 = *pcVar6;
                    }
                    if (*pcVar6 == *piVar8) {
                        *(piStack_2a8 + 0x15) = cVar18;
                    }
                    pcVar19 = pcVar19 + 8;
                    pcVar13 = pcVar13 + 0x10;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
                pcStack_280 = pcStack_280 + -1;
            } while (pcStack_280 != NULL);
            pcStack_280 = NULL;
            pcVar10 = pcStack_270;
        }
        piVar8 = piStack_2a8;
        *arg1 = '\0';
        for (piVar11 = *(piStack_2a8 + 1) + piStack_2a8; *piVar11 != 0; piVar11 = piVar11 + 1) {
        }
        uVar9 = (piVar11 - piStack_2a8) + 2;
        piStack_298 = arg1;
        cVar18 = fcn.00010710(&uStack_1b8,&piStack_298,CONCAT71(uVar15 >> 8,0xd),CONCAT71(uVar14 >> 8,1));
        if (cVar18 == '\0') {
            fcn.00012d78(piVar8,uVar9);
        }
        else {
            uVar1 = *(piStack_298 + 2);
            *(piVar8 + 2) = uVar1;
            fcn.00013020(uVar1,piStack_2a8,uVar9);
        }
        if (-1 < iVar3) {
            (**(*0x19598 + 0x48))(piVar17);
        }
        if (-1 < iVar4) {
            (**(*0x19598 + 0x48))(pcVar10);
        }
    }
    (**(*0x19598 + 0x48))(piStack_2a8);
    return;
}


/* fcn.00012148 @ 0x12148 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00012148(int64_t arg1)

{
    ulong uVar1;
    char cVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint *arg3;
    int64_t *arg4;
    uint uStackX_8;
    uint uStackX_c;
    int64_t aiStackX_10 [3];
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t aiStack_38 [2];
    int64_t var_10h;
    
    uVar1 = *0x19538;
    _uStackX_8 = CONCAT44(arg1 >> 0x20,2);
    aiStackX_10[1] = 0x1bd;
    (**(*0x19598 + 0x40))(4,0x1bd,aiStackX_10);
    arg4 = aiStackX_10 + 1;
    arg3 = &uStackX_8;
    iVar3 = (**(*0x195a0 + 0x48))(L"SLOTS DATA",0x18230,arg3,arg4,aiStackX_10[0]);
    if (iVar3 < 0) {
        if (iVar3 != -0x7ffffffffffffff2) goto code_r0x00012234;
    }
    else if ((iVar3 != -0x7ffffffffffffff2) && (iVar3 = *0x19548, uVar4 = 0, *(*0x19548 + 0xc) != '\0')) {
        do {
            uVar5 = uVar4 + 1;
            aiStackX_10[2] = uVar1;
            arg4 = CONCAT71(arg4 >> 8,uVar5);
            arg3 = CONCAT71(arg3 >> 8,9);
            cVar2 = fcn.00010710(aiStackX_10 + 2,aiStack_38,arg3,arg4);
            if (cVar2 != '\0') {
                arg3 = CONCAT71(arg3 >> 8,uVar4);
                arg4 = uVar4;
                *(aiStack_38[0] + 7) = *(arg4 + aiStackX_10[0]);
                *(aiStack_38[0] + 0xf) = *(arg4 + aiStackX_10[0] + 5);
                fcn.00011f80(aiStack_38[0],aiStackX_10[0],arg3);
                iVar3 = *0x19548;
            }
            uVar4 = uVar5;
        } while (uVar5 < *(iVar3 + 0xc));
    }
    iVar3 = 0;
code_r0x00012234:
    (**(*0x19598 + 0x48))(aiStackX_10[0]);
    return iVar3;
}


/* fcn.00012250 @ 0x12250 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00012250(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint *puVar5;
    uint8_t *puVar6;
    uint8_t uVar7;
    int64_t *piVar8;
    uint uStackX_8;
    uint uStackX_c;
    int64_t aiStackX_10 [2];
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t aiStack_28 [2];
    int64_t var_10h;
    
    iVar1 = *0x19538;
    _uStackX_8 = CONCAT44(arg1 >> 0x20,2);
    aiStackX_10[1] = 1;
    (**(*0x19598 + 0x40))(4,1,aiStackX_10);
    piVar8 = aiStackX_10 + 1;
    puVar5 = &uStackX_8;
    iVar3 = (**(*0x195a0 + 0x48))(L"ONBOARD DEV DATA",0x18230,puVar5,piVar8,aiStackX_10[0]);
    if (iVar3 < 0) {
        if (iVar3 != -0x7ffffffffffffff2) goto code_r0x0001232d;
    }
    else if (iVar3 != -0x7ffffffffffffff2) {
        var_28h = iVar1;
        cVar2 = fcn.00010710(&var_28h,aiStack_28,CONCAT71(puVar5 >> 8,10),CONCAT71(piVar8 >> 8,1));
        if (cVar2 != '\0') {
            uVar7 = 0;
            puVar6 = aiStack_28[0] + 4;
            if (*(*0x19548 + 0xd) != '\0') {
                do {
                    *puVar6 = *puVar6 & 0x7f;
                    uVar4 = uVar7;
                    uVar7 = uVar7 + 1;
                    *puVar6 = *puVar6 | *(uVar4 + aiStackX_10[0]);
                    puVar6 = puVar6 + 2;
                } while (uVar7 < *(*0x19548 + 0xd));
            }
        }
    }
    iVar3 = 0;
code_r0x0001232d:
    (**(*0x19598 + 0x48))(aiStackX_10[0]);
    return iVar3;
}


/* fcn.00014b9c @ 0x14b9c */

void fcn.00014b9c(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014bf8(noname_0,noname_1,0,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014bf8 @ 0x14bf8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00014bf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00014c53;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00014c53:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00014b78(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00014b4c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x18cd4;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x00014fdd:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x18cd4;
                }
                else {
                    pcVar9 = 0x18cd8;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00014d9c:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x00014f3f;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00014f56;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00014f3f;
                                }
                                goto code_r0x00014f56;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x00014f3f:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00014d9c;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x00014d9c;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00014f56;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00014f3f;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00014f56:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00015924(&var_68h_2,0x26,0,0x18c68);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00014fdd;
                                if (uStack_a8 == 0x53) goto code_r0x000151ec;
                                if (uStack_a8 == 0x58) goto code_r0x000152e2;
                                if (uStack_a8 == 0x61) goto code_r0x000151f5;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00014d81;
                                }
                                if (uStack_a8 != 100) goto code_r0x00014d7d;
                                goto code_r0x000152f9;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x18cd4;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x000154f4;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x18d6b;
                                    goto code_r0x000152a9;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000152a9:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x000154f4;
                            }
                            fcn.00015924(&var_68h_2,0x26,0,0x18ccc);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x000151ec:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x000151f5:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x000154f4;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00014d7d;
                                    goto code_r0x000152e6;
                                }
                                goto code_r0x000152eb;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x000154f4;
                            }
                            fcn.00015924(&var_68h_2,0x26,0,0x18cb0);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x000154f4;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x000152e2:
                    uVar5 = uVar5 | 0x20;
code_r0x000152e6:
                    uVar5 = uVar5 | 0x80;
code_r0x000152eb:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x000152f9:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001533b;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x0001533b:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x000153c3:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000153c3;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF4l"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x00014d7d:
                    pcVar9 = &uStack_a8;
code_r0x00014d81:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x000154f4:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014bc4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014bc4(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014bc4(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014bc4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.0001240c @ 0x1240c */

ulong fcn.0001240c(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    char cVar1;
    int16_t *piVar2;
    ulong uVar3;
    int64_t *piVar4;
    unkbyte7 Var5;
    int64_t aiStackX_8 [4];
    uint32_t in_stack_00000028;
    int64_t iStack_18;
    int64_t iStack_10;
    
    Var5 = arg2 >> 8;
    piVar4 = &iStack_18;
    aiStackX_8[0] = arg1;
    (**(*0x19598 + 0x40))(4,0x1000,piVar4);
    cVar1 = fcn.00010710(aiStackX_8,&iStack_10,CONCAT71(piVar4 >> 8,0x2d),CONCAT71(Var5,1));
    if (cVar1 == '\0') {
        uVar3 = 0x800000000000000e;
    }
    else {
        for (piVar2 = *(iStack_10 + 1) + iStack_10; *piVar2 != 0; piVar2 = piVar2 + 1) {
        }
        fcn.00018160(iStack_18,iStack_10,(piVar2 - iStack_10) + 2);
        fcn.00012348(iStack_18,CONCAT71(iStack_10 >> 8,arg2),in_stack_00000028);
        for (piVar2 = *(iStack_18 + 1) + iStack_18; *piVar2 != 0; piVar2 = piVar2 + 1) {
        }
        uVar3 = fcn.00013020(*(iStack_18 + 2),iStack_18,CONCAT62(piVar2 >> 0x10,piVar2 - iStack_18) + 2);
    }
    (**(*0x19598 + 0x48))(iStack_18);
    return uVar3;
}


/* fcn.00015c18 @ 0x15c18 */

int64_t fcn.00015c18(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = 0x18640;
    piVar2 = piVar1;
    if (((arg1 & 7) != 0) && ((arg1 & 7) == 0)) {
        iVar4 = 8;
        do {
            if (*piVar2 != *piVar3) break;
            piVar2 = piVar2 + 1;
            piVar3 = piVar3 + 1;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *piVar3)); piVar2 = piVar2 + 1) {
        piVar3 = piVar3 + 1;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *piVar3) break;
        piVar2 = piVar2 + 1;
        piVar3 = piVar3 + 1;
    }
    return *piVar2 - *piVar3;
}


/* fcn.00015ab8 @ 0x15ab8 */

void fcn.00015ab8(int64_t arg1)

{
    if (arg1 == '\0') {
        if (*0x18622 == 0xff) {
            return;
        }
        *0xc0000080 = *0x18622;
        *0xc0000085 = *0x18621;
        *0xc0000086 = *0x18620;
    }
    else {
        *0x18622 = *0xc0000080;
        *0xc0000080 = *0xc0000080 | 0x30;
        *0x18621 = *0xc0000085;
        *0x18620 = *0xc0000086;
        *0xc0000085 = *0xc0000085 | 0x33;
        *0xc0000086 = *0xc0000086 | 0x33;
    }
    return;
}


/* fcn.00015f20 @ 0x15f20 */

int64_t fcn.00015f20(void)

{
    if (*0x195f0 == 0) {
        (**(*0x19570 + 0x140))(0x18280,0,0x195f0);
    }
    return *0x195f0;
}


/* fcn.00014170 @ 0x14170 */

void fcn.00014170(uint32_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    piVar1 = 0x1a340;
    if (*0x1a340 != -1) {
        do {
            if (*piVar1 == arg1) break;
            if (0x1ff < uVar2) {
                return;
            }
            piVar1 = piVar1 + 5;
            uVar2 = uVar2 + 1;
        } while (*piVar1 != -1);
        if (0x1ff < uVar2) {
            return;
        }
    }
    *piVar1 = arg1;
    *(piVar1 + 1) = arg2;
    return;
}


/* fcn.00010804 @ 0x10804 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.00010804(int64_t arg1)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    char cVar4;
    char cVar5;
    char *pcVar6;
    int64_t iVar7;
    uint32_t in_R8D;
    unkbyte7 Var8;
    char cVar9;
    int64_t iVar10;
    int64_t var_fh;
    char cStackX_10;
    char cStackX_18;
    char cStackX_20;
    int8_t var_6fh;
    int8_t var_77h;
    int8_t var_7fh;
    uint uStack_e8;
    uint uStack_e4;
    uint uStack_e0;
    uint uStack_dc;
    uint uStack_d8;
    uint uStack_d4;
    uint uStack_d0;
    uint uStack_cc;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint uStack_b8;
    uint uStack_b4;
    uint uStack_b0;
    uint uStack_ac;
    uint uStack_a8;
    uint uStack_a4;
    uint uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uchar auStack_88 [3];
    int32_t var_7dh;
    int32_t var_79h;
    int32_t var_75h;
    int32_t var_71h;
    int32_t var_6dh;
    int32_t var_69h;
    int32_t var_65h;
    int32_t var_61h;
    int32_t var_5dh;
    int32_t var_59h;
    int32_t var_55h;
    int32_t var_51h;
    int32_t var_4dh;
    int32_t var_49h;
    int32_t var_45h;
    int32_t var_41h;
    int32_t var_3dh;
    int32_t var_39h;
    int32_t var_35h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int32_t var_25h;
    int32_t var_21h;
    int32_t var_1dh;
    int32_t var_19h;
    int32_t var_15h;
    int32_t var_11h;
    int32_t var_dh;
    int16_t var_9h;
    
    uStack_e8 = 0x30b0102;
    cStackX_20 = '\0';
    cStackX_10 = '\0';
    uStack_e4 = 0x7012301;
    iVar10 = 0;
    cStackX_18 = '\0';
    iVar7 = 0;
    uStack_e0 = 0x127011a;
    cVar9 = '\0';
    uStack_dc = 0x23011a10;
    bVar2 = false;
    uStack_d8 = 0x21a0702;
    bVar3 = false;
    uStack_d4 = 0x1a100227;
    var_61h._1_2_ = 0xffff;
    pcVar6 = &uStack_e8 + 3;
    uStack_d0 = 0x7012302;
    uStack_cc = 0x127011b;
    uStack_c8 = 0x23011b12;
    uStack_c4 = 0x21b0702;
    uStack_c0 = 0x1b120227;
    uStack_bc = 0x7022302;
    uStack_b8 = 0x327031b;
    uStack_b4 = 0x23031b12;
    uStack_b0 = 0x11c0701;
    uStack_ac = 0x1c070223;
    uStack_a8 = 0x7012302;
    uStack_a4 = 0x223031c;
    uStack_a0 = 0x23041c07;
    uStack_9c = 0x11d0701;
    uStack_98 = 0x1d140127;
    uStack_94 = 0x7022301;
    uStack_90 = 0x227021d;
    uStack_8c = 0x23021d14;
    _auStack_88 = 0x31d0701;
    stack0xffffffffffffff7c = 0x1d140127;
    stack0xffffffffffffff80 = 0x7022303;
    stack0xffffffffffffff84 = 0x227041d;
    stack0xffffffffffffff88 = 0x23041d14;
    stack0xffffffffffffff8c = 0x51d0701;
    stack0xffffffffffffff90 = 0x1d140127;
    stack0xffffffffffffff94 = 0xffffff05;
    do {
        cVar1 = pcVar6[-2];
        if ((cVar1 == -1) && (pcVar6[-3] == -1)) {
            return;
        }
        Var8 = arg1 >> 8;
        if ((*pcVar6 == cStackX_20) && (pcVar6[1] == cVar9)) {
code_r0x0001098a:
            if (bVar2) {
                cVar4 = pcVar6[-3];
                in_R8D = CONCAT31(in_R8D >> 8,cVar4);
                if ((cVar4 != cStackX_10) || (cVar1 != cStackX_18)) {
                    stack0xffffffffffffffa8 = 0;
                    bVar3 = false;
                    unique0x10000182 = arg1;
                    cVar5 = fcn.00010710(&var_49h + 1,&var_51h + 1,in_R8D,CONCAT71(Var8,cVar1));
                    iVar7 = stack0xffffffffffffffa8;
                    cStackX_10 = cVar4;
                    cStackX_18 = cVar1;
                    if (cVar5 == '\0') goto code_r0x000109e8;
                    bVar3 = true;
                }
                if (((bVar3) && (iVar10 != 0)) && (iVar7 != 0)) {
                    *(pcVar6[-1] + iVar7) = *(iVar10 + 2);
                }
            }
        }
        else {
            cStackX_20 = *pcVar6;
            cVar9 = pcVar6[1];
            stack0xffffffffffffffa8 = 0;
            in_R8D = CONCAT31(in_R8D >> 8,cStackX_20);
            bVar2 = false;
            unique0x1000017a = arg1;
            cVar4 = fcn.00010710(&var_49h + 1,&var_51h + 1,in_R8D,CONCAT71(Var8,cVar9));
            iVar10 = stack0xffffffffffffffa8;
            if (cVar4 != '\0') {
                bVar2 = true;
                goto code_r0x0001098a;
            }
        }
code_r0x000109e8:
        pcVar6 = pcVar6 + 5;
    } while( true );
}


/* fcn.00012f64 @ 0x12f64 */

ulong fcn.00012f64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int16_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uStack_18;
    int64_t iStack_10;
    
    uStack_18 = *0x19538;
    cVar1 = fcn.00010710(&uStack_18,&iStack_10,CONCAT71(arg3 >> 8,arg1),CONCAT71(arg4 >> 8,arg2));
    iVar4 = *0x19598;
    if (cVar1 == '\0') {
        uVar5 = 0x8000000000000002;
    }
    else {
        for (piVar3 = *(iStack_10 + 1) + iStack_10; *piVar3 != 0; piVar3 = piVar3 + 1) {
        }
        iVar2 = (piVar3 - iStack_10) + 2;
        *arg4 = iVar2;
        iVar4 = (**(iVar4 + 0x40))(4,iVar2,arg3);
        if (iVar4 == 0) {
            fcn.00018160(*arg3,iStack_10,*arg4);
            return 0;
        }
        uVar5 = 0x8000000000000009;
    }
    *arg3 = 0;
    *arg4 = 0;
    return uVar5;
}


/* fcn.0001110c @ 0x1110c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_2ch

int64_t fcn.0001110c(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    char cVar2;
    ushort uVar3;
    char *pcVar4;
    bool bVar5;
    uint8_t uVar6;
    uchar uVar7;
    int iVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int *piVar11;
    int16_t *piVar12;
    uint64_t uVar13;
    uint8_t uVar14;
    uint64_t uVar15;
    uint32_t *puVar16;
    unkbyte7 Var18;
    uint16_t *puVar17;
    uint16_t uVar19;
    int64_t iVar20;
    int16_t iVar21;
    char *pcVar22;
    uint64_t uVar23;
    unkbyte7 Var25;
    ushort *puVar24;
    int64_t in_R9;
    uchar *puVar26;
    char *pcVar27;
    uint16_t uVar28;
    int64_t iVar29;
    char *pcVar30;
    uint32_t *puStackX_8;
    int64_t iStackX_10;
    uint32_t *puStackX_18;
    int64_t iStackX_20;
    int64_t var_f0h;
    uint32_t var_8f0h;
    int64_t var_9f0h;
    int64_t var_1250h;
    int64_t var_1258h;
    int64_t *piStack_1318;
    int64_t *piStack_1310;
    uint uStack_1308;
    uint uStack_1304;
    uint32_t *puStack_1300;
    int64_t iStack_12f8;
    int64_t iStack_12f0;
    ushort *puStack_12e8;
    ushort *puStack_12e0;
    int64_t iStack_12d8;
    int64_t iStack_12d0;
    int64_t iStack_12c8;
    char *pcStack_12c0;
    uint32_t uStack_12b8;
    int64_t aiStack_12b4 [3];
    uint32_t uStack_1298;
    int64_t aiStack_1294 [6];
    uchar auStack_1264 [28];
    char acStack_1248 [256];
    int64_t aiStack_1148 [256];
    char acStack_948 [256];
    int64_t aiStack_848 [248];
    int64_t var_80h;
    uint32_t var_bp_60h;
    int64_t var_5ch;
    int64_t var_bp_2ch;
    uint32_t var_bp_10h;
    
    uVar13 = 0;
    pcStack_12c0 = *0x19538;
    puStack_1300 = NULL;
    bVar5 = false;
    puStackX_18 = NULL;
    iStackX_20 = 0;
    iStack_12d8 = 0;
    puStackX_8 = NULL;
    piStack_1310 = 0x41c0f1abfd44820b;
    uStack_1308 = 0x550c4eae;
    uStack_1304 = 0xbdb96e55;
    iStack_12f0 = 0;
    piStack_1318 = NULL;
    iStackX_10 = arg2;
    fcn.0001810e(&uStack_12b8,0x1c,0);
    fcn.0001810e(&uStack_1298,0x44,0);
    (**(*0x19598 + 0x40))(4,2,&puStack_12e8);
    (**(*0x19598 + 0x40))(4,0x36,&puStack_1300);
    *puStack_12e8 = 0;
    *puStack_1300 = 0;
    (**(*0x19598 + 0x40))(4,2,&puStack_12e0);
    (**(*0x19598 + 0x40))(4);
    *puStack_12e0 = 0;
    *puStackX_18 = 0;
    fcn.0001810e(0x1b760,0x34,0);
    fcn.0001810e(acStack_948,0x900,0);
    fcn.0001810e(acStack_1248,0x900,0);
    (**(*0x19598 + 0x40))(4,(*0x19548)[0xf] * 2,&iStack_12c8);
    (**(*0x19598 + 0x40))(4,(*0x19548)[0xf] * 0x4d,&iStack_12d8);
    if ((*0x19548)[0xf] != '\0') {
        uVar15 = uVar13;
        uVar23 = uVar13;
        do {
            *(iStack_12c8 + uVar23 * 2) = 0;
            uVar23 = uVar23 + 1;
            *(uVar15 + iStack_12d8) = 0;
            uVar15 = uVar15 + 0x4d;
        } while (uVar23 < (*0x19548)[0xf]);
    }
    (**(*0x19598 + 0x40))(4,6,&iStack_12d0);
    (**(*0x19598 + 0x40))(4,0xdb,&puStackX_8);
    uVar23 = uVar13;
    uVar15 = uVar13;
    do {
        *(uVar23 + iStack_12d0) = 0;
        uVar23 = uVar23 + 2;
        *(uVar15 + puStackX_8) = 0;
        uVar15 = uVar15 + 0x49;
    } while (uVar23 < 6);
    iVar10 = fcn.00010f50(&piStack_1310,&iStack_12f0,&piStack_1318);
    if (-1 < iVar10) {
        piVar11 = iStack_12f0 + 8;
        piVar1 = piStack_1318 + iStack_12f0;
        if (piVar11 < piVar1) {
            do {
                if (*piVar11 == -1) break;
                if ((*piVar11 & 0x2000000) == 0) {
                    if ((*piVar11 & 0x4000000) != 0) {
                        fcn.00012e18(*(piVar11 + 7),piVar11 + 9,*(piVar11 + 5));
                        goto code_r0x000118e8;
                    }
                    uVar19 = *(piVar11 + 5);
                    iVar10 = (**(*0x19598 + 0x40))(4,uVar19,&iStackX_20);
                    if (iVar10 == 0) {
                        pcVar22 = piVar11 + 9;
                        uVar15 = uVar19;
                        pcVar27 = pcVar22;
                        fcn.00018160(iStackX_20,pcVar22,uVar15);
                        cVar2 = *piVar11;
                        Var18 = pcVar27 >> 8;
                        Var25 = uVar15 >> 8;
                        if (cVar2 == '\0') {
                            uVar6 = fcn.00010a14(0,CONCAT71(Var18,*(piVar11 + 1)),CONCAT71(Var25,1));
                            if (uVar6 != 0xff) {
                                bVar5 = true;
                                aiStack_12b4[uVar6] = iStackX_20;
                                uStack_12b8 = uStack_12b8 | 1 << (uVar6 & 0x1f);
                            }
                            if (*(piVar11 + 1) == '\b') {
                                *0x19558 = 1;
                            }
                        }
                        else if (cVar2 == '\x01') {
                            if (*(piVar11 + 1) == '\b') {
                                fcn.00018160(auStack_1264,pcVar22,*(piVar11 + 5));
                                uStack_1298 = uStack_1298 | 0x10000;
                                goto code_r0x000115b7;
                            }
                            uVar6 = fcn.00010a14(1,CONCAT71(Var18,*(piVar11 + 1)),CONCAT71(Var25,1));
                            if (uVar6 != 0xff) {
                                aiStack_1294[uVar6] = iStackX_20;
                                uStack_1298 = uStack_1298 | 1 << (uVar6 & 0x1f);
                                goto code_r0x000118e8;
                            }
                        }
                        else if (cVar2 == '\x02') {
                            if (**0x19548 != '\0') {
                                uVar15 = uVar13;
                                while (puStack_12e8[uVar15] != 0) {
                                    if ((*(piVar11 + 7) == puStack_12e8[uVar15]) || (uVar15 = uVar15 + 1, uVar15 != 0))
                                    goto code_r0x0001182c;
                                }
                                puStack_12e8[uVar15] = *(piVar11 + 7);
code_r0x0001182c:
                                if (uVar15 == 0) {
                                    uVar3 = *(piVar11 + 7);
                                    *(puStack_1300 + 0xd) = uVar3;
                                    uVar6 = fcn.00010a14(CONCAT71(uVar3 >> 8,2),
                                                         CONCAT71(puStack_12e8 >> 8,*(piVar11 + 1)),CONCAT71(Var25,1)
                                                        );
                                    if (uVar6 != 0xff) {
                                        *(puStack_1300 + uVar6 * 2 + 1) = iStackX_20;
                                        puVar16 = puStack_1300;
code_r0x00011886:
                                        *puVar16 = *puVar16 | 1 << (uVar6 & 0x1f);
                                        goto code_r0x000118e8;
                                    }
                                }
                            }
                        }
                        else if (cVar2 == '\x03') {
                            pcVar27 = *(piVar11 + 7);
                            uVar7 = fcn.000106b4(0,*(piVar11 + 7));
                            if ((*0x19548)[1] != '\0') {
                                in_R9 = 0;
                                uVar15 = uVar13;
                                while (puStack_12e0[uVar15] != 0) {
                                    if ((pcVar27 == puStack_12e0[uVar15]) || (uVar15 = uVar15 + 1, uVar15 != 0))
                                    goto code_r0x000116c7;
                                }
                                puStack_12e0[uVar15] = pcVar27;
code_r0x000116c7:
                                if (uVar15 == 0) {
                                    iVar10 = 0;
                                    puVar16 = *(piVar11 + 7);
                                    *(puStackX_18 + 0x31) = *(piVar11 + 7);
                                    if (*(piVar11 + 1) == '\x05') {
                                        puVar24 = NULL;
                                        puVar16 = puStackX_18 + 0xb;
                                        pcVar27 = pcVar22;
                                        fcn.00018160(puVar16,pcVar22,1);
                                        *puStackX_18 = *puStackX_18 | 0x10000;
code_r0x0001173e:
                                        bVar5 = true;
                                    }
                                    else {
                                        puVar24 = puStack_12e0;
                                        if (*(piVar11 + 1) == '\r') {
                                            puVar24 = NULL;
                                            puVar16 = puStackX_18 + 0x2d;
                                            pcVar27 = pcVar22;
                                            fcn.00018160(puVar16,pcVar22,4);
                                            *puStackX_18 = *puStackX_18 | 0x20000;
                                            goto code_r0x0001173e;
                                        }
                                    }
                                    in_R9 = 0;
                                    if (*(piVar11 + 1) == '\x11') {
                                        puVar24 = NULL;
                                        puVar16 = puStackX_18 + 0xd;
                                        pcVar27 = pcVar22;
                                        fcn.00018160(puVar16,pcVar22,1);
                                        bVar5 = true;
                                        *puStackX_18 = *puStackX_18 | 0x80000;
                                    }
                                    if (*(piVar11 + 1) == '\x12') {
                                        fcn.00018160(puStackX_18 + 0x33,pcVar22,1);
                                        puVar16 = puStackX_18;
code_r0x0001153b:
                                        *(iVar10 + puVar16) = *(iVar10 + puVar16) | 0x40000;
code_r0x000115b7:
                                        bVar5 = true;
                                    }
                                    else {
                                        uVar6 = fcn.00010a14(CONCAT71(puVar16 >> 8,3),
                                                             CONCAT71(pcVar27 >> 8,*(piVar11 + 1)),
                                                             CONCAT71(puVar24 >> 8,uVar7));
                                        if (uVar6 != 0xff) {
                                            *(puStackX_18 + uVar6 * 2 + 1) = iStackX_20;
                                            puVar16 = puStackX_18;
                                            goto code_r0x00011886;
                                        }
                                    }
                                }
                            }
                        }
                        else if (cVar2 == '\x04') {
                            if ((*0x19548)[2] != '\0') {
                                uVar6 = fcn.00010a14(4,CONCAT71(Var18,*(piVar11 + 1)),CONCAT71(Var25,1));
                                if (uVar6 != 0xff) {
                                    *(uVar6 * 8 + 0x1b764) = iStackX_20;
                                    *0x1b760 = *0x1b760 | 1 << (uVar6 & 0x1f);
                                    goto code_r0x000118e8;
                                }
                            }
                        }
                        else if (cVar2 == '\v') {
                            if ((*0x19548)[3] != '\0') {
                                iVar8 = *(piVar11 + 1) - 1;
                                aiStack_848[iVar8] = iStackX_20;
                                acStack_948[iVar8] = '\x01';
                                goto code_r0x000118e8;
                            }
                        }
                        else if (cVar2 == '\f') {
                            if ((*0x19548)[4] != '\0') {
                                iVar8 = *(piVar11 + 1) - 1;
                                aiStack_1148[iVar8] = iStackX_20;
                                acStack_1248[iVar8] = '\x01';
                                goto code_r0x000115b7;
                            }
                        }
                        else if (cVar2 == '\'') {
                            uVar15 = uVar13;
                            while (iVar21 = *(iStack_12d0 + uVar15 * 2), iVar21 != 0) {
                                if ((*(piVar11 + 7) == iVar21) || (uVar15 = uVar15 + 1, 2 < uVar15))
                                goto code_r0x00011469;
                            }
                            *(iStack_12d0 + uVar15 * 2) = *(piVar11 + 7);
code_r0x00011469:
                            if (uVar15 < 3) {
                                iVar10 = uVar15 * 0x49;
                                *(iVar10 + 0x47 + puStackX_8) = *(piVar11 + 7);
                                uVar6 = *(piVar11 + 1);
                                if (uVar6 == 4) {
                                    fcn.00018160(puStackX_8 + iVar10 + 0x3c,pcVar22,1);
                                    *(iVar10 + puStackX_8) = *(iVar10 + puStackX_8) | 0x10000;
                                    goto code_r0x000115b7;
                                }
                                if (uVar6 < 5) goto code_r0x000115b7;
                                if (uVar6 < 0xc) {
                                    *(iVar10 + (uVar6 - 5) * 8 + 4 + puStackX_8) = iStackX_20;
                                    *(iVar10 + puStackX_8) = *(iVar10 + puStackX_8) | 1 << (uVar6 - 5 & 0x1f);
                                    goto code_r0x000115b7;
                                }
                                if (uVar6 == 0xc) {
                                    *(iVar10 + 0x3d + puStackX_8) = *pcVar22;
                                    *(iVar10 + puStackX_8) = *(iVar10 + puStackX_8) | 0x20000;
                                    goto code_r0x000115b7;
                                }
                                if (uVar6 != 0xe) {
                                    if (uVar6 == 0x10) {
                                        *(iVar10 + 0x41 + puStackX_8) = *pcVar22;
                                        *(iVar10 + puStackX_8) = *(iVar10 + puStackX_8) | 0x80000;
                                    }
                                    else if (uVar6 == 0x12) {
                                        *(iVar10 + 0x43 + puStackX_8) = *pcVar22;
                                        *(iVar10 + puStackX_8) = *(iVar10 + puStackX_8) | 0x100000;
                                    }
                                    else if (uVar6 == 0x14) {
                                        *(iVar10 + 0x45 + puStackX_8) = *pcVar22;
                                        *(iVar10 + puStackX_8) = *(iVar10 + puStackX_8) | 0x200000;
                                    }
                                    goto code_r0x000115b7;
                                }
                                *(iVar10 + 0x3f + puStackX_8) = *pcVar22;
                                puVar16 = puStackX_8;
                                goto code_r0x0001153b;
                            }
                            goto code_r0x000115b7;
                        }
                    }
                }
                else {
                    fcn.00012e5c(*(piVar11 + 7));
code_r0x000118e8:
                    bVar5 = true;
                }
                if ((*piVar11 & 0x2000000) == 0) {
                    piVar11 = *(piVar11 + 5) + piVar11;
                }
                piVar11 = piVar11 + 9;
            } while (piVar11 < piVar1);
            if (bVar5) {
                (**(*0x19598 + 0x40))(4,iStackX_10);
                fcn.0001810e(iStack_12f8,iStackX_10,0);
                iVar10 = iStack_12f8;
                pcVar22 = *0x19538;
                do {
                    uVar13 = 0;
                    cVar2 = *pcVar22;
                    iVar21 = pcVar22;
                    if (cVar2 == '\0') {
                        for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                        }
                        uVar13 = (piVar12 - iVar21) + 2;
                        fcn.00018160(iVar10,pcVar22,uVar13);
                        uVar9 = &uStack_12b8;
code_r0x00011e30:
                        fcn.00010b78(uVar9,iVar10,CONCAT71(uVar13 >> 8,1));
                    }
                    else {
                        if (cVar2 == '\x01') {
                            for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                            }
                            uVar13 = (piVar12 - iVar21) + 2;
                            fcn.00018160(iVar10,pcVar22,uVar13);
                            if ((uStack_1298 & 0x10000) != 0) {
                                puVar26 = iVar10 + 8;
                                iVar29 = 0x10;
                                iVar20 = -puVar26;
                                do {
                                    *puVar26 = puVar26[auStack_1264 + iVar20];
                                    puVar26 = puVar26 + 1;
                                    iVar29 = iVar29 + -1;
                                    uVar13 = 0;
                                } while (iVar29 != 0);
                            }
                            uVar9 = &uStack_1298;
                            goto code_r0x00011e30;
                        }
                        if (cVar2 == '\x02') {
                            if (**0x19548 != '\0') {
                                puVar16 = puStack_1300 + 0xd;
                                do {
                                    if (*(pcVar22 + 2) == *puVar16) break;
                                    uVar13 = uVar13 + 1;
                                    puVar16 = puVar16 + 0x36;
                                } while (uVar13 == 0);
                                if (uVar13 != 0) {
                                    for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                    }
                                    goto code_r0x00011a04;
                                }
                                fcn.00010d90(puStack_1300,pcVar22,iVar10);
                            }
                        }
                        else if (cVar2 == '\x03') {
                            if ((*0x19548)[1] != '\0') {
                                uVar19 = *(pcVar22 + 2);
                                uVar7 = fcn.000106b4(0,uVar19);
                                puVar17 = puStackX_18 + 0x31;
                                do {
                                    if (uVar19 == *puVar17) break;
                                    uVar13 = uVar13 + 1;
                                    puVar17 = puVar17 + 0x35;
                                } while (uVar13 == 0);
                                if (uVar13 != 0) {
                                    for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                    }
                                    goto code_r0x00011a04;
                                }
                                in_R9 = CONCAT71(in_R9 >> 8,uVar7);
                                fcn.00010df0(puStackX_18,pcVar22,iVar10,in_R9);
                            }
                        }
                        else if (cVar2 == '\x04') {
                            if ((*0x19548)[2] != '\0') {
                                for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                }
                                uVar13 = (piVar12 - iVar21) + 2;
                                fcn.00018160(iVar10,pcVar22,uVar13);
                                uVar9 = 0x1b760;
                                goto code_r0x00011e30;
                            }
                        }
                        else {
                            if (cVar2 == '\v') {
                                if ((*0x19548)[3] == '\0') goto code_r0x00011e3b;
                                uVar6 = pcVar22[4];
                                uVar13 = 0;
                                if (uVar6 != 0) {
code_r0x00011b9a:
                                    if (acStack_948[uVar13] != '\x01') goto code_r0x00011ba7;
                                    uVar9 = pcVar22[1];
                                    fcn.00018160(iVar10,pcVar22,uVar9);
                                    piStack_1310 = aiStack_848;
                                    piStack_1318 = uVar6;
                                    pcVar30 = pcVar22 + uVar9;
                                    puVar26 = iVar10 + uVar9;
                                    pcVar27 = acStack_948;
                                    do {
                                        iVar29 = 0;
                                        cVar2 = *pcVar30;
                                        iVar20 = iVar29;
                                        while (cVar2 != '\0') {
                                            iVar20 = iVar20 + 1;
                                            cVar2 = pcVar30[iVar20];
                                        }
                                        uVar19 = iVar20 + 1;
                                        if (*pcVar27 == '\0') {
                                            fcn.00018160(puVar26,pcVar30,uVar19);
                                            uVar28 = uVar19;
                                        }
                                        else {
                                            pcVar4 = *piStack_1310;
                                            cVar2 = *pcVar4;
                                            while (cVar2 != '\0') {
                                                iVar29 = iVar29 + 1;
                                                cVar2 = pcVar4[iVar29];
                                            }
                                            uVar28 = iVar29 + 1;
                                            fcn.00018160(puVar26,pcVar4,uVar28);
                                        }
                                        piStack_1310 = piStack_1310 + 1;
                                        pcVar30 = pcVar30 + uVar19;
                                        pcVar27 = pcVar27 + 1;
                                        puVar26 = puVar26 + uVar28;
                                        piStack_1318 = piStack_1318 + -1;
                                    } while (piStack_1318 != NULL);
                                    goto code_r0x00011c78;
                                }
code_r0x00011baf:
                                for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                }
                            }
                            else if (cVar2 == '\f') {
                                if ((*0x19548)[4] == '\0') goto code_r0x00011e3b;
                                uVar6 = pcVar22[4];
                                uVar13 = 0;
                                if (uVar6 != 0) {
code_r0x00011a92:
                                    if (acStack_1248[uVar13] != '\x01') goto code_r0x00011a9c;
                                    uVar9 = pcVar22[1];
                                    fcn.00018160(iVar10,pcVar22,uVar9);
                                    piStack_1318 = aiStack_1148;
                                    piStack_1310 = uVar6;
                                    pcVar30 = pcVar22 + uVar9;
                                    puVar26 = uVar9 + iVar10;
                                    pcVar27 = acStack_1248;
                                    do {
                                        iVar29 = 0;
                                        cVar2 = *pcVar30;
                                        iVar20 = iVar29;
                                        while (cVar2 != '\0') {
                                            iVar20 = iVar20 + 1;
                                            cVar2 = pcVar30[iVar20];
                                        }
                                        uVar19 = iVar20 + 1;
                                        if (*pcVar27 == '\0') {
                                            fcn.00018160(puVar26,pcVar30,uVar19);
                                            uVar28 = uVar19;
                                        }
                                        else {
                                            pcVar4 = *piStack_1318;
                                            cVar2 = *pcVar4;
                                            while (cVar2 != '\0') {
                                                iVar29 = iVar29 + 1;
                                                cVar2 = pcVar4[iVar29];
                                            }
                                            uVar28 = iVar29 + 1;
                                            fcn.00018160(puVar26,pcVar4,uVar28);
                                        }
                                        piStack_1318 = piStack_1318 + 1;
                                        pcVar30 = pcVar30 + uVar19;
                                        pcVar27 = pcVar27 + 1;
                                        puVar26 = puVar26 + uVar28;
                                        piStack_1310 = piStack_1310 - 1;
                                    } while (piStack_1310 != NULL);
                                    piStack_1310 = NULL;
code_r0x00011c78:
                                    *puVar26 = 0;
                                    goto code_r0x00011e3b;
                                }
code_r0x00011aa4:
                                for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                }
                            }
                            else if (cVar2 == '\'') {
                                piVar12 = puStackX_8 + 0x47;
                                do {
                                    if (*(pcVar22 + 2) == *piVar12) break;
                                    uVar13 = uVar13 + 1;
                                    piVar12 = piVar12 + 0x49;
                                } while (uVar13 < 3);
                                if (uVar13 < 3) {
                                    fcn.00010e94(uVar13 * 0x49 + puStackX_8,pcVar22,iVar10);
                                    goto code_r0x00011e3b;
                                }
                                for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                }
                            }
                            else {
                                for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                }
                            }
code_r0x00011a04:
                            fcn.00018160(iVar10,pcVar22,(piVar12 - iVar21) + 2);
                        }
                    }
code_r0x00011e3b:
                    for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                    }
                    pcVar22 = pcVar22 + ((piVar12 - iVar21) + 2);
                    for (piVar12 = *(iVar10 + 1) + iVar10; *piVar12 != 0; piVar12 = piVar12 + 1) {
                    }
                    iVar10 = iVar10 + (piVar12 - iVar10) + 2;
                } while (*pcVar22 != '\x7f');
                for (piVar12 = pcVar22 + pcVar22[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                }
                fcn.00018160(iVar10,pcVar22,(piVar12 - pcVar22) + 2);
                fcn.00018160(pcStack_12c0,iStack_12f8,iStackX_10);
                (**(*0x19598 + 0x48))(iStack_12f8);
            }
        }
        iVar10 = 0;
        (**(*0x19598 + 0x48))(iStack_12f0);
    }
    (**(*0x19598 + 0x48))(puStack_12e8);
    (**(*0x19598 + 0x48))(puStack_1300);
    (**(*0x19598 + 0x48))(puStack_12e0);
    (**(*0x19598 + 0x48))(puStackX_18);
    (**(*0x19598 + 0x48))(iStack_12c8);
    (**(*0x19598 + 0x48))(iStack_12d8);
    (**(*0x19598 + 0x48))(iStack_12d0);
    (**(*0x19598 + 0x48))(puStackX_8);
    return iVar10;
code_r0x00011ba7:
    uVar14 = uVar13 + 1;
    uVar13 = uVar14;
    if (uVar6 <= uVar14) goto code_r0x00011baf;
    goto code_r0x00011b9a;
code_r0x00011a9c:
    uVar14 = uVar13 + 1;
    uVar13 = uVar14;
    if (uVar6 <= uVar14) goto code_r0x00011aa4;
    goto code_r0x00011a92;
}


/* fcn.00014b4c @ 0x14b4c */

uint64_t fcn.00014b4c(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00014b78 @ 0x14b78 */

uint64_t fcn.00014b78(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00015924 @ 0x15924 */

void fcn.00015924(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014bf8(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014bc4 @ 0x14bc4 */

uchar * fcn.00014bc4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00015a24 @ 0x15a24 */

void fcn.00015a24(int64_t arg1)

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
            fcn.00010300();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00015b38 @ 0x15b38 */

ulong fcn.00015b38(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x19598 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00017778 @ 0x17778 */

ulong fcn.00017778(ulong noname_0,int64_t arg1)

{
    int64_t arg2;
    
    arg2 = 0;
    *0x18778 = *0xc00fd010 & 0xfffff000;
    *(*0x18778 + 8) = 0;
    *(*0x18778 + 6) = 0x20d;
    fcn.00016ee8(0x201,0);
    fcn.00015a84(arg2 + 10,arg2);
    *arg1 = *(*0x18778 + 0x10) & 0xffffff;
    return 1;
}


/* fcn.00016ee8 @ 0x16ee8 */

void fcn.00016ee8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    if (arg1 != '\0') {
        uVar2 = 0;
        do {
            if ((*(*0x18778 + 4) & 0x21) != 0x20) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x4000000);
        *(*0x18778 + 4) = 7;
    }
    if (arg2 != '\0') {
        do {
            if ((*(*0x18778 + 0xa0) & 5) != 1) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 0x4000000);
        *(*0x18778 + 0xa0) = 0x1c;
    }
    return;
}


/* fcn.00015a84 @ 0x15a84 */

int64_t fcn.00015a84(int64_t arg1,int64_t arg2)

{
    fcn.00015a24((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00017730 @ 0x17730 */

void fcn.00017730(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    *0x18778 = *0xc00fd010 & 0xfffff000;
    iVar3 = fcn.00017284();
    if (iVar3 < 0) {
        fcn.00017390(arg1);
    }
    fcn.000175ac();
    fcn.00017d90(0);
    uVar1 = *0x18778;
    *(*0x18778 + 0xb4) = 0;
    if (*(uVar1 + 0xb8) == 0xff0a55a) {
        *(uVar1 + 0xb4) = 4;
        uVar5 = 0;
        *(uVar1 + 0xb4) = 0x1000;
        uVar6 = *(uVar1 + 0xb8);
        iVar4 = 0;
        uVar7 = *(uVar1 + 0xb8) >> 8 & 3;
        if (uVar7 != 0xffffffff) {
            do {
                uVar2 = uVar6 & 7;
                if (uVar2 == 0) {
                    iVar4 = iVar4 + 0x80000;
                }
                else if (uVar2 == 1) {
                    iVar4 = iVar4 + 0x100000;
                }
                else if (uVar2 == 2) {
                    iVar4 = iVar4 + 0x200000;
                }
                else if (uVar2 == 3) {
                    iVar4 = iVar4 + 0x400000;
                }
                else if (uVar2 == 4) {
                    iVar4 = iVar4 + 0x800000;
                }
                else if (uVar2 == 5) {
                    iVar4 = iVar4 + 0x1000000;
                }
                else if (uVar2 == 6) {
                    iVar4 = iVar4 + 0x2000000;
                }
                else if (uVar2 == 7) {
                    iVar4 = iVar4 + 0x4000000;
                }
                uVar5 = uVar5 + 1;
                uVar6 = uVar6 >> 4;
            } while (uVar5 < uVar7 + 1);
        }
        if (iVar4 != *0x18702) {
            *0x18702 = iVar4;
        }
    }
    return;
}


/* fcn.0001620c @ 0x1620c */

ulong fcn.0001620c(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (0x19 < uVar1) {
        if (uVar1 == 0x1a) {
            return 0x4000000;
        }
        if (uVar1 != 0x1b) {
            if (uVar1 == 0x20) {
                return 0x4000000;
            }
            if (uVar1 != 0x21) {
                if (uVar1 == 0x36) {
                    return 0x400000;
                }
                if (uVar1 == 0x37) {
                    return 0x800000;
                }
                if (uVar1 != 0x38) {
                    if (uVar1 == 0x39) {
                        return 0x2000000;
                    }
                    if (uVar1 == 0x3a) {
                        return 0x4000000;
                    }
                }
                return 0x1000000;
            }
        }
        return 0x8000000;
    }
    if (uVar1 == 0x19) {
        return 0x2000000;
    }
    if (uVar1 == 0x10) {
        return 0x10000;
    }
    if (uVar1 == 0x11) {
        return 0x20000;
    }
    if (uVar1 != 0x12) {
        if (uVar1 == 0x13) {
            return 0x80000;
        }
        if (uVar1 == 0x14) {
            return 0x100000;
        }
        if (uVar1 == 0x15) {
            return 0x200000;
        }
        if (uVar1 == 0x16) {
            return 0x400000;
        }
        if (uVar1 == 0x17) {
            return 0x800000;
        }
        return 0x1000000;
    }
    return 0x40000;
}


/* fcn.000162bc @ 0x162bc */

ulong fcn.000162bc(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 == 0x12) {
        return 0x80000;
    }
    if (uVar1 == 0x13) {
        return 0x100000;
    }
    if (uVar1 == 0x14) {
        return 0x200000;
    }
    if (uVar1 == 0x15) {
        return 0x400000;
    }
    if (uVar1 == 0x16) {
        return 0x800000;
    }
    if (uVar1 != 0x17) {
        if (uVar1 == 0x20) {
            return 0x4000000;
        }
        if (uVar1 == 0x46) {
            return 0x400000;
        }
    }
    return 0x1000000;
}


/* fcn.00016314 @ 0x16314 */

ulong fcn.00016314(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 >> 0x10 & 0xff;
    if (uVar1 != 1) {
        if (uVar1 == 2) {
            return 0x400000;
        }
        if (uVar1 != 0x41) {
            if (uVar1 != 0x43) {
                if (uVar1 == 0x4a) {
                    return 0x400000;
                }
                if (uVar1 != 0x4b) {
                    if (uVar1 == 0x8c) {
                        return 0x40000;
                    }
                    if (uVar1 == 0x8d) {
                        return 0x80000;
                    }
                    if (uVar1 == 0x8e) {
                        return 0x100000;
                    }
                    return 0x1000000;
                }
            }
            return 0x800000;
        }
    }
    return 0x200000;
}


/* fcn.00016d54 @ 0x16d54 */

ulong fcn.00016d54(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = arg1;
    if (iVar1 < 0xc) {
        if (iVar1 == 1) {
            if (**0x18778 < 0) {
                uVar2 = (*0x18778)[0x1b];
            }
            else {
                uVar2 = (*0x18778)[0x16];
            }
        }
        else {
            uVar2 = (*0x18778)[iVar1 + 0x15];
        }
    }
    else {
        if (0xf < iVar1) {
            return 0x8000000000000003;
        }
        uVar2 = (*0x18778)[iVar1 + -0xc + 0x38];
    }
    if (uVar2 == 0x7fff) {
        return 0x8000000000000003;
    }
    if (arg2 != 0) {
        *arg2 = (uVar2 & 0xffff) << 0xc;
    }
    if (arg3 != 0) {
        *arg3 = (uVar2 | 0xfff0) >> 4;
    }
    return 0;
}


/* fcn.00017c88 @ 0x17c88 */

void fcn.00017c88(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint uVar1;
    int64_t iVar2;
    int16_t iVar3;
    int iVar4;
    uint *arg2_00;
    uint64_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint auStack_28 [4];
    
    iVar6 = 0;
    *0x18778 = *0xc00fd010 & 0xfffff000;
    if (arg4 == '\x01') {
        arg2_00 = auStack_28;
        iVar2 = fcn.00017150(arg1,arg2_00);
        if (iVar2 < 0) {
            return;
        }
    }
    else {
        arg2_00 = arg2;
        auStack_28[0] = arg1;
    }
    uVar1 = auStack_28[0];
    uVar7 = 0x100 - (auStack_28[0] & 0xff);
    uVar8 = uVar7;
    if (0x40 < uVar7) {
        uVar8 = 0x40;
    }
    if (*arg3 < uVar8) {
        uVar8 = *arg3;
    }
    fcn.00016ee8(CONCAT71(arg1 >> 8,1),CONCAT71(arg2_00 >> 8,1));
    uVar7 = uVar8;
    iVar4 = (uVar8 & 0xffff) * 0x100;
    *(*0x18778 + 8) = uVar1;
    iVar3 = iVar4 + -0xff;
    *(*0x18778 + 6) = iVar3;
    fcn.00016ee8(CONCAT71(CONCAT22(iVar4 >> 0x10,iVar3) >> 8,1),0);
    if (uVar7 != 0) {
        uVar5 = uVar7;
        do {
            *(iVar6 + arg2) = *(iVar6 + 0x10 + *0x18778);
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    *arg3 = *arg3 - uVar7;
    return;
}


/* fcn.00010350 @ 0x10350 */

int64_t fcn.00010350(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00016dd8 @ 0x16dd8 */

ulong fcn.00016dd8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t auStackX_10 [2];
    int64_t in_stack_00000028;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [16];
    
    auStackX_10[0] = arg1;
    uVar5 = 0;
    uVar4 = arg2 & 0xffffffff;
    iVar6 = 0xff0a55a;
    *0x18778 = *0xc00fd010 & 0xfffff000;
    *(*0x18778 + 0xb4) = 0;
    if ((((*(*0x18778 + 0xb8) == 0xff0a55a) && (iVar1 = fcn.00016d54(0,&iStack_28,&iStack_20), -1 < iVar1)) &&
        (uVar3 = arg3, (arg3 & 0xffffffffU) + iStack_28 <= iStack_20 + 1U)) &&
       ((*(*0x18778 + 0xb4) = uVar5, *(*0x18778 + 0xb8) == iVar6 &&
        (iVar1 = fcn.00016d54(1,0,auStack_18), -1 < iVar1)))) {
        auStackX_10[0] = uVar3;
        if (uVar3 != 0) {
            do {
                fcn.00017c88((uVar5 & 0xffffffff) + (uVar4 & 0xffffffff) + iStack_28,
                             (uVar5 & 0xffffffff) + in_stack_00000028,auStackX_10,0);
                uVar5 = uVar3 - auStackX_10[0];
            } while (uVar3 - auStackX_10[0] < uVar3);
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00017284 @ 0x17284 */

int64_t fcn.00017284(void)

{
    uint uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t auStack_48 [16];
    
    puVar4 = auStack_48;
    iVar2 = 0x40;
    fcn.00010350(puVar4,0x40,0);
    iVar2 = fcn.00016dd8(puVar4,iVar2,0xefc,4);
    if ((-1 < iVar2) && (auStack_48[0] - 1 < 0xfffffffe)) {
        uVar8 = 0;
        uVar6 = auStack_48[0] >> 6 & 0x3fc;
        if (uVar6 != 0) {
            do {
                puVar4 = auStack_48;
                iVar2 = 0x40;
                fcn.00010350(puVar4,0x40,0);
                uVar7 = uVar6 - uVar8;
                if (0x3f < uVar6 - uVar8) {
                    uVar7 = 0x40;
                }
                iVar2 = fcn.00016dd8(puVar4,iVar2,uVar8 + (auStack_48[0] & 0xff) * 0x10,uVar7);
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar5 = 0;
                if (uVar7 != 0) {
                    do {
                        if (*(auStack_48 + uVar5) == *0x18706) {
                            uVar1 = *(auStack_48 + uVar5 + 4);
                            *(*0x18778 + 0xc4) = uVar1;
                            *(*0x18778 + 200) = uVar1;
                            return 0;
                        }
                        uVar3 = uVar5 + 8;
                        uVar5 = uVar3;
                    } while (uVar3 < uVar7);
                }
                uVar8 = uVar8 + 0x40;
            } while (uVar8 < uVar6);
        }
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00017390 @ 0x17390 */

void fcn.00017390(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t uStackX_8;
    uint32_t uStack_108;
    uchar uStack_104;
    char acStack_fe [246];
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *(iVar4 + 4) << 8;
    if (*(iVar4 + 0x16) == 0x1000) {
        uVar3 = uVar3 | 1;
    }
    else if (*(iVar4 + 0x16) == 0x2000) {
        uVar3 = uVar3 | 2;
    }
    else if (*(iVar4 + 0x16) == 0x10000) {
        uVar3 = uVar3 | 3;
    }
    uVar1 = uVar3 | 4;
    if (*(iVar4 + 0x12) == 1) {
        uVar1 = uVar3;
    }
    uVar3 = uVar1 | 8;
    if (*(iVar4 + 0xe) != 'P') {
        uVar3 = uVar1;
    }
    uVar1 = uVar3 | 0x10;
    if (*(iVar4 + 0xe) != '9') {
        uVar1 = uVar3;
    }
    fcn.00010350(&uStack_108,0x100,0);
    uVar3 = 0;
    do {
        iVar4 = 0;
        *(*0x18778 + 8) = uVar3;
        *(*0x18778 + 6) = 0x3f0b;
        fcn.00016ee8(0x3f01,0);
        fcn.00015a84(iVar4 + 10,iVar4);
        iVar4 = 0;
        iVar5 = 0x40;
        do {
            *(&uStack_108 + iVar4 + uVar3) = *(iVar4 + 0x10 + *0x18778);
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        uVar2 = uVar1;
        if ((uVar3 == 0) && (uStackX_8 = 0, uStack_108 != 0x50444653)) {
            uStackX_8 = 1;
            if (CONCAT13(uStack_104,uStack_108._1_3_) != 0x50444653) {
                *(*0x18778 + 0xcc) = 0;
                fcn.00015a84(1,iVar4);
                if (*(*0x18778 + 0xd4) == 0x50444653) goto code_r0x000174e0;
                goto code_r0x00017548;
            }
        }
        uVar3 = uVar3 + 0x40;
    } while (uVar3 < 0x100);
    uVar3 = *(&uStack_108 + uStackX_8 + 0xc) & 0xffffff;
    if ((((*(&uStack_108 + uStackX_8 + 5) == '\x01') && (acStack_fe[uStackX_8] == '\x01')) && (uVar3 + 0x10 < 0x101)) &&
       ((*(&uStack_108 + uVar3 + 1) & 0x600000) != 0)) {
code_r0x000174e0:
        uVar3 = *0x18706 & 0xff;
        if (uVar3 != 0x1c) {
            if (uVar3 == 0x1f) {
                uVar2 = uVar1 | 0x10;
                if ((*0x18706 & 0xf000) == 0x8000) {
                    uVar2 = uVar1 | 0x70;
                }
            }
            else if (uVar3 != 0x20) {
                if (uVar3 == 0x37) {
                    if (*0x18706 >> 8 != '@') goto code_r0x00017548;
                }
                else {
                    if (uVar3 == 0x8c) goto code_r0x00017548;
                    if (uVar3 == 0xbf) {
                        uVar2 = uVar1 | 0x80;
                        goto code_r0x00017548;
                    }
                    if (uVar3 == 0xc2) {
                        uVar2 = uVar1 | 0x40;
                        goto code_r0x00017548;
                    }
                }
                uVar2 = uVar1 | 0x20;
            }
        }
    }
code_r0x00017548:
    *(*0x18778 + 0xc4) = uVar2;
    *(*0x18778 + 200) = uVar2;
    return;
}


/* fcn.000175ac @ 0x175ac */

void fcn.000175ac(ulong param_1,ulong param_2)

{
    uchar uVar1;
    uint8_t uVar2;
    
    if (*0x1870b == '\x01') {
        uVar1 = *(*0x18778 + 0xaf);
        uVar2 = *(*0x18778 + 0xa7);
        *(*0x18778 + 0xaf) = 0x98;
        if (*(*0x18778 + 0xaf) == -0x68) {
            *(*0x18778 + 0xa7) = uVar2 & 0x3f | 0x40;
            *(*0x18778 + 0xa1) = 0x72;
            fcn.00016ee8(0,CONCAT71(param_2 >> 8,1));
            *(*0x18778 + 0xaf) = uVar1;
            *(*0x18778 + 0xa7) = uVar2;
        }
    }
    return;
}


/* fcn.00017d90 @ 0x17d90 */

void fcn.00017d90(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t arg1_00;
    int64_t arg1_01;
    ulong in_RDX;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    
    arg1_00 = arg1 & 0xffffffff;
    uVar1 = fcn.00016f50(arg1);
    uVar3 = *0x18706 & 0xff;
    uVar2 = 0x1c;
    if (uVar3 == 0x1f) {
        uVar2 = 0xc;
        goto code_r0x00017ecb;
    }
    if (uVar3 == 0x20) {
        uVar3 = *0x18706 & 0xffff;
        if ((uVar3 != 0x3820) && (uVar3 != 0x4320)) {
            if (uVar3 == 0x5020) {
                bVar4 = *0x18702 < 0x800000;
                goto code_r0x00017ec3;
            }
            if ((uVar3 - 0x6020 & 0xffffefff) != 0) goto code_r0x00017ecb;
        }
    }
    else if (uVar3 == 0x9d) {
        if ((*0x18706 & 0xffff) != 0x609d) {
            bVar4 = (*0x18706 & 0xffff) == 0x709d;
code_r0x00017e8e:
            if (!bVar4) goto code_r0x00017ecb;
        }
    }
    else {
        if (uVar3 == 0xbf) goto code_r0x00017ecb;
        if (uVar3 == 0xc2) {
            uVar3 = *0x18706 & 0xffff;
            if (uVar3 != 0x20c2) {
                if (((uVar3 != 0x24c2) && (uVar3 != 0x25c2)) && (uVar3 != 0x28c2)) {
                    bVar4 = uVar3 == 0x75c2;
                    goto code_r0x00017e8e;
                }
                goto code_r0x00017ec5;
            }
            bVar4 = *0x18702 < 0x400000;
        }
        else {
            if (uVar3 == 200) {
                uVar3 = *0x18706 & 0xffff;
                if (((uVar3 == 0x40c8) || (uVar3 == 0x60c8)) || (uVar3 == 0x67c8)) {
                    uVar2 = 0x7c;
                }
                goto code_r0x00017ecb;
            }
            if ((uVar3 != 0xef) ||
               ((uVar3 = *0x18706 & 0xffff, uVar3 != 0x40ef &&
                (((uVar3 - 0x60ef & 0xffffcfff) != 0 || (uVar3 == 0x90ef)))))) goto code_r0x00017ecb;
            bVar4 = *0x18702 < 0x2000000;
        }
code_r0x00017ec3:
        if (bVar4) goto code_r0x00017ecb;
    }
code_r0x00017ec5:
    uVar2 = 0x3c;
code_r0x00017ecb:
    if ((uVar1 & uVar2) != 0) {
        uVar1 = fcn.00016f50(arg1_00);
        arg1_01 = CONCAT71(arg1_00 >> 8,1);
        uVar1 = uVar1 & ~uVar2;
        fcn.00016ee8(arg1_01,CONCAT71(in_RDX >> 8,1));
        *(*0x18778 + 0x10) = uVar1;
        *(*0x18778 + 8) = arg1;
        if ((*(*0x18778 + 4) & 0x800) == 0) {
            *(*0x18778 + 6) = 0xf;
            fcn.00016ee8(CONCAT71(arg1_01 >> 8,1),0);
            fcn.00016f8c();
        }
    }
    return;
}


/* fcn.00017150 @ 0x17150 */

ulong fcn.00017150(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    uint64_t auStackX_8 [2];
    uint64_t uStackX_18;
    ulong uStackX_20;
    
    iVar6 = arg1;
    uStackX_20 = *0x19600;
    uStackX_18 = *0x19610;
    if (*0x19610 != 0) goto code_r0x00017248;
    *(*0x18778 + 0xb4) = 0;
    if (*(*0x18778 + 0xb8) == 0xff0a55a) {
        iVar2 = fcn.00016d54(1,&uStackX_20,&uStackX_18);
        iVar6 = arg1;
        if (iVar2 < 0) goto code_r0x00017220;
        uVar5 = 0;
        auStackX_8[0] = 0;
        uVar4 = 0;
        do {
            *(*0x18778 + 0xb4) = 0;
            if (*(*0x18778 + 0xb8) == 0xff0a55a) {
                iVar2 = fcn.00016d54(uVar5 & 0xffffffff,0,auStackX_8);
                if ((-1 < iVar2) && (uVar4 < auStackX_8[0])) {
                    uVar4 = auStackX_8[0];
                }
            }
            iVar6 = arg1;
            uVar5 = uVar5 + 1;
        } while (uVar5 < 0x10);
    }
    else {
code_r0x00017220:
        uVar4 = *0x18702 - 1U;
        uStackX_18 = *0x18702 - 1U;
    }
    *0x19600 = uStackX_20;
    *0x195f8 = uVar4;
    *0x19610 = uStackX_18;
code_r0x00017248:
    if (*0x19608 != '\0') {
        iVar6 = iVar6 + (-0x1000000 - *0x18660);
    }
    uVar1 = *0x19610 + 1 + iVar6;
    if (*0x195f8 < uVar1) {
        uVar3 = 0x8000000000000002;
    }
    else {
        *arg2 = uVar1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00016fd0 @ 0x16fd0 */

ulong fcn.00016fd0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t arg4_00;
    uint32_t uVar9;
    uint32_t auStackX_20 [2];
    char in_stack_00000028;
    int32_t var_48h;
    char acStack_68 [32];
    uint32_t var_40h;
    
    arg4_00 = arg4;
    uVar7 = arg3;
    uVar1 = arg4;
    uVar5 = arg3 & 0xffffffff;
    if ((((uVar1 != 0) && (*0x19610 != 0)) && (*0x19608 == '\0')) && ((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0)) {
        if (in_stack_00000028 == '\x01') {
            if ((*0x19600 + (0xffffffff - *0x195f8) <= arg1) && (arg1 <= *0x19610 + (0xffffffff - *0x195f8))) {
                uVar1 = 0;
            }
        }
        else if (*0x19600 <= arg1) {
            uVar1 = -(*0x19610 < arg1) & uVar1;
        }
    }
    uVar6 = 0;
    auStackX_20[0] = uVar7;
    if (uVar7 != 0) {
        do {
            fcn.00010350(acStack_68,0x40,0);
            uVar9 = uVar5;
            if (uVar1 == 0) {
                if (uVar9 < 0x41) {
                    uVar5 = 0;
                }
                else {
                    uVar5 = uVar9 - 0x40;
                }
                auStackX_20[0] = uVar5;
                if ((uVar9 - auStackX_20[0] != 0) && (acStack_68 != uVar6 + arg1)) {
                    section..text(acStack_68,uVar6 + arg1,uVar9 - auStackX_20[0]);
                }
            }
            else {
                arg4_00 = CONCAT31(arg4_00 >> 8,in_stack_00000028);
                fcn.00017c88(uVar6 + arg1,acStack_68,auStackX_20,arg4_00);
                uVar5 = auStackX_20[0];
            }
            uVar8 = 0;
            uVar4 = uVar5;
            if (uVar9 != uVar4) {
                iVar2 = 0;
                do {
                    if (arg2 == 0) {
                        cVar3 = -1;
                    }
                    else {
                        cVar3 = *(uVar6 + iVar2 + arg2);
                    }
                    if (acStack_68[iVar2] != cVar3) {
                        return 0;
                    }
                    uVar8 = uVar8 + 1;
                    iVar2 = iVar2 + 1;
                } while (uVar8 < uVar9 - uVar4);
            }
            uVar6 = uVar7 - uVar4;
        } while (uVar7 - uVar4 < uVar7);
    }
    return 1;
}


/* fcn.00016f8c @ 0x16f8c */

void fcn.00016f8c(void)

{
    int16_t iVar1;
    
    iVar1 = 0;
    do {
        *(*0x18778 + 6) = 0x11;
        fcn.00016ee8(1,0);
        if ((*(*0x18778 + 0x10) & 1) == 0) {
            return;
        }
        iVar1 = iVar1 + 1;
    } while (iVar1 != -1);
    return;
}


/* fcn.00018028 @ 0x18028 */

int64_t fcn.00018028(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_18;
    uint32_t auStackX_20 [2];
    
    fcn.000103e0(1,0,auStackX_20,0);
    if ((uStackX_18 & 0x80000) == 0) {
        fcn.00010410();
    }
    else {
        uVar2 = auStackX_20[0] >> 5 & 0x7f8;
        arg1_00 = ~(uVar2 - 1) & arg1;
        do {
            iVar1 = fcn.00010420(arg1_00);
            arg1_00 = uVar2 + iVar1;
        } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
    }
    return arg1;
}


/* fcn.000177dc @ 0x177dc */

ulong fcn.000177dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t arg2_00;
    uint64_t arg2_01;
    uint32_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    int64_t arg4;
    ushort uVar8;
    ulong unaff_R15;
    uint32_t auStackX_20 [2];
    int64_t iStackY_38;
    
    *0x18778 = *0xc00fd010 & 0xfffff000;
    uVar5 = arg2;
    if ((arg2 & 0xffffffffU) % *(*0x195b0 + 0x54) == 0) {
        uVar2 = *0x18770;
        uVar6 = 0;
        if (*0x18770 == 1) {
            uVar2 = *(*0x18778 + 0xc4) >> 0x1d & 0xffffff01;
            *0x18770 = uVar2;
        }
        if (uVar5 != 0) {
            arg4 = *0x195b0;
            uVar8 = auStackX_20[0];
            iStackY_38 = arg1;
            do {
                if (((uVar2 != '\x01') || (iStackY_38 != 0)) || (uVar2 = 0x10000, uVar5 - uVar6 < 0x10000)) {
                    uVar2 = 0x1000;
                }
                if (arg3 == '\x01') {
                    iVar4 = fcn.00017150(iStackY_38,auStackX_20);
                    if (iVar4 < 0) goto code_r0x00017824;
                }
                else {
                    auStackX_20[0] = iStackY_38;
                }
                arg4 = CONCAT71(arg4 >> 8,1);
                arg2_00 = 0;
                iVar4 = iStackY_38;
                cVar1 = fcn.00016fd0(iStackY_38,0,uVar2,arg4,unaff_R15);
                if (cVar1 != '\x01') {
                    uVar7 = 0;
                    do {
                        iVar4 = CONCAT71(iVar4 >> 8,1);
                        fcn.00016ee8(iVar4,CONCAT71(arg2_00 >> 8,1));
                        *(*0x18778 + 8) = auStackX_20[0];
                        if (uVar2 == 0x1000) {
                            uVar8 = 7;
                        }
                        if ((*(*0x195b0 + 0x54) == 0x10000) || (uVar2 == 0x10000)) {
                            uVar8 = 9;
                        }
                        *(*0x18778 + 6) = uVar8;
                        fcn.00016ee8(CONCAT71(iVar4 >> 8,1),0);
                        fcn.00016f8c();
                        if ((*0x19600 <= auStackX_20[0]) && (auStackX_20[0] <= *0x19610)) {
                            if (uVar2 == 0x10000) {
                                arg2_01 = 0x10000;
                            }
                            else {
                                arg2_01 = *(*0x195b0 + 0x54);
                                if (arg2_01 == 0) goto code_r0x00017994;
                            }
                            fcn.00018028((auStackX_20[0] - *0x19610) + 0xffffffff,arg2_01);
                        }
code_r0x00017994:
                        arg4 = CONCAT71(arg4 >> 8,1);
                        arg2_00 = 0;
                        iVar4 = iStackY_38;
                        cVar1 = fcn.00016fd0(iStackY_38,0,uVar2,arg4,unaff_R15);
                    } while ((cVar1 != '\x01') && (uVar7 = uVar7 + 1, uVar7 < 3));
                    if (cVar1 == '\0') {
                        if (uVar2 != 0x10000) {
                            return 0x8000000000000007;
                        }
                        uVar2 = 0;
                        *0x18770 = 0;
                    }
                    else {
                        fcn.00015a84(10,arg2_00);
                    }
                }
                uVar6 = uVar6 + uVar2;
                iStackY_38 = uVar2 + iStackY_38;
                if (uVar5 <= uVar6) break;
                uVar2 = *0x18770;
            } while( true );
        }
        uVar3 = 0;
    }
    else {
code_r0x00017824:
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00016f50 @ 0x16f50 */

uchar fcn.00016f50(int64_t arg1)

{
    if (arg1 != 0) {
        *(*0x18778 + 8) = arg1;
    }
    *(*0x18778 + 6) = 0x11;
    fcn.00016ee8(1,0);
    return *(*0x18778 + 0x10);
}


/* fcn.000103e0 @ 0x103e0 */

uint64_t fcn.000103e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
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


/* fcn.00010410 @ 0x10410 */

void fcn.00010410(void)

{
    return;
}


/* fcn.00010420 @ 0x10420 */

int64_t fcn.00010420(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


