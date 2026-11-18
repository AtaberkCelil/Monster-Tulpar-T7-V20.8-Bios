// decompiled by r2ghidra: 0518_BootScriptExecutorDxe.pe32
// functions: 97

/* entry0 @ 0x10bd0 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00010bf8(arg1,arg2);
    iVar1 = fcn.00010eb8(arg1,arg2);
    if (iVar1 < 0) {
        fcn.00010d9c();
    }
    return iVar1;
}


/* fcn.00010bf8 @ 0x10bf8 */

ulong fcn.00010bf8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t arg2_00;
    uint32_t in_R8D;
    int64_t *piVar10;
    bool bVar11;
    
    *0x17900 = *(arg2 + 0x60);
    uVar7 = 0x22;
    if (*0x17920 != '\0') {
        uVar7 = *0x16d04;
    }
    *0x178f8 = arg2;
    *0x17908 = arg1;
    if ((uVar7 & 2) != 0) {
        fcn.00015c5c(arg1,arg2,in_R8D);
    }
    arg2_00 = arg2;
    if ((uVar7 & 0x10) != 0) {
        fcn.000167cc();
    }
    fcn.00011758();
    uVar9 = 0x16cf0;
    iVar4 = fcn.00011788(0x16cf0);
    if (iVar4 == 0) {
        uVar5 = fcn.00010b30();
        fcn.00010b00();
        uVar2 = in(0x1808);
        fcn.00010ab0(uVar9,0x1808);
        while( true ) {
            arg2_00 = 0x1808;
            iVar3 = in(0x1808);
            uVar8 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            uVar9 = uVar8;
            if ((uVar8 >> 0x17 & 1) != 0) break;
            fcn.000104a0();
        }
        fcn.00010ab0(uVar9,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.00010b00();
        }
        else {
            fcn.00010af0();
        }
    }
    if (*0x178f8 != 0) {
        uVar9 = 0x16cd0;
        iVar4 = fcn.00011788(0x16cd0);
        if ((iVar4 != 0) && (iVar4 != -0x18)) {
            cVar1 = *(iVar4 + 0x1a);
            if (cVar1 == '\x03') {
                *0x16d00 = 0x2580;
            }
            else if (cVar1 == '\x04') {
                *0x16d00 = 0x4b00;
            }
            else if (cVar1 == '\x06') {
                *0x16d00 = 0xe100;
            }
            else {
                *0x16d00 = 0x1c200;
            }
            bVar11 = *(iVar4 + 0x1b) != '\0';
            *0x17921 = 1;
            *0x17920 = '\x01';
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
            arg2_00 = uVar7;
            uVar9 = uVar7 | 0x20;
            if (*(iVar4 + 0x1f) == '\0') {
                uVar9 = arg2_00;
            }
            *0x16d04 = uVar9;
        }
    }
    fcn.00011d8c(uVar9,arg2_00);
    uVar9 = 0;
    if (*(*0x178f8 + 0x68) != 0) {
        piVar10 = *(*0x178f8 + 0x70);
        do {
            if ((*0x16cb0 == *piVar10) && (*0x16cb8 == piVar10[1])) {
                *0x17970 = (*(*0x178f8 + 0x70))[uVar9 * 3 + 2];
                return 0;
            }
            uVar9 = uVar9 + 1;
            piVar10 = piVar10 + 3;
        } while (uVar9 < *(*0x178f8 + 0x68));
    }
    *0x17970 = 0;
    return 0x800000000000000e;
}


/* fcn.00010eb8 @ 0x10eb8 */

ulong fcn.00010eb8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ulong *arg2_00;
    ulong uVar3;
    int64_t in_R9;
    int64_t iStackX_8;
    ulong *apuStackX_10 [2];
    
    iStackX_8 = arg1;
    apuStackX_10[0] = arg2;
    iVar2 = fcn.00011660();
    cVar1 = (**(iVar2 + 0x30))(0x16c70,0x1100000);
    uVar3 = 0;
    if (cVar1 == '\0') {
        uVar3 = 0x8000000000000003;
    }
    else {
        *0x178e0 = 0;
        iVar2 = (**(*0x17900 + 0x140))(0x16cc0,0,&iStackX_8);
        if (iVar2 < 0) {
            fcn.000116fc(in_R9);
        }
        else {
            apuStackX_10[0] = 0xffffffff;
            (**(*0x17900 + 0x28))(1,0,1,apuStackX_10);
            arg2_00 = apuStackX_10[0];
            *apuStackX_10[0] = 0x10fb4;
            fcn.00011934(0x16be0,apuStackX_10,8);
            fcn.00011934(0x16c50,arg2_00,8);
            fcn.00011a28(0x16c50,arg2_00);
        }
    }
    return uVar3;
}


/* fcn.00010d9c @ 0x10d9c */

void fcn.00010d9c(void)

{
    int64_t iVar1;
    
    if (*0x16d28 != '\0') {
        if (*0x17948 != 0) {
            (**(*0x17900 + 0x70))();
        }
        if (*0x17950 != 0) {
            if (*0x17958 != 0) {
                (**(*0x17950 + 0xc0))(0x16c20,0,0x17958);
            }
            if (*0x17938 != 0) {
                (**(*0x17950 + 0xc0))(0x16c00,0,0x17938);
            }
            if (*0x17960 != 0) {
                (**(*0x17950 + 0xc0))(0x16c80,0,0x17960);
            }
        }
        if (*0x17940 != '\0') {
            (**(*0x17900 + 0x30))(*0x18720,1);
            iVar1 = fcn.00011660();
            (**(iVar1 + 0x58))(0x16c70,0x30000,0);
        }
        if ((*0x17950 != 0) && (*0x17968 != '\0')) {
            (**(*0x17950 + 0x58))(*0x18728);
            iVar1 = fcn.00011660();
            (**(iVar1 + 0x58))(0x16c70,0x30001,0);
        }
    }
    return;
}


/* fcn.000114f0 @ 0x114f0 */

uint64_t fcn.000114f0(void)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    
    uVar2 = fcn.000103f0();
    if (uVar2 < *0x18780 + 0x1000) {
        uVar2 = uVar2 & *0x18780;
        uVar3 = fcn.000103e0();
        puVar1 = (uVar3 & *0x18780) + (uVar2 >> 0x27 & 0x1ff) * 8;
        if ((*puVar1 & 1) == 0) {
            fcn.00011464(puVar1);
        }
        uVar5 = uVar2 >> 0x1e & 0x1ff;
        uVar3 = ~*0x178e0 & *puVar1 & *0x18780;
        if (*0x178e8 == '\0') {
            puVar1 = uVar3 + uVar5 * 8;
            if ((*puVar1 & 1) == 0) {
                fcn.00011464(puVar1);
            }
            uVar4 = ~*0x178e0 & *puVar1 & *0x18780;
            *(uVar4 + (uVar2 >> 0x15 & 0x1ff) * 8) = (*0x178e0 | uVar2) & 0xffffffffffe00083 | 0x83;
        }
        else {
            uVar4 = (*0x178e0 | uVar2) & 0xffffffffc0000083 | 0x83;
            *(uVar3 + uVar5 * 8) = uVar4;
        }
        uVar2 = CONCAT71(uVar4 >> 8,1);
    }
    else {
        uVar2 = *0x18780 & 0xffffffffffffff00;
    }
    return uVar2;
}


/* fcn.00014668 @ 0x14668 */

void fcn.00014668(uint32_t param_1,int64_t param_2,int64_t param_3)

{
    fcn.00014718(param_1,param_2,param_3);
    return;
}


/* fcn.00014718 @ 0x14718 */

//WARNING: Removing unreachable block (ram,0x000147a4)

void fcn.00014718(uint32_t arg1,int64_t arg2,int64_t arg3)

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
    
    iVar3 = *0x17b18;
    iVar2 = *0x17b10;
    iVar8 = CONCAT44(in_register_0000000c,arg1);
    if (iVar8 == 0x1d) {
        iVar8 = 0x1d;
    }
    iVar7 = iVar8 * 0x58;
    iVar4 = *(iVar7 + 0xc + *0x17b10);
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
                uVar5 = fcn.00016168();
                *(iVar7 + 8 + iVar2) = uVar5;
                iVar3 = *0x17b10;
                *(iVar7 + 0x18 + *0x17b10) = *(arg2 + 0x2d0);
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
            iVar4 = fcn.00016168();
            iVar6 = *0x17b10;
            if (*(iVar7 + 8 + iVar2) == iVar4) break;
            fcn.000104a0();
        }
        *(arg2 + 0x2d0) = *(iVar7 + 0x18 + *0x17b10);
        *(arg2 + 0x2f0) = *(iVar7 + 0x20 + iVar6);
        *(arg2 + 0x268) = *(iVar7 + 0x28 + iVar6);
        *(arg2 + 0x2c8) = *(iVar7 + 0x30 + iVar6);
        *(arg2 + 0x2a0) = *(iVar7 + 0x38 + iVar6);
        *arg2 = *(iVar7 + 0x40 + iVar6);
        *(iVar7 + iVar2) = 1;
    }
    else if (iVar4 != -1) {
        do {
            fcn.000104a0();
        } while( true );
    }
    if ((iVar3 == 0) || (pcVar1 = *(iVar3 + iVar8 * 8), pcVar1 == NULL)) {
        if (iVar8 < 0x20) {
            while( true ) {
                LOCK();
                bVar10 = *0x17b08 == 1;
                if (bVar10) {
                    *0x17b08 = 2;
                }
                UNLOCK();
                if (bVar10) break;
                fcn.000104a0();
            }
            uVar9 = 0x22;
            if (*0x17920 != '\0') {
                uVar9 = *0x16d04;
            }
            if ((uVar9 & 2) != 0) {
                fcn.00015c5c(2,iVar6,arg3);
            }
            if ((uVar9 & 0x10) != 0) {
                fcn.000167cc();
            }
            fcn.00014b18(iVar8,arg2);
            fcn.00014e4c(95000,arg2,arg3,in_R9);
            *0x17b08 = 1;
            if (*(iVar7 + 0xc + iVar2) != 1) {
                do {
                    fcn.000104a0();
                } while( true );
            }
        }
    }
    else {
        (*pcVar1)(iVar8,arg2);
    }
    return;
}


/* fcn.00015c5c @ 0x15c5c */

