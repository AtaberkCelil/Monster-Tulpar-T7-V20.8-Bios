// decompiled by r2ghidra: 1699_CmosDxe.pe32
// functions: 31

/* entry0 @ 0x10350 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001036c(arg1,arg2);
    fcn.00010434(arg1,arg2);
    return;
}


/* fcn.0001036c @ 0x1036c */

void fcn.0001036c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x12488 = *(arg1 + 0x60);
    *0x12480 = arg1;
    fcn.00011f68();
    puVar4 = fcn.00011f68();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103c0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(noname_0_00,0x1808);
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
                return;
            }
            if ((*0x12410 == *(puVar4 + 4)) && (*0x12418 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103c0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010434 @ 0x10434 */

uint64_t fcn.00010434(int64_t noname_0,int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    
    if (*0x124a0 == 0) {
        *0x12498 = *(arg1 + 0x60);
        *0x124a8 = *(arg1 + 0x58);
        *0x124a0 = arg1;
    }
    iVar2 = fcn.00010d34(noname_0);
    if ((iVar2 != 0) && (cVar1 = (**(iVar2 + 0x132))(iVar2,8), cVar1 != '\0')) {
        cVar1 = (**(iVar2 + 0x132))(iVar2,2);
        if (cVar1 != '\0') {
            return 0;
        }
        cVar1 = (**(iVar2 + 0x132))(iVar2,0x80000);
        if ((cVar1 != '\0') && (cVar1 = (**(iVar2 + 0x132))(iVar2,0x2000), cVar1 != '\0')) {
            (**(iVar2 + 0x116))(iVar2);
            cVar1 = (**(iVar2 + 0x132))(iVar2,0x2000);
            if (cVar1 != '\0') {
                (**(iVar2 + 0xf4))(iVar2,8);
            }
        }
        (**(*0x12498 + 0x170))(0x200,8,0x10710,0,0x12420,0x124b0);
        (**(iVar2 + 0x40))(iVar2);
        cVar1 = (**(iVar2 + 0x132))(iVar2,1);
        return ~-(cVar1 != '\0') & 0x8000000000000003;
    }
    return 0x8000000000000003;
}


/* fcn.00011f68 @ 0x11f68 */

int64_t fcn.00011f68(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12490 == 0) {
        *0x12490 = 0;
        if (*(*0x12480 + 0x68) != 0) {
            piVar2 = *(*0x12480 + 0x70);
            do {
                if ((*0x12370 == *piVar2) && (*0x12378 == piVar2[1])) {
                    *0x12490 = (*(*0x12480 + 0x70))[uVar1 * 3 + 2];
                    return *0x12490;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12480 + 0x68));
        }
    }
    return *0x12490;
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


/* fcn.00010d34 @ 0x10d34 */

ulong * fcn.00010d34(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong *puVar6;
    ulong *puStackX_8;
    
    puStackX_8 = arg1;
    iVar2 = (**(*0x12498 + 0x140))(0x12380,0,&puStackX_8);
    if (iVar2 == 0) {
        (**(puStackX_8 + 0x122))(puStackX_8,2);
    }
    else {
        iVar2 = (**(*0x12498 + 0x40))(4,0x194);
        if (iVar2 < 0) {
            return NULL;
        }
        puVar3 = puStackX_8;
        fcn.0001225e(puStackX_8,0x194,0);
        fcn.00010c20(puVar3,puStackX_8);
        fcn.0001056c(puStackX_8);
        puVar3 = *(puStackX_8 + 0x162);
        puVar5 = *(puStackX_8 + 0x16a);
        puVar4 = *(puStackX_8 + 0x172);
        for (puVar6 = *(puStackX_8 + 0x17a); *puVar6 != NULL; puVar6 = puVar6 + 1) {
            cVar1 = (**puVar6)(*puStackX_8);
            if (cVar1 == '\0') {
                (**(puStackX_8 + 0x12a))(puStackX_8,0x80000);
            }
            else {
                (**(puStackX_8 + 0x122))();
            }
        }
        for (; *puVar3 != NULL; puVar3 = puVar3 + 1) {
            cVar1 = (**puVar3)(*puStackX_8);
            if (cVar1 != '\0') {
                (**(puStackX_8 + 0x122))(puStackX_8,0x10);
            }
        }
        for (; *puVar5 != NULL; puVar5 = puVar5 + 1) {
            cVar1 = (**puVar5)(*puStackX_8);
            if (cVar1 != '\0') {
                (**(puStackX_8 + 0x122))(puStackX_8,0x10000);
            }
        }
        for (; *puVar4 != NULL; puVar4 = puVar4 + 1) {
            cVar1 = (**puVar4)(*puStackX_8);
            if (cVar1 != '\0') {
                (**(puStackX_8 + 0x122))(puStackX_8,0x20000);
            }
        }
        (**(puStackX_8 + 0x122))(puStackX_8,0x40000);
        (**(puStackX_8 + 0xfe))(puStackX_8,puStackX_8 + 0xfc);
        fcn.00011734(puStackX_8);
    }
    return puStackX_8;
}


/* fcn.00012024 @ 0x12024 */

ulong fcn.00012024(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*0x124a0 + 0x68);
    iVar3 = *(*0x124a0 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.0001206c(iVar3,0x12370);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.0001206c @ 0x1206c */

int64_t fcn.0001206c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    arg1 = arg1 & 7;
    piVar2 = piVar1;
    if ((arg1 != 0) && (arg1 == (arg2 & 7))) {
        iVar3 = 8 - arg1;
        for (; (iVar3 != 0 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
            arg2 = arg2 + 1;
            iVar3 = iVar3 + -1;
        }
    }
    for (; (piVar2 <= piVar1 + 1 && (*piVar2 == *arg2)); piVar2 = piVar2 + 1) {
        arg2 = arg2 + 8;
    }
    while( true ) {
        if (piVar1 + 2 <= piVar2) {
            return 0;
        }
        if (*piVar2 != *arg2) break;
        piVar2 = piVar2 + 1;
        arg2 = arg2 + 1;
    }
    return *piVar2 - *arg2;
}


/* fcn.000117e0 @ 0x117e0 */

ulong fcn.000117e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t var_bp_18h;
    
    if (arg2 < '\0') {
        fcn.00010f64(arg1,1,0xe,&var_bp_18h);
        if (arg3 == 1) {
            var_bp_18h._0_1_ = var_bp_18h | 0x40;
        }
        else if (*arg1 == 0) {
            var_bp_18h._0_1_ = var_bp_18h & 0xbf;
        }
        fcn.00010f64(arg1,0,0xe,&var_bp_18h);
    }
    if ((arg2 >> 0xc & 1) != 0) {
        fcn.00010f64(arg1,1,0xe,&var_bp_18h);
        if (arg3 == 1) {
            var_bp_18h._0_1_ = var_bp_18h | 0x80;
        }
        else if (*arg1 == 0) {
            var_bp_18h._0_1_ = var_bp_18h & 0x7f;
        }
        fcn.00010f64(arg1,0,0xe,&var_bp_18h);
    }
    return 0;
}


/* fcn.00010f64 @ 0x10f64 */

ulong fcn.00010f64(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    uchar uVar3;
    ulong uVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    
    uVar6 = 1;
    if (1 < *(arg1 + 0x192)) {
        iVar2 = *(arg1 + 0x18a);
        do {
            if ((*(iVar2 + 4 + uVar6 * 0x10) <= arg3) && (arg3 <= *(iVar2 + 6 + uVar6 * 0x10))) {
                if (*(iVar2 + 8 + uVar6 * 0x10) != 0) {
                    uVar4 = (**(iVar2 + 8 + uVar6 * 0x10))(*arg1);
                    return uVar4;
                }
                if ((*(iVar2 + uVar6 * 0x10) != 0) && (*(iVar2 + 2 + uVar6 * 0x10) != 0)) {
                    out(*(iVar2 + uVar6 * 0x10),arg3);
                    uVar1 = *(*(arg1 + 0x18a) + 2 + uVar6 * 0x10);
                    if (arg2 == 1) {
                        uVar3 = in(uVar1);
                        *arg4 = uVar3;
                    }
                    else {
                        out(uVar1,*arg4);
                    }
                    return 0;
                }
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < *(arg1 + 0x192));
    }
    return 0x800000000000000e;
}


/* fcn.000122b0 @ 0x122b0 */

int64_t fcn.000122b0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011044 @ 0x11044 */

ulong fcn.00011044(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    uint8_t *arg4_00;
    uint8_t auStackX_10 [8];
    uint8_t *in_stack_00000028;
    uint8_t auStack_28 [4];
    uint16_t uStack_24;
    
    uStack_24 = 0;
    arg4_00 = auStackX_10;
    iVar2 = arg3;
    fcn.00010f64(arg1,1,arg3,arg4_00);
    if (arg2 == 1) {
        *in_stack_00000028 = auStackX_10[0];
    }
    else {
        auStack_28[0] = ~arg4 & auStackX_10[0] | *in_stack_00000028;
        cVar1 = (**(arg1 + 0x132))(arg1);
        if (cVar1 == '\0') {
            fcn.00011914(arg1,arg3 & 0xffff,CONCAT71(iVar2 >> 8,auStackX_10[0]),
                         CONCAT71(arg4_00 >> 8,auStack_28[0]));
        }
        fcn.00010f64(arg1,0,arg3,auStack_28);
        cVar1 = (**(arg1 + 0x132))(arg1,0x400);
        if (cVar1 == '\0') {
            cVar1 = (**(arg1 + 0x132))(arg1,0x100);
            if (cVar1 != '\0') {
                (**(arg1 + 0x122))(arg1,0x400);
                fcn.000116cc(arg1,uStack_24);
                (**(arg1 + 0x12a))(arg1,0x400);
            }
        }
    }
    return 0;
}


/* fcn.000108e4 @ 0x108e4 */

//WARNING: Removing unreachable block (ram,0x0001089d)

void fcn.000108e4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    
    uVar2 = arg2;
    *(arg1 + 0x11e) = *(arg1 + 0x11e) | uVar2;
    cVar1 = (**(arg1 + 0x132))(arg1,0x80000);
    if (cVar1 != '\0') {
        if ((uVar2 >> 0xc & 1) != 0) {
            (**(arg1 + 0x10))(arg1,0x1230,1);
            *(arg1 + 0x11e) = *(arg1 + 0x11e) | 0x80;
            (**(arg1 + 0x10))(arg1,0x1231,1);
        }
        if ((arg2 & 0xffffffffU) < '\0') {
            (**(arg1 + 0x10))(arg1,0x1231,1);
        }
        if ((uVar2 >> 0xe & 1) != 0) {
            (**(arg1 + 0x10))(arg1,0x1232,1);
        }
        if ((arg2 & 0x10U) != 0) {
            (**(arg1 + 0x10))(arg1,0x1233,1);
        }
    }
    if ((arg2 & 0x1080U) != 0) {
        fcn.000117e0(arg1,arg2 & 0xffffffffU,1);
    }
    if (*(arg1 + 0x142) != 0) {
        *(*(arg1 + 0x142) + 0x18) = *(arg1 + 0x11e);
    }
    return;
}


/* fcn.0001225e @ 0x1225e */

int64_t fcn.0001225e(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00010c20 @ 0x10c20 */

ulong fcn.00010c20(ulong noname_0,int64_t arg1)

{
    *arg1 = 0;
    *(arg1 + 8) = 0x11434;
    *(arg1 + 0x10) = 0x11a44;
    *(arg1 + 0x18) = 0x10ee8;
    *(arg1 + 0x20) = 0x114fc;
    *(arg1 + 0x28) = 0x11ec4;
    *(arg1 + 0x30) = 0x11da8;
    *(arg1 + 0x48) = 0x107b4;
    *(arg1 + 0x40) = 0x10bb0;
    *(arg1 + 0xfe) = fcn.0001198c;
    *(arg1 + 0x106) = fcn.00011690;
    *(arg1 + 0x10e) = fcn.000116cc;
    *(arg1 + 0xf4) = 0x109a8;
    *(arg1 + 0x132) = 0x107e8;
    *(arg1 + 0x13a) = 0x107f8;
    *(arg1 + 0x122) = fcn.000108e4;
    *(arg1 + 0x12a) = 0x108f0;
    *(arg1 + 0x116) = 0x11b14;
    *(arg1 + 0x14a) = 0x10a9c;
    *(arg1 + 0x152) = 0x10b28;
    fcn.000108e4(arg1,8);
    return 0;
}


/* fcn.0001056c @ 0x1056c */

ulong fcn.0001056c(int64_t arg1)

{
    int16_t iVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    uint uVar5;
    int16_t *piVar6;
    int64_t iVar7;
    int16_t *piVar8;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    uVar5 = *0x1238c;
    uVar4 = *0x12388;
    uVar3 = *0x12384;
    uVar2 = *0x12380;
    var_bp_10h = -0x2ac987fe;
    *(arg1 + 0x162) = 0x123c0;
    var_ch = 0x4c0fb873;
    *(arg1 + 0x16a) = 0x123e0;
    *(arg1 + 0x172) = 0x12400;
    *(arg1 + 0x17a) = 0x123f0;
    *(arg1 + 0x182) = 0x123d0;
    *(arg1 + 0x18a) = 0x12390;
    *(arg1 + 0x192) = 3;
    *(arg1 + 0x58) = uVar2;
    *(arg1 + 0x5c) = uVar3;
    *(arg1 + 0x60) = uVar4;
    *(arg1 + 100) = uVar5;
    var_bp_8h = -0x48cebb4b;
    var_4h = 0x55c5f5cc;
    piVar6 = fcn.00012024();
    if (piVar6 != NULL) {
        do {
            iVar1 = *piVar6;
            while( true ) {
                if (iVar1 == -1) {
                    return 0;
                }
                piVar6 = piVar6 + piVar6[1];
                if (*piVar6 == 4) break;
                iVar1 = *piVar6;
            }
            piVar8 = piVar6;
            iVar7 = fcn.0001206c(piVar6 + 8,&var_bp_10h);
        } while (iVar7 != 0);
        *(arg1 + 0x142) = 0;
        *(arg1 + 200) = piVar8[0xf];
        *(arg1 + 0xca) = piVar8[0x10];
        *(arg1 + 0xcc) = piVar8 + 0x12;
        *(arg1 + 0xd4) = piVar8[0x11];
        *(arg1 + 0xd6) = piVar8 + 0x24;
        *(arg1 + 0xde) = piVar8[0x23];
        *(arg1 + 0xe0) = piVar8 + 0xd9;
        *(arg1 + 0xe8) = piVar8[0xd8];
        *(arg1 + 0xea) = piVar8 + 0x189;
        *(arg1 + 0xf2) = piVar8[0x188];
        *(arg1 + 0xfc) = piVar8[0xe];
        *(arg1 + 0x11e) = *(piVar8 + 0xc);
    }
    return 0;
}


/* fcn.00011734 @ 0x11734 */

ulong fcn.00011734(int64_t arg1)

{
    char cVar1;
    code *pcVar2;
    uint8_t uVar3;
    code *pcVar4;
    int64_t *piVar5;
    ulong auStack_18 [2];
    
    auStack_18[1] = 0;
    pcVar4 = 0x121f0;
    piVar5 = *(arg1 + 0x182);
    uVar3 = 0;
    auStack_18[0] = 0x121f0;
    pcVar2 = *piVar5;
    if (pcVar2 != NULL) {
        do {
            cVar1 = (*pcVar2)(*arg1);
            piVar5 = piVar5 + 1;
            pcVar2 = *piVar5;
        } while (pcVar2 != NULL);
        if (cVar1 != '\0') {
            (**(arg1 + 0x12a))(arg1,0x1000);
            return 0;
        }
    }
    (**(arg1 + 0x122))(arg1,0x1000);
    (**(arg1 + 0x122))(arg1,0x80);
    while (pcVar4 != NULL) {
        (*pcVar4)();
        uVar3 = uVar3 + 1;
        pcVar4 = auStack_18[uVar3];
    }
    return 0;
}


/* fcn.00011914 @ 0x11914 */

ulong fcn.00011914(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int16_t *in_stack_00000028;
    
    cVar1 = fcn.0001189c(arg1,noname_1);
    if (cVar1 == '\0') {
        (**(arg1 + 0x12a))(arg1,0x100);
    }
    else {
        fcn.00011690(arg1,in_stack_00000028);
        *in_stack_00000028 = *in_stack_00000028 + ((arg3 & 0xff) - (arg2 & 0xff));
        (**(arg1 + 0x122))(arg1,0x100);
    }
    return 0;
}


/* fcn.000116cc @ 0x116cc */

ulong fcn.000116cc(int64_t arg1,int64_t arg2)

{
    if (*(arg1 + 0x142) != 0) {
        *(*(arg1 + 0x142) + 0x1c) = arg2;
    }
    (**(arg1 + 0x122))(arg1,0x400);
    (**(arg1 + 0x10))(arg1,0x8208,arg2);
    (**(arg1 + 0x10))(arg1,0x8200,arg2 >> 8);
    (**(arg1 + 0x12a))(arg1,0x400);
    return 0;
}


/* fcn.00011148 @ 0x11148 */

ulong fcn.00011148(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    ulong uVar3;
    uint8_t uVar4;
    unkbyte7 Var5;
    uint64_t uVar6;
    int32_t var_40h;
    
    Var5 = arg4 >> 8;
    uVar3 = 0;
    if (arg3 - 0x40U < 0xb3) {
        uVar6 = arg3 - 0x3f;
        uVar1 = *(*(arg1 + 0xd6) + uVar6 * 2);
        if (arg2 == 1) {
            *_var_40h = uVar1;
        }
        else {
            uVar4 = ~arg4 & uVar1 | *_var_40h;
            cVar2 = (**(arg1 + 0x132))(arg1,0x400);
            if (cVar2 == '\0') {
                fcn.00011914(arg1,arg3 & 0xffff,CONCAT71(uVar3 >> 8,uVar1),CONCAT71(Var5,uVar4));
            }
            *(*(arg1 + 0xd6) + uVar6 * 2) = uVar4;
            cVar2 = (**(arg1 + 0x132))(arg1,0x400);
            if (cVar2 == '\0') {
                cVar2 = (**(arg1 + 0x132))(arg1,0x100);
                if (cVar2 != '\0') {
                    (**(arg1 + 0x122))(arg1,0x400);
                    fcn.000116cc(arg1,0);
                    (**(arg1 + 0x12a))(arg1,0x400);
                }
            }
        }
        uVar3 = 0;
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00011260 @ 0x11260 */

void fcn.00011260(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    char cVar2;
    uint16_t uVar3;
    
    uVar1 = arg4;
    cVar2 = (**(arg1 + 0x132))(arg1,0x2000);
    if (cVar2 == '\0') {
code_r0x00011315:
        fcn.00011044(arg1,arg2 & 0xffffffff,arg3 & 0xffff,CONCAT71(arg4 >> 8,uVar1));
    }
    else {
        cVar2 = (**(arg1 + 0x132))(arg1,0x80000);
        if (cVar2 != '\0') {
            cVar2 = (**(arg1 + 0x132))(arg1,0x8000);
            if (cVar2 != '\0') {
                arg4 = 0;
                uVar3 = 1;
                if (1 < *(arg1 + 0xe8)) {
                    do {
                        if (arg3 <= *(*(arg1 + 0xe0) + uVar3 * 2)) break;
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < *(arg1 + 0xe8));
                }
                if (arg3 == *(*(arg1 + 0xe0) + uVar3 * 2)) goto code_r0x00011315;
            }
        }
        fcn.00011148(arg1,arg2,arg3 & 0xffff,CONCAT71(arg4 >> 8,uVar1));
    }
    return;
}


/* fcn.00011348 @ 0x11348 */

ulong fcn.00011348(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    int64_t iVar2;
    char cVar3;
    uint64_t uVar4;
    
    iVar2 = *(arg1 + 0xcc);
    cVar3 = '\0';
    uVar4 = arg3 & 0xffff;
    if (arg2 == 0) {
        uVar1 = *(iVar2 + uVar4 * 2);
        if ((*arg4 & ~(0xff >> (8 - (uVar1 >> 0xc) & 0x1f))) != 0) {
            return 0x8000000000000002;
        }
        *arg4 = *arg4 << (uVar1 & 7);
        uVar1 = *(iVar2 + uVar4 * 2);
        cVar3 = (0xff >> (8 - (uVar1 >> 0xc) & 0x1f)) << (uVar1 & 7);
    }
    fcn.00011260(arg1,arg2 & 0xffffffff,*(iVar2 + uVar4 * 2) >> 3 & 0x1ff,CONCAT71(arg4 >> 8,cVar3));
    if (arg2 == 1) {
        *arg4 = *arg4 >> (*(iVar2 + uVar4 * 2) & 7);
        *arg4 = *arg4 & 0xff >> (8 - (*(iVar2 + uVar4 * 2) >> 0xc) & 0x1f);
    }
    return 0;
}


/* fcn.0001189c @ 0x1189c */

ulong fcn.0001189c(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 1;
    if (1 < *(iVar1 + 0xe8)) {
        do {
            if (arg2 == *(*(iVar1 + 0xe0) + uVar3 * 2)) {
                return 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar1 + 0xe8));
    }
    uVar2 = 1;
    if (1 < *(iVar1 + 0xf2)) {
        do {
            if (arg2 == *(*(iVar1 + 0xea) + uVar2 * 2)) {
                return 0;
            }
            uVar3 = uVar2 + 1;
            uVar2 = uVar3;
        } while (uVar3 < *(iVar1 + 0xf2));
    }
    return 1;
}


/* fcn.00011690 @ 0x11690 */

ulong fcn.00011690(int64_t arg1,int64_t arg2)

{
    (**(arg1 + 8))(arg1,0x8200,arg2);
    *arg2 = *arg2 << 8;
    (**(arg1 + 8))(arg1,0x8208,arg2);
    return 0;
}


/* fcn.0001198c @ 0x1198c */

//WARNING: Variable defined which should be unmapped: var_1h

ulong fcn.0001198c(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t uVar2;
    int16_t aiStackX_10 [4];
    int32_t var_1h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    *arg2 = 0;
    uVar2 = *(arg1_00 + 200);
    if (uVar2 <= *(arg1_00 + 0xca)) {
        do {
            cVar1 = fcn.0001189c(arg1,uVar2);
            if (cVar1 != '\0') {
                fcn.00011260(arg1_00,1,uVar2,0);
                *arg2 = *arg2;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 <= *(arg1_00 + 0xca));
    }
    fcn.00011690(arg1_00,aiStackX_10);
    if (*arg2 == aiStackX_10[0]) {
        (**(arg1_00 + 0x12a))(arg1_00,0x80);
    }
    else {
        (**(arg1_00 + 0x122))();
    }
    return 0;
}


/* fcn.00011d68 @ 0x11d68 */

void fcn.00011d68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t auStackX_18 [16];
    
    cVar1 = (arg3 & 0xffU) / 10;
    auStackX_18[0] = cVar1 << 4 | arg3 + cVar1 * -10;
    fcn.00010f64(arg1,0,arg2 & 0xff,auStackX_18);
    return;
}


/* fcn.00011d30 @ 0x11d30 */

char fcn.00011d30(int64_t arg1,int64_t arg2)

{
    uint8_t auStackX_10 [24];
    
    auStackX_10[0] = 0;
    fcn.00010f64(arg1,1,arg2 & 0xff,auStackX_10);
    return (auStackX_10[0] >> 4) * '\n' + (auStackX_10[0] & 0xf);
}


