// decompiled by r2ghidra: 1717_TcgDxe.pe32
// functions: 50

/* entry0 @ 0x103a4 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t noname_0;
    
    *0x14a00 = *(arg2 + 0x60);
    *0x14a08 = *(arg2 + 0x58);
    noname_0 = arg1;
    *0x149f8 = arg2;
    fcn.00012b54();
    iVar3 = fcn.00012b84();
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010370(noname_0,0x1808);
        while( true ) {
            arg2 = 0x1808;
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010360();
        }
        fcn.00010370(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    fcn.000115e8(arg1,arg2);
    return;
}


/* fcn.00012b54 @ 0x12b54 */

int64_t fcn.00012b54(void)

{
    if (*0x14a18 == 0) {
        fcn.00012aac(0x147b0,0x14a18);
    }
    return *0x14a18;
}


/* fcn.00012aac @ 0x12aac */

ulong fcn.00012aac(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x149f8;
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


/* fcn.00012b84 @ 0x12b84 */

void fcn.00012b84(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012b54();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012bbb:
            if ((piVar1 == NULL) || ((*0x14930 == *(piVar1 + 4) && (*0x14938 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012bbb;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010362 @ 0x10362 */

void fcn.00010362(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.000115e8 @ 0x115e8 */

int64_t fcn.000115e8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t var_30h_2;
    int64_t var_38h;
    uchar auStack_48 [8];
    char acStack_40 [6];
    char cStack_3a;
    uchar uStack_39;
    int64_t var_30h;
    uint32_t var_28h;
    uint32_t var_22h;
    int16_t var_1dh;
    int8_t var_1ah;
    int8_t var_16h;
    
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar2 = (**(*0x14a00 + 0x140))(0x14790,0,&iStackX_10);
    if (-1 < iVar2) {
        pcVar3 = iStackX_10 + 1;
        if (acStack_40 != pcVar3) {
            section..text(acStack_40,pcVar3,0x1b);
        }
        if (cStack_3a == '\x01') {
            iVar2 = 0;
        }
        else {
            cVar1 = fcn.0001443c();
            if (cVar1 == '\x01') {
                if (acStack_40[0] != '\0') {
                    iStackX_18 = iStackX_8;
                    pcVar3 = NULL;
                    iVar2 = (**(*0x14a00 + 0x140))(0x14700,0,0x149e8);
                    if (-1 < iVar2) {
                        pcVar3 = 0x147c0;
                        (**(*0x14a00 + 0x148))(&iStackX_18,0x147c0,0x14850,0);
                    }
                }
            }
            else {
                fcn.00011a84(iStackX_8,pcVar3);
            }
            iVar2 = fcn.00012788(iStackX_8,pcVar3);
            (**(*0x14a00 + 0x140))(0x14790,0,&iStackX_10);
            (**(*0x14a00 + 0x160))(acStack_40,iStackX_10 + 1,0x1b);
            if (iVar2 < 0) {
                var_30h._6_1_ = 1;
                (**(iStackX_10 + 0x20))(acStack_40,0);
                fcn.00014478(0x40000002,0x3058a01);
            }
            else {
                iVar2 = (**(*0x14a00 + 0x140))(0x147d0,0,auStackX_20);
                if (-1 < iVar2) {
                    var_28h._2_1_ = 0;
                    uStack_39 = 0;
                    fcn.00014478(1,0x3058a07);
                    cVar1 = fcn.0001443c();
                    var_30h._3_2_ = 0x100;
                    if (cVar1 == '\0') {
                        var_30h._3_2_ = 1;
                    }
                    (**(iStackX_10 + 0x20))(acStack_40,0);
                    (**(*0x14a00 + 0x80))(&iStackX_8,0x146e0,0,0x14810);
                    (**(*0x14a00 + 0x80))(&iStackX_8,0x147a0,0,0x147a0);
                    if (0x1ffff < *(*0x149f8 + 8)) {
                        iVar2 = fcn.00012b10(0x115e0,auStack_48);
                        return iVar2;
                    }
                    return -0x7ffffffffffffffd;
                }
                pcVar3 = fcn.00014010(*(*0x149f8 + 0x68),*(*0x149f8 + 0x70),0x14780);
                if ((pcVar3 != NULL) && (*pcVar3 == '\x01')) {
                    var_30h._6_1_ = 1;
                }
                (**(iStackX_10 + 0x20))(acStack_40,0);
            }
        }
    }
    return iVar2;
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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00014478 @ 0x14478 */

ulong fcn.00014478(int64_t param_1,int64_t param_2,ulong param_3)

{
    ulong uVar1;
    
    if (*0x14a20 == '\0') {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = fcn.000144a8(param_1,param_2,param_3,0x14800);
    }
    return uVar1;
}


/* fcn.00010450 @ 0x10450 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00010450(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint64_t uVar4;
    int16_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uchar auStackX_18 [8];
    uint *puStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uint *puStack_68;
    int64_t iStack_60;
    int64_t aiStack_58 [2];
    uchar auStack_48 [16];
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar10 = 0;
    puStack_68 = NULL;
    aiStack_58[0] = 0;
    puStackX_20 = NULL;
    aiStack_58[1] = 0x14;
    iStack_60 = 0;
    if (*0x149e1 == '\0') {
        iVar6 = 0x14a30;
        iVar9 = 5;
        do {
            fcn.000102e0(iVar6,0x14,0);
            iVar6 = iVar6 + 0x14;
            iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
        fcn.000102e0(0x14aa8,0x14,0);
        *0x149e1 = '\x01';
    }
    uVar4 = (**(*0x14a00 + 0x140))(0x147d0,0,aiStack_58);
    if (-1 < uVar4) {
        piVar5 = 0x14950;
        uVar7 = uVar10;
        do {
            piVar5 = piVar5 + 1;
            uVar7 = uVar7 + 1;
        } while (*piVar5 != 0);
        uVar8 = arg1 + 0x20 + uVar7 * 2;
        uVar4 = (**(*0x14a00 + 0x40))(4,uVar8 + 0x20,&puStack_68);
        if (-1 < uVar4) {
            *puStack_68 = 7;
            puStack_68[1] = 0x800000e0;
            puStack_68[7] = uVar8;
            iVar6 = (**(*0x14a00 + 0x40))(4,uVar8,&puStackX_20);
            uVar3 = *0x1473c;
            uVar2 = *0x14738;
            uVar1 = *0x14734;
            if (iVar6 < 0) {
                (**(*0x14a00 + 0x48))(puStack_68);
                uVar4 = 0x8000000000000009;
            }
            else {
                *puStackX_20 = *0x14730;
                puStackX_20[1] = uVar1;
                puStackX_20[2] = uVar2;
                puStackX_20[3] = uVar3;
                *(puStackX_20 + 4) = uVar7;
                *(puStackX_20 + 6) = arg1;
                (**(*0x14a00 + 0x160))(puStackX_20 + 8,0x14950,uVar7 * 2);
                (**(*0x14a00 + 0x160))(puStackX_20 + uVar7 * 2 + 0x20,arg2,arg1);
                (**(*0x14a00 + 0x160))(puStack_68 + 8,puStackX_20,puStack_68[7]);
                (**(aiStack_58[0] + 8))(aiStack_58[0],puStackX_20,puStack_68[7],4,aiStack_58 + 1,&iStack_60);
                iVar6 = 0x14a30;
                uVar4 = uVar10;
                uVar7 = uVar10;
                do {
                    if (iVar6 == iStack_60) {
code_r0x000106ea:
                        uVar4 = uVar10;
                        goto code_r0x000106ed;
                    }
                    iVar9 = fcn.000102c0(iVar6,iStack_60,0x14);
                    if (iVar9 == 0) goto code_r0x000106ea;
                    if (iVar6 == 0x14aa8) break;
                    iVar9 = fcn.000102c0(iVar6,0x14aa8,0x14);
                    if (iVar9 == 0) break;
                    uVar7 = uVar7 + 1;
                    uVar4 = uVar4 + 0x14;
                    iVar6 = iVar6 + 0x14;
                } while (uVar4 < 100);
                (**(*0x14a00 + 0x160))(uVar7 * 0x14 + 0x14a30,iStack_60,0x14);
                uVar4 = (**(aiStack_58[0] + 0x20))
                                  (aiStack_58[0],puStackX_20,puStack_68[7],4,puStack_68,auStackX_18,auStack_48);
                fcn.00014478(1,0x3058a16);
code_r0x000106ed:
                (**(*0x14a00 + 0x48))(puStack_68);
                (**(*0x14a00 + 0x48))(puStackX_20);
            }
        }
    }
    return uVar4;
}


/* fcn.00013dc4 @ 0x13dc4 */

void fcn.00013dc4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    uVar2 = *(arg1 + 0x14) >> 3 & 0x3f;
    uVar3 = uVar2;
    uVar1 = arg3;
    uVar5 = *(arg1 + 0x14) + uVar1 * 8;
    *(arg1 + 0x14) = uVar5;
    if (uVar5 < uVar1 << 3) {
        *(arg1 + 0x18) = *(arg1 + 0x18) + 1;
    }
    *(arg1 + 0x18) = *(arg1 + 0x18) + ((arg3 & 0xffffffffU) >> 0x1d);
    if (uVar2 + uVar1 < 0x40) {
        uVar5 = 0;
    }
    else {
        uVar5 = -uVar2 + 0x40;
        iVar4 = arg1 + 0x1c + uVar3;
        if ((uVar5 != 0) && (iVar4 != arg2)) {
            section..text(iVar4,arg2,uVar5);
        }
        fcn.00012c34(arg1,arg1 + 0x1c);
        for (uVar2 = -uVar2 + 0x7f; uVar2 < uVar1; uVar2 = uVar2 + 0x40) {
            fcn.00012c34(arg1,uVar5 + arg2);
            uVar5 = uVar5 + 0x40;
        }
        uVar3 = 0;
    }
    iVar4 = arg1 + 0x1c + uVar3;
    if ((uVar1 - uVar5 != 0) && (iVar4 != uVar5 + arg2)) {
        section..text(iVar4,uVar5 + arg2,uVar1 - uVar5);
    }
    return;
}


/* fcn.00013ea4 @ 0x13ea4 */

void fcn.00013ea4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uchar *puVar6;
    uchar auStackX_10 [8];
    
    uVar3 = 0;
    puVar6 = auStackX_10;
    uVar5 = uVar3;
    do {
        uVar2 = uVar5;
        uVar1 = uVar5;
        uVar4 = uVar2 + 1;
        uVar5 = uVar4;
        *puVar6 = *((-(uVar2 < 4) & 4) + 0x14 + arg2) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        puVar6 = puVar6 + 1;
    } while (uVar4 < 8);
    fcn.00013dc4(arg2,0x1499c,1);
    while ((*(arg2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.00013dc4(arg2,0x149a0,1);
    }
    fcn.00013dc4(arg2,auStackX_10,8);
    uVar5 = uVar3;
    do {
        uVar1 = uVar3;
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
        uVar1 = ('\x03' - (uVar1 & 3)) * '\b' & 0x1f;
        *arg1 = *(arg2 + (uVar5 & 0xfffffffffffffffc)) >> uVar1;
        arg1 = arg1 + 1;
        uVar5 = uVar5 + 1;
    } while (uVar2 < 0x14);
    uVar2 = 0 >> uVar1;
    fcn.000102e0(arg2 + 0x1c,uVar2 + 0x40,uVar2);
    fcn.000102e0(arg2,0x14,0);
    fcn.000102e0(arg2 + 0x14,8,0);
    fcn.000102e0(auStackX_10,8,0);
    return;
}


/* fcn.000129d4 @ 0x129d4 */

void fcn.000129d4(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000129a4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010340(arg1_00,arg1);
    }
    return;
}


/* fcn.000129a4 @ 0x129a4 */

ulong fcn.000129a4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14a00 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 17504 named .text
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


/* fcn.00012a5c @ 0x12a5c */

char * fcn.00012a5c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00012a00(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.0001443c @ 0x1443c */

int16_t fcn.0001443c(void)

{
    uint8_t uVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    while ((uVar1 = *0xfed40f00 >> 8, *(uVar2 + 0x14940) != *0xfed40f00 || (*(uVar2 + 0x14942) != *0xfed40f02))) {
        uVar2 = uVar2 + 4;
        if (0xb < uVar2) {
            return uVar1 << 8;
        }
    }
    return CONCAT11(uVar1,1);
}


/* fcn.000108a8 @ 0x108a8 */

ulong fcn.000108a8(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t arg2_00;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t arg3;
    uint32_t *puVar5;
    uint uStack_88;
    uint uStack_84;
    uint uStack_80;
    uint uStack_7c;
    uint uStack_78;
    uint uStack_74;
    uint uStack_70;
    int64_t var_60h;
    int32_t var_58h;
    int32_t var_54h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    
    arg2_00 = *arg1;
    uStack_70 = 0;
    uStack_74 = 0;
    uStack_88 = 0x67452301;
    uStack_84 = 0xefcdab89;
    uStack_80 = 0x98badcfe;
    uStack_7c = 0x10325476;
    uStack_78 = 0xc3d2e1f0;
    iVar2 = *(arg2_00 + 4) + 1;
    arg3 = iVar2 * 0x28;
    fcn.00013dc4(&uStack_88,arg2_00,arg3);
    uVar4 = *(arg2_00 + 4);
    uVar3 = (*(arg2_00 + 0x3c) - *(arg2_00 + 6)) + iVar2 * -0x28 + 0x28;
    if (uVar3 != 0) {
        fcn.00013dc4(&uStack_88,arg2_00 + (uVar4 + 1) * 0x28,uVar3 & 0xffffffff);
        arg3 = arg3 + uVar3;
    }
    if (uVar4 != 0) {
        puVar5 = arg2_00 + 0x38;
        do {
            if (*puVar5 != 0) {
                uVar1 = *puVar5;
                fcn.00013dc4(&uStack_88,*arg1 + 0x28 + (puVar5[1] - *(arg2_00 + 6)),uVar1);
                arg3 = arg3 + uVar1;
                puVar5 = puVar5 + 10;
            }
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    if (arg3 < *(arg1 + 8)) {
        fcn.00013dc4(&uStack_88,*arg1 + arg3,*(arg1 + 8) - arg3);
    }
    fcn.00013ea4(arg2,&uStack_88);
    return 0;
}


/* fcn.000109e4 @ 0x109e4 */

//WARNING: Variable defined which should be unmapped: var_25h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

ulong fcn.000109e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t arg2_00;
    int *arg2_01;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t *puVar11;
    uint32_t var_67h;
    uint32_t var_7fh;
    uint64_t uStack_b8;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    uint uStack_88;
    ulong uStack_84;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int32_t var_39h;
    int32_t var_35h;
    int32_t var_31h;
    int32_t var_2dh;
    int32_t var_29h;
    int64_t var_25h;
    
    uVar7 = 0;
    uVar4 = uVar7;
    if (*arg1 == 0x5a4d) {
        uVar4 = *(arg1 + 0x3c);
    }
    uVar10 = uVar4;
    piVar1 = uVar10 + arg1;
    if (*piVar1 != 0x4550) {
        return 0;
    }
    uStack_98 = 0x67452301;
    uStack_94 = 0xefcdab89;
    uStack_90 = 0x98badcfe;
    uStack_8c = 0x10325476;
    uStack_88 = 0xc3d2e1f0;
    uStack_84 = 0;
    iVar2 = piVar1[6];
    if (iVar2 == 0x10b) {
        uVar4 = piVar1[0x1d];
    }
    else {
        uVar4 = piVar1[0x21];
    }
    fcn.00013dc4(&uStack_98,arg1,uVar10 + 0x58 & 0xffffffff);
    arg2_01 = piVar1 + 0x17;
    if (4 < uVar4) {
        if (iVar2 == 0x10b) {
            iVar6 = 0x98 - arg2_01;
        }
        else {
            iVar6 = 0xa8 - arg2_01;
        }
        if (piVar1 + iVar6 != 0) {
            fcn.00013dc4(&uStack_98,arg2_01,piVar1 + iVar6 & 0xffffffff);
        }
        arg2_01 = piVar1 + 0x28;
        if (iVar2 != 0x10b) {
            arg2_01 = piVar1 + 0x2c;
        }
    }
    uVar5 = (piVar1[0x15] - arg2_01) + arg1;
    if (uVar5 != 0) {
        fcn.00013dc4(&uStack_98,arg2_01,uVar5 & 0xffffffff);
    }
    uVar5 = piVar1[0x15];
    iVar6 = fcn.000129d4(*(piVar1 + 6) * 0x28);
    if (iVar6 == 0) {
        return 0x8000000000000009;
    }
    uStack_b8 = 0;
    arg2_00 = arg1 + 0x18 + *(piVar1 + 5) + uVar10;
    if (*(piVar1 + 6) != 0) {
        iVar9 = iVar6 + -0x28;
        do {
            uVar10 = uStack_b8;
            if (uStack_b8 != 0) {
                iVar8 = iVar9;
                do {
                    if (*(iVar8 + 0x14) <= *(arg2_00 + 0x14)) break;
                    if (iVar8 + 0x28 != iVar8) {
                        section..text(iVar8 + 0x28,iVar8,0x28);
                    }
                    iVar8 = iVar8 + -0x28;
                    uVar10 = uVar10 - 1;
                } while (uVar10 != 0);
            }
            iVar8 = iVar6 + uVar10 * 0x28;
            if (iVar8 != arg2_00) {
                section..text(iVar8,arg2_00,0x28);
            }
            arg2_00 = arg2_00 + 0x28;
            uStack_b8 = uStack_b8 + 1;
            iVar9 = iVar9 + 0x28;
        } while (uStack_b8 < *(piVar1 + 6));
    }
    uStack_b8 = 0;
    if (*(piVar1 + 6) != 0) {
        puVar11 = iVar6 + 0x10;
        do {
            if (*puVar11 != 0) {
                uVar3 = *puVar11;
                fcn.00013dc4(&uStack_98,puVar11[1] + arg1,uVar3);
                uVar5 = uVar5 + uVar3;
            }
            uStack_b8 = uStack_b8 + 1;
            puVar11 = puVar11 + 10;
        } while (uStack_b8 < *(piVar1 + 6));
    }
    if (uVar5 < arg2) {
        if (4 < uVar4) {
            if (iVar2 == 0x10b) {
                uVar7 = piVar1[0x27];
            }
            else {
                uVar7 = piVar1[0x2b];
            }
        }
        if (uVar7 + uVar5 < arg2) {
            fcn.00013dc4(&uStack_98,uVar5 + arg1,(arg2 - uVar5) - uVar7);
        }
        else if (arg2 < uVar7 + uVar5) goto code_r0x00010c97;
    }
    fcn.00013ea4(arg3,&uStack_98);
code_r0x00010c97:
    (**(*0x14a00 + 0x48))(iVar6);
    return 0;
}


/* fcn.00010724 @ 0x10724 */

int64_t fcn.00010724(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    char *arg1;
    int64_t iVar4;
    int64_t iStackX_8;
    ulong uStackX_10;
    
    uStackX_10 = 0;
    iStackX_8 = 0;
    iVar1 = (**(*0x14a08 + 0x48))(0x14950,0x14730,0,&uStackX_10,0);
    if ((-1 < iVar1) || (iVar1 == -0x7ffffffffffffffb)) {
        iVar1 = (**(*0x14a00 + 0x40))(4,uStackX_10,&iStackX_8);
        if (iVar1 < 0) {
            return -0x7ffffffffffffff7;
        }
        iVar1 = (**(*0x14a08 + 0x48))(0x14950,0x14730,0,&uStackX_10,iStackX_8);
        if (-1 < iVar1) {
            iVar4 = *(*0x149f8 + 0x68);
            arg1 = *(*0x149f8 + 0x70);
            do {
                if (iVar4 == 0) {
                    puVar3 = NULL;
code_r0x0001082b:
                    if (puVar3 == NULL) {
                        iVar1 = -0x7ffffffffffffff2;
                    }
                    else {
                        if (puVar3[1] != 0) {
                            fcn.00010450(puVar3[1],*puVar3 + iStackX_8);
                            if (iStackX_8 != 0) {
                                (**(*0x14a00 + 0x48))();
                            }
                            return iVar1;
                        }
                        iVar1 = -0x7ffffffffffffffa;
                    }
                    (**(*0x14a00 + 0x48))(iStackX_8);
                    return iVar1;
                }
                if ((arg1 == str._ffn) || (iVar2 = fcn.000102c0(arg1,0x14710,0x10), iVar2 == 0)) {
                    puVar3 = *(arg1 + 0x10);
                    goto code_r0x0001082b;
                }
                arg1 = arg1 + 0x18;
                iVar4 = iVar4 + -1;
            } while( true );
        }
        (**(*0x14a00 + 0x48))(iStackX_8);
    }
    return -0x7ffffffffffffff2;
}


/* fcn.00011de8 @ 0x11de8 */

void fcn.00011de8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t var_fh;
    int64_t var_17h;
    int64_t var_1fh;
    int64_t var_27h;
    int64_t var_2fh;
    int64_t var_37h;
    int64_t var_3fh;
    int64_t var_47h;
    int64_t var_4fh;
    int64_t var_6fh;
    ushort uStack_78;
    uint uStack_76;
    uint uStack_72;
    uchar auStack_68 [16];
    uchar *puStack_58;
    ulong uStack_50;
    int64_t iStack_48;
    ulong uStack_40;
    ushort *puStack_38;
    ulong uStack_30;
    uchar auStack_28 [7];
    int64_t var_19h;
    uchar auStack_18 [7];
    int64_t var_9h;
    
    uVar2 = arg2 >> 0x10;
    stack0xffffffffffffffe0 = 4;
    puStack_38 = &uStack_78;
    uStack_30 = 10;
    _auStack_28 = &var_17h + 1;
    uStack_50 = 10;
    stack0xfffffffffffffff0 = 0x14;
    puStack_58 = auStack_68;
    uStack_78 = 0xc100;
    uStack_40 = 0x14;
    uVar1 = arg2 << 8 | arg2 >> 8;
    var_17h._1_4_ = CONCAT22(uVar1,uVar2 << 8 | uVar2 >> 8);
    uStack_76 = 0x22000000;
    uStack_72 = 0x14000000;
    iStack_48 = arg4;
    _auStack_18 = arg3;
    fcn.00011ce0(arg1,CONCAT44(arg2 >> 0x20,CONCAT22(uVar2,uVar1)),&puStack_38);
    return;
}


/* fcn.00011ce0 @ 0x11ce0 */

int64_t fcn.00011ce0(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    (***(arg1 + 0x28))(*(arg1 + 0x28));
    iVar1 = (**(*(arg1 + 0x28) + 0x18))(*(arg1 + 0x28),3,arg2,2,in_stack_00000028);
    if (iVar1 < 0) {
        fcn.00014478(0x80000002,0x3058a19);
    }
    (**(*(arg1 + 0x28) + 8))(*(arg1 + 0x28));
    return iVar1;
}


/* fcn.00014558 @ 0x14558 */

ulong fcn.00014558(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    ushort **in_R8;
    ushort *puStackX_20;
    ushort *in_stack_00000030;
    ushort **in_stack_00000038;
    ushort auStack_218 [264];
    
    if (in_stack_00000038 < 0x1ed) {
        puStackX_20 = auStack_218;
code_r0x00014618:
        *puStackX_20 = 0x14;
        puStackX_20[1] = in_stack_00000038;
        *(puStackX_20 + 2) = *0x14770;
        *(puStackX_20 + 6) = *0x14778;
        if (((in_stack_00000030 != NULL) && (in_stack_00000038 != NULL)) && (puStackX_20 + 10 != in_stack_00000030)) {
            section..text(puStackX_20 + 10,in_stack_00000030,in_stack_00000038);
            in_R8 = in_stack_00000038;
        }
        uVar2 = fcn.000144a8(1,0x3058a18,in_R8,0x14800);
        if (puStackX_20 != auStack_218) {
            (**(*0x14a00 + 0x48))();
        }
    }
    else {
        if (((*0x14a00 == 0) || (*(*0x14a00 + 0x40) == 0)) || (*(*0x14a00 + 0x48) == 0)) {
            return 0x8000000000000003;
        }
        puStackX_20 = arg1;
        uVar1 = (**(*0x14a00 + 0x18))(0x1f);
        (**(*0x14a00 + 0x20))(uVar1);
        if (uVar1 < 0x11) {
            puStackX_20 = NULL;
            in_R8 = &puStackX_20;
            (**(*0x14a00 + 0x40))(4,in_stack_00000038 + 0x14);
            if (puStackX_20 != NULL) goto code_r0x00014618;
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.000144a8 @ 0x144a8 */

ulong fcn.000144a8(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x14a28 != NULL) {
code_r0x00014520:
            uVar2 = (***0x14a28)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,arg3,in_stack_00000028);
            return uVar2;
        }
        if ((*0x14a00 != 0) && (*(*0x14a00 + 0x140) != NULL)) {
            iVar1 = (**(*0x14a00 + 0x140))(0x146f0,0,0x14a28);
            if (iVar1 < 0) {
                *0x14a28 = NULL;
            }
            if (*0x14a28 != NULL) goto code_r0x00014520;
        }
    }
    return 0x8000000000000003;
}


/* fcn.00011a84 @ 0x11a84 */

int64_t fcn.00011a84(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    
    iStackX_8 = arg1;
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x14a00 + 0x140))(0x14790,0,aiStackX_10);
    if (-1 < iVar1) {
        if ((((*(aiStackX_10[0] + 7) == '\0') || (0xfffffffd < *0xfed40030 - 1U)) || (0xfffffffd < *0xfed40030 - 1U)) ||
           ((*0xfed40030 & 0xf) != 1)) {
            if ((**0x14848 == -1) || (**0x14848 == '\0')) {
                iVar1 = -0x5fffffffffffffff;
            }
            else {
                iVar1 = (**(*0x14a00 + 0x148))(&iStackX_8,0x147c0,0x14828,0);
            }
        }
        else {
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.00012788 @ 0x12788 */

int64_t fcn.00012788(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    uint64_t auStackX_10 [2];
    int64_t var_28h_2;
    int64_t var_30h_2;
    uint uStack_48;
    uint uStack_44;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int16_t var_28h;
    int32_t var_26h;
    int32_t var_22h;
    int32_t var_1eh;
    int32_t var_1ah;
    int32_t var_16h;
    
    iStackX_8 = arg1;
    auStackX_10[0] = arg2;
    (**(*0x14a00 + 0x140))(0x147c0,0,0x148c8);
    iVar2 = (**(*0x14a00 + 0x140))(0x147c0,0,0x14898);
    if (-1 < iVar2) {
        iVar2 = fcn.000126a0();
        if (-1 < iVar2) {
            stack0xffffffffffffffca = 0x16000000;
            var_30h._0_2_ = 0xc100;
            cVar1 = fcn.0001443c();
            var_26h = 0x4000000;
            stack0xffffffffffffffce = 0x65800000;
            if (cVar1 == '\0') {
                stack0xffffffffffffffce = 0x65000000;
            }
            var_22h = 0x4000000;
            var_1eh = 0x8010000;
            cVar1 = fcn.0001443c();
            if (cVar1 == '\0') {
                fcn.00011d4c(0x148a0,0x16,&var_30h,0x24);
            }
            else {
                fcn.00012378(0x14870,0x16,&var_30h,0x24);
            }
            if (CONCAT22(*0x14ac6 << 8 | *0x14ac6 >> 8,*0x14ac8 << 8 | *0x14ac8 >> 8) == 0) {
                cVar1 = fcn.0001443c();
                uStack_48 = 0xe20939be;
                uStack_44 = 0x41be32d4;
                var_38h = 0x7f8950a1;
                var_34h = 0x2998d485;
                auStackX_10[0] = auStackX_10[0] & 0xffffffffffffff00;
                auStackX_10[1] = 1;
                (**(*0x14a08 + 0x48))(L"MemoryOverwriteRequestControl",&uStack_48,0,auStackX_10 + 1,auStackX_10);
                if (cVar1 == '\0') {
                    iVar2 = (**(*0x14a00 + 0x148))(&iStackX_8,0x147d0,0x148a0,0);
                    if (iVar2 < 0) {
                        fcn.00014478(0x40000002,0x3058a05);
                    }
                }
                else {
                    if (0x1ffff < *(*0x149f8 + 8)) {
                        fcn.00012b10(0x11cd4,&var_28h_2);
                    }
                    (**(*0x14a00 + 0x148))(&iStackX_8,0x147d0,0x14870,0);
                }
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00014010 @ 0x14010 */

int16_t * fcn.00014010(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int64_t arg1_00;
    int64_t iVar5;
    int16_t *piStackX_8;
    
    if (arg1 != 0) {
        iVar5 = arg2 + arg1 * 0x18;
        do {
            arg1 = arg1 + -1;
            arg1_00 = iVar5 + -0x18;
            if ((arg1_00 == 0x147b0) || (iVar2 = fcn.000102c0(arg1_00,0x147b0,0x10), iVar2 == 0)) {
                piVar3 = *(iVar5 + -8);
                iVar5 = -0x7ffffffffffffff2;
                while (iVar1 = *piVar3, iVar1 != -1) {
                    piVar4 = piVar3;
                    do {
                        if (iVar1 == 4) break;
                        piVar4 = piVar4 + piVar4[1];
                        iVar1 = *piVar4;
                    } while (iVar1 != -1);
                    if (*piVar4 == -1) {
                        piVar4 = piVar3;
                    }
                    if ((*piVar4 == 4) &&
                       ((arg3 == piVar4 + 4 || (iVar2 = fcn.000102c0(arg3,piVar4 + 4,0x10), iVar2 == 0)))) {
                        iVar5 = 0;
                        piStackX_8 = piVar4 + 0xc;
                    }
                    piVar3 = piVar4[1] + piVar4;
                    if (-1 < iVar5) {
                        return piStackX_8;
                    }
                }
            }
            iVar5 = arg1_00;
        } while (arg1 != 0);
    }
    return NULL;
}


/* fcn.00012b10 @ 0x12b10 */

void fcn.00012b10(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = 0x12b0c;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    (**(*0x14a00 + 0x170))(0x200,8,iVar1,0,0x14720,arg2);
    return;
}


/* fcn.00012bd4 @ 0x12bd4 */

void fcn.00012bd4(int64_t arg1)

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
            fcn.00010360();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00014110 @ 0x14110 */

uint8_t fcn.00014110(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int iVar2;
    
    iVar2 = 30000;
    while( true ) {
        iVar1 = 5;
        do {
            fcn.00012bd4(0x6b);
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) break;
        if (*arg1 < '\0') {
            return *arg1 & arg2;
        }
    }
    return 0;
}


/* fcn.000141c4 @ 0x141c4 */

ulong fcn.000141c4(int64_t arg1)

{
    char cVar1;
    ulong uVar2;
    unkbyte7 in_RDX;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    
    cVar1 = fcn.00014110(arg1,CONCAT71(in_RDX,0x20));
    uVar2 = 0;
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000013;
    }
    else {
        iVar5 = 2;
        do {
            iVar4 = 30000;
            *(arg1 + 0x18) = 0x40;
            do {
                iVar4 = iVar4 + -1;
                iVar3 = 5;
                do {
                    fcn.00012bd4(0x6b);
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
            } while (((*(arg1 + 0x18) & 0x40) == 0) && (iVar4 != 0));
        } while ((iVar4 == 0) && (iVar5 = iVar5 + -1, iVar5 != 0));
        if (iVar4 == 0) {
            uVar2 = 0x8000000000000007;
        }
    }
    return uVar2;
}


/* fcn.00014268 @ 0x14268 */

uint64_t fcn.00014268(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *arg1_00;
    uchar uVar1;
    char cVar2;
    int16_t iVar3;
    unkbyte7 Var4;
    int64_t iVar5;
    
    cVar2 = arg4;
    Var4 = arg2 >> 8;
    iVar3 = 0;
    if (arg3 == 0) {
        return -(cVar2 != '\0') & 0x8000000000000002;
    }
    if ((*arg1 & 0x20) != 0) {
        iVar5 = arg3 + -1;
        if (cVar2 == '\0') {
            iVar5 = arg3;
        }
        while (iVar5 != 0) {
            iVar3 = fcn.0001416c(arg1);
            if (iVar3 == 0) {
                return 0x8000000000000012;
            }
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                if (iVar5 == 0) goto code_r0x0001430a;
                uVar1 = *arg2;
                iVar5 = iVar5 + -1;
                arg2 = arg2 + 1;
                *(arg1 + 0x24) = uVar1;
            }
        }
code_r0x0001430a:
        if (cVar2 == '\0') {
            return 0;
        }
        if ((iVar3 == 0) && (iVar3 = fcn.0001416c(arg1), iVar3 == 0)) {
            return 0x8000000000000012;
        }
        arg1_00 = arg1 + 0x18;
        cVar2 = fcn.00014110(arg1_00,CONCAT71(Var4,8));
        if (cVar2 != '\0') {
            *(arg1 + 0x24) = *arg2;
            cVar2 = fcn.00014110(arg1_00,CONCAT71(Var4,8));
            if (cVar2 == '\0') {
                *arg1_00 = 0x20;
                return 0;
            }
        }
    }
    return 0x8000000000000015;
}


/* fcn.0001437c @ 0x1437c */

uint64_t fcn.0001437c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t iVar2;
    uint in_register_00000014;
    uchar *puVar3;
    uchar *puVar4;
    
    puVar4 = *arg3 + CONCAT44(in_register_00000014,arg2);
    puVar3 = CONCAT44(in_register_00000014,arg2);
    if (CONCAT44(in_register_00000014,arg2) < puVar4) {
        while( true ) {
            arg2 = CONCAT31(arg2 >> 8,0x10);
            cVar1 = fcn.00014110(arg1 + 0x18,CONCAT44(in_register_00000014,arg2));
            if (cVar1 == '\0') break;
            iVar2 = fcn.0001416c(arg1);
            if (iVar2 == 0) {
                return 0x8000000000000012;
            }
            do {
                if (puVar4 <= puVar3) goto code_r0x000143f2;
                arg2 = CONCAT31(arg2 >> 8,0x10);
                cVar1 = fcn.00014110(arg1 + 0x18,CONCAT44(in_register_00000014,arg2));
                if (cVar1 == '\0') break;
                *puVar3 = *(arg1 + 0x24);
                puVar3 = puVar3 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            if (puVar4 <= puVar3) break;
        }
    }
code_r0x000143f2:
    *arg3 = puVar3 + (*arg3 - puVar4);
    cVar1 = fcn.00014110(arg1 + 0x18,CONCAT44(in_register_00000014,CONCAT31(arg2 >> 8,0x10)));
    return -(cVar1 != '\0') & 0x8000000000000005;
}


/* fcn.00013fcc @ 0x13fcc */

void fcn.00013fcc(ulong noname_0,uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uchar *puVar2;
    uint in_register_00000014;
    uchar *puVar3;
    
    puVar2 = CONCAT44(in_register_00000014,arg1);
    if (arg2 < puVar2) {
        puVar2 = puVar2 + arg3 + -1;
        puVar3 = arg3 + -1 + arg2;
        if (arg3 != 0) {
            do {
                uVar1 = *puVar3;
                puVar3 = puVar3 + -1;
                *puVar2 = uVar1;
                puVar2 = puVar2 + -1;
                arg3 = arg3 + -1;
            } while (arg3 != 0);
            return;
        }
    }
    else if (arg3 != 0) {
        arg2 = arg2 - puVar2;
        do {
            *puVar2 = puVar2[arg2];
            puVar2 = puVar2 + 1;
            arg3 = arg3 + -1;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.000120b0 @ 0x120b0 */

ulong fcn.000120b0(ulong noname_0,int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uchar *arg1_00;
    int64_t iVar3;
    int64_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    uchar auStack_88 [32];
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    uint uStack_58;
    uint uStack_54;
    uint uStack_50;
    
    if (arg3 == 4) {
        iVar3 = *in_stack_00000030;
        if ((iVar3 == 0) || (*in_stack_00000028 == 0)) {
            *in_stack_00000028 = 0x14;
            iVar2 = (**(*0x14a00 + 0x40))(4,0x14,in_stack_00000030);
            iVar3 = *in_stack_00000030;
            if ((iVar3 == 0) || (iVar2 < 0)) {
                return 0x8000000000000009;
            }
        }
        uStack_50 = 0;
        uStack_54 = 0;
        uStack_68 = 0x67452301;
        uStack_64 = 0xefcdab89;
        uStack_60 = 0x98badcfe;
        uStack_5c = 0x10325476;
        uStack_58 = 0xc3d2e1f0;
        fcn.00013dc4(&uStack_68,arg1,arg2 & 0xffffffff);
        arg1_00 = auStack_88;
        fcn.00013ea4(arg1_00,&uStack_68);
        fcn.00013fcc(arg1_00,iVar3,auStack_88,0x14);
        uVar1 = 0;
    }
    else {
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.000121bc @ 0x121bc */

int64_t fcn.000121bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *arg2_00;
    uint32_t *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t *puVar7;
    uchar auStack_28 [32];
    
    iVar2 = 0;
    arg2_00 = arg2 + 0x1c;
    if (*arg2_00 == 0) {
        iVar2 = 0;
    }
    else {
        if ((arg4 & 1U) == 0) {
            iVar2 = (***(arg1 + 0x28))(*(arg1 + 0x28));
            if (-1 < iVar2) {
                iVar2 = fcn.00011de8(arg1,*arg2,arg2 + 8,auStack_28);
            }
            (**(*(arg1 + 0x28) + 8))(*(arg1 + 0x28));
        }
        puVar1 = *0x148fa;
        if ((*0x14ad2 == '\0') && (-1 < iVar2)) {
            uVar3 = 0;
            for (puVar4 = *0x148fa; ((puVar4 != NULL && (*puVar4 < 0x19)) && (puVar4[1] != 0));
                puVar4 = puVar4 + puVar4[7] + 0x20) {
                uVar3 = uVar3 + 1;
            }
            puVar4 = *0x148fa;
            if ((uVar3 != 0) && (uVar5 = 0, uVar3 != 0)) {
                do {
                    if ((puVar4 == NULL) || (0x18 < *puVar4)) break;
                    uVar5 = uVar5 + 1;
                    puVar4 = puVar4 + puVar4[7] + 0x20;
                } while (uVar5 < uVar3);
            }
            uVar5 = *arg2_00 + 0x1f + puVar4;
            if ((*0x148fa)[-10] + *0x148fa <= uVar5) {
                return -0x7ffffffffffffff7;
            }
            (*0x148fa)[-9] = (puVar4 - (*0x148fa + -10)) - 0x28;
            if (*arg2_00 < 0xffffffe0) {
                puVar7 = puVar1;
                fcn.00013fcc(uVar5,puVar4,arg2,8);
                iVar6 = puVar4;
                fcn.00013fcc(uVar5,iVar6 + 8,arg2 + 8,0x14);
                fcn.00013fcc(uVar5,iVar6 + 0x1c,arg2_00,4);
                fcn.00013fcc(uVar5,iVar6 + 0x20,arg2 + 0x20,*arg2_00);
                iVar2 = 0;
                uVar3 = 0;
                puVar1[-9] = puVar1[-9] + *arg2_00 + 0x20;
                for (; ((puVar7 != NULL && (*puVar7 < 0x19)) && (puVar7[1] != 0)); puVar7 = puVar7 + puVar7[7] + 0x20) {
                    uVar3 = uVar3 + 1;
                }
                puVar1[-8] = uVar3;
                *arg3 = uVar3;
            }
            else {
                iVar2 = -0x7ffffffffffffff7;
            }
        }
    }
    return iVar2;
}


/* fcn.00012968 @ 0x12968 */

int64_t fcn.00012968(void)

{
    if (*0x14a10 == 0) {
        (**(*0x14a00 + 0x140))(0x14740,0,0x14a10);
    }
    return *0x14a10;
}


/* fcn.00012598 @ 0x12598 */

void fcn.00012598(void)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t aiStackX_10 [3];
    
    uStackX_8 = 0;
    iVar1 = (**(*0x14a00 + 0x140))(0x147f0,0,aiStackX_10);
    if (iVar1 < 0) {
        (**(*0x14a00 + 0x50))(0x200,8,0x124b8,0x14ae8,0x14af0);
        (**(*0x14a00 + 0xa8))(0x147f0,*0x14af0,0x14ae8);
    }
    else {
        *0x148d8 = 2;
        section..text(0x148da,0x14994,6);
        *0x148e8 = 0;
        *0x148e0 = 0x4653414150414e;
        *0x148ec = 0x5446534d;
        *0x148f0 = 0x1000013;
        *0x148f4 = 0;
        *0x148d4 = 0x32;
        (**(aiStackX_10[0] + 8))(aiStackX_10[0],"TCPA^",1,0x1e,&uStackX_8);
    }
    return;
}


/* fcn.000126a0 @ 0x126a0 */

int64_t fcn.000126a0(void)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    puVar1 = fcn.00014010(*(*0x149f8 + 0x68),*(*0x149f8 + 0x70),0x14760);
    if (puVar1 == NULL) {
        return -0x7ffffffffffffff2;
    }
    iVar2 = (**(*0x14a00 + 0x28))(1,10,((*0x148f6 + 0x28 & 0xfff) != 0) + (*0x148f6 + 0x28 >> 0xc),0x148fa);
    if (-1 < iVar2) {
        (**(*0x14a00 + 0x168))(*0x148fa,*0x148f6,0);
        *puVar1 = *0x148f6;
        iVar2 = *0x14a00;
        if (*0x14ad2 == '\0') {
            iVar3 = puVar1[1] + 0x28;
        }
        else {
            puVar1[2] = 0;
            iVar3 = 0x28;
            puVar1[1] = 0;
        }
        (**(iVar2 + 0x160))(*0x148fa,puVar1,iVar3);
        *0x148fa = *0x148fa + 0x28;
        iVar2 = fcn.00012598();
    }
    return iVar2;
}


/* fcn.00012378 @ 0x12378 */

int64_t fcn.00012378(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong in_stack_00000028;
    int64_t aiStack_18 [2];
    
    aiStack_18[0] = 0;
    iVar1 = (**(*0x14a00 + 0x140))(0x14700,0,aiStack_18);
    if (-1 < iVar1) {
        iVar2 = (**(aiStack_18[0] + 0x30))(0xfed40000,arg2,arg1 & 0xffffffff,in_stack_00000028,arg3);
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


/* fcn.00011d4c @ 0x11d4c */

ulong fcn.00011d4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uchar auStack_28 [8];
    uint64_t uStack_20;
    int64_t iStack_18;
    uint64_t uStack_10;
    
    (***(arg1 + 0x28))(*(arg1 + 0x28));
    uStack_20 = arg4 & 0xffffffff;
    iStack_18 = arg3;
    uStack_10 = arg2 & 0xffffffff;
    iVar1 = (**(*(arg1 + 0x28) + 0x18))(*(arg1 + 0x28),1,&iStack_18,1,auStack_28);
    if (iVar1 < 0) {
        fcn.00014478(1,0x3038a22);
    }
    (**(*(arg1 + 0x28) + 8))(*(arg1 + 0x28));
    return 0;
}


/* fcn.00012a00 @ 0x12a00 */

bool fcn.00012a00(uint32_t arg1)

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


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00012c34 @ 0x12c34 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

void fcn.00012c34(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint in_register_00000014;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    uint32_t uVar24;
    uint32_t uVar25;
    uint32_t uVar26;
    uint32_t uVar27;
    uint32_t uVar28;
    int32_t var_6fh;
    int32_t var_77h;
    int32_t var_7fh;
    uint32_t uStack_98;
    uint32_t uStack_94;
    uint32_t uStack_90;
    uint32_t uStack_8c;
    uint32_t uStack_88;
    uchar auStack_84 [3];
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
    int64_t var_39h;
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
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    if (&uStack_98 != CONCAT44(in_register_00000014,arg2)) {
        section..text(&uStack_98,CONCAT44(in_register_00000014,arg2),0x40);
    }
    uVar3 = *(arg1 + 8);
    uVar13 = *(arg1 + 0xc);
    uVar1 = uStack_98 >> 8 & 0xff00ff00 | uStack_98 << 0x18 | (uStack_98 & 0xff00) << 8 | uStack_98 >> 0x18;
    uVar11 = uVar1 + 0x5a827999 +
             ((uVar13 ^ uVar3) & *(arg1 + 4) ^ uVar13) + (*arg1 << 5 | *arg1 >> 0x1b) + *(arg1 + 0x10);
    uVar2 = *(arg1 + 4) >> 2 | *(arg1 + 4) << 0x1e;
    uVar8 = uStack_94 >> 8 & 0xff00ff00 | uStack_94 << 0x18 | (uStack_94 & 0xff00) << 8 | uStack_94 >> 0x18;
    uVar9 = *arg1 >> 2 | *arg1 << 0x1e;
    uVar13 = ((uVar3 ^ uVar2) & *arg1 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar8 + uVar13 + 0x5a827999;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar17 = uStack_90 >> 8 & 0xff00ff00 | uStack_90 << 0x18 | (uStack_90 & 0xff00) << 8 | uStack_90 >> 0x18;
    uVar18 = uVar17 + (uVar13 * 0x20 | uVar13 >> 0x1b) + ((uVar2 ^ uVar9) & uVar11 ^ uVar2) + uVar3 + 0x5a827999;
    uVar11 = uStack_8c >> 8 & 0xff00ff00 | uStack_8c << 0x18 | (uStack_8c & 0xff00) << 8 | uStack_8c >> 0x18;
    uVar3 = uVar2 + 0x5a827999 + ((uVar12 ^ uVar9) & uVar13 ^ uVar9) + (uVar18 * 0x20 | uVar18 >> 0x1b) + uVar11;
    uVar14 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar4 = uStack_88 >> 8 & 0xff00ff00 | uStack_88 << 0x18 | (uStack_88 & 0xff00) << 8 | uStack_88 >> 0x18;
    uVar19 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar2 = uVar9 + 0x5a827999 + ((uVar12 ^ uVar14) & uVar18 ^ uVar12) + (uVar3 * 0x20 | uVar3 >> 0x1b) + uVar4;
    uVar9 = _auStack_84 >> 8 & 0xff00ff00 | _auStack_84 << 0x18 | (_auStack_84 & 0xff00) << 8 | _auStack_84 >> 0x18;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = uVar12 + ((uVar14 ^ uVar19) & uVar3 ^ uVar14) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar9 + 0x5a827999;
    uVar18 = stack0xffffffffffffff80 >> 8 & 0xff00ff00 | stack0xffffffffffffff80 << 0x18 |
             (stack0xffffffffffffff80 & 0xff00) << 8 | stack0xffffffffffffff80 >> 0x18;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar14 = uVar14 + ((uVar19 ^ uVar13) & uVar2 ^ uVar19) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar18 + 0x5a827999;
    uVar5 = stack0xffffffffffffff84 >> 8 & 0xff00ff00 | stack0xffffffffffffff84 << 0x18 |
            (stack0xffffffffffffff84 & 0xff00) << 8 | stack0xffffffffffffff84 >> 0x18;
    uVar2 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar19 = uVar19 + ((uVar13 ^ uVar10) & uVar12 ^ uVar13) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x5a827999 + uVar5;
    uVar6 = stack0xffffffffffffff88 >> 8 & 0xff00ff00 | stack0xffffffffffffff88 << 0x18 |
            (stack0xffffffffffffff88 & 0xff00) << 8 | stack0xffffffffffffff88 >> 0x18;
    uVar15 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar13 = uVar13 + ((uVar2 ^ uVar10) & uVar14 ^ uVar10) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar6;
    uVar7 = stack0xffffffffffffff8c >> 8 & 0xff00ff00 | stack0xffffffffffffff8c << 0x18 |
            (stack0xffffffffffffff8c & 0xff00) << 8 | stack0xffffffffffffff8c >> 0x18;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar10 = uVar10 + ((uVar2 ^ uVar15) & uVar19 ^ uVar2) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar7;
    uVar12 = stack0xffffffffffffff90 >> 8 & 0xff00ff00 | stack0xffffffffffffff90 << 0x18 |
             (stack0xffffffffffffff90 & 0xff00) << 8 | stack0xffffffffffffff90 >> 0x18;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar12 + (uVar10 * 0x20 | uVar10 >> 0x1b) + ((uVar15 ^ uVar20) & uVar13 ^ uVar15) + uVar2 + 0x5a827999;
    uVar22 = stack0xffffffffffffff94 >> 8 & 0xff00ff00 | stack0xffffffffffffff94 << 0x18 |
             (stack0xffffffffffffff94 & 0xff00) << 8 | stack0xffffffffffffff94 >> 0x18;
    uVar14 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar2 = ((uVar20 ^ uVar3) & uVar10 ^ uVar20) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar22 + uVar15 + 0x5a827999;
    uVar27 = stack0xffffffffffffff98 >> 8 & 0xff00ff00 | stack0xffffffffffffff98 << 0x18 |
             (stack0xffffffffffffff98 & 0xff00) << 8 | stack0xffffffffffffff98 >> 0x18;
    uVar10 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = ((uVar3 ^ uVar14) & uVar13 ^ uVar3) + (uVar2 * 0x20 | uVar2 >> 0x1b) + uVar27 + uVar20 + 0x5a827999;
    uVar25 = stack0xffffffffffffff9c >> 8 & 0xff00ff00 | stack0xffffffffffffff9c << 0x18 |
             (stack0xffffffffffffff9c & 0xff00) << 8 | stack0xffffffffffffff9c >> 0x18;
    uVar19 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = ((uVar10 ^ uVar14) & uVar2 ^ uVar14) + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar25 + uVar3 + 0x5a827999;
    uVar16 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar2 = stack0xffffffffffffffa0 >> 8 & 0xff00ff00 | stack0xffffffffffffffa0 << 0x18 |
            (stack0xffffffffffffffa0 & 0xff00) << 8 | stack0xffffffffffffffa0 >> 0x18;
    uVar3 = uVar2 + (uVar20 * 0x20 | uVar20 >> 0x1b) + ((uVar10 ^ uVar19) & uVar13 ^ uVar10) + uVar14 + 0x5a827999;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar15 = stack0xffffffffffffffa4 >> 8 & 0xff00ff00 | stack0xffffffffffffffa4 << 0x18 |
             (stack0xffffffffffffffa4 & 0xff00) << 8 | stack0xffffffffffffffa4 >> 0x18;
    uVar1 = uVar25 ^ uVar6 ^ uVar17 ^ uVar1;
    uVar14 = uVar1 << 1 | uVar1 < 0;
    uVar13 = uVar15 + (uVar3 * 0x20 | uVar3 >> 0x1b) + ((uVar19 ^ uVar16) & uVar20 ^ uVar19) + uVar10 + 0x5a827999;
    uVar19 = uVar19 + ((uVar16 ^ uVar21) & uVar3 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar14;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar8 = uVar2 ^ uVar7 ^ uVar11 ^ uVar8;
    uVar17 = uVar15 ^ uVar12 ^ uVar4 ^ uVar17;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar1 = uVar22 ^ uVar9 ^ uVar11 ^ uVar14;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar16 + ((uVar21 ^ uVar3) & uVar13 ^ uVar21) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x5a827999 + uVar8;
    uVar23 = uVar1 << 1 | uVar1 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + ((uVar11 ^ uVar3) & uVar19 ^ uVar3) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x5a827999 + uVar17;
    uVar13 = uVar27 ^ uVar18 ^ uVar4 ^ uVar8;
    uVar4 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar3 = uVar3 + ((uVar11 ^ uVar20) & uVar16 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x5a827999 + uVar23;
    uVar13 = uVar25 ^ uVar5 ^ uVar9 ^ uVar17;
    uVar9 = uVar13 << 1 | uVar13 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar20 ^ uVar19 ^ uVar21) + (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar20 = uVar20 + (uVar19 ^ uVar16 ^ uVar3) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar1 = uVar12 ^ uVar6 ^ uVar9 ^ uVar14;
    uVar18 = uVar2 ^ uVar6 ^ uVar18 ^ uVar23;
    uVar5 = uVar15 ^ uVar7 ^ uVar5 ^ uVar4;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar10 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar26 = uVar18 << 1 | uVar18 < 0;
    uVar28 = uVar5 << 1 | uVar5 < 0;
    uVar5 = uVar1 << 1 | uVar1 < 0;
    uVar19 = uVar19 + (uVar11 ^ uVar16 ^ uVar13) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar26;
    uVar3 = uVar22 ^ uVar7 ^ uVar26 ^ uVar8;
    uVar24 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar16 = uVar16 + (uVar10 ^ uVar20 ^ uVar13) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar28;
    uVar6 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar13 = uVar13 + (uVar10 ^ uVar11 ^ uVar19) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar7 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar10 = uVar10 + (uVar11 ^ uVar6 ^ uVar16) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x6ed9eba1 + uVar24;
    uVar3 = uVar27 ^ uVar12 ^ uVar28 ^ uVar17;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar11 = uVar11 + (uVar6 ^ uVar7 ^ uVar13) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar3 + 0x6ed9eba1;
    uVar1 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = uVar25 ^ uVar22 ^ uVar5 ^ uVar23;
    uVar18 = uVar13 << 1 | uVar13 < 0;
    uVar19 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar6 = uVar6 + (uVar10 ^ uVar7 ^ uVar1) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar18 + 0x6ed9eba1;
    uVar13 = uVar2 ^ uVar27 ^ uVar24 ^ uVar4;
    uVar12 = uVar13 << 1 | uVar13 < 0;
    uVar20 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar7 = uVar7 + (uVar19 ^ uVar11 ^ uVar1) + (uVar6 * 0x20 | uVar6 >> 0x1b) + uVar12 + 0x6ed9eba1;
    uVar13 = uVar15 ^ uVar25 ^ uVar3 ^ uVar9;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar21 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar1 = uVar1 + (uVar19 ^ uVar20 ^ uVar6) + (uVar7 * 0x20 | uVar7 >> 0x1b) + uVar13 + 0x6ed9eba1;
    uVar2 = uVar2 ^ uVar18 ^ uVar26 ^ uVar14;
    uVar10 = uVar2 << 1 | uVar2 < 0;
    uVar25 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar19 = uVar19 + (uVar20 ^ uVar21 ^ uVar7) + (uVar1 * 0x20 | uVar1 >> 0x1b) + uVar10 + 0x6ed9eba1;
    uVar2 = uVar15 ^ uVar12 ^ uVar28 ^ uVar8;
    uVar6 = uVar2 << 1 | uVar2 < 0;
    uVar20 = uVar20 + (uVar21 ^ uVar25 ^ uVar1) + (uVar19 * 0x20 | uVar19 >> 0x1b) + uVar6 + 0x6ed9eba1;
    uVar11 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar14 = uVar13 ^ uVar5 ^ uVar17 ^ uVar14;
    uVar7 = uVar14 << 1 | uVar14 < 0;
    uVar14 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = uVar21 + (uVar19 ^ uVar25 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar7 + 0x6ed9eba1;
    uVar8 = uVar10 ^ uVar24 ^ uVar23 ^ uVar8;
    uVar15 = uVar8 << 1 | uVar8 < 0;
    uVar16 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar25 = uVar25 + (uVar14 ^ uVar20 ^ uVar11) + (uVar21 * 0x20 | uVar21 >> 0x1b) + uVar15 + 0x6ed9eba1;
    uVar17 = uVar6 ^ uVar3 ^ uVar4 ^ uVar17;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar22 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar11 = uVar11 + (uVar14 ^ uVar16 ^ uVar21) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar17;
    uVar1 = uVar18 ^ uVar9 ^ uVar23 ^ uVar7;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar23 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar14 = uVar14 + (uVar16 ^ uVar22 ^ uVar25) + (uVar11 * 0x20 | uVar11 >> 0x1b) + uVar1 + 0x6ed9eba1;
    uVar2 = uVar12 ^ uVar26 ^ uVar4 ^ uVar15;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar16 = uVar16 + (uVar22 ^ uVar23 ^ uVar11) + (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar4 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar19 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar11 = uVar13 ^ uVar28 ^ uVar9 ^ uVar17;
    uVar11 = uVar11 << 1 | uVar11 < 0;
    uVar22 = uVar22 + (uVar14 ^ uVar23 ^ uVar4) + (uVar16 * 0x20 | uVar16 >> 0x1b) + uVar11 + 0x6ed9eba1;
    uVar9 = uVar10 ^ uVar5 ^ uVar26 ^ uVar1;
    uVar8 = uVar9 << 1 | uVar9 < 0;
    uVar20 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar23 = uVar23 + (uVar19 ^ uVar16 ^ uVar4) + (uVar22 * 0x20 | uVar22 >> 0x1b) + uVar8 + 0x6ed9eba1;
    uVar9 = uVar6 ^ uVar24 ^ uVar28 ^ uVar2;
    uVar14 = uVar9 << 1 | uVar9 < 0;
    uVar9 = (uVar19 ^ uVar20 ^ uVar22) + (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar14 + uVar4 + 0x6ed9eba1;
    uVar22 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar4 = uVar3 ^ uVar5 ^ uVar11 ^ uVar7;
    uVar26 = uVar4 << 1 | uVar4 < 0;
    uVar4 = uVar18 ^ uVar24 ^ uVar8 ^ uVar15;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar19 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar23) & uVar20 | uVar21 & uVar23) + uVar26 + uVar19;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar12 ^ uVar3 ^ uVar14 ^ uVar17;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar9) & uVar21 | uVar22 & uVar9) + uVar4 + uVar20;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar9 = uVar13 ^ uVar18 ^ uVar26 ^ uVar1;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar19 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar5) & uVar22 | uVar19 & uVar5) + uVar3 + uVar21;
    uVar21 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar5 | uVar20 & uVar16) + uVar9 + uVar22;
    uVar18 = uVar10 ^ uVar12 ^ uVar4 ^ uVar2;
    uVar18 = uVar18 << 1 | uVar18 < 0;
    uVar22 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar12 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar19) & uVar20 | uVar21 & uVar19) + uVar18 + uVar5;
    uVar13 = uVar6 ^ uVar13 ^ uVar3 ^ uVar11;
    uVar13 = uVar13 << 1 | uVar13 < 0;
    uVar25 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar19 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x8f1bbcdc +
             ((uVar22 | uVar16) & uVar21 | uVar22 & uVar16) + uVar13 + uVar20;
    uVar5 = uVar10 ^ uVar9 ^ uVar8 ^ uVar7;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar7 = uVar13 ^ uVar26 ^ uVar17 ^ uVar7;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar16 = (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x8f1bbcdc +
             ((uVar25 | uVar12) & uVar22 | uVar25 & uVar12) + uVar5 + uVar21;
    uVar12 = uVar6 ^ uVar18 ^ uVar14 ^ uVar15;
    uVar12 = uVar12 << 1 | uVar12 < 0;
    uVar20 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar21 = (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar10) & uVar25 | uVar19 & uVar10) + uVar12 + uVar22;
    uVar19 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar22 = (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x8f1bbcdc +
             ((uVar20 | uVar16) & uVar10 | uVar20 & uVar16) + uVar7 + uVar25;
    uVar15 = uVar5 ^ uVar4 ^ uVar1 ^ uVar15;
    uVar6 = uVar15 << 1 | uVar15 < 0;
    uVar10 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0x8f1bbcdc +
             ((uVar19 | uVar21) & uVar20 | uVar19 & uVar21) + uVar6 + uVar10;
    uVar17 = uVar12 ^ uVar3 ^ uVar2 ^ uVar17;
    uVar2 = uVar18 ^ uVar8 ^ uVar2 ^ uVar6;
    uVar17 = uVar17 << 1 | uVar17 < 0;
    uVar16 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar15 = uVar13 ^ uVar14 ^ uVar11 ^ uVar17;
    uVar25 = uVar2 << 1 | uVar2 < 0;
    uVar24 = uVar15 << 1 | uVar15 < 0;
    uVar21 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar2 = (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x8f1bbcdc +
            ((uVar16 | uVar22) & uVar19 | uVar16 & uVar22) + uVar17 + uVar20;
    uVar1 = uVar9 ^ uVar11 ^ uVar1 ^ uVar7;
    uVar11 = uVar1 << 1 | uVar1 < 0;
    uVar1 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar15 = (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x8f1bbcdc +
             ((uVar21 | uVar10) & uVar16 | uVar21 & uVar10) + uVar11 + uVar19;
    uVar10 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar20 = uVar16 + ((uVar2 | uVar1) & uVar21 | uVar2 & uVar1) + 0x8f1bbcdc + uVar25 +
             (uVar15 * 0x20 | uVar15 >> 0x1b);
    uVar19 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar2 = (uVar20 * 0x20 | uVar20 >> 0x1b) +
            ((uVar10 | uVar15) & uVar1 | uVar10 & uVar15) + uVar24 + uVar21 + 0x8f1bbcdc;
    uVar8 = uVar5 ^ uVar26 ^ uVar8 ^ uVar11;
    uVar16 = uVar8 << 1 | uVar8 < 0;
    uVar8 = uVar12 ^ uVar4 ^ uVar14 ^ uVar25;
    uVar22 = uVar8 << 1 | uVar8 < 0;
    uVar15 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar4 = uVar9 ^ uVar4 ^ uVar16 ^ uVar6;
    uVar21 = uVar4 << 1 | uVar4 < 0;
    uVar4 = (uVar2 * 0x20 | uVar2 >> 0x1b) +
            ((uVar19 | uVar20) & uVar10 | uVar19 & uVar20) + uVar16 + uVar1 + 0x8f1bbcdc;
    uVar8 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar15 | uVar2) & uVar19 | uVar15 & uVar2) + uVar22 + uVar10 + 0x8f1bbcdc
    ;
    uVar2 = uVar3 ^ uVar26 ^ uVar24 ^ uVar7;
    uVar14 = uVar2 << 1 | uVar2 < 0;
    uVar10 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar4 = uVar19 + ((uVar8 | uVar4) & uVar15 | uVar8 & uVar4) + 0x8f1bbcdc + uVar14 + (uVar1 * 0x20 | uVar1 >> 0x1b);
    uVar3 = uVar18 ^ uVar3 ^ uVar22 ^ uVar17;
    uVar1 = (uVar4 * 0x20 | uVar4 >> 0x1b) + ((uVar1 | uVar10) & uVar8 | uVar1 & uVar10) + uVar21 + uVar15 + 0x8f1bbcdc;
    uVar26 = uVar3 << 1 | uVar3 < 0;
    uVar15 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar8 = (uVar1 * 0x20 | uVar1 >> 0x1b) + ((uVar2 | uVar4) & uVar10 | uVar2 & uVar4) + uVar26 + uVar8 + 0x8f1bbcdc;
    uVar19 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar3 = uVar13 ^ uVar9 ^ uVar14 ^ uVar11;
    uVar20 = uVar3 << 1 | uVar3 < 0;
    uVar4 = uVar5 ^ uVar18 ^ uVar21 ^ uVar25;
    uVar3 = uVar5 ^ uVar20 ^ uVar16 ^ uVar7;
    uVar23 = uVar4 << 1 | uVar4 < 0;
    uVar18 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar1 = (uVar8 * 0x20 | uVar8 >> 0x1b) + ((uVar15 | uVar1) & uVar2 | uVar15 & uVar1) + uVar20 + uVar10 + 0x8f1bbcdc;
    uVar4 = uVar3 << 1 | uVar3 < 0;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + (uVar15 ^ uVar19 ^ uVar8) + uVar23 + uVar2 + 0xca62c1d6;
    uVar13 = uVar12 ^ uVar13 ^ uVar26 ^ uVar24;
    uVar8 = uVar13 << 1 | uVar13 < 0;
    uVar2 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar19 ^ uVar18 ^ uVar1) + uVar8 + uVar15;
    uVar5 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar18 ^ uVar2) + uVar4 + uVar19;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar13 = uVar12 ^ uVar23 ^ uVar22 ^ uVar6;
    uVar6 = uVar4 ^ uVar21 ^ uVar11 ^ uVar6;
    uVar1 = uVar13 << 1 | uVar13 < 0;
    uVar18 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar2) + uVar1 + uVar18;
    uVar7 = uVar8 ^ uVar14 ^ uVar17 ^ uVar7;
    uVar17 = uVar1 ^ uVar26 ^ uVar25 ^ uVar17;
    uVar9 = uVar9 >> 2 | uVar9 * 0x40000000;
    uStack_98 = uVar7 << 1 | uVar7 < 0;
    uStack_94 = uVar6 << 1 | uVar6 < 0;
    uVar12 = uVar5 >> 2 | uVar5 * 0x40000000;
    uStack_90 = uVar17 << 1 | uVar17 < 0;
    uVar13 = uVar20 ^ uVar24 ^ uVar11 ^ uStack_98;
    uStack_8c = uVar13 << 1 | uVar13 < 0;
    uVar13 = (uVar18 * 0x20 | uVar18 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar5) + uStack_98 + uVar2;
    uVar5 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar3 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar12 ^ uVar18) + uStack_94 + uVar3;
    uVar11 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar5 ^ uVar13) + uStack_90 + uVar9;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar5 ^ uVar11) + uStack_8c + uVar12;
    uVar13 = uVar23 ^ uVar16 ^ uVar25 ^ uStack_94;
    uVar18 = uVar8 ^ uVar22 ^ uVar24 ^ uStack_90;
    uVar3 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar2 = uVar4 ^ uVar14 ^ uVar16 ^ uStack_8c;
    _auStack_84 = uVar18 << 1 | uVar18 < 0;
    uStack_88 = uVar13 << 1 | uVar13 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    *0x38 = uVar2 << 1 | uVar2 < 0;
    uVar13 = uVar1 ^ uVar21 ^ uVar22 ^ uStack_88;
    *0xa8 = uVar13 << 1 | uVar13 < 0;
    uVar9 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar3 ^ uVar9 ^ uVar11) + uStack_88 + uVar5;
    uVar10 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar5 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar2 = uVar11 + (uVar3 ^ uVar18 ^ uVar12) + 0xca62c1d6 + _auStack_84 + (uVar9 * 0x20 | uVar9 >> 0x1b);
    uVar13 = uVar26 ^ uVar14 ^ _auStack_84 ^ uStack_98;
    uVar3 = (uVar2 * 0x20 | uVar2 >> 0x1b) + (uVar18 ^ uVar10 ^ uVar9) + *0x38 + uVar3 + 0xca62c1d6;
    *0x10 = uVar13 << 1 | uVar13 < 0;
    uVar11 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar10 ^ uVar5 ^ uVar2) + *0xa8 + uVar18 + 0xca62c1d6;
    uVar13 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar3 ^ uVar5 ^ uVar11) + *0x10 + uVar10 + 0xca62c1d6;
    uVar3 = uVar20 ^ uVar21 ^ *0x38 ^ uStack_94;
    *0x88 = uVar3 << 1 | uVar3 < 0;
    uVar18 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar3 = uVar23 ^ uVar26 ^ *0xa8 ^ uStack_90;
    *0x98 = uVar3 << 1 | uVar3 < 0;
    uVar2 = uVar4 ^ uVar23 ^ *0x88 ^ uStack_88;
    uVar3 = (uVar12 * 0x20 | uVar12 >> 0x1b) + (uVar13 ^ uVar9 ^ uVar11) + 0xca62c1d6 + *0x88 + uVar5;
    *0x90 = uVar2 << 1 | uVar2 < 0;
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar2 = uVar8 ^ uVar20 ^ *0x10 ^ uStack_8c;
    uVar9 = (uVar3 * 0x20 | uVar3 >> 0x1b) + (uVar13 ^ uVar18 ^ uVar12) + *0x98 + uVar11 + 0xca62c1d6;
    *0x80 = uVar2 << 1 | uVar2 < 0;
    uVar2 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar11 = (uVar9 * 0x20 | uVar9 >> 0x1b) + (uVar18 ^ uVar5 ^ uVar3) + *0x80 + uVar13 + 0xca62c1d6;
    uVar12 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar5 ^ uVar2 ^ uVar9) + *0x90 + uVar18 + 0xca62c1d6;
    uVar3 = uVar1 ^ uVar8 ^ *0x98 ^ _auStack_84;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar9 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar11 = (uVar13 * 0x20 | uVar13 >> 0x1b) + (uVar11 ^ uVar2 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar5;
    uVar3 = uVar4 ^ *0x80 ^ *0x38 ^ uStack_98;
    uVar1 = uVar1 ^ *0x90 ^ *0xa8 ^ uStack_94;
    *0x10 = uVar3 << 1 | uVar3 < 0;
    uVar3 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar13 = (uVar11 * 0x20 | uVar11 >> 0x1b) + (uVar9 ^ uVar13 ^ uVar12) + *0x10 + 0xca62c1d6 + uVar2;
    *0xa0 = uVar1 << 1 | uVar1 < 0;
    *(arg1 + 4) = *(arg1 + 4) + uVar13;
    *(arg1 + 0xc) = *(arg1 + 0xc) + uVar3;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar9;
    *(arg1 + 8) = *(arg1 + 8) + (uVar11 >> 2 | uVar11 * 0x40000000);
    *arg1 = (uVar9 ^ uVar3 ^ uVar11) + *arg1 + *0xa0 + (uVar13 * 0x20 | uVar13 >> 0x1b) + uVar12 + 0xca62c1d6;
    fcn.000102e0(&uStack_98,0x40,0);
    return;
}


/* fcn.0001416c @ 0x1416c */

void fcn.0001416c(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    
    iVar1 = 0x1d4c;
    do {
        iVar2 = 5;
        do {
            fcn.00012bd4(0x6b);
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar1 = iVar1 + -1;
    } while ((*(arg1 + 0x19) == 0) && (iVar1 != 0));
    return;
}


