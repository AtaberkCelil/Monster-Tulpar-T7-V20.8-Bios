// decompiled by r2ghidra: 0553_PciOutOfResourceSetupPage.pe32
// functions: 39

/* entry0 @ 0x10370 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    
    fcn.00010414(arg1,arg2);
    if (*0x13918 == 0) {
        *0x13908 = *(arg2 + 0x60);
        *0x13910 = *(arg2 + 0x58);
        *0x13918 = arg2;
    }
    *0x13950 = arg1;
    iVar1 = (**(*0x13908 + 0x50))(0x200,8,0x104e0,0,0x13930);
    if (-1 < iVar1) {
        (**(*0x13908 + 0xa8))(0x13250,*0x13930,auStackX_8);
    }
    return 0;
}


/* fcn.00010414 @ 0x10414 */

void fcn.00010414(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x138f8 = *(arg1 + 0x60);
    *0x138f0 = arg1;
    fcn.00010528();
    puVar4 = fcn.00010528();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010468:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010360();
                fcn.00010350();
                uVar2 = in(0x1808);
                fcn.00010330(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010320();
                }
                fcn.00010330(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010350();
                }
                else {
                    fcn.00010340();
                }
                return;
            }
            if ((*0x13298 == *(puVar4 + 4)) && (*0x132a0 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010468;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010528 @ 0x10528 */

int64_t fcn.00010528(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13900 == 0) {
        *0x13900 = 0;
        if (*(*0x138f0 + 0x68) != 0) {
            piVar2 = *(*0x138f0 + 0x70);
            do {
                if ((*0x13230 == *piVar2) && (*0x13238 == piVar2[1])) {
                    *0x13900 = (*(*0x138f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x13900;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x138f0 + 0x68));
        }
    }
    return *0x13900;
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


/* fcn.00011bf0 @ 0x11bf0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00011bf0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    ulong **arg3_00;
    int64_t iVar4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t *piVar5;
    ulong in_stack_ffffffffffffffb0;
    uint uVar7;
    int64_t *piVar6;
    ulong uStack_48;
    int64_t iStack_40;
    ulong *apuStack_38 [2];
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar4 = *0x13950;
    uVar7 = in_stack_ffffffffffffffb0 >> 0x20;
    puStackX_20 = NULL;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iVar1 = (**(*0x13908 + 0x98))(*0x13950,0x13330,&iStack_40);
    if ((-1 < iVar1) &&
       (iVar1 = (**(*0x13908 + 0x118))(iVar4,0x13370,&iStackX_10,iVar4,0,CONCAT44(uVar7,2)), -1 < iVar1)) {
        arg3_00 = apuStack_38;
        iVar1 = (**(*0x13908 + 0x140))(0x132d0,0);
        if (-1 < iVar1) {
            iStackX_18 = 0;
            iStackX_8 = 0;
            for (puVar3 = iStackX_10 + 0x14; (puVar3 < *(iStackX_10 + 0x10) + iStackX_10 && (*(puVar3 + 3) != '\x02'));
                puVar3 = puVar3 + (*puVar3 & 0xffffff)) {
            }
            piVar6 = &iStackX_18;
            piVar5 = &iStackX_8;
            iVar1 = fcn.00011a40(iStack_40,puVar3 + 1,arg3_00,iVar4);
            iVar4 = iStackX_18;
            if (-1 < iVar1) {
                if (*0x13920 == '\0') {
                    *0x13940 = 0x13940;
                    *0x13948 = 0x13940;
                    *0x13920 = '\x01';
                }
                iVar1 = (**apuStack_38[0])(apuStack_38[0],iStackX_10,iStackX_18,&uStack_48,piVar5,piVar6);
                if (iVar1 < 0) {
                    return iVar1;
                }
                iVar2 = (**(*0x13908 + 0x40))(4,0x38,&puStackX_20);
                iVar1 = iStackX_8;
                if (-1 < iVar2) {
                    puStackX_20[2] = *(iStackX_8 + 8);
                    puStackX_20[3] = iVar4;
                    puStackX_20[4] = uStack_48;
                    (**(*0x13908 + 0x160))(puStackX_20 + 5,puVar3 + 6,0x10);
                    *puStackX_20 = 0x13940;
                    puStackX_20[1] = *0x13948;
                    **0x13948 = puStackX_20;
                    *0x13948 = puStackX_20;
                }
                if (iVar1 != 0) {
                    *(iVar1 + 0x18) = uStack_48;
                }
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00010594 @ 0x10594 */

ulong fcn.00010594(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x13908 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001072c @ 0x1072c */

int64_t fcn.0001072c(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.00010600(arg1);
    arg1_01 = fcn.00010594(arg1_00);
    fcn.00013160(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.00010600 @ 0x10600 */

int64_t fcn.00010600(int64_t arg1)

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


/* fcn.00013160 @ 0x13160 */

int64_t fcn.00013160(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011dd4 @ 0x11dd4 */

int64_t fcn.00011dd4(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_R8;
    int64_t iVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = piVar2 + CONCAT44(in_R8,arg3);
    if (7 < CONCAT44(in_R8,arg3)) {
        arg1 = arg1 & 7;
        if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
            iVar3 = 8 - arg1;
            for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
                arg2 = arg2 + 1;
                iVar3 = iVar3 + -1;
            }
        }
        for (; (piVar2 <= piVar1 + -1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 8;
        }
    }
    while( true ) {
        if (piVar1 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.000109e0 @ 0x109e0 */

void fcn.000109e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    char cVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    if (arg2 != 0) {
        do {
            if (uVar4 == arg2 - 1U) {
                cVar1 = *(arg1 + uVar4 * 2);
                cVar3 = '\0';
            }
            else {
                cVar3 = *(arg1 + uVar4 * 2);
                if (cVar3 - 0x30U < 10) {
                    cVar3 = cVar3 + -0x30;
                }
                else if (cVar3 + 0xbfU < 6) {
                    cVar3 = cVar3 + -0x37;
                }
                else {
                    cVar3 = cVar3 + -0x57;
                }
                cVar1 = *(arg1 + 2 + uVar4 * 2);
            }
            if (cVar1 - 0x30U < 10) {
                uVar2 = cVar1 - 0x30;
            }
            else if (cVar1 + 0xbfU < 6) {
                uVar2 = cVar1 - 0x37;
            }
            else {
                uVar2 = cVar1 + 0xa9;
            }
            uVar4 = uVar4 + 2;
            *arg3 = cVar3 << 4 | uVar2;
            arg3 = arg3 + 1;
        } while (uVar4 < arg2);
    }
    return;
}


/* fcn.00011ea8 @ 0x11ea8 */

char * fcn.00011ea8(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00011e4c(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00011f28 @ 0x11f28 */

void fcn.00011f28(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011ef8(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010300(arg1_00,arg1);
    }
    return;
}


/* fcn.00011ef8 @ 0x11ef8 */

ulong fcn.00011ef8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x138f8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2)

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


/* fcn.00012f08 @ 0x12f08 */

ulong fcn.00012f08(int64_t arg1,uint32_t arg2)

{
    char16_t cVar1;
    uint64_t extraout_RAX;
    char16_t *pcVar2;
    int64_t iVar3;
    uint in_register_00000014;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    pcVar2 = L"GUID=";
    fcn.00012ed4(0x13398,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (pcVar2 <= arg1) {
        if (arg1 < pcVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (pcVar2 < arg1) goto code_r0x00012f79;
    }
    if (pcVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00012f79:
    if (str.GUID[0] != L'\0') {
        iVar3 = pcVar2 - arg1;
        cVar1 = str.GUID[0];
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 2;
            cVar1 = *(iVar3 + arg1);
        } while (cVar1 != L'\0');
    }
    *arg1 = cVar4;
    return 0;
}


/* fcn.00011fb8 @ 0x11fb8 */

ulong fcn.00011fb8(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = "0123456789ABCDEF"[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = "0123456789ABCDEF"[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.00011f84(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00012ed4 @ 0x12ed4 */

uint64_t fcn.00012ed4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00012fa8 @ 0x12fa8 */

ulong fcn.00012fa8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.00012ed4(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.00012ed4(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00013049;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00013049:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00013078 @ 0x13078 */

uint64_t fcn.00013078(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* section..text @ 0x102c0 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 12128 named .text
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


/* fcn.00010bc8 @ 0x10bc8 */

int16_t * fcn.00010bc8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint16_t *puVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int16_t *arg1_00;
    int64_t iVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    uint in_register_00000014;
    uint16_t *puVar10;
    uint64_t uVar11;
    uint64_t arg1_01;
    int16_t *piVar12;
    uint64_t *noname_2;
    char16_t *pcVar13;
    uint64_t auStackX_18 [2];
    
    puVar10 = CONCAT44(in_register_00000014,arg2);
    uVar9 = 0;
    uVar11 = uVar9;
    if (puVar10 != NULL) {
        uVar1 = *puVar10;
        uVar11 = 0;
        puVar4 = puVar10;
        while (uVar1 != 0) {
            puVar4 = puVar4 + 1;
            uVar11 = uVar11 + 1;
            uVar1 = *puVar4;
        }
    }
    noname_2 = NULL;
    arg1_01 = uVar9;
    uVar6 = uVar9;
    if (arg3 != 0) {
        noname_2 = auStackX_18;
        iVar5 = (**(*0x138f8 + 0x98))(arg3,0x13220);
        arg1_01 = auStackX_18[0];
        if (iVar5 < 0) {
            arg1_01 = uVar9;
        }
        if (arg1_01 == 0) {
            return NULL;
        }
        auStackX_18[0] = arg1_01;
        uVar6 = fcn.00011ea8(arg1_01);
    }
    iVar5 = (uVar6 + uVar11 * 2) * 2 + 0x32;
    arg1_00 = fcn.00011f28(iVar5 * 2);
    if (arg1_00 != NULL) {
        fcn.00012f08(arg1_00,iVar5);
        iVar2 = *arg1_00;
        piVar12 = arg1_00;
        while (iVar2 != 0) {
            piVar12 = piVar12 + 1;
            uVar9 = uVar9 + 1;
            iVar2 = *piVar12;
        }
        piVar12 = arg1_00 + uVar9;
        if (arg1 != 0) {
            uVar11 = 0;
            do {
                fcn.00011fb8(piVar12,(iVar5 * 2 - piVar12) + arg1_00,noname_2,*(uVar11 + arg1));
                iVar7 = fcn.00012ed4(piVar12,iVar5 - (piVar12 - arg1_00 >> 1));
                uVar11 = uVar11 + 1;
                piVar12 = piVar12 + iVar7;
            } while (uVar11 < 0x10);
        }
        pcVar13 = L"&NAME=";
        fcn.00012fa8(arg1_00,iVar5,0x133d8);
        uVar9 = 0;
        iVar2 = *piVar12;
        piVar8 = piVar12;
        uVar11 = uVar9;
        while (iVar2 != 0) {
            piVar8 = piVar8 + 1;
            uVar11 = uVar11 + 1;
            iVar2 = *piVar8;
        }
        piVar12 = piVar12 + uVar11;
        if (puVar10 != NULL) {
            for (; *puVar10 != 0; puVar10 = puVar10 + 1) {
                fcn.00011fb8(piVar12,(iVar5 * 2 - piVar12) + arg1_00,pcVar13,*puVar10);
                iVar7 = fcn.00012ed4(piVar12,iVar5 - (piVar12 - arg1_00 >> 1));
                piVar12 = piVar12 + iVar7;
            }
        }
        pcVar13 = L"&PATH=";
        fcn.00012fa8(arg1_00,iVar5,0x133e8);
        iVar2 = *piVar12;
        piVar8 = piVar12;
        uVar11 = uVar9;
        while (iVar2 != 0) {
            piVar8 = piVar8 + 1;
            uVar11 = uVar11 + 1;
            iVar2 = *piVar8;
        }
        piVar12 = piVar12 + uVar11;
        if (uVar6 != 0) {
            do {
                fcn.00011fb8(piVar12,(iVar5 * 2 - piVar12) + arg1_00,pcVar13,*(uVar9 + arg1_01));
                iVar7 = fcn.00012ed4(piVar12,iVar5 - (piVar12 - arg1_00 >> 1));
                uVar9 = uVar9 + 1;
                piVar12 = piVar12 + iVar7;
            } while (uVar9 < uVar6);
        }
        *piVar12 = 0;
        bVar3 = false;
        iVar2 = *arg1_00;
        piVar12 = arg1_00;
        while (iVar2 != 0) {
            iVar2 = *piVar12;
            if (iVar2 == 0x3d) {
                bVar3 = true;
            }
            else if (iVar2 == 0x26) {
                bVar3 = false;
            }
            else if ((bVar3) && (iVar2 - 0x41U < 6)) {
                *piVar12 = iVar2 + 0x20;
            }
            piVar12 = piVar12 + 1;
            iVar2 = *piVar12;
        }
        return arg1_00;
    }
    return NULL;
}


/* fcn.00011f54 @ 0x11f54 */

void fcn.00011f54(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012148(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012148 @ 0x12148 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00012148(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
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
    uint64_t uStack_98;
    int64_t iStack_90;
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
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000121a7;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x000121a7:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.00013078(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00012ed4(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x1354c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x00012562:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1354c;
            }
            else {
                pcVar8 = 0x13550;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x000122f9:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x0001249c;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000124b3;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x0001249c;
                        }
                        goto code_r0x000124b3;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x0001249c:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x000122f9;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x000122f9;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000124b3;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x0001249c;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000124b3:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00012eb0(&var_68h_2,0x26,0,0x134e0);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x00012562;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001274b;
                        if (uStack_a8 == 0x58) goto code_r0x00012840;
                        if (uStack_a8 == 0x61) goto code_r0x00012754;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x000122da;
                        }
                        if (uStack_a8 != 100) goto code_r0x000122d6;
                        goto code_r0x00012857;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1354c;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x00012a84;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x135eb;
                            goto code_r0x00012807;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00012807:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00012a84;
                    }
                    fcn.00012eb0(&var_68h_2,0x26,0,0x13544);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001274b:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00012754:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x00012a84;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000122d6;
                            goto code_r0x00012844;
                        }
                        goto code_r0x00012849;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00012a84;
                    }
                    fcn.00012eb0(&var_68h_2,0x26,0,0x13528);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00012a84;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00012840:
            uVar21 = uVar21 | 0x20;
code_r0x00012844:
            uVar21 = uVar21 | 0x80;
code_r0x00012849:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00012857:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00012899;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x00012899:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x00012921:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00012921;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF"[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x000122d6:
            pcVar8 = &uStack_a8;
code_r0x000122da:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00012a84:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f84(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f84(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f84(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00011f84(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.00010e54 @ 0x10e54 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010e54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    uint64_t arg2_00;
    uint8_t uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    uint16_t *puVar5;
    int16_t *arg3_00;
    int64_t iVar6;
    uint16_t *puVar7;
    int64_t iVar8;
    uint16_t *puVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    int64_t iStackX_18;
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    int64_t var_50h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    puVar7 = arg3 + 0x16;
    uVar11 = 0;
    iStackX_18 = 0;
    uVar1 = *puVar7;
    uVar4 = 0;
    while (uVar1 != 0) {
        uVar4 = uVar4 + 1;
        uVar1 = *(puVar7 + uVar4);
    }
    arg2_00 = uVar4 + 1;
    iStackX_20 = arg4;
    puVar5 = fcn.00011f28(arg2_00 * 2);
    uVar10 = 0;
    if (puVar5 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if (((puVar7 == NULL) || (999999 < uVar4)) ||
       (puVar9 = puVar5, uVar4 = fcn.00013078(puVar7,arg2_00), arg2_00 <= uVar4)) goto code_r0x00010f1c;
    if (puVar5 < puVar7) {
code_r0x00010ef9:
        if (puVar7 < puVar5 + arg2_00) goto code_r0x00010f1c;
    }
    else {
        if (puVar5 < uVar4 + 1 + puVar7) goto code_r0x00010f1c;
        if (puVar5 <= puVar7) goto code_r0x00010ef9;
    }
    for (; *puVar7 != 0; puVar7 = puVar7 + 1) {
        *puVar9 = *puVar7;
        puVar9 = puVar9 + 1;
    }
    *puVar9 = uVar10;
code_r0x00010f1c:
    if (auStack_48 != arg3 + 2) {
        section..text(auStack_48,arg3 + 2,0x10);
    }
    arg3_00 = fcn.00010bc8(auStack_48,puVar5,arg2);
    iVar6 = 0;
    iVar2 = *arg3_00;
    piVar3 = arg3_00;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = *piVar3;
    }
    iStackX_18 = iVar6 * 2 + 0x42;
    iVar6 = fcn.00011f28(iStackX_18);
    if (iVar6 == 0) {
        iVar8 = -0x7ffffffffffffff7;
        *in_stack_00000028 = 0;
        uVar11 = 0;
    }
    else {
        fcn.00011f54(iVar6,iStackX_18,0x133f8,arg3_00);
        iStackX_18 = 0;
        iVar8 = (**(*0x13910 + 0x48))(puVar5,auStack_48,0,&iStackX_18,0);
        if (iVar8 == -0x7ffffffffffffffb) {
            uVar11 = fcn.00011f28(iStackX_18);
            iVar8 = (**(*0x13910 + 0x48))(puVar5,auStack_48,0,&iStackX_18,uVar11);
            if (-1 < iVar8) {
                iVar8 = (**(arg1 + 0x18))(arg1,iVar6,uVar11,*(arg3 + 0x14),iStackX_20,in_stack_00000028);
            }
        }
    }
    (**(*0x138f8 + 0x48))(puVar5);
    if (uVar11 != 0) {
        (**(*0x138f8 + 0x48))(uVar11);
    }
    (**(*0x138f8 + 0x48))(arg3_00);
    if (iVar6 != 0) {
        (**(*0x138f8 + 0x48))(iVar6);
    }
    return iVar8;
}


/* fcn.0001109c @ 0x1109c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.0001109c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    bool bVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    char *arg3_00;
    uint32_t *puVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t *in_stack_00000028;
    int16_t *piStack_70;
    int64_t *piStack_68;
    int64_t iStack_60;
    int64_t iStack_50;
    int8_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar13 = 0;
    iStack_50 = 0;
    piStack_70 = NULL;
    bVar2 = false;
    uVar3 = (**(*0x13908 + 0x140))(0x132d0,0,0x13928);
    if (uVar3 < 0) {
        return uVar3;
    }
    uVar3 = (**(*0x13908 + 0x140))(0x13310,0,&iStack_50);
    if (uVar3 < 0) {
        return uVar3;
    }
    iStack_60 = 0;
    iVar4 = (**(*0x13928 + 0x18))(*0x13928,0,0,&iStack_60,&var_38h);
    if ((iVar4 == -0x7ffffffffffffffb) && (piVar5 = fcn.00011f28(iStack_60 + 8), piVar5 != NULL)) {
        iVar4 = (**(*0x13928 + 0x18))(*0x13928,0,0,&iStack_60,piVar5);
        if (iVar4 < 0) {
            iVar4 = *0x138f8;
        }
        else {
            bVar1 = false;
            if (*piVar5 != 0) {
                piVar11 = piVar5;
                do {
                    (**(*0x13928 + 0x50))(*0x13928,*piVar11,&var_40h);
                    if ((_var_40h == arg2) && (*piVar11 == arg1)) {
                        bVar1 = true;
                        break;
                    }
                    uVar13 = uVar13 + 1;
                    piVar11 = piVar5 + uVar13;
                    bVar1 = false;
                } while (*piVar11 != 0);
            }
            (**(*0x13908 + 0x48))(piVar5);
            if (!bVar1) {
                return 0x800000000000000e;
            }
            iVar4 = 0;
            piStack_68 = NULL;
            uVar3 = (**(*0x13928 + 0x20))(*0x13928,arg1,&stack0xffffffffffffffa8,0);
            if ((uVar3 < 0) && (uVar3 != 0x8000000000000005)) {
                return uVar3;
            }
            (**(*0x13908 + 0x40))(4,iVar4,&piStack_68);
            if (piStack_68 == NULL) {
                return 0x8000000000000009;
            }
            (**(*0x13928 + 0x20))(*0x13928,arg1,&stack0xffffffffffffffa8);
            piVar5 = piStack_68;
            uVar3 = 0x14;
            bVar1 = false;
            if (0x14 < *(piStack_68 + 2)) {
                do {
                    bVar1 = bVar2;
                    if (bVar2) break;
                    puVar9 = uVar3 + piVar5;
                    uVar10 = *puVar9 & 0xffffff;
                    uVar14 = uVar3 + uVar10;
                    uVar3 = uVar14;
                    if ((*(puVar9 + 3) == '\x02') && (uVar13 = 4, 4 < uVar10)) {
                        do {
                            _var_40h = uVar13 + puVar9;
                            uVar12 = uVar13 + (_var_40h[1] & 0x7f);
                            uVar13 = uVar12;
                            if ((*_var_40h == '\x0e') && (iVar6 = fcn.00011dd4(_var_40h + 2,arg3,0x10), iVar6 == 0))
                            {
                                bVar2 = true;
                                break;
                            }
                        } while (uVar12 < uVar10);
                    }
                    bVar1 = bVar2;
                } while (uVar14 < *(piVar5 + 2));
            }
            *arg4 = 0;
            *in_stack_00000028 = 0;
            if (bVar1) {
                do {
                    iVar6 = 0;
                    arg3_00 = _var_40h + (_var_40h[1] & 0x7f);
                    if (((*arg3_00 == '$') &&
                        (iVar7 = fcn.00010e54(iStack_50,arg2,arg3_00,&piStack_70,iVar4), -1 < iVar7)) &&
                       (piStack_70 != NULL)) {
                        piVar8 = *arg4;
                        if (piVar8 == NULL) {
                            *arg4 = piStack_70;
                        }
                        else {
                            iVar7 = iVar6;
                            for (; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar7 = iVar7 + 1;
                            }
                            for (piVar8 = piStack_70; *piVar8 != 0; piVar8 = piVar8 + 1) {
                                iVar6 = iVar6 + 1;
                            }
                            uVar3 = (iVar6 + iVar7) * 2 + 8;
                            iVar6 = fcn.00011f28(uVar3);
                            if (iVar6 == 0) {
                                return 0x8000000000000009;
                            }
                            uVar3 = uVar3 >> 1;
                            fcn.00012fa8(iVar6,uVar3,*arg4);
                            fcn.00012fa8(iVar6,uVar3,0x1342c);
                            fcn.00012fa8(iVar6,uVar3,piStack_70);
                            (**(*0x13908 + 0x48))(*arg4);
                            (**(*0x13908 + 0x48))(piStack_70);
                            *arg4 = iVar6;
                            *in_stack_00000028 = iVar6;
                            piStack_70 = NULL;
                        }
                    }
                    _var_40h = arg3_00;
                    if (*arg3_00 == ')') {
                        if (piStack_68 != NULL) {
                            (**(*0x13908 + 0x48))();
                        }
                        return ~-(*arg4 != 0) & 0x800000000000000e;
                    }
                } while( true );
            }
            iVar4 = *0x13908;
        }
        (**(iVar4 + 0x48))(piVar5);
    }
    return 0x800000000000000e;
}


/* fcn.00010834 @ 0x10834 */

void fcn.00010834(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    
    piVar6 = arg1 + 4;
    for (uVar5 = 0;
        ((((iVar2 = piVar6[-2], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
         (((iVar2 = piVar6[-1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) &&
          ((0x19 < iVar2 - 0x47U && ((iVar2 = *piVar6, iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)))))))) &&
        ((0x19 < iVar2 - 0x47U &&
         ((((iVar2 = piVar6[1], iVar2 - 0x30U < 0x37 && (6 < iVar2 - 0x3aU)) && (0x19 < iVar2 - 0x47U)) &&
          (uVar5 < *arg2 - 1U)))))); uVar5 = uVar5 + 1) {
        cVar1 = piVar6[-2];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 & 0xf) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[-1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = *piVar6;
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        uVar4 = (uVar3 | uVar4) << 4;
        *(arg3 + uVar5 * 2) = uVar4;
        cVar1 = piVar6[1];
        if (cVar1 - 0x30U < 10) {
            uVar3 = cVar1 - 0x30;
        }
        else if (cVar1 + 0xbfU < 6) {
            uVar3 = cVar1 - 0x37;
        }
        else {
            uVar3 = cVar1 + 0xa9;
        }
        piVar6 = piVar6 + 4;
        *(arg3 + uVar5 * 2) = uVar3 | uVar4;
    }
    *arg2 = uVar5;
    *(arg3 + uVar5 * 2) = 0;
    return;
}


/* fcn.00010774 @ 0x10774 */

int64_t fcn.00010774(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x13910 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x13908 + 0x48))();
        }
        iVar1 = fcn.00010594(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x13910 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.000105c0 @ 0x105c0 */

int64_t fcn.000105c0(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00010594(arg1);
    if (iVar1 != 0) {
        (**(*0x13908 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.00010a60 @ 0x10a60 */

uint64_t fcn.00010a60(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcStackX_8;
    char *pcStackX_18;
    
    uVar4 = 0;
    pcStackX_8 = NULL;
    uVar6 = uVar4;
    piVar5 = arg1;
    while( true ) {
        iVar1 = *piVar5;
        while ((iVar1 != 0x26 && (iVar1 != 0))) {
            uVar6 = uVar6 + 1;
            iVar1 = *(arg1 + uVar6 * 2);
        }
        if (*(arg1 + uVar6 * 2) == 0) break;
        uVar6 = uVar6 + 1;
        piVar5 = arg1 + uVar6 * 2;
        iVar2 = fcn.00011dd4(piVar5,*0x134b8,10);
        if (iVar2 == 0) {
            arg1 = arg1 + uVar6 * 2;
            uVar6 = uVar4;
            for (piVar5 = arg1 + 10;
                ((iVar1 = *piVar5, iVar1 - 0x30U < 0x37 && (6 < iVar1 - 0x3aU)) && (0x19 < iVar1 - 0x47U));
                piVar5 = piVar5 + 1) {
                uVar6 = uVar6 + 1;
            }
            pcVar7 = uVar6 >> 1;
            uVar3 = (**(*0x13908 + 0x40))(4,pcVar7,&pcStackX_8);
            if (uVar3 < 0) {
                uVar4 = uVar3;
                pcVar7 = pcStackX_8;
            }
            else {
                fcn.000109e0(arg1 + 10,uVar6,pcStackX_8);
            }
            if (-1 < uVar4) {
                if (((pcStackX_8 == NULL) || (pcVar7 < 0x4)) ||
                   ((pcVar7 < *(pcStackX_8 + 2) || ((4 < *pcStackX_8 - 1U && (*pcStackX_8 != '\x7f')))))) {
                    uVar4 = 0x800000000000000e;
                }
                else {
                    pcStackX_18 = pcStackX_8;
                    uVar4 = (**(*0x13908 + 0xb8))(0x13360,&pcStackX_18,arg2);
                }
                (**(*0x13908 + 0x48))(pcStackX_8);
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00010654 @ 0x10654 */

int64_t fcn.00010654(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x132a8;
        }
        arg1_00 = fcn.0001072c(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.00010600(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.00010594(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00013160(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00013160(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x132a8;
    }
    return arg1_00;
}


/* fcn.00011a40 @ 0x11a40 */

int64_t fcn.00011a40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    iVar5 = 0;
    uStackX_18 = 0;
    piVar3 = 0x13260;
    iVar4 = iVar5;
    iStackX_20 = arg4;
    do {
        if (*piVar3 != 0) {
            iVar1 = fcn.00011dd4(arg2 + 2,*piVar3,0x10);
            if (iVar1 == 0) break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 4;
    } while (iVar4 == 0);
    if (iVar4 == 1) {
        iVar1 = 0x13340;
    }
    else {
        iVar4 = iVar4 * 0x20;
        iVar1 = iVar4 + 0x13260;
        piVar3 = *(iVar4 + 0x13268);
        if (piVar3 == NULL) {
            *(iVar4 + 0x13268) = 0x132e0;
        }
        else {
            if (*piVar3 == 0) {
                *piVar3 = 0x11458;
            }
            if (*(*(iVar4 + 0x13268) + 8) == 0) {
                *(*(iVar4 + 0x13268) + 8) = 0x117d8;
            }
            if (*(*(iVar4 + 0x13268) + 0x10) == 0) {
                *(*(iVar4 + 0x13268) + 0x10) = 0x11a34;
            }
        }
    }
    iVar4 = (**(*0x13908 + 0x98))(*(arg1 + 0x18),0x132b0,&iStackX_20);
    if (iVar4 < 0) {
        iStackX_20 = iVar5;
    }
    iStackX_20 = fcn.00010654(iStackX_20,*(arg1 + 0x20));
    *0x132fc = *(arg2 + 2);
    *0x13304 = *(arg2 + 10);
    uVar2 = fcn.00010654(iStackX_20,0x132f8);
    (**(*0x13908 + 0x48))(iStackX_20);
    iVar4 = (**(*0x13908 + 0x148))(&uStackX_18,0x132b0,uVar2,0x13320,*(iVar1 + 8),0);
    if (-1 < iVar4) {
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = uStackX_18;
        }
        if (in_stack_00000028 != NULL) {
            if (iVar1 == 0x13340) {
                iVar1 = iVar5;
            }
            *in_stack_00000028 = iVar1;
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00011e4c @ 0x11e4c */

bool fcn.00011e4c(uint32_t arg1)

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


/* fcn.00011f84 @ 0x11f84 */

uchar * fcn.00011f84(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012eb0 @ 0x12eb0 */

void fcn.00012eb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00012148(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