ulong fcn.00015c5c(ulong noname_0,int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uchar uVar5;
    uchar uVar6;
    uint32_t uVar7;
    
    uVar7 = 0x1c200;
    if (*0x17921 != '\0') {
        uVar7 = *0x16d00;
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


/* fcn.000167cc @ 0x167cc */

void fcn.000167cc(void)

{
    uint *puVar1;
    uint64_t arg1;
    
    arg1 = *0x16d5c;
    if ((*0xfdcb0618 & 2) == 0) {
        arg1 = 0xf1000;
    }
    puVar1 = fcn.00016b50(arg1);
    if (((puVar1 & 0xffffff00) != 0) && ((puVar1 & 0xfffff000) != 0xfffff000)) {
        fcn.00016798(puVar1 & 0xfffff000,arg1);
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


/* fcn.00011758 @ 0x11758 */

int64_t fcn.00011758(void)

{
    if (*0x17918 == 0) {
        fcn.0001169c(0x16c90,0x17918);
    }
    return *0x17918;
}


/* fcn.0001169c @ 0x1169c */

ulong fcn.0001169c(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x178f8;
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


/* fcn.00011788 @ 0x11788 */

void fcn.00011788(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011758();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000117b6:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000117b6;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010b30 @ 0x10b30 */

uint64_t fcn.00010b30(void)

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


/* fcn.00010b00 @ 0x10b00 */

void fcn.00010b00(void)

{
    return;
}


/* fcn.00010ab0 @ 0x10ab0 */

uint64_t fcn.00010ab0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000104a2 @ 0x104a2 */

void fcn.000104a2(void)

{
    return;
}


/* fcn.00010af0 @ 0x10af0 */

void fcn.00010af0(void)

{
    return;
}


/* fcn.00011d8c @ 0x11d8c */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00011d8c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t *arg1_00;
    int64_t iStackX_8;
    ulong uStackX_10;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_bp_10h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    iStackX_8 = arg1;
    iVar2 = fcn.00011660();
    cVar1 = (**(iVar2 + 0x30))(0x16c70,0x1100000);
    if (cVar1 == '\0') {
        *0x16d28 = 0;
    }
    else {
        iVar2 = fcn.00011660();
        iVar2 = (**(iVar2 + 0x20))(0x16c70,0x30000);
        if (iVar2 == 0) {
            iStackX_18 = 0xffffffff;
            arg1_00 = &iStackX_18;
            (**(*0x17900 + 0x28))(1,0,1);
            iVar2 = iStackX_18;
            *0x17940 = 1;
            iVar3 = fcn.00011660();
            (**(iVar3 + 0x58))(0x16c70,0x30000,iVar2);
            fcn.000104c0(iVar2,0x20);
            *0x17948 = fcn.000116fc(arg1_00);
        }
        *0x18720 = iVar2;
        iVar2 = (**(*0x17900 + 0x140))(0x16ca0,0,&puStackX_20);
        if (-1 < iVar2) {
            iVar2 = (**puStackX_20)(puStackX_20,&uStackX_10);
            if ((-1 < iVar2) && (uStackX_10 != '\0')) {
                iVar2 = (*puStackX_20[1])(puStackX_20,0x17950);
                if (-1 < iVar2) {
                    iVar2 = fcn.00011660();
                    iStackX_8 = (**(iVar2 + 0x20))(0x16c70,0x30001);
                    if (iStackX_8 == 0) {
                        (**(*0x17950 + 0x50))(6,0x20,&iStackX_8);
                        iVar2 = iStackX_8;
                        *0x17968 = 1;
                        iVar3 = fcn.00011660();
                        (**(iVar3 + 0x58))(0x16c70,0x30001,iVar2);
                        fcn.000104c0(iStackX_8,0x20);
                        (**(*0x17950 + 0xc0))(0x16c20,0x11d14,0x17958);
                        (**(*0x17950 + 0xc0))(0x16c00,0x11d14,0x17938);
                    }
                    *0x18728 = iStackX_8;
                    (**(*0x17950 + 0xc0))(0x16c80,0x11cb4,0x17960);
                }
            }
        }
    }
    return 0;
}


/* fcn.00011660 @ 0x11660 */

int64_t fcn.00011660(void)

{
    if (*0x17910 == 0) {
        (**(*0x17900 + 0x140))(0x16c40,0,0x17910);
    }
    return *0x17910;
}


/* fcn.000116fc @ 0x116fc */

int64_t fcn.000116fc(int64_t arg1)

{
    ulong in_RDX;
    ulong in_R8;
    int64_t iStackX_20;
    ulong in_stack_00000028;
    
    iStackX_20 = arg1;
    (**(*0x17900 + 0x50))(0x200,in_RDX,in_R8,0,&iStackX_20);
    (**(*0x17900 + 0xa8))(0x16c10,iStackX_20,in_stack_00000028);
    (**(*0x17900 + 0x68))(iStackX_20);
    return iStackX_20;
}


/* fcn.00011934 @ 0x11934 */

ulong fcn.00011934(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    ulong uStackX_8;
    uchar auStack_68 [80];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        puVar1 = fcn.00011868();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.000118b8();
            arg1_00 = auStack_68;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x16c60) {
                fcn.000104e0(arg1_00,0x16c60,0x10);
            }
            *(arg1_00 + 0x10) = 0x30;
            *(arg1_00 + 0x20) = 0xffffffffffffffff;
            *(arg1_00 + 0x18) = 1;
            *(arg1_00 + 0x1c) = 0x30;
            if (arg1_00 + 0x28 != arg1) {
                fcn.000104e0(arg1_00 + 0x28,arg1,0x10);
            }
            *(arg1_00 + 0x38) = arg2;
            *(arg1_00 + 0x40) = arg3;
            uStackX_8 = 0x48;
            (**puVar1)(puVar1,arg1_00,&uStackX_8);
            uVar2 = *(arg1_00 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.00011a28 @ 0x11a28 */

ulong fcn.00011a28(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    int64_t iStackX_10;
    uchar auStack_48 [64];
    
    if (arg1 == 0) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iStackX_10 = arg2;
        puVar1 = fcn.00011868();
        if (puVar1 == NULL) {
            uVar2 = 0x8000000000000013;
        }
        else {
            puVar3 = fcn.000118b8();
            arg1_00 = auStack_48;
            if (puVar3 != NULL) {
                arg1_00 = puVar3;
            }
            if (arg1_00 != 0x16c60) {
                fcn.000104e0(arg1_00,0x16c60,0x10);
            }
            *(arg1_00 + 0x10) = 0x28;
            *(arg1_00 + 0x20) = 0xffffffffffffffff;
            *(arg1_00 + 0x18) = 4;
            *(arg1_00 + 0x1c) = 0x28;
            if (arg1_00 + 0x28 != arg1) {
                fcn.000104e0(arg1_00 + 0x28,arg1,0x10);
            }
            *(arg1_00 + 0x38) = 1;
            iStackX_10 = 0x40;
            (**puVar1)(puVar1,arg1_00,&iStackX_10);
            uVar2 = *(arg1_00 + 0x20);
        }
    }
    return uVar2;
}


/* fcn.00010480 @ 0x10480 */

void fcn.00010480(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = InterruptDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.000104b0 @ 0x104b0 */

void fcn.000104b0(ulong *param_1)

{
    InterruptDescriptorTableRegister(*param_1);
    return;
}


/* fcn.00014678 @ 0x14678 */

ulong fcn.00014678(ulong param_1,ulong param_2,ulong param_3)

{
    uint64_t uVar1;
    uint16_t uStack_38;
    int64_t iStack_36;
    uchar auStack_28 [32];
    
    *0x17b10 = 0x17b20;
    *0x17b18 = 0x18620;
    *0x17b08 = 1;
    fcn.00010b40(0x17b20,0xb00,CONCAT71(param_3 >> 8,0xff));
    fcn.00010480(&uStack_38);
    uVar1 = uStack_38 + 1 >> 4;
    if (0x20 < uVar1) {
        uVar1 = 0x20;
    }
    fcn.00010967(auStack_28);
    *0x17b00 = uVar1;
    fcn.00014a20(iStack_36,auStack_28,0x17b00);
    return 0;
}


/* fcn.00010b40 @ 0x10b40 */

int64_t fcn.00010b40(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010967 @ 0x10967 */

void fcn.00010967(int64_t arg1)

{
    *arg1 = 0x10520;
    *(arg1 + 8) = 0xf;
    *(arg1 + 0x10) = 0x10700;
    *0x10525 = 0x10731;
    *0x10534 = 0x10731;
    *0x10543 = 0x10731;
    *0x10552 = 0x10731;
    *0x10561 = 0x10731;
    *0x10570 = 0x10731;
    *0x1057f = 0x10731;
    *0x1058e = 0x10731;
    *0x1059d = 0x10731;
    *0x105ac = 0x10731;
    *0x105bb = 0x10731;
    *0x105ca = 0x10731;
    *0x105d9 = 0x10731;
    *0x105e8 = 0x10731;
    *0x105f7 = 0x10731;
    *0x10606 = 0x10731;
    *0x10615 = 0x10731;
    *0x10624 = 0x10731;
    *0x10633 = 0x10731;
    *0x10642 = 0x10731;
    *0x10651 = 0x10731;
    *0x10660 = 0x10731;
    *0x1066f = 0x10731;
    *0x1067e = 0x10731;
    *0x1068d = 0x10731;
    *0x1069c = 0x10731;
    *0x106ab = 0x10731;
    *0x106ba = 0x10731;
    *0x106c9 = 0x10731;
    *0x106d8 = 0x10731;
    *0x106e7 = 0x10731;
    *0x106f6 = 0x10731;
    *0x10705 = 0x1070f;
    return;
}


/* fcn.00014a20 @ 0x14a20 */

void fcn.00014a20(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    unkuint6 *pVar6;
    
    iVar4 = *(arg3 + 0x10);
    uVar2 = fcn.00010400();
    uVar5 = 0;
    if (*arg3 != 0) {
        pVar6 = arg1 + 6;
        iVar4 = iVar4 + 0x48;
        do {
            *(pVar6 + -4) = uVar2;
            iVar1 = *(iVar4 + -0x3c);
            if (iVar1 != 0) {
                if (iVar1 == 1) {
code_r0x00014aa8:
                    *(iVar4 + -0x38) = *pVar6 * 0x10000 + *(pVar6 + -6);
                }
                else if (iVar1 == 2) {
                    *(iVar4 + -0x48) = 1;
                    iVar3 = *(arg2 + 0x10);
                    if ((*(arg2 + 8) != 0) && (iVar4 != iVar3)) {
                        fcn.000104e0(iVar4,iVar3,*(arg2 + 8));
                    }
                    fcn.00010aa5(iVar4,CONCAT71(iVar3 >> 8,uVar5));
                    goto code_r0x00014aa8;
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


/* fcn.00011354 @ 0x11354 */

void fcn.00011354(int64_t arg1)

{
    ushort uVar1;
    uint64_t uVar2;
    bool bVar3;
    uint32_t auStackX_8 [2];
    
    fcn.000103b0(0x80000000,auStackX_8,0,0);
    if (auStackX_8[0] < 0x80000008) {
        auStackX_8[0]._0_1_ = 0x24;
    }
    else {
        fcn.000103b0(0x80000008,auStackX_8,0,0);
    }
    *0x18780 = (1LL << (auStackX_8[0] & 0x3f)) - 1U & 0xfffffffff000;
    *0x18788 = (*(arg1 + 8) << 0x20) + *arg1 + *(arg1 + 6) * 0x10000;
    *arg1 = 0x307;
    uVar1 = fcn.00010400();
    *(arg1 + 0xc) = 0;
    *(arg1 + 2) = uVar1;
    bVar3 = *0x178e8 == '\0';
    *(arg1 + 4) = 0x8e00;
    *(arg1 + 6) = 1;
    *(arg1 + 8) = 0;
    if (bVar3) {
        uVar2 = fcn.000103e0();
        *0x18790 = (uVar2 & *0x18780) + 0x6000;
    }
    else {
        uVar2 = fcn.000103e0();
        *0x18790 = (uVar2 & *0x18780) + 0x2000;
    }
    fcn.000104c0(0x18740,0x40);
    return;
}


/* fcn.00012dc0 @ 0x12dc0 */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.00012dc0(ulong param_1,ulong ****param_2)

{
    ulong ****ppppuVar1;
    int64_t iVar2;
    ulong ***arg1;
    uint32_t uVar3;
    ulong ****ppppuVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    ulong ****ppppuVar7;
    int64_t var_fh_2;
    ulong ***pppuStackX_10;
    ulong ***pppuStackX_18;
    ulong ****ppppuStackX_20;
    int64_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uchar auStack_b8 [11];
    uint32_t uStack_ad;
    uint16_t uStack_a9;
    ushort uStack_a7;
    uint16_t uStack_a5;
    uchar auStack_a0 [16];
    uchar auStack_90 [16];
    uchar auStack_80 [15];
    int64_t var_69h_2;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_4eh;
    int16_t var_46h;
    int64_t var_41h;
    int64_t var_31h;
    int64_t var_21h;
    uint32_t var_11h;
    int32_t var_ch;
    int64_t var_1h;
    
    ppppuVar1 = **0x18720;
    if (ppppuVar1 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
code_r0x00013371:
        return iVar2;
    }
    if (&var_69h_2 + 1U != ppppuVar1) {
        param_2 = ppppuVar1;
        fcn.000104e0(&var_69h_2 + 1,ppppuVar1,0xd);
    }
    if (var_69h_2._1_2_ != 0xaa) {
code_r0x00012e10:
        iVar2 = -0x7ffffffffffffffd;
        goto code_r0x00013371;
    }
    iVar2 = 0;
    ppppuStackX_20 = NULL;
    ppppuVar4 = ppppuVar1 + var_69h_2._3_1_;
    uStack_c0 = 0;
    if (stack0xffffffffffffff95 + ppppuVar1 <= ppppuVar4) goto code_r0x00013371;
code_r0x00012e54:
    uVar3 = ppppuVar4;
    if (&var_fh_2 + 1U != ppppuVar4) {
        param_2 = ppppuVar4;
        fcn.000104e0(&var_fh_2 + 1,uVar3,7);
    }
    if (0xfe < var_fh_2._1_2_) {
        if (var_fh_2._1_2_ == 0xff) {
            return 0;
        }
        goto code_r0x00012e10;
    }
    if (var_fh_2._1_2_ == 0xfe) {
        if (&pppuStackX_18 != ppppuVar4) {
            arg1 = &pppuStackX_18;
code_r0x0001332f:
            param_2 = ppppuVar4;
            fcn.000104e0(arg1,uVar3,7);
        }
    }
    else {
        if (var_fh_2._1_2_ < 9) {
            if (var_fh_2._1_2_ == 8) {
                if (&var_4eh + 6U != ppppuVar4) {
                    fcn.000104e0(&var_4eh + 6,uVar3,0xb);
                }
                param_2 = NULL;
                iVar2 = (*stack0xffffffffffffffb3)(0);
                goto code_r0x0001333d;
            }
            if (var_fh_2._1_2_ == 0) {
                if (auStack_b8 != ppppuVar4) {
                    fcn.000104e0(auStack_b8,uVar3,0x13);
                }
                uVar6 = auStack_b8._7_4_;
                puVar5 = ppppuVar4 + 0x13;
                param_2 = CONCAT26(uStack_a7,CONCAT24(uStack_a9,uStack_ad));
                uVar3 = auStack_b8._3_4_;
code_r0x00013130:
                iVar2 = fcn.0001238c(uVar3,param_2,uVar6,puVar5);
                goto code_r0x0001333d;
            }
            if (var_fh_2._1_2_ == 1) {
                param_2 = &ppppuStackX_20;
                fcn.00012a98(&var_fh_2 + 1,param_2,&uStack_c0);
                uStack_c8 = 0;
                if (auStack_a0 != ppppuVar4) {
                    param_2 = ppppuVar4;
                    fcn.000104e0(auStack_a0,uVar3,0xf);
                }
                if (auStack_a0._7_8_ < 0x10000) {
                    param_2 = auStack_a0._7_8_;
                    iVar2 = fcn.000122b4(auStack_a0._3_4_,auStack_a0._7_8_,&uStack_c8);
                    if (-1 < iVar2) {
                        puVar5 = &uStack_c8;
                        uVar6 = 1;
                        uStack_c8 = uStack_c8 & ppppuStackX_20 | uStack_c0;
                        param_2 = auStack_a0._7_8_;
                        uVar3 = auStack_a0._3_4_;
                        goto code_r0x00013130;
                    }
                }
                else {
                    iVar2 = -0x7ffffffffffffffe;
                }
                goto code_r0x0001333d;
            }
            if (var_fh_2._1_2_ == 2) {
                if (auStack_b8 != ppppuVar4) {
                    fcn.000104e0(auStack_b8,uVar3,0x13);
                }
                uVar6 = auStack_b8._7_4_;
                puVar5 = ppppuVar4 + 0x13;
                param_2 = CONCAT26(uStack_a7,CONCAT24(uStack_a9,uStack_ad));
                uVar3 = auStack_b8._3_4_;
code_r0x0001307a:
                iVar2 = fcn.0001257c(uVar3,param_2,uVar6,puVar5);
                goto code_r0x0001333d;
            }
            if (var_fh_2._1_2_ == 3) {
                puVar5 = &uStack_c0;
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,puVar5);
                uStack_c8 = 0;
                if (auStack_80 != ppppuVar4) {
                    puVar5 = 0xf;
                    fcn.000104e0(auStack_80,uVar3,0xf);
                }
                param_2 = auStack_80._7_8_;
                iVar2 = fcn.000124a4(auStack_80._3_4_,auStack_80._7_8_,puVar5,&uStack_c8);
                if (iVar2 < 0) goto code_r0x0001333d;
                puVar5 = &uStack_c8;
                uVar6 = 1;
                uStack_c8 = uStack_c8 & ppppuStackX_20 | uStack_c0;
                param_2 = auStack_80._7_8_;
                uVar3 = auStack_80._3_4_;
                goto code_r0x0001307a;
            }
            if (var_fh_2._1_2_ == 4) {
                if (auStack_b8 != ppppuVar4) {
                    fcn.000104e0(auStack_b8,uVar3,0x13);
                }
                param_2 = NULL;
                goto code_r0x00012fc9;
            }
            if (var_fh_2._1_2_ == 5) {
                ppppuVar7 = ppppuVar4;
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,&uStack_c0);
                uStack_c8 = 0;
                if (auStack_90 != ppppuVar4) {
                    fcn.000104e0(auStack_90,uVar3,0xf);
                }
                param_2 = NULL;
                iVar2 = fcn.0001269c(auStack_90._3_4_,0,auStack_90._7_8_,ppppuVar7);
                if (iVar2 < 0) goto code_r0x0001333d;
                uStack_c8 = uStack_c8 & ppppuStackX_20 | uStack_c0;
                param_2 = NULL;
                uVar6 = 1;
                iVar2 = auStack_90._7_8_;
                uVar3 = auStack_90._3_4_;
                goto code_r0x00012fd4;
            }
            if (var_fh_2._1_2_ == 6) {
                if (auStack_b8 != ppppuVar4) {
                    fcn.000104e0(auStack_b8,uVar3,0x13);
                }
                uStack_c8 = CONCAT22(uStack_a7,uStack_a9);
                param_2 = uStack_ad;
                iVar2 = fcn.00011f8c(CONCAT44(auStack_b8._7_4_,auStack_b8._3_4_),param_2,&uStack_c8,ppppuVar4 + 0x13
                                    );
                goto code_r0x0001333d;
            }
            if (var_fh_2._1_2_ != 7) goto code_r0x00012e10;
            if (&var_59h + 1U != ppppuVar4) {
                param_2 = ppppuVar4;
                fcn.000104e0(&var_59h + 1,uVar3,0xb);
            }
            fcn.00011834(stack0xffffffffffffffa3,param_2);
            iVar2 = 0;
            goto code_r0x00013342;
        }
        if (var_fh_2._1_2_ == 9) {
            if (auStack_b8 != ppppuVar4) {
                fcn.000104e0(auStack_b8,uVar3,0x13);
            }
            param_2 = CONCAT26(uStack_a7,CONCAT24(uStack_a9,uStack_ad));
            iVar2 = (*CONCAT44(auStack_b8._7_4_,auStack_b8._3_4_))(0);
        }
        else if (var_fh_2._1_2_ == 10) {
            if (&pppuStackX_10 != ppppuVar4) {
                arg1 = &pppuStackX_10;
                goto code_r0x0001332f;
            }
        }
        else if (var_fh_2._1_2_ == 0xb) {
            if (auStack_b8 != ppppuVar4) {
                fcn.000104e0(auStack_b8,uVar3,0x15);
            }
            param_2 = uStack_a5;
code_r0x00012fc9:
            iVar2 = CONCAT26(uStack_a7,CONCAT24(uStack_a9,uStack_ad));
            uVar6 = auStack_b8._7_4_;
code_r0x00012fd1:
            uVar3 = auStack_b8._3_4_;
code_r0x00012fd4:
            iVar2 = fcn.00012810(uVar3,param_2,iVar2,uVar6);
        }
        else {
            if (var_fh_2._1_2_ == 0xc) {
                ppppuVar7 = ppppuVar4;
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,&uStack_c0);
                uStack_c8 = 0;
                if (auStack_b8 != ppppuVar4) {
                    fcn.000104e0(auStack_b8,uVar3,0x11);
                }
                param_2 = uStack_a9;
                iVar2 = fcn.0001269c(auStack_b8._3_4_,param_2,CONCAT44(uStack_ad,auStack_b8._7_4_),ppppuVar7);
                if (-1 < iVar2) {
                    uVar6 = 1;
                    uStack_c8 = uStack_c8 & ppppuStackX_20 | uStack_c0;
                    iVar2 = CONCAT44(uStack_ad,auStack_b8._7_4_);
                    param_2 = uStack_a9;
                    goto code_r0x00012fd1;
                }
                goto code_r0x0001333d;
            }
            if (var_fh_2._1_2_ == 0xd) {
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,&uStack_c0);
                param_2 = ppppuStackX_20;
                iVar2 = fcn.00012b48(uVar3,ppppuStackX_20,uStack_c0);
            }
            else if (var_fh_2._1_2_ == 0xe) {
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,&uStack_c0);
                param_2 = ppppuStackX_20;
                iVar2 = fcn.000129d4(uVar3,ppppuStackX_20,uStack_c0);
            }
            else if (var_fh_2._1_2_ == 0xf) {
                ppppuVar7 = ppppuVar4;
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,&uStack_c0);
                param_2 = ppppuStackX_20;
                iVar2 = fcn.00012c1c(uVar3,ppppuStackX_20,uStack_c0,ppppuVar7);
            }
            else {
                if (var_fh_2._1_2_ != 0x10) goto code_r0x00012e10;
                ppppuVar7 = ppppuVar4;
                fcn.00012a98(&var_fh_2 + 1,&ppppuStackX_20,&uStack_c0);
                param_2 = ppppuStackX_20;
                iVar2 = fcn.00012cec(uVar3,ppppuStackX_20,uStack_c0,ppppuVar7);
            }
        }
    }
code_r0x0001333d:
    if (iVar2 < 0) goto code_r0x00013371;
code_r0x00013342:
    ppppuVar4 = ppppuVar4 + var_fh_2._3_1_;
    if (stack0xffffffffffffff95 + ppppuVar1 <= ppppuVar4) goto code_r0x00013371;
    goto code_r0x00012e54;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(void)

{
    return;
}


/* fcn.00010410 @ 0x10410 */

int fcn.00010410(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar *puVar2;
    uchar *puVar3;
    uint32_t in_stack_00000028;
    
    puVar2 = 0x1044a;
    puVar3 = in_stack_00000028 - 0x28;
    for (iVar1 = 0x28; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }
    return (in_stack_00000028 - 0x28) + -4;
}


/* fcn.000104a0 @ 0x104a0 */

void fcn.000104a0(void)

{
    return;
}


/* fcn.000115f0 @ 0x115f0 */

void fcn.000115f0(int64_t arg1)

{
    int64_t in_RCX;
    int64_t in_RDX;
    int64_t in_R8;
    
    fcn.00010490(in_RCX,in_RDX,in_R8,arg1);
    return;
}


/* fcn.00010490 @ 0x10490 */

void fcn.00010490(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    code *pcVar1;
    
    *(arg4 + -0x28) = 0x1049f;
    (*arg1)(arg2,arg3);
    pcVar1 = swi(3);
    (*pcVar1)();
    return;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(int64_t arg1)

{
    //[00] -r-x section size 26944 named .text
    *0x102d5 = CONCAT22((arg1 << 0xc) >> 0x10,arg1) & 0xffff000f;
    return;
}


/* fcn.0001456c @ 0x1456c */

//WARNING: Removing unreachable block (ram,0x00014646)

int64_t fcn.0001456c(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    ulong noname_1_00;
    uint64_t uVar3;
    int64_t arg2_00;
    uint64_t *arg3_00;
    uint64_t uStackX_8;
    
    uStackX_8 = arg1;
    arg1_00 = fcn.000144ac(arg1);
    iVar1 = fcn.000144ec(arg1_00,noname_1,arg2,arg3);
    if (iVar1 < 0) {
        arg2_00 = 0;
        arg3_00 = &uStackX_8;
        noname_1_00 = 0x16c30;
        iVar1 = (**(*0x17900 + 0x138))(2);
        if (-1 < iVar1) {
            uVar3 = 0;
            uVar2 = uStackX_8;
            if (uStackX_8 != 0) {
                do {
                    if (*(uVar3 * 8) != arg1_00) {
                        iVar1 = fcn.000144ec(*(uVar3 * 8),noname_1_00,arg2_00,arg3_00);
                        if (-1 < iVar1) goto code_r0x00014653;
                        uVar2 = uStackX_8;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar2);
            }
            if (uVar3 == uVar2) {
                iVar1 = -0x7ffffffffffffff2;
            }
        }
    }
    else {
        iVar1 = 0;
    }
code_r0x00014653:
    return iVar1;
}


/* fcn.000138b0 @ 0x138b0 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.000138b0(int64_t arg1)

{
    char cVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t *puVar10;
    uint64_t uVar11;
    bool bVar12;
    int64_t iStackX_8;
    int64_t var_bp_18h;
    int64_t var_28h;
    uint32_t var_b0h;
    uchar auStack_188 [12];
    int iStack_17c;
    uint32_t uStack_178;
    int iStack_174;
    int iStack_170;
    uchar auStack_168 [8];
    int iStack_160;
    uint32_t uStack_15c;
    uint32_t uStack_154;
    uchar auStack_138 [4];
    uint8_t uStack_134;
    uint16_t uStack_132;
    uint uStack_128;
    uint16_t uStack_124;
    uint8_t uStack_122;
    uchar uStack_121;
    int iStack_120;
    int iStack_11c;
    uint32_t uStack_118;
    uint32_t uStack_114;
    uint uStack_108;
    uint32_t uStack_104;
    uint32_t uStack_c4;
    uint32_t uStack_b4;
    uint32_t auStack_90 [2];
    int64_t var_80h;
    int32_t var_78h;
    uint32_t var_74h;
    int32_t var_bp_70h;
    uint32_t var_6ch;
    int64_t var_60h;
    int32_t var_1ch;
    int32_t var_ch;
    
    uVar6 = 0;
    *(arg1 + 0x68) = 0;
    iVar3 = fcn.00013384(arg1,auStack_138);
    if (iVar3 < 0) {
        return iVar3;
    }
    cVar1 = *(arg1 + 0x7d);
    if (cVar1 == '\0') {
        uVar7 = 0;
        if (iStack_120 == 0x10b) {
            uVar8 = uStack_104;
            uVar7 = uVar6;
        }
        else {
            uVar8 = CONCAT44(uStack_104,uStack_108);
        }
    }
    else {
        uVar7 = uStack_132 - 0x28;
        uVar8 = uVar7 + CONCAT17(uStack_121,CONCAT16(uStack_122,CONCAT24(uStack_124,uStack_128)));
    }
    *arg1 = uVar8;
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x48) = 0;
    *(arg1 + 0x50) = 0;
    if (cVar1 == '\0') {
        if ((uStack_122 & 1) != 0) {
code_r0x00013953:
            *(arg1 + 0x7c) = 1;
            goto code_r0x0001395d;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x00013953;
    *(arg1 + 0x7c) = 0;
code_r0x0001395d:
    if (cVar1 == '\0') {
        if (iStack_120 == 0x10b) {
            puVar10 = auStack_90;
        }
        else {
            puVar10 = &var_78h;
            uStack_c4 = uStack_b4;
        }
        if (6 < uStack_c4) {
            uVar2 = *puVar10;
            uVar7 = uVar2;
            iVar3 = uStack_124 + 0x18 + *(arg1 + 0x3c);
            bVar12 = uStack_132 != 0;
            uVar8 = uVar6;
            while (bVar12) {
                iStackX_8 = 0x28;
                iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar3,&iStackX_8,auStack_168);
                if (iVar4 < 0) goto code_r0x00013a99;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00013aa1;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x00013a22;
                }
                iVar3 = iVar3 + 0x28;
                uVar8 = uVar8 + 1;
                bVar12 = uVar8 < uStack_132;
            }
        }
    }
    else {
        iVar3 = 0x28;
        uVar9 = uStack_118;
        uVar8 = uVar6;
        uVar11 = uVar6;
        if (uStack_134 != 0) {
            do {
                iStackX_8 = 0x28;
                iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar3,&iStackX_8,auStack_168);
                if (iVar4 < 0) goto code_r0x00013a99;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00013aa1;
                if (((uVar9 < uStack_15c) || (iStack_160 + uStack_15c <= uVar9)) ||
                   (uVar11 = ((uStack_154 - uVar7) - uStack_15c) + uVar9, uStack_134 - 1 <= uVar8)) {
                    uVar5 = uVar8 + 1;
                    if (uVar5 == uStack_134) {
                        *(arg1 + 8) = uStack_15c + (iStack_160 - uVar7);
                    }
                    iVar3 = iVar3 + 0x28;
                }
                else {
                    uVar5 = uStack_134 - 1;
                    iVar3 = iVar3 + (uVar5 - uVar8) * 0x28;
                }
                uVar8 = uVar5;
            } while (uVar5 < uStack_134);
            if ((uVar11 != 0) && (uStack_114 != 0)) {
                do {
                    iStackX_8 = 0x1c;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + uVar11,&iStackX_8,auStack_188);
                    if (iVar4 < 0) goto code_r0x00013a90;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x00013aa1;
                    if (iStack_17c == 2) {
                        *(arg1 + 0x40) = uStack_118 + uVar6;
                        return 0;
                    }
                    uVar6 = uVar6 + 0x1c;
                } while (uVar6 < uStack_114);
            }
        }
    }
    return 0;
code_r0x00013a99:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x00013aa1;
code_r0x00013a22:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x00013a90;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x00013aa1;
    if (iStack_17c == 2) {
        *(arg1 + 0x40) = uVar2 + uVar6;
        if (iStack_174 != 0) {
            return 0;
        }
        if (iStack_170 == 0) {
            return 0;
        }
        *(arg1 + 8) = *(arg1 + 8) + uStack_178;
        return 0;
    }
    uVar6 = uVar6 + 0x1c;
    if (puVar10[1] <= uVar6) {
        return 0;
    }
    goto code_r0x00013a22;
code_r0x00013a90:
    bVar12 = iStackX_8 == 0x1c;
code_r0x00013aa1:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.00013ebc @ 0x13ebc */

//WARNING: Variable defined which should be unmapped: var_3h

int64_t fcn.00013ebc(uint32_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint in_register_0000000c;
    int64_t *piVar6;
    int16_t *piVar7;
    uint32_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint16_t *puVar15;
    bool bVar16;
    uint64_t uStackX_10;
    int64_t iStackX_18;
    uint64_t uStackX_20;
    int32_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    uint32_t var_7fh;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    uint32_t var_79h;
    int64_t var_71h;
    int16_t iStack_5e;
    char cStack_5c;
    uint32_t var_3h;
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar10 = 0;
    *(piVar6 + 0xd) = 0;
    if (&iStack_d8 != piVar6) {
        fcn.000104e0(&iStack_d8,arg1,0x90);
    }
    iVar2 = fcn.000138b0(&iStack_d8);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (piVar6[1] < uStack_d0) {
        *(piVar6 + 0xd) = 6;
        return -0x7ffffffffffffffb;
    }
    if (*piVar6 == 0) {
code_r0x00013f32:
        *(piVar6 + 0xd) = 5;
        return -0x7ffffffffffffffe;
    }
    if (cStack_5c != '\0') {
        if (iStack_5e == 0xc) {
            *(piVar6 + 0xd) = 4;
            return -0x7fffffffffffffff;
        }
        if (iStack_d8 != *piVar6) goto code_r0x00013f32;
    }
    if (*(piVar6 + 0x7d) == '\0') {
        iStackX_18 = (*piVar6[4])();
        iVar9 = *(piVar6 + 0x3c) + *piVar6;
        uStackX_20 = *(iVar9 + 6);
        iVar2 = *piVar6 + 0x18 + *(iVar9 + 0x14) + *(piVar6 + 0x3c);
        uVar14 = uVar10;
    }
    else {
        iStackX_18 = (*piVar6[4])(piVar6[5],0,piVar6 + 0xb);
        iVar9 = *piVar6;
        iVar2 = iVar9 + 0x28;
        uStackX_20 = *(iVar9 + 4);
        uVar14 = *(iVar9 + 6) - 0x28;
    }
    if (iStackX_18 < 0) {
        *(piVar6 + 0xd) = 1;
        return -0x7fffffffffffffff;
    }
    uVar13 = uVar10;
    if (uStackX_20 != 0) {
        do {
            uStackX_10 = *(iVar2 + 8);
            if ((uStackX_10 == 0) || (*(iVar2 + 0x10) < uStackX_10)) {
                uStackX_10 = *(iVar2 + 0x10);
            }
            if (*(iVar2 + 0xc) < piVar6[1] + uVar14) {
                uVar4 = (*(iVar2 + 0xc) - uVar14) + *piVar6;
            }
            else {
                *(piVar6 + 0xd) = 5;
                uVar4 = uVar10;
            }
            uVar11 = *(iVar2 + 0xc) + -1 + *(iVar2 + 8);
            if (uVar11 < piVar6[1] + uVar14) {
                uVar11 = (uVar11 - uVar14) + *piVar6;
            }
            else {
                *(piVar6 + 0xd) = 5;
                uVar11 = uVar10;
            }
            if ((uStackX_10 != 0) && ((uVar4 == 0 || (uVar11 == 0)))) {
                *(piVar6 + 0xd) = 8;
                return -0x7fffffffffffffff;
            }
            if ((*(iVar2 + 0x10) != 0) &&
               (iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar2 + 0x14) - uVar14,&uStackX_10,uVar4), iStackX_18 < 0))
            goto code_r0x00014236;
            if ((uStackX_10 < *(iVar2 + 8)) && (iVar3 = *(iVar2 + 8) - uStackX_10, iVar3 != 0)) {
                fcn.000104c0(uVar4 + uStackX_10,iVar3);
            }
            iVar2 = iVar2 + 0x28;
            uVar13 = uVar13 + 1;
        } while (uVar13 < uStackX_20);
    }
    uVar13 = piVar6[1];
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x28) < uVar13) {
            uVar4 = *piVar6 + *(iVar9 + 0x28);
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar4 = uVar10;
        }
        piVar6[3] = uVar4;
    }
    else {
        if (*(iVar9 + 8) < uVar13 + uVar14) {
            uVar4 = (*(iVar9 + 8) - uVar14) + *piVar6;
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar4 = uVar10;
        }
        piVar6[3] = uVar4;
    }
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x18) == 0x10b) {
            uVar12 = *(iVar9 + 0x74);
            iVar3 = 0xa4;
        }
        else {
            uVar12 = *(iVar9 + 0x84);
            iVar3 = 0xb4;
        }
        if (5 < uVar12) {
            uVar12 = *(iVar3 + iVar9);
            goto code_r0x00014166;
        }
        piVar6[0xe] = 0;
    }
    else {
        uVar12 = *(iVar9 + 0x1c);
code_r0x00014166:
        piVar6[0xe] = (uVar12 >> 1) << 3;
    }
    piVar6[6] = 0;
    if (piVar6[8] != 0) {
        if (uVar13 + uVar14 <= *(piVar6 + 8)) {
            *(piVar6 + 0xd) = 5;
            goto code_r0x000141a2;
        }
        iVar3 = (*piVar6 - uVar14) + *(piVar6 + 8);
        if (iVar3 == 0) goto code_r0x000141a2;
        uVar12 = *(iVar3 + 0x14);
        if (uVar12 == 0) {
            if (*(iVar3 + 0x18) != 0) {
                if (*(iVar2 + -0x18) < *(iVar2 + -0x20)) {
                    uVar12 = *(iVar2 + -0x1c) + *(iVar2 + -0x20);
                }
                else {
                    uVar12 = *(iVar2 + -0x1c) + *(iVar2 + -0x18);
                }
            }
            if (uVar12 == 0) goto code_r0x000142a7;
        }
        if (uVar12 < uVar13 + uVar14) {
            uVar13 = (*piVar6 - uVar14) + uVar12;
        }
        else {
            *(piVar6 + 0xd) = 5;
            uVar13 = uVar10;
        }
        piVar6[9] = uVar13;
        if (uVar13 == 0) {
code_r0x000141a2:
            *(piVar6 + 0xd) = 9;
            return -0x7fffffffffffffff;
        }
        if (*(iVar3 + 0x14) == 0) {
            uStackX_10 = *(iVar3 + 0x10);
            iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar3 + 0x18) - uVar14,&uStackX_10);
            if (iStackX_18 < 0) {
                iStackX_18 = -0x7fffffffffffffff;
code_r0x00014236:
                *(piVar6 + 0xd) = 1;
                return iStackX_18;
            }
            *(iVar3 + 0x14) = uVar12;
        }
        piVar5 = piVar6[9];
        if (*piVar5 == 0x3031424e) {
            if (*(iVar3 + 0x10) < 0x10) goto code_r0x00014283;
            piVar5 = piVar5 + 4;
        }
        else if (*piVar5 == 0x434f544d) {
            if (*(iVar3 + 0x10) < 0x14) goto code_r0x00014283;
            piVar5 = piVar5 + 5;
        }
        else {
            if (*piVar5 != 0x53445352) goto code_r0x000142a7;
            if (*(iVar3 + 0x10) < 0x18) goto code_r0x00014283;
            piVar5 = piVar5 + 6;
        }
        piVar6[10] = piVar5;
    }
