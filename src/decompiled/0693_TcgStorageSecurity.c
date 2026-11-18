// decompiled by r2ghidra: 0693_TcgStorageSecurity.pe32
// functions: 88

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010338(arg1,in_RDX);
    fcn.00010400(arg1,in_RDX);
    return;
}


/* fcn.00010338 @ 0x10338 */

void fcn.00010338(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x195f8 = *(arg1 + 0x60);
    *0x195f0 = arg1;
    fcn.000191dc();
    puVar4 = fcn.000191dc();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001038c:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
                return;
            }
            if ((*0x19458 == *(puVar4 + 4)) && (*0x19460 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001038c;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010400 @ 0x10400 */

void fcn.00010400(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong *puStackX_10;
    int64_t iStackX_18;
    int64_t var_bp_28h;
    int64_t var_30h;
    ulong uStack_28;
    int64_t var_18h;
    
    var_bp_28h = 0;
    uStack_28 = 0;
    puStackX_10 = NULL;
    iStackX_8 = arg1;
    iVar1 = (**(*0x195f8 + 0x40))(4,0x10,&puStackX_10);
    if (-1 < iVar1) {
        *puStackX_10 = 0x10678;
        puStackX_10[1] = fcn.000109a8;
        iVar1 = (**(*0x195f8 + 0x80))(&var_bp_28h,0x19350,0,puStackX_10);
        if (-1 < iVar1) {
            *0x1ba20 = 0x24e8;
            iVar1 = (**(*0x195f8 + 0x40))(6,0x24e8,&iStackX_8);
            *0x195e8 = iStackX_8;
            if (iVar1 < 0) {
                *0x195e8 = 0;
            }
            iStackX_8 = *0x195e8;
            if (*0x195e8 != 0) {
                iVar1 = (**(*0x195f8 + 0x40))(0,0x200,&iStackX_18);
                *0x195e0 = iStackX_18;
                if (iVar1 < 0) {
                    *0x195e0 = 0;
                }
                iStackX_18 = *0x195e0;
            }
            (**(*0x195f8 + 0x170))(0x200,8,0x183cc,0,0x19330,&uStack_28);
        }
    }
    return;
}


/* fcn.000191dc @ 0x191dc */

int64_t fcn.000191dc(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x19600 == 0) {
        *0x19600 = 0;
        if (*(*0x195f0 + 0x68) != 0) {
            piVar2 = *(*0x195f0 + 0x70);
            do {
                if ((*0x19300 == *piVar2) && (*0x19308 == piVar2[1])) {
                    *0x19600 = (*(*0x195f0 + 0x70))[uVar1 * 3 + 2];
                    return *0x19600;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x195f0 + 0x68));
        }
    }
    return *0x19600;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00010524 @ 0x10524 */

ulong fcn.00010524(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    ulong *puVar7;
    int iVar8;
    ulong auStackX_18 [2];
    uchar auStack_218 [6];
    uchar uStack_212;
    uchar uStack_211;
    char acStack_210 [504];
    
    uVar5 = 0;
    auStackX_18[0] = 0x200;
    uVar6 = 0;
    if (arg2 == 1) {
        iVar8 = 0x10;
        puVar7 = *(arg1 + 0x388);
        uVar6 = **(*(arg1 + 0x360) + 8);
    }
    else if (arg2 == 2) {
        iVar8 = 1;
        if ((arg1 == 0) || (piVar1 = *(arg1 + 400), piVar1 == arg1 + 400)) {
            uVar4 = uVar5;
        }
        else {
            uVar4 = piVar1 + -0x221;
        }
        puVar7 = -(uVar4 != 0) & uVar4 + 0x10a0;
    }
    else {
        if (arg2 != 3) {
            return 0x8000000000000003;
        }
        puVar7 = *(arg1 + 0x10);
        iVar8 = (-(*(arg1 + 0x4c) != '\0') & 0xf) + 1;
        uVar6 = uVar5;
    }
    if (puVar7 != NULL) {
        (**(*0x195f8 + 0x168))(auStack_218,0x200,0);
        iVar2 = (**puVar7)(puVar7,uVar6,iVar8 * 10000000,0,0,0x200,auStack_218,auStackX_18);
        if (((-1 < iVar2) && (uVar3 = CONCAT11(uStack_212,uStack_211), uVar3 != 0)) && (uVar3 != 0)) {
            do {
                if (acStack_210[uVar5] == '\x01') {
                    return 0;
                }
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar3);
        }
        return 0x8000000000000003;
    }
    return 0x800000000000000e;
}


/* fcn.000111a4 @ 0x111a4 */

int64_t fcn.000111a4(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong noname_1;
    int iVar4;
    ulong noname_2;
    int64_t var_30h;
    
    iVar3 = 0;
    iVar2 = (**(*0x195f8 + 0x40))(4,0xae);
    if (iVar2 < 0) {
        return iVar2;
    }
    fcn.00010260(0,0xae);
    iVar4 = arg2;
    if (iVar4 == 1) {
        _pe_dos_header = *(arg1 + 0x388);
        *0x97 = **(*(arg1 + 0x360) + 8);
        *0xa7 = *(arg1 + 8);
        *0xa8 = *(arg1 + 9);
        *0x9f = *arg1;
    }
    else if (iVar4 == 2) {
        if (arg1 != 0) {
            piVar1 = *(arg1 + 400);
            if (piVar1 != arg1 + 400) {
                iVar3 = piVar1 + -0x221;
            }
            if (iVar3 != 0) {
                _pe_dos_header = iVar3 + 0x10a0;
                *0x97 = 0;
                *0x9f = *(arg1 + 0x18);
            }
        }
    }
    else {
        if (iVar4 != 3) {
            *0x9b = iVar4;
            return -0x7ffffffffffffffd;
        }
        _pe_dos_header = *(arg1 + 0x10);
        *0x97 = 0;
        *0x9f = *(arg1 + 0x68);
    }
    *0x9b = iVar4;
    if (((_pe_dos_header == 0) || (iVar2 = fcn.000113e0(0), *0x3e == 0)) || (iVar2 < 0)) {
        return -0x7ffffffffffffffd;
    }
    if ((*0x195c0 == 0) && (iVar2 = (**(*0x195f8 + 0x40))(4,0x8d), iVar2 < 0)) {
        return iVar2;
    }
    if (*0x195c8 == 0) {
        *0x1ba38 = 0x200;
        iVar2 = (**(*0x195f8 + 0x40))(4);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    noname_2 = 0;
    noname_1 = 0x8d;
    (**(*0x195f8 + 0x168))(*0x195c0);
    iVar2 = fcn.000140ac(0);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = fcn.00013e44(0,noname_1,noname_2,0x7f);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (iVar4 == 1) {
        *(arg1 + 0x390) = 0;
    }
    else if (iVar4 == 2) {
        *(arg1 + 0x148) = 0;
    }
    else {
        *(arg1 + 0x58) = 0;
    }
    return iVar2;
}


/* fcn.000109a8 @ 0x109a8 */

int64_t fcn.000109a8(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg2 == 1) {
        iVar2 = *(arg1 + 0x370);
        iVar3 = *arg1;
        iVar4 = *(arg1 + 0x390);
    }
    else if (arg2 == 2) {
        if (arg1 != 0) {
            piVar1 = *(arg1 + 400);
            if (piVar1 == arg1 + 400) {
                iVar2 = 0;
            }
            else {
                iVar2 = piVar1 + -0x221;
            }
            if (iVar2 != 0) {
                iVar3 = *(iVar2 + 8);
            }
        }
        iVar2 = *(arg1 + 0x120);
        iVar4 = *(arg1 + 0x148);
    }
    else {
        if (arg2 != 3) {
            return -0x7ffffffffffffffd;
        }
        iVar2 = *(arg1 + 0x28);
        iVar3 = *(arg1 + 0x68);
        iVar4 = *(arg1 + 0x58);
    }
    if (iVar3 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (iVar2 != 0) {
        iVar3 = (**(*0x195f8 + 0x150))(iVar3,0x19310,iVar2,0);
        if (iVar3 == 0) {
            (**(*0x195f8 + 0x48))(iVar2);
        }
        if (iVar4 != 0) {
            (**(*0x195f8 + 0x48))(*(iVar4 + 0x83));
            (**(*0x195f8 + 0x48))(iVar4);
        }
        return iVar3;
    }
    return 0;
}


/* fcn.00010aa8 @ 0x10aa8 */

int64_t fcn.00010aa8(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    int64_t arg1_00;
    ushort uVar1;
    int64_t iVar2;
    
    arg1_00 = *(arg1 + 0x38);
    arg2_00 = *(arg1 + 0x40);
    if (arg2_00 == 1) {
        iVar2 = *(arg1_00 + 0x390);
    }
    else if (arg2_00 == 2) {
        iVar2 = *(arg1_00 + 0x148);
    }
    else {
        if (arg2_00 != 3) {
            return -0x7ffffffffffffffd;
        }
        iVar2 = *(arg1_00 + 0x58);
    }
    if (iVar2 == 0) {
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        iVar2 = fcn.000113e0(iVar2);
        if (-1 < iVar2) {
            uVar1 = fcn.00011820(arg1_00,arg2_00);
            *arg2 = uVar1;
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00011ab4 @ 0x11ab4 */

ulong fcn.00011ab4(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong uVar2;
    int64_t iVar3;
    
    if (arg2 == 1) {
        iVar3 = *(arg1 + 0x390);
    }
    else if (arg2 == 2) {
        iVar3 = *(arg1 + 0x148);
    }
    else {
        if (arg2 != 3) {
            return 0x8000000000000003;
        }
        iVar3 = *(arg1 + 0x58);
    }
    uVar1 = 0;
    if (iVar3 == 0) {
        uVar1 = 0x800000000000000e;
    }
    else {
        uVar2 = *0x1ba38;
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        if (*(iVar3 + 0x3e) != 0x100) {
            uVar1 = fcn.00013d74(iVar3,CONCAT71(uVar2 >> 8,2),0x400,*0x195c8);
        }
    }
    return uVar1;
}


/* fcn.00018bd0 @ 0x18bd0 */

int64_t fcn.00018bd0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong *puVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iStackX_8;
    uchar auStack_48 [8];
    uchar auStack_40 [8];
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    
    puVar2 = *(arg1 + 0x38);
    iVar1 = *(arg1 + 0x40);
    iStackX_8 = 0xe8;
    (**(*0x195f8 + 0x168))(*0x195e8,0xe8,0);
    iVar5 = *0x195e8;
    if ((arg4 - 1U & 0xfffffffd) == 0) {
        (**(*0x195f8 + 0x160))(*0x195e8,0x19380,0x10);
        *(iVar5 + 0x10) = 0xd0;
        if (iVar1 == 1) {
            iVar4 = *(puVar2[0x6a] + 0x78);
            *(iVar5 + 0x40) = *puVar2;
            *(iVar5 + 0x3a) = *(puVar2 + 1);
            *(iVar5 + 0x3c) = *(puVar2 + 9);
        }
        else if (iVar1 == 2) {
            if (puVar2 != NULL) {
                piVar3 = puVar2[0x32];
                if (piVar3 == puVar2 + 0x32) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = piVar3 + -0x221;
                }
                if (iVar4 != 0) {
                    *(iVar5 + 0x40) = *(iVar4 + 8);
                }
            }
            iVar4 = puVar2[2];
        }
        else {
            if (iVar1 != 3) {
                return -0x7ffffffffffffffd;
            }
            *(iVar5 + 0x50) = *(puVar2 + 0x4c);
            iVar4 = puVar2[1];
            if (iVar5 + 0x68 != puVar2 + 0x74) {
                fcn.00010280(iVar5 + 0x68,puVar2 + 0x74,0x3c);
            }
        }
        if (iVar4 != 0) {
            (**(iVar4 + 0x70))(iVar4,auStack_30,auStack_48,auStack_40,auStack_38);
            *(iVar5 + 0x48) = auStack_48[0];
            *(iVar5 + 0x49) = auStack_40[0];
            *(iVar5 + 0x4a) = auStack_38[0];
            *(iVar5 + 0x18) = 0x4c504f24;
            *(iVar5 + 0x36) = arg2;
            *(iVar5 + 0x4c) = iVar1;
            if (arg4 == 1) {
                uVar6 = 0;
                if ((arg4 & arg2) == 0) {
                    *(iVar5 + 0x20) = iVar5 + 200;
                    do {
                        *(uVar6 + *(iVar5 + 0x20)) = *(uVar6 + arg3);
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < 0x20);
                }
                else {
                    *(iVar5 + 0x28) = iVar5 + 0xa8;
                    do {
                        *(uVar6 + *(iVar5 + 0x28)) = *(uVar6 + arg3);
                        uVar6 = uVar6 + 1;
                    } while (uVar6 < 0x20);
                }
            }
            if ((*0x195d0 == NULL) && (iVar5 = (**(*0x195f8 + 0x140))(0x192c0,0,0x195d0), iVar5 < 0)) {
                return iVar5;
            }
            iVar5 = (***0x195d0)(*0x195d0,*0x195e8,&iStackX_8);
            if (iVar5 < 0) {
                return iVar5;
            }
            (**(*0x195f8 + 0x168))(*0x195e8,iStackX_8 + 0x40,0);
            return 0;
        }
    }
    return -0x7ffffffffffffff2;
}


/* fcn.0001917c @ 0x1917c */

ulong fcn.0001917c(void)

{
    ulong uVar1;
    
    if (*(*0x195f0 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (**(*0x195f8 + 0x170))(0x200,8,0x18a34,0,0x192d0,0x1ba28);
    }
    return uVar1;
}


/* fcn.000113e0 @ 0x113e0 */

int64_t fcn.000113e0(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_10;
    ulong auStackX_18 [2];
    
    iStackX_10 = 0;
    auStackX_18[0] = 0x200;
    iVar1 = (**(*0x195f8 + 0x40))(4,0x200,&iStackX_10);
    if (iVar1 < 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        (**(*0x195f8 + 0x168))(iStackX_10,auStackX_18[0],0);
        if (arg1 == 0) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            uVar2 = 10000000;
            if (*(arg1 + 0x9b) != 2) {
                uVar2 = 160000000;
            }
            iVar1 = (***arg1)(*arg1,*(arg1 + 0x97),uVar2,1,0x100,0x200,iStackX_10,auStackX_18);
            if (-1 < iVar1) {
                fcn.000114d0(arg1,iStackX_10);
            }
            (**(*0x195f8 + 0x48))(iStackX_10);
        }
    }
    return iVar1;
}


/* fcn.00011820 @ 0x11820 */

uint16_t fcn.00011820(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    
    if (arg2 == 1) {
        iVar2 = *(arg1 + 0x390);
    }
    else if (arg2 == 2) {
        iVar2 = *(arg1 + 0x148);
    }
    else {
        if (arg2 != 3) {
            return 0;
        }
        iVar2 = *(arg1 + 0x58);
    }
    if (iVar2 == 0) {
        return 0;
    }
    uVar1 = *(iVar2 + 0x19) & 7;
    uVar3 = uVar1;
    if (*(iVar2 + 0x3e) == 0x100) {
        fcn.00011fd4(iVar2);
        uVar3 = 0x200;
        if (*(iVar2 + 0xa9) == 1) {
            uVar3 = 0x202;
        }
        uVar3 = uVar3 | *(iVar2 + 0x19) & 4 | uVar1 & 0xfff9;
    }
    if ((*(iVar2 + 0x56) & 2) == 0) {
        return uVar3;
    }
    return uVar3 | 8;
}


/* fcn.00012280 @ 0x12280 */

int64_t fcn.00012280(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = 0;
    if ((arg1_00 == 0) || (*(arg1_00 + 0x83) == 0)) {
        iVar2 = -0x7ffffffffffffff9;
    }
    else {
        (**(*0x195f8 + 0x168))(*0x195c0,0x8d,0);
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar2 = *0x1ba38;
        if (arg2 != 0) {
            cVar1 = *arg2;
            iVar4 = iVar3;
            while (cVar1 != '\0') {
                iVar4 = iVar4 + 1;
                cVar1 = *(arg2 + iVar4);
            }
        }
        if (*(arg1_00 + 0x3e) == 0x100) {
            iVar2 = fcn.000181c4(arg1_00,*0x195c0);
        }
        else {
            **0x195c0 = 0xff00000000000000;
            (*0x195c0)[1] = 0x2ff000000000000;
            *(*0x195c0 + 2) = 1;
            *(*0x195c0 + 0x1c) = 0x100000005020000;
            *(*0x195c0 + 0x25) = *(arg1_00 + 0x7f);
            *(*0x195c0 + 0x2d) = *(arg1_00 + 0x83);
            *(*0x195c0 + 0x4d) = 0x600000009000000;
            *(*0x195c0 + 0x24) = 1;
            iVar2 = fcn.00017f08(arg1_00,*0x195c0,*0x195c8,iVar2);
        }
        if (-1 < iVar2) {
            cVar1 = *arg3;
            iVar2 = iVar3;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = *(iVar2 + arg3);
            }
            iVar2 = fcn.00018304(arg1_00);
            if (-1 < iVar2) {
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                iVar2 = fcn.00014cd8(arg1_00,*0x195c8,*0x1ba38,*0x195c0);
                if ((-1 < iVar2) && (*(arg1_00 + 0x3e) == 0x100)) {
                    iVar2 = fcn.00017fd4(arg1_00,*0x195c0,*0x195c8,*0x1ba38);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    (**(*0x195f8 + 0x168))(*0x195c0,0x8d,0);
                    iVar2 = fcn.000181c4(arg1_00,*0x195c0);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                    cVar1 = *arg3;
                    iVar2 = iVar3;
                    while (cVar1 != '\0') {
                        iVar2 = iVar2 + 1;
                        cVar1 = *(iVar2 + arg3);
                    }
                    iVar2 = fcn.00018304(arg1_00);
                    if (-1 < iVar2) {
                        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                        iVar2 = fcn.00014cd8(arg1_00,*0x195c8,*0x1ba38,*0x195c0);
                        if (-1 < iVar2) {
                            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                            iVar2 = fcn.00018108(arg1,*0x195c0,*0x195c8,*0x1ba38);
                            if (-1 < iVar2) {
                                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                                iVar2 = fcn.00014cd8(arg1_00,*0x195c8,*0x1ba38,*0x195c0);
                                if (-1 < iVar2) {
                                    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                                    cVar1 = *arg3;
                                    while (cVar1 != '\0') {
                                        iVar3 = iVar3 + 1;
                                        cVar1 = *(iVar3 + arg3);
                                    }
                                    iVar2 = fcn.00018304(arg1_00);
                                    if (-1 < iVar2) {
                                        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                                        iVar2 = fcn.00014cd8(arg1_00,*0x195c8,*0x1ba38,*0x195c0);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            fcn.00017fd4(arg1_00,*0x195c0,*0x195c8,*0x1ba38);
        }
    }
    return iVar2;
}


/* fcn.000127ac @ 0x127ac */

//WARNING: Removing unreachable block (ram,0x000129ce)
//WARNING: Removing unreachable block (ram,0x00012a07)
//WARNING: Removing unreachable block (ram,0x00012a30)

int64_t fcn.000127ac(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint32_t var_67h;
    int32_t var_77h;
    ulong uStack_b8;
    uchar uStack_b0;
    ulong uStack_af;
    ushort uStack_a7;
    uchar uStack_a5;
    int64_t var_59h;
    int8_t var_51h;
    int64_t var_50h;
    int16_t var_48h;
    int8_t var_46h;
    
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffff9;
    }
    else if (*(arg1 + 0x3e) == 0x100) {
        iVar2 = 0;
    }
    else {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        **0x195c0 = 0xff00000000000000;
        (*0x195c0)[1] = 0x2ff000000000000;
        *(*0x195c0 + 2) = 1;
        *(*0x195c0 + 0x1c) = 0x100000005020000;
        iVar3 = *0x1ba38;
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        *(*0x195c0 + 0x25) = iVar2;
        *(*0x195c0 + 0x2d) = arg2;
        *(*0x195c0 + 0x4d) = 0x600000009000000;
        *(*0x195c0 + 0x24) = 1;
        iVar2 = fcn.00017f08(arg1,*0x195c0,*0x195c8,iVar3);
        if (-1 < iVar2) {
            (**(*0x195f8 + 0x168))(&uStack_b8,0x98,0);
            uStack_b8 = 0xffffffffffffffff;
            uStack_af = 0xffffffffffffffff;
            uStack_b0 = 1;
            uStack_a7 = 0x6ff;
            uStack_a5 = 6;
            iVar2 = fcn.00013dc0(arg1,*0x195c0,*0x195c8,*0x1ba38);
            if (-1 < iVar2) {
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                iVar3 = *0x1ba38;
                iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
                if (-1 < iVar2) {
                    iVar2 = fcn.000172ec(arg1,*0x195c8,iVar3);
                }
            }
            fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
        }
    }
    return iVar2;
}


/* fcn.00012aa8 @ 0x12aa8 */

int64_t fcn.00012aa8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    int64_t arg4;
    int64_t iVar3;
    ulong *puVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        return -0x7ffffffffffffff9;
    }
    uVar2 = *(arg1 + 0x42);
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    if (*(arg1 + 0x3e) == 0x100) {
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar3 = iVar3 + 1;
            cVar1 = *(iVar3 + arg2);
        }
        iVar3 = fcn.000181c4(arg1,*0x195c0);
    }
    else {
        **0x195c0 = 0xff00000000000000;
        (*0x195c0)[1] = 0x2ff000000000000;
        *(*0x195c0 + 2) = 1;
        *(*0x195c0 + 0x1c) = 0x200000005020000;
        arg4 = *0x1ba38;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar3 = iVar3 + 1;
            cVar1 = *(iVar3 + arg2);
        }
        *(*0x195c0 + 0x25) = iVar3;
        *(*0x195c0 + 0x2d) = arg2;
        *(*0x195c0 + 0x4d) = 0x100010009000000;
        *(*0x195c0 + 0x24) = 1;
        iVar3 = fcn.00017f08(arg1,*0x195c0,*0x195c8,arg4);
    }
    if (iVar3 < 0) {
        return iVar3;
    }
    if (*(arg1 + 0x3e) != 0x100) {
        iVar3 = fcn.0001806c(arg1);
        if (iVar3 < 0) goto code_r0x000132db;
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
        if ((iVar3 < 0) || (iVar3 = fcn.0001806c(arg1), iVar3 < 0)) goto code_r0x000132db;
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
        if (iVar3 < 0) goto code_r0x000132db;
        if (*(arg1 + 0x3e) != 0x100) {
            iVar3 = fcn.00018304(arg1);
            if (iVar3 < 0) {
                return iVar3;
            }
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
            if (-1 < iVar3) {
                iVar3 = fcn.00018304(arg1);
                if (iVar3 < 0) {
                    return iVar3;
                }
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
                if (-1 < iVar3) {
                    iVar3 = fcn.00018304(arg1);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                    iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
                    if (-1 < iVar3) {
                        iVar3 = fcn.00018304(arg1);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                        iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
                        if ((-1 < iVar3) && (iVar3 = fcn.00018304(arg1), -1 < iVar3)) {
                            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                            iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
                        }
                    }
                }
            }
            goto code_r0x000132db;
        }
    }
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38);
    if (((((-1 < iVar3) && (iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38), -1 < iVar3)) &&
         (iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38), -1 < iVar3)) &&
        ((iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38), -1 < iVar3 &&
         (puVar4 = *0x195c0, iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38), -1 < iVar3)))) &&
       (iVar3 = fcn.00013d74(arg1,CONCAT71(puVar4 >> 8,1),uVar2 * 0x100 + (uVar2 >> 8),*0x195c8), -1 < iVar3)) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
        if (-1 < iVar3) {
            *(arg1 + 0xa9) = 1;
        }
    }
