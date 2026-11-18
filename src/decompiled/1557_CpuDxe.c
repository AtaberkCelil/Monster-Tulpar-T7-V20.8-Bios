// decompiled by r2ghidra: 1557_CpuDxe.pe32
// functions: 163

/* entry0 @ 0x111b4 */

void entry0(int64_t arg1)

{
    uint32_t in_EDX;
    uint in_register_00000014;
    
    fcn.000111d0(arg1,CONCAT44(in_register_00000014,in_EDX));
    fcn.00011b80(arg1,in_EDX);
    return;
}


/* fcn.000111d0 @ 0x111d0 */

ulong fcn.000111d0(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    ulong noname_0_00;
    uint64_t uVar9;
    int64_t *piVar10;
    bool bVar11;
    
    *0x1bc60 = *(arg1 + 0x60);
    *0x1bc58 = arg1;
    fcn.00012ff0();
    noname_0_00 = 0x1aff8;
    iVar4 = fcn.00013020(0x1aff8);
    if (iVar4 == 0) {
        uVar9 = fcn.000111b0();
        fcn.00010440();
        uVar2 = in(0x1808);
        iVar4 = fcn.00010400(noname_0_00,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            fcn.00010490();
        }
        iVar5 = fcn.00010400(uVar8,0x1808);
        if ((uVar9 >> 9 & 1) == 0) {
            fcn.00010440();
        }
        else {
            fcn.000103d0();
        }
        arg1 = *0x1bc58;
        *0x1bc78 = (iVar5 - iVar4) * 0x2685;
    }
    else {
        *0x1bc78 = *(iVar4 + 0x18);
    }
    if (((arg1 != 0) && (iVar4 = fcn.00013020(0x1ae30), iVar4 != 0)) && (iVar4 != -0x18)) {
        cVar1 = *(iVar4 + 0x1a);
        if (cVar1 == '\x03') {
            *0x1b008 = 0x2580;
        }
        else if (cVar1 == '\x04') {
            *0x1b008 = 0x4b00;
        }
        else if (cVar1 == '\x06') {
            *0x1b008 = 0xe100;
        }
        else {
            *0x1b008 = 0x1c200;
        }
        bVar11 = *(iVar4 + 0x1b) != '\0';
        *0x1bc81 = 1;
        *0x1bc80 = 1;
        uVar7 = bVar11 | 2;
        if (*(iVar4 + 0x1c) == '\0') {
            uVar7 = bVar11;
        }
        uVar6 = uVar7 | 8;
        if (*(iVar4 + 0x1d) == '\0') {
            uVar6 = uVar7;
        }
        uVar7 = uVar6 | 0x10;
        if (*(iVar4 + 0x1e) == '\0') {
            uVar7 = uVar6;
        }
        *0x1b00c = uVar7 | 0x20;
        if (*(iVar4 + 0x1f) == '\0') {
            *0x1b00c = uVar7;
        }
    }
    uVar9 = 0;
    if (*(*0x1bc58 + 0x68) != 0) {
        piVar10 = *(*0x1bc58 + 0x70);
        do {
            if ((*0x1ae10 == *piVar10) && (*0x1ae18 == piVar10[1])) {
                *0x1bc88 = (*(*0x1bc58 + 0x70))[uVar9 * 3 + 2];
                return 0;
            }
            uVar9 = uVar9 + 1;
            piVar10 = piVar10 + 3;
        } while (uVar9 < *(*0x1bc58 + 0x68));
    }
    *0x1bc88 = 0;
    return 0x800000000000000e;
}


/* fcn.00011b80 @ 0x11b80 */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h

