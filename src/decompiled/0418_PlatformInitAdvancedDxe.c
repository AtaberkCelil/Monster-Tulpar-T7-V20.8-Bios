// decompiled by r2ghidra: 0418_PlatformInitAdvancedDxe.pe32
// functions: 108

/* entry0 @ 0x104a8 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000104bc(arg1,arg2);
    fcn.00010888(arg1,arg2);
    return;
}


/* fcn.000104bc @ 0x104bc */

ulong fcn.000104bc(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int16_t *piVar6;
    uint32_t uVar7;
    ulong noname_0;
    ulong *puVar8;
    int64_t in_R9;
    int64_t *piVar9;
    int64_t iStackX_8;
    ulong *puStackX_10;
    uchar auStackX_18 [16];
    uchar *puVar10;
    uchar auStack_28 [16];
    
    *0x1cf10 = *(arg2 + 0x60);
    *0x1cf18 = *(arg2 + 0x58);
    *0x1cf08 = arg2;
    iStackX_8 = arg1;
    fcn.000115a0();
    noname_0 = 0x1ad80;
    iVar4 = fcn.000115d0(0x1ad80);
    if (iVar4 == 0) {
        uVar5 = fcn.000103c0();
        fcn.000103b0();
        uVar2 = in(0x1808);
        fcn.00010300(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar7 >> 0x17 & 1) != 0) break;
            fcn.000102f0();
        }
        fcn.00010300(uVar7,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.000103b0();
        }
        else {
            fcn.000103a0();
        }
    }
    (**(*0x1cf10 + 0x140))(0x1ab90,0,0x1cf38);
    fcn.00011444(0x1aaa0,8,0x145d4,in_R9);
    fcn.00011444(0x1a9e0,8,0x14338,in_R9);
    puVar10 = auStack_28;
    fcn.00011444(0x1ac80,8,0x144a8,in_R9);
    (**(*0x1cf10 + 0x140))(0x1ab00,0,&puStackX_10);
    puVar8 = puStackX_10;
    if (puStackX_10 != NULL) {
        piVar6 = fcn.000115a0();
        iVar1 = *piVar6;
        while (iVar1 != -1) {
            if (((iVar1 == 4) && (*(piVar6 + 4) == *0x1aa30)) && (*(piVar6 + 8) == *0x1aa38)) {
                iStackX_8 = CONCAT62(iStackX_8._2_6_,0xfffe);
                (**puVar8)(puVar8,0,&iStackX_8,piVar6 + 0xc,puVar10);
                puVar8 = puStackX_10;
            }
            piVar6 = piVar6 + piVar6[1];
            iVar1 = *piVar6;
        }
    }
    (**(*0x1cf10 + 0x170))(0x200,0x10,0x16494,0,0x1acf0,auStackX_18);
    (**(*0x1cf10 + 0x140))(0x1abf0,0);
    (***0x1cf48)(0x159dc,0x1f);
    if (0x1ffff < *(*0x1cf08 + 8)) {
        fcn.0001155c(0x16440,auStackX_18);
    }
    uVar5 = 0;
    if (*(*0x1cf08 + 0x68) != 0) {
        piVar9 = *(*0x1cf08 + 0x70);
        do {
            if ((*0x1ad00 == *piVar9) && (*0x1ad08 == piVar9[1])) {
                *0x1cf60 = (*(*0x1cf08 + 0x70))[uVar5 * 3 + 2];
                return 0;
            }
            uVar5 = uVar5 + 1;
            piVar9 = piVar9 + 3;
        } while (uVar5 < *(*0x1cf08 + 0x68));
    }
    *0x1cf60 = 0;
    return 0x800000000000000e;
}


/* fcn.00010888 @ 0x10888 */

ulong fcn.00010888(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    uint16_t uVar3;
    uint uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t iVar9;
    int64_t *arg1_00;
    int64_t *piVar10;
    uint8_t uVar11;
    uint16_t uVar12;
    ushort *puVar13;
    int64_t in_R8;
    uint64_t uVar14;
    int64_t in_R9;
    int64_t *arg4;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    int64_t var_ca0h;
    int64_t var_ca8h;
    uint uStack_d48;
    uchar auStack_d38 [24];
    uint64_t uStack_d20;
    uchar auStack_cf8 [3200];
    int64_t var_70h;
    
    out(0x80,0x7600);
    iStackX_8 = arg1;
    aiStackX_10[0] = arg2;
    fcn.000136bc(0x1b1f8,0x7600,in_R8,in_R9);
    aiStackX_10[2] = 0xca9;
    uVar5 = (**(*0x1cf18 + 0x48))(L"Setup",0x1ab20,&iStackX_8,aiStackX_10 + 2,auStack_cf8);
    fcn.00010de0();
    iVar6 = fcn.00011144();
    cVar1 = (**(iVar6 + 0x30))(0x1f0);
    piVar8 = NULL;
    if (cVar1 != '\0') {
        aiStackX_10[0] = 0;
        (**(*0x1cf10 + 0x50))(0x200,8,0x10cdc,0,aiStackX_10);
        (**(*0x1cf10 + 0xa8))(0x1aaa0,aiStackX_10[0],aiStackX_10 + 1);
    }
    iVar6 = (**(*0x1cf10 + 0x140))(0x1aba0,0,0x1d510);
    iVar9 = 0x18;
    if (-1 < iVar6) {
        *0x1d518 = **0x1d510;
        aiStackX_10[0] = 0xffffffff;
        iVar7 = (**(*0x1cf10 + 0x28))(1,10,1);
        iVar6 = aiStackX_10[0];
        if (-1 < iVar7) {
            fcn.00010280(aiStackX_10[0],0xc0);
            if (iVar6 != 0) {
                uVar12 = 0x1000;
                uVar14 = 0;
                do {
                    iVar7 = fcn.0001704c(0xfe000000);
                    if ((iVar7 < 0) || (0xbf < uVar14)) goto code_r0x00010a7c;
                    uVar11 = uVar14 + 1;
                    *(iVar6 + uVar14 * 4) = uStack_d48;
                    uVar3 = uVar12 + 0x18;
                    if (uVar11 != (uVar11 / 6) * 6) {
                        uVar3 = uVar12;
                    }
                    uVar12 = uVar3 + 4;
                    uVar14 = uVar11;
                } while (uVar12 < 0x1165);
                *(*0x1d518 + 0xa3c) = iVar6;
            }
        }
    }
code_r0x00010a7c:
    arg4 = NULL;
    uVar14 = 0x106f8;
    (**(*0x1cf10 + 0x170))(0x200,8,0x106f8,0,0x1ace0,0x1d520);
    if (0x1ffff < *(*0x1cf08 + 8)) {
        fcn.0001155c(0x10790,aiStackX_10);
    }
    puVar13 = 0x1d4e0;
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
    }
    fcn.000138c0();
    fcn.00013ab8();
    cVar1 = '\0';
    aiStackX_10[1] = 0x578;
    iVar6 = fcn.000112b8(iVar9,0x578);
    if (iVar6 != 0) {
        arg4 = aiStackX_10 + 1;
        uVar14 = 0;
        iVar9 = (**(*0x1cf18 + 0x48))(L"SaSetup",0x1acd0,0,arg4,iVar6);
        if (-1 < iVar9) {
            arg1_00 = 0x1ab40;
            iVar7 = fcn.000115d0(0x1ab40);
            if ((iVar7 != 0) && ((arg1_00 = iVar7 + 0x20, *arg1_00 == '\x01' || (*(iVar7 + 0x40) == '\x01')))) {
                piVar10 = aiStackX_10;
                uVar14 = 2;
                do {
                    iVar7 = *arg1_00;
                    arg1_00 = arg1_00 + 4;
                    *piVar10 = iVar7;
                    piVar10 = piVar10 + 1;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
                arg1_00 = aiStackX_10;
                cVar2 = fcn.00016c00(arg1_00);
                if ((cVar2 != '\0') && (cVar1 = '\0', cVar2 != '\x05')) {
                    cVar1 = '\x01';
                }
            }
            if ((*(iVar6 + 0x7d) == '\0') || (cVar1 == '\x01')) {
                aiStackX_10[1] = 2;
                piVar8 = fcn.000112b8(arg1_00,2);
                if (piVar8 == NULL) {
                    iVar9 = -0x7ffffffffffffff7;
                }
                else {
                    uVar14 = 0x10820;
                    *piVar8 = *(iVar6 + 0x7d);
                    *(piVar8 + 1) = cVar1;
                    arg4 = piVar8;
                    iVar9 = (**(*0x1cf10 + 0x170))(0x200,8,0x10820,piVar8,0x1ace0,0x1d520);
                    if (iVar9 < 0) {
                        (**(*0x1cf10 + 0x70))(*0x1d520);
                    }
                }
            }
        }
        (**(*0x1cf10 + 0x48))(iVar6);
        if ((iVar9 < 0) && (piVar8 != NULL)) {
            (**(*0x1cf10 + 0x48))(piVar8);
        }
    }
    iVar6 = fcn.00011108();
    uVar4 = (**(iVar6 + 0x18))(0x1ad60,0x200001);
    iVar6 = (**(*0x1cf60 + 0x38))(0xc0000000,auStack_d38);
    if (-1 < iVar6) {
        uVar14 = uStack_d20 | 0x8000000000000000;
        (**(*0x1cf60 + 0x40))(0xc0000000,uVar4);
    }
    out(0x80,0x767f);
    fcn.000136bc(0x1b1f8,0x767f,uVar14,arg4);
    return uVar5;
}


/* fcn.000115a0 @ 0x115a0 */

int64_t fcn.000115a0(void)

{
    if (*0x1cf30 == 0) {
        fcn.000113e4(0x1ac50,0x1cf30);
    }
    return *0x1cf30;
}


/* fcn.000113e4 @ 0x113e4 */

ulong fcn.000113e4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1cf08;
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


/* fcn.000115d0 @ 0x115d0 */

