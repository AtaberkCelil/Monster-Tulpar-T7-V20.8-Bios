// decompiled by r2ghidra: 0329_DxeDgOpregionInit.pe32
// functions: 12

/* entry0 @ 0x10364 */

ulong entry0(ulong param_1,int64_t param_2)

{
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uStackX_18;
    uchar auStackX_20 [8];
    
    fcn.000103f0(param_1,param_2);
    iVar2 = fcn.000108c8();
    cVar1 = (**(iVar2 + 0x30))(0x32);
    uVar3 = 0;
    if (cVar1 == '\0') {
        uVar3 = 0x8000000000000003;
    }
    else {
        (**(*0x10a48 + 0x50))(0x200,8,0x104c4,0,&uStackX_18);
        (**(*0x10a48 + 0xa8))(0x109c0,uStackX_18,auStackX_20);
        (**(*0x10a48 + 0x68))(uStackX_18);
    }
    return uVar3;
}


/* fcn.000103f0 @ 0x103f0 */

void fcn.000103f0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10a48 = *(arg1 + 0x60);
    *0x10a50 = *(arg1 + 0x58);
    *0x10a40 = arg1;
    fcn.00010904();
    puVar4 = fcn.00010904();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001044f:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010360();
                fcn.00010350();
                uVar2 = in(0x1808);
                fcn.00010330(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010320();
                }
                fcn.00010330(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010350();
                }
                else {
                    fcn.00010340();
                }
                return;
            }
            if ((*0x109e0 == *(puVar4 + 4)) && (*0x109e8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001044f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000108c8 @ 0x108c8 */

int64_t fcn.000108c8(void)

{
    if (*0x10a58 == 0) {
        (**(*0x10a48 + 0x140))(0x10980,0,0x10a58);
    }
    return *0x10a58;
}


/* fcn.00010904 @ 0x10904 */

int64_t fcn.00010904(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10a60 == 0) {
        *0x10a60 = 0;
        if (*(*0x10a40 + 0x68) != 0) {
            piVar2 = *(*0x10a40 + 0x70);
            do {
                if ((*0x109d0 == *piVar2) && (*0x109d8 == piVar2[1])) {
                    *0x10a60 = (*(*0x10a40 + 0x70))[uVar1 * 3 + 2];
                    return *0x10a60;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10a40 + 0x68));
        }
    }
    return *0x10a60;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
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


