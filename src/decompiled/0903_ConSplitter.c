// decompiled by r2ghidra: 0903_ConSplitter.pe32
// functions: 52

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001037c(arg1,arg2);
    fcn.00010acc(arg1,arg2);
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
    
    *0x15670 = *(arg1 + 0x60);
    *0x15668 = arg1;
    fcn.00014830();
    puVar4 = fcn.00014830();
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
            if ((*0x15340 == *(puVar4 + 4)) && (*0x15348 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010acc @ 0x10acc */

ulong fcn.00010acc(int64_t arg1,int64_t arg2)

{
    uint auStackX_8 [2];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uchar *puVar1;
    ulong uVar2;
    
    if (*0x15690 == 0) {
        *0x15680 = *(arg2 + 0x60);
        *0x15688 = *(arg2 + 0x58);
        *0x15690 = arg2;
    }
    *0x151e8 = 0;
    *0x151e0 = arg1;
    fcn.000147d4(arg1,arg2,0x151c0,0);
    *0x150b0 = 0;
    *0x150a8 = arg1;
    fcn.000147d4(arg1,arg2,0x15088,0);
    *0x150f8 = 0;
    uVar2 = 0x15178;
    *0x150f0 = arg1;
    fcn.000147d4(arg1,arg2,0x150d0,0);
    (**(*0x15680 + 0x50))(0x100,0x10,0x1336c,0x15240,0x15250,uVar2);
    (**(*0x15680 + 0x50))(0x100,0x10,0x1336c,0x151f0,0x15200);
    (**(*0x15680 + 0x50))(0x100,0x10,0x1336c,0x15258,0x15268);
    (**(*0x15680 + 0x50))(0x100,0x10,0x12d88,0x15288,0x15298);
    uVar2 = 0x130e8;
    (**(*0x15680 + 0x50))(0x100,0x10,0x130e8,0x15220,0x15230);
    *0x15700 = 0;
    *0x15740 = 0;
    *0x15760 = 0;
    *0x15708 = 0;
    *0x15710 = 0;
    *0x15748 = 0;
    *0x15750 = 0;
    *0x15720 = 0;
    *0x15768 = 0;
    *0x15770 = 0;
    *0x156e0 = 0;
    *0x15728 = 0;
    *0x15730 = 0;
    *0x156e8 = 0;
    *0x156f0 = 0;
    fcn.00014ca4(0x15000,0x107e4,uVar2,auStackX_18);
    puVar1 = auStackX_20;
    fcn.00014ca4(0x14f70,0x1091c,uVar2,auStackX_18);
    (**(*0x15680 + 0x148))(0x155d0,0x15060,0x15168,0,puVar1);
    auStackX_8[0] = 0;
    if (*0x15740 == 0) {
        fcn.000123a0(0);
        (**(*0x15680 + 0x40))(4,9,0x15630);
        (*0x15630)[1] = 0x19;
        **0x15630 = 0x50;
        *(*0x15630 + 2) = 1;
    }
    *(*0x15690 + 0x40) = 0x152d0;
    *(*0x15690 + 0x38) = *0x155d0;
    if (*(*0x15690 + 0x50) == 0) {
        *(*0x15690 + 0x50) = *(*0x15690 + 0x40);
        *(*0x15690 + 0x48) = *(*0x15690 + 0x38);
    }
    *(*0x15690 + 0x10) = 0;
    (**(*(*0x15690 + 0x60) + 0x158))(*0x15690,0x78,auStackX_8);
    *(*0x15690 + 0x10) = auStackX_8[0];
    uVar2 = (**(*0x15680 + 0x170))(0x200,8,fcn.000124b8,0,0x15030,auStackX_18);
    fcn.000124b8(0,0);
    return uVar2;
}


/* fcn.00014830 @ 0x14830 */

int64_t fcn.00014830(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x15678 == 0) {
        *0x15678 = 0;
        if (*(*0x15668 + 0x68) != 0) {
            piVar2 = *(*0x15668 + 0x70);
            do {
                if ((*0x15040 == *piVar2) && (*0x15048 == piVar2[1])) {
                    *0x15678 = (*(*0x15668 + 0x70))[uVar1 * 3 + 2];
                    return *0x15678;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x15668 + 0x68));
        }
    }
    return *0x15678;
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


/* fcn.00014cfc @ 0x14cfc */

ulong fcn.00014cfc(int64_t arg1)

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
            if (cVar4 != cVar2) goto code_r0x00014d64;
        }
        arg1 = arg1 + 1;
        pcVar6 = pcVar6 + 1;
        cVar4 = *arg1;
    }
    in_RAX = CONCAT71(in_RAX >> 8,*pcVar6);
    bVar5 = *arg1 == *pcVar6;
code_r0x00014d64:
    return CONCAT71(in_RAX >> 8,bVar5);
}


/* fcn.00012a2c @ 0x12a2c */

ulong fcn.00012a2c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    
    uVar2 = 0;
    if (*0x15720 == 0) {
        uVar2 = 0;
    }
    else if (*0x15728 != NULL) {
        uVar3 = *0x15700;
        piVar4 = *0x15728;
        do {
            uVar6 = 0;
            if (uVar3 != 0) {
                do {
                    if (uVar6 == 10) break;
                    uVar5 = uVar6;
                    if (*(piVar4 + uVar5 * 0x10 + 0x24) == arg1) {
                        iVar1 = *(arg1 + 0x18);
                        if ((iVar1 != 0) && (*(piVar4 + uVar5 * 0x10 + 0x2c) != 0xbadbad)) {
                            uVar2 = (**(iVar1 + 0x28))(iVar1,*(piVar4 + uVar5 * 0x10 + 0x2c));
                            *(piVar4 + uVar5 * 0x10 + 0x24) = 0;
                            *(piVar4 + uVar5 * 0x10 + 0x2c) = 0xbadbad;
                            uVar3 = *0x15700;
                        }
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar3);
            }
            piVar4 = *piVar4;
        } while (piVar4 != NULL);
    }
    return uVar2;
}


