// decompiled by r2ghidra: 0813_OemQkeyDxe.pe32
// functions: 11

/* entry0 @ 0x103c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103dc(arg1,arg2);
    fcn.000104ac(arg1,arg2);
    return;
}


/* fcn.000103dc @ 0x103dc */

void fcn.000103dc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x109e8 = *(arg1 + 0x60);
    *0x109e0 = arg1;
    fcn.0001070c();
    iVar3 = fcn.00010778();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x10a08 != NULL) || (iVar3 = (**(*0x109e8 + 0x140))(0x10970,0,0x10a08), -1 < iVar3)) {
        (***0x10a08)(*0x10a08,0x10a10);
    }
    return;
}


/* fcn.000104ac @ 0x104ac */

int64_t fcn.000104ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    bool bVar2;
    uint64_t auStackX_8 [2];
    uint8_t auStackX_18 [8];
    uint auStackX_20 [2];
    uint32_t var_bd9h;
    int64_t var_c10h;
    int64_t var_c18h;
    ulong auStack_cc8 [2];
    uchar auStack_cb8 [3225];
    char cStack_1f;
    
    auStackX_8[0] = arg1 & 0xffffffffffffff00;
    if (*0x109f8 == 0) {
        *0x109f0 = *(arg2 + 0x58);
        *0x109f8 = arg2;
    }
    auStack_cc8[0] = 0xca9;
    iVar1 = (**(*0x109f0 + 0x48))(L"Setup",0x10950,auStackX_20,auStack_cc8,auStack_cb8);
    if (iVar1 < 0) {
        return iVar1;
    }
    section..text(auStackX_18,0xfe410d43,1);
    if (auStackX_18[0] < 0x25) {
        if (auStackX_18[0] == 1) {
            auStackX_8[0] = auStackX_8[0]._1_7_ << 8;
            *0xfe410782 = *0xfe410782 & 0xed | 0x21;
            goto code_r0x00010699;
        }
        if (auStackX_18[0] != 0) {
            if (auStackX_18[0] - 0x21 < 5) {
                auStackX_8[0] = auStackX_8[0]._1_7_ << 8;
                if (cStack_1f == '\0') {
                    if (auStackX_18[0] == 0x21) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x2b;
                    }
                    else if (auStackX_18[0] == 0x22) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x3b;
                    }
                    else if (auStackX_18[0] == 0x23) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x2f;
                    }
                    else if (auStackX_18[0] == 0x24) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x3f;
                    }
                }
                else {
                    if (auStackX_18[0] == 0x21) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x29;
                    }
                    else if (auStackX_18[0] == 0x22) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x39;
                    }
                    else if (auStackX_18[0] == 0x23) {
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x2d;
                    }
                    else {
                        if (auStackX_18[0] != 0x24) goto code_r0x00010699;
                        *0xfe410782 = (*0xfe410782 & 0xc0) + 0x3d;
                    }
                    cStack_1f = '\x01';
                }
                goto code_r0x00010699;
            }
            auStackX_8[0] = CONCAT71(auStackX_8[0]._1_7_,1);
            if (0xf < auStackX_18[0]) {
                if (0x13 < auStackX_18[0]) {
                    if (auStackX_18[0] < 0x16) {
                        cStack_1f = '\0';
                    }
                    else if (auStackX_18[0] < 0x18) {
                        cStack_1f = '\x01';
                    }
                }
                auStackX_18[0] = auStackX_18[0] & 0xf;
            }
            auStackX_18[0] = auStackX_18[0] | 0x10;
            if (cStack_1f == '\0') {
                *0xfe410782 = *0xfe410782 | 3;
                if (auStackX_18[0] == 0x14) {
code_r0x00010689:
                    *0xfe410782 = *0xfe410782 & 0xef | 0x20;
                    goto code_r0x00010699;
                }
                bVar2 = auStackX_18[0] == 0x15;
            }
            else {
                if (cStack_1f != '\x01') goto code_r0x00010699;
                *0xfe410782 = *0xfe410782 & 0xfd | 1;
                if (auStackX_18[0] == 0x16) goto code_r0x00010689;
                bVar2 = auStackX_18[0] == 0x17;
            }
            if (bVar2) {
                *0xfe410782 = *0xfe410782 | 0x30;
            }
            goto code_r0x00010699;
        }
    }
    auStackX_8[0] = auStackX_8[0]._1_7_ << 8;
    *0xfe410782 = *0xfe410782 | 0x33;
code_r0x00010699:
    (**(*0x109f0 + 0x58))(L"Setup",0x10950,auStackX_20[0],auStack_cc8[0],auStack_cb8);
    (**(*0x109f0 + 0x58))(L"OemMyfanOption",0x10940,3,1,auStackX_8);
    return 0;
}


/* fcn.0001070c @ 0x1070c */

int64_t fcn.0001070c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10a00 == 0) {
        *0x10a00 = 0;
        if (*(*0x109e0 + 0x68) != 0) {
            piVar2 = *(*0x109e0 + 0x70);
            do {
                if ((*0x10960 == *piVar2) && (*0x10968 == piVar2[1])) {
                    *0x10a00 = (*(*0x109e0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10a00;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x109e0 + 0x68));
        }
    }
    return *0x10a00;
}


/* fcn.00010778 @ 0x10778 */

void fcn.00010778(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001070c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000107af:
            if ((piVar1 == NULL) || ((*0x10980 == *(piVar1 + 4) && (*0x10988 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000107af;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1760 named .text
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


