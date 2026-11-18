// decompiled by r2ghidra: 1638_AdvancedPmaxDxe.pe32
// functions: 6

/* entry0 @ 0x10320 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10838 = *(arg2 + 0x60);
    *0x10830 = arg2;
    fcn.000105a0(arg1,arg2);
    return;
}


/* fcn.000105a0 @ 0x105a0 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000105a0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t arg1_00;
    int64_t iVar4;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iStackX_20 = 0;
    iStack_58 = 0;
    iVar4 = 0;
    uStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar2 = (**(*0x10838 + 0x138))(2,0x107d0,0,&uStack_50,&iStack_48);
    uVar3 = 0;
    if (uStack_50 != 0) {
        do {
            (**(*0x10838 + 0x98))(*(iStack_48 + uVar3 * 8),0x107d0,&iStackX_20);
            if (iStackX_20 == 0) goto code_r0x000106e3;
            iStack_40 = 0;
            uStackX_8 = uStackX_8 & 0xffffffff00000000;
            iVar2 = (**(iStackX_20 + 0x10))(iStackX_20,0x10800,0,&iStack_40,&iStackX_10,auStackX_18,&uStackX_8);
        } while ((iVar2 < 0) && (uVar3 = uVar3 + 1, uVar3 < uStack_50));
    }
    (**(*0x10838 + 0x48))(iStack_48);
    arg1_00 = 0;
    if (iStackX_20 == 0) {
code_r0x000106e3:
        iVar2 = -0x7ffffffffffffff2;
    }
    else {
        while (iVar2 == 0) {
            iVar2 = (**(iStackX_20 + 0x18))(iStackX_20,0x10800,0x19,iVar4,&iStack_58,&iStack_40,&uStackX_8);
            iVar1 = iStack_58;
            if (-1 < iVar2) {
                arg1_00 = iStack_58;
                if (*(iStack_58 + 0x10) == 0x7665445f78616d50) break;
                iVar4 = iVar4 + 1;
                iStack_58 = 0;
                arg1_00 = iVar1;
            }
        }
        if (-1 < iVar2) {
            if (arg1_00 != 0) {
                iVar2 = fcn.00010340(arg1_00);
            }
            if ((-1 < iVar2) && (arg1_00 != 0)) {
                var_30h = 0;
                _var_28h = 0;
                iVar2 = (**(*0x10838 + 0x140))(0x107f0,0,&var_30h);
                if (-1 < iVar2) {
                    iVar2 = (**var_30h)(var_30h,arg1_00,*(arg1_00 + 4),&var_28h);
                }
                (**(*0x10838 + 0x48))(arg1_00);
            }
        }
    }
    return iVar2;
}


/* fcn.00010770 @ 0x10770 */

int64_t fcn.00010770(void)

{
    if (*0x10840 == 0) {
        (**(*0x10838 + 0x140))(0x107e0,0,0x10840);
    }
    return *0x10840;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t noname_1,int64_t arg2)

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
    
    //[00] -r-x section size 1376 named .text
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


/* fcn.00010340 @ 0x10340 */

