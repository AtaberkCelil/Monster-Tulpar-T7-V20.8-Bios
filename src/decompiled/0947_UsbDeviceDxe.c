// decompiled by r2ghidra: 0947_UsbDeviceDxe.pe32
// functions: 89

/* entry0 @ 0x10384 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103a0(arg1,in_RDX);
    fcn.00010488(arg1,in_RDX);
    return;
}


/* fcn.000103a0 @ 0x103a0 */

ulong fcn.000103a0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x18f30 = *(arg1 + 0x60);
    *0x18f38 = *(arg1 + 0x58);
    *0x18f28 = arg1;
    fcn.000186b8();
    puVar4 = fcn.000186b8();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103ff:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010380();
                fcn.00010370();
                uVar2 = in(0x1808);
                fcn.00010350(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010340();
                }
                fcn.00010350(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010370();
                }
                else {
                    fcn.00010360();
                }
code_r0x00010468:
                uVar7 = 0;
                if (*(*0x18f28 + 0x68) != 0) {
                    piVar8 = *(*0x18f28 + 0x70);
                    do {
                        if ((*0x187d0 == *piVar8) && (*0x187d8 == piVar8[1])) {
                            *0x18f48 = (*(*0x18f28 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x18f28 + 0x68));
                }
                *0x18f48 = 0;
                return 0x800000000000000e;
            }
            if ((*0x189a8 == *(puVar4 + 4)) && (*0x189b0 == *(puVar4 + 8))) goto code_r0x00010468;
        }
        else if (uVar1 == 4) goto code_r0x000103ff;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010488 @ 0x10488 */

void fcn.00010488(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    uchar auStack_cb8 [1942];
    char cStack_522;
    
    auStackX_10[0] = 0xca9;
    iVar1 = (**(*0x18f38 + 0x48))(L"Setup",0x18770,0,auStackX_10,auStack_cb8);
    if ((-1 < iVar1) && (cStack_522 == '\x01')) {
        *0x18810 = arg1;
        *0x18818 = arg1;
        (**(*0x18f30 + 0x148))(0x18818,0x18790,0x187f0,0x187b0,0x18820,0x18750,0x18838,0);
    }
    return;
}


/* fcn.000186b8 @ 0x186b8 */

int64_t fcn.000186b8(void)

{
    if (*0x18f40 == 0) {
        fcn.000185c4(0x18780,0x18f40);
    }
    return *0x18f40;
}


/* fcn.000185c4 @ 0x185c4 */

ulong fcn.000185c4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x18f28;
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


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00018568 @ 0x18568 */

void fcn.00018568(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00018538(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102e0(arg1_00,arg1);
    }
    return;
}


/* fcn.00018538 @ 0x18538 */

ulong fcn.00018538(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x18f30 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 33984 named .text
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


/* fcn.00012bfc @ 0x12bfc */

ulong fcn.00012bfc(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    int64_t iVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(iVar3 + 0x98);
    iVar5 = 0;
    while (iVar4 = iVar1, *(iVar4 + 8) != CONCAT44(in_register_00000014,arg2)) {
        iVar5 = iVar4;
        iVar1 = *(iVar4 + 0x10);
    }
    if (iVar5 == 0) {
        uVar2 = 0x800000000000000e;
    }
    else {
        if (iVar4 == *(iVar3 + 0x98)) {
            *(iVar3 + 0x98) = *(iVar4 + 0x10);
        }
        else {
            *(iVar5 + 0x10) = *(iVar4 + 0x10);
        }
        (**(*0x18f30 + 0x48))(*(iVar4 + 8));
        (**(*0x18f30 + 0x48))(iVar4);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012b9c @ 0x12b9c */

ulong fcn.00012b9c(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar4 + 0x904) != '\0') {
        piVar1 = *(iVar4 + 0x138);
        if ((piVar1 == NULL) || (iVar2 = (**(*piVar1 + 0x38))(piVar1[1]), iVar2 != 0)) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar3 = fcn.000126f0(arg1);
            *(iVar4 + 0x904) = 0;
        }
        return uVar3;
    }
    return 0;
}


/* fcn.00010eb4 @ 0x10eb4 */

void fcn.00010eb4(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 != NULL) && (*piVar2 != 0)) {
        if (piVar2[1] != 0) {
            uVar3 = 0;
            if (*(*piVar2 + 0x11) != '\0') {
                do {
                    iVar1 = *(piVar2[1] + uVar3 * 8);
                    if (iVar1 != 0) {
                        fcn.00010e30(iVar1);
                        (**(*0x18f30 + 0x48))(*(piVar2[1] + uVar3 * 8));
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(*piVar2 + 0x11));
            }
            (**(*0x18f30 + 0x48))(piVar2[1]);
        }
        (**(*0x18f30 + 0x48))(*piVar2);
    }
    return;
}


/* fcn.00018624 @ 0x18624 */

ulong fcn.00018624(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00018684:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00018684;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* fcn.00010bfc @ 0x10bfc */

void fcn.00010bfc(uint32_t arg1)

{
    int64_t *piVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 != NULL) && (*piVar2 != 0)) {
        if (piVar2[1] != 0) {
            uVar3 = 0;
            if (*(*piVar2 + 4) != '\0') {
                do {
                    piVar1 = *(piVar2[1] + uVar3 * 8);
                    if (piVar1 != NULL) {
                        if (*piVar1 != 0) {
                            if (piVar1[1] != 0) {
                                (**(*0x18f30 + 0x48))();
                            }
                            (**(*0x18f30 + 0x48))(*piVar1);
                        }
                        (**(*0x18f30 + 0x48))(*(piVar2[1] + uVar3 * 8));
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(*piVar2 + 4));
            }
            (**(*0x18f30 + 0x48))(piVar2[1]);
        }
        (**(*0x18f30 + 0x48))(*piVar2);
    }
    return;
}


/* fcn.00010cb0 @ 0x10cb0 */

void fcn.00010cb0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 != NULL) && (*piVar2 != 0)) {
        if (piVar2[1] != 0) {
            uVar3 = 0;
            if (*(*piVar2 + 4) != '\0') {
                do {
                    iVar1 = *(piVar2[1] + uVar3 * 8);
                    if (iVar1 != 0) {
                        fcn.00010bfc(iVar1);
                        (**(*0x18f30 + 0x48))(*(piVar2[1] + uVar3 * 8));
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(*piVar2 + 4));
            }
            (**(*0x18f30 + 0x48))(piVar2[1]);
        }
        (**(*0x18f30 + 0x48))(*piVar2);
    }
    return;
}


/* fcn.00010db8 @ 0x10db8 */

void fcn.00010db8(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    uint64_t uVar2;
    
    piVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar1 != NULL) && (*piVar1 != 0)) {
        if (piVar1[1] != 0) {
            uVar2 = 0;
            if (*(*piVar1 + 4) != '\0') {
                do {
                    if (*(piVar1[1] + uVar2 * 8) != 0) {
                        (**(*0x18f30 + 0x48))();
                    }
                    uVar2 = uVar2 + 1;
                } while (uVar2 < *(*piVar1 + 4));
            }
            (**(*0x18f30 + 0x48))(piVar1[1]);
        }
        (**(*0x18f30 + 0x48))(*piVar1);
    }
    return;
}


/* fcn.00010e30 @ 0x10e30 */

void fcn.00010e30(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 != NULL) && (*piVar2 != 0)) {
        if (piVar2[1] != 0) {
            uVar3 = 0;
            if (*(*piVar2 + 4) != '\0') {
                do {
                    iVar1 = *(piVar2[1] + uVar3 * 8);
                    if (iVar1 != 0) {
                        fcn.00010db8(iVar1);
                        (**(*0x18f30 + 0x48))(*(piVar2[1] + uVar3 * 8));
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(*piVar2 + 4));
            }
            (**(*0x18f30 + 0x48))(piVar2[1]);
        }
        (**(*0x18f30 + 0x48))(*piVar2);
    }
    return;
}


/* fcn.00010f38 @ 0x10f38 */

ulong fcn.00010f38(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    iVar1 = fcn.00018568(7);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,7);
        }
        iVar1 = fcn.00018568(6);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            if (iVar1 == *(arg1 + 8)) {
                return 0;
            }
            section..text(iVar1,*(arg1 + 8),6);
            return 0;
        }
    }
    if (*arg2 != 0) {
        if (*(arg2 + 8) != 0) {
            (**(*0x18f30 + 0x48))();
        }
        (**(*0x18f30 + 0x48))(*arg2);
    }
    return 0x8000000000000009;
}


/* fcn.00011004 @ 0x11004 */

ulong fcn.00011004(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    iVar1 = fcn.00018568(9);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,9);
        }
        iVar1 = fcn.00018568(*(*arg2 + 4) << 3);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            if (*(*arg2 + 4) == '\0') {
                return 0;
            }
            while( true ) {
                uVar2 = fcn.00018568(7);
                *(*(arg2 + 8) + uVar3 * 8) = uVar2;
                iVar1 = *(*(arg2 + 8) + uVar3 * 8);
                if (iVar1 == 0) break;
                arg2_00 = *(*(arg1 + 8) + uVar3 * 8);
                if (iVar1 != arg2_00) {
                    section..text(iVar1,arg2_00,7);
                }
                uVar3 = uVar3 + 1;
                if (*(*arg2 + 4) <= uVar3) {
                    return 0;
                }
            }
        }
    }
    fcn.00010db8(arg2);
    return 0x8000000000000009;
}


/* fcn.00011104 @ 0x11104 */

int64_t fcn.00011104(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = fcn.00018568(9);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,9);
        }
        iVar1 = fcn.00018568(*(*arg2 + 4) << 3);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            uVar3 = 0;
            if (*(*arg2 + 4) == '\0') {
                return 0;
            }
            do {
                uVar2 = fcn.00018568(0x10);
                *(*(arg2 + 8) + uVar3 * 8) = uVar2;
                iVar1 = *(*(arg2 + 8) + uVar3 * 8);
                if (iVar1 == 0) {
                    iVar1 = -0x7ffffffffffffff7;
                    break;
                }
                iVar1 = fcn.00010f38(*(*(arg1 + 8) + uVar3 * 8),iVar1);
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(*arg2 + 4));
            if (-1 < iVar1) {
                return iVar1;
            }
            goto code_r0x000111de;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x000111de:
    fcn.00010bfc(arg2);
    return iVar1;
}