/* fcn.0001497c @ 0x1497c */

int64_t fcn.0001497c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    if (*0x15698 == '\0') {
        iVar1 = fcn.000148f4();
        if (-1 < iVar1) {
            iVar1 = (***0x156b0)(0x80000002,arg1 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x156a0 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x156a0)(*0x156a0,0x80000002,arg1 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.0001489c @ 0x1489c */

ulong fcn.0001489c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar3 = *(*0x15690 + 0x68);
    iVar2 = *(*0x15690 + 0x70);
    while( true ) {
        if (iVar3 == 0) {
            return 0;
        }
        iVar1 = fcn.00014d68(iVar2,0x15040,0x10);
        if (iVar1 == 0) break;
        iVar2 = iVar2 + 0x18;
        iVar3 = iVar3 + -1;
    }
    return *(iVar2 + 0x10);
}


/* fcn.000147d4 @ 0x147d4 */

void fcn.000147d4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000030;
    
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    if (in_stack_00000030 != 0) {
        (**(*0x15670 + 0x148))();
        return;
    }
    //WARNING: Could not recover jumptable at 0x00014826. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x15670 + 0x148))(arg2 + 0x28,0x15050,arg2,0);
    return;
}


/* fcn.00014ca4 @ 0x14ca4 */

void fcn.00014ca4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x15680 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x15680 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.000123a0 @ 0x123a0 */

int64_t fcn.000123a0(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    if ((arg1 != *0x15324) || (*0x15630 == 0)) {
        if (*0x15630 == 0) {
            iVar4 = 0x19;
            iVar3 = 0x50;
        }
        else {
            iVar2 = arg1;
            iVar1 = *0x15630 + iVar2 * 8;
            iVar4 = *(iVar2 + 4 + iVar1);
            iVar3 = *(iVar2 + iVar1);
        }
        iVar1 = (**(*0x15680 + 0x40))(4,iVar3 * iVar4 * 2,&iStackX_10);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*0x15680 + 0x40))(4,iVar3 * iVar4 * 4,&iStackX_18);
        if (iVar1 < 0) {
            (**(*0x15680 + 0x48))(iStackX_10);
            return iVar1;
        }
        if (*0x15628 != 0) {
            (**(*0x15680 + 0x48))();
        }
        *0x15628 = iStackX_10;
        *0x15618 = iStackX_10 + iVar3 * iVar4 * 2;
        if (*0x15638 != 0) {
            (**(*0x15680 + 0x48))();
        }
        *0x15638 = iStackX_18;
        *0x15620 = iVar3;
    }
    fcn.00013c98();
    return 0;
}


/* fcn.000124b8 @ 0x124b8 */

void fcn.000124b8(void)

{
    int64_t iVar1;
    
    if ((*0x155a8 != 0) || (iVar1 = (**(*0x15680 + 0x140))(0x15010,0,0x155a8), -1 < iVar1)) {
        iVar1 = (**(*0x155a8 + 0x40))(*0x155a8,0,0x155dc,*0x155c0);
        if (iVar1 == -0x7ffffffffffffffb) {
            if (*0x155c0 != 0) {
                (**(*0x15680 + 0x48))();
            }
            iVar1 = (**(*0x15680 + 0x40))(4,*0x155dc,0x155c0);
            if (-1 < iVar1) {
    //WARNING: Could not recover jumptable at 0x00012575. Too many branches
    //WARNING: Treating indirect jump as call
                (**(*0x155a8 + 0x40))(*0x155a8,0,0x155dc,*0x155c0);
                return;
            }
        }
        else {
            if (iVar1 != -0x7ffffffffffffff2) {
                return;
            }
            if (*0x155c0 == 0) {
                return;
            }
            (**(*0x15680 + 0x48))();
        }
        *0x155c0 = 0;
        *0x155dc = 0;
    }
    return;
}


/* fcn.00010e2c @ 0x10e2c */

ulong fcn.00010e2c(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (((iVar1 == *0x155d0) || (iVar1 == *(*0x15690 + 0x38))) || (iVar1 == *(*0x15690 + 0x28))) {
        uVar2 = 0x8000000000000003;
    }
    else {
        iVar1 = (**(*0x15680 + 0x98))(iVar1,0x14f40,aiStackX_8);
        uVar2 = 0;
        if (iVar1 < 0) {
            uVar2 = 0;
        }
        else if (*(aiStackX_8[0] + 0x50) == 1) {
            uVar2 = 0x8000000000000003;
        }
    }
    return uVar2;
}


/* fcn.00011e0c @ 0x11e0c */

