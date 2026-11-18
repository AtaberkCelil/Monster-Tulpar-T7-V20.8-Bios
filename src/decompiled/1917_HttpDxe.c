// decompiled by r2ghidra: 1917_HttpDxe.pe32
// functions: 89

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x19060 = *(arg2 + 0x60);
    *0x19068 = *(arg2 + 0x58);
    *0x19058 = arg2;
    (**(*0x19060 + 0x140))(0x18dd0,0,0x19080);
    arg2_00 = 0x18c60;
    (**(*0x19060 + 0x98))(arg1,0x18c60,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010560(arg1,arg2_00);
    return;
}


/* fcn.00010560 @ 0x10560 */

int64_t fcn.00010560(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t noname_1;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    noname_1 = 0;
    iStackX_10 = arg2;
    (**(*0x19060 + 0x140))(0x18d40,0,0x19050);
    if (*0x19050 == 0) {
        (**(*0x19060 + 0x50))(0x200,8,0x10728,0,&iStackX_10);
        noname_1 = iStackX_10;
        (**(*0x19060 + 0xa8))(0x18d40,iStackX_10,auStackX_18);
        (**(*0x19060 + 0x68))(iStackX_10);
    }
    iVar1 = fcn.00016f7c(arg1,noname_1,0x18e20,arg1);
    if (-1 < iVar1) {
        iVar1 = fcn.00016f7c(arg1,noname_1,0x18e50,0);
        if (iVar1 < 0) {
            (**(*0x19060 + 0x150))(*0x18e48,0x18da0,0x18e20,0x18dc0,0x18e80,0x18cd0,0x18e98,0);
        }
    }
    return iVar1;
}


/* fcn.00016f7c @ 0x16f7c */

void fcn.00016f7c(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    (**(*0x19060 + 0x148))(arg2 + 0x28,0x18da0,arg2,0x18dc0,0x18e80,0x18cd0,0x18e98,0);
    return;
}


/* fcn.000171cc @ 0x171cc */

void fcn.000171cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x19060 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.00016ee0 @ 0x16ee0 */

void fcn.00016ee0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00016eb0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00016eb0 @ 0x16eb0 */

ulong fcn.00016eb0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x19060 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00017180 @ 0x17180 */

void fcn.00017180(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *apuStack_18 [2];
    
    iVar1 = (**(*0x19060 + 0x118))(arg1,arg3,apuStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**apuStack_18[0])(apuStack_18[0],arg4);
    }
    return;
}


/* fcn.00010684 @ 0x10684 */

void fcn.00010684(int64_t arg1,int64_t arg2)

{
    if (arg1 != 0) {
        if (arg2 == '\0') {
            if (*(arg1 + 0x30) != 0) {
                (**(*0x19060 + 0x120))(*(arg1 + 0x30),0x18e10,*(arg1 + 0x18),*(arg1 + 0x28));
                fcn.000171cc(*(arg1 + 0x28),*(arg1 + 0x18),0x18db0,*(arg1 + 0x30));
                *(arg1 + 0x30) = 0;
            }
        }
        else if (*(arg1 + 0x38) != 0) {
            (**(*0x19060 + 0x120))(*(arg1 + 0x38),0x18e00,*(arg1 + 0x20),*(arg1 + 0x28));
            fcn.000171cc(*(arg1 + 0x28),*(arg1 + 0x20),0x18df0,*(arg1 + 0x38));
            *(arg1 + 0x38) = 0;
        }
    }
    return;
}


/* fcn.00010770 @ 0x10770 */

ulong fcn.00010770(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar2 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = *(arg2 + 8);
        if (((uVar1 != 0) && (*(arg2 + 0x10) != 0)) && (uVar1 != 0)) {
            do {
                if (*(arg1 + -0x10) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x000107af. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar3 = (**(*arg2 + 8))(*arg2);
                    return uVar3;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001099c @ 0x1099c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001099c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,ulong noname_5,
                    uint32_t arg_40h)

{
    uchar uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    ulong *puVar7;
    uint8_t *puVar8;
    ulong uVar9;
    ulong *puVar10;
    uchar uVar11;
    bool bVar12;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    if (noname_4 == '\x04') {
        uVar11 = 0;
        iVar2 = (**(*0x19060 + 0x128))(arg2,0x18e10,&iStack_50,&var_40h);
        if (iVar2 < 0) {
            return 0;
        }
        iVar2 = 0;
        uVar3 = 0;
        if (var_40h != 0) {
            puVar8 = iStack_50 + 0x10;
            do {
                uVar1 = 0;
                if ((*puVar8 & 0x10) != 0) goto code_r0x00010a65;
                uVar3 = uVar3 + 1;
                puVar8 = puVar8 + 0x18;
            } while (uVar3 < var_40h);
        }
    }
    else {
        uVar11 = 1;
        iVar2 = (**(*0x19060 + 0x128))(arg2,0x18e00,&var_38h,&var_30h);
        if (iVar2 < 0) {
            return 0;
        }
        iVar2 = 0;
        uVar3 = 0;
        if (var_30h != 0) {
            puVar8 = var_38h + 0x10;
            do {
                iStack_50 = var_38h;
                uVar1 = 1;
                if ((*puVar8 & 0x10) != 0) goto code_r0x00010a65;
                uVar3 = uVar3 + 1;
                puVar8 = puVar8 + 0x18;
            } while (uVar3 < var_30h);
        }
    }
code_r0x00010a6e:
    (**(*0x19060 + 0x48))();
    if (iVar2 != 0) {
        uVar9 = 0x18d90;
        iVar4 = (**(*0x19060 + 0x118))(iVar2,0x18d90,&iStack_58,*(arg1 + 0x28),iVar2,2);
        iVar6 = iStack_58;
        if (iVar4 < 0) {
            return iVar4;
        }
        iVar4 = iStack_58 + -8;
        if (arg3 == 0) {
            fcn.00010684(iVar4,CONCAT71(uVar9 >> 8,uVar11));
            if ((*(iVar6 + 0x28) == 0) && (*(iVar6 + 0x30) == 0)) {
                (**(*0x19060 + 0x90))(iVar2,0x18d90,iStack_58);
                (**(*0x19060 + 0x48))(iVar4);
            }
        }
        else {
            var_28h = iStack_58;
            puVar10 = iStack_58 + 0x38;
            if (puVar10 == NULL) {
                return -0x7ffffffffffffffe;
            }
            var_20h = arg3;
            var_bp_18h = arg4;
            iVar2 = 0;
code_r0x00010ada:
            do {
                for (puVar7 = *puVar10; puVar7 != puVar10; puVar7 = *puVar7) {
                    iVar6 = fcn.00010770(puVar7,&var_28h);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    for (puVar5 = *puVar10; puVar5 != puVar10; puVar5 = *puVar5) {
                        if (puVar5 == puVar7) goto code_r0x00010b11;
                    }
                    if (puVar5 != puVar7) goto code_r0x00010ada;
code_r0x00010b11:
                }
                iVar6 = 0;
                for (puVar7 = *puVar10; puVar7 != puVar10; puVar7 = *puVar7) {
                    iVar6 = iVar6 + 1;
                }
                bVar12 = iVar6 != iVar2;
                iVar2 = iVar6;
            } while (bVar12);
        }
    }
    return 0;
code_r0x00010a65:
    uVar11 = uVar1;
    iVar2 = *(iStack_50 + 8 + uVar3 * 0x18);
    goto code_r0x00010a6e;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 35296 named .text
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


/* fcn.00016fd4 @ 0x16fd4 */

void fcn.00016fd4(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = *piVar2;
    piVar4 = **piVar2;
    while (piVar3 != piVar2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        iVar1 = *0x19060;
        piVar2[4] = piVar2[4] + -1;
        (**(iVar1 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    piVar3 = piVar2[2];
    piVar4 = *piVar3;
    while (piVar3 != piVar2 + 2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        (**(*0x19060 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    return;
}


/* fcn.000119c0 @ 0x119c0 */

void fcn.000119c0(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    arg1_00 = arg1;
    fcn.00011cdc(arg1_00);
    fcn.000113dc(arg1_00);
    if (*(arg1 + 0x78) != 0) {
        (**(*0x19060 + 0x70))();
        *(arg1 + 0x78) = 0;
    }
    if (*(arg1 + 0x268) != 0) {
        (**(*0x19060 + 0x48))();
        *(arg1 + 0x268) = 0;
        *(arg1 + 0x270) = 0;
    }
    if (*(arg1 + 0x118) != 0) {
        (**(*0x19060 + 0x48))();
        *(arg1 + 0x118) = 0;
    }
    if (*(arg1 + 0x288) != 0) {
        (**(*0x19060 + 0x48))();
        *(arg1 + 0x288) = 0;
    }
    if (*(arg1 + 800) != 0) {
        (**(*0x19060 + 0x48))();
        *(arg1 + 800) = 0;
    }
    fcn.00016fd4(arg1_00 + 0x2d0);
    fcn.00016fd4(arg1_00 + 0x2f8);
    iVar1 = *(arg1 + 0x330);
    if ((iVar1 != 0) && (*(arg1 + 0x338) != 0)) {
        (**(iVar1 + 8))(iVar1);
        *(arg1 + 0x338) = 0;
    }
    if (*(arg1 + 0x80) != 0) {
        (**(*0x19060 + 0x120))(*(arg1 + 0x80),0x18e10,*(*(arg1 + 0x40) + 0x18),*(*(arg1 + 0x40) + 0x28));
        (**(*0x19060 + 0x120))(*(arg1 + 0x80),0x18e10,*(*(arg1 + 0x40) + 0x18),*(arg1 + 0x38));
        fcn.000171cc(*(*(arg1 + 0x40) + 0x28),*(*(arg1 + 0x40) + 0x18),0x18db0,*(arg1 + 0x80));
    }
    iVar1 = *(*(arg1 + 0x40) + 0x30);
    if (iVar1 != 0) {
        (**(*0x19060 + 0x120))(iVar1,0x18e10,*(*(arg1 + 0x40) + 0x18),*(arg1 + 0x38));
    }
    if (*(arg1 + 0x128) != 0) {
        (**(*0x19060 + 0x120))(*(arg1 + 0x128),0x18e00,*(*(arg1 + 0x40) + 0x20),*(*(arg1 + 0x40) + 0x28));
        (**(*0x19060 + 0x120))(*(arg1 + 0x128),0x18e00,*(*(arg1 + 0x40) + 0x20),*(arg1 + 0x38));
        fcn.000171cc(*(*(arg1 + 0x40) + 0x28),*(*(arg1 + 0x40) + 0x20),0x18df0,*(arg1 + 0x128));
    }
    iVar1 = *(*(arg1 + 0x40) + 0x38);
    if (iVar1 != 0) {
        (**(*0x19060 + 0x120))(iVar1,0x18e00,*(*(arg1 + 0x40) + 0x20),*(arg1 + 0x38));
    }
    if (*(arg1 + 0x2b0) == '\0') {
        if (*(arg1 + 0x378) != 0) {
            (**(*0x19060 + 0x70))();
            *(arg1 + 0x378) = 0;
        }
        if (*(arg1 + 0x3f0) != 0) {
            (**(*0x19060 + 0x70))();
            *(arg1 + 0x3f0) = 0;
        }
    }
    else {
        if (*(arg1 + 0x3b0) != 0) {
            (**(*0x19060 + 0x70))();
            *(arg1 + 0x3b0) = 0;
        }
        if (*(arg1 + 0x428) != 0) {
            (**(*0x19060 + 0x70))();
            *(arg1 + 0x428) = 0;
        }
    }
    return;
}


/* fcn.00017124 @ 0x17124 */

int64_t fcn.00017124(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t *piVar4;
    bool bVar5;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = *piVar3;
    if (piVar1 != piVar3) {
        piVar4 = *piVar1;
        do {
            iVar2 = (*arg2)(piVar3,piVar1,arg3);
            if (iVar2 < 0) {
                return iVar2;
            }
            bVar5 = piVar4 != piVar3;
            piVar1 = piVar4;
            piVar4 = *piVar4;
        } while (bVar5);
    }
    return 0;
}


/* fcn.00018308 @ 0x18308 */

int64_t fcn.00018308(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    char *pcVar6;
    char *pcVar7;
    uint64_t uVar8;
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    iVar4 = 0;
    if (((arg2 == 0) || (arg3 == 0)) || (pcVar6 == NULL)) {
code_r0x0001863a:
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        if (*pcVar6 == '\0') {
            if (*(pcVar6 + 0x28) == 0) {
                pcVar6[0x20] = '\0';
                pcVar6[0x21] = '\0';
                pcVar6[0x22] = '\0';
                pcVar6[0x23] = '\0';
                pcVar6[0x24] = '\0';
                pcVar6[0x25] = '\0';
                pcVar6[0x26] = '\0';
                pcVar6[0x27] = '\0';
                *(pcVar6 + 0x28) = (pcVar6[1] != '\0') + 1;
            }
            pcVar7 = arg3;
code_r0x000183a0:
            if (arg2 + arg3 <= pcVar7) {
                if (*(pcVar6 + 0x28) == 0xd) {
                    iVar4 = -0x7fffffffffffffeb;
                }
                return iVar4;
            }
            iVar2 = *(pcVar6 + 0x28);
            if (iVar2 < 8) {
                if (iVar2 == 7) {
                    uVar3 = 0xd;
                    if (*pcVar7 == '\r') {
                        uVar3 = 8;
                    }
                    *(pcVar6 + 0x28) = uVar3;
                    goto code_r0x00018618;
                }
                if (iVar2 == 1) {
                    uVar8 = *(pcVar6 + 8) - *(pcVar6 + 0x20);
                    if (arg2 < *(pcVar6 + 8) - *(pcVar6 + 0x20)) {
                        uVar8 = arg2;
                    }
                    if (uVar8 == 0) {
                        *(pcVar6 + 8) = arg2;
                        uVar8 = arg2;
                    }
                    if ((*(pcVar6 + 0x10) != NULL) &&
                       (iVar5 = (**(pcVar6 + 0x10))(0,pcVar7,uVar8,*(pcVar6 + 0x18)), iVar5 < 0)) {
                        return iVar5;
                    }
                    *(pcVar6 + 0x20) = *(pcVar6 + 0x20) + uVar8;
                    pcVar7 = pcVar7 + uVar8;
                    if (*(pcVar6 + 0x20) == *(pcVar6 + 8)) {
code_r0x0001857d:
                        pcVar6[0x28] = '\f';
                        pcVar6[0x29] = '\0';
                        pcVar6[0x2a] = '\0';
                        pcVar6[0x2b] = '\0';
                        if ((*(pcVar6 + 0x10) != NULL) &&
                           (iVar5 = (**(pcVar6 + 0x10))(1,pcVar7,0,*(pcVar6 + 0x18)), iVar5 < 0)) {
                            return iVar5;
                        }
                    }
                    goto code_r0x000183a0;
                }
                if (iVar2 == 2) {
                    pcVar6[0x30] = '\0';
                    pcVar6[0x31] = '\0';
                    pcVar6[0x32] = '\0';
                    pcVar6[0x33] = '\0';
                    pcVar6[0x34] = '\0';
                    pcVar6[0x35] = '\0';
                    pcVar6[0x36] = '\0';
                    pcVar6[0x37] = '\0';
                    pcVar6[0x28] = '\x03';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                }
                else if (iVar2 != 3) {
                    if (iVar2 == 4) {
                        if (*pcVar7 != '\n') goto code_r0x00018521;
                        pcVar7 = pcVar7 + 1;
                        if (*(pcVar6 + 0x30) == 0) {
                            pcVar6[2] = '\x01';
                            pcVar6[0x28] = '\n';
                            pcVar6[0x29] = '\0';
                            pcVar6[0x2a] = '\0';
                            pcVar6[0x2b] = '\0';
                        }
                        else {
                            pcVar6[0x28] = '\x06';
                            pcVar6[0x29] = '\0';
                            pcVar6[0x2a] = '\0';
                            pcVar6[0x2b] = '\0';
                            pcVar6[0x38] = '\0';
                            pcVar6[0x39] = '\0';
                            pcVar6[0x3a] = '\0';
                            pcVar6[0x3b] = '\0';
                            pcVar6[0x3c] = '\0';
                            pcVar6[0x3d] = '\0';
                            pcVar6[0x3e] = '\0';
                            pcVar6[0x3f] = '\0';
                        }
                    }
                    else {
                        if (iVar2 == 5) goto code_r0x0001844c;
                        if (iVar2 == 6) {
                            uVar8 = (arg2 - pcVar7) + arg3;
                            if (*(pcVar6 + 0x30) - *(pcVar6 + 0x38) < uVar8) {
                                uVar8 = *(pcVar6 + 0x30) - *(pcVar6 + 0x38);
                            }
                            if ((*(pcVar6 + 0x10) != NULL) &&
                               (iVar5 = (**(pcVar6 + 0x10))(0,pcVar7,uVar8,*(pcVar6 + 0x18)), iVar5 < 0)) {
                                return iVar5;
                            }
                            *(pcVar6 + 0x38) = *(pcVar6 + 0x38) + uVar8;
                            pcVar7 = pcVar7 + uVar8;
                            *(pcVar6 + 8) = *(pcVar6 + 8) + uVar8;
                            if (*(pcVar6 + 0x38) == *(pcVar6 + 0x30)) {
                                pcVar6[0x28] = '\a';
                                pcVar6[0x29] = '\0';
                                pcVar6[0x2a] = '\0';
                                pcVar6[0x2b] = '\0';
                            }
                        }
                    }
                    goto code_r0x000183a0;
                }
                if ((*pcVar7 - 0x30U < 0x37) && ((0x7e0000007e03ffU >> (*pcVar7 - 0x30U & 0x3fU) & 1) != 0)) {
                    if (*(pcVar6 + 0x30) < 0xfffffffffffffff) {
                        if (*pcVar7 - 0x30U < 10) {
                            iVar2 = *pcVar7 + -0x30;
                        }
                        else {
                            cVar1 = *pcVar7;
                            if (*pcVar7 + 0x9fU < 0x1a) {
                                cVar1 = cVar1 + -0x20;
                            }
                            iVar2 = cVar1 + -0x37;
                        }
                        *(pcVar6 + 0x30) = *(pcVar6 + 0x30) * 0x10 + iVar2;
                        goto code_r0x00018618;
                    }
                    goto code_r0x0001863a;
                }
                if (*pcVar7 != ';') {
                    if (*pcVar7 == '\r') goto code_r0x00018455;
                    goto code_r0x00018521;
                }
                pcVar6[0x28] = '\x05';
                pcVar6[0x29] = '\0';
                pcVar6[0x2a] = '\0';
                pcVar6[0x2b] = '\0';
            }
            else if (iVar2 == 8) {
                if (*pcVar7 != '\n') {
code_r0x00018521:
                    pcVar6[0x28] = '\r';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                    goto code_r0x000183a0;
                }
                pcVar6[0x28] = '\x02';
                pcVar6[0x29] = '\0';
                pcVar6[0x2a] = '\0';
                pcVar6[0x2b] = '\0';
            }
            else if (iVar2 == 9) {
code_r0x0001844c:
                if (*pcVar7 == '\r') {
code_r0x00018455:
                    pcVar6[0x28] = '\x04';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                }
            }
            else {
                if (iVar2 != 10) {
                    if (iVar2 == 0xb) {
                        if (*pcVar7 == '\n') {
                            pcVar7 = pcVar7 + 1;
                            goto code_r0x0001857d;
                        }
                        goto code_r0x00018521;
                    }
                    if (iVar2 == 0xd) {
                        return -0x7fffffffffffffeb;
                    }
                    goto code_r0x000183a0;
                }
                if (*pcVar7 != '\r') {
                    pcVar6[0x28] = '\t';
                    pcVar6[0x29] = '\0';
                    pcVar6[0x2a] = '\0';
                    pcVar6[0x2b] = '\0';
                    goto code_r0x000183a0;
                }
                pcVar6[0x28] = '\v';
                pcVar6[0x29] = '\0';
                pcVar6[0x2a] = '\0';
                pcVar6[0x2b] = '\0';
            }
code_r0x00018618:
            pcVar7 = pcVar7 + 1;
            goto code_r0x000183a0;
        }
        pcVar6[0x28] = '\f';
        pcVar6[0x29] = '\0';
        pcVar6[0x2a] = '\0';
        pcVar6[0x2b] = '\0';
        if ((*(pcVar6 + 0x10) == NULL) || (iVar4 = (**(pcVar6 + 0x10))(1,arg3,0,*(pcVar6 + 0x18)), -1 < iVar4)) {
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.000113dc @ 0x113dc */

void fcn.000113dc(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x2b0) == '\0') {
        if (*(iVar1 + 0xe0) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0xe0) = 0;
        }
        if (*(iVar1 + 0xf8) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0xf8) = 0;
        }
    }
    else {
        if (*(iVar1 + 0x198) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x198) = 0;
        }
        if (*(iVar1 + 0x1b0) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x1b0) = 0;
        }
    }
    return;
}


/* fcn.00011cdc @ 0x11cdc */

int64_t fcn.00011cdc(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x60) == 4) {
        if (*(iVar2 + 0x2b0) == '\0') {
            *(iVar2 + 0x108) = 1;
            *(iVar2 + 0x110) = 0;
            iVar1 = (**(*(iVar2 + 0x88) + 0x38))(*(iVar2 + 0x88),iVar2 + 0xf8);
            if (iVar1 < 0) {
                return iVar1;
            }
            while (*(iVar2 + 0x110) == '\0') {
                (**(*(iVar2 + 0x88) + 0x48))(*(iVar2 + 0x88));
            }
        }
        else {
            *(iVar2 + 0x1c0) = 1;
            *(iVar2 + 0x1c8) = 0;
            iVar1 = (**(*(iVar2 + 0x130) + 0x30))(*(iVar2 + 0x130),iVar2 + 0x1b0);
            if (iVar1 < 0) {
                return iVar1;
            }
            while (*(iVar2 + 0x1c8) == '\0') {
                (**(*(iVar2 + 0x130) + 0x40))(*(iVar2 + 0x130));
            }
        }
    }
    *(iVar2 + 0x60) = 5;
    return 0;
}


/* fcn.00012dbc @ 0x12dbc */

void fcn.00012dbc(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_00000014;
    uint64_t uVar2;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    ulong *apuStack_18 [2];
    
    iStackX_20 = 0;
    uStackX_18 = 0;
    iVar1 = (**(*0x19060 + 0x138))(2,0x18c80,0,&uStackX_18,&iStackX_20);
    if (iVar1 == 0) {
        uVar2 = 0;
        if (uStackX_18 != 0) {
            do {
                iVar1 = (**(*0x19060 + 0x98))(*(iStackX_20 + uVar2 * 8),0x18c80,apuStack_18);
                if (iVar1 == 0) {
                    (**apuStack_18[0])(apuStack_18[0],arg1 & 0xffffffff,CONCAT44(in_register_00000014,arg2));
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_18);
        }
        (**(*0x19060 + 0x48))(iStackX_20);
    }
    return;
}


/* fcn.000112fc @ 0x112fc */

int64_t fcn.000112fc(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x2b0) == '\0') {
        iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,iVar2 + 0xf0,iVar2 + 0xe0);
        if (iVar1 < 0) goto code_r0x000113c1;
        iVar1 = iVar2 + 0xf8;
        iVar2 = iVar2 + 0x110;
    }
    else {
        iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,iVar2 + 0x1a8,iVar2 + 0x198);
        if (iVar1 < 0) goto code_r0x000113c1;
        iVar1 = iVar2 + 0x1b0;
        iVar2 = iVar2 + 0x1c8;
    }
    iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,iVar2,iVar1);
    if (-1 < iVar1) {
        return 0;
    }
code_r0x000113c1:
    fcn.000113dc(arg1);
    return iVar1;
}


/* fcn.00011470 @ 0x11470 */

int64_t fcn.00011470(int64_t arg1)

{
    int64_t iVar1;
    
    if (*(*(arg1 + 8) + 0x2b0) == '\0') {
        iVar1 = (**(*0x19060 + 0x50))();
        if (iVar1 < 0) {
            return iVar1;
        }
        *(arg1 + 0x28) = 1;
        *(arg1 + 0x20) = arg1 + 0x28;
        *(arg1 + 0x18) = 0x8000000000000006;
        *(arg1 + 0x30) = 1;
    }
    else {
        iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x10fcc,arg1,arg1 + 0x48);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(arg1 + 0x60) = 1;
        *(arg1 + 0x58) = arg1 + 0x60;
        *(arg1 + 0x50) = 0x8000000000000006;
        *(arg1 + 0x68) = 1;
    }
    return 0;
}


