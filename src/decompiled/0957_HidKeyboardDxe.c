// decompiled by r2ghidra: 0957_HidKeyboardDxe.pe32
// functions: 18

/* entry0 @ 0x10398 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x133d0 = *(arg2 + 0x58);
    *0x133c8 = *(arg2 + 0x60);
    *0x11d30 = arg1;
    *0x11d38 = arg1;
    *0x133c0 = arg2;
    (**(*0x133c8 + 0x148))(0x11d38,0x11cf0,0x11d10,0x11d00,0x13310,0x11ca0,0x13328,0);
    return;
}


/* fcn.00010418 @ 0x10418 */

ulong fcn.00010418(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x40);
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar1 == *(CONCAT44(in_register_0000000c,arg1) + 0x41)) {
        return 0x8000000000000006;
    }
    *arg2 = *(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2);
    *(arg2 + 1) = *(iVar2 + 1 + *(iVar2 + 0x40) * 2);
    *(iVar2 + 0x40) = *(iVar2 + 0x40) + 1U & 0x1f;
    return 0;
}


/* fcn.00010454 @ 0x10454 */

void fcn.00010454(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uchar auStackX_8 [32];
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((*(iVar1 + 0x41) + 1U & 0x1f) == *(iVar1 + 0x40)) {
        fcn.00010418(arg1,auStackX_8);
    }
    *(iVar1 + *(iVar1 + 0x41) * 2) = *arg2;
    *(iVar1 + 1 + *(iVar1 + 0x41) * 2) = *(arg2 + 1);
    *(iVar1 + 0x41) = *(iVar1 + 0x41) + 1U & 0x1f;
    return;
}


/* fcn.000104e8 @ 0x104e8 */

void fcn.000104e8(int64_t arg1)

{
    if (*(arg1 + 0x90) != 0) {
        (**(*0x133c8 + 0x70))();
        *(arg1 + 0x90) = 0;
    }
    return;
}


/* fcn.00010300 @ 0x10300 */

char * fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    uchar in_ZF;
    
    do {
        pcVar1 = arg1;
        if (arg2 == NULL) break;
        arg2 = arg2 + -1;
        pcVar1 = arg1 + 1;
        in_ZF = arg3 == *arg1;
        arg1 = pcVar1;
    } while (!in_ZF);
    pcVar1 = pcVar1 + -1;
    if (!in_ZF) {
        pcVar1 = arg2;
    }
    return pcVar1;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
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
    
    //[00] -r-x section size 6688 named .text
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


/* fcn.00010674 @ 0x10674 */

bool fcn.00010674(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    bool bVar2;
    
    *arg3 = 0;
    *(arg3 + 4) = 0;
    bVar1 = *(*arg2 * 0x18 + 0x11d60) != 0;
    if (bVar1) {
        *(arg1 + 0xac) = *(arg1 + 0xac) | 0x80000000;
        *arg3 = *arg3 | 0x80000000;
    }
    bVar2 = *(*arg2 * 0x18 + 0x11d64) != '\0';
    if (bVar2) {
        *(arg1 + 0xb0) = *(arg1 + 0xb0) | 0x80;
        *(arg3 + 4) = *(arg3 + 4) | 0x80;
    }
    if (*(arg1 + 0xab) != '\0') {
        *(arg1 + 0xb0) = *(arg1 + 0xb0) | 0x40;
        *(arg3 + 4) = *(arg3 + 4) | 0x40;
    }
    return bVar2 || bVar1;
}


/* fcn.000106ec @ 0x106ec */