int64_t fcn.00011e0c(int64_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    char *pcVar3;
    uint in_register_00000014;
    bool bVar4;
    int64_t iStackX_10;
    int aiStackX_18 [2];
    ulong *puStackX_20;
    int32_t var_30h;
    int64_t var_38h;
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    puStackX_20 = NULL;
    aiStackX_18[0] = 0;
    bVar4 = true;
    for (puVar1 = *0x15748; puVar1 != NULL; puVar1 = *puVar1) {
        if (puVar1[3] == iStackX_10) {
            return -0x7ffffffffffffffd;
        }
    }
    if (*0x15324 != 0) {
        iVar2 = fcn.00012268(arg1,*0x15324,aiStackX_18);
        bVar4 = -1 < iVar2;
        if (!bVar4) {
            (**(arg1 + 8))(arg1,L"Console Does Not Support current video mode\n\r");
        }
    }
    if ((*0x15740 == 0) && (*0x155b9 == '\0')) {
        *0x15334 = 0;
        iVar2 = fcn.00012100(arg1,iStackX_10);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    else {
        fcn.000122f4(arg1,iStackX_10);
    }
    iVar2 = (**(*0x15680 + 0x40))(4,0x21,&puStackX_20);
    if (iVar2 < 0) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        puStackX_20[2] = arg1;
        puStackX_20[3] = iStackX_10;
        *(puStackX_20 + 4) = bVar4;
        if ((*0x15740 != 0) || (*0x15324 != *(*(arg1 + 0x48) + 4))) {
            (**(arg1 + 0x20))(arg1,aiStackX_18[0]);
            (**(arg1 + 0x40))(arg1,*0x15334);
        }
        *puStackX_20 = 0;
        puStackX_20[1] = *0x15750;
        if (*0x15748 == NULL) {
            *0x15748 = puStackX_20;
        }
        else {
            **0x15750 = puStackX_20;
        }
        iVar2 = *0x15324;
        *0x15740 = *0x15740 + 1;
        *0x15750 = puStackX_20;
        if (*(iVar2 * 9 + 8 + *0x15630) != '\x01') {
            if (iVar2 != 0) {
                pcVar3 = *0x15630 + iVar2 * 9 + 8;
                do {
                    if (*pcVar3 == '\x01') break;
                    pcVar3 = pcVar3 + -9;
                    iVar2 = iVar2 + -1;
                } while (iVar2 != 0);
            }
            (**0x152f0)(0x152d0);
        }
        (**(*0x15680 + 0x148))(&iStackX_10,0x14f60,0,0);
        fcn.00011ad0(iStackX_10,0x15540);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00013fd0 @ 0x13fd0 */

void fcn.00013fd0(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    iVar1 = (**(*0x15680 + 0x98))(noname_0,86000,aiStackX_10);
    if (iVar1 < 0) {
        fcn.00013bc0(arg1);
    }
    else {
        fcn.00013cf4(aiStackX_10[0]);
        if (*0x15658 != 0) {
            fcn.00013f14(arg1);
            (**(*0x15680 + 0x48))(*0x15658);
            *0x15658 = 0;
            (**(*0x15680 + 0x48))(*0x15650);
            *0x15650 = 0;
        }
    }
    (**(arg1 + 0x28))(arg1,*0x15328);
    (**(arg1 + 0x40))(arg1,*0x15334);
    (**(arg1 + 0x38))(arg1,*0x1532c,*0x15330);
    return;
}


/* fcn.00014bb4 @ 0x14bb4 */

void fcn.00014bb4(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_register_00000014;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(CONCAT44(in_register_00000014,arg2) + 8);
    if (piVar2[2] == CONCAT44(in_register_00000014,arg2)) {
        piVar2[2] = iVar1;
    }
    else {
        *(*CONCAT44(in_register_00000014,arg2) + 8) = iVar1;
    }
    if (piVar2[1] == CONCAT44(in_register_00000014,arg2)) {
        piVar2[1] = *CONCAT44(in_register_00000014,arg2);
    }
    else {
        **(CONCAT44(in_register_00000014,arg2) + 8) = *CONCAT44(in_register_00000014,arg2);
    }
    *piVar2 = *piVar2 + -1;
    return;
}


/* fcn.00014084 @ 0x14084 */

void fcn.00014084(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iStackX_10;
    
    iStackX_10 = arg1;
    iVar2 = (**(*0x15680 + 0x98))(noname_0,86000,&iStackX_10);
    if (-1 < iVar2) {
        uVar1 = *0x15618 - *0x15628;
        *0x15658 = fcn.000149f0(uVar1);
        if (*0x15658 != 0) {
            *0x15650 = fcn.000149f0(uVar1 * 2);
            if (*0x15650 == 0) {
                (**(*0x15680 + 0x48))(*0x15658);
                *0x15658 = 0;
            }
            else {
                uVar3 = (**(*0x15680 + 0x18))(0x1f);
                fcn.00014e90(*0x15658,*0x15628,uVar1);
                fcn.00014e90(*0x15650,*0x15638,uVar1 * 2);
                (**(*0x15680 + 0x20))(uVar3);
                fcn.00013e30(iStackX_10);
            }
        }
    }
    return;
}


/* fcn.000125b4 @ 0x125b4 */

void fcn.000125b4(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int iVar4;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    
    piVar3 = *0x15748;
    if (*0x15630 != 0) {
        (**(*0x15680 + 0x48))();
    }
    iVar1 = (**(*0x15680 + 0x40))(4,**(piVar3[2] + 0x48) * 9,0x15630);
    if (-1 < iVar1) {
        iVar4 = 0;
        *0x15320 = **(piVar3[2] + 0x48);
        if (0 < *0x15320) {
            iVar1 = 0;
            do {
                iVar2 = (**(piVar3[2] + 0x18))(piVar3[2],iVar4,auStackX_10,auStackX_8);
                *(iVar1 + 4 + *0x15630) = auStackX_8[0];
                *(iVar1 + *0x15630) = auStackX_10[0];
                iVar4 = iVar4 + 1;
                *(iVar1 + 8 + *0x15630) = -1 < iVar2;
                iVar1 = iVar1 + 9;
            } while (iVar4 < *0x15320);
        }
        while (piVar3 = *piVar3, piVar3 != NULL) {
            fcn.000122f4(piVar3[2],piVar3[3]);
        }
    }
    return;
}


/* fcn.00011fe4 @ 0x11fe4 */

int64_t fcn.00011fe4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    bool bVar3;
    ulong *apuStack_18 [2];
    
    iVar2 = 0;
    puVar1 = *0x15708;
    do {
        if (puVar1 == NULL) {
code_r0x0001202e:
            if ((-1 < iVar2) && (iVar2 = (**(*0x15680 + 0x40))(4,0x30,apuStack_18), -1 < iVar2)) {
                bVar3 = *0x155a1 == '\0';
                apuStack_18[0][2] = arg1;
                apuStack_18[0][3] = arg2;
                apuStack_18[0][4] = arg3;
                apuStack_18[0][5] = arg4;
                if (bVar3) {
                    fcn.00012978(apuStack_18[0]);
                }
                *apuStack_18[0] = 0;
                apuStack_18[0][1] = *0x15710;
                if (*0x15708 == NULL) {
                    *0x15708 = apuStack_18[0];
                }
                else {
                    **0x15710 = apuStack_18[0];
                }
                *0x15700 = *0x15700 + 1;
                *0x15710 = apuStack_18[0];
                fcn.00011ad0(arg4,0x15558);
            }
            return iVar2;
        }
        if (puVar1[5] == arg4) {
            iVar2 = -0x7ffffffffffffffd;
            goto code_r0x0001202e;
        }
        puVar1 = *puVar1;
    } while( true );
}


/* fcn.00014be8 @ 0x14be8 */

int64_t fcn.00014be8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *in_stack_00000028;
    
    if (*in_stack_00000028 == 0) {
        *arg4 = 0;
    }
    iVar1 = (**(*0x15688 + 0x48))();
    if ((iVar1 < 0) && (iVar1 == -0x7ffffffffffffffb)) {
        if (*in_stack_00000028 != 0) {
            (**(*0x15680 + 0x48))();
        }
        iVar1 = fcn.000149f0(*arg4);
        *in_stack_00000028 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x15688 + 0x48))(arg1,arg2,arg3,arg4,iVar1);
        }
    }
    return iVar1;
}