code_r0x000132db:
    fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
    return iVar3;
}


/* fcn.000118d0 @ 0x118d0 */

int64_t fcn.000118d0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t arg4;
    int64_t iVar2;
    
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    if ((arg1 == 0) || (*(arg1 + 0x3e) != 0x100)) {
        **0x195c0 = 0xff00000000000000;
        (*0x195c0)[1] = 0x2ff000000000000;
        *(*0x195c0 + 2) = 1;
        *(*0x195c0 + 0x1c) = 0x100000005020000;
        arg4 = *0x1ba38;
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        *(*0x195c0 + 0x25) = iVar2;
        *(*0x195c0 + 0x2d) = arg2;
        *(*0x195c0 + 0x4d) = 0x600000009000000;
        *(*0x195c0 + 0x24) = 1;
        iVar2 = fcn.00017f08(arg1,*0x195c0,*0x195c8,arg4);
        if (-1 < iVar2) {
            iVar2 = fcn.00018304(arg1);
            if (-1 < iVar2) {
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
            }
            fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
        }
    }
    else {
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00011d18 @ 0x11d18 */

int64_t fcn.00011d18(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t arg4;
    int64_t iVar2;
    int32_t var_20h;
    int64_t var_28h;
    int64_t var_bp_10h;
    
    var_28h = 0;
    var_bp_10h = 0;
    iVar2 = (**(*0x195f8 + 0x40))(4,0x21,&var_28h);
    if ((-1 < iVar2) && (iVar2 = fcn.000133f8(arg2,&var_28h,&var_bp_10h), -1 < iVar2)) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        (**(*0x195f8 + 0x168))(*0x195c0,0x8d,0);
        if ((arg1 == 0) || (*(arg1 + 0x3e) != 0x100)) {
            **0x195c0 = 0xff00000000000000;
            (*0x195c0)[1] = 0x2ff000000000000;
            *(*0x195c0 + 2) = 1;
            *(*0x195c0 + 0x1c) = 0x100000005020000;
            arg4 = *0x1ba38;
            iVar2 = 0;
            cVar1 = *var_28h;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = *(iVar2 + var_28h);
            }
            *(*0x195c0 + 0x25) = iVar2;
            *(*0x195c0 + 0x2d) = var_28h;
            *(*0x195c0 + 0x4d) = 0x600000009000000;
            *(*0x195c0 + 0x24) = 1;
            iVar2 = fcn.00017f08(arg1,*0x195c0,*0x195c8,arg4);
            if (iVar2 < 0) {
                (**(*0x195f8 + 0x48))(var_28h);
                (**(*0x195f8 + 0x48))(var_bp_10h);
            }
            else {
                iVar2 = 0;
                cVar1 = *var_bp_10h;
                while (cVar1 != '\0') {
                    iVar2 = iVar2 + 1;
                    cVar1 = *(iVar2 + var_bp_10h);
                }
                iVar2 = fcn.00018304(arg1);
                if (-1 < iVar2) {
                    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                    iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
                }
                fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
                if (-1 < iVar2) {
                    iVar2 = fcn.00011b60(arg1,var_28h,var_bp_10h);
                }
                (**(*0x195f8 + 0x48))(var_28h);
                (**(*0x195f8 + 0x48))(var_bp_10h);
            }
        }
        else {
            iVar2 = fcn.00012280(arg1,var_28h,var_bp_10h);
            (**(*0x195f8 + 0x48))(var_28h);
            (**(*0x195f8 + 0x48))(var_bp_10h);
        }
    }
    return iVar2;
}


/* fcn.0001331c @ 0x1331c */

int64_t fcn.0001331c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_bp_10h;
    
    var_28h = 0;
    var_bp_10h = 0;
    iVar1 = (**(*0x195f8 + 0x40))(4,0x21,&var_28h);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = fcn.000133f8(arg2,&var_28h,&var_bp_10h);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (*(arg1 + 0x1a) == 0) {
        iVar1 = fcn.00013c18(arg2,arg1,var_28h,&var_20h);
        if (iVar1 < 0) goto code_r0x000133c6;
    }
    else {
        var_20h._0_1_ = *(arg1 + 0x1a) == 1;
    }
    if (var_20h == '\0') {
        iVar1 = fcn.000134b8(arg2,arg1,var_28h,var_bp_10h);
    }
    else {
        iVar1 = fcn.00013670(arg2,arg1,var_28h,var_bp_10h);
    }
    if (-1 < iVar1) {
        *(arg1 + 0x1a) = 1;
    }
code_r0x000133c6:
    (**(*0x195f8 + 0x48))(var_28h);
    (**(*0x195f8 + 0x48))(var_bp_10h);
    return iVar1;
}


/* fcn.00013780 @ 0x13780 */

//WARNING: Variable defined which should be unmapped: var_17h

int64_t fcn.00013780(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int16_t var_fh;
    int8_t var_11h;
    int64_t var_17h;
    int32_t var_1fh;
    char acStackX_20 [8];
    int64_t var_67h;
    int8_t var_7fh;
    
    iVar3 = 0;
    acStackX_20[0] = '\0';
    if (arg1 == 0) {
        return -0x7ffffffffffffff9;
    }
    uVar2 = *(arg1 + 0x42);
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    if (*(arg1 + 0x3e) == 0x100) {
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar3 = iVar3 + 1;
            cVar1 = *(iVar3 + arg2);
        }
        iVar3 = fcn.000181c4(arg1,*0x195c0);
        if (iVar3 < 0) {
            return iVar3;
        }
    }
    else {
        **0x195c0 = 0xff00000000000000;
        (*0x195c0)[1] = 0x2ff000000000000;
        *(*0x195c0 + 2) = 1;
        *(*0x195c0 + 0x1c) = 0x200000005020000;
        iVar4 = *0x1ba38;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar3 = iVar3 + 1;
            cVar1 = *(iVar3 + arg2);
        }
        *(*0x195c0 + 0x25) = iVar3;
        *(*0x195c0 + 0x2d) = arg2;
        *(*0x195c0 + 0x4d) = (-(arg3 != '\0') & 0xfffffe0000000000) + 0x100030009000000;
        *(*0x195c0 + 0x24) = 1;
        iVar3 = fcn.00017f08(arg1,*0x195c0,*0x195c8,iVar4);
    }
    if (iVar3 < 0) {
        *(arg1 + 0x1a) = 0;
        return iVar3;
    }
    if (*(arg1 + 0x3e) == 0x100) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38);
        if (iVar3 < 0) goto code_r0x00013ba5;
        puVar5 = *0x195c0;
        iVar3 = fcn.00016290(arg1,*0x195c0,*0x195c8,*0x1ba38);
        if (iVar3 < 0) goto code_r0x00013ba5;
        iVar3 = fcn.00013d74(arg1,CONCAT71(puVar5 >> 8,1),uVar2 * 0x100 + (uVar2 >> 8),*0x195c8);
    }
    else {
        iVar3 = fcn.00018304(arg1);
        if (iVar3 < 0) goto code_r0x00013ba5;
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
        if (iVar3 < 0) goto code_r0x00013ba5;
        iVar3 = fcn.00018304(arg1);
    }
    if (-1 < iVar3) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar3 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
    }
code_r0x00013ba5:
    iVar4 = arg1;
    fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
    if ((*(arg1 + 0x3e) != 0x100) && (-1 < iVar3)) {
        if (arg3 == '\0') {
            *(arg1 + 0x1a) = 1;
        }
        else {
            fcn.00013c18(iVar4,arg1,arg2,acStackX_20);
            *(arg1 + 0x1a) = 2 - (acStackX_20[0] != '\0');
        }
    }
    return iVar3;
}


/* fcn.00014b00 @ 0x14b00 */

int64_t fcn.00014b00(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    ulong *arg2_00;
    int64_t arg4;
    int64_t iVar2;
    
    arg2_00 = *0x195c0;
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    if ((arg1 == 0) || (*(arg1 + 0x3e) != 0x100)) {
        *(arg2_00 + 2) = 1;
        *arg2_00 = 0xff00000000000000;
        arg2_00[1] = 0x2ff000000000000;
        *(arg2_00 + 0x1c) = 0x200000005020000;
        arg4 = *0x1ba38;
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        *(arg2_00 + 0x25) = iVar2;
        *(arg2_00 + 0x2d) = arg2;
        *(arg2_00 + 0x4d) = 0x100010009000000;
        *(arg2_00 + 0x24) = 1;
        iVar2 = fcn.00017f08(arg1,arg2_00,*0x195c8,arg4);
    }
    else {
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        iVar2 = fcn.000181c4(arg1,arg2_00);
    }
    if ((-1 < iVar2) && (iVar2 = fcn.00017d04(arg1), -1 < iVar2)) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,arg2_00);
        if (iVar2 < 0) {
            fcn.00017fd4(arg1,arg2_00,*0x195c8,*0x1ba38);
        }
        else {
            (**(*0x195f8 + 0x168))(arg2_00,0x8d,0);
        }
    }
    return iVar2;
}


