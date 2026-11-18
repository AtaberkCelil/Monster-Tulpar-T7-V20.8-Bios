// decompiled by r2ghidra: 2233_SaInitDxeFsp.pe32
// functions: 21

/* entry0 @ 0x10334 */

int64_t entry0(int64_t noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    *0x11190 = *(arg1 + 0x60);
    *0x11188 = arg1;
    fcn.0001089c();
    fcn.00010a9c(noname_0,arg1);
    fcn.000107d8(0x110f0,0x111e8);
    iVar1 = fcn.000104a0();
    if (iVar1 < 0) {
        fcn.00010384();
    }
    return iVar1;
}


/* fcn.0001089c @ 0x1089c */

int64_t fcn.0001089c(void)

{
    if (*0x111a8 == 0) {
        fcn.000107d8(0x110d0,0x111a8);
    }
    return *0x111a8;
}


/* fcn.000107d8 @ 0x107d8 */

ulong fcn.000107d8(uint32_t arg1,int64_t arg2)

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


/* fcn.00010a9c @ 0x10a9c */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00010a9c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_00000014;
    ulong noname_1;
    int64_t *arg2_00;
    int64_t iStackX_8;
    ulong uStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_bp_10h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    iStackX_8 = arg1;
    iVar2 = fcn.00010630();
    cVar1 = (**(iVar2 + 0x30))(0x110b0,0x1100000);
    if (cVar1 == '\0') {
        *0x11130 = 0;
    }
    else {
        iVar2 = fcn.00010630();
        iVar2 = (**(iVar2 + 0x20))(0x110b0,0x30000);
        if (iVar2 == 0) {
            iStackX_18 = 0xffffffff;
            arg2_00 = &iStackX_18;
            (**(*0x11190 + 0x28))(1,0,1);
            iVar2 = iStackX_18;
            *0x111b8 = 1;
            iVar3 = fcn.00010630();
            (**(iVar3 + 0x58))(0x110b0,0x30000,iVar2);
            noname_1 = 0x20;
            fcn.000102a0(iVar2,0x20);
            *0x111c0 = fcn.00010838(0x11050,noname_1,fcn.00010934,arg2_00);
        }
        *0x11200 = iVar2;
        iVar2 = (**(*0x11190 + 0x140))(0x110e0,0,&puStackX_20);
        if (-1 < iVar2) {
            iVar2 = (**puStackX_20)(puStackX_20,&uStackX_10);
            if ((-1 < iVar2) && (uStackX_10 != '\0')) {
                iVar2 = (*puStackX_20[1])(puStackX_20,0x111c8);
                if (-1 < iVar2) {
                    iVar2 = fcn.00010630();
                    iStackX_8 = (**(iVar2 + 0x20))(0x110b0,0x30001);
                    if (iStackX_8 == 0) {
                        (**(*0x111c8 + 0x50))(6,0x20,&iStackX_8);
                        iVar2 = iStackX_8;
                        *0x111e0 = 1;
                        iVar3 = fcn.00010630();
                        (**(iVar3 + 0x58))(0x110b0,0x30001,iVar2);
                        fcn.000102a0(iStackX_8,0x20);
                        (**(*0x111c8 + 0xc0))(0x11070,0x10a24,0x111d0);
                        (**(*0x111c8 + 0xc0))(0x11030,0x10a24,0x111b0);
                    }
                    *0x11208 = iStackX_8;
                    (**(*0x111c8 + 0xc0))(0x110c0,0x109c4,0x111d8);
                }
            }
        }
    }
    return 0;
}


/* fcn.000104a0 @ 0x104a0 */

ulong fcn.000104a0(void)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar auStackX_18 [16];
    
    piVar1 = fcn.0001089c();
    iVar3 = 0xffff;
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000104d7:
            if (piVar1 == NULL) goto code_r0x000104f6;
            if ((_str.W_h_ == *(piVar1 + 4)) && (*0x11068 == *(piVar1 + 8))) break;
        }
        else if (*piVar1 == 4) goto code_r0x000104d7;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
    if (piVar1 != NULL) {
        *0x11180 = *(piVar1 + 0x19);
    }
code_r0x000104f6:
    fcn.00010838(0x11090,*0x11068,0x1059c,0xffff);
    if (0x1ffff < *(*0x11188 + 8)) {
        iVar3 = 0;
        iVar2 = (**(*0x11190 + 0x170))(0x200,8,0x105e0,0,0x11020,auStackX_18);
        if (-1 < iVar2) goto code_r0x00010563;
    }
    fcn.00010700(iVar3);