/* fcn.0001365c @ 0x1365c */

ulong fcn.0001365c(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    char cVar3;
    ulong uVar4;
    int64_t *piVar5;
    
    cVar3 = *0x155b8 + '\x01';
    if (*0x155a1 == '\0') {
        if (*0x15708 == NULL) {
            uVar4 = 0x8000000000000003;
        }
        else {
            if (arg1 != 0) {
                uVar1 = *arg1;
                if ((uVar1 < '\0') && ((uVar1 & 0x38) == 0)) {
                    piVar5 = *0x15708;
                    *0x155b8 = cVar3;
                    *0x15080 = uVar1;
                    if (*0x15708 != NULL) {
                        do {
                            iVar2 = piVar5[3];
                            if (iVar2 != 0) {
                                (**(iVar2 + 0x18))(iVar2,arg1);
                            }
                            piVar5 = *piVar5;
                        } while (piVar5 != NULL);
                    }
                    *0x155b8 = *0x155b8 + -1;
                    fcn.00012ae0(0x155b8,0x155cc);
                    return 0;
                }
                fcn.00012ae0(0x155b8,0x155cc);
                return 0x8000000000000003;
            }
            uVar4 = 0x8000000000000002;
        }
    }
    else {
        uVar4 = 0x800000000000000f;
    }
    fcn.00012ae0(0x155b8,0x155cc);
    return uVar4;
}


/* fcn.00011c4c @ 0x11c4c */

int64_t fcn.00011c4c(int64_t arg1,int64_t arg2)

{
    uint8_t *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *apuStackX_18 [2];
    
    apuStackX_18[0] = NULL;
    iVar3 = 0;
    puVar2 = *0x15768;
    do {
        if (puVar2 == NULL) {
code_r0x00011c88:
            if ((-1 < iVar3) && (iVar3 = (**(*0x15680 + 0x40))(4,0x20,apuStackX_18), -1 < iVar3)) {
                iVar4 = 0;
                apuStackX_18[0][2] = arg1;
                apuStackX_18[0][3] = arg2;
                do {
                    puVar1 = iVar4 + 0x18 + *0x152a0;
                    *puVar1 = *puVar1 | *(*(arg1 + 0x18) + 0x18 + iVar4);
                    iVar4 = iVar4 + 1;
                } while (iVar4 < 2);
                *apuStackX_18[0] = 0;
                apuStackX_18[0][1] = *0x15770;
                if (*0x15768 == NULL) {
                    *0x15768 = apuStackX_18[0];
                }
                else {
                    **0x15770 = apuStackX_18[0];
                }
                *0x15760 = *0x15760 + 1;
                *0x15770 = apuStackX_18[0];
            }
            return iVar3;
        }
        if (puVar2[3] == arg2) {
            iVar3 = -0x7ffffffffffffffd;
            goto code_r0x00011c88;
        }
        puVar2 = *puVar2;
    } while( true );
}


/* fcn.00011d30 @ 0x11d30 */

int64_t fcn.00011d30(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *apuStackX_18 [2];
    
    apuStackX_18[0] = NULL;
    iVar2 = 0;
    puVar1 = *0x156e8;
    do {
        if (puVar1 == NULL) {
code_r0x00011d6c:
            if ((-1 < iVar2) && (iVar2 = (**(*0x15680 + 0x40))(4,0x20,apuStackX_18), -1 < iVar2)) {
                apuStackX_18[0][2] = arg1;
                apuStackX_18[0][3] = arg2;
                fcn.00013198();
                *(*0x15238 + 0x30) = *(*0x15238 + 0x30) | *(*(arg1 + 0x18) + 0x30);
                *apuStackX_18[0] = 0;
                apuStackX_18[0][1] = *0x156f0;
                if (*0x156e8 == NULL) {
                    *0x156e8 = apuStackX_18[0];
                }
                else {
                    **0x156f0 = apuStackX_18[0];
                }
                *0x156e0 = *0x156e0 + 1;
                *0x156f0 = apuStackX_18[0];
            }
            return iVar2;
        }
        if (puVar1[3] == arg2) {
            iVar2 = -0x7ffffffffffffffd;
            goto code_r0x00011d6c;
        }
        puVar1 = *puVar1;
    } while( true );
}


/* fcn.00014a1c @ 0x14a1c */

int64_t fcn.00014a1c(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    char *pcVar2;
    int64_t iVar3;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    if (pcVar2 == NULL) {
        return 0;
    }
    iVar3 = 0;
    while( true ) {
        if ((*pcVar2 == '\x7f') && (pcVar2[1] == -1)) {
            return iVar3 + 4;
        }
        uVar1 = pcVar2[3] * 0x100 + pcVar2[2];
        if ((*pcVar2 == '\0') || (uVar1 == 0)) break;
        iVar3 = iVar3 + uVar1;
        pcVar2 = pcVar2 + pcVar2[3] * 0x100 + pcVar2[2];
    }
    return iVar3;
}