/* fcn.00011bf0 @ 0x11bf0 */

int64_t fcn.00011bf0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x2b0) == '\0') {
        *(iVar2 + 0xe8) = 0x8000000000000006;
        *(iVar2 + 0xf0) = 0;
        iVar1 = (**(*(iVar2 + 0x88) + 0x18))(*(iVar2 + 0x88),iVar2 + 0xe0);
        fcn.00012dbc(1,iVar1);
        if (-1 < iVar1) {
            while (*(iVar2 + 0xf0) == '\0') {
                (**(*(iVar2 + 0x88) + 0x48))(*(iVar2 + 0x88));
            }
            iVar1 = *(iVar2 + 0xe8);
code_r0x00011cc4:
            if (iVar1 < 0) {
                return iVar1;
            }
            *(iVar2 + 0x60) = 4;
            return iVar1;
        }
    }
    else {
        *(iVar2 + 0x1a0) = 0x8000000000000006;
        *(iVar2 + 0x1a8) = 0;
        iVar1 = (**(*(iVar2 + 0x130) + 0x10))(*(iVar2 + 0x130),iVar2 + 0x198);
        fcn.00012dbc(1,iVar1);
        if (-1 < iVar1) {
            while (*(iVar2 + 0x1a8) == '\0') {
                (**(*(iVar2 + 0x130) + 0x40))(*(iVar2 + 0x130));
            }
            iVar1 = *(iVar2 + 0x1a0);
            goto code_r0x00011cc4;
        }
    }
    return iVar1;
}


/* fcn.00014b80 @ 0x14b80 */

void fcn.00014b80(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t iVar1;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar1 + 0x2b0) == '\0') {
        if (*(iVar1 + 0x378) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x378) = 0;
        }
        if (*(iVar1 + 0x3f0) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x3f0) = 0;
        }
    }
    else {
        if (*(iVar1 + 0x3b0) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x3b0) = 0;
        }
        if (*(iVar1 + 0x428) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x428) = 0;
        }
    }
    return;
}


/* fcn.00015634 @ 0x15634 */

int64_t fcn.00015634(int64_t arg1,int64_t arg2)

{
    int *piVar1;
    int iVar2;
    uint32_t arg2_00;
    int64_t iVar3;
    int *arg2_01;
    int64_t arg1_00;
    int *piVar4;
    int64_t iVar5;
    int64_t *arg2_02;
    uint64_t arg3;
    uint64_t uStackX_8;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    
    piVar1 = arg1 + 0x370;
    iStackX_20 = 0;
    *piVar1 = 0;
    iVar3 = (***(arg1 + 0x360))(*(arg1 + 0x360),7);
    if (iVar3 < 0) {
        return iVar3;
    }
    uStackX_8 = 0x800;
    arg2_01 = fcn.00016ee0(0x800);
    if (arg2_01 == NULL) {
        return -0x7ffffffffffffff7;
    }
    iVar5 = 0;
    iVar3 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),0,0,arg2_01,&uStackX_8);
    if (iVar3 == -0x7ffffffffffffffb) {
        (**(*0x19060 + 0x48))(arg2_01);
        arg2_01 = fcn.00016ee0(uStackX_8);
        if (arg2_01 == NULL) {
            return -0x7ffffffffffffff7;
        }
        iVar5 = 0;
        iVar3 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),0,0,arg2_01,&uStackX_8);
    }
    if (-1 < iVar3) {
        arg1_00 = fcn.000173a0(uStackX_8 & 0xffffffff);
        if ((arg1_00 != 0) && (piVar4 = fcn.00017744(arg1_00,uStackX_8 & 0xffffffff,iVar5), piVar4 != NULL)) {
            if ((uStackX_8 != 0) && (piVar4 != arg2_01)) {
                section..text(piVar4,arg2_01,uStackX_8);
            }
            iVar3 = fcn.00015108(arg1,arg1_00);
            (**(*0x19060 + 0x48))(arg2_01);
            fcn.000174a4(arg1_00);
            if (iVar3 < 0) {
                return iVar3;
            }
            iVar2 = *piVar1;
            do {
                if ((iVar2 == 2) || ((arg2 != 0 && (iVar5 = (**(*0x19060 + 0x78))(arg2), -1 < iVar5)))) {
                    if (*piVar1 != 2) {
                        return -0x7fffffffffffffeb;
                    }
                    return iVar3;
                }
                arg2_02 = &iStackX_20;
                iVar5 = fcn.0001549c(arg1,arg2_02,arg2);
                iVar3 = iStackX_20;
                if (iVar5 < 0) {
                    return iVar5;
                }
                arg2_00 = *(iStackX_20 + 0x84);
                iVar5 = fcn.00016ee0(arg2_00);
                if (iVar5 == 0) {
                    fcn.000174a4(iVar3);
                    return -0x7ffffffffffffff7;
                }
                fcn.000177fc(iVar3,arg2_02,arg2_00,iVar5);
                fcn.000174a4(iVar3);
                uStackX_8 = 0x800;
                arg2_01 = fcn.00016ee0(0x800);
                if (arg2_01 == NULL) {
                    return -0x7ffffffffffffff7;
                }
                arg3 = arg2_00;
                iVar3 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),iVar5,arg3,arg2_01,&uStackX_8);
                if (iVar3 == -0x7ffffffffffffffb) {
                    (**(*0x19060 + 0x48))(arg2_01);
                    arg2_01 = fcn.00016ee0(uStackX_8);
                    if (arg2_01 == NULL) {
                        (**(*0x19060 + 0x48))(iVar5);
                        return -0x7ffffffffffffff7;
                    }
                    arg3 = arg2_00;
                    iVar3 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),iVar5,arg3,arg2_01,&uStackX_8);
                }
                (**(*0x19060 + 0x48))(iVar5);
                if (iVar3 < 0) goto code_r0x00015a2d;
                if (uStackX_8 != 0) {
                    iVar5 = fcn.000173a0(uStackX_8 & 0xffffffff);
                    if ((iVar5 == 0) || (piVar4 = fcn.00017744(iVar5,uStackX_8 & 0xffffffff,arg3), piVar4 == NULL))
                    break;
                    if ((uStackX_8 != 0) && (piVar4 != arg2_01)) {
                        section..text(piVar4,arg2_01,uStackX_8);
                    }
                    iVar3 = fcn.00015108(arg1,iVar5);
                    fcn.000174a4(iVar5);
                    if (iVar3 < 0) goto code_r0x00015a2d;
                }
                (**(*0x19060 + 0x48))(arg2_01);
                iStackX_18 = 0x800;
                arg2_01 = fcn.00016ee0(0x800);
                if (arg2_01 == NULL) {
                    return -0x7ffffffffffffff7;
                }
                iVar3 = (**(*(arg1 + 0x360) + 8))(*(arg1 + 0x360),7,arg2_01,&iStackX_18);
                if (iVar3 == -0x7ffffffffffffffb) {
                    (**(*0x19060 + 0x48))(arg2_01);
                    arg2_01 = fcn.00016ee0(iStackX_18);
                    if (arg2_01 == NULL) {
                        return -0x7ffffffffffffff7;
                    }
                    iVar3 = (**(*(arg1 + 0x360) + 8))(*(arg1 + 0x360),7,arg2_01,&iStackX_18);
                }
                if (iVar3 < 0) goto code_r0x00015a2d;
                *piVar1 = *arg2_01;
                (**(*0x19060 + 0x48))(arg2_01);
                if (*piVar1 == 4) {
                    return -0x7fffffffffffffeb;
                }
                iVar2 = *piVar1;
            } while( true );
        }
        iVar3 = -0x7ffffffffffffff7;
    }
code_r0x00015a2d:
    (**(*0x19060 + 0x48))(arg2_01);
    return iVar3;
}


/* fcn.00015bc8 @ 0x15bc8 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00015bc8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    int64_t arg2_00;
    int *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int *piVar4;
    int64_t iVar5;
    uint64_t arg1_00;
    uint64_t uVar6;
    uint64_t uVar7;
    uint *in_stack_00000028;
    uint32_t auStack_38 [2];
    int *piStack_30;
    uint32_t var_bp_10h;
    int64_t var_bp_8h;
    
    arg1_00 = 0;
    auStack_38[0] = 1;
    piStack_30 = NULL;
    uVar7 = 0;
    piVar1 = fcn.00016ee0(0x10);
    if (piVar1 == NULL) {
        iVar5 = -0x7ffffffffffffff7;
    }
    else {
        *piVar1 = arg3;
        *(piVar1 + 2) = arg2;
        piStack_30 = piVar1;
        iVar5 = (**(*(arg1 + 0x360) + 0x18))(*(arg1 + 0x360),&piStack_30,auStack_38,arg4 & 0xffffffff);
        uVar6 = 0;
        if (-1 < iVar5) {
            uVar2 = auStack_38[0];
            if (uVar2 != 0) {
                piVar4 = piStack_30;
                do {
                    arg1_00 = arg1_00 + *piVar4;
                    piVar4 = piVar4 + 4;
                    uVar2 = uVar2 - 1;
                } while (uVar2 != 0);
            }
            iVar3 = fcn.00016ee0(arg1_00);
            if (iVar3 == 0) {
                iVar5 = -0x7ffffffffffffff7;
            }
            else {
                uVar2 = uVar6;
                if (auStack_38[0] != 0) {
                    do {
                        arg2_00 = *(uVar6 + 8 + piStack_30);
                        if ((*(uVar6 + piStack_30) != 0) && (uVar7 + iVar3 != arg2_00)) {
                            section..text(uVar7 + iVar3,arg2_00,*(uVar6 + piStack_30));
                        }
                        uVar7 = uVar7 + *(uVar6 + piStack_30);
                        (**(*0x19060 + 0x48))(*(uVar6 + 8 + piStack_30));
                        uVar2 = uVar2 + 1;
                        uVar6 = uVar6 + 0x10;
                    } while (uVar2 < auStack_38[0]);
                }
                *in_stack_00000028 = arg1_00;
                *(in_stack_00000028 + 2) = iVar3;
            }
        }
        if (piVar1 != NULL) {
            if (piStack_30 == piVar1) {
                piStack_30 = NULL;
            }
            (**(*0x19060 + 0x48))(piVar1);
        }
        if (piStack_30 != NULL) {
            (**(*0x19060 + 0x48))();
        }
    }
    return iVar5;
}


/* fcn.00016c3c @ 0x16c3c */

ulong fcn.00016c3c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00016a1c(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00016cbe;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x00016cbe:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.00018664 @ 0x18664 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00018664(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    uint64_t arg3_00;
    uint64_t uVar9;
    char *pcStackX_18;
    uint32_t var_40h;
    uint64_t uStack_38;
    ulong *puStack_30;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    arg3_00 = 0;
    uStack_38 = 0;
    pcStackX_18 = NULL;
    puStack_30 = NULL;
    if (arg3 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (arg4 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*arg1 == 0) {
        if (*(arg1 + 8) != 0) {
            return -0x7ffffffffffffffe;
        }
        iVar3 = 0;
        if (*arg1 == 0) {
            iVar5 = *(arg1 + 0x18);
            goto code_r0x000186e0;
        }
    }
    else {
        if (arg2 == 0) {
            return -0x7ffffffffffffffe;
        }
        iVar3 = *(arg1 + 8);
        iVar5 = iVar3;
code_r0x000186e0:
        if (iVar5 == 0) {
            return -0x7ffffffffffffffe;
        }
    }
    if (iVar3 != 0) {
        iVar3 = (**(*0x19060 + 0x140))(0x18d40,0,&puStack_30);
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.00016ee0(*(arg1 + 8) << 3);
        if (iVar3 == 0) {
            return -0x7ffffffffffffff7;
        }
        if (*(arg1 + 8) != 0) {
            uVar6 = arg3_00;
            uVar9 = arg3_00;
            do {
                iVar5 = *(arg1 + 0x10) + uVar9;
                uVar9 = uVar9 + 0x10;
                *(iVar3 + uVar6 * 8) = iVar5;
                uVar6 = uVar6 + 1;
            } while (uVar6 < *(arg1 + 8));
        }
        iVar5 = (**puStack_30)(puStack_30,0,0,0,0,*(arg1 + 8),iVar3,&uStack_38,&pcStackX_18);
        (**(*0x19060 + 0x48))(iVar3);
        if ((iVar5 < 0) || (pcStackX_18 == NULL)) {
            return iVar5;
        }
    }
    uVar6 = arg3_00;
    if (*(arg1 + 8) != 0) {
        uVar6 = uStack_38;
    }
    if (*arg1 != 0) {
        uVar9 = arg3_00;
        do {
            uVar7 = uVar9 + 1;
            iVar3 = uVar9 + 1;
            uVar9 = uVar7;
        } while (" HTTP/1.1\r\n"[iVar3] != '\0');
        cVar1 = *arg2;
        uVar9 = arg3_00;
        while (cVar1 != '\0') {
            uVar9 = uVar9 + 1;
            cVar1 = *(uVar9 + arg2);
        }
        uVar6 = uVar6 + 8 + uVar9 + uVar7;
    }
    iVar3 = *(arg1 + 0x18);
    *arg3 = 0;
    pcVar4 = fcn.00016ee0(uVar6 + iVar3);
    *arg3 = pcVar4;
    if (pcVar4 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
code_r0x00018862:
        *arg3 = 0;
        return iVar3;
    }
    if (*arg1 == NULL) goto code_r0x000189a8;
    iVar2 = **arg1;
    if (iVar2 == 0) {
        pcVar8 = 0x19004;
code_r0x000188e6:
        if (pcVar4 != pcVar8) {
            section..text(pcVar4,pcVar8,3);
        }
        pcVar4 = pcVar4 + 3;
    }
    else if (iVar2 == 1) {
        pcVar8 = "POST";
code_r0x000188c6:
        if (pcVar4 != pcVar8) {
            section..text(pcVar4,pcVar8,4);
        }
        pcVar4 = pcVar4 + 4;
    }
    else if (iVar2 == 2) {
        if (pcVar4 != "PATCH") {
            section..text(pcVar4,0x1900c,5);
        }
        pcVar4 = pcVar4 + 5;
    }
    else {
        if (iVar2 == 5) {
            pcVar8 = "HEAD";
            goto code_r0x000188c6;
        }
        if (iVar2 == 6) {
            pcVar8 = 0x19008;
            goto code_r0x000188e6;
        }
        if (iVar2 != 7) {
            iVar3 = -0x7ffffffffffffffe;
            (**(*0x19060 + 0x48))(pcVar4);
            goto code_r0x00018862;
        }
        if (pcVar4 != "DELETE") {
            section..text(pcVar4,0x19024,6);
        }
        pcVar4 = pcVar4 + 6;
    }
    uVar6 = arg3_00;
    do {
        uVar9 = uVar6 + 1;
        pcVar8 = uVar6 + 0x1902d;
        uVar6 = uVar9;
    } while (*pcVar8 != '\0');
    if ((uVar9 != 0) && (pcVar4 != 0x1902c)) {
        section..text(pcVar4,0x1902c,uVar9);
    }
    pcVar4 = pcVar4 + uVar9;
    if (*arg2 != '\0') {
        do {
            arg3_00 = arg3_00 + 1;
        } while (*(arg3_00 + arg2) != '\0');
        if ((arg3_00 != 0) && (pcVar4 != arg2)) {
            section..text(pcVar4,arg2,arg3_00);
        }
    }
    pcVar4 = pcVar4 + arg3_00;
    if (pcVar4 != " HTTP/1.1\r\n") {
        section..text(pcVar4,0x18ff8,0xb);
    }
    pcVar4 = pcVar4 + 0xb;
    if (pcStackX_18 != NULL) {
        if ((uStack_38 != 0) && (pcVar4 != pcStackX_18)) {
            section..text(pcVar4,pcStackX_18,uStack_38);
        }
        pcVar4 = pcVar4 + uStack_38;
    }
code_r0x000189a8:
    pcVar8 = *(arg1 + 0x20);
    if (pcVar8 != NULL) {
        if ((*(arg1 + 0x18) != 0) && (pcVar4 != pcVar8)) {
            section..text(pcVar4,pcVar8,*(arg1 + 0x18));
        }
        pcVar4 = pcVar4 + *(arg1 + 0x18);
    }
    *arg4 = pcVar4 - *arg3;
    if (pcStackX_18 != NULL) {
        (**(*0x19060 + 0x48))();
    }
    return 0;
}


/* fcn.000122a8 @ 0x122a8 */

//WARNING: Removing unreachable block (ram,0x000123ea)
//WARNING: Removing unreachable block (ram,0x000123ef)

int64_t fcn.000122a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uchar *arg2_00;
    int64_t iVar2;
    uchar *arg2_01;
    int64_t iVar3;
    uint uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    
    iVar2 = 0;
    iVar6 = 0;
    if (*(arg1 + 0x328) != '\0') {
        arg2_00 = fcn.00016ee0(0x4005);
        if (arg2_00 == NULL) {
            return -0x7ffffffffffffff7;
        }
        iVar2 = fcn.00016ee0(((arg4 >> 0xe) + 1) * 0x4805);
        uVar1 = arg4;
        if (iVar2 == 0) {
            iVar3 = -0x7ffffffffffffff7;
            goto code_r0x0001252e;
        }
        for (; uVar1 != 0; uVar1 = uVar1 - uVar5) {
            *arg2_00 = 0x17;
            uVar5 = uVar1;
            if (0x4000 < uVar1) {
                uVar5 = 0x4000;
            }
            arg2_00[1] = *(arg1 + 0x340);
            arg2_01 = (arg3 - uVar1) + arg4;
            arg2_00[2] = *(arg1 + 0x341);
            *(arg2_00 + 3) = uVar5;
            if ((uVar5 != 0) && (arg2_00 + 5 != arg2_01)) {
                section..text(arg2_00 + 5,arg2_01,uVar5);
            }
            iVar3 = fcn.00015bc8(arg1,arg2_00,uVar5 + 5,0,iVar6);
            if (iVar3 < 0) goto code_r0x0001252e;
            (**(*0x19060 + 0x48))(iVar6);
            iVar6 = 0;
            fcn.000102c0(arg2_00,0x4005);
        }
        (**(*0x19060 + 0x48))(arg2_00);
    }
    uVar4 = arg4;
    if (*(arg1 + 0x2b0) == '\0') {
        iVar6 = *(arg1 + 0x88);
        if (*(arg1 + 0x328) == '\0') {
            *(*(arg2 + 0x20) + 4) = uVar4;
            *(*(arg2 + 0x20) + 0x10) = uVar4;
            *(*(arg2 + 0x20) + 0x18) = arg3;
        }
        else {
            *(*(arg2 + 0x20) + 4) = 0;
            *(*(arg2 + 0x20) + 0x10) = 0;
            *(*(arg2 + 0x20) + 0x18) = iVar2;
        }
        *(arg2 + 0x18) = 0x8000000000000006;
        *(arg2 + 0xf0) = 0;
        iVar3 = (**(iVar6 + 0x28))(iVar6);
    }
    else {
        iVar6 = *(arg1 + 0x130);
        if (*(arg1 + 0x328) == '\0') {
            *(*(arg2 + 0x58) + 4) = uVar4;
            *(*(arg2 + 0x58) + 0x10) = uVar4;
            *(*(arg2 + 0x58) + 0x18) = arg3;
        }
        else {
            *(*(arg2 + 0x58) + 4) = 0;
            *(*(arg2 + 0x58) + 0x10) = 0;
            *(*(arg2 + 0x58) + 0x18) = iVar2;
        }
        *(arg2 + 0x50) = 0x8000000000000006;
        *(arg2 + 0xf0) = 0;
        iVar3 = (**(iVar6 + 0x20))(iVar6);
    }
    arg2_00 = NULL;
    if (-1 < iVar3) {
        return iVar3;
    }
code_r0x0001252e:
    if (*(arg1 + 0x328) != '\0') {
        if (arg2_00 != NULL) {
            (**(*0x19060 + 0x48))(arg2_00);
        }
        if (iVar2 != 0) {
            (**(*0x19060 + 0x48))(iVar2);
        }
    }
    return iVar3;
}


/* fcn.00011524 @ 0x11524 */

int64_t fcn.00011524(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x2b0) == '\0') {
        iVar1 = (**(*0x19060 + 0x50))(0x200);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(iVar2 + 0x200) = 1;
        *(iVar2 + 0x1f0) = iVar2 + 0x1f8;
        *(iVar2 + 0x1e8) = 0x8000000000000006;
    }
    else {
        iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,iVar2 + 0x250,iVar2 + 0x218);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(iVar2 + 0x238) = 1;
        *(iVar2 + 0x228) = iVar2 + 0x230;
        *(iVar2 + 0x220) = 0x8000000000000006;
    }
    return 0;
}


