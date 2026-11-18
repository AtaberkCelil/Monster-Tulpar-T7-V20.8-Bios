// decompiled by r2ghidra: 0863_ResetSystemRuntimeDxe.pe32
// functions: 12

/* entry0 @ 0x11114 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    ulong auStackX_18 [2];
    
    fcn.000111b4(arg1,in_RDX);
    auStackX_18[0] = 0;
    *(*0x12158 + 0x68) = 0x11504;
    iVar1 = (**(*0x12150 + 0x148))(auStackX_18,0x12000,0,0x12030,0x120e8,str.5x_iG,0x120c0,0x12070,0x12098,0);
    if (iVar1 < 0) {
        fcn.000113b4();
    }
    return iVar1;
}


/* fcn.000111b4 @ 0x111b4 */

void fcn.000111b4(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x12158 = *(arg1 + 0x58);
    *0x12150 = *(arg1 + 0x60);
    *0x12148 = arg1;
    *0x12160 = *0x12158;
    *0x12178 = *0x12150;
    (**(*0x12150 + 0x50))(0x201,8,0x11670,0,0x12168);
    (**(*0x12178 + 0x50))(0x60000202,8,0x1167c,0,0x12170);
    fcn.000116a4();
    puVar4 = fcn.000116a4();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001126d:
            if (puVar4 == NULL) {
                uVar5 = fcn.00011110();
                fcn.00011100();
                uVar2 = in(0x1808);
                fcn.000110e0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000110d0();
                }
                fcn.000110e0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011100();
                }
                else {
                    fcn.000110f0();
                }
code_r0x000112d6:
                *0x121b8 = *0x12158;
                (**(*0x12150 + 0x50))(0x60000202,0x10,0x11718,0,0x121b0);
                (**(*0x12150 + 0x50))(0x201,0x10,0x11710,0,0x121c0);
                fcn.0001172c();
                (**(*0x12150 + 0x170))(0x200,0x10,0x1178c,0,0x12060,0x121a0);
                (**(*0x12150 + 0x170))(0x200,0x10,0x117b4,0,0x12050,0x121a8);
                return;
            }
            if ((*0x12108 == *(puVar4 + 4)) && (*0x12110 == *(puVar4 + 8))) goto code_r0x000112d6;
        }
        else if (uVar1 == 4) goto code_r0x0001126d;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113b4 @ 0x113b4 */

void fcn.000113b4(void)

{
    (**(*0x12150 + 0x70))(*0x121a0);
    (**(*0x12150 + 0x70))(*0x121a8);
    (**(*0x12150 + 0x70))(*0x121b0);
    (**(*0x12150 + 0x70))(*0x121c0);
    (**(*0x12178 + 0x70))(*0x12168);
    //WARNING: Could not recover jumptable at 0x0001141f. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x12178 + 0x70))(*0x12170);
    return;
}


/* fcn.000116a4 @ 0x116a4 */

int64_t fcn.000116a4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12188 == 0) {
        *0x12188 = 0;
        if (*(*0x12148 + 0x68) != 0) {
            piVar2 = *(*0x12148 + 0x70);
            do {
                if ((*0x12040 == *piVar2) && (*0x12048 == piVar2[1])) {
                    *0x12188 = (*(*0x12148 + 0x70))[uVar1 * 3 + 2];
                    return *0x12188;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12148 + 0x68));
        }
    }
    return *0x12188;
}


/* fcn.00011110 @ 0x11110 */

uint64_t fcn.00011110(void)

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


/* fcn.00011100 @ 0x11100 */

void fcn.00011100(void)

{
    return;
}


/* fcn.000110e0 @ 0x110e0 */

uint64_t fcn.000110e0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110d2 @ 0x110d2 */

void fcn.000110d2(void)

{
    return;
}


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(void)

{
    return;
}


/* fcn.0001172c @ 0x1172c */

void fcn.0001172c(void)

{
    int64_t iVar1;
    
    if ((((*0x12198 == 0) && (*0x12191 == '\0')) && (*0x12150 != 0)) && (*(*0x12150 + 0x140) != NULL)) {
        iVar1 = (**(*0x12150 + 0x140))(0x12010,0,0x12198);
        if (iVar1 < 0) {
            *0x12198 = 0;
        }
    }
    return;
}


/* fcn.00011638 @ 0x11638 */

int64_t fcn.00011638(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x12150 + 0x40))(4,0x20,aiStackX_10);
    if (iVar1 < 0) {
        aiStackX_10[0] = 0;
    }
    return aiStackX_10[0];
}


/* fcn.000117cc @ 0x117cc */

ulong fcn.000117cc(void)

{
    ulong uVar1;
    
    fcn.0001172c();
    if (*0x12198 == NULL) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (***0x12198)(1,0x311100a,0,0x12080,0);
    }
    return uVar1;
}