/* fcn.00014ac0 @ 0x14ac0 */

ulong fcn.00014ac0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcVar7;
    
    uVar1 = *(arg2 + 3);
    uVar2 = *(arg2 + 2);
    do {
        uVar5 = *(arg1 + 3);
        uVar3 = *(arg1 + 2);
        pcVar7 = arg2;
        if (uVar1 * 0x100 + uVar2 == uVar5 * 0x100 + uVar3) {
            do {
                if (*pcVar7 == '\x7f') break;
                iVar6 = uVar5 * 0x100 + uVar3;
                iVar4 = fcn.00014d68(pcVar7,arg1,iVar6);
                if (iVar4 != 0) break;
                arg1 = arg1 + iVar6;
                pcVar7 = pcVar7 + pcVar7[3] * 0x100 + pcVar7[2];
                uVar5 = *(arg1 + 3);
                uVar3 = *(arg1 + 2);
            } while (pcVar7[3] * 0x100 + pcVar7[2] == *(arg1 + 2));
        }
        if (*arg1 == '\x7f') {
            return 1;
        }
        do {
            arg1 = arg1 + *(arg1 + 2) + *(arg1 + 3) * 0x100;
        } while (*arg1 != '\x7f');
        if (*(arg1 + 1) == -1) {
            return 0;
        }
        arg1 = arg1 + 4;
    } while( true );
}


/* fcn.00014a70 @ 0x14a70 */

int64_t fcn.00014a70(int64_t arg1)

{
    int64_t arg1_00;
    int64_t arg1_01;
    
    if (arg1 == 0) {
        arg1_01 = 0;
    }
    else {
        arg1_00 = fcn.00014a1c(arg1);
        arg1_01 = fcn.000149f0(arg1_00);
        fcn.00014e90(arg1_01,arg1,arg1_00);
    }
    return arg1_01;
}


/* fcn.000149f0 @ 0x149f0 */

ulong fcn.000149f0(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x15680 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00014e90 @ 0x14e90 */

int64_t fcn.00014e90(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    uint64_t uVar3;
    ulong *puVar4;
    ulong *puVar5;
    uint8_t uVar6;
    
    uVar6 = 0;
    puVar4 = CONCAT44(in_register_00000014,arg2);
    bVar1 = false;
    uVar2 = puVar4 - arg1;
    puVar5 = arg1;
    if (puVar4 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + puVar4) {
            puVar5 = arg3 + arg1;
            bVar1 = true;
            uVar6 = 1;
            puVar4 = arg3 + puVar4;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = puVar4 & 7;
        uVar3 = puVar5 & 7;
        if (bVar1) {
            puVar4 = puVar4 + -1;
            puVar5 = puVar5 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + uVar6 * -2 + 1;
                puVar5 = puVar5 + uVar6 * -2 + 1;
            }
        }
        if (bVar1) {
            puVar4 = puVar4 + -7;
            puVar5 = puVar5 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + uVar6 * -2 + 1;
            puVar5 = puVar5 + uVar6 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            puVar4 = puVar4 + 1;
            puVar5 = puVar5 + 1;
        }
    }
    if (bVar1) {
        puVar4 = puVar4 + -1;
        puVar5 = puVar5 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + uVar6 * -2 + 1;
        puVar5 = puVar5 + uVar6 * -2 + 1;
    }
    return arg1;
}


/* fcn.00013198 @ 0x13198 */

void fcn.00013198(void)

{
    **0x15238 = 0;
    (*0x15238)[1] = 0;
    (*0x15238)[2] = 0;
    (*0x15238)[3] = *(*0x15630 + *0x15324 * 9) << 3;
    (*0x15238)[4] = *(*0x15324 * 9 + 4 + *0x15630) * 0x13;
    (*0x15238)[5] = 0;
    return;
}


/* fcn.00012268 @ 0x12268 */

ulong fcn.00012268(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int iVar2;
    ulong uStackX_8;
    ulong uStackX_20;
    
    iVar2 = 0;
    uStackX_8 = 0;
    uStackX_20 = 0;
    if (0 < **(arg1 + 0x48)) {
        do {
            iVar1 = (**(arg1 + 0x18))(arg1,iVar2,&uStackX_20,&uStackX_8);
            if (-1 < iVar1) {
                if ((*(arg2 * 9 + 4 + *0x15630) == uStackX_8) && (*(arg2 * 9 + *0x15630) == uStackX_20)) {
                    *arg3 = iVar2;
                    return 0;
                }
            }
            iVar2 = iVar2 + 1;
        } while (iVar2 < **(arg1 + 0x48));
    }
    return 0x8000000000000003;
}


/* fcn.00012100 @ 0x12100 */

