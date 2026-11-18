// decompiled by r2ghidra: 1009_PciBus.pe32
// functions: 175

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001037c(arg1,arg2);
    fcn.00010458(arg1,arg2);
    return;
}


/* fcn.0001037c @ 0x1037c */

ulong fcn.0001037c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x23890 = *(arg1 + 0x60);
    *0x23888 = arg1;
    fcn.0001bab0();
    puVar4 = fcn.0001bab0();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(uVar7,0x1808);
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
code_r0x00010439:
                uVar7 = 0;
                if (*(*0x23888 + 0x68) != 0) {
                    piVar8 = *(*0x23888 + 0x70);
                    do {
                        if ((*0x22d10 == *piVar8) && (*0x22d18 == piVar8[1])) {
                            *0x23930 = (*(*0x23888 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x23888 + 0x68));
                }
                *0x23930 = 0;
                return 0x800000000000000e;
            }
            if ((*0x23138 == *(puVar4 + 4)) && (*0x23140 == *(puVar4 + 8))) goto code_r0x00010439;
        }
        else if (uVar1 == 4) goto code_r0x000103d0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010458 @ 0x10458 */

ulong fcn.00010458(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong uVar6;
    uchar auStackX_8 [8];
    uchar auStackX_18 [16];
    uchar *puVar7;
    
    if (*0x238b8 == 0) {
        *0x238a8 = *(arg2 + 0x60);
        *0x238b0 = *(arg2 + 0x58);
        *0x238b8 = arg2;
    }
    iVar5 = *0x238a8;
    *0x22fe0 = 0;
    *0x22fd8 = arg1;
    piVar2 = fcn.0001bae0(arg1,0x22d40);
    if (piVar2 != NULL) {
        do {
            iVar1 = *piVar2;
            while( true ) {
                if (iVar1 == -1) goto code_r0x0001050c;
                piVar2 = piVar2 + piVar2[1];
                if (*piVar2 == 4) break;
                iVar1 = *piVar2;
            }
            iVar3 = fcn.0001c1c0(piVar2 + 8,0x230d8,0x10);
        } while (iVar3 != 0);
        *0x230b8 = *(piVar2 + 0x2b);
        *0x22fe8 = *0x230b8 >> 2;
    }
code_r0x0001050c:
    uVar6 = 0x22fb8;
    uVar4 = (**(iVar5 + 0x148))(0x22fe0,0x22cf0,0x22fb8,0x22bb0,0x230c0,0);
    puVar7 = auStackX_8;
    fcn.0001be78(0x22be0,0x1b7ec,uVar6,auStackX_18);
    if (*0x23828 == 0) {
        uVar6 = 0x23828;
        iVar5 = (**(*0x238a8 + 0x140))(0x22cc0,0,0x23828,*0x238a8,puVar7);
        if (iVar5 < 0) {
            fcn.0001be78(0x22cc0,0x1b7cc,uVar6,auStackX_18);
        }
    }
    return uVar4;
}


/* fcn.0001bab0 @ 0x1bab0 */

int64_t fcn.0001bab0(void)

{
    if (*0x238a0 == 0) {
        fcn.0001ba50(0x22ca0,0x238a0);
    }
    return *0x238a0;
}


/* fcn.0001ba50 @ 0x1ba50 */

ulong fcn.0001ba50(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x23888;
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


/* fcn.0001bae0 @ 0x1bae0 */

ulong fcn.0001bae0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x238b8 + 0x68);
    iVar2 = *(*0x238b8 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.0001c1c0(iVar2,arg1,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.0001c1c0 @ 0x1c1c0 */

int64_t fcn.0001c1c0(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.0001be78 @ 0x1be78 */

void fcn.0001be78(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x238a8 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x238a8 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00010670 @ 0x10670 */

int64_t fcn.00010670(int arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    if (*(iVar2 + 0xe0) == arg2) {
        iVar1 = iVar2;
    }
    else {
        iVar3 = 0;
        if (0 < *(iVar2 + 0xa70)) {
            while (iVar1 = *(*(iVar2 + 0xa78) + iVar3 * 8), *(iVar1 + 0xe0) != arg2) {
                if ((*(iVar1 + 0xd0) == 2) && (iVar1 = fcn.00010670(iVar1,arg2), iVar1 != 0)) {
                    return iVar1;
                }
                iVar3 = iVar3 + 1;
                if (*(iVar2 + 0xa70) <= iVar3) {
                    return 0;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.0001cc58 @ 0x1cc58 */

void fcn.0001cc58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    ulong uStackX_10;
    
    cVar2 = arg3;
    if (cVar2 == '\0') {
        iVar1 = (**(arg1 + 0x38))(arg1,1,arg2,1,arg4);
    }
    else {
        iVar1 = (**(arg1 + 0x40))();
    }
    if (iVar1 == -0x7ffffffffffffffe) {
        if (cVar2 == '\0') {
            iVar1 = (**(arg1 + 0x38))(arg1,0,arg2,1,arg4);
        }
        else {
            iVar1 = (**(arg1 + 0x40))();
        }
        if (-1 < iVar1) {
            uStackX_10._4_4_ = arg2 >> 0x20;
            if (uStackX_10._4_4_ == 0) {
                uStackX_10._0_1_ = arg2;
                uStackX_10 = uStackX_10 + 1;
            }
            else {
                uStackX_10 = arg2 & 0xffffffff;
            }
            if (cVar2 == '\0') {
                (**(arg1 + 0x38))(arg1,0,uStackX_10,1,arg4 + 1);
            }
            else {
                (**(arg1 + 0x40))();
            }
        }
    }
    return;
}


/* fcn.00010cb4 @ 0x10cb4 */

void fcn.00010cb4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint16_t auStackX_8 [4];
    int64_t iStackX_10;
    uchar *puStackX_18;
    int64_t iStack_28;
    
    uVar3 = 0;
    auStackX_8[0] = 0;
    iStackX_10 = arg2;
    puStackX_18 = arg3;
    if (*(arg1 + 0x6a8) != 0) {
        do {
            iVar1 = *(*(arg1 + 0x6b0) + uVar3 * 8);
            if (((*(arg2 + 0xdb) != *(iVar1 + 0xdb)) || (*(arg2 + 0xda) != *(iVar1 + 0xda))) ||
               (*(arg2 + 0xd9) != *(iVar1 + 0xd9))) {
                iStack_28 = CONCAT71(*(iVar1 + 0xd8) >> 8,4);
                iVar2 = fcn.0001cc58(*(iVar1 + 0xb8),iStack_28,0,auStackX_8);
                if (iVar2 < 0) {
                    *puStackX_18 = 1;
                    goto code_r0x00010da3;
                }
                if ((auStackX_8[0] & 4) != 0) {
                    if (*(iVar1 + 0xd0) == 5) {
                        *arg4 = 1;
                        return;
                    }
                    arg2 = iStackX_10;
                    if (1 < *(iVar1 + 0xd0) - 2U) goto code_r0x00010d88;
                    fcn.00010cb4(iVar1 + 0x3c8,iStackX_10,puStackX_18,arg4);
                    if (*arg4 == '\x01') {
                        return;
                    }
                }
                arg2 = iStackX_10;
            }
code_r0x00010d88:
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(arg1 + 0x6a8));
    }
    if (uVar3 == *(arg1 + 0x6a8)) {
code_r0x00010da3:
        *arg4 = 0;
    }
    return;
}


/* fcn.0001d724 @ 0x1d724 */

uint64_t fcn.0001d724(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint64_t uVar2;
    uint uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t in_stack_00000028;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t iStack_88;
    uint64_t uStack_80;
    int64_t aiStack_78 [2];
    uint uStack_68;
    int64_t iStack_60;
    
    uVar3 = arg2;
    iVar1 = *(arg1 + 0x380);
    aiStack_78[0] = *(arg1 + 0x300);
    uVar5 = 0x8000000000000003;
    iStack_98 = 0;
    uStack_80 = *(arg1 + 0x308);
    uVar4 = 0x8000000000000003;
    iStack_88 = *(arg1 + 0x318);
    uVar8 = 0x8000000000000003;
    if (1 < uStack_80) {
        iStack_98 = *(arg1 + 0x310);
    }
    if (iVar1 == 0) {
        uVar7 = 0x8000000000000003;
    }
    else {
        if ((aiStack_78[0] != 0) && (uVar7 = *(aiStack_78[0] + 0x145), *(aiStack_78[0] + 0x145) != 0)) {
            if (*(iVar1 + 8) < uVar7) {
                return 0x8000000000000002;
            }
            aiStack_78[1] = 0x54494e4949435024;
            uStack_90 = uVar7;
            uStack_68 = uVar3;
            iStack_60 = arg3;
            uVar5 = (**(iVar1 + 0x10 + uVar7 * 8))(iVar1,&uStack_90,aiStack_78 + 1);
        }
        if ((iStack_98 != 0) && (uVar7 = 0, iVar6 = iStack_88, uStack_80 != 0)) {
            do {
                arg1_00 = *(iStack_98 + uVar7 * 8);
                if (arg1_00 != iVar6) {
                    fcn.0001c78c(arg1_00,aiStack_78);
                    if ((aiStack_78[0] != 0) && (uVar2 = *(aiStack_78[0] + 0x145), *(aiStack_78[0] + 0x145) != 0)) {
                        if (*(iVar1 + 8) < uVar2) {
                            return 0x8000000000000002;
                        }
                        aiStack_78[1] = 0x54494e4949435024;
                        uStack_90 = uVar2;
                        uStack_68 = uVar3;
                        iStack_60 = arg3;
                        uVar2 = (**(iVar1 + 0x10 + uVar2 * 8))(iVar1,&uStack_90,aiStack_78 + 1);
                        if (uVar2 != 0x8000000000000003) {
                            uVar8 = uVar2;
                        }
                    }
                    iVar6 = iStack_88;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uStack_80);
        }
        uStack_90 = 0;
        aiStack_78[1] = 0x54494e4949435024;
        uStack_68 = uVar3;
        iStack_60 = arg3;
        uVar2 = (**(iVar1 + 0x10))(iVar1,&uStack_90,aiStack_78 + 1);
        if ((((*(arg1 + 0x388) == 0) ||
             (uVar4 = fcn.0001d5a4(arg1,arg2 & 0xffffffff,arg3,in_stack_00000028), uVar4 != 0)) && (uVar5 != 0)) &&
           ((uVar2 != 0 && (uVar8 != 0)))) {
            uVar7 = 0x8000000000000003;
            if ((uVar8 & uVar2 & uVar4 & uVar5) != 0x8000000000000003) {
                if ((uVar5 < 0) && (uVar5 != 0x8000000000000003)) {
                    uVar7 = uVar5;
                }
                else if ((uVar4 < 0) && (uVar4 != 0x8000000000000003)) {
                    uVar7 = uVar4;
                }
                else if ((uVar2 < 0) && (uVar2 != 0x8000000000000003)) {
                    uVar7 = uVar2;
                }
                else {
                    uVar7 = uVar8;
                }
            }
        }
        else {
            uVar7 = 0;
        }
    }
    return uVar7;
}


/* fcn.00010b58 @ 0x10b58 */

int64_t fcn.00010b58(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint8_t auStackX_8 [8];
    uint8_t auStack_18 [8];
    ulong uStack_10;
    
    auStackX_8[0] = 0;
    uVar1 = *(arg1 + 0xed);
    if ((*(arg1 + 0xef) != '\x01') && (*(arg1 + 0xee) != '\x01')) {
        return -0x7ffffffffffffffe;
    }
    uStack_10 = CONCAT71(*(arg1 + 0xd8) >> 8,9);
    if (arg4 == 0) {
        if (arg2 == '\0') {
            uVar5 = uVar1 & 4;
            uVar2 = uVar1 & 8;
            uVar4 = uVar1 & 0xfb;
            auStackX_8[0] = 0;
            if (arg3 == '\0') {
                auStackX_8[0] = 4;
            }
        }
        else {
            uVar2 = uVar1 & 2;
            uVar4 = uVar1 & 0xfe;
            uVar5 = uVar1 & 1;
            auStackX_8[0] = 0;
            if (arg3 == '\0') {
                auStackX_8[0] = 1;
            }
        }
        if (uVar5 == auStackX_8[0]) {
            return 0;
        }
        if (uVar2 != 0) {
            auStackX_8[0] = auStackX_8[0] | uVar4;
            iVar3 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStack_10,1,auStackX_8);
            if (iVar3 < 0) {
                return iVar3;
            }
            goto code_r0x00010ca9;
        }
    }
    else {
        iVar3 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStack_10,1,arg4);
        if (iVar3 < 0) {
            return iVar3;
        }
        auStack_18[0] = 0;
        iVar3 = (**(*(arg1 + 0xb8) + 0x38))(*(arg1 + 0xb8),0,uStack_10,1,auStack_18);
        auStackX_8[0] = *arg4;
        if (auStack_18[0] == auStackX_8[0]) {
code_r0x00010ca9:
            *(arg1 + 0xed) = auStackX_8[0];
            return iVar3;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.0001bed0 @ 0x1bed0 */

ulong fcn.0001bed0(int64_t arg1)

{
    if ((*0x238c8 == 0) && (*0x238c8 = fcn.0001bae0(arg1,0x23158), *0x238c8 == 0)) {
        return 0xa000000000000002;
    }
    if (arg1 != 0) {
        *arg1 = *0x238c8;
    }
    return 0;
}


/* fcn.00010dc4 @ 0x10dc4 */

//WARNING: Type propagation algorithm not settling

int64_t fcn.00010dc4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    ulong uVar6;
    char cVar7;
    uint64_t uVar8;
    int64_t arg3_00;
    char *pcVar9;
    char acStackX_8 [8];
    uint64_t uStackX_10;
    char acStackX_18 [8];
    uint32_t uStackX_20;
    uint64_t *puVar10;
    uint64_t *puVar11;
    uint16_t auStack_78 [2];
    uint16_t auStack_74 [2];
    uint16_t auStack_70 [2];
    char acStack_6c [4];
    int64_t iStack_68;
    ushort auStack_60 [4];
    uint64_t uStack_58;
    int64_t iStack_50;
    uint64_t uStack_48;
    uint64_t uStack_40;
    uchar auStack_38 [24];
    
    uStackX_20 = arg4;
    acStackX_18[0] = arg3;
    uStack_58 = *(arg1 + 0x2b8);
    if (*(arg1 + 0xd0) == 5) {
        *0x23938 = arg1;
    }
    iStack_68._1_7_ = *(arg1 + 0xd8) >> 8;
    iStack_68 = CONCAT71(iStack_68._1_7_,4);
    arg3_00 = 0;
    auStack_74[0] = 0;
    auStack_60[0] = 0;
    acStackX_8[0] = '\0';
    acStack_6c[0] = '\0';
    auStack_70[0] = 0;
    auStack_78[0] = 0;
    uStackX_10 = arg2;
    iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,0,auStack_60);
    if (iVar4 < 0) {
        return iVar4;
    }
    piVar1 = *(arg1 + 200);
    iVar4 = *piVar1;
    if ((iVar4 != 0) && (arg1 != iVar4)) {
        for (; *(iVar4 + 0xd0) != 1; iVar4 = *(iVar4 + 0xc0)) {
            if (iVar4 == arg1) goto code_r0x00010e74;
        }
        uStack_58 = uStack_58 & 0xffffffffffffffe3;
    }
code_r0x00010e74:
    if ((piVar1[1] != 0) && (arg1 != piVar1[1])) {
        uStack_58 = uStack_58 & 0xffffffffffffffdf;
    }
    if ((piVar1[2] != 0) && (arg1 != piVar1[2])) {
        uStack_58 = uStack_58 & 0xffffffffffffffbf;
    }
    pcVar9 = acStackX_18;
    uVar6 = 0;
    puVar11 = &uStack_58;
    puVar10 = &uStackX_10;
    fcn.0001d724(arg1,3,arg3_00,arg1);
    if ((uStack_58 & uStackX_10) != uStackX_10) {
        return -0x7ffffffffffffffd;
    }
    if (((*(arg1 + 0x2c0) & uStackX_10) == uStackX_10) && (uStackX_20 == 2)) {
        return 0;
    }
    if ((uStackX_10 & 0x60) != 0) {
        arg3_00 = CONCAT71(arg3_00 >> 8,acStackX_18[0]);
        uVar8 = uStackX_10 & 0x20;
        uVar2 = uStackX_10 & 0x20;
        iVar4 = fcn.00010b58(arg1,CONCAT71(uVar6 >> 8,uStackX_10) & 0xffffffffffffff20,arg3_00,0);
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = *(arg1 + 200);
        if (acStackX_18[0] == '\0') {
            if (uVar2 == 0) {
                *(iVar4 + 0x10) = 0;
            }
            else {
                *(iVar4 + 8) = 0;
            }
        }
        else if (uVar8 == 0) {
            *(iVar4 + 0x10) = arg1;
        }
        else {
            *(iVar4 + 8) = arg1;
        }
    }
    if ((uStackX_10 & 3) != 0) {
        auStack_70[0] = auStack_70[0] | 4;
    }
    uVar5 = auStack_70[0];
    if ((uStackX_10 & 0x18) != 0) {
        uStack_40 = 0x3c0;
        if (*0x238b8 == 0) {
            return -0x7ffffffffffffffe;
        }
        iVar4 = fcn.0001bed0(&iStack_50);
        if (iVar4 < 0) {
            return iVar4;
        }
        auStack_70[0] = uVar5 | 8;
        if ((*(arg1 + 0x392) + 2U & 0xfd) != 0) {
            auStack_78[0] = auStack_78[0] | 0x20;
        }
        if (acStackX_18[0] == '\0') {
            (**(iStack_50 + 0x60))(0x3c0);
        }
        else {
            arg3_00 = 0;
            puVar10 = &uStack_40;
            puVar11 = *0x22fd8;
            pcVar9 = *0x22fe0;
            (**(iStack_50 + 0x58))(2,2,0,0x20,puVar10,*0x22fd8,*0x22fe0);
        }
    }
    if ((uStackX_10 >> 8 & 1) != 0) {
        auStack_78[0] = auStack_78[0] | 1;
    }
    if ((uStackX_10 >> 9 & 1) != 0) {
        auStack_78[0] = auStack_78[0] | 2;
    }
    if ((uStackX_10 >> 10 & 1) != 0) {
        auStack_78[0] = auStack_78[0] | 4;
    }
    if (*(*(arg1 + 0xc0) + 0xd0) == 1) {
        uVar8 = uStackX_10 & 0xffffffffffff18ff;
        iVar4 = (**(*(arg1 + 0xb8) + 0x78))(*(arg1 + 0xb8),auStack_38);
        if (acStackX_18[0] == '\0') {
            uVar8 = ~uVar8 & uStack_48;
        }
        else {
            uVar8 = uStack_48 | uVar8;
        }
        if (uVar8 != uStack_48) {
            iVar4 = (**(*(arg1 + 0xb8) + 0x80))(*(arg1 + 0xb8),uVar8,0,0,puVar10,puVar11,pcVar9);
        }
    }
    else {
        iVar4 = fcn.00010dc4(*(arg1 + 0xc0),uStackX_10 & 0xffffffffffff9cff,CONCAT71(arg3_00 >> 8,acStackX_18[0]),
                             uStackX_20);
    }
    if (iVar4 < 0) {
        return iVar4;
    }
    if (auStack_78[0] == 0) {
        cVar7 = acStackX_8[0];
    }
    else {
        iStack_68 = CONCAT71(iStack_68._1_7_,4);
        pcVar9 = NULL;
        iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,0,auStack_74);
        if (iVar4 < 0) {
            return iVar4;
        }
        if (acStackX_18[0] == '\0') {
            if (*(arg1 + 0xd0) - 2U < 2) {
                pcVar9 = acStack_6c;
                fcn.00010cb4(arg1 + 0x3c8,*0x23938,pcVar9,acStackX_8);
                if (acStackX_8[0] == '\0') {
                    if (acStack_6c[0] == '\x01') {
                        return iVar4;
                    }
                }
                else {
                    auStack_78[0] = auStack_78[0] & 0xfffb;
                }
            }
            auStack_78[0] = ~auStack_78[0] & auStack_74[0];
        }
        else {
            auStack_78[0] = auStack_78[0] | auStack_74[0];
        }
        cVar7 = acStackX_8[0];
        iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,CONCAT71(pcVar9 >> 8,1),auStack_78);
        if (iVar4 < 0) {
            return iVar4;
        }
    }
    uVar3 = uStackX_20;
    if (acStackX_18[0] == '\0') {
        uVar8 = uStackX_10;
        if (cVar7 != '\0') {
            uVar8 = uStackX_10 & 0xfffffffffffffbff;
        }
        *(arg1 + 0x2c0) = *(arg1 + 0x2c0) & ~uVar8;
    }
    else if (uStackX_20 == 2) {
        *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | uStackX_10;
    }
    else if (uStackX_20 == 1) {
        if ((auStack_78[0] == 0) && (*(arg1 + 0xd0) != 2 && *(arg1 + 0xd0) != 3)) {
            iStack_68 = CONCAT71(iStack_68._1_7_,4);
            uVar6 = 0;
            iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,0,auStack_74);
            if (iVar4 < 0) {
                return iVar4;
            }
            auStack_78[0] = (auStack_78[0] | auStack_74[0]) & 0xfff8;
            iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,CONCAT71(uVar6 >> 8,1),auStack_78);
            if (iVar4 < 0) {
                return iVar4;
            }
        }
        if ((uStackX_10 != 0) && (*(arg1 + 0xd0) == 2 || *(arg1 + 0xd0) == 3)) {
            *(arg1 + 0x2c0) = uStackX_10;
        }
        if (*(arg1 + 0xd0) != 2 && *(arg1 + 0xd0) != 3) {
            *(arg1 + 0x2c0) = uStackX_10;
        }
    }
    if (*(arg1 + 0xd0) != 2 && *(arg1 + 0xd0) != 3) goto code_r0x000113ae;
    iStack_68 = CONCAT71(iStack_68._1_7_,0x3e);
    iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,0,auStack_74);
    if (iVar4 < 0) {
        return iVar4;
    }
    if (acStackX_18[0] == '\0') {
        auStack_70[0] = ~auStack_70[0] & auStack_74[0];
    }
    else if (uVar3 == 2) {
        auStack_70[0] = auStack_70[0] | auStack_74[0];
    }
    else if (uVar3 == 1) {
        if (auStack_70[0] == 0) {
            uVar5 = 0xfff3;
            auStack_70[0] = auStack_74[0];
        }
        else {
            uVar5 = auStack_70[0] >> 2 & 1;
            if ((uVar5 == 0) || ((auStack_70[0] & 8) != 0)) {
                if ((uVar5 != 0) || ((auStack_70[0] & 8) == 0)) goto code_r0x0001138c;
                auStack_70[0] = auStack_70[0] | auStack_74[0];
                uVar5 = 0xfffb;
            }
            else {
                auStack_70[0] = auStack_70[0] | auStack_74[0];
                uVar5 = 0xfff7;
            }
        }
        auStack_70[0] = auStack_70[0] & uVar5;
    }
code_r0x0001138c:
    iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,1,auStack_70);
    if (iVar4 < 0) {
        return iVar4;
    }
code_r0x000113ae:
    iStack_68 = CONCAT71(iStack_68._1_7_,4);
    iVar4 = fcn.0001cc58(*(arg1 + 0xb8),iStack_68,0,auStack_60);
    return iVar4;
}


/* fcn.00022ac0 @ 0x22ac0 */

int64_t fcn.00022ac0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001bc6c @ 0x1bc6c */

int64_t fcn.0001bc6c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001bc40(arg1);
    if (iVar1 != 0) {
        (**(*0x238a8 + 0x168))(iVar1,arg1,0);
    }
    return iVar1;
}


/* fcn.0001bc40 @ 0x1bc40 */

ulong fcn.0001bc40(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x238a8 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.0001169c @ 0x1169c */

ulong fcn.0001169c(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = fcn.0001bc6c(0x20);
    *(arg1 + 0x3c0) = iVar2;
    if (iVar2 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        *(iVar2 + 0x18) = *arg2;
        *(*(arg1 + 0x3c0) + 8) = 0x1166c;
        **(arg1 + 0x3c0) = 0x1162c;
        *(*(arg1 + 0x3c0) + 0x10) = arg1;
        *(*(arg1 + 0x3c0) + 0x1a) = *(arg1 + 0xef);
        iVar2 = *(arg1 + 0x300);
        if ((iVar2 != 0) && ((*(iVar2 + 0x3b) & 1) != 0)) {
            if ((*(iVar2 + 0x3d) & 8) != 0) {
                puVar1 = *(arg1 + 0x3c0) + 0x19;
                *puVar1 = *puVar1 | 2;
            }
            if ((*(*(arg1 + 0x300) + 0x3d) & 4) != 0) {
                puVar1 = *(arg1 + 0x3c0) + 0x19;
                *puVar1 = *puVar1 | 1;
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000109b0 @ 0x109b0 */

ulong fcn.000109b0(int64_t arg1,uint32_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    bool bVar4;
    int64_t in_stack_00000028;
    int64_t *in_stack_00000030;
    
    if (arg4 < 0xc) {
        uVar2 = arg2;
        if (uVar2 == 0xff) {
            return 0;
        }
        if (uVar2 < 6) {
            iVar3 = (arg2 & 0xff) * 0x40;
            if (arg3 == 8) {
                uVar1 = *(iVar3 + 0xf8 + arg1);
                bVar4 = uVar1 == 2;
            }
            else {
                if (arg3 != 9) {
                    return 0x8000000000000002;
                }
                uVar1 = *(iVar3 + 0xf8 + arg1) - 4;
                bVar4 = uVar1 < 3;
            }
            if (bVar4 || uVar1 == 3) {
                if (arg4 - 4 < 4) {
                    in_stack_00000028 = 1;
                }
                if (*in_stack_00000030 + -1 + (1LL << (arg4 & 3)) * in_stack_00000028 < *(iVar3 + 0x108 + arg1)) {
                    *in_stack_00000030 = *((uVar2 + 4) * 0x40 + arg1) + *in_stack_00000030;
                    return 0;
                }
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00010a84 @ 0x10a84 */

ulong fcn.00010a84(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint64_t uVar5;
    bool bVar6;
    bool bVar7;
    ulong uStack_18;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 < 0xc) {
        uVar3 = arg2 & 3;
        if ((*(iVar4 + 0x396) == '\0') && (*(iVar4 + 0x2d0) != 0)) {
            uVar5 = *arg4;
            uVar2 = (1LL << uVar3) * arg3 + -1 + uVar5;
            bVar6 = uVar2 < 0xfff;
            bVar7 = uVar2 == 0xfff;
        }
        else {
            uVar5 = *arg4;
            uVar2 = (1LL << uVar3) * arg3 + -1 + uVar5;
            bVar6 = uVar2 < 0xff;
            bVar7 = uVar2 == 0xff;
        }
        if (bVar6 || bVar7) {
            iVar4 = (*(iVar4 + 0xda) * 0x100 + *(iVar4 + 0xd9)) * 0x100;
            if (uVar5 < 0x100) {
                uStack_18 = CONCAT71(iVar4 >> 8,*arg4);
            }
            else {
                uStack_18 = CONCAT44(*arg4,iVar4);
            }
            *arg4 = uStack_18;
            uVar1 = 0;
        }
        else {
            uVar1 = 0x8000000000000003;
        }
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.0001cd18 @ 0x1cd18 */

void fcn.0001cd18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    ulong uStackX_10;
    
    cVar2 = arg3;
    iVar3 = arg2;
    if (cVar2 == '\0') {
        iVar1 = (**(arg1 + 0x38))(arg1,2,arg2,1,arg4);
    }
    else {
        iVar1 = (**(arg1 + 0x40))();
    }
    if (iVar1 == -0x7ffffffffffffffe) {
        iVar3 = CONCAT71(iVar3 >> 8,cVar2);
        iVar1 = fcn.0001cc58(arg1,arg2,iVar3,arg4);
        if (-1 < iVar1) {
            uStackX_10._4_4_ = arg2 >> 0x20;
            if (uStackX_10._4_4_ == 0) {
                uStackX_10._0_1_ = arg2;
                uStackX_10 = CONCAT71(arg2 >> 8,uStackX_10 + '\x02');
            }
            else {
                uStackX_10 = CONCAT44(uStackX_10._4_4_ + 2,arg2);
            }
            fcn.0001cc58(arg1,uStackX_10,CONCAT71(iVar3 >> 8,cVar2),arg4 + 2);
        }
    }
    return;
}


/* fcn.0001c864 @ 0x1c864 */

int64_t fcn.0001c864(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint in_R8;
    uint64_t uVar7;
    uint64_t uVar8;
    
    uVar7 = CONCAT44(in_R8,arg3);
    uVar6 = 0;
    if ((arg2 == 0) || (*(*0x238f8 + 0x18) <= uVar7)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001c59c();
        if (-1 < iVar2) {
            uVar8 = *(*0x238f8 + 0x18);
            if (uVar8 != 0) {
                puVar5 = *0x238f8 + 0x20;
                uVar4 = uVar6;
                do {
                    if ((*puVar5 == uVar7) && ((*(puVar5 + 0x39) & 1) == 0)) {
                        uVar4 = uVar4 + 1;
                    }
                    puVar5 = puVar5 + 0x159;
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
                if (uVar4 != 0) {
                    iVar3 = fcn.0001bc40(uVar4 << 3);
                    iVar1 = *0x238f8;
                    if (iVar3 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    if (*(*0x238f8 + 0x18) != 0) {
                        puVar5 = *0x238f8 + 0x20;
                        uVar8 = uVar6;
                        do {
                            if ((*puVar5 == uVar7) && ((*(puVar5 + 0x39) & 1) == 0)) {
                                *(iVar3 + uVar6 * 8) = puVar5;
                                uVar6 = uVar6 + 1;
                            }
                            uVar8 = uVar8 + 1;
                            puVar5 = puVar5 + 0x159;
                        } while (uVar8 < *(iVar1 + 0x18));
                    }
                    *arg1 = iVar3;
                    *arg2 = uVar6;
                    return iVar2;
                }
            }
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    return iVar2;
}


/* fcn.0001c7e8 @ 0x1c7e8 */

int64_t fcn.0001c7e8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.0001c59c();
        if (-1 < iVar1) {
            if (*(*0x238f8 + 0x18) != 0) {
                iVar1 = *0x238f8 + 0x20;
                do {
                    if (iVar1 == arg1) {
                        *arg2 = uVar2;
                        return 0;
                    }
                    uVar2 = uVar2 + 1;
                    iVar1 = iVar1 + 0x159;
                } while (uVar2 < *(*0x238f8 + 0x18));
            }
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.00011760 @ 0x11760 */

ulong fcn.00011760(int64_t arg1)

{
    int iVar1;
    char cVar2;
    ulong uVar3;
    char *pcVar4;
    char *pcVar5;
    char *pcVar6;
    uint64_t uVar7;
    
    uVar3 = 0;
    if (*0x237d8 != 0) {
        uVar7 = 0;
        uVar3 = 0x800000000000000e;
        if (*(*0x237d8 + 6) != 0) {
            pcVar5 = *0x237d8 + 0x16;
            do {
                iVar1 = *(pcVar5 + -4);
                if (iVar1 == 0) {
code_r0x000117af:
                    pcVar6 = *(arg1 + 0x300) + 0x18;
                    cVar2 = *pcVar5;
                    pcVar4 = pcVar5;
                    while ((cVar2 != '\0' && (cVar2 == *pcVar6))) {
                        pcVar4 = pcVar4 + 1;
                        pcVar6 = pcVar6 + 1;
                        cVar2 = *pcVar4;
                    }
                    if (*pcVar4 == *pcVar6) {
code_r0x000117e4:
                        uVar3 = fcn.0001169c(arg1,pcVar5 + -10);
                        break;
                    }
                }
                else {
                    if (*(*(arg1 + 0x300) + 0x31) == iVar1) goto code_r0x000117e4;
                    if (iVar1 == 0) goto code_r0x000117af;
                }
                uVar7 = uVar7 + 1;
                pcVar5 = pcVar5 + 0xf;
            } while (uVar7 < *(*0x237d8 + 6));
        }
    }
    return uVar3;
}


/* fcn.0001ce58 @ 0x1ce58 */

int64_t fcn.0001ce58(uint32_t arg1)

{
    int64_t iVar1;
    unkuint7 Var2;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x338);
    Var2 = iVar1 >> 8;
    if (iVar1 != 0) {
        if ((*(CONCAT44(in_register_0000000c,arg1) + 0x340) != 0) ||
           (*(CONCAT44(in_register_0000000c,arg1) + 0x348) != 0)) goto code_r0x0001ce78;
        if (iVar1 != 0) goto code_r0x0001ce92;
    }
    if ((*(CONCAT44(in_register_0000000c,arg1) + 0x340) != 0) || (*(CONCAT44(in_register_0000000c,arg1) + 0x348) != 0)
       ) {
code_r0x0001ce92:
        return Var2 << 8;
    }
code_r0x0001ce78:
    return CONCAT71(Var2,1);
}


/* fcn.0001dd94 @ 0x1dd94 */

int64_t fcn.0001dd94(uint32_t arg1)

{
    int64_t iVar1;
    unkuint7 Var2;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x2d0);
    Var2 = iVar1 >> 8;
    if ((((iVar1 != 0) && (*(iVar1 + 0x20) != 0)) && (*(CONCAT44(in_register_0000000c,arg1) + 0x396) == '\0')) &&
       (*(CONCAT44(in_register_0000000c,arg1) + 0x397) == '\0')) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.0001bf1c @ 0x1bf1c */

ulong fcn.0001bf1c(int arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t *puVar2;
    uint64_t uVar3;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = *puVar2;
    if (uVar3 == 0) {
        uVar3 = 0x50;
    }
    else {
        if (puVar2[2] == 0) {
            uVar3 = uVar3 << 3;
        }
        else {
            if (puVar2[1] <= uVar3 - 1) {
                return 0;
            }
            uVar3 = uVar3 * 8 + 0x50;
        }
        if (uVar3 == 0) {
            return 0;
        }
    }
    uVar1 = fcn.0001bc6c(uVar3);
    if (uVar1 != 0) {
        (**(*0x238a8 + 0x160))(uVar1,puVar2[2],puVar2[1] << 3);
        (**(*0x238a8 + 0x48))(puVar2[2]);
        *puVar2 = uVar3 >> 3;
        puVar2[2] = uVar1;
        return 0;
    }
    return 0x8000000000000009;
}


/* fcn.00012d44 @ 0x12d44 */

int64_t fcn.00012d44(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t arg1_00;
    uint in_register_0000000c;
    int64_t iVar4;
    uint64_t uVar5;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = 0;
    uVar5 = 0;
    if (*(iVar4 + 0x6a8) != 0) {
        do {
            iVar1 = *(*(iVar4 + 0x6b0) + uVar5 * 8);
            arg1_00 = iVar1;
            if (*(iVar1 + 0xd0) - 2U < 2) {
                if (*(iVar1 + 0x300) != 0) {
                    if ((*(*(iVar1 + 0x300) + 0x3b) & 1) == 0) goto code_r0x00012dba;
                    iVar3 = fcn.00012d44(arg1_00 + 0x3c8,arg2);
                    if ((*(iVar1 + 0xf0) != '\0') && (cVar2 = fcn.0001ce58(arg1_00), cVar2 != '\0')) {
                        iVar3 = fcn.0001bf1c(arg2);
                        if (iVar3 < 0) {
                            return -0x7ffffffffffffff7;
                        }
                        *(*(arg2 + 0x10) + *(arg2 + 8) * 8) = iVar1;
                        *(arg2 + 8) = *(arg2 + 8) + 1;
                        iVar3 = 0;
                    }
                }
code_r0x00012e39:
                if (iVar3 < 0) {
                    return iVar3;
                }
            }
            else {
                if ((((*(iVar1 + 0xd0) != 5) || (cVar2 = fcn.0001ce58(arg1_00), cVar2 == '\0')) ||
                    (*(iVar1 + 800) == 0)) || (*(iVar1 + 0x328) == 0)) goto code_r0x00012e39;
code_r0x00012dba:
                iVar3 = fcn.0001bf1c(arg2);
                if (iVar3 < 0) {
                    return -0x7ffffffffffffff7;
                }
                *(*(arg2 + 0x10) + *(arg2 + 8) * 8) = iVar1;
                *(arg2 + 8) = *(arg2 + 8) + 1;
                iVar3 = 0;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(iVar4 + 0x6a8));
    }
    return 0;
}


/* fcn.0001da68 @ 0x1da68 */

int64_t fcn.0001da68(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint8_t *puVar2;
    uint8_t uVar3;
    int64_t iVar4;
    int iVar5;
    bool bVar6;
    
    uVar3 = *CONCAT44(in_register_0000000c,arg1);
    if (uVar3 == 0x79) {
        return 2;
    }
    puVar2 = CONCAT44(in_register_0000000c,arg1) + 3;
    iVar1 = 0;
    do {
        iVar4 = iVar1;
        if ((uVar3 & 0x7f) != 10) {
            return 0;
        }
        if (-1 < uVar3) {
            return 0;
        }
        if (*(puVar2 + -2) != 0x2b) {
            return 0;
        }
        if (2 < *puVar2) {
            return 0;
        }
        iVar5 = arg2;
        if (iVar5 == 0) {
            if (*puVar2 != 2) {
                return 0;
            }
            iVar1 = *(puVar2 + 0x23);
            if (0x100 < iVar1 + *(puVar2 + 0xb)) {
                return 0;
            }
            if (*(puVar2 + 0x13) != 0) {
                bVar6 = (*(puVar2 + 0x13) - *(puVar2 + 0xb)) + 1 == iVar1;
                goto code_r0x0001dadf;
            }
            if (iVar1 == 0) {
                return 0;
            }
        }
        else if (iVar5 == 1) {
            if (1 < *puVar2) {
                return 0;
            }
        }
        else {
            bVar6 = iVar5 == 2;
code_r0x0001dadf:
            if (!bVar6) {
                return 0;
            }
        }
        uVar3 = puVar2[0x2b];
        puVar2 = puVar2 + 0x2e;
        iVar1 = iVar4 + 0x2e;
        if (uVar3 == 0x79) {
            return iVar4 + 0x30;
        }
    } while( true );
}


/* fcn.0001350c @ 0x1350c */

int64_t fcn.0001350c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint uStackX_8;
    uint uStackX_20;
    
    uVar2 = 0;
    uStackX_20 = *(arg1 + 0xe8);
    if (*0x23768 != 0) {
        do {
            iVar1 = *(*0x23770 + uVar2 * 8);
            if (((arg2 == 0) || (*(iVar1 + 0x10) == 0)) || (*(arg2 + 0x20) == *(iVar1 + 0x10))) {
                uStackX_8 = CONCAT22(*(iVar1 + 6) & *(iVar1 + 8),*(iVar1 + 4));
                uStackX_20 = CONCAT22(*(arg1 + 0xea) & *(iVar1 + 8),uStackX_20);
                if ((uStackX_20 == uStackX_8) && ((arg3 == 0 || (arg3 == *(iVar1 + 0xc))))) {
                    return iVar1;
                }
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *0x23768);
    }
    return 0;
}


/* fcn.000135a0 @ 0x135a0 */

void fcn.000135a0(int64_t arg1)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t arg3;
    
    uVar4 = *(arg1 + 0x18);
    uVar6 = 0;
    iVar1 = *arg1;
    uVar7 = 2;
    arg3 = 0;
    if (1 < iVar1) {
        if (iVar1 < 4) {
            arg3 = 8;
            goto code_r0x000135ea;
        }
        if (iVar1 < 8) {
            arg3 = 9;
            uVar7 = 4;
            goto code_r0x000135ea;
        }
    }
    uVar7 = uVar6;
code_r0x000135ea:
    piVar3 = fcn.0001350c(*(arg1 + 0x38),arg1,arg3);
    if ((piVar3 == NULL) && (piVar3 = fcn.0001350c(*(arg1 + 0x38),arg1,0xb), piVar3 == NULL)) {
        return;
    }
    if ((piVar3[3] == 0xb) && (*(arg1 + 0x20) != *(piVar3 + 4))) {
        return;
    }
    iVar2 = *piVar3;
    if (iVar2 == 1) {
        for (; (uVar7 < 0x40 && ((~uVar4 >> (uVar7 & 0x3f) & 1) == 0)); uVar7 = uVar7 + 1) {
        }
        uVar4 = uVar6;
        if (uVar7 != 0) {
            do {
                uVar5 = uVar4 + 1;
                uVar6 = uVar6 | 1LL << (uVar4 & 0x3f);
                uVar4 = uVar5;
            } while (uVar5 < uVar7);
        }
        if (1 < iVar1 - 6U) {
            uVar6 = uVar6 & 0xffffffff;
        }
    }
    else {
        if (iVar2 == 2) {
            if (*(piVar3 + 8) == 0) {
                return;
            }
            *(arg1 + 0x10) = *(piVar3 + 8);
            *(arg1 + 0x18) = *(piVar3 + 8) + -1;
            return;
        }
        if (iVar2 != 3) {
            if (iVar2 != 4) {
                return;
            }
            if (iVar1 == 7) {
                *arg1 = 5;
                return;
            }
            if (iVar1 != 6) {
                return;
            }
            *arg1 = 4;
            return;
        }
        *arg1 = 0;
        *(arg1 + 0x10) = 0;
    }
    *(arg1 + 0x18) = uVar6;
    return;
}


/* fcn.0001d9b4 @ 0x1d9b4 */

ulong fcn.0001d9b4(uint32_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    ulong uVar6;
    ulong uVar7;
    ulong uVar8;
    ulong uVar9;
    uint in_register_0000000c;
    uint64_t uVar10;
    int *piVar11;
    uint64_t uVar12;
    
    uVar10 = 0;
    uVar2 = *CONCAT44(in_register_0000000c,arg1);
    uVar3 = CONCAT44(in_register_0000000c,arg1)[1];
    uVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
    uVar5 = *(CONCAT44(in_register_0000000c,arg1) + 0x18);
    iVar1 = *(*(CONCAT44(in_register_0000000c,arg1) + 0x38) + 0x300);
    uVar6 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
    uVar7 = *(CONCAT44(in_register_0000000c,arg1) + 0x28);
    uVar8 = *(CONCAT44(in_register_0000000c,arg1) + 0x30);
    uVar9 = *(CONCAT44(in_register_0000000c,arg1) + 0x38);
    if (iVar1 == 0) {
        return 0x800000000000000e;
    }
    piVar11 = iVar1 + 0x65;
    uVar12 = uVar10;
    while ((*piVar11 == 0 || (*(CONCAT44(in_register_0000000c,arg1) + 0x20) != piVar11[1]))) {
        uVar12 = uVar12 + 1;
        piVar11 = piVar11 + 6;
        if (6 < uVar12) {
            return 0x800000000000000e;
        }
    }
    *(CONCAT44(in_register_0000000c,arg1) + 8) = *(piVar11 + 2);
    *(CONCAT44(in_register_0000000c,arg1) + 0x21) = 1;
    uVar12 = *(piVar11 + 4);
    do {
        if ((uVar12 >> (uVar10 & 0x3f) & 1) != 0) break;
        uVar10 = uVar10 + 1;
    } while (uVar10 < 0x40);
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x10) != uVar12) {
        if (*(CONCAT44(in_register_0000000c,arg1) + 0x10) < uVar12) {
            *(CONCAT44(in_register_0000000c,arg1) + 0x10) = uVar12;
        }
        *(CONCAT44(in_register_0000000c,arg1) + 0x18) = *(CONCAT44(in_register_0000000c,arg1) + 0x10) + -1;
    }
    if ((~*(CONCAT44(in_register_0000000c,arg1) + 0x18) & *(CONCAT44(in_register_0000000c,arg1) + 8)) !=
        *(CONCAT44(in_register_0000000c,arg1) + 8)) {
        *CONCAT44(in_register_0000000c,arg1) = uVar2;
        CONCAT44(in_register_0000000c,arg1)[1] = uVar3;
        *(CONCAT44(in_register_0000000c,arg1) + 0x10) = uVar4;
        *(CONCAT44(in_register_0000000c,arg1) + 0x18) = uVar5;
        *(CONCAT44(in_register_0000000c,arg1) + 0x20) = uVar6;
        *(CONCAT44(in_register_0000000c,arg1) + 0x28) = uVar7;
        *(CONCAT44(in_register_0000000c,arg1) + 0x30) = uVar8;
        *(CONCAT44(in_register_0000000c,arg1) + 0x38) = uVar9;
        return 0x800000000000000e;
    }
    return 0;
}


/* fcn.0001cb9c @ 0x1cb9c */

ulong fcn.0001cb9c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint in_register_00000014;
    int64_t iVar5;
    uint64_t arg3_00;
    bool bVar6;
    bool bVar7;
    
    iVar5 = CONCAT44(in_register_00000014,arg2);
    arg3_00 = 0;
    if (*(iVar5 + 8) == 0) {
        iVar2 = fcn.0001bf1c(arg2);
        if (iVar2 < 0) {
            return 0x8000000000000009;
        }
        *(*(iVar5 + 0x10) + *(iVar5 + 8) * 8) = arg1;
    }
    else {
        if (*(iVar5 + 8) != 0) {
            piVar4 = *(iVar5 + 0x10);
            do {
                if (arg3 == '\0') {
                    uVar1 = *(*piVar4 + 0x10);
                    bVar6 = *(arg1 + 0x10) < uVar1;
                    bVar7 = *(arg1 + 0x10) == uVar1;
                }
                else {
                    uVar1 = *(*piVar4 + 8);
                    bVar6 = uVar1 < *(arg1 + 8);
                    bVar7 = uVar1 == *(arg1 + 8);
                }
                if (!bVar6 && !bVar7) {
                    uVar3 = fcn.0001bfc4(arg2,arg1,arg3_00);
                    return uVar3;
                }
                arg3_00 = arg3_00 + 1;
                piVar4 = piVar4 + 1;
            } while (arg3_00 < *(iVar5 + 8));
        }
        iVar2 = fcn.0001bf1c(arg2);
        if (iVar2 < 0) {
            return 0x8000000000000009;
        }
        *(*(iVar5 + 0x10) + *(iVar5 + 8) * 8) = arg1;
    }
    *(iVar5 + 8) = *(iVar5 + 8) + 1;
    return 0;
}


/* fcn.000113dc @ 0x113dc */

ulong fcn.000113dc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uchar *puVar3;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_bp_10h = -0x68323942;
    var_ch = 0x47827792;
    var_bp_8h = -0x1c199246;
    var_4h = -0x2753a945;
    if (*0x237d8 == 0) {
        uVar2 = 0x800000000000000e;
    }
    else if (*(*0x237d8 + 8) + 1 + *(*0x237d8 + 6) < 2) {
        puVar3 = *0x237d8 + 0xc + (*(*0x237d8 + 6) + *(*0x237d8 + 8)) * 0xf;
        *puVar3 = 1;
        *(puVar3 + 1) = *(arg1 + 0x318);
        fcn.00022ac0(puVar3 + 10,*(arg1 + 0x300) + 0x18,5);
        if ((*(*(arg1 + 0x300) + 0x3b) & 1) == 0) {
            *(puVar3 + 6) = *(*(arg1 + 0x300) + 0x31);
            puVar3[5] = 1;
        }
        else {
            *(puVar3 + 6) = 0;
            puVar3[5] = 0;
        }
        if (arg2 != 0) {
            *arg2 = puVar3;
        }
        iVar1 = *0x237d8;
        *(*0x237d8 + 8) = *(*0x237d8 + 8) + '\x01';
        uVar2 = (**(*0x238b0 + 0x58))(L"ROM_CMN",&var_bp_10h,*0x22d50,0x1b,iVar1);
    }
    else {
        uVar2 = 0x8000000000000005;
    }
    return uVar2;
}


/* fcn.0001d250 @ 0x1d250 */

int64_t fcn.0001d250(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_8;
    
    iVar2 = 0;
    if (arg1 != 0) {
        uStackX_8 = 0x10;
        iVar1 = fcn.0001d098(arg2,arg3,2);
        if ((iVar1 == 0) || (iVar2 = (**(*0x238b0 + 0x48))(iVar1,0x231a0,0,&uStackX_8,arg1), iVar2 < 0)) {
            *(arg1 + 6) = 0;
            *(arg1 + 9) = 1000;
            *arg1 = 0x37010001;
            *(arg1 + 0xb) = 0;
            *(arg1 + 4) = 0x37;
            *(arg1 + 8) = 5;
            if (iVar2 == -0x7ffffffffffffff2) {
                iVar2 = (**(*0x238b0 + 0x58))(iVar1,0x231a0,3,uStackX_8,arg1);
            }
        }
        if (iVar1 != 0) {
            (**(*0x238a8 + 0x48))(iVar1);
        }
        return iVar2;
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00021ac4 @ 0x21ac4 */

ulong fcn.00021ac4(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x2e0) == 0) {
        iVar1 = fcn.0001bc6c(0x30);
        *(iVar2 + 0x2e0) = iVar1;
        if (iVar1 == 0) {
            return 0x8000000000000009;
        }
        **(iVar1 + 8) = *(iVar2 + 0xb0);
        *(*(iVar2 + 0x2e0) + 0x18) = *(iVar2 + 0xd8);
        *(*(iVar2 + 0x2e0) + 0x10) = iVar2;
        *(*(iVar2 + 0x2e0) + 0x20) = 1;
        *(*(iVar2 + 0x2e0) + 0x22) = 3;
        **(iVar2 + 0x2e0) = arg2;
        *(*(iVar2 + 0x2e0) + 0x28) = iVar2;
    }
    return 0;
}


/* fcn.0001b8ec @ 0x1b8ec */

ulong fcn.0001b8ec(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x23890 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 76000 named .text
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


/* fcn.00010764 @ 0x10764 */

int64_t fcn.00010764(uint32_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    bool bVar6;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = iVar5;
    iVar1 = *(iVar5 + 0xd0);
    while (iVar1 != 1) {
        iVar3 = *(iVar3 + 0xc0);
        iVar1 = *(iVar3 + 0xd0);
    }
    uVar2 = *(iVar3 + 0xe0);
    bVar6 = *(iVar5 + 0xd0) != 2;
    iVar3 = *(*(iVar5 + 200) + 0x50);
    if ((iVar3 == 0) ||
       (iVar3 = (**(iVar3 + 8))(iVar3,*(*(iVar5 + 200) + 0x40),uVar2,*(iVar5 + 0xd8),bVar6,0), iVar3 < 0)) {
        iVar3 = *(*(iVar5 + 200) + 0x90);
        if (iVar3 != 0) {
            (**(iVar3 + 8))(iVar3,*(*(iVar5 + 200) + 0x40),uVar2,*(iVar5 + 0xd8),bVar6,0);
        }
    }
    iVar3 = *(*(iVar5 + 200) + 0x48);
    (**(iVar3 + 0x38))(iVar3,uVar2,*(iVar5 + 0xd8),bVar6);
    iVar4 = -0x7ffffffffffffff2;
    iVar3 = *(*(iVar5 + 200) + 0x50);
    if ((iVar3 == 0) ||
       (iVar4 = (**(iVar3 + 8))(iVar3,*(*(iVar5 + 200) + 0x40),uVar2,*(iVar5 + 0xd8),bVar6,1), iVar4 < 0)) {
        iVar3 = *(*(iVar5 + 200) + 0x90);
        if (iVar3 != 0) {
            iVar4 = (**(iVar3 + 8))(iVar3,*(*(iVar5 + 200) + 0x40),uVar2,*(iVar5 + 0xd8),bVar6,1);
        }
    }
    if ((iVar4 == -0x7ffffffffffffff2) || (iVar4 == -0x7ffffffffffffffd)) {
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.000138fc @ 0x138fc */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000138fc(int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char cVar5;
    ulong uVar6;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    uint16_t auStackX_18 [4];
    uint16_t auStackX_20 [4];
    int64_t var_40h;
    int8_t var_48h;
    int64_t var_50h;
    int16_t var_58h;
    uint16_t auStack_48 [2];
    uchar auStack_44 [12];
    int16_t var_10h;
    int64_t var_ch;
    
    auStackX_20[0] = 0;
    auStackX_10[0] = 0;
    if (*(arg1 + 0xc0) != 0) {
        *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | *(*(arg1 + 0xc0) + 0x2b8);
    }
    uVar6 = 0;
    iStackX_8._1_7_ = *(arg1 + 0xd8) >> 8;
    iStackX_8 = CONCAT71(iStackX_8._1_7_,0xc);
    auStack_48[0] = 0x37;
    iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,0,auStackX_18);
    if (-1 < iVar2) {
        if ((auStackX_18[0] & 0xff00) == 0) {
            auStackX_18[0] = 0x2000;
            iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,CONCAT71(uVar6 >> 8,1),auStackX_18);
            if (iVar2 < 0) {
                return iVar2;
            }
        }
        iStackX_8 = CONCAT71(iStackX_8._1_7_,4);
        iVar3 = iStackX_8;
        uVar6 = 0;
        iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,0,auStackX_18);
        if ((-1 < iVar2) &&
           (iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iVar3,CONCAT71(uVar6 >> 8,1),auStack_48), -1 < iVar2)) {
            uVar6 = 0;
            iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iVar3,0,auStack_48);
            if ((-1 < iVar2) &&
               (iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iVar3,CONCAT71(uVar6 >> 8,1),auStackX_18), -1 < iVar2)) {
                if (*(arg1 + 0xd0) == 2) {
                    iStackX_8 = CONCAT71(iStackX_8._1_7_,0x1b);
                    auStackX_18[0] = 0x20;
                    iVar2 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_8,1,auStackX_18);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    iStackX_8 = CONCAT71(iStackX_8._1_7_,0x3e);
                    iVar2 = iStackX_8;
                    uVar6 = 0;
                    auStackX_20[0] = 0x1c;
                    iVar3 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,0,auStack_44);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    iVar3 = fcn.0001cc58(*(arg1 + 0xb8),iVar2,CONCAT71(uVar6 >> 8,1),auStackX_20);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    uVar6 = 0;
                    iVar3 = fcn.0001cc58(*(arg1 + 0xb8),iVar2,0,auStackX_20);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iVar2,CONCAT71(uVar6 >> 8,1),auStack_44);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                }
                if ((auStack_48[0] & 1) == 0) {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffffffeff;
                }
                else {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x100;
                }
                if ((auStack_48[0] & 2) == 0) {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffffffdff;
                }
                else {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x200;
                }
                if ((auStack_48[0] & 4) == 0) {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffffffbff;
                }
                else {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x400;
                }
                if ((auStack_48[0] & 0x20) == 0) {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffffffffb;
                }
                else {
                    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 4;
                }
                iStackX_8 = CONCAT71(iStackX_8._1_7_,0xc);
                iVar2 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_8,1,auStackX_10);
                if (-1 < iVar2) {
                    if (*(arg1 + 0xd0) == 2) {
                        if ((auStackX_20[0] & 4) == 0) {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffffffffd;
                        }
                        else {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 2;
                        }
                        if ((auStackX_20[0] & 8) == 0) {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xffffffffffffffe3;
                        }
                        else {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x1c;
                        }
                        if ((auStackX_20[0] & 0x10) == 0) {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffff9ffff;
                        }
                        else {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x60000;
                        }
                        if ((*(arg1 + 0x2b8) & 0x40010) == 0x40010) {
                            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffff9ffff;
                        }
                        *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x60;
                    }
                    else {
                        cVar5 = *(arg1 + 0xef);
                        if (cVar5 == '\0') {
                            if (*(arg1 + 0xee) == '\x01') {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x18;
                            }
                            else {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xffffffffffffffe7;
                            }
                        }
                        else if (cVar5 == '\x01') {
                            if (*(arg1 + 0xee) == '\x01') {
                                uVar4 = *(arg1 + 0x2b8);
                                cVar5 = '\0';
                                uVar1 = *(arg1 + 0xed);
                                *(arg1 + 0x2b8) = uVar4 | 0x60;
                                if (uVar1 < '\0') {
                                    *(arg1 + 0x2b8) = uVar4 | 0x460;
                                }
                                iStackX_8._0_1_ = uVar1;
                                if ((uVar1 & 1) == 0) {
                                    if (*(*(arg1 + 200) + 8) == 0) {
                                        *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | 0x20;
                                        *(*(arg1 + 200) + 8) = arg1;
                                    }
                                    else {
                                        iStackX_8._0_1_ = uVar1 | 1;
                                        cVar5 = '\x01';
                                    }
                                }
                                if ((*(arg1 + 0xed) & 4) == 0) {
                                    if (*(*(arg1 + 200) + 0x10) == 0) {
                                        *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | 0x40;
                                        *(*(arg1 + 200) + 0x10) = arg1;
                                    }
                                    else {
                                        cVar5 = cVar5 + '\x01';
                                        iStackX_8._0_1_ = iStackX_8 | 4;
                                    }
                                }
                                if ((cVar5 != '\0') && (iVar2 = fcn.00010b58(arg1,0,0,&iStackX_8), -1 < iVar2)) {
                                    *(arg1 + 0xed) = iStackX_8;
                                }
                            }
                            else {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xffffffffffffff9f;
                            }
                        }
                        else if (cVar5 == '\x03') {
                            if (*(arg1 + 0xee) == '\0') {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x18;
                            }
                            else {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xffffffffffffffe7;
                            }
                            if (*(arg1 + 0xee) == -0x80) {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 4;
                            }
                            else {
                                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) & 0xfffffffffffffffb;
                            }
                        }
                    }
                    uVar4 = *(arg1 + 0x2b8);
                    if ((uVar4 >> 8 & 1) == 0) {
                        uVar4 = uVar4 & 0xfffffffffffffffc;
                    }
                    else {
                        uVar4 = uVar4 | 3;
                    }
                    *(arg1 + 0x2b8) = uVar4;
                }
            }
        }
    }
    return iVar2;
}


/* fcn.00013db4 @ 0x13db4 */

int64_t fcn.00013db4(int64_t arg1)

{
    int64_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uchar uVar5;
    int64_t iVar6;
    uint16_t *puVar7;
    uint8_t uVar8;
    uint extraout_XMM0_Da;
    uint extraout_XMM0_Da_00;
    uint extraout_XMM0_Da_01;
    uint uVar9;
    uint extraout_XMM0_Da_02;
    ushort uStackX_8;
    uint8_t auStackX_10 [8];
    uint32_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    
    var_28h._1_7_ = *(arg1 + 0xd8) >> 8;
    var_28h = CONCAT71(var_28h._1_7_,6);
    iVar6 = fcn.0001cc58(*(arg1 + 0xb8),var_28h,0,auStackX_10);
    if ((-1 < iVar6) && ((auStackX_10[0] & 0x10) != 0)) {
        uStackX_8 = 0;
        uVar5 = 0x34;
        if (*(arg1 + 0xd0) == 3) {
            uVar5 = 0x14;
        }
        var_28h = CONCAT71(var_28h._1_7_,uVar5);
        iVar6 = (**(*(arg1 + 0xb8) + 0x38))(*(arg1 + 0xb8),0,var_28h,1,&uStackX_8 + 1);
        if (-1 < iVar6) {
            while( true ) {
                uVar8 = uStackX_8._1_1_;
                if ((uStackX_8._1_1_ == 0) || ((uStackX_8 & 0x300) != 0)) break;
                var_28h = CONCAT71(var_28h._1_7_,uStackX_8._1_1_);
                iVar6 = fcn.0001cc58(*(arg1 + 0xb8),var_28h,0,&var_20h);
                uStackX_8 = var_20h;
                if (var_20h == '\x01') {
                    *(arg1 + 0x2c8) = uVar8;
                }
                uVar9 = extraout_XMM0_Da;
                if (var_20h == '\x10') {
                    puVar7 = fcn.0001bc6c(0x98);
                    *(arg1 + 0x2d0) = puVar7;
                    if (puVar7 == NULL) {
                        return -0x7ffffffffffffff7;
                    }
                    *puVar7 = uVar8;
                    *(*(arg1 + 0x2d0) + 0x90) = arg1;
                    iVar6 = 0;
                    uVar9 = extraout_XMM0_Da_00;
                    if ((*(arg1 + 0x396) == '\0') && (iVar1 = *(arg1 + 0x2d0), iVar1 != 0)) {
                        iVar6 = *(arg1 + 0x300);
                        if ((iVar6 == 0) || ((*(iVar6 + 0x3d) & 0x10) == 0)) {
                            uVar9 = *(*0x23820 + 9);
                            uVar2 = *(*0x23820 + 0xd);
                            uVar3 = *(*0x23820 + 0x11);
                            uVar4 = *(*0x23820 + 0x15);
                            *(iVar1 + 0x80) = uVar9;
                            *(iVar1 + 0x84) = uVar2;
                            *(iVar1 + 0x88) = uVar3;
                            *(iVar1 + 0x8c) = uVar4;
                            iVar6 = 0;
                        }
                        else {
                            iVar6 = fcn.0001d250(iVar1 + 0x80,iVar6,*(arg1 + 0x318));
                            uVar9 = extraout_XMM0_Da_01;
                        }
                    }
                }
                if (uStackX_8 == '\f') {
                    iVar6 = fcn.00021ac4(arg1,uVar8);
                    uVar9 = extraout_XMM0_Da_02;
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                }
                if (uStackX_8 == '\a') {
                    iVar6 = fcn.0001b8ec(uVar9,0x18);
                    puVar7 = NULL;
                    if (iVar6 != 0) {
                        puVar7 = fcn.000102a0(iVar6,0x18);
                    }
                    *(arg1 + 0x2d8) = puVar7;
                    if (puVar7 == NULL) {
                        return -0x7ffffffffffffff7;
                    }
                    *puVar7 = uVar8;
                    var_28h = CONCAT71(var_28h._1_7_,**(arg1 + 0x2d8) + '\x04');
                    iVar6 = fcn.0001cd18(*(arg1 + 0xb8),var_28h,0,*(arg1 + 0x2d8) + 4);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    uVar8 = **(arg1 + 0x2d8) + 2;
                    var_28h = CONCAT71(var_28h._1_7_,uVar8);
                    iVar6 = fcn.0001cc58(*(arg1 + 0xb8),var_28h,0,*(arg1 + 0x2d8) + 8);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    **(arg1 + 0x2d8) = uVar8;
                    *(*(arg1 + 0x2d8) + 0x10) = arg1;
                }
            }
        }
    }
    return iVar6;
}


/* fcn.00020e74 @ 0x20e74 */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00020e74(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ushort uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    uint16_t *puVar6;
    ushort *puVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t auStackX_8 [4];
    uint8_t uStackX_10;
    int16_t iStackX_18;
    uint16_t uStackX_1a;
    ulong uStackX_20;
    int64_t var_48h;
    uint32_t var_58h;
    int64_t var_60h;
    ulong uStack_58;
    int64_t var_18h;
    
    uStackX_10 = arg2;
    uVar14 = arg2 & 0xff;
    *(*(arg1 + 0x2d0) + 0x18) = 0xffff;
    *(*(arg1 + 0x2d0) + 0x1a) = 0xffff;
    fcn.0001f6a0(arg1);
    iVar5 = 0;
    uStack_58 = CONCAT71(*(arg1 + 0xd8) >> 8,**(arg1 + 0x2d0) + '\x12') & 0xffffffff;
    fcn.0001cc58(*(arg1 + 0xb8),uStack_58,0,auStackX_8);
    *(*(arg1 + 0x2d0) + 0x1c) = auStackX_8[0] & 0xf;
    *(*(arg1 + 0x2d0) + 0x1d) = auStackX_8[0] >> 4 & 0x3f;
    if (1 < (*(*(arg1 + 0x2d0) + 2) & 0xf)) {
        uVar4 = fcn.0001bc6c(0x28);
        *(*(arg1 + 0x2d0) + 0x20) = uVar4;
        if (*(*(arg1 + 0x2d0) + 0x20) == 0) {
            return -0x7ffffffffffffff7;
        }
        iVar5 = fcn.0001ddc0(arg1);
    }
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar12 = 0x100;
    uStack_58 = CONCAT44(0x100,uStack_58);
    do {
        uVar11 = uStack_58;
        uVar13 = 0;
        iVar5 = fcn.0001cd18(*(arg1 + 0xb8),uStack_58,0,&iStackX_18);
        if (iStackX_18 == -1) break;
        if (iStackX_18 == 0x15) {
            iVar5 = fcn.0001d43c(0x23948);
            if (*0x2394a == '\x01') {
                iVar5 = fcn.00020b98(arg1,&uStack_58);
                uVar11 = uStack_58;
                uVar12 = uStack_58._4_4_;
            }
        }
        if (iStackX_18 == 2) {
            puVar6 = fcn.0001bc6c(0x28);
            if (puVar6 == NULL) {
                iVar5 = -0x7ffffffffffffff7;
                uStackX_20 = uVar11;
            }
            else {
                *(*(arg1 + 0x2d0) + 0x40) = puVar6;
                *puVar6 = uVar11 >> 0x20;
                uStackX_20._0_4_ = uVar11;
                uStackX_20 = CONCAT44((uVar11 >> 0x20 & 0xffff) + 4,uStackX_20);
                fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,puVar6 + 1);
                uStackX_20 = CONCAT44(*puVar6 + 8,uStackX_20);
                iVar5 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,puVar6 + 3);
                uVar9 = *(puVar6 + 1);
                if ((uVar9 >> 4 & 7) + 1 + (uVar9 & 7) != 0) {
                    do {
                        puVar7 = fcn.0001bc6c(8);
                        if (puVar7 == NULL) {
code_r0x000210fd:
                            iVar5 = -0x7ffffffffffffff7;
                            break;
                        }
                        iVar1 = *puVar6 + uVar13 * 0xc + 0x10;
                        *puVar7 = iVar1;
                        uStackX_20 = CONCAT44(iVar1,uStackX_20);
                        fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,puVar7 + 1);
                        iVar5 = fcn.0001bf1c(puVar6 + 0x10);
                        if (iVar5 < 0) goto code_r0x000210fd;
                        iVar5 = 0;
                        uVar13 = uVar13 + 1;
                        *(*(puVar6 + 0x10) + *(puVar6 + 0xc) * 8) = puVar7;
                        *(puVar6 + 0xc) = *(puVar6 + 0xc) + 1;
                    } while (uVar13 < (*(puVar6 + 1) & 7) + 1 + (*(puVar6 + 1) >> 4 & 7));
                }
            }
            uVar14 = uStackX_10;
        }
        if ((iStackX_18 == 0x10) && (uVar14 != '\0')) {
            iVar5 = 0;
        }
        uVar9 = arg1;
        iVar10 = arg1;
        cVar3 = fcn.0001dd94(uVar9);
        if (cVar3 != '\0') {
            if (iStackX_18 == 0xe) {
                iVar5 = fcn.0001ff40(iVar10,*(arg1 + 0x2d0) + 0x58,iVar5,uVar12);
            }
            if (iStackX_18 == 0xd) {
                iVar5 = fcn.0001ff40(uVar9,*(arg1 + 0x2d0) + 0x60,iVar5,uVar12);
            }
            if (iStackX_18 == 0xf) {
                iVar5 = fcn.0001ff40(uVar9,*(arg1 + 0x2d0) + 0x68,iVar5,uVar12);
            }
            if (iStackX_18 == 10) {
                fcn.0001ff40(uVar9,*(arg1 + 0x2d0) + 0x78,iVar5,uVar12);
                iVar5 = 0;
            }
            uVar2 = uStack_58._4_2_;
            if (iStackX_18 == 0x19) {
                uVar4 = fcn.0001bc6c(0xc);
                *(*(arg1 + 0x2d0) + 0x28) = uVar4;
                puVar7 = *(*(arg1 + 0x2d0) + 0x28);
                if (puVar7 == NULL) {
                    iVar5 = -0x7ffffffffffffff7;
                }
                else {
                    *puVar7 = uVar2;
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 8,uStackX_20);
                    iVar5 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x28) + 4);
                    cVar3 = fcn.0001dc1c(uVar9);
                    if (cVar3 == '\0') {
                        *(*(*(arg1 + 0x2d0) + 0x28) + 8) = *(*(arg1 + 0x2d0) + 8) >> 4 & 0x3f;
                    }
                }
            }
            if (iStackX_18 == 0x26) {
                uVar4 = fcn.0001bc6c(0x18);
                *(*(arg1 + 0x2d0) + 0x30) = uVar4;
                puVar7 = *(*(arg1 + 0x2d0) + 0x30);
                if (puVar7 == NULL) {
                    iVar5 = -0x7ffffffffffffff7;
                }
                else {
                    *puVar7 = uVar2;
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x10,uStackX_20);
                    fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x30) + 8);
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x14,uStackX_20);
                    fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x30) + 0xc);
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x18,uStackX_20);
                    iVar5 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x30) + 0x10);
                    cVar3 = fcn.0001db90(uVar9);
                    if (cVar3 == '\0') {
                        *(*(*(arg1 + 0x2d0) + 0x30) + 0x14) = *(*(arg1 + 0x2d0) + 8) >> 4 & 0x3f;
                    }
                }
            }
            if (iStackX_18 == 0x2a) {
                uVar4 = fcn.0001bc6c(0x20);
                *(*(arg1 + 0x2d0) + 0x38) = uVar4;
                puVar7 = *(*(arg1 + 0x2d0) + 0x38);
                if (puVar7 == NULL) {
                    iVar5 = -0x7ffffffffffffff7;
                }
                else {
                    *puVar7 = uVar2;
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x10,uStackX_20);
                    fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x38) + 0xc);
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x14,uStackX_20);
                    fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x38) + 0x10);
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x18,uStackX_20);
                    fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x38) + 0x14);
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 0x1c,uStackX_20);
                    fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x38) + 0x18);
                    uStackX_20._0_4_ = *(arg1 + 0xd8);
                    uStackX_20 = CONCAT44(uVar12 + 8,uStackX_20);
                    iVar5 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_20,0,*(*(arg1 + 0x2d0) + 0x38) + 4);
                    cVar3 = fcn.0001db00(uVar9);
                    if (cVar3 == '\0') {
                        *(*(*(arg1 + 0x2d0) + 0x38) + 0x1c) = *(*(arg1 + 0x2d0) + 8) >> 4 & 0x3f;
                    }
                }
            }
        }
        if (iStackX_18 == 6) {
            iVar5 = fcn.0001ff40(uVar9,*(arg1 + 0x2d0) + 0x70,iVar5,uVar12);
        }
        uVar8 = uStackX_1a >> 4;
        uVar12 = uVar8;
        uStack_58 = CONCAT24(uVar8,uStack_58);
    } while (uVar8 != 0);
    uVar8 = *(*(arg1 + 0x2d0) + 2) & 0xf0;
    if (((uVar8 - 0x40 & 0xff9f) != 0) || (uVar8 == 0xa0)) {
        iVar5 = fcn.0001bf1c(0x23908);
        if (iVar5 < 0) {
            iVar5 = -0x7ffffffffffffff7;
        }
        else {
            *(*0x23918 + *0x23910 * 8) = arg1;
            *0x23910 = *0x23910 + 1;
            iVar5 = 0;
        }
    }
    return iVar5;
}


/* fcn.0001d164 @ 0x1d164 */

int64_t fcn.0001d164(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_8;
    
    iVar2 = 0;
    if (arg1 != 0) {
        uStackX_8 = 0xe;
        iVar1 = fcn.0001d098(arg2,arg3,3);
        if ((iVar1 == 0) || (iVar2 = (**(*0x238b0 + 0x48))(iVar1,0x231a0,0,&uStackX_8,arg1), iVar2 < 0)) {
            *(arg1 + 1) = 0;
            *(arg1 + 9) = 0;
            *(arg1 + 5) = 0x37000000;
            *(arg1 + 0xb) = 0;
            *arg1 = 0xff;
            if (iVar2 == -0x7ffffffffffffff2) {
                iVar2 = (**(*0x238b0 + 0x58))(iVar1,0x231a0,3,uStackX_8,arg1);
            }
        }
        if (iVar1 != 0) {
            (**(*0x238a8 + 0x48))(iVar1);
        }
        return iVar2;
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00020d44 @ 0x20d44 */

ulong fcn.00020d44(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong uVar4;
    ulong uVar5;
    uint16_t auStackX_8 [4];
    uint64_t uStackX_10;
    int64_t var_20h;
    int64_t var_30h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    var_20h = (*(iVar3 + 0xd8) >> 8 & 0xffffff) << 8;
    if ((*(iVar3 + 0x396) == '\0') && (*(iVar3 + 0x2d0) != 0)) {
        uStackX_10 = arg2;
        if (*(iVar3 + 0xd0) - 2U < 2) {
            fcn.0001f2a8(arg1);
        }
        uVar2 = 0;
        var_20h = CONCAT71(var_20h._1_7_,**(iVar3 + 0x2d0) + '\b');
        fcn.0001cc58(*(iVar3 + 0xb8),var_20h,0,&uStackX_10);
        if (*(*(iVar3 + 0x2d0) + 0x8d) == '\0') {
            uStackX_10 = uStackX_10 & 0xfffffffffffffc10 | 0x810;
            fcn.0001cc58(*(iVar3 + 0xb8),var_20h,CONCAT71(uVar2 >> 8,1),&uStackX_10);
        }
        uVar5 = 0;
        var_20h = CONCAT71(var_20h._1_7_,**(iVar3 + 0x2d0) + '\x10');
        uVar2 = fcn.0001cc58(*(iVar3 + 0xb8),var_20h,0,auStackX_8);
        if (*(*(iVar3 + 0x2d0) + 0x8e) == '\0') {
            auStackX_8[0] = auStackX_8[0] & 0xff7c;
            uVar2 = fcn.0001cc58(*(iVar3 + 0xb8),var_20h,CONCAT71(uVar5 >> 8,1),auStackX_8);
        }
        cVar1 = fcn.0001dd94(arg1);
        if (cVar1 != '\0') {
            uVar2 = uVar4;
        }
        uVar4 = uVar2;
    }
    return uVar4;
}


/* fcn.00013228 @ 0x13228 */

int64_t fcn.00013228(int64_t arg1)

{
    int iVar1;
    ulong *puVar2;
    uchar auVar3 [16];
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    ulong uVar7;
    char cVar8;
    uint64_t uVar9;
    int64_t iVar10;
    char *pcVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int32_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    
    iVar4 = *(arg1 + 200);
    uVar14 = 0;
    auStackX_8[0] = 0;
    iStackX_18 = 0;
    uStackX_20 = 0xff;
    if (*(iVar4 + 0x58) != 0) {
        cVar8 = '\0';
        if (*(arg1 + 0xd0) == 3) {
            cVar8 = '@';
        }
        if (*(arg1 + 0xd0) - 4U < 2) {
            cVar8 = ',';
        }
        iStackX_10._1_7_ = *(arg1 + 0xd8) >> 8;
        iStackX_10 = CONCAT71(iStackX_10._1_7_,cVar8);
        uVar12 = uVar14;
        if (cVar8 != '\0') {
            iVar4 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_10,0,auStackX_8);
            if (iVar4 < 0) {
                return iVar4;
            }
            uVar12 = auStackX_8[0];
        }
        uVar9 = uVar12 & 0xffff;
        uVar12 = uVar12 >> 0x10;
        if (uVar9 == 0) {
            uVar9 = 0xffffffffffffffff;
        }
        if (uVar12 == 0) {
            uVar12 = 0xffffffffffffffff;
        }
        puVar2 = *(*(arg1 + 200) + 0x58);
        iVar4 = (**puVar2)(puVar2,*(arg1 + 0xe8),*(arg1 + 0xea),*(arg1 + 0xec),uVar9,uVar12,&iStackX_18);
        if (iStackX_18 != 0) {
            iVar13 = iStackX_18;
            iVar5 = fcn.0001da68(iStackX_18,2);
            iVar4 = 0;
            if (iVar5 != 0) {
                auVar3._8_8_ = 0;
                auVar3._0_8_ = iVar5 - 2U;
                iVar10 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar3,8);
                iVar4 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar3,0);
                uVar12 = ((iVar5 - 2U) - iVar10 >> 1) + iVar10 >> 5;
                if (uVar12 != 0) {
                    pcVar11 = iVar13 + 3;
                    do {
                        if (*(pcVar11 + 0xb) == 0) {
                            puVar6 = fcn.0001bc6c(0x28);
                            if (puVar6 == NULL) {
                                return 0;
                            }
                            *(puVar6 + 1) = *(arg1 + 0xe8);
                            *(puVar6 + 6) = *(arg1 + 0xea);
                            *(puVar6 + 2) = 0xffff;
                            *puVar6 = 2;
                            if (*(pcVar11 + 0x1b) == -1) {
                                if (*pcVar11 == '\x01') {
                                    puVar6[3] = 8;
                                }
                                else {
                                    puVar6[3] = 9;
                                }
code_r0x000133c6:
                                *puVar6 = 1;
                            }
                            else {
                                puVar6[3] = 0xb;
                                *(puVar6 + 4) = *(pcVar11 + 0x1b) * 4 + 0x10;
                                if (*pcVar11 != '\0') goto code_r0x000133c6;
                                if (*(pcVar11 + 3) == 0x20) {
                                    iStackX_10._1_7_ = *(arg1 + 0xd8) >> 8;
                                    iStackX_10 = CONCAT71(iStackX_10._1_7_,puVar6[4]);
                                    iVar4 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_10,0,&uStackX_20);
                                    if (iVar4 < 0) {
                                        return iVar4;
                                    }
                                    *puVar6 = -((uStackX_20 & 7) != 0) & 4;
                                }
                                else {
                                    iVar4 = *(pcVar11 + 0x1b);
                                    *puVar6 = 0;
                                    *(puVar6 + 4) = iVar4 * 8 + 0x10;
                                }
                            }
                            iVar4 = *(pcVar11 + 0x13);
                            if (iVar4 != 0) {
                                *puVar6 = 2;
                                *(puVar6 + 8) = iVar4 + 1;
                            }
                            if (*(pcVar11 + 0x23) != 0) {
                                *(puVar6 + 8) = *(pcVar11 + 0x23);
                                *puVar6 = 2;
                            }
                            if ((*(pcVar11 + 0x1b) == 6) && (pcVar11[2] == '\0')) {
                                puVar6[3] = 0xb;
                                iVar1 = *(arg1 + 0xd0);
                                *puVar6 = 3;
                                uVar7 = 0x38;
                                if (iVar1 == 5) {
                                    uVar7 = 0x30;
                                }
                                *(puVar6 + 4) = uVar7;
                            }
                            iVar4 = fcn.0001bf1c(0x23760);
                            if (iVar4 < 0) {
                                return iVar4;
                            }
                            *(*0x23770 + *0x23768 * 8) = puVar6;
                            *0x23768 = *0x23768 + 1;
                        }
                        uVar14 = uVar14 + 1;
                        pcVar11 = pcVar11 + 0x2e;
                    } while (uVar14 < uVar12);
                    iVar4 = (**(*0x238a8 + 0x48))(iStackX_18);
                }
            }
        }
    }
    return iVar4;
}


/* fcn.0001cdb4 @ 0x1cdb4 */

void fcn.0001cdb4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char cVar2;
    int64_t iVar3;
    ulong uStackX_10;
    
    cVar2 = arg3;
    iVar3 = arg2;
    if (cVar2 == '\0') {
        iVar1 = (**(arg1 + 0x38))(arg1,3,arg2,1,arg4);
    }
    else {
        iVar1 = (**(arg1 + 0x40))();
    }
    if ((iVar1 == -0x7ffffffffffffffe) && (arg4 != 0)) {
        iVar3 = CONCAT71(iVar3 >> 8,cVar2);
        iVar1 = fcn.0001cd18(arg1,arg2,iVar3,arg4);
        if (-1 < iVar1) {
            uStackX_10._4_4_ = arg2 >> 0x20;
            if (uStackX_10._4_4_ == 0) {
                uStackX_10._0_1_ = arg2;
                uStackX_10 = CONCAT71(arg2 >> 8,uStackX_10 + '\x04');
            }
            else {
                uStackX_10 = CONCAT44(uStackX_10._4_4_ + 4,arg2);
            }
            fcn.0001cd18(arg1,uStackX_10,CONCAT71(iVar3 >> 8,cVar2),arg4 + 4);
        }
    }
    return;
}


/* fcn.000136cc @ 0x136cc */

//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.000136cc(int64_t arg1)

{
    int *arg1_00;
    uchar uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int *piVar5;
    ulong uVar6;
    int64_t arg3;
    ulong uStackX_8;
    uchar auStackX_10 [8];
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    if (*(arg1 + 0xd0) == 2) {
        uVar1 = 0x38;
    }
    else {
        if (1 < *(arg1 + 0xd0) - 4U) {
            return 0;
        }
        uVar1 = 0x30;
    }
    arg1_00 = arg1 + 0x278;
    uStackX_8 = CONCAT71(*(arg1 + 0xd8) >> 8,uVar1);
    iVar3 = uStackX_8;
    *(arg1 + 0x298) = uVar1;
    uVar6 = 0;
    iVar2 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_8,0,auStackX_10);
    if (iVar2 < 0) {
        return iVar2;
    }
    uStackX_8._0_4_ = 0xfffffffe;
    iVar2 = fcn.0001cd18(*(arg1 + 0xb8),iVar3,CONCAT71(uVar6 >> 8,1),&uStackX_8);
    if (iVar2 < 0) {
        return iVar2;
    }
    arg3 = 0;
    iVar2 = fcn.0001cd18(*(arg1 + 0xb8),iVar3,0,&uStackX_8);
    if (iVar2 < 0) {
        return iVar2;
    }
    uVar4 = uStackX_8 & 0xfffff800;
    uStackX_8 = CONCAT44(uStackX_8._4_4_,uStackX_8) & 0xfffffffffffff800;
    if ((uVar4 + 0x800 & 0xfffff7ff) != 0) {
        uVar4 = ~uVar4;
        *arg1_00 = 4;
        *(arg1 + 0x288) = uVar4 + 1;
        *(arg1 + 0x290) = uVar4;
    }
    if (*(arg1 + 0x2e8) != '\0') {
        fcn.000135a0(arg1_00);
    }
    if (*arg1_00 == 0) goto code_r0x000137fe;
    piVar5 = arg1_00;
    if ((*0x237a0 == '\0') || (*(arg1 + 0x2fe) == '\0')) {
code_r0x000137ef:
        arg3 = 0;
        uVar4 = 0x237e0;
    }
    else {
        iVar2 = fcn.0001d9b4(arg1_00);
        if (iVar2 < 0) goto code_r0x000137ef;
        arg3 = CONCAT71(arg3 >> 8,1);
        uVar4 = 0x23780;
    }
    fcn.0001cb9c(piVar5,uVar4,arg3);
code_r0x000137fe:
    iVar3 = fcn.0001cd18(*(arg1 + 0xb8),iVar3,CONCAT71(arg3 >> 8,1),auStackX_10);
    if (((*arg1_00 != 0) && (*(arg1 + 0x300) != 0)) && ((*(*(arg1 + 0x300) + 0x3b) & 1) != 0)) {
        if (*(arg1 + 0x3c0) != 0) {
            return iVar3;
        }
        iVar3 = fcn.00011760(arg1);
        if ((iVar3 < 0) && (iVar3 = fcn.000113dc(arg1,&var_bp_20h), -1 < iVar3)) {
            fcn.0001169c(arg1,var_bp_20h);
        }
    }
    if (((*(arg1 + 0x3c0) == 0) && (*(arg1 + 0x300) == 0)) && (*arg1_00 != 0)) {
        for (iVar2 = *(arg1 + 0xc0); iVar2 != 0; iVar2 = *(iVar2 + 0xc0)) {
            if ((*0x23900 == '\x01') && (*(iVar2 + 0xd0) == 1)) {
                return iVar3;
            }
            if (*(iVar2 + 0x300) != 0) {
                if ((*(*(iVar2 + 0x300) + 0x3b) & 1) != 0) {
                    return iVar3;
                }
                iVar2 = *(iVar2 + 0x3c0);
                if (iVar2 != 0) {
                    *(arg1 + 0x3c0) = iVar2;
                    *(iVar2 + 0x1a) = *(arg1 + 0xef);
                    return iVar3;
                }
                return iVar3;
            }
        }
        iVar3 = -0x7ffffffffffffff9;
    }
    return iVar3;
}


/* fcn.0001c438 @ 0x1c438 */

int64_t fcn.0001c438(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t arg2_00;
    int64_t iVar2;
    char cStackX_8;
    int64_t iStackX_18;
    int64_t *piStackX_20;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    if ((arg1_00 != 0) && (arg2 != 0)) {
        if ((*(arg1_00 + 8) + -1 == *(arg1_00 + 0x10)) && (iVar1 = fcn.0001c364(arg1_00), iVar1 < 0)) {
            return iVar1;
        }
        if (*(arg1_00 + 0x20) != 0) {
            arg2_00 = 0;
            if (*(arg1_00 + 0x18) != 0) {
                iVar2 = 0;
                do {
                    fcn.0001c238(arg1_00,arg2_00,*(*(arg1_00 + 0x20) + iVar2),arg2);
                    if (-1 < cStackX_8) {
                        iStackX_18 = iStackX_18 + 1;
                        piStackX_20 = piStackX_20 + 1;
                    }
                    fcn.00022ac0(piStackX_20 + 1,piStackX_20,(*(arg1_00 + 0x10) - iStackX_18) * 8);
                    arg2_00 = arg2_00 + 1;
                    *piStackX_20 = arg2;
                    iVar2 = iVar2 + 0x18;
                } while (arg2_00 < *(arg1_00 + 0x18));
            }
            *(arg1_00 + 0x10) = *(arg1_00 + 0x10) + 1;
            return iVar1;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.0001c044 @ 0x1c044 */

ulong fcn.0001c044(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_00000014,arg2);
    uVar1 = *(arg1 + 8);
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
        for (; uVar2 < uVar1 - 1; uVar2 = uVar2 + 1) {
            *(*(arg1 + 0x10) + uVar2 * 8) = *(*(arg1 + 0x10) + 8 + uVar2 * 8);
            uVar1 = *(arg1 + 8);
        }
        *(arg1 + 8) = *(arg1 + 8) + -1;
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00013d80 @ 0x13d80 */

uint8_t fcn.00013d80(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar1 = 0;
    do {
        uVar2 = 1LL << (uVar1 & 0x3f);
        if ((~arg1 & uVar2) == uVar2) break;
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x40);
    if (uVar1 == 0x40) {
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.0001bfc4 @ 0x1bfc4 */

ulong fcn.0001bfc4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar3 + 8) == 0) && (arg3 != 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        iVar2 = fcn.0001bf1c(arg1);
        if (iVar2 < 0) {
            uVar1 = 0x8000000000000009;
        }
        else {
            iVar2 = *(iVar3 + 8);
            while (iVar2 = iVar2 + -1, arg3 <= iVar2) {
                *(*(iVar3 + 0x10) + 8 + iVar2 * 8) = *(*(iVar3 + 0x10) + iVar2 * 8);
            }
            *(*(iVar3 + 0x10) + arg3 * 8) = arg2;
            *(iVar3 + 8) = *(iVar3 + 8) + 1;
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.00014aa8 @ 0x14aa8 */

uint64_t fcn.00014aa8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg1_00;
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    iVar2 = fcn.0001bf1c(arg2);
    uVar4 = 0;
    if (iVar2 < 0) {
        uVar4 = 0x8000000000000009;
    }
    else {
        *(*(arg2 + 0x10) + *(arg2 + 8) * 8) = arg3;
        *(arg2 + 8) = *(arg2 + 8) + 1;
        if (arg1 != 0) {
            if (*(arg1 + 0x10) == 0) {
code_r0x00014af3:
                uVar4 = 0x8000000000000002;
            }
            else {
                uVar5 = uVar4;
                if (0 < *(arg1 + 0x18)) {
                    do {
                        uVar1 = *(arg1 + 0x10);
                        iVar2 = *(arg1 + 0x28) + *(arg1 + 8) * uVar5 * 8;
                        uVar3 = uVar4;
                        if (uVar1 != 0) {
                            do {
                                if (*(iVar2 + uVar3 * 8) == arg3) break;
                                uVar3 = uVar3 + 1;
                            } while (uVar3 < uVar1);
                        }
                        arg1_00 = iVar2 + uVar3 * 8;
                        if (*arg1_00 != arg3) goto code_r0x00014af3;
                        fcn.00022ac0(arg1_00,arg1_00 + 1,(uVar1 - uVar3) * 8 + -8);
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(arg1 + 0x18));
                }
                *(arg1 + 0x10) = *(arg1 + 0x10) + -1;
            }
        }
    }
    return uVar4;
}


/* fcn.00014958 @ 0x14958 */

int64_t fcn.00014958(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int iVar6;
    
    *(arg1 + 0x18) = 1;
    iVar6 = arg3;
    *(arg1 + 0x20) = 0x230a0;
    *(arg1 + 0x10) = 0;
    *arg1 = 4;
    if (arg4 == '\0') {
        *(arg1 + 8) = 0x10;
    }
    else {
        *(arg1 + 8) = 0x30;
    }
    iVar2 = (**(*0x238a8 + 0x40))(4,*(arg1 + 8) << 3,arg1 + 0x28);
    if ((-1 < iVar2) && (uVar5 = 0, *(arg2 + 0xa70) != 0)) {
        do {
            iVar1 = *(*(arg2 + 0xa78) + uVar5 * 8);
            if (*(iVar1 + 0x2fc) == '\0') {
                if (arg4 == '\0') {
                    if ((((*(iVar1 + 0xd0) - 2U < 2) && (piVar3 = iVar1 + iVar6 * 0x40 + 0x3c8, *piVar3 == iVar6 + 1))
                        && (*(piVar3 + 4) != 0)) && (iVar2 = fcn.0001c438(arg1,piVar3), iVar2 < 0)) {
                        return iVar2;
                    }
                }
                else {
                    uVar4 = 0;
                    piVar3 = iVar1 + 0xf8;
                    do {
                        if (((*piVar3 == iVar6 + 1) && (*(piVar3 + 4) != 0)) &&
                           (iVar2 = fcn.0001c438(arg1,piVar3), iVar2 < 0)) {
                            return iVar2;
                        }
                        uVar4 = uVar4 + 1;
                        piVar3 = piVar3 + 0x10;
                    } while (uVar4 < 7);
                }
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(arg2 + 0xa70));
    }
    return iVar2;
}


/* fcn.0001c554 @ 0x1c554 */

ulong fcn.0001c554(int64_t arg1,ulong noname_1,uint32_t arg2,uint32_t *arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    int in_R8;
    
    uVar1 = *(arg1 + 0x10);
    puVar2 = *(arg1 + 0x28);
    if (uVar1 <= CONCAT44(in_R8,arg2)) {
        if (uVar1 != 0) {
            *arg3 = puVar2[uVar1 - 1];
        }
        return 0xc000000000000001;
    }
    if (in_R8 < 0) {
        *arg3 = *puVar2;
        return 0xc000000000000002;
    }
    *arg3 = puVar2[CONCAT44(in_R8,arg2)];
    return 0;
}


/* fcn.0001c238 @ 0x1c238 */

void fcn.0001c238(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *in_stack_00000028;
    char *in_stack_00000030;
    int64_t *in_stack_00000038;
    
    iVar2 = *(arg1 + 0x20);
    iVar6 = 0;
    iVar4 = 0;
    iVar7 = *(arg1 + 0x10) + -1;
    if ((in_stack_00000030 != NULL) && (in_stack_00000028 != NULL)) {
        iVar1 = *(arg1 + 0x28) + *(arg1 + 8) * arg2 * 8;
        if (*(arg1 + 0x10) == 0) {
            *in_stack_00000030 = -1;
        }
        else {
            if (iVar7 < 0) {
                pcVar5 = in_stack_00000030;
            }
            else {
                do {
                    iVar4 = (iVar6 + 1 + iVar7) / 2;
                    pcVar5 = (*arg3)(*(iVar2 + 0x10 + arg2 * 0x18),arg4,*(iVar1 + iVar4 * 8));
                    if (pcVar5 == NULL) {
                        if (iVar4 == iVar7) goto code_r0x0001c31a;
                        iVar6 = iVar4;
                    }
                    else if (pcVar5 < 1) {
                        iVar7 = iVar4 + -1;
                    }
                    else {
                        iVar6 = iVar4 + 1;
                    }
                } while (iVar6 <= iVar7);
            }
            if (pcVar5 + 1 < 0x3) {
code_r0x0001c31a:
                cVar3 = (-1 < pcVar5) + -1;
                if (0 < pcVar5) {
                    cVar3 = '\x01';
                }
                *in_stack_00000030 = cVar3;
            }
        }
        *in_stack_00000028 = iVar1 + iVar4 * 8;
        if (in_stack_00000038 != NULL) {
            *in_stack_00000038 = iVar4;
        }
    }
    return;
}


/* fcn.00015638 @ 0x15638 */

void fcn.00015638(uint32_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong *puVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iStackX_8;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if (*(iVar3 + 0xa70) != 0) {
        do {
            iVar1 = *(*(iVar3 + 0xa78) + uVar6 * 8);
            if (*(iVar1 + 0xd0) - 2U < 2) {
                fcn.00015638(iVar1);
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < *(iVar3 + 0xa70));
    }
    puVar5 = iVar3 + 0x7f0;
    iStackX_8 = 6;
    puVar4 = iVar3 + 0x440;
    piVar7 = iVar3 + 0x9d8;
    do {
        uVar2 = *puVar4;
        (**(*0x238a8 + 0x168))(puVar4 + -7,0x40);
        iVar3 = *0x238a8;
        *puVar4 = uVar2;
        uVar2 = *puVar5;
        (**(iVar3 + 0x168))(puVar5 + -10,0x58);
        *puVar5 = uVar2;
        if (piVar7[-1] != 0) {
            if (*piVar7 != 0) {
                (**(*0x238a8 + 0x48))();
            }
            *piVar7 = 0;
            piVar7[-1] = 0;
            piVar7[-2] = 0;
        }
        puVar4 = puVar4 + 8;
        puVar5 = puVar5 + 0xb;
        piVar7 = piVar7 + 3;
        iStackX_8 = iStackX_8 + -1;
    } while (iStackX_8 != 0);
    return;
}


/* fcn.0001c0f0 @ 0x1c0f0 */

ulong fcn.0001c0f0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong auStackX_18 [2];
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    ulong uStack_30;
    ulong uStack_28;
    ulong uStack_20;
    uint uStack_18;
    ushort uStack_14;
    
    auStackX_18[0] = 0x36;
    if (arg2 == '\0') {
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
        uVar1 = (**(*0x238b0 + 0x58))(L"AmiOutOfRes",0x23180,2,0x36,arg1);
    }
    else {
        uVar1 = (**(*0x238b0 + 0x48))(L"AmiOutOfRes",0x23180,0,auStackX_18,&uStack_48);
    }
    if ((arg2 != '\0') && (arg1 != 0)) {
        *arg1 = uStack_48;
        *(arg1 + 8) = uStack_40;
        *(arg1 + 0x10) = uStack_38;
        *(arg1 + 0x18) = uStack_30;
        *(arg1 + 0x20) = uStack_28;
        *(arg1 + 0x28) = uStack_20;
        *(arg1 + 0x30) = uStack_18;
        *(arg1 + 0x34) = uStack_14;
    }
    return uVar1;
}


/* fcn.000123d0 @ 0x123d0 */

int64_t fcn.000123d0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    int iVar3;
    ulong uVar4;
    int64_t arg3;
    uint16_t auStackX_8 [8];
    int64_t var_20h;
    int64_t iStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    
    if ((*(arg1 + 0xd0) - 4U & 0xfffffffd) == 0) {
        return 0;
    }
    arg3 = 0;
    iStackX_20._1_7_ = *(arg1 + 0xd8) >> 8;
    iStackX_20 = CONCAT71(iStackX_20._1_7_,4);
    iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_20,0,auStackX_8);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar3 = arg2;
    if (iVar3 == 0) {
code_r0x00012465:
        auStackX_8[0] = auStackX_8[0] & 0xfffd;
        if ((iVar3 == 3) && (*(arg1 + 0x278) != 0)) {
            uVar4 = 0;
            iStackX_20 = CONCAT71(iStackX_20._1_7_,*(arg1 + 0x298));
            iVar2 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_20,0,&var_20h);
            if (iVar2 < 0) {
                return iVar2;
            }
            arg3 = CONCAT71(uVar4 >> 8,1);
            var_20h._0_4_ = var_20h & 0xfffffffe;
            iVar2 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_20,arg3,&var_20h);
            if (iVar2 < 0) {
                return iVar2;
            }
        }
    }
    else {
        if (iVar3 == 1) {
            uVar1 = 0xfffe;
        }
        else if (iVar3 == 2) {
            uVar1 = 0xfffc;
        }
        else {
            if (iVar3 == 3) goto code_r0x00012465;
            if (iVar3 != 4) {
                return -0x7ffffffffffffffe;
            }
            uVar1 = 0xfff8;
        }
        auStackX_8[0] = auStackX_8[0] & uVar1;
    }
    iStackX_20 = CONCAT71(iStackX_20._1_7_,4);
    iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_20,CONCAT71(arg3 >> 8,1),auStackX_8);
    return iVar2;
}


/* fcn.000126d8 @ 0x126d8 */

void fcn.000126d8(int64_t arg1)

{
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    int64_t extraout_RAX_03;
    unkbyte7 in_R8;
    int64_t var_10h;
    int64_t var_bp_18h;
    
    var_bp_18h._1_7_ = *(arg1 + 0xd8) >> 8;
    var_bp_18h = CONCAT71(var_bp_18h._1_7_,0x1c);
    var_10h._0_4_ = 0xff;
    fcn.0001cc58(*(arg1 + 0xb8),var_bp_18h,CONCAT71(in_R8,1),&var_10h);
    if (-1 < extraout_RAX) {
        var_bp_18h = CONCAT71(var_bp_18h._1_7_,0x30);
        fcn.0001cd18(*(arg1 + 0xb8),var_bp_18h,CONCAT71(in_R8,1),&var_10h);
        if (-1 < extraout_RAX_00) {
            var_bp_18h._1_7_ = *(arg1 + 0xd8) >> 8;
            var_bp_18h = CONCAT71(var_bp_18h._1_7_,0x20);
            var_10h._0_4_ = 0xffff;
            fcn.0001cd18(*(arg1 + 0xb8),var_bp_18h,CONCAT71(in_R8,1),&var_10h);
            if (-1 < extraout_RAX_01) {
                var_bp_18h._1_7_ = *(arg1 + 0xd8) >> 8;
                var_bp_18h = CONCAT71(var_bp_18h._1_7_,0x24);
                var_10h._0_4_ = 0xffff;
                fcn.0001cd18(*(arg1 + 0xb8),var_bp_18h,CONCAT71(in_R8,1),&var_10h);
                if (-1 < extraout_RAX_02) {
                    var_10h._0_4_ = 0;
                    var_bp_18h = CONCAT71(var_bp_18h._1_7_,0x28);
                    fcn.0001cd18(*(arg1 + 0xb8),var_bp_18h,CONCAT71(in_R8,1),&var_10h);
                    if (-1 < extraout_RAX_03) {
                        var_bp_18h = CONCAT71(var_bp_18h._1_7_,0x2c);
                        fcn.0001cd18(*(arg1 + 0xb8),var_bp_18h,CONCAT71(in_R8,1),&var_10h);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000158a8 @ 0x158a8 */

void fcn.000158a8(uint32_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int *piVar3;
    bool bVar4;
    uint32_t uVar5;
    bool bVar6;
    uint8_t uVar7;
    char cVar8;
    uint uVar9;
    ulong *puVar10;
    int64_t iVar11;
    uint in_register_0000000c;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint *puVar15;
    int *piVar16;
    int iVar17;
    uint32_t *puVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    uint64_t uVar21;
    int64_t iVar22;
    uint64_t uStack_68;
    uint64_t *puStack_50;
    uint64_t *puStack_38;
    
    iVar22 = CONCAT44(in_register_0000000c,arg1);
    uVar20 = 0;
    bVar6 = false;
    iVar12 = 2;
    iVar13 = 4;
    if (*(iVar22 + 0xd0) == 1) {
        puVar10 = iVar22 + 0x7b0;
        iVar12 = 6;
        do {
            *puVar10 = 1;
            puVar10 = puVar10 + 0xb;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
    }
    else {
        puVar10 = iVar22 + 0x7b0;
        do {
            *puVar10 = 0xfff;
            puVar10 = puVar10 + 0xb;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        puVar10 = iVar22 + 0x860;
        iVar12 = iVar13;
        do {
            *puVar10 = 0xfffff;
            puVar10 = puVar10 + 0xb;
            iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
    }
    iVar12 = 2;
    puStack_38 = iVar22 + 0x7b0;
    puVar10 = iVar22 + 0x420;
    do {
        *puVar10 = 0xfff;
        puVar10 = puVar10 + 8;
        iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    puVar10 = iVar22 + 0x4a0;
    do {
        *puVar10 = 0xfffff;
        puVar10 = puVar10 + 8;
        iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    if (*(iVar22 + 0xd0) == 2) {
        *(iVar22 + 0x428) = 0x1c;
        *(iVar22 + 0x468) = 0x1c;
        *(iVar22 + 0x4a8) = 0x20;
        *(iVar22 + 0x4e8) = 0x24;
        *(iVar22 + 0x528) = 0x20;
        *(iVar22 + 0x568) = 0x24;
    }
    if (*(iVar22 + 0xd0) == 3) {
        *(iVar22 + 0x428) = 0x2c;
        *(iVar22 + 0x468) = 0x34;
        *(iVar22 + 0x4a8) = 0x1c;
        *(iVar22 + 0x4e8) = 0x24;
        *(iVar22 + 0x528) = 0x1c;
        *(iVar22 + 0x568) = 0x24;
    }
    iVar12 = iVar22;
    if (*0x23819 != '\0') {
        fcn.0001c0f0(0x23720,1);
    }
    if (*(iVar22 + 0xa70) != 0) {
        do {
            uVar21 = 0;
            iVar13 = *(*(iVar22 + 0xa78) + uVar20 * 8);
            if ((*0x23819 == '\0') || (*0x23830 != '\0')) {
code_r0x00015b83:
                if ((*(iVar13 + 0x2fc) == '\0') && (*(iVar13 + 0xd0) - 2U < 2)) {
                    fcn.000158a8(iVar13);
                }
            }
            else if (*(iVar13 + 0x2fc) == '\0') {
                iVar11 = fcn.0001d724(iVar13,9,iVar12,iVar13);
                if (-1 < iVar11) {
                    *0x23830 = '\x01';
                    *(iVar13 + 0x2fc) = 1;
                    if ((*(iVar13 + 0x338) != 0) &&
                       ((((*(iVar13 + 0x340) != 0 || (*(iVar13 + 0x348) != 0)) && (*(iVar13 + 0xd0) != 2)) &&
                        (*(iVar13 + 0x348) != 0)))) {
                        do {
                            *(*(*(iVar13 + 0x350) + uVar21 * 8) + 0x2fc) = 1;
                            fcn.000123d0(*(*(iVar13 + 0x350) + uVar21 * 8),4);
                            uVar21 = uVar21 + 1;
                        } while (uVar21 < *(iVar13 + 0x348));
                    }
                    fcn.000123d0(iVar13,4);
                    if (*(iVar13 + 0xd0) == 2) {
                        fcn.000126d8(iVar13);
                    }
                    fcn.0001c0f0(0x23720,0);
                }
                goto code_r0x00015b83;
            }
            uVar20 = uVar20 + 1;
        } while (uVar20 < *(iVar22 + 0xa70));
    }
    piVar16 = iVar22 + 0x408;
    puVar10 = iVar22 + 0x7a0;
    uVar5 = 1;
    puStack_50 = iVar22 + 0x9d0;
    uStack_68 = 0x28;
    do {
        uVar20 = 0;
        *puVar10 = *(piVar16 + 6);
        iVar12 = *(iVar22 + 0x300);
        iVar13 = uVar5 * 0x40;
        bVar4 = false;
        if ((*0x23900 == '\0') && (iVar12 != 0)) {
            puVar18 = iVar12 + 0x69;
            uVar21 = uVar20;
            do {
                if ((puVar18[-1] == uVar5) && (*puVar18 == *(iVar13 + 1000 + iVar22))) {
                    uVar14 = *(iVar13 + 0x3d0 + iVar22);
                    uVar2 = *(iVar12 + 0x6d + uVar21 * 0x18);
                    if ((uVar14 != uVar2) && ((uVar14 == 0 || (uVar2 < uVar14)))) {
                        *(iVar13 + 0x3d0 + iVar22) = uVar2;
                    }
                    uVar14 = *(iVar12 + 0x75 + uVar21 * 0x18);
                    uVar2 = *(iVar13 + 0x3d8 + iVar22);
                    if ((uVar14 != uVar2) && ((uVar2 == 0 || (uVar2 < uVar14)))) {
                        *(iVar13 + 0x3d8 + iVar22) = uVar14;
                    }
                    *(iVar13 + 0x3c8 + iVar22) = *(iVar12 + 0x65 + uVar21 * 0x18);
                    bVar4 = true;
                    break;
                }
                uVar21 = uVar21 + 1;
                puVar18 = puVar18 + 6;
            } while (uVar21 < 7);
        }
        else {
            bVar4 = false;
        }
        uVar21 = 0;
        if (*(iVar22 + 0xa70) == 0) {
            cVar8 = '\0';
code_r0x00015cca:
            iVar12 = fcn.0001505c(arg1,uVar5);
        }
        else {
            if (*0x23788 != 0) {
                uVar14 = uVar21;
                do {
                    piVar3 = *(*0x23790 + uVar14 * 8);
                    if ((*piVar3 == uVar5 + 1) && (*(*(piVar3 + 0xe) + 0xc0) == iVar22)) {
                        uVar20 = 1;
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < *0x23788);
            }
            cVar8 = uVar20;
            if (*0x237e8 != 0) {
                uVar14 = uVar21;
                do {
                    piVar3 = *(*0x237f0 + uVar14 * 8);
                    if ((*piVar3 == uVar5 + 1) && (*(*(piVar3 + 0xe) + 0xc0) == iVar22)) {
                        uVar7 = uVar20;
                        if (uVar20 == 1) {
                            uVar7 = 2;
                        }
                        uVar20 = uVar7;
                    }
                    cVar8 = uVar20;
                    uVar14 = uVar14 + 1;
                } while (uVar14 < *0x237e8);
            }
            if (cVar8 == '\x02') {
                do {
                } while( true );
            }
            if (cVar8 != '\x01') goto code_r0x00015cca;
            iVar12 = fcn.00014d94(iVar22,uVar5);
        }
        if (((bVar4) && (cVar8 == '\0')) && (*puStack_50 != 0)) {
            fcn.00014b80(iVar22,uVar5);
        }
        uVar20 = 0;
        *piVar16 = uVar5 + 1;
        if (*puStack_50 != 0) {
            uVar14 = *(piVar16 + 6);
            do {
                piVar3 = *(puStack_50[1] + uVar20 * 8);
                if (uVar14 < *(piVar3 + 6)) {
                    uVar14 = *(piVar3 + 6);
                    *(piVar16 + 6) = uVar14;
                }
                uVar21 = uVar21 + *(piVar3 + 4);
                uVar20 = uVar20 + 1;
                *piVar16 = *piVar3;
            } while (uVar20 < *puStack_50);
        }
        iVar13 = iVar22 + 0x3c8;
        if ((!bVar4) || (uVar20 = *(piVar16 + 4), uVar20 < uVar21)) {
            *(piVar16 + 4) = uVar21;
        }
        else {
            bVar4 = false;
            iVar11 = iVar22;
            if (*(iVar22 + 0xd0) == 1) {
code_r0x00015ea6:
                if (*(*(iVar22 + 0xc0) + 0xd0) != 1) goto code_r0x00016029;
            }
            else {
                do {
                    piVar1 = iVar11 + 0x300;
                    iVar11 = *(iVar11 + 0xc0);
                    if (*(*piVar1 + 0x3b) < 0x80) {
                        bVar4 = true;
                    }
                } while (*(iVar11 + 0xd0) != 1);
                if ((!bVar4) || (0x7f < *(*(*(iVar22 + 0xc0) + 0x300) + 0x3b))) {
                    if (bVar4) goto code_r0x00016029;
                    goto code_r0x00015ea6;
                }
            }
            if (1 < *piVar16) {
                if (*piVar16 < 4) {
                    uVar21 = 0xfff;
                    iVar12 = 0;
                    do {
                        iVar12 = iVar12 + 1;
                        uVar21 = uVar21 >> 1;
                    } while ((uVar21 & 1) != 0);
                    iVar12 = (**(*0x23930 + 0x58))(2,2,iVar12,uVar20,piVar16 + 2,*(iVar11 + 0xe0),0);
                    if (-1 < iVar12) {
                        *(*piVar16 + -1 + uStack_68 + 0x23968) = *piVar16 + -1;
                        *(uStack_68 + 0x23970) = *(uStack_68 + 0x23970) + *(piVar16 + 4);
                        *(uStack_68 + 0x23960) = *(iVar11 + 0xe0);
                        *(uStack_68 + 0x23978) = *(piVar16 + 6);
                        *(uStack_68 + 0x23980) = 1;
                    }
                }
                else if (*piVar16 < 8) {
                    uVar21 = 0xfffff;
                    iVar12 = 0;
                    do {
                        iVar12 = iVar12 + 1;
                        uVar21 = uVar21 >> 1;
                    } while ((uVar21 & 1) != 0);
                    iVar12 = (**(*0x23930 + 0x20))(2,3,iVar12,uVar20,piVar16 + 2,*(iVar11 + 0xe0),0);
                    if (-1 < iVar12) {
                        *(*piVar16 + -1 + uStack_68 + 0x23968) = *piVar16 + -1;
                        *(uStack_68 + 0x23970) = *(uStack_68 + 0x23970) + *(piVar16 + 4);
                        *(uStack_68 + 0x23960) = *(iVar11 + 0xe0);
                        *(uStack_68 + 0x23978) = *(piVar16 + 6);
                        *(uStack_68 + 0x23980) = 1;
                    }
                }
            }
        }
code_r0x00016029:
        piVar16 = piVar16 + 0x10;
        uVar5 = uVar5 + 1;
        puVar10 = puVar10 + 0xb;
        puStack_50 = puStack_50 + 3;
        uStack_68 = uStack_68 + 0x28;
    } while (uStack_68 < 0x118);
    if ((*0x237c8 != '\0') && (*(iVar22 + 0x398) == '\0')) {
        bVar4 = true;
        if (*(iVar22 + 0xd0) == 2) {
            if (*(iVar22 + 0x4d8) == 0) {
                if (*(iVar22 + 0x558) == 0) {
                    bVar4 = true;
                    if (*(iVar22 + 0x698) != 0) {
                        bVar4 = false;
                    }
                }
                else {
                    bVar4 = true;
                }
            }
            else {
                bVar4 = false;
            }
        }
        if (*(iVar22 + 0x395) != '\0') {
            bVar4 = false;
        }
        if (*(iVar22 + 0xd0) == 3) {
            bVar4 = false;
        }
        if (*0x23819 == '\0') {
            uVar20 = 1;
            bVar6 = false;
            do {
                puVar15 = uVar20 * 0x40 + iVar13;
                if (uVar20 == 4) {
                    if (bVar4) goto code_r0x000161b8;
                    uVar21 = *(iVar22 + 0x698);
                    if (uVar21 == 0) {
code_r0x000161b5:
                        iVar12 = -0x7ffffffffffffffd;
                        goto code_r0x000161b8;
                    }
                    if (*(puVar15 + 4) < uVar21) {
                        *(puVar15 + 4) = uVar21;
                    }
                    if (*(puVar15 + 6) < *(iVar22 + 0x6a0)) {
                        *(puVar15 + 6) = *(iVar22 + 0x6a0);
                    }
                    uVar9 = *(iVar22 + 0x688);
code_r0x000161ae:
                    iVar12 = 0;
                    *puVar15 = uVar9;
code_r0x000161bd:
                    bVar6 = true;
                }
                else if (uVar20 == 5) {
code_r0x000161b8:
                    if (-1 < iVar12) goto code_r0x000161bd;
                }
                else {
                    if (uVar20 == 6) {
                        if (bVar4) {
                            uVar21 = *(iVar22 + 0x718);
                            if (uVar21 == 0) goto code_r0x000161b5;
                            if (*(puVar15 + 4) < uVar21) {
                                *(puVar15 + 4) = uVar21;
                            }
                            if (*(puVar15 + 6) < *(iVar22 + 0x720)) {
                                *(puVar15 + 6) = *(iVar22 + 0x720);
                            }
                            uVar9 = *(iVar22 + 0x708);
                            goto code_r0x000161ae;
                        }
                        goto code_r0x000161b8;
                    }
                    iVar12 = (uVar20 + 7) * 0x40;
                    uVar21 = *(iVar12 + 0x10 + iVar13);
                    if (uVar21 != 0) {
                        if (*(puVar15 + 4) < uVar21) {
                            *(puVar15 + 4) = uVar21;
                        }
                        uVar21 = *(iVar12 + 0x18 + iVar13);
                        if (*(puVar15 + 6) < uVar21) {
                            *(puVar15 + 6) = uVar21;
                        }
                        *puVar15 = *(iVar12 + iVar13);
                        iVar12 = 0;
                        goto code_r0x000161bd;
                    }
                    iVar12 = -0x7ffffffffffffffd;
                }
                uVar20 = uVar20 + 1;
            } while (uVar20 < 7);
        }
    }
    if ((*(iVar22 + 0xd0) == 3) && (!bVar6)) {
        uVar20 = 1;
        do {
            iVar17 = uVar20;
            piVar16 = iVar17 * 0x40 + iVar13;
            *piVar16 = iVar17 + 1;
            if (iVar17 == 1) {
                *(piVar16 + 4) = *(piVar16 + 4) + 0x1000;
                if (*(piVar16 + 6) < 0xfff) {
                    piVar16[6] = 0xfff;
                    piVar16[7] = 0;
                }
            }
            else if (iVar17 == 2) {
                *piVar16 = 0;
                *(iVar22 + 0x418) = *(iVar22 + 0x418) + 0x1000;
                if (*(iVar22 + 0x420) < 0xfff) {
                    *(iVar22 + 0x420) = 0xfff;
                }
            }
            else {
                if (iVar17 != 3) {
                    if (iVar17 != 4) {
                        if (iVar17 == 5 || iVar17 == 6) {
                            *piVar16 = 0;
                        }
                        goto code_r0x0001627e;
                    }
                    if ((*0x23758 & 1) != 0) {
                        *piVar16 = 0;
                        piVar16 = iVar22 + 0x488;
                    }
                }
                *(piVar16 + 4) = *(piVar16 + 4) + 0x2000000;
                if (*(piVar16 + 6) < 0x1ffffff) {
                    piVar16[6] = 0x1ffffff;
                    piVar16[7] = 0;
                }
            }
code_r0x0001627e:
            uVar20 = uVar20 + 1;
            *(iVar22 + 0xa80) = 1;
        } while (uVar20 < 7);
    }
    puVar19 = iVar22 + 0x418;
    iVar22 = 6;
    do {
        puStack_38[-2] = puVar19[1];
        uVar20 = *puVar19;
        if (uVar20 != 0) {
            uVar21 = *puStack_38;
            if ((uVar20 < uVar21 + 1) || ((uVar20 & uVar21) != 0)) {
                *puVar19 = (uVar21 | uVar20) + 1;
            }
            cVar8 = fcn.00013d80(*puVar19 - 1);
            puStack_38[-1] = 0xffffffffffffffff >> (0x40U - cVar8 & 0x3f);
        }
        puVar19 = puVar19 + 8;
        puStack_38 = puStack_38 + 0xb;
        iVar22 = iVar22 + -1;
    } while (iVar22 != 0);
    return;
}


/* fcn.0001505c @ 0x1505c */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.0001505c(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *arg2_00;
    char cVar2;
    int iVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    ulong *arg2_01;
    uint *arg1_00;
    int iVar5;
    ulong in_R9;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int *piVar13;
    char cStackX_8;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    uint32_t var_67h;
    uint32_t var_77h;
    int64_t var_7fh;
    uint64_t uStack_e8;
    uint64_t uStack_e0;
    uint auStack_d8 [2];
    ulong uStack_d0;
    int64_t iStack_c8;
    ulong uStack_c0;
    int64_t iStack_b8;
    int64_t iStack_b0;
    uint auStack_a8 [2];
    ulong uStack_a0;
    uint64_t uStack_98;
    ulong uStack_90;
    uchar auStack_88 [7];
    int32_t var_79h;
    int64_t var_71h;
    uint32_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int32_t var_49h;
    int64_t var_41h;
    uint32_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    
    arg2_01 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = arg2;
    auStack_d8[0] = 0;
    uStack_d0 = 0;
    iStack_c8 = 0;
    uStack_c0 = 0;
    auStack_a8[0] = 0;
    uStack_a0 = 0;
    uStack_98 = 0;
    uStack_90 = 0;
    uVar11 = iVar5;
    iStack_b8 = 0;
    iStack_b0 = 0;
    _auStack_88 = 0;
    stack0xffffffffffffff80 = 0;
    arg2_00 = arg2_01 + uVar11 * 3 + 0x136;
    if (arg2_01[0x14e] == 0) {
        iVar4 = 0;
    }
    else {
        unique0x10000654 = uVar11;
        iVar4 = fcn.00014958(auStack_d8,arg2_01,arg2 & 0xffffffff,CONCAT71(in_R9 >> 8,1));
        if (-1 < iVar4) {
            iVar4 = fcn.00014958(auStack_a8,arg2_01,arg2 & 0xffffffff,0);
            uVar12 = uVar11;
            if (-1 < iVar4) {
code_r0x00015114:
                iVar7 = 0x3fffffffffffffff;
code_r0x0001511e:
                if ((iStack_c8 == 0) && (uStack_98 == 0)) goto code_r0x000155d4;
                if (uStack_98 == 0) {
                    iStackX_20 = 0;
                }
                else {
                    iVar4 = fcn.0001c554(auStack_a8,arg2_01,uStack_98 - 1,&iStackX_20);
                    if ((iVar4 < 0) && (1 < iVar4 + iVar7)) goto code_r0x000155d4;
                }
                iVar8 = iStackX_20;
                if (iStack_c8 == 0) {
                    uStackX_18 = 0;
                }
                else {
                    iVar4 = fcn.0001c554(auStack_d8,arg2_01,iStack_c8 - 1,&uStackX_18);
                    if ((iVar4 < 0) && (1 < iVar4 + iVar7)) goto code_r0x000155d4;
                }
                uVar9 = uStackX_18;
                if (uStackX_18 == 0) {
                    if (iVar8 == 0) {
code_r0x000155b4:
                        if (iVar4 < 0) goto code_r0x000155d4;
                        goto code_r0x0001511e;
                    }
                    piVar13 = NULL;
                    if (1 < uStack_98) {
                        uVar9 = *(iVar8 + 0x10);
                        iVar7 = *(iVar8 + 0x38);
                        uVar6 = uStack_98;
                        cVar2 = fcn.00013d80(uVar9 - 1);
                        if (0xffffffffffffffffU >> (0x40U - cVar2 & 0x3f) < *(iVar8 + 0x18)) {
                            iVar4 = fcn.0001c554(auStack_a8,arg2_01,uVar6 - 2,&uStack_e0);
                            if ((iVar4 < 0) && (1 < iVar4 + 0x3fffffffffffffffU)) goto code_r0x000155d4;
                            piVar13 = uVar11 * 0x58 + 0x760 + iVar7;
                            iVar4 = (*(uStack_e0 + 0x18) | uVar9) - uVar9;
                            iVar7 = iVar4 + 1;
                            *(piVar13 + 4) = iVar7;
                            if (iVar7 != 0) {
                                cVar2 = fcn.00013d80(iVar4);
                                *(piVar13 + 6) = 0xffffffffffffffff >> (0x40U - cVar2 & 0x3f);
                            }
                        }
                    }
                    arg2_01 = arg2_00;
                    iVar4 = fcn.00014aa8(auStack_a8,arg2_00,iVar8);
                    if ((piVar13 != NULL) && (*(piVar13 + 4) != 0)) {
                        iVar3 = uVar12 + 1;
                        *(piVar13 + 8) = 0xff;
                        *piVar13 = iVar3;
                        piVar13[1] = iVar3;
                        iVar4 = fcn.0001bf1c(arg2_00);
                        if (-1 < iVar4) {
                            *(arg2_00[2] + arg2_00[1] * 8) = piVar13;
                            arg2_00[1] = arg2_00[1] + 1;
                            iVar4 = 0;
                            goto code_r0x000155aa;
                        }
                        goto code_r0x000155ca;
                    }
                }
                else {
                    if (iVar8 != 0) {
                        iVar7 = *(iVar8 + 0x38);
                        iVar10 = uVar11 * 0x58;
                        if (*(iVar10 + 0x748 + iVar7) <= *(uStackX_18 + 0x18)) {
                            arg2_01 = arg2_00;
                            iVar4 = fcn.00014aa8(auStack_d8,arg2_00,uStackX_18);
                            if (iVar4 < 0) goto code_r0x000155d4;
                            uVar11 = stack0xffffffffffffff88;
                            uVar12 = arg2 & 0xffffffff;
                            goto code_r0x00015114;
                        }
                        arg2_01 = arg2_00;
                        iVar4 = fcn.00014aa8(auStack_a8,arg2_00,iVar8);
                        if (iVar4 < 0) goto code_r0x000155d4;
                        uVar11 = *(iVar8 + 0x10);
                        piVar13 = iVar7 + 0x760 + iVar10;
                        if ((*(iVar8 + 0x18) & uVar11) != 0) {
                            if (uStack_98 == 0) {
                                uStack_e8 = uStack_98;
                            }
                            else {
                                iVar4 = fcn.0001c554(auStack_a8,arg2_01,uStack_98 - 1,&uStack_e8);
                                if ((iVar4 < 0) && (1 < iVar4 + 0x3fffffffffffffffU)) goto code_r0x000155d4;
                            }
                            if (uStack_e8 == 0) {
                                uStack_e0 = uVar9;
                            }
                            else {
                                uStack_e0 = uStack_e8;
                                if (*(uStack_e8 + 0x18) <= *(uVar9 + 0x18)) {
                                    uStack_e0 = uVar9;
                                }
                            }
                            if (*(iVar10 + 0x750 + iVar7) < *(uStack_e0 + 0x18)) {
                                iVar7 = (*(uStack_e0 + 0x18) | uVar11) - uVar11;
                                *(piVar13 + 4) = iVar7 + 1;
                                cVar2 = fcn.00013d80(iVar7);
                                *(piVar13 + 6) = 0xffffffffffffffff >> (0x40U - cVar2 & 0x3f);
                            }
                            else {
                                arg1_00 = auStack_d8;
                                if (uStack_e0 != uVar9) {
                                    arg1_00 = auStack_a8;
                                }
                                arg2_01 = arg2_00;
                                iVar4 = fcn.00014aa8(arg1_00,arg2_00,uStack_e0);
                                if (iVar4 < 0) goto code_r0x000155d4;
                            }
                        }
                        uVar11 = iVar5;
                        uVar12 = uVar11;
                        if (*(piVar13 + 4) == 0) goto code_r0x00015114;
                        uVar11 = *(piVar13 + 6);
                        while ((uVar11 + 1 <= *(piVar13 + 4) && (iStack_c8 != 0))) {
                            uStackX_18 = 0;
                            fcn.000102a0(&var_61h + 1,0x10);
                            *NULL = *(piVar13 + 6) + 1;
                            if (iStack_b8 == 0) {
                                iVar4 = -0x7ffffffffffffffe;
                                goto code_r0x000155d4;
                            }
                            arg2_01 = NULL;
                            fcn.0001c238(auStack_d8,0,*(iStack_b8 + 8),&var_61h + 1);
                            iVar7 = stack0xffffffffffffff90;
                            iVar4 = fcn.0001c554(auStack_d8,arg2_01,stack0xffffffffffffff90,&uStackX_18);
                            iVar8 = 0x3fffffffffffffff;
                            if ((iVar4 < 0) && (1 < iVar4 + 0x3fffffffffffffffU)) goto code_r0x000155d4;
                            if (cStackX_8 == -1) {
                                if ((uStackX_18 == 0) || (iVar7 == 0)) break;
                                uStackX_18 = 0;
                                iVar4 = fcn.0001c554(auStack_d8,arg2_01,iVar7 - 1,&uStackX_18);
                                if ((iVar4 < 0) && (1 < iVar4 + iVar8)) goto code_r0x000155d4;
                            }
                            uVar11 = uStackX_18;
                            if ((uStackX_18 == 0) || (*(piVar13 + 6) < *(uStackX_18 + 0x18))) break;
                            arg2_01 = arg2_00;
                            iVar4 = fcn.00014aa8(auStack_d8,arg2_00,uStackX_18);
                            if (iVar4 < 0) goto code_r0x000155d4;
                            piVar1 = piVar13 + 4;
                            *piVar1 = *piVar1 - *(uVar11 + 0x10);
                            if (*piVar1 == 0) break;
                            cVar2 = fcn.00013d80(*(piVar13 + 4) + -1);
                            uVar11 = 0xffffffffffffffff >> (0x40U - cVar2 & 0x3f);
                            *(piVar13 + 6) = uVar11;
                        }
                        iVar7 = 0x3fffffffffffffff;
                        uVar11 = iVar5;
                        uVar12 = uVar11;
                        if (*(piVar13 + 4) != 0) goto code_r0x00015458;
                        goto code_r0x0001511e;
                    }
                    arg2_01 = arg2_00;
                    iVar4 = fcn.00014aa8(auStack_d8,arg2_00,uStackX_18);
                }
code_r0x000155aa:
                iVar7 = 0x3fffffffffffffff;
                goto code_r0x000155b4;
            }
        }
code_r0x000155d4:
        if (iStack_b0 != 0) {
            (**(*0x238a8 + 0x48))();
        }
        if (stack0xffffffffffffff80 != 0) {
            (**(*0x238a8 + 0x48))();
        }
        if (iVar4 < 0) {
            if (arg2_00[2] != 0) {
                (**(*0x238a8 + 0x48))();
            }
            arg2_00[2] = 0;
            arg2_00[1] = 0;
            *arg2_00 = 0;
        }
    }
    return iVar4;
code_r0x00015458:
    uVar11 = iVar5;
    *(piVar13 + 8) = 0xff;
    *piVar13 = iVar5 + 1;
    piVar13[1] = iVar5 + 1;
    iVar4 = fcn.0001bf1c(arg2_00);
    if (-1 < iVar4) {
        *(arg2_00[2] + arg2_00[1] * 8) = piVar13;
        arg2_00[1] = arg2_00[1] + 1;
        iVar4 = 0;
        uVar12 = uVar11;
        goto code_r0x00015114;
    }
code_r0x000155ca:
    iVar4 = -0x7ffffffffffffff7;
    goto code_r0x000155d4;
}


/* fcn.00014b80 @ 0x14b80 */

ulong fcn.00014b80(int64_t arg1,int64_t arg2)

{
    ulong *arg1_00;
    char cVar1;
    int iVar2;
    ulong uVar3;
    int64_t *piVar4;
    ulong *puVar5;
    int64_t iVar6;
    int *arg2_00;
    ulong *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    ulong uStack_48;
    ulong uStack_40;
    ulong uStack_38;
    
    iVar10 = arg2;
    uVar3 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    arg1_00 = arg1 + (iVar10 * 3 + 0x136) * 8;
    if (arg1_00[1] == 0) {
        return 0;
    }
    uVar9 = *(iVar10 * 0x40 + 0x3d0 + arg1);
    if ((*(*arg1_00[2] + 0x18) & uVar9) != 0) {
        arg2_00 = arg1 + 0x760 + iVar10 * 0x58;
        if ((*(arg2_00 + 4) != 0) && (uVar8 = 0, arg1_00[1] != 0)) {
            do {
                if (arg2_00 == *(arg1_00[2] + uVar8 * 8)) {
                    uVar3 = fcn.0001c044(arg1_00,uVar8);
                    arg2_00[4] = 0;
                    arg2_00[5] = 0;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < arg1_00[1]);
        }
        uVar8 = arg1_00[1];
        puVar7 = NULL;
        while ((puVar5 = puVar7, uVar8 != 0 && (uVar11 = 0, uVar8 != 0))) {
            piVar4 = arg1_00[2];
            while (iVar10 = *piVar4, (*(iVar10 + 0x18) & uVar9) != 0) {
                uVar11 = uVar11 + 1;
                piVar4 = piVar4 + 1;
                if (uVar8 <= uVar11) goto code_r0x00014cab;
            }
            puVar5 = &uStack_48;
            if (puVar7 != NULL) {
                puVar5 = puVar7;
            }
            uVar9 = uVar9 + *(iVar10 + 0x10);
            iVar6 = fcn.0001bf1c(puVar5);
            if (-1 < iVar6) {
                iVar6 = puVar5[1];
                *(puVar5[2] + iVar6 * 8) = iVar10;
                puVar5[1] = iVar6 + 1;
            }
            uVar3 = fcn.0001c044(arg1_00,uVar11);
            uVar8 = arg1_00[1];
            puVar7 = puVar5;
            if (uVar8 <= uVar11) break;
        }
code_r0x00014cab:
        if (arg1_00[1] != 0) {
            iVar6 = *(*arg1_00[2] + 0x18) - (*(*arg1_00[2] + 0x18) & uVar9);
            iVar10 = iVar6 + 1;
            *(arg2_00 + 4) = iVar10;
            if (iVar10 != 0) {
                cVar1 = fcn.00013d80(iVar6);
                *(arg2_00 + 8) = 0xff;
                *(arg2_00 + 6) = 0xffffffffffffffff >> (0x40U - cVar1 & 0x3f);
                iVar2 = arg2 + 1;
                *arg2_00 = iVar2;
                arg2_00[1] = iVar2;
                if (puVar5 == NULL) {
                    uVar3 = fcn.0001bfc4(arg1_00,arg2_00,0);
                    return uVar3;
                }
                iVar10 = fcn.0001bf1c(puVar5);
                if (iVar10 < 0) {
                    uVar3 = 0x8000000000000009;
                }
                else {
                    iVar10 = puVar5[1];
                    uVar3 = 0;
                    *(puVar5[2] + iVar10 * 8) = arg2_00;
                    puVar5[1] = iVar10 + 1;
                }
            }
        }
        if (puVar5 != NULL) {
            if (arg1_00[2] != 0) {
                (**(*0x238a8 + 0x48))();
            }
            *arg1_00 = *puVar5;
            arg1_00[1] = puVar5[1];
            arg1_00[2] = puVar5[2];
        }
    }
    return uVar3;
}


/* fcn.00014d94 @ 0x14d94 */

ulong fcn.00014d94(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int *piVar4;
    int *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int *piVar9;
    int64_t iVar10;
    
    iVar8 = arg2;
    uVar2 = 0;
    iVar10 = iVar8 * 0x40;
    iVar6 = iVar8 * 0x58;
    iVar8 = arg1 + (iVar8 * 3 + 0x136) * 8;
    if (*(arg1 + 0xa70) == 0) {
        if (*(*(arg1 + 0x300) + 0x3b) < 0x80) {
            return 0;
        }
    }
    else {
        piVar5 = NULL;
        piVar4 = NULL;
        uVar7 = 0;
        if (*(arg1 + 0xa70) != 0) {
            do {
                iVar1 = *(*(arg1 + 0xa78) + uVar7 * 8);
                if (*(iVar1 + 0xd0) - 2U < 2) {
                    piVar9 = iVar10 + 0x3c8 + iVar1;
                    if (*(piVar9 + 2) != 0) {
                        if (piVar5 == NULL) {
                            *(iVar6 + 0x758 + arg1) = *(piVar9 + 6);
                            piVar5 = piVar9;
                        }
                        else if (*(piVar9 + 2) < *(piVar5 + 2)) {
                            piVar5 = piVar9;
                        }
                        if (piVar4 == NULL) {
                            *(iVar6 + 0x758 + arg1) = *(piVar9 + 6);
                            piVar4 = piVar9;
                        }
                        else if (*(piVar4 + 2) < *(piVar9 + 2)) {
                            piVar4 = piVar9;
                        }
                        uVar2 = fcn.00014aa8(0,iVar8,piVar9);
                        if (*(iVar6 + 0x748 + arg1) < *(piVar9 + 6)) {
                            *(iVar6 + 0x748 + arg1) = *(piVar9 + 6);
                        }
                        if (*(piVar9 + 6) < *(iVar6 + 0x758 + arg1)) {
                            *(iVar6 + 0x758 + arg1) = *(piVar9 + 6);
                        }
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < *(arg1 + 0xa70));
        }
        uVar7 = 0;
        if (*0x23788 != 0) {
            uVar3 = *0x23788;
            do {
                piVar9 = *(*0x23790 + uVar7 * 8);
                if ((*piVar9 == arg2 + 1) && (*(*(piVar9 + 0xe) + 0xc0) == arg1)) {
                    if (piVar5 == NULL) {
                        *(iVar6 + 0x758 + arg1) = *(piVar9 + 6);
                        piVar5 = piVar9;
                    }
                    else if (*(piVar9 + 2) < *(piVar5 + 2)) {
                        piVar5 = piVar9;
                    }
                    if (piVar4 == NULL) {
                        *(iVar6 + 0x758 + arg1) = *(piVar9 + 6);
                        piVar4 = piVar9;
                    }
                    else if (*(piVar4 + 2) < *(piVar9 + 2)) {
                        piVar4 = piVar9;
                    }
                    if (*(iVar6 + 0x748 + arg1) < *(piVar9 + 6)) {
                        *(iVar6 + 0x748 + arg1) = *(piVar9 + 6);
                    }
                    if (*(piVar9 + 6) < *(iVar6 + 0x758 + arg1)) {
                        *(iVar6 + 0x758 + arg1) = *(piVar9 + 6);
                    }
                    if ((*piVar9 - 2U < 2) && (*(iVar6 + 0x758 + arg1) < 0xfff)) {
                        *(iVar6 + 0x758 + arg1) = 0xfff;
                    }
                    if ((*piVar9 - 4U < 4) && (*(iVar6 + 0x758 + arg1) < 0xfffff)) {
                        *(iVar6 + 0x758 + arg1) = 0xfffff;
                    }
                    fcn.00014aa8(0,iVar8,piVar9);
                    uVar2 = fcn.0001c044(0x23780,uVar7);
                    uVar7 = uVar7 - 1;
                    uVar3 = *0x23788;
                    if (*0x23788 == 0) break;
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < uVar3);
        }
        if (piVar5 != NULL) {
            *(iVar10 + 0x3d0 + arg1) = *(piVar5 + 2);
            uVar7 = (*(piVar4 + 4) + *(piVar4 + 2)) - *(piVar5 + 2);
            if (*(iVar10 + 0x3d8 + arg1) < uVar7) {
                *(iVar10 + 0x3d8 + arg1) = uVar7;
            }
        }
    }
    return uVar2;
}


/* fcn.0001bd00 @ 0x1bd00 */

int64_t fcn.0001bd00(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t arg1_01;
    
    if (arg2 == 0) {
        if (arg1 == 0) {
            arg1 = 0x23178;
        }
        arg1_00 = fcn.0001bdd8(arg1);
    }
    else {
        if (arg1 == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.0001bcac(arg1);
            iVar1 = iVar1 + -4;
        }
        arg1_00 = fcn.0001bc40(*(arg2 + 2) + 4 + *(arg2 + 3) * 0x100 + iVar1);
        arg1_01 = arg1_00;
        if (iVar1 != 0) {
            fcn.00022ac0(arg1_00,arg1,iVar1);
            arg1_01 = arg1_00 + iVar1;
        }
        fcn.00022ac0(arg1_01,arg2,*(arg2 + 2));
        *(*(arg2 + 2) + *(arg2 + 3) * 0x100 + arg1_01) = *0x23178;
    }
    return arg1_00;
}


/* fcn.0001c088 @ 0x1c088 */

void fcn.0001c088(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    ulong *puVar1;
    uint64_t uVar2;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 != '\0') && (uVar2 = 0, puVar1[1] != 0)) {
        do {
            if (*(puVar1[2] + uVar2 * 8) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < puVar1[1]);
    }
    if (puVar1[2] != 0) {
        (**(*0x238a8 + 0x48))();
    }
    puVar1[2] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    return;
}


/* fcn.0001dc1c @ 0x1dc1c */

int64_t fcn.0001dc1c(uint32_t arg1)

{
    int64_t iVar1;
    unkuint7 Var2;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x2d0);
    Var2 = iVar1 >> 8;
    if ((((iVar1 != 0) && (*(iVar1 + 0x20) != 0)) && (*(iVar1 + 0x28) != 0)) &&
       ((*(CONCAT44(in_register_0000000c,arg1) + 0x396) == '\0' &&
        (*(CONCAT44(in_register_0000000c,arg1) + 0x397) == '\0')))) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.0001db90 @ 0x1db90 */

int64_t fcn.0001db90(uint32_t arg1)

{
    int64_t iVar1;
    unkuint7 Var2;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x2d0);
    Var2 = iVar1 >> 8;
    if ((((iVar1 != 0) && (*(iVar1 + 0x20) != 0)) && (*(iVar1 + 0x28) != 0)) &&
       (((*(iVar1 + 0x30) != 0 && (*(CONCAT44(in_register_0000000c,arg1) + 0x396) == '\0')) &&
        (*(CONCAT44(in_register_0000000c,arg1) + 0x397) == '\0')))) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.0001db00 @ 0x1db00 */

int64_t fcn.0001db00(uint32_t arg1)

{
    int64_t iVar1;
    unkuint7 Var2;
    uint in_register_0000000c;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x2d0);
    Var2 = iVar1 >> 8;
    if ((((iVar1 != 0) && (*(iVar1 + 0x20) != 0)) && (*(iVar1 + 0x28) != 0)) &&
       (((*(iVar1 + 0x30) != 0 && (*(iVar1 + 0x38) != 0)) &&
        ((*(CONCAT44(in_register_0000000c,arg1) + 0x396) == '\0' &&
         (*(CONCAT44(in_register_0000000c,arg1) + 0x397) == '\0')))))) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.00016738 @ 0x16738 */

void fcn.00016738(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t *piVar2;
    unkbyte7 Var3;
    uint64_t uVar4;
    uint64_t uStackX_8;
    
    Var3 = arg2 >> 8;
    iVar1 = *(arg1 + 0xc0);
    uVar4 = 0;
    uStackX_8 = 0;
    if (*(arg1 + 0xa70) != 0) {
        do {
            arg1_00 = *(*(arg1 + 0xa78) + uStackX_8 * 8);
            if ((*(arg1_00 + 0xd0) - 2U < 2) && (fcn.00016738(arg1_00,CONCAT71(Var3,arg2)), arg2 != '\0')) {
                fcn.0001cf74(arg1_00);
            }
            fcn.00016598(arg1_00);
            uStackX_8 = uStackX_8 + 1;
        } while (uStackX_8 < *(arg1 + 0xa70));
    }
    if (*(arg1 + 0xa78) != 0) {
        (**(*0x238a8 + 0x48))();
    }
    *(arg1 + 0xa78) = 0;
    *(arg1 + 0xa70) = 0;
    *(arg1 + 0xa68) = 0;
    if (iVar1 != 0) {
        if (*(iVar1 + 0xa70) != 0) {
            piVar2 = *(iVar1 + 0xa78);
            do {
                if (*piVar2 == arg1) {
                    return;
                }
                uVar4 = uVar4 + 1;
                piVar2 = piVar2 + 1;
            } while (uVar4 < *(iVar1 + 0xa70));
        }
        fcn.00016598(arg1);
    }
    return;
}


/* fcn.0001cf74 @ 0x1cf74 */

void fcn.0001cf74(int64_t arg1)

{
    int64_t iVar1;
    uchar auStackX_8 [8];
    ulong uStackX_10;
    
    uStackX_10._1_7_ = *(arg1 + 0xd8) >> 8;
    uStackX_10 = CONCAT71(uStackX_10._1_7_,0x1a);
    auStackX_8[0] = 0;
    iVar1 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStackX_10,1,auStackX_8);
    if (-1 < iVar1) {
        uStackX_10 = CONCAT71(uStackX_10._1_7_,0x19);
        auStackX_8[0] = 0;
        iVar1 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStackX_10,1,auStackX_8);
        if (-1 < iVar1) {
            uStackX_10 = CONCAT71(uStackX_10._1_7_,0x18);
            auStackX_8[0] = 0;
            (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStackX_10,1,auStackX_8);
        }
    }
    return;
}


/* fcn.00016598 @ 0x16598 */

void fcn.00016598(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint32_t arg1_00;
    unkbyte7 in_RDX;
    
    if (arg1 != 0) {
        if (*(arg1 + 0x2d0) != 0) {
            if (*(*(arg1 + 0x2d0) + 0x20) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            iVar1 = *(*(arg1 + 0x2d0) + 0x40);
            if (iVar1 != 0) {
                if (*(iVar1 + 0x18) != 0) {
                    fcn.0001c088(iVar1 + 0x10,CONCAT71(in_RDX,1));
                }
                (**(*0x238a8 + 0x48))(*(*(arg1 + 0x2d0) + 0x40));
            }
            if (*(*(arg1 + 0x2d0) + 0x48) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            if (*(*(arg1 + 0x2d0) + 0x58) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            if (*(*(arg1 + 0x2d0) + 0x60) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            if (*(*(arg1 + 0x2d0) + 0x68) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            if (*(*(arg1 + 0x2d0) + 0x70) != 0) {
                (**(*0x238a8 + 0x48))();
            }
            arg1_00 = arg1;
            cVar2 = fcn.0001dc1c(arg1_00);
            if (cVar2 != '\0') {
                (**(*0x238a8 + 0x48))(*(*(arg1 + 0x2d0) + 0x28));
            }
            cVar2 = fcn.0001db90(arg1_00);
            if (cVar2 != '\0') {
                (**(*0x238a8 + 0x48))(*(*(arg1 + 0x2d0) + 0x30));
            }
            cVar2 = fcn.0001db00(arg1_00);
            if (cVar2 != '\0') {
                (**(*0x238a8 + 0x48))(*(*(arg1 + 0x2d0) + 0x38));
            }
            (**(*0x238a8 + 0x48))(*(arg1 + 0x2d0));
        }
        if (*(arg1 + 0x2d8) != 0) {
            (**(*0x238a8 + 0x48))();
        }
        if (*(arg1 + 0x2e0) != 0) {
            (**(*0x238a8 + 0x48))();
        }
        (**(*0x238a8 + 0x48))(arg1);
    }
    return;
}


/* fcn.0001bbc8 @ 0x1bbc8 */

int64_t fcn.0001bbc8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x238c0 == '\0') {
        iVar1 = fcn.0001bb40();
        if (-1 < iVar1) {
            iVar1 = (***0x238e0)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x238d0 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x238d0)(*0x238d0,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.0001e71c @ 0x1e71c */

ulong fcn.0001e71c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int16_t iVar5;
    uint8_t auStackX_8 [8];
    uint64_t uStackX_10;
    
    pcVar1 = *(arg1 + 0x2d0);
    uVar4 = 5;
    if (pcVar1[0x88] != 0xfe) {
        uVar4 = pcVar1[0x88];
    }
    iVar5 = 1000;
    if (*(pcVar1 + 0x89) != 0xfe) {
        iVar5 = *(pcVar1 + 0x89);
    }
    uStackX_10 = CONCAT71(*(arg1 + 0xd8) >> 8,*pcVar1 + '\x1a');
    uVar2 = fcn.0001cc58(*(arg1 + 0xb8),uStackX_10,0,auStackX_8);
    uVar3 = 0;
    uStackX_10 = *arg2 & 0xffffffffffffff00;
    if (((auStackX_8[0] & 0x40) != 0) || ((auStackX_8[0] & 8) != 0)) {
        do {
            uVar2 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_10,0,arg3);
            if (*arg3 != -1) {
                return uVar2;
            }
            (**(*0x238a8 + 0xf8))(iVar5);
            uVar3 = uVar3 + 1;
        } while (uVar3 <= uVar4);
    }
    return uVar2;
}


/* fcn.00016318 @ 0x16318 */

int64_t fcn.00016318(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    iVar2 = fcn.0001bc6c((-(arg1 != '\0') & 0x6c0) + 0x3c8);
    if (iVar2 != 0) {
        *(iVar2 + 0xa8) = iVar2;
        iVar6 = 7;
        *(iVar2 + 0x378) = iVar2;
        iVar5 = 7;
        *(iVar2 + 0x2f8) = 0x1a5;
        *(iVar2 + 0x2f0) = 0x24494350494d4124;
        *(iVar2 + 0x2fa) = 0x1d;
        *(iVar2 + 0x380) = *0x237a8;
        *(iVar2 + 0x388) = *0x237f8;
        puVar1 = *0x23820;
        *(iVar2 + 0x390) = **0x23820;
        *(iVar2 + 0x398) = *(puVar1 + 1);
        piVar3 = iVar2 + 0x130;
        do {
            *piVar3 = iVar2;
            piVar3 = piVar3 + 8;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (arg2 == 0) {
            *(iVar2 + 0xd8) = 0;
        }
        else {
            *(iVar2 + 0xd8) = *arg2;
            *(iVar2 + 0xd8) = 0;
        }
        if (arg1 == '\0') {
            *(iVar2 + 0xd0) = 5;
        }
        else {
            *(iVar2 + 0xd0) = 2;
            piVar4 = iVar2 + 0x798;
            piVar3 = iVar2 + 0x400;
            do {
                *piVar3 = iVar2;
                piVar3 = piVar3 + 8;
                *piVar4 = iVar2;
                piVar4 = piVar4 + 0xb;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
        }
    }
    return iVar2;
}


/* fcn.00016440 @ 0x16440 */

uint64_t fcn.00016440(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    int64_t in_stack_00000028;
    
    puVar1 = arg1 + 0xf0;
    *(arg1 + 0xc0) = arg2;
    *(arg1 + 0xe8) = arg3;
    *(arg1 + 0xec) = arg4;
    *(arg1 + 200) = *(arg2 + 200);
    iVar2 = *(arg2 + 0xb8);
    *(arg1 + 0xb8) = iVar2;
    *(arg1 + 0x338) = in_stack_00000028;
    iStackX_8._1_7_ = *(arg1 + 0xd8) >> 8;
    iStackX_8 = CONCAT71(iStackX_8._1_7_,0x3d);
    (**(iVar2 + 0x38))(iVar2,0,iStackX_8,1,puVar1);
    *puVar1 = *puVar1 & 0xf;
    if (in_stack_00000028 != 0) {
        if (in_stack_00000028 == arg1) {
            *(in_stack_00000028 + 0x340) = 8;
        }
        else {
            iVar2 = fcn.0001bf1c(in_stack_00000028 + 0x340);
            if (iVar2 < 0) {
                return 0x8000000000000009;
            }
            *(*(in_stack_00000028 + 0x350) + *(in_stack_00000028 + 0x348) * 8) = arg1;
            *(in_stack_00000028 + 0x348) = *(in_stack_00000028 + 0x348) + 1;
        }
    }
    iStackX_8 = CONCAT71(iStackX_8._1_7_,4);
    uVar3 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,0,arg1 + 0x330);
    if (-1 < uVar3) {
        *0x23940 = 0x60101;
        *0x23944 = *(arg1 + 0xd9);
        *0x23945 = *(arg1 + 0xda);
        iVar2 = fcn.0001bd00(*(*(arg1 + 0xc0) + 0xb0),0x23940);
        *(arg1 + 0xb0) = iVar2;
        uVar3 = ~-(iVar2 != 0) & 0x8000000000000009;
    }
    return uVar3;
}


/* fcn.000127f0 @ 0x127f0 */

int64_t fcn.000127f0(int64_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t arg2;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint32_t arg3;
    uint64_t uVar6;
    uint64_t arg2_00;
    bool bVar7;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    
    iStackX_8 = 0;
    uStackX_10 = 0;
    iVar1 = *(arg1 + 0xc0);
    if ((*0x23900 != '\0') ||
       ((1 < *(arg1 + 0xd0) && ((*(iVar1 + 0x300) == 0 || ((*(*(iVar1 + 0x300) + 0x3b) & 1) == 0)))))) {
        return -0x7ffffffffffffff2;
    }
    if (iVar1 == 0) {
        if (*(arg1 + 0xd0) != 1) {
            return -0x7ffffffffffffffe;
        }
        arg3 = *(*(arg1 + 200) + 0x20);
    }
    else {
        arg3 = *(iVar1 + 0x318);
    }
    iVar1 = fcn.0001c864(&iStackX_8,&uStackX_10,arg3);
    uVar3 = uStackX_10;
    if (iVar1 < 0) {
        return iVar1;
    }
    arg2 = fcn.0001bc6c(uStackX_10 << 3);
    iVar2 = iStackX_8;
    if (arg2 == 0) {
        return -0x7ffffffffffffff7;
    }
    iVar5 = 0;
    uVar6 = 0;
    uStackX_10 = arg2;
    if (uVar3 != 0) {
        do {
            arg1_00 = *(iVar2 + uVar6 * 8);
            if ((*(arg1_00 + 0x3b) & 1) == 0) {
                bVar7 = *(arg1_00 + 9) == *(arg1 + 0xda);
code_r0x0001290b:
                if (bVar7) {
code_r0x0001290d:
                    iVar1 = fcn.0001c7e8(arg1_00,arg2);
                    if ((*(arg1_00 + 0x3b) & 0x20) != 0) {
                        *(arg1 + 0x2fd) = *(arg1_00 + 8);
                    }
                    iVar5 = iVar5 + 1;
                    arg2 = arg2 + 8;
                    *(arg1_00 + 8) = *(arg1 + 0xdb);
                }
            }
            else if ((*(arg1_00 + 9) == *(arg1 + 0xda)) && (*(arg1_00 + 10) == *(arg1 + 0xd9))) {
                if (*(arg1 + 0xd0) == 1) {
                    bVar7 = *(arg1_00 + 8) == *(arg1 + 0xdb);
                    goto code_r0x0001290b;
                }
                goto code_r0x0001290d;
            }
            arg2_00 = uStackX_10;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar3);
        if (iVar5 != 0) {
            *(arg1 + 0x308) = iVar5;
            iVar2 = fcn.0001bc6c(iVar5 << 3);
            *(arg1 + 0x310) = iVar2;
            if (iVar2 == 0) {
                return -0x7ffffffffffffff7;
            }
            fcn.00022ac0(iVar2,arg2_00,iVar5 << 3);
            iVar2 = *0x238f8;
            uVar3 = 0;
            if (*(arg1 + 0x308) != 0) {
                piVar4 = *(arg1 + 0x310);
                do {
                    iVar5 = *0x238f8 + 0x20 + *piVar4 * 0x159;
                    if ((*(iVar5 + 0x3a) & 1) == 0) {
                        *(arg1 + 0x300) = iVar5;
                        *(arg1 + 0x318) = (*(arg1 + 0x310))[uVar3];
                        *(arg1 + 0x2ff) = 1;
                        break;
                    }
                    uVar3 = uVar3 + 1;
                    piVar4 = piVar4 + 1;
                } while (uVar3 < *(arg1 + 0x308));
            }
            if (*(arg1 + 0x2ff) == '\0') {
                *(arg1 + 0x300) = iVar2 + 0x20 + **(arg1 + 0x310) * 0x159;
                *(arg1 + 0x318) = **(arg1 + 0x310);
            }
            goto code_r0x00012a17;
        }
    }
    iVar1 = -0x7ffffffffffffff2;
    arg2_00 = uStackX_10;
code_r0x00012a17:
    iVar2 = *(arg1 + 0x300);
    if (iVar2 != 0) {
        if ((*(iVar2 + 0x3b) & 1) != 0) {
            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x2000;
            *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | 0x2000;
        }
        *(arg1 + 0x2fe) = *(iVar2 + 0x3b) >> 7;
        fcn.00011760(arg1);
    }
    (**(*0x238a8 + 0x48))(arg2_00);
    if (iStackX_8 != 0) {
        (**(*0x238a8 + 0x48))(iStackX_8);
    }
    return iVar1;
}


/* fcn.0001d344 @ 0x1d344 */

int64_t fcn.0001d344(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_8;
    
    iVar2 = 0;
    if (arg1 != 0) {
        uStackX_8 = 9;
        iVar1 = fcn.0001d098(arg2,arg3,1);
        if ((iVar1 == 0) || (iVar2 = (**(*0x238b0 + 0x48))(iVar1,0x231a0,0,&uStackX_8,arg1), iVar2 < 0)) {
            (**(*0x238a8 + 0x168))(arg1,9);
            *arg1 = 0x4020;
            *(arg1 + 8) = 0;
            if (iVar2 == -0x7ffffffffffffff2) {
                iVar2 = (**(*0x238b0 + 0x58))(iVar1,0x231a0,3,uStackX_8,arg1);
            }
        }
        if (iVar1 != 0) {
            (**(*0x238a8 + 0x48))(iVar1);
        }
        return iVar2;
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00014014 @ 0x14014 */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00014014(int64_t arg1)

{
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    char cVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint8_t uVar9;
    int *arg1_00;
    uint64_t uVar10;
    int iVar11;
    uint64_t uVar12;
    uint8_t uVar13;
    char cVar14;
    int *arg1_01;
    uint8_t uVar15;
    uint64_t uVar16;
    uint16_t auStackX_8 [4];
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int8_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    ulong uVar17;
    ulong uVar18;
    int64_t iStack_58;
    int64_t var_18h;
    
    uStackX_10 = 0xff;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xdc) = 0;
    iVar7 = 0;
    iStackX_18._1_7_ = *(arg1 + 0xd8) >> 8;
    iStackX_18 = CONCAT71(iStackX_18._1_7_,0x3c);
    iVar8 = iStackX_18;
    iVar6 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_18,1,&uStackX_10);
    if (-1 < iVar6) {
        uVar5 = arg1;
        iVar6 = fcn.00010764(uVar5);
        if (((-1 < iVar6) && (iVar6 = fcn.000138fc(arg1), -1 < iVar6)) && (iVar6 = fcn.00013db4(arg1), -1 < iVar6)) {
            if (*(arg1 + 0x2c8) != 0) {
                iVar8 = 0;
                iStack_58 = CONCAT71(*(arg1 + 0xd8) >> 8,*(arg1 + 0x2c8) + '\x04');
                iVar7 = iStack_58;
                iVar6 = fcn.0001cc58(*(arg1 + 0xb8),iStack_58,0,auStackX_8);
                if (-1 < iVar6) {
                    iVar8 = CONCAT71(iVar8 >> 8,1);
                    auStackX_8[0] = auStackX_8[0] & 0xfefc | 0x8000;
                    fcn.0001cc58(*(arg1 + 0xb8),iStack_58,iVar8,auStackX_8);
                    iVar7 = iStack_58;
                }
            }
            if ((*(arg1 + 0x396) == '\0') && (*(arg1 + 0x2d0) != 0)) {
                iVar7 = fcn.00020e74(arg1,CONCAT71(iVar7 >> 8,*(*0x23848 + 3)));
                if (iVar7 < 0) {
                    return iVar7;
                }
                cVar4 = fcn.0001dd94(uVar5);
                iVar7 = *0x23820;
                if (cVar4 != '\0') {
                    iVar6 = *(arg1 + 0x300);
                    if ((iVar6 == 0) || ((*(iVar6 + 0x3d) & 0x10) == 0)) {
                        iVar6 = *(*(arg1 + 0x2d0) + 0x20);
                        *(iVar6 + 0x10) = *(*0x23820 + 0x19);
                        *(iVar6 + 0x18) = *(iVar7 + 0x21);
                        *(iVar6 + 0x1c) = *(iVar7 + 0x25);
                    }
                    else {
                        iVar8 = *(arg1 + 0x318);
                        fcn.0001d164(*(*(arg1 + 0x2d0) + 0x20) + 0x10,iVar6,iVar8);
                    }
                }
            }
            uVar18 = 0;
            uVar17 = 0;
            iVar7 = 1;
            fcn.0001d724(arg1,1,iVar8,arg1);
            iVar8 = *(arg1 + 0xc0);
            if (*(iVar8 + 0x395) != '\0') {
                *(arg1 + 0x395) = *(iVar8 + 0x395);
            }
            if (*(iVar8 + 0x396) != '\0') {
                *(arg1 + 0x396) = *(iVar8 + 0x396);
            }
            if (*(iVar8 + 0x397) != '\0') {
                *(arg1 + 0x397) = *(iVar8 + 0x397);
            }
            if (*(iVar8 + 0x398) != '\0') {
                *(arg1 + 0x398) = *(iVar8 + 0x398);
            }
            iVar6 = fcn.00020d44(uVar5,iVar7);
            if (-1 < iVar6) {
                pcVar1 = arg1 + 0x390;
                if (*pcVar1 != -2) {
                    iStackX_18 = CONCAT71(iStackX_18._1_7_,0xd);
                    (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_18,1,pcVar1,uVar17,uVar18);
                    if (*(arg1 + 0xd0) - 2U < 2) {
                        iStackX_18 = CONCAT71(iStackX_18._1_7_,0x1b);
                        (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_18,1,pcVar1);
                    }
                }
                if ((*(arg1 + 0x2d8) != 0) && (pcVar1 = arg1 + 0x391, *pcVar1 != -2)) {
                    iStackX_18 = CONCAT71(iStackX_18._1_7_,0x1b);
                    (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_18,1,pcVar1);
                    if (*(arg1 + 0xd0) - 2U < 2) {
                        iStackX_18 = CONCAT71(iStackX_18._1_7_,0x1b);
                        (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_18,1,pcVar1);
                    }
                }
                fcn.00013228(arg1);
                iVar8 = fcn.0001350c(arg1,0,0);
                if (iVar8 != 0) {
                    *(arg1 + 0x2e8) = 1;
                }
                iVar11 = *(arg1 + 0xd0);
                if (iVar11 == 2) {
                    uVar13 = 2;
                }
                else if (iVar11 == 3) {
                    uVar13 = 1;
                }
                else {
                    if (1 < iVar11 - 4U) {
                        return 0;
                    }
                    uVar13 = 6;
                }
                cVar14 = '\x10';
                uVar16 = 0;
                cVar4 = '\0';
                while( true ) {
                    cVar14 = cVar14 + cVar4;
                    uStackX_10 = 0;
                    iStackX_18 = CONCAT71(iStackX_18._1_7_,cVar14);
                    iVar8 = iStackX_18;
                    uVar12 = 0;
                    uStackX_20 = 0;
                    iVar6 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_18,0,&uStackX_10);
                    if (iVar6 < 0) break;
                    if ((uStackX_10 & 1) == 0) {
                        uVar5 = uStackX_10 & 0xf;
                        if ((uStackX_10 & 0xf) == 0) {
                            arg1_01 = arg1 + 0xf8 + uVar16 * 0x40;
                            auStackX_8[0] = CONCAT11(auStackX_8[0]._1_1_,4);
                            *(uVar16 * 0x40 + 0xfc + arg1) = 4;
                            *arg1_01 = 4;
                        }
                        else if (uVar5 == 2) {
                            arg1_01 = arg1 + 0xf8 + uVar16 * 0x40;
                            auStackX_8[0] = CONCAT11(auStackX_8[0]._1_1_,4);
                            *(uVar16 * 0x40 + 0xfc + arg1) = 4;
                            *arg1_01 = 0;
                        }
                        else {
                            if (uVar5 == 4) {
                                arg1_01 = arg1 + 0xf8 + uVar16 * 0x40;
                                *(uVar16 * 0x40 + 0xfc + arg1) = 6;
                                *arg1_01 = 6;
                            }
                            else {
                                if (uVar5 == 8) {
                                    arg1_01 = arg1 + 0xf8 + uVar16 * 0x40;
                                    *(uVar16 * 0x40 + 0xfc + arg1) = 5;
                                    *arg1_01 = 5;
                                    goto code_r0x0001438c;
                                }
                                if (uVar5 != 0xc) {
                                    return -0x7ffffffffffffffd;
                                }
                                arg1_01 = arg1 + 0xf8 + uVar16 * 0x40;
                                *(uVar16 * 0x40 + 0xfc + arg1) = 7;
                                *arg1_01 = 7;
                            }
                            auStackX_8[0] = CONCAT11(auStackX_8[0]._1_1_,8);
                            uVar13 = uVar13 - 1;
                        }
                    }
                    else {
                        arg1_01 = arg1 + 0xf8 + uVar16 * 0x40;
                        *arg1_01 = 8;
code_r0x0001438c:
                        auStackX_8[0] = CONCAT11(auStackX_8[0]._1_1_,4);
                    }
                    iVar7 = uVar16 * 0x40;
                    uStackX_10 = 0xffffffffffffffff;
                    iVar11 = *arg1_01;
                    *(iVar7 + 0x118 + arg1) = cVar14;
                    uVar10 = uStackX_10;
                    if (iVar11 < 4) goto code_r0x000144b7;
                    if (*arg1_01 < 6) {
code_r0x0001462b:
                        uVar17 = 0;
                        iVar6 = fcn.0001cd18(*(arg1 + 0xb8),iVar8,0,&uStackX_20);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        iVar6 = fcn.0001cd18(*(arg1 + 0xb8),iVar8,CONCAT71(uVar17 >> 8,1),&uStackX_10);
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        uVar12 = 0;
                        iVar6 = fcn.0001cd18(*(arg1 + 0xb8),iVar8,0,&uStackX_10);
                        uVar3 = uStackX_10;
                        if (iVar6 < 0) {
                            return iVar6;
                        }
                        if (*arg1_01 == 8) {
                            uVar2 = uStackX_10 & 0xfffffffc;
                            uVar5 = uStackX_10 & 0xfffffffc;
                            uStackX_10 = uStackX_10 & 0xfffffffffffffffc;
                            uVar10 = uStackX_10;
                            if (uVar2 == 0) goto code_r0x000144b7;
                            if ((uVar3 & 0xffff0000) == 0) {
                                uVar5 = uVar5 | 0xffff0000;
                                *arg1_01 = 2;
                                *(iVar7 + 0xfc + arg1) = 2;
                                goto code_r0x000146cf;
                            }
                            *arg1_01 = 3;
                            *(iVar7 + 0xfc + arg1) = 3;
                        }
                        else {
                            uVar5 = uStackX_10 & 0xfffffff0;
code_r0x000146cf:
                            uStackX_10 = CONCAT44(uStackX_10._4_4_,uVar5);
                        }
                        uVar10 = uStackX_10;
                        if (uVar5 == 0) goto code_r0x000144b7;
                        *(iVar7 + 0x110 + arg1) = ~uVar5;
                        if (*(arg1 + 0x2e8) != '\0') {
                            fcn.000135a0(arg1_01);
                        }
                        if (*arg1_01 == 0) {
                            uVar12 = CONCAT71(uVar12 >> 8,1);
                            iVar6 = fcn.0001cd18(*(arg1 + 0xb8),iVar8,uVar12,&uStackX_20);
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                        }
                        iVar11 = *arg1_01;
                        uVar10 = *(iVar7 + 0x110 + arg1) + 1;
                        *(iVar7 + 0x108 + arg1) = uVar10;
                        if ((iVar11 - 2U < 2) && (uVar10 < 0x10)) {
                            *(iVar7 + 0x108 + arg1) = 0x10;
                            *(iVar7 + 0x110 + arg1) = 0xf;
                        }
                    }
                    else {
                        if (*arg1_01 < 8) {
                            uVar17 = 0;
                            iVar6 = fcn.0001cdb4(*(arg1 + 0xb8),iVar8,0,&uStackX_20);
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                            iVar6 = fcn.0001cdb4(*(arg1 + 0xb8),iVar8,CONCAT71(uVar17 >> 8,1),&uStackX_10);
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                            iVar6 = fcn.0001cdb4(*(arg1 + 0xb8),iVar8,0,&uStackX_10);
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                            uVar10 = uStackX_10 & 0xfffffffffffffff0;
                            uVar12 = 0;
                            if (uVar10 != 0) {
                                uVar12 = uStackX_10 >> 0x20;
                                if (uVar12 < 0xffffffff) {
                                    if (uVar12 == 0) {
                                        *arg1_01 = *arg1_01 + -2;
                                        uVar12 = 0xffffffff;
                                    }
                                    else {
                                        iVar11 = uStackX_10 >> 0x20;
                                        if (iVar11 == 0) {
                                            uVar9 = 0xff;
                                        }
                                        else {
                                            uVar9 = 0x1f;
                                            uVar10 = uVar12;
                                            uVar15 = 0x1f;
                                            if (iVar11 != 0 && -1 < uStackX_10) {
                                                do {
                                                    uVar9 = uVar15 - 1;
                                                    uVar5 = uVar10 * 2;
                                                    uVar10 = uVar5;
                                                    uVar15 = uVar9;
                                                } while (0 < uVar5);
                                            }
                                        }
                                        uVar12 = uVar12 | -1LL << (uVar9 & 0x3f);
                                    }
                                    uVar10 = uStackX_10 & 0xfffffff0 | uVar12 << 0x20;
                                }
                                uVar12 = ~uVar10;
                                *(iVar7 + 0x110 + arg1) = uVar12;
                                uStackX_10 = uVar10;
                                if (*(arg1 + 0x2e8) != '\0') {
                                    fcn.000135a0(arg1_01);
                                }
                                if (*arg1_01 == 0) {
                                    uVar12 = CONCAT71(uVar12 >> 8,1);
                                    iVar6 = fcn.0001cdb4(*(arg1 + 0xb8),iVar8,uVar12,&uStackX_20);
                                    if (iVar6 < 0) {
                                        return iVar6;
                                    }
                                }
                                *(iVar7 + 0x108 + arg1) = *(iVar7 + 0x110 + arg1) + 1;
                                goto code_r0x000144ba;
                            }
                        }
                        else if (*arg1_01 == 8) goto code_r0x0001462b;
code_r0x000144b7:
                        uStackX_10 = uVar10;
                        *arg1_01 = 0;
                    }
code_r0x000144ba:
                    arg1_00 = arg1 + 0xf8 + iVar7;
                    if (*arg1_00 != 0) {
                        if (((*0x237a0 == '\0') || (*(arg1 + 0x2fe) == '\0')) ||
                           (arg1_00 = arg1_01, iVar6 = fcn.0001d9b4(arg1_01), iVar6 < 0)) {
                            uVar12 = 0;
                            uVar5 = 0x237e0;
                        }
                        else {
                            uVar12 = CONCAT71(uVar12 >> 8,1);
                            uVar5 = 0x23780;
                        }
                        fcn.0001cb9c(arg1_00,uVar5,uVar12);
                    }
                    iVar11 = *(iVar7 + 0xfc + arg1);
                    if ((iVar11 != 0) && (uStackX_20 = uStackX_20 & -(*arg1_01 != 0), iVar11 != 0)) {
                        uVar12 = CONCAT71(uVar12 >> 8,1);
                        if (*arg1_01 - 6U < 2) {
                            iVar8 = fcn.0001cdb4(*(arg1 + 0xb8),iVar8,uVar12,&uStackX_20);
                        }
                        else {
                            iVar8 = fcn.0001cd18(*(arg1 + 0xb8),iVar8,uVar12,&uStackX_20);
                        }
                        if (iVar8 < 0) {
                            return iVar8;
                        }
                    }
                    iVar11 = *arg1_01;
                    if ((iVar11 - 4U < 4) && (*(iVar7 + 0x108 + arg1) < 0x1000)) {
                        *(iVar7 + 0x108 + arg1) = 0x1000;
                        *(iVar7 + 0x110 + arg1) = 0xfff;
                    }
                    if ((*0x23758 & 2) != 0) {
                        if ((*(arg1 + 0x395) != '\0') && (iVar11 == 7)) {
                            *arg1_01 = 5;
                        }
                        if ((((*0x23758 & 2) != 0) && (*(arg1 + 0x395) != '\0')) && (*arg1_01 == 6)) {
                            *arg1_01 = 4;
                        }
                    }
                    uVar15 = uVar16 + 1;
                    uVar16 = uVar15;
                    if (uVar13 <= uVar15) {
                        if (*(arg1 + 0xd0) == 3) {
                            iStackX_18 = CONCAT71(iStackX_18._1_7_,0x3e);
                            uVar17 = 0;
                            fcn.0001cc58(*(arg1 + 0xb8),iStackX_18,0,&uStackX_10);
                            uVar12 = CONCAT71(uVar17 >> 8,1);
                            uStackX_10 = uStackX_10 & 0xfffffffffffffcff;
                            fcn.0001cc58(*(arg1 + 0xb8),iStackX_18,uVar12,&uStackX_10);
                        }
                        iVar8 = fcn.000136cc(arg1);
                        if (iVar8 < 0) {
                            return iVar8;
                        }
                        iVar8 = fcn.0001d724(arg1,0xb,uVar12,arg1);
                        if ((iVar8 < 0) && (iVar8 == -0x7ffffffffffffffd)) {
                            iVar8 = 0;
                        }
                        *(arg1 + 0xd6) = 1;
                        return iVar8;
                    }
                    cVar4 = auStackX_8[0];
                }
            }
        }
    }
    return iVar6;
}


/* fcn.0001de80 @ 0x1de80 */

int64_t fcn.0001de80(uint32_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    char cVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t auStackX_8 [4];
    int64_t iStackX_18;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar6 = *(iVar4 + 0x2d0);
    iVar3 = *(iVar6 + 0x20);
    if (*(iVar3 + 0x11) == '\0') {
        return 0;
    }
    if (*(iVar4 + 0xd0) != 5) {
        return 0;
    }
    iVar5 = iVar4;
    cVar2 = fcn.0001dd94(arg1);
    if (cVar2 == '\0') {
        return 0;
    }
    if (*(iVar6 + 0x58) == 0) {
        return 0;
    }
    iVar6 = *(iVar5 + 0xc0);
    cVar2 = fcn.0001dd94(iVar6);
    if (cVar2 == '\0') {
        return 0;
    }
    puVar1 = *(*(iVar6 + 0x2d0) + 0x20);
    if ((*puVar1 & 0x20) == 0) {
        return 0;
    }
    if (puVar1[0xc] == 1) {
        *(iVar3 + 0xc) = 1;
        iVar3 = 0;
    }
    else {
        iStackX_18 = CONCAT71(*(iVar6 + 0xd8) >> 8,**(iVar6 + 0x2d0) + '(');
        iVar3 = fcn.0001cc58(*(iVar6 + 0xb8),iStackX_18,0,auStackX_8);
        if (-1 < iVar3) {
            auStackX_8[0] = auStackX_8[0] | 0x20;
            iVar3 = fcn.0001cc58(*(iVar4 + 0xb8),iStackX_18,CONCAT71(iVar3 >> 8,1),auStackX_8);
            if (-1 < iVar3) {
                *(*(*(iVar4 + 0x2d0) + 0x20) + 0xc) = auStackX_8[0] >> 5 & 1;
                *(*(*(iVar6 + 0x2d0) + 0x20) + 0xc) = auStackX_8[0] >> 5 & 1;
            }
        }
        if (iVar3 < 0) goto code_r0x0001dfbe;
    }
    if ((*(*(iVar4 + 0x2d0) + 0x58) != 0) && (*(*(*(iVar4 + 0x2d0) + 0x20) + 0xc) == '\x01')) {
        *arg2 = 1;
        return iVar3;
    }
code_r0x0001dfbe:
    if (iVar3 == -0x7ffffffffffffffd) {
        return 0;
    }
    return iVar3;
}


/* fcn.00012a9c @ 0x12a9c */

int64_t fcn.00012a9c(uint32_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uchar uVar3;
    uchar *puVar4;
    uchar *puVar5;
    int64_t iVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    uint64_t uVar10;
    uint16_t auStackX_10 [4];
    ulong auStackX_18 [2];
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar7 + 0xf0) == '\0') && (*(iVar7 + 0xd0) - 4U < 2)) {
        iVar6 = 0;
    }
    else {
        iVar8 = iVar7;
        cVar2 = fcn.0001ce58(arg1);
        if (cVar2 == '\0') {
            iVar8 = *(iVar8 + 0x338);
            if (iVar8 == 0) {
                return -0x7ffffffffffffff2;
            }
        }
        else {
            iVar8 = iVar7;
        }
        puVar4 = *(iVar8 + 800);
        if (puVar4 == NULL) {
            puVar4 = fcn.0001bc6c(0x10);
            *(iVar8 + 800) = puVar4;
        }
        puVar5 = *(iVar8 + 0x328);
        if (puVar5 == NULL) {
            puVar5 = fcn.0001bc6c(0xb);
            *(iVar8 + 0x328) = puVar5;
        }
        if ((puVar4 == NULL) || (puVar5 == NULL)) {
            iVar6 = -0x7ffffffffffffff7;
        }
        else {
            auStackX_18[0] = 2;
            iVar6 = (**(*0x238b0 + 0x48))(L"IsaIrqMask",0x23190,0,auStackX_18,auStackX_10);
            if ((iVar6 < 0) && (iVar6 == -0x7ffffffffffffff2)) {
                auStackX_18[0] = 2;
                auStackX_10[0] = 0xe307;
                iVar6 = (**(*0x238b0 + 0x58))(L"IsaIrqMask",0x23190,2,2,auStackX_10);
            }
            auStackX_10[0] = ~auStackX_10[0];
            cVar2 = fcn.0001dd94(arg1);
            if ((cVar2 == '\0') || (*(*(iVar7 + 0x2d0) + 0x58) == 0)) {
                *puVar4 = *(iVar7 + 0xdb);
                puVar4[1] = *(iVar7 + 0xda) << 3 | puVar4[1] & 7;
                *puVar5 = *(iVar7 + 0xdb);
                uVar3 = *(iVar7 + 0xda);
            }
            else {
                *puVar4 = *(iVar8 + 0xdb);
                puVar4[1] = puVar4[1] & 7 | *(iVar8 + 0xda) << 3;
                *puVar5 = *(iVar8 + 0xdb);
                uVar3 = *(iVar8 + 0xda);
            }
            puVar5[1] = uVar3;
            if (*(iVar7 + 0x300) != 0) {
                uVar10 = 0;
                pcVar9 = puVar4 + 2;
                do {
                    if (((*pcVar9 == '\0') || (pcVar9[*(iVar7 + 0x300) + -puVar4 + 0x1b] == '\0')) ||
                       (*pcVar9 == pcVar9[*(iVar7 + 0x300) + -puVar4 + 0x1b])) {
                        if (pcVar9[*(iVar7 + 0x300) + -puVar4 + 0x1b] != '\0') {
                            *pcVar9 = pcVar9[*(iVar7 + 0x300) + -puVar4 + 0x1b];
                            uVar1 = *(pcVar9 + *(iVar7 + 0x300) + (0x1c - puVar4));
                            *(pcVar9 + 1) = uVar1;
                            *(pcVar9 + 1) = uVar1 & auStackX_10[0];
                        }
                        if (*(uVar10 + 0x29 + *(iVar7 + 0x300)) != '\0') {
                            iVar8 = 0;
                            do {
                                puVar5[iVar8 + uVar10 + 2] = *(uVar10 + iVar8 + 0x29 + *(iVar7 + 0x300));
                                iVar8 = iVar8 + 1;
                            } while (iVar8 < 2);
                        }
                    }
                    else {
                        iVar6 = -0x7ffffffffffffff9;
                    }
                    pcVar9 = pcVar9 + 3;
                    uVar10 = uVar10 + 2;
                } while (uVar10 < 8);
                if ((*(*(iVar7 + 0x300) + 0x3b) & 1) == 0) {
                    puVar4[0xe] = *(*(iVar7 + 0x300) + 0x31);
                }
                else {
                    puVar4[0xe] = 0;
                }
            }
        }
    }
    return iVar6;
}


/* fcn.0001ce98 @ 0x1ce98 */

void fcn.0001ce98(int64_t arg1)

{
    int64_t iVar1;
    char acStackX_8 [8];
    ulong uStackX_10;
    ulong uStackX_18;
    
    acStackX_8[0] = *(arg1 + 0xdb);
    uStackX_10._1_7_ = *(arg1 + 0xd8) >> 8;
    uStackX_10 = CONCAT71(uStackX_10._1_7_,0x18);
    iVar1 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStackX_10,1,acStackX_8);
    if (-1 < iVar1) {
        acStackX_8[0] = *(arg1 + 0x3d0);
        uStackX_10 = CONCAT71(uStackX_10._1_7_,0x19);
        iVar1 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStackX_10,1,acStackX_8);
        if (-1 < iVar1) {
            acStackX_8[0] = *(arg1 + 0x3d8) + *(arg1 + 0x3d0) + -1;
            uStackX_10 = CONCAT71(uStackX_10._1_7_,acStackX_8[0]);
            uStackX_18 = CONCAT71(*(arg1 + 0xd8) >> 8,0x1a);
            (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,uStackX_18,1,&uStackX_10);
        }
    }
    return;
}


/* fcn.00021574 @ 0x21574 */

uint64_t fcn.00021574(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t arg1_00;
    uint64_t uVar9;
    char *pcVar10;
    char *pcVar11;
    uint64_t uVar12;
    ulong uStackX_8;
    
    arg1_00 = 0;
    uStackX_8 = 0;
    uVar9 = arg1_00;
    if (*(arg1 + 0xd0) - 1U < 3) {
        if (*(*(arg1 + 200) + 0x80) == *(*(arg1 + 200) + 0x70)) {
            return 0;
        }
        fcn.0001bbc8(1,0x2011002);
        uVar9 = 0;
        uVar6 = arg1_00;
        uVar12 = arg1_00;
        if (*(*(arg1 + 200) + 0x70) != 0) {
            do {
                uVar9 = uVar6;
                iVar8 = *(*(arg1 + 200) + 0x78);
                iVar3 = *(iVar8 + uVar12 * 8);
                if ((iVar3 != 0) && (*(iVar3 + 8) != 0)) {
                    if (*(iVar3 + 0x21) == '\0') {
                        if (*(iVar3 + 0x20) == '\0') {
code_r0x000216b3:
                            iVar8 = fcn.0001be20(*(arg1 + 0xb0),*(*(iVar3 + 8) + 8));
                            if (iVar8 == 0) {
                                *(iVar3 + 0x10) = arg1;
                                *(iVar3 + 0x20) = 1;
                                if (*(arg1 + 0x2e0) == 0) {
                                    iVar7 = fcn.0001b8ec();
                                    iVar8 = 0;
                                    if (iVar7 != 0) {
                                        iVar8 = fcn.000102a0(iVar7,0x30);
                                    }
                                    *(arg1 + 0x2e0) = iVar8;
                                    if (iVar8 == 0) {
                                        return 0x8000000000000009;
                                    }
                                }
                                if (*(arg1 + 0x2e0) != iVar3) {
                                    fcn.000102c0(*(arg1 + 0x2e0),iVar3,0x30);
                                }
                            }
                        }
                        if (*(iVar3 + 0x21) == '\0') {
                            pcVar11 = **(iVar3 + 8);
                            if (pcVar11 == NULL) {
code_r0x0002172e:
                                arg1_00 = 0;
                            }
                            else {
                                cVar2 = *pcVar11;
                                pcVar10 = pcVar11;
                                pcVar4 = NULL;
                                while (pcVar5 = pcVar10, cVar2 != '\x7f') {
                                    pcVar10 = pcVar5 + pcVar5[3] * 0x100 + pcVar5[2];
                                    pcVar4 = pcVar5;
                                    cVar2 = pcVar5[pcVar5[3] * 0x100 + pcVar5[2]];
                                }
                                iVar8 = pcVar4 - pcVar11;
                                if (iVar8 == 0) goto code_r0x0002172e;
                                arg1_00 = fcn.0001bc40(iVar8 + 4);
                                fcn.00022ac0(arg1_00,pcVar11,iVar8);
                                *(iVar8 + arg1_00) = 0x4ff7f;
                            }
                            pcVar11 = NULL;
                            iVar8 = fcn.0001be20(*(arg1 + 0xb0),arg1_00);
                            if (iVar8 == 0) {
                                *(iVar3 + 0x1b) = arg2;
                                pcVar4 = **(iVar3 + 8);
                                if (pcVar4 != NULL) {
                                    while (pcVar10 = pcVar4, *pcVar10 != '\x7f') {
                                        pcVar11 = pcVar10;
                                        pcVar4 = pcVar10 + pcVar10[3] * 0x100 + pcVar10[2];
                                    }
                                }
                                *(iVar3 + 0x1a) = pcVar11[5];
                                *(iVar3 + 0x19) = pcVar11[4];
                                iVar8 = *(*(arg1 + 200) + 0x60);
                                uVar9 = (**(iVar8 + 8))(iVar8,**(iVar3 + 8),*(iVar3 + 0x18),0,iVar3 + 0x22);
                                *(iVar3 + 0x28) = arg1;
                                *(iVar3 + 0x21) = 1;
                            }
                            if (*(iVar3 + 0x21) == '\0') goto code_r0x00021811;
                        }
                        if (*(iVar3 + 0x20) != '\0') {
                            piVar1 = *(arg1 + 200) + 0x80;
                            *piVar1 = *piVar1 + 1;
                            break;
                        }
                    }
                    else {
                        if (*(iVar3 + 0x20) == '\0') goto code_r0x000216b3;
                        if ((((*(arg1 + 0x2e0) == 0) && (*(iVar3 + 0x1b) == *(arg1 + 0xdb))) &&
                            (*(iVar3 + 0x1a) == *(arg1 + 0xda))) && (*(iVar3 + 0x19) == *(arg1 + 0xd9))) {
                            iVar7 = fcn.0001b8ec(iVar8,0x30);
                            iVar8 = 0;
                            if (iVar7 != 0) {
                                iVar8 = fcn.000102a0(iVar7,0x30);
                            }
                            *(arg1 + 0x2e0) = iVar8;
                            if (iVar8 == 0) {
                                return 0x8000000000000009;
                            }
                            if (iVar8 != iVar3) {
                                fcn.000102c0(iVar8,iVar3,0x30);
                            }
                        }
                    }
                }
code_r0x00021811:
                uVar12 = uVar12 + 1;
                uVar6 = uVar9;
            } while (uVar12 < *(*(arg1 + 200) + 0x70));
            if (arg1_00 != 0) {
                (**(*0x238a8 + 0x48))(arg1_00);
            }
        }
    }
    iVar8 = *(arg1 + 0x2e0);
    if ((iVar8 != 0) && (*(iVar8 + 0x18) != 0)) {
        iVar3 = *(*(arg1 + 200) + 0x60);
        uVar9 = (**(iVar3 + 0x10))(iVar3,**(iVar8 + 8),*(iVar8 + 0x18),iVar8 + 0x22,&uStackX_8,arg1 + 0xa58);
    }
    return uVar9;
}


/* fcn.0001682c @ 0x1682c */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_dh
//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.0001682c(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    char cVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint *puVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    char *pcVar11;
    int64_t *piVar12;
    char cVar13;
    uint8_t uVar14;
    char *pcVar15;
    int64_t iVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t in_R8;
    uint32_t *arg3;
    char *pcVar19;
    ulong uVar20;
    uint64_t uVar21;
    int32_t var_fh;
    int64_t var_17h;
    int64_t var_1fh_2;
    int64_t var_27h;
    int8_t var_77h;
    uint32_t var_7fh;
    char acStack_88 [8];
    ulong uStack_80;
    uint32_t uStack_78;
    uint32_t uStack_74;
    uint8_t uStack_70;
    uint32_t uStack_6c;
    uint8_t auStack_68 [8];
    uint32_t auStack_60 [2];
    int64_t iStack_58;
    uint32_t uStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    int8_t var_29h;
    int64_t var_21h;
    int32_t var_19h;
    int8_t var_11h;
    uint32_t var_dh;
    int8_t var_9h;
    int64_t var_1h;
    
    cVar13 = arg2;
    iStack_38 = -0x7ffffffffffffff2;
    uStack_70 = 0;
    uStack_50 = 0;
    fcn.0001bbc8(1,0x2011000);
    in_R8 = in_R8 & 0xffffffffffffff00;
    iStack_48 = 0;
    cVar3 = '\0';
    uVar14 = 0;
    uStack_80 = *(arg1 + 0x3d0) << 0x18;
    var_1fh_2._1_1_ = '\0';
    uStack_78 = in_R8;
    do {
        if (in_R8 == '\0') {
            uStack_6c = uStack_6c & 0xffffff00;
            uVar7 = 0;
            iStack_58 = 0;
            do {
                pcVar15 = uStack_80;
                if (in_R8 == '\0') {
                    uStack_74 = 0;
                    fcn.0001cd18(*(arg1 + 0xb8),uStack_80,0,&uStack_74);
                    fcn.0001cd18(*(arg1 + 0xb8),pcVar15,1,&uStack_74);
                    arg3 = NULL;
                    iVar4 = fcn.0001cd18(*(arg1 + 0xb8),pcVar15,0,&uStack_74);
                    uVar14 = uStack_80._2_1_;
                    if (iVar4 < 0) {
                        in_R8 = uStack_78;
                        if (uStack_6c == '\0') break;
code_r0x00016929:
                        uVar7 = uStack_80._1_1_;
                    }
                    else {
                        if (uStack_74 == 0xffffffff) {
                            uVar7 = uStack_80._1_1_;
                            if ((((*(arg1 + 0x396) == '\0') && (*(arg1 + 0x2d0) != 0)) && (uStack_80._2_1_ == 0)) &&
                               ((uStack_80._1_1_ == 0 && (arg3 = 0x100, (*(*(arg1 + 0x2d0) + 2) & 0x100) != 0)))) {
                                arg3 = &uStack_74;
                                fcn.0001e71c(arg1,&uStack_80,arg3);
                                if (uStack_74 != 0xffffffff) goto code_r0x0001699c;
                                goto code_r0x000172a6;
                            }
                        }
                        else {
code_r0x0001699c:
                            if (uStack_74 != 0) {
                                iStack_38 = 0;
                                uStack_80 = CONCAT71(uStack_80._1_7_,0xe);
                                var_27h._1_1_ = 0;
                                iVar4 = (**(*(arg1 + 0xb8) + 0x38))(*(arg1 + 0xb8),0,uStack_80,1,&var_27h + 1);
                                if (iVar4 < 0) {
                                    return iVar4;
                                }
                                if ((uStack_80._1_1_ == '\0') &&
                                   (uStack_6c = uStack_6c & 0xff, (var_27h._1_1_ & 0x80) != 0)) {
                                    uStack_6c = 1;
                                }
                                iVar4 = *(arg1 + 0xb8);
                                var_27h._1_1_ = var_27h._1_1_ & 3;
                                uStack_80 = CONCAT71(uStack_80._1_7_,8);
                                iVar5 = fcn.0001cd18(iVar4,uStack_80,0,auStack_60);
                                if (iVar5 < 0) {
                                    return iVar5;
                                }
                                pcVar15 = arg1;
                                if (var_27h._1_1_ == 0) {
                                    iVar4 = fcn.00016318(0,&uStack_80);
                                    if (iVar4 == 0) {
                                        return -0x7ffffffffffffff7;
                                    }
                                    *(iVar4 + 0x3b8) = *(arg1 + 0x3b8);
                                    if (cVar3 == '\0') {
                                        if (uStack_80._1_1_ == '\0') {
                                            if (uStack_6c != '\0') {
                                                iStack_58 = iVar4;
                                            }
                                            if (uStack_80._2_1_ == '\0') {
                                                iStack_48 = iVar4;
                                            }
                                        }
                                    }
                                    uVar18 = uStack_74;
                                    iStack_40 = iVar4;
                                    iVar5 = fcn.00016440(iVar4,arg1,uVar18,auStack_60[0]);
                                    if (iVar5 < 0) goto code_r0x00017393;
                                    if (((*(iVar4 + 0xee) == '\0') && (*(iVar4 + 0xef) == '\x06')) &&
                                       (*(iVar4 + 0xed) == '\0')) {
                                        *(iVar4 + 0xd0) = 4;
                                    }
                                    fcn.000127f0(iVar4);
                                    iVar5 = *(iVar4 + 0x300);
                                    if ((iVar5 != 0) && ((*(iVar5 + 0x3d) & 0x10) != 0)) {
                                        uVar18 = *(iVar4 + 0x318);
                                        fcn.0001d344(iVar4 + 0x390,iVar5,uVar18);
                                    }
                                    pcVar15 = NULL;
                                    iVar5 = fcn.0001d724(iVar4,2,uVar18,iVar4);
                                    if (-1 < iVar5) {
                                        *(iVar4 + 0x2fb) = 1;
                                    }
                                    if (*(iVar4 + 0x2fb) == '\0') {
                                        pcVar15 = NULL;
                                        iVar5 = fcn.000123d0(iVar4,2);
                                        if (iVar5 < 0) goto code_r0x00017393;
                                        iVar5 = fcn.00014014(iVar4);
                                        iVar16 = iStack_40;
                                        if (iVar5 < 0) goto code_r0x00017393;
                                        pcVar15 = NULL;
                                        piVar12 = iVar4 + 0x108;
                                        uVar18 = 0;
                                        uVar21 = 0;
                                        iVar4 = 7;
                                        do {
                                            iVar1 = piVar12[-2];
                                            if (((iVar1 != 0) && (*piVar12 != 0)) && (1 < iVar1)) {
                                                if (iVar1 < 4) {
                                                    pcVar15 = pcVar15 + *piVar12;
                                                }
                                                else if (iVar1 < 6) {
                                                    uVar18 = uVar18 + *piVar12;
                                                }
                                                else if (iVar1 < 8) {
                                                    uVar21 = uVar21 + *piVar12;
                                                }
                                            }
                                            piVar12 = piVar12 + 8;
                                            iVar4 = iVar4 + -1;
                                        } while (iVar4 != 0);
                                        iVar4 = iVar16;
                                        if (((0xfffe < pcVar15) || (0xfffffffe < uVar18)) || (0x3fffffffff < uVar21)) {
                                            uStack_74 = 0;
                                            uVar18 = 0x10;
                                            do {
                                                uStack_80 = CONCAT71(uStack_80._1_7_,uVar18);
                                                uVar20 = 0;
                                                pcVar15 = uStack_80;
                                                iVar5 = fcn.0001cd18(*(arg1 + 0xb8),uStack_80,1,&uStack_74);
                                                if (iVar5 < 0) goto code_r0x00017393;
                                                uVar18 = uVar18 + 4;
                                            } while (uVar18 < 0x34);
                                            uStack_80 = CONCAT71(uStack_80._1_7_,4);
                                            uVar18 = CONCAT71(uVar20 >> 8,1);
                                            pcVar15 = uStack_80;
                                            iVar5 = fcn.0001cc58(*(arg1 + 0xb8),uStack_80,uVar18,&uStack_74);
                                            if (iVar5 < 0) goto code_r0x00017393;
                                            puVar6 = iVar16 + 0xfc;
                                            iVar5 = 7;
                                            pcVar15 = NULL;
                                            do {
                                                puVar6[-1] = 0;
                                                *puVar6 = 0;
                                                *(puVar6 + 3) = 0;
                                                *(puVar6 + 5) = 0;
                                                puVar6 = puVar6 + 0x10;
                                                iVar5 = iVar5 + -1;
                                            } while (iVar5 != 0);
                                            *(iVar16 + 0x2ea) = 1;
                                            *(iVar16 + 0x2e8) = 1;
                                            *(iVar16 + 0xd4) = 0x1010101;
                                        }
                                        uVar10 = iVar16;
                                        cVar3 = fcn.0001dd94(uVar10);
                                        if (((cVar3 == '\0') || (*(iVar16 + 0xda) != '\0')) ||
                                           (*(iVar16 + 0xd9) != '\0')) {
                                            uVar14 = uStack_78;
                                        }
                                        else {
                                            pcVar15 = pcVar15 & 0xffffffffffffff00;
                                            acStack_88[0] = '\0';
                                            if (*(*(*(iVar16 + 0x2d0) + 0x20) + 0x11) == -2) {
                                                iVar5 = 0;
                                            }
                                            else {
                                                pcVar15 = acStack_88;
                                                iVar5 = fcn.0001de80(uVar10,pcVar15);
                                                pcVar15 = CONCAT71(pcVar15 >> 8,acStack_88[0]);
                                            }
                                            var_1fh_2._1_1_ = acStack_88[0];
                                            if (pcVar15 == '\0') {
                                                uVar18 = uStack_78;
                                            }
                                            else if (*(*(*(iVar16 + 0x2d0) + 0x58) + 5) == '\0') {
                                                pcVar15 = pcVar15 & 0xffffffffffffff00;
                                                uVar18 = CONCAT71(uVar18 >> 8,1);
                                                var_1fh_2._1_1_ = '\0';
                                                uStack_78 = uVar18;
                                            }
                                            else {
                                                uVar18 = uStack_78;
                                                if (*(iVar16 + 0x338) == 0) {
                                                    *(iVar16 + 0x338) = iVar16;
                                                    *(iVar16 + 0x340) = 8;
                                                }
                                            }
                                            uVar14 = uVar18;
                                            if (iVar5 < 0) goto code_r0x00017393;
                                        }
                                        if (var_1fh_2._1_1_ != '\0') {
                                            uStack_78 = uVar14;
                                            uStack_70 = *(*(*(iVar16 + 0x2d0) + 0x58) + 5);
                                            if (uStack_70 == 0) {
                                                uStack_78 = 1;
                                            }
                                        }
                                        if ((uStack_6c == '\0') && (var_1fh_2._1_1_ == '\0')) {
                                            *(iVar16 + 0x338) = 0;
                                            iStack_58 = 0;
                                        }
                                        fcn.00012a9c(uVar10);
                                        *(iVar16 + 0xd7) = 1;
                                        cVar3 = var_1fh_2._1_1_;
                                    }
                                    else {
                                        *(iVar4 + 0xd5) = 0x101;
                                        *(iVar4 + 0xd7) = 1;
                                        *(iVar4 + 0x2e8) = 1;
                                        iVar16 = iVar4;
                                    }
                                }
                                else {
                                    if (2 < var_27h._1_1_) {
                                        return -0x7ffffffffffffffd;
                                    }
                                    iVar4 = fcn.00016318(CONCAT71(iVar4 >> 8,1),&uStack_80);
                                    if (iVar4 == 0) {
                                        return -0x7ffffffffffffff7;
                                    }
                                    *(iVar4 + 0x3b8) = *(arg1 + 0x3b8);
                                    if (var_27h._1_1_ == 2) {
                                        *(iVar4 + 0xd0) = 3;
                                    }
                                    uStack_50 = uStack_50 & 0xff;
                                    if (cVar13 != '\0') {
                                        uStack_50 = *0x2394e;
                                    }
                                    if (cVar3 == '\0') {
                                        if (uStack_80._1_1_ == '\0') {
                                            if (uStack_6c != '\0') {
                                                iStack_58 = iVar4;
                                            }
                                            if (uStack_80._2_1_ == '\0') {
                                                iStack_48 = iVar4;
                                            }
                                        }
                                    }
                                    uVar18 = uStack_74;
                                    iVar5 = fcn.00016440(iVar4,arg1,uVar18,auStack_60[0]);
                                    if (iVar5 < 0) goto code_r0x00017393;
                                    fcn.000127f0(iVar4);
                                    iVar5 = *(iVar4 + 0x300);
                                    if ((iVar5 != 0) && ((*(iVar5 + 0x3d) & 0x10) != 0)) {
                                        uVar18 = *(iVar4 + 0x318);
                                        fcn.0001d344(iVar4 + 0x390,iVar5,uVar18);
                                    }
                                    iVar5 = fcn.0001d724(iVar4,2,uVar18,iVar4);
                                    if (-1 < iVar5) {
                                        *(iVar4 + 0x2fb) = 1;
                                    }
                                    if (*(iVar4 + 0x2fb) == '\0') {
                                        if (*(iVar4 + 0xd0) == 2) {
                                            fcn.000126d8(iVar4);
                                        }
                                        pcVar15 = NULL;
                                        iVar5 = fcn.000123d0(iVar4,2);
                                        if (iVar5 < 0) goto code_r0x00017393;
                                        iVar5 = fcn.00014014(iVar4);
                                        if (iVar5 < 0) goto code_r0x00017393;
                                    }
                                    else {
                                        *(iVar4 + 0xd5) = 0x101;
                                        *(iVar4 + 0xd7) = 1;
                                        *(iVar4 + 0x2e8) = 1;
                                    }
                                    uVar10 = iVar4;
                                    cVar2 = fcn.0001dd94(uVar10);
                                    if (cVar2 != '\0') {
                                        pcVar15 = *(iVar4 + 0x2d0);
                                        if ((((((*(pcVar15 + 2) & 0xf0) - 0x40 & 0xff9f) != 0) ||
                                             ((*(pcVar15 + 2) & 0xf0) == 0xa0)) && (*(iVar4 + 0xda) == '\0')) &&
                                           (*(iVar4 + 0xd9) == '\0')) {
                                            acStack_88[0] = '\0';
                                            if (*(*(pcVar15 + 0x20) + 0x11) == -2) {
                                                iVar5 = 0;
                                            }
                                            else {
                                                pcVar15 = acStack_88;
                                                iVar5 = fcn.0001de80(uVar10,pcVar15);
                                            }
                                            cVar3 = acStack_88[0];
                                            var_1fh_2._1_1_ = acStack_88[0];
                                            if (iVar5 < 0) goto code_r0x00017393;
                                        }
                                    }
                                    if ((uStack_6c == '\0') && (cVar3 == '\0')) {
                                        *(iVar4 + 0x338) = 0;
                                        iStack_58 = 0;
                                    }
                                    fcn.00012a9c(uVar10);
                                    pcVar15 = *0x23878;
                                    *(iVar4 + 0x3c8) = 1;
                                    *(iVar4 + 1000) = 0x19;
                                    pcVar19 = *0x23950;
                                    *0x2394e = *0x2394e + 1;
                                    pcVar11 = *0x2394e;
                                    if ((pcVar11 < pcVar15) || (*0x23950 < pcVar11)) {
                                        *0x23818 = 1;
                                        return -0x7ffffffffffffff7;
                                    }
                                    if (cVar13 != '\0') {
                                        *0x237d0 = pcVar11 + (*0x237d0 - pcVar15);
                                    }
                                    *(iVar4 + 0x3d0) = pcVar11;
                                    pcVar19 = pcVar19 + (1 - pcVar11);
                                    *(iVar4 + 0x3d8) = pcVar19;
                                    if (pcVar15 < *0x2394e) {
                                        pcVar15 = *0x2394e;
                                    }
                                    *0x23878 = pcVar15;
                                    iVar5 = fcn.0001ce98(iVar4);
                                    uVar14 = *0x2394e;
                                    if (iVar5 < 0) goto code_r0x00017393;
                                    uVar17 = *0x2394e;
                                    pcVar15 = CONCAT71(pcVar15 >> 8,*0x2394e);
                                    fcn.00021574(iVar4,pcVar15);
                                    if (*(iVar4 + 0xef) == '\x06') {
                                        pcVar15 = CONCAT71(pcVar15 >> 8,cVar13);
                                        iVar5 = fcn.0001682c(iVar4,pcVar15);
                                        if ((*0x23818 != '\0') && (iVar5 == -0x7ffffffffffffff7)) {
                                            fcn.00016738(iVar4,1);
                                            return -0x7ffffffffffffff7;
                                        }
                                        if ((iVar5 != -0x7ffffffffffffff2) && (iVar5 < 0)) goto code_r0x00017393;
                                    }
                                    if ((*(iVar4 + 0x2e0) == 0) ||
                                       ((fcn.000218c0(uVar10,pcVar15,pcVar19), *(iVar4 + 0xa58) != 0 ||
                                        (uVar18 = *(iVar4 + 0x598), uVar18 == 0)))) {
                                        uVar21 = *0x2394e;
                                    }
                                    else {
                                        uVar21 = *0x2394e;
                                        if (uVar21 - *(iVar4 + 0x3d0) < uVar18) {
                                            uVar9 = uVar18 + uVar14;
                                            uVar21 = uVar9;
                                            *0x2394e = uVar9;
                                        }
                                    }
                                    pcVar15 = uVar21 & 0xff;
                                    if ((pcVar15 < *0x23878) || (*0x23950 < pcVar15)) {
                                        if (uVar14 < uVar21) {
                                            iVar4 = (uVar21 & 0xff) - uVar17;
                                        }
                                        else {
                                            iVar4 = *(iVar4 + 0x598);
                                        }
                                        *0x23798 = *0x23798 + iVar4;
                                        *0x23818 = 1;
                                        return -0x7ffffffffffffff7;
                                    }
                                    if (cVar13 != '\0') {
                                        *0x237d0 = pcVar15 + (*0x237d0 - *0x23878);
                                    }
                                    pcVar15 = pcVar15 + (1 - *(iVar4 + 0x3d0));
                                    *(iVar4 + 0x3d8) = pcVar15;
                                    if (*0x23878 < *0x2394e) {
                                        *0x23878 = *0x2394e;
                                    }
                                    if (cVar13 == '\0') {
                                        pcVar15 = NULL;
                                        auStack_68[0] = *0x2394e;
                                        iStack_40 = CONCAT71(*(iVar4 + 0xd8) >> 8,0x1a);
                                        iVar5 = (**(*(iVar4 + 0xb8) + 0x40))
                                                          (*(iVar4 + 0xb8),0,iStack_40,1,auStack_68);
                                    }
                                    else {
                                        iVar5 = fcn.0001cf74(iVar4);
                                        *0x2394e = uStack_50;
                                        *0x23878 = uStack_50 & 0xff;
                                    }
                                    if (iVar5 < 0) goto code_r0x00017393;
                                    if ((*(iVar4 + 0x396) == '\0') && (*(iVar4 + 0x2d0) != 0)) {
                                        pcVar15 = 0xff9f;
                                        uVar8 = *(*(iVar4 + 0x2d0) + 2) & 0xf0;
                                        if (((uVar8 - 0x40 & 0xff9f) == 0) && (uVar8 != 0xa0)) {
                                            iVar5 = fcn.0001f80c(uVar10);
                                            if (iVar5 < 0) goto code_r0x00017393;
                                        }
                                        else if ((uVar8 - 0x50 & 0xffdf) == 0) {
                                            iVar5 = fcn.0001bf1c(0x23908);
                                            if (iVar5 < 0) {
                                                iVar5 = -0x7ffffffffffffff7;
                                                goto code_r0x00017393;
                                            }
                                            *(*0x23918 + *0x23910 * 8) = iVar4;
                                            *0x23910 = *0x23910 + 1;
                                        }
                                    }
                                    *(iVar4 + 0xd7) = 1;
                                    iVar16 = iVar4;
                                    cVar3 = var_1fh_2._1_1_;
                                }
                                iVar4 = fcn.0001bf1c(arg1 + 0xa68);
                                if (iVar4 < 0) {
                                    iVar5 = -0x7ffffffffffffff7;
                                    iVar4 = iVar16;
code_r0x00017393:
                                    if (*(iVar4 + 0x2d0) != 0) {
                                        if (*(*(iVar4 + 0x2d0) + 0x20) != 0) {
                                            (**(*0x238a8 + 0x48))();
                                        }
                                        iVar16 = *(*(iVar4 + 0x2d0) + 0x40);
                                        if (iVar16 != 0) {
                                            if (*(iVar16 + 0x18) != 0) {
                                                fcn.0001c088(iVar16 + 0x10,CONCAT71(pcVar15 >> 8,1));
                                            }
                                            (**(*0x238a8 + 0x48))(*(*(iVar4 + 0x2d0) + 0x40));
                                        }
                                        if (*(*(iVar4 + 0x2d0) + 0x48) != 0) {
                                            (**(*0x238a8 + 0x48))();
                                        }
                                        if (*(*(iVar4 + 0x2d0) + 0x58) != 0) {
                                            (**(*0x238a8 + 0x48))();
                                        }
                                        if (*(*(iVar4 + 0x2d0) + 0x60) != 0) {
                                            (**(*0x238a8 + 0x48))();
                                        }
                                        if (*(*(iVar4 + 0x2d0) + 0x68) != 0) {
                                            (**(*0x238a8 + 0x48))();
                                        }
                                        if (*(*(iVar4 + 0x2d0) + 0x70) != 0) {
                                            (**(*0x238a8 + 0x48))();
                                        }
                                        uVar10 = iVar4;
                                        cVar3 = fcn.0001dc1c(uVar10);
                                        if (cVar3 != '\0') {
                                            (**(*0x238a8 + 0x48))(*(*(iVar4 + 0x2d0) + 0x28));
                                        }
                                        cVar3 = fcn.0001db90(uVar10);
                                        if (cVar3 != '\0') {
                                            (**(*0x238a8 + 0x48))(*(*(iVar4 + 0x2d0) + 0x30));
                                        }
                                        cVar3 = fcn.0001db00(uVar10);
                                        if (cVar3 != '\0') {
                                            (**(*0x238a8 + 0x48))(*(*(iVar4 + 0x2d0) + 0x38));
                                        }
                                        (**(*0x238a8 + 0x48))(*(iVar4 + 0x2d0));
                                    }
                                    if (*(iVar4 + 0x2d8) != 0) {
                                        (**(*0x238a8 + 0x48))();
                                    }
                                    if (*(iVar4 + 0x2e0) != 0) {
                                        (**(*0x238a8 + 0x48))();
                                    }
                                    (**(*0x238a8 + 0x48))(iVar4);
                                    return iVar5;
                                }
                                in_R8 = uStack_78;
                                *(*(arg1 + 0xa78) + *(arg1 + 0xa70) * 8) = iVar16;
                                *(arg1 + 0xa70) = *(arg1 + 0xa70) + 1;
                                uVar14 = uStack_80._2_1_;
                                if ((uStack_6c != '\0') || ((cVar3 != '\0' && (uStack_78 == '\0'))))
                                goto code_r0x00016929;
                                break;
                            }
code_r0x000172a6:
                            uVar14 = uStack_80._2_1_;
                            uVar7 = uStack_80._1_1_;
                        }
                        if (uStack_6c == '\0') {
                            if (cVar3 == '\0') {
                                in_R8 = uStack_78;
                                break;
                            }
                            if ((uStack_70 >> 3 == uVar14) && ((uStack_70 & 7) == uVar7)) {
                                in_R8 = CONCAT71(arg3 >> 8,1);
                                uStack_78 = in_R8;
                                break;
                            }
                        }
                        in_R8 = uStack_78;
                    }
                }
                uVar7 = uVar7 + 1;
                uStack_80 = CONCAT61(uStack_80._2_6_,uVar7) << 8;
            } while (uVar7 < 8);
        }
        uVar14 = uVar14 + 1;
        uStack_80 = CONCAT51(uStack_80._3_5_,uVar14) << 0x10;
        if (0x1f < uVar14) {
            return iStack_38;
        }
    } while( true );
}


/* fcn.000218c0 @ 0x218c0 */

int64_t fcn.000218c0(uint32_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t *piVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint *puVar6;
    int64_t *piVar7;
    char *pcVar8;
    char *pcStackX_8;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar5 + 0xd0) - 1U < 3) &&
       ((iVar4 = *(iVar5 + 0x2e0), iVar4 != 0 || ((arg2 = 0, *(iVar5 + 0x396) == '\0' && (*(iVar5 + 0x2d0) != 0))))))
    {
        pcStackX_8 = NULL;
        arg2 = *(iVar4 + 0x18);
        iVar3 = *(*(iVar5 + 200) + 0x60);
        iVar4 = (**(iVar3 + 0x10))(iVar3,**(iVar4 + 8),arg2,iVar4 + 0x22,&pcStackX_8,iVar5 + 0xa58);
        if (iVar4 < 0) {
            return iVar4;
        }
        if (*(iVar5 + 0xa58) == 1) {
            (**(*0x238a8 + 0x48))(pcStackX_8);
            return iVar4;
        }
        if ((pcStackX_8 == NULL) || (pcVar8 = pcStackX_8, iVar4 = fcn.0001da68(pcStackX_8,2), iVar4 == 0)) {
            return -0x7ffffffffffffffe;
        }
        if (*pcVar8 != 'y') {
            arg2 = 6;
            piVar7 = pcVar8 + 6;
            do {
                cVar2 = *(piVar7 + -3);
                if (cVar2 == '\0') {
                    if (*piVar7 == 0x20) {
                        if ((*(piVar7 + -1) & 6) == 6) {
                            puVar6 = iVar5 + 0x688;
                            *puVar6 = 5;
                        }
                        else {
                            puVar6 = iVar5 + 0x648;
                            *puVar6 = 4;
                        }
                    }
                    else {
                        if (*piVar7 != 0x40) break;
                        if ((*(piVar7 + -1) & 6) == 6) {
                            puVar6 = iVar5 + 0x708;
                            *puVar6 = 7;
                        }
                        else {
                            puVar6 = iVar5 + 0x6c8;
                            *puVar6 = 6;
                        }
                    }
                }
                else if (cVar2 == '\x01') {
                    puVar6 = iVar5 + 0x5c8;
                    *puVar6 = 2;
                    if (*piVar7 == 0x20) {
                        puVar6 = iVar5 + 0x608;
                        *puVar6 = 3;
                    }
                }
                else {
                    if (cVar2 != '\x02') break;
                    puVar6 = iVar5 + 0x588;
                }
                *(puVar6 + 4) = piVar7[4];
                *(puVar6 + 6) = piVar7[2];
                piVar1 = piVar7 + 5;
                piVar7 = piVar7 + 0x2e;
            } while (*piVar1 != 'y');
        }
        (**(*0x238a8 + 0x48))(pcVar8);
    }
    iVar5 = fcn.0001d724(iVar5,0xf,arg2,iVar5);
    if ((iVar5 < 0) && (iVar5 == -0x7ffffffffffffffd)) {
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.0001f80c @ 0x1f80c */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h
//WARNING: Removing unreachable block (ram,0x0001fbb7)
//WARNING: Removing unreachable block (ram,0x0001fbe9)
//WARNING: Removing unreachable block (ram,0x0001fbfc)
//WARNING: Removing unreachable block (ram,0x0001fc00)
//WARNING: Removing unreachable block (ram,0x0001fc15)
//WARNING: Removing unreachable block (ram,0x0001fc1e)
//WARNING: Removing unreachable block (ram,0x0001fc28)
//WARNING: Removing unreachable block (ram,0x0001fc31)
//WARNING: Removing unreachable block (ram,0x0001fc64)
//WARNING: Removing unreachable block (ram,0x0001fc8c)
//WARNING: Removing unreachable block (ram,0x0001fc8f)
//WARNING: Removing unreachable block (ram,0x0001fc95)
//WARNING: Removing unreachable block (ram,0x0001fcff)
//WARNING: Removing unreachable block (ram,0x0001fe24)

int64_t fcn.0001f80c(uint32_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    bool bVar3;
    char cVar4;
    ulong *arg1_00;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint in_register_0000000c;
    uint64_t uVar8;
    uint64_t arg3;
    char cVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    ulong uVar12;
    uint64_t uVar13;
    ushort uVar14;
    uint32_t uVar15;
    uint16_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    char cStackX_10;
    uint32_t var_50h;
    uint32_t var_58h;
    uint32_t var_60h;
    uint16_t auStackY_74 [2];
    uint16_t auStackY_70 [2];
    uint16_t auStackY_6c [2];
    uint16_t in_stack_ffffffffffffff98;
    ushort in_stack_ffffffffffffff9a;
    uint16_t uVar19;
    ushort in_stack_ffffffffffffff9e;
    uint32_t uStack_60;
    ulong *arg_60h;
    int64_t in_stack_ffffffffffffffb0;
    uint32_t var_38h;
    int8_t var_34h;
    int8_t var_30h;
    int16_t var_2ch;
    int16_t var_28h;
    int16_t var_24h;
    int16_t var_20h;
    int64_t var_18h;
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    uVar18 = 0;
    cVar9 = '\0';
    uVar19 = 0;
    uStack_60 = 0;
    if (iVar7 == 0) {
        return -0x7ffffffffffffffe;
    }
    if ((*(iVar7 + 0x396) != '\0') || (*(iVar7 + 0x2d0) == 0)) {
        return 0;
    }
    if (*(iVar7 + 0xa70) != 0) {
        if (*(*(iVar7 + 0x2d0) + 0x8b) != '\x02') {
            cStackX_10 = fcn.0001dd94(arg1);
            arg1_00 = fcn.0001bc6c(0x18);
            if (arg1_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            *arg1_00 = *(iVar7 + 0xa68);
            arg_60h = arg1_00;
            if (*(iVar7 + 0xa68) != 0) {
                iVar5 = fcn.0001bc6c(*(iVar7 + 0xa68) << 3);
                arg1_00[2] = iVar5;
                if (iVar5 == 0) {
                    return -0x7ffffffffffffff7;
                }
                (**(*0x238a8 + 0x160))(iVar5,*(iVar7 + 0xa78));
                arg1_00[1] = *(iVar7 + 0xa70);
            }
            uVar17 = uVar18;
            while (arg3 = uVar18, uVar17 < arg1_00[1]) {
                bVar2 = false;
                bVar3 = false;
                iVar5 = 0;
                arg3 = *(arg1_00[2] + uVar17 * 8);
                if (*(arg3 + 0x396) != '\0') {
                    return 0;
                }
                if (*(arg3 + 0x2d0) == 0) {
                    return 0;
                }
                uVar8 = arg3;
                cVar4 = fcn.0001ce58(arg3);
                if (cVar4 != '\0') {
                    if ((*(arg3 + 0x338) == iVar5) || ((*(arg3 + 0x340) == iVar5 && (*(arg3 + 0x348) == iVar5)))) {
                        cVar9 = iVar5;
                    }
                    else {
                        cVar9 = '\x01';
                    }
                    cVar4 = fcn.0001dd94(uVar8);
                    if ((cVar4 == '\0') || (cStackX_10 != '\x01')) {
                        cStackX_10 = iVar5;
                    }
                    else {
                        iVar5 = fcn.0001dfe4(iVar7,auStackY_70,arg3,auStackY_74,arg_60h,in_stack_ffffffffffffffb0);
                        if (iVar5 < 0) {
                            return iVar5;
                        }
                    }
                    iVar5 = fcn.0001f3c4(iVar7,&stack0xffffffffffffff98,arg3,auStackY_6c,
                                         CONCAT26(in_stack_ffffffffffffff9e,
                                                  CONCAT24(uVar19,CONCAT22(in_stack_ffffffffffffff9a,
                                                                            in_stack_ffffffffffffff98))));
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                    iVar5 = *(*(arg3 + 0x2d0) + 0x58);
                    if ((iVar5 != 0) && (bVar2 = false, (*(iVar5 + 4) & 0xff00) == 0)) {
                        bVar2 = true;
                    }
                    iVar5 = fcn.0001c044(arg1_00,uVar17);
                    if (iVar5 < 0) {
                        return iVar5;
                    }
                    uVar18 = arg3;
                    bVar3 = bVar2;
                    if (!bVar2) break;
                }
                uVar17 = uVar17 + 1;
                if (bVar3) {
                    uVar17 = 0;
                }
            }
            uVar18 = 0;
            if ((arg3 == 0) || (uVar17 = *(arg3 + 0x348), arg1_00[1] != uVar17)) {
                return -0x7ffffffffffffff9;
            }
            if ((*(*(arg3 + 0x2d0) + 0x58) == 0) && (cVar9 == '\x01')) {
                uVar8 = auStackY_6c[0];
                if (((auStackY_6c[0] & 0x100) != 0) && (uVar17 != 0)) {
                    piVar11 = *(arg3 + 0x350);
                    uVar13 = uVar18;
                    do {
                        if ((*(*(*piVar11 + 0x2d0) + 8) & 0x40000) == 0) {
                            auStackY_6c[0] = auStackY_6c[0] & 0xfeff;
                            uVar8 = auStackY_6c[0];
                            break;
                        }
                        uVar13 = uVar13 + 1;
                        piVar11 = piVar11 + 1;
                    } while (uVar13 < uVar17);
                }
                if (*(arg3 + 0x348) != 0) {
                    do {
                        iVar5 = *(*(arg3 + 0x350) + uVar18 * 8);
                        if ((*(iVar5 + 0x396) == '\0') && (*(iVar5 + 0x2d0) != 0)) {
                            uVar12 = 0;
                            iVar6 = fcn.0001ee48(iVar5,uVar8,0);
                            if (iVar6 < 0) {
                                return iVar6;
                            }
                            if ((cStackX_10 != '\0') &&
                               (iVar5 = fcn.0001ee48(iVar5,auStackY_74[0],CONCAT71(uVar12 >> 8,1)), iVar5 < 0)) {
                                return iVar5;
                            }
                            uVar8 = auStackY_6c[0];
                        }
                        uVar18 = uVar18 + 1;
                    } while (uVar18 < *(arg3 + 0x348));
                }
            }
            else {
                uVar8 = auStackY_6c[0];
            }
            uVar12 = 0;
            iVar5 = fcn.0001ee48(arg3,uVar8,0);
            if (iVar5 < 0) {
                return iVar5;
            }
            if ((cStackX_10 != '\0') &&
               (iVar5 = fcn.0001ee48(arg3,auStackY_74[0],CONCAT71(uVar12 >> 8,1)), iVar5 < 0)) {
                return iVar5;
            }
            uVar12 = 0;
            iVar5 = fcn.0001ee48(iVar7,in_stack_ffffffffffffff98,0);
            if (iVar5 < 0) {
                return iVar5;
            }
            if ((cStackX_10 != '\0') &&
               (iVar5 = fcn.0001ee48(iVar7,auStackY_70[0],CONCAT71(uVar12 >> 8,1)), iVar5 < 0)) {
                return iVar5;
            }
            if (cStackX_10 != '\0') {
                *(*(*(iVar7 + 0x2d0) + 0x20) + 0xd) = auStackY_70[0] & 0xf;
                *(*(*(arg3 + 0x2d0) + 0x20) + 0xd) = auStackY_74[0] & 0xf;
            }
            *(*(iVar7 + 0x2d0) + 0x12) = 1;
            *(*(arg3 + 0x2d0) + 0x12) = 1;
            uVar10 = *(*(iVar7 + 0x2d0) + 8);
            uVar16 = *(*(iVar7 + 0x2d0) + 4) & 7;
            if ((uVar10 >> 10 & 1) == 0) {
                uVar15 = uVar19;
            }
            else {
                uVar15 = uVar10 >> 0xc & 0xffff0007;
                uVar19 = uVar15;
            }
            if ((uVar10 >> 0xb & 1) != 0) {
                uStack_60 = uVar10 >> 0xf & 0xffff0007;
            }
            iVar6 = *(arg3 + 0x2d0);
            if ((*(iVar6 + 4) & 7) < uVar16) {
                uVar16 = *(iVar6 + 4) & 7;
            }
            uVar10 = *(iVar6 + 8) >> 0xc;
            if ((uVar15 & 0xffff) < (uVar10 & 7)) {
                uVar19 = uVar10 & 7;
                uVar15 = uVar19;
            }
            uVar14 = uVar15;
            uVar10 = *(iVar6 + 8) >> 0xf;
            if ((uStack_60 & 0xffff) < (uVar10 & 7)) {
                uStack_60._0_2_ = uVar10 & 7;
            }
            uVar18 = 0;
            if (*(arg3 + 0x348) != 0) {
                do {
                    iVar6 = *(*(arg3 + 0x350) + uVar18 * 8);
                    if ((*(iVar6 + 0x396) == '\0') && (*(iVar6 + 0x2d0) != 0)) {
                        *(*(iVar6 + 0x2d0) + 0x12) = 1;
                        if (cStackX_10 != '\0') {
                            *(*(*(iVar6 + 0x2d0) + 0x20) + 0xd) = auStackY_74[0] & 0xf;
                        }
                        iVar1 = *(iVar6 + 0x2d0);
                        if ((*(iVar1 + 4) & 7) < uVar16) {
                            uVar16 = *(iVar1 + 4) & 7;
                        }
                        uVar15 = uVar19;
                        *(iVar1 + 0x18) = uVar19;
                        *(*(iVar6 + 0x2d0) + 0x1a) = uStack_60;
                    }
                    uVar14 = uVar15;
                    uVar18 = uVar18 + 1;
                } while (uVar18 < *(arg3 + 0x348));
                arg1_00 = arg_60h;
            }
            *(*(arg3 + 0x2d0) + 0x16) = uVar16;
            *(*(arg3 + 0x2d0) + 0x18) = uVar14;
            *(*(arg3 + 0x2d0) + 0x1a) = uStack_60;
            *(*(iVar7 + 0x2d0) + 0x16) = uVar16;
            *(*(iVar7 + 0x2d0) + 0x18) = uVar14;
            *(*(iVar7 + 0x2d0) + 0x1a) = uStack_60;
            if (arg1_00[2] != 0) {
                (**(*0x238a8 + 0x48))();
            }
            iVar7 = *0x23890;
            arg1_00[2] = 0;
            arg1_00[1] = 0;
            *arg1_00 = 0;
            (**(iVar7 + 0x48))(arg1_00);
            return iVar5;
        }
        if (*(iVar7 + 0xa70) != 0) {
            iVar5 = 1;
            goto code_r0x0001ff21;
        }
    }
    iVar5 = 0;
code_r0x0001ff21:
    iVar7 = fcn.0001ed94(iVar7,iVar5);
    return iVar7;
}


/* fcn.000125f0 @ 0x125f0 */

int64_t fcn.000125f0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t extraout_RAX_02;
    uint64_t uVar2;
    unkbyte7 Var3;
    int64_t iStackX_10;
    int64_t var_28h;
    int64_t var_38h;
    
    Var3 = arg3 >> 8;
    if ((arg2 == 0) && (arg3 == 0)) {
        iVar1 = 0;
    }
    else {
        var_28h = arg2 >> 0x10;
        iStackX_10._1_7_ = *(arg1 + 0xd8) >> 8;
        iStackX_10 = CONCAT71(iStackX_10._1_7_,0x24);
        fcn.0001cc58(*(arg1 + 0xb8),iStackX_10,CONCAT71(Var3,1),&var_28h);
        iVar1 = extraout_RAX;
        if (-1 < extraout_RAX) {
            iStackX_10 = CONCAT71(iStackX_10._1_7_,0x26);
            uVar2 = arg3 + -1 + arg2;
            var_28h = uVar2 >> 0x10;
            fcn.0001cc58(*(arg1 + 0xb8),iStackX_10,CONCAT71(Var3,1),&var_28h);
            iVar1 = extraout_RAX_00;
            if (-1 < extraout_RAX_00) {
                var_28h = arg2 >> 0x20;
                iStackX_10 = CONCAT71(iStackX_10._1_7_,0x28);
                fcn.0001cd18(*(arg1 + 0xb8),iStackX_10,CONCAT71(Var3,1),&var_28h);
                iVar1 = extraout_RAX_01;
                if (-1 < extraout_RAX_01) {
                    var_28h = uVar2 >> 0x20;
                    iStackX_10 = CONCAT71(iStackX_10._1_7_,0x2c);
                    fcn.0001cd18(*(arg1 + 0xb8),iStackX_10,CONCAT71(Var3,1),&var_28h);
                    iVar1 = extraout_RAX_02;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.000124e8 @ 0x124e8 */

int64_t fcn.000124e8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iStackX_10;
    int64_t var_28h;
    int64_t var_38h;
    
    if ((arg2 == 0) && (arg3 == 0)) {
        iVar1 = 0;
    }
    else {
        iStackX_10._1_7_ = *(arg1 + 0xd8) >> 8;
        iStackX_10 = CONCAT71(iStackX_10._1_7_,0x1c);
        var_28h = arg2 >> 8;
        iVar3 = iStackX_10;
        iVar1 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_10,1,&var_28h);
        if (-1 < iVar1) {
            iStackX_10 = CONCAT71(iStackX_10._1_7_,0x30);
            var_28h = arg2 >> 0x10;
            iVar1 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_10,CONCAT71(iVar3 >> 8,1),&var_28h);
            if (-1 < iVar1) {
                iStackX_10 = CONCAT71(iStackX_10._1_7_,0x1d);
                uVar2 = arg2 + -1 + arg3;
                var_28h = uVar2 >> 8;
                iVar3 = iStackX_10;
                iVar1 = (**(*(arg1 + 0xb8) + 0x40))(*(arg1 + 0xb8),0,iStackX_10,1,&var_28h);
                if (-1 < iVar1) {
                    var_28h = uVar2 >> 0x10;
                    iStackX_10 = CONCAT71(iStackX_10._1_7_,0x32);
                    iVar1 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_10,CONCAT71(iVar3 >> 8,1),&var_28h);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00017534 @ 0x17534 */

//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00017534(int64_t arg1)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong in_R8;
    unkbyte7 Var7;
    int64_t arg3;
    ulong uVar6;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    
    iVar3 = *(arg1 + 0x38);
    uVar1 = *(arg1 + 0x20);
    uStackX_10._1_7_ = *(iVar3 + 0xd8) >> 8;
    uStackX_10 = CONCAT71(uStackX_10._1_7_,uVar1);
    uStackX_10 = CONCAT24(*(arg1 + 0x30),uStackX_10);
    Var7 = in_R8 >> 8;
    if ((*(iVar3 + 0xd0) != 2) || (0x22 < uVar1 - 0x15)) {
        if ((*(iVar3 + 0xd0) != 3) || (uVar1 < 0x11)) {
            uStackX_8 = *(arg1 + 8);
            if (1 < *(arg1 + 4) - 6U) {
                iVar3 = fcn.0001cd18(*(iVar3 + 0xb8),uStackX_10,CONCAT71(Var7,1),&uStackX_8);
                return iVar3;
            }
            if (*arg1 - 4U < 2) {
                uStackX_8 = uStackX_8 & 0xffffffff;
            }
            iVar3 = fcn.0001cdb4(*(iVar3 + 0xb8),uStackX_10,CONCAT71(Var7,1),&uStackX_8);
            return iVar3;
        }
        iVar4 = CONCAT71(Var7,1);
        uStackX_8._0_4_ = *(arg1 + 8);
        iVar5 = fcn.0001cd18(*(iVar3 + 0xb8),uStackX_10,iVar4,&uStackX_8);
        if (iVar5 < 0) {
            return iVar5;
        }
        uStackX_10 = CONCAT71(uStackX_10._1_7_,uVar1 + 4);
        uStackX_8._0_4_ = *(arg1 + 0x10) + *(arg1 + 8) + -1;
        iVar5 = fcn.0001cd18(*(iVar3 + 0xb8),uStackX_10,CONCAT71(iVar4 >> 8,1),&uStackX_8);
        if (-1 < iVar5) {
            if ((*arg1 - 5U & 0xfffffffd) != 0) {
                return iVar5;
            }
            uStackX_10 = CONCAT71(uStackX_10._1_7_,0x3e);
            uVar6 = 0;
            iVar5 = fcn.0001cc58(*(iVar3 + 0xb8),uStackX_10,0,&uStackX_8);
            if (iVar5 < 0) {
                return iVar5;
            }
            if (*(arg1 + 0x20) == '\x1c') {
                uStackX_8._0_4_ = uStackX_8 | 0x100;
            }
            if (*(arg1 + 0x20) == '$') {
                uStackX_8._0_4_ = uStackX_8 | 0x200;
            }
            iVar3 = fcn.0001cc58(*(iVar3 + 0xb8),uStackX_10,CONCAT71(uVar6 >> 8,1),&uStackX_8);
            if (iVar3 < 0) {
                return iVar3;
            }
            return iVar3;
        }
        return iVar5;
    }
    if (*arg1 < 2) {
        return 0;
    }
    if (*arg1 < 4) {
        iVar3 = fcn.000124e8(iVar3,*(arg1 + 8),*(arg1 + 0x10));
        return iVar3;
    }
    if (*arg1 == 4) {
code_r0x000175be:
        iVar5 = *(arg1 + 0x10);
        uVar2 = *(arg1 + 8);
        if ((uVar2 == 0) && (iVar5 == 0)) {
            return 0;
        }
        arg3 = CONCAT71(Var7,1);
        uStackX_10 = uVar2 >> 0x10;
        uStackX_8._1_7_ = *(iVar3 + 0xd8) >> 8;
        uStackX_8 = CONCAT71(uStackX_8._1_7_,0x20);
        iVar4 = fcn.0001cc58(*(iVar3 + 0xb8),uStackX_8,arg3,&uStackX_10);
        if (iVar4 < 0) {
            return iVar4;
        }
        uStackX_8 = CONCAT71(uStackX_8._1_7_,0x22);
        uStackX_10 = iVar5 + -1 + uVar2 >> 0x10;
        iVar3 = fcn.0001cc58(*(iVar3 + 0xb8),uStackX_8,CONCAT71(arg3 >> 8,1),&uStackX_10);
    }
    else {
        if (*arg1 != 5) {
            if (*arg1 == 6) goto code_r0x000175be;
            if (*arg1 != 7) {
                return 0;
            }
        }
        iVar3 = fcn.000125f0(iVar3,*(arg1 + 8),*(arg1 + 0x10));
    }
    return iVar3;
}


/* fcn.00017888 @ 0x17888 */

uint64_t fcn.00017888(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int *in_RAX;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if (*(iVar3 + 0xa70) != 0) {
        do {
            iVar1 = *(*(iVar3 + 0xa78) + uVar4 * 8);
            if ((*(iVar1 + 0xd0) - 1U < 3) && (uVar2 = fcn.00017888(iVar1,arg2 & 0xffffffff), uVar2 != '\0')) {
                return uVar2;
            }
            uVar2 = 0;
            in_RAX = iVar1 + 0xf8;
            do {
                if (*in_RAX == arg2) {
                    return CONCAT71(in_RAX >> 8,1);
                }
                uVar2 = uVar2 + 1;
                in_RAX = in_RAX + 0x10;
            } while (uVar2 < 7);
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(iVar3 + 0xa70));
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00017914 @ 0x17914 */

void fcn.00017914(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    char cVar1;
    int *piVar2;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char cVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    bool bVar13;
    uint32_t uStackX_8;
    uint32_t uStack_24;
    
    cVar9 = arg4;
    iVar3 = arg2;
    cVar1 = '\0';
    uVar5 = arg3;
    if (iVar3 == 8) {
        uVar10 = 2;
        uVar8 = 3;
        uStack_24 = 3;
        uVar12 = 1;
        if (*(arg1 + 0xd0) == 3) {
            uVar12 = 3;
        }
code_r0x000179ab:
        uStackX_8 = uVar12;
    }
    else {
        if (iVar3 != 9) {
            if (iVar3 != 10) {
                return;
            }
            uVar8 = 7;
            uVar10 = 5;
            uStack_24 = 7;
            uVar12 = (*(arg1 + 0xd0) == 3) + 1;
            goto code_r0x000179ab;
        }
        uVar10 = 4;
        uStackX_8 = 2;
        uVar12 = 2;
        uVar8 = 6;
        uStack_24 = 6;
    }
    uVar6 = arg2;
    uVar11 = uVar10;
    if (uVar5 == 0) {
        cVar1 = '\x01';
    }
    else {
        if (uVar5 == 1) {
            uVar6 = uVar10;
        }
        else {
            if (uVar5 != 2) {
                if (uVar5 == 3) {
                    cVar1 = '\0';
                }
                goto code_r0x000179eb;
            }
            uVar6 = uVar8;
        }
        cVar1 = fcn.00017888(arg1,uVar6);
        uVar6 = arg2 & 0xffffffff;
    }
code_r0x000179eb:
    if ((*(arg1 + 0x698) != 0) && (cVar9 != '\0')) {
        *(arg1 + 0x658) = *(arg1 + 0x658) + *(arg1 + 0x698);
        *(arg1 + 0x698) = 0;
    }
    if ((*(arg1 + 0x718) != 0) && (cVar9 != '\0')) {
        *(arg1 + 0x6d8) = *(arg1 + 0x6d8) + *(arg1 + 0x718);
        *(arg1 + 0x718) = 0;
    }
    if (((*(arg1 + 0x300) != 0) && (*(arg1 + 0x2fe) != '\0')) && (*0x23900 == '\0')) {
        uVar7 = 0;
        piVar2 = *(arg1 + 0x300) + 0x69;
        do {
            if (*(piVar2 + 3) != 0) {
                iVar3 = uVar6;
                if (iVar3 == 8) {
                    if (*piVar2 == 0x1c) {
                        bVar13 = *(piVar2 + 1) < 0x10000;
code_r0x00017a81:
                        uVar5 = (-bVar13 & 0xfffffffd) + 4;
                        goto code_r0x00017ac9;
                    }
                }
                else if (iVar3 == 9) {
                    if (*piVar2 == 0x20) {
                        uVar5 = -(*(piVar2 + 1) < 0x100000000) & 2;
                        goto code_r0x00017ac9;
                    }
                }
                else {
                    if (iVar3 != 10) break;
                    if (*piVar2 == 0x24) {
                        bVar13 = *(piVar2 + 1) < 0x100000000;
                        goto code_r0x00017a81;
                    }
                }
            }
            uVar7 = uVar7 + 1;
            piVar2 = piVar2 + 6;
            if (6 < uVar7) goto code_r0x00017ac7;
            uVar6 = arg2 & 0xffffffff;
        } while( true );
    }
code_r0x00017acc:
    uVar6 = 0;
    if (*(arg1 + 0xa70) != 0) {
        do {
            iVar4 = 6;
            arg1_00 = *(*(arg1 + 0xa78) + uVar6 * 8);
            piVar2 = arg1_00 + 0xf8;
            do {
                if (cVar9 != '\0') {
                    if (*piVar2 == 5) {
                        *piVar2 = 4;
                    }
                    if (*piVar2 == 7) {
                        *piVar2 = 6;
                    }
                }
                if (cVar1 != '\0') {
                    if (uVar5 == 0) {
                        if (*piVar2 != uVar8) {
code_r0x00017b38:
                            if (*piVar2 != uVar11) goto code_r0x00017b4f;
                        }
                        *piVar2 = 0;
                        piVar2[6] = 0;
                        piVar2[7] = 0;
                        piVar2[4] = 0;
                        piVar2[5] = 0;
                        piVar2[2] = 0;
                        piVar2[3] = 0;
                    }
                    else if (0 < uVar5) {
                        if (uVar5 < 3) {
                            if (*piVar2 == uVar8) {
                                *piVar2 = uVar11;
                            }
                        }
                        else if (uVar5 == 4) goto code_r0x00017b38;
                    }
                }
code_r0x00017b4f:
                piVar2 = piVar2 + 0x10;
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (*(arg1_00 + 0xd0) - 2U < 2) {
                uVar8 = uVar5;
                if (cVar1 == '\0') {
                    uVar8 = uVar12 & 0xffffffff;
                }
                fcn.00017914(arg1_00,arg2 & 0xffffffff,uVar8,CONCAT71(uVar11 >> 8,cVar9));
            }
            uVar12 = uStackX_8;
            uVar6 = uVar6 + 1;
            uVar8 = uStack_24;
            uVar11 = uVar10;
        } while (uVar6 < *(arg1 + 0xa70));
    }
    return;
code_r0x00017ac7:
    uVar5 = 0;
code_r0x00017ac9:
    cVar1 = '\x01';
    goto code_r0x00017acc;
}


/* fcn.000177a0 @ 0x177a0 */

int64_t fcn.000177a0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    bool bVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    
    iVar6 = arg2;
    uVar4 = *(iVar6 * 0x40 + 0x3d0 + arg1);
    iVar1 = *(arg1 + 0x9b8 + iVar6 * 0x18);
    uVar7 = *(iVar6 * 0x40 + 0x3d8 + arg1) + uVar4;
    iVar3 = 0;
    if (iVar1 != 0) {
        iVar5 = 0;
        iVar3 = -0x7ffffffffffffff2;
        if (0 < iVar1) {
            do {
                if (uVar7 <= uVar4) {
                    iVar3 = -0x7ffffffffffffffd;
                    break;
                }
                iVar1 = *(*(arg1 + 0x9c0 + iVar6 * 0x18) + iVar5 * 8);
                if ((*0x237a0 == '\0') || (*(iVar1 + 8) == 0)) {
                    bVar2 = true;
                    *(iVar1 + 8) = uVar4;
                }
                else {
                    bVar2 = false;
                }
                if ((*(iVar1 + 0x20) != -1) && (iVar3 = fcn.00017534(iVar1), iVar3 < 0)) break;
                if (bVar2) {
                    uVar4 = uVar4 + *(iVar1 + 0x10);
                }
                iVar5 = iVar5 + 1;
            } while (iVar5 < *(arg1 + 0x9b8 + iVar6 * 0x18));
        }
    }
    return iVar3;
}


/* fcn.00017bac @ 0x17bac */

//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.00017bac(uint32_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar4;
    ulong uVar5;
    uint16_t auStackX_8 [4];
    uint16_t auStackX_10 [4];
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (*(arg1_00 + 0xd5) == '\0') {
        if (*(arg1_00 + 0xd0) - 2U < 2) {
            iVar2 = fcn.000123d0(arg1_00,4);
            *(arg1_00 + 0x2c0) = 0;
        }
        if (*(arg1_00 + 0x458) != 0) {
            iVar2 = fcn.000177a0(arg1_00,2);
        }
        if (-1 < iVar2) {
            if (*(arg1_00 + 0x418) != 0) {
                iVar2 = fcn.000177a0(arg1_00,1);
            }
            if (-1 < iVar2) {
                if (*(arg1_00 + 0x558) != 0) {
                    iVar2 = fcn.000177a0(arg1_00,6);
                }
                if (-1 < iVar2) {
                    if (*(arg1_00 + 0x518) != 0) {
                        iVar2 = fcn.000177a0(arg1_00,5);
                    }
                    if (-1 < iVar2) {
                        if (*(arg1_00 + 0x4d8) != 0) {
                            iVar2 = fcn.000177a0(arg1_00,4);
                        }
                        if (-1 < iVar2) {
                            if (*(arg1_00 + 0x498) != 0) {
                                iVar2 = fcn.000177a0(arg1_00,3);
                            }
                            if (-1 < iVar2) {
                                uVar4 = 0;
                                if (*(arg1_00 + 0xa70) != 0) {
                                    do {
                                        iVar2 = *(*(arg1_00 + 0xa78) + uVar4 * 8);
                                        var_bp_20h._1_7_ = *(iVar2 + 0xd8) >> 8;
                                        var_bp_20h = CONCAT71(var_bp_20h._1_7_,0xc);
                                        iVar3 = (**(*(iVar2 + 0xb8) + 0x40))(*(iVar2 + 0xb8),0,var_bp_20h,1,0x22fe8)
                                        ;
                                        if (iVar3 < 0) {
                                            return iVar3;
                                        }
                                        if (*(iVar2 + 0xd0) - 2U < 2) {
                                            iVar3 = fcn.00017bac(iVar2);
                                        }
                                        if (*(iVar2 + 0x2fb) == '\0') {
                                            iVar3 = fcn.000123d0(iVar2,4);
                                            *(iVar2 + 0x2c0) = *(iVar2 + 0x2c0) & 0x6000;
                                        }
                                        if (iVar3 < 0) {
                                            return iVar3;
                                        }
                                        *(iVar2 + 0xd5) = 1;
                                        if (*(iVar2 + 0xd0) == 2 || *(iVar2 + 0xd0) == 3) {
                                            fcn.00010dc4(iVar2,*(iVar2 + 0x2b8) & 0x300,1,2);
                                            var_bp_20h = CONCAT71(var_bp_20h._1_7_,0x3e);
                                            uVar5 = 0;
                                            iVar3 = fcn.0001cc58(*(iVar2 + 0xb8),var_bp_20h,0,auStackX_10);
                                            if (iVar3 < 0) {
                                                return iVar3;
                                            }
                                            uVar1 = auStackX_10[0] | 0x10;
                                            if (*(iVar2 + 0x394) != -2) {
                                                if (*(iVar2 + 0x394) == '\0') {
                                                    uVar1 = auStackX_10[0] & 0xfffd | 0x10;
                                                }
                                                else {
                                                    uVar1 = auStackX_10[0] | 0x12;
                                                }
                                            }
                                            auStackX_10[0] = uVar1;
                                            if (*(iVar2 + 0x393) != -2) {
                                                if (*(iVar2 + 0x393) == '\x01') {
                                                    auStackX_10[0] = uVar1 | 1;
                                                }
                                                else {
                                                    auStackX_10[0] = uVar1 & 0xfffe;
                                                }
                                            }
                                            iVar3 = fcn.0001cc58(*(iVar2 + 0xb8),var_bp_20h,CONCAT71(uVar5 >> 8,1),
                                                                 auStackX_10);
                                            if (iVar3 < 0) {
                                                return iVar3;
                                            }
                                        }
                                        var_bp_20h = CONCAT71(var_bp_20h._1_7_,4);
                                        iVar3 = fcn.0001cc58(*(iVar2 + 0xb8),var_bp_20h,0,auStackX_8);
                                        if (iVar3 < 0) {
                                            return iVar3;
                                        }
                                        if (*(iVar2 + 0x394) != -2) {
                                            if (*(iVar2 + 0x394) == '\0') {
                                                auStackX_8[0] = auStackX_8[0] & 0xfeff;
                                            }
                                            else {
                                                auStackX_8[0] = auStackX_8[0] | 0x100;
                                            }
                                        }
                                        if (*(iVar2 + 0x393) != -2) {
                                            if (*(iVar2 + 0x393) == '\0') {
                                                auStackX_8[0] = auStackX_8[0] & 0xffbf;
                                            }
                                            else {
                                                auStackX_8[0] = auStackX_8[0] | 0x40;
                                            }
                                        }
                                        iVar2 = fcn.0001cc58(*(iVar2 + 0xb8),var_bp_20h,1,auStackX_8);
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        uVar4 = uVar4 + 1;
                                    } while (uVar4 < *(arg1_00 + 0xa70));
                                }
                                *(arg1_00 + 0xd5) = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001c5e4 @ 0x1c5e4 */

int64_t fcn.0001c5e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    
    uVar6 = 0;
    if (arg2 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001c59c();
        if (-1 < iVar2) {
            uVar3 = *(*0x238f8 + 0x18);
            if (uVar3 != 0) {
                puVar7 = *0x238f8 + 0x59;
                uVar5 = uVar6;
                do {
                    if ((*puVar7 & 1) != 0) {
                        uVar5 = uVar5 + 1;
                    }
                    puVar7 = puVar7 + 0x159;
                    uVar3 = uVar3 - 1;
                } while (uVar3 != 0);
                if (uVar5 != 0) {
                    iVar4 = fcn.0001bc40(uVar5 << 3);
                    iVar1 = *0x238f8;
                    if (iVar4 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    if (*(*0x238f8 + 0x18) != 0) {
                        iVar8 = *0x238f8 + 0x20;
                        uVar3 = uVar6;
                        do {
                            if ((*(iVar8 + 0x39) & 1) != 0) {
                                *(iVar4 + uVar6 * 8) = iVar8;
                                uVar6 = uVar6 + 1;
                            }
                            uVar3 = uVar3 + 1;
                            iVar8 = iVar8 + 0x159;
                        } while (uVar3 < *(iVar1 + 0x18));
                    }
                    *arg1 = iVar4;
                    *arg2 = uVar6;
                    return iVar2;
                }
            }
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    return iVar2;
}


/* fcn.0001bdd8 @ 0x1bdd8 */

int64_t fcn.0001bdd8(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    arg1_00 = fcn.0001bcac(arg1);
    arg1_01 = fcn.0001bc40(arg1_00);
    fcn.00022ac0(arg1_01,arg1,arg1_00);
    return arg1_01;
}


/* fcn.0001bcac @ 0x1bcac */

int64_t fcn.0001bcac(int64_t arg1)

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


/* fcn.0001c59c @ 0x1c59c */

void fcn.0001c59c(void)

{
    int64_t iVar1;
    
    if (*0x238f0 == 0) {
        iVar1 = (**(*0x238a8 + 0x140))(0x22c30,0,0x238f0);
        if (-1 < iVar1) {
            *0x238f8 = *(*0x238f0 + 0x10);
        }
    }
    return;
}


/* fcn.00018058 @ 0x18058 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_bp_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00018058(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint8_t *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_68;
    uint64_t uStack_60;
    int64_t iStack_58;
    uchar auStack_50 [8];
    int64_t aiStack_48 [2];
    int64_t var_30h;
    uint32_t var_bp_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar10 = 0;
    iStackX_20 = 0;
    uStackX_18 = 0;
    iStack_58 = 0;
    iVar2 = (**(*0x238a8 + 0x98))(arg1,0x22b80,auStack_50);
    if (iVar2 < 0) {
        return 0x8000000000000002;
    }
    if ((*0x23880 == 0) || (*(*0x23880 + 0x88) == '\0')) {
        uVar3 = (**(*0x238a8 + 0x138))(2,0x22c10,0,0x23a78,&iStackX_20);
        if (uVar3 < 0) {
            return uVar3;
        }
        if ((*0x23900 == '\0') && (uVar3 = fcn.0001c5e4(&iStack_58,&uStackX_18), uVar3 < 0)) {
            return uVar3;
        }
        *0x23880 = fcn.0001bc6c(*0x23a78 * 0x98);
        *0x23838 = fcn.0001bc6c(*0x23a78 << 3);
        iVar2 = *0x23880;
        if (*0x23a78 != 0) {
            do {
                iVar4 = *0x238a8;
                iVar9 = uVar10 * 0x98;
                *(iVar9 + 0x40 + iVar2) = *(iStackX_20 + uVar10 * 8);
                uVar3 = (**(iVar4 + 0x98))(*(iStackX_20 + uVar10 * 8),0x22c10,iVar2 + 0x48 + iVar9);
                iVar2 = *0x23880;
                if (uVar3 < 0) {
                    return uVar3;
                }
                if (uVar10 == 0) {
                    (**(*0x238a8 + 0x140))(0x22cd0,0,*0x23880 + 0x50);
                    (**(*0x238a8 + 0x140))(0x22c60,0,*0x23880 + 0x90);
                    (**(*0x238a8 + 0x140))(0x22bc0,0,*0x23880 + 0x58);
                    iVar2 = *0x23880;
                }
                else {
                    *(iVar9 + 0x50 + *0x23880) = *(*0x23880 + 0x50);
                    *(iVar9 + 0x90 + iVar2) = *(iVar2 + 0x90);
                    *(iVar9 + 0x58 + iVar2) = *(iVar2 + 0x58);
                }
                uVar10 = uVar10 + 1;
                *(iVar9 + 0x88 + iVar2) = 1;
            } while (uVar10 < *0x23a78);
        }
        iVar9 = 0;
        iVar4 = *(iVar2 + 0x50);
        if (((iVar4 == 0) || (iVar4 = (**(iVar4 + 0x10))(iVar4,0x23808), iVar4 < 0)) &&
           (iVar2 = *(iVar2 + 0x90), iVar2 != 0)) {
            (**(iVar2 + 0x10))(iVar2,0x23808);
        }
        iVar2 = 0x22d60;
        iVar4 = 0xf;
        do {
            iVar5 = fcn.0001bf1c(0x23760);
            if (-1 < iVar5) {
                *(*0x23770 + *0x23768 * 8) = iVar2;
                *0x23768 = *0x23768 + 1;
            }
            iVar2 = iVar2 + 0x28;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        uVar10 = (**(*0x238a8 + 0x98))(arg1,0x22b80,auStack_50);
        if (uVar10 < 0) {
            return uVar10;
        }
        uStackX_18 = 0;
        if (*0x23a78 != 0) {
            do {
                if (uVar10 == 0) {
code_r0x0001831d:
                    do {
                        do {
                            uVar10 = 0;
                            iVar2 = *(iVar9 + 0x48 + *0x23880);
                            uVar3 = (**(iVar2 + 8))(iVar2);
                            if (uVar3 < 0) {
                                if (uVar3 != 0x800000000000000e) {
                                    return uVar3;
                                }
                                goto code_r0x00018593;
                            }
                            iVar2 = fcn.00016318(CONCAT71(iVar2 >> 8,1),0);
                            if (iVar2 == 0) {
                                return 0x8000000000000009;
                            }
                            iVar8 = *0x23880 + iVar9;
                            iVar5 = fcn.0001bf1c(iVar8 + 0x28);
                            iVar4 = *0x238a8;
                            if (iVar5 < 0) {
                                return 0x8000000000000009;
                            }
                            *(*(iVar8 + 0x38) + *(iVar8 + 0x30) * 8) = iVar2;
                            *(iVar8 + 0x30) = *(iVar8 + 0x30) + 1;
                            uVar3 = (**(iVar4 + 0x118))(0,0x22b80,iVar2 + 0xb8,*0x22fe0,0,0x10);
                            if (uVar3 < 0) {
                                return uVar3;
                            }
                            uVar3 = (**(*0x238a8 + 0x98))(0,0x22bf0,aiStack_48);
                            if (uVar3 < 0) {
                                return uVar3;
                            }
                            if (aiStack_48[0] == 0) {
                                uVar3 = uVar10;
                            }
                            else {
                                uVar3 = fcn.0001bdd8(aiStack_48[0]);
                            }
                            iVar5 = *0x23880;
                            *(iVar2 + 0xb0) = uVar3;
                            *(iVar2 + 0xd0) = 1;
                            iVar4 = iVar9 + iVar5;
                            *(iVar2 + 200) = iVar4;
                            *(iVar2 + 0xe0) = 0;
                            *(iVar2 + 0xc0) = 0;
                            if (*0x23a78 != 0) {
                                piVar6 = iVar5 + 0x40;
                                uVar3 = uVar10;
                                do {
                                    if (*piVar6 == **(iVar2 + 0xb8)) break;
                                    uVar3 = uVar3 + 1;
                                    piVar6 = piVar6 + 0x13;
                                } while (uVar3 < *0x23a78);
                            }
                            uStack_60 = 0;
                            iStack_68 = 0;
                        } while (*0x23920 == '\x01');
                        if ((*0x23928 == NULL) && (uVar3 = (**(*0x238a8 + 0x140))(0x22c90,0,0x23928), uVar3 < 0)) {
                            if (uVar3 == 0x800000000000000e) {
                                *0x23920 = '\x01';
                                goto code_r0x0001831d;
                            }
                        }
                        else {
                            if (*(iVar4 + 0x60) == 0) {
                                *(iVar4 + 0x60) = *0x23928;
                            }
                            uVar1 = *(iVar2 + 0xb0);
                            uVar3 = (***0x23928)(*0x23928,&uStack_60,&iStack_68);
                            uVar11 = uVar10;
                            if (uStack_60 != 0) {
                                do {
                                    iVar2 = fcn.0001c1c0(uVar1,*(uVar10 + iStack_68),0xc);
                                    if (iVar2 == 0) {
                                        iVar2 = fcn.0001bc6c(0x30);
                                        if (iVar2 == 0) {
                                            uVar10 = 0x8000000000000009;
                                            goto code_r0x00018593;
                                        }
                                        *(iVar2 + 2) = 1;
                                        *(iVar2 + 8) = iStack_68 + uVar10;
                                        iVar5 = fcn.0001bf1c(iVar4 + 0x68);
                                        if (iVar5 < 0) {
                                            uVar3 = 0x8000000000000009;
                                        }
                                        else {
                                            *(*(iVar4 + 0x78) + *(iVar4 + 0x70) * 8) = iVar2;
                                            *(iVar4 + 0x70) = *(iVar4 + 0x70) + 1;
                                            uVar3 = 0;
                                        }
                                    }
                                    uVar11 = uVar11 + 1;
                                    uVar10 = uVar10 + 0x10;
                                } while (uVar11 < uStack_60);
                            }
                        }
                        uVar10 = uVar3;
                    } while (uVar10 == 0);
                }
code_r0x00018593:
                uStackX_18 = uStackX_18 + 1;
                iVar9 = iVar9 + 0x98;
            } while (uStackX_18 < *0x23a78);
        }
        uVar10 = 0;
        if (*0x23900 == '\0') {
            iVar2 = fcn.0001c59c();
            if ((-1 < iVar2) && (*(*0x238f8 + 0x18) != 0)) {
                puVar7 = *0x238f8 + 0x5b;
                do {
                    if (0x7f < *puVar7) {
                        *0x237a0 = 1;
                        break;
                    }
                    uVar10 = uVar10 + 1;
                    puVar7 = puVar7 + 0x159;
                } while (uVar10 < *(*0x238f8 + 0x18));
            }
        }
        else {
            *0x237a0 = 0;
        }
        if (*(*0x23880 + 0x60) != 0) {
            *0x237c8 = 1;
            *0x237a0 = 0;
        }
        if (iStackX_20 != 0) {
            (**(*0x238a8 + 0x48))();
        }
        if (iStack_58 != 0) {
            (**(*0x238a8 + 0x48))();
        }
    }
    return 0;
}


/* fcn.000108d0 @ 0x108d0 */

int64_t fcn.000108d0(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    puVar1 = *(arg1 + 0x50);
    uVar3 = arg2 & 0xffffffff;
    if (((puVar1 != NULL) && (iVar2 = (**puVar1)(puVar1,*(arg1 + 0x40),arg2 & 0xffffffff,0), iVar2 < 0)) &&
       (puVar1 = *(arg1 + 0x90), puVar1 != NULL)) {
        (**puVar1)(puVar1,*(arg1 + 0x40),uVar3,0);
    }
    iVar2 = (***(arg1 + 0x48))(*(arg1 + 0x48),uVar3);
    if ((iVar2 < 0) && (iVar2 != -0x7ffffffffffffffd)) {
        return iVar2;
    }
    puVar1 = *(arg1 + 0x50);
    iVar2 = -0x7ffffffffffffff2;
    if (((puVar1 == NULL) || (iVar2 = (**puVar1)(puVar1,*(arg1 + 0x40),uVar3,1), iVar2 < 0)) &&
       (puVar1 = *(arg1 + 0x90), puVar1 != NULL)) {
        iVar2 = (**puVar1)(puVar1,*(arg1 + 0x40),uVar3,1);
    }
    if ((iVar2 == -0x7ffffffffffffff2) || (iVar2 == -0x7ffffffffffffffd)) {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001c6d4 @ 0x1c6d4 */

int64_t fcn.0001c6d4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if (arg3 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001c59c();
        if (-1 < iVar2) {
            uVar4 = 0;
            uVar1 = *(*0x238f8 + 0x18);
            if (uVar1 != 0) {
                iVar2 = *0x238f8 + 0x38;
                do {
                    if (((*(iVar2 + 0x21) & 2) != 0) && (iVar3 = fcn.0001c1c0(iVar2,arg1,5), iVar3 == 0)) {
                        *arg2 = iVar2 + -0x18;
                        *arg3 = uVar4;
                        return 0;
                    }
                    uVar4 = uVar4 + 1;
                    iVar2 = iVar2 + 0x159;
                } while (uVar4 < uVar1);
            }
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    return iVar2;
}


/* fcn.0001c78c @ 0x1c78c */

int64_t fcn.0001c78c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001c59c();
    if (-1 < iVar1) {
        if ((arg2 == 0) || (*(*0x238f8 + 0x18) <= arg1)) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            *arg2 = *0x238f8 + 0x20 + arg1 * 0x159;
        }
    }
    return iVar1;
}


/* fcn.0001e4ac @ 0x1e4ac */

//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.0001e4ac(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    char cVar4;
    int64_t iVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    char *pcVar8;
    ulong uVar9;
    unkbyte7 Var10;
    uint16_t auStackX_10 [4];
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    
    iVar5 = arg1;
    cVar4 = fcn.0001dd94(arg1);
    uVar6 = 0;
    if (cVar4 == '\0') {
        return 0;
    }
    uVar9 = 0;
    iVar2 = *(*(iVar5 + 0x2d0) + 0x20);
    pcVar8 = iVar2 + 0x10;
    iStackX_18 = CONCAT71(*(iVar5 + 0xd8) >> 8,**(iVar5 + 0x2d0) + '(');
    iVar5 = fcn.0001cc58(*(iVar5 + 0xb8),iStackX_18,0,auStackX_10);
    if (iVar5 < 0) {
        return iVar5;
    }
    Var10 = uVar9 >> 8;
    if (*(iVar2 + 0x17) != -2) {
        auStackX_10[0] = *(iVar2 + 0x17) << 0xf | auStackX_10[0] & 0x7fff;
    }
    if (*(iVar2 + 0x16) != 0xfe) {
        auStackX_10[0] = (*(iVar2 + 0x16) & 1) << 10 | auStackX_10[0] & 0xfbff;
    }
    if (*(iVar2 + 0x15) != 0xfe) {
        auStackX_10[0] = (*(iVar2 + 0x15) & 1) << 9 | auStackX_10[0] & 0xfdff;
    }
    if (*(iVar2 + 0x14) != 0xfe) {
        auStackX_10[0] = (*(iVar2 + 0x14) & 1) << 8 | auStackX_10[0] & 0xfeff;
    }
    if (*(iVar2 + 0x13) != 0xfe) {
        auStackX_10[0] = (*(iVar2 + 0x13) & 1) << 7 | auStackX_10[0] & 0xff7f;
    }
    if (*(iVar2 + 0x12) != 0xfe) {
        auStackX_10[0] = (*(iVar2 + 0x12) & 1) << 6 | auStackX_10[0] & 0xffbf;
    }
    if (*pcVar8 == -2) goto code_r0x0001e6f1;
    auStackX_10[0] = auStackX_10[0] & 0xffe0;
    if (*pcVar8 != '\0') {
        puVar3 = *(*(arg1 + 0x2d0) + 0x20);
        if (*pcVar8 != -1) {
            uVar1 = *puVar3;
            uVar7 = uVar6;
            if (*pcVar8 == 'U') {
                uVar7 = 0;
                if ((uVar1 & 0xf) != 0) {
                    if ((uVar1 & 1) == 0) {
                        if ((uVar1 & 2) == 0) {
                            if ((uVar1 & 4) == 0) {
                                uVar7 = uVar6;
                                if ((uVar1 & 8) != 0) {
                                    uVar7 = 0xd;
                                }
                            }
                            else {
                                uVar7 = 9;
                            }
                        }
                        else {
                            uVar7 = 5;
                        }
                    }
                    else {
                        uVar7 = 2;
                    }
                }
            }
            else if ((uVar1 & 0xf) != 0) {
                if ((uVar1 & 8) == 0) {
                    if ((uVar1 & 4) == 0) {
                        if ((uVar1 & 2) == 0) {
                            if ((uVar1 & 1) != 0) {
                                uVar7 = 2;
                            }
                        }
                        else {
                            uVar7 = 6;
                        }
                    }
                    else {
                        uVar7 = 10;
                    }
                }
                else {
                    uVar7 = 0xe;
                }
            }
            Var10 = 0;
            auStackX_10[0] = auStackX_10[0] | uVar7;
            goto code_r0x0001e6f1;
        }
        uVar1 = *puVar3;
        uVar6 = 0;
        if (((uVar1 & 0xf) != 0) && (uVar6 = 0, (uVar1 & 4) != 0)) {
            uVar6 = 9;
        }
        auStackX_10[0] = auStackX_10[0] | uVar6;
        if (uVar6 != 0) goto code_r0x0001e6f1;
    }
    auStackX_10[0] = auStackX_10[0] | 0x10;
code_r0x0001e6f1:
    iVar5 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_18,CONCAT71(Var10,1),auStackX_10);
    return iVar5;
}


/* fcn.000205a4 @ 0x205a4 */

int64_t fcn.000205a4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    char *pcVar6;
    int64_t iVar7;
    ulong uVar8;
    uint16_t auStackX_18 [4];
    int64_t iStackX_20;
    int8_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    
    pcVar6 = *(arg1 + 0x2d0);
    uVar1 = pcVar6[0x81];
    uVar2 = pcVar6[0x83];
    uVar3 = pcVar6[0x80];
    uVar4 = pcVar6[0x84];
    uVar5 = pcVar6[0x82];
    if ((*(arg1 + 0x396) == '\0') && (pcVar6 != NULL)) {
        iStackX_20 = CONCAT71(*(arg1 + 0xd8) >> 8,*pcVar6 + '\b');
        uVar8 = 0;
        iVar7 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_20,0,auStackX_18);
        if (-1 < iVar7) {
            if (uVar2 == 0xfe) {
                *(*(arg1 + 0x2d0) + 0x16) = auStackX_18[0] >> 5 & 7;
            }
            else {
                if ((uVar2 == 0x37) || (arg2 <= uVar2)) {
                    auStackX_18[0] = auStackX_18[0] ^ (arg2 << 5 ^ auStackX_18[0]) & 0xe0;
                }
                else {
                    auStackX_18[0] = (uVar2 & 7) << 5 | auStackX_18[0] & 0xff1f;
                }
                *(*(arg1 + 0x2d0) + 0x16) = auStackX_18[0] >> 5 & 7;
            }
            if (uVar4 < 6) {
                auStackX_18[0] = (uVar4 & 7) << 0xc | auStackX_18[0] & 0x8fff;
            }
            if ((uVar1 != 0xfe) && (auStackX_18[0] = auStackX_18[0] & 0xfeff, (*(*(arg1 + 0x2d0) + 4) & 0x20) != 0)) {
                auStackX_18[0] = (uVar1 & 1) << 8 | auStackX_18[0];
            }
            if (uVar3 != 0xfe) {
                auStackX_18[0] = (uVar3 & 1) << 4 | auStackX_18[0] & 0xffef;
            }
            if (uVar5 != 0xfe) {
                auStackX_18[0] = (uVar5 & 1) << 0xb | auStackX_18[0] & 0xf7ff;
            }
            fcn.0001cc58(*(arg1 + 0xb8),iStackX_20,CONCAT71(uVar8 >> 8,1),auStackX_18);
            *(*(arg1 + 0x2d0) + 0x13) = 1;
            fcn.0001cc58(*(arg1 + 0xb8),iStackX_20,0,auStackX_18);
            iVar7 = fcn.0001d43c(0x23948);
            if ((*(*(arg1 + 0x2d0) + 0x40) != 0) && (*0x2394d == '\0')) {
                iVar7 = fcn.00020190(arg1);
            }
        }
    }
    else {
        iVar7 = 0;
    }
    return iVar7;
}


/* fcn.00020000 @ 0x20000 */

ulong fcn.00020000(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    cVar1 = arg2;
    uVar2 = uVar3;
    if (*0x23910 != 0) {
        do {
            if (*(*0x23918 + uVar2 * 8) == arg1) {
                fcn.0001c044(0x23908,uVar2);
                if ((((cVar1 != '\0') && (*(arg1 + 0x338) != 0)) && ((*(arg1 + 0x340) != 0 || (*(arg1 + 0x348) != 0))))
                   && (*(arg1 + 0x348) != 0)) {
                    do {
                        fcn.00020000(*(*(arg1 + 0x350) + uVar3 * 8),0);
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < *(arg1 + 0x348));
                }
                return 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *0x23910);
    }
    return 0x800000000000000e;
}


/* fcn.000209cc @ 0x209cc */

void fcn.000209cc(int64_t arg1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    bool bVar4;
    char cVar5;
    char cVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int64_t iVar11;
    int64_t iVar12;
    ulong uVar13;
    uint64_t uVar14;
    uint16_t uVar15;
    uint16_t uVar16;
    
    uVar15 = 0xffff;
    iVar12 = arg1;
    while ((iVar12 != 0 && (*(iVar12 + 0xc0) != 0))) {
        iVar10 = *(iVar12 + 0x338);
        cVar5 = '\0';
        if ((iVar10 == 0) || (*(iVar12 + 0x340) != 0)) {
            bVar4 = false;
        }
        else {
            bVar4 = true;
        }
        cVar6 = fcn.0001ce58(iVar12);
        if (cVar6 == '\0') {
            iVar12 = iVar10;
        }
        iVar10 = *(iVar12 + 0xc0);
        iVar11 = *(iVar12 + 0x2d0);
        iVar3 = *(iVar10 + 0x2d0);
        uVar16 = *(iVar11 + 0x16);
        if (*(iVar3 + 0x16) < uVar16) {
            uVar16 = *(iVar3 + 0x16);
            cVar5 = '\x01';
        }
        uVar1 = *(iVar11 + 0x83);
        if ((uVar1 != 0x37) || (*(iVar3 + 0x83) != '7')) {
            uVar7 = uVar1;
            if (*(iVar3 + 0x83) < uVar1) {
                uVar7 = *(iVar3 + 0x83);
            }
            if (uVar7 < uVar15) {
                uVar15 = uVar7;
            }
        }
        cVar6 = '\x01';
        if (uVar15 == uVar16) {
            cVar6 = cVar5;
        }
        if (uVar16 < uVar15) {
            uVar15 = uVar16;
        }
        uVar16 = *(iVar11 + 0x84);
        if (*(iVar3 + 0x84) < *(iVar11 + 0x84)) {
            uVar16 = *(iVar3 + 0x84);
        }
        if (((cVar6 != '\0') && ((*(iVar11 + 2) & 0xf0) == 0x50)) && (*(iVar11 + 0x13) != '\0')) {
            if (uVar16 == 0x37) {
                uVar14 = 2;
            }
            else {
                uVar14 = uVar16;
            }
            fcn.0001eacc(iVar12,uVar15,uVar14);
        }
        *(*(iVar12 + 0x2d0) + 0x16) = uVar15;
        if (bVar4) {
            fcn.0001e8e0(iVar12,uVar15,uVar16);
        }
        iVar12 = *(iVar10 + 0xc0);
        if (((iVar12 == 0) || (iVar10 = *(iVar12 + 0xc0), iVar10 == 0)) ||
           ((*(iVar10 + 0xd0) == 1 || ((*(iVar10 + 0x396) != '\0' || (*(iVar10 + 0x2d0) == 0)))))) break;
    }
    iVar12 = fcn.000200a4(arg1,0);
    uVar13 = 0;
    uVar8 = fcn.0001eca4(iVar12,0,0);
    iVar10 = CONCAT71(uVar13 >> 8,1);
    iVar12 = fcn.000200a4(arg1,iVar10);
    uVar9 = fcn.0001eca4(iVar12,CONCAT71(iVar10 >> 8,1),0);
    uVar8 = uVar8 & 0xffff;
    uVar9 = uVar9 & 0xffff;
    iVar12 = arg1;
    cVar5 = fcn.0001ce58(arg1);
    if (cVar5 == '\0') {
        arg1 = *(iVar12 + 0x338);
    }
    uVar2 = *(*(arg1 + 0x2d0) + 4);
    uVar7 = (uVar9 & 0xffff) <= (uVar2 >> 6 & 7);
    uVar16 = uVar7 | 2;
    if ((uVar2 >> 9 & 7) < (uVar8 & 0xffff)) {
        uVar16 = uVar7;
    }
    cVar5 = fcn.0001dd94(arg1);
    while( true ) {
        iVar12 = *(arg1 + 0xc0);
        if ((cVar5 != '\0') && (iVar10 = fcn.0001e4ac(arg1), iVar10 < 0)) {
            return;
        }
        iVar10 = fcn.000205a4(arg1,uVar15);
        if (iVar10 < 0) {
            return;
        }
        fcn.00020000(arg1,0);
        uVar7 = *(*(arg1 + 0x2d0) + 2) & 0xf0;
        if (((((uVar7 == 0) || (uVar7 == 0x70)) || (uVar7 == 0x10)) || (uVar7 == 0x50)) &&
           (uVar14 = 0, *(arg1 + 0x348) != 0)) {
            do {
                iVar10 = *(*(arg1 + 0x350) + uVar14 * 8);
                if ((*(iVar10 + 0x396) == '\0') && (*(iVar10 + 0x2d0) != 0)) {
                    if ((cVar5 != '\0') && (iVar11 = fcn.0001e4ac(iVar10), iVar11 < 0)) {
                        return;
                    }
                    iVar11 = fcn.000205a4(iVar10,uVar15);
                    if (iVar11 < 0) {
                        return;
                    }
                    *(*(iVar10 + 0x2d0) + 0x13) = 1;
                    fcn.00020000(iVar10,0);
                }
                uVar14 = uVar14 + 1;
            } while (uVar14 < *(arg1 + 0x348));
        }
        iVar10 = iVar12;
        cVar5 = fcn.0001dd94(iVar12);
        if ((cVar5 != '\0') && (iVar10 = fcn.0001e4ac(iVar10), iVar10 < 0)) {
            return;
        }
        iVar10 = fcn.000205a4(iVar12,uVar15);
        if (iVar10 < 0) {
            return;
        }
        iVar10 = fcn.00020258(iVar12,arg1,uVar16);
        if (iVar10 < 0) {
            return;
        }
        *(*(iVar12 + 0x2d0) + 0x13) = 1;
        arg1 = *(iVar12 + 0xc0);
        if (arg1 == 0) {
            return;
        }
        iVar12 = *(arg1 + 0xc0);
        if (iVar12 == 0) {
            return;
        }
        if (*(iVar12 + 0xd0) == 1) {
            return;
        }
        if (*(iVar12 + 0x396) != '\0') break;
        if (*(iVar12 + 0x2d0) == 0) {
            return;
        }
    }
    return;
}


/* fcn.0001ba14 @ 0x1ba14 */

int64_t fcn.0001ba14(void)

{
    if (*0x23898 == 0) {
        (**(*0x23890 + 0x140))(0x22bd0,0,0x23898);
    }
    return *0x23898;
}


/* fcn.00015730 @ 0x15730 */

void fcn.00015730(int64_t arg1)

{
    int iVar1;
    int *piVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int *piVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    
    uVar7 = 1;
    piVar6 = arg1 + 0x408;
    puVar3 = arg1 + 0x9d8;
    uVar8 = 0x28;
    do {
        if (((*(piVar6 + 4) != 0) && (*(arg1 + 0xe0) == *(uVar8 + 0x23960))) &&
           (iVar1 = *piVar6, uVar7 == *(iVar1 + -1 + uVar8 + 0x23968))) {
            iVar9 = *(piVar6 + 4) - *(uVar8 + 0x23970);
            *(piVar6 + 4) = iVar9;
            if (iVar9 == 0) {
                if (iVar1 - 2U < 2) {
                    piVar6[6] = 0xfff;
                    piVar6[7] = 0;
                }
                if (iVar1 - 4U < 4) {
                    piVar6[6] = 0xfffff;
                    piVar6[7] = 0;
                }
            }
            else {
                uVar5 = *(uVar8 + 0x23978);
                if ((*(piVar6 + 6) == uVar5) && (uVar10 = 0, puVar3[-1] != 0)) {
                    puVar4 = *puVar3;
                    do {
                        piVar2 = *puVar4;
                        if ((*(piVar2 + 6) <= uVar5) && ((*(uVar8 + 0x23980) == '\0' || (*(piVar2 + 6) != uVar5)))) {
                            uVar5 = *(piVar2 + 6);
                            *(piVar6 + 6) = uVar5;
                            if (*piVar2 - 2U < 2) {
                                if (uVar5 < 0xfff) {
                                    uVar5 = 0xfff;
                                }
                                *(piVar6 + 6) = uVar5;
                            }
                            if (*piVar2 - 4U < 4) {
                                uVar5 = *(piVar6 + 6);
                                if (uVar5 < 0xfffff) {
                                    uVar5 = 0xfffff;
                                }
                                *(piVar6 + 6) = uVar5;
                            }
                            break;
                        }
                        uVar10 = uVar10 + 1;
                        puVar4 = puVar4 + 1;
                    } while (uVar10 < puVar3[-1]);
                }
            }
        }
        uVar7 = uVar7 + 1;
        puVar3 = puVar3 + 3;
        piVar6 = piVar6 + 0x10;
        uVar8 = uVar8 + 0x28;
        if (0x117 < uVar8) {
            puVar3 = 0x23988;
            uVar7 = 0x29;
            do {
                *(uVar7 + 0x23968) = 0;
                uVar7 = uVar7 + 0x29;
                puVar3[2] = 0;
                *puVar3 = 0;
                puVar3 = puVar3 + 5;
            } while (uVar7 < 0x11f);
            return;
        }
    } while( true );
}


/* fcn.00017f00 @ 0x17f00 */

ulong fcn.00017f00(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int *piVar2;
    uchar *puVar3;
    int64_t *piVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t *piVar8;
    
    iVar5 = 0;
    piVar2 = arg1 + 0x408;
    iVar7 = 6;
    do {
        if ((*piVar2 != 0) && (*(piVar2 + 4) != 0)) {
            iVar5 = iVar5 + 1;
        }
        piVar2 = piVar2 + 0x10;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    if (iVar5 == 0) {
        puVar3 = fcn.0001bc6c(2);
        *puVar3 = 0x79;
        *arg2 = puVar3;
    }
    else {
        puVar3 = fcn.0001bc6c(iVar5 * 0x2e + 2);
        if (puVar3 == NULL) {
            return 0x8000000000000009;
        }
        iVar5 = 6;
        *arg2 = puVar3;
        piVar8 = arg1 + 0x418;
        piVar4 = arg1 + 0x7c8;
        do {
            iVar1 = piVar8[-2];
            if ((iVar1 != 0) && (*piVar8 != 0)) {
                if (iVar1 == 2) {
                    *(puVar3 + 6) = 0x10;
code_r0x00017ff6:
                    puVar3[3] = 1;
                }
                else {
                    if (iVar1 == 3) {
                        *(puVar3 + 6) = 0x20;
                        goto code_r0x00017ff6;
                    }
                    if (iVar1 == 4) {
code_r0x00017fda:
                        *(puVar3 + 6) = 0x20;
                    }
                    else {
                        if (iVar1 == 5) {
                            puVar3[5] = puVar3[5] | 6;
                            goto code_r0x00017fda;
                        }
                        if (iVar1 != 6) {
                            if (iVar1 != 7) goto code_r0x00018035;
                            puVar3[5] = puVar3[5] | 6;
                        }
                        *(puVar3 + 6) = 0x40;
                    }
                    puVar3[5] = puVar3[5] | 1;
                    puVar3[3] = 0;
                }
                *puVar3 = 0x8a;
                *(puVar3 + 1) = 0x2b;
                puVar3[4] = 0xc;
                *(puVar3 + 0x16) = piVar8[1];
                uVar6 = *piVar4 + *piVar8;
                *(puVar3 + 0x26) = uVar6;
                if ((puVar3[3] == '\0') && ((uVar6 & 0xfff) != 0)) {
                    *(puVar3 + 0x26) = (uVar6 | 0xfff) + 1;
                }
                puVar3 = puVar3 + 0x2e;
            }
code_r0x00018035:
            piVar4 = piVar4 + 0xb;
            piVar8 = piVar8 + 8;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        *puVar3 = 0x79;
    }
    return 0;
}


/* fcn.0001c988 @ 0x1c988 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.0001c988(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uchar auStack_68 [8];
    int64_t iStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    uint32_t var_bp_8h;
    
    iStack_50 = 0;
    iStack_60 = 0;
    iStack_48 = 0;
    iVar2 = (**(*0x238a8 + 0x138))(2,0x22c20,0,&uStack_40,&iStack_50);
    if (-1 < iVar2) {
        uVar5 = 0;
        if (uStack_40 != 0) {
            do {
                iVar2 = (**(*0x238a8 + 0x98))(*(iStack_50 + uVar5 * 8),0x22c20,&iStack_48);
                if (-1 < iVar2) {
                    iVar2 = 0;
                    do {
                        iStack_60 = 0;
                        iVar3 = (**(iStack_48 + 0x18))
                                          (iStack_48,arg3,'\x19' - (arg4 != 0),iVar2,&iStack_60,&iStack_58,
                                           auStack_68);
                        if (iVar3 < 0) {
                            if (arg4 == 0) {
                                iVar3 = (**(iStack_48 + 0x18))
                                                  (iStack_48,arg3,0x10,iVar2,&iStack_60,&iStack_58,auStack_68);
                            }
                            if (iVar3 < 0) break;
                        }
                        iVar1 = iStack_60;
                        if (arg4 == 0) {
code_r0x0001cb6e:
                            (**(*0x238a8 + 0x48))(iStack_50);
                            if (-1 < iVar3) {
                                *arg1 = iStack_60;
                                *arg2 = iStack_58;
                            }
                            return iVar3;
                        }
                        iVar4 = fcn.0001c1c0(iStack_60,arg4,0x10);
                        if (iVar4 == 0) {
                            iStack_58 = iStack_58 + -0x10;
                            iStack_60 = fcn.0001bc40(iStack_58);
                            if (iStack_60 == 0) {
                                iVar3 = -0x7ffffffffffffff7;
                            }
                            else {
                                fcn.00022ac0(iStack_60,iVar1 + 0x10,iStack_58);
                            }
                            (**(*0x238a8 + 0x48))(iVar1);
                            goto code_r0x0001cb6e;
                        }
                        if (iVar1 != 0) {
                            (**(*0x238a8 + 0x48))(iVar1);
                        }
                        iVar2 = iVar2 + 1;
                    } while( true );
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uStack_40);
        }
        (**(*0x238a8 + 0x48))(iStack_50);
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0001927c @ 0x1927c */

ulong fcn.0001927c(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_00000014,arg2);
    if (*(CONCAT44(in_register_0000000c,arg1) + 0xe8) != *(iVar3 + 4)) {
        return 0x800000000000000e;
    }
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0xea);
    if ((iVar1 != *(iVar3 + 6)) && (iVar1 != 0)) {
        if (*(iVar3 + 8) != 0) {
            for (piVar2 = *(iVar3 + 8) + iVar3; *piVar2 != 0; piVar2 = piVar2 + 1) {
                if (iVar1 == *piVar2) {
                    return 0;
                }
            }
        }
        return 0x8000000000000003;
    }
    return 0;
}


/* fcn.00019638 @ 0x19638 */

int64_t fcn.00019638(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_8 [4];
    
    auStackX_8[0] = *(arg1 + 0x90);
    iVar2 = -0x7ffffffffffffff2;
    iVar1 = *(*(arg1 + 200) + 0x50);
    if ((iVar1 == 0) || (iVar2 = (**(iVar1 + 0x18))(iVar1,*(arg1 + 0xe0),arg1 + 0x98,auStackX_8), iVar2 < 0)) {
        iVar1 = *(*(arg1 + 200) + 0x90);
        if (iVar1 != 0) {
            iVar2 = (**(iVar1 + 0x18))(iVar1,*(arg1 + 0xe0),arg1 + 0x98,auStackX_8);
        }
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    *(arg1 + 0x90) = auStackX_8[0];
    *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | 0x4000;
    *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x4000;
    return iVar2;
}


/* fcn.00012308 @ 0x12308 */

int64_t fcn.00012308(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg3;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    int64_t var_20h;
    int64_t var_30h;
    
    auStackX_10[0] = arg2;
    if (*(arg1 + 0xd0) < 2) {
        iVar1 = 0;
    }
    else {
        arg3 = 0;
        var_20h._1_7_ = *(arg1 + 0xd8) >> 8;
        var_20h = CONCAT71(var_20h._1_7_,4);
        iVar1 = fcn.0001cc58(*(arg1 + 0xb8),var_20h,0,auStackX_10);
        if (-1 < iVar1) {
            auStackX_10[0] = auStackX_10[0] | 2;
            if (*(arg1 + 0x278) != 0) {
                uVar2 = 0;
                var_20h = CONCAT71(var_20h._1_7_,*(arg1 + 0x298));
                iVar1 = fcn.0001cd18(*(arg1 + 0xb8),var_20h,0,auStackX_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
                arg3 = CONCAT71(uVar2 >> 8,1);
                auStackX_8[0] = auStackX_8[0] | 1;
                iVar1 = fcn.0001cd18(*(arg1 + 0xb8),var_20h,arg3,auStackX_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
            }
            var_20h = CONCAT71(var_20h._1_7_,4);
            iVar1 = fcn.0001cc58(*(arg1 + 0xb8),var_20h,CONCAT71(arg3 >> 8,1),auStackX_10);
        }
    }
    return iVar1;
}


/* fcn.000192d8 @ 0x192d8 */

uint64_t fcn.000192d8(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    uint8_t *puVar1;
    int16_t iVar2;
    uint64_t uVar3;
    int16_t *piVar4;
    uint64_t uVar5;
    char cVar6;
    int16_t aiStack_48 [16];
    
    cVar6 = arg4;
    if (cVar6 == '\0') {
        piVar4 = arg2;
    }
    else {
        (**(*(arg1 + 0xb8) + 0x18))(*(arg1 + 0xb8),0,arg2,0x1a,aiStack_48);
        piVar4 = aiStack_48;
    }
    iVar2 = *piVar4;
    if (*(piVar4 + 2) == 0xef1) {
        uVar5 = piVar4[1];
        if (*(arg1 + 0x3c0) != 0) {
            puVar1 = *(arg1 + 0x3c0) + 0x19;
            *puVar1 = *puVar1 | 1;
        }
    }
    else {
        uVar5 = *(piVar4 + 1);
        if (*(arg1 + 0x3c0) != 0) {
            puVar1 = *(arg1 + 0x3c0) + 0x19;
            *puVar1 = *puVar1 | 2;
        }
    }
    if (uVar5 == arg3[4]) {
        uVar5 = uVar5 << 9;
    }
    else {
        uVar3 = arg3[4] * 0x200;
        if (cVar6 == '\0') {
            piVar4 = uVar3 + arg2;
        }
        else {
            (**(*(arg1 + 0xb8) + 0x18))(*(arg1 + 0xb8),0,uVar3 + arg2,0x1a,aiStack_48);
            piVar4 = aiStack_48;
        }
        if (*piVar4 == -0x55ab) {
            return uVar3;
        }
        uVar5 = uVar5 * 0x200;
        if (cVar6 == '\0') {
            piVar4 = uVar5 + arg2;
        }
        else {
            (**(*(arg1 + 0xb8) + 0x18))(*(arg1 + 0xb8),0,uVar5 + arg2,0x1a,aiStack_48);
            piVar4 = aiStack_48;
        }
        if (*piVar4 != -0x55ab) {
            if (uVar5 <= uVar3) {
                uVar5 = uVar3;
            }
            if (-1 < *(arg3 + 0x15)) {
                if (iVar2 != -0x55ab) {
                    return 0x200;
                }
                return uVar5;
            }
        }
    }
    return uVar5;
}


/* fcn.00022960 @ 0x22960 */

int64_t fcn.00022960(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint *puVar4;
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
    if ((3 < arg3) && (3 < uVar2)) {
        uVar2 = arg2 & 3;
        uVar3 = puVar4 & 3;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 4 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -3;
            puVar4 = puVar4 + -3;
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 4;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 3;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 4;
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


/* fcn.00019440 @ 0x19440 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00019440(uint32_t arg1)

{
    uint64_t arg2;
    int64_t iVar1;
    ulong *puVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    int16_t *piVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    int16_t *piStackX_8;
    int16_t *piStackX_10;
    ulong uStackX_18;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    uchar auStack_48 [16];
    int64_t var_10h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = 0;
    iVar4 = -0x7ffffffffffffff2;
    if (*(iVar3 + 0x308) != 0) {
        piVar6 = piStackX_8;
        piVar7 = piStackX_8;
        do {
            (**(*0x238a8 + 0x168))(auStack_48,0x10);
            if ((*(iVar3 + 0x300) == 0) || (*(iVar3 + 0x308) < uVar8)) {
                iVar1 = -0x7ffffffffffffffe;
code_r0x00019535:
                if (iVar1 < 0) {
                    if (iVar1 != -0x7ffffffffffffff2) {
                        return iVar1;
                    }
                }
                else {
                    puVar2 = fcn.0001bc6c(0x18);
                    if (puVar2 == NULL) {
                        return -0x7ffffffffffffff7;
                    }
                    puVar2[1] = uStackX_18;
                    *puVar2 = piVar7;
                    if (((*piVar7 == -0x55ab) && (piVar7[0xc] != 0)) && ((*(piVar6 + 0x3d) & 4) == 0)) {
                        iVar4 = piVar7[0xc] + piVar7;
                        *(puVar2 + 2) = *(iVar4 + 4);
                        *(puVar2 + 0x12) = *(iVar4 + 6);
                        iVar5 = *(iVar3 + 0xe8);
                        if ((*(puVar2 + 2) != iVar5) && (iVar4 = fcn.0001927c(arg1,iVar4), -1 < iVar4)) {
                            *(puVar2 + 2) = iVar5;
                        }
                    }
                    else {
                        *(puVar2 + 0x14) = 1;
                    }
                    iVar4 = fcn.0001bf1c(arg1 + 0x3a0);
                    if (iVar4 < 0) {
                        return -0x7ffffffffffffff7;
                    }
                    *(*(iVar3 + 0x3b0) + *(iVar3 + 0x3a8) * 8) = puVar2;
                    *(iVar3 + 0x3a8) = *(iVar3 + 0x3a8) + 1;
                    iVar4 = 0;
                }
            }
            else {
                piStackX_8 = NULL;
                uStackX_18 = 0;
                piStackX_10 = NULL;
                fcn.0001c78c(*(*(iVar3 + 0x310) + uVar8 * 8),&piStackX_10);
                piVar6 = piStackX_10;
                if ((*(piStackX_10 + 0x3b) & 8) != 0) {
                    arg2 = piStackX_10 + 0x55;
                    iVar1 = fcn.0001c1c0(auStack_48,arg2,0x10);
                    iVar1 = fcn.0001c988(&piStackX_8,&uStackX_18,piVar6 + 0x45,-(iVar1 != 0) & arg2);
                    piVar7 = piStackX_8;
                    goto code_r0x00019535;
                }
                piVar6 = NULL;
                piVar7 = NULL;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(iVar3 + 0x308));
    }
    return iVar4;
}


/* fcn.00019d9c @ 0x19d9c */

int64_t fcn.00019d9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    
    iVar1 = *(arg2 + 8);
    iVar2 = *(arg2 + 0x10);
    iVar3 = 0;
    iStackX_10 = *(arg1 + 0x98) + *(iVar1 + 8);
    auStackX_8[0] = (*(iVar1 + 0x10) - *(iVar1 + 8)) + 1;
    if ((*(iVar2 + 0xc) != 0) &&
       (iVar3 = fcn.00019c8c(*(iVar2 + 0x16) + iVar2,auStackX_8[0],&iStackX_10,auStackX_8), iVar3 < 0)) {
        return iVar3;
    }
    *arg3 = iStackX_10;
    *arg4 = auStackX_8[0];
    return iVar3;
}


/* fcn.00019c8c @ 0x19c8c */

int64_t fcn.00019c8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint *puVar2;
    uint uVar3;
    uint var_bp_20h;
    uint var_1ch;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar1 = (**(*0x238a8 + 0x140))(0x22d20,0,&var_18h);
    if (-1 < iVar1) {
        puVar2 = &var_1ch;
        iVar1 = (**var_18h)(var_18h,arg1,arg2 & 0xffffffff,&var_bp_20h,puVar2);
        uVar3 = puVar2 >> 0x20;
        if (((-1 < iVar1) && (iVar1 = (**(*0x238a8 + 0x40))(4,var_bp_20h,&var_8h), -1 < iVar1)) &&
           (iVar1 = (**(*0x238a8 + 0x40))(4,var_1ch,&var_10h), -1 < iVar1)) {
            iVar1 = (**(var_18h + 8))(var_18h,arg1,arg2 & 0xffffffff,var_8h,CONCAT44(uVar3,var_bp_20h),var_10h,
                                      var_1ch);
            (**(*0x238a8 + 0x48))(var_10h);
            if (-1 < iVar1) {
                *arg3 = var_8h;
                *arg4 = var_bp_20h;
            }
        }
    }
    return iVar1;
}


/* fcn.0001a064 @ 0x1a064 */

bool fcn.0001a064(int64_t arg1)

{
    int64_t iVar1;
    bool bVar2;
    ulong *puStackX_10;
    ulong *apuStackX_18 [2];
    
    iVar1 = (**(*0x238a8 + 0x140))(0x22ce0,0,apuStackX_18);
    if (iVar1 < 0) {
        bVar2 = true;
    }
    else {
        iVar1 = (**(*0x238a8 + 0x140))(0x22d00,0,&puStackX_10);
        if (iVar1 < 0) {
            iVar1 = (**apuStackX_18[0])(apuStackX_18[0],*(arg1 + 0xef));
        }
        else {
            iVar1 = (**puStackX_10)(puStackX_10,*(arg1 + 0xe0));
        }
        bVar2 = -1 < iVar1;
    }
    return bVar2;
}


/* fcn.00019e1c @ 0x19e1c */

int64_t fcn.00019e1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *arg2_00;
    uint *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_20 [2];
    int64_t aiStack_38 [2];
    
    if (arg4 == '\0') {
        if (*(arg2 + 8) != 0xb && *(arg2 + 8) != 0xc) {
            return -0x7ffffffffffffff2;
        }
        if (1 < *(arg2 + 0xc)) {
            return -0x7ffffffffffffffe;
        }
    }
    arg2_00 = fcn.0001bc6c(0x28);
    if (arg2_00 != NULL) {
        arg2_00[2] = arg2;
        puVar2 = fcn.0001bc6c(0x18);
        if (arg4 == '\0') {
            if (puVar2 == NULL) {
                return -0x7ffffffffffffff7;
            }
            *puVar2 = 0x180804;
            iVar1 = fcn.000192d8(arg1,arg2,arg3,0);
            auStackX_20[0] = iVar1 - *(arg2 + 0x16);
            aiStack_38[0] = *(arg2 + 0x16) + arg2;
            iVar4 = aiStack_38[0] - *(arg1 + 0x98);
            *(puVar2 + 2) = iVar4;
            *(puVar2 + 4) = iVar4 + -1 + auStackX_20[0];
            arg2_00[1] = puVar2;
            iVar4 = fcn.00019d9c(arg1,arg2_00,aiStack_38,auStackX_20);
            if (iVar4 < 0) {
                return iVar4;
            }
            uVar5 = auStackX_20[0];
            iVar4 = aiStack_38[0];
        }
        else {
            if (puVar2 == NULL) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *arg3;
            uVar5 = *(arg3 + 8);
            *puVar2 = 0x180301;
            puVar2[1] = 3;
            *(puVar2 + 2) = iVar4;
            *(puVar2 + 4) = iVar4 + uVar5;
            arg2_00[1] = puVar2;
            *(arg2_00 + 4) = 1;
            *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x4000;
            *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | 0x4000;
        }
        arg2_00[3] = uVar5;
        iVar3 = fcn.0001bd00(*(arg1 + 0xb0),arg2_00[1]);
        if (iVar3 != 0) {
            iVar4 = (**(*0x238a8 + 200))(0,*0x22fd8,iVar3,iVar4,uVar5,arg2_00);
            if (iVar4 < 0) {
                return iVar4;
            }
            iVar4 = (**(*0x238a8 + 0xd0))(*arg2_00,0,0);
            if (iVar4 < 0) {
                return iVar4;
            }
            iVar4 = fcn.0001bf1c(arg1 + 0x358);
            if (-1 < iVar4) {
                *(*(arg1 + 0x368) + *(arg1 + 0x360) * 8) = arg2_00;
                *(arg1 + 0x360) = *(arg1 + 0x360) + 1;
                if (*(arg1 + 0xa0) == 0) {
                    *(arg1 + 0xa0) = 0x19c08;
                }
                if (*(arg1 + 0x370) == 0) {
                    *(arg1 + 0x370) = 0x19a80;
                }
                (**(*0x238a8 + 0x48))(iVar3);
                return 0;
            }
        }
    }
    return -0x7ffffffffffffff7;
}


/* fcn.0001a0ec @ 0x1a0ec */

int64_t fcn.0001a0ec(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    bool bVar2;
    bool bVar3;
    char cVar4;
    char cVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int16_t *arg2_00;
    uint32_t *arg3;
    uint64_t uVar10;
    uint32_t uVar11;
    int64_t in_R9;
    uint32_t uVar12;
    
    iVar7 = 0;
    iVar8 = 0;
    uVar12 = 0;
    cVar5 = '\0';
    bVar2 = false;
    arg2_00 = *(arg1 + 0x98);
    iVar6 = *(arg1 + 0x90);
    if ((arg2_00 == NULL) && (*(arg1 + 0x3a8) == 0)) {
        return -0x7ffffffffffffff2;
    }
    cVar4 = '\0';
    if (arg2_00 == NULL) goto code_r0x0001a32f;
    if ((arg2 != '\0') && (((*(arg1 + 0x2b8) & 0x4000) == 0 || ((*(arg1 + 0x2c0) & 0x4000) == 0)))) {
        iVar6 = fcn.0001bf1c(0x237b0);
        if (iVar6 < 0) {
            iVar6 = -0x7ffffffffffffff7;
        }
        else {
            *(*0x237c0 + *0x237b8 * 8) = arg1;
            *0x237b8 = *0x237b8 + 1;
            iVar6 = 0;
        }
        bVar2 = true;
        goto code_r0x0001a2be;
    }
    bVar3 = true;
    while( true ) {
        if (iVar6 < 1) {
            return iVar7;
        }
        cVar5 = uVar12;
        uVar11 = 1;
        arg2_00 = arg2_00 + iVar8;
        if (bVar3) break;
        if (*arg2_00 == -0x55ab) goto code_r0x0001a1db;
        iVar8 = 0x200;
code_r0x0001a28e:
        bVar3 = false;
        iVar6 = iVar6 - iVar8;
    }
    cVar4 = cVar5;
    if (*arg2_00 == -0x55ab) {
code_r0x0001a1db:
        iVar1 = *(arg2_00 + 2);
        arg3 = arg2_00[0xc] + arg2_00;
        if (*arg3 == 0x52494350) {
            iVar7 = fcn.0001927c(arg1,arg3);
            uVar12 = uVar12 & 0xff;
            if (-1 < iVar7) {
                uVar12 = uVar11;
            }
            cVar5 = fcn.0001a064(arg1);
            if ((((cVar5 != '\0') && (iVar1 == 0xef1)) && (arg3[5] == '\x03')) &&
               ((uVar12 = 1, arg2 == '\0' || (((*(arg1 + 0x2b8) & 0x4000) != 0 && ((*(arg1 + 0x2c0) & 0x4000) != 0)))))
               ) {
                in_R9 = 0;
                iVar7 = fcn.00019e1c(arg1,arg2_00,arg3,0);
            }
            cVar5 = uVar12;
            if (-1 < *(arg3 + 0x15)) {
                in_R9 = 0;
                iVar8 = fcn.000192d8(arg1,arg2_00,arg3,0);
                goto code_r0x0001a28e;
            }
        }
        cVar4 = cVar5;
        if (cVar5 == '\0') goto code_r0x0001a32f;
    }
    else {
code_r0x0001a32f:
        cVar5 = cVar4;
        if (*0x23900 == '\0') {
            (**(*0x238a8 + 0x48))(*(arg1 + 0x98));
            *(arg1 + 0x98) = 0;
            iVar6 = -0x7ffffffffffffff2;
            *(arg1 + 0x90) = 0;
            goto code_r0x0001a2be;
        }
    }
    iVar6 = 0;
code_r0x0001a2be:
    if (*0x23900 == '\0') {
        if ((*(arg1 + 0x3a8) != 0) && (uVar10 = 0, *(arg1 + 0x3a8) != 0)) {
            do {
                piVar9 = *(*(arg1 + 0x3b0) + uVar10 * 8);
                if ((*(piVar9 + 0x14) != '\0') && (cVar5 = fcn.0001a064(arg1), cVar5 != '\0')) {
                    in_R9 = CONCAT71(in_R9 >> 8,1);
                    iVar6 = fcn.00019e1c(arg1,*piVar9,piVar9,in_R9);
                    if (iVar6 < 0) goto code_r0x0001a36c;
                }
                uVar10 = uVar10 + 1;
            } while (uVar10 < *(arg1 + 0x3a8));
        }
    }
    else if (((!bVar2) && (cVar5 != '\x01')) && (cVar5 = fcn.0001a064(arg1), cVar5 != '\0')) {
        piVar9 = fcn.0001bc6c(0x18);
        if (piVar9 == NULL) {
            return -0x7ffffffffffffff7;
        }
        iVar6 = *(arg1 + 0x98);
        *piVar9 = iVar6;
        piVar9[1] = *(arg1 + 0x90);
        iVar6 = fcn.00019e1c(arg1,iVar6,piVar9,CONCAT71(in_R9 >> 8,1));
        (**(*0x238a8 + 0x48))(piVar9);
        if (iVar6 < 0) {
code_r0x0001a36c:
            return -0x7ffffffffffffff1 - (iVar6 != -0x7ffffffffffffff1);
        }
    }
    return iVar6;
}


/* fcn.0001a40c @ 0x1a40c */

int64_t fcn.0001a40c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStack_28;
    int64_t *apiStack_20 [3];
    
    uStack_28 = 0;
    apiStack_20[0] = NULL;
    iVar2 = 0;
    apiStack_20[1] = NULL;
    apiStack_20[2] = NULL;
    iVar1 = fcn.0001a0ec(arg1,0);
    if (iVar1 < 0) {
        if ((iVar1 == -0x7ffffffffffffff2) || (iVar1 == -0x7fffffffffffffec)) {
            iVar1 = 0;
            goto code_r0x0001a508;
        }
        if (iVar1 != -0x7ffffffffffffff1) {
            return iVar1;
        }
    }
    else {
code_r0x0001a508:
        if (iVar1 != -0x7ffffffffffffff1) {
            if (*(arg1 + 0xa0) != 0) {
                uStack_28 = 0x22c50;
                iVar2 = 2;
                apiStack_20[0] = arg1 + 0xa0;
            }
            goto code_r0x0001a47f;
        }
    }
    iVar1 = 0;
code_r0x0001a47f:
    if (*(arg1 + 0x370) != 0) {
        apiStack_20[iVar2] = arg1 + 0x370;
        apiStack_20[iVar2 + -1] = 0x22d30;
    }
    if ((apiStack_20[0] != NULL) &&
       (iVar1 = (**(*0x238a8 + 0x148))(arg1 + 0xe0,uStack_28,apiStack_20[0],apiStack_20[1],apiStack_20[2],0,0),
       iVar1 < 0)) {
        return iVar1;
    }
    fcn.0001c044(0x237b0,arg2);
    return iVar1;
}


/* fcn.000196e8 @ 0x196e8 */

uint32_t * fcn.000196e8(int64_t arg1)

{
    ulong *puVar1;
    bool bVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    int64_t in_RDX;
    uint32_t *in_R8;
    ulong uVar8;
    int64_t *piVar9;
    uint32_t *arg1_00;
    uint32_t auStack_68 [5];
    uint8_t uStack_53;
    int16_t aiStack_50 [12];
    uint16_t uStack_38;
    
    puVar6 = NULL;
    bVar2 = true;
    puVar7 = arg1 + 0x278;
    iVar4 = *(arg1 + 0x280);
    puVar3 = fcn.00019638(arg1);
    if (-1 < puVar3) {
        return puVar3;
    }
    if (*puVar7 != 0) {
        iVar5 = *(arg1 + 0x3c0);
        if (iVar5 != 0) {
            if (*(iVar5 + 0x18) == '\0') {
                return 0x800000000000000e;
            }
            if ((iVar5 != 0) && (*(iVar5 + 0x18) == '\x04')) goto code_r0x0001976c;
        }
        puVar3 = fcn.00012308(arg1,in_RDX);
        if (puVar3 < 0) {
            return puVar3;
        }
        arg1_00 = puVar6;
        if (iVar4 + 0x200U < *(arg1 + 0x288) + *(arg1 + 0x280)) {
            do {
                in_R8 = puVar6 + iVar4;
                puVar3 = (**(*(arg1 + 0xb8) + 0x18))(*(arg1 + 0xb8),0,in_R8,0x1a,aiStack_50);
                if (puVar3 < 0) goto code_r0x00019910;
                if ((aiStack_50[0] == -0x55ab) && (uStack_38 != 0)) {
                    uVar8 = 0;
                    in_R8 = puVar6 + iVar4 + uStack_38;
                    bVar2 = false;
                    puVar3 = (**(*(arg1 + 0xb8) + 0x18))(*(arg1 + 0xb8),0,in_R8,0x18,auStack_68);
                    if (puVar3 < 0) goto code_r0x00019910;
                    if (auStack_68[0] == 0x52494350) {
                        in_R8 = auStack_68;
                        iVar5 = fcn.000192d8(arg1,puVar6 + iVar4,in_R8,CONCAT71(uVar8 >> 8,1));
                        arg1_00 = puVar6 + iVar5;
                        puVar6 = arg1_00 & 0xffffffff;
                        if ((uStack_53 & 0x80) != 0) break;
                    }
                }
                else {
                    if (bVar2) {
                        puVar3 = 0x800000000000000e;
                        goto code_r0x00019910;
                    }
                    puVar6 = puVar6 + 0x200;
                }
            } while (iVar4 + 0x200 + puVar6 < *(arg1 + 0x288) + *(arg1 + 0x280));
        }
        iVar4 = fcn.0001bc40(arg1_00);
        *(arg1 + 0x98) = iVar4;
        if (iVar4 == 0) {
            puVar3 = 0x8000000000000009;
        }
        else {
            in_R8 = arg1_00;
            fcn.00022960(iVar4,*(arg1 + 0x280),arg1_00);
            *(arg1 + 0x90) = arg1_00;
        }
code_r0x00019910:
        puVar6 = NULL;
        if (*(arg1 + 0xd0) == 5) {
            puVar6 = fcn.000123d0(arg1,3);
        }
        if ((puVar3 != 0x800000000000000e) || (puVar6 != NULL)) {
code_r0x00019a75:
            if (puVar6 < 0) {
                return puVar6;
            }
            goto code_r0x000199e2;
        }
    }
    if (*(arg1 + 0x2e8) != '\0') {
        iVar4 = fcn.0001350c(*(arg1 + 0x2b0),puVar7,*puVar7);
        if (iVar4 != 0) {
            return 0x800000000000000e;
        }
        in_R8 = 0xb;
        iVar4 = fcn.0001350c(*(arg1 + 0x2b0),puVar7,0xb);
        if (iVar4 != 0) {
            return 0x800000000000000e;
        }
    }
    iVar4 = *(arg1 + 0x3c0);
    if (iVar4 != 0) {
        if (*(iVar4 + 0x18) == '\0') {
            return 0x800000000000000e;
        }
        if ((iVar4 != 0) && (*(iVar4 + 0x18) == '\x04')) {
code_r0x0001976c:
            if ((*0x23800 != 0) || (iVar4 = (**(*0x238a8 + 0x140))(0x22c70,0,0x23800), -1 < iVar4)) {
                (**(*0x23800 + 0x10))(*0x23800,*(arg1 + 0xb0),1);
            }
            return 0x800000000000000e;
        }
    }
    puVar3 = fcn.00019440(arg1);
    if ((-1 < puVar3) && (*(arg1 + 0x3a8) != NULL)) {
        piVar9 = *(arg1 + 0x3b0);
        in_R8 = NULL;
        do {
            puVar1 = *piVar9;
            if ((*(puVar1 + 0x14) == '\0') && (*(puVar1 + 2) == *(arg1 + 0xe8))) {
                *(arg1 + 0x98) = *puVar1;
                *(arg1 + 0x90) = puVar1[1];
                *(arg1 + 0x2b8) = *(arg1 + 0x2b8) | 0x4000;
                *(arg1 + 0x2c0) = *(arg1 + 0x2c0) | 0x4000;
                goto code_r0x00019a75;
            }
            in_R8 = in_R8 + 1;
            piVar9 = piVar9 + 1;
        } while (in_R8 < *(arg1 + 0x3a8));
    }
code_r0x000199e2:
    puVar7 = fcn.0001d724(arg1,8,in_R8,arg1);
    if ((-1 < puVar7) || (puVar7 != 0x8000000000000003)) {
        puVar3 = puVar7;
    }
    return puVar3;
}


/* fcn.0001a548 @ 0x1a548 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.0001a548(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint32_t arg2_00;
    uint in_register_00000014;
    int64_t *arg1_00;
    ulong uVar4;
    uint64_t uVar5;
    int64_t *noname_2;
    int64_t iVar6;
    int64_t iVar7;
    bool bVar8;
    int64_t var_30h_2;
    uint uVar9;
    int64_t aiStack_68 [4];
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    uVar5 = 0;
    aiStack_68[2] = 0;
    aiStack_68[3] = 0;
    var_40h = 0;
    var_38h = 0;
    var_30h = 0;
    var_28h = 0;
    if (*(arg1_00 + 0xd4) != '\0') {
        if ((*0x23840 != '\0') && (*0x237b8 != 0)) {
            do {
                if (arg1_00 == *(*0x237c0 + uVar5 * 8)) {
                    uVar5 = fcn.0001a40c(arg1_00,uVar5);
                    return uVar5;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < *0x237b8);
        }
        return 0x8000000000000014;
    }
    iVar7 = arg1_00[0x1a];
    bVar8 = *arg1_00 == *0x23000;
    if (!bVar8) {
        (**(*0x238a8 + 0x160))(arg1_00,0x23000,0xa0);
    }
    if (iVar7 == 1) {
        iVar7 = aiStack_68[2];
        iVar6 = aiStack_68[3];
    }
    else {
        iVar7 = 0x22bf0;
        iVar6 = arg1_00[0x16];
    }
    if (arg1_00[0x78] != 0) {
        (**(*0x238a8 + 0x148))(arg1_00 + 0x1c,0x22c40,arg1_00[0x78],0,0);
    }
    piVar1 = arg1_00 + 0x1c;
    uVar4 = 0x22c00;
    noname_2 = arg1_00;
    uVar2 = (**(*0x238a8 + 0x148))(piVar1,0x22c00,arg1_00,iVar7,iVar6,0,0);
    if (uVar2 < 0) {
        return uVar2;
    }
    *(arg1_00 + 0xd4) = 1;
    if (bVar8) {
        if (((arg1_00[0x13] != 0) && (arg1_00[0x12] != 0)) ||
           ((uVar3 = 0x800000000000000e, arg1_00[0x14] != 0 && (arg1_00[0x6e] != 0)))) {
            uVar3 = uVar5;
        }
    }
    else {
        uVar3 = fcn.000196e8(arg1_00);
    }
    iVar7 = 4;
    if (uVar3 < 0) {
        *(arg1_00 + 0x2ea) = 1;
        arg1_00[0x13] = 0;
        arg1_00[0x12] = 0;
        goto code_r0x0001a7b1;
    }
    if (!bVar8) {
        if (*0x23840 == '\0') {
            arg2_00 = CONCAT71(uVar4 >> 8,1);
        }
        else {
            arg2_00 = 0;
        }
        uVar2 = fcn.0001a0ec(arg1_00,arg2_00);
    }
    if (uVar2 < 0) {
        if ((uVar2 == 0x800000000000000e) || (uVar2 == 0x8000000000000014)) {
            uVar2 = uVar5;
            goto code_r0x0001a764;
        }
        if (uVar2 != 0x800000000000000f) {
            return uVar2;
        }
    }
    else {
code_r0x0001a764:
        if ((uVar2 != 0x800000000000000f) && (arg1_00[0x14] != 0)) {
            var_40h = 0x22c50;
            iVar7 = 6;
            var_38h = arg1_00 + 0x14;
        }
    }
    if (arg1_00[0x6e] != 0) {
        aiStack_68[iVar7 + 1] = arg1_00 + 0x6e;
        aiStack_68[iVar7] = 0x22d30;
    }
code_r0x0001a7b1:
    uVar4 = 0;
    uVar9 = 0;
    uVar2 = fcn.0001d724(arg1_00,4,noname_2,arg1_00);
    if ((uVar2 < 0) && (uVar2 == 0x8000000000000003)) {
        uVar2 = uVar5;
    }
    if (var_38h != 0) {
        uVar4 = 0;
        uVar9 = 0;
        uVar2 = (**(*0x238a8 + 0x148))(piVar1,var_40h,var_38h,var_30h,var_28h,0,0);
        if (uVar2 < 0) {
            return uVar2;
        }
    }
    if (1 < arg1_00[0x1a]) {
        uVar2 = (**(*0x238a8 + 0x118))(arg1,0x22b80,arg1_00 + 0x17,*0x22fe0,*piVar1,CONCAT44(uVar9,8),uVar4);
    }
    return uVar2;
}


/* fcn.0001a880 @ 0x1a880 */

int64_t fcn.0001a880(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg2_00;
    bool bVar1;
    bool bVar2;
    bool bVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    bVar2 = false;
    bVar1 = false;
    bVar3 = false;
    iVar5 = -0x7ffffffffffffff2;
    if ((arg3 == 0) || (((*arg3 == '\x01' && (*(arg3 + 1) == '\x01')) && (*(arg3 + 3) * 0x100 + *(arg3 + 2) == 6)))) {
        if (*(arg2 + 0xa70) == 0) {
            iVar5 = -0x7ffffffffffffff2;
        }
        else {
            uVar4 = 0;
            if (*(arg2 + 0xa70) != 0) {
                do {
                    arg2_00 = *(*(arg2 + 0xa78) + uVar4 * 8);
                    if (*(arg2_00 + 0x2fc) == '\0') {
                        if (arg3 == 0) {
                            iVar5 = fcn.0001a548(arg1,arg2_00);
                            if (iVar5 < 0) {
                                if (iVar5 != -0x7fffffffffffffec) {
                                    return iVar5;
                                }
                                bVar1 = true;
                                iVar5 = 0;
                                bVar2 = bVar3;
                            }
                            else {
                                bVar2 = true;
                            }
                            bVar3 = bVar2;
                            if (*(arg2_00 + 0xd0) == 2) {
                                iVar5 = fcn.0001a880(arg1,arg2_00,0);
                                if (iVar5 < 0) {
                                    if ((iVar5 != -0x7fffffffffffffec) && (iVar5 != -0x7ffffffffffffff2))
                                    goto code_r0x0001aa4d;
                                    bVar1 = true;
                                    iVar5 = 0;
                                }
                                else {
                                    bVar2 = true;
                                    bVar3 = true;
                                }
                            }
                        }
                        else if ((*(arg3 + 5) == *(arg2_00 + 0xda)) && (*(arg3 + 4) == *(arg2_00 + 0xd9))) {
                            iVar5 = fcn.0001a548(arg1,arg2_00);
                            if ((iVar5 < 0) && (iVar5 != -0x7fffffffffffffec)) {
                                return iVar5;
                            }
                            if (*(arg2_00 + 0xd0) != 2) {
                                return iVar5;
                            }
                            if (*(arg3 + 6) != '\x7f') {
                                iVar5 = fcn.0001a880(arg1,arg2_00,arg3 + 6);
                                return iVar5;
                            }
                            return iVar5;
                        }
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < *(arg2 + 0xa70));
                if (((-1 < iVar5) && (bVar1)) && (!bVar2)) {
                    iVar5 = -0x7fffffffffffffec;
                }
            }
        }
    }
    else {
        iVar5 = -0x7ffffffffffffffe;
    }
code_r0x0001aa4d:
    return iVar5;
}


/* fcn.0001ad9c @ 0x1ad9c */

void fcn.0001ad9c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (*(iVar2 + 0xa70) != 0) {
        do {
            iVar1 = *(*(iVar2 + 0xa78) + uVar3 * 8);
            arg1_00 = iVar1;
            if (*(iVar1 + 0xd0) == 2) {
                iVar1 = fcn.0001ad9c(arg1_00,arg2,arg3);
            }
            else {
                iVar1 = fcn.0001abd0(arg1_00,arg2,arg3);
            }
            if (iVar1 < 0) {
                return;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0xa70));
    }
    fcn.0001abd0(arg1,arg2,arg3);
    return;
}


/* fcn.0001abd0 @ 0x1abd0 */

//WARNING: Variable defined which should be unmapped: var_17h

int64_t fcn.0001abd0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    ulong *puVar3;
    uint64_t uVar4;
    bool bVar5;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_2fh;
    int64_t var_37h;
    int64_t var_3fh;
    int64_t var_47h;
    int64_t var_4fh;
    int64_t aiStack_48 [8];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    aiStack_48[2] = 0;
    aiStack_48[3] = 0;
    aiStack_48[4] = 0;
    aiStack_48[5] = 0;
    aiStack_48[6] = 0;
    aiStack_48[7] = 0;
    if (*(iVar2 + 0xd4) != '\0') {
        if (*(iVar2 + 0xd0) == 1) {
            *(iVar2 + 0xd4) = 0;
        }
        else {
            bVar5 = *(iVar2 + 0xe0) != arg2;
            if (bVar5) {
                iVar1 = (**(*0x238a8 + 0x120))(arg2,0x22b80,*0x22fe0);
            }
            if (-1 < iVar1) {
                aiStack_48[0] = 0x22c00;
                iVar1 = 2;
                if (bVar5) {
                    aiStack_48[2] = 0x22bf0;
                    aiStack_48[3] = *(iVar2 + 0xb0);
                    iVar1 = 4;
                }
                if (*(iVar2 + 0xa0) != 0) {
                    aiStack_48[iVar1 + 1] = iVar2 + 0xa0;
                    aiStack_48[iVar1] = 0x22c50;
                }
                if (*(iVar2 + 0x370) != 0) {
                    aiStack_48[iVar1 + 3] = iVar2 + 0x370;
                    aiStack_48[iVar1 + 2] = 0x22d30;
                }
                aiStack_48[1] = iVar2;
                iVar1 = (**(*0x238a8 + 0x150))
                                  (*(iVar2 + 0xe0),0x22c00,iVar2,aiStack_48[2],aiStack_48[3],aiStack_48[4],
                                   aiStack_48[5],aiStack_48[6],aiStack_48[7],0,0);
                if (-1 < iVar1) {
                    *(iVar2 + 0xd4) = 0;
                    if (arg3 != 0) {
                        uVar4 = 0;
                        if (*(arg3 + 8) != 0) {
                            puVar3 = *(arg3 + 0x10);
                            do {
                                if (*(iVar2 + 0xe0) == **puVar3) {
                                    fcn.0001c044(arg3,uVar4);
                                    *(iVar2 + 0xe0) = 0;
                                    iVar1 = 0;
                                    goto code_r0x0001ad6b;
                                }
                                uVar4 = uVar4 + 1;
                                puVar3 = puVar3 + 1;
                            } while (uVar4 < *(arg3 + 8));
                        }
                        iVar1 = -0x7ffffffffffffff2;
                    }
code_r0x0001ad6b:
                    *(iVar2 + 0xe0) = 0;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.000114f8 @ 0x114f8 */

void fcn.000114f8(void)

{
    int64_t iVar1;
    int64_t var_bp_10h;
    uint uStack_18;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_bp_10h = 0;
    uStack_18 = 0x97cdc6be;
    var_ch = 0x47827792;
    var_8h = -0x1c199246;
    var_4h = -0x2753a945;
    iVar1 = (**(*0x238b0 + 0x48))(L"CSM_CMN",&uStack_18,0,&var_bp_10h,*0x23810);
    if (iVar1 < 0) {
        if (iVar1 == -0x7ffffffffffffff2) {
            return;
        }
        if (iVar1 != -0x7ffffffffffffffb) {
            return;
        }
        *0x23810 = fcn.0001bc6c(var_bp_10h);
        if (*0x23810 == 0) {
            return;
        }
        iVar1 = (**(*0x238b0 + 0x48))(L"CSM_CMN",&uStack_18,0,&var_bp_10h,*0x23810);
        if (iVar1 < 0) {
            return;
        }
    }
    var_bp_10h = 0x1b;
    *0x237d8 = fcn.0001bc6c(0x1b);
    if (((*0x237d8 != 0) &&
        (iVar1 = (**(*0x238b0 + 0x48))(L"ROM_CMN",&uStack_18,0x22d50,&var_bp_10h,*0x237d8), iVar1 < 0)) &&
       (iVar1 == -0x7ffffffffffffff2)) {
        if (*0x237d8 != 0) {
            (**(*0x238a8 + 0x48))();
        }
        *0x237d8 = 0;
    }
    return;
}


/* fcn.0001d500 @ 0x1d500 */

int64_t fcn.0001d500(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    if (arg1 == 0) {
        if (arg2 != 0) {
code_r0x0001d547:
            iVar1 = fcn.0001d344(arg2,in_stack_00000028,in_stack_00000030);
            goto code_r0x0001d559;
        }
        if (arg3 == 0) {
            if (arg4 == 0) {
                return -0x7ffffffffffffffe;
            }
            goto code_r0x0001d57f;
        }
code_r0x0001d563:
        iVar1 = fcn.0001d250(arg3,in_stack_00000028,in_stack_00000030);
    }
    else {
        iVar1 = fcn.0001d43c(arg1);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (arg2 != 0) goto code_r0x0001d547;
code_r0x0001d559:
        if (iVar1 < 0) {
            return iVar1;
        }
        if (arg3 != 0) goto code_r0x0001d563;
    }
    if (iVar1 < 0) {
        return iVar1;
    }
    if (arg4 == 0) {
        return iVar1;
    }
code_r0x0001d57f:
    iVar1 = fcn.0001d164(arg4,in_stack_00000028,in_stack_00000030);
    return iVar1;
}


/* fcn.00018674 @ 0x18674 */

//WARNING: Variable defined which should be unmapped: var_fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Removing unreachable block (ram,0x000190c1)

int64_t fcn.00018674(int64_t arg1)

{
    int64_t *arg2;
    int64_t *arg3;
    uint8_t uVar1;
    int iVar2;
    uint8_t uVar3;
    char cVar4;
    int64_t iVar5;
    int *piVar6;
    int64_t iVar7;
    int64_t *piVar8;
    uint64_t uVar9;
    ulong uVar10;
    char *pcVar11;
    char cVar12;
    int64_t *piVar13;
    int64_t *piVar14;
    uint64_t uVar15;
    int64_t *in_R9;
    int64_t *piVar16;
    int64_t arg1_00;
    uint64_t uVar17;
    bool bVar18;
    int32_t var_bh;
    int32_t var_fh;
    int32_t var_13h;
    int32_t var_17h;
    int32_t var_1bh;
    int32_t var_1fh;
    int32_t var_23h;
    uint uStackX_20;
    uchar uStackX_24;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    char *pcStack_88;
    uint64_t uStack_80;
    uint64_t uStack_78;
    ulong uStack_68;
    uchar auStack_60 [8];
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int64_t var_29h;
    uint32_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar5 = fcn.00018058(arg1);
    piVar16 = NULL;
    if (-1 < iVar5) {
        if (*(*0x23880 + 0x89) == '\0') {
            uStack_78 = 0;
            *0x2394e = 0;
            *0x23878 = 0;
            *0x237d0 = 0;
            if (*0x23a78 != 0) {
                do {
                    arg1_00 = uStack_78 * 0x98 + *0x23880;
                    fcn.000108d0(arg1_00,0);
                    fcn.000108d0(arg1_00,1);
                    uStack_80 = 0;
                    if (*(arg1_00 + 0x30) != 0) {
code_r0x00018726:
                        piVar13 = *(*(arg1_00 + 0x38) + uStack_80 * 8);
                        if (*(piVar13 + 0xd7) == '\0') {
                            (**(*(arg1_00 + 0x48) + 0x18))(*(arg1_00 + 0x48),piVar13[0x1c],&pcStack_88);
                            piVar14 = 0x23758;
                            (**(*(arg1_00 + 0x48) + 0x10))(*(arg1_00 + 0x48));
                            if (((*(pcStack_88 + 0xe) == 0) && (*(pcStack_88 + 0x16) == 0)) &&
                               (*(pcStack_88 + 0x26) == 0)) {
                                return -0x7ffffffffffffffe;
                            }
                            pcVar11 = pcStack_88;
                            iVar5 = fcn.0001da68(pcStack_88,0);
                            if (iVar5 == 0) {
                                return -0x7ffffffffffffff9;
                            }
                            uVar1 = pcVar11[0xe];
                            if (*0x23900 == '\0') {
                                iVar5 = piVar13[0x17];
                                arg2 = piVar13 + 0x60;
                                if (*(iVar5 + 0x1e8) == 0x24524252494d4124) {
                                    *arg2 = *(iVar5 + 0x1d0);
                                    piVar13[99] = *(iVar5 + 0x1d8);
                                }
                                else {
                                    iVar2 = *(iVar5 + 0x90);
                                    arg3 = piVar13 + 99;
                                    if (((arg2 != NULL) && (arg3 != NULL)) &&
                                       ((iVar5 = fcn.0001c59c(), -1 < iVar5 &&
                                        (piVar14 = *(*0x238f8 + 0x18), piVar14 != NULL)))) {
                                        piVar6 = *0x238f8 + 0x24;
                                        piVar8 = piVar16;
                                        do {
                                            if ((((*(piVar6 + 0x35) & 2) != 0) && (*piVar6 == iVar2)) &&
                                               (*(piVar6 + 1) == uVar1)) {
                                                *arg2 = piVar6 + -1;
                                                *arg3 = piVar8;
                                                goto code_r0x000188af;
                                            }
                                            piVar8 = piVar8 + 1;
                                            piVar6 = piVar6 + 0x159;
                                        } while (piVar8 < piVar14);
                                    }
                                    uStackX_20 = 0;
                                    uStackX_24 = 0;
                                    in_R9 = piVar13;
                                    iVar5 = fcn.0001d724(piVar13,0x10,piVar14,piVar13);
                                    if ((-1 < iVar5) && (uStackX_24 = 0, arg2 != NULL)) {
                                        fcn.0001c6d4(&uStackX_20,arg2,arg3);
                                    }
                                }
code_r0x000188af:
                                if ((*(piVar13[0x19] + 0x18) != 0) ||
                                   (iVar5 = fcn.0001c78c(**arg2,piVar13[0x19] + 0x18), iVar5 < 0))
                                goto code_r0x000188f4;
                                *(piVar13[0x19] + 0x20) = **arg2;
                            }
                            *(*0x23838 + uStack_78 * 8) = piVar13[0x19];
code_r0x000188f4:
                            bVar18 = *0x23900 == '\0';
                            *(piVar13 + 0xdb) = uVar1;
                            if (bVar18) {
                                *(piVar13 + 0xda) = *(piVar13[0x60] + 9);
                                *(piVar13 + 0xd9) = *(piVar13[0x60] + 10);
                            }
                            fcn.00012a9c(piVar13);
                            if ((*0x23900 == '\0') && (*(piVar13[0x17] + 0x1e8) == 0x24524252494d4124)) {
                                *(piVar13 + 0x77) = *(piVar13[0x17] + 0x1f0);
                            }
                            else {
                                *(piVar13 + 0x77) = 0;
                            }
                            *(piVar13 + 0x79) = 1;
                            uVar15 = uVar1;
                            piVar14 = piVar13 + 0x57;
                            piVar13[0x7a] = uVar15;
                            piVar13[0x7b] = *(pcStack_88 + 0x26);
                            (**(piVar13[0x17] + 0x78))(piVar13[0x17],piVar14,piVar13 + 0x58);
                            iVar5 = CONCAT71(piVar14 >> 8,uVar1);
                            fcn.00021574(piVar13,iVar5);
                            cVar4 = '\0';
                            *0x23798 = 0;
code_r0x000189aa:
                            *0x23818 = '\0';
                            *0x23950 = *(pcStack_88 + 0x26) + -1 + uVar15;
                            *0x237d0 = uVar15;
                            *0x23878 = uVar15;
                            *0x2394e = uVar1;
code_r0x000189db:
                            iVar5 = CONCAT71(iVar5 >> 8,cVar4);
                            iVar7 = fcn.0001682c(piVar13,iVar5);
                            cVar12 = *0x23818;
                            if (iVar7 < 0) {
                                if ((*0x23818 != '\0') && (iVar7 == -0x7ffffffffffffff7)) goto code_r0x00018a82;
                                if (iVar7 != -0x7ffffffffffffff2) {
                                    return iVar7;
                                }
                            }
                            else {
                                if (cVar4 != '\0') {
                                    *0x23878 = *0x237d0 + *0x23798;
                                    *0x23798 = 0;
                                    *0x23818 = '\x01';
                                    fcn.00016738(piVar13,0);
                                    if (*0x23918 != NULL) {
                                        (**(*0x238a8 + 0x48))();
                                    }
                                    goto code_r0x00018b44;
                                }
                                if (*0x23878 < *(piVar13 + 0xdb)) {
                                    *0x23878 = *(piVar13 + 0xdb);
                                }
                                *(piVar13 + 0xdb) = *0x23878;
                                piVar13[0x7a] = *0x23878;
                            }
                            uVar17 = *0x23878;
                            if (*(piVar13 + 0xdb) != -1) goto code_r0x00018a5e;
                            goto code_r0x00018a76;
                        }
                        goto code_r0x00018d75;
                    }
code_r0x00018d8c:
                    fcn.000108d0(arg1_00,2);
                    fcn.0001bbc8(1,0x2011001);
                    uVar10 = 0;
                    fcn.000108d0(arg1_00,3);
                    uStack_80 = 0;
                    if (*(arg1_00 + 0x30) != 0) {
                        do {
                            uVar15 = CONCAT71(in_R9 >> 8,*0x23758) & 0xffffffffffffff01;
                            *0x23819 = '\0';
                            iVar5 = *(*(arg1_00 + 0x38) + uStack_80 * 8);
                            fcn.00017914(iVar5,8,2,uVar15);
                            uVar15 = CONCAT71(uVar15 >> 8,*0x23758) & 0xffffffffffffff01;
                            fcn.00017914(iVar5,9,CONCAT71(*0x23759,*0x23758) >> 1 & 1 | 2,uVar15);
                            in_R9 = CONCAT71(uVar15 >> 8,*0x23758) & 0xffffffffffffff01;
                            fcn.00017914(iVar5,10,CONCAT71(*0x23759,*0x23758) >> 1 & 1 | 2,in_R9);
                            cVar4 = '\0';
                            do {
                                *0x23830 = 0;
                                if (cVar4 != '\0') {
                                    fcn.00015638(iVar5);
                                }
                                fcn.000158a8(iVar5);
                                if (*0x237a0 != '\0') {
                                    fcn.00015730(iVar5);
                                }
                                *(iVar5 + 0xd6) = 1;
                                iVar7 = fcn.00017f00(iVar5,&pcStack_88);
                                if (iVar7 < 0) {
                                    return iVar7;
                                }
                                uVar10 = *(iVar5 + 0xe0);
                                iVar7 = (**(*(arg1_00 + 0x48) + 0x28))(*(arg1_00 + 0x48),uVar10,pcStack_88);
                                if (iVar7 < 0) {
                                    uStack_58 = 0xef152fb4;
                                    in_R9 = NULL;
                                    uStack_54 = 0x427d7b2f;
                                    uStack_50 = 0xa7eb4bd;
                                    uStack_4c = 0x646e8205;
                                    stack0x00000010 = 9;
                                    (**(*0x238b0 + 0x58))(L"BootFlow",&uStack_58,2,4,&var_17h + 1);
                                    uVar10 = *(iVar5 + 0xe0);
                                    *0x23819 = '\x01';
                                    (**(*(arg1_00 + 0x48) + 0x30))(*(arg1_00 + 0x48),uVar10,auStack_60);
                                    (**(*0x238a8 + 0x48))(pcStack_88);
                                }
                                else {
                                    *0x23819 = '\0';
                                }
                                cVar4 = *0x23819;
                            } while (*0x23819 != '\0');
                            uStack_80 = uStack_80 + 1;
                        } while (uStack_80 < *(arg1_00 + 0x30));
                    }
                    iVar5 = fcn.0001c0f0(0,CONCAT71(uVar10 >> 8,1));
                    if (-1 < iVar5) {
                        fcn.0001bbc8(0x80000002,0x2010009);
                    }
                    iVar5 = fcn.000108d0(arg1_00,4);
                    fcn.0001bbc8(1,0x2010004);
                    if (iVar5 < 0) {
                        uStack_48 = 0xef152fb4;
                        in_R9 = NULL;
                        uStack_44 = 0x427d7b2f;
                        uStack_40 = 0xa7eb4bd;
                        uStack_3c = 0x646e8205;
                        stack0x00000018 = 9;
                        (**(*0x238b0 + 0x58))(L"BootFlow",&uStack_48,2,4,&var_1fh + 1);
                        *0x23819 = 1;
                        iVar5 = fcn.000108d0(arg1_00,6);
                        if (iVar5 < 0) {
                            return iVar5;
                        }
                        piVar13 = piVar16;
                        if (*(arg1_00 + 0x30) != 0) {
                            do {
                                iVar5 = *(*(arg1_00 + 0x38) + piVar13 * 8);
                                *0x23830 = 0;
                                fcn.00015638(iVar5);
                                fcn.000158a8(iVar5);
                                if (*0x237a0 != '\0') {
                                    fcn.00015730(iVar5);
                                }
                                *(iVar5 + 0xd6) = 1;
                                iVar7 = fcn.00017f00(iVar5,&uStack_68);
                                if (iVar7 < 0) {
                                    return iVar7;
                                }
                                iVar5 = (**(*(arg1_00 + 0x48) + 0x28))(*(arg1_00 + 0x48),*(iVar5 + 0xe0),uStack_68);
                                if (iVar5 < 0) {
                                    return iVar5;
                                }
                                piVar13 = piVar13 + 1;
                            } while (piVar13 < *(arg1_00 + 0x30));
                            if (iVar5 < 0) {
                                return iVar5;
                            }
                        }
                        iVar5 = fcn.000108d0(arg1_00,4);
                        fcn.0001bbc8(1,0x2010004);
                        if (iVar5 < 0) {
                            fcn.0001bbc8(0x80000002,0x2010009);
                            do {
                            } while( true );
                        }
                        *0x23819 = '\0';
                    }
                    fcn.000108d0(arg1_00,5);
                    uStack_80 = 0;
                    if (*(arg1_00 + 0x30) != 0) {
                        do {
                            iVar5 = *(*(arg1_00 + 0x38) + uStack_80 * 8);
                            iVar7 = (**(*(iVar5 + 0xb8) + 0x88))(*(iVar5 + 0xb8),&pcStack_88);
                            if (iVar7 != -0x5ffffffffffffffe) {
                                if (iVar7 < 0) {
                                    return iVar7;
                                }
                                for (pcVar11 = pcStack_88; *pcVar11 != 'y'; pcVar11 = pcVar11 + 0x2e) {
                                    cVar4 = pcVar11[3];
                                    if (cVar4 == '\x01') {
                                        uVar15 = 1;
                                        uVar17 = 3;
code_r0x0001915a:
                                        in_R9 = uVar15 * 0x40 + 0x3d8 + iVar5;
                                        piVar13 = iVar5 + 0x770 + uVar15 * 0x58;
                                        do {
                                            uVar9 = *piVar13 + *in_R9;
                                            if ((cVar4 == '\0') && ((uVar9 & 0xfff) != 0)) {
                                                uVar9 = (uVar9 | 0xfff) + 1;
                                            }
                                            if (((in_R9[-1] == 0) && (*in_R9 != 0)) &&
                                               (piVar14 = in_R9 + -2, uVar9 <= *(pcVar11 + 0x26))) break;
                                            uVar15 = uVar15 + 1;
                                            in_R9 = in_R9 + 8;
                                            piVar13 = piVar13 + 0xb;
                                            piVar14 = piVar16;
                                        } while (uVar15 < uVar17);
                                        if (piVar14 != NULL) {
                                            piVar14[1] = *(pcVar11 + 0xe);
                                        }
                                    }
                                    else if (cVar4 == '\0') {
                                        uVar15 = 3;
                                        uVar17 = 7;
                                        goto code_r0x0001915a;
                                    }
                                }
                                iVar7 = fcn.00017bac(iVar5);
                                if (iVar7 < 0) {
                                    return iVar7;
                                }
                                *(iVar5 + 0xd4) = 1;
                            }
                            uStack_80 = uStack_80 + 1;
                        } while (uStack_80 < *(arg1_00 + 0x30));
                    }
                    fcn.000108d0(arg1_00,7);
                    *(arg1_00 + 0x89) = 1;
                    iVar5 = fcn.000108d0(arg1_00,8);
                    uStack_78 = uStack_78 + 1;
                } while (uStack_78 < *0x23a78);
            }
        }
        else {
            iVar5 = 0;
        }
    }
code_r0x0001925f:
    return iVar5;
code_r0x00018a82:
    if (cVar4 != '\0') goto code_r0x00018ac4;
    iVar5 = CONCAT71(iVar5 >> 8,1);
    fcn.00016738(piVar13,iVar5);
    if (*0x23918 != NULL) {
        (**(*0x238a8 + 0x48))();
    }
    *0x23918 = NULL;
    cVar4 = '\x01';
    *0x23910 = 0;
    *0x23908 = 0;
    goto code_r0x000189aa;
code_r0x00018ac4:
    fcn.00016738(piVar13,0);
    if (*0x23918 != NULL) {
        (**(*0x238a8 + 0x48))();
    }
    *0x23798 = 0;
    *0x23878 = uVar1 - 1;
code_r0x00018b44:
    *0x23910 = 0;
    *0x23908 = 0;
    *0x23918 = NULL;
    uVar17 = *0x23878;
    cVar12 = *0x23818;
code_r0x00018b63:
    if (*0x23850 == '\0') {
        *0x23850 = cVar12;
        if (cVar12 == '\0') {
            uVar9 = *0x23910;
            if (*0x23910 != 0) {
                do {
                    iVar7 = **0x23918;
                    if ((*(iVar7 + 0x396) != '\0') || (uVar3 = 1, *(iVar7 + 0x2d0) == 0)) {
                        uVar3 = 0;
                    }
                    bVar18 = uVar3 ^ 1;
                    if ((bVar18) || (((*(*(iVar7 + 0x2d0) + 2) & 0xf0) - 0x90 & 0xffef) != 0)) {
code_r0x00018c35:
                        iVar5 = *(iVar7 + 0xc0);
                        if ((iVar5 != 0) && ((*(iVar5 + 0x396) != '\0' || (*(iVar5 + 0x2d0) == 0)))) {
                            bVar18 = true;
                        }
                        if ((bVar18) && (iVar5 != 0)) {
                            uVar9 = CONCAT71(uVar9 >> 8,1);
                            goto code_r0x00018c66;
                        }
                        iVar5 = fcn.000209cc(iVar7);
                        if (iVar5 < 0) {
                            return iVar5;
                        }
                    }
                    else {
                        iVar5 = iVar7;
                        cVar4 = fcn.0001dd94(iVar7);
                        if ((cVar4 == '\0') || (iVar5 = fcn.0001e4ac(iVar5), -1 < iVar5)) {
                            uVar9 = *(*(iVar7 + 0x2d0) + 4) & 7;
                            iVar5 = fcn.000205a4(iVar7,uVar9);
                            if (-1 < iVar5) {
                                *(*(iVar7 + 0x2d0) + 0x13) = 1;
                            }
                        }
                        if (iVar5 < 0) {
                            if (iVar5 == -0x7ffffffffffffff2) goto code_r0x00018c35;
                            goto code_r0x0001925f;
                        }
                        uVar9 = 0;
code_r0x00018c66:
                        fcn.00020000(iVar7,uVar9);
                    }
                } while (*0x23910 != 0);
                uVar17 = *0x23878;
                cVar12 = *0x23818;
            }
        }
    }
    *(piVar13 + 0xdb) = uVar1;
    piVar13[0x7a] = uVar17;
    iVar5 = (uVar17 - uVar15) + 1;
    piVar13[0x7b] = iVar5;
    *(pcStack_88 + 0x26) = iVar5;
    *(pcStack_88 + 0x16) = iVar5 + *(pcStack_88 + 0xe) + -1;
    iVar5 = fcn.0001ba14();
    (**(iVar5 + 0xa0))(0x1da,cVar12);
    (**(*(arg1_00 + 0x48) + 0x20))(*(arg1_00 + 0x48),piVar13[0x1c],pcStack_88);
    if (*0x23850 != '\0') {
        if ((*0x23818 != '\0') && (uStack_80 < *(arg1_00 + 0x30) - 1U)) {
            iVar5 = fcn.0001ba14();
            (**(iVar5 + 0xa0))(0x1da,0);
            goto code_r0x00018d75;
        }
        if (uStack_80 == *(arg1_00 + 0x30) - 1U) {
            fcn.0001bbc8(0x80000002,0x2010009);
            do {
            } while( true );
        }
    }
    (**(*0x238a8 + 0x48))(pcStack_88);
code_r0x00018d75:
    uStack_80 = uStack_80 + 1;
    if (*(arg1_00 + 0x30) <= uStack_80) goto code_r0x00018d8c;
    goto code_r0x00018726;
code_r0x00018a5e:
    uVar3 = *(piVar13 + 0xdb) + 1;
    *(piVar13 + 0xdb) = uVar3;
    piVar13[0x7a] = piVar13[0x7a] + 1;
    if (uVar1 < uVar3) {
code_r0x00018a76:
        goto code_r0x00018b63;
    }
    goto code_r0x000189db;
}


/* fcn.00012e74 @ 0x12e74 */

int64_t fcn.00012e74(void)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uchar *arg1;
    int64_t iVar8;
    uint64_t uVar9;
    uchar *arg1_00;
    int64_t iVar10;
    int64_t iStackX_8;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    ulong uStack_60;
    uint64_t uStack_58;
    int64_t iStack_50;
    
    uVar4 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    iStack_50 = 0;
    uVar9 = *0x23a78;
    iVar1 = iStackX_8;
    uVar6 = uVar4;
    if (*0x23a78 != 0) {
        do {
            iVar8 = *(*0x23838 + uVar6 * 8);
            uVar5 = uVar4;
            if (*(iVar8 + 0x30) != 0) {
                do {
                    iVar1 = fcn.00012d44(*(*(iVar8 + 0x38) + uVar5 * 8) + 0x3c8,&uStack_60);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < *(iVar8 + 0x30));
                uVar9 = *0x23a78;
                iStackX_8 = iVar1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar9);
    }
    *(*0x238f0 + 0x58) = uStack_58 << 4;
    uVar2 = fcn.0001bc6c(uStack_58 << 4);
    *(*0x238f0 + 0x50) = uVar2;
    *(*0x238f0 + 0x68) = uStack_58 * 0xb;
    uVar2 = fcn.0001bc6c(uStack_58 * 0xb);
    *(*0x238f0 + 0x60) = uVar2;
    if ((*(*0x238f0 + 0x50) == 0) || (*(*0x238f0 + 0x60) == 0)) {
        iVar1 = -0x7ffffffffffffff7;
        iStackX_8 = -0x7ffffffffffffff7;
    }
    if (-1 < iVar1) {
        uStackX_18 = 0;
        iVar8 = *0x238f0;
        if (uStack_58 != 0) {
            iStackX_20 = 0;
            do {
                uVar9 = 0;
                arg1_00 = *(iVar8 + 0x50) + iStackX_20;
                arg1 = *(iVar8 + 0x60) + uVar4;
                iVar1 = *(iStack_50 + uStackX_18 * 8);
                iVar7 = *(iVar1 + 800);
                if ((((iVar7 == 0) || (iVar10 = *(iVar1 + 0x328), iVar10 == 0)) ||
                    (((*(iVar7 + 0xc) == 0 && *(iVar7 + 9) == 0) && *(iVar7 + 6) == 0) && *(iVar7 + 3) == 0)) ||
                   (((*(iVar10 + 8) == '\0' && *(iVar10 + 6) == '\0') && *(iVar10 + 4) == '\0') && *(iVar10 + 2) == '\0'
                   )) {
                    iVar7 = *(iVar1 + 0xc0);
                    if ((iVar7 != 0) && (*0x23900 == '\0')) {
code_r0x00013058:
                        iVar10 = *(iVar7 + 800);
                        if (((iVar10 == 0) ||
                            ((iVar3 = *(iVar7 + 0x328), iVar3 == 0 ||
                             (((*(iVar10 + 0xc) == 0 && *(iVar10 + 9) == 0) && *(iVar10 + 6) == 0) && *(iVar10 + 3) == 0
                             )))) || (((*(iVar3 + 8) == '\0' && *(iVar3 + 6) == '\0') && *(iVar3 + 4) == '\0') &&
                                      *(iVar3 + 2) == '\0')) goto code_r0x00013094;
                        uVar6 = *(iVar1 + 0xda) & 3;
                        iVar8 = uVar6 * 3;
                        iVar10 = uVar6 * 2;
                        do {
                            if (uVar6 + uVar9 < 4) {
                                fcn.00022ac0(arg1_00 + iVar8 + uVar6 * -3 + 2,*(iVar7 + 800) + 2 + iVar8,3);
                                iVar3 = *(iVar7 + 0x328) + 2;
                            }
                            else {
                                fcn.00022ac0(arg1_00 + iVar8 + uVar6 * -3 + 2,*(iVar7 + 800) + -10 + iVar8,3);
                                iVar3 = *(iVar7 + 0x328) + -6;
                            }
                            fcn.00022ac0(arg1 + iVar10 + uVar6 * -2 + 2,iVar3 + iVar10,2);
                            uVar9 = uVar9 + 1;
                            iVar8 = iVar8 + 3;
                            iVar10 = iVar10 + 2;
                        } while (uVar9 < 4);
                        *arg1_00 = *(iVar1 + 0xdb);
                        arg1_00[1] = *(iVar1 + 0xda) << 3 | arg1_00[1] & 7;
                        *arg1 = *(iVar1 + 0xdb);
                        arg1[1] = *(iVar1 + 0xda);
                        if ((*(*(iVar1 + 0x300) + 0x3b) & 1) == 0) {
                            arg1_00[0xe] = *(*(iVar1 + 0x300) + 0x31);
                        }
                        else {
                            arg1_00[0xe] = 0;
                        }
                        goto code_r0x000131b8;
                    }
                }
                else {
                    fcn.00022ac0(arg1_00,iVar7,0x10);
                    fcn.00022ac0(arg1,*(iVar1 + 0x328),0xb);
code_r0x000131b8:
                    iVar8 = *0x238f0;
                }
code_r0x000131bf:
                uStackX_18 = uStackX_18 + 1;
                iStackX_20 = iStackX_20 + 0x10;
                uVar4 = uVar4 + 0xb;
            } while (uStackX_18 < uStack_58);
            iVar1 = iStackX_8;
        }
        *(iVar8 + 4) = 1;
        if ((uStack_58 != 0) && (iStack_50 != 0)) {
            (**(*0x238a8 + 0x48))();
        }
    }
    return iVar1;
code_r0x00013094:
    if ((*(iVar7 + 0xd0) == 1) || (iVar7 = *(iVar7 + 0xc0), iVar7 == 0)) goto code_r0x000131bf;
    goto code_r0x00013058;
}


/* fcn.0001aa5c @ 0x1aa5c */

int64_t fcn.0001aa5c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    iVar3 = -0x7ffffffffffffff9;
    if (arg2 != 0) {
        if (*arg2 == '\x7f') {
            return 0;
        }
        if (((*arg2 != '\x01') || (*(arg2 + 1) != '\x01')) || (*(arg2 + 3) * 0x100 + *(arg2 + 2) != 6)) {
            return -0x7ffffffffffffffd;
        }
        iVar3 = 0;
    }
    uVar5 = 0;
    if (*0x23a78 != 0) {
        do {
            uVar4 = 0;
            iVar1 = *(*0x23838 + uVar5 * 8);
            if (*(iVar1 + 0x30) != 0) {
                piVar2 = *(iVar1 + 0x38);
                do {
                    arg2_00 = *piVar2;
                    if (*(arg2_00 + 0xe0) == arg1) {
                        iVar3 = (**(*0x238a8 + 0x118))
                                          (*(arg2_00 + 0xe0),0x22b80,arg2_00 + 0xb8,*0x22fe0,*(arg2_00 + 0xe0),0x10
                                          );
                        if ((iVar3 < 0) && (iVar3 != -0x7fffffffffffffec)) {
                            return iVar3;
                        }
                        iVar3 = fcn.0001a880(arg1,arg2_00,arg2);
                        if ((*(iVar1 + 0x8a) == '\0') && (uVar4 == *(iVar1 + 0x30) - 1U)) {
                            iVar3 = (**(*0x238a8 + 0x80))(iVar1 + 0x40,0x22c80,0,0);
                            *(iVar1 + 0x8a) = 1;
                        }
                        break;
                    }
                    uVar4 = uVar4 + 1;
                    piVar2 = piVar2 + 1;
                } while (uVar4 < *(iVar1 + 0x30));
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *0x23a78);
    }
    return iVar3;
}


/* fcn.000106f0 @ 0x106f0 */

int64_t fcn.000106f0(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    
    iVar2 = *0x23838;
    uVar4 = 0;
    uVar6 = *0x23a78;
    if (*0x23a78 != 0) {
        do {
            iVar3 = *(iVar2 + uVar4 * 8);
            uVar5 = 0;
            uVar1 = *(iVar3 + 0x30);
            if (uVar1 != 0) {
                puVar7 = *(iVar3 + 0x38);
                do {
                    iVar3 = fcn.00010670(*puVar7,arg1);
                    if (iVar3 != 0) {
                        return iVar3;
                    }
                    uVar5 = uVar5 + 1;
                    puVar7 = puVar7 + 1;
                } while (uVar5 < uVar1);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar6);
    }
    return 0;
}


/* fcn.0001b344 @ 0x1b344 */

int64_t fcn.0001b344(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    if (arg1 == 0) {
        if ((iVar1 == 0) || (*(iVar1 + 0x2f0) != 0x24494350494d4124)) {
            return 0;
        }
    }
    else {
        iVar1 = fcn.000106f0(arg1);
    }
    return iVar1;
}


/* fcn.0001b91c @ 0x1b91c */

uint64_t fcn.0001b91c(uint32_t arg1,int64_t arg2)

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


/* fcn.0001bb40 @ 0x1bb40 */

ulong fcn.0001bb40(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x238c0 == '\0') {
        if (*0x238e0 == 0) {
            if (*0x238d8 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x238a8 + 0x140))(0x23148,0,0x238e0);
        }
    }
    else if (*0x238d0 == 0) {
        if ((*0x238d8 == '\0') && (*0x238e8 != 0)) {
    //WARNING: Could not recover jumptable at 0x0001bb7f. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x238e8 + 0xd0))(0x23168,0,0x238d0);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00022a6e @ 0x22a6e */

int64_t fcn.00022a6e(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001c364 @ 0x1c364 */

void fcn.0001c364(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iStackX_8;
    
    iVar1 = *(arg1 + 8);
    iVar2 = *(arg1 + 0x28);
    iVar3 = (**(*0x238a8 + 0x40))(*arg1,iVar1 * 2 * *(arg1 + 0x18) * 8);
    uVar4 = 0;
    if (-1 < iVar3) {
        fcn.00022a6e(iStackX_8,iVar1 * 2 * *(arg1 + 0x18) * 8,0);
        if (*(arg1 + 0x18) != 0) {
            iVar3 = iVar2;
            uVar5 = uVar4;
            do {
                fcn.00022ac0(iStackX_8 + uVar4,iVar3,iVar1 * 8);
                uVar5 = uVar5 + 1;
                iVar3 = iVar3 + iVar1 * 8;
                uVar4 = uVar4 + iVar1 * 0x10;
            } while (uVar5 < *(arg1 + 0x18));
        }
        *(arg1 + 0x28) = iStackX_8;
        *(arg1 + 8) = *(arg1 + 8) * 2;
        (**(*0x238a8 + 0x48))(iVar2);
    }
    return;
}


/* fcn.0001d028 @ 0x1d028 */

int64_t fcn.0001d028(uint32_t arg1)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = 0;
    uVar3 = 0;
    if (*(iVar2 + 0xa70) != 0) {
        do {
            arg1_00 = *(*(iVar2 + 0xa78) + uVar3 * 8);
            if (*(arg1_00 + 0xd0) == 2) {
                iVar1 = fcn.0001ce98(arg1_00);
                if (iVar1 < 0) {
                    return iVar1;
                }
                iVar1 = fcn.0001d028(arg1_00);
                if (iVar1 < 0) {
                    return iVar1;
                }
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar2 + 0xa70));
    }
    return iVar1;
}


/* fcn.00021b68 @ 0x21b68 */

void fcn.00021b68(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00021bcc(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00021bcc @ 0x21bcc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00021bcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00021c2b;
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
code_r0x00021c2b:
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
        uVar21 = fcn.0001b9f0(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001b91c(arg4,0xf4241);
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
            pcVar8 = 0x2336c;
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
code_r0x00021fe6:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x2336c;
            }
            else {
                pcVar8 = 0x23370;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x00021d7d:
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
                    goto code_r0x00021f20;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x00021f37;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00021f20;
                        }
                        goto code_r0x00021f37;
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
code_r0x00021f20:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x00021d7d;
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
                        goto code_r0x00021d7d;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x00021f37;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00021f20;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x00021f37:
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
                        fcn.00022934(&var_68h_2,0x26,0,0x23300);
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
                            goto code_r0x00021fe6;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x000221cf;
                        if (uStack_a8 == 0x58) goto code_r0x000222c4;
                        if (uStack_a8 == 0x61) goto code_r0x000221d8;
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
                            goto code_r0x00021d5e;
                        }
                        if (uStack_a8 != 100) goto code_r0x00021d5a;
                        goto code_r0x000222db;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x2336c;
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
                goto code_r0x00022508;
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
                            iVar12 = 0x2340b;
                            goto code_r0x0002228b;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0002228b:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00022508;
                    }
                    fcn.00022934(&var_68h_2,0x26,0,0x23364);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x000221cf:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x000221d8:
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
                        goto code_r0x00022508;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00021d5a;
                            goto code_r0x000222c8;
                        }
                        goto code_r0x000222cd;
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
                        goto code_r0x00022508;
                    }
                    fcn.00022934(&var_68h_2,0x26,0,0x23348);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00022508;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x000222c4:
            uVar21 = uVar21 | 0x20;
code_r0x000222c8:
            uVar21 = uVar21 | 0x80;
code_r0x000222cd:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000222db:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x0002231d;
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
code_r0x0002231d:
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
code_r0x000223a5:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x000223a5;
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
code_r0x00021d5a:
            pcVar8 = &uStack_a8;
code_r0x00021d5e:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00022508:
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
                arg1 = fcn.00021b98(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00021b98(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00021b98(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00021b98(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.0001b950 @ 0x1b950 */

ulong fcn.0001b950(int64_t arg1,uint32_t arg2,uint32_t *arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    int64_t iVar2;
    
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.0001b91c(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001b9c6;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x0001b9c6:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        iVar2 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(iVar2 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.0001d098 @ 0x1d098 */

int64_t fcn.0001d098(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    char16_t *arg2_00;
    uint uStack_58;
    
    iVar4 = 0;
    iVar5 = 0;
    if (arg1 == 0) {
code_r0x0001d0a9:
        iVar3 = 0;
    }
    else {
        if (arg3 == 1) {
            arg2_00 = L"PCI_DEV_%X_PCI";
        }
        else if (arg3 == 2) {
            arg2_00 = L"PCI_DEV_%X_PX1";
        }
        else if (arg3 == 3) {
            arg2_00 = L"PCI_DEV_%X_PX2";
        }
        else {
            if (arg3 != 4) goto code_r0x0001d0a9;
            arg2_00 = L"PCI_DEV_%X_HTP";
        }
        fcn.00021b68(&uStack_58,0x50,arg2_00,arg2);
        piVar2 = &uStack_58;
        iVar3 = iVar4;
        iVar1 = uStack_58;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar3 = iVar3 + 1;
            iVar1 = *piVar2;
        }
        iVar3 = fcn.0001bc6c(iVar3 * 2 + 2);
        piVar2 = &uStack_58;
        while (uStack_58 != 0) {
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar5 = iVar4;
            uStack_58._0_2_ = *piVar2;
        }
        fcn.0001b950(iVar3,iVar5 + 1,&uStack_58);
    }
    return iVar3;
}


/* fcn.0001d43c @ 0x1d43c */

int64_t fcn.0001d43c(int64_t arg1)

{
    int64_t iVar1;
    ulong uStackX_8;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        uStackX_8 = 6;
        iVar1 = (**(*0x238b0 + 0x48))(L"PCI_COMMON",0x231a0,0,&uStackX_8,arg1);
        if (iVar1 < 0) {
            (**(*0x238a8 + 0x168))(arg1,6);
            *arg1 = 0x10101;
            *(arg1 + 4) = 0x100;
            if (iVar1 == -0x7ffffffffffffff2) {
                iVar1 = (**(*0x238b0 + 0x58))(L"PCI_COMMON",0x231a0,3,uStackX_8,arg1);
            }
        }
    }
    return iVar1;
}


/* fcn.0001d5a4 @ 0x1d5a4 */

uint64_t fcn.0001d5a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    ulong *in_stack_00000028;
    uchar *in_stack_00000030;
    
    puVar1 = *(arg1 + 0x388);
    uVar4 = 0x8000000000000003;
    uVar3 = 0x8000000000000003;
    if (puVar1 == NULL) {
        return 0x8000000000000003;
    }
    iVar2 = arg2;
    if (iVar2 == 1) {
        uVar4 = (*puVar1[2])(arg3);
        if (-1 < uVar4) {
            *(arg1 + 0x396) = 1;
            goto code_r0x0001d6e8;
        }
    }
    else {
        if (iVar2 == 2) {
            uVar4 = (**puVar1)(arg3);
        }
        else if (iVar2 == 3) {
            uVar4 = (*puVar1[3])(arg3,arg4,*in_stack_00000028,*in_stack_00000030);
        }
        else if (iVar2 == 4) {
            uVar4 = (*puVar1[1])(arg3);
        }
        else if (iVar2 == 6) {
            uVar4 = (*puVar1[4])(arg3,in_stack_00000028);
            uVar3 = (**(*(arg1 + 0x388) + 0x20))(arg4,in_stack_00000028);
        }
        else if (iVar2 == 7) {
            uVar4 = (*puVar1[5])(arg3,in_stack_00000028,*in_stack_00000030);
            uVar3 = (**(*(arg1 + 0x388) + 0x28))(arg4,in_stack_00000028,*in_stack_00000030);
        }
        else if (iVar2 == 8) {
            uVar4 = (*puVar1[6])(arg3,arg4,in_stack_00000028);
        }
        else {
            if (iVar2 != 9) goto code_r0x0001d6f7;
            uVar4 = (*puVar1[7])(arg3,*arg4,*in_stack_00000028);
        }
code_r0x0001d6e8:
        if (-1 < uVar4) goto code_r0x0001d6f7;
    }
    if (uVar4 != 0x8000000000000003) {
        return uVar4;
    }
code_r0x0001d6f7:
    if ((-1 < uVar3) || (uVar3 == 0x8000000000000003)) {
        uVar3 = uVar3 & uVar4;
    }
    return uVar3;
}


/* fcn.0001dbc8 @ 0x1dbc8 */

//WARNING: Removing unreachable block (ram,0x0001cd4b)

int64_t fcn.0001dbc8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar4;
    int iVar3;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uStackX_10;
    uint uVar8;
    uint64_t arg2_00;
    
    iVar7 = arg1;
    cVar2 = fcn.0001db90(arg1);
    if (cVar2 != '\0') {
        uVar1 = *(arg1 + 0xd8);
        iVar7 = *(iVar7 + 0xb8);
        uVar4 = **(*(arg1 + 0x2d0) + 0x30);
        iVar3 = uVar4 + 0xc;
        uVar8 = uVar1;
        arg2_00 = CONCAT44(iVar3,uVar8);
        uVar6 = arg2_00;
        iVar5 = (**(iVar7 + 0x38))(iVar7,2,arg2_00,1,arg2);
        if (iVar5 == -0x7ffffffffffffffe) {
            uVar6 = uVar6 & 0xffffffffffffff00;
            iVar5 = fcn.0001cc58(iVar7,arg2_00,uVar6,arg2);
            if (-1 < iVar5) {
                if (iVar3 == 0) {
                    uStackX_10._0_1_ = uVar1;
                    uStackX_10 = CONCAT71(arg2_00 >> 8,uStackX_10 + '\x02');
                }
                else {
                    uStackX_10 = CONCAT44(uVar4 + 0xe,uVar8);
                }
                iVar5 = fcn.0001cc58(iVar7,uStackX_10,uVar6 & 0xffffffffffffff00,arg2 + 2);
            }
        }
        return iVar5;
    }
    return 0;
}


/* fcn.0001db3c @ 0x1db3c */

//WARNING: Removing unreachable block (ram,0x0001cd4b)

int64_t fcn.0001db3c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar4;
    int iVar3;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    ulong uStackX_10;
    uint uVar8;
    uint64_t arg2_00;
    
    iVar7 = arg1;
    cVar2 = fcn.0001db00(arg1);
    if (cVar2 != '\0') {
        uVar1 = *(arg1 + 0xd8);
        iVar7 = *(iVar7 + 0xb8);
        uVar4 = **(*(arg1 + 0x2d0) + 0x38);
        iVar3 = uVar4 + 0xc;
        uVar8 = uVar1;
        arg2_00 = CONCAT44(iVar3,uVar8);
        uVar6 = arg2_00;
        iVar5 = (**(iVar7 + 0x38))(iVar7,2,arg2_00,1,arg2);
        if (iVar5 == -0x7ffffffffffffffe) {
            uVar6 = uVar6 & 0xffffffffffffff00;
            iVar5 = fcn.0001cc58(iVar7,arg2_00,uVar6,arg2);
            if (-1 < iVar5) {
                if (iVar3 == 0) {
                    uStackX_10._0_1_ = uVar1;
                    uStackX_10 = CONCAT71(arg2_00 >> 8,uStackX_10 + '\x02');
                }
                else {
                    uStackX_10 = CONCAT44(uVar4 + 0xe,uVar8);
                }
                iVar5 = fcn.0001cc58(iVar7,uStackX_10,uVar6 & 0xffffffffffffff00,arg2 + 2);
            }
        }
        return iVar5;
    }
    return 0;
}


/* fcn.0001dc4c @ 0x1dc4c */

ulong fcn.0001dc4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    char cVar4;
    ulong uVar5;
    int64_t var_28h;
    uint32_t var_20h;
    int64_t var_1ch;
    int64_t var_bp_10h;
    
    cVar4 = arg3;
    iVar3 = arg1;
    cVar1 = fcn.0001dc1c(arg1);
    if (cVar1 == '\0') {
code_r0x0001dc75:
        uVar2 = 0;
    }
    else {
        if (cVar4 == '\x04') {
            cVar1 = fcn.0001db90(iVar3);
code_r0x0001dc8b:
            if (cVar1 == '\0') goto code_r0x0001dc75;
        }
        else if (cVar4 == '\x05') {
            cVar1 = fcn.0001db00(iVar3);
            goto code_r0x0001dc8b;
        }
        var_bp_10h = CONCAT71(*(iVar3 + 0xd8) >> 8,**(iVar3 + 0x2d0) + '2');
        fcn.0001cc58(*(arg1 + 0xb8),var_bp_10h,0,&var_28h);
        fcn.0001dbc8(arg1,&var_1ch);
        uVar2 = fcn.0001db3c(arg1,&var_1ch + 4);
        if (((((var_28h & 0x20) != 0) || ((var_1ch & 0x10) != 0)) || ((var_1ch._4_1_ & 0x10) != 0)) || (*arg2 != '\0'))
        {
            uVar5 = 0;
            var_bp_10h = CONCAT44(**(*(arg1 + 0x2d0) + 0x28) + 4,var_bp_10h);
            uVar2 = fcn.0001cd18(*(arg1 + 0xb8),var_bp_10h,0,&var_20h);
            if (((((cVar4 == '\x03') && ((var_28h & 0x20) != 0)) || ((cVar4 == '\x04' && ((var_1ch & 0x10) != 0)))) ||
                ((cVar4 == '\x05' && ((var_1ch._4_1_ & 0x10) != 0)))) || (*arg2 != '\0')) {
                var_20h = var_20h & 0xfffffffd | 1;
                uVar2 = fcn.0001cd18(*(arg1 + 0xb8),var_bp_10h,CONCAT71(uVar5 >> 8,1),&var_20h);
                *arg2 = 1;
            }
        }
    }
    return uVar2;
}


/* fcn.0001e804 @ 0x1e804 */

int64_t fcn.0001e804(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    uint16_t auStackX_10 [4];
    
    uVar2 = 0;
    iStackX_8 = CONCAT71(*(arg1 + 0xd8) >> 8,**(arg1 + 0x2d0) + '\b');
    fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,0,auStackX_10);
    if (arg2 != 0xfe) {
        auStackX_10[0] = auStackX_10[0] ^ (arg2 << 5 ^ auStackX_10[0]) & 0xe0;
    }
    if (arg3 != 0xfe) {
        auStackX_10[0] = auStackX_10[0] ^ (arg3 << 0xc ^ auStackX_10[0]) & 0x7000;
    }
    iVar1 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,CONCAT71(uVar2 >> 8,1),auStackX_10);
    if (-1 < iVar1) {
        *(*(arg1 + 0x2d0) + 0x16) = auStackX_10[0] >> 5 & 7;
    }
    return iVar1;
}


/* fcn.0001eacc @ 0x1eacc */

//WARNING: Variable defined which should be unmapped: var_bp_18h

int64_t fcn.0001eacc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong uVar4;
    uint16_t auStackX_8 [4];
    uint16_t uStackX_10;
    uint16_t uStackX_18;
    int64_t var_28h;
    int64_t var_40h;
    uint64_t uStack_38;
    int64_t var_bp_18h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = arg3;
    uStackX_10 = arg2;
    iVar2 = 0;
    if (*(iVar3 + 0xd0) == 2) {
        if (uStackX_10 < *(*(iVar3 + 0x2d0) + 0x16)) {
            var_28h._1_7_ = *(iVar3 + 0xd8) >> 8;
            var_28h = CONCAT71(var_28h._1_7_,**(iVar3 + 0x2d0) + '\b');
            iVar2 = fcn.0001cc58(*(iVar3 + 0xb8),var_28h,0,auStackX_8);
            uStack_38 = 0;
            if (*(iVar3 + 0xa70) != 0) {
                do {
                    iVar1 = *(*(iVar3 + 0xa78) + uStack_38 * 8);
                    if ((*(iVar1 + 0x396) != '\0') || (*(iVar1 + 0x2d0) == 0)) goto code_r0x0001eaf3;
                    if (*(*(iVar1 + 0x2d0) + 0x13) != '\0') {
                        if ((*(iVar1 + 0xd0) == 2) && (fcn.0001eacc(iVar1,uStackX_10,uStackX_18), iVar2 < 0)) break;
                        uVar4 = 0;
                        var_28h._1_7_ = *(iVar1 + 0xd8) >> 8;
                        var_28h = CONCAT71(var_28h._1_7_,**(iVar1 + 0x2d0) + '\b');
                        iVar2 = fcn.0001cc58(*(iVar1 + 0xb8),var_28h,0,auStackX_8);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        if (*(*(iVar1 + 0x2d0) + 0x83) == -2) {
                            *(*(iVar1 + 0x2d0) + 0x16) = auStackX_8[0] >> 5 & 7;
                        }
                        else {
                            auStackX_8[0] = auStackX_8[0] ^ (uStackX_10 << 5 ^ auStackX_8[0]) & 0xe0;
                        }
                        if ((*(*(iVar1 + 0x2d0) + 0x84) != -2) && (uStackX_18 != 0x37)) {
                            auStackX_8[0] = auStackX_8[0] ^ (uStackX_18 << 0xc ^ auStackX_8[0]) & 0x7000;
                        }
                        iVar2 = fcn.0001cc58(*(iVar1 + 0xb8),var_28h,CONCAT71(uVar4 >> 8,1),auStackX_8);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                        *(*(iVar1 + 0x2d0) + 0x16) = auStackX_8[0] >> 5 & 7;
                    }
                    uStack_38 = uStack_38 + 1;
                } while (uStack_38 < *(iVar3 + 0xa70));
            }
        }
    }
    else {
code_r0x0001eaf3:
        iVar2 = -0x7ffffffffffffff9;
    }
    return iVar2;
}


/* fcn.0001ed94 @ 0x1ed94 */

ulong fcn.0001ed94(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint8_t uVar2;
    int64_t iStackX_8;
    uint16_t auStackX_10 [4];
    
    iStackX_8 = CONCAT71(*(arg1 + 0xd8) >> 8,**(arg1 + 0x2d0) + '\x10');
    uVar1 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,0,auStackX_10);
    if (arg2 == '\0') {
        uVar2 = *(*(arg1 + 0x2d0) + 0x8b);
    }
    else {
        uVar2 = 1;
    }
    if ((auStackX_10[0] >> 4 & 1) != uVar2) {
        auStackX_10[0] = (uVar2 & 1) << 4 | auStackX_10[0] & 0xffef;
        uVar1 = fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,CONCAT71(uVar1 >> 8,1),auStackX_10);
    }
    return uVar1;
}


/* fcn.0001dfe4 @ 0x1dfe4 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001dfe4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    uint16_t uVar4;
    int64_t iVar5;
    uint32_t arg1_01;
    uint32_t arg1_00;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint64_t noname_2;
    uint64_t uVar10;
    uint8_t uVar11;
    int64_t iVar12;
    uint16_t uStackX_8;
    uchar *in_stack_00000030;
    int16_t var_40h;
    int16_t var_48h;
    uchar auStack_48 [8];
    int64_t iStack_40;
    int64_t var_10h;
    int64_t var_8h;
    
    iStack_40._1_7_ = *(arg1 + 0xd8) >> 8;
    iStack_40 = CONCAT71(iStack_40._1_7_,**(arg1 + 0x2d0) + '0');
    iVar5 = fcn.0001cc58(*(arg1 + 0xb8),iStack_40,0,arg2);
    if (iVar5 < 0) {
        return iVar5;
    }
    iStack_40 = CONCAT71(iStack_40._1_7_,**(arg1 + 0x2d0) + '\x12');
    iVar5 = fcn.0001cc58(*(arg1 + 0xb8),iStack_40,0,&stack0x00000028);
    if (iVar5 < 0) {
        return iVar5;
    }
    iStack_40._1_7_ = *(arg3 + 0xd8) >> 8;
    iStack_40 = CONCAT71(iStack_40._1_7_,**(arg3 + 0x2d0) + '0');
    iVar5 = fcn.0001cc58(*(arg3 + 0xb8),iStack_40,0,arg4);
    if (iVar5 < 0) {
        return iVar5;
    }
    iStack_40 = CONCAT71(iStack_40._1_7_,**(arg3 + 0x2d0) + '\x12');
    iVar5 = fcn.0001cc58(*(arg3 + 0xb8),iStack_40,0,auStack_48);
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar12 = *(arg1 + 0x2d0);
    uVar1 = *(*(iVar12 + 0x20) + 0x18);
    arg1_00 = arg1;
    arg1_01 = arg3;
    if (uVar1 != 0xfe) {
        iVar2 = *(arg3 + 0x2d0);
        uVar11 = *(*(iVar2 + 0x20) + 0x18);
        if (uVar11 != 0xfe) {
            if (uVar1 <= uVar11) {
                uVar11 = uVar1;
            }
            uVar8 = *(iVar12 + 8) & 0xf;
            if ((*(iVar2 + 8) & 0xf) < uVar8) {
                uVar8 = *(iVar2 + 8) & 0xf;
            }
            noname_2 = uVar8;
            uVar1 = *(iVar12 + 0x1c);
            uVar10 = 4;
            uVar4 = 4;
            if (uVar8 < 3) goto code_r0x0001e201;
            cVar3 = fcn.0001dc1c(arg1_00);
            uVar4 = uVar10;
            if (cVar3 == '\0') {
code_r0x0001e237:
                noname_2 = 2;
            }
            else {
                cVar3 = fcn.0001dc1c(arg1_01);
                uVar4 = uVar10;
                if (cVar3 == '\0') goto code_r0x0001e237;
                if (uVar4 <= noname_2) {
                    if (uVar11 == uVar10) {
                        cVar3 = fcn.0001db90(arg1_00);
                        if (cVar3 != '\0') {
                            cVar3 = fcn.0001db90(arg1_01);
                            uVar4 = uVar10;
                            if (cVar3 != '\0') goto code_r0x0001e201;
                        }
                        noname_2 = 3;
                    }
                    uVar4 = uVar10;
                    if (uVar11 == 5) {
                        cVar3 = fcn.0001db00(arg1_00);
                        if (cVar3 != '\0') {
                            cVar3 = fcn.0001db00(arg1_01);
                            uVar4 = uVar10;
                            if (cVar3 != '\0') goto code_r0x0001e201;
                        }
                        uVar4 = uVar10;
                        noname_2 = uVar10 & 0xffff;
                    }
                }
            }
code_r0x0001e201:
            uVar8 = 5;
            uVar9 = noname_2;
            uStackX_8 = uVar1;
            if (uVar11 == 0x37) {
                uStackX_8 = uVar9;
            }
            if (uVar11 == 5) {
                uVar7 = uStackX_8;
                if ((*(*(iVar12 + 0x20) + 4) & 0xfe) == 0) {
                    if (4 < uVar9) {
                        uStackX_8 = 5;
                        goto code_r0x0001e257;
                    }
                }
                else if ((*(*(iVar12 + 0x20) + 4) & 0x20) != 0) {
                    uVar6 = 5;
code_r0x0001e305:
                    uVar7 = uVar6;
                    uStackX_8 = uVar8;
                }
            }
            else {
code_r0x0001e257:
                if (uVar11 == uVar4) {
                    uVar7 = uStackX_8;
                    if ((*(*(iVar12 + 0x20) + 4) & 0xfe) == 0) {
                        if (uVar4 <= uVar9) {
                            uStackX_8 = uVar4;
                            goto code_r0x0001e28f;
                        }
                    }
                    else if ((*(*(iVar12 + 0x20) + 4) & 0x10) != 0) {
                        uVar7 = uVar4;
                        uStackX_8 = uVar4;
                    }
                    goto code_r0x0001e309;
                }
code_r0x0001e28f:
                uVar6 = 3;
                uVar8 = 3;
                if (uVar11 == 3) {
                    if ((*(*(iVar12 + 0x20) + 4) & 0xfe) == 0) {
                        uVar7 = uStackX_8;
                        if (uVar9 < 3) goto code_r0x0001e309;
                        uStackX_8 = 3;
                        goto code_r0x0001e2b8;
                    }
                    uVar11 = *(*(iVar12 + 0x20) + 4) & 8;
code_r0x0001e2a7:
                    uVar7 = uStackX_8;
                    if (uVar11 != 0) goto code_r0x0001e305;
                }
                else {
code_r0x0001e2b8:
                    if (uVar11 == 2) {
                        uVar7 = uStackX_8;
                        if ((*(*(iVar12 + 0x20) + 4) & 0xfe) == 0) {
                            if (1 < uVar9) {
                                uStackX_8 = 2;
                                goto code_r0x0001e2e3;
                            }
                        }
                        else if ((*(*(iVar12 + 0x20) + 4) & uVar4) != 0) {
                            uStackX_8 = 2;
                            uVar7 = 2;
                        }
                    }
                    else {
code_r0x0001e2e3:
                        uVar6 = 1;
                        uVar8 = 1;
                        uVar7 = uStackX_8;
                        if (uVar11 == 1) {
                            if ((*(*(iVar12 + 0x20) + 4) & 0xfe) != 0) {
                                uVar11 = *(*(iVar12 + 0x20) + 4) & 2;
                                goto code_r0x0001e2a7;
                            }
                            if (uVar9 != 0) goto code_r0x0001e305;
                        }
                    }
                }
            }
code_r0x0001e309:
            iVar5 = fcn.0001d724(arg1,7,noname_2,arg1);
            if (iVar5 < 0) {
                if (iVar5 != -0x7ffffffffffffffd) {
                    return iVar5;
                }
                iVar5 = fcn.0001d724(arg3,7,0x8000000000000003,arg1);
                if ((iVar5 < 0) && (iVar5 != -0x7ffffffffffffffd)) {
                    return iVar5;
                }
                iVar5 = 0;
                uStackX_8 = uVar7;
            }
            if (uStackX_8 != uVar1) {
                *in_stack_00000030 = 1;
            }
            *arg2 = *arg2 & 0xfff0;
            *arg2 = *arg2 | uStackX_8 & 0xf;
            *arg4 = *arg4 & 0xfff0;
            *arg4 = *arg4 | uStackX_8 & 0xf;
            goto code_r0x0001e3de;
        }
    }
    uStackX_8 = 0xfe;
code_r0x0001e3de:
    uVar8 = 0xfe;
    uVar1 = *(*(*(arg1 + 0x2d0) + 0x20) + 0x1b);
    if ((uVar1 != 0xfe) && (uVar11 = *(*(*(arg3 + 0x2d0) + 0x20) + 0x1b), uVar11 != 0xfe)) {
        if (uVar1 <= uVar11) {
            uVar11 = uVar1;
        }
        *arg2 = *arg2 & 0xffdf;
        uVar4 = (uVar11 & 1) << 5;
        *arg2 = *arg2 | uVar4;
        *arg4 = *arg4 & 0xffdf;
        *arg4 = *arg4 | uVar4;
    }
    cVar3 = fcn.0001dc1c(arg1_00);
    if ((((cVar3 != '\0') && (cVar3 = fcn.0001dc1c(arg1_01), cVar3 != '\0')) && (uStackX_8 != uVar8)) &&
       (2 < uStackX_8)) {
        iVar5 = fcn.0001dc4c(arg1,in_stack_00000030,CONCAT71(iVar5 >> 8,uStackX_8));
        if (iVar5 < 0) {
            return iVar5;
        }
        if ((*(*(*(arg3 + 0x2d0) + 0x20) + 4) & 0x100) != 0) {
            iVar5 = fcn.0001dc4c(arg3,in_stack_00000030,CONCAT71(iVar5 >> 8,uStackX_8));
        }
    }
    return iVar5;
}


/* fcn.0001f3c4 @ 0x1f3c4 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.0001f3c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint16_t auStackX_8 [4];
    uint16_t auStackX_10 [4];
    int64_t var_30h;
    int64_t var_38h;
    int64_t iStack_38;
    int64_t var_10h;
    
    uVar5 = 0;
    iStack_38._1_7_ = *(arg1 + 0xd8) >> 8;
    iStack_38 = CONCAT71(iStack_38._1_7_,**(arg1 + 0x2d0) + '\x10');
    iVar3 = fcn.0001cc58(*(arg1 + 0xb8),iStack_38,0,arg2);
    if (-1 < iVar3) {
        iStack_38 = CONCAT71(iStack_38._1_7_,**(arg1 + 0x2d0) + '\x12');
        iVar3 = fcn.0001cc58(*(arg1 + 0xb8),iStack_38,0,auStackX_8);
        if (-1 < iVar3) {
            iStack_38._1_7_ = *(arg3 + 0xd8) >> 8;
            iStack_38 = CONCAT71(iStack_38._1_7_,**(arg3 + 0x2d0) + '\x10');
            iVar3 = fcn.0001cc58(*(arg3 + 0xb8),iStack_38,0,arg4);
            if (-1 < iVar3) {
                iStack_38 = CONCAT71(iStack_38._1_7_,**(arg3 + 0x2d0) + '\x12');
                iVar3 = fcn.0001cc58(*(arg3 + 0xb8),iStack_38,0,auStackX_10);
                if (-1 < iVar3) {
                    uVar7 = 0xfe;
                    if (*(*(arg3 + 0x2d0) + 0x85) != -2) {
                        *arg2 = *arg2 & 0xfffc;
                        *arg4 = *arg4 & 0xfffc;
                    }
                    if (*(*(arg1 + 0x2d0) + 0x8c) == '\0' && *(*(arg3 + 0x2d0) + 0x8c) == '\0') {
                        if (((auStackX_8[0] & 0x1000) != 0) && ((auStackX_10[0] & 0x1000) != 0)) {
                            uVar5 = 1;
                        }
                        uVar2 = *arg2;
                        if (((uVar2 >> 6 & 1) != uVar5) || ((*arg4 >> 6 & 1) != uVar5)) {
                            *var_30h = 1;
                        }
                        *arg2 = uVar2 & 0xffbf | uVar5 << 6;
                        *arg4 = *arg4 & 0xffbf;
                        *arg4 = *arg4 | uVar5 << 6;
                    }
                    uVar6 = *(*(arg1 + 0x2d0) + 0x86);
                    if ((uVar6 != 0xfe) && (uVar4 = *(*(arg3 + 0x2d0) + 0x86), uVar4 != 0xfe)) {
                        *arg2 = *arg2 & 0xff7f;
                        uVar5 = ((uVar4 | uVar6) & 1) << 7;
                        *arg2 = *arg2 | uVar5;
                        *arg4 = *arg4 & 0xff7f;
                        *arg4 = *arg4 | uVar5;
                    }
                    cVar1 = fcn.0001dd94(arg1);
                    if ((cVar1 != '\0') && (cVar1 = fcn.0001dd94(arg3), cVar1 != '\0')) {
                        uVar6 = *(*(arg3 + 0x2d0) + 0x87);
                        if ((uVar6 != uVar7) && (uVar4 = *(*(arg1 + 0x2d0) + 0x87), uVar4 != uVar7)) {
                            if (((*(*(arg3 + 0x2d0) + 8) & 0x40000) == 0) || (uVar4 == 0 && uVar6 == 0)) {
                                *arg2 = *arg2 & 0xfeff;
                                *arg4 = *arg4 & 0xfeff;
                            }
                            else {
                                *arg2 = *arg2 | 0x100;
                                *arg4 = *arg4 | 0x100;
                            }
                        }
                    }
                    uVar5 = *arg2 & 0xf3ff;
                    *arg2 = uVar5;
                    cVar1 = fcn.0001dd94(arg1);
                    if ((((cVar1 != '\0') && (uVar6 = *(*(*(arg1 + 0x2d0) + 0x20) + 0x1a), uVar6 != uVar7)) &&
                        (cVar1 = fcn.0001dd94(arg3), cVar1 != '\0')) &&
                       (uVar4 = *(*(*(arg3 + 0x2d0) + 0x20) + 0x1a), uVar4 != uVar7)) {
                        if (uVar6 <= uVar4) {
                            uVar4 = uVar6;
                        }
                        uVar2 = (uVar4 & 1) << 9;
                        *arg2 = uVar5 & 0xfdff | uVar2;
                        *arg4 = *arg4 & 0xfdff;
                        *arg4 = *arg4 | uVar2;
                    }
                }
            }
        }
    }
    return iVar3;
}


/* fcn.0001ee48 @ 0x1ee48 */

void fcn.0001ee48(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iStackX_8;
    ushort auStackX_10 [12];
    
    auStackX_10[0] = arg2;
    if (arg3 == '\0') {
        cVar1 = **(arg1 + 0x2d0) + '\x10';
    }
    else {
        cVar1 = **(arg1 + 0x2d0) + '0';
    }
    iStackX_8 = CONCAT71(*(arg1 + 0xd8) >> 8,cVar1);
    fcn.0001cc58(*(arg1 + 0xb8),iStackX_8,CONCAT71(arg3 >> 8,1),auStackX_10);
    return;
}


/* fcn.0001ef58 @ 0x1ef58 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001ef58(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4,int64_t arg_50h)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    ulong uVar5;
    uint in_R9;
    uint64_t uVar6;
    uint64_t uVar7;
    bool bVar8;
    uint16_t auStackX_8 [4];
    ushort uStackX_10;
    uint64_t uStackX_20;
    int64_t var_30h;
    int64_t var_48h;
    uint16_t auStack_48 [4];
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    uVar6 = CONCAT44(in_R9,arg4);
    uStackX_10 = CONCAT11(arg2 >> 8,1);
    if (uVar6 == 0xfe) {
        uVar6 = 5;
    }
    uVar4 = arg3;
    if (var_30h == 0xfe) {
        var_30h = 1000;
    }
    uVar5 = 0;
    iStack_38._1_7_ = *(arg1 + 0xd8) >> 8;
    iStack_38 = CONCAT71(iStack_38._1_7_,**(arg1 + 0x2d0) + '\x12');
    iStack_40 = CONCAT71(iStack_38._1_7_,**(arg1 + 0x2d0) + '\x10');
    uStackX_20 = uVar6;
    iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_40,0,auStack_48);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (2 < uVar4) {
        fcn.0001dc4c(arg1,&uStackX_10,CONCAT71(uVar5 >> 8,uVar4));
    }
    uVar7 = 0;
    do {
        uVar5 = 0;
        iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_38,0,auStackX_8);
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((auStackX_8[0] & 0x800) != 0) {
            uVar3 = 0;
            do {
                uVar5 = 0;
                iVar2 = iStack_38;
                fcn.0001cc58(*(arg1 + 0xb8),iStack_38,0,auStackX_8);
                if ((auStackX_8[0] & 0x800) == 0) goto code_r0x0001f090;
                (**(*0x238a8 + 0xf8))(var_30h);
                uVar3 = uVar3 + 1;
            } while (uVar3 < 500);
            if (((auStackX_8[0] & 0x800) != 0) && (uVar6 <= uVar7)) {
                fcn.0001ed94(arg1,CONCAT71(iVar2 >> 8,1));
                return -0x7ffffffffffffff9;
            }
        }
code_r0x0001f090:
        auStack_48[0] = auStack_48[0] | 0x20;
        iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_40,CONCAT71(uVar5 >> 8,1),auStack_48);
        if (iVar2 < 0) {
            return iVar2;
        }
        uVar5 = 0;
        iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_40,0,auStack_48);
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((auStack_48[0] & 0x20) != 0) {
            auStack_48[0] = auStack_48[0] & 0xffdf;
            iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_40,CONCAT71(uVar5 >> 8,1),auStack_48);
            if (iVar2 < 0) {
                return iVar2;
            }
        }
        iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_38,0,auStackX_8);
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((auStackX_8[0] & 0x800) == 0) break;
        uVar6 = 0;
        do {
            iVar2 = fcn.0001cc58(*(arg1 + 0xb8),iStack_38,0,auStackX_8);
            if ((auStackX_8[0] & 0x800) == 0) goto code_r0x0001f18c;
            (**(*0x238a8 + 0xf8))(var_30h);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 500);
        uVar7 = uVar7 + 1;
        uVar6 = uStackX_20;
        if (uStackX_20 < uVar7) break;
    } while( true );
code_r0x0001f18c:
    if (uVar4 < 3) {
        return iVar2;
    }
    iVar2 = arg1;
    cVar1 = fcn.0001dc1c(arg1);
    if (cVar1 == '\0') {
        return 0;
    }
    if (uVar4 == 4) {
        cVar1 = fcn.0001db90(iVar2);
    }
    else {
        if (uVar4 != 5) goto code_r0x0001f1eb;
        cVar1 = fcn.0001db00(iVar2);
    }
    if (cVar1 == '\0') {
        return 0;
    }
code_r0x0001f1eb:
    var_30h = CONCAT71(*(arg1 + 0xd8) >> 8,**(arg1 + 0x2d0) + '2');
    fcn.0001cc58(*(arg1 + 0xb8),var_30h,0,&uStackX_10);
    fcn.0001dbc8(arg1,&uStackX_20);
    fcn.0001db3c(arg1,&var_30h);
    if (uVar4 == 3) {
        if (((uStackX_10 & 2) != 0) && ((uStackX_10 & 0x10) != 0)) {
            return 0;
        }
        if ((uStackX_10 & 4) != 0) {
            return -0x5ffffffffffffffe;
        }
        if ((uStackX_10 & 8) != 0) {
            return -0x5ffffffffffffffe;
        }
        bVar8 = (uStackX_10 & 0x10) == 0;
    }
    else {
        if (uVar4 == 4) {
            var_30h._0_4_ = uStackX_20;
        }
        else {
            if (uVar4 != 5) {
                return 0;
            }
        }
        if (((((var_30h & 1) != 0) && ((var_30h & 8) != 0)) && ((uStackX_10 & 2) != 0)) && ((uStackX_10 & 0x10) != 0)) {
            return 0;
        }
        if ((var_30h & 2) != 0) {
            return -0x5ffffffffffffffe;
        }
        if ((var_30h & 4) != 0) {
            return -0x5ffffffffffffffe;
        }
        bVar8 = (var_30h & 8) == 0;
    }
    if (!bVar8) {
        return -0x5ffffffffffffffe;
    }
    return -0x7ffffffffffffff9;
}


/* fcn.0001eea0 @ 0x1eea0 */

ulong fcn.0001eea0(int64_t arg1,uint32_t arg2)

{
    int64_t arg2_00;
    ulong uVar1;
    ulong in_R8;
    int64_t arg3;
    uint16_t auStackX_8 [4];
    uchar auStackX_10 [8];
    int64_t var_20h;
    int8_t var_28h;
    int64_t var_30h;
    
    var_20h = CONCAT71(*(arg1 + 0xd8) >> 8,0x3e);
    auStackX_10[0] = 1;
    if (2 < arg2) {
        fcn.0001dc4c(arg1,auStackX_10,CONCAT71(in_R8 >> 8,arg2));
    }
    arg2_00 = var_20h;
    uVar1 = 0;
    fcn.0001cc58(*(arg1 + 0xb8),var_20h,0,auStackX_8);
    auStackX_8[0] = auStackX_8[0] | 0x40;
    arg3 = CONCAT71(uVar1 >> 8,1);
    fcn.0001cc58(*(arg1 + 0xb8),arg2_00,arg3,auStackX_8);
    (**(*0x238a8 + 0xf8))(1000);
    auStackX_8[0] = auStackX_8[0] & 0xffbf;
    uVar1 = fcn.0001cc58(*(arg1 + 0xb8),arg2_00,CONCAT71(arg3 >> 8,1),auStackX_8);
    (**(*0x238a8 + 0xf8))(100000);
    return uVar1;
}


/* fcn.0001f6a0 @ 0x1f6a0 */

ulong fcn.0001f6a0(int64_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    unkbyte7 Var3;
    ulong uVar4;
    int64_t var_bp_10h;
    
    Var3 = *(arg1 + 0xd8) >> 8;
    var_bp_10h = CONCAT71(Var3,**(arg1 + 0x2d0) + '\x02') & 0xffffffff;
    fcn.0001cc58(*(arg1 + 0xb8),var_bp_10h,0,*(arg1 + 0x2d0) + 2);
    var_bp_10h = CONCAT71(Var3,**(arg1 + 0x2d0) + '\x04') & 0xffffffff;
    fcn.0001cd18(*(arg1 + 0xb8),var_bp_10h,0,*(arg1 + 0x2d0) + 4);
    var_bp_10h = CONCAT71(Var3,**(arg1 + 0x2d0) + '\f') & 0xffffffff;
    uVar4 = fcn.0001cd18(*(arg1 + 0xb8),var_bp_10h,0,*(arg1 + 0x2d0) + 8);
    if ((*(arg1 + 0xd0) - 2U < 2) && (pcVar1 = *(arg1 + 0x2d0), (*(pcVar1 + 2) & 0x100) != 0)) {
        var_bp_10h = CONCAT71(Var3,*pcVar1 + '\x14') & 0xffffffff;
        uVar4 = fcn.0001cd18(*(arg1 + 0xb8),var_bp_10h,0,pcVar1 + 0xc);
    }
    pcVar1 = *(arg1 + 0x2d0);
    if ((pcVar1[2] & 0xf0U) == 0x40) {
        var_bp_10h = CONCAT71(var_bp_10h._1_7_,*pcVar1 + '\x1e');
        uVar4 = fcn.0001cc58(*(arg1 + 0xb8),var_bp_10h,0,pcVar1 + 0x10);
    }
    iVar2 = *(arg1 + 0x2d0);
    if (((((*(iVar2 + 2) & 0xf0) - 0x40 & 0xffdf) == 0) && ((*(iVar2 + 2) & 0x100) != 0)) &&
       ((*(iVar2 + 0xc) & 0x40) != 0)) {
        uVar4 = fcn.00021ac4(arg1,0);
    }
    return uVar4;
}


/* fcn.0001eca4 @ 0x1eca4 */

uint64_t fcn.0001eca4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    var_40h = 0x40;
    var_38h = 0x80;
    var_8h = 8000;
    var_18h = 2000;
    var_78h = 2000;
    var_68h = 8000;
    uVar1 = 0;
    var_10h = 4000;
    var_70h = 4000;
    var_20h = 1000;
    var_80h = 1000;
    piVar3 = &var_80h;
    if (arg2 != '\0') {
        piVar3 = &var_40h;
    }
    var_30h = 0x100;
    var_28h = 0x200;
    var_60h = 16000;
    var_58h = 32000;
    var_50h = 64000;
    var_48h = 0x1f400;
    if (arg3 == '\0') {
        uVar2 = (-(arg2 != '\0') & 0xfffffffffffe2b40) + 0x1f400;
    }
    else {
        uVar2 = 7;
    }
    if (uVar2 < arg1) {
        uVar1 = uVar2;
    }
    else if (arg3 == '\0') {
        do {
            if (arg1 <= piVar3[uVar1]) break;
            uVar1 = uVar1 + 1;
        } while (uVar1 < 8);
        if (uVar1 == 8) {
            uVar1 = 7;
        }
    }
    else {
        uVar1 = piVar3[arg1];
    }
    return uVar1;
}


/* fcn.00020190 @ 0x20190 */

ulong fcn.00020190(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar auStackX_8 [3];
    uint8_t uStackX_b;
    ulong uStackX_10;
    
    uStackX_10 = *(arg1 + 0xd8);
    uVar1 = 0;
    uVar3 = 0;
    iVar2 = *(*(arg1 + 0x2d0) + 0x40);
    if (*(iVar2 + 0x18) != 0) {
        do {
            uVar1 = 0;
            uStackX_10 = CONCAT44(**(*(iVar2 + 0x20) + uVar3 * 8) + 4,uStackX_10);
            fcn.0001cd18(*(arg1 + 0xb8),uStackX_10,0,auStackX_8);
            auStackX_8[0] = uVar3 == 0;
            if (auStackX_8[0]) {
                uStackX_b = uStackX_b | 0x80;
            }
            else {
                uStackX_b = uStackX_b & 0x7f;
            }
            uStackX_b = uStackX_b ^ (uVar3 ^ uStackX_b) & 7;
            uVar1 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_10,CONCAT71(uVar1 >> 8,1),auStackX_8);
            uVar3 = uVar3 + 1;
            iVar2 = *(*(arg1 + 0x2d0) + 0x40);
        } while (uVar3 < *(iVar2 + 0x18));
    }
    return uVar1;
}


/* fcn.00020258 @ 0x20258 */

//WARNING: Variable defined which should be unmapped: var_10h

uint64_t fcn.00020258(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar6;
    uint16_t uVar7;
    ulong uVar8;
    uint16_t uStackX_10;
    uint16_t auStackX_20 [4];
    int16_t var_38h;
    int64_t var_48h;
    int64_t iStack_38;
    int64_t var_10h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(arg2 + 0x2d0);
    uVar6 = 0;
    uVar7 = arg3;
    cVar1 = *(iVar2 + 0x85);
    if ((cVar1 != -2) && (iVar3 = *(arg1_00 + 0x2d0), *(iVar3 + 0x85) != -2)) {
        if ((*(iVar2 + 0x18) == -1) || ((uVar8 = 0x400, (*(iVar2 + 8) & 0x400) == 0 || ((*(iVar3 + 8) & 0x400) == 0))))
        {
            uVar8 = 0xfffe;
            uVar7 = uVar7 & 0xfffe;
        }
        if (((*(iVar2 + 0x1a) == -1) || (uVar8 = 0x800, (*(iVar2 + 8) & 0x800) == 0)) || ((*(iVar3 + 8) & 0x800) == 0))
        {
            uVar7 = uVar7 & 0xfffd;
        }
        uStackX_10 = uVar7;
        if (cVar1 == '\x01') {
            uStackX_10 = uVar7 & 0xfffd;
        }
        uVar5 = uStackX_10;
        if (cVar1 == '\0') {
            uStackX_10 = 0;
            uVar5 = uVar6;
        }
        uVar4 = fcn.0001d724(arg1_00,6,uVar8,arg1_00);
        if (uVar4 < 0) {
            if (uVar4 != 0x8000000000000003) {
                return uVar4;
            }
            uVar4 = fcn.0001d724(arg2,6,uVar8,arg1_00);
            if ((uVar4 < 0) && (uVar4 != 0x8000000000000003)) {
                return uVar4;
            }
            uVar4 = uVar6;
            uStackX_10 = uVar5;
        }
        if (uVar7 < uStackX_10) {
            uStackX_10 = uVar7;
        }
        if (((*(arg1_00 + 0x396) == '\0') && (*(arg1_00 + 0x2d0) != NULL)) &&
           ((*(arg2 + 0x396) == '\0' && (*(arg2 + 0x2d0) != 0)))) {
            if (uStackX_10 != 0) {
                uVar8 = 0;
                iStack_38._1_7_ = *(arg1_00 + 0xd8) >> 8;
                iStack_38 = CONCAT71(iStack_38._1_7_,**(arg1_00 + 0x2d0) + '\x10');
                uVar5 = fcn.0001cc58(*(arg1_00 + 0xb8),iStack_38,0,auStackX_20);
                if (uVar5 < 0) {
                    return uVar5;
                }
                auStackX_20[0] = auStackX_20[0] ^ (auStackX_20[0] ^ uStackX_10) & 3;
                fcn.0001cc58(*(arg1_00 + 0xb8),iStack_38,CONCAT71(uVar8 >> 8,1),auStackX_20);
                uVar8 = 0;
                iStack_38._1_7_ = *(arg2 + 0xd8) >> 8;
                iStack_38 = CONCAT71(iStack_38._1_7_,**(arg2 + 0x2d0) + '\x10');
                uVar5 = fcn.0001cc58(*(arg2 + 0xb8),iStack_38,0,auStackX_20);
                if (uVar5 < 0) {
                    return uVar5;
                }
                auStackX_20[0] = auStackX_20[0] ^ (auStackX_20[0] ^ uStackX_10) & 3;
                uVar4 = fcn.0001cc58(*(arg2 + 0xb8),iStack_38,CONCAT71(uVar8 >> 8,1),auStackX_20);
                if (uVar4 < 0) {
                    return uVar4;
                }
                if ((*(arg2 + 0x338) != 0) &&
                   (((*(arg2 + 0x340) != 0 || (*(arg2 + 0x348) != 0)) && (*(arg2 + 0x348) != 0)))) {
                    do {
                        iVar2 = *(*(arg2 + 0x350) + uVar6 * 8);
                        if ((*(iVar2 + 0x396) == '\0') && (*(iVar2 + 0x2d0) != NULL)) {
                            uVar8 = 0;
                            iStack_38._1_7_ = *(iVar2 + 0xd8) >> 8;
                            iStack_38 = CONCAT71(iStack_38._1_7_,**(iVar2 + 0x2d0) + '\x10');
                            uVar5 = fcn.0001cc58(*(iVar2 + 0xb8),iStack_38,0,auStackX_20);
                            if (uVar5 < 0) {
                                return uVar5;
                            }
                            auStackX_20[0] = auStackX_20[0] ^ (auStackX_20[0] ^ uStackX_10) & 3;
                            uVar4 = fcn.0001cc58(*(iVar2 + 0xb8),iStack_38,CONCAT71(uVar8 >> 8,1),auStackX_20);
                            if (uVar4 < 0) {
                                return uVar4;
                            }
                        }
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < *(arg2 + 0x348));
                }
            }
            return uVar4;
        }
    }
    return 0;
}


/* fcn.0001e8e0 @ 0x1e8e0 */

int64_t fcn.0001e8e0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    bool bVar3;
    bool bVar4;
    uint16_t uVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint64_t arg3_00;
    uint64_t uVar9;
    
    iVar6 = 0;
    uVar8 = arg3;
    uVar7 = arg2;
    if ((*(arg1 + 0xd0) != 5) || (iVar1 = *(arg1 + 0x2d0), *(iVar1 + 0x13) == '\0')) goto code_r0x0001e9ca;
    bVar4 = false;
    if ((*(iVar1 + 0x83) != -2) && (uVar7 <= *(iVar1 + 0x16))) {
        bVar4 = true;
    }
    bVar3 = true;
    if (((*(iVar1 + 0x84) == -2) || (uVar8 == 0x37)) && (bVar3 = false, !bVar4)) goto code_r0x0001e9ca;
    uVar5 = 2;
    if (uVar8 != 0x37) {
        uVar5 = uVar8;
    }
    uVar8 = uVar5;
    if ((bVar3) && (bVar4)) {
        uVar9 = uVar8;
code_r0x0001e9ad:
        iVar6 = fcn.0001e804(arg1,uVar7,uVar9);
    }
    else {
        if ((bVar3) && (!bVar4)) {
            iVar6 = fcn.0001e804(arg1,0xfe,uVar8);
        }
        if ((bVar4) && (!bVar3)) {
            uVar9 = 0xfe;
            goto code_r0x0001e9ad;
        }
    }
    if (iVar6 < 0) {
        return iVar6;
    }
code_r0x0001e9ca:
    uVar9 = 0;
    if (*(arg1 + 0x348) != 0) {
        do {
            iVar1 = *(*(arg1 + 0x350) + uVar9 * 8);
            if ((*(iVar1 + 0xd0) == 5) && (iVar2 = *(iVar1 + 0x2d0), *(iVar2 + 0x13) != '\0')) {
                bVar4 = false;
                if ((*(iVar2 + 0x83) != -2) && (uVar7 <= *(iVar2 + 0x16))) {
                    bVar4 = true;
                }
                bVar3 = true;
                if (((*(iVar2 + 0x84) != -2) && (uVar8 != 0x37)) || (bVar3 = false, bVar4)) {
                    if (uVar8 == 0x37) {
                        uVar8 = 2;
                    }
                    if ((bVar3) && (bVar4)) {
                        arg3_00 = uVar8;
code_r0x0001ea7f:
                        iVar6 = fcn.0001e804(iVar1,uVar7,arg3_00);
                    }
                    else {
                        if ((bVar3) && (!bVar4)) {
                            iVar6 = fcn.0001e804(iVar1,0xfe,uVar8);
                        }
                        if ((bVar4) && (!bVar3)) {
                            arg3_00 = 0xfe;
                            goto code_r0x0001ea7f;
                        }
                    }
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                }
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *(arg1 + 0x348));
    }
    return iVar6;
}


/* fcn.000200a4 @ 0x200a4 */

uint64_t fcn.000200a4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    int64_t extraout_RAX;
    uint64_t extraout_RAX_00;
    int16_t *piVar4;
    char cVar5;
    uint64_t uVar6;
    int64_t iVar7;
    unkbyte7 in_R8;
    
    iVar7 = 0;
    cVar5 = arg2;
    uVar6 = 0;
    do {
        cVar3 = fcn.0001ce58(arg1);
        if (cVar3 == '\0') {
            arg1 = *(arg1 + 0x338);
        }
        iVar1 = *(arg1 + 0xc0);
        iVar2 = *(iVar1 + 0x2d0);
        piVar4 = iVar2 + 0x18;
        if (cVar5 == '\0') {
            piVar4 = iVar2 + 0x1a;
        }
        if (*piVar4 != -1) {
            if (cVar5 == '\0') {
                fcn.0001eca4(*(iVar2 + 0x1a),0,CONCAT71(in_R8,1));
                if (uVar6 < extraout_RAX_00) {
                    uVar6 = extraout_RAX_00;
                }
            }
            else {
                fcn.0001eca4(*(iVar2 + 0x18),CONCAT71(0xff,cVar5),CONCAT71(in_R8,1));
                uVar6 = uVar6 + extraout_RAX;
            }
        }
        arg1 = *(iVar1 + 0xc0);
        iVar7 = iVar7 + 1;
    } while ((((arg1 != 0) && (iVar1 = *(arg1 + 0xc0), iVar1 != 0)) && (*(iVar1 + 0xd0) != 1)) &&
            ((*(iVar1 + 0x396) == '\0' && (*(iVar1 + 0x2d0) != 0))));
    if ((cVar5 == '\0') && (iVar7 != 0)) {
        uVar6 = (uVar6 - 1000) + iVar7 * 1000;
    }
    return uVar6;
}


/* fcn.0001f2a8 @ 0x1f2a8 */

void fcn.0001f2a8(uint32_t arg1)

{
    char *pcVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong uVar4;
    uint16_t auStackX_8 [4];
    uint16_t auStackX_10 [4];
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    pcVar1 = *(iVar3 + 0x2d0);
    if (((*(pcVar1 + 2) & 0x100) != 0) && (pcVar1[0x8f] != '\0')) {
        uVar4 = 0;
        var_20h._1_7_ = *(iVar3 + 0xd8) >> 8;
        var_20h = CONCAT71(var_20h._1_7_,*pcVar1 + '\x18');
        fcn.0001cc58(*(iVar3 + 0xb8),var_20h,0,auStackX_8);
        iVar2 = *(iVar3 + 0x2d0);
        if (*(iVar2 + 0x8f) != -2) {
            auStackX_8[0] = auStackX_8[0] & 0xefc0;
            if ((*(iVar2 + 0xc) & 8) != 0) {
                auStackX_8[0] = auStackX_8[0] | 0xc0;
            }
            if ((*(iVar2 + 0xc) & 0x10) != 0) {
                auStackX_8[0] = auStackX_8[0] & 0xfdff | 0x100;
            }
            if ((*(iVar2 + 0xc) & 2) != 0) {
                auStackX_8[0] = auStackX_8[0] & 0xfbff;
            }
            iVar2 = fcn.0001cc58(*(iVar3 + 0xb8),var_20h,CONCAT71(uVar4 >> 8,1),auStackX_8);
            if (iVar2 < 0) {
                return;
            }
        }
        uVar4 = 0;
        var_20h = CONCAT71(var_20h._1_7_,**(iVar3 + 0x2d0) + '\x1a');
        fcn.0001cc58(*(iVar3 + 0xb8),var_20h,0,auStackX_10);
        auStackX_10[0] = auStackX_10[0] | 0x11f;
        fcn.0001cc58(*(iVar3 + 0xb8),var_20h,CONCAT71(uVar4 >> 8,1),auStackX_10);
    }
    return;
}


/* fcn.0001ddc0 @ 0x1ddc0 */

ulong fcn.0001ddc0(int64_t arg1)

{
    char *pcVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8._1_7_ = *(arg1 + 0xd8) >> 8;
    iStackX_8 = CONCAT71(iStackX_8._1_7_,**(arg1 + 0x2d0) + '$');
    fcn.0001cd18(*(arg1 + 0xb8),iStackX_8,0,*(*(arg1 + 0x2d0) + 0x20));
    iStackX_8 = CONCAT71(iStackX_8._1_7_,**(arg1 + 0x2d0) + ',');
    uVar2 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_8,0,*(*(arg1 + 0x2d0) + 0x20) + 4);
    pcVar1 = *(arg1 + 0x2d0);
    if ((*(pcVar1 + 2) & 0x100) != 0) {
        iStackX_8 = CONCAT71(iStackX_8._1_7_,*pcVar1 + '4');
        uVar2 = fcn.0001cd18(*(arg1 + 0xb8),iStackX_8,0,*(pcVar1 + 0x20) + 8);
    }
    *(*(*(arg1 + 0x2d0) + 0x20) + 0x20) = arg1;
    return uVar2;
}


/* fcn.00020b98 @ 0x20b98 */

ulong fcn.00020b98(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int iVar2;
    int64_t arg1_00;
    uint16_t *puVar3;
    ulong uVar4;
    uint32_t uVar5;
    int16_t iVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    ulong uVar9;
    uint16_t uVar10;
    uint32_t auStackX_10 [2];
    ulong uStackX_18;
    int64_t var_48h;
    int64_t var_50h;
    
    uStackX_18 = *arg2 & 0xffffffffffffff00;
    arg1_00 = fcn.0001b8ec(arg1,10);
    if ((arg1_00 != 0) && (puVar3 = fcn.000102a0(arg1_00,10), puVar3 != NULL)) {
        *(*(arg1 + 0x2d0) + 0x50) = puVar3;
        *puVar3 = uStackX_18._4_2_;
        uStackX_18 = CONCAT44(uStackX_18._4_2_ + 8,uStackX_18);
        uVar4 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_18,0,auStackX_10);
        uVar8 = 0;
        uVar10 = auStackX_10[0] >> 5 & 7;
        if (uVar10 != 0) {
            do {
                uStackX_18 = CONCAT44(*puVar3 + 4 + uVar8 * 8,uStackX_18);
                fcn.0001cd18(*(arg1 + 0xb8),uStackX_18,0,puVar3 + 2);
                iVar2 = *(puVar3 + 2);
                if (iVar2 == 0) {
                    iVar6 = -1;
                }
                else {
                    iVar6 = 0x1f;
                    for (; 0 < iVar2; iVar2 = iVar2 * 2) {
                        iVar6 = iVar6 + -1;
                    }
                }
                uVar9 = 0;
                uVar7 = iVar6 - 4;
                uStackX_18 = CONCAT44(*puVar3 + 8 + uVar8 * 8,uStackX_18);
                uVar4 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_18,0,auStackX_10);
                uVar5 = auStackX_10[0] >> 0x10;
                if (auStackX_10[0] >> 0x10 != 0) {
                    iVar6 = 0x1f;
                    do {
                        iVar1 = iVar6;
                        uVar5 = uVar5 * 2;
                        iVar6 = iVar1 + -1;
                    } while (0 < uVar5);
                    uVar7 = uVar7 + iVar1;
                }
                if ((auStackX_10[0] >> 8 & 0x3f) < uVar7) {
                    auStackX_10[0] =
                         CONCAT22(auStackX_10[0]._2_2_,auStackX_10[0] ^ (uVar7 << 8 ^ auStackX_10[0]) & 0x3f00);
                    uVar4 = fcn.0001cd18(*(arg1 + 0xb8),uStackX_18,CONCAT71(uVar9 >> 8,1),auStackX_10);
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uVar10);
        }
        return uVar4;
    }
    return 0x8000000000000009;
}


/* fcn.0001ff40 @ 0x1ff40 */

ulong fcn.0001ff40(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    ushort *puVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong uStackX_18;
    char in_stack_00000028;
    int in_stack_00000030;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar3 + 0x396) == '\0') && (*(iVar3 + 0x2d0) != 0)) {
        if (*arg2 == 0) {
            puVar2 = fcn.0001bc6c(8);
            *arg2 = puVar2;
            if (puVar2 == NULL) {
                uVar1 = 0x8000000000000009;
            }
            else {
                *puVar2 = arg4;
                uStackX_18 = CONCAT44(in_stack_00000030 + 4 + arg4,*(iVar3 + 0xd8));
                if (in_stack_00000028 == '\0') {
                    uVar1 = fcn.0001cd18(*(iVar3 + 0xb8),uStackX_18,0,puVar2 + 2);
                }
                else {
                    uVar1 = fcn.0001cc58(*(iVar3 + 0xb8),uStackX_18,0,puVar2 + 2);
                }
            }
        }
        else {
            uVar1 = 0x8000000000000002;
        }
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001be20 @ 0x1be20 */

ulong fcn.0001be20(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    
    if (arg1 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else if (arg2 != 0) {
        iVar1 = fcn.0001bcac(arg1);
        iVar2 = fcn.0001bcac(arg2);
        if (iVar2 == iVar1) {
            uVar3 = fcn.0001c1c0(arg1,arg2,iVar1);
            return uVar3;
        }
    }
    return 0xffffffffffffffff;
}


/* fcn.0001b9f0 @ 0x1b9f0 */

uint64_t fcn.0001b9f0(uint32_t arg1)

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


/* fcn.00022934 @ 0x22934 */

void fcn.00022934(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00021bcc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00021b98 @ 0x21b98 */

uchar * fcn.00021b98(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