/* fcn.0001120c @ 0x1120c */

int64_t fcn.0001120c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = fcn.00018568(9);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,9);
        }
        iVar1 = fcn.00018568(*(*arg2 + 4) << 3);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            uVar3 = 0;
            if (*(*arg2 + 4) == '\0') {
                return 0;
            }
            do {
                uVar2 = fcn.00018568(0x10);
                *(*(arg2 + 8) + uVar3 * 8) = uVar2;
                iVar1 = *(*(arg2 + 8) + uVar3 * 8);
                if (iVar1 == 0) {
                    iVar1 = -0x7ffffffffffffff7;
                    break;
                }
                iVar1 = fcn.00011004(*(*(arg1 + 8) + uVar3 * 8),iVar1);
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(*arg2 + 4));
            if (-1 < iVar1) {
                return iVar1;
            }
            goto code_r0x000112e6;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x000112e6:
    fcn.00010e30(arg2);
    return iVar1;
}


/* fcn.00011314 @ 0x11314 */

int64_t fcn.00011314(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = fcn.00018568(9);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,9);
        }
        iVar1 = fcn.00018568(*(*arg2 + 4) << 3);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            uVar3 = 0;
            if (*(*arg2 + 4) == '\0') {
                return 0;
            }
            do {
                uVar2 = fcn.00018568(0x10);
                *(*(arg2 + 8) + uVar3 * 8) = uVar2;
                iVar1 = *(*(arg2 + 8) + uVar3 * 8);
                if (iVar1 == 0) {
                    iVar1 = -0x7ffffffffffffff7;
                    break;
                }
                iVar1 = fcn.00011104(*(*(arg1 + 8) + uVar3 * 8),iVar1);
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(*arg2 + 4));
            if (-1 < iVar1) {
                return iVar1;
            }
            goto code_r0x000113ee;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x000113ee:
    fcn.00010cb0(arg2);
    return iVar1;
}


/* fcn.00010d34 @ 0x10d34 */

void fcn.00010d34(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((piVar2 != NULL) && (*piVar2 != 0)) {
        if (piVar2[1] != 0) {
            uVar3 = 0;
            if (*(*piVar2 + 0x11) != '\0') {
                do {
                    iVar1 = *(piVar2[1] + uVar3 * 8);
                    if (iVar1 != 0) {
                        fcn.00010cb0(iVar1);
                        (**(*0x18f30 + 0x48))(*(piVar2[1] + uVar3 * 8));
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(*piVar2 + 0x11));
            }
            (**(*0x18f30 + 0x48))(piVar2[1]);
        }
        (**(*0x18f30 + 0x48))(*piVar2);
    }
    return;
}


/* fcn.0001141c @ 0x1141c */

int64_t fcn.0001141c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = fcn.00018568(0x12);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,0x12);
        }
        iVar1 = fcn.00018568(*(*arg2 + 0x11) << 3);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            uVar3 = 0;
            if (*(*arg2 + 0x11) == '\0') {
                return 0;
            }
            do {
                uVar2 = fcn.00018568(0x10);
                *(*(arg2 + 8) + uVar3 * 8) = uVar2;
                iVar1 = *(*(arg2 + 8) + uVar3 * 8);
                if (iVar1 == 0) {
                    iVar1 = -0x7ffffffffffffff7;
                    break;
                }
                iVar1 = fcn.0001120c(*(*(arg1 + 8) + uVar3 * 8),iVar1);
                uVar3 = uVar3 + 1;
            } while (uVar3 < *(*arg2 + 0x11));
            if (-1 < iVar1) {
                return iVar1;
            }
            goto code_r0x000114f6;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x000114f6:
    fcn.00010eb4(arg2);
    return iVar1;
}


/* fcn.00017784 @ 0x17784 */

void fcn.00017784(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000177e8(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000177e8 @ 0x177e8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000177e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x00017843;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00017843:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00018714(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000186e8(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x18b5c;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x00017bcd:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x18b5c;
                }
                else {
                    pcVar9 = 0x18b60;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x0001798c:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x00017b2f;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00017b46;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00017b2f;
                                }
                                goto code_r0x00017b46;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x00017b2f:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x0001798c;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x0001798c;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00017b46;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00017b2f;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00017b46:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.00018514(&var_68h_2,0x26,0,0x18af0);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00017bcd;
                                if (uStack_a8 == 0x53) goto code_r0x00017ddc;
                                if (uStack_a8 == 0x58) goto code_r0x00017ed2;
                                if (uStack_a8 == 0x61) goto code_r0x00017de5;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00017971;
                                }
                                if (uStack_a8 != 100) goto code_r0x0001796d;
                                goto code_r0x00017ee9;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x18b5c;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x000180e4;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x18bfb;
                                    goto code_r0x00017e99;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00017e99:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x000180e4;
                            }
                            fcn.00018514(&var_68h_2,0x26,0,0x18b54);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00017ddc:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00017de5:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x000180e4;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x0001796d;
                                    goto code_r0x00017ed6;
                                }
                                goto code_r0x00017edb;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x000180e4;
                            }
                            fcn.00018514(&var_68h_2,0x26,0,0x18b38);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x000180e4;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00017ed2:
                    uVar5 = uVar5 | 0x20;
code_r0x00017ed6:
                    uVar5 = uVar5 | 0x80;
code_r0x00017edb:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00017ee9:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00017f2b;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x00017f2b:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x00017fb3:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00017fb3;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x0001796d:
                    pcVar9 = &uStack_a8;