/* fcn.000148dc @ 0x148dc */

int64_t fcn.000148dc(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    ulong *arg2_00;
    int64_t iVar2;
    int64_t iVar3;
    
    arg2_00 = *0x195c0;
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    if ((arg1 == 0) || (*(arg1 + 0x3e) != 0x100)) {
        *(arg2_00 + 2) = 1;
        *arg2_00 = 0xff00000000000000;
        *(arg2_00 + 0x1c) = 0x100000005020000;
        arg2_00[1] = 0x2ff000000000000;
        iVar3 = *0x1ba38;
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        *(arg2_00 + 0x25) = iVar2;
        *(arg2_00 + 0x2d) = arg2;
        *(arg2_00 + 0x4d) = 0x600000009000000;
        *(arg2_00 + 0x24) = 1;
        iVar2 = fcn.00017f08(arg1,arg2_00,*0x195c8,iVar3);
    }
    else {
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        iVar2 = fcn.000181c4(arg1,arg2_00);
    }
    if (-1 < iVar2) {
        iVar2 = fcn.00017d04(arg1);
        if (iVar2 < 0) {
            (**(*0x195f8 + 0x168))();
            (**(*0x195f8 + 0x168))(arg2_00,0x8d,0);
            iVar2 = 0;
        }
        else {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar3 = *0x195c8;
            iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,arg2_00);
            if (iVar2 < 0) {
                iVar3 = fcn.00014e00(*0x195c8,iVar3);
                if (iVar3 < 0) {
                    fcn.00017fd4(arg1,arg2_00,*0x195c8,*0x1ba38);
                }
                else {
                    (**(*0x195f8 + 0x168))(arg2_00,0x8d,0);
                    iVar2 = 0;
                }
            }
            else {
                (**(*0x195f8 + 0x168))(arg2_00,0x8d,0);
            }
        }
    }
    return iVar2;
}


/* fcn.00014294 @ 0x14294 */

int64_t fcn.00014294(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    ulong *arg2_00;
    int64_t arg4;
    int64_t iVar2;
    uint in_register_00000014;
    char *pcVar3;
    
    arg2_00 = *0x195c0;
    pcVar3 = CONCAT44(in_register_00000014,arg2);
    **0x195c0 = 0xff00000000000000;
    arg2_00[1] = 0x2ff000000000000;
    *(arg2_00 + 0x1c) = 0x200000005020000;
    iVar2 = 0;
    *(arg2_00 + 2) = 1;
    arg4 = *0x1ba38;
    cVar1 = *pcVar3;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = pcVar3[iVar2];
    }
    *(arg2_00 + 0x25) = iVar2;
    *(arg2_00 + 0x2d) = pcVar3;
    *(arg2_00 + 0x4d) = 0x100010009000000;
    *(arg2_00 + 0x24) = 1;
    iVar2 = fcn.00017f08(arg1,arg2_00,*0x195c8,arg4);
    if (-1 < iVar2) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar2 = fcn.00018304(arg1);
        if (-1 < iVar2) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,arg2_00);
            *(arg1 + 0x1a) = 2;
        }
        fcn.00017fd4(arg1,arg2_00,*0x195c8,*0x1ba38);
    }
    return iVar2;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 36960 named .text
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


/* fcn.00013d74 @ 0x13d74 */

void fcn.00013d74(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    ulong uVar2;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = 10000000;
    if (*(piVar1 + 0x9b) != 2) {
        uVar2 = 160000000;
    }
    (**(*piVar1 + 8))(*piVar1,*(piVar1 + 0x97),uVar2,arg2,arg3);
    return;
}


/* fcn.000181c4 @ 0x181c4 */

int64_t fcn.000181c4(int64_t arg1,int64_t arg2)

{
    int64_t arg3;
    int64_t arg4;
    int64_t iVar1;
    ulong in_stack_00000028;
    int64_t in_stack_00000038;
    
    arg4 = *0x1ba38;
    arg3 = *0x195c8;
    if (*0x1ba38 != 0) {
        fcn.00010260(*0x195c8,*0x1ba38);
    }
    fcn.00010260(arg2,0x8d);
    *(arg2 + 0x10) = 1;
    *arg2 = 0xff00000000000000;
    *(arg2 + 0x24) = 1;
    *(arg2 + 8) = 0x2ff000000000000;
    *(arg2 + 0x1c) = in_stack_00000028;
    iVar1 = fcn.00017f08(arg1,arg2,arg3,arg4);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (arg4 != 0) {
        fcn.00010260(arg3,arg4);
    }
    if (in_stack_00000038 == 0) {
code_r0x000182e6:
        iVar1 = 0;
    }
    else {
        iVar1 = fcn.00018108(arg1,arg2,arg3,arg4);
        if (-1 < iVar1) {
            if (arg4 != 0) {
                fcn.00010260(arg3,arg4);
            }
            iVar1 = fcn.00014cd8(arg1,arg3,arg4,arg2);
            if (-1 < iVar1) goto code_r0x000182e6;
        }
        fcn.00017fd4(arg1,arg2,arg3,arg4);
    }
    return iVar1;
}


/* fcn.00017d04 @ 0x17d04 */

void fcn.00017d04(int64_t arg1)

{
    uint16_t uVar1;
    int64_t arg4;
    int64_t extraout_RAX;
    uchar in_DL;
    unkbyte7 in_RDX;
    int iVar2;
    
    arg4 = *0x195c8;
    uVar1 = *(arg1 + 0x42);
    fcn.0001789c(arg1,CONCAT71(in_RDX,in_DL),*0x195c8,*0x1ba38);
    if (-1 < extraout_RAX) {
        iVar2 = uVar1 * 0x100;
        fcn.00013d74(arg1,CONCAT71(in_RDX,1),CONCAT22(iVar2 >> 0x10,iVar2 + (uVar1 >> 8)),arg4);
    }
    return;
}


/* fcn.0001789c @ 0x1789c */

ulong fcn.0001789c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    char *arg3_00;
    uint32_t uVar3;
    uint auStackX_8 [2];
    char *in_stack_00000030;
    
    auStackX_8[0] = 0x60000;
    if (arg1 == 0) {
        uVar1 = 0x8000000000000007;
    }
    else {
        uVar2 = arg4;
        fcn.00014f1c(arg3,uVar2,*(arg1 + 0x42),*(arg1 + 0x7c));
        fcn.00014f94(arg3,uVar2,*(arg2 + 0x14),*(arg2 + 0x18));
        fcn.00015038(arg3,uVar2);
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf8;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
        uVar3 = 8;
        fcn.00015284(arg3,uVar2,&stack0x00000028,8);
        fcn.00015284(arg3,uVar2,&stack0x00000030,uVar3);
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
        if (((in_stack_00000030 == 0x1100000006000000) && ((*(arg1 + 0x3e) - 0x203U & 0xfefe) == 0)) &&
           (*(arg1 + 0x3e) != 0x204)) {
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
            if (*(arg1 + 0x3e) == 0x100) {
                arg3_00 = "KeepGlobalRangeKey";
                uVar3 = 0x13;
            }
            else {
                arg3_00 = auStackX_8;
                uVar3 = 3;
            }
            fcn.00015284(arg3,uVar2,arg3_00,uVar3);
            fcn.00015284(arg3,uVar2,&stack0x00000038,1);
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
        }
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf9;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
        fcn.00015080(arg3);
        uVar2 = *(arg3 + 0x34);
        *(arg3 + 0x34) = ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18);
        uVar2 = *(arg3 + 0x28);
        *(arg3 + 0x28) = ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18);
        uVar2 = *(arg3 + 0x10);
        *(arg3 + 0x10) = ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014cd8 @ 0x14cd8 */

int64_t fcn.00014cd8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t arg2_00;
    int iVar3;
    ulong uVar4;
    char acStackX_8 [8];
    int64_t iStackX_18;
    
    acStackX_8[0] = -1;
    iVar3 = 10;
    if (arg1 == 0) {
code_r0x00014de1:
        iVar2 = -0x7ffffffffffffff9;
    }
    else {
        if (*(arg4 + 0x6d) != NULL) {
            iVar3 = **(arg4 + 0x6d) * 10;
        }
        uVar1 = *(arg1 + 0x42);
        iStackX_18 = arg3;
        do {
            arg2_00 = *(arg1 + 0x97);
            uVar4 = 10000000;
            if (*(arg1 + 0x9b) != 2) {
                uVar4 = 160000000;
            }
            iVar2 = (***arg1)(*arg1,arg2_00,uVar4,1,uVar1 * 0x100 + (uVar1 >> 8),0x200,arg2,&iStackX_18);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.00014e00(arg2,arg2_00);
            if (iVar2 == 0) {
                *(arg4 + 0x14) = 0;
                goto code_r0x00014de1;
            }
            if ((*(arg2 + 8) == 0) && (*(arg2 + 0x10) != 0)) break;
            fcn.00019248(0x57642);
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar2 = fcn.00014e84(arg2,arg2_00,acStackX_8);
        if (iVar2 < 0) {
            if (acStackX_8[0] == '\x01') {
                iVar2 = -0x7ffffffffffffff1;
            }
            else if (acStackX_8[0] == '\x12') {
                iVar2 = -0x7fffffffffffffeb;
            }
        }
    }
    return iVar2;
}


/* fcn.00017fd4 @ 0x17fd4 */

int64_t fcn.00017fd4(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_00000014;
    int64_t arg4_00;
    
    arg4_00 = CONCAT44(in_register_00000014,arg2);
    if (*(arg4_00 + 0x14) != 0) {
        if (arg4 != 0) {
            fcn.00010260(arg3,arg4);
        }
        iVar1 = fcn.00017d98(arg1,arg3,arg4,arg4_00);
        if (iVar1 < 0) {
            return iVar1;
        }
        if (arg4 != 0) {
            fcn.00010260(arg3,arg4);
        }
        iVar1 = fcn.00014cd8(arg1,arg3,arg4,arg4_00);
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    fcn.00010260(arg4_00,0x8d);
    return 0;
}


/* fcn.00010f50 @ 0x10f50 */

int64_t fcn.00010f50(int64_t arg1,ulong noname_1,uint32_t arg2)

{
    char cVar1;
    int64_t arg4;
    int64_t iVar2;
    uint in_R8;
    
    arg4 = *0x195c0;
    iVar2 = 0;
    cVar1 = *CONCAT44(in_R8,arg2);
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = CONCAT44(in_R8,arg2)[iVar2];
    }
    iVar2 = fcn.000181c4(arg1,*0x195c0);
    if (-1 < iVar2) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar2 = fcn.00017d04(arg1);
        if (-1 < iVar2) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,arg4);
            if (-1 < iVar2) {
                (**(*0x195f8 + 0x168))(arg4,0x8d,0);
                return iVar2;
            }
        }
        fcn.00017fd4(arg1,arg4,*0x195c8,*0x1ba38);
        return iVar2;
    }
    return iVar2;
}


/* fcn.0001470c @ 0x1470c */

int64_t fcn.0001470c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *arg2_00;
    int64_t arg4;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar1;
    int iStackX_10;
    uint uStackX_14;
    
    arg2_00 = *0x195c0;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_14 = arg2 >> 0x20;
    iStackX_10 = -1;
    iVar1 = 0;
    if (*(arg1_00 + 0x58) == 0x404) {
        iStackX_10 = fcn.00014640(arg1_00);
    }
    if (*arg3 != '\0') {
        do {
            iVar1 = iVar1 + 1;
        } while (*(iVar1 + arg3) != '\0');
        if (iVar1 != 0) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            arg4 = *0x1ba38;
            *arg2_00 = 0xff00000000000000;
            *(arg2_00 + 2) = 1;
            arg2_00[1] = 0x2ff000000000000;
            *(arg2_00 + 0x1c) = 0x100000005020000;
            *(arg2_00 + 0x4d) = 0x1ff010009000000;
            *(arg2_00 + 0x25) = iVar1;
            *(arg2_00 + 0x2d) = arg3;
            *(arg2_00 + 0x24) = 1;
            iVar1 = fcn.00017f08(arg1_00,arg2_00,*0x195c8,arg4);
            if (-1 < iVar1) {
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                fcn.00017d04(arg1_00);
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                if (iStackX_10 != -1) {
                    *(arg2_00 + 0x6d) = &iStackX_10;
                }
                iVar1 = fcn.00014cd8(arg1_00,*0x195c8,*0x1ba38,arg2_00);
                *(arg2_00 + 0x6d) = 0;
                if (iVar1 < 0) {
                    fcn.00017fd4(arg1_00,arg2_00,*0x195c8,*0x1ba38);
                }
                else {
                    (**(*0x195f8 + 0x168))(arg2_00,0x8d,0);
                }
                return iVar1;
            }
        }
    }
    return -0x7ffffffffffffffe;
}


/* fcn.000140ac @ 0x140ac */

void fcn.000140ac(int64_t arg1)

{
    uint16_t uVar1;
    int64_t arg4;
    int64_t arg3;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int iVar5;
    char acStack_28 [8];
    char acStack_20 [8];
    char cStack_18;
    
    arg3 = *0x1ba38;
    arg4 = *0x195c8;
    iVar4 = *0x195c0;
    uVar1 = *(arg1 + 0x42);
    cStack_18 = str.MaxComPacketSize[0x10];
    acStack_28 = str.MaxComPacketSize._0_8_;
    acStack_20 = str.MaxComPacketSize._8_8_;
    iVar3 = *0x195c0;
    iVar2 = fcn.000154d0(arg1,*0x195c0,*0x195c8,*0x1ba38);
    if (-1 < iVar2) {
        iVar5 = uVar1 * 0x100;
        iVar3 = fcn.00013d74(arg1,CONCAT71(iVar3 >> 8,1),CONCAT22(iVar5 >> 0x10,iVar5 + (uVar1 >> 8)),arg4);
        if (-1 < iVar3) {
            (**(*0x195f8 + 0x168))(arg4,arg3,0);
            iVar3 = arg4;
            iVar4 = fcn.00014cd8(arg1,arg4,arg3,iVar4);
            if (-1 < iVar4) {
                *(arg1 + 0x93) = 0x400;
                fcn.00017b1c(arg4,iVar3,acStack_28,arg1 + 0x93);
            }
        }
    }
    return;
}


/* fcn.000154d0 @ 0x154d0 */

ulong fcn.000154d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t arg4_00;
    
    uVar1 = arg4;
    fcn.00014f1c(arg3,uVar1,*(arg1 + 0x42),*(arg1 + 0x7c));
    fcn.00014f94(arg3,uVar1,*(arg2 + 0x14),*(arg2 + 0x18));
    fcn.00015038(arg3,uVar1);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf8;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    arg4_00 = 8;
    fcn.00015284(arg3,uVar1,&stack0x00000028,8);
    fcn.00015284(arg3,uVar1,&stack0x00000030,arg4_00);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf9;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015080(arg3);
    uVar1 = *(arg3 + 0x34);
    *(arg3 + 0x34) = ((uVar1 & 0xff00) + uVar1 * 0x10000) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    uVar1 = *(arg3 + 0x28);
    *(arg3 + 0x28) = ((uVar1 & 0xff00) + uVar1 * 0x10000) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    uVar1 = *(arg3 + 0x10);
    *(arg3 + 0x10) = ((uVar1 & 0xff00) + uVar1 * 0x10000) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    return 0;
}


