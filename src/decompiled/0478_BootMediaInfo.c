// decompiled by r2ghidra: 0478_BootMediaInfo.pe32
// functions: 3

/* entry0 @ 0x102c0 */

void entry0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint16_t *noname_0_00;
    
    *0x10528 = *(arg1 + 0x60);
    *0x10530 = *(arg1 + 0x58);
    *0x10520 = arg1;
    fcn.00010424();
    puVar2 = fcn.00010424();
    do {
        uVar1 = *puVar2;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar2 = NULL;
code_r0x0001031f:
            if (puVar2 == NULL) goto code_r0x00010350;
            if ((*0x104c0 == *(puVar2 + 4)) && (*0x104c8 == *(puVar2 + 8))) {
                if ((puVar2 != NULL) && (noname_0_00 = puVar2 + 0xc, noname_0_00 != NULL)) {
                    if (*noname_0_00 < 4) {
                        *0x104d0 = *noname_0_00;
                    }
                }
code_r0x00010350:
                fcn.0001035c(noname_0_00,*0x104c8);
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001031f;
        puVar2 = puVar2 + puVar2[1];
    } while( true );
}


/* fcn.00010424 @ 0x10424 */

int64_t fcn.00010424(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10538 == 0) {
        *0x10538 = 0;
        if (*(*0x10520 + 0x68) != 0) {
            piVar2 = *(*0x10520 + 0x70);
            do {
                if ((*0x104b0 == *piVar2) && (*0x104b8 == piVar2[1])) {
                    *0x10538 = (*(*0x10520 + 0x70))[uVar1 * 3 + 2];
                    return *0x10538;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10520 + 0x68));
        }
    }
    return *0x10538;
}


/* fcn.0001035c @ 0x1035c */

int64_t fcn.0001035c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong auStackX_10 [3];
    ulong uStack_18;
    int iStack_10;
    
    auStackX_10[0] = 0;
    iVar1 = (**(*0x10530 + 0x48))(L"BootMediaInfo",0x104a0,0,auStackX_10,&uStack_18);
    if (iVar1 == -0x7ffffffffffffffb) {
        return 0;
    }
    if (*0x104d0 == 4) {
code_r0x0001040f:
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        if (*0x104d0 == 0) {
            uStack_18 = 1;
            iStack_10 = 0;
        }
        else {
            if (*0x104d0 != 1) goto code_r0x0001040f;
            uStack_18 = 0x100000001;
            iStack_10 = *0x104d0;
        }
        auStackX_10[0] = 0xc;
        iVar2 = (**(*0x10530 + 0x58))(L"BootMediaInfo",0x104a0,6,0xc,&uStack_18);
        iVar1 = 0;
        if (iVar2 < 0) {
            iVar1 = iVar2;
        }
    }
    return iVar1;
}


