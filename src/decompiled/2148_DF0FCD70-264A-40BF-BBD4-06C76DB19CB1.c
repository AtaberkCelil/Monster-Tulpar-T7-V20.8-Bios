// decompiled by r2ghidra: 2148_DF0FCD70-264A-40BF-BBD4-06C76DB19CB1.te
// functions: 8

/* entry0 @ 0xdd */

void entry0(void)

{
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.00000378 @ 0x378 */

uint fcn.00000378(uint param_1,int *param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    int iVar3;
    
    iVar3 = *0xfed00148;
    if ((*0xfed00148 == 0) || (*0xfed00148 == -1)) {
        return 0x80000007;
    }
    if (*(*0xfed00148 + 0x5c) == 0) {
        if ((*(*(*0xfed00148 + 0x54) + 0x2c) != '\0') && (*(*(*0xfed00148 + 0x50) + 0x82a) != '\0')) {
            *(*0xfed00148 + 0x5c) = 1;
        }
        *(iVar3 + 0x60) = 0;
    }
    if (*param_2 == 0) {
        puVar2 = param_2[2];
        if (puVar2 == NULL) {
            return 0x80000002;
        }
        if (param_2[1] != 0) {
            return 0x80000002;
        }
        *puVar2 = *(iVar3 + 0x5c);
        puVar2[1] = *(iVar3 + 0x60);
    }
    else {
        if (*param_2 != 1) {
            return 0x80000003;
        }
        uVar1 = param_2[1];
        if ((uVar1 <= *(iVar3 + 0x60)) || (*(iVar3 + 0x5c) < uVar1)) {
            return 0x80000002;
        }
        *(iVar3 + 0x60) = uVar1;
        fcn.00000164();
    }
    return 0;
}


/* fcn.00000285 @ 0x285 */

uint fcn.00000285(char param_1)

{
    int *piVar1;
    int iVar2;
    
    piVar1 = *0xfed00148;
    if (param_1 != '\x02') {
        if (param_1 == '\x03') {
            if (*0xfed00148 != 0xffffffff) {
                return 0x80000003;
            }
            iVar2 = fcn.0000031c();
            if (iVar2 < 0) {
                return 0x80000002;
            }
            return 0;
        }
        if (param_1 != '\x04') {
            if ((param_1 != '\x05') && (param_1 != '\x06')) {
                return 0x80000003;
            }
            if (*0xfed00148 == NULL) {
                return 0x80000003;
            }
            if (*0xfed00148 == 0xffffffff) {
                return 0x80000003;
            }
            if (**0xfed00148 != 0x44505346) {
                return 0x80000003;
            }
            iVar2 = fcn.0000031c();
            if (iVar2 < 0) {
                return 0x80000002;
            }
            goto code_r0x00000306;
        }
    }
    if (((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) || (**0xfed00148 != 0x44505346)) {
        return 0x80000003;
    }
code_r0x00000306:
    *(piVar1 + 0x16) = param_1;
    return 0;
}


/* fcn.0000013f @ 0x13f */

int fcn.0000013f(void)

{
    return 0x13f - *0x130;
}


/* fcn.0000030b @ 0x30b */

uint fcn.0000030b(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.000001af @ 0x1af */

int fcn.000001af(void)

{
    return 0x1af - *0x1a0;
}


/* fcn.0000031c @ 0x31c */

uint __fastcall fcn.0000031c(int param_1,int *param_2)

{
    int *piVar1;
    bool bVar2;
    
    if (param_1 == 3) {
        if (param_2 == NULL) {
            return 0;
        }
        if (*param_2 != 0x554c4441) {
            return 0x80000002;
        }
        if (param_2[1] != 0x4d5f4450) {
            return 0x80000002;
        }
        if (param_2[10] == 0) {
            return 0x80000002;
        }
        bVar2 = (param_2[0xc] & 0xfffU) == 0;
    }
    else {
        if (param_1 != 5) {
            return 0;
        }
        piVar1 = *(*0xfed00148 + 0x54);
        if ((*(*0xfed00148 + 0x54) == NULL) && (piVar1 = param_2, param_2 == NULL)) {
            return 0;
        }
        if (*piVar1 != 0x554c4441) {
            return 0x80000002;
        }
        bVar2 = piVar1[1] == 0x535f4450;
    }
    if (!bVar2) {
        return 0x80000002;
    }
    return 0;
}


/* fcn.00000164 @ 0x164 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00000164(void)

{
    uint *puVar1;
    uint auStack_30 [2];
    
    auStack_30[0] = InterruptDescriptorTableRegister();
    puVar1 = fcn.0000030b(auStack_30);
    InterruptDescriptorTableRegister(*puVar1);
    return CONCAT44(puVar1[7],puVar1[9]);
}