code_r0x00017971:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x000180e4:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000177b4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000177b4(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000177b4(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000177b4(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.00011bdc @ 0x11bdc */

ulong fcn.00011bdc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uStack_28;
    uint32_t uStack_24;
    
    piVar1 = *(arg1 + 0x138);
    uStack_28 = arg2 & 0xff;
    uStack_24 = arg3 != 0;
    iVar2 = -0x7ffffffffffffff9;
    if (arg4 == '\x01') {
        if (piVar1 != NULL) {
            iVar2 = (**(*piVar1 + 0x78))(piVar1[1],&uStack_28);
        }
    }
    else if (piVar1 != NULL) {
        iVar2 = (**(*piVar1 + 0x80))(piVar1[1],&uStack_28);
    }
    uVar3 = 0;
    if (iVar2 != 0) {
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00017304 @ 0x17304 */

void fcn.00017304(int64_t arg1,int64_t arg2)

{
    fcn.00013994(arg1 & 0xffffffff,arg2);
    return;
}


/* fcn.00013994 @ 0x13994 */

uint32_t fcn.00013994(int64_t arg1,uint32_t arg2)

{
    uint32_t uStack_18;
    
    if (arg2 == 0) {
        uStack_18 = arg1 << 1;
    }
    else {
        uStack_18 = arg1 << 1 | arg2;
    }
    return uStack_18;
}


/* fcn.0001244c @ 0x1244c */

void fcn.0001244c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    fcn.000102c0(arg1,0x20,0);
    iVar1 = *arg2;
    iVar2 = *(arg2 + 8);
    if (iVar1 != 0) {
        *arg1 = *(iVar1 + 2) & 0xf;
        *(arg1 + 4) = (*(iVar1 + 2) & 0x80) != 0;
        *(arg1 + 8) = *(iVar1 + 3) & 3;
        *(arg1 + 0xc) = *(iVar1 + 4);
        *(arg1 + 0x18) = *(iVar1 + 6);
    }
    if (iVar2 != 0) {
        *(arg1 + 0x10) = *(iVar2 + 3) & 0x1f;
        *(arg1 + 0x14) = *(iVar2 + 2);
        *(arg1 + 0x1c) = *(iVar2 + 4);
    }
    return;
}


/* fcn.00017708 @ 0x17708 */

ulong fcn.00017708(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) != 0) {
        uVar1 = fcn.00013994(*arg2,*(arg2 + 4));
        fcn.0001712c(arg1,uVar1);
    }
    return 0x8000000000000007;
}


/* fcn.00011a44 @ 0x11a44 */

ulong fcn.00011a44(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    int64_t *piVar9;
    int64_t *piStackX_8;
    ulong uStack_58;
    ulong uStack_50;
    uchar auStack_48 [32];
    
    iVar5 = 0;
    piVar2 = *(arg1 + 0x138);
    iVar1 = *(*(arg1 + 0x130) + 0x14);
    if (iVar1 == 4) {
        iVar3 = *(arg1 + 0xf0);
    }
    else {
        iVar3 = *(arg1 + 0xa8);
    }
    if (*(iVar3 + 4) < arg2) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if (iVar1 == 4) {
            piVar7 = *(*(arg1 + 0xf8) + (arg2 - 1) * 8);
            iVar3 = *piVar7;
            piVar9 = piStackX_8;
        }
        else {
            piVar9 = *(*(arg1 + 0xb0) + (arg2 - 1) * 8);
            iVar3 = *piVar9;
            piVar7 = piStackX_8;
        }
        if (*(iVar3 + 4) != 0) {
            iVar8 = 0;
            uVar6 = *(iVar3 + 4);
            do {
                if (*(*(arg1 + 0x130) + 0x14) == 4) {
                    uStack_58 = **(iVar8 + piVar7[1]);
                    uStack_50 = (*(iVar8 + piVar7[1]))[1];
                }
                else {
                    uStack_50 = 0;
                    uStack_58 = *(iVar8 + piVar9[1]);
                }
                fcn.0001244c(auStack_48,&uStack_58);
                if (piVar2 == NULL) {
code_r0x00011b73:
                    iVar5 = -0x7ffffffffffffff9;
                }
                else {
                    iVar3 = (**(*piVar2 + 0x60))(piVar2[1],auStack_48);
                    if (iVar3 != 0) goto code_r0x00011b73;
                    iVar3 = (**(*piVar2 + 0x68))(piVar2[1],auStack_48);
                    if (iVar3 != 0) goto code_r0x00011b73;
                }
                iVar8 = iVar8 + 8;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
        if ((*(*(arg1 + 0x130) + 0x14) != 4) && (iVar5 = -0x7ffffffffffffff9, piVar2 != NULL)) {
            iVar5 = (**(*piVar2 + 0xa0))(piVar2[1]);
        }
        uVar4 = 0;
        if (iVar5 != 0) {
            uVar4 = 0x8000000000000010;
        }
    }
    return uVar4;
}


/* fcn.000124cc @ 0x124cc */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000124cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    int64_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    char cVar7;
    int64_t var_30h;
    uchar auStack_78 [8];
    int iStack_70;
    uint uStack_5c;
    int64_t var_50h;
    int32_t var_48h;
    int32_t var_34h;
    int32_t var_30h_2;
    int var_28h;
    int64_t var_bp_10h;
    int8_t var_8h;
    
    piVar1 = *(arg1 + 0x138);
    iVar6 = arg3;
    iVar4 = piVar1[1];
    uVar3 = fcn.00017304(arg2 & 0xff,iVar6 != 0);
    cVar7 = arg2;
    if (cVar7 == '\0') {
        uStack_5c = 0;
        var_50h._0_4_ = iVar6 != 0;
code_r0x000125a4:
        iStack_70 = *arg4;
    }
    else {
        if (iVar6 == 1) {
            iVar5 = arg1 + 200;
            if (*(*(arg1 + 0x130) + 0x14) == 4) {
                iVar5 = arg1 + 0x110;
            }
            fcn.0001244c(&uStack_5c,iVar5);
            goto code_r0x000125a4;
        }
        iVar5 = arg1 + 0xd8;
        if (*(*(arg1 + 0x130) + 0x14) == 4) {
            iVar5 = arg1 + 0x120;
        }
        fcn.0001244c(&uStack_5c,iVar5);
        iVar2 = *arg4 / var_48h;
        iStack_70 = iVar2 + 1;
        if (*arg4 % var_48h == 0) {
            iStack_70 = iVar2;
        }
        iStack_70 = iStack_70 * var_48h;
    }
    _var_30h_2 = 0;
    iVar5 = uVar3 * 0x3e;
    *(iVar5 + 0x144 + arg1) = uVar3;
    *(iVar5 + 0x148 + arg1) = iVar6;
    *(iVar5 + 0x14c + arg1) = var_30h;
    *(iVar5 + 0x154 + arg1) = *arg4;
    *(iVar5 + 0x158 + arg1) = iStack_70;
    *(iVar5 + 0x15c + arg1) = cVar7;
    *(iVar5 + 0x15d + arg1) = 0;
    *(iVar5 + 0x15f + arg1) = 0;
    *(iVar5 + 0x181 + arg1) = 0;
    if (cVar7 == '\0') {
        if (*arg4 == 0) {
            if (iVar6 == 1) {
                iVar4 = (**(*piVar1 + 0xa0))();
            }
            else {
                iVar4 = (**(*piVar1 + 0x98))(piVar1[1]);
            }
            goto code_r0x000126bc;
        }
        if (iVar6 != 1) {
            if (iVar6 != 0) {
                return -0x7ffffffffffffff9;
            }
            iVar4 = (**(*piVar1 + 0x90))(piVar1[1],*(iVar4 + 0x6558));
            if (iVar4 < 0) {
                return iVar4;
            }
            *(iVar5 + 0x181 + arg1) = 1;
            goto code_r0x000126bc;
        }
    }
    else {
        if (iVar6 != 1) {
            iVar4 = (**(*piVar1 + 0xb0))(piVar1[1],auStack_78);
            goto code_r0x000126bc;
        }
        var_28h._0_1_ = 1;
        if (((*arg4 & 0x1ff) == 0) && (*arg4 != 0)) {
            *(iVar5 + 0x15f + arg1) = *(iVar5 + 0x15e + arg1) != '\0';
        }
    }
    iVar4 = (**(*piVar1 + 0xa8))(piVar1[1],auStack_78);
code_r0x000126bc:
    if ((-1 < iVar4) && (iVar4 != 0)) {
        iVar4 = -0x7ffffffffffffff9;
    }
    return iVar4;
}


/* fcn.000172ec @ 0x172ec */

void fcn.000172ec(int64_t arg1)

{
    fcn.000145d4(arg1);
    return;
}


/* fcn.000145d4 @ 0x145d4 */

int64_t fcn.000145d4(uint32_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t arg1_01;
    uint in_register_0000000c;
    ulong *puVar3;
    uchar auStack_18 [24];
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3 == NULL) {
        iVar2 = -0x7ffffffffffffff9;
    }
    else {
        arg1_00 = puVar3[4];
        arg1_01 = arg1_00;
        uVar1 = fcn.00013934(arg1_01,0xc70c);
        *(puVar3 + 0x14) = uVar1 & 7;
        fcn.000139c8(arg1,arg1 + 0x5254);
        fcn.000139c8(arg1,arg1 + 0x52ec);
        iVar2 = fcn.00013a6c(arg1,puVar3 + 0xa49,2,1);
        if ((iVar2 == 0) && (iVar2 = fcn.00013cf4(arg1,0,1,auStack_18), iVar2 == 0)) {
            fcn.00013a6c(arg1,puVar3 + 0xa5c,2,1);
            iVar2 = fcn.00013cf4(arg1,1,1,auStack_18);
            if (*(puVar3 + 0x14) == 4) {
                uVar1 = fcn.00013934(arg1_01,0xc200);
                fcn.00013960(arg1_00,0xc200,uVar1 | 0x40);
                uVar1 = fcn.00013934(arg1_01,0xc2c0);
                fcn.00013960(arg1_00,0xc2c0,uVar1 | 0x20000);
            }
            else {
                uVar1 = fcn.00013934(arg1_01,0xc2c0);
                fcn.00013960(arg1_00,0xc2c0,uVar1 | 0x20000);
                uVar1 = fcn.00013934(arg1_01,0xc200);
                fcn.00013960(arg1_00,0xc200,uVar1 & 0xffffffbf);
            }
            if (puVar3[0xcf9] != 0) {
                puVar3[0xcf0] = *puVar3;
                *(puVar3 + 0xcf2) = *(puVar3 + 0x14);
                (*puVar3[0xcf9])(puVar3 + 0xcf0);
            }
        }
    }
    return iVar2;
}


/* fcn.00017324 @ 0x17324 */

int64_t fcn.00017324(uint32_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uchar auStack_18 [24];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (iVar3 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else if (iVar3 == 0) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        arg1_00 = *(iVar3 + 0x20);
        iVar2 = fcn.00013a6c(arg1,iVar3 + 0x5248,3,9);
        if ((((((iVar2 == 0) && (iVar2 = fcn.00013cf4(arg1,0,9,auStack_18), iVar2 == 0)) &&
              (iVar2 = fcn.00013a6c(arg1,iVar3 + 0x5248,0,1), iVar2 == 0)) &&
             ((iVar2 = fcn.00013cf4(arg1,0,1,auStack_18), iVar2 == 0 &&
              (iVar2 = fcn.00013a6c(arg1,iVar3 + 0x52e0,0,1), iVar2 == 0)))) &&
            ((iVar2 = fcn.00013cf4(arg1,1,1,auStack_18), iVar2 == 0 &&
             ((iVar2 = fcn.00013a6c(arg1,iVar3 + 0x5248,3,2), iVar2 == 0 &&
              (iVar2 = fcn.00013cf4(arg1,0,2,auStack_18), iVar2 == 0)))))) &&
           ((iVar2 = fcn.00013a6c(arg1,iVar3 + 0x52e0,3,2), iVar2 == 0 &&
            (iVar2 = fcn.00013cf4(arg1,1,2,auStack_18), iVar2 == 0)))) {
            *(iVar3 + 0x5240) = arg1 + (0x1050 - (iVar3 + 0x1040U & 0xffffffff) % 0x10);
            *(iVar3 + 0x6558) = iVar3 + 0x6548 + (8 - (iVar3 + 0x6548U & 0xffffffff) % 8);
            *(iVar3 + 0x6770) = iVar3 + 0x6560 + (8 - *(iVar3 + 0x6770) % 8);
            uVar1 = fcn.00013934(arg1_00,0xc720);
            fcn.00013960(arg1_00,0xc720,uVar1 | 1);
            uVar1 = fcn.00013934(arg1_00,0xc720);
            fcn.00013960(arg1_00,0xc720,uVar1 | 2);
        }
    }
    return iVar2;
}


/* fcn.000172d4 @ 0x172d4 */

void fcn.000172d4(int64_t arg1)

{
    fcn.00014534(arg1);
    return;
}


/* fcn.00014534 @ 0x14534 */

int64_t fcn.00014534(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    int64_t iStack_18;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (puVar2 == NULL) {
        iVar1 = -0x7ffffffffffffff9;
    }
    else {
        fcn.00013e20(arg1);
        iVar1 = fcn.00014204(arg1);
        if ((iVar1 == 0) && (puVar2[0xcf8] != 0)) {
            puVar2[0xcf0] = *puVar2;
            iVar1 = (*puVar2[0xcf8])(puVar2 + 0xcf0);
        }
    }
    return iVar1;
}


/* fcn.0001776c @ 0x1776c */

void fcn.0001776c(int64_t arg1)

{
    fcn.0001604c(arg1);
    return;
}


/* fcn.0001604c @ 0x1604c */

ulong fcn.0001604c(uint32_t arg1)