ulong fcn.00010340(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    char *pcVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    char *arg1_00;
    char *pcVar9;
    char *arg3;
    unkbyte7 Var10;
    
    iVar3 = fcn.00010770();
    pcVar4 = (**(iVar3 + 0x28))(0x107c0);
    if (pcVar4 == NULL) {
code_r0x0001057a:
        uVar5 = 0x8000000000000002;
    }
    else {
        uVar7 = 0;
        do {
            iVar3 = 0;
            arg3 = pcVar4 + uVar7 * 0x23;
            cVar1 = *arg3;
            while (cVar1 != '\0') {
                iVar3 = iVar3 + 1;
                cVar1 = arg3[iVar3];
            }
            if (((0x1f < iVar3 + 1U) || (15000 < *(arg3 + 0x1f))) || (15000 < *(arg3 + 0x21))) goto code_r0x0001057a;
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < 4);
        pcVar9 = *(arg1 + 4) + arg1;
        if (arg1 < pcVar9) {
            arg1_00 = arg1 + 6;
            do {
                if (arg1_00[-6] == '\b') {
                    uVar2 = *(arg1_00 + -5);
                    Var10 = arg3 >> 8;
                    if (uVar2 < 0x53444c47) {
                        if (uVar2 == 0x53444c46) {
                            fcn.000102a0(arg1_00,0x1f,CONCAT71(Var10,0xa3));
                            cVar1 = pcVar4[0x23];
                            iVar3 = 0;
                            while (cVar1 != '\0') {
                                cVar1 = pcVar4[iVar3 + 0x24];
                                iVar3 = iVar3 + 1;
                            }
                            pcVar8 = pcVar4 + 0x69;
code_r0x0001045c:
                            arg3 = iVar3 + 1;
                            if ((arg3 == NULL) || (arg1_00 == pcVar8)) goto code_r0x00010566;
                        }
                        else {
                            if (uVar2 == 0x30434655) {
                                pcVar8 = pcVar4 + 0x65;
                            }
                            else if (uVar2 == 0x30434657) {
                                pcVar8 = pcVar4 + 0x42;
                            }
                            else if (uVar2 == 0x30444c46) {
                                pcVar8 = pcVar4 + 0x88;
                            }
                            else {
                                if (uVar2 != 0x304b5452) {
                                    if (uVar2 == 0x53434655) {
                                        fcn.000102a0(arg1_00,0x1f,CONCAT71(Var10,0xa3));
                                        cVar1 = pcVar4[0x23];
                                        iVar3 = 0;
                                        while (cVar1 != '\0') {
                                            cVar1 = pcVar4[iVar3 + 0x24];
                                            iVar3 = iVar3 + 1;
                                        }
                                        pcVar8 = pcVar4 + 0x46;
                                    }
                                    else {
                                        if (uVar2 != 0x53434657) goto code_r0x00010566;
                                        fcn.000102a0(arg1_00,0x1f,CONCAT71(Var10,0xa3));
                                        pcVar8 = pcVar4 + 0x23;
                                        iVar3 = 0;
                                        cVar1 = *pcVar8;
                                        while (cVar1 != '\0') {
                                            iVar3 = iVar3 + 1;
                                            cVar1 = pcVar8[iVar3];
                                        }
                                    }
                                    goto code_r0x0001045c;
                                }
                                pcVar8 = pcVar4 + 0x1f;
                            }
code_r0x000104a0:
                            if (arg1_00 == pcVar8) goto code_r0x00010566;
                            arg3 = 0x2;
                        }
code_r0x0001055e:
                        section..text(arg1_00,pcVar8,arg3);
                    }
                    else {
                        if (uVar2 != 0x534b5452) {
                            if (uVar2 == 0x58434655) {
                                pcVar8 = pcVar4 + 0x67;
                            }
                            else if (uVar2 == 0x58434657) {
                                pcVar8 = pcVar4 + 0x44;
                            }
                            else if (uVar2 == 0x58444c46) {
                                pcVar8 = pcVar4 + 0x8a;
                            }
                            else {
                                if (uVar2 != 0x584b5452) goto code_r0x00010566;
                                pcVar8 = pcVar4 + 0x21;
                            }
                            goto code_r0x000104a0;
                        }
                        fcn.000102a0(arg1_00,0x1f,CONCAT71(Var10,0xa3));
                        iVar3 = 0;
                        cVar1 = *pcVar4;
                        while (cVar1 != '\0') {
                            iVar3 = iVar3 + 1;
                            cVar1 = pcVar4[iVar3];
                        }
                        arg3 = iVar3 + 1;
                        if ((arg3 != NULL) && (arg1_00 != pcVar4)) {
                            pcVar8 = pcVar4;
                            goto code_r0x0001055e;
                        }
                    }
                }
code_r0x00010566:
                pcVar8 = arg1_00 + -5;
                arg1_00 = arg1_00 + 1;
            } while (pcVar8 < pcVar9);
        }
        uVar5 = 0;
    }
    return uVar5;
}


