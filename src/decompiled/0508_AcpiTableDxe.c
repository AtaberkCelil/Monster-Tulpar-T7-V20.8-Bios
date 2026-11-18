// decompiled by r2ghidra: 0508_AcpiTableDxe.pe32
// functions: 39

/* entry0 @ 0x10364 */

ulong entry0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *arg1_00;
    ulong uVar2;
    
    *0x14b48 = *(arg1 + 0x60);
    *0x14b50 = *(arg1 + 0x58);
    *0x14b40 = arg1;
    fcn.0001344c();
    iVar1 = fcn.000133dc();
    arg1_00 = NULL;
    if (iVar1 != 0) {
        arg1_00 = fcn.000102c0(iVar1,0xf8);
    }
    *arg1_00 = 0x45415453;
    iVar1 = fcn.000119e4(arg1_00);
    if (iVar1 < 0) {
        (**(*0x14b48 + 0x48))(arg1_00);
        uVar2 = 0x8000000000000001;
    }
    else {
        *0x14b28 = arg1_00;
        uVar2 = (**(*0x14b48 + 0x148))(0x14b20,0x13500,arg1_00 + 0x11,0x13510,arg1_00 + 0x13,0);
    }
    return uVar2;
}


/* fcn.0001344c @ 0x1344c */

int64_t fcn.0001344c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14b60 == 0) {
        *0x14b60 = 0;
        if (*(*0x14b40 + 0x68) != 0) {
            piVar2 = *(*0x14b40 + 0x70);
            do {
                if ((*0x13520 == *piVar2) && (*0x13528 == piVar2[1])) {
                    *0x14b60 = (*(*0x14b40 + 0x70))[uVar1 * 3 + 2];
                    return *0x14b60;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14b40 + 0x68));
        }
    }
    return *0x14b60;
}


/* fcn.000133dc @ 0x133dc */

ulong fcn.000133dc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14b48 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.000119e4 @ 0x119e4 */

ulong fcn.000119e4(int64_t arg1)