/* fcn.00017b1c @ 0x17b1c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00017b1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char *pcVar2;
    char cVar3;
    char *pcVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t auStackX_8 [2];
    uint64_t uStackX_10;
    int64_t var_30h;
    uint32_t auStack_38 [2];
    char *pcStack_30;
    int32_t var_bp_10h;
    int64_t var_8h;
    
    uVar6 = *(arg1 + 0x34);
    uStackX_10 = arg2 & 0xffffffffffffff00;
    auStack_38[0] = 0x100;
    uVar6 = (uVar6 * 0x10000 + (uVar6 & 0xff00)) * 0x100 + (uVar6 >> 8 & 0xff00) + (uVar6 >> 0x18);
    iVar1 = (**(*0x195f8 + 0x40))(4,0x100,&pcStack_30);
    if (-1 < iVar1) {
        uVar5 = 0x15;
        if (0x15 < uVar6) {
            pcVar2 = arg1 + 0x4d;
            do {
                if (*pcVar2 != -0xe) {
                    return -0x7ffffffffffffff2;
                }
                uVar5 = uVar5 + 1;
                iVar1 = fcn.00015100(arg1 + 0x38 + uVar5,pcStack_30,auStack_38,auStackX_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
                pcStack_30[auStackX_8[0]] = '\0';
                cVar3 = *pcStack_30;
                pcVar2 = arg3;
                pcVar4 = pcStack_30;
                while ((cVar3 != '\0' && (cVar3 == *pcVar2))) {
                    pcVar4 = pcVar4 + 1;
                    pcVar2 = pcVar2 + 1;
                    cVar3 = *pcVar4;
                }
                if (*pcVar4 == *pcVar2) {
                    if (auStack_38[0] != 0) {
                        fcn.00010260(pcStack_30,auStack_38[0]);
                    }
                    iVar1 = fcn.00015100(arg1 + 0x38 + uStackX_10 + auStackX_8[0] + uVar5,pcStack_30,auStack_38,
                                         auStackX_8);
                    if (iVar1 < 0) {
                        return iVar1;
                    }
                    *arg4 = *pcStack_30;
                    iVar1 = 0;
                    goto code_r0x00017c83;
                }
                uVar5 = uVar5 + uStackX_10 + auStackX_8[0];
                iVar1 = fcn.00015100(arg1 + 0x38 + uVar5,pcStack_30,auStack_38,auStackX_8);
                if (iVar1 < 0) {
                    return iVar1;
                }
                uVar5 = uVar5 + uStackX_10 + auStackX_8[0];
                if (*(uVar5 + 0x38 + arg1) != -0xd) {
                    return -0x7ffffffffffffff2;
                }
                uVar5 = uVar5 + 1;
                pcVar2 = uVar5 + 0x38 + arg1;
            } while ((*pcVar2 != -0xf) && (uVar5 < uVar6));
        }
        iVar1 = -0x7ffffffffffffff2;
code_r0x00017c83:
        (**(*0x195f8 + 0x48))(pcStack_30);
    }
    return iVar1;
}


/* fcn.00013e44 @ 0x13e44 */

int64_t fcn.00013e44(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    ulong *arg2_00;
    int64_t arg3;
    int64_t arg4;
    int iVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t *in_stack_00000028;
    ulong uStack_c8;
    uchar uStack_c0;
    ulong uStack_bf;
    ushort uStack_b7;
    uchar uStack_b5;
    uchar auStack_72 [33];
    uchar auStack_51 [41];
    
    arg4 = *0x1ba38;
    arg3 = *0x195c8;
    arg2_00 = *0x195c0;
    **0x195c0 = 0xff00000000000000;
    arg2_00[1] = 0x2ff000000000000;
    *(arg2_00 + 0x1c) = 0x100000005020000;
    iVar4 = *0x195f8;
    *(arg2_00 + 2) = 1;
    *(arg2_00 + 0x24) = 1;
    (**(iVar4 + 0x168))(arg3,arg4,0);
    (**(*0x195f8 + 0x168))(&uStack_c8,0x98,0);
    (**(*0x195f8 + 0x160))(auStack_72,0x19488,3);
    (**(*0x195f8 + 0x160))(auStack_51,0x19488,3);
    iVar4 = fcn.00017f08(arg1,arg2_00,arg3,arg4);
    uVar5 = 0;
    if (-1 < iVar4) {
        (**(*0x195f8 + 0x168))(arg3,arg4,0);
        uStack_c0 = 1;
        uStack_c8 = 0xffffffffffffffff;
        uStack_bf = 0xffffffffffffffff;
        uStack_b7 = 0x3ff;
        uStack_b5 = 3;
        iVar4 = fcn.00013dc0(arg1,arg2_00,arg3,arg4);
        if (-1 < iVar4) {
            (**(*0x195f8 + 0x168))(arg3,arg4,0);
            iVar4 = fcn.00014cd8(arg1,arg3,arg4,arg2_00);
            iVar2 = *0x195f8;
            if (-1 < iVar4) {
                *arg2 = 0x100;
                iVar4 = (**(iVar2 + 0x40))(4);
                if (iVar4 < 0) {
                    return iVar4;
                }
                iVar4 = 0;
                (**(*0x195f8 + 0x168))(*in_stack_00000028,*arg2);
                iVar4 = fcn.000172ec(arg1,arg3,iVar4);
                if ((-1 < iVar4) && (iVar2 = *in_stack_00000028, (*arg2 & 0xfffffffe) != 0)) {
                    do {
                        uVar1 = *(uVar5 + iVar2);
                        *(uVar5 + iVar2) = *(((*arg2 - uVar5) - 1) + iVar2);
                        iVar3 = *arg2 - uVar5;
                        uVar5 = uVar5 + 1;
                        *((iVar3 - 1) + iVar2) = uVar1;
                    } while (uVar5 < *arg2 >> 1);
                }
            }
            fcn.00017fd4(arg1,arg2_00,arg3,arg4);
        }
    }
    return iVar4;
}


/* fcn.000114d0 @ 0x114d0 */

void fcn.000114d0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uchar uVar4;
    uint16_t uVar5;
    uint16_t *puVar6;
    uint16_t *puVar7;
    
    uVar2 = *arg2;
    puVar7 = arg2 + 0x30;
    puVar6 = NULL;
    do {
        uVar1 = *puVar7;
        uVar5 = uVar1 * 0x100 + (uVar1 >> 8);
        if (uVar5 == 1) {
            *(arg1 + 0x18) = puVar7[2];
        }
        else if (uVar5 == 2) {
            *(arg1 + 0x19) = puVar7[2];
        }
        else if (uVar5 == 3) {
            (**(*0x195f8 + 0x160))(arg1 + 0x1e,puVar7,0x20);
        }
        else if (uVar5 == 0x203) {
            *(arg1 + 0x3e) = uVar1 * 0x100 + (uVar1 >> 8);
            *(arg1 + 0x42) = puVar7[2] * 0x100 + (puVar7[2] >> 8);
            *(arg1 + 0x44) = puVar7[3] * 0x100 + (puVar7[3] >> 8);
            *(arg1 + 0x46) = puVar7[4];
            *(arg1 + 0x47) = *(puVar7 + 9) * 0x100 + (*(puVar7 + 9) >> 8);
            *(arg1 + 0x49) = *(puVar7 + 0xb) * 0x100 + (*(puVar7 + 0xb) >> 8);
            *(arg1 + 0x4b) = *(puVar7 + 0xd);
            uVar4 = puVar7[7];
            puVar6 = puVar7;
code_r0x000117c1:
            *(arg1 + 0x4c) = uVar4;
        }
        else if (uVar5 == 0x301) {
code_r0x000116de:
            *(arg1 + 0x3e) = uVar1 * 0x100 + (uVar1 >> 8);
            *(arg1 + 0x42) = puVar7[2] * 0x100 + (puVar7[2] >> 8);
            *(arg1 + 0x44) = puVar7[3] * 0x100 + (puVar7[3] >> 8);
            if (puVar6 != NULL) {
                *(arg1 + 0x4b) = *(puVar6 + 0xd);
                uVar4 = puVar6[7];
                goto code_r0x000117c1;
            }
        }
        else if (0x301 < uVar5) {
            if (uVar5 < 0x304) goto code_r0x000116de;
            if (uVar5 == 0x402) {
                *(arg1 + 0x52) = uVar1 * 0x100 + (uVar1 >> 8);
                *(arg1 + 0x56) = *(arg1 + 0x56) ^ (puVar7[2] ^ *(arg1 + 0x56)) & 1;
                *(arg1 + 0x56) = *(arg1 + 0x56) ^ (puVar7[2] ^ *(arg1 + 0x56)) & 2;
                *(arg1 + 0x57) = *(arg1 + 0x57) ^ (*(puVar7 + 5) ^ *(arg1 + 0x57)) & 1;
            }
            else if (uVar5 == 0x404) {
                *(arg1 + 0x58) = uVar1 * 0x100 + (uVar1 >> 8);
                *(arg1 + 0x5d) = *(arg1 + 0x5d) ^ (*(puVar7 + 5) ^ *(arg1 + 0x5d)) & 1;
                *(arg1 + 0x5e) = puVar7[3];
                *(arg1 + 0x5f) = *(arg1 + 0x5f) ^ (*(arg1 + 0x5f) ^ *(puVar7 + 7)) & 1;
                uVar3 = (*(arg1 + 0x5f) ^ *(puVar7 + 7)) & 2 ^ *(arg1 + 0x5f);
                *(arg1 + 0x5f) = uVar3;
                uVar3 = (uVar3 ^ *(puVar7 + 7)) & 4 ^ uVar3;
                *(arg1 + 0x5f) = uVar3;
                uVar3 = (uVar3 ^ *(puVar7 + 7)) & 8 ^ uVar3;
                *(arg1 + 0x5f) = uVar3;
                uVar3 = (uVar3 ^ *(puVar7 + 7)) & 0x10 ^ uVar3;
                *(arg1 + 0x5f) = uVar3;
                *(arg1 + 0x5f) = (uVar3 ^ *(puVar7 + 7)) & 0x20 ^ uVar3;
                *(arg1 + 0x60) = puVar7[4] * 0x100 + (puVar7[4] >> 8);
                *(arg1 + 0x62) = puVar7[5] * 0x100 + (puVar7[5] >> 8);
                *(arg1 + 100) = puVar7[6] * 0x100 + (puVar7[6] >> 8);
                *(arg1 + 0x66) = puVar7[7] * 0x100 + (puVar7[7] >> 8);
                *(arg1 + 0x68) = puVar7[8] * 0x100 + (puVar7[8] >> 8);
                *(arg1 + 0x6a) = puVar7[9] * 0x100 + (puVar7[9] >> 8);
            }
        }
        puVar7 = puVar7 + *(puVar7 + 3) + 4;
        if ((uVar2 >> 0x18) + 4 + ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (uVar2 >> 8 & 0xff00) + arg2 <= puVar7)
        {
            return;
        }
    } while( true );
}


/* fcn.00011fd4 @ 0x11fd4 */

//WARNING: Variable defined which should be unmapped: var_3h
//WARNING: Removing unreachable block (ram,0x0001223e)

int64_t fcn.00011fd4(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t arg3;
    int64_t var_1eh;
    uint32_t var_67h;
    int8_t var_6fh;
    int32_t var_77h;
    ulong uStack_b8;
    uchar uStack_b0;
    ulong uStack_af;
    ushort uStack_a7;
    uchar uStack_a5;
    uchar uStack_62;
    int64_t var_59h;
    int8_t var_51h;
    int64_t var_50h;
    int16_t var_48h;
    int8_t var_46h;
    uchar auStack_41 [41];
    int64_t var_3h;
    
    iVar1 = *0x195f8;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x83) == 0) {
        *(arg1_00 + 0xa9) = 0;
    }
    else if (*(arg1_00 + 0xa9) == 0) {
        *(arg1_00 + 0xa9) = 2;
        (**(iVar1 + 0x168))(*0x195c0,0x8d,0);
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        iVar1 = fcn.000181c4(arg1_00,*0x195c0);
        if (-1 < iVar1) {
            (**(*0x195f8 + 0x168))(&uStack_b8,0x98,0);
            uStack_b0 = 1;
            uStack_b8 = 0xffffffffffffffff;
            uStack_af = 0xffffffffffffffff;
            uStack_a7 = 0x5ff;
            uStack_a5 = 8;
            (**(*0x195f8 + 0x160))(&uStack_62,"ReadLockEnabled",0x10);
            (**(*0x195f8 + 0x160))(auStack_41,"WriteLocked",0xc);
            iVar1 = fcn.00013dc0(arg1_00,*0x195c0,*0x195c8,*0x1ba38);
            if (-1 < iVar1) {
                (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                arg3 = *0x1ba38;
                iVar1 = fcn.00014cd8(arg1_00,*0x195c8,*0x1ba38,*0x195c0);
                if ((-1 < iVar1) && (iVar1 = fcn.000172ec(arg1_00,*0x195c8,arg3), -1 < iVar1)) {
                    (**(*0x195f8 + 0x168))(&uStack_62,0x21);
                    iVar1 = 0xb;
                    (**(*0x195f8 + 0x160))(&uStack_62,"ReadLocked");
                    uStack_a7 = CONCAT11(7,uStack_a7);
                    iVar1 = fcn.000172ec(arg1_00,*0x195c8,iVar1);
                }
                *(arg1_00 + 0xa9) = 2;
            }
            fcn.00017fd4(arg1_00,*0x195c0,*0x195c8,*0x1ba38);
            return iVar1;
        }
        *(arg1_00 + 0xa9) = 1;
    }
    return 0;
}


/* fcn.00017f08 @ 0x17f08 */

void fcn.00017f08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    
    if (arg4 != 0) {
        fcn.00010260(arg3,arg4);
    }
    uVar1 = *(arg1 + 0x42);
    iVar3 = arg3;
    iVar2 = fcn.00015658(arg1,arg3,arg4,arg2);
    if (-1 < iVar2) {
        iVar4 = uVar1 * 0x100;
        iVar3 = fcn.00013d74(arg1,CONCAT71(iVar3 >> 8,1),CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8)),arg3);
        if (-1 < iVar3) {
            if (arg4 != 0) {
                fcn.00010260(arg3,arg4);
            }
            iVar3 = arg3;
            iVar2 = fcn.00014cd8(arg1,arg3,arg4,arg2);
            if (-1 < iVar2) {
                fcn.00017430(arg3,iVar3,arg2);
            }
        }
    }
    return;
}


/* fcn.00018304 @ 0x18304 */

void fcn.00018304(int64_t arg1)

{
    uint16_t uVar1;
    int64_t arg4;
    int64_t extraout_RAX;
    uchar in_DL;
    unkbyte7 in_RDX;
    int iVar2;
    
    arg4 = *0x195c8;
    uVar1 = *(arg1 + 0x42);
    fcn.00016290(arg1,CONCAT71(in_RDX,in_DL),*0x195c8,*0x1ba38);
    if (-1 < extraout_RAX) {
        iVar2 = uVar1 * 0x100;
        fcn.00013d74(arg1,CONCAT71(in_RDX,1),CONCAT22(iVar2 >> 0x10,iVar2 + (uVar1 >> 8)),arg4);
    }
    return;
}


/* fcn.00016290 @ 0x16290 */

