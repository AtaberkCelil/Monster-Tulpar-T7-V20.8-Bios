// decompiled by r2ghidra: 0443_MrcHealthDataInit.pe32
// functions: 13

/* entry0 @ 0x102e0 */

void entry0(ulong noname_0,int64_t arg1)

{
    *0x10aa8 = *(arg1 + 0x60);
    *0x10aa0 = arg1;
    fcn.000108ac();
    fcn.00010308();
    return;
}


/* fcn.000108ac @ 0x108ac */

int64_t fcn.000108ac(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10ab0 == 0) {
        *0x10ab0 = 0;
        if (*(*0x10aa0 + 0x68) != 0) {
            piVar2 = *(*0x10aa0 + 0x70);
            do {
                if ((*0x10a50 == *piVar2) && (*0x10a58 == piVar2[1])) {
                    *0x10ab0 = (*(*0x10aa0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10ab0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10aa0 + 0x68));
        }
    }
    return *0x10ab0;
}


/* fcn.00010308 @ 0x10308 */

int64_t fcn.00010308(ulong param_1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint *arg1;
    uint uStack_28;
    ulong uStack_24;
    ulong uStack_1c;
    
    iVar1 = fcn.0001068c(param_1,0x28);
    if ((iVar1 == 0) || (puVar2 = fcn.000102a0(iVar1,0x28), puVar2 == NULL)) {
        return -0x7ffffffffffffff7;
    }
    *puVar2 = 0;
    puVar2[1] = 0x1042c;
    arg1 = &uStack_28;
    puVar2[2] = 0x10648;
    puVar2[3] = 0x105cc;
    fcn.000102a0(arg1,0x14);
    uStack_24 = *0x10a00;
    uStack_1c = *0x10a08;
    uStack_28 = 0x140401;
    iVar3 = fcn.000107d4(arg1,&uStack_28);
    iVar1 = *0x10aa8;
    if (iVar3 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        puVar2[4] = iVar3;
        iVar1 = (**(iVar1 + 0x148))(puVar2,0x10a10,puVar2 + 1,0x10a20,iVar3,0);
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    (**(*0x10aa8 + 0x48))(puVar2);
    if (iVar3 == 0) {
        return iVar1;
    }
    (**(*0x10aa8 + 0x48))(iVar3);
    return iVar1;
}


/* fcn.0001068c @ 0x1068c */

ulong fcn.0001068c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10aa8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
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


/* fcn.000107d4 @ 0x107d4 */

ulong fcn.000107d4(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    ulong noname_0_00;
    int64_t iVar4;
    
    uVar3 = 0;
    if (arg1 == 0) {
        noname_0_00 = 0x10a70;
        iVar2 = fcn.00010784(0x10a70);
        if (iVar2 != 0) {
            uVar3 = fcn.000106e8(noname_0_00,iVar2,0x10a70);
        }
    }
    else {
        uVar1 = *(arg1 + 2);
        iVar2 = fcn.0001068c(noname_0,uVar1 + 4);
        if (iVar2 != 0) {
            if ((uVar1 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,uVar1);
            }
            iVar4 = *(iVar2 + 2) + iVar2;
            if (iVar4 != 0x10a70) {
                section..text(iVar4,0x10a70,4);
            }
            iVar4 = iVar2;
            arg1_00 = fcn.00010784(iVar2);
            if (arg1_00 != 0) {
                uVar3 = fcn.000106e8(iVar4,arg1_00,iVar2);
            }
            (**(*0x10aa8 + 0x48))(iVar2);
        }
    }
    return uVar3;
}


/* fcn.000106bc @ 0x106bc */

void fcn.000106bc(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001068c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.0001095c @ 0x1095c */

int64_t fcn.0001095c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x10ab8 == 0) && (fcn.00010918(), *0x10ab8 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x10ab8 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x000109ef;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x54414442);
        uVar2 = fcn.000106e8(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x000109ef:
    return iVar1;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1952 named .text
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


/* fcn.00010728 @ 0x10728 */

bool fcn.00010728(uint32_t arg1)

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


/* fcn.00010784 @ 0x10784 */

char * fcn.00010784(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00010728(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000106e8 @ 0x106e8 */

void fcn.000106e8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001068c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010918 @ 0x10918 */

void fcn.00010918(void)

{
    (**(*0x10aa8 + 0x140))(0x10a40,0,0x10ab8);
    //WARNING: Could not recover jumptable at 0x00010954. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x10aa8 + 0x140))(0x10a30,0,0x10ac0);
    return;
}