{
    int64_t arg1_00;
    int16_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t arg1_01;
    uint in_register_0000000c;
    int64_t iVar4;
    uint32_t uStack_24;
    int iStack_20;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    iStack_20 = 1000;
    if (iVar4 == 0) {
        uVar3 = 0x8000000000000007;
    }
    else {
        arg1_00 = *(iVar4 + 0x20);
        arg1_01 = arg1_00;
        iVar1 = fcn.00013934(arg1_01,0xc40c);
        while (iVar1 != 0) {
            fcn.00015cc4(arg1);
            iVar1 = fcn.00013934(arg1_01,0xc40c);
        }
        for (uStack_24 = 0; uStack_24 < 0x10; uStack_24 = uStack_24 + 1) {
            if (*(iVar4 + 0x52c0 + uStack_24 * 0x98) != 0) {
                fcn.00014424(arg1,uStack_24);
            }
        }
        uVar2 = fcn.00013934(arg1_01,0xc704);
        fcn.00013960(arg1_00,0xc704,uVar2 & 0x7fffffff);
        do {
            uVar2 = fcn.00013934(arg1_01,0xc70c);
            if ((uVar2 & 0x400000) != 0) break;
            (**(*0x18f30 + 0xf8))(1000);
            iStack_20 = iStack_20 + -1;
        } while (iStack_20 != 0);
        if (iStack_20 == 0) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00011f2c @ 0x11f2c */

ulong fcn.00011f2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    int64_t unaff_RBX;
    uint32_t *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iStackX_20;
    uint64_t *in_stack_00000028;
    
    iVar5 = (arg2 & 0xffffffffU) * 0x3e;
    iVar6 = (arg2 & 0xffffffffU) * 0x98;
    iVar2 = *(*(arg1 + 0x138) + 8);
    puVar4 = (arg2 << 5) * 0x10 + *(iVar2 + 0x5240);
    *(iVar6 + 0x52c0 + iVar2) = 0;
    *(iVar6 + 0x52d8 + iVar2) = 0;
    *arg3 = 0;
    uVar1 = puVar4[2];
    *(in_stack_00000028 + 0xc) = *(iVar5 + 0x15c + arg1);
    *(in_stack_00000028 + 2) = *(iVar5 + 0x148 + arg1);
    in_stack_00000028[3] = *puVar4;
    *in_stack_00000028 = *(iVar5 + 0x158 + arg1);
    *(iVar5 + 0x15d + arg1) = 1;
    *arg3 = 3 - (in_stack_00000028[2] != 1);
    if (uVar1 >> 0x1c == 0) {
        uVar1 = puVar4[2];
        *(in_stack_00000028 + 1) = 1;
        if ((uVar1 & 0xffffff) != 0) {
            *in_stack_00000028 = *in_stack_00000028 - (puVar4[2] & 0xffffff);
        }
    }
    else {
        *(in_stack_00000028 + 1) = 2;
    }
    iStackX_20 = arg4;
    if (*(iVar5 + 0x160 + arg1) == '\x01') {
        puVar3 = arg1 + 0x161 + iVar5;
        if (in_stack_00000028 != puVar3) {
            section..text(in_stack_00000028,puVar3,0x20);
        }
        *(iVar5 + 0x160 + arg1) = 0;
        *arg3 = 3;
    }
    else if ((*(iVar5 + 0x15f + arg1) == '\x01') && (*(iVar5 + 0x15d + arg1) == '\x01')) {
        if ((arg2 & 1U) != 0) {
            puVar3 = arg1 + 0x161 + iVar5;
            if (puVar3 != in_stack_00000028) {
                section..text(puVar3,in_stack_00000028,0x20);
                arg2 = in_stack_00000028;
            }
            iStackX_20 = 0;
            *(iVar5 + 0x160 + arg1) = 1;
            if (*(*(arg1 + 0x130) + 0x14) == 4) {
                iVar2 = *(arg1 + 0x110);
            }
            else {
                iVar2 = *(arg1 + 200);
            }
            fcn.000124cc(arg1,CONCAT71(arg2 >> 8,*(iVar2 + 2)),1,&iStackX_20,unaff_RBX);
            *arg3 = 0;
        }
        *(iVar5 + 0x15f + arg1) = 0;
    }
    return 0;
}


/* fcn.00011c4c @ 0x11c4c */

ulong fcn.00011c4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    char *pcVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t *in_stack_00000028;
    uint uStack_38;
    uint uStack_34;
    
    piVar3 = *(arg1 + 0x138);
    uVar6 = arg2;
    uVar8 = arg2 & 0xffffffff;
    iVar5 = piVar3[1];
    uVar11 = arg2 & 0xffffffff;
    puVar9 = (uVar6 << 5) * 0x10 + *(iVar5 + 0x5240);
    *(uVar8 * 0x98 + 0x52c0 + iVar5) = 0;
    *(uVar8 * 0x98 + 0x52d8 + iVar5) = 0;
    uVar2 = puVar9[2];
    uVar4 = puVar9[3] >> 4 & 0x3f;
    if (uVar4 == 2) {
        (**(*0x18f30 + 0xf8))(0x82);
        iVar10 = uVar11 * 0x3e;
        if (*(iVar10 + 0x181 + arg1) == '\x01') {
            *(iVar10 + 0x181 + arg1) = 0;
            *arg3 = 2;
            *(in_stack_00000028 + 0xc) = uVar8 >> 1;
            *(in_stack_00000028 + 1) = 1;
            *(in_stack_00000028 + 2) = uVar6 & 1;
            *in_stack_00000028 = *(iVar10 + 0x154 + arg1);
            uVar8 = *(iVar10 + 0x154 + arg1);
            iVar10 = *(iVar10 + 0x14c + arg1);
            if (uVar8 == 0) {
                return 0;
            }
            if (iVar10 != *(iVar5 + 0x6558)) {
                section..text(iVar10,*(iVar5 + 0x6558),uVar8);
                return 0;
            }
            return 0;
        }
        *arg3 = 1;
        if (in_stack_00000028 != *(iVar5 + 0x6558)) {
            section..text(in_stack_00000028,*(iVar5 + 0x6558),8);
        }
        pcVar7 = *(iVar5 + 0x6558);
        if (*pcVar7 < '\0') {
            return 0;
        }
        if (*pcVar7 != '\0') {
            return 0;
        }
        cVar1 = pcVar7[1];
        if (cVar1 == '\x05') {
            piVar3 = *(arg1 + 0x138);
            if ((piVar3 != NULL) && (iVar5 = (**(*piVar3 + 0x48))(piVar3[1],*(pcVar7 + 2)), iVar5 == 0)) {
                (**(*piVar3 + 0xa0))(piVar3[1]);
            }
            goto code_r0x00011ed6;
        }
        if (cVar1 == '\t') {
            fcn.00011a44(arg1,*(pcVar7 + 2));
            return 0;
        }
        if (cVar1 != '\0') {
            return 0;
        }
    }
    else {
        if (uVar4 < 3) {
code_r0x00011ed6:
            *arg3 = 0;
            return 0;
        }
        if (uVar4 < 5) {
            uVar11 = *(uVar11 * 0x3e + 0x14c + arg1);
            *in_stack_00000028 = 0;
            *(in_stack_00000028 + 0xc) = uVar8 >> 1;
            in_stack_00000028[3] = uVar11;
            *arg3 = uVar6 & 1 | 2;
            if (uVar2 >> 0x1c == 0) {
                *(in_stack_00000028 + 1) = (-((puVar9[2] & 0xffffff) != 0) & 2) + 1;
            }
            else {
                *(in_stack_00000028 + 1) = 2;
            }
        }
        else {
            if (uVar4 != 5) goto code_r0x00011ed6;
            *arg3 = uVar6 & 1 | 2;
            *(in_stack_00000028 + 0xc) = uVar8 >> 1;
            *(in_stack_00000028 + 2) = uVar6 & 1;
            in_stack_00000028[3] = *puVar9;
            in_stack_00000028[3] = *(uVar11 * 0x3e + 0x14c + arg1);
            *in_stack_00000028 = *(uVar11 * 0x3e + 0x154 + arg1);
            if (uVar2 >> 0x1c == 0) {
                *(in_stack_00000028 + 1) = (-((puVar9[2] & 0xffffff) != 0) & 2) + 1;
                return 0;
            }
            puVar9[3] = puVar9[3] | 1;
            *arg3 = 0;
            uStack_38 = 0;
            uStack_34 = 1;
            *(in_stack_00000028 + 1) = 2;
            fcn.00017708(iVar5,&uStack_38);
            uStack_38 = 0;
            uStack_34 = 0;
            fcn.00017708(iVar5,&uStack_38);
        }
        pcVar7 = *(iVar5 + 0x6558);
    }
    (**(*piVar3 + 0x90))(piVar3[1],pcVar7);
    return 0;
}


/* fcn.00012ab8 @ 0x12ab8 */

