// decompiled by r2ghidra: 0408_SaveMemoryConfig.pe32
// functions: 11

/* entry0 @ 0x1032c */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010340(arg1,in_RDX);
    fcn.00010414();
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10738 = *(arg1 + 0x60);
    *0x10740 = *(arg1 + 0x58);
    *0x10730 = arg1;
    fcn.00010610();
    puVar4 = fcn.00010610();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001039f:
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
            if ((*0x106e0 == *(puVar4 + 4)) && (*0x106e8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001039f;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010414 @ 0x10414 */

ulong fcn.00010414(void)

{
    int16_t *arg1;
    int16_t *piVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint64_t arg3;
    uint64_t uStackX_18;
    ulong *puStackX_20;
    
    piVar1 = fcn.00010610();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010456:
            if (piVar1 == NULL) {
                return 0x8000000000000003;
            }
            if ((*0x106b0 == *(piVar1 + 4)) && (*0x106b8 == *(piVar1 + 8))) break;
        }
        else if (*piVar1 == 4) goto code_r0x00010456;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
    if (piVar1 == NULL) {
        return 0x8000000000000003;
    }
    arg1 = piVar1 + 0xc;
    uVar3 = piVar1[1] - 0x18;
    arg3 = uVar3;
    if (uVar3 == 0) {
        return 0x8000000000000003;
    }
    uStackX_18 = arg3;
    piVar1 = fcn.000105e0(uVar3,arg3);
    if (piVar1 == NULL) {
        return 0x8000000000000003;
    }
    iVar2 = (**(*0x10740 + 0x48))(0x106c0,0x10690,0,&uStackX_18,piVar1);
    if (iVar2 == -0x7ffffffffffffffb) {
        (**(*0x10738 + 0x48))(piVar1);
        piVar1 = fcn.000105e0();
        if (piVar1 == NULL) {
            return 0x8000000000000003;
        }
        iVar2 = (**(*0x10740 + 0x48))(0x106c0,0x10690,0,&uStackX_18,piVar1);
    }
    if ((-1 < iVar2) && (uStackX_18 == arg3)) {
        if (arg1 == piVar1) {
            iVar2 = 0;
        }
        else {
            iVar2 = fcn.00010260(arg1,piVar1,arg3);
        }
        if (iVar2 == 0) goto code_r0x0001056b;
    }
    (**(*0x10740 + 0x58))(0x106c0,0x10690,3,arg3,arg1);
code_r0x0001056b:
    iVar2 = (**(*0x10738 + 0x140))(0x10680,0,&puStackX_20);
    if (-1 < iVar2) {
        (**puStackX_20)(puStackX_20,L"MemoryConfig",0x10690);
    }
    *0xfe001022 = *0xfe001022 & 0xfa | 0x80;
    (**(*0x10738 + 0x48))(piVar1);
    return 0x8000000000000003;
}


/* fcn.00010610 @ 0x10610 */

int64_t fcn.00010610(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10748 == 0) {
        *0x10748 = 0;
        if (*(*0x10730 + 0x68) != 0) {
            piVar2 = *(*0x10730 + 0x70);
            do {
                if ((*0x106a0 == *piVar2) && (*0x106a8 == piVar2[1])) {
                    *0x10748 = (*(*0x10730 + 0x70))[uVar1 * 3 + 2];
                    return *0x10748;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10730 + 0x68));
        }
    }
    return *0x10748;
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


/* fcn.000105e0 @ 0x105e0 */

ulong fcn.000105e0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10738 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    //[00] -r-x section size 1056 named .text
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


