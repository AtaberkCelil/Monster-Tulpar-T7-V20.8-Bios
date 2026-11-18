// decompiled by r2ghidra: 0911_DiskIoDxe.pe32
// functions: 12

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11bc8 = *(arg2 + 0x60);
    *0x11a70 = arg1;
    *0x11a78 = arg1;
    *0x11bc0 = arg2;
    (**(*0x11bc8 + 0x148))(0x11a78,0x11a20,0x11a50,0x11a30,0x11b08,0x119e0,0x11b20,0);
    return;
}


/* fcn.00011918 @ 0x11918 */

void fcn.00011918(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000118e8(noname_0,0x88);
    if ((arg1_00 != 0) && (arg1_00 != arg1)) {
        section..text(arg1_00,arg1,0x88);
    }
    return;
}


/* fcn.000118e8 @ 0x118e8 */

ulong fcn.000118e8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11bc8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 5984 named .text
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


/* fcn.000117ec @ 0x117ec */

uint64_t fcn.000117ec(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_10;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = (**(*0x11bc8 + 0x28))(0,4,arg1,&uStackX_10);
            if (-1 < iVar1) {
                return uStackX_10;
            }
        }
        else {
            iVar2 = (arg2 >> 0xc) + ((arg2 & 0xfffU) != 0) + arg1;
            iVar1 = (**(*0x11bc8 + 0x28))(0,4,iVar2);
            if (-1 < iVar1) {
                uVar3 = uStackX_10 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
                if (iVar1 != 0) {
                    (**(*0x11bc8 + 0x30))(uStackX_10,iVar1);
                }
                uStackX_10 = arg1 * 0x1000 + uVar3;
                arg1 = (iVar2 - iVar1) - arg1;
                if (arg1 != 0) {
                    (**(*0x11bc8 + 0x30))(uStackX_10,arg1);
                }
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.000107a4 @ 0x107a4 */

ulong fcn.000107a4(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    
    iVar2 = *(arg2 + 0x50);
    if (iVar2 != 0) {
        uVar4 = (**(*0x11bc8 + 0x18))(*(iVar2 + 0x18));
        *(iVar2 + 0x20) = uVar4;
        *(iVar2 + 0x28) = 2;
    }
    *(*(arg2 + 8) + 8) = *(arg2 + 0x10);
    **(arg2 + 0x10) = *(arg2 + 8);
    iVar3 = *0x11bc8;
    iVar2 = *(arg2 + 0x50);
    uVar4 = *(arg2 + 8);
    if (iVar2 != 0) {
        *(iVar2 + 0x28) = 1;
        (**(iVar3 + 0x20))(*(iVar2 + 0x20));
    }
    if (*(arg2 + 0x48) == '\0') {
        if (*(arg2 + 0x38) != 0) {
            uVar5 = *(arg2 + 0x30);
            uVar1 = *(*(*(arg1 + 0x48) + 8) + 0xc);
            if (uVar5 < uVar1) {
                uVar5 = (uVar1 >> 0xc) + ((uVar1 & 0xfff) != 0);
            }
            else {
                uVar5 = ((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc);
            }
            (**(*0x11bc8 + 0x30))(*(arg2 + 0x38),uVar5);
        }
        if (*(arg2 + 0x58) != 0) {
            (**(*0x11bc8 + 0x70))();
        }
    }
    (**(*0x11bc8 + 0x48))(arg2);
    return uVar4;
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


/* fcn.0001094c @ 0x1094c */

uint * fcn.0001094c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint *puVar2;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    char in_stack_00000038;
    
    iVar1 = fcn.000118e8(arg1,0x68);
    if ((iVar1 != 0) && (puVar2 = fcn.000102c0(iVar1,0x68), puVar2 != NULL)) {
        *(puVar2 + 0xe) = in_stack_00000028;
        *(puVar2 + 0x10) = in_stack_00000030;
        *puVar2 = 0x74736964;
        *(puVar2 + 6) = arg1;
        *(puVar2 + 8) = arg2;
        puVar2[10] = arg3;
        *(puVar2 + 0xc) = arg4;
        *(puVar2 + 0x12) = in_stack_00000038;
        if ((in_stack_00000038 != '\0') ||
           (iVar1 = (**(*0x11bc8 + 0x50))(0x200,0x10,0x108a0,puVar2,puVar2 + 0x16), -1 < iVar1)) {
            return puVar2;
        }
        (**(*0x11bc8 + 0x48))(puVar2);
    }
    return NULL;
}


/* fcn.00010a24 @ 0x10a24 */

ulong fcn.00010a24(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uchar auVar4 [16];
    uchar auVar5 [16];
    uchar auVar6 [16];
    uchar auVar7 [16];
    char cVar8;
    uint64_t arg2_00;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong *puVar12;
    uint32_t uVar13;
    int iVar14;
    int64_t iVar15;
    uint64_t arg4_00;
    bool bVar16;
    int64_t iStackX_18;
    int64_t in_stack_00000028;
    char in_stack_00000030;
    ulong in_stack_00000038;
    ulong *in_stack_00000040;
    
    cVar8 = arg2;
    iVar15 = *(*(arg1 + 0x48) + 8);
    uVar1 = *(iVar15 + 0xc);
    uVar11 = CONCAT44(0,uVar1);
    uVar2 = *(iVar15 + 0x10);
    if (uVar2 == 0) {
        uVar2 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar11;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = arg3;
    arg2_00 = arg3 / uVar11;
    iVar15 = SUB168(auVar6 % auVar4,0);
    iVar14 = SUB164(auVar6 % auVar4,0);
    if (arg4 == 0) {
        iVar15 = fcn.0001094c(CONCAT71(arg1 >> 8,cVar8),arg2_00,iVar15,0);
        if (iVar15 != 0) {
            puVar12 = iVar15 + 8;
            *puVar12 = in_stack_00000040;
            piVar3 = in_stack_00000040[1];
            *(iVar15 + 0x10) = piVar3;
            *piVar3 = puVar12;
            in_stack_00000040[1] = puVar12;
            return 1;
        }
        goto code_r0x00010ee6;
    }
    puVar12 = arg1;
    iStackX_18 = arg3;
    if (iVar14 != 0) {
        uVar13 = uVar1 - iVar14;
        uVar9 = arg4;
        if (uVar13 < arg4) {
            uVar9 = uVar13;
        }
        puVar12 = CONCAT31(uVar13 >> 8,in_stack_00000030);
        if (in_stack_00000030 == '\0') {
            bVar16 = (uVar1 & 0xfff) != 0;
            puVar12 = bVar16;
            iVar10 = fcn.000117ec(puVar12,(uVar1 >> 0xc) + bVar16,uVar2);
            if (iVar10 == 0) goto code_r0x00010ee6;
        }
        if (cVar8 != '\0') {
            iVar10 = fcn.0001094c(0,arg2_00,0,uVar1);
            if (iVar10 == 0) goto code_r0x00010ee6;
            puVar12 = iVar10 + 8;
            *puVar12 = in_stack_00000040;
            piVar3 = in_stack_00000040[1];
            *(iVar10 + 0x10) = piVar3;
            *piVar3 = puVar12;
            in_stack_00000040[1] = puVar12;
        }
        iVar15 = fcn.0001094c(CONCAT71(puVar12 >> 8,cVar8),arg2_00,iVar15,uVar9);
        if (iVar15 == 0) goto code_r0x00010ee6;
        puVar12 = iVar15 + 8;
        *puVar12 = in_stack_00000040;
        piVar3 = in_stack_00000040[1];
        *(iVar15 + 0x10) = piVar3;
        *piVar3 = puVar12;
        iStackX_18 = arg3 + uVar9;
        in_stack_00000028 = in_stack_00000028 + uVar9;
        arg4 = arg4 - uVar9;
        in_stack_00000040[1] = puVar12;
        arg2_00 = arg2_00 + 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = CONCAT44(0,uVar1);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = arg4;
    iVar15 = SUB168(auVar7 % auVar5,0);
    uVar9 = arg4 / CONCAT44(0,uVar1) + arg2_00;
    arg4_00 = arg4 - iVar15;
    if (SUB164(auVar7 % auVar5,0) != 0) {
        if (in_stack_00000030 == '\0') {
            bVar16 = (uVar1 & 0xfff) != 0;
            puVar12 = bVar16;
            iVar10 = fcn.000117ec(puVar12,(uVar1 >> 0xc) + bVar16,uVar2);
            if (iVar10 == 0) goto code_r0x00010ee6;
        }
        if (cVar8 != '\0') {
            iVar10 = fcn.0001094c(0,uVar9,0,uVar11);
            if (iVar10 == 0) goto code_r0x00010ee6;
            puVar12 = iVar10 + 8;
            *puVar12 = in_stack_00000040;
            piVar3 = in_stack_00000040[1];
            *(iVar10 + 0x10) = piVar3;
            *piVar3 = puVar12;
            in_stack_00000040[1] = puVar12;
        }
        iVar15 = fcn.0001094c(CONCAT71(puVar12 >> 8,cVar8),uVar9,0,iVar15);
        if (iVar15 == 0) goto code_r0x00010ee6;
        puVar12 = iVar15 + 8;
        *puVar12 = in_stack_00000040;
        piVar3 = in_stack_00000040[1];
        *(iVar15 + 0x10) = piVar3;
        *piVar3 = puVar12;
        in_stack_00000040[1] = puVar12;
    }
    if (uVar9 <= arg2_00) {
        return 1;
    }
    uVar11 = uVar2 - 1;
    if ((uVar11 & uVar2 - in_stack_00000028) != 0) {
        uVar11 = CONCAT31(uVar2 - 1 >> 8,in_stack_00000030);
        if (in_stack_00000030 != '\0') {
            if (uVar9 <= arg2_00) {
                return 1;
            }
            while( true ) {
                uVar11 = uVar1 << 6;
                if (arg4_00 < uVar1 << 6) {
                    uVar11 = arg4_00;
                }
                iVar15 = fcn.0001094c(CONCAT71(in_stack_00000038 >> 8,cVar8),arg2_00,0,uVar11);
                if (iVar15 == 0) break;
                puVar12 = iVar15 + 8;
                *puVar12 = in_stack_00000040;
                arg2_00 = arg2_00 + 0x40;
                piVar3 = in_stack_00000040[1];
                *(iVar15 + 0x10) = piVar3;
                *piVar3 = puVar12;
                in_stack_00000040[1] = puVar12;
                arg4_00 = arg4_00 - uVar11;
                if (uVar9 <= arg2_00) {
                    return 1;
                }
            }
            goto code_r0x00010ee6;
        }
        iVar10 = ((arg4_00 & 0xfff) != 0) + (arg4_00 >> 0xc);
        iVar15 = fcn.000117ec(uVar11,iVar10,uVar2);
        if (iVar15 == 0) {
            cVar8 = fcn.00010a24(arg1,CONCAT71(iVar10 >> 8,cVar8),iStackX_18,arg4_00);
            if (cVar8 != '\0') {
                return 1;
            }
            goto code_r0x00010ee6;
        }
    }
    iVar15 = fcn.0001094c(CONCAT71(uVar11 >> 8,cVar8),arg2_00,0,arg4_00);
    if (iVar15 != 0) {
        puVar12 = iVar15 + 8;
        *puVar12 = in_stack_00000040;
        piVar3 = in_stack_00000040[1];
        *(iVar15 + 0x10) = piVar3;
        *piVar3 = puVar12;
        in_stack_00000040[1] = puVar12;
        return 1;
    }
code_r0x00010ee6:
    for (puVar12 = *in_stack_00000040; puVar12 != in_stack_00000040; puVar12 = fcn.000107a4(arg1,puVar12 + -1)) {
    }
    return 0;
}


/* fcn.00010f94 @ 0x10f94 */

uchar fcn.00010f94(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    uchar uVar4;
    
    uVar4 = 1;
    uVar2 = (**(*0x11bc8 + 0x18))(*(arg1 + 0x60));
    *(arg1 + 0x70) = 2;
    *(arg1 + 0x68) = uVar2;
    piVar3 = *(arg1 + 0x78);
    while (iVar1 = *0x11bc8, piVar3 != arg1 + 0x78) {
        if (piVar3[5] == piVar3 + 5) {
            *(*piVar3 + 8) = piVar3[1];
            *piVar3[1] = *piVar3;
            piVar3 = *piVar3;
            (**(*0x11bc8 + 0x48))();
        }
        else {
            piVar3 = *piVar3;
            uVar4 = 0;
        }
    }
    *(arg1 + 0x70) = 1;
    (**(iVar1 + 0x20))(*(arg1 + 0x68));
    return uVar4;
}


/* fcn.0001103c @ 0x1103c */

int64_t fcn.0001103c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar uVar4;
    int64_t *piVar5;
    int64_t iVar6;
    char cVar7;
    uint *puVar8;
    ulong uVar9;
    ulong uVar10;
    int64_t iVar11;
    ulong *puVar12;
    ulong *puVar13;
    uint64_t uVar14;
    uint uVar15;
    uint64_t uVar16;
    uint8_t uVar17;
    ulong *puVar18;
    ulong *puVar19;
    bool bVar20;
    uint8_t in_stack_00000028;
    unkbyte7 in_stack_00000029;
    int64_t in_stack_00000030;
    ulong auStack_50 [3];
    
    uVar15 = arg3;
    iVar1 = *(arg1 + 0x48);
    piVar5 = CONCAT71(in_stack_00000029,in_stack_00000028);
    puVar8 = NULL;
    iVar2 = *(arg1 + 0x50);
    iVar11 = 0;
    iVar3 = *(iVar1 + 8);
    uVar4 = arg2;
    if ((piVar5 == NULL) || (*piVar5 == 0)) {
        uVar17 = 1;
        in_stack_00000028 = 1;
        do {
            cVar7 = fcn.00010f94(arg1);
        } while (cVar7 == '\0');
        puVar18 = auStack_50;
    }
    else {
        uVar17 = 0;
        in_stack_00000028 = 0;
        fcn.00010f94(arg1);
        puVar8 = fcn.000118e8();
        if (puVar8 == NULL) {
            return -0x7ffffffffffffff7;
        }
        uVar9 = (**(*0x11bc8 + 0x18))(*(arg1 + 0x60));
        *(arg1 + 0x70) = 2;
        arg2 = puVar8 + 2;
        *(arg1 + 0x68) = uVar9;
        *arg2 = arg1 + 0x78;
        puVar18 = *(arg1 + 0x80);
        *(puVar8 + 4) = puVar18;
        *puVar18 = arg2;
        iVar6 = *0x11bc8;
        *(arg1 + 0x80) = arg2;
        *(arg1 + 0x70) = 1;
        (**(iVar6 + 0x20))(*(arg1 + 0x68));
        *puVar8 = 0x74616964;
        puVar18 = puVar8 + 0xc;
        *(puVar8 + 0x12) = arg1;
        *(puVar8 + 0x10) = piVar5;
        *(puVar8 + 6) = 0x10;
        *(puVar8 + 8) = 4;
        puVar8[10] = 1;
    }
    *puVar18 = puVar18;
    puVar18[1] = puVar18;
    uVar9 = *(arg1 + 0x58);
    uVar16 = uVar17;
    cVar7 = fcn.00010a24(arg1,CONCAT71(arg2 >> 8,uVar4),arg4,in_stack_00000030);
    if (cVar7 == '\0') {
        if (puVar8 != NULL) {
            (**(*0x11bc8 + 0x48))(puVar8);
        }
        return -0x7ffffffffffffff7;
    }
    uVar10 = (**(*0x11bc8 + 0x18))(8);
    puVar13 = *puVar18;
    puVar19 = *puVar13;
    puVar12 = puVar19;
    if (puVar13 != puVar18) {
        do {
            cVar7 = *(puVar13 + 8);
            puVar13[9] = puVar8;
            if (*(puVar13 + 2) == '\0') {
                if (cVar7 == '\0') {
                    uVar16 = puVar13[6];
                    if (uVar16 == 0) {
                        uVar16 = puVar13[7];
                    }
                    uVar14 = *(iVar3 + 0xc);
                    if (puVar13[5] % *(iVar3 + 0xc) == 0) {
                        uVar14 = puVar13[5];
                    }
                    iVar11 = (**(iVar2 + 0x10))(iVar2,uVar15,puVar13[3],puVar13 + 10,uVar14,uVar16,uVar9);
                }
                else {
                    iVar11 = puVar13[6];
                    if (iVar11 == 0) {
                        iVar11 = puVar13[7];
                    }
                    uVar14 = *(iVar3 + 0xc);
                    if (puVar13[5] % *(iVar3 + 0xc) == 0) {
                        uVar14 = puVar13[5];
                    }
                    iVar11 = (**(iVar1 + 0x18))(iVar1,uVar15,puVar13[3],uVar14,iVar11,uVar16);
                    if ((-1 < iVar11) && (puVar13[6] != 0)) {
                        if ((puVar13[5] != 0) && (puVar13[7] != *(puVar13 + 4) + puVar13[6])) {
                            section..text(puVar13[7],*(puVar13 + 4) + puVar13[6],puVar13[5]);
                        }
                    }
                }
            }
            else {
                if (puVar13[6] != 0) {
                    if ((puVar13[5] != 0) && (*(puVar13 + 4) + puVar13[6] != puVar13[7])) {
                        section..text(*(puVar13 + 4) + puVar13[6],puVar13[7],puVar13[5]);
                    }
                }
                if (cVar7 == '\0') {
                    uVar16 = puVar13[6];
                    if (uVar16 == 0) {
                        uVar16 = puVar13[7];
                    }
                    uVar14 = *(iVar3 + 0xc);
                    if (puVar13[5] % *(iVar3 + 0xc) == 0) {
                        uVar14 = puVar13[5];
                    }
                    iVar11 = (**(iVar2 + 0x18))(iVar2,uVar15,puVar13[3],puVar13 + 10,uVar14);
                }
                else {
                    iVar11 = puVar13[6];
                    if (iVar11 == 0) {
                        iVar11 = puVar13[7];
                    }
                    uVar14 = *(iVar3 + 0xc);
                    if (puVar13[5] % *(iVar3 + 0xc) == 0) {
                        uVar14 = puVar13[5];
                    }
                    iVar11 = (**(iVar1 + 0x20))(iVar1,uVar15,puVar13[3],uVar14,iVar11);
                }
            }
            if ((cVar7 != '\0') || (iVar11 < 0)) {
                fcn.000107a4(arg1,puVar13 + -1);
                puVar12 = puVar19;
                if (iVar11 < 0) break;
            }
            puVar12 = *puVar19;
            bVar20 = puVar19 != puVar18;
            puVar13 = puVar19;
            puVar19 = puVar12;
        } while (bVar20);
        uVar17 = in_stack_00000028;
    }
    (**(*0x11bc8 + 0x18))(0x10);
    if (iVar11 < 0) {
        for (; puVar12 != puVar18; puVar12 = fcn.000107a4(arg1,puVar12 + -1)) {
        }
    }
    if ((uVar17 == 0) && (*puVar18 == puVar18)) {
        uVar9 = (**(*0x11bc8 + 0x18))(*(arg1 + 0x60));
        *(arg1 + 0x68) = uVar9;
        *(arg1 + 0x70) = 2;
        *(*(puVar8 + 2) + 8) = *(puVar8 + 4);
        **(puVar8 + 4) = *(puVar8 + 2);
        iVar1 = *0x11bc8;
        *(arg1 + 0x70) = 1;
        (**(iVar1 + 0x20))(*(arg1 + 0x68));
        if ((-1 < iVar11) && (*(puVar8 + 0x10) != 0)) {
            *(*(puVar8 + 0x10) + 8) = iVar11;
            (**(*0x11bc8 + 0x68))(**(puVar8 + 0x10));
        }
        (**(*0x11bc8 + 0x48))(puVar8);
    }
    (**(*0x11bc8 + 0x20))(uVar10);
    return iVar11;
}


/* fcn.0001194c @ 0x1194c */

ulong fcn.0001194c(int64_t arg1,int64_t arg2)

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
code_r0x000119ac:
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
            if (*pcVar2 == *pcVar1) goto code_r0x000119ac;
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


