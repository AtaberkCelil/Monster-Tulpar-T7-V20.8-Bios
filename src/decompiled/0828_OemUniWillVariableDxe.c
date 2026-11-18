// decompiled by r2ghidra: 0828_OemUniWillVariableDxe.pe32
// functions: 12

/* entry0 @ 0x103c0 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103f8(arg1,arg2);
    if (*0x109f8 == 0) {
        *0x109f0 = *(arg2 + 0x58);
        *0x109f8 = arg2;
    }
    fcn.000104c8();
    return 0;
}


/* fcn.000103f8 @ 0x103f8 */

void fcn.000103f8(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x109e8 = *(arg1 + 0x60);
    *0x109e0 = arg1;
    fcn.0001073c();
    iVar3 = fcn.000107a8();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
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
    if ((*0x10a08 != NULL) || (iVar3 = (**(*0x109e8 + 0x140))(0x10970,0,0x10a08), -1 < iVar3)) {
        (***0x10a08)(*0x10a08,0x10a10);
    }
    return;
}


/* fcn.000104c8 @ 0x104c8 */

//WARNING: Variable defined which should be unmapped: var_2bh
//WARNING: Variable defined which should be unmapped: var_35h

void fcn.000104c8(void)

{
    int64_t iVar1;
    uint8_t *puVar2;
    uint8_t *arg1;
    uint auStackX_8 [2];
    ulong uStackX_10;
    int32_t var_67h;
    int64_t var_6fh;
    uint uStack_f8;
    uchar uStack_f2;
    uchar uStack_f1;
    uchar uStack_f0;
    uchar uStack_ef;
    uchar uStack_ee;
    uchar uStack_ed;
    uchar uStack_ec;
    uint8_t auStack_eb [34];
    uint uStack_c9;
    uchar uStack_c5;
    ulong uStack_c4;
    uint uStack_bc;
    ushort uStack_b8;
    uchar uStack_b6;
    ulong uStack_b4;
    ulong uStack_ac;
    ulong uStack_a4;
    uint uStack_9c;
    ushort uStack_98;
    uchar uStack_96;
    ulong uStack_94;
    ushort uStack_8c;
    uchar auStack_8a [24];
    int32_t var_6ah;
    int8_t var_66h;
    int64_t var_65h;
    int32_t var_5dh;
    int16_t var_59h;
    int8_t var_57h;
    int64_t var_55h;
    int64_t var_4dh;
    int64_t var_45h;
    int32_t var_bp_3dh;
    int16_t var_bp_39h;
    int8_t var_bp_37h;
    int64_t var_35h;
    int16_t var_2dh;
    int64_t var_2bh;
    
    auStackX_8[0] = 7;
    uStackX_10 = 0xb4;
    iVar1 = (**(*0x109f0 + 0x48))(L"UniWillVariable",0x10980,auStackX_8,&uStackX_10,&uStack_f8);
    if (iVar1 < 0) {
        uStack_f8 = 0x12411d05;
        uStack_f2 = *0xfe410740;
        uStack_f1 = *0xfe41073c;
        uStack_f0 = *0xfe41073d;
        section..text(&uStack_ef,0xfe410d20,1);
        section..text(&uStack_ee,0xfe410d21,1);
        section..text(&uStack_ed,0xfe410d22,1);
        section..text(&uStack_ec,0xfe410d23,1);
        section..text(auStack_eb,0xfe410d45,1);
        if (auStack_eb[0] == 0xff) {
            auStack_eb[0] = 0;
        }
        else {
            auStack_eb[0] = auStack_eb[0] >> 1 & 1;
        }
        auStack_eb[1] = 10;
        arg1 = auStack_eb + 2;
        iVar1 = 8;
        do {
            if (arg1 != (arg1 + (0x14 - (auStack_eb + 2)) | 0xfe410d00)) {
                section..text(arg1,arg1 + (0x14 - (auStack_eb + 2)) | 0xfe410d00,1);
            }
            puVar2 = arg1 - &uStack_ed | 0xfe410d00;
            if (arg1 + 8 != puVar2) {
                section..text(arg1 + 8,puVar2,1);
            }
            if (arg1 + 0x10 != (arg1 + (0x39 - (auStack_eb + 2)) | 0xfe410d00)) {
                section..text(arg1 + 0x10,arg1 + (0x39 - (auStack_eb + 2)) | 0xfe410d00,1);
            }
            puVar2 = arg1 + (0x29 - (auStack_eb + 2)) | 0xfe410d00;
            if (arg1 + 0x18 != puVar2) {
                section..text(arg1 + 0x18,puVar2,1);
            }
            arg1 = arg1 + 1;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uStack_c9 = 0xffffffff;
        uStack_c5 = 0xff;
        uStack_c4 = 0;
        uStack_8c = 0xff;
        uStack_bc = 0;
        uStack_b8 = 0;
        uStack_b6 = 0;
        uStack_b4 = 0;
        uStack_ac = 0;
        uStack_a4 = 0;
        uStack_9c = 0;
        uStack_98 = 0xff00;
        uStack_96 = 4;
        uStack_94 = 0x20000;
        fcn.00010850(auStack_8a,CONCAT71(puVar2 >> 8,0xff),0x45);
        (**(*0x109f0 + 0x58))(L"UniWillVariable",0x10980,auStackX_8[0],uStackX_10,&uStack_f8);
    }
    return;
}


/* fcn.0001073c @ 0x1073c */

int64_t fcn.0001073c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10a00 == 0) {
        *0x10a00 = 0;
        if (*(*0x109e0 + 0x68) != 0) {
            piVar2 = *(*0x109e0 + 0x70);
            do {
                if ((*0x10960 == *piVar2) && (*0x10968 == piVar2[1])) {
                    *0x10a00 = (*(*0x109e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10a00;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x109e0 + 0x68));
        }
    }
    return *0x10a00;
}


/* fcn.000107a8 @ 0x107a8 */

void fcn.000107a8(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001073c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000107df:
            if ((piVar1 == NULL) || ((*0x10990 == *(piVar1 + 4) && (*0x10998 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000107df;
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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1792 named .text
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


/* fcn.00010850 @ 0x10850 */

int64_t fcn.00010850(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint *puVar4;
    
    uVar1 = arg2;
    puVar4 = arg1;
    if (3 < arg3) {
        if ((arg1 & 3U) != 0) {
            iVar3 = 4 - (arg1 & 3U);
            arg3 = arg3 - iVar3;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar4 = uVar1;
                puVar4 = puVar4 + 1;
            }
        }
        for (uVar2 = arg3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = CONCAT22(CONCAT11(uVar1,uVar1),CONCAT11(uVar1,uVar1));
            puVar4 = puVar4 + 1;
        }
        arg3 = arg3 & 3;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
    }
    return arg1;
}


