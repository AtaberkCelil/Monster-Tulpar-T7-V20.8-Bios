// decompiled by r2ghidra: 0433_CsmeHealthDxe.pe32
// functions: 18

/* entry0 @ 0x1030c */

void entry0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x10b08 = *(arg1 + 0x60);
    *0x10b00 = arg1;
    fcn.000109d4();
    fcn.00010974(0x10ab0,0x10b18);
    noname_0_00 = 0x10ac0;
    iVar3 = fcn.00010a04(0x10ac0);
    if (iVar3 == 0) {
        uVar4 = fcn.000102c0();
        fcn.000102b0();
        uVar1 = in(0x1808);
        fcn.00010290(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010280();
        }
        fcn.00010290(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102b0();
        }
        else {
            fcn.000102a0();
        }
    }
    fcn.000103b8();
    return;
}


/* fcn.000109d4 @ 0x109d4 */

int64_t fcn.000109d4(void)

{
    if (*0x10b10 == 0) {
        fcn.00010974(0x10aa0,0x10b10);
    }
    return *0x10b10;
}


/* fcn.00010974 @ 0x10974 */

ulong fcn.00010974(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10b00;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00010a04 @ 0x10a04 */

void fcn.00010a04(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000109d4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010a32:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010a32;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000102c0 @ 0x102c0 */

uint64_t fcn.000102c0(void)

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


/* fcn.000102b0 @ 0x102b0 */

void fcn.000102b0(void)

{
    return;
}


/* fcn.00010290 @ 0x10290 */

uint64_t fcn.00010290(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

{
    return;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(void)

{
    return;
}


/* fcn.000103b8 @ 0x103b8 */

int64_t fcn.000103b8(ulong param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint *arg1;
    uint uStack_28;
    ulong uStack_24;
    ulong uStack_1c;
    
    iVar1 = fcn.00010754(param_1,0x28);
    if ((iVar1 == 0) || (puVar2 = fcn.00010260(iVar1,0x28), puVar2 == NULL)) {
        return -0x7ffffffffffffff7;
    }
    *puVar2 = 0;
    puVar2[1] = 0x104dc;
    arg1 = &uStack_28;
    puVar2[2] = 0x10694;
    puVar2[3] = 0x106d8;
    fcn.00010260(arg1,0x14);
    uStack_24 = *0x10a60;
    uStack_1c = *0x10a68;
    uStack_28 = 0x140401;
    iVar3 = fcn.0001089c(arg1,&uStack_28);
    iVar1 = *0x10b08;
    if (iVar3 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        puVar2[4] = iVar3;
        iVar1 = (**(iVar1 + 0x148))(puVar2,0x10a70,puVar2 + 1,0x10a80,iVar3,0);
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    (**(*0x10b08 + 0x48))(puVar2);
    if (iVar3 == 0) {
        return iVar1;
    }
    (**(*0x10b08 + 0x48))(iVar3);
    return iVar1;
}


/* fcn.00010754 @ 0x10754 */

ulong fcn.00010754(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10b08 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 2048 named .text
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


/* fcn.0001089c @ 0x1089c */

ulong fcn.0001089c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    ulong noname_0_00;
    int64_t iVar4;
    
    uVar3 = 0;
    if (arg1 == 0) {
        noname_0_00 = 0x10ad0;
        iVar2 = fcn.0001084c(0x10ad0);
        if (iVar2 != 0) {
            uVar3 = fcn.000107b0(noname_0_00,iVar2,0x10ad0);
        }
    }
    else {
        uVar1 = *(arg1 + 2);
        iVar2 = fcn.00010754(noname_0,uVar1 + 4);
        if (iVar2 != 0) {
            if ((uVar1 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.000102d0(iVar2,arg1,uVar1);
            }
            iVar4 = *(iVar2 + 2) + iVar2;
            if (iVar4 != 0x10ad0) {
                fcn.000102d0(iVar4,0x10ad0,4);
            }
            iVar4 = iVar2;
            arg1_00 = fcn.0001084c(iVar2);
            if (arg1_00 != 0) {
                uVar3 = fcn.000107b0(iVar4,arg1_00,iVar2);
            }
            (**(*0x10b08 + 0x48))(iVar2);
        }
    }
    return uVar3;
}


/* fcn.00010784 @ 0x10784 */

void fcn.00010784(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010754(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010260(arg1_00,arg1);
    }
    return;
}


/* fcn.000102d0 @ 0x102d0 */

int64_t fcn.000102d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.000107f0 @ 0x107f0 */

bool fcn.000107f0(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.0001084c @ 0x1084c */

char * fcn.0001084c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000107f0(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000107b0 @ 0x107b0 */

void fcn.000107b0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010754();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102d0(arg1_00,arg2,arg1);
    }
    return;
}