/* fcn.00015d40 @ 0x15d40 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00015d40(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t arg1_00;
    int64_t iVar7;
    ulong *arg2_00;
    uint32_t arg2_01;
    uint64_t arg1_01;
    int64_t in_R8;
    uint64_t arg3;
    ulong uStackX_20;
    int64_t var_58h;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t in_stack_ffffffffffffffb8;
    int64_t iStack_40;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    arg2_00 = &uStackX_20;
    uStackX_20 = 0;
    uStack_58 = 0;
    iStack_50 = 0;
    iVar4 = fcn.0001549c(arg1,arg2_00,in_R8);
    iVar6 = uStackX_20;
    if (iVar4 < 0) {
        return iVar4;
    }
    arg2_01 = *(uStackX_20 + 0x84);
    arg1_01 = arg2_01;
    puVar5 = fcn.00016ee0(arg1_01);
    if (puVar5 == NULL) {
        fcn.000174a4(iVar6);
        return -0x7ffffffffffffff7;
    }
    fcn.000177fc(iVar6,arg2_00,arg2_01,puVar5);
    fcn.000174a4(iVar6);
    uVar2 = *puVar5;
    uStackX_20 = CONCAT44(uStackX_20._4_4_,uVar2);
    uVar3 = uStackX_20;
    uStackX_20._1_1_ = uVar2 >> 8;
    uStackX_20._2_1_ = uVar2 >> 0x10;
    uStackX_20 = uVar3;
    if (uVar2 == '\x17') {
        if ((uStackX_20._1_1_ == '\x03') && (uStackX_20._2_1_ - 1U < 3)) {
            iVar4 = fcn.00015bc8(arg1,puVar5,arg1_01,1,in_stack_ffffffffffffffb8);
            (**(*0x19060 + 0x48))(puVar5);
            if (iVar4 < 0) {
                if (iVar4 != -0x7fffffffffffffeb) {
                    return iVar4;
                }
                uStack_58 = 0x800;
                iVar6 = fcn.00016ee0(0x800);
                if (iVar6 == 0) {
                    return -0x7ffffffffffffff7;
                }
                iVar7 = 0;
                iVar4 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),0,0,iVar6,&uStack_58);
                if (iVar4 == -0x7ffffffffffffffb) {
                    (**(*0x19060 + 0x48))(iVar6);
                    iVar6 = fcn.00016ee0(uStack_58);
                    if (iVar6 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    iVar7 = 0;
                    iVar4 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),0,0,iVar6,&uStack_58);
                }
                if (-1 < iVar4) {
                    if (uStack_58 != 0) {
                        arg1_00 = fcn.000173a0(uStack_58 & 0xffffffff);
                        if ((arg1_00 == 0) ||
                           (iVar4 = fcn.00017744(arg1_00,uStack_58 & 0xffffffff,iVar7), iVar4 == 0)) {
                            iVar4 = -0x7ffffffffffffff7;
                            goto code_r0x00015eff;
                        }
                        if ((uStack_58 != 0) && (iVar4 != iVar6)) {
                            section..text(iVar4,iVar6,uStack_58);
                        }
                        iVar4 = fcn.00015108(arg1,arg1_00);
                        fcn.000174a4(arg1_00);
                    }
                    (**(*0x19060 + 0x48))(iVar6);
                    iVar6 = -0x7fffffffffffffeb;
                    if (iVar4 < 0) {
                        iVar6 = iVar4;
                    }
                    return iVar6;
                }
code_r0x00015eff:
                (**(*0x19060 + 0x48))(iVar6);
                return iVar4;
            }
            uVar1 = *(iStack_40 + 3);
            arg2_01 = uVar1;
            puVar5 = fcn.00016ee0(uVar1);
            if (puVar5 == NULL) {
                return -0x7ffffffffffffff7;
            }
            if ((uVar1 != 0) && (puVar5 != iStack_40 + 5)) {
                section..text(puVar5,iStack_40 + 5,uVar1);
            }
            (**(*0x19060 + 0x48))(iStack_40);
        }
    }
    else if (((uVar2 == '\x15') && (uStackX_20._1_1_ == '\x03')) && (uStackX_20._2_1_ - 1U < 3)) {
        uStack_58 = 0x800;
        iVar6 = fcn.00016ee0(0x800);
        if (iVar6 == 0) {
code_r0x00015fdf:
            (**(*0x19060 + 0x48))(puVar5);
            return -0x7ffffffffffffff7;
        }
        arg3 = arg1_01;
        iVar4 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),puVar5,arg1_01,iVar6,&uStack_58);
        if (iVar4 == -0x7ffffffffffffffb) {
            (**(*0x19060 + 0x48))(iVar6);
            iVar6 = fcn.00016ee0(uStack_58);
            if (iVar6 == 0) goto code_r0x00015fdf;
            iVar4 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),puVar5,arg1_01,iVar6,&uStack_58);
            arg3 = arg1_01;
        }
        (**(*0x19060 + 0x48))(puVar5);
        if (iVar4 < 0) {
code_r0x000160a1:
            (**(*0x19060 + 0x48))(iVar6);
            return iVar4;
        }
        if (uStack_58 != 0) {
            iVar4 = fcn.000173a0(uStack_58 & 0xffffffff);
            iVar7 = fcn.00017744(iVar4,uStack_58 & 0xffffffff,arg3);
            if (iVar7 == 0) {
                iVar4 = -0x7ffffffffffffff7;
                goto code_r0x000160a1;
            }
            if ((uStack_58 != 0) && (iVar7 != iVar6)) {
                section..text(iVar7,iVar6,uStack_58);
            }
            fcn.00015108(arg1,iVar4);
            fcn.000174a4(iVar4);
        }
        (**(*0x19060 + 0x48))(iVar6);
        iStack_50 = 0x800;
        puVar5 = fcn.00016ee0(0x800);
        if (puVar5 == NULL) {
            return -0x7ffffffffffffff7;
        }
        iVar4 = (**(*(arg1 + 0x360) + 8))(*(arg1 + 0x360),7,puVar5,&iStack_50);
        if (iVar4 == -0x7ffffffffffffffb) {
            (**(*0x19060 + 0x48))(puVar5);
            puVar5 = fcn.00016ee0(iStack_50);
            if (puVar5 == NULL) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = (**(*(arg1 + 0x360) + 8))(*(arg1 + 0x360),7,puVar5,&iStack_50);
        }
        if (iVar4 < 0) {
            (**(*0x19060 + 0x48))();
            return iVar4;
        }
        *(arg1 + 0x370) = *puVar5;
        (**(*0x19060 + 0x48))(puVar5);
        if (*(arg1 + 0x370) == 4) {
            return -0x7fffffffffffffeb;
        }
        puVar5 = NULL;
        arg2_01 = 0;
    }
    *(arg2 + 8) = puVar5;
    *arg2 = arg2_01;
    return iVar4;
}


/* fcn.000169d4 @ 0x169d4 */

char * fcn.000169d4(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    char *pcVar2;
    char *pcVar3;
    uint in_register_00000014;
    char *pcVar4;
    char *pcVar5;
    
    pcVar4 = CONCAT44(in_register_00000014,arg2);
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*pcVar4 == '\0') {
        return pcVar2;
    }
    do {
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
            return NULL;
        }
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (cVar1 == *pcVar4) {
            do {
                if (cVar1 == '\0') break;
                pcVar3 = pcVar3 + 1;
                pcVar5 = pcVar5 + 1;
                cVar1 = *pcVar3;
            } while (cVar1 == *pcVar5);
        }
        if (*pcVar5 == '\0') {
            return pcVar2;
        }
        if (*pcVar3 == '\0') {
            return NULL;
        }
        pcVar2 = pcVar2 + 1;
    } while( true );
}


/* fcn.00016f0c @ 0x16f0c */

ulong fcn.00016f0c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    cVar1 = *arg1;
    do {
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        iVar3 = 0;
        while ((cVar1 != '\0' && (cVar1 != ';'))) {
            iVar3 = iVar3 + 1;
            cVar1 = *(arg1 + iVar3);
        }
        iVar2 = fcn.000169a0(arg1,arg2,iVar3);
        if ((iVar2 == 0) && (*(iVar3 + arg2) == '\0')) {
            return 0;
        }
        arg1 = arg1 + iVar3;
        cVar1 = *arg1;
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar1 != ';') break;
            arg1 = arg1 + 1;
            cVar1 = *arg1;
        } while (cVar1 != '\0');
        cVar1 = *arg1;
    } while( true );
}


/* fcn.000169a0 @ 0x169a0 */

