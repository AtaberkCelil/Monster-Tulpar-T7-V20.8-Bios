// decompiled by r2ghidra: 1855_SdioInt13.pe32
// functions: 4

/* entry0 @ 0x10280 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10908 = *(arg2 + 0x60);
    *0x10900 = arg2;
    fcn.000102a0(arg1,arg2);
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_8;
    uint64_t uStackX_10;
    int64_t var_bp_20h;
    int8_t var_bp_10h;
    int16_t var_fh;
    int32_t var_dh;
    int32_t var_9h;
    
    var_bp_20h = 0;
    uStackX_10 = 0;
    iStackX_8 = arg1;
    iVar1 = (**(*0x10908 + 0x140))(0x108a0,0,0x108f8);
    if ((-1 < iVar1) && (iVar1 = (***0x108f8)(1,0,4,&iStackX_8,&uStackX_10), -1 < iVar1)) {
        if ((iStackX_8 == 0) || (uStackX_10 == 0)) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            uVar2 = *(iStackX_8 + 0x19f);
            if (uStackX_10 < uVar2 + 0xb) {
                iVar1 = -0x7ffffffffffffffe;
            }
            else {
                *(uVar2 + iStackX_8) = 0x40000000b2000001;
                *(uVar2 + 8 + iStackX_8) = 0;
                *(uVar2 + 10 + iStackX_8) = 0;
                *0x108f0 = (*(*0x108f8)[8])(iStackX_8,uStackX_10 & 0xffff,0x10);
                *0x10910 = fcn.000103f8;
                *0x10918 = 0x106ac;
                iVar1 = (**(*0x10908 + 0x80))(&var_bp_20h,0x108b0,0,0x10910);
            }
        }
    }
    return iVar1;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 1600 named .text
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


/* fcn.000103f8 @ 0x103f8 */

//WARNING: Variable defined which should be unmapped: var_13h

ulong fcn.000103f8(uint32_t arg1)

{
    char cVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    int iVar4;
    uint in_register_0000000c;
    ulong *puVar5;
    char *pcVar6;
    uint8_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    char *pcVar10;
    uint8_t uVar11;
    char *pcVar12;
    uchar auStackX_8 [8];
    uint16_t auStackX_10 [4];
    int8_t var_30h;
    int64_t var_38h;
    uchar auStack_78 [2];
    uint32_t uStack_76;
    uint32_t uStack_72;
    uint32_t uStack_6e;
    ushort uStack_6a;
    int16_t iStack_68;
    uint16_t uStack_66;
    ushort uStack_64;
    uint16_t uStack_62;
    int16_t iStack_60;
    ushort uStack_5e;
    ushort uStack_5c;
    uint16_t uStack_5a;
    int64_t var_50h;
    int32_t var_46h;
    int16_t var_42h;
    int16_t var_40h;
    int16_t var_3eh;
    int16_t var_3ch;
    int16_t var_3ah;
    int16_t var_38h_2;
    int16_t var_36h;
    int16_t var_34h;
    int16_t var_32h;
    int32_t var_30h_2;
    int64_t var_13h;
    
    puVar5 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = *puVar5;
    auStackX_8[0] = 0xff;
    if (*piVar3 != 0x200) {
        return 0;
    }
    uVar7 = 0;
    do {
        if (*(uVar7 * 0x32 + *0x108f0) == *(puVar5 + 1)) {
            return 0x8000000000000002;
        }
        uVar7 = uVar7 + 1;
    } while (uVar7 < 8);
    uVar9 = 0;
    do {
        uVar7 = uVar9;
        if (*(uVar9 * 0x32 + *0x108f0) == '\0') break;
        uVar7 = uVar7 + 1;
        uVar9 = uVar7;
    } while (uVar7 < 8);
    if (uVar7 == 8) {
        return 0x8000000000000009;
    }
    (**(*0x108f8 + 0x28))(0,0,0);
    if (*0x108f8 == 0) goto code_r0x00010603;
    (**(*0x10908 + 0x168))(auStack_78,0x45);
    fcn.00010260(auStackX_10,2);
    uVar9 = *0x108f0;
    uVar2 = *(puVar5 + 3);
    pcVar10 = puVar5[4];
    uStack_76 = uVar2 >> 8;
    uStack_72 = uVar2 >> 3 & 0x1f;
    uStack_6a = 0x508;
    uStack_6e = uVar2 & 7;
    auStackX_10[0] = auStackX_10[0] & 0xf7ff | 0x500;
    pcVar12 = *0x108f0 + 0x12 + uVar7 * 0x32;
    uVar11 = 0;
    pcVar6 = pcVar12;
    do {
        cVar1 = *pcVar10;
        if (cVar1 == '\0') break;
        if ((cVar1 != ' ') || (pcVar10[-1] != ' ')) {
            *pcVar6 = cVar1;
            pcVar6 = pcVar6 + 1;
        }
        uVar11 = uVar11 + 1;
        pcVar10 = pcVar10 + 1;
    } while (uVar11 < 0x1f);
    *pcVar6 = '\0';
    uVar11 = *(puVar5 + 1);
    uStack_5a = pcVar12 >> 4 & 0xf000;
    uStack_5c = SUB82(pcVar12,0);
    uStack_66 = uVar9 + 400 >> 4 & 0xf000;
    iStack_68 = uVar9 + 400;
    if (*(puVar5 + 5) == '\x01') {
        uStack_64 = 2;
        uVar11 = uVar11 | 0x80;
        iVar4 = 0x20000;
code_r0x000105c8:
        uStack_5e = uVar9 >> 4;
        iStack_60 = uVar7 * 4 + *(uVar9 + 0x19d);
    }
    else {
        if (*(puVar5 + 5) == '\x02') {
            uStack_64 = 1;
            iVar4 = 0x40000;
            goto code_r0x000105c8;
        }
        uStack_64 = 0xff;
        iVar4 = 0xff0000;
    }
    var_50h._0_4_ = (uVar11 + iVar4) * 0x100 + 1;
    unique0x00023e00 = puVar5[2];
    uStack_62 = auStackX_10[0];
code_r0x00010603:
    (**(*0x108f8 + 0x10))(*0x108f8,auStack_78,auStackX_8);
    uVar9 = *0x108f0;
    iVar8 = uVar7 * 0x32;
    *(iVar8 + *0x108f0) = *(puVar5 + 1);
    *(iVar8 + 1 + uVar9) = auStackX_8[0];
    *(iVar8 + 2 + uVar9) = var_50h >> 0x18;
    *(iVar8 + 3 + uVar9) = piVar3[6];
    *(iVar8 + 4 + uVar9) = piVar3[4];
    *(iVar8 + 5 + uVar9) = piVar3[7];
    *(iVar8 + 7 + uVar9) = piVar3[5];
    *(iVar8 + 9 + uVar9) = *(piVar3 + 0xd);
    *(iVar8 + 10 + uVar9) = *(piVar3 + 9);
    *(iVar8 + 0xb + uVar9) = *piVar3;
    *(iVar8 + 0xe + uVar9) = *(piVar3 + 2);
    (**(*0x108f8 + 0x30))(0,0);
    return 0;
}