ulong fcn.00016290(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    char **arg3_00;
    uint32_t uVar5;
    int64_t iVar6;
    char *pcStackX_8;
    uchar in_stack_00000030;
    char **in_stack_00000038;
    char **in_stack_00000040;
    int64_t in_stack_00000048;
    int in_stack_00000058;
    char in_stack_00000060;
    char in_stack_00000068;
    
    pcVar4 = 0x1700000006000000;
    if (arg1 == 0) {
        return 0x8000000000000007;
    }
    uVar3 = arg4;
    if (in_stack_00000060 != '\0') {
        fcn.00014f1c(arg3,uVar3,*(arg1 + 0x42),*(arg1 + 0x7c));
        fcn.00014f94(arg3,uVar3,*(arg2 + 0x14),*(arg2 + 0x18));
        fcn.00015038(arg3,uVar3);
        if (*(arg1 + 0x3e) == 0x100) {
            pcVar4 = 0x700000006000000;
        }
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf8;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
        uVar5 = 8;
        pcStackX_8 = pcVar4;
        fcn.00015284(arg3,uVar3,&stack0x00000028,8);
        fcn.00015284(arg3,uVar3,&pcStackX_8,uVar5);
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
        if (*(arg1 + 0x3e) == 0x100) {
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
            if (*(arg1 + 0x3e) != 0x100) goto code_r0x00016419;
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
                goto code_r0x00016451;
            }
        }
        else {
code_r0x00016419:
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 1;
code_r0x00016451:
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
        }
        if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
            *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
            *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
            *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
        }
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg1 + 0x3e) == 0x100) {
        iVar6 = 0;
        cVar1 = *in_stack_00000038;
        while (cVar1 != '\0') {
            iVar6 = iVar6 + 1;
            cVar1 = *(iVar6 + in_stack_00000038);
        }
        fcn.00015284(arg3,uVar3,in_stack_00000038,iVar6);
    }
    else if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = in_stack_00000030;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (in_stack_00000058 == 0) {
        fcn.00015430(arg3,arg4,in_stack_00000040,in_stack_00000048);
    }
    else if (in_stack_00000058 == 1) {
code_r0x000165da:
        fcn.00015284(arg3,uVar3,in_stack_00000040,in_stack_00000048);
    }
    else {
        if (in_stack_00000058 == 2) {
            return 0x800000000000000e;
        }
        if (in_stack_00000058 == 3) {
code_r0x000165fa:
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
            arg3_00 = in_stack_00000040;
            iVar6 = in_stack_00000048;
            do {
                fcn.00015284(arg3,uVar3,arg3_00,1);
                arg3_00 = arg3_00 + 1;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            if (arg4 < *(arg3 + 0x10) + 1 + 0x14) goto code_r0x0001668f;
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        }
        else {
            if (in_stack_00000058 < 4) {
                return 0x800000000000000e;
            }
            if (in_stack_00000058 < 6) goto code_r0x000165da;
            if (in_stack_00000058 != 6) {
                if (in_stack_00000058 == 7) {
                    return 0x800000000000000e;
                }
                if (in_stack_00000058 != 8) {
                    return 0x800000000000000e;
                }
                goto code_r0x000165fa;
            }
            if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
                *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
                *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
                *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
                *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
            }
            uVar5 = 1;
            fcn.00015284(arg3,uVar3,in_stack_00000040,1);
            fcn.00015284(arg3,uVar3,in_stack_00000040 + 1,uVar5);
            if (arg4 < *(arg3 + 0x10) + 1 + 0x14) goto code_r0x0001668f;
            *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        }
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
code_r0x0001668f:
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (in_stack_00000068 == '\0') {
        return 0;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    uVar2 = *(arg3 + 0x10) + 1 + 0x14;
    if (*(arg1 + 0x3e) == 0x100) {
        if (arg4 < uVar2) goto code_r0x00016719;
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
    }
    else {
        if (arg4 < uVar2) goto code_r0x00016719;
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
    }
    *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
    *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
    *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
code_r0x00016719:
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf9;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015080(arg3);
    uVar3 = *(arg3 + 0x34);
    *(arg3 + 0x34) = (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
    uVar3 = *(arg3 + 0x28);
    *(arg3 + 0x28) = (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
    uVar3 = *(arg3 + 0x10);
    *(arg3 + 0x10) = (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
    return 0;
}


/* fcn.000133f8 @ 0x133f8 */

int64_t fcn.000133f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    int32_t var_1dh;
    
    (**(*0x195f8 + 0x168))(*arg2,0x21);
    iVar1 = (**(*0x195f8 + 0x40))(4,0x21,arg3);
    if (-1 < iVar1) {
        (**(*0x195f8 + 0x168))(*arg3,0x21,0);
        arg2 = *arg2;
        uVar3 = 0;
        do {
            *(uVar3 + arg2) = *(uVar3 + arg1);
            uVar4 = 0x21;
            if (*(uVar3 + arg1) == '\0') break;
            uVar2 = uVar3 + 1;
            uVar3 = uVar2;
        } while (uVar2 < 0x21);
        arg3 = *arg3;
        do {
            *((uVar4 - 0x21) + arg3) = *(uVar4 + arg1);
            if (*(uVar4 + arg1) == '\0') break;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x42);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00011b60 @ 0x11b60 */

int64_t fcn.00011b60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t arg4;
    int64_t iVar2;
    
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    **0x195c0 = 0xff00000000000000;
    (*0x195c0)[1] = 0x2ff000000000000;
    *(*0x195c0 + 2) = 1;
    *(*0x195c0 + 0x1c) = 0x200000005020000;
    arg4 = *0x1ba38;
    iVar2 = 0;
    cVar1 = *arg2;
    while (cVar1 != '\0') {
        iVar2 = iVar2 + 1;
        cVar1 = *(iVar2 + arg2);
    }
    *(*0x195c0 + 0x25) = iVar2;
    *(*0x195c0 + 0x2d) = arg2;
    *(*0x195c0 + 0x4d) = 0x100010009000000;
    *(*0x195c0 + 0x24) = 1;
    iVar2 = fcn.00017f08(arg1,*0x195c0,*0x195c8,arg4);
    if (-1 < iVar2) {
        iVar2 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg3);
        }
        iVar2 = fcn.00018304(arg1);
        if (-1 < iVar2) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar2 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
        }
        fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
    }
    return iVar2;
}


/* fcn.00013dc0 @ 0x13dc0 */

void fcn.00013dc0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t unaff_RSI;
    int iVar4;
    int64_t in_stack_00000020;
    
    uVar1 = *(arg1 + 0x42);
    iVar3 = arg3;
    iVar2 = fcn.000167f0(arg1,arg3,arg4,arg2,unaff_RSI,in_stack_00000020);
    if (-1 < iVar2) {
        iVar4 = uVar1 * 0x100;
        fcn.00013d74(arg1,CONCAT71(iVar3 >> 8,1),CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8)),arg3);
    }
    return;
}


/* fcn.000167f0 @ 0x167f0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.000167f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

{
    char cVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    char *pcVar4;
    char **ppcVar5;
    int64_t iVar6;
    ulong uStackX_8;
    ulong uStackX_10;
    char *pcStackX_18;
    char **in_stack_00000030;
    int32_t var_40h;
    int16_t var_44h;
    char *var_48h;
    int64_t var_50h;
    char *pcStack_68;
    char cStack_60;
    char *pcStack_58;
    char acStack_50 [8];
    char *pcStack_48;
    char acStack_40 [8];
    int64_t var_30h;
    int8_t var_28h;
    int64_t var_bp_20h;
    int16_t var_18h;
    int64_t var_10h;
    int32_t var_8h;
    
    uStackX_8._0_4_ = str.Table._0_4_;
    uStackX_8._4_2_ = str.Table._4_2_;
    pcVar4 = 0x1600000006000000;
    cStack_60 = str.startRow[8];
    uStackX_10._0_4_ = str.endRow._0_4_;
    uStackX_10._4_2_ = str.endRow._4_2_;
    pcStack_68 = str.startRow._0_8_;
    uStackX_10._6_1_ = str.endRow[6];
    acStack_40._0_4_ = str.startColumn._8_4_;
    acStack_50._0_2_ = str.endColumn._8_2_;
    pcStack_48 = str.startColumn._0_8_;
    pcStack_58 = str.endColumn._0_8_;
    uVar3 = arg3;
    fcn.00014f1c(arg2,uVar3,*(arg1 + 0x42),*(arg1 + 0x7c));
    fcn.00014f94(arg2,uVar3,*(arg4 + 0x14),*(arg4 + 0x18));
    fcn.00015038(arg2,uVar3);
    if (*(arg1 + 0x3e) == 0x100) {
        pcVar4 = 0x600000006000000;
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf8;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    iVar6 = 8;
    pcStackX_18 = pcVar4;
    fcn.00015284(arg2,uVar3,&stack0x00000028,8);
    fcn.00015284(arg2,uVar3,&pcStackX_18,iVar6);
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf0;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf0;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*in_stack_00000030 != 0xffffffffffffffff) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg1 + 0x3e) == 0x100) {
            fcn.00015284(arg2,uVar3,&uStackX_8,5);
            iVar6 = 8;
        }
        else if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar3,in_stack_00000030,iVar6);
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    ppcVar5 = in_stack_00000030 + 9;
    if (*ppcVar5 == 0xffffffffffffffff) goto code_r0x00016c18;
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(arg1 + 0x3e) == 0x100) {
        fcn.00015284(arg2,uVar3,&pcStack_68,iVar6);
    }
    else if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 1;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(in_stack_00000030 + 1) == '\0') {
        if (*(arg1 + 0x3e) == 0x100) {
            ppcVar5 = in_stack_00000030 + 0x14;
            iVar6 = 0;
            cVar1 = *ppcVar5;
            while (cVar1 != '\0') {
                iVar6 = iVar6 + 1;
                cVar1 = *(ppcVar5 + iVar6);
            }
            goto code_r0x00016ad8;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = *ppcVar5 & 0x3f;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    else {
code_r0x00016ad8:
        fcn.00015284(arg2,uVar3,ppcVar5,iVar6);
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(in_stack_00000030 + 1) == '\0') {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg1 + 0x3e) == 0x100) {
            fcn.00015284(arg2,uVar3,&uStackX_10,6);
            ppcVar5 = in_stack_00000030 + 0x35;
            iVar6 = 0;
            cVar1 = *ppcVar5;
            while (cVar1 != '\0') {
                iVar6 = iVar6 + 1;
                cVar1 = *(ppcVar5 + iVar6);
            }
            fcn.00015284(arg2,uVar3,ppcVar5,iVar6);
        }
        else {
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 2;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = *(in_stack_00000030 + 0x11) & 0x3f;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
code_r0x00016c18:
    if (*(in_stack_00000030 + 0x12) != -1) {
        uVar2 = *(arg2 + 0x10) + 1 + 0x14;
        if (*(arg1 + 0x3e) == 0x100) {
            if (uVar2 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            fcn.00015284(arg2,uVar3,&pcStack_48,0xb);
            ppcVar5 = in_stack_00000030 + 0x56;
            iVar6 = 0;
            cVar1 = *ppcVar5;
            while (cVar1 != '\0') {
                iVar6 = iVar6 + 1;
                cVar1 = *(ppcVar5 + iVar6);
            }
            fcn.00015284(arg2,uVar3,ppcVar5,iVar6);
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            fcn.00015284(arg2,uVar3,&pcStack_58,9);
            in_stack_00000030 = in_stack_00000030 + 0x77;
            iVar6 = 0;
            cVar1 = *in_stack_00000030;
            while (cVar1 != '\0') {
                iVar6 = iVar6 + 1;
                cVar1 = *(in_stack_00000030 + iVar6);
            }
            fcn.00015284(arg2,uVar3,in_stack_00000030,iVar6);
        }
        else {
            if (uVar2 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 3;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = *(in_stack_00000030 + 0x12) & 0x3f;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = 4;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
            if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
                *(*(arg2 + 0x34) + 0x38 + arg2) = *(in_stack_00000030 + 0x13) & 0x3f;
                *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
                *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
                *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
            }
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf1;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf1;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf9;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    fcn.00015080(arg2);
    uVar3 = *(arg2 + 0x34);
    *(arg2 + 0x34) = (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
    uVar3 = *(arg2 + 0x28);
    *(arg2 + 0x28) = (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
    uVar3 = *(arg2 + 0x10);
    *(arg2 + 0x10) = (uVar3 * 0x10000 + (uVar3 & 0xff00)) * 0x100 + (uVar3 >> 8 & 0xff00) + (uVar3 >> 0x18);
    return 0;
}


/* fcn.000172ec @ 0x172ec */

int64_t fcn.000172ec(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char *arg2_00;
    uint in_register_00000014;
    int64_t iVar1;
    uint8_t *arg1_00;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t in_R9;
    uint32_t auStackX_10 [2];
    uint64_t auStackX_18 [2];
    uint32_t *in_stack_00000028;
    uint8_t *in_stack_00000030;
    
    iVar1 = CONCAT44(in_register_00000014,arg2);
    iVar3 = -0x7ffffffffffffff9;
    if ((*(iVar1 + 0x38) == -0x10) && (arg2_00 = iVar1 + 0x39, *arg2_00 == -0x10)) {
        uVar2 = *(iVar1 + 0x34);
        auStackX_18[0] = 0;
        uVar2 = ((uVar2 >> 0x18) - 1) + (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100 + (uVar2 >> 8 & 0xff00);
        if ((arg1 != 0) && (iVar3 = fcn.00017030(arg1,arg2_00,uVar2,in_R9), -1 < iVar3)) {
            arg1_00 = arg2_00 + auStackX_18[0] + 1;
            if (0xef < *arg1_00) {
                auStackX_18[0] = CONCAT44(auStackX_18[0]._4_4_,1);
                iVar3 = fcn.00016f28(arg1_00,uVar2,CONCAT71(iVar3 >> 8,*arg1_00),auStackX_18);
                if (iVar3 < 0) {
                    return iVar3;
                }
                uVar2 = *in_stack_00000028;
                *in_stack_00000028 = auStackX_18[0];
                if (auStackX_18[0] <= uVar2) {
                    if ((auStackX_18[0] != 0) && (in_stack_00000030 != arg1_00)) {
                        fcn.00010280(in_stack_00000030,arg1_00,auStackX_18[0] & 0xffffffff);
                    }
                    return iVar3;
                }
                return -0x7ffffffffffffffb;
            }
            iVar3 = fcn.00015100(arg1_00,in_stack_00000030,in_stack_00000028,auStackX_10);
            if (iVar3 < 0) {
                return iVar3;
            }
            if (in_stack_00000030 != NULL) {
                *in_stack_00000028 = auStackX_10[0];
                return 0;
            }
        }
    }
    return iVar3;
}


/* fcn.00018108 @ 0x18108 */

void fcn.00018108(uint32_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    unkbyte7 Var3;
    int iVar4;
    
    Var3 = noname_1 >> 8;
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x42);
    iVar2 = fcn.00017638(CONCAT44(in_register_0000000c,arg1),noname_1,arg2,arg3);
    if (-1 < iVar2) {
        iVar4 = uVar1 * 0x100;
        fcn.00013d74(arg1,CONCAT71(Var3,1),CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8)),arg2);
    }
    return;
}


/* fcn.00017638 @ 0x17638 */