ulong fcn.00011b80(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t *puVar7;
    uint in_register_00000014;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int64_t var_77h;
    int64_t var_7fh;
    ushort uStack_c8;
    uint64_t uStack_c6;
    uchar auStack_b8 [8];
    uint64_t uStack_b0;
    int64_t iStack_a8;
    uint8_t uStack_a0;
    uint32_t uStack_78;
    int64_t var_69h;
    int64_t var_59h;
    uint32_t var_51h;
    uint32_t var_49h;
    int8_t var_41h;
    int64_t var_19h;
    int32_t var_11h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    fcn.00011f80(&uStack_b0);
    if ((iStack_a8 != 0) && ((uStack_a0 & 2) != 0)) {
        cVar1 = fcn.00011f14();
        if (cVar1 == '\0') {
            uStackX_10 = fcn.000103c0();
            uStackX_10 = uStackX_10 & 0xfffffffffffeffff;
            fcn.00010470(uStackX_10);
        }
        fcn.00012854(1);
        cVar1 = fcn.00011f14();
        if (cVar1 == '\0') {
            uStackX_10 = fcn.000103c0();
            uStackX_10 = uStackX_10 | 0x10000;
            fcn.00010470(uStackX_10);
        }
    }
    fcn.000104d0();
    fcn.00010440();
    uStackX_10 = 0xffffffff;
    (**(*0x1bc60 + 0x28))(1,6,1,&uStackX_10);
    uStack_c6 = uStackX_10;
    if (uStackX_10 != 0x1af70) {
        fcn.00010300(uStackX_10,0x1af70,0x48);
    }
    uStack_c6 = uStack_c6 & 0xffffffff;
    uStack_c8 = 0x47;
    fcn.000104a0(&uStack_c8);
    fcn.000102c0(0x38);
    fcn.000102cc(0x30);
    iVar3 = fcn.00012f90(0x1ade0,&uStackX_10);
    uVar4 = 0;
    if ((iVar3 == 0) && (uStackX_10 != 0)) {
        uVar4 = uStackX_10;
    }
    fcn.00015890(uVar4);
    (**(*0x1bc60 + 0x148))(0x1bc28,110000,0x1aed0,0);
    *0x1be88 = 1;
    cVar1 = fcn.00015830();
    if (cVar1 != '\0') {
        fcn.0001174c();
    }
    iVar2 = fcn.000103c0();
    uVar4 = fcn.00010450();
    if ((iVar2 < 0) && ((uVar4 & 0x20) != 0)) {
        fcn.00012650();
    }
    *0x1be88 = 0;
    uVar4 = fcn.0001313c();
    uStackX_20 = uVar4;
    iVar3 = (**(*0x1bc88 + 0x48))(&uStackX_10,&iStackX_18);
    if (-1 < iVar3) {
        uVar11 = 0;
        if (uStackX_10 != 0) {
            iVar3 = 0;
            uVar9 = uStackX_10;
            do {
                iVar2 = *(iVar3 + 0x20 + iStackX_18);
                if ((iVar2 != 3) || ((*(iVar3 + 0x10 + iStackX_18) & 1) == 0)) {
                    uVar12 = *(iVar3 + iStackX_18);
                    uVar8 = uVar12;
                    if (uVar12 < uVar4) {
                        uVar8 = uVar4;
                    }
                    uVar12 = *(iVar3 + 8 + iStackX_18) + uVar12;
                    if (uVar4 + 0x1000 < uVar12) {
                        uVar12 = uVar4 + 0x1000;
                    }
                    if (uVar8 < uVar12) {
                        if (iVar2 == 0) {
                            iVar5 = (**(*0x1bc88 + 0x18))(3,uVar8,uVar12 - uVar8,1);
                            uVar9 = uStackX_10;
                        }
                        else {
                            iVar5 = -0x7ffffffffffffffe;
                        }
                        if (iVar5 < 0) break;
                    }
                }
                uVar11 = uVar11 + 1;
                iVar3 = iVar3 + 0x38;
            } while (uVar11 < uVar9);
        }
        (**(*0x1bc60 + 0x48))(iStackX_18);
    }
    (**(*0x1bc88 + 0x20))(2,3,0,0x1000,&uStackX_20,arg1,0);
    uVar6 = (**(*0x1bc60 + 0x170))(0x200,0x10,0x11b78,0,0x1ad50,auStack_b8);
    fcn.000179fc();
    fcn.00018204(&uStackX_10,&iStackX_18);
    uVar4 = uStackX_10;
    *0x1afb8 = uStackX_10;
    iVar3 = fcn.00013020(0x1ad70);
    if (iVar3 == 0) {
        iVar3 = fcn.00013020(0x1ad80);
        if (iVar3 == 0) goto code_r0x00011eda;
        uVar11 = 1;
        uStack_78 = fcn.000133b4();
        puVar10 = &uStack_78;
        var_69h._1_4_ = *(iVar3 + 0x18);
        uVar4 = *0x1afb8;
    }
    else {
        uVar11 = *(iVar3 + 0x18);
        puVar10 = iVar3 + 0x20;
    }
    uVar9 = 0;
    if (uVar4 != 0) {
        do {
            fcn.00017e6c(uVar9,&uStack_b0,&uStackX_10);
            if (uVar11 != 0) {
                puVar7 = puVar10;
                uVar4 = uVar11;
                do {
                    if (uStack_b0 == *puVar7) {
                        uStackX_10 = CONCAT44(uStackX_10._4_4_,puVar7[2]);
                    }
                    puVar7 = puVar7 + 0x10;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            if (uStackX_10 != 0) {
                fcn.00012cb8();
            }
            uVar9 = uVar9 + 1;
        } while (uVar9 < *0x1afb8);
    }
code_r0x00011eda:
    (**(*0x1bc60 + 0x148))(0x1bc50,0x1ad30,0x1afc0,0);
    return uVar6;
}


/* fcn.00015880 @ 0x15880 */

void fcn.00015880(uint32_t param_1,int64_t param_2,int64_t param_3)

{
    fcn.00015df8(param_1,param_2,param_3);
    return;
}


/* fcn.00015df8 @ 0x15df8 */

//WARNING: Removing unreachable block (ram,0x00015e84)

void fcn.00015df8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int iVar4;
    uint uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t in_R9;
    uint8_t uVar9;
    bool bVar10;
    uint64_t uStackX_18;
    int64_t var_38h;
    uint32_t var_40h;
    
    iVar3 = *0x1be58;
    iVar2 = *0x1be50;
    iVar8 = CONCAT44(in_register_0000000c,arg1);
    if (iVar8 == 0x1d) {
        iVar8 = 0x1d;
    }
    iVar7 = iVar8 * 0x58;
    iVar4 = *(iVar7 + 0xc + *0x1be50);
    iVar6 = arg2;
    if (iVar4 == 1) {
        *(arg2 + 0x358) = (1 << (iVar8 & 0x1f) & 0x20227d00U) != 0;
        *(arg2 + 0x360) = *(iVar7 + 0x10 + iVar2);
    }
    else if (iVar4 == 2) {
        while( true ) {
            LOCK();
            bVar10 = *(iVar7 + iVar2) == 1;
            if (bVar10) {
                *(iVar7 + iVar2) = 2;
            }
            UNLOCK();
            if (bVar10) {
                uVar5 = fcn.000133b4();
                *(iVar7 + 8 + iVar2) = uVar5;
                iVar3 = *0x1be50;
                *(iVar7 + 0x18 + *0x1be50) = *(arg2 + 0x2d0);
                *(iVar7 + 0x20 + iVar3) = *(arg2 + 0x2f0);
                *(iVar7 + 0x28 + iVar3) = *(arg2 + 0x268);
                *(iVar7 + 0x30 + iVar3) = *(arg2 + 0x2c8);
                *(iVar7 + 0x38 + iVar3) = *(arg2 + 0x2a0);
                *(iVar7 + 0x40 + iVar3) = *arg2;
                uStackX_18 = *(arg2 + 0x268) & 0xfffffffffffffdff;
                *(arg2 + 0x268) = uStackX_18;
                *(arg2 + 0x2a0) = iVar3 + 0x48 + iVar7;
                *(arg2 + 0x358) = (1 << (iVar8 & 0x1f) & 0x20227d00U) != 0;
                *(arg2 + 0x360) = *(iVar7 + 0x10 + iVar2);
                return;
            }
            iVar4 = fcn.000133b4();
            iVar6 = *0x1be50;
            if (*(iVar7 + 8 + iVar2) == iVar4) break;
            fcn.00010490();
        }
        *(arg2 + 0x2d0) = *(iVar7 + 0x18 + *0x1be50);
        *(arg2 + 0x2f0) = *(iVar7 + 0x20 + iVar6);
        *(arg2 + 0x268) = *(iVar7 + 0x28 + iVar6);
        *(arg2 + 0x2c8) = *(iVar7 + 0x30 + iVar6);
        *(arg2 + 0x2a0) = *(iVar7 + 0x38 + iVar6);
        *arg2 = *(iVar7 + 0x40 + iVar6);
        *(iVar7 + iVar2) = 1;
    }
    else if (iVar4 != -1) {
        do {
            fcn.00010490();
        } while( true );
    }
    if ((iVar3 == 0) || (pcVar1 = *(iVar3 + iVar8 * 8), pcVar1 == NULL)) {
        if (iVar8 < 0x20) {
            while( true ) {
                LOCK();
                bVar10 = *0x1be48 == 1;
                if (bVar10) {
                    *0x1be48 = 2;
                }
                UNLOCK();
                if (bVar10) break;
                fcn.00010490();
            }
            uVar9 = 0x22;
            if (*0x1bc80 != '\0') {
                uVar9 = *0x1b00c;
            }
            if ((uVar9 & 2) != 0) {
                fcn.00012bd8(2,iVar6,arg3);
            }
            if ((uVar9 & 0x10) != 0) {
                fcn.0001a914();
            }
            fcn.00015ac4(iVar8,arg2);
            fcn.000161f8(0x1b670,arg2,arg3,in_R9);
            *0x1be48 = 1;
            if (*(iVar7 + 0xc + iVar2) != 1) {
                do {
                    fcn.00010490();
                } while( true );
            }
        }
    }
    else {
        (*pcVar1)(iVar8,arg2);
    }
    return;
}


/* fcn.00012ff0 @ 0x12ff0 */

int64_t fcn.00012ff0(void)

{
    if (*0x1bc70 == 0) {
        fcn.00012f90(0x1adf0,0x1bc70);
    }
    return *0x1bc70;
}


/* fcn.00012f90 @ 0x12f90 */

ulong fcn.00012f90(uint32_t arg1,uint32_t *arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x1bc58;
    uVar4 = 0;
    arg2[0] = 0;
    arg2[1] = 0;
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


/* fcn.00013020 @ 0x13020 */

void fcn.00013020(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00012ff0();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001304e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001304e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000111b0 @ 0x111b0 */

uint64_t fcn.000111b0(void)

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


/* fcn.00010440 @ 0x10440 */

void fcn.00010440(void)

{
    return;
}


/* fcn.00010400 @ 0x10400 */

uint64_t fcn.00010400(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010492 @ 0x10492 */

void fcn.00010492(void)

{
    return;
}


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(void)

{
    return;
}


/* fcn.000103e0 @ 0x103e0 */

void fcn.000103e0(void)

{
    return;
}


/* fcn.000103f0 @ 0x103f0 */

void fcn.000103f0(void)

{
    return;
}


/* fcn.000130cc @ 0x130cc */

int64_t fcn.000130cc(int64_t arg1,int64_t arg2)

{
    fcn.0001306c((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.0001306c @ 0x1306c */

void fcn.0001306c(int64_t arg1)

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
            fcn.00010490();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00015830 @ 0x15830 */

uint64_t fcn.00015830(void)

{
    ulong uVar1;
    uint64_t uVar2;
    uint32_t uStackX_8;
    
    uVar2 = fcn.00010410(1,NULL,0,0);
    if ((uStackX_8 & 0x1000) == 0) {
        uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT71(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.00013a6c @ 0x13a6c */

uint64_t fcn.00013a6c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iStackX_8;
    int64_t iStackX_18;
    uchar auStack_508 [528];
    uint32_t auStack_2f8 [188];
    
    uVar1 = rdmsr(0x2ff);
    uVar3 = uVar1;
    if ((uVar3 >> 0xb & 1) == 0) {
        return 0;
    }
    if ((arg2 < 0x100000) && ((uVar3 >> 10 & 1) != 0)) {
        iVar8 = 0;
        uVar5 = 0;
        do {
            uVar7 = *(uVar5 + 0x1b064);
            if ((uVar7 <= arg2) && (arg2 < uVar7 + *(uVar5 + 0x1b068) * 8)) {
                uVar2 = rdmsr(*(iVar8 * 0xc + 0x1b060));
                return uVar2 >> (((arg2 - uVar7) / *(uVar5 + 0x1b068) & 7) << 3) & 0xff;
            }
            iVar8 = iVar8 + 1;
            uVar5 = uVar5 + 0xc;
        } while (uVar5 < 0x84);
    }
    uVar5 = rdmsr(0xfe);
    uVar7 = uVar5 & 0xff;
    iStackX_8 = arg1;
    fcn.00013904(0xfe,uVar7,auStack_508);
    fcn.000139e8(&iStackX_18,&iStackX_8);
    fcn.00013948(auStack_508,uVar5 & 0xff,iStackX_18,iStackX_8);
    uVar4 = 7;
    if (uVar7 != 0) {
        puVar6 = auStack_2f8;
        do {
            if ((((*(puVar6 + -2) != 0) && (*(puVar6 + -4) <= arg2)) && (arg2 < *(puVar6 + -2) + *(puVar6 + -4))) &&
               ((uVar4 == 7 || (((uVar4 != *puVar6 && (uVar4 != 0)) && ((uVar4 != 4 || (*puVar6 != 6)))))))) {
                uVar4 = *puVar6;
            }
            puVar6 = puVar6 + 6;
            uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
        if (uVar4 != 7) goto code_r0x00013ba3;
    }
    uVar4 = uVar3 & 7;
code_r0x00013ba3:
    return uVar4;
}


/* fcn.00015694 @ 0x15694 */

void fcn.00015694(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong auStackX_8 [4];
    int64_t iStack_4028;
    int64_t iStack_4020;
    uint uStack_4018;
    uchar auStack_4008 [16392];
    
    uStack_4018 = arg4;
    auStackX_8[0] = 0x4000;
    iStack_4028 = arg2;
    iStack_4020 = arg3;
    fcn.00014f5c(arg1,auStack_4008,auStackX_8,&iStack_4028);
    return;
}


/* fcn.00014f5c @ 0x14f5c */

//WARNING: Type propagation algorithm not settling

int64_t fcn.00014f5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    bool bVar2;
    char cVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uint64_t *puVar7;
    uint32_t uVar8;
    uint64_t *puVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int iVar13;
    uint64_t uVar14;
    int64_t iVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    char *pcVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    uint32_t uVar23;
    uint *puVar24;
    uint32_t uStackX_8;
    int64_t iStack_f78;
    char cStack_f70;
    uint32_t uStack_f68;
    uint64_t uStack_f60;
    uint64_t uStack_f58;
    uint64_t uStack_f50;
    char acStack_f48 [32];
    uint64_t auStack_f28 [12];
    uint64_t auStack_ec8 [12];
    uint64_t auStack_e68 [2];
    int aiStack_e58 [188];
    uint64_t auStack_b68 [96];
    ulong uStack_868;
    int64_t iStack_860;
    uint32_t uStack_858;
    uchar auStack_238 [512];
    
    iVar6 = 0;
    fcn.000139e8(&iStack_f78,&uStack_f60);
    fcn.00010360(acStack_f48,0x20,0);
    uVar23 = 0;
    bVar2 = false;
    cVar3 = fcn.00015830();
    iVar15 = iStack_f78;
    if (cVar3 == '\0') {
        return -0x7ffffffffffffffd;
    }
    uVar14 = 0;
    do {
        iVar17 = *(arg4 + 8 + uVar14 * 0x18);
        if (iVar17 == 0) {
            return -0x7ffffffffffffffe;
        }
        uVar19 = *(arg4 + uVar14 * 0x18);
        if ((~uStack_f60 & uVar19) != 0) {
            return -0x7ffffffffffffffd;
        }
        uVar19 = iVar17 + uVar19;
        if (((~uStack_f60 & uVar19) != 0) && (uVar19 != iStack_f78 + 1U)) {
            return -0x7ffffffffffffffd;
        }
        uVar8 = *(arg4 + 0x10 + uVar14 * 0x18);
        if ((1 < uVar8) && (2 < uVar8 - 4)) {
            return -0x7ffffffffffffffe;
        }
        if (0x100000 < uVar19) {
            bVar2 = true;
        }
        uVar8 = uVar14 + 1;
        uVar14 = uVar8;
    } while (uVar8 == 0);
    if (bVar2) {
        uVar14 = rdmsr(0xfe);
        uVar19 = uVar14 & 0xff;
        uVar23 = uVar14;
        fcn.00013904(0xfe,uVar19,auStack_238);
        uVar18 = uVar14;
        fcn.00013948(auStack_238,uVar19,iStack_f78,uStack_f60);
        uVar1 = rdmsr(0x2ff);
        uStack_868 = 0;
        iStack_860 = iStack_f78 + 1;
        iStack_f78 = 1;
        uVar8 = uVar1 & 7;
        uStack_858 = uVar8;
        fcn.00014a90(auStack_b68,uVar18,&uStack_868,0x42);
        iVar6 = fcn.00013be8(&uStack_868,0x42,&iStack_f78,0);
        bVar2 = false;
        uVar14 = 0;
        do {
            uVar21 = *(arg4 + uVar14 * 0x18);
            if (uVar21 < 0x100000) {
                if (0x100000 - uVar21 < *(arg4 + 8 + uVar14 * 0x18)) {
                    uVar21 = 0x100000;
                    goto code_r0x0001514a;
                }
            }
            else {
code_r0x0001514a:
                iVar6 = fcn.00013be8(&uStack_868,0x42,&iStack_f78,uVar21);
                if (iVar6 == -0x7fffffffffffffec) {
                    iVar6 = 0;
                }
                else {
                    if (iVar6 == -0x7ffffffffffffff7) {
                        return -0x7ffffffffffffff7;
                    }
                    bVar2 = true;
                }
            }
            uVar16 = uVar14 + 1;
            uVar14 = uVar16;
        } while (uVar16 == 0);
        if (bVar2) {
            uVar4 = fcn.0001a0d8(iVar15);
            iVar6 = fcn.00014c10(uVar8,1LL << (uVar4 & 0x3f),&uStack_868,iStack_f78);
            if (iVar6 < 0) {
                return iVar6;
            }
            uStackX_8 = arg1;
            uVar14 = 0;
            if (uStackX_8 != 0) {
                do {
                    iVar13 = uVar14;
                    if ((auStack_e68[uVar14 * 3] == 0) && (auStack_e68[uVar14 * 3 + 1] == 0x100000)) {
                        uStackX_8 = uStackX_8 - 1;
                        if (((uStackX_8 - iVar13) * 3 != 0) &&
                           (auStack_e68 + uVar14 * 3 != auStack_e68 + (iVar13 + 1) * 3)) {
                            fcn.00010300(auStack_e68 + uVar14 * 3,auStack_e68 + (iVar13 + 1) * 3,
                                         (uStackX_8 - iVar13) * 0x18);
                        }
                        break;
                    }
                    uVar14 = iVar13 + 1U;
                } while (iVar13 + 1U < uStackX_8);
            }
            if (uVar18 < uStackX_8) {
                return -0x7ffffffffffffff7;
            }
            if (uVar18 != 0) {
                pcVar20 = acStack_f48;
                puVar9 = auStack_b68 + 2;
                uVar14 = uVar19;
                do {
                    uVar21 = puVar9[-1];
                    *pcVar20 = '\0';
                    if (uVar21 != 0) {
                        uVar11 = 0;
                        if (uStackX_8 != 0) {
                            do {
                                if (((puVar9[-2] == auStack_e68[uVar11 * 3]) && (uVar21 == auStack_e68[uVar11 * 3 + 1]))
                                   && (*puVar9 == aiStack_e58[uVar11 * 6])) break;
                                uVar8 = uVar11 + 1;
                                uVar11 = uVar8;
                            } while (uVar8 < uStackX_8);
                        }
                        if (uVar11 == uStackX_8) {
                            puVar9[-1] = 0;
                            *pcVar20 = '\x01';
                        }
                        else {
                            auStack_e68[uVar11 * 3 + 1] = 0;
                        }
                    }
                    puVar9 = puVar9 + 3;
                    pcVar20 = pcVar20 + 1;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            uVar14 = 0;
            uVar21 = 0;
            if (uStackX_8 != 0) {
                puVar9 = auStack_e68 + 1;
                do {
                    if (*puVar9 != 0) {
                        if (uVar14 < uVar19) {
                            puVar7 = auStack_b68 + uVar14 * 3 + 1;
                            do {
                                if (*puVar7 == 0) break;
                                uVar8 = uVar14 + 1;
                                uVar14 = uVar8;
                                puVar7 = puVar7 + 3;
                            } while (uVar8 < uVar19);
                        }
                        if (auStack_b68 + uVar14 * 3 != auStack_e68 + uVar21 * 3) {
                            fcn.00010300(auStack_b68 + uVar14 * 3,auStack_e68 + uVar21 * 3,0x18);
                        }
                        uVar19 = uVar23;
                        acStack_f48[uVar14] = '\x01';
                    }
                    uVar8 = uVar21 + 1;
                    uVar21 = uVar8;
                    puVar9 = puVar9 + 3;
                } while (uVar8 < uStackX_8);
            }
        }
    }
    fcn.00010340(auStack_f28,0x58);
    fcn.00010340(auStack_ec8,0x58);
    uVar14 = 0;
    iVar15 = 0xb;
    uStack_f68 = 0;
    puVar24 = 0x1b060;
    do {
        uVar19 = *(arg4 + uVar14 * 0x18);
        if (uVar19 < 0x100000) {
            uVar8 = *(arg4 + 0x10 + uVar14 * 0x18);
            uVar21 = 0xffffffff;
            uVar14 = *(arg4 + 8 + uVar14 * 0x18);
            iStack_f78 = CONCAT44(iStack_f78._4_4_,uVar8);
            do {
                if (uVar14 == 0) break;
                uVar18 = uVar21 + 1;
                uVar21 = uVar18;
                if (10 < uVar18) {
                    return -0x7ffffffffffffffd;
                }
                puVar10 = uVar21 * 0xc + 0x1b068;
                do {
                    if ((puVar10[-1] <= uVar19) && (uVar19 < puVar10[-1] + *puVar10 * 8)) break;
                    uVar18 = uVar21 + 1;
                    uVar21 = uVar18;
                    puVar10 = puVar10 + 3;
                } while (uVar18 < 0xb);
                if (10 < uVar21) {
                    return -0x7ffffffffffffffd;
                }
                uVar18 = *(uVar21 * 0xc + 0x1b068);
                uVar11 = uVar18;
                uVar16 = uVar19 - *(uVar21 * 0xc + 0x1b064);
                uVar5 = uVar16 / uVar18;
                if (uVar16 % uVar18 != 0) {
                    return -0x7ffffffffffffffd;
                }
                uVar12 = (8 - uVar5) * uVar11;
                if (uVar14 < uVar12) {
                    if ((uVar14 & 0xffffffff) % uVar11 != 0) {
                        return -0x7ffffffffffffffd;
                    }
                    iVar13 = (8 - (uVar14 & 0xffffffff) / uVar11) - uVar5;
                    uVar12 = uVar14;
                }
                else {
                    iVar13 = 0;
                }
                uVar22 = uVar8 * 0x101010101010101;
                uVar11 = 0xffffffffffffffff;
                if (uVar5 != 0) {
                    uVar4 = uVar5 << 3;
                    uVar11 = -1LL << (uVar4 & 0x3f);
                    uVar22 = uVar22 & uVar22 << (uVar4 & 0x3f);
                }
                if (iVar13 != 0) {
                    uVar4 = iVar13 << 3;
                    uVar11 = uVar11 & uVar11 >> (uVar4 & 0x3f);
                    uVar22 = uVar22 & uVar22 >> (uVar4 & 0x3f);
                }
                auStack_f28[uVar21] = auStack_f28[uVar21] | uVar11;
                uVar14 = uVar14 - uVar12;
                uVar19 = uVar19 + uVar12;
                auStack_ec8[uVar21] = ~uVar11 & auStack_ec8[uVar21] | uVar22;
            } while (uVar19 < 0x100000);
            uVar14 = uStack_f68;
            iVar6 = 0;
        }
        uStack_f68 = uVar14 + 1;
        uVar14 = uStack_f68;
        if (uStack_f68 != 0) {
            bVar2 = false;
            iVar17 = 0;
            do {
                if (*(auStack_f28 + iVar17) != 0) {
                    if (!bVar2) {
                        fcn.0001388c(&iStack_f78);
                        bVar2 = true;
                    }
                    uVar14 = rdmsr(*puVar24);
                    wrmsr(*puVar24,uVar14 & ~*(auStack_f28 + iVar17) | *(auStack_ec8 + iVar17));
                }
                iVar17 = iVar17 + 8;
                puVar24 = puVar24 + 3;
                iVar15 = iVar15 + -1;
            } while (iVar15 != 0);
            if (uVar23 != 0) {
                pcVar20 = acStack_f48;
                iVar13 = 0x201;
                puVar9 = auStack_b68;
                uVar14 = uVar23;
                do {
                    if (*pcVar20 != '\0') {
                        if (puVar9[1] == 0) {
                            uStack_f58 = 0;
                            uStack_f50 = 0;
                        }
                        else {
                            uStack_f58 = *puVar9 & uStack_f60 | puVar9[2];
                            uStack_f50 = ~(puVar9[1] - 1) & uStack_f60 | 0x800;
                        }
                        if (!bVar2) {
                            fcn.0001388c(&iStack_f78);
                            bVar2 = true;
                        }
                        wrmsr(iVar13 + -1,uStack_f58);
                        wrmsr(iVar13,uStack_f50);
                    }
                    iVar13 = iVar13 + 2;
                    pcVar20 = pcVar20 + 1;
                    puVar9 = puVar9 + 3;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            if (bVar2) {
                uVar14 = rdmsr(0x2ff);
                wrmsr(0x2ff,(uVar14 >> 0x20) << 0x20 | uVar14 & 0xffffffff | 0xc00);
                fcn.000102f0(0x2ff,uVar14 >> 0x20);
                fcn.00011010();
                fcn.00011050(iStack_f78);
                if (cStack_f70 == '\0') {
                    fcn.00010440();
                }
                else {
                    fcn.000103d0();
                }
            }
            return iVar6;
        }
    } while( true );
}


/* fcn.000156d4 @ 0x156d4 */

int64_t fcn.000156d4(int64_t arg1)

{
    ulong uVar1;
    uint64_t uVar2;
    char cVar3;
    ulong *puVar4;
    uint *puVar5;
    int64_t iVar6;
    
    cVar3 = fcn.00015830();
    if (cVar3 != '\0') {
        puVar5 = 0x1b060;
        iVar6 = 0xb;
        puVar4 = arg1;
        do {
            uVar1 = rdmsr(*puVar5);
            puVar5 = puVar5 + 3;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        uVar2 = rdmsr(0xfe);
        fcn.00013904(0xfe,uVar2 & 0xff,arg1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(arg1 + 600) = uVar1;
    }
    return arg1;
}


/* fcn.00013904 @ 0x13904 */

int64_t fcn.00013904(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *puVar2;
    int iVar3;
    uint64_t uVar4;
    
    if (arg1 != 0) {
        uVar4 = arg1 & 0xffffffff;
        iVar3 = 0x201;
        puVar2 = arg2;
        do {
            uVar1 = rdmsr(iVar3 + -1);
            *puVar2 = uVar1;
            uVar1 = rdmsr(iVar3);
            iVar3 = iVar3 + 2;
            puVar2[1] = uVar1;
            uVar4 = uVar4 - 1;
            puVar2 = puVar2 + 2;
        } while (uVar4 != 0);
    }
    return arg2;
}


/* fcn.000125e0 @ 0x125e0 */

int64_t fcn.000125e0(int64_t arg1,int64_t arg2)

{
    int32_t unaff_EBX;
    int64_t iVar1;
    int64_t in_R8;
    int64_t in_R9;
    char in_stack_00000010;
    unkbyte7 in_stack_00000011;
    int64_t in_stack_00000018;
    int64_t in_stack_00000020;
    
    if ((arg2 & 0xfffU) == 0) {
        iVar1 = fcn.000122bc(arg1,arg2,in_R8,in_R9,unaff_EBX,CONCAT71(in_stack_00000011,in_stack_00000010),
                             in_stack_00000018,in_stack_00000020);
        if (((-1 < iVar1) && (arg1 == 0)) && (in_stack_00000010 != '\0')) {
            fcn.000102f0();
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
    }
    return iVar1;
}


/* fcn.00010410 @ 0x10410 */

uint64_t fcn.00010410(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t *in_stack_00000028;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != NULL) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(int64_t arg1,int64_t arg2)

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


/* fcn.00011608 @ 0x11608 */

ulong fcn.00011608(int64_t arg1)

{
    uint32_t uVar1;
    
    uVar1 = arg1 & 0xff;
    if (arg1 == '\0') {
        return 1;
    }
    if (uVar1 == 1) {
        return 2;
    }
    if (uVar1 == 4) {
        return 4;
    }
    if (uVar1 != 5) {
        if (uVar1 != 6) {
            return 0;
        }
        return 8;
    }
    return 0x1000;
}


/* fcn.00011644 @ 0x11644 */

ulong fcn.00011644(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint in_R8;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t in_stack_00000028;
    
    uVar7 = CONCAT44(in_R8,arg3);
    uVar8 = 0;
    uVar3 = 0;
    if (arg2 != 0) {
        uVar5 = arg4 + -1 + uVar7;
        piVar6 = arg1 + 8;
        do {
            uVar1 = piVar6[-1];
            if ((uVar1 <= uVar7) && (uVar7 < *piVar6 + uVar1)) {
                uVar8 = uVar3;
            }
            if ((uVar1 <= uVar5) && (uVar5 < *piVar6 + uVar1)) {
                if (uVar8 <= uVar3) {
                    piVar6 = arg1 + 8 + uVar8 * 0x38;
                    iVar4 = (uVar3 - uVar8) + 1;
                    do {
                        if (piVar6[3] != 0) {
                            uVar8 = piVar6[-1];
                            uVar3 = uVar8;
                            if (uVar8 <= uVar7) {
                                uVar3 = uVar7;
                            }
                            if (uVar5 < *piVar6 + uVar8) {
                                iVar2 = (uVar7 - uVar3) + arg4;
                            }
                            else {
                                iVar2 = (*piVar6 + uVar8) - uVar3;
                            }
                            (**(*0x1bc88 + 0x40))
                                      (uVar3,iVar2,piVar6[1] & in_stack_00000028 | piVar6[2] & 0xffffffffffffefe0U);
                        }
                        piVar6 = piVar6 + 7;
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                }
                return 0;
            }
            uVar3 = uVar3 + 1;
            piVar6 = piVar6 + 7;
        } while (uVar3 < arg2);
    }
    return 0x800000000000000e;
}


/* fcn.00011f80 @ 0x11f80 */

void fcn.00011f80(int64_t arg1)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uStackX_8;
    uint32_t auStackX_10 [2];
    
    cVar2 = fcn.00011f14();
    if (cVar2 == '\0') {
        fcn.00010340(0x1be60,0x18);
        *0x1be60 = 0x8664;
        uVar3 = fcn.000103c0();
        uVar4 = fcn.00010450();
        if (uVar3 < 0) {
            *0x1be68 = fcn.00010460();
            *0x1be68 = *0x1be68 & 0xffffffffff000;
        }
        else {
            *0x1be68 = 0;
        }
        if ((uVar3 >> 0x10 & 1) != 0) {
            *0x1be70 = *0x1be70 | 0x40000000;
        }
        if ((uVar4 & 0x10) != 0) {
            *0x1be70 = *0x1be70 | 1;
        }
        if ((uVar4 & 0x20) != 0) {
            *0x1be70 = *0x1be70 | 2;
        }
        if ((uVar4 >> 0xc & 1) != 0) {
            *0x1be70 = *0x1be70 | 8;
        }
        fcn.00010410(0x80000000,auStackX_10,0,0);
        if (0x80000000 < auStackX_10[0]) {
            fcn.00010410(0x80000001,NULL,0,0);
            if (((uStackX_8 & 0x100000) != 0) && (uVar1 = rdmsr(0xc0000080), (uVar1 >> 0xb & 1) != 0)) {
                *0x1be70 = *0x1be70 | 0x80000000;
            }
            if ((uStackX_8 & 0x4000000) != 0) {
                *0x1be70 = *0x1be70 | 4;
            }
        }
    }
    if (arg1 != 0x1be60) {
        fcn.00010300(arg1,0x1be60,0x18);
    }
    return;
}


/* fcn.00011f14 @ 0x11f14 */

uchar fcn.00011f14(void)

{
    int64_t iVar1;
    uchar uVar2;
    char acStackX_8 [32];
    
    acStackX_8[0] = '\0';
    if (*0x1bc48 == NULL) {
        (**(*0x1bc60 + 0x140))(0x1ae00,0,0x1bc48);
        if (*0x1bc48 == NULL) goto code_r0x00011f5f;
    }
    (***0x1bc48)(*0x1bc48,acStackX_8);
code_r0x00011f5f:
    uVar2 = 0;
    if (acStackX_8[0] != '\0') {
        iVar1 = fcn.00010460();
        uVar2 = 0;
        if (*0x1be68 != iVar1) {
            uVar2 = 1;
        }
    }
    return uVar2;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(void)

{
    return;
}


/* fcn.00010470 @ 0x10470 */

ulong fcn.00010470(uint32_t arg1)

{
    uint in_register_0000000c;
    
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00012854 @ 0x12854 */

uchar fcn.00012854(int64_t arg1)

{
    ulong uVar1;
    ulong *puVar2;
    ulong *arg2;
    int64_t arg1_00;
    int64_t in_R8;
    int32_t in_stack_00000008;
    uchar uVar3;
    unkbyte7 in_stack_00000011;
    int64_t in_stack_00000018;
    int64_t in_stack_00000020;
    
    if (*0x1bc39 == '\0') {
        *0x1bc39 = 1;
        arg1_00 = (arg1 & 0xfffffffffffffe00U) + 0x200;
        uVar3 = 0;
        arg2 = fcn.00012d80(arg1,arg1_00,in_R8);
        puVar2 = *0x1bc40;
        if (arg2 != NULL) {
            if (*0x1bc40 == NULL) {
                *0x1bc40 = arg2;
                *arg2 = arg2;
            }
            else {
                uVar1 = **0x1bc40;
                *0x1bc40 = arg2;
                *arg2 = uVar1;
                *puVar2 = arg2;
            }
            arg2[1] = 0x1000;
            arg2[2] = (arg1 & 0xfffffffffffffe00U) + 0x1ff;
            if ((arg2 & 0xfff) == 0) {
                fcn.000122bc(0,arg2,arg1_00 * 0x1000,0x20000,in_stack_00000008,CONCAT71(in_stack_00000011,uVar3),
                             in_stack_00000018,in_stack_00000020);
            }
        }
        *0x1bc39 = '\0';
    }
    else {
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000104d0 @ 0x104d0 */

uint64_t fcn.000104d0(void)

{
    uint64_t in_CR4;
    
    *0x1094 = *0x1ad02;
    return in_CR4 | 0x200;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000104a0 @ 0x104a0 */

void fcn.000104a0(ulong *param_1)

{
    GlobalDescriptorTableRegister(*param_1);
    return;
}


/* fcn.000102c0 @ 0x102c0 */

void fcn.000102c0(int64_t arg1)

{
    //[00] -r-x section size 43584 named .text
    return;
}


/* fcn.000102cc @ 0x102cc */

void fcn.000102cc(int64_t arg1)

{
    return;
}


/* fcn.00015890 @ 0x15890 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.00015890(int64_t arg1)

{
    ulong uVar1;
    int64_t arg1_00;
    uint32_t *puVar2;
    int64_t arg2;
    uint64_t uVar3;
    int64_t arg1_01;
    int64_t *piVar4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_30h;
    int64_t var_38h;
    uint16_t uStack_58;
    int64_t iStack_56;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h_2;
    int64_t var_20h;
    int64_t var_bp_18h;
    
    piVar4 = &iStackX_8;
    (**(*0x1bc60 + 0x40))(3,0x5800,piVar4);
    fcn.00010360(iStackX_8,0x5800,CONCAT71(piVar4 >> 8,0xff));
    if (arg1 != 0) {
        for (puVar2 = arg1 + 4; *puVar2 != 0x80000000; puVar2 = puVar2 + 6) {
            if (2 < *puVar2) {
                (**(*0x1bc60 + 0x48))(iStackX_8);
                return 0x8000000000000002;
            }
            if (puVar2[-1] < 0x100) {
                *(puVar2[-1] * 0x58 + 0xc + iStackX_8) = *puVar2;
            }
        }
    }
    uVar1 = fcn.00012e78(4,0x800);
    fcn.000104c0(&uStack_58);
    uVar3 = uStack_58 + 1 >> 4;
    if (0x100 < uVar3) {
        uVar3 = 0x100;
    }
    arg1_00 = fcn.00012e78(4,0x1000);
    if ((uVar3 != 0) && (arg1_00 != iStack_56)) {
        fcn.00010300(arg1_00,iStack_56,uVar3 << 4);
    }
    fcn.00010937(&iStack_48);
    arg2 = iStack_40 << 8;
    (**(*0x1bc60 + 0x40))(3,arg2,&iStackX_10);
    uVar3 = 0;
    arg1_01 = iStackX_10;
    do {
        if ((iStack_40 != 0) && (arg1_01 != iStack_48)) {
            arg2 = iStack_48;
            fcn.00010300(arg1_01,iStack_48,iStack_40);
        }
        arg2 = CONCAT71(arg2 >> 8,uVar3);
        fcn.00010a75(arg1_01,arg2);
        uVar3 = uVar3 + 1;
        arg1_01 = arg1_01 + iStack_40;
    } while (uVar3 < 0x100);
    iStack_48 = iStackX_10;
    *0x1be50 = iStackX_8;
    *0x1be40 = 0x100;
    *0x1be48 = 1;
    *0x1be58 = uVar1;
    fcn.00016100(arg1_00,&iStack_48,0x1be40);
    uStack_58 = 0xfff;
    iStack_56 = arg1_00;
    fcn.000111a0(&uStack_58);
    return 0;
}


/* fcn.0001174c @ 0x1174c */

void fcn.0001174c(void)

{
    ulong uVar1;
    char cVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    uint64_t *puVar5;
    uint64_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint *puVar13;
    int64_t iVar14;
    int64_t iVar15;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    uint64_t *puStackX_20;
    int64_t var_3a0h;
    int64_t var_3a8h;
    uint32_t var_5f0h;
    int64_t var_5f8h;
    int64_t var_600h;
    int64_t var_608h;
    uint64_t auStack_6a8 [12];
    uint64_t auStack_648 [2];
    uint64_t uStack_638;
    uint uStack_630;
    char acStack_62c [996];
    uint64_t uStack_248;
    uint64_t auStack_240 [59];
    int64_t var_60h;
    int64_t var_50h;
    
    cVar2 = fcn.00015830();
    uVar10 = 0;
    if (cVar2 == '\0') {
        uVar9 = uVar10;
    }
    else {
        uVar9 = rdmsr(0xfe);
        uVar9 = uVar9 & 0xff;
    }
    iStackX_10 = 0;
    fcn.00010410(0x80000000,&iStackX_8,0,0);
    if (iStackX_8 < 0x80000008) {
        uVar3 = 0x24;
    }
    else {
        fcn.00010410(0x80000008,&iStackX_8,0,0);
        uVar3 = iStackX_8;
    }
    uVar7 = (1LL << (uVar3 & 0x3f)) - 1;
    uVar11 = uVar7 & 0xfffffffffffff000;
    *0x1be78 = uVar11;
    *0x1be80 = uVar7;
    cVar2 = fcn.00015830();
    if (cVar2 != '\0') {
        uVar8 = rdmsr(0xfe);
        fcn.00013904(0xfe,uVar8 & 0xff,&uStack_248);
        uVar8 = rdmsr(0xfe);
        fcn.00010340(auStack_648,0x400);
        if ((uVar8 & 0xff) != 0) {
            puVar6 = auStack_240;
            puVar5 = auStack_648;
            uVar12 = uVar10;
            do {
                if ((*puVar6 & 0x800) != 0) {
                    uVar4 = puVar6[-1];
                    *(puVar5 + 3) = uVar12;
                    *puVar5 = uVar4 & uVar11;
                    uVar4 = *puVar6;
                    *(puVar5 + 0x1c) = 0x101;
                    puVar5[1] = (~(uVar4 & uVar11) & uVar7) + 1;
                    puVar5[2] = puVar6[-1];
                }
                uVar12 = uVar12 + 1;
                puVar6 = puVar6 + 2;
                puVar5 = puVar5 + 4;
            } while (uVar12 < (uVar8 & 0xff));
        }
    }
    puVar5 = &uStackX_18;
    (**(*0x1bc88 + 0x48))(puVar5,&iStackX_10);
    cVar2 = fcn.00015830();
    uVar3 = 0;
    if (cVar2 != '\0') {
        puVar5 = 0x2ff;
        uVar1 = rdmsr(0x2ff);
        uVar3 = uVar1 & 7;
    }
    iVar14 = CONCAT71(puVar5 >> 8,uVar3);
    uVar11 = fcn.00011608(iVar14);
    uVar7 = uStackX_18;
    if (uStackX_18 != 0) {
        uVar8 = uVar10;
        uVar12 = uVar10;
        do {
            iVar14 = iStackX_10;
            if (*(uVar8 + 0x20 + iStackX_10) != 0) {
                iVar14 = *(uVar8 + iStackX_10);
                (**(*0x1bc88 + 0x40))
                          (iVar14,*(uVar8 + 8 + iStackX_10),
                           *(uVar8 + 0x10 + iStackX_10) & uVar11 | *(uVar8 + 0x18 + iStackX_10) & 0xffffffffffffefe0);
                uVar7 = uStackX_18;
            }
            uVar12 = uVar12 + 1;
            uVar8 = uVar8 + 0x38;
        } while (uVar12 < uVar7);
    }
    if (uVar9 != 0) {
        puVar5 = &uStack_638;
        uVar11 = uVar9;
        do {
            if ((*(puVar5 + 0xc) != '\0') && (*puVar5 == 6)) {
                iVar14 = iStackX_10;
                fcn.00011644(iStackX_10,uVar7,puVar5[-2],puVar5[-1]);
                uVar7 = uStackX_18;
            }
            puVar5 = puVar5 + 4;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    if (uVar9 != 0) {
        puVar5 = &uStack_638;
        uVar11 = uVar9;
        do {
            if (((*(puVar5 + 0xc) != '\0') && (*puVar5 != 6)) && (*puVar5 != 0)) {
                fcn.00011608(CONCAT71(iVar14 >> 8,*puVar5));
                iVar14 = iStackX_10;
                fcn.00011644(iStackX_10,uVar7,puVar5[-2],puVar5[-1]);
                uVar7 = uStackX_18;
            }
            puVar5 = puVar5 + 4;
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if (uVar9 != 0) {
            puVar5 = &uStack_638;
            do {
                if ((*(puVar5 + 0xc) != '\0') && (*puVar5 == 0)) {
                    fcn.00011644(iStackX_10,uVar7,puVar5[-2],puVar5[-1]);
                    uVar7 = uStackX_18;
                }
                puVar5 = puVar5 + 4;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
    }
    iStackX_8 = 0;
    cVar2 = fcn.00015830();
    if (cVar2 != '\0') {
        puVar5 = auStack_6a8;
        iVar14 = 0xb;
        puVar13 = 0x1b060;
        do {
            uVar9 = rdmsr(*puVar13);
            puVar13 = puVar13 + 3;
            *puVar5 = uVar9;
            puVar5 = puVar5 + 1;
            iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
    }
    puStackX_20 = auStack_6a8;
    iVar14 = 0x1ae40;
    uVar9 = uVar10;
    uVar7 = uVar10;
    do {
        uVar12 = 0;
        uVar11 = *puStackX_20;
        uVar8 = uVar12;
        iVar15 = iStackX_8;
        do {
            uVar4 = fcn.00011608(CONCAT71(uVar12 >> 8,uVar11 >> (uVar12 & 0x3f)));
            if (uVar9 == 0) {
code_r0x00011ae5:
                uVar7 = uVar4;
            }
            else if (uVar4 != uVar7) {
                fcn.00011644(iStackX_10,uStackX_18,iVar15,uVar9);
                iVar14 = 0x1ae40;
                iVar15 = *(uVar10 + 0x1ae48) * uVar8 + *(uVar10 + 0x1ae44);
                uVar9 = 0;
                goto code_r0x00011ae5;
            }
            uVar8 = uVar8 + 1;
            uVar9 = uVar9 + *(uVar10 + 8 + iVar14);
            uVar12 = uVar12 + 8;
        } while (uVar12 < 0x40);
        uVar10 = uVar10 + 0xc;
        puStackX_20 = puStackX_20 + 1;
        iStackX_8 = iVar15;
        if (0x83 < uVar10) {
            fcn.00011644(iStackX_10,uStackX_18,iVar15,uVar9);
            if (iStackX_10 != 0) {
                (**(*0x1bc60 + 0x48))();
            }
            return;
        }
    } while( true );
}


/* fcn.00010450 @ 0x10450 */

void fcn.00010450(void)

{
    return;
}


/* fcn.00012650 @ 0x12650 */

//WARNING: Variable defined which should be unmapped: var_28h

void fcn.00012650(void)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uint64_t *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t arg2;
    uint64_t uVar9;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    uint32_t var_60h;
    uchar auStack_68 [40];
    int64_t var_28h;
    
    (**(*0x1bc88 + 0x48))(&uStackX_20,&iStackX_10);
    fcn.00011f80(auStack_68);
    uVar5 = 0;
    arg2 = 0;
    uVar6 = 0;
    uVar2 = rdmsr(0xc0000080);
    uStackX_18 = 0;
    if (uStackX_20 != 0) {
        iVar8 = 0;
        do {
            uVar7 = uStackX_18;
            if (*(iVar8 + 0x20 + iStackX_10) != 0) {
                iVar3 = (**(*0x1bc88 + 0xa0))
                                  (*(iVar8 + iStackX_10),*(iVar8 + 8 + iStackX_10),
                                   *(iVar8 + 0x10 + iStackX_10) | ((uVar2 & 0x800) >> 0xb) << 0xe | 0x22000);
                if (-1 < iVar3) {
                    if (*(iVar8 + iStackX_10) < uVar6 + arg2) {
                        uVar6 = uVar6 + (arg2 - *(iVar8 + iStackX_10));
                    }
                    else {
                        uVar6 = 0;
                    }
                    arg2 = *(iVar8 + iStackX_10);
                    uVar9 = *(iVar8 + 8 + iStackX_10);
                    if (uVar9 != 0) {
                        do {
                            if (uVar6 == 0) {
                                puVar4 = fcn.000120e0(auStack_68,arg2,auStackX_8);
                                uVar6 = 0;
                                if (puVar4 == NULL) break;
                                iVar3 = 0;
                                uVar6 = 0;
                                do {
                                    if (auStackX_8[0] == *(uVar6 + 0x1af20)) {
                                        uVar6 = *(iVar3 * 0x18 + 0x1af30);
                                        goto code_r0x00012772;
                                    }
                                    iVar3 = iVar3 + 1;
                                    uVar6 = uVar6 + 0x18;
                                } while (uVar6 < 0x48);
                                uVar6 = 0;
code_r0x00012772:
                                iVar3 = 0;
                                uVar5 = 0;
                                do {
                                    if (auStackX_8[0] == *(uVar5 + 0x1af20)) {
                                        iVar3 = *(iVar3 * 0x18 + 0x1af28);
                                        goto code_r0x0001279c;
                                    }
                                    iVar3 = iVar3 + 1;
                                    uVar5 = uVar5 + 0x18;
                                } while (uVar5 < 0x48);
                                iVar3 = 0;
code_r0x0001279c:
                                uVar6 = (iVar3 - arg2) + (*puVar4 & uVar6);
                                uVar5 = ~(*puVar4 << 0xd) & 0x2000;
                                uVar7 = uVar5 | 0x20000;
                                if ((*puVar4 & 2) != 0) {
                                    uVar7 = uVar5;
                                }
                                uVar5 = uVar7 | 0x4000;
                                if (-1 < *puVar4) {
                                    uVar5 = uVar7;
                                }
                            }
                            uVar7 = uVar9;
                            if (uVar6 < uVar9) {
                                uVar7 = uVar6;
                            }
                            uVar1 = *(iVar8 + 0x18 + iStackX_10);
                            if (uVar5 != (uVar1 & 0xe6000)) {
                                (**(*0x1bc88 + 0x40))(arg2,uVar7,uVar1 & 0xfffffffffff19fff | uVar5);
                            }
                            uVar6 = uVar6 - uVar7;
                            arg2 = arg2 + uVar7;
                            uVar9 = uVar9 - uVar7;
                        } while (uVar9 != 0);
                        uVar7 = uStackX_18;
                    }
                }
            }
            uStackX_18 = uVar7 + 1;
            iVar8 = iVar8 + 0x38;
        } while (uStackX_18 < uStackX_20);
    }
    (**(*0x1bc60 + 0x48))(iStackX_10);
    return;
}


/* fcn.0001313c @ 0x1313c */

int64_t fcn.0001313c(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.00013100();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.000179fc @ 0x179fc */

//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.000179fc(void)

{
    int iVar1;
    char cVar2;
    uchar uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t *arg1;
    int64_t *piVar8;
    int64_t *piVar9;
    int *piVar10;
    int64_t *piVar11;
    int64_t iVar12;
    uint64_t arg2;
    int64_t arg1_00;
    uint64_t uVar13;
    uint32_t auStackX_8 [2];
    uint16_t auStackX_10 [4];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_50h_2;
    int64_t var_58h;
    int64_t var_60h_2;
    int64_t var_68h;
    uchar auStack_108 [82];
    uint16_t uStack_b6;
    int64_t iStack_b4;
    ushort uStack_ac;
    int64_t aiStack_a8 [2];
    int64_t iStack_98;
    uchar auStack_78 [2];
    int16_t var_6eh;
    int64_t var_6ch;
    int16_t var_64h;
    int64_t var_60h;
    int64_t var_50h;
    int64_t var_30h;
    
    piVar8 = NULL;
    iVar5 = fcn.00013020(0x1b010);
    piVar9 = piVar8;
    if ((iVar5 == 0) || (piVar9 = *(iVar5 + 0x18), piVar9 == NULL)) {
        iVar5 = fcn.0001a09c();
        uVar4 = (**(iVar5 + 0x18))(0x1ad40,2);
    }
    else {
        uVar4 = *(piVar9 + 1);
    }
    fcn.00010f06(aiStack_a8);
    iVar12 = iStack_98 + _auStack_78 + 0xa4;
    iStackX_20 = iVar12;
    iVar5 = fcn.0001a09c();
    cVar2 = (**(iVar5 + 8))(0x1ad40);
    if (cVar2 == '\x02') {
        fcn.00010410(1,NULL,0,auStackX_8);
        if ((auStackX_8[0] >> 3 & 1) != 0) {
            fcn.00010410(5,NULL,auStackX_10,0);
            uVar7 = auStackX_10[0];
            goto code_r0x00017ab7;
        }
        cVar2 = '\x01';
    }
    uVar7 = 4;
code_r0x00017ab7:
    fcn.00016424(auStack_108);
    uVar13 = uVar4;
    iVar5 = iVar12 + 8 + (uVar7 + 0x8000) * uVar13;
    arg2 = (-iVar5 & 7) + uVar13 * 0xec + 0x419 + uStack_b6 + iVar5;
    iStackX_18 = fcn.00012d44(4,((arg2 & 0xfff) != 0) + (arg2 >> 0xc));
    if (arg2 != 0) {
        fcn.00010340(iStackX_18,arg2);
    }
    iVar5 = (uVar4 << 0xf) + iStackX_18;
    iVar12 = uVar7 * uVar4 + iVar5;
    arg1_00 = iStackX_20 + 8 + (-(iVar12 + iStackX_20) & 7) + iVar12;
    arg1 = uStack_b6 + 1 + arg1_00;
    arg1[0x13] = iStackX_20;
    arg1[0x12] = iVar12;
    arg1[3] = iStackX_18;
    *arg1 = arg1 + 0x83 + uVar13 * 0x1b;
    arg1[4] = 0x8000;
    arg1[0x10] = -1;
    arg1[1] = 1;
    arg1[0x1c] = 0;
    *(arg1 + 0xf4) = 0;
    arg1[0x77] = arg1 + 0x83;
    arg1[2] = 1;
    *(arg1 + 0x3f1) = 0;
    arg1[0x7f] = -1;
    iStackX_18 = iVar5;
    iVar5 = fcn.0001a09c();
    iVar5 = (**(iVar5 + 0x20))(0x1adc0,0x30007);
    arg1[0x82] = iVar5;
    if ((*(arg1 + 0x3f1) == '\0') || (uVar3 = 1, *(arg1 + 0x3f2) != '\0')) {
        uVar3 = 0;
    }
    *(arg1 + 0x3f3) = uVar3;
    *(arg1_00 + -8) = *(iStack_b4 + -8);
    if (arg1_00 != iStack_b4) {
        fcn.00010300(arg1_00,iStack_b4,uStack_b6 + 1);
    }
    uStack_ac = 0;
    iStack_b4 = arg1_00;
    if (arg1[0x77] + 0x28 != auStack_108) {
        fcn.00010300(arg1[0x77] + 0x28,auStack_108,0x60);
    }
    fcn.00016860(arg1,0,0,arg1[3] + 0x8000);
    if (arg1 + 5 != aiStack_a8) {
        fcn.00010300(arg1 + 5,aiStack_a8,0x58);
    }
    *(arg1 + 0x76) = cVar2;
    *(arg1 + 0x7e) = cVar2 == '\x01';
    if (uVar4 != 0) {
        piVar6 = piVar8;
        iVar5 = iStackX_18;
        do {
            *(arg1[0x77] + 8 + piVar6) = iVar5;
            iVar5 = iVar5 + uVar7;
            piVar6 = piVar6 + 0x1b;
            uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
    }
    fcn.000133f0();
    if (piVar9 == NULL) {
        if (1 < uVar4) {
            fcn.00016628(arg1);
        }
    }
    else {
        iVar12 = piVar9[1];
        piVar9[0x81] = arg1;
        *(arg1 + 1) = iVar12;
        *(arg1 + 0xc) = *(piVar9 + 0xc);
        iVar5 = *piVar9;
        *arg1 = iVar5;
        if (iVar12 != 0) {
            piVar10 = iVar5 + 8;
            piVar6 = piVar8;
            piVar11 = piVar8;
            do {
                *(piVar6 + arg1[0x77]) = 1;
                iVar1 = *piVar10;
                piVar10 = piVar10 + 5;
                piVar11 = piVar11 + 1;
                *(arg1[0x77] + 0x20 + piVar6) = iVar1 == 0;
                *(arg1[0x77] + 0x10 + piVar6) = 0;
                piVar6 = piVar6 + 0x1b;
            } while (piVar11 < *(arg1 + 1));
        }
    }
    iVar5 = fcn.00013020(0x1ad20);
    if (iVar5 == 0) {
        fcn.00018d88(arg1);
    }
    else {
        arg1[0x7c] = *(iVar5 + 0x18);
        arg1[0x7d] = *(iVar5 + 0x20);
    }
    uVar7 = *(arg1 + 0xc);
    fcn.00018bb4(arg1,uVar7);
    fcn.000156d4(arg1 + 0x2a);
    if (1 < *(arg1 + 1)) {
        if (piVar9 != NULL) {
            *(arg1 + 0x1e) = 2;
        }
        fcn.000171e0(arg1,CONCAT71(uVar7 >> 8,1),0,0x16598);
        while (*(arg1 + 0x14) < arg1[1] - 1U) {
            fcn.00010490();
        }
        if (piVar9 != NULL) {
            *(arg1 + 0x1e) = 3;
        }
        if (arg1[1] != 0) {
            piVar9 = piVar8;
            do {
                fcn.000162ec(arg1[0x77] + piVar8,0);
                piVar9 = piVar9 + 1;
                piVar8 = piVar8 + 0x1b;
            } while (piVar9 < *(arg1 + 1));
        }
    }
    fcn.00018868(arg1);
    return 0;
}


/* fcn.00018204 @ 0x18204 */

ulong fcn.00018204(uint32_t *arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uStackX_8;
    
    iVar2 = *0x1bc90;
    if ((arg1 == NULL) && (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        fcn.000165cc(*0x1bc90,&uStackX_8);
        if (uStackX_8 == *(iVar2 + 0xc)) {
            uVar1 = *(iVar2 + 8);
            iVar4 = 0;
            if (uVar1 != 0) {
                iVar5 = 0;
                uVar6 = uVar1;
                do {
                    if (*(*(iVar2 + 0x3b8) + 0x24 + iVar5) != 4) {
                        iVar4 = iVar4 + 1;
                    }
                    iVar5 = iVar5 + 0xd8;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            if (arg1 != NULL) {
                *arg1 = uVar1;
            }
            if (arg2 != 0) {
                *arg2 = iVar4;
            }
            uVar3 = 0;
        }
        else {
            uVar3 = 0x8000000000000007;
        }
    }
    return uVar3;
}


/* fcn.000133b4 @ 0x133b4 */

uint32_t fcn.000133b4(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    
    uVar1 = fcn.00013178(0x20);
    iVar3 = fcn.000132a4();
    uVar2 = uVar1;
    if (iVar3 == 1) {
        uVar2 = fcn.00013328();
        if (uVar2 < 0x100) {
            uVar2 = uVar1 >> 0x18;
        }
    }
    return uVar2;
}


/* fcn.00013178 @ 0x13178 */

uint64_t fcn.00013178(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.000132a4();
    if (iVar1 == 1) {
        iVar1 = fcn.0001313c();
        uVar2 = *(iVar1 + arg1);
    }
    else {
        uVar2 = rdmsr((arg1 >> 4) + 0x800);
    }
    return uVar2;
}


/* fcn.000132a4 @ 0x132a4 */

char fcn.000132a4(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.00013100();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.00013328 @ 0x13328 */

uint64_t fcn.00013328(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    
    iVar1 = fcn.000132a4();
    if (iVar1 == 1) {
        fcn.00010410(0,auStackX_10,0,0);
        if (10 < auStackX_10[0]) {
            fcn.00010fe0(0xb,0,0,auStackX_8);
            if (auStackX_8[0] != 0) {
                return uStackX_18;
            }
        }
        fcn.00010410(1,NULL,auStackX_8,0);
        uVar2 = auStackX_8[0] >> 0x18;
    }
    else {
        uVar2 = fcn.000133b4();
    }
    return uVar2;
}


/* fcn.00017e6c @ 0x17e6c */

ulong fcn.00017e6c(int64_t arg1,int64_t arg2,uint32_t *arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint uVar5;
    uint64_t uVar6;
    uint64_t uStackX_8;
    
    piVar3 = *0x1bc90;
    uVar6 = arg1 & 0xffffff;
    iVar2 = **0x1bc90;
    fcn.000165cc(*0x1bc90,&uStackX_8);
    if (uStackX_8 == *(piVar3 + 0xc)) {
        if (arg2 == 0) {
            uVar4 = 0x8000000000000002;
        }
        else if (uVar6 < *(piVar3 + 1)) {
            uVar1 = *(iVar2 + 4 + uVar6 * 0x14);
            *(arg2 + 8) = 0;
            uVar5 = *(arg2 + 8);
            *arg2 = uVar1;
            if (uVar6 == *(piVar3 + 0xc)) {
                uVar5 = 1;
            }
            *(arg2 + 8) = uVar5;
            if (*(piVar3[0x77] + 0x20 + uVar6 * 0xd8) != '\0') {
                *(arg2 + 8) = *(arg2 + 8) | 4;
            }
            if (*(piVar3[0x77] + 0x24 + uVar6 * 0xd8) == 4) {
                *(arg2 + 8) = *(arg2 + 8) & 0xfffffffd;
            }
            else {
                *(arg2 + 8) = *(arg2 + 8) | 2;
            }
            fcn.00013458(*(iVar2 + 4 + uVar6 * 0x14),arg2 + 0xc,arg2 + 0x10,arg2 + 0x14);
            if ((arg1 >> 0x18 & 1) != 0) {
                fcn.00013714(*(iVar2 + 4 + uVar6 * 0x14),arg2 + 0x18,arg2 + 0x24,arg2 + 0x20);
            }
            if (arg3 != NULL) {
                *arg3 = *(iVar2 + 8 + uVar6 * 0x14);
            }
            uVar4 = 0;
        }
        else {
            uVar4 = 0x800000000000000e;
        }
    }
    else {
        uVar4 = 0x8000000000000007;
    }
    return uVar4;
}


/* fcn.00012cb8 @ 0x12cb8 */

ulong fcn.00012cb8(void)

{
    int64_t iVar1;
    ulong uVar2;
    
    if (*0x1bc68 == NULL) {
        if ((*0x1bc60 != 0) && (*(*0x1bc60 + 0x140) != NULL)) {
            iVar1 = (**(*0x1bc60 + 0x140))(0x1ad60,0,0x1bc68);
            if (iVar1 < 0) {
                *0x1bc68 = NULL;
            }
            if (*0x1bc68 != NULL) goto code_r0x00012d21;
        }
        return 0x8000000000000003;
    }
code_r0x00012d21:
    //WARNING: Could not recover jumptable at 0x00012d3f. Too many branches
    //WARNING: Treating indirect jump as call
    uVar2 = (***0x1bc68)(0x80000002,0x11004,0,0x1ae20);
    return uVar2;
}


/* fcn.00010460 @ 0x10460 */

void fcn.00010460(void)

{
    return;
}


/* fcn.000120e0 @ 0x120e0 */

uint64_t * fcn.000120e0(int64_t arg1,int64_t arg2,uint32_t *arg3)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    
    if (*arg1 == -0x799c) {
        uVar2 = *(arg1 + 8);
        if ((*(arg1 + 0x10) & 8) != 0) {
            uVar2 = *(uVar2 + (arg2 >> 0x30 & 0x1ff) * 8);
            if (uVar2 == 0) goto code_r0x00012150;
            uVar2 = uVar2 & 0xffffffffff000;
        }
        uVar2 = *(uVar2 + (arg2 >> 0x27 & 0x1ff) * 8);
        if (uVar2 == 0) goto code_r0x00012150;
        uVar2 = uVar2 & 0xffffffffff000;
    }
    else {
        uVar2 = *(arg1 + 8);
    }
    puVar1 = uVar2 + (arg2 >> 0x1e & 0x1ff) * 8;
    uVar2 = *puVar1;
    if (uVar2 != 0) {
        if (uVar2 < '\0') {
            *arg3 = 3;
            return puVar1;
        }
        puVar1 = (uVar2 & 0xffffffffff000) + (arg2 >> 0x15 & 0x1ff) * 8;
        uVar2 = *puVar1;
        if (uVar2 != 0) {
            if (uVar2 < '\0') {
                *arg3 = 2;
                return puVar1;
            }
            puVar1 = (uVar2 & 0xffffffffff000) + (arg2 >> 0xc & 0x1ff) * 8;
            if ((*puVar1 != 0) || (arg2 == 0)) {
                *arg3 = 1;
                return puVar1;
            }
        }
    }
code_r0x00012150:
    *arg3 = 0;
    return NULL;
}


/* fcn.000121d0 @ 0x121d0 */

ulong fcn.000121d0(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    code *in_R9;
    
    if (arg2 == 2) {
        if (arg3 != 1) {
            return 0x8000000000000003;
        }
        uVar1 = (*in_R9)();
        uVar3 = 0;
        if (uVar1 != 0) {
            uVar4 = *arg1 & 0xfffffffe00000;
            do {
                uVar2 = *arg1 & 0x8000000000000067 | uVar4;
                uVar4 = uVar4 + 0x1000;
                *(uVar1 + uVar3 * 8) = uVar2;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x200);
code_r0x000122a0:
            *arg1 = *arg1 & 0x67;
            *arg1 = *arg1 | uVar1;
            return 0;
        }
    }
    else {
        if (arg2 != 3) {
            return 0x8000000000000003;
        }
        if (1 < arg3 - 1) {
            return 0x8000000000000003;
        }
        uVar1 = (*in_R9)();
        uVar3 = 0;
        if (uVar1 != 0) {
            uVar4 = *arg1 & 0xfffffc0000000;
            do {
                uVar2 = *arg1 & 0x80000000000000e7 | uVar4;
                uVar4 = uVar4 + 0x200000;
                *(uVar1 + uVar3 * 8) = uVar2 | 0x80;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x200);
            goto code_r0x000122a0;
        }
    }
    return 0x8000000000000009;
}


/* fcn.000122bc @ 0x122bc */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.000122bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int32_t arg_60h,int64_t arg_68h,
                     int64_t arg_70h,int64_t arg_78h)

{
    char cVar1;
    uint8_t extraout_var;
    uint64_t *arg1_00;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint32_t arg3_00;
    bool bVar9;
    uint64_t uStackX_10;
    uint64_t auStackX_18 [2];
    int in_stack_00000028;
    int64_t in_stack_00000030;
    uchar *in_stack_00000038;
    uchar *in_stack_00000040;
    uint32_t var_50h;
    int16_t aiStack_50 [4];
    int iStack_48;
    uint32_t uStack_40;
    int64_t var_20h;
    int64_t var_18h;
    uint32_t var_bp_10h;
    char var_bp_8h;
    
    if ((arg3 & 0xfffU) == 0) {
        if (arg3 == 0) {
            return 0x8000000000000002;
        }
        if ((arg4 & 0xfffffffffff19fffU) == 0) {
            if (arg1 == 0) {
                fcn.00011f80(aiStack_50);
            }
            else if (aiStack_50 != arg1) {
                fcn.00010300(aiStack_50,arg1,0x18);
            }
            if (aiStack_50[0] == 0x14c) {
                if (iStack_48 == 0) {
                    return -(arg4 != 0) & 0x8000000000000003;
                }
                if (((uStack_40 & 2) != 0) && (arg2 + arg3 < 0x100000001)) goto code_r0x00012395;
            }
            else if (aiStack_50[0] == -0x799c) {
code_r0x00012395:
                if (in_stack_00000038 != NULL) {
                    *in_stack_00000038 = 0;
                }
                if (in_stack_00000040 != NULL) {
                    *in_stack_00000040 = 0;
                }
                iVar4 = 0x1291c;
                if (in_stack_00000030 != 0) {
                    iVar4 = in_stack_00000030;
                }
                cVar1 = fcn.00011f14();
                if (cVar1 == '\0') {
                    fcn.000103c0();
                    uVar8 = extraout_var & 1;
                }
                else {
                    uVar8 = 0;
                }
                if ((uVar8 != 0) && (cVar1 = fcn.00011f14(), cVar1 == '\0')) {
                    auStackX_18[0] = fcn.000103c0();
                    auStackX_18[0] = auStackX_18[0] & 0xfffffffffffeffff;
                    fcn.00010470(auStackX_18[0]);
                }
                uVar3 = 0;
                uStackX_10 = arg2;
                do {
                    arg1_00 = fcn.000120e0(aiStack_50,uStackX_10,auStackX_18);
                    if (arg1_00 == NULL) {
code_r0x00012596:
                        uVar3 = 0x8000000000000003;
                        break;
                    }
                    iVar7 = 0;
                    uVar5 = 0;
                    do {
                        if (auStackX_18[0] == *(uVar5 + 0x1af20)) {
                            iVar7 = *(iVar7 * 0x18 + 0x1af28);
                            goto code_r0x0001245d;
                        }
                        iVar7 = iVar7 + 1;
                        uVar5 = uVar5 + 0x18;
                    } while (uVar5 < 0x48);
                    iVar7 = 0;
code_r0x0001245d:
                    iVar6 = 0;
                    uVar5 = 0;
                    do {
                        if (auStackX_18[0] == *(uVar5 + 0x1af20)) {
                            uVar5 = *(iVar6 * 0x18 + 0x1af28);
                            goto code_r0x00012481;
                        }
                        iVar6 = iVar6 + 1;
                        uVar5 = uVar5 + 0x18;
                    } while (uVar5 < 0x48);
                    uVar5 = 0;
code_r0x00012481:
                    if (((uStackX_10 & uVar5 - 1) == 0) && (uVar5 <= arg3)) {
                        uVar5 = *arg1_00;
                        uVar2 = uVar5;
                        if ((arg4 >> 0xd & 1) == 0) {
                            bVar9 = in_stack_00000028 == 0;
code_r0x000124be:
                            if (bVar9) {
                                uVar2 = uVar5 | 1;
                            }
                        }
                        else if (-1 < in_stack_00000028) {
                            if (1 < in_stack_00000028) {
                                bVar9 = in_stack_00000028 == 2;
                                goto code_r0x000124be;
                            }
                            uVar2 = uVar5 & 0xfffffffffffffffe;
                        }
                        if ((arg4 >> 0x11 & 1) == 0) {
                            bVar9 = in_stack_00000028 == 0;
code_r0x000124e0:
                            if (bVar9) {
                                uVar2 = uVar2 | 2;
                            }
                        }
                        else if (-1 < in_stack_00000028) {
                            if (1 < in_stack_00000028) {
                                bVar9 = in_stack_00000028 == 2;
                                goto code_r0x000124e0;
                            }
                            uVar2 = uVar2 & 0xfffffffffffffffd;
                        }
                        if (uStack_40 < 0) {
                            if ((arg4 >> 0xe & 1) == 0) {
                                bVar9 = in_stack_00000028 == 0;
code_r0x00012512:
                                if (bVar9) {
                                    uVar2 = uVar2 & 0x7fffffffffffffff;
                                }
                            }
                            else if (-1 < in_stack_00000028) {
                                if (1 < in_stack_00000028) {
                                    bVar9 = in_stack_00000028 == 2;
                                    goto code_r0x00012512;
                                }
                                uVar2 = uVar2 | 0x8000000000000000;
                            }
                        }
                        *arg1_00 = uVar2;
                        if ((uVar5 != uVar2) && (in_stack_00000040 != NULL)) {
                            *in_stack_00000040 = 1;
                        }
                        uStackX_10 = uStackX_10 + iVar7;
                        arg3 = arg3 - iVar7;
                    }
                    else {
                        if (((uStackX_10 & 0x1fffff) != 0) || (arg3_00 = 2, arg3 < 0x200000)) {
                            arg3_00 = 1;
                        }
                        if ((iVar4 == 0) || (uVar3 = fcn.000121d0(arg1_00,auStackX_18[0],arg3_00), uVar3 < 0))
                        goto code_r0x00012596;
                        if (in_stack_00000038 != NULL) {
                            *in_stack_00000038 = 1;
                        }
                        if (in_stack_00000040 != NULL) {
                            *in_stack_00000040 = 1;
                        }
                    }
                } while (arg3 != 0);
                if ((uVar8 != 0) && (cVar1 = fcn.00011f14(), cVar1 == '\0')) {
                    auStackX_18[0] = fcn.000103c0();
                    auStackX_18[0] = auStackX_18[0] | 0x10000;
                    fcn.00010470(auStackX_18[0]);
                }
                return uVar3;
            }
        }
    }
    return 0x8000000000000003;
}


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.00012d80 @ 0x12d80 */

uint64_t fcn.00012d80(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_18;
    
    if (arg1 != 0) {
        iStackX_18 = arg2;
        iVar1 = (**(*0x1bc60 + 0x28))(0,4,arg1 + 0x200,&iStackX_18);
        if (-1 < iVar1) {
            uVar2 = iStackX_18 + 0x1fffffU & 0xffffffffffe00000;
            iVar1 = ((uVar2 - iStackX_18 & 0xfff) != 0) + (uVar2 - iStackX_18 >> 0xc);
            if (iVar1 != 0) {
                (**(*0x1bc60 + 0x30))(iStackX_18,iVar1);
            }
            iStackX_18 = arg1 * 0x1000 + uVar2;
            arg1 = ((arg1 + 0x200) - iVar1) - arg1;
            if (arg1 != 0) {
                (**(*0x1bc60 + 0x30))(iStackX_18,arg1);
            }
            return uVar2;
        }
    }
    return 0;
}


/* fcn.000182b0 @ 0x182b0 */

ulong * fcn.000182b0(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int iVar1;
    bool bVar2;
    int64_t arg1_00;
    ulong uVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong *puVar6;
    ulong *puVar7;
    int64_t iVar8;
    ulong *puVar9;
    int64_t in_stack_00000028;
    ulong in_stack_00000030;
    ulong *in_stack_00000038;
    
    puVar6 = in_stack_00000038;
    arg1_00 = *0x1bc90;
    puVar4 = NULL;
    if (in_stack_00000038 != NULL) {
        *in_stack_00000038 = 0;
    }
    if (*(arg1_00 + 8) != 1) {
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
        fcn.000165cc(arg1_00,&stack0x00000038);
        if (in_stack_00000038 != *(arg1_00 + 0xc)) {
            return 0x8000000000000007;
        }
        fcn.0001852c();
        puVar9 = *(arg1_00 + 8);
        bVar2 = false;
        if (puVar9 != NULL) {
            puVar5 = puVar4;
            puVar7 = puVar4;
            do {
                if (((puVar5 != *(arg1_00 + 0xc)) && (iVar1 = *(puVar7 + *(arg1_00 + 0x3b8) + 0x24), iVar1 != 4)) &&
                   (bVar2 = true, iVar1 != 0)) {
                    return 0x8000000000000006;
                }
                puVar5 = puVar5 + 1;
                puVar7 = puVar7 + 0x1b;
            } while (puVar5 < puVar9);
            if (bVar2) {
                *(arg1_00 + 0xa4) = 0;
                puVar5 = puVar4;
                puVar7 = puVar4;
                do {
                    iVar8 = *(arg1_00 + 0x3b8);
                    *(puVar5 + iVar8 + 0x88) = 0;
                    if ((puVar7 != *(arg1_00 + 0xc)) && (*(puVar5 + iVar8 + 0x24) == 0)) {
                        *(puVar5 + iVar8 + 0x88) = 1;
                        *(arg1_00 + 0xa4) = *(arg1_00 + 0xa4) + 1;
                    }
                    puVar7 = puVar7 + 1;
                    puVar5 = puVar5 + 0x1b;
                } while (puVar7 < puVar9);
                iVar8 = arg1_00 + 0xd0;
                *(arg1_00 + 0xb8) = in_stack_00000030;
                *(arg1_00 + 0xb0) = arg1;
                *(arg1_00 + 0xa8) = arg2;
                *(arg1_00 + 0xa0) = 0;
                *(arg1_00 + 0xe8) = puVar6;
                uVar3 = fcn.000175dc(in_stack_00000028,iVar8);
                *(arg1_00 + 200) = uVar3;
                *(arg1_00 + 0xd8) = 0;
                *(arg1_00 + 0xe0) = arg3;
                if (arg2 == '\0') {
                    puVar5 = NULL;
                    iVar8 = CONCAT71(iVar8 >> 8,1);
code_r0x0001847d:
                    fcn.000171e0(arg1_00,iVar8,puVar5,arg1);
                }
                else {
                    puVar6 = puVar4;
                    puVar5 = puVar4;
                    do {
                        if ((puVar5 != in_stack_00000038) && (*(puVar6 + *(arg1_00 + 0x3b8) + 0x88) != '\0')) {
                            iVar8 = 0;
                            goto code_r0x0001847d;
                        }
                        puVar5 = puVar5 + 1;
                        puVar6 = puVar6 + 0x1b;
                    } while (puVar5 < puVar9);
                }
                if (arg3 == 0) {
                    do {
                        puVar4 = fcn.00017828();
                    } while (puVar4 == 0x8000000000000006);
                }
                return puVar4;
            }
        }
    }
    return 0x8000000000000013;
}


/* fcn.00018a5c @ 0x18a5c */

int64_t fcn.00018a5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    uchar *in_stack_00000030;
    uint64_t auStack_38 [2];
    
    iVar2 = *0x1bc90;
    *0x1b020 = 1;
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = 0;
    }
    fcn.000165cc(iVar2,auStack_38);
    if (auStack_38[0] == *(iVar2 + 0xc)) {
        if (arg2 < *(iVar2 + 8)) {
            if ((arg2 != *(iVar2 + 0xc)) && (arg1 != 0)) {
                fcn.0001852c();
                iVar4 = arg2 * 0xd8;
                if (*(*(iVar2 + 0x3b8) + 0x24 + iVar4) != 4) {
                    iVar1 = *(iVar2 + 0x3b8);
                    *(iVar1 + 0xb0 + iVar4) = arg3;
                    *(iVar1 + 0x90 + iVar4) = in_stack_00000030;
                    uVar3 = fcn.000175dc(arg4,iVar1 + 0xa0 + iVar4);
                    *(iVar1 + 0xa8 + iVar4) = 0;
                    *(iVar1 + 0x98 + iVar4) = uVar3;
                    fcn.000171e0(iVar2,0,arg2,arg1);
                    if (arg3 != 0) {
                        *0x1b020 = 0;
                        return 0;
                    }
                    do {
                        iVar2 = fcn.00017788(arg2);
                    } while (iVar2 == -0x7ffffffffffffffa);
                    *0x1b020 = 0;
                    return iVar2;
                }
            }
            iVar2 = -0x7ffffffffffffffe;
        }
        else {
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    else {
        iVar2 = -0x7ffffffffffffff9;
    }
    *0x1b020 = 0;
    return iVar2;
}


/* fcn.00017fbc @ 0x17fbc */

ulong fcn.00017fbc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t arg1_00;
    uint8_t extraout_var;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t arg4;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    
    fcn.00013178(800);
    uVar3 = fcn.00013178(800);
    fcn.000131b0(800,uVar3 | 0x10000);
    uVar4 = fcn.000111b0();
    fcn.00010440();
    uVar3 = fcn.00013178(0x350);
    fcn.000131b0(0x350,uVar3 | 0x10000);
    uVar3 = fcn.00013178(0x360);
    fcn.000131b0(0x360,uVar3 | 0x10000);
    arg1_00 = *0x1bc90;
    fcn.000165cc(*0x1bc90,&uStackX_20);
    if (uStackX_20 == *(arg1_00 + 0xc)) {
        if (arg1 < *(arg1_00 + 8)) {
            iVar1 = *(arg1 * 0xd8 + 0x24 + *(arg1_00 + 0x3b8));
            if ((iVar1 == 4) || (arg1 == *(arg1_00 + 0xc))) {
                uVar5 = 0x8000000000000002;
            }
            else if (iVar1 == 2) {
                uVar5 = 0x8000000000000006;
            }
            else {
                *(arg1_00 + 0xf4) = 1;
                *(arg1_00 + 0x100) = 0;
                *(arg1_00 + 0x128) = 0;
                *(arg1_00 + 0xf8) = arg1;
                uStackX_18 = rdmsr(0x1b);
                uStackX_18 = uStackX_18 & 0xfffffffffffffeff;
                wrmsr(0x1b,uStackX_18);
                arg4 = 0x162d8;
                iVar6 = arg1;
                fcn.000171e0(arg1_00,0,arg1,0x162d8);
                fcn.00010f64(arg1_00 + 0x100,arg1_00 + 0x128,iVar6,arg4);
                uVar2 = rdmsr(0x1b);
                wrmsr(0x1b,uVar2 & 0xffffffff00000000 | uVar2 & 0xffffffff | 0x100);
                fcn.000133f0();
                while (*(*(arg1_00 + 0x3b8) + 0x24 + uStackX_20 * 0xd8) != 3) {
                    fcn.00010490();
                }
                *(arg1_00 + 0xf4) = 0;
                if (arg2 == '\0') {
                    iVar6 = 4;
                }
                else {
                    iVar6 = 0;
                }
                fcn.000162ec(*(arg1_00 + 0x3b8) + uStackX_20 * 0xd8,iVar6);
                *(arg1_00 + 0xc) = arg1;
                if ((uVar4 >> 9 & 1) == 0) {
                    fcn.00010440();
                }
                else {
                    fcn.000103d0();
                }
                if ((~extraout_var & 1) != 0) {
                    uVar3 = fcn.00013178(800);
                    fcn.000131b0(800,uVar3 & 0xfffeffff);
                }
                uVar5 = 0;
            }
        }
        else {
            uVar5 = 0x800000000000000e;
        }
    }
    else {
        uVar5 = 0x8000000000000007;
    }
    return uVar5;
}


/* fcn.000165cc @ 0x165cc */

ulong fcn.000165cc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    int *piVar5;
    
    iVar2 = *arg1;
    uVar1 = *(arg1 + 8);
    iVar3 = fcn.000133b4();
    uVar4 = 0;
    if (uVar1 != 0) {
        piVar5 = iVar2 + 4;
        do {
            if (*piVar5 == iVar3) {
                *arg2 = uVar4;
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 5;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.000162ec @ 0x162ec */

//WARNING: Variable defined which should be unmapped: var_1h

void fcn.000162ec(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint uVar3;
    int32_t var_1h;
    
    uVar3 = arg2;
    LOCK();
    iVar2 = *arg1;
    if (iVar2 == 1) {
        *arg1 = 2;
    }
    UNLOCK();
    if (iVar2 != 1) {
        iVar2 = arg1;
        fcn.00010400(arg1,arg2);
        while( true ) {
            LOCK();
            iVar1 = *arg1;
            if (iVar1 == 1) {
                *arg1 = 2;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            fcn.00010490();
            fcn.00010400(iVar2,arg2);
        }
    }
    *(arg1 + 0x24) = uVar3;
    *arg1 = 1;
    return;
}


/* fcn.00017714 @ 0x17714 */

void fcn.00017714(int64_t arg1)

{
    int64_t iVar1;
    int64_t *noname_0;
    int64_t *noname_0_00;
    int64_t arg1_00;
    
    iVar1 = *0x1bc90;
    *(*0x1bc90 + 0xf0) = 2;
    fcn.000171e0(iVar1,0,arg1,0);
    while (*(iVar1 + 0xa0) == 0) {
        fcn.00010490();
    }
    arg1_00 = 0;
    *(iVar1 + 0xf0) = 3;
    noname_0_00 = arg1 * 0xd8 + *(iVar1 + 0x3b8);
    LOCK();
    iVar1 = *noname_0_00;
    if (iVar1 == 1) {
        *noname_0_00 = 2;
    }
    UNLOCK();
    if (iVar1 != 1) {
        noname_0 = noname_0_00;
        fcn.00010400(noname_0_00,0);
        while( true ) {
            LOCK();
            iVar1 = *noname_0_00;
            if (iVar1 == 1) {
                *noname_0_00 = 2;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            fcn.00010490();
            fcn.00010400(noname_0,arg1_00);
        }
    }
    *(noname_0_00 + 0x24) = 0;
    *noname_0_00 = 1;
    return;
}


/* fcn.00012e78 @ 0x12e78 */

int64_t fcn.00012e78(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x1bc60 + 0x40))(noname_0,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010340(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.00010490 @ 0x10490 */

void fcn.00010490(void)

{
    return;
}


/* fcn.00013100 @ 0x13100 */

ulong fcn.00013100(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.00010410(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.00010fe0 @ 0x10fe0 */

uint64_t fcn.00010fe0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = puVar1[3];
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar3;
    }
    if (in_stack_00000030 != NULL) {
        *in_stack_00000030 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.000131b0 @ 0x131b0 */

uint64_t fcn.000131b0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    uVar2 = arg2 & 0xffffffff;
    iVar1 = fcn.000132a4();
    if (iVar1 == 1) {
        uVar2 = fcn.0001313c();
        *(uVar2 + arg1) = arg2;
    }
    else {
        wrmsr((arg1 >> 4) + 0x800,uVar2);
    }
    return uVar2;
}


/* fcn.0001a11c @ 0x1a11c */

ulong fcn.0001a11c(void)

{
    ulong uVar1;
    int aiStackX_8 [2];
    int aiStackX_10 [2];
    int iStackX_18;
    
    fcn.00010410(0,NULL,aiStackX_8,aiStackX_10);
    if (((aiStackX_8[0] == 0x68747541) && (aiStackX_10[0] == 0x444d4163)) && (iStackX_18 == 0x69746e65)) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00013458 @ 0x13458 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_14h
//WARNING: Variable defined which should be unmapped: var_20h

void fcn.00013458(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    uint8_t uVar3;
    char cVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    int64_t var_40h;
    uchar auStack_58 [8];
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    int iStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t var_30h;
    uint32_t var_2ch;
    uint32_t var_28h;
    uint32_t var_24h;
    int64_t var_20h;
    uint32_t var_14h;
    int64_t var_10h;
    
    fcn.00010410(1,NULL,0,0);
    uVar6 = 0;
    if ((uStack_48 & 0x10000000) == 0) {
        if (arg4 != 0) {
            *arg4 = 0;
        }
        if (arg3 != 0) {
            *arg3 = 0;
        }
        if (arg2 != 0) {
            *arg2 = 0;
            return;
        }
        return;
    }
    fcn.00010410(0,&uStack_50,0,0);
    fcn.00010410(0x80000000,&uStack_3c,0,0);
    if ((uStack_50 < 0xb) || (fcn.00010fe0(0xb,0,auStack_58,&iStack_44), iStack_44 == 0)) {
        fcn.00010410(1,NULL,&uStack_40,0);
        uVar7 = 1;
        uVar5 = uStack_40 >> 0x10 & 0xff;
        cVar1 = fcn.0001a11c();
        if (cVar1 == '\0') {
            if ((3 < uStack_50) && (fcn.00010fe0(4,0,&uStack_4c,0), uStack_4c != 0)) {
                uVar7 = (uStack_4c >> 0xe & 0xfff) + 1;
            }
        }
        else if ((0x8000001d < uStack_3c) && (fcn.00010410(0x80000001,NULL,0,&var_30h), (var_30h & 0x400000) != 0))
        {
            fcn.00010410(0x80000008,NULL,0,&var_2ch);
            uVar5 = 1 << (var_2ch >> 0xc & 0xf);
            fcn.00010410(0x8000001e,NULL,&var_28h,0);
            uVar7 = uVar5 / ((var_28h >> 8 & 0xff) + 1);
        }
        cVar1 = -1;
        iVar2 = uVar5 / uVar7 + -1;
        if (iVar2 == 0) {
            cVar4 = -1;
        }
        else {
            cVar4 = '\x1f';
            for (; 0 < iVar2; iVar2 = iVar2 * 2) {
                cVar4 = cVar4 + -1;
            }
        }
        uVar3 = cVar4 + 1;
        iVar2 = uVar7 + -1;
        if (iVar2 != 0) {
            cVar1 = '\x1f';
            for (; 0 < iVar2; iVar2 = iVar2 * 2) {
                cVar1 = cVar1 + -1;
            }
        }
        uVar6 = cVar1 + 1;
    }
    else {
        uVar7 = 1;
        uVar3 = auStack_58._0_4_ & 0x1f;
        do {
            fcn.00010fe0(0xb,uVar7,auStack_58,0);
            if (SUB41(auStack_58._4_4_,1) == '\x02') {
                uVar6 = (auStack_58._0_4_ & 0x1f) - uVar3;
                break;
            }
            uVar7 = uVar7 + 1;
        } while (SUB41(auStack_58._4_4_,1) != '\0');
    }
    uVar5 = arg1;
    if (arg4 != 0) {
        *arg4 = (1 << (uVar3 & 0x1f)) - 1U & uVar5;
    }
    if (arg3 != 0) {
        *arg3 = (1 << (uVar6 & 0x1f)) - 1U & uVar5 >> (uVar3 & 0x1f);
    }
    if (arg2 != 0) {
        *arg2 = uVar5 >> (uVar3 + uVar6 & 0x1f);
    }
    return;
}


/* fcn.00011030 @ 0x11030 */

uint64_t fcn.00011030(void)

{
    uint64_t in_CR0;
    
    return in_CR0 & 0xffffffffdfffffff | 0x40000000;
}


/* fcn.00011050 @ 0x11050 */

int64_t fcn.00011050(int64_t arg1)

{
    return arg1;
}


/* fcn.000139e8 @ 0x139e8 */

void fcn.000139e8(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t auStackX_8 [8];
    uint32_t auStackX_10 [2];
    
    fcn.00010410(0x80000000,auStackX_10,0,0);
    if (auStackX_10[0] < 0x80000008) {
        auStackX_8[0] = 0x24;
    }
    else {
        fcn.00010410(0x80000008,auStackX_8,0,0);
    }
    uVar1 = (1LL << (auStackX_8[0] & 0x3f)) - 1;
    *arg1 = uVar1;
    *arg2 = uVar1 & 0xfffffffffffff000;
    return;
}


/* fcn.00013948 @ 0x13948 */

int fcn.00013948(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int iVar2;
    int64_t in_stack_00000028;
    
    fcn.00010340(in_stack_00000028,0x300);
    iVar2 = 0;
    if (arg2 != 0) {
        puVar1 = in_stack_00000028 + 0x10;
        do {
            if ((*(arg1 + 8) & 0x800) != 0) {
                *(puVar1 + -4) = *arg1 & arg4;
                *(puVar1 + -2) = (~(*(arg1 + 8) & arg4) & arg3) + 1;
                iVar2 = iVar2 + 1;
                *puVar1 = *arg1;
            }
            arg1 = arg1 + 0x10;
            puVar1 = puVar1 + 6;
            arg2 = arg2 + -1;
        } while (arg2 != 0);
    }
    return iVar2;
}


/* fcn.00013e94 @ 0x13e94 */

void fcn.00013e94(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint8_t *puVar1;
    char cVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    char cVar6;
    uint16_t uVar7;
    uint8_t uVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint32_t uVar11;
    uint16_t uVar12;
    uint16_t in_stack_00000028;
    char in_stack_00000030;
    
    uVar7 = arg1;
    uVar12 = arg4;
    if (uVar12 <= in_stack_00000028) {
        uVar11 = arg1 & 0xffff;
        do {
            iVar9 = uVar12 * 0x20;
            puVar1 = iVar9 + 0x1c + arg2;
            *puVar1 = *puVar1 & 0xfe;
            cVar2 = *((uVar12 + (arg4 & 0xffff) * uVar11) + arg3);
            *(iVar9 + 0x1d + arg2) = cVar2;
            if (cVar2 != -1) {
                if (in_stack_00000030 == '\0') {
                    cVar6 = '\0';
                }
                else {
                    cVar6 = *((uVar12 * uVar11 + (arg4 & 0xffff)) + arg3);
                }
                *(iVar9 + 0x1d + arg2) = cVar6 + cVar2;
            }
            uVar12 = uVar12 + 1;
        } while (uVar12 <= in_stack_00000028);
    }
    uVar8 = 0;
    if ((*(arg2 + 0x1c + in_stack_00000028 * 0x20) & 1) == 0) {
        uVar11 = arg4 + 1;
        do {
            uVar5 = uVar11 & 0xffff;
            uVar4 = uVar11;
            uVar12 = uVar4;
            while (uVar12 <= in_stack_00000028) {
                iVar9 = uVar5 * 0x20;
                if ((*(iVar9 + 0x1c + arg2) & 1) == 0) {
                    uVar3 = *(((arg4 & 0xffff) * uVar7 + uVar5) + arg3);
                    if (uVar3 != 0xff) {
                        if (in_stack_00000030 == '\0') {
                            uVar10 = 0;
                        }
                        else {
                            uVar10 = *(((arg4 & 0xffff) + uVar5 * uVar7) + arg3);
                        }
                        if (uVar8 + uVar10 + uVar3 <= *(iVar9 + 0x1d + arg2)) {
                            *(iVar9 + 0x1e + arg2) = arg4;
                            *(iVar9 + 0x1d + arg2) = uVar10 + uVar8 + uVar3;
                        }
                    }
                }
                uVar12 = uVar5 + 1;
                uVar5 = uVar12;
            }
            arg4 = uVar7;
            uVar8 = 0xff;
            uVar5 = uVar11 & 0xffff;
            while (uVar4 <= in_stack_00000028) {
                iVar9 = uVar5 * 0x20;
                if (((*(iVar9 + 0x1c + arg2) & 1) == 0) && (*(iVar9 + 0x1d + arg2) < uVar8)) {
                    uVar8 = *(iVar9 + 0x1d + arg2);
                    arg4 = uVar5;
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
            }
            puVar1 = arg4 * 0x20 + 0x1c + arg2;
            *puVar1 = *puVar1 | 1;
        } while ((*(arg2 + 0x1c + in_stack_00000028 * 0x20) & 1) == 0);
    }
    return;
}


/* fcn.0001402c @ 0x1402c */

ulong fcn.0001402c(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int64_t iVar1;
    ulong in_stack_00000028;
    uint in_stack_00000030;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (*arg3 == arg2) {
        return 0x8000000000000009;
    }
    *(iVar1 + *arg3 * 0x18) = arg4;
    *(iVar1 + 8 + *arg3 * 0x18) = in_stack_00000028;
    *(iVar1 + 0x10 + *arg3 * 0x18) = in_stack_00000030;
    *arg3 = *arg3 + 1;
    return 0;
}


/* fcn.00014074 @ 0x14074 */

int64_t fcn.00014074(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint8_t uVar2;
    int64_t arg2_00;
    char cVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    int iVar13;
    int64_t iVar14;
    int64_t iVar15;
    uint16_t in_stack_00000028;
    uint in_stack_00000030;
    uint in_stack_00000034;
    int64_t in_stack_00000038;
    uint16_t in_stack_00000040;
    uint16_t in_stack_00000048;
    uint8_t in_stack_00000050;
    char in_stack_00000058;
    int64_t in_stack_00000060;
    uint32_t in_stack_00000068;
    int64_t in_stack_00000070;
    uint64_t uStack_38;
    
    arg2_00 = CONCAT44(in_stack_00000034,in_stack_00000030);
    uVar5 = *(in_stack_00000040 * 0x20 + arg2_00);
    iVar15 = *(in_stack_00000048 * 0x20 + arg2_00) - uVar5;
    cVar3 = '\a';
    for (uVar2 = in_stack_00000050; '\0' < uVar2; uVar2 = uVar2 * '\x02') {
        cVar3 = cVar3 + -1;
    }
    uVar7 = cVar3;
    uVar8 = in_stack_00000050 & ~(1 << (uVar7 & 0x1f));
    for (uVar2 = uVar8; '\0' < uVar2; uVar2 = uVar2 * '\x02') {
    }
    if (in_stack_00000060 == 0) {
        *((in_stack_00000040 * in_stack_00000028 + in_stack_00000048) + in_stack_00000038) = uVar7 != arg1;
        *((in_stack_00000040 + in_stack_00000048 * in_stack_00000028) + in_stack_00000038) = uVar7 == arg1;
    }
    iVar14 = 0;
    uVar12 = 0xffffffffffffffff;
    uStack_38 = 0;
    if (arg4 != 0) {
        piVar4 = arg3 + 8;
        do {
            if (iVar15 == 0) {
                return 0;
            }
            if ((piVar4[-1] <= uVar5) && (uVar10 = *piVar4 + piVar4[-1], uVar5 < uVar10)) {
                if (uVar10 < iVar15 + uVar5) {
                    iVar11 = uVar10 - uVar5;
                }
                else {
                    iVar11 = iVar15;
                }
                if ((uVar8 & 1 << (*(piVar4 + 1) & 0x1f)) != 0) {
                    if (uVar12 == 0xffffffffffffffff) {
                        uVar12 = uVar5;
                    }
                    iVar14 = iVar14 + iVar11;
                }
                uVar5 = uVar5 + iVar11;
                iVar15 = iVar15 - iVar11;
                if ((iVar14 != 0) && ((*(piVar4 + 1) == uVar7 || (iVar15 == 0)))) {
                    uVar10 = in_stack_00000040;
                    if (in_stack_00000040 <= in_stack_00000048) {
                        do {
                            if (*(uVar10 * 0x20 + arg2_00) == uVar12) break;
                            uVar9 = uVar10 + 1;
                            uVar10 = uVar9;
                        } while (uVar9 <= in_stack_00000048);
                    }
                    uVar6 = uVar10;
                    if (uVar10 <= in_stack_00000048) {
                        do {
                            if (*(uVar6 * 0x20 + arg2_00) == iVar14 + uVar12) break;
                            uVar9 = uVar6 + 1;
                            uVar6 = uVar9;
                        } while (uVar9 <= in_stack_00000048);
                    }
                    uVar9 = uVar6;
                    if ((in_stack_00000058 == '\x02') || (uVar10 == uVar6 - 1U)) {
                        if (in_stack_00000060 == 0) {
                            pcVar1 = (in_stack_00000048 + in_stack_00000028 * in_stack_00000040) + in_stack_00000038;
                            *pcVar1 = *pcVar1 + (uVar6 - uVar10);
                        }
                        else {
                            for (; uVar10 != uVar9; uVar10 = uVar10 + 1) {
                                iVar14 = fcn.0001402c(in_stack_00000060,in_stack_00000068,in_stack_00000070,
                                                      *(uVar10 * 0x20 + arg2_00));
                                if (iVar14 < 0) {
                                    return iVar14;
                                }
                            }
                        }
                    }
                    else {
                        fcn.00013e94(in_stack_00000028,arg2_00,in_stack_00000038,uVar10);
                        if (in_stack_00000060 == 0) {
                            pcVar1 = (in_stack_00000028 * in_stack_00000040 + in_stack_00000048) + in_stack_00000038;
                            *pcVar1 = *pcVar1 + *(uVar6 * 0x20 + 0x1d + arg2_00);
                        }
                        else {
                            while (uVar9 != uVar10) {
                                iVar13 = uVar6;
                                uVar9 = *(uVar6 * 0x20 + 0x1e + arg2_00);
                                if (*((iVar13 * in_stack_00000028 + uVar9) + in_stack_00000038) +
                                    *((uVar9 * in_stack_00000028 + iVar13) + in_stack_00000038) != 0) {
                                    iVar14 = fcn.0001402c(in_stack_00000060,in_stack_00000068,in_stack_00000070,
                                                          *(uVar9 * 0x20 + arg2_00));
                                    iVar13 = uVar6;
                                    if (iVar14 < 0) {
                                        return iVar14;
                                    }
                                }
                                uVar6 = uVar9;
                                if ((uVar9 != iVar13 - 1U) &&
                                   (iVar14 = fcn.00014074(arg1 & 0xffffffff,arg2,arg3,arg4), iVar14 < 0)) {
                                    return iVar14;
                                }
                            }
                        }
                    }
                    uVar12 = 0xffffffffffffffff;
                    iVar14 = 0;
                }
            }
            uStack_38 = uStack_38 + 1;
            piVar4 = piVar4 + 3;
        } while (uStack_38 < arg4);
    }
    return 0;
}


/* fcn.0001a0d8 @ 0x1a0d8 */

int64_t fcn.0001a0d8(uint32_t arg1)

{
    int64_t iVar1;
    int in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 != arg1) {
        if (in_register_0000000c == 0) {
            iVar1 = -1;
        }
        else {
            iVar1 = 0x1f;
            for (; 0 < in_register_0000000c; in_register_0000000c = in_register_0000000c * 2) {
                iVar1 = iVar1 + -1;
            }
        }
        return iVar1 + 0x20;
    }
    if (arg1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < uVar2; uVar2 = uVar2 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.00010360 @ 0x10360 */

int64_t fcn.00010360(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00013df4 @ 0x13df4 */

char fcn.00013df4(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    char cVar4;
    uint in_R8;
    uint64_t uVar5;
    uchar uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uchar *in_stack_00000028;
    
    uVar5 = CONCAT44(in_R8,arg3);
    cVar4 = '\0';
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0;
    if (arg2 != 0) {
        piVar3 = arg1 + 8;
        do {
            uVar2 = piVar3[-1];
            if (uVar2 <= uVar5) {
                uVar1 = uVar2 + *piVar3;
                if (uVar5 < uVar1) {
                    if (((uVar7 & 0xff) >> (*(piVar3 + 1) & 0x1f) & 1) == 0) {
                        uVar7 = uVar7 & 0xff | 1 << (*(piVar3 + 1) & 0x1f);
                        cVar4 = cVar4 + '\x01';
                    }
                    uVar6 = uVar7;
                    if (uVar5 + arg4 <= uVar1) break;
                    arg4 = arg4 + ((uVar5 - uVar2) - *piVar3);
                    uVar5 = uVar1;
                }
            }
            uVar6 = uVar7;
            uVar8 = uVar8 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar8 < arg2);
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar6;
    }
    return cVar4;
}


/* fcn.00013be8 @ 0x13be8 */

ulong fcn.00013be8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t arg3_00;
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    int64_t in_stack_00000028;
    int in_stack_00000030;
    
    uVar1 = *arg3;
    iVar9 = 0;
    iVar13 = 0;
    uVar8 = arg4 + in_stack_00000028;
    uVar10 = 0;
    uVar7 = uVar1;
    uVar11 = uVar1;
    if (uVar1 != 0) {
        puVar5 = arg1;
        do {
            if (uVar7 == uVar1) {
                uVar2 = *puVar5;
                if ((uVar2 <= arg4) && (arg4 < puVar5[1] + uVar2)) {
                    iVar13 = arg4 - uVar2;
                    uVar7 = uVar10;
                }
            }
            uVar2 = *puVar5;
            if ((uVar2 < uVar8) && (uVar8 <= puVar5[1] + uVar2)) {
                iVar9 = (*(arg1 + 8 + uVar10 * 0x18) - uVar8) + uVar2;
                uVar11 = uVar10;
                break;
            }
            uVar10 = uVar10 + 1;
            puVar5 = puVar5 + 3;
        } while (uVar10 < uVar1);
    }
    if ((uVar7 == uVar11) && (*(arg1 + 0x10 + uVar7 * 0x18) == in_stack_00000030)) {
        uVar3 = 0x8000000000000014;
    }
    else {
        if (((uVar7 != 0) && (iVar13 == 0)) && (*(arg1 + -8 + uVar7 * 0x18) == in_stack_00000030)) {
            uVar7 = uVar7 - 1;
            in_stack_00000028 = in_stack_00000028 + *(arg1 + 8 + uVar7 * 0x18);
            arg4 = arg4 - *(arg1 + 8 + uVar7 * 0x18);
        }
        if (((uVar11 != uVar1 - 1) && (iVar9 == 0)) && (*(arg1 + 0x28 + uVar11 * 0x18) == in_stack_00000030)) {
            uVar11 = uVar11 + 1;
            in_stack_00000028 = in_stack_00000028 + *(arg1 + 8 + uVar11 * 0x18);
        }
        iVar4 = (uVar11 - uVar7) + -1;
        if (iVar13 != 0) {
            iVar4 = (uVar11 - uVar7) + -2;
        }
        iVar6 = iVar4 + 1;
        if (iVar9 != 0) {
            iVar6 = iVar4;
        }
        if (arg2 < uVar1 - iVar6) {
            uVar3 = 0x8000000000000009;
        }
        else {
            iVar12 = uVar11 - iVar6;
            arg3_00 = (uVar1 - uVar11) * 0x18 + -0x18;
            iVar4 = arg1 + 0x18 + uVar11 * 0x18;
            arg1_00 = arg1 + 0x18 + iVar12 * 0x18;
            if ((arg3_00 != 0) && (arg1_00 != iVar4)) {
                fcn.00010300(arg1_00,iVar4,arg3_00);
            }
            *arg3 = *arg3 - iVar6;
            uVar8 = uVar7;
            if (iVar13 != 0) {
                uVar8 = uVar7 + 1;
                *(arg1 + 8 + uVar7 * 0x18) = iVar13;
            }
            if (iVar9 != 0) {
                *(arg1 + 8 + iVar12 * 0x18) = iVar9;
                *(arg1 + iVar12 * 0x18) = arg4 + in_stack_00000028;
                *(arg1 + 0x10 + iVar12 * 0x18) = *(arg1 + 0x10 + uVar11 * 0x18);
            }
            *(arg1 + uVar8 * 0x18) = arg4;
            *(arg1 + 8 + uVar8 * 0x18) = in_stack_00000028;
            *(arg1 + 0x10 + uVar8 * 0x18) = in_stack_00000030;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.00014bcc @ 0x14bcc */

uint8_t fcn.00014bcc(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint in_register_00000014;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_register_00000014,arg2);
    for (; iVar1 = *(arg1 + 0x10), iVar1 == 0; arg1 = arg1 + 0x18) {
        if (iVar2 == 1) {
            return 1;
        }
        iVar2 = iVar2 + -1;
    }
    if (iVar1 == 1) {
code_r0x00014c04:
        return 1 << (*(arg1 + 0x10) & 0x1f) | 1;
    }
    if (iVar1 != 4) {
        if (iVar1 == 5) goto code_r0x00014c04;
        if (iVar1 != 6) {
            return 0;
        }
    }
    return 0x51;
}


/* fcn.0001457c @ 0x1457c */

//WARNING: Removing unreachable block (ram,0x00014958)

int64_t fcn.0001457c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint16_t uVar12;
    uint16_t uVar13;
    int iVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint64_t uVar17;
    uint64_t uVar18;
    int *piVar19;
    uint64_t *puVar20;
    uint32_t uVar21;
    uint8_t uVar22;
    int64_t iVar23;
    int64_t in_stack_00000028;
    uchar in_stack_00000030;
    unkbyte7 in_stack_00000031;
    uint32_t in_stack_00000038;
    uint32_t in_stack_00000040;
    int64_t in_stack_00000048;
    
    iVar2 = *(arg3 + -0x18 + arg4 * 0x18);
    uVar8 = 0;
    iVar6 = *(arg3 + -0x10 + arg4 * 0x18);
    uVar21 = 0;
    iVar7 = arg3;
    if (arg4 != 0) {
        puVar20 = arg3 + 8;
        iVar23 = arg4;
        do {
            uVar16 = *puVar20;
            uVar18 = puVar20[-1];
            if (uVar16 != 0) {
                uVar3 = *CONCAT71(in_stack_00000031,in_stack_00000030);
                do {
                    if (uVar18 == 0) {
                        uVar10 = arg2;
                    }
                    else {
                        uVar10 = ~uVar18 + 1 & uVar18;
                    }
                    uVar17 = uVar10;
                    if (uVar16 < uVar10) {
                        if (uVar16 == 0) {
                            uVar17 = 0;
                        }
                        else {
                            uVar22 = fcn.0001a0d8(uVar16);
                            uVar17 = 1LL << (uVar22 & 0x3f);
                        }
                    }
                    if (uVar8 < uVar3 >> 5) {
                        iVar7 = uVar8 * 0x20;
                        *(iVar7 + in_stack_00000028) = uVar18;
                        *(iVar7 + 8 + in_stack_00000028) = uVar10;
                        uVar10 = puVar20[1];
                        *(iVar7 + 0x10 + in_stack_00000028) = uVar17;
                        puVar1 = iVar7 + 0x18 + in_stack_00000028;
                        *puVar1 = *puVar1 ^ (uVar10 ^ *(iVar7 + 0x18 + in_stack_00000028)) & 0x7f;
                    }
                    uVar18 = uVar18 + uVar17;
                    uVar8 = uVar8 + 1;
                    uVar16 = uVar16 - uVar17;
                } while (uVar16 != 0);
            }
            iVar7 = 0;
            uVar21 = uVar8;
            puVar20 = puVar20 + 3;
            iVar23 = iVar23 + -1;
        } while (iVar23 != 0);
    }
    uVar16 = 0;
    uVar11 = uVar21 + 1;
    uVar8 = uVar11 * uVar11 + uVar11 * 0x20;
    if (*CONCAT71(in_stack_00000031,in_stack_00000030) < uVar8) {
        *CONCAT71(in_stack_00000031,in_stack_00000030) = uVar8;
        iVar6 = -0x7ffffffffffffffb;
    }
    else {
        *(uVar21 * 0x20 + in_stack_00000028) = iVar2 + iVar6;
        iVar2 = uVar11 * 0x20 + in_stack_00000028;
        if (uVar11 != 0) {
            iVar6 = 1;
            uVar8 = uVar16;
            do {
                if (iVar6 != 0) {
                    iVar7 = 0;
                    fcn.00010360(uVar8 + iVar2,iVar6,0);
                }
                iVar14 = uVar16;
                uVar9 = (uVar11 - iVar14) - 1;
                if (uVar9 != 0) {
                    iVar7 = CONCAT71(iVar7 >> 8,0xff);
                    fcn.00010360((uVar21 + 2) * iVar14 + 1 + iVar2,uVar9,iVar7);
                }
                uVar16 = iVar14 + 1U;
                iVar6 = iVar6 + 1;
                uVar8 = uVar8 + uVar11;
            } while (iVar14 + 1U < uVar11);
        }
        uVar8 = 1;
        uVar9 = 0;
        if (uVar21 != 0) {
            piVar19 = in_stack_00000028 + 0x18;
            uVar15 = uVar11;
            do {
                if ((*piVar19 << 0x19) >> 0x19 == arg1) {
                    *(uVar8 + iVar2) = 0;
                    *(uVar15 + uVar9 + iVar2) = 1;
                }
                else {
                    *(uVar8 + iVar2) = 1;
                    *(uVar15 + uVar9 + iVar2) = 0;
                }
                uVar15 = uVar15 + uVar11;
                uVar9 = uVar9 + 1;
                uVar8 = uVar8 + uVar21 + 2;
                piVar19 = piVar19 + 8;
            } while (uVar9 < uVar21);
        }
        uVar22 = 2;
        do {
            uVar21 = 0;
            uVar12 = 0;
            if (uVar11 != 0) {
                do {
                    uVar13 = uVar12 + 2;
                    uVar9 = uVar13;
                    if (uVar9 < uVar11) {
                        do {
                            iVar6 = *(uVar12 * 0x20 + in_stack_00000028);
                            uVar8 = *(uVar13 * 0x20 + in_stack_00000028) - iVar6;
                            if (*(uVar12 * 0x20 + 8 + in_stack_00000028) < uVar8) break;
                            if ((*(uVar21 * uVar11 + uVar9 + iVar2) == -1) && ((uVar8 & uVar8 - 1) == 0)) {
                                uVar4 = fcn.00013df4(arg3,arg4,iVar6,uVar8);
                                if (uVar4 == uVar22) {
                                    fcn.00014074(arg1 & 0xffffffff,arg2,arg3,arg4);
                                }
                                else if (uVar22 == 2) break;
                            }
                            uVar13 = uVar13 + 1;
                            uVar9 = uVar13;
                        } while (uVar9 < uVar11);
                    }
                    uVar12 = uVar12 + 1;
                    uVar21 = uVar12;
                } while (uVar12 < uVar11);
            }
            iVar6 = 0;
            uVar22 = uVar22 + 1;
        } while (uVar22 < 4);
        fcn.00013e94(uVar11 & 0xffff,in_stack_00000028,iVar2,0);
        uVar12 = uVar11 - 1;
        do {
            do {
                if (uVar12 == 0) goto code_r0x00014a7d;
                cVar5 = -1;
                iVar7 = uVar12 * 0x20;
                uVar13 = *(iVar7 + 0x1e + in_stack_00000028);
                if (*(uVar13 * uVar11 + uVar12 + iVar2) != '\0') {
                    iVar6 = *(uVar13 * 0x20 + in_stack_00000028);
                    cVar5 = fcn.00013df4(arg3,arg4,iVar6,*(iVar7 + in_stack_00000028) - iVar6);
                    iVar6 = fcn.0001402c(in_stack_00000038,in_stack_00000040,in_stack_00000048,iVar6);
                    if (iVar6 < 0) goto code_r0x00014a7d;
                }
                uVar21 = uVar12;
                uVar12 = uVar13;
            } while (uVar13 == uVar21 - 1);
            if (cVar5 == -1) {
                iVar6 = *(uVar13 * 0x20 + in_stack_00000028);
                fcn.00013df4(arg3,arg4,iVar6,*(iVar7 + in_stack_00000028) - iVar6);
            }
            iVar6 = fcn.00014074(arg1 & 0xffffffff,arg2,arg3,arg4);
        } while (-1 < iVar6);
    }
code_r0x00014a7d:
    return iVar6;
}


/* fcn.00014a90 @ 0x14a90 */

ulong fcn.00014a90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int *piVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t in_stack_00000028;
    
    uVar4 = 0;
    uVar5 = arg2 & 0xffffffff;
    if (arg2 != 0) {
        piVar3 = arg1 + 8;
        do {
            if (((*piVar3 != 0) && (piVar3[1] == 6)) &&
               (iVar1 = fcn.00013be8(arg3,arg4,in_stack_00000028,piVar3[-1]), iVar1 == -0x7ffffffffffffff7)) {
                return 0x8000000000000009;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
        piVar2 = arg1 + 0x10;
        do {
            if (((*(piVar2 + -2) != 0) && (*piVar2 != 6)) &&
               ((*piVar2 != 0 &&
                (iVar1 = fcn.00013be8(arg3,arg4,in_stack_00000028,*(piVar2 + -4)), iVar1 == -0x7ffffffffffffff7))))
            {
                return 0x8000000000000009;
            }
            uVar4 = uVar4 + 1;
            piVar2 = piVar2 + 6;
        } while (uVar4 < uVar5);
    }
    uVar4 = 0;
    if (uVar5 != 0) {
        piVar3 = arg1 + 8;
        do {
            if (((*piVar3 != 0) && (piVar3[1] == 0)) &&
               (iVar1 = fcn.00013be8(arg3,arg4,in_stack_00000028,piVar3[-1]), iVar1 == -0x7ffffffffffffff7)) {
                return 0x8000000000000009;
            }
            uVar4 = uVar4 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar4 < uVar5);
    }
    return 0;
}


/* fcn.00014c10 @ 0x14c10 */

int64_t fcn.00014c10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint8_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint *arg3_00;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int iVar15;
    uint64_t *in_stack_00000030;
    uint32_t in_stack_00000038;
    uint32_t in_stack_00000040;
    uint *in_stack_00000048;
    
    uVar10 = 0;
    *in_stack_00000048 = 0;
    uVar14 = 0;
    if (arg4 != 0) {
        do {
            uVar6 = *(arg3 + uVar10 * 0x18);
            arg3_00 = in_stack_00000048;
            while (iVar9 = uVar10, uVar10 < arg4) {
                if (uVar6 == 0) {
                    uVar5 = arg2;
                }
                else {
                    uVar5 = ~uVar6 + 1 & uVar6;
                }
                iVar4 = uVar10 * 3;
                uVar5 = uVar5 + uVar6;
                while (uVar13 = uVar5, uVar13 <= *(arg3 + 8 + iVar4 * 8) + *(arg3 + iVar4 * 8)) {
                    if (((uVar14 <= *in_stack_00000030) && (*(arg3 + 0x10 + iVar4 * 8) != arg1)) &&
                       (iVar3 = fcn.0001402c(in_stack_00000038,in_stack_00000040,arg3_00,uVar6), iVar3 < 0)) {
                        return iVar3;
                    }
                    if (uVar13 == 0) {
                        uVar6 = arg2;
                    }
                    else {
                        uVar6 = ~uVar13 + 1 & uVar13;
                    }
                    uVar5 = uVar13 + uVar6;
                    uVar6 = uVar13;
                }
                iVar3 = *(arg3 + iVar4 * 8);
                *(arg3 + iVar4 * 8) = uVar6;
                piVar1 = arg3 + 8 + iVar4 * 8;
                *piVar1 = *piVar1 + (iVar3 - uVar6);
                if (*(arg3 + 8 + iVar4 * 8) != 0) break;
                uVar10 = iVar9 + 1;
            }
            uVar5 = uVar14;
            if (uVar10 == arg4) break;
            iVar4 = arg3 + uVar10 * 0x18;
            uVar12 = *(iVar4 + 0x10);
            if (uVar12 == 0) {
                if (arg4 - uVar10 == 1) {
                    uVar2 = 1;
                }
                else {
                    uVar2 = fcn.00014bcc(iVar4 + 0x18,(arg4 - uVar10) - 1);
                }
            }
            else if (uVar12 == 1) {
code_r0x00014d7b:
                uVar2 = 1 << (uVar12 & 0x1f) | 1;
            }
            else {
                if (uVar12 != 4) {
                    if (uVar12 == 5) goto code_r0x00014d7b;
                    if (uVar12 != 6) {
                        uVar2 = 0;
                        goto code_r0x00014d9c;
                    }
                }
                uVar2 = 0x51;
            }
code_r0x00014d9c:
            uVar12 = iVar9 + 1;
            uVar11 = uVar12;
            uVar13 = uVar10;
            if (uVar11 < arg4) {
                uVar7 = uVar11;
                do {
                    if ((uVar2 >> (*(arg3 + 0x10 + uVar7 * 0x18) & 0x1f) & 1) == 0) break;
                    uVar12 = uVar12 + 1;
                    uVar13 = uVar13 + 1;
                    uVar7 = uVar12;
                } while (uVar7 < arg4);
            }
            if (uVar6 == 0) {
                uVar7 = arg2;
            }
            else {
                uVar7 = ~uVar6 + 1 & uVar6;
            }
            iVar3 = (*(arg3 + 8 + uVar13 * 0x18) - uVar6) + *(arg3 + uVar13 * 0x18);
            uVar13 = uVar11;
            if (iVar3 == 0) {
                uVar8 = 0;
            }
            else {
                uVar2 = fcn.0001a0d8(iVar3);
                uVar8 = 1LL << (uVar2 & 0x3f);
            }
            if (uVar7 < uVar8) {
                uVar8 = uVar7;
            }
            uVar8 = uVar8 + uVar6;
            while ((iVar15 = uVar10, uVar11 < arg4 && (*(arg3 + uVar11 * 0x18) < uVar8))) {
                uVar10 = iVar15 + 1;
                uVar11 = uVar13 + 1;
                uVar13 = uVar11;
            }
            iVar3 = *(arg3 + 8 + uVar10 * 0x18);
            *(arg3 + 8 + uVar10 * 0x18) = uVar8 - *(arg3 + uVar10 * 0x18);
            uVar6 = *in_stack_00000030;
            iVar4 = fcn.0001457c(arg1 & 0xffffffff,arg2,iVar4,(iVar15 - iVar9) + 1);
            if (iVar4 == -0x7ffffffffffffffb) {
                uVar5 = uVar6;
                if (uVar6 < uVar14) {
                    uVar5 = uVar14;
                }
                iVar4 = 0;
            }
            if (iVar4 < 0) {
                return iVar4;
            }
            if (iVar3 == *(arg3 + 8 + uVar10 * 0x18)) {
                uVar10 = iVar15 + 1;
            }
            else {
                *(arg3 + 8 + uVar10 * 0x18) = iVar3 - *(arg3 + 8 + uVar10 * 0x18);
                *(arg3 + uVar10 * 0x18) = uVar8;
            }
            uVar14 = uVar5;
        } while (uVar10 < arg4);
        if (*in_stack_00000030 < uVar5) {
            *in_stack_00000030 = uVar5;
            return -0x7ffffffffffffffb;
        }
    }
    return 0;
}


/* fcn.0001388c @ 0x1388c */

uint64_t fcn.0001388c(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uStackX_8;
    
    uVar1 = fcn.000111b0();
    fcn.00010440();
    *(arg1 + 8) = uVar1 >> 9 & 1;
    fcn.00011030();
    uVar1 = fcn.00010450();
    *arg1 = uVar1;
    fcn.00011050(uVar1 & 0xffffffffffffff7f);
    fcn.000102f0();
    uStackX_8 = rdmsr(0x2ff);
    uStackX_8 = uStackX_8 & 0xfffffffffffff7ff;
    wrmsr(0x2ff,uStackX_8);
    return uStackX_8;
}


/* fcn.00011010 @ 0x11010 */

uint64_t fcn.00011010(void)

{
    uint64_t in_CR0;
    
    return in_CR0 & 0xffffffff9fffffff;
}


/* fcn.000104c0 @ 0x104c0 */

void fcn.000104c0(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = InterruptDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00010937 @ 0x10937 */

void fcn.00010937(int64_t arg1)

{
    *arg1 = 0x104f0;
    *(arg1 + 8) = 0xf;
    *(arg1 + 0x10) = 0x106d0;
    *0x104f5 = 0x10701;
    *0x10504 = 0x10701;
    *0x10513 = 0x10701;
    *0x10522 = 0x10701;
    *0x10531 = 0x10701;
    *0x10540 = 0x10701;
    *0x1054f = 0x10701;
    *0x1055e = 0x10701;
    *0x1056d = 0x10701;
    *0x1057c = 0x10701;
    *0x1058b = 0x10701;
    *0x1059a = 0x10701;
    *0x105a9 = 0x10701;
    *0x105b8 = 0x10701;
    *0x105c7 = 0x10701;
    *0x105d6 = 0x10701;
    *0x105e5 = 0x10701;
    *0x105f4 = 0x10701;
    *0x10603 = 0x10701;
    *0x10612 = 0x10701;
    *0x10621 = 0x10701;
    *0x10630 = 0x10701;
    *0x1063f = 0x10701;
    *0x1064e = 0x10701;
    *0x1065d = 0x10701;
    *0x1066c = 0x10701;
    *0x1067b = 0x10701;
    *0x1068a = 0x10701;
    *0x10699 = 0x10701;
    *0x106a8 = 0x10701;
    *0x106b7 = 0x10701;
    *0x106c6 = 0x10701;
    *0x106d5 = 0x106df;
    return;
}


/* fcn.00010a75 @ 0x10a75 */

void fcn.00010a75(int64_t arg1,int64_t arg2)

{
    *(arg1 + 1) = arg2;
    return;
}


/* fcn.00016100 @ 0x16100 */

void fcn.00016100(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    unkuint6 *pVar6;
    
    iVar4 = *(arg3 + 0x10);
    uVar2 = fcn.00011070();
    uVar5 = 0;
    if (*arg3 != 0) {
        pVar6 = arg1 + 6;
        iVar4 = iVar4 + 0x48;
        do {
            *(pVar6 + -4) = uVar2;
            iVar1 = *(iVar4 + -0x3c);
            if (iVar1 != 0) {
                if (iVar1 == 1) {
code_r0x00016188:
                    *(iVar4 + -0x38) = *pVar6 * 0x10000 + *(pVar6 + -6);
                }
                else if (iVar1 == 2) {
                    *(iVar4 + -0x48) = 1;
                    iVar3 = *(arg2 + 0x10);
                    if ((*(arg2 + 8) != 0) && (iVar4 != iVar3)) {
                        fcn.00010300(iVar4,iVar3,*(arg2 + 8));
                    }
                    fcn.00010a75(iVar4,CONCAT71(iVar3 >> 8,uVar5));
                    goto code_r0x00016188;
                }
                iVar3 = *(arg2 + 8) * uVar5 + *arg2;
                *(pVar6 + -6) = iVar3;
                *(pVar6 + 2) = iVar3 >> 0x20;
                *pVar6 = iVar3 >> 0x10;
                *(pVar6 + -1) = 0x8e;
            }
            uVar5 = uVar5 + 1;
            iVar4 = iVar4 + 0x58;
            pVar6 = pVar6 + 2;
        } while (uVar5 < *arg3);
    }
    return;
}


/* fcn.000111a0 @ 0x111a0 */

void fcn.000111a0(ulong *param_1)

{
    InterruptDescriptorTableRegister(*param_1);
    return;
}


/* fcn.000161f8 @ 0x161f8 */

uint64_t fcn.000161f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint64_t uVar2;
    uint *arg1_00;
    uint *arg2_00;
    uint32_t uVar3;
    uint *puVar4;
    uint8_t *puVar5;
    uint uStackY_118;
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    arg1_00 = &uStackY_118;
    fcn.0001934c(arg1_00,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    arg2_00 = NULL;
    while (uStackY_118 != 0) {
        arg2_00 = arg2_00 + 1;
        uStackY_118._0_1_ = *(&uStackY_118 + arg2_00);
    }
    uVar2 = *0x1b00c;
    uVar3 = 0x22;
    if (*0x1bc80 != '\0') {
        uVar3 = *0x1b00c;
    }
    if ((uVar3 & 2) != 0) {
        puVar5 = &uStackY_118;
        arg1_00 = arg2_00;
        while (arg1_00 != NULL) {
            do {
                uVar1 = in(0x3fd);
                uVar2 = uVar1;
            } while ((uVar1 & 0x20) == 0);
            puVar4 = NULL;
            do {
                if (arg1_00 == NULL) goto code_r0x000162a1;
                uVar2 = *puVar5;
                out(0x3f8,*puVar5);
                puVar4 = puVar4 + 1;
                arg1_00 = arg1_00 + -1;
                puVar5 = puVar5 + 1;
            } while (puVar4 < 0x10);
        }
    }
code_r0x000162a1:
    if ((uVar3 & 0x10) != 0) {
        uVar2 = fcn.0001a9c0(arg1_00,&uStackY_118,arg2_00);
    }
    if ((uVar3 & 0x20) != 0) {
        uVar2 = fcn.0001a448(4,&uStackY_118,arg2_00);
    }
    return uVar2;
}


/* fcn.00012bd8 @ 0x12bd8 */

ulong fcn.00012bd8(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uchar uVar5;
    uchar uVar6;
    uint32_t uVar7;
    
    uVar7 = 0x1c200;
    if (*0x1bc81 != '\0') {
        uVar7 = *0x1b008;
    }
    if ((uVar7 == 0) || (uVar7 != (uVar7 / 0x2580) * 0x2580)) {
        uVar7 = 0x1c200;
    }
    uVar1 = 0x1c200 / uVar7;
    uVar2 = in(0x3fa);
    uVar3 = in(0x3fb);
    uVar4 = in(0x3fb);
    out(0x3fb,uVar4 | 0x80);
    uVar5 = in(0x3f9);
    uVar6 = in(0x3f8);
    uVar4 = in(0x3fb);
    out(0x3fb,uVar4 & 0x7f);
    if (CONCAT11(uVar5,uVar6) != uVar1 || ((uVar3 & 0x3f) != 3 || (uVar2 & 0x21) != 1)) {
        out(0x3fb,0x80);
        out(0x3f9,uVar1 >> 8);
        out(0x3f8,uVar1);
        out(0x3fb,3);
        out(0x3fa,7);
        out(0x3fc,0);
    }
    return 0;
}


/* fcn.0001a914 @ 0x1a914 */

void fcn.0001a914(void)

{
    uint *puVar1;
    uint64_t arg1;
    
    arg1 = *0x1b034;
    if ((*0xfdcb0618 & 2) == 0) {
        arg1 = 0xf1000;
    }
    puVar1 = fcn.0001ac98(arg1);
    if (((puVar1 & 0xffffff00) != 0) && ((puVar1 & 0xfffff000) != 0xfffff000)) {
        fcn.0001a8e0(puVar1 & 0xfffff000,arg1);
        if (puVar1[0x3f] == 0x44570110) {
            puVar1[3] = 0x80;
            puVar1[1] = 0;
            *puVar1 = 1;
            puVar1[3] = 3;
            puVar1[2] = 1;
            puVar1[4] = 2;
        }
        else {
            *(puVar1 + 3) = 0x80;
            *(puVar1 + 1) = 0;
            *puVar1 = 1;
            *(puVar1 + 3) = 3;
            *(puVar1 + 2) = 1;
            *(puVar1 + 1) = 2;
        }
    }
    return;
}


/* fcn.00015ac4 @ 0x15ac4 */

void fcn.00015ac4(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint64_t arg2_00;
    char *arg3;
    int64_t arg3_00;
    uint64_t arg4;
    int64_t iVar3;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if (uVar2 < 0x1e) {
        arg3 = *(uVar2 * 8 + 0x1b6a0);
    }
    else {
        arg3 = "Reserved";
    }
    uVar1 = fcn.000133b4();
    arg4 = uVar1;
    fcn.000161f8(0x1b0f0,uVar2,arg3,arg4);
    if ((1 << (arg1 & 0x1f) & 0x20227d00U) != 0) {
        arg2_00 = *arg2;
        fcn.000161f8(0x1b130,arg2_00,arg3,arg4);
        if (uVar2 == 0xe) {
            uVar2 = *arg2;
            arg2_00 = uVar2 >> 4 & 1;
            arg4 = uVar2 >> 2 & 1;
            arg3 = uVar2 >> 3 & 1;
            fcn.000161f8(0x1b148,arg2_00,arg3,arg4);
        }
        fcn.000161f8(0x1b178,arg2_00,arg3,arg4);
    }
    fcn.000161f8(0x1b180,*(arg2 + 0x2a0),*(arg2 + 0x2c8),*(arg2 + 0x268));
    fcn.000161f8(0x1b1b0,*(arg2 + 0x310),*(arg2 + 0x308),*(arg2 + 0x300));
    iVar3 = *(arg2 + 0x2e8);
    fcn.000161f8(0x1b1e0,*(arg2 + 0x2f8),*(arg2 + 0x2f0),iVar3);
    fcn.000161f8(0x1b210,*(arg2 + 0x2e0),*(arg2 + 0x2d8),iVar3);
    fcn.000161f8(0x1b230,*(arg2 + 0x318),*(arg2 + 800),*(arg2 + 0x328));
    iVar3 = *(arg2 + 0x340);
    fcn.000161f8(0x1b260,*(arg2 + 0x330),*(arg2 + 0x338),iVar3);
    fcn.000161f8(0x1b290,*(arg2 + 0x348),*(arg2 + 0x350),iVar3);
    iVar3 = *(arg2 + 0x2b0);
    fcn.000161f8(0x1b2b0,*(arg2 + 0x2c0),*(arg2 + 0x2b8),iVar3);
    fcn.000161f8(0x1b2e0,*(arg2 + 0x2a8),*(arg2 + 0x2d0),iVar3);
    iVar3 = *(arg2 + 0x250);
    fcn.000161f8(0x1b300,*(arg2 + 0x238),*(arg2 + 0x248),iVar3);
    fcn.000161f8(0x1b330,*(arg2 + 600),*(arg2 + 0x260),iVar3);
    fcn.000161f8(0x1b350,*(arg2 + 0x208),*(arg2 + 0x210),*(arg2 + 0x218));
    fcn.000161f8(0x1b380,*(arg2 + 0x220),*(arg2 + 0x228),*(arg2 + 0x230));
    fcn.000161f8(0x1b3b0,*(arg2 + 0x280),*(arg2 + 0x288),*(arg2 + 0x270));
    iVar3 = *(arg2 + 0x278);
    arg3_00 = *(arg2 + 0x298);
    fcn.000161f8(0x1b3d8,*(arg2 + 0x290),arg3_00,iVar3);
    fcn.000161f8(0x1b400,arg2 + 8,arg3_00,iVar3);
    return;
}


/* fcn.00011070 @ 0x11070 */

void fcn.00011070(void)

{
    return;
}


/* fcn.0001934c @ 0x1934c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001934c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x000193a7;
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
code_r0x000193a7:
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
        uVar5 = fcn.00012f6c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00012f40(arg4);
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
            pcVar9 = 0x1b82c;
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
code_r0x00019731:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1b82c;
                }
                else {
                    pcVar9 = 0x1b830;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000194f0:
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
                            goto code_r0x00019693;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x000196aa;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00019693;
                                }
                                goto code_r0x000196aa;
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
code_r0x00019693:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000194f0;
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
                                goto code_r0x000194f0;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x000196aa;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00019693;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x000196aa:
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
                                fcn.0001a078(&var_68h_2,0x26,0,0x1b7c0);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00019731;
                                if (uStack_a8 == 0x53) goto code_r0x00019940;
                                if (uStack_a8 == 0x58) goto code_r0x00019a36;
                                if (uStack_a8 == 0x61) goto code_r0x00019949;
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
                                    goto code_r0x000194d5;
                                }
                                if (uStack_a8 != 100) goto code_r0x000194d1;
                                goto code_r0x00019a4d;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1b82c;
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
                        goto code_r0x00019c48;
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
                                    iVar13 = 0x1b8cb;
                                    goto code_r0x000199fd;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000199fd:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00019c48;
                            }
                            fcn.0001a078(&var_68h_2,0x26,0,0x1b824);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00019940:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00019949:
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
                                goto code_r0x00019c48;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000194d1;
                                    goto code_r0x00019a3a;
                                }
                                goto code_r0x00019a3f;
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
                                goto code_r0x00019c48;
                            }
                            fcn.0001a078(&var_68h_2,0x26,0,0x1b808);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00019c48;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00019a36:
                    uVar5 = uVar5 | 0x20;
code_r0x00019a3a:
                    uVar5 = uVar5 | 0x80;
code_r0x00019a3f:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00019a4d:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00019a8f;
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
code_r0x00019a8f:
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
code_r0x00019b17:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00019b17;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF\b\x04\x02"[uVar11 % uVar17];
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
code_r0x000194d1:
                    pcVar9 = &uStack_a8;
code_r0x000194d5:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00019c48:
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
                arg1 = fcn.00019318(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00019318(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00019318(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00019318(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.0001a9c0 @ 0x1a9c0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001a9c0(ulong noname_0,uint32_t *arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t **arg1_00;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int aiStackX_20 [2];
    uint32_t var_48h;
    int aiStack_48 [2];
    uint32_t *puStack_40;
    uint32_t *apuStack_38 [2];
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    arg1_00 = &puStack_40;
    cVar1 = fcn.0001aac0(noname_0,arg1_00,aiStackX_20);
    if ((cVar1 != '\0') && (arg1 != NULL)) {
        if (aiStackX_20[0] == 1) {
            uVar2 = puStack_40[0x1f];
        }
        else {
            uVar2 = *(puStack_40 + 0x1f);
        }
        if (uVar2 != 0xff) {
            uVar7 = 0;
            iVar5 = 1000000;
            if (arg2 == 0) {
                return 0;
            }
            uVar6 = 0;
            do {
                while( true ) {
                    if (aiStackX_20[0] == 1) {
                        arg1_00 = puStack_40[0x1f];
                    }
                    else {
                        arg1_00 = CONCAT71(arg1_00 >> 8,*(puStack_40 + 0x1f));
                    }
                    if ((arg1_00 & 2) == 0) break;
                    if (aiStackX_20[0] == 1) {
                        *puStack_40 = *(uVar6 + arg1);
                    }
                    else {
                        *puStack_40 = *(uVar6 + arg1);
                    }
                    uVar7 = uVar7 + 1;
                    uVar6 = uVar7;
                    if (arg2 <= uVar6) {
                        return arg2;
                    }
                }
                if (iVar5 == 0) {
                    arg1_00 = apuStack_38;
                    puVar3 = puStack_40;
                    cVar1 = fcn.0001aac0(puStack_40,arg1_00,aiStack_48);
                    if (cVar1 == '\0') {
                        return 0;
                    }
                    if (aiStack_48[0] == 1) {
                        uVar4 = apuStack_38[0][4];
                    }
                    else {
                        uVar4 = CONCAT71(puVar3 >> 8,apuStack_38[0][1]);
                    }
                    uVar2 = uVar4 >> 5;
                    if ((uVar2 & 1) == 0) {
                        return 0;
                    }
                    fcn.0001ac44(CONCAT71(uVar4 >> 8,uVar2) & 0xffffffffffffff01,arg1_00);
                    iVar5 = 1000000;
                }
                fcn.000130cc(10,arg1_00);
                iVar5 = iVar5 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.0001a448 @ 0x1a448 */

ulong fcn.0001a448(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint32_t arg2_00;
    int64_t iVar1;
    uint8_t uVar2;
    uint64_t noname_1;
    bool bVar3;
    bool bVar4;
    int32_t in_stack_00000030;
    
    if (arg3 == 0) {
        return 0;
    }
    if (*0xfe1000e8 == 0xff) {
        return 0x8000000000000015;
    }
    if ((*0xfe1000e8 & 1) == 0) {
        return 0x8000000000000015;
    }
    uVar2 = *0xfe1000e8 >> 1 & 3;
    noname_1 = *0xfe1000e8 >> 1 & 0xffffffffffffff03;
    arg2_00 = arg1;
    if (uVar2 == 0) {
        bVar3 = arg2_00 == 1;
        bVar4 = arg2_00 == 2;
    }
    else if (uVar2 == 1) {
        bVar3 = arg2_00 - 1 < 2;
        bVar4 = arg2_00 - 1 == 2;
    }
    else {
        if (noname_1 != '\x02') {
            if (noname_1 != '\x03') {
                return 0x8000000000000015;
            }
            goto code_r0x0001a4c7;
        }
        bVar3 = arg2_00 - 1 < 3;
        bVar4 = arg2_00 - 1 == 3;
    }
    if (!bVar3 && !bVar4) {
        return 0x8000000000000015;
    }
code_r0x0001a4c7:
    iVar1 = fcn.0001a328(in_stack_00000030);
    if (iVar1 != 0) {
        fcn.0001a4f8(iVar1,noname_1,arg3,arg2_00);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00011110 @ 0x11110 */

void fcn.00011110(void)

{
    return;
}


/* fcn.00011170 @ 0x11170 */

void fcn.00011170(void)

{
    return;
}


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(void)

{
    return;
}


/* fcn.00011180 @ 0x11180 */

void fcn.00011180(void)

{
    return;
}


/* fcn.00011140 @ 0x11140 */

void fcn.00011140(void)

{
    return;
}


/* fcn.00011130 @ 0x11130 */

void fcn.00011130(void)

{
    return;
}


/* fcn.000104b0 @ 0x104b0 */

void fcn.000104b0(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = GlobalDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.000110f0 @ 0x110f0 */

ushort fcn.000110f0(void)

{
    ushort uVar1;
    
    uVar1 = TaskRegister();
    return uVar1;
}


/* fcn.00011100 @ 0x11100 */

int64_t fcn.00011100(int64_t arg1)

{
    return arg1;
}


/* fcn.00011120 @ 0x11120 */

int64_t fcn.00011120(int64_t arg1)

{
    return arg1;
}


/* fcn.000110c0 @ 0x110c0 */

int64_t fcn.000110c0(int64_t arg1)

{
    return arg1;
}


/* fcn.000110a0 @ 0x110a0 */

int64_t fcn.000110a0(int64_t arg1)

{
    return arg1;
}


/* fcn.000110b0 @ 0x110b0 */

int64_t fcn.000110b0(int64_t arg1)

{
    return arg1;
}


/* fcn.00011160 @ 0x11160 */

int64_t fcn.00011160(int64_t arg1)

{
    return arg1;
}


/* fcn.000110e0 @ 0x110e0 */

int64_t fcn.000110e0(int64_t arg1)

{
    return arg1;
}


/* fcn.00011060 @ 0x11060 */

uint64_t fcn.00011060(int64_t arg1)

{
    TaskRegister(arg1 & 0xffffffffU);
    return arg1 & 0xffffffffU;
}


/* fcn.00018bb4 @ 0x18bb4 */

void fcn.00018bb4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    char cVar3;
    uint32_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int aiStackX_8 [2];
    uint32_t uStackX_18;
    uint8_t uStackX_1c;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar5 + 1000) != 0) {
        uVar4 = fcn.00013328();
        fcn.00013458(uVar4,0,0,aiStackX_8);
        if (aiStackX_8[0] == 0) {
            uVar9 = rdmsr(0x17);
            uStackX_1c = uVar9 >> 0x32 & 7;
            fcn.00010410(1,&uStackX_18,0,0);
            if ((((arg2 == *(iVar5 + 0xc)) ||
                 (iVar8 = *(iVar5 + 0xc) * 0xd8 + *(iVar5 + 0x3b8), *(iVar8 + 0xb8) != uStackX_18)) ||
                (*(iVar8 + 0xbc) != uStackX_1c)) || (uVar9 = *(iVar8 + 0xc0), uVar9 == 0)) {
                uVar7 = *(iVar5 + 0x3e0);
                uVar4 = 0;
                uVar9 = 0;
                uVar1 = uVar7 + *(iVar5 + 1000);
                do {
                    uVar6 = uVar1 - uVar7;
                    if (uVar6 < 0x30) {
                        cVar3 = '\0';
                    }
                    else {
                        cVar3 = fcn.0001a168(uVar7,uVar6,uVar4,&uStackX_18);
                    }
                    if (cVar3 == '\0') {
                        uVar6 = 0x400;
                    }
                    else {
                        uVar4 = *(uVar7 + 4);
                        uVar6 = 0x800;
                        uVar9 = uVar7;
                        if (*(uVar7 + 0x1c) != 0) {
                            uVar6 = *(uVar7 + 0x20);
                        }
                    }
                    uVar7 = uVar7 + uVar6;
                } while (uVar7 < uVar1);
            }
            else {
                uVar4 = *(uVar9 + 4);
            }
            if (uVar4 != 0) {
                *(*(iVar5 + 0x3b8) + 0xc0 + arg2 * 0xd8) = uVar9;
            }
            wrmsr(0x8b,0);
            fcn.00010410(1,NULL,0,0);
            uVar2 = rdmsr(0x8b);
            if (uVar2 >> 0x20 < uVar4) {
                wrmsr(0x79,uVar9 + 0x30);
            }
            wrmsr(0x8b,0);
            fcn.00010410(1,NULL,0,0);
            uVar2 = rdmsr(0x8b);
            *(*(iVar5 + 0x3b8) + 200 + arg2 * 0xd8) = uVar2 >> 0x20;
        }
    }
    return;
}


/* fcn.000171e0 @ 0x171e0 */

void fcn.000171e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int *piVar2;
    bool bVar3;
    uchar uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    int64_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    int64_t arg1_00;
    int64_t iVar12;
    uint64_t uVar13;
    uint64_t uStackX_8;
    ulong in_stack_00000028;
    char in_stack_00000030;
    
    uVar10 = 0;
    *(arg1 + 0xa0) = 0;
    bVar3 = false;
    uVar11 = arg1;
    if ((*(arg1 + 0x3f0) != '\0') || (*(arg1 + 0xf0) != 3)) {
        bVar3 = true;
        fcn.000170f0(uVar11);
        if (*(arg1 + 0x3f8) == -1) {
            if (*(arg1 + 0x3f1) == '\0') {
                uVar13 = uVar10;
            }
            else {
                uStackX_8 = 0xffffffff;
                (**(*0x1bc60 + 0x28))(1,0,1,&uStackX_8);
                uVar13 = uStackX_8;
            }
            *(arg1 + 0x3f8) = uVar13;
        }
        fcn.00016ea4(arg1);
        fcn.00016360(arg1);
    }
    if (*(arg1 + 0x3b0) == '\x02') {
        iVar8 = fcn.0001a09c();
        uVar4 = (**(iVar8 + 8))();
        *(arg1 + 0x3b1) = uVar4;
    }
    iVar8 = *(arg1 + 0x3c0);
    if (arg2 == '\0') {
        iVar12 = arg3 * 0xd8 + *(arg1 + 0x3b8);
        *(iVar12 + 0x10) = arg4;
        *(iVar12 + 0x18) = in_stack_00000028;
        fcn.000162ec(iVar12,1);
        **(iVar12 + 8) = 0x50415453;
        if (bVar3) {
            if (*(arg1 + 0x3f1) != '\0') {
                _pe_dos_header = 0x82eff2e;
                *0x4 = 0;
                *0xa = *(iVar8 + 0x2c) >> 4;
                *0x8 = 0;
            }
            if ((*(arg1 + 0x3f2) == '\0') || (*(arg1 + 0xf0) == 1)) {
                uVar1 = *(iVar8 + 0x2c);
                uVar11 = *(*arg1 + 4 + arg3 * 0x14);
                uVar10 = uVar11;
                fcn.000131f8(0x4500,uVar10);
                fcn.000130cc(10000,uVar10);
                uVar10 = uVar11;
                uVar9 = (uVar1 & 0xff000 | 0x4600000) >> 0xc;
                fcn.000131f8(uVar9,uVar10);
                cVar5 = fcn.0001a11c();
                if (cVar5 == '\0') {
                    fcn.000130cc(200,uVar10);
                    fcn.000131f8(uVar9,uVar11);
                }
            }
            else {
                fcn.000192a4(uVar11,arg3);
            }
        }
        piVar2 = *(iVar12 + 8);
        while( true ) {
            iVar7 = 0x50415453;
            LOCK();
            iVar6 = *piVar2;
            if (iVar6 == 0x50415453) {
                *piVar2 = 0x50415453;
            }
            else {
                iVar7 = iVar6;
            }
            UNLOCK();
            if (iVar7 == 0) break;
            fcn.00010490();
        }
    }
    else {
        if (*(arg1 + 8) != 0) {
            iVar12 = 0;
            do {
                if ((uVar10 != *(arg1 + 0xc)) &&
                   ((arg1_00 = *(arg1 + 0x3b8) + iVar12, *(arg1_00 + 0x24) != 4 || (in_stack_00000030 != '\0')))) {
                    *(arg1_00 + 0x10) = arg4;
                    *(arg1_00 + 0x18) = in_stack_00000028;
                    fcn.000162ec(arg1_00,1);
                    if (*(arg1 + 0xf0) != 1) {
                        **(arg1_00 + 8) = 0x50415453;
                    }
                }
                uVar10 = uVar10 + 1;
                iVar12 = iVar12 + 0xd8;
            } while (uVar10 < *(arg1 + 8));
        }
        uVar10 = 0;
        if (bVar3) {
            if (*(arg1 + 0x3f1) != '\0') {
                _pe_dos_header = 0x82eff2e;
                *0x4 = 0;
                *0xa = *(iVar8 + 0x2c) >> 4;
                *0x8 = 0;
            }
            if ((*(arg1 + 0x3f2) == '\0') || (*(arg1 + 0xf0) == 1)) {
                uVar1 = *(iVar8 + 0x2c);
                iVar8 = 0;
                fcn.000131f8(0xc4500,0);
                fcn.000130cc(10000,iVar8);
                iVar8 = 0;
                uVar11 = (uVar1 & 0xff000 | 0xc4600fff) >> 0xc;
                fcn.000131f8(uVar11,0);
                cVar5 = fcn.0001a11c();
                if (cVar5 == '\0') {
                    fcn.000130cc(200,iVar8);
                    fcn.000131f8(uVar11,0);
                }
            }
            else {
                fcn.000192a4(uVar11,-1);
            }
        }
        if (*(arg1 + 0xf0) == 1) {
            iVar8 = fcn.0001a09c();
            iVar6 = (**(iVar8 + 0x18))(0x1ad40,2);
            fcn.00017694(arg1,iVar6 - 1,50000);
            while (*(*(arg1 + 0x3c0) + 0x74) != 0) {
                fcn.00010490();
            }
        }
        else if (*(arg1 + 8) != 0) {
            uVar13 = uVar10;
            do {
                if (uVar10 != *(arg1 + 0xc)) {
                    piVar2 = *(*(arg1 + 0x3b8) + 8 + uVar13);
                    while( true ) {
                        iVar7 = 0x50415453;
                        LOCK();
                        iVar6 = *piVar2;
                        if (iVar6 == 0x50415453) {
                            *piVar2 = 0x50415453;
                        }
                        else {
                            iVar7 = iVar6;
                        }
                        UNLOCK();
                        if (iVar7 == 0) break;
                        fcn.00010490();
                    }
                }
                uVar10 = uVar10 + 1;
                uVar13 = uVar13 + 0xd8;
            } while (uVar10 < *(arg1 + 8));
        }
    }
    if ((bVar3) && (*(arg1 + 0x3f3) == '\0')) {
        if ((*(arg1 + 0x98) != 0) && (*(arg1 + 0x80) != *(arg1 + 0x90))) {
            fcn.00010300(*(arg1 + 0x80),*(arg1 + 0x90),*(arg1 + 0x98));
        }
    }
    *(arg1 + 0x3f0) = *(arg1 + 0x3b0) == '\x01';
    return;
}


/* fcn.000132dc @ 0x132dc */

uint64_t fcn.000132dc(int64_t arg1)

{
    uint64_t uStackX_8;
    
    uStackX_8 = fcn.00013100();
    if (uStackX_8 != '\0') {
        uStackX_8 = fcn.000132a4();
        if (uStackX_8 == 1) {
            uStackX_8 = rdmsr(0x1b);
            uStackX_8 = uStackX_8 | 0x400;
            wrmsr(0x1b,uStackX_8);
        }
    }
    return uStackX_8;
}


/* fcn.000133f0 @ 0x133f0 */

uint64_t fcn.000133f0(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    uVar1 = fcn.00013178(0xf0);
    fcn.000131b0(0xf0,uVar1 & 0xffffff0f | 0x10f);
    uVar1 = fcn.00013178(0x350);
    fcn.000131b0(0x350,uVar1 & 0xfffe5fff | 0x700);
    uVar1 = fcn.00013178(0x360);
    uVar1 = uVar1 & 0xfffe5cff | 0x400;
    uVar3 = uVar1;
    iVar2 = fcn.000132a4();
    if (iVar2 == 1) {
        uVar3 = fcn.0001313c();
        *(uVar3 + 0x360) = uVar1;
    }
    else {
        wrmsr(0x836,uVar1);
    }
    return uVar3;
}


/* fcn.000164c0 @ 0x164c0 */

void fcn.000164c0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint8_t uStackX_10;
    
    fcn.00011100(*(arg1 + 8));
    fcn.00011050(*(arg1 + 0x10));
    fcn.00010470(*arg1);
    if (arg2 != '\0') {
        fcn.00010410(1,NULL,0,0);
        if ((uStackX_10 & 4) != 0) {
            fcn.00011120(*(arg1 + 0x18));
            fcn.000110c0(*(arg1 + 0x20));
            fcn.000110a0(*(arg1 + 0x28));
            fcn.000110b0(*(arg1 + 0x30));
            fcn.00011160(*(arg1 + 0x38));
            fcn.000110e0(*(arg1 + 0x40));
        }
    }
    fcn.000104a0(arg1 + 0x48);
    fcn.000111a0(arg1 + 0x52);
    uVar1 = *(arg1 + 0x5c);
    if ((uVar1 != 0) && (uVar1 < *(arg1 + 0x48))) {
        iVar3 = uVar1 + *(arg1 + 0x4a);
        uVar2 = *(iVar3 + 4);
        if ((uVar2 >> 0xf & 1) != 0) {
            *(iVar3 + 4) = uVar2 & 0xfffffdff;
            fcn.00011060(*(arg1 + 0x5c));
        }
    }
    return;
}


/* fcn.00016860 @ 0x16860 */

void fcn.00016860(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    char cVar3;
    uint uVar4;
    int64_t *noname_0;
    int64_t *noname_0_00;
    int64_t arg1_00;
    
    iVar1 = *arg1;
    uVar4 = fcn.00013328();
    *(iVar1 + arg2 * 0x14) = uVar4;
    uVar4 = fcn.000133b4();
    *(iVar1 + 4 + arg2 * 0x14) = uVar4;
    *(iVar1 + 8 + arg2 * 0x14) = arg3;
    *(iVar1 + 0xc + arg2 * 0x14) = arg4;
    arg2 = arg2 * 0xd8;
    *(*(arg1 + 0x3b8) + 0x88 + arg2) = 0;
    *(*(arg1 + 0x3b8) + 0x20 + arg2) = arg3 == 0;
    cVar3 = fcn.0001a11c();
    if (cVar3 == '\0') {
        uVar2 = rdmsr(0x17);
        *(*(arg1 + 0x3b8) + 0xbc + arg2) = uVar2 >> 0x32 & 7;
    }
    fcn.00010410(1,*(arg1 + 0x3b8) + 0xb8 + arg2,0,0);
    *(arg2 + *(arg1 + 0x3b8)) = 1;
    arg1_00 = 0;
    noname_0_00 = *(arg1 + 0x3b8) + arg2;
    LOCK();
    iVar1 = *noname_0_00;
    if (iVar1 == 1) {
        *noname_0_00 = 2;
    }
    UNLOCK();
    if (iVar1 != 1) {
        noname_0 = noname_0_00;
        fcn.00010400(noname_0_00,0);
        while( true ) {
            LOCK();
            iVar1 = *noname_0_00;
            if (iVar1 == 1) {
                *noname_0_00 = 2;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            fcn.00010490();
            fcn.00010400(noname_0,arg1_00);
        }
    }
    *(noname_0_00 + 0x24) = 0;
    *noname_0_00 = 1;
    return;
}


/* fcn.00016424 @ 0x16424 */

void fcn.00016424(int64_t arg1)

{
    ushort uVar1;
    ulong uVar2;
    uint8_t uStackX_8;
    
    uVar2 = fcn.000103c0();
    *arg1 = uVar2;
    uVar2 = fcn.00010460();
    *(arg1 + 8) = uVar2;
    uVar2 = fcn.00010450();
    *(arg1 + 0x10) = uVar2;
    fcn.00010410(1,NULL,0,0);
    if ((uStackX_8 & 4) != 0) {
        uVar2 = fcn.00011110();
        *(arg1 + 0x18) = uVar2;
        uVar2 = fcn.00011170();
        *(arg1 + 0x20) = uVar2;
        uVar2 = fcn.000110d0();
        *(arg1 + 0x28) = uVar2;
        uVar2 = fcn.00011180();
        *(arg1 + 0x30) = uVar2;
        uVar2 = fcn.00011140();
        *(arg1 + 0x38) = uVar2;
        uVar2 = fcn.00011130();
        *(arg1 + 0x40) = uVar2;
    }
    fcn.000104b0(arg1 + 0x48);
    fcn.000104c0(arg1 + 0x52);
    uVar1 = fcn.000110f0();
    *(arg1 + 0x5c) = uVar1;
    return;
}


/* fcn.00011090 @ 0x11090 */

uint64_t fcn.00011090(int64_t arg1,int64_t arg2,int64_t arg3)

{
    monitor();
    return arg1 & 0xffffffff;
}


/* fcn.00011150 @ 0x11150 */

uint64_t fcn.00011150(int64_t arg1,int64_t arg2)

{
    mwait();
    return arg1 & 0xffffffff;
}


/* fcn.000102e1 @ 0x102e1 */

void fcn.000102e1(void)

{
    return;
}


/* fcn.00011080 @ 0x11080 */

void fcn.00011080(void)

{
    return;
}


/* fcn.000184d8 @ 0x184d8 */

ulong fcn.000184d8(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong auStackX_8 [4];
    
    auStackX_8[0] = 0xa0000;
    iVar1 = (**(*0x1bc60 + 0x28))
                      (1,4,((arg1 & 0xfff) != 0) + (CONCAT44(in_register_0000000c,arg1) >> 0xc),auStackX_8);
    if (iVar1 < 0) {
        auStackX_8[0] = 0xffffffffffffffff;
    }
    return auStackX_8[0];
}


/* fcn.000170f0 @ 0x170f0 */

void fcn.000170f0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    ulong uVar3;
    uint64_t uVar4;
    ulong uStackX_8;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x80) == -1) {
        iVar1 = fcn.000184d8(*(iVar2 + 0x38) + *(iVar2 + 0x58) + 0xa4);
        *(iVar2 + 0x80) = iVar1;
        uVar4 = (*(iVar2 + 0x38) - *(iVar2 + 0x50)) + *(iVar2 + 0x58);
        *(iVar2 + 0x3c0) = *(iVar2 + 0x38) + *(iVar2 + 0x58) + iVar1;
        uStackX_8 = 0xffffffff;
        iVar1 = (**(*0x1bc60 + 0x28))(1,3,((uVar4 & 0xfff) != 0) + (uVar4 >> 0xc),&uStackX_8);
        uVar3 = uStackX_8;
        if (iVar1 < 0) {
            uVar3 = 0;
        }
        *(iVar2 + 0x88) = uVar3;
    }
    if ((*(iVar2 + 0x98) != 0) && (*(iVar2 + 0x90) != *(iVar2 + 0x80))) {
        fcn.00010300(*(iVar2 + 0x90),*(iVar2 + 0x80),*(iVar2 + 0x98));
    }
    iVar1 = *(iVar2 + 0x58) + *(iVar2 + 0x38);
    if ((iVar1 != 0) && (*(iVar2 + 0x80) != *(iVar2 + 0x28))) {
        fcn.00010300(*(iVar2 + 0x80),*(iVar2 + 0x28),iVar1);
    }
    return;
}


/* fcn.00016ea4 @ 0x16ea4 */

void fcn.00016ea4(int64_t arg1)

{
    int64_t arg2;
    ulong *puVar1;
    ulong uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    ulong uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t arg3;
    uint32_t auStackX_8 [2];
    uint32_t uStackX_10;
    uint32_t auStackX_18 [2];
    int16_t aiStackX_20 [4];
    
    puVar1 = *(arg1 + 0x3c0);
    *puVar1 = *(arg1 + 0x18);
    puVar1[1] = *(arg1 + 0x20);
    *(puVar1 + 0x2c) = *(arg1 + 0x80);
    *(puVar1 + 0x34) = *(arg1 + 0x30);
    uVar3 = fcn.00011070();
    *(puVar1 + 0x44) = uVar3;
    uVar3 = fcn.00011080();
    *(puVar1 + 0x4c) = uVar3;
    uVar6 = fcn.00010460();
    *(puVar1 + 0x5c) = uVar6;
    uVar6 = 0;
    puVar1[2] = 0x16958;
    *(puVar1 + 0x3c) = 0;
    *(puVar1 + 0x74) = 0;
    *(puVar1 + 100) = *(arg1 + 0xf0);
    *(puVar1 + 0x6c) = *arg1;
    *(puVar1 + 0x7c) = arg1;
    uVar4 = fcn.000103c0();
    if ((((uVar4 & 0x80000000) != 0) && (fcn.00010410(0x80000000,auStackX_8,0,0), 0x80000000 < auStackX_8[0])) &&
       (fcn.00010410(0x80000001,NULL,0,0), (uStackX_10 & 0x100000) != 0)) {
        uVar2 = rdmsr(0xc0000080);
        uVar6 = 0;
        if ((uVar2 >> 0xb & 1) != 0) {
            uVar6 = 1;
        }
    }
    *(puVar1 + 0x54) = uVar6;
    *(puVar1 + 0x84) = fcn.000104d0;
    uVar4 = fcn.00010450();
    *(puVar1 + 0x13) = uVar4 >> 0xc & 1;
    *(puVar1 + 0x99) = *(arg1 + 0x3f1);
    *(puVar1 + 0x9a) = *(arg1 + 0x3f2);
    *(puVar1 + 0x9b) = *(arg1 + 0x410);
    if ((*(puVar1 + 0x9a) != '\0') && (fcn.00010410(0,auStackX_18,0,0), 10 < auStackX_18[0])) {
        fcn.00010410(0xb,NULL,aiStackX_20,0);
        *(puVar1 + 0xa3) = aiStackX_20[0] != 0;
    }
    fcn.000104b0(puVar1 + 3);
    fcn.000104c0(puVar1 + 0x22);
    iVar7 = *(puVar1 + 0x1a);
    uVar8 = *(puVar1 + 3) + 1;
    while (((*(iVar7 + 4) >> 0x15 & 1) != 0 || ((*(iVar7 + 4) & 0xf00) < 0x800))) {
        iVar7 = iVar7 + 8;
        uVar8 = uVar8 - 8;
        if (uVar8 == 0) {
code_r0x0001707f:
            iVar7 = *(arg1 + 0x88);
            if (iVar7 == 0) {
                iVar5 = *(puVar1 + 0x2c) + *(arg1 + 0x50);
            }
            else {
                arg3 = (*(arg1 + 0x58) + *(arg1 + 0x38)) - *(arg1 + 0x50);
                arg2 = *(arg1 + 0x50) + *(arg1 + 0x28);
                if ((arg3 != 0) && (iVar7 != arg2)) {
                    fcn.00010300(iVar7,arg2,arg3);
                }
                iVar5 = *(arg1 + 0x88);
            }
            *(puVar1 + 0x8c) = iVar5;
            *(puVar1 + 0x92) = *(puVar1 + 0x34) + (*(puVar1 + 0x8c) - *(arg1 + 0x50));
            *(puVar1 + 0x96) = *(puVar1 + 0x44);
            return;
        }
    }
    *(puVar1 + 0x12) = iVar7 - *(puVar1 + 0x1a);
    goto code_r0x0001707f;
}


/* fcn.00016360 @ 0x16360 */

void fcn.00016360(int64_t arg1)

{
    uchar *puVar1;
    uint8_t *puVar2;
    uint8_t extraout_var;
    uint32_t uVar3;
    uint uVar4;
    
    puVar1 = arg1 + 0x3d8;
    puVar2 = arg1 + 0x3d9;
    if (arg1 + 0x3d0 != NULL) {
        uVar3 = fcn.00013178(0x3e0);
        *(arg1 + 0x3d0) = 1LL << (((uVar3 >> 1 ^ uVar3) & 3 ^ uVar3 >> 1) + 1 & 7);
    }
    if ((puVar2 != NULL) || (puVar1 != NULL)) {
        uVar3 = fcn.00013178(800);
        if (puVar2 != NULL) {
            *puVar2 = uVar3 >> 0x11 & 1;
        }
        if (puVar1 != NULL) {
            *puVar1 = uVar3;
        }
    }
    uVar4 = fcn.00013178(0x390);
    *(arg1 + 0x3c8) = uVar4;
    fcn.00013178(800);
    *(arg1 + 0x3da) = ~extraout_var & 1;
    return;
}


/* fcn.0001a09c @ 0x1a09c */

int64_t fcn.0001a09c(void)

{
    if (*0x1bcc0 == 0) {
        (**(*0x1bc60 + 0x140))(0x1ada0,0,0x1bcc0);
    }
    return *0x1bcc0;
}


/* fcn.000192a4 @ 0x192a4 */

void fcn.000192a4(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar1;
    uint64_t uVar2;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if (arg2 < 0) {
        if (*(arg1_00 + 8) != 0) {
            uVar2 = uVar1;
            do {
                if (uVar1 != *(arg1_00 + 0xc)) {
                    fcn.00019000(arg1_00,*(arg1_00 + 0x3b8) + uVar2);
                }
                uVar1 = uVar1 + 1;
                uVar2 = uVar2 + 0xd8;
            } while (uVar1 < *(arg1_00 + 8));
        }
    }
    else {
        fcn.00019000(arg1_00,arg2 * 0xd8 + *(arg1_00 + 0x3b8));
    }
    return;
}


/* fcn.000131f8 @ 0x131f8 */

uint64_t fcn.000131f8(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    iVar2 = fcn.000132a4();
    if (iVar2 == 1) {
        uVar3 = fcn.000111b0();
        fcn.00010440();
        iVar2 = fcn.0001313c();
        uVar1 = *(iVar2 + 0x310);
        do {
        } while ((*(iVar2 + 0x300) & 0x1000) != 0);
        *(iVar2 + 0x310) = arg2 << 0x18;
        *(iVar2 + 0x300) = arg1;
        do {
        } while ((*(iVar2 + 0x300) & 0x1000) != 0);
        *(iVar2 + 0x310) = uVar1;
        if ((uVar3 >> 9 & 1) == 0) {
            uVar3 = fcn.00010440();
        }
        else {
            uVar3 = fcn.000103d0();
        }
    }
    else {
        uVar3 = arg2 << 0x20 | arg1 & 0xffffffffU;
        wrmsr(0x830,arg2 << 0x20 | arg1 & 0xffffffffU);
    }
    return uVar3;
}


/* fcn.00017694 @ 0x17694 */

uint fcn.00017694(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    *(arg1 + 0xd8) = 0;
    uVar2 = fcn.000175dc(arg3 & 0xffffffff,arg1 + 0xd0);
    *(arg1 + 200) = uVar2;
    while (*(arg1 + 0xa0) < arg2) {
        cVar1 = fcn.00017644(arg1 + 0xd0,arg1 + 0xd8,*(arg1 + 200));
        if (cVar1 != '\0') break;
        fcn.00010490();
    }
    return *(arg1 + 0xa0);
}


/* fcn.000175dc @ 0x175dc */

uint64_t fcn.000175dc(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    
    uVar1 = fcn.00010400(arg1,arg2);
    *arg2 = uVar1;
    if (arg1 == 0) {
        uVar2 = 0;
    }
    else if (0xffffffffffffffffU / arg1 < *0x1bc78) {
        uVar2 = (arg1 / 1000000) * *0x1bc78;
    }
    else {
        uVar2 = (*0x1bc78 * arg1) / 1000000;
    }
    return uVar2;
}


/* fcn.00017644 @ 0x17644 */

bool fcn.00017644(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    if (arg3 == 0) {
        bVar1 = false;
    }
    else {
        iVar2 = fcn.00010400(arg1,arg2);
        iVar3 = iVar2 - *arg1;
        if (iVar3 < 0) {
            iVar3 = iVar3 + 2;
        }
        *arg2 = *arg2 + iVar3;
        *arg1 = iVar2;
        bVar1 = arg3 < *arg2;
    }
    return bVar1;
}


/* fcn.00012e44 @ 0x12e44 */

ulong fcn.00012e44(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1bc60 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00010f06 @ 0x10f06 */

void fcn.00010f06(int64_t arg1)

{
    *arg1 = 0x10a80;
    *(arg1 + 8) = 0x1f1;
    *(arg1 + 0x10) = 0x2d1;
    *(arg1 + 0x18) = 0x10de9;
    *(arg1 + 0x20) = 0x11d;
    *(arg1 + 0x28) = 0x41;
    *(arg1 + 0x30) = 0x98;
    *(arg1 + 0x38) = 0x2d1;
    *(arg1 + 0x40) = 0x290;
    *(arg1 + 0x48) = 0x34a;
    *(arg1 + 0x50) = 0x1f;
    return;
}


/* fcn.00012d44 @ 0x12d44 */

ulong fcn.00012d44(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    if (arg2 == 0) {
        auStackX_10[0] = 0;
    }
    else {
        iVar1 = (**(*0x1bc60 + 0x28))(0,arg1 & 0xffffffff,arg2,auStackX_10);
        if (iVar1 < 0) {
            auStackX_10[0] = 0;
        }
    }
    return auStackX_10[0];
}


/* fcn.00016628 @ 0x16628 */

void fcn.00016628(int64_t arg1)

{
    uint64_t uVar1;
    uchar *puVar2;
    int64_t iVar3;
    ulong uVar4;
    int iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    int *piVar8;
    ulong in_RDX;
    uint64_t uVar9;
    uint64_t uVar10;
    uchar *arg2;
    uchar *arg2_00;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uchar auStack_48 [32];
    
    uVar10 = 0;
    *(arg1 + 0xf0) = 1;
    uVar9 = CONCAT71(in_RDX >> 8,1);
    fcn.000171e0(arg1,uVar9,0,0);
    uVar11 = *(arg1 + 0xa0) + 1;
    *(arg1 + 0xf0) = 3;
    *(arg1 + 8) = uVar11;
    if (uVar11 < 0x100) {
        puVar6 = *arg1;
        uVar9 = uVar10;
        if (uVar11 != 0) {
            do {
                if (0xfe < *puVar6) goto code_r0x000166ab;
                uVar9 = uVar9 + 1;
                puVar6 = puVar6 + 5;
            } while (uVar9 < uVar11);
        }
    }
    else {
code_r0x000166ab:
        fcn.000171e0(arg1,CONCAT71(uVar9 >> 8,1),0,0x16590);
        while (uVar11 = *(arg1 + 8) - 1, *(arg1 + 0xa0) < uVar11) {
            fcn.00010490();
        }
        fcn.000132dc(uVar11);
        if (*(arg1 + 8) != 0) {
            uVar9 = uVar10;
            uVar12 = uVar10;
            do {
                fcn.000162ec(*(arg1 + 0x3b8) + uVar12,0);
                uVar9 = uVar9 + 1;
                uVar12 = uVar12 + 0xd8;
            } while (uVar9 < *(arg1 + 8));
        }
    }
    puVar2 = *arg1;
    uVar11 = *(arg1 + 8) - 1;
    if (uVar11 != 0) {
        uVar13 = uVar11;
        uVar9 = uVar10;
        arg2_00 = puVar2;
        uVar12 = uVar10;
        do {
            uVar11 = *(arg2_00 + 4);
            uVar1 = uVar9 + 1;
            if (uVar1 <= uVar13) {
                puVar6 = arg2_00 + 0x18;
                uVar7 = uVar1;
                uVar14 = uVar9;
                do {
                    if (*puVar6 < uVar11) {
                        uVar11 = *puVar6;
                        uVar14 = uVar7;
                    }
                    uVar7 = uVar7 + 1;
                    puVar6 = puVar6 + 5;
                } while (uVar7 <= uVar13);
                if (uVar14 != uVar9) {
                    arg2 = puVar2 + uVar14 * 0x14;
                    if (auStack_48 != arg2) {
                        fcn.00010300(auStack_48,arg2,0x14);
                    }
                    if (arg2 != arg2_00) {
                        fcn.00010300(arg2,arg2_00,0x14);
                    }
                    if (arg2_00 != auStack_48) {
                        fcn.00010300(arg2_00,auStack_48,0x14);
                    }
                    iVar3 = *(arg1 + 0x3b8);
                    uVar4 = *(uVar14 * 0xd8 + 8 + iVar3);
                    *(uVar14 * 0xd8 + 8 + iVar3) = *(uVar12 + 8 + iVar3);
                    *(uVar12 + 8 + *(arg1 + 0x3b8)) = uVar4;
                }
            }
            arg2_00 = arg2_00 + 0x14;
            uVar12 = uVar12 + 0xd8;
            uVar9 = uVar1;
        } while (uVar1 < uVar13);
        iVar5 = fcn.00013328();
        if (*(arg1 + 8) != 0) {
            piVar8 = puVar2 + 4;
            do {
                if (*piVar8 == iVar5) {
                    *(arg1 + 0xc) = uVar10;
                    return;
                }
                uVar10 = uVar10 + 1;
                piVar8 = piVar8 + 5;
            } while (uVar10 < *(arg1 + 8));
        }
    }
    return;
}


/* fcn.00018d88 @ 0x18d88 */

void fcn.00018d88(int64_t arg1)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    int64_t arg4;
    uint64_t uVar6;
    int64_t iVar7;
    uint64_t noname_0;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t arg1_00;
    uint64_t uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    
    iVar3 = fcn.0001a09c();
    uVar4 = (**(iVar3 + 0x20))(0x1ad40,5);
    *(arg1 + 0x3e0) = uVar4;
    iVar3 = fcn.0001a09c();
    iVar3 = (**(iVar3 + 0x20))(0x1ad40,6);
    uVar10 = *(arg1 + 0x3e0);
    uVar9 = 0;
    *(arg1 + 1000) = iVar3;
    uVar5 = iVar3 + uVar10;
    if ((uVar10 != 0) && (uVar10 != uVar5)) {
        uVar12 = 8;
        iVar3 = fcn.00012e44(0x80);
        if (iVar3 != 0) {
            noname_0 = 4;
            arg4 = fcn.00012d44(4,((*(arg1 + 8) & 0x1ff) != 0) + (*(arg1 + 8) >> 9));
            if (arg4 == 0) {
                (**(*0x1bc60 + 0x48))(iVar3);
            }
            else {
                if (*(arg1 + 8) != 0) {
                    uVar8 = uVar9;
                    uVar13 = uVar9;
                    do {
                        *(arg4 + 4 + uVar8 * 8) = *(uVar13 + 0xbc + *(arg1 + 0x3b8));
                        uVar1 = *(uVar13 + 0xb8 + *(arg1 + 0x3b8));
                        noname_0 = uVar1;
                        *(arg4 + uVar8 * 8) = uVar1;
                        uVar8 = uVar8 + 1;
                        uVar13 = uVar13 + 0xd8;
                    } while (uVar8 < *(arg1 + 8));
                }
                uVar8 = uVar9;
                uVar13 = uVar9;
                do {
                    if (uVar5 - uVar10 < 0x30) {
                        cVar2 = '\0';
                    }
                    else {
                        noname_0 = uVar10;
                        cVar2 = fcn.0001a168(uVar10,uVar5 - uVar10,0,arg4);
                    }
                    if (cVar2 == '\0') {
                        uVar6 = 0x400;
                    }
                    else {
                        uVar13 = uVar13 + 1;
                        uVar9 = uVar9 + 0x10;
                        if (uVar12 < uVar13) {
                            if (0x7ffffffffffffff < uVar12) goto code_r0x00018fb4;
                            iVar3 = fcn.00012ec4(noname_0,uVar12 << 4,uVar12 << 5,iVar3);
                            if (iVar3 == 0) goto code_r0x00018fc1;
                            uVar12 = uVar12 * 2;
                        }
                        uVar6 = 0x800;
                        if (*(uVar10 + 0x1c) != 0) {
                            uVar6 = *(uVar10 + 0x20);
                        }
                        *(iVar3 + -0x10 + uVar9) = uVar10;
                        uVar8 = uVar8 + uVar6;
                        *(iVar3 + -8 + uVar9) = uVar6;
                    }
                    uVar10 = uVar10 + uVar6;
                } while (uVar10 < uVar5);
                if ((uVar13 != 0) && (iVar7 = fcn.00012d44(4,((uVar8 & 0xfff) != 0) + (uVar8 >> 0xc)), iVar7 != 0)) {
                    if (uVar13 != 0) {
                        piVar11 = iVar3 + 8;
                        arg1_00 = iVar7;
                        do {
                            if ((*piVar11 != 0) && (arg1_00 != piVar11[-1])) {
                                fcn.00010300(arg1_00,piVar11[-1],*piVar11);
                            }
                            arg1_00 = arg1_00 + *piVar11;
                            piVar11 = piVar11 + 2;
                            uVar13 = uVar13 - 1;
                        } while (uVar13 != 0);
                    }
                    *(arg1 + 0x3e0) = iVar7;
                    *(arg1 + 1000) = uVar8;
                }
code_r0x00018fb4:
                (**(*0x1bc60 + 0x48))(iVar3);
code_r0x00018fc1:
                (**(*0x1bc60 + 0x30))(arg4,(*(arg1 + 8) >> 9) + ((*(arg1 + 8) & 0x1ff) != 0));
            }
        }
    }
    return;
}


/* fcn.00018868 @ 0x18868 */

void fcn.00018868(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    uchar auStack_48 [24];
    uint64_t uStack_30;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    *0x1bc90 = iVar2;
    if (*(iVar2 + 8) != 1) {
        iStackX_8 = 0xffffffff;
        uVar4 = (-((*(iVar2 + 0x48) & 0xfff) != 0) & 0x1000) + (*(iVar2 + 0x48) & 0xfffffffffffff000);
        (**(*0x1bc60 + 0x28))(1,0,uVar4 >> 0xc,&iStackX_8);
        *0x1bca8 = iStackX_8;
        iVar1 = (**(*0x1bc88 + 0x38))(iStackX_8,auStack_48);
        if (-1 < iVar1) {
            (**(*0x1bc88 + 0x40))(iStackX_8,uVar4,uStack_30 & 0xffffffffffffbfff);
        }
        uVar3 = *(iVar2 + 8) << 7;
        iStackX_8 = 0xffffffff;
        uVar3 = (-((uVar3 & 0xfff) != 0) & 0x1000) + (uVar3 & 0xfffff000);
        (**(*0x1bc60 + 0x28))(1,0,uVar3 >> 0xc,&iStackX_8);
        *0x1be38 = iStackX_8 + uVar3;
        if ((*(iVar2 + 0x48) != 0) && (*0x1bca8 != *(iVar2 + 0x40))) {
            fcn.00010300(*0x1bca8,*(iVar2 + 0x40),*(iVar2 + 0x48));
        }
        (**(*0x1bc60 + 0x50))(0x80000200,0x10,0x185f8,0,0x1bcb0);
        (**(*0x1bc60 + 0x58))(*0x1bcb0,1,1000000);
        (**(*0x1bc60 + 0x50))(0x201,8,0x186c4,0,0x1bca0);
        (**(*0x1bc60 + 0x50))(0x200,8,0x186c4,0,0x1bc98);
        (**(*0x1bc60 + 0xa8))(0x1ad90,*0x1bc98,auStackX_10);
    }
    return;
}


/* fcn.00013714 @ 0x13714 */

void fcn.00013714(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    uint *in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    uint uStack_88;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint32_t uStack_7c;
    ulong uStack_78;
    uint32_t auStack_70 [6];
    int64_t aiStack_58 [8];
    
    uStack_78 = 0;
    auStack_70[0] = 0;
    auStack_70[1] = 0;
    auStack_70[2] = 0;
    auStack_70[3] = 0;
    auStack_70[4] = 0;
    fcn.00010410(0,&uStack_80,0,0);
    if (uStack_80 < 0x1f) {
        if (arg3 != 0) {
            *arg3 = 0;
        }
        if (arg4 != 0) {
            *arg4 = 0;
        }
        if (in_stack_00000028 != NULL) {
            *in_stack_00000028 = 0;
        }
        fcn.00013458(arg1 & 0xffffffff,arg2,in_stack_00000030,in_stack_00000038);
    }
    else {
        uVar2 = 0;
        while( true ) {
            fcn.00010fe0(0x1f,uVar2,&uStack_84,0);
            uVar1 = uStack_88 >> 8;
            if (uVar1 == 0) break;
            uVar2 = uVar2 + 1;
            auStack_70[uVar1 - 2] = uStack_84 & 0x1f;
        }
        uVar2 = 2;
        do {
            if (auStack_70[uVar2 - 2] == 0) {
                auStack_70[uVar2 - 2] = (&uStack_7c)[uVar2];
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < 7);
        puVar3 = &uStack_78;
        uVar2 = 1;
        aiStack_58[6] = arg2;
        aiStack_58[5] = arg3;
        aiStack_58[4] = arg4;
        auStack_70[4] = 0x20;
        do {
            if (aiStack_58[uVar2] != NULL) {
                *aiStack_58[uVar2] = (1 << (*(puVar3 + 4) - *puVar3 & 0x1fU)) - 1U & arg1 >> (*puVar3 & 0x1f);
            }
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 4;
        } while (uVar2 < 7);
    }
    return;
}


/* fcn.00010f64 @ 0x10f64 */

ulong fcn.00010f64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uchar auStack_90 [24];
    
    uVar1 = GlobalDescriptorTableRegister();
    *(arg1 + 0x10) = uVar1;
    uVar1 = InterruptDescriptorTableRegister();
    *(arg1 + 0x1a) = uVar1;
    *(arg1 + 8) = auStack_90;
    *arg1 = 1;
    do {
    } while (*arg2 != '\x01');
    GlobalDescriptorTableRegister(*(arg2 + 0x10));
    InterruptDescriptorTableRegister(*(arg2 + 0x1a));
    *arg2 = 2;
    do {
    } while (*arg1 != '\x02');
    return *(*(arg2 + 8) + 0x88);
}


/* fcn.0001852c @ 0x1852c */

void fcn.0001852c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg1;
    
    iVar1 = *0x1bc90;
    if (*(*0x1bc90 + 0xe0) != 0) {
        iVar2 = fcn.00017828();
        if (iVar2 != -0x7ffffffffffffffa) {
            (**(*0x1bc60 + 0x68))(*(iVar1 + 0xe0));
            *(iVar1 + 0xe0) = 0;
        }
    }
    arg1 = 0;
    if (*(iVar1 + 8) != 0) {
        iVar2 = 0;
        do {
            if (*(iVar2 + 0xb0 + *(iVar1 + 0x3b8)) != 0) {
                iVar3 = fcn.00017788(arg1);
                if (iVar3 != -0x7ffffffffffffffa) {
                    (**(*0x1bc60 + 0x68))(*(iVar2 + 0xb0 + *(iVar1 + 0x3b8)));
                    *(iVar2 + 0xb0 + *(iVar1 + 0x3b8)) = 0;
                }
            }
            arg1 = arg1 + 1;
            iVar2 = iVar2 + 0xd8;
        } while (arg1 < *(iVar1 + 8));
    }
    return;
}


/* fcn.00017828 @ 0x17828 */

ulong fcn.00017828(void)

{
    int64_t arg1;
    char cVar1;
    char *pcVar2;
    ulong uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    
    arg1 = *0x1bc90;
    uVar6 = 0;
    if (*(*0x1bc90 + 8) != 0) {
        iVar7 = 0;
        do {
            iVar4 = *(arg1 + 0x3b8) + iVar7;
            if ((*(iVar4 + 0x88) != '\0') && (*(iVar4 + 0x24) == 3)) {
                *(arg1 + 0xa4) = *(arg1 + 0xa4) + -1;
                *(iVar7 + 0x88 + *(arg1 + 0x3b8)) = 0;
                fcn.000162ec(iVar4,0);
                if (*(arg1 + 0xa8) != '\0') {
                    uVar5 = 0;
                    if (*(*0x1bc90 + 8) != 0) {
                        pcVar2 = *(*0x1bc90 + 0x3b8) + 0x88;
                        do {
                            if (*pcVar2 != '\0') {
                                fcn.000171e0(arg1,0,uVar5 & 0xffffffff,*(arg1 + 0xb0));
                                break;
                            }
                            uVar5 = uVar5 + 1;
                            pcVar2 = pcVar2 + 0xd8;
                        } while (uVar5 < *(*0x1bc90 + 8));
                    }
                }
            }
            uVar6 = uVar6 + 1;
            iVar7 = iVar7 + 0xd8;
        } while (uVar6 < *(arg1 + 8));
    }
    if (*(arg1 + 0xa4) == 0) {
        uVar3 = 0;
    }
    else {
        cVar1 = fcn.00017644(arg1 + 0xd0,arg1 + 0xd8,*(arg1 + 200));
        if (cVar1 == '\0') {
            uVar3 = 0x8000000000000006;
        }
        else {
            if (*(arg1 + 0xe8) != 0) {
                uVar3 = fcn.00012e44(*(arg1 + 0xa4) + 1 << 3);
                **(arg1 + 0xe8) = uVar3;
            }
            iVar7 = 0;
            uVar6 = 0;
            if (*(arg1 + 8) != 0) {
                iVar4 = 0;
                do {
                    if (*(*(arg1 + 0x3b8) + 0x88 + iVar4) != '\0') {
                        fcn.00017714(uVar6);
                        *(*(arg1 + 0x3b8) + 0x88 + iVar4) = 0;
                        if (*(arg1 + 0xe8) != NULL) {
                            *(**(arg1 + 0xe8) + iVar7 * 8) = uVar6;
                            iVar7 = iVar7 + 1;
                        }
                    }
                    uVar6 = uVar6 + 1;
                    iVar4 = iVar4 + 0xd8;
                } while (uVar6 < *(arg1 + 8));
            }
            if (*(arg1 + 0xe8) != NULL) {
                *(**(arg1 + 0xe8) + iVar7 * 8) = 0xffffffff;
            }
            uVar3 = 0x8000000000000012;
        }
    }
    return uVar3;
}


/* fcn.00017788 @ 0x17788 */

ulong fcn.00017788(int64_t arg1)

{
    char cVar1;
    ulong uVar2;
    int64_t arg1_00;
    
    arg1_00 = arg1 * 0xd8 + *(*0x1bc90 + 0x3b8);
    if (*(arg1_00 + 0x24) == 3) {
        if (*(arg1_00 + 0x90) != NULL) {
            **(arg1_00 + 0x90) = 1;
        }
        fcn.000162ec(arg1_00,0);
        uVar2 = 0;
    }
    else {
        cVar1 = fcn.00017644(arg1_00 + 0xa0,arg1_00 + 0xa8,*(arg1_00 + 0x98));
        if (cVar1 == '\0') {
            uVar2 = 0x8000000000000006;
        }
        else {
            if (*(arg1_00 + 0x90) != NULL) {
                **(arg1_00 + 0x90) = 0;
            }
            fcn.00017714(arg1);
            uVar2 = 0x8000000000000012;
        }
    }
    return uVar2;
}


/* fcn.0001a168 @ 0x1a168 */

uint64_t fcn.0001a168(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint in_register_0000000c;
    int *piVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint in_register_00000014;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int iVar9;
    uint64_t uVar10;
    uint64_t in_stack_00000028;
    char in_stack_00000030;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = -piVar3 - 1;
    if ((((CONCAT44(in_register_00000014,arg2) <= uVar2) && (*piVar3 == 1)) && (piVar3[5] == 1)) && (arg3 < piVar3[1]))
    {
        uVar5 = piVar3[7];
        uVar2 = uVar5;
        uVar1 = uVar5;
        if (uVar5 == 0) {
            uVar1 = 2000;
        }
        if ((uVar1 & 3) == 0) {
            uVar4 = 0x800;
            if (uVar5 != 0) {
                uVar4 = piVar3[8];
            }
            if (((uVar4 & 0x3ff) == 0) && (uVar2 = uVar4, uVar2 <= CONCAT44(in_register_00000014,arg2))) {
                if (in_stack_00000030 != '\0') {
                    uVar2 = uVar4 >> 2;
                    iVar9 = 0;
                    uVar7 = 0;
                    if (uVar2 != 0) {
                        do {
                            iVar9 = iVar9 + piVar3[uVar7];
                            uVar7 = uVar7 + 1;
                        } while (uVar7 < uVar2);
                        if (iVar9 != 0) goto code_r0x0001a317;
                    }
                }
                if (in_stack_00000028 == 0) {
code_r0x0001a324:
                    return CONCAT71(uVar2 >> 8,1);
                }
                uVar7 = 0;
                if (in_stack_00000028 != 0) {
                    do {
                        if ((piVar3[3] == *(arg4 + uVar7 * 8)) &&
                           (uVar2 = 0, (piVar3[6] >> (*(arg4 + 4 + uVar7 * 8) & 0x1f) & 1) != 0))
                        goto code_r0x0001a324;
                        uVar7 = uVar7 + 1;
                    } while (uVar7 < in_stack_00000028);
                }
                uVar5 = (uVar4 - uVar1) - 0x30;
                if ((0x13 < uVar5) && ((uVar5 & 3) == 0)) {
                    uVar2 = uVar1;
                    if (*(piVar3 + uVar1 + 0x30) < 0x15555556) {
                        uVar7 = *(piVar3 + uVar1 + 0x30);
                        uVar2 = uVar7 * 0xc;
                        if (uVar2 <= uVar5 - 0x14) {
                            if (in_stack_00000030 != '\0') {
                                iVar9 = 0;
                                uVar2 = 0;
                                if (uVar5 >> 2 != 0) {
                                    do {
                                        iVar9 = iVar9 + *(piVar3 + uVar2 * 4 + uVar1 + 0x30);
                                        uVar2 = uVar2 + 1;
                                    } while (uVar2 < uVar5 >> 2);
                                    if (iVar9 != 0) goto code_r0x0001a317;
                                }
                            }
                            uVar10 = 0;
                            if (uVar7 != 0) {
                                puVar6 = piVar3 + uVar1 + 0x48;
                                do {
                                    if (((in_stack_00000030 == '\0') ||
                                        (uVar5 = puVar6[-1] + puVar6[1] + *puVar6, uVar2 = uVar5,
                                        uVar5 == piVar3[4] + piVar3[3] + piVar3[6])) &&
                                       (uVar8 = 0, in_stack_00000028 != 0)) {
                                        do {
                                            if ((puVar6[-1] == *(arg4 + uVar8 * 8)) &&
                                               (uVar2 = *puVar6, (*puVar6 >> (*(arg4 + 4 + uVar8 * 8) & 0x1f) & 1) != 0
                                               )) goto code_r0x0001a324;
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 < in_stack_00000028);
                                    }
                                    uVar10 = uVar10 + 1;
                                    puVar6 = puVar6 + 3;
                                } while (uVar10 < uVar7);
                            }
                        }
                    }
                }
            }
        }
    }
code_r0x0001a317:
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00012ec4 @ 0x12ec4 */

int64_t fcn.00012ec4(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012e78(4,arg2);
    if ((arg1_00 != 0) && (arg3 != 0)) {
        if (arg1 < arg2) {
            arg2 = arg1;
        }
        if ((arg2 != 0) && (arg1_00 != arg3)) {
            fcn.00010300(arg1_00,arg3,arg2);
        }
        (**(*0x1bc60 + 0x48))(arg3);
    }
    return arg1_00;
}


/* fcn.00011190 @ 0x11190 */

uint fcn.00011190(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    
    uVar1 = rmpadjust(arg1,arg2,arg3);
    rmpFlags(uVar1);
    return uVar1;
}


/* fcn.00019000 @ 0x19000 */

void fcn.00019000(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    ulong uVar2;
    ulong uVar3;
    int iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uStackX_20;
    uint64_t uStack_18;
    ulong *puStack_10;
    
    iVar5 = (**(*0x1bc60 + 0x28))(0,0,1,&puStack_10);
    if ((-1 < iVar5) && (puStack_10 != NULL)) {
        fcn.00010340(puStack_10,0x1000);
        uStackX_20._0_4_ = 0x10;
        if ((*(arg2 + 0x28) & 0x20000000) != 0) {
            uStackX_20._0_4_ = 0x20000010;
        }
        if ((*(arg2 + 0x28) & 0x40000000) != 0) {
            uStackX_20._0_4_ = uStackX_20 | 0x40000000;
        }
        uStackX_20 = uStackX_20;
        uStack_18._0_4_ = 0;
        if ((*(arg2 + 0x38) & 0x40) != 0) {
            uStack_18._0_4_ = 0x40;
        }
        uStack_18 = uStack_18;
        uVar1 = *(*(arg1 + 0x3c0) + 0x2c);
        *(puStack_10 + 0x34) = 0xffff;
        uVar6 = uVar1 >> 0xc;
        puStack_10[3] = (uVar6 & 0xff) << 0xc;
        *(puStack_10 + 2) = uVar6 << 8;
        *(puStack_10 + 0x14) = 0xffff;
        puStack_10[0x2f] = uVar1 & 0xfff;
        *(puStack_10 + 100) = 0xffff;
        *(puStack_10 + 0x12) = *(puStack_10 + 0x12) & 0xfffa | 0x9a;
        *(puStack_10 + 0x74) = 0xffff;
        *(puStack_10 + 0x84) = 0xffff;
        *(puStack_10 + 0x94) = 0xffff;
        *(puStack_10 + 0x32) = *(puStack_10 + 0x32) & 0xfff2 | 0x92;
        uVar2 = puStack_10[6];
        uVar3 = puStack_10[7];
        puStack_10[0x1a] = 0x1000;
        puStack_10[0x2c] = 0x400;
        puStack_10[0x2e] = 2;
        *(puStack_10 + 0x72) = *(puStack_10 + 0x72) & 0xfff3 | 0x83;
        puStack_10[0x29] = uStack_18;
        puStack_10[0x2b] = uStackX_20;
        puStack_10[0x2d] = 0xffff0ff0;
        puStack_10[0x4d] = 0x7040600070406;
        *(puStack_10 + 0x40c) = 0x5555;
        *puStack_10 = uVar2;
        puStack_10[1] = uVar3;
        puStack_10[0x7d] = 1;
        puStack_10[8] = uVar2;
        puStack_10[9] = uVar3;
        *(puStack_10 + 0x81) = 0x1f80;
        puStack_10[10] = uVar2;
        puStack_10[0xb] = uVar3;
        *(puStack_10 + 0x82) = 0x40;
        puStack_10[4] = uVar2;
        puStack_10[5] = uVar3;
        *(puStack_10 + 0xca) = 0;
        uVar1 = rdmsr(0xc0010131);
        puStack_10[0x76] = uVar1 >> 2;
        fcn.00011190(puStack_10,0,0x10001);
        iVar5 = rdmsr(0xc0010130);
        *(iVar5 + 0x1f8) = puStack_10[0x76];
        iVar4 = fcn.00011190(puStack_10,0,1);
        if (iVar4 == 0) {
            (**(*0x1bc60 + 0x30))(puStack_10);
        }
        if ((*(arg2 + 0xd0) != 0) && (iVar4 = fcn.00011190(*(arg2 + 0xd0),0,1), iVar4 == 0)) {
            (**(*0x1bc60 + 0x30))(*(arg2 + 0xd0),1);
        }
        *(arg2 + 0xd0) = 0;
    }
    return;
}


/* fcn.00012f40 @ 0x12f40 */

uint64_t fcn.00012f40(uint32_t arg1)

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


/* fcn.00012f6c @ 0x12f6c */

uint64_t fcn.00012f6c(uint32_t arg1)

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


/* fcn.0001a078 @ 0x1a078 */

void fcn.0001a078(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001934c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00019318 @ 0x19318 */

uchar * fcn.00019318(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001a63c @ 0x1a63c */

void fcn.0001a63c(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x1bdd0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x1bd50) {
        fcn.00010300(arg1_00,0x1bd50,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x1a774;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x1a690;
    *(arg1_00 + 4) = 0x1a6b8;
    *(arg1_00 + 8) = 0x1a738;
    *(arg1_00 + 10) = 0x1a730;
    *(arg1_00 + 0xc) = 0x1a740;
    *(arg1_00 + 0xe) = 0x1a748;
    *(arg1_00 + 0x10) = 0x1a750;
    *(arg1_00 + 0x12) = 0x1a758;
    *(arg1_00 + 0x14) = 0x1a76c;
    *(arg1_00 + 0x16) = 0x1a760;
    return;
}


/* fcn.0001a328 @ 0x1a328 */

uint64_t fcn.0001a328(int32_t arg_78h)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t *arg1;
    uint64_t *arg1_00;
    uint64_t *puVar3;
    uint64_t *puStackX_8;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x1bcc8;
    if (*0x1bcc8 == 0) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar2 = (**(*0x1bc60 + 0x40))(6,0x68,&puStackX_8);
        arg1_00 = puStackX_8;
        if (iVar2 < 0) {
            arg1_00 = NULL;
        }
        puStackX_8 = arg1_00;
        fcn.0001a63c(arg1_00);
        iVar2 = (**(*0x1bc60 + 0x40))(6,0x78,&puStackX_8);
        arg1 = puStackX_8;
        if (iVar2 < 0) {
            arg1 = NULL;
        }
        if (arg1 == NULL) {
            arg1 = 0x1bcd0;
        }
        else {
            puVar3 = 0x1bdd0;
            if (arg1_00 != NULL) {
                puVar3 = arg1_00;
            }
            puStackX_8 = arg1;
            if (arg1 != 0x1bd50) {
                fcn.00010300(arg1,0x1bd50,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *arg1 = puVar3;
            *(arg1 + 4) = 0;
            if (puVar3[1] != NULL) {
                (*puVar3[1])(arg1,&uStack_18);
            }
        }
        *0x1bcc8 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        uVar1 = *0x1ae28;
        *(arg1 + 0x10) = *0x1ae20;
        *(arg1 + 0x18) = uVar1;
    }
    return -(*(arg1 + 0x70) != 0) & arg1;
}


/* fcn.0001a4f8 @ 0x1a4f8 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.0001a4f8(uint32_t arg1,ulong noname_1,ulong noname_2,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint16_t uVar3;
    uint *puVar4;
    uint32_t uVar5;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    int64_t iStack_54;
    int64_t iStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    uint32_t var_9h;
    int64_t var_5h;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 != 0x1bcd0) {
        puVar4 = &uStack_88;
        uVar5 = (arg2 & 7) << 4 | *(piVar2 + 0xc) & 0xffff80;
        uStack_58 = uVar5 | 0x1000002;
        if ((*(piVar2 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar2[2];
            iStack_4c = piVar2[3];
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x1bbb0;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar2[4];
            *(piVar2 + 4) = _auStack_44 + 1;
            *puVar4 = *0x1bbb4;
            puVar4 = puVar4 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar3 = 0;
            do {
                cVar1 = *(uVar3 + in_stack_00000030);
                acStack_28[uVar3] = cVar1;
                if (cVar1 == '\0') break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
            if ((uVar3 < 0x18) && (0x18 - uVar3 != 0)) {
                fcn.00010340(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x1bbc8;
        }
        else {
            uStack_58 = uVar5 | 0x1000202;
            *puVar4 = *0x1bbc4;
            puVar4[1] = *0x1bbcc;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x1bbf0;
        (**(*piVar2 + 0x18))(piVar2,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.0001ac98 @ 0x1ac98 */

int64_t fcn.0001ac98(uint32_t arg1)

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


/* fcn.0001a8e0 @ 0x1a8e0 */

void fcn.0001a8e0(ulong noname_0,int64_t arg1)

{
    if ((((*arg1 != -1) && ((*(arg1 + 4) & 2) == 0)) && ((*(arg1 + 0x10) & 0xfffff000) != 0)) &&
       ((*(arg1 + 0x10) & 0xfffff000) != 0xfffff000)) {
        *(arg1 + 4) = *(arg1 + 4) | 2;
    }
    return;
}


/* fcn.0001aac0 @ 0x1aac0 */

uint64_t fcn.0001aac0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0xfdcb0618 & 2) == 0) {
        uVar2 = fcn.0001ac98(0xf1000);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) goto code_r0x0001ac30;
        if ((*0xc00f1004 & 2) == 0) {
            *0xc00f1004 = *0xc00f1004 | 2;
            *0xc00f1084 = *0xc00f1084 & 0xfc;
            iVar3 = 0x81;
            if (*(uVar2 + 0xfc) == 0x44570110) {
                iVar3 = 0x204;
            }
            *(iVar3 + uVar2) = *(iVar3 + uVar2) | 7;
        }
    }
    else {
        uVar4 = *0x1b034;
        uVar2 = fcn.0001ac98(*0x1b034);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) {
code_r0x0001ac30:
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
    iVar1 = *(*arg1 + 0xfc);
    *arg2 = iVar1 == 0x44570110;
    return CONCAT71(iVar1 >> 8,1);
}


/* fcn.0001ac44 @ 0x1ac44 */

void fcn.0001ac44(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,arg2);
    cVar1 = fcn.0001aac0(arg1,aiStackX_18,aiStackX_10);
    if (cVar1 != '\0') {
        if (aiStackX_10[0] == 1) {
            uVar2 = *(aiStackX_18[0] + 0x10);
        }
        else {
            uVar2 = *(aiStackX_18[0] + 4);
        }
        uVar2 = uVar2 & 0xdf | 2;
        if (aiStackX_10[0] == 1) {
            *(aiStackX_18[0] + 0x10) = uVar2;
        }
        else {
            *(aiStackX_18[0] + 4) = uVar2;
        }
    }
    return;
}


