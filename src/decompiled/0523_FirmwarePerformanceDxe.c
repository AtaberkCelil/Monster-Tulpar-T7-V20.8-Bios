// decompiled by r2ghidra: 0523_FirmwarePerformanceDxe.pe32
// functions: 21

/* entry0 @ 0x10304 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010318(arg1,in_RDX);
    fcn.000103e4(arg1,in_RDX);
    return;
}


/* fcn.00010318 @ 0x10318 */

void fcn.00010318(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong noname_0_00;
    
    *0x11190 = *(arg1 + 0x60);
    *0x11198 = *(arg1 + 0x58);
    *0x11188 = arg1;
    fcn.00010bc8();
    noname_0_00 = 0x110e8;
    iVar3 = fcn.00010bf8(0x110e8);
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        iVar3 = fcn.000102d0(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar6 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        iVar5 = fcn.000102d0(uVar6,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
        *0x111b0 = (iVar5 - iVar3) * 0x2685;
    }
    else {
        *0x111b0 = *(iVar3 + 0x18);
    }
    return;
}


/* fcn.000103e4 @ 0x103e4 */

ulong fcn.000103e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong noname_1;
    ulong noname_2;
    int64_t arg2_00;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    iStackX_10 = arg2;
    iVar1 = fcn.00010ac4();
    iVar1 = (**(iVar1 + 0x28))(0x225);
    if (iVar1 != 0x1103a) {
        section..text(0x1103a,iVar1,6);
    }
    iVar1 = fcn.00010ac4();
    iStackX_10 = (**(iVar1 + 0x20))(0x163);
    section..text(0x11040,&iStackX_10,8);
    iVar1 = fcn.00010ac4();
    *0x11048 = (**(iVar1 + 0x18))(0x226);
    iVar1 = fcn.00010ac4();
    *0x1104c = (**(iVar1 + 0x18))(0x224);
    *0x11050 = 0x1000013;
    (**(*0x11190 + 0x140))(0x10fb0,0,70000);
    (***0x11170)(0x10920,0x1f);
    (**(*0x11190 + 0x170))(0x200,0x10,0x10a74,0,0x11010,auStackX_18);
    arg2_00 = 0;
    noname_2 = 0x10a7c;
    noname_1 = 0x10;
    (**(*0x11190 + 0x170))(0x200);
    iVar1 = fcn.00010bf8(0x10f40);
    if (iVar1 != 0) {
        *0x110c0 = *(iVar1 + 0x18);
    }
    fcn.00010b60(0x11020,noname_1,noname_2,arg2_00);
    fcn.00010b60(0x10f80,noname_1,noname_2,arg2_00);
    return 0;
}


/* fcn.00010bc8 @ 0x10bc8 */

int64_t fcn.00010bc8(void)

{
    if (*0x111a8 == 0) {
        fcn.00010b00(0x10fe0,0x111a8);
    }
    return *0x111a8;
}


/* fcn.00010b00 @ 0x10b00 */

