// decompiled by r2ghidra: 0868_SbRun.pe32
// functions: 43

/* entry0 @ 0x111c0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000111fc(arg1,arg2);
    iVar1 = fcn.000116dc(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00011408();
    }
    return iVar1;
}


/* fcn.000111fc @ 0x111fc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000111fc(ulong noname_0,int64_t arg1)

{
    int16_t iVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    int64_t iVar5;
    int16_t *piVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    ulong uVar9;
    int16_t *piVar10;
    ulong uVar11;
    int64_t iVar12;
    int16_t *piVar13;
    bool bVar14;
    uint32_t uStack_38;
    ushort uStack_34;
    uchar uStack_32;
    uchar uStack_31;
    uint uStack_30;
    ushort uStack_2c;
    uchar uStack_2a;
    uchar uStack_29;
    int64_t var_bp_20h;
    int32_t var_bp_18h;
    int16_t var_14h;
    int8_t var_12h;
    int64_t var_bp_10h;
    
    *0x13210 = *(arg1 + 0x58);
    *0x13208 = *(arg1 + 0x60);
    var_bp_10h = 0x13220;
    *0x13200 = arg1;
    *0x13218 = *0x13210;
    *0x13230 = *0x13208;
    (**(*0x13208 + 0x50))(0x201,8,0x119c4);
    var_bp_10h = 0x13228;
    uVar9 = 0x60000202;
    (**(*0x13230 + 0x50))(0x60000202,8,0x119d0,0);
    fcn.000119f8();
    iVar5 = fcn.00011a64();
    if (iVar5 == 0) {
        cVar2 = fcn.00012e00();
        uVar3 = in(0x1808);
        fcn.000110d0(uVar9,0x1808);
        while( true ) {
            iVar4 = in(0x1808);
            uVar8 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            fcn.000110c0();
        }
        fcn.000110d0(uVar8,0x1808);
        if (cVar2 == '\0') {
            fcn.000110f0();
        }
        else {
            fcn.000110e0();
        }
    }
    *0x13300 = *0x13210;
    var_bp_10h = 0x132f8;
    (**(*0x13208 + 0x50))(0x60000202,0x10,0x11b48);
    var_bp_10h = 0x13308;
    (**(*0x13208 + 0x50))(0x201,0x10,0x11478,0);
    fcn.00011b5c();
    var_bp_10h = 0x130e0;
    (**(*0x13208 + 0x170))(0x200,0x10,0x11bbc,0);
    var_bp_10h = 0x130c0;
    (**(*0x13208 + 0x170))(0x200,0x10,0x11be4,0);
    if ((*0x13258 != NULL) || (iVar5 = (**(*0x13208 + 0x140))(0x130d0,0), -1 < iVar5)) {
        (***0x13258)(*0x13258,0x13260);
    }
    bVar14 = false;
    if (*0x132b8 == 0) {
        *0x13268 = *(arg1 + 0x60);
        *0x13270 = *(arg1 + 0x58);
        *0x132b8 = arg1;
    }
    fcn.00011ef8();
    fcn.00011000(&uStack_38,0x10,0);
    iVar5 = fcn.00012e24();
    piVar10 = NULL;
    (**(iVar5 + 0x10))(4);
    piVar6 = fcn.00011e28();
    do {
        iVar1 = *piVar6;
        while( true ) {
            if (iVar1 == -1) goto code_r0x00012d0b;
            piVar6 = piVar6 + piVar6[1];
            if (*piVar6 == 4) break;
            iVar1 = *piVar6;
        }
        piVar10 = piVar6 + 4;
        piVar13 = piVar6;
        iVar5 = fcn.00012168(piVar10,0x13010);
    } while (iVar5 != 0);
    bVar14 = piVar13[0xc] == '\0';
code_r0x00012d0b:
    iVar5 = CONCAT71(piVar10 >> 8,0xd);
    uVar7 = fcn.00012248(iVar5);
    if ((uVar7 & 0x80) == 0) {
        bVar14 = true;
    }
    if (bVar14) {
        iVar5 = 0x80000002;
        fcn.00011bfc(0x80000002,0x61000);
        fcn.00012340();
    }
    fcn.000124a4(CONCAT71(iVar5 >> 8,1));
    iVar12 = 0;
    iVar5 = fcn.000124e4(&uStack_38,0);
    if (((iVar5 < 0) || (cVar2 = fcn.000123dc(&uStack_38,iVar12), cVar2 == '\0')) || (bVar14)) {
        uVar11 = 0x300000a;
        uVar9 = 0x40000002;
        fcn.00011bfc(0x40000002,0x300000a);
        iVar12 = CONCAT71(uVar11 >> 8,0x26);
        fcn.000122c8(CONCAT71(uVar9 >> 8,10),iVar12);
        uStack_2a = 0;
        uStack_2c = 0x7ff;
        uStack_30 = 0;
        _var_bp_18h = CONCAT17(uStack_29,0x7ff00000000);
        var_bp_20h = CONCAT17(uStack_31,uStack_38);
        cVar2 = fcn.000123dc(&var_bp_20h,iVar12);
        if (cVar2 == '\0') {
            uStack_38 = 0x10107e5;
        }
        else {
            uStack_34 = 0;
            uStack_32 = 0;
        }
        cVar2 = fcn.000123dc(&uStack_38,iVar12);
        if (cVar2 == '\0') {
            uStack_34 = 0;
            uStack_32 = 0;
            uStack_38 = 0x10107e5;
        }
        fcn.000126f4(&uStack_38);
    }
    return iVar5;
}


/* fcn.000116dc @ 0x116dc */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.000116dc(int64_t arg1,int64_t arg2)