int64_t fcn.00012100(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint32_t arg1_00;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    uint in_register_00000014;
    int64_t iVar5;
    int64_t iVar6;
    int iVar7;
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    
    if (CONCAT44(in_register_00000014,arg2) == *0x155d0) {
        return 0;
    }
    iVar5 = *0x15324;
    *0x155b9 = 1;
    iVar1 = **(arg1 + 0x48);
    iVar6 = iVar1;
    arg1_00 = (*(arg1 + 0x48))[1];
    iVar4 = *0x15630 + iVar5 * 8;
    iVar2 = *(iVar5 + 4 + iVar4);
    iVar3 = *(iVar5 + iVar4);
    (**(*0x15680 + 0x48))();
    *0x15630 = 0;
    iVar4 = (**(*0x15680 + 0x40))(4,iVar6 * 9,0x15630);
    if (iVar4 < 0) {
        *0x15320 = 1;
        return 0;
    }
    iVar7 = 0;
    *0x15320 = iVar1;
    if (0 < iVar1) {
        iVar5 = 0;
        do {
            iVar4 = (**(arg1 + 0x18))(arg1,iVar7,auStackX_18,auStackX_10);
            *(iVar5 + 4 + *0x15630) = auStackX_10[0];
            *(iVar5 + *0x15630) = auStackX_18[0];
            iVar7 = iVar7 + 1;
            *(iVar5 + 8 + *0x15630) = -1 < iVar4;
            iVar6 = iVar6 + -1;
            iVar5 = iVar5 + 9;
        } while (iVar6 != 0);
    }
    if (*0x15170 == '\0') {
        iVar6 = *0x15324;
        iVar5 = *0x15630 + iVar6 * 8;
        if ((iVar2 == *(iVar6 + 4 + iVar5)) && (iVar3 == *(iVar6 + iVar5))) goto code_r0x00012246;
    }
    *0x15324 = arg1_00 + 1;
    *0x15170 = '\0';
    iVar4 = fcn.000123a0(arg1_00);
    *0x15324 = arg1_00;
code_r0x00012246:
    fcn.00013198();
    return iVar4;
}


/* fcn.000122f4 @ 0x122f4 */

void fcn.000122f4(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    char *pcVar2;
    int iVar3;
    uint in_register_00000014;
    int iVar4;
    int64_t iVar5;
    uchar auStackX_10 [8];
    
    if (CONCAT44(in_register_00000014,arg2) != *0x155d0) {
        iVar4 = 0;
        iVar3 = *0x15320;
        if (0 < *0x15320) {
            iVar5 = 0;
            do {
                if (*(iVar5 + 8 + *0x15630) != '\0') {
                    iVar1 = fcn.00012268(arg1,iVar4,auStackX_10);
                    *(iVar5 + 8 + *0x15630) = -1 < iVar1;
                    iVar3 = *0x15320;
                }
                iVar4 = iVar4 + 1;
                iVar5 = iVar5 + 9;
            } while (iVar4 < iVar3);
        }
        iVar5 = iVar3;
        if (0 < iVar3) {
            pcVar2 = *0x15630 + iVar5 * 9 + -1;
            do {
                if (*pcVar2 == '\x01') break;
                iVar3 = iVar3 + -1;
                iVar5 = iVar5 + -1;
                pcVar2 = pcVar2 + -9;
            } while (0 < iVar5);
        }
        *0x15320 = iVar3;
    }
    return;
}


/* fcn.00011ad0 @ 0x11ad0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00011ad0(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t arg3;
    uint32_t arg1_01;
    uint auStackX_18 [2];
    int64_t iStackX_20;
    int64_t var_40h;
    uint32_t var_48h;
    ulong uStack_38;
    int64_t iStack_30;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    arg1_00 = 0;
    iStackX_20 = 0;
    uStack_38 = 0;
    iVar2 = (**(*0x15680 + 0x98))(noname_0,0x14fc0,&iStack_30);
    if (-1 < iVar2) {
        iVar2 = fcn.00014be8(arg1,0x14f50,auStackX_18,&uStack_38);
        arg1_01 = iStack_30;
        if (iVar2 < 0) {
            if (iVar2 == -0x7ffffffffffffff2) {
                uStack_38 = fcn.00014a1c(arg1_01);
                (**(*0x15688 + 0x58))(arg1,0x14f50,6,uStack_38,iStack_30);
            }
        }
        else {
            cVar1 = fcn.00014ac0(iStackX_20,iStack_30);
            if (cVar1 == '\0') {
                if (iStack_30 != 0) {
                    if (iStackX_20 == 0) {
                        arg1_00 = fcn.00014a70(iStack_30);
                    }
                    else {
                        iVar2 = fcn.00014a1c(iStackX_20);
                        arg3 = fcn.00014a1c(arg1_01);
                        arg1_00 = fcn.000149f0(arg3 + iVar2);
                        fcn.00014e90(arg1_00,iStackX_20,iVar2);
                        *(arg1_00 + iVar2 + -3) = 1;
                        fcn.00014e90(arg1_00 + iVar2,arg1_01,arg3);
                    }
                }
                uStack_38 = fcn.00014a1c(arg1_00);
                (**(*0x15688 + 0x58))(arg1,0x14f50,auStackX_18[0],uStack_38,arg1_00);
                (**(*0x15680 + 0x48))(arg1_00);
            }
            (**(*0x15680 + 0x48))(iStackX_20);
        }
    }
    return;
}


/* fcn.00012978 @ 0x12978 */

int64_t fcn.00012978(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong uStackX_10;
    
    iVar2 = 0;
    if (*0x15700 < 10) {
        if (*0x15720 == 0) {
            iVar2 = 0;
        }
        else if (*0x15728 != NULL) {
            uVar5 = *0x15700 & 0xffffffff;
            piVar4 = *0x15728;
            do {
                *(piVar4 + uVar5 * 0x10 + 0x24) = arg1;
                iVar1 = *(arg1 + 0x18);
                if (iVar1 == 0) {
                    *(piVar4 + uVar5 * 0x10 + 0x2c) = 0xbadbad;
                }
                else {
                    iVar2 = (**(iVar1 + 0x20))(iVar1,piVar4 + 2,*(piVar4 + 0x1c),&uStackX_10);
                    uVar3 = uStackX_10;
                    if (iVar2 < 0) {
                        uVar3 = 0xbadbad;
                    }
                    *(piVar4 + uVar5 * 0x10 + 0x2c) = uVar3;
                }
                piVar4 = *piVar4;
            } while (piVar4 != NULL);
        }
    }
    else {
        iVar2 = -0x7ffffffffffffff7;
    }
    return iVar2;
}


/* fcn.00013c98 @ 0x13c98 */

ulong fcn.00013c98(void)