ulong fcn.00012ab8(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iStackX_8;
    uint auStack_28 [2];
    ulong uStack_20;
    uint uStack_14;
    uint uStack_10;
    
    iVar2 = (**(*0x18f30 + 0x140))(0x187c0,0,&iStackX_8);
    if (-1 < iVar2) {
        (**(iStackX_8 + 0x28))();
    }
    auStack_28[0] = 0;
    uStack_10 = 2;
    *0xc00a1004 = 6;
    *(arg1 + 0x904) = 0;
    uStack_20 = *(arg1 + -0x60);
    uStack_14 = 4;
    *(arg1 + 0x140) = 0xa658086;
    *(arg1 + 0x904) = 1;
    iVar2 = fcn.000138b0(auStack_28,arg1 + 0x138);
    if (iVar2 == 0) {
        piVar1 = *(arg1 + 0x138);
        *(arg1 + 0x130) = piVar1[1];
        iVar2 = -0x7ffffffffffffff9;
        if (piVar1 != NULL) {
            iVar2 = (**(*piVar1 + 0x30))(piVar1[1]);
        }
        uVar3 = 0;
        if (iVar2 != 0) {
            uVar3 = 0x8000000000000007;
        }
    }
    else {
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.00013934 @ 0x13934 */

uint fcn.00013934(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    
    return *(CONCAT44(in_register_0000000c,arg1) + arg2);
}


/* fcn.000120d8 @ 0x120d8 */

ulong fcn.000120d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t arg1_00;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    unkbyte7 Var10;
    int iVar11;
    uint32_t uVar12;
    int *in_stack_00000030;
    uchar *in_stack_00000038;
    
    Var10 = arg4 >> 8;
    uVar8 = arg2;
    bVar4 = false;
    bVar3 = false;
    bVar5 = false;
    uVar9 = arg2 & 0xffffffff;
    iVar1 = *(*(arg1 + 0x138) + 8);
    uVar12 = *(iVar1 + 0x1038);
    do {
        if ((uVar8 == 0) || (bVar3)) {
            return 0;
        }
        iVar11 = 4;
        uVar6 = *uVar12;
        bVar3 = false;
        if ((**(iVar1 + 0x1038) & 1) == 0) {
            bVar4 = true;
            uVar7 = uVar6 >> 1 & 0x1f;
            uVar6 = uVar6 >> 6 & 0xf;
            bVar5 = true;
            if (uVar6 == 1) {
                bVar4 = bVar5;
                if (uVar7 < 2) {
                    fcn.00011c4c(arg1,uVar7,arg4,CONCAT71(Var10,1));
                }
                else {
                    fcn.00011f2c(arg1,uVar7,arg4,CONCAT71(Var10,1));
                }
            }
            else if (uVar6 == 3) {
                *arg4 = 0;
                goto code_r0x000122ea;
            }
            goto code_r0x000122d2;
        }
        piVar2 = *(arg1 + 0x138);
        uVar6 = uVar6 >> 8 & 0xf;
        arg1_00 = piVar2[1];
        if (uVar6 < 6) {
            if (uVar6 == 5) {
                *arg4 = 7;
code_r0x00012233:
                bVar3 = true;
                *in_stack_00000038 = 1;
                goto code_r0x000122d2;
            }
            if (uVar6 != 0) {
                if (uVar6 == 1) {
                    *(arg1 + 0x905) = 0x100;
                    if (*(arg1 + 0x917) == '\x01') {
                        fcn.00017324(arg1_00);
                        *(arg1 + 0x917) = 0;
                    }
                    fcn.000172d4(arg1_00);
                    (**(*piVar2 + 0x48))(piVar2[1],0);
                    *arg4 = 6;
                    bVar4 = bVar5;
                }
                else {
                    if (uVar6 != 2) {
                        if (uVar6 == 3) goto code_r0x000122d2;
                        if (uVar6 != 4) goto code_r0x00012266;
                        *arg4 = 8;
                        goto code_r0x000122ea;
                    }
                    fcn.000172ec(arg1_00);
                    (**(*piVar2 + 0x48))(piVar2[1],0);
                    *arg4 = 9;
                    *in_stack_00000030 = 4 - (*(*(arg1 + 0x130) + 0x14) != 4);
                    *(arg1 + 0x905) = 1;
                    bVar4 = bVar5;
                }
                goto code_r0x00012233;
            }
            *(arg1 + 0x917) = 1;
            *arg4 = 4;
code_r0x000122ea:
            bVar3 = true;
            *in_stack_00000038 = 1;
            uVar6 = uVar8;
        }
        else {
            if (uVar6 == 7) {
code_r0x000122d2:
                if (*arg4 != 0) goto code_r0x000122ea;
                uVar6 = uVar8;
            }
            else {
                if (uVar6 == 9) {
                    fcn.0001776c(arg1_00);
                    fcn.00017324(arg1_00);
                    bVar4 = bVar5;
                    goto code_r0x000122d2;
                }
                if ((uVar6 == 10) || (uVar6 == 0xb)) goto code_r0x000122d2;
                if (uVar6 == 0xc) {
                    iVar11 = 0xc;
                }
code_r0x00012266:
                bVar3 = false;
                *arg4 = 0;
                uVar6 = uVar9;
            }
            if (bVar4) goto code_r0x000122ea;
        }
        uVar7 = *(iVar1 + 0x1030);
        uVar12 = uVar12 + iVar11;
        *arg3 = *arg3 + iVar11;
        uVar8 = uVar6 - iVar11;
        uVar9 = uVar8;
        if (uVar7 + 0x800 <= uVar12) {
            uVar12 = uVar7;
        }
        *(iVar1 + 0x1038) = uVar12;
    } while( true );
}


/* fcn.00013960 @ 0x13960 */

void fcn.00013960(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    *(arg1 + arg2) = arg3;
    return;
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


/* fcn.0001164c @ 0x1164c */

int64_t fcn.0001164c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t arg2_00;
    int64_t iVar4;
    
    if ((((arg2 == 0) || (*(*arg2 + 0x11) == '\0')) || (*(***(arg2 + 8) + 4) == '\0')) ||
       (*(**(**(arg2 + 8))[1] + 4) < 2)) {
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        arg2_00 = fcn.00018568(0x10);
        if (arg2_00 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            iVar4 = fcn.0001141c(arg2,arg2_00);
            if (iVar4 < 0) {
                (**(*0x18f30 + 0x48))(arg2_00);
            }
            else {
                if (*(arg1 + 0xa0) != 0) {
                    fcn.00010eb4(*(arg1 + 0xa0));
                }
                *(arg1 + 0xa0) = arg2_00;
                *(arg1 + 0xa8) = ***(arg2_00 + 8);
                *(arg1 + 0xb0) = *(**(arg2_00 + 8) + 8);
                uVar1 = ***(**(arg2_00 + 8) + 8);
                *(arg1 + 0xd0) = 0;
                *(arg1 + 0xe0) = 0;
                *(arg1 + 0xb8) = uVar1;
                piVar2 = *(**(**(arg2_00 + 8) + 8) + 8);
                iVar3 = *piVar2;
                if (*(iVar3 + 2) < '\0') {
                    *(arg1 + 200) = iVar3;
                    *(arg1 + 0xd8) = *(*(**(**(arg2_00 + 8) + 8) + 8) + 8);
                }
                else {
                    *(arg1 + 200) = piVar2[1];
                    *(arg1 + 0xd8) = **(**(**(arg2_00 + 8) + 8) + 8);
                }
            }
        }
    }
    return iVar4;
}


/* fcn.00011524 @ 0x11524 */

int64_t fcn.00011524(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg1_00;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = fcn.00018568(0x12);
    *arg2 = iVar1;
    if (iVar1 != 0) {
        if (iVar1 != *arg1) {
            section..text(iVar1,*arg1,0x12);
        }
        iVar1 = fcn.00018568(*(*arg2 + 0x11) << 3);
        *(arg2 + 8) = iVar1;
        if (iVar1 != 0) {
            iVar1 = 0;
            uVar3 = 0;
            if (*(*arg2 + 0x11) != '\0') {
                do {
                    uVar2 = fcn.00018568(0x10);
                    *(*(arg2 + 8) + uVar3 * 8) = uVar2;
                    iVar1 = *(*(arg2 + 8) + uVar3 * 8);
                    if (iVar1 == 0) goto code_r0x00011564;
                    iVar1 = fcn.00011314(*(*(arg1 + 8) + uVar3 * 8),iVar1);
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(*arg2 + 0x11));
            }
            arg1_00 = fcn.00018568(6);
            *(arg2 + 0x10) = arg1_00;
            if (arg1_00 != 0) {
                if (arg1_00 != *(arg1 + 0x10)) {
                    section..text(arg1_00,*(arg1 + 0x10),6);
                }
                if (-1 < iVar1) {
                    return iVar1;
                }
                goto code_r0x0001161e;
            }
        }
    }
code_r0x00011564:
    iVar1 = -0x7ffffffffffffff7;
code_r0x0001161e:
    fcn.00010d34(arg2);
    return iVar1;
}


/* fcn.000138b0 @ 0x138b0 */

ulong fcn.000138b0(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    ulong *puVar3;
    
    puVar1 = fcn.00018568(0x10);
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        if (*arg1 < 1) {
            puVar3 = *arg1 * 0xc0 + 0x18a10;
        }
        else {
            puVar3 = NULL;
        }
        *puVar1 = puVar3;
        if (puVar3 == NULL) {
            uVar2 = 0x8000000000000002;
        }
        else {
            uVar2 = (**puVar3)(arg1,puVar1,puVar1 + 1);
            *arg2 = puVar1;
        }
    }
    return uVar2;
}


/* fcn.000126f0 @ 0x126f0 */