{
    uchar uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    int64_t aiStackX_8 [2];
    ulong uStackX_18;
    ulong uStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    ulong *puVar7;
    ulong uStack_58;
    ulong uStack_50;
    int64_t var_40h;
    int64_t var_38h_2;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    if (*0x132b8 == 0) {
        *0x13268 = *(arg2 + 0x60);
        *0x13270 = *(arg2 + 0x58);
        *0x132b8 = arg2;
    }
    aiStackX_8[0] = arg1;
    fcn.00011e70();
    fcn.00011f6c();
    *0x13278 = *0x13278 + 1;
    *0x13288 = *0x13288 + 1;
    (**(*0x13268 + 0x50))(0x201,8,0x120a8,0,&uStack_58);
    puVar7 = &uStack_58;
    (**(*0x13268 + 0x50))(0x60000202,8,0x120e4,0,puVar7);
    fcn.00011ef8();
    piVar6 = &var_38h_2;
    uStackX_20 = 0;
    uStackX_18 = 0;
    iVar2 = (**(*0x13268 + 0x140))(0x13000,0);
    if (iVar2 < 0) {
        *(*0x13270 + 0x68) = 0x114cc;
        puVar7 = &uStackX_18;
        fcn.00012050(0x13000,0x115dc,piVar6,&uStackX_20);
    }
    else {
        *0x131f0 = *(*0x13270 + 0x68);
        *(*0x13270 + 0x68) = 0x114cc;
    }
    piVar6 = &var_30h_2;
    iVar2 = (**(*0x13268 + 0x140))(str.5x_iG,0);
    if (iVar2 < 0) {
        puVar7 = &uStackX_18;
        fcn.00012050(0x13060,0x11688,piVar6,&uStackX_20);
    }
    else {
        fcn.00011688(0);
    }
    *(*0x13270 + 0x18) = fcn.000124e4;
    *(*0x13270 + 0x20) = fcn.000126f4;
    *(*0x13270 + 0x28) = 0x12914;
    *(*0x13270 + 0x30) = 0x12ae0;
    (**(*0x13268 + 0x80))(aiStackX_8,0x13090,0,0x13110,puVar7);
    (**(*0x13268 + 0x170))(0x200,8,0x11478,0,0x13020,0x13310);
    (**(*0x13268 + 0x50))(0x201,8,0x11614,0,&var_28h);
    (**(*0x13268 + 0x50))(0x200,0x10,0x11478,0,&uStack_50);
    uVar4 = 0x13050;
    (**(*0x13268 + 0xa8))(0x13050,uStack_50,&var_bp_20h);
    uVar3 = fcn.00011170();
    fcn.000110f0();
    uVar1 = in(0x70);
    uVar5 = CONCAT71(uVar4 >> 8,uVar1) & 0xffffffffffffff80;
    *0xfdc431fc = *0xfdc431fc & 0xfffdffff;
    out(0x70,uVar5 | 0xc);
    uVar1 = in(0x71);
    uStackX_18 = CONCAT71(uStackX_18._1_7_,uVar1);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.000110e0(uVar5 | 0xc);
    }
    var_40h = 0;
    (**(*0x13268 + 0x148))(&var_40h,78000,0,0);
    return;
}