{
    uint64_t uVar1;
    ushort *puVar2;
    uint64_t uVar3;
    uint *puVar4;
    
    uVar3 = 0;
    uVar1 = *0x15618 + (1 - *0x15628) >> 1;
    if (*0x15618 < *0x15628) {
        uVar1 = uVar3;
    }
    puVar2 = *0x15628;
    puVar4 = *0x15638;
    if (uVar1 != 0) {
        do {
            uVar3 = uVar3 + 1;
            *puVar2 = 0x20;
            puVar2 = puVar2 + 1;
            *puVar4 = *0x15328;
            puVar4 = puVar4 + 1;
        } while (uVar3 < uVar1);
    }
    *0x15338 = 1;
    return 0;
}


/* fcn.00012ae0 @ 0x12ae0 */

void fcn.00012ae0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    
    if ((*arg1 == '\0') && (*arg2 == '\x01')) {
        uVar1 = 0;
        do {
            if (*arg1 != '\0') {
                return;
            }
            if (*arg2 == '\0') {
                return;
            }
            (**(*0x15680 + 0xf8))(1000);
            uVar1 = uVar1 + 1;
        } while (uVar1 < 100);
    }
    return;
}


/* fcn.00013528 @ 0x13528 */

int64_t fcn.00013528(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint uStack_28;
    uint uStack_24;
    uint32_t uStack_20;
    uint uStack_1c;
    uint uStack_18;
    
    puVar2 = *0x15708;
    *0x155b8 = *0x155b8 + '\x01';
    iVar3 = -0x7ffffffffffffffa;
    if ((*0x155a1 == '\0') && (*0x15708 != NULL)) {
        (**(*0x15680 + 0x168))(arg2,0x14);
        for (; puVar2 != NULL; puVar2 = *puVar2) {
            iVar1 = puVar2[4];
            if ((iVar1 == 0) && (iVar1 = puVar2[3], iVar1 == 0)) {
                if (puVar2[2] != 0) {
                    uStack_20 = uStack_20 & 0xffffff00;
                    iVar1 = puVar2[2];
                    goto code_r0x000135b7;
                }
            }
            else {
code_r0x000135b7:
                iVar3 = (**(iVar1 + 8))(iVar1,&uStack_28);
            }
            if (-1 < iVar3) {
                if ((uStack_20 < '\0') && ((uStack_20 & 0xbf) != *0x15080)) {
                    *0x15080 = *0x15080 & 0xc0 | uStack_20 & 7;
                    fcn.0001365c(arg1,0x15080);
                }
                *arg2 = CONCAT44(uStack_24,uStack_28);
                *(arg2 + 8) = CONCAT44(uStack_1c,uStack_20);
                *(arg2 + 0x10) = uStack_18;
                break;
            }
            *(arg2 + 4) = CONCAT44(uStack_20,uStack_24);
        }
    }
    *0x155b8 = *0x155b8 + -1;
    fcn.00012ae0(0x155b8,0x155cc);
    return iVar3;
}


/* fcn.00013214 @ 0x13214 */

int64_t fcn.00013214(ulong noname_0,int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    
    iVar4 = 0;
    *0x155b8 = *0x155b8 + '\x01';
    if (*0x155a1 == '\0') {
        piVar3 = *0x15708;
        if (*0x15708 == NULL) {
            iVar4 = -0x7ffffffffffffffa;
        }
        else {
            do {
                puVar1 = piVar3[2];
                if (puVar1 != NULL) {
                    iVar2 = (**puVar1)(puVar1,arg1 & 0xff);
                    if (iVar2 < 0) {
                        iVar4 = iVar2;
                    }
                }
                piVar3 = *piVar3;
            } while (piVar3 != NULL);
        }
    }
    else {
        iVar4 = -0x7ffffffffffffff1;
    }
    *0x155b8 = *0x155b8 + -1;
    fcn.00012ae0(0x155b8,0x155cc);
    return iVar4;
}


/* fcn.00013bc0 @ 0x13bc0 */

void fcn.00013bc0(int64_t arg1)

{
    ushort uVar1;
    int iVar2;
    ushort *puVar3;
    ushort *puVar4;
    int *piVar5;
    int64_t iVar6;
    
    piVar5 = *0x15638;
    puVar3 = *0x15628;
    iVar2 = 0;
    if (*0x15338 == '\0') {
        iVar6 = **0x15638;
        (**(arg1 + 0x38))(arg1,0,0);
        (**(arg1 + 0x28))(arg1,iVar6);
        puVar4 = puVar3;
        for (; puVar3 < *0x15618; puVar3 = puVar3 + 1) {
            if ((iVar2 == *0x15620) || (*piVar5 != iVar6)) {
                uVar1 = *puVar3;
                *puVar3 = 0;
                (**(arg1 + 8))(arg1,puVar4);
                *puVar3 = uVar1;
                puVar4 = puVar3;
                if (*piVar5 != iVar6) {
                    iVar6 = *piVar5;
                    (**(arg1 + 0x28))(arg1,iVar6);
                    goto code_r0x00013c49;
                }
                iVar2 = 1;
            }
            else {
code_r0x00013c49:
                iVar2 = iVar2 + 1;
            }
            piVar5 = piVar5 + 1;
        }
        uVar1 = puVar3[-1];
        puVar3[-1] = 0;
        (**(arg1 + 8))(arg1,puVar4);
        puVar3[-1] = uVar1;
    }
    return;
}


/* fcn.00013cf4 @ 0x13cf4 */

