// decompiled by r2ghidra: 1280_PiSmmCpuDxeSmm.pe32
// functions: 200

/* entry0 @ 0x12584 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    fcn.00012604(noname_0,arg1);
    arg1_00 = 0x23c10;
    *0x23d10 = -0x7fffffffffffffff;
    iVar1 = fcn.00011770(0x23c10);
    if (iVar1 == 0) {
        iVar1 = fcn.00012fb8(arg1_00,arg1);
        if ((-1 < iVar1) || (*0x23d10 < 0)) {
            *0x23d10 = iVar1;
        }
        fcn.000119b0(0x23c10,-1);
    }
    iVar1 = *0x23d10;
    if (*0x23d10 < 0) {
        fcn.000190b0(*0x24a88);
    }
    return iVar1;
}


/* fcn.00012a10 @ 0x12a10 */

void fcn.00012a10(void)

{
    char cVar1;
    int iVar2;
    ulong uVar3;
    uint64_t uVar4;
    int *arg2;
    uint64_t arg1;
    int64_t in_R9;
    uint32_t uStackX_8;
    uint32_t auStackX_10 [2];
    
    fcn.00011a70(0x20122);
    iVar2 = fcn.00019568();
    arg1 = 0;
    if (*0x22448 != 0) {
        arg2 = *(*0x22460 + 0x10);
        do {
            if (iVar2 == *arg2) {
                fcn.0001a994(arg1,arg2,*0x22448,in_R9);
                if (*0x23981 == '\0') {
                    if (*0x22568 != '\0') {
                        fcn.000118a0(0x80000000,auStackX_10,0,0);
                        if (auStackX_10[0] < 0x80000001) {
                            *0x22568 = '\0';
                            *0x11344 = 0;
                        }
                        fcn.000118a0(0x80000001,NULL,0,0);
                        if ((uStackX_8 & 0x100000) == 0) {
                            *0x22568 = '\0';
                            *0x11344 = 0;
                        }
                        cVar1 = fcn.00019258();
                        if (cVar1 != '\0') {
                            *0x1134a = 0;
                        }
                    }
                    if ((*0x22569 != '\0') && (fcn.000118a0(1,NULL,0,0), (uStackX_8 & 0x200000) != 0)) {
                        uVar3 = rdmsr(0x1a0);
                        if ((uVar3 >> 0xb & 1) != 0) {
                            *0x22569 = '\0';
                        }
                    }
                }
                if (*0x24ea8 != '\0') {
                    fcn.00014d54();
                }
                if ((*0x23de8 == '@') && (*0x23e12 != '\0')) {
                    *0x24aa0 = rdmsr(0xc04);
                    uVar4 = rdmsr(0xc03);
                    if ((uVar4 & 0x400) == 0) {
                        uVar3 = 0x11117;
                    }
                    else {
                        uVar3 = 0x11105;
                    }
                    wrmsr(0xc04,uVar3);
                    uVar4 = rdmsr(0xc1f);
                    if ((uVar4 >> 0x10 & 1) != 0) {
                        uVar4 = rdmsr(0xc1f);
                        wrmsr(0xc1f,uVar4 & 0xfffffffffffeffff);
                    }
                }
                else {
                    *0x24aa0 = 0;
                }
                if (*0x24aa0 == 0) {
                    if (*0x24aca == ' ') {
                        *0x24aa0 = *0x3fff0;
                        *0x3fff0 = 0x11105;
                    }
                    else {
                        uVar4 = 0x11117;
                        if ((*0x3ffe0 & 0x400) != 0) {
                            uVar4 = 0x11105;
                        }
                        *0x24aa0 = *0x3ffd8;
                        *0x3ffd8 = uVar4;
                    }
                    if ((*0x3ff02 & 1) != 0) {
                        *0x3ff02 = *0x3ff02 & 0xfffe;
                    }
                }
                *0x11119 = *0x24e98 + arg1;
                *0x11123 = 0x24aa0;
                *0x24aa8 = *0x24e98 + arg1;
                return;
            }
            arg1 = arg1 + 1;
            arg2 = arg2 + 0xc;
        } while (arg1 < *0x22448);
    }
    return;
}


/* fcn.000110d1 @ 0x110d1 */

void fcn.000110d1(ulong param_1,int64_t param_2)