{
    int *piVar1;
    uint *arg1_00;
    uint64_t arg2;
    uint uVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    
    *0x13548 = "DSDT\x02";
    iVar3 = arg1 + 0x60;
    *0x14b68 = 1;
    *iVar3 = iVar3;
    arg1_00 = arg1 + 0x98;
    *(arg1 + 0x68) = iVar3;
    *(arg1 + 0x88) = 0x10530;
    *(arg1 + 0x90) = 0x1062c;
    iVar3 = arg1 + 0xe8;
    *(arg1 + 0x80) = 1;
    *iVar3 = iVar3;
    *(arg1 + 0xf0) = iVar3;
    iVar4 = 1;
    if (arg1_00 != 0x13630) {
        section..text(arg1_00,0x13630,0x50);
        iVar4 = *0x14b68;
    }
    iVar3 = *0x14b48;
    *arg1_00 = 0x3e;
    if (iVar4 == 0) {
        iVar3 = (**(iVar3 + 0x40))(9,0x38,&iStackX_10);
    }
    else {
        iStackX_18 = 0xffffffff;
        iVar3 = (**(iVar3 + 0x28))(iVar4,9,1,&iStackX_18);
    }
    if (-1 < iVar3) {
        if (*0x14b68 != 0) {
            iStackX_10 = iStackX_18;
        }
        fcn.000102c0(iStackX_10,0x38);
        iVar3 = *0x13560;
        *(arg1 + 8) = iStackX_10;
        iStackX_10 = iStackX_10 + 0x14;
        *(arg1 + 0x10) = iStackX_10;
        arg2 = iVar3 * 0x10 + 0x6c;
        if (*0x14b68 == 0) {
            iVar3 = (**(*0x14b48 + 0x40))(9,arg2);
        }
        else {
            iStackX_18 = 0xffffffff;
            iVar3 = (**(*0x14b48 + 0x28))(*0x14b68,9,(arg2 >> 0xc) + 1,&iStackX_18);
        }
        if (-1 < iVar3) {
            if (*0x14b68 != 0) {
                iStackX_10 = iStackX_18;
            }
            fcn.000102c0(iStackX_10,arg2);
            *(arg1 + 0x18) = iStackX_10;
            uStackX_8 = 0x2052545020445352;
            *(arg1 + 0x20) = iStackX_10 + 0x394;
            iStackX_10 = iStackX_10 + 0x728;
            *(arg1 + 0x28) = iStackX_10;
            if (*(arg1 + 8) != &uStackX_8) {
                section..text(*(arg1 + 8),&uStackX_8,8);
            }
            iVar3 = fcn.000133a0();
            iVar3 = (**(iVar3 + 0x28))(0x225);
            iVar5 = *(arg1 + 8) + 9;
            if (iVar5 != iVar3) {
                section..text(iVar5,iVar3,6);
            }
            *(*(arg1 + 8) + 0xf) = 0;
            *(*(arg1 + 8) + 0x10) = *(arg1 + 0x18);
            uStackX_8 = 0x2052545020445352;
            if (*(arg1 + 0x10) != &uStackX_8) {
                section..text(*(arg1 + 0x10),&uStackX_8,8);
            }
            iVar3 = fcn.000133a0();
            iVar3 = (**(iVar3 + 0x28))(0x225);
            iVar5 = *(arg1 + 0x10) + 9;
            if (iVar5 != iVar3) {
                section..text(iVar5,iVar3,6);
            }
            *(*(arg1 + 0x10) + 0xf) = 2;
            *(*(arg1 + 0x10) + 0x14) = 0x24;
            *(*(arg1 + 0x10) + 0x10) = *(arg1 + 0x20);
            uStackX_8 = *(arg1 + 0x28);
            puVar6 = *(arg1 + 0x10) + 0x18;
            if (puVar6 != &uStackX_8) {
                section..text(puVar6,&uStackX_8,8);
            }
            fcn.000102e0(*(arg1 + 0x10) + 0x21,3,0);
            **(arg1 + 0x18) = 0x54445352;
            *(*(arg1 + 0x18) + 4) = 0x24;
            *(*(arg1 + 0x18) + 8) = 1;
            iVar3 = fcn.000133a0();
            iVar3 = (**(iVar3 + 0x28))(0x225);
            iVar5 = *(arg1 + 0x18) + 10;
            if (iVar5 != iVar3) {
                section..text(iVar5,iVar3,6);
            }
            iVar3 = fcn.000133a0();
            uStackX_8 = (**(iVar3 + 0x20))(0x163);
            puVar6 = *(arg1 + 0x18) + 0x10;
            if (puVar6 != &uStackX_8) {
                section..text(puVar6,&uStackX_8,8);
            }
            iVar3 = fcn.000133a0();
            uVar2 = (**(iVar3 + 0x18))(0x226);
            *(*(arg1 + 0x18) + 0x18) = uVar2;
            iVar3 = fcn.000133a0();
            uVar2 = (**(iVar3 + 0x18))(0x224);
            *(*(arg1 + 0x18) + 0x1c) = uVar2;
            *(*(arg1 + 0x18) + 0x20) = 0x1000013;
            *(arg1 + 0x70) = 1;
            piVar1 = *(arg1 + 0x18) + 4;
            *piVar1 = *piVar1 + 4;
            **(arg1 + 0x20) = 0x54445352;
            *(*(arg1 + 0x20) + 4) = 0x24;
            *(*(arg1 + 0x20) + 8) = 1;
            iVar3 = fcn.000133a0();
            iVar3 = (**(iVar3 + 0x28))(0x225);
            iVar5 = *(arg1 + 0x20) + 10;
            if (iVar5 != iVar3) {
                section..text(iVar5,iVar3,6);
            }
            iVar3 = fcn.000133a0();
            uStackX_8 = (**(iVar3 + 0x20))(0x163);
            puVar6 = *(arg1 + 0x20) + 0x10;
            if (puVar6 != &uStackX_8) {
                section..text(puVar6,&uStackX_8,8);
            }
            iVar3 = fcn.000133a0();
            uVar2 = (**(iVar3 + 0x18))(0x226);
            *(*(arg1 + 0x20) + 0x18) = uVar2;
            iVar3 = fcn.000133a0();
            uVar2 = (**(iVar3 + 0x18))(0x224);
            *(*(arg1 + 0x20) + 0x1c) = uVar2;
            *(*(arg1 + 0x20) + 0x20) = 0x1000013;
            piVar1 = *(arg1 + 0x20) + 4;
            *piVar1 = *piVar1 + 4;
            *(arg1 + 0x78) = 1;
            **(arg1 + 0x28) = 0x54445358;
            *(*(arg1 + 0x28) + 4) = 0x24;
            *(*(arg1 + 0x28) + 8) = 1;
            iVar3 = fcn.000133a0();
            iVar3 = (**(iVar3 + 0x28))(0x225);
            iVar5 = *(arg1 + 0x28) + 10;
            if (iVar5 != iVar3) {
                section..text(iVar5,iVar3,6);
            }
            iVar3 = fcn.000133a0();
            uStackX_8 = (**(iVar3 + 0x20))(0x163);
            puVar6 = *(arg1 + 0x28) + 0x10;
            if (puVar6 != &uStackX_8) {
                section..text(puVar6,&uStackX_8,8);
            }
            iVar3 = fcn.000133a0();
            uVar2 = (**(iVar3 + 0x18))(0x226);
            *(*(arg1 + 0x28) + 0x18) = uVar2;
            iVar3 = fcn.000133a0();
            uVar2 = (**(iVar3 + 0x18))(0x224);
            *(*(arg1 + 0x28) + 0x1c) = uVar2;
            *(*(arg1 + 0x28) + 0x20) = 0x1000013;
            piVar1 = *(arg1 + 0x28) + 4;
            *piVar1 = *piVar1 + 8;
            fcn.000116dc(arg1);
            fcn.000117c0(arg1);
            return 0;
        }
        if (*0x14b68 == 0) {
            (**(*0x14b48 + 0x48))(*(arg1 + 8));
        }
        else {
            (**(*0x14b48 + 0x30))(*(arg1 + 8),1);
        }
    }
    return 0x8000000000000009;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 12864 named .text
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.000116dc @ 0x116dc */

ulong fcn.000116dc(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    char cVar3;
    char *pcVar4;
    uint64_t uVar5;
    int64_t iVar6;
    char cVar7;
    int64_t iVar8;
    
    pcVar4 = *(arg1 + 8);
    cVar3 = '\0';
    iVar6 = 0x14;
    iVar8 = 0x14;
    cVar7 = '\0';
    pcVar1 = pcVar4 + 8;
    *pcVar1 = '\0';
    do {
        cVar7 = cVar7 + *pcVar4;
        pcVar4 = pcVar4 + 1;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    cVar2 = '\0';
    *pcVar1 = -cVar7;
    pcVar4 = *(arg1 + 0x10);
    pcVar1 = pcVar4 + 8;
    *pcVar1 = '\0';
    do {
        cVar2 = cVar2 + *pcVar4;
        pcVar4 = pcVar4 + 1;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    iVar6 = 0x24;
    *pcVar1 = -cVar2;
    cVar7 = '\0';
    pcVar4 = *(arg1 + 0x10);
    pcVar1 = pcVar4 + 0x20;
    *pcVar1 = '\0';
    do {
        cVar7 = cVar7 + *pcVar4;
        pcVar4 = pcVar4 + 1;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    cVar2 = '\0';
    *pcVar1 = -cVar7;
    pcVar4 = *(arg1 + 0x18);
    pcVar1 = pcVar4 + 9;
    *pcVar1 = '\0';
    for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
        cVar2 = cVar2 + *pcVar4;
        pcVar4 = pcVar4 + 1;
    }
    *pcVar1 = -cVar2;
    cVar7 = '\0';
    pcVar4 = *(arg1 + 0x20);
    pcVar1 = pcVar4 + 9;
    *pcVar1 = '\0';
    for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
        cVar7 = cVar7 + *pcVar4;
        pcVar4 = pcVar4 + 1;
    }
    *pcVar1 = -cVar7;
    pcVar4 = *(arg1 + 0x28);
    pcVar1 = pcVar4 + 9;
    *pcVar1 = '\0';
    for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
        cVar3 = cVar3 + *pcVar4;
        pcVar4 = pcVar4 + 1;
    }
    *pcVar1 = -cVar3;
    return 0;
}


/* fcn.0001340c @ 0x1340c */

void fcn.0001340c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000133dc();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.000108c4 @ 0x108c4 */

ulong fcn.000108c4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3,uint32_t arg_b0h,int64_t arg_b8h)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    bool bVar4;
    char cVar5;
    int64_t iVar6;
    code *pcVar7;
    uint *puVar8;
    ulong *puVar9;
    char *pcVar10;
    uint64_t *puVar11;
    uint32_t arg2_00;
    int64_t arg2_01;
    uint64_t uVar12;
    int64_t *arg2_02;
    int64_t iVar13;
    ulong uVar14;
    int64_t iVar15;
    char *pcVar16;
    char in_stack_00000028;
    ulong *in_stack_00000030;
    uint64_t uStack_158;
    ulong uStack_150;
    int64_t iStack_148;
    int64_t aiStack_140 [3];
    uchar auStack_128 [8];
    int64_t iStack_120;
    int64_t iStack_118;
    
    iVar13 = 0;
    arg2_01 = 1;
    iVar15 = iVar13;
    iVar6 = *0x13548;
    while (iVar6 != 0) {
        iVar15 = iVar15 + 1;
        iVar6 = *(iVar15 * 0x10 + 0x13548);
    }
    arg2_00 = arg1;
    if (*0x14b38 == '\0') {
        aiStack_140[1] = 0x18;
        iVar6 = (**(*0x14b50 + 0x48))(L"OA3MSDMvariable",0x13530,0,aiStack_140 + 1,0x14b80);
        if (iVar6 == 0) {
            *0x14b38 = '\x01';
            if (auStack_128 != arg1) {
                section..text(auStack_128,arg2_00,0xf8);
            }
            aiStack_140[0] = 0xffffffff;
            iVar15 = (**(*0x14b48 + 0x28))(*0x14b68,10,1,aiStack_140);
            iVar6 = aiStack_140[0];
            if (iVar15 < 0) {
                return 0x8000000000000009;
            }
            fcn.000102c0(aiStack_140[0],0x38);
            *(arg1 + 8) = iVar6;
            *(arg1 + 0x10) = iVar6 + 0x14;
            uStack_150 = 0x2052545020445352;
            if (*(arg1 + 8) != &uStack_150) {
                section..text(*(arg1 + 8),&uStack_150,8);
            }
            iVar6 = fcn.000133a0();
            iVar6 = (**(iVar6 + 0x28))(0x225);
            iVar15 = *(arg1 + 8) + 9;
            if (iVar15 != iVar6) {
                section..text(iVar15,iVar6,6);
            }
            *(*(arg1 + 8) + 0xf) = 0;
            *(*(arg1 + 8) + 0x10) = *(arg1 + 0x18);
            uStack_150 = 0x2052545020445352;
            if (*(arg1 + 0x10) != &uStack_150) {
                section..text(*(arg1 + 0x10),&uStack_150,8);
            }
            iVar6 = fcn.000133a0();
            iVar6 = (**(iVar6 + 0x28))(0x225);
            iVar15 = *(arg1 + 0x10) + 9;
            if (iVar15 != iVar6) {
                section..text(iVar15,iVar6,6);
            }
            *(*(arg1 + 0x10) + 0xf) = 2;
            *(*(arg1 + 0x10) + 0x14) = 0x24;
            *(*(arg1 + 0x10) + 0x10) = *(arg1 + 0x20);
            uStack_150 = *(arg1 + 0x28);
            puVar9 = *(arg1 + 0x10) + 0x18;
            if (puVar9 != &uStack_150) {
                section..text(puVar9,&uStack_150,8);
            }
            fcn.000102e0(*(arg1 + 0x10) + 0x21,3,0);
            if (iStack_120 == 0) {
                iStack_120 = iStack_118;
            }
            (**(*0x14b48 + 0x30))(iStack_120);
            *0x14b39 = 1;
            fcn.00010674(arg2_00,arg2_01);
            *0x14b80 = *(arg1 + 0x28);
            *0x14b39 = 0;
            (**(*0x14b50 + 0x58))(L"OA3MSDMvariable",0x13530,6,0x18,0x14b80);
        }
    }
    pcVar7 = *0x14b30;
    while (pcVar7 != NULL) {
        (*pcVar7)(arg2);
        iVar13 = iVar13 + 1;
        pcVar7 = *(iVar13 * 8 + 0x14b30);
    }
    puVar8 = fcn.000133dc();
    iVar2 = *arg2;
    uVar3 = *(arg2 + 4);
    uVar12 = uVar3;
    iStack_148 = 0xffffffff;
    *(puVar8 + 10) = uVar12;
    *(puVar8 + 0xe) = 0;
    if ((iVar2 == 0x53434146) || (iVar2 == 0x49464555)) {
        if (in_stack_00000028 == '\0') {
            iVar6 = (**(*0x14b48 + 0x28))(1,10,((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc),&iStack_148);
            goto code_r0x00010c73;
        }
        iStack_148 = arg2;
code_r0x00010c8c:
        if (*(puVar8 + 0xe) == '\0') {
            *(puVar8 + 8) = iStack_148;
        }
        *puVar8 = 0x4c544145;
        if ((uVar12 != 0) && (*(puVar8 + 8) != arg2)) {
            section..text(*(puVar8 + 8),arg2,uVar12);
        }
        *(puVar8 + 0xc) = *(arg1 + 0x80);
        *(arg1 + 0x80) = *(arg1 + 0x80) + 1;
        *in_stack_00000030 = *(puVar8 + 0xc);
        puVar8[6] = arg3;
        if (iVar2 != 0x50434146) {
            if (iVar2 == 0x53434146) {
                if ((((arg3 & 2U) != 0) && (*(arg1 + 0x40) != 0)) || (((arg3 & 0x3cU) != 0 && (*(arg1 + 0x48) != 0))))
                goto code_r0x00010f6d;
                bVar4 = false;
                if ((arg3 & 2U) != 0) {
                    uVar14 = *(puVar8 + 8);
                    *(arg1 + 0x40) = uVar14;
                    if (*(arg1 + 0x30) != 0) {
                        *(*(arg1 + 0x30) + 0x24) = uVar14;
                        cVar5 = '\0';
                        pcVar10 = *(arg1 + 0x30);
                        pcVar16 = pcVar10 + 9;
                        *pcVar16 = '\0';
                        for (uVar12 = *(pcVar10 + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
                            cVar5 = cVar5 + *pcVar10;
                            pcVar10 = pcVar10 + 1;
                        }
                        *pcVar16 = -cVar5;
                    }
                }
                if ((arg3 & 0x3cU) != 0) {
                    uVar12 = *(puVar8 + 8);
                    *(arg1 + 0x48) = uVar12;
                    if (*(arg1 + 0x38) != 0) {
                        if (uVar12 < 0x100000000) {
                            *(*(arg1 + 0x38) + 0x24) = uVar12;
                            fcn.000102c0(*(arg1 + 0x38) + 0x84,8);
                        }
                        else {
                            puVar11 = *(arg1 + 0x38) + 0x84;
                            uStack_158 = uVar12;
                            if (puVar11 != &uStack_158) {
                                section..text(puVar11,&uStack_158,8);
                            }
                            *(*(arg1 + 0x38) + 0x24) = 0;
                        }
                        pcVar10 = *(arg1 + 0x38);
                        cVar5 = '\0';
                        pcVar16 = pcVar10 + 9;
                        *pcVar16 = '\0';
                        for (uVar12 = *(pcVar10 + 4); bVar4 = false, uVar12 != 0; uVar12 = uVar12 - 1) {
                            cVar5 = cVar5 + *pcVar10;
                            pcVar10 = pcVar10 + 1;
                        }
                        goto code_r0x000111b0;
                    }
                }
            }
            else {
                if (iVar2 == 0x54445344) {
                    if ((((arg3 & 2U) != 0) && (*(arg1 + 0x50) != 0)) ||
                       (((arg3 & 0x3cU) != 0 && (*(arg1 + 0x58) != 0)))) goto code_r0x00010f6d;
                    if ((arg3 & 2U) != 0) {
                        uVar14 = *(puVar8 + 8);
                        *(arg1 + 0x50) = uVar14;
                        if (*(arg1 + 0x30) != 0) {
                            *(*(arg1 + 0x30) + 0x28) = uVar14;
                            cVar5 = '\0';
                            pcVar10 = *(arg1 + 0x30);
                            pcVar16 = pcVar10 + 9;
                            *pcVar16 = '\0';
                            for (uVar12 = *(pcVar10 + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
                                cVar5 = cVar5 + *pcVar10;
                                pcVar10 = pcVar10 + 1;
                            }
                            *pcVar16 = -cVar5;
                        }
                    }
                    if ((arg3 & 0x3cU) != 0) {
                        iVar6 = *(arg1 + 0x38);
                        uVar12 = *(puVar8 + 8);
                        *(arg1 + 0x58) = uVar12;
                        if (iVar6 != 0) {
                            if (uVar12 < 0x100000000) {
                                *(iVar6 + 0x28) = uVar12;
                                uStack_158 = *(*(arg1 + 0x38) + 0x28);
                            }
                            else {
                                *(iVar6 + 0x28) = 0;
                                uStack_158 = *(arg1 + 0x58);
                            }
                            puVar11 = *(arg1 + 0x38) + 0x8c;
                            if (puVar11 != &uStack_158) {
                                section..text(puVar11,&uStack_158,8);
                            }
                            pcVar10 = *(arg1 + 0x38);
                            cVar5 = '\0';
                            pcVar16 = pcVar10 + 9;
                            *pcVar16 = '\0';
                            for (uVar12 = *(pcVar10 + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
                                cVar5 = cVar5 + *pcVar10;
                                pcVar10 = pcVar10 + 1;
                            }
                            *pcVar16 = -cVar5;
                        }
                    }
                    pcVar10 = *(puVar8 + 8);
                    cVar5 = '\0';
                    pcVar16 = pcVar10 + 9;
                    *pcVar16 = '\0';
                    for (uVar12 = *(pcVar10 + 4); bVar4 = false, uVar12 != 0; uVar12 = uVar12 - 1) {
                        cVar5 = cVar5 + *pcVar10;
                        pcVar10 = pcVar10 + 1;
                    }
                }
                else {
                    pcVar10 = *(puVar8 + 8);
                    cVar5 = '\0';
                    pcVar16 = pcVar10 + 9;
                    *pcVar16 = '\0';
                    for (uVar12 = *(pcVar10 + 4); bVar4 = true, uVar12 != 0; uVar12 = uVar12 - 1) {
                        cVar5 = cVar5 + *pcVar10;
                        pcVar10 = pcVar10 + 1;
                    }
                }
code_r0x000111b0:
                *pcVar16 = -cVar5;
            }
            arg2_02 = puVar8 + 2;
            *arg2_02 = arg1 + 0x60;
            puVar9 = *(arg1 + 0x68);
            *(puVar8 + 4) = puVar9;
            *puVar9 = arg2_02;
            *(arg1 + 0x68) = arg2_02;
            if (((arg3 & 2U) != 0) && (bVar4)) {
                if (*0x13560 <= *(arg1 + 0x70)) {
                    fcn.00010674(arg2_00,arg2_02);
                }
                arg2_02 = *(arg1 + 0x70);
                *(*(arg1 + 0x18) + 0x24 + arg2_02 * 4) = puVar8[8];
                piVar1 = *(arg1 + 0x18) + 4;
                *piVar1 = *piVar1 + 4;
                *(arg1 + 0x70) = *(arg1 + 0x70) + 1;
            }
            if (((arg3 & 0x3cU) != 0) && (bVar4)) {
                if (*0x13560 <= *(arg1 + 0x78)) {
                    fcn.00010674(arg2_00,arg2_02);
                }
                *(*(arg1 + 0x20) + 0x24 + *(arg1 + 0x78) * 4) = puVar8[8];
                piVar1 = *(arg1 + 0x20) + 4;
                *piVar1 = *piVar1 + 4;
                uStack_158 = *(puVar8 + 8);
                puVar11 = *(arg1 + 0x78) * 8 + 0x24 + *(arg1 + 0x28);
                if (puVar11 != &uStack_158) {
                    section..text(puVar11,&uStack_158,8);
                }
                piVar1 = *(arg1 + 0x28) + 4;
                *piVar1 = *piVar1 + 8;
                *(arg1 + 0x78) = *(arg1 + 0x78) + 1;
            }
            fcn.000116dc(arg1);
            uVar14 = 0;
            goto code_r0x0001128a;
        }
        bVar4 = false;
        if ((((arg3 & 2U) == 0) || (*(arg1 + 0x30) == 0)) && (((arg3 & 0x3cU) == 0 || (*(arg1 + 0x38) == 0)))) {
            if ((arg3 & 2U) != 0) {
                iVar6 = *(puVar8 + 8);
                *(arg1 + 0x30) = iVar6;
                *(iVar6 + 0x24) = *(arg1 + 0x40);
                *(*(arg1 + 0x30) + 0x28) = *(arg1 + 0x50);
                iVar15 = *(arg1 + 0x30) + 10;
                iVar6 = *(arg1 + 8) + 9;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,6);
                }
                iVar15 = *(arg1 + 0x30) + 10;
                iVar6 = *(arg1 + 0x18) + 10;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,6);
                }
                iVar15 = *(arg1 + 0x30) + 0x10;
                iVar6 = *(arg1 + 0x18) + 0x10;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,8);
                }
                *(*(arg1 + 0x18) + 0x18) = *(*(arg1 + 0x30) + 0x18);
            }
            if ((arg3 & 0x3cU) != 0) {
                uStack_158 = *(arg1 + 0x48);
                iVar6 = *(puVar8 + 8);
                *(arg1 + 0x38) = iVar6;
                if (uStack_158 < 0x100000000) {
                    *(iVar6 + 0x24) = uStack_158;
                    fcn.000102c0(*(arg1 + 0x38) + 0x84,8);
                }
                else {
                    if (iVar6 + 0x84 != &uStack_158) {
                        section..text(iVar6 + 0x84,&uStack_158,8);
                    }
                    *(*(arg1 + 0x38) + 0x24) = 0;
                }
                if (*(arg1 + 0x58) < 0x100000000) {
                    *(*(arg1 + 0x38) + 0x28) = *(arg1 + 0x58);
                    uStack_158 = *(*(arg1 + 0x38) + 0x28);
                }
                else {
                    *(*(arg1 + 0x38) + 0x28) = 0;
                    uStack_158 = *(arg1 + 0x58);
                }
                puVar11 = *(arg1 + 0x38) + 0x8c;
                if (puVar11 != &uStack_158) {
                    section..text(puVar11,&uStack_158,8);
                }
                iVar15 = *(arg1 + 0x38) + 10;
                iVar6 = *(arg1 + 0x10) + 9;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,6);
                }
                iVar15 = *(arg1 + 0x38) + 10;
                iVar6 = *(arg1 + 0x20) + 10;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,6);
                }
                iVar15 = *(arg1 + 0x38) + 0x10;
                iVar6 = *(arg1 + 0x20) + 0x10;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,8);
                }
                *(*(arg1 + 0x20) + 0x18) = *(*(arg1 + 0x38) + 0x18);
                iVar15 = *(arg1 + 0x38) + 10;
                iVar6 = *(arg1 + 0x28) + 10;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,6);
                }
                iVar15 = *(arg1 + 0x38) + 0x10;
                iVar6 = *(arg1 + 0x28) + 0x10;
                if (iVar6 != iVar15) {
                    section..text(iVar6,iVar15,8);
                }
                *(*(arg1 + 0x28) + 0x18) = *(*(arg1 + 0x38) + 0x18);
            }
            pcVar10 = *(puVar8 + 8);
            cVar5 = '\0';
            pcVar16 = pcVar10 + 9;
            *pcVar16 = '\0';
            for (uVar12 = *(pcVar10 + 4); uVar12 != 0; uVar12 = uVar12 - 1) {
                cVar5 = cVar5 + *pcVar10;
                pcVar10 = pcVar10 + 1;
            }
            goto code_r0x000111b0;
        }