void fcn.000115d0(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000115a0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000115fe:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000115fe;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103c0 @ 0x103c0 */

uint64_t fcn.000103c0(void)

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


/* fcn.000103b0 @ 0x103b0 */

void fcn.000103b0(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102f2 @ 0x102f2 */

void fcn.000102f2(void)

{
    return;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00011444 @ 0x11444 */

int64_t fcn.00011444(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x1cf10 + 0x50))(0x200,noname_1,noname_2,0,&iStackX_20);
    (**(*0x1cf10 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x1cf10 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.0001155c @ 0x1155c */

void fcn.0001155c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = 0x114a4;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    (**(*0x1cf10 + 0x170))(0x200,8,iVar1,0,0x1a9f0,arg2);
    return;
}


/* fcn.00014d5c @ 0x14d5c */

int64_t fcn.00014d5c(int64_t arg1)

{
    uchar *arg1_00;
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_20;
    int64_t var_198h;
    int64_t var_1a0h;
    int64_t var_1a8h;
    int32_t var_1b0h;
    int64_t var_4a0h;
    int64_t var_7d8h;
    int32_t var_7e0h;
    int32_t var_7e4h;
    int64_t var_7e8h;
    int64_t aiStack_898 [2];
    uchar auStack_888 [88];
    uchar auStack_830 [512];
    uint64_t uStack_630;
    ulong uStack_628;
    int64_t iStack_620;
    uint32_t uStack_618;
    uchar auStack_328 [696];
    int64_t var_68h;
    
    cVar1 = fcn.0001366c();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffffffffffd;
    }
    else if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        fcn.00010280(arg1,0x260);
        fcn.0001350c(arg1);
        cVar1 = fcn.0001366c();
        if (cVar1 == '\0') {
            uVar3 = 0;
        }
        else {
            uVar3 = rdmsr(0xfe);
            uVar3 = uVar3 & 0xff;
        }
        fcn.0001494c(arg1);
        fcn.000118d8(&iStackX_20,aiStack_898);
        arg1_00 = arg1 + 0x58;
        uStack_628 = 0;
        iStack_620 = iStackX_20 + 1;
        uStack_618 = *(arg1 + 600) & 7;
        fcn.00011838(arg1_00,uVar3,iStackX_20,aiStack_898[0]);
        fcn.00012804(auStack_328,uVar3,&uStack_628,0x20);
        uVar3 = CONCAT44(*0xc00000ac,*0xc00000a8) & 0x7ffff00000;
        fcn.00010280(auStack_888,0x260);
        uStack_630 = uStack_630 & 0xffffffffffffff06 | 6;
        iVar2 = fcn.00014c24(auStack_888,uVar3,&uStack_628,1);
        if (iVar2 == -0x7ffffffffffffff7) {
            fcn.00010280(auStack_888,0x260);
            uStack_630 = *(arg1 + 600);
            iVar2 = fcn.00014c24(auStack_888,uVar3,&uStack_628,1);
        }
        if (-1 < iVar2) {
            if (iVar2 == 0) {
                if (arg1_00 != auStack_830) {
                    fcn.000102a0(arg1_00,auStack_830,0x200);
                }
                *(arg1 + 600) = uStack_630;
            }
            fcn.00013588(arg1);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.0001350c @ 0x1350c */

int64_t fcn.0001350c(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    char cVar3;
    ulong *puVar4;
    uint *puVar5;
    int64_t iVar6;
    
    cVar3 = fcn.0001366c();
    if (cVar3 != '\0') {
        puVar5 = 0x1b170;
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
        fcn.000117c4(0,uVar2 & 0xff,arg1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(arg1 + 600) = uVar1;
    }
    return arg1;
}


/* fcn.0001366c @ 0x1366c */

uint64_t fcn.0001366c(void)

{
    ulong uVar1;
    uint64_t uVar2;
    uint32_t uStackX_8;
    
    uVar2 = fcn.00010330(1,0,0,0);
    if ((uStackX_8 & 0x1000) == 0) {
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT71(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.000117c4 @ 0x117c4 */

int64_t fcn.000117c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    int iVar4;
    
    if (arg2 != 0) {
        uVar2 = arg2 & 0xffffffff;
        puVar3 = arg3 + 8;
        iVar4 = 0x201;
        do {
            if (arg1 == 0) {
                uVar1 = rdmsr(iVar4 + -1);
                puVar3[-1] = uVar1;
                uVar1 = rdmsr(iVar4);
            }
            else {
                puVar3[-1] = *((arg1 - arg3) + 0x50 + puVar3);
                uVar1 = *((arg1 - arg3) + 0x58 + puVar3);
            }
            *puVar3 = uVar1;
            iVar4 = iVar4 + 2;
            puVar3 = puVar3 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    return arg3;
}


/* fcn.000147c4 @ 0x147c4 */

int64_t fcn.000147c4(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint auStackX_10 [2];
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    int64_t iStack_28;
    int64_t iStack_20;
    uchar auStack_18 [16];
    
    auStackX_10[0] = arg1;
    iStack_28 = 0;
    iStack_20 = 0;
    iVar1 = (**(*0x1cf10 + 0x140))(0x1aa70,0,&iStack_28);
    uVar2 = arg3;
    if (-1 < iVar1) {
        *0x1d0ea = 7;
        *0x1d0e8 = 1;
        *0x1d0ee = 0x80000007;
        *0x1d0e4 = 0xe;
        if (uVar2 < 0x401) {
            (**(*0x1cf10 + 0x160))(0x1d0f2,arg2,arg3 & 0xffffffff);
            *0x1d0e0 = uVar2 + 0x12;
            iVar1 = (**(iStack_28 + 0x10))(iStack_28,0,in_stack_00000028,in_stack_00000030,0x1d0e0);
            if (-1 < iVar1) {
                return iVar1;
            }
        }
    }
    iVar1 = (**(*0x1cf10 + 0x140))(0x1ac70,0,&iStack_20);
    if (-1 < iVar1) {
        *0x1d0e0 = 7;
        *0x1d0e4 = 0x80000007;
        *0x1d0fc = uVar2;
        if (uVar2 < 0x401) {
            (**(*0x1cf10 + 0x160))(0x1d100,arg2,arg3 & 0xffffffff);
            iVar1 = (**(iStack_20 + 0x20))
                              (iStack_20,in_stack_00000028,in_stack_00000030,4,0x1d0e0,auStackX_10,auStack_18);
        }
        else {
            iVar1 = -0x7ffffffffffffffb;
        }
    }
    return iVar1;
}


/* fcn.000136bc @ 0x136bc */

void fcn.000136bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t *arg1_00;
    char *pcVar2;
    int64_t iVar4;
    int64_t iVar3;
    char cStackY_108;
    char acStackY_107 [55];
    int32_t in_stack_ffffffffffffff30;
    int64_t in_stack_ffffffffffffff38;
    int8_t in_stack_ffffffffffffff40;
    
    pcVar2 = &cStackY_108;
    fcn.00017190(pcVar2,0x100,0,arg1,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40);
    cVar1 = fcn.000116b0(CONCAT71(pcVar2 >> 8,0x83));
    if ((cVar1 == '\x01') && (iVar4 = 0, cStackY_108 != '\0')) {
        do {
            iVar3 = iVar4 + 1;
            pcVar2 = acStackY_107 + iVar4;
            iVar4 = iVar3;
        } while (*pcVar2 != '\0');
        if ((((iVar3 != 0) && (*0xfe1000e8 != 0xff)) && ((*0xfe1000e8 & 1) != 0)) &&
           (((*0xfe1000e8 >> 1 & 3) - 2 < 2 && (arg1_00 = fcn.00019c38(in_stack_ffffffffffffff30), arg1_00 != NULL))))
        {
            fcn.00019d58(arg1_00);
        }
    }
    return;
}


/* fcn.00017190 @ 0x17190 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00017190(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
    int64_t iVar10;
    int64_t iVar11;
    uint64_t *puVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint64_t uVar20;
    uint8_t *puVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    uint64_t uStack_d8;
    char *pcStack_d0;
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
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x000171ee;
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
code_r0x000171ee:
    uVar17 = 1000000;
    uVar20 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar20;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar20 = fcn.00019b78(arg4,0xf4241);
        if (uVar17 < uVar20) {
            return 0;
        }
        uVar20 = 1;
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00019a60(arg4);
        if (uVar17 < uVar5) {
            return 0;
        }
        uStack_98 = 0xffff;
    }
    var_78h = uVar20;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d8 = 0;
    pcStack_d0 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d0 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar20 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d0 <= arg1)))) break;
        uStack_a0 = 0;
        uVar20 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar17 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar17;
        if (uStack_a8 == 10) {
            puVar21 = puStackX_20 + var_78h;
            pcVar8 = 0x1b4ec;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar21[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar21) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar21 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar21[1] << 8;
            }
            uVar5 = iVar4 | *puVar21;
code_r0x000175ab:
            uStack_a8 = uVar5 & uStack_98;
            if ((uVar5 & uStack_98) == 10) {
                pcVar8 = 0x1b4ec;
            }
            else {
                pcVar8 = 0x1b4f0;
                puVar21 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar12 = puStack_b0;
            puVar18 = in_stack_00000028;
            puVar21 = puStackX_20;
code_r0x00017343:
            while( true ) {
                puStackX_20 = puVar21 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar17 = uVar17 | 0x800;
                    goto code_r0x000174e6;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar17 & 0x800) == 0) {
                        uVar17 = uVar17 | 0x20;
                        uStackX_18 = uVar17;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000174fd;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar17 = uVar17 | 0x10;
                            goto code_r0x000174e6;
                        }
                        goto code_r0x000174fd;
                    }
                }
                uVar20 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar20 = uStack_a8 + (uVar20 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar20;
                }
                puVar21 = puStackX_20 + -var_78h;
                uVar20 = uStack_c0;
                if ((uVar17 & 0x800) == 0) {
                    uVar17 = uVar17 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar17;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar17 = uVar17 | 1;
code_r0x000174e6:
                puVar21 = puStackX_20;
                uStackX_18 = uVar17;
                goto code_r0x00017343;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar17 = uVar17 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar17 & 0x800) == 0) {
                            uVar17 = uVar17 | 0x200;
                            if (puVar12 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar12;
                                puVar12 = puVar12 + 1;
                                puStack_b0 = puVar12;
                            }
                            puVar21 = puStackX_20;
                            uStackX_18 = uVar17;
                        }
                        else {
                            if (puVar12 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar12;
                                puVar12 = puVar12 + 1;
                                puStack_b0 = puVar12;
                            }
                            puVar21 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x00017343;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar17 = uVar17 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000174fd;
                        uVar17 = uVar17 | 8;
                    }
                }
                goto code_r0x000174e6;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar21;
code_r0x000174fd:
            puVar21 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar12 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.00017f00(&var_68h_2,0x26,0,0x1b480);
                        pcVar8 = &var_68h_2;
                        uVar20 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar21 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar21[1] << 8;
                            }
                            uVar5 = iVar4 | *puVar21;
                            goto code_r0x000175ab;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00017793;
                        if (uStack_a8 == 0x58) goto code_r0x00017889;
                        if (uStack_a8 == 0x61) goto code_r0x0001779c;
                        if (uStack_a8 == 99) {
                            if (puVar12 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar12;
                                puStack_b0 = puVar12 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x00017324;
                        }
                        if (uStack_a8 != 100) goto code_r0x00017320;
                        goto code_r0x000178a0;
                    }
                    puVar21 = puStackX_20 + var_78h;
                    pcVar8 = 0x1b4ec;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar21[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar21) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar21 = puStackX_20;
                    }
                }
                goto code_r0x00017acd;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar12 == NULL) {
                        uVar5 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar5 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar5 < 0) {
                        if ((uVar5 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar5 & 0x7fffffffffffffff) * 0x15;
                            iVar11 = 0x1b58b;
                            goto code_r0x00017850;
                        }
                    }
                    else if (uVar5 < 6) {
                        iVar11 = uVar5 * 0x19;
                        pcVar8 = "Success";
code_r0x00017850:
                        pcVar8 = pcVar8 + iVar11;
                        if (pcVar8 != &var_68h_2) goto code_r0x00017acd;
                    }
                    fcn.00017f00(&var_68h_2,0x26,0,0x1b4e4);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00017793:
                        uVar17 = uVar17 | 0x400;
                        uStackX_18 = uVar17;
code_r0x0001779c:
                        if (puVar12 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            puStack_b0 = puVar12 + 1;
                            pcVar8 = *puVar12;
                        }
                        if (pcVar8 == NULL) {
                            uVar17 = uVar17 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar17;
                        }
                        uVar22 = uVar22 & -((uVar17 & 0x800) != 0);
                        goto code_r0x00017acd;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x00017320;
                            goto code_r0x0001788d;
                        }
                        goto code_r0x00017892;
                    }
                    if (puVar12 == NULL) {
                        in_stack_00000028 = puVar18 + 1;
                        uVar5 = *puVar18;
                    }
                    else {
                        uVar5 = *puVar12;
                        puStack_b0 = puVar12 + 1;
                    }
                    if (uVar5 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x00017acd;
                    }
                    fcn.00017f00(&var_68h_2,0x26,0,0x1b4c8);
                    pcVar8 = &var_68h_2;
                }
                uVar20 = uStack_c0;
                goto code_r0x00017acd;
            }
            uVar17 = uVar17 & 0xffffffffffffffd9 | 0x10;
code_r0x00017889:
            uVar17 = uVar17 | 0x20;
code_r0x0001788d:
            uVar17 = uVar17 | 0x80;
code_r0x00017892:
            if (-1 < uVar17) {
                uVar17 = uVar17 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x000178a0:
            if ((uVar17 & 0x10) == 0) {
                if (puVar12 != NULL) {
                    uVar20 = *puVar12;
                    goto code_r0x000178e2;
                }
                uVar20 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar12 == NULL) {
                uVar20 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar20 = *puVar12;
code_r0x000178e2:
                puStack_b0 = puVar12 + 1;
            }
            cVar3 = (uVar17 & 4) << 3;
            if ((uVar17 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar17 & 8) != 0;
            if (uVar17 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar17 & 0x10) == 0) && (uVar2 = 0x10, uVar20 < 0)) {
code_r0x0001796a:
                    uVar16 = uVar2;
                    uVar20 = uVar20 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar17 & 8) != 0) {
                    uVar17 = uVar17 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar20 < 0) && (uVar17 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar20 = -uVar20;
                }
                else {
                    uVar2 = 10;
                    if ((uVar17 & 0x4010) == 0x4000) goto code_r0x0001796a;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar5 = uVar20;
            do {
                uVar6 = uVar5 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEFP"[uVar5 % uVar16];
                uVar5 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar20 == 0) {
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
            uVar17 = uVar17 | 0x1000;
            cVar13 = '\x01';
            uVar20 = uStack_c0;
            uStackX_18 = uVar17;
            if ((uVar17 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x00017320:
            pcVar8 = &uStack_a8;
code_r0x00017324:
            uVar17 = uVar17 | 0x400;
            uStackX_18 = uVar17;
            puVar21 = puStackX_20;
        }
code_r0x00017acd:
        puStackX_20 = puVar21;
        uVar16 = uVar17;
        iVar11 = ((uVar17 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar17 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar17 >> 0xc & 1) == 0) {
            uVar20 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar17 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar20 < uVar22 || ((uVar17 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar20 = uVar20 + 1;
                pcVar15 = pcVar15 + iVar11;
            }
            uStack_c0 = uVar20;
        }
        else {
            iVar11 = -iVar11;
        }
        if (uVar22 < uVar20) {
            uVar22 = uVar20;
        }
        uVar5 = uVar16 & 0x201;
        var_40h = uVar5;
        pcVar15 = pcStack_d0;
        if (uVar5 == 0x200) {
            uStack_d8 = uStack_d8 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001715c(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001715c(arg1,pcVar15,uVar22 - uVar20,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d8 = uStack_d8 + uVar6, (uVar17 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d0 <= arg1) break;
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
            if (((cVar3 != '\0') && (uStack_d8 = uStack_d8 + uVar14, (uVar17 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d0 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d8 = uStack_d8 + (uVar22 - uVar20) * uVar14;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001715c(arg1,pcStack_d0,uVar22 - uVar20,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar17;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar20 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar11 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d8 = uStack_d8 + uVar6;
                uVar5 = *pcVar8 & _cStack0000000000000030;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar10 = 0;
                    do {
                        if (pcStack_d0 <= arg1) break;
                        *arg1 = uVar5;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar5 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar10 = iVar10 + 1;
                    } while (iVar10 < 1);
                }
                pcVar8 = pcVar8 + iVar11;
                uVar5 = uVar20 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar10 = 0;
                    uVar5 = uVar20 + 2;
                    if (uStack_c0 <= uVar5) break;
                    uStack_d8 = uStack_d8 + uVar6;
                    iVar9 = iVar10;
                    if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar10;
                            if (pcStack_d0 <= arg1) break;
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
                uVar20 = uVar5;
            } while (uVar5 < uStack_c0);
            arg3 = uStackX_18;
            uVar5 = var_40h;
        }
        if (uVar5 == 0x201) {
            uStack_d8 = uStack_d8 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001715c(arg1,pcStack_d0,uStack_a0 - uVar22,0x20);
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
    }
    iVar11 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d8 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d0 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar11 = iVar11 + 1;
    } while (iVar11 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.000116b0 @ 0x116b0 */

ulong fcn.000116b0(int64_t arg1)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    unkbyte7 Var5;
    unkbyte7 extraout_RAX;
    ushort uVar6;
    ushort uVar7;
    
    uVar1 = 0;
    uVar3 = fcn.000103c0();
    uVar4 = fcn.000103b0();
    if (arg1 < 0x80) {
        uVar7 = 0x70;
        uVar1 = in(0x70);
        uVar6 = 0x71;
        *0xfdc431fc = *0xfdc431fc & 0xfffdffff;
        uVar4 = *0xfdc431fc;
        uVar1 = uVar1 & 0x80;
    }
    else {
        uVar7 = 0x72;
        uVar6 = 0x73;
    }
    Var5 = uVar4 >> 8;
    out(uVar7,arg1 & 0x7f | uVar1);
    uVar2 = in(uVar6);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.000103a0();
        Var5 = extraout_RAX;
    }
    return CONCAT71(Var5,uVar2);
}


/* fcn.00019c38 @ 0x19c38 */

uint64_t fcn.00019c38(int32_t arg_78h)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t *arg1;
    uint64_t *arg1_00;
    uint64_t *puVar3;
    uint64_t *puStackX_8;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x1cf68;
    if (*0x1cf68 == 0) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar2 = (**(*0x1cf10 + 0x40))(6,0x68,&puStackX_8);
        arg1_00 = puStackX_8;
        if (iVar2 < 0) {
            arg1_00 = NULL;
        }
        puStackX_8 = arg1_00;
        fcn.00019e8c(arg1_00);
        iVar2 = (**(*0x1cf10 + 0x40))(6,0x78,&puStackX_8);
        arg1 = puStackX_8;
        if (iVar2 < 0) {
            arg1 = NULL;
        }
        if (arg1 == NULL) {
            arg1 = 0x1cf70;
        }
        else {
            puVar3 = 0x1d070;
            if (arg1_00 != NULL) {
                puVar3 = arg1_00;
            }
            puStackX_8 = arg1;
            if (arg1 != 0x1cff0) {
                fcn.000102a0(arg1,0x1cff0,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *arg1 = puVar3;
            *(arg1 + 4) = 0;
            if (puVar3[1] != NULL) {
                (*puVar3[1])(arg1,&uStack_18);
            }
        }
        *0x1cf68 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        uVar1 = *0x1ad48;
        *(arg1 + 0x10) = *0x1ad40;
        *(arg1 + 0x18) = uVar1;
    }
    return -(*(arg1 + 0x70) != 0) & arg1;
}


/* fcn.00019d58 @ 0x19d58 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00019d58(uint32_t *arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint *puVar4;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    ulong uStack_54;
    ulong uStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    int32_t var_9h;
    int64_t var_5h;
    
    if (arg1 != 0x1cf70) {
        puVar4 = &uStack_88;
        uVar2 = arg1[3] & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((arg1[3] & 0xff0000) == 0xff0000) {
            uStack_54 = *(arg1 + 4);
            uStack_4c = *(arg1 + 6);
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x1ce90;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = arg1[8];
            arg1[8] = _auStack_44 + 1;
            *puVar4 = *0x1ce94;
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
                fcn.00010280(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x1cea8;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar4 = *0x1cea4;
            puVar4[1] = *0x1ceac;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x1ced0;
        (**(*arg1 + 0x18))(arg1,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00010de0 @ 0x10de0 */

//WARNING: Variable defined which should be unmapped: var_2h

void fcn.00010de0(void)

{
    char cVar1;
    int64_t iVar2;
    char16_t *pcVar3;
    int64_t in_R9;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uint auStackX_18 [2];
    ulong uStackX_20;
    int64_t var_4c0h;
    uint32_t var_d27h;
    uint32_t var_e9ch;
    int8_t var_f9fh;
    int64_t var_1170h;
    int64_t var_1e30h;
    int32_t var_1e38h;
    int64_t var_1e40h;
    int64_t var_1e48h;
    ulong uStack_1ef8;
    ulong uStack_1ef0;
    uchar auStack_1ee8 [194];
    char cStack_1e26;
    uchar auStack_1968 [2151];
    char cStack_1101;
    char cStack_f8c;
    char cStack_e89;
    uchar auStack_cb8 [3250];
    uint32_t var_2h;
    
    fcn.00011444(0x1abb0,0x10,0x10fd8,in_R9);
    uStackX_20 = 0xca9;
    iVar2 = (**(*0x1cf18 + 0x48))(L"Setup",0x1ab20,auStackX_18,&uStackX_20,auStack_cb8);
    if (-1 < iVar2) {
        iVar2 = fcn.000115d0(0x1abd0);
        if (iVar2 != 0) {
            (**(*0x1cf18 + 0x58))(L"Setup",0x1ab20,auStackX_18[0],uStackX_20,auStack_cb8);
        }
    }
    auStackX_8[0] = 0;
    uStack_1ef8 = 0xca9;
    iVar2 = (**(*0x1cf18 + 0x48))(L"Setup",0x1ab20,auStackX_8,&uStack_1ef8,auStack_1968);
    if (-1 < iVar2) {
        auStackX_10[0] = 0;
        uStack_1ef0 = 0x578;
        pcVar3 = L"SaSetup";
        iVar2 = (**(*0x1cf18 + 0x48))(L"SaSetup",0x1acd0,auStackX_10,&uStack_1ef0,auStack_1ee8);
        if (-1 < iVar2) {
            cVar1 = fcn.000116b0(CONCAT71(pcVar3 >> 8,0xf2));
            if ((cStack_e89 == '\0') || ((cStack_e89 == '\x02' && (cVar1 == '\0')))) {
                cVar1 = cStack_1101;
            }
            else {
                cVar1 = '\x01';
            }
            if (cStack_1101 != cVar1) {
                cStack_1101 = cVar1;
                (**(*0x1cf18 + 0x58))(L"Setup",0x1ab20,auStackX_8[0],uStack_1ef8,auStack_1968);
            }
            if ((cStack_f8c == '\x03') && (cStack_1e26 != '\0')) {
                cStack_1e26 = 0;
                (**(*0x1cf18 + 0x58))(L"SaSetup",0x1acd0,auStackX_10[0],uStack_1ef0,auStack_1ee8);
            }
        }
    }
    return;
}


/* fcn.00011144 @ 0x11144 */

int64_t fcn.00011144(void)

{
    if (*0x1cf28 == 0) {
        (**(*0x1cf10 + 0x140))(0x1aa40,0,0x1cf28);
    }
    return *0x1cf28;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 42752 named .text
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


/* fcn.0001704c @ 0x1704c */

int64_t fcn.0001704c(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t arg2;
    int64_t iVar3;
    uint64_t uVar4;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    uVar4 = 0;
    uVar1 = in_stack_00000028[3];
    arg2 = uVar1;
    iVar2 = arg1;
    *(iVar2 + 0x80) = *in_stack_00000028;
    *(iVar2 + 0x84) = in_stack_00000028[1];
    *(iVar2 + 0x88) = in_stack_00000028[2];
    *(iVar2 + 0x8c) = uVar1;
    *(arg1 & 0xffffffff) = 0x20a0;
    do {
        if ((*(iVar2 + 4) & 1) == 0) {
            iVar3 = 0;
code_r0x000170cb:
            if ((*(iVar2 + 4) & 2) != 0) {
                iVar3 = -0x7ffffffffffffff9;
            }
            if ((-1 < iVar3) && (in_stack_00000030 != NULL)) {
                *in_stack_00000030 = *(iVar2 + 0x90);
                in_stack_00000030[1] = *(iVar2 + 0x94);
                in_stack_00000030[2] = *(iVar2 + 0x98);
                in_stack_00000030[3] = *(iVar2 + 0x9c);
            }
            return iVar3;
        }
        if (100000 < uVar4) {
            iVar3 = -0x7fffffffffffffee;
            goto code_r0x000170cb;
        }
        fcn.0001167c(10,arg2);
        uVar4 = uVar4 + 1;
    } while( true );
}


/* fcn.000138c0 @ 0x138c0 */

int64_t fcn.000138c0(void)

{
    int16_t iVar1;
    int64_t iVar2;
    int16_t *piVar3;
    uchar *puVar4;
    ulong noname_0;
    uint8_t uVar5;
    ulong *puVar6;
    ushort auStackX_8 [4];
    ulong *puStackX_10;
    
    noname_0 = 0x1ab00;
    (**(*0x1cf10 + 0x140))(0x1ab00,0,&puStackX_10);
    puVar6 = puStackX_10;
    if (puStackX_10 == NULL) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        piVar3 = fcn.000115a0();
        iVar1 = *piVar3;
        while (iVar1 != -1) {
            if (((iVar1 == 4) && (*(piVar3 + 4) == *0x1abc0)) && (*(piVar3 + 8) == *0x1abc8)) {
                iVar2 = piVar3[1] - 0x33;
                if (piVar3[0xc] < 8) {
                    if ((*(puVar6 + 4) < 3) || (uVar5 = 0x1b, *(puVar6 + 0x21) == '\0')) {
                        uVar5 = 0x13;
                    }
                    puVar4 = fcn.000112b8(noname_0,uVar5 + iVar2);
                    if (puVar4 == NULL) {
                        return -0x7ffffffffffffff7;
                    }
                    *puVar4 = 7;
                    puVar4[1] = uVar5;
                    *(puVar4 + 2) = 0;
                    puVar4[4] = piVar3[0xe];
                    *(puVar4 + 5) = *(piVar3 + 0x1d);
                    *(puVar4 + 7) = *(piVar3 + 0x1f);
                    *(puVar4 + 9) = *(piVar3 + 0x21);
                    *(puVar4 + 0xb) = *(piVar3 + 0x23);
                    *(puVar4 + 0xd) = *(piVar3 + 0x25);
                    puVar4[0xf] = *(piVar3 + 0x27);
                    puVar4[0x10] = piVar3[0x14];
                    puVar4[0x11] = *(piVar3 + 0x29);
                    puVar4[0x12] = piVar3[0x15];
                    if ((2 < *(puStackX_10 + 4)) && (*(puStackX_10 + 0x21) != '\0')) {
                        *(puVar4 + 0x13) = *(piVar3 + 0x2b);
                        *(puVar4 + 0x17) = *(piVar3 + 0x2f);
                    }
                    if ((iVar2 != 0) && (puVar4 + uVar5 != piVar3 + 0x33)) {
                        fcn.000102a0(puVar4 + uVar5,piVar3 + 0x33,iVar2);
                    }
                    auStackX_8[0] = 0xfffe;
                    iVar2 = (**puStackX_10)(puStackX_10,0,auStackX_8,puVar4);
                    (**(*0x1cf10 + 0x48))(puVar4);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    noname_0 = 0x1d4e0;
                    *(((*(piVar3 + 0x1d) & 7) + piVar3[0xc] * 3) * 2 + 0x1d4e0) = auStackX_8[0];
                    puVar6 = puStackX_10;
                }
            }
            piVar3 = piVar3 + piVar3[1];
            iVar1 = *piVar3;
        }
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00013ab8 @ 0x13ab8 */

ulong fcn.00013ab8(void)

{
    int16_t iVar1;
    ulong uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    char cVar5;
    int64_t arg3;
    char cVar6;
    char cVar7;
    int64_t *noname_2;
    int64_t iStackX_10;
    
    noname_2 = &iStackX_10;
    cVar5 = '\0';
    cVar7 = '\0';
    (**(*0x1cf10 + 0x140))(0x1ab00,0);
    arg3 = iStackX_10;
    if (iStackX_10 == 0) {
        uVar2 = 0x8000000000000003;
    }
    else {
        piVar3 = fcn.000115a0();
        iVar1 = *piVar3;
        while (iVar1 != -1) {
            if ((((iVar1 == 4) && (*(piVar3 + 4) == *0x1ad70)) && (*(piVar3 + 8) == *0x1ad78)) && (piVar3[0xd] < 8)) {
                *0x1adc4 = cVar7 + '\x01';
                *0x1ad90 = "U3E1";
                *0x1adc5 = piVar3[0xe];
                *0x1adc6 = *(piVar3 + 0x1d);
                cVar6 = *0x1adc4;
                *0x1adc7 = cVar5;
                *0x1add0 = cVar5;
                if (*(piVar3 + 0x1f) == '\x01') {
                    *0x1ad98 = piVar3 + 0x1d;
                    if ((*0x1ad98 != NULL) && (**0x1ad98 != '\0')) {
                        cVar6 = cVar7 + '\x02';
                        *0x1adc7 = cVar7 + '\x02';
                    }
                    cVar7 = **0x1ad98;
                    iVar4 = 0;
                    while (cVar7 != '\0') {
                        iVar4 = iVar4 + 1;
                        cVar7 = *(*0x1ad98 + iVar4);
                    }
                    *0x1ada0 = iVar4 + 1 + *0x1ad98;
                    if ((*0x1ada0 != NULL) && (**0x1ada0 != '\0')) {
                        cVar6 = cVar6 + '\x01';
                        *0x1add0 = cVar6;
                    }
                }
                else if (piVar3[0x14] == '\x01') {
                    *0x1ada0 = piVar3 + 0x1d;
                    if ((*0x1ada0 != NULL) && (**0x1ada0 != '\0')) {
                        cVar6 = cVar7 + '\x02';
                        *0x1add0 = cVar7 + '\x02';
                    }
                    cVar7 = **0x1ada0;
                    iVar4 = 0;
                    while (cVar7 != '\0') {
                        iVar4 = iVar4 + 1;
                        cVar7 = *(*0x1ada0 + iVar4);
                    }
                    *0x1ad98 = iVar4 + 1 + *0x1ada0;
                    if ((*0x1ad98 != NULL) && (**0x1ad98 != '\0')) {
                        cVar6 = cVar6 + '\x01';
                        *0x1adc7 = cVar6;
                    }
                }
                else {
                    *0x1ad98 = NULL;
                    *0x1adc7 = '\0';
                    *0x1ada0 = NULL;
                    *0x1add0 = '\0';
                }
                *0x1adc8 = *(piVar3 + 0x10);
                *0x1ade0 = cVar6 + '\x01';
                *0x1add1 = *(piVar3 + 0x29);
                *0x1add2 = piVar3[0x15];
                *0x1add4 = piVar3[0x16];
                *0x1add6 = piVar3[0x17];
                *0x1add8 = piVar3[0x18];
                *0x1add9 = *(piVar3 + 0x31);
                *0x1adda = *(piVar3[0xd] * 6 + 0x1d4e0);
                *0x1addc = *(piVar3[0xd] * 6 + 0x1d4e2);
                *0x1ade1 = cVar6 + '\x02';
                cVar7 = cVar6 + '\x03';
                *0x1adde = *(piVar3[0xd] * 6 + 0x1d4e4);
                *0x1ada8 = 0x1af88;
                *0x1adb0 = 0x1af70;
                *0x1adb8 = "To Be Filled By O.E.M.";
                *0x1ade3 = piVar3[0x19];
                *0x1ade4 = piVar3[0x1a];
                *0x1ade5 = piVar3[0x1b];
                *0x1ade6 = piVar3[0x1c];
                *0x1ade8 = *(piVar3 + 0x1d);
                *0x1adea = piVar3[0x19];
                *0x1adec = piVar3[0x1a];
                *0x1adee = piVar3[0x1b];
                *0x1ade2 = cVar7;
                fcn.00013768(0x1adc0,0x1ad90,noname_2,arg3);
                arg3 = iStackX_10;
            }
            piVar3 = piVar3 + piVar3[1];
            iVar1 = *piVar3;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000112b8 @ 0x112b8 */

int64_t fcn.000112b8(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x1cf10 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010280(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00016c00 @ 0x16c00 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

uchar fcn.00016c00(int64_t arg1)

{
    uint8_t uVar1;
    int16_t iVar2;
    bool bVar3;
    char cVar4;
    char cVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong noname_1;
    int iVar9;
    uint64_t uVar10;
    uint8_t uVar11;
    uint32_t *in_R8;
    uint32_t *arg3;
    uchar uVar12;
    uint32_t uVar13;
    char *pcVar14;
    uint32_t auStackX_18 [2];
    uint32_t auStackX_20 [2];
    uint32_t var_50h;
    int64_t var_58h;
    int32_t var_60h;
    uint32_t auStack_68 [2];
    int64_t iStack_60;
    char *pcStack_58;
    int32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    bVar3 = false;
    uVar13 = 0xff;
    iVar6 = fcn.000115d0(0x1ab40);
    if (iVar6 == 0) {
        uVar12 = 0xff;
    }
    else {
        pcVar14 = iVar6 + 0x21;
        iStack_60 = 2;
        do {
            if (*arg1 == '\x01') {
                cVar5 = *pcVar14;
                uVar10 = pcVar14[1] - 1;
                pcStack_58 = pcVar14;
                if (cVar5 == '\x02') {
                    cVar4 = fcn.0001a5d8();
                    if (((cVar4 == '\0') || (cVar4 == '\x01')) || (uVar7 = 1, cVar4 != '\x02')) {
                        uVar7 = 3;
                    }
                    if (uVar10 < uVar7) {
                        in_R8 = auStack_68;
                        fcn.0001a46c(uVar10,auStackX_20,in_R8);
                        goto code_r0x00016caa;
                    }
                }
                else {
code_r0x00016caa:
                    if (cVar5 == '\x01') {
                        cVar5 = fcn.0001a59c();
                        if (cVar5 == '\x03') {
code_r0x00016ccb:
                            uVar7 = 0xc;
                        }
                        else {
                            if (cVar5 != '\x04') {
                                if (cVar5 != '\x05') goto code_r0x00016ce5;
                                goto code_r0x00016ccb;
                            }
                            uVar7 = 0x1c;
                        }
                        if (uVar10 < uVar7) {
                            in_R8 = auStack_68;
                            fcn.0001a510(uVar10);
                        }
                    }
                }
code_r0x00016ce5:
                uVar8 = ((auStackX_20[0] & 0x1f) << 3 | auStack_68[0] & 7) << 0xc;
                uVar10 = uVar8;
                uVar11 = *((uVar8 | 0x19) + 0xc0000000);
                if (uVar11 == 0) {
                    uVar11 = 0x3f;
                    bVar3 = true;
                    uVar7 = (auStackX_20[0] & 0x1f) << 3;
                    *(((uVar7 | auStack_68[0] & 7) << 0xc | 0x19) + 0xc0000000) = 0x3f;
                    *(((uVar7 | auStack_68[0] & 7) << 0xc | 0x1a) + 0xc0000000) = 0x3f;
                }
                if ((*pcVar14 == '\x02') && (in_R8 = uVar10 + 0xb0, (*(uVar10 + 0xc00000b0) & 0x10) != 0)) {
                    iVar9 = 0x10;
                    *(uVar10 + 0xc0000c20) = *(uVar10 + 0xc0000c20) & 0xef;
                    *(uVar10 + 0xc0000c20) = *(uVar10 + 0xc0000c20) & 0xdf;
                    *(uVar10 + 0xc0000c38) = *(uVar10 + 0xc0000c38) & 0xf7;
                    *(uVar10 + 0xc00000b0) = *(uVar10 + 0xc00000b0) & 0xef;
                    *(uVar10 + 0xc0000508) = *(uVar10 + 0xc0000508) | 2;
                    uVar1 = *(uVar10 + 0xc000011a);
                    do {
                        iVar9 = iVar9 + -1;
                        if ((uVar1 & 2) == 0) break;
                        (**(*0x1cf10 + 0xf8))(2000);
                    } while (iVar9 != 0);
                }
                uVar8 = 0;
                uVar7 = uVar11 << 0x14;
                do {
                    iVar2 = *((uVar7 | 2) + 0xc0000000);
                    if (iVar2 != -1) break;
                    (**(*0x1cf10 + 0xf8))(1000);
                    uVar8 = uVar8 + 1;
                } while (uVar8 < 500);
                pcVar14 = pcStack_58;
                if ((((iVar2 == 0x1133) || (iVar2 == 0x1136)) ||
                    ((iVar2 == 0x1576 ||
                     ((((iVar2 == 0x1578 || (iVar2 == 0x15c0)) || (iVar2 == 0x15d3)) ||
                      ((iVar2 == 0x15da || (iVar2 == 0x15e7)))))))) || (iVar2 == 0x15ea)) {
                    out(0x80,0x7680);
                    noname_1 = 0x7680;
                    fcn.000136bc(0x1b1f8,0x7680,in_R8,uVar10);
                    uVar13 = 0xff;
                    *((uVar7 | 0x54c) + 0xc0000000) = 0x13;
                    cVar5 = fcn.0001a3e4(uVar7 | 0x548,noname_1,CONCAT71(in_R8 >> 8,1),auStackX_18);
                    if (cVar5 != '\0') {
                        uVar13 = auStackX_18[0] >> 8;
                    }
                    arg3 = auStackX_18;
                    *((uVar7 | 0x54c) + 0xc0000000) = 0;
                    in_R8 = NULL;
                    fcn.0001a3e4(uVar7 | 0x548,noname_1,0,arg3);
                    out(0x80,0x7681);
                    fcn.000136bc(0x1b1f8,0x7681,in_R8,arg3);
                }
                if (bVar3) {
                    uVar10 = auStack_68[0] & 7;
                    uVar7 = (auStackX_20[0] & 0x1f) << 3;
                    in_R8 = (uVar7 | uVar10) << 0xc | 0x1a;
                    *(((uVar7 | uVar10) << 0xc | 0x19) + 0xc0000000) = 0;
                    bVar3 = false;
                    *(((uVar7 | uVar10) << 0xc | 0x1a) + 0xc0000000) = 0;
                }
            }
            arg1 = arg1 + 1;
            pcVar14 = pcVar14 + 0x20;
            iStack_60 = iStack_60 + -1;
        } while (iStack_60 != 0);
        uVar12 = uVar13;
    }
    return uVar12;
}


/* fcn.00011108 @ 0x11108 */

int64_t fcn.00011108(void)

{
    if (*0x1cf20 == 0) {
        (**(*0x1cf10 + 0x140))(0x1ab50,0,0x1cf20);
    }
    return *0x1cf20;
}


/* fcn.00011180 @ 0x11180 */

uint64_t fcn.00011180(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar1 = CONCAT44(in_register_00000014,arg2);
    if (arg3 == 0) {
        uVar1 = 0;
    }
    else {
        uVar4 = uVar1;
        if ((arg1 & 1U) != 0) {
            uVar2 = arg1 >> 4;
            uVar4 = uVar1 - 1;
            uVar5 = arg1 & 0xffffffff;
            arg1 = arg1 + 1;
            *arg3 = *((uVar2 & 0x10000000 | uVar5) + 0xc0000000);
            arg3 = arg3 + 1;
        }
        if ((1 < uVar4) && ((arg1 & 2U) != 0)) {
            uVar5 = arg1 & 0xffffffff;
            uVar2 = arg1 >> 4;
            arg1 = arg1 + 2;
            uVar4 = uVar4 - 2;
            *arg3 = *((uVar2 & 0x10000000 | uVar5) + 0xc0000000);
            arg3 = arg3 + 2;
        }
        if (3 < uVar4) {
            uVar5 = uVar4 >> 2;
            uVar4 = uVar4 + uVar5 * -4;
            do {
                uVar2 = arg1 & 0xffffffff;
                uVar3 = arg1 >> 4;
                arg1 = arg1 + 4;
                *arg3 = *((uVar3 & 0x10000000 | uVar2) + 0xc0000000);
                arg3 = arg3 + 4;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        if (1 < uVar4) {
            uVar5 = arg1 & 0xffffffff;
            uVar2 = arg1 >> 4;
            arg1 = arg1 + 2;
            uVar4 = uVar4 - 2;
            *arg3 = *((uVar2 & 0x10000000 | uVar5) + 0xc0000000);
            arg3 = arg3 + 2;
        }
        if (uVar4 != 0) {
            *arg3 = *((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000);
        }
    }
    return uVar1;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.00011284 @ 0x11284 */

ulong fcn.00011284(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1cf10 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.0001161c @ 0x1161c */

void fcn.0001161c(int64_t arg1)

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
            fcn.000102f0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

{
    uint64_t in_CR0;
    
    return in_CR0 & 0xffffffffdfffffff | 0x40000000;
}


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

int64_t fcn.00010380(int64_t arg1)

{
    return arg1;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
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
    if (arg2 != 0) {
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


/* fcn.00011c08 @ 0x11c08 */

void fcn.00011c08(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t *puVar1;
    char cVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    char cVar6;
    uint16_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint32_t uVar11;
    uint16_t uVar12;
    uint16_t in_stack_00000028;
    char in_stack_00000030;
    
    uVar7 = arg1;
    uVar12 = arg4;
    if (uVar12 <= in_stack_00000028) {
        uVar11 = arg1 & 0xffff;
        do {
            iVar9 = uVar12 * 0x20;
            puVar1 = iVar9 + 0x1c + arg2;
            *puVar1 = *puVar1 & 0xfe;
            cVar2 = *((uVar12 + (arg4 & 0xffff) * uVar11) + arg3);
            *(iVar9 + 0x1d + arg2) = cVar2;
            if (cVar2 != -1) {
                if (in_stack_00000030 == '\0') {
                    cVar6 = '\0';
                }
                else {
                    cVar6 = *((uVar12 * uVar11 + (arg4 & 0xffff)) + arg3);
                }
                *(iVar9 + 0x1d + arg2) = cVar6 + cVar2;
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 <= in_stack_00000028);
    }
    uVar8 = 0;
    if ((*(arg2 + 0x1c + in_stack_00000028 * 0x20) & 1) == 0) {
        uVar11 = arg4 + 1;
        do {
            uVar5 = uVar11 & 0xffff;
            uVar4 = uVar11;
            uVar12 = uVar4;
            while (uVar12 <= in_stack_00000028) {
                iVar9 = uVar5 * 0x20;
                if ((*(iVar9 + 0x1c + arg2) & 1) == 0) {
                    uVar3 = *(((arg4 & 0xffff) * uVar7 + uVar5) + arg3);
                    if (uVar3 != 0xff) {
                        if (in_stack_00000030 == '\0') {
                            uVar10 = 0;
                        }
                        else {
                            uVar10 = *(((arg4 & 0xffff) + uVar5 * uVar7) + arg3);
                        }
                        if (uVar8 + uVar10 + uVar3 <= *(iVar9 + 0x1d + arg2)) {
                            *(iVar9 + 0x1e + arg2) = arg4;
                            *(iVar9 + 0x1d + arg2) = uVar10 + uVar8 + uVar3;
                        }
                    }
                }
                uVar12 = uVar5 + 1;
                uVar5 = uVar12;
            }
            arg4 = uVar7;
            uVar8 = 0xff;
            uVar5 = uVar11 & 0xffff;
            while (uVar4 <= in_stack_00000028) {
                iVar9 = uVar5 * 0x20;
                if (((*(iVar9 + 0x1c + arg2) & 1) == 0) && (*(iVar9 + 0x1d + arg2) < uVar8)) {
                    uVar8 = *(iVar9 + 0x1d + arg2);
                    arg4 = uVar5;
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
            }
            puVar1 = arg4 * 0x20 + 0x1c + arg2;
            *puVar1 = *puVar1 | 1;
        } while ((*(arg2 + 0x1c + in_stack_00000028 * 0x20) & 1) == 0);
    }
    return;
}


/* fcn.00011da0 @ 0x11da0 */

ulong fcn.00011da0(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int64_t iVar1;
    ulong in_stack_00000028;
    uint in_stack_00000030;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*arg3 == arg2) {
        return 0x8000000000000009;
    }
    *(iVar1 + *arg3 * 0x18) = arg4;
    *(iVar1 + 8 + *arg3 * 0x18) = in_stack_00000028;
    *(iVar1 + 0x10 + *arg3 * 0x18) = in_stack_00000030;
    *arg3 = *arg3 + 1;
    return 0;
}


/* fcn.00011de8 @ 0x11de8 */

int64_t fcn.00011de8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint8_t uVar2;
    int64_t arg2_00;
    char cVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int iVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint16_t in_stack_00000028;
    uint in_stack_00000030;
    uint in_stack_00000034;
    int64_t in_stack_00000038;
    uint16_t in_stack_00000040;
    uint16_t in_stack_00000048;
    uint8_t in_stack_00000050;
    char in_stack_00000058;
    int64_t in_stack_00000060;
    uint32_t in_stack_00000068;
    int64_t in_stack_00000070;
    uint64_t uStack_38;
    
    arg2_00 = CONCAT44(in_stack_00000034,in_stack_00000030);
    uVar5 = *(in_stack_00000040 * 0x20 + arg2_00);
    iVar15 = *(in_stack_00000048 * 0x20 + arg2_00) - uVar5;
    cVar3 = '\a';
    for (uVar2 = in_stack_00000050; '\0' < uVar2; uVar2 = uVar2 * '\x02') {
        cVar3 = cVar3 + -1;
    }
    uVar7 = cVar3;
    uVar8 = in_stack_00000050 & ~(1 << (uVar7 & 0x1f));
    for (uVar2 = uVar8; '\0' < uVar2; uVar2 = uVar2 * '\x02') {
    }
    if (in_stack_00000060 == 0) {
        *((in_stack_00000040 * in_stack_00000028 + in_stack_00000048) + in_stack_00000038) = uVar7 != arg1;
        *((in_stack_00000040 + in_stack_00000048 * in_stack_00000028) + in_stack_00000038) = uVar7 == arg1;
    }
    iVar14 = 0;
    uVar12 = 0xffffffffffffffff;
    uStack_38 = 0;
    if (arg4 != 0) {
        piVar4 = arg3 + 8;
        do {
            if (iVar15 == 0) {
                return 0;
            }
            if ((piVar4[-1] <= uVar5) && (uVar10 = *piVar4 + piVar4[-1], uVar5 < uVar10)) {
                if (uVar10 < iVar15 + uVar5) {
                    iVar11 = uVar10 - uVar5;
                }
                else {
                    iVar11 = iVar15;
                }
                if ((uVar8 & 1 << (*(piVar4 + 1) & 0x1f)) != 0) {
                    if (uVar12 == 0xffffffffffffffff) {
                        uVar12 = uVar5;
                    }
                    iVar14 = iVar14 + iVar11;
                }
                uVar5 = uVar5 + iVar11;
                iVar15 = iVar15 - iVar11;
                if ((iVar14 != 0) && ((*(piVar4 + 1) == uVar7 || (iVar15 == 0)))) {
                    uVar10 = in_stack_00000040;
                    if (in_stack_00000040 <= in_stack_00000048) {
                        do {
                            if (*(uVar10 * 0x20 + arg2_00) == uVar12) break;
                            uVar9 = uVar10 + 1;
                            uVar10 = uVar9;
                        } while (uVar9 <= in_stack_00000048);
                    }
                    uVar6 = uVar10;
                    if (uVar10 <= in_stack_00000048) {
                        do {
                            if (*(uVar6 * 0x20 + arg2_00) == iVar14 + uVar12) break;
                            uVar9 = uVar6 + 1;
                            uVar6 = uVar9;
                        } while (uVar9 <= in_stack_00000048);
                    }
                    uVar9 = uVar6;
                    if ((in_stack_00000058 == '\x02') || (uVar10 == uVar6 - 1U)) {
                        if (in_stack_00000060 == 0) {
                            pcVar1 = (in_stack_00000048 + in_stack_00000028 * in_stack_00000040) + in_stack_00000038;
                            *pcVar1 = *pcVar1 + (uVar6 - uVar10);
                        }
                        else {
                            for (; uVar10 != uVar9; uVar10 = uVar10 + 1) {
                                iVar14 = fcn.00011da0(in_stack_00000060,in_stack_00000068,in_stack_00000070,
                                                      *(uVar10 * 0x20 + arg2_00));
                                if (iVar14 < 0) {
                                    return iVar14;
                                }
                            }
                        }
                    }
                    else {
                        fcn.00011c08(in_stack_00000028,arg2_00,in_stack_00000038,uVar10);
                        if (in_stack_00000060 == 0) {
                            pcVar1 = (in_stack_00000028 * in_stack_00000040 + in_stack_00000048) + in_stack_00000038;
                            *pcVar1 = *pcVar1 + *(uVar6 * 0x20 + 0x1d + arg2_00);
                        }
                        else {
                            while (uVar9 != uVar10) {
                                iVar13 = uVar6;
                                uVar9 = *(uVar6 * 0x20 + 0x1e + arg2_00);
                                if (*((iVar13 * in_stack_00000028 + uVar9) + in_stack_00000038) +
                                    *((uVar9 * in_stack_00000028 + iVar13) + in_stack_00000038) != 0) {
                                    iVar14 = fcn.00011da0(in_stack_00000060,in_stack_00000068,in_stack_00000070,
                                                          *(uVar9 * 0x20 + arg2_00));
                                    iVar13 = uVar6;
                                    if (iVar14 < 0) {
                                        return iVar14;
                                    }
                                }
                                uVar6 = uVar9;
                                if ((uVar9 != iVar13 - 1U) &&
                                   (iVar14 = fcn.00011de8(arg1 & 0xffffffff,arg2,arg3,arg4), iVar14 < 0)) {
                                    return iVar14;
                                }
                            }
                        }
                    }
                    uVar12 = 0xffffffffffffffff;
                    iVar14 = 0;
                }
            }
            uStack_38 = uStack_38 + 1;
            piVar4 = piVar4 + 3;
        } while (uStack_38 < arg4);
    }
    return 0;
}


/* fcn.00019a1c @ 0x19a1c */

int64_t fcn.00019a1c(uint32_t arg1)

{
    int64_t iVar1;
    int in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 != arg1) {
        if (in_register_0000000c == 0) {
            iVar1 = -1;
        }
        else {
            iVar1 = 0x1f;
            for (; 0 < in_register_0000000c; in_register_0000000c = in_register_0000000c * 2) {
                iVar1 = iVar1 + -1;
            }
        }
        return iVar1 + 0x20;
    }
    if (arg1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < uVar2; uVar2 = uVar2 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.000103d0 @ 0x103d0 */

int64_t fcn.000103d0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011b68 @ 0x11b68 */

char fcn.00011b68(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    char cVar4;
    uint in_R8;
    uint64_t uVar5;
    uchar uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uchar *in_stack_00000028;
    
    uVar5 = CONCAT44(in_R8,arg3);
    cVar4 = '\0';
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    if (arg2 != 0) {
        piVar3 = arg1 + 8;
        do {
            uVar2 = piVar3[-1];
            if (uVar2 <= uVar5) {
                uVar1 = uVar2 + *piVar3;
                if (uVar5 < uVar1) {
                    if (((uVar7 & 0xff) >> (*(piVar3 + 1) & 0x1f) & 1) == 0) {
                        uVar7 = uVar7 & 0xff | 1 << (*(piVar3 + 1) & 0x1f);
                        cVar4 = cVar4 + '\x01';
                    }
                    uVar6 = uVar7;
                    if (uVar5 + arg4 <= uVar1) break;
                    arg4 = arg4 + ((uVar5 - uVar2) - *piVar3);
                    uVar5 = uVar1;
                }
            }
            uVar6 = uVar7;
            uVar8 = uVar8 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar8 < arg2);
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar6;
    }
    return cVar4;
}


/* fcn.0001195c @ 0x1195c */

ulong fcn.0001195c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg3_00;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t in_stack_00000028;
    int in_stack_00000030;
    
    uVar1 = *arg3;
    iVar9 = 0;
    iVar13 = 0;
    uVar8 = arg4 + in_stack_00000028;
    uVar10 = 0;
    uVar7 = uVar1;
    uVar11 = uVar1;
    if (uVar1 != 0) {
        puVar5 = arg1;
        do {
            if (uVar7 == uVar1) {
                uVar2 = *puVar5;
                if ((uVar2 <= arg4) && (arg4 < puVar5[1] + uVar2)) {
                    iVar13 = arg4 - uVar2;
                    uVar7 = uVar10;
                }
            }
            uVar2 = *puVar5;
            if ((uVar2 < uVar8) && (uVar8 <= puVar5[1] + uVar2)) {
                iVar9 = (*(arg1 + 8 + uVar10 * 0x18) - uVar8) + uVar2;
                uVar11 = uVar10;
                break;
            }
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 3;
        } while (uVar10 < uVar1);
    }
    if ((uVar7 == uVar11) && (*(arg1 + 0x10 + uVar7 * 0x18) == in_stack_00000030)) {
        uVar3 = 0x8000000000000014;
    }
    else {
        if (((uVar7 != 0) && (iVar13 == 0)) && (*(arg1 + -8 + uVar7 * 0x18) == in_stack_00000030)) {
            uVar7 = uVar7 - 1;
            in_stack_00000028 = in_stack_00000028 + *(arg1 + 8 + uVar7 * 0x18);
            arg4 = arg4 - *(arg1 + 8 + uVar7 * 0x18);
        }
        if (((uVar11 != uVar1 - 1) && (iVar9 == 0)) && (*(arg1 + 0x28 + uVar11 * 0x18) == in_stack_00000030)) {
            uVar11 = uVar11 + 1;
            in_stack_00000028 = in_stack_00000028 + *(arg1 + 8 + uVar11 * 0x18);
        }
        iVar4 = (uVar11 - uVar7) + -1;
        if (iVar13 != 0) {
            iVar4 = (uVar11 - uVar7) + -2;
        }
        iVar6 = iVar4 + 1;
        if (iVar9 != 0) {
            iVar6 = iVar4;
        }
        if (arg2 < uVar1 - iVar6) {
            uVar3 = 0x8000000000000009;
        }
        else {
            iVar12 = uVar11 - iVar6;
            arg3_00 = (uVar1 - uVar11) * 0x18 + -0x18;
            iVar4 = arg1 + 0x18 + uVar11 * 0x18;
            arg1_00 = arg1 + 0x18 + iVar12 * 0x18;
            if ((arg3_00 != 0) && (arg1_00 != iVar4)) {
                fcn.000102a0(arg1_00,iVar4,arg3_00);
            }
            *arg3 = *arg3 - iVar6;
            uVar8 = uVar7;
            if (iVar13 != 0) {
                uVar8 = uVar7 + 1;
                *(arg1 + 8 + uVar7 * 0x18) = iVar13;
            }
            if (iVar9 != 0) {
                *(arg1 + 8 + iVar12 * 0x18) = iVar9;
                *(arg1 + iVar12 * 0x18) = arg4 + in_stack_00000028;
                *(arg1 + 0x10 + iVar12 * 0x18) = *(arg1 + 0x10 + uVar11 * 0x18);
            }
            *(arg1 + uVar8 * 0x18) = arg4;
            *(arg1 + 8 + uVar8 * 0x18) = in_stack_00000028;
            *(arg1 + 0x10 + uVar8 * 0x18) = in_stack_00000030;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00012940 @ 0x12940 */

uint8_t fcn.00012940(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint in_register_00000014;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_00000014,arg2);
    for (; iVar1 = *(arg1 + 0x10), iVar1 == 0; arg1 = arg1 + 0x18) {
        if (iVar2 == 1) {
            return 1;
        }
        iVar2 = iVar2 + -1;
    }
    if (iVar1 == 1) {
code_r0x00012978:
        return 1 << (*(arg1 + 0x10) & 0x1f) | 1;
    }
    if (iVar1 != 4) {
        if (iVar1 == 5) goto code_r0x00012978;
        if (iVar1 != 6) {
            return 0;
        }
    }
    return 0x51;
}


/* fcn.000122f0 @ 0x122f0 */

//WARNING: Removing unreachable block (ram,0x000126cc)

int64_t fcn.000122f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    int iVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    int *piVar19;
    uint64_t *puVar20;
    uint32_t uVar21;
    uint8_t uVar22;
    int64_t iVar23;
    int64_t in_stack_00000028;
    uchar in_stack_00000030;
    unkbyte7 in_stack_00000031;
    uint32_t in_stack_00000038;
    uint32_t in_stack_00000040;
    int64_t in_stack_00000048;
    
    iVar2 = *(arg3 + -0x18 + arg4 * 0x18);
    uVar8 = 0;
    iVar6 = *(arg3 + -0x10 + arg4 * 0x18);
    uVar21 = 0;
    iVar7 = arg3;
    if (arg4 != 0) {
        puVar20 = arg3 + 8;
        iVar23 = arg4;
        do {
            uVar16 = *puVar20;
            uVar18 = puVar20[-1];
            if (uVar16 != 0) {
                uVar3 = *CONCAT71(in_stack_00000031,in_stack_00000030);
                do {
                    if (uVar18 == 0) {
                        uVar10 = arg2;
                    }
                    else {
                        uVar10 = ~uVar18 + 1 & uVar18;
                    }
                    uVar17 = uVar10;
                    if (uVar16 < uVar10) {
                        if (uVar16 == 0) {
                            uVar17 = 0;
                        }
                        else {
                            uVar22 = fcn.00019a1c(uVar16);
                            uVar17 = 1LL << (uVar22 & 0x3f);
                        }
                    }
                    if (uVar8 < uVar3 >> 5) {
                        iVar7 = uVar8 * 0x20;
                        *(iVar7 + in_stack_00000028) = uVar18;
                        *(iVar7 + 8 + in_stack_00000028) = uVar10;
                        uVar10 = puVar20[1];
                        *(iVar7 + 0x10 + in_stack_00000028) = uVar17;
                        puVar1 = iVar7 + 0x18 + in_stack_00000028;
                        *puVar1 = *puVar1 ^ (uVar10 ^ *(iVar7 + 0x18 + in_stack_00000028)) & 0x7f;
                    }
                    uVar18 = uVar18 + uVar17;
                    uVar8 = uVar8 + 1;
                    uVar16 = uVar16 - uVar17;
                } while (uVar16 != 0);
            }
            iVar7 = 0;
            uVar21 = uVar8;
            puVar20 = puVar20 + 3;
            iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
    }
    uVar16 = 0;
    uVar11 = uVar21 + 1;
    uVar8 = uVar11 * uVar11 + uVar11 * 0x20;
    if (*CONCAT71(in_stack_00000031,in_stack_00000030) < uVar8) {
        *CONCAT71(in_stack_00000031,in_stack_00000030) = uVar8;
        iVar6 = -0x7ffffffffffffffb;
    }
    else {
        *(uVar21 * 0x20 + in_stack_00000028) = iVar2 + iVar6;
        iVar2 = uVar11 * 0x20 + in_stack_00000028;
        if (uVar11 != 0) {
            iVar6 = 1;
            uVar8 = uVar16;
            do {
                if (iVar6 != 0) {
                    iVar7 = 0;
                    fcn.000103d0(uVar8 + iVar2,iVar6,0);
                }
                iVar14 = uVar16;
                uVar9 = (uVar11 - iVar14) - 1;
                if (uVar9 != 0) {
                    iVar7 = CONCAT71(iVar7 >> 8,0xff);
                    fcn.000103d0((uVar21 + 2) * iVar14 + 1 + iVar2,uVar9,iVar7);
                }
                uVar16 = iVar14 + 1U;
                iVar6 = iVar6 + 1;
                uVar8 = uVar8 + uVar11;
            } while (iVar14 + 1U < uVar11);
        }
        uVar8 = 1;
        uVar9 = 0;
        if (uVar21 != 0) {
            piVar19 = in_stack_00000028 + 0x18;
            uVar15 = uVar11;
            do {
                if ((*piVar19 << 0x19) >> 0x19 == arg1) {
                    *(uVar8 + iVar2) = 0;
                    *(uVar15 + uVar9 + iVar2) = 1;
                }
                else {
                    *(uVar8 + iVar2) = 1;
                    *(uVar15 + uVar9 + iVar2) = 0;
                }
                uVar15 = uVar15 + uVar11;
                uVar9 = uVar9 + 1;
                uVar8 = uVar8 + uVar21 + 2;
                piVar19 = piVar19 + 8;
            } while (uVar9 < uVar21);
        }
        uVar22 = 2;
        do {
            uVar21 = 0;
            uVar12 = 0;
            if (uVar11 != 0) {
                do {
                    uVar13 = uVar12 + 2;
                    uVar9 = uVar13;
                    if (uVar9 < uVar11) {
                        do {
                            iVar6 = *(uVar12 * 0x20 + in_stack_00000028);
                            uVar8 = *(uVar13 * 0x20 + in_stack_00000028) - iVar6;
                            if (*(uVar12 * 0x20 + 8 + in_stack_00000028) < uVar8) break;
                            if ((*(uVar21 * uVar11 + uVar9 + iVar2) == -1) && ((uVar8 & uVar8 - 1) == 0)) {
                                uVar4 = fcn.00011b68(arg3,arg4,iVar6,uVar8);
                                if (uVar4 == uVar22) {
                                    fcn.00011de8(arg1 & 0xffffffff,arg2,arg3,arg4);
                                }
                                else if (uVar22 == 2) break;
                            }
                            uVar13 = uVar13 + 1;
                            uVar9 = uVar13;
                        } while (uVar9 < uVar11);
                    }
                    uVar12 = uVar12 + 1;
                    uVar21 = uVar12;
                } while (uVar12 < uVar11);
            }
            iVar6 = 0;
            uVar22 = uVar22 + 1;
        } while (uVar22 < 4);
        fcn.00011c08(uVar11 & 0xffff,in_stack_00000028,iVar2,0);
        uVar12 = uVar11 - 1;
        do {
            do {
                if (uVar12 == 0) goto code_r0x000127f1;
                cVar5 = -1;
                iVar7 = uVar12 * 0x20;
                uVar13 = *(iVar7 + 0x1e + in_stack_00000028);
                if (*(uVar13 * uVar11 + uVar12 + iVar2) != '\0') {
                    iVar6 = *(uVar13 * 0x20 + in_stack_00000028);
                    cVar5 = fcn.00011b68(arg3,arg4,iVar6,*(iVar7 + in_stack_00000028) - iVar6);
                    iVar6 = fcn.00011da0(in_stack_00000038,in_stack_00000040,in_stack_00000048,iVar6);
                    if (iVar6 < 0) goto code_r0x000127f1;
                }
                uVar21 = uVar12;
                uVar12 = uVar13;
            } while (uVar13 == uVar21 - 1);
            if (cVar5 == -1) {
                iVar6 = *(uVar13 * 0x20 + in_stack_00000028);
                fcn.00011b68(arg3,arg4,iVar6,*(iVar7 + in_stack_00000028) - iVar6);
            }
            iVar6 = fcn.00011de8(arg1 & 0xffffffff,arg2,arg3,arg4);
        } while (-1 < iVar6);
    }
code_r0x000127f1:
    return iVar6;
}


/* fcn.000118d8 @ 0x118d8 */

void fcn.000118d8(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t auStackX_8 [8];
    uint32_t auStackX_10 [2];
    
    fcn.00010330(0x80000000,auStackX_10,0,0);
    if (auStackX_10[0] < 0x80000008) {
        auStackX_8[0] = 0x24;
    }
    else {
        fcn.00010330(0x80000008,auStackX_8,0,0);
    }
    uVar1 = (1LL << (auStackX_8[0] & 0x3f)) - 1;
    *arg1 = uVar1;
    *arg2 = uVar1 & 0xfffffffffffff000;
    return;
}


/* fcn.00011838 @ 0x11838 */

int fcn.00011838(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int iVar2;
    int64_t in_stack_00000028;
    
    fcn.00010280(in_stack_00000028,0x300);
    iVar2 = 0;
    if (arg2 != 0) {
        puVar1 = in_stack_00000028 + 0x10;
        do {
            if ((*(arg1 + 8) & 0x800) != 0) {
                *(puVar1 + -4) = *arg1 & arg4;
                *(puVar1 + -2) = (~(*(arg1 + 8) & arg4) & arg3) + 1;
                iVar2 = iVar2 + 1;
                *puVar1 = *arg1;
            }
            arg1 = arg1 + 0x10;
            puVar1 = puVar1 + 6;
            arg2 = arg2 + -1;
        } while (arg2 != 0);
    }
    return iVar2;
}


/* fcn.00012804 @ 0x12804 */

ulong fcn.00012804(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t in_stack_00000028;
    
    uVar4 = 0;
    uVar5 = arg2 & 0xffffffff;
    if (arg2 != 0) {
        piVar3 = arg1 + 8;
        do {
            if (((*piVar3 != 0) && (piVar3[1] == 6)) &&
               (iVar1 = fcn.0001195c(arg3,arg4,in_stack_00000028,piVar3[-1]), iVar1 == -0x7ffffffffffffff7)) {
                return 0x8000000000000009;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
        piVar2 = arg1 + 0x10;
        do {
            if (((*(piVar2 + -2) != 0) && (*piVar2 != 6)) &&
               ((*piVar2 != 0 &&
                (iVar1 = fcn.0001195c(arg3,arg4,in_stack_00000028,*(piVar2 + -4)), iVar1 == -0x7ffffffffffffff7))))
            {
                return 0x8000000000000009;
            }
            uVar4 = uVar4 + 1;
            piVar2 = piVar2 + 6;
        } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
        piVar3 = arg1 + 8;
        do {
            if (((*piVar3 != 0) && (piVar3[1] == 0)) &&
               (iVar1 = fcn.0001195c(arg3,arg4,in_stack_00000028,piVar3[-1]), iVar1 == -0x7ffffffffffffff7)) {
                return 0x8000000000000009;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar4 < uVar5);
    }
    return 0;
}


/* fcn.00012984 @ 0x12984 */

int64_t fcn.00012984(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint *arg3_00;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int iVar15;
    uint64_t *in_stack_00000030;
    uint32_t in_stack_00000038;
    uint32_t in_stack_00000040;
    uint *in_stack_00000048;
    
    uVar10 = 0;
    *in_stack_00000048 = 0;
    uVar14 = 0;
    if (arg4 != 0) {
        do {
            uVar6 = *(arg3 + uVar10 * 0x18);
            arg3_00 = in_stack_00000048;
            while (iVar9 = uVar10, uVar10 < arg4) {
                if (uVar6 == 0) {
                    uVar5 = arg2;
                }
                else {
                    uVar5 = ~uVar6 + 1 & uVar6;
                }
                iVar4 = uVar10 * 3;
                uVar5 = uVar5 + uVar6;
                while (uVar13 = uVar5, uVar13 <= *(arg3 + 8 + iVar4 * 8) + *(arg3 + iVar4 * 8)) {
                    if (((uVar14 <= *in_stack_00000030) && (*(arg3 + 0x10 + iVar4 * 8) != arg1)) &&
                       (iVar3 = fcn.00011da0(in_stack_00000038,in_stack_00000040,arg3_00,uVar6), iVar3 < 0)) {
                        return iVar3;
                    }
                    if (uVar13 == 0) {
                        uVar6 = arg2;
                    }
                    else {
                        uVar6 = ~uVar13 + 1 & uVar13;
                    }
                    uVar5 = uVar13 + uVar6;
                    uVar6 = uVar13;
                }
                iVar3 = *(arg3 + iVar4 * 8);
                *(arg3 + iVar4 * 8) = uVar6;
                piVar1 = arg3 + 8 + iVar4 * 8;
                *piVar1 = *piVar1 + (iVar3 - uVar6);
                if (*(arg3 + 8 + iVar4 * 8) != 0) break;
                uVar10 = iVar9 + 1;
            }
            uVar5 = uVar14;
            if (uVar10 == arg4) break;
            iVar4 = arg3 + uVar10 * 0x18;
            uVar12 = *(iVar4 + 0x10);
            if (uVar12 == 0) {
                if (arg4 - uVar10 == 1) {
                    uVar2 = 1;
                }
                else {
                    uVar2 = fcn.00012940(iVar4 + 0x18,(arg4 - uVar10) - 1);
                }
            }
            else if (uVar12 == 1) {
code_r0x00012aef:
                uVar2 = 1 << (uVar12 & 0x1f) | 1;
            }
            else {
                if (uVar12 != 4) {
                    if (uVar12 == 5) goto code_r0x00012aef;
                    if (uVar12 != 6) {
                        uVar2 = 0;
                        goto code_r0x00012b10;
                    }
                }
                uVar2 = 0x51;
            }
code_r0x00012b10:
            uVar12 = iVar9 + 1;
            uVar11 = uVar12;
            uVar13 = uVar10;
            if (uVar11 < arg4) {
                uVar7 = uVar11;
                do {
                    if ((uVar2 >> (*(arg3 + 0x10 + uVar7 * 0x18) & 0x1f) & 1) == 0) break;
                    uVar12 = uVar12 + 1;
                    uVar13 = uVar13 + 1;
                    uVar7 = uVar12;
                } while (uVar7 < arg4);
            }
            if (uVar6 == 0) {
                uVar7 = arg2;
            }
            else {
                uVar7 = ~uVar6 + 1 & uVar6;
            }
            iVar3 = (*(arg3 + 8 + uVar13 * 0x18) - uVar6) + *(arg3 + uVar13 * 0x18);
            uVar13 = uVar11;
            if (iVar3 == 0) {
                uVar8 = 0;
            }
            else {
                uVar2 = fcn.00019a1c(iVar3);
                uVar8 = 1LL << (uVar2 & 0x3f);
            }
            if (uVar7 < uVar8) {
                uVar8 = uVar7;
            }
            uVar8 = uVar8 + uVar6;
            while ((iVar15 = uVar10, uVar11 < arg4 && (*(arg3 + uVar11 * 0x18) < uVar8))) {
                uVar10 = iVar15 + 1;
                uVar11 = uVar13 + 1;
                uVar13 = uVar11;
            }
            iVar3 = *(arg3 + 8 + uVar10 * 0x18);
            *(arg3 + 8 + uVar10 * 0x18) = uVar8 - *(arg3 + uVar10 * 0x18);
            uVar6 = *in_stack_00000030;
            iVar4 = fcn.000122f0(arg1 & 0xffffffff,arg2,iVar4,(iVar15 - iVar9) + 1);
            if (iVar4 == -0x7ffffffffffffffb) {
                uVar5 = uVar6;
                if (uVar6 < uVar14) {
                    uVar5 = uVar14;
                }
                iVar4 = 0;
            }
            if (iVar4 < 0) {
                return iVar4;
            }
            if (iVar3 == *(arg3 + 8 + uVar10 * 0x18)) {
                uVar10 = iVar15 + 1;
            }
            else {
                *(arg3 + 8 + uVar10 * 0x18) = iVar3 - *(arg3 + 8 + uVar10 * 0x18);
                *(arg3 + uVar10 * 0x18) = uVar8;
            }
            uVar14 = uVar5;
        } while (uVar10 < arg4);
        if (*in_stack_00000030 < uVar5) {
            *in_stack_00000030 = uVar5;
            return -0x7ffffffffffffffb;
        }
    }
    return 0;
}


/* fcn.0001174c @ 0x1174c */

uint64_t fcn.0001174c(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uStackX_8;
    
    uVar1 = fcn.000103c0();
    fcn.000103b0();
    *(arg1 + 8) = uVar1 >> 9 & 1;
    fcn.00010360();
    uVar1 = fcn.00010390();
    *arg1 = uVar1;
    fcn.00010380(uVar1 & 0xffffffffffffff7f);
    fcn.000102e0();
    uStackX_8 = rdmsr(0x2ff);
    uStackX_8 = uStackX_8 & 0xfffffffffffff7ff;
    wrmsr(0x2ff,uStackX_8);
    return uStackX_8;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(void)

{
    uint64_t in_CR0;
    
    return in_CR0 & 0xffffffff9fffffff;
}


/* fcn.00012cd0 @ 0x12cd0 */

//WARNING: Type propagation algorithm not settling

uint64_t fcn.00012cd0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    bool bVar2;
    char cVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t *puVar11;
    uint64_t *puVar12;
    uint32_t *puVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint32_t uVar16;
    uint64_t uVar17;
    char *pcVar18;
    uint64_t uVar19;
    uint64_t uVar20;
    uint *puVar21;
    int iVar22;
    int64_t iVar23;
    uint32_t uStack0000000000000028;
    uint32_t uStack_f88;
    int64_t iStack_f80;
    char cStack_f78;
    uint64_t uStack_f70;
    uint64_t uStack_f68;
    uint64_t uStack_f60;
    char acStack_f58 [32];
    uint64_t auStack_f38 [12];
    uint64_t auStack_ed8 [12];
    uint64_t auStack_e78 [2];
    int aiStack_e68 [188];
    uint64_t auStack_b78 [96];
    ulong uStack_878;
    int64_t iStack_870;
    uint32_t uStack_868;
    uchar auStack_248 [520];
    
    uVar7 = 0;
    fcn.000118d8(&iStack_f80,&uStack_f70);
    fcn.000103d0(acStack_f58,0x20,0);
    bVar2 = false;
    uStack0000000000000028 = 0;
    cVar3 = fcn.0001366c();
    iVar23 = iStack_f80;
    if (cVar3 == '\0') {
        return 0x8000000000000003;
    }
    uVar10 = uVar7;
    do {
        iVar15 = *(arg4 + 8 + uVar10 * 0x18);
        if (iVar15 == 0) {
            return 0x8000000000000002;
        }
        uVar17 = *(arg4 + uVar10 * 0x18);
        if ((~uStack_f70 & uVar17) != 0) {
            return 0x8000000000000003;
        }
        uVar17 = iVar15 + uVar17;
        if (((~uStack_f70 & uVar17) != 0) && (uVar17 != iStack_f80 + 1U)) {
            return 0x8000000000000003;
        }
        uVar8 = *(arg4 + 0x10 + uVar10 * 0x18);
        if ((1 < uVar8) && (2 < uVar8 - 4)) {
            return 0x8000000000000002;
        }
        if (0x100000 < uVar17) {
            bVar2 = true;
        }
        uVar8 = uVar10 + 1;
        uVar10 = uVar8;
    } while (uVar8 == 0);
    if (bVar2) {
        uVar10 = rdmsr(0xfe);
        uStack0000000000000028 = uVar10 & 0xff;
        fcn.000117c4(arg1,uVar10 & 0xff,auStack_248);
        uVar8 = uVar10;
        uVar17 = uVar8;
        fcn.00011838(auStack_248,uVar10 & 0xff,iStack_f80,uStack_f70);
        if (arg1 == 0) {
            uVar1 = rdmsr(0x2ff);
            uVar9 = uVar1;
        }
        else {
            uVar9 = *(arg1 + 600);
        }
        iStack_870 = iStack_f80 + 1;
        iStack_f80 = 1;
        uStack_878 = 0;
        uStack_868 = uVar9 & 7;
        fcn.00012804(auStack_b78,uVar17,&uStack_878,0x42);
        uVar6 = fcn.0001195c(&uStack_878,0x42,&iStack_f80,0);
        uVar20 = 0;
        uVar14 = uVar7;
        do {
            uVar7 = uVar6;
            uVar6 = *(arg4 + uVar20 * 0x18);
            if (uVar6 < 0x100000) {
                if (0x100000 - uVar6 < *(arg4 + 8 + uVar20 * 0x18)) {
                    uVar6 = 0x100000;
                    goto code_r0x00012edf;
                }
            }
            else {
code_r0x00012edf:
                uVar7 = fcn.0001195c(&uStack_878,0x42,&iStack_f80,uVar6);
                if (uVar7 == 0x8000000000000014) {
                    uVar7 = 0;
                }
                else {
                    if (uVar7 == 0x8000000000000009) {
                        return 0x8000000000000009;
                    }
                    uVar14 = 1;
                }
            }
            uVar16 = uVar20 + 1;
            uVar20 = uVar16;
            uVar6 = uVar7;
        } while (uVar16 == 0);
        if (uVar14 != '\0') {
            uVar4 = fcn.00019a1c(iVar23);
            uVar7 = fcn.00012984(uVar9 & 7,1LL << (uVar4 & 0x3f),&uStack_878,iStack_f80);
            uVar6 = 0;
            if (uVar7 < 0) {
                return uVar7;
            }
            uVar14 = uVar6;
            if (uStack_f88 != 0) {
                do {
                    iVar22 = uVar14;
                    if ((auStack_e78[uVar14 * 3] == 0) && (auStack_e78[uVar14 * 3 + 1] == 0x100000)) {
                        uStack_f88 = uStack_f88 - 1;
                        if (((uStack_f88 - iVar22) * 3 != 0) &&
                           (auStack_e78 + uVar14 * 3 != auStack_e78 + (iVar22 + 1) * 3)) {
                            fcn.000102a0(auStack_e78 + uVar14 * 3,auStack_e78 + (iVar22 + 1) * 3,
                                         (uStack_f88 - iVar22) * 0x18);
                        }
                        break;
                    }
                    uVar14 = iVar22 + 1U;
                } while (iVar22 + 1U < uStack_f88);
            }
            if (uVar8 < uStack_f88) {
                return 0x8000000000000009;
            }
            if (uVar10 != 0) {
                pcVar18 = acStack_f58;
                puVar12 = auStack_b78 + 2;
                do {
                    uVar10 = puVar12[-1];
                    *pcVar18 = '\0';
                    if (uVar10 != 0) {
                        uVar9 = 0;
                        if (uStack_f88 != 0) {
                            uVar14 = uVar6;
                            do {
                                uVar9 = uVar14;
                                if (((puVar12[-2] == auStack_e78[uVar14 * 3]) && (uVar10 == auStack_e78[uVar14 * 3 + 1])
                                    ) && (*puVar12 == aiStack_e68[uVar14 * 6])) break;
                                uVar9 = uVar9 + 1;
                                uVar14 = uVar9;
                            } while (uVar9 < uStack_f88);
                        }
                        if (uVar9 == uStack_f88) {
                            puVar12[-1] = 0;
                            *pcVar18 = '\x01';
                        }
                        else {
                            auStack_e78[uVar9 * 3 + 1] = 0;
                        }
                    }
                    puVar12 = puVar12 + 3;
                    pcVar18 = pcVar18 + 1;
                    uVar17 = uVar17 - 1;
                } while (uVar17 != 0);
            }
            if (uStack_f88 != 0) {
                puVar12 = auStack_e78 + 1;
                uVar10 = uVar6;
                do {
                    if (*puVar12 != 0) {
                        if (uVar6 < uVar8) {
                            puVar11 = auStack_b78 + uVar6 * 3 + 1;
                            do {
                                if (*puVar11 == 0) break;
                                uVar9 = uVar6 + 1;
                                uVar6 = uVar9;
                                puVar11 = puVar11 + 3;
                            } while (uVar9 < uVar8);
                        }
                        if (auStack_b78 + uVar6 * 3 != auStack_e78 + uVar10 * 3) {
                            fcn.000102a0(auStack_b78 + uVar6 * 3,auStack_e78 + uVar10 * 3,0x18);
                        }
                        acStack_f58[uVar6] = '\x01';
                    }
                    uVar9 = uVar10 + 1;
                    uVar10 = uVar9;
                    puVar12 = puVar12 + 3;
                } while (uVar9 < uStack_f88);
            }
        }
    }
    uVar10 = 0;
    fcn.00010280(auStack_ed8,0x58);
    fcn.00010280(auStack_f38,0x58);
    puVar21 = 0x1b170;
    iVar23 = 0xb;
    do {
        uVar17 = *(arg4 + uVar10 * 0x18);
        if (uVar17 < 0x100000) {
            uVar8 = *(arg4 + 0x10 + uVar10 * 0x18);
            uVar6 = 0xffffffff;
            uVar7 = *(arg4 + 8 + uVar10 * 0x18);
            iStack_f80 = CONCAT44(iStack_f80._4_4_,uVar8);
            do {
                if (uVar7 == 0) break;
                uVar9 = uVar6 + 1;
                uVar6 = uVar9;
                if (10 < uVar9) {
                    return 0x8000000000000003;
                }
                puVar13 = uVar6 * 0xc + 0x1b178;
                do {
                    if ((puVar13[-1] <= uVar17) && (uVar17 < puVar13[-1] + *puVar13 * 8)) break;
                    uVar9 = uVar6 + 1;
                    uVar6 = uVar9;
                    puVar13 = puVar13 + 3;
                } while (uVar9 < 0xb);
                if (10 < uVar6) {
                    return 0x8000000000000003;
                }
                uVar9 = *(uVar6 * 0xc + 0x1b178);
                uVar14 = uVar9;
                uVar16 = uVar17 - *(uVar6 * 0xc + 0x1b174);
                uVar5 = uVar16 / uVar9;
                if (uVar16 % uVar9 != 0) {
                    return 0x8000000000000003;
                }
                uVar20 = (8 - uVar5) * uVar14;
                if (uVar7 < uVar20) {
                    if ((uVar7 & 0xffffffff) % uVar14 != 0) {
                        return 0x8000000000000003;
                    }
                    iVar22 = (8 - (uVar7 & 0xffffffff) / uVar14) - uVar5;
                    uVar20 = uVar7;
                }
                else {
                    iVar22 = 0;
                }
                uVar14 = 0xffffffffffffffff;
                uVar19 = uVar8 * 0x101010101010101;
                if (uVar5 != 0) {
                    uVar4 = uVar5 << 3;
                    uVar14 = -1LL << (uVar4 & 0x3f);
                    uVar19 = uVar19 & uVar19 << (uVar4 & 0x3f);
                }
                if (iVar22 != 0) {
                    uVar4 = iVar22 << 3;
                    uVar14 = uVar14 & uVar14 >> (uVar4 & 0x3f);
                    uVar19 = uVar19 & uVar19 >> (uVar4 & 0x3f);
                }
                puVar12 = auStack_ed8 + uVar6;
                *puVar12 = *puVar12 | uVar14;
                uVar7 = uVar7 - uVar20;
                uVar17 = uVar17 + uVar20;
                auStack_f38[uVar6] = ~uVar14 & auStack_f38[uVar6] | uVar19;
            } while (uVar17 < 0x100000);
            uVar7 = 0;
        }
        uVar8 = uVar10 + 1;
        uVar10 = uVar8;
        if (uVar8 != 0) {
            bVar2 = false;
            iVar15 = 0;
            do {
                uVar10 = *(auStack_ed8 + iVar15);
                if (uVar10 != 0) {
                    if (arg1 == 0) {
                        if (!bVar2) {
                            fcn.0001174c(&iStack_f80);
                            bVar2 = true;
                        }
                        uVar10 = rdmsr(*puVar21);
                        wrmsr(*puVar21,uVar10 & ~*(auStack_ed8 + iVar15) | *(auStack_f38 + iVar15));
                    }
                    else {
                        puVar12 = auStack_f38 + iVar15;
                        *((arg1 - auStack_f38) + puVar12) = ~uVar10 & *((arg1 - auStack_f38) + puVar12) | *puVar12;
                    }
                }
                iVar15 = iVar15 + 8;
                puVar21 = puVar21 + 3;
                iVar23 = iVar23 + -1;
            } while (iVar23 != 0);
            uVar10 = 0;
            if (uStack0000000000000028 != 0) {
                pcVar18 = acStack_f58;
                iVar22 = 0x201;
                puVar12 = auStack_b78;
                do {
                    if (*pcVar18 != '\0') {
                        if (puVar12[1] == 0) {
                            uStack_f68 = 0;
                            uStack_f60 = 0;
                        }
                        else {
                            uStack_f68 = *puVar12 & uStack_f70 | puVar12[2];
                            uStack_f60 = ~(puVar12[1] - 1) & uStack_f70 | 0x800;
                        }
                        if (arg1 == 0) {
                            if (!bVar2) {
                                fcn.0001174c(&iStack_f80);
                                bVar2 = true;
                            }
                            wrmsr(iVar22 + -1,uStack_f68);
                            wrmsr(iVar22,uStack_f60);
                        }
                        else {
                            puVar11 = arg1 + 0x58 + uVar10 * 0x10;
                            if (puVar11 != &uStack_f68) {
                                fcn.000102a0(puVar11,&uStack_f68,0x10);
                            }
                        }
                    }
                    uVar8 = uVar10 + 1;
                    uVar10 = uVar8;
                    iVar22 = iVar22 + 2;
                    pcVar18 = pcVar18 + 1;
                    puVar12 = puVar12 + 3;
                } while (uVar8 < uStack0000000000000028);
            }
            if (arg1 == 0) {
                if (bVar2) {
                    uVar10 = rdmsr(0x2ff);
                    wrmsr(0x2ff,(uVar10 >> 0x20) << 0x20 | uVar10 & 0xffffffff | 0xc00);
                    fcn.000102e0(0x2ff,uVar10 >> 0x20);
                    fcn.00010310();
                    fcn.00010380(iStack_f80);
                    if (cStack_f78 == '\0') {
                        fcn.000103b0();
                    }
                    else {
                        fcn.000103a0();
                    }
                }
            }
            else {
                *(arg1 + 600) = *(arg1 + 600) | 0xc00;
            }
            return uVar7;
        }
    } while( true );
}


/* fcn.00019ba4 @ 0x19ba4 */

ulong fcn.00019ba4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00019b78(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00019c15;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x00019c15:
    cVar1 = *arg3;
    if (cVar1 != '\0') {
        arg3 = arg3 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg3);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.00013768 @ 0x13768 */

ulong fcn.00013768(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    char *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t arg1_00;
    int64_t arg1_01;
    uint64_t uVar7;
    uint64_t uVar8;
    ushort *in_stack_00000028;
    
    uVar8 = *(arg1 + 1);
    iVar5 = arg1;
    if (arg2 != 0) {
        uVar7 = 0;
        do {
            pcVar2 = *(arg2 + uVar7 * 8);
            if ((pcVar2 != NULL) && (*pcVar2 != '\0')) {
                iVar5 = 0;
                cVar1 = *pcVar2;
                while (cVar1 != '\0') {
                    iVar5 = iVar5 + 1;
                    cVar1 = pcVar2[iVar5];
                }
                uVar8 = uVar8 + 1 + iVar5;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 < 6);
    }
    arg1_01 = (uVar8 == *(arg1 + 1)) + 1 + uVar8;
    iVar5 = fcn.000112b8(iVar5,arg1_01);
    if (iVar5 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        if ((*(arg1 + 1) != 0) && (iVar5 != arg1)) {
            fcn.000102a0(iVar5,arg1,*(arg1 + 1));
        }
        arg1_00 = *(arg1 + 1) + iVar5;
        if (arg2 != 0) {
            uVar8 = 0;
            do {
                pcVar2 = *(arg2 + uVar8 * 8);
                if ((pcVar2 != NULL) && (*pcVar2 != '\0')) {
                    fcn.00019ba4(arg1_00,(arg1_01 - *(arg1 + 1)) - 1,pcVar2);
                    pcVar2 = *(arg2 + uVar8 * 8);
                    iVar4 = 0;
                    cVar1 = *pcVar2;
                    while (cVar1 != '\0') {
                        iVar4 = iVar4 + 1;
                        cVar1 = pcVar2[iVar4];
                    }
                    iVar6 = 0;
                    arg1_00 = arg1_00 + 1 + iVar4;
                    cVar1 = *pcVar2;
                    while (cVar1 != '\0') {
                        iVar6 = iVar6 + 1;
                        cVar1 = pcVar2[iVar6];
                    }
                    arg1_01 = arg1_01 + (-1 - iVar6);
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < 6);
        }
        *in_stack_00000028 = 0xfffe;
        uVar3 = (**arg3)(arg3,0,in_stack_00000028,iVar5);
        (**(*0x1cf10 + 0x48))(iVar5);
    }
    return uVar3;
}


/* fcn.0001a228 @ 0x1a228 */

//WARNING: Removing unreachable block (ram,0x0001a2a0)

ulong fcn.0001a228(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg1_00;
    ulong uVar3;
    int64_t iVar4;
    char *pcVar5;
    char *pcVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    uint8_t uVar11;
    char cVar12;
    ushort auStackX_8 [4];
    
    uVar8 = *(arg1 + 1);
    cVar12 = '\0';
    uVar11 = 0;
    pcVar6 = arg2;
    if (*(arg1 + 4) != '\0') {
        uVar9 = 0;
        pcVar5 = arg2;
        do {
            pcVar6 = *(arg3 + uVar11 * 8);
            if (pcVar6 == NULL) {
                cVar1 = '\0';
            }
            else {
                iVar2 = 0;
                cVar1 = *pcVar6;
                while (cVar1 != '\0') {
                    iVar2 = iVar2 + 1;
                    cVar1 = pcVar6[iVar2];
                }
                uVar8 = uVar8 + 1 + iVar2;
                cVar12 = cVar12 + '\x01';
                cVar1 = cVar12;
            }
            *pcVar5 = cVar1;
            pcVar6 = pcVar5 + 1;
            if ((uVar9 + 1 & 0x80000001) == 0) {
                pcVar6 = pcVar5 + 6;
            }
            uVar11 = uVar11 + 1;
            uVar9 = uVar11;
            pcVar5 = pcVar6;
        } while (uVar9 < *(arg1 + 4) * 2);
    }
    if (uVar8 == *(arg1 + 1)) {
        iVar2 = uVar8 + 2;
    }
    else {
        iVar2 = uVar8 + 1;
    }
    arg1_00 = fcn.000112b8(pcVar6,iVar2);
    if (arg1_00 == 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        if (arg1_00 != arg1) {
            fcn.000102a0(arg1_00,arg1,5);
        }
        iVar10 = *(arg1 + 4) * 7;
        if ((iVar10 != 0) && (arg1_00 + 5 != arg2)) {
            fcn.000102a0(arg1_00 + 5,arg2,iVar10);
        }
        uVar11 = 0;
        iVar10 = *(arg1 + 1) + arg1_00;
        if (*(arg1 + 4) != '\0') {
            do {
                iVar4 = *(arg3 + uVar11 * 8);
                if (iVar4 != 0) {
                    fcn.00019ba4(iVar10,iVar2 - *(arg1 + 1),iVar4);
                    pcVar6 = *(arg3 + uVar11 * 8);
                    iVar4 = 0;
                    cVar12 = *pcVar6;
                    while (cVar12 != '\0') {
                        iVar4 = iVar4 + 1;
                        cVar12 = pcVar6[iVar4];
                    }
                    iVar7 = 0;
                    iVar10 = iVar10 + 1 + iVar4;
                    cVar12 = *pcVar6;
                    while (cVar12 != '\0') {
                        iVar7 = iVar7 + 1;
                        cVar12 = pcVar6[iVar7];
                    }
                    iVar2 = iVar2 + (-1 - iVar7);
                }
                uVar11 = uVar11 + 1;
            } while (uVar11 < *(arg1 + 4) * 2);
        }
        auStackX_8[0] = 0xfffe;
        uVar3 = (***arg4)(*arg4,0,auStackX_8,arg1_00);
        (**(*0x1cf10 + 0x48))(arg1_00);
    }
    return uVar3;
}


/* fcn.0001a178 @ 0x1a178 */

ulong fcn.0001a178(int64_t arg1)

{
    uchar uVar1;
    uint16_t uVar2;
    char cVar3;
    ulong uVar4;
    
    if (*0xc00fe000 == -1) {
        uVar4 = 0x800000000000000e;
    }
    else {
        cVar3 = fcn.0001a12c(0xfe000);
        uVar2 = *0xc00fe0cc;
        uVar1 = *0xc00fe004;
        if (cVar3 != '\0') {
            *0xc00fe0cc = *0xc00fe0cc & 0xfffc;
            if ((*0xc00fe010 & 0xfffe0000) != 0) {
                *0xc00fe004 = 2;
                uVar4 = fcn.0001a740(*0xc00fe010 & 0xfffe0000,arg1);
                *0xc00fe004 = uVar1;
                *0xc00fe0cc = uVar2;
                return uVar4;
            }
        }
        uVar4 = 0x8000000000000007;
    }
    return uVar4;
}


/* fcn.0001425c @ 0x1425c */

void fcn.0001425c(void)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint16_t auStackX_8 [4];
    ulong uStackX_10;
    uint8_t auStack_18 [16];
    
    uStackX_10 = 9;
    auStack_18[0] = 0;
    auStack_18[1] = 0;
    auStack_18[2] = 0;
    auStack_18[3] = 0;
    auStack_18[4] = 0;
    auStack_18[5] = 0;
    auStack_18[6] = 0;
    auStack_18[7] = 0;
    auStack_18[8] = 0;
    uVar2 = 0;
    auStackX_8[0] = 0;
    iVar1 = (**(*0x1cf18 + 0x48))(L"PlatformFviSetupDataVar",0x1aaf0,0,&uStackX_10,auStack_18);
    if ((iVar1 < 0) || (auStack_18[0] == 0)) {
        if (iVar1 == -0x7ffffffffffffff2) {
            iVar1 = fcn.0001a178(auStackX_8);
            if (iVar1 < 0) {
                uVar2 = 0;
            }
            else {
                uVar2 = auStackX_8[0];
            }
            auStack_18[0] = uVar2;
            (**(*0x1cf18 + 0x58))(L"PlatformFviSetupDataVar",0x1aaf0,3,9,auStack_18);
        }
    }
    else {
        uVar2 = auStack_18[0];
    }
    *0x1af05 = uVar2;
    *0x1af02 = 0;
    *0x1af04 = 0;
    return;
}


/* fcn.00013dd8 @ 0x13dd8 */

//WARNING: Variable defined which should be unmapped: var_14h
//WARNING: Variable defined which should be unmapped: var_18h

void fcn.00013dd8(void)

{
    int16_t iVar1;
    char *pcVar2;
    int16_t *piVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t *piVar6;
    char *pcVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    uint32_t uVar10;
    int64_t *piVar11;
    int64_t iStackX_8;
    ulong *puStackX_10;
    int64_t *piStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    int64_t aiStack_48 [2];
    int iStack_38;
    uchar auStack_34 [4];
    int64_t var_28h_2;
    int32_t var_18h;
    int64_t var_14h;
    int32_t var_ch;
    
    piVar9 = NULL;
    iStack_38 = 0;
    _auStack_34 = 0;
    var_28h_2._4_4_ = 0;
    var_28h = 0;
    piStackX_18 = NULL;
    iStackX_8 = 0;
    iVar4 = (**(*0x1cf10 + 0x138))(2,0x1a980,0,&piStackX_18,&iStackX_8);
    if (iVar4 < 0) {
        return;
    }
    piVar8 = piVar9;
    if (piStackX_18 != NULL) {
        do {
            iVar4 = (**(*0x1cf10 + 0x98))(*(iStackX_8 + piVar8 * 8),0x1a980,aiStack_48);
            if ((-1 < iVar4) && (pcVar2 = *(aiStack_48[0] + 0x20), pcVar2 != NULL)) {
                pcVar7 = pcVar2;
                while ((pcVar5 = pcVar2, *pcVar5 != '\x7f' || (pcVar5[1] != -1))) {
                    pcVar7 = pcVar5;
                    pcVar2 = pcVar5 + *(pcVar5 + 2);
                }
                if ((*pcVar7 != '\x04') || (piVar11 = pcVar7 + 4, pcVar7[1] != '\x06')) {
                    piVar11 = piVar9;
                }
                if (((piVar11 != NULL) && (*piVar11 == *0x1ae20)) && (piVar11[1] == *0x1ae28)) {
                    iVar4 = (**(*0x1cf10 + 0x98))(*(iStackX_8 + piVar8 * 8),0x1acc0,&puStackX_10);
                    if ((iVar4 < 0) || (puStackX_10 == NULL)) {
                        iVar4 = (**(*0x1cf10 + 0x98))(*(iStackX_8 + piVar8 * 8),0x1aa10,&puStackX_10);
                    }
                    if ((((-1 < iVar4) && (puStackX_10 != NULL)) &&
                        ((iVar4 = (**puStackX_10)(puStackX_10,0x1b35c,&var_28h), -1 < iVar4 ||
                         (iVar4 = (**puStackX_10)(puStackX_10,0x1b360,&var_28h), -1 < iVar4)))) && (var_28h != 0)) {
                        piVar8 = piVar9;
                        piVar11 = piVar9;
                        goto code_r0x00013f69;
                    }
                    break;
                }
            }
            piVar8 = piVar8 + 1;
        } while (piVar8 < piStackX_18);
    }
code_r0x00013fbb:
    if (iStackX_8 != 0) {
        (**(*0x1cf10 + 0x48))();
    }
    return;
code_r0x00013f69:
    iVar1 = *var_28h;
    piVar6 = piVar9;
    piVar3 = var_28h;
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        piVar6 = piVar6 + 1;
        iVar1 = *piVar3;
    }
    if (piVar6 < piVar11) goto code_r0x00013f95;
    if (*(var_28h + piVar11 * 2) == 0x2e) {
        uVar10 = piVar8 + 1;
        piVar8 = uVar10;
        if (3 < uVar10) goto code_r0x00013f95;
    }
    else if (*(var_28h + piVar11 * 2) - 0x30U < 10) {
        *(auStack_34 + piVar8 * 4 + -4) = *(var_28h + piVar11 * 2) + (*(auStack_34 + piVar8 * 4 + -4) * 5 + -0x18) * 2;
    }
    piVar11 = piVar11 + 1;
    goto code_r0x00013f69;
code_r0x00013f95:
    *0x1ae3a = iStack_38;
    *0x1ae3b = auStack_34[0];
    *0x1ae3c = var_28h_2;
    *0x1ae3d = var_28h_2._4_2_;
    goto code_r0x00013fbb;
}


/* fcn.00014150 @ 0x14150 */

void fcn.00014150(void)

{
    uint8_t uVar1;
    uint32_t uVar2;
    char cVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    
    iVar6 = fcn.00011144();
    uVar5 = (**(iVar6 + 0x18))(0x213);
    if (uVar5 != 0) {
        iVar6 = fcn.00011144();
        cVar3 = (**(iVar6 + 8))(0x11e);
        uVar1 = uVar5 >> 0x10;
        uVar4 = uVar5 >> 0x18;
        if (cVar3 == '\x01') {
            *0x1ae41 = uVar4 >> 4;
            *0x1ae42 = uVar4 & 0xf;
            *0x1ae43 = uVar1;
        }
        else {
            if (cVar3 != '\x02') goto code_r0x000141d6;
            uVar2 = uVar5 >> 8;
            uVar5 = uVar5 & 0xff;
            *0x1ae43 = uVar2;
            *0x1ae41 = uVar4;
            *0x1ae42 = uVar1;
        }
        *0x1ae44 = uVar5;
    }
code_r0x000141d6:
    iVar6 = fcn.00011144();
    uVar5 = (**(iVar6 + 0x18))(0x214);
    if (uVar5 != 0) {
        iVar6 = fcn.00011144();
        cVar3 = (**(iVar6 + 8))(0x11e);
        uVar1 = uVar5 >> 0x10;
        uVar4 = uVar5 >> 0x18;
        if (cVar3 == '\x01') {
            *0x1ae48 = uVar4 >> 4;
            *0x1ae49 = uVar4 & 0xf;
            *0x1ae4a = uVar1;
        }
        else {
            if (cVar3 != '\x02') {
                return;
            }
            uVar2 = uVar5 >> 8;
            uVar5 = uVar5 & 0xff;
            *0x1ae4a = uVar2;
            *0x1ae48 = uVar4;
            *0x1ae49 = uVar1;
        }
        *0x1ae4b = uVar5;
    }
    return;
}


/* fcn.00014008 @ 0x14008 */

//WARNING: Variable defined which should be unmapped: var_28h

ulong fcn.00014008(int64_t arg1)

{
    char cVar1;
    int64_t arg1_00;
    int64_t iVar2;
    ulong uVar3;
    uint uStackX_8;
    char cStackX_c;
    int64_t iStackX_10;
    int64_t var_bp_20h;
    uint32_t var_28h;
    int32_t var_30h;
    int8_t var_34h;
    
    uVar3 = 0;
    iVar2 = 0;
    arg1_00 = fcn.000112b8(arg1,0x62);
    if (arg1_00 != 0) {
        if (arg1_00 != 0x1af00) {
            fcn.000102a0(arg1_00,0x1af00,0x4d);
        }
        iVar2 = arg1_00 + 0x4d;
        if (iVar2 != 0x1ae38) {
            fcn.000102a0(iVar2,0x1ae38,0x15);
        }
        iVar2 = fcn.000112b8(iVar2,0xe0);
        if (iVar2 != 0) {
            if (iVar2 != 0x1ae50) {
                fcn.000102a0(iVar2,0x1ae50,0xb0);
            }
            if (iVar2 + 0xb0 != 0x1adf0) {
                fcn.000102a0(iVar2 + 0xb0,0x1adf0,0x30);
            }
            fcn.000102a0(&uStackX_8,0x1ae30,5);
            cVar1 = uStackX_8._1_1_ + '\x15';
            uStackX_8._0_2_ = CONCAT11(cVar1,uStackX_8);
            cStackX_c = cStackX_c + '\x03';
            var_bp_20h._0_4_ = uStackX_8;
            var_bp_20h._4_1_ = cStackX_c;
            (**(*0x1cf10 + 0x140))(0x1ab00,0,&iStackX_10);
            if (iStackX_10 != 0) {
                fcn.0001a228(&var_bp_20h,arg1_00,iVar2,&iStackX_10);
            }
            goto code_r0x0001411b;
        }
    }
    uVar3 = 0x8000000000000009;
code_r0x0001411b:
    if (arg1_00 != 0) {
        (**(*0x1cf10 + 0x48))(arg1_00);
    }
    if (iVar2 != 0) {
        (**(*0x1cf10 + 0x48))(iVar2);
    }
    return uVar3;
}


/* fcn.000134d0 @ 0x134d0 */

void fcn.000134d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong auStackX_10 [3];
    int64_t iStack_4028;
    int64_t iStack_4020;
    uint uStack_4018;
    uchar auStack_4008 [16392];
    
    uStack_4018 = arg4;
    auStackX_10[0] = 0x4000;
    iStack_4028 = arg2;
    iStack_4020 = arg3;
    fcn.00012cd0(arg1,auStack_4008,auStackX_10,&iStack_4028);
    return;
}


/* fcn.0001494c @ 0x1494c */

void fcn.0001494c(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t *puVar12;
    uint64_t uVar13;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_180h;
    int64_t var_190h;
    int64_t var_4c8h;
    int64_t var_4d0h;
    int64_t var_4d8h;
    uint64_t auStack_588 [2];
    uint32_t auStack_578 [2];
    uchar auStack_570 [8];
    uint64_t uStack_568;
    ulong uStack_560;
    uint uStack_558;
    uint uStack_554;
    uchar uStack_550;
    int64_t iStack_548;
    uchar auStack_540 [8];
    uchar auStack_538 [528];
    uint32_t auStack_328 [168];
    int64_t var_80h;
    
    auStack_578[1] = 0;
    uStack_568 = 0;
    uStack_560 = 0;
    uStack_554 = 0;
    auStack_588[0] = 0xff000000;
    auStack_588[1] = 0x1000000;
    auStack_578[0] = 5;
    auStack_570[0] = 1;
    uStack_558 = 1;
    uStack_550 = 0;
    fcn.000118d8(auStack_540,&uStackX_18);
    uStackX_10 = 0;
    if (*0xc0010000 != -1) {
        fcn.00011180(0x10018,8,&uStackX_10);
        uStack_568 = uStackX_10 & uStackX_18;
        uStack_550 = 1;
    }
    cVar3 = fcn.0001366c();
    if (cVar3 == '\0') {
        uVar4 = 0;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar4 = uVar1;
    }
    uVar13 = uVar4;
    if (uVar4 != 0) {
        puVar12 = arg1 + 0x58;
        do {
            uVar10 = *puVar12;
            cVar3 = fcn.0001366c();
            if (cVar3 == '\0') {
code_r0x00014a54:
                uVar6 = 0;
            }
            else {
                uVar1 = rdmsr(0x2ff);
                uVar4 = uVar1;
                if ((uVar4 >> 0xb & 1) == 0) goto code_r0x00014a54;
                if ((uVar10 < 0x100000) && ((uVar4 >> 10 & 1) != 0)) {
                    iVar11 = 0;
                    uVar9 = 0;
                    do {
                        uVar8 = *(uVar9 + 0x1b174);
                        if ((uVar8 <= uVar10) && (uVar10 < uVar8 + *(uVar9 + 0x1b178) * 8)) {
                            uVar2 = rdmsr(*(iVar11 * 0xc + 0x1b170));
                            uVar6 = uVar2 >> (((uVar10 - uVar8) / *(uVar9 + 0x1b178) & 7) << 3) & 0xff;
                            goto code_r0x00014b5f;
                        }
                        iVar11 = iVar11 + 1;
                        uVar9 = uVar9 + 0xc;
                    } while (uVar9 < 0x84);
                }
                uVar9 = rdmsr(0xfe);
                uVar8 = uVar9 & 0xff;
                fcn.000117c4(0,uVar8,auStack_538);
                fcn.000118d8(&iStack_548,&iStackX_20);
                fcn.00011838(auStack_538,uVar9 & 0xff,iStack_548,iStackX_20);
                uVar6 = 7;
                if (uVar8 == 0) {
code_r0x00014b5a:
                    uVar6 = uVar4 & 7;
                }
                else {
                    puVar7 = auStack_328;
                    do {
                        if ((((*(puVar7 + -2) != 0) && (*(puVar7 + -4) <= uVar10)) &&
                            (uVar10 < *(puVar7 + -4) + *(puVar7 + -2))) &&
                           ((uVar6 == 7 || (((uVar6 != *puVar7 && (uVar6 != 0)) && ((uVar6 != 4 || (*puVar7 != 6))))))))
                        {
                            uVar6 = *puVar7;
                        }
                        puVar7 = puVar7 + 6;
                        uVar8 = uVar8 - 1;
                    } while (uVar8 != 0);
                    if (uVar6 == 7) goto code_r0x00014b5a;
                }
            }
code_r0x00014b5f:
            uVar9 = 0;
            puVar5 = auStack_588;
            do {
                if (((puVar5[3] == '\x01') && (uVar8 = *puVar5, (uVar10 & 0xfffffffffffff000) == uVar8)) &&
                   (uVar6 == puVar5[2])) {
                    uVar10 = auStack_588[uVar9 * 4 + 1];
                    if (uVar10 == 0) {
                        uVar10 = ~(puVar12[1] & 0xfffffffffffff000) + 1 & uStackX_18;
                        auStack_588[uVar9 * 4 + 1] = uVar10;
                    }
                    fcn.000134d0(arg1,uVar8,uVar10,auStack_578[uVar9 * 8 + 1]);
                    auStack_570[uVar9 * 0x20] = 0;
                    break;
                }
                uVar9 = uVar9 + 1;
                puVar5 = puVar5 + 4;
            } while (uVar9 < 2);
            puVar12 = puVar12 + 2;
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
    }
    return;
}


/* fcn.00014c24 @ 0x14c24 */

int64_t fcn.00014c24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t *puVar7;
    
    uVar6 = 0;
    uVar5 = 0;
    if (arg4 != 0) {
        puVar7 = arg3 + 0x10;
        do {
            iVar2 = fcn.000134d0(arg1,*(puVar7 + -4),*(puVar7 + -2),*puVar7);
            if (iVar2 < 0) {
                return iVar2;
            }
            if (*puVar7 == 6) {
                uVar6 = uVar5;
            }
            uVar5 = uVar5 + 1;
            puVar7 = puVar7 + 6;
        } while (uVar5 < arg4);
    }
    iVar2 = fcn.000115d0(0x1aa80);
    if (((iVar2 != 0) && (*(iVar2 + 0x18) == '\x01')) &&
       (iVar2 = fcn.000134d0(arg1,0x4000000000,0x4000000000,0), iVar2 < 0)) {
        return iVar2;
    }
    uVar5 = *(arg3 + uVar6 * 0x18);
    uVar3 = *(arg3 + 8 + uVar6 * 0x18) + uVar5;
    if (uVar3 < arg2) {
        if (arg2 == 0) {
            uVar4 = 0;
        }
        else {
            uVar1 = fcn.00019a1c(arg2);
            uVar4 = 1LL << (uVar1 & 0x3f);
            if (uVar4 != arg2) {
                uVar4 = uVar4 * 2;
            }
        }
        if (uVar5 < 0x100000000) {
            uVar5 = 0x100000000;
        }
        if (uVar3 < uVar4) {
            do {
                if (uVar4 <= uVar5) {
                    return 0;
                }
                iVar2 = fcn.000134d0(arg1,uVar5,uVar4 - uVar5,6);
                if (iVar2 == 0) {
                    return 0;
                }
                uVar4 = uVar4 >> 1;
            } while (*(arg3 + uVar6 * 0x18) + *(arg3 + 8 + uVar6 * 0x18) < uVar4);
        }
    }
    return 0;
}


/* fcn.00013588 @ 0x13588 */

int64_t fcn.00013588(int64_t arg1)

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
    
    cVar2 = fcn.0001366c();
    if (cVar2 != '\0') {
        fcn.0001174c(&iStack_18);
        puVar4 = 0x1b170;
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
        fcn.000102e0(0x2ff,uVar3,puVar4);
        fcn.00010310();
        fcn.00010380(iStack_18);
        if (cStack_10 == '\0') {
            fcn.000103b0();
        }
        else {
            fcn.000103a0();
        }
    }
    return arg1;
}


/* fcn.0001136c @ 0x1136c */

int64_t fcn.0001136c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000112b8(arg1,arg3);
    if ((arg1_00 != 0) && (arg4 != 0)) {
        if (arg2 < arg3) {
            arg3 = arg2;
        }
        if ((arg3 != 0) && (arg1_00 != arg4)) {
            fcn.000102a0(arg1_00,arg4,arg3);
        }
        (**(*0x1cf10 + 0x48))(arg4);
    }
    return arg1_00;
}


/* fcn.000114a8 @ 0x114a8 */

int64_t fcn.000114a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iStackX_20 = 0;
    *arg3 = 0;
    iVar1 = (**(*0x1cf18 + 0x48))(arg1,arg2,0,&iStackX_20,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00011284(iStackX_20);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x1cf18 + 0x48))(arg1,arg2,0,&iStackX_20,iVar1);
            if (iVar1 < 0) {
                (**(*0x1cf10 + 0x48))(*arg3);
                *arg3 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00019a8c @ 0x19a8c */

ulong fcn.00019a8c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    
    if (((arg1 != 0) && (arg2 != 0)) && (uVar1 = fcn.00019a60(arg1), uVar1 < 0xf4241)) {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        iVar4 = 0x30;
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        uVar3 = *arg1;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (*(arg1 + -2) != 0x30) {
                *arg2 = 0;
                return 0;
            }
            arg1 = arg1 + 2;
        }
        *arg2 = 0;
        uVar1 = 0xffffffffffffffff;
        for (; ((*arg1 - iVar4 < 10 || (*arg1 - 0x41 < 6)) || (*arg1 - 0x61 < 6)); arg1 = arg1 + 2) {
            iVar2 = fcn.000199ec(*arg1);
            if (uVar1 - iVar2 >> 4 < *arg2) {
                *arg2 = uVar1;
                return 0x8000000000000003;
            }
            *arg2 = *arg2 * 0x10 + iVar2;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.0001712c @ 0x1712c */

void fcn.0001712c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00017190(arg1,arg2 >> 1,0x140,arg3,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00015704 @ 0x15704 */

uint64_t fcn.00015704(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t aiStackX_8 [4];
    
    iVar1 = (**(*0x1cf10 + 0x140))(0x1ac30,0,0x1cf40);
    if (((-1 < iVar1) &&
        (((iVar1 = fcn.000113e4(0x1ab70,aiStackX_8), -1 < iVar1 ||
          (iVar1 = fcn.000113e4(0x1ab30,aiStackX_8), -1 < iVar1)) && (aiStackX_8[0] != 0)))) &&
       (((1 < *(aiStackX_8[0] + 0xf) && (uVar2 = *(aiStackX_8[0] + 0x18), uVar2 != 0)) ||
        ((*(aiStackX_8[0] + 0x10) != 0 && (uVar2 = *(aiStackX_8[0] + 0x10), uVar2 != 0)))))) {
        return uVar2;
    }
    return 0;
}


/* fcn.0001578c @ 0x1578c */

int * fcn.0001578c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int *piVar2;
    uint64_t uVar3;
    int **ppiVar4;
    int *piStackX_8;
    
    uVar3 = 0;
    if ((arg1 != 0) && (uVar1 = *(arg1 + 4) - 0x24 >> 3, uVar1 != 0)) {
        ppiVar4 = arg1 + 0x24;
        piVar2 = piStackX_8;
        do {
            if (&piStackX_8 != ppiVar4) {
                fcn.000102a0(&piStackX_8,ppiVar4,8);
                piVar2 = piStackX_8;
            }
            if (*piVar2 == arg2) {
                return piVar2;
            }
            uVar3 = uVar3 + 1;
            ppiVar4 = ppiVar4 + 1;
        } while (uVar3 < (uVar1 & 0xffffffff));
    }
    return NULL;
}


/* fcn.00015920 @ 0x15920 */

int64_t fcn.00015920(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t *puVar4;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 0) {
code_r0x00015937:
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        uVar1 = puVar4[1];
        if (uVar1 != 0) {
            if ((0xffffffffffffffff / uVar1 <= *puVar4) || (-*(arg2 + 0x20) - 1U < *puVar4 * uVar1))
            goto code_r0x00015937;
        }
        iVar2 = *(arg2 + 0x20);
        *(puVar4 + 1) = uVar1 + 1;
        *puVar4 = (uVar1 * *puVar4 + iVar2) / (uVar1 + 1);
        iVar3 = (**(*0x1cf18 + 0x58))(L"MotherBoardHealth",0x1aa90,7,0x10,puVar4);
        iVar2 = 0;
        if (iVar3 < 0) {
            iVar2 = iVar3;
        }
    }
    return iVar2;
}


/* fcn.0001580c @ 0x1580c */

void fcn.0001580c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t *puVar1;
    uchar auVar2 [16];
    uint64_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint in_R8;
    int16_t *piVar7;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    piVar7 = iVar4 + 0x24;
    uVar3 = 0;
    uVar6 = uVar3;
    if (*(iVar4 + 4) != 0x29) {
        do {
            if ((((*piVar7 == 1) && (5 < piVar7[1])) && (*(piVar7 + 4) == *0x1a9b0)) && (*(piVar7 + 8) == *0x1a9b8)) {
                uVar6 = *(piVar7 + 0xc);
                *(uVar6 + 1 + piVar7) = *CONCAT44(in_R8,arg3);
                *(uVar6 + 9 + piVar7) = *(arg2 + 0x20);
                *(uVar6 + 0x11 + piVar7) = *(CONCAT44(in_R8,arg3) + 8);
                if ((0x51eb851eb851eb8 < *CONCAT44(in_R8,arg3)) ||
                   (uVar6 = *CONCAT44(in_R8,arg3) * 0x32, auVar2._8_8_ = 0, auVar2._0_8_ = uVar6,
                   iVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8),
                   ((uVar6 - iVar5 >> 1) + iVar5 >> 6) + *CONCAT44(in_R8,arg3) < *(arg2 + 0x20))) {
                    *(piVar7 + 7) = 0;
                }
                *(iVar4 + 9) = 0;
                uVar6 = uVar3;
                if (*(iVar4 + 4) != 0) {
                    do {
                        uVar6 = uVar6 + *(uVar3 + iVar4);
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < *(iVar4 + 4));
                }
                *(iVar4 + 9) = -uVar6;
                return;
            }
            puVar1 = piVar7 + 1;
            if (*puVar1 < 6) {
                return;
            }
            piVar7 = piVar7 + *puVar1;
            uVar6 = uVar6 + *puVar1;
        } while (uVar6 < *(iVar4 + 4) - 0x29);
    }
    return;
}


/* fcn.000168f4 @ 0x168f4 */

//WARNING: Variable defined which should be unmapped: var_4h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000168f4(int64_t arg1)

{
    uint16_t *puVar1;
    uint64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *arg1_01;
    ulong noname_0;
    int16_t *piVar5;
    uint64_t uVar6;
    int64_t var_10h;
    int64_t var_18h;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    int64_t var_a0h;
    int64_t var_a8h;
    uint32_t var_b0h;
    uint32_t var_b8h;
    uint16_t uStack_168;
    uchar uStack_166;
    uint uStack_165;
    uchar uStack_161;
    ulong uStack_160;
    ulong uStack_158;
    uint uStack_150;
    uchar auStack_148 [8];
    uchar auStack_140 [8];
    uchar auStack_138 [32];
    uchar auStack_118 [20];
    uint uStack_104;
    uint64_t uStack_b8;
    uint32_t uStack_94;
    int64_t var_80h;
    int64_t iStack_80;
    int32_t var_6ch;
    int64_t var_bp_20h;
    int32_t var_4h;
    
    arg1_01 = NULL;
    if (arg1 != 0) {
        fcn.00010280(&uStack_168,0x1c);
        iVar4 = fcn.000166a0(auStack_118);
        if (iVar4 < 0) {
            *0x1af4d = 0;
            return iVar4;
        }
        if (*(arg1 + 4) < 0x25) {
            iVar4 = -0x7ffffffffffffffe;
code_r0x00016bcd:
            if (arg1_01 != NULL) {
                (**(*0x1cf10 + 0x48))(arg1_01);
                *0x1af4d = 0;
                return iVar4;
            }
            *0x1af4d = 0;
            return iVar4;
        }
        if (4 < *(arg1 + 4) - 0x24) {
            var_18h = 0;
            piVar5 = arg1 + 0x24;
            uStackX_20 = *(arg1 + 4) - 0x29;
            if (uStackX_20 == 0) {
                *0x1af4d = 0;
                return iVar4;
            }
            while (puVar1 = piVar5 + 1, 5 < *puVar1) {
                if (*piVar5 == 1) {
                    iVar2 = *(piVar5 + 4);
                    iVar3 = *(piVar5 + 8);
                    if (((*0x1af4d == '\x01') && (iVar2 == *0x1a9b0)) && (iVar3 == *0x1a9b8)) {
                        *0x1cf58 = fcn.000112b8(5,*(piVar5 + 0xc) + 200);
                        if (*0x1cf58 == NULL) {
                            *0x1af4d = 0;
                            return -0x7ffffffffffffff7;
                        }
                    }
                    else if (*(piVar5 + 7) == '\0') {
                        noname_0 = 0xf;
                        iVar4 = (**(*0x1cf18 + 0x80))(0xf,auStack_140,auStack_148,&uStackX_18);
                        if (iVar4 != 0) {
                            *0x1af4d = 0;
                            return iVar4;
                        }
                        uStack_94 = *(piVar5 + 0xc);
                        uVar6 = uStack_94;
                        arg1_00 = uStack_94 + 200;
                        if (uStackX_18 < arg1_00) {
                            *0x1af4d = 0;
                            return -0x7ffffffffffffffe;
                        }
                        uStack_104 = arg1_00;
                        var_80h = iVar2;
                        iStack_80 = iVar3;
                        if (*0x1af4d == '\0') {
                            iVar4 = 0;
                            if ((iVar2 != *0x1a9b0) || (iVar3 != *0x1a9b8)) goto code_r0x00016b97;
                            arg1_01 = *0x1cf58;
                        }
                        else {
                            arg1_01 = fcn.000112b8(noname_0,arg1_00);
                        }
                        if (arg1_01 == NULL) {
                            *0x1af4d = 0;
                            return -0x7ffffffffffffff7;
                        }
                        uStack_168 = *puVar1;
                        uStack_166 = piVar5[2];
                        uStack_165 = 0;
                        uStack_161 = *(piVar5 + 7);
                        uStack_160 = *(piVar5 + 4);
                        uStack_158 = *(piVar5 + 8);
                        uStack_150 = *(piVar5 + 0xc);
                        iVar4 = fcn.000165c8(&var_10h);
                        if (iVar4 != 0) goto code_r0x00016bcd;
                        fcn.0001712c(auStack_138,0x20,0x1b3c8,0x1b448);
                        uStack_b8 = var_10h;
                        if (arg1_01 != auStack_118) {
                            fcn.000102a0(arg1_01,auStack_118,200);
                        }
                        if (arg1_01 + 200 != &uStack_168) {
                            fcn.000102a0(arg1_01 + 200,&uStack_168,0x1c);
                        }
                        if ((uVar6 - 0x1c != 0) && (arg1_01 + 0xe4 != piVar5 + 0xe)) {
                            fcn.000102a0(arg1_01 + 0xe4,piVar5 + 0xe,uVar6 - 0x1c);
                        }
                        iVar4 = (**(*0x1cf18 + 0x58))(auStack_138,0x1aa00,0xf,arg1_00,arg1_01);
                        if (iVar4 < 0) goto code_r0x00016bcd;
                        (**(*0x1cf10 + 0x48))(arg1_01);
                    }
                }
code_r0x00016b97:
                piVar5 = piVar5 + *puVar1;
                var_18h = var_18h + *puVar1;
                if (uStackX_20 <= var_18h) {
                    *0x1af4d = 0;
                    return iVar4;
                }
            }
        }
    }
    *0x1af4d = 0;
    return -0x7ffffffffffffffe;
}


/* fcn.00015af8 @ 0x15af8 */

ulong fcn.00015af8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t arg1_00;
    
    if (arg2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        *arg2 = 0;
        if (arg1 != 0) {
            arg1_00 = fcn.000112b8(arg1,*arg3);
            *arg2 = arg1_00;
            if (arg1_00 == 0) {
                return 0x8000000000000009;
            }
            if ((*arg3 != 0) && (arg1_00 != arg1)) {
                fcn.000102a0(arg1_00,arg1,*arg3);
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014f68 @ 0x14f68 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h
//WARNING: Variable defined which should be unmapped: var_39h

int64_t fcn.00014f68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ushort *puVar2;
    int64_t arg3_00;
    int16_t iVar3;
    int64_t arg2_00;
    int16_t *piVar4;
    char *pcVar5;
    int16_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t iVar13;
    code *pcVar14;
    int64_t iStackX_10;
    int64_t *piStackX_18;
    int64_t iStackX_20;
    int64_t var_6fh;
    int64_t var_7fh;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    ulong *puStack_88;
    uint64_t uStack_80;
    char *pcStack_78;
    int64_t iStack_70;
    int16_t *apiStack_68 [2];
    uint32_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    uint32_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    
    iVar7 = *0x1cf10;
    *arg2 = 0;
    *arg3 = 0;
    piStack_a0 = NULL;
    iStackX_10 = 0;
    uStack_a8 = 0;
    piStackX_18 = arg3;
    iVar7 = (**(iVar7 + 0x138))(2,0x1aa50,0,&uStack_80,&iStackX_20);
    if (iVar7 < 0) {
        return iVar7;
    }
    if (iStackX_20 == 0) {
        return -0x7ffffffffffffffe;
    }
    uStack_98 = 0;
    if (uStack_80 == 0) {
code_r0x0001532e:
        if (iStackX_20 != 0) {
            (**(*0x1cf10 + 0x48))();
        }
        if ((*arg2 == 0) || (*arg3 == 0)) {
            iVar7 = -0x7ffffffffffffff2;
        }
        return iVar7;
    }
code_r0x00015013:
    uVar11 = 0;
    iVar7 = (**(*0x1cf10 + 0x98))(*(iStackX_20 + uStack_98 * 8),0x1aa50,&puStack_88);
    if (iVar7 < 0) {
        return iVar7;
    }
    uStack_90 = 0;
    iVar7 = (*puStack_88[2])(puStack_88,&piStack_a0,&uStack_90);
    if (((-1 < iVar7) && (piStack_a0 != NULL)) && (uStack_90 != 0)) {
        piVar9 = piStack_a0;
        uVar12 = uVar11;
        do {
            if ((*piVar9 == *arg1) && (piVar9[1] == *(arg1 + 8))) {
                iVar7 = (**puStack_88)(puStack_88,arg1,&iStackX_10,&uStack_a8);
                if ((-1 < iVar7) && ((iStack_70 = iStackX_10, iStackX_10 != 0 && (0x1b < uStack_a8)))) {
                    iVar7 = (**(*0x1cf10 + 0x98))(*(iStackX_20 + uStack_98 * 8),0x1aae0,&pcStack_78);
                    pcVar5 = pcStack_78;
                    if ((iVar7 < 0) || (pcStack_78 == NULL)) goto code_r0x0001532e;
                    fcn.00010280(apiStack_68,0x18);
                    pcVar14 = 0x19918;
                    uVar12 = uVar11;
                    uVar10 = uVar11;
                    goto code_r0x0001513d;
                }
                break;
            }
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + 2;
        } while (uVar12 < uStack_90);
    }
    goto code_r0x000152cb;
    while( true ) {
        uVar10 = uVar10 + 1;
        uVar12 = uVar10 * 0x10;
        if (*(uVar12 + 0x1cb78) == 0) break;
code_r0x0001513d:
        if ((*pcVar5 == *(uVar12 + 0x1cb70)) && (pcVar5[1] == *(uVar12 + 0x1cb71))) {
            pcVar14 = *(uVar10 * 0x10 + 0x1cb78);
            break;
        }
    }
    (*pcVar14)(apiStack_68,pcVar5,0,0);
    piVar6 = apiStack_68[0];
    if (apiStack_68[0] == NULL) goto code_r0x0001532e;
    iVar3 = *apiStack_68[0];
    piVar4 = apiStack_68[0];
    while (iVar3 != 0) {
        piVar4 = piVar4 + 1;
        uVar11 = uVar11 + 1;
        iVar3 = *piVar4;
    }
    arg3_00 = uVar11 * 2 + 2;
    arg2_00 = *arg3;
    iVar1 = uVar11 * 2 + 0x1e;
    uVar11 = -iVar1 - 1;
    if (uStack_a8 - 0x1c <= uVar11) {
        iVar8 = *arg2;
        iVar13 = (uStack_a8 - 0x1c) + arg2_00 + iVar1;
        *arg3 = iVar13;
        if (iVar8 == 0) {
            iVar8 = fcn.000112b8(uVar11,iVar13);
        }
        else {
            iVar8 = fcn.0001136c(uVar11,arg2_00,iVar13,iVar8);
        }
        *arg2 = iVar8;
        if (iVar8 == 0) {
            if (piStack_a0 != NULL) {
                (**(*0x1cf10 + 0x48))();
            }
            if (iStackX_20 != 0) {
                (**(*0x1cf10 + 0x48))();
            }
            if (iStackX_10 != 0) {
                (**(*0x1cf10 + 0x48))();
            }
            return -0x7ffffffffffffff7;
        }
        puVar2 = iVar8 + arg2_00;
        *puVar2 = 1;
        *(puVar2 + 2) = 1;
        iVar13 = *piStackX_18;
        *arg2 = puVar2;
        puVar2[1] = iVar13 - arg2_00;
        *(puVar2 + 5) = 0;
        *(puVar2 + 7) = *(iStack_70 + 3);
        *(puVar2 + 4) = *(iStack_70 + 4);
        *(puVar2 + 8) = *(iStack_70 + 0xc);
        *(puVar2 + 0xc) = iVar1;
        if ((arg3_00 != 0) && (puVar2 + 0xe != piVar6)) {
            fcn.000102a0(puVar2 + 0xe,piVar6,arg3_00);
        }
        if ((uStack_a8 - 0x1c != 0) && (*arg2 + iVar1 != iStackX_10 + 0x1c)) {
            fcn.000102a0(*arg2 + iVar1,iStackX_10 + 0x1c,uStack_a8 - 0x1c);
        }
        *arg2 = iVar8;
        if (piStack_a0 != NULL) {
            (**(*0x1cf10 + 0x48))(piStack_a0);
        }
        if (iStackX_10 != 0) {
            (**(*0x1cf10 + 0x48))();
        }
        arg3 = piStackX_18;
    }
code_r0x000152cb:
    uStack_98 = uStack_98 + 1;
    if (uStack_80 <= uStack_98) goto code_r0x0001532e;
    goto code_r0x00015013;
}


/* fcn.00015368 @ 0x15368 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.00015368(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    int64_t iVar4;
    int64_t iVar5;
    ulong *noname_0;
    ulong uVar6;
    uint16_t uVar7;
    char16_t *arg4;
    uint64_t uVar8;
    int64_t iVar9;
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_d8;
    int64_t iStack_d0;
    int64_t iStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    ulong *puStack_b0;
    int64_t iStack_a8;
    int64_t iStack_a0;
    int64_t iStack_98;
    int64_t iStack_90;
    char16_t acStack_88 [3];
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    uint32_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_9h;
    int64_t var_1h;
    
    iVar9 = 0;
    iStack_a0 = 0;
    iStack_c8 = 0;
    uVar6 = 2;
    iStack_a8 = 0;
    iStack_d0 = 0;
    iVar3 = (**(*0x1cf10 + 0x138))(2,0x1ab60,0,&uStack_b8,&iStack_90);
    if (-1 < iVar3) {
        arg1_00 = fcn.000112b8(uVar6,uStack_b8 << 5);
        *arg1 = arg1_00;
        if (arg1_00 == 0) {
code_r0x000153ee:
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            uStack_c0 = 0;
            if (uStack_b8 != 0) {
                do {
                    uVar8 = uStack_c0;
                    iVar3 = (**(*0x1cf10 + 0x98))(*(iStack_90 + uStack_c0 * 8),0x1ab60,&puStack_b0);
                    if (-1 < iVar3) {
                        iStack_d8 = 0;
                        noname_0 = puStack_b0;
                        iVar3 = (**puStack_b0)(puStack_b0,&iStack_d8,0,0,0,0,0,0);
                        if (iVar3 == -0x7ffffffffffffffb) {
                            iVar4 = fcn.000112b8(noname_0,iStack_d8);
                            if (iVar4 == 0) goto code_r0x000153ee;
                            iStack_98 = 0;
                            arg4 = acStack_88;
                            iVar3 = (**puStack_b0)(puStack_b0,&iStack_d8,iVar4,arg4,auStackX_18,&var_61h + 1,
                                                   auStackX_20,&iStack_98);
                            if (-1 < iVar3) {
                                uVar6 = 0x1ac90;
                                iVar3 = fcn.000114a8(0x1b3a0,0x1ac90,&iStack_c8,arg4);
                                if (-1 < iVar3) {
                                    fcn.00019a8c(iStack_c8 + 0xe,uVar6,&var_79h + 1);
                                    uVar2 = var_79h._1_2_;
                                    uVar7 = 0;
                                    do {
                                        arg4 = L"Capsule";
                                        fcn.0001712c(&var_59h + 1,0x20,0x1b3c8,0x1b3b8);
                                        iVar5 = fcn.000114a8(&var_59h + 1,0x1ac90,&iStack_a8,arg4);
                                        iVar3 = iStack_a8;
                                        if (-1 < iVar5) {
                                            if (&iStack_d0 != iStack_a8 + 0x28) {
                                                fcn.000102a0(&iStack_d0,iStack_a8 + 0x28,8);
                                            }
                                            if (-1 < iStack_d0) {
                                                if ((*(iVar4 + 4) == *(iVar3 + 0x34)) &&
                                                   (*(iVar4 + 0xc) == *(iVar3 + 0x3c))) {
                                                    if (&var_71h + 1 != iVar3 + 0x18) {
                                                        fcn.000102a0(&var_71h + 1,iVar3 + 0x18,0x10);
                                                    }
                                                    arg4 = 0x10;
                                                    (**(*0x1cf18 + 0x58))
                                                              (L"LastUpdateTime",iVar4 + 4,3,0x10,&var_71h + 1);
                                                }
                                                if (iVar3 != 0) {
                                                    (**(*0x1cf10 + 0x48))(iVar3);
                                                }
                                            }
                                        }
                                        uVar7 = uVar7 + 1;
                                    } while (uVar7 <= uVar2);
                                    if (iStack_c8 != 0) {
                                        (**(*0x1cf10 + 0x48))(iStack_c8);
                                    }
                                    uVar8 = uStack_c0;
                                }
                                iVar5 = iVar4 + 4;
                                iVar3 = fcn.000114a8(0x1b3d8,iVar5,&iStack_a0,arg4);
                                iVar1 = iStack_a0;
                                if ((iVar3 < 0) || (iStack_a0 == 0)) {
                                    fcn.00010280(arg1_00,0x10);
                                    iVar3 = 0;
                                }
                                else if (arg1_00 != iStack_a0) {
                                    fcn.000102a0(arg1_00,iStack_a0,0x10);
                                }
                                if (arg1_00 + 0x10 != iVar5) {
                                    fcn.000102a0(arg1_00 + 0x10,iVar5,0x10);
                                }
                                arg1_00 = arg1_00 + 0x20;
                                iVar9 = iVar9 + 1;
                                if (iStack_98 != 0) {
                                    (**(*0x1cf10 + 0x48))();
                                }
                                if (iVar1 != 0) {
                                    (**(*0x1cf10 + 0x48))(iVar1);
                                }
                            }
                            (**(*0x1cf10 + 0x48))(iVar4);
                        }
                    }
                    uStack_c0 = uVar8 + 1;
                } while (uStack_c0 < uStack_b8);
            }
            *arg2 = iVar9 << 5;
        }
        if (iStack_90 != 0) {
            (**(*0x1cf10 + 0x48))();
        }
    }
    return iVar3;
}


/* fcn.00015b74 @ 0x15b74 */

void fcn.00015b74(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg1_00;
    uint16_t uVar5;
    uint32_t uVar6;
    uint16_t auStackX_8 [4];
    int64_t iStackX_10;
    
    arg1_00 = 0;
    iStackX_10 = 0;
    *arg2 = 0;
    if (arg1 != 0) {
        arg1_00 = *arg1;
    }
    piVar2 = fcn.000115a0();
    iVar1 = *piVar2;
    do {
        if (iVar1 == -1) {
            return;
        }
        if (((iVar1 == 4) && (*(piVar2 + 4) == *0x1ac00)) && (*(piVar2 + 8) == *0x1ac08)) {
            if (0x1b < piVar2[0xd]) {
                uVar5 = piVar2[0xd] - 0x1b;
                if (arg1 != 0) {
                    auStackX_8[0] = uVar5;
                    iVar3 = fcn.00011284(uVar5);
                    if (iVar3 == 0) {
code_r0x00015cbb:
                        *arg2 = 0;
                        return;
                    }
                    if ((uVar5 != 0) && (iVar3 != piVar2 + 0x33)) {
                        fcn.000102a0(iVar3,piVar2 + 0x33,uVar5);
                    }
                    iVar4 = fcn.00015af8(iVar3,&iStackX_10,auStackX_8);
                    if (iVar4 == -0x7ffffffffffffff7) {
                        (**(*0x1cf10 + 0x48))(iVar3);
                        goto code_r0x00015cbb;
                    }
                    (**(*0x1cf10 + 0x48))();
                    iVar3 = iStackX_10;
                    uVar5 = auStackX_8[0];
                    uVar6 = auStackX_8[0];
                    if ((auStackX_8[0] != 0) && (arg1_00 != iStackX_10)) {
                        fcn.000102a0(arg1_00,iStackX_10,uVar6);
                    }
                    arg1_00 = arg1_00 + uVar6;
                    (**(*0x1cf10 + 0x48))(iVar3);
                }
                *arg2 = *arg2 + uVar5;
            }
        }
        piVar2 = piVar2 + piVar2[1];
        iVar1 = *piVar2;
    } while( true );
}


/* fcn.00015cd4 @ 0x15cd4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.00015cd4(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint16_t auStackX_10 [4];
    uint64_t uStackX_18;
    int64_t *piStackX_20;
    int16_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uint64_t uStack_68;
    ulong *puStack_60;
    uint64_t uStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    uint32_t var_10h;
    int64_t var_bp_8h;
    
    iVar3 = *0x1cf10;
    uVar7 = 0;
    *arg2 = 0;
    uStackX_18 = 0;
    uStack_50 = 0;
    uStack_58 = 0;
    iVar3 = (**(iVar3 + 0x138))(2,0x1aa50,0,&uStack_48,&iStack_40);
    if (-1 < iVar3) {
        uVar6 = uVar7;
        uVar8 = uVar7;
        if (uStack_48 != 0) {
            do {
                iVar3 = (**(*0x1cf10 + 0x98))(*(iStack_40 + uVar8 * 8),0x1aa50,&puStack_60);
                if (-1 < iVar3) {
                    piStackX_20 = NULL;
                    uStack_68 = 0;
                    iVar3 = (*puStack_60[2])(puStack_60,&piStackX_20,&uStack_68);
                    if ((-1 < iVar3) && (piStackX_20 != NULL)) {
                        bVar1 = false;
                        if (uStack_68 != 0) {
                            piVar4 = piStackX_20;
                            uVar5 = uVar7;
                            do {
                                if ((*piVar4 == *0x1ab10) && (piVar4[1] == *0x1ab18)) {
                                    bVar1 = true;
                                    break;
                                }
                                uVar5 = uVar5 + 1;
                                piVar4 = piVar4 + 2;
                            } while (uVar5 < uStack_68);
                        }
                        (**(*0x1cf10 + 0x48))();
                        if ((((bVar1) &&
                             (iVar3 = (**puStack_60)(puStack_60,0x1ab10,&uStackX_18,&uStack_58), -1 < iVar3)) &&
                            (uStackX_18 != 0)) && (uStack_58 != 0)) {
                            uVar5 = uStackX_18;
                            if (0x10 < uStack_58) {
                                auStackX_10[0] = *(uStackX_18 + 8) * 0x1c;
                                if (arg1 != 0) {
                                    iVar3 = fcn.00015af8(uStackX_18 + 0x10,&uStack_50,auStackX_10);
                                    if (iVar3 == -0x7ffffffffffffff7) {
                                        (**(*0x1cf10 + 0x48))(uStackX_18);
                                        return -0x7ffffffffffffff7;
                                    }
                                    uVar6 = uStack_50;
                                }
                                uVar2 = auStackX_10[0];
                                if (0xffff - *arg2 < auStackX_10[0]) {
                                    (**(*0x1cf10 + 0x48))();
                                    if (uVar6 == 0) goto code_r0x00015ee4;
                                    uVar5 = uVar6;
                                }
                                else {
                                    if (arg1 != 0) {
                                        uVar5 = auStackX_10[0];
                                        if ((uVar5 != 0) && (*arg1 != uVar6)) {
                                            fcn.000102a0(*arg1,uVar6,auStackX_10[0]);
                                        }
                                        iVar3 = *0x1cf10;
                                        *arg1 = *arg1 + uVar5;
                                        (**(iVar3 + 0x48))(uVar6);
                                    }
                                    *arg2 = *arg2 + uVar2;
                                    uVar5 = uStackX_18;
                                }
                            }
                            (**(*0x1cf10 + 0x48))(uVar5);
                        }
                    }
                }
code_r0x00015ee4:
                uVar8 = uVar8 + 1;
            } while (uVar8 < uStack_48);
        }
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00015f1c @ 0x15f1c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00015f1c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg1_00;
    uint32_t arg2_00;
    uint64_t arg3;
    int64_t *piVar5;
    uint64_t arg1_01;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    uint32_t var_58h;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    iStack_50 = 0;
    piVar5 = 0x1b420;
    uStack_58 = 0;
    arg1_00 = 0;
    *arg2 = 0;
    iStackX_20 = 0;
    aiStack_48[0] = 0;
    iStackX_18 = 0;
    do {
        iVar3 = fcn.00014f68(*piVar5,&iStack_50,&uStack_58);
        iVar1 = iStack_50;
        arg3 = uStack_58;
        if ((iVar3 < 0) || (uStack_58 < 0x1d)) {
code_r0x000160c3:
            if (iVar1 != 0) {
                (**(*0x1cf10 + 0x48))(iVar1);
            }
        }
        else {
            arg2_00 = iStack_50;
            if ((**piVar5 == *0x1a9b0) && ((*piVar5)[1] == *0x1a9b8)) {
                piVar5 = &iStackX_20;
                iVar4 = fcn.00015368(piVar5,aiStack_48);
                iVar3 = aiStack_48[0];
                uVar2 = uStack_58;
                if (-1 < iVar4) {
                    arg1_01 = (arg3 - 0x20) + aiStack_48[0];
                    *(iVar1 + 2) = arg1_01;
                    if ((0x20 < arg3) && (aiStack_48[0] != 0)) {
                        arg1_00 = fcn.000112b8(piVar5,arg1_01);
                        if (arg1_00 == 0) goto code_r0x000160df;
                        if ((arg3 != 0) && (arg1_00 != iVar1)) {
                            fcn.000102a0(arg1_00,arg2_00,arg3);
                        }
                        iVar4 = (arg3 - 0x20) + arg1_00;
                        if (iVar4 != iStackX_20) {
                            fcn.000102a0(iVar4,iStackX_20,iVar3);
                        }
                        arg3 = arg1_01;
                        uVar2 = arg1_01;
                        if (((arg1 != 0) && (arg1_01 != 0)) && (*arg1 != arg1_00)) {
                            fcn.000102a0(*arg1,arg1_00,arg1_01);
                        }
                    }
                }
                uStack_58 = uVar2;
                if (iStackX_20 != 0) {
                    (**(*0x1cf10 + 0x48))(iStackX_20);
                }
                if (arg1_00 != 0) {
                    (**(*0x1cf10 + 0x48))(arg1_00);
                }
code_r0x000160b3:
                if (arg1 != 0) {
                    *arg1 = *arg1 + arg3;
                }
code_r0x000160bb:
                *arg2 = *arg2 + arg3;
                goto code_r0x000160c3;
            }
            if (uStack_58 <= -*arg2 - 1) {
                if (arg1 != 0) {
                    if ((uStack_58 != 0) && (*arg1 != iStack_50)) {
                        fcn.000102a0(*arg1,arg2_00,uStack_58);
                    }
                    goto code_r0x000160b3;
                }
                goto code_r0x000160bb;
            }
            if (iStack_50 != 0) {
                (**(*0x1cf10 + 0x48))();
            }
        }
code_r0x000160df:
        iStackX_18 = iStackX_18 + 1;
        piVar5 = iStackX_18 * 8 + 0x1b420;
        if (*piVar5 == 0) {
            return;
        }
    } while( true );
}


/* fcn.0001610c @ 0x1610c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Type propagation algorithm not settling

int64_t fcn.0001610c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint *arg1_00;
    uint64_t uVar2;
    char cVar3;
    int64_t *arg1_01;
    ulong uStack_48;
    ushort uStack_40;
    uchar auStack_3e [6];
    int64_t var_30h;
    int16_t var_28h;
    int64_t var_26h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    
    if (*0x1cf50 != '\0') {
        iVar1 = (*(*0x1cf40)[1])(*0x1cf40,*0x1d0d8);
        if (iVar1 < 0) {
            return iVar1;
        }
        *0x1cf50 = '\0';
    }
    iVar1 = fcn.00015704();
    fcn.00010280(&uStack_48,0x24);
    arg1_01 = &uStack_48;
    fcn.00010280(arg1_01,0x24);
    uStack_48._4_4_ = 0;
    uStack_48._0_4_ = 0x54414850;
    uStack_40 = 1;
    if (auStack_3e != iVar1 + 10) {
        arg1_01 = auStack_3e;
        fcn.000102a0(arg1_01,iVar1 + 10,6);
    }
    if (&var_30h != iVar1 + 0x10) {
        arg1_01 = &var_30h;
        fcn.000102a0(arg1_01,iVar1 + 0x10,8);
    }
    _var_28h = 5;
    var_26h._2_4_ = 0x5446534d;
    stack0xffffffffffffffd8 = 0x100000d;
    arg1_00 = fcn.000112b8(arg1_01,arg2 + 0x24);
    if (arg1_00 == NULL) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        uStack_48._4_4_ = arg2 + 0x24;
        if (arg1_00 != &uStack_48) {
            fcn.000102a0(arg1_00,&uStack_48,0x24);
        }
        if ((arg2 != 0) && (arg1_00 + 9 != arg1)) {
            fcn.000102a0(arg1_00 + 9,arg1,arg2);
        }
        cVar3 = '\0';
        uVar2 = 0;
        *(arg1_00 + 9) = 0;
        if (arg1_00[1] != 0) {
            do {
                cVar3 = cVar3 + *(uVar2 + arg1_00);
                uVar2 = uVar2 + 1;
            } while (uVar2 < arg1_00[1]);
        }
        *(arg1_00 + 9) = -cVar3;
        iVar1 = (***0x1cf40)(*0x1cf40,arg1_00,uStack_48._4_4_,0x1d0d8);
        if (-1 < iVar1) {
            *0x1cf50 = '\x01';
        }
        (**(*0x1cf10 + 0x48))(arg1_00);
    }
    return iVar1;
}


/* fcn.000164a8 @ 0x164a8 */

uint64_t fcn.000164a8(void)

{
    bool bVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char16_t *arg4;
    int64_t iStackX_8;
    uchar auStack_28 [32];
    
    uVar5 = 0;
    iStackX_8 = 0;
    bVar1 = false;
    uVar7 = uVar5;
    while( true ) {
        arg4 = L"HwErrRec";
        fcn.0001712c(auStack_28,0x20,0x1b3c8,0x1b448);
        uVar2 = fcn.000114a8(auStack_28,0x1aa00,&iStackX_8,arg4);
        if (uVar2 == 0x800000000000000e) break;
        if ((uVar2 < 0) || (iStackX_8 == 0)) {
            return uVar2;
        }
        piVar3 = *0x1b420;
        uVar4 = uVar5;
        while (piVar3 != NULL) {
            if ((*(iStackX_8 + 0x90) == *piVar3) && (*(iStackX_8 + 0x98) == piVar3[1])) {
                bVar1 = true;
                break;
            }
            uVar4 = uVar4 + 1;
            piVar3 = *(uVar4 * 8 + 0x1b420);
        }
        if (((bVar1) && (uVar2 = (**(*0x1cf18 + 0x58))(auStack_28,0x1aa00,0xf,0,0), uVar2 < 0)) ||
           (uVar6 = uVar7 + 1, uVar7 = uVar6, 0xffff < uVar6)) break;
    }
    if (uVar2 != 0x800000000000000e) {
        uVar5 = uVar2;
    }
    return uVar5;
}


/* fcn.000162c4 @ 0x162c4 */

//WARNING: Variable defined which should be unmapped: var_18h

void fcn.000162c4(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong noname_0;
    uint16_t uVar5;
    uint16_t auStackX_8 [4];
    uint32_t auStackX_10 [2];
    uint16_t auStackX_18 [4];
    int64_t iStackX_20;
    int16_t var_48h;
    int64_t var_50h;
    int16_t var_58h;
    int64_t var_60h;
    int64_t aiStack_58 [3];
    int64_t var_18h;
    
    auStackX_18[0] = 0;
    iStackX_20 = 0;
    auStackX_10[0] = auStackX_10[0] & 0xffff0000;
    auStackX_8[0] = 0;
    fcn.00015b74(0,auStackX_10);
    iVar3 = fcn.00015cd4(0,auStackX_8);
    if (iVar3 == -0x7ffffffffffffff7) {
        return;
    }
    uVar5 = 0xc;
    if ((auStackX_10[0] & 0xffff) + 0xc <= 0xffff - auStackX_8[0]) {
        uVar5 = auStackX_8[0] + auStackX_10[0] + 0xc;
    }
    noname_0 = 0;
    auStackX_10[0] = 0;
    auStackX_8[0] = uVar5;
    fcn.00015f1c(0,auStackX_10);
    uVar2 = auStackX_10[0];
    uVar1 = uVar5 + auStackX_10[0];
    iVar3 = fcn.000112b8(noname_0,uVar1);
    if (iVar3 == 0) {
        return;
    }
    *(iVar3 + 4) = 1;
    *(iVar3 + 2) = uVar5;
    iVar4 = iVar3 + 0xc;
    *(iVar3 + 8) = (uVar5 - 0xc) / 0x1c;
    aiStack_58[0] = iVar4;
    if (uVar5 != 0xc) {
        fcn.00015b74(aiStack_58,auStackX_18);
        iStackX_20 = auStackX_18[0] + iVar4;
        iVar4 = fcn.00015cd4(&iStackX_20,auStackX_8);
        if (iVar4 == -0x7ffffffffffffff7) goto code_r0x00016417;
    }
    if (uVar2 != 0) {
        fcn.00015f1c(&iStackX_20,auStackX_10);
    }
    fcn.0001610c(iVar3,uVar1);
    fcn.000164a8();
    iVar4 = fcn.00015704();
    if (iVar4 == 0) {
        return;
    }
    iVar4 = fcn.0001578c(iVar4,0x54414850);
    fcn.000168f4(iVar4);
code_r0x00016417:
    (**(*0x1cf10 + 0x48))(iVar3);
    return;
}


/* fcn.000166a0 @ 0x166a0 */

//WARNING: Variable defined which should be unmapped: var_20h_2
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.000166a0(int64_t arg1)

{
    char cVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcVar8;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_20h_2;
    int64_t var_28h;
    uint16_t uStack_48;
    uchar uStack_46;
    uchar uStack_45;
    uchar uStack_44;
    uchar uStack_43;
    uchar uStack_42;
    int64_t var_30h;
    ulong uStack_30;
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    fcn.00010280(arg1,200);
    fcn.00010280(&uStack_48,0x10);
    fcn.00010280(&var_30h,0x10);
    fcn.00010280(&var_20h,0x10);
    *(arg1 + 6) = 0xffffffff;
    *arg1 = 0x52455043;
    *(arg1 + 4) = 0x101;
    iVar4 = *0x1cf18;
    *(arg1 + 10) = 1;
    *(arg1 + 0xc) = 3;
    *(arg1 + 0x10) = 1;
    (**(iVar4 + 0x18))(&uStack_48,0);
    *(arg1 + 0x18) = uStack_42;
    *(arg1 + 0x19) = uStack_43;
    *(arg1 + 0x1a) = uStack_44;
    *(arg1 + 0x1c) = uStack_45;
    *(arg1 + 0x1d) = uStack_46;
    *(arg1 + 0x1b) = 0;
    cVar1 = uStack_48 / 100;
    *(arg1 + 0x1e) = uStack_48 + cVar1 * -100;
    *(arg1 + 0x1f) =
         (uStack_48 / 1000) * '\n' + ((uStack_48 / 1000) / 10) * -100 + cVar1 + ((uStack_48 / 100) / 10) * -10 + '\x01';
    iStackX_8 = 0;
    iVar4 = fcn.000113e4(0x1ac10,&iStackX_10);
    if ((iVar4 < 0) || (iStackX_10 == 0)) {
        iVar4 = fcn.000113e4(0x1ac40,&iStackX_8);
        if ((iVar4 < 0) || (iStackX_8 == 0)) goto code_r0x0001686e;
        pcVar7 = *(iStackX_8 + 0x18);
        uVar5 = *(iStackX_8 + 0x16);
    }
    else {
        pcVar7 = *(iStackX_10 + 0x10);
        uVar5 = *(iStackX_10 + 0xc);
    }
    pcVar6 = pcVar7 + uVar5;
    do {
        if (*pcVar7 == '\x01') {
            if (0x18 < pcVar7[1]) {
                if (&var_30h != pcVar7 + 8) {
                    fcn.000102a0(&var_30h,pcVar7 + 8,0x10);
                }
                goto code_r0x0001687a;
            }
            break;
        }
        pcVar7 = pcVar7 + pcVar7[1];
        pcVar8 = pcVar7;
        if (*pcVar7 == '\0') goto code_r0x00016836;
        do {
            do {
                pcVar7 = pcVar7 + 1;
                pcVar8 = pcVar7;
            } while (*pcVar7 != '\0');
code_r0x00016836:
            pcVar7 = pcVar8 + 1;
        } while (*pcVar7 != '\0');
        pcVar7 = pcVar8 + 2;
    } while (pcVar7 < pcVar6);
code_r0x0001686e:
    fcn.00010280(&var_30h,0x10);
code_r0x0001687a:
    uVar3 = *0x1afa8;
    uVar2 = *0x1afa0;
    *(arg1 + 0x28) = uStack_30;
    *(arg1 + 0x20) = var_30h;
    *(arg1 + 0x48) = uStack_30;
    *(arg1 + 0x40) = var_30h;
    *(arg1 + 0x30) = var_20h;
    *(arg1 + 0x38) = var_bp_18h;
    *(arg1 + 0x68) = 0;
    *(arg1 + 0x88) = 0x100;
    *(arg1 + 0x50) = uVar2;
    *(arg1 + 0x58) = uVar3;
    *(arg1 + 0x80) = 200;
    *(arg1 + 0x8a) = 0;
    *(arg1 + 0x8c) = 1;
    *(arg1 + 0xb0) = 3;
    return 0;
}


/* fcn.000165c8 @ 0x165c8 */

//WARNING: Removing unreachable block (ram,0x00016661)
//WARNING: Removing unreachable block (ram,0x00016670)

ulong fcn.000165c8(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int16_t iVar3;
    ulong uStackX_10;
    uchar auStack_28 [32];
    
    uVar2 = 0;
    if ((*0x1cf18 == 0) || (*(*0x1cf18 + 0x48) == 0)) {
        uVar2 = 0x8000000000000006;
    }
    else {
        iVar3 = 0;
        while( true ) {
            uStackX_10 = 0;
            fcn.0001712c(auStack_28,0x20,0x1b3c8,0x1b448);
            iVar1 = (**(*0x1cf18 + 0x48))(auStack_28,0x1aa00,0,&uStackX_10,0);
            if (iVar1 == -0x7ffffffffffffff2) break;
            iVar3 = iVar3 + 1;
        }
        *arg1 = iVar3;
    }
    return uVar2;
}


/* fcn.0001a5d8 @ 0x1a5d8 */

ulong fcn.0001a5d8(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.00010330(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x0001a6f3;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x0001a6f3;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x0001a637;
                    }
                }
code_r0x0001a635:
                uVar3 = 2;
                goto code_r0x0001a637;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x0001a635;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x0001a637;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x0001a637;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x0001a637;
            goto code_r0x0001a635;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x0001a637;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0001a637;
        }
    }
code_r0x0001a6f3:
    uVar3 = 0;
code_r0x0001a637:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.0001a46c @ 0x1a46c */

ulong fcn.0001a46c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.0001a5d8();
    if (((cVar1 == '\0') || (cVar1 == '\x01')) || (uVar2 = 1, cVar1 != '\x02')) {
        uVar2 = 3;
    }
    if (uVar2 < arg1) {
        return 0x8000000000000002;
    }
    if (arg1 != 0) {
        if (arg1 == 1) {
            *arg2 = 1;
            *arg3 = 0;
            return 0;
        }
        if (arg1 == 2) {
            cVar1 = fcn.0001a5d8();
            if (cVar1 == '\x01') {
                *arg2 = 1;
                *arg3 = 1;
                return 0;
            }
            *arg3 = 2;
            goto code_r0x0001a4f1;
        }
    }
    *arg3 = 0;
code_r0x0001a4f1:
    *arg2 = 6;
    return 0;
}


/* fcn.0001a59c @ 0x1a59c */

void fcn.0001a59c(void)

{
    if (*0x1af62 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x1af62 = '\x05';
        }
        else {
            *0x1af62 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.0001a510 @ 0x1a510 */

ulong fcn.0001a510(int64_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint64_t uVar3;
    uint64_t *in_RDX;
    uint64_t *in_R8;
    
    cVar2 = fcn.0001a59c();
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            uVar3 = 0x1c;
            goto code_r0x0001a537;
        }
        if (cVar2 != '\x05') {
            return 0x8000000000000002;
        }
    }
    uVar3 = 0xc;
code_r0x0001a537:
    if (uVar3 <= arg1) {
        return 0x8000000000000002;
    }
    iVar1 = (arg1 >> 2) * 3;
    cVar2 = *(iVar1 + 0x1af52);
    *in_RDX = *(iVar1 + 0x1af50);
    *in_R8 = *((*(iVar1 + 0x1af51) | 0xfd00) << 0x10) >> ((arg1 - cVar2) * '\x04' & 0x3fU) & 7;
    return 0;
}


/* fcn.0001a3e4 @ 0x1a3e4 */

uchar fcn.0001a3e4(int64_t arg1,int64_t noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    do {
        uVar1 = *((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000);
        *arg3 = uVar1;
        if (uVar1 == 0xffffffff) break;
        if (arg2 == '\0') {
            uVar1 = ~uVar1;
        }
        if ((uVar1 & 1) != 0) {
            uVar2 = 1;
            break;
        }
        fcn.0001167c(1000,noname_1);
        uVar3 = uVar3 + 1;
    } while (uVar3 < 5000);
    return uVar2;
}


/* fcn.0001167c @ 0x1167c */

int64_t fcn.0001167c(int64_t arg1,int64_t arg2)

{
    fcn.0001161c((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00019a60 @ 0x19a60 */

uint64_t fcn.00019a60(uint32_t arg1)

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


/* fcn.00019b78 @ 0x19b78 */

uint64_t fcn.00019b78(uint32_t arg1,int64_t arg2)

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


/* fcn.00017f00 @ 0x17f00 */

void fcn.00017f00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00017190(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001715c @ 0x1715c */

uchar * fcn.0001715c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00017f24 @ 0x17f24 */

ulong fcn.00017f24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg3_00;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    int64_t in_stack_00000028;
    int8_t in_stack_00000030;
    
    arg1_00 = 0;
    iVar2 = fcn.00017190(0,0,0x2140,arg2,in_stack_00000028,in_stack_00000030);
    iVar1 = *(arg1 + 8);
    if (*(arg1 + 0x10) < (iVar1 + iVar2) * 2 + 2U) {
        arg3_00 = (iVar1 + 2 + iVar2 * 2) * 2;
        *(arg1 + 0x10) = arg3_00;
        uVar3 = fcn.0001136c(arg1_00,iVar1 * 2,arg3_00,*arg1);
        *arg1 = uVar3;
    }
    fcn.00017190(*(arg1 + 8) * 2 + *arg1,*(arg1 + 0x10) + *(arg1 + 8) * -2 >> 1,0x140,arg2,in_stack_00000028,
                 in_stack_00000030);
    *(arg1 + 8) = *(arg1 + 8) + iVar2;
    return *arg1;
}


/* fcn.00011308 @ 0x11308 */

int64_t fcn.00011308(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x1cf10 + 0x40))(4,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = fcn.000102a0(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.00018d9c @ 0x18d9c */

void fcn.00018d9c(int64_t arg1,int64_t arg2)

{
    fcn.00017f24(arg1,0x1c4b0,*arg2,*(arg2 + 1));
    return;
}


/* fcn.000199ec @ 0x199ec */

int64_t fcn.000199ec(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 - 0x30 < 10) {
        iVar1 = (arg1 & 0xffff) - 0x30;
    }
    else {
        if (uVar2 - 0x61 < 0x1a) {
            uVar2 = uVar2 - 0x20;
        }
        iVar1 = uVar2 - 0x37;
    }
    return iVar1;
}


/* fcn.00019e8c @ 0x19e8c */

void fcn.00019e8c(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x1d070;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x1cff0) {
        fcn.000102a0(arg1_00,0x1cff0,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x19fc0;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x19ee0;
    *(arg1_00 + 4) = 0x114a4;
    *(arg1_00 + 8) = 0x19f84;
    *(arg1_00 + 10) = 0x19f7c;
    *(arg1_00 + 0xc) = 0x19f8c;
    *(arg1_00 + 0xe) = 0x19f94;
    *(arg1_00 + 0x10) = 0x19f9c;
    *(arg1_00 + 0x12) = 0x19fa4;
    *(arg1_00 + 0x14) = 0x19fb8;
    *(arg1_00 + 0x16) = 0x19fac;
    return;
}


/* fcn.0001a12c @ 0x1a12c */

int64_t fcn.0001a12c(int64_t arg1)

{
    uint64_t uVar1;
    unkuint7 Var2;
    
    uVar1 = arg1 + 0xbU & 0xffffffff;
    Var2 = uVar1 >> 8;
    if ((*((arg1 + 0xbU >> 4 & 0x10000000 | uVar1) + 0xc0000000) == '\x02') &&
       (*((arg1 + 10U >> 4 & 0x10000000 | arg1 + 10U & 0xffffffff) + 0xc0000000) == '\0')) {
        return CONCAT71(Var2,1);
    }
    return Var2 << 8;
}


/* fcn.0001a740 @ 0x1a740 */

int64_t fcn.0001a740(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    int64_t arg2_00;
    uint32_t uVar3;
    uint32_t *arg1_00;
    uint32_t *puVar4;
    char cVar5;
    uint *puVar6;
    
    arg1_00 = arg1 & 0xffffffff;
    if ((arg1 & 0xfffff000U) == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = arg1;
    puVar4 = iVar1 + 0xf00U;
    uVar3 = 0;
    *puVar4 = *(iVar1 + 0xf00U) | 0x20;
    arg2_00 = arg2;
    while ((*puVar4 & 0x20) == 0) {
        fcn.0001167c(0x32,arg2_00);
        uVar3 = uVar3 + 1;
        if (3999 < uVar3) {
            return -0x7fffffffffffffee;
        }
    }
    puVar6 = iVar1 + 0x20U;
    *(iVar1 + 0x20U) = 0x43f6020;
    iVar2 = fcn.0001a6fc(arg1_00,arg2_00);
    if (iVar2 == -0x7fffffffffffffee) {
        *(iVar1 + 0x18U) = *(iVar1 + 0x18U) | 0x800;
        *puVar6 = 0x43f6020;
        iVar2 = fcn.0001a6fc(arg1 & 0xffffffff,arg2_00);
        if (iVar2 == -0x7fffffffffffffee) {
            iVar2 = -0x7ffffffffffffff9;
            goto code_r0x0001a81a;
        }
    }
    fcn.0001167c(4000,arg2_00);
    if (iVar2 < 0) {
code_r0x0001a81a:
        *puVar4 = *puVar4 & 0xffffffdf;
        return iVar2;
    }
    *puVar6 = 0x4302580;
    iVar2 = fcn.0001a6fc(arg1_00,arg2_00);
    if (-1 < iVar2) {
        *puVar6 = 0x8430000;
        iVar2 = fcn.0001a6fc(arg1 & 0xffffffff,arg2_00);
        if (iVar2 == 0) {
            *arg2 = *puVar6;
        }
        if (*arg2 == 0) {
            if ((*arg1_00 & 0x30000) != 0) {
                iVar2 = -0x7ffffffffffffff9;
                goto code_r0x0001a93d;
            }
            cVar5 = 'e';
            *arg1_00 = *arg1_00 | 0x10000;
            *arg1_00 = *arg1_00 | 0x20000;
            do {
                if ((*(iVar1 + 0x18) & 4) != 0) break;
                fcn.0001167c(1000,arg2_00);
                cVar5 = cVar5 + -1;
            } while (cVar5 != '\0');
            if (cVar5 != '\0') {
                *puVar6 = 0x8430000;
                cVar5 = 'd';
                iVar2 = fcn.0001a6fc(arg1 & 0xffffffff,arg2_00);
                if (iVar2 == 0) {
                    *arg2 = *puVar6;
                }
                for (; (*arg2 == 0 && (cVar5 != '\0')); cVar5 = cVar5 + -1) {
                    *puVar6 = 0x8430000;
                    iVar2 = fcn.0001a6fc(arg1 & 0xffffffff,arg2_00);
                    if (iVar2 == 0) {
                        *arg2 = *puVar6;
                    }
                    if (iVar2 < 0) break;
                    fcn.0001167c(1000,arg2_00);
                }
            }
            *arg1_00 = *arg1_00 & 0xfffdffff;
            *arg1_00 = *arg1_00 & 0xfffeffff;
        }
        if (-1 < iVar2) {
            *puVar6 = 0x4302180;
            iVar2 = fcn.0001a6fc(arg1_00,arg2_00);
        }
    }
code_r0x0001a93d:
    *puVar4 = *puVar4 & 0xffffffdf;
    return iVar2;
}


/* fcn.0001a6fc @ 0x1a6fc */

ulong fcn.0001a6fc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if ((*(arg1 + 0x20) >> 0x1c & 1) != 0) {
            return 0;
        }
        fcn.0001167c(0x32,arg2);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 4000);
    return 0x8000000000000012;
}