code_r0x000142a7:
    piVar6[0x10] = 0;
    if (*(piVar6 + 0x7d) == '\0') {
        if (*(iVar9 + 0x18) == 0x10b) {
            uVar12 = *(iVar9 + 0x74);
            iVar2 = 0x88;
        }
        else {
            uVar12 = *(iVar9 + 0x84);
            iVar2 = 0x98;
        }
        if ((2 < uVar12) && (uVar12 = *(iVar2 + 4 + iVar9), uVar12 != 0)) {
            if (*(iVar2 + iVar9) < piVar6[1]) {
                iVar2 = *(iVar2 + iVar9) + *piVar6;
                if (iVar2 != 0) {
                    puVar15 = iVar2 + 0xc;
                    if (uVar12 < (*(iVar2 + 0xe) + *puVar15) * 8 + 0x10) {
code_r0x00014283:
                        *(piVar6 + 0xd) = 0xb;
                        return -0x7ffffffffffffffd;
                    }
                    puVar8 = iVar2 + 0x10;
                    bVar16 = *puVar15 != 0;
                    uVar14 = uVar10;
                    while (bVar16) {
                        uVar1 = *puVar8;
                        if (0x7fffffff < uVar1) {
                            if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00014283;
                            piVar7 = (uVar1 & 0x7fffffff) + iVar2;
                            if ((((*piVar7 == 3) && (piVar7[1] == 0x48)) && (piVar7[2] == 0x49)) && (piVar7[3] == 0x49))
                            {
                                uVar1 = puVar8[1];
                                if (0x7fffffff < uVar1) {
                                    if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00014283;
                                    uVar13 = uVar1 & 0x7fffffff;
                                    puVar15 = iVar2 + 0xc + uVar13;
                                    if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + 2 + *(uVar13 + 0xe + iVar2)) * 8)
                                    goto code_r0x00014283;
                                    puVar8 = iVar2 + 0x10 + uVar13;
                                    uVar1 = puVar8[1];
                                    if (0x7fffffff < uVar1) {
                                        if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00014283;
                                        uVar13 = uVar1 & 0x7fffffff;
                                        puVar15 = uVar13 + 0xc + iVar2;
                                        if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + *(uVar13 + 0xe + iVar2) + 2) * 8
                                           ) goto code_r0x00014283;
                                        puVar8 = uVar13 + 0x10 + iVar2;
                                    }
                                }
                                if (puVar8[1] < 0x80000000) {
                                    if (puVar8[1] < uVar12) {
                                        uVar14 = *(puVar8[1] + iVar2);
                                        if (uVar14 < piVar6[1]) {
                                            uVar10 = uVar14 + *piVar6;
                                        }
                                        else {
                                            *(piVar6 + 0xd) = 5;
                                        }
                                        piVar6[0x10] = uVar10;
                                        return iStackX_18;
                                    }
                                    goto code_r0x00014283;
                                }
                            }
                        }
                        puVar8 = puVar8 + 2;
                        uVar14 = uVar14 + 1;
                        bVar16 = uVar14 < *puVar15;
                    }
                }
            }
            else {
                *(piVar6 + 0xd) = 5;
            }
        }
    }
    return iStackX_18;
}


