// decompiled by r2ghidra: 0025_AmiUpdateDxePolicyCallback.pe32
// functions: 15

/* entry0 @ 0x10310 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010324(arg1,in_RDX);
    fcn.000103f8(arg1,in_RDX);
    return;
}


/* fcn.00010324 @ 0x10324 */

void fcn.00010324(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10a60 = *(arg1 + 0x60);
    *0x10a68 = *(arg1 + 0x58);
    *0x10a58 = arg1;
    fcn.000108d8();
    puVar4 = fcn.000108d8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010383:
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
            if ((*0x10a00 == *(puVar4 + 4)) && (*0x10a08 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x00010383;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000103f8 @ 0x103f8 */

ulong fcn.000103f8(int64_t arg1,int64_t arg2)

{
    int64_t var_10h;
    int64_t var_18h;
    
    var_10h = arg1;
    var_18h = arg2;
    (**(*0x10a60 + 0x50))(0x200,8,0x107d0,0,&var_18h);
    (**(*0x10a60 + 0xa8))(0x109f0,var_18h,&var_10h);
    (**(*0x10a60 + 0x50))(0x200,8,0x10520,0,&var_18h);
    (**(*0x10a60 + 0xa8))(0x109d0,var_18h,&var_10h);
    (**(*0x10a60 + 0x50))(0x200,8,0x10664,0,&var_18h);
    (**(*0x10a60 + 0xa8))(0x10990,var_18h,&var_10h);
    (**(*0x10a60 + 0x50))(0x200,8,0x106a8,0,&var_18h);
    (**(*0x10a60 + 0xa8))(0x109e0,var_18h,&var_10h);
    return 0;
}


/* fcn.000108d8 @ 0x108d8 */

int64_t fcn.000108d8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10a70 == 0) {
        *0x10a70 = 0;
        if (*(*0x10a58 + 0x68) != 0) {
            piVar2 = *(*0x10a58 + 0x70);
            do {
                if ((*0x109c0 == *piVar2) && (*0x109c8 == piVar2[1])) {
                    *0x10a70 = (*(*0x10a58 + 0x70))[uVar1 * 3 + 2];
                    return *0x10a70;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10a58 + 0x68));
        }
    }
    return *0x10a70;
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


/* fcn.00010944 @ 0x10944 */

int64_t fcn.00010944(void)

{
    if (*0x10a78 == 0) {
        (**(*0x10a60 + 0x140))(0x10980,0,0x10a78);
    }
    return *0x10a78;
}


/* fcn.00010814 @ 0x10814 */

ulong fcn.00010814(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar4 = 0;
    if (*(iVar1 + 0x1e) != 0) {
        do {
            if (*(iVar1 + 2) < uVar3 + 0x24) {
                return 0x800000000000000e;
            }
            iVar2 = iVar1 + 0x24 + uVar3;
            if ((*(iVar2 + 8) == *arg2) && (*(iVar2 + 0x10) == *(arg2 + 8))) {
                *arg3 = iVar2;
                return 0;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + *(iVar2 + 2);
        } while (uVar4 < *(iVar1 + 0x1e));
    }
    return 0x800000000000000e;
}


/* fcn.000108ac @ 0x108ac */

void fcn.000108ac(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001087c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102f0(arg1_00,arg1);
    }
    return;
}


/* fcn.0001087c @ 0x1087c */

ulong fcn.0001087c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10a60 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102f0 @ 0x102f0 */

int64_t fcn.000102f0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1824 named .text
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