void fcn.000106ec(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint in_register_00000014;
    
    uVar1 = *CONCAT44(in_register_00000014,arg2);
    if (uVar1 < 0xe2) {
        if (uVar1 != 0xe1) {
            if (uVar1 == 0x39) {
                if (*(CONCAT44(in_register_00000014,arg2) + 1) == '\0') {
                    return;
                }
                *(arg1 + 0xb0) = *(arg1 + 0xb0) ^ 4;
                *(arg3 + 4) = *(arg1 + 0xb0);
                uVar1 = *(arg1 + 0xaa);
                uVar3 = 2;
            }
            else {
                if (uVar1 == 0x46) {
                    if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
                        uVar2 = 0x200;
code_r0x0001075b:
                        *(arg1 + 0xac) = *(arg1 + 0xac) | uVar2;
                        *arg3 = *arg3 | uVar2;
                        return;
                    }
                    uVar2 = 0xfffffdff;
                    goto code_r0x00010903;
                }
                if (uVar1 == 0x47) {
                    if (*(CONCAT44(in_register_00000014,arg2) + 1) == '\0') {
                        return;
                    }
                    *(arg1 + 0xb0) = *(arg1 + 0xb0) ^ 1;
                    *(arg3 + 4) = *(arg1 + 0xb0);
                    uVar1 = *(arg1 + 0xaa);
                    uVar3 = 4;
                }
                else {
                    if (uVar1 != 0x53) {
                        if (uVar1 == 0x65) {
                            if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
                                uVar2 = 0x100;
                                goto code_r0x0001075b;
                            }
                            uVar2 = 0xfffffeff;
                        }
                        else {
                            if (uVar1 != 0xe0) {
                                return;
                            }
                            if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
                                *(arg1 + 0xac) = *(arg1 + 0xac) | 8;
                                *arg3 = *arg3 | 8;
                                return;
                            }
                            uVar2 = 0xfffffff7;
                        }
                        goto code_r0x00010903;
                    }
                    if (*(CONCAT44(in_register_00000014,arg2) + 1) == '\0') {
                        return;
                    }
                    *(arg1 + 0xb0) = *(arg1 + 0xb0) ^ 2;
                    *(arg3 + 4) = *(arg1 + 0xb0);
                    uVar1 = *(arg1 + 0xaa);
                    uVar3 = 1;
                }
            }
            *(arg1 + 0xaa) = uVar3 ^ uVar1;
            return;
        }
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            *(arg1 + 0xac) = *(arg1 + 0xac) | 2;
            *arg3 = *arg3 | 2;
            return;
        }
        uVar2 = 0xfffffffd;
    }
    else if (uVar1 == 0xe2) {
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            *(arg1 + 0xac) = *(arg1 + 0xac) | 0x20;
            *arg3 = *arg3 | 0x20;
            return;
        }
        uVar2 = 0xffffffdf;
    }
    else if (uVar1 == 0xe3) {
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            uVar2 = 0x80;
            goto code_r0x0001075b;
        }
        uVar2 = 0xffffff7f;
    }
    else if (uVar1 == 0xe4) {
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            *(arg1 + 0xac) = *(arg1 + 0xac) | 4;
            *arg3 = *arg3 | 4;
            return;
        }
        uVar2 = 0xfffffffb;
    }
    else if (uVar1 == 0xe5) {
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            *(arg1 + 0xac) = *(arg1 + 0xac) | 1;
            *arg3 = *arg3 | 1;
            return;
        }
        uVar2 = 0xfffffffe;
    }
    else if (uVar1 == 0xe6) {
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            *(arg1 + 0xac) = *(arg1 + 0xac) | 0x10;
            *arg3 = *arg3 | 0x10;
            return;
        }
        uVar2 = 0xffffffef;
    }
    else {
        if (uVar1 != 0xe7) {
            return;
        }
        if (*(CONCAT44(in_register_00000014,arg2) + 1) != '\0') {
            *(arg1 + 0xac) = *(arg1 + 0xac) | 0x40;
            *arg3 = *arg3 | 0x40;
            return;
        }
        uVar2 = 0xffffffbf;
    }
code_r0x00010903:
    *(arg1 + 0xac) = *(arg1 + 0xac) & uVar2;
    *arg3 = *arg3 & uVar2;
    return;
}


/* fcn.00010518 @ 0x10518 */