ulong fcn.00017638(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t arg4_00;
    int64_t iVar4;
    int64_t iVar3;
    int64_t in_stack_00000040;
    uint8_t in_stack_00000048;
    char *apcStack_18 [2];
    
    apcStack_18[0] = 0x100000000000000;
    uVar2 = arg4;
    fcn.00014f1c(arg3,uVar2,*(arg1 + 0x42),*(arg1 + 0x7c));
    fcn.00014f94(arg3,uVar2,*(arg2 + 0x14),*(arg2 + 0x18));
    fcn.00015038(arg3,uVar2);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf8;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    arg4_00 = 8;
    fcn.00015284(arg3,uVar2,apcStack_18,8);
    fcn.00015284(arg3,uVar2,&stack0x00000030,arg4_00);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015284(arg3,uVar2,&stack0x00000038,arg4_00);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg1 + 0x3e) == 0x100) {
        iVar4 = 0;
        do {
            iVar3 = iVar4 + 1;
            iVar1 = iVar4 + 1;
            iVar4 = iVar3;
        } while ("Challenge"[iVar1] != '\0');
        fcn.00015284(arg3,uVar2,"Challenge",iVar3);
    }
    else if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015430(arg3,arg4,in_stack_00000040,in_stack_00000048);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf9;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015080(arg3);
    uVar2 = *(arg3 + 0x34);
    *(arg3 + 0x34) = (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100 + (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18);
    uVar2 = *(arg3 + 0x28);
    *(arg3 + 0x28) = (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100 + (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18);
    uVar2 = *(arg3 + 0x10);
    *(arg3 + 0x10) = (uVar2 * 0x10000 + (uVar2 & 0xff00)) * 0x100 + (uVar2 >> 8 & 0xff00) + (uVar2 >> 0x18);
    return 0;
}


/* fcn.0001806c @ 0x1806c */

void fcn.0001806c(int64_t arg1)

{
    uint16_t uVar1;
    int64_t arg4;
    int64_t iVar2;
    int64_t iVar3;
    int64_t unaff_RBX;
    int32_t unaff_EBP;
    int64_t unaff_RDI;
    int iVar4;
    int64_t unaff_retaddr;
    
    arg4 = *0x195c8;
    uVar1 = *(arg1 + 0x42);
    iVar3 = *0x195c0;
    iVar2 = fcn.00015db8(arg1,*0x195c0,*0x195c8,*0x1ba38,unaff_RDI,unaff_retaddr,unaff_RBX,unaff_EBP);
    if (-1 < iVar2) {
        iVar4 = uVar1 * 0x100;
        fcn.00013d74(arg1,CONCAT71(iVar3 >> 8,1),CONCAT22(iVar4 >> 0x10,iVar4 + (uVar1 >> 8)),arg4);
    }
    return;
}


/* fcn.00015db8 @ 0x15db8 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.00015db8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h,
                  int64_t arg_60h,int32_t arg_68h)

{
    uint32_t uVar1;
    char *pcVar2;
    uint32_t arg4_00;
    uint auStackX_8 [2];
    char *pcStackX_10;
    int32_t var_30h;
    int64_t var_38h;
    uint uStack0000000000000040;
    uchar auStack_38 [16];
    int8_t var_10h;
    
    uStack0000000000000040 = 0x50c0000;
    auStackX_8[0] = 0xe040000;
    auStack_38[0] = 1;
    pcVar2 = 0x1700000006000000;
    uVar1 = arg4;
    fcn.00014f1c(arg3,uVar1,*(arg1 + 0x42),*(arg1 + 0x7c));
    fcn.00014f94(arg3,uVar1,*(arg2 + 0x14),*(arg2 + 0x18));
    fcn.00015038(arg3,uVar1);
    if (*(arg1 + 0x3e) == 0x100) {
        pcVar2 = 0x700000006000000;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf8;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    arg4_00 = 8;
    pcStackX_10 = pcVar2;
    fcn.00015284(arg3,uVar1,&var_30h,8);
    fcn.00015284(arg3,uVar1,&pcStackX_10,arg4_00);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf0;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015284(arg3,uVar1,&stack0x00000040,4);
    fcn.00015284(arg3,uVar1,&var_38h,8);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015284(arg3,uVar1,&stack0x00000040,4);
    fcn.00015284(arg3,uVar1,&stack0x00000038,8);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf2;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015284(arg3,uVar1,auStackX_8,4);
    fcn.00015284(arg3,uVar1,auStack_38,1);
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf3;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf1;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    if (*(arg3 + 0x10) + 1 + 0x14 <= arg4) {
        *(*(arg3 + 0x34) + 0x38 + arg3) = 0xf9;
        *(arg3 + 0x34) = *(arg3 + 0x34) + 1;
        *(arg3 + 0x28) = *(arg3 + 0x28) + 1;
        *(arg3 + 0x10) = *(arg3 + 0x10) + 1;
    }
    fcn.00015080(arg3);
    uVar1 = *(arg3 + 0x34);
    *(arg3 + 0x34) = (uVar1 * 0x10000 + (uVar1 & 0xff00)) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    uVar1 = *(arg3 + 0x28);
    *(arg3 + 0x28) = (uVar1 * 0x10000 + (uVar1 & 0xff00)) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    uVar1 = *(arg3 + 0x10);
    *(arg3 + 0x10) = (uVar1 * 0x10000 + (uVar1 & 0xff00)) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    return 0;
}


/* fcn.00013c18 @ 0x13c18 */

int64_t fcn.00013c18(uint32_t arg1,int64_t arg2,int64_t noname_2,int64_t arg3)

{
    int64_t iVar1;
    int64_t arg3_00;
    int32_t var_7fh;
    ulong uStack_b8;
    uchar uStack_b0;
    ulong uStack_af;
    ushort uStack_a7;
    uchar uStack_a5;
    int64_t var_59h;
    int8_t var_51h;
    int64_t var_50h;
    int16_t var_48h;
    int8_t var_46h;
    
    *arg3 = 0;
    iVar1 = fcn.000141b4(arg2,arg2,noname_2,CONCAT71(arg3 >> 8,1));
    if (-1 < iVar1) {
        (**(*0x195f8 + 0x168))(&uStack_b8,0x98,0);
        uStack_b8 = 0xffffffffffffffff;
        uStack_af = 0xffffffffffffffff;
        uStack_b0 = 1;
        uStack_a7 = 0x5ff;
        uStack_a5 = 5;
        iVar1 = fcn.00013dc0(arg2,*0x195c0,*0x195c8,*0x1ba38);
        if (-1 < iVar1) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            arg3_00 = *0x1ba38;
            iVar1 = fcn.00014cd8(arg2,*0x195c8,*0x1ba38,*0x195c0);
            if (-1 < iVar1) {
                iVar1 = fcn.000172ec(arg2,*0x195c8,arg3_00);
                if ((-1 < iVar1) && (arg1 != '\0')) {
                    *arg3 = 1;
                }
            }
        }
        fcn.00017fd4(arg2,*0x195c0,*0x195c8,*0x1ba38);
    }
    return iVar1;
}


/* fcn.000141b4 @ 0x141b4 */

void fcn.000141b4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    ulong *arg4;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int iVar7;
    
    arg4 = *0x195c0;
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    *(arg4 + 2) = 1;
    *arg4 = 0xff00000000000000;
    arg4[1] = 0x2ff000000000000;
    *(arg4 + 0x1c) = 0x200000005020000;
    iVar6 = *0x1ba38;
    iVar3 = 0;
    cVar1 = *arg2;
    while (cVar1 != '\0') {
        iVar3 = iVar3 + 1;
        cVar1 = *(iVar3 + arg2);
    }
    *(arg4 + 0x25) = iVar3;
    *(arg4 + 0x2d) = arg2;
    *(arg4 + 0x24) = 1;
    *(arg4 + 0x4d) = (-(arg3 != '\0') & 0xfffffe0000000000) + 0x100030009000000;
    iVar3 = *0x195c8;
    if (iVar6 != 0) {
        fcn.00010260(*0x195c8,iVar6);
    }
    uVar2 = *(arg1 + 0x42);
    iVar5 = iVar3;
    iVar4 = fcn.00015658(arg1,iVar3,iVar6,arg4);
    if ((-1 < iVar4) &&
       (iVar7 = uVar2 * 0x100,
       iVar5 = fcn.00013d74(arg1,CONCAT71(iVar5 >> 8,1),CONCAT22(iVar7 >> 0x10,iVar7 + (uVar2 >> 8)),iVar3),
       -1 < iVar5)) {
        if (iVar6 != 0) {
            fcn.00010260(iVar3,iVar6);
        }
        iVar5 = iVar3;
        iVar6 = fcn.00014cd8(arg1,iVar3,iVar6,arg4);
        if (-1 < iVar6) {
            fcn.00017430(iVar3,iVar5,arg4);
        }
    }
    return;
}


/* fcn.000134b8 @ 0x134b8 */

int64_t fcn.000134b8(int64_t arg1,int64_t arg2,int64_t noname_2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    
    iVar2 = fcn.000141b4(arg2,arg2,noname_2,CONCAT71(arg3 >> 8,1));
    if (-1 < iVar2) {
        iVar2 = fcn.00018304(arg2);
        if (-1 < iVar2) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar2 = fcn.00014cd8(arg2,*0x195c8,*0x1ba38,*0x195c0);
            if (-1 < iVar2) {
                iVar2 = 0;
                cVar1 = *arg3;
                while (cVar1 != '\0') {
                    iVar2 = iVar2 + 1;
                    cVar1 = *(iVar2 + arg3);
                }
                iVar2 = fcn.00018304(arg2);
                if (-1 < iVar2) {
                    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
                    iVar2 = fcn.00014cd8(arg2,*0x195c8,*0x1ba38,*0x195c0);
                    if (-1 < iVar2) {
                        *(arg2 + 0x1a) = 1;
                    }
                }
            }
        }
        fcn.00017fd4(arg2,*0x195c0,*0x195c8,*0x1ba38);
    }
    return iVar2;
}


/* fcn.00013670 @ 0x13670 */

int64_t fcn.00013670(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    
    uVar4 = 0;
    iVar3 = arg2;
    iVar2 = fcn.000141b4(arg2,arg2,arg3,0);
    if ((-1 < iVar2) || (iVar3 = fcn.000141b4(arg2,iVar3,arg3,CONCAT71(uVar4 >> 8,1)), -1 < iVar3)) {
        iVar3 = 0;
        cVar1 = *arg4;
        while (cVar1 != '\0') {
            iVar3 = iVar3 + 1;
            cVar1 = *(iVar3 + arg4);
        }
        iVar3 = fcn.00018304(arg2);
        if (-1 < iVar3) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            iVar3 = fcn.00014cd8(arg2,*0x195c8,*0x1ba38,*0x195c0);
        }
        fcn.00017fd4(arg2,*0x195c0,*0x195c8,*0x1ba38);
    }
    return iVar3;
}


/* fcn.00014418 @ 0x14418 */

