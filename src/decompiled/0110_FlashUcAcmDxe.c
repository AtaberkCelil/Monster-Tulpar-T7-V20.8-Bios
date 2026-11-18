// decompiled by r2ghidra: 0110_FlashUcAcmDxe.pe32
// functions: 13

/* entry0 @ 0x10434 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    uchar auStackX_18 [16];
    
    fcn.000104c0(arg1,arg2);
    if (0x1ffff < *(*0x10ac0 + 8)) {
        (**(*0x10ac8 + 0x170))(0x200,0x10,0x106e4,0,0x10a20,auStackX_18);
    }
    (**(*0x10ac8 + 0x170))(0x200,8,0x10610,0,0x10a50,auStackX_18);
    return 0;
}


/* fcn.000104c0 @ 0x104c0 */

void fcn.000104c0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    uchar auStackX_18 [8];
    
    *0x10ac8 = *(arg2 + 0x60);
    *0x10ad0 = *(arg2 + 0x58);
    *0x10ac0 = arg2;
    iStackX_8 = arg1;
    fcn.0001076c();
    iVar3 = fcn.000107d8();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(arg1,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x10ae0 != NULL) || (iVar3 = (**(*0x10ac8 + 0x140))(0x10a60,0,0x10ae0), -1 < iVar3)) {
        (***0x10ae0)(*0x10ae0,0x10ae8);
    }
    iVar3 = (**(*0x10ac8 + 0x140))(0x10a30,0,auStackX_10);
    if (iVar3 < 0) {
        (**(*0x10ac8 + 0x50))(0x200,8,fcn.00010978,0,&iStackX_8);
        (**(*0x10ac8 + 0xa8))(0x10a30,iStackX_8,auStackX_18);
    }
    else {
        fcn.00010978(0);
    }
    return;
}


/* fcn.0001076c @ 0x1076c */

int64_t fcn.0001076c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10ad8 == 0) {
        *0x10ad8 = 0;
        if (*(*0x10ac0 + 0x68) != 0) {
            piVar2 = *(*0x10ac0 + 0x70);
            do {
                if ((*0x10a40 == *piVar2) && (*0x10a48 == piVar2[1])) {
                    *0x10ad8 = (*(*0x10ac0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10ad8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10ac0 + 0x68));
        }
    }
    return *0x10ad8;
}


/* fcn.000107d8 @ 0x107d8 */

void fcn.000107d8(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001076c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001080f:
            if ((piVar1 == NULL) || ((*0x10a70 == *(piVar1 + 4) && (*0x10a78 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001080f;
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


/* fcn.00010978 @ 0x10978 */

void fcn.00010978(int64_t arg1)

{
    int64_t iVar1;
    ulong *apuStackX_18 [2];
    
    iVar1 = (**(*0x10ac8 + 0x140))(0x10a30,0,apuStackX_18);
    if (-1 < iVar1) {
        *0x10af0 = *apuStackX_18[0];
        *0x10b00 = apuStackX_18[0][1];
        *0x10af8 = apuStackX_18[0][2];
        *0x10b08 = apuStackX_18[0][3];
        if (arg1 != 0) {
            (**(*0x10ac8 + 0x70))(arg1);
        }
    }
    return;
}


/* fcn.00010828 @ 0x10828 */

void fcn.00010828(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    uint auStackX_8 [2];
    uint32_t var_18h;
    int64_t var_bp_20h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    auStackX_8[0] = 0;
    var_10h = 0x69585d92;
    var_ch = 0x4ad7b50a;
    var_bp_8h = -0x4ed19a4e;
    var_4h = 0x746506ae;
    if ((((*0x10af0 != 0) && (*0x10b00 != 0)) && (*0x10af8 != 0)) && (*0x10b08 != 0)) {
        _var_18h = 0;
        iVar1 = (**(*0x10ad0 + 0x48))(L"UcAcmFmp",&var_10h,auStackX_8,&var_18h,0);
        if ((iVar1 == -0x7ffffffffffffffb) && (_var_18h == 0x48)) {
            iVar2 = (**(*0x10ac8 + 0x140))(0x10a10,0,&var_bp_20h);
            iVar1 = *0x10af8;
            if (-1 < iVar2) {
                if (*0x10af8 != 0x10a00) {
                    section..text(*0x10af8,0x10a00,0x10);
                }
                iVar2 = *0x10af8;
                *(iVar1 + 0x10) = 0x19;
                uVar3 = 0x10b08;
                *(iVar1 + 0x18) = 0;
                *(iVar1 + 0x20) = 0;
                *(iVar1 + 0x28) = 0;
                *(iVar1 + 0x30) = 0x80;
                (**var_bp_20h)(var_bp_20h,iVar2,0x10b08);
                if (*0x10b08 != 0) {
                    fcn.00010330(*0x10af8,*0x10b08,CONCAT71(uVar3 >> 8,0xff));
                }
            }
        }
    }
    return;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1952 named .text
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


/* fcn.00010330 @ 0x10330 */

int64_t fcn.00010330(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