code_r0x00010f6d:
        fcn.00010888(puVar8);
        uVar14 = 0x800000000000000f;
    }
    else {
        if (*0x14b68 == 0) {
            iVar6 = (**(*0x14b48 + 0x40))(9,uVar12,puVar8 + 8);
            *(puVar8 + 0xe) = 1;
        }
        else {
            iVar6 = (**(*0x14b48 + 0x28))(*0x14b68,9,((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc),&iStack_148);
            *(puVar8 + 8) = iStack_148;
        }
code_r0x00010c73:
        if (-1 < iVar6) goto code_r0x00010c8c;
        uVar14 = 0x8000000000000009;
    }
    (**(*0x14b48 + 0x48))(puVar8);
code_r0x0001128a:
    return uVar14;
}


/* fcn.00010424 @ 0x10424 */

ulong fcn.00010424(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    ulong *arg1_00;
    ulong uVar4;
    ulong auStackX_18 [2];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 & 2U) != 0) {
        *(*(iVar3 + 0x18) + 0x24) = *(iVar3 + 0x30);
        *(*(iVar3 + 0x20) + 0x24) = *(iVar3 + 0x38);
    }
    if ((arg2 & 0x3cU) != 0) {
        auStackX_18[0] = *(iVar3 + 0x38);
        arg1_00 = *(iVar3 + 0x28) + 0x24;
        if (arg1_00 != auStackX_18) {
            section..text(arg1_00,auStackX_18,8);
        }
    }
    fcn.000116dc(iVar3);
    uVar1 = (**(*0x14b48 + 0x18))(0x10);
    uVar4 = 0;
    if (((arg2 & 2U) != 0) && (iVar2 = (**(*0x14b48 + 0xc0))(0x134d0,*(iVar3 + 8)), iVar2 < 0)) {
        (**(*0x14b48 + 0x20))(uVar1);
        return 0x8000000000000015;
    }
    if (((arg2 & 0x3cU) != 0) && (iVar3 = (**(*0x14b48 + 0xc0))(0x134e0,*(iVar3 + 0x10)), iVar3 < 0)) {
        uVar4 = 0x8000000000000015;
    }
    (**(*0x14b48 + 0x20))(uVar1);
    return uVar4;
}


