// decompiled by r2ghidra: 0064_HiiDatabase.pe32
// functions: 160

/* entry0 @ 0x10314 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x27020 = *(arg2 + 0x60);
    *0x27028 = *(arg2 + 0x58);
    *0x27018 = arg2;
    fcn.00010340(arg1,arg2);
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    *0x26688 = 0x26688;
    *0x26690 = 0x26688;
    *0x26698 = 0x26698;
    *0x266a0 = 0x26698;
    *0x267e0 = 0x267e0;
    *0x267e8 = 0x267e0;
    *0x267f8 = 0x267f8;
    *0x26800 = 0x267f8;
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x27020 + 0x170))(0x200,0x10,0x104a8,0,0x26600,0x27040);
    if (-1 < iVar1) {
        aiStackX_10[0] = 0;
        iVar1 = (**(*0x27020 + 0x148))
                          (aiStackX_10,0x26670,0x266a8,0x265f0,0x26720,0x265e0,0x26748,0x265a0,0x267a0,0x26560
                           ,0x267d0,0);
        if (-1 < iVar1) {
            (**(*0x27020 + 0x148))(aiStackX_10,0x265c0,0x266c8,0x26570,0x266f0,0);
        }
    }
    return;
}


/* fcn.00024f80 @ 0x24f80 */

int64_t fcn.00024f80(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.000260fc @ 0x260fc */

int64_t fcn.000260fc(ulong noname_0,uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    arg2 = CONCAT44(in_register_00000014,arg1);
    iVar1 = (**(*0x27020 + 0x40))(noname_0,arg2,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg2 != 0)) {
        aiStackX_18[0] = fcn.000102c0(aiStackX_18[0],arg2);
    }
    return aiStackX_18[0];
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


/* fcn.0002503c @ 0x2503c */

uint64_t fcn.0002503c(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint64_t uVar5;
    uint64_t uStackX_8;
    
    uVar5 = 0;
    if ((arg1 != 0) && (uVar1 = fcn.000249f8(arg1,0xf4241), uVar1 < 0xf4241)) {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        iVar4 = 0x30;
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        uVar3 = *arg1;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (*(arg1 + -2) != 0x30) {
                return uVar5;
            }
            arg1 = arg1 + 2;
        }
        uVar1 = 0xffffffffffffffff;
        for (; ((*arg1 - iVar4 < 10 || (*arg1 - 0x41 < 6)) || (*arg1 - 0x61 < 6)); arg1 = arg1 + 2) {
            iVar2 = fcn.0002500c(*arg1);
            if (uVar1 - iVar2 >> 4 < uVar5) {
                return uVar1;
            }
            uVar5 = uVar5 * 0x10 + iVar2;
        }
        return uVar5;
    }
    return uStackX_8;
}


/* fcn.00026148 @ 0x26148 */

uint32_t * fcn.00026148(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t *puStackX_20;
    
    iVar1 = (**(*0x27020 + 0x40))(4,arg1,&puStackX_20);
    if (iVar1 < 0) {
        puStackX_20 = NULL;
    }
    if (((puStackX_20 != NULL) && (arg1 != 0)) && (puStackX_20 != arg2)) {
        puStackX_20 = section..text(puStackX_20,arg2,arg1);
    }
    return puStackX_20;
}


/* section..text @ 0x10280 */

uint32_t * section..text(uint32_t *arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 90816 named .text
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + arg3 + -1;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 2;
            puVar3 = puVar3 + 2;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00024a2c @ 0x24a2c */

ulong fcn.00024a2c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.000249f8(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00024aa2;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00024aa2:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000249f8 @ 0x249f8 */

uint64_t fcn.000249f8(uint32_t arg1,int64_t arg2)

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


/* fcn.000251ac @ 0x251ac */

ulong fcn.000251ac(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

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
                pcVar6 = fcn.00025178(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
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


/* fcn.00024bac @ 0x24bac */

ulong fcn.00024bac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.000249f8(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.000249f8(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x00024c4d;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00024c4d:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.00010648 @ 0x10648 */

void fcn.00010648(uint32_t arg1)

{
    int16_t iVar1;
    bool bVar2;
    uint in_register_0000000c;
    int16_t *piVar3;
    
    bVar2 = false;
    for (piVar3 = CONCAT44(in_register_0000000c,arg1); *piVar3 != 0; piVar3 = piVar3 + 1) {
        iVar1 = *piVar3;
        if (iVar1 == 0x3d) {
            bVar2 = true;
        }
        else if (iVar1 == 0x26) {
            bVar2 = false;
        }
        else if ((bVar2) && (iVar1 - 0x41U < 6)) {
            *piVar3 = iVar1 + 0x20;
        }
    }
    return;
}


/* fcn.00024fbc @ 0x24fbc */

int16_t * fcn.00024fbc(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    int16_t *piVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int16_t *piVar5;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar4 == 0) {
        return piVar2;
    }
    do {
        iVar1 = *piVar2;
        if (iVar1 == 0) {
            return NULL;
        }
        piVar3 = piVar2;
        piVar5 = piVar4;
        if (iVar1 == *piVar4) {
            do {
                if (iVar1 == 0) break;
                piVar3 = piVar3 + 1;
                piVar5 = piVar5 + 1;
                iVar1 = *piVar3;
            } while (iVar1 == *piVar5);
        }
        if (*piVar5 == 0) {
            return piVar2;
        }
        if (*piVar3 == 0) {
            return NULL;
        }
        piVar2 = piVar2 + 1;
    } while( true );
}


/* fcn.000261ac @ 0x261ac */

uint32_t * fcn.000261ac(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *arg1_00;
    
    arg1_00 = fcn.000260fc(4,arg2);
    if ((arg1_00 != NULL) && (arg3 != 0)) {
        if (arg1 < arg2) {
            arg2 = arg1;
        }
        if ((arg2 != 0) && (arg1_00 != arg3)) {
            section..text(arg1_00,arg3,arg2);
        }
        (**(*0x27020 + 0x48))(arg3);
    }
    return arg1_00;
}


/* fcn.00010a40 @ 0x10a40 */

uint64_t fcn.00010a40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    int16_t iVar4;
    uint32_t *arg1_00;
    uint64_t uVar5;
    int16_t *piVar6;
    int64_t iVar7;
    uint64_t uVar8;
    ushort *puVar9;
    ushort auStackX_8 [4];
    
    iVar4 = *arg1;
    uVar5 = 0;
    if (((iVar4 == 0) || (arg2 == 0)) || (piVar6 = arg1, arg3 == 0)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        do {
            if (iVar4 == 0x26) break;
            piVar6 = piVar6 + 1;
            iVar4 = *piVar6;
        } while (iVar4 != 0);
        iVar7 = piVar6 - arg1 >> 1;
        *arg3 = iVar7;
        arg1_00 = fcn.000260fc(4,iVar7 * 2 + 2);
        if (arg1_00 == NULL) {
            uVar5 = 0x8000000000000009;
        }
        else {
            if ((*arg3 * 2 != 0) && (arg1_00 != arg1)) {
                section..text(arg1_00,arg1,*arg3 * 2);
            }
            *(arg1_00 + *arg3 * 2) = 0;
            iVar7 = fcn.000260fc(4,iVar7 + 2U >> 1);
            if (iVar7 == 0) {
                uVar5 = 0x8000000000000009;
            }
            else {
                uVar2 = *arg3;
                fcn.000102c0(auStackX_8,4);
                if (uVar2 != 0) {
                    puVar9 = arg1_00 + (uVar2 - 1) * 2;
                    uVar8 = uVar5;
                    do {
                        auStackX_8[0] = *puVar9;
                        cVar3 = fcn.0002503c(auStackX_8);
                        if ((uVar8 & 1) == 0) {
                            *((uVar8 >> 1) + iVar7) = cVar3;
                        }
                        else {
                            pcVar1 = (uVar8 >> 1) + iVar7;
                            *pcVar1 = *pcVar1 + cVar3 * '\x10';
                        }
                        uVar8 = uVar8 + 1;
                        puVar9 = puVar9 + -1;
                    } while (uVar8 < uVar2);
                }
                *arg2 = iVar7;
            }
            (**(*0x27020 + 0x48))(arg1_00);
        }
    }
    return uVar5;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00024c7c @ 0x24c7c */

ulong fcn.00024c7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    
    iVar3 = arg2;
    piVar5 = arg1;
    iVar1 = fcn.000249f8(arg1,arg2);
    uVar4 = iVar3 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    if (uVar4 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = arg4;
    if (uVar4 < arg4) {
        uVar2 = uVar4;
    }
    uVar2 = fcn.000249f8(arg3,uVar2);
    if ((uVar4 <= arg4) && (uVar4 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= piVar5) {
        if (piVar5 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar5) goto code_r0x00024d51;
    }
    if (arg3 < piVar5 + arg2) {
        return 0x800000000000000f;
    }
code_r0x00024d51:
    piVar5 = piVar5 + iVar1;
    for (; (uVar2 != 0 && (*arg3 != 0)); arg3 = arg3 + 2) {
        *piVar5 = *arg3;
        piVar5 = piVar5 + 1;
        uVar2 = uVar2 - 1;
    }
    *piVar5 = 0;
    return 0;
}


/* fcn.00010ba4 @ 0x10ba4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.00010ba4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg2_00;
    int16_t iVar1;
    bool bVar2;
    int16_t *piVar3;
    uint32_t uVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    int64_t iVar7;
    int16_t *arg3_00;
    int16_t *piVar8;
    int64_t iVar9;
    int16_t *piVar10;
    int64_t iVar11;
    int16_t *piVar12;
    uint64_t uVar13;
    ulong uVar14;
    uint32_t arg2_01;
    int16_t *piStack_68;
    int16_t *piStack_60;
    int16_t *piStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    uint32_t var_bp_8h;
    
    arg2_01 = arg3;
    arg3_00 = NULL;
    piStack_60 = NULL;
    uVar4 = fcn.00024fbc(arg1,arg2_01);
    piVar5 = fcn.00024fbc(uVar4,0x268d0);
    uStack_50 = fcn.00024fbc(*arg2,arg2_01);
    piVar8 = arg3_00;
    if (piVar5 != NULL) {
        do {
            iVar9 = 0;
            uVar4 = uStack_50;
            piVar6 = 0x268d0;
            do {
                piVar6 = piVar6 + 1;
                iVar9 = iVar9 + 1;
            } while (*piVar6 != 0);
            piVar6 = piVar5 + iVar9;
            piStack_58 = piVar5;
            if (piVar6 == NULL) {
                iVar9 = -0x7ffffffffffffffe;
            }
            else {
                iVar9 = fcn.00010a40(piVar6,&piStack_60,&iStack_40);
                uVar4 = uStack_50;
                piVar8 = piStack_60;
            }
            iVar7 = -0x7ffffffffffffffe;
            if (iVar9 < 0) goto code_r0x00010f41;
            piStack_68 = NULL;
            bVar2 = false;
            iVar9 = fcn.00024fbc(uVar4,0x268d0);
            if (iVar9 != 0) {
                do {
                    iVar11 = 0;
                    piVar10 = NULL;
                    piVar5 = 0x268d0;
                    do {
                        piVar5 = piVar5 + 1;
                        iVar11 = iVar11 + 1;
                    } while (*piVar5 != 0);
                    iVar9 = iVar9 + iVar11 * 2;
                    if (iVar9 != 0) {
                        iVar7 = fcn.00010a40(iVar9,&piStack_68,&iStack_48);
                        piVar10 = piStack_68;
                    }
                    if (iVar7 < 0) goto code_r0x00010d4d;
                    if (iStack_40 == iStack_48) {
                        if ((iStack_48 == 0) || (piVar8 == piVar10)) {
                            iVar7 = 0;
                        }
                        else {
                            iVar7 = fcn.000102e0(piVar8,piVar10,iStack_48);
                        }
                        if (iVar7 == 0) {
                            bVar2 = true;
                            (**(*0x27020 + 0x48))(piVar10);
                            break;
                        }
                    }
                    (**(*0x27020 + 0x48))(piVar10);
                    piStack_68 = NULL;
                    iVar9 = fcn.00024fbc(iVar9 + 2,0x268d0);
                    if (iVar9 == 0) break;
                    iVar7 = -0x7ffffffffffffffe;
                } while( true );
            }
            iVar7 = 0;
code_r0x00010d4d:
            piVar10 = NULL;
            if (piVar8 != NULL) {
                (**(*0x27020 + 0x48))(piVar8);
                piStack_60 = NULL;
                piVar8 = piVar10;
            }
            if (iVar7 < 0) goto code_r0x00010f41;
            piVar5 = fcn.00024fbc(piVar6 + 2,0x268d0);
            piVar6 = piStack_58;
            if (!bVar2) {
                if (piVar5 == NULL) {
                    iVar1 = *piStack_58;
                    piVar12 = piVar10;
                    piVar3 = piStack_58;
                    while (iVar1 != 0) {
                        piVar3 = piVar3 + 1;
                        piVar12 = piVar12 + 1;
                        iVar1 = *piVar3;
                    }
                    uVar13 = piVar12 * 2 + 2;
                }
                else {
                    uVar13 = (piVar5 - piStack_58 >> 1) * 2;
                }
                if (arg3_00 == NULL) {
                    arg3_00 = fcn.000260fc(4,uVar13 + 2);
                    fcn.00024c7c(arg3_00,(uVar13 >> 1) + 1,piVar6,uVar13 >> 1);
                }
                else {
                    iVar1 = *arg3_00;
                    piVar3 = arg3_00;
                    while (iVar1 != 0) {
                        piVar3 = piVar3 + 1;
                        piVar10 = piVar10 + 1;
                        iVar1 = *piVar3;
                    }
                    iVar9 = 0;
                    arg2_00 = uVar13 + (piVar10 + 1) * 2;
                    iVar1 = *arg3_00;
                    piVar3 = arg3_00;
                    while (iVar1 != 0) {
                        piVar3 = piVar3 + 1;
                        iVar9 = iVar9 + 1;
                        iVar1 = *piVar3;
                    }
                    arg3_00 = fcn.000261ac(piVar10,iVar9 * 2 + 2,arg2_00,arg3_00);
                    if (arg3_00 == NULL) {
                        return 0x8000000000000009;
                    }
                    fcn.00024c7c(arg3_00,arg2_00 >> 1,piVar6,uVar13 >> 1);
                }
            }
            iVar9 = 0;
        } while (piVar5 != NULL);
        if (arg3_00 != NULL) {
            iVar7 = iVar9;
            for (piVar8 = *arg2; *piVar8 != 0; piVar8 = piVar8 + 1) {
                iVar7 = iVar7 + 1;
            }
            iVar1 = *arg3_00;
            piVar8 = arg3_00;
            iVar11 = iVar9;
            while (iVar1 != 0) {
                piVar8 = piVar8 + 1;
                iVar11 = iVar11 + 1;
                iVar1 = *piVar8;
            }
            uVar13 = (iVar11 + iVar7) * 2 + 6;
            for (piVar8 = *arg2; *piVar8 != 0; piVar8 = piVar8 + 1) {
                iVar9 = iVar9 + 1;
            }
            iVar9 = fcn.000261ac(iVar11,iVar9 * 2 + 2,uVar13,*arg2);
            *arg2 = iVar9;
            if (iVar9 == 0) {
code_r0x00010f41:
                uVar14 = 0x8000000000000009;
                goto code_r0x00010f14;
            }
            fcn.00024bac(iVar9,uVar13 >> 1,arg3_00);
            *arg4 = 1;
        }
    }
    uVar14 = 0;
code_r0x00010f14:
    if (arg3_00 != NULL) {
        (**(*0x27020 + 0x48))(arg3_00);
    }
    return uVar14;
}


/* fcn.00010f50 @ 0x10f50 */

ulong fcn.00010f50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t arg2_00;
    int16_t iVar1;
    ushort uVar2;
    int16_t *piVar3;
    int iVar4;
    int iVar5;
    uint32_t arg1_00;
    ushort *puVar6;
    int64_t iVar7;
    int16_t *piVar8;
    int16_t *arg3_00;
    uint32_t arg1_01;
    int16_t *piVar9;
    int64_t iVar10;
    int64_t noname_0;
    int64_t iVar11;
    uint64_t uVar12;
    ulong uVar13;
    int64_t iVar14;
    
    arg3_00 = NULL;
    iVar5 = 0;
    iVar4 = fcn.00024fbc(arg1,arg3);
    iVar1 = *arg3;
    piVar9 = arg3_00;
    piVar8 = arg3;
    while (iVar1 != 0) {
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
        iVar5 = piVar9;
        iVar1 = *piVar8;
    }
    piVar9 = fcn.00024fbc(iVar4 + iVar5 * 2,0x268a4);
    iVar5 = fcn.00024fbc(*arg2,arg3);
    piVar8 = arg3_00;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        piVar8 = piVar8 + 1;
    }
    arg1_00 = fcn.00024fbc(iVar5 + piVar8 * 2,0x268a4);
    if (piVar9 != NULL) {
        do {
            arg1_01 = piVar9 + 2;
            puVar6 = fcn.00024fbc(arg1_01,0x268e4);
            uVar2 = *puVar6;
            *puVar6 = 0;
            iVar7 = fcn.00024fbc(arg1_00,piVar9);
            *puVar6 = uVar2;
            if (iVar7 == 0) {
                piVar8 = fcn.00024fbc(arg1_01,0x268a4);
                iVar7 = 0;
                if (piVar8 == NULL) {
                    iVar1 = *piVar9;
                    iVar10 = iVar7;
                    piVar3 = piVar9;
                    while (iVar1 != 0) {
                        piVar3 = piVar3 + 1;
                        iVar10 = iVar10 + 1;
                        iVar1 = *piVar3;
                    }
                    uVar12 = iVar10 * 2 + 2;
                }
                else {
                    uVar12 = (piVar8 - piVar9 >> 1) * 2;
                }
                if (arg3_00 == NULL) {
                    arg3_00 = fcn.000260fc(4,uVar12 + 2);
                    fcn.00024c7c(arg3_00,(uVar12 >> 1) + 1,piVar9,uVar12 >> 1);
                }
                else {
                    iVar1 = *arg3_00;
                    piVar3 = arg3_00;
                    while (iVar1 != 0) {
                        piVar3 = piVar3 + 1;
                        iVar7 = iVar7 + 1;
                        iVar1 = *piVar3;
                    }
                    arg2_00 = uVar12 + (iVar7 + 2) * 2;
                    iVar7 = 0;
                    iVar1 = *arg3_00;
                    piVar3 = arg3_00;
                    while (iVar1 != 0) {
                        piVar3 = piVar3 + 1;
                        iVar7 = iVar7 + 1;
                        iVar1 = *piVar3;
                    }
                    arg3_00 = fcn.000261ac(0,iVar7 * 2 + 2,arg2_00,arg3_00);
                    if (arg3_00 == NULL) {
                        return 0x8000000000000009;
                    }
                    fcn.00024c7c(arg3_00,arg2_00 >> 1,piVar9,uVar12 >> 1);
                }
            }
            else {
                piVar8 = fcn.00024fbc(arg1_01,0x268a4);
            }
            iVar7 = 0;
            piVar9 = piVar8;
        } while (piVar8 != NULL);
        if (arg3_00 != NULL) {
            iVar10 = iVar7;
            for (piVar8 = *arg2; *piVar8 != 0; piVar8 = piVar8 + 1) {
                iVar10 = iVar10 + 1;
            }
            iVar1 = *arg3_00;
            piVar8 = arg3_00;
            iVar11 = iVar7;
            while (iVar1 != 0) {
                piVar8 = piVar8 + 1;
                iVar11 = iVar11 + 1;
                iVar1 = *piVar8;
            }
            iVar14 = iVar7;
            for (piVar8 = *arg2; *piVar8 != 0; piVar8 = piVar8 + 1) {
                iVar14 = iVar14 + 1;
            }
            iVar1 = *arg3_00;
            piVar8 = arg3_00;
            noname_0 = iVar7;
            while (iVar1 != 0) {
                piVar8 = piVar8 + 1;
                noname_0 = noname_0 + 1;
                iVar1 = *piVar8;
            }
            for (piVar8 = *arg2; *piVar8 != 0; piVar8 = piVar8 + 1) {
                iVar7 = iVar7 + 1;
            }
            iVar7 = fcn.000261ac(noname_0,iVar7 * 2 + 2,(iVar14 + noname_0) * 2 + 6,*arg2);
            *arg2 = iVar7;
            if (iVar7 == 0) {
                uVar13 = 0x8000000000000009;
                goto code_r0x000111f0;
            }
            fcn.00024bac(iVar7,(iVar11 + iVar10) * 2 + 6U >> 1,arg3_00);
            *arg4 = 1;
        }
    }
    uVar13 = 0;
code_r0x000111f0:
    if (arg3_00 != NULL) {
        (**(*0x27020 + 0x48))(arg3_00);
    }
    return uVar13;
}


/* fcn.00011224 @ 0x11224 */

int64_t fcn.00011224(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    uint32_t arg1_00;
    ushort *puVar2;
    int64_t iVar3;
    int16_t *arg3_00;
    int16_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int16_t iVar8;
    int16_t iVar9;
    int64_t iVar10;
    char acStackX_8 [8];
    ushort uStackX_20;
    int16_t *apiStack_48 [2];
    
    iVar6 = 0;
    iVar8 = 0;
    uStackX_20 = 0;
    acStackX_8[0] = '\0';
    iVar10 = -0x7ffffffffffffff7;
    arg1_00 = fcn.00024fbc(arg2,arg3);
    puVar2 = fcn.00024fbc(arg1_00 + 2,0x268e8);
    if (puVar2 != NULL) {
        uStackX_20 = *puVar2;
        *puVar2 = iVar6;
    }
    iVar3 = fcn.00024fbc(*arg1,arg3);
    iVar3 = iVar3 + 2;
    arg3_00 = fcn.00024fbc(iVar3,0x268e8);
    iVar9 = iVar6;
    if (arg3_00 != NULL) {
        iVar8 = *arg3_00;
        *arg3_00 = iVar9;
    }
    for (piVar4 = *arg1; *piVar4 != iVar9; piVar4 = piVar4 + 1) {
        iVar6 = iVar6 + 1;
    }
    apiStack_48[0] = fcn.00026148(iVar3,iVar6 * 2 + 2,*arg1);
    if (apiStack_48[0] == NULL) goto code_r0x00011355;
    iVar10 = fcn.00024fbc(arg1_00,0x268d0);
    iVar6 = 0;
    if (iVar10 == 0) {
        iVar10 = fcn.00010f50(arg2,apiStack_48,arg3,acStackX_8);
    }
    else {
        iVar10 = fcn.00010ba4(arg2,apiStack_48,arg3,acStackX_8);
    }
    piVar4 = apiStack_48[0];
    if (iVar10 < 0) {
code_r0x0001133e:
    }
    else {
        if (arg3_00 != NULL) {
            *arg3_00 = iVar8;
        }
        if (acStackX_8[0] == '\0') {
            iVar10 = iVar6;
            goto code_r0x0001133e;
        }
        if (arg3_00 == NULL) {
            iVar8 = *apiStack_48[0];
            iVar3 = iVar6;
            piVar1 = apiStack_48[0];
            while (iVar8 != 0) {
                piVar1 = piVar1 + 1;
                iVar3 = iVar3 + 1;
                iVar8 = *piVar1;
            }
            uVar7 = iVar3 * 2 + 4;
        }
        else {
            iVar8 = *apiStack_48[0];
            iVar3 = iVar6;
            piVar1 = apiStack_48[0];
            while (iVar8 != 0) {
                piVar1 = piVar1 + 1;
                iVar3 = iVar3 + 1;
                iVar8 = *piVar1;
            }
            iVar8 = *arg3_00;
            piVar1 = arg3_00;
            iVar5 = iVar6;
            while (iVar8 != 0) {
                piVar1 = piVar1 + 1;
                iVar5 = iVar5 + 1;
                iVar8 = *piVar1;
            }
            uVar7 = (iVar5 + iVar3) * 2 + 6;
        }
        iVar3 = fcn.000260fc(4,uVar7);
        if (iVar3 != 0) {
            fcn.00024bac(iVar3,uVar7 >> 1,piVar4);
            if (arg3_00 != NULL) {
                fcn.00024bac(iVar3,uVar7 >> 1,arg3_00);
            }
            (**(*0x27020 + 0x48))(*arg1);
            *arg1 = iVar3;
            iVar10 = iVar6;
        }
    }
    if (piVar4 != NULL) {
        (**(*0x27020 + 0x48))(piVar4);
    }
code_r0x00011355:
    if (puVar2 != NULL) {
        *puVar2 = uStackX_20;
    }
    return iVar10;
}


/* fcn.0001188c @ 0x1188c */

int64_t fcn.0001188c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    iVar1 = (**0x26738)(0x26720,arg1,auStackX_10,auStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.000260fc(4,auStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**0x26738)(0x26720,arg1,iVar1,auStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x27020 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00026334 @ 0x26334 */

int64_t fcn.00026334(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x27028 + 0x48))(L"PlatformLang",0x26540,0,aiStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000260c8(aiStackX_18[0]);
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x27028 + 0x48))(L"PlatformLang",0x26540,0,aiStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x27020 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.000263f0 @ 0x263f0 */

uint32_t * fcn.000263f0(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *arg1_00;
    uint64_t uVar4;
    uint32_t *puVar5;
    char **ppcVar6;
    uint64_t arg3_00;
    uint in_R8;
    char *pcVar7;
    uint in_R9;
    char *pcStackX_18;
    char *pcStackX_20;
    
    pcVar7 = CONCAT44(in_R8,arg3);
    pcStackX_20 = CONCAT44(in_R9,arg4);
    if (pcVar7 != NULL) {
        ppcVar6 = &pcStackX_18;
        pcStackX_18 = pcVar7;
        do {
            cVar2 = *pcVar7;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00026440:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = pcVar7[uVar4];
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (pcVar7[uVar4] != '\0');
                if (uVar4 < 4) goto code_r0x00026440;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = pcVar7[uVar4];
                    } while (cVar2 != '\0');
                    goto code_r0x000264db;
                }
            }
            else {
code_r0x000264db:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    puVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*puVar5 != '\0' && (*puVar5 == ';')); puVar5 = puVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *puVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = *(puVar5 + arg3_00);
                            }
                            if (uVar4 <= arg3_00) goto code_r0x000264a8;
                        }
                        else {
code_r0x000264a8:
                            iVar3 = fcn.00025114(puVar5,pcVar7,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.000260fc(4,arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != puVar5) {
                                        puVar5 = section..text(arg1_00,puVar5,arg3_00);
                                        return puVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        puVar5 = puVar5 + arg3_00;
                        cVar2 = *puVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x000264e0;
                    do {
                        if (pcVar7[uVar4] == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x000264db;
                }
            }
code_r0x000264e0:
            ppcVar6 = ppcVar6 + 1;
            pcVar7 = *ppcVar6;
        } while (pcVar7 != NULL);
    }
    return NULL;
}


/* fcn.0001191c @ 0x1191c */

int64_t fcn.0001191c(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t in_R8;
    uint32_t arg4;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong auStack_28 [2];
    
    iStackX_20 = 0;
    iVar3 = 0;
    iVar1 = arg1;
    arg1_00 = fcn.0001188c(arg1);
    if (arg1_00 != 0) {
        fcn.00026334(iVar1,&iStackX_20,in_R8);
        arg4 = 0x26916;
        if (iStackX_20 != 0) {
            arg4 = iStackX_20;
        }
        iVar1 = fcn.000263f0(arg1_00,0,0x26916,arg4);
        if (iVar1 != 0) {
            auStack_28[0] = 0;
            iVar2 = (**0x26728)(0x26720,iVar1,arg1,arg2 & 0xffff,auStackX_18,auStack_28,0);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar3 = fcn.000260fc(4,auStack_28[0]);
                if (iVar3 != 0) {
                    iVar2 = (**0x26728)(0x26720,iVar1,arg1,arg2 & 0xffff,iVar3,auStack_28,0);
                    if (iVar2 < 0) {
                        (**(*0x27020 + 0x48))(iVar3);
                        iVar3 = 0;
                    }
                }
            }
        }
        (**(*0x27020 + 0x48))(arg1_00);
        if (iStackX_20 != 0) {
            (**(*0x27020 + 0x48))(iStackX_20);
        }
        if (iVar1 != 0) {
            (**(*0x27020 + 0x48))(iVar1);
        }
    }
    return iVar3;
}


/* fcn.00021890 @ 0x21890 */

ulong fcn.00021890(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    ulong uVar1;
    int64_t iVar2;
    int64_t unaff_RSI;
    ulong *puVar3;
    int64_t arg3_00;
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    if (((arg3 == 0) || (in_stack_00000038 == NULL)) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = 0;
        for (puVar3 = *(arg3 + 0x28); puVar3 != arg3 + 0x28; puVar3 = *puVar3) {
            arg2_00 = puVar3 + -2;
            iVar2 = iVar2 + (*arg2_00 & 0xffffff);
            if ((in_stack_00000030 != NULL) && (*in_stack_00000038 + iVar2 + arg4 <= in_stack_00000028)) {
                fcn.000207ec(arg1,4,puVar3 + -3,CONCAT71(arg4 >> 8,2),unaff_RSI);
                if (in_stack_00000030 != arg2_00) {
                    section..text(in_stack_00000030,arg2_00,4);
                }
                arg3_00 = (*arg2_00 & 0xffffff) - 4;
                if ((arg3_00 != 0) && (in_stack_00000030 + 1 != puVar3[-1])) {
                    section..text(in_stack_00000030 + 1,puVar3[-1],arg3_00);
                }
                in_stack_00000030 = in_stack_00000030 + (*arg2_00 & 0xffffff);
            }
        }
        *in_stack_00000038 = *in_stack_00000038 + iVar2;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000260c8 @ 0x260c8 */

ulong fcn.000260c8(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x27020 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00011b4c @ 0x11b4c */

int64_t fcn.00011b4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00021890(0x26680,*(arg1 + 0x18),*(arg1 + 8),0);
        if (-1 < iVar1) {
            iVar1 = fcn.000260c8(0);
            *arg2 = iVar1;
            if (iVar1 == 0) {
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                iVar1 = fcn.00021890(0x26680,*(arg1 + 0x18),*(arg1 + 8),0);
                if (iVar1 < 0) {
                    (**(*0x27020 + 0x48))(*arg2);
                }
                *arg3 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00024eec @ 0x24eec */

ulong fcn.00024eec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint16_t uVar2;
    
    uVar2 = 0;
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00024d98(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < uVar1 + 1 + arg1) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00024f6e;
    }
    if (arg1 < arg2 + arg3 * 2) {
        return 0x800000000000000f;
    }
code_r0x00024f6e:
    for (; *arg1 != 0; arg1 = arg1 + 1) {
        *arg2 = *arg1;
        arg2 = arg2 + 2;
    }
    *arg2 = uVar2;
    return 0;
}


/* fcn.00010688 @ 0x10688 */

void fcn.00010688(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint32_t uVar4;
    uint32_t arg1_01;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t noname_2;
    uint64_t uVar8;
    uint8_t *puVar9;
    int64_t *in_stack_00000028;
    
    iVar6 = 0;
    uVar4 = arg4 & 0xff;
    if (arg3 == 0) {
        iVar1 = *arg1;
        piVar2 = arg1;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
        iVar6 = fcn.00026148(arg1,iVar6 * 2 + 2,arg1);
        *in_stack_00000028 = iVar6;
    }
    else {
        iVar1 = *arg1;
        piVar2 = arg1;
        iVar5 = iVar6;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar2;
        }
        iVar5 = iVar5 + (arg2 + 1) * 2;
        arg1_00 = fcn.000260fc(4,iVar5 * 2);
        iVar7 = iVar5;
        noname_2 = arg1;
        fcn.00024a2c(arg1_00,iVar5,arg1);
        for (; *arg1 != 0; arg1 = arg1 + 2) {
            iVar6 = iVar6 + 1;
        }
        iVar6 = arg1_00 + iVar6 * 2;
        arg1_01 = arg1_00;
        if (uVar4 == 1) {
            if (arg2 != 0) {
                iVar3 = fcn.000249f8(arg1_01,iVar7);
                iVar7 = iVar7 - iVar3;
                do {
                    fcn.000251ac(iVar6,iVar7 * 2,noname_2,*arg3);
                    iVar7 = iVar5;
                    iVar3 = fcn.000249f8(arg1_01,iVar5);
                    iVar7 = iVar7 - iVar3;
                    iVar3 = fcn.000249f8(iVar6,iVar7);
                    arg3 = arg3 + 1;
                    iVar6 = iVar6 + iVar3 * 2;
                    arg2 = arg2 + -1;
                } while (arg2 != 0);
            }
        }
        else if (uVar4 == 2) {
            uVar8 = *arg3;
            if (*arg3 != 0) {
                iVar3 = fcn.000249f8(arg1_01,iVar7);
                iVar7 = iVar7 - iVar3;
                do {
                    fcn.000251ac(iVar6,iVar7 * 2,noname_2,uVar8 & 0xffff);
                    iVar7 = iVar5;
                    iVar3 = fcn.000249f8(arg1_01,iVar5);
                    iVar7 = iVar7 - iVar3;
                    iVar3 = fcn.000249f8(iVar6,iVar7);
                    arg3 = arg3 + 2;
                    uVar8 = *arg3;
                    iVar6 = iVar6 + iVar3 * 2;
                } while (*arg3 != 0);
            }
        }
        else if ((uVar4 == 3) && (puVar9 = arg3 + -1 + arg2, arg2 != 0)) {
            iVar3 = fcn.000249f8(arg1_01,iVar7);
            iVar7 = iVar7 - iVar3;
            do {
                fcn.000251ac(iVar6,iVar7 * 2,noname_2,*puVar9);
                iVar7 = iVar5;
                iVar3 = fcn.000249f8(arg1_01,iVar5);
                iVar7 = iVar7 - iVar3;
                iVar3 = fcn.000249f8(iVar6,iVar7);
                puVar9 = puVar9 + -1;
                iVar6 = iVar6 + iVar3 * 2;
                arg2 = arg2 + -1;
            } while (arg2 != 0);
        }
        fcn.00024bac(arg1_00,iVar5,0x268a4);
        fcn.00010648(arg1_01);
        *in_stack_00000028 = arg1_00;
    }
    return;
}


/* fcn.00011fb0 @ 0x11fb0 */

uchar fcn.00011fb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    unkbyte7 in_R9;
    uint32_t arg3_00;
    uchar uVar7;
    int16_t *piStackX_10;
    int16_t *piStackX_20;
    
    iVar6 = 0;
    arg3_00 = 0;
    piStackX_10 = NULL;
    uVar7 = 0;
    if (((arg2 == 0) && (arg3 != 0)) && (iVar3 = fcn.00024fbc(arg3,0x26948), iVar3 == 0)) {
        return 0;
    }
    fcn.00010688(0x268c0,0x10,arg1,CONCAT71(in_R9,1));
    if (arg2 == 0) {
        arg2 = 0;
        iVar3 = 0;
    }
    else {
        iVar1 = *arg2;
        piVar4 = arg2;
        iVar3 = iVar6;
        while (iVar1 != 0) {
            piVar4 = piVar4 + 1;
            iVar3 = iVar3 + 1;
            iVar1 = *piVar4;
        }
        iVar3 = iVar3 * 2;
    }
    fcn.00010688(0x26938,iVar3,arg2,CONCAT71(in_R9,2));
    iVar3 = iVar6;
    iVar1 = _pe_dos_header;
    while (iVar1 != 0) {
        piStackX_10 = piStackX_10 + 1;
        iVar3 = iVar3 + 1;
        iVar1 = *piStackX_10;
    }
    iVar1 = *piStackX_20;
    iVar5 = iVar6;
    piVar4 = piStackX_20;
    while (iVar1 != 0) {
        piVar4 = piVar4 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piVar4;
    }
    iVar3 = iVar5 + 1 + iVar3;
    piVar4 = fcn.000260fc(4,iVar3 * 2);
    if (piVar4 != NULL) {
        fcn.00024a2c(piVar4,iVar3,0);
        fcn.00024bac(piVar4,iVar3,piStackX_20);
        if (arg3 != 0) {
            iVar1 = *piVar4;
            piVar2 = piVar4;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                iVar6 = iVar6 + 1;
                arg3_00 = iVar6;
                iVar1 = *piVar2;
            }
            iVar6 = fcn.00024f80(arg3,piVar4,arg3_00);
            if (iVar6 != 0) goto code_r0x00012104;
        }
        uVar7 = 1;
    }
code_r0x00012104:
    (**(*0x27020 + 0x48))(0);
    (**(*0x27020 + 0x48))(piStackX_20);
    if (piVar4 != NULL) {
        (**(*0x27020 + 0x48))(piVar4);
    }
    return uVar7;
}


/* fcn.00011a88 @ 0x11a88 */

ulong fcn.00011a88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint32_t arg3_00;
    int64_t in_stack_00000028;
    
    if (arg1 == 0) {
code_r0x00011ab5:
        uVar1 = 1;
    }
    else {
        for (puVar5 = *arg1; puVar5 != arg1; puVar5 = *puVar5) {
            if (arg4 == '\0') {
                if ((*(puVar5 + 2) <= arg2) && (arg2 + arg3 <= *(puVar5 + 0x12) + *(puVar5 + 2))) goto code_r0x00011ab5;
            }
            else {
                piVar2 = fcn.0001191c(in_stack_00000028,arg2 & 0xffff);
                arg3_00 = 0;
                for (piVar3 = piVar2; *piVar3 != 0; piVar3 = piVar3 + 1) {
                    arg3_00 = arg3_00 + 1;
                }
                iVar4 = fcn.00024f80(puVar5[6],piVar2,arg3_00);
                if (iVar4 == 0) {
                    (**(*0x27020 + 0x48))(piVar2);
                    goto code_r0x00011ab5;
                }
                (**(*0x27020 + 0x48))();
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000117f0 @ 0x117f0 */

void fcn.000117f0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar2 = *arg2;
    if (piVar2[6] == 0) {
        piVar4 = *arg1;
        if (piVar4 != arg1) {
            do {
                if (*(piVar4 + 2) == *(piVar2 + 2)) {
                    uVar1 = *(piVar2 + 0x12);
                    if (uVar1 < *(piVar4 + 0x12)) break;
                    if (piVar2[7] == '\0') {
                        if (*(piVar4 + 0x12) == uVar1) {
                            if (piVar2 == piVar4) {
                                return;
                            }
                            (**(*0x27020 + 0x48))();
                            *arg2 = piVar4;
                            return;
                        }
                    }
                    else if (*(piVar4 + 0x12) == uVar1) break;
                }
                else if (*(piVar2 + 2) < *(piVar4 + 2)) break;
                piVar4 = *piVar4;
            } while (piVar4 != arg1);
        }
        *piVar2 = piVar4;
        piVar3 = piVar4[1];
        piVar2[1] = piVar3;
        *piVar3 = piVar2;
        piVar4[1] = piVar2;
    }
    else {
        *piVar2 = arg1;
        piVar4 = *(arg1 + 8);
        piVar2[1] = piVar4;
        *piVar4 = piVar2;
        *(arg1 + 8) = piVar2;
    }
    return;
}


/* fcn.00012324 @ 0x12324 */

ulong fcn.00012324(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    uint16_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint in_R8;
    int64_t iVar9;
    uint16_t uStackX_18;
    int64_t iStackX_20;
    uint16_t in_stack_00000028;
    int64_t *in_stack_00000030;
    char in_stack_00000038;
    
    iVar9 = CONCAT44(in_R8,arg3);
    uStackX_18 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = in_stack_00000028;
    if (*(iVar9 + 0x2a) == '\x01') {
        uStackX_18 = *(arg4 + 10);
        cVar2 = fcn.00011a88(arg1,uStackX_18,0,CONCAT71(arg4 >> 8,1));
        in_stack_00000028 = 0;
        if (cVar2 != '\0') {
code_r0x00012415:
            iVar4 = fcn.000260fc(4,0x40);
            if (iVar4 == 0) {
                return 0x8000000000000009;
            }
            iStackX_20 = iVar4;
            if (*(iVar9 + 0x2a) == '\x01') {
                uVar5 = fcn.0001191c(arg2,uStackX_18);
                *(iVar4 + 0x30) = uVar5;
            }
            else {
                *(iVar4 + 0x10) = uVar7;
            }
            *(iVar4 + 0x12) = uVar8;
            *(iVar4 + 0x18) = *(arg4 + 6);
            *(iVar4 + 0x1a) = *arg4;
            *(iVar4 + 0x1b) = *(arg4 + 1) >> 7;
            *(iVar4 + 0x38) = in_stack_00000038;
            iVar1 = iVar4 + 0x20;
            *(iVar4 + 0x14) = uVar6;
            *(iVar4 + 0x16) = in_stack_00000028;
            *iVar1 = iVar1;
            *(iVar4 + 0x28) = iVar1;
            fcn.000117f0(iVar9 + 0x30,&iStackX_20);
            *in_stack_00000030 = iStackX_20;
            return 0;
        }
    }
    else {
        if (in_stack_00000038 == '\0') {
            uVar7 = *(arg4 + 10);
            uVar6 = uVar7 << 3;
        }
        else {
            uVar6 = *(arg4 + 10);
            uVar7 = uVar6 >> 3;
            uVar3 = (uVar6 & 7) + in_stack_00000028;
            uVar8 = uVar3 >> 3;
            if ((uVar3 & 7) != 0) {
                uVar8 = uVar8 + 1;
            }
        }
        cVar2 = fcn.00011a88(arg1,uVar7,uVar8,0);
        if (cVar2 != '\0') {
            if (*(iVar9 + 0x28) < uVar7 + uVar8) {
                return 0x8000000000000002;
            }
            goto code_r0x00012415;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00011740 @ 0x11740 */

void fcn.00011740(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint32_t *arg1_00;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1) + 0x20;
    piVar3 = *piVar2;
    if (piVar3 != piVar2) {
        do {
            if (*(piVar3 + 0x16) == *(arg2 + 0x16)) {
                if (*(arg2 + 0x10) <= piVar3[2]) {
                    if (*(arg2 + 0x10) != piVar3[2]) {
                        return;
                    }
                    if (*(arg2 + 0x10) != 1) {
                        return;
                    }
                }
                if (piVar3 + 3 != arg2 + 0x18) {
                    section..text(piVar3 + 3,arg2 + 0x18,0x16);
                }
                *(piVar3 + 2) = *(arg2 + 0x10);
                *(piVar3 + 0x14) = *(arg2 + 0x14);
                return;
            }
            piVar3 = *piVar3;
        } while (piVar3 != piVar2);
    }
    arg1_00 = fcn.000260fc(4,0x30);
    if (arg1_00 != arg2) {
        section..text(arg1_00,arg2,0x30);
    }
    *arg1_00 = piVar3;
    puVar1 = piVar3[1];
    *(arg1_00 + 2) = puVar1;
    *puVar1 = arg1_00;
    piVar3[1] = arg1_00;
    return;
}


/* fcn.00025148 @ 0x25148 */

void fcn.00025148(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0002533c(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0002533c @ 0x2533c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0002533c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0002539b;
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
code_r0x0002539b:
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
        uVar21 = fcn.00024d98(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.000249f8(arg4,0xf4241);
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
            pcVar8 = 0x26c44;
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
code_r0x00025756:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x26c44;
            }
            else {
                pcVar8 = 0x26c48;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x000254ed:
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
                    goto code_r0x00025690;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000256a7;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00025690;
                        }
                        goto code_r0x000256a7;
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
code_r0x00025690:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x000254ed;
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
                        goto code_r0x000254ed;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000256a7;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00025690;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000256a7:
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
                        fcn.000260a4(&var_68h_2,0x26,0,0x26bd8);
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
                            goto code_r0x00025756;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0002593f;
                        if (uStack_a8 == 0x58) goto code_r0x00025a34;
                        if (uStack_a8 == 0x61) goto code_r0x00025948;
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
                            goto code_r0x000254ce;
                        }
                        if (uStack_a8 != 100) goto code_r0x000254ca;
                        goto code_r0x00025a4b;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x26c44;
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
                goto code_r0x00025c78;
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
                            iVar12 = 0x26cdb;
                            goto code_r0x000259fb;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x000259fb:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00025c78;
                    }
                    fcn.000260a4(&var_68h_2,0x26,0,0x26c3c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0002593f:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00025948:
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
                        goto code_r0x00025c78;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000254ca;
                            goto code_r0x00025a38;
                        }
                        goto code_r0x00025a3d;
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
                        goto code_r0x00025c78;
                    }
                    fcn.000260a4(&var_68h_2,0x26,0,0x26c20);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00025c78;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x00025a34:
            uVar21 = uVar21 | 0x20;
code_r0x00025a38:
            uVar21 = uVar21 | 0x80;
code_r0x00025a3d:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00025a4b:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00025a8d;
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
code_r0x00025a8d:
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
code_r0x00025b15:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x00025b15;
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
code_r0x000254ca:
            pcVar8 = &uStack_a8;
code_r0x000254ce:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00025c78:
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
                arg1 = fcn.00025178(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00025178(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00025178(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00025178(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.000262b8 @ 0x262b8 */

char * fcn.000262b8(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00026228(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00013a6c @ 0x13a6c */

void fcn.00013a6c(uint32_t arg1)

{
    ulong *puVar1;
    char cVar2;
    char cVar3;
    uint8_t uVar4;
    uint in_register_0000000c;
    ulong *puVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    
    puVar5 = CONCAT44(in_register_0000000c,arg1);
    for (puVar10 = *puVar5; puVar10 != puVar5; puVar10 = *puVar10) {
        if (*(puVar10 + 7) != '\0') {
            for (puVar9 = puVar10[4]; puVar9 != puVar10 + 4; puVar9 = *puVar9) {
                uVar4 = *(puVar10 + 0x14) & 7;
                *(puVar9 + 3) = ~(-2LL << ((*(puVar10 + 0x16) + uVar4) - 1 & 0x3f)) & *(puVar9 + 3) << uVar4;
            }
        }
    }
    for (puVar10 = *puVar5; puVar10 != puVar5; puVar10 = *puVar10) {
        if (*(puVar10 + 7) != '\0') {
            for (puVar9 = *puVar10; puVar9 != puVar5; puVar9 = *puVar9) {
                if (*(puVar9 + 7) != '\0') {
                    if ((*(puVar9 + 2) < *(puVar10 + 0x12) + *(puVar10 + 2)) &&
                       (*(puVar10 + 2) < *(puVar9 + 0x12) + *(puVar9 + 2))) {
                        puVar1 = puVar10 + 4;
                        puVar7 = *puVar1;
                        if (puVar7 != puVar1) {
                            do {
                                for (puVar6 = puVar9[4]; puVar6 != puVar9 + 4; puVar6 = *puVar6) {
                                    if (*(puVar7 + 0x16) == *(puVar6 + 0x16)) {
                                        cVar2 = *(puVar10 + 2);
                                        cVar3 = *(puVar9 + 2);
                                        if (*(puVar9 + 2) < *(puVar10 + 2)) {
                                            cVar2 = cVar2 - cVar3;
                                            uVar4 = cVar2 * '\b';
                                            uVar8 = *(puVar7 + 3) << (uVar4 & 0x3f) | *(puVar6 + 3);
                                            *(puVar6 + 3) = ~(-2LL << (*(puVar9 + 0x12) * '\b' - 1U & 0x3f)) & uVar8;
                                            *(puVar7 + 3) =
                                                 (~(-2LL << ((*(puVar10 + 0x12) + cVar2) * '\b' - 1U & 0x3f)) & uVar8)
                                                 >> (uVar4 & 0x3f);
                                        }
                                        else {
                                            cVar3 = cVar3 - cVar2;
                                            uVar4 = cVar3 * '\b';
                                            uVar8 = *(puVar6 + 3) << (uVar4 & 0x3f) | *(puVar7 + 3);
                                            *(puVar7 + 3) = ~(-2LL << (*(puVar10 + 0x12) * '\b' - 1U & 0x3f)) & uVar8;
                                            *(puVar6 + 3) =
                                                 (~(-2LL << ((*(puVar9 + 0x12) + cVar3) * '\b' - 1U & 0x3f)) & uVar8) >>
                                                 (uVar4 & 0x3f);
                                        }
                                    }
                                }
                                puVar7 = *puVar7;
                            } while (puVar7 != puVar1);
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000131cc @ 0x131cc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t * fcn.000131cc(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t *piVar2;
    int64_t *arg1_00;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char16_t *pcVar6;
    uint32_t *arg2_00;
    int64_t *piVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char16_t *pcVar12;
    uint32_t *puVar13;
    int64_t iVar14;
    ushort auStackX_18 [4];
    ushort auStackX_20 [4];
    int16_t var_50h;
    int16_t var_58h;
    uint32_t *puStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    puVar13 = NULL;
    puStack_58 = NULL;
    arg1_00 = fcn.000260fc(4,0x40);
    if (arg1_00 == NULL) {
        return NULL;
    }
    *arg1_00 = arg1_00;
    arg1_00[1] = arg1_00;
    if (*arg1 != 0) {
        arg2_00 = puVar13;
        iVar14 = iStack_50;
        do {
            iVar11 = -0x7ffffffffffffffe;
            piVar3 = 0x268d0;
            puVar9 = puVar13;
            do {
                piVar3 = piVar3 + 1;
                puVar9 = puVar9 + 1;
            } while (*piVar3 != 0);
            iVar4 = fcn.00024f80(arg1,0x268d0,puVar9);
            if (iVar4 != 0) break;
            *arg2 = arg1;
            piVar3 = 0x268d0;
            puVar9 = puVar13;
            do {
                piVar3 = piVar3 + 1;
                puVar9 = puVar9 + 1;
            } while (*piVar3 != 0);
            piVar3 = arg1 + puVar9 * 2;
            if (piVar3 != NULL) {
                iVar11 = fcn.00010a40(piVar3,&puStack_58,&iStack_50);
                arg2_00 = puStack_58;
                iVar14 = iStack_50;
            }
            if (iVar11 < 0) {
code_r0x000134a3:
                while (piVar7 = *arg1_00, piVar7 != arg1_00) {
                    *(*piVar7 + 8) = piVar7[1];
                    *piVar7[1] = *piVar7;
                    (**(*0x27020 + 0x48))();
                }
                (**(*0x27020 + 0x48))(arg1_00);
                return NULL;
            }
            auStackX_18[0] = 0;
            uVar5 = iVar14 + 1U >> 1;
            uVar10 = 2;
            if (uVar5 < 2) {
                uVar10 = uVar5;
            }
            if ((uVar10 != 0) && (auStackX_18 != arg2_00)) {
                section..text(auStackX_18,arg2_00,uVar10);
            }
            (**(*0x27020 + 0x48))(arg2_00);
            pcVar12 = L"&WIDTH=";
            pcVar6 = L"&WIDTH=";
            piVar3 = piVar3 + iVar14;
            puVar9 = puVar13;
            do {
                pcVar6 = pcVar6 + 1;
                puVar9 = puVar9 + 1;
            } while (*pcVar6 != L'\0');
            iVar11 = fcn.00024f80(piVar3,0x26958,puVar9);
            if (iVar11 != 0) goto code_r0x000134a3;
            puVar9 = puVar13;
            do {
                pcVar12 = pcVar12 + 1;
                puVar9 = puVar9 + 1;
            } while (*pcVar12 != L'\0');
            piVar3 = piVar3 + puVar9;
            if (piVar3 == NULL) {
                iVar11 = -0x7ffffffffffffffe;
            }
            else {
                iVar11 = fcn.00010a40(piVar3,&puStack_58,&iStack_50);
                arg2_00 = puStack_58;
                iVar14 = iStack_50;
            }
            if (iVar11 < 0) goto code_r0x000134a3;
            auStackX_20[0] = 0;
            uVar5 = iVar14 + 1U >> 1;
            uVar10 = 2;
            if (uVar5 < 2) {
                uVar10 = uVar5;
            }
            if ((uVar10 != 0) && (auStackX_20 != arg2_00)) {
                section..text(auStackX_20,arg2_00,uVar10);
            }
            (**(*0x27020 + 0x48))(arg2_00);
            arg1 = piVar3 + iVar14;
            if (((*arg1 != 0) && (*arg1 != 0x26)) || (aiStack_48[0] = fcn.000260fc(4,0x40), aiStack_48[0] == 0))
            goto code_r0x000134a3;
            *(aiStack_48[0] + 0x10) = auStackX_18[0];
            *(aiStack_48[0] + 0x12) = auStackX_20[0];
            fcn.000117f0(arg1_00,aiStack_48);
            piVar3 = 0x26968;
            puVar9 = puVar13;
            do {
                piVar3 = piVar3 + 1;
                puVar9 = puVar9 + 1;
            } while (*piVar3 != 0);
            iVar11 = fcn.00024f80(arg1,0x26968,puVar9);
            if (iVar11 == 0) {
                piVar3 = 0x26968;
                puVar9 = puVar13;
                do {
                    piVar3 = piVar3 + 1;
                    puVar9 = puVar9 + 1;
                } while (*piVar3 != 0);
                piVar3 = arg1 + puVar9 * 2;
                if (piVar3 == NULL) {
                    iVar11 = -0x7ffffffffffffffe;
                }
                else {
                    iVar11 = fcn.00010a40(piVar3,&puStack_58,&iStack_50);
                    arg2_00 = puStack_58;
                    iVar14 = iStack_50;
                }
                if (iVar11 < 0) goto code_r0x000134a3;
                (**(*0x27020 + 0x48))(arg2_00);
                arg1 = piVar3 + iVar14;
                if (*arg1 == 0) break;
                if (*arg1 != 0x26) goto code_r0x000134a3;
            }
        } while (*arg1 != 0);
    }
    piVar7 = *arg1_00;
    do {
        while( true ) {
            if ((piVar7 == arg1_00) || (piVar2 = *piVar7, piVar2 == arg1_00)) {
                return arg1_00;
            }
            uVar1 = *(piVar7 + 2);
            if (uVar1 <= *(piVar2 + 2)) break;
code_r0x00013538:
            piVar7 = piVar2;
        }
        uVar8 = uVar1 + *(piVar7 + 0x12);
        if (uVar8 < *(piVar2 + 2)) goto code_r0x00013538;
        if (uVar8 < *(piVar2 + 2) + *(piVar2 + 0x12)) {
            *(piVar7 + 0x12) = (*(piVar2 + 0x12) - uVar1) + piVar2[2];
        }
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        (**(*0x27020 + 0x48))(piVar2);
    } while( true );
}


/* fcn.00013548 @ 0x13548 */

int64_t * fcn.00013548(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t *piVar2;
    bool bVar3;
    int16_t *noname_0;
    bool bVar4;
    int64_t *arg1_00;
    int16_t *piVar5;
    int64_t iVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iStackX_8;
    
    arg1_00 = fcn.000260fc(4,0x40);
    if (arg1_00 == NULL) {
        return NULL;
    }
    *arg1_00 = arg1_00;
    arg1_00[1] = arg1_00;
    do {
        if ((arg1 == NULL) || (*arg1 != 0x26)) {
            return arg1_00;
        }
        *arg2 = arg1;
        arg1 = arg1 + 2;
        bVar3 = false;
        piVar5 = fcn.00024fbc(arg1,0x268e4);
        if (piVar5 == NULL) {
            piVar5 = fcn.00024fbc(arg1,0x268a4);
            bVar4 = false;
            if (piVar5 != NULL) goto code_r0x000135e2;
        }
        else {
            bVar4 = true;
code_r0x000135e2:
            bVar3 = bVar4;
            *piVar5 = 0;
        }
        iVar6 = fcn.000260fc(4,0x40);
        iStackX_8 = iVar6;
        if (iVar6 == 0) {
            while (piVar2 = *arg1_00, piVar2 != arg1_00) {
                *(*piVar2 + 8) = piVar2[1];
                *piVar2[1] = *piVar2;
                if (piVar2[6] != 0) {
                    (**(*0x27020 + 0x48))();
                }
                (**(*0x27020 + 0x48))(piVar2);
            }
            (**(*0x27020 + 0x48))(arg1_00);
            return NULL;
        }
        iVar1 = *arg1;
        noname_0 = arg1;
        iVar8 = 0;
        while (iVar1 != 0) {
            noname_0 = noname_0 + 1;
            iVar8 = iVar8 + 1;
            iVar1 = *noname_0;
        }
        uVar7 = fcn.00026148(noname_0,iVar8 * 2 + 2,arg1);
        *(iVar6 + 0x30) = uVar7;
        fcn.000117f0(arg1_00,&iStackX_8);
        if (bVar3) {
            *piVar5 = 0x3d;
            arg1 = fcn.00024fbc(piVar5 + 2,0x268a4);
        }
        else if (piVar5 != NULL) {
            *piVar5 = 0x26;
            arg1 = piVar5;
        }
    } while( true );
}


/* fcn.000124d8 @ 0x124d8 */

uint64_t fcn.000124d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    uint16_t uVar1;
    ulong *puVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    char cVar7;
    int16_t iVar8;
    uint64_t uVar9;
    ulong *puVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint8_t *arg4_00;
    int64_t *piVar15;
    uint32_t arg3_00;
    int64_t iVar16;
    uint16_t uVar17;
    uint32_t uVar18;
    int16_t iVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t *in_stack_00000038;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    char cStack_a0;
    char cStack_9f;
    uint32_t uStack_9c;
    uchar auStack_98 [16];
    uint uStack_88;
    uchar uStack_84;
    uint16_t uStack_82;
    uint32_t auStack_80 [6];
    uint64_t uStack_68;
    uint8_t *puStack_60;
    uint32_t *puStack_58;
    uint64_t uStack_50;
    
    uVar13 = 0;
    uVar14 = arg3 & 0xffffffff;
    uStack_b0 = 0;
    bVar4 = false;
    cStack_9f = '\0';
    uVar20 = 0;
    fcn.000102c0(auStack_98,0x30);
    uStack_a8 = 4;
    cStack_a0 = '\0';
    uVar18 = 0xffff;
    uStack_9c = 0xffff;
    bVar5 = false;
    bVar6 = false;
    uStack_68 = 4;
    uVar9 = uVar13;
    puStack_58 = arg2;
    uStack_50 = uVar14;
    if (4 < uVar14) {
        do {
            uVar14 = 0;
            iVar8 = 4;
            if ((*puStack_58 & 0xffffff) <= uStack_a8) {
                uStack_68 = uStack_68 + 4;
                uStack_a8 = 4;
                puStack_58 = uStack_68 + arg2;
                uVar20 = uVar14;
            }
            arg4_00 = uStack_68 + arg2;
            uVar11 = *arg4_00;
            bVar3 = false;
            iVar19 = uVar20;
            uVar17 = uVar18;
            uVar12 = uVar13;
            arg3_00 = in_stack_00000030;
            puStack_60 = arg4_00;
            if (uVar11 < 0x1d) {
                if (uVar11 == 0x1c) {
                    if (iVar19 == 0) goto code_r0x00013150;
                    if (*(arg4_00 + 8) == iVar19) goto code_r0x00012683;
                }
                else if (uVar11 == 1) {
code_r0x00012da6:
                    if (iVar19 == 0) {
                        uVar13 = uVar14;
                        goto code_r0x00013160;
                    }
                }
                else if (uVar11 == 5) {
code_r0x00012b61:
                    if (iVar19 == 0) {
code_r0x00013150:
                        uVar13 = 0x8000000000000002;
                        goto code_r0x00013160;
                    }
                    if (*(arg4_00 + 8) == iVar19) {
                        uStack_b0 = 0;
                        uVar9 = fcn.00012324(in_stack_00000028,arg1,arg3_00,arg4_00);
                        if (uVar9 < 0) goto code_r0x000126ae;
                        if (*arg4_00 == 5) {
                            bVar4 = true;
                            uVar13 = uStack_b0;
                            goto code_r0x00012b58;
                        }
                        if (*arg4_00 != 7) goto code_r0x00012806;
                        uStack_88 = 0;
                        if (bVar5) {
code_r0x00012c26:
                            if (auStack_80 != arg4_00 + 0xe) {
                                iVar16 = 4;
code_r0x00012c4e:
                                section..text(auStack_80,arg4_00 + 0xe,iVar16);
                            }
                        }
                        else {
                            uVar11 = arg4_00[0xd] & 3;
                            if ((arg4_00[0xd] & 3) == 0) {
                                auStack_80[0] = CONCAT31(auStack_80[0]._1_3_,arg4_00[0xe]);
                            }
                            else if (uVar11 == 1) {
                                if (auStack_80 != arg4_00 + 0xe) {
                                    iVar16 = 2;
                                    goto code_r0x00012c4e;
                                }
                            }
                            else {
                                if (uVar11 == 2) goto code_r0x00012c26;
                                if (uVar11 != 3) goto code_r0x00013150;
                                if (auStack_80 != arg4_00 + 0xe) {
                                    iVar16 = 8;
                                    goto code_r0x00012c4e;
                                }
                            }
                        }
                        uVar13 = uStack_b0;
                        piVar21 = *in_stack_00000038;
                        if (piVar21 == in_stack_00000038) {
                            bVar5 = bVar6;
                            goto code_r0x00012806;
                        }
                        do {
                            uStack_82 = *(piVar21 + 0x16);
                            fcn.00011740(uVar13,auStack_98);
                            piVar21 = *piVar21;
                        } while (piVar21 != in_stack_00000038);
code_r0x00012962:
                        bVar5 = bVar6;
                    }
                }
                else if (uVar11 == 6) {
                    if (iVar19 == 0) goto code_r0x00013150;
                    if (*(arg4_00 + 8) != iVar19) goto code_r0x0001279a;
                    uStack_b0 = 0;
                    uVar9 = fcn.00012324(in_stack_00000028,arg1,arg3_00,arg4_00);
                    uVar13 = uStack_b0;
                    if (uVar9 < 0) goto code_r0x000126ae;
                    uStack_82 = 0;
                    bVar3 = false;
                    uVar12 = uStack_b0;
                    if ((arg4_00[0xd] & 1) != 0) {
                        uStack_88 = 2;
                        if (bVar5) {
                            auStack_80[0] = 1;
                        }
                        else {
                            auStack_80[0] = CONCAT31(auStack_80[0]._1_3_,1);
                        }
                        fcn.00011740(uVar12,auStack_98);
                        if (uVar17 != 0) {
                            uVar18 = 0;
                            bVar3 = true;
                            uStack_9c = 0;
                        }
                    }
                    uStack_82 = 1;
                    if ((arg4_00[0xd] & 2) != 0) {
                        uStack_88 = 2;
                        if (bVar5) {
                            auStack_80[0] = 1;
                        }
                        else {
                            auStack_80[0] = CONCAT31(auStack_80[0]._1_3_,1);
                        }
                        fcn.00011740(uVar12,auStack_98);
                        if (1 < uVar18) {
                            uVar18 = 1;
                            bVar3 = true;
                            uStack_9c = 1;
                        }
                    }
                    if (bVar3) {
                        uStack_88 = 1;
                        if (bVar5) {
                            auStack_80[0] = 1;
                        }
                        else {
                            auStack_80[0] = CONCAT31(auStack_80[0]._1_3_,1);
                        }
                        piVar21 = *in_stack_00000038;
                        if (piVar21 != in_stack_00000038) {
                            do {
                                uStack_82 = *(piVar21 + 0x16);
                                fcn.00011740(uVar12,auStack_98);
                                piVar21 = *piVar21;
                            } while (piVar21 != in_stack_00000038);
                            goto code_r0x00012962;
                        }
                    }
                    else {
                        uStack_88 = 0;
                        if (bVar5) {
                            auStack_80[0] = 0;
                        }
                        else {
                            auStack_80[0] = auStack_80[0]._1_3_ << 8;
                        }
                        piVar21 = *in_stack_00000038;
                        if (piVar21 != in_stack_00000038) {
                            do {
                                uStack_82 = *(piVar21 + 0x16);
                                fcn.00011740(uVar12,auStack_98);
                                piVar21 = *piVar21;
                            } while (piVar21 != in_stack_00000038);
                            goto code_r0x00012962;
                        }
                    }
code_r0x00012b54:
                    bVar5 = bVar6;
code_r0x00012b58:
                }
                else {
                    if (uVar11 == 7) goto code_r0x00012b61;
                    if (uVar11 == 8) {
                        if (iVar19 == 0) goto code_r0x00013150;
                        if (*(arg4_00 + 8) == iVar19) {
                            uStack_b0 = 0;
                            uVar9 = fcn.00012324(in_stack_00000028,arg1,arg3_00,arg4_00);
                            if (uVar9 < 0) goto code_r0x000126ae;
                            uStack_b0 = 0;
                            uVar13 = 0;
                        }
                        goto code_r0x0001279a;
                    }
                    if (uVar11 != 9) {
                        if (uVar11 == 0xf) {
                            if (iVar19 != 0) {
                                iVar8 = *(arg4_00 + 8);
joined_r0x00012636:
                                if (iVar8 == iVar19) goto code_r0x00012683;
                                goto code_r0x0001279a;
                            }
                        }
                        else if (uVar11 == 0x1a) {
                            if (iVar19 != 0) {
                                iVar8 = *(arg4_00 + 8);
                                goto joined_r0x00012636;
                            }
                        }
                        else {
                            if (uVar11 != 0x1b) goto code_r0x00012d2a;
                            if (iVar19 != 0) {
                                iVar8 = *(arg4_00 + 8);
                                goto joined_r0x00012636;
                            }
                        }
                        goto code_r0x00013150;
                    }
                    if (uVar13 != 0) {
                        if (*(uVar13 + 0x1b) != '\0') {
                            if (*(uVar13 + 0x1a) != '#') {
                                if ((arg4_00[4] & 0x30) == 0) {
code_r0x000128fb:
                                    arg4_00 = puStack_60;
                                    if (!bVar4) goto code_r0x00012786;
                                    uStack_88 = 0;
                                    bVar4 = false;
                                    iVar16 = (puStack_60[1] & 0x7f) - 6;
                                    if ((iVar16 != 0) && (auStack_80 != puStack_60 + 6)) {
                                        section..text(auStack_80,puStack_60 + 6,iVar16);
                                    }
                                    piVar21 = *in_stack_00000038;
                                    if (piVar21 == in_stack_00000038) goto code_r0x00012fce;
                                    do {
                                        uStack_82 = *(piVar21 + 0x16);
                                        fcn.00011740(uVar12,auStack_98);
                                        piVar21 = *piVar21;
                                    } while (piVar21 != in_stack_00000038);
                                    goto code_r0x00012962;
                                }
                                bVar4 = false;
                                uStack_88 = 2;
                                iVar16 = (arg4_00[1] & 0x7f) - 6;
                                if ((iVar16 != 0) && (auStack_80 != arg4_00 + 6)) {
                                    section..text(auStack_80,arg4_00 + 6,iVar16);
                                }
                                if ((arg4_00[4] & 0x10) != 0) {
                                    uStack_82 = 0;
                                    fcn.00011740(uVar12,auStack_98);
                                    if (uVar17 != 0) {
                                        uStack_9c = 0;
                                        bVar3 = true;
                                        uVar18 = 0;
                                    }
                                }
                                if ((arg4_00[4] & 0x20) != 0) {
                                    uStack_82 = 1;
                                    fcn.00011740(uVar12,auStack_98);
                                    if (1 < uVar18) {
                                        uVar18 = 1;
                                        bVar3 = true;
                                        uStack_9c = 1;
                                    }
                                }
                                if (bVar3) {
                                    uStack_88 = 1;
                                    piVar21 = *in_stack_00000038;
                                    if (piVar21 != in_stack_00000038) {
                                        do {
                                            uStack_82 = *(piVar21 + 0x16);
                                            fcn.00011740(uVar12,auStack_98);
                                            piVar21 = *piVar21;
                                        } while (piVar21 != in_stack_00000038);
                                        goto code_r0x000128fb;
                                    }
                                }
                                goto code_r0x00012b58;
                            }
                            if (cStack_9f == '\0') goto code_r0x0001279a;
                            uVar11 = arg4_00[5];
                            if ((uVar11 & 0xfb) == 0) {
                                iVar8 = 1;
code_r0x0001272b:
                                uVar17 = *(uVar13 + 0x12) * iVar8;
                                *(uVar13 + 0x12) = uVar17;
                                cVar7 = fcn.00011a88(in_stack_00000028,*(uVar13 + 0x10),uVar17,*(uVar13 + 0x30) != 0)
                                ;
                                if (cVar7 == '\0') {
                                    if (*(uVar13 + 0x30) != 0) {
                                        (**(*0x27020 + 0x48))();
                                    }
                                    (**(*0x27020 + 0x48))(uVar13);
                                    uVar13 = 0;
                                    uStack_b0 = 0;
                                    goto code_r0x00012786;
                                }
                                if ((*(uVar13 + 0x30) != 0) ||
                                   (*(uVar13 + 0x10) + *(uVar13 + 0x12) <= *(in_stack_00000030 + 0x28))) {
                                    fcn.000117f0(in_stack_00000030 + 0x30,&uStack_b0);
                                    cStack_9f = '\0';
                                    goto code_r0x00012806;
                                }
                            }
                            else {
                                if (uVar11 == 1) {
                                    iVar8 = 2;
                                    goto code_r0x0001272b;
                                }
                                if (uVar11 == 2) goto code_r0x0001272b;
                                if (uVar11 == 3) {
                                    iVar8 = 8;
                                    goto code_r0x0001272b;
                                }
                            }
                            if (*(uVar13 + 0x30) != 0) {
                                (**(*0x27020 + 0x48))();
                            }
                            (**(*0x27020 + 0x48))(uVar13);
                            uVar13 = 0x8000000000000002;
                            goto code_r0x00013160;
                        }
                    }
                }
            }
            else if (uVar11 == 0x23) {
                cStack_9f = '\x01';
                if (iVar19 == 0) goto code_r0x00013150;
                uStack_b0 = 0;
                if (*(arg4_00 + 8) != iVar19) {
                    uVar13 = uVar14;
                    goto code_r0x0001279a;
                }
code_r0x00012683:
                uStack_b0 = 0;
                uVar9 = fcn.00012324(in_stack_00000028,arg1,arg3_00,arg4_00);
                if (uVar9 < 0) {
code_r0x000126ae:
                    uVar13 = uVar9;
                    if (uVar9 == 0x800000000000000e) {
                        uVar13 = uStack_b0;
                        goto code_r0x0001279a;
                    }
                    goto code_r0x00013160;
                }
code_r0x00012806:
                uVar13 = uStack_b0;
code_r0x00012786:
            }
            else if (uVar11 == 0x24) {
                if (iVar19 == 0) {
                    uVar11 = arg4_00[0x16];
                    while (uVar11 != 0) {
                        uVar11 = arg4_00[uVar14 + 0x17];
                        uVar14 = uVar14 + 1;
                    }
                    iVar16 = fcn.000260fc(4,(uVar14 + 1) * 2);
                    if (iVar16 != 0) {
                        fcn.00024eec(arg4_00 + 0x16,iVar16,uVar14 + 1);
                        cVar7 = fcn.00011fb0(arg4_00 + 2,iVar16,arg4);
                        if (cVar7 == '\0') {
code_r0x00012fd7:
                            (**(*0x27020 + 0x48))(iVar16);
                            uVar18 = uStack_9c;
                            goto code_r0x00012962;
                        }
                        *(in_stack_00000030 + 0x10) = *(arg4_00 + 2);
                        *(in_stack_00000030 + 0x18) = *(arg4_00 + 10);
                        *(in_stack_00000030 + 0x28) = *(arg4_00 + 0x14);
                        *(in_stack_00000030 + 0x20) = iVar16;
                        *(in_stack_00000030 + 0x2a) = 0;
                        uVar17 = *(arg4_00 + 0x12);
code_r0x00012fca:
                        uVar20 = uVar17;
                        uVar18 = uStack_9c;
code_r0x00012fce:
                        bVar5 = bVar6;
                        goto code_r0x00012786;
                    }
code_r0x0001313b:
                    uVar13 = 0x8000000000000009;
                    goto code_r0x00013160;
                }
            }
            else if (uVar11 == 0x25) {
                if (iVar19 == 0) {
                    cVar7 = fcn.00011fb0(arg4_00 + 4,0,arg4);
                    if (cVar7 != '\0') {
                        *(in_stack_00000030 + 0x10) = *(arg4_00 + 4);
                        *(in_stack_00000030 + 0x18) = *(arg4_00 + 0xc);
                        *(in_stack_00000030 + 0x2a) = 1;
                        uVar20 = *(arg4_00 + 2);
                    }
                }
            }
            else if (uVar11 == 0x26) {
                if ((iVar19 == 0) && (0x1a < (arg4_00[1] & 0x7f))) {
                    uVar11 = arg4_00[0x1a];
                    while (uVar11 != 0) {
                        uVar11 = arg4_00[uVar14 + 0x1b];
                        uVar14 = uVar14 + 1;
                    }
                    iVar16 = fcn.000260fc(4,(uVar14 + 1) * 2);
                    if (iVar16 == 0) goto code_r0x0001313b;
                    fcn.00024eec(arg4_00 + 0x1a,iVar16,uVar14 + 1);
                    cVar7 = fcn.00011fb0(arg4_00 + 4,iVar16,arg4);
                    if (cVar7 == '\0') goto code_r0x00012fd7;
                    *(in_stack_00000030 + 0x10) = *(arg4_00 + 4);
                    *(in_stack_00000030 + 0x18) = *(arg4_00 + 0xc);
                    *(in_stack_00000030 + 0x28) = *(arg4_00 + 0x18);
                    *(in_stack_00000030 + 0x2a) = 3;
                    *(in_stack_00000030 + 0x20) = iVar16;
                    uVar17 = *(arg4_00 + 2);
                    goto code_r0x00012fca;
                }
            }
            else if (uVar11 == 0x29) {
                bVar6 = false;
                bVar5 = false;
                if (uVar13 != 0) {
                    if (*(uVar13 + 0x1b) != '\0') {
                        *(uVar13 + 0x1b) = *(uVar13 + 0x1b) + -1;
                    }
                    if (*(uVar13 + 0x1b) == '\0') {
                        uVar18 = 0xffff;
                        uStack_b0 = 0;
                        uStack_9c = 0xffff;
                        cStack_a0 = '\0';
                        uVar13 = uVar14;
                    }
                }
            }
            else if (uVar11 == 0x5b) {
                if ((uVar13 != 0) && (*(uVar13 + 0x1b) != '\0')) {
                    uVar1 = *(arg4_00 + 2);
                    arg2_00 = arg4_00 + 5;
                    uStack_88 = 3;
                    uStack_82 = uVar1;
                    if (bVar5) {
                        if (auStack_80 != arg2_00) {
                            iVar16 = 4;
                            goto code_r0x00012e4d;
                        }
                    }
                    else {
                        iVar16 = (arg4_00[1] & 0x7f) - 5;
                        if ((iVar16 != 0) && (auStack_80 != arg2_00)) {
code_r0x00012e4d:
                            section..text(auStack_80,arg2_00,iVar16);
                        }
                    }
                    if (arg4_00[4] == 8) {
                        uStack_84 = 1;
                    }
                    fcn.00011740(uVar12,auStack_98);
                    if ((uVar1 < uVar17) || ((uVar17 == uVar1 && (cStack_a0 == '\0')))) {
                        uVar18 = uVar1;
                        cStack_a0 = '\x01';
                        uStack_9c = uVar1;
                        for (piVar21 = *in_stack_00000038; bVar5 = bVar6, piVar21 != in_stack_00000038;
                            piVar21 = *piVar21) {
                            if (*(piVar21 + 0x16) != uStack_82) {
                                uStack_88 = 1;
                                uStack_82 = *(piVar21 + 0x16);
                                fcn.00011740(uVar12,auStack_98);
                            }
                            arg4_00 = puStack_60;
                        }
                    }
                    uStack_84 = 0;
                    goto code_r0x00012786;
                }
            }
            else {
                if (uVar11 == 0x5c) {
                    puVar10 = fcn.000260fc(4,0x30);
                    if (puVar10 != NULL) {
                        *(puVar10 + 0x16) = *(arg4_00 + 4);
                        *puVar10 = in_stack_00000038;
                        puVar2 = in_stack_00000038[1];
                        puVar10[1] = puVar2;
                        *puVar2 = puVar10;
                        in_stack_00000038[1] = puVar10;
                        goto code_r0x00012b54;
                    }
                    uVar13 = 0x8000000000000009;
                    goto code_r0x00013160;
                }
                if (uVar11 == 0x5d) goto code_r0x00012da6;
                if (uVar11 == 0x5f) {
                    if (*(arg4_00 + 2) == *0x26650) {
                        if (*(arg4_00 + 10) == *0x26658) {
                            bVar6 = true;
                            bVar5 = true;
                        }
                    }
                }
                else {
code_r0x00012d2a:
                    if (uVar13 != 0) {
                        cVar7 = '\0';
                        if (*(uVar13 + 0x1b) != '\0') {
                            *(uVar13 + 0x1b) = *(uVar13 + 0x1b) - (arg4_00[1] >> 7);
                            cVar7 = *(uVar13 + 0x1b);
                        }
                        if (cVar7 == '\0') {
                            uStack_b0 = 0;
                            uVar13 = uVar14;
                        }
                    }
                }
            }
code_r0x0001279a:
            uStack_68 = uStack_68 + (arg4_00[1] & 0x7f);
            uStack_a8 = uStack_a8 + (arg4_00[1] & 0x7f);
        } while (uStack_68 < uStack_50);
        uVar13 = uVar9;
        if (uVar9 == 0x800000000000000e) {
            uVar13 = 0;
        }
    }
code_r0x00013160:
    for (puVar10 = *(in_stack_00000030 + 0x30); puVar10 != in_stack_00000030 + 0x30; puVar10 = *puVar10) {
        piVar21 = puVar10[4];
        while (piVar15 = piVar21, piVar15 != puVar10 + 4) {
            piVar21 = *piVar15;
            if (*(piVar15 + 0x14) == '\x01') {
                *(*piVar15 + 8) = piVar15[1];
                *piVar15[1] = *piVar15;
                (**(*0x27020 + 0x48))();
            }
        }
    }
    return uVar13;
}


/* fcn.00013890 @ 0x13890 */

int64_t fcn.00013890(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    unkbyte7 in_R9;
    int16_t *piStackX_8;
    int16_t *piStackX_18;
    int16_t *piStackX_20;
    
    iVar7 = 0;
    piStackX_8 = NULL;
    piStackX_18 = NULL;
    piStackX_20 = NULL;
    fcn.00010688(0x268c0,0x10,arg1 + 0x10,CONCAT71(in_R9,1));
    piVar2 = *(arg1 + 0x20);
    if (piVar2 == NULL) {
        iVar5 = 0;
    }
    else {
        iVar1 = *piVar2;
        piVar3 = piVar2;
        iVar5 = iVar7;
        while (iVar1 != 0) {
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar3;
        }
        iVar5 = iVar5 * 2;
    }
    fcn.00010688(0x26938,iVar5,piVar2,CONCAT71(in_R9,2));
    iVar5 = fcn.000262b8(arg2);
    fcn.00010688(0x26898,iVar5,arg2,CONCAT71(in_R9,1));
    iVar5 = iVar7;
    iVar1 = _pe_dos_header;
    while (iVar1 != 0) {
        piStackX_18 = piStackX_18 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piStackX_18;
    }
    iVar4 = iVar7;
    iVar1 = _pe_dos_header;
    while (iVar1 != 0) {
        piStackX_8 = piStackX_8 + 1;
        iVar4 = iVar4 + 1;
        iVar1 = *piStackX_8;
    }
    iVar6 = iVar7;
    iVar1 = _pe_dos_header;
    while (iVar1 != 0) {
        piStackX_20 = piStackX_20 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = *piStackX_20;
    }
    iVar5 = iVar4 + iVar6 + iVar5;
    iVar4 = iVar5 + 1;
    if (*(arg1 + 0x20) != 0) {
        iVar4 = iVar5;
    }
    iVar4 = iVar4 + 1;
    iVar5 = fcn.000260fc(4,iVar4 * 2);
    *arg3 = iVar5;
    if (iVar5 == 0) {
        iVar7 = -0x7ffffffffffffff7;
    }
    else {
        iVar6 = iVar4;
        fcn.00024a2c(iVar5,iVar4,0);
        fcn.00024bac(*arg3,iVar6,0);
        if (*(arg1 + 0x20) == 0) {
            fcn.00024bac(*arg3,iVar4,0x268a4);
        }
        fcn.00024bac(*arg3,iVar4,0);
        piVar3 = *arg3;
        iVar1 = *piVar3;
        piVar2 = piVar3;
        iVar5 = iVar7;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar2;
        }
        piVar3[iVar5 + -1] = 0;
    }
    (**(*0x27020 + 0x48))(0);
    (**(*0x27020 + 0x48))(0);
    (**(*0x27020 + 0x48))(0);
    return iVar7;
}


/* fcn.000136e4 @ 0x136e4 */

ulong fcn.000136e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int16_t iVar2;
    int16_t *arg3_00;
    int64_t *piVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    int64_t iVar9;
    
    iVar9 = 0;
    iVar2 = *arg1;
    piVar4 = arg1;
    iVar7 = iVar9;
    while (iVar2 != 0) {
        piVar4 = piVar4 + 1;
        iVar7 = iVar7 + 1;
        iVar2 = *piVar4;
    }
    piVar1 = arg2 + 0x30;
    iVar7 = iVar7 + 1;
    piVar3 = *piVar1;
    if (piVar3 == piVar1) {
        *arg3 = 0;
    }
    else {
        do {
            if (*(arg2 + 0x2a) == '\x01') {
                iVar6 = iVar9;
                for (piVar4 = piVar3[6]; *piVar4 != 0; piVar4 = piVar4 + 1) {
                    iVar6 = iVar6 + 1;
                }
                iVar7 = iVar7 + 1 + iVar6;
            }
            else {
                iVar7 = iVar7 + 0x17;
            }
            piVar3 = *piVar3;
        } while (piVar3 != piVar1);
        piVar4 = fcn.000260fc(4,iVar7 * 2);
        if (piVar4 != NULL) {
            fcn.00024a2c(piVar4,iVar7,arg1);
            iVar2 = *piVar4;
            piVar8 = piVar4;
            iVar7 = iVar9;
            while (iVar2 != 0) {
                piVar8 = piVar8 + 1;
                iVar7 = iVar7 + 1;
                iVar2 = *piVar8;
            }
            piVar8 = piVar4 + iVar7;
            for (piVar3 = *piVar1; piVar3 != piVar1; piVar3 = *piVar3) {
                if (*(arg2 + 0x2a) == '\x01') {
                    arg3_00 = piVar3[6];
                    iVar2 = *arg3_00;
                    piVar5 = arg3_00;
                    iVar7 = iVar9;
                    while (iVar2 != 0) {
                        piVar5 = piVar5 + 1;
                        iVar7 = iVar7 + 1;
                        iVar2 = *piVar5;
                    }
                    fcn.00025148(piVar8,iVar7 * 2 + 4,0x26978,arg3_00);
                }
                else {
                    fcn.00025148(piVar8,0x30,0x26980,*(piVar3 + 2));
                }
                iVar2 = *piVar8;
                piVar5 = piVar8;
                iVar7 = iVar9;
                while (iVar2 != 0) {
                    piVar5 = piVar5 + 1;
                    iVar7 = iVar7 + 1;
                    iVar2 = *piVar5;
                }
                piVar8 = piVar8 + iVar7;
            }
            fcn.00010648(piVar4);
            if (*arg4 != 0) {
                (**(*0x27020 + 0x48))();
            }
            *arg4 = piVar4;
            return 1;
        }
        *arg3 = 0x8000000000000009;
    }
    return 0;
}


/* fcn.00013c6c @ 0x13c6c */

ulong fcn.00013c6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t *puVar2;
    int16_t iVar3;
    uint16_t uVar4;
    bool bVar5;
    int16_t *piVar6;
    int16_t *piVar7;
    int64_t iVar8;
    uint32_t *arg1_00;
    int64_t iVar9;
    ulong *puVar10;
    char16_t *pcVar11;
    int64_t *piVar12;
    char16_t *arg3_00;
    ulong *puVar13;
    int64_t iVar14;
    ulong *puVar15;
    int64_t *in_stack_00000028;
    uint32_t *puStack_68;
    
    iVar8 = 0;
    bVar5 = false;
    puStack_68 = NULL;
    iVar3 = *arg2;
    piVar7 = arg2;
    iVar14 = iVar8;
    while (iVar3 != 0) {
        piVar7 = piVar7 + 1;
        iVar14 = iVar14 + 1;
        iVar3 = *piVar7;
    }
    puVar1 = arg3 + 0x30;
    iVar14 = iVar14 + 1;
    fcn.00013a6c(puVar1);
    piVar12 = *arg4;
    if (piVar12 != arg4) {
        do {
            iVar3 = *arg2;
            piVar7 = arg2;
            iVar9 = iVar8;
            while (iVar3 != 0) {
                piVar7 = piVar7 + 1;
                iVar9 = iVar9 + 1;
                iVar3 = *piVar7;
            }
            iVar14 = iVar14 + 0xd + iVar9;
            for (puVar10 = *puVar1; puVar10 != puVar1; puVar10 = *puVar10) {
                puVar15 = puVar10 + 4;
                puVar13 = *puVar15;
                if (puVar13 != puVar15) {
                    do {
                        if (*(puVar13 + 0x16) == *(piVar12 + 0x16)) {
                            if (*(arg3 + 0x2a) == '\x01') {
                                iVar9 = iVar8;
                                for (piVar7 = puVar10[6]; *piVar7 != 0; piVar7 = piVar7 + 1) {
                                    iVar9 = iVar9 + 1;
                                }
                                iVar14 = iVar14 + 2 + iVar9 + *(puVar10 + 0x12) * 2;
                            }
                            else {
                                iVar14 = iVar14 + *(puVar10 + 0x12) * 2 + 0x1e;
                            }
                            bVar5 = true;
                        }
                        puVar13 = *puVar13;
                    } while (puVar13 != puVar15);
                }
            }
            piVar12 = *piVar12;
        } while (piVar12 != arg4);
        if (bVar5) {
            piVar7 = fcn.000260fc(4,iVar14 * 2);
            *in_stack_00000028 = piVar7;
            if (piVar7 == NULL) {
                return 0x8000000000000009;
            }
            fcn.00024a2c(piVar7,iVar14,arg2);
            iVar3 = *piVar7;
            piVar6 = piVar7;
            while (iVar3 != 0) {
                piVar6 = piVar6 + 1;
                iVar8 = iVar8 + 1;
                iVar3 = *piVar6;
            }
            piVar12 = *arg4;
            piVar7 = piVar7 + iVar8;
            if (piVar12 != arg4) {
                do {
                    iVar9 = 0;
                    iVar3 = *arg2;
                    piVar6 = arg2;
                    iVar8 = iVar9;
                    while (iVar3 != 0) {
                        piVar6 = piVar6 + 1;
                        iVar8 = iVar8 + 1;
                        iVar3 = *piVar6;
                    }
                    fcn.00025148(piVar7,iVar8 * 2 + 0x1c,0x269b0,arg2);
                    iVar3 = *piVar7;
                    piVar6 = piVar7;
                    while (iVar3 != 0) {
                        piVar6 = piVar6 + 1;
                        iVar9 = iVar9 + 1;
                        iVar3 = *piVar6;
                    }
                    puVar10 = *puVar1;
                    piVar7 = piVar7 + iVar9;
                    if (puVar10 != puVar1) {
                        do {
                            puVar15 = puVar10[4];
                            if (puVar15 != puVar10 + 4) {
                                do {
                                    iVar8 = 0;
                                    if (*(puVar15 + 0x16) == *(piVar12 + 0x16)) {
                                        if (*(arg3 + 0x2a) == '\x01') {
                                            iVar3 = *arg2;
                                            piVar6 = arg2;
                                            iVar9 = iVar8;
                                            while (iVar3 != 0) {
                                                piVar6 = piVar6 + 1;
                                                iVar9 = iVar9 + 1;
                                                iVar3 = *piVar6;
                                            }
                                            arg3_00 = L"&%s=";
                                            fcn.00025148(piVar7,iVar9 * 2 + 4,0x269d0,puVar10[6]);
                                            iVar3 = *piVar7;
                                            piVar6 = piVar7;
                                            while (iVar3 != 0) {
                                                piVar6 = piVar6 + 1;
                                                iVar8 = iVar8 + 1;
                                                iVar3 = *piVar6;
                                            }
                                        }
                                        else {
                                            arg3_00 = L"&OFFSET=%04X&WIDTH=%04X&VALUE=";
                                            fcn.00025148(piVar7,0x3e,0x269e0,*(puVar10 + 2));
                                            iVar3 = *piVar7;
                                            piVar6 = piVar7;
                                            while (iVar3 != 0) {
                                                piVar6 = piVar6 + 1;
                                                iVar8 = iVar8 + 1;
                                                iVar3 = *piVar6;
                                            }
                                        }
                                        piVar7 = piVar7 + iVar8;
                                        uVar4 = *(puVar10 + 0x12);
                                        pcVar11 = uVar4;
                                        if (*(puVar10 + 0x1a) == '\x1c') {
                                            puStack_68 = fcn.0001191c(arg1,*(puVar15 + 3));
                                            arg1_00 = fcn.000260fc(4,uVar4);
                                            iVar8 = 0;
                                            if (puStack_68 != NULL) {
                                                iVar3 = *puStack_68;
                                                puVar2 = puStack_68;
                                                while (iVar3 != 0) {
                                                    puVar2 = puVar2 + 2;
                                                    iVar8 = iVar8 + 1;
                                                    iVar3 = *puVar2;
                                                }
                                                arg3_00 = pcVar11;
                                                if (iVar8 * 2 <= pcVar11) {
                                                    arg3_00 = iVar8 * 2;
                                                }
                                                if ((arg3_00 != NULL) && (arg1_00 != puStack_68)) {
                                                    section..text(arg1_00,puStack_68,arg3_00);
                                                }
                                            }
                                        }
                                        else {
                                            arg1_00 = puVar15 + 3;
                                        }
                                        if (pcVar11 != NULL) {
                                            do {
                                                if (arg1_00 == NULL) break;
                                                fcn.000251ac(piVar7,(iVar14 * 2 - piVar7) + *in_stack_00000028,arg3_00
                                                             ,*(arg1_00 + (pcVar11 - 1U)));
                                                iVar8 = fcn.000249f8(piVar7,iVar14 - (piVar7 - *in_stack_00000028 >> 1)
                                                                    );
                                                piVar7 = piVar7 + iVar8;
                                                pcVar11 = pcVar11 - 1;
                                            } while (pcVar11 != NULL);
                                        }
                                        if (puStack_68 != NULL) {
                                            (**(*0x27020 + 0x48))(puStack_68);
                                            puStack_68 = NULL;
                                        }
                                        if ((*(puVar10 + 0x1a) == '\x1c') && (arg1_00 != NULL)) {
                                            (**(*0x27020 + 0x48))(arg1_00);
                                        }
                                    }
                                    puVar15 = *puVar15;
                                } while (puVar15 != puVar10 + 4);
                            }
                            puVar10 = *puVar10;
                        } while (puVar10 != puVar1);
                    }
                    piVar12 = *piVar12;
                } while (piVar12 != arg4);
            }
            fcn.00010648(*in_stack_00000028);
        }
    }
    return 0;
}


/* fcn.00011440 @ 0x11440 */

int64_t fcn.00011440(uint32_t *arg1,int64_t arg2)

{
    uint64_t uVar1;
    int16_t iVar2;
    ushort uVar3;
    char16_t *pcVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    int16_t *piVar7;
    int64_t iVar8;
    ushort *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    int64_t iVar13;
    
    piVar7 = *arg1;
    iVar11 = 0;
    pcVar4 = L"GUID=";
    iVar13 = iVar11;
    do {
        pcVar4 = pcVar4 + 1;
        iVar13 = iVar13 + 1;
    } while (*pcVar4 != L'\0');
    iVar13 = fcn.00024f80(piVar7,0x268c0,iVar13);
    if ((iVar13 == 0) && (*piVar7 != 0)) {
        do {
            piVar5 = 0x268f8;
            iVar13 = iVar11;
            do {
                piVar5 = piVar5 + 1;
                iVar13 = iVar13 + 1;
            } while (*piVar5 != 0);
            iVar13 = fcn.00024f80(piVar7,0x268f8,iVar13);
        } while ((iVar13 != 0) && (piVar7 = piVar7 + 1, *piVar7 != 0));
        if (*piVar7 != 0) {
            piVar5 = 0x26908;
            do {
                piVar6 = piVar5;
                iVar13 = iVar11;
                do {
                    piVar6 = piVar6 + 1;
                    iVar13 = iVar13 + 1;
                } while (*piVar6 != 0);
                iVar13 = fcn.00024f80(piVar7,piVar5,iVar13);
            } while ((iVar13 != 0) && (piVar7 = piVar7 + 1, *piVar7 != 0));
            if (*piVar7 != 0) {
                iVar13 = iVar11;
                do {
                    piVar5 = piVar5 + 1;
                    iVar13 = iVar13 + 1;
                } while (*piVar5 != 0);
                for (piVar7 = piVar7 + iVar13; (*piVar7 != 0 && (*piVar7 != 0x26)); piVar7 = piVar7 + 1) {
                }
                iVar12 = piVar7 - *arg1 >> 1;
                iVar13 = iVar12 + 0xe;
                piVar7 = fcn.000260fc(4,iVar13 * 2);
                if (piVar7 == NULL) {
                    return -0x7ffffffffffffff7;
                }
                iVar8 = iVar13;
                fcn.00024a2c(piVar7,iVar13,0x268a4);
                fcn.00024c7c(piVar7,iVar8,*arg1,iVar12);
                fcn.00024bac(piVar7,iVar13,0x268a8);
                iVar2 = *piVar7;
                piVar5 = piVar7;
                iVar12 = iVar11;
                while (iVar2 != 0) {
                    piVar5 = piVar5 + 1;
                    iVar12 = iVar12 + 1;
                    iVar2 = *piVar5;
                }
                piVar5 = arg2;
                do {
                    piVar5 = fcn.00024fbc(piVar5,piVar7);
                    if (piVar5 == NULL) goto code_r0x0001170c;
                    fcn.00024c7c(piVar7,iVar13,piVar5 + iVar12,4);
                    piVar6 = *arg1;
                    iVar8 = fcn.00024fbc(piVar6,piVar7);
                    if (iVar8 == 0) {
                        puVar9 = fcn.00024fbc(piVar5 + 2,0x268e8);
                        iVar8 = iVar11;
                        for (; *piVar6 != 0; piVar6 = piVar6 + 1) {
                            iVar8 = iVar8 + 1;
                        }
                        iVar8 = iVar8 * 2 + 2;
                        if (puVar9 == NULL) {
                            iVar2 = *piVar5;
                            piVar6 = piVar5;
                            iVar13 = iVar11;
                            while (iVar2 != 0) {
                                piVar6 = piVar6 + 1;
                                iVar13 = iVar13 + 1;
                                iVar2 = *piVar6;
                            }
                            uVar1 = iVar8 + (iVar13 + 1) * 2;
                            iVar13 = fcn.000261ac(iVar13 + 1,iVar8,uVar1,*arg1);
                            *arg1 = iVar13;
                            if (iVar13 == 0) {
                                (**(*0x27020 + 0x48))(piVar7);
                                return -0x7ffffffffffffff7;
                            }
                            fcn.00024bac(iVar13,uVar1 >> 1,piVar5);
code_r0x0001170c:
                            (**(*0x27020 + 0x48))(piVar7);
                            return iVar11;
                        }
                        uVar3 = *puVar9;
                        *puVar9 = 0;
                        iVar2 = *piVar5;
                        piVar6 = piVar5;
                        iVar10 = iVar11;
                        while (iVar2 != 0) {
                            piVar6 = piVar6 + 1;
                            iVar10 = iVar10 + 1;
                            iVar2 = *piVar6;
                        }
                        uVar1 = iVar8 + (iVar10 + 1) * 2;
                        iVar8 = fcn.000261ac(iVar10 + 1,iVar8,uVar1,*arg1);
                        *arg1 = iVar8;
                        if (iVar8 == 0) {
                            iVar11 = -0x7ffffffffffffff7;
                            goto code_r0x0001170c;
                        }
                        fcn.00024bac(iVar8,uVar1 >> 1,piVar5);
                        *puVar9 = uVar3;
                    }
                    else {
                        fcn.00011224(arg1,arg2,piVar7);
                    }
                    piVar7[iVar12] = 0;
                    piVar5 = piVar5 + 1;
                } while( true );
            }
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.000157f4 @ 0x157f4 */

int64_t fcn.000157f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t **ppuVar1;
    char16_t cVar2;
    int64_t iVar3;
    char16_t *pcVar4;
    int16_t *piVar5;
    char16_t *pcVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    uint32_t *arg3_00;
    uint8_t *puVar9;
    int64_t iVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    uint64_t arg3_01;
    char16_t *arg1_00;
    uint32_t *puVar13;
    uint32_t *puStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t iStack_98;
    char16_t *pcStack_90;
    uint32_t **ppuStack_88;
    uint32_t *puStack_80;
    uint32_t *puStack_78;
    char16_t *pcStack_70;
    int64_t iStack_68;
    
    arg3_00 = NULL;
    ppuStack_88 = NULL;
    if (((arg1 != 0) && (in_stack_00000030 != NULL)) && (in_stack_00000028 != NULL)) {
        if ((arg3 != 0) && (arg2 != 0)) {
            iStackX_10 = arg2;
            iStackX_18 = arg3;
            uStackX_20 = arg4;
            iVar3 = fcn.000260fc(4,0x400);
            iVar11 = 0;
            *in_stack_00000028 = iVar3;
            if (iVar3 == 0) {
                return -0x7ffffffffffffff7;
            }
            pcVar4 = L"GUID=";
            iVar3 = iVar11;
            do {
                pcVar4 = pcVar4 + 1;
                iVar3 = iVar3 + 1;
            } while (*pcVar4 != L'\0');
            iVar3 = fcn.00024f80(arg2,0x268c0,iVar3);
            if (iVar3 == 0) {
                pcVar4 = arg2;
                if (*arg2 != iVar11) {
                    do {
                        piVar5 = 0x26898;
                        iVar3 = iVar11;
                        do {
                            piVar5 = piVar5 + 1;
                            iVar3 = iVar3 + 1;
                        } while (*piVar5 != iVar11);
                        iVar3 = fcn.00024f80(pcVar4,0x26898,iVar3);
                    } while ((iVar3 != 0) && (pcVar4 = pcVar4 + 1, *pcVar4 != iVar11));
                }
                cVar2 = *pcVar4;
                if (cVar2 != L'\0') {
                    while (cVar2 != L'&') {
                        if (cVar2 == L'\0') goto code_r0x00015938;
                        pcVar4 = pcVar4 + 1;
                        cVar2 = *pcVar4;
                    }
                    if (*pcVar4 == iVar11) {
code_r0x00015938:
                        *in_stack_00000030 = pcVar4;
                        fcn.00010980(in_stack_00000028,arg2);
                        fcn.00010648(*in_stack_00000028);
                    }
                    else {
                        pcVar4 = pcVar4 + 1;
                        iVar11 = pcVar4 - arg2 >> 1;
                        iVar3 = fcn.00026148(0x26,iVar11 * 2 + 2,arg2);
                        if (iVar3 == 0) {
                            return -0x7ffffffffffffff7;
                        }
                        *(iVar3 + iVar11 * 2) = 0;
                        fcn.00010980(in_stack_00000028,iVar3);
                        (**(*0x27020 + 0x48))(iVar3);
                        cVar2 = *pcVar4;
                        while (cVar2 != L'\0') {
                            arg3_00 = NULL;
                            pcVar6 = L"OFFSET=";
                            puVar12 = arg3_00;
                            do {
                                pcVar6 = pcVar6 + 1;
                                puVar12 = puVar12 + 1;
                            } while (*pcVar6 != L'\0');
                            iVar3 = fcn.00024f80(pcVar4,0x26a20,puVar12);
                            if (iVar3 != 0) {
                                if (*pcVar4 != arg3_00) {
code_r0x00015dd4:
                                    iVar3 = -0x7ffffffffffffffe;
                                    goto code_r0x00015ddd;
                                }
                                break;
                            }
                            pcVar6 = L"OFFSET=";
                            puVar12 = arg3_00;
                            do {
                                pcVar6 = pcVar6 + 1;
                                puVar12 = puVar12 + 1;
                            } while (*pcVar6 != arg3_00);
                            pcStack_90 = pcVar4 + puVar12;
                            pcStack_70 = pcVar4;
                            if (pcStack_90 == NULL) {
                                iVar3 = -0x7ffffffffffffffe;
                            }
                            else {
                                iVar3 = fcn.00010a40(pcStack_90,&ppuStack_88,&iStack_98);
                                arg3_00 = NULL;
                            }
                            ppuVar1 = ppuStack_88;
                            iVar11 = iStack_98;
                            if (iVar3 < 0) goto code_r0x00015ddd;
                            uVar7 = iStack_98 + 1U >> 1;
                            arg3_01 = 8;
                            if (uVar7 < 8) {
                                arg3_01 = uVar7;
                            }
                            puStack_80 = arg3_00;
                            if ((arg3_01 != 0) && (&puStack_80 != ppuStack_88)) {
                                section..text(&puStack_80,ppuStack_88,arg3_01);
                            }
                            (**(*0x27020 + 0x48))(ppuVar1);
                            arg3_00 = NULL;
                            arg1_00 = pcStack_90 + iVar11;
                            pcVar6 = L"&WIDTH=";
                            puVar12 = arg3_00;
                            do {
                                pcVar6 = pcVar6 + 1;
                                puVar12 = puVar12 + 1;
                            } while (*pcVar6 != L'\0');
                            iVar3 = fcn.00024f80(arg1_00,0x26958,puVar12);
                            if (iVar3 != 0) goto code_r0x00015dd4;
                            pcVar6 = L"&WIDTH=";
                            puVar12 = arg3_00;
                            do {
                                pcVar6 = pcVar6 + 1;
                                puVar12 = puVar12 + 1;
                            } while (*pcVar6 != arg3_00);
                            pcStack_90 = arg1_00 + puVar12;
                            if (pcStack_90 == NULL) {
                                iVar3 = -0x7ffffffffffffffe;
                            }
                            else {
                                iVar3 = fcn.00010a40(pcStack_90,&ppuStack_88,&iStack_98);
                                arg3_00 = NULL;
                                iVar11 = iStack_98;
                            }
                            ppuVar1 = ppuStack_88;
                            if (iVar3 < 0) goto code_r0x00015ddd;
                            puVar8 = iVar11 + 1U >> 1;
                            puVar12 = 0x8;
                            if (puVar8 < 0x8) {
                                puVar12 = puVar8;
                            }
                            puStackX_8 = arg3_00;
                            if ((puVar12 != NULL) && (&puStackX_8 != ppuStack_88)) {
                                section..text(&puStackX_8,ppuStack_88,puVar12);
                            }
                            (**(*0x27020 + 0x48))(ppuVar1);
                            arg3_00 = NULL;
                            pcVar6 = pcStack_90 + iVar11;
                            if ((*pcVar6 != L'\0') && (*pcVar6 != L'&')) goto code_r0x00015dd4;
                            if (uStackX_20 < puStack_80 + puStackX_8) {
                                *in_stack_00000030 = pcVar6;
                                arg3_00 = NULL;
                                iVar3 = -0x7ffffffffffffff9;
                                puVar8 = NULL;
                                goto code_r0x00015de0;
                            }
                            puVar8 = fcn.000260fc(4,puStackX_8);
                            puStack_78 = puVar8;
                            if (puVar8 == NULL) {
                                *in_stack_00000030 = arg2;
                                iVar3 = -0x7ffffffffffffff7;
                                arg3_00 = NULL;
                                goto code_r0x00015de0;
                            }
                            if ((puStackX_8 != NULL) && (puVar8 != puStack_80 + iStackX_18)) {
                                puVar12 = puStackX_8;
                                section..text(puVar8,puStack_80 + iStackX_18,puStackX_8);
                            }
                            iStack_98 = puStackX_8 * 2 + 1;
                            iStack_68 = iStack_98 * 2;
                            arg3_00 = fcn.000260fc(4,iStack_68);
                            iVar11 = iStack_68;
                            iVar3 = iStack_98;
                            puVar13 = NULL;
                            if (arg3_00 == NULL) {
                                *in_stack_00000030 = arg2;
code_r0x00015d91:
                                iVar3 = -0x7ffffffffffffff7;
                                goto code_r0x00015de0;
                            }
                            puVar9 = (puStackX_8 - 1U) + puVar8;
                            if (puStackX_8 != NULL) {
                                puVar8 = arg3_00;
                                do {
                                    fcn.000251ac(puVar8,(iVar11 - puVar8) + arg3_00,puVar12,*puVar9);
                                    iVar10 = fcn.000249f8(puVar8,iVar3 - (puVar8 - arg3_00 >> 1));
                                    puVar13 = puVar13 + 1;
                                    puVar9 = puVar9 + -1;
                                    puVar8 = puVar8 + iVar10 * 2;
                                } while (puVar13 < puStackX_8);
                                puVar8 = puStack_78;
                                arg2 = iStackX_10;
                            }
                            (**(*0x27020 + 0x48))(puVar8);
                            pcVar4 = L"VALUE=";
                            puVar8 = NULL;
                            iVar3 = 0;
                            do {
                                pcVar4 = pcVar4 + 1;
                                iVar3 = iVar3 + 1;
                            } while (*pcVar4 != L'\0');
                            puStack_78 = pcVar6 - pcStack_70 >> 1;
                            iStack_98 = puStack_78 + iStack_98 + 1 + iVar3;
                            pcStack_90 = fcn.000260fc(4,iStack_98 * 2);
                            puVar12 = puStack_78;
                            if (pcStack_90 == NULL) goto code_r0x00015d91;
                            iVar3 = puStack_78 * 2 + 2;
                            if ((iVar3 != 0) && (pcStack_90 != pcStack_70)) {
                                section..text(pcStack_90,pcStack_70,iVar3);
                            }
                            if (*pcVar6 == L'\0') {
                                pcStack_90[puVar12] = L'&';
                            }
                            pcStack_90[puVar12 + 1] = L'\0';
                            fcn.00024bac(pcStack_90,iStack_98,0x26a30);
                            pcVar4 = pcStack_90;
                            fcn.00024bac(pcStack_90,iStack_98,arg3_00);
                            fcn.00010980(in_stack_00000028,pcVar4);
                            (**(*0x27020 + 0x48))(pcVar4);
                            (**(*0x27020 + 0x48))(arg3_00);
                            pcVar4 = pcVar6;
                            if (*pcVar6 == L'\0') break;
                            fcn.00010980(in_stack_00000028,0x268a4);
                            pcVar4 = pcVar6 + 1;
                            cVar2 = *pcVar4;
                        }
                        fcn.00010648(*in_stack_00000028);
                        *in_stack_00000030 = pcVar4;
                    }
                    return 0;
                }
                iVar3 = -0x7ffffffffffffffe;
code_r0x00015ddd:
                *in_stack_00000030 = pcVar4 + -1;
                puVar8 = arg3_00;
            }
            else {
                *in_stack_00000030 = arg2;
                iVar3 = -0x7ffffffffffffffe;
                puVar8 = arg3_00;
            }
code_r0x00015de0:
            if (*in_stack_00000028 != 0) {
                (**(*0x27020 + 0x48))();
                *in_stack_00000028 = 0;
            }
            if (arg3_00 != NULL) {
                (**(*0x27020 + 0x48))(arg3_00);
            }
            if (puVar8 != NULL) {
                (**(*0x27020 + 0x48))(puVar8);
            }
            return iVar3;
        }
        *in_stack_00000030 = arg2;
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00015e44 @ 0x15e44 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00015e44(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4,int64_t arg_60h)

{
    int16_t iVar1;
    char16_t *pcVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int16_t *piVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    int16_t *arg1_00;
    uint32_t uVar10;
    uint in_R8;
    int64_t iVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    uint32_t *arg2_00;
    int16_t *piVar15;
    uint32_t *puStackX_8;
    int64_t *in_stack_00000028;
    int64_t var_40h;
    uint32_t *puStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    uint32_t *puStack_48;
    uint32_t *puStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    uint32_t var_8h;
    
    iVar11 = CONCAT44(in_R8,arg3);
    puVar9 = NULL;
    puStack_68 = NULL;
    if ((((arg1 == 0) || (arg4 == 0)) || (in_stack_00000028 == NULL)) || (*in_stack_00000028 = arg2, arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    puStack_40 = *arg4;
    pcVar2 = L"GUID=";
    puStackX_8 = NULL;
    puStack_48 = NULL;
    puVar12 = puVar9;
    do {
        pcVar2 = pcVar2 + 1;
        puVar12 = puVar12 + 1;
    } while (*pcVar2 != L'\0');
    puVar14 = puVar9;
    arg2_00 = puVar9;
    iVar3 = fcn.00024f80(arg2,0x268c0,puVar12);
    if (iVar3 == 0) {
        iVar1 = *arg2;
        arg1_00 = arg2;
        while (iVar1 != 0) {
            uVar10 = 0;
            piVar4 = 0x26898;
            do {
                piVar4 = piVar4 + 1;
                uVar10 = uVar10 + 1;
            } while (*piVar4 != 0);
            iVar3 = fcn.00024f80(arg1_00,0x26898,uVar10);
            if (iVar3 == 0) break;
            arg1_00 = arg1_00 + 1;
            iVar1 = *arg1_00;
        }
        iVar1 = *arg1_00;
        if (iVar1 != 0) {
            while (iVar1 != 0x26) {
                if (iVar1 == 0) goto code_r0x00015f3a;
                arg1_00 = arg1_00 + 1;
                iVar1 = *arg1_00;
            }
            if (*arg1_00 != 0) {
                iVar3 = iStack_60;
                while( true ) {
                    uVar10 = 0;
                    piVar4 = 0x268d0;
                    do {
                        piVar4 = piVar4 + 1;
                        uVar10 = uVar10 + 1;
                    } while (*piVar4 != 0);
                    iVar5 = fcn.00024f80(arg1_00,0x268d0,uVar10);
                    iVar8 = 0;
                    if (iVar5 != 0) break;
                    piVar4 = 0x268d0;
                    do {
                        piVar4 = piVar4 + 1;
                        iVar8 = iVar8 + 1;
                    } while (*piVar4 != 0);
                    piVar4 = arg1_00 + iVar8;
                    if (piVar4 == NULL) {
                        iVar5 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar5 = fcn.00010a40(piVar4,&puStack_68,&iStack_60);
                        arg2_00 = puStack_68;
                        iVar3 = iStack_60;
                    }
                    if (iVar5 < 0) {
code_r0x000161fe:
                        *in_stack_00000028 = arg1_00;
                        return iVar5;
                    }
                    iStack_58 = 0;
                    uVar6 = iVar3 + 1U >> 1;
                    uVar13 = 8;
                    if (uVar6 < 8) {
                        uVar13 = uVar6;
                    }
                    if ((uVar13 != 0) && (&iStack_58 != arg2_00)) {
                        section..text(&iStack_58,arg2_00,uVar13);
                    }
                    (**(*0x27020 + 0x48))(puStack_68);
                    iVar8 = 0;
                    piVar4 = piVar4 + iVar3;
                    pcVar2 = L"&WIDTH=";
                    iVar5 = iVar8;
                    do {
                        pcVar2 = pcVar2 + 1;
                        iVar5 = iVar5 + 1;
                    } while (*pcVar2 != L'\0');
                    iVar5 = fcn.00024f80(piVar4,0x26958,iVar5);
                    if (iVar5 != 0) {
code_r0x000161f6:
                        *in_stack_00000028 = arg1_00;
                        return -0x7ffffffffffffffe;
                    }
                    pcVar2 = L"&WIDTH=";
                    iVar5 = iVar8;
                    do {
                        pcVar2 = pcVar2 + 1;
                        iVar5 = iVar5 + 1;
                    } while (*pcVar2 != iVar8);
                    piVar4 = piVar4 + iVar5;
                    if (piVar4 == NULL) {
                        iVar5 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar5 = fcn.00010a40(piVar4,&puStack_68,&iStack_60);
                        iVar8 = 0;
                        iVar3 = iStack_60;
                    }
                    if (iVar5 < 0) goto code_r0x000161fe;
                    uVar6 = iVar3 + 1U >> 1;
                    uVar13 = 8;
                    if (uVar6 < 8) {
                        uVar13 = uVar6;
                    }
                    iStack_50 = iVar8;
                    if ((uVar13 != 0) && (&iStack_50 != puStack_68)) {
                        section..text(&iStack_50,puStack_68,uVar13);
                    }
                    (**(*0x27020 + 0x48))();
                    piVar15 = 0x26968;
                    piVar7 = 0x26968;
                    piVar4 = piVar4 + iVar3;
                    uVar10 = 0;
                    do {
                        piVar7 = piVar7 + 1;
                        uVar10 = uVar10 + 1;
                    } while (*piVar7 != 0);
                    iVar5 = fcn.00024f80(piVar4,0x26968,uVar10);
                    iVar8 = 0;
                    if (iVar5 != 0) goto code_r0x000161f6;
                    do {
                        piVar15 = piVar15 + 1;
                        iVar8 = iVar8 + 1;
                    } while (*piVar15 != 0);
                    piVar4 = piVar4 + iVar8;
                    if (piVar4 == NULL) {
                        iVar5 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar5 = fcn.00010a40(piVar4,&puStackX_8,&iStack_60);
                        iVar3 = iStack_60;
                    }
                    puVar12 = puStackX_8;
                    puVar14 = puStackX_8;
                    if (iVar5 < 0) {
                        *in_stack_00000028 = arg1_00;
                        goto code_r0x0001620f;
                    }
                    piVar4 = piVar4 + iVar3;
                    if ((*piVar4 != 0) && (*piVar4 != 0x26)) {
                        *in_stack_00000028 = arg1_00;
                        goto code_r0x0001620c;
                    }
                    if ((((iVar11 != 0) && (iStack_50 + iStack_58 <= puStack_40)) && (iStack_50 != 0)) &&
                       (iVar11 + iStack_58 != puStackX_8)) {
                        section..text(iVar11 + iStack_58,puStackX_8,iStack_50);
                    }
                    puVar9 = puStack_48;
                    if (puStack_48 < iStack_50 + iStack_58) {
                        puVar9 = iStack_50 + iStack_58;
                    }
                    puStack_48 = puVar9;
                    (**(*0x27020 + 0x48))(puVar12);
                    puVar14 = NULL;
                    puStackX_8 = NULL;
                    arg1_00 = piVar4;
                    if (*piVar4 == 0) goto code_r0x00016226;
                    arg2_00 = puStack_68;
                }
                if (*arg1_00 != 0) {
                    *in_stack_00000028 = arg1_00;
code_r0x0001620c:
                    iVar5 = -0x7ffffffffffffffe;
code_r0x0001620f:
                    if (puVar14 != NULL) {
                        (**(*0x27020 + 0x48))(puVar14);
                        return iVar5;
                    }
                    return iVar5;
                }
code_r0x00016226:
                iVar3 = 0;
                iVar1 = *arg1_00;
                piVar4 = arg1_00;
                while (iVar1 != 0) {
                    piVar4 = piVar4 + 1;
                    iVar3 = iVar3 + 1;
                    iVar1 = *piVar4;
                }
                *in_stack_00000028 = arg1_00 + iVar3;
                *arg4 = puVar9 + -1;
                if (puStack_40 < puVar9) {
                    *arg4 = puVar9;
                    if (iVar11 != 0) {
                        return -0x7ffffffffffffffb;
                    }
                }
                else if (iVar11 != 0) {
                    return 0;
                }
                *in_stack_00000028 = arg2;
                return -0x7ffffffffffffffe;
            }
        }
code_r0x00015f3a:
        *in_stack_00000028 = arg1_00;
    }
    else {
        *in_stack_00000028 = arg2;
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00014820 @ 0x14820 */

int16_t * fcn.00014820(int64_t arg1)

{
    int16_t *piVar1;
    char16_t *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    do {
        piVar1 = 0x268d0;
        iVar4 = iVar3;
        do {
            piVar1 = piVar1 + 1;
            iVar4 = iVar4 + 1;
        } while (*piVar1 != 0);
        piVar1 = arg1;
        iVar4 = fcn.00024f80(arg1,0x268d0,iVar4);
        if (iVar4 != 0) {
            return arg1;
        }
        if (*arg1 == 0) {
            return piVar1;
        }
        do {
            pcVar2 = L"&WIDTH=";
            iVar4 = iVar3;
            do {
                pcVar2 = pcVar2 + 1;
                iVar4 = iVar4 + 1;
            } while (*pcVar2 != L'\0');
            iVar4 = fcn.00024f80(arg1,0x26958,iVar4);
        } while ((iVar4 != 0) && (arg1 = arg1 + 2, *arg1 != 0));
        if (*arg1 == 0) {
            return piVar1;
        }
        pcVar2 = L"&WIDTH=";
        iVar4 = iVar3;
        do {
            pcVar2 = pcVar2 + 1;
            iVar4 = iVar4 + 1;
        } while (*pcVar2 != L'\0');
        arg1 = arg1 + iVar4 * 2;
        if (*arg1 == 0) {
            return NULL;
        }
        do {
            piVar1 = 0x268d0;
            iVar4 = iVar3;
            do {
                piVar1 = piVar1 + 1;
                iVar4 = iVar4 + 1;
            } while (*piVar1 != 0);
            iVar4 = fcn.00024f80(arg1,0x268d0,iVar4);
        } while ((iVar4 != 0) && (arg1 = arg1 + 2, *arg1 != 0));
    } while (*arg1 != 0);
    return NULL;
}


/* fcn.000104ac @ 0x104ac */

ulong fcn.000104ac(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t *piVar2;
    int64_t iVar3;
    char *pcVar4;
    int16_t iVar5;
    uint in_register_0000000c;
    int16_t *piVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    int16_t aiStackX_10 [4];
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar9 = 0;
    if ((arg2 != 0) && (*piVar6 != 0)) {
        piVar11 = 0x26898;
        do {
            piVar2 = piVar11;
            uVar10 = uVar9;
            do {
                piVar2 = piVar2 + 1;
                uVar10 = uVar10 + 1;
            } while (*piVar2 != 0);
            iVar3 = fcn.00024f80(piVar6,piVar11,uVar10);
        } while ((iVar3 != 0) && (piVar6 = piVar6 + 1, *piVar6 != 0));
        if (*piVar6 != 0) {
            uVar10 = uVar9;
            do {
                piVar11 = piVar11 + 1;
                uVar10 = uVar10 + 1;
            } while (*piVar11 != 0);
            piVar6 = piVar6 + uVar10;
            iVar5 = *piVar6;
            if (iVar5 != 0) {
                piVar11 = piVar6;
                uVar10 = uVar9;
                do {
                    if (iVar5 == 0x26) break;
                    piVar11 = piVar11 + 1;
                    uVar10 = uVar10 + 1;
                    iVar5 = *piVar11;
                } while (iVar5 != 0);
                uVar8 = uVar10 + 1 >> 1;
                if (3 < uVar8) {
                    pcVar4 = fcn.000260fc(4,uVar8);
                    if (pcVar4 == NULL) {
                        return 0x8000000000000009;
                    }
                    fcn.000102c0(aiStackX_10,4);
                    if (uVar10 != 0) {
                        do {
                            aiStackX_10[0] = piVar6[uVar9];
                            cVar1 = fcn.0002503c(aiStackX_10);
                            uVar8 = uVar9 >> 1;
                            if ((uVar9 & 1) == 0) {
                                pcVar4[uVar8] = cVar1;
                            }
                            else {
                                pcVar4[uVar8] = pcVar4[uVar8] * '\x10' + cVar1;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < uVar10);
                    }
                    pcVar7 = pcVar4;
                    while( true ) {
                        if ((*pcVar7 == '\x7f') && (pcVar7[1] == -1)) {
                            *arg2 = pcVar4;
                            return 0;
                        }
                        if (((*pcVar7 == '\0') || (pcVar7[1] == '\0')) || (*(pcVar7 + 2) < 4)) break;
                        pcVar7 = pcVar7 + *(pcVar7 + 2);
                    }
                    (**(*0x27020 + 0x48))(pcVar4);
                }
                return 0x800000000000000e;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001214c @ 0x1214c */

uchar fcn.0001214c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg2_00;
    char *pcVar3;
    uchar uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint32_t *puStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    
    puStackX_8 = NULL;
    arg2_00 = 0;
    uVar4 = 0;
    iStackX_10 = arg2;
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.00011b4c(arg1,&puStackX_8,&uStackX_18);
    }
    if (iVar2 < 0) {
        return 0;
    }
    uVar5 = 4;
    uVar7 = 4;
    puVar6 = puStackX_8;
    if (4 < uStackX_18) {
        do {
            if ((*puVar6 & 0xffffff) <= uVar7) {
                uVar7 = 4;
                uVar5 = uVar5 + 4;
                puVar6 = puStackX_8 + uVar5;
            }
            arg2_00 = 0;
            pcVar3 = puStackX_8 + uVar5;
            cVar1 = *pcVar3;
            uVar5 = uVar5 + (pcVar3[1] & 0x7f);
            uVar7 = uVar7 + (pcVar3[1] & 0x7f);
            if (cVar1 == '\x01') goto code_r0x0001226e;
            if (cVar1 == '$') {
                cVar1 = pcVar3[0x16];
                iVar2 = 0;
                while (cVar1 != '\0') {
                    cVar1 = pcVar3[iVar2 + 0x17];
                    iVar2 = iVar2 + 1;
                }
                arg2_00 = fcn.000260fc(4,(iVar2 + 1) * 2);
                if (arg2_00 == 0) goto code_r0x0001226e;
                fcn.00024eec(pcVar3 + 0x16,arg2_00,iVar2 + 1);
                pcVar3 = pcVar3 + 2;
code_r0x000122e9:
                cVar1 = fcn.00011fb0(pcVar3,arg2_00,iStackX_10);
                if (cVar1 != '\0') {
code_r0x0001226b:
                    uVar4 = 1;
                    goto code_r0x0001226e;
                }
                (**(*0x27020 + 0x48))(arg2_00);
            }
            else if (cVar1 == '%') {
                cVar1 = fcn.00011fb0(pcVar3 + 4,0,iStackX_10);
                if (cVar1 != '\0') goto code_r0x0001226b;
            }
            else {
                if (cVar1 == '&') {
                    cVar1 = pcVar3[0x1a];
                    iVar2 = 0;
                    while (cVar1 != '\0') {
                        cVar1 = pcVar3[iVar2 + 0x1b];
                        iVar2 = iVar2 + 1;
                    }
                    arg2_00 = fcn.000260fc(4,(iVar2 + 1) * 2);
                    if (arg2_00 != 0) {
                        fcn.00024eec(pcVar3 + 0x1a,arg2_00,iVar2 + 1);
                        pcVar3 = pcVar3 + 4;
                        goto code_r0x000122e9;
                    }
                    goto code_r0x0001226e;
                }
                if (cVar1 == ']') goto code_r0x0001226e;
            }
        } while (uVar5 < uStackX_18);
        arg2_00 = 0;
    }
code_r0x0001226e:
    if (puStackX_8 != NULL) {
        (**(*0x27020 + 0x48))();
    }
    if (arg2_00 != 0) {
        (**(*0x27020 + 0x48))(arg2_00);
    }
    return uVar4;
}


/* fcn.00014910 @ 0x14910 */

char16_t * fcn.00014910(int64_t arg1)

{
    char16_t *pcVar1;
    int64_t iVar2;
    int16_t *piVar3;
    char16_t cVar4;
    char16_t *pcVar5;
    char16_t *pcVar6;
    char16_t cVar7;
    char16_t cVar8;
    char16_t *pcVar9;
    
    pcVar6 = L"GUID=";
    pcVar9 = NULL;
    pcVar1 = L"GUID=";
    pcVar5 = pcVar9;
    do {
        pcVar1 = pcVar1 + 1;
        pcVar5 = pcVar5 + 1;
    } while (*pcVar1 != L'\0');
    iVar2 = fcn.00024f80(arg1,0x268c0,pcVar5);
    if (iVar2 == 0) {
        pcVar1 = pcVar9;
        do {
            pcVar6 = pcVar6 + 1;
            pcVar1 = pcVar1 + 1;
        } while (*pcVar6 != pcVar9);
        pcVar1 = arg1 + pcVar1 * 2;
        if (*pcVar1 != pcVar9) {
            pcVar6 = 0x268f8;
            do {
                piVar3 = 0x268f8;
                pcVar5 = pcVar9;
                do {
                    piVar3 = piVar3 + 1;
                    pcVar5 = pcVar5 + 1;
                } while (*piVar3 != pcVar9);
                iVar2 = fcn.00024f80(pcVar1,0x268f8,pcVar5);
                cVar7 = pcVar9;
            } while ((iVar2 != 0) && (pcVar1 = pcVar1 + 1, *pcVar1 != cVar7));
            if (*pcVar1 != cVar7) {
                pcVar5 = pcVar9;
                do {
                    pcVar6 = pcVar6 + 1;
                    pcVar5 = pcVar5 + 1;
                } while (*pcVar6 != cVar7);
                pcVar1 = pcVar1 + pcVar5;
                cVar7 = *pcVar1;
                if (cVar7 != L'\0') {
                    pcVar6 = 0x26908;
                    do {
                        piVar3 = 0x26908;
                        pcVar5 = pcVar9;
                        do {
                            piVar3 = piVar3 + 1;
                            pcVar5 = pcVar5 + 1;
                        } while (*piVar3 != pcVar9);
                        iVar2 = fcn.00024f80(pcVar1,0x26908,pcVar5);
                        cVar8 = pcVar9;
                    } while ((iVar2 != 0) && (pcVar1 = pcVar1 + 1, *pcVar1 != cVar8));
                    if (*pcVar1 != cVar8) {
                        pcVar5 = pcVar9;
                        do {
                            pcVar6 = pcVar6 + 1;
                            pcVar5 = pcVar5 + 1;
                        } while (*pcVar6 != cVar8);
                        pcVar1 = pcVar1 + pcVar5;
                        cVar4 = *pcVar1;
                        if (cVar4 != L'\0') {
                            do {
                                if (cVar4 == L'&') break;
                                pcVar1 = pcVar1 + 1;
                                cVar4 = *pcVar1;
                            } while (cVar4 != L'\0');
                            if (*pcVar1 != cVar8) {
                                if (cVar7 != L'&') {
                                    pcVar1 = fcn.00014820(pcVar1);
                                    return pcVar1;
                                }
                                do {
                                    if (*pcVar1 != L'&') {
                                        return pcVar1;
                                    }
                                    pcVar1 = fcn.00024fbc(pcVar1 + 2,0x268a4);
                                } while (pcVar1 != NULL);
                                return pcVar9;
                            }
                        }
                        return NULL;
                    }
                }
            }
        }
    }
    return arg1;
}


/* fcn.00011f6c @ 0x11f6c */

uchar fcn.00011f6c(int64_t arg1)

{
    uint32_t arg1_00;
    int64_t iVar1;
    
    arg1_00 = fcn.00024fbc(arg1,0x26898);
    iVar1 = fcn.00024fbc(arg1_00,0x268d0);
    if (iVar1 == 0) {
        iVar1 = fcn.00024fbc(arg1_00,0x268a4);
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.00014084 @ 0x14084 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Removing unreachable block (ram,0x00014383)

uint64_t fcn.00014084(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    int16_t iVar4;
    int64_t *piVar5;
    uint64_t uVar6;
    char16_t *pcVar7;
    int64_t iVar8;
    int16_t *piVar9;
    int64_t *piVar10;
    int64_t *arg4_00;
    int64_t *arg1_00;
    int16_t *piVar11;
    int16_t *piVar12;
    int16_t *piVar13;
    int64_t iVar14;
    char16_t *pcVar15;
    int16_t *piVar16;
    int64_t *arg2_00;
    int64_t *in_stack_00000028;
    int64_t var_48h;
    int64_t *piStack_58;
    int64_t iStack_50;
    ulong uStack_48;
    uint64_t uStack_40;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    piVar5 = NULL;
    if (((arg2 == 0) || (arg3 == 0)) || (arg4 == 0)) {
        return 0x8000000000000002;
    }
    piStack_58 = NULL;
    arg2_00 = NULL;
    iStack_50 = 0;
    uStack_40 = 0;
    uStack_48 = *arg3;
    uVar6 = fcn.00011b4c(arg1,&iStack_50,&uStack_40);
    if (uVar6 < 0) goto code_r0x000144f2;
    iVar14 = *arg3;
    piVar11 = NULL;
    piVar10 = piVar5;
    if (iVar14 == 0) goto code_r0x00014265;
    pcVar15 = L"GUID=";
    pcVar7 = L"GUID=";
    piVar12 = piVar11;
    do {
        pcVar7 = pcVar7 + 1;
        piVar12 = piVar12 + 1;
    } while (*pcVar7 != L'\0');
    iVar8 = fcn.00024f80(iVar14,0x268c0,piVar12);
    if (iVar8 == 0) {
        piVar12 = piVar11;
        do {
            pcVar15 = pcVar15 + 1;
            piVar12 = piVar12 + 1;
        } while (*pcVar15 != L'\0');
        piVar12 = iVar14 + piVar12 * 2;
        if (*piVar12 != 0) {
            piVar16 = 0x268f8;
            do {
                piVar9 = piVar16;
                piVar13 = piVar11;
                do {
                    piVar9 = piVar9 + 1;
                    piVar13 = piVar13 + 1;
                } while (*piVar9 != 0);
                iVar14 = fcn.00024f80(piVar12,piVar16,piVar13);
            } while ((iVar14 != 0) && (piVar12 = piVar12 + 1, *piVar12 != 0));
            if (*piVar12 != 0) {
                piVar9 = piVar11;
                do {
                    piVar16 = piVar16 + 1;
                    piVar9 = piVar9 + 1;
                } while (*piVar16 != 0);
                piVar12 = piVar12 + piVar9;
                if (*piVar12 != 0) {
                    piVar16 = 0x26908;
                    do {
                        piVar9 = piVar16;
                        piVar13 = piVar11;
                        do {
                            piVar9 = piVar9 + 1;
                            piVar13 = piVar13 + 1;
                        } while (*piVar9 != 0);
                        iVar14 = fcn.00024f80(piVar12,piVar16,piVar13);
                    } while ((iVar14 != 0) && (piVar12 = piVar12 + 1, *piVar12 != 0));
                    if (*piVar12 != 0) {
                        piVar9 = piVar11;
                        do {
                            piVar16 = piVar16 + 1;
                            piVar9 = piVar9 + 1;
                        } while (*piVar16 != 0);
                        piVar12 = piVar12 + piVar9;
                        iVar4 = *piVar12;
                        if (iVar4 == 0) {
code_r0x0001422a:
                            piVar12 = piVar11;
                        }
                        else {
                            do {
                                if (iVar4 == 0x26) break;
                                piVar12 = piVar12 + 1;
                                iVar4 = *piVar12;
                            } while (iVar4 != 0);
                            if (*piVar12 == 0) goto code_r0x0001422a;
                        }
                        piVar10 = NULL;
                        if (piVar12 != NULL) {
                            iVar14 = fcn.00024fbc(piVar12,0x268d0);
                            if (iVar14 == 0) {
                                piVar10 = fcn.00013548(piVar12,&uStack_48);
                            }
                            else {
                                piVar10 = fcn.000131cc(piVar12,&uStack_48);
                            }
                            if (piVar10 == NULL) goto code_r0x0001413b;
                        }
code_r0x00014265:
                        arg4_00 = fcn.000260fc(4,0x30);
                        arg1_00 = piVar5;
                        if (arg4_00 == NULL) {
code_r0x0001427a:
                            uVar6 = 0x8000000000000009;
                            arg2_00 = piVar5;
code_r0x000143a8:
                            if (piVar10 != NULL) {
                                while (piVar5 = *piVar10, piVar5 != piVar10) {
                                    *(*piVar5 + 8) = piVar5[1];
                                    *piVar5[1] = *piVar5;
                                    if (piVar5[6] != 0) {
                                        (**(*0x27020 + 0x48))();
                                    }
                                    (**(*0x27020 + 0x48))(piVar5);
                                }
                                (**(*0x27020 + 0x48))(piVar10);
                            }
                        }
                        else {
                            *arg4_00 = arg4_00;
                            arg4_00[1] = arg4_00;
                            arg1_00 = fcn.000260fc(4,0x40);
                            if (arg1_00 == NULL) goto code_r0x0001427a;
                            *arg1_00 = arg1_00;
                            arg1_00[1] = arg1_00;
                            piVar5 = arg1_00 + 6;
                            *piVar5 = piVar5;
                            arg1_00[7] = piVar5;
                            uVar6 = fcn.000124d8(*(arg1 + 0x18),iStack_50,uStack_40 & 0xffffffff,*arg3);
                            if ((uVar6 < 0) || ((uVar6 = 0, *(arg1_00 + 0x2a) == '\0' && (arg1_00[4] == 0))))
                            goto code_r0x000143a8;
                            uVar6 = fcn.00013890(arg1_00,arg2,&piStack_58);
                            arg2_00 = piStack_58;
                            uStack_40 = uVar6;
                            if (uVar6 < 0) goto code_r0x000143a8;
                            if ((piVar10 != NULL) ||
                               (cVar3 = fcn.000136e4(piStack_58,arg1_00,&uStack_40,arg3), cVar3 != '\0')) {
                                uVar6 = fcn.00013c6c(*(arg1 + 0x18),arg2_00,arg1_00,arg4_00);
                                if ((-1 < uVar6) && (*arg4 == 0)) {
                                    *arg4 = 0;
                                }
                                goto code_r0x000143a8;
                            }
                            uVar6 = uStack_40;
                        }
                        if (arg1_00 != NULL) {
                            piVar5 = arg1_00 + 6;
                            while (*piVar5 != piVar5) {
                                piVar10 = *piVar5;
                                *(*piVar10 + 8) = piVar10[1];
                                *piVar10[1] = *piVar10;
                                if (piVar10[6] != 0) {
                                    (**(*0x27020 + 0x48))();
                                }
                                piVar1 = piVar10 + 4;
                                while (*piVar1 != piVar1) {
                                    piVar2 = *piVar1;
                                    *(*piVar2 + 8) = piVar2[1];
                                    *piVar2[1] = *piVar2;
                                    (**(*0x27020 + 0x48))();
                                }
                                (**(*0x27020 + 0x48))(piVar10);
                            }
                            if (arg1_00[4] != 0) {
                                (**(*0x27020 + 0x48))();
                                arg1_00[4] = 0;
                            }
                            (**(*0x27020 + 0x48))(arg1_00);
                        }
                        if (arg4_00 != NULL) {
                            while (*arg4_00 != arg4_00) {
                                piVar5 = *arg4_00;
                                *(*piVar5 + 8) = piVar5[1];
                                *piVar5[1] = *piVar5;
                                (**(*0x27020 + 0x48))();
                            }
                            (**(*0x27020 + 0x48))(arg4_00);
                        }
                        if (arg2_00 != NULL) {
                            (**(*0x27020 + 0x48))(arg2_00);
                        }
                        goto code_r0x000144f2;
                    }
                }
            }
        }
    }
code_r0x0001413b:
    uVar6 = 0x8000000000000002;
code_r0x000144f2:
    iVar14 = 0;
    if (iStack_50 != 0) {
        (**(*0x27020 + 0x48))();
    }
    if (in_stack_00000028 != NULL) {
        piVar11 = *arg3;
        if (piVar11 == NULL) {
            *in_stack_00000028 = 0;
        }
        else {
            if (-1 < uVar6) {
                iVar4 = *piVar11;
                piVar12 = piVar11;
                while (iVar4 != 0) {
                    piVar12 = piVar12 + 1;
                    iVar14 = iVar14 + 1;
                    iVar4 = *piVar12;
                }
                piVar11 = piVar11 + iVar14;
            }
            *in_stack_00000028 = piVar11;
        }
    }
    return uVar6;
}


/* fcn.00011c3c @ 0x11c3c */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.00011c3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint8_t uVar2;
    int16_t iVar3;
    int iVar4;
    int16_t *piVar5;
    int16_t *arg3_00;
    int64_t iVar6;
    uint64_t uVar7;
    int16_t *arg2_00;
    int16_t *piVar8;
    uint32_t *arg1_00;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint32_t arg3_01;
    ulong uVar13;
    int64_t arg4_00;
    uint32_t *arg2_01;
    int16_t *piStackX_8;
    int64_t var_48h;
    uint32_t *puStack_78;
    int16_t *piStack_70;
    uint64_t uStack_68;
    uint32_t *puStack_60;
    uint64_t uStack_58;
    int64_t var_38h;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    
    puStack_78 = NULL;
    piStackX_8 = NULL;
    piStack_70 = NULL;
    *arg3 = 0;
    if (arg1 == 0) {
        iVar6 = -0x7ffffffffffffffe;
    }
    else {
        iVar6 = fcn.00011b4c(arg1,&puStack_78,&uStack_68);
    }
    if (iVar6 < 0) {
        return iVar6;
    }
    uVar12 = 4;
    puStack_60 = puStack_78;
    uVar10 = 4;
    if (4 < uStack_68) {
        while( true ) {
            iVar9 = 0;
            uVar13 = 0;
            if ((*puStack_60 & 0xffffff) <= uVar10) {
                uVar12 = uVar12 + 4;
                puStack_60 = puStack_78 + uVar12;
                uVar10 = 4;
            }
            arg2_01 = puStack_78 + uVar12;
            uVar7 = *(arg2_01 + 1) & 0x7f;
            uStack_58 = uVar10 + uVar7;
            uVar12 = uVar12 + uVar7;
            if ((*arg2_01 == '&') && (0x1a < (*(arg2_01 + 1) & 0x7f))) break;
code_r0x00011ed6:
            if (uStack_68 <= uVar12) goto code_r0x00011f44;
            uVar10 = uStack_58;
        }
        cVar1 = *(arg2_01 + 0x1a);
        iVar11 = iVar9;
        while (cVar1 != '\0') {
            cVar1 = *(arg2_01 + iVar11 + 0x1b);
            iVar11 = iVar11 + 1;
        }
        arg2_00 = fcn.000260fc(4,(iVar11 + 1) * 2);
        if (arg2_00 != NULL) {
            fcn.00024eec(arg2_01 + 0x1a,arg2_00,iVar11 + 1);
            arg4_00 = CONCAT71(uVar13 >> 8,1);
            fcn.00010688(0x268c0,0x10,arg2_01 + 1,arg4_00);
            iVar3 = *arg2_00;
            piVar8 = arg2_00;
            iVar11 = iVar9;
            while (iVar3 != 0) {
                piVar8 = piVar8 + 1;
                iVar11 = iVar11 + 1;
                iVar3 = *piVar8;
            }
            fcn.00010688(0x26938,iVar11 * 2,arg2_00,CONCAT71(arg4_00 >> 8,2));
            arg3_00 = piStack_70;
            iVar11 = iVar9;
            piVar8 = piStackX_8;
            iVar3 = _pe_dos_header;
            while (iVar3 != 0) {
                piVar8 = piVar8 + 1;
                iVar11 = iVar11 + 1;
                iVar3 = *piVar8;
            }
            iVar3 = *piStack_70;
            piVar8 = piStack_70;
            while (iVar3 != 0) {
                piVar8 = piVar8 + 1;
                iVar9 = iVar9 + 1;
                iVar3 = *piVar8;
            }
            iVar4 = iVar9 + iVar11;
            piVar8 = fcn.000260fc(4,iVar4 * 2 + 2);
            if (piVar8 != NULL) {
                fcn.00024a2c(piVar8,iVar4 + 1,0);
                fcn.00024bac(piVar8,iVar9 + iVar11 + 1,arg3_00);
                if (arg2 == 0) {
code_r0x00011e4e:
                    arg1_00 = fcn.000260fc(4,*(arg2_01 + 1) & 0x7f);
                    *arg4 = arg1_00;
                    if (arg1_00 == NULL) {
                        (**(*0x27020 + 0x48))(arg2_00);
                        (**(*0x27020 + 0x48))(0);
                        (**(*0x27020 + 0x48))(arg3_00);
                        arg2_00 = piVar8;
                        goto code_r0x00011f30;
                    }
                    uVar2 = *(arg2_01 + 1);
                    *arg3 = 1;
                    if (((uVar2 & 0x7f) != 0) && (arg1_00 != arg2_01)) {
                        section..text(arg1_00,arg2_01,uVar2 & 0x7f);
                    }
                }
                else {
                    arg3_01 = 0;
                    iVar3 = *piVar8;
                    piVar5 = piVar8;
                    while (iVar3 != 0) {
                        piVar5 = piVar5 + 1;
                        arg3_01 = arg3_01 + 1;
                        iVar3 = *piVar5;
                    }
                    iVar9 = fcn.00024f80(arg2,piVar8,arg3_01);
                    if (iVar9 == 0) goto code_r0x00011e4e;
                }
                (**(*0x27020 + 0x48))(arg2_00);
                (**(*0x27020 + 0x48))(0);
                (**(*0x27020 + 0x48))(arg3_00);
                (**(*0x27020 + 0x48))(piVar8);
                if (*arg3 == '\0') goto code_r0x00011ed6;
                goto code_r0x00011f44;
            }
            (**(*0x27020 + 0x48))(0);
            (**(*0x27020 + 0x48))(arg3_00);
code_r0x00011f30:
            (**(*0x27020 + 0x48))(arg2_00);
        }
        iVar6 = -0x7ffffffffffffff7;
    }
code_r0x00011f44:
    if (puStack_78 != NULL) {
        (**(*0x27020 + 0x48))();
    }
    return iVar6;
}


/* fcn.0001456c @ 0x1456c */

int64_t fcn.0001456c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg2_00;
    int64_t arg3_00;
    int64_t iStackX_10;
    int64_t *in_stack_00000028;
    
    arg3_00 = 0;
    iStackX_10 = 0;
    *in_stack_00000028 = arg3;
    cVar1 = *(arg2 + 0x1a);
    iVar2 = arg3_00;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = *(arg2 + 0x1a + iVar2);
    }
    arg2_00 = fcn.000260fc(4,(iVar2 + 1) * 2);
    if (arg2_00 == 0) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        fcn.00024eec(arg2 + 0x1a,arg2_00,iVar2 + 1);
        iVar2 = (**(*0x27028 + 0x48))(arg2_00,arg2 + 4,0,&iStackX_10,0);
        if (iVar2 == -0x7ffffffffffffffb) {
            arg3_00 = fcn.000260fc(4,iStackX_10);
            iVar2 = (**(*0x27028 + 0x48))(arg2_00,arg2 + 4,0,&iStackX_10,arg3_00);
            if (-1 < iVar2) {
                iVar2 = fcn.000157f4(arg1,arg3,arg3_00,iStackX_10);
            }
        }
        (**(*0x27020 + 0x48))(arg2_00);
        if (arg3_00 != 0) {
            (**(*0x27020 + 0x48))(arg3_00);
        }
    }
    return iVar2;
}


/* fcn.00010980 @ 0x10980 */

ulong fcn.00010980(int64_t arg1,uint32_t arg2)

{
    uint64_t arg2_00;
    uint64_t arg1_00;
    int16_t iVar1;
    int16_t *arg3;
    int16_t *piVar2;
    ulong uVar3;
    int64_t iVar4;
    uint in_register_00000014;
    int16_t *arg3_00;
    uint64_t arg2_01;
    int64_t iVar5;
    
    arg3_00 = CONCAT44(in_register_00000014,arg2);
    iVar4 = 0;
    if (((arg1 == 0) || (arg3 = *arg1, arg3 == NULL)) || (arg3_00 == NULL)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar1 = *arg3_00;
        piVar2 = arg3_00;
        iVar5 = iVar4;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar2;
        }
        iVar1 = *arg3;
        piVar2 = arg3;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar1 = *piVar2;
        }
        arg1_00 = iVar4 * 2 + 2;
        arg2_01 = 0x200;
        arg2_00 = arg1_00 + (iVar5 + 1) * 2;
        if ((0x400 < arg2_00) || (0x400 < arg1_00)) {
            uVar3 = fcn.000261ac(0x400,arg1_00,arg2_00,arg3);
            *arg1 = uVar3;
            arg2_01 = arg2_00 >> 1;
        }
        fcn.00024bac(*arg1,arg2_01,arg3_00);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00026284 @ 0x26284 */

ulong fcn.00026284(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x27020 + 0x98))(param_1,0x26590,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.000146b0 @ 0x146b0 */

int64_t fcn.000146b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg2_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t unaff_RDI;
    ulong uStackX_10;
    ulong auStackX_18 [2];
    
    *arg4 = arg3;
    iVar3 = 0;
    uStackX_10 = 0;
    cVar1 = *(arg2 + 0x1a);
    iVar2 = iVar3;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = *(arg2 + 0x1a + iVar2);
    }
    arg2_00 = fcn.000260fc(4,(iVar2 + 1) * 2);
    if (arg2_00 == 0) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        fcn.00024eec(arg2 + 0x1a,arg2_00,iVar2 + 1);
        iVar2 = arg2 + 4;
        iVar4 = (**(*0x27028 + 0x48))(arg2_00,iVar2,0,&uStackX_10,0);
        if (iVar4 == -0x7ffffffffffffffb) {
            auStackX_18[0] = uStackX_10;
            iVar3 = fcn.000260fc(4,uStackX_10);
            iVar4 = (**(*0x27028 + 0x48))(arg2_00,iVar2,0,&uStackX_10,iVar3);
            if (((-1 < iVar4) && (iVar4 = fcn.00015e44(arg1,arg3,iVar3,auStackX_18,unaff_RDI), -1 < iVar4)) &&
               (iVar4 = (**(*0x27028 + 0x58))(arg2_00,iVar2,*(arg2 + 0x14),uStackX_10,iVar3), iVar4 < 0)) {
                *arg4 = arg3;
            }
        }
        (**(*0x27020 + 0x48))(arg2_00);
        if (iVar3 != 0) {
            (**(*0x27020 + 0x48))(iVar3);
        }
    }
    return iVar4;
}


/* fcn.000108a0 @ 0x108a0 */

ulong fcn.000108a0(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    
    iVar4 = 0;
    if (arg2 != 0) {
        piVar3 = 0x268a8;
        iVar5 = iVar4;
        do {
            piVar3 = piVar3 + 1;
            iVar5 = iVar5 + 1;
        } while (*piVar3 != 0);
        iVar5 = fcn.00024f80(arg1,0x268a8,iVar5);
        if (iVar5 != 0) {
            piVar3 = arg1;
            iVar5 = fcn.00024fbc(arg1,0x268c0);
            if (iVar5 == 0) {
                iVar1 = *piVar3;
                piVar2 = piVar3;
                while (iVar1 != 0) {
                    piVar2 = piVar2 + 1;
                    iVar4 = iVar4 + 1;
                    iVar1 = *piVar2;
                }
                iVar5 = fcn.00026148(arg1,iVar4 * 2 + 2,piVar3);
                if (iVar5 != 0) {
code_r0x00010968:
                    *arg2 = iVar5;
                    return 0;
                }
            }
            else {
                iVar4 = iVar5 - piVar3 >> 1;
                if (iVar4 == 0) {
                    return 0x800000000000000e;
                }
                iVar4 = iVar4 * 2;
                iVar5 = fcn.00026148(arg1,iVar4,piVar3);
                if (iVar5 != 0) {
                    *(iVar4 + -2 + iVar5) = 0;
                    goto code_r0x00010968;
                }
            }
            return 0x8000000000000009;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00024acc @ 0x24acc */

ulong fcn.00024acc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.000249f8(arg3,arg2_00);
    if ((arg2 <= arg4) && (arg2 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00024b74;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x00024b74:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.000167ec @ 0x167ec */

ulong fcn.000167ec(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    ulong uVar3;
    uint64_t arg3_00;
    uint in_R8;
    
    uVar3 = 0;
    arg3_00 = 2;
    piVar2 = CONCAT44(in_register_00000014,arg2);
    iVar1 = *CONCAT44(in_register_00000014,arg2);
    while (iVar1 != 0) {
        arg3_00 = arg3_00 + 2;
        piVar2 = piVar2 + 1;
        iVar1 = *piVar2;
    }
    if (*CONCAT44(in_R8,arg3) < arg3_00) {
        uVar3 = 0x8000000000000005;
    }
    else if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg3_00 != 0)) &&
            (CONCAT44(in_register_0000000c,arg1) != CONCAT44(in_register_00000014,arg2))) {
        section..text(CONCAT44(in_register_0000000c,arg1),CONCAT44(in_register_00000014,arg2),arg3_00);
        uVar3 = 0;
    }
    *CONCAT44(in_R8,arg3) = arg3_00;
    return uVar3;
}


/* fcn.00019b84 @ 0x19b84 */

ulong fcn.00019b84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int64_t *piVar2;
    int16_t iVar3;
    bool bVar4;
    bool bVar5;
    bool bVar6;
    int16_t *piVar7;
    uint32_t uVar8;
    int64_t iVar9;
    ulong uVar10;
    int64_t iVar11;
    uint32_t *puVar12;
    int *piVar13;
    int64_t *piVar14;
    uint32_t uVar15;
    bool bVar16;
    int64_t *piStackX_8;
    int64_t *in_stack_00000028;
    
    piVar14 = NULL;
    piStackX_8 = NULL;
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    uVar15 = 0;
    if (arg3 != 0) {
        uVar15 = *arg3 & 0xffffffc8;
    }
    if (arg4 == 0) {
        arg4 = *(arg1 + 0x178);
    }
    if (arg4 == arg1 + 0x178) {
code_r0x0001a12f:
        uVar10 = 0;
    }
    else {
        do {
            iVar9 = 0;
            piVar2 = arg4 + -8;
            if (arg3 != 0) {
                if (uVar15 < 0x22001) {
                    if (uVar15 == 0x22000) {
                        piVar1 = arg2 + 6;
                        iVar3 = *piVar1;
                        piVar7 = piVar1;
                        iVar11 = iVar9;
                        while (iVar3 != 0) {
                            piVar7 = piVar7 + 1;
                            iVar11 = iVar11 + 1;
                            iVar3 = *piVar7;
                        }
                        iVar11 = iVar11 * 2 + 2;
                        if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                            iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                        }
                        if (iVar9 == 0) goto code_r0x00019f2c;
                    }
                    else if (uVar15 == 0x1000) {
                        piVar1 = arg2 + 6;
                        iVar3 = *piVar1;
                        piVar7 = piVar1;
                        iVar11 = iVar9;
                        while (iVar3 != 0) {
                            piVar7 = piVar7 + 1;
                            iVar11 = iVar11 + 1;
                            iVar3 = *piVar7;
                        }
                        iVar11 = iVar11 * 2 + 2;
                        if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                            iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                        }
                        if (iVar9 == 0) {
code_r0x00019d89:
                            puVar12 = *(arg4 + 0x20);
                            if (*puVar12 == *arg2) {
code_r0x00019d12:
                                if (puVar12[1] == *(arg2 + 4)) goto code_r0x00019f97;
code_r0x00019d20:
                                bVar5 = true;
                                piVar14 = piVar2;
                            }
                        }
                    }
                    else if (uVar15 == 0x2000) {
                        piVar1 = arg2 + 6;
                        iVar3 = *piVar1;
                        piVar7 = piVar1;
                        iVar11 = iVar9;
                        while (iVar3 != 0) {
                            piVar7 = piVar7 + 1;
                            iVar11 = iVar11 + 1;
                            iVar3 = *piVar7;
                        }
                        iVar11 = iVar11 * 2 + 2;
                        if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                            iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                        }
                        if (iVar9 == 0) {
code_r0x00019d51:
                            if ((*(arg4 + 0x20))[1] == *(arg2 + 4)) {
                                uVar8 = **(arg4 + 0x20);
                                if (uVar8 != *arg2) {
                                    uVar8 = *arg2 & uVar8;
                                    goto code_r0x00019d71;
                                }
                                goto code_r0x00019f97;
                            }
                        }
                    }
                    else if (uVar15 == 0x3000) {
                        piVar1 = arg2 + 6;
                        iVar3 = *piVar1;
                        piVar7 = piVar1;
                        iVar11 = iVar9;
                        while (iVar3 != 0) {
                            piVar7 = piVar7 + 1;
                            iVar11 = iVar11 + 1;
                            iVar3 = *piVar7;
                        }
                        iVar11 = iVar11 * 2 + 2;
                        if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                            iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                        }
                        if (iVar9 == 0) {
code_r0x00019d08:
                            puVar12 = *(arg4 + 0x20);
                            if (*puVar12 == *arg2) goto code_r0x00019d12;
                            if ((*arg2 & *puVar12) == *arg2) {
                                if (puVar12[1] != *(arg2 + 4)) {
                                    bVar6 = true;
                                    piStackX_8 = piVar2;
                                    goto code_r0x0001a0d0;
                                }
                                goto code_r0x00019d20;
                            }
                        }
                    }
                    else if (uVar15 == 0x10000) {
                        piVar13 = *(arg4 + 0x20);
                        if (*piVar13 == *arg2) goto code_r0x00019daa;
                    }
                    else {
                        if (uVar15 == 0x11000) goto code_r0x00019d89;
                        if (uVar15 == 0x12000) goto code_r0x00019d51;
                        if (uVar15 == 0x13000) goto code_r0x00019d08;
                        if (uVar15 == 0x20000) {
                            piVar1 = arg2 + 6;
                            iVar3 = *piVar1;
                            piVar7 = piVar1;
                            iVar11 = iVar9;
                            while (iVar3 != 0) {
                                piVar7 = piVar7 + 1;
                                iVar11 = iVar11 + 1;
                                iVar3 = *piVar7;
                            }
                            iVar11 = iVar11 * 2 + 2;
                            if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                                iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                            }
                            if (iVar9 == 0) {
                                bVar16 = **(arg4 + 0x20) == *arg2;
                                goto code_r0x00019db2;
                            }
                        }
                    }
code_r0x0001a0cb:
code_r0x0001a0d0:
                    if (!bVar4) goto code_r0x0001a0d9;
                }
                else {
                    if (uVar15 == 0x30000) {
                        if (**(arg4 + 0x20) == *arg2) {
                            bVar4 = true;
                        }
                        goto code_r0x0001a0cb;
                    }
                    if (uVar15 != 0x32000) {
                        if (uVar15 == 0x40000) {
                            piVar1 = arg2 + 6;
                            iVar3 = *piVar1;
                            piVar7 = piVar1;
                            iVar11 = iVar9;
                            while (iVar3 != 0) {
                                piVar7 = piVar7 + 1;
                                iVar11 = iVar11 + 1;
                                iVar3 = *piVar7;
                            }
                            iVar11 = iVar11 * 2 + 2;
                            if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                                iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                            }
                            if (iVar9 == 0) {
code_r0x0001a0b2:
                                piVar13 = *(arg4 + 0x20);
code_r0x00019daa:
                                bVar16 = piVar13[1] == *(arg2 + 4);
                                goto code_r0x00019db2;
                            }
                        }
                        else {
                            if (uVar15 != 0x41000) {
                                if (uVar15 == 0x50000) goto code_r0x0001a0b2;
                                if (uVar15 == 0x51000) goto code_r0x0001a057;
                                if (uVar15 != 0x60000) {
                                    if (uVar15 != 0x70000) goto code_r0x0001a0cb;
                                    goto code_r0x00019f97;
                                }
                                piVar1 = arg2 + 6;
                                iVar3 = *piVar1;
                                piVar7 = piVar1;
                                iVar11 = iVar9;
                                while (iVar3 != 0) {
                                    piVar7 = piVar7 + 1;
                                    iVar11 = iVar11 + 1;
                                    iVar3 = *piVar7;
                                }
                                iVar11 = iVar11 * 2 + 2;
                                if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                                    iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                                }
                                bVar16 = iVar9 == 0;
code_r0x00019db2:
                                if (bVar16) {
                                    bVar4 = true;
                                }
                                goto code_r0x0001a0d0;
                            }
                            piVar1 = arg2 + 6;
                            iVar3 = *piVar1;
                            piVar7 = piVar1;
                            iVar11 = iVar9;
                            while (iVar3 != 0) {
                                piVar7 = piVar7 + 1;
                                iVar11 = iVar11 + 1;
                                iVar3 = *piVar7;
                            }
                            iVar11 = iVar11 * 2 + 2;
                            if ((iVar11 != 0) && (*(arg4 + 0x20) + 6 != piVar1)) {
                                iVar9 = fcn.000102e0(*(arg4 + 0x20) + 6,piVar1,iVar11);
                            }
                            if (iVar9 == 0) {
code_r0x0001a057:
                                puVar12 = *(arg4 + 0x20);
                                goto code_r0x00019d12;
                            }
                        }
                        goto code_r0x0001a0cb;
                    }
code_r0x00019f2c:
                    if (**(arg4 + 0x20) != *arg2) {
                        uVar8 = *arg2 & **(arg4 + 0x20);
code_r0x00019d71:
                        if (uVar8 == *arg2) {
                            bVar5 = true;
                            piVar14 = piVar2;
                        }
                        goto code_r0x0001a0d0;
                    }
                }
code_r0x00019f97:
                if (in_stack_00000028 != NULL) {
                    *in_stack_00000028 = piVar2;
                }
                goto code_r0x0001a0fc;
            }
            if ((*(arg4 + 0x18) != 0) && (*(arg4 + 0x20) != arg2)) {
                iVar9 = fcn.000102e0(*(arg4 + 0x20),arg2,*(arg4 + 0x18));
            }
            if (iVar9 == 0) {
                if (in_stack_00000028 != NULL) {
                    *in_stack_00000028 = piVar2;
                }
                goto code_r0x0001a0fc;
            }
code_r0x0001a0d9:
            arg4 = *arg4;
        } while (arg4 != arg1 + 0x178);
        if (bVar5) {
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = piVar14;
            }
        }
        else {
            if (!bVar6) goto code_r0x0001a12f;
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = piStackX_8;
            }
        }
code_r0x0001a0fc:
        uVar10 = 1;
    }
    return uVar10;
}


/* fcn.00016748 @ 0x16748 */

ulong fcn.00016748(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t *piVar3;
    ulong *puVar4;
    int64_t in_stack_00000028;
    int64_t *in_stack_00000030;
    
    if (arg3 == '\0') {
        piVar1 = arg1 + 0x28;
        piVar3 = *piVar1;
        if (piVar3 != piVar1) {
            do {
                if (piVar3[2] == in_stack_00000028 + 8) {
                    *in_stack_00000030 = piVar3 + -1;
                    return 1;
                }
                piVar3 = *piVar3;
            } while (piVar3 != piVar1);
        }
    }
    puVar4 = fcn.000260fc(4,0x28);
    puVar4[3] = in_stack_00000028 + 8;
    piVar1 = puVar4 + 1;
    *puVar4 = 0x69666c68;
    *(puVar4 + 4) = arg2;
    *piVar1 = arg1 + 0x28;
    puVar2 = *(arg1 + 0x30);
    puVar4[2] = puVar2;
    *puVar2 = piVar1;
    *(arg1 + 0x30) = piVar1;
    *in_stack_00000030 = puVar4;
    return 0;
}


/* fcn.00016858 @ 0x16858 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_1ch
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Type propagation algorithm not settling

ulong fcn.00016858(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h,
                  int64_t arg_70h,int64_t arg_78h)

{
    uint8_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t *arg2_00;
    uint16_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint32_t auStackX_18 [4];
    ulong *in_stack_00000028;
    uint64_t *in_stack_00000030;
    int16_t *in_stack_00000038;
    ushort *in_stack_00000040;
    uint32_t uStack_88;
    uchar uStack_84;
    uchar auStack_83 [3];
    uint32_t auStack_80 [2];
    int64_t iStack_78;
    uint32_t auStack_70 [2];
    uint64_t uStack_68;
    uint uStack_60;
    uint32_t uStack_5c;
    uint32_t var_50h;
    uchar var_4ch [4];
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_1ch;
    int64_t var_bp_10h;
    
    auStackX_18[0]._0_2_ = arg3;
    uVar8 = 0;
    iStack_78 = 0;
    uVar7 = 1;
    if (auStackX_18[0] != 0xffff) {
        if (auStackX_18[0] == 0) {
            if (in_stack_00000038 != NULL) {
                *in_stack_00000038 = *(arg2 + 0x3a);
                return 0;
            }
        }
        else if (*(arg2 + 0x3a) < auStackX_18[0]) {
            return 0x800000000000000e;
        }
    }
    fcn.000102c0(var_4ch,2);
    arg2_00 = *(arg2 + 0x10);
    uStack_68 = 0;
    uVar11 = uVar8;
    do {
        uVar12 = 0;
        uVar1 = *arg2_00;
        uVar6 = uVar7;
        if (uVar1 == 0) {
            if ((auStackX_18[0] == 0xffff) && (in_stack_00000038 != NULL)) {
                *in_stack_00000038 = uVar6 - 1;
                return 0;
            }
            return 0x800000000000000e;
        }
        if (uVar1 < 0x18) {
            if (uVar1 != 0x17) {
                if (uVar1 == 0x10) {
                    uStack_68 = 1;
                    cVar2 = *(arg2_00 + 1);
                    while (cVar2 != '\0') {
                        cVar2 = *(arg2_00 + uVar12 + 2);
                        uVar12 = uVar12 + 1;
                    }
                    uVar8 = uVar8 + 2 + uVar12;
code_r0x00016a7e:
                    uVar7 = uVar6 + 1;
                    uVar11 = 1;
                }
                else {
                    if (uVar1 == 0x11) {
                        uStack_68 = 2;
                        cVar2 = *(arg2_00 + 2);
                        while (cVar2 != '\0') {
                            cVar2 = *(arg2_00 + uVar12 + 3);
                            uVar12 = uVar12 + 1;
                        }
                        uVar8 = uVar8 + 3;
code_r0x00016a4b:
                        uVar11 = 2;
                        uVar8 = uVar8 + uVar12;
                        goto code_r0x00016a4e;
                    }
                    if (uVar1 == 0x12) {
                        if (&uStack_88 != arg2_00 + 1) {
                            section..text(&uStack_88,arg2_00 + 1,2);
                        }
                        puVar10 = arg2_00 + 3;
                        uVar8 = uVar8 + 3;
                        uVar5 = uVar12;
                        if (uStack_88 != 0) {
                            do {
                                cVar2 = *puVar10;
                                uVar3 = uVar12;
                                while (cVar2 != '\0') {
                                    uVar3 = uVar3 + 1;
                                    cVar2 = *(uVar3 + puVar10);
                                }
                                uVar8 = uVar8 + 1 + uVar3;
                                if (uVar7 == auStackX_18[0]) goto code_r0x00016ec9;
                                cVar2 = *puVar10;
                                uVar3 = uVar12;
                                while (cVar2 != '\0') {
                                    uVar3 = uVar3 + 1;
                                    cVar2 = *(uVar3 + puVar10);
                                }
                                puVar10 = puVar10 + uVar3 + 1;
                                uVar7 = uVar7 + 1;
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < uStack_88);
code_r0x00016b09:
                        }
                    }
                    else if (uVar1 == 0x13) {
                        if (&uStack_88 != arg2_00 + 2) {
                            section..text(&uStack_88,arg2_00 + 2,2);
                        }
                        puVar10 = arg2_00 + 1;
                        uVar8 = uVar8 + 4;
                        uVar5 = uVar12;
                        if (uStack_88 != 0) {
                            do {
                                cVar2 = *puVar10;
                                uVar3 = uVar12;
                                while (cVar2 != '\0') {
                                    uVar3 = uVar3 + 1;
                                    cVar2 = *(uVar3 + puVar10);
                                }
                                uVar8 = uVar8 + 1 + uVar3;
                                if (uVar7 == auStackX_18[0]) {
code_r0x00016ec9:
                                    *arg4 = *arg2_00;
                                    *in_stack_00000028 = arg2_00;
                                    *in_stack_00000030 = puVar10 - arg2_00;
                                    return 0;
                                }
                                cVar2 = *puVar10;
                                uVar3 = uVar12;
                                while (cVar2 != '\0') {
                                    uVar3 = uVar3 + 1;
                                    cVar2 = *(uVar3 + puVar10);
                                }
                                puVar10 = puVar10 + uVar3 + 1;
                                uVar7 = uVar7 + 1;
                                uVar5 = uVar5 + 1;
                            } while (uVar5 < uStack_88);
                            goto code_r0x00016b09;
                        }
                    }
                    else {
                        if (uVar1 == 0x14) {
                            uStack_68 = 1;
                            fcn.000167ec(0,arg2_00 + 1,&iStack_78);
                            uVar8 = uVar8 + iStack_78 + 1;
                            goto code_r0x00016a7e;
                        }
                        if (uVar1 == 0x15) {
                            uStack_68 = 2;
                            fcn.000167ec(0,arg2_00 + 2,&iStack_78);
                            uVar12 = iStack_78 + 2;
                            goto code_r0x00016a4b;
                        }
                        if (uVar1 == 0x16) {
                            uVar8 = uVar8 + 3;
                            uStack_68 = 3;
                            puVar10 = arg2_00 + 3;
                            if (&uStack_88 != arg2_00 + 1) {
                                section..text(&uStack_88,arg2_00 + 1,2);
                            }
                            if (uStack_88 != 0) {
                                do {
                                    fcn.000167ec(0,puVar10,&iStack_78);
                                    uVar8 = uVar8 + iStack_78;
                                    if (uVar7 == auStackX_18[0]) goto code_r0x00016ead;
                                    puVar10 = puVar10 + iStack_78;
                                    uVar7 = uVar7 + 1;
                                    uVar12 = uVar12 + 1;
                                } while (uVar12 < uStack_88);
                                goto code_r0x000169c3;
                            }
                            goto code_r0x00016e9e;
                        }
                    }
                }
                goto code_r0x000169cd;
            }
            uVar8 = uVar8 + 4;
            uStack_68 = 4;
            puVar10 = arg2_00 + 1;
            if (&uStack_88 != arg2_00 + 2) {
                section..text(&uStack_88,arg2_00 + 2,2);
            }
            if (uStack_88 != 0) {
                do {
                    fcn.000167ec(0,puVar10,&iStack_78);
                    uVar8 = uVar8 + iStack_78;
                    if (uVar7 == auStackX_18[0]) {
code_r0x00016ead:
                        *arg4 = *arg2_00;
                        *in_stack_00000028 = arg2_00;
                        *in_stack_00000030 = puVar10 - arg2_00;
                        return 0;
                    }
                    puVar10 = puVar10 + iStack_78;
                    uVar7 = uVar7 + 1;
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uStack_88);
code_r0x000169c3:
                uVar11 = uStack_68;
                goto code_r0x000169cd;
            }
code_r0x00016e9e:
            uVar11 = uStack_68;
        }
        else {
            if (uVar1 == 0x20) {
                if (uVar6 == auStackX_18[0]) {
                    if (auStackX_18 != arg2_00 + 1) {
                        section..text(auStackX_18,arg2_00 + 1,2);
                    }
                    uVar7 = 1;
                    uVar8 = uVar12;
                }
                else {
                    uVar8 = uVar8 + 3;
code_r0x00016a4e:
                    uVar7 = uVar6 + 1;
                }
            }
            else if (uVar1 == 0x21) {
                if (auStack_80 != arg2_00 + 1) {
                    section..text(auStack_80,arg2_00 + 1,2);
                }
                uVar7 = uVar6 + auStack_80[0];
                uVar8 = uVar8 + 3;
            }
            else if (uVar1 == 0x22) {
                auStack_80[0]._0_2_ = *(arg2_00 + 1);
                uVar7 = uVar6 + auStack_80[0];
                uVar8 = uVar8 + 2;
            }
            else {
                if (uVar1 == 0x30) {
                    if (auStack_83 != arg2_00 + 2) {
                        section..text(auStack_83,arg2_00 + 2,1);
                    }
                    uVar12 = auStack_83[0];
                }
                else if (uVar1 == 0x31) {
                    if (&uStack_60 != arg2_00) {
                        section..text(&uStack_60,arg2_00,4);
                    }
                    if ((uStack_60._1_1_ == '@') && (auStackX_18[0] == 0xffff)) {
                        if (&uStack_84 != arg2_00 + 1) {
                            section..text(&uStack_84,arg2_00 + 1,1);
                        }
                        if (auStack_70 != arg2_00 + 5) {
                            section..text(auStack_70,arg2_00 + 5,2);
                        }
                        if (&var_50h != arg2_00 + 7) {
                            section..text(&var_50h,arg2_00 + 7,4);
                        }
                        arg2_00 = arg2_00 + 0xb;
                        fcn.000167ec(0,arg2_00,&iStack_78);
                        iVar4 = iStack_78;
                        puVar10 = fcn.000260fc(4,iStack_78 + 6);
                        if (puVar10 == NULL) {
                            return 0x8000000000000009;
                        }
                        *puVar10 = var_50h;
                        *(puVar10 + 1) = auStack_70[0];
                        if ((iVar4 != 0) && (puVar10 + 6 != arg2_00)) {
                            section..text(puVar10 + 6,arg2_00,iVar4);
                        }
                        uVar9 = 0;
                        iVar4 = arg1;
                        cVar2 = fcn.00019b84(arg1,puVar10,0,0);
                        if (cVar2 != '\0') {
                            fcn.00016748(iVar4,arg2,CONCAT71(uVar9 >> 8,uStack_84),1);
                        }
                        *(arg2 + 0x38) = *(arg2 + 0x38) + '\x01';
                        (**(*0x27020 + 0x48))(puVar10);
                        uVar11 = uStack_68;
                    }
                    uVar12 = uStack_60._2_2_;
                }
                else {
                    if (uVar1 != 0x32) goto code_r0x000169cd;
                    if (&uStack_5c != arg2_00 + 2) {
                        section..text(&uStack_5c,arg2_00 + 2,4);
                    }
                    uVar12 = uStack_5c;
                }
                uVar8 = uVar8 + uVar12;
            }
code_r0x000169cd:
        }
        if (auStackX_18[0] - 1 < 0xfffe) {
            *arg4 = *arg2_00;
            *in_stack_00000028 = arg2_00;
            *in_stack_00000030 = uVar11;
            if (auStackX_18[0] == uVar7 - 1) {
                if (1 < *arg4 - 0x21U) {
                    return 0;
                }
                return 0x800000000000000e;
            }
            if (auStackX_18[0] < uVar7 - 1) {
                return 0x800000000000000e;
            }
        }
        arg2_00 = *(arg2 + 0x10) + uVar8;
        if (in_stack_00000040 != NULL) {
            *in_stack_00000040 = uVar7;
        }
    } while( true );
}


/* fcn.000170e0 @ 0x170e0 */

ulong fcn.000170e0(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t *arg2_00;
    char cVar1;
    char *pcVar2;
    uint32_t *arg1_00;
    ulong uVar3;
    char *pcVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t arg1_01;
    uint32_t uVar8;
    int iVar9;
    int64_t iVar10;
    uint in_R9;
    uint32_t uVar11;
    uint32_t uVar12;
    int64_t *in_stack_00000028;
    char in_stack_00000030;
    
    pcVar2 = CONCAT44(in_R9,arg4);
    iVar9 = 0;
    iVar10 = *in_stack_00000028;
    if (*CONCAT44(in_R9,arg4) == '\"') {
        uVar6 = *(iVar10 + 1);
        uVar7 = 2;
    }
    else {
        uVar6 = *(iVar10 + 1);
        uVar7 = 3;
    }
    uVar11 = (in_stack_00000030 != '\0') + 3;
    uVar12 = (**(arg1 + 8) & 0xffffff) - (*(arg1 + 8))[1];
    if (arg2 == arg3) {
        if (uVar6 < 2) {
            arg1_01 = (uVar11 - uVar7) + uVar12;
        }
        else {
            arg1_01 = uVar11 + uVar12;
            iVar9 = 0;
        }
    }
    else {
        arg1_01 = uVar11 + uVar12;
        uVar8 = arg3 & 0xffff;
        if (((arg2 & 0xffff) - 1) + uVar6 != uVar8) {
            arg1_01 = arg1_01 + uVar7;
        }
        iVar9 = uVar8 - (arg2 & 0xffff);
    }
    arg1_00 = fcn.000260fc(4,arg1_01);
    if (arg1_00 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        puVar5 = *(arg1 + 0x10);
        if ((iVar10 - puVar5 != 0) && (arg1_00 != puVar5)) {
            section..text(arg1_00,puVar5,iVar10 - puVar5);
        }
        pcVar4 = arg1_00 + (iVar10 - *(arg1 + 0x10));
        if (iVar9 != 0) {
            cVar1 = *pcVar2;
            *pcVar4 = cVar1;
            if (cVar1 == '\"') {
                pcVar4[1] = iVar9;
            }
            else {
                *(pcVar4 + 1) = iVar9;
            }
            pcVar4 = pcVar4 + uVar7;
        }
        *in_stack_00000028 = pcVar4;
        *pcVar4 = (in_stack_00000030 != '\0') + '\x14';
        puVar5 = pcVar4 + uVar11;
        if (iVar9 + 1U < uVar6) {
            cVar1 = *pcVar2;
            *puVar5 = cVar1;
            if (cVar1 == '\"') {
                *(puVar5 + 1) = (uVar6 - iVar9) + -1;
            }
            else {
                *(puVar5 + 1) = (uVar6 - iVar9) + -1;
            }
            puVar5 = puVar5 + uVar7;
        }
        arg2_00 = uVar7 + iVar10;
        iVar10 = ((uVar12 - uVar7) - iVar10) + *(arg1 + 0x10);
        if ((iVar10 != 0) && (puVar5 != arg2_00)) {
            section..text(puVar5,arg2_00,iVar10);
        }
        *pcVar2 = (in_stack_00000030 != '\0') + '\x14';
        (**(*0x27020 + 0x48))(*(arg1 + 0x10));
        puVar5 = *(arg1 + 8);
        *(arg1 + 0x10) = arg1_00;
        *puVar5 = *puVar5 ^ ((*puVar5 - uVar12) + arg1_01 ^ *puVar5) & 0xffffff;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00026308 @ 0x26308 */

void fcn.00026308(void)

{
    *0x26850 = (**(*0x27020 + 0x18))(*0x26848);
    *0x26858 = 2;
    return;
}


/* fcn.000188e4 @ 0x188e4 */

bool fcn.000188e4(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    char *arg1_00;
    char *arg1_01;
    uint in_register_0000000c;
    char *pcVar2;
    int64_t iVar3;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = 0;
    cVar1 = *pcVar2;
    while (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
        cVar1 = pcVar2[iVar3];
    }
    arg1_00 = fcn.000260fc(4,iVar3 + 1);
    fcn.00024dc4(arg1_00,iVar3 + 1,pcVar2);
    cVar1 = *arg1_00;
    pcVar2 = arg1_00;
    while (cVar1 != '\0') {
        if (*pcVar2 + 0xbfU < 0x1a) {
            *pcVar2 = *pcVar2 + ' ';
        }
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
    }
    iVar3 = 0;
    cVar1 = *arg2;
    while (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
        cVar1 = *(iVar3 + arg2);
    }
    arg1_01 = fcn.000260fc(4,iVar3 + 1);
    fcn.00024dc4(arg1_01,iVar3 + 1,arg2);
    cVar1 = *arg1_01;
    pcVar2 = arg1_01;
    while (cVar1 != '\0') {
        if (*pcVar2 + 0xbfU < 0x1a) {
            *pcVar2 = *pcVar2 + ' ';
        }
        pcVar2 = pcVar2 + 1;
        cVar1 = *pcVar2;
    }
    iVar3 = 0;
    if (*arg1_00 != '\0') {
        cVar1 = *arg1_00;
        pcVar2 = arg1_00;
        do {
            if (cVar1 == ';') break;
            if (cVar1 != pcVar2[arg1_01 - arg1_00]) {
                (**(*0x27020 + 0x48))(arg1_00);
                (**(*0x27020 + 0x48))(arg1_01);
                return false;
            }
            pcVar2 = pcVar2 + 1;
            iVar3 = iVar3 + 1;
            cVar1 = *pcVar2;
        } while (cVar1 != '\0');
    }
    (**(*0x27020 + 0x48))(arg1_00);
    (**(*0x27020 + 0x48))(arg1_01);
    return *(iVar3 + arg2) == '\0';
}


/* fcn.00023960 @ 0x23960 */

ulong fcn.00023960(int64_t arg1)

{
    uint64_t auStackX_10 [3];
    
    auStackX_10[0] = 0;
    fcn.00024218(arg1,0,auStackX_10,0);
    if (*0x26ff0 < auStackX_10[0]) {
        *0x26ff0 = (auStackX_10[0] >> 2) + auStackX_10[0];
        if (*0x26fe8 != 0) {
            (**(*0x27020 + 0x48))();
        }
        *0x26fe8 = fcn.000260fc(6,*0x26ff0);
        if (*0x26fe8 == 0) {
            (**(*0x27020 + 0xc0))(0x265e0,0);
            return 0x8000000000000009;
        }
    }
    else if (*0x26ff0 != 0) {
        fcn.000102c0(*0x26fe8,*0x26ff0);
    }
    fcn.00024218(arg1,0,auStackX_10,*0x26fe8);
    (**(*0x27020 + 0xc0))(0x265e0,*0x26fe8);
    return 0;
}


/* fcn.00024dc4 @ 0x24dc4 */

ulong fcn.00024dc4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00024d98(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00024e35;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00024e35:
    cVar1 = *arg3;
    if (cVar1 != '\0') {
        arg3 = arg3 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg3);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.000207ec @ 0x207ec */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.000207ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t *arg2_00;
    uint32_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    int64_t *in_stack_00000028;
    int32_t var_40h;
    uint32_t *puStack_48;
    int64_t var_bp_10h;
    
    if (((((arg1 == 0) || ((arg2 & 0xfU) == 0)) || (arg3 == 0)) ||
        ((*arg1 != 0x70446948 || (in_stack_00000028 == NULL)))) || (*in_stack_00000028 != 0x6c686968)) {
        return 0x8000000000000002;
    }
    uVar4 = arg4 & 0xff;
    puStack_48 = NULL;
    iStackX_10 = arg2;
    if (uVar4 == 1) {
code_r0x0002089a:
        arg3 = *(arg3 + 8);
        goto code_r0x0002089e;
    }
    if (uVar4 == 2) {
        puVar3 = arg3 + 8;
        uVar4 = *puVar3;
        puStack_48 = fcn.000260fc(4,uVar4 & 0xffffff);
        if (puStack_48 != puVar3) {
            section..text(puStack_48,puVar3,4);
        }
        uVar5 = (uVar4 & 0xffffff) - 4;
        bVar6 = uVar5 == 0;
        puVar3 = puStack_48 + 1;
code_r0x00020aef:
        arg2_00 = *(arg3 + 0x10);
code_r0x00020af3:
        if ((!bVar6) && (puVar3 != arg2_00)) {
code_r0x00020afa:
            section..text(puVar3,arg2_00,uVar5);
        }
    }
    else {
        if (uVar4 == 4) {
            auStackX_8[0] = (*(arg3 + 8))[1];
            uVar4 = **(arg3 + 8) & 0xffffff;
            puStack_48 = fcn.000260fc(4,uVar4);
            uVar5 = auStackX_8[0];
            if ((auStackX_8[0] != 0) && (puStack_48 != *(arg3 + 8))) {
                section..text(puStack_48,*(arg3 + 8),auStackX_8[0]);
                uVar5 = auStackX_8[0];
            }
            uVar4 = uVar4 - uVar5;
            puVar3 = uVar5 + puStack_48;
            uVar5 = uVar4;
            bVar6 = uVar4 == 0;
            goto code_r0x00020aef;
        }
        if (uVar4 == 5) {
            auStackX_8[0] = (*(arg3 + 8))[1];
            uVar4 = **(arg3 + 8) & 0xffffff;
            puStack_48 = fcn.000260fc(4,uVar4);
            uVar5 = auStackX_8[0];
            if ((auStackX_8[0] != 0) && (puStack_48 != *(arg3 + 8))) {
                section..text(puStack_48,*(arg3 + 8),auStackX_8[0]);
                uVar5 = auStackX_8[0];
            }
            arg2_00 = *(arg3 + 0x18);
            uVar4 = uVar4 - uVar5;
            puVar3 = uVar5 + puStack_48;
            uVar5 = uVar4;
            bVar6 = uVar4 == 0;
            goto code_r0x00020af3;
        }
        if (uVar4 != 6) {
            if (uVar4 != 7) {
                if (uVar4 == 8) goto code_r0x0002089e;
                if (uVar4 != 9) {
                    return 0x8000000000000002;
                }
                goto code_r0x0002089a;
            }
            uVar4 = **(arg3 + 8) & 0xffffff;
            puVar3 = fcn.000260fc(4,uVar4);
            arg2_00 = *(arg3 + 8);
            puStack_48 = puVar3;
            if ((uVar4 == 0) || (puVar3 == arg2_00)) goto code_r0x00020aff;
            uVar5 = uVar4;
            goto code_r0x00020afa;
        }
        auStackX_8[0] = 0xc;
        puStack_48 = fcn.000260fc(4,*arg3 & 0xffffff);
        if ((auStackX_8[0] != 0) && (puStack_48 != arg3)) {
            section..text(puStack_48,arg3,auStackX_8[0]);
        }
        if (puStack_48 + 1 != auStackX_8) {
            section..text(puStack_48 + 1,auStackX_8,4);
        }
        uVar4 = *(arg3 + 0xc);
        if (uVar4 != 0) {
            if ((uVar4 != 0) && (auStackX_8[0] + puStack_48 != *(arg3 + 0x18))) {
                section..text(auStackX_8[0] + puStack_48,*(arg3 + 0x18),uVar4);
            }
        }
        if (*(arg3 + 0x10) != 0) {
            puVar3 = puStack_48 + auStackX_8[0] + uVar4;
            if ((*(arg3 + 0x10) != 0) && (puVar3 != *(arg3 + 0x20))) {
                section..text(puVar3,*(arg3 + 0x20),*(arg3 + 0x10));
            }
            auStackX_8[0] = auStackX_8[0] + uVar4;
            puVar3 = puStack_48 + 2;
            if (puVar3 != auStackX_8) {
                uVar5 = 4;
                arg2_00 = auStackX_8;
                goto code_r0x00020afa;
            }
        }
    }
code_r0x00020aff:
    arg3 = puStack_48;
code_r0x0002089e:
    iVar2 = iStackX_10;
    for (puVar1 = *(arg1 + 0x18); puVar1 != arg1 + 0x18; puVar1 = *puVar1) {
        if ((puVar1[-1] == iVar2) && (*(puVar1 + -4) == arg4)) {
            if (arg4 != '\x01') {
                puVar1[-3] = 0;
            }
            (*puVar1[-2])(*(puVar1 + -4),puVar1[-3],arg3,in_stack_00000028,iVar2);
        }
    }
    if (puStack_48 != NULL) {
        (**(*0x27020 + 0x48))(puStack_48);
    }
    return 0;
}


/* fcn.00016f3c @ 0x16f3c */

int64_t fcn.00016f3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *puVar5;
    uint32_t *arg1_00;
    char *pcVar6;
    char cVar7;
    int64_t unaff_R14;
    uint64_t uVar8;
    int64_t unaff_retaddr;
    uint64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    uint8_t auStack_28 [8];
    int64_t iStack_20;
    int64_t in_stack_ffffffffffffffe8;
    int64_t in_stack_fffffffffffffff0;
    
    uVar8 = 0;
    iVar2 = fcn.00016858(arg1,arg2,arg3,auStack_28,in_stack_ffffffffffffffe8,in_stack_fffffffffffffff0,unaff_R14,
                         unaff_retaddr);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (in_stack_00000028 == NULL) {
        return 0;
    }
    pcVar6 = in_stack_ffffffffffffffe8 + iStack_20;
    if (auStack_28[0] < 0x10) {
        return -0x7ffffffffffffff2;
    }
    cVar7 = '\0';
    if (auStack_28[0] < 0x14) {
        cVar1 = *pcVar6;
        uVar3 = uVar8;
        while (cVar1 != '\0') {
            uVar3 = uVar3 + 1;
            cVar1 = pcVar6[uVar3];
        }
        uVar3 = uVar3 * 2 + 2;
        if ((uVar3 <= *in_stack_00000028) && (arg4 != 0)) {
            uVar3 = uVar8;
            while (uVar4 = uVar8, *pcVar6 != '\0') {
                do {
                    uVar4 = uVar4 + 1;
                } while (pcVar6[uVar4] != '\0');
                if (uVar4 <= uVar3) break;
                *(arg4 + uVar3 * 2) = pcVar6[uVar3];
                uVar3 = uVar3 + 1;
            }
            *(arg4 + uVar3 * 2) = 0;
            goto code_r0x00017037;
        }
        *in_stack_00000028 = uVar3;
        iVar2 = -0x7ffffffffffffffb;
    }
    else {
        if (0x17 < auStack_28[0]) {
            return -0x7ffffffffffffff2;
        }
        iVar2 = fcn.000167ec(arg4,pcVar6,in_stack_00000028);
    }
    if (iVar2 < 0) {
        return iVar2;
    }
code_r0x00017037:
    if (in_stack_00000030 != NULL) {
        if ((auStack_28[0] - 0x11 & 0xf9) == 0) {
            cVar7 = *(iStack_20 + 1);
        }
        for (puVar5 = *(arg2 + 0x28); puVar5 != arg2 + 0x28; puVar5 = *puVar5) {
            if (*(puVar5 + 3) == cVar7) {
                iVar2 = puVar5[2];
                arg1_00 = fcn.000260fc(4,*(iVar2 + 0x18));
                *in_stack_00000030 = arg1_00;
                if (arg1_00 == NULL) {
                    return 0;
                }
                if (*(iVar2 + 0x18) == 0) {
                    return 0;
                }
                if (arg1_00 == *(iVar2 + 0x20)) {
                    return 0;
                }
                section..text(arg1_00,*(iVar2 + 0x20),*(iVar2 + 0x18));
                return 0;
            }
        }
        *in_stack_00000030 = 0;
    }
    return 0;
}


/* fcn.000172b4 @ 0x172b4 */

//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_2ch
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000172b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    int16_t iVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    int16_t *piVar6;
    int64_t iVar7;
    char *pcVar8;
    uint32_t uVar9;
    uint32_t *arg2_00;
    char *pcVar10;
    uint32_t *puVar11;
    int iVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    ulong uVar15;
    uint32_t uVar16;
    int64_t in_stack_00000028;
    uint8_t auStackY_58 [4];
    uint16_t uStackY_54;
    ushort uStackY_50;
    uint16_t uStackY_4e;
    int64_t iVar17;
    int64_t in_stack_ffffffffffffffc0;
    uint32_t var_30h;
    int64_t var_2ch;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    uStackY_54 = 0;
    iVar17 = 0;
    iVar4 = fcn.00016858(arg1,arg2,arg3,auStackY_58,0,in_stack_ffffffffffffffc0,_var_30h,stack0xffffffffffffffd0)
    ;
    iVar7 = in_stack_00000028;
    if ((iVar4 < 0) && (auStackY_58[0] - 0x21 < 2)) {
        iVar4 = fcn.000170e0(arg2,uStackY_54,arg3 & 0xffff,auStackY_58);
        if (iVar4 < 0) {
            return iVar4;
        }
        _var_30h = (iVar7 != 0) + 1;
        uVar2 = auStackY_58[0];
    }
    else {
        uVar2 = auStackY_58[0];
    }
    iVar4 = 0;
    auStackY_58[0] = 0;
    if (iVar7 != 0) {
        uVar15 = 0;
        cVar3 = fcn.00019b84(arg1,iVar7,0,0);
        if (cVar3 == '\0') {
            return -0x7ffffffffffffffe;
        }
        auStackY_58[0] = fcn.00016748(arg1,arg2,CONCAT71(uVar15 >> 8,*(arg2 + 0x38)),0);
        if (auStackY_58[0] == 0) {
            *(arg2 + 0x38) = *(arg2 + 0x38) + '\x01';
        }
        if ((uVar2 - 0x11 & 0xf9) != 0) {
            return -0x7ffffffffffffffd;
        }
        *(stack0xffffffffffffffd0 + 1) = *0x20;
    }
    iVar7 = 0;
    pcVar10 = _var_30h + stack0xffffffffffffffd0;
    uVar16 = (**(arg2 + 8) & 0xffffff) - (*(arg2 + 8))[1];
    uVar14 = uVar16;
    if (uVar2 < 0x10) {
code_r0x000177ed:
        iVar7 = -0x7ffffffffffffff2;
    }
    else {
        if (uVar2 < 0x14) {
            iVar1 = *arg4;
            piVar6 = arg4;
            iVar17 = iVar7;
            while (iVar1 != 0) {
                piVar6 = piVar6 + 1;
                iVar17 = iVar17 + 1;
                iVar1 = *piVar6;
            }
            cVar3 = *pcVar10;
            while (cVar3 != '\0') {
                iVar7 = iVar7 + 1;
                cVar3 = pcVar10[iVar7];
            }
            uVar9 = iVar17 + uVar16 + (-1 - iVar7);
            puVar5 = fcn.000260fc(4,uVar9);
            if (puVar5 != NULL) {
                puVar13 = *(arg2 + 0x10);
                if ((pcVar10 - puVar13 != 0) && (puVar5 != puVar13)) {
                    section..text(puVar5,puVar13,pcVar10 - puVar13);
                }
                iVar7 = 0;
                pcVar8 = pcVar10 + (puVar5 - *(arg2 + 0x10));
                for (; *arg4 != 0; arg4 = arg4 + 2) {
                    *pcVar8 = *arg4;
                    pcVar8 = pcVar8 + 1;
                }
                *pcVar8 = '\0';
                cVar3 = *pcVar10;
                iVar17 = iVar7;
                while (cVar3 != '\0') {
                    iVar17 = iVar17 + 1;
                    cVar3 = pcVar10[iVar17];
                }
                iVar17 = (uVar14 - 1) + ((*(arg2 + 0x10) - iVar17) - pcVar10);
                cVar3 = *pcVar10;
                while (cVar3 != '\0') {
                    iVar7 = iVar7 + 1;
                    cVar3 = pcVar10[iVar7];
                }
                if ((iVar17 != 0) && (pcVar8 + 1 != pcVar10 + iVar7 + 1)) {
                    section..text(pcVar8 + 1,pcVar10 + iVar7 + 1,iVar17);
                }
                if (uVar14 != 0) {
                    fcn.000102c0(*(arg2 + 0x10),uVar14);
                }
                (**(*0x27020 + 0x48))(*(arg2 + 0x10));
                puVar13 = *(arg2 + 8);
                *(arg2 + 0x10) = puVar5;
                uVar9 = (*puVar13 - uVar16) + uVar9;
code_r0x0001766e:
                iVar7 = 0;
                *puVar13 = *puVar13 ^ (uVar9 ^ *puVar13) & 0xffffff;
                if ((in_stack_00000028 == 0) || (auStackY_58[0] != 0)) {
                    return 0;
                }
                uVar16 = (**(arg2 + 8) & 0xffffff) - (*(arg2 + 8))[1];
                uVar14 = uVar16;
                iVar17 = iVar7;
                for (piVar6 = *(iVar4 + 0x28) + 6; *piVar6 != 0; piVar6 = piVar6 + 1) {
                    iVar17 = iVar17 + 1;
                }
                iVar17 = iVar17 * 2 + 0xd + uVar14;
                puVar5 = fcn.000260fc(4,iVar17);
                if (puVar5 != NULL) {
                    uStackY_4e = iVar17 - uVar16;
                    uStackY_50 = 0x4031;
                    if (puVar5 != &uStackY_50) {
                        section..text(puVar5,&uStackY_50,4);
                    }
                    *(puVar5 + 1) = *0x20;
                    puVar13 = *(iVar4 + 0x28) + 4;
                    if (puVar5 + 5 != puVar13) {
                        section..text(puVar5 + 5,puVar13,2);
                    }
                    if (puVar5 + 7 != *(iVar4 + 0x28)) {
                        section..text(puVar5 + 7,*(iVar4 + 0x28),4);
                    }
                    puVar11 = puVar5 + 0xb;
                    arg2_00 = *(iVar4 + 0x28) + 6;
                    iVar1 = *arg2_00;
                    puVar13 = arg2_00;
                    iVar17 = iVar7;
                    while (iVar1 != 0) {
                        puVar13 = puVar13 + 2;
                        iVar17 = iVar17 + 1;
                        iVar1 = *puVar13;
                    }
                    iVar17 = iVar17 * 2 + 2;
                    if ((iVar17 != 0) && (puVar11 != arg2_00)) {
                        section..text(puVar11,arg2_00,iVar17);
                    }
                    for (piVar6 = *(iVar4 + 0x28) + 6; *piVar6 != 0; piVar6 = piVar6 + 1) {
                        iVar7 = iVar7 + 1;
                    }
                    puVar11 = puVar11 + (iVar7 + 1) * 2;
                    if (uVar14 != 0) {
                        if (puVar11 != *(arg2 + 0x10)) {
                            section..text(puVar11,*(arg2 + 0x10),uVar14);
                        }
                        fcn.000102c0(*(arg2 + 0x10),uVar14);
                    }
                    (**(*0x27020 + 0x48))(*(arg2 + 0x10));
                    puVar13 = *(arg2 + 8);
                    *(arg2 + 0x10) = puVar5;
                    *puVar13 = *puVar13 ^ (uStackY_4e + *puVar13 ^ *puVar13) & 0xffffff;
                    return 0;
                }
            }
        }
        else {
            if (0x17 < uVar2) goto code_r0x000177ed;
            fcn.000167ec(0,pcVar10,&stack0xffffffffffffffb8);
            iVar12 = 0;
            iVar1 = *arg4;
            piVar6 = arg4;
            while (iVar1 != 0) {
                piVar6 = piVar6 + 1;
                iVar12 = iVar12 + 1;
                iVar1 = *piVar6;
            }
            uVar9 = ((iVar12 * 2 + 2) - iVar17) + uVar16;
            puVar5 = fcn.000260fc(4,uVar9);
            if (puVar5 != NULL) {
                puVar13 = *(arg2 + 0x10);
                if ((pcVar10 - puVar13 != 0) && (puVar5 != puVar13)) {
                    section..text(puVar5,puVar13,pcVar10 - puVar13);
                }
                iVar7 = 0;
                puVar13 = pcVar10 + (puVar5 - *(arg2 + 0x10));
                iVar1 = *arg4;
                piVar6 = arg4;
                while (iVar1 != 0) {
                    piVar6 = piVar6 + 1;
                    iVar7 = iVar7 + 1;
                    iVar1 = *piVar6;
                }
                iVar7 = iVar7 * 2 + 2;
                if ((iVar7 != 0) && (puVar13 != arg4)) {
                    section..text(puVar13,arg4,iVar7);
                }
                iVar7 = 0;
                for (; *arg4 != 0; arg4 = arg4 + 2) {
                    iVar7 = iVar7 + 1;
                }
                puVar13 = puVar13 + (iVar7 + 1) * 2;
                iVar7 = ((*(arg2 + 0x10) - pcVar10) - iVar17) + uVar14;
                if ((iVar7 != 0) && (puVar13 != pcVar10 + iVar17)) {
                    section..text(puVar13,pcVar10 + iVar17,iVar7);
                }
                if (uVar14 != 0) {
                    fcn.000102c0(*(arg2 + 0x10),uVar14);
                }
                (**(*0x27020 + 0x48))(*(arg2 + 0x10));
                puVar13 = *(arg2 + 8);
                *(arg2 + 0x10) = puVar5;
                uVar9 = (*puVar13 - uVar16) + uVar9;
                goto code_r0x0001766e;
            }
        }
        iVar7 = -0x7ffffffffffffff7;
    }
    return iVar7;
}


/* fcn.00019300 @ 0x19300 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Type propagation algorithm not settling

int64_t fcn.00019300(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_60h)

{
    uint8_t *arg3_00;
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int16_t iVar4;
    uint *arg2_00;
    uint8_t *puVar5;
    int16_t iVar6;
    uint32_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint16_t *arg3_01;
    int16_t iVar10;
    uint32_t auStackX_10 [2];
    int64_t iStackX_18;
    uint16_t in_stack_00000028;
    uint32_t auStack_78 [2];
    uint uStack_70;
    int16_t iStack_6a;
    uint uStack_60;
    int16_t iStack_5a;
    uint uStack_4f;
    uchar uStack_49;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_17h;
    uint32_t var_dh;
    
    auStackX_10[0]._0_2_ = arg2;
    iVar10 = 0;
    uVar7 = 0;
    iStackX_18 = arg3;
    if (auStackX_10[0] == 0xffff) {
        iVar2 = fcn.00018a18(0,arg1 + 0x30,*(arg1 + 8) + 0xc);
        if (iVar2 < 0) {
            return iVar2;
        }
        arg2_00 = *(arg1 + 8) + 0xc;
        if (&uStack_60 != arg2_00) {
            section..text(&uStack_60,arg2_00,10);
        }
        arg2 = auStackX_10[0];
    }
    iVar4 = arg2;
    puVar5 = *(arg1 + 0x18);
    uVar8 = 1;
    uVar1 = *puVar5;
    iVar6 = iVar10;
    while (uVar1 != 0) {
        if (uVar1 < 0x22) {
            if (uVar1 == 0x21) {
                if (&stack0x00000028 != puVar5 + 1) {
                    section..text(&stack0x00000028,puVar5 + 1,2);
                    arg2 = auStackX_10[0];
                }
                uVar8 = uVar8 + in_stack_00000028;
code_r0x00019415:
                puVar5 = puVar5 + 3;
                goto code_r0x00019814;
            }
            if (uVar1 == 0x10) {
                if (&uStack_60 != puVar5 + 1) {
                    section..text(&uStack_60,puVar5 + 1,10);
                    arg2 = auStackX_10[0];
                }
                if (arg2 == 0xffff) {
                    if ((uVar7 & 0xffff) < uStack_60._2_2_ + iStack_5a) {
                        uVar7 = uStack_60._2_2_ + iStack_5a;
                    }
                    if (iStack_5a < iVar10) {
                        iVar10 = iStack_5a;
                    }
                }
                iVar2 = (uStack_60 + 7 >> 3) * uStack_60._2_2_;
                if (uVar8 == arg2) {
                    puVar5 = puVar5 + 0xb;
                    if (puVar5 == NULL) {
                        return -0x7ffffffffffffffe;
                    }
                    arg3_01 = &uStack_60;
code_r0x00019839:
                    iVar2 = fcn.00019264(puVar5,iVar2,arg3_01,iStackX_18);
                    return iVar2;
                }
                puVar5 = puVar5 + 0xb;
code_r0x000196f3:
                uVar8 = uVar8 + 1;
                puVar5 = puVar5 + iVar2;
                goto code_r0x00019814;
            }
            uVar9 = 0;
            if (uVar1 == 0x11) {
                if (&uStack_4f != puVar5 + 1) {
                    section..text(&uStack_4f,puVar5 + 1,10);
                    arg2 = auStackX_10[0];
                }
                if (&var_40h + 3 != puVar5 + 0xb) {
                    section..text(&var_40h + 3,puVar5 + 0xb,2);
                    arg2 = auStackX_10[0];
                }
                puVar5 = puVar5 + 0xd;
                if (arg2 == -1) {
                    if ((uVar7 & 0xffff) < uStack_4f._2_2_ + _uStack_49) {
                        uVar7 = _uStack_49 + uStack_4f._2_2_;
                    }
                    if (_uStack_49 < iVar10) {
                        iVar10 = _uStack_49;
                    }
                }
                iVar2 = (uStack_4f + 7 >> 3) * uStack_4f._2_2_;
                if (var_40h._3_2_ != 0) {
                    do {
                        if (uVar9 + uVar8 == (arg2 & 0xffff)) {
                            if (puVar5 == NULL) {
                                return -0x7ffffffffffffffe;
                            }
                            arg3_01 = &uStack_4f;
                            goto code_r0x00019839;
                        }
                        puVar5 = puVar5 + iVar2;
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < var_40h._3_2_);
                }
                uVar8 = uVar8 + var_40h._3_2_;
                goto code_r0x00019814;
            }
            if (uVar1 == 0x12) {
                iVar2 = *(arg1 + 0x38);
                while( true ) {
                    if (iVar2 == arg1 + 0x30) goto code_r0x00019894;
                    if (*(iVar2 + 0x10) <= uVar8) break;
                    iVar2 = *(iVar2 + 8);
                }
                if (&uStack_70 != iVar2 + 0x12) {
                    section..text(&uStack_70,iVar2 + 0x12,10);
                    arg2 = auStackX_10[0];
                }
                if (arg2 == 0xffff) {
                    if ((uVar7 & 0xffff) < uStack_70._2_2_ + iStack_6a) {
                        uVar7 = uStack_70._2_2_ + iStack_6a;
                    }
                    if (iStack_6a < iVar10) {
                        iVar10 = iStack_6a;
                    }
                }
                iVar2 = (uStack_70 + 7 >> 3) * uStack_70._2_2_;
                if (uVar8 == arg2) {
                    puVar5 = puVar5 + 1;
code_r0x00019833:
                    if (puVar5 == NULL) {
                        return -0x7ffffffffffffffe;
                    }
                    arg3_01 = &uStack_70;
                    goto code_r0x00019839;
                }
                puVar5 = puVar5 + 1;
                goto code_r0x000196f3;
            }
            if (uVar1 == 0x13) {
                if (&stack0x00000028 != puVar5 + 1) {
                    section..text(&stack0x00000028,puVar5 + 1,2);
                    arg2 = auStackX_10[0];
                }
                iVar2 = *(arg1 + 0x38);
                while( true ) {
                    if (iVar2 == arg1 + 0x30) goto code_r0x00019894;
                    if (*(iVar2 + 0x10) <= uVar8) break;
                    iVar2 = *(iVar2 + 8);
                }
                if (&uStack_70 != iVar2 + 0x12) {
                    section..text(&uStack_70,iVar2 + 0x12,10);
                    arg2 = auStackX_10[0];
                }
                if (arg2 == -1) {
                    if ((uVar7 & 0xffff) < uStack_70._2_2_ + iStack_6a) {
                        uVar7 = uStack_70._2_2_ + iStack_6a;
                    }
                    if (iStack_6a < iVar10) {
                        iVar10 = iStack_6a;
                    }
                }
                puVar5 = puVar5 + 3;
                iVar2 = (uStack_70 + 7 >> 3) * uStack_70._2_2_;
                if (in_stack_00000028 != 0) {
                    do {
                        if (uVar9 + uVar8 == (arg2 & 0xffff)) goto code_r0x00019833;
                        puVar5 = puVar5 + iVar2;
                        uVar9 = uVar9 + 1;
                    } while (uVar9 < in_stack_00000028);
                }
                uVar8 = uVar8 + in_stack_00000028;
                goto code_r0x00019814;
            }
            if (uVar1 != 0x20) goto code_r0x00019814;
            if (uVar8 != arg2) {
                uVar8 = uVar8 + 1;
                goto code_r0x00019415;
            }
            if (auStackX_10 != puVar5 + 1) {
                section..text(auStackX_10,puVar5 + 1,2);
                arg2 = auStackX_10[0];
            }
            puVar5 = *(arg1 + 0x18);
            uVar8 = 1;
        }
        else {
            if (uVar1 == 0x22) {
                uVar8 = uVar8 + puVar5[1];
                puVar5 = puVar5 + 2;
            }
            else if (uVar1 == 0x23) {
                if (arg2 == 0xffff) {
                    arg3_00 = puVar5 + 1;
                    iVar2 = fcn.00018a18(uVar8,arg1 + 0x30,arg3_00);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    if (&uStack_60 != arg3_00) {
                        section..text(&uStack_60,arg3_00,10);
                    }
                    if ((uVar7 & 0xffff) < uStack_60._2_2_ + iStack_5a) {
                        uVar7 = uStack_60._2_2_ + iStack_5a;
                    }
                    arg2 = auStackX_10[0];
                    if (iStack_5a < iVar10) {
                        iVar10 = iStack_5a;
                    }
                }
                puVar5 = puVar5 + 0xb;
            }
            else {
                if (uVar1 == 0x30) {
                    uVar3 = puVar5[2];
                }
                else if (uVar1 == 0x31) {
                    if (&stack0x00000028 != puVar5 + 2) {
                        section..text(&stack0x00000028,puVar5 + 2,2);
                        arg2 = auStackX_10[0];
                    }
                    uVar3 = in_stack_00000028;
                }
                else {
                    if (uVar1 != 0x32) goto code_r0x00019814;
                    if (auStack_78 != puVar5 + 2) {
                        section..text(auStack_78,puVar5 + 2,4);
                        arg2 = auStackX_10[0];
                    }
                    uVar3 = auStack_78[0];
                }
                puVar5 = puVar5 + uVar3;
            }
code_r0x00019814:
            if (arg2 < uVar8) goto code_r0x00019894;
        }
        iVar6 = uVar7;
        iVar4 = arg2;
        uVar1 = *puVar5;
    }
    if (iVar4 == -1) {
        *(arg1 + 0x12) = iVar6;
        *(arg1 + 0x10) = iVar6 - iVar10;
        iVar2 = 0;
    }
    else {
code_r0x00019894:
        iVar2 = -0x7ffffffffffffff2;
    }
    return iVar2;
}


/* fcn.00018d64 @ 0x18d64 */

void fcn.00018d64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint8_t in_stack_00000028;
    unkbyte7 in_stack_00000029;
    uint8_t in_stack_00000030;
    unkbyte7 in_stack_00000031;
    char in_stack_00000038;
    int64_t *in_stack_00000040;
    
    iVar1 = *in_stack_00000040;
    uVar4 = 0x13;
    if (CONCAT71(in_stack_00000031,in_stack_00000030) < 0x13) {
        uVar4 = in_stack_00000030;
    }
    uVar3 = 8;
    if (CONCAT71(in_stack_00000029,in_stack_00000028) < 8) {
        uVar3 = in_stack_00000028;
    }
    uVar7 = 0;
    if (uVar4 != 0) {
        do {
            uVar6 = 0;
            if (uVar3 != 0) {
                iVar5 = 0;
                do {
                    if ((*(uVar7 + arg1) & 1 << (7 - uVar6 & 0x1f)) == 0) {
                        if (in_stack_00000038 == '\0') {
                            uVar2 = arg3;
                            goto code_r0x00018dfe;
                        }
                    }
                    else {
                        uVar2 = arg2;
code_r0x00018dfe:
                        *(iVar1 + (arg4 & 0xffffU) * -0x4c + ((arg4 & 0xffffU) * uVar7 + iVar5) * 4) = uVar2;
                    }
                    uVar6 = uVar6 + 1;
                    iVar5 = iVar5 + 1;
                } while (uVar6 < uVar3);
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
    }
    *in_stack_00000040 = iVar1 + 0x20;
    return;
}


/* fcn.00018e38 @ 0x18e38 */

void fcn.00018e38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    char cVar6;
    uint uVar7;
    int iVar8;
    int64_t iVar9;
    uint16_t uVar10;
    uint16_t uVar11;
    uint16_t uVar12;
    uint32_t uVar13;
    int16_t in_stack_00000028;
    uint64_t in_stack_00000030;
    uint64_t in_stack_00000038;
    char in_stack_00000040;
    uint16_t *in_stack_00000048;
    uint8_t in_stack_00000050;
    int64_t *in_stack_00000058;
    
    if (arg1 == 0) {
        *in_stack_00000058 = *in_stack_00000058 + in_stack_00000048[4] * 4;
    }
    else {
        uVar12 = 0;
        uVar13 = arg4 & 0xffff;
        uVar3 = in_stack_00000048[1];
        iVar5 = *in_stack_00000058;
        iVar1 = iVar5 + (in_stack_00000048[2] - (in_stack_00000048[3] + uVar3) * uVar13) * 4;
        uVar4 = in_stack_00000048[3];
        cVar6 = '\x01';
        if ((in_stack_00000050 & 1) == 0) {
            cVar6 = in_stack_00000040;
        }
        if (uVar3 != 0) {
            do {
                if (in_stack_00000038 <= ((in_stack_00000028 - uVar3) - uVar4) + uVar12) break;
                uVar11 = 0;
                iVar9 = (*in_stack_00000048 + 7 >> 3) * uVar12;
                if ((*in_stack_00000048 & 0xfff8) != 0) {
                    do {
                        uVar2 = *(uVar11 + iVar9 + arg1);
                        uVar10 = 0;
                        do {
                            if (in_stack_00000030 <= in_stack_00000048[2] + uVar11 * 8 + uVar10) break;
                            if ((uVar2 & 1 << (7U - uVar10 & 0x1f)) == 0) {
                                if (cVar6 == '\0') {
                                    iVar8 = uVar12 * uVar13 + uVar10 + uVar11 * 8;
                                    uVar7 = arg3;
                                    goto code_r0x00018fb6;
                                }
                            }
                            else {
                                iVar8 = uVar12 * uVar13 + uVar10 + uVar11 * 8;
                                uVar7 = arg2;
code_r0x00018fb6:
                                *(iVar1 + iVar8 * 4) = uVar7;
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < 8);
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < *in_stack_00000048 >> 3);
                }
                if ((*in_stack_00000048 & 7) != 0) {
                    uVar10 = 0;
                    uVar2 = *(uVar11 + iVar9 + arg1);
                    if ((*in_stack_00000048 & 7) != 0) {
                        do {
                            if (in_stack_00000030 <= in_stack_00000048[2] + uVar11 * 8 + uVar10) break;
                            if ((uVar2 & 1 << (7U - uVar10 & 0x1f)) == 0) {
                                if (cVar6 == '\0') {
                                    iVar8 = uVar12 * uVar13 + uVar10 + uVar11 * 8;
                                    uVar7 = arg3;
                                    goto code_r0x00019078;
                                }
                            }
                            else {
                                iVar8 = uVar12 * uVar13 + uVar10 + uVar11 * 8;
                                uVar7 = arg2;
code_r0x00019078:
                                *(iVar1 + iVar8 * 4) = uVar7;
                            }
                            uVar10 = uVar10 + 1;
                        } while (uVar10 < (*in_stack_00000048 & 7));
                    }
                }
                uVar12 = uVar12 + 1;
            } while (uVar12 < in_stack_00000048[1]);
        }
        *in_stack_00000058 = iVar5 + in_stack_00000048[4] * 4;
    }
    return;
}


/* fcn.00018a18 @ 0x18a18 */

ulong fcn.00018a18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    ulong *puVar3;
    ulong uVar4;
    
    puVar3 = fcn.000260fc(4,0x28);
    if (puVar3 == NULL) {
        uVar4 = 0x8000000000000009;
    }
    else {
        *puVar3 = 0x73696768;
        *(puVar3 + 3) = arg1;
        if (*(arg3 + 8) == 0) {
            *(arg3 + 8) = *arg3;
        }
        if (puVar3 + 0x1a != arg3) {
            section..text(puVar3 + 0x1a,arg3,10);
        }
        piVar1 = puVar3 + 1;
        *piVar1 = arg2;
        puVar2 = *(arg2 + 8);
        puVar3[2] = puVar2;
        *puVar2 = piVar1;
        uVar4 = 0;
        *(arg2 + 8) = piVar1;
    }
    return uVar4;
}


/* fcn.00019264 @ 0x19264 */

ulong fcn.00019264(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t *arg1_00;
    uint32_t *in_stack_00000028;
    
    if (arg3 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        if ((in_stack_00000028 != NULL) && (in_stack_00000028 != arg3)) {
            section..text(in_stack_00000028,arg3,10);
        }
        if ((arg4 != 0) && (arg2 != 0)) {
            arg1_00 = fcn.000260fc(4,arg2);
            *arg4 = arg1_00;
            if (arg1_00 == NULL) {
                return 0x8000000000000009;
            }
            if (arg1_00 != arg1) {
                section..text(arg1_00,arg1,arg2);
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00019940 @ 0x19940 */

ulong fcn.00019940(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    char16_t *pcVar4;
    uint *puVar5;
    uint in_register_0000000c;
    int64_t *piVar6;
    int64_t iVar7;
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    if ((*piVar6 == 0x70446948) && (iVar7 = 0, arg2 != 0)) {
        pcVar4 = L"sysdefault";
        do {
            pcVar4 = pcVar4 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar4 != L'\0');
        iVar1 = iVar7 * 2 + 0x14;
        puVar5 = fcn.000260fc(4,iVar1);
        if (puVar5 == NULL) {
            uVar3 = 0x8000000000000009;
        }
        else {
            *puVar5 = *((*(piVar6 + 0x31) & 0xf) * 4 + 0x26a70);
            uVar2 = piVar6[0x31];
            *(puVar5 + 2) = 7;
            puVar5[1] = *((uVar2 >> 4) * 4 + 0x26a70);
            *(puVar5 + 4) = 0x13;
            fcn.00024a2c(puVar5 + 0x12,iVar7 * 2 + 2U >> 1,0x26a58);
            *arg2 = puVar5;
            if (arg3 != 0) {
                *arg3 = iVar1;
            }
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00019a44 @ 0x19a44 */

uchar fcn.00019a44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uchar uVar5;
    int16_t *piVar6;
    int64_t iStackX_10;
    ulong auStack_28 [2];
    
    if ((arg2 == 0) && (arg3 == 0)) {
        return 1;
    }
    iStackX_10 = 0;
    auStack_28[0] = 0;
    if (arg1 != 0) {
        fcn.00019940(arg1,&iStackX_10,auStack_28);
    }
    iVar2 = iStackX_10;
    if (arg3 != 0) {
        *arg3 = iStackX_10;
    }
    if (arg4 != 0) {
        *arg4 = auStack_28[0];
    }
    if (arg2 == 0) {
        return 1;
    }
    uVar1 = *(arg2 + 8);
    uVar5 = 0;
    if ((uVar1 & 0x10001) == 0) {
        piVar6 = iStackX_10 + 0x12;
        for (piVar3 = arg2 + 0x12; (*piVar3 != 0 && (*piVar3 == *piVar6)); piVar3 = piVar3 + 1) {
            piVar6 = piVar6 + 1;
        }
        if (*piVar3 != *piVar6) goto code_r0x00019b56;
    }
    if (((((uVar1 & 0x20002) != 0) || (*(arg2 + 0x10) == *(iStackX_10 + 0x10))) &&
        (((uVar1 & 0x40004) != 0 || (*(arg2 + 0xc) == *(iStackX_10 + 0xc))))) &&
       ((((uVar1 & 0x10) != 0 || (arg2 == iStackX_10)) || (iVar4 = fcn.000102e0(arg2,iStackX_10,4), iVar4 == 0)))) {
        if ((*(arg2 + 8) & 0x20) == 0) {
            if ((arg2 + 4 != iVar2 + 4) && (iVar4 = fcn.000102e0(arg2 + 4,iVar2 + 4,4), iVar4 != 0))
            goto code_r0x00019b56;
        }
        uVar5 = 1;
    }
code_r0x00019b56:
    if ((arg3 == 0) && (iVar2 != 0)) {
        (**(*0x27020 + 0x48))(iVar2);
    }
    return uVar5;
}


/* fcn.0001b99c @ 0x1b99c */

//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.0001b99c(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    char cVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t *puStackX_8;
    int64_t var_30h_2;
    uint32_t *puStackY_58;
    int64_t iStackY_50;
    int64_t iStackY_48;
    uint32_t uStackY_40;
    uint32_t uStackY_3c;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int16_t var_8h;
    
    puVar5 = NULL;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iStackY_50 = 0;
    puStackY_58 = NULL;
    puStackX_8 = NULL;
    puVar6 = puVar5;
    if (arg2 != NULL) {
        puVar6 = *arg2;
    }
    iVar7 = arg1 + -0x28;
    iStackY_48 = iVar7;
    if (puVar6 == arg1 + 0x150) {
        puVar6 = NULL;
        puVar8 = puVar5;
    }
    else {
        cVar4 = fcn.00019a44(iVar7,arg3,&puStackX_8,&iStackY_50);
        puVar8 = puStackX_8;
        if (cVar4 != '\0') {
            if (puVar6 == NULL) {
                if (arg4 != 0) {
                    iVar7 = fcn.00026148(iVar7,iStackY_50,puStackX_8);
                    *arg4 = iVar7;
                    if (iVar7 == 0) {
                        iVar7 = -0x7ffffffffffffff7;
                        goto code_r0x0001bc37;
                    }
                }
                iVar7 = 0;
                puVar6 = *(arg1 + 0x150);
                puVar5 = NULL;
            }
            else {
                iVar7 = -0x7ffffffffffffff2;
                puVar6 = puVar5;
                puVar5 = NULL;
            }
            goto code_r0x0001bc37;
        }
        uVar1 = *(arg3 + 8);
        if ((uVar1 & 0x10001) == 0x10001 ||
            ((((uVar1 & 0x42000) == 0x42000 || (uVar1 & 0x21000) == 0x21000) || (uVar1 & 0x40004) == 0x40004) ||
            (uVar1 & 0x20002) == 0x20002)) {
            return -0x7ffffffffffffffe;
        }
        if (&uStackY_40 != arg3) {
            section..text(&uStackY_40,arg3,0x14);
        }
        puVar8 = puStackX_8;
        iVar2 = puStackX_8;
        if ((*(arg3 + 8) & 1) == 0) {
            iVar2 = arg3;
        }
        iVar7 = fcn.000198b8(iVar2 + 0x12,&puStackY_58);
        puVar5 = puStackY_58;
        if (iVar7 < 0) goto code_r0x0001bc37;
        uVar1 = *(arg3 + 8);
        if ((uVar1 & 2) != 0) {
            var_28h._0_2_ = puVar8[4];
        }
        if ((uVar1 & 4) != 0) {
            var_30h._4_4_ = puVar8[3];
        }
        if ((uVar1 & 0x10) != 0) {
            uStackY_40 = *puVar8;
        }
        if ((uVar1 & 0x20) != 0) {
            uStackY_3c = puVar8[1];
        }
        *(puStackY_58 + 1) = var_28h;
        *puStackY_58 = var_30h._4_4_;
        cVar4 = fcn.00019b84(iStackY_48,puStackY_58,&var_30h,puVar6);
        puVar3 = puStackX_8;
        if (cVar4 != '\0') {
            if (var_30h_2 != 0) {
                for (; *var_30h_2 != 0; var_30h_2 = var_30h_2 + 2) {
                    iVar7 = fcn.00019300(*(puVar3 + 6),*var_30h_2,0,0,var_30h);
                    if (iVar7 < 0) goto code_r0x0001bbc5;
                }
            }
            iVar7 = 0;
            if (arg4 != 0) {
                puVar6 = fcn.000260fc(4,*(puVar3 + 8) + 0xc);
                *arg4 = puVar6;
                if (puVar6 == NULL) {
                    iVar7 = -0x7ffffffffffffff7;
code_r0x0001bbc5:
                    puVar6 = NULL;
                    goto code_r0x0001bc37;
                }
                if (puVar6 != &uStackY_40) {
                    section..text(puVar6,&uStackY_40,0x14);
                }
                if ((*(puVar3 + 8) != 0) && (*arg4 + 0xc != *(puVar3 + 10))) {
                    section..text(*arg4 + 0xc,*(puVar3 + 10),*(puVar3 + 8));
                }
            }
            puVar6 = *(puVar3 + 2);
            goto code_r0x0001bc37;
        }
    }
    iVar7 = -0x7ffffffffffffff2;
code_r0x0001bc37:
    if (arg2 != NULL) {
        *arg2 = puVar6;
    }
    if (puVar8 != NULL) {
        (**(*0x27020 + 0x48))(puVar8);
    }
    if (puVar5 != NULL) {
        (**(*0x27020 + 0x48))(puVar5);
    }
    return iVar7;
}


/* fcn.0001a1c4 @ 0x1a1c4 */

int64_t fcn.0001a1c4(int64_t arg1)

{
    uint32_t uVar1;
    unkuint7 Var2;
    bool bVar3;
    
    uVar1 = arg1 & 0xffffU;
    Var2 = (arg1 & 0xffffU) >> 8;
    if (0x2006 < uVar1) {
        if (uVar1 < 0x2015) {
            if (uVar1 == 0x2014) {
                return CONCAT71(Var2,2);
            }
            if ((0x2007 < uVar1) &&
               (((uVar1 < 0x200c || (uVar1 == 0x2010)) || ((uVar1 != 0x2011 && (uVar1 - 0x2012 < 2))))))
            goto code_r0x0001a249;
        }
        else if (0x2027 < uVar1) {
            if (uVar1 < 0x202a) goto code_r0x0001a26d;
            if ((uVar1 != 0x202f) && (uVar1 == 0x205f)) goto code_r0x0001a249;
        }
code_r0x0001a1f8:
        return CONCAT71(Var2,0xff);
    }
    if (uVar1 < 0x2000) {
        if (uVar1 < 0x58b) {
            if (uVar1 == 0x58a) goto code_r0x0001a249;
            if (uVar1 == 10) {
code_r0x0001a26d:
                return Var2 << 8;
            }
            if (uVar1 < 0xc) goto code_r0x0001a1f8;
            if (uVar1 < 0xe) goto code_r0x0001a26d;
            bVar3 = uVar1 == 0x20;
        }
        else {
            if (((uVar1 == 0xf0b) || (uVar1 == 0x1361)) || (uVar1 == 0x1680)) goto code_r0x0001a249;
            bVar3 = uVar1 == 0x17d5;
        }
        if (!bVar3) goto code_r0x0001a1f8;
    }
code_r0x0001a249:
    return CONCAT71(Var2,1);
}


/* fcn.00018ab4 @ 0x18ab4 */

//WARNING: Variable defined which should be unmapped: var_50h
//WARNING: Variable defined which should be unmapped: var_22h
//WARNING: Type propagation algorithm not settling

ulong fcn.00018ab4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    char cVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    int16_t *piVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint *in_stack_00000028;
    uint8_t *in_stack_00000030;
    uint uStackY_78;
    uint uStackY_60;
    uint32_t var_50h;
    uint32_t auStack_4a [2];
    uint32_t var_38h;
    int64_t var_22h;
    
    if (((in_stack_00000028 != NULL) && (arg1 != 0)) && (*arg1 == 0x70446948)) {
        fcn.000102c0(in_stack_00000028,10);
        if (arg3 == 0) {
            puVar6 = *(arg1 + 8);
            do {
                if (puVar6 == arg1 + 8) {
                    return 0x800000000000000e;
                }
                puVar3 = puVar6[-3] + 0x70;
                for (puVar7 = *puVar3; uVar8 = 0, puVar7 != puVar3; puVar7 = *puVar7) {
                    iVar4 = puVar7[-1] + 8;
                    if (*(puVar7[-1] + 4) != 0) {
                        do {
                            piVar5 = uVar8 * 0x16 + iVar4;
                            if (&uStackY_78 != piVar5) {
                                section..text(&uStackY_78,piVar5,0x16);
                            }
                            if (uStackY_78 == arg2) {
                                iVar4 = fcn.000260fc(4,0x13);
                                *arg4 = iVar4;
                                if (iVar4 == 0) {
                                    return 0x8000000000000009;
                                }
                                *in_stack_00000028 = 0x130008;
                                *(in_stack_00000028 + 2) = 8;
                                if (*arg4 != &uStackY_78 + 3U) {
                                    section..text(*arg4,&uStackY_78 + 3,0x13);
                                }
                                if (in_stack_00000030 == NULL) {
                                    return 0;
                                }
                                uStackY_78._2_1_ = uStackY_78._2_1_ | 0x40;
                                goto code_r0x00018cb7;
                            }
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < *(puVar7[-1] + 4));
                    }
                    uVar8 = *(puVar7[-1] + 4);
                    uVar9 = 0;
                    if (*(puVar7[-1] + 6) != 0) {
                        do {
                            piVar5 = uVar9 * 0x2c + uVar8 * 0x16 + iVar4;
                            if (&uStackY_60 != piVar5) {
                                section..text(&uStackY_60,piVar5,0x2c);
                            }
                            if (uStackY_60 == arg2) {
                                iVar4 = fcn.000260fc(4,0x26);
                                *arg4 = iVar4;
                                if (iVar4 == 0) {
                                    return 0x8000000000000009;
                                }
                                *in_stack_00000028 = 0x130010;
                                *(in_stack_00000028 + 2) = 0x10;
                                if (*arg4 != &uStackY_60 + 3U) {
                                    section..text(*arg4,&uStackY_60 + 3,0x13);
                                }
                                if (*arg4 + 0x13 != auStack_4a) {
                                    section..text(*arg4 + 0x13,auStack_4a,0x13);
                                }
                                if (in_stack_00000030 != NULL) {
                                    uStackY_78._2_1_ = uStackY_60._2_1_ | 2;
code_r0x00018cb7:
                                    *in_stack_00000030 = uStackY_78._2_1_;
                                }
                                return 0;
                            }
                            uVar9 = uVar9 + 1;
                        } while (uVar9 < *(puVar7[-1] + 6));
                    }
                    puVar3 = puVar6[-3] + 0x70;
                }
                puVar6 = *puVar6;
            } while( true );
        }
        cVar1 = fcn.00019b84(arg1,arg3,0,0);
        if (cVar1 != '\0') {
            if (in_stack_00000030 != NULL) {
                *in_stack_00000030 = 0x80;
            }
            uVar2 = fcn.00019300(*(in_stack_00000028 + 6),arg2 & 0xffff,arg4,in_stack_00000028,var_50h);
            return uVar2;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001a148 @ 0x1a148 */

void fcn.0001a148(uint32_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    uint in_register_00000014;
    uint16_t *puVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    uVar1 = *puVar2;
    uVar5 = uVar4;
    if (uVar1 <= puVar2[1]) {
        puVar3 = CONCAT44(in_register_00000014,arg2) + uVar1 * 10 + 6;
        iVar6 = (puVar2[1] - uVar1) + 1;
        do {
            if (uVar4 < *puVar3 + puVar3[-2]) {
                uVar4 = puVar3[-2] + *puVar3;
            }
            if (*puVar3 < uVar5) {
                uVar5 = *puVar3;
            }
            puVar3 = puVar3 + 5;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
    }
    puVar2[2] = uVar4 - uVar5;
    puVar2[4] = (uVar4 - uVar5) - uVar4;
    return;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uint *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000190e0 @ 0x190e0 */

void fcn.000190e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t in_stack_00000050;
    
    if ((in_stack_00000050 & 1) == 0) {
        if ((in_stack_00000050 & 2) == 0) {
            if ((in_stack_00000050 & 0x40) == 0) {
                if (-1 < in_stack_00000050) {
                    return;
                }
                goto code_r0x00019212;
            }
        }
        else {
            fcn.00018d64(arg1,arg2,arg3,arg4 & 0xffff);
            arg3 = arg3 & 0xffffffff;
            arg1 = arg1 + 0x13;
            arg2 = arg2 & 0xffffffff;
        }
        fcn.00018d64(arg1,arg2,arg3,arg4 & 0xffff);
    }
    else {
code_r0x00019212:
        fcn.00018e38(arg1,arg2,arg3,arg4 & 0xffff);
    }
    return;
}


/* fcn.0001a270 @ 0x1a270 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.0001a270(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_70h,int64_t arg_78h,
                    int64_t arg_80h,int64_t arg_88h,int64_t arg_90h,int64_t arg_98h)

{
    uint64_t *puVar1;
    int16_t iVar2;
    int16_t iVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uint32_t uVar6;
    int64_t iVar7;
    char cVar8;
    char cVar9;
    uint16_t uVar10;
    uint16_t *puVar11;
    int64_t iVar12;
    uint64_t uVar13;
    uint16_t uVar14;
    uint32_t *puVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint16_t *puVar21;
    uint16_t *puVar22;
    uint32_t *puVar23;
    int64_t iVar24;
    uint16_t *puVar25;
    ulong *puVar26;
    ulong *puVar27;
    uint64_t uVar28;
    uint64_t uVar29;
    uint64_t uVar30;
    uint64_t uVar31;
    int16_t iVar32;
    int iVar33;
    ulong uVar34;
    uint16_t uVar35;
    int16_t *piVar36;
    uint16_t *puStackX_8;
    uint32_t uStackX_10;
    int64_t *in_stack_00000028;
    uint64_t in_stack_00000030;
    uint64_t in_stack_00000038;
    ulong *in_stack_00000040;
    uint32_t var_50h;
    int64_t *in_stack_00000050;
    int64_t in_stack_fffffffffffffef8;
    int64_t in_stack_ffffffffffffff00;
    uint32_t *puStack_d8;
    uint64_t uStack_c8;
    uint32_t *puStack_c0;
    uint32_t uStack_b0;
    uint32_t *puStack_a0;
    uint32_t uStack_98;
    ulong uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_bp_70h;
    uint32_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    uint32_t var_50h_2;
    uint32_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    uVar17 = arg2;
    puVar22 = NULL;
    uStack_b0 = 0;
    uVar30 = arg2 & 0xffffffff;
    if ((((((arg1 == 0) || (arg3 == 0)) || (in_stack_00000028 == NULL)) ||
         ((*in_stack_00000028 == 0 && (((arg2 & 0x10U) != 0 || ((arg2 & 1U) != 0)))))) || ((uVar30 & 9) == 8)) ||
       (((arg2 & 5) == 4 || ((arg2 & 10) == 10)))) {
        return -0x7ffffffffffffffe;
    }
    uStackX_10 = uVar17;
    if (*in_stack_00000028 == 0) {
        puVar11 = fcn.000260fc(4,0x10);
        if (puVar11 == NULL) {
            return -0x7ffffffffffffff7;
        }
        puStack_a0 = NULL;
        puStackX_8 = NULL;
        _var_bp_70h = NULL;
        iVar12 = (**(*0x27020 + 0x138))(2,0x265d0,0,&puStackX_8,&puStack_a0);
        if (iVar12 < 0) {
code_r0x0001a41b:
            puVar11[0] = 800;
            puVar11[1] = 600;
        }
        else {
            puVar21 = puVar22;
            if (puStackX_8 != NULL) {
                do {
                    iVar12 = (**(*0x27020 + 0x98))(*(puStack_a0 + puVar21 * 2),0x265d0,&var_bp_70h);
                    if ((-1 < iVar12) &&
                       (((*puVar11 == 0 && (puVar11[1] == 0)) ||
                        ((iVar12 = *(*(_var_bp_70h + 0x18) + 8), *(iVar12 + 4) <= *puVar11 &&
                         (*(iVar12 + 8) <= puVar11[1])))))) {
                        *puVar11 = *(*(*(_var_bp_70h + 0x18) + 8) + 4);
                        puVar11[1] = *(*(*(_var_bp_70h + 0x18) + 8) + 8);
                    }
                    puVar21 = puVar21 + 1;
                } while (puVar21 < puStackX_8);
                uVar17 = uStackX_10;
            }
            (**(*0x27020 + 0x48))(puStack_a0);
            if ((*puVar11 == 0) || (puVar11[1] == 0)) goto code_r0x0001a41b;
        }
        uVar30 = uVar17 & 0x62;
        uStackX_10 = uVar17 & 0x62;
    }
    else {
        puVar11 = puStackX_8;
    }
    var_60h = 0;
    piVar36 = arg3;
    if (*arg3 != 0) {
        do {
            piVar36 = piVar36 + 1;
            puVar22 = puVar22 + 1;
        } while (*piVar36 != 0);
        var_60h = puVar22;
    }
    iVar12 = var_60h;
    var_80h = fcn.000260fc(4,var_60h << 3);
    uVar13 = fcn.000260fc(4,iVar12 * 10);
    var_58h = fcn.000260fc(4,iVar12);
    iVar12 = arg1 + -0x28;
    puStack_d8 = NULL;
    puStack_a0 = NULL;
    var_40h = 0;
    _var_bp_70h = NULL;
    puStackX_8 = NULL;
    var_78h = iVar12;
    cVar8 = fcn.00019a44(iVar12,arg4,&puStack_a0,0);
    if (cVar8 == '\0') {
        iVar24 = fcn.0001b99c(arg1,&puStackX_8,arg4,&var_bp_70h,in_stack_fffffffffffffef8);
        puVar23 = _var_bp_70h;
        if (iVar24 == -0x7ffffffffffffff2) {
            uVar17 = *arg4;
            uVar19 = *(arg4 + 4);
            puStack_c0 = NULL;
            uVar10 = puStack_a0[4];
            goto code_r0x0001a564;
        }
        if (iVar24 == 0) {
            puStack_c0 = _var_bp_70h + 3;
            fcn.00019b84(iVar12,puStack_c0,0,0);
            uVar17 = *puVar23;
            uVar19 = puVar23[1];
            puVar23 = *(puStackX_8 + 0xc);
            goto code_r0x0001a560;
        }
code_r0x0001a5d2:
        puVar21 = NULL;
    }
    else {
        puStack_c0 = NULL;
        uVar17 = *puStack_a0;
        uVar19 = puStack_a0[1];
        puVar23 = puStack_a0;
code_r0x0001a560:
        uVar10 = puVar23[4];
code_r0x0001a564:
        iVar12 = 0;
        iVar33 = 0;
        _var_68h = uVar10;
        uStack_98 = uVar30 & 0x40;
        puStackX_8 = CONCAT44(puStackX_8._4_4_,uVar19);
        puVar22 = arg3;
        _var_50h_2 = _var_68h;
        if ((uVar30 & 0x40) != 0) {
            iVar32 = *arg3;
            piVar36 = arg3;
            while (iVar32 != 0) {
                piVar36 = piVar36 + 1;
                iVar12 = iVar12 + 1;
                iVar33 = iVar12;
                iVar32 = *piVar36;
            }
            puVar21 = fcn.000260fc(4,iVar33 * 2 + 2);
            iVar12 = 0;
            var_40h = puVar21;
            if (puVar21 == NULL) {
                iVar24 = -0x7ffffffffffffff7;
                goto code_r0x0001a5d2;
            }
            puVar22 = puVar21;
            for (; *arg3 != iVar12; arg3 = arg3 + 2) {
                uVar10 = *arg3;
                cVar8 = fcn.0001a1c4(uVar10);
                if (cVar8 != '\0') {
                    *puVar21 = uVar10;
                    puVar21 = puVar21 + 1;
                }
            }
            *puVar21 = iVar12;
        }
        iVar33 = iVar12;
        uVar35 = iVar12;
        uVar10 = *puVar22;
        puVar21 = puVar22;
        while (uVar10 != uVar35) {
            puVar21 = puVar21 + 1;
            iVar12 = iVar12 + 1;
            iVar33 = iVar12;
            uVar10 = *puVar21;
        }
        puVar21 = fcn.000260fc(4,iVar33 * 2 + 2);
        puVar23 = NULL;
        if (puVar21 != NULL) {
            var_60h = 0;
            uStack_c8 = 0;
            puVar25 = puVar22;
            puVar15 = puVar23;
            if (*puVar22 != 0) {
                do {
                    puVar25 = puVar25 + 1;
                    puVar15 = puVar15 + 1;
                } while (*puVar25 != 0);
                var_60h = puVar15;
            }
            puVar25 = puVar21;
            if (*puVar22 != 0) {
                puVar27 = var_80h;
                uVar30 = uVar13;
                do {
                    uStack_90 = uVar30;
                    if (var_60h <= uStack_c8) break;
                    uVar18 = *puVar22;
                    puVar26 = puVar27;
                    uVar28 = uStack_c8;
                    cVar8 = fcn.0001a1c4(uVar18);
                    if (cVar8 == '\0') {
                        *puVar25 = uVar18;
                        puVar27 = puVar26;
                        uStack_90 = uVar30;
                        uStack_c8 = uVar28;
                    }
                    else {
                        if (puVar26 == NULL) {
                            iVar24 = -0x7ffffffffffffffe;
                            puVar26 = NULL;
                        }
                        else {
                            iVar24 = fcn.00018ab4(var_78h,uVar18,puStack_c0,puVar26,in_stack_fffffffffffffef8,
                                                  in_stack_ffffffffffffff00);
                            puVar23 = NULL;
                            puVar26 = puVar27;
                            uVar30 = uStack_90;
                        }
                        if (iVar24 == -0x7ffffffffffffff2) {
                            if ((uStackX_10 & 0x20) == 0) {
                                if (puVar26 == NULL) {
                                    iVar12 = -0x7ffffffffffffffe;
                                }
                                else {
                                    iVar12 = fcn.00018ab4(var_78h,0xfffd,puStack_c0,puVar26,
                                                          in_stack_fffffffffffffef8,in_stack_ffffffffffffff00);
                                    puVar23 = NULL;
                                }
                                if (iVar12 < 0) {
                                    iVar24 = -0x7ffffffffffffffe;
                                    goto code_r0x0001a774;
                                }
                            }
                            else {
                                *puVar26 = puVar23;
                                fcn.000102c0(uVar30,10);
                                puVar23 = NULL;
                            }
                        }
                        else {
code_r0x0001a774:
                            if (iVar24 < 0) goto code_r0x0001a9c8;
                        }
                        *puVar25 = *puVar22;
                    }
                    uStack_c8 = uStack_c8 + 1;
                    puVar27 = puVar27 + 1;
                    uVar30 = uStack_90 + 10;
                    puVar22 = puVar22 + 1;
                    puVar25 = puVar25 + 1;
                    uStack_90 = uVar30;
                } while (*puVar22 != puVar23);
            }
            uVar6 = uStack_98;
            uVar10 = puVar23;
            *puVar25 = uVar10;
            uVar20 = uVar19;
            if (*in_stack_00000028 == puVar23) {
                uVar35 = *puVar11;
                uVar30 = puVar23 & 0xffff;
                uVar29 = puVar23 & 0xffff;
                uVar18 = in_stack_00000030 % uVar35;
                uVar31 = puVar23 & 0xffff;
                uVar28 = in_stack_00000038;
                uStack_b0 = 0;
                if (*puVar21 != 0) {
                    uVar35 = *puVar11;
                    puVar25 = uVar13 + 6;
                    puVar22 = puVar21;
                    do {
                        uVar10 = puVar25[-2];
                        if ((uVar29 & 0xffff) < *puVar25 + uVar10) {
                            uVar29 = uVar10 + *puVar25;
                        }
                        if (*puVar25 < uVar31) {
                            uVar31 = *puVar25;
                        }
                        if ((uVar6 == 0) && (cVar8 = fcn.0001a1c4(*puVar22), cVar8 == '\0')) {
                            iVar32 = uVar31;
                            uVar31 = *puVar25;
                            uVar28 = uVar28 + (uVar29 - iVar32);
                            uVar29 = uVar10 + *puVar25;
                            uStack_b0 = uStack_b0 + 1;
                            if (uVar30 < uVar18) {
                                uVar30 = uVar18 & 0xffff;
                            }
                            uVar18 = 0;
                        }
                        else {
                            uVar14 = uVar18;
                            if (uVar35 < puVar25[1] + (uVar18 & 0xffff)) {
                                iVar32 = uVar31;
                                uVar31 = *puVar25;
                                uVar28 = uVar28 + (uVar29 - iVar32);
                                uVar29 = uVar10 + *puVar25;
                                uStack_b0 = uStack_b0 + 1;
                                if (uVar30 < uVar14) {
                                    uVar30 = uVar18 & 0xffff;
                                }
                                uVar14 = 0;
                            }
                            uVar18 = uVar14 + puVar25[1];
                        }
                        puVar22 = puVar22 + 1;
                        if (*puVar22 == 0) {
                            if (uVar30 < uVar18) {
                                uVar30 = uVar18;
                            }
                            uVar10 = uVar29 - uVar31;
                            uVar28 = uVar28 + uVar10;
                            _var_50h_2 = uVar10;
                            uStack_b0 = uStack_b0 + 1;
                        }
                        uVar10 = uVar30;
                        puVar25 = puVar25 + 5;
                    } while (*puVar22 != 0);
                    uVar35 = *puVar11;
                    uVar20 = puStackX_8;
                }
                if (uVar10 < uVar35) {
                    *puVar11 = uVar10;
                }
                if (uVar28 < puVar11[1]) {
                    puVar11[1] = uVar28;
                }
                iVar12 = fcn.000260fc(4,*puVar11 * puVar11[1] * 4);
                puVar23 = NULL;
                *(puVar11 + 4) = iVar12;
                if (iVar12 == 0) {
                    (**(*0x27020 + 0x48))(puVar11);
                    puVar23 = NULL;
                    iVar24 = -0x7ffffffffffffff7;
                    goto code_r0x0001a9c8;
                }
                *in_stack_00000028 = puVar11;
            }
            puVar22 = *in_stack_00000028;
            if (puVar22[1] < in_stack_00000038) {
                iVar24 = -0x7ffffffffffffffe;
                goto code_r0x0001a9c8;
            }
            if (uStack_b0 == puVar23) {
                uVar30 = puVar22[1] - in_stack_00000038;
                auVar4._8_8_ = 0;
                auVar4._0_8_ = _var_68h;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = uVar30;
                uStack_b0 = SUB164(auVar5 / auVar4,0);
                uVar30 = uVar30 % _var_68h;
                if (uVar30 != 0) {
                    uStack_b0 = SUB162(auVar5 / auVar4,0) + 1;
                    _var_50h_2 = uVar30;
                }
            }
            puStack_d8 = fcn.000260fc(4,(uStack_b0 & 0xffff) * 0x28);
            if (puStack_d8 == NULL) {
code_r0x0001aafc:
                iVar24 = -0x7ffffffffffffff7;
            }
            else {
                uVar10 = 0;
                uStack_90 = CONCAT44(uStack_90._4_4_,uStackX_10 >> 4) & 0xffffffffffffff01;
                uVar30 = 0;
                if (uStack_b0 != 0) {
                    while (puVar21[uVar30] != 0) {
                        iVar12 = 0;
                        uVar34 = 0;
                        cVar8 = '\0';
                        puStackX_8 = puStackX_8 & 0xffffffffffffff00;
                        if (uVar10 == (uStack_b0 & 0xffff) - 1) {
                            if (((uStackX_10 & 4) != 0) && (_var_50h_2 < _var_68h)) break;
                            _var_68h = _var_50h_2;
                        }
                        puVar1 = puStack_d8 + uVar10 * 10;
                        *puVar1 = uVar30;
                        uVar18 = *puVar22;
                        uVar28 = uVar30;
                        if (in_stack_00000030 < uVar18) {
                            piVar36 = uVar13 + uVar30 * 10 + 8;
                            puVar11 = puVar21;
                            do {
                                cVar8 = uVar34;
                                if (puVar11[uVar28] == 0) break;
                                if ((uStack_98 == 0) && (cVar8 = fcn.0001a1c4(puVar11[uVar28]), cVar8 == '\0')) {
                                    cVar8 = '\x01';
                                    uVar28 = uVar28 + 1;
                                    puStackX_8 = CONCAT71(puStackX_8._1_7_,1);
                                    break;
                                }
                                cVar8 = uVar34;
                                uVar28 = uVar28 + 1;
                                iVar12 = iVar12 + *piVar36;
                                piVar36 = piVar36 + 5;
                            } while (iVar12 + in_stack_00000030 < uVar18);
                        }
                        uVar29 = uVar28 - 1;
                        if ((cVar8 != '\0') && (uVar29 != 0)) {
                            uVar29 = uVar28 - 2;
                        }
                        iVar33 = *(uVar13 + 4 + uVar29 * 10);
                        uVar35 = *(uVar13 + uVar29 * 10);
                        uVar31 = iVar12 - ((*(uVar13 + 8 + uVar29 * 10) - uVar35) - iVar33);
                        var_78h = uVar28;
                        if ((uVar18 < uVar31 + in_stack_00000030) && ((uStackX_10 & 8) != 0)) {
                            if (uVar30 < uVar29) {
                                uVar14 = *((uVar13 - 10) + uVar29 * 10);
                                iVar32 = *((uVar13 - 2) + uVar29 * 10);
                                iVar2 = *((uVar13 - 6) + uVar29 * 10);
                                puVar1[1] = uVar29 - 1;
                                uVar31 = uVar31 - (((iVar32 - uVar14) - iVar2) + uVar35 + iVar33);
                                goto code_r0x0001accb;
                            }
                            puVar1[3] = 0;
                        }
                        else {
                            puVar1[1] = uVar29;
code_r0x0001accb:
                            puVar1[3] = uVar31;
                            fcn.0001a148(puVar1,uVar13);
                            if (((uStackX_10 & 2) != 0) &&
                               (((uVar30 = puVar1[3], *puVar22 < uVar30 + in_stack_00000030 || (puVar21[var_78h] != 0))
                                && (puStackX_8 == '\0')))) {
                                if (uStack_98 == 0) {
                                    uVar28 = puVar1[1];
                                    puVar11 = puVar21;
                                    cVar8 = '\0';
                                    if (*puVar1 <= uVar28) {
                                        piVar36 = uVar13 + uVar28 * 10 + 8;
                                        do {
                                            if (uVar28 == puVar1[1]) {
                                                iVar12 = piVar36[-2] + piVar36[-4];
                                            }
                                            else {
                                                iVar12 = *piVar36;
                                            }
                                            uVar30 = uVar30 - iVar12;
                                            cVar8 = fcn.0001a1c4(puVar11[uVar28]);
                                            if ('\0' < cVar8) {
                                                cVar8 = '\x01';
                                                puStackX_8 = CONCAT71(puStackX_8._1_7_,1);
                                                if (*puVar1 < uVar28) {
                                                    puVar1[1] = uVar28 - 1;
                                                }
                                                var_78h = uVar28 + 1;
                                                goto code_r0x0001ad90;
                                            }
                                            if (uVar28 == *puVar1) break;
                                            uVar28 = uVar28 - 1;
                                            piVar36 = piVar36 + -5;
                                        } while (*puVar1 <= uVar28);
                                        cVar8 = puStackX_8;
                                    }
code_r0x0001ad90:
                                    cVar9 = fcn.0001a1c4(puVar11[uVar28]);
                                    uVar18 = 0;
                                    if ('\0' < cVar9) {
                                        if (uVar28 != *puVar1) {
                                            uVar18 = uVar30 - ((*((uVar13 - 2) + uVar28 * 10) -
                                                               *((uVar13 - 10) + uVar28 * 10)) -
                                                              *((uVar13 - 6) + uVar28 * 10));
                                        }
                                        puVar1[3] = uVar18;
                                    }
                                    if (cVar8 != '\0') goto code_r0x0001ae5c;
                                }
                                uVar30 = puVar1[1];
                                if (*puVar22 < puVar1[3] + in_stack_00000030) {
                                    if (uVar30 <= *puVar1) {
                                        puVar1[3] = 0;
                                        goto code_r0x0001ac7d;
                                    }
                                    uVar35 = *((uVar13 - 10) + uVar30 * 10);
                                    iVar32 = *((uVar13 - 2) + uVar30 * 10);
                                    iVar2 = *((uVar13 - 6) + uVar30 * 10);
                                    uVar14 = *(uVar13 + uVar30 * 10);
                                    iVar3 = *(uVar13 + 4 + uVar30 * 10);
                                    puVar1[1] = uVar30 - 1;
                                    puVar1[3] = puVar1[3] - (((iVar32 - uVar35) - iVar2) + uVar14 + iVar3);
                                }
                            }
code_r0x0001ae5c:
                            uVar30 = 0;
                            if (*puVar22 < puVar1[3] + in_stack_00000030) {
                                puVar1[3] = *puVar22 - in_stack_00000030;
                            }
                            if (puVar22[1] < puVar1[2] + in_stack_00000038) {
                                puVar1[2] = puVar22[1] - in_stack_00000038;
                            }
                            if (uStackX_10 < '\0') {
                                iVar12 = 0;
                                _var_48h = 0;
                                if (puVar1[3] != 0) {
                                    iVar12 = fcn.000260c8(puVar1[3] * puVar1[2] * 4);
                                    puVar23 = NULL;
                                    _var_48h = iVar12;
                                    if (iVar12 == 0) {
                                        iVar24 = -0x7ffffffffffffff7;
                                        goto code_r0x0001a9c8;
                                    }
                                    if (uStack_90 != '\0') {
                                        (**(*(puVar22 + 4) + 0x10))
                                                  (*(puVar22 + 4),iVar12,1,in_stack_00000030,in_stack_00000038,0,0
                                                   ,puVar1[3],puVar1[2],0);
                                    }
                                    if ((puVar1[3] * puVar1[2] & 0x3fffffffffffffff) != 0) {
                                        fcn.00010300(iVar12,puVar1[3] * puVar1[2] & 0x3fffffffffffffff,
                                                     (uVar19 >> 8 & 0xffff) << 8 | uVar20 & 0xff);
                                    }
                                }
                                uVar28 = *puVar1;
                                if (uVar28 <= puVar1[1]) {
                                    piVar36 = uVar13 + uVar28 * 10 + 8;
                                    piVar16 = in_stack_00000050;
                                    do {
                                        if ((puVar1[3] != 0) && (uVar30 < puVar1[3])) {
                                            fcn.000190e0(*(var_80h + uVar28 * 8),uVar17,uVar20,puVar1[3]);
                                            piVar16 = in_stack_00000050;
                                        }
                                        if (piVar16 != NULL) {
                                            if (((*(var_80h + uVar28 * 8) == 0) && (*piVar36 == 0)) || (puVar1[3] == 0))
                                            {
                                                *piVar16 = -1;
                                            }
                                            else {
                                                *piVar16 = piVar36[-2] + uVar30 + in_stack_00000030;
                                            }
                                            piVar16 = piVar16 + 1;
                                            in_stack_00000050 = piVar16;
                                        }
                                        uVar28 = uVar28 + 1;
                                        uVar30 = uVar30 + *piVar36;
                                        piVar36 = piVar36 + 5;
                                    } while (uVar28 <= puVar1[1]);
                                    iVar12 = _var_48h;
                                }
                                if (iVar12 != 0) {
                                    iVar24 = (**(*(puVar22 + 4) + 0x10))
                                                       (*(puVar22 + 4),iVar12,2,0,0,in_stack_00000030,
                                                        in_stack_00000038,puVar1[3],puVar1[2],0);
                                    (**(*0x27020 + 0x48))(iVar12);
                                    puVar23 = NULL;
                                    if (iVar24 < 0) goto code_r0x0001a9c8;
                                }
                            }
                            else {
                                uVar28 = *puVar1;
                                if (uVar28 <= puVar1[1]) {
                                    piVar36 = uVar13 + uVar28 * 10 + 8;
                                    piVar16 = in_stack_00000050;
                                    do {
                                        if ((puVar1[3] != 0) && (uVar30 < puVar1[3])) {
                                            fcn.000190e0(*(var_80h + uVar28 * 8),uVar17,uVar20,*puVar22);
                                            piVar16 = in_stack_00000050;
                                        }
                                        if (piVar16 != NULL) {
                                            if (((*(var_80h + uVar28 * 8) == 0) && (*piVar36 == 0)) || (puVar1[3] == 0))
                                            {
                                                *piVar16 = -1;
                                            }
                                            else {
                                                *piVar16 = piVar36[-2] + uVar30 + in_stack_00000030;
                                            }
                                            piVar16 = piVar16 + 1;
                                            in_stack_00000050 = piVar16;
                                        }
                                        uVar28 = uVar28 + 1;
                                        uVar30 = uVar30 + *piVar36;
                                        piVar36 = piVar36 + 5;
                                    } while (uVar28 <= puVar1[1]);
                                }
                            }
                        }
code_r0x0001ac7d:
                        in_stack_00000038 = in_stack_00000038 + puVar1[2];
                        uVar10 = uVar10 + 1;
                        if ((puStackX_8 == '\0') || (uStack_b0 <= uVar10)) break;
                        uVar30 = var_78h;
                    }
                }
                uVar30 = uVar10;
                if (in_stack_00000040 != NULL) {
                    if (uVar30 * 5 == 0) {
                        *in_stack_00000040 = 0;
                    }
                    else {
                        puVar23 = fcn.000260fc(4,uVar30 * 0x28);
                        *in_stack_00000040 = puVar23;
                        if (puVar23 == NULL) goto code_r0x0001aafc;
                        if (puVar23 != puStack_d8) {
                            section..text(puVar23,puStack_d8,uVar30 * 0x28);
                        }
                    }
                }
                iVar24 = 0;
                if (_var_50h != NULL) {
                    *_var_50h = uVar30;
                }
            }
            puVar23 = NULL;
            goto code_r0x0001a9c8;
        }
        iVar24 = -0x7ffffffffffffff7;
    }
    puVar23 = NULL;
    puStack_d8 = puVar23;
code_r0x0001a9c8:
    iVar7 = var_60h;
    iVar12 = var_80h;
    if (var_60h != 0) {
        do {
            if (*(iVar12 + puVar23 * 8) != 0) {
                (**(*0x27020 + 0x48))();
            }
            puVar23 = puVar23 + 1;
        } while (puVar23 < iVar7);
    }
    if (var_40h != 0) {
        (**(*0x27020 + 0x48))(var_40h);
    }
    if (puVar21 != NULL) {
        (**(*0x27020 + 0x48))(puVar21);
    }
    if (_var_bp_70h != NULL) {
        (**(*0x27020 + 0x48))();
    }
    if (puStack_d8 != NULL) {
        (**(*0x27020 + 0x48))(puStack_d8);
    }
    if (puStack_a0 != NULL) {
        (**(*0x27020 + 0x48))(puStack_a0);
    }
    if (iVar12 != 0) {
        (**(*0x27020 + 0x48))(iVar12);
    }
    if (uVar13 != 0) {
        (**(*0x27020 + 0x48))(uVar13);
    }
    if (var_58h != 0) {
        (**(*0x27020 + 0x48))(var_58h);
    }
    return iVar24;
}


/* fcn.0001b66c @ 0x1b66c */

int64_t fcn.0001b66c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t *puVar2;
    uint16_t *puVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    int64_t *in_stack_00000028;
    int64_t in_stack_ffffffffffffff68;
    uchar in_stack_ffffffffffffff70;
    unkbyte7 in_stack_ffffffffffffff71;
    uint32_t uStack_74;
    uint32_t auStack_70 [2];
    uint16_t uStack_68;
    uint16_t uStack_66;
    int16_t iStack_64;
    int16_t iStack_62;
    uint32_t *puStack_58;
    uint32_t *puStack_50;
    uint32_t *puStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    
    puVar5 = NULL;
    if (((arg1 == 0) || (arg4 == 0)) || (*arg4 != 0)) {
        return -0x7ffffffffffffffe;
    }
    iStack_30 = arg1 + -0x28;
    puStack_48 = NULL;
    iStack_38 = 0;
    iStack_40 = 0;
    puStack_58 = NULL;
    puStack_50 = NULL;
    fcn.000102c0(auStack_70,4);
    fcn.000102c0(&uStack_74,4);
    cVar1 = fcn.00019a44(iStack_30,arg3,&puStack_48,0);
    if (cVar1 == '\0') {
        puVar2 = fcn.000260fc(4,4);
        if (puVar2 == NULL) goto code_r0x0001b718;
        *puVar2 = arg2;
        *(puVar2 + 2) = 0;
        iVar6 = fcn.0001b99c(arg1,&iStack_38,arg3,&puStack_58,in_stack_ffffffffffffff68);
        puVar5 = puStack_58;
        if (iVar6 == -0x7ffffffffffffff2) {
            puStack_50 = NULL;
            puVar4 = arg3;
            goto code_r0x0001b78e;
        }
        if (iVar6 == 0) {
            puStack_50 = puStack_58 + 3;
            auStack_70[0] = *puStack_58;
            uStack_74 = puStack_58[1];
            goto code_r0x0001b796;
        }
    }
    else {
        puVar4 = puStack_48;
        puVar2 = puVar5;
code_r0x0001b78e:
        auStack_70[0] = *puVar4;
        uStack_74 = puVar4[1];
code_r0x0001b796:
        iVar6 = fcn.00018ab4(iStack_30,arg2 & 0xffff,puStack_50,&iStack_40,in_stack_ffffffffffffff68,
                             CONCAT71(in_stack_ffffffffffffff71,in_stack_ffffffffffffff70));
        if (-1 < iVar6) {
            puVar3 = fcn.000260fc(4,0x10);
            if (puVar3 == NULL) {
code_r0x0001b718:
                iVar6 = -0x7ffffffffffffff7;
                goto code_r0x0001b933;
            }
            *puVar3 = uStack_68;
            puVar3[1] = uStack_66;
            if (0 < uStack_68 * uStack_66) {
                iVar6 = fcn.000260fc(4,uStack_68 * uStack_66 * 4);
                *(puVar3 + 4) = iVar6;
                if (iVar6 == 0) {
                    (**(*0x27020 + 0x48))(puVar3);
                    goto code_r0x0001b718;
                }
                iStack_38 = iVar6 + ((uStack_66 + iStack_62) * *puVar3 - iStack_64) * 4;
                fcn.000190e0(iStack_40,auStack_70[0],uStack_74,*puVar3);
            }
            *arg4 = puVar3;
            iVar6 = 0;
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = iStack_62;
            }
        }
    }
    if (iVar6 == -0x7ffffffffffffff2) {
        if (arg2 == -3) {
            iVar6 = -0x7ffffffffffffff2;
        }
        else {
            iVar6 = fcn.0001b66c(arg1,0xfffd,arg3,arg4);
            if (-1 < iVar6) {
                iVar6 = 1;
            }
        }
    }
code_r0x0001b933:
    if (puStack_48 != NULL) {
        (**(*0x27020 + 0x48))(puStack_48);
    }
    if (puVar5 != NULL) {
        (**(*0x27020 + 0x48))(puVar5);
    }
    if (puVar2 != NULL) {
        (**(*0x27020 + 0x48))(puVar2);
    }
    if (iStack_40 != 0) {
        (**(*0x27020 + 0x48))();
    }
    return iVar6;
}


/* fcn.000198b8 @ 0x198b8 */

ulong fcn.000198b8(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int16_t *arg3;
    int64_t iVar5;
    
    arg3 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    iVar1 = *arg3;
    piVar2 = arg3;
    while (iVar1 != 0) {
        piVar2 = piVar2 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = *piVar2;
    }
    iVar3 = fcn.000260fc(4,iVar5 * 2 + 8);
    *arg2 = iVar3;
    if (iVar3 == 0) {
        uVar4 = 0x8000000000000009;
    }
    else {
        fcn.00024a2c(iVar3 + 6,iVar5 * 2 + 2U >> 1,arg3);
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001ca94 @ 0x1ca94 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Type propagation algorithm not settling

int64_t fcn.0001ca94(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_60h)

{
    uint16_t uVar1;
    ulong *puVar2;
    uint8_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint in_register_0000000c;
    uint64_t uVar7;
    uint in_register_00000014;
    uint16_t uVar8;
    uint64_t uVar9;
    uint16_t *arg2_00;
    uint32_t arg3_00;
    uint8_t uVar10;
    int16_t aiStackX_18 [4];
    uint32_t auStackX_20 [2];
    char in_stack_00000028;
    int64_t var_58h;
    uint uStack_48;
    uint16_t uStack_44;
    ushort *puStack_40;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    aiStackX_18[0] = arg3;
    uVar9 = 0;
    if ((arg4 == 0) || (aiStackX_18[0] == 0)) {
        return -0x7ffffffffffffffe;
    }
    for (puVar2 = *CONCAT44(in_register_0000000c,arg1); puVar2 != CONCAT44(in_register_0000000c,arg1);
        puVar2 = *puVar2) {
        if (puVar2[-1] == CONCAT44(in_register_00000014,arg2)) {
            uVar7 = puVar2[-3];
            goto code_r0x0001cadf;
        }
    }
    uVar7 = uVar9;
code_r0x0001cadf:
    if (((uVar7 == 0) || (iVar5 = *(uVar7 + 0x68), iVar5 == 0)) ||
       (puVar3 = fcn.0001bfa0(*(iVar5 + 0x18),aiStackX_18), puVar3 == NULL)) {
        return -0x7ffffffffffffff2;
    }
    *arg4 = 0;
    uVar6 = *puVar3;
    if (uVar6 < 0x15) {
        if ((uVar6 == 0x14) || (uVar6 == 0x10)) goto code_r0x0001cb40;
        if (uVar6 != 0x11) {
            if (uVar6 == 0x12) goto code_r0x0001cb40;
            if (uVar6 != 0x13) {
                return -0x7ffffffffffffff2;
            }
        }
    }
    else if (uVar6 != 0x15) {
        if (uVar6 != 0x16) {
            if (uVar6 != 0x17) {
                if (uVar6 != 0x18 && uVar6 != 0x19) {
                    return -0x7ffffffffffffff2;
                }
                if (in_stack_00000028 == '\0') {
                    puStack_40 = NULL;
                    iVar5 = fcn.0001bd7c(*puVar3);
                    if (iVar5 != 0) {
                        iVar5 = (**(iVar5 + 0x10))(iVar5,puVar3 + 5,*(puVar3 + 1),&puStack_40,0);
                        if (-1 < iVar5) {
                            *(arg4 + 8) = *(puStack_40 + 4);
                            *(arg4 + 6) = puStack_40[1];
                            *(arg4 + 4) = *puStack_40;
                            (**(*0x27020 + 0x48))();
                        }
                        return iVar5;
                    }
                }
                return -0x7ffffffffffffffd;
            }
            *arg4 = 1;
        }
        uVar8 = *(puVar3 + 3);
        uVar1 = *(puVar3 + 1);
        iVar5 = fcn.000260fc(4,uVar8 * uVar1 * 4);
        *(arg4 + 8) = iVar5;
        if (iVar5 == 0) {
            return -0x7ffffffffffffff7;
        }
        *(arg4 + 4) = uVar1;
        *(arg4 + 6) = uVar8;
        if (uVar8 == 0) {
            return 0;
        }
        do {
            iVar4 = uVar9 * *(arg4 + 4);
            fcn.0001c150(iVar5 + iVar4 * 4,puVar3 + iVar4 * 3 + 5,*(arg4 + 4));
            uVar8 = uVar9 + 1;
            uVar9 = uVar8;
        } while (uVar8 < *(arg4 + 6));
        return 0;
    }
    *arg4 = 1;
code_r0x0001cb40:
    if (&uStack_48 != puVar3) {
        section..text(&uStack_48,puVar3,7);
    }
    iVar4 = fcn.000260fc(4,uStack_44 * uStack_48._2_2_ * 4);
    *(arg4 + 8) = iVar4;
    if (iVar4 == 0) {
        return -0x7ffffffffffffff7;
    }
    *(arg4 + 4) = uStack_48._2_2_;
    *(arg4 + 6) = uStack_44;
    uVar10 = 1;
    arg2_00 = *(iVar5 + 0x20) + 2;
    uVar6 = uStack_48._1_1_;
    if (1 < uStack_48._1_1_) {
        do {
            if (auStackX_20 != arg2_00) {
                section..text(auStackX_20,arg2_00,2);
                uVar6 = uStack_48._1_1_;
            }
            uVar10 = uVar10 + 1;
            arg2_00 = arg2_00 + auStackX_20[0] + 2;
        } while (uVar10 < uVar6);
    }
    uVar6 = *puVar3;
    puVar3 = puVar3 + 6;
    arg3_00 = arg2_00;
    if (uVar6 == 0x10 || uVar6 == 0x11) {
        fcn.0001c1a4(arg4,puVar3,arg3_00);
    }
    else if (uVar6 == 0x12 || uVar6 == 0x13) {
        fcn.0001c388(arg4,puVar3,arg3_00);
    }
    else {
        fcn.0001c568(arg4,puVar3,arg3_00);
    }
    return 0;
}


/* fcn.0001d008 @ 0x1d008 */

int64_t fcn.0001d008(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    uint32_t arg3_00;
    uint32_t uVar2;
    uint32_t *arg1_00;
    int64_t iVar3;
    uint32_t *puVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    uint64_t uVar14;
    int16_t in_stack_00000028;
    unkbyte6 in_stack_0000002a;
    int16_t in_stack_00000030;
    unkbyte6 in_stack_00000032;
    uint64_t uStack_50;
    int64_t iStack_48;
    
    uVar7 = 0;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (arg3 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (arg4 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (((arg2 & 1U) != 0) && (*arg4 == 0)) {
        return -0x7ffffffffffffffe;
    }
    uVar2 = arg2 & 0x30;
    if (uVar2 == 0x30) {
        return -0x7ffffffffffffffe;
    }
    uStack_50 = 0;
    if ((uVar2 == 0x10) || ((uVar2 != 0x20 && ((*arg3 & 1) != 0)))) {
        if (*arg4 == 0) {
            return -0x7ffffffffffffffe;
        }
        if (arg2 < '\0') {
            return -0x7ffffffffffffffe;
        }
    }
    puVar1 = *arg4;
    iStack_48 = arg1 + -0x48;
    if (puVar1 == NULL) {
        if (0xffff - *(arg3 + 4) < CONCAT62(in_stack_0000002a,in_stack_00000028)) {
            return -0x7ffffffffffffffe;
        }
        if (0xffff - *(arg3 + 6) < CONCAT62(in_stack_00000032,in_stack_00000030)) {
            return -0x7ffffffffffffffe;
        }
        uVar6 = *(arg3 + 4) + in_stack_00000028;
        uVar12 = *(arg3 + 6) + in_stack_00000030;
        uVar14 = uVar6 * uVar12;
        puVar4 = fcn.000260fc(4,uVar14 * 4);
        if (puVar4 == NULL) {
            return -0x7ffffffffffffff7;
        }
        arg1_00 = fcn.000260fc(4,0x10);
        if (arg1_00 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
            arg1_00 = puVar4;
        }
        else {
            *arg1_00 = uVar6;
            *(arg1_00 + 2) = uVar12;
            *(arg1_00 + 2) = puVar4;
            if (iStack_48 == 0) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = fcn.00019940(iStack_48,&uStack_50,0);
            }
            if (-1 < iVar3) {
                if (uVar14 != 0) {
                    if (3 < uVar14) {
                        puVar8 = uStack_50 + 4;
                        if ((puVar8 < puVar4) || (puVar4 + (uVar14 - 1) < puVar8)) {
                            uVar10 = uVar14 & 0xfffffffffffffffc;
                            do {
                                uVar7 = uVar7 + 4;
                            } while (uVar7 < uVar10);
                            uVar2 = *puVar8;
                            puVar8 = puVar4;
                            for (; uVar10 != 0; uVar10 = uVar10 - 1) {
                                *puVar8 = uVar2;
                                puVar8 = puVar8 + 1;
                            }
                        }
                    }
                    for (; uVar7 < uVar14; uVar7 = uVar7 + 1) {
                        puVar4[uVar7] = *(uStack_50 + 4);
                    }
                }
                (**(*0x27020 + 0x48))(uStack_50);
                *arg4 = arg1_00;
                iVar3 = fcn.0001c6bc(*(arg3 + 8),CONCAT62(in_stack_0000002a,in_stack_00000028),
                                     CONCAT62(in_stack_00000032,in_stack_00000030),*(arg3 + 4));
                return iVar3;
            }
            (**(*0x27020 + 0x48))(puVar4);
        }
    }
    else {
        uVar6 = *puVar1;
        if (uVar6 <= CONCAT62(in_stack_0000002a,in_stack_00000028)) {
            return -0x7ffffffffffffffe;
        }
        uVar12 = puVar1[1];
        if (uVar12 <= CONCAT62(in_stack_00000032,in_stack_00000030)) {
            return -0x7ffffffffffffffe;
        }
        uVar13 = *(arg3 + 4);
        uVar5 = *(arg3 + 6);
        uVar2 = CONCAT62(in_stack_0000002a,in_stack_00000028);
        if (uVar6 - (uVar2 & 0xffff) < uVar13) {
            uVar13 = uVar6 - in_stack_00000028;
        }
        uVar14 = uVar13;
        arg3_00 = CONCAT62(in_stack_00000032,in_stack_00000030);
        if (uVar12 - (arg3_00 & 0xffff) < uVar5) {
            uVar5 = uVar12 - in_stack_00000030;
        }
        uStack_50 = uVar5;
        iStack_48 = uVar14 * uStack_50 * 4;
        arg1_00 = fcn.000260fc(4,iStack_48);
        if (arg1_00 == NULL) {
            return -0x7ffffffffffffff7;
        }
        if ((uVar13 == *(arg3 + 4)) && (uVar5 == *(arg3 + 6))) {
            if ((iStack_48 != 0) && (arg1_00 != *(arg3 + 8))) {
                section..text(arg1_00,*(arg3 + 8),iStack_48);
            }
        }
        else if (uStack_50 != 0) {
            uVar10 = uVar7;
            do {
                iVar3 = *(arg3 + 4) * uVar7;
                if (uVar14 != 0) {
                    iVar9 = iVar3 * 4;
                    uVar11 = uVar14;
                    do {
                        *(arg1_00 + iVar9 + (uVar10 - iVar3) * 4) = *(iVar9 + *(arg3 + 8));
                        iVar9 = iVar9 + 4;
                        uVar11 = uVar11 - 1;
                    } while (uVar11 != 0);
                }
                uVar7 = uVar7 + 1;
                uVar10 = uVar10 + uVar14;
            } while (uVar7 < uStack_50);
        }
        if ((arg2 & 0x80U) == 0) {
            iVar3 = fcn.0001c6bc(arg1_00,uVar2,arg3_00,uVar14);
        }
        else {
            iVar3 = (**(*(*arg4 + 8) + 0x10))(*(*arg4 + 8),arg1_00,2,0,0);
        }
    }
    (**(*0x27020 + 0x48))(arg1_00);
    return iVar3;
}


/* fcn.0001bfa0 @ 0x1bfa0 */

uint8_t * fcn.0001bfa0(uint32_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint in_register_0000000c;
    uint8_t *puVar3;
    uint64_t uVar4;
    uint in_register_00000014;
    uint8_t *puVar5;
    uint16_t uVar6;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = *puVar3;
    uVar6 = 1;
    puVar5 = puVar3;
    do {
        if (uVar1 == 0) {
            if (*CONCAT44(in_register_00000014,arg2) == 0) {
                *CONCAT44(in_register_00000014,arg2) = uVar6;
            }
            else {
code_r0x0001c0f4:
                puVar5 = NULL;
            }
code_r0x0001c0f6:
            return puVar5;
        }
        if (*CONCAT44(in_register_00000014,arg2) == 0) {
code_r0x0001bfed:
            uVar1 = *puVar5;
            if (uVar1 < 0x21) {
                if (uVar1 == 0x20) {
                    uVar6 = uVar6 + 1;
                    goto code_r0x0001c0d6;
                }
                if (uVar1 < 0x18) {
                    if (0x15 < uVar1) {
                        uVar4 = *(puVar5 + 3) * *(puVar5 + 1) * 3 & 0xffffffff;
                        goto code_r0x0001c073;
                    }
                    if (uVar1 < 0x10) goto code_r0x0001c0a8;
                    if (uVar1 < 0x12) {
                        uVar4 = *(puVar5 + 2) + 7 >> 3;
code_r0x0001c04c:
                        uVar2 = *(puVar5 + 4);
                    }
                    else {
                        if (uVar1 < 0x14) {
                            uVar4 = *(puVar5 + 2) + 1 >> 1;
                            goto code_r0x0001c04c;
                        }
                        if (0x15 < uVar1) goto code_r0x0001c0a8;
                        uVar4 = *(puVar5 + 4);
                        uVar2 = *(puVar5 + 2);
                    }
                    uVar4 = uVar4 * uVar2 + 6;
                }
                else {
                    if ((uVar1 != 0x18) && (uVar1 != 0x19)) {
code_r0x0001c0a8:
                        uVar4 = 0;
                        goto code_r0x0001c0db;
                    }
                    uVar4 = *(puVar5 + 1);
code_r0x0001c073:
                    uVar4 = uVar4 + 5;
                }
                uVar6 = uVar6 + 1;
            }
            else if (uVar1 == 0x21) {
                uVar6 = uVar6 + *(puVar5 + 1);
code_r0x0001c0d6:
                uVar4 = 3;
            }
            else if (uVar1 == 0x22) {
                uVar4 = 2;
                uVar6 = uVar6 + puVar5[1];
            }
            else if (uVar1 == 0x30) {
                uVar4 = puVar5[2];
            }
            else if (uVar1 == 0x31) {
                uVar4 = *(puVar5 + 2);
            }
            else {
                if (uVar1 != 0x32) goto code_r0x0001c0a8;
                uVar4 = *(puVar5 + 2);
            }
code_r0x0001c0db:
            puVar5 = puVar5 + uVar4;
        }
        else {
            if (*CONCAT44(in_register_00000014,arg2) != uVar6) {
                if (uVar6 <= *CONCAT44(in_register_00000014,arg2)) goto code_r0x0001bfed;
                goto code_r0x0001c0f4;
            }
            if (*puVar5 != 0x20) goto code_r0x0001c0f6;
            uVar6 = 1;
            *CONCAT44(in_register_00000014,arg2) = *(puVar5 + 1);
            puVar5 = puVar3;
        }
        uVar1 = *puVar5;
    } while( true );
}


/* fcn.0001bd7c @ 0x1bd7c */

//WARNING: Variable defined which should be unmapped: var_10h

ulong * fcn.0001bd7c(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint16_t auStackX_8 [4];
    uint64_t uStackX_10;
    ulong *puStackX_18;
    int64_t iStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    int64_t aiStack_38 [2];
    int64_t var_10h;
    
    uVar4 = arg1 & 0xff;
    if (uVar4 == 0x18) {
        piVar6 = 0x26640;
    }
    else {
        if (uVar4 != 0x19) {
            return NULL;
        }
        piVar6 = 0x26550;
    }
    iVar1 = (**(*0x27020 + 0x138))(2,0x26630,0,&uStackX_10,&iStackX_20);
    uVar5 = 0;
    if ((-1 < iVar1) && (uStackX_10 != 0)) {
        do {
            iVar1 = (**(*0x27020 + 0x98))(*(iStackX_20 + uVar5 * 8),0x26630,&puStackX_18);
            if ((-1 < iVar1) &&
               ((iVar1 = (**puStackX_18)(puStackX_18,aiStack_38,auStackX_8), -1 < iVar1 &&
                (uVar3 = 0, auStackX_8[0] != 0)))) {
                do {
                    piVar2 = uVar3 * 0x10 + aiStack_38[0];
                    if ((*piVar6 == *piVar2) && (piVar6[1] == piVar2[1])) {
                        return puStackX_18;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < auStackX_8[0]);
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uStackX_10);
    }
    return NULL;
}


/* fcn.0001c150 @ 0x1c150 */

void fcn.0001c150(int64_t arg1,int64_t arg2,int64_t arg3)

{
    if (arg3 != 0) {
        do {
            if (arg1 != arg2) {
                section..text(arg1,arg2,3);
            }
            arg2 = arg2 + 3;
            arg1 = arg1 + 4;
            arg3 = arg3 + -1;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.0001c0fc @ 0x1c0fc */

void fcn.0001c0fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    if (arg3 != 0) {
        do {
            if (arg1 != arg2) {
                section..text(arg1,arg2,3);
            }
            arg2 = arg2 + 4;
            arg1 = arg1 + 3;
            arg3 = arg3 + -1;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.0001c568 @ 0x1c568 */

void fcn.0001c568(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint32_t *arg1_00;
    uint16_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint in_R8;
    uint32_t *arg2_00;
    uint64_t uVar7;
    uint16_t uVar8;
    int64_t iStackX_8;
    uint auStack_418 [256];
    
    arg2_00 = CONCAT44(in_R8,arg3);
    iVar1 = *(arg1 + 8);
    iStackX_8 = 0;
    iVar4 = 0;
    if (&iStackX_8 != arg2_00) {
        section..text(&iStackX_8,arg2_00,2);
        iVar4 = iStackX_8;
    }
    iStackX_8 = iVar4 + 2;
    arg1_00 = fcn.000260fc(4,iStackX_8);
    if (arg1_00 != NULL) {
        if ((iStackX_8 != 0) && (arg1_00 != arg2_00)) {
            section..text(arg1_00,arg2_00,iStackX_8);
        }
        uVar5 = *arg1_00 / 3;
        fcn.000102c0(auStack_418,0x400);
        uVar7 = 0x100;
        if (uVar5 < 0x100) {
            uVar7 = uVar5;
        }
        fcn.0001c150(auStack_418,arg1_00 + 2,uVar7);
        (**(*0x27020 + 0x48))(arg1_00);
        if (*(arg1 + 6) != 0) {
            uVar2 = *(arg1 + 4);
            uVar6 = 0;
            do {
                uVar7 = uVar2;
                uVar8 = 0;
                if (uVar2 != 0) {
                    do {
                        uVar3 = uVar8;
                        uVar8 = uVar8 + 1;
                        iVar4 = uVar3 + uVar7 * uVar6;
                        *(iVar1 + iVar4 * 4) = auStack_418[*(iVar4 + arg2)];
                        uVar2 = *(arg1 + 4);
                    } while (uVar8 < uVar2);
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(arg1 + 6));
        }
    }
    return;
}


/* fcn.0001c388 @ 0x1c388 */

void fcn.0001c388(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint32_t *arg1_00;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint in_R8;
    uint32_t *arg2_00;
    uint64_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    uint16_t uVar9;
    int64_t iStackX_8;
    uint auStack_68 [16];
    
    arg2_00 = CONCAT44(in_R8,arg3);
    iVar2 = *(arg1 + 8);
    iStackX_8 = 0;
    iVar8 = 0;
    if (&iStackX_8 != arg2_00) {
        section..text(&iStackX_8,arg2_00,2);
        iVar8 = iStackX_8;
    }
    iStackX_8 = iVar8 + 2;
    arg1_00 = fcn.000260fc(4,iStackX_8);
    if (arg1_00 != NULL) {
        if ((iStackX_8 != 0) && (arg1_00 != arg2_00)) {
            section..text(arg1_00,arg2_00,iStackX_8);
        }
        uVar5 = *arg1_00 / 3;
        fcn.000102c0(auStack_68,0x40);
        uVar6 = 0x10;
        if (uVar5 < 0x10) {
            uVar6 = uVar5;
        }
        fcn.0001c150(auStack_68,arg1_00 + 2,uVar6);
        (**(*0x27020 + 0x48))(arg1_00);
        uVar9 = 0;
        uVar7 = uVar9;
        if (*(arg1 + 6) != 0) {
            do {
                uVar6 = *(arg1 + 4);
                iVar8 = (uVar6 + 1 >> 1) * uVar7;
                uVar4 = uVar9;
                uVar3 = uVar9;
                if ((*(arg1 + 4) & 0xfffe) != 0) {
                    do {
                        uVar1 = *(uVar3 + iVar8 + arg2);
                        uVar4 = uVar3 + 1;
                        *(iVar2 + (uVar6 * uVar7 + uVar3 + uVar3) * 4) = auStack_68[uVar1 >> 4];
                        *(iVar2 + (*(arg1 + 4) * uVar7 + 1 + uVar3 + uVar3) * 4) = auStack_68[uVar1 & 0xf];
                        uVar6 = *(arg1 + 4);
                        uVar3 = uVar4;
                    } while (uVar4 < *(arg1 + 4) >> 1);
                }
                if ((*(arg1 + 4) & 1) != 0) {
                    *(iVar2 + (uVar7 * *(arg1 + 4) + uVar4 * 2) * 4) = auStack_68[*(uVar4 + iVar8 + arg2) >> 4];
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(arg1 + 6));
        }
    }
    return;
}


/* fcn.0001c1a4 @ 0x1c1a4 */

void fcn.0001c1a4(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    uint32_t *arg1_00;
    uint16_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint in_R8;
    uint32_t *arg2_00;
    uint16_t uVar9;
    int64_t iVar10;
    uint32_t uVar11;
    uint16_t uVar12;
    uint uStackX_8;
    uint uStackX_c;
    int64_t aiStackX_18 [2];
    int64_t var_40h;
    int64_t var_50h;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    iVar3 = *(arg1 + 8);
    aiStackX_18[0] = 0;
    iVar10 = 0;
    if (aiStackX_18 != arg2_00) {
        section..text(aiStackX_18,arg2_00,2);
        iVar10 = aiStackX_18[0];
    }
    aiStackX_18[0] = iVar10 + 2;
    arg1_00 = fcn.000260fc(4,aiStackX_18[0]);
    if (arg1_00 != NULL) {
        if ((aiStackX_18[0] != 0) && (arg1_00 != arg2_00)) {
            section..text(arg1_00,arg2_00,aiStackX_18[0]);
        }
        fcn.000102c0(&uStackX_8,8);
        fcn.0001c150(&uStackX_8,arg1_00 + 2,1);
        fcn.0001c150(&uStackX_c,arg1_00 + 5,1);
        (**(*0x27020 + 0x48))(arg1_00);
        uVar12 = 0;
        uVar9 = uVar12;
        if (*(arg1 + 6) != 0) {
            do {
                iVar10 = (*(arg1 + 4) + 7 >> 3) * uVar9;
                uVar6 = uVar12;
                if ((*(arg1 + 4) & 0xfff8) != 0) {
                    do {
                        uVar8 = 0;
                        uVar1 = *(uVar6 + iVar10 + arg2);
                        do {
                            iVar4 = *(arg1 + 4) * uVar9 - uVar8;
                            uVar5 = uStackX_c;
                            if ((uVar1 >> (uVar8 & 0x1f) & 1) == 0) {
                                uVar5 = uStackX_8;
                            }
                            uVar7 = uVar8 + 1;
                            uVar8 = uVar7;
                            *(iVar3 + (iVar4 + 7 + uVar6 * 8) * 4) = uVar5;
                        } while (uVar7 < 8);
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(arg1 + 4) >> 3);
                }
                uVar2 = *(arg1 + 4);
                uVar8 = uVar2;
                if ((uVar2 & 7) != 0) {
                    uVar11 = 0;
                    if ((uVar2 & 7) != 0) {
                        uVar1 = *(uVar6 + iVar10 + arg2);
                        do {
                            uVar5 = uStackX_c;
                            if ((uVar1 >> (7 - uVar11 & 0x1f) & 1) == 0) {
                                uVar5 = uStackX_8;
                            }
                            *(iVar3 + (uVar9 * uVar8 + uVar6 * 8 + uVar11) * 4) = uVar5;
                            uVar7 = uVar11 + 1;
                            uVar11 = uVar7;
                            uVar8 = *(arg1 + 4);
                        } while (uVar7 < (uVar8 & 7));
                    }
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < *(arg1 + 6));
        }
    }
    return;
}


/* fcn.0001c6bc @ 0x1c6bc */

ulong fcn.0001c6bc(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint in_register_00000014;
    int64_t iVar6;
    uint64_t uVar7;
    uint in_R8;
    uint *puVar8;
    uint64_t uVar9;
    uint auStackX_8 [2];
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint64_t in_stack_00000028;
    char in_stack_00000030;
    ulong *in_stack_00000038;
    uchar auStack_48 [16];
    
    iVar6 = CONCAT44(in_R8,arg3);
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    if ((((arg1 == 0) || (in_stack_00000038 == NULL)) || (puVar2 = *in_stack_00000038, puVar2 == NULL)) ||
       ((*puVar2 < iStackX_10 + arg4 || (puVar2[1] < iVar6 + in_stack_00000028)))) {
        uVar5 = 0x8000000000000002;
    }
    else {
        iStackX_18 = iVar6;
        fcn.000102c0(auStack_48,4);
        uVar9 = 0;
        if (in_stack_00000028 != 0) {
            do {
                iVar3 = iStackX_10;
                uVar1 = *puVar2;
                uVar7 = 0;
                if (arg4 != 0) {
                    puVar8 = arg1;
                    do {
                        auStackX_8[0] = *puVar8;
                        if ((in_stack_00000030 == '\0') ||
                           (iVar4 = fcn.000102e0(auStackX_8,auStack_48,3), iVar4 != 0)) {
                            *(*(puVar2 + 4) + (uVar7 + (uVar9 + iVar6) * uVar1 + iVar3) * 4) = auStackX_8[0];
                        }
                        uVar7 = uVar7 + 1;
                        puVar8 = puVar8 + 1;
                    } while (uVar7 < arg4);
                }
                uVar9 = uVar9 + 1;
                arg1 = arg1 + arg4 * 4;
                iVar6 = iStackX_18;
            } while (uVar9 < in_stack_00000028);
        }
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00024e58 @ 0x24e58 */

ulong fcn.00024e58(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.000249f8(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00024eda;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x00024eda:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.0001d9e0 @ 0x1d9e0 */

uchar fcn.0001d9e0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    char16_t *pcVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    uint in_register_0000000c;
    int16_t *arg1_00;
    uchar uVar6;
    char16_t *pcVar7;
    int64_t iVar8;
    uint32_t arg2_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = 0;
    iVar1 = *arg1_00;
    *arg2 = 0;
    uVar6 = 1;
    if (iVar1 == 0x26) {
        arg1_00 = arg1_00 + 1;
    }
    pcVar7 = L"ReadOnly";
    pcVar2 = L"ReadOnly";
    iVar8 = iVar3;
    do {
        pcVar2 = pcVar2 + 1;
        iVar8 = iVar8 + 1;
    } while (*pcVar2 != L'\0');
    iVar8 = fcn.00024f80(arg1_00,0x26ae0,iVar8);
    if (iVar8 == 0) {
        *arg2 = 1;
        do {
            pcVar7 = pcVar7 + 1;
            iVar3 = iVar3 + 1;
        } while (*pcVar7 != L'\0');
    }
    else {
        pcVar7 = L"ReadWrite";
        pcVar2 = L"ReadWrite";
        iVar8 = iVar3;
        do {
            pcVar2 = pcVar2 + 1;
            iVar8 = iVar8 + 1;
        } while (*pcVar2 != L'\0');
        iVar8 = fcn.00024f80(arg1_00,0x26af8,iVar8);
        if (iVar8 == 0) {
            *arg2 = 2;
            do {
                pcVar7 = pcVar7 + 1;
                iVar3 = iVar3 + 1;
            } while (*pcVar7 != L'\0');
        }
        else {
            pcVar7 = L"Buffer";
            pcVar2 = L"Buffer";
            iVar8 = iVar3;
            do {
                pcVar2 = pcVar2 + 1;
                iVar8 = iVar8 + 1;
            } while (*pcVar2 != L'\0');
            iVar8 = fcn.00024f80(arg1_00,0x26b10,iVar8);
            if (iVar8 != 0) {
                pcVar7 = L"Numeric";
                pcVar2 = L"Numeric";
                iVar8 = iVar3;
                do {
                    pcVar2 = pcVar2 + 1;
                    iVar8 = iVar8 + 1;
                } while (*pcVar2 != L'\0');
                iVar8 = fcn.00024f80(arg1_00,0x26b20,iVar8);
                if (iVar8 == 0) {
                    do {
                        pcVar7 = pcVar7 + 1;
                        iVar3 = iVar3 + 1;
                    } while (*pcVar7 != L'\0');
                    arg1_00 = arg1_00 + iVar3;
                    if (*arg1_00 == 0x3a) {
                        iVar1 = arg1_00[1];
                        if (iVar1 == 0x31) {
                            *arg2 = 0x30;
                        }
                        else if (iVar1 == 0x32) {
                            *arg2 = 0x40;
                        }
                        else if (iVar1 == 0x34) {
                            *arg2 = 0x50;
                        }
                        else if (iVar1 == 0x38) {
                            *arg2 = 0x60;
                        }
                        arg1_00 = arg1_00 + 2;
                    }
                    else {
                        *arg2 = 0x20;
                    }
                }
                else {
                    arg2_00 = 0x26b30;
                    pcVar2 = L"&PATH";
                    iVar8 = iVar3;
                    do {
                        pcVar2 = pcVar2 + 1;
                        iVar8 = iVar8 + 1;
                    } while (*pcVar2 != L'\0');
                    iVar8 = fcn.00024f80(arg1_00,0x26b30,iVar8);
                    if (iVar8 != 0) {
                        pcVar2 = L"&KEYWORD";
                        iVar8 = iVar3;
                        do {
                            pcVar2 = pcVar2 + 1;
                            iVar8 = iVar8 + 1;
                        } while (*pcVar2 != L'\0');
                        iVar8 = fcn.00024f80(arg1_00,0x26b40,iVar8);
                        if (iVar8 != 0) {
                            piVar4 = fcn.00024fbc(arg1_00,arg2_00);
                            piVar5 = fcn.00024fbc(arg1_00,0x26b40);
                            if (piVar4 == NULL) {
                                if (piVar5 == NULL) {
                                    iVar1 = *arg1_00;
                                    piVar4 = arg1_00;
                                    while (iVar1 != 0) {
                                        piVar4 = piVar4 + 1;
                                        iVar3 = iVar3 + 1;
                                        iVar1 = *piVar4;
                                    }
                                    arg1_00 = arg1_00 + iVar3;
                                }
                                else {
                                    arg1_00 = piVar5;
                                }
                            }
                            else if ((piVar5 != NULL) && (arg1_00 = piVar5, piVar4 < piVar5)) {
                                arg1_00 = piVar4;
                            }
                        }
                    }
                    uVar6 = 0;
                }
                goto code_r0x0001dc05;
            }
            *arg2 = 0x10;
            do {
                pcVar7 = pcVar7 + 1;
                iVar3 = iVar3 + 1;
            } while (*pcVar7 != L'\0');
        }
    }
    arg1_00 = arg1_00 + iVar3;
code_r0x0001dc05:
    *arg3 = arg1_00;
    return uVar6;
}


/* fcn.0001dd30 @ 0x1dd30 */

ulong fcn.0001dd30(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint32_t *puVar2;
    ulong uVar3;
    uint in_register_0000000c;
    uint32_t *arg2_00;
    int64_t arg1_00;
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    arg1_00 = 2;
    iVar1 = *arg2_00;
    puVar2 = arg2_00;
    while (iVar1 != 0) {
        arg1_00 = arg1_00 + 2;
        puVar2 = puVar2 + 2;
        iVar1 = *puVar2;
    }
    puVar2 = fcn.000260c8(arg1_00);
    *arg3 = puVar2;
    if (puVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        if ((arg1_00 != 0) && (puVar2 != arg2_00)) {
            section..text(puVar2,arg2_00,arg1_00);
        }
        *arg2 = arg1_00;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00025114 @ 0x25114 */

int64_t fcn.00025114(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.0001ddc4 @ 0x1ddc4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_2ch
//WARNING: Variable defined which should be unmapped: var_30h

int16_t * fcn.0001ddc4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int16_t iVar6;
    int16_t *piVar7;
    uint8_t *puVar8;
    int16_t *piVar9;
    int16_t *piVar10;
    uint8_t *puVar11;
    uint64_t uVar12;
    uint8_t *puVar13;
    int16_t *piVar14;
    int16_t iVar15;
    uint64_t uVar16;
    uint32_t auStackX_20 [2];
    int64_t var_58h;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint uStack_5c;
    int16_t *piStack_58;
    int64_t iStack_50;
    uint8_t *puStack_48;
    uint32_t var_30h;
    int64_t var_2ch;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    puVar13 = *(arg1 + 0x10);
    piVar14 = NULL;
    piStack_58 = NULL;
    iVar15 = 1;
    iVar6 = *arg2;
    piVar3 = arg2;
    piVar9 = piVar14;
    while (iVar6 != 0) {
        piVar3 = piVar3 + 1;
        piVar9 = piVar9 + 1;
        iVar6 = *piVar3;
    }
    puVar2 = fcn.000260c8(piVar9 + 1);
    if (puVar2 == NULL) {
        return 0x8000000000000009;
    }
    puStack_48 = puVar2;
    fcn.00024e58(arg2,puVar2,piVar9 + 1);
    piVar3 = piVar14;
    piVar9 = piVar14;
code_r0x0001de56:
    iVar4 = 0;
    uVar1 = *puVar13;
    if (uVar1 == 0) {
        piVar3 = 0x800000000000000e;
code_r0x0001e3f5:
        (**(*0x27020 + 0x48))(puStack_48);
        if (piVar9 != NULL) {
            (**(*0x27020 + 0x48))(piVar9);
        }
        return piVar3;
    }
    if (uVar1 < 0x18) {
        if (uVar1 == 0x17) {
            piVar14 = piVar14 + 2;
            puVar2 = puVar13 + 4;
            if (&uStack_68 != puVar13 + 2) {
                section..text(&uStack_68,puVar13 + 2,2);
            }
            uVar12 = 0;
            if (uStack_68 != 0) {
                do {
                    piVar3 = fcn.0001dd30(puVar2,&iStack_50,&piStack_58);
                    if (piVar3 < 0) goto code_r0x0001e3e5;
                    piVar14 = piVar14 + iStack_50;
                    iVar6 = *arg2;
                    piVar7 = arg2;
                    piVar10 = piStack_58;
                    while ((iVar6 != 0 && (iVar6 == *piVar10))) {
                        piVar7 = piVar7 + 1;
                        piVar10 = piVar10 + 1;
                        iVar6 = *piVar7;
                    }
                    piVar9 = piStack_58;
                    if (*piVar7 == *piVar10) goto code_r0x0001e3de;
                    puVar2 = puVar2 + iStack_50;
                    iVar15 = iVar15 + 1;
                    uVar12 = uVar12 + 1;
                } while (uVar12 < uStack_68);
            }
code_r0x0001df56:
            puVar2 = puStack_48;
        }
        else if (uVar1 == 0x10) {
            puVar13 = puVar13 + 1;
            uVar1 = *puVar13;
            while (uVar1 != 0) {
                iVar4 = iVar4 + 1;
                uVar1 = puVar13[iVar4];
            }
            iVar4 = iVar4 + 2;
            uVar1 = *puVar2;
            puVar8 = puVar2;
            while ((uVar1 != 0 && (uVar1 == *puVar13))) {
                puVar8 = puVar8 + 1;
                puVar13 = puVar13 + 1;
                uVar1 = *puVar8;
            }
            if (*puVar8 == *puVar13) goto code_r0x0001e3de;
code_r0x0001e242:
            piVar14 = piVar14 + iVar4;
            iVar15 = iVar15 + 1;
        }
        else {
            if (uVar1 == 0x11) {
                uVar1 = *puVar2;
                puVar8 = puVar13 + 2;
                puVar11 = puVar2;
                if (uVar1 != 0) {
                    do {
                        if (uVar1 != *puVar8) break;
                        puVar2 = puVar2 + 1;
                        puVar8 = puVar8 + 1;
                        uVar1 = *puVar2;
                    } while (uVar1 != 0);
                    puVar11 = puStack_48;
                }
                if (*puVar2 != *puVar8) {
                    uVar1 = puVar13[2];
                    while (uVar1 != 0) {
                        uVar1 = puVar13[iVar4 + 3];
                        iVar4 = iVar4 + 1;
                    }
                    iVar4 = iVar4 + 3;
                    puVar2 = puVar11;
                    goto code_r0x0001e242;
                }
code_r0x0001e3de:
                *arg3 = iVar15;
                goto code_r0x0001e3f5;
            }
            if (uVar1 == 0x12) {
                if (&uStack_68 != puVar13 + 1) {
                    section..text(&uStack_68,puVar13 + 1,2);
                }
                uVar16 = 0;
                puVar13 = puVar13 + 3;
                piVar14 = piVar14 + 3;
                uVar12 = uVar16;
                if (uStack_68 != 0) {
                    do {
                        uVar1 = *puVar13;
                        uVar5 = uVar16;
                        while (uVar1 != 0) {
                            uVar5 = uVar5 + 1;
                            uVar1 = puVar13[uVar5];
                        }
                        piVar14 = piVar14 + uVar5 + 1;
                        puVar8 = puVar13;
                        puVar11 = puVar2;
                        if (*puVar2 != 0) {
                            uVar1 = *puVar2;
                            do {
                                if (uVar1 != *puVar8) break;
                                puVar11 = puVar11 + 1;
                                puVar8 = puVar8 + 1;
                                uVar1 = *puVar11;
                            } while (uVar1 != 0);
                        }
                        if (*puVar11 == *puVar8) goto code_r0x0001e3de;
                        uVar1 = *puVar13;
                        uVar5 = uVar16;
                        while (uVar1 != 0) {
                            uVar5 = uVar5 + 1;
                            uVar1 = puVar13[uVar5];
                        }
                        iVar15 = iVar15 + 1;
                        puVar13 = puVar13 + uVar5 + 1;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < uStack_68);
                }
            }
            else {
                if (uVar1 != 0x13) {
                    if (uVar1 == 0x14) {
                        piVar3 = fcn.0001dd30(puVar13 + 1,&iStack_50,&piStack_58);
                        if (-1 < piVar3) {
                            iVar6 = *arg2;
                            piVar7 = piStack_58;
                            piVar10 = arg2;
                            while ((iVar6 != 0 && (iVar6 == *piVar7))) {
                                piVar10 = piVar10 + 1;
                                piVar7 = piVar7 + 1;
                                iVar6 = *piVar10;
                            }
                            piVar9 = piStack_58;
                            if (*piVar10 != *piVar7) {
                                iVar4 = iStack_50 + 1;
code_r0x0001e046:
                                piVar14 = piVar14 + iVar4;
                                piVar9 = piStack_58;
                                goto code_r0x0001e049;
                            }
                            goto code_r0x0001e3de;
                        }
code_r0x0001e3e5:
                        piVar9 = piStack_58;
                        goto code_r0x0001e3f5;
                    }
                    if (uVar1 != 0x15) {
                        if (uVar1 == 0x16) {
                            piVar14 = piVar14 + 3;
                            puVar2 = puVar13 + 3;
                            if (&uStack_68 != puVar13 + 1) {
                                section..text(&uStack_68,puVar13 + 1,2);
                            }
                            uVar12 = 0;
                            if (uStack_68 != 0) {
                                do {
                                    piVar3 = fcn.0001dd30(puVar2,&iStack_50,&piStack_58);
                                    if (piVar3 < 0) goto code_r0x0001e3e5;
                                    piVar14 = piVar14 + iStack_50;
                                    iVar6 = *arg2;
                                    piVar7 = piStack_58;
                                    piVar10 = arg2;
                                    while ((iVar6 != 0 && (iVar6 == *piVar7))) {
                                        piVar10 = piVar10 + 1;
                                        piVar7 = piVar7 + 1;
                                        iVar6 = *piVar10;
                                    }
                                    piVar9 = piStack_58;
                                    if (*piVar10 == *piVar7) goto code_r0x0001e3de;
                                    puVar2 = puVar2 + iStack_50;
                                    iVar15 = iVar15 + 1;
                                    uVar12 = uVar12 + 1;
                                } while (uVar12 < uStack_68);
                            }
                            goto code_r0x0001df56;
                        }
                        goto code_r0x0001df5a;
                    }
                    piVar3 = fcn.0001dd30(puVar13 + 2,&iStack_50,&piStack_58);
                    if (piVar3 < 0) goto code_r0x0001e3e5;
                    iVar6 = *arg2;
                    piVar7 = arg2;
                    piVar10 = piStack_58;
                    while ((iVar6 != 0 && (iVar6 == *piVar10))) {
                        piVar7 = piVar7 + 1;
                        piVar10 = piVar10 + 1;
                        iVar6 = *piVar7;
                    }
                    piVar9 = piStack_58;
                    if (*piVar7 != *piVar10) {
                        iVar4 = iStack_50 + 2;
                        goto code_r0x0001e046;
                    }
                    goto code_r0x0001e3de;
                }
                if (&uStack_68 != puVar13 + 2) {
                    section..text(&uStack_68,puVar13 + 2,2);
                }
                uVar16 = 0;
                puVar13 = puVar13 + 4;
                piVar14 = piVar14 + 2;
                uVar12 = uVar16;
                if (uStack_68 != 0) {
                    do {
                        uVar1 = *puVar13;
                        uVar5 = uVar16;
                        while (uVar1 != 0) {
                            uVar5 = uVar5 + 1;
                            uVar1 = puVar13[uVar5];
                        }
                        piVar14 = piVar14 + uVar5 + 1;
                        puVar8 = puVar13;
                        puVar11 = puVar2;
                        if (*puVar2 != 0) {
                            uVar1 = *puVar2;
                            do {
                                if (uVar1 != *puVar8) break;
                                puVar11 = puVar11 + 1;
                                puVar8 = puVar8 + 1;
                                uVar1 = *puVar11;
                            } while (uVar1 != 0);
                        }
                        if (*puVar11 == *puVar8) goto code_r0x0001e3de;
                        uVar1 = *puVar13;
                        uVar5 = uVar16;
                        while (uVar1 != 0) {
                            uVar5 = uVar5 + 1;
                            uVar1 = puVar13[uVar5];
                        }
                        iVar15 = iVar15 + 1;
                        puVar13 = puVar13 + uVar5 + 1;
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < uStack_68);
                }
            }
        }
    }
    else if (uVar1 == 0x20) {
        piVar14 = piVar14 + 3;
code_r0x0001e049:
        iVar15 = iVar15 + 1;
    }
    else if (uVar1 == 0x21) {
        if (&uStack_64 != puVar13 + 1) {
            section..text(&uStack_64,puVar13 + 1,2);
        }
        iVar15 = iVar15 + uStack_64;
        piVar14 = piVar14 + 3;
    }
    else if (uVar1 == 0x22) {
        uStack_64._0_2_ = puVar13[1];
        iVar15 = iVar15 + uStack_64;
        piVar14 = piVar14 + 1;
    }
    else {
        if (uVar1 == 0x30) {
            if (auStackX_20 != puVar13 + 2) {
                section..text(auStackX_20,puVar13 + 2,1);
            }
            uVar12 = auStackX_20[0];
        }
        else if (uVar1 == 0x31) {
            if (&uStack_5c != puVar13) {
                section..text(&uStack_5c,puVar13,4);
            }
            uVar12 = uStack_5c._2_2_;
        }
        else {
            if (uVar1 != 0x32) goto code_r0x0001df5a;
            if (&uStack_60 != puVar13 + 2) {
                section..text(&uStack_60,puVar13 + 2,4);
            }
            uVar12 = uStack_60;
        }
        piVar14 = piVar14 + uVar12;
    }
code_r0x0001df5a:
    if (piVar9 != NULL) {
        (**(*0x27020 + 0x48))(piVar9);
        piVar9 = NULL;
        piStack_58 = NULL;
    }
    puVar13 = piVar14 + *(arg1 + 0x10);
    goto code_r0x0001de56;
}


/* fcn.0001eacc @ 0x1eacc */

uint8_t * fcn.0001eacc(int64_t arg1,uint32_t arg2)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    
    uVar3 = 0;
    uVar4 = *(arg1 + 8) & 0xffffff;
    if (uVar4 != 4) {
        do {
            puVar1 = uVar3 + *(arg1 + 0x10);
            if (((*puVar1 < 0x24) && ((0x81c0011e0U >> (*puVar1 & 0x3f) & 1) != 0)) && (*(puVar1 + 2) == arg2)) {
                return puVar1;
            }
            uVar2 = uVar3 + (puVar1[1] & 0x7f);
            uVar3 = uVar2;
        } while (uVar2 < uVar4 - 4);
    }
    return NULL;
}


/* fcn.0001eb24 @ 0x1eb24 */

char * fcn.0001eb24(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int16_t iVar2;
    char *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    uVar4 = *(arg1 + 8) & 0xffffff;
    uVar6 = 0;
    if (uVar4 != 4) {
        do {
            pcVar3 = uVar6 + *(arg1 + 0x10);
            if (*pcVar3 - 0x24U < 3) {
                cVar1 = *pcVar3;
                if (cVar1 == '$') {
                    iVar2 = *(pcVar3 + 0x12);
                }
                else {
                    if ((cVar1 != '%') && (cVar1 != '&')) goto code_r0x0001eb71;
                    iVar2 = *(pcVar3 + 2);
                }
                if (arg2 == iVar2) {
                    return pcVar3;
                }
            }
code_r0x0001eb71:
            uVar5 = uVar6 + (pcVar3[1] & 0x7f);
            uVar6 = uVar5;
        } while (uVar5 < uVar4 - 4);
    }
    return NULL;
}


/* fcn.0001f018 @ 0x1f018 */

int64_t fcn.0001f018(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg1_01;
    uint32_t arg3;
    int64_t in_R8;
    uchar auStackX_8 [16];
    int64_t aiStackX_18 [2];
    
    iVar4 = 0;
    aiStackX_18[0] = 0;
    fcn.00026334(arg1,aiStackX_18,in_R8);
    arg1_00 = fcn.0001188c(*(arg1 + 0x18));
    arg3 = 0x26916;
    if (aiStackX_18[0] != 0) {
        arg3 = aiStackX_18[0];
    }
    iVar3 = arg1_00;
    iVar2 = fcn.000263f0(arg1_00,0,arg3,arg1_00);
    if (iVar2 == 0) {
        iVar2 = 0;
        do {
            arg1_01 = iVar2 + 1;
            pcVar1 = iVar2 + 0x26b99;
            iVar2 = arg1_01;
        } while (*pcVar1 != '\0');
        iVar2 = fcn.00026148(iVar3,arg1_01,0x26b98);
    }
    aiStackX_18[1] = 0;
    iVar3 = (**0x26728)(0x26720,iVar2,*(arg1 + 0x18),arg2 & 0xffff,auStackX_8,aiStackX_18 + 1,0);
    if (iVar3 == -0x7ffffffffffffffb) {
        iVar4 = fcn.000260fc(4,aiStackX_18[1]);
        if (iVar4 != 0) {
            iVar3 = (**0x26728)(0x26720,iVar2,*(arg1 + 0x18),arg2 & 0xffff,iVar4,aiStackX_18 + 1,0);
            if (iVar3 < 0) {
                (**(*0x27020 + 0x48))(iVar4);
                iVar4 = 0;
            }
        }
    }
    if (arg1_00 != 0) {
        (**(*0x27020 + 0x48))(arg1_00);
    }
    if (iVar2 != 0) {
        (**(*0x27020 + 0x48))(iVar2);
    }
    if (aiStackX_18[0] != 0) {
        (**(*0x27020 + 0x48))(aiStackX_18[0]);
    }
    return iVar4;
}


/* fcn.0001eb88 @ 0x1eb88 */

uint16_t fcn.0001eb88(int64_t arg1)

{
    char cVar1;
    uint16_t uVar2;
    uint8_t uVar3;
    
    cVar1 = *arg1;
    if (cVar1 != '\x05') {
        if (cVar1 == '\x06') {
            return 1;
        }
        if (cVar1 != '\a') {
            if (cVar1 == '\b') {
                uVar2 = *(arg1 + 0xf);
            }
            else {
                if (cVar1 == '\x0f') {
                    return 0x16;
                }
                if (cVar1 == '\x1a') {
                    return 4;
                }
                if (cVar1 == '\x1b') {
                    return 3;
                }
                if (cVar1 == '\x1c') {
                    uVar2 = *(arg1 + 0xe);
                }
                else {
                    if (cVar1 != '#') {
                        return 0;
                    }
                    cVar1 = *((*(arg1 + 1) & 0x7f) + 5 + arg1);
                    if (cVar1 == '\0') {
                        return *(arg1 + 0xd);
                    }
                    if (cVar1 != '\x01') {
                        if (cVar1 == '\x02') {
                            return *(arg1 + 0xd) << 2;
                        }
                        if (cVar1 == '\x03') {
                            return *(arg1 + 0xd) << 3;
                        }
                        return 0;
                    }
                    uVar2 = *(arg1 + 0xd);
                }
            }
            return uVar2 * 2;
        }
    }
    uVar3 = *(arg1 + 0xd) & 3;
    if ((*(arg1 + 0xd) & 3) == 0) {
        return 1;
    }
    if (uVar3 == 1) {
        return 2;
    }
    if (uVar3 == 2) {
        return 4;
    }
    if (uVar3 == 3) {
        return 8;
    }
    return 0;
}


/* fcn.0001ef40 @ 0x1ef40 */

ulong fcn.0001ef40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    ulong noname_0;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    
    iVar5 = 0;
    iVar4 = 0;
    if (arg1 == 0) {
        iVar4 = 0x17;
    }
    else {
        iVar1 = *arg1;
        piVar2 = arg1;
        iVar3 = iVar5;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + 1;
            iVar4 = iVar3;
            iVar1 = *piVar2;
        }
        iVar4 = iVar4 + 1;
    }
    noname_0 = fcn.000260fc(4,iVar4 * 2);
    if (arg1 == 0) {
        fcn.00025148(noname_0,0x2e,0x26b68,arg2 & 0xffff);
    }
    else {
        iVar1 = *arg1;
        piVar2 = arg1;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar2;
        }
        fcn.00025148(noname_0,iVar5 * 2 + 2,0x26b5c,arg1);
    }
    return noname_0;
}


/* fcn.0001ec50 @ 0x1ec50 */

int16_t * fcn.0001ec50(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    char cVar1;
    uint16_t uVar2;
    int16_t iVar3;
    bool bVar4;
    uint16_t *puVar5;
    uint16_t *arg2_01;
    uint16_t *puVar6;
    int16_t *arg1_00;
    int64_t iVar7;
    int16_t *piVar8;
    uint64_t uVar9;
    uint16_t *puVar10;
    uint16_t *puVar11;
    char *arg1_01;
    int16_t *piVar12;
    char16_t *noname_2;
    ulong uVar13;
    uint64_t uVar14;
    int64_t iStackX_8;
    
    cVar1 = *arg1;
    puVar6 = NULL;
    if (cVar1 == '$') {
        puVar10 = arg1 + 2;
        arg1_01 = arg1 + 0x16;
code_r0x0001ecf0:
        if (arg1_01 != NULL) {
            cVar1 = *arg1_01;
            puVar11 = puVar6;
            while (cVar1 != '\0') {
                puVar11 = puVar11 + 1;
                cVar1 = *(puVar11 + arg1_01);
            }
            arg2_01 = fcn.000260fc(4,(puVar11 + 1) * 2);
            fcn.00024eec(arg1_01,arg2_01,puVar11 + 1);
            goto code_r0x0001ec8e;
        }
    }
    else if (cVar1 == '%') {
        puVar10 = arg1 + 4;
    }
    else {
        if (cVar1 == '&') {
            puVar10 = arg1 + 4;
            arg1_01 = arg1 + 0x1a;
            goto code_r0x0001ecf0;
        }
        puVar10 = puVar6;
    }
    arg2_01 = puVar6;
code_r0x0001ec8e:
    puVar11 = puVar6;
    if (arg2_01 != NULL) {
        uVar2 = *arg2_01;
        puVar5 = arg2_01;
        while (uVar2 != 0) {
            puVar5 = puVar5 + 1;
            puVar11 = puVar11 + 1;
            uVar2 = *puVar5;
        }
    }
    iStackX_8 = 0;
    if (arg2 != 0) {
        iStackX_8 = fcn.00026284(arg2);
        if (iStackX_8 == 0) {
            return NULL;
        }
        puVar6 = fcn.000262b8(iStackX_8);
    }
    arg2_00 = (puVar6 + puVar11) * 2 + 0x32;
    arg1_00 = fcn.000260fc(4,arg2_00 * 2);
    if (arg1_00 != NULL) {
        noname_2 = L"GUID=";
        fcn.00024a2c(arg1_00,arg2_00,0x268c0);
        uVar14 = 0;
        iVar3 = *arg1_00;
        piVar12 = arg1_00;
        uVar9 = uVar14;
        while (iVar3 != 0) {
            piVar12 = piVar12 + 1;
            uVar9 = uVar9 + 1;
            iVar3 = *piVar12;
        }
        piVar12 = arg1_00 + uVar9;
        if (puVar10 != NULL) {
            do {
                fcn.000251ac(piVar12,(arg2_00 * 2 - piVar12) + arg1_00,noname_2,*(puVar10 + uVar14));
                iVar7 = fcn.000249f8(piVar12,arg2_00 - (piVar12 - arg1_00 >> 1));
                uVar14 = uVar14 + 1;
                piVar12 = piVar12 + iVar7;
            } while (uVar14 < 0x10);
        }
        uVar13 = 0x268f8;
        fcn.00024bac(arg1_00,arg2_00,0x268f8);
        puVar11 = NULL;
        iVar3 = *piVar12;
        puVar10 = puVar11;
        piVar8 = piVar12;
        while (iVar3 != 0) {
            piVar8 = piVar8 + 1;
            puVar10 = puVar10 + 1;
            iVar3 = *piVar8;
        }
        piVar12 = piVar12 + puVar10;
        if (arg2_01 != NULL) {
            for (; *arg2_01 != 0; arg2_01 = arg2_01 + 1) {
                fcn.000251ac(piVar12,(arg2_00 * 2 - piVar12) + arg1_00,uVar13,*arg2_01);
                iVar7 = fcn.000249f8(piVar12,arg2_00 - (piVar12 - arg1_00 >> 1));
                piVar12 = piVar12 + iVar7;
            }
        }
        uVar13 = 0x26908;
        fcn.00024bac(arg1_00,arg2_00,0x26908);
        iVar3 = *piVar12;
        puVar10 = puVar11;
        piVar8 = piVar12;
        while (iVar3 != 0) {
            piVar8 = piVar8 + 1;
            puVar10 = puVar10 + 1;
            iVar3 = *piVar8;
        }
        piVar12 = piVar12 + puVar10;
        if (puVar6 != NULL) {
            do {
                fcn.000251ac(piVar12,(arg2_00 * 2 - piVar12) + arg1_00,uVar13,*(puVar11 + iStackX_8));
                iVar7 = fcn.000249f8(piVar12,arg2_00 - (piVar12 - arg1_00 >> 1));
                puVar11 = puVar11 + 1;
                piVar12 = piVar12 + iVar7;
            } while (puVar11 < puVar6);
        }
        *piVar12 = 0;
        bVar4 = false;
        iVar3 = *arg1_00;
        piVar12 = arg1_00;
        while (iVar3 != 0) {
            iVar3 = *piVar12;
            if (iVar3 == 0x3d) {
                bVar4 = true;
            }
            else if (iVar3 == 0x26) {
                bVar4 = false;
            }
            else if ((bVar4) && (iVar3 - 0x41U < 6)) {
                *piVar12 = iVar3 + 0x20;
            }
            piVar12 = piVar12 + 1;
            iVar3 = *piVar12;
        }
        return arg1_00;
    }
    return NULL;
}


/* fcn.0001e9f4 @ 0x1e9f4 */

ulong fcn.0001e9f4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    ulong *arg1_00;
    uint in_register_00000014;
    int64_t *piVar2;
    ulong *puVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t in_R9;
    ulong *puVar6;
    ulong *puVar7;
    
    piVar2 = CONCAT44(in_register_00000014,arg2);
    pcVar5 = "x-UEFI";
    if (*piVar2 != 0) {
        pcVar5 = *piVar2;
    }
    puVar3 = *(arg1 + 8) + 0x48;
    puVar7 = *puVar3;
    while( true ) {
        if (puVar7 == puVar3) {
            return 1;
        }
        iVar4 = 0;
        arg1_00 = puVar7 + -3;
        cVar1 = *pcVar5;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = pcVar5[iVar4];
        }
        puVar6 = puVar7;
        iVar4 = fcn.00025114(pcVar5,puVar7[-2] + 0x2e,iVar4);
        if (iVar4 == 0) break;
        puVar7 = *puVar6;
    }
    iVar4 = fcn.0001ddc4(arg1_00,arg3,in_R9);
    if (-1 < iVar4) {
        if (*piVar2 == 0) {
            iVar4 = 0;
            pcVar5 = puVar7[-2] + 0x2e;
            cVar1 = *pcVar5;
            while (cVar1 != '\0') {
                iVar4 = iVar4 + 1;
                cVar1 = pcVar5[iVar4];
            }
            iVar4 = fcn.00026148(arg1_00,iVar4 + 1,pcVar5);
            *piVar2 = iVar4;
            if (iVar4 == 0) {
                return 0x80000000;
            }
        }
        return 0;
    }
    return 4;
}


/* fcn.0001e430 @ 0x1e430 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_1ch
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Type propagation algorithm not settling

int16_t fcn.0001e430(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    uint64_t uVar3;
    int16_t iVar4;
    int16_t iVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    int16_t *piVar8;
    int64_t iVar9;
    int16_t *piVar10;
    uint8_t *puVar11;
    bool bVar12;
    uint32_t auStackX_20 [2];
    int64_t var_58h;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint uStack_4c;
    int16_t *piStack_48;
    int64_t iStack_40;
    uint32_t var_20h;
    int64_t var_1ch;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar4 = arg2;
    puVar7 = *(arg1 + 0x10);
    piVar8 = NULL;
    iVar5 = 1;
    piStack_48 = NULL;
    uVar1 = *puVar7;
    bVar12 = false;
    piVar10 = piVar8;
    do {
        if (uVar1 == 0) {
            return 0;
        }
        iVar9 = 0;
        if (uVar1 < 0x18) {
            if (uVar1 != 0x17) {
                if (uVar1 == 0x10) {
                    if (bVar12) {
                        uVar1 = puVar7[1];
                        while (uVar1 != 0) {
                            uVar1 = puVar7[iVar9 + 2];
                            iVar9 = iVar9 + 1;
                        }
                        iVar9 = iVar9 + 1;
                        arg2_00 = fcn.000260c8(iVar9 * 2);
                        *arg3 = arg2_00;
                        if (arg2_00 == 0) {
                            return 0;
                        }
                        puVar7 = puVar7 + 1;
code_r0x0001e9c5:
                        fcn.00024eec(puVar7,arg2_00,iVar9);
                        return iVar5;
                    }
                    uVar1 = puVar7[1];
                    while (uVar1 != 0) {
                        uVar1 = puVar7[iVar9 + 2];
                        iVar9 = iVar9 + 1;
                    }
                    piVar8 = piVar8 + 1;
                }
                else {
                    if (uVar1 != 0x11) {
                        if (uVar1 == 0x12) {
                            if (&uStack_58 != puVar7 + 1) {
                                section..text(&uStack_58,puVar7 + 1,2);
                            }
                            uVar6 = 0;
                            puVar7 = puVar7 + 3;
                            piVar8 = piVar8 + 3;
                            uVar3 = uVar6;
                            if (uStack_58 != 0) {
code_r0x0001e6e7:
                                if (!bVar12) break;
                                uVar1 = *puVar7;
                                while (uVar1 != 0) {
                                    uVar6 = uVar6 + 1;
                                    uVar1 = puVar7[uVar6];
                                }
                                goto code_r0x0001e939;
                            }
                        }
                        else if (uVar1 == 0x13) {
                            if (&uStack_58 != puVar7 + 2) {
                                section..text(&uStack_58,puVar7 + 2,2);
                            }
                            uVar6 = 0;
                            puVar7 = puVar7 + 4;
                            piVar8 = piVar8 + 2;
                            uVar3 = uVar6;
                            if (uStack_58 != 0) {
                                do {
                                    if (bVar12) {
                                        uVar1 = *puVar7;
                                        while (uVar1 != 0) {
                                            uVar6 = uVar6 + 1;
                                            uVar1 = puVar7[uVar6];
                                        }
code_r0x0001e939:
                                        iVar9 = uVar6 + 1;
                                        arg2_00 = fcn.000260c8(iVar9 * 2);
                                        *arg3 = arg2_00;
                                        if (arg2_00 == 0) {
                                            return 0;
                                        }
                                        goto code_r0x0001e9c5;
                                    }
                                    bVar12 = iVar5 == iVar4;
                                    uVar1 = *puVar7;
                                    uVar2 = uVar6;
                                    while (uVar1 != 0) {
                                        uVar2 = uVar2 + 1;
                                        uVar1 = puVar7[uVar2];
                                    }
                                    piVar8 = piVar8 + uVar2 + 1;
                                    uVar1 = *puVar7;
                                    uVar2 = uVar6;
                                    while (uVar1 != 0) {
                                        uVar2 = uVar2 + 1;
                                        uVar1 = puVar7[uVar2];
                                    }
                                    iVar5 = iVar5 + 1;
                                    puVar7 = puVar7 + uVar2 + 1;
                                    uVar3 = uVar3 + 1;
                                } while (uVar3 < uStack_58);
                            }
                        }
                        else if (uVar1 == 0x14) {
                            fcn.0001dd30(puVar7 + 1,&iStack_40,&piStack_48);
                            if (((bVar12) && (piStack_48 != NULL)) && (*piStack_48 != 0)) {
                                *arg3 = piStack_48;
                                return iVar5;
                            }
                            if (iVar5 == iVar4) {
                                bVar12 = true;
                            }
                            piVar8 = piVar8 + iStack_40 + 1;
                            iVar5 = iVar5 + 1;
                            piVar10 = piStack_48;
                        }
                        else if (uVar1 == 0x15) {
                            fcn.0001dd30(puVar7 + 2,&iStack_40,&piStack_48);
                            if (bVar12) {
code_r0x0001e90e:
                                *arg3 = piStack_48;
                                return iVar5;
                            }
                            bVar12 = iVar5 == iVar4;
                            piVar8 = piVar8 + iStack_40 + 2;
                            iVar5 = iVar5 + 1;
                            piVar10 = piStack_48;
                        }
                        else if (uVar1 == 0x16) {
                            piVar8 = piVar8 + 3;
                            puVar11 = puVar7 + 3;
                            if (&uStack_58 != puVar7 + 1) {
                                section..text(&uStack_58,puVar7 + 1,2);
                            }
                            uVar6 = 0;
                            if (uStack_58 != 0) {
                                do {
                                    fcn.0001dd30(puVar11,&iStack_40,&piStack_48);
                                    if (bVar12) {
                                        *arg3 = piStack_48;
                                        return iVar5;
                                    }
                                    bVar12 = iVar5 == iVar4;
                                    piVar8 = piVar8 + iStack_40;
                                    puVar11 = puVar11 + iStack_40;
                                    iVar5 = iVar5 + 1;
                                    uVar6 = uVar6 + 1;
                                } while (uVar6 < uStack_58);
                                goto code_r0x0001e54c;
                            }
                            goto code_r0x0001e550;
                        }
                        goto code_r0x0001e555;
                    }
                    if (bVar12) {
                        uVar1 = puVar7[2];
                        while (uVar1 != 0) {
                            uVar1 = puVar7[iVar9 + 3];
                            iVar9 = iVar9 + 1;
                        }
                        iVar9 = iVar9 + 1;
                        arg2_00 = fcn.000260c8(iVar9 * 2);
                        *arg3 = arg2_00;
                        if (arg2_00 == 0) {
                            return 0;
                        }
                        puVar7 = puVar7 + 2;
                        goto code_r0x0001e9c5;
                    }
                    uVar1 = puVar7[2];
                    while (uVar1 != 0) {
                        uVar1 = puVar7[iVar9 + 3];
                        iVar9 = iVar9 + 1;
                    }
                    piVar8 = piVar8 + 3;
                }
                bVar12 = iVar5 == iVar4;
                piVar8 = piVar8 + iVar9;
                goto code_r0x0001e798;
            }
            piVar8 = piVar8 + 2;
            puVar11 = puVar7 + 4;
            if (&uStack_58 != puVar7 + 2) {
                section..text(&uStack_58,puVar7 + 2,2);
            }
            uVar6 = 0;
            if (uStack_58 != 0) {
                do {
                    fcn.0001dd30(puVar11,&iStack_40,&piStack_48);
                    if (bVar12) goto code_r0x0001e90e;
                    bVar12 = iVar5 == iVar4;
                    piVar8 = piVar8 + iStack_40;
                    puVar11 = puVar11 + iStack_40;
                    iVar5 = iVar5 + 1;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uStack_58);
code_r0x0001e54c:
                piVar10 = piStack_48;
            }
code_r0x0001e550:
        }
        else if (uVar1 == 0x20) {
            piVar8 = piVar8 + 3;
code_r0x0001e798:
            iVar5 = iVar5 + 1;
        }
        else if (uVar1 == 0x21) {
            if (&uStack_54 != puVar7 + 1) {
                section..text(&uStack_54,puVar7 + 1,2);
            }
            iVar5 = iVar5 + uStack_54;
            piVar8 = piVar8 + 3;
        }
        else if (uVar1 == 0x22) {
            uStack_54._0_2_ = puVar7[1];
            iVar5 = iVar5 + uStack_54;
            piVar8 = piVar8 + 1;
        }
        else {
            if (uVar1 == 0x30) {
                if (auStackX_20 != puVar7 + 2) {
                    section..text(auStackX_20,puVar7 + 2,1);
                }
                uVar6 = auStackX_20[0];
            }
            else if (uVar1 == 0x31) {
                if (&uStack_4c != puVar7) {
                    section..text(&uStack_4c,puVar7,4);
                }
                uVar6 = uStack_4c._2_2_;
            }
            else {
                if (uVar1 != 0x32) goto code_r0x0001e555;
                if (&uStack_50 != puVar7 + 2) {
                    section..text(&uStack_50,puVar7 + 2,4);
                }
                uVar6 = uStack_50;
            }
            piVar8 = piVar8 + uVar6;
        }
code_r0x0001e555:
        if (piVar10 != NULL) {
            (**(*0x27020 + 0x48))(piVar10);
            piVar10 = NULL;
            piStack_48 = NULL;
        }
        puVar7 = piVar8 + *(arg1 + 0x10);
        uVar1 = *puVar7;
    } while( true );
    bVar12 = iVar5 == iVar4;
    uVar1 = *puVar7;
    uVar2 = uVar6;
    while (uVar1 != 0) {
        uVar2 = uVar2 + 1;
        uVar1 = puVar7[uVar2];
    }
    piVar8 = piVar8 + uVar2 + 1;
    uVar1 = *puVar7;
    uVar2 = uVar6;
    while (uVar1 != 0) {
        uVar2 = uVar2 + 1;
        uVar1 = puVar7[uVar2];
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + uVar2 + 1;
    uVar3 = uVar3 + 1;
    if (uStack_58 <= uVar3) goto code_r0x0001e555;
    goto code_r0x0001e6e7;
}


/* fcn.0001f190 @ 0x1f190 */

int64_t fcn.0001f190(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint16_t uVar4;
    int64_t iVar5;
    char *arg1_00;
    int16_t *arg3_00;
    int16_t *arg3_01;
    int64_t iVar6;
    int64_t arg2_00;
    int64_t iVar7;
    ulong *puVar8;
    ulong *puVar9;
    uint16_t uStackX_8;
    
    iVar7 = 0;
    puVar9 = *(arg1 + 8) + 0x28;
    uVar4 = 0;
    uStackX_8 = 0;
    puVar8 = *puVar9;
    while( true ) {
        if (puVar8 == puVar9) {
            return -0x7ffffffffffffff2;
        }
        iVar5 = fcn.0001eacc(puVar8 + -3,arg2);
        if (iVar5 != 0) break;
        puVar8 = *puVar8;
    }
    uVar1 = *(iVar5 + 8);
    *arg3 = iVar5;
    if (uVar1 == 0) {
        return -0x7ffffffffffffff2;
    }
    arg1_00 = fcn.0001eb24(puVar8 + -3,uVar1);
    if (*arg1_00 == '%') {
        iVar5 = fcn.0001f018(arg1,*(iVar5 + 10));
    }
    else {
        uStackX_8 = *(iVar5 + 10);
        uVar4 = fcn.0001eb88(iVar5);
        iVar5 = iVar7;
    }
    arg3_00 = fcn.0001ef40(iVar5,uStackX_8,uVar4);
    arg3_01 = fcn.0001ec50(arg1_00,*(arg1 + 0x10));
    iVar2 = *arg3_01;
    piVar3 = arg3_01;
    iVar5 = iVar7;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar2 = *piVar3;
    }
    iVar2 = *arg3_00;
    piVar3 = arg3_00;
    iVar6 = iVar7;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + 1;
        iVar2 = *piVar3;
    }
    iVar6 = iVar5 + 2 + iVar6;
    iVar5 = fcn.000260c8(iVar6 * 2);
    *arg4 = iVar5;
    if (iVar5 == 0) {
        iVar7 = -0x7ffffffffffffff7;
    }
    else {
        arg2_00 = iVar6;
        fcn.00024a2c(iVar5,iVar6,arg3_01);
        fcn.00024bac(iVar5,arg2_00,0x268a4);
        fcn.00024bac(iVar5,iVar6,arg3_00);
    }
    (**(*0x27020 + 0x48))(arg3_01);
    (**(*0x27020 + 0x48))(arg3_00);
    return iVar7;
}


/* fcn.0001f500 @ 0x1f500 */

ulong fcn.0001f500(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *noname_0;
    int16_t *arg2_00;
    ushort *puVar2;
    ulong uVar3;
    int64_t iVar4;
    
    arg2_00 = fcn.00024fbc(*arg2,0x26968);
    puVar2 = fcn.00024fbc(arg2_00 + 2,0x268a4);
    iVar4 = 0;
    if (puVar2 != NULL) {
        *puVar2 = 0;
    }
    iVar1 = *arg2_00;
    noname_0 = arg2_00;
    while (iVar1 != 0) {
        noname_0 = noname_0 + 1;
        iVar4 = iVar4 + 1;
        iVar1 = *noname_0;
    }
    iVar4 = fcn.00026148(noname_0,iVar4 * 2 + 2,arg2_00);
    *arg1 = iVar4;
    if (iVar4 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        if (puVar2 != NULL) {
            *puVar2 = 0x26;
        }
        (**(*0x27020 + 0x48))(*arg2);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001f754 @ 0x1f754 */

ulong fcn.0001f754(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int16_t iVar2;
    int16_t *piVar3;
    int64_t arg2_00;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    unkbyte7 Var8;
    int16_t *piStackX_8;
    char in_stack_00000028;
    int64_t *in_stack_00000030;
    
    Var8 = arg4 >> 8;
    iVar6 = 0;
    cVar1 = *arg1;
    iVar7 = iVar6;
    while (cVar1 != '\0') {
        iVar7 = iVar7 + 1;
        cVar1 = *(iVar7 + arg1);
    }
    arg2_00 = fcn.000260c8(iVar7 * 2 + 2);
    if (arg2_00 != 0) {
        fcn.00024eec(arg1,arg2_00,iVar7 + 1);
        iVar4 = fcn.000262b8(arg2);
        fcn.00010688(0x26908,iVar4,arg2,CONCAT71(Var8,1));
        if (piStackX_8 != NULL) {
            iVar2 = *piStackX_8;
            iVar4 = iVar6;
            piVar3 = piStackX_8;
            while (iVar2 != 0) {
                piVar3 = piVar3 + 1;
                iVar4 = iVar4 + 1;
                iVar2 = *piVar3;
            }
            iVar2 = *arg3;
            piVar3 = arg3;
            iVar5 = iVar6;
            while (iVar2 != 0) {
                piVar3 = piVar3 + 1;
                iVar5 = iVar5 + 1;
                iVar2 = *piVar3;
            }
            iVar2 = *arg4;
            piVar3 = arg4;
            while (iVar2 != 0) {
                piVar3 = piVar3 + 1;
                iVar6 = iVar6 + 1;
                iVar2 = *piVar3;
            }
            iVar6 = iVar6 + 0x12 + iVar4 + iVar7 + iVar5;
            iVar7 = iVar6 + 9;
            if (in_stack_00000028 == '\0') {
                iVar7 = iVar6;
            }
            iVar7 = iVar7 + 1;
            iVar6 = fcn.000260c8(iVar7 * 2);
            *in_stack_00000030 = iVar6;
            if (iVar6 != 0) {
                iVar4 = iVar7;
                fcn.00024a2c(iVar6,iVar7,0x26ac8);
                fcn.00024bac(iVar6,iVar4,arg2_00);
                fcn.00024bac(iVar6,iVar7,piStackX_8);
                fcn.00024bac(iVar6,iVar7,0x26ab0);
                fcn.00024bac(iVar6,iVar7,arg3);
                fcn.00024bac(iVar6,iVar7,arg4);
                if (in_stack_00000028 != '\0') {
                    fcn.00024bac(iVar6,iVar7,0x26ba0);
                }
                (**(*0x27020 + 0x48))(arg2_00);
                (**(*0x27020 + 0x48))(piStackX_8);
                return 0;
            }
            (**(*0x27020 + 0x48))(arg2_00);
        }
    }
    return 0x8000000000000009;
}


/* fcn.0001f934 @ 0x1f934 */

ulong fcn.0001f934(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t noname_0;
    int64_t iVar4;
    uint64_t uVar5;
    
    iVar4 = 0;
    iVar2 = iVar4;
    for (piVar1 = *arg1; *piVar1 != 0; piVar1 = piVar1 + 1) {
        iVar2 = iVar2 + 1;
    }
    noname_0 = iVar4;
    for (piVar1 = *arg2; *piVar1 != 0; piVar1 = piVar1 + 1) {
        noname_0 = noname_0 + 1;
    }
    uVar5 = (noname_0 + iVar2) * 2 + 4;
    for (piVar1 = *arg1; *piVar1 != 0; piVar1 = piVar1 + 1) {
        iVar4 = iVar4 + 1;
    }
    iVar2 = fcn.000261ac(noname_0,iVar4 * 2 + 2,uVar5,*arg1);
    if (iVar2 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        uVar5 = uVar5 >> 1;
        *arg1 = iVar2;
        fcn.00024bac(iVar2,uVar5,0x268a4);
        fcn.00024bac(iVar2,uVar5,*arg2);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001d668 @ 0x1d668 */

ulong fcn.0001d668(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    char16_t *pcVar2;
    ushort *puVar3;
    uint in_register_0000000c;
    int16_t *piVar4;
    int64_t iVar5;
    int16_t *piVar6;
    int64_t iVar7;
    char16_t *pcVar8;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = 0;
    if (piVar4 == NULL) {
        *arg2 = 0;
        if (arg3 != 0) {
            *arg3 = 0;
        }
    }
    else {
        pcVar8 = L"NAMESPACE=";
        pcVar2 = L"NAMESPACE=";
        piVar6 = piVar4 + 1;
        iVar7 = iVar5;
        if (*piVar4 != 0x26) {
            piVar6 = piVar4;
        }
        do {
            pcVar2 = pcVar2 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar2 != L'\0');
        iVar7 = fcn.00024f80(piVar6,0x26ac8,iVar7);
        if (iVar7 != 0) {
            return 0x8000000000000002;
        }
        iVar7 = iVar5;
        do {
            pcVar8 = pcVar8 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar8 != L'\0');
        piVar6 = piVar6 + iVar7;
        puVar3 = fcn.00024fbc(piVar6,0x268a4);
        if (puVar3 != NULL) {
            *puVar3 = 0;
        }
        if (arg3 != NULL) {
            iVar1 = *piVar6;
            piVar4 = piVar6;
            iVar7 = iVar5;
            while (iVar1 != 0) {
                piVar4 = piVar4 + 1;
                iVar7 = iVar7 + 1;
                iVar1 = *piVar4;
            }
            *arg3 = piVar6 + iVar7;
        }
        iVar1 = *piVar6;
        piVar4 = piVar6;
        while (iVar1 != 0) {
            piVar4 = piVar4 + 1;
            iVar5 = iVar5 + 1;
            iVar1 = *piVar4;
        }
        iVar7 = fcn.000260c8(iVar5 + 1);
        *arg2 = iVar7;
        if (iVar7 == 0) {
            return 0x8000000000000009;
        }
        fcn.00024e58(piVar6,iVar7,iVar5 + 1);
        if (puVar3 != NULL) {
            *puVar3 = 0x26;
        }
    }
    return 0;
}


/* fcn.0001d4b8 @ 0x1d4b8 */

ulong fcn.0001d4b8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t *piVar2;
    int64_t iVar3;
    char *pcVar4;
    int16_t iVar5;
    uint in_register_0000000c;
    int16_t *piVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    int16_t aiStackX_8 [4];
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar6 == 0x26) {
        piVar6 = piVar6 + 1;
    }
    piVar11 = 0x26898;
    uVar10 = 0;
    piVar2 = 0x26898;
    uVar9 = uVar10;
    do {
        piVar2 = piVar2 + 1;
        uVar9 = uVar9 + 1;
    } while (*piVar2 != 0);
    iVar3 = fcn.00024f80(piVar6,0x26898,uVar9);
    if (iVar3 == 0) {
        uVar9 = uVar10;
        do {
            piVar11 = piVar11 + 1;
            uVar9 = uVar9 + 1;
        } while (*piVar11 != 0);
        piVar6 = piVar6 + uVar9;
        iVar5 = *piVar6;
        if (iVar5 != 0) {
            piVar2 = piVar6;
            uVar9 = uVar10;
            do {
                if (iVar5 == 0x26) break;
                piVar2 = piVar2 + 1;
                uVar9 = uVar9 + 1;
                iVar5 = *piVar2;
            } while (iVar5 != 0);
            *arg3 = piVar2;
            uVar8 = uVar9 + 1 >> 1;
            if (3 < uVar8) {
                pcVar4 = fcn.000260fc(4,uVar8);
                if (pcVar4 == NULL) {
                    return 0x8000000000000009;
                }
                fcn.000102c0(aiStackX_8,4);
                if (uVar9 != 0) {
                    do {
                        aiStackX_8[0] = piVar6[uVar10];
                        cVar1 = fcn.0002503c(aiStackX_8);
                        uVar8 = uVar10 >> 1;
                        if ((uVar10 & 1) == 0) {
                            pcVar4[uVar8] = cVar1;
                        }
                        else {
                            pcVar4[uVar8] = pcVar4[uVar8] * '\x10' + cVar1;
                        }
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar9);
                }
                pcVar7 = pcVar4;
                while( true ) {
                    if ((*pcVar7 == '\x7f') && (pcVar7[1] == -1)) {
                        *arg2 = pcVar4;
                        return 0;
                    }
                    if (((*pcVar7 == '\0') || (pcVar7[1] == '\0')) || (*(pcVar7 + 2) < 4)) break;
                    pcVar7 = pcVar7 + *(pcVar7 + 2);
                }
                (**(*0x27020 + 0x48))(pcVar4);
            }
        }
    }
    else {
        piVar2 = 0x26ab0;
        do {
            piVar2 = piVar2 + 1;
            uVar10 = uVar10 + 1;
        } while (*piVar2 != 0);
        iVar3 = fcn.00024f80(piVar6,0x26ab0,uVar10);
        if (iVar3 == 0) {
            *arg2 = 0;
            *arg3 = piVar6;
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001d7a8 @ 0x1d7a8 */

ulong fcn.0001d7a8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    ulong uVar3;
    ushort *puVar4;
    uint in_register_0000000c;
    int16_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    int16_t *piVar8;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar5 == 0x26) {
        piVar5 = piVar5 + 1;
    }
    piVar8 = 0x26ab0;
    iVar6 = 0;
    piVar2 = 0x26ab0;
    iVar7 = iVar6;
    do {
        piVar2 = piVar2 + 1;
        iVar7 = iVar7 + 1;
    } while (*piVar2 != 0);
    iVar7 = fcn.00024f80(piVar5,0x26ab0,iVar7);
    if (iVar7 == 0) {
        iVar7 = iVar6;
        do {
            piVar8 = piVar8 + 1;
            iVar7 = iVar7 + 1;
        } while (*piVar8 != 0);
        piVar5 = piVar5 + iVar7;
        puVar4 = fcn.00024fbc(piVar5,0x268a4);
        if (puVar4 != NULL) {
            *puVar4 = 0;
        }
        iVar1 = *piVar5;
        iVar7 = iVar6;
        piVar2 = piVar5;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar7 = iVar7 + 1;
            iVar1 = *piVar2;
        }
        *arg3 = piVar5 + iVar7;
        iVar1 = *piVar5;
        piVar2 = piVar5;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
        iVar6 = fcn.00026148(iVar7,iVar6 * 2 + 2,piVar5);
        *arg2 = iVar6;
        if (iVar6 == 0) {
            uVar3 = 0x8000000000000009;
        }
        else {
            if (puVar4 != NULL) {
                *puVar4 = 0x26;
            }
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.0001d8c4 @ 0x1d8c4 */

ulong fcn.0001d8c4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    char16_t *pcVar2;
    ulong uVar3;
    ushort *puVar4;
    uint in_register_0000000c;
    int16_t *piVar5;
    int64_t iVar6;
    int64_t iVar7;
    char16_t *pcVar8;
    int16_t *piVar9;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    pcVar8 = L"VALUE=";
    piVar9 = piVar5 + 1;
    if (*piVar5 != 0x26) {
        piVar9 = piVar5;
    }
    pcVar2 = L"VALUE=";
    iVar6 = 0;
    iVar7 = iVar6;
    do {
        pcVar2 = pcVar2 + 1;
        iVar7 = iVar7 + 1;
    } while (*pcVar2 != L'\0');
    iVar7 = fcn.00024f80(piVar9,0x26a30,iVar7);
    if (iVar7 == 0) {
        iVar7 = iVar6;
        do {
            pcVar8 = pcVar8 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar8 != L'\0');
        piVar9 = piVar9 + iVar7;
        puVar4 = fcn.00024fbc(piVar9,0x268a4);
        if (puVar4 != NULL) {
            *puVar4 = 0;
        }
        iVar1 = *piVar9;
        iVar7 = iVar6;
        piVar5 = piVar9;
        while (iVar1 != 0) {
            piVar5 = piVar5 + 1;
            iVar7 = iVar7 + 1;
            iVar1 = *piVar5;
        }
        *arg3 = piVar9 + iVar7;
        iVar1 = *piVar9;
        piVar5 = piVar9;
        while (iVar1 != 0) {
            piVar5 = piVar5 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar5;
        }
        iVar6 = fcn.00026148(iVar7,iVar6 * 2 + 2,piVar9);
        *arg2 = iVar6;
        if (iVar6 == 0) {
            uVar3 = 0x8000000000000009;
        }
        else {
            if (puVar4 != NULL) {
                *puVar4 = 0x26;
            }
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.0001f5b8 @ 0x1f5b8 */

ulong fcn.0001f5b8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *arg1_00;
    int64_t *piVar5;
    bool bVar6;
    int64_t *in_stack_00000030;
    
    iVar4 = *arg1;
    bVar6 = false;
    piVar5 = *0x26688;
    if (iVar4 == 0) {
        if (*0x26688 == 0x26688) {
            return 0x8000000000000002;
        }
        do {
            iVar1 = fcn.0001e9f4(piVar5 + -4,arg2,arg3);
            *arg4 = iVar1;
            if (iVar1 == 0) {
                *in_stack_00000030 = piVar5 + -4;
                iVar4 = *(piVar5[-3] + 0x80);
                if (iVar4 == 0) {
                    return 0;
                }
                iVar2 = iVar4 + 4;
                iVar3 = fcn.000262b8(iVar2);
                iVar4 = fcn.00026148(iVar2,iVar3,iVar4 + 4);
                *arg1 = iVar4;
                if (iVar4 != 0) {
                    return 0;
                }
                return 0x8000000000000009;
            }
            if (iVar1 == -0x80000000) {
                return 0x8000000000000009;
            }
            piVar5 = *piVar5;
            if (iVar1 == 4) {
                bVar6 = true;
            }
        } while (piVar5 != 0x26688);
        bVar6 = !bVar6;
    }
    else {
        for (; piVar5 != 0x26688; piVar5 = *piVar5) {
            arg1_00 = piVar5 + -4;
            if (*(piVar5[-3] + 0x80) != 0) {
                iVar3 = *(piVar5[-3] + 0x80) + 4;
                iVar2 = fcn.000262b8(iVar3);
                if ((iVar2 == 0) || (iVar4 == iVar3)) {
                    iVar2 = 0;
                }
                else {
                    iVar2 = fcn.000102e0(iVar4,iVar3,iVar2);
                }
                if (iVar2 == 0) goto code_r0x0001f6ac;
            }
        }
        arg1_00 = NULL;
code_r0x0001f6ac:
        if (arg1_00 == NULL) {
            *arg4 = 2;
            return 0x8000000000000002;
        }
        iVar1 = fcn.0001e9f4(arg1_00,arg2,arg3);
        *arg4 = iVar1;
        if (iVar1 == 0) {
            *in_stack_00000030 = arg1_00;
            return 0;
        }
        bVar6 = iVar1 == 1;
    }
    if (bVar6) {
        return 0x8000000000000002;
    }
    return 0x800000000000000e;
}


/* fcn.0001f310 @ 0x1f310 */

int64_t fcn.0001f310(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int16_t iVar2;
    int16_t *piVar3;
    uint16_t uVar4;
    int64_t iVar5;
    char *arg1_00;
    int16_t *arg3_00;
    int16_t *arg3_01;
    char16_t *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint16_t uStackX_8;
    int64_t *in_stack_00000028;
    
    iVar9 = 0;
    puVar12 = *(arg1 + 8) + 0x28;
    uVar4 = 0;
    uStackX_8 = 0;
    puVar10 = *puVar12;
    while( true ) {
        if (puVar10 == puVar12) {
            return -0x7ffffffffffffff2;
        }
        iVar5 = fcn.0001eacc(puVar10 + -3,arg2);
        if (iVar5 != 0) break;
        puVar10 = *puVar10;
    }
    uVar1 = *(iVar5 + 8);
    *arg4 = iVar5;
    arg1_00 = fcn.0001eb24(puVar10 + -3,uVar1);
    if (*arg1_00 == '%') {
        iVar5 = fcn.0001f018(arg1,*(iVar5 + 10));
    }
    else {
        uStackX_8 = *(iVar5 + 10);
        uVar4 = fcn.0001eb88(iVar5);
        iVar5 = iVar9;
    }
    arg3_00 = fcn.0001ef40(iVar5,uStackX_8,uVar4);
    arg3_01 = fcn.0001ec50(arg1_00,*(arg1 + 0x10));
    iVar2 = *arg3_01;
    piVar3 = arg3_01;
    iVar5 = iVar9;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar2 = *piVar3;
    }
    iVar2 = *arg3_00;
    piVar3 = arg3_00;
    iVar8 = iVar9;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar8 = iVar8 + 1;
        iVar2 = *piVar3;
    }
    pcVar6 = L"VALUE=";
    iVar11 = iVar9;
    do {
        pcVar6 = pcVar6 + 1;
        iVar11 = iVar11 + 1;
    } while (*pcVar6 != L'\0');
    iVar2 = *arg3;
    piVar3 = arg3;
    iVar7 = iVar9;
    while (iVar2 != 0) {
        piVar3 = piVar3 + 1;
        iVar7 = iVar7 + 1;
        iVar2 = *piVar3;
    }
    iVar8 = iVar5 + 3 + iVar7 + iVar11 + iVar8;
    iVar5 = fcn.000260c8(iVar8 * 2);
    *in_stack_00000028 = iVar5;
    if (iVar5 == 0) {
        iVar9 = -0x7ffffffffffffff7;
    }
    else {
        iVar11 = iVar8;
        fcn.00024a2c(iVar5,iVar8,arg3_01);
        fcn.00024bac(iVar5,iVar11,0x268a4);
        fcn.00024bac(iVar5,iVar8,arg3_00);
        fcn.00024bac(iVar5,iVar8,0x268a4);
        fcn.00024bac(iVar5,iVar8,0x26a30);
        fcn.00024bac(iVar5,iVar8,arg3);
    }
    (**(*0x27020 + 0x48))(arg3_01);
    (**(*0x27020 + 0x48))(arg3_00);
    return iVar9;
}


/* fcn.0001dc20 @ 0x1dc20 */

uint fcn.0001dc20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    uint8_t uVar3;
    uint uVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    bool bVar7;
    char acStackX_8 [8];
    int64_t iStackX_10;
    
    cVar1 = *arg1;
    uVar6 = 0;
    if ((cVar1 - 5U & 0xfd) == 0) {
        uVar6 = *(arg1 + 0xd);
    }
    uVar5 = *(arg1 + 0xc) & 1;
    *arg4 = uVar5;
    do {
        uVar4 = 0;
        if ((arg2 == 0) || (cVar2 = fcn.0001d9e0(arg2,acStackX_8,&iStackX_10), uVar4 = 0, cVar2 == '\0'))
        goto code_r0x0001dcf9;
        if (acStackX_8[0] == '\x01') {
            if (uVar5 == 0) goto code_r0x0001dcf4;
        }
        else if (acStackX_8[0] == '\x02') {
            bVar7 = uVar5 == 0;
code_r0x0001dd1b:
            if (!bVar7) {
code_r0x0001dcf4:
                uVar4 = 8;
code_r0x0001dcf9:
                *arg3 = arg2;
                return uVar4;
            }
        }
        else if (acStackX_8[0] == '\x10') {
            if (cVar1 - 5U < 3) goto code_r0x0001dcf4;
        }
        else if (acStackX_8[0] == ' ') {
            if (2 < cVar1 - 5U) goto code_r0x0001dcf4;
        }
        else if ((((acStackX_8[0] == '0') || (acStackX_8[0] == '@')) || (acStackX_8[0] == 'P')) ||
                (acStackX_8[0] == '`')) {
            if (cVar1 != '\x05') {
                if (1 < cVar1 - 6U) goto code_r0x0001dcf4;
                if (cVar1 != '\a') goto code_r0x0001dd24;
            }
            uVar3 = uVar6 & 3;
            if (uVar3 == 0) {
                bVar7 = acStackX_8[0] == '0';
            }
            else if (uVar3 == 1) {
                bVar7 = acStackX_8[0] == '@';
            }
            else if (uVar3 == 2) {
                bVar7 = acStackX_8[0] == 'P';
            }
            else {
                if (uVar3 != 3) goto code_r0x0001dd24;
                bVar7 = acStackX_8[0] == '`';
            }
            goto code_r0x0001dd1b;
        }
code_r0x0001dd24:
        arg2 = iStackX_10;
    } while( true );
}


/* fcn.0001fa08 @ 0x1fa08 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.0001fa08(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    char *arg1_00;
    int64_t iVar6;
    int64_t *piVar7;
    int64_t arg4;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    char *pcVar11;
    char cVar12;
    int64_t iVar13;
    int64_t var_fh;
    int64_t iStackX_20;
    int8_t var_67h;
    int64_t var_7fh;
    int64_t iStack_b8;
    int64_t iStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t *piStack_98;
    int64_t iStack_90;
    int64_t *piStack_88;
    int64_t *piStack_80;
    uchar auStack_78 [8];
    uchar auStack_70 [8];
    uchar auStack_68 [7];
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    pcVar11 = "x-UEFI";
    arg4 = 0;
    piStack_88 = *0x26688;
    iStack_b8 = 0;
    iStack_b0 = 0;
    if (arg1 != 0) {
        pcVar11 = arg1;
    }
    iStack_a8 = 0;
    iStackX_20 = 0;
    uVar2 = 0;
    iVar8 = arg4;
    iVar9 = arg4;
    iVar6 = arg4;
    iVar5 = arg4;
    iVar13 = arg4;
    unique0x10000366 = pcVar11;
    uVar3 = 0;
    if (*0x26688 != 0x26688) {
        do {
            uVar2 = uVar3;
            piStack_80 = piStack_88 + -4;
            iVar10 = *(piStack_88[-3] + 0x80);
            unique0x00008f00 = piStack_88[-3] + 0x48;
            iStack_90 = iVar10 + 4;
            if (iVar10 == 0) {
                iStack_90 = iVar9;
            }
            piVar7 = *unique0x00008f00;
            arg1_00 = pcVar11;
            piStack_98 = piVar7;
            if (piVar7 != unique0x00008f00) {
                do {
                    cVar1 = *arg1_00;
                    pcVar11 = arg1_00;
                    iVar9 = iVar6;
                    while (cVar1 != iVar6) {
                        pcVar11 = pcVar11 + 1;
                        iVar9 = iVar9 + 1;
                        cVar1 = *pcVar11;
                    }
                    iVar10 = piVar7[-2];
                    pcVar11 = arg1_00;
                    piStack_98 = piVar7;
                    _auStack_68 = piVar7 + -3;
                    iVar9 = fcn.00025114(arg1_00,iVar10 + 0x2e,iVar9);
                    if (iVar9 == 0) {
                        uVar2 = 1;
                        cVar12 = iVar6;
                        cVar1 = *(iVar10 + 0x2e);
                        while (cVar1 != cVar12) {
                            iVar6 = iVar6 + 1;
                            cVar1 = *(iVar10 + 0x2e + iVar6);
                        }
                        iVar9 = fcn.00026148(arg1_00,iVar6 + 1,iVar10 + 0x2e);
                        if (iVar9 == 0) {
                            return -0x7ffffffffffffff7;
                        }
                        uVar4 = fcn.0001e430(piVar7 + -3,1,&iStack_a0);
                        if (uVar4 != 0) {
                            do {
                                iVar6 = fcn.0001f190(piStack_80,uVar4,auStack_70,&iStack_b0);
                                iVar8 = iStack_b0;
                                if (-1 < iVar6) {
                                    iVar6 = (**0x267a0)(0x267a0,iStack_b0,&var_49h + 1,auStack_78);
                                    if (-1 < iVar6) {
                                        iVar6 = fcn.0001f500(&iStack_a8,auStack_78);
                                        arg4 = iStack_a8;
                                    }
                                    if (iVar6 < 0) {
                                        if (iVar6 == -0x7ffffffffffffff7) goto code_r0x0001fd1b;
                                    }
                                    else {
                                        iVar6 = fcn.0001f754(iVar9,iStack_90,iStack_a0,arg4);
                                        iVar10 = iStackX_20;
                                        if (iVar6 != 0) goto code_r0x0001fd1b;
                                        if (iVar13 == 0) {
                                            iStack_b8 = iStackX_20;
                                            iStackX_20 = 0;
                                            iVar5 = 0;
                                            iVar13 = iVar10;
                                        }
                                        else {
                                            iVar6 = fcn.0001f934(&iStack_b8,&iStackX_20);
                                            if (iVar6 < 0) goto code_r0x0001fd1b;
                                            iVar5 = iStackX_20;
                                            iVar13 = iStack_b8;
                                        }
                                    }
                                }
                                if (iVar8 != 0) {
                                    (**(*0x27020 + 0x48))(iVar8);
                                    iVar8 = 0;
                                    iStack_b0 = 0;
                                }
                                if (arg4 != 0) {
                                    (**(*0x27020 + 0x48))(arg4);
                                    arg4 = 0;
                                    iStack_a8 = 0;
                                }
                                if (iVar5 != 0) {
                                    (**(*0x27020 + 0x48))(iVar5);
                                    iVar5 = 0;
                                    iStackX_20 = 0;
                                }
                                uVar4 = fcn.0001e430(_auStack_68,uVar4,&iStack_a0);
                            } while (uVar4 != 0);
                            piVar7 = piStack_98;
                        }
                        (**(*0x27020 + 0x48))(iVar9);
                        iVar6 = 0;
                        pcVar11 = stack0xffffffffffffffa0;
                    }
                    piVar7 = *piVar7;
                    arg1_00 = pcVar11;
                } while (piVar7 != stack0xffffffffffffffa8);
                piStack_98 = piVar7;
            }
            piStack_88 = *piStack_88;
            iVar9 = iStack_90;
            uVar3 = uVar2;
        } while (piStack_88 != 0x26688);
        if (iVar13 != 0) goto code_r0x0001fd14;
    }
    iVar6 = -0x7ffffffffffffff2;
    *arg3 = (-uVar2 & 3) + 1;
code_r0x0001fd14:
    iVar9 = 0;
    *arg2 = iVar13;
code_r0x0001fd1b:
    if (iVar9 != 0) {
        (**(*0x27020 + 0x48))(iVar9);
    }
    if (iVar8 != 0) {
        (**(*0x27020 + 0x48))(iVar8);
    }
    if (arg4 != 0) {
        (**(*0x27020 + 0x48))(arg4);
    }
    return iVar6;
}


/* fcn.000249bc @ 0x249bc */

int64_t fcn.000249bc(void)

{
    if (*0x27038 == 0) {
        (**(*0x27020 + 0x140))(0x265b0,0,0x27038);
    }
    return *0x27038;
}


/* fcn.00020d18 @ 0x20d18 */

ulong fcn.00020d18(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    uint16_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    ulong *puVar7;
    int16_t *piVar8;
    int16_t iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    uint32_t *puVar14;
    int64_t in_stack_00000028;
    char in_stack_00000030;
    uint32_t uStack_38;
    uint32_t auStack_34 [3];
    
    puVar12 = NULL;
    iVar9 = arg1;
    if (*0x26860 == -1) {
        if (*0x27030 == 0) {
            (**(*0x27020 + 0x140))(0x26580,0,0x27030);
        }
        *0x26860 = (**(*0x27030 + 8))();
    }
    piVar4 = *0x26868;
    if (*0x26868 != 0x26868) {
        do {
            if (piVar4[2] == iVar9) {
                puVar6 = piVar4[3];
                break;
            }
            piVar4 = *piVar4;
            puVar6 = puVar12;
        } while (piVar4 != 0x26868);
        if (piVar4 != 0x26868) goto code_r0x00020f2e;
    }
    iVar5 = fcn.000249bc();
    iVar5 = (**(iVar5 + 0x28))(0x26610,0x30005);
    *0x26ff8 = *(iVar5 + 4);
    puVar13 = *(iVar5 + 0x14) + 0x14 + iVar5;
    puVar6 = fcn.000260c8(puVar13[4]);
    if ((puVar13[4] != 0) && (puVar6 != puVar13)) {
        section..text(puVar6,puVar13,puVar13[4]);
    }
    bVar3 = false;
    for (piVar4 = iVar5 + 0x18; piVar4 < iVar5 + 0x14 + *(iVar5 + 0x14); piVar4 = piVar4 + 2) {
        if ((piVar4[1] == iVar9) && (*piVar4 == *0x26860)) {
            bVar3 = true;
            break;
        }
    }
    uVar10 = (*(iVar5 + 0x10) + 7 & 0xfffffff8) + 0x10;
    if (!bVar3) {
        for (; (puVar13 = uVar10 + iVar5, uVar10 < *0x26ff8 && (*puVar13 != 0xffff));
            uVar10 = uVar10 + 7 + *puVar13 & 0xfffffffffffffff8) {
            puVar11 = puVar13 + puVar13[1] + 4;
            puVar14 = puVar13 + 2;
code_r0x00020e8e:
            if (puVar14 < puVar11) {
                if ((puVar14[2] != iVar9) || (*puVar14 != *0x26860)) goto code_r0x00020e8a;
                uVar2 = *puVar13;
                for (; puVar11 < uVar2 + puVar13; puVar11 = puVar11 + 1) {
                    *((*puVar11 & 0xffffff) + puVar6) = *(puVar11 + 3);
                }
                goto code_r0x00020ed5;
            }
        }
        (**(*0x27020 + 0x48))(puVar6);
        puVar6 = NULL;
    }
code_r0x00020ed5:
    puVar7 = fcn.000260c8(0x20);
    if (puVar7 == NULL) {
        if (puVar6 == NULL) {
            return 0x800000000000000e;
        }
        (**(*0x27020 + 0x48))(puVar6);
        puVar6 = puVar12;
    }
    else {
        *(puVar7 + 2) = iVar9;
        puVar7[3] = puVar6;
        *puVar7 = 0x26868;
        puVar7[1] = *0x26870;
        **0x26870 = puVar7;
        *0x26870 = puVar7;
    }
code_r0x00020f2e:
    if (puVar6 != NULL) {
        puVar13 = puVar6 + 0x1fU & 0xfffffffffffffffc;
        if (puVar13 < puVar6[4] + puVar6) {
            do {
                if (((*(puVar13 + 4) == *(arg2 + 4)) && (*(puVar13 + 6) == *(arg2 + 0xc))) &&
                   (puVar13[1] == *(arg2 + 0x14))) {
                    puVar14 = puVar13 + 8;
                    for (piVar8 = arg2 + 0x1a; (*piVar8 != 0 && (*piVar8 == *puVar14)); piVar8 = piVar8 + 1) {
                        puVar14 = puVar14 + 2;
                    }
                    if (*piVar8 == *puVar14) goto code_r0x00020faf;
                }
                puVar13 = puVar13 + puVar13[2] + puVar13[3] + 0x23 & 0xfffffffffffffffc;
            } while (puVar13 < puVar6[4] + puVar6);
        }
        puVar13 = puVar12;
code_r0x00020faf:
        if (puVar13 != NULL) {
            uVar1 = *(arg3 + 8);
            if (in_stack_00000030 == '\0') {
                puVar6 = puVar12;
                uVar10 = uVar1;
            }
            else {
                puVar12 = in_stack_00000028 + -1 + (uVar1 & 7);
                in_stack_00000028 = (puVar12 >> 3) + 1;
                puVar6 = uVar1 & 7;
                uVar10 = uVar1 >> 3;
            }
            if (puVar13[3] < uVar10 + in_stack_00000028) {
                return 0x8000000000000002;
            }
            if (arg4 != NULL) {
                if (in_stack_00000030 == '\0') {
                    puVar13 = puVar13 + puVar13[2] + uVar1 + 0x20;
                    if (in_stack_00000028 == 0) {
                        return 0;
                    }
                    if (arg4 == puVar13) {
                        return 0;
                    }
                }
                else {
                    puVar13 = puVar13 + puVar13[2] + uVar10 + 0x20;
                    if ((in_stack_00000028 != 0) && (&uStack_38 != puVar13)) {
                        section..text(&uStack_38,puVar13,in_stack_00000028);
                    }
                    auStack_34[0] = (~(-2LL << (puVar12 & 0x3f)) & uStack_38) >> puVar6;
                    if (in_stack_00000028 == 0) {
                        return 0;
                    }
                    if (arg4 == auStack_34) {
                        return 0;
                    }
                    puVar13 = auStack_34;
                }
                section..text(arg4,puVar13,in_stack_00000028);
            }
            return 0;
        }
    }
    return 0x800000000000000e;
code_r0x00020e8a:
    puVar14 = puVar14 + 4;
    goto code_r0x00020e8e;
}


/* fcn.00022acc @ 0x22acc */

ulong fcn.00022acc(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int iVar1;
    uint32_t *puVar2;
    ulong uVar3;
    uint32_t arg1_00;
    uint in_R8;
    int64_t iVar4;
    ulong uStackX_10;
    
    iVar4 = CONCAT44(in_R8,arg3);
    if (((arg1 == 0) || (iVar4 == 0)) || (*(iVar4 + 0x80) != 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uStackX_10 = arg2;
        iVar1 = fcn.000262b8(arg1);
        arg1_00 = iVar1 + 4;
        puVar2 = fcn.000260fc(4,arg1_00);
        *(iVar4 + 0x80) = puVar2;
        if (puVar2 == NULL) {
            uVar3 = 0x8000000000000009;
        }
        else {
            uStackX_10 = CONCAT44(uStackX_10._4_4_,arg1_00) & 0xffffffff00ffffff | 0x8000000;
            if (puVar2 != &uStackX_10) {
                section..text(puVar2,&uStackX_10,4);
            }
            puVar2 = *(iVar4 + 0x80) + 4;
            if ((arg1_00 - 4 != 0) && (puVar2 != arg1)) {
                section..text(puVar2,arg1,arg1_00 - 4);
            }
            *(iVar4 + 0x10) = *(iVar4 + 0x10) + arg1_00;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00022d38 @ 0x22d38 */

void fcn.00022d38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    unkbyte7 Var2;
    int64_t in_stack_00000018;
    
    Var2 = arg4 >> 8;
    if (arg3 != 0) {
        iVar1 = fcn.00022acc(arg3,arg2,*(arg4 + 8));
        if (-1 < iVar1) {
            fcn.000207ec(arg1,arg2,*(*(arg4 + 8) + 0x80),CONCAT71(Var2,8),in_stack_00000018);
        }
    }
    return;
}


/* fcn.000225b0 @ 0x225b0 */

//WARNING: Type propagation algorithm not settling

ulong fcn.000225b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t *arg1_00;
    uint32_t *puVar2;
    uint32_t arg1_01;
    uint64_t arg3_00;
    uint32_t arg1_02;
    uint16_t *arg2_00;
    uint16_t uVar3;
    uint32_t *puVar4;
    uint32_t auStack_48 [4];
    
    arg1_01 = 0;
    if ((arg3 == 0) || (*(arg3 + 0x68) != 0)) {
        return 0x8000000000000002;
    }
    arg1_00 = fcn.000260fc(4,0x28);
    if (arg1_00 == NULL) {
        return 0x8000000000000009;
    }
    if (arg1_00 != arg1) {
        section..text(arg1_00,arg1,0xc);
    }
    uVar1 = arg1_00[1];
    arg1_00[8] = 0;
    arg1_00[9] = 0;
    if (arg1_00[2] != 0) {
        puVar4 = arg1_00[2] + arg1;
        arg3_00 = 2;
        uVar3 = 0;
        arg2_00 = puVar4 + 2;
        if (*puVar4 != 0) {
            do {
                if (auStack_48 != arg2_00) {
                    section..text(auStack_48,arg2_00,2);
                }
                auStack_48[0]._0_2_ = auStack_48[0] + 2;
                uVar3 = uVar3 + 1;
                arg3_00 = arg3_00 + auStack_48[0];
                arg2_00 = arg2_00 + auStack_48[0];
            } while (uVar3 < *puVar4);
        }
        arg1_01 = arg3_00;
        puVar2 = fcn.000260fc(4,arg1_01);
        *(arg1_00 + 8) = puVar2;
        if (puVar2 == NULL) goto code_r0x000226c5;
        if ((arg1_01 != 0) && (puVar2 != puVar4)) {
            section..text(puVar2,puVar4,arg3_00);
        }
    }
    arg1_00[6] = 0;
    arg1_00[7] = 0;
    arg1_02 = 0;
    if (uVar1 != 0) {
        arg1_02 = ((*arg1_00 & 0xffffff) - arg1_01) - 0xc;
        puVar4 = fcn.000260fc(4,arg1_02);
        *(arg1_00 + 6) = puVar4;
        if (puVar4 == NULL) {
            (**(*0x27020 + 0x48))(*(arg1_00 + 8));
code_r0x000226c5:
            (**(*0x27020 + 0x48))(arg1_00);
            return 0x8000000000000009;
        }
        puVar2 = arg1 + uVar1;
        if ((arg1_02 != 0) && (puVar4 != puVar2)) {
            section..text(puVar4,puVar2,arg1_02);
        }
    }
    arg1_00[3] = arg1_02;
    arg1_00[4] = arg1_01;
    *(arg3 + 0x68) = arg1_00;
    *arg4 = arg1_00;
    if (arg2 == 8) {
        *(arg3 + 0x10) = *(arg3 + 0x10) + (*arg1_00 & 0xffffff);
    }
    return 0;
}


/* fcn.0002206c @ 0x2206c */

int64_t fcn.0002206c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *puVar2;
    char cVar3;
    uint32_t arg1_00;
    uint32_t uVar4;
    uint32_t *arg1_01;
    uint *arg2_00;
    ulong *arg1_02;
    uint32_t *arg1_03;
    ulong *puVar5;
    int64_t iVar6;
    uint32_t unaff_R13D;
    uint32_t auStackX_10 [2];
    ulong *in_stack_00000028;
    uint32_t auStackY_38 [4];
    
    if ((arg2 == 0) || (arg4 == 0)) {
        return -0x7ffffffffffffffe;
    }
    if (auStackY_38 != arg2) {
        section..text(auStackY_38,arg2,4);
    }
    if (auStackX_10 != arg2 + 4) {
        section..text(auStackX_10,arg2 + 4,4);
    }
    arg1_02 = NULL;
    arg1_01 = fcn.000260fc(4,auStackX_10[0]);
    if (arg1_01 == NULL) {
        return -0x7ffffffffffffff7;
    }
    if ((auStackX_10[0] != 0) && (arg1_01 != arg2)) {
        section..text(arg1_01,arg2,auStackX_10[0]);
    }
    arg1_00 = auStackX_10[0] - 0x14;
    arg2_00 = fcn.000260fc(4,arg1_00);
    if (arg2_00 != NULL) {
        *arg2_00 = *(arg1_01 + 0x16);
        *(arg2_00 + 1) = *(arg1_01 + 0xe);
        fcn.00024a2c(arg2_00 + 6,arg1_00 - 6 >> 1,arg1_01 + 0x1a);
        cVar3 = fcn.00019b84(arg1,arg2_00,0,0);
        if (cVar3 != '\0') {
            iVar6 = -0x7ffffffffffffffd;
            goto code_r0x00022142;
        }
        arg1_02 = fcn.000260fc(4,0x40);
        if (arg1_02 != NULL) {
            *arg1_02 = 0x70666968;
            arg1_02[1] = arg1_01;
            puVar5 = arg1_02 + 6;
            *puVar5 = puVar5;
            arg1_02[7] = puVar5;
            arg1_03 = fcn.000260fc(4,(auStackY_38[0] & 0xffffff) - auStackX_10[0]);
            arg1_02[3] = arg1_03;
            if (arg1_03 != NULL) {
                uVar4 = (auStackY_38[0] & 0xffffff) - auStackX_10[0];
                if ((uVar4 != 0) && (arg1_03 != auStackX_10[0] + arg2)) {
                    section..text(arg1_03,auStackX_10[0] + arg2,uVar4);
                }
                iVar6 = fcn.00019300(arg1_02,0xffff,0,0,unaff_R13D);
                if (iVar6 < 0) goto code_r0x00022142;
                puVar5 = fcn.000260fc(4,0x30);
                if (puVar5 != NULL) {
                    *puVar5 = 0x69666768;
                    piVar1 = puVar5 + 1;
                    puVar5[3] = arg1_02;
                    puVar5[4] = arg1_00;
                    puVar5[5] = arg2_00;
                    *piVar1 = arg1 + 0x178;
                    puVar2 = *(arg1 + 0x180);
                    puVar5[2] = puVar2;
                    *puVar2 = piVar1;
                    *(arg1 + 0x180) = piVar1;
                    piVar1 = arg1_02 + 4;
                    *piVar1 = arg4 + 0x58;
                    puVar5 = *(arg4 + 0x60);
                    arg1_02[5] = puVar5;
                    *puVar5 = piVar1;
                    *(arg4 + 0x60) = piVar1;
                    *in_stack_00000028 = arg1_02;
                    if (arg3 == 8) {
                        *(arg4 + 0x10) = *(arg4 + 0x10) + (*arg1_02[1] & 0xffffff);
                    }
                    return 0;
                }
            }
        }
    }
    iVar6 = -0x7ffffffffffffff7;
code_r0x00022142:
    (**(*0x27020 + 0x48))(arg1_01);
    if (arg2_00 != NULL) {
        (**(*0x27020 + 0x48))(arg2_00);
    }
    if (arg1_02 != NULL) {
        if (arg1_02[3] != 0) {
            (**(*0x27020 + 0x48))();
        }
        (**(*0x27020 + 0x48))(arg1_02);
    }
    return iVar6;
}


/* fcn.00021a88 @ 0x21a88 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00021a88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t *piVar3;
    char cVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t unaff_R12;
    int64_t unaff_R13;
    int64_t unaff_R14;
    int64_t unaff_R15;
    uint32_t auStackX_10 [2];
    ulong *in_stack_00000028;
    int64_t var_38h;
    uint32_t auStackY_38 [4];
    int64_t var_10h;
    
    if (((arg2 == 0) || (arg4 == 0)) || (*arg1 != 0x70446948)) {
        iVar6 = -0x7ffffffffffffffe;
    }
    else {
        if (auStackY_38 != arg2) {
            section..text(auStackY_38,arg2,4);
        }
        if (auStackX_10 != arg2 + 4) {
            section..text(auStackX_10,arg2 + 4,4);
        }
        uVar5 = auStackX_10[0] - 0x2e;
        iVar6 = fcn.000260fc(4,uVar5);
        if (iVar6 != 0) {
            fcn.00024dc4(iVar6,uVar5,(auStackX_10[0] - uVar5) + arg2);
            puVar1 = arg4 + 0x48;
            for (puVar7 = *puVar1; puVar7 != puVar1; puVar7 = *puVar7) {
                cVar4 = fcn.000188e4(iVar6,puVar7[-2] + 0x2e);
                if (cVar4 != '\0') {
                    (**(*0x27020 + 0x48))(iVar6);
                    return -0x7ffffffffffffffd;
                }
            }
            (**(*0x27020 + 0x48))(iVar6);
            puVar7 = fcn.000260fc(4,0x40);
            if (puVar7 != NULL) {
                iVar6 = fcn.000260fc(4,auStackX_10[0]);
                puVar7[1] = iVar6;
                if (iVar6 != 0) {
                    iVar6 = fcn.000260fc(4,(auStackY_38[0] & 0xffffff) - auStackX_10[0]);
                    puVar7[2] = iVar6;
                    if (iVar6 != 0) {
                        *puVar7 = 0x70736968;
                        puVar2 = puVar7 + 5;
                        *(puVar7 + 7) = 0;
                        *puVar2 = puVar2;
                        puVar7[6] = puVar2;
                        uVar8 = auStackX_10[0];
                        if ((auStackX_10[0] != 0) && (puVar7[1] != arg2)) {
                            section..text(puVar7[1],arg2,auStackX_10[0]);
                            uVar8 = auStackX_10[0];
                        }
                        uVar5 = (auStackY_38[0] & 0xffffff) - uVar8;
                        if ((uVar5 != 0) && (puVar7[2] != uVar8 + arg2)) {
                            section..text(puVar7[2],uVar8 + arg2,uVar5);
                        }
                        iVar6 = fcn.00016858(arg1,puVar7,0xffff,0,unaff_R15,unaff_R14,unaff_R13,unaff_R12);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        piVar3 = puVar7 + 3;
                        *piVar3 = puVar1;
                        puVar1 = *(arg4 + 0x50);
                        puVar7[4] = puVar1;
                        *puVar1 = piVar3;
                        *(arg4 + 0x50) = piVar3;
                        *in_stack_00000028 = puVar7;
                        if (arg3 == 8) {
                            *(arg4 + 0x10) = *(arg4 + 0x10) + (*puVar7[1] & 0xffffff);
                        }
                        return 0;
                    }
                }
                if (puVar7[2] != 0) {
                    (**(*0x27020 + 0x48))();
                }
                if (puVar7[1] != 0) {
                    (**(*0x27020 + 0x48))();
                }
                (**(*0x27020 + 0x48))(puVar7);
            }
        }
        iVar6 = -0x7ffffffffffffff7;
    }
    return iVar6;
}


/* fcn.000210d0 @ 0x210d0 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

void fcn.000210d0(int64_t arg1)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint8_t *arg3;
    uint32_t *arg1_00;
    uint64_t uVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    uint8_t *puVar11;
    uint32_t *arg2;
    uint8_t uVar12;
    uint8_t uVar13;
    uint8_t *puVar14;
    uint8_t *arg3_00;
    uint8_t uStackX_10;
    uint8_t uStackX_18;
    int8_t var_6fh;
    int8_t var_77h;
    uint32_t var_7fh;
    uint8_t uStack_d8;
    uint8_t *puStack_d0;
    uint8_t *puStack_c8;
    int64_t iStack_c0;
    uint8_t *puStack_b8;
    uint8_t *puStack_b0;
    uint8_t *puStack_a8;
    uint8_t *puStack_a0;
    uint8_t *puStack_98;
    uint64_t uStack_90;
    char acStack_88 [7];
    int8_t var_79h;
    int32_t var_75h;
    uint32_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    uint32_t var_29h;
    uint32_t var_11h;
    int64_t var_9h;
    
    puVar10 = NULL;
    if (*0x26ff8 == 0) {
        iVar4 = fcn.000249bc();
        *0x26ff8 = (**(iVar4 + 0x38))(0x26610,0x30005);
    }
    if (0xf < *0x26ff8) {
        fcn.000102c0(&var_61h + 1,0xb);
        uVar12 = 0;
        bVar2 = false;
        arg2 = *(arg1 + 0x10);
        *NULL = (*(arg1 + 8) & 0xffffff) - 4;
        uStack_90 = 0;
        uStack_d8 = 0;
        puStack_c8 = NULL;
        uStackX_10 = 0;
        puStack_98 = NULL;
        puStack_a8 = NULL;
        puStack_a0 = NULL;
        puStack_d0 = NULL;
        puStack_b8 = NULL;
        iStack_c0 = 0;
        bVar1 = false;
        bVar3 = false;
        uStackX_18 = 0;
        puVar11 = puVar10;
        puVar6 = puVar10;
        uVar13 = uVar12;
        puVar14 = puVar10;
        arg3 = puVar10;
        arg3_00 = puVar10;
        if (*NULL != 0) {
            do {
                uVar8 = *arg2;
                if (uVar8 < 0x27) {
                    if (uVar8 == 0x26) {
                        if (puStack_98 <= puVar14) {
                            arg3 = fcn.000261ac(0x26,puStack_98 * 8,puStack_98 * 8 + 0x50,arg3);
                            if (arg3 == NULL) {
                                return;
                            }
                            puStack_98 = puStack_98 + 10;
                            puStack_b8 = arg3;
                        }
                        puVar11 = arg2 + 0x1a;
                        uVar12 = *puVar11;
                        puVar6 = puVar10;
                        while (uVar12 != 0) {
                            puVar6 = puVar6 + 1;
                            uVar12 = puVar11[puVar6];
                        }
                        arg1_00 = fcn.000260c8(puVar6 + (*(arg2 + 1) & 0x7f) + 1);
                        *(arg3 + puVar14 * 8) = arg1_00;
                        if (arg1_00 != NULL) {
                            if (((*(arg2 + 1) & 0x7f) != 0) && (arg1_00 != arg2)) {
                                section..text(arg1_00,arg2,*(arg2 + 1) & 0x7f);
                            }
                            uVar12 = *puVar11;
                            puVar6 = puVar10;
                            while (uVar12 != 0) {
                                puVar6 = puVar6 + 1;
                                uVar12 = puVar11[puVar6];
                            }
                            fcn.00024eec(puVar11,*(arg3 + puVar14 * 8) + 0x1a,puVar6 * 2 + 2);
                            iVar4 = fcn.00020d18(0,*(arg3 + puVar14 * 8),&var_61h + 1,NULL);
                            if (iVar4 < 0) {
                                (**(*0x27020 + 0x48))(*(arg3 + puVar14 * 8));
                                puVar11 = arg3 + puVar14 * 8;
                                puVar11[0] = 0;
                                puVar11[1] = 0;
                                puVar11[2] = 0;
                                puVar11[3] = 0;
                                puVar11[4] = 0;
                                puVar11[5] = 0;
                                puVar11[6] = 0;
                                puVar11[7] = 0;
                            }
                            else {
                                puVar14 = puVar14 + 1;
                                puStack_a8 = puVar14;
                            }
                        }
code_r0x0002142f:
                        uVar12 = uStackX_18;
                        bVar2 = bVar3;
                    }
                    else {
                        if (uVar8 == 1) {
code_r0x000216b9:
                            if ((puVar14 != NULL) && (puVar11 != NULL)) goto code_r0x0002181c;
                            break;
                        }
                        if (uVar8 == 5) {
                            puStack_c8 = arg2 + 2;
                            uStack_d8 = *(arg2 + 1) >> 7;
                            if (uVar12 == 0) {
                                uVar9 = 1 << (*(arg2 + 0xd) & 3);
                            }
                            else {
                                uVar9 = *(arg2 + 0xd) & 0x3f;
                            }
                            puStack_b0 = uVar9;
                            if (puVar14 != NULL) {
                                puVar11 = puVar10;
                                do {
                                    if (arg2[2] == *(*(arg3 + puVar11 * 8) + 2)) goto code_r0x000214a3;
                                    puVar11 = puVar11 + 1;
                                } while (puVar11 < puVar14);
                            }
                            puVar11 = puVar14;
code_r0x000214a3:
                            bVar1 = false;
                            bVar2 = false;
                            bVar3 = false;
                            arg3_00 = puStack_b0;
                            uStackX_10 = uVar8;
                            if (puVar11 < puVar14) {
                                puVar6 = puVar10;
                                if (puStack_d0 != NULL) {
                                    do {
                                        if (*(iStack_c0 + puVar6 * 2) == 0) {
                                            iVar4 = fcn.00020d18(0,*(puStack_b8 + puVar11 * 8),puStack_c8,acStack_88)
                                            ;
                                            if (-1 < iVar4) {
                                                bVar1 = true;
                                            }
                                        }
                                        else if (*(iStack_c0 + puVar6 * 2) == 1) {
                                            iVar4 = fcn.00020d18(1,*(puStack_b8 + puVar11 * 8),puStack_c8,
                                                                 &var_51h + 1);
                                            if (-1 < iVar4) {
                                                bVar3 = true;
                                            }
                                        }
                                        puVar6 = puVar6 + 1;
                                    } while (puVar6 < puStack_d0);
                                    goto code_r0x00021423;
                                }
code_r0x00021814:
                                puStack_c8 = arg2 + 2;
                                arg3 = puStack_b8;
                                uStackX_10 = uVar8;
                            }
                        }
                        else {
                            if (uVar8 != 6) {
                                if (uVar8 == 7) {
                                    puStack_c8 = arg2 + 2;
                                    uStack_d8 = *(arg2 + 1) >> 7;
                                    puVar6 = puStack_c8;
                                    if (uVar12 == 0) {
                                        arg3_00 = 1 << (*(arg2 + 0xd) & 3);
                                        uVar13 = uVar8;
                                        uStackX_10 = uVar8;
                                    }
                                    else {
                                        arg3_00 = *(arg2 + 0xd) & 0x3f;
                                        uVar13 = uVar8;
                                        uStackX_10 = uVar8;
                                    }
                                }
                                else if (uVar8 == 9) {
                                    if (puVar6 != NULL) {
                                        if (uStack_d8 != 0) {
                                            if (uVar13 == 5) {
                                                uVar9 = 1 << (arg2[1] & 3);
                                                arg3_00 = uVar9;
                                                if (bVar1) {
                                                    if ((uVar9 == 0) || (arg2 + 6 == acStack_88)) {
                                                        puVar5 = puVar10;
                                                    }
                                                    else {
                                                        puVar5 = fcn.000102e0(arg2 + 6,acStack_88,arg3_00);
                                                        puVar6 = puStack_c8;
                                                        uVar12 = uStackX_18;
                                                        uVar13 = uStackX_10;
                                                        bVar2 = bVar3;
                                                    }
                                                    if (puVar5 == NULL) {
                                                        *(arg2 + 1) = arg2[1] | 0x10;
                                                    }
                                                    else {
                                                        *(arg2 + 1) = arg2[1] & 0xef;
                                                    }
                                                }
                                                if (bVar2) {
                                                    if ((arg3_00 == NULL) || (arg2 + 6 == &var_51h + 1)) {
                                                        puVar6 = puVar10;
                                                    }
                                                    else {
                                                        puVar6 = fcn.000102e0(arg2 + 6,&var_51h + 1,arg3_00);
                                                        bVar2 = bVar3;
                                                    }
                                                    if (puVar6 == NULL) {
                                                        *(arg2 + 1) = arg2[1] | 0x20;
                                                        puVar6 = puStack_c8;
                                                        uVar12 = uStackX_18;
                                                        uVar13 = uStackX_10;
                                                    }
                                                    else {
                                                        *(arg2 + 1) = arg2[1] & 0xdf;
                                                        puVar6 = puStack_c8;
                                                        uVar12 = uStackX_18;
                                                        uVar13 = uStackX_10;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                else if (uVar8 == 0x23) {
                                    puStack_c8 = arg2 + 2;
                                    puVar6 = puStack_c8;
                                    uVar13 = uVar8;
                                    uStackX_10 = uVar8;
                                    uStack_d8 = *(arg2 + 1) >> 7;
                                }
                                goto code_r0x0002181c;
                            }
                            puStack_c8 = arg2 + 2;
                            uStack_d8 = *(arg2 + 1) >> 7;
                            if (puVar14 != NULL) {
                                puVar11 = puVar10;
                                do {
                                    if (arg2[2] == *(*(arg3 + puVar11 * 8) + 2)) goto code_r0x00021343;
                                    puVar11 = puVar11 + 1;
                                } while (puVar11 < puVar14);
                            }
                            puVar11 = puVar14;
code_r0x00021343:
                            puStack_b0 = 0x1;
                            arg3_00 = 0x1;
                            uStackX_10 = uVar8;
                            if (puVar11 < puVar14) {
                                puVar6 = puVar10;
                                if (puStack_d0 == NULL) goto code_r0x00021814;
                                do {
                                    if (*(iStack_c0 + puVar6 * 2) == 0) {
                                        iVar4 = fcn.00020d18(0,*(puStack_b8 + puVar11 * 8),puStack_c8,acStack_88);
                                        if (-1 < iVar4) {
                                            if (acStack_88[0] == '\0') {
                                                *(arg2 + 0xd) = *(arg2 + 0xd) & 0xfe;
                                            }
                                            else {
                                                *(arg2 + 0xd) = *(arg2 + 0xd) | 1;
                                            }
                                        }
                                    }
                                    else if ((*(iStack_c0 + puVar6 * 2) == 1) &&
                                            (iVar4 = fcn.00020d18(1,*(puStack_b8 + puVar11 * 8),puStack_c8,acStack_88
                                                                 ), -1 < iVar4)) {
                                        if (acStack_88[0] == '\0') {
                                            *(arg2 + 0xd) = *(arg2 + 0xd) & 0xfd;
                                        }
                                        else {
                                            *(arg2 + 0xd) = *(arg2 + 0xd) | 2;
                                        }
                                    }
                                    puVar6 = puVar6 + 1;
                                } while (puVar6 < puStack_d0);
code_r0x00021423:
                                puStack_c8 = arg2 + 2;
                                puVar14 = puStack_a8;
                                arg3 = puStack_b8;
                                arg3_00 = puStack_b0;
                                uStackX_10 = uVar8;
                                goto code_r0x0002142f;
                            }
                        }
                    }
                    puVar11 = puStack_d0;
                    puVar6 = puStack_c8;
                    uVar13 = uStackX_10;
                }
                else if (uVar8 == 0x29) {
                    if (puVar6 != NULL) {
                        uVar8 = uStack_d8 - 1;
                        if (uStack_d8 == 0) {
                            uVar8 = uStack_d8;
                        }
                        uStack_d8 = uVar8;
                        if (uVar8 == 0) {
                            puVar6 = NULL;
                            puStack_c8 = NULL;
                            uVar12 = 0;
                            uStackX_18 = 0;
                            uStack_d8 = 0;
                        }
                    }
                }
                else if (uVar8 == 0x5b) {
                    if (puVar6 != NULL) {
                        if (uStack_d8 != 0) {
                            if (uVar12 == 0) {
                                uVar8 = arg2[1];
                                arg3_00 = NULL;
                                if ((uVar8 & 0xfb) == 0) {
                                    arg3_00 = 0x1;
                                    goto code_r0x00021788;
                                }
                                if (uVar8 == 1) {
                                    arg3_00 = 0x2;
                                }
                                else if (uVar8 == 2) {
                                    arg3_00 = 0x4;
                                }
                                else {
                                    if (uVar8 != 3) {
                                        if (uVar8 != 0xb) goto code_r0x0002181c;
                                        arg3_00 = (*(arg2 + 1) & 0x7f) - 5;
                                        goto code_r0x00021788;
                                    }
                                    arg3_00 = 0x8;
                                }
                            }
                            else {
code_r0x00021788:
                                if (arg3_00 == NULL) goto code_r0x0002181c;
                            }
                            if (puVar14 != NULL) {
                                puVar5 = puVar10;
                                do {
                                    if (*(puVar6 + 6) == *(*(arg3 + puVar5 * 8) + 2)) goto code_r0x000217b3;
                                    puVar5 = puVar5 + 1;
                                } while (puVar5 < puVar14);
                            }
                            puVar5 = puVar14;
code_r0x000217b3:
                            if (puVar5 < puVar14) {
                                fcn.00020d18(*(arg2 + 2),*(arg3 + puVar5 * 8),puVar6,arg2 + 5);
                                puVar6 = puStack_c8;
                                uVar12 = uStackX_18;
                                uVar13 = uStackX_10;
                                bVar2 = bVar3;
                            }
                        }
                    }
                }
                else if (uVar8 == 0x5c) {
                    if (puStack_a0 <= puVar11) {
                        iStack_c0 = fcn.000261ac(puStack_a0,puStack_a0 * 2,puStack_a0 * 2 + 0x14,iStack_c0);
                        if (iStack_c0 == 0) break;
                        puStack_a0 = puStack_a0 + 10;
                        puVar6 = puStack_c8;
                        uVar12 = uStackX_18;
                        uVar13 = uStackX_10;
                        bVar2 = bVar3;
                    }
                    *(iStack_c0 + puVar11 * 2) = arg2[1];
                    puVar11 = puVar11 + 1;
                    puStack_d0 = puVar11;
                }
                else {
                    if (uVar8 == 0x5d) goto code_r0x000216b9;
                    if (uVar8 == 0x5f) {
                        if (*(arg2 + 2) == *0x26650) {
                            if (*(arg2 + 10) == *0x26658) {
                                uStackX_18 = 1;
                                uVar12 = uStackX_18;
                            }
                        }
                    }
                }
code_r0x0002181c:
                uVar7 = *(arg2 + 1) & 0x7f;
                uStack_90 = uStack_90 + uVar7;
                arg2 = arg2 + uVar7;
                if (uStack_d8 != 0) {
                    uStack_d8 = uStack_d8 - (*(arg2 + 1) >> 7);
                }
            } while (uStack_90 < stack0xffffffffffffff90);
            if ((arg3 != NULL) && (puVar14 != NULL)) {
                do {
                    (**(*0x27020 + 0x48))(*(arg3 + puVar10 * 8));
                    puVar10 = puVar10 + 1;
                } while (puVar10 < puVar14);
            }
        }
    }
    return;
}


/* fcn.00021d04 @ 0x21d04 */

ulong fcn.00021d04(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint32_t *arg1_00;
    int64_t *piVar4;
    uint32_t uVar5;
    uint32_t *arg1_01;
    uint16_t uVar6;
    uint32_t auStackX_8 [2];
    
    piVar1 = arg1 + 0x48;
    uVar6 = 0;
    piVar4 = *piVar1;
    piVar3 = piVar4;
    if (piVar4 != piVar1) {
        do {
            if (uVar6 < *(piVar3 + 0x22)) {
                uVar6 = *(piVar3 + 0x22);
            }
            piVar3 = *piVar3;
        } while (piVar3 != piVar1);
        for (; piVar4 != piVar1; piVar4 = *piVar4) {
            if (*(piVar4 + 0x22) < uVar6) {
                uVar5 = (*piVar4[-2] & 0xffffff) - piVar4[-2][1];
                auStackX_8[0]._0_2_ = uVar6 - *(piVar4 + 0x22);
                arg1_00 = fcn.000260fc(4,uVar5 + 3);
                if (arg1_00 == NULL) {
                    return 0x8000000000000009;
                }
                iVar2 = uVar5 - 1;
                if ((iVar2 != 0) && (arg1_00 != piVar4[-1])) {
                    section..text(arg1_00,piVar4[-1],iVar2);
                }
                arg1_01 = uVar5 + arg1_00;
                *(arg1_01 + -1) = 0x21;
                if (arg1_01 != auStackX_8) {
                    section..text(arg1_01,auStackX_8,2);
                }
                iVar2 = *0x27020;
                *(arg1_01 + 2) = 0;
                (**(iVar2 + 0x48))(piVar4[-1]);
                piVar4[-1] = arg1_00;
                uVar5 = *piVar4[-2];
                *piVar4[-2] = (uVar5 + 3 ^ uVar5) & 0xffffff ^ uVar5;
                *(arg1 + 0x10) = *(arg1 + 0x10) + 3;
                *(piVar4 + 0x22) = uVar6;
            }
        }
    }
    return 0;
}


/* fcn.00020b2c @ 0x20b2c */

ulong fcn.00020b2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t unaff_RDI;
    unkbyte7 Var4;
    ulong *puVar5;
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint32_t in_stack_00000038;
    uint in_stack_0000003c;
    
    Var4 = arg4 >> 8;
    piVar1 = CONCAT44(in_stack_0000003c,in_stack_00000038);
    iVar3 = 0;
    if ((piVar1 == NULL) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar2 = 0x8000000000000002;
    }
    else {
        for (puVar5 = *(arg3 + 0x18); puVar5 != arg3 + 0x18; puVar5 = *puVar5) {
            if (&stack0x00000038 != puVar5[-1]) {
                section..text(&stack0x00000038,puVar5[-1],4);
            }
            iVar3 = iVar3 + (in_stack_00000038 & 0xffffff);
            if (*piVar1 + iVar3 + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,puVar5 + -2,CONCAT71(Var4,1),unaff_RDI);
                if (((in_stack_00000038 & 0xffffff) != 0) && (in_stack_00000030 != puVar5[-1])) {
                    section..text(in_stack_00000030,puVar5[-1],in_stack_00000038 & 0xffffff);
                }
                in_stack_00000030 = in_stack_00000030 + (in_stack_00000038 & 0xffffff);
            }
        }
        *piVar1 = *piVar1 + iVar3;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00022d9c @ 0x22d9c */

ulong fcn.00022d9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t unaff_RDI;
    unkbyte7 Var3;
    ulong *puVar4;
    uint32_t auStackX_18 [4];
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    Var3 = arg4 >> 8;
    iVar2 = 0;
    if (((arg3 == 0) || (in_stack_00000038 == NULL)) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        for (puVar4 = *(arg3 + 0x38); puVar4 != arg3 + 0x38; puVar4 = *puVar4) {
            if (auStackX_18 != puVar4[-1]) {
                section..text(auStackX_18,puVar4[-1],4);
            }
            iVar2 = iVar2 + (auStackX_18[0] & 0xffffff);
            if (*in_stack_00000038 + iVar2 + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,puVar4 + -2,CONCAT71(Var3,9),unaff_RDI);
                if (((auStackX_18[0] & 0xffffff) != 0) && (in_stack_00000030 != puVar4[-1])) {
                    section..text(in_stack_00000030,puVar4[-1],auStackX_18[0] & 0xffffff);
                }
                in_stack_00000030 = in_stack_00000030 + (auStackX_18[0] & 0xffffff);
            }
        }
        *in_stack_00000038 = *in_stack_00000038 + iVar2;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00021e38 @ 0x21e38 */

ulong fcn.00021e38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int64_t unaff_RSI;
    ulong *puVar4;
    uint32_t uVar5;
    unkbyte7 Var6;
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    Var6 = arg4 >> 8;
    if (((arg3 == 0) || (in_stack_00000038 == NULL)) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar3 = 0;
        for (puVar4 = *(arg3 + 0x48); puVar4 != arg3 + 0x48; puVar4 = *puVar4) {
            iVar3 = iVar3 + (*puVar4[-2] & 0xffffff);
            if (*in_stack_00000038 + iVar3 + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,puVar4 + -3,CONCAT71(Var6,4),unaff_RSI);
                puVar2 = puVar4[-2];
                if ((puVar2[1] != 0) && (in_stack_00000030 != puVar2)) {
                    section..text(in_stack_00000030,puVar2,puVar2[1]);
                }
                uVar5 = puVar4[-2][1];
                puVar2 = in_stack_00000030 + uVar5;
                uVar5 = (*puVar4[-2] & 0xffffff) - uVar5;
                if ((uVar5 != 0) && (puVar2 != puVar4[-1])) {
                    section..text(puVar2,puVar4[-1],uVar5);
                }
                in_stack_00000030 = puVar2 + ((*puVar4[-2] & 0xffffff) - puVar4[-2][1]);
            }
        }
        *in_stack_00000038 = *in_stack_00000038 + iVar3;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00022324 @ 0x22324 */

ulong fcn.00022324(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int64_t unaff_RSI;
    ulong *puVar4;
    uint32_t uVar5;
    unkbyte7 Var6;
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    Var6 = arg4 >> 8;
    if (((arg3 == 0) || (in_stack_00000038 == NULL)) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar3 = 0;
        for (puVar4 = *(arg3 + 0x58); puVar4 != arg3 + 0x58; puVar4 = *puVar4) {
            iVar3 = iVar3 + (*puVar4[-3] & 0xffffff);
            if (*in_stack_00000038 + iVar3 + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,puVar4 + -4,CONCAT71(Var6,5),unaff_RSI);
                puVar2 = puVar4[-3];
                if ((puVar2[1] != 0) && (in_stack_00000030 != puVar2)) {
                    section..text(in_stack_00000030,puVar2,puVar2[1]);
                }
                uVar5 = puVar4[-3][1];
                puVar2 = in_stack_00000030 + uVar5;
                uVar5 = (*puVar4[-3] & 0xffffff) - uVar5;
                if ((uVar5 != 0) && (puVar2 != puVar4[-1])) {
                    section..text(puVar2,puVar4[-1],uVar5);
                }
                in_stack_00000030 = puVar2 + ((*puVar4[-3] & 0xffffff) - puVar4[-3][1]);
            }
        }
        *in_stack_00000038 = *in_stack_00000038 + iVar3;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0002278c @ 0x2278c */

ulong fcn.0002278c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t *arg3_00;
    uint32_t *arg1_00;
    int64_t unaff_RSI;
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    if (((arg3 != 0) && (in_stack_00000038 != NULL)) && ((in_stack_00000028 == 0 || (in_stack_00000030 != NULL)))) {
        arg3_00 = *(arg3 + 0x68);
        if (arg3_00 != NULL) {
            uVar1 = *arg3_00;
            if (*in_stack_00000038 + (uVar1 & 0xffffff) + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,arg3_00,CONCAT71(arg4 >> 8,6),unaff_RSI);
                if (in_stack_00000030 != arg3_00) {
                    section..text(in_stack_00000030,arg3_00,0xc);
                }
                arg1_00 = in_stack_00000030 + 3;
                if (arg3_00[3] != 0) {
                    if ((arg3_00[3] != 0) && (arg1_00 != *(arg3_00 + 6))) {
                        section..text(arg1_00,*(arg3_00 + 6),arg3_00[3]);
                    }
                    arg1_00 = arg1_00 + arg3_00[3];
                }
                if (arg3_00[4] != 0) {
                    if ((arg3_00[4] != 0) && (arg1_00 != *(arg3_00 + 8))) {
                        section..text(arg1_00,*(arg3_00 + 8),arg3_00[4]);
                    }
                }
            }
            *in_stack_00000038 = *in_stack_00000038 + (uVar1 & 0xffffff);
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00022910 @ 0x22910 */

ulong fcn.00022910(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    ulong uVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t unaff_RDI;
    unkbyte7 Var4;
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    Var4 = arg4 >> 8;
    iVar2 = 0;
    if (((arg3 == 0) || (in_stack_00000038 == NULL)) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        for (puVar3 = *(arg3 + 0x70); puVar3 != arg3 + 0x70; puVar3 = *puVar3) {
            iVar2 = iVar2 + (*puVar3[-1] & 0xffffff);
            if (*in_stack_00000038 + iVar2 + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,puVar3 + -2,CONCAT71(Var4,7),unaff_RDI);
                arg2_00 = puVar3[-1];
                if (((*arg2_00 & 0xffffff) != 0) && (in_stack_00000030 != arg2_00)) {
                    section..text(in_stack_00000030,arg2_00,*arg2_00 & 0xffffff);
                }
                in_stack_00000030 = in_stack_00000030 + (*puVar3[-1] & 0xffffff);
            }
        }
        *in_stack_00000038 = *in_stack_00000038 + iVar2;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00022bac @ 0x22bac */

ulong fcn.00022bac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    ulong uVar1;
    int64_t unaff_RBX;
    unkbyte7 Var2;
    uint32_t auStackX_18 [2];
    uint64_t in_stack_00000028;
    uint32_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    Var2 = arg4 >> 8;
    if (((arg3 == 0) || (in_stack_00000038 == NULL)) || ((in_stack_00000028 != 0 && (in_stack_00000030 == NULL)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        arg2_00 = *(arg3 + 0x80);
        if (arg2_00 != NULL) {
            if (auStackX_18 != arg2_00) {
                section..text(auStackX_18,arg2_00,4);
            }
            if ((auStackX_18[0] & 0xffffff) + *in_stack_00000038 + arg4 <= in_stack_00000028) {
                fcn.000207ec(arg1,4,arg2_00,CONCAT71(Var2,8),unaff_RBX);
                if (((auStackX_18[0] & 0xffffff) != 0) && (in_stack_00000030 != arg2_00)) {
                    section..text(in_stack_00000030,arg2_00,auStackX_18[0] & 0xffffff);
                }
            }
            *in_stack_00000038 = *in_stack_00000038 + (auStackX_18[0] & 0xffffff);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001515c @ 0x1515c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.0001515c(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    bool bVar2;
    bool bVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ushort *puVar8;
    int64_t *arg1_00;
    ushort uVar9;
    int64_t *piVar10;
    int64_t arg1_01;
    uint64_t uVar11;
    int64_t *piVar12;
    uint32_t var_58h;
    uint32_t var_60h;
    uchar *puVar13;
    int64_t iStack_88;
    int64_t *piStack_80;
    int64_t iStack_78;
    uint64_t uStack_70;
    int64_t in_stack_ffffffffffffff98;
    int64_t iStack_60;
    int64_t iStack_58;
    uint32_t var_48h;
    int64_t var_40h;
    uint32_t var_38h;
    uint32_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uVar11 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar5 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = fcn.000260fc(4,0x400);
        *arg2 = iVar5;
        if (iVar5 == 0) {
            iVar5 = -0x7ffffffffffffff7;
        }
        else {
            puVar13 = &stack0xffffffffffffff98;
            uStack_70 = 0;
            iVar5 = (**(*0x27020 + 0x138))(2,0x26620,0,&uStack_70,puVar13);
            if (-1 < iVar5) {
                bVar3 = true;
                if (uStack_70 != 0) {
                    do {
                        iVar5 = (**(*0x27020 + 0x98))(*(in_stack_ffffffffffffff98 + uVar11 * 8),0x26620,&var_48h);
                        piVar10 = NULL;
                        if (-1 < iVar5) {
                            iStack_58 = 0;
                            bVar2 = false;
                            iStack_78 = 0;
                            piStack_80 = NULL;
                            iStack_60 = 0;
                            iVar5 = fcn.00026284(*(in_stack_ffffffffffffff98 + uVar11 * 8));
                            arg1_00 = piVar10;
                            if (iVar5 != 0) {
                                for (puVar1 = *(arg1 + -0x118); puVar1 != arg1 + -0x118; puVar1 = *puVar1) {
                                    arg1_00 = puVar1 + -4;
                                    if (*(puVar1[-3] + 0x80) != 0) {
                                        arg1_01 = *(puVar1[-3] + 0x80) + 4;
                                        iVar6 = fcn.000262b8(arg1_01);
                                        iVar7 = 0;
                                        if ((iVar6 != 0) && (iVar5 != arg1_01)) {
                                            iVar7 = fcn.000102e0(iVar5,arg1_01,iVar6);
                                        }
                                        if (iVar7 == 0) {
                                            iStack_78 = puVar1[-1];
                                            break;
                                        }
                                    }
                                }
                            }
                            iVar6 = (**_var_48h)(_var_48h,0,&iStack_58,&iStack_88);
                            piVar12 = piVar10;
                            if (iVar6 < 0) {
                                if ((iStack_78 != 0) && (piVar12 = NULL, iVar5 != 0)) {
                                    bVar2 = true;
                                    if (arg1_00 == NULL) {
                                        iVar6 = -0x7ffffffffffffffe;
                                    }
                                    else {
                                        puVar13 = NULL;
                                        iVar6 = fcn.00014084(arg1_00,iVar5,&iStack_60,&piStack_80,
                                                             in_stack_ffffffffffffff98);
                                        piVar10 = piStack_80;
                                    }
                                    iVar7 = iStack_60;
                                    piVar12 = piVar10;
                                    if ((iVar6 < 0) || (iStack_60 == 0)) {
                                        iVar6 = -0x7ffffffffffffff2;
                                    }
                                    else {
                                        iVar6 = (**_var_48h)(_var_48h,iStack_60,&iStack_58,&iStack_88,puVar13);
                                        (**(*0x27020 + 0x48))(iVar7);
                                    }
                                }
                                if (iVar6 < 0) goto code_r0x00015458;
                                if (!bVar2) goto code_r0x00015383;
                            }
                            else {
code_r0x00015383:
                                uVar9 = 0;
                                if ((iStack_78 != 0) && (iVar5 != 0)) {
                                    puVar8 = fcn.00024fbc(iStack_88,0x26888);
                                    if (puVar8 != NULL) {
                                        *puVar8 = uVar9;
                                    }
                                    cVar4 = fcn.00011f6c(iStack_88);
                                    if ((cVar4 != '\0') && (arg1_00 != NULL)) {
                                        puVar13 = NULL;
                                        fcn.00014084(arg1_00,iVar5,&iStack_88,&piStack_80,in_stack_ffffffffffffff98)
                                        ;
                                        piVar12 = piStack_80;
                                    }
                                    if (puVar8 != NULL) {
                                        *puVar8 = 0x26;
                                    }
                                }
                            }
                            if (piVar12 != NULL) {
                                if (iStack_88 != 0) {
                                    fcn.00011440(&iStack_88,piVar12);
                                }
                                (**(*0x27020 + 0x48))(piVar12);
                            }
                            if (!bVar3) {
                                fcn.00010980(arg2,0x268a4);
                            }
                            fcn.00010980(arg2,iStack_88);
                            bVar3 = false;
                            (**(*0x27020 + 0x48))(iStack_88);
                            iStack_88 = 0;
                        }
code_r0x00015458:
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < uStack_70);
                }
                (**(*0x27020 + 0x48))(in_stack_ffffffffffffff98);
                iVar5 = 0;
            }
        }
    }
    return iVar5;
}


/* fcn.00024218 @ 0x24218 */

ulong fcn.00024218(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t uVar2;
    int64_t unaff_RDI;
    ulong *puVar3;
    int64_t unaff_retaddr;
    uint64_t uStackX_8;
    
    if (((arg1 == 0) || (arg3 == 0)) || ((*arg3 != 0 && (arg4 == 0)))) {
        uVar1 = 0x8000000000000002;
    }
    else {
        if ((arg2 == 0) || (*arg2 == 0x6c686968)) {
            uVar2 = 0;
            uStackX_8 = 0;
            for (puVar3 = *(arg1 + -0xc0); puVar3 != arg1 + -0xc0; puVar3 = *puVar3) {
                if (arg2 == 0) {
                    fcn.00023550(arg1 + -200,puVar3[-1],puVar3[-3],&uStackX_8,unaff_RDI,unaff_retaddr);
                    uVar2 = uStackX_8;
                }
                else if (puVar3[-1] == arg2) {
                    fcn.00023550(arg1 + -200,arg2,puVar3[-3],&uStackX_8,unaff_RDI,unaff_retaddr);
                    uVar2 = uStackX_8;
                    goto code_r0x000242ff;
                }
            }
            if ((arg2 == 0) && (uVar2 != 0)) {
code_r0x000242ff:
                if (*arg3 < uVar2) {
                    *arg3 = uVar2;
                    return 0x8000000000000005;
                }
                return 0;
            }
        }
        uVar1 = 0x800000000000000e;
    }
    return uVar1;
}


/* fcn.0002068c @ 0x2068c */

ulong fcn.0002068c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    
    if (arg2 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        puVar4 = fcn.000260fc(4,0x30);
        if (puVar4 != NULL) {
            *puVar4 = 0x72646968;
            iVar5 = fcn.000260fc(4,0x88);
            puVar4[1] = iVar5;
            if (iVar5 != 0) {
                iVar6 = iVar5 + 0x18;
                *iVar6 = iVar6;
                *(iVar5 + 0x20) = iVar6;
                iVar6 = iVar5 + 0x28;
                *iVar6 = iVar6;
                *(iVar5 + 0x30) = iVar6;
                iVar6 = iVar5 + 0x38;
                *iVar6 = iVar6;
                *(iVar5 + 0x40) = iVar6;
                iVar6 = iVar5 + 0x48;
                *iVar6 = iVar6;
                *(iVar5 + 0x50) = iVar6;
                iVar6 = iVar5 + 0x58;
                *iVar6 = iVar6;
                *(iVar5 + 0x60) = iVar6;
                iVar6 = iVar5 + 0x70;
                *iVar6 = iVar6;
                *(iVar5 + 0x78) = iVar6;
                *(iVar5 + 0x68) = 0;
                *(iVar5 + 0x80) = 0;
                puVar7 = fcn.000260fc(4,0x20);
                if (puVar7 != NULL) {
                    *puVar7 = 0x6c686968;
                    piVar1 = puVar7 + 1;
                    *(arg1 + 0x170) = *(arg1 + 0x170) + 1;
                    puVar7[3] = *(arg1 + 0x170);
                    *piVar1 = arg1 + 0x160;
                    puVar2 = *(arg1 + 0x168);
                    puVar7[2] = puVar2;
                    *arg2 = puVar4;
                    *puVar2 = piVar1;
                    *(arg1 + 0x168) = piVar1;
                    piVar1 = puVar4 + 4;
                    puVar4[3] = puVar7;
                    *piVar1 = arg1 + 8;
                    puVar7 = *(arg1 + 0x10);
                    puVar4[5] = puVar7;
                    *puVar7 = piVar1;
                    *(arg1 + 0x10) = piVar1;
                    return 0;
                }
                (**(*0x27020 + 0x48))(puVar4[1]);
            }
            (**(*0x27020 + 0x48))(puVar4);
        }
        uVar3 = 0x8000000000000009;
    }
    return uVar3;
}


/* fcn.00022f88 @ 0x22f88 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00022f88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *puVar2;
    bool bVar3;
    uint32_t uVar4;
    ulong *arg1_00;
    uint32_t *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t *puVar8;
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    int8_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t uStackY_78;
    uint32_t uStackY_74;
    uint32_t auStackY_70 [2];
    int64_t arg_50h;
    ulong *puStack_60;
    ulong *arg_60h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    arg_60h = NULL;
    bVar3 = false;
    puVar8 = *(arg4 + 8);
    iVar7 = 0;
    puStack_60 = NULL;
    arg_50h = 0;
    uVar4 = puVar8[4];
    if (puVar8 != arg3) {
        section..text(puVar8,arg3,0x14);
    }
    if (arg2 == 8) {
        *(*(arg4 + 8) + 0x10) = uVar4;
    }
    puVar8 = arg3 + 0x14;
    if (auStackX_18 != puVar8) {
        section..text(auStackX_18,puVar8,4);
    }
    iVar6 = 0;
    uVar4 = auStackX_18[0] >> 0x18;
    if (uVar4 == 0xdf) {
        return 0;
    }
    do {
        if (uVar4 == 1) {
            iVar7 = *(arg4 + 8);
            if (puVar8 == NULL) {
                return -0x7ffffffffffffffe;
            }
            if (iVar7 == 0) {
                return -0x7ffffffffffffffe;
            }
            if (auStackY_70 != puVar8) {
                section..text(auStackY_70,puVar8,4);
            }
            arg1_00 = fcn.000260fc(4,0x20);
            if (arg1_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            puVar5 = fcn.000260fc(4,auStackY_70[0] & 0xffffff);
            arg1_00[1] = puVar5;
            if (puVar5 == NULL) {
code_r0x00023532:
                (**(*0x27020 + 0x48))(arg1_00);
                return -0x7ffffffffffffff7;
            }
            *arg1_00 = 0x70676968;
            if (((auStackY_70[0] & 0xffffff) != 0) && (puVar5 != puVar8)) {
                section..text(puVar5,puVar8,auStackY_70[0] & 0xffffff);
            }
            piVar1 = arg1_00 + 2;
            *piVar1 = iVar7 + 0x18;
            puVar2 = *(iVar7 + 0x20);
            arg1_00[3] = puVar2;
            *puVar2 = piVar1;
            *(iVar7 + 0x20) = piVar1;
            if (arg2 == 8) {
                uVar4 = auStackY_70[0];
                goto code_r0x00023498;
            }
            goto code_r0x000234a1;
        }
        if (uVar4 == 2) {
            iVar7 = *(arg4 + 8);
            if (puVar8 == NULL) {
                return -0x7ffffffffffffffe;
            }
            if (iVar7 == 0) {
                return -0x7ffffffffffffffe;
            }
            if (auStackX_20 != puVar8) {
                section..text(auStackX_20,puVar8,4);
            }
            arg1_00 = fcn.000260fc(4,0x28);
            if (arg1_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            iVar6 = fcn.000260fc(4,(auStackX_20[0] & 0xffffff) - 4);
            arg1_00[2] = iVar6;
            if (iVar6 == 0) goto code_r0x00023532;
            puVar5 = arg1_00 + 1;
            *arg1_00 = 0x70726668;
            if (puVar5 != auStackX_20) {
                section..text(puVar5,auStackX_20,4);
            }
            iVar6 = (auStackX_20[0] & 0xffffff) - 4;
            if ((iVar6 != 0) && (arg1_00[2] != puVar8 + 1)) {
                section..text(arg1_00[2],puVar8 + 1,iVar6);
            }
            piVar1 = arg1_00 + 3;
            *piVar1 = iVar7 + 0x28;
            puVar2 = *(iVar7 + 0x30);
            arg1_00[4] = puVar2;
            *puVar2 = piVar1;
            *(iVar7 + 0x30) = piVar1;
            fcn.000210d0(arg1_00);
            if (arg2 == 8) {
                *(iVar7 + 0x10) = *(iVar7 + 0x10) + (*puVar5 & 0xffffff);
            }
            iVar6 = fcn.000207ec(arg1,arg2,arg1_00,auStackX_18[0] >> 0x18,arg_60h);
            if (*0x26fe0 != '\0') {
                *0x27008 = 1;
            }
        }
        else if (uVar4 == 4) {
            if (arg1 == 0) {
                iVar6 = -0x7ffffffffffffffe;
            }
            else {
                iVar7 = arg_50h;
                iVar6 = fcn.00021a88(arg1,puVar8,arg2,*(arg4 + 8),arg_50h);
                arg_50h = iVar7;
            }
            if (iVar6 < 0) {
                return iVar6;
            }
            iVar6 = fcn.000207ec(arg1,arg2,iVar7,auStackX_18[0] >> 0x18,arg_60h);
            bVar3 = true;
        }
        else {
            if (uVar4 == 5) {
                if (arg1 == 0) {
                    iVar7 = -0x7ffffffffffffffe;
                    arg1_00 = arg_60h;
                }
                else {
                    iVar7 = fcn.0002206c(arg1,puVar8,arg2,*(arg4 + 8));
                    arg1_00 = arg_60h;
                }
                if (iVar7 < 0) {
                    return iVar7;
                }
                arg_60h = arg1_00;
            }
            else if (uVar4 == 6) {
                if (puVar8 == NULL) {
                    iVar7 = -0x7ffffffffffffffe;
                }
                else {
                    iVar7 = fcn.000225b0(puVar8,arg2,*(arg4 + 8),&puStack_60);
                }
                if (iVar7 < 0) {
                    return iVar7;
                }
                arg1_00 = puStack_60;
            }
            else {
                if (uVar4 != 7) {
                    if (uVar4 == 8) {
                        iVar6 = fcn.00022d38(arg1,arg2,puVar8 + 1,arg4);
                    }
                    else if (uVar4 == 9) {
                        iVar7 = *(arg4 + 8);
                        if (puVar8 == NULL) {
                            return -0x7ffffffffffffffe;
                        }
                        if (iVar7 == 0) {
                            return -0x7ffffffffffffffe;
                        }
                        if (&uStackY_78 != puVar8) {
                            section..text(&uStackY_78,puVar8,4);
                        }
                        arg1_00 = fcn.000260fc(4,0x20);
                        if (arg1_00 == NULL) {
                            return -0x7ffffffffffffff7;
                        }
                        *arg1_00 = 0x706c6b68;
                        puVar5 = fcn.000260fc(4,uStackY_78 & 0xffffff);
                        arg1_00[1] = puVar5;
                        if (puVar5 == NULL) goto code_r0x00023532;
                        if (((uStackY_78 & 0xffffff) != 0) && (puVar5 != puVar8)) {
                            section..text(puVar5,puVar8,uStackY_78 & 0xffffff);
                        }
                        piVar1 = arg1_00 + 2;
                        *piVar1 = iVar7 + 0x38;
                        puVar2 = *(iVar7 + 0x40);
                        arg1_00[3] = puVar2;
                        *puVar2 = piVar1;
                        *(iVar7 + 0x40) = piVar1;
                        if (arg2 == 8) {
                            uVar4 = uStackY_78;
                            goto code_r0x00023498;
                        }
                        goto code_r0x000234a1;
                    }
                    goto code_r0x000234c7;
                }
                iVar7 = *(arg4 + 8);
                if (puVar8 == NULL) {
                    return -0x7ffffffffffffffe;
                }
                if (iVar7 == 0) {
                    return -0x7ffffffffffffffe;
                }
                arg1_00 = fcn.000260fc(4,0x20);
                if (arg1_00 == NULL) {
                    return -0x7ffffffffffffff7;
                }
                *arg1_00 = 0x70667368;
                if (&uStackY_74 != puVar8) {
                    section..text(&uStackY_74,puVar8,4);
                }
                puVar5 = fcn.000260fc(4,uStackY_74 & 0xffffff);
                arg1_00[1] = puVar5;
                if (puVar5 == NULL) goto code_r0x00023532;
                if (((uStackY_74 & 0xffffff) != 0) && (puVar5 != puVar8)) {
                    section..text(puVar5,puVar8,uStackY_74 & 0xffffff);
                }
                piVar1 = arg1_00 + 2;
                *piVar1 = iVar7 + 0x70;
                puVar2 = *(iVar7 + 0x78);
                arg1_00[3] = puVar2;
                *puVar2 = piVar1;
                *(iVar7 + 0x78) = piVar1;
                if (arg2 == 8) {
                    uVar4 = uStackY_74;
code_r0x00023498:
                    *(iVar7 + 0x10) = *(iVar7 + 0x10) + (uVar4 & 0xffffff);
                }
code_r0x000234a1:
            }
            iVar6 = fcn.000207ec(arg1,arg2,arg1_00,auStackX_18[0] >> 0x18,arg_60h);
        }
code_r0x000234c7:
        if (iVar6 < 0) {
            return iVar6;
        }
        puVar8 = puVar8 + (auStackX_18[0] & 0xffffff);
        iVar7 = arg_50h;
        if (auStackX_18 != puVar8) {
            section..text(auStackX_18,puVar8,4);
            iVar7 = arg_50h;
        }
        uVar4 = auStackX_18[0] >> 0x18;
        if (uVar4 == 0xdf) {
            if (bVar3) {
                iVar7 = fcn.00021d04(*(arg4 + 8));
                return iVar7;
            }
            return iVar6;
        }
        arg_50h = iVar7;
    } while( true );
}


/* fcn.00023824 @ 0x23824 */

ulong fcn.00023824(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t arg3;
    int16_t iVar2;
    uint32_t *arg2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t *puStackX_8;
    
    iVar4 = 0;
    puStackX_8 = NULL;
    iVar3 = fcn.0001515c(arg1 + 0x58,&puStackX_8);
    arg2 = puStackX_8;
    if (-1 < iVar3) {
        iVar2 = *puStackX_8;
        puVar1 = puStackX_8;
        while (iVar2 != 0) {
            puVar1 = puVar1 + 2;
            iVar4 = iVar4 + 1;
            iVar2 = *puVar1;
        }
        arg3 = iVar4 * 2 + 2;
        if (*0x27000 < arg3) {
            *0x27000 = (arg3 >> 2) + arg3;
            if (*0x27010 != NULL) {
                (**(*0x27020 + 0x48))();
            }
            *0x27010 = fcn.000260fc(6,*0x27000);
            if (*0x27010 == NULL) {
                (**(*0x27020 + 0x48))(arg2);
                (**(*0x27020 + 0xc0))(0x265a0,0);
                return 0x8000000000000009;
            }
        }
        else if (*0x27000 != 0) {
            fcn.000102c0(*0x27010,*0x27000);
        }
        if ((arg3 != 0) && (*0x27010 != arg2)) {
            section..text(*0x27010,arg2,arg3);
        }
        (**(*0x27020 + 0xc0))(0x265a0,*0x27010);
        (**(*0x27020 + 0x48))(arg2);
    }
    return 0;
}


/* fcn.00020c58 @ 0x20c58 */

int64_t fcn.00020c58(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t extraout_RAX;
    int64_t unaff_RBX;
    unkbyte7 in_R9;
    uint32_t auStackX_18 [4];
    
    while( true ) {
        piVar1 = *(arg3 + 0x18);
        if (piVar1 == arg3 + 0x18) {
            return 0;
        }
        fcn.000207ec(arg1,2,piVar1 + -2,CONCAT71(in_R9,1),unaff_RBX);
        if (extraout_RAX < 0) break;
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        if (auStackX_18 != piVar1[-1]) {
            section..text(auStackX_18,piVar1[-1],4);
        }
        *(arg3 + 0x10) = *(arg3 + 0x10) - (auStackX_18[0] & 0xffffff);
        (**(*0x27020 + 0x48))(piVar1[-1]);
        (**(*0x27020 + 0x48))(piVar1 + -2);
    }
    return extraout_RAX;
}


/* fcn.000219bc @ 0x219bc */

int64_t fcn.000219bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t extraout_RAX;
    int64_t unaff_RSI;
    unkbyte7 in_R9;
    
    while( true ) {
        piVar1 = *(arg3 + 0x28);
        if (piVar1 == arg3 + 0x28) {
            return 0;
        }
        fcn.000207ec(arg1,2,piVar1 + -3,CONCAT71(in_R9,2),unaff_RSI);
        if (extraout_RAX < 0) break;
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        *(arg3 + 0x10) = *(arg3 + 0x10) - (*(piVar1 + -2) & 0xffffff);
        (**(*0x27020 + 0x48))(piVar1[-1]);
        (**(*0x27020 + 0x48))(piVar1 + -3);
        if (*0x26fe0 != '\0') {
            *0x27008 = 1;
        }
    }
    return extraout_RAX;
}


/* fcn.00022ec8 @ 0x22ec8 */

int64_t fcn.00022ec8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t extraout_RAX;
    int64_t unaff_RBX;
    unkbyte7 in_R9;
    uint32_t auStackX_18 [4];
    
    while( true ) {
        piVar1 = *(arg3 + 0x38);
        if (piVar1 == arg3 + 0x38) {
            return 0;
        }
        fcn.000207ec(arg1,2,piVar1 + -2,CONCAT71(in_R9,9),unaff_RBX);
        if (extraout_RAX < 0) break;
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        if (auStackX_18 != piVar1[-1]) {
            section..text(auStackX_18,piVar1[-1],4);
        }
        *(arg3 + 0x10) = *(arg3 + 0x10) - (auStackX_18[0] & 0xffffff);
        (**(*0x27020 + 0x48))(piVar1[-1]);
        (**(*0x27020 + 0x48))(piVar1 + -2);
    }
    return extraout_RAX;
}


/* fcn.00021f74 @ 0x21f74 */

int64_t fcn.00021f74(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t extraout_RAX;
    int64_t unaff_RBX;
    unkbyte7 in_R9;
    
    while( true ) {
        piVar3 = *(arg3 + 0x48);
        if (piVar3 == arg3 + 0x48) {
            return 0;
        }
        fcn.000207ec(arg1,2,piVar3 + -3,CONCAT71(in_R9,4),unaff_RBX);
        if (extraout_RAX < 0) break;
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        iVar4 = *0x27020;
        *(arg3 + 0x10) = *(arg3 + 0x10) - (*piVar3[-2] & 0xffffff);
        (**(iVar4 + 0x48))(piVar3[-1]);
        (**(*0x27020 + 0x48))(piVar3[-2]);
        piVar1 = piVar3 + 2;
        while (*piVar1 != piVar1) {
            piVar2 = *piVar1;
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            (**(*0x27020 + 0x48))();
        }
        (**(*0x27020 + 0x48))(piVar3 + -3);
    }
    return extraout_RAX;
}


/* fcn.00022460 @ 0x22460 */

int64_t fcn.00022460(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg3_00;
    int64_t *piVar1;
    int64_t extraout_RAX;
    int64_t *piVar2;
    int64_t unaff_RBX;
    unkbyte7 in_R9;
    
    do {
        piVar2 = *(arg3 + 0x58);
        if (piVar2 == arg3 + 0x58) {
            return 0;
        }
        arg3_00 = piVar2 + -4;
        fcn.000207ec(arg1,2,arg3_00,CONCAT71(in_R9,5),unaff_RBX);
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        *(arg3 + 0x10) = *(arg3 + 0x10) - (*piVar2[-3] & 0xffffff);
        if (piVar2[-1] != 0) {
            (**(*0x27020 + 0x48))();
        }
        (**(*0x27020 + 0x48))(piVar2[-3]);
        piVar2 = piVar2 + 2;
        while (*piVar2 != piVar2) {
            piVar1 = *piVar2;
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            (**(*0x27020 + 0x48))();
        }
        for (piVar2 = *(arg1 + 0x178); piVar2 != arg1 + 0x178; piVar2 = *piVar2) {
            if (piVar2[2] == arg3_00) {
                *(*piVar2 + 8) = piVar2[1];
                *piVar2[1] = *piVar2;
                (**(*0x27020 + 0x48))(piVar2[4]);
                (**(*0x27020 + 0x48))(piVar2 + -1);
                break;
            }
        }
        (**(*0x27020 + 0x48))(arg3_00);
    } while( true );
}


/* fcn.00022894 @ 0x22894 */

int64_t fcn.00022894(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *arg3_00;
    int64_t extraout_RAX;
    unkbyte7 in_R9;
    int64_t in_stack_00000018;
    
    arg3_00 = *(arg3 + 0x68);
    if (arg3_00 != NULL) {
        fcn.000207ec(arg1,2,arg3_00,CONCAT71(in_R9,6),in_stack_00000018);
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        *(arg3 + 0x10) = *(arg3 + 0x10) - (*arg3_00 & 0xffffff);
        (**(*0x27020 + 0x48))(*(arg3_00 + 6));
        if (*(arg3_00 + 8) != 0) {
            (**(*0x27020 + 0x48))();
        }
        (**(*0x27020 + 0x48))(arg3_00);
        *(arg3 + 0x68) = 0;
    }
    return 0;
}


/* fcn.00022a1c @ 0x22a1c */

int64_t fcn.00022a1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    int64_t unaff_RSI;
    unkbyte7 in_R9;
    
    while( true ) {
        piVar1 = *(arg3 + 0x70);
        if (piVar1 == arg3 + 0x70) {
            return 0;
        }
        fcn.000207ec(arg1,2,piVar1 + -2,CONCAT71(in_R9,7),unaff_RSI);
        if (extraout_RAX < 0) break;
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        iVar2 = *0x27020;
        *(arg3 + 0x10) = *(arg3 + 0x10) - (*piVar1[-1] & 0xffffff);
        (**(iVar2 + 0x48))(piVar1[-1]);
        (**(*0x27020 + 0x48))(piVar1 + -2);
    }
    return extraout_RAX;
}


/* fcn.00022cb8 @ 0x22cb8 */

int64_t fcn.00022cb8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *arg3_00;
    int64_t extraout_RAX;
    unkbyte7 in_R9;
    uint32_t in_stack_00000018;
    uint in_stack_0000001c;
    
    arg3_00 = *(arg3 + 0x80);
    if (arg3_00 != NULL) {
        fcn.000207ec(arg1,2,arg3_00,CONCAT71(in_R9,8),CONCAT44(in_stack_0000001c,in_stack_00000018));
        if (extraout_RAX < 0) {
            return extraout_RAX;
        }
        if (&stack0x00000018 != arg3_00) {
            section..text(&stack0x00000018,arg3_00,4);
        }
        *(arg3 + 0x10) = *(arg3 + 0x10) - (in_stack_00000018 & 0xffffff);
        (**(*0x27020 + 0x48))(arg3_00);
        *(arg3 + 0x80) = 0;
    }
    return 0;
}


/* fcn.00023550 @ 0x23550 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00023550(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t in_stack_00000028;
    uint in_stack_0000002c;
    int64_t var_38h;
    int64_t var_10h;
    
    uVar1 = CONCAT44(in_stack_0000002c,in_stack_00000028);
    if ((uVar1 == 0) || (var_38h != 0)) {
        if ((*arg4 + 0x14U <= uVar1) && (var_38h != arg3)) {
            section..text(var_38h,arg3,0x14);
        }
        if (arg3 == 0) {
            iVar2 = -0x7ffffffffffffffe;
        }
        else {
            iVar2 = fcn.00020b2c(arg1,arg2,arg3,*arg4);
        }
        if (-1 < iVar2) {
            if (arg1 == 0) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                iVar2 = fcn.00021890(arg1,arg2,arg3,*arg4);
            }
            if (-1 < iVar2) {
                if (arg1 == 0) {
                    iVar2 = -0x7ffffffffffffffe;
                }
                else {
                    iVar2 = fcn.00022d9c(arg1,arg2,arg3,*arg4);
                }
                if (-1 < iVar2) {
                    if (arg1 == 0) {
                        iVar2 = -0x7ffffffffffffffe;
                    }
                    else {
                        iVar2 = fcn.00021e38(arg1,arg2,arg3,*arg4);
                    }
                    if (-1 < iVar2) {
                        if (arg1 == 0) {
                            iVar2 = -0x7ffffffffffffffe;
                        }
                        else {
                            iVar2 = fcn.00022324(arg1,arg2,arg3,*arg4);
                        }
                        if (-1 < iVar2) {
                            if (arg1 == 0) {
                                iVar2 = -0x7ffffffffffffffe;
                            }
                            else {
                                iVar2 = fcn.0002278c(arg1,arg2,arg3,*arg4);
                            }
                            if (-1 < iVar2) {
                                if (arg1 == 0) {
                                    iVar2 = -0x7ffffffffffffffe;
                                }
                                else {
                                    iVar2 = fcn.00022910(arg1,arg2,arg3,*arg4);
                                }
                                if (-1 < iVar2) {
                                    iVar2 = -0x7ffffffffffffffe;
                                    if (arg1 != 0) {
                                        iVar2 = fcn.00022bac(arg1,arg2,arg3,*arg4);
                                    }
                                    if (-1 < iVar2) {
                                        in_stack_00000028 = 0xdf000004;
                                        if ((*arg4 + 0x18U <= uVar1) && (var_38h + 0x14 != &stack0x00000028)) {
                                            section..text(var_38h + 0x14,&stack0x00000028,4);
                                        }
                                        *arg4 = *arg4 + 0x18;
                                        iVar2 = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        iVar2 = -0x7ffffffffffffffe;
    }
    return iVar2;
}


/* fcn.00024688 @ 0x24688 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Type propagation algorithm not settling

ulong fcn.00024688(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    uint16_t *arg2_00;
    uint64_t arg3_00;
    ulong *puVar5;
    ulong *puVar6;
    uint32_t auStackX_8 [2];
    uint16_t *puStackX_10;
    int64_t var_30h;
    uint32_t auStack_48 [2];
    uint64_t uStack_40;
    ulong *puStack_38;
    uint32_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    if (((arg1 == 0) || (arg3 == 0)) || ((*arg3 != 0 && (arg4 == 0)))) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puStackX_10 = arg2;
        if (arg2 == 0) {
            puVar1 = *(arg1 + 0xd8);
            if (puVar1 != NULL) {
                if (auStackX_8 != puVar1) {
                    section..text(auStackX_8,puVar1,2);
                }
                if (*arg3 < auStackX_8[0]) {
code_r0x00024717:
                    *arg3 = auStackX_8[0];
                    return 0x8000000000000005;
                }
                arg2_00 = *(arg1 + 0xd8);
                arg3_00 = auStackX_8[0];
                if ((arg3_00 != 0) && (arg4 != arg2_00)) {
code_r0x0002473e:
                    section..text(arg4,arg2_00,arg3_00);
                }
                return 0;
            }
        }
        else {
            for (puVar5 = *(arg1 + -0xc0); puVar5 != arg1 + -0xc0; puVar5 = *puVar5) {
                puVar3 = puVar5[-3] + 0x38;
                puStack_38 = puVar3;
                for (puVar6 = *puVar3; puVar6 != puVar3; puVar6 = *puVar6) {
                    arg2_00 = puVar6[-1] + 6;
                    puVar1 = puVar6[-1] + 4;
                    if (auStack_48 != puVar1) {
                        section..text(auStack_48,puVar1,2);
                        puVar3 = puStack_38;
                    }
                    uStack_40 = 0;
                    if (auStack_48[0] != 0) {
                        do {
                            if (auStackX_8 != arg2_00) {
                                section..text(auStackX_8,arg2_00,2);
                            }
                            if ((arg2_00 + 1 == puStackX_10) ||
                               (iVar4 = fcn.000102e0(arg2_00 + 1,puStackX_10,0x10), iVar4 == 0)) {
                                if (*arg3 < auStackX_8[0]) goto code_r0x00024717;
                                arg3_00 = auStackX_8[0];
                                if (arg3_00 == 0) {
                                    return 0;
                                }
                                if (arg4 == arg2_00) {
                                    return 0;
                                }
                                goto code_r0x0002473e;
                            }
                            arg2_00 = arg2_00 + auStackX_8[0];
                            uStack_40 = uStack_40 + 1;
                        } while (uStack_40 < auStack_48[0]);
                        puVar3 = puStack_38;
                    }
                }
            }
        }
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.00024d98 @ 0x24d98 */

uint64_t fcn.00024d98(uint32_t arg1,int64_t arg2)

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


/* fcn.0002500c @ 0x2500c */

int64_t fcn.0002500c(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 - 0x30 < 10) {
        iVar1 = (arg1 & 0xffff) - 0x30;
    }
    else {
        if (uVar2 - 0x61 < 0x1a) {
            uVar2 = uVar2 - 0x20;
        }
        iVar1 = uVar2 - 0x37;
    }
    return iVar1;
}


/* fcn.00025178 @ 0x25178 */

uchar * fcn.00025178(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000260a4 @ 0x260a4 */

void fcn.000260a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0002533c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00026228 @ 0x26228 */

bool fcn.00026228(uint32_t arg1)

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