/* fcn.00013c04 @ 0x13c04 */

ulong fcn.00013c04(uint32_t arg1)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t *piVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t *puVar12;
    int64_t *piVar13;
    int *piVar14;
    int64_t iVar15;
    uint32_t *puVar16;
    uint32_t *puVar17;
    uint32_t *puVar18;
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar11 = NULL;
    *(piVar5 + 0xd) = 0;
    if (*(piVar5 + 0x7c) == '\0') {
        iVar6 = piVar5[2];
        if (iVar6 == 0) {
            iVar6 = *piVar5;
        }
        if (*(piVar5 + 0x7d) == '\0') {
            iVar3 = *(piVar5 + 0x3c) + *piVar5;
            if (*(iVar3 + 0x18) == 0x10b) {
                iVar15 = iVar6 - *(iVar3 + 0x34);
                if (iVar15 != 0) {
                    *(iVar3 + 0x34) = iVar6;
                }
                uVar10 = *(iVar3 + 0x74);
                iVar6 = 0xa0;
            }
            else {
                iVar15 = iVar6 - *(iVar3 + 0x30);
                if (iVar15 != 0) {
                    *(iVar3 + 0x30) = iVar6;
                }
                uVar10 = *(iVar3 + 0x84);
                iVar6 = 0xb0;
            }
            puVar9 = puVar11;
            puVar18 = puVar11;
            if (4 < uVar10) {
                puVar9 = iVar6 + iVar3;
            }
        }
        else {
            iVar3 = *piVar5;
            puVar18 = *(iVar3 + 6) - 0x28;
            iVar15 = (iVar6 - *(iVar3 + 0x10)) - puVar18;
            if (iVar15 != 0) {
                *(iVar3 + 0x10) = iVar6 - puVar18;
            }
            puVar9 = iVar3 + 0x18;
        }
        puVar16 = puVar11;
        if ((puVar9 != NULL) && (puVar9[1] != 0)) {
            if (*puVar9 < piVar5[1] + puVar18) {
                puVar11 = (*piVar5 - puVar18) + *puVar9;
            }
            else {
                *(piVar5 + 0xd) = 5;
            }
            uVar7 = puVar9[1] + (*puVar9 - 1);
            if (uVar7 < piVar5[1] + puVar18) {
                puVar16 = (*piVar5 - puVar18) + uVar7;
            }
            else {
                *(piVar5 + 0xd) = 5;
            }
            if ((puVar11 == NULL) || (puVar16 == NULL)) {
code_r0x00013d1a:
                *(piVar5 + 0xd) = 9;
                return 0x8000000000000001;
            }
            if (puVar16 < puVar11) goto code_r0x00013d1a;
        }
        if (iVar15 != 0) {
            piVar13 = piVar5[6];
            puVar12 = puVar11;
            while (puVar12 < puVar16) {
                puVar17 = puVar12 + 2;
                if (((puVar12[1] == 0) || (~puVar12[1] < puVar12)) ||
                   (puVar1 = puVar12[1] + puVar12, puVar9[1] + puVar11 < puVar1)) goto code_r0x00013d1a;
                if (piVar5[1] + puVar18 <= *puVar12) {
                    *(piVar5 + 0xd) = 5;
                    goto code_r0x00013d1a;
                }
                if ((*piVar5 - puVar18) + *puVar12 == 0) goto code_r0x00013d1a;
                for (; puVar17 < puVar1; puVar17 = puVar17 + 2) {
                    uVar7 = (*puVar17 & 0xfff) + *puVar12;
                    if (puVar18 + piVar5[1] <= uVar7) {
                        *(piVar5 + 0xd) = 5;
code_r0x00013e70:
                        uVar4 = 0x8000000000000001;
code_r0x00013e7a:
                        *(piVar5 + 0xd) = 9;
                        return uVar4;
                    }
                    piVar8 = (*piVar5 - puVar18) + uVar7;
                    if (piVar8 == NULL) goto code_r0x00013e70;
                    uVar2 = *puVar17 >> 0xc;
                    if (uVar2 != 0) {
                        if (uVar2 == 1) {
                            *piVar8 = *piVar8 + (iVar15 >> 0x10);
                        }
                        else {
                            if (uVar2 != 2) {
                                if (uVar2 == 3) {
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar14 = piVar13 + (-piVar13 & 3);
                                        *piVar14 = *piVar8;
                                        piVar13 = piVar14 + 1;
                                    }
                                }
                                else {
                                    if (uVar2 != 10) {
                                        uVar4 = 0x8000000000000003;
                                        goto code_r0x00013e7a;
                                    }
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar13 = piVar13 + (-piVar13 & 7);
                                        *piVar13 = *piVar8;
                                        piVar13 = piVar13 + 1;
                                    }
                                }
                                goto code_r0x00013e45;
                            }
                            *piVar8 = *piVar8 + iVar15;
                        }
                        if (piVar13 != NULL) {
                            *piVar13 = *piVar8;
                            piVar13 = piVar13 + 2;
                        }
                    }
code_r0x00013e45:
                }
                puVar12 = puVar1;
            }
            if (piVar5[2] != 0) {
                piVar5[3] = piVar5[3] + (piVar5[2] - *piVar5);
            }
        }
    }
    return 0;
}