void fcn.00013cf4(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    uint8_t uVar3;
    int64_t aiStackX_10 [2];
    
    aiStackX_10[0] = 0;
    bVar1 = false;
    uVar3 = 0;
    if (*0x15640 != 0) {
        if (**(arg1 + 0x18) != 0) {
            do {
                aiStackX_10[1] = 0x24;
                iVar2 = (**arg1)(arg1,uVar3,aiStackX_10 + 1,aiStackX_10);
                if (-1 < iVar2) {
                    if ((*(aiStackX_10[0] + 4) == *0x15648) && (*(aiStackX_10[0] + 8) == *0x1564c)) {
                        bVar1 = true;
                        break;
                    }
                    (**(*0x15680 + 0x48))();
                    aiStackX_10[0] = 0;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < **(arg1 + 0x18));
            if (aiStackX_10[0] != 0) {
                (**(*0x15680 + 0x48))();
                aiStackX_10[0] = 0;
            }
            if ((bVar1) && (iVar2 = (**(arg1 + 8))(arg1,uVar3), -1 < iVar2)) {
                (**(arg1 + 0x10))(arg1,*0x15640,2,0,0,0,0,*0x15648,*0x1564c,0);
            }
        }
        (**(*0x15680 + 0x48))(*0x15640);
        *0x15640 = 0;
        *0x15648 = 0;
        *0x1564c = 0;
    }
    return;
}


/* fcn.00013f14 @ 0x13f14 */

void fcn.00013f14(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint auStackX_10 [2];
    
    uVar2 = 0;
    auStackX_10[0] = 0;
    uVar3 = *0x15618 - *0x15628 >> 1;
    if (uVar3 != 0) {
        iVar4 = 0;
        iVar5 = 0;
        iVar1 = *0x15628;
        do {
            if ((*(iVar5 + *0x15658) != *(iVar5 + iVar1)) || (*(iVar4 + *0x15650) != *(iVar4 + *0x15638))) {
                auStackX_10[0] = CONCAT22(auStackX_10[0]._2_2_,*(iVar5 + iVar1));
                (**(arg1 + 0x38))(arg1,uVar2 % *0x15620,uVar2 / *0x15620);
                (**(arg1 + 0x28))(arg1,*(iVar4 + *0x15638));
                (**(arg1 + 8))(arg1,auStackX_10);
                iVar1 = *0x15628;
            }
            uVar2 = uVar2 + 1;
            iVar5 = iVar5 + 2;
            iVar4 = iVar4 + 4;
        } while (uVar2 < uVar3);
    }
    return;
}


/* fcn.00013e30 @ 0x13e30 */

void fcn.00013e30(int64_t arg1)

{
    int64_t iVar1;
    
    if (*0x15640 != 0) {
        (**(*0x15680 + 0x48))();
        *0x15648 = 0;
        *0x1564c = 0;
        *0x15640 = 0;
    }
    if (**(arg1 + 0x18) != 0) {
        iVar1 = *(*(arg1 + 0x18) + 2);
        *0x1564c = *(iVar1 + 8);
        *0x15648 = *(iVar1 + 4);
        *0x15640 = fcn.000149f0(*0x1564c * *0x15648 << 2);
        if (*0x15640 != 0) {
            iVar1 = *(*(arg1 + 0x18) + 8);
            iVar1 = (**(arg1 + 0x10))(arg1,*0x15640,1,0,0,0,0,*(iVar1 + 4),*(iVar1 + 8),0);
            if (iVar1 < 0) {
                (**(*0x15680 + 0x48))(*0x15640);
                *0x15648 = 0;
                *0x1564c = 0;
                *0x15640 = 0;
            }
        }
    }
    return;
}


/* fcn.0001477c @ 0x1477c */

void fcn.0001477c(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    
    *0x15328 = *(arg1 + 8);
    *0x1532c = *(arg1 + 0xc);
    *0x15330 = *(arg1 + 0x10);
    iVar3 = *0x15324;
    iVar1 = *0x15630 + iVar3 * 8;
    while( true ) {
        iVar2 = *(iVar3 + iVar1);
        if (*0x1532c < iVar2) break;
        *0x1532c = *0x1532c - iVar2;
        *0x15330 = *0x15330 + 1;
    }
    iVar2 = *(iVar3 + 4 + iVar1);
    if (iVar2 <= *0x15330) {
        *0x15330 = iVar2 + -1;
    }
    return;
}


/* fcn.00013b00 @ 0x13b00 */

void fcn.00013b00(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint *puVar4;
    ushort *puVar5;
    
    iVar1 = *0x15620;
    uVar3 = *0x15618 - *0x15628;
    puVar5 = *0x15618 + iVar1 * -2;
    puVar4 = *0x15638 + (puVar5 - *0x15628 >> 1) * 4;
    (**(*0x15680 + 0x160))(*0x15628,iVar1 * 2 + *0x15628,uVar3 + iVar1 * -2);
    (**(*0x15680 + 0x160))(*0x15638,*0x15620 * 4 + *0x15638,uVar3 * 2 + *0x15620 * -4);
    if (0 < *0x15620) {
        uVar2 = *0x15620;
        do {
            *puVar5 = 0x20;
            puVar5 = puVar5 + 1;
            *puVar4 = *0x15328;
            puVar4 = puVar4 + 1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return;
}


/* fcn.00014600 @ 0x14600 */

int64_t fcn.00014600(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    iVar2 = 0;
    piVar3 = *0x15748;
    if (*0x15748 == NULL) {
        *0x1532c = 0;
    }
    else {
        do {
            if (piVar3[4] != '\0') {
                iVar1 = (**(piVar3[2] + 0x30))(piVar3[2]);
                if (iVar1 < 0) {
                    iVar2 = iVar1;
                }
            }
            piVar3 = *piVar3;
        } while (piVar3 != NULL);
        fcn.0001477c(*((*0x15748)[2] + 0x48));
    }
    fcn.00013c98();
    return iVar2;
}


/* fcn.00014d68 @ 0x14d68 */

int64_t fcn.00014d68(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.000148f4 @ 0x148f4 */

ulong fcn.000148f4(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x15698 == '\0') {
        if (*0x156b0 == 0) {
            if (*0x156a8 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x15680 + 0x140))(0x15350,0,0x156b0);
        }
    }
    else if (*0x156a0 == 0) {
        if ((*0x156a8 == '\0') && (*0x156b8 != 0)) {
    //WARNING: Could not recover jumptable at 0x00014933. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x156b8 + 0xd0))(0x15360,0,0x156a0);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