ulong fcn.00010518(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    ushort uVar4;
    uint64_t uVar5;
    ulong uVar6;
    uint in_R8;
    
    uVar5 = *arg2;
    uVar3 = *(arg1 + 0xac);
    uVar1 = *(arg1 + 0xb0);
    *CONCAT44(in_R8,arg3) = *(uVar5 * 0x18 + 0x11d52);
    *(CONCAT44(in_R8,arg3) + 2) = *(uVar5 * 0x18 + 0x11d54);
    if ((*(uVar5 * 0x18 + 0x11d52) == 8) && ((*(arg1 + 0xac) & 0xc) != 0 && (*(arg1 + 0xac) & 0x30) != 0)) {
        (**(*0x133c8 + 0x68))(*(arg1 + 0xa0));
        return 0;
    }
    if ((uVar3 & 3) != 0) {
        *(CONCAT44(in_R8,arg3) + 2) = *(uVar5 * 0x18 + 0x11d56);
    }
    if ((uVar1 & 4) != 0) {
        iVar2 = *(CONCAT44(in_R8,arg3) + 2);
        if (iVar2 - 0x61U < 0x1a) {
            uVar4 = *(uVar5 * 0x18 + 0x11d56);
        }
        else {
            if (0x19 < iVar2 - 0x41U) goto code_r0x000105c3;
            uVar4 = *(uVar5 * 0x18 + 0x11d54);
        }
        *(CONCAT44(in_R8,arg3) + 2) = uVar4;
    }
code_r0x000105c3:
    if ((*CONCAT44(in_R8,arg3) != 0) && (*(CONCAT44(in_R8,arg3) + 2) != 0)) {
        if ((uVar1 & 2) == 0) {
            *(CONCAT44(in_R8,arg3) + 2) = 0;
        }
        else {
            *CONCAT44(in_R8,arg3) = 0;
        }
    }
    if (((uVar1 & 2) == 0) && (*(uVar5 * 0x18 + 0x11d58) == 0x2d)) {
        *(CONCAT44(in_R8,arg3) + 2) = 0;
    }
    uVar6 = 0;
    if (((*CONCAT44(in_R8,arg3) == 0) && (*(CONCAT44(in_R8,arg3) + 2) == 0)) && (uVar6 = 0, *(arg1 + 0xab) == '\0'))
    {
        uVar6 = 0x8000000000000006;
    }
    return uVar6;
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


/* fcn.00010910 @ 0x10910 */

uint64_t fcn.00010910(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint64_t in_RAX;
    uint in_register_0000000c;
    uint in_register_00000014;
    
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (CONCAT44(in_register_00000014,arg2) != 0)) {
        uVar2 = *CONCAT44(in_register_0000000c,arg1);
        if ((uVar2 == 0) &&
           (((*(CONCAT44(in_register_0000000c,arg1) + 2) == 0 && (*(CONCAT44(in_register_0000000c,arg1) + 4) == 0)) &&
            (in_RAX = 0, *(CONCAT44(in_register_0000000c,arg1) + 8) == '\0')))) {
code_r0x00010938:
            return CONCAT71(in_RAX >> 8,1);
        }
        in_RAX = uVar2;
        if ((uVar2 == *CONCAT44(in_register_00000014,arg2)) &&
           (uVar2 = *(CONCAT44(in_register_00000014,arg2) + 2), in_RAX = uVar2,
           *(CONCAT44(in_register_0000000c,arg1) + 2) == uVar2)) {
            uVar3 = *(CONCAT44(in_register_0000000c,arg1) + 4);
            in_RAX = uVar3;
            if ((uVar3 == 0) || (uVar3 == *(CONCAT44(in_register_00000014,arg2) + 4))) {
                cVar1 = *(CONCAT44(in_register_0000000c,arg1) + 8);
                in_RAX = CONCAT31(uVar3 >> 8,cVar1);
                if ((cVar1 == '\0') || (cVar1 == *(CONCAT44(in_register_00000014,arg2) + 8))) goto code_r0x00010938;
            }
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00011b5c @ 0x11b5c */

void fcn.00011b5c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011b2c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00011b2c @ 0x11b2c */

ulong fcn.00011b2c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x133c8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00011448 @ 0x11448 */

void fcn.00011448(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_10;
    ulong in_stack_00000028;
    
    *(arg2 + 0xf8) = in_stack_00000028;
    *arg2 = 0x4b444948;
    *(arg2 + 8) = 0x10ce0;
    *(arg2 + 0x10) = 0x10d50;
    iStackX_10 = arg1;
    (**(*0x133c8 + 0x50))(0x100,0x10,0x10fc4,arg2,arg2 + 0x18);
    *(arg2 + 0x28) = 0x10e28;
    iVar1 = arg2 + 0x80;
    *(arg2 + 0x20) = 0x10df4;
    *(arg2 + 0x38) = 0x10f28;
    *(arg2 + 0x40) = 0x110a0;
    *(arg2 + 0x48) = 0x111d8;
    *iVar1 = iVar1;
    *(arg2 + 0x88) = iVar1;
    (**(*0x133c8 + 0x50))(0x100,0x10,0x11064,arg2,arg2 + 0x30);
    *(arg2 + 0x68) = 0x10f28;
    *(arg2 + 0x58) = 0x11244;
    *(arg2 + 0x50) = 0x10df4;
    iVar1 = *0x133c8;
    *(arg2 + 0x70) = 0x110a0;
    *(arg2 + 0x78) = 0x111d8;
    (**(iVar1 + 0x50))(0x100,0x10,0x11064,arg2,arg2 + 0x60);
    (**(*0x133c8 + 0x148))(&iStackX_10,0x11cd0,arg2 + 8,0x11cc0,arg2 + 0x20,0x11ce0,arg2 + 0x50,0);
    return;
}


/* fcn.00011c1c @ 0x11c1c */

int64_t fcn.00011c1c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int *piVar4;
    int64_t *piVar5;
    
    if (arg1 != 0) {
        uVar3 = 0;
        if (*(arg1 + 0x2c) != 0) {
            piVar5 = arg1 + 0x30;
            do {
                iVar1 = *piVar5;
                piVar4 = *(iVar1 + 0x38);
                if (*(piVar4 + 2) == (arg2 >> 0x10 & 0xffff)) {
                    uVar2 = 0;
                    if (*(iVar1 + 0x30) != 0) {
                        do {
                            if (*piVar4 == arg2) {
                                return iVar1;
                            }
                            uVar2 = uVar2 + 1;
                            piVar4 = piVar4 + 1;
                        } while (uVar2 < *(iVar1 + 0x30));
                    }
                }
                uVar3 = uVar3 + 1;
                piVar5 = piVar5 + 1;
            } while (uVar3 < *(arg1 + 0x2c));
        }
    }
    return 0;
}


/* fcn.00010968 @ 0x10968 */

void fcn.00010968(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    if (arg1 != 0) {
        if (*(arg1 + 0x18) != 0) {
            (**(*0x133c8 + 0x70))();
        }
        if (*(arg1 + 0x30) != 0) {
            (**(*0x133c8 + 0x70))();
        }
        if (*(arg1 + 0x60) != 0) {
            (**(*0x133c8 + 0x70))();
        }
        if (*(arg1 + 0x98) != 0) {
            (**(*0x133c8 + 0x70))();
        }
        if (*(arg1 + 0xa0) != 0) {
            (**(*0x133c8 + 0x70))();
        }
        fcn.000104e8(arg1);
        while (piVar2 = *(arg1 + 0x80), piVar2 != arg1 + 0x80) {
            (**(*0x133c8 + 0x70))(piVar2[-1]);
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            (**(*0x133c8 + 0x48))(piVar2 + -5);
        }
        piVar2 = arg1 + 0x138;
        iVar1 = 3;
        do {
            if (*piVar2 != 0) {
                (**(*0x133c8 + 0x48))();
                *piVar2 = 0;
            }
            piVar2 = piVar2 + 1;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    return;
}


/* fcn.00011b88 @ 0x11b88 */

ulong fcn.00011b88(int64_t arg1,int64_t arg2)

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
code_r0x00011be8:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00011be8;
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


