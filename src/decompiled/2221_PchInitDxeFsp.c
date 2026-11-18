// decompiled by r2ghidra: 2221_PchInitDxeFsp.pe32
// functions: 44

/* entry0 @ 0x10374 */

ulong entry0(int64_t noname_0,int64_t arg1)

{
    ulong noname_1;
    int64_t in_R9;
    
    *0x12128 = *(arg1 + 0x60);
    *0x12130 = *(arg1 + 0x58);
    *0x12120 = arg1;
    fcn.00010fac();
    fcn.00011204(noname_0,arg1);
    noname_1 = 0x12180;
    fcn.00010ee8(0x12060,0x12180);
    *0x121b0 = fcn.00010fdc(0x12070);
    *0x121b0 = *0x121b0 + 0x18;
    fcn.00010f48(0x12000,noname_1,0x103f0,in_R9);
    return 0;
}


/* fcn.00010fac @ 0x10fac */

int64_t fcn.00010fac(void)

{
    if (*0x12140 == 0) {
        fcn.00010ee8(0x12040,0x12140);
    }
    return *0x12140;
}


/* fcn.00010ee8 @ 0x10ee8 */

ulong fcn.00010ee8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x12120;
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


/* fcn.00011204 @ 0x11204 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00011204(int64_t arg1,uint32_t arg2)

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
    iVar2 = fcn.00011a8c();
    cVar1 = (**(iVar2 + 0x30))(0x12020,0x1100000);
    if (cVar1 == '\0') {
        *0x120c8 = 0;
    }
    else {
        iVar2 = fcn.00011a8c();
        iVar2 = (**(iVar2 + 0x20))(0x12020,0x30000);
        if (iVar2 == 0) {
            iStackX_18 = 0xffffffff;
            arg2_00 = &iStackX_18;
            (**(*0x12128 + 0x28))(1,0,1);
            iVar2 = iStackX_18;
            *0x12150 = 1;
            iVar3 = fcn.00011a8c();
            (**(iVar3 + 0x58))(0x12020,0x30000,iVar2);
            noname_1 = 0x20;
            fcn.000102b0(iVar2,0x20);
            *0x12158 = fcn.00010f48(0x11fd0,noname_1,fcn.00011090,arg2_00);
        }
        *0x121a0 = iVar2;
        iVar2 = (**(*0x12128 + 0x140))(0x12050,0,&puStackX_20);
        if (-1 < iVar2) {
            iVar2 = (**puStackX_20)(puStackX_20,&uStackX_10);
            if ((-1 < iVar2) && (uStackX_10 != '\0')) {
                iVar2 = (*puStackX_20[1])(puStackX_20,0x12160);
                if (-1 < iVar2) {
                    iVar2 = fcn.00011a8c();
                    iStackX_8 = (**(iVar2 + 0x20))(0x12020,0x30001);
                    if (iStackX_8 == 0) {
                        (**(*0x12160 + 0x50))(6,0x20,&iStackX_8);
                        iVar2 = iStackX_8;
                        *0x12178 = 1;
                        iVar3 = fcn.00011a8c();
                        (**(iVar3 + 0x58))(0x12020,0x30001,iVar2);
                        fcn.000102b0(iStackX_8,0x20);
                        (**(*0x12160 + 0xc0))(0x11fe0,0x11180,0x12168);
                        (**(*0x12160 + 0xc0))(0x11fc0,0x11180,0x12148);
                    }
                    *0x121a8 = iStackX_8;
                    (**(*0x12160 + 0xc0))(0x12030,0x11120,0x12170);
                }
            }
        }
    }
    return 0;
}


/* fcn.00010fdc @ 0x10fdc */