/* fcn.0001168c @ 0x1168c */

ulong fcn.0001168c(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    
    puVar1 = *(arg1 + 0x60);
    while( true ) {
        if (puVar1 == arg1 + 0x60) {
            return 0x800000000000000e;
        }
        if (puVar1[5] == arg2) break;
        puVar1 = *puVar1;
    }
    iVar2 = fcn.00011418(arg1,noname_1,puVar1 + -1);
    uVar3 = 0;
    if (iVar2 < 0) {
        uVar3 = 0x8000000000000015;
    }
    return uVar3;
}


/* fcn.000133a0 @ 0x133a0 */

int64_t fcn.000133a0(void)

{
    if (*0x14b58 == 0) {
        (**(*0x14b48 + 0x140))(0x134c0,0,0x14b58);
    }
    return *0x14b58;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010674 @ 0x10674 */

ulong fcn.00010674(uint32_t arg1,int64_t arg2)

{
    uint64_t arg2_00;
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uchar *puVar3;
    int64_t iVar4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    ulong uStackX_18;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    uchar auStack_118 [24];
    int64_t iStack_100;
    int64_t iStack_f8;
    int64_t iStack_f0;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (auStack_118 != puVar3) {
        section..text(auStack_118,arg1,0xf8);
    }
    iVar4 = *0x13560;
    if (*0x14b39 == '\0') {
        iVar4 = *0x13560 + 0xdc;
    }
    arg2_00 = iVar4 * 0x10 + 0x6c;
    if (*0x14b68 == 0) {
        iVar1 = (**(*0x14b48 + 0x40))((*0x14b38 != '\0') + '\t',arg2_00,&iStackX_8);
    }
    else {
        iStackX_10 = 0xffffffff;
        iVar1 = (**(*0x14b48 + 0x28))(*0x14b68,(*0x14b38 != '\0') + '\t',(arg2_00 >> 0xc) + 1,&iStackX_10);
    }
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000009;
    }
    else {
        if (*0x14b68 != 0) {
            iStackX_8 = iStackX_10;
        }
        fcn.000102c0(iStackX_8,arg2_00);
        iVar1 = iVar4 * 4 + 0x24;
        *(puVar3 + 0x18) = iStackX_8;
        iStackX_8 = iStackX_8 + iVar1;
        *(puVar3 + 0x20) = iStackX_8;
        iStackX_8 = iStackX_8 + iVar1;
        *(puVar3 + 0x28) = iStackX_8;
        *(*(puVar3 + 8) + 0x10) = *(puVar3 + 0x18);
        *(*(puVar3 + 0x10) + 0x10) = *(puVar3 + 0x20);
        uStackX_18 = *(puVar3 + 0x28);
        if (*(puVar3 + 0x10) + 0x18 != &uStackX_18) {
            section..text(*(puVar3 + 0x10) + 0x18,&uStackX_18,8);
        }
        iVar1 = *0x13560 * 4 + 0x24;
        if ((iVar1 != 0) && (*(puVar3 + 0x18) != iStack_100)) {
            section..text(*(puVar3 + 0x18),iStack_100,iVar1);
        }
        iVar1 = *0x13560 * 4 + 0x24;
        if ((iVar1 != 0) && (*(puVar3 + 0x20) != iStack_f8)) {
            section..text(*(puVar3 + 0x20),iStack_f8,iVar1);
        }
        if (*(puVar3 + 0x28) != iStack_f0) {
            section..text(*(puVar3 + 0x28),iStack_f0,*0x13560 * 8 + 0x24);
        }
        if (*0x14b68 == 0) {
            (**(*0x14b48 + 0x48))(iStack_100);
        }
        else {
            (**(*0x14b48 + 0x30))(iStack_100,(*0x13560 * 0x10 + 0x6cU >> 0xc) + 1);
        }
        uVar2 = 0;
        *0x13560 = iVar4;
    }
    return uVar2;
}


/* fcn.00010888 @ 0x10888 */

void fcn.00010888(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x38) != '\0') {
    //WARNING: Could not recover jumptable at 0x0001089a. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x14b48 + 0x48))(*(iVar1 + 0x20));
        return;
    }
    //WARNING: Could not recover jumptable at 0x000108bd. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14b48 + 0x30))(*(iVar1 + 0x20),((*(iVar1 + 0x28) & 0xfff) != 0) + (*(iVar1 + 0x28) >> 0xc));
    return;
}


/* fcn.000112ac @ 0x112ac */

ulong fcn.000112ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    uint64_t uVar3;
    int *arg1_00;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *arg1_01;
    int64_t *piVar6;
    int64_t iStackX_10;
    
    uVar3 = 0;
    if (*arg2 != 0) {
        piVar6 = arg4 + 0x24;
        uVar5 = arg3 + 0x24;
        do {
            arg1_00 = -(arg3 != 0) & uVar5;
            if (arg4 == 0) {
                arg1_01 = NULL;
                iStackX_10 = 0;
            }
            else {
                arg1_01 = piVar6;
                if (&iStackX_10 != piVar6) {
                    section..text(&iStackX_10,piVar6,8);
                }
            }
            if (((arg3 == 0) || (*arg1_00 == *(arg1 + 0x20))) && ((arg4 == 0 || (iStackX_10 == *(arg1 + 0x20))))) {
                if (arg3 != 0) {
                    iVar4 = (*arg2 - uVar3) * 4;
                    if ((iVar4 != 0) && (arg1_00 != arg1_00 + 1)) {
                        section..text(arg1_00,arg1_00 + 1,iVar4);
                    }
                    *(arg3 + 4) = *(arg3 + 4) + -4;
                }
                if (arg4 != 0) {
                    iVar4 = (*arg2 - uVar3) * 8;
                    if ((iVar4 != 0) && (arg1_01 != arg1_01 + 1)) {
                        section..text(arg1_01,arg1_01 + 1,iVar4);
                    }
                    *(arg4 + 4) = *(arg4 + 4) + -8;
                }
                break;
            }
            uVar3 = uVar3 + 1;
            if (uVar3 == *arg2) {
                return 0x8000000000000002;
            }
            uVar5 = uVar5 + 4;
            piVar6 = piVar6 + 1;
        } while (uVar3 < *arg2);
    }
    if (arg3 != 0) {
        pcVar1 = arg3 + 9;
        cVar2 = '\0';
        *pcVar1 = '\0';
        for (uVar3 = *(arg3 + 4); uVar3 != 0; uVar3 = uVar3 - 1) {
            cVar2 = cVar2 + *arg3;
            arg3 = arg3 + 1;
        }
        *pcVar1 = -cVar2;
    }
    if (arg4 != 0) {
        pcVar1 = arg4 + 9;
        cVar2 = '\0';
        *pcVar1 = '\0';
        for (uVar3 = *(arg4 + 4); uVar3 != 0; uVar3 = uVar3 - 1) {
            cVar2 = cVar2 + *arg4;
            arg4 = arg4 + 1;
        }
        *pcVar1 = -cVar2;
    }
    *arg2 = *arg2 + -1;
    return 0;
}