/* fcn.000103b0 @ 0x103b0 */

uint64_t fcn.000103b0(int64_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010400 @ 0x10400 */

void fcn.00010400(void)

{
    return;
}


/* fcn.000103e0 @ 0x103e0 */

void fcn.000103e0(void)

{
    return;
}


/* fcn.000104c0 @ 0x104c0 */

int64_t fcn.000104c0(int64_t arg1,int64_t arg2)

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


/* fcn.000103f0 @ 0x103f0 */

void fcn.000103f0(void)

{
    return;
}


/* fcn.00011464 @ 0x11464 */

void fcn.00011464(int64_t arg1)

{
    int64_t iVar1;
    uint64_t *puVar2;
    uint64_t uVar3;
    uint64_t arg1_00;
    
    arg1_00 = *0x178f0 * 0x1000 + *0x18790;
    fcn.000104c0(arg1_00,0x1000);
    uVar3 = *0x178e0;
    puVar2 = *(*0x178f0 * 8 + 0x18740);
    if ((puVar2 != NULL) && ((~*0x178e0 & *puVar2 & *0x18780) == arg1_00)) {
        *puVar2 = 0;
    }
    *arg1 = uVar3 | arg1_00 | 3;
    iVar1 = *0x178f0 * 8;
    *0x178f0 = *0x178f0 + 1U & 7;
    *(iVar1 + 0x18740) = arg1;
    return;
}


/* fcn.000117d4 @ 0x117d4 */

void fcn.000117d4(int64_t arg1)

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
            fcn.000104a0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00011868 @ 0x11868 */

int64_t fcn.00011868(void)

{
    int64_t iVar1;
    
    if (*0x17930 == 0) {
        iVar1 = (**(*0x17900 + 0x140))(0x16bf0,0,0x17930);
        if (iVar1 < 0) {
            *0x17930 = 0;
        }
    }
    return *0x17930;
}


/* fcn.000118b8 @ 0x118b8 */

uint64_t fcn.000118b8(void)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t aiStackX_8 [4];
    
    uVar4 = 0;
    if (*0x17928 == 0) {
        iVar1 = fcn.0001169c(0x16bd0,aiStackX_8);
        *0x17928 = uVar4;
        if (-1 < iVar1) {
            uVar3 = 0;
            piVar2 = aiStackX_8[0] + 0x10;
            if (*(aiStackX_8[0] + 4) != 0) {
                do {
                    uVar3 = uVar4;
                    if ((*piVar2 == 7) && (0x4f < *(piVar2 + 6) << 0xc)) break;
                    uVar3 = uVar3 + 1;
                    uVar4 = uVar3;
                    piVar2 = piVar2 + *(aiStackX_8[0] + 8);
                } while (uVar3 < *(aiStackX_8[0] + 4));
            }
            if (uVar3 < *(aiStackX_8[0] + 4)) {
                *0x17928 = *(piVar2 + 2);
            }
        }
    }
    return *0x17928;
}


/* fcn.000104e0 @ 0x104e0 */

int64_t fcn.000104e0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
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


/* fcn.00011bbc @ 0x11bbc */

int64_t fcn.00011bbc(void)

{
    int64_t iVar1;
    ushort uStackX_8;
    uchar uStackX_a;
    
    iVar1 = **0x18720;
    if (iVar1 == 0) {
        iVar1 = 0;
    }
    else {
        uStackX_a = 3;
        uStackX_8 = 0xff;
        if (*(*0x18720 + 1) + iVar1 != &uStackX_8) {
            fcn.000104e0(*(*0x18720 + 1) + iVar1,&uStackX_8,3);
        }
        *(**0x18720 + 5) = (*0x18720)[1] + 3;
    }
    return iVar1;
}


/* fcn.00011c24 @ 0x11c24 */

void fcn.00011c24(void)

{
    uint16_t *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    uchar auStackX_18 [16];
    
    iVar2 = (**(*0x17900 + 0x140))(0x16c10,0,auStackX_18);
    if ((-1 < iVar2) && (*(*0x18720 + 0x14) == '\0')) {
        fcn.00011bbc();
        piVar3 = *0x18720;
        puVar1 = *0x18720 + 0xc;
        *(*0x18720 + 0x14) = 1;
        iVar2 = *piVar3;
        fcn.00011934(0x16d40,iVar2,*puVar1 << 0xc);
        fcn.00011a28(0x16d40,iVar2);
        piVar3 = *0x18720;
        fcn.00011934(0x16d30,*0x18720,8);
        fcn.00011a28(0x16d30,piVar3);
    }
    return;
}


/* fcn.00011afc @ 0x11afc */

ulong fcn.00011afc(ulong noname_0,ulong noname_1,int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    uchar *puVar3;
    uchar *arg1_00;
    int64_t aiStackX_18 [2];
    uchar auStack_58 [80];
    
    aiStackX_18[0] = arg1;
    puVar1 = fcn.00011868();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000000000013;
    }
    else {
        puVar3 = fcn.000118b8();
        arg1_00 = auStack_58;
        if (puVar3 != NULL) {
            arg1_00 = puVar3;
        }
        if (arg1_00 != 0x16c60) {
            fcn.000104e0(arg1_00,0x16c60,0x10);
        }
        *(arg1_00 + 0x10) = 0x30;
        *(arg1_00 + 0x20) = 0xffffffffffffffff;
        *(arg1_00 + 0x18) = 3;
        *(arg1_00 + 0x1c) = 0x30;
        if (arg1_00 + 0x28 != 0x16d40) {
            fcn.000104e0(arg1_00 + 0x28,0x16d40,0x10);
        }
        *(arg1_00 + 0x38) = 0;
        *(arg1_00 + 0x40) = 0;
        aiStackX_18[0] = 0x48;
        (**puVar1)(puVar1,arg1_00,aiStackX_18);
        uVar2 = *(arg1_00 + 0x20);
    }
    return uVar2;
}


/* fcn.00015f1c @ 0x15f1c */

uint64_t fcn.00015f1c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint16_t uVar7;
    uint64_t *in_stack_00000028;
    
    uVar6 = 0;
    if (*0xc00fc020 - 1 < 0xfffe) {
        uVar7 = *0xc00fc020 & 0xffe0;
    }
    else {
        uVar7 = 0;
    }
    uVar4 = arg2 >> 0x10 & 0x3f;
    uVar5 = uVar4;
    uVar1 = in(uVar7);
    if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 1) == 0) {
            out(uVar7,uVar1);
            out(uVar7 + 3,arg2 >> 8);
            out(uVar7 + 0xd,arg2 >> 0x16 & 1 | 2);
            in(uVar7 + 2);
            if ((arg3 != 0) && (out(uVar7 + 5,uVar4), uVar5 != 0)) {
                uVar3 = uVar6;
                do {
                    out(uVar7 + 7,*(uVar3 + arg3));
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar5);
            }
            out(uVar7 + 4,arg2);
            out(uVar7 + 2,arg1 + '@');
            do {
                uVar1 = in(uVar7);
            } while ((uVar1 & 0x9e) == 0);
            if ((uVar1 & 0x1c) == 0) {
                uVar3 = uVar6;
                if (arg4 != 0) {
                    uVar1 = in(uVar7 + 5);
                    uVar5 = uVar1;
                    if (uVar1 != 0) {
                        do {
                            uVar2 = in(uVar7 + 7);
                            *(uVar6 + arg4) = uVar2;
                            uVar6 = uVar6 + 1;
                            uVar3 = 0;
                        } while (uVar6 < uVar5);
                    }
                }
            }
            else {
                out(uVar7,0x1c);
                uVar1 = in(uVar7 + 0xc);
                uVar3 = (-((uVar1 & 1) != 0) & 0x14) + 0x8000000000000007;
            }
            goto code_r0x00016053;
        }
        out(uVar7,0xff);
    }
    uVar3 = 0x8000000000000012;
code_r0x00016053:
    out(uVar7,0xff);
    out(uVar7 + 0xc,1);
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar3;
    }
    return uVar5;
}


/* fcn.00015df8 @ 0x15df8 */

ushort fcn.00015df8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uchar uVar2;
    uchar uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    ushort uVar6;
    
    iVar4 = 0;
    uVar6 = arg3;
    if (*0xc00fc020 - 1 < 0xfffe) {
        uVar5 = *0xc00fc020 & 0xffe0;
    }
    else {
        uVar5 = 0;
    }
    uVar1 = in(uVar5);
    if ((uVar1 & 0x40) == 0) {
        if ((uVar1 & 1) == 0) {
            out(uVar5,uVar1);
            if ((arg1 == '\x04') && ((arg2 & 1U) == 0)) {
                out(uVar5 + 3,arg3);
            }
            else {
                out(uVar5 + 3,arg2 >> 8);
                out(uVar5 + 5,arg3);
                out(uVar5 + 6,arg3 >> 8);
            }
            out(uVar5 + 0xd,arg2 >> 0x16 & 1);
            out(uVar5 + 4,arg2);
            out(uVar5 + 2,arg1 + '@');
            do {
                uVar1 = in(uVar5);
            } while ((uVar1 & 0x9e) == 0);
            if ((uVar1 & 0x1c) != 0) {
                out(uVar5,0x1c);
                uVar1 = in(uVar5 + 0xc);
                iVar4 = (-((uVar1 & 1) != 0) & 0x14) + 0x8000000000000007;
            }
            uVar2 = in(uVar5 + 6);
            uVar3 = in(uVar5 + 5);
            uVar6 = CONCAT11(uVar2,uVar3);
            out(uVar5,0xff);
            out(uVar5 + 0xc,1);
            goto code_r0x00015f03;
        }
        out(uVar5,0xff);
    }
    iVar4 = -0x7fffffffffffffee;
code_r0x00015f03:
    if (arg4 != 0) {
        *arg4 = iVar4;
    }
    return uVar6;
}


/* fcn.00012264 @ 0x12264 */

ulong fcn.00012264(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    
    uVar1 = 1 << (arg1 & 3);
    *arg3 = uVar1;
    *arg4 = uVar1;
    if ((arg2 & uVar1 - 1) != 0) {
        return 0x8000000000000002;
    }
    uVar2 = *arg3;
    if (arg1 - 4U < 4) {
        uVar2 = 0;
    }
    *arg3 = uVar2;
    uVar2 = *arg4;
    if (arg1 - 8U < 4) {
        uVar2 = 0;
    }
    *arg4 = uVar2;
    return 0;
}


/* fcn.000124a4 @ 0x124a4 */