int64_t fcn.000169a0(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.000116ac @ 0x116ac */

ulong fcn.000116ac(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong uVar5;
    uchar auStackX_18 [8];
    
    if (arg2 == '\0') {
        puVar1 = arg1 + 0x80;
        iVar2 = fcn.00017180(*(*(arg1 + 0x40) + 0x28),*(*(arg1 + 0x40) + 0x18),0x18db0,puVar1);
        if (((iVar2 < 0) ||
            (iVar2 = (**(*0x19060 + 0x118))
                               (*puVar1,0x18e10,auStackX_18,*(*(arg1 + 0x40) + 0x18),*(*(arg1 + 0x40) + 0x28),0x10)
            , iVar2 < 0)) ||
           (iVar2 = (**(*0x19060 + 0x118))(*puVar1,0x18e10,arg1 + 0x88,*(*(arg1 + 0x40) + 0x18),*(arg1 + 0x38),8),
           iVar2 < 0)) goto code_r0x00011880;
        uVar4 = 0x18e10;
        uVar5 = *(*(arg1 + 0x40) + 0x18);
        uVar3 = *(*(arg1 + 0x40) + 0x30);
    }
    else {
        puVar1 = arg1 + 0x128;
        iVar2 = fcn.00017180(*(*(arg1 + 0x40) + 0x28),*(*(arg1 + 0x40) + 0x20),0x18df0,puVar1);
        if (((iVar2 < 0) ||
            (iVar2 = (**(*0x19060 + 0x118))
                               (*puVar1,0x18e00,auStackX_18,*(*(arg1 + 0x40) + 0x20),*(*(arg1 + 0x40) + 0x28),0x10)
            , iVar2 < 0)) ||
           (iVar2 = (**(*0x19060 + 0x118))(*puVar1,0x18e00,arg1 + 0x130,*(*(arg1 + 0x40) + 0x20),*(arg1 + 0x38),8)
           , iVar2 < 0)) goto code_r0x00011880;
        uVar4 = 0x18e00;
        uVar5 = *(*(arg1 + 0x40) + 0x20);
        uVar3 = *(*(arg1 + 0x40) + 0x38);
    }
    iVar2 = (**(*0x19060 + 0x118))(uVar3,uVar4,auStackX_18,uVar5,*(arg1 + 0x38),8);
    if (-1 < iVar2) {
        iVar2 = fcn.00016ee0(0x1000);
        *(arg1 + 800) = iVar2;
        if (iVar2 != 0) {
            return 0;
        }
    }
code_r0x00011880:
    if (*(arg1 + 0x80) != 0) {
        (**(*0x19060 + 0x120))(*(arg1 + 0x80),0x18e10,*(*(arg1 + 0x40) + 0x18),*(*(arg1 + 0x40) + 0x28));
        (**(*0x19060 + 0x120))(*(arg1 + 0x80),0x18e10,*(*(arg1 + 0x40) + 0x18),*(arg1 + 0x38));
        fcn.000171cc(*(*(arg1 + 0x40) + 0x28),*(*(arg1 + 0x40) + 0x18),0x18db0,*(arg1 + 0x80));
    }
    iVar2 = *(*(arg1 + 0x40) + 0x30);
    if (iVar2 != 0) {
        (**(*0x19060 + 0x120))(iVar2,0x18e10,*(*(arg1 + 0x40) + 0x18),*(arg1 + 0x38));
    }
    if (*(arg1 + 0x128) != 0) {
        (**(*0x19060 + 0x120))(*(arg1 + 0x128),0x18e00,*(*(arg1 + 0x40) + 0x20),*(*(arg1 + 0x40) + 0x28));
        (**(*0x19060 + 0x120))(*(arg1 + 0x128),0x18e00,*(*(arg1 + 0x40) + 0x20),*(arg1 + 0x38));
        fcn.000171cc(*(*(arg1 + 0x40) + 0x28),*(*(arg1 + 0x40) + 0x20),0x18df0,*(arg1 + 0x128));
    }
    iVar2 = *(*(arg1 + 0x40) + 0x38);
    if (iVar2 != 0) {
        (**(*0x19060 + 0x120))(iVar2,0x18e00,*(*(arg1 + 0x40) + 0x20),*(arg1 + 0x38));
    }
    return 0x8000000000000003;
}


/* fcn.00014878 @ 0x14878 */

ulong fcn.00014878(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uStackX_10;
    
    uStackX_10 = 0;
    (**(*0x19060 + 0x140))(0x18ce0,0,arg2);
    puVar1 = *arg2;
    if ((puVar1 != NULL) && (iVar2 = (**puVar1)(puVar1,&uStackX_10), -1 < iVar2)) {
        iVar2 = (**(*0x19060 + 0x118))(uStackX_10,0x18ca0,arg3,arg1,uStackX_10,2);
        if ((-1 < iVar2) &&
           (iVar2 = (**(*0x19060 + 0x118))(uStackX_10,0x18de0,arg4,arg1,uStackX_10,2), -1 < iVar2)) {
            return uStackX_10;
        }
        (**(*arg2 + 8))(*arg2,uStackX_10);
    }
    return 0;
}


/* fcn.00017ce8 @ 0x17ce8 */

int64_t fcn.00017ce8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint16_t *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t arg2_00;
    uint32_t uVar5;
    uint64_t uVar6;
    uchar *puVar7;
    uchar uVar8;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        uVar4 = 0;
        puVar2 = fcn.00016ee0(0x44);
        if (puVar2 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            arg2_00 = 0;
            uVar8 = 0;
            uVar5 = 8;
            uVar6 = 8;
            for (puVar7 = arg1; puVar7 < (arg2 & 0xffffffffU) + arg1; puVar7 = puVar7 + 1) {
                uVar4 = CONCAT71(uVar4 >> 8,*puVar7);
                uVar1 = fcn.00017bfc(uVar4,arg2_00);
                arg2_00 = uVar1;
                if (uVar1 < 9) {
                    if (uVar1 != 8) {
                        if (uVar1 == 1) {
                            uVar6 = 0;
                        }
                        else if (1 < uVar1) {
                            if (uVar1 < 5) goto code_r0x00017dfe;
                            if (uVar1 != 5) {
                                if (uVar1 != 6) {
                                    if (uVar1 == 7) {
                                        uVar6 = 2;
                                    }
                                    goto code_r0x00017dcf;
                                }
                                uVar8 = 1;
                            }
                            uVar6 = 1;
                        }
                        goto code_r0x00017dcf;
                    }
                }
                else {
                    if (uVar1 == 9) {
                        uVar6 = 3;
                        uVar4 = 0;
                    }
                    else {
                        uVar4 = uVar1 - 10;
                        if (uVar1 - 10 == 0) goto code_r0x00017dfe;
                        uVar1 = uVar1 - 0xb;
                        uVar4 = uVar1;
                        if (uVar1 == 0) {
                            uVar6 = 4;
                        }
                        else if (uVar1 == 7) {
                            iVar3 = -0x7ffffffffffffffe;
                            goto code_r0x00017e24;
                        }
                    }
code_r0x00017dcf:
                    uVar1 = uVar6;
                    if (uVar1 == uVar5) {
                        *(puVar2 + (uVar6 & 0xffffffff) * 4 + 4) = *(puVar2 + (uVar6 & 0xffffffff) * 4 + 4) + 1;
                    }
                    else {
                        uVar4 = uVar6 & 0xffffffff;
                        *puVar2 = *puVar2 | 1 << (uVar1 & 0x1f);
                        *(puVar2 + uVar4 * 4 + 2) = puVar7 - arg1;
                        (puVar2 + uVar4 * 4 + 4)[0] = 1;
                        (puVar2 + uVar4 * 4 + 4)[1] = 0;
                        uVar5 = uVar1;
                    }
                }
code_r0x00017dfe:
            }
            if (((*puVar2 & 2) != 0) && (iVar3 = fcn.00017a88(arg1,CONCAT71(arg2_00 >> 8,uVar8),puVar2), iVar3 < 0))
            {
code_r0x00017e24:
                (**(*0x19060 + 0x48))(puVar2);
                return iVar3;
            }
            *arg3 = puVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00017e64 @ 0x17e64 */

int64_t fcn.00017e64(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg3_00;
    uint32_t auStackX_10 [2];
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if ((*arg2 & 0x40) == 0) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        arg3_00 = fcn.00016eb0(arg1,*(arg2 + 0x38) + 1);
        if (arg3_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            arg1 = *(arg2 + 0x34) + arg1;
            if (arg1 == 0) {
                iVar1 = -0x7ffffffffffffffe;
            }
            else {
                iVar1 = fcn.0001796c(arg1,*(arg2 + 0x38),arg3_00,auStackX_10);
            }
            if (iVar1 < 0) {
                (**(*0x19060 + 0x48))(arg3_00);
            }
            else {
                *arg3 = arg3_00;
                *(auStackX_10[0] + arg3_00) = 0;
                iVar1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00018050 @ 0x18050 */

int64_t fcn.00018050(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    char *arg3_00;
    char *pcVar3;
    uint64_t uVar4;
    uint32_t uStackX_10;
    uint uStackX_14;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar1 = *arg2;
        *arg3 = 0;
        if ((uVar1 & 0x80) == 0) {
            iVar2 = -0x7ffffffffffffff2;
        }
        else {
            arg3_00 = fcn.00016eb0(arg1,*(arg2 + 0x40) + 1);
            if (arg3_00 == NULL) {
                iVar2 = -0x7ffffffffffffff7;
            }
            else {
                iVar2 = *(arg2 + 0x3c) + arg1;
                if (iVar2 == 0) {
                    iVar2 = -0x7ffffffffffffffe;
                }
                else {
                    iVar2 = fcn.0001796c(iVar2,*(arg2 + 0x40),arg3_00,&uStackX_10);
                }
                if (-1 < iVar2) {
                    uVar4 = uStackX_10;
                    arg3_00[uVar4] = '\0';
                    if (uVar4 != 0) {
                        pcVar3 = arg3_00;
                        do {
                            if (9 < *pcVar3 - 0x30U) goto code_r0x0001814e;
                            pcVar3 = pcVar3 + 1;
                        } while (pcVar3 - arg3_00 < uVar4);
                    }
                    iVar2 = fcn.00016a7c(*(arg2 + 0x3c) + arg1,0,&uStackX_10);
                    if (CONCAT44(uStackX_14,uStackX_10) < 0x10000) {
                        *arg3 = uStackX_10;
                    }
                    else {
code_r0x0001814e:
                        iVar2 = -0x7ffffffffffffffe;
                    }
                }
                (**(*0x19060 + 0x48))(arg3_00);
            }
        }
    }
    return iVar2;
}


/* fcn.000170c0 @ 0x170c0 */

ulong fcn.000170c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.00017058(arg1);
    if (piVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        piVar2[2] = arg2;
        piVar2[3] = arg3;
        *piVar2 = arg1;
        piVar1 = *(arg1 + 8);
        piVar2[1] = piVar1;
        *piVar1 = piVar2;
        *(arg1 + 8) = piVar2;
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00017218 @ 0x17218 */

ulong fcn.00017218(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_8 [8];
    int64_t var_20h;
    uint64_t uStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    
    if ((arg1 != 0) && (arg2 != 0)) {
        uVar2 = 0;
        var_20h = arg1;
        do {
            while( true ) {
                if (9 < *var_20h - 0x30U) goto code_r0x000172c9;
                iVar1 = fcn.00016a7c(var_20h,&var_20h,&uStackX_20);
                if (iVar1 < 0) {
                    return 0x8000000000000002;
                }
                if (uVar2 != 4) break;
                if (0x20 < uStackX_20) {
                    return 0x8000000000000002;
                }
code_r0x0001729b:
                if (*var_20h != '/') goto code_r0x000172cf;
                var_20h = var_20h + 1;
            }
            if (0xff < uStackX_20) {
                return 0x8000000000000002;
            }
            auStackX_8[uVar2] = uStackX_20;
            uVar2 = uVar2 + 1;
            if (uVar2 == 4) goto code_r0x0001729b;
            if (uVar2 < 4) {
                if (*var_20h != '.') {
                    return 0x8000000000000002;
                }
                var_20h = var_20h + 1;
            }
        } while (uVar2 < 5);
code_r0x000172c9:
        if (3 < uVar2) {
code_r0x000172cf:
            iVar1 = var_20h;
            if (arg2 != auStackX_8) {
                section..text(arg2,auStackX_8,4);
            }
            if (*iVar1 == '\0') {
                return 0;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.00017f2c @ 0x17f2c */

int64_t fcn.00017f2c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t arg3_00;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    uint32_t in_R9D;
    uint32_t *arg4;
    uint32_t uStackX_8;
    uint uStackX_c;
    
    iVar4 = 0;
    if (((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) {
        if ((*arg2 & 0x40) == 0) {
            return -0x7ffffffffffffff2;
        }
        uVar1 = *(arg2 + 0x38);
        if (((1 < uVar1) && (pcVar3 = *(arg2 + 0x34) + arg1, *pcVar3 == '[')) && (pcVar3[uVar1 - 1] == ']')) {
            arg3_00 = fcn.00016eb0(arg1,uVar1);
            if (arg3_00 == 0) {
                return -0x7ffffffffffffff7;
            }
            if (pcVar3 + 1 == NULL) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                arg4 = &uStackX_8;
                iVar2 = fcn.0001796c(pcVar3 + 1,uVar1 - 2,arg3_00,arg4);
                in_R9D = arg4;
            }
            if (iVar2 < 0) {
                (**(*0x19060 + 0x48))();
                return iVar2;
            }
            *(uStackX_8 + arg3_00) = 0;
            iVar2 = fcn.00016cd0(arg3_00,&uStackX_8,arg3,in_R9D);
            if ((iVar2 < 0) || (*CONCAT44(uStackX_c,uStackX_8) != '\0')) {
                iVar4 = -0x7ffffffffffffffe;
            }
            (**(*0x19060 + 0x48))(arg3_00);
            return iVar4;
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.00016a50 @ 0x16a50 */

uint64_t fcn.00016a50(uint32_t arg1,int64_t arg2)

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


/* fcn.000161d0 @ 0x161d0 */

//WARNING: Variable defined which should be unmapped: var_1fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.000161d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t var_fh;
    int32_t var_1fh;
    int32_t var_23h;
    int64_t iStackX_20;
    uint32_t var_67h;
    int64_t var_7fh;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int *piStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    char cStack_50;
    ushort uStack_4f;
    uchar auStack_4d [4];
    uchar auStack_49 [8];
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar1 = *(arg1 + 0x40);
    fcn.000102c0(&iStack_80,0x20);
    iVar2 = (**(*0x19060 + 0x98))(*(iVar1 + 0x28),0x18d60,&iStack_88);
    uVar3 = 0;
    uVar4 = 0;
    if (-1 < iVar2) {
        uStack_98 = 0;
        iVar2 = (**(iStack_88 + 8))(iStack_88,4,&uStack_98,0);
        uVar3 = 0;
        uVar4 = 0;
        if (iVar2 == -0x7ffffffffffffffb) {
            uVar3 = fcn.00016eb0(0x8000000000000005,uStack_98);
            if (uVar3 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = (**(iStack_88 + 8))(iStack_88,4,&uStack_98,uVar3);
            if (iVar2 < 0) {
                (**(*0x19060 + 0x48))(uVar3);
                uVar3 = 0;
            }
            else {
                uVar4 = uStack_98 >> 2;
            }
        }
    }
    iStack_90 = 0;
    iStackX_20 = 0;
    iVar2 = fcn.00017180(*(iVar1 + 0x28),*(iVar1 + 0x18),0x18c70,&iStack_90);
    if (-1 < iVar2) {
        iVar2 = (**(*0x19060 + 0x118))(iStack_90,0x18c90,&iStackX_20,*(iVar1 + 0x18),*(iVar1 + 0x28),0x10);
        if (-1 < iVar2) {
            fcn.000102c0(&uStack_60,0x28);
            cStack_50 = *(arg1 + 0x2b2);
            uStack_60 = uVar4;
            uStack_58 = uVar3;
            iVar2 = fcn.000168bc();
            *NULL = (**(iVar2 + 0x18))(0x230);
            iVar2 = fcn.000168bc();
            var_39h._1_4_ = (**(iVar2 + 0x18))(0x22f);
            if (cStack_50 == '\0') {
                if (auStack_4d != arg1 + 0x2b3) {
                    section..text(auStack_4d,arg1 + 0x2b3,4);
                }
                if (auStack_49 != arg1 + 0x2b7) {
                    section..text(auStack_49,arg1 + 0x2b7,4);
                }
            }
            uStack_4f = 0x1101;
            iVar2 = (**(iStackX_20 + 8))(iStackX_20,&uStack_60);
            if (-1 < iVar2) {
                fcn.000102c0(&iStack_80,0x20);
                iVar2 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,&var_fh + 1,&iStack_80);
                if (-1 < iVar2) {
                    var_fh._1_1_ = '\0';
                    iStack_78 = -0x7ffffffffffffffa;
                    iVar2 = (**(iStackX_20 + 0x10))(iStackX_20,arg2,&iStack_80);
                    if (-1 < iVar2) {
                        while (var_fh._1_1_ == '\0') {
                            (**(iStackX_20 + 0x30))(iStackX_20);
                        }
                        iVar2 = iStack_78;
                        if (-1 < iStack_78) {
                            if (((piStack_68 == NULL) || (*piStack_68 == 0)) || (iVar2 = *(piStack_68 + 2), iVar2 == 0)
                               ) {
                                iVar2 = -0x7ffffffffffffff9;
                            }
                            else {
                                if (arg3 != iVar2) {
                                    section..text(arg3,iVar2,4);
                                }
                                iVar2 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (iStack_80 != 0) {
        (**(*0x19060 + 0x70))(iStack_80);
    }
    if (piStack_68 != NULL) {
        if (*(piStack_68 + 2) != 0) {
            (**(*0x19060 + 0x48))(*(piStack_68 + 2));
        }
        (**(*0x19060 + 0x48))(piStack_68);
    }
    if (iStackX_20 != 0) {
        (**(iStackX_20 + 8))(iStackX_20,0);
        (**(*0x19060 + 0x120))(iStack_90,0x18c90,*(iVar1 + 0x18),*(iVar1 + 0x28));
    }
    if (iStack_90 != 0) {
        fcn.000171cc(*(iVar1 + 0x28),*(iVar1 + 0x18),0x18c70,iStack_90);
    }
    if (uVar3 != 0) {
        (**(*0x19060 + 0x48))(uVar3);
    }
    return iVar2;
}


/* fcn.00016548 @ 0x16548 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.00016548(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint uVar4;
    char acStackX_8 [3];
    int32_t var_13h;
    int64_t var_17h;
    int32_t var_1fh;
    int32_t var_23h;
    int64_t iStackX_20;
    uint32_t var_67h;
    int64_t var_7fh;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t iStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int *piStack_68;
    ushort uStack_60;
    uchar auStack_5e [18];
    uint uStack_4c;
    uchar auStack_48 [7];
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar1 = *(arg1 + 0x40);
    iStackX_20 = 0;
    iStack_90 = 0;
    uVar4 = 0;
    fcn.000102c0(&iStack_80,0x20);
    iVar2 = (**(*0x19060 + 0x98))(*(iVar1 + 0x28),0x18d20,&iStack_88);
    iVar3 = 0;
    if (-1 < iVar2) {
        uStack_98 = 0;
        iVar2 = (**(iStack_88 + 8))(iStack_88,6,&uStack_98,0);
        iVar3 = 0;
        if (iVar2 == -0x7ffffffffffffffb) {
            iVar3 = fcn.00016eb0(0x8000000000000005,uStack_98);
            if (iVar3 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = (**(iStack_88 + 8))(iStack_88,6,&uStack_98,iVar3);
            if (iVar2 < 0) {
                (**(*0x19060 + 0x48))(iVar3);
                iVar3 = 0;
            }
            else {
                uVar4 = uStack_98 >> 4;
            }
        }
    }
    iVar2 = fcn.00017180(*(iVar1 + 0x28),*(iVar1 + 0x20),0x18d50,&iStack_90);
    if (-1 < iVar2) {
        iVar2 = (**(*0x19060 + 0x118))(iStack_90,0x18d80,&iStackX_20,*(iVar1 + 0x20),*(iVar1 + 0x28),0x10);
        if (-1 < iVar2) {
            fcn.000102c0(&uStack_60,0x28);
            uStack_60 = 0x1101;
            uStack_4c = uVar4;
            _auStack_48 = iVar3;
            iVar2 = fcn.000168bc();
            *NULL = (**(iVar2 + 0x18))(0x230);
            iVar2 = fcn.000168bc();
            var_39h._1_4_ = (**(iVar2 + 0x18))(0x22f);
            if (auStack_5e != arg1 + 0x2be) {
                section..text(auStack_5e,arg1 + 0x2be,0x10);
            }
            iVar2 = (**(iStackX_20 + 8))(iStackX_20,&uStack_60);
            if (-1 < iVar2) {
                acStackX_8[0] = '\0';
                iStack_78 = -0x7ffffffffffffffa;
                iVar2 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,acStackX_8,&iStack_80);
                if (-1 < iVar2) {
                    iVar2 = (**(iStackX_20 + 0x10))(iStackX_20,arg2,&iStack_80);
                    if (-1 < iVar2) {
                        while (acStackX_8[0] == '\0') {
                            (**(iStackX_20 + 0x30))(iStackX_20);
                        }
                        iVar2 = iStack_78;
                        if (-1 < iStack_78) {
                            if (((piStack_68 == NULL) || (*piStack_68 == 0)) || (iVar2 = *(piStack_68 + 2), iVar2 == 0)
                               ) {
                                iVar2 = -0x7ffffffffffffff9;
                            }
                            else {
                                if (arg3 != iVar2) {
                                    section..text(arg3,iVar2,0x10);
                                }
                                iVar2 = 0;
                            }
                        }
                    }
                }
            }
        }
    }
    if (iStack_80 != 0) {
        (**(*0x19060 + 0x70))(iStack_80);
    }
    if (piStack_68 != NULL) {
        if (*(piStack_68 + 2) != 0) {
            (**(*0x19060 + 0x48))(*(piStack_68 + 2));
        }
        (**(*0x19060 + 0x48))(piStack_68);
    }
    if (iStackX_20 != 0) {
        (**(iStackX_20 + 8))(iStackX_20,0);
        (**(*0x19060 + 0x120))(iStack_90,0x18d80,*(iVar1 + 0x20),*(iVar1 + 0x28));
    }
    if (iStack_90 != 0) {
        fcn.000171cc(*(iVar1 + 0x28),*(iVar1 + 0x20),0x18d50,iStack_90);
    }
    if (iVar3 != 0) {
        (**(*0x19060 + 0x48))(iVar3);
    }
    return iVar2;
}


/* fcn.00015a44 @ 0x15a44 */

int64_t fcn.00015a44(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uStackX_8;
    
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    *(arg1 + 0x370) = 3;
    iVar1 = (***(arg1 + 0x360))(*(arg1 + 0x360),7,arg1 + 0x370,4);
    if (-1 < iVar1) {
        uStackX_8 = 0x800;
        iVar1 = fcn.00016ee0(0x800);
        if (iVar1 == 0) {
            return -0x7ffffffffffffff7;
        }
        iVar3 = 0;
        iVar2 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),0,0,iVar1,&uStackX_8);
        if (iVar2 == -0x7ffffffffffffffb) {
            (**(*0x19060 + 0x48))(iVar1);
            iVar1 = fcn.00016ee0(uStackX_8);
            if (iVar1 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar3 = 0;
            iVar2 = (**(*(arg1 + 0x360) + 0x10))(*(arg1 + 0x360),0,0,iVar1,&uStackX_8);
        }
        if (-1 < iVar2) {
            iVar2 = fcn.000173a0(uStackX_8 & 0xffffffff);
            if ((iVar2 != 0) && (iVar3 = fcn.00017744(iVar2,uStackX_8 & 0xffffffff,iVar3), iVar3 != 0)) {
                if ((uStackX_8 != 0) && (iVar3 != iVar1)) {
                    section..text(iVar3,iVar1,uStackX_8);
                }
                iVar3 = fcn.00015108(arg1,iVar2);
                (**(*0x19060 + 0x48))(iVar1);
                fcn.000174a4(iVar2);
                return iVar3;
            }
            iVar2 = -0x7ffffffffffffff7;
        }
        (**(*0x19060 + 0x48))(iVar1);
        return iVar2;
    }
    return iVar1;
}


/* fcn.00013b90 @ 0x13b90 */

uint64_t fcn.00013b90(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 == 0) {
        return 0x8000000000000002;
    }
    if (*(iVar2 + 0x58) != 4) {
        return 0x8000000000000013;
    }
    uVar1 = fcn.00017124(arg1 + 0x2c8,0x13a3c,arg2);
    if (uVar1 < 0) {
        if (arg2 == 0) {
            return uVar1;
        }
        if (uVar1 == 0x8000000000000015) {
            return 0;
        }
    }
    if (*(iVar2 + 800) == '\0') {
        uVar1 = fcn.00017124(arg1 + 0x2f0,0x13a3c,arg2);
        if (uVar1 < 0) {
            if (arg2 != 0) {
                return -(uVar1 != 0x8000000000000015) & 0x800000000000000e;
            }
            return uVar1;
        }
    }
    else if (*(iVar2 + 0x2a8) == '\0') {
        (**(*(iVar2 + 0x80) + 0x40))(*(iVar2 + 0x80),iVar2 + 1000);
    }
    else {
        (**(*(iVar2 + 0x128) + 0x38))(*(iVar2 + 0x128),iVar2 + 0x420);
    }
    return 0;
}


/* fcn.00014f7c @ 0x14f7c */

int64_t fcn.00014f7c(int64_t arg1)

{
    uint *puVar1;
    char cVar2;
    int64_t iVar3;
    
    *(arg1 + 0x350) = *(arg1 + 0x118);
    puVar1 = arg1 + 0x348;
    *(arg1 + 0x344) = 0;
    *puVar1 = 1;
    *(arg1 + 0x34c) = 0;
    iVar3 = fcn.00016880();
    cVar2 = (**(iVar3 + 8))(0x18d10,0x10002);
    if (cVar2 == '\x01') {
        *puVar1 = 0;
    }
    *(arg1 + 0x358) = 0;
    iVar3 = (***(arg1 + 0x360))(*(arg1 + 0x360),1,arg1 + 0x344);
    if ((-1 < iVar3) && (iVar3 = (***(arg1 + 0x360))(*(arg1 + 0x360),5,puVar1,4), -1 < iVar3)) {
        iVar3 = fcn.00016880();
        cVar2 = (**(iVar3 + 8))(0x18d10,0x10002);
        if (cVar2 != '\x01') {
            iVar3 = fcn.00016880();
            cVar2 = (**(iVar3 + 8))(0x18d10,0x10003);
            if ((cVar2 == '\0') && (iVar3 = (***(arg1 + 0x360))(*(arg1 + 0x360),0xb,arg1 + 0x34c,0xc), iVar3 < 0)) {
                return iVar3;
            }
        }
        iVar3 = (***(arg1 + 0x360))(*(arg1 + 0x360),7,arg1 + 0x358,4);
        if ((-1 < iVar3) &&
           (((iVar3 = fcn.00014e94(arg1), -1 < iVar3 || (iVar3 == -0x7ffffffffffffff2)) &&
            (iVar3 = fcn.00014c14(arg1), -1 < iVar3)))) {
            iVar3 = fcn.00014960(arg1);
            if (iVar3 < 0) {
                fcn.00014b80(arg1);
            }
        }
    }
    return iVar3;
}


/* fcn.00011d8c @ 0x11d8c */

int64_t fcn.00011d8c(int64_t arg1,int64_t arg2)

{
    ushort *arg1_00;
    uint *puVar1;
    int64_t iVar2;
    
    arg1_00 = arg1 + 0x90;
    fcn.000102c0(arg1_00,0x20);
    *arg1_00 = 0xff08;
    *(arg1 + 0xa8) = arg1 + 0xb0;
    *(arg1 + 0x92) = *(arg1 + 0x2b2);
    if (*(arg1 + 0x2b2) == '\0') {
        if (arg1 + 0x93 != arg1 + 0x2b3) {
            section..text(arg1 + 0x93,arg1 + 0x2b3,4);
        }
        if (arg1 + 0x97 != arg1 + 0x2b7) {
            section..text(arg1 + 0x97,arg1 + 0x2b7,4);
        }
    }
    *(arg1 + 0x9c) = *(arg1 + 700);
    *(arg1 + 0xa2) = *(arg1 + 0x120);
    *(arg1 + 0xa4) = 1;
    if (arg1 + 0x9e != arg1 + 0x122) {
        section..text(arg1 + 0x9e,arg1 + 0x122,4);
    }
    puVar1 = *(arg1 + 0xa8);
    *puVar1 = 0xffff;
    puVar1[1] = 0xffff;
    puVar1[2] = 5;
    puVar1[3] = 0x3c;
    puVar1[4] = 0xc;
    puVar1[5] = 2;
    puVar1[7] = 6;
    puVar1[8] = 0x1c20;
    puVar1[9] = 0x1e;
    *(puVar1 + 10) = 1;
    *(arg1 + 0xa8) = puVar1;
    if (*(arg1 + 0x60) - 4U < 2) {
        iVar2 = (**(*(arg1 + 0x88) + 8))(*(arg1 + 0x88),0);
        if (iVar2 < 0) {
            return iVar2;
        }
        *(arg1 + 0x60) = 3;
    }
    iVar2 = (**(*(arg1 + 0x88) + 8))(*(arg1 + 0x88),arg1_00);
    if (((-1 < iVar2) && (iVar2 = fcn.000112fc(arg1), -1 < iVar2)) && (iVar2 = fcn.00011470(arg2), -1 < iVar2)) {
        *(arg1 + 0x60) = 2;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00012048 @ 0x12048 */

int64_t fcn.00012048(uint32_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int aiStackX_8 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((*(arg1_00 + 0x60) < 2) || (puVar2 = *(arg1_00 + 0x88), puVar2 == NULL)) {
        return -0x7ffffffffffffffa;
    }
    iVar3 = (**puVar2)(puVar2,aiStackX_8,0,0,0,0);
    if (iVar3 < 0) {
        return iVar3;
    }
    if (aiStackX_8[0] != 4) {
        if (4 < aiStackX_8[0]) {
            fcn.00011cdc(arg1);
        }
        iVar3 = fcn.00011bf0(arg1);
        if (-1 < iVar3) {
            if (*(arg1_00 + 0x328) == '\0') {
                return iVar3;
            }
            piVar1 = arg1_00 + 0x78;
            if (((*piVar1 != 0) || (iVar3 = (**(*0x19060 + 0x50))(0x80000000,8,0,0,piVar1), -1 < iVar3)) &&
               (iVar3 = (**(*0x19060 + 0x58))(*piVar1,2,600000000), -1 < iVar3)) {
                iVar3 = fcn.00015634(arg1_00,*piVar1);
                fcn.00012dbc(2,iVar3);
                (**(*0x19060 + 0x58))(*piVar1,0,0);
                if (-1 < iVar3) {
                    return iVar3;
                }
            }
            fcn.00014b80(arg1);
            return iVar3;
        }
        return iVar3;
    }
    return 0;
}


/* fcn.00011efc @ 0x11efc */

int64_t fcn.00011efc(int64_t arg1,int64_t arg2)

{
    ushort *arg1_00;
    uint *puVar1;
    int64_t iVar2;
    
    arg1_00 = arg1 + 0x138;
    fcn.000102c0(arg1_00,0x30);
    *arg1_00 = 0xff00;
    *(arg1 + 0x160) = arg1 + 0x168;
    *(arg1 + 0x15e) = 1;
    *(arg1 + 0x14a) = *(arg1 + 0x2ce);
    *(arg1 + 0x15c) = *(arg1 + 0x120);
    if (arg1 + 0x13a != arg1 + 0x2be) {
        section..text(arg1 + 0x13a,arg1 + 0x2be,0x10);
    }
    if (arg1 + 0x14c != arg1 + 0x1c9) {
        section..text(arg1 + 0x14c,arg1 + 0x1c9,0x10);
    }
    puVar1 = *(arg1 + 0x160);
    *puVar1 = 0xffff;
    puVar1[1] = 0xffff;
    puVar1[2] = 5;
    puVar1[3] = 0x3c;
    puVar1[4] = 0xc;
    puVar1[5] = 2;
    puVar1[7] = 6;
    puVar1[8] = 0x1c20;
    puVar1[9] = 0x1e;
    *(puVar1 + 10) = 1;
    if (*(arg1 + 0x60) - 4U < 2) {
        iVar2 = (**(*(arg1 + 0x130) + 8))(*(arg1 + 0x130),0);
        if (iVar2 < 0) {
            return iVar2;
        }
        *(arg1 + 0x60) = 3;
    }
    iVar2 = (**(*(arg1 + 0x130) + 8))(*(arg1 + 0x130),arg1_00);
    if (((-1 < iVar2) && (iVar2 = fcn.000112fc(arg1), -1 < iVar2)) && (iVar2 = fcn.00011470(arg2), -1 < iVar2)) {
        *(arg1 + 0x60) = 2;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00012178 @ 0x12178 */

int64_t fcn.00012178(uint32_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int aiStackX_8 [2];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((*(arg1_00 + 0x60) < 2) || (puVar2 = *(arg1_00 + 0x130), puVar2 == NULL)) {
        return -0x7ffffffffffffffa;
    }
    iVar3 = (**puVar2)(puVar2,aiStackX_8,0,0,0,0);
    if (iVar3 < 0) {
        return iVar3;
    }
    if (aiStackX_8[0] != 4) {
        if (4 < aiStackX_8[0]) {
            fcn.00011cdc(arg1);
        }
        iVar3 = fcn.00011bf0(arg1);
        if (-1 < iVar3) {
            if (*(arg1_00 + 0x328) == '\0') {
                return iVar3;
            }
            piVar1 = arg1_00 + 0x78;
            if (((*piVar1 != 0) || (iVar3 = (**(*0x19060 + 0x50))(0x80000000,8,0,0,piVar1), -1 < iVar3)) &&
               (iVar3 = (**(*0x19060 + 0x58))(*piVar1,2,600000000), -1 < iVar3)) {
                iVar3 = fcn.00015634(arg1_00,*piVar1);
                fcn.00012dbc(2,iVar3);
                (**(*0x19060 + 0x58))(*piVar1,0,0);
                if (-1 < iVar3) {
                    return iVar3;
                }
            }
            fcn.00014b80(arg1);
            return iVar3;
        }
        return iVar3;
    }
    return 0;
}


/* fcn.000168bc @ 0x168bc */

int64_t fcn.000168bc(void)

{
    if (*0x19078 == 0) {
        (**(*0x19060 + 0x140))(0x18d00,0,0x19078);
    }
    return *0x19078;
}


/* fcn.000126dc @ 0x126dc */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h

int64_t fcn.000126dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t arg2_00;
    ulong *puVar9;
    int64_t var_48h;
    ulong *puStack_68;
    uint32_t auStack_58 [2];
    int64_t iStack_50;
    int64_t var_28h;
    int64_t var_bp_20h;
    int32_t var_bp_18h;
    int64_t var_bp_10h;
    
    piVar2 = *(arg1 + 600);
    auStack_58[0] = 0;
    arg2_00 = 0;
    piVar3 = *(arg1 + 0x260);
    puVar9 = NULL;
    iVar7 = *(arg1 + 0x88);
    iVar6 = *(arg1 + 0x130);
    puStack_68 = NULL;
    iStack_50 = 0;
    if ((*(arg1 + 0x328) == '\0') && (iVar4 = fcn.00011524(arg1), iVar4 < 0)) {
        return iVar4;
    }
    if (*(arg1 + 0x2b0) == '\0') {
        if (*(arg1 + 0x328) == '\0') {
            puStack_68 = arg1 + 0x1e0;
            uVar5 = fcn.00016ee0(0x800);
            *(*(arg1 + 0x1f0) + 0x18) = uVar5;
            if (*(*(arg1 + 0x1f0) + 0x18) == 0) {
                return -0x7ffffffffffffff7;
            }
        }
        iVar6 = *piVar2;
        while (iVar6 == 0) {
            if (*(arg1 + 0x328) == '\0') {
                *(arg1 + 0x250) = 0;
                *(puStack_68[2] + 4) = 0x800;
                *(puStack_68[2] + 0x10) = 0x800;
                iVar6 = (**(iVar7 + 0x30))(iVar7,puStack_68);
                if (iVar6 < 0) {
                    return iVar6;
                }
                if (*(arg1 + 0x250) == '\0') {
                    do {
                        if ((arg4 != 0) && (iVar6 = (**(*0x19060 + 0x78))(arg4), -1 < iVar6)) break;
                        (**(iVar7 + 0x48))(iVar7);
                    } while (*(arg1 + 0x250) == '\0');
                    if (*(arg1 + 0x250) == '\0') {
                        (**(iVar7 + 0x40))(*(arg1 + 0x88),puStack_68);
                        (**(*0x19060 + 0x70))(*puStack_68);
                        puStack_68[1] = 0x8000000000000012;
                    }
                }
                if (puStack_68[1] < 0) {
                    return puStack_68[1];
                }
                iStack_50 = *(puStack_68[2] + 0x18);
                auStack_58[0] = *(puStack_68[2] + 0x10);
            }
            else {
                if (arg2_00 != 0) {
                    (**(*0x19060 + 0x48))(arg2_00);
                    iStack_50 = 0;
                }
                iVar6 = fcn.00015d40(arg1,auStack_58);
                if (iVar6 < 0) {
                    return iVar6;
                }
            }
            arg2_00 = iStack_50;
            uVar8 = auStack_58[0];
            iVar6 = *arg2;
            *arg3 = iVar6 + uVar8;
            iVar6 = fcn.00016eb0(uVar8,iVar6 + uVar8 + 1);
            if (iVar6 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *piVar3;
            if (iVar4 != 0) {
                if ((*arg2 != 0) && (iVar6 != iVar4)) {
                    section..text(iVar6,iVar4,*arg2);
                }
                (**(*0x19060 + 0x48))(*piVar3);
            }
            if ((uVar8 != 0) && (*arg2 + iVar6 != arg2_00)) {
                section..text(*arg2 + iVar6,arg2_00,uVar8);
            }
            iVar4 = *arg3;
            *(iVar4 + iVar6) = 0;
            *piVar3 = iVar6;
            *arg2 = iVar4;
            iVar6 = fcn.000169d4(iVar6,0x18f00);
            *piVar2 = iVar6;
        }
        if (((puStack_68 == NULL) || (puStack_68[2] == 0)) || (*(puStack_68[2] + 0x18) == 0)) goto code_r0x00012b9b;
        (**(*0x19060 + 0x48))();
        iVar7 = puStack_68[2];
    }
    else {
        if (*(arg1 + 0x328) == '\0') {
            puVar9 = arg1 + 0x218;
            uVar5 = fcn.00016ee0(0x800);
            *(*(arg1 + 0x228) + 0x18) = uVar5;
            if (*(*(arg1 + 0x228) + 0x18) == 0) {
                return -0x7ffffffffffffff7;
            }
        }
        iVar7 = *piVar2;
        while (iVar7 == 0) {
            if (*(arg1 + 0x328) == '\0') {
                *(arg1 + 0x250) = 0;
                *(puVar9[2] + 4) = 0x800;
                *(puVar9[2] + 0x10) = 0x800;
                iVar7 = (**(iVar6 + 0x28))(iVar6,puVar9);
                if (iVar7 < 0) {
                    return iVar7;
                }
                if (*(arg1 + 0x250) == '\0') {
                    do {
                        if ((arg4 != 0) && (iVar7 = (**(*0x19060 + 0x78))(arg4), -1 < iVar7)) break;
                        (**(iVar6 + 0x40))(iVar6);
                    } while (*(arg1 + 0x250) == '\0');
                    if (*(arg1 + 0x250) == '\0') {
                        (**(iVar6 + 0x38))(*(arg1 + 0x130),puVar9);
                        (**(*0x19060 + 0x70))(*puVar9);
                        puVar9[1] = 0x8000000000000012;
                    }
                }
                if (puVar9[1] < 0) {
                    return puVar9[1];
                }
                iStack_50 = *(puVar9[2] + 0x18);
                auStack_58[0] = *(puVar9[2] + 0x10);
            }
            else {
                if (arg2_00 != 0) {
                    (**(*0x19060 + 0x48))(arg2_00);
                    iStack_50 = 0;
                }
                iVar7 = fcn.00015d40(arg1,auStack_58);
                if (iVar7 < 0) {
                    return iVar7;
                }
            }
            arg2_00 = iStack_50;
            uVar8 = auStack_58[0];
            iVar7 = *arg2;
            *arg3 = iVar7 + uVar8;
            iVar7 = fcn.00016eb0(uVar8,iVar7 + uVar8 + 1);
            if (iVar7 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = *piVar3;
            if (iVar4 != 0) {
                if ((*arg2 != 0) && (iVar7 != iVar4)) {
                    section..text(iVar7,iVar4,*arg2);
                }
                (**(*0x19060 + 0x48))(*piVar3);
            }
            if ((uVar8 != 0) && (*arg2 + iVar7 != arg2_00)) {
                section..text(*arg2 + iVar7,arg2_00,uVar8);
            }
            iVar4 = *arg3;
            *arg2 = iVar4;
            *(iVar4 + iVar7) = 0;
            *piVar3 = iVar7;
            iVar7 = fcn.000169d4(iVar7,0x18f00);
            *piVar2 = iVar7;
        }
        if (((puVar9 == NULL) || (puVar9[2] == 0)) || (*(puVar9[2] + 0x18) == 0)) goto code_r0x00012b9b;
        (**(*0x19060 + 0x48))();
        iVar7 = puVar9[2];
    }
    *(iVar7 + 0x18) = 0;
    arg2_00 = 0;
code_r0x00012b9b:
    if (arg2_00 != 0) {
        (**(*0x19060 + 0x48))(arg2_00);
    }
    iVar7 = 0;
    do {
        iVar6 = iVar7 + 1;
        pcVar1 = iVar7 + 0x18f01;
        iVar7 = iVar6;
    } while (*pcVar1 != '\0');
    *piVar2 = *piVar2 + iVar6;
    *arg2 = *piVar2 - *piVar3;
    return 0;
}


/* fcn.00016a7c @ 0x16a7c */

ulong fcn.00016a7c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    char *pcVar3;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar3 = arg1, uVar2 = fcn.00016a50(arg1,0xf4241), uVar2 < 0xf4241)) {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1) {
        }
        for (; *pcVar3 == '0'; pcVar3 = pcVar3 + 1) {
        }
        *arg3 = 0;
        while( true ) {
            if (9 < *pcVar3 - 0x30U) {
                if (arg2 != NULL) {
                    *arg2 = pcVar3;
                }
                return 0;
            }
            cVar1 = *pcVar3;
            if (~(cVar1 + -0x30) / 10 < *arg3) break;
            pcVar3 = pcVar3 + 1;
            *arg3 = cVar1 + -0x30 + *arg3 * 10;
        }
        *arg3 = 0xffffffffffffffff;
        if (arg2 != NULL) {
            *arg2 = pcVar3;
        }
        return 0x8000000000000003;
    }
    return 0x8000000000000002;
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


/* fcn.00018a14 @ 0x18a14 */

uint fcn.00018a14(uint32_t arg1)

{
    uint in_register_0000000c;
    uint64_t uVar1;
    
    uVar1 = CONCAT44(in_register_0000000c,arg1);
    if (uVar1 < 0x194) {
        if (uVar1 == 0x193) {
            return 0x14;
        }
        if (uVar1 < 0x12e) {
            if (uVar1 == 0x12d) {
                return 0xb;
            }
            if (uVar1 < 0xcc) {
                if (uVar1 == 0xcb) {
                    return 6;
                }
                if (uVar1 == 100) {
                    return 1;
                }
                if (uVar1 == 0x65) {
                    return 2;
                }
                if (uVar1 == 200) {
                    return 3;
                }
                if (uVar1 == 0xc9) {
                    return 4;
                }
                if (uVar1 == 0xca) {
                    return 5;
                }
            }
            else {
                if (uVar1 == 0xcc) {
                    return 7;
                }
                if (uVar1 == 0xcd) {
                    return 8;
                }
                if (uVar1 == 0xce) {
                    return 9;
                }
                if (uVar1 == 300) {
                    return 10;
                }
            }
        }
        else {
            if (uVar1 == 0x12e) {
                return 0xc;
            }
            if (uVar1 == 0x12f) {
                return 0xd;
            }
            if (uVar1 == 0x130) {
                return 0xe;
            }
            if (uVar1 == 0x131) {
                return 0xf;
            }
            if (uVar1 == 0x133) {
                return 0x10;
            }
            if (uVar1 == 0x134) {
                return 0x29;
            }
            if (uVar1 == 400) {
                return 0x11;
            }
            if (uVar1 == 0x191) {
                return 0x12;
            }
            if (uVar1 == 0x192) {
                return 0x13;
            }
        }
    }
    else if (uVar1 < 0x1f5) {
        if (uVar1 == 500) {
            return 0x23;
        }
        if (uVar1 < 0x19c) {
            if (uVar1 == 0x19b) {
                return 0x1c;
            }
            if (uVar1 == 0x194) {
                return 0x15;
            }
            if (uVar1 == 0x195) {
                return 0x16;
            }
            if (uVar1 == 0x196) {
                return 0x17;
            }
            if (uVar1 == 0x197) {
                return 0x18;
            }
            if (uVar1 == 0x198) {
                return 0x19;
            }
            if (uVar1 == 0x199) {
                return 0x1a;
            }
            if (uVar1 == 0x19a) {
                return 0x1b;
            }
        }
        else {
            if (uVar1 == 0x19c) {
                return 0x1d;
            }
            if (uVar1 == 0x19d) {
                return 0x1e;
            }
            if (uVar1 == 0x19e) {
                return 0x1f;
            }
            if (uVar1 == 0x19f) {
                return 0x20;
            }
            if (uVar1 == 0x1a0) {
                return 0x21;
            }
            if (uVar1 == 0x1a1) {
                return 0x22;
            }
        }
    }
    else {
        if (uVar1 == 0x1f5) {
            return 0x24;
        }
        if (uVar1 == 0x1f6) {
            return 0x25;
        }
        if (uVar1 == 0x1f7) {
            return 0x26;
        }
        if (uVar1 == 0x1f8) {
            return 0x27;
        }
        if (uVar1 == 0x1f9) {
            return 0x28;
        }
    }
    return 0;
}


/* fcn.00017058 @ 0x17058 */

int64_t * fcn.00017058(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.00016eb0(arg1,0x20);
            if (piVar2 == NULL) {
                if (uVar3 == 0) {
                    return NULL;
                }
                break;
            }
            arg1 = *piVar1;
            uVar3 = uVar3 + 1;
            *piVar2 = arg1;
            piVar2[1] = piVar1;
            *(arg1 + 8) = piVar2;
            *piVar1 = piVar2;
        } while (uVar3 < 0x40);
    }
    piVar2 = *piVar1;
    if (piVar2 != piVar1) {
        *piVar1 = *piVar2;
        *(*piVar2 + 8) = piVar1;
    }
    return piVar2;
}


/* fcn.00016928 @ 0x16928 */

int64_t fcn.00016928(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    char cVar3;
    
    cVar3 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar3 = cVar3 + -0x20;
    }
    cVar2 = *arg2;
    if (cVar2 + 0x9fU < 0x1a) {
        cVar1 = cVar2 + -0x20;
    }
    else {
        cVar1 = cVar2;
    }
    if (*arg1 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if ((cVar2 == '\0') || (cVar3 != cVar1)) break;
            arg2 = arg2 + 1;
            cVar3 = *(arg2 + arg1);
            if (cVar3 + 0x9fU < 0x1a) {
                cVar3 = cVar3 + -0x20;
            }
            cVar2 = *arg2;
            cVar1 = cVar2;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar1 = cVar2 + -0x20;
            }
        } while (*(arg2 + arg1) != '\0');
    }
    return cVar3 - cVar1;
}


/* fcn.000181e0 @ 0x181e0 */

ulong fcn.000181e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    char *pcVar3;
    int64_t iVar4;
    bool bVar5;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    
    if (((arg3 == 0) || (arg4 != 0)) && (in_stack_00000038 != NULL)) {
        pcVar3 = fcn.00016ee0(0x40);
        if (pcVar3 == NULL) {
            uVar2 = 0x8000000000000009;
        }
        else {
            pcVar3[0x28] = '\0';
            pcVar3[0x29] = '\0';
            pcVar3[0x2a] = '\0';
            pcVar3[0x2b] = '\0';
            if ((arg1 == 5) || ((arg2 < 0xf && ((0x4086U >> (arg2 & 0x1f) & 1) != 0)))) {
                cVar1 = '\x01';
            }
            else {
                cVar1 = '\0';
            }
            *pcVar3 = cVar1;
            iVar4 = fcn.00018174(arg3,arg4,0x18fd0);
            bVar5 = false;
            if (iVar4 != 0) {
                iVar4 = fcn.00016928(*(iVar4 + 8),0x18fe8);
                bVar5 = iVar4 != 0;
            }
            pcVar3[1] = bVar5;
            iVar4 = fcn.00018174(arg3,arg4,0x18fc0);
            if (iVar4 != 0) {
                iVar4 = fcn.00016a7c(*(iVar4 + 8),0,pcVar3 + 8);
                if (-1 < iVar4) {
                    pcVar3[2] = '\x01';
                }
            }
            if (*pcVar3 == '\0') {
                pcVar3[0x10] = -0x44;
                pcVar3[0x11] = ';';
                pcVar3[0x12] = '\x01';
                pcVar3[0x13] = '\0';
                pcVar3[0x14] = '\0';
                pcVar3[0x15] = '\0';
                pcVar3[0x16] = '\0';
                pcVar3[0x17] = '\0';
                *(pcVar3 + 0x18) = in_stack_00000030;
            }
            else {
                pcVar3[0x28] = '\f';
                pcVar3[0x29] = '\0';
                pcVar3[0x2a] = '\0';
                pcVar3[0x2b] = '\0';
            }
            *in_stack_00000038 = pcVar3;
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00012be8 @ 0x12be8 */

int64_t fcn.00012be8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar3 = *(arg1 + 8);
    iVar1 = *(iVar3 + 0x88);
    iVar2 = *(iVar3 + 0x130);
    if (*(iVar3 + 0x2b0) == '\0') {
        uVar4 = *(arg2 + 0x18);
        if (0xffffffff < uVar4) {
            uVar4 = 0xffffffff;
        }
        *(*(arg1 + 0x90) + 4) = uVar4;
        uVar4 = *(arg2 + 0x18);
        if (0xffffffff < uVar4) {
            uVar4 = 0xffffffff;
        }
        *(*(arg1 + 0x90) + 0x10) = uVar4;
        *(*(arg1 + 0x90) + 0x18) = *(arg2 + 0x20);
        *(arg1 + 0x88) = 0x8000000000000006;
        iVar3 = (**(iVar1 + 0x30))(iVar1);
    }
    else {
        uVar4 = *(arg2 + 0x18);
        if (0xffffffff < uVar4) {
            uVar4 = 0xffffffff;
        }
        *(*(arg1 + 200) + 4) = uVar4;
        uVar4 = *(arg2 + 0x18);
        if (0xffffffff < uVar4) {
            uVar4 = 0xffffffff;
        }
        *(*(arg1 + 200) + 0x10) = uVar4;
        *(*(arg1 + 200) + 0x18) = *(arg2 + 0x20);
        *(arg1 + 0xc0) = 0x8000000000000006;
        iVar3 = (**(iVar2 + 0x28))(iVar2);
    }
    if (-1 < iVar3) {
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00012cb8 @ 0x12cb8 */

void fcn.00012cb8(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 8);
    if (*(iVar1 + 0x2b0) == '\0') {
        if (*(arg1 + 0x80) != 0) {
            (**(*0x19060 + 0x70))();
            *(arg1 + 0x80) = 0;
        }
        (**(*0x19060 + 0x48))(arg1);
        if (*(iVar1 + 0x1e0) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x1e0) = 0;
        }
        if (*(*(iVar1 + 0x1f0) + 0x18) == 0) {
            return;
        }
        (**(*0x19060 + 0x48))();
        iVar1 = *(iVar1 + 0x1f0);
    }
    else {
        if (*(arg1 + 0xb8) != 0) {
            (**(*0x19060 + 0x70))();
            *(arg1 + 0xb8) = 0;
        }
        (**(*0x19060 + 0x48))(arg1);
        if (*(iVar1 + 0x218) != 0) {
            (**(*0x19060 + 0x70))();
            *(iVar1 + 0x218) = 0;
        }
        if (*(*(iVar1 + 0x228) + 0x18) == 0) {
            return;
        }
        (**(*0x19060 + 0x48))();
        iVar1 = *(iVar1 + 0x228);
    }
    *(iVar1 + 0x18) = 0;
    return;
}


/* fcn.000115e8 @ 0x115e8 */

int64_t fcn.000115e8(int64_t arg1)

{
    int64_t iVar1;
    
    if (*(*(arg1 + 8) + 0x2b0) == '\0') {
        iVar1 = (**(*0x19060 + 0x50))(0x200);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(arg1 + 0xa0) = 1;
        *(arg1 + 0x90) = arg1 + 0x98;
        *(arg1 + 0x88) = 0x8000000000000006;
    }
    else {
        iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x112e0,arg1,arg1 + 0xb8);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(arg1 + 0xd8) = 1;
        *(arg1 + 200) = arg1 + 0xd0;
        *(arg1 + 0xc0) = 0x8000000000000006;
    }
    return 0;
}


/* fcn.00013bf8 @ 0x13bf8 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

int64_t fcn.00013bf8(int64_t arg1)

{
    uint64_t *puVar1;
    char cVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    int64_t iVar12;
    char *pcVar13;
    int64_t *piVar14;
    int64_t *piVar15;
    ulong *puVar16;
    uint64_t uVar17;
    char *pcStackX_8;
    ulong *puStackX_10;
    int64_t *piStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t *piStack_68;
    uint32_t auStack_60 [2];
    int64_t iStack_58;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int32_t var_20h;
    int64_t var_18h;
    
    if ((arg1 == 0) || (iVar3 = *(arg1 + 8), iVar3 == 0)) {
        return -0x7ffffffffffffffe;
    }
    puVar16 = *arg1;
    iStack_70 = 0;
    iStack_78 = 0;
    auStack_60[0] = 0;
    piVar11 = puVar16[2];
    *(iVar3 + 600) = 0;
    *(iVar3 + 0x260) = 0;
    piVar14 = piVar11 + 2;
    piStack_68 = NULL;
    *piVar14 = 0;
    pcStackX_8 = NULL;
    iStackX_20 = 0;
    iStack_58 = 0;
    puStackX_10 = puVar16;
    piStackX_18 = piVar14;
    if (*piVar11 == 0) {
code_r0x00014191:
        iVar12 = *(iVar3 + 0x268);
        if (iVar12 != 0) {
            iVar9 = *(iVar3 + 0x280);
            if (*(iVar3 + 0x270) == 0) {
                uVar10 = *(iVar3 + 0x278) - iVar9;
            }
            else {
                uVar10 = (*(iVar3 + 0x270) - iVar9) - iVar12;
            }
            if (uVar10 == 0) {
                if (*(iVar3 + 0x288) != 0) goto code_r0x00014264;
                piVar11[3] = 0;
            }
            else {
                uVar17 = piVar11[3];
                iVar9 = iVar9 + iVar12;
                iVar12 = piVar11[4];
                if (uVar17 < uVar10) {
                    if ((uVar17 != 0) && (iVar12 != iVar9)) {
                        section..text(iVar12,iVar9,uVar17);
                    }
                    *(iVar3 + 0x280) = *(iVar3 + 0x280) + piVar11[3];
                }
                else {
                    if (iVar12 != iVar9) {
                        section..text(iVar12,iVar9,uVar10);
                    }
                    *(iVar3 + 0x280) = *(iVar3 + 0x280) + uVar10;
                    piVar11[3] = uVar10;
                    if (*(iVar3 + 0x270) == 0) {
                        (**(*0x19060 + 0x48))(*(iVar3 + 0x268));
                        *(iVar3 + 0x268) = 0;
                        *(iVar3 + 0x270) = 0;
                        *(iVar3 + 0x280) = 0;
                    }
                }
            }
code_r0x0001418a:
            iVar12 = 0;
            goto code_r0x0001444f;
        }
code_r0x00014264:
        if (*(iVar3 + 0x328) == '\0') {
            iVar12 = fcn.00012be8(arg1,piVar11);
            if (-1 < iVar12) {
                return iVar12;
            }
        }
        else {
            piVar14 = iVar3 + 0x78;
            if ((*piVar14 != 0) || (iVar12 = (**(*0x19060 + 0x50))(0x80000000,8,0,0,piVar14), -1 < iVar12)) {
                iVar12 = fcn.000168bc();
                iVar4 = (**(iVar12 + 0x18))(0x231);
                iVar12 = (**(*0x19060 + 0x58))(*piVar14,2,iVar4 * 10000);
                if (-1 < iVar12) {
                    iVar12 = fcn.00015d40(iVar3,auStack_60);
                    (**(*0x19060 + 0x58))(*piVar14,0,0);
                    iVar9 = iStack_58;
                    if (-1 < iVar12) {
                        uVar17 = auStack_60[0];
                        uVar10 = piVar11[3];
                        if (uVar17 < piVar11[3]) {
                            uVar10 = uVar17;
                        }
                        piVar11[3] = uVar10;
                        if ((uVar10 != 0) && (piVar11[4] != iStack_58)) {
                            section..text(piVar11[4],iStack_58,uVar10);
                        }
                        *(iVar3 + 0x2a0) = arg1;
                        *(iVar3 + 0x298) = piVar11[4];
                        *(iVar3 + 0x290) = piVar11[3];
                        iVar12 = fcn.00018308(*(iVar3 + 0x288),piVar11[3],piVar11[4]);
                        if (-1 < iVar12) {
                            if ((*(iVar3 + 0x288) != 0) && (*(*(iVar3 + 0x288) + 0x28) == 0xc)) {
                                (**(*0x19060 + 0x48))();
                                *(iVar3 + 0x288) = 0;
                            }
                            if (*(iVar3 + 0x270) != 0) {
                                piVar11[3] = *(iVar3 + 0x270) - piVar11[4];
                            }
                            iVar7 = piVar11[3];
                            *(iVar3 + 0x278) = uVar17 - iVar7;
                            if (uVar17 - iVar7 != 0) {
                                if (*(iVar3 + 0x268) != 0) {
                                    (**(*0x19060 + 0x48))();
                                }
                                iVar7 = fcn.00016ee0(*(iVar3 + 0x278));
                                *(iVar3 + 0x268) = iVar7;
                                if (iVar7 == 0) {
code_r0x00013fd9:
                                    iVar12 = -0x7ffffffffffffff7;
                                    goto code_r0x00013fe3;
                                }
                                if ((*(iVar3 + 0x278) != 0) && (iVar7 != piVar11[3] + iVar9)) {
                                    section..text(iVar7,piVar11[3] + iVar9,*(iVar3 + 0x278));
                                }
                                *(iVar3 + 0x280) = 0;
                                if (*(iVar3 + 0x270) != 0) {
                                    *(iVar3 + 0x270) = *(iVar3 + 0x268);
                                }
                            }
                            if (iVar9 != 0) {
                                (**(*0x19060 + 0x48))(iVar9);
                            }
code_r0x0001444f:
                            iVar9 = *(arg1 + 8);
                            piVar11 = iVar9 + 0x2f8;
                            piVar14 = *piVar11;
                            if (piVar14 != piVar11) {
                                do {
                                    if (piVar14[2] == *arg1) goto code_r0x00014476;
                                    piVar14 = *piVar14;
                                } while (piVar14 != piVar11);
                            }
                            piVar14 = NULL;
code_r0x00014476:
                            if (piVar14 != NULL) {
                                *(*piVar14 + 8) = piVar14[1];
                                *piVar14[1] = *piVar14;
                                *(iVar9 + 0x318) = *(iVar9 + 0x318) + -1;
                                piVar11 = iVar9 + 0x308;
                                iVar9 = *piVar11;
                                *piVar14 = iVar9;
                                piVar14[1] = piVar11;
                                *(iVar9 + 8) = piVar14;
                                *piVar11 = piVar14;
                            }
                            iVar9 = iVar12;
                            if (299 < *(iVar3 + 0x70)) {
                                iVar9 = -0x7fffffffffffffdd;
                            }
                            puVar16[1] = iVar9;
                            (**(*0x19060 + 0x68))(*puVar16);
                            iVar3 = *(arg1 + 8);
                            if (*(iVar3 + 0x2b0) == '\0') {
                                if (*(arg1 + 0x80) != 0) {
                                    (**(*0x19060 + 0x70))();
                                }
                                if (*(iVar3 + 0x1e0) != 0) {
                                    (**(*0x19060 + 0x70))();
                                    *(iVar3 + 0x1e0) = 0;
                                }
                            }
                            else {
                                if (*(arg1 + 0xb8) != 0) {
                                    (**(*0x19060 + 0x70))();
                                }
                                if (*(iVar3 + 0x218) != 0) {
                                    (**(*0x19060 + 0x70))();
                                    *(iVar3 + 0x218) = 0;
                                }
                            }
                            (**(*0x19060 + 0x48))(arg1);
                            return iVar12;
                        }
                    }
                }
            }
        }
code_r0x00013fe3:
        piVar14 = piStack_68;
        if (piStack_68 == NULL) {
            puVar16 = puStackX_10;
        }
        else {
            iVar9 = *piStack_68;
            piVar11 = iVar3 + 0x2d0;
            piVar15 = fcn.00017058(piVar11);
            puVar16 = puStackX_10;
            if (piVar15 != NULL) {
                piVar15[2] = iVar9;
                piVar15[3] = piVar14;
                iVar9 = *piVar11;
                *piVar15 = iVar9;
                piVar15[1] = piVar11;
                *(iVar9 + 8) = piVar15;
                *piVar11 = piVar15;
                *(iVar3 + 0x2f0) = *(iVar3 + 0x2f0) + 1;
            }
        }
code_r0x00014564:
        piVar14 = piStackX_18;
    }
    else {
        if ((*(iVar3 + 0x268) != 0) && (*(iVar3 + 0x270) != 0)) {
            iVar12 = (*(iVar3 + 0x278) - *(iVar3 + 0x270)) + *(iVar3 + 0x268);
            pcStackX_8 = fcn.00016ee0(iVar12);
            if (pcStackX_8 == NULL) {
                iVar12 = -0x7ffffffffffffff7;
                iVar9 = 0;
                goto code_r0x0001456c;
            }
            if ((iVar12 != 0) && (pcStackX_8 != *(iVar3 + 0x270))) {
                section..text(pcStackX_8,*(iVar3 + 0x270),iVar12);
            }
            (**(*0x19060 + 0x48))(*(iVar3 + 0x268));
            *(iVar3 + 0x268) = 0;
            *(iVar3 + 0x270) = 0;
            *(iVar3 + 0x280) = 0;
            iStack_78 = *(iVar3 + 0x278);
            iStack_70 = iVar12;
            iStackX_20 = fcn.000169d4(pcStackX_8,0x18f00);
        }
        *(iVar3 + 600) = &iStackX_20;
        piVar15 = iVar3 + 0x78;
        *(iVar3 + 0x260) = &pcStackX_8;
        if ((*piVar15 != 0) || (iVar12 = (**(*0x19060 + 0x50))(0x80000000,8,0,0,piVar15), -1 < iVar12)) {
            iVar12 = fcn.000168bc();
            iVar4 = (**(iVar12 + 0x18))(0x231);
            iVar12 = (**(*0x19060 + 0x58))(*piVar15,2,iVar4 * 10000);
            if (-1 < iVar12) {
                iVar12 = fcn.000126dc(iVar3,&iStack_70,&iStack_78,*piVar15);
                (**(*0x19060 + 0x58))(*piVar15,0,0);
                if (-1 < iVar12) {
                    pcVar13 = pcStackX_8 + (iStack_78 - iStackX_20);
                    if (pcVar13 != NULL) {
                        if (*(iVar3 + 0x268) != 0) {
                            (**(*0x19060 + 0x48))();
                        }
                        iVar12 = fcn.00016ee0(pcVar13);
                        *(iVar3 + 0x268) = iVar12;
                        if (iVar12 == 0) {
                            iVar12 = -0x7ffffffffffffff7;
                            goto code_r0x00014568;
                        }
                        if (iVar12 != iStackX_20) {
                            section..text(iVar12,iStackX_20,pcVar13);
                        }
                        *(iVar3 + 0x278) = pcVar13;
                    }
                    cVar2 = *pcStackX_8;
                    pcVar13 = "HTTP/1.0";
                    pcVar6 = pcStackX_8;
                    for (uVar10 = 8; (((cVar2 != '\0' && (*pcVar13 != '\0')) && (*pcVar6 == *pcVar13)) && (1 < uVar10));
                        uVar10 = uVar10 - 1) {
                        pcVar6 = pcVar6 + 1;
                        pcVar13 = pcVar13 + 1;
                        cVar2 = *pcVar6;
                    }
                    if (*pcVar6 == *pcVar13) {
                        *(iVar3 + 0x461) = 1;
                    }
                    iVar12 = 0;
                    do {
                        iVar9 = iVar12;
                        iVar12 = iVar9 + 1;
                    } while (*(iVar9 + 0x18f39) != '\0');
                    if (pcStackX_8 + iVar9 + 2 != NULL) {
                        fcn.00016a7c(pcStackX_8 + iVar9 + 2,0,&piStack_68);
                        pcVar13 = pcStackX_8;
                        iVar12 = fcn.000169d4(pcStackX_8,0x18f44);
                        if (iVar12 == 0) {
                            iVar12 = -0x7ffffffffffffffa;
                        }
                        else {
                            iVar9 = 0;
                            do {
                                iVar7 = iVar9 + 1;
                                pcVar6 = iVar9 + 0x18f45;
                                iVar9 = iVar7;
                            } while (*pcVar6 != '\0');
                            pcVar6 = iVar12 + iVar7;
                            iVar12 = 0;
                            do {
                                iVar9 = iVar12 + 1;
                                pcVar8 = iVar12 + 0x18f45;
                                iVar12 = iVar9;
                            } while (*pcVar8 != '\0');
                            if ((iVar9 == 0) || (pcVar6 == 0x18f44)) {
                                iVar12 = 0;
                            }
                            else {
                                iVar12 = fcn.000102e0(pcVar6,0x18f44,iVar9);
                                pcVar13 = pcStackX_8;
                            }
                            if (iVar12 == 0) {
                                pcVar13 = NULL;
                            }
                            else {
                                pcVar13 = pcVar13 + (iStack_70 - pcVar6);
                            }
                            uVar5 = fcn.00018a14(piStack_68);
                            iVar12 = -0x7ffffffffffffffa;
                            **piVar11 = uVar5;
                            *(iVar3 + 0x70) = piStack_68;
                            piStack_68 = NULL;
                            if (*(iVar3 + 0x2f0) == 0) {
code_r0x00013fc0:
                                if (pcVar13 == NULL) {
code_r0x0001417c:
                                    if ((piVar11[4] != 0) && (piVar11[3] != 0)) goto code_r0x00014191;
                                    goto code_r0x0001418a;
                                }
                                pcVar8 = fcn.00016ee0(pcVar13);
                                if (pcVar8 == NULL) goto code_r0x00013fd9;
                                if (pcVar8 != pcVar6) {
                                    section..text(pcVar8,pcVar6,pcVar13);
                                }
                                (**(*0x19060 + 0x48))(pcStackX_8);
                                pcStackX_8 = pcVar8;
                                if (*0x19050 != 0) {
                                    puVar1 = piVar11 + 1;
                                    iVar12 = (**(*0x19050 + 8))(*0x19050,pcVar8,pcVar13,piVar11 + 2,puVar1);
                                    if (-1 < iVar12) {
                                        (**(*0x19060 + 0x48))(pcStackX_8);
                                        pcStackX_8 = NULL;
                                        uVar10 = 0;
                                        if (*puVar1 != 0) {
                                            piVar14 = piVar11[2];
                                            do {
                                                iVar12 = fcn.00016928(0x18f48,*piVar14);
                                                if ((iVar12 == 0) &&
                                                   (iVar12 = fcn.00016928(0x18f54,piVar14[1]), iVar12 == 0)) {
                                                    *(iVar3 + 0x461) = 1;
                                                    break;
                                                }
                                                uVar10 = uVar10 + 1;
                                                piVar14 = piVar14 + 2;
                                            } while (uVar10 < *puVar1);
                                        }
                                        piVar14 = iVar3 + 0x288;
                                        iVar12 = fcn.000181e0(*(iVar3 + 0x68),**piVar11,piVar11[1],piVar11[2]);
                                        if (-1 < iVar12) {
                                            iVar12 = *(iVar3 + 0x268);
                                            if (iVar12 != 0) {
                                                *(iVar3 + 0x2a0) = arg1;
                                                *(iVar3 + 0x298) = iVar12;
                                                *(iVar3 + 0x290) = *(iVar3 + 0x278);
                                                iVar12 = fcn.00018308(*piVar14,*(iVar3 + 0x278),iVar12);
                                                if (iVar12 < 0) goto code_r0x00013fe3;
                                            }
                                            if ((*piVar14 != 0) && (*(*piVar14 + 0x28) == 0xc)) {
                                                (**(*0x19060 + 0x48))();
                                                *piVar14 = 0;
                                            }
                                            puVar16 = puStackX_10;
                                            goto code_r0x0001417c;
                                        }
                                    }
                                }
                                goto code_r0x00013fe3;
                            }
                            piVar15 = *(iVar3 + 0x2d0);
                            *(*piVar15 + 8) = piVar15[1];
                            *piVar15[1] = *piVar15;
                            piVar14 = iVar3 + 0x2e0;
                            *(iVar3 + 0x2f0) = *(iVar3 + 0x2f0) + -1;
                            iVar9 = *piVar14;
                            *piVar15 = iVar9;
                            piVar15[1] = piVar14;
                            *(iVar9 + 8) = piVar15;
                            *piVar14 = piVar15;
                            piStack_68 = piVar15[3];
                            if (piStack_68 != NULL) {
                                if (piStack_68[0x1e] != '\0') goto code_r0x00013fc0;
                                goto code_r0x00013fe3;
                            }
                        }
                        goto code_r0x00014564;
                    }
                    iVar12 = -0x7ffffffffffffffa;
                }
            }
        }
    }
code_r0x00014568:
    iVar9 = iStack_58;
code_r0x0001456c:
    iVar7 = *(arg1 + 8);
    piVar15 = iVar7 + 0x2f8;
    piVar11 = *piVar15;
    if (piVar11 != piVar15) {
        do {
            if (piVar11[2] == *arg1) goto code_r0x00014592;
            piVar11 = *piVar11;
        } while (piVar11 != piVar15);
    }
    piVar11 = NULL;
code_r0x00014592:
    if (piVar11 != NULL) {
        *(*piVar11 + 8) = piVar11[1];
        *piVar11[1] = *piVar11;
        piVar15 = iVar7 + 0x308;
        *(iVar7 + 0x318) = *(iVar7 + 0x318) + -1;
        iVar7 = *piVar15;
        *piVar11 = iVar7;
        piVar11[1] = piVar15;
        *(iVar7 + 8) = piVar11;
        *piVar15 = piVar11;
    }
    if (*(iVar3 + 0x328) == '\0') {
        fcn.00012cb8(arg1);
    }
    else {
        (**(*0x19060 + 0x48))();
    }
    if (pcStackX_8 != NULL) {
        (**(*0x19060 + 0x48))();
        pcStackX_8 = NULL;
    }
    if (iVar9 != 0) {
        (**(*0x19060 + 0x48))(iVar9);
    }
    if (*piVar14 != 0) {
        (**(*0x19060 + 0x48))();
        *piVar14 = 0;
    }
    if (*(iVar3 + 0x268) != 0) {
        (**(*0x19060 + 0x48))();
        *(iVar3 + 0x268) = 0;
    }
    iVar9 = iVar12;
    if (299 < *(iVar3 + 0x70)) {
        iVar9 = -0x7fffffffffffffdd;
    }
    puVar16[1] = iVar9;
    (**(*0x19060 + 0x68))(*puVar16);
    return iVar12;
}


/* fcn.000174d0 @ 0x174d0 */

void fcn.000174d0(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint in_register_0000000c;
    
    piVar1 = *CONCAT44(in_register_0000000c,arg1);
    piVar3 = *piVar1;
    while (piVar2 = piVar3, piVar1 != CONCAT44(in_register_0000000c,arg1)) {
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        fcn.000174a4(piVar1 + -2);
        piVar3 = *piVar2;
        piVar1 = piVar2;
    }
    return;
}


/* fcn.00016880 @ 0x16880 */

int64_t fcn.00016880(void)

{
    if (*0x19070 == 0) {
        (**(*0x19060 + 0x140))(0x18d30,0,0x19070);
    }
    return *0x19070;
}


/* fcn.00014e94 @ 0x14e94 */

int64_t fcn.00014e94(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uStackX_10;
    
    uStackX_10 = 0;
    iVar1 = (**(*0x19068 + 0x48))(L"HttpTlsCipherList",0x18cc0,0,&uStackX_10,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        if ((uStackX_10 & 1) == 0) {
            iVar2 = fcn.00016eb0();
            if (iVar2 == 0) {
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                iVar1 = (**(*0x19068 + 0x48))(L"HttpTlsCipherList",0x18cc0,0,&uStackX_10,iVar2);
                if (-1 < iVar1) {
                    iVar1 = (***(arg1 + 0x360))(*(arg1 + 0x360),2,iVar2,uStackX_10);
                }
                (**(*0x19060 + 0x48))(iVar2);
            }
        }
        else {
            iVar1 = -0x7ffffffffffffffe;
        }
    }
    return iVar1;
}


/* fcn.00014c14 @ 0x14c14 */

int64_t fcn.00014c14(int64_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    bool bVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t uVar14;
    uint64_t auStackX_18 [2];
    
    iVar12 = 0;
    auStackX_18[0] = 0;
    iVar5 = (**(*0x19068 + 0x48))(L"TlsCaCertificate",0x18cb0,0,auStackX_18,0);
    if ((iVar5 < 0) && (iVar5 != -0x7ffffffffffffffb)) {
        iVar6 = fcn.00016880();
        cVar4 = (**(iVar6 + 8))(0x18d10,0x10002);
        if (cVar4 == '\x01') {
            iVar5 = iVar12;
        }
    }
    else {
        iVar6 = fcn.00016eb0();
        if (iVar6 == 0) {
            return -0x7ffffffffffffff7;
        }
        iVar5 = (**(*0x19068 + 0x48))(L"TlsCaCertificate",0x18cb0,0,auStackX_18,iVar6);
        if (-1 < iVar5) {
            iVar5 = -0x7ffffffffffffffe;
            uVar10 = auStackX_18[0] & 0xffffffff;
            bVar3 = false;
            if (auStackX_18[0] != 0) {
                do {
                    uVar9 = uVar10;
                    if (uVar9 < 0x1c) goto code_r0x00014e72;
                    piVar8 = (auStackX_18[0] - uVar10) + iVar6;
                    uVar1 = *(piVar8 + 2);
                    if ((uVar1 < 0x1c) || (uVar9 < uVar1)) goto code_r0x00014e72;
                    if ((*piVar8 != *0x18d70) || (piVar8[1] != *0x18d78)) {
                        iVar5 = -0x7ffffffffffffffd;
                        goto code_r0x00014e72;
                    }
                    if (*(piVar8 + 0x14) != 0) goto code_r0x00014e72;
                    uVar2 = *(piVar8 + 3);
                    if (0x10 < uVar2) {
                        bVar3 = true;
                    }
                    if ((uVar1 - 0x1c) % uVar2 != 0) goto code_r0x00014e72;
                    iVar12 = iVar12 + (uVar1 - 0x1c) / uVar2;
                    uVar10 = uVar9 - uVar1;
                } while (uVar9 - uVar1 != 0);
                if ((bVar3) && (iVar12 != 0)) {
                    bVar3 = false;
                    uVar10 = auStackX_18[0];
                    iVar12 = iVar6;
                    do {
                        if (uVar10 < *(iVar12 + 0x10)) break;
                        uVar11 = *(iVar12 + 0x18);
                        iVar13 = iVar12 + 0x1c + *(iVar12 + 0x14);
                        uVar7 = ((*(iVar12 + 0x10) - *(iVar12 + 0x14)) - 0x1c) / uVar11;
                        uVar14 = 0;
                        if (uVar7 != 0) {
                            do {
                                iVar5 = (***(arg1 + 0x368))(*(arg1 + 0x368),2,iVar13 + 0x10,uVar11 - 0x10);
                                if (iVar5 < 0) break;
                                uVar11 = *(iVar12 + 0x18);
                                uVar14 = uVar14 + 1;
                                iVar13 = iVar13 + uVar11;
                                bVar3 = true;
                            } while (uVar14 < uVar7);
                        }
                        uVar9 = uVar10 - *(iVar12 + 0x10);
                        uVar10 = uVar9;
                        iVar12 = iVar12 + *(iVar12 + 0x10);
                    } while (uVar9 != 0);
                    if (bVar3) {
                        iVar5 = 0;
                    }
                }
            }
        }
code_r0x00014e72:
        (**(*0x19060 + 0x48))(iVar6);
    }
    return iVar5;
}


/* fcn.00014960 @ 0x14960 */

int64_t fcn.00014960(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x2b0) == '\0') {
        iVar1 = (**(*0x19060 + 0x50))(0x200);
        if (-1 < iVar1) {
            *(iVar2 + 0x391) = 0;
            *(iVar2 + 0x390) = 1;
            *(iVar2 + 0x394) = 0;
            *(iVar2 + 0x398) = 1;
            *(iVar2 + 0x3a0) = 0;
            *(iVar2 + 0x3a8) = 0;
            *(iVar2 + 0x388) = iVar2 + 0x390;
            iVar1 = *0x19060;
            *(iVar2 + 0x380) = 0x8000000000000006;
            iVar1 = (**(iVar1 + 0x50))(0x200,0x10,0x10ef8,iVar2 + 0x460,iVar2 + 0x3f0);
            if (-1 < iVar1) {
                *(iVar2 + 0x40c) = 0;
                *(iVar2 + 0x410) = 1;
                *(iVar2 + 0x418) = 0;
                *(iVar2 + 0x420) = 0;
                *(iVar2 + 0x400) = iVar2 + 0x408;
                *(iVar2 + 0x3f8) = 0x8000000000000006;
                return iVar1;
            }
        }
    }
    else {
        iVar1 = (**(*0x19060 + 0x50))(0x200,0x10,0x10ef8,iVar2 + 1000,iVar2 + 0x3b0);
        if (-1 < iVar1) {
            *(iVar2 + 0x3c9) = 0;
            *(iVar2 + 0x3c8) = 1;
            *(iVar2 + 0x3cc) = 0;
            *(iVar2 + 0x3d0) = 1;
            *(iVar2 + 0x3d8) = 0;
            *(iVar2 + 0x3e0) = 0;
            *(iVar2 + 0x3c0) = iVar2 + 0x3c8;
            iVar1 = *0x19060;
            *(iVar2 + 0x3b8) = 0x8000000000000006;
            iVar1 = (**(iVar1 + 0x50))(0x200,0x10,0x10ef8,iVar2 + 0x460,iVar2 + 0x428);
            if (-1 < iVar1) {
                *(iVar2 + 0x444) = 0;
                *(iVar2 + 0x448) = 1;
                *(iVar2 + 0x450) = 0;
                *(iVar2 + 0x458) = 0;
                *(iVar2 + 0x438) = iVar2 + 0x440;
                *(iVar2 + 0x430) = 0x8000000000000006;
                return iVar1;
            }
        }
    }
    fcn.00014b80(arg1);
    return iVar1;
}


/* fcn.0001757c @ 0x1757c */

ulong fcn.0001757c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint in_R8;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar5 = 0;
    if (*(iVar1 + 0x80) != 0) {
        do {
            if (*(iVar1 + 0xa8 + uVar5 * 0x28) != 0) {
                if (*CONCAT44(in_R8,arg3) <= uVar3) {
                    return 0x8000000000000005;
                }
                uVar2 = uVar3;
                uVar3 = uVar3 + 1;
                *(arg2 + 8 + uVar2 * 0x10) = *(iVar1 + 0x98 + uVar5 * 0x28);
                *(arg2 + uVar2 * 0x10) = *(iVar1 + 0xa8 + uVar5 * 0x28);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *(iVar1 + 0x80));
    }
    *CONCAT44(in_R8,arg3) = uVar3;
    return 0;
}


/* fcn.000173a0 @ 0x173a0 */

int64_t fcn.000173a0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.000172fc(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.00016eb0();
        if (iVar3 != 0) {
            iVar1 = *(iVar2 + 0x78);
            *(iVar1 + 0x24) = arg1;
            *(iVar1 + 0x38) = iVar3;
            *(iVar1 + 0x30) = arg1;
            *(iVar2 + 0xa8) = 0;
            *(iVar2 + 0x90) = (arg1 & 0xffffffffU) + iVar3;
            *(iVar2 + 0x88) = iVar3;
            *(iVar2 + 0x98) = iVar3;
            *(iVar2 + 0xa0) = iVar3;
            return iVar2;
        }
        (**(*0x19060 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.00017744 @ 0x17744 */

int64_t fcn.00017744(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t auStackX_18 [4];
    
    uVar2 = *(arg1 + 0x84);
    uVar6 = 0;
    uVar5 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    if (uVar2 != 0) {
        if (uVar2 - 1 < uVar2) {
            fcn.0001751c(arg1,uVar2 - 1,auStackX_18);
            uVar6 = auStackX_18[0];
        }
        if ((*(arg1 + 0x90 + uVar6 * 0x28) - *(arg1 + 0xa0 + uVar6 * 0x28) < uVar5) && (uVar6 < *(arg1 + 0x80) - 1U)) {
            uVar6 = uVar6 + 1;
        }
    }
    uVar3 = uVar6;
    iVar4 = *(arg1 + 0xa0 + uVar3 * 0x28);
    if (*(arg1 + 0x90 + uVar3 * 0x28) - iVar4 < uVar5) {
        iVar4 = 0;
    }
    else {
        piVar1 = arg1 + 0xa8 + uVar3 * 0x28;
        *piVar1 = *piVar1 + arg2;
        *(arg1 + 0xa0 + uVar3 * 0x28) = uVar5 + iVar4;
        *(arg1 + 0x84) = *(arg1 + 0x84) + arg2;
    }
    return iVar4;
}


/* fcn.0001524c @ 0x1524c */

uint64_t fcn.0001524c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t arg2_00;
    int64_t iVar2;
    int64_t iVar3;
    int *piVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t auStackX_8 [2];
    
    iVar3 = 0;
    iVar7 = 0;
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    if (arg2 == 0) {
        return 0x8000000000000002;
    }
    auStackX_8[0] = *(arg2 + 0x80);
    arg2_00 = fcn.00016eb0(arg1,auStackX_8[0] << 4);
    if (arg2_00 == 0) {
        uVar5 = 0x8000000000000009;
    }
    else {
        fcn.0001757c(arg2,arg2_00,auStackX_8);
        uVar5 = 0;
        if (*(arg1 + 0x2b0) == '\0') {
            iVar3 = *(arg1 + 0x400);
            if (iVar3 == 0) {
                return 0x8000000000000002;
            }
            *(iVar3 + 8) = 1;
        }
        else {
            iVar7 = *(arg1 + 0x438);
            if (iVar7 == 0) {
                return 0x8000000000000002;
            }
            *(iVar7 + 8) = 1;
        }
        uVar8 = uVar5;
        uVar6 = auStackX_8[0];
        if (auStackX_8[0] != 0) {
            do {
                piVar4 = uVar8 * 0x10 + arg2_00;
                if (*(arg1 + 0x2b0) == '\0') {
                    *(iVar3 + 4) = *piVar4;
                    *(iVar3 + 0x10) = *piVar4;
                    *(iVar3 + 0x18) = *(piVar4 + 2);
                    uVar5 = (**(*(arg1 + 0x88) + 0x30))(*(arg1 + 0x88),arg1 + 0x3f0);
                }
                else {
                    *(iVar7 + 4) = *piVar4;
                    *(iVar7 + 0x10) = *piVar4;
                    *(iVar7 + 0x18) = *(piVar4 + 2);
                    uVar5 = (**(*(arg1 + 0x130) + 0x28))(*(arg1 + 0x130),arg1 + 0x428);
                }
                if (uVar5 < 0) break;
                if (*(arg1 + 0x460) == '\0') {
                    do {
                        if ((arg3 != 0) && (iVar2 = (**(*0x19060 + 0x78))(), -1 < iVar2)) break;
                        if (*(arg1 + 0x2b0) == '\0') {
                            (**(*(arg1 + 0x88) + 0x48))();
                        }
                        else {
                            (**(*(arg1 + 0x130) + 0x40))();
                        }
                    } while (*(arg1 + 0x460) == '\0');
                    uVar6 = auStackX_8[0];
                    if (*(arg1 + 0x460) == '\0') {
                        if (*(arg1 + 0x2b0) == '\0') {
                            (**(*(arg1 + 0x88) + 0x40))(*(arg1 + 0x88),arg1 + 0x3f0);
                        }
                        else {
                            (**(*(arg1 + 0x130) + 0x38))(*(arg1 + 0x130),arg1 + 0x428);
                        }
                        uVar5 = 0x8000000000000012;
                        break;
                    }
                }
                *(arg1 + 0x460) = 0;
                if (*(arg1 + 0x2b0) == '\0') {
                    uVar5 = *(arg1 + 0x3f8);
                    if (uVar5 < 0) break;
                    *piVar4 = *piVar4 - *(iVar3 + 0x10);
                    if (*piVar4 == 0) goto code_r0x00015416;
                    uVar1 = *(iVar3 + 0x10);
code_r0x0001541f:
                    *(piVar4 + 2) = *(piVar4 + 2) + uVar1;
                }
                else {
                    uVar5 = *(arg1 + 0x430);
                    if (uVar5 < 0) break;
                    *piVar4 = *piVar4 - *(iVar7 + 0x10);
                    if (*piVar4 != 0) {
                        uVar1 = *(iVar7 + 0x10);
                        goto code_r0x0001541f;
                    }
code_r0x00015416:
                    uVar8 = uVar8 + 1;
                }
            } while (uVar8 < uVar6);
        }
        (**(*0x19060 + 0x48))(arg2_00);
    }
    return uVar5;
}


/* fcn.000175f0 @ 0x175f0 */

uint64_t fcn.000175f0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint32_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t arg1_00;
    uint32_t *puVar10;
    uint32_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    ulong in_stack_00000028;
    
    uVar9 = 0;
    uVar8 = 0;
    uVar7 = uVar9;
    for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
        uVar7 = uVar7 + *(puVar4 + 0xe);
    }
    puVar5 = fcn.00016eb0(uVar7,uVar7 << 4);
    uVar7 = 0;
    if (puVar5 != NULL) {
        arg1_00 = uVar9;
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            uVar7 = arg1_00;
            uVar6 = uVar9;
            if (*(puVar4 + 0xe) != 0) {
                do {
                    arg1_00 = uVar7;
                    if (*(puVar4 + uVar6 * 5 + 0x13) != 0) {
                        arg1_00 = uVar7 + 1;
                        *(puVar5 + uVar7 * 4 + 2) = puVar4[uVar6 * 5 + 0x11];
                        puVar5[uVar7 * 4] = *(puVar4 + uVar6 * 5 + 0x13);
                    }
                    uVar11 = uVar6 + 1;
                    uVar6 = uVar11;
                    uVar7 = arg1_00;
                } while (uVar11 < *(puVar4 + 0xe));
            }
        }
        uVar6 = fcn.000172fc(arg1_00,arg1_00);
        uVar7 = uVar9;
        if (uVar6 != 0) {
            iVar1 = *(uVar6 + 0x78);
            *(iVar1 + 0x10) = fcn.00014854;
            *(iVar1 + 0x18) = in_stack_00000028;
            *(iVar1 + 0x20) = 0;
            if (arg1_00 != 0) {
                piVar12 = uVar6 + 0x98;
                iVar13 = 0x30;
                puVar10 = puVar5;
                do {
                    uVar8 = *puVar10;
                    iVar2 = *(puVar10 + 2);
                    iVar3 = *(uVar6 + 0x78);
                    *(iVar13 + iVar3) = uVar8;
                    *(iVar13 + 8 + iVar3) = iVar2;
                    iVar13 = iVar13 + 0x10;
                    piVar12[-1] = iVar2 + uVar8;
                    piVar12[1] = iVar2 + uVar8;
                    piVar12[-2] = iVar2;
                    *piVar12 = iVar2;
                    *(piVar12 + 2) = uVar8;
                    piVar12 = piVar12 + 5;
                    uVar8 = uVar9 + *puVar10;
                    uVar9 = uVar8;
                    puVar10 = puVar10 + 4;
                    arg1_00 = arg1_00 - 1;
                } while (arg1_00 != 0);
            }
            *(iVar1 + 0x24) = uVar8;
            *(uVar6 + 0x84) = uVar8;
            uVar7 = uVar6;
        }
        (**(*0x19060 + 0x48))(puVar5);
    }
    return uVar7;
}


/* fcn.00014854 @ 0x14854 */

void fcn.00014854(int64_t arg1)

{
    fcn.000174d0(arg1);
    //WARNING: Could not recover jumptable at 0x00014871. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x19060 + 0x48))(arg1);
    return;
}


/* fcn.00015108 @ 0x15108 */

int64_t fcn.00015108(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ushort *puVar2;
    int64_t iVar3;
    uint32_t arg3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    puVar2 = fcn.00016eb0(arg1,((*(arg2 + 0x80) - 1) + 2) * 0x10);
    if (puVar2 == NULL) {
        return -0x7ffffffffffffff7;
    }
    cVar1 = *(arg1 + 0x2b0);
    *puVar2 = 1;
    *(puVar2 + 2) = *(arg2 + 0x84);
    *(puVar2 + 4) = *(arg2 + 0x80);
    arg3 = puVar2 + 4;
    if (cVar1 == '\0') {
        fcn.0001757c(arg2,puVar2 + 8,arg3);
        *(arg1 + 0x388) = puVar2;
        iVar3 = (**(*(arg1 + 0x88) + 0x28))(*(arg1 + 0x88),arg1 + 0x378);
        if (iVar3 < 0) goto code_r0x0001521d;
        while (*(arg1 + 1000) == '\0') {
            (**(*(arg1 + 0x88) + 0x48))(*(arg1 + 0x88));
        }
        iVar3 = *(arg1 + 0x380);
    }
    else {
        fcn.0001757c(arg2,puVar2 + 8,arg3);
        *(arg1 + 0x3c0) = puVar2;
        iVar3 = (**(*(arg1 + 0x130) + 0x20))(*(arg1 + 0x130),arg1 + 0x3b0);
        if (iVar3 < 0) goto code_r0x0001521d;
        while (*(arg1 + 1000) == '\0') {
            (**(*(arg1 + 0x130) + 0x40))(*(arg1 + 0x130));
        }
        iVar3 = *(arg1 + 0x3b8);
    }
    *(arg1 + 1000) = 0;
code_r0x0001521d:
    (**(*0x19060 + 0x48))(puVar2);
    return iVar3;
}


/* fcn.000174a4 @ 0x174a4 */

void fcn.000174a4(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00017430(*(arg1 + 0x78));
        (**(*0x19060 + 0x48))(arg1);
    }
    return;
}


/* fcn.00017430 @ 0x17430 */

void fcn.00017430(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x19060 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x19060 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x19060 + 0x48))(arg1);
    }
    return;
}


/* fcn.0001549c @ 0x1549c */

int64_t fcn.0001549c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    uint8_t uVar2;
    uint uVar3;
    int64_t *piVar4;
    uint16_t uVar5;
    int64_t arg1_00;
    int64_t iVar6;
    uint *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    char cStackX_20;
    char cStackX_21;
    char cStackX_22;
    uchar uStackX_23;
    
    iVar8 = arg3;
    arg1_00 = fcn.00016eb0(arg1,0x10);
    if (arg1_00 == 0) {
        return -0x7ffffffffffffff7;
    }
    *arg1_00 = arg1_00;
    *(arg1_00 + 8) = arg1_00;
    iVar6 = fcn.000173a0(5);
    if ((iVar6 == 0) || (puVar7 = fcn.00017744(iVar6,5,iVar8), puVar7 == NULL)) {
code_r0x000154fd:
        iVar9 = -0x7ffffffffffffff7;
    }
    else {
        iVar8 = arg3;
        iVar9 = fcn.0001524c(arg1,iVar6,arg3);
        if (iVar9 < 0) goto code_r0x00015609;
        uVar3 = *puVar7;
        cStackX_20 = uVar3;
        cStackX_21 = uVar3 >> 8;
        cStackX_22 = uVar3 >> 0x10;
        uStackX_23 = uVar3 >> 0x18;
        uVar2 = *(puVar7 + 1);
        if (((cStackX_20 - 0x14U < 4) && (cStackX_21 == '\x03')) && (cStackX_22 - 1U < 3)) {
            piVar1 = iVar6 + 0x10;
            *piVar1 = arg1_00;
            piVar4 = *(arg1_00 + 8);
            *(iVar6 + 0x18) = piVar4;
            *piVar4 = piVar1;
            uVar5 = CONCAT11(uVar2,uStackX_23) << 8 | uVar2;
            *(arg1_00 + 8) = piVar1;
            if (uVar5 != 0) {
                iVar6 = fcn.000173a0(uVar5);
                if (iVar6 == 0) goto code_r0x000154fd;
                fcn.00017744(iVar6,uVar5,iVar8);
                iVar9 = fcn.0001524c(arg1,iVar6,arg3);
                if (iVar9 < 0) goto code_r0x00015609;
                piVar1 = iVar6 + 0x10;
                *piVar1 = arg1_00;
                piVar4 = *(arg1_00 + 8);
                *(iVar6 + 0x18) = piVar4;
                *piVar4 = piVar1;
                *(arg1_00 + 8) = piVar1;
            }
            iVar8 = fcn.000175f0(arg1_00);
            *arg2 = iVar8;
            if (iVar8 == 0) goto code_r0x000154fd;
        }
        else {
            iVar9 = -0x7fffffffffffffe8;
        }
        if (-1 < iVar9) {
            return iVar9;
        }
    }
code_r0x00015609:
    fcn.00014854(arg1_00);
    return iVar9;
}


/* fcn.000177fc @ 0x177fc */

uint32_t fcn.000177fc(int64_t arg1,ulong noname_1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    if ((arg2 == 0) || (uVar3 = *(arg1 + 0x84), uVar3 == 0)) {
        uVar3 = 0;
    }
    else {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if ((*piVar2 != 0) && (*piVar2 != 0)) break;
                uVar3 = uVar5 + 1;
                uVar5 = uVar3;
                piVar2 = piVar2 + 10;
            } while (uVar3 < *(arg1 + 0x80));
        }
        uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
        iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar3 < arg2) {
            if ((uVar3 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,uVar3);
            }
            arg3 = arg3 + uVar3;
            arg2 = arg2 - uVar3;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (arg2 <= uVar4) {
                    uVar3 = uVar3 + arg2;
                    iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((arg2 != 0) && (arg3 != iVar1)) {
                        section..text(arg3,iVar1,arg2);
                    }
                    break;
                }
                iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                arg2 = arg2 - uVar4;
                uVar3 = uVar3 + uVar4;
                if ((uVar4 != 0) && (arg3 != iVar1)) {
                    section..text(arg3,iVar1,uVar4);
                }
                arg3 = arg3 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((arg2 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,arg2);
            }
            uVar3 = arg2;
        }
    }
    return uVar3;
}


/* fcn.000168f8 @ 0x168f8 */

int64_t fcn.000168f8(int64_t arg1)

{
    char cVar1;
    int iVar2;
    
    cVar1 = arg1;
    if (cVar1 - 0x30U < 10) {
        iVar2 = cVar1 + -0x30;
    }
    else {
        if (cVar1 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        iVar2 = cVar1 + -0x37;
    }
    return iVar2;
}


/* fcn.00016a1c @ 0x16a1c */

uint64_t fcn.00016a1c(uint32_t arg1,int64_t arg2)

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


/* fcn.00016b48 @ 0x16b48 */

ulong fcn.00016b48(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char cVar4;
    char *pcVar5;
    
    if (((arg1 != 0) && (arg3 != 0)) && (pcVar5 = arg1, uVar2 = fcn.00016a50(arg1,0xf4241), uVar2 < 0xf4241)) {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*pcVar5 == ' ' || (*pcVar5 == '\t')); pcVar5 = pcVar5 + 1) {
        }
        cVar4 = '0';
        for (; *pcVar5 == '0'; pcVar5 = pcVar5 + 1) {
        }
        cVar1 = *pcVar5;
        if (*pcVar5 + 0x9fU < 0x1a) {
            cVar1 = cVar1 + -0x20;
        }
        if (cVar1 == 'X') {
            if (pcVar5[-1] != '0') {
                *arg3 = 0;
                return 0;
            }
            pcVar5 = pcVar5 + 1;
        }
        *arg3 = 0;
        for (; ((*pcVar5 - cVar4 < 10 || (*pcVar5 + 0xbfU < 6)) || (*pcVar5 + 0x9fU < 6)); pcVar5 = pcVar5 + 1) {
            iVar3 = fcn.000168f8(CONCAT71(arg1 >> 8,*pcVar5));
            arg1 = -iVar3 - 1U >> 4;
            if (arg1 < *arg3) {
                *arg3 = 0xffffffffffffffff;
                if (arg2 != NULL) {
                    *arg2 = pcVar5;
                }
                return 0x8000000000000003;
            }
            *arg3 = *arg3 * 0x10 + iVar3;
        }
        if (arg2 != NULL) {
            *arg2 = pcVar5;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.000172fc @ 0x172fc */

uint * fcn.000172fc(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.00016ee0((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x0001738e;
        puVar2 = fcn.00016ee0(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x0001738e;
        }
        (**(*0x19060 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x0001738e:
    return puVar1;
}


/* fcn.0001751c @ 0x1751c */

int64_t fcn.0001751c(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar4 = 0;
    if (*(iVar2 + 0x80) != 0) {
        piVar5 = iVar2 + 0xa8;
        uVar6 = 0;
        do {
            iVar1 = *piVar5;
            if (arg2 < iVar1 + uVar6) {
                if (arg3 != 0) {
                    *arg3 = uVar4;
                }
                return (arg2 - uVar6) + *(iVar2 + 0x98 + uVar4 * 0x28);
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
            piVar5 = piVar5 + 10;
            uVar6 = iVar1 + uVar6;
        } while (uVar3 < *(iVar2 + 0x80));
    }
    return 0;
}


/* fcn.00017bfc @ 0x17bfc */

uint64_t fcn.00017bfc(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    int iVar3;
    
    iVar3 = arg2;
    uVar2 = arg1;
    if ((uVar2 < 0x21) && ((0x100002400U >> (arg1 & 0x3f) & 1) != 0)) {
        return 0x12;
    }
    if (iVar3 < 6) {
        if (iVar3 < 4) {
            if (iVar3 == 0) {
                if (uVar2 == 0x2a) {
                    return 7;
                }
                if (uVar2 == 0x2f) {
                    return 7;
                }
                return 1;
            }
            if (iVar3 == 1) {
                if (uVar2 == 0x3a) {
                    return 2;
                }
            }
            else if (iVar3 == 2) {
                if (uVar2 == 0x2f) {
                    return 3;
                }
            }
            else if ((iVar3 == 3) && (uVar2 == 0x2f)) {
                return 4;
            }
code_r0x00017cb9:
            return arg2 & 0xffffffff;
        }
        if (uVar2 == 0x40) {
            return 6;
        }
    }
    else {
        if (iVar3 != 6) {
            if (iVar3 == 7) {
                if (uVar2 == 0x3f) {
                    return 8;
                }
                if (uVar2 == 0x23) {
                    return 10;
                }
            }
            else if (7 < iVar3) {
                if (iVar3 < 10) {
                    return 10 - (uVar2 != 0x23);
                }
                if (iVar3 == 10) {
                    return 0xb;
                }
            }
            goto code_r0x00017cb9;
        }
        if (uVar2 == 0x40) {
            return 0x12;
        }
    }
    if (uVar2 == 0x2f) {
        return 7;
    }
    if (uVar2 == 0x3f) {
        return 8;
    }
    uVar1 = 5;
    if (uVar2 == 0x23) {
        uVar1 = 10;
    }
    return uVar1;
}


/* fcn.00017a88 @ 0x17a88 */

ulong fcn.00017a88(int64_t arg1,int64_t arg2,int arg3)

{
    bool bVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    int iVar4;
    uint in_R8;
    uint16_t *puVar5;
    uint32_t uVar6;
    uint8_t *puVar7;
    
    puVar5 = CONCAT44(in_R8,arg3);
    puVar7 = *(puVar5 + 6) + arg1;
    puVar3 = puVar7 + *(puVar5 + 8);
    bVar1 = false;
    uVar6 = 8;
    uVar2 = 8;
    iVar4 = (-(arg2 != '\0') & 0xfffffffe) + 0xe;
    if (puVar7 < puVar3) {
        do {
            if ((*puVar7 < 0x21) && ((0x100002400U >> (*puVar7 & 0x3fU) & 1) != 0)) {
                iVar4 = 0x12;
            }
            else if (iVar4 == 0xc) {
                if (*puVar7 == 0x40) {
                    iVar4 = 0xd;
                }
            }
            else if (0xc < iVar4) {
                if (iVar4 < 0xf) {
                    if (*puVar7 == 0x5b) {
code_r0x00017b3f:
                        iVar4 = 0xf;
                    }
                    else {
                        iVar4 = 0xe;
                        if (*puVar7 == 0x3a) {
                            iVar4 = 0x10;
                        }
                    }
                }
                else if (iVar4 == 0xf) {
                    if (*puVar7 == 0x5d) {
                        bVar1 = true;
                    }
                    if ((*puVar7 != 0x3a) || (!bVar1)) goto code_r0x00017b3f;
                    iVar4 = 0x10;
                }
                else if (iVar4 - 0x10U < 2) {
                    iVar4 = 0x11;
                }
            }
            if (iVar4 == 0xc) {
                uVar6 = 5;
code_r0x00017ba5:
                if (uVar6 == uVar2) {
                    *(puVar5 + uVar6 * 4 + 4) = *(puVar5 + uVar6 * 4 + 4) + 1;
                }
                else {
                    *puVar5 = *puVar5 | 1 << uVar6;
                    *(puVar5 + uVar6 * 4 + 2) = puVar7 - arg1;
                    (puVar5 + uVar6 * 4 + 4)[0] = 1;
                    (puVar5 + uVar6 * 4 + 4)[1] = 0;
                    uVar2 = uVar6;
                }
            }
            else if (iVar4 != 0xd) {
                if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
                    uVar6 = 6;
                }
                else {
                    if (iVar4 == 0x10) goto code_r0x00017bd5;
                    if (iVar4 == 0x11) {
                        uVar6 = 7;
                    }
                    else if (iVar4 == 0x12) {
                        return 0x8000000000000002;
                    }
                }
                goto code_r0x00017ba5;
            }
code_r0x00017bd5:
            puVar7 = puVar7 + 1;
        } while (puVar7 < puVar3);
    }
    return 0;
}


/* fcn.0001796c @ 0x1796c */

ulong fcn.0001796c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    char cStackX_10;
    char cStackX_11;
    uchar uStackX_12;
    char acStack_38 [16];
    
    uVar3 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
code_r0x00017a60:
        uVar2 = 0x8000000000000002;
    }
    else {
        uStackX_12 = 0;
        uVar5 = arg2 & 0xffffffff;
        uVar6 = uVar3;
        if (arg2 != 0) {
            uVar4 = 2;
            uVar7 = 1;
            do {
                cVar1 = *(uVar3 + arg1);
                if (cVar1 == '%') {
                    if ((uVar5 <= uVar7) || (uVar5 <= uVar4)) goto code_r0x00017a60;
                    cStackX_10 = *(uVar3 + 1 + arg1);
                    if ((0x36 < cStackX_10 - 0x30U) || ((0x7e0000007e03ffU >> (cStackX_10 - 0x30U & 0x3fU) & 1) == 0))
                    goto code_r0x00017a60;
                    cStackX_11 = *(uVar3 + 2 + arg1);
                    if ((0x36 < cStackX_11 - 0x30U) || ((0x7e0000007e03ffU >> (cStackX_11 - 0x30U & 0x3fU) & 1) == 0))
                    goto code_r0x00017a60;
                    fcn.00016b48(&cStackX_10,0,acStack_38);
                    uVar3 = uVar3 + 3;
                    uVar7 = uVar7 + 3;
                    uVar4 = uVar4 + 3;
                    cVar1 = acStack_38[0];
                }
                else {
                    uVar3 = uVar3 + 1;
                    uVar7 = uVar7 + 1;
                    uVar4 = uVar4 + 1;
                }
                *(uVar6 + arg3) = cVar1;
                uVar6 = uVar6 + 1;
            } while (uVar3 < uVar5);
        }
        *arg4 = uVar6;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00016cd0 @ 0x16cd0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00016cd0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uchar *arg1_00;
    uint64_t arg3_00;
    uint64_t uVar3;
    char *arg1_01;
    uint in_R9;
    uint64_t uStackX_8;
    char *pcStackX_20;
    uint32_t var_40h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    pcStackX_20 = CONCAT44(in_R9,arg4);
    bVar1 = false;
    arg3_00 = 0x10;
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0;
    do {
        arg1_01 = arg1;
        if (((9 < *arg1 - 0x30U) && (5 < *arg1 + 0xbfU)) && (5 < *arg1 + 0x9fU)) {
            if (*arg1 != ':') {
                return 0x8000000000000003;
            }
            if (bVar1) {
                return 0x8000000000000003;
            }
            if (arg3_00 != 0x10) {
                return 0x8000000000000003;
            }
            if (uVar3 == 0x10) {
                return 0x8000000000000003;
            }
            arg1_01 = arg1 + 1;
            arg3_00 = uVar3;
            if (uVar3 == 0) {
                if (*arg1_01 != ':') {
                    return 0x8000000000000003;
                }
                arg1_01 = arg1 + 2;
            }
        }
        if (((*arg1_01 - 0x30U < 10) || (*arg1_01 + 0xbfU < 6)) || (*arg1_01 + 0x9fU < 6)) {
            if (bVar1) {
                iVar2 = fcn.00016a7c(arg1_01,&pcStackX_20,&uStackX_8);
                if (iVar2 < 0) {
                    return 0x8000000000000003;
                }
                if (pcStackX_20 == arg1_01) {
                    return 0x8000000000000003;
                }
                if (0x80 < uStackX_8) {
                    return 0x8000000000000003;
                }
                arg1_01 = pcStackX_20;
                break;
            }
            iVar2 = fcn.00016b48(arg1_01,&pcStackX_20,&uStackX_8);
            if (iVar2 < 0) {
                return 0x8000000000000003;
            }
            if (4 < pcStackX_20 - arg1_01) {
                return 0x8000000000000003;
            }
            auStack_48[uVar3] = uStackX_8 >> 8;
            auStack_48[uVar3 + 1] = uStackX_8;
            uVar3 = uVar3 + 2;
            arg1_01 = pcStackX_20;
        }
        else {
            if (*arg1_01 != '/') break;
            if (arg3_00 != uVar3) {
                return 0x8000000000000003;
            }
        }
        if (*arg1_01 == '/') {
            bVar1 = true;
        }
        else {
            if (*arg1_01 != ':') break;
            if (uVar3 == 0x10) goto code_r0x00016e30;
        }
        arg1 = arg1_01 + 1;
        arg1_01 = arg1;
    } while (uVar3 < 0x11);
    if (uVar3 == 0x10) {
code_r0x00016e30:
        if (arg3_00 != 0x10) {
            return 0x8000000000000003;
        }
        if (uVar3 != 0x10) goto code_r0x00016e3e;
    }
    else {
code_r0x00016e3e:
        if (arg3_00 == 0x10) {
            return 0x8000000000000003;
        }
        if (arg3_00 == 0) goto code_r0x00016e64;
    }
    if (arg3 != auStack_48) {
        section..text(arg3,auStack_48,arg3_00);
    }
code_r0x00016e64:
    if (0x10 - uVar3 != 0) {
        fcn.000102c0(arg3_00 + arg3,0x10 - uVar3);
    }
    if (arg3_00 < uVar3) {
        arg1_00 = arg3 + 0x10 + (arg3_00 - uVar3);
        if ((uVar3 - arg3_00 != 0) && (arg1_00 != auStack_48 + arg3_00)) {
            section..text(arg1_00,auStack_48 + arg3_00,uVar3 - arg3_00);
        }
    }
    if (arg2 != 0) {
        *arg2 = arg1_01;
    }
    return 0;
}


/* fcn.00018174 @ 0x18174 */

int64_t * fcn.00018174(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) && (uVar2 = 0, arg1 != 0)) {
        do {
            iVar1 = fcn.00016928(*arg2,arg3);
            if (iVar1 == 0) {
                return arg2;
            }
            uVar2 = uVar2 + 1;
            arg2 = arg2 + 0x10;
        } while (uVar2 < arg1);
    }
    return NULL;
}


