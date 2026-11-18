// decompiled by r2ghidra: 0055_EnglishDxe.pe32
// functions: 3

/* entry0 @ 0x10280 */

void entry0(ulong noname_0,int64_t arg1)

{
    //[00] -r-x section size 1152 named .text
    *0x107f0 = *(arg1 + 0x60);
    *0x107e8 = arg1;
    fcn.000102a0();
    return;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(void)

{
    uint64_t uVar1;
    uint64_t uVar2;
    char *pcVar3;
    char cVar4;
    
    uVar2 = 0xffffffffffffff08;
    do {
        cVar4 = uVar2 + -8;
        *(uVar2 + 0x109f8) = 0;
        *(uVar2 + 0x10af8) = cVar4;
        *(uVar2 + 0x108f8) = cVar4;
        if (((uVar2 + 0x97 < 0x1a) || (uVar2 + 0x18 < 0x17)) || (uVar2 < 7)) {
            *(uVar2 + 0x109f8) = 1;
            *(uVar2 + 0x109d8) = *(uVar2 + 0x109d8) | 1;
            *(uVar2 + 0x10af8) = uVar2 + -0x28;
            *(uVar2 + 0x108d8) = cVar4;
        }
        uVar1 = uVar2 + 0xf9;
        uVar2 = uVar2 + 1;
    } while (uVar1 < 0x100);
    cVar4 = '0';
    pcVar3 = "0123456789\\._^$~!#%&-{}()@`\'";
    do {
        pcVar3 = pcVar3 + 1;
        *(cVar4 + 0x10900) = *(cVar4 + 0x10900) | 1;
        cVar4 = *pcVar3;
    } while (cVar4 != '\0');
    (**(*0x107f0 + 0x148))(0x107e0,0x10710,0x10720,0x10700,0x10758,0);
    return;
}


/* fcn.00010470 @ 0x10470 */

bool fcn.00010470(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint16_t *puVar1;
    char cVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint16_t *puVar6;
    uint in_R8;
    uint16_t uVar7;
    uint64_t uVar8;
    
    uVar4 = *CONCAT44(in_R8,arg3);
    puVar1 = CONCAT44(in_R8,arg3);
    do {
        if (uVar4 == 0) {
            return *arg2 == 0;
        }
        puVar6 = puVar1 + 1;
        if (uVar4 == 0x2a) {
            uVar4 = *arg2;
            while (uVar4 != 0) {
                cVar2 = fcn.00010470(arg1,arg2,puVar6);
                if (cVar2 != '\0') {
                    return true;
                }
                arg2 = arg2 + 2;
                uVar4 = *arg2;
            }
        }
        else {
            if (uVar4 == 0x3f) {
                if (*arg2 == 0) {
                    return false;
                }
            }
            else if (uVar4 == 0x5b) {
                if (*arg2 == 0) {
                    return false;
                }
                uVar4 = *puVar6;
                puVar6 = puVar1 + 2;
                if (uVar4 != 0) {
                    uVar8 = *arg2;
                    uVar7 = 0;
                    do {
                        if (uVar4 == 0x5d) {
                            return false;
                        }
                        uVar3 = uVar4;
                        if (uVar4 == 0x2d) {
                            uVar3 = *puVar6;
                            if (uVar3 == 0) {
                                return false;
                            }
                            if (uVar3 == 0x5d) {
                                return false;
                            }
                            if (*arg2 < 0x100) {
                                uVar4 = *(uVar8 + 0x10a00);
                            }
                            else {
                                uVar4 = *arg2;
                            }
                            if (uVar7 < 0x100) {
                                uVar7 = *(uVar7 + 0x10a00);
                            }
                            if (uVar7 <= uVar4) {
                                if (*arg2 < 0x100) {
                                    uVar7 = *(uVar8 + 0x10a00);
                                }
                                else {
                                    uVar7 = *arg2;
                                }
                                if (uVar3 < 0x100) {
                                    uVar5 = *(uVar3 + 0x10a00);
                                }
                                else {
                                    uVar5 = uVar3;
                                }
                                uVar4 = uVar3;
                                if (uVar7 <= uVar5) break;
                            }
                        }
                        if (*arg2 < 0x100) {
                            uVar7 = *(uVar8 + 0x10a00);
                        }
                        else {
                            uVar7 = *arg2;
                        }
                        if (uVar3 < 0x100) {
                            uVar5 = *(uVar3 + 0x10a00);
                        }
                        else {
                            uVar5 = uVar3;
                        }
                        uVar4 = uVar3;
                        if (uVar7 == uVar5) break;
                        uVar4 = *puVar6;
                        puVar6 = puVar6 + 1;
                        uVar7 = uVar3;
                    } while (uVar4 != 0);
                    while ((uVar4 != 0 && (uVar4 != 0x5d))) {
                        uVar4 = *puVar6;
                        puVar6 = puVar6 + 1;
                    }
                }
            }
            else {
                if (*arg2 < 0x100) {
                    uVar7 = *(*arg2 + 0x10a00);
                }
                else {
                    uVar7 = *arg2;
                }
                if (uVar4 < 0x100) {
                    uVar4 = *(uVar4 + 0x10a00);
                }
                if (uVar7 != uVar4) {
                    return false;
                }
            }
            arg2 = arg2 + 2;
        }
        uVar4 = *puVar6;
        puVar1 = puVar6;
    } while( true );
}