{
    fcn.000110dd(param_1,param_2);
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.000110dd @ 0x110dd */

void fcn.000110dd(ulong noname_0,int64_t arg1)

{
    int64_t in_RAX;
    
    if (in_RAX == 1) {
        smm_restore_state();
        return;
    }
    fcn.000110d1();
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.0001138a @ 0x1138a */

uint64_t fcn.0001138a(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint unaff_ESP;
    uint unaff_RSP;
    
    *CONCAT44(unaff_RSP,unaff_ESP) = *CONCAT44(unaff_RSP,unaff_ESP) + 0x1d;
    uVar1 = rdmsr(0xc0000080);
    uVar2 = uVar1 & 0xffffffff | 0x100;
    wrmsr(0xc0000080,uVar1 & 0xffffffff00000000 | uVar2);
    return uVar2;
}


/* fcn.00011517 @ 0x11517 */

void fcn.00011517(void)

{
    fcn.00011523();
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.00011523 @ 0x11523 */

void fcn.00011523(void)

{
    int64_t in_RAX;
    
    if (in_RAX == 1) {
        smm_restore_state();
        return;
    }
    fcn.00011517();
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.00014af8 @ 0x14af8 */

void fcn.00014af8(void)

{
    return;
}


/* fcn.00019874 @ 0x19874 */

void fcn.00019874(uint32_t param_1,int64_t param_2,uint32_t param_3)

{
    fcn.00019c58(param_1,param_2,param_3);
    return;
}


/* fcn.00019c58 @ 0x19c58 */

void fcn.00019c58(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint in_R8;
    int64_t arg3_00;
    int64_t in_R9;
    uint8_t uVar10;
    bool bVar11;
    uint64_t uStackX_18;
    
    iVar3 = *0x23e78;
    iVar2 = *0x23e70;
    arg3_00 = CONCAT44(in_R8,arg3);
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    iVar9 = iVar6;
    if (iVar6 == 0x1d) {
        iVar9 = 0x1d;
    }
    iVar8 = iVar9 * 0x58;
    iVar4 = *(iVar8 + 0xc + *0x23e70);
    iVar7 = arg2;
    if (iVar4 == 1) {
        *(arg2 + 0x358) = (1 << (iVar9 & 0x1f) & 0x20227d00U) != 0;
        *(arg2 + 0x360) = *(iVar8 + 0x10 + iVar2);
        iVar6 = iVar9;
    }
    else if (iVar4 == 2) {
        while( true ) {
            LOCK();
            bVar11 = *(iVar8 + iVar2) == 1;
            if (bVar11) {
                *(iVar8 + iVar2) = 2;
            }
            UNLOCK();
            if (bVar11) {
                uVar5 = fcn.00019568();
                *(iVar8 + 8 + iVar2) = uVar5;
                iVar6 = *0x23e70;
                *(iVar8 + 0x18 + *0x23e70) = *(arg2 + 0x2d0);
                *(iVar8 + 0x20 + iVar6) = *(arg2 + 0x2f0);
                *(iVar8 + 0x28 + iVar6) = *(arg2 + 0x268);
                *(iVar8 + 0x30 + iVar6) = *(arg2 + 0x2c8);
                *(iVar8 + 0x38 + iVar6) = *(arg2 + 0x2a0);
                *(iVar8 + 0x40 + iVar6) = *arg2;
                uStackX_18 = *(arg2 + 0x268) & 0xfffffffffffffdff;
                *(arg2 + 0x268) = uStackX_18;
                *(arg2 + 0x2a0) = iVar6 + 0x48 + iVar8;
                *(arg2 + 0x358) = (1 << (iVar9 & 0x1f) & 0x20227d00U) != 0;
                *(arg2 + 0x360) = *(iVar8 + 0x10 + iVar2);
                return;
            }
            iVar4 = fcn.00019568();
            iVar7 = *0x23e70;
            if (*(iVar8 + 8 + iVar2) == iVar4) break;
            fcn.00011860();
        }
        *(arg2 + 0x2d0) = *(iVar8 + 0x18 + *0x23e70);
        *(arg2 + 0x2f0) = *(iVar8 + 0x20 + iVar7);
        *(arg2 + 0x268) = *(iVar8 + 0x28 + iVar7);
        *(arg2 + 0x2c8) = *(iVar8 + 0x30 + iVar7);
        *(arg2 + 0x2a0) = *(iVar8 + 0x38 + iVar7);
        iVar6 = *(iVar8 + 0x40 + iVar7);
        *arg2 = iVar6;
        *(iVar8 + iVar2) = 1;
    }
    else if (iVar4 != -1) {
        fcn.00018e74();
    }
    if ((iVar3 == 0) || (pcVar1 = *(iVar3 + iVar9 * 8), pcVar1 == NULL)) {
        if (iVar9 < 0x20) {
            while( true ) {
                LOCK();
                bVar11 = *0x23e68 == 1;
                if (bVar11) {
                    *0x23e68 = 2;
                }
                UNLOCK();
                if (bVar11) break;
                fcn.00011860();
            }
            uVar10 = 0x22;
            if (*0x23a00 != '\0') {
                uVar10 = *0x2260c;
            }
            if ((uVar10 & 2) != 0) {
                fcn.0001d080(iVar6,iVar7,arg3_00);
            }
            if ((uVar10 & 0x10) != 0) {
                fcn.0001e720();
            }
            fcn.00019924(iVar9,arg2);
            fcn.0001a014(0x22fd0,arg2,arg3_00,in_R9);
            *0x23e68 = 1;
            if (*(iVar8 + 0xc + iVar2) != 1) {
                fcn.00018e74();
            }
        }
    }
    else {
        (*pcVar1)(iVar9,arg2);
    }
    return;
}


/* fcn.000121f4 @ 0x121f4 */

uint64_t fcn.000121f4(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint unaff_ESP;
    uint unaff_RSP;
    
    *CONCAT44(unaff_RSP,unaff_ESP) = *CONCAT44(unaff_RSP,unaff_ESP) + 0x1d;
    uVar1 = rdmsr(0xc0000080);
    uVar2 = uVar1 & 0xffffffff | 0x100;
    wrmsr(0xc0000080,uVar1 & 0xffffffff00000000 | uVar2);
    return uVar2;
}


/* fcn.00014afc @ 0x14afc */

uint64_t fcn.00014afc(int64_t arg1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    int *piVar4;
    uint64_t uVar5;
    int64_t arg1_00;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint64_t uStackX_10;
    uint32_t auStackX_18 [2];
    uint32_t uStackX_20;
    uint64_t uStack_18;
    
    arg1_00 = 0;
    if (*0x24ab0 == '\0') {
        arg1_00 = fcn.00011920();
    }
    if ((*0x23950)[7] != NULL) {
        (*(*0x23950)[7])((*0x23950)[8]);
    }
    uVar8 = 0;
    uVar6 = 1;
    fcn.000118a0(1,NULL,0,0);
    if ((uStackX_10 & 0x10000000) == 0) {
code_r0x00014b91:
        if (*0x23e10 != '\0') {
            uVar6 = 499;
            uVar5 = rdmsr(499);
            uVar8 = uVar5 & 0xffffffff00000000;
            uVar7 = uVar5;
            if (*0x23e28 == '\0') {
                uVar8 = 0x800;
                if ((uVar5 & 0x800) == 0) {
                    uVar7 = uVar7 | 0x800;
                    goto code_r0x00014bce;
                }
            }
            else if ((uVar7 >> 10 & 1) == 0) {
                uVar7 = uVar7 | 0xc00;
code_r0x00014bce:
                uVar8 = uVar5 >> 0x20;
                wrmsr(499,uVar8 << 0x20 | uVar7);
            }
        }
        if (*0x23e11 != '\0') {
            fcn.0001a71c(uVar6,uVar8);
        }
    }
    else {
        fcn.00011870(0xb,0,auStackX_18,0);
        uVar6 = auStackX_18[0] & 0x1f;
        uVar7 = ~(-1 << (auStackX_18[0] & 0x1f));
        uVar8 = uVar7;
        if ((uStackX_20 & uVar7) == 0) goto code_r0x00014b91;
    }
    if (*0x23df8 != '\0') {
        uStack_18 = rdmsr(0x570);
        uStack_18 = uStack_18 | 1;
        wrmsr(0x570,uStack_18);
    }
    cVar2 = *(*0x23950)[3];
    piVar4 = (*0x23950)[1];
    do {
        iVar3 = *piVar4;
        if (iVar3 + 1 == 0) goto code_r0x00014cf6;
        LOCK();
        iVar1 = *piVar4;
        if (iVar3 == iVar1) {
            *piVar4 = iVar3 + 1;
        }
        UNLOCK();
    } while (iVar3 != iVar1);
    **(arg1 * 0x38 + **0x23950) = 1;
    uVar8 = *0x22450;
    if ((cVar2 == '\0') && (*(*0x23950 + 2) == arg1)) {
        if (*(*0x23950 + 0x2c) != '\0') {
            uVar6 = 0;
            *(*0x23950 + 0x2c) = 0;
            if (uVar8 != 0) {
                do {
                    *(uVar6 + (*0x23950)[6]) = 0;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *0x22450);
            }
        }
        fcn.00013e50(arg1,*(*0x23950 + 5));
    }
    else {
        fcn.00014188(arg1,arg1 * 0x38,*(*0x23950 + 5));
    }
    while (*(*0x23950)[4] != '\0') {
        fcn.00011860();
    }
code_r0x00014d07:
    uStackX_10 = 0;
    if (*0x23df8 != '\0') {
        uVar8 = rdmsr(0x570);
        uStackX_10 = uVar8 & 0xfffffffffffffffe;
        wrmsr(0x570,uStackX_10);
    }
    if (*0x24ab0 == '\0') {
        uStackX_10 = fcn.000119a0(arg1_00);
    }
    return uStackX_10;
code_r0x00014cf6:
    while (*(*0x23950)[4] != '\0') {
        fcn.00011860();
    }
    goto code_r0x00014d07;
}


/* fcn.000122f6 @ 0x122f6 */

void fcn.000122f6(ulong param_1,int64_t param_2)

{
    fcn.00012302(param_1,param_2);
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.00012302 @ 0x12302 */

void fcn.00012302(ulong noname_0,int64_t arg1)

{
    int64_t in_RAX;
    
    if (in_RAX == 1) {
        smm_restore_state();
        return;
    }
    fcn.000122f6();
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.0001c630 @ 0x1c630 */

void fcn.0001c630(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t in_R8;
    int64_t in_R9;
    
    out(0x80,0xb23);
    fcn.0001df40(0x23830,0xb23,in_R8,in_R9);
    if ((*0x23a58 == NULL) || (iVar1 = (***0x23a58)(arg1,arg2), iVar1 != 0)) {
        do {
            LOCK();
            iVar1 = **0x23de0;
            if (iVar1 == 1) {
                **0x23de0 = 2;
            }
            UNLOCK();
        } while (iVar1 != 1);
        fcn.00019924(arg1,arg2);
        **0x23de0 = 1;
        fcn.00018e74();
    }
    return;
}


/* fcn.000123f9 @ 0x123f9 */

//WARNING: Removing unreachable block (ram,0x00012418)
//WARNING: Removing unreachable block (ram,0x0001240a)

uint64_t fcn.000123f9(ulong noname_0,int64_t arg1)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint unaff_ESP;
    uint unaff_RSP;
    
    *CONCAT44(unaff_RSP,unaff_ESP) = *CONCAT44(unaff_RSP,unaff_ESP) + 0x4e;
    puVar1 = cpuid(0x80000000);
    if ((0x80000000 < *puVar1) && (iVar2 = cpuid(0x80000001), (*(iVar2 + 8) & 0x100000) != 0)) {
        uVar3 = rdmsr(0xc0000080);
        wrmsr(0xc0000080,uVar3 & 0xffffffff00000000 | uVar3 & 0xffffffff | 0x800);
    }
    uVar3 = rdmsr(0xc0000080);
    uVar4 = uVar3 & 0xffffffff | 0x100;
    wrmsr(0xc0000080,uVar3 & 0xffffffff00000000 | uVar4);
    return uVar4;
}


/* fcn.00012604 @ 0x12604 */

//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00012604(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    ulong noname_0;
    int64_t iVar9;
    bool bVar10;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    *0x239b8 = *(arg2 + 0x60);
    *0x239c8 = *(arg2 + 0x58);
    iStackX_10 = 0;
    *0x239b0 = arg2;
    *0x239c0 = arg1;
    (**(*0x239b8 + 0x140))(0x22380,0,&iStackX_10);
    (**(iStackX_10 + 8))(iStackX_10,0x239d0);
    (**(*0x239b8 + 0x140))(0x223b0,0,&var_bp_20h);
    uStackX_8 = 0;
    (**(var_bp_20h + 0x18))(var_bp_20h,&uStackX_8,0);
    *0x24a88 = fcn.00019014();
    (**(var_bp_20h + 0x18))(var_bp_20h,&uStackX_8,*0x24a88);
    *0x24a80 = uStackX_8 >> 5;
    fcn.00019148();
    noname_0 = 0x225f8;
    iVar5 = fcn.00019178(0x225f8);
    if (iVar5 == 0) {
        uVar6 = fcn.00011b40();
        fcn.00011a90();
        uVar3 = in(0x1808);
        iVar5 = fcn.00012540(noname_0,0x1808);
        while( true ) {
            iVar4 = in(0x1808);
            uVar8 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            fcn.00011860();
        }
        iVar9 = fcn.00012540(uVar8,0x1808);
        if ((uVar6 >> 9 & 1) == 0) {
            fcn.00011a90();
        }
        else {
            fcn.00011a80();
        }
        *0x239f8 = (iVar9 - iVar5) * 0x2685;
    }
    else {
        *0x239f8 = *(iVar5 + 0x18);
    }
    if (((*0x239b0 != 0) && (iVar5 = fcn.00019178(0x223f0), iVar5 != 0)) && (iVar5 != -0x18)) {
        cVar1 = *(iVar5 + 0x1a);
        if (cVar1 == '\x03') {
            *0x22608 = 0x2580;
        }
        else if (cVar1 == '\x04') {
            *0x22608 = 0x4b00;
        }
        else if (cVar1 == '\x06') {
            *0x22608 = 0xe100;
        }
        else {
            *0x22608 = 0x1c200;
        }
        bVar10 = *(iVar5 + 0x1b) != '\0';
        *0x23a01 = 1;
        *0x23a00 = 1;
        uVar2 = bVar10 | 2;
        if (*(iVar5 + 0x1c) == '\0') {
            uVar2 = bVar10;
        }
        uVar7 = uVar2 | 8;
        if (*(iVar5 + 0x1d) == '\0') {
            uVar7 = uVar2;
        }
        uVar2 = uVar7 | 0x10;
        if (*(iVar5 + 0x1e) == '\0') {
            uVar2 = uVar7;
        }
        *0x2260c = uVar2 | 0x20;
        if (*(iVar5 + 0x1f) == '\0') {
            *0x2260c = uVar2;
        }
    }
    iVar9 = 0x23a08;
    iVar5 = 0x22390;
    fcn.000190e8(0x22390,0x23a08);
    fcn.0001a134(iVar5,iVar9);
    uStackX_8 = 0;
    uVar2 = fcn.0001dee4(iVar5,iVar9);
    if (10 < uVar2) {
        (**(*0x239d0 + 0xc0))(0x22370,0x1d000,&uStackX_8);
    }
    return;
}


/* fcn.00011770 @ 0x11770 */

ulong fcn.00011770(int64_t arg1)

{
    ulong unaff_RBX;
    ulong unaff_RBP;
    ulong unaff_RSI;
    ulong unaff_RDI;
    ulong unaff_R12;
    ulong unaff_R13;
    ulong unaff_R14;
    ulong unaff_R15;
    uint32_t in_CR4;
    int64_t in_SSP;
    ulong unaff_XMM6_Qa;
    ulong unaff_XMM6_Qb;
    ulong unaff_XMM7_Qa;
    ulong unaff_XMM7_Qb;
    ulong unaff_XMM8_Qa;
    ulong unaff_XMM8_Qb;
    ulong unaff_XMM9_Qa;
    ulong unaff_XMM9_Qb;
    ulong unaff_XMM10_Qa;
    ulong unaff_XMM10_Qb;
    ulong unaff_XMM11_Qa;
    ulong unaff_XMM11_Qb;
    ulong unaff_XMM12_Qa;
    ulong unaff_XMM12_Qb;
    ulong unaff_XMM13_Qa;
    ulong unaff_XMM13_Qb;
    ulong unaff_XMM14_Qa;
    ulong unaff_XMM14_Qb;
    ulong unaff_XMM15_Qa;
    ulong unaff_XMM15_Qb;
    ulong unaff_retaddr;
    uchar auStackX_8 [32];
    
    fcn.00014af8();
    *(arg1 + 0xf8) = 0;
    if ((*0x22740 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
        *(arg1 + 0xf8) = in_SSP + 8;
    }
    *arg1 = unaff_RBX;
    *(arg1 + 8) = auStackX_8;
    *(arg1 + 0x10) = unaff_RBP;
    *(arg1 + 0x18) = unaff_RDI;
    *(arg1 + 0x20) = unaff_RSI;
    *(arg1 + 0x28) = unaff_R12;
    *(arg1 + 0x30) = unaff_R13;
    *(arg1 + 0x38) = unaff_R14;
    *(arg1 + 0x40) = unaff_R15;
    *(arg1 + 0x48) = unaff_retaddr;
    *(arg1 + 0x50) = *0x1094;
    *(arg1 + 0x58) = unaff_XMM6_Qa;
    *(arg1 + 0x60) = unaff_XMM6_Qb;
    *(arg1 + 0x68) = unaff_XMM7_Qa;
    *(arg1 + 0x70) = unaff_XMM7_Qb;
    *(arg1 + 0x78) = unaff_XMM8_Qa;
    *(arg1 + 0x80) = unaff_XMM8_Qb;
    *(arg1 + 0x88) = unaff_XMM9_Qa;
    *(arg1 + 0x90) = unaff_XMM9_Qb;
    *(arg1 + 0x98) = unaff_XMM10_Qa;
    *(arg1 + 0xa0) = unaff_XMM10_Qb;
    *(arg1 + 0xa8) = unaff_XMM11_Qa;
    *(arg1 + 0xb0) = unaff_XMM11_Qb;
    *(arg1 + 0xb8) = unaff_XMM12_Qa;
    *(arg1 + 0xc0) = unaff_XMM12_Qb;
    *(arg1 + 200) = unaff_XMM13_Qa;
    *(arg1 + 0xd0) = unaff_XMM13_Qb;
    *(arg1 + 0xd8) = unaff_XMM14_Qa;
    *(arg1 + 0xe0) = unaff_XMM14_Qb;
    *(arg1 + 0xe8) = unaff_XMM15_Qa;
    *(arg1 + 0xf0) = unaff_XMM15_Qb;
    //WARNING: Treating indirect jump as return
    return 0;
}


/* fcn.00012fb8 @ 0x12fb8 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

ulong fcn.00012fb8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong *arg1_00;
    bool bVar2;
    int iVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    uint64_t *puVar7;
    int64_t *piVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint64_t *puVar11;
    uint64_t *puVar12;
    uint64_t *puVar13;
    int iVar14;
    uint64_t uVar15;
    uint64_t uVar16;
    ulong uStackX_8;
    uint32_t auStackX_10 [2];
    uint64_t *puStackX_18;
    int64_t iStackX_20;
    int32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t *puVar17;
    ulong *apuStack_78 [2];
    uchar auStack_68 [8];
    uchar auStack_60 [32];
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    fcn.00011127();
    fcn.00011533();
    fcn.00018d08();
    (**(*0x239b8 + 0x140))(0x223b0,0,&iStackX_20);
    puVar11 = NULL;
    puStackX_18 = NULL;
    (**(iStackX_20 + 0x18))(iStackX_20,&puStackX_18,0);
    *0x24eb8 = fcn.00019014();
    (**(iStackX_20 + 0x18))(iStackX_20,&puStackX_18,*0x24eb8);
    iVar3 = 0;
    *0x24ea0 = puStackX_18 >> 5;
    uVar16 = 0x3f000;
    if (*0x24ea0 != 0) {
        puVar13 = *0x24eb8 + 0x10;
        puVar7 = puVar11;
        uVar15 = *0x24ea0;
        do {
            if ((puVar13[1] & 0x70) == 0) {
                if (0xfffff < puVar13[-1]) {
                    uVar1 = *puVar13;
                    if ((puVar13[-1] + uVar1 < 0x100000001) && (uVar16 <= uVar1)) {
                        puVar7 = puVar13 + -2;
                        uVar16 = uVar1;
                    }
                }
            }
            puVar13 = puVar13 + 4;
            uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
        if (puVar7 != NULL) {
            *0x2243c = puVar7[1];
            uVar16 = *0x2243c;
            iVar14 = puVar7[2];
            *0x22440 = iVar14;
            do {
                bVar2 = false;
                piVar8 = *0x24eb8 + 0x10;
                uVar15 = *0x24ea0;
                do {
                    uVar1 = piVar8[-1];
                    if ((uVar1 < uVar16) && (uVar16 == *piVar8 + uVar1)) {
                        *0x2243c = uVar1;
                        uVar16 = uVar1 & 0xffffffff;
code_r0x000130fe:
                        iVar14 = iVar14 + *piVar8;
                        bVar2 = true;
                        *0x22440 = iVar14;
                    }
                    else if ((iVar14 + uVar16 == uVar1) && (*piVar8 != 0)) goto code_r0x000130fe;
                    piVar8 = piVar8 + 4;
                    uVar15 = uVar15 - 1;
                } while (uVar15 != 0);
            } while (bVar2);
        }
    }
    (**(*(arg2 + 0x60) + 0x140))(0x22240,0,apuStack_78);
    (**apuStack_78[0])(apuStack_78[0],0x22448);
    *0x22450 = *0x22448;
    *0x23938 = 1;
    *0x23930 = 0;
    *(*0x22460 + 0x50) = *0x22448;
    fcn.000118a0(1,&uStackX_8,0,0);
    uVar16 = uStackX_8 >> 8 & 0xf;
    uVar10 = uStackX_8 >> 4 & 0xf;
    if ((uVar16 == 6) || (uVar16 == 0xf)) {
        uVar10 = uVar10 | uStackX_8 >> 0xc & 0xf0;
    }
    auStackX_10[0] = 0;
    puVar17 = NULL;
    fcn.000118a0(0x80000000,&uStackX_8,0,0);
    if (0x80000000 < uStackX_8) {
        puVar17 = auStackX_10;
        fcn.000118a0(0x80000001,NULL,0,0);
    }
    *0x24aca = 0x20;
    if ((auStackX_10[0] & 0x20000000) != 0) {
        *0x24aca = 0x40;
    }
    if (((uVar16 == 6) && (uVar10 < 0x1d)) && ((0x10808000ULL >> (uVar10 & 0x3f) & 1) != 0)) {
        *0x24aca = 0x40;
    }
    *0x22458 = 0;
    *0x113d6 = 0;
    if (*0x23a11 == '\0') {
        uVar10 = *0x12310;
    }
    else {
        uVar10 = *(*0x23d38 + 0xc);
    }
    if (uVar10 == 0) {
        uVar10 = *0x11531;
    }
    iVar14 = uVar10 + 0xfff + (-uVar10 & 0xfff);
    if (iVar14 != 0) {
        uVar5 = 0x1f;
        for (; 0 < iVar14; iVar14 = iVar14 * 2) {
            uVar5 = uVar5 - 1;
        }
        iVar3 = 1 << (uVar5 & 0x1f);
    }
    uVar15 = (*0x22450 + -1) * iVar3 * 2;
    iVar6 = ((uVar15 & 0xfff) != 0) + (uVar15 + 0x8000 >> 0xc);
    if (uVar16 - 4 < 2) {
        puVar13 = fcn.00013a34(iVar6,0x8000);
    }
    else if (iVar6 == 0) {
        puVar13 = puVar11;
    }
    else {
        iVar6 = (**(*0x239d0 + 0x60))(0,5,iVar6,&puStackX_18,puVar17);
        puVar13 = puStackX_18;
        if (iVar6 < 0) {
            puVar13 = puVar11;
        }
    }
    uVar4 = fcn.00019014(*0x22450,*0x22450 * 0x30);
    iVar6 = *0x22460;
    iVar9 = *0x22450 << 2;
    *(*0x22460 + 0x10) = uVar4;
    uVar4 = fcn.00019014(iVar6,iVar9);
    iVar6 = *0x22460;
    iVar9 = *0x22450 << 3;
    *(*0x22460 + 0x18) = uVar4;
    uVar4 = fcn.00019014(iVar6,iVar9);
    iVar6 = *0x22460;
    iVar9 = *0x22450 << 3;
    *(*0x22460 + 0x20) = uVar4;
    uVar4 = fcn.00019014(iVar6,iVar9);
    iVar6 = *0x22460;
    iVar9 = *0x22450 << 3;
    *(*0x22460 + 0x28) = uVar4;
    *0x224c8 = *(iVar6 + 0x20);
    *0x224d0 = *(iVar6 + 0x28);
    *0x22428 = fcn.00019014(iVar6,iVar9);
    *0x22430 = fcn.00019014();
    *0x22424 = SUB84(*0x22450,0);
    iVar6 = *0x22460;
    if (*0x22450 != NULL) {
        puVar13 = puVar13 + -0x1000;
        puVar12 = puVar11;
        puVar7 = *0x22450;
        do {
            *(*0x22430 + puVar11 * 8) = puVar13;
            *(*(iVar6 + 0x20) + puVar11 * 8) = 0x400;
            *(*(iVar6 + 0x28) + puVar11 * 8) = *(*0x22430 + puVar11 * 8) + 0xfc00;
            *(*(iVar6 + 0x18) + puVar11 * 4) = 0;
            if (puVar11 < *0x22448) {
                (*apuStack_78[0][1])(apuStack_78[0],puVar11,*(iVar6 + 0x10) + puVar12);
                iVar6 = *0x22460;
                puVar7 = *0x22450;
                *(*0x22428 + puVar11 * 8) = *(puVar12 + *(*0x22460 + 0x10));
            }
            else {
                *(puVar12 + *(iVar6 + 0x10)) = 0xffffffffffffffff;
                *(*0x22428 + puVar11 * 8) = 0xffffffffffffffff;
            }
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + iVar3 * 2;
            puVar12 = puVar12 + 6;
        } while (puVar11 < puVar7);
    }
    *0x24eb0 = 0x22000;
    *0x24ec0 = 0;
    iVar9 = fcn.00018fd4(*(iVar6 + 0x50) * 0x22);
    *0x24ec8 = (*0x24ec0 + *0x24eb0) * *(*0x22460 + 0x50) + -1 + iVar9;
    *0x1105d = *0x24eb0 + -8 + iVar9;
    *0x20122 = 0x1ff;
    iVar6 = *0x24eb0;
    *0x24ed0 = iVar9;
    *0x20124 = fcn.00013a00(1);
    fcn.00011750(*0x20124,*0x20122 + 1);
    uVar16 = fcn.00011b40();
    fcn.00011a90();
    fcn.00011a60(auStack_60);
    fcn.00011a70(0x20122);
    fcn.00019884();
    fcn.00011a70(auStack_60);
    if ((uVar16 >> 9 & 1) == 0) {
        fcn.00011a90();
    }
    else {
        fcn.00011a80();
    }
    *0x24e98 = fcn.00019044(*0x22450);
    fcn.00012c9c();
    uVar4 = rdmsr(0xfe);
    if ((uVar4 >> 0xb & 1) != 0) {
        *0x23e10 = 1;
        uVar4 = rdmsr(0xfe);
        if ((((uVar4 >> 0xd & 1) == 0) || (*0x23e24 == 0)) || (*0x23e11 = 1, *0x23a10 == '\0')) {
            *0x23e11 = 0;
        }
        uVar4 = rdmsr(0xfe);
        *0x23e28 = uVar4 >> 0xe & 1;
    }
    *0x23998 = 0xffffffffffffffff;
    *0x24ab2 = 0;
    *0x239a0 = (*0x239f8 * 10000) / 1000000;
    uVar10 = fcn.00014e88(iVar9,*0x239a0,iVar6);
    iVar6 = *0x22460;
    *(*0x22460 + 0x30) = 0;
    *(iVar6 + 0x38) = 0;
    (**(*(arg2 + 0x60) + 0x148))(iVar6 + 8,0x223d0,iVar6 + 0x70,0);
    (**(*0x239d0 + 0xa8))(0x23940,0x222b0,0,0x22510);
    (**(*0x239d0 + 0xa8))(0x23940,0x22360,0,0x22400);
    uVar4 = fcn.00019014();
    iVar6 = *0x22460;
    *(*0x22460 + 0x80) = uVar4;
    iVar9 = iVar6 + 0x88;
    *iVar9 = iVar9;
    *(iVar6 + 0x90) = iVar9;
    uVar4 = fcn.000145a8();
    *(*0x22460 + 0x98) = uVar4;
    (**(*0x239d0 + 0xa8))(0x23940,0x22340,0,0x225b0);
    puStackX_18 = *0x23940;
    (**(*0x239d0 + 0xa8))(&puStackX_18,0x222f0,0,0x22580);
    (**(*0x239d0 + 0xc0))(0x22320,0x12e44,auStack_68);
    *0x24b88 = uVar10;
    iVar6 = fcn.00018f54();
    *0x2257b = (**(iVar6 + 0x30))(0x22310,0x1100000);
    if (*0x2257b != '\0') {
        iVar6 = fcn.00019178(0x222a0);
        if (iVar6 == 0) {
            fcn.00018e74();
        }
        else {
            arg1_00 = *(iVar6 + 0x20);
            fcn.00011750(arg1_00,0x62);
            *(arg1_00 + 0x5a) = *0x239d0;
            arg1_00[1] = 0x1702c;
            *0x23990 = arg1_00;
            arg1_00[3] = 0x8000;
            iVar6 = fcn.00018fd4(8);
            arg1_00[2] = iVar6;
            if (iVar6 == 0) {
                arg1_00[3] = 0;
            }
            arg1_00[4] = *0x24ed8;
            arg1_00[6] = *0x24e94;
            *arg1_00 = 0x34365f33534d4d53;
            arg1_00[5] = uVar10;
            uVar10 = fcn.000143ec();
            puVar11 = fcn.00018fd4(1);
            *puVar11 = uVar10 | *0x23930 | 0x67;
            fcn.00011750(puVar11 + 1,0xff8);
            (*0x23990)[5] = puVar11 & 0xffffffff;
        }
        puStackX_18 = 0xffffffff;
        (**(*0x239b8 + 0x28))(1,10,1,&puStackX_18);
        *0x23988 = puStackX_18;
    }
    return 0;
}


/* fcn.000119b0 @ 0x119b0 */

void fcn.000119b0(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00011a59. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.000190b0 @ 0x190b0 */

void fcn.000190b0(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00018f90(arg1);
    if (cVar1 != '\0') {
    //WARNING: Could not recover jumptable at 0x000190d1. Too many branches
    //WARNING: Treating indirect jump as call
        (**(*0x239d0 + 0x58))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x000190e1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x239b8 + 0x48))(arg1);
    return;
}


/* fcn.00018f90 @ 0x18f90 */

uint64_t fcn.00018f90(int64_t arg1)

{
    uint64_t in_RAX;
    uint64_t uVar1;
    uint64_t *puVar2;
    
    uVar1 = 0;
    if (*0x24a80 != 0) {
        puVar2 = *0x24a88 + 8;
        in_RAX = *0x24a88;
        do {
            if ((*puVar2 <= arg1) && (in_RAX = puVar2[1], arg1 < *puVar2 + in_RAX)) {
                return CONCAT71(in_RAX >> 8,1);
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 4;
        } while (uVar1 < *0x24a80);
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00019014 @ 0x19014 */

ulong fcn.00019014(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x239d0 + 0x50))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00019148 @ 0x19148 */

int64_t fcn.00019148(void)

{
    if (*0x239f0 == 0) {
        fcn.000190e8(0x22330,0x239f0);
    }
    return *0x239f0;
}


/* fcn.000190e8 @ 0x190e8 */

ulong fcn.000190e8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x239b0;
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


/* fcn.00019178 @ 0x19178 */

void fcn.00019178(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00019148();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000191a6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000191a6;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00011b40 @ 0x11b40 */

uint64_t fcn.00011b40(void)

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


/* fcn.00011a90 @ 0x11a90 */

void fcn.00011a90(void)

{
    return;
}


/* fcn.00012540 @ 0x12540 */

uint64_t fcn.00012540(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011862 @ 0x11862 */

void fcn.00011862(void)

{
    return;
}


/* fcn.00011a80 @ 0x11a80 */

void fcn.00011a80(void)

{
    return;
}


/* fcn.0001a134 @ 0x1a134 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Removing unreachable block (ram,0x0001a1ed)
//WARNING: Removing unreachable block (ram,0x0001a21e)

ulong fcn.0001a134(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    uint in_register_00000014;
    int64_t arg1_00;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uStackX_10;
    uint8_t auStackX_18 [8];
    uint64_t uStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uint8_t *puStack_48;
    int64_t iStack_40;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    fcn.00012312();
    fcn.000118a0(1,&uStackX_10,0,0);
    uVar5 = uStackX_10 >> 8 & 0xf;
    uVar4 = uStackX_10 >> 4 & 0xf;
    if ((uVar5 == 6) || (uVar5 == 0xf)) {
        uVar4 = uVar4 | uStackX_10 >> 0xc & 0xf0;
    }
    fcn.000118a0(0x80000000,&uStackX_10,0,0);
    if (0x80000000 < uStackX_10) {
        fcn.000118a0(0x80000001,NULL,0,0);
    }
    *0x23de8 = 0x20;
    if (((uVar5 == 6) && (uVar4 < 0x1d)) && ((0x10808000ULL >> (uVar4 & 0x3f) & 1) != 0)) {
        *0x23de8 = 0x40;
    }
    *0x121bd = 0;
    iVar2 = fcn.00018d94();
    puVar3 = fcn.00018fd4(((iVar2 * 3 & 0xfffU) != 0) + (iVar2 * 3 >> 0xc));
    if (puVar3 == NULL) {
        return 0x8000000000000009;
    }
    *0x23de0 = puVar3 + iVar2 * 2;
    *0x23a20 = puVar3;
    **0x23de0 = 1;
    **0x23a20 = 1;
    iVar2 = fcn.00018f54();
    (**(iVar2 + 0x18))(0x22260,2);
    *0x23e40 = fcn.00019014();
    iVar2 = fcn.00018f54();
    (**(iVar2 + 0x18))(0x22260,2);
    *0x23e30 = fcn.00019014();
    arg1_00 = 0;
    *0x23df9 = '\0';
    iVar2 = (**(*0x239b8 + 0x140))(0x223e0,0,&puStack_48);
    if (-1 < iVar2) {
        *0x23a19 = puStack_48[5];
        *0x23e13 = puStack_48[6];
        *0x23e20 = puStack_48[7];
        *0x23e38 = puStack_48[8];
        *0x23df8 = puStack_48[9];
        if (((*puStack_48 & 1) != 0) && (cVar1 = fcn.0001dee4(puStack_48,arg1_00), cVar1 == '\v')) {
            *0x23a11 = '\x01';
            if ((*puStack_48 & 4) != 0) {
                *0x23a12 = 1;
            }
        }
    }
    if (*0x23df9 != '\0') {
        iVar2 = fcn.00018f54();
        uVar4 = (**(iVar2 + 0x18))(0x22260,2);
        iVar2 = fcn.00018f54();
        uVar5 = (**(iVar2 + 0x18))(0x22260,2);
        *0x23e00 = fcn.0001a0f4(((uVar5 & 0xf) != 0) + (uVar4 >> 4));
    }
    *0x23e14 = 0;
    *0x23e24 = 0;
    *0x23df0 = 5;
    *0x23dec = 0;
    (**(*0x239b8 + 0x140))(0x223b0,0,&iStack_40);
    uStackX_20 = 0;
    (**(iStack_40 + 0x18))(iStack_40,&uStackX_20,0);
    *0x23e08 = fcn.00019014();
    (**(iStack_40 + 0x18))(iStack_40);
    *0x23e18 = uStackX_20 >> 5;
    if (*0x23a11 != '\0') {
        fcn.000118a0(1,NULL,0,auStackX_18);
        if ((auStackX_18[0] & 0x20) != 0) {
            iVar2 = fcn.00019178(0x22270);
            if (iVar2 == 0) {
                *0x23a78 = fcn.00018fd4(0x11a);
                if (*0x23a78 != 0) {
                    *0x23a70 = 0x11a000;
                }
            }
            else if (*(iVar2 + 0x28) != 0) {
                *0x23a78 = *(iVar2 + 0x20);
                *0x23a70 = *(iVar2 + 0x28);
            }
        }
        fcn.0001b8ac();
        return 0;
    }
    return 0;
}


/* fcn.0001dee4 @ 0x1dee4 */

uint64_t fcn.0001dee4(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    if (((*0xc00b0060 & 0x70) == 0x30) && (uVar1 = rdmsr(0xce), (uVar1 >> 0x3b & 1) != 0)) {
        fcn.000118a0(1,NULL,0,auStackX_8);
        uVar1 = auStackX_8[0] >> 6 & 0xffffffffffffff01;
        return CONCAT71(uVar1 >> 8,-(uVar1 != '\0')) & 0xffffffffffffff0b;
    }
    return 0;
}


/* fcn.00011aa3 @ 0x11aa3 */

void fcn.00011aa3(void)

{
    return;
}


/* fcn.0001b034 @ 0x1b034 */

ulong fcn.0001b034(int64_t arg1,int arg2,uint32_t arg3,int64_t arg4)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    uint in_R8;
    int64_t iVar9;
    bool bVar10;
    uint32_t auStackX_10 [2];
    uint32_t uStack_28;
    uint uStack_24;
    
    uVar6 = CONCAT44(in_R8,arg3);
    if (arg2 == 0x201) {
        if (uVar6 != 1) {
            return 0x8000000000000002;
        }
        *arg4 = *0x23de8;
code_r0x0001b071:
        uVar5 = 0;
    }
    else {
        if (arg2 == 0x200) {
            if (*0x23a12 == '\0') {
                fcn.0001aee0(arg1,1,4,&uStack_28);
                if (uStack_28 < 0x30004) goto code_r0x0001b2b2;
                if (*0x23a12 != '\0') goto code_r0x0001b0d7;
                fcn.0001aee0(arg1,2,4,auStackX_10);
                puVar7 = CONCAT44(uStack_24,uStack_28);
            }
            else {
code_r0x0001b0d7:
                puVar7 = *0x23dd0 * arg1 + *0x23dc8;
                auStackX_10[0] = *puVar7;
            }
            if ((((auStackX_10[0] & 1) != 0) && (iVar1 = *((auStackX_10[0] >> 4 & 0xf) * 4 + 0x22790), iVar1 - 1U < 2))
               && ((*((auStackX_10[0] >> 1 & 7) * 8 + 0x23100) != '\0' && (iVar1 != 0)))) {
                fcn.00011750(arg4,0x18);
                *(arg4 + 8) = auStackX_10[0] >> 0x10;
                uVar6 = auStackX_10[0] >> 1 & 7;
                bVar10 = *0x23a12 == '\0';
                uVar2 = *((auStackX_10[0] >> 4 & 0xf) * 4 + 0x22790);
                iVar1 = *(uVar6 * 8 + 0x23104);
                *(arg4 + 0xc) = iVar1;
                *(arg4 + 0x10) = uVar2;
                if (bVar10) {
                    fcn.0001b034(arg1,0x26,*(uVar6 * 8 + 0x23100),arg4);
                }
                else {
                    *arg4 = puVar7[1];
                    if (2 < iVar1) {
                        if (arg4 + 4 != puVar7 + 2) {
                            fcn.00011710(arg4 + 4,puVar7 + 2,4);
                        }
                    }
                }
                goto code_r0x0001b071;
            }
        }
        else if (*0x23a12 == '\x01') {
            if (arg2 == 0x26) {
                puVar7 = *0x23dd0 * arg1 + *0x23dc8;
                uVar3 = *puVar7;
                if (((((uVar3 & 1) != 0) && (iVar1 = *((uVar3 >> 4 & 0xf) * 4 + 0x22790), iVar1 - 1U < 2)) &&
                    (*((uVar3 >> 1 & 7) * 8 + 0x23100) != '\0')) && (iVar1 != 0)) {
                    if (uVar6 < 5) {
                        *arg4 = puVar7[1];
                    }
                    else {
                        *arg4 = *(puVar7 + 1);
                    }
                    goto code_r0x0001b071;
                }
            }
        }
        else if (*0x23a12 == '\0') {
            iVar9 = 0;
            iVar4 = 0;
            iVar8 = 4;
            do {
                if ((*(iVar4 + 0x23140) <= arg2) && (arg2 <= *(iVar4 + 0x23144))) {
                    iVar8 = (arg2 - *(iVar4 + 0x23140)) + iVar8;
                    goto code_r0x0001b2ad;
                }
                iVar8 = iVar8 + *(iVar4 + 0x23148);
                iVar9 = iVar9 + 1;
                iVar4 = iVar9 * 0x10;
            } while (*(iVar4 + 0x23148) != 0);
            iVar8 = 0;
code_r0x0001b2ad:
            if (iVar8 != 0) {
                uVar5 = fcn.0001aee0(arg1,iVar8,uVar6,arg4);
                return uVar5;
            }
        }
code_r0x0001b2b2:
        uVar5 = 0x800000000000000e;
    }
    return uVar5;
}


/* fcn.000177b4 @ 0x177b4 */

ulong fcn.000177b4(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t auStackX_10 [4];
    int64_t iStackX_20;
    uint32_t auStack_28 [4];
    
    if (arg2 == 0x201) {
        if (arg3 == 1) {
            *arg4 = *0x24aca;
            return 0;
        }
code_r0x000177d9:
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar5 = 4;
        iStackX_20 = arg4;
        if (arg2 == 0x200) {
            fcn.000176b4(arg1,1,4,auStack_28);
            if ((((0x30003 < auStack_28[0]) &&
                 (fcn.000176b4(arg1,2,4,auStackX_10), iVar5 = iStackX_20, (auStackX_10[0] & 1) != 0)) &&
                (iVar1 = *((auStackX_10[0] >> 4 & 0xf) * 4 + 0x22790), iVar1 - 1U < 2)) &&
               ((*((auStackX_10[0] >> 1 & 7) * 8 + 0x22750) != '\0' && (iVar1 != 0)))) {
                if (0x17 < arg3) {
                    fcn.00011750(iStackX_20,0x18);
                    uVar4 = auStackX_10[0] >> 1 & 7;
                    *(iVar5 + 8) = auStackX_10[0] >> 0x10;
                    *(iVar5 + 0xc) = *(uVar4 * 8 + 0x22754);
                    *(iVar5 + 0x10) = *((auStackX_10[0] >> 4 & 0xf) * 4 + 0x22790);
                    fcn.000177b4(arg1,0x26,*(uVar4 * 8 + 0x22750),iVar5);
                    return 0;
                }
                goto code_r0x000177d9;
            }
        }
        else {
            iVar6 = 0;
            iVar3 = 0;
            do {
                if ((*(iVar3 + 0x22980) <= arg2) && (arg2 <= *(iVar3 + 0x22984))) {
                    iVar5 = (arg2 - *(iVar3 + 0x22980)) + iVar5;
                    goto code_r0x00017930;
                }
                iVar5 = iVar5 + *(iVar3 + 0x22988);
                iVar6 = iVar6 + 1;
                iVar3 = iVar6 * 0x10;
            } while (*(iVar3 + 0x22988) != 0);
            iVar5 = 0;
code_r0x00017930:
            if (iVar5 != 0) {
                uVar2 = fcn.000176b4(arg1,iVar5,arg3,arg4);
                return uVar2;
            }
        }
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.0001b30c @ 0x1b30c */

ulong fcn.0001b30c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iStack_38;
    int aiStack_30 [2];
    uint64_t auStack_28 [2];
    
    iVar4 = arg2;
    if (iVar4 == 0x201) {
        return 0;
    }
    if (iVar4 == 0x200) {
        return 0x800000000000000e;
    }
    iVar6 = 0;
    iVar2 = 0;
    iVar3 = 4;
    iVar5 = iVar3;
    while ((iVar4 < *(iVar2 + 0x23140) || (*(iVar2 + 0x23144) < iVar4))) {
        iVar5 = iVar5 + *(iVar2 + 0x23148);
        iVar6 = iVar6 + 1;
        iVar2 = iVar6 * 0x10;
        if (*(iVar2 + 0x23148) == 0) {
            iVar5 = 0;
code_r0x0001b3a0:
            if (iVar5 == 0) {
                return 0x800000000000000e;
            }
            iVar2 = *(*(*0x239d0 + 0x90) + arg1 * 8);
            if (*(iVar5 * 0x10 + 0x2318d) == '\0') {
                return 0x8000000000000003;
            }
            if (*0x23de8 == ' ') {
                uVar1 = *(iVar5 * 0x10 + 0x23180);
                if (uVar1 == 0) {
                    return 0x800000000000000e;
                }
                if (uVar1 < arg3) {
                    return 0x8000000000000002;
                }
                iVar2 = *(iVar5 * 0x10 + 0x23182) + iVar2;
                if (arg3 == 0) {
                    return 0;
                }
                if (iVar2 == arg4) {
                    return 0;
                }
            }
            else {
                uVar1 = *(iVar5 * 0x10 + 0x23181);
                if (uVar1 == 0) {
                    return 0x800000000000000e;
                }
                if (uVar1 < arg3) {
                    return 0x8000000000000002;
                }
                if (*0x23a10 != '\0') {
                    aiStack_30[0] = *(iVar5 * 0x10 + 0x23188);
                    if (aiStack_30[0] == 0) {
                        return 0x8000000000000003;
                    }
                    if ((uVar1 != 8) || (arg3 != 8)) {
                        fcn.0001ae48(arg1,aiStack_30);
                    }
                    iVar5 = auStack_28 + *(iVar5 * 0x10 + 0x2318c);
                    if ((arg3 != 0) && (iVar5 != arg4)) {
                        fcn.00011710(iVar5,arg4,arg3);
                    }
                    if (aiStack_30[0] == 0xc02) {
                        auStack_28[0] = auStack_28[0] & 0xfffffffffffffffd;
                    }
                    if (arg1 != *(*0x239d0 + 0x78)) {
                        fcn.00018e10(*0x23a20);
                        (**(*0x239d0 + 0x70))(0x1b2e4,arg1,aiStack_30);
                        while( true ) {
                            LOCK();
                            iVar5 = **0x23a20;
                            if (iVar5 == 1) {
                                **0x23a20 = 2;
                            }
                            UNLOCK();
                            if (iVar5 == 1) break;
                            fcn.00011860();
                        }
                        **0x23a20 = 1;
                        return 0;
                    }
                    wrmsr(aiStack_30[0],auStack_28[0]);
                    return 0;
                }
                if ((*0x23a12 == '\0') || (iVar4 != 0x26)) {
                    iVar6 = arg3;
                    if (4 < arg3) {
                        iVar6 = iVar3;
                    }
                    iVar3 = *(iVar5 * 0x10 + 0x23184) + iVar2;
                    if ((iVar6 != 0) && (iVar3 != arg4)) {
                        fcn.00011710(iVar3,arg4,iVar6);
                    }
                }
                else {
                    iStack_38 = *0x23dd0 * arg1 + *0x23dc8;
                    iVar6 = arg3;
                    if (4 < arg3) {
                        iVar6 = iVar3;
                    }
                    if ((iVar6 != 0) && (iStack_38 + 4 != arg4)) {
                        fcn.00011710(iStack_38 + 4,arg4,iVar6);
                    }
                    *(iStack_38 + 0xc) = 1;
                }
                if (arg3 < 4) {
                    return 0;
                }
                if ((*0x23a12 == '\0') || (iVar4 != 0x26)) {
                    iVar2 = *(iVar5 * 0x10 + 0x23186) + iVar2;
                }
                else {
                    iVar2 = iStack_38 + 8;
                }
                arg3 = arg3 + -4;
                arg4 = arg4 + 4;
                if (arg3 == 0) {
                    return 0;
                }
                if (iVar2 == arg4) {
                    return 0;
                }
            }
            fcn.00011710(iVar2,arg4,arg3);
            return 0;
        }
    }
    iVar5 = (iVar4 - *(iVar2 + 0x23140)) + iVar5;
    goto code_r0x0001b3a0;
}


/* fcn.00017964 @ 0x17964 */

ulong fcn.00017964(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    
    if (arg2 == 0x201) {
        return 0;
    }
    if (arg2 == 0x200) {
        return 0x800000000000000e;
    }
    iVar3 = 0;
    iVar2 = 0;
    iVar4 = 4;
    while ((arg2 < *(iVar2 + 0x22980) || (*(iVar2 + 0x22984) < arg2))) {
        iVar4 = iVar4 + *(iVar2 + 0x22988);
        iVar3 = iVar3 + 1;
        iVar2 = iVar3 * 0x10;
        if (*(iVar2 + 0x22988) == 0) {
            iVar4 = 0;
code_r0x000179f1:
            if (iVar4 == 0) {
                return 0x800000000000000e;
            }
            iVar2 = *(*(*0x239d0 + 0x90) + arg1 * 8);
            if (*(iVar4 * 10 + 0x227d8) == '\0') {
                return 0x8000000000000003;
            }
            if (*0x24aca == ' ') {
                uVar1 = *(iVar4 * 10 + 0x227d0);
                if (uVar1 == 0) {
                    return 0x800000000000000e;
                }
                if (uVar1 < arg3) {
                    return 0x8000000000000002;
                }
                iVar2 = *(iVar4 * 10 + 0x227d2) + iVar2;
                if (arg3 == 0) {
                    return 0;
                }
                if (iVar2 == arg4) {
                    return 0;
                }
            }
            else {
                uVar1 = *(iVar4 * 10 + 0x227d1);
                if (uVar1 == 0) {
                    return 0x800000000000000e;
                }
                if (uVar1 < arg3) {
                    return 0x8000000000000002;
                }
                iVar3 = arg3;
                if (4 < arg3) {
                    iVar3 = 4;
                }
                arg1_00 = *(iVar4 * 10 + 0x227d4) + iVar2;
                if ((iVar3 != 0) && (arg1_00 != arg4)) {
                    fcn.00011710(arg1_00,arg4,iVar3);
                }
                if (arg3 < 5) {
                    return 0;
                }
                arg3 = arg3 + -4;
                iVar2 = *(iVar4 * 10 + 0x227d6) + iVar2;
                arg4 = arg4 + 4;
                if (arg3 == 0) {
                    return 0;
                }
                if (iVar2 == arg4) {
                    return 0;
                }
            }
            fcn.00011710(iVar2,arg4,arg3);
            return 0;
        }
    }
    iVar4 = (arg2 - *(iVar2 + 0x22980)) + iVar4;
    goto code_r0x000179f1;
}


/* fcn.00011a70 @ 0x11a70 */

void fcn.00011a70(ulong *param_1)

{
    InterruptDescriptorTableRegister(*param_1);
    return;
}


/* fcn.00019568 @ 0x19568 */

uint32_t fcn.00019568(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.00019378(0x20);
    iVar3 = fcn.000194a4();
    uVar2 = uVar1;
    if (iVar3 == 1) {
        uVar2 = fcn.000194dc();
        if (uVar2 < 0x100) {
            uVar2 = uVar1 >> 0x18;
        }
    }
    return uVar2;
}


/* fcn.00019378 @ 0x19378 */

uint64_t fcn.00019378(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.000194a4();
    if (iVar1 == 1) {
        iVar1 = fcn.0001933c();
        uVar2 = *(iVar1 + arg1);
    }
    else {
        uVar2 = rdmsr((arg1 >> 4) + 0x800);
    }
    return uVar2;
}


/* fcn.000194a4 @ 0x194a4 */

char fcn.000194a4(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.00019300();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.000194dc @ 0x194dc */

uint64_t fcn.000194dc(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    
    iVar1 = fcn.000194a4();
    if (iVar1 == 1) {
        fcn.000118a0(0,auStackX_10,0,0);
        if (10 < auStackX_10[0]) {
            fcn.00011870(0xb,0,0,auStackX_8);
            if (auStackX_8[0] != 0) {
                return uStackX_18;
            }
        }
        fcn.000118a0(1,NULL,auStackX_8,0);
        uVar2 = auStackX_8[0] >> 0x18;
    }
    else {
        uVar2 = fcn.00019568();
    }
    return uVar2;
}


/* fcn.0001a994 @ 0x1a994 */

uint64_t fcn.0001a994(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint64_t arg2_00;
    int64_t arg2_01;
    uint8_t *puVar4;
    uint32_t uVar5;
    uint32_t auStackX_10 [2];
    int64_t iStackX_18;
    ulong uStackX_20;
    
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg2);
    uStackX_20 = arg4;
    if ((*0x23dec != 0) && (*0x23a18 == '\0')) {
        iStackX_18 = arg3;
        fcn.00019014(arg1,*0x23dec);
        *0x23a18 = '\x01';
    }
    puVar4 = arg1 * 0x10 + *0x23e30;
    *0x23e12 = 0;
    *(*0x23e40 + arg1 * 4) = *(*0x22430 + arg1 * 8);
    puVar4[8] = 0xff;
    puVar4[9] = 0xff;
    puVar4[10] = 0xff;
    puVar4[0xb] = 0xff;
    puVar4[0xc] = 0xff;
    puVar4[0xd] = 0xff;
    puVar4[0xe] = 0xff;
    puVar4[0xf] = 0xff;
    puVar4[0] = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    iStackX_18 = rdmsr(0x17d);
    uVar5 = iStackX_18 >> 0x20;
    if ((uVar5 >> 0x1a & 1) != 0) {
        *0x23e29 = '\x01';
        uVar3 = rdmsr(0x4e0);
        if (((uVar5 >> 0x19 & 1) != 0) && ((uVar3 & 2) != 0)) {
            uVar1 = rdmsr(0xc20);
            uStackX_20 = CONCAT44(uVar1 >> 0x20,*(*0x22430 + arg1 * 8));
            wrmsr(0xc20,uStackX_20);
            *0x23e12 = 1;
            goto code_r0x0001aa8e;
        }
    }
    *0x3fef8 = *(*0x22430 + arg1 * 8);
code_r0x0001aa8e:
    uVar1 = rdmsr(0xfe);
    if ((uVar1 >> 0xb & 1) != 0) {
        fcn.0001a4f0(*0x2243c,*0x22440);
    }
    uVar1 = rdmsr(0xfe);
    if ((uVar1 >> 0xd & 1) != 0) {
        fcn.0001a624(*0x2243c,*0x22440);
    }
    if (((*0x23a19 != '\0') && (*0x23e29 != '\0')) && (uVar1 = rdmsr(0x17d), (uVar1 >> 0x39 & 1) != 0)) {
        uStackX_20 = rdmsr(0x4e0);
        if ((uStackX_20 & 2) == 0) {
            uStackX_20 = uStackX_20 | 2;
            wrmsr(0x4e0,uStackX_20);
            *0x23a10 = 1;
        }
    }
    uVar2 = iStackX_18 >> 0x38;
    if (*0x23e13 != '\0') {
        puVar4[1] = uVar2 >> 3 & 1;
    }
    if (*0x23e20 != '\0') {
        puVar4[2] = 1;
    }
    if (*0x23e38 != '\0') {
        *puVar4 = uVar2 & 1;
    }
    fcn.00011870(7,0,0,auStackX_10);
    *0x23df8 = *0x23df8 & -((auStackX_10[0] & 0x2000000) != 0);
    uVar3 = rdmsr(0xce);
    arg2_00 = uVar3 & 0xffffffff00000000;
    if ((uVar3 >> 0x3b & 1) != 0) {
        uVar3 = fcn.00011840();
        fcn.00011930(uVar3 & 0xfffffffffffeffff);
        if (*0x23a11 == '\0') {
            *(*(*0x23e40 + arg1 * 4) + 0x813e) = 0;
        }
        else {
            *0x1223e = 0;
            arg2_01 = CONCAT71(arg2_00 >> 8,5);
            fcn.0001c7e4(*(*0x23e40 + arg1 * 4) + 0x8000,arg2_01,0x1223e);
            *0x23dd8 = 0;
            arg2_00 = CONCAT71(arg2_01 >> 8,0x80);
            fcn.0001c7e4(*(*0x23e40 + arg1 * 4) + 0x8000,arg2_00,0x23dd8);
        }
        fcn.00011930(uVar3);
        *0x23a13 = 1;
    }
    if (*0x23df9 != '\0') {
        fcn.0001a8a8(arg1,arg2_00);
    }
    uStackX_20 = 0;
    if (*0x23a78 != 0) {
        uStackX_20 = *0x23a78 & 0xfffff001 | 1;
        wrmsr(0x9b,uStackX_20);
    }
    return uStackX_20;
}


/* fcn.000118a0 @ 0x118a0 */

uint64_t fcn.000118a0(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *in_stack_00000028;
    
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
    if (arg2 != NULL) {
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


/* fcn.00019258 @ 0x19258 */

ulong fcn.00019258(void)

{
    ulong uVar1;
    int aiStackX_8 [2];
    int aiStackX_10 [2];
    int iStackX_18;
    
    fcn.000118a0(0,NULL,aiStackX_8,aiStackX_10);
    if (((aiStackX_8[0] == 0x68747541) && (aiStackX_10[0] == 0x444d4163)) && (iStackX_18 == 0x69746e65)) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014d54 @ 0x14d54 */

void fcn.00014d54(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uint *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    
    if (*0x23950 != NULL) {
        if (*0x24bb8 != 0) {
            fcn.00011750(*0x23950,*0x24bb8);
        }
        piVar3 = *0x23950;
        iVar2 = *0x22460;
        piVar1 = *0x23950 + 9;
        **0x23950 = piVar1;
        puVar4 = *0x24bc0;
        uVar11 = 0;
        piVar3[6] = piVar1 + *(iVar2 + 0x50) * 7;
        *(piVar3 + 5) = *0x24c08;
        piVar3[3] = *0x24bc8;
        piVar3[4] = *0x24bd0;
        piVar3[1] = puVar4;
        *puVar4 = 0;
        *piVar3[3] = 0;
        *piVar3[4] = 0;
        iVar8 = *0x24e80;
        iVar7 = *0x24bf8;
        iVar6 = *0x24bf0;
        iVar5 = *0x24be8;
        if (*(iVar2 + 0x50) != 0) {
            iVar10 = 0;
            do {
                iVar9 = iVar8 * uVar11;
                uVar11 = uVar11 + 1;
                *(iVar10 + *piVar3) = iVar9 + iVar5;
                *(iVar10 + 0x18 + *piVar3) = iVar9 + iVar6;
                *(iVar10 + 0x20 + *piVar3) = iVar9 + iVar7;
                **(iVar10 + *piVar3) = 0;
                **(iVar10 + 0x18 + *piVar3) = 0;
                **(iVar10 + 0x20 + *piVar3) = 0;
                iVar10 = iVar10 + 0x38;
            } while (uVar11 < *(iVar2 + 0x50));
        }
    }
    return;
}


/* fcn.00011840 @ 0x11840 */

void fcn.00011840(void)

{
    return;
}


/* fcn.00011850 @ 0x11850 */

void fcn.00011850(void)

{
    return;
}


/* fcn.000118d0 @ 0x118d0 */

void fcn.000118d0(void)

{
    return;
}


/* fcn.00011710 @ 0x11710 */

int64_t fcn.00011710(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000193f8 @ 0x193f8 */

uint64_t fcn.000193f8(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = fcn.000194a4();
    if (iVar2 == 1) {
        uVar3 = fcn.00011b40();
        fcn.00011a90();
        iVar2 = fcn.0001933c();
        uVar1 = *(iVar2 + 0x310);
        do {
        } while ((*(iVar2 + 0x300) & 0x1000) != 0);
        *(iVar2 + 0x310) = arg2 << 0x18;
        *(iVar2 + 0x300) = arg1;
        do {
        } while ((*(iVar2 + 0x300) & 0x1000) != 0);
        *(iVar2 + 0x310) = uVar1;
        if ((uVar3 >> 9 & 1) == 0) {
            uVar3 = fcn.00011a90();
        }
        else {
            uVar3 = fcn.00011a80();
        }
    }
    else {
        uVar3 = arg2 << 0x20 | arg1 & 0xffffffffU;
        wrmsr(0x830,arg2 << 0x20 | arg1 & 0xffffffffU);
    }
    return uVar3;
}


/* fcn.00017304 @ 0x17304 */

void fcn.00017304(void)

{
    uint16_t *puVar1;
    uint16_t *puVar2;
    int64_t iVar3;
    int64_t arg1;
    int64_t arg1_00;
    int64_t arg1_01;
    
    if (*0x2257b != '\0') {
        *0x24b24 = 0;
        iVar3 = fcn.00018f54();
        iVar3 = (**(iVar3 + 0x20))(0x22260,0x60000010);
        if (iVar3 != 0) {
            if (iVar3 != 0x24b00) {
                fcn.00011710(0x24b00,iVar3,0x78);
            }
            *0x24b28 = fcn.00019014();
            if (*0x24b28 != *(iVar3 + 0x28)) {
                fcn.00011710(*0x24b28,*(iVar3 + 0x28),0x260);
            }
            *0x24b08 = fcn.00019014();
            if (*0x24b08 != *(iVar3 + 8)) {
                fcn.00011710(*0x24b08,*(iVar3 + 8),10);
            }
            *0x24b10 = fcn.00019014();
            if (*0x24b10 != *(iVar3 + 0x10)) {
                fcn.00011710(*0x24b10,*(iVar3 + 0x10),10);
            }
            puVar2 = *0x24b10;
            puVar1 = *0x24b08;
            arg1 = fcn.00019014(**0x24b10 + *0x24b38,**0x24b08 + 2 + **0x24b10 + *0x24b38);
            arg1_01 = *puVar1 + 1 + arg1;
            arg1_00 = arg1_01 + 1 + *puVar2;
            if (arg1 != *(puVar1 + 1)) {
                fcn.00011710(arg1,*(puVar1 + 1),*puVar1 + 1);
            }
            if (arg1_01 != *(puVar2 + 1)) {
                fcn.00011710(arg1_01,*(puVar2 + 1),*puVar2 + 1);
            }
            if ((*0x24b38 != 0) && (arg1_00 != *0x24b30)) {
                fcn.00011710(arg1_00,*0x24b30,*0x24b38);
            }
            *(puVar1 + 1) = arg1;
            *(puVar2 + 1) = arg1_01;
            *0x24b30 = arg1_00;
            fcn.00011750(0x24b40,0x38);
            fcn.000171dc(0x24b40,iVar3 + 0x40);
            *0x24ae8 = fcn.00019044(*0x24b50 * *0x24b54 * *0x24b58 * 4);
            *0x24af0 = fcn.00019044(*0x24b50 * *0x24b54 * *0x24b58 * 4);
            *0x24ae0 = 1;
        }
    }
    return;
}


/* fcn.00015c64 @ 0x15c64 */

void fcn.00015c64(uint32_t arg1)

{
    uchar *puVar1;
    int64_t iVar2;
    uchar *puVar3;
    uint in_register_0000000c;
    uchar *arg2;
    int64_t in_RDX;
    uchar *puVar4;
    uchar *arg2_00;
    int64_t iVar5;
    uchar auStack_48 [48];
    
    iVar2 = *0x24ba8;
    arg2 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = arg2 + in_RDX;
    arg2_00 = arg2 + *0x24ba8;
    if (arg2 < puVar1) {
        iVar5 = 8 - *0x24ba8;
        puVar3 = arg2_00;
        do {
            for (; puVar4 = puVar3, arg2_00 < puVar1; arg2_00 = arg2_00 + iVar2) {
                if (*(arg2_00 + 8) < *(puVar4 + iVar5)) {
                    if (auStack_48 != arg2) {
                        fcn.00011710(auStack_48,arg2,0x28);
                    }
                    if (arg2 != arg2_00) {
                        fcn.00011710(arg2,arg2_00,0x28);
                    }
                    if (arg2_00 != auStack_48) {
                        fcn.00011710(arg2_00,auStack_48,0x28);
                    }
                }
                puVar3 = puVar4;
            }
            arg2_00 = puVar4 + iVar2;
            puVar3 = arg2_00;
            arg2 = puVar4;
        } while (puVar4 < puVar1);
    }
    return;
}


/* fcn.00015d34 @ 0x15d34 */

void fcn.00015d34(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t *arg2_00;
    int64_t iVar3;
    uint in_register_0000000c;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint32_t *arg1_00;
    
    iVar3 = *0x24ba8;
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *arg2;
    arg1_00 = puVar4;
    arg2_00 = puVar4;
    while (arg2_00 < iVar2 + puVar4) {
        puVar5 = arg2_00;
        if (arg1_00 != arg2_00) {
            fcn.00011710(arg1_00,arg2_00,0x28);
        }
        while( true ) {
            puVar5 = puVar5 + iVar3;
            if (((((iVar2 + puVar4 <= puVar5) || (uVar1 = *arg2_00, uVar1 == 0)) || ((4 < uVar1 && (2 < uVar1 - 7))))
                || (uVar1 = *puVar5, uVar1 == 0)) ||
               (((4 < uVar1 && (2 < uVar1 - 7)) || (*(arg2_00 + 6) * 0x1000 + *(arg2_00 + 2) != *(puVar5 + 2))))) break;
            *(arg2_00 + 6) = *(arg2_00 + 6) + *(puVar5 + 6);
            if (arg1_00 != arg2_00) {
                *(arg1_00 + 6) = *(arg1_00 + 6) + *(puVar5 + 6);
            }
        }
        arg1_00 = arg1_00 + iVar3;
        arg2_00 = puVar5;
    }
    *arg2 = arg1_00 - puVar4;
    return;
}


/* fcn.00019070 @ 0x19070 */

void fcn.00019070(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00019014(arg1,arg1);
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00011710(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00015e08 @ 0x15e08 */

void fcn.00015e08(void)

{
    int64_t iVar1;
    int64_t arg1;
    uint64_t *puVar2;
    int64_t arg2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    
    iVar1 = (**(*0x23a08 + 0x48))(&uStackX_10,&iStackX_8);
    uVar3 = 0;
    if (-1 < iVar1) {
        *0x23968 = 0;
        if (uStackX_10 != 0) {
            puVar2 = iStackX_8 + 0x10;
            *0x23968 = uVar3;
            uVar5 = uStackX_10;
            do {
                if ((puVar2[2] == 1) && ((*puVar2 & 0x700000000000000) == 0x300000000000000)) {
                    *0x23968 = *0x23968 + 1;
                }
                puVar2 = puVar2 + 7;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        iVar1 = fcn.00019044(*0x23968 * 0x38);
        *0x23968 = 0;
        *0x23970 = iVar1;
        if ((iVar1 != 0) && (uStackX_10 != 0)) {
            uVar5 = uVar3;
            uVar4 = uVar3;
            uVar6 = uStackX_10;
            do {
                arg2 = iStackX_8 + uVar5;
                if ((*(arg2 + 0x20) == 1) && ((*(arg2 + 0x10) & 0x700000000000000) == 0x300000000000000)) {
                    arg1 = uVar3 * 0x38 + iVar1;
                    if (arg1 != arg2) {
                        fcn.00011710(arg1,arg2,0x38);
                        iVar1 = *0x23970;
                        uVar3 = *0x23968;
                        uVar6 = uStackX_10;
                    }
                    uVar3 = uVar3 + 1;
                    *0x23968 = uVar3;
                }
                uVar4 = uVar4 + 1;
                uVar5 = uVar5 + 0x38;
            } while (uVar4 < uVar6);
        }
        (**(*0x239b8 + 0x48))(iStackX_8);
    }
    return;
}


/* fcn.00011127 @ 0x11127 */

void fcn.00011127(void)

{
    *0x11055 = 0x1105b;
    *0x110fb = 0x1100a;
    return;
}


/* fcn.00011533 @ 0x11533 */

void fcn.00011533(void)

{
    *0x113a9 = 0x24ac0;
    *0x11475 = fcn.00014af8;
    *0x11484 = fcn.00014afc;
    *0x11493 = fcn.00014af8;
    *0x114e2 = 0x22568;
    *0x114af = 0x22458;
    return;
}


/* fcn.00018d08 @ 0x18d08 */

ulong fcn.00018d08(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x239d8 == NULL) {
        iVar1 = (**(*0x239d0 + 0xd0))(0x22230,0,0x239e0);
        if ((iVar1 < 0) || (*0x239e0 == NULL)) {
            *0x239d8 = NULL;
        }
        else {
            *0x239d8 = **0x239e0;
        }
        if (*0x239d8 == NULL) {
            return 0x8000000000000003;
        }
    }
    uVar2 = (**0x239d8)(*0x239e0,1,0x11008,0,0x223a0,0);
    return uVar2;
}


/* fcn.00013a34 @ 0x13a34 */

uint64_t fcn.00013a34(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_8;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = (**(*0x239d0 + 0x60))(0,5,arg1,&uStackX_8);
            if (-1 < iVar1) {
                return uStackX_8;
            }
        }
        else {
            iVar2 = (arg2 >> 0xc) + ((arg2 & 0xfffU) != 0) + arg1;
            iVar1 = (**(*0x239d0 + 0x60))(0,5,iVar2);
            if (-1 < iVar1) {
                uVar3 = uStackX_8 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar3 - uStackX_8 & 0xfff) != 0) + (uVar3 - uStackX_8 >> 0xc);
                if (iVar1 != 0) {
                    (**(*0x239d0 + 0x68))(uStackX_8,iVar1);
                }
                uStackX_8 = arg1 * 0x1000 + uVar3;
                arg1 = (iVar2 - iVar1) - arg1;
                if (arg1 != 0) {
                    (**(*0x239d0 + 0x68))(uStackX_8,arg1);
                }
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.00018fd4 @ 0x18fd4 */

ulong fcn.00018fd4(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong uVar2;
    ulong auStackX_8 [4];
    
    uVar2 = 0;
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        iVar1 = (**(*0x239d0 + 0x60))(0,6,CONCAT44(in_register_0000000c,arg1),auStackX_8);
        uVar2 = auStackX_8[0];
        if (iVar1 < 0) {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00013a00 @ 0x13a00 */

ulong fcn.00013a00(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x239d0 + 0x60))(0,5,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00011750 @ 0x11750 */

int64_t fcn.00011750(int64_t arg1,int64_t arg2)

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


/* fcn.00011a60 @ 0x11a60 */

void fcn.00011a60(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = InterruptDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00019884 @ 0x19884 */

ulong fcn.00019884(ulong param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    uint16_t uStack_38;
    int64_t iStack_36;
    uchar auStack_28 [32];
    
    *0x23e70 = 0x23e80;
    *0x23e78 = 0x24980;
    *0x23e68 = 1;
    fcn.000124e0(0x23e80,0xb00,CONCAT71(param_3 >> 8,0xff));
    fcn.00011a60(&uStack_38);
    uVar1 = uStack_38 + 1 >> 4;
    if (0x20 < uVar1) {
        uVar1 = 0x20;
    }
    fcn.00011fb7(auStack_28);
    *0x23e60 = uVar1;
    fcn.00019f1c(iStack_36,auStack_28,0x23e60);
    return 0;
}


/* fcn.000124e0 @ 0x124e0 */

int64_t fcn.000124e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011fb7 @ 0x11fb7 */

void fcn.00011fb7(int64_t arg1)

{
    *arg1 = 0x11b70;
    *(arg1 + 8) = 0xf;
    *(arg1 + 0x10) = 0x11d50;
    *0x11b75 = 0x11d81;
    *0x11b84 = 0x11d81;
    *0x11b93 = 0x11d81;
    *0x11ba2 = 0x11d81;
    *0x11bb1 = 0x11d81;
    *0x11bc0 = 0x11d81;
    *0x11bcf = 0x11d81;
    *0x11bde = 0x11d81;
    *0x11bed = 0x11d81;
    *0x11bfc = 0x11d81;
    *0x11c0b = 0x11d81;
    *0x11c1a = 0x11d81;
    *0x11c29 = 0x11d81;
    *0x11c38 = 0x11d81;
    *0x11c47 = 0x11d81;
    *0x11c56 = 0x11d81;
    *0x11c65 = 0x11d81;
    *0x11c74 = 0x11d81;
    *0x11c83 = 0x11d81;
    *0x11c92 = 0x11d81;
    *0x11ca1 = 0x11d81;
    *0x11cb0 = 0x11d81;
    *0x11cbf = 0x11d81;
    *0x11cce = 0x11d81;
    *0x11cdd = 0x11d81;
    *0x11cec = 0x11d81;
    *0x11cfb = 0x11d81;
    *0x11d0a = 0x11d81;
    *0x11d19 = 0x11d81;
    *0x11d28 = 0x11d81;
    *0x11d37 = 0x11d81;
    *0x11d46 = 0x11d81;
    *0x11d55 = 0x11d5f;
    return;
}


/* fcn.00019f1c @ 0x19f1c */

void fcn.00019f1c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    unkuint6 *pVar6;
    
    iVar4 = *(arg3 + 0x10);
    uVar2 = fcn.00012560();
    uVar5 = 0;
    if (*arg3 != 0) {
        pVar6 = arg1 + 6;
        iVar4 = iVar4 + 0x48;
        do {
            *(pVar6 + -4) = uVar2;
            iVar1 = *(iVar4 + -0x3c);
            if (iVar1 != 0) {
                if (iVar1 == 1) {
code_r0x00019fa4:
                    *(iVar4 + -0x38) = *pVar6 * 0x10000 + *(pVar6 + -6);
                }
                else if (iVar1 == 2) {
                    *(iVar4 + -0x48) = 1;
                    iVar3 = *(arg2 + 0x10);
                    if ((*(arg2 + 8) != 0) && (iVar4 != iVar3)) {
                        fcn.00011710(iVar4,iVar3,*(arg2 + 8));
                    }
                    fcn.000120f5(iVar4,CONCAT71(iVar3 >> 8,uVar5));
                    goto code_r0x00019fa4;
                }
                iVar3 = *(arg2 + 8) * uVar5 + *arg2;
                *(pVar6 + -6) = iVar3;
                *(pVar6 + 2) = iVar3 >> 0x20;
                *pVar6 = iVar3 >> 0x10;
                *(pVar6 + -1) = 0x8e;
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + 0x58;
            pVar6 = pVar6 + 2;
        } while (uVar5 < *arg3);
    }
    return;
}


/* fcn.00019044 @ 0x19044 */

void fcn.00019044(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00019014(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00011750(arg1_00,arg1);
    }
    return;
}


/* fcn.00012c9c @ 0x12c9c */

void fcn.00012c9c(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uchar auStack_438 [32];
    uchar auStack_418 [1024];
    
    *0x1104c = fcn.00011840();
    *0x24ed8 = *0x1104c;
    *0x11017 = fcn.00011850();
    *0x24e94 = fcn.000118d0();
    *0x11027 = *0x24e94 & 0xff7fffff;
    *0x11002 = *0x2011a;
    *0x11000 = *0x20118;
    fcn.00011710(auStack_438,0x38000,0x20);
    fcn.00011710(auStack_418,0x3fc00,0x400);
    if (*0x11103 != 0) {
        fcn.00011710(0x38000,0x110eb,*0x11103);
    }
    uVar3 = fcn.00019568();
    uVar5 = 0xffffffffffffffff;
    *0x24ea8 = 0;
    uVar4 = 0;
    if (*0x22448 != 0) {
        iVar6 = 0;
        do {
            iVar2 = *0x22460;
            *(*0x24e98 + uVar4) = 0;
            uVar1 = *(iVar6 + *(iVar2 + 0x10));
            if (uVar3 == uVar1) {
                uVar5 = uVar4;
            }
            else {
                fcn.000193f8(0x4200,uVar1);
                do {
                } while (*(*0x24e98 + uVar4) == '\0');
            }
            uVar4 = uVar4 + 1;
            iVar6 = iVar6 + 0x30;
        } while (uVar4 < *0x22448);
    }
    *0x24ea8 = 1;
    fcn.000193f8(0x4200,uVar3);
    do {
    } while (*(*0x24e98 + uVar5) == '\0');
    if (&stack0x00000000 != 0x40018) {
        fcn.00011710(0x3fc00,auStack_418,0x400);
    }
    if (&stack0x00000000 != 0x38438) {
        fcn.00011710(0x38000,auStack_438,0x20);
    }
    return;
}


/* fcn.00014e88 @ 0x14e88 */

uint64_t fcn.00014e88(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint64_t arg4;
    uint64_t uVar8;
    ushort uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t arg3_00;
    uint64_t uVar12;
    uint32_t uVar13;
    int64_t iVar14;
    bool bVar15;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    uint32_t uStackX_20;
    uint32_t auStack_68 [2];
    int64_t iStack_60;
    ulong uStack_58;
    int64_t iStack_50;
    
    iVar7 = *0x24ec0;
    iStack_60 = *0x24eb0;
    uStackX_10 = arg2;
    uStackX_18 = arg3;
    fcn.000118a0(1,NULL,0,0);
    *0x23958 = uStackX_20 >> 0xe & 1;
    iVar3 = fcn.00018d94();
    uVar8 = 0;
    iVar14 = *(*0x22460 + 0x50) * iVar3;
    uVar12 = iVar3 * 5 + iVar14 * 4;
    iVar4 = fcn.00018fd4(((uVar12 & 0xfff) != 0) + (uVar12 >> 0xc));
    if (uVar12 != 0) {
        fcn.00011750(iVar4,uVar12);
    }
    *0x24bc8 = iVar4 + iVar3;
    *0x24be8 = iVar4 + iVar3 * 5;
    *0x24bd0 = *0x24bc8 + iVar3;
    *0x24bf0 = *0x24be8 + iVar14;
    *0x23960 = *0x24bd0 + iVar3;
    *0x24bf8 = *0x24bf0 + iVar14;
    *0x23928 = *0x23960 + iVar3;
    *0x24bb8 = *(*0x22460 + 0x50) * 0x39 + 0x48;
    *0x24bc0 = iVar4;
    *0x24bd8 = *0x23960;
    *0x24be0 = *0x23928;
    *0x24e80 = iVar3;
    *0x23950 = fcn.00018fd4(((*0x24bb8 & 0xfff) != 0) + (*0x24bb8 >> 0xc));
    *0x24c08 = 0;
    fcn.00014d54();
    fcn.000118a0(0x80000000,auStack_68,0,0);
    if (auStack_68[0] < 0x80000008) {
        uVar5 = 0x24;
        uStackX_10 = uStackX_10 & 0xffffffffffffff24 | 0x24;
    }
    else {
        fcn.000118a0(0x80000008,&uStackX_10,0,0);
        uVar5 = uStackX_10;
    }
    *0x24e88 = (1LL << (uVar5 & 0x3f)) - 1U & 0xfffffffffffff000;
    uVar2 = fcn.00017ff0();
    uStackX_18 = CONCAT44(uStackX_18._4_4_,uVar2);
    uVar12 = *0x20118 + 0x70 & 0xfffffffffffffff8;
    *0x24a98 = *(*0x22460 + 0x50) * uVar12;
    iVar3 = ((*0x24a98 & 0xfff) != 0) + (*0x24a98 >> 0xc);
    if (iVar3 == 0) {
        arg4 = uVar8;
    }
    else {
        arg4 = fcn.00013a00(iVar3);
    }
    *0x24a90 = arg4;
    if (*(*0x22460 + 0x50) != 0) {
        uVar10 = arg4;
        iVar3 = *0x22460;
        do {
            if (uVar10 != *0x2011a) {
                fcn.00011710(uVar10,*0x2011a,*0x20118 + 0x69);
                iVar3 = *0x22460;
            }
            iVar14 = *0x24ec0 + *0x24eb0;
            iVar11 = *0x20118 + 1 + uVar10;
            iVar4 = *0x24ed0 + 0x1000;
            *(iVar11 + -0xe) = iVar11;
            uVar10 = uVar10 + uVar12;
            *(iVar11 + -0xc) = iVar11 >> 0x10;
            *(iVar11 + -9) = iVar11 >> 0x18;
            *(iVar11 + 0x24) = iVar4 + iVar14 * uVar8;
            uVar8 = uVar8 + 1;
        } while (uVar8 < *(iVar3 + 0x50));
    }
    uVar8 = 0;
    if (*0x22450 != 0) {
        iStack_50 = iStack_60 + iVar7;
        iVar7 = iStack_60;
        iStackX_8 = arg1;
        do {
            uVar9 = *0x20122;
            uVar13 = *0x20118;
            uVar1 = *(*0x22430 + uVar8 * 8);
            uVar10 = uVar1;
            uStack_58 = *0x20124;
            if (uVar10 + 0xfb00 != "PSDSIG  `") {
                fcn.00011710(uVar10 + 0xfb00,0x200b8,0x60);
                iVar7 = iStack_60;
            }
            bVar15 = *0x23a11 == '\0';
            *(uVar10 + 0xfb30) = arg4;
            *(uVar10 + 0xfb38) = uVar13 + 1;
            if (bVar15) {
                uVar6 = *0x12310;
            }
            else {
                uVar6 = *(*0x23d38 + 0xc);
            }
            if (uVar6 == 0) {
                *0x11307 = iStackX_8 + -8 + iVar7;
                *0x1130e = uStackX_18;
                arg3_00 = *0x11531;
                *0x112c3 = uVar1;
                *0x24ac0 = uVar9;
                *0x24ac2 = uStack_58;
                **0x11307 = uVar8;
                if ((arg3_00 != 0) && (uVar10 != 0x92a0)) {
                    iVar7 = 0x112a0;
code_r0x000153b9:
                    fcn.00011710(uVar10 + 0x8000,iVar7,arg3_00);
                }
code_r0x000153be:
                iVar7 = iStack_60;
            }
            else {
                if (*0x23a11 != '\0') {
                    fcn.0001baac(uVar8,uVar10,iStackX_8,iVar7);
                    goto code_r0x000153be;
                }
                if (*0x23df9 != '\0') {
                    fcn.0001ca90(uStackX_18 & 0xffffffff);
                    iVar7 = iStack_60;
                }
                iVar3 = uVar10 + 0x8000;
                *0x12137 = arg4;
                *0x1214f = iStackX_8 + -8 + iVar7;
                *0x12270 = uVar9;
                *0x12192 = uStackX_18;
                *0x12272 = uStack_58;
                *0x12135 = uVar13 + 1 + -1;
                **0x1214f = uVar8;
                arg3_00 = *0x12310;
                *0x12260 = *0x1214f;
                if (*0x23df9 != '\0') {
                    *0x12160 = uVar1;
                    if ((arg3_00 != 0) && (iVar3 != 0x12100)) {
                        fcn.00011710(iVar3,0x12100,arg3_00);
                    }
                    fcn.0001a834(uVar8,uVar10,*0x1214f,arg4);
                    goto code_r0x000153be;
                }
                *0x12113 = uVar1;
                if ((arg3_00 != 0) && (iVar3 != 0x12100)) {
                    iVar7 = 0x12100;
                    goto code_r0x000153b9;
                }
            }
            iStackX_8 = iStackX_8 + iStack_50;
            arg4 = arg4 + uVar12;
            uVar8 = uVar8 + 1;
        } while (uVar8 < *0x22450);
    }
    fcn.00011750(0x24c20,0x260);
    fcn.000196c8(0x24c20);
    return uStackX_18 & 0xffffffff;
}


/* fcn.000145a8 @ 0x145a8 */

void fcn.000145a8(void)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t iVar5;
    int64_t *piVar6;
    
    iVar3 = fcn.00018d94();
    puVar4 = fcn.00019014();
    iVar5 = fcn.00019014();
    piVar6 = iVar5 + 8;
    iVar5 = 0x40;
    do {
        *puVar4 = 1;
        iVar2 = *0x22460;
        piVar6[2] = puVar4;
        piVar6[-1] = 0x53545250;
        puVar4 = puVar4 + iVar3;
        *(piVar6 + 3) = 0;
        *piVar6 = iVar2 + 0x88;
        puVar1 = *(iVar2 + 0x90);
        piVar6[1] = puVar1;
        *puVar1 = piVar6;
        *(iVar2 + 0x90) = piVar6;
        piVar6 = piVar6 + 5;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    return;
}


/* fcn.00018d94 @ 0x18d94 */

uint32_t fcn.00018d94(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [6];
    
    fcn.000118a0(1,auStackX_8,auStackX_10,0);
    uVar2 = auStackX_10[0] >> 8 & 0xff;
    uVar3 = uVar2 * 8;
    if (((auStackX_8[0] & 0xf00) == 0xf00) &&
       ((uVar1 = (auStackX_8[0] >> 8 & 0xf00 | auStackX_8[0] & 0xf0) >> 4, uVar1 < 5 || (uVar1 == 6)))) {
        uVar3 = uVar2 << 4;
    }
    if (uVar3 < 0x20) {
        uVar3 = 0x20;
    }
    return uVar3;
}


/* fcn.00018f54 @ 0x18f54 */

int64_t fcn.00018f54(void)

{
    if (*0x239e8 == 0) {
        (**(*0x239b8 + 0x140))(0x22300,0,0x239e8);
    }
    return *0x239e8;
}


/* fcn.00018e74 @ 0x18e74 */

//WARNING: Removing unreachable block (ram,0x00018e92)

void fcn.00018e74(void)

{
    do {
        fcn.00011860();
    } while( true );
}


/* fcn.000143ec @ 0x143ec */

uint64_t fcn.000143ec(void)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t arg1;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    
    uVar10 = ((*0x24ec8 - *0x24ec0) - *0x24eb0) + 0x2000 & 0xffffffffffe00000;
    uVar9 = *0x24ed0 + 0x1000U & 0xffffffffffe00000;
    arg1 = fcn.00018fd4((uVar10 - uVar9 >> 0x15) + 6);
    fcn.00011750(arg1,0x1000);
    uVar2 = *0x23930;
    uVar7 = 0;
    uVar5 = arg1 + 0x1000;
    do {
        *(arg1 + uVar7 * 8) = uVar5 | uVar2 | 0x67;
        uVar7 = uVar7 + 1;
        uVar5 = uVar5 + 0x1000;
    } while (uVar7 < 4);
    uVar5 = 0;
    do {
        uVar7 = (uVar5 + *0x238a8) * 0x200000 | uVar2 | *0x238d8;
        puVar1 = arg1 + 0x1000 + uVar5 * 8;
        *puVar1 = (uVar5 + *0x238a0) * 0x200000 | uVar2 | *0x238d0;
        puVar1[1] = uVar7;
        iVar4 = *0x24ec0;
        iVar3 = *0x24eb0;
        uVar5 = uVar5 + 2;
    } while (uVar5 < 0x800);
    uVar5 = arg1 + 0x5000;
    uVar7 = *0x24ed0 + 0x1000;
    if (uVar9 <= uVar10) {
        do {
            *((*(arg1 + ((uVar9 & 0xffffffff) >> 0x1e) * 8) & ~uVar2 & 0xfffffffffffff000) +
             ((uVar9 & 0xffffffff) >> 0x15 & 0x1ff) * 8) = uVar2 | uVar5 | 0x67;
            uVar8 = 0;
            uVar6 = uVar9;
            do {
                if (uVar6 == uVar7) {
                    *(uVar5 + uVar8 * 8) = uVar2 | uVar6;
                    uVar7 = uVar7 + iVar4 + iVar3;
                    if (*0x24ec8 < uVar7) {
                        uVar7 = 0;
                    }
                }
                else {
                    *(uVar5 + uVar8 * 8) = uVar2 | uVar6 | 0x67;
                }
                uVar6 = uVar6 + 0x1000;
                uVar8 = uVar8 + 1;
            } while (uVar8 < 0x200);
            uVar5 = uVar5 + 0x1000;
            uVar9 = uVar9 + 0x200000;
        } while (uVar9 <= uVar10);
    }
    return arg1 & 0xffffffff;
}


/* fcn.00018e10 @ 0x18e10 */

int64_t fcn.00018e10(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_RDX;
    
    LOCK();
    iVar2 = *arg1;
    if (iVar2 == 1) {
        *arg1 = 2;
    }
    UNLOCK();
    if (iVar2 != 1) {
        iVar2 = arg1;
        fcn.00012540(arg1,in_RDX);
        while( true ) {
            LOCK();
            iVar1 = *arg1;
            if (iVar1 == 1) {
                *arg1 = 2;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            fcn.00011860();
            fcn.00012540(iVar2,in_RDX);
        }
    }
    return arg1;
}


/* fcn.00013868 @ 0x13868 */

void fcn.00013868(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    
    if (*0x23e29 == '\0') {
        uVar1 = 0;
    }
    else {
        uVar1 = rdmsr(0x4e0);
    }
    if (((*0x23938 != '\0') && ((uVar1 | 5) != uVar1)) && (*0x23e29 != '\0')) {
        wrmsr(0x4e0,uVar1 & 0xffffffff00000000 | uVar1 & 0xffffffff | 5);
    }
    **0x23928 = 1;
    return;
}


/* fcn.00011860 @ 0x11860 */

void fcn.00011860(void)

{
    return;
}


/* fcn.00013b34 @ 0x13b34 */

int fcn.00013b34(int64_t arg1)

{
    int iVar1;
    int iVar2;
    
    do {
        iVar2 = *arg1;
        if (iVar2 != 0) {
            LOCK();
            iVar1 = *arg1;
            if (iVar2 == iVar1) {
                *arg1 = iVar2 + -1;
            }
            UNLOCK();
            if (iVar2 == iVar1) {
                return iVar2 + -1;
            }
        }
        fcn.00011860();
    } while( true );
}


/* fcn.00013e1c @ 0x13e1c */

ulong fcn.00013e1c(uint32_t arg1,int64_t arg2)

{
    char *pcVar1;
    uint in_register_0000000c;
    uchar uVar2;
    
    uVar2 = 0;
    pcVar1 = *0x22460;
    if ((CONCAT44(in_register_0000000c,arg1) != *(*0x22460 + 0x48)) &&
       (pcVar1 = *(CONCAT44(in_register_0000000c,arg1) * 0x38 + 0x20 + **0x23950), *pcVar1 != '\0')) {
        uVar2 = 1;
    }
    return CONCAT71(pcVar1 >> 8,uVar2);
}


/* fcn.00013c00 @ 0x13c00 */

uint64_t fcn.00013c00(void)

{
    char *pcVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong *puVar4;
    
    pcVar1 = *(*0x23950)[1];
    if (*(*0x23950)[1] != *0x22448) {
        uVar3 = 0;
        piVar2 = *(*0x22460 + 0x10);
        pcVar1 = *0x22460;
        if (*0x22450 != 0) {
            puVar4 = **0x23950 + 0x20;
            do {
                pcVar1 = *puVar4;
                if ((*pcVar1 == '\0') && (*piVar2 != -1)) {
                    return pcVar1 & 0xffffffffffffff00;
                }
                uVar3 = uVar3 + 1;
                puVar4 = puVar4 + 7;
                piVar2 = piVar2 + 6;
            } while (uVar3 < *0x22450);
        }
    }
    return CONCAT71(pcVar1 >> 8,1);
}


/* fcn.00017c6c @ 0x17c6c */

bool fcn.00017c6c(int64_t arg1)

{
    uint64_t uVar1;
    int64_t in_RDX;
    
    uVar1 = fcn.00012540(arg1,in_RDX);
    if (*0x24ab2 == '\0') {
        if (uVar1 < arg1) {
            uVar1 = (*0x23998 - arg1) + 1 + uVar1;
        }
        else {
            uVar1 = uVar1 - arg1;
        }
    }
    else if (arg1 < uVar1) {
        uVar1 = arg1 + 1 + (*0x23998 - uVar1);
    }
    else {
        uVar1 = arg1 - uVar1;
    }
    return *0x239a0 <= uVar1;
}


/* fcn.00013c64 @ 0x13c64 */

void fcn.00013c64(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    int64_t iVar3;
    uint32_t *noname_0;
    uint8_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    
    uVar4 = 0;
    uVar6 = 0;
    if (*0x23958 != '\0') {
        uVar1 = rdmsr(0x179);
        if (((uVar1 >> 0x1b & 1) == 0) || (uVar1 = rdmsr(0x3a), (uVar1 >> 0x14 & 1) == 0)) {
            uVar4 = 0;
        }
        else {
            uVar1 = rdmsr(0x4d0);
            uVar4 = uVar1 & 1;
        }
        arg1 = 0x17a;
        uVar7 = rdmsr(0x17a);
        arg2 = uVar7 & 0xffffffff00000000;
        uVar6 = uVar7 >> 3 & 1;
    }
    iVar3 = fcn.00012540(arg1,arg2);
    while ((cVar2 = fcn.00017c6c(iVar3), cVar2 == '\0' &&
           (((uVar4 == 0 || (uVar6 == 0)) && (cVar2 = fcn.00013c00(), cVar2 == '\0'))))) {
        fcn.00011860();
    }
    noname_0 = (*0x23950)[1];
    if (*noname_0 < *0x22448) {
        uVar7 = 0;
        if (*0x22450 != 0) {
            iVar3 = 0;
            iVar5 = 0;
            do {
                cVar2 = **(iVar5 + 0x20 + **0x23950);
                noname_0 = CONCAT71(**0x23950 >> 8,cVar2);
                if ((cVar2 == '\0') && (noname_0 = *(*0x22460 + 0x10), *(noname_0 + iVar3) != -1)) {
                    arg2 = *(noname_0 + iVar3);
                    noname_0 = 0x4200;
                    fcn.000193f8(0x4200,arg2);
                }
                uVar7 = uVar7 + 1;
                iVar5 = iVar5 + 0x38;
                iVar3 = iVar3 + 0x30;
            } while (uVar7 < *0x22450);
        }
        iVar3 = fcn.00012540(noname_0,arg2);
        while (cVar2 = fcn.00017c6c(iVar3), cVar2 == '\0') {
            cVar2 = fcn.00013c00();
            if (cVar2 != '\0') {
                return;
            }
            fcn.00011860();
        }
    }
    return;
}


/* fcn.00013b64 @ 0x13b64 */

void fcn.00013b64(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = *(*0x23950 + 2);
    if (arg1 != 0) {
        do {
            fcn.00013b34(*(uVar1 * 0x38 + 0x18 + **0x23950));
            arg1 = arg1 + -1;
        } while (arg1 != 0);
    }
    return;
}


/* fcn.000138c0 @ 0x138c0 */

void fcn.000138c0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    uint64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    
    uStackX_8 = *(*0x22460 + 0x48);
    if (*0x23e29 != '\0') {
        uVar1 = rdmsr(0x17d);
        arg1_00 = uVar1 & 0xffffffff00000000;
        if ((uVar1 & 0x400000000000000) != 0) {
            **0x23928 = 1;
            fcn.00018e10(*0x23928);
            fcn.00013868(&uStackX_8,arg1_00);
            uStackX_8 = 0;
            if (*(*0x239d0 + 0x80) == 0) {
                return;
            }
            iVar2 = *0x22460;
            iVar3 = *0x239d0;
            do {
                if ((uStackX_8 != *(iVar2 + 0x48)) && (*(*(iVar2 + 0x10) + uStackX_8 * 0x30) != -1)) {
                    fcn.00018e10(*0x23928);
                    (**(*0x239d0 + 0x70))(fcn.00013868,uStackX_8,&uStackX_8);
                    while( true ) {
                        iStackX_10 = **0x23928;
                        LOCK();
                        iVar2 = **0x23928;
                        if (iVar2 == 1) {
                            **0x23928 = 2;
                        }
                        UNLOCK();
                        if (iVar2 == 1) break;
                        fcn.00011860();
                    }
                    iStackX_10 = **0x23928;
                    **0x23928 = 1;
                    iVar2 = *0x22460;
                    iVar3 = *0x239d0;
                }
                uStackX_8 = uStackX_8 + 1;
            } while (uStackX_8 < *(iVar3 + 0x80));
            return;
        }
    }
    *0x23938 = 0;
    return;
}


/* fcn.0001ac9c @ 0x1ac9c */

uint64_t fcn.0001ac9c(ulong param_1,int64_t param_2)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t noname_1;
    int64_t arg1;
    
    uVar1 = fcn.00011840();
    fcn.00011930(uVar1 & 0xfffffffffffeffff);
    iVar2 = *0x239d0;
    if ((*0x23a13 != '\0') && (uVar1 = 0, *(*0x239d0 + 0x80) != 0)) {
        do {
            if (*0x23a11 != '\0') {
                *0x1223e = 7;
                iVar2 = CONCAT71(param_2 >> 8,5);
                fcn.0001c7e4(*(*0x23e40 + uVar1 * 4) + 0x8000,iVar2,0x1223e);
                *0x23dd8 = 1;
                param_2 = CONCAT71(iVar2 >> 8,0x80);
                fcn.0001c7e4(*(*0x23e40 + uVar1 * 4) + 0x8000,param_2,0x23dd8);
                iVar2 = *0x239d0;
            }
            uVar1 = uVar1 + 1;
        } while (uVar1 < *(iVar2 + 0x80));
    }
    if ((*0x23a11 != '\0') && (iVar2 = (**(iVar2 + 0xd0))(0x22360,0,0x23a30), -1 < iVar2)) {
        (**(*0x239d0 + 0xd0))(0x22350,0,0x23a58);
        fcn.0001c6c0();
        (**(*0x23a30 + 8))(*0x23a30,0xfed20000,0x10000,0x20000);
        arg1 = 0x10000;
        iVar2 = *0x23a30;
        (**(*0x23a30 + 8))(*0x23a30,0xfed30000,0x10000,0x20000);
        noname_1 = *0x23a50;
        if ((*0x23a50 != 0) && (arg1 = *0x23a28, *0x23a28 != 0)) {
            iVar2 = *0x23a30;
            (**(*0x23a30 + 8))();
        }
        fcn.0001c334(iVar2,noname_1,arg1);
    }
    uVar1 = fcn.00011840();
    return uVar1 | 0x10000;
}


/* fcn.00013dac @ 0x13dac */

ulong fcn.00013dac(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    uVar2 = 0;
    if (*0x22450 != 0) {
        iVar3 = 0;
        do {
            cVar1 = fcn.00013e1c(uVar2,arg1);
            if (cVar1 != '\0') {
                fcn.00018e10(*(iVar3 + **0x23950));
                arg1 = *(iVar3 + **0x23950);
                *arg1 = 1;
            }
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x38;
        } while (uVar2 < *0x22450);
    }
    return 1;
}


/* fcn.00016430 @ 0x16430 */

void fcn.00016430(void)

{
    int64_t *piVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t *puVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *puVar13;
    uint64_t *puVar14;
    uint64_t uVar15;
    uint64_t *puVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    uint64_t uStack_98;
    uint64_t uStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t uStack_60;
    
    uVar3 = fcn.000118d0();
    if ((uVar3 >> 0xc & 1) == 0) {
        puVar16 = &uStack_68;
        uStack_68 = *0x24b88 | 1;
    }
    else {
        puVar16 = *0x24b88;
    }
    puVar13 = puVar16;
    iVar4 = fcn.00018e98();
    uVar5 = iVar4 + 1;
    uStack_78 = 1;
    if (0x30 < uVar5) {
        uVar5 = 0x30;
        uStack_78 = 1LL << (iVar4 - 0x2fU & 0x3f);
    }
    uStack_98 = 1;
    if (0x27 < uVar5) {
        cVar2 = uVar5;
        uVar5 = 0x27;
        uStack_98 = 1LL << (cVar2 - 0x27U & 0x3f);
    }
    uVar5 = 1LL << (uVar5 - 0x1eU & 0x3f);
    uVar19 = 0;
    if (uStack_78 != 0) {
        uVar11 = *0x2243c;
        iStackX_8 = 0;
        do {
            iVar4 = iStackX_8;
            if ((puVar13[uVar19] & 1) != 0) {
                uVar17 = puVar13[uVar19] & 0xffffffffff000;
                uVar12 = 0;
                if (uStack_98 != 0) {
                    do {
                        if ((*(uVar17 + uVar12 * 8) & 1) != 0) {
                            uVar18 = 0;
                            puVar13 = ~*0x23930 & *(uVar17 + uVar12 * 8) & 0xffffffffff000;
                            uVar15 = *0x23930;
                            if (uVar5 != 0) {
                                do {
                                    if (((*puVar13 & 0x81) == 1) &&
                                       (puVar9 = ~uVar15 & *puVar13 & 0xffffffffff000, puVar9 != NULL)) {
                                        uVar10 = 0;
                                        do {
                                            if ((*puVar9 & 1) != 0) {
                                                iVar7 = ((iVar4 + uVar12) * 0x200 + uVar18) * 0x200 + uVar10;
                                                uVar8 = iVar7 * 0x200000;
                                                if ((*puVar9 & 0x80) != 0) {
                                                    if (uVar8 < uVar11) {
                                                        if (0x1fffff < uVar11 + iVar7 * -0x200000)
                                                        goto code_r0x00016649;
code_r0x000165d1:
                                                        uVar11 = fcn.00018fd4(1);
                                                        uVar15 = *0x23930;
                                                        uVar6 = 0;
                                                        do {
                                                            uVar20 = (uVar6 + *0x238a8) * 0x1000 | uVar15 | *0x238b8;
                                                            piVar1 = uVar11 + uVar6 * 8;
                                                            *piVar1 = ((uVar6 + *0x238a0) * 0x1000 | uVar15 | *0x238b0)
                                                                      + uVar8;
                                                            piVar1[1] = uVar20 + uVar8;
                                                            uVar6 = uVar6 + 2;
                                                        } while (uVar6 < 0x200);
                                                        *puVar9 = uVar15 | uVar11 | 0x67;
                                                        uVar11 = *0x2243c;
                                                    }
                                                    else {
                                                        uVar6 = *0x22440 + -0x200000 + uVar11;
                                                        if ((uVar6 < uVar8) && (uVar8 - uVar6 < 0x200000))
                                                        goto code_r0x000165d1;
                                                    }
                                                    iVar4 = iStackX_8;
                                                }
                                            }
code_r0x00016649:
                                            uVar10 = uVar10 + 1;
                                            puVar9 = puVar9 + 1;
                                        } while (uVar10 < 0x200);
                                    }
                                    uVar18 = uVar18 + 1;
                                    puVar13 = puVar13 + 1;
                                } while (uVar18 < uVar5);
                            }
                        }
                        uVar12 = uVar12 + 1;
                    } while (uVar12 < uStack_98);
                    puVar13 = puVar16;
                }
            }
            iStackX_8 = iVar4 + 0x200;
            uVar19 = uVar19 + 1;
        } while (uVar19 < uStack_78);
    }
    uStack_70 = 0;
    if (uStack_78 != 0) {
        iStackX_18 = 0;
        do {
            iVar4 = iStackX_18;
            if ((puVar13[uStack_70] & 1) != 0) {
                uVar19 = puVar13[uStack_70] & 0xffffffffff000;
                uVar11 = 0;
                uStack_60 = uVar19;
                if (uStack_98 != 0) {
                    uVar12 = *0x23930;
                    do {
                        if ((*(uVar19 + uVar11 * 8) & 1) != 0) {
                            uVar17 = ~uVar12;
                            uStackX_10 = 0;
                            puVar13 = uVar17 & *(uVar19 + uVar11 * 8) & 0xffffffffff000;
                            uStackX_20 = uVar17;
                            if (uVar5 != 0) {
                                do {
                                    uVar19 = *puVar13;
                                    uVar12 = uStackX_10;
                                    if ((uVar19 & 1) != 0) {
                                        if (uVar19 < '\0') {
                                            if (*0x22568 != '\0') {
                                                *puVar13 = uVar19 | 0x8000000000000000;
                                            }
                                        }
                                        else {
                                            puVar9 = uVar19 & uVar17 & 0xffffffffff000;
                                            if (puVar9 != NULL) {
                                                uVar19 = 0;
                                                do {
                                                    uVar15 = *puVar9;
                                                    if ((uVar15 & 1) != 0) {
                                                        iVar7 = (((iVar4 + uVar11) * 0x200 + uVar12) * 0x200 + uVar19) *
                                                                0x200000;
                                                        if (uVar15 < '\0') {
                                                            cVar2 = fcn.000163cc(iVar7,&iStackX_8);
                                                            if (cVar2 == '\0') {
                                                                *puVar9 = uVar15 & 0xffffffffffffff98;
                                                            }
                                                            if (iStackX_8 == '\0') {
code_r0x00016843:
                                                                uVar17 = uStackX_20;
                                                                uVar12 = uStackX_10;
                                                                iVar4 = iStackX_18;
                                                            }
                                                            else {
                                                                uVar17 = uStackX_20;
                                                                uVar12 = uStackX_10;
                                                                iVar4 = iStackX_18;
                                                                if (*0x22568 != '\0') {
                                                                    *puVar9 = *puVar9 | 0x8000000000000000;
                                                                }
                                                            }
                                                        }
                                                        else {
                                                            puVar14 = uVar15 & uVar17 & 0xffffffffff000;
                                                            if (puVar14 != NULL) {
                                                                iVar4 = 0x200;
                                                                do {
                                                                    cVar2 = fcn.000163cc(iVar7,&iStackX_8);
                                                                    if (cVar2 == '\0') {
                                                                        *puVar14 = *puVar14 & 0xffffffffffffff98;
                                                                    }
                                                                    if ((iStackX_8 != '\0') && (*0x22568 != '\0')) {
                                                                        *puVar14 = *puVar14 | 0x8000000000000000;
                                                                    }
                                                                    iVar7 = iVar7 + 0x1000;
                                                                    puVar14 = puVar14 + 1;
                                                                    iVar4 = iVar4 + -1;
                                                                } while (iVar4 != 0);
                                                                goto code_r0x00016843;
                                                            }
                                                        }
                                                    }
                                                    uVar19 = uVar19 + 1;
                                                    puVar9 = puVar9 + 1;
                                                } while (uVar19 < 0x200);
                                            }
                                        }
                                    }
                                    puVar13 = puVar13 + 1;
                                    uStackX_10 = uVar12 + 1;
                                } while (uStackX_10 < uVar5);
                                uVar19 = uStack_60;
                                uVar12 = *0x23930;
                            }
                        }
                        uVar11 = uVar11 + 1;
                    } while (uVar11 < uStack_98);
                    puVar13 = puVar16;
                }
            }
            uStack_70 = uStack_70 + 1;
            iStackX_18 = iVar4 + 0x200;
        } while (uStack_70 < uStack_78);
    }
    fcn.00011700();
    *0x23980 = 1;
    return;
}


/* fcn.00015b34 @ 0x15b34 */

void fcn.00015b34(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (*(*0x239d0 + 0x98) != 0) {
        piVar3 = *(*0x239d0 + 0xa0);
        do {
            if ((*0x22250 == *piVar3) && (*0x22258 == piVar3[1])) {
                iVar4 = (*(*0x239d0 + 0xa0))[uVar2 * 3 + 2];
                if (iVar4 == 0) {
                    return;
                }
                uVar2 = *(iVar4 + 4);
                uVar1 = *(iVar4 + 8);
                if (uVar2 != 0) {
                    piVar3 = iVar4 + 0x18;
                    do {
                        if (piVar3[-1] == 5) {
                            iVar4 = 0x20000;
                        }
                        else {
                            iVar4 = 0x4000;
                        }
                        fcn.000158c8(*piVar3,piVar3[2] << 0xc,iVar4,NULL);
                        piVar3 = piVar3 + uVar1;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                }
                fcn.00015960();
                fcn.000158c8(*0x24a90,(-*0x24a98 & 0xfffU) + *0x24a98,0x4000,NULL);
                fcn.000158c8(*0x20124,*0x20122 + 1 + (~*0x20122 & 0xfff),0x4000,NULL);
                return;
            }
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar2 < *(*0x239d0 + 0x98));
    }
    return;
}


/* fcn.00015f3c @ 0x15f3c */

void fcn.00015f3c(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    int *piVar8;
    
    uVar5 = 0;
    if (*0x24ba0 != NULL) {
        puVar7 = *0x24ba0;
        for (uVar2 = *0x24b90 / *0x24ba8; uVar2 != 0; uVar2 = uVar2 - 1) {
            uVar1 = *puVar7;
            if ((uVar1 != 0) && ((uVar1 < 5 || (uVar1 - 7 < 3)))) {
                if ((*0x23920 == '\0') || (uVar6 = *(puVar7 + 2), 0xfffff < uVar6)) {
                    iVar4 = *(puVar7 + 6);
                    iVar3 = *(puVar7 + 2);
                }
                else {
                    if (*(puVar7 + 6) * 0x1000 + uVar6 < 0x100001) goto code_r0x00016007;
                    iVar3 = ((-uVar6 & 0xfff) != 0) + (0x100000 - uVar6 >> 0xc);
                    iVar4 = *(puVar7 + 6) - iVar3;
                    iVar3 = iVar3 * 0x1000 + uVar6;
                }
                fcn.000158c8(iVar3,iVar4 << 0xc,0x2000,NULL);
            }
code_r0x00016007:
            puVar7 = puVar7 + *0x24ba8;
        }
    }
    if ((*0x23970 != 0) && (*0x23968 != 0)) {
        uVar6 = uVar5;
        uVar2 = uVar5;
        do {
            fcn.000158c8(*(uVar2 + *0x23970),*(uVar2 + 8 + *0x23970),0x2000,NULL);
            uVar6 = uVar6 + 1;
            uVar2 = uVar2 + 0x38;
        } while (uVar6 < *0x23968);
    }
    if ((*0x23978 != 0) && (piVar8 = *0x23978 + 0x10, iVar4 = *0x23978, *(*0x23978 + 4) != 0)) {
        do {
            if ((*piVar8 - 5U < 2) && ((piVar8[8] >> 0x11 & 1) != 0)) {
                fcn.000158c8(*(piVar8 + 2),*(piVar8 + 6) << 0xc,0x2000,NULL);
                iVar4 = *0x23978;
            }
            uVar5 = uVar5 + 1;
            piVar8 = piVar8 + *(iVar4 + 8);
        } while (uVar5 < *(iVar4 + 4));
    }
    return;
}


/* fcn.00018a8c @ 0x18a8c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00018a8c(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t arg1;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg1_00;
    uint64_t arg1_01;
    bool bVar5;
    bool bVar6;
    char acStackX_8 [8];
    char acStackX_10 [8];
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    uint32_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t uStack_68;
    uint64_t uStack_60;
    int64_t var_28h;
    int64_t var_20h;
    uint32_t var_18h;
    int64_t var_10h;
    
    if (*0x24ab0 != '\0') {
        uVar1 = fcn.000118d0();
        if ((uVar1 >> 0x17 & 1) != 0) {
            fcn.000116d0();
        }
        uVar2 = fcn.00011840();
        fcn.00011930(uVar2 & 0xfffffffffffeffff);
        do {
            uStack_68 = 0;
            bVar6 = false;
            fcn.00017cd0(&uStackX_18,acStackX_10);
            if (acStackX_10[0] != '\0') {
                uStack_68 = uStackX_18;
                fcn.000158c8(uStackX_18,0x1000,0x20000,acStackX_8);
                bVar6 = acStackX_8[0] != '\0';
            }
            bVar5 = acStackX_10[0] != '\0';
            uStack_60 = 0;
            do {
                if (acStackX_10[0] == '\0') {
                    uVar2 = uStackX_18;
code_r0x00018b6e:
                    fcn.000158c8(uVar2,0x1000,0x20000,acStackX_8);
                    if ((bVar6) || (bVar6 = false, acStackX_8[0] != '\0')) {
                        bVar6 = true;
                    }
                    uStackX_20 = 0;
                    do {
                        uVar4 = 0;
                        arg1_00 = *(uVar2 + uStackX_20 * 8) & ~*0x23930 & 0xffffffffff000;
                        if (arg1_00 != 0) {
                            fcn.000158c8(arg1_00,0x1000,0x20000,acStackX_8);
                            if ((bVar6) || (bVar6 = false, acStackX_8[0] != '\0')) {
                                bVar6 = true;
                            }
                            do {
                                if (((*(arg1_00 + uVar4 * 8) & 0x80) == 0) &&
                                   (arg1_01 = ~*0x23930 & *(arg1_00 + uVar4 * 8) & 0xffffffffff000, arg1_01 != 0)) {
                                    fcn.000158c8(arg1_01,0x1000,0x20000,acStackX_8);
                                    if ((bVar6) || (acStackX_8[0] != '\0')) {
                                        bVar6 = true;
                                    }
                                    uVar3 = 0;
                                    do {
                                        if ((((*(arg1_01 + uVar3 * 8) & 0x80) == 0) &&
                                            (arg1 = ~*0x23930 & *(arg1_01 + uVar3 * 8) & 0xffffffffff000, arg1 != 0))
                                           && ((fcn.000158c8(arg1,0x1000,0x20000,acStackX_8), bVar6 ||
                                               (acStackX_8[0] != '\0')))) {
                                            bVar6 = true;
                                        }
                                        uVar3 = uVar3 + 1;
                                    } while (uVar3 < 0x200);
                                }
                                uVar4 = uVar4 + 1;
                            } while (uVar4 < 0x200);
                        }
                        uStackX_20 = uStackX_20 + 1;
                    } while (uStackX_20 < 0x200);
                }
                else {
                    uVar2 = *(uStack_68 + uStack_60 * 8) & ~*0x23930 & 0xffffffffff000;
                    if (uVar2 != 0) goto code_r0x00018b6e;
                }
                uStack_60 = uStack_60 + 1;
            } while (uStack_60 < (-bVar5 & 0x1ff) + 1);
        } while (bVar6);
        uVar2 = fcn.00011840();
        fcn.00011930(uVar2 | 0x10000);
        if ((uVar1 >> 0x17 & 1) != 0) {
            fcn.000116e5();
        }
    }
    return;
}


/* fcn.00013bac @ 0x13bac */

void fcn.00013bac(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int iVar2;
    char cVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    uVar4 = 0;
    if (*0x22450 != 0) {
        iVar5 = 0;
        do {
            cVar3 = fcn.00013e1c(uVar4,arg1);
            if (cVar3 != '\0') {
                arg1 = *(iVar5 + 0x18 + **0x23950);
                do {
                    iVar2 = *arg1;
                    if (iVar2 + 1 == 0) break;
                    LOCK();
                    iVar1 = *arg1;
                    if (iVar2 == iVar1) {
                        *arg1 = iVar2 + 1;
                    }
                    UNLOCK();
                } while (iVar2 != iVar1);
            }
            uVar4 = uVar4 + 1;
            iVar5 = iVar5 + 0x38;
        } while (uVar4 < *0x22450);
    }
    return;
}


/* fcn.00014634 @ 0x14634 */

ulong * fcn.00014634(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    
    iVar2 = *0x22460;
    if (*(*0x22460 + 0x98) == *0x22460 + 0x88) {
        uVar3 = fcn.000145a8();
        *(iVar2 + 0x98) = uVar3;
    }
    puVar1 = *(iVar2 + 0x98);
    *(iVar2 + 0x98) = *puVar1;
    *(puVar1 + 3) = arg1;
    fcn.00018e10(puVar1[2]);
    return puVar1 + -1;
}


/* fcn.0001469c @ 0x1469c */

ulong fcn.0001469c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int iVar2;
    ulong *puVar3;
    int *piVar4;
    ulong uVar5;
    int64_t iVar6;
    uint in_register_00000014;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t in_stack_00000028;
    ulong in_stack_00000030;
    
    uVar7 = CONCAT44(in_register_00000014,arg2);
    if ((((((uVar7 < *(*0x22460 + 0x50)) && (uVar7 != *(*0x22460 + 0x48))) &&
          (*(*(*0x22460 + 0x10) + uVar7 * 0x30) != -1)) &&
         ((iVar8 = uVar7 * 0x38, **(iVar8 + 0x20 + **0x23950) != '\0' && (*(*(*0x22460 + 0x18) + uVar7 * 4) != 2)))) &&
        ((in_stack_00000028 == 0 || ((*0x225b4 & 1) != 0)))) && (arg1 != 0)) {
        fcn.00018e10(*(iVar8 + **0x23950));
        *(iVar8 + 8 + **0x23950) = arg1;
        *(iVar8 + 0x10 + **0x23950) = arg3;
        if ((arg4 != 0) && (arg4 != 0x24bb0)) {
            iVar6 = fcn.00014634(1);
            *(iVar8 + 0x28 + **0x23950) = iVar6;
            *arg4 = *(iVar6 + 0x18);
        }
        *(iVar8 + 0x30 + **0x23950) = in_stack_00000030;
        puVar3 = *(iVar8 + 0x30 + **0x23950);
        if (puVar3 != NULL) {
            *puVar3 = 0x8000000000000006;
        }
        piVar4 = *(iVar8 + 0x18 + **0x23950);
        do {
            iVar2 = *piVar4;
            if (iVar2 + 1 == 0) break;
            LOCK();
            iVar1 = *piVar4;
            if (iVar2 == iVar1) {
                *piVar4 = iVar2 + 1;
            }
            UNLOCK();
        } while (iVar2 != iVar1);
        if (arg4 == 0) {
            fcn.00018e10(*(iVar8 + **0x23950));
            **(iVar8 + **0x23950) = 1;
        }
        uVar5 = 0;
    }
    else {
        uVar5 = 0x8000000000000002;
    }
    return uVar5;
}


/* fcn.00011920 @ 0x11920 */

void fcn.00011920(void)

{
    return;
}


/* fcn.00011870 @ 0x11870 */

uint64_t fcn.00011870(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
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
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = puVar1[3];
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.0001a71c @ 0x1a71c */

ulong fcn.0001a71c(ulong noname_0,int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    ulong uStackX_18;
    ulong uStackX_20;
    
    uVar1 = rdmsr(0x1f7);
    uVar3 = uVar1;
    if (*0x23e28 == '\x01') {
        if ((uVar3 >> 10 & 1) != 0) {
            return uVar1;
        }
        uVar2 = rdmsr(0x1f6);
        uStackX_18._4_4_ = uVar2 >> 0x20;
        uStackX_18 = CONCAT44(uStackX_18._4_4_,*0x23df0 & 7 | uVar2 & 0xff8 | *0x23e14 & 0xfffff000);
        wrmsr(0x1f6,uStackX_18);
        uVar3 = ~(*0x23e24 - 1U) & 0xfffffc00 | uVar3 & 0x3ff | 0xc00;
    }
    else {
        if ((uVar3 >> 0xb & 1) != 0) {
            return uVar1;
        }
        uVar2 = rdmsr(0x1f6);
        uStackX_18._4_4_ = uVar2 >> 0x20;
        uStackX_18 = CONCAT44(uStackX_18._4_4_,*0x23df0 & 7 | uVar2 & 0xff8 | *0x23e14 & 0xfffff000);
        wrmsr(0x1f6,uStackX_18);
        uVar3 = ~(*0x23e24 - 1U) & 0xfffff800 | uVar3 & 0x7ff | 0x800;
    }
    uStackX_20 = CONCAT44(uVar1 >> 0x20,uVar3);
    wrmsr(0x1f7,uStackX_20);
    return uStackX_20;
}


/* fcn.00013e50 @ 0x13e50 */

void fcn.00013e50(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    ulong noname_0;
    int *piVar5;
    uchar *noname_0_00;
    int64_t *piVar6;
    int64_t noname_0_01;
    int iVar7;
    uint64_t uVar8;
    uint64_t arg1_00;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    
    uVar8 = 0;
    iVar9 = arg1 * 0x38;
    iVar7 = arg2;
    *(*0x23950)[3] = 1;
    **(iVar9 + 0x20 + **0x23950) = 1;
    *(*0x22460 + 0x48) = arg1;
    arg1_00 = uVar8;
    if (iVar7 == 0) {
        fcn.00013c64(arg1,arg2);
        *(*0x23950)[4] = 1;
        puVar4 = (*0x23950)[1];
        do {
            uVar2 = *puVar4;
            arg2 = uVar2;
            LOCK();
            uVar1 = *puVar4;
            if (uVar2 == uVar1) {
                *puVar4 = 0xffffffff;
            }
            UNLOCK();
        } while (uVar2 != uVar1);
        arg1_00 = uVar2 - 1;
        fcn.00013b64(uVar2 - 1);
    }
    fcn.00018e10(*(iVar9 + **0x23950));
    if ((*0x2257b != '\0') && (*0x23982 != '\0')) {
        *(*0x239d0 + 0x70) = *(*0x22460 + 0x40);
        *(*0x239d0 + 0x78) = *(*0x22460 + 0x48);
        *(*0x239d0 + 0x80) = *(*0x22460 + 0x50);
        *(*0x239d0 + 0x88) = *(*0x22460 + 0x58);
        noname_0 = *(*0x22460 + 0x60);
        *(*0x239d0 + 0x90) = noname_0;
        fcn.000138c0(noname_0,arg2);
        fcn.0001ac9c();
        *0x23982 = '\0';
    }
    noname_0_01 = *0x22460 + 0x40;
    (**(*0x22460 + 0x68))();
    fcn.00013dac(noname_0_01,arg2);
    if (*0x23948 != '\0') {
        fcn.00016430();
        fcn.00015b34();
        if (*0x24ab0 != '\0') {
            fcn.00015f3c();
            fcn.00018a8c();
        }
        fcn.000138c0(noname_0_01,arg2);
        fcn.0001ac9c();
        *0x23948 = '\0';
    }
    if (iVar7 != 0) {
        *(*0x23950)[4] = 1;
        piVar5 = (*0x23950)[1];
        do {
            iVar3 = *piVar5;
            LOCK();
            iVar7 = *piVar5;
            if (iVar3 == iVar7) {
                *piVar5 = -1;
            }
            UNLOCK();
        } while (iVar3 != iVar7);
        arg1_00 = iVar3 - 1;
        do {
            do {
            } while (*0x22450 == 0);
            arg2 = uVar8;
            uVar10 = uVar8;
            uVar11 = uVar8;
            do {
                if (**(uVar11 + 0x20 + **0x23950) != '\0') {
                    arg2 = arg2 + 1;
                }
                uVar10 = uVar10 + 1;
                uVar11 = uVar11 + 0x38;
            } while (uVar10 < *0x22450);
        } while (arg2 <= arg1_00);
    }
    noname_0_00 = (*0x23950)[3];
    *noname_0_00 = 0;
    fcn.00013bac(noname_0_00,arg2);
    uVar10 = arg1_00;
    fcn.00013b64(arg1_00);
    fcn.00013bac(uVar10,arg2);
    uVar10 = *0x22450;
    uVar11 = uVar8;
    if (*0x22450 != 0) {
        do {
            if (*(*(*0x22460 + 0x18) + uVar11 * 4) == 3) {
                *(*(*0x22460 + 0x18) + uVar11 * 4) = 0;
                piVar6 = *0x23950;
                *(*0x23950 + 0x2c) = 1;
                *(uVar11 + piVar6[6]) = 1;
                uVar10 = *0x22450;
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar10);
    }
    uVar11 = uVar8;
    if (uVar10 != 0) {
        do {
            if (*(*(*0x22460 + 0x18) + uVar11 * 4) == 1) {
                *(*(*0x22460 + 0x18) + uVar11 * 4) = 0;
                *0x22448 = *0x22448 + 1;
                uVar10 = *0x22450;
            }
            uVar11 = uVar11 + 1;
        } while (uVar11 < uVar10);
    }
    if (uVar10 != 0) {
        do {
            if (*(*(*0x22460 + 0x18) + uVar8 * 4) == 2) {
                *(*(*0x22460 + 0x18) + uVar8 * 4) = 0;
                *0x22448 = *0x22448 + -1;
                uVar10 = *0x22450;
            }
            uVar8 = uVar8 + 1;
        } while (uVar8 < uVar10);
    }
    **(iVar9 + 0x20 + **0x23950) = 0;
    fcn.00013b64(arg1_00);
    *(*0x22460 + 0x98) = *(*0x22460 + 0x88);
    *(*0x23950)[1] = 0;
    *(*0x23950)[4] = 0;
    return;
}


/* fcn.00014188 @ 0x14188 */

uint64_t fcn.00014188(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int *piVar5;
    ulong *puVar6;
    uint32_t *puVar7;
    char cVar8;
    int64_t iVar9;
    uint64_t uVar10;
    ulong uVar11;
    int64_t iVar12;
    
    iVar9 = fcn.00012540(arg1,noname_1);
    while ((cVar8 = fcn.00017c6c(iVar9), cVar8 == '\0' && (*(*0x23950)[3] == '\0'))) {
        fcn.00011860();
    }
    if (*(*0x23950)[3] == '\0') {
        if ((*0x23950)[2] != -1) {
            uVar10 = *(*(*0x22460 + 0x10) + *(*0x23950 + 2) * 0x30);
            uVar11 = 0x4200;
            fcn.000193f8(0x4200,uVar10);
            iVar9 = fcn.00012540(uVar11,uVar10);
            while ((cVar8 = fcn.00017c6c(iVar9), cVar8 == '\0' && (*(*0x23950)[3] == '\0'))) {
                fcn.00011860();
            }
            if (*(*0x23950)[3] != '\0') goto code_r0x00014274;
        }
        uVar10 = fcn.00013b34((*0x23950)[1]);
    }
    else {
code_r0x00014274:
        arg1 = arg1 * 0x38;
        uVar3 = *(*0x23950 + 2);
        **(arg1 + 0x20 + **0x23950) = 1;
        if (arg2 == 0) {
            piVar5 = *(uVar3 * 0x38 + 0x18 + **0x23950);
            do {
                iVar4 = *piVar5;
                if (iVar4 + 1 == 0) break;
                LOCK();
                iVar1 = *piVar5;
                if (iVar4 == iVar1) {
                    *piVar5 = iVar4 + 1;
                }
                UNLOCK();
            } while (iVar4 != iVar1);
        }
        while( true ) {
            fcn.00013b34(*(arg1 + 0x18 + **0x23950));
            iVar9 = **0x23950;
            if (*(*0x23950)[3] == '\0') break;
            uVar11 = (**(arg1 + 8 + iVar9))(*(arg1 + 0x10 + iVar9));
            puVar6 = *(arg1 + 0x30 + **0x23950);
            if (puVar6 != NULL) {
                *puVar6 = uVar11;
            }
            iVar9 = *(arg1 + 0x28 + **0x23950);
            if (iVar9 != 0) {
                LOCK();
                piVar5 = iVar9 + 0x20;
                iVar4 = *piVar5;
                *piVar5 = *piVar5 + -1;
                UNLOCK();
                if (iVar4 == 1) {
                    **(iVar9 + 0x18) = 1;
                }
                *(arg1 + 0x28 + **0x23950) = 0;
            }
            **(arg1 + **0x23950) = 1;
        }
        iVar12 = uVar3 * 0x38;
        piVar5 = *(iVar12 + 0x18 + iVar9);
        do {
            iVar4 = *piVar5;
            if (iVar4 + 1 == 0) break;
            LOCK();
            iVar1 = *piVar5;
            if (iVar4 == iVar1) {
                *piVar5 = iVar4 + 1;
            }
            UNLOCK();
        } while (iVar4 != iVar1);
        fcn.00013b34(*(arg1 + 0x18 + **0x23950));
        **(arg1 + 0x20 + **0x23950) = 0;
        puVar7 = *(iVar12 + 0x18 + **0x23950);
        do {
            uVar3 = *puVar7;
            uVar10 = uVar3;
            if (uVar3 + 1 == 0) {
                return uVar10;
            }
            LOCK();
            uVar2 = *puVar7;
            if (uVar3 == uVar2) {
                *puVar7 = uVar3 + 1;
            }
            else {
                uVar10 = uVar2;
            }
            UNLOCK();
        } while (uVar3 != uVar2);
    }
    return uVar10;
}


/* fcn.000119a0 @ 0x119a0 */

int64_t fcn.000119a0(int64_t arg1)

{
    return arg1;
}


/* fcn.00017ff0 @ 0x17ff0 */

//WARNING: Variable defined which should be unmapped: var_14h
//WARNING: Variable defined which should be unmapped: var_18h

uint64_t fcn.00017ff0(void)

{
    uint32_t uVar1;
    int16_t *piVar2;
    uint64_t uVar3;
    uint64_t *puVar4;
    uint64_t *puVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uchar uVar10;
    bool bVar11;
    uint64_t uVar12;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [2];
    uint32_t var_28h;
    uint32_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    uint32_t auStack_38 [6];
    uint32_t var_18h;
    int64_t var_14h;
    
    **0x23960 = 1;
    uVar10 = 1;
    *0x24ab0 = '\x01';
    fcn.000118a0(0x80000000,auStackX_18,0,0);
    if ((auStackX_18[0] < 0x80000001) || (fcn.000118a0(0x80000001,NULL,0,0), (var_28h & 0x4000000) == 0)) {
        uVar10 = 0;
    }
    *0x239a8 = uVar10;
    fcn.000118a0(0x80000000,auStack_38,0,0);
    if (auStack_38[0] < 0x80000008) {
        auStackX_8[0] = auStackX_8[0] & 0xffffff24 | 0x24;
    }
    else {
        fcn.000118a0(0x80000008,auStackX_8,0,0);
    }
    fcn.00011870(7,0,0,0);
    *0x24ab1 = 0x30 < auStackX_8[0];
    for (piVar2 = fcn.00019148(); *piVar2 != -1; piVar2 = piVar2 + piVar2[1]) {
        if (*piVar2 == 6) goto code_r0x00018100;
    }
    piVar2 = NULL;
code_r0x00018100:
    if (piVar2 == NULL) {
        fcn.000118a0(0x80000000,auStackX_10,0,0);
        uVar10 = 0x24;
        if (0x80000007 < auStackX_10[0]) {
            fcn.000118a0(0x80000008,auStackX_10,0,0);
            uVar10 = auStackX_10[0];
        }
    }
    else {
        uVar10 = piVar2[4];
    }
    *0x24e90 = uVar10;
    *0x1131b = *0x24ab1;
    uVar1 = fcn.000143ec();
    uVar8 = uVar1;
    uVar3 = 0;
    do {
        puVar5 = uVar8 + uVar3 * 8;
        uVar12 = *0x238e8 | puVar5[1];
        puVar4 = uVar8 + uVar3 * 8;
        *puVar4 = *0x238e0 | *puVar5;
        puVar4[1] = uVar12;
        uVar3 = uVar3 + 2;
    } while (uVar3 < 4);
    puVar4 = fcn.00018fd4(1);
    *puVar4 = *0x23930 | uVar8 | 0x67;
    fcn.00011750(puVar4 + 1,0xff8);
    bVar11 = *0x24ab1 != '\0';
    *puVar4 = *puVar4 & 0xe03fffffffffffff | 0x30000000000000;
    puVar5 = puVar4;
    if (bVar11) {
        puVar5 = fcn.00018fd4(1);
        *puVar5 = *0x23930 | puVar4 | 0x67;
        fcn.00011750(puVar5 + 1,0xff8);
        *puVar5 = *puVar5 & 0xe01fffffffffffff | 0x10000000000000;
    }
    if (*0x24ab0 == '\0') {
        iVar9 = 8;
        puVar6 = fcn.00018fd4(8);
        do {
            puVar7 = puVar6;
            *puVar7 = 0x225e8;
            puVar7[1] = *0x225f0;
            **0x225f0 = puVar7;
            iVar9 = iVar9 + -1;
            puVar6 = puVar7 + 0x200;
            *0x225f0 = puVar7;
        } while (iVar9 != 0);
    }
    else {
        fcn.00017d30(puVar5);
    }
    fcn.0001764c(0x22580,0xe,0x189b0);
    *(*0x20124 + 0xe4) = 1;
    return puVar5 & 0xffffffff;
}


/* fcn.0001baac @ 0x1baac */

void fcn.0001baac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort *arg3_00;
    ulong uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ushort uVar5;
    ushort *puVar6;
    ulong in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    int16_t in_stack_00000040;
    uint32_t in_stack_00000048;
    
    if (*0x23a48 == '\0') {
        uVar2 = (in_stack_00000030 + 0x6fU & 0xfffffffffffffff8) * *0x22448;
        *0x23d60 = arg3;
        *0x23d90 = arg4;
        iVar3 = (**(*0x239d0 + 0x68))(in_stack_00000028,((uVar2 & 0xfff) != 0) + (uVar2 >> 0xc));
        if (iVar3 < 0) {
            return;
        }
        fcn.0001b73c();
        *0x23a48 = '\x01';
    }
    uVar5 = *0x22215;
    iVar3 = *0x23d80 * arg1 + *0x23d50;
    if (*0x23df9 != '\0') {
        fcn.0001ca90(in_stack_00000048);
    }
    *0x1214f = arg4 + -8 + arg3;
    *0x1227a = 0x1ff8;
    *(*0x1214f - 0x1ff4) = 0;
    *0x23db0 = *0x1214f - 0x2000;
    *0x12272 = in_stack_00000038;
    *0x23d88 = arg4 + -0x2008;
    *0x12270 = in_stack_00000040 + -1;
    *0x12192 = in_stack_00000048;
    *0x12137 = iVar3;
    *0x12135 = uVar5;
    **0x1214f = arg1;
    **0x23db0 = arg1;
    *0x12260 = *0x1214f;
    *0x23da0 = *0x23dd0;
    **0x1214f = arg1;
    *0x23d78 = 0x1233e;
    *0x23d48 = 0x12371;
    *0x23d68 = *0x23dc8 + (arg1 + 1) * *0x23da0;
    *0x23db4 = 0x2000;
    *0x23d58 = *0x23d68 + -0x2000;
    *0x23da0 = *0x23da0 + -0x2000;
    uVar2 = 0;
    puVar6 = in_stack_00000038 + 6;
    do {
        puVar6[-2] = 0x38;
        puVar6[-3] = *(uVar2 + *0x23db8);
        *puVar6 = *(uVar2 + *0x23db8) >> 0x10;
        arg3_00 = puVar6 + 8;
        uVar1 = *(uVar2 + *0x23db8);
        uVar2 = uVar2 + 8;
        *(puVar6 + -1) = *(puVar6 + -1) | 0x60;
        *(puVar6 + 1) = uVar1 >> 0x20;
        *(puVar6 + -1) = 0;
        puVar6 = arg3_00;
    } while (uVar2 < 0x100);
    iVar4 = iVar3;
    fcn.0001cdf4(arg1,iVar3,arg3_00);
    *0x23a40 = 0;
    iVar4 = CONCAT71(iVar4 >> 8,1);
    if (*0x23a12 == '\x01') {
        *0x23a38 = 1;
    }
    *0x22610 = 3;
    fcn.0001c7e4(*0x23d40,iVar4,0x12135);
    iVar4 = CONCAT71(iVar4 >> 8,2);
    fcn.0001c7e4(*0x23d40,iVar4,0x12270);
    iVar4 = CONCAT71(iVar4 >> 8,3);
    fcn.0001c7e4(*0x23d40,iVar4,0x12192);
    iVar4 = CONCAT71(iVar4 >> 8,5);
    fcn.0001c7e4(*0x23d40,iVar4,0x1223e);
    iVar4 = CONCAT71(iVar4 >> 8,6);
    fcn.0001c7e4(*0x23d40,iVar4,0x1214f);
    iVar4 = CONCAT71(iVar4 >> 8,7);
    fcn.0001c7e4(*0x23d40,iVar4,0x1227a);
    iVar4 = CONCAT71(iVar4 >> 8,8);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d68);
    iVar4 = CONCAT71(iVar4 >> 8,9);
    fcn.0001c7e4(*0x23d40,iVar4,0x23db4);
    iVar4 = CONCAT71(iVar4 >> 8,0x16);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d98);
    iVar4 = CONCAT71(iVar4 >> 8,0x80);
    fcn.0001c7e4(*0x23d40,iVar4,0x23dd8);
    iVar4 = CONCAT71(iVar4 >> 8,0x81);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d78);
    iVar4 = CONCAT71(iVar4 >> 8,0x82);
    fcn.0001c7e4(*0x23d40,iVar4,0x23db0);
    iVar4 = CONCAT71(iVar4 >> 8,0x83);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d88);
    iVar4 = CONCAT71(iVar4 >> 8,0x84);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d48);
    iVar4 = CONCAT71(iVar4 >> 8,0x85);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d58);
    iVar4 = CONCAT71(iVar4 >> 8,0x86);
    fcn.0001c7e4(*0x23d40,iVar4,0x23da0);
    iVar4 = CONCAT71(iVar4 >> 8,0x91);
    fcn.0001c7e4(*0x23d40,iVar4,0x23d70);
    iVar4 = CONCAT71(iVar4 >> 8,0x94);
    fcn.0001c7e4(*0x23d40,iVar4,0x22610);
    iVar4 = CONCAT71(iVar4 >> 8,0x95);
    fcn.0001c7e4(*0x23d40,iVar4,0x23a40);
    fcn.0001c7e4(*0x23d40,CONCAT71(iVar4 >> 8,0xd),0x23a38);
    iVar4 = (arg2 & 0xffffffffU) + 0x8000;
    if ((*(*0x23d38 + 0xc) != 0) && (iVar4 != *0x23d40)) {
        fcn.00011710(iVar4,*0x23d40,*(*0x23d38 + 0xc));
    }
    if (*0x23df9 != '\0') {
        fcn.0001a834(arg1,arg2 & 0xffffffffU,*0x1214f,iVar3);
    }
    if (*0x23a60 == '\0') {
        fcn.0001c794();
        *0x23a60 = '\x01';
    }
    return;
}


/* fcn.0001ca90 @ 0x1ca90 */

void fcn.0001ca90(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    uint64_t uVar4;
    
    if (*0x23a84 == 0) {
        *0x1239e = arg1;
        *0x23d22 = fcn.0001a0f4(1);
        if (*0x23d22 != 0) {
            fcn.00011750(*0x23d22,0x130);
            iVar1 = *0x23d22;
            *0x23d20 = 0x12f;
            uVar4 = 0;
            *0x23a84 = 0x23d20;
            do {
                *(iVar1 + 5 + uVar4 * 8) = 0x8e;
                uVar3 = 0x12390;
                if (uVar4 == 0x12) {
                    uVar3 = 0x12393;
                }
                *(iVar1 + uVar4 * 8) = uVar3;
                *(iVar1 + 6 + uVar4 * 8) = uVar3 >> 0x10;
                *(iVar1 + 2 + uVar4 * 8) = 8;
                iVar2 = *0x23d22;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x20);
            *0x23d30 = *(*0x23d22 + 0x126) * 0x10000 + *(*0x23d22 + 0x120);
            *(*0x23d22 + 0x122) = 0x38;
            *(iVar2 + 0x120) = *0x23d30;
            *(iVar2 + 0x124) = 0x8e00;
            *(iVar2 + 0x126) = *0x23d30 >> 0x10;
            iVar1 = *0x23d30;
            *(iVar2 + 300) = 0;
            *(iVar2 + 0x128) = iVar1 >> 0x20;
        }
    }
    return;
}


/* fcn.0001a0f4 @ 0x1a0f4 */

ulong fcn.0001a0f4(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_8 [4];
    
    if (arg1 == 0) {
        auStackX_8[0] = 0;
    }
    else {
        iVar1 = (**(*0x239d0 + 0x60))(0,5,arg1,auStackX_8);
        if (iVar1 < 0) {
            auStackX_8[0] = 0;
        }
    }
    return auStackX_8[0];
}


/* fcn.0001a834 @ 0x1a834 */

void fcn.0001a834(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uchar uVar2;
    int64_t iVar3;
    int in_stack_00000028;
    uint16_t *in_stack_00000038;
    
    if (*0x23df9 != '\0') {
        iVar1 = arg2;
        iVar3 = arg1 * 0x100 + *0x23e00;
        *(iVar3 + 8) = in_stack_00000028 + -1;
        *(iVar3 + 0x10) = 0x10;
        *(iVar3 + 0xc) = arg4 - iVar1;
        *(iVar3 + 0x18) = arg3 - iVar1;
        *(iVar3 + 0x20) = *in_stack_00000038;
        *(iVar3 + 0x24) = *(in_stack_00000038 + 1) - iVar1;
        uVar2 = arg2 >> 0x18;
        *(arg4 + 0x17) = uVar2;
        *(arg4 + 0x1f) = uVar2;
        *(arg4 + 0x12) = arg2;
        uVar2 = arg2 >> 0x10;
        *(arg4 + 0x14) = uVar2;
        *(arg4 + 0x1a) = arg2;
        *(arg4 + 0x1c) = uVar2;
    }
    return;
}


/* fcn.000196c8 @ 0x196c8 */

int64_t fcn.000196c8(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    char cVar3;
    ulong *puVar4;
    uint *puVar5;
    int64_t iVar6;
    
    cVar3 = fcn.00019824();
    if (cVar3 != '\0') {
        puVar5 = 0x229c0;
        iVar6 = 0xb;
        puVar4 = arg1;
        do {
            uVar1 = rdmsr(*puVar5);
            puVar5 = puVar5 + 3;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        uVar2 = rdmsr(0xfe);
        fcn.00019684(0xfe,uVar2 & 0xff,arg1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(arg1 + 600) = uVar1;
    }
    return arg1;
}


/* fcn.00019824 @ 0x19824 */

uint64_t fcn.00019824(void)

{
    ulong uVar1;
    uint64_t uVar2;
    uint32_t uStackX_8;
    
    uVar2 = fcn.000118a0(1,NULL,0,0);
    if ((uStackX_8 & 0x1000) == 0) {
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT71(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.00019684 @ 0x19684 */

int64_t fcn.00019684(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *puVar2;
    int iVar3;
    uint64_t uVar4;
    
    if (arg1 != 0) {
        uVar4 = arg1 & 0xffffffff;
        iVar3 = 0x201;
        puVar2 = arg2;
        do {
            uVar1 = rdmsr(iVar3 + -1);
            *puVar2 = uVar1;
            uVar1 = rdmsr(iVar3);
            iVar3 = iVar3 + 2;
            puVar2[1] = uVar1;
            uVar4 = uVar4 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar4 != 0);
    }
    return arg2;
}


/* fcn.00017cd0 @ 0x17cd0 */

void fcn.00017cd0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    if (*0x24b98 == 0) {
        uVar2 = fcn.00011850();
        *arg1 = uVar2 & 0xffffffffff000;
        if (arg2 != 0) {
            uVar1 = fcn.000118d0();
            *arg2 = uVar1 >> 0xc & 1;
        }
    }
    else {
        *arg1 = *0x24b98;
        if (arg2 != 0) {
            *arg2 = *0x24ab1;
        }
    }
    return;
}


/* fcn.0001543c @ 0x1543c */

uint64_t * fcn.0001543c(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    char acStackX_8 [8];
    uint64_t auStackX_18 [2];
    
    fcn.00017cd0(auStackX_18,acStackX_8);
    if (acStackX_8[0] != '\0') {
        uVar2 = *(auStackX_18[0] + (arg1 >> 0x30 & 0x1ff) * 8);
        if (uVar2 == 0) goto code_r0x000154bb;
        auStackX_18[0] = ~*0x23930 & uVar2 & 0xffffffffff000;
    }
    uVar2 = *(auStackX_18[0] + (arg1 >> 0x27 & 0x1ff) * 8);
    if (uVar2 != 0) {
        uVar3 = ~*0x23930;
        puVar1 = (uVar2 & uVar3 & 0xffffffffff000) + (arg1 >> 0x1e & 0x1ff) * 8;
        uVar2 = *puVar1;
        if (uVar2 != 0) {
            if (uVar2 < '\0') {
                *arg2 = 3;
                return puVar1;
            }
            puVar1 = (uVar2 & uVar3 & 0xffffffffff000) + (arg1 >> 0x15 & 0x1ff) * 8;
            uVar2 = *puVar1;
            if (uVar2 != 0) {
                if (uVar2 < '\0') {
                    *arg2 = 2;
                    return puVar1;
                }
                puVar1 = (uVar2 & uVar3 & 0xffffffffff000) + (arg1 >> 0xc & 0x1ff) * 8;
                if ((*puVar1 != 0) || (arg1 == 0)) {
                    *arg2 = 1;
                    return puVar1;
                }
            }
        }
    }
code_r0x000154bb:
    *arg2 = 0;
    return NULL;
}


/* fcn.0001554c @ 0x1554c */

ulong fcn.0001554c(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    if (arg2 == 2) {
        if (arg3 != 1) {
            return 0x8000000000000003;
        }
        uVar1 = fcn.00018fd4(1);
        uVar3 = *0x23930;
        uVar4 = 0;
        if (uVar1 != 0) {
            uVar5 = *arg1 & 0xfffffffe00000;
            do {
                uVar2 = *arg1 & 0x8000000000000067 | uVar5;
                uVar5 = uVar5 + 0x1000;
                *(uVar1 + uVar4 * 8) = uVar2 | uVar3;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x200);
code_r0x00015634:
            *arg1 = uVar3 | uVar1 | 0x67;
            return 0;
        }
    }
    else {
        if (arg2 != 3) {
            return 0x8000000000000003;
        }
        if (1 < arg3 - 1) {
            return 0x8000000000000003;
        }
        uVar1 = fcn.00018fd4(1);
        uVar3 = *0x23930;
        uVar4 = 0;
        if (uVar1 != 0) {
            uVar5 = *arg1 & 0xfffffc0000000;
            do {
                uVar2 = *arg1 & 0x80000000000000e7 | uVar5;
                uVar5 = uVar5 + 0x200000;
                *(uVar1 + uVar4 * 8) = uVar2 | uVar3 | 0x80;
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x200);
            goto code_r0x00015634;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00011700 @ 0x11700 */

void fcn.00011700(void)

{
    return;
}


/* fcn.00015654 @ 0x15654 */

ulong fcn.00015654(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t *arg1_00;
    uint64_t uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t arg3_00;
    uint32_t auStackX_8 [2];
    uchar *in_stack_00000028;
    uchar *in_stack_00000030;
    
    cVar1 = arg4;
    uVar2 = (1LL << (*0x24e90 & 0x3f)) - 1;
    if (((uVar2 < arg1) || (uVar2 < arg2)) || ((uVar2 - arg2) + 1 < arg1)) {
code_r0x00015827:
        uVar4 = 0x8000000000000003;
    }
    else {
        if (in_stack_00000028 != NULL) {
            *in_stack_00000028 = 0;
        }
        if (in_stack_00000030 != NULL) {
            *in_stack_00000030 = 0;
        }
        do {
            arg1_00 = fcn.0001543c(arg1,auStackX_8);
            if (arg1_00 == NULL) goto code_r0x00015827;
            iVar6 = 0;
            uVar2 = 0;
            do {
                if (auStackX_8[0] == *(uVar2 + 0x22520)) {
                    iVar6 = *(iVar6 * 0x18 + 0x22528);
                    goto code_r0x0001570e;
                }
                iVar6 = iVar6 + 1;
                uVar2 = uVar2 + 0x18;
            } while (uVar2 < 0x48);
            iVar6 = 0;
code_r0x0001570e:
            iVar5 = 0;
            uVar2 = 0;
            do {
                if (auStackX_8[0] == *(uVar2 + 0x22520)) {
                    uVar2 = *(iVar5 * 0x18 + 0x22528);
                    goto code_r0x00015732;
                }
                iVar5 = iVar5 + 1;
                uVar2 = uVar2 + 0x18;
            } while (uVar2 < 0x48);
            uVar2 = 0;
code_r0x00015732:
            if (((arg1 & uVar2 - 1) == 0) && (uVar2 <= arg2)) {
                uVar2 = *arg1_00;
                uVar3 = uVar2;
                if ((arg3 >> 0xd & 1) != 0) {
                    if (cVar1 == '\0') {
                        uVar3 = uVar2 | 1;
                    }
                    else {
                        uVar3 = uVar2 & 0xfffffffffffffffe;
                    }
                }
                if ((arg3 >> 0x11 & 1) != 0) {
                    if (cVar1 == '\0') {
                        uVar3 = uVar3 | 2;
                    }
                    else if (*0x24b98 == 0) {
                        uVar3 = uVar3 & 0xffffffffffffffbd;
                    }
                    else {
                        uVar3 = uVar3 & 0xfffffffffffffff9 | 0x40;
                    }
                }
                if (((arg3 >> 0xe & 1) != 0) && (*0x22568 != '\0')) {
                    if (cVar1 == '\0') {
                        uVar3 = uVar3 & 0x7fffffffffffffff;
                    }
                    else {
                        uVar3 = uVar3 | 0x8000000000000000;
                    }
                }
                *arg1_00 = uVar3;
                if ((uVar2 != uVar3) && (in_stack_00000030 != NULL)) {
                    *in_stack_00000030 = 1;
                }
                arg1 = arg1 + iVar6;
                arg2 = arg2 - iVar6;
            }
            else {
                if (((arg1 & 0x1fffffU) != 0) || (arg3_00 = 2, arg2 < 0x200000)) {
                    arg3_00 = 1;
                }
                iVar6 = fcn.0001554c(arg1_00,auStackX_8[0],arg3_00);
                if (iVar6 < 0) goto code_r0x00015827;
                if (in_stack_00000028 != NULL) {
                    *in_stack_00000028 = 1;
                }
                if (in_stack_00000030 != NULL) {
                    *in_stack_00000030 = 1;
                }
            }
        } while (arg2 != 0);
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00015854 @ 0x15854 */

void fcn.00015854(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uStack_18;
    ulong uStack_10;
    
    fcn.00011700();
    uVar2 = 0;
    iVar1 = *0x239d0;
    if (*(*0x239d0 + 0x80) != 0) {
        do {
            if (uVar2 != *(iVar1 + 0x78)) {
                uStack_10 = 0;
                uStack_18 = 0x1584c;
                fcn.0001469c(0x14a8c,uVar2,&uStack_18,0);
                iVar1 = *0x239d0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < *(iVar1 + 0x80));
    }
    return;
}


/* fcn.000158c8 @ 0x158c8 */

int64_t fcn.000158c8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    int64_t extraout_RAX;
    int64_t iVar1;
    char cStackX_10;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.00015654(arg1,arg2,arg3,CONCAT71(arg4 >> 8,1));
        iVar1 = extraout_RAX;
        if ((-1 < extraout_RAX) && (cStackX_10 != '\0')) {
            fcn.00015854();
        }
    }
    return iVar1;
}


/* fcn.00015914 @ 0x15914 */

int64_t fcn.00015914(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cStackX_10;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.00015654(arg1,arg2,arg3,0);
        if ((-1 < iVar1) && (cStackX_10 != '\0')) {
            fcn.00015854();
        }
    }
    return iVar1;
}


/* fcn.00015960 @ 0x15960 */

int64_t fcn.00015960(void)

{
    int iVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    char unaff_BPL;
    int64_t iVar6;
    uint64_t uVar7;
    
    uVar7 = 0;
    iVar1 = 0;
    if (*0x23a11 == '\0') {
        uVar4 = *0x12310;
    }
    else {
        uVar4 = *(*0x23d38 + 0xc);
    }
    uVar2 = uVar4;
    if (uVar2 == 0) {
        uVar2 = *0x11531;
    }
    iVar5 = uVar2 + (-uVar2 & 0xfff);
    uVar2 = iVar5 + 0xfff;
    if (uVar2 != 0) {
        uVar3 = 0x1f;
        for (; 0 < uVar2; uVar2 = uVar2 * 2) {
            uVar3 = uVar3 - 1;
        }
        iVar1 = 1 << (uVar3 & 0x1f);
    }
    if (*0x22450 != 1) {
        iVar6 = iVar1 * 2 - iVar5;
        do {
            fcn.000158c8(*(*0x22430 + uVar7 * 8) + 0x8000,iVar5,0x20000,NULL);
            fcn.00015914(*(*0x22430 + uVar7 * 8) + 0x8000,iVar5,0x4000);
            fcn.00015914(*(*0x22430 + uVar7 * 8) + 0x8000 + iVar5,iVar6,0x20000);
            fcn.000158c8(*(*0x22430 + uVar7 * 8) + 0x8000 + iVar5,iVar6,0x4000,NULL);
            uVar7 = uVar7 + 1;
        } while (uVar7 < *0x22450 - 1U);
    }
    fcn.000158c8(*(*0x22430 + -8 + *0x22450 * 8) + 0x8000,iVar5,0x20000,NULL);
    fcn.00015914(*(*0x22430 + -8 + *0x22450 * 8) + 0x8000,iVar5,0x4000);
    iVar6 = 0x8000 - iVar5;
    fcn.00015914(*(*0x22430 + -8 + *0x22450 * 8) + 0x8000 + iVar5,iVar6,0x20000);
    if (iVar6 == 0) {
        iVar5 = -0x7ffffffffffffffe;
    }
    else {
        iVar5 = fcn.00015654(*(*0x22430 + -8 + *0x22450 * 8) + 0x8000 + iVar5,iVar6,0x4000,1);
        if ((-1 < iVar5) && (unaff_BPL != '\0')) {
            fcn.00015854();
        }
    }
    return iVar5;
}


/* fcn.00018e98 @ 0x18e98 */

int64_t fcn.00018e98(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x24e88 != (*0x24e88 & 0xffffffff)) {
        uVar2 = *0x24e88 >> 0x20;
        if (*0x24e88 >> 0x20 == 0) {
            iVar1 = -1;
        }
        else {
            iVar1 = 0x1f;
            for (; 0 < uVar2; uVar2 = uVar2 * 2) {
                iVar1 = iVar1 + -1;
            }
        }
        return iVar1 + 0x20;
    }
    if (*0x24e88 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (uVar2 = *0x24e88; 0 < uVar2; uVar2 = uVar2 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.000163cc @ 0x163cc */

ulong fcn.000163cc(int64_t arg1,uint32_t *arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    
    *arg2 = 1;
    if ((arg1 < *0x2243c) || (*0x22440 + *0x2243c <= arg1)) {
        uVar2 = 0;
        if (*0x24ea0 != 0) {
            puVar1 = *0x24eb8 + 8;
            do {
                if ((*puVar1 <= arg1) && (arg1 < *puVar1 + puVar1[1])) goto code_r0x00016426;
                uVar2 = uVar2 + 1;
                puVar1 = puVar1 + 4;
            } while (uVar2 < *0x24ea0);
        }
    }
    else {
code_r0x00016426:
        *arg2 = 0;
    }
    return 1;
}


/* fcn.00011960 @ 0x11960 */

uint64_t fcn.00011960(void)

{
    uint64_t in_CR0;
    
    return in_CR0 & 0xffffffffdfffffff | 0x40000000;
}


/* fcn.00011940 @ 0x11940 */

uint64_t fcn.00011940(void)

{
    uint64_t in_CR0;
    
    return in_CR0 & 0xffffffff9fffffff;
}


/* fcn.00011980 @ 0x11980 */

int64_t fcn.00011980(int64_t arg1)

{
    return arg1;
}


/* fcn.00011990 @ 0x11990 */

int64_t fcn.00011990(int64_t arg1)

{
    return arg1;
}


/* fcn.00011930 @ 0x11930 */

int64_t fcn.00011930(int64_t arg1)

{
    return arg1;
}


/* fcn.00016914 @ 0x16914 */

void fcn.00016914(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint in_register_0000000c;
    uint32_t *puVar7;
    int *piVar8;
    uint64_t *puVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uint32_t *puVar12;
    uint64_t uVar13;
    bool bVar14;
    
    puVar7 = CONCAT44(in_register_0000000c,arg1);
    uVar13 = 0;
    if (*puVar7 != 0) {
        puVar9 = *(puVar7 + 4) + 0x10;
        do {
            iVar4 = *0x24af0;
            iVar3 = *0x24ae8;
            iVar2 = puVar9[-2];
            if (iVar2 == 0) {
                if (*(puVar9 + -6) != '\0') {
                    uVar5 = rdmsr(*(puVar9 + -0xc));
                    if (*(puVar9 + -7) < 0x40) {
                        bVar14 = (~(-2LL << (*(puVar9 + -7) + -1 + puVar9[-1] & 0x3f)) & uVar5) >> (puVar9[-1] & 0x3f)
                                 == *puVar9;
                    }
                    else {
                        bVar14 = uVar5 == *puVar9;
                    }
                    if (bVar14) goto code_r0x00016a87;
                }
                if (*(puVar9 + -7) < 0x40) {
                    uVar1 = puVar9[-1];
                    uVar5 = rdmsr(*(puVar9 + -0xc));
                    uVar11 = ~(-2LL << (*(puVar9 + -7) + -1 + uVar1 & 0x3f));
                    uVar5 = ~(-1LL << (uVar1 & 0x3f) & uVar11) & uVar5 | *puVar9 << (uVar1 & 0x3f) & uVar11;
                }
                else {
                    uVar5 = *puVar9;
                }
                wrmsr(*(puVar9 + -0xc),uVar5);
            }
            else if (iVar2 == 1) {
                iVar2 = *(puVar9 + -0xc);
                if (iVar2 == 0) {
                    uVar5 = fcn.00011840();
                }
                else if (iVar2 == 2) {
                    uVar5 = fcn.00011920();
                }
                else if (iVar2 == 3) {
                    uVar5 = fcn.00011850();
                }
                else {
                    if (iVar2 != 4) goto code_r0x00016a87;
                    uVar5 = fcn.000118d0();
                }
                if ((*(puVar9 + -6) == '\0') ||
                   ((~(-2LL << (*(puVar9 + -7) + -1 + puVar9[-1] & 0x3f)) & uVar5) >> (puVar9[-1] & 0x3f) != *puVar9)) {
                    uVar1 = puVar9[-1];
                    uVar11 = ~(-2LL << (*(puVar9 + -7) + -1 + uVar1 & 0x3f));
                    iVar2 = *(puVar9 + -0xc);
                    uVar5 = ~(-1LL << (uVar1 & 0x3f) & uVar11) & uVar5 | *puVar9 << (uVar1 & 0x3f) & uVar11;
                    if (iVar2 == 0) {
                        fcn.00011930(uVar5);
                    }
                    else if (iVar2 == 2) {
                        fcn.000119a0(uVar5);
                    }
                    else if (iVar2 == 3) {
                        fcn.00011990(uVar5);
                    }
                    else if (iVar2 == 4) {
                        fcn.00011980(uVar5);
                    }
                }
            }
            else if (iVar2 == 2) {
                fcn.00018e10(0x24ae0);
                uVar1 = puVar9[-1];
                uVar6 = ~(-2LL << (*(puVar9 + -7) + -1 + uVar1 & 0x3f));
                puVar12 = CONCAT44(*(puVar9 + -4),*(puVar9 + -0xc));
                *puVar12 = ~(-1LL << (uVar1 & 0x3f) & uVar6) & *puVar12 | *puVar9 << (uVar1 & 0x3f) & uVar6;
                *0x24ae0 = 1;
            }
            else if (iVar2 == 3) {
                if (*puVar9 == 0) {
                    fcn.00011960();
                }
                else {
                    fcn.00011940();
                }
            }
            else if (iVar2 == 4) {
                if (*puVar9 == 2) {
                    uVar11 = 0;
                    iVar4 = *(arg3 + 0x18);
                    uVar6 = *(arg3 + 4) * *arg2 + *(arg2 + 4);
                    uVar10 = *(arg3 + 8) * uVar6;
                    uVar5 = *(arg2 + 8) + uVar10;
                    if (*(arg3 + 8) != 0) {
                        piVar8 = *0x24ae8 + uVar10 * 4;
                        do {
                            LOCK();
                            *piVar8 = *piVar8 + 1;
                            UNLOCK();
                            piVar8 = piVar8 + 1;
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < *(arg3 + 8));
                    }
                    uVar11 = 0;
                    if (*(uVar6 + iVar4) != '\0') {
                        do {
                            do {
                                iVar2 = *(iVar3 + uVar5 * 4);
                            } while (iVar2 == 0);
                            piVar8 = iVar3 + uVar5 * 4;
                            LOCK();
                            bVar14 = iVar2 == *piVar8;
                            if (bVar14) {
                                *piVar8 = iVar2 + -1;
                            }
                            UNLOCK();
                        } while ((!bVar14) || (uVar11 = uVar11 + 1, uVar11 < *(uVar6 + iVar4)));
                    }
                }
                else if (*puVar9 == 3) {
                    uVar6 = *(arg3 + 8);
                    uVar11 = 0;
                    iVar3 = *(arg3 + 0x10);
                    uVar10 = *(arg3 + 4) * uVar6 * *arg2;
                    uVar5 = *(arg2 + 4) * uVar6 + *(arg2 + 8) + uVar10;
                    if (*(arg3 + 4) * uVar6 != 0) {
                        piVar8 = *0x24af0 + uVar10 * 4;
                        do {
                            LOCK();
                            *piVar8 = *piVar8 + 1;
                            UNLOCK();
                            piVar8 = piVar8 + 1;
                            uVar11 = uVar11 + 1;
                        } while (uVar11 < *(arg3 + 4) * *(arg3 + 8));
                    }
                    uVar11 = 0;
                    if (*(iVar3 + *arg2 * 4) != 0) {
                        do {
                            do {
                                iVar2 = *(iVar4 + uVar5 * 4);
                            } while (iVar2 == 0);
                            piVar8 = iVar4 + uVar5 * 4;
                            LOCK();
                            bVar14 = iVar2 == *piVar8;
                            if (bVar14) {
                                *piVar8 = iVar2 + -1;
                            }
                            UNLOCK();
                        } while ((!bVar14) || (uVar11 = uVar11 + 1, uVar11 < *(iVar3 + *arg2 * 4)));
                    }
                }
            }
code_r0x00016a87:
            uVar13 = uVar13 + 1;
            puVar9 = puVar9 + 3;
        } while (uVar13 < *puVar7);
    }
    return;
}


/* fcn.00019740 @ 0x19740 */

int64_t fcn.00019740(int64_t arg1)

{
    int iVar1;
    char cVar2;
    uint64_t uVar3;
    uint *puVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iStack_18;
    char cStack_10;
    
    cVar2 = fcn.00019824();
    if (cVar2 != '\0') {
        fcn.0001960c(&iStack_18);
        puVar4 = 0x229c0;
        iVar6 = 0xb;
        puVar5 = arg1;
        do {
            wrmsr(*puVar4,*puVar5);
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 3;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        puVar5 = arg1 + 0x58;
        uVar3 = rdmsr(0xfe);
        uVar7 = uVar3 & 0xff;
        if (uVar3 != '\0') {
            puVar4 = 0x201;
            do {
                iVar1 = puVar4;
                wrmsr(iVar1 + -1,*puVar5);
                wrmsr(iVar1,puVar5[1]);
                puVar4 = iVar1 + 2;
                puVar5 = puVar5 + 2;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        uVar3 = *(arg1 + 600) >> 0x20;
        wrmsr(0x2ff,uVar3 << 0x20 | *(arg1 + 600) & 0xffffffff);
        fcn.00011700(0x2ff,uVar3,puVar4);
        fcn.00011940();
        fcn.00011980(iStack_18);
        if (cStack_10 == '\0') {
            fcn.00011a90();
        }
        else {
            fcn.00011a80();
        }
    }
    return arg1;
}


/* fcn.00016cd0 @ 0x16cd0 */

void fcn.00016cd0(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    int64_t arg2;
    int64_t iVar3;
    
    iVar3 = *0x24b48;
    if (arg1 != '\0') {
        iVar3 = *0x24b40;
    }
    if (iVar3 != 0) {
        iVar1 = fcn.000194dc();
        uVar2 = 0;
        if (*0x24b24 != 0) {
            while (*(iVar3 + 0xc) != iVar1) {
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x18;
                if (*0x24b24 <= uVar2) {
                    return;
                }
            }
            if (iVar3 != 0) {
                arg2 = *0x24b70;
                if (*0x24b70 != 0) {
                    arg2 = *0x24b70 + uVar2 * 0xc;
                }
                fcn.00016914(iVar3,arg2,0x24b50);
            }
        }
    }
    return;
}


/* fcn.000195a4 @ 0x195a4 */

uint64_t fcn.000195a4(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    uVar1 = fcn.00019378(0xf0);
    fcn.000193b0(0xf0,uVar1 & 0xffffff0f | 0x10f);
    uVar1 = fcn.00019378(0x350);
    fcn.000193b0(0x350,uVar1 & 0xfffe5fff | 0x700);
    uVar1 = fcn.00019378(0x360);
    uVar1 = uVar1 & 0xfffe5cff | 0x400;
    uVar3 = uVar1;
    iVar2 = fcn.000194a4();
    if (iVar2 == 1) {
        uVar3 = fcn.0001933c();
        *(uVar3 + 0x360) = uVar1;
    }
    else {
        wrmsr(0x836,uVar1);
    }
    return uVar3;
}


/* fcn.000193b0 @ 0x193b0 */

uint64_t fcn.000193b0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg2 & 0xffffffff;
    iVar1 = fcn.000194a4();
    if (iVar1 == 1) {
        uVar2 = fcn.0001933c();
        *(uVar2 + arg1) = arg2;
    }
    else {
        wrmsr((arg1 >> 4) + 0x800,uVar2);
    }
    return uVar2;
}


/* fcn.00011b30 @ 0x11b30 */

void fcn.00011b30(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = GlobalDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00011ab0 @ 0x11ab0 */

int fcn.00011ab0(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar *puVar2;
    uchar *puVar3;
    uint32_t in_stack_00000028;
    
    puVar2 = 0x11aea;
    puVar3 = in_stack_00000028 - 0x28;
    for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }
    return (in_stack_00000028 - 0x28) + -4;
}


/* fcn.0001169d @ 0x1169d */

void fcn.0001169d(int64_t arg1)

{
    *arg1 = 0x115a0;
    *(arg1 + 8) = 0x41;
    *(arg1 + 0x10) = 0x38;
    *(arg1 + 0x18) = 0xfd;
    *(arg1 + 0x20) = 0x82;
    *(arg1 + 0x28) = 0x7a;
    return;
}


/* fcn.00019224 @ 0x19224 */

int64_t fcn.00019224(int64_t arg1,int64_t arg2)

{
    fcn.000191c4((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000191c4 @ 0x191c4 */

void fcn.000191c4(int64_t arg1)

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
            fcn.00011860();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00016e8c @ 0x16e8c */

void fcn.00016e8c(void)

{
    char cVar1;
    uint uVar2;
    int64_t iVar3;
    int64_t arg2;
    uint32_t uVar4;
    int64_t iStack_38;
    int iStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    int iStack_18;
    int64_t iStack_10;
    
    iVar3 = *0x24b28;
    fcn.00019740(*0x24b28);
    fcn.00016cd0(CONCAT71(iVar3 >> 8,1));
    fcn.000195a4();
    uVar4 = *0x24b00;
    iVar3 = CONCAT44(*0x24b04,*0x24b00);
    fcn.00011750(&iStack_38,0x30);
    fcn.0001169d(&iStack_38);
    if ((iStack_20 != 0) && (iVar3 != iStack_38)) {
        fcn.00011710(iVar3,iStack_38,iStack_20);
    }
    *(iStack_28 + 3 + iVar3) = iStack_30 + uVar4;
    if (iStack_10 != 0) {
        *(iStack_10 + 2 + iVar3) = iStack_18 + uVar4;
    }
    *0x24b80 = iStack_20 + iVar3;
    fcn.00011750(*0x24b80,0x44);
    if (*0x24b80 + 0x20 != *0x24b08) {
        fcn.00011710(*0x24b80 + 0x20,*0x24b08,10);
    }
    if (*0x24b80 + 0x2a != *0x24b10) {
        fcn.00011710(*0x24b80 + 0x2a,*0x24b10,10);
    }
    iVar3 = *0x24b80;
    *(*0x24b80 + 8) = *0x24b18;
    *(iVar3 + 0x10) = *0x24b20;
    *(iVar3 + 0x34) = uVar4;
    uVar2 = fcn.00011850();
    iVar3 = *0x24b80;
    arg2 = 0;
    *(*0x24b80 + 0x38) = uVar2;
    *(iVar3 + 0x3c) = 0x11b50;
    *0x24af8 = *0x22448 + -1;
    *(iVar3 + 0x18) = 0x16d44;
    uVar4 = *0x24b00;
    *0x24b78 = 0;
    fcn.000193f8(0xc4500,0);
    fcn.00019224(10000,arg2);
    iVar3 = 0;
    uVar4 = (uVar4 & 0xff000 | 0xc4600fff) >> 0xc;
    fcn.000193f8(uVar4,0);
    cVar1 = fcn.00019258();
    if (cVar1 == '\0') {
        fcn.00019224(200,iVar3);
        fcn.000193f8(uVar4,0);
    }
    while (*0x24af8 != 0) {
        fcn.00011860();
    }
    return;
}


/* fcn.00018ee4 @ 0x18ee4 */

void fcn.00018ee4(int64_t arg1)

{
    int64_t in_RCX;
    int64_t in_RDX;
    int64_t in_R8;
    
    fcn.00011b20(in_RCX,in_RDX,in_R8,arg1);
    return;
}


/* fcn.00011b20 @ 0x11b20 */

void fcn.00011b20(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    
    *(arg4 + -0x28) = 0x11b2f;
    (*arg1)(arg2,arg3);
    pcVar1 = swi(3);
    (*pcVar1)();
    return;
}


/* fcn.0001715c @ 0x1715c */

void fcn.0001715c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar5 = arg3 & 0xffffffff;
    if ((uVar5 * 3 != 0) && (iVar4 != arg2)) {
        fcn.00011710(iVar4,arg2,uVar5 * 0x18);
    }
    if (uVar5 != 0) {
        piVar6 = arg2 + 0x10;
        iVar4 = iVar4 - arg2;
        do {
            iVar1 = *(iVar4 + -0x10 + piVar6);
            if (iVar1 != 0) {
                uVar3 = iVar1 * 0x18;
                *(iVar4 + -8 + piVar6) = uVar3;
                uVar2 = fcn.00019070(uVar3,*piVar6);
                *(iVar4 + piVar6) = uVar2;
            }
            piVar6 = piVar6 + 3;
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    return;
}


/* fcn.000171dc @ 0x171dc */

void fcn.000171dc(int64_t arg1,int64_t arg2)

{
    uint32_t *arg1_00;
    int *piVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    piVar1 = *arg2;
    if (piVar1 != NULL) {
        uVar4 = *0x24b24;
        uVar3 = 0;
        if (uVar4 != 0) {
            do {
                if (*piVar1 != 0) {
                    uVar2 = fcn.00019014(arg1,uVar4 * 0x18);
                    *arg1 = uVar2;
                    fcn.0001715c(uVar2,*arg2,*0x24b24);
                    break;
                }
                uVar3 = uVar3 + 1;
                piVar1 = piVar1 + 6;
            } while (uVar3 < uVar4);
        }
    }
    piVar1 = *(arg2 + 8);
    if (piVar1 != NULL) {
        uVar3 = *0x24b24;
        uVar4 = 0;
        if (uVar3 != 0) {
            do {
                if (*piVar1 != 0) {
                    uVar2 = fcn.00019014(uVar3,uVar3 * 0x18);
                    *(arg1 + 8) = uVar2;
                    fcn.0001715c(uVar2,*(arg2 + 8),*0x24b24);
                    break;
                }
                uVar4 = uVar4 + 1;
                piVar1 = piVar1 + 6;
            } while (uVar4 < uVar3);
        }
    }
    arg1_00 = arg1 + 0x10;
    if (arg1_00 != arg2 + 0x10) {
        fcn.00011710(arg1_00,arg2 + 0x10,0x20);
    }
    if (*(arg2 + 0x20) != 0) {
        uVar2 = fcn.00019070(*arg1_00 << 2,*(arg2 + 0x20));
        *(arg1 + 0x20) = uVar2;
    }
    if (*(arg2 + 0x28) != 0) {
        uVar2 = fcn.00019070(*(arg1 + 0x14) * *arg1_00,*(arg2 + 0x28));
        *(arg1 + 0x28) = uVar2;
    }
    if (*(arg2 + 0x30) != 0) {
        uVar2 = fcn.00019070(*0x24b24 * 0xc,*(arg2 + 0x30));
        *(arg1 + 0x30) = uVar2;
    }
    return;
}


/* fcn.000176b4 @ 0x176b4 */

ulong fcn.000176b4(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t arg2_00;
    int64_t arg3_00;
    
    iVar2 = *(*(*0x239d0 + 0x90) + noname_0 * 8);
    if (*0x24aca == ' ') {
        uVar1 = *(arg1 * 10 + 0x227d0);
        if (uVar1 == 0) {
            return 0x800000000000000e;
        }
        if (uVar1 < arg2) {
            return 0x8000000000000002;
        }
        iVar2 = *(arg1 * 10 + 0x227d2) + iVar2;
        if (arg2 == 0) {
            return 0;
        }
        if (arg3 == iVar2) {
            return 0;
        }
    }
    else {
        uVar1 = *(arg1 * 10 + 0x227d1);
        if (uVar1 == 0) {
            return 0x800000000000000e;
        }
        if (uVar1 < arg2) {
            return 0x8000000000000002;
        }
        arg3_00 = arg2;
        if (4 < arg2) {
            arg3_00 = 4;
        }
        arg2_00 = *(arg1 * 10 + 0x227d4) + iVar2;
        if ((arg3_00 != 0) && (arg3 != arg2_00)) {
            fcn.00011710(arg3,arg2_00,arg3_00);
        }
        if (arg2 < 5) {
            return 0;
        }
        arg2 = arg2 + -4;
        iVar2 = *(arg1 * 10 + 0x227d6) + iVar2;
        arg3 = arg3 + 4;
        if (arg2 == 0) {
            return 0;
        }
        if (arg3 == iVar2) {
            return 0;
        }
    }
    fcn.00011710(arg3,iVar2,arg2);
    return 0;
}


/* fcn.00017bb8 @ 0x17bb8 */

ulong fcn.00017bb8(ulong noname_0,uint32_t arg1)

{
    ulong *puVar1;
    uint in_register_00000014;
    ulong uVar2;
    bool bVar3;
    
    uVar2 = 0;
    if (CONCAT44(in_register_00000014,arg1) == 0) {
        return 0x8000000000000002;
    }
    puVar1 = *(*0x22460 + 0x88);
    while( true ) {
        if (puVar1 == *(*0x22460 + 0x98)) {
            return 0x800000000000000e;
        }
        if (puVar1[2] == CONCAT44(in_register_00000014,arg1)) break;
        puVar1 = *puVar1;
    }
    LOCK();
    bVar3 = *CONCAT44(in_register_00000014,arg1) == 1;
    if (bVar3) {
        *CONCAT44(in_register_00000014,arg1) = 2;
    }
    UNLOCK();
    if (bVar3) {
        *CONCAT44(in_register_00000014,arg1) = 1;
    }
    else {
        uVar2 = 0x8000000000000006;
    }
    return uVar2;
}


/* fcn.00017d30 @ 0x17d30 */

void fcn.00017d30(int64_t arg1)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    char cVar5;
    uint64_t *puVar6;
    uint64_t *arg1_00;
    uint64_t uVar7;
    uint64_t *arg1_01;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uStackX_8;
    int64_t iStackX_18;
    
    uVar2 = *0x24e90;
    if ((*0x24ab1 == '\0') && (0x30 < *0x24e90)) {
        uVar2 = 0x30;
    }
    iStackX_18 = 1;
    if (0x30 < uVar2) {
        iStackX_18 = 1LL << (uVar2 - 0x30 & 0x3f);
        uVar2 = 0x30;
    }
    uVar10 = 1;
    if (0x27 < uVar2) {
        uVar10 = 1LL << (uVar2 - 0x27 & 0x3f);
        uVar2 = 0x27;
    }
    puVar6 = NULL;
    if (*0x24ab1 != '\0') {
        puVar6 = arg1;
    }
    uStackX_8 = 0;
    if (iStackX_18 != 0) {
        uVar7 = 0x200;
        if (iStackX_18 == 1) {
            uVar7 = uVar10;
        }
        uVar8 = *0x23930;
        cVar5 = *0x24ab1;
        do {
            if ((cVar5 != '\0') && (arg1 = ~uVar8 & *0x24e88 & *puVar6, arg1 == NULL)) {
                arg1 = fcn.00018fd4(1);
                fcn.00011750(arg1,0x1000);
                cVar5 = *0x24ab1;
                uVar8 = *0x23930;
                *puVar6 = *0x23930 | arg1 | 0x67;
            }
            uVar9 = 0;
            if (uVar7 != 0) {
                do {
                    arg1_00 = ~uVar8 & *arg1 & *0x24e88;
                    if (arg1_00 == NULL) {
                        arg1_00 = fcn.00018fd4(1);
                        fcn.00011750(arg1_00,0x1000);
                        uVar8 = *0x23930;
                        *arg1 = *0x23930 | arg1_00 | 0x67;
                    }
                    if (*0x239a8 == '\0') {
                        uVar3 = 0x100000000;
                        uVar12 = 0x200;
                        if (uVar10 == 1) {
                            uVar12 = 1LL << (uVar2 - 0x1e & 0x3f);
                        }
                        uStackX_8 = 0x100000000;
                        uVar11 = 0;
                        if (uVar12 != 0) {
                            do {
                                if ((uVar9 != 0) || (3 < uVar11)) {
                                    arg1_01 = ~uVar8 & *arg1_00 & *0x24e88;
                                    if (arg1_01 == NULL) {
                                        arg1_01 = fcn.00018fd4(1);
                                        fcn.00011750(arg1_01,0x1000);
                                        uVar8 = *0x23930;
                                        *arg1_00 = *0x23930 | arg1_01 | 0x67;
                                        uVar3 = uStackX_8;
                                    }
                                    iVar4 = 0x200;
                                    do {
                                        uVar1 = uVar8 | uVar3;
                                        uVar3 = uVar3 + 0x200000;
                                        *arg1_01 = uVar1 | 0xe7;
                                        arg1_01 = arg1_01 + 1;
                                        iVar4 = iVar4 + -1;
                                    } while (iVar4 != 0);
                                    uStackX_8 = uVar3;
                                }
                                uVar11 = uVar11 + 1;
                                arg1_00 = arg1_00 + 1;
                            } while (uVar11 < uVar12);
                        }
                    }
                    else {
                        uVar3 = 0;
                        do {
                            if ((uVar9 != 0) || (3 < uVar3)) {
                                *arg1_00 = uVar8 | uStackX_8 | 0xe7;
                            }
                            arg1_00 = arg1_00 + 1;
                            uStackX_8 = uStackX_8 + 0x40000000;
                            uVar3 = uVar3 + 1;
                        } while (uVar3 < 0x200);
                    }
                    uVar9 = uVar9 + 1;
                    arg1 = arg1 + 8;
                } while (uVar9 < uVar7);
                cVar5 = *0x24ab1;
            }
            puVar6 = puVar6 + 1;
            iStackX_18 = iStackX_18 + -1;
        } while (iStackX_18 != 0);
    }
    return;
}


/* fcn.0001764c @ 0x1764c */

ulong fcn.0001764c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (((arg2 < 0) || (*0x23e60 <= arg2)) || (*(arg2 * 0x58 + 0xc + *0x23e70) == 0)) {
        uVar1 = 0x8000000000000003;
    }
    else {
        if (arg3 == 0) {
            if (*(*0x23e78 + arg2 * 8) == 0) {
                return 0x8000000000000002;
            }
        }
        else if (*(*0x23e78 + arg2 * 8) != 0) {
            return 0x8000000000000014;
        }
        *(*0x23e78 + arg2 * 8) = arg3;
    }
    return uVar1;
}


/* fcn.000182a8 @ 0x182a8 */

uint32_t fcn.000182a8(int64_t arg1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    
    uVar1 = *arg1;
    uVar2 = uVar1 >> 9 & 7;
    if ((uVar1 & 0x20) != 0) {
        *arg1 = uVar1 & 0xffffffffffffffdf | 0xe00;
        return 0xf;
    }
    if ((uVar1 >> 9 & 7) != 0) {
        *arg1 = ((uVar2 - 1) * 0x200 ^ uVar1) & 0xe00 ^ uVar1;
    }
    return uVar2;
}


/* fcn.000182f0 @ 0x182f0 */

void fcn.000182f0(uint32_t arg1)

{
    bool bVar1;
    bool bVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    ulong *puVar9;
    uint64_t *arg1_00;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t *puVar13;
    uint64_t uVar14;
    uint64_t *arg1_01;
    uint64_t *puVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uStackX_10;
    uint64_t *puStackX_18;
    uint64_t uStack_b8;
    uint64_t uStack_98;
    uint64_t uStack_78;
    uint64_t uStack_70;
    uint64_t uStack_68;
    uint64_t *puStack_60;
    uint64_t uStack_58;
    
    puVar13 = NULL;
    uStackX_10 = 0xffffffffffffffff;
    uVar11 = 0xffffffffffffffff;
    uStack_98 = 0xffffffffffffffff;
    uVar12 = 0xffffffffffffffff;
    uStack_b8 = 0xffffffffffffffff;
    puStackX_18 = NULL;
    uVar4 = fcn.00011920();
    uVar5 = uVar4 >> 0x27 & 0x1ff;
    uVar16 = uVar4 >> 0x30 & 0x1ff;
    uVar6 = uVar4 >> 0x1e & 0x1ff;
    uStack_68 = uVar4 >> 0x15 & 0x1ff;
    uVar4 = fcn.000118d0();
    uVar7 = fcn.00011850();
    puVar15 = uVar7 & *0x24e88;
    if ((uVar4 >> 0xc & 1) == 0) {
        uStack_78 = puVar15 | 1;
        puVar15 = &uStack_78;
    }
    uStack_70 = 0x4000000000000001;
    uStack_58 = (-((uVar4 >> 0xc & 1) != 0) & 0x1ff) + 1;
    uVar14 = 0;
    puStack_60 = NULL;
    uVar4 = uVar5;
    uVar7 = *0x24e88;
    do {
        if ((puVar15[uVar14] & 0x4000000000000001) == 1) {
            arg1_00 = puVar15[uVar14] & uVar7;
            puStack_60 = arg1_00;
            uVar10 = 0;
            do {
                if ((*arg1_00 & 0x4000000000000001) == 1) {
                    bVar2 = false;
                    uVar4 = ~*0x23930;
                    arg1_01 = *arg1_00 & uVar4 & uVar7;
                    uVar17 = 0;
                    do {
                        uVar8 = *arg1_01;
                        if ((uVar8 & uStack_70) == 1) {
                            if (-1 < uVar8) {
                                puVar13 = uVar8 & uVar4 & uVar7;
                                bVar1 = false;
                                uVar7 = 0;
                                do {
                                    if ((*puVar13 & 0x4000000000000001) == 1) {
                                        if ((*puVar13 & 0x80) == 0) {
                                            bVar1 = true;
                                            if (((uVar7 == uStack_68) && (uVar17 == uVar6)) && (uVar10 == uVar5)) {
                                                if (uVar14 == uVar16) goto code_r0x0001850e;
                                            }
                                            uVar8 = fcn.000182a8(puVar13);
                                            if (uVar8 < uStackX_10) {
                                                uVar11 = uVar10;
                                                uVar12 = uVar17;
                                                uStackX_10 = uVar8;
                                                puStackX_18 = puVar13;
                                                uStack_b8 = uVar7;
                                                uStack_98 = uVar14;
                                            }
                                        }
                                    }
                                    else if ((*puVar13 & 0x4000000000000000) != 0) {
                                        bVar1 = true;
                                    }
code_r0x0001850e:
                                    uVar7 = uVar7 + 1;
                                    puVar13 = puVar13 + 1;
                                } while (uVar7 < 0x200);
                                bVar2 = true;
                                if ((bVar1) ||
                                   ((((uVar17 == uVar6 && (uVar10 == uVar5)) && (uVar14 == uVar16)) ||
                                    (uVar8 = fcn.000182a8(arg1_01), uStackX_10 <= uVar8)))) {
                                    puVar13 = puStackX_18;
                                    uVar7 = *0x24e88;
                                }
                                else {
                                    uStack_b8 = 0xffffffffffffffff;
                                    uVar11 = uVar10;
                                    uVar12 = uVar17;
                                    puVar13 = arg1_01;
                                    uVar7 = *0x24e88;
                                    uStackX_10 = uVar8;
                                    puStackX_18 = arg1_01;
                                    uStack_98 = uVar14;
                                }
                            }
                        }
                        else if ((uVar8 & 0x4000000000000000) != 0) {
                            bVar2 = true;
                        }
                        arg1_01 = arg1_01 + 1;
                        uVar17 = uVar17 + 1;
                    } while (uVar17 < 0x200);
                    uVar4 = uVar5;
                    if ((!bVar2) && ((uVar10 != uVar5 || (uVar14 != uVar16)))) {
                        uVar17 = fcn.000182a8(arg1_00);
                        if (uVar17 < uStackX_10) {
                            uVar12 = 0xffffffffffffffff;
                            uStack_b8 = 0xffffffffffffffff;
                            uVar11 = uVar10;
                            puVar13 = arg1_00;
                            uStackX_10 = uVar17;
                            puStackX_18 = arg1_00;
                            uStack_98 = uVar14;
                        }
                    }
                }
                arg1_00 = arg1_00 + 1;
                uVar10 = uVar10 + 1;
            } while (uVar10 < 0x200);
        }
        uVar14 = uVar14 + 1;
        if (uStack_58 <= uVar14) {
            if (puVar13 != NULL) {
                puVar9 = ~*0x23930 & *puVar13 & uVar7;
                *puVar9 = 0x225e8;
                puVar9[1] = *0x225f0;
                **0x225f0 = puVar9;
                *0x225f0 = puVar9;
                *puVar13 = 0;
            }
            while( true ) {
                while (uStack_b8 != 0xffffffffffffffff) {
                    puStack_60 = puVar15[uStack_98] & uVar7;
                    uVar14 = puStack_60[uVar11] & ~*0x23930 & uVar7;
                    uVar5 = *(uVar14 + uVar12 * 8);
                    uVar3 = uVar5 >> 0x34 & 0x1ff;
                    if ((uVar3 != 0) || (((uVar12 == uVar6 && (uVar11 == uVar4)) && (uStack_98 == uVar16)))) {
                        puVar15 = uVar14 + uVar12 * 8;
                        *puVar15 = *puVar15 & 0xe00fffffffffffff;
                        puVar15 = uVar14 + uVar12 * 8;
                        *puVar15 = *puVar15 | (uVar3 - 1 & 0x1ff) << 0x34;
                        return;
                    }
                    puVar9 = uVar5 & ~*0x23930 & uVar7;
                    *puVar9 = 0x225e8;
                    puVar9[1] = *0x225f0;
                    **0x225f0 = puVar9;
                    *0x225f0 = puVar9;
                    *(uVar14 + uVar12 * 8) = 0;
                    uStack_b8 = 0xffffffffffffffff;
                }
                if (uVar12 == 0xffffffffffffffff) {
                    return;
                }
                uVar12 = puStack_60[uVar11] >> 0x34 & 0x1ff;
                if ((uVar12 != 0) || ((uVar11 == uVar4 && (uStack_98 == uVar16)))) break;
                puVar9 = ~*0x23930 & puStack_60[uVar11] & uVar7;
                *puVar9 = 0x225e8;
                puVar9[1] = *0x225f0;
                **0x225f0 = puVar9;
                *0x225f0 = puVar9;
                puStack_60[uVar11] = 0;
                uVar12 = 0xffffffffffffffff;
            }
            puStack_60[uVar11] = puStack_60[uVar11] & 0xe00fffffffffffff;
            puStack_60[uVar11] = puStack_60[uVar11] | (uVar12 - 1 & 0x1ff) << 0x34;
            return;
        }
    } while( true );
}


/* fcn.00019924 @ 0x19924 */

void fcn.00019924(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint64_t arg2_00;
    char *arg3;
    int64_t arg3_00;
    uint64_t arg4;
    int64_t iVar3;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 < 0x1e) {
        arg3 = *(uVar2 * 8 + 0x23000);
    }
    else {
        arg3 = "Reserved";
    }
    uVar1 = fcn.00019568();
    arg4 = uVar1;
    fcn.0001a014(0x22a50,uVar2,arg3,arg4);
    if ((1 << (arg1 & 0x1f) & 0x20227d00U) != 0) {
        arg2_00 = *arg2;
        fcn.0001a014(0x22a90,arg2_00,arg3,arg4);
        if (uVar2 == 0xe) {
            uVar2 = *arg2;
            arg2_00 = uVar2 >> 4 & 1;
            arg4 = uVar2 >> 2 & 1;
            arg3 = uVar2 >> 3 & 1;
            fcn.0001a014(0x22aa8,arg2_00,arg3,arg4);
        }
        fcn.0001a014(0x22ad8,arg2_00,arg3,arg4);
    }
    fcn.0001a014(0x22ae0,*(arg2 + 0x2a0),*(arg2 + 0x2c8),*(arg2 + 0x268));
    fcn.0001a014(0x22b10,*(arg2 + 0x310),*(arg2 + 0x308),*(arg2 + 0x300));
    iVar3 = *(arg2 + 0x2e8);
    fcn.0001a014(0x22b40,*(arg2 + 0x2f8),*(arg2 + 0x2f0),iVar3);
    fcn.0001a014(0x22b70,*(arg2 + 0x2e0),*(arg2 + 0x2d8),iVar3);
    fcn.0001a014(0x22b90,*(arg2 + 0x318),*(arg2 + 800),*(arg2 + 0x328));
    iVar3 = *(arg2 + 0x340);
    fcn.0001a014(0x22bc0,*(arg2 + 0x330),*(arg2 + 0x338),iVar3);
    fcn.0001a014(0x22bf0,*(arg2 + 0x348),*(arg2 + 0x350),iVar3);
    iVar3 = *(arg2 + 0x2b0);
    fcn.0001a014(0x22c10,*(arg2 + 0x2c0),*(arg2 + 0x2b8),iVar3);
    fcn.0001a014(0x22c40,*(arg2 + 0x2a8),*(arg2 + 0x2d0),iVar3);
    iVar3 = *(arg2 + 0x250);
    fcn.0001a014(0x22c60,*(arg2 + 0x238),*(arg2 + 0x248),iVar3);
    fcn.0001a014(0x22c90,*(arg2 + 600),*(arg2 + 0x260),iVar3);
    fcn.0001a014(0x22cb0,*(arg2 + 0x208),*(arg2 + 0x210),*(arg2 + 0x218));
    fcn.0001a014(0x22ce0,*(arg2 + 0x220),*(arg2 + 0x228),*(arg2 + 0x230));
    fcn.0001a014(0x22d10,*(arg2 + 0x280),*(arg2 + 0x288),*(arg2 + 0x270));
    iVar3 = *(arg2 + 0x278);
    arg3_00 = *(arg2 + 0x298);
    fcn.0001a014(0x22d38,*(arg2 + 0x290),arg3_00,iVar3);
    fcn.0001a014(0x22d60,arg2 + 8,arg3_00,iVar3);
    return;
}


/* fcn.0001638c @ 0x1638c */

uint64_t fcn.0001638c(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t *puVar3;
    
    uVar1 = fcn.00019568();
    uVar2 = 0;
    if (*0x22450 != 0) {
        puVar3 = *(*0x22460 + 0x10);
        do {
            if (*puVar3 == uVar1) {
                return uVar2;
            }
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 6;
        } while (uVar2 < *0x22450);
    }
    return 0;
}


/* fcn.000160d4 @ 0x160d4 */

uint64_t fcn.000160d4(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t in_RAX;
    uint64_t uVar2;
    int *piVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    
    uVar5 = 0;
    if (*0x24ba0 != NULL) {
        in_RAX = 0;
        uVar2 = uVar5;
        puVar6 = *0x24ba0;
        if (*0x24b90 / *0x24ba8 != 0) {
            do {
                uVar1 = *puVar6;
                in_RAX = uVar1;
                if ((uVar1 != 0) &&
                   ((((uVar1 < 5 || (in_RAX = uVar1 - 7, uVar1 - 7 < 3)) && (*(puVar6 + 2) <= arg1)) &&
                    (in_RAX = *(puVar6 + 6) * 0x1000 + *(puVar6 + 2), arg1 < in_RAX)))) goto code_r0x000161ce;
                puVar6 = puVar6 + *0x24ba8;
                uVar2 = uVar2 + 1;
            } while (uVar2 < *0x24b90 / *0x24ba8);
        }
    }
    if ((*0x23970 != NULL) && (puVar4 = *0x23970, uVar2 = uVar5, *0x23968 != 0)) {
        do {
            if ((*puVar4 <= arg1) && (in_RAX = puVar4[1], arg1 < *puVar4 + in_RAX)) goto code_r0x000161ce;
            uVar2 = uVar2 + 1;
            puVar4 = puVar4 + 7;
        } while (uVar2 < *0x23968);
    }
    if (*0x23978 != 0) {
        piVar3 = *0x23978 + 0x10;
        if (*(*0x23978 + 4) != 0) {
            do {
                in_RAX = *piVar3 - 5U;
                if ((*piVar3 - 5U < 2) && (in_RAX = piVar3[8], (piVar3[8] >> 0x11 & 1) != 0)) {
                    if ((*(piVar3 + 2) <= arg1) && (in_RAX = *(piVar3 + 6) * 0x1000 + *(piVar3 + 2), arg1 < in_RAX)) {
code_r0x000161ce:
                        return CONCAT71(in_RAX >> 8,1);
                    }
                    in_RAX = *(*0x23978 + 8);
                    piVar3 = piVar3 + in_RAX;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(*0x23978 + 4));
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001880c @ 0x1880c */

void fcn.0001880c(void)

{
    uint64_t *puVar1;
    int64_t *arg1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t *puVar10;
    
    uVar3 = fcn.00011850();
    uVar3 = uVar3 & *0x24e88;
    uVar4 = fcn.00011920();
    uVar2 = fcn.000118d0();
    uVar9 = 0x80;
    if (*0x23980 != '\0') {
        uVar9 = 0x8000000000000080;
    }
    puVar10 = NULL;
    uVar5 = -((uVar2 >> 0xc & 1) != 0) & 9;
    uVar7 = uVar5 + 0x27;
    iVar6 = uVar5 + 0x2f;
    uVar5 = *0x23930;
    uVar8 = *0x24e88;
    do {
        puVar1 = uVar3 + ((~(-2LL << (iVar6 & 0x3f)) & uVar4) >> (uVar7 & 0x3f)) * 8;
        uVar3 = *puVar1;
        if ((uVar3 & 1) == 0) {
            if (*0x225e8 == 0x225e8) {
                fcn.000182f0(uVar7);
            }
            arg1 = *0x225e8;
            *(**0x225e8 + 8) = (*0x225e8)[1];
            *arg1[1] = *arg1;
            fcn.00011750(arg1,0x1000);
            uVar8 = *0x24e88;
            uVar5 = *0x23930;
            uVar3 = *0x23930 | arg1 | 0x67;
            *puVar1 = uVar3;
        }
        else {
            puVar10 = puVar1;
        }
        *puVar1 = uVar3 | 0xe20;
        uVar7 = uVar7 - 9;
        uVar3 = ~uVar5 & (uVar3 | 0xe20) & uVar8;
        iVar6 = iVar6 + -9;
    } while (0x15 < uVar7);
    *(uVar3 + ((~(-2LL << (uVar7 + 8 & 0x3f)) & uVar4) >> (uVar7 & 0x3f)) * 8) =
         (uVar5 | uVar4) & uVar8 & 0xffffffffffe00067 | uVar9 | 0x67;
    if (puVar10 != NULL) {
        *puVar10 = *puVar10 ^ ((*puVar10 & 0xfff0000000000000) + 0x10000000000000 ^ *puVar10) & 0x1ff0000000000000;
    }
    return;
}


/* fcn.000116d0 @ 0x116d0 */

uint32_t fcn.000116d0(void)

{
    uint32_t in_CR4;
    
    return in_CR4 & 0xff7fffff;
}


/* fcn.000116e5 @ 0x116e5 */

ulong fcn.000116e5(void)

{
    ulong unaff_retaddr;
    
    //WARNING: Treating indirect jump as return
    return unaff_retaddr;
}


/* fcn.00019300 @ 0x19300 */

ulong fcn.00019300(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.000118a0(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.0001933c @ 0x1933c */

int64_t fcn.0001933c(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.00019300();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.0001960c @ 0x1960c */

uint64_t fcn.0001960c(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uStackX_8;
    
    uVar1 = fcn.00011b40();
    fcn.00011a90();
    *(arg1 + 8) = uVar1 >> 9 & 1;
    fcn.00011960();
    uVar1 = fcn.000118d0();
    *arg1 = uVar1;
    fcn.00011980(uVar1 & 0xffffffffffffff7f);
    fcn.00011700();
    uStackX_8 = rdmsr(0x2ff);
    uStackX_8 = uStackX_8 & 0xfffffffffffff7ff;
    wrmsr(0x2ff,uStackX_8);
    return uStackX_8;
}


/* fcn.0001a014 @ 0x1a014 */

uint64_t fcn.0001a014(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint *arg1_00;
    uint *arg2_00;
    uint32_t uVar3;
    uint *puVar4;
    uint8_t *puVar5;
    uint uStackY_118;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    arg1_00 = &uStackY_118;
    fcn.0001d194(arg1_00,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    arg2_00 = NULL;
    while (uStackY_118 != 0) {
        arg2_00 = arg2_00 + 1;
        uStackY_118._0_1_ = *(&uStackY_118 + arg2_00);
    }
    uVar2 = *0x2260c;
    uVar3 = 0x22;
    if (*0x23a00 != '\0') {
        uVar3 = *0x2260c;
    }
    if ((uVar3 & 2) != 0) {
        puVar5 = &uStackY_118;
        arg1_00 = arg2_00;
        while (arg1_00 != NULL) {
            do {
                uVar1 = in(0x3fd);
                uVar2 = uVar1;
            } while ((uVar1 & 0x20) == 0);
            puVar4 = NULL;
            do {
                if (arg1_00 == NULL) goto code_r0x0001a0bd;
                uVar2 = *puVar5;
                out(0x3f8,*puVar5);
                puVar4 = puVar4 + 1;
                arg1_00 = arg1_00 + -1;
                puVar5 = puVar5 + 1;
            } while (puVar4 < 0x10);
        }
    }
code_r0x0001a0bd:
    if ((uVar3 & 0x10) != 0) {
        uVar2 = fcn.0001e7cc(arg1_00,&uStackY_118,arg2_00);
    }
    if ((uVar3 & 0x20) != 0) {
        uVar2 = fcn.0001e18c(4,&uStackY_118,arg2_00);
    }
    return uVar2;
}


/* fcn.0001d080 @ 0x1d080 */

ulong fcn.0001d080(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uchar uVar5;
    uchar uVar6;
    uint32_t uVar7;
    
    uVar7 = 0x1c200;
    if (*0x23a01 != '\0') {
        uVar7 = *0x22608;
    }
    if ((uVar7 == 0) || (uVar7 != (uVar7 / 0x2580) * 0x2580)) {
        uVar7 = 0x1c200;
    }
    uVar1 = 0x1c200 / uVar7;
    uVar2 = in(0x3fa);
    uVar3 = in(0x3fb);
    uVar4 = in(0x3fb);
    out(0x3fb,uVar4 | 0x80);
    uVar5 = in(0x3f9);
    uVar6 = in(0x3f8);
    uVar4 = in(0x3fb);
    out(0x3fb,uVar4 & 0x7f);
    if (CONCAT11(uVar5,uVar6) != uVar1 || ((uVar3 & 0x3f) != 3 || (uVar2 & 0x21) != 1)) {
        out(0x3fb,0x80);
        out(0x3f9,uVar1 >> 8);
        out(0x3f8,uVar1);
        out(0x3fb,3);
        out(0x3fa,7);
        out(0x3fc,0);
    }
    return 0;
}


/* fcn.0001e720 @ 0x1e720 */

void fcn.0001e720(void)

{
    uint *puVar1;
    uint64_t arg1;
    
    arg1 = *0x226ec;
    if ((*0xfdcb0618 & 2) == 0) {
        arg1 = 0xf1000;
    }
    puVar1 = fcn.0001eaa4(arg1);
    if (((puVar1 & 0xffffff00) != 0) && ((puVar1 & 0xfffff000) != 0xfffff000)) {
        fcn.0001e6ec(puVar1 & 0xfffff000,arg1);
        if (puVar1[0x3f] == 0x44570110) {
            puVar1[3] = 0x80;
            puVar1[1] = 0;
            *puVar1 = 1;
            puVar1[3] = 3;
            puVar1[2] = 1;
            puVar1[4] = 2;
        }
        else {
            *(puVar1 + 3) = 0x80;
            *(puVar1 + 1) = 0;
            *puVar1 = 1;
            *(puVar1 + 3) = 3;
            *(puVar1 + 2) = 1;
            *(puVar1 + 1) = 2;
        }
    }
    return;
}


/* fcn.00012560 @ 0x12560 */

void fcn.00012560(void)

{
    return;
}


/* fcn.000120f5 @ 0x120f5 */

void fcn.000120f5(int64_t arg1,int64_t arg2)

{
    *(arg1 + 1) = arg2;
    return;
}


/* fcn.0001d194 @ 0x1d194 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001d194(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001d1ef;
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
code_r0x0001d1ef:
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
        uVar5 = fcn.00018f30(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00018f04(arg4);
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
            pcVar9 = 0x234ac;
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
code_r0x0001d579:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x234ac;
                }
                else {
                    pcVar9 = 0x234b0;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x0001d338:
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
                            goto code_r0x0001d4db;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001d4f2;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x0001d4db;
                                }
                                goto code_r0x0001d4f2;
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
code_r0x0001d4db:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x0001d338;
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
                                goto code_r0x0001d338;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001d4f2;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x0001d4db;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001d4f2:
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
                                fcn.0001dec0(&var_68h_2,0x26,0,0x23440);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x0001d579;
                                if (uStack_a8 == 0x53) goto code_r0x0001d788;
                                if (uStack_a8 == 0x58) goto code_r0x0001d87e;
                                if (uStack_a8 == 0x61) goto code_r0x0001d791;
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
                                    goto code_r0x0001d31d;
                                }
                                if (uStack_a8 != 100) goto code_r0x0001d319;
                                goto code_r0x0001d895;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x234ac;
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
                        goto code_r0x0001da90;
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
                                    iVar13 = 0x2354b;
                                    goto code_r0x0001d845;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x0001d845:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x0001da90;
                            }
                            fcn.0001dec0(&var_68h_2,0x26,0,0x234a4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x0001d788:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x0001d791:
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
                                goto code_r0x0001da90;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x0001d319;
                                    goto code_r0x0001d882;
                                }
                                goto code_r0x0001d887;
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
                                goto code_r0x0001da90;
                            }
                            fcn.0001dec0(&var_68h_2,0x26,0,0x23488);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x0001da90;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001d87e:
                    uVar5 = uVar5 | 0x20;
code_r0x0001d882:
                    uVar5 = uVar5 | 0x80;
code_r0x0001d887:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x0001d895:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001d8d7;
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
code_r0x0001d8d7:
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
code_r0x0001d95f:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x0001d95f;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEFPOSTCODE = <%08x>\n"[uVar11 % uVar17];
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
code_r0x0001d319:
                    pcVar9 = &uStack_a8;
code_r0x0001d31d:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x0001da90:
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
                arg1 = fcn.0001d160(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001d160(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.0001d160(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.0001d160(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.0001e7cc @ 0x1e7cc */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001e7cc(ulong noname_0,uint32_t *arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t **arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int aiStackX_20 [2];
    uint32_t var_48h;
    int aiStack_48 [2];
    uint32_t *puStack_40;
    uint32_t *apuStack_38 [2];
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    arg1_00 = &puStack_40;
    cVar1 = fcn.0001e8cc(noname_0,arg1_00,aiStackX_20);
    if ((cVar1 != '\0') && (arg1 != NULL)) {
        if (aiStackX_20[0] == 1) {
            uVar2 = puStack_40[0x1f];
        }
        else {
            uVar2 = *(puStack_40 + 0x1f);
        }
        if (uVar2 != 0xff) {
            uVar7 = 0;
            iVar5 = 1000000;
            if (arg2 == 0) {
                return 0;
            }
            uVar6 = 0;
            do {
                while( true ) {
                    if (aiStackX_20[0] == 1) {
                        arg1_00 = puStack_40[0x1f];
                    }
                    else {
                        arg1_00 = CONCAT71(arg1_00 >> 8,*(puStack_40 + 0x1f));
                    }
                    if ((arg1_00 & 2) == 0) break;
                    if (aiStackX_20[0] == 1) {
                        *puStack_40 = *(uVar6 + arg1);
                    }
                    else {
                        *puStack_40 = *(uVar6 + arg1);
                    }
                    uVar7 = uVar7 + 1;
                    uVar6 = uVar7;
                    if (arg2 <= uVar6) {
                        return arg2;
                    }
                }
                if (iVar5 == 0) {
                    arg1_00 = apuStack_38;
                    puVar3 = puStack_40;
                    cVar1 = fcn.0001e8cc(puStack_40,arg1_00,aiStack_48);
                    if (cVar1 == '\0') {
                        return 0;
                    }
                    if (aiStack_48[0] == 1) {
                        uVar4 = apuStack_38[0][4];
                    }
                    else {
                        uVar4 = CONCAT71(puVar3 >> 8,apuStack_38[0][1]);
                    }
                    uVar2 = uVar4 >> 5;
                    if ((uVar2 & 1) == 0) {
                        return 0;
                    }
                    fcn.0001ea50(CONCAT71(uVar4 >> 8,uVar2) & 0xffffffffffffff01,arg1_00);
                    iVar5 = 1000000;
                }
                fcn.00019224(10,arg1_00);
                iVar5 = iVar5 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.0001e18c @ 0x1e18c */

ulong fcn.0001e18c(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint32_t arg2_00;
    uint8_t uVar1;
    uchar *arg2_01;
    uint *arg3_00;
    bool bVar2;
    bool bVar3;
    uint uStack_108;
    uint uStack_104;
    uchar auStack_f8 [12];
    uint32_t uStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_88;
    uchar auStack_78 [112];
    
    if (arg3 == 0) {
        return 0;
    }
    if (*0xfe1000e8 == 0xff) {
        return 0x8000000000000015;
    }
    if ((*0xfe1000e8 & 1) == 0) {
        return 0x8000000000000015;
    }
    uVar1 = *0xfe1000e8 >> 1 & 3;
    arg2_00 = arg1;
    if (uVar1 == 0) {
        bVar2 = arg2_00 == 1;
        bVar3 = arg2_00 == 2;
    }
    else if (uVar1 == 1) {
        bVar2 = arg2_00 - 1 < 2;
        bVar3 = arg2_00 - 1 == 2;
    }
    else {
        if (uVar1 != 2) {
            if (uVar1 != 3) {
                return 0x8000000000000015;
            }
            goto code_r0x0001e213;
        }
        bVar2 = arg2_00 - 1 < 3;
        bVar3 = arg2_00 - 1 == 3;
    }
    if (!bVar2 && !bVar3) {
        return 0x8000000000000015;
    }
code_r0x0001e213:
    uStack_108 = 0x48;
    uStack_104 = 0xe;
    fcn.0001e3e0(auStack_78);
    arg3_00 = &uStack_108;
    arg2_01 = auStack_f8;
    fcn.0001e434(auStack_78,arg2_01,arg3_00);
    if (iStack_88 != 0) {
        uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
        uStack_e8 = *0x223a0;
        uStack_e0 = *0x223a8;
        fcn.0001e29c(auStack_f8,arg2_01,arg3_00,arg2_00);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00012312 @ 0x12312 */

void fcn.00012312(void)

{
    *0x12213 = 0x8170;
    *0x12280 = 0x1228a;
    return;
}


/* fcn.0001b8ac @ 0x1b8ac */

void fcn.0001b8ac(ulong param_1,int64_t param_2,int64_t param_3)

{
    int64_t iVar1;
    int64_t noname_0;
    int64_t iStackX_8;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_30h;
    int64_t iStack_28;
    int64_t var_18h_2;
    int32_t var_10h;
    int32_t var_ch;
    
    var_20h = 0;
    var_18h = 0;
    iVar1 = fcn.0001e084(0x22730,param_2,param_3,&var_20h);
    if ((-1 < iVar1) && (var_18h != 0)) {
        *0x23d40 = fcn.0001a0f4(((var_18h & 0xfffU) != 0) + (var_18h >> 0xc));
        if (*0x23d40 != 0) {
            iVar1 = var_18h;
            if ((var_18h != 0) && (param_2 = var_20h, *0x23d40 != var_20h)) {
                fcn.00011710(*0x23d40,var_20h,var_18h);
            }
            *0x23d38 = *(*0x23d40 + 2) + *0x23d40;
            *(*0x23d40 + 2) = *0x23d38;
            (**(*0x239b8 + 0x48))(var_20h);
            iStackX_8 = 0;
            *0x23da8 = 0;
            iVar1 = fcn.0001e084(0x22720,param_2,iVar1,&iStackX_8);
            if ((-1 < iVar1) && (*0x23da8 != 0)) {
                *0x23d98 = fcn.00018fd4(((*0x23da8 & 0xfff) != 0) + (*0x23da8 >> 0xc));
                if (*0x23d98 != 0) {
                    iVar1 = (-((*0x23da8 & 0xfff) != 0) & 0x1000) + (*0x23da8 & 0xfffffffffffff000);
                    if (iVar1 != 0) {
                        fcn.00011750(*0x23d98,iVar1);
                    }
                    noname_0 = *0x23d98;
                    if ((*0x23da8 != 0) && (*0x23d98 != iStackX_8)) {
                        iVar1 = iStackX_8;
                        fcn.00011710(*0x23d98,iStackX_8,*0x23da8);
                    }
                    fcn.0001b628(noname_0,iVar1,iStackX_8);
                    (**(*0x239b8 + 0x48))(iStackX_8);
                    iStack_28 = *0x23d98;
                    var_18h_2._0_4_ = 0x38;
                    var_18h_2._4_4_ = 0x70;
                    fcn.000192a4(*0x23d98,&var_28h);
                    (*var_28h)(&iStack_28,0x23db8);
                    iVar1 = fcn.00019178(0x223c0);
                    if ((((iVar1 != 0) && (iVar1 != -0x18)) && ((*(iVar1 + 0xa0) & 0x20000) != 0)) &&
                       ((*(iVar1 + 0x28) != 0 && (*(iVar1 + 0x30) != 0)))) {
                        *0x23a28 = *(iVar1 + 0x30);
                        *0x23a50 = *(iVar1 + 0x28);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0001a4a8 @ 0x1a4a8 */

int64_t fcn.0001a4a8(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    unkuint7 Var2;
    uint8_t uVar3;
    
    Var2 = arg2 >> 8;
    if (0xfff < arg2) {
        if (arg2 == 0) {
            uVar3 = 0xff;
        }
        else {
            uVar3 = 0x1f;
            for (uVar1 = arg2; 0 < uVar1; uVar1 = uVar1 * 2) {
                uVar3 = uVar3 - 1;
            }
        }
        if ((arg2 == 1 << (uVar3 & 0x1f)) && ((~(arg2 - 1) & arg1) == arg1)) {
            return CONCAT71(Var2,1);
        }
    }
    return Var2 << 8;
}


/* fcn.0001a4f0 @ 0x1a4f0 */

ulong fcn.0001a4f0(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint32_t arg2_00;
    uint32_t uVar5;
    uint32_t arg2_01;
    uint32_t uVar6;
    ulong uStackX_20;
    
    arg2_00 = arg2;
    cVar2 = fcn.0001a4a8(arg1,arg2_00);
    uVar5 = arg1;
    if (cVar2 == '\0') {
        uVar6 = 0;
        arg2_01 = 0;
        uVar1 = rdmsr(0xfe);
        if ((uVar1 >> 0xd & 1) != 0) {
            uVar3 = arg1 & 0xffffffff;
            if (uVar5 == 0) {
                uVar4 = 0xff;
            }
            else {
                uVar4 = 0;
                for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1) {
                    uVar4 = uVar4 + 1;
                }
            }
            uVar6 = 1LL << (uVar4 & 0x3f);
            if (arg2_00 <= uVar6) {
                if (arg2_00 == 0) {
                    uVar6 = 0;
                }
                else {
                    uVar3 = arg2 & 0xffffffff;
                    uVar4 = 0x1f;
                    uVar6 = arg2_00;
                    while (0 < uVar6) {
                        uVar4 = uVar4 - 1;
                        uVar6 = uVar3 * 2;
                        uVar3 = uVar6;
                    }
                    uVar6 = 1 << (uVar4 & 0x1f);
                }
            }
            arg2_01 = arg2_00 - uVar6;
            uVar6 = uVar6 + uVar5;
            *0x23a14 = arg2_01;
            *0x23df4 = uVar6;
        }
        cVar2 = fcn.0001a4a8(uVar6,arg2_01);
        if (cVar2 == '\0') {
            fcn.00018e74();
        }
    }
    uVar1 = rdmsr(0x1f2);
    uStackX_20._4_4_ = uVar1 >> 0x20;
    uStackX_20 = CONCAT44(uStackX_20._4_4_,uVar1 & 0xff8 | uVar5 & 0xfffff006) | 6;
    wrmsr(0x1f2,uStackX_20);
    uVar1 = rdmsr(499);
    uStackX_20._4_4_ = uVar1 >> 0x20;
    uStackX_20 = CONCAT44(uStackX_20._4_4_,(~(arg2_00 - 1) ^ uVar1) & 0xfff ^ ~(arg2_00 - 1));
    wrmsr(499,uStackX_20);
    return uStackX_20;
}


/* fcn.0001a624 @ 0x1a624 */

void fcn.0001a624(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    char cVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    int64_t iVar8;
    
    uVar5 = 0;
    uVar6 = 0;
    do {
        bVar3 = false;
        if (*0x23e18 == 0) break;
        puVar7 = *0x23e08 + 0x10;
        iVar8 = *0x23e18;
        do {
            uVar1 = puVar7[-2];
            uVar2 = *puVar7;
            if ((uVar1 < arg1) || (arg1 + arg2 <= uVar1)) {
                if (uVar6 == 0) {
                    uVar5 = uVar1;
                    uVar6 = uVar2;
                }
                else {
                    if (uVar6 + uVar5 != uVar1) {
                        if (uVar5 != uVar2 + uVar1) goto code_r0x0001a695;
                        uVar5 = uVar5 - uVar2;
                    }
                    uVar6 = uVar6 + uVar2;
                }
                bVar3 = true;
            }
code_r0x0001a695:
            puVar7 = puVar7 + 8;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
    } while (bVar3);
    if (uVar6 == 0) {
        if (*0x23a14 == 0) goto code_r0x0001a6f0;
code_r0x0001a6c8:
        if (*0x23a14 != 0) {
            uVar5 = *0x23df4;
            uVar6 = *0x23a14;
        }
    }
    else if (*0x23a14 != 0) {
        fcn.00018e74();
        goto code_r0x0001a6c8;
    }
    *0x23e14 = uVar5;
    *0x23e24 = uVar6;
code_r0x0001a6f0:
    cVar4 = fcn.0001a4a8(*0x23e14,*0x23e24);
    if (cVar4 == '\0') {
        fcn.00018e74();
    }
    return;
}


/* fcn.0001c7e4 @ 0x1c7e4 */

void fcn.0001c7e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    
    if (*(*0x23d38 + 8) < 0x20000) {
        pcVar1 = *0x23d38 + 0x10;
    }
    else {
        pcVar1 = *0x23d38 + 0xd4;
    }
    for (; *pcVar1 != -1; pcVar1 = pcVar1 + 4) {
        if (*pcVar1 == arg2) {
            if ((pcVar1[1] != 0) && (*(pcVar1 + 2) + arg1 != arg3)) {
                fcn.00011710(*(pcVar1 + 2) + arg1,arg3,pcVar1[1]);
            }
        }
    }
    return;
}


/* fcn.0001a8a8 @ 0x1a8a8 */

uint64_t fcn.0001a8a8(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uStackX_10;
    
    uVar1 = rdmsr(0x17d);
    if ((uVar1 >> 0x36 & 1) == 0) {
        *0x23df9 = 0;
        iVar4 = fcn.00018f54();
        uVar3 = (**(iVar4 + 0x18))(0x22260,2);
        iVar4 = fcn.00018f54();
        uVar5 = (**(iVar4 + 0x18))(0x22260,2);
        iVar4 = *0x23e00;
        cVar2 = fcn.00018f90(*0x23e00);
        if (cVar2 == '\0') {
            uStackX_10 = (**(*0x239b8 + 0x30))(iVar4,((uVar5 & 0xf) != 0) + (uVar3 >> 4));
        }
        else {
            uStackX_10 = (**(*0x239d0 + 0x68))();
        }
    }
    else {
        uStackX_10 = arg1 * 0x100 + *0x23e00;
        *(uStackX_10 + 4) = 3;
        uStackX_10 = uStackX_10 | 1;
        wrmsr(0x9d,uStackX_10);
    }
    return uStackX_10;
}


/* fcn.0001c6c0 @ 0x1c6c0 */

void fcn.0001c6c0(void)

{
    uint64_t uVar1;
    int64_t arg1;
    uint8_t uVar2;
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    
    uVar2 = 0;
    do {
        if (uVar2 == 0) {
            arg1 = 0xfed90000;
        }
        else if (uVar2 == 1) {
            arg1 = 0xfed92000;
        }
        else if (uVar2 == 2) {
            arg1 = 0xfed91000;
        }
        else {
            arg1 = 0;
        }
        if (arg1 != 0) {
            (**(*0x23a30 + 8))(*0x23a30,arg1,0x1000,0x20000);
            uVar1 = fcn.0001bf3c(arg1,auStackX_10);
            if (uVar1 == 0) {
                return;
            }
            (**(*0x23a30 + 8))(*0x23a30,uVar1 & 0xfffffffffffff000,0x1000,0x20000);
            fcn.0001c0f4(uVar1 & 0xfffffffffffff000,0x1000,0,auStackX_8);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 3);
    return;
}


/* fcn.0001c334 @ 0x1c334 */

void fcn.0001c334(ulong noname_0,ulong noname_1,int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    bool bVar10;
    bool bVar11;
    uint32_t auStackX_8 [2];
    char acStackX_10 [8];
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    uint64_t uStack_68;
    uint64_t uStack_60;
    uchar auStack_48 [16];
    
    (**(*0x23a30 + 8))(*0x23a30,*0x23d50,(-((*0x23dc0 & 0xfff) != 0) & 0x1000) + (*0x23dc0 & 0xfffffffffffff000),
                       0x4000);
    (**(*0x23a30 + 8))(*0x23a30,*0x23d70,0x1000,0x4000);
    (**(*0x23a30 + 8))(*0x23a30,*0x23d40,0x1000,0x4000);
    uVar1 = 0;
    if (*0x22448 != 0) {
        do {
            iVar3 = *0x23d90 * uVar1 + *0x23d60;
            fcn.0001c0f4(*0x23d90 + -0x2000 + iVar3,0x2000,0,auStackX_8);
            fcn.0001c0f4(iVar3,0x1000,1,acStackX_10);
            uVar2 = uVar1 + 1;
            fcn.0001c0f4(uVar2 * *0x23dd0 + *0x23dc8 + -0x2000,0x2000,0,&uStackX_18);
            fcn.0001c0f4(*(*0x23e40 + uVar1 * 4) + 0x8000,0x1000,0,&uStackX_20);
            if (*0x23a12 == '\x01') {
                fcn.0001c0f4(*(*0x23e40 + uVar1 * 4) + 0xf000,0x1000,0,auStack_48);
            }
            uVar1 = uVar2;
        } while (uVar2 < *0x22448);
    }
    if (*0x23da8 != 0) {
        fcn.0001c0f4(*0x23d98,*0x23da8,0,auStackX_8);
    }
    iVar3 = (-((*0x23dc0 & 0xfff) != 0) & 0x1000) + (*0x23dc0 & 0xfffffffffffff000);
    if (iVar3 != 0) {
        fcn.0001c0f4(*0x23d50,iVar3,0,auStackX_8);
    }
    fcn.0001c0f4(*0x12272,0x1000,0,auStackX_8);
    fcn.0001c0f4(*0x23d70,0x1000,0,auStackX_8);
    fcn.0001c0f4(*0x12192,0x1000,0,auStackX_8);
    fcn.0001c0f4(*0x23d40,0x1000,0,auStackX_8);
    uVar2 = fcn.00011850();
    uVar9 = 0;
    uVar1 = *0x23930;
    do {
        uVar8 = *((uVar2 & 0xffffffffff000) + uVar9 * 8);
        if ((uVar8 & 1) != 0) {
            fcn.0001c014(~uVar1 & uVar8 & 0xffffffffff000);
            uVar4 = ~*0x23930;
            uVar6 = 0;
            uVar1 = *0x23930;
            do {
                uVar5 = *((uVar4 & uVar8 & 0xffffffffff000) + uVar6 * 8);
                if ((uVar5 & 0x81) == 1) {
                    fcn.0001c014(~uVar1 & uVar5 & 0xffffffffff000);
                    uVar7 = ~*0x23930 & uVar5 & 0xffffffffff000;
                    uVar5 = 0;
                    uVar1 = *0x23930;
                    do {
                        if ((*(uVar7 + uVar5 * 8) & 0x81) == 1) {
                            fcn.0001c014(~uVar1 & *(uVar7 + uVar5 * 8) & 0xffffffffff000);
                            uVar1 = *0x23930;
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < 0x200);
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < 0x200);
        }
        uVar9 = uVar9 + 1;
    } while (uVar9 < 0x200);
    if (*0x24ab0 != '\0') {
        uVar1 = fcn.000118d0();
        if ((uVar1 >> 0x17 & 1) != 0) {
            fcn.000116d0();
        }
        uVar2 = fcn.00011840();
        fcn.00011930(uVar2 & 0xfffffffffffeffff);
        do {
            uStack_68 = 0;
            bVar11 = false;
            fcn.00017cd0(&uStackX_18,acStackX_10);
            if (acStackX_10[0] != '\0') {
                uStack_68 = uStackX_18;
                fcn.000158c8(uStackX_18,0x1000,0x20000,auStackX_8);
                bVar11 = auStackX_8[0] != '\0';
            }
            bVar10 = acStackX_10[0] != '\0';
            uStack_60 = 0;
            do {
                if (acStackX_10[0] == '\0') {
                    uVar2 = uStackX_18;
code_r0x00018b6e:
                    fcn.000158c8(uVar2,0x1000,0x20000,auStackX_8);
                    if ((bVar11) || (bVar11 = false, auStackX_8[0] != '\0')) {
                        bVar11 = true;
                    }
                    uStackX_20 = 0;
                    do {
                        uVar9 = 0;
                        uVar8 = *(uVar2 + uStackX_20 * 8) & ~*0x23930 & 0xffffffffff000;
                        if (uVar8 != 0) {
                            fcn.000158c8(uVar8,0x1000,0x20000,auStackX_8);
                            if ((bVar11) || (bVar11 = false, auStackX_8[0] != '\0')) {
                                bVar11 = true;
                            }
                            do {
                                if (((*(uVar8 + uVar9 * 8) & 0x80) == 0) &&
                                   (uVar4 = ~*0x23930 & *(uVar8 + uVar9 * 8) & 0xffffffffff000, uVar4 != 0)) {
                                    fcn.000158c8(uVar4,0x1000,0x20000,auStackX_8);
                                    if ((bVar11) || (auStackX_8[0] != '\0')) {
                                        bVar11 = true;
                                    }
                                    uVar6 = 0;
                                    do {
                                        if ((((*(uVar4 + uVar6 * 8) & 0x80) == 0) &&
                                            (uVar5 = ~*0x23930 & *(uVar4 + uVar6 * 8) & 0xffffffffff000, uVar5 != 0))
                                           && ((fcn.000158c8(uVar5,0x1000,0x20000,auStackX_8), bVar11 ||
                                               (auStackX_8[0] != '\0')))) {
                                            bVar11 = true;
                                        }
                                        uVar6 = uVar6 + 1;
                                    } while (uVar6 < 0x200);
                                }
                                uVar9 = uVar9 + 1;
                            } while (uVar9 < 0x200);
                        }
                        uStackX_20 = uStackX_20 + 1;
                    } while (uStackX_20 < 0x200);
                }
                else {
                    uVar2 = *(uStack_68 + uStack_60 * 8) & ~*0x23930 & 0xffffffffff000;
                    if (uVar2 != 0) goto code_r0x00018b6e;
                }
                uStack_60 = uStack_60 + 1;
            } while (uStack_60 < (-bVar10 & 0x1ff) + 1);
        } while (bVar11);
        uVar2 = fcn.00011840();
        fcn.00011930(uVar2 | 0x10000);
        if ((uVar1 >> 0x17 & 1) != 0) {
            fcn.000116e5();
        }
    }
    return;
}


/* fcn.0001ae48 @ 0x1ae48 */

void fcn.0001ae48(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == *(*0x239d0 + 0x78)) {
        uVar2 = rdmsr(*arg2);
        *(arg2 + 8) = uVar2;
    }
    else {
        fcn.00018e10(*0x23a20);
        (**(*0x239d0 + 0x70))(0x1ae1c,CONCAT44(in_register_0000000c,arg1),arg2);
        while( true ) {
            LOCK();
            iVar1 = **0x23a20;
            if (iVar1 == 1) {
                **0x23a20 = 2;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            fcn.00011860();
        }
        **0x23a20 = 1;
    }
    return;
}


/* fcn.0001aee0 @ 0x1aee0 */

ulong fcn.0001aee0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uchar *arg2_00;
    int64_t arg2_01;
    int64_t arg3_00;
    int aiStack_28 [2];
    uchar auStack_20 [8];
    
    iVar2 = *(*(*0x239d0 + 0x90) + arg1 * 8);
    if (*0x23de8 == ' ') {
        uVar1 = *(arg2 * 0x10 + 0x23180);
        if (uVar1 == 0) {
            return 0x800000000000000e;
        }
        if (uVar1 < arg3) {
            return 0x8000000000000002;
        }
        arg2_00 = *(arg2 * 0x10 + 0x23182) + iVar2;
    }
    else {
        uVar1 = *(arg2 * 0x10 + 0x23181);
        if (uVar1 == 0) {
            return 0x800000000000000e;
        }
        if (uVar1 < arg3) {
            return 0x8000000000000002;
        }
        if (*0x23a10 == '\0') {
            arg3_00 = arg3;
            if (4 < arg3) {
                arg3_00 = 4;
            }
            arg2_01 = *(arg2 * 0x10 + 0x23184) + iVar2;
            if ((arg3_00 != 0) && (arg4 != arg2_01)) {
                fcn.00011710(arg4,arg2_01,arg3_00);
            }
            if (arg3 < 4) {
                return 0;
            }
            arg3 = arg3 + -4;
            arg2_00 = *(arg2 * 0x10 + 0x23186) + iVar2;
            arg4 = arg4 + 4;
            if (arg3 == 0) {
                return 0;
            }
            if (arg4 == arg2_00) {
                return 0;
            }
            goto code_r0x0001b013;
        }
        aiStack_28[0] = *(arg2 * 0x10 + 0x23188);
        if (aiStack_28[0] == 0) {
            return 0x8000000000000003;
        }
        fcn.0001ae48(arg1,aiStack_28);
        arg2_00 = auStack_20 + *(arg2 * 0x10 + 0x2318c);
    }
    if (arg3 == 0) {
        return 0;
    }
    if (arg4 == arg2_00) {
        return 0;
    }
code_r0x0001b013:
    fcn.00011710(arg4,arg2_00,arg3);
    return 0;
}


/* fcn.0001e084 @ 0x1e084 */

int64_t fcn.0001e084(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t arg1_01;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t arg3_00;
    uint64_t *arg4;
    int64_t iStackX_18;
    ulong in_stack_00000028;
    uint64_t auStack_28 [2];
    
    iStackX_18 = arg2;
    arg1_01 = fcn.0001dfc0(arg1);
    iVar1 = fcn.0001e000(arg1_01,arg1,arg2,arg3);
    if (iVar1 < 0) {
        iStackX_18 = 0;
        arg3_00 = 0;
        arg4 = auStack_28;
        iVar1 = (**(*0x239b8 + 0x138))(2,0x222d0,0,arg4,&iStackX_18,in_stack_00000028);
        if (-1 < iVar1) {
            uVar3 = 0;
            uVar2 = auStack_28[0];
            if (auStack_28[0] != 0) {
                do {
                    arg1_00 = *(iStackX_18 + uVar3 * 8);
                    if (arg1_00 != arg1_01) {
                        iVar1 = fcn.0001e000(arg1_00,arg1,arg3_00,arg4);
                        if (-1 < iVar1) goto code_r0x0001e161;
                        uVar2 = auStack_28[0];
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar2);
            }
            if (uVar3 == uVar2) {
                iVar1 = -0x7ffffffffffffff2;
            }
        }
code_r0x0001e161:
        if (iStackX_18 != 0) {
            fcn.000190b0(iStackX_18);
        }
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001b628 @ 0x1b628 */

void fcn.0001b628(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int64_t iStackX_10;
    
    piVar1 = *0x23d98;
    uVar3 = 0;
    uVar5 = 0;
    if (**0x23d98 == 0x5a4d) {
        uVar5 = *(*0x23d98 + 0x1e);
    }
    uVar4 = uVar5;
    if (((*(uVar4 + *0x23d98) == 0x4550) && ((*(uVar4 + 0x38 + *0x23d98) & 0xfff) == 0)) &&
       (*(uVar4 + 6 + *0x23d98) != 0)) {
        puVar6 = *0x23d98 + *(uVar4 + 0x14 + *0x23d98) + uVar4 + 0x28;
        do {
            if ((puVar6[5] & 0x20) != 0) {
                iStackX_10 = puVar6[-1] + piVar1;
                uVar5 = puVar6[-1];
                iVar2 = ((*puVar6 & 0xfff) != 0) + (*puVar6 >> 0xc);
                (**(*0x239d0 + 0x68))(iStackX_10,iVar2);
                (**(*0x239d0 + 0x60))(2,5,iVar2,&iStackX_10);
                if (iStackX_10 != uVar5 + arg2) {
                    fcn.00011710(iStackX_10,uVar5 + arg2,0x18);
                }
            }
            uVar3 = uVar3 + 1;
            puVar6 = puVar6 + 10;
        } while (uVar3 < *(uVar4 + 6 + piVar1));
    }
    return;
}


/* fcn.000192a4 @ 0x192a4 */

ulong fcn.000192a4(uint32_t arg1,int64_t arg2)

{
    int *piVar1;
    uint in_register_0000000c;
    int *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar2 == 0x5a4d) {
        piVar1 = *(piVar2 + 0xf) + piVar2;
    }
    else {
        piVar1 = piVar2;
    }
    if (*piVar1 == 0x5a56) {
        *arg2 = piVar2 + (piVar1[2] - *(piVar1 + 6)) + 0x28;
    }
    else {
        if (*piVar1 != 0x4550) {
            return 0x8000000000000003;
        }
        *arg2 = piVar1[10] + piVar2;
    }
    return 0;
}


/* fcn.0001b73c @ 0x1b73c */

void fcn.0001b73c(void)

{
    uint64_t uVar1;
    int64_t arg1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    *0x23d80 = *0x22215 + 0x2091 & 0xfffffffffffffff8;
    *0x23dc0 = *0x22448 * *0x23d80;
    arg1 = fcn.0001a0f4(((*0x23dc0 & 0xfff) != 0) + (*0x23dc0 >> 0xc));
    uVar1 = *0x23d80;
    if ((arg1 != 0) && (uVar4 = 0, *0x23d50 = arg1, *0x22448 != 0)) {
        iVar3 = *0x23dc8;
        do {
            if (arg1 != *0x22217) {
                fcn.00011710(arg1,*0x22217,*0x22215 + 0x208a);
                iVar3 = *0x23dc8;
            }
            iVar2 = *0x22215 + arg1;
            iVar5 = iVar2 + 1;
            if (iVar5 == 0x10) {
                return;
            }
            *(iVar2 + -0xd) = iVar5;
            *(iVar2 + -0xb) = iVar5 >> 0x10;
            *(iVar2 + -8) = iVar5 >> 0x18;
            if (iVar3 == 0) {
                *0x23dd0 = 0x20000;
                iVar3 = fcn.00018fd4((*0x22448 & 0x7fffffffffff) << 5);
                *0x23dc8 = iVar3;
            }
            uVar4 = uVar4 + 1;
            arg1 = arg1 + uVar1;
            *(iVar2 + 5) = uVar4 * *0x23dd0 + iVar3;
        } while (uVar4 < *0x22448);
    }
    return;
}


/* fcn.0001cdf4 @ 0x1cdf4 */

uint64_t fcn.0001cdf4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t arg2_00;
    uint uStackX_18;
    uint auStackX_20 [2];
    uchar auStack_24 [4];
    int64_t iStack_20;
    
    uVar4 = 0;
    arg2_00 = arg3;
    if (*0x23d70 == 0) {
        arg2_00 = 0;
        iVar2 = (**(*0x239d0 + 0x60))(0,5,1,&iStack_20);
        if (iVar2 < 0) {
            *0x23d70 = 0;
        }
        else {
            *0x23d70 = iStack_20;
            if (iStack_20 != 0) goto code_r0x0001ce53;
        }
    }
    else {
code_r0x0001ce53:
        arg2_00 = CONCAT71(arg2_00 >> 8,0xff);
        fcn.000124e0(*0x23d70,0x1000,arg2_00);
    }
    if (*0x23d18 == 0) {
        iVar2 = fcn.00018f54();
        uVar1 = (**(iVar2 + 0x18))(0x22260,2);
        iVar2 = fcn.00018f54();
        uVar3 = (**(iVar2 + 0x18))(0x22260,2);
        iVar2 = ((uVar3 & 0x1ff) != 0) + (uVar1 >> 9);
        if (iVar2 == 0) {
            *0x23d18 = 0;
        }
        else {
            *0x23d18 = fcn.00013a00(iVar2);
            if (*0x23d18 != 0) {
                iVar2 = fcn.00018f54();
                uVar1 = (**(iVar2 + 0x18))(0x22260,2);
                if (uVar1 != 0) {
                    fcn.00011750(*0x23d18,uVar1 << 3);
                }
                goto code_r0x0001cf08;
            }
        }
        uVar4 = 0x8000000000000009;
    }
    else {
code_r0x0001cf08:
        uVar3 = (*(arg2 + 0x77) * 0x100 + *(arg2 + 0x74)) * 0x10000 + *(arg2 + 0x72);
        iVar2 = uVar3 + *(uVar3 + 0x66);
        *(*0x23d18 + arg1 * 8) = iVar2;
        fcn.000124e0(iVar2,0x2000,CONCAT71(arg2_00 >> 8,0xff));
        if (arg1 == 0) {
            uVar5 = 3;
            uVar3 = uVar4;
            do {
                if (((uVar5 >> (uVar3 & 0x3f) & 1) != 0) &&
                   (fcn.00011870(0xd,uVar3,auStackX_20,auStack_24), uVar3 == 0)) {
                    uStackX_18 = arg3;
                    uVar5 = CONCAT44(uStackX_18,auStackX_20[0]);
                }
                uVar1 = uVar3 + 1;
                uVar3 = uVar1;
            } while (uVar1 < 0x40);
        }
        if (*0x23a98 == '\0') {
            (**(*0x239d0 + 0xa8))(0x23a90,0x22280,0,0x22690);
            uVar4 = (**(*0x239d0 + 0xc0))(0x22370,0x1cbb0,&iStack_20);
            *0x23a98 = '\x01';
        }
    }
    return uVar4;
}


/* fcn.0001c794 @ 0x1c794 */

void fcn.0001c794(void)

{
    uchar auStackX_8 [32];
    
    (**(*0x239d0 + 0xa8))(0x23a68,0x22290,0,0x22668);
    (**(*0x239d0 + 0xc0))(0x22370,0x1c788,auStackX_8);
    return;
}


/* fcn.0001bf3c @ 0x1bf3c */

uint64_t * fcn.0001bf3c(int64_t arg1,int64_t arg2)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = fcn.00011850();
    uVar2 = *((uVar2 & 0xffffffffff000) + (arg1 >> 0x27 & 0x1ff) * 8);
    if (uVar2 != 0) {
        uVar3 = ~*0x23930;
        puVar1 = (uVar3 & uVar2 & 0xffffffffff000) + (arg1 >> 0x1e & 0x1ff) * 8;
        uVar2 = *puVar1;
        if (uVar2 != 0) {
            if (uVar2 < '\0') {
                *arg2 = 3;
                return puVar1;
            }
            puVar1 = (uVar2 & uVar3 & 0xffffffffff000) + (arg1 >> 0x15 & 0x1ff) * 8;
            uVar2 = *puVar1;
            if (uVar2 != 0) {
                if (uVar2 < '\0') {
                    *arg2 = 2;
                    return puVar1;
                }
                puVar1 = (uVar2 & uVar3 & 0xffffffffff000) + (arg1 >> 0xc & 0x1ff) * 8;
                if ((*puVar1 != 0) || (arg1 == 0)) {
                    *arg2 = 1;
                    return puVar1;
                }
            }
        }
    }
    *arg2 = 0;
    return NULL;
}


/* fcn.0001c0f4 @ 0x1c0f4 */

ulong fcn.0001c0f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int iVar2;
    uint64_t *arg1_00;
    uint64_t *puVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int aiStackX_10 [4];
    uchar auStackX_20 [8];
    
    bVar1 = false;
    if (arg4 != 0) {
        *arg4 = 0;
    }
    do {
        arg1_00 = fcn.0001bf3c(arg1,aiStackX_10);
        if (arg1_00 == NULL) {
            return 0x8000000000000003;
        }
        iVar8 = 0;
        uVar5 = 0;
        do {
            if (aiStackX_10[0] == *(uVar5 + 0x22620)) {
                iVar8 = *(iVar8 * 0x18 + 0x22628);
                goto code_r0x0001c16e;
            }
            iVar8 = iVar8 + 1;
            uVar5 = uVar5 + 0x18;
        } while (uVar5 < 0x48);
        iVar8 = 0;
code_r0x0001c16e:
        iVar6 = 0;
        uVar5 = 0;
        do {
            if (aiStackX_10[0] == *(uVar5 + 0x22620)) {
                uVar5 = *(iVar6 * 0x18 + 0x22628);
                goto code_r0x0001c192;
            }
            iVar6 = iVar6 + 1;
            uVar5 = uVar5 + 0x18;
        } while (uVar5 < 0x48);
        uVar5 = 0;
code_r0x0001c192:
        if (((arg1 & uVar5 - 1) == 0) && (uVar5 <= arg2)) {
            puVar3 = fcn.0001bf3c(arg1_00,auStackX_20);
            if (puVar3 == NULL) {
                return 0x8000000000000003;
            }
            if ((*puVar3 & 2) == 0) {
                *puVar3 = *puVar3 | 2;
                bVar1 = true;
            }
            uVar5 = *arg1_00;
            if (arg3 == 0) {
                uVar4 = uVar5 & 0xfffffffffffffffb;
            }
            else {
                uVar4 = uVar5 | 4;
            }
            *arg1_00 = uVar4;
            if (bVar1) {
                *puVar3 = *puVar3 & 0xfffffffffffffffd;
                bVar1 = false;
            }
            if ((uVar5 != uVar4) && (arg4 != 0)) {
                *arg4 = 1;
            }
            arg1 = arg1 + iVar8;
            arg2 = arg2 - iVar8;
        }
        else {
            if (((arg1 & 0x1fffffU) != 0) || (iVar2 = 2, arg2 < 0x200000)) {
                iVar2 = 1;
            }
            if (aiStackX_10[0] == 2) {
                if (iVar2 != 1) {
                    return 0x8000000000000003;
                }
                uVar4 = fcn.00018fd4(1);
                uVar5 = *0x23930;
                if (uVar4 == 0) {
                    return 0x8000000000000003;
                }
                uVar9 = *arg1_00 & 0xfffffffe00000;
                uVar10 = 0;
                do {
                    uVar7 = *arg1_00 & 0x8000000000000067 | uVar9;
                    uVar9 = uVar9 + 0x1000;
                    *(uVar4 + uVar10 * 8) = uVar7 | uVar5;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x200);
            }
            else {
                if (aiStackX_10[0] != 3) {
                    return 0x8000000000000003;
                }
                if (iVar2 != 1 && iVar2 != 2) {
                    return 0x8000000000000003;
                }
                uVar4 = fcn.00018fd4(1);
                uVar5 = *0x23930;
                if (uVar4 == 0) {
                    return 0x8000000000000003;
                }
                uVar9 = *arg1_00 & 0xfffffc0000000;
                uVar10 = 0;
                do {
                    uVar7 = *arg1_00 & 0x80000000000000e7 | uVar9;
                    uVar9 = uVar9 + 0x200000;
                    *(uVar4 + uVar10 * 8) = uVar7 | uVar5 | 0x80;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < 0x200);
            }
            *arg1_00 = uVar5 | uVar4 | 0x67;
            if (arg4 != 0) {
                *arg4 = 1;
            }
        }
        if (arg2 == 0) {
            return 0;
        }
    } while( true );
}


/* fcn.0001c014 @ 0x1c014 */

void fcn.0001c014(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    
    uVar5 = arg1 >> 0x15 & 0x1ff;
    uVar2 = fcn.00011850();
    uVar2 = *((uVar2 & 0xffffffffff000) + (arg1 >> 0x27 & 0x1ff) * 8);
    if ((uVar2 & 1) != 0) {
        uVar4 = ~*0x23930;
        uVar2 = *((uVar4 & uVar2 & 0xffffffffff000) + (arg1 >> 0x1e & 0x1ff) * 8);
        if (((uVar2 & 1) != 0) && (-1 < uVar2)) {
            uVar3 = uVar4 & uVar2 & 0xffffffffff000;
            uVar2 = *(uVar3 + uVar5 * 8);
            if (((uVar2 & 1) != 0) && (-1 < uVar2)) {
                bVar6 = (uVar2 & 2) == 0;
                if (bVar6) {
                    *(uVar3 + uVar5 * 8) = uVar2 | 2;
                }
                puVar1 = (uVar4 & uVar2 & 0xffffffffff000) + (arg1 >> 0xc & 0x1ff) * 8;
                *puVar1 = *puVar1 & 0xfffffffffffffffb;
                if (bVar6) {
                    puVar1 = uVar3 + uVar5 * 8;
                    *puVar1 = *puVar1 & 0xfffffffffffffffd;
                }
            }
        }
    }
    return;
}


/* fcn.0001df40 @ 0x1df40 */

//WARNING: Type propagation algorithm not settling

void fcn.0001df40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg3_00;
    char cVar1;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.0001d194(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    out(0x72,3);
    cVar1 = in(0x73);
    if (cVar1 == '\x01') {
        arg3_00 = 0;
        while (uStackY_108 != '\0') {
            uStackY_108._0_1_ = *(&uStackY_108 + arg3_00 + 1U);
            arg3_00 = arg3_00 + 1;
        }
        fcn.0001e18c(4,&uStackY_108,arg3_00);
    }
    return;
}


/* fcn.0001c868 @ 0x1c868 */

int64_t fcn.0001c868(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar5 = rdmsr(0x485);
    if (*arg1 != uVar5 >> 0x20) {
        return (uVar5 >> 0x28) << 8;
    }
    uVar2 = rdmsr(0x480);
    uVar1 = *(arg1 + 0x804);
    uVar3 = uVar2 >> 0x20 & 0x1fff;
    uVar5 = ((-uVar3 & 0xfff) + *(arg1 + 0x808) + uVar3) * *(*0x239d0 + 0x80) +
            (uVar1 & 0xfffff000) + (-((uVar1 & 0xfff) != 0) & 0x1000) + *(arg1 + 0x80c);
    uVar3 = *(arg1 + 0x1c);
    uVar4 = uVar3;
    if (uVar5 < arg2) {
        uVar5 = arg2;
    }
    if (uVar1 <= uVar3) {
        uVar3 = uVar3 + 0x6000;
        uVar4 = uVar3;
        if (uVar5 < uVar3) {
            uVar5 = uVar3;
        }
    }
    return CONCAT71(uVar4 >> 8,uVar5 <= *0x23a70);
}


/* fcn.0001c918 @ 0x1c918 */

void fcn.0001c918(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    uint64_t *puVar7;
    uint64_t uVar8;
    
    uVar1 = rdmsr(0x9b);
    uVar4 = uVar1 & 0xfffff000;
    if (*0x23a70 != 0) {
        fcn.00011750(uVar4,*0x23a70);
    }
    if ((arg2 != 0) && (uVar4 != arg1)) {
        fcn.00011710(uVar4,arg1,arg2);
    }
    puVar5 = *(arg1 + 0x1c) + uVar4;
    puVar7 = puVar5 + 0x200;
    puVar6 = puVar5 + 0x400;
    *puVar5 = puVar7 | 3;
    uVar4 = 0;
    puVar5 = puVar6;
    do {
        *puVar7 = puVar6 | 3;
        puVar6 = puVar6 + 0x200;
        puVar7 = puVar7 + 1;
        uVar2 = 0;
        do {
            uVar3 = uVar2 + 2;
            uVar8 = (uVar2 + *0x238a8 + uVar4 * 0x200) * 0x200000 | *0x238c8;
            *puVar5 = (uVar2 + *0x238a0 + uVar4 * 0x200) * 0x200000 | *0x238c0;
            puVar5[1] = uVar8;
            puVar5 = puVar5 + 2;
            uVar2 = uVar3;
        } while (uVar3 < 0x200);
        uVar4 = uVar4 + 1;
    } while (uVar4 < 4);
    return;
}


/* fcn.00018f04 @ 0x18f04 */

uint64_t fcn.00018f04(uint32_t arg1)

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


/* fcn.00018f30 @ 0x18f30 */

uint64_t fcn.00018f30(uint32_t arg1)

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


/* fcn.0001dec0 @ 0x1dec0 */

void fcn.0001dec0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001d194(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001d160 @ 0x1d160 */

uchar * fcn.0001d160(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001dfc0 @ 0x1dfc0 */

ulong fcn.0001dfc0(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x239b8 + 0x98))(*0x239c0,0x22220,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.0001e000 @ 0x1e000 */

ulong fcn.0001e000(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg3;
    if (arg1 != 0) {
        iStackX_20 = arg4;
        iVar1 = (**(*0x239b8 + 0x98))(arg1,0x222d0,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,arg2,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* fcn.0001e3e0 @ 0x1e3e0 */

void fcn.0001e3e0(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x23ba0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x23b20) {
        fcn.00011710(arg1_00,0x23b20,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x1e580;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x1e4a0;
    *(arg1_00 + 4) = fcn.00014af8;
    *(arg1_00 + 8) = 0x1e544;
    *(arg1_00 + 10) = 0x1e53c;
    *(arg1_00 + 0xc) = 0x1e54c;
    *(arg1_00 + 0xe) = 0x1e554;
    *(arg1_00 + 0x10) = 0x1e55c;
    *(arg1_00 + 0x12) = 0x1e564;
    *(arg1_00 + 0x14) = 0x1e578;
    *(arg1_00 + 0x16) = 0x1e56c;
    return;
}


/* fcn.0001e434 @ 0x1e434 */

int64_t fcn.0001e434(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x23ba0;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x23b20) {
        fcn.00011710(arg2,0x23b20,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.0001e29c @ 0x1e29c */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.0001e29c(uint32_t arg1,ulong noname_1,ulong noname_2,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint16_t uVar3;
    uint *puVar4;
    uint32_t uVar5;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    int64_t iStack_54;
    int64_t iStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    uint32_t var_9h;
    int64_t var_5h;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 != 0x23aa0) {
        puVar4 = &uStack_88;
        uVar5 = (arg2 & 7) << 4 | *(piVar2 + 0xc) & 0xffff80;
        uStack_58 = uVar5 | 0x1000002;
        if ((*(piVar2 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar2[2];
            iStack_4c = piVar2[3];
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x23850;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar2[4];
            *(piVar2 + 4) = _auStack_44 + 1;
            *puVar4 = *0x23854;
            puVar4 = puVar4 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar3 = 0;
            do {
                cVar1 = *(uVar3 + in_stack_00000030);
                acStack_28[uVar3] = cVar1;
                if (cVar1 == '\0') break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
            if ((uVar3 < 0x18) && (0x18 - uVar3 != 0)) {
                fcn.00011750(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x23868;
        }
        else {
            uStack_58 = uVar5 | 0x1000202;
            *puVar4 = *0x23864;
            puVar4[1] = *0x2386c;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x23890;
        (**(*piVar2 + 0x18))(piVar2,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.0001eaa4 @ 0x1eaa4 */

int64_t fcn.0001eaa4(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (uVar3 < 0xfe020000) {
        uVar1 = *((uVar3 + 0x10 >> 4 & 0x10000000 | uVar3 + 0x10 & 0xffffffff) + 0xc0000000);
        uVar2 = *((uVar3 + 0x14 >> 4 & 0x10000000 | uVar3 + 0x14 & 0xffffffff) + 0xc0000000);
    }
    else {
        uVar1 = *(uVar3 + 0x10);
        uVar2 = *(uVar3 + 0x14);
    }
    return (uVar1 & 0xfffff000) + (uVar2 << 0x20);
}


/* fcn.0001e6ec @ 0x1e6ec */

void fcn.0001e6ec(ulong noname_0,int64_t arg1)

{
    if ((((*arg1 != -1) && ((*(arg1 + 4) & 2) == 0)) && ((*(arg1 + 0x10) & 0xfffff000) != 0)) &&
       ((*(arg1 + 0x10) & 0xfffff000) != 0xfffff000)) {
        *(arg1 + 4) = *(arg1 + 4) | 2;
    }
    return;
}


/* fcn.0001e8cc @ 0x1e8cc */

uint64_t fcn.0001e8cc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0xfdcb0618 & 2) == 0) {
        uVar2 = fcn.0001eaa4(0xf1000);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) goto code_r0x0001ea3c;
        if ((*0xc00f1004 & 2) == 0) {
            *0xc00f1004 = *0xc00f1004 | 2;
            *0xc00f1084 = *0xc00f1084 & 0xfc;
            iVar3 = 0x81;
            if (*(uVar2 + 0xfc) == 0x44570110) {
                iVar3 = 0x204;
            }
            *(iVar3 + uVar2) = *(iVar3 + uVar2) | 7;
        }
    }
    else {
        uVar4 = *0x226ec;
        uVar2 = fcn.0001eaa4(*0x226ec);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) {
code_r0x0001ea3c:
            return uVar2 & 0xffffffffffffff00;
        }
        if ((*(uVar4 + 0x84) & 3) != 0) {
            *(uVar4 + 0x84) = *(uVar4 + 0x84) & 0xfc;
            iVar3 = 0x81;
            if (*(uVar2 + 0xfc) == 0x44570110) {
                iVar3 = 0x204;
            }
            *(iVar3 + uVar2) = *(iVar3 + uVar2) | 7;
        }
    }
    iVar1 = *(*arg1 + 0xfc);
    *arg2 = iVar1 == 0x44570110;
    return CONCAT71(iVar1 >> 8,1);
}


/* fcn.0001ea50 @ 0x1ea50 */

void fcn.0001ea50(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,arg2);
    cVar1 = fcn.0001e8cc(arg1,aiStackX_18,aiStackX_10);
    if (cVar1 != '\0') {
        if (aiStackX_10[0] == 1) {
            uVar2 = *(aiStackX_18[0] + 0x10);
        }
        else {
            uVar2 = *(aiStackX_18[0] + 4);
        }
        uVar2 = uVar2 & 0xdf | 2;
        if (aiStackX_10[0] == 1) {
            *(aiStackX_18[0] + 0x10) = uVar2;
        }
        else {
            *(aiStackX_18[0] + 4) = uVar2;
        }
    }
    return;
}


