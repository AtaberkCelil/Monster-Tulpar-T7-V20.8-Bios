// decompiled by r2ghidra: 0403_PciPlatform.pe32
// functions: 11

/* entry0 @ 0x10350 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010384(arg1,in_RDX);
    (**(*0x10b20 + 0x80))(0x10b10,0x10aa0,0,0x10ab0);
    return;
}


/* fcn.00010384 @ 0x10384 */

void fcn.00010384(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10b20 = *(arg1 + 0x60);
    *0x10b28 = *(arg1 + 0x58);
    *0x10b18 = arg1;
    fcn.00010894();
    puVar4 = fcn.00010894();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103e3:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102e0();
                fcn.000102d0();
                uVar2 = in(0x1808);
                fcn.000102b0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102a0();
                }
                fcn.000102b0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000102d0();
                }
                else {
                    fcn.000102c0();
                }
                return;
            }
            if ((*0x10ad0 == *(puVar4 + 4)) && (*0x10ad8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103e3;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010894 @ 0x10894 */

int64_t fcn.00010894(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10b38 == 0) {
        *0x10b38 = 0;
        if (*(*0x10b18 + 0x68) != 0) {
            piVar2 = *(*0x10b18 + 0x70);
            do {
                if ((*0x10a90 == *piVar2) && (*0x10a98 == piVar2[1])) {
                    *0x10b38 = (*(*0x10b18 + 0x70))[uVar1 * 3 + 2];
                    return *0x10b38;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10b18 + 0x68));
        }
    }
    return *0x10b38;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(void)

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


/* fcn.000102d0 @ 0x102d0 */

void fcn.000102d0(void)

{
    return;
}


/* fcn.000102b0 @ 0x102b0 */

uint64_t fcn.000102b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102a2 @ 0x102a2 */

void fcn.000102a2(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(void)

{
    return;
}


/* fcn.00010458 @ 0x10458 */

void fcn.00010458(void)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 2;
    do {
        if (7 < uVar2) {
            return;
        }
        uVar1 = (uVar2 & 7 | 0x68) << 0xc;
        uVar3 = uVar1;
        if ((*(uVar1 + 0xc0000002) != -1) &&
           ((((*(uVar3 + 0xc0000010) & 0xffff0000) != 0 || (*(uVar3 + 0xc0000014) != 0)) &&
            ((*(uVar3 + 0xc0000004) & 7) != 3)))) {
            *(uVar3 + 0xc0000004) = *(uVar3 + 0xc0000004) & 0xfffb;
            *(uVar3 + 0xc0000004) = *(uVar3 + 0xc0000004) | 3;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    return;
}


/* fcn.00010858 @ 0x10858 */

int64_t fcn.00010858(void)

{
    if (*0x10b30 == 0) {
        (**(*0x10b20 + 0x140))(0x10a60,0,0x10b30);
    }
    return *0x10b30;
}


/* fcn.0001054c @ 0x1054c */

ulong fcn.0001054c(ulong noname_0,int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong auStackX_10 [3];
    uchar auStack_cb8 [2080];
    char cStack_498;
    char cStack_452;
    
    if (arg2 == 7) {
        auStackX_10[0] = 0xca9;
        (**(*0x10b28 + 0x48))(L"Setup",0x10a80,0,auStackX_10,auStack_cb8);
        uVar2 = *0xc00a0010 & 0xfffffff0;
        if ((*0xc00a0010 & 0xffff0000) == 0) {
            uVar2 = *0xc00a0014;
        }
        uVar1 = *0xc0068010 & 0xfffffff0;
        if ((*0xc0068010 & 0xffff0000) == 0) {
            uVar1 = *0xc0068014;
        }
        if ((uVar2 != 0) && ((*0xc00a0004 & 6) != 6)) {
            *0xc00a0004 = *0xc00a0004 | 6;
        }
        if (((uVar1 != 0) && (cStack_452 != '\0')) && ((*0xc0068004 & 6) != 6)) {
            *0xc0068004 = *0xc0068004 | 6;
        }
        fcn.00010458();
    }
    else if ((arg2 == 8) && (arg3 == 0)) {
        auStackX_10[0] = 0xca9;
        iVar3 = (**(*0x10b28 + 0x48))(L"Setup",0x10a80,0,auStackX_10,auStack_cb8);
        if ((-1 < iVar3) && (cStack_498 == '\x01')) {
            iVar3 = fcn.00010858();
            (**(iVar3 + 0x30))(0x1f);
        }
    }
    return 0;
}