ulong fcn.00010b00(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x11188;
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


/* fcn.00010bf8 @ 0x10bf8 */

void fcn.00010bf8(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010bc8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010c26:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010c26;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00010ac4 @ 0x10ac4 */

int64_t fcn.00010ac4(void)

{
    if (*0x111a0 == 0) {
        (**(*0x11190 + 0x140))(0x10fa0,0,0x111a0);
    }
    return *0x111a0;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3296 named .text
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


/* fcn.00010b60 @ 0x10b60 */

int64_t fcn.00010b60(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x11190 + 0x50))(0x200,8,0x10564,0,&iStackX_20);
    (**(*0x11190 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x11190 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.00010c44 @ 0x10c44 */

ulong fcn.00010c44(int64_t arg1)

{
    bool bVar1;
    int64_t iVar2;
    ulong uStackX_10;
    
    iVar2 = fcn.00010bc8();
    bVar1 = *(iVar2 + 0x20) < 0x100000000;
    if (bVar1) {
        uStackX_10 = 0xffffffff;
    }
    iVar2 = (**(*0x11190 + 0x28))(bVar1,0,arg1,&uStackX_10);
    if (iVar2 < 0) {
        uStackX_10 = 0;
    }
    return uStackX_10;
}


/* fcn.00010e4c @ 0x10e4c */

ulong fcn.00010e4c(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    ulong uStackX_10;
    uchar auStack_58 [80];
    
    if (arg2 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puVar1 = fcn.00010d80();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.00010dd0();
            arg1_00 = auStack_58;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x10fc0) {
                section..text(arg1_00,0x10fc0,0x10);
            }
            *(arg1_00 + 0x10) = 0x30;
            *(arg1_00 + 0x20) = 0xffffffffffffffff;
            *(arg1_00 + 0x18) = 1;
            *(arg1_00 + 0x1c) = 0x30;
            if (arg1_00 + 0x28 != arg1) {
                section..text(arg1_00 + 0x28,arg1,0x10);
            }
            *(arg1_00 + 0x38) = arg2;
            *(arg1_00 + 0x40) = 8;
            uStackX_10 = 0x48;
            (**puVar1)(puVar1,arg1_00,&uStackX_10);
            uVar2 = *(arg1_00 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.00010ca8 @ 0x10ca8 */

int64_t fcn.00010ca8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uchar auVar1 [16];
    uchar auVar2 [16];
    uint32_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    char cVar10;
    char cVar11;
    
    cVar11 = -1;
    cVar10 = -1;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = *0x111b0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = arg1;
    auVar2 = auVar2 % auVar1;
    uVar9 = auVar2._0_8_;
    uVar7 = 0;
    uVar8 = auVar2._0_4_;
    uVar4 = auVar2._4_4_;
    if (uVar9 == uVar8) {
        if (uVar8 == 0) {
            iVar5 = -1;
        }
        else {
            iVar5 = 0x1f;
            for (uVar3 = uVar8; 0 < uVar3; uVar3 = uVar3 * 2) {
                iVar5 = iVar5 + -1;
            }
        }
    }
    else {
        uVar6 = uVar9 >> 0x20;
        if (uVar4 == 0) {
            iVar5 = -1;
        }
        else {
            iVar5 = 0x1f;
            for (; 0 < uVar6; uVar6 = uVar6 * 2) {
                iVar5 = iVar5 + -1;
            }
        }
        iVar5 = iVar5 + 0x20;
    }
    if (-1 < iVar5 + -0x21) {
        if (uVar9 == uVar8) {
            uVar6 = uVar9 & 0xffffffff;
            if (uVar8 != 0) {
                cVar10 = '\x1f';
                while (0 < uVar8) {
                    cVar10 = cVar10 + -1;
                    uVar8 = uVar6 * 2;
                    uVar6 = uVar8;
                }
            }
        }
        else {
            uVar6 = uVar9 >> 0x20;
            if (uVar4 != 0) {
                cVar11 = '\x1f';
                while (0 < uVar4) {
                    cVar11 = cVar11 + -1;
                    uVar4 = uVar6 * 2;
                    uVar6 = uVar4;
                }
            }
            cVar10 = cVar11 + ' ';
        }
        uVar7 = cVar10 - 0x21;
    }
    return ((uVar9 >> (uVar7 & 0x3f)) * 1000000000) / (*0x111b0 >> (uVar7 & 0x3f)) + (arg1 / *0x111b0) * 1000000000;
}


/* fcn.000106cc @ 0x106cc */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000106cc(void)

{
    uint32_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    ulong uStackX_8;
    ulong *puStackX_10;
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    char *pcStack_28;
    int64_t iStack_20;
    int64_t var_10h;
    int64_t var_8h;
    
    iVar3 = (**(*0x11190 + 0x140))(0x10fd0,0,&var_bp_20h);
    if (-1 < iVar3) {
        iVar3 = (**(*0x11190 + 0x140))(0x10f90,0,&puStackX_10);
        pcVar2 = *0x11178;
        if (-1 < iVar3) {
            if (*0x11178 == NULL) {
                fcn.000102a0(&pcStack_28,0x10);
                uStackX_8 = 0x10;
                iVar3 = (**(*0x11198 + 0x48))(L"FirmwarePerformance",0x10f40,0,&uStackX_8,&pcStack_28);
                if ((-1 < iVar3) && (iVar3 = (**(*0x11190 + 0x28))(2,0,1,&pcStack_28), -1 < iVar3)) {
                    *0x11150 = pcStack_28;
                }
                if ((*0x11150 == NULL) && (*0x11150 = fcn.00010c44(1), *0x11150 == NULL)) {
                    return -0x7ffffffffffffff7;
                }
                if (*0x11150 != "FBPT8") {
                    section..text(*0x11150,0x110b0,0x38);
                }
            }
            else {
                *(*0x11178 + 0x10) = *0x110c0;
                *0x11150 = pcVar2;
            }
            uVar1 = *(*0x11150 + 4);
            iStack_20 = *0x11158;
            *0x1106c = *0x11158;
            *0x1105c = *0x11150;
            pcStack_28 = *0x11150;
            (**(*0x11198 + 0x58))(L"FirmwarePerformance",0x10f40,3,0x10,&pcStack_28);
            (**puStackX_10)(puStackX_10,L"FirmwarePerformance",0x10f40);
            uVar5 = *0x11034;
            *0x11039 = '\0';
            uVar4 = 0;
            if (uVar5 != 0) {
                do {
                    *0x11039 = *0x11039 + "FPDTD"[uVar4];
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uVar5);
            }
            *0x11039 = -*0x11039;
            iVar3 = (**var_bp_20h)(var_bp_20h,"FPDTD",uVar5,0x11160);
            if (iVar3 < 0) {
                if (*0x11150 != NULL) {
                    (**(*0x11190 + 0x30))(*0x11150,((uVar1 & 0xfff) != 0) + (uVar1 >> 0xc));
                }
                if (*0x11158 != 0) {
                    (**(*0x11190 + 0x30))(*0x11158,1);
                }
                *0x11150 = NULL;
                *0x11158 = 0;
            }
            else {
                iVar3 = 0;
            }
        }
    }
    return iVar3;
}


/* fcn.00010d80 @ 0x10d80 */

int64_t fcn.00010d80(void)

{
    int64_t iVar1;
    
    if (*0x111c0 == 0) {
        iVar1 = (**(*0x11190 + 0x140))(0x10f70,0,0x111c0);
        if (iVar1 < 0) {
            *0x111c0 = 0;
        }
    }
    return *0x111c0;
}


/* fcn.00010dd0 @ 0x10dd0 */

uint64_t fcn.00010dd0(void)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_8 [4];
    
    uVar4 = 0;
    if (*0x111b8 == 0) {
        iVar1 = fcn.00010b00(0x10f50,aiStackX_8);
        *0x111b8 = uVar4;
        if (-1 < iVar1) {
            uVar3 = 0;
            piVar2 = aiStackX_8[0] + 0x10;
            if (*(aiStackX_8[0] + 4) != 0) {
                do {
                    uVar3 = uVar4;
                    if ((*piVar2 == 7) && (0x4f < *(piVar2 + 6) << 0xc)) break;
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar3;
                    piVar2 = piVar2 + *(aiStackX_8[0] + 8);
                } while (uVar3 < *(aiStackX_8[0] + 4));
            }
            if (uVar3 < *(aiStackX_8[0] + 4)) {
                *0x111b8 = *(piVar2 + 2);
            }
        }
    }
    return *0x111b8;
}


