// decompiled by r2ghidra: 0928_SerialIoUartDriver.pe32
// functions: 33

/* entry0 @ 0x10324 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010384(arg1,in_RDX);
    *0x11bf0 = arg1;
    *0x11bf8 = arg1;
    (**(*0x11d88 + 0x148))(0x11bf8,0x11bb0,0x11bd0,0x11bc0,0x11c00,0);
    return;
}


/* fcn.00010384 @ 0x10384 */

void fcn.00010384(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x11d88 = *(arg1 + 0x60);
    *0x11d80 = arg1;
    fcn.00011398();
    puVar4 = fcn.00011398();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103d8:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
                return;
            }
            if ((*0x11c70 == *(puVar4 + 4)) && (*0x11c78 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103d8;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00011398 @ 0x11398 */

int64_t fcn.00011398(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11d90 == 0) {
        *0x11d90 = 0;
        if (*(*0x11d80 + 0x68) != 0) {
            piVar2 = *(*0x11d80 + 0x70);
            do {
                if ((*0x11ba0 == *piVar2) && (*0x11ba8 == piVar2[1])) {
                    *0x11d90 = (*(*0x11d80 + 0x70))[uVar1 * 3 + 2];
                    return *0x11d90;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11d80 + 0x68));
        }
    }
    return *0x11d90;
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


/* fcn.00010eb0 @ 0x10eb0 */

ulong fcn.00010eb0(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x11d88 + 0x98))(param_1,0x11b90,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00011ae4 @ 0x11ae4 */

void fcn.00011ae4(void)

{
    if (*0x11c80 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11c80 = '\x05';
        }
        else {
            *0x11c80 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00011324 @ 0x11324 */

ulong fcn.00011324(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if (piVar1 != NULL) {
        iVar2 = 0;
        if (*piVar1 != 0) {
            piVar3 = piVar1;
            do {
                (**(*0x11d88 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x11d88 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x11d88 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.00011578 @ 0x11578 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

void fcn.00011578(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_60h,int8_t arg_68h)

{
    char cVar1;
    uint16_t uVar2;
    uchar uVar3;
    uint8_t uVar4;
    uint32_t *arg1_00;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int aiStackX_10 [2];
    int aiStackX_18 [2];
    int iStackX_20;
    uint uStackX_24;
    int in_stack_00000028;
    char in_stack_00000030;
    uint32_t var_48h;
    uint32_t var_50h;
    uint32_t var_58h;
    int iStack_68;
    int iStack_64;
    uint32_t *puStack_60;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    int64_t iStack_40;
    uint32_t var_30h;
    uint32_t var_2ch;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    uVar3 = arg1;
    cVar1 = fcn.0001193c(arg1,&iStack_58,aiStackX_18);
    if (cVar1 != '\0') {
        if (aiStackX_18[0] == 1) {
            arg1 = *(iStack_58 + 8);
        }
        else {
            arg1 = CONCAT71(arg1 >> 8,*(iStack_58 + 2));
        }
        uVar4 = arg1 | 1;
        if (aiStackX_18[0] == 1) {
            arg1 = 0;
            *(iStack_58 + 8) = uVar4;
        }
        else {
            *(iStack_58 + 2) = uVar4;
        }
    }
    arg1_00 = CONCAT71(arg1 >> 8,uVar3);
    uVar2 = 0x200;
    cVar1 = fcn.0001193c(arg1_00,&puStack_60,&iStackX_20);
    if (cVar1 != '\0') {
        if (iStackX_20 == 0) {
            uVar2 = 0x80;
        }
        uVar7 = 1;
        uVar5 = 0x1c200;
        if (arg2 != 0) {
            uVar5 = arg2;
        }
        if (uVar5 < 0x5b8d81) {
            arg1_00 = 0xffff04b5;
            uVar8 = uVar2;
            if (uVar5 < 0x1c200) {
                uVar7 = 0x1c2000 / (uVar5 << 4);
                if (uVar7 == 0) {
                    uVar7 = 1;
                }
                if (0xffff < uVar7) goto code_r0x00011708;
            }
            if (0x1c200 < uVar5) {
                arg1_00 = ((uVar5 * 0x7fff0) / 100000000 & 0xffff) * 2 | 0xffff0001;
            }
            *(uVar8 + puStack_60) = arg1_00;
            *(uVar8 + puStack_60) = *(uVar8 + puStack_60) & 0x7fffffff;
            if (iStackX_20 == 1) {
                uVar4 = puStack_60[3];
            }
            else {
                uVar4 = *(puStack_60 + 3);
            }
            if (iStackX_20 == 1) {
                puStack_60[3] = uVar4 | 0x80;
                puStack_60[1] = uVar7 >> 8 & 0xff;
                *puStack_60 = uVar7 & 0xff;
                uVar4 = puStack_60[3];
            }
            else {
                *(puStack_60 + 3) = uVar4 | 0x80;
                *(puStack_60 + 1) = uVar7 >> 8;
                *puStack_60 = uVar7;
                uVar4 = *(puStack_60 + 3);
            }
            if (iStackX_20 == 1) {
                puStack_60[3] = uVar4 & 0x7f;
                arg1_00 = NULL;
            }
            else {
                *(puStack_60 + 3) = uVar4 & 0x7f;
                arg1_00 = puStack_60;
            }
        }
    }
code_r0x00011708:
    uVar5 = CONCAT71(arg1_00 >> 8,uVar3);
    cVar1 = fcn.0001193c(uVar5,&iStack_50,aiStackX_10);
    if (cVar1 != '\0') {
        iVar6 = 1;
        if (arg3 != 0) {
            iVar6 = arg3;
        }
        if (iVar6 < 4) {
            if (aiStackX_10[0] == 1) {
                uVar5 = *(iStack_50 + 0xc);
            }
            else {
                uVar5 = CONCAT71(uVar5 >> 8,*(iStack_50 + 3));
            }
            if (iVar6 == 2) {
                uVar5 = uVar5 & 0xffffffffffffffef | 8;
            }
            else if (iVar6 == 3) {
                uVar5 = uVar5 | 0x18;
            }
            else {
                uVar5 = uVar5 & 0xffffffffffffffe7;
            }
            if (aiStackX_10[0] == 1) {
                uVar5 = uVar5 & 0xff;
                *(iStack_50 + 0xc) = uVar5;
            }
            else {
                *(iStack_50 + 3) = uVar5;
            }
        }
    }
    uVar5 = CONCAT71(uVar5 >> 8,uVar3);
    cVar1 = fcn.0001193c(uVar5,&iStack_48,&iStack_68);
    if (cVar1 != '\0') {
        cVar1 = '\b';
        if (arg4 != '\0') {
            cVar1 = arg4;
        }
        if (iStack_68 == 1) {
            uVar5 = *(iStack_48 + 0xc);
        }
        else {
            uVar5 = CONCAT71(uVar5 >> 8,*(iStack_48 + 3));
        }
        if (cVar1 - 5U < 4) {
            uVar4 = uVar5 ^ (cVar1 - 1U ^ uVar5) & 3;
            uVar5 = CONCAT71(uVar5 >> 8,uVar4);
            if (iStack_68 == 1) {
                uVar5 = 0;
                *(iStack_48 + 0xc) = uVar4;
            }
            else {
                *(iStack_48 + 3) = uVar4;
            }
        }
    }
    uVar5 = CONCAT71(uVar5 >> 8,uVar3);
    cVar1 = fcn.0001193c(uVar5,&iStack_40,&iStack_64);
    if ((cVar1 != '\0') && (in_stack_00000028 < 4)) {
        iVar6 = 1;
        if (in_stack_00000028 != 0) {
            iVar6 = in_stack_00000028;
        }
        if (iStack_64 == 1) {
            uVar5 = *(iStack_40 + 0xc);
        }
        else {
            uVar5 = CONCAT71(uVar5 >> 8,*(iStack_40 + 3));
        }
        if (iVar6 == 2 || iVar6 == 3) {
            uVar5 = uVar5 | 4;
        }
        else {
            uVar5 = uVar5 & 0xfffffffffffffffb;
        }
        if (iStack_64 == 1) {
            uVar5 = uVar5 & 0xff;
            *(iStack_40 + 0xc) = uVar5;
        }
        else {
            *(iStack_40 + 3) = uVar5;
        }
    }
    var_28h = 0x11a27;
    cVar1 = fcn.0001193c(CONCAT71(uVar5 >> 8,uVar3),&iStackX_20,aiStackX_18);
    if (cVar1 != '\0') {
        if (aiStackX_18[0] == 1) {
            uVar4 = *(CONCAT44(uStackX_24,iStackX_20) + 0x10);
        }
        else {
            uVar4 = *(CONCAT44(uStackX_24,iStackX_20) + 4);
        }
        uVar4 = (in_stack_00000030 != '\0') << 5 | uVar4 & 0xdf | 2;
        if (aiStackX_18[0] == 1) {
            *(CONCAT44(uStackX_24,iStackX_20) + 0x10) = uVar4;
        }
        else {
            *(CONCAT44(uStackX_24,iStackX_20) + 4) = uVar4;
        }
    }
    return;
}


/* fcn.00011024 @ 0x11024 */

ulong fcn.00011024(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x11d50;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00010ee4(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00010e14(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00010de4(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x11d50) {
                section..text(iVar4,0x11d50,4);
            }
            uVar2 = fcn.00010f34(arg1,iVar3);
            (**(*0x11d88 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00011464 @ 0x11464 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00011464(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int iStack_38;
    int iStack_34;
    uint32_t *puStack_30;
    uint32_t var_20h;
    uint32_t var_1ch;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    cVar1 = fcn.0001193c(arg1,&puStack_30,&iStack_38);
    if ((cVar1 != '\0') && (arg2 != 0)) {
        if (iStack_38 == 1) {
            uVar3 = puStack_30[0x1f];
        }
        else {
            uVar3 = *(puStack_30 + 0x1f);
        }
        if (uVar3 != 0xff) {
            uVar6 = 0;
            iVar5 = 1000000;
            if (arg3 != 0) {
                do {
                    while( true ) {
                        if (iStack_38 == 1) {
                            uVar2 = puStack_30[0x1f];
                        }
                        else {
                            uVar2 = *(puStack_30 + 0x1f);
                        }
                        if ((uVar2 & 2) != 0) break;
                        if (iVar5 == 0) {
                            iVar5 = CONCAT71(puStack_30 >> 8,arg1);
                            cVar1 = fcn.0001193c(iVar5,&var_20h,&iStack_34);
                            if (cVar1 == '\0') {
                                return 0;
                            }
                            if (iStack_34 == 1) {
                                uVar4 = *(_var_20h + 0x10);
                            }
                            else {
                                uVar4 = CONCAT71(iVar5 >> 8,*(_var_20h + 4));
                            }
                            if ((uVar4 >> 5 & 1) == 0) {
                                return 0;
                            }
                            fcn.00011a10(CONCAT71(uVar4 >> 8,arg1),0);
                            iVar5 = 1000000;
                        }
                        fcn.00011404(0x23);
                        iVar5 = iVar5 + -10;
                    }
                    if (iStack_38 == 1) {
                        *puStack_30 = *(uVar6 + arg2);
                    }
                    else {
                        *puStack_30 = *(uVar6 + arg2);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < arg3);
            }
            return arg3;
        }
    }
    return 0;
}


/* fcn.0001193c @ 0x1193c */

uint64_t fcn.0001193c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg1_00;
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0xfdcb0618 >> (arg1 & 0x1f) & 1) == 0) {
        uVar2 = fcn.00011844(arg1,arg2,arg2);
        if (uVar2 == '\0') goto code_r0x000119d8;
    }
    else {
        arg1_00 = *((arg1 & 0xffU) * 8 + 0x11c3c);
        uVar4 = arg1_00;
        uVar2 = fcn.00011b20(arg1_00);
        *arg2 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) {
code_r0x000119d8:
            return uVar2 & 0xffffffffffffff00;
        }
        if ((*(uVar4 + 0x84) & 3) != 0) {
            *(uVar4 + 0x84) = *(uVar4 + 0x84) & 0xfc;
            iVar3 = 0x81;
            if (*(uVar2 + 0xfc) == 0x44570110) {
                iVar3 = 0x204;
            }
            *(iVar3 + uVar2) = *(iVar3 + uVar2) | 7;
        }
    }
    iVar1 = *(*arg2 + 0xfc);
    *arg3 = iVar1 == 0x44570110;
    return CONCAT71(iVar1 >> 8,1);
}


/* fcn.00010de4 @ 0x10de4 */

ulong fcn.00010de4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11d88 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.00010d58 @ 0x10d58 */

ulong fcn.00010d58(int64_t arg1)

{
    char16_t cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar2 = fcn.00010d28();
    if (0x49 < uVar2) {
        return 0x8000000000000005;
    }
    if (L"Serial IO UART Driver Controller #" <= arg1) {
        if (arg1 < L"Serial IO UART Driver Controller #" + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (L"Serial IO UART Driver Controller #" + 1 <= arg1) goto code_r0x00010dbf;
    }
    if (L"Serial IO UART Driver Controller #" + 1 <= arg1 + 0x94) {
        return 0x800000000000000f;
    }
code_r0x00010dbf:
    cVar1 = L'S';
    iVar3 = L"Serial IO UART Driver Controller #" - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar3 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar4;
    return 0;
}


/* fcn.00011168 @ 0x11168 */

ulong fcn.00011168(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    ulong uVar2;
    ulong *arg1_00;
    ulong *puVar3;
    ulong *noname_0;
    int64_t iVar4;
    int64_t iVar5;
    
    iVar4 = 0;
    if ((arg4 == 0) || (arg3 == 0)) {
code_r0x00011301:
        uVar2 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg4 == 0) goto code_r0x00011301;
            if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) {
                        noname_0 = *arg3;
                        iVar5 = iVar4;
                        if (noname_0 != NULL) {
                            for (; *noname_0 != NULL; noname_0 = noname_0 + 2) {
                                if ((*arg1 & 0xffffff) == (**noname_0 & 0xffffff)) {
                                    return 0x8000000000000014;
                                }
                                iVar5 = iVar5 + 1;
                            }
                        }
                        arg1_00 = fcn.00010de4(noname_0,(iVar5 + 2) * 0x10);
                        if (arg1_00 != NULL) {
                            puVar3 = *arg3;
                            if (((puVar3 != NULL) && (iVar5 << 4 != 0)) && (arg1_00 != puVar3)) {
                                noname_0 = arg1_00;
                                section..text(arg1_00,puVar3,iVar5 << 4);
                            }
                            puVar3 = fcn.00010de4();
                            if ((puVar3 != NULL) && (puVar3 != arg1)) {
                                noname_0 = puVar3;
                                puVar3 = section..text(puVar3,arg1,3);
                            }
                            arg1_00[iVar5 * 2] = puVar3;
                            if (puVar3 != NULL) {
                                iVar1 = *arg4;
                                while (iVar1 != 0) {
                                    iVar4 = iVar4 + 1;
                                    iVar1 = *(arg4 + iVar4 * 2);
                                }
                                iVar4 = fcn.00010e14(noname_0,iVar4 * 2 + 2,arg4);
                                arg1_00[iVar5 * 2 + 1] = iVar4;
                                if (iVar4 != 0) {
                                    arg1_00[iVar5 * 2 + 2] = 0;
                                    arg1_00[iVar5 * 2 + 3] = 0;
                                    if (*arg3 != 0) {
                                        (**(*0x11d88 + 0x48))();
                                    }
                                    *arg3 = arg1_00;
                                    return 0;
                                }
                                (**(*0x11d88 + 0x48))(arg1_00[iVar5 * 2]);
                            }
                            (**(*0x11d88 + 0x48))(arg1_00);
                        }
                        return 0x8000000000000009;
                    }
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 6400 named .text
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


/* fcn.00011100 @ 0x11100 */

ulong fcn.00011100(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_00000014;
    uint32_t *puVar1;
    
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (arg4 == 0) {
        return 0x8000000000000002;
    }
    if (((puVar1 != NULL) && (arg3 != 0)) && (*puVar1 != '\0')) {
        do {
            if ((*arg1 & 0xffffff) == (*puVar1 & 0xffffff)) {
                while( true ) {
                    if (*arg3 == NULL) {
                        return 0x8000000000000003;
                    }
                    if ((*arg1 & 0xffffff) == (**arg3 & 0xffffff)) break;
                    arg3 = arg3 + 0x10;
                }
                *arg4 = *(arg3 + 8);
                return 0;
            }
            puVar1 = puVar1 + 3;
        } while (*puVar1 != '\0');
    }
    return 0x8000000000000003;
}


/* fcn.00010d28 @ 0x10d28 */

uint64_t fcn.00010d28(void)

{
    int16_t *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    do {
        if (0x91 < uVar3) {
            return 0x4a;
        }
        uVar2 = uVar2 + 1;
        piVar1 = uVar3 + 0x11c92;
        uVar3 = uVar3 + 2;
    } while (*piVar1 != 0);
    return uVar2;
}


/* fcn.00010e54 @ 0x10e54 */

bool fcn.00010e54(uint32_t arg1)

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


/* fcn.00010ee4 @ 0x10ee4 */

char * fcn.00010ee4(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00010e54(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00010e14 @ 0x10e14 */

void fcn.00010e14(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010de4();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010f34 @ 0x10f34 */

int64_t fcn.00010f34(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x11d50;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00010e54(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00010e54(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00010ee4(arg1);
        iVar4 = fcn.00010ee4(arg2);
        iVar2 = fcn.00010de4();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00010ee4(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00010e14(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00011a10 @ 0x11a10 */

void fcn.00011a10(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int aiStackX_18 [2];
    int64_t iStackX_20;
    uint32_t var_50h;
    int64_t var_58h;
    
    cVar1 = fcn.0001193c(arg1,&iStackX_20,aiStackX_18);
    if (cVar1 != '\0') {
        if (aiStackX_18[0] == 1) {
            uVar2 = *(iStackX_20 + 0x10);
        }
        else {
            uVar2 = *(iStackX_20 + 4);
        }
        uVar2 = (arg2 != '\0') << 5 | uVar2 & 0xdf | 2;
        if (aiStackX_18[0] == 1) {
            *(iStackX_20 + 0x10) = uVar2;
        }
        else {
            *(iStackX_20 + 4) = uVar2;
        }
    }
    return;
}


/* fcn.00011404 @ 0x11404 */

void fcn.00011404(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.000102e0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011a70 @ 0x11a70 */

uchar fcn.00011a70(uint32_t arg1)

{
    if (arg1 < 7) {
        arg1 = arg1 & 0xff;
        if ((arg1 == 0) || (arg1 == 1)) {
            return 0x1e;
        }
        if (arg1 == 2) {
            return 0x19;
        }
        if ((((arg1 == 3) || (arg1 == 4)) || (arg1 == 5)) || (arg1 == 6)) {
            return 0x11;
        }
    }
    return 0xff;
}


/* fcn.00011aa8 @ 0x11aa8 */

uchar fcn.00011aa8(uint32_t arg1)

{
    if (6 < arg1) {
        return 0xff;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 0) {
        return 0;
    }
    if (arg1 == 1) {
        return 1;
    }
    if (arg1 != 2) {
        if (arg1 == 3) {
            return 0;
        }
        if (arg1 == 4) {
            return 1;
        }
        if (arg1 != 5) {
            if (arg1 != 6) {
                return 0xff;
            }
            return 3;
        }
    }
    return 2;
}


/* fcn.00011b20 @ 0x11b20 */

int64_t fcn.00011b20(uint32_t arg1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    
    uVar3 = CONCAT44(in_register_0000000c,arg1);
    if (uVar3 < 0xfe020000) {
        uVar1 = *((uVar3 + 0x10 >> 4 & 0x10000000 | uVar3 + 0x10 & 0xffffffff) + 0xc0000000);
        uVar2 = *((uVar3 + 0x14 >> 4 & 0x10000000 | uVar3 + 0x14 & 0xffffffff) + 0xc0000000);
    }
    else {
        uVar1 = *(uVar3 + 0x10);
        uVar2 = *(uVar3 + 0x14);
    }
    return (uVar1 & 0xfffff000) + (uVar2 << 0x20);
}


/* fcn.00011844 @ 0x11844 */

int64_t fcn.00011844(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    unkuint7 Var4;
    uint64_t uVar3;
    int64_t iVar5;
    uchar uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    
    uVar6 = arg1;
    uVar1 = fcn.00011a70(arg1);
    uVar8 = (uVar1 & 0x1f) << 3;
    uVar1 = fcn.00011aa8(CONCAT71(arg1 >> 8,uVar6));
    uVar8 = (uVar8 | uVar1 & 7) << 0xc;
    uVar7 = uVar8;
    iVar2 = fcn.00011b20(uVar8);
    *arg2 = iVar2;
    Var4 = iVar2 >> 8;
    if ((iVar2 + 0x1000U & 0xffffffffffffefff) == 0) {
        iVar2 = Var4 << 8;
    }
    else {
        uVar3 = CONCAT71(Var4,*(uVar7 + 0xc0000004));
        if ((*(uVar7 + 0xc0000004) & 2) == 0) {
            *(uVar7 + 0xc0000004) = *(uVar7 + 0xc0000004) | 2;
            *(uVar7 + 0xc0000084) = *(uVar7 + 0xc0000084) & 0xfc;
            iVar5 = 0x81;
            if (*(iVar2 + 0xfc) == 0x44570110) {
                iVar5 = 0x204;
            }
            uVar3 = CONCAT31(*(iVar2 + 0xfc) >> 8,*(iVar5 + iVar2)) | 7;
            *(iVar5 + iVar2) = uVar3;
        }
        iVar2 = CONCAT71(uVar3 >> 8,1);
    }
    return iVar2;
}


