// decompiled by r2ghidra: 2080_CryptoPPI.pe32
// functions: 173

/* entry0 @ 0x10320 */

void entry0(uint param_1,int *param_2)

{
    fcn.00010d05(param_1,param_2);
    (**(*param_2 + 0x18))(param_2,0xa318);
    return;
}


/* fcn.00010d05 @ 0x10d05 */

void __cdecl fcn.00010d05(uint noname_0,int32_t arg_ch)

{
    int32_t arg_8h;
    int iVar1;
    
    arg_8h = arg_ch;
    iVar1 = (**(*arg_ch + 0x20))(arg_ch,0xa290,0,0,&arg_ch);
    if (iVar1 < 0) {
        (**(*arg_8h + 0x24))(arg_8h,0xa1c0);
    }
    fcn.00010c9e(arg_8h);
    return;
}


/* fcn.00010c9e @ 0x10c9e */

uint __cdecl fcn.00010c9e(int32_t arg_8h)

{
    uint32_t uVar1;
    int iVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = *0xa6b8;
    _var_8h = 0;
    iVar2 = (**(*arg_8h + 0x48))(arg_8h,4,((*0xa6b8 & 0xfff) != 0) + (*0xa6b8 >> 0xc),&var_8h);
    if ((-1 < iVar2) && (var_8h != 0 || var_4h != 0)) {
        fcn.00010af4(6,var_8h);
        fcn.000156df(var_8h,uVar1);
    }
    return 0;
}


/* fcn.00010af4 @ 0x10af4 */

void fcn.00010af4(void)

{
    int iVar1;
    
    iVar1 = fcn.00010ad5();
    //WARNING: Could not recover jumptable at 0x00010af9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0x44))();
    return;
}


/* fcn.00010ad5 @ 0x10ad5 */

int32_t __fastcall fcn.00010ad5(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00010aff(param_1,&var_4h);
    return var_4h;
}


/* fcn.00010aff @ 0x10aff */

void __cdecl fcn.00010aff(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xa2f0,0,0,arg_ch);
    return;
}


/* fcn.000156df @ 0x156df */

void fcn.000156df(int *param_1,uint32_t param_2)

{
    int *piVar1;
    
    if ((param_1 != NULL) && (0x1b < param_2)) {
        piVar1 = param_1 + 5;
        param_1[1] = param_2 - 0x14;
        *param_1 = piVar1;
        param_1[2] = 0;
        param_1[4] = piVar1;
        param_1[3] = (param_2 - 0x1c) + piVar1;
    }
    return;
}


/* fcn.00010918 @ 0x10918 */

int __fastcall fcn.00010918(int *param_1,int *param_2,uint32_t param_3)