/* fcn.00011418 @ 0x11418 */

ulong fcn.00011418(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    char cVar2;
    char cVar3;
    char *pcVar4;
    uint64_t uVar5;
    char cVar6;
    uint32_t uVar7;
    char *pcVar8;
    
    piVar1 = *(arg3 + 0x20);
    cVar2 = '\x01';
    cVar3 = '\0';
    if ((*piVar1 == 0x53434146) || (*piVar1 == 0x54445344)) {
        cVar2 = '\0';
    }
    cVar6 = cVar3;
    if (*piVar1 != 0x50434146) {
        cVar6 = cVar2;
    }
    if (piVar1 != NULL) {
        uVar7 = arg2;
        if ((*(arg3 + 0x18) & uVar7 & 1) != 0) {
            *(arg3 + 0x18) = *(arg3 + 0x18) & 0xfffffffe;
        }
        if (((*(arg3 + 0x18) & uVar7 & 2) != 0) && (*(arg3 + 0x18) = *(arg3 + 0x18) & 0xfffffffd, cVar6 != '\0')) {
            fcn.000112ac(arg3,arg1 + 0x70,*(arg1 + 0x18),0);
        }
        if (((*(arg3 + 0x18) & uVar7 & 0x3c) != 0) &&
           (*(arg3 + 0x18) = *(arg3 + 0x18) & ~(uVar7 & 0x3c), cVar6 != '\0')) {
            fcn.000112ac(arg3,arg1 + 0x78,*(arg1 + 0x20),*(arg1 + 0x28));
        }
        piVar1 = *(arg3 + 0x20);
        if (*piVar1 == 0x50434146) {
            if ((arg2 & 2U) != 0) {
                *(arg1 + 0x30) = 0;
            }
            if ((arg2 & 0x3cU) != 0) {
                *(arg1 + 0x38) = 0;
            }
        }
        else {
            if (*piVar1 == 0x53434146) {
                if ((arg2 & 2U) != 0) {
                    *(arg1 + 0x40) = 0;
                    if (*(arg1 + 0x30) != 0) {
                        *(*(arg1 + 0x30) + 0x24) = 0;
                        pcVar4 = *(arg1 + 0x30);
                        pcVar8 = pcVar4 + 9;
                        *pcVar8 = '\0';
                        cVar2 = cVar3;
                        for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
                            cVar2 = cVar2 + *pcVar4;
                            pcVar4 = pcVar4 + 1;
                        }
                        *pcVar8 = -cVar2;
                    }
                }
                if ((arg2 & 0x3cU) == 0) goto code_r0x0001163c;
                *(arg1 + 0x48) = 0;
                if (*(arg1 + 0x38) == 0) goto code_r0x0001163c;
                *(*(arg1 + 0x38) + 0x24) = 0;
                fcn.000102c0(*(arg1 + 0x38) + 0x84,8);
                pcVar4 = *(arg1 + 0x38);
                pcVar8 = pcVar4 + 9;
                *pcVar8 = '\0';
                for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
                    cVar3 = cVar3 + *pcVar4;
                    pcVar4 = pcVar4 + 1;
                }
            }
            else {
                if (*piVar1 != 0x54445344) goto code_r0x0001163c;
                if ((arg2 & 2U) != 0) {
                    *(arg1 + 0x50) = 0;
                    if (*(arg1 + 0x30) != 0) {
                        *(*(arg1 + 0x30) + 0x28) = 0;
                        pcVar4 = *(arg1 + 0x30);
                        pcVar8 = pcVar4 + 9;
                        *pcVar8 = '\0';
                        cVar2 = cVar3;
                        for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
                            cVar2 = cVar2 + *pcVar4;
                            pcVar4 = pcVar4 + 1;
                        }
                        *pcVar8 = -cVar2;
                    }
                }
                if ((arg2 & 0x3cU) == 0) goto code_r0x0001163c;
                *(arg1 + 0x58) = 0;
                if (*(arg1 + 0x38) == 0) goto code_r0x0001163c;
                *(*(arg1 + 0x38) + 0x28) = 0;
                fcn.000102c0(*(arg1 + 0x38) + 0x8c,8);
                pcVar4 = *(arg1 + 0x38);
                pcVar8 = pcVar4 + 9;
                *pcVar8 = '\0';
                for (uVar5 = *(pcVar4 + 4); uVar5 != 0; uVar5 = uVar5 - 1) {
                    cVar3 = cVar3 + *pcVar4;
                    pcVar4 = pcVar4 + 1;
                }
            }
            *pcVar8 = -cVar3;
        }
    }
code_r0x0001163c:
    if (*(arg3 + 0x18) == 0) {
        fcn.00010888(arg3);
        *(*(arg3 + 8) + 8) = *(arg3 + 0x10);
        **(arg3 + 0x10) = *(arg3 + 8);
        (**(*0x14b48 + 0x48))(arg3);
    }
    return 0;
}


/* fcn.000117c0 @ 0x117c0 */

int64_t fcn.000117c0(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int16_t *piVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t arg3;
    int **ppiVar9;
    uint64_t uVar10;
    int *apiStackX_10 [2];
    uint32_t in_stack_00000048;
    int64_t in_stack_00000050;
    
    piVar3 = fcn.0001344c();
    do {
        if (*piVar3 == -1) {
            piVar3 = NULL;
code_r0x00011812:
            if (piVar3 == NULL) {
                return -0x7ffffffffffffff2;
            }
            if ((*0x134f0 == *(piVar3 + 4)) && (*0x134f8 == *(piVar3 + 8))) break;
        }
        else if (*piVar3 == 4) goto code_r0x00011812;
        piVar3 = piVar3 + piVar3[1];
    } while( true );
    if (((piVar3 == NULL) || (((piVar3[1] - 0x18U < 4 || (piVar3[1] - 0x18U < piVar3[0xd])) || (piVar3[0xc] != '\x01')))
        ) || (piVar3[0xd] < 0xc)) {
        return -0x7ffffffffffffff2;
    }
    arg3 = 8;
    uVar7 = *(*(piVar3 + 0xe) + 0x18);
    if (uVar7 == 0) {
        uVar7 = *(*(piVar3 + 0xe) + 0x10);
        arg3 = 4;
    }
    if (*(uVar7 + 4) < 0x25) {
        return -0x7fffffffffffffeb;
    }
    uVar10 = 0;
    uVar4 = (*(uVar7 + 4) - 0x24) / arg3;
    if (uVar4 != 0) {
        ppiVar9 = uVar7 + 0x24;
        uVar7 = *0x134f8;
        do {
            apiStackX_10[0] = NULL;
            if (apiStackX_10 != ppiVar9) {
                uVar7 = arg3;
                section..text(apiStackX_10,ppiVar9,arg3);
            }
            piVar2 = apiStackX_10[0];
            iVar5 = fcn.000108c4(arg1,apiStackX_10[0],uVar7,0x3e,in_stack_00000048,in_stack_00000050);
            if ((iVar5 < 0) ||
               ((*piVar2 == 0x50434146 &&
                (((piVar2[9] != 0 &&
                  (iVar5 = fcn.000108c4(arg1,piVar2[9],uVar7,0x3e,in_stack_00000048,in_stack_00000050), iVar5 < 0)
                  ) || ((piVar2[10] != 0 &&
                        (iVar5 = fcn.000108c4(arg1,piVar2[10],uVar7,0x3e,in_stack_00000048,in_stack_00000050),
                        iVar5 < 0)))))))) goto code_r0x00011973;
            uVar10 = uVar10 + 1;
            ppiVar9 = ppiVar9 + arg3;
        } while (uVar10 < uVar4);
        if (iVar5 < 0) {
code_r0x00011973:
            piVar1 = arg1 + 0x60;
            do {
                piVar6 = *piVar1;
                iVar8 = 0;
                if (piVar6 == piVar1) {
                    return iVar5;
                }
                do {
                    if (iVar8 == 0) goto code_r0x00011996;
                    piVar6 = *piVar6;
                    iVar8 = iVar8 + 1;
                } while (piVar6 != piVar1);
                if (iVar8 != 0) {
                    return iVar5;
                }
code_r0x00011996:
                if (piVar6 == piVar1) {
                    return iVar5;
                }
                fcn.0001168c(arg1,*(piVar6 + 2),piVar6[5]);
            } while( true );
        }
    }
    iVar5 = fcn.00010424(arg1,0x3e);
    return iVar5;
}


/* fcn.000127bc @ 0x127bc */

int64_t fcn.000127bc(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    if (*arg1 == '[') {
        cVar1 = *(arg1 + 1);
    }
    else {
        cVar1 = '\0';
    }
    uVar3 = uVar2;
    while ((*(uVar3 + 0x13680) != *arg1 || (*(uVar3 + 0x13681) != cVar1))) {
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 0x24;
        if (0x141b < uVar3) {
            return 0;
        }
    }
    return uVar2 * 0x24 + 0x13680;
}


