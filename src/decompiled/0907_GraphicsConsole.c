// decompiled by r2ghidra: 0907_GraphicsConsole.pe32
// functions: 21

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
    
    *0x13850 = *(arg1 + 0x60);
    *0x13848 = arg1;
    fcn.00011e58();
    puVar4 = fcn.00011e58();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d0:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102e0();
                fcn.000102d0();
                uVar2 = in(0x1808);
                fcn.000102b0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102a0();
                }
                fcn.000102b0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102d0();
                }
                else {
                    fcn.000102c0();
                }
                return;
            }
            if ((*0x13718 == *(puVar4 + 4)) && (*0x13720 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010444 @ 0x10444 */

void fcn.00010444(int64_t arg1,int64_t arg2)

{
    ulong auStackX_8 [2];
    uchar auStackX_18 [16];
    
    if (*0x13870 == 0) {
        *0x13860 = *(arg2 + 0x60);
        *0x13868 = *(arg2 + 0x58);
        *0x13870 = arg2;
    }
    (**(*0x13850 + 0x50))(0x200,8,0x105c0,0,auStackX_8);
    (**(*0x13850 + 0xa8))(0x12130,auStackX_8[0],auStackX_18);
    (**(*0x13850 + 0x68))(auStackX_8[0]);
    *0x12230 = 0;
    *0x12228 = arg1;
    (**(*0x13860 + 0x148))(0x12230,0x12160,0x12208,0x120e0,0x121d0,0);
    return;
}


/* fcn.00011e58 @ 0x11e58 */

int64_t fcn.00011e58(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13858 == 0) {
        *0x13858 = 0;
        if (*(*0x13848 + 0x68) != 0) {
            piVar2 = *(*0x13848 + 0x70);
            do {
                if ((*0x12140 == *piVar2) && (*0x12148 == piVar2[1])) {
                    *0x13858 = (*(*0x13848 + 0x70))[uVar1 * 3 + 2];
                    return *0x13858;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13848 + 0x68));
        }
    }
    return *0x13858;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(void)

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


/* fcn.000102d0 @ 0x102d0 */

void fcn.000102d0(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

uint64_t fcn.000102b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102a2 @ 0x102a2 */

void fcn.000102a2(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00011ef0 @ 0x11ef0 */

int64_t fcn.00011ef0(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.00011ec4 @ 0x11ec4 */

ulong fcn.00011ec4(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x13860 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.000115b0 @ 0x115b0 */

ulong fcn.000115b0(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int iVar8;
    int iVar9;
    uint auStackX_10 [2];
    uint32_t uStackX_18;
    uint32_t uStackX_20;
    
    bVar1 = false;
    puVar5 = 0x137c4;
    iVar8 = 0;
    iVar4 = 0;
    iVar6 = 0;
    iVar9 = 1;
    do {
        uVar3 = puVar5[2];
        if ((uVar3 == 0xffffffff) || (uVar7 = puVar5[3], uVar7 == 0xffffffff)) {
            uVar7 = puVar5[1] * 0x13;
            uVar3 = *puVar5 << 3;
        }
        iVar2 = fcn.00011428(*(arg1 + 0x58),uVar3,uVar7,auStackX_10);
        if (iVar2 < 0) {
            *(iVar6 + 0x14 + *(arg1 + 0x68)) = 0;
            *(iVar6 + *(arg1 + 0x68)) = puVar5[-1];
            if (puVar5[-1] == 0) {
                bVar1 = true;
                iVar8 = iVar4;
            }
        }
        else {
            *(iVar6 + 0x14 + *(arg1 + 0x68)) = 1;
            *(iVar6 + 0x15 + *(arg1 + 0x68)) = auStackX_10[0];
            *(iVar6 + *(arg1 + 0x68)) = puVar5[-1];
            uVar3 = *puVar5;
            if (uVar3 + 1 < 2) {
                uVar3 = uStackX_18 >> 3;
            }
            *(iVar6 + 4 + *(arg1 + 0x68)) = uVar3;
            uVar3 = puVar5[1];
            if (uVar3 + 1 < 2) {
                uVar3 = uStackX_20 / 0x13;
            }
            *(iVar6 + 8 + *(arg1 + 0x68)) = uVar3;
            *(iVar6 + 0xc + *(arg1 + 0x68)) = uStackX_18;
            *(iVar6 + 0x10 + *(arg1 + 0x68)) = uStackX_20;
            if (iVar9 <= puVar5[-1]) {
                iVar9 = puVar5[-1] + 1;
            }
            iVar2 = *(arg1 + 0x68);
            if ((uStackX_18 >> 3 < *(iVar6 + 4 + iVar2)) || (uStackX_20 / 0x13 < *(iVar6 + 8 + iVar2))) {
                *(iVar6 + 0x14 + iVar2) = 0;
            }
        }
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 0x19;
        puVar5 = puVar5 + 5;
    } while (iVar4 < 4);
    if (bVar1) {
        iVar2 = iVar8 * 0x19;
        iVar6 = fcn.00011428(*(arg1 + 0x58),0x280,0x1db,auStackX_10);
        if (iVar6 < 0) {
            **(arg1 + 0x48) = 0;
            return 0x8000000000000003;
        }
        *(iVar2 + 0x14 + *(arg1 + 0x68)) = 1;
        *(iVar2 + 0x15 + *(arg1 + 0x68)) = auStackX_10[0];
        *(iVar2 + 8 + *(arg1 + 0x68)) = 0x19;
        *(iVar2 + 4 + *(arg1 + 0x68)) = 0x50;
        *(iVar2 + *(arg1 + 0x68)) = *(iVar8 * 0x14 + 0x137c0);
    }
    **(arg1 + 0x48) = iVar9;
    return 0;
}


/* fcn.00011010 @ 0x11010 */

int64_t fcn.00011010(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    int *piVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    int iVar11;
    uint in_register_00000014;
    int *piVar12;
    int64_t iVar13;
    
    iVar11 = 0;
    if (**(arg1 + 0x48) <= CONCAT44(in_register_00000014,arg2)) {
        return -0x7ffffffffffffffd;
    }
    piVar8 = *(arg1 + 0x68);
    iVar13 = 0;
    piVar12 = piVar8;
    do {
        if (*piVar12 == CONCAT44(in_register_00000014,arg2)) break;
        iVar11 = iVar11 + 1;
        iVar13 = iVar13 + 1;
        piVar12 = piVar12 + 0x19;
    } while (iVar13 < 4);
    if (3 < iVar11) {
        return -0x7ffffffffffffffd;
    }
    iVar13 = iVar11 * 0x19;
    if (*(piVar8 + iVar13 + 0x14) == '\0') {
        return -0x7ffffffffffffffd;
    }
    iVar11 = *(piVar8 + iVar13 + 4);
    iVar2 = *(piVar8 + iVar13 + 0xc);
    iVar3 = *(piVar8 + iVar13 + 0x10);
    cVar1 = (*(arg1 + 0x48))[5];
    iVar4 = *(arg1 + 0x78);
    iVar5 = *(arg1 + 0x7c);
    iVar6 = *(piVar8 + iVar13 + 8);
    if (cVar1 != '\0') {
        (**(arg1 + 0x40))(arg1,0);
    }
    puVar9 = *(*(arg1 + 0x58) + 0x18);
    uVar7 = puVar9[1];
    if (uVar7 == *(iVar13 + 0x15 + *(arg1 + 0x68))) {
        if ((*puVar9 <= uVar7) || (*(*(arg1 + 0x48) + 4) == -1)) goto code_r0x00011129;
    }
    else {
        if ((uVar7 != 0xffffffff) && (uVar7 < *puVar9)) {
            (**(arg1 + 0x30))(arg1);
        }
        iVar10 = (**(*(arg1 + 0x58) + 8))(*(arg1 + 0x58),*(iVar13 + 0x15 + *(arg1 + 0x68)));
        if (iVar10 < 0) {
            return iVar10;
        }
        if (*(arg1 + 0xf1) == 0x11998) {
            (*0x11998)();
            goto code_r0x00011129;
        }
    }
    (**(arg1 + 0x30))(arg1);
code_r0x00011129:
    if ((*(arg1 + 0x78) == iVar4) && (*(arg1 + 0x7c) == iVar5)) {
        *(arg1 + 0x78) = iVar2 + iVar11 * -8 >> 1;
        *(arg1 + 0x7c) = iVar3 + iVar6 * -0x13 >> 1;
    }
    iVar10 = *(arg1 + 0x68);
    *(arg1 + 0x74) = *(iVar13 + 4 + iVar10);
    *(arg1 + 0x70) = *(iVar13 + 8 + iVar10);
    *(*(arg1 + 0x48) + 4) = *(iVar13 + iVar10);
    fcn.000112a8(arg1,0,0);
    if (cVar1 != '\0') {
        (**(arg1 + 0x40))(arg1,1);
    }
    if (*0x13838 != 0) {
        if (*(arg1 + 0x74) <= *0x13840) {
            return 0;
        }
        (**(*0x13860 + 0x48))();
    }
    iVar13 = (**(*0x13860 + 0x40))(4,(*(arg1 + 0x74) + 1) * 2,0x13838);
    if (-1 < iVar13) {
        *0x13830 = 0;
        *0x13834 = 0;
        *0x13840 = *(arg1 + 0x74) + 1;
        return 0;
    }
    return iVar13;
}


/* fcn.00011320 @ 0x11320 */

ulong fcn.00011320(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint in_register_00000014;
    
    cVar1 = arg2;
    if (cVar1 != *(*(arg1 + 0x48) + 0x14)) {
        *(*(arg1 + 0x48) + 0x14) = cVar1;
        if (cVar1 != '\0') {
            fcn.000118c8(arg1,CONCAT44(in_register_00000014,arg2));
        }
        fcn.0001135c(arg1,CONCAT44(in_register_00000014,CONCAT31(arg2 >> 8,cVar1)));
    }
    return 0;
}


/* fcn.000118c8 @ 0x118c8 */

void fcn.000118c8(int64_t arg1,int64_t arg2)

{
    (**(*(arg1 + 0x58) + 0x10))
              (*(arg1 + 0x58),arg1 + 0x80,1,*(arg1 + 0x78) + *(*(arg1 + 0x48) + 0xc) * 8,
               *(arg1 + 0x7c) + 0xf + *(*(arg1 + 0x48) + 0x10) * 0x13,0,0,8,3,0x20);
    return;
}


/* fcn.0001135c @ 0x1135c */

void fcn.0001135c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    int iVar3;
    uint *puVar4;
    ulong uVar5;
    int64_t iVar6;
    uint auStackX_10 [6];
    ulong uVar7;
    
    if (arg2 == '\0') {
        iVar6 = *(arg1 + 0x58);
        uVar7 = 0x20;
        iVar3 = *(arg1 + 0x7c) + *(*(arg1 + 0x48) + 0x10) * 0x13 + 0xf;
        iVar2 = *(*(arg1 + 0x48) + 0xc);
        puVar4 = arg1 + 0x80;
        uVar5 = 2;
    }
    else {
        iVar1 = *(arg1 + 0x48);
        iVar6 = *(arg1 + 0x58);
        uVar7 = 0;
        auStackX_10[0] = *((*(iVar1 + 8) & 0xf) * 4 + 0x13780);
        iVar2 = *(iVar1 + 0xc);
        iVar3 = *(iVar1 + 0x10) * 0x13 + *(arg1 + 0x7c) + 0xf;
        uVar5 = 0;
        puVar4 = auStackX_10;
    }
    (**(iVar6 + 0x10))(iVar6,puVar4,uVar5,0,0,*(arg1 + 0x78) + iVar2 * 8,iVar3,8,3,uVar7);
    return;
}


/* fcn.00011a5c @ 0x11a5c */

void fcn.00011a5c(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t var_18h;
    int64_t var_20h;
    int32_t var_18h_2;
    
    var_18h = 0;
    if (*0x13830 != 0) {
        uVar1 = *(*(arg1 + 0x48) + 8);
        var_18h_2 = 7;
        var_20h._0_4_ = *((uVar1 & 0xf) * 4 + 0x13780);
        var_20h._4_4_ = *((uVar1 >> 4 & 0xf) * 4 + 0x13780);
        *(*0x13838 + *0x13830 * 2) = 0;
        iVar2 = (***(arg1 + 0x60))(*(arg1 + 0x60),0,*0x13838,&var_20h,&var_18h,0,0,0,0,0);
        if (iVar2 < 0) {
            if (var_18h != 0) {
                if (*(var_18h + 8) != 0) {
                    (**(*0x13860 + 0x48))(*(var_18h + 8));
                }
                (**(*0x13860 + 0x48))(var_18h);
            }
        }
        else {
            (**(arg1 + 0xe9))(arg1,*var_18h,*(var_18h + 2),*(var_18h + 8));
            (**(*(arg1 + 0x58) + 0x10))
                      (*(arg1 + 0x58),*(var_18h + 8),2,0,0,*(arg1 + 0x78) + *(*(arg1 + 0x48) + 0xc) * 8,
                       *(*(arg1 + 0x48) + 0x10) * 0x13 + *(arg1 + 0x7c),*var_18h,*(var_18h + 2),*var_18h << 2);
            fcn.00011934(arg1,*var_18h >> 3);
            (**(*0x13860 + 0x48))(*(var_18h + 8));
            (**(*0x13860 + 0x48))(var_18h);
            *0x13830 = 0;
            *0x13834 = 0;
        }
    }
    return;
}


/* fcn.00011934 @ 0x11934 */

void fcn.00011934(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t in_R8;
    int iVar4;
    
    iVar3 = *(arg1 + 0x48);
    iVar4 = *(iVar3 + 0xc) + (arg2 & 0xffff);
    if (iVar4 < *(arg1 + 0x74)) {
        iVar2 = *(iVar3 + 0x10);
        iVar3 = iVar4;
    }
    else {
        uVar1 = *(iVar3 + 0x10);
        if (uVar1 == *(arg1 + 0x70) - 1U) {
            fcn.00011800(arg1,uVar1,in_R8);
            iVar3 = 0;
            iVar2 = *(*(arg1 + 0x48) + 0x10);
        }
        else {
            iVar2 = uVar1 + 1;
            iVar3 = 0;
        }
    }
    //WARNING: Could not recover jumptable at 0x0001198e. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x38))(arg1,iVar3,iVar2);
    return;
}


/* fcn.00011800 @ 0x11800 */

void fcn.00011800(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint auStackX_8 [8];
    
    (**(*(arg1 + 0x58) + 0x10))
              (*(arg1 + 0x58),auStackX_8,3,*(arg1 + 0x78),*(arg1 + 0x7c) + 0x13,*(arg1 + 0x78),*(arg1 + 0x7c),
               *(arg1 + 0x74) << 3,*(arg1 + 0x70) * 0x13 + -0x13,0);
    auStackX_8[0] = *((*(*(arg1 + 0x48) + 8) >> 4 & 0xf) * 4 + 0x13780);
    (**(*(arg1 + 0x58) + 0x10))
              (*(arg1 + 0x58),auStackX_8,0,0,0,*(arg1 + 0x78),*(arg1 + 0x7c) + *(arg1 + 0x70) * 0x13 + -0x13,
               *(arg1 + 0x74) << 3,0x13,0);
    return;
}


/* fcn.000112a8 @ 0x112a8 */

ulong fcn.000112a8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 < *(iVar3 + 0x74)) && (arg3 < *(iVar3 + 0x70))) {
        cVar1 = *(*(iVar3 + 0x48) + 0x14);
        if (cVar1 != '\0') {
            (**(iVar3 + 0x40))(iVar3,0);
        }
        *(*(iVar3 + 0x48) + 0xc) = arg2;
        *(*(iVar3 + 0x48) + 0x10) = arg3;
        if (cVar1 != '\0') {
            (**(iVar3 + 0x40))(iVar3,1);
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00011428 @ 0x11428 */

ulong fcn.00011428(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uchar *puStackX_8;
    char in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint32_t *in_stack_00000038;
    uchar auStack_58 [8];
    uchar auStack_50 [40];
    
    puStackX_8 = auStack_50;
    uVar7 = 0;
    uVar3 = 0;
    uVar4 = 0;
    uVar6 = 0;
    if (**(arg1 + 0x18) == 0) {
        return 0x800000000000000e;
    }
code_r0x0001146c:
    uVar5 = uVar6;
    iVar1 = (**arg1)(arg1,uVar5,auStack_58,&puStackX_8);
    if (-1 < iVar1) {
        uVar6 = arg2;
        if ((uVar6 == 0) || (uVar9 = arg3, uVar9 == 0)) {
            uVar6 = *(puStackX_8 + 8);
            uVar9 = *(puStackX_8 + 4);
            if (uVar3 * uVar7 <= uVar6 * uVar9 && uVar6 * uVar9 - uVar3 * uVar7 != 0) {
                uVar4 = uVar5;
                goto code_r0x000114b6;
            }
            goto code_r0x000114c0;
        }
        if (in_stack_00000028 == '\0') {
            if ((((uVar6 <= *(puStackX_8 + 4)) && (uVar9 <= *(puStackX_8 + 8))) &&
                (uVar8 = *(puStackX_8 + 8) * *(puStackX_8 + 4), uVar2 = (arg2 & 0xffffffffU) * (arg3 & 0xffffffffU),
                uVar2 <= uVar8 && uVar8 - uVar2 != 0)) &&
               (((uVar7 == 0 || (uVar3 == 0)) || (uVar8 <= uVar3 * uVar7 && uVar3 * uVar7 - uVar8 != 0)))) {
                uVar7 = *(puStackX_8 + 4);
                uVar3 = *(puStackX_8 + 8);
                uVar4 = uVar5;
            }
            goto code_r0x000114b3;
        }
        if ((*(puStackX_8 + 4) == uVar6) && (*(puStackX_8 + 8) == uVar9)) {
            uVar7 = *(puStackX_8 + 4);
            uVar3 = *(puStackX_8 + 8);
            (**(*0x13860 + 0x48))(puStackX_8);
            goto code_r0x00011558;
        }
    }
code_r0x000114b3:
    uVar6 = uVar3;
    uVar9 = uVar7;
code_r0x000114b6:
    (**(*0x13860 + 0x48))(puStackX_8);
    uVar3 = uVar6;
    uVar7 = uVar9;
code_r0x000114c0:
    uVar6 = uVar5 + 1;
    uVar5 = uVar4;
    if (**(arg1 + 0x18) <= uVar6) {
code_r0x00011558:
        if ((uVar7 != 0) && (uVar3 != 0)) {
            if (in_stack_00000030 != NULL) {
                *in_stack_00000030 = uVar7;
            }
            if (in_stack_00000038 != NULL) {
                *in_stack_00000038 = uVar3;
            }
            *arg4 = uVar5;
            return 0;
        }
        return 0x800000000000000e;
    }
    goto code_r0x0001146c;
}