/* fcn.00011408 @ 0x11408 */

void fcn.00011408(void)

{
    (**(*0x13208 + 0x70))(*0x132e8);
    (**(*0x13208 + 0x70))(*0x132f0);
    (**(*0x13208 + 0x70))(*0x132f8);
    (**(*0x13208 + 0x70))(*0x13308);
    (**(*0x13230 + 0x70))(*0x13220);
    //WARNING: Could not recover jumptable at 0x00011473. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13230 + 0x70))(*0x13228);
    return;
}


/* fcn.000119f8 @ 0x119f8 */

int64_t fcn.000119f8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13240 == 0) {
        *0x13240 = 0;
        if (*(*0x13200 + 0x68) != 0) {
            piVar2 = *(*0x13200 + 0x70);
            do {
                if ((*0x130a0 == *piVar2) && (*0x130a8 == piVar2[1])) {
                    *0x13240 = (*(*0x13200 + 0x70))[uVar1 * 3 + 2];
                    return *0x13240;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13200 + 0x68));
        }
    }
    return *0x13240;
}


/* fcn.00011a64 @ 0x11a64 */

void fcn.00011a64(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000119f8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00011a9b:
            if ((piVar1 == NULL) || ((*0x13120 == *(piVar1 + 4) && (*0x13128 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00011a9b;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00012e00 @ 0x12e00 */

uint8_t fcn.00012e00(void)

{
    unkuint7 extraout_RAX;
    
    fcn.00011170();
    fcn.000110f0();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.00011170 @ 0x11170 */

uint64_t fcn.00011170(void)

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


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(void)

{
    return;
}


/* fcn.000110d0 @ 0x110d0 */

uint64_t fcn.000110d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110c2 @ 0x110c2 */

void fcn.000110c2(void)

{
    return;
}


/* fcn.000110e0 @ 0x110e0 */

void fcn.000110e0(void)

{
    return;
}


/* fcn.00011b5c @ 0x11b5c */

void fcn.00011b5c(void)

{
    int64_t iVar1;
    
    if ((((*0x13250 == 0) && (*0x13248 == '\0')) && (*0x13208 != 0)) && (*(*0x13208 + 0x140) != NULL)) {
        iVar1 = (**(*0x13208 + 0x140))(0x13040,0,0x13250);
        if (iVar1 < 0) {
            *0x13250 = 0;
        }
    }
    return;
}


/* fcn.00011ab4 @ 0x11ab4 */

void fcn.00011ab4(int64_t arg1)

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
            fcn.000110c0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011b14 @ 0x11b14 */

int64_t fcn.00011b14(int64_t arg1,int64_t arg2)

{
    fcn.00011ab4((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000121dc @ 0x121dc */

void fcn.000121dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    uint64_t uVar2;
    
    uVar2 = 0;
    pcVar1 = *0x132d0;
    while (pcVar1 != NULL) {
        (*pcVar1)(arg1 & 0xffffffff,arg2,arg3,arg4);
        uVar2 = uVar2 + 1;
        pcVar1 = *(uVar2 * 8 + 0x132d0);
    }
    return;
}


/* fcn.00011c54 @ 0x11c54 */

void fcn.00011c54(void)

{
    int64_t iVar1;
    int32_t var_10h;
    int64_t var_18h;
    int64_t var_20h;
    int64_t var_40h;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h_2;
    char16_t acStack_20 [2];
    char16_t acStack_1c [2];
    int64_t var_10h_2;
    int32_t var_8h;
    int16_t var_4h;
    
    var_8h = str.SbWarmResetVar._24_4_;
    var_4h = str.SbWarmResetVar[0xe];
    var_40h._0_4_ = 0x711c703f;
    var_40h._4_4_ = 0x4b10c285;
    var_38h = -0x13c94f5d;
    var_34h = -0x1d74c343;
    var_18h = 8;
    var_30h = -0x4735057c;
    var_2ch = 0x4aa94593;
    var_28h = 0x688ef7ae;
    var_24h = 0x2073b06e;
    var_20h_2._0_4_ = str.SbWarmResetVar._0_4_;
    var_20h_2._4_4_ = str.SbWarmResetVar._4_4_;
    acStack_20 = str.SbWarmResetVar._8_4_;
    acStack_1c = str.SbWarmResetVar._12_4_;
    var_10h = 0x49735752;
    var_10h_2 = str.SbWarmResetVar._16_8_;
    iVar1 = (**(*0x13210 + 0x48))(L"CapsuleUpdateData",&var_40h,0,&var_18h,&var_20h);
    if (iVar1 == 0) {
        (**(*0x13210 + 0x58))(&var_20h_2,&var_30h,7,4,&var_10h);
        fcn.00011100();
    }
    return;
}


/* fcn.00011100 @ 0x11100 */

void fcn.00011100(void)

{
    return;
}


/* fcn.00011d2c @ 0x11d2c */

ulong fcn.00011d2c(int64_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    int iVar3;
    
    iVar3 = arg1;
    fcn.00011d74();
    out(0x1830,0);
    if (iVar3 - 3U < 3) {
        uVar1 = iVar3 - 4;
        if (uVar1 < 2) {
            uVar1 = *0xfe001048 | 0x100000;
            *0xfe001048 = uVar1;
        }
        uVar2 = CONCAT71(uVar1 >> 8,0xe);
    }
    else {
        uVar2 = CONCAT71(iVar3 - 3U >> 8,0xff);
    }
    return uVar2;
}


/* fcn.00011e70 @ 0x11e70 */

ulong fcn.00011e70(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x1327c == '\0') {
        if (*0x13298 == 0) {
            if (*0x1328c != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x13268 + 0x140))(0x13130,0,0x13298);
        }
    }
    else if (*0x13280 == 0) {
        if ((*0x1328c == '\0') && (*0x132a8 != 0)) {
    //WARNING: Could not recover jumptable at 0x00011eaf. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x132a8 + 0xd0))(0x13140,0,0x13280);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011f6c @ 0x11f6c */

int64_t fcn.00011f6c(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if (*0x1327c == '\0') {
        if (*0x132b0 == 0) {
            if (*0x1328c == '\x01') {
                return -0x7ffffffffffffffd;
            }
            uVar2 = (**(*0x13268 + 0x18))(0x1f);
            (**(*0x13268 + 0x20))(uVar2);
            if (0x10 < uVar2) {
                return -0x7ffffffffffffffd;
            }
            iVar1 = (**(*0x13268 + 0x140))(0x13030,0,0x132b0);
            if (iVar1 < 0) {
                *0x132b0 = 0;
            }
            return iVar1;
        }
    }
    else if (*0x13290 == 0) {
        if (*0x132a8 == 0) {
            return -0x7ffffffffffffffd;
        }
        iVar1 = (**(*0x132a8 + 0xd0))(0x13080,0,0x13290);
        if (iVar1 < 0) {
            *0x13290 = 0;
        }
        return iVar1;
    }
    return 0;
}


/* fcn.00011ef8 @ 0x11ef8 */

int64_t fcn.00011ef8(void)

{
    int64_t iVar1;
    
    if (*0x1327c == '\0') {
        iVar1 = fcn.00011e70();
        if (-1 < iVar1) {
            iVar1 = (***0x13298)(1,0x61007,0,0,0);
        }
    }
    else if (*0x13280 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x13280)(*0x13280,1,0x61007,0,0,0);
    }
    return iVar1;
}


/* fcn.00012050 @ 0x12050 */

void fcn.00012050(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x13268 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x13268 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00011688 @ 0x11688 */

void fcn.00011688(int64_t arg1)

{
    int64_t iVar1;
    ulong *apuStackX_18 [2];
    
    iVar1 = (**(*0x13268 + 0x140))(str.5x_iG,0,apuStackX_18);
    if (-1 < iVar1) {
        (**apuStackX_18[0])(apuStackX_18[0],0x1161c);
        if (arg1 != 0) {
            (**(*0x13268 + 0x70))(arg1);
        }
    }
    return;
}


/* fcn.000110c0 @ 0x110c0 */

void fcn.000110c0(void)

{
    return;
}


/* fcn.00011d74 @ 0x11d74 */

ulong fcn.00011d74(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    uVar1 = in(0x1808);
    uVar6 = uVar1;
    uVar4 = uVar6 + 0x37f0;
    if (uVar4 < uVar6) {
        uVar3 = uVar4;
        uVar4 = 1;
    }
    else {
        uVar3 = uVar4 & 0xffffff;
        uVar4 = uVar4 >> 0x18;
        if (uVar4 == 0) goto code_r0x00011dcb;
    }
    do {
        uVar1 = in(0x1808);
        uVar5 = uVar6;
        uVar6 = uVar1;
        uVar2 = uVar4 - 1;
        if (uVar5 <= uVar1) {
            uVar2 = uVar4;
        }
        uVar4 = uVar2;
    } while (uVar2 != 0);
code_r0x00011dcb:
    while ((uVar6 < uVar3 && (uVar1 = in(0x1808), uVar6 <= uVar1))) {
        uVar6 = uVar1;
    }
    return 0;
}


/* fcn.00012168 @ 0x12168 */

int64_t fcn.00012168(uint32_t arg1,int64_t arg2)

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


/* fcn.00012fc0 @ 0x12fc0 */

ushort fcn.00012fc0(void)

{
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t in_NT;
    
    return CONCAT11((in_NT & 1) * '@' | (in_IF & 1) * '\x02' | in_TF & 1,(in_IF & 1) != 0);
}


/* fcn.00012ff0 @ 0x12ff0 */

void fcn.00012ff0(void)

{
    return;
}


/* fcn.00012fe0 @ 0x12fe0 */

void fcn.00012fe0(void)

{
    return;
}


/* fcn.000122c8 @ 0x122c8 */

uint8_t fcn.000122c8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    
    uVar4 = arg2;
    uVar3 = arg1;
    cVar2 = fcn.00012fc0();
    if ((uVar3 < 10) || (uVar3 == 0x32)) {
        cVar1 = (arg2 & 0xffU) / 10;
        uVar4 = cVar1 << 4 | uVar4 + cVar1 * -10;
    }
    fcn.00012ff0();
    out(0x74,uVar3);
    out(0x75,uVar4);
    if (cVar2 != '\0') {
        uVar4 = fcn.00012fe0();
    }
    return uVar4;
}


/* fcn.00012248 @ 0x12248 */

uint8_t fcn.00012248(int64_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uStackX_8;
    
    uVar2 = arg1;
    cVar1 = fcn.00012fc0();
    fcn.00012ff0();
    out(0x74,uVar2);
    uStackX_8 = in(0x75);
    if (cVar1 != '\0') {
        fcn.00012fe0();
    }
    if ((uVar2 < 10) || (uVar2 == 0x32)) {
        if ((uStackX_8 < 0xa0) && ((uStackX_8 & 0xf) < 10)) {
            uStackX_8 = (uStackX_8 & 0xf) + (uStackX_8 >> 4) * '\n';
        }
        else {
            uStackX_8 = 0;
        }
    }
    return uStackX_8;
}


/* fcn.00011dd4 @ 0x11dd4 */

uint8_t fcn.00011dd4(void)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = in(0x1830);
    uVar1 = uVar2 & 1;
    if (*0x13261 != '\0') {
        if ((uVar2 & 1) != 0) {
            *0x13261 = '\0';
        }
        if (*0x13261 != '\0') {
            return *0x13262;
        }
    }
    *0x13262 = uVar1;
    *0x13261 = 1;
    return uVar1;
}


/* fcn.00012390 @ 0x12390 */

void fcn.00012390(ulong param_1)

{
    char extraout_AL;
    char extraout_AL_00;
    unkbyte7 Var1;
    uint64_t uVar2;
    char cStackX_8;
    
    Var1 = param_1 >> 8;
    uVar2 = 0;
    fcn.00012248(CONCAT71(Var1,10));
    cStackX_8 = extraout_AL;
    do {
        if (-1 < cStackX_8) {
            *0x132c0 = 0;
            return;
        }
        fcn.00012248(CONCAT71(Var1,10));
        uVar2 = uVar2 + 1;
        cStackX_8 = extraout_AL_00;
    } while (uVar2 < 0xfffff);
    *0x132c0 = 1;
    return;
}


/* fcn.00012340 @ 0x12340 */

void fcn.00012340(ulong param_1,ulong param_2)

{
    code *pcVar1;
    int64_t iVar2;
    unkbyte7 Var3;
    uint64_t uVar4;
    
    Var3 = param_2 >> 8;
    iVar2 = CONCAT71(param_1 >> 8,0xb);
    fcn.000122c8(iVar2,CONCAT71(Var3,0x82));
    iVar2 = CONCAT71(iVar2 >> 8,10);
    fcn.000122c8(iVar2,CONCAT71(Var3,0x26));
    iVar2 = CONCAT71(iVar2 >> 8,0xc);
    fcn.00012248(iVar2);
    fcn.000122c8(CONCAT71(iVar2 >> 8,0xb),CONCAT71(Var3,2));
    uVar4 = 0;
    pcVar1 = *0x132c8;
    while (pcVar1 != NULL) {
        (*pcVar1)();
        uVar4 = uVar4 + 1;
        pcVar1 = *(uVar4 * 8 + 0x132c8);
    }
    return;
}


/* fcn.000124a4 @ 0x124a4 */

ulong fcn.000124a4(int64_t arg1)

{
    uint8_t uVar1;
    unkbyte7 Var2;
    unkbyte7 in_RDX;
    
    Var2 = arg1 >> 8;
    uVar1 = fcn.00012248(CONCAT71(Var2,0xb));
    if ((uVar1 & 6) != 2) {
        if (arg1 == '\0') {
            return 0x8000000000000007;
        }
        fcn.000122c8(CONCAT71(Var2,0xb),CONCAT71(in_RDX,uVar1) & 0xfffffffffffffffb | 2);
    }
    return 0;
}


/* fcn.000123dc @ 0x123dc */

uint64_t fcn.000123dc(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    
    uVar4 = *(arg1 + 2) - 1;
    uVar6 = *(arg1 + 3) - 1;
    uVar3 = *arg1 - 0x76cU;
    if ((0x1fa3 < *arg1 - 0x76cU) || (0xb < uVar4)) goto code_r0x0001244a;
    if ((uVar4 == 1) && (uVar1 = *arg1, (uVar1 & 3) == 0)) {
        uVar5 = uVar1;
        uVar2 = uVar5 + (uVar1 / 100) * -100;
        if ((uVar2 == 0) && (uVar2 = (uVar5 / 400) * 400, uVar5 != uVar2)) goto code_r0x0001244d;
        uVar3 = uVar2;
        if (0x1c < uVar6) goto code_r0x0001244a;
    }
    else {
code_r0x0001244d:
        uVar3 = uVar4;
        if (*(uVar3 + 0x131c0) < uVar6) goto code_r0x0001244a;
    }
    if ((((*(arg1 + 4) < 0x18) && (*(arg1 + 5) < 0x3c)) && (*(arg1 + 6) < 0x3c)) &&
       (((*(arg1 + 8) < 1000000000 && (uVar3 = 0xfffffa60, -0x5a1 < *(arg1 + 0xc))) &&
        ((uVar3 = 0x5a0, *(arg1 + 0xc) < 0x5a1 || (uVar3 = 0x7ff, *(arg1 + 0xc) == 0x7ff)))))) {
        return CONCAT71(uVar3 >> 8,1);
    }
code_r0x0001244a:
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 8192 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00012e24 @ 0x12e24 */

int64_t fcn.00012e24(void)

{
    if (*0x132d8 == 0) {
        (**(*0x13208 + 0x140))(0x13070,0,0x132d8);
    }
    return *0x132d8;
}


/* fcn.00011e28 @ 0x11e28 */

ulong fcn.00011e28(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = *(*0x132b8 + 0x68);
    iVar3 = *(*0x132b8 + 0x70);
    while( true ) {
        if (iVar2 == 0) {
            return 0;
        }
        iVar1 = fcn.00012168(iVar3,0x130a0);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 0x18;
        iVar2 = iVar2 + -1;
    }
    return *(iVar3 + 0x10);
}


/* fcn.00011bfc @ 0x11bfc */

ulong fcn.00011bfc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (((arg1 & 0xff) - 1 < 3) && (fcn.00011b5c(), *0x13250 != NULL)) {
        uVar1 = (***0x13250)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,0x13100,0);
        return uVar1;
    }
    return 0x8000000000000003;
}


/* fcn.000124e4 @ 0x124e4 */

ulong fcn.000124e4(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    char cVar2;
    char cVar3;
    uchar uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    int64_t iVar9;
    ushort uStackX_8;
    uchar uStackX_a;
    ulong uStackX_18;
    
    uStackX_18 = 3;
    if (arg1 == 0) {
        uVar7 = 0x8000000000000002;
    }
    else {
        uVar1 = fcn.00012248(CONCAT71(arg1 >> 8,0xb));
        if ((uVar1 & 6) == 2) {
            iVar8 = 0;
            cVar2 = fcn.00011dd4();
            uVar6 = in(0x1830);
            out(0x1830,uVar6 & 0xfffffffc);
            cVar3 = fcn.00012fc0();
            fcn.00012ff0();
            fcn.00012390();
            if (*0x132c0 != '\0') {
                fcn.00012340();
            }
            uVar7 = 0;
            uVar4 = fcn.00012248(0);
            iVar9 = CONCAT71(uVar7 >> 8,9);
            *(arg1 + 6) = uVar4;
            uVar5 = fcn.00012248(iVar9);
            iVar9 = CONCAT71(iVar9 >> 8,8);
            uVar4 = fcn.00012248(iVar9);
            iVar9 = CONCAT71(iVar9 >> 8,7);
            *(arg1 + 2) = uVar4;
            uVar4 = fcn.00012248(iVar9);
            iVar9 = CONCAT71(iVar9 >> 8,4);
            *(arg1 + 3) = uVar4;
            uVar4 = fcn.00012248(iVar9);
            *(arg1 + 4) = uVar4;
            uVar4 = fcn.00012248(CONCAT71(iVar9 >> 8,2));
            uVar7 = 0;
            *(arg1 + 5) = uVar4;
            uVar1 = fcn.00012248(0);
            if (uVar1 < *(arg1 + 6)) {
                iVar9 = CONCAT71(uVar7 >> 8,9);
                uVar5 = fcn.00012248(iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,8);
                uVar4 = fcn.00012248(iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,7);
                *(arg1 + 2) = uVar4;
                uVar4 = fcn.00012248(iVar9);
                iVar9 = CONCAT71(iVar9 >> 8,4);
                *(arg1 + 3) = uVar4;
                uVar4 = fcn.00012248(iVar9);
                *(arg1 + 4) = uVar4;
                uVar4 = fcn.00012248(CONCAT71(iVar9 >> 8,2));
                uVar7 = 0;
                *(arg1 + 5) = uVar4;
                uVar4 = fcn.00012248(0);
                *(arg1 + 6) = uVar4;
            }
            if (cVar3 != '\0') {
                fcn.00012fe0();
            }
            if (cVar2 != '\0') {
                uVar6 = in(0x1830);
                out(0x1830,uVar6 | 2);
                uVar6 = in(0x1830);
                out(0x1830,uVar6 | 1);
            }
            uVar1 = fcn.00012248(CONCAT71(uVar7 >> 8,0x32));
            *(arg1 + 8) = 0;
            *arg1 = uVar1 * 100 + uVar5;
            uVar1 = *0xc00fd0dc;
            if ((*0xc00fd0dc & 1) == 0) {
                iVar8 = (**(*0x13270 + 0x48))(L"EfiTime",0x130f0,0,&uStackX_18,&uStackX_8);
            }
            else {
                uStackX_a = *0x132e2;
                uStackX_8 = *0x132e0;
            }
            *0xc00fd0dc = uVar1;
            if (iVar8 < 0) {
                *(arg1 + 0xe) = 0;
                *(arg1 + 0xc) = 0x7ff;
            }
            else {
                *(arg1 + 0xc) = uStackX_8;
                *(arg1 + 0xe) = uStackX_a;
            }
            *0x132e0 = *(arg1 + 0xc);
            *0x132e2 = *(arg1 + 0xe);
            if (arg2 != 0) {
                *(arg2 + 4) = 0;
                *arg2 = 1;
                *(arg2 + 8) = 0;
            }
            uVar7 = 0;
        }
        else {
            uVar7 = 0x8000000000000007;
        }
    }
    return uVar7;
}


/* fcn.000126f4 @ 0x126f4 */

int64_t fcn.000126f4(int64_t arg1)

{
    int16_t iVar1;
    char cVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int iVar6;
    ulong uVar7;
    int64_t in_RDX;
    int64_t iVar8;
    uint64_t uVar9;
    int16_t iStackX_8;
    char cStackX_a;
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 3;
    fcn.000124a4(CONCAT71(arg1 >> 8,1));
    if ((arg1 != 0) && (iVar5 = arg1, cVar2 = fcn.000123dc(arg1,in_RDX), cVar2 != '\0')) {
        iVar5 = CONCAT71(iVar5 >> 8,0xb);
        cVar2 = fcn.00012248(iVar5);
        if (-1 < cVar2) {
            fcn.000122c8(CONCAT71(iVar5 >> 8,0xb),CONCAT71(in_RDX >> 8,cVar2) | 0x80);
        }
        fcn.000122c8(CONCAT71(*arg1 >> 8,0x32),*arg1 / 100);
        uVar9 = *arg1 / 100;
        iVar6 = *arg1 + uVar9 * -100;
        iVar8 = CONCAT71(uVar9 >> 8,iVar6);
        iVar5 = CONCAT71(iVar6 >> 8,9);
        fcn.000122c8(iVar5,iVar8);
        iVar8 = CONCAT71(iVar8 >> 8,*(arg1 + 2));
        iVar5 = CONCAT71(iVar5 >> 8,8);
        fcn.000122c8(iVar5,iVar8);
        fcn.000122c8(CONCAT71(iVar5 >> 8,7),CONCAT71(iVar8 >> 8,*(arg1 + 3)));
        iVar1 = (0xe - *(arg1 + 2)) / 0xc;
        uVar4 = *arg1 - iVar1;
        uVar7 = 0;
        uVar9 = (*(arg1 + 3) +
                (uVar4 >> 2) + uVar4 + (((iVar1 * 0xc + (*(arg1 + 2) - 2)) * 0x1f) / 0xc - uVar4 / 100) + uVar4 / 400) %
                7 + 1;
        fcn.000122c8(6,uVar9);
        iVar8 = CONCAT71(uVar9 >> 8,*(arg1 + 4));
        iVar5 = CONCAT71(uVar7 >> 8,4);
        fcn.000122c8(iVar5,iVar8);
        iVar8 = CONCAT71(iVar8 >> 8,*(arg1 + 5));
        fcn.000122c8(CONCAT71(iVar5 >> 8,2),iVar8);
        iVar8 = CONCAT71(iVar8 >> 8,*(arg1 + 6));
        uVar7 = 0;
        fcn.000122c8(0,iVar8);
        iVar5 = CONCAT71(uVar7 >> 8,0xb);
        uVar3 = fcn.00012248(iVar5);
        if (0x7f < uVar3) {
            fcn.000122c8(CONCAT71(iVar5 >> 8,0xb),CONCAT71(iVar8 >> 8,uVar3) & 0xffffffffffffff7f);
        }
        iVar5 = (**(*0x13270 + 0x48))(L"EfiTime",0x130f0,0,auStackX_10,&iStackX_8);
        if (((iVar5 < 0) || (iStackX_8 != *(arg1 + 0xc))) || (cStackX_a != *(arg1 + 0xe))) {
            iStackX_8 = *(arg1 + 0xc);
            cStackX_a = *(arg1 + 0xe);
            iVar5 = (**(*0x13270 + 0x58))(L"EfiTime",0x130f0,7,3,&iStackX_8);
            if (-1 < iVar5) {
                *0x132e0 = *(arg1 + 0xc);
                *0x132e2 = *(arg1 + 0xe);
            }
        }
        return iVar5;
    }
    return -0x7ffffffffffffffe;
}