void fcn.00010fdc(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010fac();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001100a:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001100a;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010f48 @ 0x10f48 */

int64_t fcn.00010f48(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg2;
    (**(*0x12128 + 0x50))(0x200,8,noname_2,0,&iStackX_20);
    (**(*0x12128 + 0xa8))(arg1,iStackX_20,in_stack_00000028);
    (**(*0x12128 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00010924 @ 0x10924 */

void fcn.00010924(void)

{
    uint8_t uVar1;
    char cVar2;
    int16_t iVar3;
    uint32_t uVar4;
    int iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    ulong uVar8;
    uint auStackX_8 [2];
    uint auStackX_10 [6];
    uint auStack_18 [4];
    
    iVar6 = fcn.00010fdc(0x12080);
    if (iVar6 != 0) {
        fcn.00010d9c();
    }
    fcn.00010664();
    auStackX_8[0] = 0xffffffff;
    uVar8 = 0xfd891d00;
    auStackX_10[0] = 4;
    *0xfd891d00 = *0xfd891d00 | 4;
    fcn.0001174c(2,0xfd891d00,auStackX_10,auStackX_8);
    iVar3 = fcn.00010ce0(0xf8000);
    if (((iVar3 != -1) && (uVar7 = fcn.00010d1c(0xf80dc), (uVar7 & 4) != 0)) && ((*(*0x121b0 + 0x3c17) & 1) != 0)) {
        fcn.00010c84(0xf8004,CONCAT71(uVar8 >> 8,4));
    }
    iVar3 = fcn.00010ce0(0xfb000);
    if ((iVar3 != -1) && ((*(*0x121b0 + 0x3a7c) & 0x80) != 0)) {
        uVar4 = fcn.00010d1c(0xfb054);
        fcn.00010d54(0xfb054,uVar4 | 0x100);
    }
    *0xfe001023 = *0xfe001023 | 1;
    *0xfe001021 = *0xfe001021 & 0xbd | 2;
    if (((((*0xfdb80004 >> 8 & 1) != 0) && (uVar4 = fcn.00010d1c(0xa0010), (uVar4 & 0xfffffff0) != 0xfffffff0)) &&
        (((uVar4 & 0xffff0000) != 0 || (iVar5 = fcn.00010d1c(0xa0014), iVar5 != 0)))) &&
       (uVar1 = fcn.00010d1c(0xa0004), (uVar1 & 6) != 6)) {
        uVar4 = fcn.00010d1c(0xa0004);
        fcn.00010d54(0xa0004,uVar4 | 6);
    }
    cVar2 = fcn.00010bcc();
    if (cVar2 == '\a') {
        cVar2 = fcn.00010b88();
        if ((cVar2 != '\x05') && (cVar2 = fcn.00010b88(), cVar2 != '\x03')) {
            return;
        }
        fcn.000102b0(auStack_18,0x10);
        auStack_18[0] = 1;
        fcn.00010e44(0xfe000000);
    }
    return;
}


/* fcn.00010ce0 @ 0x10ce0 */

ushort fcn.00010ce0(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011a8c();
    iVar1 = (**(iVar1 + 0x20))(0x12090,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* fcn.00011a8c @ 0x11a8c */

int64_t fcn.00011a8c(void)

{
    if (*0x12188 == 0) {
        (**(*0x12128 + 0x140))(0x11ff0,0,0x12188);
    }
    return *0x12188;
}


/* fcn.00010c00 @ 0x10c00 */

uchar fcn.00010c00(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011a8c();
    iVar1 = (**(iVar1 + 0x20))(0x12090,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* fcn.00010c38 @ 0x10c38 */

uchar fcn.00010c38(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011a8c();
    iVar1 = (**(iVar1 + 0x20))(0x12090,0x200002);
    *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU)) = arg2;
    return arg2;
}


/* fcn.00010d54 @ 0x10d54 */

uint64_t fcn.00010d54(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011a8c();
    iVar1 = (**(iVar1 + 0x20))(0x12090,0x200002);
    *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU)) = arg2;
    return arg2 & 0xffffffff;
}


/* fcn.00010c84 @ 0x10c84 */

uint8_t fcn.00010c84(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint8_t uVar2;
    
    uVar2 = fcn.00010c00(arg1);
    uVar2 = uVar2 | arg2;
    iVar1 = fcn.00011a8c();
    iVar1 = (**(iVar1 + 0x20))(0x12090,0x200002);
    *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU)) = uVar2;
    return uVar2;
}


/* fcn.00010d1c @ 0x10d1c */

uint fcn.00010d1c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011a8c();
    iVar1 = (**(iVar1 + 0x20))(0x12090,0x200002);
    return *(iVar1 + (arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU));
}


/* fcn.00011838 @ 0x11838 */

ulong fcn.00011838(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ushort *arg1_00;
    ulong uVar2;
    uint8_t uVar3;
    uint64_t arg3_00;
    ushort uStack_38;
    uint8_t uStack_36;
    int iStack_35;
    uint uStack_31;
    int64_t iStack_2d;
    
    iVar1 = arg1;
    if ((iVar1 - 7U & 0xfffffffb) == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar3 = '\x01' << (arg1 & 3);
        arg3_00 = uVar3;
        if (arg3_00 < 0xed) {
            uVar3 = uVar3 + 0x13;
            arg1_00 = fcn.00011560(uVar3);
            if (arg1_00 != NULL) {
                uStack_38 = 4;
                uStack_31 = 1;
                uStack_36 = uVar3;
                iStack_35 = iVar1;
                iStack_2d = arg2;
                if (arg1_00 != &uStack_38) {
                    fcn.000102d0(arg1_00,&uStack_38,0x13);
                }
                if ((arg3_00 != 0) && (arg1_00 + 0x13 != arg3)) {
                    fcn.000102d0(arg1_00 + 0x13,arg3,arg3_00);
                }
                fcn.00011624(arg1_00);
                return 0;
            }
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.00011678 @ 0x11678 */

ulong fcn.00011678(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ushort *arg1_00;
    uint64_t arg3_00;
    uint8_t uVar1;
    ushort uStack_38;
    uint8_t uStack_36;
    uint uStack_35;
    uint uStack_31;
    int64_t iStack_2d;
    
    uVar1 = '\x01' << (arg1 & 3);
    arg3_00 = uVar1;
    if (arg3_00 < 0xed) {
        uVar1 = uVar1 + 0x13;
        arg1_00 = fcn.00011560(uVar1);
        if (arg1_00 != NULL) {
            uStack_38 = 2;
            uStack_31 = 1;
            uStack_36 = uVar1;
            uStack_35 = arg1;
            iStack_2d = arg2;
            if (arg1_00 != &uStack_38) {
                fcn.000102d0(arg1_00,&uStack_38,0x13);
            }
            if ((arg3_00 != 0) && (arg1_00 + 0x13 != arg3)) {
                fcn.000102d0(arg1_00 + 0x13,arg3,arg3_00);
            }
            fcn.00011624(arg1_00);
            return 0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00010ad0 @ 0x10ad0 */

ulong fcn.00010ad0(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t arg1;
    uint64_t uVar4;
    
    iVar1 = fcn.00010b24();
    iVar2 = fcn.00010270(param_1,param_2);
    arg1 = (iVar1 * 10) / 1000000;
    uVar4 = iVar2 + arg1;
    while( true ) {
        uVar3 = fcn.00010270(param_1,arg1);
        if (uVar4 < uVar3) break;
        func_0x00010260();
    }
    return 10;
}


/* fcn.000119c0 @ 0x119c0 */

ulong fcn.000119c0(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    ushort *arg1_00;
    ulong uVar1;
    ushort uStack_28;
    uchar uStack_26;
    uint uStack_25;
    ulong uStack_21;
    ulong uStack_19;
    ulong uStack_11;
    
    arg1_00 = fcn.00011560(CONCAT71(noname_0 >> 8,0x23));
    if (arg1_00 == NULL) {
        uVar1 = 0x8000000000000009;
    }
    else {
        uStack_26 = 0x23;
        uStack_28 = 0xe;
        uStack_25 = 1;
        uStack_21 = 0xfe010004;
        uStack_19 = 10;
        uStack_11 = 600000;
        if (arg1_00 + 0x1f != arg2) {
            fcn.000102d0(arg1_00 + 0x1f,arg2,2);
        }
        if (arg1_00 + 0x21 != arg1) {
            fcn.000102d0(arg1_00 + 0x21,arg1,2);
        }
        if (arg1_00 != &uStack_28) {
            fcn.000102d0(arg1_00,&uStack_28,0x1f);
        }
        fcn.00011624(arg1_00);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001174c @ 0x1174c */

ulong fcn.0001174c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort *arg1_00;
    ulong uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    ushort uStack_38;
    uint8_t uStack_36;
    uint uStack_35;
    int64_t iStack_31;
    
    uVar2 = arg1 & 3;
    uVar5 = '\x01' << uVar2;
    uVar4 = uVar5 * '\x02' + 0xf;
    arg1_00 = fcn.00011560(uVar4);
    if (arg1_00 == NULL) {
        uVar1 = 0x8000000000000009;
    }
    else {
        uStack_38 = 3;
        uStack_36 = uVar4;
        uStack_35 = arg1;
        iStack_31 = arg2;
        if (arg1_00 != &uStack_38) {
            fcn.000102d0(arg1_00,&uStack_38,0xf);
        }
        if (('\x01' << uVar2 != '\0') && (arg1_00 + 0xf != arg3)) {
            fcn.000102d0(arg1_00 + 0xf,arg3,uVar5);
        }
        iVar3 = uVar5 + 0xf + arg1_00;
        if (('\x01' << uVar2 != '\0') && (iVar3 != arg4)) {
            fcn.000102d0(iVar3,arg4,uVar5);
        }
        fcn.00011624(arg1_00);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00010b88 @ 0x10b88 */

void fcn.00010b88(void)

{
    uint32_t uVar1;
    
    if (*0x120a0 == -1) {
        uVar1 = fcn.00010ce0(0xf8002);
        if ((uVar1 & 0xffe0) == 0x5180) {
            *0x120a0 = '\x05';
        }
        else {
            *0x120a0 = (-(((uVar1 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00010434 @ 0x10434 */

void fcn.00010434(ulong param_1,ulong param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    int16_t iVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong noname_1;
    uint32_t *arg2;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t noname_2;
    ushort *arg3;
    ushort auStackX_8 [4];
    ushort auStackX_10 [4];
    ushort auStackX_18 [8];
    int16_t var_40h;
    int16_t var_48h;
    int64_t var_50h;
    
    iVar3 = fcn.00010ce0(0xfd000);
    if (iVar3 != -1) {
        uVar2 = fcn.00010c00(0xfd004);
        fcn.00010c38(0xfd004,CONCAT71(param_2 >> 8,uVar2) & 0xfffffffffffffffd);
        uVar5 = 0xfe010000;
        fcn.00010d54(0xfd010,0xfe010000);
        fcn.00010c84(0xfd004,CONCAT71(uVar5 >> 8,2));
        uVar4 = fcn.00010d1c(0xfd0dc);
        fcn.00010d54(0xfd0dc,uVar4 | 0x10000000);
        fcn.00011838(2,0xfd0dc,0xfd0dc);
        uVar6 = 0;
        arg2 = 0xfe010084;
        uVar7 = uVar6;
        uVar4 = *0xfe01000c;
        do {
            noname_2 = *0x121b0;
            uVar1 = *(*0x121b0 + 0x3b5f + uVar7 * 8);
            if ((uVar1 & 3) != 0) {
                uVar4 = uVar4 | 0x100 << (uVar7 & 0x1f);
                *arg2 = ((*(*0x121b0 + 0x3b63 + uVar7 * 8) & 0x7fff | uVar1 << 0xf) << 2 | uVar1 & 2) << 0xe |
                        *(*0x121b0 + 0x3b65 + uVar7 * 8) & 0x7fff;
                fcn.00011678(2,arg2,noname_2,arg2);
            }
            uVar7 = uVar7 + 1;
            arg2 = arg2 + 1;
        } while (arg2 < 0xfe010098);
        noname_1 = 0xfe01000c;
        uVar5 = 2;
        *0xfe01000c = uVar4;
        fcn.00011678(2,0xfe01000c,noname_2,0xfe01000c);
        for (; ((*0xfe010004 & 0x20) != 0 && (uVar6 < 0x5b8d81)); uVar6 = uVar6 + 10) {
            fcn.00010ad0();
        }
        auStackX_8[0] = 0x20;
        auStackX_18[0] = 0;
        fcn.000119c0(uVar5,noname_1,auStackX_8,auStackX_18);
        auStackX_8[0] = 0xffff;
        auStackX_10[0] = 0x1f;
        *0xfe010004 = *0xfe010004 | 0x1f;
        fcn.0001174c(1,0xfe010004,auStackX_10,auStackX_8);
        auStackX_8[0] = 0xffff;
        auStackX_10[0] = 0x800;
        *0xfe010004 = *0xfe010004 | 0x800;
        fcn.0001174c(1,0xfe010004,auStackX_10,auStackX_8);
        auStackX_8[0] = 0xffff;
        auStackX_10[0] = 0x8000;
        *0xfe010004 = *0xfe010004 | 0x8000;
        arg3 = auStackX_10;
        fcn.0001174c(1,0xfe010004,arg3,auStackX_8);
        *0xfe0100c4 = *0xfe0100c4 | 0x40000000;
        fcn.00011678(2,0xfe0100c4,arg3,0xfe0100c4);
    }
    return;
}


/* fcn.00011f40 @ 0x11f40 */

void fcn.00011f40(ulong noname_0,int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = arg1;
    uVar1 = (uVar2 & 0xfff00000) << 3 | uVar2 & 0xf8000;
    fcn.00011920(uVar1,arg1 >> 0x20,CONCAT44(uVar2,uVar1 * 2 | arg1 >> 4 & 0x700) & 0xfffffffffff);
    return;
}


/* fcn.00011920 @ 0x11920 */

ulong fcn.00011920(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ushort *arg1_00;
    ulong uVar1;
    int64_t in_stack_00000028;
    ushort uStack_28;
    uchar uStack_26;
    uint uStack_25;
    uint uStack_21;
    int64_t iStack_1d;
    ushort uStack_15;
    
    arg1_00 = fcn.00011560(CONCAT71(noname_0 >> 8,0x16));
    if (arg1_00 == NULL) {
        uVar1 = 0x8000000000000009;
    }
    else {
        uStack_25 = 0;
        uStack_28 = 0xb;
        uStack_26 = 0x16;
        uStack_21 = 1;
        iStack_1d = arg2;
        uStack_15 = arg1;
        if (arg1_00 != &uStack_28) {
            fcn.000102d0(arg1_00,&uStack_28,0x15);
        }
        if (arg1_00 + 0x15 != in_stack_00000028) {
            fcn.000102d0(arg1_00 + 0x15,in_stack_00000028,1);
        }
        fcn.00011624(arg1_00);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00011560 @ 0x11560 */

int64_t fcn.00011560(int64_t arg1)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t arg1_00;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t auStackX_10 [3];
    
    iVar4 = 0;
    if (*0x120c8 != '\0') {
        if (*(*0x121a0 + 0x14) == '\0') {
            iVar4 = fcn.00011408(arg1);
            goto code_r0x00011617;
        }
        if (*(*0x121a0 + 0xe) != '\0') {
            piVar3 = *0x121a0;
            if (*(*0x121a0 + 0x15) != '\0') {
                auStackX_10[0] = *(*0x121a0 + 2);
                arg1_00 = 0x120b8;
                fcn.00011e38(0x120b8,**0x121a0,auStackX_10);
                fcn.00011d40(arg1_00,0,**0x121a0,auStackX_10[0]);
                piVar3 = *0x121a0;
                piVar1 = *0x121a0 + 2;
                *(*0x121a0 + 0x15) = 0;
                *(piVar3 + 1) = *piVar1 + -3;
            }
            uVar2 = *(piVar3 + 1);
            uVar5 = (arg1 & 0xff) + uVar2;
            if (uVar5 + 3 <= *(piVar3 + 0xc) << 0xc) {
                *(piVar3 + 1) = uVar5;
                iVar4 = uVar2 + *piVar3;
                fcn.00011028();
            }
            goto code_r0x00011617;
        }
    }
    iVar4 = 0;
code_r0x00011617:
    return iVar4;
}


/* fcn.000102d0 @ 0x102d0 */

ulong * fcn.000102d0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    ulong *puVar1;
    uint64_t uVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    puVar3 = arg2 + -1 + arg3;
    if ((arg2 < puVar1) && (puVar1 <= puVar3)) {
        puVar4 = puVar1 + arg3 + -1;
        uVar6 = 1;
        uVar5 = arg3;
    }
    else {
        uVar5 = arg3 & 7;
        puVar3 = arg2;
        puVar4 = puVar1;
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + 1;
            puVar4 = puVar4 + 1;
        }
    }
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + uVar6 * -2 + 1;
        puVar4 = puVar4 + uVar6 * -2 + 1;
    }
    return puVar1;
}


/* fcn.00011624 @ 0x11624 */

void fcn.00011624(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t arg1_00;
    int aiStackX_10 [6];
    
    if ((*(*0x121a0 + 0x14) != '\0') && (*(*0x121a0 + 0xe) != '\0')) {
        uVar1 = arg1 - **0x121a0;
        arg1_00 = uVar1;
        aiStackX_10[0] = (*0x121a0)[1] + 3;
        fcn.00011d40(arg1_00,uVar1,**0x121a0 + uVar1,aiStackX_10[0] - uVar1);
        fcn.00011d40(arg1_00,5,aiStackX_10,4);
    }
    return;
}


/* fcn.00011d40 @ 0x11d40 */

ulong fcn.00011d40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *puVar4;
    int64_t iStackX_8;
    uchar auStack_68 [80];
    
    if ((arg3 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iStackX_8 = arg1;
        puVar1 = fcn.00011ac8();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.00011b18();
            puVar4 = auStack_68;
            if (puVar3 != NULL) {
                puVar4 = puVar3;
            }
            if (puVar4 != 0x12010) {
                fcn.000102d0(puVar4,0x12010,0x10);
            }
            *(puVar4 + 0x10) = 0x38;
            *(puVar4 + 0x20) = 0xffffffffffffffff;
            *(puVar4 + 0x18) = 2;
            *(puVar4 + 0x1c) = 0x38;
            if (puVar4 + 0x28 != 0x120e0) {
                fcn.000102d0(puVar4 + 0x28,0x120e0,0x10);
            }
            *(puVar4 + 0x38) = arg2;
            *(puVar4 + 0x40) = arg3;
            *(puVar4 + 0x48) = arg4;
            iStackX_8 = 0x50;
            (**puVar1)(puVar1,puVar4,&iStackX_8);
            uVar2 = *(puVar4 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.00010d9c @ 0x10d9c */

ulong fcn.00010d9c(void)

{
    int iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    int *piVar5;
    
    iVar2 = fcn.00010fdc(0x12080);
    if (iVar2 == 0) {
        return 0;
    }
    if (*0x12138 == NULL) {
        iVar2 = fcn.00010fdc(0x12080);
        if (iVar2 == 0) {
            return 1;
        }
        *0x12138 = iVar2 + 0x18;
        if (*0x12138 == NULL) {
            return 1;
        }
    }
    iVar1 = **0x12138;
    if (iVar1 == 0) {
        (**(*0x12130 + 0x68))(0,0,0,0);
        return 1;
    }
    if (iVar1 == 1) {
        uVar3 = 1;
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 != 3) {
                return 1;
            }
            uVar3 = 3;
            piVar5 = *0x12138 + 1;
            uVar4 = 0x24;
            goto code_r0x00010e19;
        }
        uVar3 = 2;
    }
    piVar5 = NULL;
    uVar4 = 0;
code_r0x00010e19:
    (**(*0x12130 + 0x68))(uVar3,0,uVar4,piVar5);
    return 1;
}


/* fcn.00010664 @ 0x10664 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_1ch
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00010664(void)

{
    uint32_t uVar1;
    char cVar2;
    uint16_t uVar3;
    int16_t *arg1;
    uint8_t uVar4;
    uint8_t uVar5;
    ulong uVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t *arg3;
    uchar *arg2;
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    uchar auStackX_20 [8];
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    int64_t var_48h;
    ushort auStack_58 [2];
    ushort auStack_54 [2];
    uint16_t uStack_50;
    uint32_t uStack_4c;
    uint32_t auStack_48 [4];
    int16_t var_30h_2;
    uchar uStack_36;
    int16_t var_2ch;
    uint uStack_35;
    uchar uStack_31;
    int16_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int64_t var_1ch;
    int64_t var_10h;
    
    uStack_50 = *0xfd882778 & 0xffe0;
    auStack_48[2] = 0x80000000;
    auStack_48[1] = 0x7fffffff;
    *0xfe001e20 = *0xfe001e20 | 0x80000000;
    fcn.0001174c(2,0xfe001e20,auStack_48 + 2,auStack_48 + 1);
    auStack_48[0] = 0xffffffff;
    cVar2 = fcn.00010b88();
    if (cVar2 == '\x04') {
        uStack_4c = 0x800000;
        uVar9 = 0x20d8;
    }
    else {
        uStack_4c = 0x80000000;
        uVar9 = 0x2234;
    }
    *(uVar9 | 0xfd880000) = *(uVar9 | 0xfd880000) & auStack_48[0] | uStack_4c;
    arg3 = &uStack_4c;
    fcn.0001174c(2,uVar9 | 0xfd880000,arg3,auStack_48);
    fcn.00010434();
    uVar9 = 0xfe001026;
    *0xfe001026 = *0xfe001026 | 4;
    fcn.00011678(0,0xfe001026,arg3,0xfe001026);
    uVar1 = *(*0x121b0 + 0x3a74);
    uVar8 = uVar1 >> 1;
    arg2 = CONCAT31(uVar1 >> 9,uVar8) & 0xffffff01;
    if (((uVar1 >> 2 & 1) != 0) || ((uVar8 & 1) != 0)) {
        uVar9 = uVar9 & 0xffffffffffffff00;
        if (((uVar1 >> 2 & 1) != 0) && (uVar9 = 2, (uVar1 >> 3 & 1) != 0)) {
            uVar9 = 0x22;
        }
        uVar4 = uVar9 | 0x80;
        if ((uVar8 & 1) == 0) {
            uVar4 = uVar9;
        }
        uVar6 = 0xfd0dc;
        auStackX_8[0] = fcn.00010c84(0xfd0dc,CONCAT71(uVar9 >> 8,uVar4));
        fcn.00011f40(uVar6,0xfd0dc,auStackX_8);
        uVar6 = 0xfd0dc;
        auStackX_10[0] = fcn.00010c00(0xfd0dc);
        arg2 = auStackX_10;
        fcn.00011f40(uVar6,0xfd0dc,arg2);
    }
    uVar1 = *(*0x121b0 + 0x3a74);
    if (((uVar1 >> 2 & 1) != 0) || ((uVar1 >> 1 & 1) != 0)) {
        uVar4 = 0;
        if (((uVar1 >> 2 & 1) != 0) && (uVar4 = 2, (uVar1 >> 3 & 1) != 0)) {
            uVar4 = 0x22;
        }
        uVar5 = uVar4 | 0x80;
        if ((uVar1 >> 1 & 1) == 0) {
            uVar5 = uVar4;
        }
        uVar6 = 0xf80dc;
        auStackX_18[0] = fcn.00010c84(0xf80dc,CONCAT31(uVar1 >> 9,uVar5));
        fcn.00011f40(uVar6,0xf80dc,auStackX_18);
        uVar6 = 0xf80dc;
        auStackX_20[0] = fcn.00010c00(0xf80dc);
        arg2 = auStackX_20;
        fcn.00011f40(uVar6,0xf80dc,arg2);
    }
    auStack_54[0] = 0xffff;
    auStack_58[0] = 0x1000;
    iVar7 = uStack_50 + 8;
    uVar3 = in(iVar7);
    out(iVar7,uVar3 | 0x1000);
    arg1 = fcn.00011560(0x1013);
    if (arg1 != NULL) {
        var_30h_2 = 1;
        uStack_36 = 0x13;
        uStack_35 = 1;
        _uStack_31 = iVar7;
        if (arg1 != &var_30h_2) {
            arg2 = 0xf;
            fcn.000102d0(arg1,&var_30h_2,0xf);
        }
        if (arg1 + 0xf != auStack_58) {
            arg2 = 0x2;
            fcn.000102d0(arg1 + 0xf,auStack_58,2);
        }
        if (arg1 + 0x11 != auStack_54) {
            arg2 = 0x2;
            fcn.000102d0(arg1 + 0x11,auStack_54,2);
        }
        fcn.00011624(arg1);
    }
    *0xfe00104c = *0xfe00104c | 1;
    fcn.00011678(0,0xfe00104c,arg2,0xfe00104c);
    *0xfe001818 = *0xfe001818 | 0x8400000;
    fcn.00011678(2,0xfe001818,arg2,0xfe001818);
    return;
}


/* fcn.00010bcc @ 0x10bcc */

ulong fcn.00010bcc(void)

{
    uint16_t uVar1;
    ulong uVar2;
    
    uVar1 = fcn.00010ce0(0xf8002);
    uVar2 = 7;
    if ((uVar1 & 0xffe0) == 0x7a00) {
        uVar2 = 9;
    }
    return uVar2;
}


/* fcn.000102b0 @ 0x102b0 */

int64_t fcn.000102b0(int64_t arg1,int64_t arg2)

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


/* fcn.00010e44 @ 0x10e44 */

uint64_t fcn.00010e44(int64_t arg1)

{
    int iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint *in_stack_00000028;
    
    uVar2 = 0;
    iVar1 = arg1;
    *(iVar1 + 0x80) = *in_stack_00000028;
    *(iVar1 + 0x84) = in_stack_00000028[1];
    *(iVar1 + 0x88) = in_stack_00000028[2];
    *(iVar1 + 0x8c) = in_stack_00000028[3];
    *(arg1 & 0xffffffff) = 0x100d0;
    uVar3 = uVar2;
    do {
        if ((*(iVar1 + 4) & 1) == 0) {
code_r0x00010ec3:
            if ((*(iVar1 + 4) & 2) != 0) {
                uVar2 = 0x8000000000000007;
            }
            return uVar2;
        }
        if (100000 < uVar3) {
            uVar2 = 0x8000000000000012;
            goto code_r0x00010ec3;
        }
        fcn.00010ad0();
        uVar3 = uVar3 + 1;
    } while( true );
}


/* fcn.00010b24 @ 0x10b24 */

uint64_t fcn.00010b24(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t auStackX_18 [4];
    
    uVar1 = 0;
    fcn.00010280(0x15,auStackX_10,auStackX_18,auStackX_8);
    if ((auStackX_10[0] != 0) && (auStackX_18[0] != 0)) {
        uVar1 = 24000000;
        if (auStackX_8[0] != 0) {
            uVar1 = auStackX_8[0];
        }
        uVar1 = (auStackX_18[0] * uVar1 + (auStackX_10[0] >> 1)) / auStackX_10[0];
    }
    return uVar1;
}


/* fcn.00010280 @ 0x10280 */

uint64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010270 @ 0x10270 */

uint64_t fcn.00010270(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.00011028 @ 0x11028 */

int64_t fcn.00011028(void)

{
    int64_t iVar1;
    ushort uStackX_8;
    uchar uStackX_a;
    
    iVar1 = **0x121a0;
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        uStackX_a = 3;
        uStackX_8 = 0xff;
        if (*(*0x121a0 + 1) + iVar1 != &uStackX_8) {
            fcn.000102d0(*(*0x121a0 + 1) + iVar1,&uStackX_8,3);
        }
        *(**0x121a0 + 5) = (*0x121a0)[1] + 3;
    }
    return iVar1;
}


/* fcn.00011b94 @ 0x11b94 */

ulong fcn.00011b94(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *puVar4;
    ulong uStackX_8;
    uchar auStack_68 [80];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puVar1 = fcn.00011ac8();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.00011b18();
            puVar4 = auStack_68;
            if (puVar3 != NULL) {
                puVar4 = puVar3;
            }
            if (puVar4 != 0x12010) {
                fcn.000102d0(puVar4,0x12010,0x10);
            }
            *(puVar4 + 0x10) = 0x30;
            *(puVar4 + 0x20) = 0xffffffffffffffff;
            *(puVar4 + 0x18) = 1;
            *(puVar4 + 0x1c) = 0x30;
            if (puVar4 + 0x28 != arg1) {
                fcn.000102d0(puVar4 + 0x28,arg1,0x10);
            }
            *(puVar4 + 0x38) = arg2;
            *(puVar4 + 0x40) = arg3;
            uStackX_8 = 0x48;
            (**puVar1)(puVar1,puVar4,&uStackX_8);
            uVar2 = *(puVar4 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.00011c88 @ 0x11c88 */

ulong fcn.00011c88(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *puVar4;
    ulong uStackX_10;
    uchar auStack_48 [64];
    
    puVar1 = fcn.00011ac8();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.00011b18();
        puVar4 = auStack_48;
        if (puVar3 != NULL) {
            puVar4 = puVar3;
        }
        if (puVar4 != 0x12010) {
            fcn.000102d0(puVar4,0x12010,0x10);
        }
        *(puVar4 + 0x10) = 0x28;
        *(puVar4 + 0x20) = 0xffffffffffffffff;
        *(puVar4 + 0x18) = 4;
        *(puVar4 + 0x1c) = 0x28;
        if (puVar4 + 0x28 != arg1) {
            fcn.000102d0(puVar4 + 0x28,arg1,0x10);
        }
        *(puVar4 + 0x38) = 1;
        uStackX_10 = 0x40;
        (**puVar1)(puVar1,puVar4,&uStackX_10);
        uVar2 = *(puVar4 + 0x20);
    }
    return uVar2;
}


/* fcn.00011090 @ 0x11090 */

void fcn.00011090(void)

{
    uint16_t *puVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uchar auStackX_18 [16];
    
    iVar3 = (**(*0x12128 + 0x140))(0x11fd0,0,auStackX_18);
    if ((-1 < iVar3) && (*(*0x121a0 + 0x14) == '\0')) {
        fcn.00011028();
        piVar2 = *0x121a0;
        puVar1 = *0x121a0 + 0xc;
        *(*0x121a0 + 0x14) = 1;
        fcn.00011b94(0x120e0,*piVar2,*puVar1 << 0xc);
        fcn.00011c88(0x120e0);
        fcn.00011b94(0x120d0,*0x121a0,8);
        fcn.00011c88(0x120d0);
    }
    return;
}


/* fcn.00011e38 @ 0x11e38 */

ulong fcn.00011e38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uchar *puVar2;
    uchar *puVar3;
    ulong uStackX_8;
    uchar auStack_68 [80];
    
    if (arg1 != 0) {
        if (arg2 == 0) {
            if (arg3 == 0) {
code_r0x00011e86:
                puVar1 = fcn.00011ac8();
                if (puVar1 == NULL) {
                    return 0x8000000000000013;
                }
                puVar2 = fcn.00011b18();
                puVar3 = auStack_68;
                if (puVar2 != NULL) {
                    puVar3 = puVar2;
                }
                if (puVar3 != 0x12010) {
                    fcn.000102d0(puVar3,0x12010,0x10);
                }
                *(puVar3 + 0x10) = 0x30;
                *(puVar3 + 0x20) = 0xffffffffffffffff;
                *(puVar3 + 0x18) = 3;
                *(puVar3 + 0x1c) = 0x30;
                if (puVar3 + 0x28 != arg1) {
                    fcn.000102d0(puVar3 + 0x28,arg1,0x10);
                }
                *(puVar3 + 0x38) = arg2;
                if (arg3 == 0) {
                    *(puVar3 + 0x40) = 0;
                }
                else {
                    *(puVar3 + 0x40) = *arg3;
                }
                uStackX_8 = 0x48;
                (**puVar1)(puVar1,puVar3,&uStackX_8);
                if (arg3 != 0) {
                    *arg3 = *(puVar3 + 0x40);
                }
                return *(puVar3 + 0x20);
            }
        }
        else if (arg3 != 0) goto code_r0x00011e86;
    }
    return 0x8000000000000002;
}


/* fcn.00011408 @ 0x11408 */

int64_t fcn.00011408(int64_t arg1)

{
    int16_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    ushort *puStackX_10;
    ushort *puStackX_18;
    int64_t var_38h;
    uint32_t var_40h;
    
    puStackX_10 = **0x121a0;
    piVar6 = *0x121a0;
    if (puStackX_10 == NULL) {
        puStackX_10 = 0xffffffff;
        iVar3 = (**(*0x12128 + 0x28))(1,0,4,&puStackX_10);
        piVar6 = *0x121a0;
        if (-1 < iVar3) {
            *(puStackX_10 + 5) = 0;
            *puStackX_10 = 0xaa;
            *(puStackX_10 + 1) = 0xd;
            *(puStackX_10 + 3) = 1;
            *(piVar6 + 1) = 0xd;
            *piVar6 = puStackX_10;
            *(piVar6 + 0xc) = 4;
            goto code_r0x000114a1;
        }
code_r0x00011466:
        iVar3 = 0;
    }
    else {
code_r0x000114a1:
        iVar1 = *(piVar6 + 0xc);
        uVar2 = *(piVar6 + 1);
        uVar4 = iVar1 - 2;
        uVar5 = arg1 + uVar2;
        if (uVar4 << 0xc < uVar5 + 3) {
            puStackX_18 = 0xffffffff;
            iVar3 = (**(*0x12128 + 0x28))(1,0,uVar4 + 4,&puStackX_18);
            if (iVar3 < 0) goto code_r0x00011466;
            if ((uVar2 != 0) && (puStackX_18 != puStackX_10)) {
                fcn.000102d0(puStackX_18,puStackX_10,uVar2);
            }
            (**(*0x12128 + 0x30))(puStackX_10,*(*0x121a0 + 0xc));
            piVar6 = *0x121a0;
            **0x121a0 = puStackX_18;
            *(piVar6 + 0xc) = iVar1 + 2;
        }
        *(piVar6 + 1) = uVar5;
        iVar3 = uVar2 + *piVar6;
    }
    return iVar3;
}


/* fcn.00011ac8 @ 0x11ac8 */

int64_t fcn.00011ac8(void)

{
    int64_t iVar1;
    
    if (*0x12198 == 0) {
        iVar1 = (**(*0x12128 + 0x140))(0x11fb0,0,0x12198);
        if (iVar1 < 0) {
            *0x12198 = 0;
        }
    }
    return *0x12198;
}


/* fcn.00011b18 @ 0x11b18 */

uint64_t fcn.00011b18(void)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_8 [4];
    
    uVar4 = 0;
    if (*0x12190 == 0) {
        iVar1 = fcn.00010ee8(0x11fa0,aiStackX_8);
        *0x12190 = uVar4;
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
                *0x12190 = *(piVar2 + 2);
            }
        }
    }
    return *0x12190;
}