uint64_t fcn.000126f0(uint32_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x904) == '\0') {
        uVar2 = 0;
    }
    else if (iVar3 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        piVar1 = *(iVar3 + 0x138);
        iVar4 = -0x7ffffffffffffff9;
        if (piVar1 != NULL) {
            if (*piVar1 == 0) {
                iVar4 = -0x7ffffffffffffffe;
            }
            else {
                iVar4 = (**(*piVar1 + 8))(piVar1[1],1);
                (**(*0x18f30 + 0x48))(piVar1);
            }
        }
        *(iVar3 + 0x138) = 0;
        *(iVar3 + 0x130) = 0;
        *(iVar3 + 0x904) = 0;
        uVar2 = -(iVar4 != 0) & 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.000131f0 @ 0x131f0 */

ulong fcn.000131f0(uint32_t arg1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    bool bVar8;
    uint32_t uStack_28;
    uint32_t uStack_24;
    
    puVar5 = CONCAT44(in_register_0000000c,arg1);
    *0x18f10 = 0;
    uVar1 = *puVar5;
    if ((uVar1 & 0x60) == 0) {
        uVar2 = puVar5[1];
        if (uVar2 == 0) {
            if (((uVar1 < '\0') && (1 < *(puVar5 + 6))) && ((uVar1 & 0x1f) == 0)) {
                *0x18f10 = 2;
                puVar5 = *0x18f08;
                puVar5[0] = 1;
                puVar5[1] = 0;
                goto code_r0x000134ab;
            }
        }
        else if (uVar2 == 1) {
            if (*(puVar5 + 2) == 0) {
                bVar8 = (puVar5[4] & 0x80) != 0;
                uStack_28 = *(puVar5 + 4);
                if (bVar8) {
                    uStack_28 = *(puVar5 + 4) & 0xffffff7f;
                }
                uStack_24 = bVar8;
                if (*0x18f68 == NULL) goto code_r0x000134cf;
                (**(**0x18f68 + 0x80))((*0x18f68)[1],&uStack_28);
                goto code_r0x000134ab;
            }
        }
        else if (uVar2 == 5) {
            if ((uVar1 == 0) && (uVar1 = puVar5[2], uVar1 < 0x80)) {
                *0x18f7d = uVar1;
                if (*0x18f68 == NULL) goto code_r0x000134cf;
                iVar3 = (**(**0x18f68 + 0x48))((*0x18f68)[1],uVar1);
                if (-1 < iVar3) {
                    *0x18f79 = 5;
                }
                goto code_r0x000134ab;
            }
        }
        else if (uVar2 == 6) {
            if (uVar1 != 0x80) goto code_r0x000134c8;
            uVar1 = puVar5[3];
            uVar2 = puVar5[2];
            if (uVar1 == 1) {
                puVar6 = **0x18f60;
                *0x18f10 = *puVar6;
                if (*(puVar5 + 6) < *puVar6) {
                    *0x18f10 = *(puVar5 + 6);
                }
                if ((*0x18f10 != 0) && (*0x18f08 != puVar6)) {
                    section..text(*0x18f08,puVar6,*0x18f10);
                }
                goto code_r0x000134ab;
            }
            if (uVar1 == 2) {
                if (uVar2 < *(**0x18f60 + 0x11)) {
                    puVar6 = *((*0x18f60)[1] + 8 + uVar2 * 0x18);
                    uVar7 = *(*((*0x18f60)[1] + uVar2 * 0x18) + 2);
                    if (*(puVar5 + 6) < uVar7) {
                        uVar7 = *(puVar5 + 6);
                    }
                    if ((uVar7 != 0) && (*0x18f08 != puVar6)) {
code_r0x00013379:
                        section..text(*0x18f08,puVar6,uVar7);
                    }
code_r0x0001337e:
                    *0x18f10 = uVar7;
                    goto code_r0x000134ab;
                }
            }
            else {
                if (uVar1 == 3) {
                    fcn.00013130(*0x18f08,uVar2,*(puVar5 + 4),*(puVar5 + 6));
                    goto code_r0x000134ab;
                }
                if (uVar1 == 0xf) {
                    puVar6 = (*0x18f60)[3];
                    uVar7 = *(puVar6 + 2);
                    if (*(puVar5 + 6) < *(puVar6 + 2)) {
                        uVar7 = *(puVar5 + 6);
                    }
                    if ((uVar7 != 0) && (*0x18f08 != puVar6)) goto code_r0x00013379;
                    goto code_r0x0001337e;
                }
            }
        }
        else if (uVar2 == 8) {
            if (((uVar1 == 0x80) && (*(puVar5 + 6) != 0)) && (*0x18f71 != NULL)) {
                *0x18f10 = 1;
                **0x18f08 = *(**0x18f71 + 5);
                goto code_r0x000134ab;
            }
        }
        else if ((uVar2 == 9) && (uVar1 == 0)) {
            fcn.00012fa4(CONCAT71(puVar5 >> 8,puVar5[2]));
code_r0x000134ab:
            if (*0x18f10 != 0) {
                uVar4 = fcn.00012ddc(*0x18f68,0x18f08);
                return uVar4;
            }
        }
    }
    else if (*(*0x18f60 + 0x29) != NULL) {
        (**(*0x18f60 + 0x29))(puVar5,0x18f08);
        goto code_r0x000134ab;
    }
code_r0x000134c8:
code_r0x000134cf:
    uVar4 = 0x8000000000000007;
    if (*0x18f68 != NULL) {
        uVar4 = (**(**0x18f68 + 0xa0))((*0x18f68)[1]);
    }
    return uVar4;
}


/* fcn.00012fa4 @ 0x12fa4 */

uint64_t fcn.00012fa4(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t *piVar7;
    uint8_t uVar8;
    uint64_t uVar9;
    ulong uStack_68;
    ulong uStack_60;
    uchar auStack_58 [32];
    uchar auStack_38 [32];
    
    uVar9 = 0x8000000000000007;
    if ((arg1 != '\0') && (uVar6 = 0, *(**0x18f60 + 0x11) != 0)) {
        do {
            piVar1 = (*0x18f60)[1] + uVar6 * 0x18;
            if (*(*piVar1 + 5) == arg1) {
                uVar5 = 0;
                *0x18f71 = piVar1;
                if (*(*piVar1 + 4) != '\0') {
                    do {
                        uVar6 = 0;
                        piVar7 = uVar5 * 0x10 + piVar1[2];
                        if (*(*piVar7 + 4) != '\0') {
                            do {
                                piVar2 = *0x18f68;
                                puVar4 = uVar6 * 0x10 + piVar7[1];
                                uStack_68 = *puVar4;
                                uStack_60 = puVar4[1];
                                fcn.0001244c(auStack_58,&uStack_68);
                                if (((piVar2 != NULL) &&
                                    (iVar3 = (**(*piVar2 + 0x60))(piVar2[1],auStack_58), iVar3 == 0)) &&
                                   (fcn.0001244c(auStack_38,&uStack_68), *0x18f68 != NULL)) {
                                    iVar3 = (**(**0x18f68 + 0x68))((*0x18f68)[1],auStack_38);
                                    uVar9 = uVar9 & -(iVar3 != 0);
                                }
                                uVar8 = uVar6 + 1;
                                uVar6 = uVar8;
                            } while (uVar8 < *(*piVar7 + 4));
                        }
                        uVar5 = uVar5 + 1;
                    } while (uVar5 < *(*piVar1 + 4));
                    if ((uVar9 == 0) && (*(*0x18f60 + 0x21) != NULL)) {
                        (**(*0x18f60 + 0x21))(arg1 & 0xff);
                    }
                }
                *0x18f79 = 6;
                return uVar9;
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < *(**0x18f60 + 0x11));
    }
    return 0x8000000000000007;
}


/* fcn.00013130 @ 0x13130 */

ulong fcn.00013130(uint32_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    bool bVar1;
    uint in_register_0000000c;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint32_t *in_stack_00000028;
    
    bVar1 = false;
    if (arg2 == 0) {
        puVar4 = *(*0x18f60 + 0x10);
    }
    else {
        puVar4 = *(*0x18f60 + 0x10);
        uVar2 = *puVar4 - 2 >> 1;
        if (uVar2 == '\0') {
            return 0x8000000000000007;
        }
        uVar3 = uVar2 & 0xff;
        puVar5 = puVar4;
        do {
            puVar5 = puVar5 + 2;
            if (*puVar5 == arg3) {
                bVar1 = true;
            }
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
        if (!bVar1) {
            return 0x8000000000000007;
        }
        if (*(*0x18f60 + 0x20) <= arg2) {
            return 0x8000000000000007;
        }
        puVar4 = puVar4 + (arg2 & 0xffU) * 0x7e;
    }
    uVar2 = *puVar4;
    if (arg4 < *puVar4) {
        uVar2 = arg4;
    }
    if ((uVar2 != 0) && (CONCAT44(in_register_0000000c,arg1) != puVar4)) {
        section..text(CONCAT44(in_register_0000000c,arg1),puVar4,uVar2);
    }
    *in_stack_00000028 = uVar2;
    return 0;
}


/* fcn.00012ddc @ 0x12ddc */

ulong fcn.00012ddc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong uStack_58;
    uint uStack_50;
    uint uStack_3c;
    uint uStack_38;
    ulong uStack_18;
    
    fcn.0001244c(&uStack_3c,arg2 + 0xc);
    if (*(arg2 + 0xc) == 0) {
        uStack_3c = 0;
        uStack_38 = 1;
    }
    uStack_58 = *arg2;
    uStack_50 = *(arg2 + 8);
    uStack_18 = 0x12d90;
    uVar1 = 0x8000000000000007;
    if (arg1 != 0) {
        uVar1 = (**(*arg1 + 0xa8))(*(arg1 + 8),&uStack_58);
    }
    return uVar1;
}


/* fcn.00012ce0 @ 0x12ce0 */

void fcn.00012ce0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint auStack_28 [2];
    int64_t iStack_20;
    uint uStack_14;
    uint uStack_10;
    
    uVar2 = *0xc00a0010 & 0xffff0000 | *0xc00a0014 << 0x20;
    *(uVar2 + 0x80d8) = *(uVar2 + 0x80d8) | 0x1300000;
    uVar1 = 0;
    do {
        if ((*(uVar2 + 0x80dc) >> 0x1d & 1) == 0) break;
        (**(*0x18f30 + 0xf8))(100);
        uVar1 = uVar1 + 1;
    } while (uVar1 < 1000);
    auStack_28[0] = 0;
    uStack_10 = 2;
    uStack_14 = 4;
    iStack_20 = arg1;
    fcn.000138b0(auStack_28,arg2);
    return;
}


/* fcn.00012f00 @ 0x12f00 */

ulong fcn.00012f00(int64_t arg1)

{
    int64_t iVar1;
    
    if ((((((arg1 != 0) && (*arg1 != 0)) && (iVar1 = (**(*arg1 + 0x10))(*(arg1 + 8),1,0x12e64), iVar1 == 0)) &&
         ((*arg1 != 0 && (iVar1 = (**(*arg1 + 0x10))(*(arg1 + 8),2,0x12e90), iVar1 == 0)))) &&
        ((*arg1 != 0 && ((iVar1 = (**(*arg1 + 0x10))(*(arg1 + 8),0xd,0x12ec8), iVar1 == 0 && (*arg1 != 0)))))) &&
       (iVar1 = (**(*arg1 + 0x10))(*(arg1 + 8),0xe,0x12efc), iVar1 == 0)) {
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00013fd8 @ 0x13fd8 */

ulong fcn.00013fd8(uint32_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint in_register_0000000c;
    uint *puVar1;
    uint in_stack_00000028;
    uint in_stack_00000030;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    *puVar1 = in_stack_00000028;
    puVar1[1] = 0;
    puVar1[2] = in_stack_00000030;
    puVar1[3] = arg2 << 4;
    if (arg4 != 0) {
        puVar1[3] = puVar1[3] | arg4 << 2;
    }
    if (arg3 != 0) {
        puVar1[3] = puVar1[3] | arg3 << 1;
    }
    puVar1[3] = puVar1[3] | 0x401;
    return 0;
}


/* fcn.00014078 @ 0x14078 */

ulong fcn.00014078(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    int64_t iStackX_10;
    uint32_t in_stack_00000028;
    uint32_t uStack_20;
    
    iStackX_10 = CONCAT44(in_register_00000014,arg2);
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar1 = 0x8000000000000007;
    }
    else if (iStackX_10 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else if (in_stack_00000028 < 0x1000000) {
        fcn.00013fd8(arg2,arg3 & 0xffffffff,1,0);
        uVar1 = 0;
    }
    else {
        uStack_20 = 0;
        do {
            if (in_stack_00000028 < 0xf00001) {
                fcn.00013fd8(iStackX_10,arg3 & 0xffffffff,1,0);
                return 0;
            }
            fcn.00013fd8(iStackX_10,arg3 & 0xffffffff,0,1);
            in_stack_00000028 = in_stack_00000028 - 0xf00000;
            iStackX_10 = iStackX_10 + 0x10;
            uStack_20 = uStack_20 + 1;
        } while (uStack_20 < 0x20);
        uVar1 = 0x8000000000000009;
    }
    return uVar1;
}


/* fcn.00013cf4 @ 0x13cf4 */

ulong fcn.00013cf4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int iVar3;
    int iStack_18;
    
    iVar3 = arg2;
    iStack_18 = 5000;
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar2 = 0x8000000000000007;
    }
    else {
        arg1_00 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
        fcn.00013960(arg1_00,iVar3 * 0x10 + 0xc800,*arg4);
        fcn.00013960(arg1_00,iVar3 * 0x10 + 0xc804,*(arg4 + 4));
        fcn.00013960(arg1_00,iVar3 * 0x10 + 0xc808,*(arg4 + 8));
        fcn.00013960(arg1_00,iVar3 * 0x10 + 0xc80c,arg3 | 0x400);
        do {
            uVar1 = fcn.00013934(arg1_00,iVar3 * 0x10 + 0xc80c);
            if ((uVar1 & 0x400) == 0) break;
            (**(*0x18f30 + 0xf8))(1000);
            iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
        if (iStack_18 == 0) {
            uVar2 = 0x8000000000000007;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000185b4 @ 0x185b4 */

ulong * fcn.000185b4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    uint64_t uVar3;
    ulong *puVar4;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 0) {
        return puVar2;
    }
    uVar3 = arg2 & 7;
    puVar4 = puVar2;
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    return puVar2;
}


/* fcn.00013e20 @ 0x13e20 */

ulong fcn.00013e20(uint32_t arg1)

{
    int64_t arg1_00;
    uint32_t uVar1;
    ulong uVar2;
    uint32_t arg1_01;
    uint in_register_0000000c;
    int iStack_18;
    
    iStack_18 = 1000;
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar2 = 0x8000000000000007;
    }
    else {
        arg1_00 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
        arg1_01 = arg1_00;
        uVar1 = fcn.00013934(arg1_01,0xc714);
        fcn.00013960(arg1_00,0xc714,uVar1 | 0x40a);
        do {
            uVar1 = fcn.00013934(arg1_01,0xc714);
            if ((uVar1 & 0x400) == 0) break;
            (**(*0x18f30 + 0xf8))(1000);
            iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
        if (iStack_18 == 0) {
            uVar2 = 0x8000000000000007;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00014204 @ 0x14204 */

int64_t fcn.00014204(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint uStack_18;
    uint32_t uStack_14;
    uint uStack_10;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (iVar3 == 0) {
        iVar2 = -0x7ffffffffffffff9;
    }
    else if (*(iVar3 + 0x52d0) == 3) {
        iVar2 = 0;
    }
    else {
        *(iVar3 + 0x52d0) = 3;
        uVar1 = *(iVar3 + 0x5240);
        iVar2 = fcn.00014078(arg1,uVar1,2,*(iVar3 + 0x6558));
        if (iVar2 == 0) {
            uStack_18 = 0;
            uStack_10 = 0;
            uStack_14 = uVar1;
            iVar2 = fcn.00013cf4(arg1,0,6,&uStack_18);
            uVar1 = fcn.00013934(*(iVar3 + 0x20),0xc80c);
            *(iVar3 + 0x52c0) = (uVar1 & 0x7f0000) >> 0x10;
        }
    }
    return iVar2;
}


/* fcn.000139c8 @ 0x139c8 */

ulong fcn.000139c8(uint32_t arg1,uint32_t arg2)

{
    int iVar1;
    uint *puVar2;
    ulong uVar3;
    uint in_register_0000000c;
    uint in_register_00000014;
    
    puVar2 = CONCAT44(in_register_00000014,arg2);
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar3 = 0x8000000000000007;
    }
    else if (puVar2 == NULL) {
        uVar3 = 0x8000000000000002;
    }
    else {
        iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x14);
        if (iVar1 == 0) {
            *puVar2 = 0x40;
        }
        else if (iVar1 == 1) {
            *puVar2 = 0x40;
        }
        else if (iVar1 == 2) {
            *puVar2 = 8;
        }
        else if (iVar1 == 4) {
            *puVar2 = 0x200;
        }
        else {
            *puVar2 = 0;
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00013a6c @ 0x13a6c */

ulong fcn.00013a6c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int iVar1;
    uint *in_stack_00000028;
    ulong uStack_10;
    
    iVar1 = arg4;
    uStack_10 = 0;
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uStack_10 = 0x8000000000000007;
    }
    else {
        *in_stack_00000028 = 0;
        in_stack_00000028[1] = 0;
        in_stack_00000028[2] = 0;
        if (iVar1 == 1) {
            if (*(arg2 + 0x10) != 0) {
                in_stack_00000028[1] = 0x1000000;
            }
            if (*(arg2 + 0x18) != 0) {
                in_stack_00000028[1] = in_stack_00000028[1] | (*(arg2 + 0x18) + -1) * 0x10000;
            }
            in_stack_00000028[1] = in_stack_00000028[1] | *arg2 << 0x1a;
            in_stack_00000028[1] = in_stack_00000028[1] | *(arg2 + 4) << 0x19;
            in_stack_00000028[1] = in_stack_00000028[1] & 0xffffc0ff;
            in_stack_00000028[1] = in_stack_00000028[1] | 0x700;
            in_stack_00000028[1] = in_stack_00000028[1] & 0xffffffe0;
            in_stack_00000028[2] = in_stack_00000028[2] & 0xffc1ffff;
            if ((*arg2 != 0) && (*(arg2 + 4) != 0)) {
                in_stack_00000028[2] = in_stack_00000028[2] | *arg2 << 0x11;
            }
            in_stack_00000028[2] = in_stack_00000028[2] & 0xffffc007;
            in_stack_00000028[2] = in_stack_00000028[2] | *(arg2 + 0xc) << 3;
            in_stack_00000028[2] = in_stack_00000028[2] & 0xfc3fffff;
            in_stack_00000028[2] = in_stack_00000028[2] | *(arg2 + 0x14) << 0x16;
            in_stack_00000028[2] = in_stack_00000028[2] & 0xfffffff9;
            in_stack_00000028[2] = in_stack_00000028[2] | *(arg2 + 8) << 1;
            in_stack_00000028[2] = in_stack_00000028[2] & 0x3fffffff;
            in_stack_00000028[2] = in_stack_00000028[2] | arg3 << 0x1e;
        }
        else if (iVar1 == 2) {
            in_stack_00000028[2] = 1;
        }
        else if ((iVar1 != 8) && (iVar1 != 9)) {
            uStack_10 = 0x8000000000000002;
        }
    }
    return uStack_10;
}


/* fcn.00014330 @ 0x14330 */

ulong fcn.00014330(uint32_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (puVar2 == NULL) {
        uVar1 = 0x8000000000000007;
    }
    else {
        *(puVar2 + 0x677c) = (arg2 & 0x1e00000) >> 0x15;
        *(puVar2 + 0xcef) = (arg2 & 0xf0000) >> 0x10;
        if (puVar2[0xcfa] != 0) {
            puVar2[0xcf0] = *puVar2;
            *(puVar2 + 0xcf4) = *(puVar2 + 0xcef);
            *(puVar2 + 0xcf1) = *(puVar2 + 0x677c);
            *(puVar2 + 0xcf6) = (arg2 & 0x100000U) != 0;
            (*puVar2[0xcfa])(puVar2 + 0xcf0);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00016a64 @ 0x16a64 */

int64_t fcn.00016a64(uint32_t arg1)

{
    ulong uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    int64_t iStack_38;
    uint uStack_20;
    uint32_t uStack_1c;
    uint uStack_18;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (iVar4 == 0) {
        iVar3 = -0x7ffffffffffffff9;
    }
    else {
        uVar1 = *(iVar4 + 0x20);
        if ((*(*(iVar4 + 0x5240) + 0xc) & 1) == 0) {
            *(iVar4 + 0x5248) = 0;
            *(iVar4 + 0x524c) = 0;
            uVar2 = *(iVar4 + 0x5240);
            iVar3 = fcn.00014078(arg1,uVar2,4,*(iVar4 + 0x6558));
            if (iVar3 == 0) {
                uStack_20 = 0;
                uStack_18 = 0;
                uStack_1c = uVar2;
                iVar3 = fcn.00013cf4(arg1,0,6,&uStack_20);
                uVar2 = fcn.00013934(uVar1,0xc80c);
                *(iVar4 + 0x52c0) = (uVar2 & 0x7f0000) >> 0x10;
                *(iVar4 + 0x52d0) = 7;
            }
        }
        else {
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00014c78 @ 0x14c78 */

ulong fcn.00014c78(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    ulong *puVar6;
    
    puVar6 = CONCAT44(in_register_0000000c,arg1);
    if (puVar6 == NULL) {
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar4 = arg2;
        iVar5 = uVar4 * 0x98;
        *(puVar6 + uVar4 * 0x13 + 0xa58) = 0;
        iVar1 = puVar6[uVar4 * 0x13 + 0xa4d];
        *(puVar6 + uVar4 * 0x13 + 0xa5b) = 0;
        if ((iVar1 == 0) || (puVar6 + uVar4 * 0x13 + 0xa4e == NULL)) {
            uVar3 = 0x8000000000000002;
        }
        else {
            *(puVar6 + iVar5 + 0x527c) = *(puVar6 + uVar4 * 0x13 + 0xa4f);
            uVar2 = *(iVar1 + 8) & 0xffffff;
            if (uVar2 <= *(puVar6 + uVar4 * 0x13 + 0xa4f)) {
                *(puVar6 + iVar5 + 0x527c) = *(puVar6 + iVar5 + 0x527c) - uVar2;
            }
            if (puVar6[uVar4 * 0x13 + 0xa56] != 0) {
                (*puVar6[uVar4 * 0x13 + 0xa56])(*puVar6,puVar6 + uVar4 * 0x13 + 0xa4e);
            }
            if (puVar6[0xd04] != 0) {
                puVar6[0xcf0] = *puVar6;
                *(puVar6 + 0x678c) = arg2 >> 1;
                *(puVar6 + 0xcf3) = arg2 & 1;
                *(puVar6 + 0x679c) = *(puVar6 + uVar4 * 0x13 + 0xa4a);
                puVar6[0xcf5] = *puVar6[uVar4 * 0x13 + 0xa4d];
                (*puVar6[0xd04])(puVar6 + 0xcf0);
            }
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.000149e0 @ 0x149e0 */

ulong fcn.000149e0(uint32_t arg1,int arg2)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint in_register_0000000c;
    ulong *puVar3;
    ulong uStack_20;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    uStack_20 = 0;
    if (puVar3 == NULL) {
        uStack_20 = 0x8000000000000007;
    }
    else {
        puVar2 = arg2 * 0x20 * 0x10 + puVar3[0xa48];
        *(puVar3 + arg2 * 0x13 + 0xa58) = 0;
        *(puVar3 + arg2 * 0x13 + 0xa5a) = 1;
        uVar1 = (puVar2[3] & 0x3f0) >> 4;
        if (uVar1 == 2) {
            if (puVar3[0xd02] != 0) {
                puVar3[0xcf0] = *puVar3;
                puVar3[0xcf5] = puVar3[0xcab];
                uStack_20 = (*puVar3[0xd02])(puVar3 + 0xcf0);
            }
            if ((*puVar3[0xcab] & 0x80) == 0) {
                fcn.00014204(arg1);
            }
        }
        else if (uVar1 == 4) {
            if (puVar3[0xd04] != 0) {
                puVar3[0xcf0] = *puVar3;
                *(puVar3 + 0x678c) = arg2 >> 1;
                *(puVar3 + 0xcf3) = arg2 & 1;
                puVar3[0xcf5] = *puVar2;
                (*puVar3[0xd04])(puVar3 + 0xcf0);
            }
            uStack_20 = fcn.00014204(arg1);
        }
        else if (uVar1 == 5) {
            if ((puVar2[2] >> 0x1c == 2) || ((puVar2[2] & 0xffffff) != 0)) {
                fcn.00014204(arg1);
            }
            if (puVar3[0xd04] != 0) {
                puVar3[0xcf0] = *puVar3;
                *(puVar3 + 0x678c) = arg2 >> 1;
                *(puVar3 + 0xcf3) = arg2 & 1;
                puVar3[0xcf5] = *puVar2;
                (*puVar3[0xd04])(puVar3 + 0xcf0);
            }
        }
    }
    return uStack_20;
}


/* fcn.00014904 @ 0x14904 */

ulong fcn.00014904(uint32_t arg1,uint32_t arg2)

{
    return 0;
}


/* fcn.00014910 @ 0x14910 */

ulong fcn.00014910(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    int iStack_18;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    iStack_18 = 3;
    if (puVar2 == NULL) {
        uVar1 = 0x8000000000000007;
    }
    else {
        if ((arg3 & 0x1000U) == 0) {
            if ((arg3 & 0x2000U) != 0) {
                iStack_18 = 7;
            }
        }
        else {
            iStack_18 = 6;
        }
        if ((arg2 == 0) && (iStack_18 == 7)) {
            fcn.00016a64(arg1);
        }
        if (puVar2[0xd03] != 0) {
            puVar2[0xcf0] = *puVar2;
            *(puVar2 + 0x6794) = iStack_18;
            (*puVar2[0xd03])(puVar2 + 0xcf0);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00014840 @ 0x14840 */

ulong fcn.00014840(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar2 = 0x8000000000000007;
    }
    else {
        uVar1 = (*arg2 & 0xf00) >> 8;
        *arg3 = 4;
        if (uVar1 == 1) {
            fcn.00014534(arg1);
        }
        else if (uVar1 == 2) {
            fcn.000145d4(arg1);
        }
        else if (uVar1 == 3) {
            fcn.00014330(arg1,*arg2);
        }
        else if (uVar1 == 0xc) {
            *arg3 = 0xc;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00014e04 @ 0x14e04 */

ulong fcn.00014e04(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t arg2_00;
    uint32_t uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar3 = 0x8000000000000007;
    }
    else {
        uVar1 = *arg2;
        *arg3 = 4;
        arg2_00 = (uVar1 & 0x3e) >> 1;
        uVar2 = (uVar1 & 0x3c0) >> 6;
        if (uVar2 == 1) {
            if (arg2_00 < 2) {
                fcn.000149e0(arg1,arg2_00);
            }
            else {
                fcn.00014c78(arg1,arg2_00);
            }
        }
        else if (uVar2 == 3) {
            if (arg2_00 < 2) {
                fcn.00014910(arg1,arg2_00,uVar1 & 0xf000);
            }
            else {
                fcn.00014904(arg1,arg2_00);
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00018594 @ 0x18594 */

void fcn.00018594(void)

{
    //WARNING: Could not recover jumptable at 0x0001859b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x18f30 + 0x48))();
    return;
}


/* fcn.00014ee0 @ 0x14ee0 */

ulong fcn.00014ee0(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t uStackX_10;
    int iStack_18;
    uint32_t uStack_14;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iStack_18 = 0;
    if (iVar2 == 0) {
        uVar1 = 0x8000000000000007;
    }
    else if (*(iVar2 + 0x1038) == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        uStack_14 = *(iVar2 + 0x1038);
        uStackX_10 = arg2;
        while (uStackX_10 != 0) {
            if ((**(iVar2 + 0x1038) & 1) == 0) {
                fcn.00014e04(arg1,*(iVar2 + 0x1038),&iStack_18);
            }
            else {
                fcn.00014840(arg1,*(iVar2 + 0x1038),&iStack_18);
            }
            uStackX_10 = uStackX_10 - iStack_18;
            *arg3 = *arg3 + iStack_18;
            if (uStack_14 + iStack_18 < *(iVar2 + 0x1030) + 0x800) {
                uStack_14 = uStack_14 + iStack_18;
            }
            else {
                uStack_14 = *(iVar2 + 0x1030);
            }
            *(iVar2 + 0x1038) = uStack_14;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00015cc4 @ 0x15cc4 */

ulong fcn.00015cc4(uint32_t arg1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint32_t uStack_28;
    uint32_t auStack_20 [2];
    int64_t iStack_18;
    int64_t iStack_10;
    
    iStack_18 = CONCAT44(in_register_0000000c,arg1);
    if (iStack_18 == 0) {
        uVar2 = 0x8000000000000007;
    }
    else if (*(iStack_18 + 0x6828) == '\x01') {
        uVar2 = 0;
    }
    else {
        iStack_10 = *(iStack_18 + 0x20);
        *(iStack_18 + 0x6828) = 1;
        for (uStack_28 = 0; uStack_28 < *(iStack_18 + 0x2c); uStack_28 = uStack_28 + 1) {
            uVar1 = fcn.00013934(iStack_10,uStack_28 * 0x10 + 0xc40c);
            auStack_20[0] = 0;
            if ((uVar1 & 0xffff) != 0) {
                fcn.00014ee0(iStack_18,uVar1 & 0xffff,auStack_20);
                fcn.00013960(iStack_10,uStack_28 * 0x10 + 0xc40c,auStack_20[0]);
            }
        }
        *(iStack_18 + 0x6828) = 0;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00014424 @ 0x14424 */

int64_t fcn.00014424(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 == 0) {
        iVar1 = -0x7ffffffffffffff9;
    }
    else {
        *(iVar2 + 0x52d8 + arg2 * 0x98) = 0;
        uStack_20 = 0;
        uStack_1c = 0;
        uStack_18 = 0;
        if (*(iVar2 + 0x52c0 + arg2 * 0x98) == 0) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.00013cf4(arg1,arg2,*(iVar2 + 0x52c0 + arg2 * 0x98) << 0x10 | 0x808,&uStack_20);
            if (iVar1 == 0) {
                *(iVar2 + 0x52c0 + arg2 * 0x98) = 0;
                fcn.000185b4(arg2 * 0x200 + *(iVar2 + 0x5240),0x200);
            }
        }
    }
    return iVar1;
}


/* fcn.000185a0 @ 0x185a0 */

ulong * fcn.000185a0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    ulong *puVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    if ((arg3 != 0) && (puVar2 != arg2)) {
        puVar3 = arg2 + -1 + arg3;
        if ((arg2 < puVar2) && (puVar2 <= puVar3)) {
            puVar4 = puVar2 + arg3 + -1;
            uVar6 = 1;
            uVar5 = arg3;
        }
        else {
            uVar5 = arg3 & 7;
            puVar3 = arg2;
            puVar4 = puVar2;
            for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
                *puVar4 = *puVar3;
                puVar3 = puVar3 + 1;
                puVar4 = puVar4 + 1;
            }
        }
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar4 = *puVar3;
            puVar3 = puVar3 + uVar6 * -2 + 1;
            puVar4 = puVar4 + uVar6 * -2 + 1;
        }
        return puVar2;
    }
    return puVar2;
}


/* fcn.00013ed8 @ 0x13ed8 */

ulong fcn.00013ed8(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint32_t uVar1;
    ulong uVar2;
    uint32_t arg1_01;
    uint in_register_0000000c;
    int64_t iVar3;
    int iStack_18;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    iStack_18 = 1000;
    if (iVar3 == 0) {
        uVar2 = 0x8000000000000007;
    }
    else {
        arg1_00 = *(iVar3 + 0x20);
        arg1_01 = arg1_00;
        uVar1 = fcn.00013934(arg1_01,0xc710);
        fcn.00013960(arg1_00,0xc710,uVar1 & 0xffffffe0 | 0x20);
        uVar1 = fcn.00013934(arg1_01,0xc714);
        fcn.00013960(arg1_00,0xc714,uVar1 | 0x409);
        do {
            uVar1 = fcn.00013934(arg1_01,0xc714);
            if ((uVar1 & 0x400) == 0) break;
            (**(*0x18f30 + 0xf8))(1000);
            iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
        if (iStack_18 == 0) {
            uVar2 = 0x8000000000000007;
        }
        else {
            *(iVar3 + 0x52d0 + (arg2 & 0xffffffffU) * 0x98) = 1;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.0001712c @ 0x1712c */

ulong fcn.0001712c(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    uint32_t uVar1;
    ulong uVar2;
    uint32_t arg1_01;
    uint in_register_0000000c;
    uint32_t uStack_28;
    int iStack_24;
    
    iStack_24 = 1000;
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar2 = 0x8000000000000007;
    }
    else {
        arg1_00 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
        uStack_28 = arg2 >> 1;
        arg1_01 = arg1_00;
        uVar1 = fcn.00013934(arg1_01,0xc710);
        if ((arg2 & 1U) != 0) {
            uStack_28 = uStack_28 | 0x20;
        }
        uStack_28 = uVar1 & 0xffffffc0 | uStack_28;
        uVar1 = fcn.00013934(arg1_01,0xc714);
        fcn.00013960(arg1_00,0xc710,uStack_28);
        fcn.00013960(arg1_00,0xc714,uVar1 & 0xfffffe00 | 0x409);
        do {
            uVar1 = fcn.00013934(arg1_01,0xc714);
            if ((uVar1 & 0x400) == 0) break;
            (**(*0x18f30 + 0xf8))(1000);
            iStack_24 = iStack_24 + -1;
        } while (iStack_24 != 0);
        if (iStack_24 == 0) {
            uVar2 = 0x8000000000000007;
        }
        else {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000186e8 @ 0x186e8 */

uint64_t fcn.000186e8(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00018714 @ 0x18714 */

uint64_t fcn.00018714(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00018514 @ 0x18514 */

void fcn.00018514(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000177e8(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000177b4 @ 0x177b4 */

uchar * fcn.000177b4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