code_r0x00010563:
    iVar2 = 0;
    iVar3 = (**(*0x11190 + 0x50))(0x201,8,0x105e0,0,auStackX_18);
    if (iVar3 < 0) {
        fcn.00010700(iVar2);
    }
    return 0;
}


/* fcn.00010384 @ 0x10384 */

void fcn.00010384(void)

{
    int64_t iVar1;
    
    if (*0x11130 != '\0') {
        if (*0x111c0 != 0) {
            (**(*0x11190 + 0x70))();
        }
        if (*0x111c8 != 0) {
            if (*0x111d0 != 0) {
                (**(*0x111c8 + 0xc0))(0x11070,0,0x111d0);
            }
            if (*0x111b0 != 0) {
                (**(*0x111c8 + 0xc0))(0x11030,0,0x111b0);
            }
            if (*0x111d8 != 0) {
                (**(*0x111c8 + 0xc0))(0x110c0,0,0x111d8);
            }
        }
        if (*0x111b8 != '\0') {
            (**(*0x11190 + 0x30))(*0x11200,1);
            iVar1 = fcn.00010630();
            (**(iVar1 + 0x58))(0x110b0,0x30000,0);
        }
        if ((*0x111c8 != 0) && (*0x111e0 != '\0')) {
            (**(*0x111c8 + 0x58))(*0x11208);
            iVar1 = fcn.00010630();
            (**(iVar1 + 0x58))(0x110b0,0x30001,0);
        }
    }
    return;
}


/* fcn.00010630 @ 0x10630 */

int64_t fcn.00010630(void)

{
    if (*0x11198 == 0) {
        (**(*0x11190 + 0x140))(0x11080,0,0x11198);
    }
    return *0x11198;
}


/* fcn.00010838 @ 0x10838 */

int64_t fcn.00010838(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x11190 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x11190 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x11190 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00010700 @ 0x10700 */

//WARNING: Removing unreachable block (ram,0x00010763)

ulong fcn.00010700(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = fcn.0001066c(0x11040);
    return uVar1;
}


/* fcn.0001066c @ 0x1066c */

ulong fcn.0001066c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if (*0x111a0 == NULL) {
        if ((*0x11190 != 0) && (*(*0x11190 + 0x140) != NULL)) {
            iVar1 = (**(*0x11190 + 0x140))(0x11010,0,0x111a0);
            if (iVar1 < 0) {
                *0x111a0 = NULL;
            }
            if (*0x111a0 != NULL) goto code_r0x000106d8;
        }
        uVar2 = 0x8000000000000003;
    }
    else {
code_r0x000106d8:
        uVar2 = (***0x111a0)(0x90000002,0x61001,0,arg1,in_stack_00000028);
    }
    return uVar2;
}


/* fcn.000107b4 @ 0x107b4 */

ushort fcn.000107b4(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.00010630();
    iVar1 = (**(iVar1 + 0x20))(0x11100,0x200002);
    return *(iVar1 + 0x50000);
}


/* fcn.0001077c @ 0x1077c */

uchar fcn.0001077c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00010630();
    iVar1 = (**(iVar1 + 0x20))(0x11100,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3456 named .text
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


/* fcn.000108cc @ 0x108cc */

int64_t fcn.000108cc(void)

{
    int64_t iVar1;
    ushort uStackX_8;
    uchar uStackX_a;
    
    iVar1 = **0x11200;
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        uStackX_a = 3;
        uStackX_8 = 0xff;
        if (*(*0x11200 + 1) + iVar1 != &uStackX_8) {
            section..text(*(*0x11200 + 1) + iVar1,&uStackX_8,3);
        }
        *(**0x11200 + 5) = (*0x11200)[1] + 3;
    }
    return iVar1;
}


/* fcn.00010d6c @ 0x10d6c */