/* fcn.00012cf8 @ 0x12cf8 */

uint64_t fcn.00012cf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg2_00;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint *in_stack_00000028;
    int64_t *in_stack_00000030;
    uint64_t *in_stack_00000038;
    int64_t aiStack_38 [2];
    
    uVar4 = arg4;
    if ((*(arg1 + 0x20) & 2) == 0) {
        if (uVar4 != 0xffffffff) {
            *in_stack_00000028 = 1;
            *in_stack_00000030 = arg2;
        }
        uVar3 = (*arg2 == '[') + 1;
        *in_stack_00000038 = uVar3;
        if (uVar4 == 0) {
            return 0;
        }
        if (uVar3 <= arg3) {
            iVar1 = arg1;
            if ((*(arg1 + 0x20) & 1) == 0) {
                iVar2 = 0;
                aiStack_38[0] = 0;
            }
            else {
                iVar2 = fcn.00012804(uVar3 + arg2,aiStack_38);
                if (arg3 < uVar3 + aiStack_38[0]) {
                    return 0x8000000000000002;
                }
                arg3 = uVar3 + aiStack_38[0];
            }
            arg2_00 = uVar3 + arg2 + iVar2;
            uVar5 = 1;
            if (uVar4 != 0) {
                do {
                    if ((*(iVar1 + 4) < uVar5) || (arg2 + arg3 <= arg2_00)) break;
                    iVar1 = fcn.00012b54(iVar1,arg2_00,(arg2 - arg2_00) + arg3,uVar5);
                    if (iVar1 < 0) {
                        return 0x8000000000000002;
                    }
                    if (uVar4 == uVar5) {
                        return 0;
                    }
                    arg2_00 = arg2_00 + *in_stack_00000038;
                    uVar5 = uVar5 + 1;
                    iVar1 = arg1;
                } while (uVar5 <= uVar4);
            }
            if ((arg2_00 <= arg2 + arg3) && ((arg2_00 != arg2 + arg3 || (uVar4 == 0xffffffff)))) {
                if ((*(iVar1 + 0x20) & 1) != 0) {
                    *in_stack_00000038 = aiStack_38[0] + uVar3;
                    return 0;
                }
                *in_stack_00000038 = arg2_00 - arg2;
                return 0;
            }
        }
    }
    else if ((uVar4 == 0xffffffff) && (iVar1 = fcn.00012870(arg2,in_stack_00000038), -1 < iVar1)) {
        return -(arg3 < *in_stack_00000038) & 0x8000000000000002;
    }
    return 0x8000000000000002;
}


/* fcn.000125ec @ 0x125ec */

ulong fcn.000125ec(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint64_t arg1_00;
    uint64_t uVar2;
    bool bVar3;
    int64_t iStackX_8;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    uVar2 = *(arg1 + 8) + *(arg1 + 0x10);
    bVar3 = arg1_00 < uVar2;
    while( true ) {
        if (!bVar3) {
            *arg3 = 0;
            return 0;
        }
        iVar1 = fcn.000127bc(arg1_00);
        if (iVar1 == 0) {
            return 0x8000000000000002;
        }
        if ((*(iVar1 + 0x20) & 2) == 0) {
            *arg3 = arg1_00;
            return 0;
        }
        iVar1 = fcn.00012cf8(iVar1,arg1_00,uVar2 - arg1_00,0xffffffff);
        if (iVar1 < 0) break;
        if (iStackX_8 == 0) {
            return 0x8000000000000002;
        }
        arg1_00 = arg1_00 + iStackX_8;
        uVar2 = *(arg1 + 8) + *(arg1 + 0x10);
        bVar3 = arg1_00 < uVar2;
    }
    return 0x8000000000000002;
}


/* fcn.00012698 @ 0x12698 */

