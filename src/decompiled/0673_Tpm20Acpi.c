// decompiled by r2ghidra: 0673_Tpm20Acpi.pe32
// functions: 13

/* entry0 @ 0x10324 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    int64_t aiStackX_8 [2];
    
    *0x10f80 = *(arg2 + 0x60);
    *0x10f88 = *(arg2 + 0x58);
    *0x10f78 = arg2;
    aiStackX_8[0] = arg1;
    fcn.00010a88();
    noname_0 = 0x10eb8;
    iVar3 = fcn.00010af4(0x10eb8);
    if (iVar3 == 0) {
        uVar4 = fcn.00010320();
        fcn.00010310();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010310();
        }
        else {
            fcn.00010300();
        }
    }
    aiStackX_8[1] = 8;
    iVar3 = (**(*0x10f80 + 0x50))(0x200,8,0x1044c,0,aiStackX_8);
    if (-1 < iVar3) {
        iVar3 = (**(*0x10f80 + 0xa8))(0x10e10,aiStackX_8[0],0x10fa0);
        if (-1 < iVar3) {
            (**(*0x10f88 + 0x48))(L"TpmServFlags",0x10e00,0,aiStackX_8 + 1,0x10f70);
        }
    }
    return;
}


/* fcn.00010a88 @ 0x10a88 */

int64_t fcn.00010a88(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10f98 == 0) {
        *0x10f98 = 0;
        if (*(*0x10f78 + 0x68) != 0) {
            piVar2 = *(*0x10f78 + 0x70);
            do {
                if ((*0x10e60 == *piVar2) && (*0x10e68 == piVar2[1])) {
                    *0x10f98 = (*(*0x10f78 + 0x70))[uVar1 * 3 + 2];
                    return *0x10f98;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10f78 + 0x68));
        }
    }
    return *0x10f98;
}


/* fcn.00010af4 @ 0x10af4 */

void fcn.00010af4(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010a88();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010b22:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010b22;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

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


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00010a4c @ 0x10a4c */

int64_t fcn.00010a4c(void)

{
    if (*0x10f90 == 0) {
        (**(*0x10f80 + 0x140))(0x10de0,0,0x10f90);
    }
    return *0x10f90;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2944 named .text
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


/* fcn.00010b40 @ 0x10b40 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00010b40(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    ulong uVar4;
    int64_t arg1_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uchar auStack_48 [16];
    int64_t var_bp_10h;
    
    uVar5 = 0;
    piStackX_18 = NULL;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x10f80 + 0x140))(0x10e50,0,&iStackX_20);
    if (iVar1 < 0) {
        return 0xa000000000000002;
    }
    arg1_00 = *(*0x10f78 + 0x70);
    for (iVar1 = *(*0x10f78 + 0x68); iVar1 != 0; iVar1 = iVar1 + -1) {
        if ((arg1_00 == 0x10e20) || (iVar2 = fcn.000102a0(arg1_00,0x10e20,0x10), iVar2 == 0)) {
            uVar3 = *(arg1_00 + 0x10);
            goto code_r0x00010be3;
        }
        arg1_00 = arg1_00 + 0x18;
    }
    uVar3 = uVar5;
code_r0x00010be3:
    if (uVar3 == 0) {
        return 0xa000000000000002;
    }
    iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_48);
    uVar3 = uVar5;
    uVar6 = uVar5;
    if (-1 < iVar1) {
        do {
            if (*piStackX_18 == 0x50434146) {
                if (auStackX_10[0] == 2) {
                    uVar6 = piStackX_18[10];
                }
                if ((auStackX_10[0] & 0x1c) != 0) {
                    uVar3 = *(piStackX_18 + 0x23);
                }
            }
            if ((uVar6 != 0) && (uVar3 != 0)) goto code_r0x00010c5b;
            uVar5 = uVar5 + 1;
            iVar1 = (**(iStackX_20 + 8))(uVar5,&piStackX_18,auStackX_10,auStack_48);
        } while (-1 < iVar1);
        if (uVar3 != 0) {
code_r0x00010c5b:
            *arg1 = uVar3;
            return 0;
        }
        if (uVar6 != 0) {
            *arg1 = uVar6;
            iVar1 = 0;
        }
    }
    uVar4 = 0;
    if (iVar1 != 0) {
        uVar4 = 0xa000000000000002;
    }
    return uVar4;
}


/* fcn.00010da8 @ 0x10da8 */

ulong fcn.00010da8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    int *piVar3;
    char *pcVar4;
    uint in_register_0000000c;
    int *piVar5;
    int *piVar6;
    char *pcVar7;
    uint32_t uVar8;
    int64_t iVar9;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar5 != 0x54445344) {
        return 0x8000000000000002;
    }
    pcVar7 = piVar5[1] - 0x25;
    piVar5 = piVar5 + 9;
    do {
        iVar9 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar9 = iVar9 + 1;
            cVar1 = *(iVar9 + arg2);
        }
        (**(*0x10f80 + 0x160))();
        uVar8 = 0;
        if (pcVar7 != NULL) {
            pcVar4 = NULL;
            do {
                piVar6 = pcVar4 + piVar5;
                if (*piVar6 == 0x5f5f5f5f) goto code_r0x00010d17;
                uVar8 = uVar8 + 1;
                pcVar4 = uVar8;
            } while (pcVar4 < pcVar7);
        }
        piVar6 = NULL;
code_r0x00010d17:
        if (piVar6 == NULL) {
            return 0x800000000000000e;
        }
        piVar3 = piVar6;
        if ((*(piVar6 + -1) + 0xa4U & 0xfd) == 0) {
            piVar3 = piVar6 + -1;
        }
        if (*(piVar3 + -1) == '\b') {
            uVar2 = *(piVar6 + 1);
            if (uVar2 < 2) {
                if (1 < arg3) {
                    return 0x8000000000000002;
                }
                *(piVar6 + 1) = arg3;
            }
            else if (uVar2 == 10) {
                *(piVar6 + 5) = arg3;
            }
            else if (uVar2 == 0xb) {
                *(piVar6 + 5) = arg3;
            }
            else if (uVar2 == 0xc) {
                *(piVar6 + 5) = arg3;
            }
            else {
                if (uVar2 != 0xe) {
                    return 0x8000000000000002;
                }
                *(piVar6 + 5) = arg3;
            }
            return 0;
        }
        pcVar7 = piVar5 + pcVar7 + (4 - piVar6);
        piVar5 = piVar6 + 1;
    } while( true );
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
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


