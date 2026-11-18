// decompiled by r2ghidra: 0803_OemManufactureModeDxe.pe32
// functions: 10

/* entry0 @ 0x103c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103dc(arg1,arg2);
    fcn.000104ac(arg1,arg2);
    return;
}


/* fcn.000103dc @ 0x103dc */

void fcn.000103dc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x10988 = *(arg1 + 0x60);
    *0x10980 = arg1;
    fcn.00010698();
    iVar3 = fcn.00010704();
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
    if ((*0x109a8 != NULL) || (iVar3 = (**(*0x10988 + 0x140))(0x108d0,0,0x109a8), -1 < iVar3)) {
        (***0x109a8)(*0x109a8,0x109b0);
    }
    return;
}


/* fcn.000104ac @ 0x104ac */

ulong fcn.000104ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    bool bVar3;
    uint8_t uVar4;
    uint64_t auStackX_8 [2];
    uint auStackX_18 [2];
    char acStackX_20 [8];
    int32_t var_790h;
    uint32_t var_798h;
    uint uStack_848;
    uint uStack_844;
    uint uStack_840;
    uint uStack_83c;
    ulong uStack_838;
    ulong uStack_830;
    uchar auStack_828 [28];
    char cStack_80c;
    
    auStackX_18[0] = 0;
    bVar3 = false;
    if (*0x10998 == 0) {
        *0x10990 = *(arg2 + 0x58);
        *0x10998 = arg2;
    }
    uStack_838 = 7;
    uVar4 = *0xfe4107a4 & 1;
    auStackX_8[0] = arg1;
    iVar1 = (**(*0x10990 + 0x48))(L"SecureBootSetup",0x108e0,auStackX_18,&uStack_838,acStackX_20);
    if (((-1 < iVar1) && (uVar4 != 0)) && (acStackX_20[0] == '\x01')) {
        acStackX_20[0] = '\0';
        uStack_848 = 0xe770bb69;
        uStack_844 = 0x4d04bcb4;
        uStack_840 = 0xff23979e;
        uStack_83c = 0xacfe5694;
        auStackX_8[0] = auStackX_8[0] & 0xffffffffffffff00;
        (**(*0x10990 + 0x58))(L"SystemAccess",&uStack_848,2,1,auStackX_8);
        (**(*0x10990 + 0x58))(L"SecureBootSetup",0x108e0,auStackX_18[0],uStack_838,acStackX_20);
        bVar3 = true;
    }
    uStack_830 = 0x80d;
    uStack_848 = 0x4570b7f1;
    uStack_844 = 0x4943ade8;
    uStack_840 = 0x6440c38d;
    uStack_83c = 0x84238472;
    uVar2 = (**(*0x10990 + 0x48))(L"PchSetup",&uStack_848,auStackX_8,&uStack_830,auStack_828);
    if ((uVar4 == 1) && (cStack_80c == '\x01')) {
        cStack_80c = 0;
        uVar2 = (**(*0x10990 + 0x58))(L"PchSetup",&uStack_848,auStackX_8[0] & 0xffffffff,uStack_830,auStack_828);
        bVar3 = true;
    }
    if (bVar3) {
        out(0xcf9,0xe);
    }
    return uVar2;
}


/* fcn.00010698 @ 0x10698 */

int64_t fcn.00010698(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x109a0 == 0) {
        *0x109a0 = 0;
        if (*(*0x10980 + 0x68) != 0) {
            piVar2 = *(*0x10980 + 0x70);
            do {
                if ((*0x108c0 == *piVar2) && (*0x108c8 == piVar2[1])) {
                    *0x109a0 = (*(*0x10980 + 0x70))[uVar1 * 3 + 2];
                    return *0x109a0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10980 + 0x68));
        }
    }
    return *0x109a0;
}


/* fcn.00010704 @ 0x10704 */

void fcn.00010704(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010698();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001073b:
            if ((piVar1 == NULL) || ((*0x108f0 == *(piVar1 + 4) && (*0x108f8 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001073b;
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