{
    int *piVar1;
    int iVar2;
    uint32_t uVar3;
    
    piVar1 = param_1 + param_3;
    if (3 < param_3) {
        uVar3 = param_1 & 3;
        if ((uVar3 != 0) && (uVar3 == (param_2 & 3))) {
            iVar2 = 4 - uVar3;
            for (; (iVar2 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
                param_2 = param_2 + 1;
                iVar2 = iVar2 + -1;
            }
        }
        for (; (param_1 <= piVar1 + -1 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
            param_2 = param_2 + 1;
        }
    }
    while( true ) {
        if (piVar1 <= param_1) {
            return 0;
        }
        if (*param_1 != *param_2) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
    }
    return *param_1 - *param_2;
}


/* fcn.000133cd @ 0x133cd */

void __cdecl fcn.000133cd(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int32_t var_70h;
    
    fcn.000132cf(&var_70h);
    if (arg_8h != 0) {
        iVar1 = arg_10h - arg_ch;
        do {
            fcn.00013316(&var_70h,*arg_ch,*(iVar1 + arg_ch));
            arg_ch = arg_ch + 4;
            arg_8h = arg_8h + -1;
        } while (arg_8h != 0);
    }
    fcn.00013203(&var_70h,arg_14h);
    fcn.00010a9b(&var_70h,0x70);
    return;
}


/* fcn.000132cf @ 0x132cf */

void fcn.000132cf(uint *param_1)

{
    param_1[10] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0x6a09e667;
    param_1[3] = 0xbb67ae85;
    param_1[4] = 0x3c6ef372;
    param_1[5] = 0xa54ff53a;
    param_1[6] = 0x510e527f;
    param_1[7] = 0x9b05688c;
    param_1[8] = 0x1f83d9ab;
    param_1[9] = 0x5be0cd19;
    return;
}


/* fcn.00013316 @ 0x13316 */

uint fcn.00013316(uint32_t *param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    
    if (0x3f < param_1[10]) {
        return 0xffffffff;
    }
    if (param_3 != 0) {
        do {
            if ((param_1[10] == 0) && (0x3f < param_3)) {
                fcn.00010871(param_1 + 0xb,param_2,0x40);
                iVar1 = fcn.0001307a(param_1,param_1 + 0xb);
                if (iVar1 < 0) {
                    return 0xffffffff;
                }
                uVar2 = *param_1;
                *param_1 = *param_1 + 0x200;
                param_1[1] = param_1[1] + (0xfffffdff < uVar2);
                param_2 = param_2 + 0x40;
                param_3 = param_3 - 0x40;
            }
            else {
                uVar2 = 0x40 - param_1[10];
                if (param_3 < 0x40 - param_1[10]) {
                    uVar2 = param_3;
                }
                fcn.00010871(param_1[10] + 0x2c + param_1,param_2,uVar2);
                param_1[10] = param_1[10] + uVar2;
                param_2 = param_2 + uVar2;
                param_3 = param_3 - uVar2;
                if (param_1[10] == 0x40) {
                    iVar1 = fcn.0001307a(param_1,param_1 + 0xb);
                    if (iVar1 < 0) {
                        return 0xffffffff;
                    }
                    uVar2 = *param_1;
                    *param_1 = *param_1 + 0x200;
                    param_1[1] = param_1[1] + (0xfffffdff < uVar2);
                    param_1[10] = 0;
                }
            }
        } while (param_3 != 0);
    }
    return 0;
}


/* fcn.00010871 @ 0x10871 */

uint32_t __cdecl fcn.00010871(uint32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    
    if ((arg_10h != 0) && (arg_8h != arg_ch)) {
        uVar1 = section..text(arg_8h,arg_ch,arg_10h);
        return uVar1;
    }
    return arg_8h;
}


/* fcn.0001307a @ 0x1307a */

uint fcn.0001307a(int param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uchar *puVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    uint32_t uStack_130;
    int iStack_12c;
    uint32_t auStack_128 [8];
    uint32_t *puStack_108;
    int iStack_104;
    uint32_t auStack_100 [64];
    
    puStack_108 = param_1 + 8;
    iStack_104 = 0;
    puVar6 = puStack_108;
    puVar7 = auStack_128;
    for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
    }
    iVar3 = 0;
    puVar4 = param_2 + 2;
    do {
        auStack_100[iVar3] = CONCAT31(CONCAT21(CONCAT11(puVar4[-2],puVar4[-1]),*puVar4),puVar4[1]);
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 4;
    } while (iVar3 < 0x10);
    iVar3 = 0x30;
    puVar6 = auStack_100 + 0xe;
    do {
        uVar1 = puVar6[-0xd];
        uVar2 = *puVar6;
        puVar6[2] = ((uVar1 << 0xe | uVar1 >> 0x12) ^ (uVar1 >> 7 | uVar1 << 0x19) ^ uVar1 >> 3) +
                    ((uVar2 << 0xf | uVar2 >> 0x11) ^ (uVar2 << 0xd | uVar2 >> 0x13) ^ uVar2 >> 10) + puVar6[-0xe] +
                    puVar6[-5];
        iVar3 = iVar3 + -1;
        puVar6 = puVar6 + 1;
    } while (iVar3 != 0);
    uStack_130 = auStack_128[3];
    iStack_12c = 0;
    do {
        uVar2 = auStack_128[1];
        iVar3 = ((auStack_128[4] >> 0xb | auStack_128[4] << 0x15) ^ (auStack_128[4] << 7 | auStack_128[4] >> 0x19) ^
                (auStack_128[4] >> 6 | auStack_128[4] << 0x1a)) +
                ((auStack_128[5] ^ auStack_128[6]) & auStack_128[4] ^ auStack_128[6]) + *(iStack_12c + 0xa330) +
                *(auStack_100 + iStack_12c) + auStack_128[7];
        uVar1 = uStack_130 + iVar3;
        uVar5 = ((auStack_128[1] | auStack_128[0]) & auStack_128[2] | auStack_128[1] & auStack_128[0]) +
                ((auStack_128[0] >> 0xd | auStack_128[0] << 0x13) ^ (auStack_128[0] << 10 | auStack_128[0] >> 0x16) ^
                (auStack_128[0] >> 2 | auStack_128[0] << 0x1e)) + iVar3;
        auStack_128[7] = auStack_128[6];
        auStack_128[6] = auStack_128[5];
        iStack_12c = iStack_12c + 4;
        uStack_130 = auStack_128[2];
        auStack_128[5] = auStack_128[4];
        auStack_128[3] = auStack_128[2];
        auStack_128[1] = auStack_128[0];
        auStack_128[2] = uVar2;
        auStack_128[4] = uVar1;
        auStack_128[0] = uVar5;
    } while (iStack_12c < 0x100);
    do {
        *puStack_108 = *puStack_108 + auStack_128[iStack_104];
        iStack_104 = iStack_104 + 1;
        puStack_108 = puStack_108 + 1;
    } while (iStack_104 < 8);
    return 0;
}


/* fcn.00013203 @ 0x13203 */

//WARNING: Variable defined which should be unmapped: var_1h

uint __cdecl fcn.00013203(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    int32_t *piVar4;
    uchar *puVar5;
    int iVar6;
    uint *puVar7;
    int iVar8;
    int32_t var_8h;
    int32_t var_1h;
    
    uVar3 = *(arg_8h + 0x28);
    if (uVar3 < 0x40) {
        uVar1 = *arg_8h;
        *arg_8h = *arg_8h + uVar3 * 8;
        iVar6 = 0;
        *(arg_8h + 4) = *(arg_8h + 4) + CARRY4(uVar1,uVar3 * 8);
        *(uVar3 + 0x2c + arg_8h) = 0x80;
        *(arg_8h + 0x28) = *(arg_8h + 0x28) + 1;
        uVar3 = *(arg_8h + 0x28);
        if (0x38 < uVar3) {
            while (uVar3 < 0x40) {
                *(arg_8h + 0x2c + uVar3) = 0;
                *(arg_8h + 0x28) = *(arg_8h + 0x28) + 1;
                uVar3 = *(arg_8h + 0x28);
            }
            fcn.0001307a(arg_8h,arg_8h + 0x2c);
            *(arg_8h + 0x28) = 0;
        }
        while (*(arg_8h + 0x28) < 0x38) {
            *(arg_8h + 0x2c + *(arg_8h + 0x28)) = 0;
            *(arg_8h + 0x28) = *(arg_8h + 0x28) + 1;
        }
        piVar4 = &var_1h;
        iVar8 = 8;
        do {
            *(arg_8h + 100 + iVar6) = *piVar4;
            iVar6 = iVar6 + 1;
            piVar4 = piVar4 + -1;
        } while (iVar6 < 8);
        fcn.0001307a(arg_8h,arg_8h + 0x2c);
        puVar7 = arg_8h + 8;
        puVar5 = arg_ch + 2;
        do {
            uVar2 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar5[-2] = uVar2 >> 0x18;
            puVar5[-1] = uVar2 >> 0x10;
            *puVar5 = uVar2 >> 8;
            puVar5[1] = uVar2;
            iVar8 = iVar8 + -1;
            puVar5 = puVar5 + 4;
        } while (iVar8 != 0);
        uVar2 = 0;
    }
    else {
        uVar2 = 0xffffffff;
    }
    return uVar2;
}


/* fcn.00010a9b @ 0x10a9b */

uchar * __cdecl fcn.00010a9b(uchar *noname_0,uint32_t arg_ch)

{
    uchar *puVar1;
    uchar in_stack_0000000c;
    
    if (arg_ch == 0) {
        return noname_0;
    }
    puVar1 = noname_0;
    for (; arg_ch != 0; arg_ch = arg_ch - 1) {
        *puVar1 = in_stack_0000000c;
        puVar1 = puVar1 + 1;
    }
    return noname_0;
}


/* fcn.00014a12 @ 0x14a12 */

void __cdecl fcn.00014a12(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int32_t var_5ch;
    
    fcn.000136e5(&var_5ch);
    if (arg_8h != 0) {
        iVar1 = arg_10h - arg_ch;
        do {
            fcn.00014973(&var_5ch,*arg_ch,*(iVar1 + arg_ch));
            arg_ch = arg_ch + 4;
            arg_8h = arg_8h + -1;
        } while (arg_8h != 0);
    }
    fcn.00013615(arg_14h,&var_5ch);
    return;
}


/* fcn.000136e5 @ 0x136e5 */

void fcn.000136e5(uint *param_1)

{
    param_1[6] = 0;
    param_1[5] = 0;
    *param_1 = 0x67452301;
    param_1[1] = 0xefcdab89;
    param_1[2] = 0x98badcfe;
    param_1[3] = 0x10325476;
    param_1[4] = 0xc3d2e1f0;
    return;
}


/* fcn.00014973 @ 0x14973 */

void fcn.00014973(int param_1,int param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = *(param_1 + 0x14) >> 3 & 0x3f;
    uVar2 = *(param_1 + 0x14) + param_3 * 8;
    *(param_1 + 0x14) = uVar2;
    if (uVar2 < param_3 << 3) {
        *(param_1 + 0x18) = *(param_1 + 0x18) + 1;
    }
    *(param_1 + 0x18) = *(param_1 + 0x18) + (param_3 >> 0x1d);
    if (uVar1 + param_3 < 0x40) {
        uVar2 = 0;
    }
    else {
        uVar2 = -uVar1 + 0x40;
        fcn.00010871(param_1 + 0x1c + uVar1,param_2,uVar2);
        fcn.00013714(param_1,param_1 + 0x1c);
        for (uVar1 = -uVar1 + 0x7f; uVar1 < param_3; uVar1 = uVar1 + 0x40) {
            fcn.00013714(param_1,param_2 + -0x3f + uVar1);
            uVar2 = uVar2 + 0x40;
        }
        uVar1 = 0;
    }
    fcn.00010871(param_1 + 0x1c + uVar1,param_2 + uVar2,param_3 - uVar2);
    return;
}


/* fcn.00013615 @ 0x13615 */

void fcn.00013615(int param_1,int param_2)

{
    uint32_t uVar1;
    uint auStack_8 [2];
    
    uVar1 = 0;
    do {
        *(auStack_8 + uVar1) = *((-(uVar1 < 4) & 4) + 0x14 + param_2) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 8);
    fcn.00014973(param_2,0xa430,1);
    while ((*(param_2 + 0x14) & 0x1f8) != 0x1c0) {
        fcn.00014973(param_2,0xa434,1);
    }
    fcn.00014973(param_2,auStack_8,8);
    uVar1 = 0;
    do {
        *(uVar1 + param_1) = *(param_2 + (uVar1 & 0xfffffffc)) >> (('\x03' - (uVar1 & 3)) * '\b' & 0x1f);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x14);
    fcn.00010a9b(param_2 + 0x1c,0x40);
    fcn.00010a9b(param_2,0x14);
    fcn.00010a9b(param_2 + 0x14,8);
    fcn.00010a9b(auStack_8,8);
    return;
}


/* fcn.00014b33 @ 0x14b33 */

void __cdecl fcn.00014b33(int32_t arg_70h,int32_t arg_74h,int32_t arg_78h,int32_t arg_7ch)

{
    int iVar1;
    int in_stack_00000004;
    uint *in_stack_00000008;
    int in_stack_0000000c;
    uint32_t in_stack_00000010;
    int32_t var_68h_2;
    uchar auStack_d4 [104];
    int32_t var_68h;
    
    fcn.00014aaa(auStack_d4);
    if (in_stack_00000004 != 0) {
        iVar1 = in_stack_0000000c - in_stack_00000008;
        do {
            fcn.000155c0(auStack_d4,*in_stack_00000008,*(iVar1 + in_stack_00000008));
            in_stack_00000008 = in_stack_00000008 + 1;
            in_stack_00000004 = in_stack_00000004 + -1;
        } while (in_stack_00000004 != 0);
    }
    fcn.00014a62(auStack_d4,in_stack_00000010);
    return;
}


/* fcn.00014aaa @ 0x14aaa */

uint fcn.00014aaa(uint *param_1)

{
    if (param_1 == NULL) {
        return 0xffffffff;
    }
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xc1059ed8;
    param_1[3] = 0xcbbb9d5d;
    param_1[4] = 0x367cd507;
    param_1[5] = 0x629a292a;
    param_1[6] = 0x3070dd17;
    param_1[7] = 0x9159015a;
    param_1[8] = 0xf70e5939;
    param_1[9] = 0x152fecd8;
    param_1[10] = 0xffc00b31;
    param_1[0xb] = 0x67332667;
    param_1[0xc] = 0x68581511;
    param_1[0xd] = 0x8eb44a87;
    param_1[0xe] = 0x64f98fa7;
    param_1[0xf] = 0xdb0c2e0d;
    param_1[0x10] = 0xbefa4fa4;
    param_1[0x11] = 0x47b5481d;
    return 0;
}


/* fcn.000155c0 @ 0x155c0 */

int fcn.000155c0(uint32_t *param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    
    if (param_1 == NULL) {
        return -1;
    }
    if ((param_2 == 0) || (0x80 < param_1[0x12])) {
        iVar1 = -1;
    }
    else {
        while (param_3 != 0) {
            if ((param_1[0x12] == 0) && (0x7f < param_3)) {
                fcn.00010871(param_1 + 0x13,param_2,0x80);
                iVar1 = fcn.0001506a(param_1,param_1 + 0x13);
                if (iVar1 != 0) {
                    return iVar1;
                }
                uVar2 = *param_1;
                *param_1 = *param_1 + 0x400;
                param_1[1] = param_1[1] + (0xfffffbff < uVar2);
                param_2 = param_2 + 0x80;
                param_3 = param_3 - 0x80;
            }
            else {
                uVar2 = 0x80 - param_1[0x12];
                if (param_3 < 0x80 - param_1[0x12]) {
                    uVar2 = param_3;
                }
                fcn.00010871(param_1[0x12] + 0x4c + param_1,param_2,uVar2);
                param_1[0x12] = param_1[0x12] + uVar2;
                param_2 = param_2 + uVar2;
                param_3 = param_3 - uVar2;
                if (param_1[0x12] == 0x80) {
                    iVar1 = fcn.0001506a(param_1,param_1 + 0x13);
                    if (iVar1 != 0) {
                        return iVar1;
                    }
                    uVar2 = *param_1;
                    *param_1 = *param_1 + 0x400;
                    param_1[1] = param_1[1] + (0xfffffbff < uVar2);
                    param_1[0x12] = 0;
                }
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001506a @ 0x1506a */

uint fcn.0001506a(int param_1,int param_2)

{
    uchar uVar1;
    uchar uVar2;
    uchar uVar3;
    uchar uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t *puVar14;
    uchar *puVar15;
    uint32_t uVar16;
    uint32_t uStack_2dc;
    uint32_t uStack_2d8;
    uint32_t uStack_2d4;
    int iStack_2d0;
    uint32_t auStack_2c8 [17];
    uint32_t *puStack_284;
    uint32_t auStack_280 [160];
    
    iVar8 = 0;
    puStack_284 = param_1 + 8;
    puVar7 = puStack_284;
    puVar14 = auStack_2c8;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar14 = puVar14 + 1;
    }
    puVar15 = param_2 + 2;
    do {
        uVar6 = CONCAT31(CONCAT21(CONCAT11(puVar15[-2],puVar15[-1]),*puVar15),puVar15[1]);
        uVar1 = puVar15[2];
        uVar2 = puVar15[3];
        uVar3 = puVar15[4];
        uVar4 = puVar15[5];
        auStack_280[iVar8 * 2 + 1] =
             ((puVar15[-2] << 8 | (uVar6 & 0xffffff) >> 0x10) << 8 | (uVar6 & 0xffff) >> 8) << 8 | puVar15[1];
        auStack_280[iVar8 * 2] = CONCAT31(CONCAT21(CONCAT11(uVar1,uVar2),uVar3),uVar4);
        iVar8 = iVar8 + 1;
        puVar15 = puVar15 + 8;
    } while (iVar8 < 0x10);
    puVar7 = auStack_280 + 0x1c;
    iStack_2d0 = 0x40;
    do {
        uVar6 = puVar7[1];
        uVar12 = *puVar7;
        uVar9 = (uVar12 >> 0x13 | uVar6 << 0xd) ^ (uVar6 >> 0x1d | uVar12 << 3) ^ (uVar12 >> 6 | uVar6 << 0x1a);
        uVar13 = puVar7[-0x1a];
        uVar16 = (uVar13 >> 8 | puVar7[-0x19] << 0x18) ^ (puVar7[-0x1a] >> 1 | puVar7[-0x19] << 0x1f) ^
                 (puVar7[-0x1a] >> 7 | puVar7[-0x19] << 0x19);
        uVar10 = uVar9 + uVar16;
        uVar11 = uVar10 + puVar7[-0x1c];
        puVar7[4] = uVar11 + puVar7[-10];
        puVar7[5] = ((uVar12 << 0xd | uVar6 >> 0x13) ^ (uVar6 << 3 | uVar12 >> 0x1d) ^ uVar6 >> 6) +
                    ((uVar13 << 0x18 | puVar7[-0x19] >> 8) ^ (uVar13 << 0x1f | puVar7[-0x19] >> 1) ^ puVar7[-0x19] >> 7)
                    + CARRY4(uVar9,uVar16) + puVar7[-0x1b] + CARRY4(uVar10,puVar7[-0x1c]) + puVar7[-9] +
                    CARRY4(uVar11,puVar7[-10]);
        puVar7 = puVar7 + 2;
        iStack_2d0 = iStack_2d0 + -1;
    } while (iStack_2d0 != 0);
    iStack_2d0 = 0;
    uStack_2d4 = auStack_2c8[1];
    uStack_2dc = auStack_2c8[9];
    uStack_2d8 = auStack_2c8[0];
    do {
        uVar12 = (uStack_2dc >> 9 | auStack_2c8[8] << 0x17) ^ (auStack_2c8[8] >> 0x12 | uStack_2dc << 0xe) ^
                 (auStack_2c8[8] >> 0xe | uStack_2dc << 0x12);
        uVar6 = (auStack_2c8[10] ^ auStack_2c8[0xc]) & auStack_2c8[8] ^ auStack_2c8[0xc];
        uVar13 = uVar12 + uVar6;
        uVar9 = uVar13 + *(iStack_2d0 + 0xa438);
        uVar10 = uVar9 + *(auStack_280 + iStack_2d0);
        uVar11 = uVar10 + auStack_2c8[0xe];
        auStack_2c8[0x10] =
             ((uStack_2dc << 0x17 | auStack_2c8[8] >> 9) ^ (auStack_2c8[8] << 0xe | uStack_2dc >> 0x12) ^
             (auStack_2c8[8] << 0x12 | uStack_2dc >> 0xe)) +
             ((auStack_2c8[0xb] ^ auStack_2c8[0xd]) & uStack_2dc ^ auStack_2c8[0xd]) + CARRY4(uVar12,uVar6) +
             *(iStack_2d0 + 0xa43c) + CARRY4(uVar13,*(iStack_2d0 + 0xa438)) + *(auStack_280 + iStack_2d0 + 4) +
             CARRY4(uVar9,*(auStack_280 + iStack_2d0)) + auStack_2c8[0xf] + CARRY4(uVar10,auStack_2c8[0xe]);
        uVar16 = (uStack_2d8 >> 0x1c | uStack_2d4 << 4) ^ (uStack_2d4 >> 2 | uStack_2d8 << 0x1e) ^
                 (uStack_2d4 >> 7 | uStack_2d8 << 0x19);
        uVar12 = (auStack_2c8[3] | uStack_2d4) & auStack_2c8[5];
        uVar9 = (auStack_2c8[2] | uStack_2d8) & auStack_2c8[4] | auStack_2c8[2] & uStack_2d8;
        uVar6 = auStack_2c8[3] & uStack_2d4;
        uVar10 = uVar9 + uVar16;
        auStack_2c8[0xe] = auStack_2c8[0xc];
        auStack_2c8[0xf] = auStack_2c8[0xd];
        uVar13 = auStack_2c8[6] + uVar11;
        auStack_2c8[9] = auStack_2c8[7] + auStack_2c8[0x10] + CARRY4(auStack_2c8[6],uVar11);
        auStack_2c8[0] = uVar10 + uVar11;
        auStack_2c8[0xc] = auStack_2c8[10];
        auStack_2c8[0xd] = auStack_2c8[0xb];
        auStack_2c8[10] = auStack_2c8[8];
        auStack_2c8[6] = auStack_2c8[4];
        auStack_2c8[7] = auStack_2c8[5];
        auStack_2c8[4] = auStack_2c8[2];
        auStack_2c8[5] = auStack_2c8[3];
        auStack_2c8[2] = uStack_2d8;
        auStack_2c8[3] = uStack_2d4;
        uStack_2d4 = ((uStack_2d8 << 4 | uStack_2d4 >> 0x1c) ^ (uStack_2d4 << 0x1e | uStack_2d8 >> 2) ^
                     (uStack_2d4 << 0x19 | uStack_2d8 >> 7)) + (uVar12 | uVar6) + CARRY4(uVar9,uVar16) +
                     auStack_2c8[0x10] + CARRY4(uVar10,uVar11);
        auStack_2c8[0xb] = uStack_2dc;
        iStack_2d0 = iStack_2d0 + 8;
        auStack_2c8[1] = uStack_2d4;
        auStack_2c8[8] = uVar13;
        uStack_2dc = auStack_2c8[9];
        uStack_2d8 = auStack_2c8[0];
    } while (iStack_2d0 < 0x280);
    iVar5 = 0;
    do {
        uVar12 = auStack_2c8[iVar5 * 2];
        uVar6 = *puStack_284;
        *puStack_284 = *puStack_284 + uVar12;
        puStack_284[1] = puStack_284[1] + auStack_2c8[iVar5 * 2 + 1] + CARRY4(uVar6,uVar12);
        iVar5 = iVar5 + 1;
        puStack_284 = puStack_284 + 2;
    } while (iVar5 < 8);
    return 0;
}


/* fcn.00014a62 @ 0x14a62 */

uint __cdecl fcn.00014a62(int32_t arg_8h,uint32_t arg_ch)

{
    int iVar1;
    int32_t var_40h;
    
    if ((((arg_8h != 0) && (arg_ch != 0)) && (*(arg_8h + 0x48) < 0x80)) &&
       (iVar1 = fcn.0001541a(arg_8h,&var_40h), iVar1 == 0)) {
        fcn.00010871(arg_ch,&var_40h,0x30);
        return 0;
    }
    return 0xffffffff;
}


/* fcn.00015689 @ 0x15689 */

void __cdecl fcn.00015689(int32_t arg_70h,int32_t arg_74h,int32_t arg_78h,int32_t arg_7ch)

{
    int iVar1;
    int in_stack_00000004;
    uint *in_stack_00000008;
    int in_stack_0000000c;
    uint in_stack_00000010;
    int32_t var_68h_2;
    uchar auStack_d4 [104];
    int32_t var_68h;
    
    fcn.00015537(auStack_d4);
    if (in_stack_00000004 != 0) {
        iVar1 = in_stack_0000000c - in_stack_00000008;
        do {
            fcn.000155c0(auStack_d4,*in_stack_00000008,*(iVar1 + in_stack_00000008));
            in_stack_00000008 = in_stack_00000008 + 1;
            in_stack_00000004 = in_stack_00000004 + -1;
        } while (in_stack_00000004 != 0);
    }
    fcn.0001541a(auStack_d4,in_stack_00000010);
    return;
}


/* fcn.00015537 @ 0x15537 */

uint fcn.00015537(uint *param_1)

{
    if (param_1 == NULL) {
        return 0xffffffff;
    }
    param_1[0x12] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0xf3bcc908;
    param_1[3] = 0x6a09e667;
    param_1[4] = 0x84caa73b;
    param_1[5] = 0xbb67ae85;
    param_1[6] = 0xfe94f82b;
    param_1[7] = 0x3c6ef372;
    param_1[8] = 0x5f1d36f1;
    param_1[9] = 0xa54ff53a;
    param_1[10] = 0xade682d1;
    param_1[0xb] = 0x510e527f;
    param_1[0xc] = 0x2b3e6c1f;
    param_1[0xd] = 0x9b05688c;
    param_1[0xe] = 0xfb41bd6b;
    param_1[0xf] = 0x1f83d9ab;
    param_1[0x10] = 0x137e2179;
    param_1[0x11] = 0x5be0cd19;
    return 0;
}


/* fcn.0001541a @ 0x1541a */

uint fcn.0001541a(uint32_t *param_1,int param_2)

{
    uchar *puVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puVar6;
    int iVar7;
    uchar *puVar8;
    
    if (param_1 != NULL) {
        if (param_2 == 0) {
            uVar3 = 0xffffffff;
        }
        else {
            uVar5 = param_1[0x12];
            if (uVar5 < 0x80) {
                iVar7 = 8;
                uVar4 = uVar5 * 8;
                uVar2 = *param_1;
                *param_1 = *param_1 + uVar4;
                param_1[1] = param_1[1] + (uVar5 * 8 >> 0x20) + CARRY4(uVar2,uVar4);
                *(uVar5 + 0x4c + param_1) = 0x80;
                param_1[0x12] = param_1[0x12] + 1;
                uVar5 = param_1[0x12];
                if (0x70 < uVar5) {
                    while (uVar5 < 0x80) {
                        *(param_1 + uVar5 + 0x4c) = 0;
                        param_1[0x12] = param_1[0x12] + 1;
                        uVar5 = param_1[0x12];
                    }
                    fcn.0001506a(param_1,param_1 + 0x13);
                    param_1[0x12] = 0;
                }
                while (param_1[0x12] < 0x78) {
                    *(param_1[0x12] + 0x4c + param_1) = 0;
                    param_1[0x12] = param_1[0x12] + 1;
                }
                *(param_1 + 0x31) = *(param_1 + 7);
                *(param_1 + 0xc5) = *(param_1 + 6);
                *(param_1 + 0xc6) = *(param_1 + 5);
                *(param_1 + 199) = param_1[1];
                *(param_1 + 0x32) = *(param_1 + 3);
                *(param_1 + 0xc9) = *(param_1 + 2);
                *(param_1 + 0xca) = *(param_1 + 1);
                *(param_1 + 0xcb) = *param_1;
                fcn.0001506a(param_1,param_1 + 0x13);
                puVar6 = param_2 + 2;
                puVar8 = param_1 + 0xe;
                do {
                    puVar6[-2] = puVar8[1];
                    puVar6[-1] = *puVar8;
                    *puVar6 = puVar8[-1];
                    puVar6[1] = puVar8[-2];
                    puVar6[2] = puVar8[-3];
                    puVar6[3] = puVar8[-4];
                    puVar6[4] = puVar8[-5];
                    puVar1 = puVar8 + -6;
                    puVar8 = puVar8 + 8;
                    puVar6[5] = *puVar1;
                    puVar6 = puVar6 + 8;
                    iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
                uVar3 = 0;
            }
            else {
                uVar3 = 0xffffffff;
            }
        }
        return uVar3;
    }
    return 0xffffffff;
}


/* fcn.0001570b @ 0x1570b */

void fcn.0001570b(void)

{
    uint *puVar1;
    
    puVar1 = fcn.00010d43();
    if (puVar1 != NULL) {
        fcn.00010afc();
        fcn.00010a9b(*puVar1,puVar1[1]);
        puVar1[2] = puVar1[3];
        *puVar1[3] = *puVar1;
        *(puVar1[2] + 4) = 0;
        *(puVar1[2] + 5) = 0;
        puVar1[4] = *puVar1;
    }
    return;
}


/* fcn.00010d43 @ 0x10d43 */

void fcn.00010d43(void)

{
    fcn.00010aec(6);
    return;
}


/* fcn.00010aec @ 0x10aec */

void fcn.00010aec(void)

{
    int iVar1;
    
    iVar1 = fcn.00010ad5();
    //WARNING: Could not recover jumptable at 0x00010af1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 0xc))();
    return;
}


/* fcn.00010afc @ 0x10afc */

uchar fcn.00010afc(void)

{
    return 0;
}


/* fcn.00010d4c @ 0x10d4c */

int fcn.00010d4c(uint8_t *param_1,uint32_t param_2,int param_3,uint param_4)

{
    uint8_t *puVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    
    if ((param_1 != NULL) && (param_3 != 0)) {
        if ((*param_1 & 0x80) == 0) {
            puVar1 = param_1;
        }
        else {
            puVar1 = fcn.000157a5(param_2 + 1);
            if (puVar1 == NULL) {
                return 0;
            }
            fcn.00010871(puVar1 + 1,param_1,param_2);
            *puVar1 = 0;
            param_2 = param_2 + 1;
        }
        iVar2 = fcn.000157a5(0xc);
        if (iVar2 != 0) {
            uVar3 = fcn.00016d14();
            *(iVar2 + 4) = uVar3;
            iVar4 = fcn.00016d14();
            *(iVar2 + 8) = iVar4;
            if ((((*(iVar2 + 4) != 0) && (iVar4 != 0)) &&
                (iVar4 = fcn.00016d3d(*(iVar2 + 4),puVar1,param_2), -1 < iVar4)) &&
               (iVar4 = fcn.00016d3d(*(iVar2 + 8),param_3,param_4), -1 < iVar4)) {
                return iVar2;
            }
            if (puVar1 != param_1) {
                fcn.0001574a(puVar1);
            }
            fcn.00013501(iVar2);
        }
    }
    return 0;
}


/* fcn.0001342b @ 0x1342b */

uint fcn.0001342b(uint param_1,uint param_2,int param_3,uint32_t *param_4,int *param_5,int param_6)

{
    int arg_8h;
    int iVar1;
    uint32_t arg_ch;
    uint32_t uVar2;
    uint uVar3;
    
    uVar3 = 0xffffffff;
    if (((param_6 == 0) || (*param_5 != 0)) && (arg_8h = fcn.00016d14(), arg_8h != 0)) {
        iVar1 = fcn.00016d3d(arg_8h,param_1,param_2);
        if (((-1 < iVar1) && (iVar1 = fcn.00016c3a(param_5[1],arg_8h), -1 < iVar1)) &&
           ((param_6 != 0 || (iVar1 = fcn.00016c56(arg_8h,param_5[2],param_5[1],arg_8h), -1 < iVar1)))) {
            arg_ch = fcn.00013525(param_5);
            if (*param_4 < arg_ch) {
                *param_4 = arg_ch;
            }
            else {
                uVar2 = fcn.00016cf6(arg_8h);
                if (uVar2 <= arg_ch) {
                    *param_4 = arg_ch;
                    fcn.00010a9b(param_3,arg_ch);
                    iVar1 = fcn.00016cf6(arg_8h,0);
                    iVar1 = fcn.00016ca6(arg_8h,(param_3 + arg_ch) - iVar1);
                    if (-1 < iVar1) {
                        uVar3 = 0;
                    }
                }
            }
        }
        fcn.00016c3f(arg_8h);
        fcn.00016c3f(0);
        fcn.00016c3f(0);
    }
    return uVar3;
}


/* fcn.00014efc @ 0x14efc */

uint __cdecl fcn.00014efc(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    char *pcVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint uVar5;
    char *pcVar6;
    int iVar7;
    int32_t var_64h;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    if ((((0x1a < arg_14h) && (*arg_10h == '\0')) && ((cVar3 = *(arg_10h + 1), cVar3 == '\x01' || (cVar3 == '\x02'))))
       && (*(arg_10h + 2) == -1)) {
        pcVar1 = arg_10h + arg_14h;
        for (pcVar6 = arg_10h + 3; (pcVar6 < pcVar1 && (*pcVar6 == (cVar3 != '\x01') + -1)); pcVar6 = pcVar6 + 1) {
        }
        if ((((7 < pcVar6 + (-2 - arg_10h)) && (*pcVar6 == '\0')) &&
            (iVar4 = fcn.00019f2d(pcVar6 + 1,(arg_10h - (pcVar6 + 1)) + arg_14h,&var_10h), -1 < iVar4)) &&
           ((var_bh == '\0' && (stack0xfffffff4 == 0x10)))) {
            iVar7 = var_4h + var_10h;
            iVar4 = fcn.00019f2d(var_10h,iVar7 - var_10h,&var_10h);
            if ((-1 < iVar4) && ((var_bh == '\0' && (stack0xfffffff4 == 0x10)))) {
                uVar2 = var_4h + var_10h;
                iVar4 = fcn.0001a012(var_10h,var_4h,&var_64h,&arg_14h);
                if ((iVar4 == 0) &&
                   (((uVar2 <= arg_14h ||
                     ((((iVar4 = fcn.00019f2d(arg_14h,uVar2 - arg_14h,&var_10h), -1 < iVar4 && (var_bh == '\0')) &&
                       (stack0xfffffff4 == 5)) && (var_4h + var_10h == uVar2)))) &&
                    (((iVar4 = fcn.00019f2d(uVar2,iVar7 - uVar2,&var_10h), -1 < iVar4 && (var_bh == '\0')) &&
                     ((stack0xfffffff4 == 4 && ((var_4h + var_10h == pcVar1 && (var_4h == arg_ch)))))))))) {
                    uVar5 = fcn.00010aaf(var_10h,arg_8h,var_4h);
                    return uVar5;
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00014c90 @ 0x14c90 */

uint32_t fcn.00014c90(uint param_1,uint32_t param_2,uint8_t *param_3,uint32_t param_4,uint32_t param_5,
                     uint32_t param_6)

{
    uint8_t uVar1;
    uint8_t *arg_8h;
    uint32_t arg_8h_00;
    int iVar2;
    uint32_t arg_8h_01;
    int iVar3;
    uint8_t *puVar4;
    int iVar5;
    uint32_t uVar6;
    int32_t in_stack_00000028;
    int32_t in_stack_0000002c;
    int32_t in_stack_00000030;
    int32_t in_stack_00000034;
    uint uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint uStack_8;
    uint8_t *puStack_4;
    
    uVar6 = (param_6 >> 3) + ((param_6 & 7) != 0);
    if (((uVar6 < param_5) || (uVar6 < param_5 + 2 + param_2)) || (param_4 != uVar6)) {
        return 0x16;
    }
    arg_8h = fcn.000157a5(uVar6);
    arg_8h_00 = fcn.000157a5(uVar6);
    iVar2 = fcn.000157a5(uVar6);
    arg_8h_01 = fcn.000157a5(uVar6);
    if (arg_8h == NULL) {
code_r0x00014ec4:
        if (arg_8h_00 != 0) {
            fcn.0001574a(arg_8h_00);
        }
        if (iVar2 != 0) {
            fcn.0001574a(iVar2);
        }
        if (arg_8h_01 != 0) {
            fcn.0001574a(arg_8h_01);
        }
        return 0xd;
    }
    if (((arg_8h_00 == 0) || (iVar2 == 0)) || (arg_8h_01 == 0)) {
        fcn.0001574a(arg_8h);
        goto code_r0x00014ec4;
    }
    if (param_3[param_4 - 1] != 0xbc) {
        uVar6 = 7;
        goto code_r0x00014e9b;
    }
    iVar3 = uVar6 - param_2;
    fcn.00010871(arg_8h,param_3,iVar3 - 1);
    fcn.00010871(arg_8h_01,param_3 + (uVar6 - param_2) + -1,param_2);
    uVar1 = 0xff >> ((uVar6 * '\b' - param_6) + 1U & 0x1f);
    if ((*param_3 & ~uVar1) == 0) {
        uVar6 = fcn.00014b89(arg_8h_01,param_2,arg_8h_00,iVar3 + -1);
        if (uVar6 != 0) goto code_r0x00014e9b;
        iVar5 = iVar3 + -1;
        if (iVar5 != 0) {
            puVar4 = arg_8h;
            do {
                *puVar4 = *puVar4 ^ puVar4[arg_8h_00 - arg_8h];
                puVar4 = puVar4 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
        *arg_8h = *arg_8h & uVar1;
        uVar6 = 0;
        if (iVar3 - param_5 != 2) {
            do {
                if (arg_8h[uVar6] != 0) goto code_r0x00014d7c;
                uVar6 = uVar6 + 1;
            } while (uVar6 < (iVar3 - param_5) - 2);
        }
        if (arg_8h[uVar6] == 1) {
            uStack_8 = param_1;
            puStack_4 = arg_8h + uVar6 + 1;
            uStack_18 = 8;
            uStack_14 = param_2;
            uStack_10 = param_5;
            uStack_c = arg_8h_00;
            fcn.00010a9b(arg_8h_00,8);
            if (param_2 == 0x14) {
                fcn.00014a12(3,&uStack_c,&uStack_18,arg_8h_00);
            }
            else if (param_2 == 0x20) {
                fcn.000133cd(3,&uStack_c,&uStack_18,arg_8h_00);
            }
            else if (param_2 == 0x30) {
                fcn.00014b33(in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034);
            }
            else {
                if (param_2 != 0x40) {
                    uVar6 = 0xb;
                    goto code_r0x00014e9b;
                }
                fcn.00015689(in_stack_00000028,in_stack_0000002c,in_stack_00000030,in_stack_00000034);
            }
            iVar3 = fcn.00010aaf(arg_8h_00,arg_8h_01,param_2);
            uVar6 = iVar3 != 0;
            goto code_r0x00014e9b;
        }
    }
code_r0x00014d7c:
    uVar6 = 7;
code_r0x00014e9b:
    fcn.0001574a(arg_8h_01);
    fcn.0001574a(iVar2);
    fcn.0001574a(arg_8h_00);
    fcn.0001574a(arg_8h);
    return uVar6;
}


/* fcn.000114eb @ 0x114eb */

int fcn.000114eb(uint8_t *param_1,int param_2)

{
    bool bVar1;
    int arg_10h;
    int iVar2;
    uint8_t *puVar3;
    int iVar4;
    int *piVar5;
    uint32_t uVar6;
    uint8_t *puVar7;
    uint uVar8;
    uint uVar9;
    uint8_t *puStack_78;
    uint8_t *puStack_74;
    int *piStack_70;
    int *piStack_6c;
    uint8_t *puStack_68;
    uint8_t *puStack_64;
    char cStack_5f;
    int iStack_5c;
    int iStack_58;
    uchar auStack_54 [20];
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_4;
    
    piStack_6c = NULL;
    piStack_70 = NULL;
    bVar1 = false;
    arg_10h = fcn.0001588e(0xe0);
    if (arg_10h == 0) {
        return 0;
    }
    uVar9 = 0;
    uVar8 = 0xe0;
    iVar2 = arg_10h;
    fcn.00010a9b(arg_10h,0xe0);
    *(arg_10h + 200) = param_1;
    *(arg_10h + 0xcc) = param_2;
    puVar7 = param_1 + param_2;
    puStack_78 = param_1;
    iVar2 = fcn.00019f2d(param_1,param_2,&puStack_64,iVar2,uVar8,uVar9);
    if (iVar2 < 0) {
        return 0;
    }
    if (cStack_5f != '\0') {
        return 0;
    }
    if (iStack_5c != 0x10) {
        return 0;
    }
    puVar3 = puStack_64 + iStack_58;
    puStack_78 = puStack_64;
    if (puVar7 < puVar3) {
        return 0;
    }
    if (puVar3 < puVar7) {
        puVar7 = puVar3;
    }
    iVar2 = fcn.0001a012(puStack_64,puVar7 - puStack_64,auStack_54,&puStack_78);
    if ((((iVar2 == 0) && (iVar2 = fcn.000169ee(auStack_54), iVar2 != 0)) && (iStack_4 == 7)) &&
       ((iStack_40 == 7 && (iStack_3c == 2)))) {
        bVar1 = true;
        iVar2 = fcn.00019f2d(puStack_78,puVar7 - puStack_78,&puStack_64);
        if (iVar2 < 0) {
            return 0;
        }
        if (cStack_5f != '\x02') {
            return 0;
        }
        puStack_78 = puStack_64;
        iVar2 = fcn.00019f2d(puStack_64,iStack_58,&puStack_64);
        if (iVar2 < 0) {
            return 0;
        }
        if (cStack_5f != '\0') {
            return 0;
        }
        if (iStack_5c != 0x10) {
            return 0;
        }
        puStack_78 = puStack_64;
        puVar7 = puStack_64 + iStack_58;
    }
    iVar2 = fcn.00019f2d(puStack_78,puVar7 - puStack_78,&puStack_64);
    if (iVar2 < 0) {
        return 0;
    }
    if (cStack_5f != '\0') {
        return 0;
    }
    if (iStack_5c != 2) {
        return 0;
    }
    uVar6 = 0;
    puStack_78 = puStack_64;
    for (iVar2 = iStack_58; iVar2 != 0; iVar2 = iVar2 + -1) {
        uVar6 = uVar6 << 8 | *puStack_78;
        puStack_78 = puStack_78 + 1;
    }
    iVar2 = fcn.00019f2d(puStack_78,puVar7 - puStack_78,&puStack_64);
    if (iVar2 < 0) {
        return 0;
    }
    if (cStack_5f != '\0') {
        return 0;
    }
    if (iStack_5c != 0x11) {
        return 0;
    }
    puStack_78 = puStack_64 + iStack_58;
    iVar2 = fcn.00019f2d(puStack_64,puStack_78 - puStack_64,&puStack_64);
    if (iVar2 < 0) {
        return 0;
    }
    if (cStack_5f != '\0') {
        return 0;
    }
    if (iStack_5c != 0x10) {
        return 0;
    }
    iVar2 = arg_10h + 0x5c;
    puStack_68 = puStack_64 + iStack_58;
    puStack_74 = puStack_64;
    iVar4 = fcn.0001a012(puStack_64,puStack_68 - puStack_64,iVar2,&puStack_74);
    if (iVar4 != 0) {
        return 0;
    }
    iVar4 = fcn.00016a3e(iVar2);
    if (((iVar4 == 0) && (iVar4 = fcn.00016a72(iVar2), iVar4 == 0)) &&
       ((iVar4 = fcn.00016acf(iVar2), iVar4 == 0 && (iVar4 = fcn.00016aeb(iVar2), iVar4 == 0)))) {
        return 0;
    }
    if (puStack_68 - puStack_74 != 0) {
        iVar4 = fcn.00019f2d(puStack_74,puStack_68 - puStack_74,&puStack_64);
        if (iVar4 < 0) {
            return 0;
        }
        if (cStack_5f != '\0') {
            return 0;
        }
        if (iStack_5c != 5) {
            return 0;
        }
        puStack_78 = puStack_64;
    }
    iVar4 = fcn.00019f2d(puStack_78,puVar7 - puStack_78,&puStack_64);
    if ((((iVar4 < 0) || (cStack_5f != '\0')) || (iStack_5c != 0x10)) && (bVar1)) {
        return 0;
    }
    puStack_74 = puStack_64;
    puVar7 = puStack_64 + iStack_58;
    iVar4 = fcn.0001a012(puStack_64,puVar7 - puStack_64,auStack_54,&puStack_78);
    if (iVar4 != 0) {
        return 0;
    }
    fcn.0001a012(puStack_74,puVar7 - puStack_74,arg_10h,&puStack_74);
    iVar4 = fcn.000169ee(auStack_54);
    if (((iVar4 == 0) || (iStack_4 != 7)) || ((iStack_40 != 7 || (iStack_3c != 1)))) {
        iVar2 = fcn.00010ef4(auStack_54);
        if ((((iVar2 == 0) || (iStack_4 != 10)) || (iStack_3c != 0x137)) ||
           (((iStack_38 != 2 || (iStack_34 != 1)) || (iStack_30 != 4)))) {
            iVar2 = fcn.000169ee(auStack_54);
            if (((iVar2 == 0) || (iStack_4 != 9)) ||
               (((iStack_40 != 9 || ((iStack_3c != 0x10 || (iStack_38 != 1)))) || (iStack_34 != 4)))) {
                puStack_78 = puStack_74;
                iVar2 = fcn.00019f2d(puStack_74,puVar7 - puStack_74,&puStack_64);
                if (iVar2 < 0) {
                    return 0;
                }
                if (cStack_5f != '\x02') {
                    return 0;
                }
                puStack_78 = puStack_64;
                iVar2 = fcn.00019f2d(puStack_64,puVar7 - puStack_64,&puStack_64);
                if (iVar2 < 0) {
                    return 0;
                }
                if (cStack_5f != '\0') {
                    return 0;
                }
                if (iStack_5c != 0x10) {
                    return 0;
                }
                *(arg_10h + 0x54) = puStack_64;
                *(arg_10h + 0x58) = iStack_58;
                goto code_r0x00011988;
            }
            if (uVar6 != 3) {
                return 0;
            }
            iVar2 = fcn.00011d27(puStack_74,puVar7 - puStack_74,arg_10h);
        }
        else {
            if (uVar6 != 1) {
                return 0;
            }
            iVar2 = fcn.00011acc(puStack_74,puVar7 - puStack_74,arg_10h);
        }
        if (iVar2 != 0) {
            return 0;
        }
    }
    else {
        if (uVar6 != 1) {
            return 0;
        }
        fcn.00016a72(iVar2);
    }
code_r0x00011988:
    puStack_78 = puVar7;
    iVar2 = fcn.00019f2d(puVar7,(param_1 + param_2) - puVar7,&puStack_64);
    if ((-1 < iVar2) && (cStack_5f == '\x02')) {
        puVar3 = puStack_64 + iStack_58;
        puStack_78 = puStack_64;
        puVar7 = param_1 + param_2;
        while (iVar2 = fcn.00019f2d(puStack_78,puVar7 - puStack_78,&puStack_64), -1 < iVar2) {
            if (cStack_5f == '\x02') {
                puStack_78 = puVar7;
                if (iStack_5c != 1) {
                    return 0;
                }
            }
            else {
                if (cStack_5f != '\0') {
                    return 0;
                }
                if (iStack_5c != 0x10) {
                    return 0;
                }
                puVar7 = puStack_64 + iStack_58;
                piVar5 = fcn.000158e0(puStack_78,puVar7 - puStack_78);
                if (piVar5 == NULL) {
                    return 0;
                }
                if (piStack_70 == NULL) {
                    piStack_70 = piVar5;
                }
                else if (piStack_6c != NULL) {
                    *piStack_6c = piVar5;
                }
                puStack_78 = puVar7;
                piStack_6c = piVar5;
            }
            if (puVar3 <= puStack_78) {
                *(arg_10h + 0xbc) = piStack_70;
                iVar2 = fcn.00019f2d(puStack_78,param_1 + (param_2 - puStack_78),&puStack_64);
                if (iVar2 < 0) {
                    return 0;
                }
                if (cStack_5f != '\0') {
                    return 0;
                }
                if (iStack_5c != 0x11) {
                    return 0;
                }
                puStack_78 = puStack_64;
                iVar2 = fcn.000128f2(puStack_64,iStack_58,arg_10h);
                if (iVar2 != 0) {
                    arg_10h = 0;
                }
                return arg_10h;
            }
            puVar7 = puVar3;
        }
    }
    return 0;
}


/* fcn.000158e0 @ 0x158e0 */

int fcn.000158e0(int param_1,int param_2)

{
    char *pcVar1;
    int noname_0;
    int iVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcStack_14;
    char *pcStack_10;
    char cStack_b;
    int iStack_8;
    int iStack_4;
    
    noname_0 = fcn.0001588e(0x2b0);
    fcn.00010a9b(noname_0,0x2b0);
    if (noname_0 != 0) {
        *(noname_0 + 0x29c) = param_1;
        pcVar4 = param_2 + param_1;
        iVar2 = fcn.00019f2d(param_1,param_2,&pcStack_10);
        pcVar1 = pcStack_10;
        if (((-1 < iVar2) && (cStack_b == '\0')) && (iStack_8 == 0x10)) {
            pcStack_14 = pcStack_10;
            *(noname_0 + 0x2a0) = pcStack_10 + (iStack_4 - param_1);
            pcVar3 = pcStack_10 + iStack_4;
            if (pcVar3 <= pcVar4) {
                if (pcVar3 < pcVar4) {
                    pcVar4 = pcVar3;
                }
                *(noname_0 + 0x2a4) = pcStack_10 + (*(noname_0 + 0x29c) - param_1);
                iVar2 = fcn.000164eb(pcStack_10,pcVar4 - pcStack_10,noname_0,&pcStack_14);
                if (iVar2 == 0) {
                    *(noname_0 + 0x2a8) = pcStack_14 - pcVar1;
                    iVar2 = fcn.00015e03(pcStack_14,pcVar4 - pcStack_14,noname_0 + 0x22c,&pcStack_14);
                    if ((((iVar2 == 0) &&
                         (iVar2 = fcn.00019f2d(pcStack_14,pcVar4 - pcStack_14,&pcStack_10), -1 < iVar2)) &&
                        ((cStack_b == '\0' && ((iStack_8 == 3 && (iStack_4 != 0)))))) && (*pcStack_10 == '\0')) {
                        *(noname_0 + 0x280) = pcStack_10 + 1;
                        *(noname_0 + 0x284) = iStack_4 + -1;
                        return noname_0;
                    }
                }
            }
        }
    }
    return 0;
}


/* fcn.000129ce @ 0x129ce */

void fcn.000129ce(uint param_1,uint param_2,uint param_3)

{
    fcn.000129e7(param_1,0,param_2,0,param_3);
    return;
}


/* fcn.000129e7 @ 0x129e7 */

uint fcn.000129e7(int param_1,char param_2,int *param_3,uint32_t *param_4,int *param_5)

{
    bool bVar1;
    int *piVar2;
    uint *puVar3;
    int iVar4;
    uint32_t uVar5;
    uint *puVar6;
    int *piVar7;
    uint *puVar8;
    int8_t iStack_54;
    uint32_t uStack_50;
    uint *puStack_4c;
    uchar auStack_48 [8];
    uchar auStack_40 [64];
    
    piVar2 = param_5;
    bVar1 = false;
    if (param_5 == NULL) {
        return 0xffffffff;
    }
    if (param_1 == 0) {
        *param_5 = 5;
    }
    else {
        if (param_3 == NULL) {
            if ((param_4 != NULL) && (*param_4 == 0)) {
                return 0xffffffff;
            }
        }
        else if (param_4 != NULL) {
            return 0xffffffff;
        }
        if ((param_2 == '\0') || (param_1 = *(param_1 + 0xc4), param_1 != 0)) {
            puVar3 = fcn.00012223(param_1);
            if (puVar3 == NULL) {
                *param_5 = 5;
                return 0xffffffff;
            }
            puVar3[1] = puVar3;
            *(param_1 + 0xd8) = puVar3[0xa7];
            *(param_1 + 0xdc) = puVar3[0xa8];
            fcn.00019521(auStack_48);
            iVar4 = 0;
            if (*param_5 == -1) {
                iVar4 = 3;
            }
            *param_5 = iVar4;
            param_5 = puVar3;
            do {
                for (puVar8 = *(param_1 + 0xbc); puVar8 != NULL; puVar8 = *puVar8) {
                    uVar5 = 0;
                    uStack_50 = 0;
                    if ((puVar3 == puVar8) || (*piVar2 == 3)) {
code_r0x00012b15:
                        if (param_4 == NULL) {
                            puStack_4c = NULL;
                            piVar7 = param_3;
                            puVar3 = param_5;
                            if (param_3 != NULL) {
                                while ((uVar5 == 0 || (iVar4 = fcn.00015d69(puVar8 + 0x48,piVar7 + 0x48), iVar4 != 0))
                                      ) {
                                    iVar4 = fcn.00015d69(param_5 + 0x48,piVar7 + 0x48);
                                    if (iVar4 == 0) {
                                        puVar6 = param_5;
                                        goto code_r0x00012c2b;
                                    }
                                    iVar4 = fcn.00015d69(puVar8 + 0x1e,piVar7 + 0x48);
                                    if (iVar4 == 0) {
                                        puVar6 = puStack_4c;
                                        goto code_r0x00012c2b;
                                    }
                                    piVar7 = *piVar7;
                                    if (piVar7 == NULL) goto code_r0x00012c2f;
                                    uVar5 = uStack_50;
                                }
                                puVar6 = puVar8;
code_r0x00012c2b:
                                if (piVar7 != NULL) {
                                    if (((puVar6 != NULL) && (puVar6[0xa7] != piVar7[0xa7])) &&
                                       (iVar4 = fcn.00010aaf(puVar6[0xa9],piVar7[0xa9],piVar7[0xaa]), iVar4 == 0))
                                    goto code_r0x00012ba2;
                                    fcn.00016bee(piVar7);
                                    iVar4 = fcn.00015893(piVar7,puVar8);
                                    if (-1 < iVar4) goto code_r0x00012ba2;
                                    goto code_r0x00012c96;
                                }
                            }
code_r0x00012c2f:
                            if (uStack_50 != 0) {
                                puVar3 = puVar8;
                            }
                            param_5 = puVar3;
                        }
                        else {
                            uStack_50 = param_4[1];
                            if (uStack_50 == 0x20) {
                                iStack_54 = 1;
                            }
                            else if (uStack_50 == 0x30) {
                                iStack_54 = 2;
                            }
                            else {
                                if (uStack_50 != 0x40) {
                                    return 0xffffffff;
                                }
                                iStack_54 = 3;
                            }
                            iVar4 = fcn.00012dab(iStack_54,puVar8 + 0xa9,puVar8 + 0xaa,auStack_40,&uStack_50);
                            if (iVar4 != 0) {
                                return 0xffffffff;
                            }
                            if (uStack_50 != param_4[1]) {
                                return 0xffffffff;
                            }
                            iVar4 = fcn.00010aaf(*param_4,auStack_40,uStack_50);
                            if (iVar4 == 0) {
code_r0x00012ba2:
                                bVar1 = true;
                                break;
                            }
                        }
                    }
                    else {
                        iVar4 = fcn.00015d69(puVar3 + 0x1e,puVar8 + 0x48);
                        if (iVar4 == 0) {
                            iVar4 = fcn.00016bee(puVar8);
                            if ((iVar4 < 0) || (iVar4 = fcn.00015893(puVar8,puVar3), iVar4 < 0)) {
code_r0x00012c96:
                                *piVar2 = 1;
                                return 0xffffffff;
                            }
                            *(param_1 + 0xd0) = puVar8[0xa7];
                            uVar5 = 1;
                            *(param_1 + 0xd4) = puVar8[0xa8];
                            puVar3[1] = puVar8;
                            uStack_50 = 1;
                            puVar8[1] = puVar8;
                            goto code_r0x00012b15;
                        }
                    }
                }
                if (*piVar2 != 3) {
                    if (bVar1) goto code_r0x00012cd8;
                    break;
                }
                if (bVar1) goto code_r0x00012cd8;
                param_1 = *(param_1 + 0xc4);
            } while (param_1 != 0);
            if ((param_3 != NULL) || (param_4 != NULL)) {
                *piVar2 = 6;
                return 0xffffffff;
            }
code_r0x00012cd8:
            *piVar2 = 0;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.000112ea @ 0x112ea */

uint fcn.000112ea(int param_1,int32_t param_2,uchar *param_3,uint32_t param_4)

{
    uint32_t *arg_ch;
    int iVar1;
    uint uVar2;
    uchar *arg_8h;
    uint32_t uVar3;
    uint32_t arg_10h;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uchar auStack_40 [64];
    
    uStack_48 = 0;
    uStack_44 = uStack_44 & 0xffffff00;
    if ((param_1 == 0) || (iVar1 = fcn.0001216c(*(param_1 + 0xc0) + 0xc4,&uStack_44,&uStack_48), iVar1 != 0)) {
        return 0xffffffff;
    }
    arg_ch = param_1 + 0x54;
    if (*arg_ch != 0) {
        uVar3 = *(param_1 + 0xb0);
        if (((uVar3 != 0) && (param_3 != NULL)) && (param_4 != 0)) {
            if (param_4 != *(param_1 + 0xb4)) {
                if (param_4 != *(param_1 + 0x58)) {
                    return 0xffffffff;
                }
                uVar3 = *arg_ch;
            }
            iVar1 = fcn.00010aaf(param_3,uVar3,param_4);
            if (iVar1 != 0) {
                return 0xffffffff;
            }
        }
        iVar1 = fcn.00012dab(uStack_44,arg_ch,param_1 + 0x58,auStack_40,&uStack_48);
        if (iVar1 != 0) {
            return 0xffffffff;
        }
    }
    if (*(*(param_1 + 0xc0) + 0x118) == 0) goto code_r0x000113fb;
    uVar3 = *(*(param_1 + 0xc0) + 0x174);
    if (uVar3 == 0) {
        return 0xffffffff;
    }
    if (*arg_ch == 0) {
        if ((param_3 != NULL) && (param_4 == uStack_48)) {
            arg_8h = param_3;
            arg_10h = param_4;
            goto code_r0x000113bd;
        }
    }
    else {
        arg_8h = auStack_40;
        arg_10h = uStack_48;
code_r0x000113bd:
        iVar1 = fcn.00010aaf(arg_8h,uVar3,arg_10h);
        if (iVar1 != 0) {
            return 0xffffffff;
        }
    }
    iVar1 = fcn.00012dab(uStack_44,*(param_1 + 0xc0) + 0x118,*(param_1 + 0xc0) + 0x11c,auStack_40,&uStack_48);
    if (iVar1 != 0) {
        return 0xffffffff;
    }
code_r0x000113fb:
    if ((*arg_ch == 0) && (*(*(param_1 + 0xc0) + 0x118) == 0)) {
        if (param_3 == NULL) {
            return 0xffffffff;
        }
        if (param_4 != uStack_48) {
            return 0xffffffff;
        }
    }
    else {
        param_3 = auStack_40;
    }
    if ((param_2 == 0) && (param_2 = fcn.00012223(param_1), param_2 == 0)) {
        return 0xffffffff;
    }
    uVar2 = fcn.0001146c(param_1,param_2,param_3,uStack_48);
    return uVar2;
}


/* fcn.000121f5 @ 0x121f5 */

int __cdecl fcn.000121f5(int32_t arg_8h,uint32_t arg_ch)

{
    int iVar1;
    
    if ((arg_8h != 0) && (arg_ch != 0)) {
        iVar1 = fcn.0001216c(arg_8h + 0x5c,arg_ch,&arg_8h);
        return -(iVar1 != 0);
    }
    return -1;
}


/* fcn.0001216c @ 0x1216c */

uint fcn.0001216c(int param_1,uchar *param_2,uint *param_3)

{
    int iVar1;
    uint uVar2;
    
    if (((param_1 == 0) || (param_3 == NULL)) || (param_2 == NULL)) {
code_r0x000121ee:
        uVar2 = 0xffffffff;
    }
    else {
        iVar1 = fcn.00016a3e(param_1);
        if (iVar1 == 0) {
            iVar1 = fcn.00016a72(param_1);
            if (iVar1 == 0) {
                iVar1 = fcn.00016acf(param_1);
                if (iVar1 == 0) {
                    iVar1 = fcn.00016aeb(param_1);
                    if (iVar1 == 0) {
                        iVar1 = fcn.00015d44(param_1);
                        if (iVar1 == 0) goto code_r0x000121ee;
                    }
                    else {
                        *param_2 = 3;
                        *param_3 = 0x40;
                    }
                }
                else {
                    *param_2 = 2;
                    *param_3 = 0x30;
                }
            }
            else {
                *param_2 = 1;
                *param_3 = 0x20;
            }
        }
        else {
            *param_2 = 0;
            *param_3 = 0x14;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000108cf @ 0x108cf */

int __fastcall fcn.000108cf(uint param_1,uint *param_2)

{
    uint uVar1;
    int iVar2;
    int32_t var_4h;
    
    if (param_2 == NULL) {
        iVar2 = -0x7ffffffe;
    }
    else {
        uVar1 = *param_2;
        do {
            iVar2 = fcn.00010898();
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.00010918(0x10);
        } while (iVar2 != 0);
        *param_2 = uVar1;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001063e @ 0x1063e */

uint __cdecl fcn.0001063e(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    int32_t iVar1;
    int iVar2;
    int32_t var_ch;
    int32_t var_4h;
    
    iVar1 = arg_10h;
    if (((arg_10h != 0) && (arg_ch != 0)) && (iVar2 = fcn.00010918(0x10), iVar2 == 0)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        iVar2 = **(stack0xfffffff2 + -4);
        if (iVar2 != 0) {
            (**(iVar2 + 0x30))(*(stack0xfffffff2 + -4),&arg_10h);
            iVar2 = fcn.000108cf();
            if ((-1 < iVar2) && (arg_10h != 0)) {
                *iVar1 = *(arg_10h + 0x18);
                *(iVar1 + 4) = *(arg_10h + 0x1c);
                *(iVar1 + 8) = *(arg_10h + 0x20);
                *(iVar1 + 0xc) = *(arg_10h + 0x24);
                *(iVar1 + 0x14) = arg_10h + 0x34;
                *(iVar1 + 0x10) = *(arg_10h + 0x30);
                return 0;
            }
        }
        return 0x8000000e;
    }
    return 0x80000002;
}


/* fcn.00012ce5 @ 0x12ce5 */

uint __cdecl fcn.00012ce5(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int32_t arg_8h_00;
    uint uVar1;
    
    if ((arg_8h != 0) && (arg_ch != 0)) {
        arg_8h_00 = fcn.000158e0(arg_8h,arg_ch);
        uVar1 = fcn.00012d15(arg_8h_00,arg_10h,arg_14h);
        return uVar1;
    }
    return 0xffffffff;
}


/* fcn.00012d15 @ 0x12d15 */

uint __cdecl fcn.00012d15(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    if ((((((arg_8h != 0) && (arg_ch != 0)) && (arg_10h != 0)) &&
         ((iVar1 = fcn.00019f2d(*(arg_8h + 0x224),*(arg_8h + 0x228),&var_10h), -1 < iVar1 && (var_bh == '\0')))) &&
        ((stack0xfffffff4 == 0x10 &&
         ((iVar1 = fcn.00019f2d(var_10h,var_4h,&var_10h), -1 < iVar1 && (var_bh == '\0')))))) &&
       (stack0xfffffff4 == 2)) {
        *arg_ch = var_10h;
        *arg_10h = var_4h;
        if (**arg_ch == '\0') {
            if ((var_4h & 1U) == 0) {
                return 0xffffffff;
            }
            *arg_ch = *arg_ch + 1;
            *arg_10h = *arg_10h + -1;
        }
        return 0;
    }
    return 0xffffffff;
}


/* section..text @ 0x10240 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 40832 named .text
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.00010898 @ 0x10898 */

uint __fastcall fcn.00010898(uint param_1,uint *param_2)

{
    int16_t iVar1;
    int16_t *piVar2;
    
    if (param_2 == NULL) {
        return 0x80000002;
    }
    piVar2 = *param_2;
    iVar1 = *piVar2;
    do {
        if (iVar1 == -1) {
            return 0x8000000e;
        }
        piVar2 = piVar2 + piVar2[1];
        iVar1 = *piVar2;
    } while (iVar1 != 4);
    *param_2 = piVar2;
    return 0;
}


/* fcn.00010a20 @ 0x10a20 */

uint __thiscall fcn.00010a20(int param_1,uint32_t *param_2)

{
    char cVar1;
    uint32_t uVar2;
    char *extraout_ECX;
    char *pcVar3;
    
    if (param_1 == 0) {
        return 0x80000002;
    }
    if ((param_2 != NULL) && (uVar2 = fcn.00010a01(), pcVar3 = extraout_ECX, uVar2 < 0xf4241)) {
        for (; (*pcVar3 == ' ' || (*pcVar3 == '\t')); pcVar3 = pcVar3 + 1) {
        }
        for (; *pcVar3 == '0'; pcVar3 = pcVar3 + 1) {
        }
        *param_2 = 0;
        while( true ) {
            cVar1 = *pcVar3;
            if (9 < cVar1 - 0x30U) {
                return 0;
            }
            if ((0x2fU - cVar1) / 10 < *param_2) break;
            pcVar3 = pcVar3 + 1;
            *param_2 = *param_2 * 10 + -0x30 + cVar1;
        }
        *param_2 = 0xffffffff;
        return 0x80000003;
    }
    return 0x80000002;
}


/* fcn.00010a01 @ 0x10a01 */

uint32_t __fastcall fcn.00010a01(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if ((param_1 != NULL) && (*param_1 != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.000102a0 @ 0x102a0 */

int fcn.000102a0(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.000157a5 @ 0x157a5 */

int fcn.000157a5(uint32_t param_1)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    uint32_t uVar4;
    int iVar5;
    
    iVar1 = fcn.00010d43();
    if (iVar1 == 0) {
        return 0;
    }
    iVar5 = 0;
    if (*(iVar1 + 8) == 0) {
        fcn.0001570b();
    }
    piVar2 = *(iVar1 + 8);
    uVar4 = ((param_1 & 0x7f) != 0) + (param_1 >> 7);
    if ((uVar4 < 0x100) && (piVar2 <= *(iVar1 + 0xc))) {
        piVar3 = piVar2;
        do {
            if ((*(piVar3 + 5) == '\0') && (uVar4 <= *(piVar3 + 1))) {
                iVar1 = piVar2[iVar5 * 2];
                *(piVar2 + iVar5 * 8 + 5) = 1;
                return iVar1;
            }
            iVar5 = iVar5 + 1;
            piVar3 = piVar2 + iVar5 * 2;
        } while (piVar3 <= *(iVar1 + 0xc));
        if (piVar2 <= *(iVar1 + 0xc)) {
            iVar5 = *(piVar2 + 1) * 0x80 + *piVar2;
            piVar3 = uVar4 * 0x80 + iVar5;
            if (iVar5 != *piVar2) {
                piVar2 = piVar2 + -2;
            }
            if (*(iVar1 + 0x10) < piVar3) {
                *(iVar1 + 0x10) = piVar3;
            }
            if (piVar3 < piVar2) {
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar5;
                *(piVar2 + 1) = uVar4;
                *(piVar2 + 5) = 1;
                return iVar5;
            }
        }
    }
    return 0;
}


/* fcn.00016d14 @ 0x16d14 */

int fcn.00016d14(void)

{
    int iVar1;
    int iVar2;
    
    iVar1 = fcn.0001588e(0x10);
    if (iVar1 == 0) {
        return 0;
    }
    iVar2 = fcn.0001802b(iVar1);
    if (iVar2 != 0) {
        fcn.0001574a(iVar1);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001588e @ 0x1588e */

int fcn.0001588e(uint32_t param_1)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    uint32_t uVar4;
    int iVar5;
    
    iVar1 = fcn.00010d43();
    if (iVar1 == 0) {
        return 0;
    }
    iVar5 = 0;
    if (*(iVar1 + 8) == 0) {
        fcn.0001570b();
    }
    piVar2 = *(iVar1 + 8);
    uVar4 = ((param_1 & 0x7f) != 0) + (param_1 >> 7);
    if ((uVar4 < 0x100) && (piVar2 <= *(iVar1 + 0xc))) {
        piVar3 = piVar2;
        do {
            if ((*(piVar3 + 5) == '\0') && (uVar4 <= *(piVar3 + 1))) {
                iVar1 = piVar2[iVar5 * 2];
                *(piVar2 + iVar5 * 8 + 5) = 1;
                return iVar1;
            }
            iVar5 = iVar5 + 1;
            piVar3 = piVar2 + iVar5 * 2;
        } while (piVar3 <= *(iVar1 + 0xc));
        if (piVar2 <= *(iVar1 + 0xc)) {
            iVar5 = *(piVar2 + 1) * 0x80 + *piVar2;
            piVar3 = uVar4 * 0x80 + iVar5;
            if (iVar5 != *piVar2) {
                piVar2 = piVar2 + -2;
            }
            if (*(iVar1 + 0x10) < piVar3) {
                *(iVar1 + 0x10) = piVar3;
            }
            if (piVar3 < piVar2) {
                *(iVar1 + 8) = piVar2;
                *piVar2 = iVar5;
                *(piVar2 + 1) = uVar4;
                *(piVar2 + 5) = 1;
                return iVar5;
            }
        }
    }
    return 0;
}


/* fcn.0001802b @ 0x1802b */

uint fcn.0001802b(uint *param_1)

{
    int *piVar1;
    int *piVar2;
    uint uVar3;
    int iVar4;
    
    piVar2 = fcn.000157a5(0x80);
    piVar1 = param_1 + 3;
    *piVar1 = piVar2;
    if (piVar2 == NULL) {
        uVar3 = 0xfffffffe;
    }
    else {
        if ((piVar1 < piVar2) || (piVar2 + 0x1f < piVar1)) {
            for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
                *piVar2 = 0;
                piVar2 = piVar2 + 1;
            }
        }
        else {
            iVar4 = 0;
            do {
                *(iVar4 + *piVar1) = 0;
                iVar4 = iVar4 + 4;
            } while (iVar4 < 0x80);
        }
        *param_1 = 0;
        param_1[2] = 0;
        uVar3 = 0;
        param_1[1] = 0x20;
    }
    return uVar3;
}


/* fcn.0001574a @ 0x1574a */

void fcn.0001574a(int param_1)

{
    uint8_t uVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    
    iVar5 = 0;
    iVar3 = fcn.00010d43();
    if (iVar3 != 0) {
        if (*(iVar3 + 8) == 0) {
            fcn.0001570b();
        }
        piVar2 = *(iVar3 + 8);
        if (piVar2 <= *(iVar3 + 0xc)) {
            piVar4 = piVar2;
            do {
                if ((*(piVar4 + 5) == '\x01') && (*piVar4 == param_1)) {
                    uVar1 = *(piVar2 + iVar5 * 2 + 1);
                    iVar3 = piVar2[iVar5 * 2];
                    *(piVar2 + iVar5 * 8 + 5) = 0;
                    fcn.00010a9b(iVar3,uVar1 << 7);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar2 + iVar5 * 2;
            } while (piVar4 <= *(iVar3 + 0xc));
        }
    }
    return;
}


/* fcn.00016d3d @ 0x16d3d */

int fcn.00016d3d(int *param_1,uint8_t *param_2,int param_3)

{
    int iVar1;
    
    if (param_1[1] < 2) {
        iVar1 = fcn.00017fce(param_1,2);
        if (iVar1 != 0) goto code_r0x00016d91;
    }
    fcn.000189ba(param_1);
    while (0 < param_3) {
        param_3 = param_3 + -1;
        iVar1 = fcn.00018430(param_1,8,param_1);
        if (iVar1 != 0) goto code_r0x00016d91;
        *param_1[3] = *param_1[3] | *param_2;
        param_2 = param_2 + 1;
        *param_1 = *param_1 + 1;
    }
    fcn.0001730e();
    iVar1 = 0;
code_r0x00016d91:
    return -(iVar1 != 0);
}


/* fcn.00013501 @ 0x13501 */

void fcn.00013501(int param_1)

{
    if (param_1 != 0) {
        fcn.00016c3f(*(param_1 + 4));
        fcn.00016c3f(*(param_1 + 8));
        fcn.0001574a(param_1);
    }
    return;
}


/* fcn.00016c3f @ 0x16c3f */

void fcn.00016c3f(int param_1)

{
    uint8_t uVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    int iVar5;
    
    if (param_1 == 0) {
        return;
    }
    fcn.00017334(param_1);
    iVar5 = 0;
    iVar3 = fcn.00010d43();
    if (iVar3 != 0) {
        if (*(iVar3 + 8) == 0) {
            fcn.0001570b();
        }
        piVar2 = *(iVar3 + 8);
        if (piVar2 <= *(iVar3 + 0xc)) {
            piVar4 = piVar2;
            do {
                if ((*(piVar4 + 5) == '\x01') && (*piVar4 == param_1)) {
                    uVar1 = *(piVar2 + iVar5 * 2 + 1);
                    iVar3 = piVar2[iVar5 * 2];
                    *(piVar2 + iVar5 * 8 + 5) = 0;
                    fcn.00010a9b(iVar3,uVar1 << 7);
                    return;
                }
                iVar5 = iVar5 + 1;
                piVar4 = piVar2 + iVar5 * 2;
            } while (piVar4 <= *(iVar3 + 0xc));
        }
    }
    return;
}


/* fcn.00017334 @ 0x17334 */

void fcn.00017334(int *param_1)

{
    int iVar1;
    
    if (param_1[3] != 0) {
        iVar1 = 0;
        if (0 < *param_1) {
            do {
                *(param_1[3] + iVar1 * 4) = 0;
                iVar1 = iVar1 + 1;
            } while (iVar1 < *param_1);
        }
        fcn.0001574a(param_1[3]);
        param_1[3] = 0;
        *param_1 = 0;
        param_1[1] = 0;
        param_1[2] = 0;
    }
    return;
}


/* fcn.00013533 @ 0x13533 */

uint * __cdecl fcn.00013533(int32_t arg_8h,int32_t arg_ch)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    int32_t arg_8h_00;
    int arg_ch_00;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    puVar1 = fcn.0001588e(0xc);
    if (puVar1 != NULL) {
        *puVar1 = 0;
        uVar2 = fcn.00016d14();
        puVar1[1] = uVar2;
        iVar3 = fcn.00016d14();
        puVar1[2] = iVar3;
        if ((((puVar1[1] != 0) && (iVar3 != 0)) && (iVar3 = fcn.00019f2d(arg_8h,arg_ch,&var_10h), -1 < iVar3)) &&
           ((var_bh == '\0' && (stack0xfffffff4 == 0x10)))) {
            arg_ch_00 = var_4h + var_10h;
            arg_8h_00 = fcn.000135c2(var_10h,arg_ch_00,puVar1[1]);
            iVar3 = fcn.000135c2(arg_8h_00,arg_ch_00,puVar1[2]);
            if ((iVar3 != 0) && (iVar3 == arg_ch_00)) {
                return puVar1;
            }
        }
        fcn.00013501(puVar1);
    }
    return NULL;
}


/* fcn.00010eef @ 0x10eef */

uint * fcn.00010eef(uint param_1,uint param_2)

{
    uint *puVar1;
    uint uVar2;
    int iVar3;
    int32_t arg_8h;
    int arg_ch;
    int iStack_14;
    char cStack_f;
    int iStack_c;
    int iStack_8;
    
    puVar1 = fcn.0001588e(0xc);
    if (puVar1 != NULL) {
        *puVar1 = 0;
        uVar2 = fcn.00016d14();
        puVar1[1] = uVar2;
        iVar3 = fcn.00016d14();
        puVar1[2] = iVar3;
        if ((((puVar1[1] != 0) && (iVar3 != 0)) && (iVar3 = fcn.00019f2d(param_1,param_2,&iStack_14), -1 < iVar3)) &&
           ((cStack_f == '\0' && (iStack_c == 0x10)))) {
            arg_ch = iStack_8 + iStack_14;
            arg_8h = fcn.000135c2(iStack_14,arg_ch,puVar1[1]);
            iVar3 = fcn.000135c2(arg_8h,arg_ch,puVar1[2]);
            if ((iVar3 != 0) && (iVar3 == arg_ch)) {
                return puVar1;
            }
        }
        fcn.00013501(puVar1);
    }
    return NULL;
}


/* fcn.00010eea @ 0x10eea */

void fcn.00010eea(int param_1)

{
    if (param_1 != 0) {
        fcn.00016c3f(*(param_1 + 4));
        fcn.00016c3f(*(param_1 + 8));
        fcn.0001574a(param_1);
    }
    return;
}


/* fcn.00010e06 @ 0x10e06 */

uint __cdecl fcn.00010e06(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    char cVar1;
    int32_t iVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    
    iVar2 = arg_18h;
    arg_18h = *arg_18h;
    iVar3 = fcn.0001342b(arg_ch,arg_10h,arg_14h,&arg_18h,arg_8h,0);
    if ((((-1 < iVar3) && (0x1a < arg_18h)) && (*arg_14h == '\0')) &&
       ((cVar1 = *(arg_14h + 1), cVar1 == '\0' || (cVar1 == '\x01')))) {
        pcVar5 = arg_14h + 3;
        if (cVar1 == '\0') {
            if (*(arg_14h + 2) != '\0') {
                return 0xffffffff;
            }
            for (pcVar4 = arg_14h + 4; ((pcVar4 < arg_18h + arg_14h && (*pcVar5 == '\0')) && (*pcVar4 == '\0'));
                pcVar4 = pcVar4 + 1) {
                pcVar5 = pcVar5 + 1;
            }
        }
        else {
            if (*(arg_14h + 2) != -1) {
                return 0xffffffff;
            }
            for (; (pcVar5 < arg_18h + arg_14h && (*pcVar5 == -1)); pcVar5 = pcVar5 + 1) {
            }
        }
        if (((7 < pcVar5 + (-2 - arg_14h)) && (pcVar5 + 0x10 < arg_18h + arg_14h)) && (*pcVar5 == '\0')) {
            arg_18h = arg_18h + (arg_14h - (pcVar5 + 1));
            fcn.00010871(arg_14h,pcVar5 + 1,arg_18h);
            *iVar2 = arg_18h;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00019f2d @ 0x19f2d */

int fcn.00019f2d(uint8_t *param_1,int param_2,uint *param_3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t *puVar3;
    int iVar4;
    
    iVar4 = 0;
    fcn.00010a9b(param_3,0x10);
    puVar3 = param_1 + param_2;
    if (param_1 < puVar3) {
        uVar2 = *param_1;
        param_1 = param_1 + 1;
        *(param_3 + 1) = uVar2;
        *(param_3 + 5) = uVar2 >> 6;
        *(param_3 + 6) = *(param_3 + 1) >> 5 & 1;
        if ((*(param_3 + 1) & 0x1f) == 0x1f) {
            param_3[2] = 0;
            do {
                if (puVar3 <= param_1) {
                    return -1;
                }
                uVar2 = *param_1;
                param_1 = param_1 + 1;
                param_3[2] = uVar2 & 0x7f | param_3[2] << 7;
            } while (uVar2 < '\0');
        }
        else {
            param_3[2] = *(param_3 + 1) & 0x1f;
        }
        if (param_1 < puVar3) {
            uVar2 = *param_1;
            param_1 = param_1 + 1;
            if (uVar2 < '\0') {
                if (uVar2 == 0xff) {
                    return -1;
                }
                uVar2 = uVar2 & 0x7f;
                param_3[3] = 0;
                if (4 < uVar2) {
                    return -1;
                }
                while (uVar2 != 0) {
                    uVar2 = uVar2 - 1;
                    if (puVar3 <= param_1) {
                        return -1;
                    }
                    uVar1 = *param_1;
                    param_1 = param_1 + 1;
                    param_3[3] = param_3[3] << 8 | uVar1;
                }
            }
            else {
                param_3[3] = uVar2;
            }
            if ((param_1 <= puVar3) && (param_3[3] <= puVar3 - param_1)) {
                *param_3 = param_1;
                if (((*(param_3 + 5) != '\0') || (param_3[2] != 1)) ||
                   ((param_3[3] == 1 && ((*param_1 == 0 || (*param_1 == 0xff)))))) {
                    iVar4 = 1;
                }
                return iVar4 + -1;
            }
        }
    }
    return -1;
}


/* fcn.0001a012 @ 0x1a012 */

uint __cdecl fcn.0001a012(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_8h,arg_ch,&var_10h);
    if ((((iVar1 < 0) || (var_4h == 0)) || (var_bh != '\0')) || (stack0xfffffff4 != 6)) {
        uVar2 = 0xffffffff;
    }
    else {
        *arg_14h = var_10h + var_4h;
        uVar2 = fcn.0001a064(var_10h,var_4h,arg_10h);
    }
    return uVar2;
}


/* fcn.00010aaf @ 0x10aaf */

uint __cdecl fcn.00010aaf(uint32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    uint uVar1;
    
    if ((arg_10h != 0) && (arg_8h != arg_ch)) {
        uVar1 = fcn.000102a0(arg_8h,arg_ch,arg_10h);
        return uVar1;
    }
    return 0;
}


/* fcn.00010ecc @ 0x10ecc */

void __cdecl fcn.00010ecc(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.0001342b(arg_ch,arg_10h,arg_14h,arg_18h,arg_8h,0);
    return;
}


/* fcn.00010ef4 @ 0x10ef4 */

uint fcn.00010ef4(int *param_1)

{
    uint uVar1;
    
    if ((((param_1[0x14] < 7) || (uVar1 = 1, *param_1 != 1)) || (param_1[1] != 3)) ||
       (((param_1[2] != 6 || (param_1[3] != 1)) || ((param_1[4] != 4 || (param_1[5] != 1)))))) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00012dab @ 0x12dab */

uint __cdecl fcn.00012dab(int8_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,uint32_t arg_18h)

{
    uint uVar1;
    int32_t in_stack_00000050;
    int32_t in_stack_00000054;
    int32_t in_stack_00000058;
    int32_t in_stack_0000005c;
    
    if (arg_8h == 0) {
        uVar1 = 0x14;
        if (*arg_18h == 0x14) {
            fcn.00014a12(1,arg_ch,arg_10h,arg_14h);
            return 0;
        }
    }
    else if (arg_8h == 1) {
        uVar1 = 0x20;
        if (*arg_18h == 0x20) {
            fcn.000133cd(1,arg_ch,arg_10h,arg_14h);
            return 0;
        }
    }
    else {
        if (arg_8h != 2) {
            if (arg_8h == 3) {
                if (*arg_18h == 0x40) {
                    fcn.00015689(in_stack_00000050,in_stack_00000054,in_stack_00000058,in_stack_0000005c);
                    return 0;
                }
                *arg_18h = 0x200;
            }
            else {
                if (arg_8h != 4) {
                    *arg_18h = 0;
                    return 0xffffffff;
                }
                if (*arg_18h == 0x10) {
                    fcn.00019e6e(1,arg_ch,arg_10h,arg_14h);
                    return 0;
                }
                *arg_18h = 0x10;
            }
            return 0xffffffff;
        }
        uVar1 = 0x30;
        if (*arg_18h == 0x30) {
            fcn.00014b33(in_stack_00000050,in_stack_00000054,in_stack_00000058,in_stack_0000005c);
            return 0;
        }
    }
    *arg_18h = uVar1;
    return 0xffffffff;
}


/* fcn.00012223 @ 0x12223 */

int * fcn.00012223(int param_1)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    
    if (param_1 == 0) {
        return NULL;
    }
    iVar1 = *(param_1 + 0xc0);
    piVar3 = *(param_1 + 0xbc);
    if (piVar3 != NULL) {
        do {
            iVar2 = fcn.00015d69(piVar3 + 0x1e,iVar1 + 4);
            if ((iVar2 == 0) && (iVar2 = fcn.00010aaf(piVar3 + 3,iVar1 + 0xac,*(iVar1 + 0xc0)), iVar2 == 0)) {
                return piVar3;
            }
            piVar3 = *piVar3;
        } while (piVar3 != NULL);
    }
    return NULL;
}


/* fcn.00015d69 @ 0x15d69 */

int fcn.00015d69(int *param_1,int param_2)

{
    uint32_t uVar1;
    int *piVar2;
    int iVar3;
    int *piVar4;
    
    piVar2 = param_1;
    if (param_1 == NULL) {
        if (param_2 != 0) {
            return -1;
        }
        return 0;
    }
    if (param_2 != 0) {
        uVar1 = param_1[0x28];
        if (uVar1 < *(param_2 + 0xa0)) {
            return -1;
        }
        if (uVar1 <= *(param_2 + 0xa0)) {
            param_1 = NULL;
            if (uVar1 != 0) {
                piVar4 = piVar2;
                do {
                    iVar3 = *(piVar4 + (param_2 - piVar2));
                    if ((*piVar4 < iVar3) || (iVar3 < *piVar4)) {
                        return -1;
                    }
                    iVar3 = fcn.00016b07(piVar4[1],*(piVar4 + (param_2 - piVar2) + 4));
                    if (iVar3 != 0) {
                        return iVar3;
                    }
                    piVar4 = piVar4 + 2;
                    param_1 = param_1 + 1;
                } while (param_1 < piVar2[0x28]);
            }
            iVar3 = fcn.00016b07(piVar2[0x29],*(param_2 + 0xa4));
            return iVar3;
        }
    }
    return 1;
}


/* fcn.00016b07 @ 0x16b07 */

uint __cdecl fcn.00016b07(int32_t arg_8h,uint32_t arg_ch)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    
    if (arg_8h == 0) {
        if (arg_ch == 0) {
            uVar1 = 0;
        }
        else {
            uVar1 = 0xffffffff;
        }
    }
    else if (arg_ch == 0) {
        uVar1 = 1;
    }
    else {
        iVar2 = fcn.000194d7(arg_8h);
        iVar3 = fcn.000194d7(arg_ch);
        if (iVar2 != 0) {
            if (iVar3 != 0) {
                fcn.00016b92();
                fcn.00016b92(iVar3);
                uVar1 = fcn.00010980(iVar2,iVar3);
                fcn.0001574a(iVar2);
                fcn.0001574a(iVar3);
                return uVar1;
            }
            fcn.0001574a(iVar2);
        }
        if (iVar3 != 0) {
            fcn.0001574a(iVar3);
        }
        uVar1 = fcn.00010980(arg_8h,arg_ch);
    }
    return uVar1;
}


/* fcn.0001146c @ 0x1146c */

uint __cdecl fcn.0001146c(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,uint32_t arg_14h)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.000169ee(*(arg_8h + 0xc0) + 0x248);
    if (((iVar1 == 0) || (iVar1 = *(arg_8h + 0xc0), *(iVar1 + 0x298) != 7)) || (*(iVar1 + 0x25c) != 1)) {
code_r0x000114c0:
        uVar2 = 0xffffffff;
    }
    else {
        iVar1 = *(iVar1 + 0x260);
        if (iVar1 != 1) {
            if (iVar1 == 10) {
                uVar2 = fcn.000110e5(arg_8h,arg_ch,arg_10h,arg_14h);
                return uVar2;
            }
            if (((iVar1 != 0xb) && (iVar1 != 0xc)) && (iVar1 != 0xd)) goto code_r0x000114c0;
        }
        uVar2 = fcn.00010f26(arg_8h,arg_ch,arg_10h,arg_14h);
    }
    return uVar2;
}


/* fcn.000169ee @ 0x169ee */

uint fcn.000169ee(int param_1)

{
    int iVar1;
    
    if (((4 < *(param_1 + 0x50)) && (iVar1 = fcn.00016a10(param_1), iVar1 != 0)) && (*(param_1 + 0x10) == 1)) {
        return 1;
    }
    return 0;
}


/* fcn.000110e5 @ 0x110e5 */

uint __cdecl fcn.000110e5(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,uint32_t arg_14h)

{
    uint32_t uVar1;
    int32_t iVar2;
    int iVar3;
    int arg_14h_00;
    int iVar4;
    
    iVar2 = arg_8h;
    if ((((arg_8h != 0) && (arg_ch != 0)) && (arg_10h != 0)) &&
       (iVar3 = fcn.00010eef(*(arg_ch + 0x224),*(arg_ch + 0x228)), iVar3 != 0)) {
        arg_8h = *(*(iVar2 + 0xc0) + 0x2f8);
        arg_14h_00 = fcn.000157a5(arg_8h);
        if (arg_14h_00 == 0) {
            fcn.00010eea(iVar3);
        }
        else {
            iVar4 = fcn.00010ecc(iVar3,*(*(iVar2 + 0xc0) + 0x2f4),arg_8h,arg_14h_00,&arg_8h);
            if (iVar4 < 0) {
                fcn.00010eea(iVar3);
                fcn.0001574a(arg_14h_00);
            }
            else {
                fcn.00010eea(iVar3);
                uVar1 = *(*(iVar2 + 0xc0) + 0x2f0);
                if ((uVar1 <= arg_14h) &&
                   (iVar3 = fcn.00014c90(arg_10h,arg_14h,arg_14h_00,arg_8h,uVar1,arg_8h << 3), iVar3 == 0)) {
                    fcn.0001574a(arg_14h_00);
                    return 0;
                }
                fcn.0001574a(arg_14h_00);
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00010f26 @ 0x10f26 */

uint __cdecl fcn.00010f26(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,uint32_t arg_14h)

{
    uint32_t uVar1;
    int32_t iVar2;
    int iVar3;
    int arg_14h_00;
    int iVar4;
    int32_t var_68h;
    int32_t var_14h;
    uint32_t var_fh;
    int32_t var_8h;
    uint32_t var_4h;
    
    iVar2 = arg_8h;
    if ((((arg_8h != 0) && (arg_ch != 0)) && (arg_10h != 0)) &&
       (iVar3 = fcn.00010eef(*(arg_ch + 0x224),*(arg_ch + 0x228)), iVar3 != 0)) {
        arg_8h = *(*(iVar2 + 0xc0) + 0x2f8);
        arg_14h_00 = fcn.000157a5(arg_8h);
        if (arg_14h_00 == 0) {
            fcn.00010eea(iVar3);
        }
        else {
            iVar4 = fcn.00010e06(iVar3,*(*(iVar2 + 0xc0) + 0x2f4),arg_8h,arg_14h_00,&arg_8h);
            if (iVar4 < 0) {
                fcn.00010eea(iVar3);
                fcn.0001574a(arg_14h_00);
            }
            else {
                fcn.00010eea(iVar3);
                iVar3 = fcn.00019f2d(arg_14h_00,arg_8h,&var_14h);
                if (((-1 < iVar3) && (var_fh == '\0')) && (stack0xfffffff0 == 0x10)) {
                    iVar4 = var_8h + var_14h;
                    iVar3 = fcn.00019f2d(var_14h,iVar4 - var_14h,&var_14h);
                    if (((-1 < iVar3) && (var_fh == '\0')) && (stack0xfffffff0 == 0x10)) {
                        uVar1 = var_8h + var_14h;
                        iVar3 = fcn.0001a012(var_14h,var_8h,&var_68h,&var_4h);
                        if (((iVar3 == 0) &&
                            ((uVar1 <= var_4h ||
                             ((((iVar3 = fcn.00019f2d(var_4h,uVar1 - var_4h,&var_14h), -1 < iVar3 && (var_fh == '\0')
                                ) && (stack0xfffffff0 == 5)) && (var_8h + var_14h == uVar1)))))) &&
                           (((iVar3 = fcn.00019f2d(uVar1,iVar4 - uVar1,&var_14h), -1 < iVar3 && (var_fh == '\0')) &&
                            (((stack0xfffffff0 == 4 &&
                              ((arg_8h + arg_14h_00 <= var_8h + var_14h && (var_8h == arg_14h)))) &&
                             (iVar3 = fcn.00010aaf(var_14h,arg_10h,var_8h), iVar3 == 0)))))) {
                            fcn.0001574a(arg_14h_00);
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00016a3e @ 0x16a3e */

uint fcn.00016a3e(int *param_1)

{
    uint uVar1;
    
    if ((((param_1[0x14] != 6) || (uVar1 = 1, *param_1 != 1)) || (param_1[1] != 3)) ||
       (((param_1[2] != 0xe || (param_1[3] != 3)) || ((param_1[4] != 2 || (param_1[5] != 0x1a)))))) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00016a72 @ 0x16a72 */

uint fcn.00016a72(uint param_1)

{
    uint uVar1;
    ulong uVar2;
    
    uVar2 = fcn.00016a8c(param_1);
    if ((uVar2 == 0) || (uVar1 = 1, *((uVar2 >> 0x20) + 0x20) != 1)) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00016acf @ 0x16acf */

uint fcn.00016acf(uint param_1)

{
    ulong uVar1;
    
    uVar1 = fcn.00016a8c(param_1);
    if ((uVar1 != 0) && (*((uVar1 >> 0x20) + 0x20) == 2)) {
        return 1;
    }
    return 0;
}


/* fcn.00016a8c @ 0x16a8c */

uint fcn.00016a8c(int *param_1)

{
    uint uVar1;
    
    if ((((((param_1[0x14] != 9) || (*param_1 != 2)) || (param_1[1] != 0x10)) ||
         ((param_1[2] != 0x348 || (uVar1 = 1, param_1[3] != 1)))) ||
        ((param_1[4] != 0x65 || ((param_1[5] != 3 || (param_1[6] != 4)))))) || (param_1[7] != 2)) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00016aeb @ 0x16aeb */

uint fcn.00016aeb(uint param_1)

{
    ulong uVar1;
    
    uVar1 = fcn.00016a8c(param_1);
    if ((uVar1 != 0) && (*((uVar1 >> 0x20) + 0x20) == 3)) {
        return 1;
    }
    return 0;
}


/* fcn.00011acc @ 0x11acc */

int __cdecl fcn.00011acc(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int32_t iVar1;
    int32_t iVar2;
    int iVar3;
    int iVar4;
    int32_t var_64h;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = arg_8h;
    iVar4 = arg_ch + arg_8h;
    iVar3 = iVar4 - arg_8h;
    arg_8h = iVar4;
    iVar3 = fcn.00019f2d(iVar1,iVar3,&var_10h);
    if ((iVar3 < 0) || (var_bh != '\x02')) {
        return 0;
    }
    iVar3 = fcn.00019f2d(var_10h,arg_8h - var_10h,&var_10h);
    iVar2 = arg_10h;
    if (((-1 < iVar3) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
        arg_8h = var_4h + var_10h;
        *(arg_10h + 0x58) = var_4h;
        *(arg_10h + 0x54) = var_10h;
        iVar3 = fcn.00019f2d(var_10h,arg_8h - iVar1,&var_10h);
        if ((((-1 < iVar3) && (var_bh == '\0')) &&
            ((stack0xfffffff4 == 0x10 &&
             ((iVar3 = fcn.00019f2d(var_10h + var_4h,iVar4 - (var_10h + var_4h),&var_10h), -1 < iVar3 &&
              (var_bh == '\0')))))) && (stack0xfffffff4 == 0x10)) {
            arg_8h = var_4h + var_10h;
            iVar3 = fcn.00019f2d(var_10h,arg_8h - var_10h,&var_10h);
            if (((-1 < iVar3) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
                iVar3 = fcn.0001a012(var_10h,var_4h,&var_64h,&arg_8h);
                if ((iVar3 == 0) &&
                   (((iVar3 = fcn.00016a3e(&var_64h), iVar3 != 0 || (iVar3 = fcn.00016a72(&var_64h), iVar3 != 0)) ||
                    ((iVar3 = fcn.00016acf(&var_64h), iVar3 != 0 || (iVar3 = fcn.00016aeb(&var_64h), iVar3 != 0))))))
                {
                    arg_8h = iVar4;
                    arg_ch = var_4h + var_10h;
                    iVar3 = fcn.00012940(&arg_ch,iVar4 - (var_4h + var_10h),iVar2 + 0xb0,iVar2 + 0xb4);
                    return -(iVar3 != 0);
                }
            }
        }
    }
    return -1;
}


/* fcn.00011d27 @ 0x11d27 */

uint fcn.00011d27(int param_1,uint8_t *param_2,int param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    uint32_t *noname_0;
    int iVar4;
    uint8_t *puVar5;
    uint32_t *puVar6;
    uint uVar7;
    uint uVar8;
    uint8_t *puStack_64;
    char cStack_5f;
    int iStack_5c;
    uint32_t uStack_58;
    uchar auStack_54 [24];
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_4;
    
    uVar2 = param_2;
    if ((0xff < param_2) && (noname_0 = fcn.0001588e(0x2fc), noname_0 != NULL)) {
        uVar8 = 0;
        uVar7 = 0x2fc;
        puVar6 = noname_0;
        fcn.00010a9b(noname_0,0x2fc);
        puVar5 = uVar2 + param_1;
        param_2 = param_1;
        iVar4 = fcn.00019f2d(param_1,puVar5 - param_1,&puStack_64,puVar6,uVar7,uVar8);
        if ((-1 < iVar4) && ((cStack_5f == '\x02' && (iStack_5c == 0)))) {
            param_2 = puStack_64;
            iVar4 = fcn.00019f2d(puStack_64,puVar5 - puStack_64,&puStack_64);
            if ((-1 < iVar4) && ((cStack_5f == '\0' && (iStack_5c == 4)))) {
                param_2 = puStack_64;
                *(param_3 + 0x58) = uStack_58;
                *(param_3 + 0x54) = puStack_64;
                iVar4 = fcn.00019f2d(puStack_64,uStack_58,&puStack_64);
                uVar2 = uStack_58;
                puVar3 = puStack_64;
                if ((-1 < iVar4) && ((cStack_5f == '\0' && (iStack_5c == 0x10)))) {
                    param_2 = puStack_64;
                    iVar4 = fcn.00019f2d(puStack_64,uStack_58,&puStack_64);
                    if ((-1 < iVar4) && (((cStack_5f == '\0' && (iStack_5c == 2)) && (uStack_58 == 1)))) {
                        uVar1 = *puStack_64;
                        param_2 = puStack_64 + 1;
                        *noname_0 = uVar1;
                        if (((((uVar1 == 1) &&
                              (iVar4 = fcn.0001a012(param_2,puVar3 + (uVar2 - param_2),auStack_54,&param_2),
                              iVar4 == 0)) &&
                             ((iVar4 = fcn.00010ef4(auStack_54), iVar4 != 0 &&
                              ((iStack_4 == 10 && (iStack_3c == 0x259)))))) && (iStack_38 == 10)) &&
                           ((((iStack_34 == 3 && (iStack_30 == 1)) &&
                             (iVar4 = fcn.00019f2d(param_2,puVar5 - param_2,&puStack_64), uVar2 = uStack_58,
                             puVar3 = puStack_64, -1 < iVar4)) && ((cStack_5f == '\0' && (iStack_5c == 0x10)))))) {
                            puVar6 = noname_0 + 0x31;
                            param_2 = puStack_64;
                            iVar4 = fcn.00015e03(puStack_64,uStack_58,puVar6,&param_2);
                            if ((iVar4 == 0) &&
                               ((((iVar4 = fcn.00016a3e(puVar6), iVar4 != 0 ||
                                  (iVar4 = fcn.00016a72(puVar6), iVar4 != 0)) ||
                                 ((iVar4 = fcn.00016acf(puVar6), iVar4 != 0 ||
                                  (iVar4 = fcn.00016aeb(puVar6), iVar4 != 0)))) &&
                                ((((iVar4 = fcn.00012940(&param_2,puVar3 + (uVar2 - param_2),noname_0 + 0x5d,
                                                         noname_0 + 0x5e), iVar4 == 0 &&
                                   (iVar4 = fcn.00019f2d(param_2,puVar5 - param_2,&puStack_64), -1 < iVar4)) &&
                                  (cStack_5f == '\0')) && (iStack_5c == 2)))))) {
                                fcn.00010871(noname_0 + 0x2b,puStack_64,uStack_58);
                                noname_0[0x30] = uStack_58;
                                param_2 = puStack_64 + uStack_58;
                                if (((param_2 <= puVar5) &&
                                    (iVar4 = fcn.00019f2d(param_2,puVar5 - param_2,&puStack_64), -1 < iVar4)) &&
                                   ((cStack_5f == '\0' &&
                                    (iVar4 = fcn.000167c7(puStack_64,uStack_58,iStack_5c,noname_0 + 0x5f),
                                    -1 < iVar4)))) {
                                    param_2 = puStack_64 + uStack_58;
                                    iVar4 = fcn.00019f2d(param_2,puVar5 - param_2,&puStack_64);
                                    if (((-1 < iVar4) && (cStack_5f == '\0')) && (iStack_5c == 0x10)) {
                                        param_2 = puStack_64 + uStack_58;
                                        iVar4 = fcn.00019f2d(param_2,puVar5 - param_2,&puStack_64);
                                        if (((-1 < iVar4) && (cStack_5f == '\x02')) && (iStack_5c == 0)) {
                                            param_2 = puStack_64;
                                            iVar4 = fcn.00019f2d(puStack_64,puVar5 - puStack_64,&puStack_64);
                                            if (((-1 < iVar4) && (cStack_5f == '\x02')) && (iStack_5c == 4)) {
                                                param_2 = puStack_64;
                                                iVar4 = fcn.0001612a(puStack_64,puVar5 - puStack_64,noname_0 + 1,
                                                                     &param_2);
                                                if (iVar4 == 0) {
                                                    *(param_3 + 0xb8) = noname_0;
                                                    return 0;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.000128f2 @ 0x128f2 */

int32_t __cdecl fcn.000128f2(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int32_t iVar1;
    uint uVar2;
    int32_t var_4h;
    
    iVar1 = arg_8h;
    var_4h = -1;
    uVar2 = fcn.00012280(&arg_8h,arg_ch,&var_4h);
    if (var_4h == 0) {
        *(arg_10h + 0xc0) = uVar2;
        fcn.000111bb(arg_8h,(iVar1 - arg_8h) + arg_ch,arg_10h);
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.00012280 @ 0x12280 */

uint32_t * fcn.00012280(int *param_1,int param_2,uint *param_3)

{
    uint8_t uVar1;
    uint32_t *arg_8h;
    int iVar2;
    uint32_t arg_8h_00;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint32_t *puVar6;
    uint uVar7;
    uint uVar8;
    uint8_t *puStack_70;
    uint8_t *puStack_6c;
    uchar auStack_68 [4];
    uint8_t *puStack_64;
    char cStack_5f;
    int iStack_5c;
    int iStack_58;
    uchar auStack_54 [20];
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_4;
    
    if ((param_3 != NULL) && (param_1 != NULL)) {
        *param_3 = 0xffffffff;
        puStack_70 = *param_1;
        puVar5 = puStack_70 + param_2;
        arg_8h = fcn.0001588e(0x2fc);
        if (arg_8h != NULL) {
            uVar8 = 0;
            uVar7 = 0x2fc;
            puVar6 = arg_8h;
            fcn.00010a9b(arg_8h,0x2fc);
            iVar2 = fcn.00019f2d(puStack_70,param_2,&puStack_64,puVar6,uVar7,uVar8);
            if (((-1 < iVar2) && (cStack_5f == '\0')) && (iStack_5c == 0x10)) {
                puVar4 = puStack_64 + iStack_58;
                puStack_70 = puStack_64;
                if (((puVar4 <= puVar5) &&
                    (iVar2 = fcn.00019f2d(puStack_64,puVar4 - puStack_64,&puStack_64), -1 < iVar2)) &&
                   ((cStack_5f == '\0' && ((iStack_5c == 2 && (iStack_58 == 1)))))) {
                    uVar1 = *puStack_64;
                    puStack_70 = puStack_64 + 1;
                    *arg_8h = uVar1;
                    if ((uVar1 == 1) &&
                       (iVar2 = fcn.00019f2d(puStack_70,puVar4 - puStack_70,&puStack_64), -1 < iVar2)) {
                        puStack_70 = puStack_64;
                        iVar2 = fcn.00011c70(arg_8h,&puStack_70,param_2);
                        if ((((iVar2 == 0) &&
                             (iVar2 = fcn.00019f2d(puStack_70,puVar5 - puStack_70,&puStack_64), -1 < iVar2)) &&
                            (iVar2 = fcn.00015e03(puStack_70,puVar5 - puStack_70,arg_8h + 0x31,&puStack_70),
                            iVar2 == 0)) &&
                           (iVar2 = fcn.00019f2d(puStack_70,puVar5 - puStack_70,&puStack_64), -1 < iVar2)) {
                            if (cStack_5f == '\x02') {
                                arg_8h[0x47] = puStack_64 + (iStack_58 - puStack_70);
                                fcn.0001574a(arg_8h[0x46]);
                                arg_8h_00 = fcn.000157a5(arg_8h[0x47]);
                                arg_8h[0x46] = arg_8h_00;
                                if (arg_8h_00 == 0) {
                                    return arg_8h;
                                }
                                fcn.00010871(arg_8h_00,puStack_70,arg_8h[0x47]);
                                *arg_8h[0x46] = 0x31;
                                puStack_6c = puStack_64 + iStack_58;
                                puVar5 = puStack_64;
                                if (puStack_64 < puStack_6c) {
                                    do {
                                        puStack_70 = puVar5;
                                        iVar2 = fcn.00019f2d(puVar5,puStack_6c - puVar5,&puStack_64);
                                        if (iVar2 < 0) {
                                            return arg_8h;
                                        }
                                        if (cStack_5f != '\0') {
                                            return arg_8h;
                                        }
                                        if (iStack_5c != 0x10) {
                                            return arg_8h;
                                        }
                                        puVar5 = puStack_64 + iStack_58;
                                        puStack_70 = puStack_64;
                                        iVar2 = fcn.0001a012(puStack_64,puVar5 - puStack_64,auStack_54,&puStack_70);
                                        if (iVar2 != 0) {
                                            return arg_8h;
                                        }
                                        iVar2 = fcn.00019f2d(puStack_70,puVar5 - puStack_70,&puStack_64);
                                        if (iVar2 < 0) {
                                            return arg_8h;
                                        }
                                        puVar4 = puVar5;
                                        if ((cStack_5f == '\0') && (iStack_5c == 0x11)) {
                                            puStack_70 = puStack_64;
                                            puVar4 = puStack_64 + iStack_58;
                                        }
                                        iVar2 = fcn.000169ee(auStack_54);
                                        if (((iVar2 == 0) || (iStack_4 != 7)) || ((iStack_40 != 9 || (iStack_3c != 3))))
                                        {
                                            iVar2 = fcn.000169ee(auStack_54);
                                            if ((((iVar2 == 0) || (iStack_4 != 7)) || (iStack_40 != 9)) ||
                                               (iStack_3c != 5)) {
                                                iVar2 = fcn.000169ee(auStack_54);
                                                if (((iVar2 == 0) || (iStack_4 != 7)) ||
                                                   ((iStack_40 != 9 || (iStack_3c != 4)))) {
                                                    iVar2 = fcn.000169ee(auStack_54);
                                                    if ((((iVar2 != 0) && (iStack_4 == 9)) && (iStack_40 == 9)) &&
                                                       (((iStack_3c == 0x10 && (iStack_38 == 2)) && (iStack_34 == 0xc)))
                                                       ) {
                                                        puStack_70 = puStack_64;
                                                        iVar2 = fcn.00019f2d(puStack_64,iStack_58,&puStack_64);
                                                        if (iVar2 < 0) {
                                                            return arg_8h;
                                                        }
                                                        if (cStack_5f != '\0') {
                                                            return arg_8h;
                                                        }
                                                        if (iStack_5c != 0x10) {
                                                            return arg_8h;
                                                        }
                                                        puStack_70 = puStack_64;
                                                        iVar2 = fcn.00019f2d(puStack_64,iStack_58,&puStack_64);
                                                        if (iVar2 < 0) {
                                                            return arg_8h;
                                                        }
                                                        if (cStack_5f != '\0') {
                                                            return arg_8h;
                                                        }
                                                        if (iStack_5c != 0x10) {
                                                            return arg_8h;
                                                        }
                                                        puStack_70 = puStack_64;
                                                        iVar3 = fcn.00019f2d(puStack_64,iStack_58,&puStack_64);
                                                        iVar2 = iStack_58;
                                                        puVar4 = puStack_64;
                                                        if (iVar3 < 0) {
                                                            return arg_8h;
                                                        }
                                                        if (cStack_5f != '\0') {
                                                            return arg_8h;
                                                        }
                                                        if (iStack_5c != 0x10) {
                                                            return arg_8h;
                                                        }
                                                        puStack_70 = puStack_64;
                                                        iVar3 = fcn.00012940(&puStack_70,iStack_58,arg_8h + 0x60,
                                                                             arg_8h + 0x61);
                                                        if (iVar3 != 0) {
                                                            return arg_8h;
                                                        }
                                                        iVar2 = fcn.00019f2d(puStack_70,puVar4 + (iVar2 - puStack_70),
                                                                             &puStack_64);
                                                        if (iVar2 < 0) {
                                                            return arg_8h;
                                                        }
                                                        if (cStack_5f != '\0') {
                                                            return arg_8h;
                                                        }
                                                        if (iStack_5c != 0x10) {
                                                            return arg_8h;
                                                        }
                                                        puStack_70 = puStack_64;
                                                        iVar2 = fcn.00019f2d(puStack_64,iStack_58,&puStack_64);
                                                        if (iVar2 < 0) {
                                                            return arg_8h;
                                                        }
                                                        if (cStack_5f != '\0') {
                                                            return arg_8h;
                                                        }
                                                        if (iStack_5c != 0x10) {
                                                            return arg_8h;
                                                        }
                                                        puStack_70 = puStack_64;
                                                        iVar2 = fcn.00019f2d(puStack_64,iStack_58,&puStack_64);
                                                        if (iVar2 < 0) {
                                                            return arg_8h;
                                                        }
                                                        if (cStack_5f != '\x02') {
                                                            return arg_8h;
                                                        }
                                                        if (iStack_5c != 4) {
                                                            return arg_8h;
                                                        }
                                                        puStack_70 = puStack_64;
                                                        fcn.00011c70(arg_8h,&puStack_70,param_2);
                                                    }
                                                }
                                                else {
                                                    iVar2 = fcn.00012940(&puStack_70,puVar4 - puStack_70,arg_8h + 0x5d
                                                                         ,arg_8h + 0x5e);
                                                    if (iVar2 != 0) {
                                                        return arg_8h;
                                                    }
                                                }
                                            }
                                            else {
                                                iVar2 = fcn.00019f2d(puStack_70,puVar4 - puStack_70,&puStack_64);
                                                if (iVar2 < 0) {
                                                    return arg_8h;
                                                }
                                                if (cStack_5f != '\0') {
                                                    return arg_8h;
                                                }
                                                iVar2 = fcn.000167c7(puStack_64,iStack_58,iStack_5c,arg_8h + 0x5f);
                                                if (iVar2 < 0) {
                                                    return arg_8h;
                                                }
                                            }
                                        }
                                        else {
                                            iVar2 = fcn.0001a012(puStack_70,puVar4 - puStack_70,auStack_54,auStack_68
                                                                );
                                            if (iVar2 != 0) {
                                                return arg_8h;
                                            }
                                            fcn.0001a012(puStack_70,puVar4 - puStack_70,arg_8h + 0x48,&puStack_70);
                                        }
                                    } while (puVar5 < puStack_6c);
                                }
                                puStack_70 = puVar5;
                                if (arg_8h[0x5d] == 0) {
                                    return arg_8h;
                                }
                            }
                            iVar2 = *param_1;
                            iVar3 = fcn.00012e85(puStack_70,(iVar2 + param_2) - puStack_70,arg_8h + 0x92,&puStack_70)
                            ;
                            if ((iVar3 == 0) &&
                               (iVar2 = fcn.00012940(&puStack_70,(iVar2 + param_2) - puStack_70,arg_8h + 0xbd,
                                                     arg_8h + 0xbe), iVar2 == 0)) {
                                *param_3 = 0;
                                *param_1 = puStack_70;
                            }
                        }
                    }
                }
            }
            return arg_8h;
        }
    }
    return NULL;
}


/* fcn.000111bb @ 0x111bb */

uint __cdecl fcn.000111bb(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int iVar2;
    int32_t var_64h;
    uint32_t var_4ch;
    uint32_t var_48h;
    uint32_t var_44h;
    uint32_t var_40h;
    uint32_t var_14h;
    int32_t var_10h;
    uint32_t var_bh;
    uint32_t var_4h;
    
    if ((((0xff < arg_ch) && (iVar1 = fcn.00019f2d(arg_8h,arg_ch,&var_10h), -1 < iVar1)) && (var_bh == '\x02')) &&
       (stack0xfffffff4 == 1)) {
        iVar2 = var_4h + var_10h;
        arg_ch = var_10h;
        iVar1 = fcn.00019f2d(var_10h,iVar2 - var_10h,&var_10h);
        if (((-1 < iVar1) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
            arg_ch = var_10h;
            iVar1 = fcn.0001a012(var_10h,iVar2 - var_10h,&var_64h,&arg_ch);
            if (((((iVar1 == 0) && (iVar1 = fcn.00010ef4(&var_64h), iVar1 != 0)) &&
                 ((var_14h == 10 && (((var_4ch == 0x137 && (var_48h == 3)) && (var_44h == 3)))))) &&
                ((var_40h == 1 && (iVar1 = fcn.00019f2d(arg_ch,iVar2 - arg_ch,&var_10h), -1 < iVar1)))) &&
               ((var_bh == '\0' &&
                (((stack0xfffffff4 == 0x11 && (arg_ch = var_10h, 0xff < var_4h)) &&
                 (iVar1 = fcn.000114eb(var_10h,var_4h), iVar1 != 0)))))) {
                *(arg_10h + 0xc4) = iVar1;
                *(arg_10h + 0xb8) = *(iVar1 + 0xb8);
                return 0;
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00012940 @ 0x12940 */

uint fcn.00012940(int *param_1,uint param_2,uint32_t *param_3,uint32_t *param_4)

{
    int iVar1;
    uint32_t arg_8h;
    int iStack_10;
    char cStack_b;
    int iStack_8;
    uint32_t uStack_4;
    
    if ((((param_1 != NULL) && (param_3 != NULL)) && (param_4 != NULL)) &&
       (((iVar1 = fcn.00019f2d(*param_1,param_2,&iStack_10), -1 < iVar1 && (cStack_b == '\0')) &&
        ((iStack_8 == 4 && (uStack_4 != 0)))))) {
        fcn.0001574a(*param_3);
        arg_8h = fcn.000157a5(uStack_4);
        *param_3 = arg_8h;
        if (arg_8h != 0) {
            fcn.00010871(arg_8h,iStack_10,uStack_4);
            *param_4 = uStack_4;
            *param_1 = uStack_4 + iStack_10;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.0001612a @ 0x1612a */

uint fcn.0001612a(int param_1,int param_2,int param_3,uint *param_4)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint uVar5;
    char *pcVar6;
    char *pcVar7;
    char *pcStack_6c;
    char *pcStack_68;
    char *pcStack_64;
    char cStack_5f;
    int iStack_5c;
    uint32_t uStack_58;
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_4;
    
    iVar2 = fcn.00019f2d(param_1,param_2,&pcStack_64);
    if ((((-1 < iVar2) && (cStack_5f == '\0')) && (iStack_5c == 0x10)) &&
       (pcStack_68 = pcStack_64 + uStack_58, pcStack_68 <= param_1 + param_2)) {
        *param_4 = pcStack_68;
        pcVar7 = pcStack_64;
code_r0x0001641f:
        if (pcStack_68 <= pcVar7) goto code_r0x00016427;
        iVar2 = fcn.00019f2d(pcVar7,pcStack_68 - pcVar7,&pcStack_64);
        if (((iVar2 < 0) || (cStack_5f != '\0')) || (iStack_5c != 0x11)) goto code_r0x0001642b;
        pcVar7 = pcStack_64 + uStack_58;
        iVar2 = fcn.00019f2d(pcStack_64,pcVar7 - pcStack_64,&pcStack_64);
        uVar3 = uStack_58;
        pcVar6 = pcStack_64;
        if (((iVar2 < 0) || (cStack_5f != '\0')) || (iStack_5c != 0x10)) goto code_r0x0001642b;
        pcStack_6c = pcStack_64;
        iVar2 = fcn.0001a012(pcStack_64,uStack_58,&iStack_54,&pcStack_6c);
        if (((iVar2 != 0) || (iVar2 = fcn.00019f2d(pcStack_6c,pcVar6 + (uVar3 - pcStack_6c),&pcStack_64), iVar2 < 0))
           || (cStack_5f != '\0')) goto code_r0x0001642b;
        if (iStack_4 != 4) goto code_r0x000162bf;
        if (((iStack_54 != 2) || (iStack_50 != 5)) || (iStack_4c != 4)) goto code_r0x0001641f;
        if (iStack_48 == 3) {
            uVar5 = 2;
        }
        else if (iStack_48 == 6) {
            uVar5 = 3;
        }
        else if (iStack_48 == 7) {
            uVar5 = 4;
        }
        else if (iStack_48 == 8) {
            uVar5 = 5;
        }
        else {
            if (iStack_48 != 10) {
                if (iStack_48 == 0xb) {
                    uVar5 = 7;
                    goto code_r0x000163b4;
                }
                goto code_r0x0001641f;
            }
            uVar5 = 6;
        }
        goto code_r0x000163b4;
    }
code_r0x0001642b:
    uVar5 = 0xffffffff;
code_r0x0001642e:
    return uVar5;
code_r0x000162bf:
    if (iStack_4 != 7) goto code_r0x0001641f;
    if (iStack_54 == 1) {
        if (((iStack_50 == 2) && (iStack_4c == 0x348)) &&
           (((iStack_48 == 0x1bb8d && ((iStack_44 == 1 && (iStack_40 == 9)))) && (iStack_3c == 1)))) {
            fcn.0001574a(*(param_3 + 0xa4));
            uVar3 = fcn.000157a5(uStack_58 + 1);
            *(param_3 + 0xa4) = uVar3;
            if (uVar3 == 0) goto code_r0x0001642b;
            fcn.00010871(uVar3,pcStack_64,uStack_58);
            *(uStack_58 + *(param_3 + 0xa4)) = 0;
        }
        goto code_r0x0001641f;
    }
    if ((((iStack_54 != 0) || (iStack_50 != 9)) || (iStack_4c != 0x926)) ||
       (((iStack_48 != 0x124f92c || (iStack_44 != 100)) || ((iStack_40 != 1 || (iStack_3c != 0x19))))))
    goto code_r0x0001641f;
    uVar5 = 1;
code_r0x000163b4:
    if (*(param_3 + 0xa0) == 0x14) goto code_r0x0001642b;
    pcVar4 = fcn.000157a5(uStack_58 + 1);
    pcVar6 = pcVar4;
    pcVar1 = pcStack_64;
    uVar3 = uStack_58;
    if (pcVar4 == NULL) goto code_r0x0001642b;
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        if (*pcVar1 != '\0') {
            *pcVar6 = *pcVar1;
            pcVar6 = pcVar6 + 1;
        }
        pcVar1 = pcVar1 + 1;
    }
    pcVar4[uStack_58] = '\0';
    *(param_3 + *(param_3 + 0xa0) * 8) = uVar5;
    *(param_3 + 4 + *(param_3 + 0xa0) * 8) = pcVar4;
    *(param_3 + 0xa0) = *(param_3 + 0xa0) + 1;
    goto code_r0x0001641f;
code_r0x00016427:
    uVar5 = 0;
    goto code_r0x0001642e;
}


/* fcn.00015e03 @ 0x15e03 */

int __cdecl fcn.00015e03(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_14h;
    uint32_t var_fh;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_8h,arg_ch,&var_14h);
    if (((-1 < iVar1) && (var_fh == '\0')) && (stack0xfffffff0 == 0x10)) {
        uVar2 = var_8h + var_14h;
        var_4h = var_14h;
        if (uVar2 <= arg_8h + arg_ch) {
            *arg_14h = uVar2;
            iVar1 = fcn.0001a012(var_14h,uVar2 - var_14h,arg_10h,&var_4h);
            return -(iVar1 != 0);
        }
    }
    return -1;
}


/* fcn.000167c7 @ 0x167c7 */

uint fcn.000167c7(int param_1,int param_2,int param_3,uint *param_4)

{
    uint *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    iVar4 = param_1;
    iVar3 = 2;
    if (param_3 == 0x17) {
        if (param_2 != 0xd) {
            return 0xffffffff;
        }
        if (*(param_1 + 0xc) != 'Z') {
            return 0xffffffff;
        }
        iVar2 = fcn.00019496(param_1,2,&param_1);
        if (iVar2 == -1) {
            return 0xffffffff;
        }
        if (param_1 < 0x32) {
            param_1 = param_1 + 2000;
        }
        else {
            param_1 = param_1 + 0x76c;
        }
    }
    else {
        if ((param_3 != 0x18) || (*(param_1 + -1 + param_2) != 'Z')) {
            return 0xffffffff;
        }
        iVar3 = 4;
        iVar2 = fcn.00019496(param_1,4,&param_1);
        if (iVar2 == -1) {
            return 0xffffffff;
        }
    }
    iVar4 = iVar4 + iVar3;
    iVar3 = fcn.00019496(iVar4,2,&uStack_4);
    if ((((iVar3 != -1) && (iVar3 = fcn.00019496(iVar4 + 2,2,&uStack_8), iVar3 != -1)) &&
        (iVar3 = fcn.00019496(iVar4 + 4,2,&uStack_c), iVar3 != -1)) &&
       (iVar3 = fcn.00019496(iVar4 + 6,2,&uStack_10), iVar3 != -1)) {
        iVar3 = fcn.00019496(iVar4 + 8,2,&param_3);
        puVar1 = param_4;
        if (iVar3 != -1) {
            iVar3 = fcn.00019576(param_1,uStack_4,uStack_8,uStack_c,uStack_10,param_3,param_4);
            if (iVar3 < 0) {
                if (0x7b1 < param_1) {
                    return 0xffffffff;
                }
                *puVar1 = 0;
            }
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00015d44 @ 0x15d44 */

uint fcn.00015d44(int param_1)

{
    int iVar1;
    
    if (4 < *(param_1 + 0x50)) {
        iVar1 = fcn.00016a10(param_1);
        if ((iVar1 != 0) && (*(param_1 + 0x10) == 2)) {
            return 1;
        }
    }
    return 0;
}


/* fcn.00016a10 @ 0x16a10 */

uint fcn.00016a10(int *param_1)

{
    uint uVar1;
    
    if ((((param_1[0x14] < 4) || (uVar1 = 1, *param_1 != 1)) || (param_1[1] != 2)) ||
       ((param_1[2] != 0x348 || (param_1[3] != 0x1bb8d)))) {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00011c70 @ 0x11c70 */

uint __cdecl fcn.00011c70(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int32_t iVar1;
    int iVar2;
    int iVar3;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = arg_ch;
    if ((arg_ch != 0) && (arg_8h != 0)) {
        arg_ch = *arg_ch;
        *(arg_8h + 0xa4) = 0;
        iVar3 = arg_10h + arg_ch;
        iVar2 = fcn.0001612a(arg_ch,iVar3 - arg_ch,arg_8h + 4,&arg_ch);
        if ((iVar2 == 0) &&
           (((iVar2 = fcn.00019f2d(arg_ch,iVar3 - arg_ch,&var_10h), -1 < iVar2 && (var_bh == '\0')) &&
            (stack0xfffffff4 == 2)))) {
            for (; (var_4h != 0 && (*var_10h == '\0')); var_10h = var_10h + 1) {
                var_4h = var_4h - 1;
            }
            fcn.00010871(arg_8h + 0xac,var_10h,var_4h);
            *(arg_8h + 0xc0) = var_4h;
            *iVar1 = var_10h + var_4h;
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00012e85 @ 0x12e85 */

uint __cdecl fcn.00012e85(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_14h;
    uint32_t var_fh;
    int32_t var_8h;
    uint32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_8h,arg_ch,&var_14h);
    if (((-1 < iVar1) && (var_fh == '\0')) && (stack0xfffffff0 == 0x10)) {
        uVar2 = var_8h + var_14h;
        var_4h = var_14h;
        if (uVar2 <= arg_8h + arg_ch) {
            *arg_14h = uVar2;
            iVar1 = fcn.0001a012(var_14h,uVar2 - var_14h,arg_10h,&var_4h);
            if (iVar1 == 0) {
                if (uVar2 <= var_4h) {
                    return 0;
                }
                iVar1 = fcn.00019f2d(var_4h,uVar2 - var_4h,&var_14h);
                if (((iVar1 == 0) && (var_fh == '\0')) && (stack0xfffffff0 == 5)) {
                    return 0;
                }
                iVar1 = fcn.00019f2d(var_4h,arg_ch,&var_14h);
                if (((-1 < iVar1) && (var_fh == '\0')) && (stack0xfffffff0 == 0x10)) {
                    var_4h = var_14h;
                    iVar1 = fcn.00019f2d(var_14h,uVar2 - var_14h,&var_14h);
                    if (((-1 < iVar1) && (var_fh == '\x02')) && (stack0xfffffff0 == 0)) {
                        var_4h = var_14h;
                        iVar1 = fcn.00015e03(var_14h,uVar2 - var_14h,arg_10h + 0x54,&var_4h);
                        if (iVar1 == 0) {
                            if (var_4h < uVar2) {
                                iVar1 = fcn.00019f2d(var_4h,uVar2 - var_4h,&var_14h);
                                if (iVar1 < 0) {
                                    return 0xffffffff;
                                }
                                if (var_fh != '\x02') {
                                    return 0xffffffff;
                                }
                                if (stack0xfffffff0 != 1) {
                                    return 0xffffffff;
                                }
                                var_4h = var_14h + var_8h;
                                if (var_4h <= uVar2) {
                                    iVar1 = fcn.00019f2d(var_4h,uVar2 - var_4h,&var_14h);
                                    if (iVar1 < 0) {
                                        return 0xffffffff;
                                    }
                                    if (var_fh != '\x02') {
                                        return 0xffffffff;
                                    }
                                    if (stack0xfffffff0 != 2) {
                                        return 0xffffffff;
                                    }
                                    var_4h = var_14h;
                                    if (uVar2 < var_8h + var_14h) {
                                        return 0xffffffff;
                                    }
                                    iVar1 = fcn.00019f2d(var_14h,uVar2 - var_14h,&var_14h);
                                    if (iVar1 < 0) {
                                        return 0xffffffff;
                                    }
                                    if (var_fh != '\0') {
                                        return 0xffffffff;
                                    }
                                    if (stack0xfffffff0 != 2) {
                                        return 0xffffffff;
                                    }
                                    if (1 < var_8h) {
                                        return 0xffffffff;
                                    }
                                    uVar2 = 0;
                                    for (; var_8h != 0; var_8h = var_8h + -1) {
                                        uVar2 = uVar2 << 8 | *var_14h;
                                        var_14h = var_14h + 1;
                                    }
                                    *(arg_10h + 0xa8) = uVar2;
                                }
                            }
                            return 0;
                        }
                    }
                }
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00019521 @ 0x19521 */

void __cdecl fcn.00019521(int32_t arg_8h)

{
    int32_t var_4h;
    
    fcn.00019576(*0xa1d0,*0xa1d2,*0xa1d3,*0xa1d4,*0xa1d5,*0xa1d6,&var_4h);
    *arg_8h = var_4h;
    *(arg_8h + 4) = var_4h * 1000000;
    return;
}


/* fcn.00019576 @ 0x19576 */

uint fcn.00019576(uint32_t param_1,int param_2,int param_3,uint32_t param_4,uint32_t param_5,uint32_t param_6,
                 int *param_7)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    bool bVar5;
    
    uVar3 = 0x7b2;
    uVar4 = 0xffffffff;
    *param_7 = 0;
    if (((((0x7b1 < param_1) && (param_2 - 1U < 0xc)) && (param_3 - 1U < 0x1f)) &&
        ((param_4 < 0x18 && (param_5 < 0x3c)))) && (param_6 < 0x3d)) {
        *param_7 = 0;
        if (param_1 != 0x7b2) {
            do {
                uVar1 = uVar3 & 0x80000003;
                bVar5 = uVar1 == 0;
                if (uVar1 < 0) {
                    bVar5 = (uVar1 - 1 | 0xfffffffc) == 0xffffffff;
                }
                if ((bVar5) && ((uVar3 % 100 != 0 || (uVar3 % 400 == 0)))) {
                    iVar2 = *0xa24c;
                }
                else {
                    iVar2 = *0xa214;
                }
                *param_7 = *param_7 + iVar2 * 0x15180;
                uVar3 = uVar3 + 1;
            } while (uVar3 != param_1);
        }
        uVar3 = param_1 & 0x80000003;
        if (uVar3 < 0) {
            uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
        }
        if ((uVar3 == 0) && ((param_1 % 100 != 0 || (param_1 % 400 == 0)))) {
            iVar2 = 0xe;
        }
        else {
            iVar2 = 0;
        }
        *param_7 = *param_7 +
                   (((*((iVar2 + param_2) * 4 + 0xa1e0) + param_3) * 0x18 + -0x18 + param_4) * 0x3c + param_5) * 0x3c +
                   param_6;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00016bee @ 0x16bee */

uint fcn.00016bee(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0x288) & 1;
    if ((((uVar1 == 0) || (*(param_1 + 0x28c) != 0)) && ((*(param_1 + 8) != 2 || (uVar1 != 0)))) &&
       (((*(param_1 + 0x288) & 4) == 0 || ((*(param_1 + 0x294) & 0x20) != 0)))) {
        return 0;
    }
    return 0xffffffff;
}


/* fcn.00015893 @ 0x15893 */

uint fcn.00015893(uint param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.000169ee(param_2 + 0x24);
    if (((iVar1 == 0) || (*(param_2 + 0x74) != 7)) || (*(param_2 + 0x38) != 1)) {
        uVar2 = 0xffffffff;
    }
    else {
        uVar2 = fcn.00015a1f(param_1,param_2 + 0x24,*(param_2 + 0x280),*(param_2 + 0x284),*(param_2 + 0x2a4),
                             *(param_2 + 0x2a8));
    }
    return uVar2;
}


/* fcn.00019e6e @ 0x19e6e */

void __cdecl fcn.00019e6e(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int32_t var_58h;
    
    fcn.00019710(&var_58h);
    if (arg_8h != 0) {
        iVar1 = arg_10h - arg_ch;
        do {
            fcn.00019dc6(&var_58h,*arg_ch,*(iVar1 + arg_ch));
            arg_ch = arg_ch + 4;
            arg_8h = arg_8h + -1;
        } while (arg_8h != 0);
    }
    fcn.0001968b(arg_14h,&var_58h);
    return;
}


/* fcn.00019710 @ 0x19710 */

void fcn.00019710(uint *param_1)

{
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = 0x67452301;
    param_1[1] = 0xefcdab89;
    param_1[2] = 0x98badcfe;
    param_1[3] = 0x10325476;
    return;
}


/* fcn.00019dc6 @ 0x19dc6 */

void fcn.00019dc6(int param_1,int param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = *(param_1 + 0x10);
    uVar1 = uVar2 + param_3 * 8;
    *(param_1 + 0x10) = uVar1;
    if (uVar1 < uVar2) {
        *(param_1 + 0x14) = *(param_1 + 0x14) + 1;
    }
    *(param_1 + 0x14) = *(param_1 + 0x14) + (param_3 >> 0x1d);
    uVar1 = uVar2 >> 3 & 0x3f;
    if (uVar1 != 0) {
        uVar2 = 0x40 - uVar1;
        uVar1 = param_1 + 0x18 + uVar1;
        if (param_3 < uVar2) goto code_r0x00019e60;
        fcn.00010871(uVar1,param_2,uVar2);
        fcn.00019738(param_1,param_1 + 0x18);
        param_2 = param_2 + uVar2;
        param_3 = param_3 - uVar2;
    }
    if (0x3f < param_3) {
        uVar1 = param_3 >> 6;
        do {
            fcn.00010871(param_1 + 0x18,param_2,0x40);
            fcn.00019738(param_1,param_1 + 0x18);
            param_2 = param_2 + 0x40;
            param_3 = param_3 - 0x40;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    uVar1 = param_1 + 0x18;
code_r0x00019e60:
    fcn.00010871(uVar1,param_2,param_3);
    return;
}


/* fcn.0001968b @ 0x1968b */

void fcn.0001968b(uint32_t param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t arg_ch;
    int iVar3;
    uint uVar4;
    
    uVar2 = *(param_2 + 0x10) >> 3 & 0x3f;
    iVar1 = -uVar2;
    arg_ch = iVar1 + 0x3f;
    iVar3 = uVar2 + param_2;
    *(iVar3 + 0x18) = 0x80;
    iVar3 = iVar3 + 0x19;
    if (arg_ch < 8) {
        uVar4 = 0;
        fcn.00010a9b(iVar3,arg_ch);
        fcn.00019738(param_2,param_2 + 0x18,iVar3,arg_ch,uVar4);
        fcn.00010a9b(param_2 + 0x18,0x38);
    }
    else {
        fcn.00010a9b(iVar3,iVar1 + 0x37);
    }
    *(param_2 + 0x50) = *(param_2 + 0x10);
    *(param_2 + 0x54) = *(param_2 + 0x14);
    fcn.00019738(param_2,param_2 + 0x18);
    fcn.00010871(param_1,param_2,0x10);
    fcn.00010a9b(param_2,0x58);
    return;
}


/* fcn.00016c3a @ 0x16c3a */

uint fcn.00016c3a(int param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    
    iVar2 = *(param_1 + 8);
    if (iVar2 != *(param_2 + 8)) {
        uVar1 = 1;
        if (iVar2 == 1) {
            uVar1 = 0xffffffff;
        }
        return uVar1;
    }
    if (iVar2 == 1) {
        iVar2 = param_2;
    }
    else {
        iVar2 = param_1;
        param_1 = param_2;
    }
    uVar1 = fcn.000173bd(iVar2,param_1);
    return uVar1;
}


/* fcn.000173bd @ 0x173bd */

uint fcn.000173bd(int *param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    int iVar6;
    
    iVar1 = *param_1;
    if (*param_2 < iVar1) {
        return 1;
    }
    if (iVar1 < *param_2) {
        return 0xffffffff;
    }
    iVar4 = 0;
    puVar5 = param_1[3] + -4 + iVar1 * 4;
    if (0 < iVar1) {
        iVar6 = (param_2[3] + -4 + iVar1 * 4) - puVar5;
        do {
            uVar2 = *(iVar6 + puVar5);
            uVar3 = *puVar5;
            if (uVar3 >= uVar2 && uVar3 != uVar2) {
                return 1;
            }
            if (uVar3 < uVar2) {
                return 0xffffffff;
            }
            iVar4 = iVar4 + 1;
            puVar5 = puVar5 + -1;
        } while (iVar4 < iVar1);
    }
    return 0;
}


/* fcn.00016c56 @ 0x16c56 */

uint __cdecl fcn.00016c56(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    
    if ((*(arg_10h + 8) != 1) && (*(arg_ch + 8) != 1)) {
        if ((*arg_10h < 1) || ((**(arg_10h + 0xc) & 1) == 0)) {
            iVar1 = fcn.00018ad8(arg_8h,arg_ch,arg_10h,arg_14h,0);
        }
        else {
            iVar1 = fcn.00017a8e(arg_8h,arg_ch,arg_10h,arg_14h,0);
        }
        if (iVar1 == 0) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00013525 @ 0x13525 */

void fcn.00013525(int param_1)

{
    fcn.00016cf6(*(param_1 + 4));
    return;
}


/* fcn.00016cf6 @ 0x16cf6 */

int fcn.00016cf6(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.0001746e(param_1);
    return (uVar1 + (uVar1 >> 0x1f & 7U) >> 3) + ((uVar1 & 7) != 0);
}


/* fcn.0001746e @ 0x1746e */

int fcn.0001746e(int *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    
    iVar1 = *param_1;
    if (iVar1 != 0) {
        iVar3 = iVar1 * 0x1c + -0x1c;
        for (uVar2 = *(param_1[3] + -4 + iVar1 * 4); uVar2 != 0; uVar2 = uVar2 >> 1) {
            iVar3 = iVar3 + 1;
        }
        return iVar3;
    }
    return 0;
}


/* fcn.00016ca6 @ 0x16ca6 */

uint fcn.00016ca6(int32_t param_1,int32_t param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = fcn.0001746e(param_1);
    uVar1 = ((uVar1 & 7) != 0) + (uVar1 + (uVar1 >> 0x1f & 7U) >> 3);
    if ((param_3 == NULL) || (uVar1 <= *param_3)) {
        iVar2 = fcn.00018940(param_1,param_2);
        if (iVar2 == 0) {
            if (param_3 != NULL) {
                *param_3 = uVar1;
            }
            return 0;
        }
    }
    else {
        *param_3 = uVar1;
    }
    return 0xffffffff;
}


/* fcn.000135c2 @ 0x135c2 */

int __cdecl fcn.000135c2(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    if ((((arg_8h != 0) && (iVar1 = fcn.00019f2d(arg_8h,arg_ch - arg_8h,&var_10h), -1 < iVar1)) && (var_bh == '\0'))
       && ((stack0xfffffff4 == 2 && (iVar1 = fcn.00016d3d(arg_10h,var_10h,var_4h), -1 < iVar1)))) {
        return var_10h + var_4h;
    }
    return 0;
}


/* fcn.00013714 @ 0x13714 */

void fcn.00013714(uint32_t *param_1,int32_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
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
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    fcn.00010871(&uStack_40,param_2,0x40);
    uVar15 = param_1[3];
    uVar7 = uStack_40 >> 8 & 0xff00ff00 | uStack_40 << 0x18 | (uStack_40 & 0xff00) << 8 | uStack_40 >> 0x18;
    uVar22 = *param_1;
    uVar14 = param_1[1];
    uVar1 = uVar14 >> 2 | uVar14 << 0x1e;
    uVar8 = uVar7 + 0x5a827999 + ((uVar15 ^ param_1[2]) & uVar14 ^ uVar15) + (uVar22 << 5 | uVar22 >> 0x1b) + param_1[4]
    ;
    uVar14 = uStack_3c >> 8 & 0xff00ff00 | uStack_3c << 0x18 | (uStack_3c & 0xff00) << 8 | uStack_3c >> 0x18;
    uVar3 = uVar22 >> 2 | uVar22 << 0x1e;
    uVar15 = uVar14 + (uVar8 * 0x20 | uVar8 >> 0x1b) + ((param_1[2] ^ uVar1) & uVar22 ^ param_1[2]) +
             uVar15 + 0x5a827999;
    uVar22 = uStack_38 >> 8 & 0xff00ff00 | uStack_38 << 0x18 | (uStack_38 & 0xff00) << 8 | uStack_38 >> 0x18;
    uVar9 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar23 = param_1[2] + 0x5a827999 + ((uVar1 ^ uVar3) & uVar8 ^ uVar1) + (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar22;
    uVar8 = uStack_34 >> 8 & 0xff00ff00 | uStack_34 << 0x18 | (uStack_34 & 0xff00) << 8 | uStack_34 >> 0x18;
    uVar16 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar15 = uVar1 + 0x5a827999 + ((uVar9 ^ uVar3) & uVar15 ^ uVar3) + (uVar23 * 0x20 | uVar23 >> 0x1b) + uVar8;
    uVar1 = uStack_30 >> 8 & 0xff00ff00 | uStack_30 << 0x18 | (uStack_30 & 0xff00) << 8 | uStack_30 >> 0x18;
    uVar24 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar4 = uVar3 + 0x5a827999 + ((uVar9 ^ uVar16) & uVar23 ^ uVar9) + (uVar15 * 0x20 | uVar15 >> 0x1b) + uVar1;
    uVar3 = uStack_2c >> 8 & 0xff00ff00 | uStack_2c << 0x18 | (uStack_2c & 0xff00) << 8 | uStack_2c >> 0x18;
    uVar2 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar9 = uVar9 + ((uVar16 ^ uVar24) & uVar15 ^ uVar16) + (uVar4 * 0x20 | uVar4 >> 0x1b) + 0x5a827999 + uVar3;
    uVar23 = uStack_28 >> 8 & 0xff00ff00 | uStack_28 << 0x18 | (uStack_28 & 0xff00) << 8 | uStack_28 >> 0x18;
    uVar5 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar16 = uVar16 + ((uVar24 ^ uVar2) & uVar4 ^ uVar24) + (uVar9 * 0x20 | uVar9 >> 0x1b) + 0x5a827999 + uVar23;
    uVar4 = uStack_24 >> 8 & 0xff00ff00 | uStack_24 << 0x18 | (uStack_24 & 0xff00) << 8 | uStack_24 >> 0x18;
    uVar10 = uVar9 >> 2 | uVar9 * 0x40000000;
    uVar24 = uVar24 + ((uVar2 ^ uVar5) & uVar9 ^ uVar2) + (uVar16 * 0x20 | uVar16 >> 0x1b) + 0x5a827999 + uVar4;
    uVar9 = uStack_20 >> 8 & 0xff00ff00 | uStack_20 << 0x18 | (uStack_20 & 0xff00) << 8 | uStack_20 >> 0x18;
    uVar17 = uVar16 >> 2 | uVar16 * 0x40000000;
    uVar2 = uVar2 + ((uVar10 ^ uVar5) & uVar16 ^ uVar5) + (uVar24 * 0x20 | uVar24 >> 0x1b) + 0x5a827999 + uVar9;
    uVar16 = uStack_1c >> 8 & 0xff00ff00 | uStack_1c << 0x18 | (uStack_1c & 0xff00) << 8 | uStack_1c >> 0x18;
    uVar25 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar5 = uVar5 + ((uVar10 ^ uVar17) & uVar24 ^ uVar10) + (uVar2 * 0x20 | uVar2 >> 0x1b) + 0x5a827999 + uVar16;
    uVar24 = uStack_18 >> 8 & 0xff00ff00 | uStack_18 << 0x18 | (uStack_18 & 0xff00) << 8 | uStack_18 >> 0x18;
    uVar15 = uVar2 >> 2 | uVar2 * 0x40000000;
    uVar10 = uVar10 + ((uVar17 ^ uVar25) & uVar2 ^ uVar17) + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0x5a827999 + uVar24;
    uVar2 = uStack_14 >> 8 & 0xff00ff00 | uStack_14 << 0x18 | (uStack_14 & 0xff00) << 8 | uStack_14 >> 0x18;
    uVar6 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar17 = (uVar25 ^ (uVar25 ^ uVar15) & uVar5) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar2 + uVar17 + 0x5a827999;
    uVar11 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar18 = uStack_10 >> 8 & 0xff00ff00 | uStack_10 << 0x18 | (uStack_10 & 0xff00) << 8 | uStack_10 >> 0x18;
    uVar10 = ((uVar6 ^ uVar15) & uVar10 ^ uVar15) + (uVar17 * 0x20 | uVar17 >> 0x1b) + uVar18 + uVar25 + 0x5a827999;
    uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar5 = uStack_c >> 8 & 0xff00ff00 | uStack_c << 0x18 | (uStack_c & 0xff00) << 8 | uStack_c >> 0x18;
    uVar12 = ((uVar11 ^ uVar6) & uVar17 ^ uVar6) + (uVar10 * 0x20 | uVar10 >> 0x1b) + uVar5 + uVar15 + 0x5a827999;
    uVar17 = uStack_8 >> 8 & 0xff00ff00 | uStack_8 << 0x18 | (uStack_8 & 0xff00) << 8 | uStack_8 >> 0x18;
    uVar6 = (uVar11 ^ (uVar11 ^ uVar26) & uVar10) + (uVar12 * 0x20 | uVar12 >> 0x1b) + uVar17 + uVar6 + 0x5a827999;
    uVar25 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar19 = uStack_4 >> 8 & 0xff00ff00 | uStack_4 << 0x18 | (uStack_4 & 0xff00) << 8 | uStack_4 >> 0x18;
    uVar10 = uVar19 + (uVar6 * 0x20 | uVar6 >> 0x1b) + ((uVar26 ^ uVar25) & uVar12 ^ uVar26) + uVar11 + 0x5a827999;
    uVar15 = uVar7 ^ uVar5 ^ uVar9 ^ uVar22;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar13 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar11 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar26 = uVar26 + ((uVar25 ^ uVar13) & uVar6 ^ uVar25) + (uVar10 * 0x20 | uVar10 >> 0x1b) + 0x5a827999 + uVar15;
    uVar14 = uVar17 ^ uVar16 ^ uVar8 ^ uVar14;
    uVar6 = uVar14 << 1 | uVar14 < 0;
    uVar20 = uVar10 >> 2 | uVar10 * 0x40000000;
    uVar25 = uVar25 + ((uVar13 ^ uVar11) & uVar10 ^ uVar13) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x5a827999 + uVar6;
    uVar22 = uVar19 ^ uVar24 ^ uVar1 ^ uVar22;
    uVar10 = uVar22 << 1 | uVar22 < 0;
    uVar27 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar13 = uVar13 + ((uVar20 ^ uVar11) & uVar26 ^ uVar11) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x5a827999 + uVar10;
    uVar8 = uVar15 ^ uVar2 ^ uVar3 ^ uVar8;
    uVar7 = uVar8 << 1 | uVar8 < 0;
    uVar12 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar11 = uVar11 + ((uVar20 ^ uVar27) & uVar25 ^ uVar20) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x5a827999 + uVar7;
    uVar22 = uVar18 ^ uVar23 ^ uVar1 ^ uVar6;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar26 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar20 = uVar20 + (uVar27 ^ uVar12 ^ uVar13) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar22;
    uVar14 = uVar5 ^ uVar4 ^ uVar3 ^ uVar10;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar25 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar27 = uVar27 + (uVar12 ^ uVar26 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar14;
    uVar8 = uVar17 ^ uVar9 ^ uVar23 ^ uVar7;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar12 = uVar12 + (uVar20 ^ uVar26 ^ uVar25) + (uVar27 * 0x20 | uVar27 >> 0x1b) + 0x6ed9eba1 + uVar8;
    uVar1 = uVar19 ^ uVar16 ^ uVar4 ^ uVar22;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar20 = uVar27 >> 2 | uVar27 * 0x40000000;
    uVar26 = uVar26 + (uVar21 ^ uVar27 ^ uVar25) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar15 ^ uVar24 ^ uVar9 ^ uVar14;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar13 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar25 = uVar25 + (uVar21 ^ uVar20 ^ uVar12) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar3;
    uVar23 = uVar2 ^ uVar16 ^ uVar8 ^ uVar6;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar21 = uVar21 + (uVar20 ^ uVar13 ^ uVar26) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar23;
    uVar4 = uVar18 ^ uVar24 ^ uVar1 ^ uVar10;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar11 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar20 = uVar20 + (uVar13 ^ uVar12 ^ uVar25) + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x6ed9eba1 + uVar4;
    uVar9 = uVar5 ^ uVar2 ^ uVar3 ^ uVar7;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar26 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar13 = uVar13 + (uVar21 ^ uVar12 ^ uVar11) + (uVar20 * 0x20 | uVar20 >> 0x1b) + 0x6ed9eba1 + uVar9;
    uVar16 = uVar17 ^ uVar18 ^ uVar23 ^ uVar22;
    uVar16 = uVar16 << 1 | uVar16 < 0;
    uVar21 = uVar20 >> 2 | uVar20 * 0x40000000;
    uVar12 = uVar12 + (uVar26 ^ uVar20 ^ uVar11) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x6ed9eba1 + uVar16;
    uVar24 = uVar19 ^ uVar5 ^ uVar4 ^ uVar14;
    uVar24 = uVar24 << 1 | uVar24 < 0;
    uVar25 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar11 = uVar11 + (uVar26 ^ uVar21 ^ uVar13) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar24;
    uVar2 = uVar15 ^ uVar17 ^ uVar9 ^ uVar8;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar13 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar26 = uVar26 + (uVar21 ^ uVar25 ^ uVar12) + (uVar11 * 0x20 | uVar11 >> 0x1b) + 0x6ed9eba1 + uVar2;
    uVar5 = uVar19 ^ uVar16 ^ uVar1 ^ uVar6;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar17 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar21 = uVar21 + (uVar25 ^ uVar13 ^ uVar11) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar5;
    uVar15 = uVar15 ^ uVar24 ^ uVar3 ^ uVar10;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar18 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar25 = uVar25 + (uVar26 ^ uVar13 ^ uVar17) + (uVar21 * 0x20 | uVar21 >> 0x1b) + 0x6ed9eba1 + uVar15;
    uVar6 = uVar2 ^ uVar23 ^ uVar7 ^ uVar6;
    uVar6 = uVar6 << 1 | uVar6 < 0;
    uVar19 = uVar21 >> 2 | uVar21 * 0x40000000;
    uVar13 = uVar13 + (uVar18 ^ uVar21 ^ uVar17) + (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x6ed9eba1 + uVar6;
    uVar10 = uVar5 ^ uVar4 ^ uVar22 ^ uVar10;
    uVar10 = uVar10 << 1 | uVar10 < 0;
    uVar12 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar17 = uVar17 + (uVar18 ^ uVar19 ^ uVar25) + (uVar13 * 0x20 | uVar13 >> 0x1b) + 0x6ed9eba1 + uVar10;
    uVar7 = uVar15 ^ uVar9 ^ uVar14 ^ uVar7;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar26 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar18 = uVar18 + (uVar19 ^ uVar12 ^ uVar13) + (uVar17 * 0x20 | uVar17 >> 0x1b) + 0x6ed9eba1 + uVar7;
    uVar22 = uVar16 ^ uVar8 ^ uVar22 ^ uVar6;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar11 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar19 = uVar19 + (uVar12 ^ uVar26 ^ uVar17) + (uVar18 * 0x20 | uVar18 >> 0x1b) + 0x6ed9eba1 + uVar22;
    uVar14 = uVar24 ^ uVar1 ^ uVar14 ^ uVar10;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar17 = uVar18 >> 2 | uVar18 * 0x40000000;
    uVar12 = uVar12 + (uVar18 ^ uVar26 ^ uVar11) + (uVar19 * 0x20 | uVar19 >> 0x1b) + 0x6ed9eba1 + uVar14;
    uVar8 = uVar2 ^ uVar3 ^ uVar8 ^ uVar7;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar18 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar26 = uVar26 + (uVar17 ^ uVar19 ^ uVar11) + (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x6ed9eba1 + uVar8;
    uVar1 = uVar5 ^ uVar23 ^ uVar1 ^ uVar22;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar25 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar11 = uVar11 + (uVar17 ^ uVar18 ^ uVar12) + (uVar26 * 0x20 | uVar26 >> 0x1b) + 0x6ed9eba1 + uVar1;
    uVar3 = uVar15 ^ uVar4 ^ uVar3 ^ uVar14;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar12 = uVar26 >> 2 | uVar26 * 0x40000000;
    uVar17 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
             ((uVar25 | uVar26) & uVar18 | uVar25 & uVar26) + uVar3 + uVar17 + 0x8f1bbcdc;
    uVar23 = uVar9 ^ uVar23 ^ uVar8 ^ uVar6;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar13 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar11 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
             ((uVar12 | uVar11) & uVar25 | uVar12 & uVar11) + uVar23 + uVar18 + 0x8f1bbcdc;
    uVar4 = uVar16 ^ uVar4 ^ uVar1 ^ uVar10;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar17 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
             ((uVar17 | uVar13) & uVar12 | uVar17 & uVar13) + uVar4 + uVar25 + 0x8f1bbcdc;
    uVar9 = uVar24 ^ uVar9 ^ uVar3 ^ uVar7;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar16 = uVar2 ^ uVar16 ^ uVar23 ^ uVar22;
    uVar25 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
             ((uVar19 | uVar11) & uVar13 | uVar19 & uVar11) + 0x8f1bbcdc + uVar9 + uVar12;
    uVar12 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar16 = uVar16 << 1 | uVar16 < 0;
    uVar26 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar17 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
             ((uVar12 | uVar17) & uVar19 | uVar12 & uVar17) + uVar16 + uVar13 + 0x8f1bbcdc;
    uVar24 = uVar5 ^ uVar24 ^ uVar4 ^ uVar14;
    uVar24 = uVar24 << 1 | uVar24 < 0;
    uVar18 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar11 = (uVar17 * 0x20 | uVar17 >> 0x1b) +
             ((uVar26 | uVar25) & uVar12 | uVar26 & uVar25) + uVar24 + uVar19 + 0x8f1bbcdc;
    uVar2 = uVar15 ^ uVar2 ^ uVar9 ^ uVar8;
    uVar2 = uVar2 << 1 | uVar2 < 0;
    uVar19 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar25 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
             ((uVar18 | uVar17) & uVar26 | uVar18 & uVar17) + uVar2 + uVar12 + 0x8f1bbcdc;
    uVar5 = uVar5 ^ uVar16 ^ uVar1 ^ uVar6;
    uVar5 = uVar5 << 1 | uVar5 < 0;
    uVar13 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar15 = uVar15 ^ uVar24 ^ uVar3 ^ uVar10;
    uVar11 = (uVar25 * 0x20 | uVar25 >> 0x1b) +
             ((uVar11 | uVar19) & uVar18 | uVar11 & uVar19) + uVar5 + uVar26 + 0x8f1bbcdc;
    uVar15 = uVar15 << 1 | uVar15 < 0;
    uVar12 = (uVar11 * 0x20 | uVar11 >> 0x1b) +
             ((uVar13 | uVar25) & uVar19 | uVar13 & uVar25) + uVar15 + uVar18 + 0x8f1bbcdc;
    uVar6 = uVar2 ^ uVar23 ^ uVar7 ^ uVar6;
    uVar17 = uVar6 << 1 | uVar6 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar18 = uVar11 >> 2 | uVar11 * 0x40000000;
    uVar6 = (uVar12 * 0x20 | uVar12 >> 0x1b) +
            ((uVar26 | uVar11) & uVar13 | uVar26 & uVar11) + uVar17 + uVar19 + 0x8f1bbcdc;
    uVar10 = uVar5 ^ uVar4 ^ uVar22 ^ uVar10;
    uVar10 = uVar10 << 1 | uVar10 < 0;
    uVar25 = (uVar6 * 0x20 | uVar6 >> 0x1b) +
             ((uVar18 | uVar12) & uVar26 | uVar18 & uVar12) + uVar10 + uVar13 + 0x8f1bbcdc;
    uVar7 = uVar15 ^ uVar9 ^ uVar14 ^ uVar7;
    uVar7 = uVar7 << 1 | uVar7 < 0;
    uVar19 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar13 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar6 = (uVar25 * 0x20 | uVar25 >> 0x1b) + 0x8f1bbcdc +
            ((uVar19 | uVar6) & uVar18 | uVar19 & uVar6) + uVar7 + uVar26;
    uVar22 = uVar16 ^ uVar8 ^ uVar22 ^ uVar17;
    uVar11 = uVar22 << 1 | uVar22 < 0;
    uVar12 = (uVar6 * 0x20 | uVar6 >> 0x1b) +
             ((uVar25 | uVar13) & uVar19 | uVar25 & uVar13) + uVar11 + uVar18 + 0x8f1bbcdc;
    uVar22 = uVar24 ^ uVar1 ^ uVar14 ^ uVar10;
    uVar22 = uVar22 << 1 | uVar22 < 0;
    uVar26 = uVar25 >> 2 | uVar25 * 0x40000000;
    uVar18 = uVar6 >> 2 | uVar6 * 0x40000000;
    uVar14 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0x8f1bbcdc +
             ((uVar26 | uVar6) & uVar13 | uVar26 & uVar6) + uVar22 + uVar19;
    uVar8 = uVar2 ^ uVar3 ^ uVar8 ^ uVar7;
    uVar6 = uVar8 << 1 | uVar8 < 0;
    uVar19 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar8 = (uVar14 * 0x20 | uVar14 >> 0x1b) + 0x8f1bbcdc +
            ((uVar18 | uVar12) & uVar26 | uVar18 & uVar12) + uVar6 + uVar13;
    uVar1 = uVar5 ^ uVar23 ^ uVar1 ^ uVar11;
    uVar25 = uVar1 << 1 | uVar1 < 0;
    uVar12 = uVar14 >> 2 | uVar14 * 0x40000000;
    uVar1 = (uVar8 * 0x20 | uVar8 >> 0x1b) + 0x8f1bbcdc +
            ((uVar19 | uVar14) & uVar18 | uVar19 & uVar14) + uVar25 + uVar26;
    uVar14 = uVar15 ^ uVar4 ^ uVar3 ^ uVar22;
    uVar14 = uVar14 << 1 | uVar14 < 0;
    uVar13 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar3 = (uVar1 * 0x20 | uVar1 >> 0x1b) + 0x8f1bbcdc + ((uVar12 | uVar8) & uVar19 | uVar12 & uVar8) + uVar14 + uVar18
    ;
    uVar8 = uVar9 ^ uVar23 ^ uVar6 ^ uVar17;
    uVar8 = uVar8 << 1 | uVar8 < 0;
    uVar26 = uVar1 >> 2 | uVar1 * 0x40000000;
    uVar23 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0x8f1bbcdc + ((uVar1 | uVar13) & uVar12 | uVar1 & uVar13) + uVar8 + uVar19
    ;
    uVar4 = uVar16 ^ uVar4 ^ uVar25 ^ uVar10;
    uVar1 = uVar24 ^ uVar9 ^ uVar14 ^ uVar7;
    uVar1 = uVar1 << 1 | uVar1 < 0;
    uVar18 = uVar4 << 1 | uVar4 < 0;
    uVar19 = (uVar23 * 0x20 | uVar23 >> 0x1b) + 0x8f1bbcdc +
             ((uVar26 | uVar3) & uVar13 | uVar26 & uVar3) + uVar18 + uVar12;
    uVar9 = uVar3 >> 2 | uVar3 * 0x40000000;
    uVar12 = uVar23 >> 2 | uVar23 * 0x40000000;
    uVar3 = uVar2 ^ uVar16 ^ uVar8 ^ uVar11;
    uVar3 = uVar3 << 1 | uVar3 < 0;
    uVar4 = (uVar19 * 0x20 | uVar19 >> 0x1b) +
            ((uVar9 | uVar23) & uVar26 | uVar9 & uVar23) + 0x8f1bbcdc + uVar1 + uVar13;
    uVar13 = (uVar4 * 0x20 | uVar4 >> 0x1b) + 0xca62c1d6 + (uVar9 ^ uVar12 ^ uVar19) + uVar3 + uVar26;
    uVar19 = uVar19 >> 2 | uVar19 * 0x40000000;
    uVar23 = uVar5 ^ uVar24 ^ uVar18 ^ uVar22;
    uVar23 = uVar23 << 1 | uVar23 < 0;
    uVar16 = uVar4 >> 2 | uVar4 * 0x40000000;
    uVar24 = (uVar13 * 0x20 | uVar13 >> 0x1b) + 0xca62c1d6 + (uVar12 ^ uVar19 ^ uVar4) + uVar23 + uVar9;
    uVar4 = uVar15 ^ uVar2 ^ uVar1 ^ uVar6;
    uVar4 = uVar4 << 1 | uVar4 < 0;
    uVar26 = uVar13 >> 2 | uVar13 * 0x40000000;
    uVar12 = (uVar24 * 0x20 | uVar24 >> 0x1b) + 0xca62c1d6 + (uVar13 ^ uVar19 ^ uVar16) + uVar4 + uVar12;
    uVar9 = uVar5 ^ uVar3 ^ uVar25 ^ uVar17;
    uVar9 = uVar9 << 1 | uVar9 < 0;
    uVar2 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar24 = (uVar12 * 0x20 | uVar12 >> 0x1b) + 0xca62c1d6 + (uVar26 ^ uVar24 ^ uVar16) + uVar9 + uVar19;
    uVar15 = uVar15 ^ uVar23 ^ uVar14 ^ uVar10;
    uStack_40 = uVar15 << 1 | uVar15 < 0;
    uVar5 = uVar12 >> 2 | uVar12 * 0x40000000;
    uVar15 = (uVar24 * 0x20 | uVar24 >> 0x1b) + 0xca62c1d6 + (uVar26 ^ uVar2 ^ uVar12) + uStack_40 + uVar16;
    uVar17 = uVar4 ^ uVar8 ^ uVar7 ^ uVar17;
    uStack_3c = uVar17 << 1 | uVar17 < 0;
    uVar17 = (uVar15 * 0x20 | uVar15 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar5 ^ uVar24) + uStack_3c + uVar26;
    uVar10 = uVar9 ^ uVar18 ^ uVar11 ^ uVar10;
    uStack_38 = uVar10 << 1 | uVar10 < 0;
    uVar12 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar16 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar24 = (uVar17 * 0x20 | uVar17 >> 0x1b) + 0xca62c1d6 + (uVar5 ^ uVar12 ^ uVar15) + uStack_38 + uVar2;
    uVar7 = uStack_40 ^ uVar1 ^ uVar22 ^ uVar7;
    uStack_34 = uVar7 << 1 | uVar7 < 0;
    uVar10 = uVar17 >> 2 | uVar17 * 0x40000000;
    uVar5 = (uVar24 * 0x20 | uVar24 >> 0x1b) + 0xca62c1d6 + (uVar17 ^ uVar12 ^ uVar16) + uStack_34 + uVar5;
    uVar15 = uVar3 ^ uVar6 ^ uVar11 ^ uStack_3c;
    uStack_30 = uVar15 << 1 | uVar15 < 0;
    uVar2 = uVar24 >> 2 | uVar24 * 0x40000000;
    uVar7 = (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6 + (uVar10 ^ uVar24 ^ uVar16) + uStack_30 + uVar12;
    uVar15 = uVar23 ^ uVar25 ^ uVar22 ^ uStack_38;
    uStack_2c = uVar15 << 1 | uVar15 < 0;
    uVar24 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar22 = (uVar7 * 0x20 | uVar7 >> 0x1b) + 0xca62c1d6 + (uVar10 ^ uVar2 ^ uVar5) + uStack_2c + uVar16;
    uVar15 = uVar4 ^ uVar14 ^ uVar6 ^ uStack_34;
    uStack_28 = uVar15 << 1 | uVar15 < 0;
    uVar17 = uVar7 >> 2 | uVar7 * 0x40000000;
    uVar5 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0xca62c1d6 + (uVar2 ^ uVar24 ^ uVar7) + uStack_28 + uVar10;
    uVar15 = uVar9 ^ uVar8 ^ uVar25 ^ uStack_30;
    uStack_24 = uVar15 << 1 | uVar15 < 0;
    uVar16 = uVar22 >> 2 | uVar22 * 0x40000000;
    uVar15 = (uVar24 ^ uVar17 ^ uVar22) + uStack_24 + uVar2 + (uVar5 * 0x20 | uVar5 >> 0x1b) + 0xca62c1d6;
    uVar22 = uStack_40 ^ uVar18 ^ uVar14 ^ uStack_2c;
    uVar6 = uVar5 >> 2 | uVar5 * 0x40000000;
    uVar14 = uVar1 ^ uVar8 ^ uStack_28 ^ uStack_3c;
    uStack_20 = uVar22 << 1 | uVar22 < 0;
    uStack_1c = uVar14 << 1 | uVar14 < 0;
    uVar22 = (uVar15 * 0x20 | uVar15 >> 0x1b) + (uVar5 ^ uVar17 ^ uVar16) + uStack_20 + uVar24 + 0xca62c1d6;
    uVar2 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar8 = (uVar22 * 0x20 | uVar22 >> 0x1b) + 0xca62c1d6 + (uVar6 ^ uVar15 ^ uVar16) + uStack_1c + uVar17;
    uVar15 = uVar3 ^ uVar18 ^ uStack_24 ^ uStack_38;
    uVar24 = uVar22 >> 2 | uVar22 * 0x40000000;
    uStack_18 = uVar15 << 1 | uVar15 < 0;
    uVar14 = uVar23 ^ uVar1 ^ uStack_20 ^ uStack_34;
    uVar15 = (uVar6 ^ uVar2 ^ uVar22) + uStack_18 + uVar16 + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6;
    uStack_14 = uVar14 << 1 | uVar14 < 0;
    uVar16 = uVar8 >> 2 | uVar8 * 0x40000000;
    uVar22 = (uVar2 ^ uVar24 ^ uVar8) + uStack_14 + uVar6 + (uVar15 * 0x20 | uVar15 >> 0x1b) + 0xca62c1d6;
    uVar8 = uVar4 ^ uVar3 ^ uStack_1c ^ uStack_30;
    uVar14 = uVar15 >> 2 | uVar15 * 0x40000000;
    uStack_10 = uVar8 << 1 | uVar8 < 0;
    uVar8 = uVar9 ^ uVar23 ^ uStack_18 ^ uStack_2c;
    uStack_c = uVar8 << 1 | uVar8 < 0;
    uVar15 = (uVar24 ^ uVar16 ^ uVar15) + uStack_10 + uVar2 + (uVar22 * 0x20 | uVar22 >> 0x1b) + 0xca62c1d6;
    uVar3 = (uVar15 * 0x20 | uVar15 >> 0x1b) + 0xca62c1d6 + (uVar22 ^ uVar16 ^ uVar14) + uStack_c + uVar24;
    uVar8 = uStack_40 ^ uVar4 ^ uStack_14 ^ uStack_28;
    uVar22 = uVar22 >> 2 | uVar22 * 0x40000000;
    uStack_8 = uVar8 << 1 | uVar8 < 0;
    uVar1 = uVar15 >> 2 | uVar15 * 0x40000000;
    uVar8 = (uVar3 * 0x20 | uVar3 >> 0x1b) + 0xca62c1d6 + (uVar22 ^ uVar15 ^ uVar14) + uStack_8 + uVar16;
    uVar15 = uVar9 ^ uStack_10 ^ uStack_24 ^ uStack_3c;
    uStack_4 = uVar15 << 1 | uVar15 < 0;
    param_1[1] = param_1[1] + uVar8;
    param_1[3] = param_1[3] + uVar1;
    param_1[4] = param_1[4] + uVar22;
    *param_1 = (uVar22 ^ uVar1 ^ uVar3) + *param_1 + uStack_4 + (uVar8 * 0x20 | uVar8 >> 0x1b) + 0xca62c1d6 + uVar14;
    param_1[2] = param_1[2] + (uVar3 >> 2 | uVar3 * 0x40000000);
    fcn.00010a9b(&uStack_40,0x40);
    return;
}


/* fcn.00014b89 @ 0x14b89 */

uint fcn.00014b89(uint param_1,uint32_t param_2,uchar *param_3,int param_4)

{
    uchar *arg_14h;
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t in_stack_00000030;
    int32_t in_stack_00000034;
    int32_t in_stack_00000038;
    int32_t in_stack_0000003c;
    uint32_t auStack_18 [3];
    uint uStack_c;
    uchar *puStack_8;
    
    arg_14h = fcn.000157a5(param_2);
    if (arg_14h == NULL) {
        uVar3 = 0xd;
    }
    else {
        uVar3 = 0;
        iVar1 = 0;
        if (param_4 != 0) {
            do {
                arg_14h[3] = iVar1;
                *arg_14h = iVar1 >> 0x18;
                arg_14h[1] = iVar1 >> 0x10;
                arg_14h[2] = iVar1 >> 8;
                uStack_c = param_1;
                auStack_18[0] = param_2;
                auStack_18[1] = 4;
                puStack_8 = arg_14h;
                if (param_2 == 0x14) {
                    fcn.00014a12(2,&uStack_c,auStack_18,arg_14h);
                }
                else if (param_2 == 0x20) {
                    fcn.000133cd(2,&uStack_c,auStack_18,arg_14h);
                }
                else if (param_2 == 0x30) {
                    fcn.00014b33(in_stack_00000030,in_stack_00000034,in_stack_00000038,in_stack_0000003c);
                }
                else {
                    if (param_2 != 0x40) {
                        uVar3 = 0xb;
                        break;
                    }
                    fcn.00015689(in_stack_00000030,in_stack_00000034,in_stack_00000038,in_stack_0000003c);
                }
                uVar2 = 0;
                do {
                    if (param_4 == 0) goto code_r0x00014c7f;
                    *param_3 = arg_14h[uVar2];
                    param_3 = param_3 + 1;
                    uVar2 = uVar2 + 1;
                    param_4 = param_4 + -1;
                } while (uVar2 < param_2);
                if (param_4 == 0) break;
                iVar1 = iVar1 + 1;
            } while( true );
        }
code_r0x00014c7f:
        fcn.0001574a(arg_14h);
    }
    return uVar3;
}


/* fcn.00015a1f @ 0x15a1f */

uint fcn.00015a1f(int param_1,int param_2,int32_t param_3,int32_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int arg_14h;
    int iVar3;
    uint32_t uStack_b4;
    uint32_t uStack_b0;
    uint32_t uStack_ac;
    char cStack_a7;
    int iStack_a4;
    uint32_t uStack_a0;
    int32_t iStack_9c;
    uint32_t uStack_98;
    uchar auStack_94 [20];
    int iStack_80;
    uchar auStack_40 [64];
    
    iVar2 = fcn.000169ee(param_2);
    if (iVar2 == 0) {
        return 0xffffffff;
    }
    if (*(param_2 + 0x50) != 7) {
        return 0xffffffff;
    }
    if (*(param_2 + 0x14) != 1) {
        return 0xffffffff;
    }
    iVar2 = fcn.00010eef(*(param_1 + 0x224),*(param_1 + 0x228));
    if (iVar2 == 0) {
        return 0xffffffff;
    }
    iStack_9c = param_4;
    arg_14h = fcn.000157a5(param_4);
    if (arg_14h == 0) {
        fcn.00010eea(iVar2);
        return 0xffffffff;
    }
    iVar3 = fcn.00010e06(iVar2,param_3,param_4,arg_14h,&iStack_9c);
    if (iVar3 < 0) {
        fcn.00010eea(iVar2);
        fcn.0001574a(arg_14h);
        return 0xffffffff;
    }
    fcn.00010eea(iVar2);
    iVar2 = fcn.00019f2d(arg_14h,iStack_9c,&uStack_ac);
    if (((-1 < iVar2) && (cStack_a7 == '\0')) && (iStack_a4 == 0x10)) {
        iVar3 = uStack_a0 + uStack_ac;
        iVar2 = fcn.00019f2d(uStack_ac,iVar3 - uStack_ac,&uStack_ac);
        if (((-1 < iVar2) && (cStack_a7 == '\0')) && (iStack_a4 == 0x10)) {
            uVar1 = uStack_a0 + uStack_ac;
            iVar2 = fcn.0001a012(uStack_ac,uStack_a0,auStack_94,&uStack_98);
            if ((iVar2 == 0) &&
               ((uVar1 <= uStack_98 ||
                (((iVar2 = fcn.00019f2d(uStack_98,uVar1 - uStack_98,&uStack_ac), -1 < iVar2 && (cStack_a7 == '\0'))
                 && ((iStack_a4 == 5 && (uStack_a0 + uStack_ac == uVar1)))))))) {
                iVar2 = fcn.00016a3e(auStack_94);
                if (iVar2 == 0) {
                    iVar2 = fcn.00016a72(auStack_94);
                    if (iVar2 == 0) {
                        iVar2 = fcn.00016acf(auStack_94);
                        if (iVar2 == 0) {
                            iVar2 = fcn.00016aeb(auStack_94);
                            if (iVar2 == 0) {
                                iVar2 = fcn.00015d44(auStack_94);
                                if (((iVar2 == 0) || (iStack_80 != 5)) || (*(param_2 + 0x18) != 4))
                                goto code_r0x00015d30;
                                uStack_b4 = 0x10;
                                uStack_b0 = CONCAT31(uStack_b0._1_3_,4);
                            }
                            else {
                                if (*(param_2 + 0x18) != 0xd) goto code_r0x00015d30;
                                uStack_b4 = 0x40;
                                uStack_b0 = CONCAT31(uStack_b0._1_3_,3);
                            }
                        }
                        else {
                            if (*(param_2 + 0x18) != 0xc) goto code_r0x00015d30;
                            uStack_b4 = 0x30;
                            uStack_b0 = CONCAT31(uStack_b0._1_3_,2);
                        }
                    }
                    else {
                        if (*(param_2 + 0x18) != 0xb) goto code_r0x00015d30;
                        uStack_b4 = 0x20;
                        uStack_b0 = CONCAT31(uStack_b0._1_3_,1);
                    }
                }
                else {
                    if (*(param_2 + 0x18) != 5) goto code_r0x00015d30;
                    uStack_b4 = 0x14;
                    uStack_b0 = uStack_b0 & 0xffffff00;
                }
                iVar2 = fcn.00019f2d(uVar1,iVar3 - uVar1,&uStack_ac);
                if (((-1 < iVar2) && (cStack_a7 == '\0')) &&
                   ((iStack_a4 == 4 && (iStack_9c + arg_14h <= uStack_ac + uStack_a0)))) {
                    iVar2 = fcn.00012dab(uStack_b0,&stack0x00000014,&stack0x00000018,auStack_40,&uStack_b4);
                    if (iVar2 != 0) {
                        return 0xffffffff;
                    }
                    if (((uStack_a0 == uStack_b4) &&
                        (iVar2 = fcn.00010aaf(uStack_ac,auStack_40,uStack_a0), iVar2 == 0)) &&
                       (iStack_9c + arg_14h <= uStack_ac + uStack_a0)) {
                        fcn.0001574a(arg_14h);
                        return 0;
                    }
                }
            }
        }
    }
code_r0x00015d30:
    fcn.0001574a(arg_14h);
    return 0xffffffff;
}


/* fcn.000164eb @ 0x164eb */

int fcn.000164eb(uint param_1,uint param_2,int param_3,uint *param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    uint8_t *puStack_14;
    uint8_t *puStack_10;
    char cStack_b;
    int iStack_8;
    uint32_t uStack_4;
    
    iVar1 = fcn.00019f2d(param_1,param_2,&puStack_10);
    if (((-1 < iVar1) && (cStack_b == '\0')) && (iStack_8 == 0x10)) {
        puVar4 = puStack_10 + uStack_4;
        *param_4 = puVar4;
        iVar1 = fcn.00019f2d(puStack_10,puVar4 - puStack_10,&puStack_10);
        if (-1 < iVar1) {
            if (cStack_b == '\x02') {
                iVar1 = fcn.00019f2d(puStack_10,puVar4 - puStack_10,&puStack_10);
                if (iVar1 < 0) {
                    return -1;
                }
                if (cStack_b != '\0') {
                    return -1;
                }
                if (iStack_8 != 2) {
                    return -1;
                }
                if (uStack_4 != 1) {
                    return -1;
                }
                uVar2 = *puStack_10;
                *(param_3 + 8) = uVar2;
                if (((uVar2 != 0) && (uVar2 != 1)) && (uVar2 != 2)) {
                    return -1;
                }
                iVar1 = fcn.00019f2d(puStack_10 + 1,puVar4 - (puStack_10 + 1),&puStack_10);
                if (iVar1 < 0) {
                    return -1;
                }
            }
            else {
                *(param_3 + 8) = 0;
            }
            if (((cStack_b == '\0') && (iStack_8 == 2)) && (uStack_4 - 1 < 0x14)) {
                puVar3 = puStack_10 + uStack_4;
                for (; (uStack_4 != 0 && (*puStack_10 == 0)); puStack_10 = puStack_10 + 1) {
                    uStack_4 = uStack_4 - 1;
                }
                puStack_14 = puVar3;
                fcn.00010871(param_3 + 0xc,puStack_10,uStack_4);
                *(param_3 + 0x20) = uStack_4;
                iVar1 = fcn.00015e03(puVar3,puVar4 - puVar3,param_3 + 0x24,&puStack_14);
                if ((((iVar1 == 0) &&
                     (iVar1 = fcn.0001612a(puStack_14,puVar4 - puStack_14,param_3 + 0x78,&puStack_14), iVar1 == 0))
                    && (iVar1 = fcn.0001691a(puStack_14,puVar4 - puStack_14,param_3,&puStack_14), iVar1 == 0)) &&
                   ((iVar1 = fcn.0001612a(puStack_14,puVar4 - puStack_14,param_3 + 0x120,&puStack_14), iVar1 == 0 &&
                    (iVar1 = fcn.00016436(puStack_14,puVar4 - puStack_14,param_3,&puStack_14), iVar1 == 0)))) {
                    if ((puStack_14 == puVar4) || (*(param_3 + 8) == 0)) {
                        return 0;
                    }
                    iVar1 = fcn.00019f2d(puStack_14,puVar4 - puStack_14,&puStack_10);
                    if ((-1 < iVar1) && (cStack_b == '\x02')) {
                        if (iStack_8 == 1) {
                            puVar3 = puStack_10 + uStack_4;
                            if (puVar3 == puVar4) {
                                return 0;
                            }
                            iVar1 = fcn.00019f2d(puVar3,puVar4 - puVar3,&puStack_10);
                            if (iVar1 < 0) {
                                return -1;
                            }
                            if (cStack_b != '\x02') {
                                return -1;
                            }
                        }
                        if (iStack_8 == 2) {
                            puVar3 = puStack_10 + uStack_4;
                            if (puVar3 == puVar4) {
                                return 0;
                            }
                            iVar1 = fcn.00019f2d(puVar3,puVar4 - puVar3,&puStack_10);
                            if (iVar1 < 0) {
                                return -1;
                            }
                            if (cStack_b != '\x02') {
                                return -1;
                            }
                        }
                        if (iStack_8 != 3) {
                            return 0;
                        }
                        if (*(param_3 + 8) == 2) {
                            iVar1 = fcn.000160c8(param_3,puStack_10,uStack_4);
                            return (-1 < iVar1) - 1;
                        }
                    }
                }
            }
        }
    }
    return -1;
}


/* fcn.00019ebe @ 0x19ebe */

uint32_t __cdecl fcn.00019ebe(int32_t arg_8h,uint32_t arg_ch)

{
    uint32_t uVar1;
    int iVar2;
    uchar *puVar3;
    uint32_t uVar4;
    
    uVar4 = 0;
    puVar3 = arg_8h + 1;
    if (1 < arg_ch) {
        uVar4 = fcn.0001a0df(*puVar3);
        uVar4 = uVar4 & 0xff;
        puVar3 = arg_8h + 2;
    }
    if (2 < arg_ch) {
        uVar1 = fcn.0001a0df(*puVar3);
        uVar4 = uVar4 | (uVar1 & 0xff) << 8;
        puVar3 = puVar3 + 1;
    }
    if (3 < arg_ch) {
        uVar1 = fcn.0001a0df(*puVar3);
        uVar4 = uVar4 | (uVar1 & 0xff) << 0x10;
        puVar3 = puVar3 + 1;
    }
    if (4 < arg_ch) {
        iVar2 = fcn.0001a0df(*puVar3);
        uVar4 = uVar4 | iVar2 << 0x18;
    }
    return uVar4;
}


/* fcn.00016077 @ 0x16077 */

uint __cdecl fcn.00016077(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint uVar1;
    
    if ((((3 < *(arg_ch + 0x50)) && (*arg_ch == 2)) && (*(arg_ch + 4) == 5)) && (*(arg_ch + 8) == 0x1d)) {
        if (*(arg_ch + 0xc) == 0xf) {
            uVar1 = fcn.00015f48(arg_8h,arg_10h,arg_14h);
        }
        else {
            if (*(arg_ch + 0xc) != 0x13) {
                return 1;
            }
            uVar1 = fcn.00015e68(arg_8h,arg_10h,arg_14h);
        }
        return uVar1;
    }
    return 1;
}


/* fcn.00015e68 @ 0x15e68 */

uint __cdecl fcn.00015e68(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_ch,arg_10h,&var_10h);
    if (((-1 < iVar1) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
        *(arg_8h + 0x288) = *(arg_8h + 0x288) | 1;
        if (var_4h == 0) {
            return 0;
        }
        uVar3 = var_10h + var_4h;
        iVar1 = fcn.00019f2d(var_10h,var_4h,&var_10h);
        if ((-1 < iVar1) && (var_bh == '\0')) {
            if (stack0xfffffff4 == 1) {
                *(arg_8h + 0x28c) = *var_10h;
                uVar2 = var_4h + var_10h;
                if (uVar3 <= uVar2) {
                    return 0;
                }
                iVar1 = fcn.00019f2d(uVar2,uVar3 - uVar2,&var_10h);
                if (iVar1 < 0) {
                    return 0xffffffff;
                }
                if (var_bh != '\0') {
                    return 0xffffffff;
                }
            }
            if (*NULL == 2) {
                uVar3 = 0;
                for (; var_4h != 0; var_4h = var_4h + -1) {
                    uVar3 = uVar3 << 8 | *var_10h;
                    var_10h = var_10h + 1;
                }
                *(arg_8h + 0x288) = *(arg_8h + 0x288) | 2;
                *(arg_8h + 0x290) = uVar3;
                return 0;
            }
        }
    }
    return 0xffffffff;
}


/* fcn.00015f48 @ 0x15f48 */

uint __cdecl fcn.00015f48(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    uint32_t var_bh;
    uint32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_ch,arg_10h,&var_10h);
    if ((((iVar1 < 0) || (var_bh != '\0')) || (stack0xfffffff4 != 3)) || (var_4h == 0)) {
        uVar2 = 0xffffffff;
    }
    else {
        *(arg_8h + 0x288) = *(arg_8h + 0x288) | 4;
        uVar2 = fcn.00019ebe(var_10h,var_4h);
        *(arg_8h + 0x294) = uVar2;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00015fa0 @ 0x15fa0 */

int __cdecl fcn.00015fa0(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int iVar2;
    int32_t var_64h;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_ch,arg_10h,&var_10h);
    if (((-1 < iVar1) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
        iVar2 = var_4h + var_10h;
        arg_ch = var_10h;
        *arg_14h = iVar2;
        iVar1 = fcn.0001a012(var_10h,iVar2 - var_10h,&var_64h,&arg_ch);
        if (((-1 < iVar1) && (iVar1 = fcn.00019f2d(arg_ch,iVar2 - arg_ch,&var_10h), -1 < iVar1)) && (var_bh == '\0'))
        {
            if (stack0xfffffff4 == 1) {
                arg_ch = var_10h;
                iVar1 = fcn.00019f2d(var_10h,iVar2 - var_10h,&var_10h);
                if (iVar1 < 0) {
                    return -1;
                }
                if ((var_bh != '\0') && (var_bh != '\x03')) {
                    return -1;
                }
            }
            if (stack0xfffffff4 == 4) {
                iVar2 = fcn.00016077(arg_8h,&var_64h,var_10h,var_4h);
                iVar1 = 0;
                if (iVar2 < 0) {
                    iVar1 = iVar2;
                }
                return iVar1;
            }
        }
    }
    return -1;
}


/* fcn.0001691a @ 0x1691a */

uint __cdecl fcn.0001691a(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_8h,arg_ch,&var_10h);
    if ((((-1 < iVar1) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) && (var_4h <= (arg_8h - var_10h) + arg_ch)) {
        *arg_14h = var_4h + var_10h;
        iVar1 = fcn.00019f2d(var_10h,var_4h,&var_10h);
        if ((((-1 < iVar1) && (var_bh == '\0')) &&
            ((iVar1 = fcn.000167c7(var_10h,var_4h,stack0xfffffff4,arg_10h + 0x1c8), -1 < iVar1 &&
             ((iVar1 = fcn.00019f2d(var_10h + var_4h,*arg_14h - (var_10h + var_4h),&var_10h), -1 < iVar1 &&
              (var_bh == '\0')))))) &&
           (iVar1 = fcn.000167c7(var_10h,var_4h,stack0xfffffff4,arg_10h + 0x1cc), -1 < iVar1)) {
            return 0;
        }
    }
    return 0xffffffff;
}


/* fcn.00016436 @ 0x16436 */

uint __cdecl fcn.00016436(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int32_t iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    uVar4 = arg_ch + arg_8h;
    iVar2 = fcn.00019f2d(arg_8h,uVar4 - arg_8h,&var_10h);
    iVar1 = arg_10h;
    if (((-1 < iVar2) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
        uVar3 = var_4h + var_10h;
        arg_8h = var_10h;
        if (uVar3 <= uVar4) {
            *arg_14h = uVar3;
            iVar2 = fcn.00015e03(var_10h,uVar3 - var_10h,arg_10h + 0x1d0,&arg_8h);
            if (((iVar2 == 0) && (iVar2 = fcn.00019f2d(arg_8h,uVar3 - arg_8h,&var_10h), -1 < iVar2)) &&
               ((var_bh == '\0' && ((stack0xfffffff4 == 3 && (var_4h != 0)))))) {
                *(iVar1 + 0x224) = var_10h + 1;
                *(iVar1 + 0x228) = var_4h + -1;
                return 0;
            }
        }
    }
    return 0xffffffff;
}


/* fcn.000160c8 @ 0x160c8 */

uint __cdecl fcn.000160c8(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    int iVar1;
    int32_t var_10h;
    uint32_t var_bh;
    int32_t var_4h;
    
    iVar1 = fcn.00019f2d(arg_ch,arg_10h,&var_10h);
    if (((-1 < iVar1) && (var_bh == '\0')) && (stack0xfffffff4 == 0x10)) {
        arg_ch = var_10h;
        do {
            if (var_4h + var_10h <= arg_ch) {
                return 0;
            }
            iVar1 = fcn.00015fa0(arg_8h,arg_ch,(var_4h + var_10h) - arg_ch,&arg_ch);
        } while (-1 < iVar1);
    }
    return 0xffffffff;
}


/* fcn.00019496 @ 0x19496 */

void __cdecl fcn.00019496(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h)

{
    uint uVar1;
    uint32_t arg_10h_00;
    int32_t var_ch;
    
    arg_10h_00 = 8;
    if (arg_ch < 9) {
        arg_10h_00 = arg_ch & 0xff;
    }
    fcn.00010871(&var_ch,arg_8h,arg_10h_00);
    *(&var_ch + arg_10h_00) = 0;
    uVar1 = fcn.000109e9(&var_ch);
    *arg_10h = uVar1;
    return;
}


/* fcn.000109e9 @ 0x109e9 */

int32_t __cdecl fcn.000109e9(int32_t arg_8h)

{
    int32_t var_4h;
    
    fcn.00010a20(&var_4h);
    return var_4h;
}


/* fcn.000194d7 @ 0x194d7 */

uint32_t fcn.000194d7(char *param_1)

{
    char cVar1;
    bool bVar2;
    char *pcVar3;
    uint32_t uVar4;
    uint32_t arg_ch;
    uint32_t arg_8h;
    
    arg_8h = 0;
    pcVar3 = param_1;
    uVar4 = 0;
    do {
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        arg_ch = uVar4;
        if (cVar1 == '\0') break;
        arg_ch = uVar4 + 1;
        bVar2 = uVar4 < 0x1000;
        uVar4 = arg_ch;
    } while (bVar2);
    if (arg_ch < 0x1000) {
        arg_8h = fcn.000157a5(arg_ch);
        if (arg_8h != 0) {
            fcn.00010a9b(arg_8h,arg_ch);
            fcn.00010871(arg_8h,param_1,arg_ch);
        }
    }
    return arg_8h;
}


/* fcn.00016b92 @ 0x16b92 */

void fcn.00016b92(char *param_1)

{
    char cVar1;
    uchar extraout_CL;
    uchar *puVar2;
    char *pcVar3;
    int iVar4;
    char *pcVar5;
    ulong uVar6;
    
    iVar4 = 1;
    cVar1 = *param_1;
    pcVar5 = param_1;
    pcVar3 = param_1;
    while (cVar1 != '\0') {
        if ((iVar4 == 0) || (uVar6 = fcn.00016c27(*pcVar5), pcVar3 = uVar6 >> 0x20, uVar6 == 0)) {
            uVar6 = fcn.00016c27(*pcVar5);
            puVar2 = uVar6 >> 0x20;
            iVar4 = uVar6;
            *puVar2 = extraout_CL;
            pcVar3 = puVar2 + 1;
        }
        pcVar5 = pcVar5 + 1;
        cVar1 = *pcVar5;
    }
    *pcVar3 = '\0';
    if ((param_1 < pcVar3 + -1) && (uVar6 = fcn.00016c27(pcVar3[-1]), uVar6 != 0)) {
        *(uVar6 >> 0x20) = 0;
    }
    return;
}


/* fcn.00010980 @ 0x10980 */

int fcn.00010980(char *param_1,char *param_2)

{
    char cVar1;
    char cVar2;
    char cVar3;
    char cVar4;
    int iVar5;
    
    cVar1 = *param_1;
    if (cVar1 + 0x9fU < 0x1a) {
        cVar4 = cVar1 + -0x20;
    }
    else {
        cVar4 = cVar1;
    }
    cVar2 = *param_2;
    cVar3 = cVar2;
    if (cVar2 + 0x9fU < 0x1a) {
        cVar3 = cVar2 + -0x20;
    }
    if (cVar1 != '\0') {
        iVar5 = param_1 - param_2;
        do {
            if ((cVar2 == '\0') || (cVar4 != cVar3)) break;
            param_2 = param_2 + 1;
            cVar1 = param_2[iVar5];
            cVar4 = cVar1;
            if (cVar1 + 0x9fU < 0x1a) {
                cVar4 = cVar1 + -0x20;
            }
            cVar2 = *param_2;
            cVar3 = cVar2;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar3 = cVar2 + -0x20;
            }
        } while (cVar1 != '\0');
    }
    return cVar4 - cVar3;
}


/* fcn.00016c27 @ 0x16c27 */

uint fcn.00016c27(char param_1)

{
    if ((param_1 != ' ') && (param_1 != '\t')) {
        return 0;
    }
    return 1;
}


/* fcn.00017a8e @ 0x17a8e */

int fcn.00017a8e(int32_t param_1,int *param_2,int *param_3,uint32_t param_4,int param_5)

{
    uint32_t uVar1;
    int8_t iVar2;
    int iVar3;
    int iVar4;
    uchar *puVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int iStack_1030;
    uint32_t uStack_1028;
    int iStack_1024;
    uint32_t uStack_1020;
    int iStack_101c;
    uint32_t uStack_1018;
    uchar auStack_1010 [16];
    uchar auStack_1000 [16];
    uchar auStack_ff0 [4080];
    
    iVar3 = fcn.0001746e(param_2);
    if (iVar3 < 8) {
        uVar12 = 2;
    }
    else if (iVar3 < 0x25) {
        uVar12 = 3;
    }
    else if (iVar3 < 0x8d) {
        uVar12 = 4;
    }
    else if (iVar3 < 0x1c3) {
        uVar12 = 5;
    }
    else if (iVar3 < 0x518) {
        uVar12 = 6;
    }
    else {
        uVar12 = (0xdc9 < iVar3) + 7;
    }
    iVar3 = fcn.0001802b(auStack_ff0);
    if (iVar3 != 0) {
        return iVar3;
    }
    iVar2 = uVar12;
    iVar3 = 1 << (iVar2 - 1U & 0x1f);
    uVar11 = 1 << iVar2;
    if (iVar3 < uVar11) {
        puVar5 = auStack_1000 + iVar3 * 0x10;
        iVar9 = iVar3;
        do {
            iVar4 = fcn.0001802b(puVar5);
            if (iVar4 != 0) {
                if (iVar3 < iVar9) {
                    puVar5 = auStack_1000 + iVar3 * 0x10;
                    iVar9 = iVar9 - iVar3;
                    do {
                        fcn.00017334(puVar5);
                        puVar5 = puVar5 + 0x10;
                        iVar9 = iVar9 + -1;
                    } while (iVar9 != 0);
                }
                fcn.00017334(auStack_ff0);
                return iVar4;
            }
            iVar9 = iVar9 + 1;
            puVar5 = puVar5 + 0x10;
        } while (iVar9 < uVar11);
    }
    if (param_5 != 0) {
        iVar9 = -3;
        goto code_r0x00017b67;
    }
    uVar6 = *param_3[3];
    if ((uVar6 & 1) != 0) {
        iVar9 = (uVar6 * 2 + 4 & 8) + uVar6;
        iVar9 = (2 - iVar9 * uVar6) * iVar9;
        iVar9 = (2 - iVar9 * uVar6) * iVar9;
        uVar6 = (iVar9 * uVar6 + -2) * iVar9 & 0xfffffff;
        if ((*param_3 * 2 < 0x1ff) && (*param_3 < 0x100)) {
            iVar9 = fcn.0001802b(auStack_1010);
            if (iVar9 != 0) goto code_r0x00017b67;
            iVar9 = fcn.000182b7(auStack_1010,param_3);
            if (((iVar9 == 0) && (iVar9 = fcn.000185a9(param_1,auStack_1010,param_3,auStack_ff0), iVar9 == 0)) &&
               (iVar9 = fcn.00017413(auStack_ff0,auStack_1000 + (0x10 << (iVar2 - 1U & 0x1f))), iVar9 == 0)) {
                iStack_1030 = 0;
                puVar5 = auStack_1000 + (0x10 << (iVar2 - 1U & 0x1f));
                do {
                    iVar9 = fcn.000188b1(puVar5,puVar5);
                    if ((iVar9 != 0) || (iVar9 = fcn.00016d99(puVar5,param_3,uVar6), iVar9 != 0))
                    goto code_r0x00017fb6;
                    iStack_1030 = iStack_1030 + 1;
                } while (iStack_1030 < uVar12 - 1);
                iStack_1030 = iVar3 + 1;
                if (iStack_1030 < uVar11) {
                    puVar5 = auStack_1000 + iStack_1030 * 0x10;
                    do {
                        iVar9 = fcn.00018336(puVar5 + -0x10,auStack_ff0,puVar5);
                        if ((iVar9 != 0) || (iVar9 = fcn.00016d99(puVar5,param_3,uVar6), iVar9 != 0))
                        goto code_r0x00017fb6;
                        iStack_1030 = iStack_1030 + 1;
                        puVar5 = puVar5 + 0x10;
                    } while (iStack_1030 < uVar11);
                }
                iVar9 = 0;
                uStack_1028 = 0;
                iStack_1030 = 0;
                iStack_1024 = 1;
                uVar7 = 0;
                iStack_101c = *param_2 + -1;
                uStack_1018 = 0;
                uVar10 = 0;
                uStack_1020 = 0;
code_r0x00017d91:
                iStack_1024 = iStack_1024 + -1;
                if (iStack_1024 == 0) {
                    if (iStack_101c == -1) {
                        if (((iVar9 != 2) || (uVar7 < 1)) || (iStack_1030 = 0, uVar7 < 1)) goto code_r0x00017f8a;
                        goto code_r0x00017f0b;
                    }
                    iStack_1024 = 0x1c;
                    uStack_1028 = *(param_2[3] + iStack_101c * 4);
                    iStack_101c = iStack_101c + -1;
                    uVar7 = uStack_1018;
                }
                uVar1 = uStack_1028 << 1;
                uVar8 = uStack_1028 >> 0x1b & 1;
                uStack_1028 = uVar1;
                if (iVar9 == 0) {
                    if (uVar8 != 0) goto code_r0x00017dd9;
                    goto code_r0x00017d8d;
                }
code_r0x00017dd9:
                if ((iVar9 != 1) || (uVar8 != 0)) goto code_r0x00017e26;
                iVar9 = fcn.000188b1(auStack_1010,auStack_1010);
                if ((iVar9 == 0) && (iVar9 = fcn.00016d99(auStack_1010,param_3,uVar6), iVar9 == 0)) {
                    uVar7 = uStack_1018;
                    iVar9 = iStack_1030;
                    uVar10 = uStack_1020;
                    goto code_r0x00017d8d;
                }
            }
            goto code_r0x00017fb6;
        }
    }
    iVar9 = -3;
    goto code_r0x00017b67;
code_r0x00017e26:
    uVar7 = uVar7 + 1;
    uVar10 = uVar10 | uVar8 << (iVar2 - uVar7 & 0x1fU);
    iVar9 = 2;
    iStack_1030 = 2;
    uStack_1020 = uVar10;
    uStack_1018 = uVar7;
    if (uVar7 == uVar12) {
        iStack_1030 = 0;
        do {
            iVar9 = fcn.000188b1(auStack_1010,auStack_1010);
            if ((iVar9 != 0) || (iVar9 = fcn.00016d99(auStack_1010,param_3,uVar6), iVar9 != 0))
            goto code_r0x00017fb6;
            iStack_1030 = iStack_1030 + 1;
        } while (iStack_1030 < uVar12);
        iVar9 = fcn.00018336(auStack_1010,auStack_1000 + uVar10 * 0x10,auStack_1010);
        if ((iVar9 != 0) || (iVar9 = fcn.00016d99(auStack_1010,param_3,uVar6), iVar9 != 0)) goto code_r0x00017fb6;
        iVar9 = 1;
        iStack_1030 = 1;
        uVar7 = 0;
        uVar10 = uVar7;
        uStack_1020 = uVar7;
        uStack_1018 = uVar7;
code_r0x00017d8d:
    }
    goto code_r0x00017d91;
    while (iStack_1030 = iStack_1030 + 1, iStack_1030 < uStack_1018) {
code_r0x00017f0b:
        iVar9 = fcn.000188b1(auStack_1010,auStack_1010);
        if (((iVar9 != 0) || (iVar9 = fcn.00016d99(auStack_1010,param_3,uVar6), iVar9 != 0)) ||
           ((uStack_1020 = uStack_1020 * 2, (uStack_1020 & uVar11) != 0 &&
            ((iVar9 = fcn.00018336(auStack_1010,auStack_ff0,auStack_1010), iVar9 != 0 ||
             (iVar9 = fcn.00016d99(auStack_1010,param_3,uVar6), iVar9 != 0)))))) goto code_r0x00017fb6;
    }
code_r0x00017f8a:
    iVar9 = fcn.00016d99(auStack_1010,param_3,uVar6);
    if (iVar9 == 0) {
        fcn.00017a62(auStack_1010,param_4);
    }
code_r0x00017fb6:
    fcn.00017334(auStack_1010);
code_r0x00017b67:
    fcn.00017334(auStack_ff0);
    if (iVar3 < uVar11) {
        puVar5 = auStack_1000 + iVar3 * 0x10;
        iVar3 = uVar11 - iVar3;
        do {
            fcn.00017334(puVar5);
            puVar5 = puVar5 + 0x10;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    return iVar9;
}


/* fcn.00018ad8 @ 0x18ad8 */

int fcn.00018ad8(int32_t param_1,int *param_2,int *param_3,uint32_t param_4,int param_5)

{
    uint32_t uVar1;
    int8_t iVar2;
    int iVar3;
    int iVar4;
    uchar *puVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iStack_1040;
    code *pcStack_103c;
    uint32_t uStack_1038;
    int iStack_1034;
    uint32_t uStack_1030;
    int iStack_102c;
    uint32_t uStack_1028;
    uchar auStack_1020 [16];
    uchar auStack_1010 [16];
    uchar auStack_1000 [16];
    uchar auStack_ff0 [4080];
    
    iVar3 = fcn.0001746e(param_2);
    if (iVar3 < 8) {
        uVar11 = 2;
    }
    else if (iVar3 < 0x25) {
        uVar11 = 3;
    }
    else if (iVar3 < 0x8d) {
        uVar11 = 4;
    }
    else if (iVar3 < 0x1c3) {
        uVar11 = 5;
    }
    else if (iVar3 < 0x518) {
        uVar11 = 6;
    }
    else {
        uVar11 = (0xdc9 < iVar3) + 7;
    }
    iVar3 = fcn.0001802b(auStack_ff0);
    if (iVar3 != 0) {
        return iVar3;
    }
    iVar2 = uVar11;
    iVar3 = 1 << (iVar2 - 1U & 0x1f);
    uVar10 = 1 << iVar2;
    if (iVar3 < uVar10) {
        puVar5 = auStack_1000 + iVar3 * 0x10;
        iVar8 = iVar3;
        do {
            iVar4 = fcn.0001802b(puVar5);
            if (iVar4 != 0) {
                if (iVar3 < iVar8) {
                    puVar5 = auStack_1000 + iVar3 * 0x10;
                    iVar8 = iVar8 - iVar3;
                    do {
                        fcn.00017334(puVar5);
                        puVar5 = puVar5 + 0x10;
                        iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                }
                fcn.00017334(auStack_ff0);
                return iVar4;
            }
            iVar8 = iVar8 + 1;
            puVar5 = puVar5 + 0x10;
        } while (iVar8 < uVar10);
    }
    iVar8 = fcn.0001802b(auStack_1010);
    if (iVar8 != 0) goto code_r0x00018fb1;
    if (param_5 == 0) {
        iVar8 = fcn.00017278(auStack_1010,*param_3 * 0x38);
        if ((iVar8 == 0) && (iVar8 = fcn.00017494(auStack_1010,param_3,auStack_1010,0), iVar8 == 0)) {
            pcStack_103c = 0x8603;
            goto code_r0x00018c49;
        }
    }
    else {
        iVar8 = fcn.000187e2(param_3,auStack_1010);
        if (iVar8 == 0) {
            pcStack_103c = 0x873d;
code_r0x00018c49:
            iVar8 = fcn.000181b4(param_1,param_3,auStack_ff0);
            if ((iVar8 == 0) &&
               (iVar8 = fcn.00017413(auStack_ff0,auStack_1000 + (0x10 << (iVar2 - 1U & 0x1f))), iVar8 == 0)) {
                iStack_1040 = 0;
                puVar5 = auStack_1000 + (0x10 << (iVar2 - 1U & 0x1f));
                do {
                    iVar8 = fcn.000188b1(puVar5,puVar5);
                    if ((iVar8 != 0) || (iVar8 = (*pcStack_103c)(puVar5,param_3,auStack_1010), iVar8 != 0))
                    goto code_r0x00018fa6;
                    iStack_1040 = iStack_1040 + 1;
                } while (iStack_1040 < uVar11 - 1);
                iVar4 = iVar3 + 1;
                if (iVar4 < uVar10) {
                    puVar5 = auStack_1000 + iVar4 * 0x10;
                    do {
                        iVar8 = fcn.00018336(puVar5 + -0x10,auStack_ff0,puVar5);
                        if ((iVar8 != 0) || (iVar8 = (*pcStack_103c)(puVar5,param_3,auStack_1010), iVar8 != 0))
                        goto code_r0x00018fa6;
                        iVar4 = iVar4 + 1;
                        puVar5 = puVar5 + 0x10;
                    } while (iVar4 < uVar10);
                }
                iVar8 = fcn.0001802b(auStack_1020);
                if (iVar8 == 0) {
                    fcn.00018888(auStack_1020,1);
                    iVar8 = 0;
                    iStack_1034 = 1;
                    uStack_1038 = 0;
                    iStack_102c = *param_2 + -1;
                    uVar6 = 0;
                    iStack_1040 = 0;
                    uStack_1028 = 0;
                    uVar9 = 0;
                    uStack_1030 = uVar9;
code_r0x00018da5:
                    iStack_1034 = iStack_1034 + -1;
                    if (iStack_1034 == 0) {
                        if (iStack_102c == -1) {
                            if (((iVar8 != 2) || (uVar6 < 1)) || (iVar4 = 0, uVar6 < 1)) goto code_r0x00018f81;
                            goto code_r0x00018f0c;
                        }
                        iStack_1034 = 0x1c;
                        uStack_1038 = *(param_2[3] + iStack_102c * 4);
                        iStack_102c = iStack_102c + -1;
                        uVar6 = uStack_1028;
                    }
                    uVar1 = uStack_1038 << 1;
                    uVar7 = uStack_1038 >> 0x1b & 1;
                    uStack_1038 = uVar1;
                    if (iVar8 == 0) {
                        if (uVar7 != 0) goto code_r0x00018ded;
                        goto code_r0x00018da1;
                    }
code_r0x00018ded:
                    if ((iVar8 != 1) || (uVar7 != 0)) goto code_r0x00018e3a;
                    iVar8 = fcn.000188b1(auStack_1020,auStack_1020);
                    if ((iVar8 == 0) && (iVar8 = (*pcStack_103c)(auStack_1020,param_3,auStack_1010), iVar8 == 0)) {
                        uVar6 = uStack_1028;
                        iVar8 = iStack_1040;
                        uVar9 = uStack_1030;
                        goto code_r0x00018da1;
                    }
                    goto code_r0x00018f97;
                }
            }
        }
    }
code_r0x00018fa6:
    fcn.00017334(auStack_1010);
code_r0x00018fb1:
    fcn.00017334(auStack_ff0);
    if (iVar3 < uVar10) {
        puVar5 = auStack_1000 + iVar3 * 0x10;
        iVar3 = uVar10 - iVar3;
        do {
            fcn.00017334(puVar5);
            puVar5 = puVar5 + 0x10;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
    }
    return iVar8;
    while (iVar4 = iVar4 + 1, iVar4 < uStack_1028) {
code_r0x00018f0c:
        iVar8 = fcn.000188b1(auStack_1020,auStack_1020);
        if (((iVar8 != 0) || (iVar8 = (*pcStack_103c)(auStack_1020,param_3,auStack_1010), iVar8 != 0)) ||
           ((uStack_1030 = uStack_1030 * 2, (uStack_1030 & uVar10) != 0 &&
            ((iVar8 = fcn.00018336(auStack_1020,auStack_ff0,auStack_1020), iVar8 != 0 ||
             (iVar8 = (*pcStack_103c)(auStack_1020,param_3,auStack_1010), iVar8 != 0)))))) goto code_r0x00018f97;
    }
code_r0x00018f81:
    fcn.00017a62(auStack_1020,param_4);
    iVar8 = 0;
code_r0x00018f97:
    fcn.00017334(auStack_1020);
    goto code_r0x00018fa6;
code_r0x00018e3a:
    uVar6 = uVar6 + 1;
    uVar9 = uVar9 | uVar7 << (iVar2 - uVar6 & 0x1fU);
    iVar8 = 2;
    iStack_1040 = 2;
    uStack_1030 = uVar9;
    uStack_1028 = uVar6;
    if (uVar6 == uVar11) {
        iStack_1040 = 0;
        do {
            iVar8 = fcn.000188b1(auStack_1020,auStack_1020);
            if ((iVar8 != 0) || (iVar8 = (*pcStack_103c)(auStack_1020,param_3,auStack_1010), iVar8 != 0))
            goto code_r0x00018f97;
            iStack_1040 = iStack_1040 + 1;
        } while (iStack_1040 < uVar11);
        iVar8 = fcn.00018336(auStack_1020,auStack_1000 + uVar9 * 0x10,auStack_1020);
        if ((iVar8 != 0) || (iVar8 = (*pcStack_103c)(auStack_1020,param_3,auStack_1010), iVar8 != 0))
        goto code_r0x00018f97;
        iVar8 = 1;
        iStack_1040 = 1;
        uVar6 = 0;
        uVar9 = uVar6;
        uStack_1030 = uVar6;
        uStack_1028 = uVar6;
code_r0x00018da1:
    }
    goto code_r0x00018da5;
}


/* fcn.00018940 @ 0x18940 */

int __cdecl fcn.00018940(int32_t arg_8h,int32_t arg_ch)

{
    uchar uVar1;
    int iVar2;
    int iVar3;
    uint32_t var_10h;
    int32_t var_4h;
    
    iVar2 = fcn.00018085(&var_10h,arg_8h);
    if (iVar2 != 0) {
        return iVar2;
    }
    iVar2 = 0;
    while (var_10h != 0) {
        *(iVar2 + arg_ch) = *var_4h;
        iVar2 = iVar2 + 1;
        iVar3 = fcn.0001791c(&var_10h,8,&var_10h,0);
        if (iVar3 != 0) goto code_r0x000189a7;
    }
    iVar2 = iVar2 + -1;
    iVar3 = 0;
    if (0 < iVar2) {
        do {
            uVar1 = *(iVar3 + arg_ch);
            *(iVar3 + arg_ch) = *(iVar2 + arg_ch);
            iVar3 = iVar3 + 1;
            *(iVar2 + arg_ch) = uVar1;
            iVar2 = iVar2 + -1;
        } while (iVar3 < iVar2);
    }
    iVar3 = 0;
code_r0x000189a7:
    fcn.00017334(&var_10h);
    return iVar3;
}


/* fcn.00017fce @ 0x17fce */

uint fcn.00017fce(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    
    if (*(param_1 + 4) < param_2) {
        uVar2 = param_2 & 0x8000001f;
        if (uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xffffffe0) + 1;
        }
        iVar4 = param_2 + (0x40 - uVar2);
        iVar1 = fcn.0001583e(*(param_1 + 0xc),iVar4 * 4);
        if (iVar1 == 0) {
            return 0xfffffffe;
        }
        iVar3 = *(param_1 + 4);
        *(param_1 + 0xc) = iVar1;
        *(param_1 + 4) = iVar4;
        if (iVar3 < iVar4) {
            do {
                *(*(param_1 + 0xc) + iVar3 * 4) = 0;
                iVar3 = iVar3 + 1;
            } while (iVar3 < *(param_1 + 4));
        }
    }
    return 0;
}


/* fcn.000189ba @ 0x189ba */

void fcn.000189ba(uint *param_1)

{
    uint *puVar1;
    int iVar2;
    
    iVar2 = 0;
    puVar1 = param_1[3];
    param_1[2] = 0;
    *param_1 = 0;
    if (0 < param_1[1]) {
        do {
            *puVar1 = 0;
            iVar2 = iVar2 + 1;
            puVar1 = puVar1 + 1;
        } while (iVar2 < param_1[1]);
    }
    return;
}


/* fcn.00018430 @ 0x18430 */

int fcn.00018430(int *param_1,int param_2,int *param_3)

{
    int *piVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    int iStack_4;
    
    piVar1 = param_3;
    if ((param_1 == param_3) || (iVar2 = fcn.00017413(param_1,param_3), iVar2 == 0)) {
        iVar2 = *param_3 + 1 + param_2 / 0x1c;
        if (((iVar2 <= param_3[1]) || (iVar2 = fcn.00017fce(param_3,iVar2), iVar2 == 0)) &&
           ((param_2 < 0x1c || (iVar2 = fcn.0001814a(param_3,param_2 / 0x1c), iVar2 == 0)))) {
            if (param_2 % 0x1c != 0) {
                uVar3 = param_2 % 0x1c;
                puVar4 = param_3[3];
                param_3 = NULL;
                iStack_4 = 0;
                if (0 < *piVar1) {
                    do {
                        uVar5 = *puVar4 >> (0x1c - uVar3 & 0x1f) & (1 << (uVar3 & 0x1f)) - 1U;
                        *puVar4 = (*puVar4 << (uVar3 & 0x1f) | param_3) & 0xfffffff;
                        puVar4 = puVar4 + 1;
                        iStack_4 = iStack_4 + 1;
                        param_3 = uVar5;
                    } while (iStack_4 < *piVar1);
                    if (uVar5 != 0) {
                        *(piVar1[3] + *piVar1 * 4) = uVar5;
                        *piVar1 = *piVar1 + 1;
                    }
                }
            }
            fcn.0001730e(piVar1);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.0001730e @ 0x1730e */

void fcn.0001730e(int *param_1)

{
    int iVar1;
    
    iVar1 = *param_1;
    if (0 < iVar1) {
        do {
            if (*(param_1[3] + -4 + *param_1 * 4) != 0) break;
            iVar1 = *param_1 + -1;
            *param_1 = iVar1;
        } while (0 < iVar1);
        iVar1 = *param_1;
    }
    if (iVar1 == 0) {
        param_1[2] = 0;
    }
    return;
}


/* fcn.000193cb @ 0x193cb */

int fcn.000193cb(int *param_1,int *param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int *piVar5;
    int iVar6;
    int *piVar7;
    int iVar8;
    int iVar9;
    uint32_t *puVar10;
    
    iVar9 = *param_1;
    iVar8 = *param_2;
    if ((iVar9 <= param_3[1]) || (iVar3 = fcn.00017fce(param_3,iVar9), iVar3 == 0)) {
        iVar3 = *param_3;
        *param_3 = iVar9;
        piVar5 = param_2[3];
        piVar7 = param_1[3];
        puVar10 = param_3[3];
        uVar4 = 0;
        param_1 = NULL;
        if (0 < iVar8) {
            iVar6 = iVar8;
            do {
                iVar1 = *piVar7;
                piVar7 = piVar7 + 1;
                iVar2 = *piVar5;
                piVar5 = piVar5 + 1;
                uVar4 = (iVar1 - iVar2) - uVar4;
                *puVar10 = uVar4 & 0xfffffff;
                puVar10 = puVar10 + 1;
                uVar4 = uVar4 >> 0x1f;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            param_1 = iVar8;
        }
        if (param_1 < iVar9) {
            iVar8 = piVar7 - puVar10;
            iVar9 = iVar9 - param_1;
            do {
                uVar4 = *(puVar10 + iVar8) - uVar4;
                *puVar10 = uVar4;
                *puVar10 = *puVar10 & 0xfffffff;
                puVar10 = puVar10 + 1;
                uVar4 = uVar4 >> 0x1f;
                iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
        }
        if (*param_3 < iVar3) {
            for (iVar3 = iVar3 - *param_3; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
            }
        }
        fcn.0001730e(param_3);
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.000189dd @ 0x189dd */

int fcn.000189dd(int *param_1,int *param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int *piVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iVar9;
    int *piVar10;
    uint32_t *puVar11;
    
    piVar10 = param_2;
    if (*param_2 < *param_1) {
        param_2 = param_1;
        piVar5 = piVar10;
    }
    else {
        piVar5 = param_1;
    }
    iVar1 = *param_2;
    iVar2 = *piVar5;
    iVar9 = iVar1 + 1;
    if ((iVar9 <= param_3[1]) || (iVar6 = fcn.00017fce(param_3,iVar9), iVar6 == 0)) {
        iVar6 = *param_3;
        uVar8 = 0;
        *param_3 = iVar9;
        iVar9 = 0;
        piVar5 = param_1[3];
        piVar10 = piVar10[3];
        puVar11 = param_3[3];
        if (0 < iVar2) {
            do {
                iVar3 = *piVar10;
                piVar10 = piVar10 + 1;
                iVar4 = *piVar5;
                piVar5 = piVar5 + 1;
                uVar7 = iVar3 + iVar4 + uVar8;
                uVar8 = uVar7 >> 0x1c;
                *puVar11 = uVar7 & 0xfffffff;
                puVar11 = puVar11 + 1;
                iVar9 = iVar9 + 1;
            } while (iVar9 < iVar2);
        }
        if (iVar2 != iVar1) {
            for (; iVar9 < iVar1; iVar9 = iVar9 + 1) {
                uVar8 = uVar8 + *(param_2[3] + iVar9 * 4);
                *puVar11 = uVar8;
                *puVar11 = *puVar11 & 0xfffffff;
                puVar11 = puVar11 + 1;
                uVar8 = uVar8 >> 0x1c;
            }
        }
        *puVar11 = uVar8;
        if (*param_3 < iVar6) {
            for (iVar6 = iVar6 - *param_3; puVar11 = puVar11 + 1, iVar6 != 0; iVar6 = iVar6 + -1) {
                *puVar11 = 0;
            }
        }
        fcn.0001730e(param_3);
        iVar6 = 0;
    }
    return iVar6;
}


/* fcn.00017413 @ 0x17413 */

int fcn.00017413(int *param_1,int *param_2)

{
    uint uVar1;
    int iVar2;
    uint *puVar3;
    uint *puVar4;
    
    if (param_1 != param_2) {
        if ((param_2[1] < *param_1) && (iVar2 = fcn.00017fce(param_2,*param_1), iVar2 != 0)) {
            return iVar2;
        }
        puVar3 = param_2[3];
        iVar2 = 0;
        puVar4 = param_1[3];
        if (0 < *param_1) {
            do {
                uVar1 = *puVar4;
                puVar4 = puVar4 + 1;
                *puVar3 = uVar1;
                puVar3 = puVar3 + 1;
                iVar2 = iVar2 + 1;
            } while (iVar2 < *param_1);
        }
        for (; iVar2 < *param_2; iVar2 = iVar2 + 1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
        }
        *param_2 = *param_1;
        param_2[2] = param_1[2];
    }
    return 0;
}


/* fcn.000180a3 @ 0x180a3 */

uint fcn.000180a3(uint *param_1,uint32_t param_2)

{
    int *piVar1;
    int *piVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    
    uVar4 = param_2 & 0x8000001f;
    if (uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
    }
    param_2 = param_2 + (0x40 - uVar4);
    piVar2 = fcn.000157a5(param_2 * 4);
    piVar1 = param_1 + 3;
    *piVar1 = piVar2;
    if (piVar2 == NULL) {
        uVar3 = 0xfffffffe;
    }
    else {
        *param_1 = 0;
        param_1[2] = 0;
        iVar6 = 0;
        param_1[1] = param_2;
        if (0 < param_2) {
            if ((3 < param_2) && ((piVar1 < piVar2 || (piVar2 + (param_2 - 1) < piVar1)))) {
                uVar4 = param_2 & 0x80000003;
                if (uVar4 < 0) {
                    uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
                }
                do {
                    iVar6 = iVar6 + 4;
                } while (iVar6 < param_2 - uVar4);
                iVar5 = (param_2 - uVar4) + 3;
                for (iVar5 = ((iVar5 >> 0x1f & 3U) + iVar5 >> 2 & 0xfffffffU) << 2; iVar5 != 0; iVar5 = iVar5 + -1) {
                    *piVar2 = 0;
                    piVar2 = piVar2 + 1;
                }
            }
            for (; iVar6 < param_2; iVar6 = iVar6 + 1) {
                *(*piVar1 + iVar6 * 4) = 0;
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00018085 @ 0x18085 */

void fcn.00018085(uint param_1,uint param_2)

{
    int iVar1;
    
    iVar1 = fcn.0001802b(param_1);
    if (iVar1 == 0) {
        fcn.00017413(param_2,param_1);
    }
    return;
}


/* fcn.0001814a @ 0x1814a */

int fcn.0001814a(int *param_1,int param_2)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    
    if (param_2 < 1) {
        return 0;
    }
    if ((param_1[1] < *param_1 + param_2) && (iVar1 = fcn.00017fce(param_1,*param_1 + param_2), iVar1 != 0)) {
        return iVar1;
    }
    *param_1 = *param_1 + param_2;
    iVar1 = *param_1;
    puVar3 = param_1[3] + (iVar1 + -1) * 4;
    puVar2 = param_1[3] + (iVar1 - param_2) * 4;
    if (param_2 <= iVar1 + -1) {
        iVar1 = ((iVar1 + -1) - param_2) + 1;
        do {
            puVar2 = puVar2 + -1;
            *puVar3 = *puVar2;
            puVar3 = puVar3 + -1;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    if (0 < param_2) {
        puVar3 = param_1[3];
        for (; param_2 != 0; param_2 = param_2 + -1) {
            *puVar3 = 0;
            puVar3 = puVar3 + 1;
        }
    }
    return 0;
}


/* fcn.000188ea @ 0x188ea */

void __cdecl fcn.000188ea(int arg_8h,int32_t arg_ch,int arg_10h)

{
    int iVar1;
    int iVar2;
    int32_t iVar3;
    
    iVar1 = *(arg_8h + 8);
    if (iVar1 == *(arg_ch + 8)) {
        iVar2 = fcn.000173bd(arg_8h,arg_ch);
        if (iVar2 == -1) {
            *(arg_10h + 8) = iVar1 == 0;
            iVar3 = arg_ch;
            arg_ch = arg_8h;
        }
        else {
            *(arg_10h + 8) = iVar1;
            iVar3 = arg_8h;
        }
        fcn.000193cb(iVar3,arg_ch,arg_10h);
    }
    else {
        *(arg_10h + 8) = iVar1;
        fcn.000189dd(arg_8h,arg_ch,arg_10h);
    }
    return;
}


/* fcn.00017369 @ 0x17369 */

uint fcn.00017369(int param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    
    iVar2 = *(param_1 + 8);
    if (iVar2 != *(param_2 + 8)) {
        uVar1 = 1;
        if (iVar2 == 1) {
            uVar1 = 0xffffffff;
        }
        return uVar1;
    }
    if (iVar2 == 1) {
        iVar2 = param_2;
    }
    else {
        iVar2 = param_1;
        param_1 = param_2;
    }
    uVar1 = fcn.000173bd(iVar2,param_1);
    return uVar1;
}


/* fcn.00018837 @ 0x18837 */

void fcn.00018837(int *param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    uint *puVar3;
    int iVar4;
    uint *puVar5;
    
    if (0 < param_2) {
        iVar1 = *param_1;
        if (iVar1 <= param_2) {
            fcn.000189ba(param_1);
            return;
        }
        puVar5 = param_1[3];
        iVar4 = 0;
        puVar3 = puVar5 + param_2;
        if (iVar1 != param_2 && -1 < iVar1 - param_2) {
            do {
                uVar2 = *puVar3;
                puVar3 = puVar3 + 1;
                *puVar5 = uVar2;
                puVar5 = puVar5 + 1;
                iVar4 = iVar4 + 1;
            } while (iVar4 < *param_1 - param_2);
        }
        for (; iVar4 < *param_1; iVar4 = iVar4 + 1) {
            *puVar5 = 0;
            puVar5 = puVar5 + 1;
        }
        *param_1 = *param_1 - param_2;
    }
    return;
}


/* fcn.0001a10c @ 0x1a10c */

void fcn.0001a10c(uint param_1,uint param_2,uint param_3,uint param_4)

{
    fcn.0001a13c(param_1,param_2,param_3,param_4);
    return;
}


/* fcn.0001a13c @ 0x1a13c */

uint64_t fcn.0001a13c(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    if (param_4 == 0) {
        return CONCAT44(param_2 / param_3,(param_2 % param_3 << 0x20 | param_1) / param_3);
    }
    uVar4 = param_1;
    uVar5 = param_4;
    uVar6 = param_2;
    uVar7 = param_3;
    do {
        uVar3 = uVar6 & 1;
        uVar6 = uVar6 >> 1;
        uVar4 = uVar4 >> 1 | (uVar3 != 0) << 0x1f;
        uVar7 = uVar7 >> 1 | uVar5 << 0x1f;
        uVar5 = uVar5 >> 1;
    } while (uVar5 != 0);
    uVar1 = CONCAT44(uVar6,uVar4) / uVar7;
    uVar4 = uVar1;
    iVar2 = (uVar1 & 0xffffffff) * param_3;
    uVar5 = iVar2 >> 0x20;
    uVar6 = uVar5 + param_4 * uVar4;
    if ((CARRY4(uVar5,param_4 * uVar4)) || ((param_2 <= uVar6 && ((param_2 < uVar6 || (param_1 < iVar2)))))) {
        uVar4 = uVar4 - 1;
    }
    return uVar4;
}


/* fcn.00018504 @ 0x18504 */

int fcn.00018504(int *param_1,uint32_t param_2,int *param_3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    
    if ((param_3[1] < *param_1 + 1) && (iVar2 = fcn.00017fce(param_3,*param_1 + 1), iVar2 != 0)) {
        return iVar2;
    }
    iVar4 = 0;
    param_3[2] = param_1[2];
    puVar5 = param_1[3];
    iVar2 = *param_3;
    uVar3 = 0;
    puVar7 = param_3[3];
    if (0 < *param_1) {
        uVar3 = 0;
        do {
            uVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            iVar1 = uVar6 * param_2 + uVar3;
            uVar6 = iVar1;
            uVar3 = uVar6 >> 0x1c | (iVar1 >> 0x20) << 4;
            *puVar7 = uVar6 & 0xfffffff;
            puVar7 = puVar7 + 1;
            iVar4 = iVar4 + 1;
        } while (iVar4 < *param_1);
    }
    *puVar7 = uVar3;
    if (iVar4 + 1 < iVar2) {
        for (iVar2 = iVar2 - (iVar4 + 1); puVar7 = puVar7 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar7 = 0;
        }
    }
    *param_3 = *param_1 + 1;
    fcn.0001730e(param_3);
    return 0;
}


/* fcn.000172bb @ 0x172bb */

void fcn.000172bb(int param_1,int param_2,int param_3)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = *(param_1 + 8);
    iVar1 = *(param_2 + 8);
    if (iVar3 == iVar1) {
        *(param_3 + 8) = iVar3;
        fcn.000189dd(param_1,param_2,param_3);
    }
    else {
        iVar2 = fcn.000173bd(param_1,param_2);
        if (iVar2 == -1) {
            *(param_3 + 8) = iVar1;
            iVar3 = param_2;
        }
        else {
            *(param_3 + 8) = iVar3;
            iVar3 = param_1;
            param_1 = param_2;
        }
        fcn.000193cb(iVar3,param_1,param_3);
    }
    return;
}


/* fcn.00017a62 @ 0x17a62 */

void __cdecl fcn.00017a62(uint32_t arg_8h,uint32_t arg_ch)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int32_t var_10h;
    
    uVar1 = *arg_8h;
    uVar2 = *(arg_8h + 4);
    uVar3 = *(arg_8h + 8);
    uVar4 = *(arg_8h + 0xc);
    *arg_8h = *arg_ch;
    *(arg_8h + 4) = *(arg_ch + 4);
    *(arg_8h + 8) = *(arg_ch + 8);
    *(arg_8h + 0xc) = *(arg_ch + 0xc);
    *arg_ch = uVar1;
    *(arg_ch + 4) = uVar2;
    *(arg_ch + 8) = uVar3;
    *(arg_ch + 0xc) = uVar4;
    return;
}


/* fcn.0001791c @ 0x1791c */

int fcn.0001791c(uint param_1,uint32_t param_2,int *param_3,uint32_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t *puVar4;
    int iStack_1c;
    uchar auStack_10 [16];
    
    if (param_2 < 1) {
        iVar2 = fcn.00017413(param_1,param_3);
        if (param_4 != 0) {
            fcn.000189ba(param_4);
        }
    }
    else {
        iVar2 = fcn.0001802b(auStack_10);
        if (iVar2 == 0) {
            if ((param_4 == 0) || (iVar2 = fcn.0001822b(param_1,param_2,auStack_10), iVar2 == 0)) {
                iVar2 = fcn.00017413(param_1,param_3);
                if (iVar2 == 0) {
                    if (0x1b < param_2) {
                        fcn.00018837(param_3,param_2 / 0x1c);
                    }
                    iVar2 = param_2 % 0x1c;
                    if (iVar2 != 0) {
                        param_2 = 0;
                        uVar3 = iVar2;
                        puVar4 = param_3[3] + *param_3 * 4;
                        iStack_1c = *param_3 + -1;
                        if (-1 < iStack_1c) {
                            do {
                                puVar4 = puVar4 + -1;
                                uVar1 = *puVar4;
                                iStack_1c = iStack_1c + -1;
                                *puVar4 = uVar1 >> (uVar3 & 0x1f) | param_2 << (0x1c - uVar3 & 0x1f);
                                param_2 = uVar1 & (1 << (uVar3 & 0x1f)) - 1U;
                            } while (-1 < iStack_1c);
                        }
                    }
                    fcn.0001730e(param_3);
                    if (param_4 != 0) {
                        fcn.00017a62(auStack_10,param_4);
                    }
                    iVar2 = 0;
                }
                fcn.00017334(auStack_10);
            }
            else {
                fcn.00017334(auStack_10);
            }
        }
    }
    return iVar2;
}


/* fcn.0001822b @ 0x1822b */

int fcn.0001822b(int *param_1,uint32_t param_2,int *param_3)

{
    uint32_t *puVar1;
    int iVar2;
    
    if (param_2 < 1) {
        fcn.000189ba(param_3);
        return 0;
    }
    if (param_2 < *param_1 * 0x1c) {
        iVar2 = fcn.00017413(param_1,param_3);
        if (iVar2 == 0) {
            iVar2 = (param_2 % 0x1c != 0) + param_2 / 0x1c;
            if (iVar2 < *param_3) {
                do {
                    *(param_3[3] + iVar2 * 4) = 0;
                    iVar2 = iVar2 + 1;
                } while (iVar2 < *param_3);
            }
            puVar1 = param_3[3] + (param_2 / 0x1c) * 4;
            *puVar1 = *puVar1 & (1 << param_2 % 0x1c) - 1U;
            fcn.0001730e(param_3);
            iVar2 = 0;
        }
        return iVar2;
    }
    iVar2 = fcn.00017413(param_1,param_3);
    return iVar2;
}


/* fcn.000182b7 @ 0x182b7 */

int fcn.000182b7(uint param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    
    iVar1 = fcn.0001746e(param_2);
    iVar1 = iVar1 % 0x1c;
    if (*param_2 < 2) {
        fcn.00018888(param_1,1);
        iVar1 = 1;
    }
    else {
        iVar2 = fcn.00017278(param_1,*param_2 * 0x1c + -0x1d + iVar1);
        if (iVar2 != 0) {
            return iVar2;
        }
    }
    iVar1 = iVar1 + -1;
    while( true ) {
        if (0x1b < iVar1) {
            return 0;
        }
        iVar2 = fcn.0001839f(param_1,param_1);
        if (iVar2 != 0) break;
        iVar2 = fcn.000173bd(param_1,param_2);
        if ((iVar2 != -1) && (iVar2 = fcn.000193cb(param_1,param_2,param_1), iVar2 != 0)) {
            return iVar2;
        }
        iVar1 = iVar1 + 1;
    }
    return iVar2;
}


/* fcn.000185a9 @ 0x185a9 */

int __cdecl fcn.000185a9(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int32_t var_10h;
    
    iVar1 = fcn.0001802b(&var_10h);
    if (iVar1 == 0) {
        iVar1 = fcn.00018336(arg_8h,arg_ch,&var_10h);
        if (iVar1 == 0) {
            iVar1 = fcn.000181b4(&var_10h,arg_10h,arg_14h);
            fcn.00017334(&var_10h);
        }
        else {
            fcn.00017334(&var_10h);
        }
    }
    return iVar1;
}


/* fcn.000188b1 @ 0x188b1 */

void fcn.000188b1(int *param_1,int param_2)

{
    if ((*param_1 * 2 < 0x1ff) && (*param_1 < 0x80)) {
        fcn.000170e9(param_1,param_2);
    }
    else {
        fcn.0001927f(param_1,param_2);
    }
    *(param_2 + 8) = 0;
    return;
}


/* fcn.00016d99 @ 0x16d99 */

int fcn.00016d99(int *param_1,int *param_2,int param_3)

{
    int64_t iVar1;
    int iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t *puVar10;
    int iVar11;
    uint32_t *puVar12;
    uint32_t *puVar13;
    int iStack_101c;
    int iStack_1014;
    uint32_t auStack_1000 [1024];
    
    iVar7 = *param_1;
    if ((*param_2 + 1 <= param_1[1]) || (iVar2 = fcn.00017fce(param_1,*param_2 + 1), iVar2 == 0)) {
        iVar2 = *param_1;
        puVar13 = param_1[3];
        iStack_101c = 0;
        puVar3 = auStack_1000;
        if (0 < iVar2) {
            iVar8 = iVar2;
            puVar10 = puVar13;
            do {
                uVar9 = *puVar10;
                puVar10 = puVar10 + 1;
                *puVar3 = uVar9;
                puVar3[1] = 0;
                puVar3 = puVar3 + 2;
                iVar8 = iVar8 + -1;
                iStack_101c = iVar2;
            } while (iVar8 != 0);
        }
        iVar8 = *param_2;
        iVar2 = iVar8 * 2 + 1;
        if (iStack_101c < iVar2) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar10 = puVar3 + 2;
            for (uVar9 = (iVar2 - iStack_101c) * 8 - 5U >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                *puVar10 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar10 = puVar10 + 1;
            }
        }
        iStack_101c = 0;
        if (0 < iVar8) {
            iStack_101c = *param_2;
            puVar3 = param_2[3];
            puVar10 = auStack_1000;
            iVar2 = iStack_101c;
            iStack_1014 = iStack_101c;
            do {
                uVar9 = *puVar10;
                if (0 < iVar2) {
                    puVar12 = puVar10;
                    do {
                        uVar5 = *puVar3;
                        puVar3 = puVar3 + 1;
                        iVar1 = uVar5 * (uVar9 * param_3 & 0xfffffff);
                        uVar4 = iVar1;
                        uVar5 = *puVar12;
                        *puVar12 = *puVar12 + uVar4;
                        puVar12[1] = puVar12[1] + (iVar1 >> 0x20) + CARRY4(uVar5,uVar4);
                        puVar12 = puVar12 + 2;
                        iVar2 = iVar2 + -1;
                    } while (iVar2 != 0);
                    iVar2 = iVar8;
                }
                puVar12 = puVar10 + 2;
                uVar5 = *puVar10 >> 0x1c | puVar10[1] << 4;
                uVar9 = *puVar12;
                *puVar12 = *puVar12 + uVar5;
                puVar3 = param_2[3];
                puVar10[3] = puVar10[3] + (puVar10[1] >> 0x1c) + CARRY4(uVar9,uVar5);
                iStack_1014 = iStack_1014 + -1;
                puVar10 = puVar12;
            } while (iStack_1014 != 0);
            iVar8 = *param_2;
        }
        iVar11 = 0;
        iVar6 = iStack_101c + 1;
        iVar2 = iVar8 * 2 + 1;
        puVar3 = auStack_1000 + iVar6 * 2;
        if (iVar6 <= iVar2) {
            iVar8 = auStack_1000 + (iStack_101c * 8 - puVar3);
            iVar2 = (iVar2 - iVar6) + 1;
            do {
                uVar5 = *(iVar8 + 4 + puVar3);
                uVar4 = *(iVar8 + puVar3) >> 0x1c | uVar5 << 4;
                uVar9 = *puVar3;
                *puVar3 = *puVar3 + uVar4;
                puVar3[1] = puVar3[1] + (uVar5 >> 0x1c) + CARRY4(uVar9,uVar4);
                puVar3 = puVar3 + 2;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            iVar8 = *param_2;
        }
        puVar3 = auStack_1000 + iVar8 * 2;
        if (iVar8 != -1 && -1 < iVar8 + 1) {
            do {
                uVar9 = *puVar3;
                puVar3 = puVar3 + 2;
                *puVar13 = uVar9 & 0xfffffff;
                puVar13 = puVar13 + 1;
                iVar11 = iVar11 + 1;
            } while (iVar11 < *param_2 + 1);
        }
        if (iVar11 < iVar7) {
            for (iVar7 = iVar7 - iVar11; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar13 = 0;
                puVar13 = puVar13 + 1;
            }
        }
        *param_1 = *param_2 + 1;
        fcn.0001730e(param_1);
        iVar7 = fcn.000173bd(param_1,param_2);
        if (iVar7 == -1) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.000193cb(param_1,param_2,param_1);
        }
    }
    return iVar2;
}


/* fcn.00018336 @ 0x18336 */

uint fcn.00018336(int *param_1,int *param_2,int *param_3)

{
    int iVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    uint32_t uVar5;
    int iVar6;
    
    iVar2 = param_1[2];
    iVar1 = param_2[2];
    iVar6 = *param_2 + 1 + *param_1;
    if (iVar6 < 0x200) {
        piVar3 = param_2;
        if (*param_1 < *param_2) {
            piVar3 = param_1;
        }
        if (*piVar3 < 0x101) {
            uVar4 = fcn.00016f78(param_1,param_2,param_3,iVar6);
            goto code_r0x00018389;
        }
    }
    uVar4 = fcn.00018fe9(param_1,param_2,param_3,iVar6);
code_r0x00018389:
    uVar5 = 0;
    if (0 < *param_3) {
        uVar5 = iVar2 != iVar1;
    }
    param_3[2] = uVar5;
    return uVar4;
}


/* fcn.0001583e @ 0x1583e */

uint32_t __cdecl fcn.0001583e(int32_t arg_8h,uint32_t arg_ch)

{
    uint32_t uVar1;
    
    if (arg_8h == 0) {
        uVar1 = fcn.000157a5(arg_ch);
    }
    else {
        if (arg_ch == 0) {
            fcn.0001574a(arg_8h);
        }
        else {
            uVar1 = fcn.000157a5(arg_ch);
            if (uVar1 != 0) {
                fcn.00010871(uVar1,arg_8h,arg_ch);
                fcn.0001574a(arg_8h);
                return uVar1;
            }
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00017494 @ 0x17494 */

int fcn.00017494(int *param_1,int *param_2,uint32_t param_3,uint32_t param_4)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint *puVar8;
    int iVar9;
    ulong uVar10;
    int iStack_60;
    int aiStack_50 [2];
    int iStack_48;
    int iStack_44;
    int aiStack_40 [2];
    uint uStack_38;
    int iStack_34;
    uint auStack_30 [3];
    uint *puStack_24;
    int aiStack_20 [3];
    uint *puStack_14;
    uint auStack_10 [3];
    uint *puStack_4;
    
    iVar9 = 0;
    if (*param_2 == 0) {
        return -3;
    }
    iVar2 = fcn.000173bd(param_1,param_2);
    if (iVar2 == -1) {
        if (param_4 != 0) {
            iVar9 = fcn.00017413(param_1,param_4);
        }
        if (param_3 != 0) {
            fcn.000189ba(param_3);
        }
        return iVar9;
    }
    iVar9 = fcn.000180a3(aiStack_20,*param_1 + 2);
    if (iVar9 != 0) {
        return iVar9;
    }
    aiStack_20[0] = *param_1 + 2;
    iVar9 = fcn.0001802b(auStack_30);
    if (iVar9 != 0) goto code_r0x00017907;
    iVar9 = fcn.0001802b(auStack_10);
    if (iVar9 == 0) {
        iVar9 = fcn.00018085(aiStack_50,param_1);
        if (iVar9 == 0) {
            iVar9 = fcn.00018085(aiStack_40,param_2);
            if (iVar9 == 0) {
                iVar1 = param_1[2];
                iVar2 = param_2[2];
                uStack_38 = 0;
                iStack_48 = 0;
                iVar9 = fcn.0001746e(aiStack_40);
                if (iVar9 % 0x1c < 0x1b) {
                    iStack_60 = 0x1b - iVar9 % 0x1c;
                    iVar9 = fcn.00018430(aiStack_50,iStack_60,aiStack_50);
                    if ((iVar9 != 0) || (iVar9 = fcn.00018430(aiStack_40,iStack_60,aiStack_40), iVar9 != 0))
                    goto code_r0x000178db;
                }
                else {
                    iStack_60 = 0;
                }
                iVar7 = aiStack_50[0] + -1;
                iVar3 = aiStack_40[0] + -1;
                iVar6 = iVar7 - iVar3;
                iVar9 = fcn.0001814a(aiStack_40,iVar6);
                while (iVar9 == 0) {
                    iVar9 = fcn.00017369(aiStack_50,aiStack_40);
                    if (iVar9 == -1) {
                        fcn.00018837(aiStack_40,iVar6);
                        goto code_r0x00017863;
                    }
                    puStack_14[iVar6] = puStack_14[iVar6] + 1;
                    iVar9 = fcn.000188ea(aiStack_50,aiStack_40,aiStack_50);
                }
                goto code_r0x000178db;
            }
            goto code_r0x000178e6;
        }
        goto code_r0x000178f1;
    }
code_r0x000178fc:
    fcn.00017334(auStack_30);
code_r0x00017907:
    fcn.00017334(aiStack_20);
    return iVar9;
code_r0x00017863:
    if (iVar7 < aiStack_40[0]) goto code_r0x0001786b;
    if (iVar7 <= aiStack_50[0]) {
        if (*(iStack_44 + iVar7 * 4) == *(iStack_34 + iVar3 * 4)) {
            iVar6 = iVar7 - iVar3;
            puStack_14[iVar6 + -1] = 0xfffffff;
            puVar8 = puStack_14;
        }
        else {
            uVar10 = fcn.0001a10c();
            uVar4 = uVar10;
            if ((uVar10 >> 0x20 != 0) || (0xfffffff < uVar4)) {
                uVar4 = 0xfffffff;
            }
            iVar6 = iVar7 - iVar3;
            puStack_24[iVar6 + -1] = uVar4 & 0xfffffff;
            puVar8 = puStack_24;
        }
        puVar8[iVar6 + -1] = puVar8[iVar6 + -1] + 1 & 0xfffffff;
        do {
            puVar8[iVar6 + -1] = puVar8[iVar6 + -1] - 1 & 0xfffffff;
            fcn.000189ba(auStack_30);
            if (aiStack_40[0] + -2 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = *(iStack_34 + -4 + iVar3 * 4);
            }
            auStack_30[0] = 2;
            *puStack_24 = uVar5;
            puStack_24[1] = *(iStack_34 + iVar3 * 4);
            iVar9 = fcn.00018504(auStack_30,puVar8[iVar6 + -1],auStack_30);
            if (iVar9 != 0) goto code_r0x000178db;
            if (iVar7 + -2 < 0) {
                uVar5 = 0;
            }
            else {
                uVar5 = *(iStack_44 + (iVar7 + -2) * 4);
            }
            *puStack_4 = uVar5;
            uVar5 = 0;
            if (-1 < iVar7 + -1) {
                uVar5 = *(iStack_44 + -4 + iVar7 * 4);
            }
            puStack_4[1] = uVar5;
            puStack_4[2] = *(iStack_44 + iVar7 * 4);
            auStack_10[0] = 3;
            iVar9 = fcn.000173bd(auStack_30,auStack_10);
            puVar8 = puStack_14;
        } while (iVar9 == 1);
        iVar9 = fcn.00018504(aiStack_40,puStack_14[iVar6 + -1],auStack_30);
        if (((iVar9 != 0) || (iVar9 = fcn.0001814a(auStack_30,iVar6 + -1), iVar9 != 0)) ||
           (iVar9 = fcn.000188ea(aiStack_50,auStack_30,aiStack_50), iVar9 != 0)) goto code_r0x000178db;
        if (iStack_48 == 1) {
            iVar9 = fcn.00017413(aiStack_40,auStack_30);
            if (((iVar9 != 0) || (iVar9 = fcn.0001814a(auStack_30,iVar6 + -1), iVar9 != 0)) ||
               (iVar9 = fcn.000172bb(aiStack_50,auStack_30,aiStack_50), iVar9 != 0)) goto code_r0x000178db;
            puStack_14[iVar6 + -1] = puStack_14[iVar6 + -1] - 1 & 0xfffffff;
        }
    }
    iVar7 = iVar7 + -1;
    goto code_r0x00017863;
code_r0x0001786b:
    if (aiStack_50[0] == 0) {
        iStack_48 = 0;
    }
    else {
        iStack_48 = param_1[2];
    }
    if (param_3 != 0) {
        fcn.0001730e(aiStack_20);
        fcn.00017a62(aiStack_20,param_3);
        *(param_3 + 8) = iVar1 != iVar2;
    }
    if (param_4 != 0) {
        fcn.0001791c(aiStack_50,iStack_60,aiStack_50,0);
        fcn.00017a62(aiStack_50,param_4);
    }
    iVar9 = 0;
code_r0x000178db:
    fcn.00017334(aiStack_40);
code_r0x000178e6:
    fcn.00017334(aiStack_50);
code_r0x000178f1:
    fcn.00017334(auStack_10);
    goto code_r0x000178fc;
}


/* fcn.00017278 @ 0x17278 */

int fcn.00017278(int *param_1,int param_2)

{
    int iVar1;
    int iVar2;
    
    fcn.000189ba(param_1);
    iVar1 = param_2 / 0x1c + 1;
    iVar2 = fcn.00017fce(param_1,iVar1);
    if (iVar2 == 0) {
        *param_1 = iVar1;
        *(param_1[3] + (param_2 / 0x1c) * 4) = 1 << (param_2 % 0x1c & 0x1f);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00018888 @ 0x18888 */

void fcn.00018888(uint32_t *param_1,uint32_t param_2)

{
    fcn.000189ba(param_1);
    *param_1[3] = param_2 & 0xfffffff;
    *param_1 = *param_1[3] != 0;
    return;
}


/* fcn.0001839f @ 0x1839f */

int fcn.0001839f(int *param_1,int *param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint *puVar8;
    
    if ((param_2[1] < *param_1 + 1) && (iVar2 = fcn.00017fce(param_2,*param_1 + 1), iVar2 != 0)) {
        return iVar2;
    }
    iVar2 = *param_2;
    puVar4 = param_2[3];
    *param_2 = *param_1;
    puVar6 = param_1[3];
    if (0 < *param_1) {
        iVar3 = 0;
        uVar7 = 0;
        do {
            uVar1 = *puVar6;
            uVar5 = uVar1 >> 0x1b;
            puVar6 = puVar6 + 1;
            *puVar4 = uVar1 * 2 & 0xfffffff | uVar7;
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 1;
            uVar7 = uVar5;
        } while (iVar3 < *param_1);
        if (uVar5 != 0) {
            *puVar4 = 1;
            *param_2 = *param_2 + 1;
        }
    }
    iVar3 = *param_2;
    if (iVar3 < iVar2) {
        puVar8 = param_2[3] + iVar3 * 4;
        for (iVar2 = iVar2 - iVar3; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar8 = 0;
            puVar8 = puVar8 + 1;
        }
    }
    param_2[2] = param_1[2];
    return 0;
}


/* fcn.00016f78 @ 0x16f78 */

int fcn.00016f78(int *param_1,int *param_2,int *param_3,int param_4)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t *puVar9;
    int iVar10;
    uint32_t *puVar11;
    int iVar12;
    int iStack_820;
    uint32_t auStack_800 [512];
    
    if ((param_4 <= param_3[1]) || (iVar5 = fcn.00017fce(param_3,param_4), iVar5 == 0)) {
        iVar5 = *param_1 + *param_2;
        if (param_4 < *param_1 + *param_2) {
            iVar5 = param_4;
        }
        fcn.00010a9b(auStack_800,0x800);
        iStack_820 = 0;
        if (0 < iVar5) {
            iVar8 = param_1[3];
            iVar12 = *param_2;
            iVar1 = param_2[3];
            iVar2 = *param_1;
            uVar4 = 0;
            do {
                iVar6 = iStack_820;
                if (iVar12 + -1 < iStack_820) {
                    iVar6 = iVar12 + -1;
                }
                puVar9 = iVar1 + iVar6 * 4;
                puVar11 = iVar8 + (iStack_820 - iVar6) * 4;
                iVar10 = iVar2 - (iStack_820 - iVar6);
                if (iVar6 + 1 <= iVar10) {
                    iVar10 = iVar6 + 1;
                }
                if (0 < iVar10) {
                    do {
                        uVar7 = *puVar9;
                        puVar9 = puVar9 + -1;
                        uVar3 = *puVar11;
                        puVar11 = puVar11 + 1;
                        uVar4 = uVar7 * uVar3 + uVar4;
                        iVar10 = iVar10 + -1;
                    } while (iVar10 != 0);
                }
                uVar7 = uVar4;
                uVar4 = uVar4 >> 0x1c;
                auStack_800[iStack_820] = uVar7 & 0xfffffff;
                iStack_820 = iStack_820 + 1;
            } while (iStack_820 < iVar5);
        }
        iVar12 = 0;
        iVar8 = *param_3;
        puVar9 = param_3[3];
        *param_3 = iVar5;
        if (0 < iVar5 + 1) {
            do {
                *puVar9 = auStack_800[iVar12];
                puVar9 = puVar9 + 1;
                iVar12 = iVar12 + 1;
            } while (iVar12 < iVar5 + 1);
        }
        if (iVar12 < iVar8) {
            for (iVar8 = iVar8 - iVar12; iVar8 != 0; iVar8 = iVar8 + -1) {
                *puVar9 = 0;
                puVar9 = puVar9 + 1;
            }
        }
        fcn.0001730e(param_3);
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.00018fe9 @ 0x18fe9 */

int fcn.00018fe9(int *param_1,int *param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    int *piVar7;
    int iVar8;
    uint32_t *puVar9;
    int iVar10;
    int iVar11;
    uint32_t uVar12;
    uint32_t uStack_34;
    uint32_t *puStack_30;
    int iStack_2c;
    int aiStack_10 [3];
    int iStack_4;
    
    if (param_4 < 0x200) {
        piVar7 = param_2;
        if (*param_1 < *param_2) {
            piVar7 = param_1;
        }
        if (*piVar7 < 0x100) {
            iVar3 = fcn.00016f78(param_1,param_2,param_3,param_4);
            return iVar3;
        }
    }
    iVar3 = fcn.000180a3(aiStack_10,param_4);
    if (iVar3 == 0) {
        iVar3 = *param_1;
        aiStack_10[0] = param_4;
        iStack_2c = 0;
        if (0 < iVar3) {
            iVar10 = param_4;
            do {
                uStack_34 = 0;
                uVar1 = *(param_1[3] + iStack_2c * 4);
                iVar8 = iVar10;
                if (*param_2 < iVar10) {
                    iVar8 = *param_2;
                }
                puStack_30 = iStack_4 + iStack_2c * 4;
                puVar9 = param_2[3];
                iVar11 = 0;
                if (0 < iVar8) {
                    uStack_34 = 0;
                    iVar11 = iVar8;
                    do {
                        iVar2 = uVar1 * *puVar9;
                        uVar4 = iVar2;
                        puVar9 = puVar9 + 1;
                        uVar5 = uVar4 + *puStack_30;
                        uVar12 = uStack_34 + uVar5;
                        uStack_34 = uVar12 >> 0x1c |
                                    ((iVar2 >> 0x20) + CARRY4(uVar4,*puStack_30) + CARRY4(uStack_34,uVar5)) * 0x10;
                        *puStack_30 = uVar12 & 0xfffffff;
                        puStack_30 = puStack_30 + 1;
                        iVar11 = iVar11 + -1;
                    } while (iVar11 != 0);
                    iVar11 = iVar8;
                }
                if (iVar11 + iStack_2c < param_4) {
                    *puStack_30 = uStack_34;
                }
                iStack_2c = iStack_2c + 1;
                iVar10 = iVar10 + -1;
            } while (iStack_2c < iVar3);
        }
        fcn.0001730e(aiStack_10);
        uVar6 = fcn.00017a62(aiStack_10,param_3);
        fcn.00017334(uVar6);
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.000181b4 @ 0x181b4 */

int __cdecl fcn.000181b4(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    
    iVar1 = fcn.0001802b(&var_10h);
    if (iVar1 == 0) {
        iVar1 = fcn.00017494(arg_8h,arg_ch,0,&var_10h);
        if (iVar1 == 0) {
            if (var_8h == *(arg_ch + 8)) {
                fcn.00017a62(&var_10h,arg_10h);
                iVar1 = 0;
            }
            else {
                iVar1 = fcn.000172bb(arg_ch);
            }
            fcn.00017334(&var_10h);
        }
        else {
            fcn.00017334(&var_10h);
        }
    }
    return iVar1;
}


/* fcn.0001913d @ 0x1913d */

int fcn.0001913d(int *param_1,int *param_2,uint32_t param_3,int param_4)

{
    int iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uStack_38;
    uint32_t *puStack_34;
    int iStack_30;
    int aiStack_10 [3];
    int iStack_4;
    
    iVar4 = fcn.000180a3(aiStack_10,*param_2 + *param_1 + 1);
    if (iVar4 == 0) {
        iVar4 = *param_1;
        iVar1 = *param_2;
        aiStack_10[0] = iVar1 + 1 + iVar4;
        iStack_30 = 0;
        if (0 < iVar4) {
            iVar12 = param_4 * 4;
            puVar5 = iStack_4 + iVar12;
            do {
                uStack_38 = 0;
                uVar2 = *(param_1[3] + iStack_30 * 4);
                puVar6 = param_2[3] + iVar12;
                puStack_34 = puVar5;
                if (param_4 < iVar1) {
                    iVar7 = iVar1 - param_4;
                    uStack_38 = 0;
                    do {
                        iVar3 = uVar2 * *puVar6;
                        uVar8 = iVar3;
                        puVar6 = puVar6 + 1;
                        uVar9 = uVar8 + *puStack_34;
                        uVar11 = uStack_38 + uVar9;
                        uStack_38 = uVar11 >> 0x1c |
                                    ((iVar3 >> 0x20) + CARRY4(uVar8,*puStack_34) + CARRY4(uStack_38,uVar9)) * 0x10;
                        *puStack_34 = uVar11 & 0xfffffff;
                        puStack_34 = puStack_34 + 1;
                        iVar7 = iVar7 + -1;
                    } while (iVar7 != 0);
                }
                iStack_30 = iStack_30 + 1;
                iVar12 = iVar12 + -4;
                param_4 = param_4 + -1;
                *puStack_34 = uStack_38;
            } while (iStack_30 < iVar4);
        }
        fcn.0001730e(aiStack_10);
        uVar10 = fcn.00017a62(aiStack_10,param_3);
        fcn.00017334(uVar10);
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.00017398 @ 0x17398 */

int fcn.00017398(int *param_1,uint32_t param_2)

{
    if (param_1[2] == 1) {
        return -1;
    }
    if ((*param_1 < 2) && (*param_1[3] <= param_2)) {
        return -(*param_1[3] < param_2);
    }
    return 1;
}


/* fcn.000170e9 @ 0x170e9 */

int fcn.000170e9(int *param_1,int *param_2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t *puVar12;
    int iVar13;
    uint32_t uStack_828;
    uint32_t auStack_800 [512];
    
    iVar2 = *param_1 * 2;
    if ((iVar2 <= param_2[1]) || (iVar7 = fcn.00017fce(param_2,iVar2), iVar7 == 0)) {
        uStack_828 = 0;
        if (0 < iVar2) {
            iVar7 = *param_1;
            iVar13 = param_1[3];
            uVar6 = 0;
            do {
                uVar1 = iVar7 - 1;
                uVar11 = uStack_828;
                if (uVar1 < uStack_828) {
                    uVar11 = uVar1;
                }
                iVar8 = uStack_828 - uVar11;
                iVar9 = iVar7 - iVar8;
                puVar12 = iVar13 + iVar8 * 4;
                puVar10 = iVar13 + uVar11 * 4;
                if (uVar11 + 1 <= iVar9) {
                    iVar9 = uVar11 + 1;
                }
                iVar8 = (uVar11 - iVar8) + 1 >> 1;
                if (iVar9 < iVar8) {
                    iVar8 = iVar9;
                }
                iVar3 = 0;
                iVar5 = 0;
                if (0 < iVar8) {
                    do {
                        uVar1 = *puVar10;
                        puVar10 = puVar10 + -1;
                        uVar11 = *puVar12;
                        puVar12 = puVar12 + 1;
                        iVar3 = uVar1 * uVar11 + iVar3;
                        iVar8 = iVar8 + -1;
                        iVar5 = iVar3;
                    } while (iVar8 != 0);
                }
                uVar4 = uVar6 + CONCAT44((iVar5 >> 0x20) << 1 | iVar5 >> 0x1f,iVar5 * 2);
                if ((uStack_828 & 1) == 0) {
                    uVar1 = *(iVar13 + (uStack_828 >> 1) * 4);
                    uVar4 = uVar1 * uVar1 + uVar4;
                }
                uVar6 = uVar4 >> 0x1c;
                auStack_800[uStack_828] = uVar4 & 0xfffffff;
                uStack_828 = uStack_828 + 1;
            } while (uStack_828 < iVar2);
        }
        iVar13 = 0;
        iVar7 = *param_2;
        puVar10 = param_2[3];
        *param_2 = *param_1 * 2;
        if (0 < iVar2) {
            do {
                *puVar10 = auStack_800[iVar13] & 0xfffffff;
                puVar10 = puVar10 + 1;
                iVar13 = iVar13 + 1;
            } while (iVar13 < iVar2);
        }
        if (iVar13 < iVar7) {
            for (iVar7 = iVar7 - iVar13; iVar7 != 0; iVar7 = iVar7 + -1) {
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
            }
        }
        fcn.0001730e(param_2);
        iVar7 = 0;
    }
    return iVar7;
}


/* fcn.0001927f @ 0x1927f */

int fcn.0001927f(int *param_1,uint32_t param_2)

{
    int iVar1;
    int iVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint uVar9;
    uint32_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_18;
    int aiStack_10 [3];
    uint32_t *puStack_4;
    
    iVar2 = *param_1;
    iVar1 = iVar2 * 2 + 1;
    iVar5 = fcn.000180a3(aiStack_10,iVar1);
    if (iVar5 == 0) {
        if (0 < iVar2) {
            iStack_24 = 1;
            iStack_20 = 0;
            iStack_18 = iVar2;
            do {
                iVar3 = *(param_1[3] + iStack_20) * *(param_1[3] + iStack_20);
                uVar6 = iVar3;
                uVar11 = uVar6 + *puStack_4;
                uVar12 = uVar11 >> 0x1c | ((iVar3 >> 0x20) + CARRY4(uVar6,*puStack_4)) * 0x10;
                *puStack_4 = uVar11 & 0xfffffff;
                iStack_28 = iStack_24;
                uVar6 = *(param_1[3] + iStack_20);
                puVar10 = puStack_4 + 1;
                if (iStack_24 < iVar2) {
                    do {
                        iVar3 = uVar6 * *(param_1[3] + iStack_28 * 4);
                        uVar7 = iVar3;
                        uVar4 = uVar7 * 2;
                        uVar11 = *puVar10;
                        uVar8 = uVar4 + *puVar10;
                        uVar13 = uVar12 + uVar8;
                        *puVar10 = uVar13 & 0xfffffff;
                        puVar10 = puVar10 + 1;
                        uVar12 = uVar13 >> 0x1c |
                                 (((iVar3 >> 0x20) << 1 | uVar7 >> 0x1f) + CARRY4(uVar4,uVar11) + CARRY4(uVar12,uVar8)
                                 ) * 0x10;
                        iStack_28 = iStack_28 + 1;
                    } while (iStack_28 < iVar2);
                }
                for (; uVar12 != 0; uVar12 = uVar12 + uVar11 >> 0x1c | CARRY4(uVar12,uVar6) << 4) {
                    uVar6 = *puVar10;
                    uVar11 = *puVar10;
                    *puVar10 = uVar12 + uVar11 & 0xfffffff;
                    puVar10 = puVar10 + 1;
                }
                puStack_4 = puStack_4 + 2;
                iStack_20 = iStack_20 + 4;
                iStack_24 = iStack_24 + 1;
                iStack_18 = iStack_18 + -1;
            } while (iStack_18 != 0);
        }
        aiStack_10[0] = iVar1;
        fcn.0001730e(aiStack_10);
        uVar9 = fcn.00017a62(aiStack_10,param_2);
        fcn.00017334(uVar9);
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.000187e2 @ 0x187e2 */

int __cdecl fcn.000187e2(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    
    iVar1 = fcn.0001802b(&var_10h);
    if (iVar1 == 0) {
        uVar2 = fcn.0001746e(arg_8h);
        iVar1 = fcn.00017278(&var_10h,uVar2);
        if (iVar1 == 0) {
            iVar1 = fcn.000193cb(&var_10h,arg_8h,arg_ch);
        }
        fcn.00017334(&var_10h);
    }
    return iVar1;
}


/* fcn.00019738 @ 0x19738 */

void fcn.00019738(int *param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;
    int iVar13;
    int iVar14;
    int iVar15;
    int iVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    
    uVar18 = param_1[3];
    uVar20 = param_1[2];
    iVar1 = *param_2;
    uVar22 = param_1[1];
    iVar2 = param_2[1];
    uVar17 = *param_1 + -0x28955b88 + ((uVar18 ^ uVar20) & uVar22 ^ uVar18) + iVar1;
    uVar17 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar22;
    uVar18 = uVar18 + 0xe8c7b756 + ((uVar20 ^ uVar22) & uVar17 ^ uVar20) + iVar2;
    iVar3 = param_2[2];
    uVar19 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar17;
    iVar4 = param_2[3];
    uVar18 = uVar20 + 0x242070db + ((uVar22 ^ uVar17) & uVar19 ^ uVar22) + iVar3;
    uVar21 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar19;
    iVar5 = param_2[4];
    uVar18 = uVar22 + 0xc1bdceee + ((uVar19 ^ uVar17) & uVar21 ^ uVar17) + iVar4;
    uVar22 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar21;
    iVar6 = param_2[5];
    uVar17 = uVar17 + ((uVar19 ^ uVar21) & uVar22 ^ uVar19) + iVar5 + -0xa83f051;
    uVar18 = (uVar17 * 0x80 | uVar17 >> 0x19) + uVar22;
    iVar7 = param_2[6];
    uVar19 = uVar19 + ((uVar21 ^ uVar22) & uVar18 ^ uVar21) + iVar6 + 0x4787c62a;
    uVar20 = (uVar19 * 0x1000 | uVar19 >> 0x14) + uVar18;
    iVar8 = param_2[7];
    uVar21 = uVar21 + ((uVar22 ^ uVar18) & uVar20 ^ uVar22) + iVar7 + -0x57cfb9ed;
    uVar17 = (uVar21 >> 0xf | uVar21 * 0x20000) + uVar20;
    iVar9 = param_2[8];
    uVar22 = uVar22 + ((uVar20 ^ uVar18) & uVar17 ^ uVar18) + iVar8 + -0x2b96aff;
    uVar19 = (uVar22 >> 10 | uVar22 * 0x400000) + uVar17;
    iVar10 = param_2[9];
    uVar18 = uVar18 + ((uVar20 ^ uVar17) & uVar19 ^ uVar20) + iVar9 + 0x698098d8;
    uVar18 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar19;
    iVar11 = param_2[10];
    uVar20 = uVar20 + 0x8b44f7af + ((uVar17 ^ uVar19) & uVar18 ^ uVar17) + iVar10;
    uVar22 = (uVar20 * 0x1000 | uVar20 >> 0x14) + uVar18;
    uVar20 = (uVar17 - 0xa44f) + ((uVar19 ^ uVar18) & uVar22 ^ uVar19) + iVar11;
    uVar17 = (uVar20 >> 0xf | uVar20 * 0x20000) + uVar22;
    iVar12 = param_2[0xb];
    iVar13 = param_2[0xc];
    uVar19 = uVar19 + ((uVar22 ^ uVar18) & uVar17 ^ uVar18) + iVar12 + -0x76a32842;
    uVar19 = (uVar19 >> 10 | uVar19 * 0x400000) + uVar17;
    uVar18 = uVar18 + 0x6b901122 + ((uVar22 ^ uVar17) & uVar19 ^ uVar22) + iVar13;
    uVar20 = (uVar18 * 0x80 | uVar18 >> 0x19) + uVar19;
    iVar14 = param_2[0xd];
    uVar18 = uVar22 + 0xfd987193 + ((uVar17 ^ uVar19) & uVar20 ^ uVar17) + iVar14;
    iVar15 = param_2[0xe];
    uVar22 = (uVar18 * 0x1000 | uVar18 >> 0x14) + uVar20;
    iVar16 = param_2[0xf];
    uVar18 = uVar17 + 0xa679438e + ((uVar19 ^ uVar20) & uVar22 ^ uVar19) + iVar15;
    uVar17 = (uVar18 >> 0xf | uVar18 * 0x20000) + uVar22;
    uVar18 = uVar19 + 0x49b40821 + ((uVar22 ^ uVar20) & uVar17 ^ uVar20) + iVar16;
    uVar18 = (uVar18 >> 10 | uVar18 * 0x400000) + uVar17;
    uVar20 = uVar20 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0xf61e2562 + iVar2;
    uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18;
    uVar22 = uVar22 + ((uVar18 ^ uVar20) & uVar17 ^ uVar18) + 0xc040b340 + iVar7;
    uVar22 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar20;
    uVar17 = uVar17 + ((uVar22 ^ uVar20) & uVar18 ^ uVar20) + 0x265e5a51 + iVar12;
    uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar22;
    uVar18 = uVar18 + ((uVar22 ^ uVar17) & uVar20 ^ uVar22) + 0xe9b6c7aa + iVar1;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar20 = uVar20 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0xd62f105d + iVar6;
    uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18;
    uVar22 = uVar22 + ((uVar18 ^ uVar20) & uVar17 ^ uVar18) + 0x2441453 + iVar11;
    uVar22 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar20;
    uVar17 = uVar17 + ((uVar22 ^ uVar20) & uVar18 ^ uVar20) + 0xd8a1e681 + iVar16;
    uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar22;
    uVar18 = uVar18 + ((uVar22 ^ uVar17) & uVar20 ^ uVar22) + 0xe7d3fbc8 + iVar5;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar20 = uVar20 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + 0x21e1cde6 + iVar10;
    uVar20 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18;
    uVar22 = uVar22 + 0xc33707d6 + ((uVar18 ^ uVar20) & uVar17 ^ uVar18) + iVar15;
    uVar22 = (uVar22 * 0x200 | uVar22 >> 0x17) + uVar20;
    uVar17 = uVar17 + 0xf4d50d87 + ((uVar22 ^ uVar20) & uVar18 ^ uVar20) + iVar4;
    uVar17 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar22;
    uVar18 = uVar18 + ((uVar22 ^ uVar17) & uVar20 ^ uVar22) + 0x455a14ed + iVar9;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar17;
    uVar20 = uVar20 + 0xa9e3e905 + ((uVar17 ^ uVar18) & uVar22 ^ uVar17) + iVar14;
    uVar19 = (uVar20 * 0x20 | uVar20 >> 0x1b) + uVar18;
    uVar20 = uVar22 + 0xfcefa3f8 + ((uVar18 ^ uVar19) & uVar17 ^ uVar18) + iVar3;
    uVar21 = (uVar20 * 0x200 | uVar20 >> 0x17) + uVar19;
    uVar17 = ((uVar21 ^ uVar19) & uVar18 ^ uVar19) + 0x676f02d9 + iVar8 + uVar17;
    uVar20 = (uVar17 * 0x4000 | uVar17 >> 0x12) + uVar21;
    uVar18 = uVar18 + 0x8d2a4c8a + ((uVar21 ^ uVar20) & uVar19 ^ uVar21) + iVar13;
    uVar18 = (uVar18 >> 0xc | uVar18 * 0x100000) + uVar20;
    uVar19 = uVar19 + ((uVar21 ^ uVar20 ^ uVar18) - 0x5c6be) + iVar6;
    uVar22 = (uVar19 * 0x10 | uVar19 >> 0x1c) + uVar18;
    uVar21 = uVar21 + (uVar20 ^ uVar18 ^ uVar22) + 0x8771f681 + iVar9;
    uVar17 = (uVar21 * 0x800 | uVar21 >> 0x15) + uVar22;
    uVar20 = uVar20 + (uVar17 ^ uVar18 ^ uVar22) + 0x6d9d6122 + iVar12;
    uVar20 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar17;
    uVar18 = uVar18 + (uVar17 ^ uVar20 ^ uVar22) + 0xfde5380c + iVar15;
    uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
    uVar22 = uVar22 + (uVar17 ^ uVar20 ^ uVar18) + 0xa4beea44 + iVar2;
    uVar22 = (uVar22 * 0x10 | uVar22 >> 0x1c) + uVar18;
    uVar17 = uVar17 + (uVar20 ^ uVar18 ^ uVar22) + 0x4bdecfa9 + iVar5;
    uVar19 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar22;
    uVar20 = uVar20 + (uVar19 ^ uVar18 ^ uVar22) + 0xf6bb4b60 + iVar8;
    uVar20 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar19;
    uVar18 = uVar18 + (uVar19 ^ uVar20 ^ uVar22) + 0xbebfbc70 + iVar11;
    uVar18 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar20;
    uVar22 = uVar22 + (uVar19 ^ uVar20 ^ uVar18) + 0x289b7ec6 + iVar14;
    uVar17 = (uVar22 * 0x10 | uVar22 >> 0x1c) + uVar18;
    uVar19 = uVar19 + (uVar20 ^ uVar18 ^ uVar17) + 0xeaa127fa + iVar1;
    uVar19 = (uVar19 * 0x800 | uVar19 >> 0x15) + uVar17;
    uVar20 = uVar20 + (uVar19 ^ uVar18 ^ uVar17) + 0xd4ef3085 + iVar4;
    uVar22 = (uVar20 * 0x10000 | uVar20 >> 0x10) + uVar19;
    uVar18 = uVar18 + (uVar19 ^ uVar22 ^ uVar17) + 0x4881d05 + iVar7;
    uVar20 = (uVar18 >> 9 | uVar18 * 0x800000) + uVar22;
    uVar18 = (uVar19 ^ uVar22 ^ uVar20) + iVar10 + uVar17 + 0xd9d4d039;
    uVar18 = (uVar18 * 0x10 | uVar18 >> 0x1c) + uVar20;
    uVar17 = uVar19 + 0xe6db99e5 + (uVar22 ^ uVar20 ^ uVar18) + iVar13;
    uVar17 = (uVar17 * 0x800 | uVar17 >> 0x15) + uVar18;
    uVar22 = (uVar17 ^ uVar20 ^ uVar18) + 0x1fa27cf8 + iVar16 + uVar22;
    uVar19 = (uVar22 * 0x10000 | uVar22 >> 0x10) + uVar17;
    uVar20 = uVar20 + (uVar17 ^ uVar19 ^ uVar18) + 0xc4ac5665 + iVar3;
    uVar20 = (uVar20 >> 9 | uVar20 * 0x800000) + uVar19;
    uVar18 = uVar18 + ((~uVar17 | uVar20) ^ uVar19) + 0xf4292244 + iVar1;
    uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar20;
    uVar17 = uVar17 + ((~uVar19 | uVar18) ^ uVar20) + 0x432aff97 + iVar8;
    uVar22 = (uVar17 * 0x400 | uVar17 >> 0x16) + uVar18;
    uVar19 = uVar19 + ((~uVar20 | uVar22) ^ uVar18) + 0xab9423a7 + iVar15;
    uVar17 = (uVar19 * 0x8000 | uVar19 >> 0x11) + uVar22;
    uVar20 = uVar20 + ((~uVar18 | uVar17) ^ uVar22) + 0xfc93a039 + iVar6;
    uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar17;
    uVar18 = uVar18 + ((~uVar22 | uVar20) ^ uVar17) + 0x655b59c3 + iVar13;
    uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar20;
    uVar22 = uVar22 + ((~uVar17 | uVar18) ^ uVar20) + 0x8f0ccc92 + iVar4;
    uVar22 = (uVar22 * 0x400 | uVar22 >> 0x16) + uVar18;
    uVar17 = uVar17 + (((~uVar20 | uVar22) ^ uVar18) - 0x100b83) + iVar11;
    uVar17 = (uVar17 * 0x8000 | uVar17 >> 0x11) + uVar22;
    uVar20 = uVar20 + ((~uVar18 | uVar17) ^ uVar22) + 0x85845dd1 + iVar2;
    uVar20 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar17;
    uVar18 = uVar18 + ((~uVar22 | uVar20) ^ uVar17) + 0x6fa87e4f + iVar9;
    uVar18 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar20;
    uVar22 = uVar22 + ((~uVar17 | uVar18) ^ uVar20) + 0xfe2ce6e0 + iVar16;
    uVar19 = (uVar22 * 0x400 | uVar22 >> 0x16) + uVar18;
    uVar22 = uVar17 + 0xa3014314 + ((~uVar20 | uVar19) ^ uVar18) + iVar7;
    uVar22 = (uVar22 * 0x8000 | uVar22 >> 0x11) + uVar19;
    uVar20 = uVar20 + 0x4e0811a1 + ((~uVar18 | uVar22) ^ uVar19) + iVar14;
    uVar17 = (uVar20 >> 0xb | uVar20 * 0x200000) + uVar22;
    uVar18 = uVar18 + 0xf7537e82 + ((~uVar19 | uVar17) ^ uVar22) + iVar5;
    uVar21 = (uVar18 * 0x40 | uVar18 >> 0x1a) + uVar17;
    uVar19 = uVar19 + ((~uVar22 | uVar21) ^ uVar17) + 0xbd3af235 + iVar12;
    *param_1 = *param_1 + uVar21;
    uVar19 = (uVar19 * 0x400 | uVar19 >> 0x16) + uVar21;
    uVar18 = uVar22 + 0x2ad7d2bb + ((~uVar17 | uVar19) ^ uVar21) + iVar3;
    uVar20 = (uVar18 * 0x8000 | uVar18 >> 0x11) + uVar19;
    param_1[2] = param_1[2] + uVar20;
    uVar18 = uVar17 + 0xeb86d391 + ((~uVar21 | uVar20) ^ uVar19) + iVar10;
    param_1[1] = param_1[1] + (uVar18 >> 0xb | uVar18 * 0x200000) + uVar20;
    param_1[3] = param_1[3] + uVar19;
    return;
}


/* fcn.0001a0df @ 0x1a0df */

uint8_t fcn.0001a0df(uint8_t param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    
    uVar2 = 0;
    iVar3 = 8;
    do {
        uVar1 = uVar2 * '\x02';
        uVar2 = uVar1 | 1;
        if ((param_1 & 1) == 0) {
            uVar2 = uVar1;
        }
        iVar3 = iVar3 + -1;
        param_1 = param_1 >> 1;
    } while (iVar3 != 0);
    return uVar2;
}


/* fcn.0001a064 @ 0x1a064 */

uint fcn.0001a064(uint8_t *param_1,int param_2,uint32_t *param_3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t *puVar4;
    
    fcn.00010a9b(param_3,0x54);
    puVar4 = param_1 + param_2;
    while( true ) {
        if (puVar4 <= param_1) {
            return 0;
        }
        uVar3 = 0;
        do {
            if (puVar4 <= param_1) {
                return 0xffffffff;
            }
            uVar1 = *param_1;
            param_1 = param_1 + 1;
            uVar3 = uVar3 << 7 | uVar1 & 0x7f;
        } while (uVar1 < '\0');
        uVar2 = param_3[0x14];
        if (0x13 < uVar2) break;
        if (uVar2 == 0) {
            uVar2 = uVar3 / 0x28;
            if (2 < uVar3 / 0x28) {
                uVar2 = 2;
            }
            *param_3 = uVar2;
            param_3[1] = uVar3 + uVar2 * -0x28;
            param_3[0x14] = 2;
        }
        else {
            param_3[uVar2] = uVar3;
            param_3[0x14] = param_3[0x14] + 1;
        }
    }
    return 0xffffffff;
}