int64_t fcn.000124a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iVar2 = arg1;
    iVar3 = 1;
    if (iVar2 < 0xc) {
        iStackX_18 = arg3;
        iVar1 = fcn.00012264(arg1,arg2,&iStackX_18,&iStackX_20);
        if (-1 < iVar1) {
            do {
                if (iVar2 < 7) {
                    if (iVar2 == 6) {
code_r0x0001251c:
                        *arg4 = *arg2;
                    }
                    else if (iVar2 == 0) {
code_r0x00012523:
                        *arg4 = *arg2;
                    }
                    else {
                        if (iVar2 != 1) {
                            if (iVar2 == 2) goto code_r0x0001251c;
                            if (iVar2 == 3) goto code_r0x00012545;
                            if (iVar2 == 4) goto code_r0x00012523;
                            if (iVar2 != 5) {
                                return -0x7ffffffffffffffd;
                            }
                        }
code_r0x00012513:
                        *arg4 = *arg2;
                    }
                }
                else {
                    if (iVar2 != 7) {
                        if (iVar2 == 8) goto code_r0x00012523;
                        if (iVar2 == 9) goto code_r0x00012513;
                        if (iVar2 == 10) goto code_r0x0001251c;
                        if (iVar2 != 0xb) {
                            return -0x7ffffffffffffffd;
                        }
                    }
code_r0x00012545:
                    *arg4 = *arg2;
                }
                arg2 = arg2 + iStackX_18;
                arg4 = arg4 + iStackX_20;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            iVar1 = 0;
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffe;
    }
    return iVar1;
}


/* fcn.00011834 @ 0x11834 */

int64_t fcn.00011834(int64_t arg1,int64_t arg2)

{
    fcn.000117d4((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.000122b4 @ 0x122b4 */

int64_t fcn.000122b4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uchar uVar1;
    ushort uVar2;
    uint uVar3;
    int64_t iVar4;
    int iVar5;
    uint in_register_00000014;
    int64_t arg2_00;
    int64_t iVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    iVar5 = arg1;
    iVar6 = 1;
    if (iVar5 < 0xc) {
        iVar4 = fcn.00012264(arg1,arg2_00,&iStackX_20,&iStackX_18);
        if (-1 < iVar4) {
            do {
                uVar2 = arg2_00;
                if (iVar5 < 7) {
                    if (iVar5 == 6) {
code_r0x00012330:
                        uVar3 = in(uVar2);
                        *arg3 = uVar3;
                    }
                    else if (iVar5 == 0) {
code_r0x00012339:
                        uVar1 = in(uVar2);
code_r0x0001233d:
                        *arg3 = uVar1;
                    }
                    else {
                        if (iVar5 != 1) {
                            if (iVar5 == 2) goto code_r0x00012330;
                            if (iVar5 == 3) goto code_r0x0001235d;
                            if (iVar5 == 4) {
                                uVar1 = in(uVar2);
                                goto code_r0x0001233d;
                            }
                            if (iVar5 != 5) goto code_r0x0001237e;
                        }
code_r0x0001231f:
                        uVar2 = in(uVar2);
                        *arg3 = uVar2;
                    }
                }
                else {
                    if (iVar5 != 7) {
                        if (iVar5 == 8) goto code_r0x00012339;
                        if (iVar5 == 9) goto code_r0x0001231f;
                        if (iVar5 == 10) goto code_r0x00012330;
                        if (iVar5 != 0xb) goto code_r0x0001237e;
                    }
code_r0x0001235d:
                    *arg3 = 0;
                }
                arg2_00 = arg2_00 + iStackX_20;
                arg3 = arg3 + iStackX_18;
                iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
            iVar4 = 0;
        }
    }
    else {
code_r0x0001237e:
        iVar4 = -0x7ffffffffffffffe;
    }
    return iVar4;
}


/* fcn.0001269c @ 0x1269c */

int64_t fcn.0001269c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    int64_t iVar5;
    int iVar6;
    uint *puVar7;
    int64_t iStackX_20;
    uint *in_stack_00000028;
    
    uVar3 = arg3;
    iVar5 = 1;
    uVar2 = (arg3 >> 3 & 0x1fe00000 | uVar3 & 0x1f0000) >> 1;
    uVar1 = arg3 >> 0x20;
    if (arg2 == 0) {
        arg2_00 = uVar2 | uVar3 & 0xff | uVar1 & 0xfff | (uVar3 & 0x700) << 4;
    }
    else {
        arg2_00 = uVar2 | ((arg2 & 0xffffU) << 0x1c | uVar3 & 0x700) << 4 | uVar3 & 0xff | uVar1 & 0xfff;
    }
    iVar6 = arg1;
    if (iVar6 < 0xc) {
        puVar7 = in_stack_00000028;
        iStackX_20 = arg4;
        iVar4 = fcn.00012264(arg1 & 0xffffffff,arg2_00,&iStackX_20,&stack0x00000028);
        if (-1 < iVar4) {
            do {
                if (iVar6 == 0) {
code_r0x000127c3:
                    *puVar7 = *((arg2_00 >> 4 & 0x10000000 | arg2_00 & 0xffffffff) + 0xc0000000);
                }
                else if (iVar6 == 1) {
code_r0x000127a9:
                    *puVar7 = *((arg2_00 >> 4 & 0x10000000 | arg2_00 & 0xffffffff) + 0xc0000000);
                }
                else {
                    if (iVar6 != 2) {
                        if (iVar6 == 4) goto code_r0x000127c3;
                        if (iVar6 == 5) goto code_r0x000127a9;
                        if (iVar6 != 6) {
                            if (iVar6 == 8) goto code_r0x000127c3;
                            if (iVar6 == 9) goto code_r0x000127a9;
                            if (iVar6 != 10) goto code_r0x00012804;
                        }
                    }
                    *puVar7 = *((arg2_00 >> 4 & 0x10000000 | arg2_00 & 0xffffffff) + 0xc0000000);
                }
                arg2_00 = arg2_00 + iStackX_20;
                puVar7 = puVar7 + in_stack_00000028;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar4 = 0;
        }
    }
    else {
code_r0x00012804:
        iVar4 = -0x7ffffffffffffffe;
    }
    return iVar4;
}


/* fcn.00011f8c @ 0x11f8c */

int64_t fcn.00011f8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    unkbyte7 Var2;
    int iVar3;
    uint64_t uVar4;
    int64_t *arg4_00;
    int64_t var_30h;
    int64_t var_28h;
    
    iVar3 = arg2;
    if (iVar3 < 7) {
        if (iVar3 != 6) {
            if (iVar3 == 0) {
                if ((arg1 >> 0x16 & 1) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0xff00U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0x3f0000U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0xffffffffff800001U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                arg1 = arg1 | 1;
            }
            else {
                if (iVar3 != 1) {
                    if (iVar3 == 2) {
                        if ((arg1 & 0xff00U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((arg1 & 0x3f0000U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((arg1 & 0xffffffffff800001U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        uVar4 = 0;
                        arg1 = arg1 | 1;
                    }
                    else {
                        if (iVar3 != 3) {
                            if (iVar3 == 4) {
                                if ((arg1 & 0x3f0000U) != 0) {
                                    return -0x7ffffffffffffffe;
                                }
                                if ((arg1 & 0xffffffffff800001U) != 0) {
                                    return -0x7ffffffffffffffe;
                                }
                                uVar4 = 0;
                                arg1 = arg1 | 1;
                            }
                            else {
                                if (iVar3 != 5) {
                                    return -0x7ffffffffffffffe;
                                }
                                if ((arg1 & 0x3f0000U) != 0) {
                                    return -0x7ffffffffffffffe;
                                }
                                if ((arg1 & 0xffffffffff800001U) != 0) {
                                    return -0x7ffffffffffffffe;
                                }
                                uVar4 = *arg4;
                            }
                            iVar1 = CONCAT71(arg1 >> 8,8);
                            goto code_r0x00012245;
                        }
                        if ((arg1 & 0xff00U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((arg1 & 0x3f0000U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((arg1 & 0xffffffffff800001U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        uVar4 = *arg4;
                    }
                    iVar1 = CONCAT71(arg1 >> 8,4);
                    goto code_r0x00012245;
                }
                if ((arg1 >> 0x16 & 1) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0xff00U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0x3f0000U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0xffffffffff800001U) != 0) {
                    return -0x7ffffffffffffffe;
                }
            }
            uVar4 = 0;
            iVar1 = 0;
            goto code_r0x00012245;
        }
        if ((arg1 & 0x3f0000U) != 0) {
            return -0x7ffffffffffffffe;
        }
        if ((arg1 & 0xffffffffff800001U) != 0) {
            return -0x7ffffffffffffffe;
        }
        uVar4 = 0;
        arg1 = arg1 | 1;
    }
    else {
        if (iVar3 != 7) {
            if (iVar3 == 8) {
                if ((arg1 & 0x3f0000U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                if ((arg1 & 0xffffffffff800001U) != 0) {
                    return -0x7ffffffffffffffe;
                }
                arg1 = arg1 | 1;
                arg4_00 = &var_28h;
                arg4 = 0;
                uVar4 = arg1;
            }
            else {
                if (iVar3 != 9) {
                    Var2 = arg1 >> 8;
                    if (iVar3 == 10) {
                        if ((arg1 & 0x3f0000U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        if ((arg1 & 0xffffffffff800001U) != 0) {
                            return -0x7ffffffffffffffe;
                        }
                        uVar4 = *arg4;
                        iVar1 = CONCAT71(Var2,0x10);
                        goto code_r0x00012245;
                    }
                    if ((((iVar3 != 0xb) || (uVar4 = (*arg3 & 0x3f) * 0x10000 + arg1, arg4 == 0)) ||
                        (0x1f < (uVar4 >> 0x10 & 0x3f) - 1)) || ((uVar4 & 0xffffffffff800001) != 0)) {
                        return -0x7ffffffffffffffe;
                    }
                    arg4_00 = &var_28h;
                    iVar1 = CONCAT71(Var2,0x1c);
                    goto code_r0x00012198;
                }
                uVar4 = (*arg3 & 0x3f) * 0x10000 + arg1;
                if (arg4 == 0) {
                    return -0x7ffffffffffffffe;
                }
                if (0x1f < (uVar4 >> 0x10 & 0x3f) - 1) {
                    return -0x7ffffffffffffffe;
                }
                if ((uVar4 & 0xffffffffff800001) != 0) {
                    return -0x7ffffffffffffffe;
                }
                arg4_00 = NULL;
            }
            iVar1 = CONCAT71(arg1 >> 8,0x14);
code_r0x00012198:
            fcn.00015f1c(iVar1,uVar4,arg4,arg4_00);
            return var_30h;
        }
        if ((arg1 & 0x3f0000U) != 0) {
            return -0x7ffffffffffffffe;
        }
        if ((arg1 & 0xffffffffff800001U) != 0) {
            return -0x7ffffffffffffffe;
        }
        uVar4 = *arg4;
    }
    iVar1 = CONCAT71(arg1 >> 8,0xc);
code_r0x00012245:
    fcn.00015df8(iVar1,arg1,uVar4,&var_30h);
    return var_30h;
}


/* fcn.00012a98 @ 0x12a98 */

void fcn.00012a98(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t in_R9;
    
    iVar1 = *arg1;
    if (((iVar1 == 1) || (iVar1 == 3)) || (iVar1 == 5)) {
        iVar4 = 0xf;
    }
    else if (iVar1 == 0xc) {
        iVar4 = 0x11;
    }
    else {
        if (iVar1 != 0xd) {
            if (iVar1 == 0xe) {
                iVar4 = 0x1f;
                goto code_r0x00012af2;
            }
            if (iVar1 != 0xf) {
                if (iVar1 != 0x10) {
                    return;
                }
                iVar4 = 0x19;
                goto code_r0x00012af2;
            }
        }
        iVar4 = 0x17;
    }
code_r0x00012af2:
    iVar2 = *(arg1 + 3);
    if (iVar2 == 0) {
        *arg2 = *(iVar4 + 1 + in_R9);
        uVar3 = *(iVar4 + in_R9);
    }
    else if (iVar2 == 1) {
        *arg2 = *(iVar4 + 2 + in_R9);
        uVar3 = *(iVar4 + in_R9);
    }
    else if (iVar2 == 2) {
        *arg2 = *(iVar4 + 4 + in_R9);
        uVar3 = *(iVar4 + in_R9);
    }
    else {
        if (iVar2 != 3) {
            return;
        }
        *arg2 = *(iVar4 + 8 + in_R9);
        uVar3 = *(iVar4 + in_R9);
    }
    *arg3 = uVar3;
    return;
}


/* fcn.00012810 @ 0x12810 */

//WARNING: Type propagation algorithm not settling

int64_t fcn.00012810(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uchar *puVar3;
    uint *puVar4;
    uint32_t uVar5;
    int64_t iVar6;
    uchar *puVar7;
    uchar uVar8;
    ushort uVar9;
    uint uVar10;
    uchar *arg2_00;
    int iVar11;
    uint *puVar12;
    uint *in_stack_00000028;
    int64_t aiStack_18 [2];
    
    puVar4 = in_stack_00000028;
    uVar5 = arg3;
    uVar2 = (arg3 >> 3 & 0x1fe00000 | uVar5 & 0x1f0000) >> 1;
    uVar1 = arg3 >> 0x20;
    if (arg2 == 0) {
        arg2_00 = uVar2 | uVar5 & 0xff | uVar1 & 0xfff | (uVar5 & 0x700) << 4;
    }
    else {
        arg2_00 = uVar2 | ((arg2 & 0xffffU) << 0x1c | uVar5 & 0x700) << 4 | uVar5 & 0xff | uVar1 & 0xfff;
    }
    iVar11 = arg1;
    if (iVar11 < 0xc) {
        puVar12 = in_stack_00000028;
        iVar6 = fcn.00012264(arg1 & 0xffffffff,arg2_00,&stack0x00000028,aiStack_18);
        puVar3 = arg2_00;
        if (-1 < iVar6) {
            for (; arg4 != 0; arg4 = arg4 + -1) {
                if (iVar11 == 0) {
                    uVar8 = *puVar12;
code_r0x00012983:
                    puVar7 = puVar3;
code_r0x00012988:
                    *((puVar7 >> 4 & 0x10000000 | puVar7 & 0xffffffff) + 0xc0000000) = uVar8;
                }
                else if (iVar11 == 1) {
                    uVar9 = *puVar12;
code_r0x0001296a:
                    puVar7 = puVar3;
code_r0x0001296f:
                    *((puVar7 >> 4 & 0x10000000 | puVar7 & 0xffffffff) + 0xc0000000) = uVar9;
                }
                else {
                    if (iVar11 == 2) {
                        uVar10 = *puVar12;
code_r0x00012951:
                        puVar7 = puVar3;
                    }
                    else {
                        if (iVar11 == 4) {
                            uVar8 = *puVar12;
                            puVar7 = arg2_00;
                            goto code_r0x00012988;
                        }
                        if (iVar11 == 5) {
                            uVar9 = *puVar12;
                            puVar7 = arg2_00;
                            goto code_r0x0001296f;
                        }
                        if (iVar11 != 6) {
                            if (iVar11 == 8) {
                                uVar8 = *puVar4;
                                goto code_r0x00012983;
                            }
                            if (iVar11 == 9) {
                                uVar9 = *puVar4;
                                goto code_r0x0001296a;
                            }
                            if (iVar11 == 10) {
                                uVar10 = *puVar4;
                                goto code_r0x00012951;
                            }
                            goto code_r0x000129c7;
                        }
                        uVar10 = *puVar12;
                        puVar7 = arg2_00;
                    }
                    *((puVar7 >> 4 & 0x10000000 | puVar7 & 0xffffffff) + 0xc0000000) = uVar10;
                }
                puVar12 = puVar12 + aiStack_18[0];
                puVar3 = puVar3 + in_stack_00000028;
            }
            iVar6 = 0;
        }
    }
    else {
code_r0x000129c7:
        iVar6 = -0x7ffffffffffffffe;
    }
    return iVar6;
}


/* fcn.0001257c @ 0x1257c */

int64_t fcn.0001257c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    ushort uVar2;
    uint uVar3;
    int64_t iVar4;
    ulong uVar5;
    int iVar6;
    ulong *puVar7;
    ulong *puVar8;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    iVar6 = arg1;
    if (iVar6 < 0xc) {
        puVar8 = arg4;
        iVar4 = fcn.00012264(arg1,arg2,&iStackX_20,aiStack_18);
        puVar7 = arg2;
        if (-1 < iVar4) {
            for (; arg3 != 0; arg3 = arg3 + -1) {
                if (iVar6 < 7) {
                    if (iVar6 == 6) {
                        *arg2 = *puVar8;
                    }
                    else if (iVar6 == 0) {
                        uVar1 = *puVar8;
code_r0x00012627:
                        *puVar7 = uVar1;
                    }
                    else if (iVar6 == 1) {
                        uVar2 = *puVar8;
code_r0x0001261f:
                        *puVar7 = uVar2;
                    }
                    else if (iVar6 == 2) {
                        uVar3 = *puVar8;
code_r0x00012617:
                        *puVar7 = uVar3;
                    }
                    else {
                        if (iVar6 == 3) {
                            uVar5 = *puVar8;
                            goto code_r0x0001260f;
                        }
                        if (iVar6 == 4) {
                            *arg2 = *puVar8;
                        }
                        else {
                            if (iVar6 != 5) {
                                return -0x7ffffffffffffffd;
                            }
                            *arg2 = *puVar8;
                        }
                    }
                }
                else if (iVar6 == 7) {
                    *arg2 = *puVar8;
                }
                else {
                    if (iVar6 == 8) {
                        uVar1 = *arg4;
                        goto code_r0x00012627;
                    }
                    if (iVar6 == 9) {
                        uVar2 = *arg4;
                        goto code_r0x0001261f;
                    }
                    if (iVar6 == 10) {
                        uVar3 = *arg4;
                        goto code_r0x00012617;
                    }
                    if (iVar6 != 0xb) {
                        return -0x7ffffffffffffffd;
                    }
                    uVar5 = *arg4;
code_r0x0001260f:
                    *puVar7 = uVar5;
                }
                puVar8 = puVar8 + aiStack_18[0];
                puVar7 = puVar7 + iStackX_20;
            }
            iVar4 = 0;
        }
    }
    else {
        iVar4 = -0x7ffffffffffffffe;
    }
    return iVar4;
}


/* fcn.0001238c @ 0x1238c */

int64_t fcn.0001238c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    ushort uVar2;
    uint uVar3;
    int64_t iVar4;
    ushort uVar5;
    int64_t iVar6;
    int iVar7;
    ushort uVar8;
    uint *puVar9;
    int64_t aiStackX_10 [2];
    int64_t iStackX_20;
    
    if ((arg2 < 0x10000) && (iVar7 = arg1, iVar7 < 0xc)) {
        puVar9 = arg4;
        iVar4 = fcn.00012264(arg1,arg2,aiStackX_10,&iStackX_20);
        iVar6 = arg2;
        if (-1 < iVar4) {
            for (; arg3 != 0; arg3 = arg3 + -1) {
                uVar5 = iVar6;
                if (iVar7 < 7) {
                    uVar8 = arg2;
                    if (iVar7 == 6) {
                        uVar3 = *puVar9;
                        uVar5 = uVar8;
code_r0x00012427:
                        out(uVar5,uVar3);
                    }
                    else {
                        if (iVar7 == 0) {
                            uVar1 = *puVar9;
                            goto code_r0x0001243b;
                        }
                        if (iVar7 == 1) {
                            uVar2 = *puVar9;
                        }
                        else {
                            if (iVar7 == 2) {
                                uVar3 = *puVar9;
                                goto code_r0x00012427;
                            }
                            if (iVar7 == 3) goto code_r0x0001247e;
                            if (iVar7 == 4) {
                                uVar1 = *puVar9;
                                uVar5 = uVar8;
                                goto code_r0x0001243b;
                            }
                            if (iVar7 != 5) goto code_r0x000123b0;
                            uVar2 = *puVar9;
                            uVar5 = uVar8;
                        }
code_r0x00012431:
                        out(uVar5,uVar2);
                    }
                }
                else if (iVar7 != 7) {
                    if (iVar7 == 8) {
                        uVar1 = *arg4;
code_r0x0001243b:
                        out(uVar5,uVar1);
                    }
                    else {
                        if (iVar7 == 9) {
                            uVar2 = *arg4;
                            goto code_r0x00012431;
                        }
                        if (iVar7 == 10) {
                            uVar3 = *arg4;
                            goto code_r0x00012427;
                        }
                        if (iVar7 != 0xb) goto code_r0x000123b0;
                    }
                }
code_r0x0001247e:
                puVar9 = puVar9 + iStackX_20;
                iVar6 = iVar6 + aiStackX_10[0];
            }
            iVar4 = 0;
        }
    }
    else {
code_r0x000123b0:
        iVar4 = -0x7ffffffffffffffe;
    }
    return iVar4;
}


/* fcn.00012cec @ 0x12cec */

ulong fcn.00012cec(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    int64_t var_bp_10h;
    int64_t var_bp_20h;
    int16_t var_11h;
    uint32_t var_fh;
    
    if (&var_bp_20h != CONCAT44(in_register_0000000c,arg1)) {
        fcn.000104e0(&var_bp_20h,arg1,0x19);
    }
    iVar1 = fcn.0001269c(var_bp_20h._3_4_,var_11h,stack0xffffffffffffffdf,arg4);
    if ((iVar1 < 0) || (arg3 != 0)) {
        uVar3 = 0;
        if (_var_fh != 0) {
            do {
                fcn.000117d4(0);
                iVar1 = fcn.0001269c(var_bp_20h._3_4_,var_11h,stack0xffffffffffffffdf,arg4);
                if ((-1 < iVar1) && (arg3 == 0)) goto code_r0x00012d53;
                uVar3 = uVar3 + 1;
            } while (uVar3 < _var_fh);
        }
        uVar2 = 0x8000000000000007;
    }
    else {
code_r0x00012d53:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012c1c @ 0x12c1c */

ulong fcn.00012c1c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    int64_t var_bp_10h;
    int64_t var_bp_20h;
    uint32_t var_11h;
    
    if (&var_bp_20h != CONCAT44(in_register_0000000c,arg1)) {
        fcn.000104e0(&var_bp_20h,arg1,0x17);
    }
    iVar1 = fcn.0001269c(var_bp_20h._3_4_,0,stack0xffffffffffffffdf,arg4);
    if ((iVar1 < 0) || (arg3 != 0)) {
        uVar3 = 0;
        if (_var_11h != 0) {
            do {
                fcn.000117d4(0);
                iVar1 = fcn.0001269c(var_bp_20h._3_4_,0,stack0xffffffffffffffdf,arg4);
                if ((-1 < iVar1) && (arg3 == 0)) goto code_r0x00012c81;
                uVar3 = uVar3 + 1;
            } while (uVar3 < _var_11h);
        }
        uVar2 = 0x8000000000000007;
    }
    else {
code_r0x00012c81:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000129d4 @ 0x129d4 */

ulong fcn.000129d4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t arg2_00;
    uint64_t uVar3;
    int64_t arg3_00;
    int64_t var_bp_10h;
    int64_t var_bp_20h;
    int64_t var_11h;
    uint32_t var_9h;
    
    arg3_00 = arg3;
    if (&var_bp_20h != CONCAT44(in_register_0000000c,arg1)) {
        arg3_00 = 0x1f;
        fcn.000104e0(&var_bp_20h,arg1,0x1f);
    }
    var_bp_10h = 0;
    arg2_00 = stack0xffffffffffffffdf;
    iVar1 = fcn.000124a4(var_bp_20h._3_4_,stack0xffffffffffffffdf,arg3_00,&var_bp_10h);
    if ((iVar1 < 0) || ((var_bp_10h & arg2) != arg3)) {
        uVar3 = 0;
        if (_var_9h != 0) {
            do {
                fcn.00011834(var_11h,arg2_00);
                var_bp_10h = 0;
                arg2_00 = stack0xffffffffffffffdf;
                iVar1 = fcn.000124a4(var_bp_20h._3_4_,stack0xffffffffffffffdf,arg3_00,&var_bp_10h);
                if ((-1 < iVar1) && ((var_bp_10h & arg2) == arg3)) goto code_r0x00012a32;
                uVar3 = uVar3 + 1;
            } while (uVar3 < _var_9h);
        }
        uVar2 = 0x8000000000000007;
    }
    else {
code_r0x00012a32:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012b48 @ 0x12b48 */

ulong fcn.00012b48(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    int64_t var_bp_10h;
    int64_t var_bp_20h;
    uint32_t var_11h;
    
    if (&var_bp_20h != CONCAT44(in_register_0000000c,arg1)) {
        fcn.000104e0(&var_bp_20h,arg1,0x17);
    }
    var_bp_10h = 0;
    if (((stack0xffffffffffffffdf < 0x10000) &&
        (iVar1 = fcn.000122b4(var_bp_20h._3_4_,stack0xffffffffffffffdf,&var_bp_10h), -1 < iVar1)) &&
       ((var_bp_10h & arg2) == arg3)) {
        return 0;
    }
    uVar2 = 0;
    if (_var_11h != 0) {
        do {
            fcn.000117d4(0);
            var_bp_10h = 0;
            if (((stack0xffffffffffffffdf < 0x10000) &&
                (iVar1 = fcn.000122b4(var_bp_20h._3_4_,stack0xffffffffffffffdf,&var_bp_10h), -1 < iVar1)) &&
               ((var_bp_10h & arg2) == arg3)) {
                return 0;
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < _var_11h);
    }
    return 0x8000000000000007;
}


/* fcn.00013384 @ 0x13384 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.00013384(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int16_t iVar2;
    uint uVar3;
    int64_t iVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    bool bVar9;
    uchar auStackX_8 [8];
    int *piStackX_10;
    int32_t var_23h;
    int64_t iStackX_18;
    int64_t var_67h;
    uint32_t var_77h;
    uchar auStack_a8 [12];
    uint32_t uStack_9c;
    uint32_t uStack_98;
    uint32_t uStack_94;
    int16_t aiStack_78 [19];
    int64_t var_49h;
    int32_t var_3dh;
    int32_t var_39h;
    int32_t var_35h;
    uint32_t var_19h;
    
    iStackX_18 = 0x40;
    piStackX_10 = arg2;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),0,&stack0x00000018,aiStack_78);
    if (iVar4 < 0) {
        bVar9 = iStackX_18 == 0x40;
        goto code_r0x0001388a;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x0001388a;
    *(arg1 + 0x3c) = 0;
    uVar3 = *(arg1 + 0x3c);
    if (aiStack_78[0] == 0x5a4d) {
        uVar3 = stack0xffffffffffffffc4;
    }
    *(arg1 + 0x3c) = uVar3;
    iStackX_18 = 0x108;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar3,&stack0x00000018,piStackX_10);
    if (iVar4 < 0) {
        bVar9 = iStackX_18 == 0x108;
        goto code_r0x0001388a;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x0001388a;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x0001346a;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x0001388a;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x0001346a;
            goto code_r0x00013751;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x0001386e:
            *(arg1 + 0x68) = 3;
            return -0x7ffffffffffffffd;
        }
        *(arg1 + 0x7d) = 0;
        *(arg1 + 0x78) = piStackX_10[1];
        if (piStackX_10[6] == 0x10b) {
            if ((((0x10 < piStackX_10[0x1d]) || (*(piStackX_10 + 5) - 0x60 != piStackX_10[0x1d] << 3)) ||
                (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
               ((((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)) ||
                ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))))) {
code_r0x0001346a:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x0001388a;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x0001346a;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x00013708:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x000134d7;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x0001388a;
                }
code_r0x00013735:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x00013751:
                iVar2 = *(arg1 + 0x78);
                if ((((iVar2 != -0x799c) && (iVar2 != 0xebc)) && (iVar2 != 0x14c)) && (iVar2 != -0x559c)) {
                    return -0x7ffffffffffffffd;
                }
                if (*(arg1 + 0x7d) == '\0') {
                    uVar7 = *(piStackX_10 + 6);
                    iVar6 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5);
                }
                else {
                    uVar7 = *(piStackX_10 + 1);
                    iVar6 = 0x28;
                }
                uVar8 = 0;
                if (uVar7 != 0) {
                    do {
                        iStackX_18 = 0x28;
                        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6,&stack0x00000018,auStack_a8);
                        if (iVar4 < 0) {
                            bVar9 = iStackX_18 == 0x28;
                            goto code_r0x0001388a;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x0001388a;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x0001346a;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x000134d7;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x0001388a;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x0001386e;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x0001346a;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x0001388a;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x0001346a;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x00013708;
                }
                goto code_r0x00013735;
            }
        }
    }
code_r0x000134d7:
    bVar9 = iStackX_18 == 1;
code_r0x0001388a:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.000144ac @ 0x144ac */

ulong fcn.000144ac(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x17900 + 0x98))(*0x17908,0x16bc0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.000144ec @ 0x144ec */

ulong fcn.000144ec(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg2;
    if (arg1 != 0) {
        iStackX_20 = arg3;
        iVar1 = (**(*0x17900 + 0x98))(arg1,0x16c30,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,0x16cc0,0x10,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00016168 @ 0x16168 */

uint32_t fcn.00016168(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    
    uVar1 = fcn.00016104();
    iVar2 = fcn.00016130();
    if (iVar2 != 1) {
        return uVar1;
    }
    iVar2 = fcn.00016130();
    if (iVar2 == 1) {
        fcn.000103b0(0,auStackX_10,0,0);
        if (10 < auStackX_10[0]) {
            fcn.00010ba0(0xb,0,0,auStackX_8);
            if (auStackX_8[0] != 0) goto code_r0x00016206;
        }
        fcn.000103b0(1,NULL,auStackX_8,0);
        uStackX_18 = auStackX_8[0] >> 0x18;
    }
    else {
        uStackX_18 = fcn.00016168();
    }
code_r0x00016206:
    if (uStackX_18 < 0x100) {
        uStackX_18 = uVar1 >> 0x18;
    }
    return uStackX_18;
}


/* fcn.00014b18 @ 0x14b18 */

void fcn.00014b18(uint32_t arg1,int64_t arg2)

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
        arg3 = *(uVar2 * 8 + 0x17350);
    }
    else {
        arg3 = "Reserved";
    }
    uVar1 = fcn.00016168();
    arg4 = uVar1;
    fcn.00014e4c(0x16d98,uVar2,arg3,arg4);
    if ((1 << (arg1 & 0x1f) & 0x20227d00U) != 0) {
        arg2_00 = *arg2;
        fcn.00014e4c(0x16dd8,arg2_00,arg3,arg4);
        if (uVar2 == 0xe) {
            uVar2 = *arg2;
            arg2_00 = uVar2 >> 4 & 1;
            arg4 = uVar2 >> 2 & 1;
            arg3 = uVar2 >> 3 & 1;
            fcn.00014e4c(0x16df0,arg2_00,arg3,arg4);
        }
        fcn.00014e4c(0x16e20,arg2_00,arg3,arg4);
    }
    fcn.00014e4c(0x16e28,*(arg2 + 0x2a0),*(arg2 + 0x2c8),*(arg2 + 0x268));
    fcn.00014e4c(0x16e58,*(arg2 + 0x310),*(arg2 + 0x308),*(arg2 + 0x300));
    iVar3 = *(arg2 + 0x2e8);
    fcn.00014e4c(0x16e88,*(arg2 + 0x2f8),*(arg2 + 0x2f0),iVar3);
    fcn.00014e4c(0x16eb8,*(arg2 + 0x2e0),*(arg2 + 0x2d8),iVar3);
    fcn.00014e4c(0x16ed8,*(arg2 + 0x318),*(arg2 + 800),*(arg2 + 0x328));
    iVar3 = *(arg2 + 0x340);
    fcn.00014e4c(0x16f08,*(arg2 + 0x330),*(arg2 + 0x338),iVar3);
    fcn.00014e4c(0x16f38,*(arg2 + 0x348),*(arg2 + 0x350),iVar3);
    iVar3 = *(arg2 + 0x2b0);
    fcn.00014e4c(0x16f58,*(arg2 + 0x2c0),*(arg2 + 0x2b8),iVar3);
    fcn.00014e4c(0x16f88,*(arg2 + 0x2a8),*(arg2 + 0x2d0),iVar3);
    iVar3 = *(arg2 + 0x250);
    fcn.00014e4c(0x16fa8,*(arg2 + 0x238),*(arg2 + 0x248),iVar3);
    fcn.00014e4c(0x16fd8,*(arg2 + 600),*(arg2 + 0x260),iVar3);
    fcn.00014e4c(0x16ff8,*(arg2 + 0x208),*(arg2 + 0x210),*(arg2 + 0x218));
    fcn.00014e4c(0x17028,*(arg2 + 0x220),*(arg2 + 0x228),*(arg2 + 0x230));
    fcn.00014e4c(0x17058,*(arg2 + 0x280),*(arg2 + 0x288),*(arg2 + 0x270));
    iVar3 = *(arg2 + 0x278);
    arg3_00 = *(arg2 + 0x298);
    fcn.00014e4c(0x17080,*(arg2 + 0x290),arg3_00,iVar3);
    fcn.00014e4c(0x170a8,arg2 + 8,arg3_00,iVar3);
    return;
}


/* fcn.00014e4c @ 0x14e4c */

//WARNING: Type propagation algorithm not settling

void fcn.00014e4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff38;
    int8_t in_stack_ffffffffffffff40;
    
    fcn.00014f0c(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40);
    arg2_00 = 0;
    while (uStackY_108 != '\0') {
        uStackY_108._0_1_ = *(&uStackY_108 + arg2_00 + 1U);
        arg2_00 = arg2_00 + 1;
    }
    fcn.00015d3c(&uStackY_108,arg2_00);
    return;
}


/* fcn.00010aa5 @ 0x10aa5 */

void fcn.00010aa5(int64_t arg1,int64_t arg2)

{
    *(arg1 + 1) = arg2;
    return;
}


/* fcn.00014f0c @ 0x14f0c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00014f0c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00014f67;
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
code_r0x00014f67:
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
        uVar5 = fcn.0001163c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00011610(arg4);
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
            pcVar9 = 0x174dc;
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
code_r0x000152f1:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x174dc;
                }
                else {
                    pcVar9 = 0x174e0;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000150b0:
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
                            goto code_r0x00015253;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001526a;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00015253;
                                }
                                goto code_r0x0001526a;
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
code_r0x00015253:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000150b0;
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
                                goto code_r0x000150b0;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001526a;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00015253;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001526a:
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
                                fcn.00015c38(&var_68h_2,0x26,0,0x17470);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x000152f1;
                                if (uStack_a8 == 0x53) goto code_r0x00015500;
                                if (uStack_a8 == 0x58) goto code_r0x000155f6;
                                if (uStack_a8 == 0x61) goto code_r0x00015509;
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
                                    goto code_r0x00015095;
                                }
                                if (uStack_a8 != 100) goto code_r0x00015091;
                                goto code_r0x0001560d;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x174dc;
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
                        goto code_r0x00015808;
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
                                    iVar13 = 0x1757b;
                                    goto code_r0x000155bd;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000155bd:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00015808;
                            }
                            fcn.00015c38(&var_68h_2,0x26,0,0x174d4);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00015500:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00015509:
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
                                goto code_r0x00015808;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00015091;
                                    goto code_r0x000155fa;
                                }
                                goto code_r0x000155ff;
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
                                goto code_r0x00015808;
                            }
                            fcn.00015c38(&var_68h_2,0x26,0,0x174b8);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00015808;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x000155f6:
                    uVar5 = uVar5 | 0x20;
code_r0x000155fa:
                    uVar5 = uVar5 | 0x80;
code_r0x000155ff:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x0001560d:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x0001564f;
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
code_r0x0001564f:
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
code_r0x000156d7:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000156d7;
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
code_r0x00015091:
                    pcVar9 = &uStack_a8;
code_r0x00015095:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00015808:
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
                arg1 = fcn.00014ed8(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00014ed8(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.00014ed8(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.00014ed8(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00015d3c @ 0x15d3c */

uint64_t fcn.00015d3c(uint32_t *arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *noname_0;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    uVar3 = 0;
    uVar1 = 0x22;
    if (*0x17920 != '\0') {
        uVar1 = *0x16d04;
    }
    noname_0 = arg1;
    if (((uVar1 & 2) != 0) && (noname_0 = arg2, puVar5 = arg1, arg1 != NULL)) {
        while (noname_0 != NULL) {
            do {
                uVar2 = in(0x3fd);
            } while ((uVar2 & 0x20) == 0);
            uVar4 = uVar3;
            do {
                if (noname_0 == NULL) goto code_r0x00015db0;
                out(0x3f8,*puVar5);
                uVar4 = uVar4 + 1;
                noname_0 = noname_0 + -1;
                puVar5 = puVar5 + 1;
            } while (uVar4 < 0x10);
        }
code_r0x00015db0:
        uVar3 = arg2;
    }
    if ((uVar1 & 0x10) != 0) {
        uVar3 = fcn.00016878(noname_0,arg1,arg2);
    }
    if ((uVar1 & 0x20) != 0) {
        fcn.00016300(4,arg1,arg2);
    }
    return uVar3;
}


/* fcn.00011610 @ 0x11610 */

uint64_t fcn.00011610(uint32_t arg1)

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


/* fcn.0001163c @ 0x1163c */

uint64_t fcn.0001163c(uint32_t arg1)

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


/* fcn.00015c38 @ 0x15c38 */

void fcn.00015c38(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00014f0c(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00014ed8 @ 0x14ed8 */

uchar * fcn.00014ed8(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00016878 @ 0x16878 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00016878(ulong noname_0,int64_t arg1,int64_t arg2)

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
    cVar1 = fcn.00016978(noname_0,arg1_00,aiStackX_20);
    if ((cVar1 != '\0') && (arg1 != 0)) {
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
                    cVar1 = fcn.00016978(puStack_40,arg1_00,aiStack_48);
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
                    fcn.00016afc(CONCAT71(uVar4 >> 8,uVar2) & 0xffffffffffffff01,arg1_00);
                    iVar5 = 1000000;
                }
                fcn.00011834(10,arg1_00);
                iVar5 = iVar5 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.00016300 @ 0x16300 */

ulong fcn.00016300(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg2_00;
    int64_t iVar1;
    uint8_t uVar2;
    uint64_t noname_1;
    bool bVar3;
    bool bVar4;
    
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
            goto code_r0x0001637f;
        }
        bVar3 = arg2_00 - 1 < 3;
        bVar4 = arg2_00 - 1 == 3;
    }
    if (!bVar3 && !bVar4) {
        return 0x8000000000000015;
    }
code_r0x0001637f:
    iVar1 = fcn.00016220();
    if (iVar1 != 0) {
        fcn.000163b0(iVar1,noname_1,arg3,arg2_00);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.0001608c @ 0x1608c */

ulong fcn.0001608c(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.000103b0(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.00016130 @ 0x16130 */

char fcn.00016130(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.0001608c();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.000160c8 @ 0x160c8 */

int64_t fcn.000160c8(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.0001608c();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.00016104 @ 0x16104 */

uint64_t fcn.00016104(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.00016130();
    if (iVar1 == 1) {
        iVar1 = fcn.000160c8();
        uVar2 = *(iVar1 + 0x20);
    }
    else {
        uVar2 = rdmsr(0x802);
    }
    return uVar2;
}


/* fcn.00010ba0 @ 0x10ba0 */

uint64_t fcn.00010ba0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00014ea8 @ 0x14ea8 */

ulong fcn.00014ea8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x17900 + 0x40))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000164f4 @ 0x164f4 */

void fcn.000164f4(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x17a80;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x17a00) {
        fcn.000104e0(arg1_00,0x17a00,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x1662c;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x16548;
    *(arg1_00 + 4) = 0x16570;
    *(arg1_00 + 8) = 0x165f0;
    *(arg1_00 + 10) = 0x165e8;
    *(arg1_00 + 0xc) = 0x165f8;
    *(arg1_00 + 0xe) = 0x16600;
    *(arg1_00 + 0x10) = 0x16608;
    *(arg1_00 + 0x12) = 0x16610;
    *(arg1_00 + 0x14) = 0x16624;
    *(arg1_00 + 0x16) = 0x16618;
    return;
}


/* fcn.00016220 @ 0x16220 */

uint64_t fcn.00016220(ulong param_1)

{
    int64_t iVar1;
    int64_t *arg1;
    int64_t iVar2;
    uint uVar3;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x17978;
    if (*0x17978 == NULL) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar1 = fcn.00014ea8(param_1,0x68);
        uVar3 = fcn.000164f4(iVar1);
        arg1 = fcn.00014ea8(uVar3,0x78);
        if (arg1 == NULL) {
            arg1 = 0x17980;
        }
        else {
            iVar2 = 0x17a80;
            if (iVar1 != 0) {
                iVar2 = iVar1;
            }
            if (arg1 != 0x17a00) {
                fcn.000104e0(arg1,0x17a00,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *(arg1 + 4) = 0;
            *arg1 = iVar2;
            if (*(iVar2 + 8) != NULL) {
                (**(iVar2 + 8))(arg1,&uStack_18);
            }
        }
        *0x17978 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        iVar1 = *0x16cc8;
        arg1[2] = *0x16cc0;
        arg1[3] = iVar1;
    }
    return -(arg1[0xe] != 0) & arg1;
}


/* fcn.000163b0 @ 0x163b0 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.000163b0(uint32_t arg1,ulong noname_1,ulong noname_2,uint32_t arg2)

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
    if (piVar2 != 0x17980) {
        puVar4 = &uStack_88;
        uVar5 = (arg2 & 7) << 4 | *(piVar2 + 0xc) & 0xffff80;
        uStack_58 = uVar5 | 0x1000002;
        if ((*(piVar2 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar2[2];
            iStack_4c = piVar2[3];
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x17860;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar2[4];
            *(piVar2 + 4) = _auStack_44 + 1;
            *puVar4 = *0x17864;
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
                fcn.000104c0(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x17878;
        }
        else {
            uStack_58 = uVar5 | 0x1000202;
            *puVar4 = *0x17874;
            puVar4[1] = *0x1787c;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x178a0;
        (**(*piVar2 + 0x18))(piVar2,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.00016b50 @ 0x16b50 */

int64_t fcn.00016b50(uint32_t arg1)

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


/* fcn.00016798 @ 0x16798 */

void fcn.00016798(ulong noname_0,int64_t arg1)

{
    if ((((*arg1 != -1) && ((*(arg1 + 4) & 2) == 0)) && ((*(arg1 + 0x10) & 0xfffff000) != 0)) &&
       ((*(arg1 + 0x10) & 0xfffff000) != 0xfffff000)) {
        *(arg1 + 4) = *(arg1 + 4) | 2;
    }
    return;
}


/* fcn.00016978 @ 0x16978 */

uint64_t fcn.00016978(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0xfdcb0618 & 2) == 0) {
        uVar2 = fcn.00016b50(0xf1000);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) goto code_r0x00016ae8;
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
        uVar4 = *0x16d5c;
        uVar2 = fcn.00016b50(*0x16d5c);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) {
code_r0x00016ae8:
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


/* fcn.00016afc @ 0x16afc */

void fcn.00016afc(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,arg2);
    cVar1 = fcn.00016978(arg1,aiStackX_18,aiStackX_10);
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