ulong fcn.00010d6c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    ulong uStackX_8;
    uchar auStack_68 [80];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puVar1 = fcn.00010ca0();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.00010cf0();
            arg1_00 = auStack_68;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x110a0) {
                section..text(arg1_00,0x110a0,0x10);
            }
            *(arg1_00 + 0x10) = 0x30;
            *(arg1_00 + 0x20) = 0xffffffffffffffff;
            *(arg1_00 + 0x18) = 1;
            *(arg1_00 + 0x1c) = 0x30;
            if (arg1_00 + 0x28 != arg1) {
                section..text(arg1_00 + 0x28,arg1,0x10);
            }
            *(arg1_00 + 0x38) = arg2;
            *(arg1_00 + 0x40) = arg3;
            uStackX_8 = 0x48;
            (**puVar1)(puVar1,arg1_00,&uStackX_8);
            uVar2 = *(arg1_00 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.00010e60 @ 0x10e60 */

ulong fcn.00010e60(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    ulong uStackX_10;
    uchar auStack_48 [64];
    
    puVar1 = fcn.00010ca0();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.00010cf0();
        arg1_00 = auStack_48;
        if (puVar3 != NULL) {
            arg1_00 = puVar3;
        }
        if (arg1_00 != 0x110a0) {
            section..text(arg1_00,0x110a0,0x10);
        }
        *(arg1_00 + 0x10) = 0x28;
        *(arg1_00 + 0x20) = 0xffffffffffffffff;
        *(arg1_00 + 0x18) = 4;
        *(arg1_00 + 0x1c) = 0x28;
        if (arg1_00 + 0x28 != arg1) {
            section..text(arg1_00 + 0x28,arg1,0x10);
        }
        *(arg1_00 + 0x38) = 1;
        uStackX_10 = 0x40;
        (**puVar1)(puVar1,arg1_00,&uStackX_10);
        uVar2 = *(arg1_00 + 0x20);
    }
    return uVar2;
}


/* fcn.00010934 @ 0x10934 */

void fcn.00010934(void)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uchar auStackX_18 [16];
    
    iVar3 = (**(*0x11190 + 0x140))(0x11050,0,auStackX_18);
    if ((-1 < iVar3) && (*(*0x11200 + 0x14) == '\0')) {
        fcn.000108cc();
        piVar2 = *0x11200;
        puVar1 = *0x11200 + 0xc;
        *(*0x11200 + 0x14) = 1;
        fcn.00010d6c(0x11148,*piVar2,*puVar1 << 0xc);
        fcn.00010e60(0x11148);
        fcn.00010d6c(0x11138,*0x11200,8);
        fcn.00010e60(0x11138);
    }
    return;
}


/* fcn.00010f18 @ 0x10f18 */

ulong fcn.00010f18(ulong noname_0,ulong noname_1,int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    int64_t aiStackX_18 [2];
    uchar auStack_58 [80];
    
    aiStackX_18[0] = arg1;
    puVar1 = fcn.00010ca0();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.00010cf0();
        arg1_00 = auStack_58;
        if (puVar3 != NULL) {
            arg1_00 = puVar3;
        }
        if (arg1_00 != 0x110a0) {
            section..text(arg1_00,0x110a0,0x10);
        }
        *(arg1_00 + 0x10) = 0x30;
        *(arg1_00 + 0x20) = 0xffffffffffffffff;
        *(arg1_00 + 0x18) = 3;
        *(arg1_00 + 0x1c) = 0x30;
        if (arg1_00 + 0x28 != 0x11148) {
            section..text(arg1_00 + 0x28,0x11148,0x10);
        }
        *(arg1_00 + 0x38) = 0;
        *(arg1_00 + 0x40) = 0;
        aiStackX_18[0] = 0x48;
        (**puVar1)(puVar1,arg1_00,aiStackX_18);
        uVar2 = *(arg1_00 + 0x20);
    }
    return uVar2;
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


/* fcn.00010ca0 @ 0x10ca0 */

int64_t fcn.00010ca0(void)

{
    int64_t iVar1;
    
    if (*0x111f8 == 0) {
        iVar1 = (**(*0x11190 + 0x140))(0x11000,0,0x111f8);
        if (iVar1 < 0) {
            *0x111f8 = 0;
        }
    }
    return *0x111f8;
}


/* fcn.00010cf0 @ 0x10cf0 */

uint64_t fcn.00010cf0(void)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_8 [4];
    
    uVar4 = 0;
    if (*0x111f0 == 0) {
        iVar1 = fcn.000107d8(0x10ff0,aiStackX_8);
        *0x111f0 = uVar4;
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
                *0x111f0 = *(piVar2 + 2);
            }
        }
    }
    return *0x111f0;
}