int64_t fcn.00014418(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    ulong uStack_a8;
    uchar uStack_a0;
    ulong uStack_9f;
    uchar uStack_97;
    ushort uStack_96;
    
    (**(*0x195f8 + 0x168))(*0x195c0,0x8d,0);
    (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
    iVar1 = *0x1ba38;
    **0x195c0 = 0xff00000000000000;
    (*0x195c0)[1] = 0x2ff000000000000;
    *(*0x195c0 + 2) = 1;
    *(*0x195c0 + 0x1c) = 0x100000005020000;
    *(*0x195c0 + 0x4d) = 0x100000009000000;
    *(*0x195c0 + 0x24) = 1;
    iVar1 = fcn.00017f08(arg1,*0x195c0,*0x195c8,iVar1);
    if (-1 < iVar1) {
        (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
        (**(*0x195f8 + 0x168))(&uStack_a8,0x98,0);
        uStack_a8 = 0xffffffffffffffff;
        uStack_9f = 0xffffffffffffffff;
        uStack_96 = 0x101;
        uStack_a0 = 1;
        uStack_97 = 0xff;
        iVar1 = fcn.00013dc0(arg1,*0x195c0,*0x195c8,*0x1ba38);
        if (-1 < iVar1) {
            (**(*0x195f8 + 0x168))(*0x195c8,*0x1ba38,0);
            arg3 = *0x1ba38;
            iVar1 = fcn.00014cd8(arg1,*0x195c8,*0x1ba38,*0x195c0);
            if (-1 < iVar1) {
                iVar1 = fcn.000172ec(arg1,*0x195c8,arg3);
            }
        }
    }
    fcn.00017fd4(arg1,*0x195c0,*0x195c8,*0x1ba38);
    return iVar1;
}


/* fcn.00014640 @ 0x14640 */

int fcn.00014640(int64_t arg1)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    bool bVar7;
    int64_t var_10h;
    int64_t var_30h;
    int16_t var_28h;
    int16_t var_26h;
    int16_t var_24h;
    int16_t var_22h;
    int64_t var_20h;
    
    uVar1 = *(arg1 + 0x58);
    uVar2 = *(arg1 + 0x60);
    var_10h._0_1_ = -1;
    uVar3 = *(arg1 + 0x68);
    iVar6 = fcn.00014418(arg1,&var_10h);
    if ((iVar6 < 0) || (var_10h == -1)) {
code_r0x00014700:
        iVar5 = -1;
    }
    else {
        if (var_10h == '\0') {
            var_28h = uVar2;
            uVar4 = var_28h;
            if (var_28h == 0) goto code_r0x00014700;
            bVar7 = (uVar1 & 0x100000000000000) == 0;
        }
        else if (var_10h == '\x01') {
            var_26h = uVar2 >> 0x10;
            uVar4 = var_26h;
            if (var_26h == 0) goto code_r0x00014700;
            bVar7 = (uVar1 & 0x200000000000000) == 0;
        }
        else if (var_10h == '\x02') {
            var_24h = uVar2 >> 0x20;
            uVar4 = var_24h;
            if (var_24h == 0) goto code_r0x00014700;
            bVar7 = (uVar1 & 0x400000000000000) == 0;
        }
        else if (var_10h == '\x03') {
            var_22h = uVar2 >> 0x30;
            uVar4 = var_22h;
            if (var_22h == 0) goto code_r0x00014700;
            bVar7 = (uVar1 & 0x800000000000000) == 0;
        }
        else if (var_10h == '\x04') {
            var_20h._0_2_ = uVar3;
            uVar4 = var_20h;
            if (var_20h == 0) goto code_r0x00014700;
            bVar7 = (uVar1 & 0x1000000000000000) == 0;
        }
        else {
            if ((var_10h != '\x05') || (var_20h._2_2_ = uVar3 >> 0x10, uVar4 = var_20h._2_2_, var_20h._2_2_ == 0))
            goto code_r0x00014700;
            bVar7 = (uVar1 & 0x2000000000000000) == 0;
        }
        if (bVar7) {
            iVar5 = uVar4 * 2;
        }
        else {
            iVar5 = uVar4 * 0x78;
        }
    }
    return iVar5;
}


/* fcn.00014e00 @ 0x14e00 */

ulong fcn.00014e00(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    ulong *puVar3;
    ulong uStackX_8;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0xff00000000000000;
    puVar3 = CONCAT44(in_register_0000000c,arg1) + 0x3a;
    uStackX_8 = 0x6ff000000000000;
    if (puVar3 == auStackX_10) {
code_r0x00014e58:
        puVar3 = CONCAT44(in_register_0000000c,arg1) + 0x43;
        if (puVar3 != &uStackX_8) {
            iVar1 = fcn.000102c0(puVar3,&uStackX_8,8);
            if (iVar1 != 0) goto code_r0x00014e4c;
        }
        uVar2 = 0;
    }
    else {
        iVar1 = fcn.000102c0(puVar3,auStackX_10,8);
        if (iVar1 == 0) goto code_r0x00014e58;
code_r0x00014e4c:
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.00019248 @ 0x19248 */

void fcn.00019248(int64_t arg1)

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
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00014e84 @ 0x14e84 */

ulong fcn.00014e84(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar4 = *(arg1 + 0x34);
    uVar4 = ((uVar4 & 0xff00) + uVar4 * 0x10000) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    if (*(arg1 + 0x38) == -6) {
        return 0;
    }
    if (uVar4 != 0) {
        uVar2 = 1;
        if (1 < uVar4) {
            uVar3 = 1;
            do {
                if (*((uVar4 - uVar3) + 0x38 + arg1) != -1) break;
                uVar2 = uVar2 + 1;
                uVar3 = uVar2;
            } while (uVar3 < uVar4);
        }
        uVar4 = uVar4 - uVar2;
        if (((*((uVar4 - 4) + 0x38 + arg1) == -0x10) && (*(uVar4 + 0x38 + arg1) == -0xf)) &&
           (cVar1 = *((uVar4 - 3) + 0x38 + arg1), *arg2 = cVar1, cVar1 == '\0')) {
            return 0;
        }
    }
    return 0x8000000000000007;
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


/* fcn.00015284 @ 0x15284 */

uint64_t fcn.00015284(int64_t arg1,uint32_t arg2,char **arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uchar uVar2;
    char cVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint in_register_00000014;
    uint64_t uVar6;
    int iVar7;
    uint in_R9;
    uint64_t uVar8;
    char in_stack_00000030;
    
    uVar6 = CONCAT44(in_register_00000014,arg2);
    uVar1 = *(arg1 + 0x34);
    uVar8 = 0;
    if (CONCAT44(in_R9,arg4) == 1) {
        if ((*arg3 < 0x40) && (in_stack_00000030 == '\0')) {
            if (uVar6 < *(arg1 + 0x10) + 1 + 0x14) {
                uVar8 = 0x8000000000000005;
            }
            else {
                *(*(arg1 + 0x34) + 0x38 + arg1) = *arg3;
                *(arg1 + 0x34) = *(arg1 + 0x34) + 1;
                *(arg1 + 0x28) = *(arg1 + 0x28) + 1;
                *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
            }
            return uVar8;
        }
    }
    else if (0xf < CONCAT44(in_R9,arg4)) {
        uVar4 = arg4 >> 8;
        if (CONCAT44(in_R9,arg4) < 0x800) {
            if (uVar6 < CONCAT44(in_R9,arg4) + 0x16 + *(arg1 + 0x10)) {
                return 0x8000000000000005;
            }
            iVar7 = 2;
            cVar3 = (uVar4 & 7) + (in_stack_00000030 + '\f') * '\x10';
            uVar5 = uVar1 + 1;
        }
        else {
            if (0xffffff < CONCAT44(in_R9,arg4)) {
                return 0x8000000000000002;
            }
            if (uVar6 < CONCAT44(in_R9,arg4) + 0x18 + *(arg1 + 0x10)) {
                return 0x8000000000000005;
            }
            *(uVar1 + 1 + 0x38 + arg1) = arg4 >> 0x10;
            cVar3 = in_stack_00000030 * '\x02' + -0x20;
            iVar7 = 4;
            *(uVar1 + 2 + 0x38 + arg1) = uVar4;
            uVar5 = uVar1 + 3;
        }
        *(uVar5 + 0x38 + arg1) = arg4;
        goto code_r0x000153b9;
    }
    if (uVar6 < CONCAT44(in_R9,arg4) + 0x15 + *(arg1 + 0x10)) {
        return 0x8000000000000005;
    }
    cVar3 = (in_stack_00000030 + '\x04') * ' ' + (arg4 & 0xf);
    iVar7 = 1;
code_r0x000153b9:
    *(uVar1 + 0x38 + arg1) = cVar3;
    if (CONCAT44(in_R9,arg4) != 0) {
        uVar5 = iVar7 + uVar1;
        do {
            if (in_stack_00000030 == '\0') {
                uVar2 = *(arg3 + CONCAT44(in_R9,arg4) + (-1 - uVar8));
            }
            else {
                uVar2 = *(uVar8 + arg3);
            }
            *(uVar5 + 0x38 + arg1) = uVar2;
            uVar5 = uVar5 + 1;
            uVar8 = uVar5 - (iVar7 + uVar1);
        } while (uVar8 < CONCAT44(in_R9,arg4));
    }
    *(arg1 + 0x34) = *(arg1 + 0x34) + arg4 + iVar7;
    *(arg1 + 0x28) = *(arg1 + 0x28) + arg4 + iVar7;
    *(arg1 + 0x10) = *(arg1 + 0x10) + arg4 + iVar7;
    return 0;
}


/* fcn.00014f1c @ 0x14f1c */

ulong fcn.00014f1c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_00000014,arg2) < 0x15) {
        uVar1 = 0x8000000000000005;
    }
    else {
        fcn.00010260(arg1,0x15);
        *(arg1 + 4) = arg3 * 0x100 + (arg3 >> 8);
        *(arg1 + 6) = arg4 * 0x100 + (arg4 >> 8);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014f94 @ 0x14f94 */

ulong fcn.00014f94(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint in_register_00000014;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar3 = arg4;
    uVar2 = arg3;
    if (CONCAT44(in_register_00000014,arg2) < 0x2d) {
        uVar1 = 0x8000000000000005;
    }
    else {
        fcn.00010260(arg1 + 0x14,0x19);
        *(arg1 + 0x1c) = 0;
        *(arg1 + 0x14) = ((uVar2 & 0xff00) + uVar2 * 0x10000) * 0x100 + (arg3 >> 8 & 0xff00) + (uVar2 >> 0x18);
        *(arg1 + 0x18) = ((uVar3 & 0xff00) + uVar3 * 0x10000) * 0x100 + (arg4 >> 8 & 0xff00) + (uVar3 >> 0x18);
        uVar1 = 0;
        *(arg1 + 0x10) = 0x18;
    }
    return uVar1;
}


/* fcn.00015038 @ 0x15038 */

ulong fcn.00015038(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint in_register_00000014;
    
    if (CONCAT44(in_register_00000014,arg2) < 0x39) {
        uVar1 = 0x8000000000000005;
    }
    else {
        fcn.00010260(arg1 + 0x2c,0xd);
        uVar1 = 0;
        *(arg1 + 0x32) = 0;
        *(arg1 + 0x28) = *(arg1 + 0x28) + 0xc;
        *(arg1 + 0x10) = *(arg1 + 0x10) + 0xc;
    }
    return uVar1;
}


/* fcn.00015080 @ 0x15080 */

ulong fcn.00015080(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    
    uVar1 = *(arg1 + 0x34);
    *(uVar1 + 0x38 + arg1) = 0xf0;
    *(uVar1 + 1 + 0x38 + arg1) = 0;
    *(uVar1 + 2 + 0x38 + arg1) = 0;
    *(uVar1 + 3 + 0x38 + arg1) = 0;
    *(uVar1 + 4 + 0x38 + arg1) = 0xf1;
    *(arg1 + 0x34) = *(arg1 + 0x34) + 5;
    *(arg1 + 0x28) = *(arg1 + 0x28) + 5;
    *(arg1 + 0x10) = *(arg1 + 0x10) + 5;
    uVar2 = *(arg1 + 0x34) & 3;
    uVar3 = 4 - uVar2;
    if (uVar2 == 0) {
        uVar3 = 0;
    }
    uVar2 = 0;
    if (uVar3 != 0) {
        do {
            uVar4 = uVar2 + 1;
            *(uVar2 + *(arg1 + 0x34) + 0x38 + arg1) = 0;
            uVar2 = uVar4;
        } while (uVar4 < uVar3);
    }
    *(arg1 + 0x28) = *(arg1 + 0x28) + uVar3;
    *(arg1 + 0x10) = *(arg1 + 0x10) + uVar3;
    return 0;
}


/* fcn.00015430 @ 0x15430 */

int64_t fcn.00015430(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int64_t iVar2;
    uchar *puVar3;
    uint64_t uVar4;
    char **appcStack_18 [2];
    
    iVar2 = (**(*0x195f8 + 0x40))(4,arg4,appcStack_18);
    uVar4 = 0;
    if (-1 < iVar2) {
        if (arg4 != 0) {
            puVar3 = arg4 + -1 + arg3;
            do {
                uVar1 = *puVar3;
                puVar3 = puVar3 + -1;
                *(uVar4 + appcStack_18[0]) = uVar1;
                uVar4 = uVar4 + 1;
            } while (uVar4 < arg4);
        }
        fcn.00015284(arg1,arg2,appcStack_18[0],arg4);
        (**(*0x195f8 + 0x48))(appcStack_18[0]);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00016f28 @ 0x16f28 */

int64_t fcn.00016f28(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *arg1_00;
    uint8_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint8_t *puVar4;
    uint64_t uVar5;
    uint32_t uStack_18;
    uint32_t auStack_14 [3];
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    uStack_18 = 0;
    auStack_14[0] = 1;
    if (((*puVar4 < 0xf0) || ((*puVar4 & 1) == 0)) && (uVar5 = 1, 1 < arg2)) {
        auStack_14[2] = (arg3 & 0xff) + 1;
        do {
            arg1_00 = puVar4 + uVar5;
            uVar1 = *arg1_00;
            if (uVar1 == auStack_14[2]) {
                *arg4 = *arg4 + 1;
                iVar3 = 0;
                goto code_r0x0001701a;
            }
            if ((uVar1 < 0xf0) || ((uVar1 & 1) != 0)) {
                auStack_14[1] = 0;
                arg3 = auStack_14 + 1;
                iVar3 = fcn.00015100(arg1_00,0,arg3,&uStack_18);
                if (iVar3 != -0x7ffffffffffffffb) {
                    return iVar3;
                }
                *arg4 = *arg4 + uStack_18;
                uVar2 = uStack_18;
            }
            else {
                arg3 = CONCAT71(arg3 >> 8,uVar1);
                iVar3 = fcn.00016f28(arg1_00,arg2 - uVar5,arg3,auStack_14);
                if (iVar3 < 0) {
                    return iVar3;
                }
                *arg4 = *arg4 + auStack_14[0];
                uVar2 = auStack_14[0];
            }
            uVar5 = uVar5 + uVar2;
        } while (uVar5 < arg2);
    }
    iVar3 = -0x7ffffffffffffff2;
code_r0x0001701a:
    return iVar3;
}


/* fcn.00015100 @ 0x15100 */

uint64_t fcn.00015100(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    uint64_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint8_t *in_stack_00000028;
    
    uVar5 = 0;
    uVar1 = *arg1;
    *arg4 = 0;
    *in_stack_00000028 = 0;
    if (uVar1 < '\0') {
        bVar4 = false;
        if ((uVar1 & 0xc0) == 0x80) {
            *in_stack_00000028 = 1;
            *arg4 = uVar1 & 0xf;
            bVar4 = false;
            if ((uVar1 & 0x20) == 0) {
                bVar4 = true;
            }
        }
        if ((uVar1 & 0xe0) == 0xc0) {
            uVar2 = *(arg1 + 1);
            *in_stack_00000028 = 2;
            *arg4 = (uVar1 & 7) * 0x100 + uVar2;
            if ((uVar1 & 0x10) == 0) {
                bVar4 = true;
            }
        }
        if ((uVar1 & 0xfc) == 0xe0) {
            uVar1 = *(arg1 + 1);
            uVar2 = *(arg1 + 2);
            *in_stack_00000028 = 4;
            *arg4 = uVar1 * 0x10000 + uVar2 * 0x100 + *(arg1 + 3);
        }
        uVar3 = *arg4;
        if (uVar3 != 0) {
            if (arg2 != 0) {
                if (uVar3 <= *arg3) {
                    if (*arg3 != 0) {
                        fcn.00010260(arg2,*arg3);
                    }
                    uVar3 = *arg4;
                    if (uVar3 != 0) {
                        uVar8 = *in_stack_00000028;
                        do {
                            iVar6 = uVar5;
                            if (bVar4) {
                                uVar5 = (uVar3 - iVar6) - 1;
                            }
                            uVar7 = iVar6 + 1;
                            *(uVar5 + arg2) = *(uVar8 + arg1);
                            uVar8 = uVar8 + 1;
                            uVar5 = uVar7;
                        } while (uVar7 < uVar3);
                        return 0;
                    }
                    return 0;
                }
                uVar5 = 0x8000000000000005;
            }
            *arg3 = uVar3;
            return uVar5;
        }
    }
    else {
        *arg4 = 1;
        if (*arg3 == 0) {
            *arg3 = 1;
            return 0x8000000000000005;
        }
        if (arg2 != 0) {
            *arg2 = uVar1 & 0x3f;
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00017030 @ 0x17030 */

ulong fcn.00017030(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint64_t uVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    char *pcVar6;
    char *pcVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t *arg3_00;
    uint64_t uVar10;
    uint32_t auStackX_18 [2];
    int64_t iStackX_20;
    uint64_t *in_stack_00000028;
    int8_t var_5fh;
    int8_t var_6fh;
    uint32_t uStack_d8;
    uint32_t uStack_d4;
    uint32_t uStack_d0;
    uint32_t uStack_cc;
    char acStack_c8 [67];
    int32_t var_7dh;
    int64_t var_79h;
    int64_t var_71h;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uStack_d8 = 0;
    uStack_d4 = 0;
    uVar9 = *(iVar5 + 0x3e) == 0x100;
    arg3_00 = arg3;
    iStackX_20 = arg4;
joined_r0x00017089:
    do {
        uVar8 = uVar9 + 1;
        uVar2 = uVar8;
        if (arg3 <= uVar2) {
            return 0x8000000000000007;
        }
        if (*(iVar5 + 0x3e) == 0x100) {
            if (*(uVar2 + arg2) == -0xe) {
                uStack_d0 = 0;
                uStack_cc = 0x81;
                auStackX_18[0] = auStackX_18[0] & 0xffffff00;
                fcn.00010260(acStack_c8,0x81);
                arg3_00 = &uStack_cc;
                iVar4 = fcn.00015100(arg2 + 1 + uVar2,acStack_c8,arg3_00,&uStack_d0);
                if (-1 < iVar4) {
                    pcVar7 = arg4 + 0x56;
                    pcVar6 = acStack_c8;
                    cVar3 = acStack_c8[0];
                    while ((cVar3 != '\0' && (cVar3 == *pcVar7))) {
                        pcVar6 = pcVar6 + 1;
                        pcVar7 = pcVar7 + 1;
                        cVar3 = *pcVar6;
                    }
                    if (*pcVar6 == *pcVar7) goto code_r0x00017280;
                }
            }
        }
        else if ((*(uVar2 + arg2) == -0xe) && (*(uVar9 + 2 + arg2) == *(arg4 + 0x12))) {
code_r0x00017280:
            if (*(iVar5 + 0x3e) == 0x100) {
                iVar5 = fcn.00015100(uVar8 + 1 + arg2,0,&uStack_d4,&uStack_d8);
                if (iVar5 == -0x7ffffffffffffff9) {
                    return 0x8000000000000007;
                }
                uVar8 = uVar8 + uStack_d8;
            }
            else {
                uVar8 = uVar9 + 2;
            }
            *in_stack_00000028 = uVar8;
            return 0;
        }
        uVar1 = *(uVar9 + 3 + arg2);
        arg3_00 = CONCAT71(arg3_00 >> 8,uVar1);
        if (0xef < uVar1) {
            auStackX_18[0] = 1;
            iVar4 = fcn.00016f28(arg2 + 2 + uVar8,(arg3 - uVar2) + -1,arg3_00,auStackX_18);
            if (iVar4 < 0) {
                return 0x8000000000000007;
            }
            if (auStackX_18[0] == 0) {
                return 0x8000000000000007;
            }
            uVar8 = uVar9 + 3;
            uVar9 = auStackX_18[0];
code_r0x00017266:
            uVar9 = uVar8 + uVar9;
            goto joined_r0x00017089;
        }
        arg3_00 = &uStack_d4;
        if (*(iVar5 + 0x3e) != 0x100) {
            iVar4 = fcn.00015100(arg2 + 2 + uVar2,0,arg3_00,&uStack_d8);
            if (iVar4 == -0x7ffffffffffffff9) {
                return 0x8000000000000007;
            }
            if (*(uStack_d8 + uVar2 + 2 + arg2) != -0xd) {
                return 0x8000000000000007;
            }
            uVar9 = uStack_d8 + 2;
            goto code_r0x00017266;
        }
        iVar4 = fcn.00015100(arg2 + 1 + uVar2,0,arg3_00,&uStack_d8);
        if (iVar4 == -0x7ffffffffffffff9) {
            return 0x8000000000000007;
        }
        uVar10 = uStack_d8;
        uStack_d0 = 0;
        auStackX_18[0] = auStackX_18[0] & 0xffffff00;
        iVar4 = fcn.00015100(arg2 + 1 + uVar10 + uVar2,0,&uStack_d4,&uStack_d0);
        arg3_00 = 0x8000000000000007;
        if ((iVar4 == -0x7ffffffffffffff9) || (*(auStackX_18[0] + uVar10 + uStack_d0 + uVar2 + 1 + arg2) != -0xd)) {
            return 0x8000000000000007;
        }
        uVar9 = uVar8 + (auStackX_18[0] & 0xff) + uStack_d0 + 1 + uStack_d8;
        arg4 = iStackX_20;
    } while( true );
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00015658 @ 0x15658 */

ulong fcn.00015658(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t arg4_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar5;
    int64_t iVar4;
    ulong uVar6;
    
    uVar1 = arg3;
    fcn.00014f1c(arg2,uVar1,*(arg1 + 0x42),*(arg1 + 0x7c));
    fcn.00014f94(arg2,uVar1,*(arg4 + 0x14),*(arg4 + 0x18));
    fcn.00015038(arg2,uVar1);
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf8;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    arg4_00 = 8;
    fcn.00015284(arg2,uVar1,arg4,8);
    fcn.00015284(arg2,uVar1,arg4 + 8,arg4_00);
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf0;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = *(arg4 + 0x10) & 0x3f;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    fcn.00015284(arg2,uVar1,arg4 + 0x1c,arg4_00);
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = *(arg4 + 0x24) & 0x3f;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    iVar5 = 0;
    if (*(arg4 + 0x2d) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg1 + 0x3e) == 0x100) {
            iVar3 = iVar5;
            do {
                iVar2 = iVar3 + 1;
                iVar4 = iVar3 + 1;
                iVar3 = iVar2;
            } while ("Challenge"[iVar4] != '\0');
            fcn.00015284(arg2,uVar1,"Challenge",iVar2);
        }
        else if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015430(arg2,arg3,*(arg4 + 0x2d),*(arg4 + 0x25));
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x35) != NULL) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 1;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,arg4 + 0x35,8);
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x45) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,*(arg4 + 0x45),*(arg4 + 0x3d));
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x4d) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg1 + 0x3e) == 0x100) {
            iVar3 = iVar5;
            do {
                iVar2 = iVar3 + 1;
                iVar4 = iVar3 + 1;
                iVar3 = iVar2;
            } while ("HostSigningAuthority"[iVar4] != '\0');
            fcn.00015284(arg2,uVar1,"HostSigningAuthority",iVar2);
        }
        else if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,arg4 + 0x4d,8);
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x5d) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 4;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,*(arg4 + 0x5d),*(arg4 + 0x55));
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x65) == 0) {
        uVar6 = 8;
    }
    else {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg1 + 0x3e) == 0x100) {
            do {
                iVar4 = iVar5 + 1;
                iVar3 = iVar5 + 1;
                iVar5 = iVar4;
            } while ("SessionTimeout"[iVar3] != '\0');
            fcn.00015284(arg2,uVar1,"SessionTimeout",iVar4);
        }
        else if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 5;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        uVar6 = 8;
        fcn.00015284(arg2,uVar1,*(arg4 + 0x65),8);
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x6d) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 6;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,*(arg4 + 0x6d),uVar6);
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x75) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 7;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,*(arg4 + 0x75),uVar6);
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg4 + 0x85) != 0) {
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf2;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = uVar6;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
        fcn.00015284(arg2,uVar1,*(arg4 + 0x85),*(arg4 + 0x7d));
        if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
            *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf3;
            *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
            *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
            *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
        }
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf1;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xf9;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    fcn.00015080(arg2);
    uVar1 = *(arg2 + 0x34);
    *(arg2 + 0x34) = (uVar1 * 0x10000 + (uVar1 & 0xff00)) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    uVar1 = *(arg2 + 0x28);
    *(arg2 + 0x28) = (uVar1 * 0x10000 + (uVar1 & 0xff00)) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    uVar1 = *(arg2 + 0x10);
    *(arg2 + 0x10) = (uVar1 * 0x10000 + (uVar1 & 0xff00)) * 0x100 + (uVar1 >> 8 & 0xff00) + (uVar1 >> 0x18);
    return 0;
}