ulong fcn.00012698(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    
    iVar5 = arg1;
    if (arg2 != 0) {
        iVar5 = arg2;
    }
    uVar1 = *(*(arg1 + 0x18) + 4);
    uVar6 = 1;
    if (uVar1 != 0) {
        do {
            iVar2 = fcn.00012cf8(*(arg1 + 0x18),*(arg1 + 8),*(arg1 + 0x10),uVar6);
            if (iVar2 < 0) {
                return 0x8000000000000002;
            }
            if (uStackX_8 == 0) break;
            if ((uStackX_8 == 6) && (*(iVar5 + 8) < uStackX_10)) {
                *arg3 = uStackX_10;
                if (uStackX_10 != 0) {
                    return 0;
                }
                goto code_r0x00012728;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 <= uVar1);
    }
    *arg3 = 0;
code_r0x00012728:
    uStackX_8 = 0;
    if ((*(*(arg1 + 0x18) + 0x20) & 4) != 0) {
        iVar2 = fcn.00012eb0(arg1,&uStackX_8);
        if (iVar2 < 0) {
            return 0x8000000000000002;
        }
        uVar4 = uStackX_8;
        if ((*(iVar5 + 8) < uStackX_8) ||
           (uVar4 = *(iVar5 + 0x10) + *(iVar5 + 8), uVar4 < *(arg1 + 0x10) + *(arg1 + 8))) {
            uVar3 = fcn.000125ec(arg1,uVar4,arg3);
            return uVar3;
        }
    }
    *arg3 = 0;
    return 0;
}


/* fcn.00012094 @ 0x12094 */

ulong fcn.00012094(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint *puVar2;
    int64_t iStackX_20;
    
    iVar1 = fcn.000127bc(arg1);
    if ((iVar1 != 0) && ((*(iVar1 + 0x20) & 2) == 0)) {
        puVar2 = fcn.000133dc();
        *puVar2 = 0x53484145;
        *(puVar2 + 2) = arg1;
        *(puVar2 + 6) = iVar1;
        *(puVar2 + 8) = 0;
        iVar1 = fcn.00012cf8(iVar1,arg1,arg2,0xffffffff);
        if (iVar1 < 0) {
            iStackX_20 = 0;
        }
        *(puVar2 + 4) = iStackX_20;
        if (iStackX_20 != 0) {
            *arg3 = puVar2;
            return 0;
        }
        (**(*0x14b48 + 0x48))(puVar2);
    }
    return 0x8000000000000002;
}


/* fcn.000123a8 @ 0x123a8 */

ulong fcn.000123a8(uint32_t arg1,uint32_t arg2)

{
    int *arg2_00;
    uint32_t arg2_01;
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int *arg1_00;
    uint in_register_00000014;
    ulong *arg3;
    int64_t iStackX_8;
    
    arg3 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg1_00 != NULL) && ((arg2_00 = *arg3, arg2_00 == NULL || (*arg2_00 == 0x53484145)))) {
        if (*arg1_00 == 0x48524145) {
            if (arg2_00 == NULL) {
                arg2_01 = *(arg1_00 + 2);
            }
            else {
                arg2_01 = *(arg2_00 + 4) + *(arg2_00 + 2);
            }
            iVar1 = fcn.000125ec(arg1_00,arg2_01,&iStackX_8);
        }
        else {
            if (*arg1_00 != 0x53484145) {
                return 0x8000000000000002;
            }
            iVar1 = fcn.00012698(arg1_00,arg2_00,&iStackX_8);
        }
        if (-1 < iVar1) {
            if (iStackX_8 != 0) {
                uVar2 = fcn.00012094(iStackX_8,(*(arg1_00 + 4) + *(arg1_00 + 2)) - iStackX_8,arg3);
                return uVar2;
            }
            *arg3 = 0;
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.000132d8 @ 0x132d8 */

ulong fcn.000132d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t arg2_00;
    int64_t iVar2;
    ulong uVar3;
    ushort auStackX_8 [4];
    
    auStackX_8[0] = 0x5c;
    arg2_00 = fcn.00012f28(auStackX_8,0,*(arg1 + 0x18));
    iVar2 = fcn.00013174(arg1,arg2_00,arg2_00);
    if (iVar2 < 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        if (arg4 == '\0') {
            piVar1 = *(arg2_00 + 0x28);
            if (piVar1 == arg2_00 + 0x28) {
                iVar2 = 0;
            }
            else {
                iVar2 = piVar1 + -3;
            }
        }
        else {
            iVar2 = arg2_00;
        }
        if (iVar2 == 0) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.00012fb0(arg2,arg2_00,iVar2,0);
        }
        *arg3 = 0;
        if (iVar2 != 0) {
            uVar3 = *arg3;
            if (*(iVar2 + 8) != 0) {
                uVar3 = *(iVar2 + 8);
            }
            *arg3 = uVar3;
        }
        fcn.00013278(arg2_00);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000129cc @ 0x129cc */

uchar * fcn.000129cc(uint32_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uchar *arg1_00;
    int64_t iVar3;
    uint in_register_0000000c;
    char cVar4;
    char *pcVar5;
    uchar *puVar6;
    uint64_t uVar7;
    char *pcVar8;
    int64_t in_R8;
    int64_t iVar9;
    
    pcVar8 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    iVar9 = 0;
    iVar3 = 0;
    if (*pcVar8 == '\\') {
        iVar9 = 1;
        pcVar5 = pcVar8 + 1;
    }
    else {
        cVar4 = *pcVar8;
        pcVar5 = pcVar8;
        while (cVar4 == '^') {
            pcVar5 = pcVar5 + 1;
            iVar3 = iVar3 + 1;
            cVar4 = *pcVar5;
        }
    }
    if (*pcVar5 != '\0') {
        do {
            uVar1 = fcn.00012944(pcVar5);
            if (uVar1 == 0) {
                return NULL;
            }
            if (4 < uVar1) {
                return NULL;
            }
            uVar7 = uVar7 + 1;
        } while ((pcVar5[uVar1] != '\0') && (pcVar5 = pcVar5 + uVar1 + 1, *pcVar5 != '\0'));
        if (0xff < uVar7) {
            return NULL;
        }
    }
    iVar2 = iVar9 + uVar7 * 4 + iVar3;
    if (uVar7 < 3) {
        if (uVar7 == 2) {
            iVar2 = iVar2 + 1;
        }
    }
    else {
        iVar2 = iVar2 + 2;
    }
    if (iVar2 == -1) {
        return NULL;
    }
    arg1_00 = fcn.000133dc();
    if (iVar9 == 1) {
        *arg1_00 = 0x5c;
        pcVar8 = pcVar8 + 1;
        puVar6 = arg1_00 + 1;
    }
    else {
        puVar6 = arg1_00;
        if (iVar3 != 0) {
            in_R8 = CONCAT71(in_R8 >> 8,0x5e);
            fcn.000102e0(arg1_00,iVar3,in_R8);
            pcVar8 = pcVar8 + iVar3;
            puVar6 = arg1_00 + iVar3;
        }
    }
    if (uVar7 < 3) {
        if (uVar7 == 2) {
            *puVar6 = 0x2e;
            puVar6 = puVar6 + 1;
        }
    }
    else {
        *puVar6 = 0x2f;
        puVar6[1] = uVar7;
        puVar6 = puVar6 + 2;
    }
    for (; *pcVar8 != '\0'; pcVar8 = pcVar8 + iVar3 + 1) {
        iVar3 = fcn.00012944(pcVar8);
        if (iVar3 != 0) {
            in_R8 = puVar6 - pcVar8;
            pcVar5 = pcVar8;
            iVar9 = iVar3;
            do {
                cVar4 = *pcVar5;
                if (cVar4 + 0x9fU < 0x1a) {
                    cVar4 = cVar4 + -0x20;
                }
                pcVar5[in_R8] = cVar4;
                pcVar5 = pcVar5 + 1;
                iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
        }
        if (4 - iVar3 != 0) {
            in_R8 = CONCAT71(in_R8 >> 8,0x5f);
            fcn.000102e0(puVar6 + iVar3,4 - iVar3,in_R8);
        }
        puVar6 = puVar6 + 4;
        if (pcVar8[iVar3] == '\0') break;
    }
    arg1_00[iVar2] = 0;
    return arg1_00;
}


/* fcn.00012448 @ 0x12448 */

ulong fcn.00012448(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t extraout_RAX;
    uint in_register_00000014;
    char *arg2_00;
    unkbyte7 in_R9;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    iStackX_10 = 0;
    if ((*arg2_00 == '\\') && (arg2_00[1] == '\0')) {
        iVar1 = fcn.000133dc(arg1,0x28);
        if (iVar1 != arg1) {
            section..text(iVar1,arg1,0x28);
        }
        *arg3 = iVar1;
    }
    else {
        iStackX_8 = 0;
        do {
            iVar2 = fcn.000123a8(arg1,&iStackX_8);
            iVar1 = iStackX_8;
            if (iVar2 < 0) {
                return 0x8000000000000002;
            }
            if (iStackX_8 == 0) {
                *arg3 = 0;
                return 0;
            }
            fcn.000132d8(iStackX_8,arg2_00,&iStackX_10,CONCAT71(in_R9,1));
            if (extraout_RAX < 0) {
                return 0x8000000000000002;
            }
        } while ((iStackX_10 == 0) ||
                (iVar1 = fcn.00012094(iStackX_10,(*(iVar1 + 0x10) + *(iVar1 + 8)) - iStackX_10,arg3), iVar1 < 0));
    }
    return 0;
}


/* fcn.00012eb0 @ 0x12eb0 */

ulong fcn.00012eb0(int64_t arg1,uint32_t *arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int iStackX_8;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iVar1 = fcn.00012cf8(*(arg1 + 0x18),*(arg1 + 8),*(arg1 + 0x10),*(*(arg1 + 0x18) + 4));
    if (iVar1 < 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        *arg2 = iStackX_18 + iStackX_20;
        if (iStackX_8 == 1) {
            iVar1 = fcn.00012804(iStackX_18 + iStackX_20,&iStackX_18);
            *arg2 = *arg2 + iVar1;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012944 @ 0x12944 */

int64_t fcn.00012944(uint32_t arg1)

{
    uint8_t uVar1;
    uint in_register_0000000c;
    char *pcVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*pcVar2 != '\0') {
        iVar3 = 0;
        if ((*pcVar2 + 0xbfU < 0x3a) && ((0x3ffffff43ffffffU >> (*pcVar2 + 0xbfU & 0x3fU) & 1) != 0)) {
            pcVar2 = pcVar2 + 1;
            iVar3 = 1;
        }
        if ((*pcVar2 == '\0') || (*pcVar2 == '.')) {
            return iVar3;
        }
        uVar5 = 0;
        iVar4 = iVar3;
        do {
            uVar1 = pcVar2[iVar4 - iVar3] - 0x30;
            if (((uVar1 < 0x30) && ((0x87fffffe03ffU >> (uVar1 & 0x3fU) & 1) != 0)) ||
               (pcVar2[iVar4 - iVar3] + 0x9fU < 0x1a)) {
                iVar4 = iVar4 + 1;
            }
            if (pcVar2[iVar4 - iVar3] == '\0') {
                return iVar4;
            }
            if (pcVar2[iVar4 - iVar3] == '.') {
                return iVar4;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 3);
    }
    return 0;
}


/* fcn.00012870 @ 0x12870 */

ulong fcn.00012870(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = 0;
    uVar4 = uVar5;
    if (*pcVar1 == '\\') {
        pcVar1 = pcVar1 + 1;
        uVar4 = 1;
    }
    else {
        for (; *pcVar1 == '^'; pcVar1 = pcVar1 + 1) {
            uVar4 = uVar4 + 1;
        }
    }
    if (*pcVar1 == '.') {
        pcVar1 = pcVar1 + 1;
        uVar4 = uVar4 + 1;
        uVar6 = 2;
    }
    else if (*pcVar1 == '/') {
        puVar2 = pcVar1 + 1;
        pcVar1 = pcVar1 + 2;
        uVar4 = uVar4 + 2;
        uVar6 = *puVar2;
    }
    else {
        if (*pcVar1 == '\0') {
            if ((uVar4 == 1) && (pcVar1[-1] == '\\')) {
                *arg2 = 2;
                return 0;
            }
            return 0x8000000000000002;
        }
        uVar6 = 1;
    }
    do {
        if ((*pcVar1 != '_') && (0x19 < *pcVar1 + 0xbfU)) {
            return 0x8000000000000002;
        }
        uVar3 = 1;
        do {
            if (0x2f < pcVar1[uVar3] - 0x30U) {
                return 0x8000000000000002;
            }
            if ((0x87fffffe03ffU >> (pcVar1[uVar3] - 0x30U & 0x3fU) & 1) == 0) {
                return 0x8000000000000002;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 4);
        pcVar1 = pcVar1 + 4;
        uVar4 = uVar4 + 4;
        uVar5 = uVar5 + 1;
        if (uVar6 <= uVar5) {
            *arg2 = uVar4;
            return 0;
        }
    } while( true );
}


/* fcn.00012804 @ 0x12804 */

char fcn.00012804(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    uVar1 = *arg1 >> 6;
    if (uVar1 == 0) {
        uVar2 = *arg1;
    }
    else {
        if (uVar1 == 1) {
            uVar2 = *(arg1 + 1);
        }
        else {
            if (uVar1 == 2) {
                uVar2 = *(arg1 + 2);
            }
            else {
                if (uVar1 != 3) goto code_r0x00012866;
                uVar2 = *(arg1 + 2);
            }
            uVar2 = uVar2 << 8 | *(arg1 + 1);
        }
        uVar2 = uVar2 << 4 | *arg1 & 0xf;
    }
code_r0x00012866:
    *arg2 = uVar2;
    return uVar1 + 1;
}


/* fcn.00012b54 @ 0x12b54 */

uint64_t fcn.00012b54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *in_stack_00000028;
    int64_t *in_stack_00000030;
    uint64_t *in_stack_00000038;
    
    puVar6 = NULL;
    if (in_stack_00000028 != NULL) {
        uVar4 = arg4 - 1;
        if (*(arg1 + 8 + uVar4 * 4) < 9) {
            uVar3 = *(*(arg1 + 8 + uVar4 * 4) * 4 + 0x14ac0);
        }
        else {
            uVar3 = 0;
        }
        *in_stack_00000028 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = arg2;
    }
    uVar3 = 2;
    iVar2 = *(arg1 + 8 + (arg4 - 1) * 4);
    if (iVar2 == 2) {
        *in_stack_00000038 = 1;
    }
    else if (iVar2 == 3) {
        *in_stack_00000038 = 2;
    }
    else if (iVar2 == 4) {
        *in_stack_00000038 = 4;
    }
    else if (iVar2 == 5) {
        *in_stack_00000038 = 8;
    }
    else {
        if (iVar2 != 6) {
            if (iVar2 == 7) {
                cVar1 = *arg2;
                while (cVar1 != '\0') {
                    puVar6 = puVar6 + 1;
                    cVar1 = *(puVar6 + arg2);
                }
                *in_stack_00000038 = puVar6 + 1;
                goto code_r0x00012cd2;
            }
            if (iVar2 != 8) {
                return 0x8000000000000002;
            }
            iVar5 = fcn.000127bc(arg2);
            if (iVar5 == 0) {
                return 0x8000000000000002;
            }
            if ((*(iVar5 + 0x20) & uVar3) == 0) {
                iVar5 = fcn.00012cf8(iVar5,arg2,arg3,0xffffffff);
                if (iVar5 < 0) {
                    in_stack_00000028 = puVar6;
                }
                *in_stack_00000038 = in_stack_00000028;
                if (in_stack_00000028 == NULL) {
                    return 0x8000000000000002;
                }
                goto code_r0x00012cd2;
            }
            if (in_stack_00000028 != NULL) {
                *in_stack_00000028 = uVar3;
            }
        }
        iVar5 = fcn.00012870(arg2,in_stack_00000038);
        if (iVar5 < 0) {
            return 0x8000000000000002;
        }
    }
code_r0x00012cd2:
    return -(arg3 < *in_stack_00000038) & 0x8000000000000002;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012f28 @ 0x12f28 */

uint * fcn.00012f28(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    uint *puVar2;
    
    puVar2 = fcn.000133dc(arg1,0x48);
    *puVar2 = 0x4c4d4145;
    if (puVar2 + 1 != arg1) {
        section..text(puVar2 + 1,arg1,4);
    }
    *(puVar2 + 2) = 0;
    puVar1 = puVar2 + 6;
    *(puVar2 + 4) = 0;
    *puVar1 = puVar1;
    *(puVar2 + 8) = puVar1;
    puVar1 = puVar2 + 10;
    *puVar1 = puVar1;
    *(puVar2 + 0xc) = puVar1;
    *(puVar2 + 0xe) = arg2;
    *(puVar2 + 0x10) = arg3;
    return puVar2;
}


/* fcn.00013174 @ 0x13174 */

ulong fcn.00013174(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char *arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t arg1_01;
    uint32_t uVar4;
    uint64_t arg4;
    int64_t iStackX_20;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(arg1_01 + 0x18);
    if ((*(iVar1 + 0x20) & 0x10000) == 0) {
        uVar3 = 0;
    }
    else {
        uVar4 = *(iVar1 + 4);
        do {
            arg4 = uVar4;
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
        } while (*(iVar1 + 8 + uVar4 * 4) != 6);
        iVar1 = fcn.00012cf8(iVar1,*(arg1_01 + 8),*(arg1_01 + 0x10),arg4);
        if ((iVar1 < 0) || (iStackX_20 == 0)) {
            uVar3 = 0x8000000000000002;
        }
        else {
            uVar3 = *(arg1_01 + 0x10);
            arg1_00 = *(arg1_01 + 8);
            iVar2 = fcn.00012fb0(iStackX_20,arg2,arg3,CONCAT71(arg4 >> 8,1));
            iVar1 = 0;
            if (iVar2 != 0) {
                if (*(iVar2 + 8) == 0) {
                    if (*arg1_00 != '\x10') {
                        *(iVar2 + 8) = arg1_00;
                        *(iVar2 + 0x10) = uVar3;
                        uVar3 = fcn.000127bc(arg1_00);
                        *(iVar2 + 0x40) = uVar3;
                    }
                    iVar1 = iVar2;
                }
                else if (*arg1_00 == '\x10') {
                    iVar1 = iVar2;
                }
            }
            uVar3 = fcn.000130b8(arg1_01,arg2,iVar1);
        }
    }
    return uVar3;
}


/* fcn.000121c8 @ 0x121c8 */

ulong fcn.000121c8(uint32_t arg1)

{
    char *pcVar1;
    char cVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int *piVar4;
    char *pcVar5;
    ulong *puVar6;
    uint64_t uVar7;
    ulong *puVar8;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar4 == NULL) || ((*piVar4 != 0x48524145 && (*piVar4 != 0x53484145)))) {
code_r0x000121d4:
        uVar3 = 0x8000000000000002;
    }
    else {
        if (piVar4[8] != '\0') {
            for (puVar6 = *(*0x14b28 + 0x60); puVar6 != *0x14b28 + 0x60; puVar6 = *puVar6) {
                puVar8 = puVar6 + -1;
                if ((puVar6[3] <= *(piVar4 + 2)) && (*(piVar4 + 2) < puVar6[3] + puVar6[4])) goto code_r0x0001222f;
            }
            puVar8 = NULL;
code_r0x0001222f:
            if (puVar8 == NULL) goto code_r0x000121d4;
            pcVar5 = puVar8[4];
            cVar2 = '\0';
            pcVar1 = pcVar5 + 9;
            *pcVar1 = '\0';
            for (uVar7 = *(pcVar5 + 4); uVar7 != 0; uVar7 = uVar7 - 1) {
                cVar2 = cVar2 + *pcVar5;
                pcVar5 = pcVar5 + 1;
            }
            *pcVar1 = -cVar2;
        }
        (**(*0x14b48 + 0x48))(piVar4);
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00012fb0 @ 0x12fb0 */

ulong * fcn.00012fb0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    char cVar2;
    ulong *puVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint in_register_0000000c;
    char *arg1_00;
    uint8_t uVar6;
    uint8_t uVar7;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*arg1_00 == '\\') {
        arg1_00 = arg1_00 + 1;
    }
    else {
        cVar2 = *arg1_00;
        arg2 = arg3;
        while (cVar2 == '^') {
            if (*(arg2 + 0x38) != NULL) {
                arg2 = *(arg2 + 0x38);
            }
            arg1_00 = arg1_00 + 1;
            cVar2 = *arg1_00;
        }
    }
    cVar2 = *arg1_00;
    if (cVar2 == '.') {
        arg1_00 = arg1_00 + 1;
        uVar6 = 2;
    }
    else if (cVar2 == '/') {
        uVar6 = arg1_00[1];
        arg1_00 = arg1_00 + 2;
    }
    else {
        if (cVar2 == '\0') {
            return arg2;
        }
        uVar6 = 1;
    }
    uVar7 = 0;
    do {
        puVar3 = arg2 + 0x28;
        for (puVar5 = *puVar3; puVar5 != puVar3; puVar5 = *puVar5) {
            if ((puVar5 + -0x14 == arg1_00) || (iVar4 = fcn.00010300(puVar5 + -0x14,arg1_00,4), iVar4 == 0)) {
                puVar5 = puVar5 + -3;
                goto code_r0x00013084;
            }
        }
        if (arg4 == '\0') {
            return NULL;
        }
        puVar5 = fcn.00012f28(arg1_00,arg2,0);
        piVar1 = puVar5 + 3;
        *piVar1 = puVar3;
        puVar3 = *(arg2 + 0x30);
        puVar5[4] = puVar3;
        *puVar3 = piVar1;
        *(arg2 + 0x30) = piVar1;
code_r0x00013084:
        if (puVar5 == NULL) {
            return NULL;
        }
        arg1_00 = arg1_00 + 4;
        uVar7 = uVar7 + 1;
        arg2 = puVar5;
        if (uVar6 <= uVar7) {
            return puVar5;
        }
    } while( true );
}


/* fcn.000130b8 @ 0x130b8 */

ulong fcn.000130b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg1_00;
    uint64_t arg1_01;
    uint64_t uStackX_8;
    int64_t iStackX_20;
    
    uStackX_8 = 0;
    iStackX_20 = 0;
    iVar1 = *(arg1 + 8);
    iVar2 = *(arg1 + 0x10);
    if ((*(*(arg1 + 0x18) + 0x20) & 4) != 0) {
        iVar3 = fcn.00012eb0(arg1,&uStackX_8);
        if (iVar3 < 0) {
            return 0x8000000000000002;
        }
        arg1_01 = uStackX_8;
        while ((arg1_01 < iVar2 + iVar1 &&
               (iVar4 = fcn.00012094(arg1_01,(iVar2 - arg1_01) + iVar1,&iStackX_20), iVar3 = iStackX_20, -1 < iVar4)
               )) {
            arg1_00 = iStackX_20;
            iVar4 = fcn.00013174(arg1_00,arg2,arg3);
            if (iVar4 < 0) {
                return 0;
            }
            arg1_01 = arg1_01 + *(iVar3 + 0x10);
            fcn.000121c8(arg1_00);
        }
    }
    return 0;
}


/* fcn.00013278 @ 0x13278 */

void fcn.00013278(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar2 = *(arg1 + 0x28);
    while (piVar2 != arg1 + 0x28) {
        piVar1 = *piVar2;
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        fcn.00013278(piVar2 + -3);
        piVar2 = piVar1;
    }
    //WARNING: Could not recover jumptable at 0x000132d4. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14b48 + 0x48))(arg1);
    return;
}