/* fcn.00017430 @ 0x17430 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.00017430(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t auStackX_8 [2];
    uint64_t uStackX_10;
    uint auStackX_20 [2];
    uint32_t var_30h;
    int32_t var_48h;
    int64_t aiStack_48 [4];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    uVar5 = *(arg1 + 0x34);
    uVar3 = 0;
    uStackX_10 = arg2 & 0xffffffffffffff00;
    auStackX_8[0] = (uVar5 * 0x10000 + (uVar5 & 0xff00)) * 0x100 + (uVar5 >> 8 & 0xff00) + (uVar5 >> 0x18);
    uVar5 = 1;
    aiStack_48[1] = 0xff00000000000000;
    aiStack_48[2] = 0x3ff000000000000;
    auStackX_20[0] = 0x100;
    if (1 < auStackX_8[0]) {
        do {
            if (*((auStackX_8[0] - uVar5) + 0x38 + arg1) != -1) break;
            uVar5 = uVar5 + 1;
        } while (uVar5 < auStackX_8[0]);
    }
    uVar4 = (auStackX_8[0] - uVar5) - 4;
    uVar1 = (**(*0x195f8 + 0x40))(4,0x100,aiStack_48);
    if (uVar1 < 0) {
        return uVar1;
    }
    if (((arg1 + 0x3a == aiStack_48 + 1) || (iVar2 = fcn.000102c0(arg1 + 0x3a,aiStack_48 + 1,8), iVar2 == 0)) &&
       ((arg1 + 0x43 == aiStack_48 + 2 || (iVar2 = fcn.000102c0(arg1 + 0x43,aiStack_48 + 2,8), iVar2 == 0)))) {
        if ((((*(uVar4 + 0x38 + arg1) == -0x10) && (*(uVar4 + 0x3c + arg1) == -0xf)) && (*(uVar4 + 0x39 + arg1) == '\0')
            ) && ((*(uVar4 + 0x3a + arg1) == '\0' && (*(uVar4 + 0x3b + arg1) == '\0')))) {
            if (*(arg1 + 0x4b) != -0x10) goto code_r0x000174fb;
            uVar1 = fcn.00015100(arg1 + 0x4c,aiStack_48[0],auStackX_20,auStackX_8);
            if (uVar1 < 0) {
                return uVar1;
            }
            *(arg3 + 0x18) = 0;
            uVar1 = uVar3;
            if (auStackX_8[0] != 0) {
                do {
                    if (3 < uVar1) break;
                    uVar5 = uVar1 + 1;
                    *(uVar1 + 0x18 + arg3) = *(uVar1 + aiStack_48[0]);
                    uVar1 = uVar5;
                } while (uVar5 < auStackX_8[0]);
            }
            uVar1 = fcn.00015100(auStackX_8[0] + 0x14 + uStackX_10 + 0x38 + arg1,aiStack_48[0],auStackX_20,auStackX_8
                                );
            if (uVar1 < 0) {
                return uVar1;
            }
            *(arg3 + 0x14) = 0;
            uVar1 = uVar3;
            if (auStackX_8[0] != 0) {
                do {
                    if (3 < uVar1) break;
                    uVar5 = uVar1 + 1;
                    *(arg3 + 0x14 + uVar1) = *(uVar1 + aiStack_48[0]);
                    uVar1 = uVar5;
                } while (uVar5 < auStackX_8[0]);
            }
        }
        else {
            uVar3 = 0x8000000000000007;
        }
        (**(*0x195f8 + 0x48))(aiStack_48[0]);
    }
    else {
code_r0x000174fb:
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00017d98 @ 0x17d98 */

void fcn.00017d98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int iVar5;
    
    uVar1 = *(arg1 + 0x42);
    uVar4 = arg3;
    fcn.00014f1c(arg2,uVar4,uVar1,*(arg1 + 0x7c));
    fcn.00014f94(arg2,uVar4,*(arg4 + 0x14),*(arg4 + 0x18));
    fcn.00015038(arg2,uVar4);
    if (*(arg2 + 0x10) + 1 + 0x14 <= arg3) {
        *(*(arg2 + 0x34) + 0x38 + arg2) = 0xfa;
        *(arg2 + 0x34) = *(arg2 + 0x34) + 1;
        *(arg2 + 0x28) = *(arg2 + 0x28) + 1;
        *(arg2 + 0x10) = *(arg2 + 0x10) + 1;
    }
    uVar2 = *(arg2 + 0x34) & 3;
    uVar3 = 4 - uVar2;
    if (uVar2 == 0) {
        uVar3 = 0;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
        do {
            uVar2 = uVar4 + 1;
            *(uVar4 + *(arg2 + 0x34) + 0x38 + arg2) = 0;
            uVar4 = uVar2;
        } while (uVar2 < uVar3);
    }
    *(arg2 + 0x28) = *(arg2 + 0x28) + uVar3;
    *(arg2 + 0x10) = *(arg2 + 0x10) + uVar3;
    uVar4 = *(arg2 + 0x34);
    *(arg2 + 0x34) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    uVar4 = *(arg2 + 0x28);
    iVar5 = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    *(arg2 + 0x28) = iVar5;
    uVar4 = *(arg2 + 0x10);
    *(arg2 + 0x10) = (uVar4 * 0x10000 + (uVar4 & 0xff00)) * 0x100 + (uVar4 >> 8 & 0xff00) + (uVar4 >> 0x18);
    fcn.00013d74(arg1,CONCAT71(iVar5 >> 8,1),uVar1 * 0x100 + (uVar1 >> 8),arg2);
    return;
}


/* fcn.000190a0 @ 0x190a0 */

ulong fcn.000190a0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x1958c;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00018f60(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00018ea0(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00018e1c(uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.00010280(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x1958c) {
                fcn.00010280(iVar4,0x1958c,4);
            }
            uVar2 = fcn.00018fb0(arg1,iVar3);
            (**(*0x195f8 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.000184ac @ 0x184ac */

int64_t fcn.000184ac(int64_t arg1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    uchar auStack_38 [24];
    
    iVar5 = (**(arg1 + 0x70))(arg1,auStack_38,&iStackX_10,auStackX_18,auStackX_20);
    if (-1 < iVar5) {
        uVar6 = 0;
        do {
            iVar1 = *(uVar6 + 0x19390);
            iVar7 = iStackX_10 << 8;
            iVar4 = auStackX_18._0_4_;
            iVar3 = auStackX_20._0_4_;
            iVar5 = (**(arg1 + 0x30))(arg1,*(uVar6 + 0x19394),iVar1,1,&uStackX_8);
            if (iVar5 < 0) {
                return iVar5;
            }
            uVar8 = *0x195d8;
            uStackX_8 = uStackX_8 & *(uVar6 + 0x19398);
            if (0x17f < *0x195d8) {
                return -0x7ffffffffffffff7;
            }
            uVar2 = *(uVar6 + 0x19394);
            *0x195d8 = *0x195d8 + 1;
            *(uVar8 * 0x18 + 0x19620) = ((iVar7 + iVar4) * 0x100 + iVar3) * 0x100 + iVar1;
            uVar6 = uVar6 + 0xc;
            *(uVar8 * 0x18 + 0x19628) = uVar2;
            *(uVar8 * 0x18 + 0x19630) = uStackX_8;
        } while (uVar6 < 0x3c);
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.00018e50 @ 0x18e50 */

int64_t fcn.00018e50(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x195f8 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010260(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.000185b4 @ 0x185b4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_28h
//WARNING: Variable defined which should be unmapped: var_30h

void fcn.000185b4(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint *puVar5;
    uint64_t uVar6;
    char *arg2;
    int *piVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint32_t var_40h;
    int64_t var_48h_2;
    int64_t var_50h;
    int64_t var_58h;
    uint64_t uStack_88;
    int64_t iStack_80;
    char *pcStack_78;
    ulong uStack_70;
    int64_t iStack_68;
    uchar auStack_60 [8];
    uint32_t var_50h_2;
    int64_t var_48h;
    int64_t var_40h_2;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_bp_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    uStackX_8 = 0;
    iVar3 = (**(*0x195f8 + 0x138))(2,0x19360,0,&uStack_88,&iStackX_18);
    if (-1 < iVar3) {
        uVar6 = 0;
        if (uStack_88 != 0) {
            do {
                iVar3 = (**(*0x195f8 + 0x98))(*(iStackX_18 + uVar6 * 8),0x19360,&iStack_80);
                if ((-1 < iVar3) && (iStack_80 != 0)) {
                    piVar1 = *(iStack_80 + 400);
                    if (piVar1 == iStack_80 + 400) {
                        iVar3 = 0;
                    }
                    else {
                        iVar3 = piVar1 + -0x221;
                    }
                    if (((iVar3 != 0) &&
                        (iVar3 = (**(*0x195f8 + 0x118))(*(iVar3 + 8),0x19310,0,0,0,4), -1 < iVar3)) &&
                       (iVar3 = (**(*0x195f8 + 0x98))(*(iStackX_18 + uVar6 * 8),0x192e0,&pcStack_78), -1 < iVar3)) {
                        iVar3 = 0;
                        for (arg2 = pcStack_78; (*arg2 != '\x7f' || (arg2[1] != -1)); arg2 = arg2 + *(arg2 + 2)) {
                            iStackX_20 = iVar3;
                            iVar3 = fcn.000190a0(iVar3,arg2);
                            if (iStackX_20 != 0) {
                                (**(*0x195f8 + 0x48))();
                            }
                            if ((*arg2 == '\x01') && (arg2[1] == '\x01')) {
                                iStackX_20 = iVar3;
                                iVar4 = (**(*0x195f8 + 0xb8))(0x192e0,&iStackX_20,&uStack_70);
                                if ((-1 < iVar4) &&
                                   ((((iVar4 = (**(*0x195f8 + 0x98))(uStack_70,0x192f0,&iStackX_10), -1 < iVar4 &&
                                      (iVar4 = (**(iStackX_10 + 0x30))(iStackX_10,2,8,1,&uStackX_8), -1 < iVar4))
                                     && ((uStackX_8 & 0xffffffffff000000) == 0x6000000)) &&
                                    (iVar4 = fcn.000184ac(iStackX_10), iVar4 < 0)))) {
                                    return;
                                }
                            }
                        }
                        iVar3 = (**(*0x195f8 + 0x98))(*(iStackX_18 + uVar6 * 8),0x192f0,&iStackX_10);
                        if (((-1 < iVar3) &&
                            (iVar3 = (**(iStackX_10 + 0x70))(iStackX_10,&var_40h_2,&iStack_68,auStack_60,&var_50h_2)
                            , -1 < iVar3)) &&
                           ((iVar3 = (**(iStackX_10 + 0x30))(iStackX_10,2,0,1,&uStackX_8), -1 < iVar3 &&
                            (uStackX_8 != 0xffffffff)))) {
                            uVar8 = 0;
                            piVar7 = 0x19400;
                            do {
                                iVar3 = (**(iStackX_10 + 0x30))(iStackX_10,piVar7[1],*piVar7,1,&uStackX_8);
                                if (-1 < iVar3) {
                                    uVar9 = *0x195d8;
                                    uStackX_8 = uStackX_8 & piVar7[2];
                                    if (0x17f < *0x195d8) {
                                        return;
                                    }
                                    *0x195d8 = *0x195d8 + 1;
                                    *(uVar9 * 0x18 + 0x19620) =
                                         *piVar7 + (((iStack_68 << 8) + auStack_60._0_4_) * 0x100 + _var_50h_2) * 0x100;
                                    *(uVar9 * 0x18 + 0x19628) = piVar7[1];
                                    *(uVar9 * 0x18 + 0x19630) = uStackX_8;
                                }
                                uVar8 = uVar8 + 1;
                                piVar7 = piVar7 + 3;
                            } while (uVar8 < 7);
                        }
                    }
                }
                uVar6 = uVar6 + 1;
            } while (uVar6 < uStack_88);
        }
        puVar5 = fcn.00018e50(*0x195d8 * 3,*0x195d8 * 0x18 + 8);
        if (puVar5 != NULL) {
            *puVar5 = 0x7362736e;
            uVar6 = *0x195d8;
            puVar5[1] = *0x195d8;
            if ((uVar6 * 3 != 0) && (puVar5 + 2 != 0x19620)) {
                fcn.00010280(puVar5 + 2,0x19620,uVar6 * 0x18);
                uVar6 = *0x195d8;
            }
            iVar3 = uVar6 * 0x18 + 8;
            var_48h = uVar6 * 0x18 + 0x20;
            (**(*0x195f8 + 0x168))(*0x195e8,var_48h,0);
            iVar4 = *0x195e8;
            (**(*0x195f8 + 0x160))(*0x195e8,0x193f0,0x10);
            iVar2 = *0x195f8;
            *(iVar4 + 0x10) = iVar3;
            (**(iVar2 + 0x160))(iVar4 + 0x18,puVar5,iVar3);
            if ((*0x195d0 != NULL) || (iVar3 = (**(*0x195f8 + 0x140))(0x192c0,0,0x195d0), -1 < iVar3)) {
                (***0x195d0)(*0x195d0,*0x195e8,&var_48h);
            }
            (**(*0x195f8 + 0x48))(puVar5);
            (**(*0x195f8 + 0x48))(iStackX_18);
        }
    }
    return;
}


/* fcn.00018f04 @ 0x18f04 */

bool fcn.00018f04(uint32_t arg1)

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


/* fcn.00018f60 @ 0x18f60 */

char * fcn.00018f60(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00018f04(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00018ea0 @ 0x18ea0 */

int64_t fcn.00018ea0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x195f8 + 0x40))(4,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = fcn.00010280(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.00018e1c @ 0x18e1c */

ulong fcn.00018e1c(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x195f8 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00018fb0 @ 0x18fb0 */

int64_t fcn.00018fb0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1958c;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00018f04(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00018f04(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00018f60(arg1);
        iVar4 = fcn.00018f60(arg2);
        iVar2 = fcn.00018e1c(iVar4 + -4 + iVar3);
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.00010280(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.00010280(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00018f60(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00018ea0(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


