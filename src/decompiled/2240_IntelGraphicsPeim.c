// decompiled by r2ghidra: 2240_IntelGraphicsPeim.pe32
// functions: 410

/* entry0 @ 0x104a9 */

void entry0(uint param_1,int *param_2)

{
    int iVar1;
    uint uVar2;
    
    *0x1a130 = param_2;
    *0x1a0c0 = param_2;
    (**(*param_2 + 0x20))(param_2,0x16ac0,0,0,0x1a0bc);
    _fcn.0001a080 = param_1;
    iVar1 = (**(*param_2 + 0x18))(param_2,0x16b08);
    if (-1 < iVar1) {
        uVar2 = fcn.0001050d();
        fcn.000133ed(uVar2);
        (**(*param_2 + 0x18))(param_2,0x16b14);
    }
    return;
}


/* fcn.0001050d @ 0x1050d */

uint fcn.0001050d(void)

{
    fcn.000133ed(0x19bec);
    fcn.00013460(0x1a048);
    fcn.00013460(0x19bf4);
    fcn.00013460(0x1a048);
    fcn.00013460(0x19b5c);
    return 0x1a1c0;
}


/* fcn.000133ed @ 0x133ed */

uint __thiscall fcn.000133ed(int16_t *param_1,int16_t *param_2)

{
    int16_t iVar1;
    char cVar2;
    uint uVar3;
    int iVar4;
    ulong uVar5;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == NULL) {
        uVar3 = 0x80000002;
    }
    else {
        uVar5 = fcn.000133c1();
        if (uVar5 < uVar5 >> 0x20) {
            cVar2 = fcn.0001339b(param_2,uVar5 * 2 + 2);
            if (cVar2 == '\0') {
                iVar1 = *param_2;
                if (iVar1 != 0) {
                    iVar4 = param_2 - param_1;
                    do {
                        *param_1 = iVar1;
                        param_1 = param_1 + 1;
                        iVar1 = *(iVar4 + param_1);
                    } while (iVar1 != 0);
                }
                uVar3 = 0;
                *param_1 = 0;
            }
            else {
                uVar3 = 0x8000000f;
            }
        }
        else {
            uVar3 = 0x80000005;
        }
    }
    return uVar3;
}


/* fcn.000133c1 @ 0x133c1 */

uint32_t __fastcall fcn.000133c1(int16_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if ((param_1 == NULL) || (param_2 == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 0;
        if (*param_1 != 0) {
            do {
                if (param_2 - 1 <= uVar1) {
                    return param_2;
                }
                uVar1 = uVar1 + 1;
            } while (param_1[uVar1] != 0);
        }
    }
    return uVar1;
}


/* fcn.0001339b @ 0x1339b */

uint32_t __fastcall fcn.0001339b(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    
    if (param_3 <= param_1) {
        uVar1 = param_4 + param_3;
        if (param_1 < uVar1) goto code_r0x000133b9;
        if (param_3 < param_1) goto code_r0x000133bd;
    }
    uVar1 = param_1 + param_2;
    if (uVar1 <= param_3) {
code_r0x000133bd:
        return uVar1 & 0xffffff00;
    }
code_r0x000133b9:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.00013460 @ 0x13460 */

uint __cdecl fcn.00013460(int32_t arg_8h)

{
    int16_t iVar1;
    char cVar2;
    uint uVar3;
    int16_t *piVar4;
    int iVar5;
    ulong uVar6;
    ulong uVar7;
    
    uVar6 = fcn.000133c1();
    if (arg_8h == 0) {
        uVar3 = 0x80000002;
    }
    else if (uVar6 >> 0x20 == uVar6) {
        uVar3 = 0x80000004;
    }
    else {
        uVar7 = fcn.000133c1();
        if (uVar7 < uVar7 >> 0x20) {
            cVar2 = fcn.0001339b(arg_8h,uVar7 * 2 + 2);
            if (cVar2 == '\0') {
                iVar1 = *arg_8h;
                piVar4 = uVar6 * 2 + 0x1a1c0;
                if (iVar1 != 0) {
                    iVar5 = arg_8h - piVar4;
                    do {
                        *piVar4 = iVar1;
                        piVar4 = piVar4 + 1;
                        iVar1 = *(iVar5 + piVar4);
                    } while (iVar1 != 0);
                }
                uVar3 = 0;
                *piVar4 = 0;
            }
            else {
                uVar3 = 0x8000000f;
            }
        }
        else {
            uVar3 = 0x80000005;
        }
    }
    return uVar3;
}


/* fcn.0002698e @ 0x2698e */

ulong __fastcall fcn.0002698e(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.000107c8 @ 0x107c8 */

int fcn.000107c8(void)

{
    int iVar1;
    uint uStack_4;
    
    iVar1 = (**(*0x1a0b4 + 8))(0x1a140,&uStack_4);
    if (-1 < iVar1) {
        if ((*0x1a140)[3] + (*0x1a140)[2] + (*0x1a140)[1] + **0x1a140 == 0x110) {
            fcn.0001068d();
        }
        else {
            iVar1 = -0x7ffffff9;
        }
    }
    return iVar1;
}


/* fcn.00013b10 @ 0x13b10 */

int fcn.00013b10(void)

{
    int iVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    bool bVar8;
    
    iVar3 = fcn.000147f6();
    if (((iVar3 < 0) || (iVar3 = fcn.000148ef(), iVar3 < 0)) || (iVar3 = fcn.00014a08(), iVar3 < 0)) {
code_r0x00013b1e:
        iVar3 = -0x7ffffff9;
    }
    else {
        fcn.00014ab2();
        fcn.0001bd4a();
        iVar1 = *0x1a0c4;
        uVar7 = 0;
        uVar4 = 0;
        do {
            if (*(uVar4 * 4 + 0x19f80) == (*(*0x1a0c4 + 0x108040) & 0xffff) >> 8) {
                *0x1a0f8 = *(uVar4 * 4 + 0x19f82);
                break;
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x23);
        if ((*(*0x1a0c4 + 0x4f060) & 0xffffff) == 0) {
            iVar3 = *(*0x1a0c4 + 0x1080c4);
            uVar4 = *(*0x1a0c4 + 0x1080c0) & 0xfff00000;
            iVar6 = (*0x1a0f8 & 0x3fffff) << 8;
            if ((*0x1a0f8 & 0x3fffff) != 0) {
                iVar5 = 0x800000;
                do {
                    bVar8 = CARRY4(uVar7,uVar4);
                    *(iVar5 + iVar1) = uVar7 + uVar4 | 1;
                    uVar7 = uVar7 + 0x1000;
                    *(iVar5 + 4 + iVar1) = iVar3 + bVar8;
                    iVar5 = iVar5 + 8;
                    iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
            }
            iVar3 = fcn.000139ad();
            if (iVar3 < 0) goto code_r0x00013b1e;
        }
        else {
            fcn.0001bae1();
        }
        cVar2 = fcn.00018db0();
        if (cVar2 == '\0') {
            iVar3 = -0x7ffffff9;
        }
    }
    return iVar3;
}


/* fcn.00013311 @ 0x13311 */

void __fastcall fcn.00013311(int param_1)

{
    int16_t iVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar2 = fcn.00010818();
    if (-1 < iVar2) {
        fcn.0001245f();
        fcn.0001329d();
        fcn.00012a36();
        fcn.00012ef1();
        iVar1 = fcn.00012b3d();
        if ((iVar1 == 0) && ((*(*(param_1 + 8) + 4) & 1) != 0)) {
            fcn.00012bf1();
        }
        fcn.000130ab();
    }
    return;
}


/* fcn.00011584 @ 0x11584 */

int __fastcall fcn.00011584(int param_1)

{
    int iVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint *puVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    uint8_t uStack_15;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint uStack_8;
    int iStack_4;
    
    uStack_8 = 0;
    bVar2 = false;
    iVar3 = fcn.00010818();
    if (iVar3 < 0) {
        return iVar3;
    }
    if (*(param_1 + 0x10) != 0) {
        return iVar3;
    }
    uVar8 = 0xffffffff;
    *(param_1 + 0x14) = 0;
    uVar4 = 0;
    uStack_c = 0xffffffff;
    uVar10 = 0xffffffff;
    uStack_15 = 0;
    do {
        uStack_10 = 0;
        iVar9 = *(param_1 + 4 + uVar4 * 4);
        if (iVar9 != 0) {
            if (*(iVar9 + 0x20) == 0) {
                bVar2 = true;
            }
            else {
                if ((*(iVar9 + 0x1d) == '\0') || (iVar3 = fcn.00011407(&uStack_10,&uStack_8), iVar3 < 0)) {
                    iVar3 = fcn.0001147e(&uStack_10,&uStack_8);
                }
                if ((*(*(iStack_4 + 4) + 0x10) < 0xac) || (iVar1 = *(iStack_4 + 0x2c), *(iVar1 + 3) != '\x01')) {
                    uVar8 = 0;
                    uVar4 = uStack_10;
                }
                else {
                    uVar8 = *(iVar1 + 4);
                    if (*(iVar9 + 0x30) < uVar8) {
                        return -0x7ffffffd;
                    }
                    uVar4 = *(iVar1 + 8);
                    if (*(iVar9 + 0x40) < *(iVar1 + 8)) {
                        return -0x7ffffffd;
                    }
                }
                if (uVar8 <= uStack_c) {
                    uStack_c = uVar8;
                }
                uVar8 = uStack_c;
                if (uVar4 <= uVar10) {
                    uVar10 = uVar4;
                }
            }
        }
        uStack_15 = uStack_15 + 1;
        uVar4 = uStack_15;
    } while (uStack_15 < 2);
    if ((uVar8 == 0) || (uVar10 == 0)) {
        return -0x7ffffffd;
    }
    if (bVar2) {
        puVar7 = fcn.0001354b();
        *(param_1 + 0x10) = puVar7;
        if (puVar7 == NULL) {
            return -0x7ffffff9;
        }
        *puVar7 = 0x400;
        *(*(param_1 + 0x10) + 4) = 0x300;
        *(*(param_1 + 0x10) + 8) = 0x20;
        *(*(param_1 + 0x10) + 0xc) = 1;
    }
    else {
        if (uVar8 == 0xffffffff) {
            return iVar3;
        }
        if (uVar10 == 0xffffffff) {
            return iVar3;
        }
        puVar5 = fcn.0001354b();
        *(param_1 + 0x10) = puVar5;
        if (puVar5 == NULL) {
            return -0x7ffffff9;
        }
        if (*0x1a0f8 << 0x14 < (uStack_c * 4 + 0x3f & 0xffffffc0) * uVar10) {
            iVar9 = 7;
            for (puVar6 = 0x16ba4; (uStack_c < puVar6[-1] || (uVar10 < *puVar6)); puVar6 = puVar6 + -4) {
                iVar9 = iVar9 + -1;
            }
            iVar9 = iVar9 * 0x10;
            *puVar5 = *(iVar9 + 0x16b30);
            *(*(param_1 + 0x10) + 4) = *(iVar9 + 0x16b34);
            *(*(param_1 + 0x10) + 8) = *(iVar9 + 0x16b38);
        }
        else {
            *puVar5 = uStack_c;
            *(*(param_1 + 0x10) + 4) = uVar10;
            *(*(param_1 + 0x10) + 8) = 0x20;
        }
    }
    *(param_1 + 0x14) = *(param_1 + 0x14) + 1;
    return iVar3;
}


/* fcn.00010a4a @ 0x10a4a */

int __fastcall fcn.00010a4a(int *param_1)

{
    int *piVar1;
    uint *puVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = *param_1[4];
    iVar3 = param_1[4][1];
    *0x1a134 = fcn.0001354b();
    if (*0x1a134 != NULL) {
        puVar2 = fcn.0001354b();
        piVar1 = *0x1a134;
        (*0x1a134)[2] = puVar2;
        if (puVar2 != NULL) {
            *puVar2 = 0;
            *(piVar1[2] + 0xc) = 1;
            piVar1[4] = *0x1a0f0;
            piVar1[5] = 0;
            piVar1[3] = 0x24;
            *(piVar1[2] + 4) = iVar4;
            *(piVar1[2] + 8) = iVar3;
            *(piVar1[2] + 0x20) = iVar4 * 4 + 0x3fU >> 2 & 0x3ffffff0;
            piVar1[6] = *(piVar1[2] + 0x20) * iVar3 * 4;
            iVar4 = param_1[5];
            piVar1[1] = 0;
            *piVar1 = iVar4;
            iVar4 = 2;
            do {
                param_1 = param_1 + 1;
                if (((*param_1 != 0) && (*(*param_1 + 0x20) == 0)) && (iVar3 = fcn.000108ca(), -1 < iVar3)) {
                    fcn.00010914();
                }
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar4 = fcn.000142c0();
            if (iVar4 < 0) {
                return iVar4;
            }
            return 0;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00010856 @ 0x10856 */

uint __fastcall fcn.00010856(uint *param_1)

{
    uint *puVar1;
    
    puVar1 = *0x1a134;
    if (*0x1a134 == NULL) {
        return 0x80000006;
    }
    *param_1[2] = *(*0x1a134)[2];
    *(param_1[2] + 0xc) = *(puVar1[2] + 0xc);
    param_1[3] = puVar1[3];
    param_1[4] = puVar1[4];
    param_1[5] = puVar1[5];
    *(param_1[2] + 4) = *(puVar1[2] + 4);
    *(param_1[2] + 8) = *(puVar1[2] + 8);
    *(param_1[2] + 0x20) = *(puVar1[2] + 0x20);
    param_1[6] = puVar1[6];
    *param_1 = *puVar1;
    param_1[1] = puVar1[1];
    return 0;
}


/* fcn.0001068d @ 0x1068d */

void fcn.0001068d(void)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    
    *0x1a160 = *0x1a140;
    *0x1a164 = *0x1a140 + 0x30;
    *0x1a194 = NULL;
    *0x1a138 = *(*0x1a140 + 0x40);
    for (puVar2 = *0x1a140 + 0x46; puVar2 < *(*0x1a140 + 0x18) + *0x1a140; puVar2 = puVar2 + uVar3 + 3) {
        uVar3 = *(puVar2 + 1);
        uVar1 = *puVar2;
        if (uVar1 < 0x2d) {
            if (uVar1 == 0x2c) {
                *0x1a188 = puVar2;
            }
            else if (uVar1 == 1) {
                *0x1a168 = puVar2;
            }
            else if (uVar1 == 2) {
                *0x1a170 = puVar2;
            }
            else if (uVar1 == 0x1b) {
                *0x1a178 = puVar2;
            }
            else if (uVar1 == 0x28) {
                *0x1a17c = puVar2;
            }
            else if (uVar1 == 0x2a) {
                *0x1a180 = puVar2;
            }
            else if (uVar1 == 0x2b) {
                *0x1a184 = puVar2;
            }
        }
        else if (uVar1 == 0x33) {
            *0x1a18c = puVar2;
        }
        else if (uVar1 == 0x34) {
            *0x1a190 = puVar2;
        }
        else if (uVar1 == 0x35) {
            *0x1a194 = puVar2;
            if (2 < puVar2[3]) {
                uVar3 = *(puVar2 + 4) + 5;
            }
        }
        else if (uVar1 == 0x38) {
            *0x1a198 = puVar2;
        }
        else if (uVar1 == 0x3a) {
            *0x1a1a0 = puVar2;
        }
        else if (uVar1 == 0xfd) {
            *0x1a16c = puVar2;
        }
    }
    return;
}


/* fcn.0001354b @ 0x1354b */

int __fastcall fcn.0001354b(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00013523();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000102b0(iVar1,param_1);
    return iVar1;
}


/* fcn.00013523 @ 0x13523 */

int32_t __fastcall fcn.00013523(int32_t param_1)

{
    int iVar1;
    int32_t var_4h;
    
    var_4h = param_1;
    iVar1 = (**(**0x1a130 + 0x4c))(*0x1a130,param_1,&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.000102b0 @ 0x102b0 */

uchar (*) [16] fcn.000102b0(uchar (*param_1) [16],uint32_t param_2)

{
    uint32_t uVar1;
    uchar (*pauVar2) [16];
    
    uVar1 = -param_1 & 0x3f;
    pauVar2 = param_1;
    if (uVar1 != 0) {
        if (param_2 < uVar1) {
            uVar1 = param_2;
        }
        param_2 = param_2 - uVar1;
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            (*pauVar2)[0] = 0;
            pauVar2 = *pauVar2 + 1;
        }
    }
    uVar1 = param_2 & 0x3f;
    for (param_2 = param_2 >> 6; param_2 != 0; param_2 = param_2 - 1) {
        *pauVar2 = 0x0;
        pauVar2[1] = 0x0;
        pauVar2[2] = 0x0;
        pauVar2[3] = 0x0;
        pauVar2 = pauVar2 + 4;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        (*pauVar2)[0] = 0;
        pauVar2 = *pauVar2 + 1;
    }
    return param_1;
}


/* fcn.000108ca @ 0x108ca */

uint __fastcall fcn.000108ca(int *param_1,int *param_2)

{
    uint32_t uVar1;
    int iVar2;
    
    iVar2 = 0;
    uVar1 = 0;
    while (((*(uVar1 + 0x16bd0) != *param_1 || (*(uVar1 + 0x16bd4) != param_1[1])) || (*(uVar1 + 0x16bd8) != param_1[2])
           )) {
        uVar1 = uVar1 + 0x28;
        iVar2 = iVar2 + 1;
        if (399 < uVar1) {
            return 0x8000000e;
        }
    }
    *param_2 = iVar2 * 0x28 + 0x16be4;
    return 0;
}


/* fcn.00010914 @ 0x10914 */

void __fastcall fcn.00010914(uint16_t *param_1,int param_2)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    *(param_2 + 0x2c) = *param_1 * 10;
    *(param_2 + 0x30) = (param_1[2] & 0xfffffff0) << 4 | param_1[1];
    *(param_2 + 0x34) = (param_1[2] & 0xf) << 8 | *(param_1 + 3);
    *(param_2 + 0x38) = (*(param_1 + 0xb) & 0xffffffc0) << 2 | param_1[4];
    *(param_2 + 0x3c) = (*(param_1 + 0xb) & 0x30) << 4 | *(param_1 + 9);
    if ((*(param_2 + 0x10) == 1) && (iVar2 = *(param_2 + 0x8c), *(iVar2 + 0xa4) != '\0')) {
        uVar3 = *(iVar2 + 0xa5);
        *(param_2 + 0x2c) = *(param_2 + 0x2c) * uVar3;
        uVar1 = *(iVar2 + 0x1a);
        *(param_2 + 0x34) = *(param_2 + 0x34) * uVar3;
        *(param_2 + 0x30) = (*(param_2 + 0x30) - uVar1) * uVar3;
        *(param_2 + 0x38) = *(param_2 + 0x38) * uVar3;
        *(param_2 + 0x3c) = *(param_2 + 0x3c) * uVar3;
    }
    *(param_2 + 0x40) = (*(param_1 + 7) & 0xfffffff0) << 4 | *(param_1 + 5);
    *(param_2 + 0x44) = (*(param_1 + 7) & 0xf) << 8 | param_1[3];
    *(param_2 + 0x48) = (*(param_1 + 0xb) & 0xc) << 2 | param_1[5] >> 4;
    *(param_2 + 0x4c) = (*(param_1 + 0xb) & 3) << 4 | param_1[5] & 0xf;
    uVar1 = *(param_1 + 0x11);
    *(param_2 + 0x5c) = 0;
    *(param_2 + 0x60) = 0;
    *(param_2 + 0x58) = uVar1 & 0x80;
    if ((*(param_1 + 0x11) & 0x18) == 0x18) {
        *(param_2 + 0x5c) = 1;
        *(param_2 + 0x60) = 1;
        if ((*(param_1 + 0x11) & 2) != 0) {
            *(param_2 + 0x5c) = 2;
        }
        if ((*(param_1 + 0x11) & 4) != 0) {
            *(param_2 + 0x60) = 2;
        }
    }
    return;
}


/* fcn.000142c0 @ 0x142c0 */

int __fastcall fcn.000142c0(int param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int iStack_14;
    
    iVar6 = *0x1a094;
    iVar5 = *0x1a090;
    uVar8 = 0;
    bVar3 = false;
    if (param_2 == NULL) {
        iVar7 = -0x7ffffff9;
    }
    else {
        if ((*param_2 == 0) || (param_2[1] == 0)) {
            *0x1a120 = 0;
            *0x1a124 = 0;
            bVar3 = true;
        }
        else {
            *0x1a124 = *(param_1 + 8);
            *0x1a120 = *(param_1 + 4);
        }
        do {
            iVar7 = *(uVar8 + 0x1a128);
            if (iVar7 != 0) {
                iVar1 = *(uVar8 + 0x1a120);
                if (iVar1 != 0) {
                    if ((((*(iVar7 + 0x10) != *(iVar1 + 0x10)) || (*(iVar1 + 0x14) != *(iVar7 + 0x14))) ||
                        (*(iVar1 + 0x1d) != *(iVar7 + 0x1d))) || ((*(iVar7 + 0x20) == 0 && (*(iVar7 + 0xc) != 4)))) {
                        bVar3 = true;
                        break;
                    }
                    if ((*(iVar1 + 0xb4) != '\x01') || (*0x1a08c != '\x01')) goto code_r0x00014382;
                }
                bVar3 = true;
            }
code_r0x00014382:
            uVar8 = uVar8 + 4;
        } while (uVar8 < 8);
        *0x1a08c = '\0';
        if (*0x1a09c != param_2[4]) {
            bVar3 = true;
        }
        if (bVar3) {
            uVar8 = 0;
            do {
                if (*(uVar8 + 0x1a128) != 0) {
                    fcn.00014235();
                    *(uVar8 + 0x1a128) = 0;
                }
                uVar8 = uVar8 + 4;
            } while (uVar8 < 8);
        }
        iVar7 = fcn.0001ba18();
        if (iVar7 < 0) {
            iVar7 = -0x7ffffff9;
        }
        uVar8 = 0;
        iStack_14 = 0;
        do {
            iVar1 = *(uVar8 + 0x1a128);
            cVar4 = '\x01';
            if ((iVar1 == 0) || (iVar2 = *(uVar8 + 0x1a120), iVar2 == 0)) {
                if (*(uVar8 + 0x1a120) == 0) break;
code_r0x00014452:
                if ((iStack_14 == 0) && (*0x1a118 == '\0')) {
                    rdtsc();
                    fcn.000268b6();
                    rdtsc();
                }
                if (*(uVar8 + 0x1a120) != 0) {
                    iVar7 = fcn.000140c2(cVar4,iStack_14);
                    if (iVar7 < 0) {
                        iVar7 = -0x7ffffff9;
                    }
                    else if (cVar4 == '\x01') {
                        *(uVar8 + 0x1a128) = *(uVar8 + 0x1a120);
                    }
                    *(uVar8 + 0x1a120) = 0;
                }
            }
            else {
                if ((((*(iVar2 + 0x20) == 0) && (*(iVar2 + 0xc) != 4)) || (*(iVar2 + 0x10) != *(iVar1 + 0x10))) ||
                   (*(iVar2 + 0x14) != *(iVar1 + 0x14))) {
                    cVar4 = '\x01';
                    goto code_r0x00014452;
                }
                if ((*param_2 != iVar5) || (param_2[1] != iVar6)) {
                    cVar4 = '\0';
                    goto code_r0x00014452;
                }
            }
            uVar8 = uVar8 + 4;
            iStack_14 = iStack_14 + 1;
        } while (uVar8 < 8);
        *0x1a090 = *param_2;
        *0x1a094 = param_2[1];
        *0x1a09c = param_2[4];
        *0x1a098 = 0x20;
    }
    return iVar7;
}


/* fcn.00014b35 @ 0x14b35 */

uint __fastcall fcn.00014b35(int param_1,char param_2,uint *param_3)

{
    uint8_t uVar1;
    char *pcVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    uVar1 = *(param_1 + 3);
    *param_3 = 0;
    if (uVar1 != 0xffffffff) {
        do {
            pcVar2 = param_1 + 4;
            for (uVar3 = *(param_1 + 1); 3 < uVar3; uVar3 = uVar3 - uVar4) {
                uVar4 = pcVar2[2] + 3;
                if (uVar3 < uVar4) {
                    return 0x80000007;
                }
                if (*pcVar2 == param_2) {
                    *param_3 = pcVar2;
                    return 0;
                }
                pcVar2 = pcVar2 + uVar4;
            }
            param_1 = param_1 + *(param_1 + 1) + 5;
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar1 + 1);
    }
    return 0x80000007;
}


/* fcn.00013ed9 @ 0x13ed9 */

uint32_t __fastcall fcn.00013ed9(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = *(param_1 + 0x10);
    uVar3 = *0x1a108 * 2000;
    if (iVar1 == 1) {
        uVar2 = fcn.00016ed2();
    }
    else if (iVar1 == 2) {
        uVar2 = fcn.00019eb0();
    }
    else if (iVar1 == 3) {
        uVar2 = fcn.0001cd15();
    }
    else if (iVar1 == 4) {
        uVar2 = 0x28488;
    }
    else {
        if (iVar1 != 5) {
            return 0;
        }
        iVar1 = *(param_1 + 0x8c);
        if (*(iVar1 + 0x1c) == 0) {
            *(iVar1 + 0x1c) = 0x18;
        }
        if ((*(*(iVar1 + 0x1f8) + 6) & 3) == 0) {
            uVar2 = 10000000;
        }
        else {
            uVar2 = 20000000;
        }
        uVar2 = uVar2 / *(iVar1 + 0x1c);
    }
    if (uVar3 < uVar2) {
        return uVar3;
    }
    return uVar2;
}


/* fcn.00015125 @ 0x15125 */

int __fastcall fcn.00015125(int param_1,uint8_t *param_2)

{
    char cVar1;
    bool bVar2;
    bool bVar3;
    int iVar4;
    uint uStack_8;
    int iStack_4;
    
    iStack_4 = 0;
    bVar2 = false;
    uStack_8 = 0;
    bVar3 = false;
    iVar4 = -0x7ffffff2;
    if (param_2 == NULL) {
        return -0x7ffffff9;
    }
    if (((*(param_1 + 0x94) != NULL) && (**(param_1 + 0x94) == '\x01')) &&
       ((*(param_1 + 0x1c) == '\x01' || (*(param_1 + 0x1d) != '\0')))) {
        bVar3 = true;
        bVar2 = true;
    }
    if (*param_2 >> 4 == 1) {
        if (bVar2) {
            iVar4 = fcn.00014f9d();
        }
        else {
            iVar4 = fcn.00014bac(&uStack_8);
        }
        if (iVar4 == 0) {
            fcn.00014d32();
            return 0;
        }
        if (bVar3) {
            iVar4 = fcn.00015017();
        }
        else {
            iVar4 = fcn.00014e57(&uStack_8);
        }
        if (iVar4 == 0) {
            fcn.00014ee8();
        }
        if ((*(param_1 + 0x68) == 0) && (fcn.00014b35(&iStack_4), iStack_4 != 0)) {
            cVar1 = *(iStack_4 + 0xd);
            if (cVar1 == '\x1a') {
                *(param_1 + 0x68) = 0x1a;
            }
            else if (cVar1 == '\"') {
                *(param_1 + 0x68) = 0x22;
            }
            else if (cVar1 == '=') {
                *(param_1 + 0x68) = 0x3d;
            }
            else {
                *(param_1 + 0x68) = ((cVar1 == 'N') - 1 & 0xffffffd4) + 0x4e;
            }
        }
    }
    else if (*param_2 >> 4 == 2) {
        if (bVar2) {
            iVar4 = fcn.000150a7();
        }
        else {
            iVar4 = fcn.00014c4f(&uStack_8);
        }
        if (iVar4 == 0) {
            fcn.00014dc6();
            return 0;
        }
    }
    return iVar4;
}


/* fcn.00010b54 @ 0x10b54 */

int __fastcall fcn.00010b54(int param_1,uint param_2)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iStack_20;
    int iStack_1c;
    uint uStack_18;
    int iStack_14;
    uint32_t uStack_10;
    uchar uStack_c;
    
    iVar3 = 0;
    uStack_c = 0;
    iVar4 = 0;
    iStack_20 = 0;
    uVar5 = 0;
    iVar2 = -0x7ffffff2;
    iStack_14 = 0;
    uStack_10 = 0;
    iStack_1c = 0;
    if (*(param_1 + 0x10) == 1) {
        iStack_1c = *(param_1 + 0x8c);
    }
    uVar1 = **(param_1 + 0x20) >> 4;
    uStack_18 = param_2;
    if (uVar1 == 1) {
        iVar2 = fcn.00014b35(&iStack_20);
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((*(iStack_20 + 7) & 8) == 0) {
            if ((*(iStack_20 + 5) & 2) != 0) {
                uStack_c = 0x4b;
                goto code_r0x00010c16;
            }
            if (*(iStack_20 + 4) < '\0') goto code_r0x00010c11;
            if ((*(iStack_20 + 4) & 1) == 0) {
                if ((*(iStack_20 + 3) & 8) == 0) goto code_r0x00010c2a;
                iVar4 = 0x280;
                uVar5 = 0x1e0;
            }
            else {
                iVar4 = 800;
                uVar5 = 600;
            }
            uStack_c = 0x3c;
        }
        else {
            iVar4 = 0x500;
            uStack_c = 0x4b;
            uVar5 = 0x400;
        }
    }
    else {
        if (uVar1 != 2) goto code_r0x00010c2a;
code_r0x00010c11:
        uStack_c = 0x3c;
code_r0x00010c16:
        iVar4 = 0x400;
        uVar5 = 0x300;
    }
    iVar2 = 0;
    iStack_14 = iVar4;
    uStack_10 = uVar5;
code_r0x00010c2a:
    if (((*(param_1 + 0x10) == 1) && (*(iStack_1c + 0xa4) != '\0')) && ((*(iStack_1c + 0x1a) + iVar4 & 1) != 0)) {
        iVar3 = -0x80000000;
    }
    else {
        if (iVar2 == 0) {
            iVar3 = (iVar4 * 100) / uVar5 - 99;
        }
        if (*(param_1 + 0x68) != iVar3) {
            iStack_14 = 0x400;
            uStack_10 = 0x300;
            uStack_c = 0x3c;
            *(param_1 + 0x68) = 0x22;
        }
        iVar3 = fcn.000108ca();
    }
    return iVar3;
}


/* fcn.00010f57 @ 0x10f57 */

void __fastcall fcn.00010f57(int param_1,int param_2,uint32_t *param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    if (*(param_2 + 0x10) == 1) {
        iVar2 = *(param_2 + 0x8c);
    }
    if (*(param_2 + 0x28) == 1) {
        uVar1 = (*(param_1 + 4) & 0xfffffff0) << 4 | *(param_1 + 2);
        uVar3 = (*(param_1 + 7) & 0xfffffff0) << 4 | *(param_1 + 5);
        *param_3 = uVar1;
        *param_4 = uVar3;
        if (*(param_1 + 0x11) < '\0') {
            *param_4 = uVar3 * 2;
        }
        if ((*(param_2 + 0x10) == 1) && (*(iVar2 + 0xa4) != '\0')) {
            if ((*(iVar2 + 0x1a) + uVar1 & 1) == 0) {
                *param_3 = *(*(param_2 + 0x8c) + 0xa5) * uVar1;
            }
            else {
                *param_3 = 0xffffffff;
                *param_4 = 0xffffffff;
            }
        }
    }
    return;
}


/* fcn.000110d2 @ 0x110d2 */

void __fastcall fcn.000110d2(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    
    uVar5 = 0;
    iVar2 = *(param_1 + 0x20);
    if (iVar2 != -0x36) {
        uVar3 = (*(iVar2 + 0x3a) & 0xf0) << 4 | *(iVar2 + 0x38);
        uVar5 = uVar3;
        uVar4 = (*(iVar2 + 0x3d) & 0xf0) << 4 | *(iVar2 + 0x3b);
        if (uVar3 != 0) {
            if (uVar4 != 0) {
                uVar5 = (uVar5 * 100) / uVar4 - 99 & 0xffff;
            }
            if (uVar5 != 0) goto code_r0x00011161;
        }
        if ((*(iVar2 + 0x13) == '\x04') && (uVar1 = *(iVar2 + 0x15), uVar1 != 0)) {
            if (*(iVar2 + 0x16) != 0) {
                uVar5 = (uVar1 * 100) / *(iVar2 + 0x16) - 99 & 0xffff;
            }
            if ((uVar1 != 0) && (*(iVar2 + 0x16) == '\0')) {
                uVar5 = uVar1;
            }
        }
    }
code_r0x00011161:
    uVar6 = 0x1a;
    if (uVar5 != 0x1a) {
        if (uVar5 == 0x22) {
            *(param_1 + 0x68) = 0x22;
            goto code_r0x0001118e;
        }
        uVar6 = 0x3d;
        if (uVar5 != 0x3d) {
            uVar6 = 0x4e;
            if (uVar5 != 0x4e) {
                *(param_1 + 0x68) = 0;
                goto code_r0x0001118e;
            }
        }
    }
    *(param_1 + 0x68) = uVar6;
code_r0x0001118e:
    if (*(param_1 + 0x68) == 0) {
        *(param_1 + 0x68) = 0x22;
    }
    return;
}


/* fcn.00010c91 @ 0x10c91 */

uint __thiscall fcn.00010c91(int param_1,uint32_t param_2,int param_3)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uint uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iVar10;
    uint32_t uVar11;
    ulong uVar12;
    uint8_t uStack_2d;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    int iStack_24;
    
    iVar5 = param_3;
    iVar10 = 0;
    uStack_2d = 0;
    iStack_24 = 0;
    iVar2 = *(param_3 + 0x10);
    uStack_2c = 0;
    uStack_28 = 0;
    if (iVar2 == 1) {
        iVar10 = *(param_3 + 0x8c);
    }
    if (*(param_3 + 0x28) != 1) {
        return 0x8000000e;
    }
    uVar4 = *(param_1 + 0x23);
    uVar7 = 0x400;
    if ((uVar4 & 0x100) == 0) {
        if ((uVar4 & 0x200) == 0) {
            if ((uVar4 & 0x800) == 0) {
                if ((uVar4 & 1) == 0) {
                    if ((uVar4 & 0x20) == 0) goto code_r0x00010deb;
                    uVar7 = 0x280;
                    uVar11 = 0x1e0;
                }
                else {
                    uVar7 = 800;
                    uVar11 = 600;
                }
            }
            else {
                uVar7 = 0x400;
                uVar11 = 0x300;
            }
        }
        else {
            uVar11 = 0x300;
        }
    }
    else {
        uVar7 = 0x500;
        uVar11 = 0x400;
    }
    if ((iVar2 == 1) && (*(iVar10 + 0xa4) != '\0')) {
        if ((*(iVar10 + 0x1a) + uVar7 & 1) != 0) goto code_r0x00010deb;
    }
    iStack_24 = (uVar7 * 100) / uVar11 - 99;
    if (*(param_3 + 0x68) == iStack_24) {
        uVar12 = fcn.000108ca();
        if (-1 < uVar12) {
            uVar8 = **(uVar12 >> 0x20) * 10;
            if ((iVar2 == 1) && (*(iVar10 + 0xa4) != '\0')) {
                uStack_2d = *(iVar10 + 0xa5);
                uVar8 = uVar8 * uStack_2d;
            }
            if (uVar8 < param_2) {
                uStack_2c = uVar7;
                uStack_28 = uVar11;
            }
        }
    }
code_r0x00010deb:
    param_3 = -0x7ffffff2;
    uVar8 = 0;
    uVar7 = uStack_2c;
    uVar11 = uStack_28;
    do {
        uVar1 = *(param_1 + 0x26 + uVar8);
        if (uVar1 != 0) {
            uVar7 = uVar1 * 8 + 0xf8;
            uVar11 = *(uVar8 + 0x27 + param_1) >> 6;
            uVar9 = *(uVar11 * 8 + 0x16bb4);
            uVar3 = *(uVar11 * 8 + 0x16bb0);
            uVar11 = (uVar9 * uVar7) / uVar3;
            if ((((*(iVar5 + 0x10) != 1) || (*(iVar10 + 0xa4) == '\0')) || ((*(iVar10 + 0x1a) + uVar7 & 1) == 0)) &&
               ((uStack_2c < uVar7 || (uStack_28 < uVar11)))) {
                if ((uVar3 != 0) && (uVar9 != 0)) {
                    iStack_24 = (uVar3 * 100) / uVar9 - 99;
                }
                if (*(iVar5 + 0x68) == iStack_24) {
                    uVar12 = fcn.000108ca();
                    param_3 = uVar12;
                    if (-1 < param_3) {
                        uVar9 = **(uVar12 >> 0x20) * 10;
                        if ((*(iVar5 + 0x10) == 1) && (*(iVar10 + 0xa4) != '\0')) {
                            uVar9 = uVar9 * uStack_2d;
                        }
                        if (uVar9 < param_2) {
                            uStack_2c = uVar7;
                            uStack_28 = uVar11;
                            goto code_r0x00010f0c;
                        }
                    }
                    uVar7 = uStack_2c;
                    uVar11 = uStack_28;
                    goto code_r0x00010f0c;
                }
            }
            uVar7 = uStack_2c;
            uVar11 = uStack_28;
        }
code_r0x00010f0c:
        uVar8 = uVar8 + 2;
        if (0xf < uVar8) {
            if (((param_3 < 0) && (uVar7 == 0)) && (uVar11 == 0)) {
                *(iVar5 + 0x68) = 0x22;
            }
            uVar6 = fcn.000108ca();
            return uVar6;
        }
    } while( true );
}


/* fcn.00010fed @ 0x10fed */

int __fastcall fcn.00010fed(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    bool bVar5;
    uint8_t uStack_5;
    
    uStack_5 = 1;
    iVar4 = -0x7ffffff2;
    uVar1 = fcn.00013ed9();
    if ((*(param_1 + 0x10) == 1) && (*(*(param_1 + 0x8c) + 0xa4) != '\0')) {
        uStack_5 = *(*(param_1 + 0x8c) + 0xa5);
    }
    if (*(param_1 + 0x28) == 1) {
        uVar2 = *(param_1 + 0x24);
        uVar3 = 0x80;
        if (0x80 < uVar2) {
            do {
                if ((*(*(param_1 + 0x20) + uVar3) == 'p') && (iVar4 = fcn.00015125(), iVar4 == 0)) break;
                uVar3 = uVar3 + 0x80;
            } while (uVar3 < uVar2);
        }
    }
    else {
        if (*(param_1 + 0x28) != 3) {
            return -0x7ffffff2;
        }
        iVar4 = fcn.00015125();
    }
    bVar5 = iVar4 < 0;
    if (iVar4 == 0) {
        uVar2 = uStack_5 * *(param_1 + 0x2c);
        if ((((uVar2 != 0) && (uVar2 < uVar1 || uVar2 - uVar1 == 0)) && (*(param_1 + 0x30) < 0x1401)) &&
           (*(param_1 + 0x40) < 0x10e1)) {
            return 0;
        }
        iVar4 = -0x7ffffff2;
        bVar5 = true;
    }
    if (((bVar5) && (*(param_1 + 0x28) == 3)) && (iVar4 = fcn.00010b54(), -1 < iVar4)) {
        fcn.00010914();
    }
    return iVar4;
}


/* fcn.000113d8 @ 0x113d8 */

int __fastcall fcn.000113d8(int param_1)

{
    char *pcVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    uint16_t *puVar7;
    int iVar8;
    bool bVar9;
    uint8_t uStack_25;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint16_t *puStack_1c;
    uint8_t uStack_5;
    
    if (*(param_1 + 0x28) == 1) {
        iVar8 = fcn.00010fed();
        if (-1 < iVar8) {
            return iVar8;
        }
        iVar8 = *(param_1 + 0x20);
        uVar2 = fcn.00013ed9();
        uStack_20 = 0xffffffff;
        puVar7 = iVar8 + 0x36;
        uStack_24 = 0xffffffff;
        uVar3 = 0;
        iVar8 = -0x7ffffff2;
        uVar6 = 0;
        uVar5 = 1;
        pcVar1 = *(param_1 + 0x94);
        puStack_1c = NULL;
        bVar9 = false;
        if (((pcVar1 != NULL) && (*pcVar1 == '\x01')) && ((*(param_1 + 0x1c) == '\x01' || (*(param_1 + 0x1d) != '\0'))))
        {
            uVar3 = *(pcVar1 + 8) + 1;
            bVar9 = true;
            uVar6 = *(pcVar1 + 0xc) + 1;
        }
        if ((*(param_1 + 0x10) == 1) && (*(*(param_1 + 0x8c) + 0xa4) != '\0')) {
            uVar5 = *(*(param_1 + 0x8c) + 0xa5);
        }
        uStack_25 = 0;
        while( true ) {
            uVar4 = *puVar7 * uVar5 * 10;
            fcn.00010f57(&uStack_20,&uStack_24);
            if ((((!bVar9) || (uStack_20 == uVar3)) || (uStack_24 == uVar6)) &&
               (((uVar4 != 0 && (uVar4 <= uVar2)) && ((uStack_20 < 0x1401 && (uStack_24 < 0x10e1)))))) break;
            puVar7 = puVar7 + 9;
            uStack_25 = uStack_25 + 1;
            if (3 < uStack_25) {
code_r0x000112a7:
                fcn.000110d2();
                if (iVar8 == -0x7ffffff2) {
                    if (bVar9) {
                        return -0x7ffffff2;
                    }
                    iVar8 = fcn.00010c91(uVar2,param_1);
                }
                if (iVar8 == 0) {
                    uStack_20 = 0;
                    uStack_24 = 0;
                    fcn.00010f57(&uStack_20,&uStack_24);
                    fcn.00010914();
                }
                return iVar8;
            }
        }
        iVar8 = 0;
        puStack_1c = puVar7;
        goto code_r0x000112a7;
    }
    if (*(param_1 + 0x28) != 3) {
        return -0x7ffffff9;
    }
    uStack_5 = 1;
    iVar8 = -0x7ffffff2;
    uVar2 = fcn.00013ed9();
    if ((*(param_1 + 0x10) == 1) && (*(*(param_1 + 0x8c) + 0xa4) != '\0')) {
        uStack_5 = *(*(param_1 + 0x8c) + 0xa5);
    }
    if (*(param_1 + 0x28) == 1) {
        uVar3 = *(param_1 + 0x24);
        uVar6 = 0x80;
        if (0x80 < uVar3) {
            do {
                if (*(*(param_1 + 0x20) + uVar6) == 'p') {
                    puStack_1c = 0x11052;
                    iVar8 = fcn.00015125();
                    if (iVar8 == 0) break;
                }
                uVar6 = uVar6 + 0x80;
            } while (uVar6 < uVar3);
        }
    }
    else {
        if (*(param_1 + 0x28) != 3) {
            return -0x7ffffff2;
        }
        iVar8 = fcn.00015125();
    }
    bVar9 = iVar8 < 0;
    if (iVar8 == 0) {
        uVar3 = uStack_5 * *(param_1 + 0x2c);
        if ((((uVar3 != 0) && (uVar3 < uVar2 || uVar3 - uVar2 == 0)) && (*(param_1 + 0x30) < 0x1401)) &&
           (*(param_1 + 0x40) < 0x10e1)) {
            return 0;
        }
        iVar8 = -0x7ffffff2;
        bVar9 = true;
    }
    if (((bVar9) && (*(param_1 + 0x28) == 3)) && (iVar8 = fcn.00010b54(), -1 < iVar8)) {
        fcn.00010914();
    }
    return iVar8;
}


/* fcn.0001119b @ 0x1119b */

int __fastcall fcn.0001119b(int param_1)

{
    char *pcVar1;
    bool bVar2;
    uint8_t uVar3;
    uint16_t *puVar4;
    int iVar5;
    uint8_t uStack_25;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint16_t *puStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    iVar5 = *(param_1 + 0x20);
    iStack_4 = iVar5;
    uStack_10 = fcn.00013ed9();
    uStack_20 = 0xffffffff;
    puVar4 = iVar5 + 0x36;
    uStack_24 = 0xffffffff;
    uStack_18 = 0;
    iVar5 = -0x7ffffff2;
    uStack_14 = 0;
    uVar3 = 1;
    pcVar1 = *(param_1 + 0x94);
    puStack_1c = NULL;
    bVar2 = false;
    if (((pcVar1 != NULL) && (*pcVar1 == '\x01')) && ((*(param_1 + 0x1c) == '\x01' || (*(param_1 + 0x1d) != '\0')))) {
        uStack_18 = *(pcVar1 + 8) + 1;
        bVar2 = true;
        uStack_14 = *(pcVar1 + 0xc) + 1;
    }
    if ((*(param_1 + 0x10) == 1) && (*(*(param_1 + 0x8c) + 0xa4) != '\0')) {
        uVar3 = *(*(param_1 + 0x8c) + 0xa5);
    }
    uStack_8 = uVar3;
    uStack_25 = 0;
    while( true ) {
        uStack_c = *puVar4 * uStack_8 * 10;
        fcn.00010f57(&uStack_20,&uStack_24);
        if ((((!bVar2) || (uStack_20 == uStack_18)) || (uStack_24 == uStack_14)) &&
           (((uStack_c != 0 && (uStack_c <= uStack_10)) && ((uStack_20 < 0x1401 && (uStack_24 < 0x10e1)))))) break;
        puVar4 = puVar4 + 9;
        uStack_25 = uStack_25 + 1;
        if (3 < uStack_25) {
code_r0x000112a7:
            fcn.000110d2();
            if (iVar5 == -0x7ffffff2) {
                if (bVar2) {
                    return -0x7ffffff2;
                }
                iVar5 = fcn.00010c91(uStack_10,param_1);
            }
            if (iVar5 == 0) {
                uStack_20 = 0;
                uStack_24 = 0;
                fcn.00010f57(&uStack_20,&uStack_24);
                fcn.00010914();
            }
            return iVar5;
        }
    }
    iVar5 = 0;
    puStack_1c = puVar4;
    goto code_r0x000112a7;
}


/* fcn.00010818 @ 0x10818 */

uint __fastcall fcn.00010818(uint *param_1)

{
    uint uVar1;
    
    uVar1 = 0;
    if (*0x1a140 == 0 && *0x1a144 == 0) {
        *param_1 = 0;
        uVar1 = 0x80000003;
    }
    else {
        *param_1 = 0x1a160;
    }
    return uVar1;
}


/* fcn.00011407 @ 0x11407 */

uint __fastcall fcn.00011407(int param_1,int *param_2,int *param_3,uint *param_4)

{
    uint8_t uVar1;
    uint uVar2;
    int iVar3;
    
    if (((*(param_1 + 0x1d) == '\0') || (*(param_1 + 0x94) == NULL)) || (**(param_1 + 0x94) == '\0')) {
        uVar2 = 0x80000003;
    }
    else if (((*(param_1 + 0x98) == 4) || (iVar3 = fcn.000113d8(), iVar3 < 0)) || (iVar3 = fcn.000113d8(), iVar3 < 0))
    {
        uVar2 = 0x80000003;
    }
    else {
        uVar1 = *(*(param_1 + 0x94) + 4);
        iVar3 = *(param_1 + 0x40);
        *param_2 = *(*(param_1 + 0x94) + 3) * *(param_1 + 0x30);
        *param_3 = uVar1 * iVar3;
        *param_4 = 2;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001147e @ 0x1147e */

uint __fastcall fcn.0001147e(int param_1,int *param_2,int *param_3,uint *param_4)

{
    uint8_t uVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    
    iVar5 = *0x1a0d8;
    if ((param_1 == 0) || (*(param_1 + 0x1c) == '\x01')) {
        uVar3 = 0x80000007;
    }
    else {
        if (*(param_1 + 0x28) == 1) {
            iVar4 = fcn.00010fed();
            if (iVar4 < 0) {
                fcn.0001119b();
            }
        }
        else if (*(param_1 + 0x28) == 3) {
            fcn.00010fed();
        }
        if ((iVar5 == 4) &&
           (((*(param_1 + 0x10) == 2 || (*(param_1 + 0x10) == 4)) && (iVar5 = fcn.000108ca(), iVar5 == 0)))) {
            fcn.00010914();
        }
        iVar5 = *(param_1 + 0x30);
        iVar4 = *(param_1 + 0x10);
        iVar2 = *(param_1 + 0x40);
        *param_2 = iVar5;
        *param_4 = 1;
        *param_3 = iVar2;
        if ((iVar4 == 5) || (*(param_1 + 0x10) == 1)) {
            iVar4 = *(param_1 + 0x8c);
            uVar1 = *(iVar4 + 0x215);
            *param_3 = (iVar2 - *(iVar4 + 0x213)) - *(iVar4 + 0x212);
            *param_2 = (iVar5 - uVar1) - *(iVar4 + 0x214);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* section..text @ 0x10220 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint uVar1;
    uint uVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint *puVar6;
    uint *puVar7;
    uint8_t uVar8;
    
    //[00] -r-x section size 92288 named .text
    uVar8 = 0;
    puVar6 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar6)) {
        puVar7 = param_1 + (param_3 - 1);
        uVar8 = 1;
    }
    else {
        uVar4 = -param_1 & 0xf;
        puVar7 = param_1;
        if (uVar4 != 0) {
            if (param_3 < uVar4) {
                uVar4 = param_3;
            }
            param_3 = param_3 - uVar4;
            for (; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = *param_2;
                param_2 = param_2 + 1;
                puVar7 = puVar7 + 1;
            }
        }
        uVar5 = param_3 & 0xf;
        uVar4 = param_3 >> 4;
        param_3 = uVar5;
        puVar6 = param_2;
        if (uVar4 != 0) {
            do {
                uVar1 = param_2[1];
                uVar2 = param_2[2];
                uVar3 = param_2[3];
                *puVar7 = *param_2;
                puVar7[1] = uVar1;
                puVar7[2] = uVar2;
                puVar7[3] = uVar3;
                param_2 = param_2 + 4;
                puVar7 = puVar7 + 4;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            puVar6 = param_2;
        }
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + uVar8 * -2 + 1;
        puVar7 = puVar7 + uVar8 * -2 + 1;
    }
    return param_1;
}


/* fcn.00010290 @ 0x10290 */

int fcn.00010290(char *param_1,char *param_2,int param_3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = param_1;
        pcVar4 = param_2;
        if (param_3 == 0) break;
        param_3 = param_3 + -1;
        pcVar4 = param_2 + 1;
        pcVar3 = param_1 + 1;
        cVar2 = *param_2;
        cVar1 = *param_1;
        param_1 = pcVar3;
        param_2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.000187eb @ 0x187eb */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.000187eb(int param_1,uint *param_2,char param_3)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    bool bVar7;
    
    if (param_1 != 0) {
        **param_2 = *(param_1 + 3);
        uVar6 = 8;
        if (*(param_1 + 4) != 0) {
            uVar1 = *(param_1 + 4) + 8;
            do {
                if (uVar1 < uVar6) {
                    return 0x80000002;
                }
                if (param_3 == *(param_1 + uVar6)) {
                    uVar4 = uVar6 + 1;
                    uVar3 = CONCAT31(CONCAT21(CONCAT11(*(param_1 + 4 + uVar6),*(param_1 + 2 + uVar4)),
                                              *(param_1 + 1 + uVar4)),*(param_1 + uVar4));
                    uVar5 = uVar6 + 5;
                    if ((0xfffffffe < uVar6) + (0xfffffffb < uVar4) + CARRY4(uVar3,uVar5) != '\0') {
                        return 0x80000002;
                    }
                    if (uVar1 < uVar3 + uVar5) {
                        return 0x80000002;
                    }
                    if (param_1 + uVar5 != NULL) {
                        uVar2 = *(param_1 + uVar5);
                        if (0xb < uVar2) {
                            return 0x80000002;
                        }
                        if (uVar2 != 0) {
                            switch(uVar2) {
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 7:
                            case 8:
                            case 9:
                            case 10:
                            case 0xb:
    //WARNING: Bad instruction - Truncating control flow here
                                halt_baddata();
                            default:
                                return 0x80000002;
                            }
                        }
                    }
                    return 0;
                }
                bVar7 = 0xfffffffe < uVar6;
                uVar5 = uVar6 + 1;
                uVar3 = CONCAT31(CONCAT21(CONCAT11(*(param_1 + 4 + uVar6),*(param_1 + 2 + uVar5)),
                                          *(param_1 + 1 + uVar5)),*(param_1 + uVar5));
                uVar4 = uVar3 + 4;
                uVar6 = uVar5 + uVar4;
            } while (bVar7 + (0xfffffffb < uVar3) + CARRY4(uVar5,uVar4) == '\0');
        }
    }
    return 0x80000002;
}


/* fcn.0001188a @ 0x1188a */

void __fastcall fcn.0001188a(int param_1,int param_2)

{
    char cVar1;
    uint8_t uVar2;
    
    *(param_1 + 1) = 0x101;
    uVar2 = *(param_2 + 8);
    *(param_1 + 0x17) = 1;
    *(param_1 + 0x16) = uVar2 & 1;
    *(param_1 + 0x14) = *(param_2 + 0xb);
    *(param_1 + 10) = *(param_2 + 7) + '\b';
    if (*(param_2 + 3) < 4) {
        if (*(param_2 + 3) < 2) {
            if (*(param_2 + 3) != 0) {
                *(param_1 + 9) = 1;
            }
        }
        else {
            *(param_1 + 9) = 2;
        }
    }
    else {
        *(param_1 + 9) = 4;
    }
    *(param_1 + 8) = *(param_2 + 2) + '\x01';
    uVar2 = *(param_2 + 1) & 3;
    if ((*(param_2 + 1) & 3) == 0) {
        *(param_1 + 4) = 0x2000;
    }
    else if (uVar2 == 1) {
        *(param_1 + 4) = 0x8000;
    }
    else if (uVar2 == 2) {
        *(param_1 + 4) = 0x20000;
    }
    else if (uVar2 == 3) {
        *(param_1 + 4) = 0x80000;
    }
    if ((*(param_2 + 10) & 4) == 0) {
        if ((*(param_2 + 10) & 2) != 0) {
            *(param_1 + 0xc) = 2;
        }
    }
    else {
        *(param_1 + 0xc) = 4;
    }
    cVar1 = *(param_2 + 9);
    if (cVar1 == '\0') {
        *(param_1 + 0x10) = 0x60;
    }
    else {
        if (cVar1 == '\x01') {
            *(param_1 + 0x10) = 0x80;
            return;
        }
        if (cVar1 == '\x02') {
            *(param_1 + 0x10) = 0xa0;
            return;
        }
        if (cVar1 == '\x03') {
            *(param_1 + 0x10) = 0xc0;
            return;
        }
        if (cVar1 == '\x04') {
            *(param_1 + 0x10) = 0xf0;
            return;
        }
    }
    return;
}


/* fcn.00011309 @ 0x11309 */

void __fastcall fcn.00011309(int param_1,uint32_t *param_2)

{
    *(param_1 + 0x2c) = *param_2;
    *(param_1 + 0x30) = param_2[1];
    *(param_1 + 0x40) = param_2[3];
    *(param_1 + 0x34) = *(param_2 + 6);
    *(param_1 + 0x44) = *(param_2 + 0xe);
    *(param_1 + 0x38) = param_2[2];
    *(param_1 + 0x48) = param_2[4];
    *(param_1 + 0x3c) = *(param_2 + 10);
    *(param_1 + 0x4c) = *(param_2 + 0x12);
    *(param_1 + 0x50) = param_2[5];
    *(param_1 + 0x54) = *(param_2 + 0x16);
    *(param_1 + 0x58) = 0;
    *(param_1 + 0x60) = 1;
    *(param_1 + 0x5c) = 1;
    if ((param_2[6] & 0x80) != 0) {
        *(param_1 + 0x5c) = 2;
    }
    if ((param_2[6] & 0x40) != 0) {
        *(param_1 + 0x60) = 2;
    }
    if ((((((*param_2 < 0xa0000) && (param_2[1] < 0x1000)) && (param_2[3] < 0x1000)) &&
         ((*(param_2 + 6) < 0x1000 && (*(param_2 + 0xe) < 0x1000)))) &&
        ((param_2[2] < 0x400 && ((param_2[4] < 0x40 && (*(param_2 + 10) < 0x400)))))) &&
       ((*(param_2 + 0x12) < 0x40 && ((param_2[5] < 0x1000 && (*(param_2 + 0x16) < 0x1000)))))) {
        *(param_1 + 100) = 1;
        return;
    }
    *(param_1 + 100) = 2;
    return;
}


/* fcn.00011973 @ 0x11973 */

void __cdecl fcn.00011973(int32_t arg_20h)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int in_ECX;
    uint8_t uVar4;
    
    uVar4 = 0;
    iVar1 = *(in_ECX + 0x8c);
    iVar2 = fcn.00010818();
    if (-1 < iVar2) {
        if (*(in_ECX + 0x28) == 1) {
            if (*(in_ECX + 0x20) != 0) {
                iVar3 = *(in_ECX + 0x20) + 8;
                iVar2 = iVar1 + 0x20;
                if (iVar2 != iVar3) {
                    section..text(iVar2,iVar3,10);
                }
                do {
                    iVar3 = *(in_ECX + 0x20) + 0x3b + uVar4 * 0x42;
                    if ((iVar2 == iVar3) || (iVar3 = fcn.00010290(iVar2,iVar3,10), iVar3 == 0)) {
                        *(iVar1 + 0x20d) = uVar4;
                        return;
                    }
                    iVar3 = *(in_ECX + 0x20) + uVar4 * 0x42 + 0x3b;
                    if ((iVar2 == iVar3) || (iVar3 = fcn.00010290(iVar2,iVar3,8), iVar3 == 0)) {
                        *(iVar1 + 0x20d) = uVar4;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < 0x10);
                if (*(iVar1 + 0x20d) == -1) {
                    *(iVar1 + 0x20d) = 0;
                }
            }
        }
        else {
            *(iVar1 + 0x20d) = 0;
        }
    }
    return;
}


/* fcn.000187ab @ 0x187ab */

uint __fastcall fcn.000187ab(uint8_t param_1)

{
    uint32_t uVar1;
    uchar uVar2;
    
    uVar2 = 0;
    uVar1 = param_1;
    if (uVar1 != 0) {
        if (uVar1 == 1) {
            uVar2 = 1;
            uVar1 = 0;
        }
        else if (uVar1 == 2) {
            uVar2 = 2;
            uVar1 = 0;
        }
        else if (uVar1 == 3) {
            uVar2 = 9;
            uVar1 = 0;
        }
        else if (uVar1 == 4) {
            uVar2 = 10;
            uVar1 = 0;
        }
        else if (uVar1 == 5) {
            uVar2 = 0xb;
            uVar1 = 0;
        }
        else {
            uVar1 = uVar1 - 6;
            if (uVar1 == 0) {
                uVar2 = 0xc;
            }
        }
    }
    return CONCAT31(uVar1 >> 8,uVar2);
}


/* fcn.0001177f @ 0x1177f */

void __fastcall fcn.0001177f(uint *param_1,uint16_t *param_2)

{
    uint16_t uVar1;
    
    param_1[0x23] = 0;
    *param_1 = 0x56454444;
    param_1[3] = 3;
    uVar1 = *param_2;
    if (uVar1 < 0x21) {
        if (uVar1 == 0x20) {
            param_1[6] = 2;
            return;
        }
        if (uVar1 == 1) {
            param_1[6] = 5;
            return;
        }
        if (uVar1 == 2) {
            param_1[6] = 4;
            return;
        }
        if (uVar1 == 4) {
            param_1[6] = 0;
            return;
        }
        if (uVar1 == 0x10) {
            param_1[6] = 3;
            return;
        }
    }
    else if (uVar1 == 0x40) {
        param_1[6] = 1;
    }
    else {
        if (uVar1 == 0x100) {
            param_1[6] = 6;
            return;
        }
        if (uVar1 == 0x200) {
            param_1[6] = 7;
            return;
        }
    }
    return;
}


/* fcn.00011806 @ 0x11806 */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.00011806(uchar param_1)

{
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return 0;
    }
}


/* fcn.0001223d @ 0x1223d */

void __fastcall fcn.0001223d(int param_1,int param_2)

{
    int iVar1;
    uchar uVar2;
    uint8_t uVar3;
    int iVar4;
    uchar *puVar5;
    int iStack_20;
    uchar auStack_1c [28];
    
    iVar4 = fcn.00010818();
    if (iVar4 < 0) {
        return;
    }
    iVar4 = fcn.0001354b();
    *(param_1 + 0x8c) = iVar4;
    if (iVar4 == 0) {
        return;
    }
    *(param_1 + 0x90) = 0x1a0;
    param_2 = param_2 * 0x27;
    uVar2 = *(*(iStack_20 + 0x10) + 0x1b + param_2);
    if ((*0x1a0d8 != 1) && (uVar2 = 0, *0x1a0d8 - 2U < 2)) {
        uVar2 = fcn.000187ab();
    }
    *(iVar4 + 2) = uVar2;
    *(iVar4 + 1) = *(*(iStack_20 + 0x10) + 0x21 + param_2);
    *(iVar4 + 7) = *(*(iStack_20 + 0x10) + 0xf + param_2) & 0x1f;
    *(iVar4 + 8) = *(*(iStack_20 + 0x10) + 0xf + param_2) >> 5;
    *(iVar4 + 0x18) = *(*(iStack_20 + 0x10) + 0x2e + param_2) & 7;
    *(iVar4 + 3) = *(*(iStack_20 + 8) + 7) >> 3 & 1;
    *(iVar4 + 4) = *(*(iStack_20 + 8) + 7) >> 5 & 1;
    *(iVar4 + 9) = *(*(iStack_20 + 8) + 4) >> 7;
    *(iVar4 + 10) = *(*(iStack_20 + 0x10) + 0x1f + param_2) & 1;
    *(iVar4 + 0xb) = *(*(iStack_20 + 0x10) + 0xe + param_2) >> 6 & 1;
    *(iVar4 + 0xc) = *(*(iStack_20 + 0x10) + 0xd + param_2) >> 6 & 1;
    *(iVar4 + 0xd) = *(*(iStack_20 + 0x10) + 0xe + param_2) & 0x3f;
    uVar3 = *(*(iStack_20 + 0x10) + 0xd + param_2);
    *(iVar4 + 0xf) = 0;
    *(iVar4 + 0xe) = uVar3 & 0x3f;
    *(iVar4 + 0x14) = *(*(iStack_20 + 0x10) + 0x1f + param_2) >> 1 & 1;
    *(iVar4 + 0x15) = *(*(iStack_20 + 0x10) + 0x1f + param_2) >> 2 & 1;
    if (0xf3 < *0x1a138) {
        uVar3 = *(*(iStack_20 + 0x10) + 0x1f + param_2) >> 6;
        *(iVar4 + 0x19) = uVar3;
        if (uVar3 == 0) {
            *(iVar4 + 0x19) = 1;
            goto code_r0x00012396;
        }
        if (uVar3 == 1) {
            *(iVar4 + 0x19) = 2;
            goto code_r0x00012396;
        }
    }
    *(iVar4 + 0x19) = 4;
code_r0x00012396:
    if (((*(param_1 + 0x10) == 2) || (*(param_1 + 0x10) == 4)) && (iVar1 = *(param_1 + 0x14), 3 < iVar1)) {
        if (iVar1 == 4) {
            *(iVar4 + 1) = 0x60;
        }
        else if (iVar1 == 5) {
            *(iVar4 + 1) = 0x70;
        }
        else if (iVar1 == 6) {
            *(iVar4 + 1) = 0x80;
        }
        else if (iVar1 == 7) {
            *(iVar4 + 1) = 0x90;
        }
    }
    if ((*(param_1 + 0x10) == 2) && (*(*(iStack_20 + 0x10) + 10 + param_2) == 0x60d6)) {
        *(iVar4 + 0xf) = 1;
    }
    *(iVar4 + 0x16) = *(*(iStack_20 + 0x10) + 0x29 + param_2) & 1;
    uVar3 = *(*(iStack_20 + 0x10) + 0x29 + param_2) >> 1 & 1;
    *(iVar4 + 0x17) = uVar3;
    if (uVar3 != 0) {
        *(iVar4 + 0x16) = 1;
    }
    *(iVar4 + 0x24) = 0;
    *(iVar4 + 0x40) = (*(*(iStack_20 + 0x10) + 0x12 + param_2) ^ 0xff) & 1;
    puVar5 = *(iStack_20 + 0x40) + 0x1c5 + *(param_1 + 0x18) * 0x1c;
    if (auStack_1c != puVar5) {
        section..text(auStack_1c,puVar5,0x1c);
    }
    fcn.00011309();
    return;
}


/* fcn.00011a3a @ 0x11a3a */

void __fastcall fcn.00011a3a(int param_1,int param_2)

{
    uint32_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint8_t *puVar4;
    int16_t *piVar5;
    int16_t *piVar6;
    uint32_t uVar7;
    uchar *puVar8;
    uint8_t *puVar9;
    int iVar10;
    uint8_t uVar11;
    uint32_t uVar12;
    int iStack_28;
    uchar auStack_1c [28];
    
    iVar3 = fcn.00010818();
    if (-1 < iVar3) {
        puVar4 = fcn.0001354b();
        *(param_1 + 0x8c) = puVar4;
        if (puVar4 != NULL) {
            *(param_1 + 0x90) = 0x21c;
            puVar4[8] = *(*(iStack_28 + 0x10) + 0x1f + param_2 * 0x27) >> 1 & 1;
            if (*(param_1 + 0x18) == 0) {
                uVar11 = *(*(iStack_28 + 0x1c) + 3);
            }
            else {
                uVar11 = *(*(iStack_28 + 0x1c) + 4);
            }
            piVar5 = fcn.0001354b();
            if (piVar5 != NULL) {
                uVar12 = uVar11;
                *(puVar4 + 0x1f8) = piVar5;
                piVar6 = *(iStack_28 + 0x30) + 3 + uVar12 * 0x7a;
                if (piVar5 != piVar6) {
                    section..text(piVar5,piVar6,0x7a);
                }
                iVar3 = fcn.0001354b();
                if (iVar3 != 0) {
                    *(puVar4 + 0x200) = iVar3;
                    iVar10 = *(iStack_28 + 0x30) + 0x2df + uVar12 * 10;
                    if (iVar3 != iVar10) {
                        section..text(iVar3,iVar10,10);
                    }
                    iVar3 = fcn.0001354b();
                    if (iVar3 != 0) {
                        *(puVar4 + 0x204) = iVar3;
                        iVar10 = *(iStack_28 + 0x30) + uVar12 * 4 + 0x31b;
                        if (iVar3 != iVar10) {
                            section..text(iVar3,iVar10,4);
                        }
                        if ((*(iStack_28 + 0x34) != 0) && (*piVar5 == 0)) {
                            iVar3 = fcn.0001354b();
                            *(puVar4 + 0x208) = iVar3;
                            if (iVar3 == 0) {
                                return;
                            }
                            iVar3 = fcn.000187eb(uVar11);
                            if (iVar3 < 0) {
                                return;
                            }
                        }
                        if (*0x1a0c8 == 1) {
                            puVar4[0xc] = 1;
                        }
                        uVar7 = *(piVar5 + 1) >> 10 & 0xf;
                        if (uVar7 != 0) {
                            if (uVar7 < 4) {
                                puVar4[0x1c] = 0x12;
                                puVar4[0x1d] = 0;
                                puVar4[0x1e] = 0;
                                puVar4[0x1f] = 0;
                            }
                            else if (uVar7 == 4) {
                                puVar4[0x1c] = 0x18;
                                puVar4[0x1d] = 0;
                                puVar4[0x1e] = 0;
                                puVar4[0x1f] = 0;
                            }
                            else if (uVar7 == 5) {
                                puVar4[0x1c] = 0x1e;
                                puVar4[0x1d] = 0;
                                puVar4[0x1e] = 0;
                                puVar4[0x1f] = 0;
                            }
                            else if (uVar7 == 6) {
                                puVar4[0x1c] = 0x24;
                                puVar4[0x1d] = 0;
                                puVar4[0x1e] = 0;
                                puVar4[0x1f] = 0;
                            }
                        }
                        uVar2 = *(*(iStack_28 + 0x10) + 0x12 + param_2 * 0x27) >> 1 & 1;
                        puVar4[0xa8] = uVar2;
                        if (uVar2 != 0) {
                            fcn.0001188a();
                            *(puVar4 + 0x1c) = *(puVar4 + 0xb8) >> 4;
                        }
                        if (*(*(iStack_28 + 4) + 0x10) < 0xd0) {
                            puVar4[0x1a] = 0;
                        }
                        else {
                            puVar4[0x1a] = *(*(iStack_28 + 0x20) + 0x505 + uVar12);
                        }
                        uVar7 = *(*(iStack_28 + 0x1c) + 0x1d) >> (uVar11 * '\x02' & 0x1f) & 3;
                        if (uVar7 == 0) {
                            puVar4[4] = 0;
                            puVar4[5] = 0;
                            puVar4[6] = 0;
                            puVar4[7] = 0;
                        }
                        else if (uVar7 == 1) {
                            puVar4[4] = 0x5a;
                            puVar4[5] = 0;
                            puVar4[6] = 0;
                            puVar4[7] = 0;
                        }
                        else if (uVar7 == 2) {
                            puVar4[4] = 0xb4;
                            puVar4[5] = 0;
                            puVar4[6] = 0;
                            puVar4[7] = 0;
                        }
                        else if (uVar7 == 3) {
                            puVar4[4] = 0xe;
                            puVar4[5] = 1;
                            puVar4[6] = 0;
                            puVar4[7] = 0;
                        }
                        puVar8 = *(iStack_28 + 0x40) + 5 + uVar12 * 0x1c;
                        if (auStack_1c != puVar8) {
                            section..text(auStack_1c,puVar8,0x1c);
                        }
                        fcn.00011309();
                        puVar9 = *(iStack_28 + 0x20) + 0x3b + uVar12 * 0x42;
                        if (puVar4 + 0x20 != puVar9) {
                            section..text(puVar4 + 0x20,puVar9,10);
                        }
                        iVar3 = uVar12 * 6;
                        puVar4[0x32] = *(iVar3 + 4 + *(iStack_28 + 0x24)) & 3;
                        puVar4[0x33] = *(iVar3 + 4 + *(iStack_28 + 0x24)) & 4;
                        puVar4[0x34] = *(uVar12 + 0x74 + *(iStack_28 + 0x24)) & 0xf;
                        puVar4[0x35] = *(uVar12 + 0x74 + *(iStack_28 + 0x24)) >> 4;
                        *(puVar4 + 0x38) = *(iVar3 + 5 + *(iStack_28 + 0x24));
                        *(puVar4 + 0x3c) = *(*(iStack_28 + 0x24) + 0x84 + uVar12 * 4);
                        *(puVar4 + 0x40) = *(*(iStack_28 + 0x24) + 0xc4 + uVar12 * 4);
                        uVar7 = (1 << (*(uVar12 + 0x104 + *(iStack_28 + 0x24)) & 0x1f)) - 1;
                        puVar4[0x2c] = 0;
                        puVar4[0x2d] = 0;
                        puVar4[0x2e] = 0;
                        puVar4[0x2f] = 0;
                        *(puVar4 + 0x44) = uVar7;
                        puVar4[0x31] = 0;
                        if (uVar7 < *(puVar4 + 0x3c)) {
                            *(puVar4 + 0x3c) = uVar7;
                        }
                        uVar1 = *(puVar4 + 0x40);
                        if (uVar7 < uVar1) {
                            *(puVar4 + 0x40) = uVar7;
                        }
                        else if (*(puVar4 + 0x3c) < uVar1) {
                            *(puVar4 + 0x3c) = uVar1;
                        }
                        puVar4[9] = *(*(iStack_28 + 0x1c) + 0xb) >> (uVar11 & 0x1f) & 1;
                        *puVar4 = *(*(iStack_28 + 8) + 4) >> 6 & 1;
                        puVar4[0x213] = *(*(iStack_28 + 0x20) + 0x516 + uVar12 * 4);
                        puVar4[0x212] = *(*(iStack_28 + 0x20) + 0x515 + uVar12 * 4);
                        puVar4[0x214] = *(*(iStack_28 + 0x20) + 0x517 + uVar12 * 4);
                        puVar4[0x215] = *(*(iStack_28 + 0x20) + 0x518 + uVar12 * 4);
                        puVar4[0x210] = *(*(iStack_28 + 0x20) + 0x555) >> (uVar11 & 0x1f) & 1;
                        puVar9 = *(iStack_28 + 0x20) + 0x423 + uVar12 * 0xd;
                        if (puVar4 + 0xd != puVar9) {
                            section..text(puVar4 + 0xd,puVar9,0xd);
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00013563 @ 0x13563 */

void __fastcall fcn.00013563(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00013523();
    if ((iVar1 != 0) && (param_1 != 0)) {
        fcn.00013385(param_1);
    }
    return;
}


/* fcn.00013385 @ 0x13385 */

int __fastcall fcn.00013385(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000129c3 @ 0x129c3 */

int __fastcall fcn.000129c3(int param_1)

{
    int iVar1;
    uint uVar2;
    int iVar3;
    
    iVar3 = 0;
    if ((param_1 != 0) && (iVar3 = fcn.00013563(), iVar3 != 0)) {
        if (*(param_1 + 0x20) != 0) {
            iVar1 = fcn.00013563();
            *(iVar3 + 0x20) = iVar1;
            if (iVar1 == 0) {
                return iVar3;
            }
        }
        if (*(param_1 + 0x8c) != 0) {
            iVar1 = fcn.00013563();
            *(iVar3 + 0x8c) = iVar1;
            if (iVar1 == 0) {
                return iVar3;
            }
        }
        if ((*(param_1 + 0x94) != NULL) && (**(param_1 + 0x94) == '\x01')) {
            uVar2 = fcn.00013563();
            *(iVar3 + 0x94) = uVar2;
        }
    }
    return iVar3;
}


/* fcn.00014508 @ 0x14508 */

int __fastcall fcn.00014508(int param_1)

{
    int iVar1;
    
    iVar1 = *(param_1 + 0x10);
    if (iVar1 == 1) {
        if (*0x1a0b9 == '\x01') {
            fcn.00010839();
        }
        if (*0x16d78 != 1) {
            return -0x7ffffff2;
        }
        iVar1 = fcn.000182ae();
    }
    else {
        if (iVar1 != 5) {
            if ((iVar1 != 2) && (iVar1 != 4)) {
                if (iVar1 != 3) {
                    return -0x7ffffff2;
                }
                iVar1 = fcn.0001db4a();
                return iVar1;
            }
            iVar1 = fcn.00019873();
            return iVar1;
        }
        if (*0x16d78 != 1) {
            return -0x7ffffff2;
        }
        iVar1 = fcn.0001f30d();
    }
    if (-1 < iVar1) {
        return iVar1;
    }
    return iVar1;
}


/* fcn.0001760a @ 0x1760a */

int __fastcall fcn.0001760a(int param_1)

{
    int iVar1;
    int iVar2;
    uint uStack_4;
    
    iVar1 = *(param_1 + 0x8c);
    uStack_4 = param_1;
    iVar2 = fcn.00023aaa(8,1,0,iVar1 + 0x20c);
    if (-1 < iVar2) {
        iVar2 = fcn.00023aaa(8,1,0,iVar1 + 0x20e);
        if (-1 < iVar2) {
            iVar2 = fcn.00023aaa(8,1,0,&uStack_4 + 3);
            *(iVar1 + 0x216) = uStack_4._3_1_;
            if (-1 < iVar2) {
                iVar2 = fcn.0001714f();
                if (-1 < iVar2) {
                    if ((*(iVar1 + 0xa4) == '\0') ||
                       ((*(*(param_1 + 0x8c) + 0xa6) != '\x01' && (*(*(param_1 + 0x8c) + 0xa5) != '\x04')))) {
                        iVar2 = fcn.00023aaa(8,1,0,iVar1 + 0x8a);
                        if (-1 < iVar2) {
                            iVar2 = fcn.00023aaa(8,1,0,iVar1 + 0x8b);
                        }
                    }
                    else {
                        iVar2 = -0x7ffffffd;
                    }
                }
            }
        }
    }
    fcn.0001b031();
    return iVar2;
}


/* fcn.00011de2 @ 0x11de2 */

//WARNING: Variable defined which should be unmapped: var_8h

void __fastcall fcn.00011de2(int param_1)

{
    int *piVar1;
    uint8_t uVar2;
    int16_t iVar3;
    uint8_t *puVar4;
    int32_t iVar5;
    uint8_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    iVar5 = var_8h;
    puVar4 = *(param_1 + 0x8c);
    if ((*(param_1 + 0x10) == 1) && (puVar4[0x20d] == 0xff)) {
        fcn.00011973(var_8h);
    }
    uVar2 = puVar4[0x20d];
    iVar7 = fcn.00010818();
    if (-1 < iVar7) {
        uVar12 = uVar2;
        uVar8 = *(*(var_8h + 0x18) + 0xa3) >> (uVar2 * '\x02' & 0x1f);
        uVar6 = uVar8 & 3;
        if ((uVar8 & 3) == 0) {
            puVar4[0x1c] = 0x12;
            puVar4[0x1d] = 0;
            puVar4[0x1e] = 0;
            puVar4[0x1f] = 0;
        }
        else if (uVar6 == 1) {
            puVar4[0x1c] = 0x18;
            puVar4[0x1d] = 0;
            puVar4[0x1e] = 0;
            puVar4[0x1f] = 0;
        }
        else if (uVar6 == 2) {
            puVar4[0x1c] = 0x1e;
            puVar4[0x1d] = 0;
            puVar4[0x1e] = 0;
            puVar4[0x1f] = 0;
        }
        else if (uVar6 == 3) {
            puVar4[0x1c] = 0x24;
            puVar4[0x1d] = 0;
            puVar4[0x1e] = 0;
            puVar4[0x1f] = 0;
        }
        iVar7 = uVar12 * 10;
        puVar4[0x60] = *(*(var_8h + 0x18) + 0xcd) >> (uVar2 & 0x1f) & 1;
        *(puVar4 + 100) = *(iVar7 + 3 + *(var_8h + 0x18));
        *(puVar4 + 0x68) = *(iVar7 + 5 + *(var_8h + 0x18));
        *(puVar4 + 0x6c) = *(iVar7 + 7 + *(var_8h + 0x18));
        *(puVar4 + 0x70) = *(iVar7 + 9 + *(var_8h + 0x18));
        *(puVar4 + 0x74) = *(iVar7 + 0xb + *(var_8h + 0x18));
        *(puVar4 + 0x78) = *(*(var_8h + 0x18) + 0xdb + uVar12 * 4);
        *(puVar4 + 0x7c) = *(*(var_8h + 0x18) + 0xdd + uVar12 * 4);
        puVar4[0x217] = *(*(var_8h + 0x28) + 0x1b) >> (uVar2 & 0x1f) & 1;
        piVar1 = var_8h + 0x18;
        uVar8 = *(*piVar1 + 0xd3);
        var_8h._0_1_ = uVar12 << 2;
        uVar9 = uVar8;
        uVar11 = 0;
        if ((uVar12 << 2 & 0x20) == 0) {
            uVar9 = *(*piVar1 + 0xcf);
            uVar11 = uVar8;
        }
        puVar4[0x80] = (uVar9 >> (var_8h & 0x1f) | uVar11 << 0x20 - (var_8h & 0x1f)) & 0xf;
        if ((*(*(iVar5 + 0x18) + 0xd7) >> (uVar2 & 0x1f) & 1) == 0) {
            puVar4[0x81] = 0;
        }
        else {
            puVar4[0x81] = 1;
        }
        if (*(*(iVar5 + 4) + 0x10) < 199) {
            puVar4[0x87] = 0;
        }
        else {
            if ((*(*(iVar5 + 0x18) + 0x11b) >> (uVar2 & 0x1f) & 1) == 0) {
                puVar4[0x87] = 0;
            }
            else {
                puVar4[0x87] = 1;
            }
            if (puVar4[0x87] == 1) {
                puVar4[0x88] = *(uVar12 + 0x11d + *(iVar5 + 0x18)) & 0xf;
                puVar4[0x89] = *(uVar12 + 0x11d + *(iVar5 + 0x18)) >> 4;
            }
        }
        iVar7 = uVar12 * 2;
        if (puVar4[0x81] == 1) {
            *(puVar4 + 0x82) = *(iVar7 + 0x2ef + *(iVar5 + 0x18));
            puVar4[0x84] = *(iVar7 + 0xa7 + *(iVar5 + 0x18)) >> 4;
            puVar4[0x85] = *(iVar7 + 0xa8 + *(iVar5 + 0x18)) & 0xf;
            puVar4[0x86] = *(iVar7 + 0xa7 + *(iVar5 + 0x18)) >> 0xc;
            uVar6 = puVar4[0x84];
            if (uVar6 == 0) {
                puVar4[0x84] = 1;
            }
            else if (uVar6 == 1) {
                puVar4[0x84] = 2;
            }
            else if (uVar6 == 3) {
                puVar4[0x84] = 4;
            }
        }
        if ((*0x1a138 < 0xf4) || (iVar3 = *(iVar7 + 0x30f + *(iVar5 + 0x18)), *(puVar4 + 0xa0) = iVar3, iVar3 == 0)) {
            puVar4[0xa0] = 0x34;
            puVar4[0xa1] = 0x9e;
        }
        if (*(*(iVar5 + 4) + 0x10) < 0xd0) {
            puVar4[0x1a] = 0;
        }
        else {
            puVar4[0x1a] = *(*(iVar5 + 0x20) + 0x505 + uVar12);
        }
        uVar8 = *(*(iVar5 + 0x1c) + 0x1d) >> (iVar7 & 0x1f) & 3;
        if (uVar8 == 0) {
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
        }
        else if (uVar8 == 1) {
            puVar4[4] = 0x5a;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
        }
        else if (uVar8 == 2) {
            puVar4[4] = 0xb4;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
        }
        else if (uVar8 == 3) {
            puVar4[4] = 0xe;
            puVar4[5] = 1;
            puVar4[6] = 0;
            puVar4[7] = 0;
        }
        puVar10 = *(iVar5 + 0x20) + 0x3b + uVar12 * 0x42;
        if (puVar4 + 0x20 != puVar10) {
            section..text(puVar4 + 0x20,puVar10,10);
        }
        iVar7 = uVar12 * 6;
        puVar4[0x32] = *(*(iVar5 + 0x24) + 4 + iVar7) & 3;
        puVar4[0x33] = *(*(iVar5 + 0x24) + 4 + iVar7) & 4;
        puVar4[0x34] = *(uVar12 + 0x74 + *(iVar5 + 0x24)) & 0xf;
        puVar4[0x35] = *(uVar12 + 0x74 + *(iVar5 + 0x24)) >> 4;
        *(puVar4 + 0x38) = *(*(iVar5 + 0x24) + 5 + iVar7);
        *(puVar4 + 0x3c) = *(*(iVar5 + 0x24) + 0x84 + uVar12 * 4);
        *(puVar4 + 0x40) = *(*(iVar5 + 0x24) + 0xc4 + uVar12 * 4);
        uVar8 = (1 << (*(uVar12 + 0x104 + *(iVar5 + 0x24)) & 0x1f)) - 1;
        puVar4[0x2c] = 0;
        puVar4[0x2d] = 0;
        puVar4[0x2e] = 0;
        puVar4[0x2f] = 0;
        puVar4[0x31] = 0;
        *(puVar4 + 0x44) = uVar8;
        *(puVar4 + 0x48) = *(*(iVar5 + 0x24) + 0x114 + uVar12 * 2) * 10;
        if (uVar8 < *(puVar4 + 0x3c)) {
            *(puVar4 + 0x3c) = uVar8;
        }
        uVar9 = *(puVar4 + 0x40);
        if (uVar8 < uVar9) {
            *(puVar4 + 0x40) = uVar8;
        }
        else if (*(puVar4 + 0x3c) < uVar9) {
            *(puVar4 + 0x3c) = uVar9;
        }
        puVar4[9] = *(*(iVar5 + 0x1c) + 0xb) >> (uVar2 & 0x1f) & 1;
        *puVar4 = *(*(iVar5 + 8) + 4) >> 6 & 1;
        puVar4[0x213] = *(*(iVar5 + 0x20) + 0x516 + uVar12 * 4);
        puVar4[0x212] = *(*(iVar5 + 0x20) + 0x515 + uVar12 * 4);
        puVar4[0x214] = *(*(iVar5 + 0x20) + 0x517 + uVar12 * 4);
        puVar4[0x215] = *(*(iVar5 + 0x20) + 0x518 + uVar12 * 4);
        puVar4[0x210] = *(*(iVar5 + 0x20) + 0x555) >> (uVar2 & 0x1f) & 1;
        puVar10 = *(iVar5 + 0x20) + 0x423 + uVar12 * 0xd;
        if (puVar4 + 0xd != puVar10) {
            section..text(puVar4 + 0xd,puVar10,0xd);
        }
    }
    return;
}


/* fcn.00017387 @ 0x17387 */

int __fastcall fcn.00017387(int param_1)

{
    int16_t iVar1;
    uchar uVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    uint32_t *puVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    int iVar9;
    uint8_t uStack_a;
    uint8_t uStack_9;
    uint16_t auStack_8 [2];
    int iStack_4;
    
    iVar9 = 0;
    iVar5 = *(param_1 + 0x8c);
    iStack_4 = param_1;
    if ((*0x1a1a4 == '\0') && (iVar9 = fcn.0001ae7f(), iVar9 < 0)) {
        return iVar9;
    }
    fcn.0002328d();
    *(iVar5 + 0x8f) = 0;
    *(iVar5 + 10) = 0;
    if (*(iVar5 + 9) != '\0') {
        iVar9 = fcn.00023aaa(8,1,0,&uStack_a);
        if (iVar9 < 0) goto code_r0x000175b2;
        if ((uStack_a & 1) != 0) {
            *(iVar5 + 10) = 1;
        }
    }
    iVar3 = *(param_1 + 0x8c);
    fcn.00023aaa(8,1,0,&uStack_9);
    if (((uStack_9 & 0x40) == 0) || (*(iVar3 + 0x81) != '\x01')) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    *(iVar5 + 0x8c) = uVar2;
    fcn.000172fc();
    if ((*(iVar5 + 0x8c) == '\x01') && ((*(iVar5 + 0x8b) & 0x1f) < *(iVar5 + 0x84))) {
code_r0x00017457:
        iVar9 = -0x7ffffff9;
        goto code_r0x000175b2;
    }
    if (*(iVar5 + 0x20c) < 3) {
        if (*(iVar5 + 0x8c) == '\x01') {
            iVar1 = *(iVar5 + 0x82);
            if (iVar1 == 0x1fa4) {
                *(iVar5 + 0x8d) = 6;
            }
            else if (iVar1 == 0x34bc) {
                *(iVar5 + 0x8d) = 10;
            }
            else {
                if (iVar1 != 27000) goto code_r0x00017457;
                *(iVar5 + 0x8d) = 0x14;
            }
        }
        else {
            *(iVar5 + 0x8d) = *(iVar5 + 0x8a);
        }
        if (2 < *(iVar5 + 0x20c)) goto code_r0x000174b9;
    }
    else {
code_r0x000174b9:
        uVar8 = 0;
        do {
            iVar9 = fcn.00023aaa(8,2,0,auStack_8);
            if (iVar9 < 0) break;
            *(iVar5 + 0x90 + uVar8 * 2) = auStack_8[0];
            if (auStack_8[0] <= *(iVar5 + 0xa0)) {
                if (auStack_8[0] == 0) break;
                *(iVar5 + 0x8f) = *(iVar5 + 0x8f) + '\x01';
            }
            uVar7 = uVar8 + 1;
            uVar8 = uVar7;
        } while (uVar7 < 8);
    }
    if ((((*(iVar5 + 0x20c) < 3) && (*(iVar5 + 0x8a) == '\0')) || (*(iVar5 + 0x8b) == '\0')) ||
       ((2 < *(iVar5 + 0x20c) && (*(iVar5 + 0x8f) == '\0')))) {
        iVar9 = -0x7ffffffd;
    }
    else {
        fcn.000171ba();
        iVar3 = fcn.0001a3c0();
        if (-1 < *(iVar3 + *0x1a0c4)) {
            fcn.00020d54();
            *(*0x1a0c4 + 0xc2000) = *(*0x1a0c4 + 0xc2000) | 1;
            fcn.00023694();
        }
        fcn.00017277();
        if ((*(iVar5 + 0x34) != '\x05') || (iVar9 = fcn.00020ac5(), -1 < iVar9)) {
            uVar4 = fcn.00014679();
            *(iVar5 + 0x1c) = uVar4;
        }
    }
code_r0x000175b2:
    if ((*0x1a1a4 == '\0') && (iVar5 = fcn.0001a3c0(), -1 < *(iVar5 + *0x1a0c4))) {
        fcn.0001b031();
    }
    if ((iVar9 < 0) && (iVar5 = fcn.00020aa9(), iVar5 != 0)) {
        puVar6 = *(iVar5 + 8) + *0x1a0c4;
        *puVar6 = *puVar6 & 0xfffffff7;
    }
    return iVar9;
}


/* fcn.00012ceb @ 0x12ceb */

uint32_t __fastcall fcn.00012ceb(int param_1,int param_2)

{
    char *pcVar1;
    char *in_EAX;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    
    if ((((param_1 == 0) || (param_2 == 0)) || (in_EAX = *(param_1 + 0x94), in_EAX == NULL)) ||
       (((pcVar1 = *(param_2 + 0x94), pcVar1 == NULL || (*in_EAX == '\0')) || (*pcVar1 == '\0')))) {
code_r0x00012d5b:
        uVar3 = in_EAX & 0xffffff00;
    }
    else {
        if (in_EAX + 0x11 != pcVar1 + 0x11) {
            in_EAX = fcn.00010290(in_EAX + 0x11,pcVar1 + 0x11,3);
            if (in_EAX != NULL) goto code_r0x00012d5b;
        }
        iVar2 = *(param_2 + 0x94) + 0x14;
        iVar4 = *(param_1 + 0x94) + 0x14;
        if (iVar4 != iVar2) {
            in_EAX = fcn.00010290(iVar4,iVar2,2);
            iVar2 = 0;
            if (in_EAX != NULL) goto code_r0x00012d5b;
        }
        uVar3 = CONCAT31(iVar2 >> 8,1);
    }
    return uVar3;
}


/* fcn.00012d60 @ 0x12d60 */

uint32_t __fastcall fcn.00012d60(int param_1,int param_2)

{
    char *pcVar1;
    char *in_EAX;
    char *pcVar2;
    
    if ((((param_1 != 0) && (param_2 != 0)) && (pcVar1 = *(param_1 + 0x94), pcVar1 != NULL)) &&
       (((in_EAX = *(param_2 + 0x94), in_EAX != NULL && (*pcVar1 != '\0')) && (*in_EAX != '\0')))) {
        pcVar2 = in_EAX + 0x16;
        if (pcVar1 + 0x16 != pcVar2) {
            in_EAX = fcn.00010290(pcVar1 + 0x16,pcVar2,4);
            pcVar2 = NULL;
            if (in_EAX != NULL) goto code_r0x00012da3;
        }
        return CONCAT31(pcVar2 >> 8,1);
    }
code_r0x00012da3:
    return in_EAX & 0xffffff00;
}


/* fcn.00012da6 @ 0x12da6 */

uint32_t __fastcall fcn.00012da6(int param_1,int param_2)

{
    uint32_t in_EAX;
    int iVar1;
    int32_t *piVar2;
    int iVar3;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    
    if ((param_1 == 0) || (param_2 == 0)) {
code_r0x00012ee8:
        return in_EAX & 0xffffff00;
    }
    iVar1 = *(param_2 + 0x20);
    if (((*(param_1 + 0x20) == 0) || (iVar1 == 0)) ||
       ((*(*(param_1 + 0x94) + 1) == '\0' && (in_EAX = *(param_2 + 0x94), *(in_EAX + 1) == '\0'))))
    goto code_r0x00012ee8;
    piVar2 = *(param_1 + 0x20) + 8;
    if (&var_18h != piVar2) {
        section..text(&var_18h,piVar2,10);
    }
    piVar2 = iVar1 + 8;
    if (&var_ch != piVar2) {
        section..text(&var_ch,piVar2,10);
    }
    in_EAX = fcn.00010290(&var_14h,&var_8h,4);
    if (((in_EAX != 0) || (in_EAX = fcn.00012ceb(), in_EAX != '\x01')) || (in_EAX = fcn.00012d60(), in_EAX != '\x01'))
    goto code_r0x00012ee8;
    iVar1 = *(param_1 + 0x94);
    if ((*(iVar1 + 2) == '\x01') && (iVar3 = *(param_2 + 0x94), *(iVar3 + 2) == '\x01')) {
        if ((*(iVar1 + 5) != '\0') || (*(iVar1 + 6) != '\0')) {
code_r0x00012ed1:
            if ((*(iVar3 + 5) == '\0') && (*(iVar3 + 6) == '\0')) {
                *(param_2 + 0x1c) = 0;
                *(param_1 + 0x1c) = 1;
            }
            goto code_r0x00012ee4;
        }
        *(param_1 + 0x1c) = 0;
    }
    else {
        if (*(iVar1 + 2) == '\x01') {
            *(param_1 + 0x1c) = 0;
            *(param_2 + 0x1c) = 1;
        }
        else {
            iVar1 = *(param_2 + 0x94);
            if (*(iVar1 + 2) == '\x01') {
                *(param_2 + 0x1c) = 0;
                *(param_1 + 0x1c) = 1;
            }
        }
        if ((*(param_1 + 0x1c) == '\x01') || (*(param_2 + 0x1c) == '\x01')) goto code_r0x00012ee4;
        iVar1 = *(param_1 + 0x94);
        if ((*(iVar1 + 5) != '\0') || (*(iVar1 + 6) != '\0')) {
            iVar3 = *(param_2 + 0x94);
            goto code_r0x00012ed1;
        }
        *(param_1 + 0x1c) = 0;
    }
    *(param_2 + 0x1c) = 1;
code_r0x00012ee4:
    return CONCAT31(iVar1 >> 8,1);
}


/* fcn.00012b3d @ 0x12b3d */

//WARNING: Control flow encountered bad instruction data

uint32_t fcn.00012b3d(void)

{
    uint *puVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    puVar1 = *0x16d68;
    if (*0x16d68 != 0x16d68) {
        while( true ) {
            if (*(puVar1 + 6) == '\0') {
                if (puVar1[2] == 3) {
                    switch(puVar1[5]) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
    //WARNING: Bad instruction - Truncating control flow here
                        halt_baddata();
                    }
                }
                else if (puVar1[2] == 4) {
                    if (puVar1[5] == 0) {
                        uVar2 = uVar2 | 8;
                    }
                    else if (puVar1[5] == 1) {
                        uVar2 = uVar2 | 0x80;
                    }
                }
            }
            if ((puVar1 != 0x16d68) && (*0x16d6c == puVar1)) break;
            puVar1 = *puVar1;
        }
    }
    return uVar2;
}


/* fcn.00012fc3 @ 0x12fc3 */

int __fastcall fcn.00012fc3(int16_t param_1,uint *param_2)

{
    int iVar1;
    uint *puVar2;
    int iVar3;
    int16_t iVar4;
    uint *puVar5;
    
    iVar3 = -0x7ffffff2;
    puVar2 = *0x16d68;
    if (*0x16d68 == 0x16d68) {
        puVar5 = NULL;
code_r0x000130a5:
        *param_2 = puVar5;
        return iVar3;
    }
    do {
        puVar5 = puVar2 + -1;
        if (puVar2[2] == 4) {
            if ((puVar2[5] == 0) && (param_1 == 8)) {
code_r0x000130a1:
                iVar3 = 0;
                goto code_r0x000130a5;
            }
            if (puVar2[5] == 1) {
                iVar4 = 0x80;
code_r0x0001307a:
                if (param_1 == iVar4) {
                    iVar3 = 0;
                }
            }
        }
        else if (puVar2[2] == 3) {
            iVar1 = puVar2[5];
            if ((((((iVar1 == 0) && (param_1 == 4)) || ((iVar1 == 1 && (param_1 == 0x40)))) ||
                 ((iVar1 == 2 && (param_1 == 0x20)))) || ((iVar1 == 3 && (param_1 == 0x10)))) ||
               ((((iVar1 == 4 && (param_1 == 2)) || ((iVar1 == 5 && (param_1 == 1)))) ||
                ((iVar1 == 6 && (param_1 == 0x100)))))) goto code_r0x000130a1;
            if (iVar1 == 7) {
                iVar4 = 0x200;
                goto code_r0x0001307a;
            }
        }
        if ((iVar3 == 0) || ((puVar2 != 0x16d68 && (*0x16d6c == puVar2)))) goto code_r0x000130a5;
        puVar2 = *puVar2;
    } while( true );
}


/* fcn.0001245f @ 0x1245f */

void fcn.0001245f(void)

{
    uint *puVar1;
    uint16_t uVar2;
    int16_t iVar3;
    uchar uVar4;
    uint8_t uVar5;
    int iVar6;
    uint uVar7;
    uint *puVar8;
    uchar *puVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    int iStack_20;
    uchar auStack_1c [28];
    
    *0x16d70 = 0x16d70;
    *0x16d74 = 0x16d70;
    iVar6 = fcn.00010818();
    if (-1 < iVar6) {
        uVar12 = 0;
        do {
            uVar2 = *(*(iStack_20 + 0x10) + 10 + uVar12);
            if (uVar2 != 0) {
                if (uVar2 < 0x60d7) {
                    if (uVar2 == 0x60d6) {
                        iVar6 = fcn.0001354b();
                        if (iVar6 == 0) {
                            return;
                        }
                        fcn.0001177f();
                        *(iVar6 + 0x10) = 3;
                        uVar7 = fcn.00011806();
                        *(iVar6 + 0x14) = uVar7;
                        puVar8 = iVar6 + 4;
                        *puVar8 = 0x16d70;
                        *(iVar6 + 8) = *0x16d74;
                        **0x16d74 = puVar8;
                        *0x16d74 = puVar8;
                        fcn.0001223d();
code_r0x000124ea:
                        iVar6 = fcn.0001354b();
                        if (iVar6 == 0) {
                            return;
                        }
                        fcn.0001177f();
                        *(iVar6 + 0x10) = 2;
code_r0x00012514:
                        uVar7 = fcn.00011806();
                        *(iVar6 + 0x14) = uVar7;
                        puVar8 = iVar6 + 4;
                        *puVar8 = 0x16d70;
                        *(iVar6 + 8) = *0x16d74;
                        **0x16d74 = puVar8;
                        *0x16d74 = puVar8;
                        fcn.0001223d();
code_r0x00012545:
                        iVar6 = fcn.0001354b();
                        if (iVar6 == 0) {
                            return;
                        }
                        fcn.0001177f();
                        *(iVar6 + 0x10) = 4;
code_r0x00012973:
                        uVar7 = fcn.00011806();
                        *(iVar6 + 0x14) = uVar7;
                        puVar8 = iVar6 + 4;
                        *puVar8 = 0x16d70;
                        *(iVar6 + 8) = *0x16d74;
                        **0x16d74 = puVar8;
                        *0x16d74 = puVar8;
                        fcn.0001223d();
                    }
                    else if (uVar2 == 0x1400) {
                        puVar8 = fcn.0001354b();
                        if (puVar8 == NULL) {
                            return;
                        }
                        iVar3 = *(*(iStack_20 + 0x10) + 8 + uVar12);
                        *puVar8 = 0x56454444;
                        puVar8[3] = 4;
                        puVar8[0x23] = 0;
                        puVar8[6] = iVar3 != 8;
                        uVar7 = fcn.00011806();
                        puVar8[5] = uVar7;
                        puVar1 = puVar8 + 1;
                        puVar8[4] = 5;
                        *puVar1 = 0x16d70;
                        puVar8[2] = *0x16d74;
                        **0x16d74 = puVar1;
                        *0x16d74 = puVar1;
                        fcn.00011a3a();
                        *(puVar8[0x23] + 0x34) = 2;
                    }
                    else if (uVar2 == 0x1806) {
                        puVar8 = fcn.0001354b();
                        if (puVar8 == NULL) {
                            return;
                        }
                        if (*(*(iStack_20 + 0x10) + 8 + uVar12) == 8) {
                            puVar8[6] = 0;
                        }
                        else {
                            puVar8[6] = 1;
                        }
                        puVar8[0x23] = 0;
                        *puVar8 = 0x56454444;
                        puVar8[3] = 4;
                        uVar7 = fcn.00011806();
                        puVar8[5] = uVar7;
                        puVar1 = puVar8 + 1;
                        puVar8[4] = 1;
                        *puVar1 = 0x16d70;
                        puVar8[2] = *0x16d74;
                        **0x16d74 = puVar1;
                        *0x16d74 = puVar1;
                        iVar6 = fcn.0001354b();
                        puVar8[0x23] = iVar6;
                        if (iVar6 == 0) {
                            return;
                        }
                        puVar8[0x24] = 0x21c;
                        if (puVar8[6] == 0) {
                            uVar4 = *(*(iStack_20 + 0x1c) + 3);
                        }
                        else {
                            uVar4 = *(*(iStack_20 + 0x1c) + 4);
                        }
                        *(iVar6 + 0x20d) = uVar4;
                        *(iVar6 + 0xb) = *(*(iStack_20 + 0x10) + 0x21 + uVar12);
                        *(iVar6 + 8) = *(*(iStack_20 + 0x10) + 0x1f + uVar12) >> 1 & 1;
                        if (*0x1a138 < 0xf4) {
code_r0x0001266c:
                            *(iVar6 + 0xa2) = 4;
                        }
                        else {
                            uVar5 = *(*(iStack_20 + 0x10) + 0x1f + uVar12) >> 6;
                            *(iVar6 + 0xa2) = uVar5;
                            if (uVar5 == 0) {
                                *(iVar6 + 0xa2) = 1;
                            }
                            else {
                                if (uVar5 != 1) goto code_r0x0001266c;
                                *(iVar6 + 0xa2) = 2;
                            }
                        }
                        uVar5 = *(iVar6 + 0x20d);
                        if ((uVar5 == 0xff) || (0xf < uVar5)) {
                            iVar10 = puVar8[6];
                            *(iVar6 + 0x60) = 1;
                            *(iVar6 + 100) = 2000;
                            *(iVar6 + 0x35) = iVar10 != 0;
                            puVar9 = *(iStack_20 + 0x40) + 5;
                            if (auStack_1c != puVar9) {
                                section..text(auStack_1c,puVar9,0x1c);
                            }
                            fcn.00011309();
                            iVar10 = *(iStack_20 + 0x20) + 0x423;
                            if (iVar6 + 0xd != iVar10) {
                                section..text(iVar6 + 0xd,iVar10,0xd);
                            }
                            iVar10 = *(iStack_20 + 0x20) + 0x3b;
                            if (iVar6 + 0x20 != iVar10) {
                                section..text(iVar6 + 0x20,iVar10,10);
                            }
                            uVar11 = *(*(iStack_20 + 0x18) + 0xa3);
                        }
                        else {
                            uVar11 = uVar5;
                            *(iVar6 + 0x35) = *(*(iStack_20 + 0x24) + 0x74 + uVar11) >> 4;
                            *(iVar6 + 0x60) = *(*(iStack_20 + 0x18) + 0xcd) >> (uVar5 & 0x1f) & 1;
                            *(iVar6 + 100) = *(uVar11 * 10 + 3 + *(iStack_20 + 0x18));
                            puVar9 = *(iStack_20 + 0x40) + 5 + uVar11 * 0x1c;
                            if (auStack_1c != puVar9) {
                                section..text(auStack_1c,puVar9,0x1c);
                            }
                            fcn.00011309();
                            iVar10 = *(iStack_20 + 0x20) + 0x423 + *(iVar6 + 0x20d) * 0xd;
                            if (iVar6 + 0xd != iVar10) {
                                section..text(iVar6 + 0xd,iVar10,0xd);
                            }
                            iVar10 = *(iStack_20 + 0x20) + 0x3b + *(iVar6 + 0x20d) * 0x42;
                            if (iVar6 + 0x20 != iVar10) {
                                section..text(iVar6 + 0x20,iVar10,10);
                            }
                            uVar11 = *(*(iStack_20 + 0x18) + 0xa3) >> (*(iVar6 + 0x20d) * '\x02' & 0x1fU);
                        }
                        uVar11 = uVar11 & 3;
                        if (uVar11 == 0) {
                            *(iVar6 + 0x1c) = 0x12;
                        }
                        else if (uVar11 == 1) {
                            *(iVar6 + 0x1c) = 0x18;
                        }
                        else if (uVar11 == 2) {
                            *(iVar6 + 0x1c) = 0x1e;
                        }
                        else if (uVar11 == 3) {
                            *(iVar6 + 0x1c) = 0x24;
                        }
                        *(iVar6 + 0x34) = 2;
                    }
                    else {
                        if (uVar2 == 0x4846) goto code_r0x0001294d;
                        if (uVar2 == 0x60d2) goto code_r0x000124ea;
                    }
                }
                else {
                    if (uVar2 == 0x68c6) {
code_r0x0001294d:
                        iVar6 = fcn.0001354b();
                        if (iVar6 == 0) {
                            return;
                        }
                        fcn.0001177f();
                        *(iVar6 + 0x10) = 3;
                        goto code_r0x00012973;
                    }
                    if (uVar2 == 0x68d2) goto code_r0x00012545;
                    if (uVar2 == 0x68d6) {
                        iVar6 = fcn.0001354b();
                        if (iVar6 == 0) {
                            return;
                        }
                        fcn.0001177f();
                        *(iVar6 + 0x10) = 3;
                        goto code_r0x00012514;
                    }
                }
            }
            uVar12 = uVar12 + 0x27;
        } while (uVar12 < 0x186);
    }
    return;
}


/* fcn.0001329d @ 0x1329d */

uchar __fastcall fcn.0001329d(int param_1)

{
    uint *puVar1;
    int iVar2;
    uchar uVar3;
    int32_t var_4h;
    
    uVar3 = 0;
    if ((((0xf1 < *0x1a138) && (iVar2 = fcn.00010818(), -1 < iVar2)) && ((*(*(param_1 + 8) + 8) & 0x7f) != 0)) &&
       (puVar1 = *0x16d70, *0x16d70 != 0x16d70)) {
        while (((puVar1 == 0x4 || (puVar1[2] != 3)) || (*(puVar1[0x22] + 0x16) != '\x01'))) {
            if ((puVar1 != 0x16d70) && (*0x16d74 == puVar1)) {
                return 0;
            }
            puVar1 = *puVar1;
        }
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.00012a36 @ 0x12a36 */

void __fastcall fcn.00012a36(uint32_t param_1)

{
    uint *puVar1;
    bool bVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uint *puVar6;
    
    puVar6 = *0x16d70;
    bVar2 = false;
    *0x16d68 = 0x16d68;
    *0x16d6c = 0x16d68;
    *(*0x1a0c4 + 0x44070) = 0;
code_r0x00012a64:
    iVar5 = 10;
    do {
        if (iVar5 != puVar6[4]) {
            iVar3 = fcn.000129c3();
            if (iVar3 == 0) {
                return;
            }
            iVar4 = fcn.00014508();
            if (iVar4 == 0) {
                iVar5 = puVar6[4];
                if (*(iVar3 + 0x10) == 1) {
                    iVar4 = fcn.0001760a();
                    if (-1 < iVar4) {
                        fcn.00011de2();
                        iVar4 = fcn.00017387();
                        if (-1 < iVar4) goto code_r0x00012ab5;
                    }
                }
                else {
code_r0x00012ab5:
                    puVar1 = iVar3 + 4;
                    *puVar1 = 0x16d68;
                    *(iVar3 + 8) = *0x16d6c;
                    **0x16d6c = puVar1;
                    *0x16d6c = puVar1;
                }
            }
        }
        if ((puVar6 != 0x16d70) && (*0x16d74 == puVar6)) break;
        puVar6 = *puVar6;
    } while( true );
    if ((param_1 == 0) || ((*0x16d68 != 0x16d68 || (param_1 <= *(*0x1a0c4 + 0x44070))))) {
        if (bVar2) {
            *(*0x1a0c4 + 0x4f060) = *(*0x1a0c4 + 0x4f060) | 0x1000000;
        }
        return;
    }
    bVar2 = true;
    puVar6 = *0x16d70;
    goto code_r0x00012a64;
}


/* fcn.00012ef1 @ 0x12ef1 */

void fcn.00012ef1(void)

{
    uint *puVar1;
    char cVar2;
    uint *puVar3;
    
    puVar3 = *0x16d68;
    if (*0x16d68 == 0x16d68) {
        return;
    }
    do {
        puVar1 = puVar3;
        if (puVar3[0x24] == 0) {
            *(puVar3 + 6) = 0;
        }
        else {
            for (; puVar1 != 0x16d68; puVar1 = *puVar1) {
                if ((((puVar3[4] != puVar1[4]) && (puVar1[0x24] != NULL)) && (*puVar1[0x24] != '\0')) &&
                   (cVar2 = fcn.00012da6(), cVar2 == '\x01')) {
                    if ((*(puVar3 + 6) == '\0') && (*puVar3[0x24] == '\x01')) {
                        puVar3[0x26] = puVar3 + 0x25;
                        puVar3[0x25] = puVar1;
                        *(puVar3 + 0x19) = 1;
                    }
                    else if ((*(puVar1 + 6) == '\0') && (*puVar1[0x24] == '\x01')) {
                        puVar1[0x26] = puVar1 + 0x25;
                        puVar1[0x25] = puVar3;
                        *(puVar1 + 0x19) = 1;
                    }
                    goto code_r0x00012f63;
                }
            }
            if (*(puVar3[0x24] + 2) == '\0') {
                *(puVar3 + 6) = 1;
            }
        }
code_r0x00012f63:
        if ((puVar3 != 0x16d68) && (*0x16d6c == puVar3)) {
            return;
        }
        puVar3 = *puVar3;
    } while( true );
}


/* fcn.00012bf1 @ 0x12bf1 */

void fcn.00012bf1(void)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    
    *0x16d68 = 0x16d68;
    *0x16d6c = 0x16d68;
    iVar1 = fcn.00010818();
    puVar2 = *0x16d70;
    if (-1 < iVar1) {
        for (; puVar2[3] != 4; puVar2 = *puVar2) {
            if ((puVar2 != 0x16d70) && (*0x16d74 == puVar2)) {
                puVar2 = fcn.0001354b();
                if (puVar2 == NULL) {
                    return;
                }
                puVar2[6] = 0;
                puVar2[8] = 0;
                puVar2[4] = 4;
                *puVar2 = 0x56454444;
                puVar2[3] = 3;
                puVar2[5] = 1;
                puVar2[10] = 1;
                iVar1 = fcn.0001354b();
                puVar2[0x23] = iVar1;
                if (iVar1 == 0) {
                    return;
                }
                puVar2[0x24] = 0x1a0;
                *(iVar1 + 7) = 0;
                *(iVar1 + 9) = 0;
                *(iVar1 + 0xf) = 0;
                *(iVar1 + 0x14) = 0;
                *(iVar1 + 2) = 2;
                *(iVar1 + 0x10) = 0x18;
                goto code_r0x00012c65;
            }
        }
        puVar2 = fcn.000129c3();
        if (puVar2 != NULL) {
            puVar2[8] = 0;
            puVar2[10] = 1;
            if (puVar2[0x23] != 0) {
                *(puVar2[0x23] + 0x10) = 0x18;
code_r0x00012c65:
                puVar3 = puVar2 + 1;
                *puVar3 = 0x16d68;
                puVar2[2] = *0x16d6c;
                **0x16d6c = puVar3;
                *0x16d6c = puVar3;
            }
        }
    }
    return;
}


/* fcn.000130ab @ 0x130ab */

void fcn.000130ab(void)

{
    uint *puVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int iVar6;
    uint *puVar7;
    uint *puVar8;
    uint *puVar9;
    uint32_t uVar10;
    int iStack_10;
    
    *0x16d60 = 0x16d60;
    *0x16d64 = 0x16d60;
    iVar6 = fcn.00010818();
    if (-1 < iVar6) {
        iVar6 = *(iStack_10 + 0xc);
        uVar2 = *(iVar6 + 3);
        uVar5 = fcn.00012b3d();
        if (uVar5 != 0) {
            uVar10 = 0;
            if (uVar2 != 0) {
                do {
                    uVar3 = *(iVar6 + 5 + uVar10 * 4);
                    uVar4 = *(iVar6 + 7 + uVar10 * 4);
                    if ((uVar3 != 0) || (uVar4 != 0)) {
                        if (uVar4 == 0) {
                            if ((uVar3 & uVar5) == uVar3) {
                                puVar7 = fcn.0001354b();
                                if (puVar7 == NULL) {
                                    return;
                                }
                                puVar7[1] = 0;
                                *puVar7 = 0x53434750;
                                puVar8 = fcn.0001354b();
                                if (puVar8 == NULL) {
                                    return;
                                }
                                *puVar8 = 0;
                                fcn.00012fc3();
                                puVar8[2] = 0;
                                puVar7[2] = puVar8;
code_r0x000131f0:
                                puVar8 = puVar7 + 3;
                                *puVar8 = 0x16d60;
                                puVar7[4] = *0x16d64;
                                **0x16d64 = puVar8;
                                *0x16d64 = puVar8;
                            }
                        }
                        else if (((uVar3 & uVar5) != 0) && ((uVar4 & uVar5) != 0)) {
                            puVar7 = fcn.0001354b();
                            if (puVar7 == NULL) {
                                return;
                            }
                            puVar7[1] = 0;
                            *puVar7 = 0x53434750;
                            puVar8 = fcn.0001354b();
                            if (puVar8 == NULL) {
                                return;
                            }
                            *puVar8 = 1;
                            fcn.00012fc3();
                            fcn.00012fc3();
                            puVar7[2] = puVar8;
                            goto code_r0x000131f0;
                        }
                    }
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar2);
                if (*0x16d60 != 0x16d60) {
                    return;
                }
            }
            puVar7 = *0x16d68;
            puVar8 = fcn.0001354b();
            while (puVar8 != NULL) {
                *puVar8 = 0x53434750;
                puVar8[1] = 0;
                puVar9 = fcn.0001354b();
                if (puVar9 == NULL) {
                    return;
                }
                *puVar9 = 0;
                puVar1 = puVar8 + 3;
                puVar9[1] = puVar7 + -1;
                puVar9[2] = 0;
                puVar8[2] = puVar9;
                *puVar1 = 0x16d60;
                puVar8[4] = *0x16d64;
                **0x16d64 = puVar1;
                if ((puVar7 != 0x16d68) && (*0x16d6c == puVar7)) {
                    *0x16d64 = puVar1;
                    return;
                }
                puVar7 = *puVar7;
                *0x16d64 = puVar1;
                puVar8 = fcn.0001354b();
            }
        }
    }
    return;
}


/* fcn.000148da @ 0x148da */

int fcn.000148da(void)

{
    unkuint3 Var1;
    
    Var1 = *0x1a0d8 >> 8;
    if ((*0x1a0d8 != 2) && (*0x1a0d8 != 3)) {
        return Var1 << 8;
    }
    return CONCAT31(Var1,1);
}


/* fcn.00013584 @ 0x13584 */

uint __fastcall fcn.00013584(uint param_1)

{
    (**(*0x1a0bc + 4))(*0x1a0c0,*0x1a0bc,param_1);
    return param_1;
}


/* fcn.0001359e @ 0x1359e */

void fcn.0001359e(void)

{
    uint uVar1;
    uint uVar2;
    int iVar3;
    char cVar4;
    uint32_t uVar5;
    uint32_t extraout_ECX;
    uint32_t uVar6;
    int extraout_EDX;
    uint32_t uVar7;
    int iVar8;
    int iVar9;
    bool bVar10;
    int iStack_3c;
    int iStack_38;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    
    iVar9 = *0x1a0c4;
    uVar7 = 0;
    iStack_2c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iVar8 = 0;
    iStack_20 = 0;
    iStack_18 = 0;
    iStack_1c = 0;
    iStack_3c = 0;
    iStack_14 = 0;
    iStack_38 = 0;
    iStack_10 = 0;
    iStack_30 = 0;
    if (*0x1a1a4 == '\x01') {
        *(*0x1a0c4 + 0x162100) = 0x100;
        *(iVar9 + 0x6c100) = 0x100;
    }
    while( true ) {
        iVar3 = *0x1a0c4;
        if (uVar7 == 0) {
            iVar8 = 0x162100;
            iStack_28 = 0x162104;
            iStack_2c = 0x16210c;
            iStack_18 = 0x162014;
            iStack_24 = 0x162124;
            iStack_20 = 0x162128;
            iStack_1c = 0x162120;
            iStack_3c = 0x1628a0;
            iStack_14 = 0x1623a0;
            iStack_38 = 0x1626a0;
            iStack_10 = 0x162304;
            iStack_30 = 0x162604;
        }
        else if (uVar7 == 1) {
            iStack_28 = 0x6c104;
            iStack_18 = 0x6c014;
            iStack_2c = 0x6c10c;
            iStack_1c = 0;
            iStack_24 = 0x6c124;
            iStack_20 = 0x6c128;
            iVar8 = 0x6c100;
            iStack_3c = 0x6c8a0;
            iStack_14 = 0x6c3a0;
            iStack_38 = 0x6c6a0;
            iStack_10 = 0x6c304;
            iStack_30 = 0x6c604;
        }
        uVar5 = *(iVar9 + iStack_3c) & 0x1fffffff | 0x80000000;
        *(*0x1a0c4 + iStack_38) = uVar5;
        if ((uVar7 == 0) || (uVar7 == 1)) {
            *(iVar3 + iStack_14) = uVar5;
        }
        cVar4 = fcn.000148da();
        iVar9 = *0x1a0c4;
        uVar5 = extraout_ECX;
        if (cVar4 == '\0') {
            uVar5 = extraout_ECX | 0x300000;
        }
        *(*0x1a0c4 + iStack_30) = uVar5;
        if ((uVar7 == 0) || (uVar7 == 1)) {
            *(iVar9 + iStack_10) = uVar5;
        }
        if (*(iVar9 + iVar8) < 0) break;
        bVar10 = *0x1a1a4 == '\x01';
        *(*0x1a0c4 + extraout_EDX) = *(*0x1a0c4 + extraout_EDX) & 0xff7fffff;
        iVar9 = *0x1a0c4;
        if (bVar10) {
            *(*0x1a0c4 + iVar8) = 0x100;
        }
        uVar5 = *(iVar9 + iStack_2c) >> 0x18 & 3;
        uVar6 = *(iVar9 + iStack_2c) >> 0x1a & 7;
        if (((uVar5 < 3) && (uVar6 < 2)) && ((uVar5 != 0 || (uVar6 != 1)))) {
            iVar9 = (uVar6 + uVar5 * 2) * 0xc;
            uVar1 = *(iVar9 + 0x19c94);
            uVar2 = *(iVar9 + 0x19c98);
            *(*0x1a0c4 + iStack_28) =
                 *(*0x1a0c4 + iStack_28) & 0xff00ff00 |
                 (*(iVar9 + 0x19c90) >> 8 & 0xff) << 0x10 | *(iVar9 + 0x19c90) & 0xff;
            iVar9 = *0x1a0c4;
            *(*0x1a0c4 + iStack_24) = uVar1;
            *(iVar9 + iStack_20) = uVar2;
        }
        else {
            iVar9 = *0x1a0c4;
        }
        if (uVar7 == 0) {
            *(iVar9 + iStack_1c) = *(iVar9 + iStack_1c) | 0x1000000;
            iVar9 = *0x1a0c4;
        }
        *(iVar9 + iVar8) = *(iVar9 + iVar8) | 0x80000000;
        uVar7 = uVar7 + 1;
        *(*0x1a0c4 + iStack_18) = *(*0x1a0c4 + iStack_18) | 0x10;
        if (1 < uVar7) {
            return;
        }
        iVar9 = *0x1a0c4;
    }
    return;
}


/* fcn.0002077d @ 0x2077d */

uint __fastcall fcn.0002077d(int param_1)

{
    int iVar1;
    int iVar2;
    bool bVar3;
    
    param_1 = param_1 * 0xc;
    if ((*(param_1 + 0x18884) & *(*0x1a0c4 + 0x45404)) != 0) {
        return 0;
    }
    bVar3 = *0x1a1a4 != '\0';
    *(*0x1a0c4 + 0x45404) = *(*0x1a0c4 + 0x45404) | *(param_1 + 0x18880);
    iVar2 = 60000000;
    iVar1 = (bVar3 - 1 & 0xfc6c7914) + 60000000;
    while ((*(param_1 + 0x18884) & *(*0x1a0c4 + 0x45404)) == 0) {
        fcn.00013584();
        iVar1 = iVar1 + -1;
        if (iVar1 == 0) {
            return 0x80000007;
        }
    }
    if (*0x1a1a4 == '\0') {
        iVar2 = 0x14;
    }
    do {
        if ((*(param_1 + 0x18888) & *(*0x1a0c4 + 0x42000)) != 0) {
            return 0;
        }
        fcn.00013584();
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    return 0x80000007;
}


/* fcn.0001b556 @ 0x1b556 */

int fcn.0001b556(void)

{
    int32_t iVar1;
    char cVar2;
    int iVar3;
    uint32_t extraout_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.0001b409();
    iVar3 = fcn.000154bc();
    if (iVar3 == 0) {
        iVar3 = -0x7ffffff9;
    }
    else {
        cVar2 = fcn.000148da();
        if (cVar2 == '\x01') {
            *0x1a104 = 0x17140;
            *0x1a100 = 0xf;
        }
        else if (*0x1a0d8 == 1) {
            *0x1a104 = 0x17368;
            *0x1a100 = 6;
        }
        *(*0x1a0c4 + 0x4f018) = *(*0x1a0c4 + 0x4f018) & 0xfffff800 | extraout_ECX;
        *0x1a0ec = fcn.0001b22a();
        if (*0x1a0ec == 0) {
            if (iVar3 == 24000) {
                *0x1a0ec = 0x288;
                var_4h = 0x50e;
            }
            else {
                *0x1a0ec = 0x28c;
                var_4h = 0x518;
            }
            *(*0x1a0c4 + 0x4f018) = *(*0x1a0c4 + 0x4f018) & 0xfffff800 | var_4h;
        }
        *0x1a108 = *0x1a0ec;
        if ((*(*0x1a0c4 + 0x46070) < 0) && (iVar3 = fcn.0001b3b9(), iVar3 < 0)) {
            return iVar3;
        }
        fcn.00021941();
        iVar3 = fcn.00021759();
        if (-1 < iVar3) {
            fcn.0001b163(&var_4h);
            iVar1 = var_4h;
            iVar3 = fcn.0001b329();
            if (-1 < iVar3) {
                *(*0x1a0c4 + 0x46000) = *(*0x1a0c4 + 0x46000) & 0xff3ff800 | iVar1 | 0x380000;
                fcn.00021941();
                fcn.000217d2();
                fcn.0001b431();
                fcn.0001b409();
            }
        }
    }
    return iVar3;
}


/* fcn.0001386b @ 0x1386b */

uint fcn.0001386b(void)

{
    int iVar1;
    
    iVar1 = ((*0x1a1a4 != '\0') - 1 & 0xfc6c7914) + 60000000;
    *(*0x1a0c4 + 0x45008) = *(*0x1a0c4 + 0x45008) | 0x80000000;
    do {
        if ((*(*0x1a0c4 + 0x45008) & 0x40000000) != 0) {
            iVar1 = ((*0x1a1a4 != '\0') - 1 & 0xfc6c7914) + 60000000;
            *(*0x1a0c4 + 0x44fe8) = *(*0x1a0c4 + 0x44fe8) | 0x80000000;
            do {
                if ((*(*0x1a0c4 + 0x44fe8) & 0x40000000) != 0) {
                    iVar1 = ((*0x1a1a4 != '\0') - 1 & 0xfc6c7914) + 60000000;
                    *(*0x1a0c4 + 0x44300) = *(*0x1a0c4 + 0x44300) | 0x80000000;
                    do {
                        if ((*(*0x1a0c4 + 0x44300) & 0x40000000) != 0) {
                            iVar1 = ((*0x1a1a4 != '\0') - 1 & 0xfc6c7914) + 60000000;
                            *(*0x1a0c4 + 0x44304) = *(*0x1a0c4 + 0x44304) | 0x80000000;
                            do {
                                if ((*(*0x1a0c4 + 0x44304) & 0x40000000) != 0) {
                                    return 0;
                                }
                                fcn.00013584();
                                iVar1 = iVar1 + -2;
                            } while (iVar1 != 0);
                            return 0x80000007;
                        }
                        fcn.00013584();
                        iVar1 = iVar1 + -2;
                    } while (iVar1 != 0);
                    return 0x80000007;
                }
                fcn.00013584();
                iVar1 = iVar1 + -2;
            } while (iVar1 != 0);
            return 0x80000007;
        }
        fcn.00013584();
        iVar1 = iVar1 + -2;
    } while (iVar1 != 0);
    return 0x80000007;
}


/* fcn.00018c77 @ 0x18c77 */

void fcn.00018c77(void)

{
    *(*0x1a0c4 + 0x45038) = *(*0x1a0c4 + 0x45038) & 0xfffffff0 | 0x10;
    *(*0x1a0c4 + 0x45038) = *(*0x1a0c4 + 0x45038) & 0xfffff0ff | 0x1000;
    *(*0x1a0c4 + 0x45038) = *(*0x1a0c4 + 0x45038) & 0xfff1ffff | 0x10000;
    *(*0x1a0c4 + 0x45038) = *(*0x1a0c4 + 0x45038) & 0xffdfffff | 0x100000;
    *(*0x1a0c4 + 0x45048) = *(*0x1a0c4 + 0x45048) & 0xfffffff0 | 0x10;
    *(*0x1a0c4 + 0x45048) = *(*0x1a0c4 + 0x45048) & 0xfffff0ff | 0x1000;
    *(*0x1a0c4 + 0x45048) = *(*0x1a0c4 + 0x45048) & 0xfff1ffff | 0x10000;
    *(*0x1a0c4 + 0x45048) = *(*0x1a0c4 + 0x45048) & 0xffdfffff | 0x100000;
    *(*0x1a0c4 + 0x4504c) = *(*0x1a0c4 + 0x4504c) & 0xfffffff0 | 0x10;
    *(*0x1a0c4 + 0x4504c) = *(*0x1a0c4 + 0x4504c) & 0xfffff0ff | 0x1000;
    *(*0x1a0c4 + 0x4504c) = *(*0x1a0c4 + 0x4504c) & 0xfff1ffff | 0x10000;
    *(*0x1a0c4 + 0x4504c) = *(*0x1a0c4 + 0x4504c) & 0xffdfffff | 0x100000;
    return;
}


/* fcn.000147f6 @ 0x147f6 */

//WARNING: Removing unreachable block (ram,0x00014897)

int fcn.000147f6(void)

{
    uint32_t uVar1;
    int iVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = fcn.000269e7();
    if ((uVar1 & 2) == 0) {
        iVar2 = -0x7ffffffa;
    }
    else {
        *0x1a0c4 = fcn.000269e7();
        if ((*0x1a0c4 & 6) == 4) {
            fcn.000269e7();
        }
        *0x1a0c4 = *0x1a0c4 & 0xfffffff0;
        iVar2 = (-(*0x1a0c4 != 0) & 0x7ffffffa) + 0x80000006;
    }
    return iVar2;
}


/* fcn.000148ef @ 0x148ef */

uint fcn.000148ef(void)

{
    bool bVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    
    uVar3 = 0;
    *0x1a0dc = fcn.0002698e();
    *0x1a0de = fcn.00026936();
    uVar2 = 0;
    do {
        if (*0x1a0dc == *(uVar2 * 2 + 0x19d20)) {
            *0x1a0d8 = 1;
            bVar1 = true;
            *0x1a0e0 = 8;
            goto code_r0x0001497b;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    bVar1 = false;
code_r0x0001497b:
    uVar2 = 0;
    do {
        if (*0x1a0dc == *(uVar2 * 2 + 0x19cf0)) {
            *0x1a0d8 = 2;
            bVar1 = true;
            *0x1a0e0 = 8;
            break;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x12);
    uVar2 = 0;
    do {
        if (*0x1a0dc == *(uVar2 * 2 + 0x19cd8)) {
            *0x1a0d8 = 3;
            bVar1 = true;
            *0x1a0e0 = 8;
            break;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 6);
    do {
        if (*0x1a0dc == *(uVar3 * 2 + 0x19c84)) {
            *0x1a0d8 = 1;
            bVar1 = true;
            *0x1a0e0 = 8;
            break;
        }
        uVar3 = uVar3 + 1;
    } while (uVar3 < 2);
    if (bVar1) {
        return 0;
    }
    return 0x80000007;
}


/* fcn.00014a08 @ 0x14a08 */

uint fcn.00014a08(void)

{
    bool bVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    uchar uVar6;
    ushort uVar7;
    
    uVar7 = fcn.0002698e();
    *0x1a0cc = CONCAT22(*0x1a0ce,uVar7);
    uVar6 = fcn.00026936();
    *0x1a0cc = CONCAT12(uVar6,*0x1a0cc);
    bVar1 = *0x1a0cc + 0xae80U < 0x20;
    if (bVar1) {
        *0x1a0c8 = 1;
    }
    bVar2 = *0x1a0cc + 0xab80U < 0x80;
    if (bVar2) {
        *0x1a0c8 = 1;
    }
    bVar3 = *0x1a0cc + 0x8200U < 0x20;
    if (bVar3) {
        *0x1a0c8 = 2;
    }
    bVar4 = *0x1a0cc + 0x5200U < 0x20;
    if (bVar4) {
        *0x1a0c8 = 3;
    }
    bVar5 = *0x1a0cc + 0x8900U < 0x20;
    if (bVar5) {
        *0x1a0c8 = 4;
    }
    if (!bVar5 && (!bVar4 && (!bVar3 && (!bVar2 && !bVar1)))) {
        return 0x80000007;
    }
    return 0;
}


/* fcn.00014ab2 @ 0x14ab2 */

void fcn.00014ab2(void)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = fcn.000148da();
    if (cVar1 == '\x01') {
        if ((*(*0x1a0c4 + 0xc2014) & 0x100) == 0) {
            *0x1a0d4 = 0x4b00;
            uVar2 = *(*0x1a0c4 + 0xc6204) & 0xd013cfff | 0x10130800;
        }
        else {
            *0x1a0d4 = 24000;
            uVar2 = *(*0x1a0c4 + 0xc6204) & 0xc018c7ff | 0x180000;
        }
    }
    else {
        if (*0x1a0d8 != 1) {
            return;
        }
        *0x1a0d4 = 0x9600;
        uVar2 = *(*0x1a0c4 + 0xc6204) & 0xd026d7ff | 0x10261000;
    }
    *(*0x1a0c4 + 0xc6204) = uVar2;
    return;
}


/* fcn.0001bd4a @ 0x1bd4a */

//WARNING: Removing unreachable block (ram,0x0001bd82)
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.0001bd4a(uint param_1)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    *0x1a0f0 = fcn.000269e7(param_1,param_1);
    *0x1a0f4 = 0;
    uVar1 = fcn.000269e7();
    *0x1a0f4 = *0x1a0f4 | uVar1;
    *0x1a0f0 = *0x1a0f0 & 0xfffffff0;
    return;
}


/* fcn.000269e7 @ 0x269e7 */

ulong __fastcall fcn.000269e7(uint32_t param_1)

{
    uint uVar1;
    uint uVar2;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar2 = in(0xcfc);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,uVar2);
}


/* fcn.000139ad @ 0x139ad */

int fcn.000139ad(void)

{
    char cVar1;
    int iVar2;
    int extraout_ECX;
    uint32_t extraout_EDX;
    
    *(*0x1a0c4 + 0xc2020) = *(*0x1a0c4 + 0xc2020) | 0x8000;
    *(*0x1a0c4 + 0x46408) = *(*0x1a0c4 + 0x46408) | 0x10;
    *(*0x1a0c4 + 0x4421c) = 0xffffffff;
    cVar1 = fcn.000148da();
    if (cVar1 == '\x01') {
        *(extraout_ECX + 0x46430) = *(extraout_ECX + 0x46430) | 0x400;
        *(*0x1a0c4 + 0x46430) = *(*0x1a0c4 + 0x46430) | extraout_EDX;
    }
    cVar1 = fcn.000148da();
    if (cVar1 == '\x01') {
        fcn.0001359e();
    }
    iVar2 = fcn.0002077d();
    if (-1 < iVar2) {
        *(*0x1a0c4 + 0x46538) = *(*0x1a0c4 + 0x46538) | 0x80000000;
        iVar2 = fcn.0001b556();
        if (-1 < iVar2) {
            iVar2 = fcn.0002077d();
            if (-1 < iVar2) {
                iVar2 = fcn.0002077d();
                if (-1 < iVar2) {
                    iVar2 = fcn.0002077d();
                    if (-1 < iVar2) {
                        iVar2 = fcn.0002077d();
                        if (-1 < iVar2) {
                            *(*0x1a0c4 + 0x70038) = *(*0x1a0c4 + 0x70038) | 0x40000000;
                            *(*0x1a0c4 + 0x71038) = *(*0x1a0c4 + 0x71038) | 0x40000000;
                            *(*0x1a0c4 + 0x72038) = *(*0x1a0c4 + 0x72038) | 0x40000000;
                            iVar2 = fcn.0001386b();
                            fcn.00018c77();
                            *(*0x1a0c4 + 0x46540) = *(*0x1a0c4 + 0x46540) | 0x20000;
                            *(*0x1a0c4 + 0x45400) = 0;
                        }
                    }
                }
            }
        }
    }
    return iVar2;
}


/* fcn.0001bae1 @ 0x1bae1 */

void fcn.0001bae1(void)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000148da();
    if (cVar1 == '\x01') {
        *0x1a104 = 0x17140;
        *0x1a100 = 0xf;
    }
    else if (*0x1a0d8 == 1) {
        *0x1a104 = 0x17368;
        *0x1a100 = 6;
    }
    uVar2 = fcn.0001b22a();
    *0x1a108 = fcn.0001b22a();
    *0x1a0ec = uVar2;
    return;
}


/* fcn.00018db0 @ 0x18db0 */

void __fastcall fcn.00018db0(uint param_1)

{
    char cVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint uVar2;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_ch = 2000;
    *0x1a110 = 0;
    *0x1a114 = 0;
    var_4h = 0;
    var_8h = 0;
    cVar1 = fcn.00024d5c(6,param_1,&var_ch);
    uVar2 = extraout_ECX;
    if (cVar1 != '\0') {
        *0x1a110 = var_4h;
        var_4h = 1;
        var_8h = 0;
        cVar1 = fcn.00024d5c(6,extraout_ECX,&var_ch);
        uVar2 = extraout_ECX_00;
        if (cVar1 != '\0') {
            *0x1a114 = var_4h;
        }
    }
    var_4h = 0;
    var_8h = 0;
    cVar1 = fcn.00024d5c(0x23,uVar2,&var_ch);
    if (cVar1 != '\0') {
        *0x1a10c = var_4h;
    }
    return;
}


/* fcn.0001a2af @ 0x1a2af */

uint32_t __fastcall fcn.0001a2af(int param_1)

{
    uint32_t uVar1;
    
    if (param_1 == 0) {
        uVar1 = 0x40000000;
    }
    else if (param_1 == 1) {
        uVar1 = 0x200000;
    }
    else {
        if (param_1 != 2) {
            return *(*0x1a0c4 + 0x51000) & 0xffffff00;
        }
        uVar1 = 0x10000000;
    }
    uVar1 = *(*0x1a0c4 + 0x51000) & uVar1;
    return CONCAT31(-uVar1 >> 8,'\x01' - (uVar1 != 0));
}


/* fcn.00015bd5 @ 0x15bd5 */

//WARNING: Variable defined which should be unmapped: var_1h

char __fastcall fcn.00015bd5(int param_1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    uint8_t uVar5;
    uint32_t var_1h;
    
    iVar4 = 0;
    var_1h._0_1_ = '\0';
    iVar3 = 0;
    if (*(param_1 + 0xc) == 3) {
        iVar3 = *(param_1 + 0x8c);
    }
    if (((*(param_1 + 0xc) == 4) && (*(param_1 + 0x10) == 1)) && (iVar4 = *(param_1 + 0x8c), iVar4 != 0)) {
        var_1h._0_1_ = *(iVar4 + 0x210);
    }
    iVar1 = *(param_1 + 0x14);
    if (iVar1 == 4) {
        uVar5 = *(iVar3 + 0x24) != 2;
    }
    else {
        if (iVar1 == 5) {
            return (*(iVar3 + 0x24) != 2) * '\x02' + '\b';
        }
        if (iVar1 != 6) {
            if (iVar1 == 7) {
                return (*(iVar3 + 0x24) != 2) * '\x04' + '\b';
            }
            if (var_1h != '\0') {
                return '\x06';
            }
            if ((*(param_1 + 0x10) == 1) && (1 < *(iVar4 + 0x218))) {
                if (-1 < *(*0x1a0c4 + 0x46010)) {
                    return '\x06';
                }
                cVar2 = fcn.000157a7();
                if (cVar2 != '\0') {
                    return '\0';
                }
            }
            else {
                cVar2 = fcn.000157a7();
                if (cVar2 != '\0') {
                    if (-1 < *(*0x1a0c4 + 0x46010)) {
                        return '\x06';
                    }
                    return '\0';
                }
            }
            return '\a';
        }
        uVar5 = (*(iVar3 + 0x24) == 2) - 1U & 3;
    }
    return uVar5 + 8;
}


/* fcn.000165da @ 0x165da */

uint fcn.000165da(void)

{
    char cVar1;
    uint uVar2;
    uint extraout_EDX;
    
    cVar1 = fcn.000148da();
    uVar2 = extraout_EDX;
    if (cVar1 == '\x01') {
        uVar2 = fcn.0001653e();
    }
    return uVar2;
}


/* fcn.0001653e @ 0x1653e */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.0001653e(int param_1)

{
    switch(*(param_1 + 0x14)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return 0;
    }
}


/* fcn.00018fe8 @ 0x18fe8 */

void fcn.00018fe8(void)

{
    char cVar1;
    
    cVar1 = fcn.000148da();
    if (cVar1 == '\x01') {
        if (*0x1a0e4 == 0) {
            *(*0x1a0c4 + 0x7019c) = *(*0x1a0c4 + 0x7019c);
        }
        else {
            if (*0x1a0e4 == 1) {
                *(*0x1a0c4 + 0x7119c) = *(*0x1a0c4 + 0x7119c);
                return;
            }
            if (*0x1a0e4 == 2) {
                *(*0x1a0c4 + 0x7219c) = *(*0x1a0c4 + 0x7219c);
                return;
            }
        }
        return;
    }
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x7019c) = 0;
    }
    else {
        if (*0x1a0e4 == 1) {
            *(*0x1a0c4 + 0x7119c) = 0;
            return;
        }
        if (*0x1a0e4 == 2) {
            *(*0x1a0c4 + 0x7219c) = 0;
            return;
        }
    }
    return;
}


/* fcn.00019261 @ 0x19261 */

void fcn.00019261(void)

{
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70180) = *(*0x1a0c4 + 0x70180) & 0xf47fffff | 0x4000000;
    }
    else {
        if (*0x1a0e4 == 1) {
            *(*0x1a0c4 + 0x71180) = *(*0x1a0c4 + 0x71180) & 0xf47fffff | 0x4000000;
            return;
        }
        if (*0x1a0e4 == 2) {
            *(*0x1a0c4 + 0x72180) = *(*0x1a0c4 + 0x72180) & 0xf47fffff | 0x4000000;
            return;
        }
    }
    return;
}


/* fcn.00018e4b @ 0x18e4b */

void __fastcall fcn.00018e4b(int param_1,int param_2,char param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    
    if ((*0x1a1a4 != '\0') || (uVar7 = *0x1a110, uVar7 == 0)) {
        uVar7 = 3;
    }
    if (param_3 != '\0') {
        uVar7 = uVar7 + *0x1a10c;
    }
    iVar1 = *(param_1 + 0x34) + *(param_1 + 0x30);
    uVar6 = *(param_1 + 0x2c);
    if (*(param_1 + 0x58) != '\0') {
        uVar6 = uVar6 * 2;
    }
    uVar2 = (*(param_2 + 0xc) * *(param_1 + 0x30) + 0x3fU & 0xffffffc0) + 0x1ff >> 9;
    uVar3 = uVar2 + 1;
    uVar4 = iVar1 * 1000;
    iVar5 = (((uVar4 - 1) + uVar6 * uVar7) / uVar4) * uVar3;
    if ((0x2aa / uVar3 == 0) && (uVar7 < uVar4 / uVar6)) {
        iVar5 = (*(param_2 + 0xc) * uVar6 * uVar7 + 0x7cfff) / 0x7d000 + 1;
    }
    uVar3 = (uVar2 + iVar5) / uVar3;
    if (param_3 == '\0') {
        *(param_1 + 0xa0) = iVar5 + 1;
        *(param_1 + 0xa4) = uVar3;
    }
    else {
        *(param_1 + 0xa8) = iVar5 + 1;
        *(param_1 + 0xac) = uVar3;
    }
    *(param_1 + 0xb0) = (iVar1 * 8000 + -1 + uVar6) / uVar6;
    return;
}


/* fcn.00019121 @ 0x19121 */

void fcn.00019121(void)

{
    uint8_t uVar1;
    
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70180) = *(*0x1a0c4 + 0x70180) & 0x7fffffff;
    }
    else if (*0x1a0e4 == 1) {
        *(*0x1a0c4 + 0x71180) = *(*0x1a0c4 + 0x71180) & 0x7fffffff;
    }
    else if (*0x1a0e4 == 2) {
        *(*0x1a0c4 + 0x72180) = *(*0x1a0c4 + 0x72180) & 0x7fffffff;
    }
    fcn.00018fe8();
    fcn.0001a229();
    out(0x3c4,1);
    uVar1 = in(0x3c5);
    out(0x3c5,uVar1 | 0x20);
    fcn.00013584();
    *(*0x1a0c4 + 0x41000) = *(*0x1a0c4 + 0x41000) | 0x80000000;
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70240) = *(*0x1a0c4 + 0x70240) & 0x7fffffff;
    }
    else if (*0x1a0e4 == 1) {
        *(*0x1a0c4 + 0x71240) = *(*0x1a0c4 + 0x71240) & 0x7fffffff;
    }
    else if (*0x1a0e4 == 2) {
        *(*0x1a0c4 + 0x72240) = *(*0x1a0c4 + 0x72240) & 0x7fffffff;
    }
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70180) = *(*0x1a0c4 + 0x70180) & 0xfffffffc;
    }
    else {
        if (*0x1a0e4 == 1) {
            *(*0x1a0c4 + 0x71180) = *(*0x1a0c4 + 0x71180) & 0xfffffffc;
            return;
        }
        if (*0x1a0e4 == 2) {
            *(*0x1a0c4 + 0x72180) = *(*0x1a0c4 + 0x72180) & 0xfffffffc;
            return;
        }
    }
    return;
}


/* fcn.00013db5 @ 0x13db5 */

void __fastcall fcn.00013db5(int param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = *0x1a0c4;
    uVar2 = param_2[3] * *param_2 + 0x3fU >> 6;
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70188) = uVar2;
        *(iVar1 + 0x70184) = 0;
    }
    else if (*0x1a0e4 == 1) {
        *(*0x1a0c4 + 0x71188) = uVar2;
        *(iVar1 + 0x71184) = 0;
    }
    else if (*0x1a0e4 == 2) {
        *(*0x1a0c4 + 0x72188) = uVar2;
        *(iVar1 + 0x72184) = 0;
    }
    fcn.00018fe8();
    fcn.00019261();
    if ((*(param_1 + 0xc) != 4) || (*(*(param_1 + 0x8c) + 4) != 0xb4)) {
        return;
    }
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70180) = *(*0x1a0c4 + 0x70180) & 0xfffffffe | 2;
    }
    else {
        if (*0x1a0e4 == 1) {
            *(*0x1a0c4 + 0x71180) = *(*0x1a0c4 + 0x71180) & 0xfffffffe | 2;
            return;
        }
        if (*0x1a0e4 == 2) {
            *(*0x1a0c4 + 0x72180) = *(*0x1a0c4 + 0x72180) & 0xfffffffe | 2;
            return;
        }
    }
    return;
}


/* fcn.00019f44 @ 0x19f44 */

void __fastcall fcn.00019f44(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = *(param_1 + 0xb0) & 0x1ff;
    if (*0x1a0e8 == 0) {
        *(*0x1a0c4 + 0x45270) = *(*0x1a0c4 + 0x45270) & 0xfffffe00 | uVar1;
    }
    else {
        if (*0x1a0e8 == 1) {
            *(*0x1a0c4 + 0x45274) = *(*0x1a0c4 + 0x45274) & 0xfffffe00 | uVar1;
            return;
        }
        if (*0x1a0e8 == 2) {
            *(*0x1a0c4 + 0x45278) = *(*0x1a0c4 + 0x45278) & 0xfffffe00 | uVar1;
            return;
        }
    }
    return;
}


/* fcn.0001bd12 @ 0x1bd12 */

void __fastcall fcn.0001bd12(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0e8 == 0) {
        iVar1 = 0x68170;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x68970;
    }
    else if (*0x1a0e8 == 2) {
        iVar1 = 0x69170;
    }
    *(*0x1a0c4 + iVar1) = param_2 << 0x10 | param_1;
    return;
}


/* fcn.00019fb2 @ 0x19fb2 */

void __fastcall fcn.00019fb2(int param_1,uint32_t *param_2)

{
    char *pcVar1;
    uint32_t uVar2;
    
    if (((param_2[4] == 2) && (pcVar1 = *(param_1 + 0x94), pcVar1 != NULL)) && (*pcVar1 == '\x01')) {
        uVar2 = (*param_2 / pcVar1[3] - 1) * 0x10000 | param_2[1] - 1;
    }
    else {
        uVar2 = (*param_2 - 1) * 0x10000 | param_2[1] - 1;
    }
    if (*0x1a0e8 == 0) {
        *(*0x1a0c4 + 0x6001c) = uVar2;
    }
    else {
        if (*0x1a0e8 == 1) {
            *(*0x1a0c4 + 0x6101c) = uVar2;
            return;
        }
        if (*0x1a0e8 == 2) {
            *(*0x1a0c4 + 0x6201c) = uVar2;
            return;
        }
    }
    return;
}


/* fcn.000192cc @ 0x192cc */

void __fastcall fcn.000192cc(int param_1,uint32_t *param_2)

{
    char *pcVar1;
    uint32_t uVar2;
    
    if (((param_2[4] == 2) && (pcVar1 = *(param_1 + 0x94), pcVar1 != NULL)) && (*pcVar1 == '\x01')) {
        uVar2 = *param_2 / pcVar1[3] - 1 | (param_2[1] - 1) * 0x10000;
    }
    else {
        uVar2 = (param_2[1] - 1) * 0x10000 | *param_2 - 1;
    }
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x70190) = uVar2;
    }
    else {
        if (*0x1a0e4 == 1) {
            *(*0x1a0c4 + 0x71190) = uVar2;
            return;
        }
        if (*0x1a0e4 == 2) {
            *(*0x1a0c4 + 0x72190) = uVar2;
            return;
        }
    }
    return;
}


/* fcn.00019501 @ 0x19501 */

void __fastcall fcn.00019501(int param_1,uint32_t *param_2)

{
    char *pcVar1;
    int iVar2;
    uint32_t uVar3;
    
    if ((((param_2[4] == 2) && (pcVar1 = *(param_1 + 0x94), pcVar1 != NULL)) && (*pcVar1 != '\0')) &&
       ((pcVar1[5] != '\0' || (pcVar1[6] != '\0')))) {
        if ((*param_2 != 0) || (uVar3 = 0, param_2[1] != 0)) {
            uVar3 = *param_2 / pcVar1[3];
        }
        iVar2 = fcn.000194d8();
        *(iVar2 + *0x1a0c4) = *(iVar2 + *0x1a0c4) & 0xffff0000 | uVar3;
    }
    return;
}


/* fcn.0001bb53 @ 0x1bb53 */

void fcn.0001bb53(void)

{
    int iVar1;
    char cVar2;
    int extraout_ECX;
    uint extraout_ECX_00;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar1 = *0x1a0e8;
    iVar6 = 0;
    iVar3 = 0;
    iVar4 = 0;
    fcn.0001bd12();
    iVar5 = iVar1 - extraout_ECX;
    if (iVar1 == extraout_ECX) {
        iVar6 = 0x68180;
        iVar4 = 0x7002c;
        iVar3 = 0x68174;
    }
    else if (iVar5 == 1) {
        iVar6 = 0x68980;
        iVar4 = 0x7102c;
        iVar3 = 0x68974;
    }
    else if (iVar5 == 2) {
        iVar6 = 0x69180;
        iVar4 = 0x7202c;
        iVar3 = 0x69174;
    }
    cVar2 = fcn.000148da();
    iVar1 = *0x1a0c4;
    if (cVar2 == '\x01') {
        *(*0x1a0c4 + iVar4) = extraout_ECX_00;
    }
    *(iVar1 + iVar6) = extraout_ECX_00;
    *(iVar1 + iVar3) = extraout_ECX_00;
    return;
}


/* fcn.0001bbc1 @ 0x1bbc1 */

void __fastcall fcn.0001bbc1(int param_1)

{
    int iVar1;
    char cVar2;
    int iVar3;
    uint16_t uVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    int *piVar8;
    uint8_t uStack_46;
    uint8_t uStack_45;
    int aiStack_40 [5];
    int iStack_2c;
    char cStack_14;
    
    iVar5 = 0;
    uStack_45 = 0;
    iVar6 = 0;
    uStack_46 = 0;
    uVar4 = 0;
    piVar7 = param_1 + 0x2c;
    piVar8 = aiStack_40;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
        *piVar8 = *piVar7;
        piVar7 = piVar7 + 1;
        piVar8 = piVar8 + 1;
    }
    if (*0x1a0e8 == 0) {
        iVar5 = 0x68180;
        iVar6 = 0x7002c;
        iVar3 = 0x68174;
    }
    else if (*0x1a0e8 == 1) {
        iVar5 = 0x68980;
        iVar6 = 0x7102c;
        iVar3 = 0x68974;
    }
    else if (*0x1a0e8 == 2) {
        iVar5 = 0x69180;
        iVar6 = 0x7202c;
        iVar3 = 0x69174;
    }
    else {
        iVar3 = 0;
    }
    if ((*(param_1 + 0x10) == 5) || (*(param_1 + 0x10) == 1)) {
        iVar1 = *(param_1 + 0x8c);
        uStack_45 = *(iVar1 + 0x213);
        uVar4 = CONCAT11(*(iVar1 + 0x214),*(iVar1 + 0x212));
        uStack_46 = *(iVar1 + 0x215);
    }
    fcn.0001bd12();
    *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xfe7fffff | 0x80000000;
    *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xf1ffffff;
    *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xbfffffff;
    *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xdfffffff;
    cVar2 = fcn.000148da();
    if (cVar2 == '\x01') {
        *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) | 0x50000000;
    }
    if (cStack_14 != '\0') {
        iStack_2c = iStack_2c * 2;
    }
    *(*0x1a0c4 + iVar3) =
         ((aiStack_40[1] - uStack_46) - (uVar4 >> 8)) * 0x10000 | (iStack_2c - uStack_45) - (uVar4 & 0xff);
    return;
}


/* fcn.0001cd15 @ 0x1cd15 */

uint32_t __fastcall fcn.0001cd15(int param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = *(param_1 + 0x8c);
    cVar1 = *(iVar2 + 0x194);
    if (cVar1 == '\x06') {
        iVar3 = 0x18b820;
    }
    else if (cVar1 == '\n') {
        iVar3 = 2700000;
    }
    else if (cVar1 == '\x14') {
        iVar3 = 5400000;
    }
    else {
        if (cVar1 != '\x1e') {
            return 0;
        }
        iVar3 = 8100000;
    }
    return ((*(iVar2 + 0x30) & 0x1f) * iVar3 * 8) / (*(iVar2 + 0x10) * 10);
}


/* fcn.00019eb0 @ 0x19eb0 */

uint32_t __fastcall fcn.00019eb0(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar4 = 0;
    cVar1 = *(*(param_1 + 0x8c) + 8);
    if (*0x1a138 < 0xf9) {
        if (cVar1 != '\0') {
            if (cVar1 != '\x01') {
                if (cVar1 != '\x02') goto code_r0x00019f21;
code_r0x00019f0e:
                uVar4 = 0x28488;
                goto code_r0x00019f21;
            }
code_r0x00019f15:
            uVar4 = 0x48828;
            goto code_r0x00019f21;
        }
    }
    else {
        if (cVar1 == '\0') {
            uVar4 = 600000;
            goto code_r0x00019f21;
        }
        if (cVar1 == '\x01') goto code_r0x00019f15;
        if (cVar1 == '\x02') goto code_r0x00019f0e;
        if (cVar1 != '\x03') {
            if (cVar1 == '\x04') {
                uVar4 = 340000;
            }
            else if (cVar1 == '\x05') {
                uVar4 = 300000;
            }
            goto code_r0x00019f21;
        }
    }
    uVar4 = 0x91050;
code_r0x00019f21:
    if (*(*(param_1 + 0x8c) + 0xf) != '\0') {
        iVar2 = fcn.000195d3();
        if (iVar2 != 0) {
            uVar3 = fcn.00019e35();
            if (uVar3 <= uVar4) {
                uVar4 = uVar3;
            }
        }
    }
    return uVar4;
}


/* fcn.00016ed2 @ 0x16ed2 */

uint32_t __fastcall fcn.00016ed2(int param_1)

{
    uint8_t uVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = *(param_1 + 0x8c);
    uVar1 = *(iVar4 + 0x8b);
    iVar3 = fcn.00014679();
    if (*(iVar4 + 0x20c) < 3) {
        cVar2 = *(iVar4 + 0x8a);
        if (cVar2 == '\x06') {
            iVar4 = 0x18b820;
        }
        else if (cVar2 == '\n') {
            iVar4 = 2700000;
        }
        else if (cVar2 == '\x14') {
            iVar4 = 5400000;
        }
        else {
            if (cVar2 != '\x1e') {
                return 0;
            }
            iVar4 = 8100000;
        }
    }
    else {
        iVar4 = *(iVar4 + 0x8e + *(iVar4 + 0x8f) * 2) * 200;
    }
    return ((uVar1 & 0x1f) * iVar4 * 8) / (iVar3 * 10);
}


/* fcn.0001cd69 @ 0x1cd69 */

void fcn.0001cd69(void)

{
    int iVar1;
    
    iVar1 = fcn.00020750();
    *(iVar1 + *0x1a0c4) = *(iVar1 + *0x1a0c4) & 0xfffffbff | 0x300;
    return;
}


/* fcn.00020750 @ 0x20750 */

uint __fastcall fcn.00020750(int param_1)

{
    uint uVar1;
    
    uVar1 = 0;
    if (param_1 == 0) {
        uVar1 = 0x60540;
    }
    else {
        if (param_1 == 1) {
            return 0x61540;
        }
        if (param_1 == 2) {
            return 0x62540;
        }
        if (param_1 == 3) {
            return 0x63540;
        }
    }
    return uVar1;
}


/* fcn.0001f403 @ 0x1f403 */

int __fastcall fcn.0001f403(int param_1,int *param_2)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    char cVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iStack_28;
    uint32_t uStack_24;
    int *piStack_20;
    uint uStack_1c;
    uint uStack_18;
    ushort uStack_14;
    uchar uStack_12;
    ushort uStack_10;
    uint uStack_c;
    int *piStack_8;
    
    uVar9 = 0;
    iVar2 = *(param_1 + 0x8c);
    uStack_1c = *(iVar2 + 0x200);
    uStack_18 = *(iVar2 + 0x204);
    uVar1 = *(*(iVar2 + 0x1f8) + 6);
    iStack_28 = (uVar1 & 3) - 1;
    uStack_24 = *(iVar2 + 0x1a);
    if (((uVar1 & 3) == 0) || (*(param_1 + 0x6c) == 0)) {
        piStack_20 = param_2;
        fcn.0001945c();
        fcn.0001a2e8();
        iVar6 = fcn.0001f9f6();
        if (-1 < iVar6) {
            iVar6 = 0;
            if (*(*(*(param_1 + 0x8c) + 0x208) + 8) != 0) {
                iVar6 = fcn.00018a0f();
            }
            if (-1 < iVar6) {
                uVar8 = *(param_1 + 0x2c);
                *(iVar2 + 0x1fc) = uVar8;
                if (*0x1a08f != '\0') {
                    uVar8 = uVar8 >> 1;
                    *(iVar2 + 0x1fc) = uVar8;
                    if ((iStack_28 == 0) && (uStack_24 != 0)) {
                        uVar3 = (*(param_1 + 0x44) + *(param_1 + 0x40)) * uStack_24 * 0x3c;
                        uVar7 = uVar3 / 1000;
                        if (uVar3 % 1000 != 0) {
                            uVar7 = uVar7 + 1;
                        }
                        *(iVar2 + 0x1fc) = uVar7 + uVar8;
                    }
                }
                fcn.0001e9c6();
                uVar8 = fcn.00013ed9();
                if (*0x1a08f == '\0') {
                    uVar3 = *(iVar2 + 0x1fc);
                }
                else {
                    uVar3 = *(iVar2 + 0x1fc) * 2;
                }
                if (uVar8 < uVar3) {
                    iVar6 = -0x7ffffffe;
                }
                else {
                    iVar6 = fcn.0001de91();
                    if (-1 < iVar6) {
                        iVar6 = fcn.00016a6c();
                        if ((-1 < iVar6) && (iVar6 = fcn.0001e166(), -1 < iVar6)) {
                            iVar6 = fcn.0001e2c7();
                            if (-1 < iVar6) {
                                fcn.0001f299();
                                fcn.0001dd50(-0xf001,0x4000);
                                iVar6 = fcn.0001e3a2();
                                if ((-1 < iVar6) && (iVar6 = fcn.0001e724(), -1 < iVar6)) {
                                    fcn.0001f35a();
                                    iVar6 = fcn.0001e8ce();
                                    if (-1 < iVar6) {
                                        uStack_10 = 2;
                                        uStack_c = *(param_1 + 0x14);
                                        piStack_8 = &iStack_28;
                                        uStack_14 = 0x37;
                                        uStack_12 = 0;
                                        iStack_28 = CONCAT22(iStack_28._2_2_,0x20);
                                        iVar6 = fcn.0001f022();
                                        if (-1 < iVar6) {
                                            iVar6 = fcn.00018a0f();
                                            if ((-1 < iVar6) &&
                                               ((*0x1a08e == '\0' || (iVar6 = fcn.00018a0f(), -1 < iVar6)))) {
                                                fcn.0001f0af();
                                                iVar6 = fcn.0001e986();
                                                if ((-1 < iVar6) && (iVar6 = fcn.0001ea8c(), -1 < iVar6)) {
                                                    fcn.0001a1b9();
                                                    fcn.00019f44();
                                                    piVar4 = piStack_20;
                                                    fcn.00019fb2();
                                                    fcn.000192cc();
                                                    if ((*(param_1 + 0x30) != *piVar4) ||
                                                       (*(param_1 + 0x40) != piVar4[1])) {
                                                        fcn.0001bbc1();
                                                    }
                                                    fcn.0001471f();
                                                    fcn.0001a132();
                                                    if (*(iVar2 + 0xa8) != '\0') {
                                                        fcn.0001cb1e();
                                                    }
                                                    iVar6 = fcn.0001edb5();
                                                    if ((-1 < iVar6) && (iVar6 = fcn.00018a0f(), -1 < iVar6)) {
                                                        fcn.0001f3a7();
                                                        cVar5 = fcn.000148da();
                                                        if ((cVar5 == '\x01') || (*0x1a0d8 == 1)) {
                                                            fcn.0001a34e();
                                                        }
                                                        fcn.00018ffa();
                                                        if (*0x1a08e == '\x01') {
                                                            fcn.0001a1f1();
                                                        }
                                                        cVar5 = fcn.000148da();
                                                        if ((cVar5 == '\x01') || (*0x1a0d8 == 1)) {
                                                            fcn.0001955a();
                                                        }
                                                        fcn.00013584();
                                                        fcn.0001fb56(uStack_18,param_1);
                                                        return 0;
                                                    }
                                                }
                                            }
                                            fcn.0001e871();
                                        }
                                    }
                                }
                                if (*0x1a08f == '\x01') {
                                    uVar9 = 0xc00;
                                }
                                else if (*(param_1 + 0x14) == 8) {
                                    uVar9 = 0x400;
                                }
                                else if (*(param_1 + 0x14) == 9) {
                                    uVar9 = 0x800;
                                }
                                *(*0x1a0c4 + 0x164280) = ~uVar9 & *(*0x1a0c4 + 0x164280);
                                fcn.0001e30c();
                            }
                            fcn.00016d95();
                        }
                        fcn.0001dee2();
                    }
                }
                fcn.00018a0f();
            }
            fcn.0001faef();
        }
    }
    else {
        iVar6 = -0x7ffffff9;
    }
    return iVar6;
}


/* fcn.0001d401 @ 0x1d401 */

int __fastcall fcn.0001d401(int param_1,int param_2)

{
    int iVar1;
    char cVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    char extraout_DL;
    uint32_t uVar10;
    bool bVar11;
    char cStack_29;
    uchar uStack_26;
    uint8_t uStack_25;
    uint32_t uStack_24;
    uint uStack_18;
    uint32_t uStack_14;
    int32_t iStack_10;
    int iStack_c;
    uint32_t uStack_8;
    uint uStack_4;
    
    uStack_24 = 0;
    iVar1 = *(param_1 + 0x8c);
    iStack_c = param_2;
    iVar5 = fcn.0001a3c0();
    iVar6 = fcn.00020750();
    cStack_29 = '\0';
    uStack_25 = 0;
    uStack_26 = 0;
    fcn.0001945c();
    fcn.0001a2e8();
    cVar2 = fcn.000148da();
    if (cVar2 == '\x01') {
        cVar3 = fcn.000147e7();
        cVar2 = extraout_DL;
        if (cVar3 == '\0') {
            cStack_29 = extraout_DL;
        }
    }
    if ((*0x1a1a4 != '\0') ||
       (((*0x1a0d8 != 1 && ((cVar2 != '\x01' || (*(iVar1 + 0x24) == 3)))) || (iVar7 = fcn.0001ae7f(), -1 < iVar7)))) {
        cVar2 = *(iVar1 + 0x44);
        iStack_10 = fcn.00014679();
        uStack_18 = fcn.0001471f();
        uStack_26 = *(iVar1 + 0x194);
        uStack_4 = CONCAT31(uStack_4._1_3_,uStack_26);
        uStack_25 = *(iVar1 + 0x30) & 0x1f;
        uStack_8 = CONCAT31(uStack_8._1_3_,*(iVar1 + 0x30)) & 0xffffff1f;
        *(iVar1 + 0x195) = uStack_25;
        do {
            cVar3 = *(iVar1 + 0x194);
            if (cVar3 != '\0') {
                if (cVar3 == '\x06') {
                    uStack_24 = 0x18b820;
                }
                else if (cVar3 == '\n') {
                    uStack_24 = 2700000;
                }
                else if (cVar3 == '\x14') {
                    uStack_24 = 5400000;
                }
                else {
                    if (cVar3 != '\x1e') {
                        iVar7 = -0x7ffffffe;
                        break;
                    }
                    uStack_24 = 8100000;
                }
            }
            uVar8 = uStack_24 / 10;
            uStack_14 = uVar8;
            iVar7 = fcn.00022e93(uVar8,&iStack_10,&uStack_18);
            if (iVar7 < 0) break;
            uVar10 = *(*0x1a0c4 + iVar6);
            if (uVar10 < 0) {
                *(*0x1a0c4 + iVar6) = uVar10 & 0xfffffaff | 0x200;
                fcn.00013584();
                *(*0x1a0c4 + iVar6) = uVar10 & 0x7ffffaff | 0x200;
            }
            if ((cStack_29 != '\0') && (*(iVar1 + 0x24) != 2)) {
                fcn.0001a569();
            }
            iVar7 = fcn.000165ef();
            if (iVar7 < 0) break;
            cVar3 = fcn.000148da();
            if ((cVar3 == '\x01') && (cStack_29 != '\0')) {
                if (*(iVar1 + 0x24) != 2) {
                    uVar4 = fcn.0001a4c0();
                    fcn.00021633();
                    if ((uVar4 & 0xc) != 0) {
                        fcn.00021652();
                        fcn.00021684();
                    }
                    if ((uVar4 & 3) != 0) {
                        fcn.00021652();
                        fcn.00021684();
                    }
                    uVar8 = uStack_14;
                    goto code_r0x0001d625;
                }
            }
            else {
code_r0x0001d625:
                if ((*(iVar1 + 0x24) != 2) && (iVar7 = fcn.00020831(), iVar7 < 0)) break;
            }
            if ((cStack_29 != '\0') && ((*(iVar1 + 0x24) != 2 && (cVar3 = fcn.000148da(), cVar3 == '\x01')))) {
                fcn.0001a613();
            }
            fcn.0001fbe0();
            fcn.0001ff9b();
            uVar10 = 0;
            if (*(iVar1 + 0x30) < '\0') {
                uVar10 = 0x40000;
            }
            *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) & 0xfffbf8ff | uVar10;
            if ((cVar2 != '\0') && (*(iVar1 + 0x19c) != '\0')) {
                fcn.00023528();
            }
            *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) | 0x80000000;
            if (cStack_29 == '\0') {
                fcn.00014781(*(iVar1 + 0x14));
            }
            *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xfffffff1 | *(iVar1 + 0x195) * 2 - 2;
            if ((*(iVar1 + 0x14) == '\x01') && ((*(iVar1 + 0x24) == 0 || (*(iVar1 + 0x24) == 3)))) {
                *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) | 0x10000;
            }
            if (*(iVar1 + 0x24) == 1) {
                if (cStack_29 == '\x01') {
                    iVar7 = 100000 / (1000000000 / uVar8);
                    if (100000 % (1000000000 / uVar8) != 0) {
                        iVar7 = iVar7 + 1;
                    }
                    *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xffff00ff | iVar7 << 8;
                    goto code_r0x0001d768;
                }
            }
            else {
code_r0x0001d768:
                if (cStack_29 == '\x01') {
                    fcn.0001a3db();
                }
            }
            iVar7 = fcn.0001a448();
            if (iVar7 < 0) break;
            iVar9 = fcn.00022773();
            if (iVar9 == 3) {
                if ((*(iVar1 + 0x19d) != '\0') && (*(iVar1 + 0x19e) != '\0')) {
                    fcn.0001d2d7();
                }
                if (*(iStack_c + 0x10) != 2) {
                    fcn.0001cd69();
                }
                if (cVar2 != '\0') {
                    fcn.0001cb1e();
                }
                fcn.00019f44();
                fcn.00019fb2();
                fcn.000192cc();
                fcn.0001bbc1();
                fcn.0001a1b9();
                fcn.00022f99(uStack_14,*(iVar1 + 0x195),iStack_10);
                iVar1 = iStack_c;
                if (*(iStack_c + 0x10) == 2) {
                    fcn.0002058d();
                }
                fcn.0001fc94();
                fcn.0001fe6f();
                fcn.0001a132();
                fcn.000203e8();
                fcn.0001ff1e();
                fcn.000204e5();
                fcn.0002046c();
                if (*(iVar1 + 0x10) == 2) {
                    fcn.00019501();
                    fcn.0001a080();
                }
                fcn.00018ffa();
                return iVar7;
            }
            if ((cVar2 != '\0') && (*(iVar1 + 0x19c) != '\0')) {
                fcn.000235d5();
            }
            iVar7 = fcn.0001a3c0();
            *(iVar7 + *0x1a0c4) = *(iVar7 + *0x1a0c4) & 0x7fffffff;
            bVar11 = *0x1a1a4 == '\0';
            *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) & 0x7fffffff;
            if (bVar11) {
                iVar7 = 0;
                while (-1 < *(*0x1a0c4 + iVar5)) {
                    if (iVar7 == 10) goto code_r0x0001d870;
                    fcn.00013584();
                    iVar7 = iVar7 + 1;
                }
                if (iVar7 == 10) {
code_r0x0001d870:
                    iVar7 = -0x7fffffee;
                    break;
                }
            }
            fcn.00020547();
            fcn.00020686();
            if (*(iVar1 + 0x24) != 2) {
                fcn.00020911();
            }
            fcn.000159c0();
            iVar7 = fcn.000237c7(uStack_4,uStack_8);
        } while (-1 < iVar7);
    }
    *(iVar1 + 0x194) = uStack_26;
    *(iVar1 + 0x195) = uStack_25;
    return iVar7;
}


/* fcn.00019a35 @ 0x19a35 */

int __fastcall fcn.00019a35(int param_1,uint param_2)

{
    int iVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint extraout_ECX;
    int iVar6;
    bool bVar7;
    uchar uStack_12;
    uchar uStack_11;
    uint uStack_10;
    uint uStack_c;
    int iStack_8;
    int iStack_4;
    
    iVar1 = *(param_1 + 0x8c);
    uStack_c = param_2;
    iStack_4 = fcn.0001a3c0();
    iVar6 = 0;
    bVar7 = false;
    uStack_11 = 0;
    iStack_8 = *0x1a0d8;
    fcn.0001945c();
    fcn.0001a2e8();
    if (*0x1a1a4 == '\0') {
        uStack_10 = fcn.0001471f();
    }
    else {
        uStack_10 = 2;
    }
    cVar2 = fcn.000148da();
    if ((cVar2 == '\x01') && (cVar2 = fcn.000147e7(), cVar2 == '\0')) {
        bVar7 = true;
        uStack_11 = fcn.0001a4c0();
    }
    iVar3 = fcn.000197ac();
    if (bVar7) {
        fcn.0001a569();
    }
    iVar4 = fcn.000165ef();
    if (iVar4 < 0) {
        return iVar4;
    }
    iVar4 = fcn.00020831();
    if (iVar4 < 0) {
        return iVar4;
    }
    if ((bVar7) && (cVar2 = fcn.000148da(), cVar2 == '\x01')) {
        fcn.0001a613();
    }
    fcn.0001fbe0();
    fcn.00019f44();
    fcn.00019fb2();
    fcn.000192cc();
    fcn.0001bbc1();
    fcn.0001a1b9();
    fcn.0001fc94();
    fcn.0001fe6f();
    fcn.0001a132();
    fcn.0001ff9b();
    cVar2 = fcn.000197ee();
    if (cVar2 != '\0') {
        uVar5 = fcn.000197ac();
        uStack_12 = 1;
        if (340000 < uVar5) {
            uStack_12 = 3;
        }
        iVar4 = fcn.0001978f(extraout_ECX,&uStack_12);
        if (iVar4 < 0) {
            return -0x7ffffff9;
        }
        fcn.000200e7();
    }
    fcn.000203e8();
    fcn.000204e5();
    fcn.0002046c();
    if ((iStack_8 != 1) && (iStack_8 - 2U < 2)) {
        if (bVar7) {
            fcn.00024ea5();
        }
        else {
            fcn.00025f1b(0,0,*(iVar1 + 7),iVar3 * 10);
        }
    }
    cVar2 = fcn.000148da();
    if ((cVar2 == '\x01') && (!bVar7)) {
        if (*(param_1 + 0x14) == 0) {
            iVar6 = 0x162028;
        }
        else if (*(param_1 + 0x14) == 1) {
            iVar6 = 0x6c028;
        }
        *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) & 0xffffff0f;
    }
    if (*(iVar1 + 0x14) == '\x01') {
        *(*0x1a0c4 + iStack_4) = *(*0x1a0c4 + iStack_4) | 0x10000;
    }
    if (bVar7) {
        fcn.0001a3db();
    }
    iVar6 = fcn.0001a448();
    if (iVar6 < 0) {
        return iVar6;
    }
    fcn.00018ffa();
    if (*(iVar1 + 0xf) == '\0') {
        bVar7 = *(param_1 + 0x10) == 2;
code_r0x00019c87:
        if (!bVar7) goto code_r0x00019c8e;
    }
    else {
        iVar6 = fcn.000195d3();
        if ((iVar6 != 2) && (iVar6 != 3)) {
            bVar7 = iVar6 == 4;
            goto code_r0x00019c87;
        }
    }
    fcn.000199c5();
code_r0x00019c8e:
    cVar2 = fcn.000197ee();
    if ((cVar2 != '\0') && ((*(iVar1 + 0x3d) & 2) != 0)) {
        fcn.0001981e();
    }
    return 0;
}


/* fcn.00017b54 @ 0x17b54 */

int __fastcall fcn.00017b54(int param_1,int *param_2)

{
    uint8_t uVar1;
    int *piVar2;
    uchar uVar3;
    char cVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    bool bVar11;
    uint8_t uStack_1f;
    uchar auStack_1e [2];
    int iStack_1c;
    uint uStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int32_t iStack_c;
    int iStack_8;
    int *piStack_4;
    
    iVar6 = *(param_1 + 0x8c);
    piStack_4 = param_2;
    iStack_10 = fcn.0001a3c0();
    iStack_1c = fcn.00020750();
    if ((*(iVar6 + 0xa4) == '\0') || (*(param_1 + 0x6c) == 0)) {
        if ((*(iVar6 + 0x20c) < 3) && ((*(iVar6 + 0x8d) == '\x04' || (*(iVar6 + 0x8d) == '\x01')))) {
            *(iVar6 + 0x8d) = 0x1e;
        }
        fcn.0001945c();
        fcn.0001a2e8();
        if ((*0x1a1a4 == '\0') && (iVar5 = fcn.0001ae7f(), iVar5 < 0)) {
            return iVar5;
        }
        iStack_c = fcn.00014679();
        if (2 < *(iVar6 + 0x20c)) {
            if (*(iVar6 + 0x8c) == '\0') {
                uVar3 = fcn.000170e4();
                *(iVar6 + 0x8e) = uVar3;
            }
            else {
                uVar1 = *(iVar6 + 0x8f);
                uVar10 = 0;
                uVar8 = 0;
                if (uVar1 != 0) {
                    do {
                        uVar8 = uVar10;
                        if (*(iVar6 + 0x82) == *(iVar6 + 0x90 + uVar10 * 2)) {
                            *(iVar6 + 0x8e) = uVar8;
                            break;
                        }
                        uVar8 = uVar8 + 1;
                        uVar10 = uVar8;
                    } while (uVar8 < uVar1);
                }
                if ((uVar1 <= uVar8) || (cVar4 = fcn.00017080(), cVar4 == '\0')) goto code_r0x000182a1;
            }
        }
code_r0x00017c59:
        do {
            while (2 < *(iVar6 + 0x20c)) {
                uVar10 = *(iVar6 + 0x90 + *(iVar6 + 0x8e) * 2) * 200;
                if ((*(iVar6 + 0x8e) == 8) || (uVar10 == 0)) goto code_r0x000182a1;
                cVar4 = fcn.00017080();
                if (cVar4 != '\0') goto code_r0x00017c89;
                cVar4 = *(iVar6 + 0x8e) + '\x01';
code_r0x00017d7a:
                *(iVar6 + 0x8e) = cVar4;
            }
            cVar4 = *(iVar6 + 0x8d);
            if (cVar4 == '\x06') {
                uVar10 = 0x18b820;
            }
            else if (cVar4 == '\n') {
                uVar10 = 2700000;
            }
            else {
                if (cVar4 != '\x14') {
                    return -0x7ffffffe;
                }
                uVar10 = 5400000;
            }
code_r0x00017c89:
            iVar5 = fcn.00020f38();
            if (iVar5 < 0) {
                return iVar5;
            }
            if (*(iVar6 + 0x20e) < '\0') {
                iVar5 = fcn.00023aaa(8,1,0,&uStack_1f);
                if (iVar5 < 0) {
                    return iVar5;
                }
                uStack_1f = uStack_1f & 0xf9 | 1;
                iVar5 = fcn.00023c30(8,1,0,&uStack_1f);
                if (iVar5 < 0) {
                    return iVar5;
                }
            }
            fcn.00023694();
            uStack_18 = fcn.0001471f();
            uStack_14 = uVar10 / 10;
            if (*(iVar6 + 0x8c) == '\0') {
                uVar10 = *(iVar6 + 0x8b) & 0x1f;
            }
            else {
                uVar10 = *(iVar6 + 0x84);
            }
            if ((*(iVar6 + 0x20c) < 3) && (iVar5 = fcn.00022e93(uStack_14,&iStack_c,&uStack_18), iVar5 < 0)) {
code_r0x00018290:
                fcn.00020fc0();
                return iVar5;
            }
            uVar9 = *(*0x1a0c4 + iStack_1c);
            if (uVar9 < 0) {
                *(*0x1a0c4 + iStack_1c) = uVar9 & 0xfffffaff | 0x200;
                fcn.00013584();
                *(*0x1a0c4 + iStack_1c) = uVar9 & 0x7ffffaff | 0x200;
            }
            iVar5 = fcn.000165ef();
            if (iVar5 < 0) goto code_r0x00018290;
            iVar5 = fcn.00020831();
            if (iVar5 < 0) {
                return iVar5;
            }
            fcn.0001fbe0();
            fcn.0001ff9b();
            uVar9 = 0;
            if (*(iVar6 + 0x8b) < '\0') {
                uVar9 = 0x40000;
            }
            *(*0x1a0c4 + iStack_1c) = *(*0x1a0c4 + iStack_1c) & 0xfffbf8ff | uVar9;
            *(*0x1a0c4 + iStack_1c) = *(*0x1a0c4 + iStack_1c) | 0x80000000;
            fcn.00014781(*(iVar6 + 8));
            if (*(iVar6 + 0xa4) != '\0') {
                *(*0x1a0c4 + 0x78000) = *(*0x1a0c4 + 0x78000) & 0x3ef0ffff | (*(iVar6 + 0x1a) | 0xffff8000) << 0x10;
            }
            *(*0x1a0c4 + iStack_10) = *(*0x1a0c4 + iStack_10) & 0xfffffff1 | uVar10 * 2 - 2;
            if (*(iVar6 + 8) == '\x01') {
                *(*0x1a0c4 + iStack_10) = *(*0x1a0c4 + iStack_10) | 0x10000;
            }
            iStack_8 = fcn.0001a448();
            if (iStack_8 < 0) {
                return iStack_8;
            }
            if (*(iVar6 + 0xa8) != '\0') {
                fcn.00023528();
            }
            if (*(iVar6 + 0x8c) == '\x01') {
                iStack_8 = fcn.00022d80();
                if (iStack_8 == 0) {
code_r0x00017f1a:
                    *(*0x1a0c4 + iStack_1c) = *(*0x1a0c4 + iStack_1c) & 0xfffffbff | 0x300;
                    if (*(iVar6 + 0xa8) != '\0') {
                        fcn.0001cb1e();
                    }
                    fcn.00019f44();
                    piVar2 = piStack_4;
                    fcn.00019fb2();
                    fcn.000192cc();
                    if ((*(param_1 + 0x30) != *piVar2) || (*(param_1 + 0x40) != piVar2[1])) {
                        fcn.0001bbc1();
                    }
                    fcn.0001a1b9();
                    fcn.0001fc94();
                    fcn.0001fe6f();
                    fcn.0001a132();
                    fcn.00022f99(uStack_14,uVar10,iStack_c);
                    if (1 < *(iVar6 + 0x218)) {
                        fcn.0001780a(uVar10);
                    }
                    fcn.0002034f();
                    fcn.000203e8();
                    fcn.0001ff1e();
                    fcn.000204e5();
                    fcn.0002046c();
                    cVar4 = fcn.000148da();
                    if ((cVar4 == '\x01') || (*0x1a0d8 == 1)) {
                        fcn.0001a34e();
                    }
                    fcn.00018ffa();
                    cVar4 = fcn.000148da();
                    if ((cVar4 == '\x01') || (*0x1a0d8 == 1)) {
                        fcn.0001955a();
                    }
                    if (*(iVar6 + 0x78) < *(iVar6 + 0x68)) {
                        fcn.00013584();
                    }
                    fcn.00020ddf();
                    if (*(*(param_1 + 0x8c) + 0x34) == '\x02') {
                        fcn.0002669b();
                        fcn.00013584();
                    }
                    fcn.00020e4a();
                    if (*(iVar6 + 0x34) != '\x05') {
                        return iStack_8;
                    }
                    fcn.00023aaa(8,1,0,auStack_1e);
                    fcn.00023aaa(8,1,0,auStack_1e);
                    fcn.00023aaa(8,1,0,auStack_1e);
                    fcn.00023aaa(8,1,0,auStack_1e);
                    fcn.00023aaa(8,1,0,auStack_1e);
                    fcn.00023aaa(8,1,0,auStack_1e);
                    fcn.00023aaa(8,1,0,auStack_1e);
                    iVar6 = fcn.00023aaa(8,1,0,auStack_1e);
                    return iVar6;
                }
            }
            else {
                iVar5 = fcn.00022773();
                if (iVar5 == 3) goto code_r0x00017f1a;
                if (iVar5 == 4) goto code_r0x000182a1;
            }
            if (*(iVar6 + 0xa8) != '\0') {
                fcn.000235d5();
            }
            iVar7 = fcn.0001a3c0();
            iVar5 = iStack_10;
            *(iVar7 + *0x1a0c4) = *(iVar7 + *0x1a0c4) & 0x7fffffff;
            bVar11 = *0x1a1a4 == '\0';
            *(*0x1a0c4 + iStack_1c) = *(*0x1a0c4 + iStack_1c) & 0x7fffffff;
            if (bVar11) {
                iVar7 = 0;
                while (-1 < *(*0x1a0c4 + iVar5)) {
                    if (iVar7 == 10) {
                        return -0x7fffffee;
                    }
                    fcn.00013584();
                    iVar7 = iVar7 + 1;
                }
                if (iVar7 == 10) {
                    return -0x7fffffee;
                }
            }
            if (*(iVar6 + 0x20e) < '\0') {
                iVar5 = fcn.00023aaa(8,1,0,&uStack_1f);
                if (iVar5 < 0) {
                    return iVar5;
                }
                uStack_1f = uStack_1f & 0xfa | 2;
                iVar5 = fcn.00023c30(8,1,0,&uStack_1f);
                if (iVar5 < 0) {
                    return iVar5;
                }
            }
            fcn.00020fc0();
            fcn.00020547();
            fcn.00020686();
            fcn.00020911();
            fcn.000159c0();
            if (*(iVar6 + 0x8c) == '\x01') {
                *(iVar6 + 0x8c) = 0;
                if (2 < *(iVar6 + 0x20c)) {
                    cVar4 = fcn.000170e4();
                    goto code_r0x00017d7a;
                }
                *(iVar6 + 0x8d) = *(iVar6 + 0x8a);
                goto code_r0x00017c59;
            }
            if (2 < *(iVar6 + 0x20c)) {
                *(iVar6 + 0x8e) = *(iVar6 + 0x8e) + '\x01';
                goto code_r0x00017c59;
            }
            iVar5 = fcn.000236f8();
        } while (-1 < iVar5);
    }
    else {
code_r0x000182a1:
        iVar5 = -0x7ffffff9;
    }
    return iVar5;
}


/* fcn.00013c11 @ 0x13c11 */

//WARNING: Control flow encountered bad instruction data

void __fastcall fcn.00013c11(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if (*(param_1 + 0xc) == 4) {
        uVar1 = (-(*(param_1 + 0x18) != 0) & 0x78) + 8;
    }
    if (*(param_1 + 0xc) == 3) {
        switch(*(param_1 + 0x18)) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        }
    }
    if (*(param_1 + 0x74) == 1) {
        uVar1 = uVar1 << 8;
    }
    else if (*(param_1 + 0x74) == 2) {
        uVar1 = uVar1 << 0x10;
    }
    *(*0x1a0c4 + 0x4f060) = *(*0x1a0c4 + 0x4f060) | uVar1;
    return;
}


/* fcn.00015b6d @ 0x15b6d */

uint32_t __fastcall fcn.00015b6d(int param_1)

{
    int iVar1;
    uint32_t in_EAX;
    uint32_t uVar2;
    uint32_t uVar3;
    
    if (*(param_1 + 0x10) == 5) {
        return in_EAX & 0xffffff00;
    }
    iVar1 = *(param_1 + 0x14);
    if (iVar1 == 0) {
        uVar3 = 0x400;
    }
    else if (iVar1 == 1) {
        uVar3 = 0x800;
    }
    else if (iVar1 == 4) {
        uVar3 = 0x1000;
    }
    else if (iVar1 == 5) {
        uVar3 = 0x2000;
    }
    else if (iVar1 == 6) {
        uVar3 = 0x4000;
    }
    else {
        if (iVar1 + -7 != 0) {
            return CONCAT31(iVar1 + -7 >> 8,1);
        }
        uVar3 = 0x200000;
    }
    uVar2 = *(*0x1a0c4 + 0x164280) & uVar3;
    return CONCAT31(uVar2 >> 8,uVar2 == uVar3);
}


/* fcn.0001f7ad @ 0x1f7ad */

uint __fastcall fcn.0001f7ad(int param_1)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    
    uVar3 = 0;
    fcn.00018a0f();
    fcn.00013584();
    cVar1 = *(*(param_1 + 0x8c) + 0x34);
    if (cVar1 == '\x02') {
        fcn.000266fb();
    }
    else if (cVar1 == '\x03') {
        fcn.00026806();
    }
    fcn.00013584();
    cVar1 = fcn.000148da();
    if ((cVar1 == '\x01') || (*0x1a0d8 == 1)) {
        fcn.00019599();
    }
    fcn.00019121();
    cVar1 = fcn.000148da();
    if ((cVar1 == '\x01') || (*0x1a0d8 == 1)) {
        fcn.0001a387();
    }
    fcn.0001dd08(0x7fffffff);
    if (*0x1a1a4 == '\x01') {
        uVar4 = 1000000000;
    }
    else {
        uVar4 = 34000;
    }
    fcn.0001ddc7(0x40000000,0,uVar4);
    fcn.0001cc9b();
    fcn.00018a0f();
    fcn.00018a0f();
    fcn.0001f0af();
    uVar2 = fcn.0001dda3();
    fcn.0001dd50(-0x102,uVar2 | 1);
    fcn.0001ddc7(0x10000,1,0x32);
    fcn.0001e871();
    fcn.0001bb53();
    if (*0x1a08f == '\x01') {
        uVar3 = 0xc00;
    }
    else if (*(param_1 + 0x14) == 8) {
        uVar3 = 0x400;
    }
    else if (*(param_1 + 0x14) == 9) {
        uVar3 = 0x800;
    }
    *(*0x1a0c4 + 0x164280) = ~uVar3 & *(*0x1a0c4 + 0x164280);
    fcn.0001e30c();
    fcn.0001dee2();
    fcn.00016d95();
    fcn.00018a0f();
    fcn.0001faef();
    return 0;
}


/* fcn.0001d95e @ 0x1d95e */

void __fastcall fcn.0001d95e(int param_1,int param_2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    
    iVar2 = fcn.0001a3c0();
    iVar5 = *(param_1 + 0x8c);
    iVar3 = fcn.00020750();
    iVar6 = 0;
    fcn.00019121();
    if (*(param_2 + 0x10) == 2) {
        fcn.00019501();
    }
    fcn.000206cc();
    fcn.00020547();
    if (*(param_2 + 0x10) == 2) {
        fcn.00020623();
        fcn.0001a080();
    }
    fcn.0001bb53();
    fcn.0001cc9b();
    fcn.000235d5();
    if ((*(*0x1a0c4 + iVar2) & 0x10000) != 0) {
        *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 0xfffeffff;
    }
    iVar4 = fcn.0001a3c0();
    *(iVar4 + *0x1a0c4) = *(iVar4 + *0x1a0c4) & 0x7fffffff;
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0x7fffffff;
    if (*0x1a1a4 == '\0') {
        iVar3 = 0;
        while (-1 < *(*0x1a0c4 + iVar2)) {
            if (iVar3 == 10) goto code_r0x0001da94;
            fcn.00013584();
            iVar3 = iVar3 + 1;
        }
        if (iVar3 == 10) goto code_r0x0001da94;
    }
    fcn.00020686();
    if (*(iVar5 + 0x24) != 2) {
        fcn.00020911();
    }
    fcn.000159c0();
    iVar6 = fcn.0001ae22();
    if (*0x1a1a4 == '\0') {
        cVar1 = fcn.000148da();
        if (((cVar1 != '\x01') || (*(iVar5 + 0x24) != 3)) || (iVar6 != 0)) {
            fcn.0001b031();
        }
    }
code_r0x0001da94:
    cVar1 = fcn.000148da();
    if (((cVar1 == '\x01') && (*(iVar5 + 0x24) != 2)) && (iVar6 != 0)) {
        iVar5 = fcn.0001a3c0();
        *(iVar5 + *0x1a0c4) = *(iVar5 + *0x1a0c4) & 0xffffffbf;
    }
    return;
}


/* fcn.00019cb0 @ 0x19cb0 */

void __fastcall fcn.00019cb0(uint32_t param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint extraout_ECX;
    int iVar5;
    bool bVar6;
    uint32_t uStack_4;
    
    iVar4 = *(param_1 + 0x8c);
    uStack_4 = param_1;
    iVar2 = fcn.0001a3c0();
    iVar5 = 0;
    uStack_4 = 0;
    if (*(param_1 + 0x10) == 2) {
        if (*0x1a0e8 == 0) {
            *(*0x1a0c4 + 0x60200) = *(*0x1a0c4 + 0x60200) & 0xffffefff;
        }
        else if (*0x1a0e8 == 1) {
            *(*0x1a0c4 + 0x61200) = *(*0x1a0c4 + 0x61200) & 0xffffefff;
        }
        else if (*0x1a0e8 == 2) {
            *(*0x1a0c4 + 0x62200) = *(*0x1a0c4 + 0x62200) & 0xffffefff;
        }
    }
    fcn.00019121();
    fcn.000206cc();
    fcn.00020547();
    fcn.0001bb53();
    cVar1 = fcn.000197ee();
    if (cVar1 == '\x01') {
        uStack_4 = 0;
        fcn.0001978f(extraout_ECX,&uStack_4);
        fcn.00020151();
    }
    fcn.00020686();
    uStack_4 = *(*0x1a0c4 + iVar2);
    if ((uStack_4 & 0x10000) != 0) {
        *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 0xfffeffff;
    }
    iVar3 = fcn.0001a3c0();
    bVar6 = *0x1a1a4 == '\0';
    *(iVar3 + *0x1a0c4) = *(iVar3 + *0x1a0c4) & 0x7fffffff;
    if (bVar6) {
        while (uStack_4 = *(*0x1a0c4 + iVar2), -1 < uStack_4) {
            if (iVar5 == 10) {
                return;
            }
            fcn.00013584();
            iVar5 = iVar5 + 1;
        }
        if (iVar5 == 10) {
            return;
        }
    }
    fcn.00020911();
    fcn.000159c0();
    iVar2 = fcn.0001ae22();
    if (((*0x1a1a4 == '\0') && (cVar1 = fcn.000148da(), cVar1 == '\x01')) && (*(iVar4 + 0x24) == 3)) {
        if (iVar2 == 0) {
            return;
        }
        fcn.0001b031();
    }
    if (iVar2 != 0) {
        iVar4 = fcn.0001a3c0();
        *(iVar4 + *0x1a0c4) = *(iVar4 + *0x1a0c4) & 0xffffffbf;
    }
    return;
}


/* fcn.0001796a @ 0x1796a */

uint __fastcall fcn.0001796a(int param_1)

{
    uint8_t uVar1;
    char cVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    int extraout_EDX;
    int iVar6;
    bool bVar7;
    uint8_t uStack_5;
    uint32_t uStack_4;
    
    iVar3 = fcn.0001a3c0();
    iVar5 = *(param_1 + 0x8c);
    uStack_4 = fcn.00020750();
    fcn.00020ec1();
    if (*(*(param_1 + 0x8c) + 0x34) == '\x02') {
        fcn.00013584();
        fcn.000266fb();
    }
    if (*(iVar5 + 0x7c) < *(iVar5 + 0x6c)) {
        fcn.00013584();
    }
    cVar2 = fcn.000148da();
    if ((cVar2 == '\x01') || (*0x1a0d8 == 1)) {
        fcn.00019599();
    }
    fcn.00019121();
    cVar2 = fcn.000148da();
    if ((cVar2 == '\x01') || (*0x1a0d8 == 1)) {
        fcn.0001a387();
    }
    fcn.000206cc();
    cVar2 = fcn.000148da();
    if (cVar2 != '\0') {
        if (*0x1a0fc == extraout_EDX) {
            iVar6 = 0x60404;
        }
        else {
            iVar6 = extraout_EDX;
            if (*0x1a0fc - extraout_EDX == 1) {
                iVar6 = 0x61404;
            }
        }
        *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) & 0xfffffff7;
    }
    fcn.00020547();
    fcn.0001bb53();
    fcn.0001cc9b();
    fcn.000235d5();
    if ((*(*0x1a0c4 + iVar3) & 0x10000) != 0) {
        *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0xfffeffff;
    }
    iVar6 = fcn.0001a3c0();
    *(iVar6 + *0x1a0c4) = *(iVar6 + *0x1a0c4) & 0x7fffffff;
    bVar7 = *0x1a1a4 == '\0';
    *(*0x1a0c4 + uStack_4) = *(*0x1a0c4 + uStack_4) & 0x7fffffff;
    if (bVar7) {
        iVar6 = 0;
        while (uVar4 = *(*0x1a0c4 + iVar3), -1 < uVar4) {
            if (iVar6 == 10) {
                return uVar4;
            }
            fcn.00013584();
            iVar6 = iVar6 + 1;
        }
        if (iVar6 == 10) {
            return uVar4;
        }
    }
    fcn.00020686();
    if (*(iVar5 + 0x20e) < '\0') {
        fcn.00023aaa(8,1,0,&uStack_5);
        uStack_5 = uStack_5 & 0xfa | 2;
        fcn.00023c30(8,1,0,&uStack_5);
    }
    fcn.00020fc0();
    fcn.00020911();
    fcn.000159c0();
    uVar4 = fcn.000201e9();
    if (*0x1a1a4 == '\0') {
        iVar5 = *(param_1 + 0x8c);
        if (*(param_1 + 0x10) == 1) {
            uVar1 = *(iVar5 + 0xb);
            iVar5 = 0;
        }
        else {
            uVar1 = *(iVar5 + 1);
            iVar5 = *(iVar5 + 0x24);
        }
        if (uVar1 < 0x61) {
            if (uVar1 == 0x60) {
                uStack_4 = ((iVar5 == 2) - 1 & 0xfff80080) + 0x80000;
            }
            else if (uVar1 == 0x10) {
                uStack_4 = 8;
            }
            else {
                uStack_4 = 0x20;
                if (uVar1 != 0x20) {
                    if (uVar1 == 0x30) {
                        uStack_4 = 0x8000;
                    }
                    else {
                        if (uVar1 != 0x40) {
                            return 0x80000007;
                        }
                        uStack_4 = 2;
                    }
                }
            }
        }
        else if (uVar1 == 0x70) {
            uStack_4 = ((iVar5 != 2) - 1 & 0x1ffe00) + 0x200;
        }
        else if (uVar1 == 0x80) {
            uStack_4 = ((iVar5 == 2) - 1 & 0xff800800) + 0x800000;
        }
        else {
            if (uVar1 != 0x90) {
                return 0x80000007;
            }
            uStack_4 = ((iVar5 == 2) - 1 & 0xfe002000) + 0x2000000;
        }
        *(*0x1a0c4 + 0x45444) = ~uStack_4 & *(*0x1a0c4 + 0x45444);
        uStack_4 = 0x1b10b;
        fcn.00013584();
        return 0;
    }
    return uVar4;
}


/* fcn.00013cb1 @ 0x13cb1 */

uint __fastcall fcn.00013cb1(int param_1,int param_2,int param_3)

{
    char cVar1;
    uint uVar2;
    
    if ((param_1 == 0) || (param_2 == 0)) {
        return 0x80000002;
    }
    if (param_3 == 0) {
        *(param_2 + 0x6c) = 0;
        *(param_2 + 0x74) = 0;
        *(param_2 + 0x78) = 0;
        uVar2 = 1;
    }
    else {
        if (param_3 != 1) goto code_r0x00013cf3;
        *(param_2 + 0x6c) = 1;
        *(param_2 + 0x74) = 1;
        *(param_2 + 0x78) = 1;
        uVar2 = 2;
    }
    *(param_1 + 0x78) = uVar2;
    *(param_1 + 0x74) = uVar2;
    *(param_1 + 0x6c) = uVar2;
code_r0x00013cf3:
    *(param_2 + 0x7c) = *(param_1 + 0x6c);
    *(param_2 + 0x84) = *(param_1 + 0x74);
    *(param_2 + 0x88) = *(param_1 + 0x78);
    cVar1 = fcn.0001a2af();
    if ((cVar1 != '\0') && (cVar1 = fcn.0001a2af(), cVar1 != '\0')) {
        uVar2 = fcn.00015bd5();
        *(param_1 + 0x70) = uVar2;
        uVar2 = fcn.00015bd5();
        *(param_2 + 0x70) = uVar2;
        return 0;
    }
    return 0x80000007;
}


/* fcn.00013fb2 @ 0x13fb2 */

int __fastcall fcn.00013fb2(int param_1)

{
    int iVar1;
    int iVar2;
    
    if (param_1 == 0) {
        return -0x7ffffff9;
    }
    *0x1a0e8 = *(param_1 + 0x6c);
    iVar2 = -0x7ffffff9;
    *0x1a0e4 = *(param_1 + 0x74);
    *0x1a0fc = *(param_1 + 0x78);
    fcn.00018e4b(0);
    fcn.00018e4b(1);
    fcn.00013db5();
    iVar1 = *(param_1 + 0x10);
    if (iVar1 == 1) {
        iVar2 = fcn.00017b54();
    }
    else if (iVar1 == 2) {
code_r0x00014033:
        iVar2 = fcn.00019a35();
    }
    else if (iVar1 == 3) {
        iVar2 = fcn.0001d401();
    }
    else {
        if (iVar1 == 4) goto code_r0x00014033;
        if (iVar1 != 5) goto code_r0x0001404d;
        iVar2 = fcn.0001f403();
    }
    if (iVar2 < 0) {
        return -0x7ffffff9;
    }
code_r0x0001404d:
    fcn.00013c11();
    return iVar2;
}


/* fcn.0001a3c0 @ 0x1a3c0 */

uint __fastcall fcn.0001a3c0(int param_1)

{
    uint uVar1;
    uint32_t uVar2;
    
    uVar1 = 0;
    uVar2 = 0;
    do {
        if (*(uVar2 + 0x17110) == param_1) {
            uVar1 = *(uVar2 + 0x17114);
        }
        uVar2 = uVar2 + 8;
    } while (uVar2 < 0x30);
    return uVar1;
}


/* fcn.0001405c @ 0x1405c */

uint __fastcall fcn.0001405c(int param_1)

{
    int iVar1;
    char cVar2;
    
    *0x1a0e8 = *(param_1 + 0x6c);
    *0x1a0e4 = *(param_1 + 0x74);
    *0x1a0fc = *(param_1 + 0x78);
    cVar2 = fcn.00015b6d();
    if (cVar2 != '\x01') {
        iVar1 = *(param_1 + 0x10);
        if (iVar1 == 1) {
            fcn.0001796a();
        }
        else {
            if (iVar1 != 2) {
                if (iVar1 == 3) {
                    fcn.0001d95e();
                    return 0;
                }
                if (iVar1 != 4) {
                    if (iVar1 != 5) {
                        return 0;
                    }
                    fcn.0001f7ad();
                    return 0;
                }
            }
            fcn.00019cb0();
        }
    }
    return 0;
}


/* fcn.00013d4a @ 0x13d4a */

void __fastcall fcn.00013d4a(int param_1,int param_2,int param_3)

{
    uint uVar1;
    
    if (param_1 == 0) {
        return;
    }
    if (param_2 == 0) {
        return;
    }
    if (param_3 == 0) {
        *(param_2 + 0x6c) = 0;
        *(param_2 + 0x74) = 0;
        *(param_2 + 0x78) = 0;
        uVar1 = 1;
    }
    else {
        if (param_3 != 1) goto code_r0x00013d88;
        *(param_2 + 0x6c) = 1;
        *(param_2 + 0x74) = 1;
        *(param_2 + 0x78) = 1;
        uVar1 = 2;
    }
    *(param_1 + 0x78) = uVar1;
    *(param_1 + 0x74) = uVar1;
    *(param_1 + 0x6c) = uVar1;
code_r0x00013d88:
    *(param_2 + 0x7c) = *(param_1 + 0x6c);
    *(param_2 + 0x84) = *(param_1 + 0x74);
    *(param_2 + 0x88) = *(param_1 + 0x78);
    uVar1 = fcn.000165da();
    *(param_1 + 0x70) = uVar1;
    uVar1 = fcn.000165da();
    *(param_2 + 0x70) = uVar1;
    return;
}


/* fcn.00013e3d @ 0x13e3d */

uint __fastcall fcn.00013e3d(int param_1,int *param_2)

{
    int iVar1;
    uint in_EAX;
    int iVar2;
    uint unaff_EBX;
    int iVar3;
    uint32_t uVar4;
    uint unaff_EBP;
    uint32_t uVar5;
    uint unaff_ESI;
    int iVar6;
    uint uVar7;
    uint unaff_EDI;
    int iVar8;
    bool bVar9;
    
    if (param_1 == 0) {
        return in_EAX;
    }
    *0x1a0e8 = *(param_1 + 0x6c);
    *0x1a0e4 = *(param_1 + 0x74);
    *0x1a0fc = *(param_1 + 0x78);
    fcn.00018e4b(0);
    fcn.00018e4b(1);
    fcn.00019121();
    fcn.00013db5();
    fcn.00019f44();
    fcn.0001bd12();
    fcn.00019fb2();
    fcn.000192cc();
    fcn.00019501();
    if ((*(param_1 + 0x30) == *param_2) && (*(param_1 + 0x40) == param_2[1])) {
        fcn.0001bb53();
    }
    else {
        fcn.0001bbc1();
    }
    iVar2 = *0x1a0c4;
    iVar1 = *(param_1 + 0xac);
    iVar3 = 0;
    iVar6 = 0;
    uVar5 = *(param_1 + 0xa4) << 0xe | *(param_1 + 0xa0);
    uVar4 = *(param_1 + 0xa8);
    iVar8 = 0;
    if (*0x1a0e4 == 0) {
        iVar8 = 0x70240;
        iVar3 = 0x70244;
        iVar6 = 0x70258;
    }
    else if (*0x1a0e4 == 1) {
        iVar8 = 0x71240;
        iVar3 = 0x71244;
        iVar6 = 0x71258;
    }
    else if (*0x1a0e4 == 2) {
        iVar8 = 0x72240;
        iVar3 = 0x72244;
        iVar6 = 0x72258;
    }
    bVar9 = *0x1a0d8 != 1;
    *(*0x1a0c4 + iVar8) = uVar5 | 0x80000000;
    *(iVar2 + iVar3) = uVar5;
    if (bVar9) {
        *(iVar2 + iVar6) = iVar1 << 0xe | uVar4 | 0x80000000;
    }
    if (*0x1a0e4 == 0) {
        *(iVar2 + 0x701cc) = *(iVar2 + 0x701cc) | 0x2000;
    }
    else if (*0x1a0e4 == 1) {
        *(iVar2 + 0x711cc) = *(iVar2 + 0x711cc) | 0x2000;
    }
    else {
        if (*0x1a0e4 != 2) goto code_r0x000190d1;
        *(iVar2 + 0x721cc) = *(iVar2 + 0x721cc) | 0x2000;
    }
    iVar2 = *0x1a0c4;
code_r0x000190d1:
    if (*0x1a0e4 == 0) {
        *(iVar2 + 0x70180) = *(iVar2 + 0x70180) | 0x80000000;
    }
    else if (*0x1a0e4 == 1) {
        *(iVar2 + 0x71180) = *(iVar2 + 0x71180) | 0x80000000;
    }
    else if (*0x1a0e4 == 2) {
        *(iVar2 + 0x72180) = *(iVar2 + 0x72180) | 0x80000000;
    }
    fcn.00018fe8(unaff_EDI,unaff_ESI);
    uVar7 = 0;
    if (*0x1a1a4 == '\x01') {
        return 0;
    }
    if (*0x1a0e8 == 0) {
        iVar3 = 0x44408;
    }
    else if (*0x1a0e8 == 1) {
        iVar3 = 0x44418;
    }
    else {
        if (*0x1a0e8 != 2) {
            return 0x80000002;
        }
        iVar3 = 0x44428;
    }
    uVar4 = 0;
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) | 1;
    do {
        fcn.00013584(unaff_EBP,unaff_EBX,unaff_EDI,unaff_ESI);
        if ((*(*0x1a0c4 + iVar3) & 1) != 0) break;
        uVar4 = uVar4 + 1000;
    } while (uVar4 < 500000);
    if (uVar4 == 500000) {
        uVar7 = 0x80000012;
    }
    return uVar7;
}


/* fcn.00013f58 @ 0x13f58 */

uint __fastcall fcn.00013f58(int param_1,int param_2,int param_3)

{
    if ((((param_1 != 0) && (param_2 != 0)) && ((*(param_1 + 0x10) == 3 || (*(param_2 + 0x10) == 3)))) &&
       (((**(param_1 + 0x94) == '\x01' || (**(param_2 + 0x94) == '\x01')) && (*(param_3 + 0x10) == 2)))) {
        fcn.0001cd69();
        fcn.00013584();
        fcn.0001cd69();
        return 0;
    }
    return 0x80000003;
}


/* fcn.00014235 @ 0x14235 */

uint __fastcall fcn.00014235(int param_1)

{
    int iVar1;
    int iVar2;
    
    if (((*(param_1 + 0x1c) == '\0') && (*(param_1 + 0x1d) != '\0')) && (iVar1 = *(param_1 + 0x98), iVar1 != 4)) {
        iVar2 = fcn.0001a3c0();
        if (*(iVar2 + *0x1a0c4) < 0) {
            fcn.0001405c();
            *(iVar1 + 0x68) = 3;
            *(iVar1 + 0x6c) = 0xe;
            *(iVar1 + 0x70) = 3;
            *(iVar1 + 0x74) = 7;
        }
    }
    fcn.0001405c();
    iVar1 = *0x1a0c4;
    *(param_1 + 0x6c) = 3;
    *(param_1 + 0x74) = 3;
    *(param_1 + 0x70) = 0xe;
    *(param_1 + 0x78) = 7;
    *(iVar1 + 0x4f060) = 0;
    return 0;
}


/* fcn.0001ba18 @ 0x1ba18 */

int __fastcall fcn.0001ba18(char param_1)

{
    bool bVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0;
    bVar1 = false;
    iVar2 = 0;
    if (*0x1a0d8 == 1) {
        iVar2 = *(*0x1a0c4 + 0x46008);
    }
    if (((-1 < iVar2) && (*0x1a0ec == 0x28c)) && (*0x1a0d8 == 1)) {
        bVar1 = true;
    }
    if (param_1 == '\0') {
        if (*0x1a0ec != *0x1a108) {
            if (iVar2 < 0) {
                *(*0x1a0c4 + 0x46008) = *(*0x1a0c4 + 0x46008) & 0x7fffffff;
            }
            iVar3 = fcn.0001b6ce();
            if (iVar3 < 0) {
                iVar3 = -0x7ffffff9;
            }
        }
    }
    else if ((iVar2 < 0) || (bVar1)) {
        iVar3 = fcn.0001b9be();
    }
    else {
        if (iVar2 < 0) {
            *(*0x1a0c4 + 0x46008) = *(*0x1a0c4 + 0x46008) & 0x7fffffff;
        }
        iVar3 = fcn.0001b962();
    }
    return iVar3;
}


/* fcn.000268b6 @ 0x268b6 */

uint __fastcall fcn.000268b6(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000102b0(param_1,param_2);
    return uVar1;
}


/* fcn.000140c2 @ 0x140c2 */

int __fastcall fcn.000140c2(int param_1,int param_2,char param_3,int param_4)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    
    iVar4 = 0;
    if (((*(param_2 + 0x10) == 2) && (*(param_1 + 0x1c) == '\0')) && (*(param_1 + 0x1d) != '\0')) {
        iVar4 = *(param_1 + 0x98) + -4;
    }
    if (param_3 == '\x01') {
        if ((*(param_2 + 0x10) == 2) && (iVar4 != 0)) {
            iVar2 = fcn.00013cb1(param_4);
            if (iVar2 < 0) {
                return iVar2;
            }
        }
        else {
            if (param_4 == 0) {
                *(param_1 + 0x6c) = 0;
                *(param_1 + 0x74) = 0;
                *(param_1 + 0x78) = 0;
            }
            else if (param_4 == 1) {
                *(param_1 + 0x6c) = 1;
                *(param_1 + 0x74) = 1;
                *(param_1 + 0x78) = 1;
            }
            cVar1 = fcn.0001a2af();
            if (cVar1 == '\0') {
                return -0x7ffffff9;
            }
            uVar3 = fcn.00015bd5();
            *(param_1 + 0x70) = uVar3;
        }
    }
    else {
        if ((*(param_2 + 0x10) == 2) && (iVar4 != 0)) {
            fcn.00013d4a(param_4);
        }
        else {
            if (param_4 == 0) {
                *(param_1 + 0x6c) = 0;
                *(param_1 + 0x74) = 0;
                *(param_1 + 0x78) = 0;
            }
            else if (param_4 == 1) {
                *(param_1 + 0x6c) = 1;
                *(param_1 + 0x74) = 1;
                *(param_1 + 0x78) = 1;
            }
            uVar3 = fcn.000165da();
            *(param_1 + 0x70) = uVar3;
        }
        if (param_3 == '\0') {
            if (*(param_2 + 0x10) == 2) {
                fcn.00013e3d();
            }
            fcn.00013e3d();
            return 0;
        }
    }
    if (((*(param_2 + 0x10) == 2) && (iVar4 != 0)) && (iVar2 = fcn.00013fb2(), iVar2 < 0)) {
        return iVar2;
    }
    iVar2 = fcn.00013fb2();
    if (((iVar2 < 0) && (iVar4 != 0)) && (iVar4 = fcn.0001a3c0(), *(iVar4 + *0x1a0c4) < 0)) {
        fcn.0001405c();
    }
    else if (*(param_2 + 0x10) == 2) {
        fcn.00013f58(param_2);
    }
    return iVar2;
}


/* fcn.00010839 @ 0x10839 */

void fcn.00010839(void)

{
    int iVar1;
    
    iVar1 = (**(*0x1a0b4 + 4))(0x16d78);
    if (iVar1 < 0) {
        *0x16d78 = 1;
    }
    return;
}


/* fcn.000182ae @ 0x182ae */

int __fastcall fcn.000182ae(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 0;
    iVar2 = *(param_1 + 0x8c);
    if (((*0x1a1a4 == '\0') && (iVar1 = fcn.0001a3c0(), -1 < *(*0x1a0c4 + iVar1))) &&
       (iVar3 = fcn.0001ae7f(), iVar3 < 0)) {
        return iVar3;
    }
    iVar1 = fcn.0001a3c0();
    if (-1 < *(*0x1a0c4 + iVar1)) {
        fcn.0001a978();
        rdtsc();
        iVar3 = fcn.00016f56();
        rdtsc();
        if (iVar3 < 0) {
            if (*0x1a1a4 != '\0') {
                return iVar3;
            }
            iVar2 = fcn.0001a3c0();
            if (*(iVar2 + *0x1a0c4) < 0) {
                return iVar3;
            }
            fcn.0001b031();
            return iVar3;
        }
    }
    *(iVar2 + 0x219) = 0;
    iVar1 = fcn.00024495(param_1 + 0x24);
    if (iVar1 < 0) {
        if (*(iVar2 + 0x20d) == -1) {
            *(iVar2 + 0x20d) = 0;
        }
        fcn.000215ca();
        *(iVar2 + 0x219) = 1;
    }
    return iVar3;
}


/* fcn.0001f30d @ 0x1f30d */

uint __fastcall fcn.0001f30d(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = *(*(param_1 + 0x8c) + 0x1f8);
    *0x1a08e = *(iVar1 + 2) >> 5 & 1;
    *0x1a08f = (*(iVar1 + 6) & 3) != 0;
    uVar2 = fcn.0001dda3();
    if ((uVar2 & 0x40000000) == 0) {
        fcn.0001f98c();
    }
    fcn.000215ca();
    return 0;
}


/* fcn.0001dda3 @ 0x1dda3 */

uint __fastcall fcn.0001dda3(int param_1,int param_2)

{
    if ((*0x1a08f == '\0') && (param_1 != 8)) {
        return *(*0x1a0c4 + 0x800 + param_2);
    }
    return *(*0x1a0c4 + param_2);
}


/* fcn.0001f98c @ 0x1f98c */

void fcn.0001f98c(void)

{
    int iVar1;
    uint32_t *puVar2;
    
    iVar1 = fcn.0001f93e();
    if (iVar1 != 0) {
        puVar2 = *(iVar1 + 0xc) + *0x1a0c4;
        *puVar2 = *puVar2 & 0xe001e001 | 0x10001;
        puVar2 = *(iVar1 + 0x10) + *0x1a0c4;
        *puVar2 = *puVar2 & 0xe001e001 | 0x10001;
        puVar2 = *(iVar1 + 8) + *0x1a0c4;
        *puVar2 = *puVar2 & 0xfffffe0f;
        puVar2 = *(iVar1 + 8) + *0x1a0c4;
        *puVar2 = *puVar2 | 2;
    }
    return;
}


/* fcn.0001f93e @ 0x1f93e */

int * __fastcall fcn.0001f93e(int param_1)

{
    int *piVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    do {
        piVar1 = uVar2 * 0x14 + 0x18850;
        if (*piVar1 == param_1) {
            return piVar1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    return NULL;
}


/* fcn.000215ca @ 0x215ca */

void __fastcall fcn.000215ca(int param_1)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    
    iVar2 = 0;
    uVar3 = 0x18;
    iVar1 = 0;
    if ((*(param_1 + 0x10) == 1) || (*(param_1 + 0x10) == 5)) {
        iVar1 = *(param_1 + 0x8c);
        uVar3 = *(iVar1 + 0x1c);
        iVar2 = iVar1 + 0x20;
        iVar1 = iVar1 + 0xd;
    }
    if (*(param_1 + 100) == 1) {
        fcn.00021104(iVar2,uVar3,iVar1);
    }
    else {
        fcn.00021394(iVar2,param_1,param_1);
    }
    return;
}


/* fcn.00019873 @ 0x19873 */

//WARNING: Variable defined which should be unmapped: var_1h

int __fastcall fcn.00019873(int param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint32_t var_1h;
    
    iVar3 = *(param_1 + 0x8c);
    iVar2 = fcn.0001a3c0();
    if (*(iVar2 + *0x1a0c4) < 0) {
        cVar1 = fcn.000148da();
        if ((cVar1 == '\x01') && (cVar1 = fcn.000147e7(), cVar1 == '\0')) {
            *(iVar3 + 0x24) = 3;
            if (*(param_1 + 0x14) < 10) {
                *(*(param_1 + 0x14) + 0x1a0a4) = 1;
            }
        }
    }
    else {
        fcn.0001a978();
        iVar2 = fcn.0001ae22();
        if (iVar2 < 0) {
            return iVar2;
        }
        if ((((*0x1a1a4 == '\0') && (cVar1 = fcn.000148da(), cVar1 == '\x01')) && (*(iVar3 + 0x24) == 3)) &&
           (iVar2 = fcn.0001ae7f(), iVar2 < 0)) {
            return iVar2;
        }
    }
    if (*(iVar3 + 0x40) == '\0') {
        fcn.000215ca();
    }
    else {
        iVar3 = fcn.00024495(param_1 + 0x24);
        if (iVar3 < 0) {
            return -0x7ffffff2;
        }
    }
    if (*0x1a1a4 == '\0') {
        if (*(param_1 + 0x10) == 2) {
            cVar1 = fcn.000196d1();
            if (cVar1 == '\0') {
                return -0x7ffffff2;
            }
        }
        else if ((*(param_1 + 0x10) == 4) && (cVar1 = fcn.000196d1(), cVar1 != '\0')) {
            return -0x7ffffff2;
        }
    }
    iVar3 = fcn.000245a4();
    return iVar3;
}


/* fcn.0001db4a @ 0x1db4a */

int __fastcall fcn.0001db4a(int param_1)

{
    uint8_t uVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint8_t uVar8;
    uchar extraout_DL;
    uchar extraout_DL_00;
    uchar uVar9;
    
    iVar6 = *0x1a0d8;
    iVar7 = *(param_1 + 0x8c);
    iVar3 = fcn.0001a3c0();
    if (-1 < *(iVar3 + *0x1a0c4)) {
        fcn.0001a978();
        iVar3 = fcn.0001ae22();
        if (iVar3 < 0) {
            return iVar3;
        }
        if ((*0x1a1a4 == '\0') && (iVar3 = fcn.0001ae7f(), iVar3 < 0)) {
            return iVar3;
        }
    }
    iVar3 = fcn.0001cf7d();
    if (iVar3 < 0) {
code_r0x0001dbaf:
        iVar3 = -0x7ffffff2;
        goto code_r0x0001dc7a;
    }
    if (*(iVar7 + 0x40) == '\0') {
        fcn.000215ca();
    }
    else {
        iVar4 = fcn.00024495(param_1 + 0x24);
        if (iVar4 < 0) {
            cVar2 = fcn.0001dac4();
            if (cVar2 != '\x01') goto code_r0x0001dbaf;
            iVar3 = 0;
        }
        else {
            fcn.0001527a();
        }
    }
    if (*(iVar7 + 0x1b) != '\0') {
        fcn.0001ce0e();
    }
    uVar5 = fcn.00014679();
    uVar8 = *(iVar7 + 0x2f);
    *(iVar7 + 0x10) = uVar5;
    if (((iVar6 == 1) && (*(param_1 + 0x14) == 4)) && (*(iVar7 + 0x24) == 1)) {
        uVar1 = (-((*(*0x1a0c4 + 0x16c400) & 0x20000000) != 0) & 2U) + 2;
code_r0x0001dc65:
        uVar8 = uVar8 & 0x1f;
        if (uVar1 < uVar8) {
            uVar8 = uVar1;
        }
        *(iVar7 + 0x30) = *(iVar7 + 0x2f) & 0xe0 | uVar8;
    }
    else {
        cVar2 = fcn.000148da();
        uVar9 = extraout_DL;
        if (cVar2 == '\x01') {
            cVar2 = fcn.000147e7();
            uVar9 = extraout_DL_00;
            if (cVar2 == '\0') {
                uVar1 = fcn.0001a530();
                if (uVar1 == 0) {
                    iVar3 = -0x7ffffff9;
                    goto code_r0x0001dc7a;
                }
                goto code_r0x0001dc65;
            }
        }
        *(iVar7 + 0x30) = uVar9;
    }
code_r0x0001dc7a:
    if ((*0x1a1a4 == '\0') && (iVar6 = fcn.0001a3c0(), -1 < *(iVar6 + *0x1a0c4))) {
        cVar2 = fcn.000148da();
        if ((cVar2 == '\x01') && (*(iVar7 + 0x24) == 3)) {
            if (iVar3 < 0) {
                fcn.0001b031();
                return iVar3;
            }
            return iVar3;
        }
        fcn.0001b031();
    }
    if (iVar3 < 0) {
        iVar7 = fcn.0001a3c0();
        *(iVar7 + *0x1a0c4) = *(iVar7 + *0x1a0c4) & 0xffffffbf;
    }
    return iVar3;
}


/* fcn.00014575 @ 0x14575 */

uint __fastcall fcn.00014575(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    
    uVar1 = *(*(param_1 + 0x20) + 0x14);
    if (((*(*(param_1 + 0x20) + 0x13) == '\x04') && (uVar1 < '\0')) &&
       (uVar1 = uVar1 >> 4, uVar2 = uVar1 & 7, (uVar1 & 7) != 0)) {
        if (uVar2 == 1) {
            return 0x12;
        }
        if (uVar2 != 2) {
            if (uVar2 == 3) {
                return 0x1e;
            }
            if (uVar2 == 4) {
                return 0x24;
            }
            if (uVar2 == 5) {
                return 0x2a;
            }
            if (uVar2 == 6) {
                return 0x30;
            }
            return 0;
        }
    }
    return 0x18;
}


/* fcn.0001be03 @ 0x1be03 */

uint32_t __fastcall fcn.0001be03(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    
    uVar5 = 0;
    if ((*(param_1 + 0x10) != 1) && (*(param_1 + 0x10) != 5)) {
        iVar2 = *(param_1 + 0x8c);
        if (*(iVar2 + 0x44) == '\0') {
            return 0;
        }
        if (*(param_1 + 0x2c) == 0) {
            uVar7 = 0x80;
        }
        else {
            cVar1 = *(iVar2 + 0x194);
            if (cVar1 == '\x06') {
                iVar6 = 0xa2;
            }
            else if (cVar1 == '\n') {
                iVar6 = 0x10e;
            }
            else if (cVar1 == '\x14') {
                iVar6 = 0x21c;
            }
            else {
                if (cVar1 != '\x1e') {
                    return 0;
                }
                iVar6 = 0x32a;
            }
            uVar3 = 0xf000 / *(param_1 + 0x30);
            uVar7 = ((*(iVar2 + 0x2f) & 0x1f) * iVar6 * 0x1e800) / *(param_1 + 0x2c) >> 4;
            if (uVar3 <= uVar7) {
                uVar7 = uVar3;
            }
            do {
                if (uVar7 < *(uVar5 + 0x19ce4)) {
                    uVar7 = *(uVar5 + 0x19ce4);
                }
                else if (uVar5 == '\x01') {
                    uVar7 = 8;
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
            } while (uVar4 < 5);
            uVar7 = uVar7 << 4;
        }
        return uVar7 >> 4;
    }
    if (*(*(param_1 + 0x8c) + 0xa8) == '\0') {
        return 0;
    }
    return *(*(param_1 + 0x8c) + 0xb8) >> 4;
}


/* fcn.000145cc @ 0x145cc */

uint32_t __fastcall fcn.000145cc(int param_1,uint8_t *param_2)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_8h = 0;
    if (*param_2 >> 4 == 1) {
        fcn.00014b35(&var_4h);
        if (var_4h == 0) goto code_r0x00014661;
        uVar1 = ((*(var_4h + 0xe) >> 4) + 1) * 3;
    }
    else {
        if ((*param_2 >> 4 != 2) || (fcn.00014b35(&var_8h), var_8h == 0)) goto code_r0x00014661;
        uVar1 = *(var_8h + 0x1e) & 7;
        if ((*(var_8h + 0x1e) & 7) == 0) {
            uVar1 = 0x18;
        }
        else {
            if (uVar1 == 1) {
                return 0x12;
            }
            if (uVar1 == 2) {
                return 0x18;
            }
            if (uVar1 == 3) {
                return 0x1e;
            }
            if (uVar1 == 4) {
                return 0x24;
            }
            if (uVar1 == 5) {
                return 0x30;
            }
        }
    }
    if (uVar1 != 0) {
        return uVar1;
    }
code_r0x00014661:
    if (*(param_1 + 0x28) != 1) {
        return 0x18;
    }
    uVar1 = fcn.00014575();
    return uVar1;
}


/* fcn.00014679 @ 0x14679 */

uint32_t __fastcall fcn.00014679(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    uVar2 = fcn.0001be03();
    if (uVar2 != 0) {
        return uVar2;
    }
    iVar1 = *(param_1 + 0x20);
    if (iVar1 != 0) {
        if (*(param_1 + 0x28) == 1) {
            if (*(param_1 + 0x24) != 0) {
                do {
                    if (*(iVar1 + uVar3) == 'p') {
                        if (iVar1 + 1 + uVar3 != 0) goto code_r0x000146c6;
                        break;
                    }
                    uVar3 = uVar3 + 0x80;
                } while (uVar3 < *(param_1 + 0x24));
            }
            uVar3 = fcn.00014575();
            goto code_r0x000146eb;
        }
        if ((iVar1 != 0) && (*(param_1 + 0x28) == 3)) {
code_r0x000146c6:
            uVar3 = fcn.000145cc();
            goto code_r0x000146eb;
        }
    }
    if (*(param_1 + 0xc) == 4) {
        uVar3 = *(*(param_1 + 0x8c) + 0x1c);
    }
    else if (*(param_1 + 0xc) == 3) {
        uVar3 = 0x18;
    }
code_r0x000146eb:
    if (((*(param_1 + 0x10) == 2) || (*(param_1 + 0x10) == 4)) &&
       ((uVar3 == 0x12 || ((uVar3 == 0x1e || (uVar3 == 0x24)))))) {
        uVar3 = 0x18;
    }
    if (((uVar3 != 0x12) && (uVar3 != 0x18)) && (uVar3 != 0)) {
        uVar3 = 0x18;
    }
    return uVar3;
}


/* fcn.00026936 @ 0x26936 */

ulong __fastcall fcn.00026936(uint32_t param_1)

{
    uchar uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 3) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT31(uVar2 >> 8,uVar1));
}


/* fcn.00014cf2 @ 0x14cf2 */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.00014cf2(uchar param_1)

{
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return 0x22;
    }
}


/* fcn.00014f9d @ 0x14f9d */

int __thiscall fcn.00014f9d(int param_1,int *param_2)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar4;
    int iStack_4;
    
    iStack_4 = param_1;
    iVar2 = fcn.00014b35(&iStack_4);
    if (iVar2 < 0) {
        return -0x7ffffff9;
    }
    iVar3 = iStack_4 + 3;
    uVar1 = *(iStack_4 + 2) / 0x14;
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            if ((*(iVar3 + 4) == *(*(param_1 + 0x94) + 8)) && (*(iVar3 + 0xc) == *(*(param_1 + 0x94) + 0xc))) {
                iVar2 = 0;
                *param_2 = iVar3;
                break;
            }
            iVar3 = iVar3 + 0x14;
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
        if (uVar4 < uVar1) {
            return iVar2;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00014bac @ 0x14bac */

int __thiscall fcn.00014bac(int param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    int iVar4;
    uint8_t uVar5;
    ushort uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    
    piVar3 = param_2;
    iVar1 = *(param_1 + 0x10);
    iVar9 = 0;
    *param_2 = 0;
    if (iVar1 == 1) {
        iVar9 = *(param_1 + 0x8c);
    }
    iVar4 = fcn.00014b35(&param_2);
    if (iVar4 < 0) {
        return -0x7ffffff9;
    }
    iVar10 = param_2 + 3;
    uVar2 = *(param_2 + 2) / 0x14;
    iVar7 = uVar2 << 8;
    if (uVar2 != '\0') {
        do {
            uVar6 = iVar7;
            if (*(iVar10 + 3) < 0x80) {
                iVar10 = iVar10 + 0x14;
            }
            else if (((iVar1 != 1) || (*(iVar9 + 0xa4) == '\0')) || (((*(iVar9 + 0x1a) - 1) + *(iVar10 + 4) & 1) == 0))
            {
                iVar4 = 0;
                *piVar3 = iVar10;
                break;
            }
            uVar5 = iVar7 + 1;
            iVar8 = CONCAT31(iVar7 >> 8,uVar5);
            uVar6 = iVar8;
            uVar2 = iVar7 >> 8;
            iVar7 = iVar8;
        } while (uVar5 < uVar2);
        if (uVar6 < uVar6 >> 8) {
            return iVar4;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00014d32 @ 0x14d32 */

void __fastcall fcn.00014d32(unkuint3 *param_1,int *param_2)

{
    ulong uVar1;
    
    *param_2 = (*param_1 + 1) * 10;
    param_2[1] = param_1[1] + 1;
    param_2[2] = *(param_1 + 6) + 1;
    param_2[3] = (param_1[2] & 0x7fff) + 1;
    param_2[4] = *(param_1 + 10) + 1;
    param_2[0xc] = 2 - (param_1[2] < 0x8000);
    param_2[5] = param_1[3] + 1;
    param_2[6] = *(param_1 + 0xe) + 1;
    param_2[7] = (param_1[4] & 0x7fff) + 1;
    param_2[8] = *(param_1 + 0x12) + 1;
    param_2[0xd] = 2 - (param_1[4] < 0x8000);
    *(param_2 + 0xb) = *(param_1 + 3) >> 4 & 1;
    uVar1 = fcn.00014cf2();
    *((uVar1 >> 0x20) + 0x3c) = uVar1;
    return;
}


/* fcn.00015017 @ 0x15017 */

int __thiscall fcn.00015017(int param_1,int *param_2)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int iVar4;
    int iStack_4;
    
    iStack_4 = 0;
    iVar2 = fcn.00014b35(&iStack_4);
    if (iVar2 < 0) {
        return -0x7ffffff9;
    }
    iVar4 = iStack_4 + 3;
    uVar1 = *(iStack_4 + 2) / 0xb;
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            if (((*(iVar4 + 4) & 0x1ff) * 8 + 8 == *(*(param_1 + 0x94) + 8)) &&
               ((*(iVar4 + 7) & 0xfff) + 1 == *(*(param_1 + 0x94) + 0xc))) {
                iVar2 = 0;
                *param_2 = iVar4;
                break;
            }
            iVar4 = iVar4 + 0xb;
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
        if (uVar3 < uVar1) {
            return iVar2;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00014e57 @ 0x14e57 */

int __thiscall fcn.00014e57(int param_1,int *param_2)

{
    int iVar1;
    int *piVar2;
    uint8_t uVar3;
    int iVar4;
    uint8_t uVar5;
    int iVar6;
    int iVar7;
    
    piVar2 = param_2;
    iVar1 = *(param_1 + 0x10);
    *param_2 = 0;
    iVar7 = 0;
    if (iVar1 == 1) {
        iVar7 = *(param_1 + 0x8c);
    }
    iVar4 = fcn.00014b35(&param_2);
    if (iVar4 < 0) {
        return -0x7ffffff9;
    }
    iVar6 = param_2 + 3;
    uVar3 = *(param_2 + 2) / 0xb;
    uVar5 = 0;
    if (uVar3 != 0) {
        do {
            if (*(iVar6 + 3) < 0x80) {
                iVar6 = iVar6 + 0xb;
            }
            else if (((iVar1 != 1) || (*(iVar7 + 0xa4) == '\0')) || ((*(iVar7 + 0x1a) & 1) == 0)) {
                iVar4 = 0;
                *piVar2 = iVar6;
                break;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar3);
        if (uVar5 < uVar3) {
            return iVar4;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00014ee8 @ 0x14ee8 */

void __fastcall fcn.00014ee8(unkuint3 *param_1,int *param_2)

{
    *param_2 = *param_1 * 10;
    param_2[1] = (param_1[1] & 0x1ff) * 8 + 8;
    param_2[2] = (param_1[1] >> 9) * 8 + 8;
    param_2[3] = (*(param_1 + 6) >> 4) * 8 + 8;
    param_2[4] = (*(param_1 + 6) & 0xf) * 8 + 8;
    param_2[0xc] = ((*(param_1 + 3) & 8) != 0) + 1;
    param_2[5] = (*(param_1 + 7) & 0xfff) + 1;
    param_2[6] = *(param_1 + 9) + 1;
    param_2[7] = (*(param_1 + 10) >> 4) + 1;
    param_2[8] = (*(param_1 + 10) & 0xf) + 1;
    param_2[0xd] = ((*(param_1 + 3) & 4) != 0) + 1;
    *(param_2 + 0xb) = *(param_1 + 3) >> 4 & 1;
    return;
}


/* fcn.000150a7 @ 0x150a7 */

int __thiscall fcn.000150a7(int param_1,int *param_2)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int iVar4;
    int iStack_4;
    
    iStack_4 = 0;
    iVar2 = fcn.00014b35(&iStack_4);
    if (iVar2 < 0) {
        return -0x7ffffff9;
    }
    iVar4 = iStack_4 + 3;
    uVar1 = *(iStack_4 + 2) / 0x14;
    uVar3 = 0;
    if (uVar1 != 0) {
        do {
            if ((*(iVar4 + 4) == *(*(param_1 + 0x94) + 8)) && (*(iVar4 + 0xc) == *(*(param_1 + 0x94) + 0xc))) {
                iVar2 = 0;
                *param_2 = iVar4;
                break;
            }
            iVar4 = iVar4 + 0x14;
            uVar3 = uVar3 + 1;
        } while (uVar3 < uVar1);
        if (uVar3 < uVar1) {
            return iVar2;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00014c4f @ 0x14c4f */

int __thiscall fcn.00014c4f(int param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    int iVar4;
    uint8_t uVar5;
    ushort uVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    
    piVar3 = param_2;
    iVar1 = *(param_1 + 0x10);
    iVar9 = 0;
    *param_2 = 0;
    if (iVar1 == 1) {
        iVar9 = *(param_1 + 0x8c);
    }
    iVar4 = fcn.00014b35(&param_2);
    if (iVar4 < 0) {
        return -0x7ffffff9;
    }
    iVar10 = param_2 + 3;
    uVar2 = *(param_2 + 2) / 0x14;
    iVar7 = uVar2 << 8;
    if (uVar2 != '\0') {
        do {
            uVar6 = iVar7;
            if (*(iVar10 + 3) < 0x80) {
                iVar10 = iVar10 + 0x14;
            }
            else if (((iVar1 != 1) || (*(iVar9 + 0xa4) == '\0')) || (((*(iVar9 + 0x1a) - 1) + *(iVar10 + 4) & 1) == 0))
            {
                iVar4 = 0;
                *piVar3 = iVar10;
                break;
            }
            uVar5 = iVar7 + 1;
            iVar8 = CONCAT31(iVar7 >> 8,uVar5);
            uVar6 = iVar8;
            uVar2 = iVar7 >> 8;
            iVar7 = iVar8;
        } while (uVar5 < uVar2);
        if (uVar6 < uVar6 >> 8) {
            return iVar4;
        }
    }
    return -0x7ffffff9;
}


/* fcn.00014dc6 @ 0x14dc6 */

void __fastcall fcn.00014dc6(unkuint3 *param_1,int *param_2)

{
    ulong uVar1;
    
    *param_2 = *param_1 + 1;
    param_2[1] = param_1[1] + 1;
    param_2[2] = *(param_1 + 6) + 1;
    param_2[3] = (param_1[2] & 0x7fff) + 1;
    param_2[4] = *(param_1 + 10) + 1;
    param_2[0xc] = 2 - (param_1[2] < 0x8000);
    param_2[5] = param_1[3] + 1;
    param_2[6] = *(param_1 + 0xe) + 1;
    param_2[7] = (param_1[4] & 0x7fff) + 1;
    param_2[8] = *(param_1 + 0x12) + 1;
    param_2[0xd] = 2 - (param_1[4] < 0x8000);
    *(param_2 + 0xb) = *(param_1 + 3) >> 4 & 1;
    uVar1 = fcn.00014cf2();
    *((uVar1 >> 0x20) + 0x3c) = uVar1;
    return;
}


/* fcn.000154bc @ 0x154bc */

uint fcn.000154bc(void)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar2 = 0;
    uVar1 = *(*0x1a0c4 + 0x51004) >> 0x1d;
    if (uVar1 == 0) {
        uVar2 = 24000;
    }
    else if (uVar1 == 1) {
        uVar2 = 0x4b00;
    }
    else if (uVar1 == 2) {
        uVar2 = 0x9600;
    }
    return uVar2;
}


/* fcn.000154f0 @ 0x154f0 */

void __fastcall fcn.000154f0(int param_1,uint *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    if (param_1 == 6) {
        iVar3 = *0x17100;
    }
    else {
        iVar3 = 0;
        if (param_1 == 7) {
            iVar3 = *0x17104;
        }
    }
    uVar1 = *(*0x1a0c4 + iVar3);
    uVar2 = uVar1 >> 2 & 0xf;
    if (uVar2 == 1) {
        *param_2 = 2;
    }
    else if (uVar2 == 2) {
        *param_2 = 3;
    }
    else if (uVar2 == 4) {
        *param_2 = 5;
    }
    else if (uVar2 == 8) {
        *param_2 = 7;
    }
    uVar2 = uVar1 >> 6 & 7;
    if (uVar2 == 1) {
        param_2[2] = 1;
    }
    else if (uVar2 == 2) {
        param_2[2] = 2;
    }
    else if (uVar2 == 4) {
        param_2[2] = 3;
    }
    if ((uVar1 & 0x200) == 0) {
        param_2[1] = 1;
    }
    else {
        param_2[1] = uVar1 >> 10 & 0xff;
    }
    return;
}


/* fcn.000268c7 @ 0x268c7 */

void fcn.000268c7(uint param_1,uint param_2,uint param_3,uint param_4)

{
    fcn.000268fa(param_1,param_2,param_3,param_4);
    return;
}


/* fcn.000268fa @ 0x268fa */

ulong fcn.000268fa(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    return CONCAT44((param_3 * param_1 >> 0x20) + param_1 * param_4 + param_3 * param_2,param_3 * param_1);
}


/* fcn.000268e0 @ 0x268e0 */

void __thiscall fcn.000268e0(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    fcn.00010430(param_2,param_3,param_4,param_5,param_1);
    return;
}


/* fcn.00026919 @ 0x26919 */

ulong __cdecl fcn.00026919(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint64_t uVar1;
    
    uVar1 = arg_ch % arg_10h << 0x20 | arg_8h;
    if (arg_14h != 0) {
        *arg_14h = uVar1 % arg_10h;
    }
    return CONCAT44(arg_ch / arg_10h,uVar1 / arg_10h);
}


/* fcn.00010430 @ 0x10430 */

uint64_t fcn.00010430(uint32_t param_1,uint32_t param_2,uint32_t param_3,int *param_4,int *param_5)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    
    if (param_4 == NULL) {
        if (param_5 != NULL) {
            param_5[1] = 0;
            param_4 = param_5;
        }
        uVar1 = param_2 % param_3 << 0x20 | param_1;
        if (param_4 != NULL) {
            *param_4 = uVar1 % param_3;
        }
        return CONCAT44(param_2 / param_3,uVar1 / param_3);
    }
    uVar3 = param_1;
    piVar4 = param_4;
    uVar5 = param_2;
    uVar7 = param_3;
    do {
        uVar6 = uVar5 & 1;
        uVar5 = uVar5 >> 1;
        uVar3 = uVar3 >> 1 | (uVar6 != 0) << 0x1f;
        uVar7 = uVar7 >> 1 | piVar4 << 0x1f;
        piVar4 = piVar4 >> 1;
    } while (piVar4 != NULL);
    uVar1 = CONCAT44(uVar5,uVar3) / uVar7;
    uVar3 = uVar1;
    iVar2 = (uVar1 & 0xffffffff) * param_3;
    uVar7 = iVar2 >> 0x20;
    uVar5 = iVar2;
    uVar6 = uVar7 + param_4 * uVar3;
    if ((CARRY4(uVar7,param_4 * uVar3)) || ((param_2 <= uVar6 && ((param_2 < uVar6 || (param_1 < uVar5)))))) {
        uVar3 = uVar3 - 1;
        if (param_5 == NULL) goto code_r0x000104a1;
        bVar8 = uVar5 < param_3;
        uVar5 = uVar5 - param_3;
        uVar6 = (uVar6 - param_4) - bVar8;
    }
    if (param_5 != NULL) {
        *param_5 = param_1 - uVar5;
        param_5[1] = (param_2 - uVar6) - (param_1 < uVar5);
    }
code_r0x000104a1:
    return uVar3;
}


/* fcn.00021941 @ 0x21941 */

uint32_t __fastcall fcn.00021941(int param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    if (param_1 == 0) {
        uVar2 = 3;
        if (*0x1a0d8 == 1) {
            uVar2 = fcn.0001b10e();
            uVar2 = (uVar2 & 0x3ff) << 0x10 | 0x8000003;
        }
    }
    else if (param_1 == 1) {
        uVar2 = fcn.0002191a();
        uVar2 = uVar2 & 3;
        if (*0x1a0d8 == 1) {
            if (param_2 == 0x27) {
                uVar2 = 0x270000;
            }
            else {
                uVar1 = fcn.0001b10e();
                uVar2 = uVar2 ^ (uVar1 & 0x3ff) << 0x10;
            }
            uVar2 = uVar2 | 0x8000000;
        }
    }
    return uVar2;
}


/* fcn.00021759 @ 0x21759 */

uint __fastcall fcn.00021759(uint32_t param_1)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t extraout_ECX;
    uint32_t uVar3;
    uint32_t uVar4;
    int aiStack_8 [2];
    
    uVar4 = 3000;
    uVar2 = param_1;
    do {
        aiStack_8[1] = 0;
        uVar3 = 0x96;
        if (uVar4 < 0x96) {
            uVar3 = uVar4;
        }
        aiStack_8[0] = 2000;
        cVar1 = fcn.00024d5c(7,uVar2,aiStack_8);
        if (cVar1 == '\0') {
            return 0x80000007;
        }
        if ((param_1 & 1) != 0) {
            return 0;
        }
        fcn.00013584();
        uVar4 = (uVar4 - 10) + (aiStack_8[0] - uVar3);
        uVar2 = extraout_ECX;
    } while (uVar4 != 0);
    return 0x80000007;
}


/* fcn.00015956 @ 0x15956 */

uint __fastcall fcn.00015956(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = *(param_1 + 0x70);
    uVar2 = 0;
    if (uVar1 == 6) {
        if ((*(param_1 + 0x10) == 1) && (uVar1 = *(param_1 + 0x8c), *(uVar1 + 0x210) == '\x01')) {
            if (*(param_1 + 0x14) == 0) {
                uVar2 = 0x800;
            }
            else if (*(param_1 + 0x14) == 1) {
                uVar2 = 0x400;
            }
            uVar1 = *(*0x1a0c4 + 0x164280) & uVar2;
            uVar2 = uVar1 == uVar2;
            goto code_r0x00015973;
        }
    }
    else if (uVar1 != 7) {
        if (uVar1 == 8) {
            if (*0x1a0a0 != 0) goto code_r0x00015973;
        }
        else if ((uVar1 < 9) || (0xc < uVar1)) goto code_r0x00015973;
    }
    uVar2 = 1;
code_r0x00015973:
    return CONCAT31(uVar1 >> 8,uVar2);
}


/* fcn.000217d2 @ 0x217d2 */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_8h

void __fastcall fcn.000217d2(uint param_1)

{
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 2000;
    fcn.00024d5c(7,param_1,&var_4h,param_1,0);
    return;
}


/* fcn.00024d5c @ 0x24d5c */

uint32_t __fastcall fcn.00024d5c(uint *param_1,int *param_2,uint32_t param_3,uint param_4,uint32_t *param_5)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uchar uVar4;
    int iVar5;
    
    uVar3 = *param_5 % 10;
    if (uVar3 != 0) {
        *param_5 = (*param_5 - uVar3) + 10;
    }
    if (*0x1a1a4 != '\0') {
        *param_5 = 60000000;
    }
    iVar5 = 100;
    while( true ) {
        fcn.00013584();
        iVar1 = *0x1a0c4;
        *param_5 = *param_5 - 10;
        iVar2 = *0x1a0c4;
        if (-1 < *(iVar1 + 0x138124)) break;
        iVar5 = iVar5 + -10;
        if (iVar5 == 0) {
            return *(iVar1 + 0x138124) & 0xffffff00;
        }
    }
    uVar4 = 0;
    *(*0x1a0c4 + 0x138128) = *param_1;
    iVar5 = *param_2;
    *(iVar2 + 0x13812c) = iVar5;
    *(iVar2 + 0x138124) = param_3 | 0x80000000;
    do {
        if (*param_5 == 0) goto code_r0x00024e20;
        fcn.00013584();
        iVar5 = *0x1a0c4;
        *param_5 = *param_5 - 10;
        iVar5 = *(iVar5 + 0x138124);
    } while (iVar5 < 0);
    uVar4 = 1;
    *param_1 = *(*0x1a0c4 + 0x138128);
    iVar5 = *(*0x1a0c4 + 0x13812c);
    *param_2 = iVar5;
code_r0x00024e20:
    return CONCAT31(iVar5 >> 8,uVar4);
}


/* fcn.000157a7 @ 0x157a7 */

uint __fastcall fcn.000157a7(int param_1)

{
    int iVar1;
    
    iVar1 = 0;
    if (param_1 == 6) {
        iVar1 = 0x46010;
    }
    else if (param_1 == 7) {
        iVar1 = 0x46014;
    }
    else if (param_1 == 8) {
        iVar1 = 0x46020;
    }
    else if (param_1 == 9) {
        iVar1 = 0x46038;
    }
    else if (param_1 == 10) {
        iVar1 = 0x46040;
    }
    else if (param_1 == 0xb) {
        iVar1 = 0x46048;
    }
    else if (param_1 == 0xc) {
        iVar1 = 0x46050;
    }
    return CONCAT31(*(*0x1a0c4 + iVar1) >> 8,*(*0x1a0c4 + iVar1) < 0);
}


/* fcn.00015788 @ 0x15788 */

uint __fastcall fcn.00015788(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    
    iVar1 = *0x1a0c4;
    *(*0x1a0c4 + param_1) = ~param_2 & *(*0x1a0c4 + param_1) | param_3;
    return *(iVar1 + param_1);
}


/* fcn.000166de @ 0x166de */

uint __fastcall fcn.000166de(int param_1,int param_2,uint32_t *param_3,uint *param_4)

{
    uint32_t uVar1;
    uint uVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint32_t uStack_e4;
    int iStack_e0;
    int iStack_d8;
    uint uStack_d4;
    uint32_t auStack_b8 [46];
    
    auStack_b8[0] = 2;
    auStack_b8[1] = 4;
    uVar6 = 0;
    auStack_b8[2] = 6;
    auStack_b8[3] = 8;
    auStack_b8[4] = 10;
    auStack_b8[5] = 0xc;
    auStack_b8[6] = 0xe;
    auStack_b8[7] = 0x10;
    auStack_b8[8] = 0x12;
    auStack_b8[9] = 0x14;
    auStack_b8[10] = 0x18;
    auStack_b8[0xb] = 0x1c;
    auStack_b8[0xc] = 0x1e;
    auStack_b8[0xd] = 0x20;
    auStack_b8[0xe] = 0x24;
    auStack_b8[0xf] = 0x28;
    auStack_b8[0x10] = 0x2a;
    auStack_b8[0x11] = 0x2c;
    auStack_b8[0x12] = 0x30;
    auStack_b8[0x13] = 0x32;
    auStack_b8[0x14] = 0x34;
    auStack_b8[0x15] = 0x36;
    auStack_b8[0x16] = 0x38;
    auStack_b8[0x17] = 0x3c;
    auStack_b8[0x18] = 0x40;
    auStack_b8[0x19] = 0x42;
    auStack_b8[0x1a] = 0x44;
    auStack_b8[0x1b] = 0x46;
    auStack_b8[0x1c] = 0x48;
    auStack_b8[0x1d] = 0x4c;
    auStack_b8[0x1e] = 0x4e;
    auStack_b8[0x1f] = 0x50;
    auStack_b8[0x20] = 0x54;
    auStack_b8[0x21] = 0x58;
    auStack_b8[0x22] = 0x5a;
    auStack_b8[0x23] = 0x5c;
    auStack_b8[0x24] = 0x60;
    auStack_b8[0x25] = 0x62;
    auStack_b8[0x26] = 100;
    auStack_b8[0x27] = 0x66;
    auStack_b8[0x28] = 3;
    auStack_b8[0x29] = 5;
    auStack_b8[0x2a] = 7;
    auStack_b8[0x2b] = 9;
    auStack_b8[0x2c] = 0xf;
    auStack_b8[0x2d] = 0x15;
    iStack_e0 = 0;
    uStack_e4 = 0;
    uVar8 = fcn.000154bc();
    uVar4 = uVar8 >> 0x20;
    iStack_d8 = uVar8;
    if (iStack_d8 == 0) {
        return 0x80000002;
    }
    uStack_d4 = 0x8000;
    if (iStack_d8 == 0x9600) {
        iStack_d8 = 0x4b00;
        uStack_d4 = 0x4000;
    }
    if (*(param_1 + 0x10) != 5) {
        param_2 = param_2 * 5;
    }
    uVar7 = 999999999;
    do {
        iVar5 = param_2 * auStack_b8[uVar4];
        if (iVar5 - 0x7a0a30U < 0x1e8c51) {
            uVar1 = iVar5 - 0x895058;
            if (uVar1 < 0) {
                uVar1 = -uVar1;
            }
            if (uVar1 < uVar7) {
                uVar6 = auStack_b8[uVar4];
                uVar7 = uVar1;
                iStack_e0 = iVar5;
            }
        }
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x2e);
    uVar4 = 0;
    if (uVar6 == 0) {
        return 0x80000002;
    }
    if ((uVar6 & 1) == 0) {
        if (uVar6 != 2) {
            if ((uVar6 & 3) == 0) {
                uStack_e4 = 2;
                uVar4 = uVar6 >> 2;
            }
            else {
                uVar1 = uVar6 / auStack_b8[2];
                if (uVar6 % auStack_b8[2] == 0) {
                    uStack_e4 = 3;
                }
                else if (uVar6 % auStack_b8[0x29] == 0) {
                    uStack_e4 = 5;
                    uVar1 = (uVar6 % auStack_b8[0x29] << 0x20 | uVar6) / 10;
                }
                else {
                    uVar1 = uVar6 / 0xe;
                    uVar7 = uVar4;
                    if (uVar6 % 0xe != 0) goto code_r0x000169fc;
                    uStack_e4 = 7;
                }
                uVar4 = uVar1;
            }
            uVar7 = 2;
            goto code_r0x000169fc;
        }
        uStack_e4 = 2;
    }
    else {
        uVar7 = 3;
        if (((uVar6 != 3) && (uVar6 != 5)) && (uVar6 != 7)) {
            uStack_e4 = uVar6 / 3;
            uVar4 = 1;
            goto code_r0x000169fc;
        }
        uStack_e4 = uVar6;
    }
    uVar4 = 1;
    uVar7 = uVar4;
code_r0x000169fc:
    uVar2 = fcn.000268e0(iStack_e0,0,iStack_d8,0);
    uVar8 = fcn.000268c7(0,0,uStack_d4,0,iStack_d8,0);
    uVar3 = fcn.000268e0(uVar8);
    *param_3 = uStack_e4;
    param_3[1] = uVar4;
    param_3[2] = uVar7;
    *param_4 = uVar3;
    param_4[1] = uVar2;
    return 0;
}


/* fcn.000162bc @ 0x162bc */

void fcn.000162bc(int param_1,int param_2,int param_3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = 2;
    if (param_1 == 2) {
        uVar2 = 1;
    }
    else if (param_1 == 3) {
        uVar2 = uVar1;
    }
    else {
        if (param_1 == 5) {
            uVar2 = 4;
        }
        else {
            uVar2 = 0;
            if (param_1 != 7) goto code_r0x000162ed;
            uVar2 = 8;
        }
    }
code_r0x000162ed:
    if (param_3 == 1) {
        uVar1 = 1;
    }
    else if ((param_3 != 2) && (uVar1 = 0, param_3 == 3)) {
        uVar1 = 4;
    }
    uVar1 = (uVar1 << 4 | uVar2) << 2;
    if (param_2 != 1) {
        uVar1 = uVar1 | param_2 << 10 | 0x200U;
    }
    fcn.00015788(uVar1);
    return;
}


/* fcn.00021614 @ 0x21614 */

int * __fastcall fcn.00021614(int param_1)

{
    int *piVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    do {
        piVar1 = uVar2 * 0x19c + 0x18900;
        if (*piVar1 == param_1) {
            return piVar1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    return NULL;
}


/* fcn.00021684 @ 0x21684 */

void __fastcall fcn.00021684(int *param_1,uint param_2)

{
    int iVar1;
    int iVar2;
    
    iVar1 = param_1[2];
    iVar2 = *param_1;
    *(param_1[5] + *0x1a0c4) = *(param_1[5] + *0x1a0c4) & ~param_1[3] | param_1[1] << (param_1[4] & 0x1f);
    *(*0x1a0c4 + iVar1 + iVar2) = param_2;
    return;
}


/* fcn.000216ba @ 0x216ba */

void __fastcall fcn.000216ba(int *param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar3 = fcn.00021652();
    iVar1 = param_1[2];
    iVar2 = *param_1;
    *(param_1[5] + *0x1a0c4) = *(param_1[5] + *0x1a0c4) & ~param_1[3] | param_1[1] << (param_1[4] & 0x1f);
    *(*0x1a0c4 + iVar1 + iVar2) = uVar3 & param_2 | param_3;
    return;
}


/* fcn.00021652 @ 0x21652 */

uint __fastcall fcn.00021652(int *param_1)

{
    int iVar1;
    int iVar2;
    
    iVar1 = param_1[2];
    iVar2 = *param_1;
    *(param_1[5] + *0x1a0c4) = *(param_1[5] + *0x1a0c4) & ~param_1[3] | param_1[1] << (param_1[4] & 0x1f);
    return *(*0x1a0c4 + iVar1 + iVar2);
}


/* fcn.000164be @ 0x164be */

uint __fastcall fcn.000164be(int param_1)

{
    int iVar1;
    char cVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int8_t iVar5;
    uint32_t uVar6;
    uint uStack_18;
    
    uVar3 = 0;
    uStack_18 = 0;
    uVar4 = 0;
    iVar1 = *(param_1 + 0x14);
    iVar5 = 0;
    uVar6 = 0;
    if (iVar1 == 0) {
code_r0x000164ff:
        uVar4 = 3;
        iVar5 = 0;
        uVar6 = 0x400;
    }
    else {
        if (iVar1 != 1) {
            if (iVar1 == 8) goto code_r0x000164ff;
            if (iVar1 != 9) goto code_r0x00016509;
        }
        uVar4 = 0xc;
        iVar5 = 2;
        uVar6 = 0x800;
    }
code_r0x00016509:
    if ((uVar6 & *(*0x1a0c4 + 0x164280)) == 0) {
        uVar3 = (*(*0x1a0c4 + 0x164280) & uVar4) >> iVar5;
    }
    if (uVar3 == 0) {
        uStack_18 = 6;
    }
    else if (uVar3 == 1) {
        uStack_18 = 7;
    }
    cVar2 = fcn.000157a7();
    if (cVar2 == '\0') {
        uStack_18 = 0;
    }
    return uStack_18;
}


/* fcn.00015809 @ 0x15809 */

void __fastcall fcn.00015809(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    bool bVar4;
    
    iVar1 = *(param_1 + 0x70);
    uVar3 = 0;
    iVar2 = 0;
    if (iVar1 == 6) {
        iVar2 = 0x46010;
    }
    else if (iVar1 == 7) {
        iVar2 = 0x46014;
    }
    else if (iVar1 == 8) {
        iVar2 = 0x46020;
    }
    else if (iVar1 == 9) {
        iVar2 = 0x46038;
    }
    else if (iVar1 == 10) {
        iVar2 = 0x46040;
    }
    else if (iVar1 == 0xb) {
        iVar2 = 0x46048;
    }
    else if (iVar1 == 0xc) {
        iVar2 = 0x46050;
    }
    bVar4 = *0x1a1a4 == '\0';
    *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) | 0x8000000;
    if (bVar4) {
        while( true ) {
            fcn.00013584();
            if (((*(*0x1a0c4 + iVar2) & 0x4000000) != 0) || (10000 < uVar3)) break;
            uVar3 = uVar3 + 1;
        }
    }
    return;
}


/* fcn.00015eb7 @ 0x15eb7 */

void fcn.00015eb7(void)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = fcn.000154bc();
    uVar2 = 0;
    if (iVar1 == 24000) {
        uVar2 = 0x1000043;
    }
    else if (iVar1 == 0x9600) {
        uVar2 = 0x600054;
    }
    else if (iVar1 == 0x4b00) {
        uVar2 = 0xc00054;
    }
    fcn.00015788(uVar2);
    return;
}


/* fcn.000158a3 @ 0x158a3 */

void __fastcall fcn.000158a3(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar2 = *0x1a0c4;
    iVar1 = *(param_1 + 0x70);
    uVar4 = 0;
    iVar3 = 0;
    if (iVar1 == 6) {
        iVar3 = 0x46010;
    }
    else if (iVar1 == 7) {
        iVar3 = 0x46014;
    }
    else if (iVar1 == 8) {
        iVar3 = 0x46020;
    }
    else if (iVar1 == 9) {
        iVar3 = 0x46038;
    }
    else if (iVar1 == 10) {
        iVar3 = 0x46040;
    }
    else if (iVar1 == 0xb) {
        iVar3 = 0x46048;
    }
    else if (iVar1 == 0xc) {
        iVar3 = 0x46050;
    }
    if (*(param_1 + 0x70) == 8) {
        *(*0x1a0c4 + 0x46438) = *(*0x1a0c4 + 0x46438) | 0x20;
    }
    *(iVar2 + iVar3) = *(iVar2 + iVar3) | 0x80000000;
    for (; (fcn.00013584(), (*(*0x1a0c4 + iVar3) & 0x40000000) == 0 && (uVar4 < 0x2711)); uVar4 = uVar4 + 1) {
    }
    return;
}


/* fcn.00015ef9 @ 0x15ef9 */

uint __fastcall fcn.00015ef9(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint uVar4;
    
    iVar1 = *(param_1 + 0x8c);
    fcn.00021614();
    iVar2 = fcn.000154bc();
    if ((iVar2 == 0x9600) || (*0x1a1a4 != '\0')) {
        iVar2 = 0;
        uVar3 = 0;
        do {
            if (*(uVar3 + 0x16d80) == param_2) break;
            uVar3 = uVar3 + 0x1c;
            iVar2 = iVar2 + 1;
        } while (uVar3 < 0x70);
        if (iVar2 != 4) {
            fcn.00021684();
            fcn.00021684();
            if (*(iVar1 + 5) == '\0') {
                uVar4 = 0;
            }
            else {
                uVar4 = 0x200;
            }
            fcn.000216ba(uVar4);
            fcn.000216ba(0);
            return 0;
        }
    }
    return 0x80000007;
}


/* fcn.00015f9d @ 0x15f9d */

int __fastcall fcn.00015f9d(uint param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint uVar7;
    uint8_t uStack_56;
    uint8_t uStack_55;
    uint32_t auStack_38 [14];
    
    auStack_38[0] = 7;
    auStack_38[1] = 5;
    auStack_38[2] = 3;
    auStack_38[3] = 2;
    auStack_38[4] = 10;
    auStack_38[5] = 9;
    auStack_38[6] = 8;
    auStack_38[7] = 7;
    auStack_38[8] = 6;
    auStack_38[9] = 5;
    auStack_38[10] = 4;
    auStack_38[0xb] = 3;
    auStack_38[0xc] = 2;
    auStack_38[0xd] = 1;
    iVar2 = fcn.000154bc();
    iVar4 = -0x7ffffff9;
    fcn.00021614();
    uVar3 = 0;
    uStack_55 = 0;
    do {
        uStack_56 = 0;
        uVar1 = auStack_38[uVar3 >> 8];
        do {
            uVar5 = auStack_38[(uVar3 & 0xff) + 4] * uVar1 * param_2 * 10 >> 1;
            if ((0x79f2bf < uVar5) && (uVar5 < 0x989681)) {
                fcn.000216ba(0x100);
                fcn.000216ba(0x10000);
                fcn.000216ba(0x500);
                uVar3 = auStack_38[uStack_56 + 4];
                if (uVar3 < 2) {
                    uVar7 = 0;
                }
                else {
                    uVar7 = 0x4000;
                }
                fcn.000216ba(uVar7);
                if (uVar1 == 2) {
                    uVar7 = 0;
                }
                else if (uVar1 == 3) {
                    uVar7 = 0x1000;
                }
                else if (uVar1 == 5) {
                    uVar7 = 0x2000;
                }
                else {
                    uVar7 = 0x3000;
                }
                fcn.000216ba(uVar7);
                fcn.000216ba(uVar3 << 8);
                iVar4 = 0;
                uVar3 = uStack_55 << 8;
                break;
            }
            uStack_56 = uVar3 + 1;
            uVar3 = CONCAT31(uVar3 >> 8,uStack_56);
        } while (uStack_56 < 10);
        if (iVar4 == 0) break;
        uStack_55 = (uVar3 >> 8) + 1;
        uVar3 = uStack_55 << 8;
    } while (uStack_55 < 4);
    if (-1 < iVar4) {
        uVar3 = iVar2 * 2;
        if (uVar5 / uVar3 < 0x100) {
            uVar6 = fcn.000268c7(uVar5 % uVar3,0,0x400000,0,uVar3,0);
            iVar2 = fcn.000268e0(uVar6);
            if (iVar2 != 0) {
                uVar6 = fcn.000268c7(2,0,1000000000,0,uVar5 * 3,0);
                fcn.000268e0(uVar6);
            }
            fcn.00021652();
            fcn.00021684();
            fcn.00021652();
            fcn.00021684();
            fcn.00021652();
            fcn.00021684();
            fcn.00021652();
            fcn.00021684();
            fcn.00021684();
        }
        else {
            iVar4 = -0x7ffffff9;
        }
    }
    return iVar4;
}


/* fcn.00015cd0 @ 0x15cd0 */

uint __fastcall fcn.00015cd0(int param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    uVar4 = 0;
    iVar5 = *(param_1 + 0x8c);
    uStack_18 = fcn.000154bc();
    iVar1 = *(param_1 + 0x10);
    if ((iVar1 == 4) || (iVar1 == 2)) {
        iVar5 = fcn.000166de(&uStack_10,&uStack_18);
        if (iVar5 != 0) {
            return 0x80000002;
        }
        fcn.00015788((uStack_18 & 0x7fff) << 10 | uStack_14 & 0x3ff);
        fcn.00015788(0);
        fcn.000162bc(uStack_10,uStack_c,uStack_8);
    }
    else if ((iVar1 == 3) || (iVar1 == 1)) {
        uVar2 = 0;
        if ((iVar1 == 3) && (*(iVar5 + 5) != '\0')) {
            uVar2 = 0x200;
        }
        if ((iVar1 == 1) && (*(iVar5 + 10) != '\0')) {
            uVar2 = 0x200;
        }
        fcn.00015788(uVar2);
        do {
            uVar3 = uVar4;
            if ((*(uVar4 * 0x20 + 0x16df0) == param_2) && (*(uVar4 * 0x20 + 0x16df4) == uStack_18)) break;
            uVar3 = uVar3 + 1;
            uVar4 = uVar3;
        } while (uVar3 < 0x18);
        if (uVar3 == 0x18) {
            return 0x80000002;
        }
        iVar5 = uVar3 * 0x20;
        if (uStack_18 == 0x9600) {
            uVar4 = (*(iVar5 + 0x16dfc) & 0xfffe) << 9;
        }
        else {
            uVar4 = (*(iVar5 + 0x16dfc) & 0x7fff) << 10;
        }
        fcn.00015788(*(iVar5 + 0x16df8) & 0x3ff | uVar4);
        uVar4 = ((*(iVar5 + 0x16e04) & 7) << 4 | *(iVar5 + 0x16e00) & 0xf) << 2;
        if (*(iVar5 + 0x16e08) != '\0') {
            uVar4 = uVar4 | *(iVar5 + 0x16e0c) << 10 | 0x200;
        }
        fcn.00015788(uVar4);
    }
    return 0;
}


/* fcn.0001633c @ 0x1633c */

void __fastcall fcn.0001633c(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uStack_14;
    
    iVar3 = 0x164280;
    uVar4 = 0;
    uStack_14 = 0;
    iVar1 = *(param_1 + 0x70);
    if (iVar1 == 6) {
        if (*(param_1 + 0x14) == 0) {
            uVar4 = 0;
code_r0x000163ed:
            uStack_14 = 3;
            goto code_r0x00016410;
        }
        if (*(param_1 + 0x14) != 1) goto code_r0x00016410;
        uVar4 = 0;
    }
    else {
        if (iVar1 != 7) {
            if (iVar1 - 8U < 5) {
                iVar2 = *(param_1 + 0x14);
                uStack_14 = 0xf0000000;
                uVar4 = 0x80000000;
                if (iVar2 == 4) {
                    iVar3 = 0x4610c;
                }
                else if (iVar2 == 5) {
                    iVar3 = 0x46110;
                }
                else if (iVar2 == 6) {
                    iVar3 = 0x46114;
                }
                else if (iVar2 == 7) {
                    iVar3 = 0x46118;
                }
                if (iVar1 == 8) {
                    if (param_2 == 0x278d0) {
                        uVar4 = 0xc0000000;
                    }
                    else if (param_2 == 270000) {
                        uVar4 = 0xd0000000;
                    }
                    else if (param_2 == 540000) {
                        uVar4 = 0xe0000000;
                    }
                    else if (param_2 == 810000) {
                        uVar4 = 0xf0000000;
                    }
                }
            }
            goto code_r0x00016410;
        }
        if (*(param_1 + 0x14) == 0) {
            uVar4 = 1;
            goto code_r0x000163ed;
        }
        if (*(param_1 + 0x14) != 1) goto code_r0x00016410;
        uVar4 = 4;
    }
    uStack_14 = 0xc;
code_r0x00016410:
    *(*0x1a0c4 + iVar3) = ~uStack_14 & *(*0x1a0c4 + iVar3) | uVar4;
    iVar1 = *(param_1 + 0x14);
    if (iVar1 == 0) {
        uVar4 = *(*0x1a0c4 + 0x164280) & 0xfffffbff;
    }
    else if (iVar1 == 1) {
        uVar4 = *(*0x1a0c4 + 0x164280) & 0xfffff7ff;
    }
    else if (iVar1 == 4) {
        uVar4 = *(*0x1a0c4 + 0x164280) & 0xffffefff;
    }
    else if (iVar1 == 5) {
        uVar4 = *(*0x1a0c4 + 0x164280) & 0xffffdfff;
    }
    else if (iVar1 == 6) {
        uVar4 = *(*0x1a0c4 + 0x164280) & 0xffffbfff;
    }
    else {
        if (iVar1 != 7) {
            return;
        }
        uVar4 = *(*0x1a0c4 + 0x164280) & 0xffdfffff;
    }
    *(*0x1a0c4 + 0x164280) = uVar4;
    return;
}


/* fcn.0001e373 @ 0x1e373 */

uint __fastcall fcn.0001e373(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    uVar1 = *(param_1 + 0x1fc) * *(param_1 + 0x1c);
    uVar3 = (*(*(param_1 + 0x1f8) + 6) >> 2 & 3) + 1;
    uVar2 = uVar1 / uVar3;
    if (uVar1 % uVar3 != 0) {
        uVar2 = uVar2 + 1;
    }
    *param_2 = uVar2;
    return 0;
}


/* fcn.00020aa9 @ 0x20aa9 */

int * __fastcall fcn.00020aa9(int param_1)

{
    int *piVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    do {
        piVar1 = uVar2 * 0x14 + 0x188d0;
        if (*piVar1 == param_1) {
            return piVar1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 2);
    return NULL;
}


/* fcn.0001ae22 @ 0x1ae22 */

uint __fastcall fcn.0001ae22(int param_1)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    
    iVar1 = *(param_1 + 0x14);
    if (iVar1 < 0) {
        return 0x80000002;
    }
    if (iVar1 < 2) {
        uVar2 = 0;
        uVar3 = 0;
        if (*(param_1 + 0x14) == 0) {
            uVar3 = 0x10000;
        }
        else if (*(param_1 + 0x14) == 1) {
            uVar3 = 0x20000;
        }
        if ((uVar3 & *(*0x1a0c4 + 0xc4000)) == 0) {
            uVar2 = 0x80000007;
        }
    }
    else {
        if (3 < iVar1 - 4U) {
            return 0x80000002;
        }
        uVar2 = fcn.0001a927();
    }
    return uVar2;
}


/* fcn.00023aaa @ 0x23aaa */

int __fastcall
fcn.00023aaa(uint param_1,uint32_t param_2,uint8_t param_3,uint32_t param_4,uint param_5,int param_6)

{
    bool bVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uStack_24;
    uint32_t uStack_20;
    int iStack_1c;
    uint32_t uStack_18;
    uint32_t auStack_14 [5];
    
    bVar1 = false;
    iStack_1c = fcn.00023841();
    if ((param_3 & 8) == 0) {
        if (param_4 == 0) {
            bVar1 = true;
            goto code_r0x00023af7;
        }
    }
    else if (param_4 == 0) {
        return -0x7ffffffe;
    }
    if (param_6 == 0) {
        return -0x7ffffffe;
    }
    if (0x10 < param_4) {
        return -0x7ffffffe;
    }
code_r0x00023af7:
    if (0xfffff < param_2) {
        return -0x7ffffffe;
    }
    fcn.00023a71();
    uStack_24 = 0;
    uStack_18 = ((param_3 | 1) << 0x14 | param_2) << 8;
    do {
        auStack_14[1] = 0;
        auStack_14[2] = 0;
        auStack_14[3] = 0;
        auStack_14[4] = 0;
        auStack_14[0] = uStack_18;
        if (!bVar1) {
            auStack_14[0] = uStack_18 | param_4 - 1;
        }
        iVar3 = fcn.000238bb(&uStack_20,auStack_14);
        uVar2 = uStack_20;
        if (iVar3 != 0) goto code_r0x00023c1a;
        uVar4 = *(*0x1a0c4 + 4 + iStack_1c);
        uVar5 = uVar4 >> 0x1c & 3;
        uVar4 = uVar4 >> 0x1e;
        if ((uVar5 == 3) || (uVar5 == 1)) goto code_r0x00023c15;
        if (uVar5 != 0) goto code_r0x00023bdf;
        if ((param_3 & 8) != 0) goto code_r0x00023bbe;
        if (uVar4 == 3) {
code_r0x00023c15:
            iVar3 = -0x7ffffff9;
            goto code_r0x00023c1a;
        }
        if (uVar4 == 0) {
            if (!bVar1) goto code_r0x00023bbe;
code_r0x00023c11:
            iVar3 = 0;
            goto code_r0x00023c1a;
        }
        if (uVar4 == 1) goto code_r0x00023c15;
        if (uVar4 == 2) goto code_r0x00023bdf;
code_r0x00023bbe:
        if (uStack_20 == param_4) {
code_r0x00023c0b:
            fcn.000239f3(param_6);
            goto code_r0x00023c11;
        }
        if (uStack_20 != 0) {
            if (param_4 < uStack_20) goto code_r0x00023c0b;
            fcn.000239f3(param_6);
            param_4 = param_4 - uVar2;
            param_6 = param_6 + uVar2;
        }
code_r0x00023bdf:
        fcn.00013584();
        uStack_24 = uStack_24 + 1;
        if (0x1d < uStack_24) {
code_r0x00023c1a:
            if (uStack_24 == 0x1e) {
                iVar3 = -0x7ffffff9;
            }
            return iVar3;
        }
    } while( true );
}


/* fcn.0002450d @ 0x2450d */

uint __fastcall fcn.0002450d(int param_1,int *param_2,ushort param_3,char *param_4)

{
    char *pcVar1;
    int iVar2;
    uint8_t uVar3;
    uint8_t uVar5;
    uint32_t uVar4;
    char cVar6;
    uint32_t uVar7;
    uint uVar8;
    char *pcVar9;
    
    pcVar1 = *(param_1 + 0x20);
    uVar8 = 0x8000000e;
    if (((pcVar1 != NULL) && (*(param_1 + 0x24) != 0)) && (iVar2 = fcn.0002401e(), -1 < iVar2)) {
        uVar5 = pcVar1[0x7e];
        uVar7 = uVar5 << 8;
        if ((uVar5 != 0) && (uVar3 = 0, uVar5 != 0)) {
            iVar2 = 0;
            do {
                pcVar9 = pcVar1 + 0x80;
                uVar4 = uVar3;
                if (((*pcVar9 == '\x02') && (2 < pcVar1[0x81])) && (uVar3 < 0x80)) {
                    for (; uVar5 = uVar4 >> 8, uVar5 < 0x7c; uVar4 = CONCAT11(uVar5 + cVar6,uVar4)) {
                        uVar7 = CONCAT31(uVar7 >> 8,pcVar9[uVar5 + 4]) & 0xffffff1f;
                        if (param_3 >> 8 == pcVar9[uVar5 + 5]) {
                            *param_2 = uVar5 + 0x84 + iVar2;
                            uVar8 = 0;
                            *param_4 = uVar7;
                            break;
                        }
                        cVar6 = uVar7 + '\x01';
                        uVar7 = CONCAT31(uVar7 >> 8,cVar6);
                    }
                }
                uVar3 = uVar4 + 1;
                iVar2 = iVar2 + 0x80;
                pcVar1 = pcVar9;
            } while (uVar3 < uVar7 >> 8);
        }
    }
    return uVar8;
}


/* fcn.00023c30 @ 0x23c30 */

int __fastcall
fcn.00023c30(uint param_1,uint32_t param_2,uint8_t param_3,uint32_t param_4,uint param_5,int param_6)

{
    uint32_t *puVar1;
    bool bVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t uStack_24;
    uint8_t uStack_23;
    char cStack_21;
    int iStack_20;
    uint32_t uStack_1c;
    int iStack_18;
    uint32_t auStack_14 [5];
    
    bVar2 = false;
    iStack_18 = fcn.00023841();
    uVar3 = param_3 & 8;
    if (uVar3 == 0) {
        if (param_4 != 0) goto code_r0x00023c76;
        bVar2 = true;
code_r0x00023c82:
        fcn.00023a71();
        uStack_24 = 0;
        uVar7 = (param_3 << 0x14 | param_2) << 8;
        uStack_1c = uVar7;
        do {
            auStack_14[1] = 0;
            auStack_14[2] = 0;
            auStack_14[3] = 0;
            auStack_14[4] = 0;
            auStack_14[0] = uVar7;
            if (!bVar2) {
                auStack_14[0] = uVar7 | param_4 - 1;
            }
            uVar5 = 0;
            param_3 = 0;
            if (param_4 != 0) {
                do {
                    uStack_23 = 0;
                    do {
                        if (param_4 <= (uVar5 & 0xff)) break;
                        puVar1 = auStack_14 + (uVar5 & 0xfc) + 4;
                        *puVar1 = *puVar1 | *((uVar5 & 0xff) + param_6) << (('\x03' - (uVar5 >> 8)) * '\b' & 0x1fU);
                        param_3 = param_3 + 1;
                        uStack_23 = uStack_23 + 1;
                        uVar5 = CONCAT11(uStack_23,param_3);
                    } while (uStack_23 < 4);
                    uVar7 = uVar5 & 0xff;
                    uVar5 = param_3;
                } while (uVar7 < param_4);
                uVar7 = uStack_1c;
            }
            iVar4 = fcn.000238bb(&iStack_20,auStack_14);
            if (iVar4 != 0) break;
            uVar5 = *(*0x1a0c4 + 4 + iStack_18);
            uVar6 = uVar5 >> 0x1c & 3;
            uVar5 = uVar5 >> 0x1e;
            if (uVar6 == 3) goto code_r0x00023d8b;
            if (uVar6 == 0) {
                if (uVar3 != 0) {
code_r0x00023df8:
                    iVar4 = 0;
                    break;
                }
                if (uVar5 == 3) {
code_r0x00023d8b:
                    iVar4 = -0x7ffffff9;
                    break;
                }
                if (uVar5 == 0) {
                    if ((bVar2) || (iStack_20 == 0)) goto code_r0x00023df8;
                    fcn.000239f3(&cStack_21);
                    goto code_r0x00023d8b;
                }
                if (uVar5 == 1) {
                    if (iStack_20 == 0) goto code_r0x00023d8b;
                }
                else if (uVar5 != 2) goto code_r0x00023df8;
            }
            else {
                if (uVar6 != 1) goto code_r0x00023dd3;
                if (uVar3 == 0) {
                    iVar4 = -0x7ffffffe;
                    break;
                }
                if ((iStack_20 != 0) && (fcn.000239f3(&cStack_21), cStack_21 == '\0')) {
                    iVar4 = -0x7ffffffd;
                    break;
                }
            }
code_r0x00023dd3:
            fcn.00013584();
            uStack_24 = uStack_24 + 1;
        } while (uStack_24 < 0x1e);
        if (uStack_24 == 0x1e) {
            iVar4 = -0x7ffffff9;
        }
    }
    else {
        if (param_4 != 0) {
code_r0x00023c76:
            if ((param_6 != 0) && (param_4 < 0x11)) goto code_r0x00023c82;
        }
        iVar4 = -0x7ffffffe;
    }
    return iVar4;
}


/* fcn.00016ea3 @ 0x16ea3 */

uint __fastcall fcn.00016ea3(int16_t param_1)

{
    uint uVar1;
    
    uVar1 = 6;
    if (param_1 != 0x1fa4) {
        if (param_1 == 0x34bc) {
            uVar1 = 10;
        }
        else {
            if (param_1 == 27000) {
                return 0x14;
            }
            if (param_1 == -0x61cc) {
                return 0x1e;
            }
        }
    }
    return uVar1;
}


/* fcn.0001ae7f @ 0x1ae7f */

uint __fastcall fcn.0001ae7f(int param_1)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    
    iVar6 = *(param_1 + 0x8c);
    if (*(param_1 + 0x10) == 1) {
        uVar2 = *(iVar6 + 0xb);
        iVar6 = 0;
    }
    else {
        uVar2 = *(iVar6 + 1);
        iVar6 = *(iVar6 + 0x24);
    }
    if (uVar2 < 0x61) {
        if (uVar2 == 0x60) {
            uVar3 = ((iVar6 == 2) - 1 & 0xfff80080) + 0x80000;
            uVar4 = ((iVar6 == 2) - 1 & 0xfffc0040) + 0x40000;
        }
        else {
            uVar4 = 0x10;
            if (uVar2 == 0x10) {
                uVar3 = 8;
                uVar4 = 4;
            }
            else {
                uVar3 = 0x20;
                if (uVar2 != 0x20) {
                    if (uVar2 == 0x30) {
                        uVar3 = 0x8000;
                        uVar4 = 0x4000;
                    }
                    else {
                        if (uVar2 != 0x40) {
                            return 0x80000007;
                        }
                        uVar4 = 1;
                        uVar3 = 2;
                    }
                }
            }
        }
    }
    else if (uVar2 == 0x70) {
        if (iVar6 == 2) {
            uVar3 = 0x200000;
            uVar4 = 0x100000;
        }
        else {
            uVar3 = 0x200;
            uVar4 = 0x100;
        }
    }
    else if (uVar2 == 0x80) {
        uVar3 = ((iVar6 == 2) - 1 & 0xff800800) + 0x800000;
        uVar4 = ((iVar6 == 2) - 1 & 0xffc00400) + 0x400000;
    }
    else {
        if (uVar2 != 0x90) {
            return 0x80000007;
        }
        uVar3 = ((iVar6 == 2) - 1 & 0xfe002000) + 0x2000000;
        uVar4 = ((iVar6 == 2) - 1 & 0xff001000) + 0x1000000;
    }
    iVar5 = 600;
    *(*0x1a0c4 + 0x45444) = *(*0x1a0c4 + 0x45444) | uVar3;
    while ((uVar4 & *(*0x1a0c4 + 0x45444)) == 0) {
        fcn.00013584();
        iVar5 = iVar5 + -1;
        if (iVar5 == 0) {
            return 0x80000007;
        }
    }
    if (*0x1a1a4 != '\0') {
        return 0;
    }
    cVar1 = fcn.000148da();
    if (cVar1 != '\x01') {
        return 0;
    }
    cVar1 = fcn.000147e7();
    if (cVar1 == '\0') {
        if (iVar6 == 2) {
            return 0;
        }
        iVar6 = 10;
        fcn.00021633();
        do {
            uVar4 = fcn.00021652();
            if ((uVar4 & 0x8000) != 0) {
                return 0;
            }
            fcn.00013584();
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        return 0x80000007;
    }
    return 0;
}


/* fcn.0002328d @ 0x2328d */

void __fastcall fcn.0002328d(int param_1)

{
    int iVar1;
    uint8_t uVar2;
    char cVar3;
    int iVar4;
    uint extraout_EDX;
    ushort *puVar5;
    uint8_t uStack_165;
    uint8_t auStack_164 [2];
    uint8_t uStack_162;
    char cStack_161;
    uint8_t uStack_160;
    uint8_t uStack_15f;
    uint8_t uStack_15e;
    uint8_t uStack_15d;
    uint8_t uStack_15c;
    uint8_t uStack_15b;
    uint8_t uStack_15a;
    ushort uStack_154;
    uchar uStack_152;
    uint uStack_150;
    char cStack_14c;
    uchar uStack_14b;
    uint8_t uStack_14a;
    int iStack_148;
    uint32_t uStack_144;
    uint8_t uStack_13e;
    uchar uStack_13d;
    
    iVar1 = *(param_1 + 0x8c);
    fcn.000102b0(&uStack_154,0x150);
    if (*(param_1 + 0x10) == 1) {
        *(iVar1 + 0x211) = 0;
        *(iVar1 + 0x218) = 0;
        if ((((*(param_1 + 0x10) == 3) && (*(iVar1 + 0x1a) == '\x01')) && (*(iVar1 + 0x1b) == '\x01')) ||
           ((uVar2 = fcn.000219bc(), uVar2 < 0x14 ||
            (iVar4 = fcn.00023aaa(8,1,extraout_EDX,&uStack_165), iVar4 < 0)))) goto code_r0x000234f5;
        if ((uStack_165 & 1) == 0) {
            if (*(param_1 + 0x10) == 3) goto code_r0x000234f5;
        }
        else if (*(param_1 + 0x10) == 3) {
            *(iVar1 + 0x19c) = 1;
        }
        if (*(param_1 + 0x10) == 1) {
            if (*(iVar1 + 0x20c) < 3) goto code_r0x000234f5;
            if (*(iVar1 + 0x217) == '\x01') {
                iVar4 = fcn.00023aaa(8,1,0,&uStack_165);
                if (iVar4 < 0) {
                    *(iVar1 + 0x218) = 0;
                    goto code_r0x000234f5;
                }
                *(iVar1 + 0x218) = uStack_165;
                if ((1 < uStack_165) && ((*0x1a0d8 == 1 || (cVar3 = fcn.0002321a(), cVar3 == '\0')))) {
                    *(iVar1 + 0x218) = 0;
                }
            }
        }
        iVar4 = fcn.00023aaa(8,0x10,*(iVar1 + 0x24),auStack_164);
        if ((iVar4 < 0) || ((auStack_164[0] & 1) == 0)) goto code_r0x000234f5;
        uVar2 = uStack_162 & 3;
        uStack_154 = 0x101;
        uStack_152 = 1;
        if ((uStack_162 & 3) != 0) {
            if (uVar2 == 1) {
                uStack_150 = 0x8000;
                goto code_r0x00023421;
            }
            if (uVar2 == 2) {
                uStack_150 = 0x20000;
                goto code_r0x00023421;
            }
            if (uVar2 == 3) {
                uStack_150 = 0x80000;
                goto code_r0x00023421;
            }
code_r0x000233f2:
            uStack_154 = 0x100;
            goto code_r0x000234f5;
        }
        uStack_150 = 0x2000;
code_r0x00023421:
        cStack_14c = cStack_161 + '\x01';
        if (*(param_1 + 0x10) == 1) {
            if ((uStack_160 & 8) == 0) {
                if ((uStack_160 & 2) == 0) {
                    if ((uStack_160 & 1) != 0) {
                        uStack_14b = 1;
                    }
                }
                else {
                    uStack_14b = 2;
                }
            }
            else {
                uStack_14b = 4;
            }
        }
        if (8 < uStack_15f) goto code_r0x000233f2;
        if (uStack_15f == 8) {
            uStack_14a = 8;
        }
        else {
            uStack_14a = uStack_15f + 9;
            if (0xc < uStack_14a) {
                uStack_14a = 0xc;
            }
        }
        uStack_13e = uStack_15e & 1;
        if (*(param_1 + 0x10) == 3) {
            uStack_144 = 0x80;
        }
        else {
            uStack_144 = (uStack_15c & 3) << 8 | uStack_15d;
        }
        if ((uStack_15b & 1) != 0) {
            uStack_13d = 1;
        }
        if ((uStack_15a & 8) == 0) {
            if ((uStack_15a & 4) == 0) {
                if ((uStack_15a & 2) != 0) {
                    iStack_148 = 2;
                }
                if (iStack_148 < 3) goto code_r0x000234f5;
            }
            else {
                iStack_148 = 4;
            }
        }
        else {
            iStack_148 = 8;
        }
        if (*(param_1 + 0x10) == 1) {
            iStack_148 = 2;
            goto code_r0x000234f5;
        }
    }
    else {
        *(iVar1 + 0x19c) = 0;
code_r0x000234f5:
        if (*(param_1 + 0x10) == 1) {
            puVar5 = iVar1 + 0xa8;
            goto code_r0x00023506;
        }
    }
    puVar5 = iVar1 + 0x44;
code_r0x00023506:
    if (puVar5 != &uStack_154) {
        section..text(puVar5,&uStack_154,0x150);
    }
    return;
}


/* fcn.000172fc @ 0x172fc */

void __fastcall fcn.000172fc(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int extraout_EDX;
    int iVar5;
    
    iVar5 = *(param_1 + 0x8c);
    if (*(iVar5 + 0x20c) < 3) {
        uVar2 = fcn.00016ea3();
        if (*(extraout_EDX + 0x8a) < uVar2) {
            uVar2 = *(extraout_EDX + 0x8a);
        }
        *(extraout_EDX + 0x8a) = uVar2;
        iVar5 = extraout_EDX;
    }
    uVar2 = *(iVar5 + 0xa2);
    uVar3 = *(iVar5 + 0x8b) & 0x1f;
    if (uVar2 <= uVar3) {
        uVar3 = uVar2;
    }
    uVar1 = *(iVar5 + 0x84);
    *(iVar5 + 0x8b) = *(iVar5 + 0x8b) & 0xe0 | uVar3;
    if (uVar2 < uVar1) {
        uVar1 = uVar2;
    }
    *(iVar5 + 0x84) = uVar1;
    uVar4 = *(iVar5 + 0xa0);
    if (*(iVar5 + 0x82) <= *(iVar5 + 0xa0)) {
        uVar4 = *(iVar5 + 0x82);
    }
    *(iVar5 + 0x82) = uVar4;
    return;
}


/* fcn.000171ba @ 0x171ba */

//WARNING: Variable defined which should be unmapped: var_1h

void __fastcall fcn.000171ba(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint16_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int32_t var_8h;
    uint32_t var_1h;
    
    var_8h = CONCAT22(param_1 >> 0x10,0x6e6);
    iVar5 = *(param_1 + 0x8c);
    *(iVar5 + 0x50) = 0;
    *(iVar5 + 0x4e) = 0;
    *(iVar5 + 0x4c) = 0;
    *(iVar5 + 0x54) = 0;
    *(iVar5 + 0x58) = 0;
    *(iVar5 + 0x5c) = 0;
    iVar6 = fcn.0002450d(var_8h,&var_1h);
    if ((-1 < iVar6) && (var_1h._0_1_ = param_1 >> 0x18, 5 < var_1h)) {
        iVar6 = *(param_1 + 0x20);
        uVar1 = *(iVar6 + 6 + var_8h);
        uVar2 = *(iVar6 + 5 + var_8h);
        uVar3 = *(iVar6 + 4 + var_8h);
        *(iVar5 + 0x5c) = 1000;
        *(iVar5 + 0x52) = *(uVar3 * 2 + 0x19d60);
        uVar8 = uVar1;
        uVar4 = *(uVar2 * 2 + 0x19d60);
        *(iVar5 + 0x4e) = uVar4;
        uVar8 = (uVar4 * uVar8 * uVar8) / 0x633864;
        uVar9 = uVar4 * 1000;
        *(iVar5 + 0x50) = uVar8;
        uVar8 = uVar8 & 0xffff;
        uVar7 = uVar8 * 1000;
        *(iVar5 + 0x54) = uVar9;
        *(iVar5 + 0x58) = uVar7;
        *(iVar5 + 0x4c) = uVar7 <= uVar9 && uVar9 + uVar8 * -1000 != 0;
    }
    return;
}


/* fcn.00020d54 @ 0x20d54 */

void __fastcall fcn.00020d54(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    
    iVar1 = *(param_1 + 0x8c);
    iVar3 = fcn.00020aa9();
    if (iVar3 != 0) {
        puVar5 = *(iVar3 + 0xc) + *0x1a0c4;
        *puVar5 = *puVar5 & 0xe001e001 | 0x10001;
        puVar5 = *(iVar3 + 0x10) + *0x1a0c4;
        *puVar5 = *puVar5 & 0xe000e001 | *(iVar1 + 0x70) << 0x10 | 1;
        uVar2 = *(iVar1 + 0x74);
        uVar4 = uVar2 / 1000;
        if (uVar2 % 1000 != 0) {
            uVar4 = uVar4 + 1;
        }
        puVar5 = *(iVar3 + 8) + *0x1a0c4;
        *puVar5 = *puVar5 & 0xfffffe0f | (uVar4 + 1) * 0x10;
        puVar5 = *(iVar3 + 8) + *0x1a0c4;
        *puVar5 = *puVar5 | 2;
    }
    return;
}


/* fcn.00023694 @ 0x23694 */

void __fastcall fcn.00023694(uint param_1,uint param_2)

{
    int32_t var_4h;
    
    var_4h = CONCAT13(param_1 >> 0x18,0x1aa00);
    fcn.00023c30(8,3,param_2,&var_4h);
    return;
}


/* fcn.00017277 @ 0x17277 */

void __fastcall fcn.00017277(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uchar uStack_5;
    uint uStack_4;
    
    iVar1 = *(param_1 + 0x8c);
    uStack_4._3_1_ = param_1 >> 0x18;
    uStack_4._0_3_ = param_1;
    uVar3 = 0;
    if (*(iVar1 + 0x4c) != '\0') {
        do {
            iVar2 = fcn.00023aaa(8,3,0,&uStack_4);
            if (((-1 < iVar2) && ((uStack_4 & 0x10000) != 0)) && ((uStack_4 & 0x1000) != 0)) {
                fcn.00023c30(8,1,0,&uStack_5);
                *(iVar1 + 0x34) = 6;
                return;
            }
            fcn.00013584();
            uVar3 = uVar3 + 1000;
        } while (uVar3 <= *(iVar1 + 0x48));
    }
    return;
}


/* fcn.00020ac5 @ 0x20ac5 */

int __fastcall fcn.00020ac5(int param_1)

{
    uint8_t *puVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint8_t uVar6;
    ushort uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint8_t uStack_e;
    uint8_t uStack_d;
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    char cStack_9;
    ushort uStack_8;
    uint8_t uStack_6;
    ushort uStack_4;
    uint8_t uStack_2;
    
    iVar5 = *(param_1 + 0x8c);
    uStack_8 = 0;
    uStack_6 = 0;
    uStack_4 = 0;
    uStack_2 = 0;
    uStack_d = 0;
    uStack_c = 0;
    uStack_b = 0;
    uStack_a = 0;
    cStack_9 = '\0';
    uStack_e = 0;
    iVar3 = fcn.00023aaa(8,1,0,&uStack_d);
    if (iVar3 < 0) {
        return iVar3;
    }
    if ((uStack_d & 1) != 0) {
        if ((uStack_d & 4) != 0) {
            *(iVar5 + 0x2c) = 1;
        }
        iVar3 = fcn.00023aaa(8,1,0,&uStack_c);
        if (iVar3 < 0) {
            return iVar3;
        }
        if ((uStack_c & 2) != 0) {
            *(iVar5 + 0x2d) = 1;
        }
        if ((uStack_c & 0x20) != 0) {
            *(iVar5 + 0x2e) = 1;
        }
        puVar1 = iVar5 + 0x30;
        iVar3 = fcn.00023aaa(8,1,0,puVar1);
        if (iVar3 < 0) {
            return iVar3;
        }
        *puVar1 = *puVar1 >> 1 & 3;
        uVar4 = 27000000 / *(iVar5 + 0x38);
        iVar3 = fcn.00023aaa(8,3,0,&uStack_8);
        if (iVar3 < 0) {
            return iVar3;
        }
        uVar9 = CONCAT11(uStack_8,uStack_8._1_1_) << 2 | uStack_6 & 3;
        iVar3 = fcn.00023aaa(8,3,0,&uStack_4);
        if (iVar3 < 0) {
            return iVar3;
        }
        uVar8 = CONCAT11(uStack_4,uStack_4._1_1_) << 2 | uStack_2 & 3;
        if (uVar4 < uVar9) {
            uVar4 = uVar9;
        }
        else if (uVar8 < uVar4) {
            uVar4 = uVar8;
        }
        iVar3 = fcn.00023aaa(8,1,0,&uStack_b);
        if (iVar3 < 0) {
            return iVar3;
        }
        uStack_b = uStack_b & 0x1f;
        iVar3 = fcn.00023aaa(8,1,0,&uStack_a);
        if (iVar3 < 0) {
            return iVar3;
        }
        uVar9 = CONCAT11(uStack_b,uStack_a) & 0xffffff1f;
        uVar7 = uVar9;
        if ((uStack_a & 0x1f) == 0) {
            cVar2 = cStack_9;
        }
        else {
            do {
                uVar7 = uVar9;
                uVar6 = uVar9;
                if (uVar6 < uVar9 >> 8) {
                    return -0x7ffffff9;
                }
                cVar2 = uVar4 / (1 << (uVar6 & 0x1f));
                if (cVar2 != '\0') break;
                uVar9 = CONCAT31(uVar9 >> 8,uVar6 - 1);
                uVar7 = uVar9;
            } while (uVar6 - 1 != '\0');
        }
        if (uVar7 >> 8 <= uVar7) {
            *(iVar5 + 0x2f) = uVar7;
            *(iVar5 + 0x31) = cVar2;
            if (*(iVar5 + 0x2d) != '\0') {
                iVar3 = fcn.00023aaa(8,1,0,&uStack_e);
                if (iVar3 < 0) {
                    return iVar3;
                }
                uStack_e = uStack_e & 0xfe | 2;
                iVar3 = fcn.00023c30(8,1,0,&uStack_e);
                if (iVar3 < 0) {
                    return iVar3;
                }
            }
            if (*(iVar5 + 0x2e) != '\0') {
                iVar5 = fcn.00023aaa(8,1,0,&uStack_e);
                if (iVar5 < 0) {
                    return iVar5;
                }
                uStack_e = uStack_e | 8;
                iVar3 = fcn.00023c30(8,1,0,&uStack_e);
            }
            return iVar3;
        }
    }
    return -0x7ffffff9;
}


/* fcn.0001b031 @ 0x1b031 */

uint __fastcall fcn.0001b031(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uStack_4;
    
    iVar2 = *(param_1 + 0x8c);
    if (*(param_1 + 0x10) == 1) {
        uVar1 = *(iVar2 + 0xb);
        iVar2 = 0;
    }
    else {
        uVar1 = *(iVar2 + 1);
        iVar2 = *(iVar2 + 0x24);
    }
    if (uVar1 < 0x61) {
        if (uVar1 == 0x60) {
            uStack_4 = ((iVar2 == 2) - 1 & 0xfff80080) + 0x80000;
        }
        else if (uVar1 == 0x10) {
            uStack_4 = 8;
        }
        else {
            uStack_4 = 0x20;
            if (uVar1 != 0x20) {
                if (uVar1 == 0x30) {
                    uStack_4 = 0x8000;
                }
                else {
                    if (uVar1 != 0x40) {
                        return 0x80000007;
                    }
                    uStack_4 = 2;
                }
            }
        }
    }
    else if (uVar1 == 0x70) {
        uStack_4 = ((iVar2 != 2) - 1 & 0x1ffe00) + 0x200;
    }
    else if (uVar1 == 0x80) {
        uStack_4 = ((iVar2 == 2) - 1 & 0xff800800) + 0x800000;
    }
    else {
        if (uVar1 != 0x90) {
            return 0x80000007;
        }
        uStack_4 = ((iVar2 == 2) - 1 & 0xfe002000) + 0x2000000;
    }
    *(*0x1a0c4 + 0x45444) = ~uStack_4 & *(*0x1a0c4 + 0x45444);
    fcn.00013584();
    return 0;
}


/* fcn.0001714f @ 0x1714f */

void __fastcall fcn.0001714f(uint32_t param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uStack_8;
    int8_t var_1h;
    
    iVar1 = *(param_1 + 0x8c);
    uStack_8 = param_1 & 0xffffff;
    *(iVar1 + 0xa4) = 0;
    *(iVar1 + 0xa6) = 0;
    if (3 < *(iVar1 + 0x20c)) {
        iVar2 = fcn.00023aaa(8,1,0,&var_1h);
        if (-1 < iVar2) {
            if ((uStack_8 & 0x7000000) != 0) {
                *(iVar1 + 0xa4) = 1;
                *(iVar1 + 0xa5) = var_1h & 7;
                *(iVar1 + 0xa6) = var_1h >> 3 & 1;
            }
        }
    }
    return;
}


/* fcn.00017750 @ 0x17750 */

int __fastcall fcn.00017750(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    unkuint3 Var5;
    int iVar4;
    ulong uVar6;
    
    iVar2 = (param_2 * 1000000000 & 0xffffffff) * 10;
    uVar6 = fcn.000268e0(iVar2,(iVar2 >> 0x20) + (param_2 * 1000000000 >> 0x20) * 10,param_1 * 1000);
    uVar1 = ((0x3c / param_4 + 0xb) * 10000) / (param_3 / 1000);
    uVar3 = uVar1;
    Var5 = uVar1 >> 8;
    if ((uVar6 >> 0x20 == uVar6 < uVar3) && (uVar6 - uVar3 < 100)) {
        iVar4 = CONCAT31(Var5,1);
    }
    else {
        iVar4 = Var5 << 8;
    }
    return iVar4;
}


/* fcn.0001770c @ 0x1770c */

uint __fastcall fcn.0001770c(int param_1)

{
    if (param_1 != 0) {
        if (param_1 == 1) {
            return 0x113;
        }
        if (param_1 == 2) {
            return 0xdc;
        }
        if (param_1 == 3) {
            return 0xa5;
        }
        if (param_1 == 4) {
            return 0x6e;
        }
        if (param_1 == 5) {
            return 0x37;
        }
        if (param_1 == 6) {
            return 0;
        }
    }
    return 0x14a;
}


/* fcn.00020ec1 @ 0x20ec1 */

//WARNING: Variable defined which should be unmapped: var_1h

void __fastcall fcn.00020ec1(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t *puVar3;
    int32_t var_1h;
    
    iVar2 = *(param_1 + 0x8c);
    iVar1 = fcn.00020aa9();
    if ((iVar1 != 0) && (*(iVar2 + 0x34) != '\x04')) {
        if (*(iVar2 + 0x2c) == '\0') {
            puVar3 = *(iVar1 + 8) + *0x1a0c4;
            *puVar3 = *puVar3 & 0xfffffffb;
        }
        else {
            iVar2 = fcn.00023aaa(8,1,0,&var_1h);
            if (-1 < iVar2) {
                fcn.00023c30(8,1,0,&var_1h);
            }
        }
    }
    return;
}


/* fcn.000266fb @ 0x266fb */

void __fastcall fcn.000266fb(int param_1)

{
    uint uVar1;
    int iVar2;
    
    iVar2 = 0;
    if (*(param_1 + 0x32) == '\x02') {
        if (*(param_1 + 0x35) == '\0') {
            iVar2 = 0xc8250;
        }
        else if (*(param_1 + 0x35) == '\x01') {
            iVar2 = 0xc8350;
        }
        uVar1 = *(param_1 + 0x3c);
        *(param_1 + 0x3c) = 0;
        fcn.000264ed();
        fcn.00013584();
        *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 0x7fffffff;
        *(param_1 + 0x3c) = uVar1;
    }
    return;
}


/* fcn.00019599 @ 0x19599 */

void fcn.00019599(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0e4 == 0) {
        iVar1 = 0x70180;
    }
    else if (*0x1a0e4 == 1) {
        iVar1 = 0x71180;
    }
    else if (*0x1a0e4 == 2) {
        iVar1 = 0x72180;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0x8fffffff;
    return;
}


/* fcn.0001a387 @ 0x1a387 */

void fcn.0001a387(void)

{
    int iVar1;
    
    if (*0x1a0e8 == 0) {
        iVar1 = 0x70028;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x71028;
    }
    else {
        if (*0x1a0e8 != 2) {
            return;
        }
        iVar1 = 0x72028;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffdfff;
    return;
}


/* fcn.000206cc @ 0x206cc */

void fcn.000206cc(void)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    
    iVar1 = *0x1a0c4;
    uVar3 = 0;
    iVar2 = 0;
    iVar4 = 0;
    if (*0x1a0fc == 0) {
        iVar4 = 0x70008;
        iVar2 = 0x60200;
    }
    else if (*0x1a0fc == 1) {
        iVar4 = 0x71008;
        iVar2 = 0x61200;
    }
    else if (*0x1a0fc == 2) {
        iVar4 = 0x72008;
        iVar2 = 0x62200;
    }
    else if (*0x1a0fc == 3) {
        iVar4 = 0x73008;
        iVar2 = 0x63200;
    }
    *(*0x1a0c4 + iVar2) = 0;
    *(iVar1 + iVar4) = *(iVar1 + iVar4) & 0x7fffffff;
    do {
        if ((*(*0x1a0c4 + iVar4) & 0x40000000) == 0) {
            return;
        }
        fcn.00013584();
        uVar3 = uVar3 + 1;
    } while (uVar3 < 0x28);
    return;
}


/* fcn.00020547 @ 0x20547 */

void fcn.00020547(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0fc == 0) {
        iVar1 = 0x60400;
    }
    else if (*0x1a0fc == 1) {
        iVar1 = 0x61400;
    }
    else if (*0x1a0fc == 2) {
        iVar1 = 0x62400;
    }
    else if (*0x1a0fc == 3) {
        iVar1 = 0x63400;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0x7ffffff;
    return;
}


/* fcn.0001cc9b @ 0x1cc9b */

uint __fastcall fcn.0001cc9b(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    
    iVar2 = 0;
    iVar3 = 0;
    iVar1 = *(param_1 + 0x6c);
    if (iVar1 == 0) {
        iVar2 = 0x78000;
        iVar3 = 0x78004;
    }
    else if (iVar1 == 1) {
        iVar2 = 0x78200;
        iVar3 = 0x78204;
    }
    else if (iVar1 == 2) {
        iVar2 = 0x78400;
        iVar3 = 0x78404;
    }
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0x7fff7fff;
    *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 0x3fffffff;
    if (*(param_1 + 0x10) == 3) {
        iVar3 = fcn.00020750();
        *(iVar3 + *0x1a0c4) = *(iVar3 + *0x1a0c4) & 0xbfffffff;
    }
    return 0;
}


/* fcn.000235d5 @ 0x235d5 */

//WARNING: Variable defined which should be unmapped: var_3h

void __fastcall fcn.000235d5(int param_1)

{
    int iVar1;
    char cVar2;
    int extraout_EDX;
    uint uVar3;
    uint32_t var_3h;
    
    uVar3 = 0;
    var_3h._0_1_ = '\0';
    if (*(param_1 + 0x10) == 1) {
        iVar1 = *(param_1 + 0x8c);
        var_3h._0_1_ = '\0';
        cVar2 = fcn.000148da();
        param_1 = extraout_EDX;
        if (cVar2 == '\x01') {
            var_3h._0_1_ = *(iVar1 + 0x211);
        }
    }
    if (*(param_1 + 0x10) == 3) {
        uVar3 = *(*(param_1 + 0x8c) + 0x24);
        var_3h._0_1_ = *(*(param_1 + 0x8c) + 0x19c);
    }
    fcn.00023aaa(8,1,uVar3,&var_3h + 2);
    fcn.00023c30(8,1,uVar3,&var_3h + 2);
    if (var_3h != '\0') {
        fcn.00023aaa(8,1,uVar3,&var_3h + 2);
        fcn.00023c30(8,1,uVar3,&var_3h + 2);
    }
    return;
}


/* fcn.00020686 @ 0x20686 */

void fcn.00020686(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0fc == 0) {
        iVar1 = 0x46140;
    }
    else if (*0x1a0fc == 1) {
        iVar1 = 0x46144;
    }
    else if (*0x1a0fc == 2) {
        iVar1 = 0x46148;
    }
    else if (*0x1a0fc == 3) {
        iVar1 = 0x4614c;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffffff;
    return;
}


/* fcn.00020fc0 @ 0x20fc0 */

void fcn.00020fc0(void)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    
    iVar2 = fcn.00020aa9();
    if (iVar2 == 0) {
        return;
    }
    puVar3 = *(iVar2 + 8) + *0x1a0c4;
    *puVar3 = *puVar3 & 0xfffffffe;
    fcn.00020e09();
    iVar2 = fcn.00020aa9();
    if ((iVar2 != 0) && (uVar1 = *(*(iVar2 + 4) + *0x1a0c4), *0x1a1a4 == '\0')) {
        while ((uVar1 & 0x8000000) != 0) {
            uVar1 = *(*(iVar2 + 4) + *0x1a0c4);
        }
    }
    return;
}


/* fcn.00020911 @ 0x20911 */
// decompilation failed

/* fcn.000159c0 @ 0x159c0 */

int __fastcall fcn.000159c0(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    bool bVar6;
    
    uVar5 = 0;
    iVar4 = *(param_1 + 0x14);
    uVar3 = 0;
    if (iVar4 == 0) {
        uVar3 = 0x400;
    }
    else if (iVar4 == 1) {
        uVar3 = 0x800;
    }
    else if (iVar4 == 4) {
        uVar3 = 0x1000;
    }
    else if (iVar4 == 5) {
        uVar3 = 0x2000;
    }
    else if (iVar4 == 6) {
        uVar3 = 0x4000;
    }
    else if (iVar4 == 7) {
        uVar3 = 0x200000;
    }
    *(*0x1a0c4 + 0x164280) = *(*0x1a0c4 + 0x164280) | uVar3;
    iVar4 = *(param_1 + 0x70);
    if (iVar4 == 6) {
        iVar4 = 0x46010;
    }
    else if (iVar4 == 7) {
        iVar4 = 0x46014;
    }
    else if (iVar4 == 8) {
        *0x1a0a0 = *0x1a0a0 + -1;
        iVar4 = 0x46020;
    }
    else if (iVar4 == 9) {
        iVar4 = 0x46038;
    }
    else if (iVar4 == 10) {
        iVar4 = 0x46040;
    }
    else if (iVar4 == 0xb) {
        iVar4 = 0x46048;
    }
    else {
        if (iVar4 != 0xc) {
            return -0x7ffffffe;
        }
        iVar4 = 0x46050;
    }
    fcn.00021941();
    iVar2 = fcn.00021759();
    if (iVar2 < 0) {
        return iVar2;
    }
    cVar1 = fcn.00015956();
    if ((cVar1 == '\x01') && (bVar6 = *0x1a1a4 == '\0', *(*0x1a0c4 + iVar4) = *(*0x1a0c4 + iVar4) & 0x7fffffff, bVar6)
       ) {
        uVar3 = 0;
        while (fcn.00013584(), (*(*0x1a0c4 + iVar4) & 0x40000000) != 0) {
            if (0x14 < uVar3) goto code_r0x00015af9;
            uVar3 = uVar3 + 1;
        }
        if (uVar3 < 0x15) goto code_r0x00015b04;
    }
    else {
code_r0x00015b04:
        fcn.00021941();
        fcn.000217d2();
        cVar1 = fcn.00015956();
        if ((cVar1 != '\x01') ||
           (bVar6 = *0x1a1a4 != '\0', *(*0x1a0c4 + iVar4) = *(*0x1a0c4 + iVar4) & 0xf7ffffff, bVar6))
        goto code_r0x00015b67;
        while (fcn.00013584(), (*(*0x1a0c4 + iVar4) & 0x4000000) != 0) {
            if (10000 < uVar5) goto code_r0x00015af9;
            uVar5 = uVar5 + 1;
        }
        if (uVar5 < 0x2711) goto code_r0x00015b67;
    }
code_r0x00015af9:
    iVar2 = -0x7fffffee;
code_r0x00015b67:
    return iVar2;
}


/* fcn.000201e9 @ 0x201e9 */

void fcn.000201e9(void)

{
    char cVar1;
    int extraout_ECX;
    
    cVar1 = fcn.000148da();
    if (((cVar1 != '\0') && (*(*(extraout_ECX + 0x8c) + 0x210) != '\0')) &&
       ((~-((*(*0x1a0c4 + 0x61404) & 8) != 0) & ~(*(*0x1a0c4 + 0x60404) >> 3) & 1) == 1)) {
        *(*0x1a0c4 + 0x6fa88) = *(*0x1a0c4 + 0x6fa88) & 0x7fffffff;
    }
    return;
}


/* fcn.0001945c @ 0x1945c */

void fcn.0001945c(void)

{
    if (*0x1a0d8 == 1) {
        if (*0x1a0e4 == 0) {
            *(*0x1a0c4 + 0x7027c) = *(*0x1a0c4 + 0x7027c) & 0xfaa9f800 | 0x2a90000;
        }
        else {
            if (*0x1a0e4 == 1) {
                *(*0x1a0c4 + 0x7127c) = *(*0x1a0c4 + 0x7127c) & 0xfd53faaa | 0x55302aa;
                return;
            }
            if (*0x1a0e4 == 2) {
                *(*0x1a0c4 + 0x7227c) = *(*0x1a0c4 + 0x7227c) & 0xfffffd54 | 0x7ff0554;
                return;
            }
        }
        return;
    }
    if (1 < *0x1a0d8 - 2U) {
        return;
    }
    *(*0x1a0c4 + 0x4438c) = *(*0x1a0c4 + 0x4438c) & 0x7fffffff;
    *(*0x1a0c4 + 0x4438c) = *(*0x1a0c4 + 0x4438c) & 0xbfffffff;
    *(*0x1a0c4 + 0x4438c) = *(*0x1a0c4 + 0x4438c) | 0x1c000000;
    if (*0x1a0e4 == 0) {
        *(*0x1a0c4 + 0x7027c) = *(*0x1a0c4 + 0x7027c) & 0xf7fff000 | 0x7ff0000;
    }
    else {
        if (*0x1a0e4 == 1) {
            *(*0x1a0c4 + 0x7127c) = *(*0x1a0c4 + 0x7127c) & 0xf3fff000 | 0x3ff0000;
            return;
        }
        if (*0x1a0e4 == 2) {
            *(*0x1a0c4 + 0x7227c) = *(*0x1a0c4 + 0x7227c) & 0xf7fff400 | 0x7ff0400;
            return;
        }
    }
    return;
}


/* fcn.0001a2e8 @ 0x1a2e8 */

void fcn.0001a2e8(void)

{
    int iVar1;
    
    if (*0x1a0e8 == 0) {
        iVar1 = 0x7003c;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x7103c;
    }
    else {
        if (*0x1a0e8 != 2) {
            return;
        }
        iVar1 = 0x7203c;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffffff4 | 4;
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffbfff | 0x8000;
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffecff | 0xc00;
    return;
}


/* fcn.000170e4 @ 0x170e4 */

void fcn.000170e4(void)

{
    fcn.00014679();
    return;
}


/* fcn.00017080 @ 0x17080 */

int __fastcall fcn.00017080(uint32_t param_1)

{
    uint32_t uVar1;
    bool bVar2;
    
    uVar1 = param_1 / 10;
    if (uVar1 < 0x69781) {
        if ((((uVar1 == 0x69780) || (uVar1 == 0x278d0)) || (uVar1 == 0x34bc0)) || (uVar1 == 270000))
        goto code_r0x000170d3;
        bVar2 = uVar1 == 0x4f1a0;
    }
    else {
        if ((uVar1 == 540000) || (uVar1 == 0x9e340)) goto code_r0x000170d3;
        if (uVar1 == 0xa4cb8) goto code_r0x000170cf;
        bVar2 = uVar1 == 810000;
    }
    if (!bVar2) {
code_r0x000170cf:
        return (param_1 / 10 >> 8) << 8;
    }
code_r0x000170d3:
    return CONCAT31(0x7b98,~-(8100000 < param_1) & 1);
}


/* fcn.00020f38 @ 0x20f38 */

uint fcn.00020f38(void)

{
    int iVar1;
    uint uVar2;
    uint32_t *puVar3;
    
    iVar1 = fcn.00020aa9();
    if (iVar1 == 0) {
        uVar2 = 0x80000002;
    }
    else {
        fcn.00020e09();
        *(*0x1a0c4 + 0xc2020) = *(*0x1a0c4 + 0xc2020) | 0x20000000;
        puVar3 = *(iVar1 + 8) + *0x1a0c4;
        *puVar3 = *puVar3 | 1;
        uVar2 = fcn.00016f56();
        puVar3 = *(iVar1 + 8) + *0x1a0c4;
        *puVar3 = *puVar3 & 0xfffffff7;
        *(*0x1a0c4 + 0xc2020) = *(*0x1a0c4 + 0xc2020) & 0xdfffffff;
    }
    return uVar2;
}


/* fcn.0001471f @ 0x1471f */

int __fastcall fcn.0001471f(int param_1)

{
    char *pcVar1;
    int iVar2;
    int iStack_8;
    
    if ((*(param_1 + 0x10) == 1) || (*(param_1 + 0x10) == 5)) {
        pcVar1 = *(param_1 + 0x8c) + 0xa8;
    }
    else {
        pcVar1 = *(param_1 + 0x8c) + 0x44;
    }
    if (*pcVar1 == '\0') {
        iVar2 = 0;
    }
    else {
        iVar2 = *(pcVar1 + 0xc);
    }
    if (iVar2 != 0) {
        return iVar2;
    }
    iVar2 = fcn.00014679();
    if (iVar2 == 0x12) {
        iStack_8 = 1;
    }
    else if (iVar2 == 0x18) {
        iStack_8 = 2;
    }
    else if (iVar2 == 0x1e) {
        iStack_8 = 4;
    }
    else {
        if (iVar2 != 0x24) {
            return 0;
        }
        iStack_8 = 8;
    }
    return iStack_8;
}


/* fcn.00022e93 @ 0x22e93 */

uint32_t __fastcall fcn.00022e93(int param_1,int param_2,int param_3,uint32_t *param_4,uint *param_5)

{
    char cVar1;
    uint32_t uVar2;
    
    if (*(param_1 + 0x10) == 1) {
        cVar1 = *(*(param_1 + 0x8c) + 0xa8);
code_r0x00022ec2:
        if (cVar1 == '\x01') {
            uVar2 = fcn.0001be03();
            *param_4 = uVar2;
            return -((param_2 * param_3 * 8) / uVar2 < *(param_1 + 0x2c)) & 0x80000003;
        }
    }
    else if (*(param_1 + 0x10) == 3) {
        cVar1 = *(*(param_1 + 0x8c) + 0x44);
        goto code_r0x00022ec2;
    }
    if (*param_4 == 0x12) {
code_r0x00022f70:
        *param_4 = 0x12;
        *param_5 = 1;
        uVar2 = -((param_2 * param_3 * 8) / *param_4 < *(param_1 + 0x2c)) & 0x80000003;
    }
    else {
        if (*param_4 == 0x18) {
code_r0x00022f50:
            *param_4 = 0x18;
            *param_5 = 2;
            if ((param_2 * param_3 * 8) / *param_4 < *(param_1 + 0x2c)) goto code_r0x00022f70;
        }
        else if (*param_4 == 0x1e) {
code_r0x00022f30:
            *param_4 = 0x1e;
            *param_5 = 4;
            if ((param_2 * param_3 * 8) / *param_4 < *(param_1 + 0x2c)) goto code_r0x00022f50;
        }
        else {
            if (*param_4 != 0x24) {
                return 0x80000003;
            }
            *param_4 = 0x24;
            *param_5 = 8;
            if ((param_2 * param_3 * 8) / *param_4 < *(param_1 + 0x2c)) goto code_r0x00022f30;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000165ef @ 0x165ef */

int __fastcall fcn.000165ef(int param_1)

{
    int iVar1;
    int iVar2;
    
    fcn.00021941();
    iVar2 = fcn.00021759();
    if (iVar2 < 0) {
        return iVar2;
    }
    if (*(param_1 + 0x70) == 8) {
        if (*0x1a0a0 == 0) {
            fcn.00015809();
            fcn.00015eb7();
            fcn.000158a3();
        }
        *0x1a0a0 = *0x1a0a0 + 1;
    }
    else if ((((*(param_1 + 0x10) != 1) || (*(*(param_1 + 0x8c) + 0x210) != '\x01')) || (*(param_1 + 0x70) != 6)) ||
            (-1 < *(*0x1a0c4 + 0x46010))) {
        fcn.00015809();
        iVar1 = *(param_1 + 0x70);
        if (5 < iVar1) {
            if (iVar1 < 8) {
                iVar2 = fcn.00015cd0();
            }
            else if (iVar1 - 9U < 4) {
                if (*(param_1 + 0x10) == 3) {
                    iVar2 = fcn.00015ef9();
                }
                else {
                    iVar2 = fcn.00015f9d();
                }
            }
        }
        if (iVar2 < 0) {
            return iVar2;
        }
        fcn.000158a3();
    }
    fcn.0001633c();
    fcn.00021941();
    fcn.000217d2();
    return iVar2;
}


/* fcn.00020831 @ 0x20831 */
// decompilation failed

/* fcn.0001fbe0 @ 0x1fbe0 */

//WARNING: Control flow encountered bad instruction data

void __fastcall fcn.0001fbe0(int param_1)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0fc == 0) {
        iVar1 = 0x46140;
    }
    else if (*0x1a0fc == 1) {
        iVar1 = 0x46144;
    }
    else if (*0x1a0fc == 2) {
        iVar1 = 0x46148;
    }
    else if (*0x1a0fc == 3) {
        iVar1 = 0x4614c;
    }
    switch(*(param_1 + 0x14)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffffff;
        return;
    }
}


/* fcn.0001ff9b @ 0x1ff9b */

//WARNING: Control flow encountered bad instruction data

void __fastcall fcn.0001ff9b(int param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    
    iVar3 = 0;
    if (*0x1a0fc == 0) {
        iVar3 = 0x60400;
    }
    else if (*0x1a0fc == 1) {
        iVar3 = 0x61400;
    }
    else if (*0x1a0fc == 2) {
        iVar3 = 0x62400;
    }
    else if (*0x1a0fc == 3) {
        iVar3 = 0x63400;
    }
    switch(*(param_1 + 0x14)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0x87ffffff;
    iVar1 = *(param_1 + 0x10);
    if (iVar1 == 1) {
code_r0x0002006a:
        uVar2 = *(*0x1a0c4 + iVar3) & 0xfaffffff | 0x2000000;
    }
    else if (iVar1 == 2) {
        uVar2 = *(*0x1a0c4 + iVar3) & 0xf8ffffff;
    }
    else {
        if (iVar1 == 3) goto code_r0x0002006a;
        if (iVar1 != 4) goto code_r0x00020080;
        uVar2 = *(*0x1a0c4 + iVar3) & 0xf9ffffff | 0x1000000;
    }
    *(*0x1a0c4 + iVar3) = uVar2;
code_r0x00020080:
    if (param_2 == 1) {
        uVar2 = *(*0x1a0c4 + iVar3) & 0xfffffff1;
    }
    else if (param_2 == 2) {
        uVar2 = *(*0x1a0c4 + iVar3) & 0xfffffff3 | 2;
    }
    else {
        if (param_2 != 4) {
            return;
        }
        uVar2 = *(*0x1a0c4 + iVar3) & 0xfffffff7 | 6;
    }
    *(*0x1a0c4 + iVar3) = uVar2;
    return;
}


/* fcn.00014781 @ 0x14781 */

void __fastcall fcn.00014781(int param_1,int param_2,char param_3)

{
    int iVar1;
    int iVar2;
    
    iVar2 = 0;
    iVar1 = 0;
    if (param_2 == 1) {
        iVar1 = ((param_3 == '\0') - 1 & 0xfffffff9) + 0xe;
    }
    else if (param_2 == 2) {
        iVar1 = ((param_3 != '\0') - 1 & 9) + 3;
    }
    if (param_1 == 0) {
        iVar2 = 0x162028;
    }
    else if (param_1 == 1) {
        iVar2 = 0x6c028;
    }
    *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 0xffffff0f | iVar1 << 4;
    return;
}


/* fcn.0001a448 @ 0x1a448 */

uint fcn.0001a448(void)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    
    iVar2 = fcn.0001a3c0();
    iVar5 = 0;
    uVar3 = 0;
    *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) | 0x80000000;
    cVar1 = fcn.000147e7();
    iVar4 = (-(cVar1 != '\0') & 0xffffff06) + 300;
    while (fcn.00013584(), *(*0x1a0c4 + iVar2) < '\0') {
        if (iVar4 == iVar5) goto code_r0x0001a4b4;
        iVar5 = iVar5 + 1;
    }
    if (iVar4 == iVar5) {
code_r0x0001a4b4:
        uVar3 = 0x80000012;
    }
    return uVar3;
}


/* fcn.00023528 @ 0x23528 */

void __fastcall fcn.00023528(int param_1)

{
    uint uVar1;
    char var_3h;
    int8_t var_2h;
    uchar var_1h;
    
    uVar1 = 0;
    var_3h = '\0';
    if (*(param_1 + 0x10) == 3) {
        uVar1 = *(*(param_1 + 0x8c) + 0x24);
        var_3h = *(*(param_1 + 0x8c) + 0x19c);
    }
    fcn.00023aaa(8,1,uVar1,&var_1h);
    fcn.00023c30(8,1,uVar1,&var_1h);
    if (var_3h != '\0') {
        fcn.00023aaa(8,1,uVar1,&var_1h);
        fcn.00023c30(8,1,uVar1,&var_1h);
    }
    return;
}


/* fcn.00022d80 @ 0x22d80 */

int __fastcall fcn.00022d80(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    ulong uVar4;
    uint uStack_8;
    int iStack_4;
    
    uStack_8 = param_1 & 0xffff;
    iVar3 = *(param_1 + 0x8c);
    uVar1 = *(iVar3 + 0x84);
    iStack_4 = param_1;
    uVar4 = fcn.00020750();
    iStack_4 = uVar4;
    fcn.00023aaa(8,1,uVar4 >> 0x20,&uStack_8 + 2);
    fcn.00023aaa(8,1,0,&uStack_8 + 3);
    if ((uVar1 & 0x1f) < *(iVar3 + 0x84)) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar3 = fcn.00022b74();
        if (-1 < iVar3) {
            fcn.00013584();
            if ((uStack_8._2_1_ < 0x13) || ((uStack_8 & 0x80000000) == 0)) {
                if ((uStack_8._2_1_ < 0x12) || ((uVar1 & 0x40) == 0)) {
                    iVar3 = fcn.00022c0f();
                }
                else {
                    iVar3 = fcn.00022c8a();
                }
            }
            else {
                iVar3 = fcn.00022d05();
            }
            iVar2 = iStack_4;
            if (-1 < iVar3) {
                *(*0x1a0c4 + iStack_4) = *(*0x1a0c4 + iStack_4) & 0xfffffaff | 0x200;
                fcn.00013584();
                *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 0xfffffbff | 0x300;
                return iVar3;
            }
        }
        iVar3 = -0x7ffffff9;
    }
    return iVar3;
}


/* fcn.0001cb1e @ 0x1cb1e */

int __fastcall fcn.0001cb1e(int param_1)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int iStack_8;
    
    iVar3 = *(param_1 + 0x10);
    if ((iVar3 == 1) || (iVar3 == 5)) {
        iVar6 = *(param_1 + 0x8c) + 0xa8;
    }
    else {
        iVar6 = *(param_1 + 0x8c) + 0x44;
    }
    iVar2 = *(param_1 + 0x6c);
    iVar5 = 0;
    iStack_8 = 0;
    if (((iVar3 == 1) || (iVar3 == 3)) || (iVar3 == 5)) {
        if (iVar2 == 0) {
            iVar5 = 0x78000;
            iStack_8 = 0x78004;
        }
        else if (iVar2 == 1) {
            iVar5 = 0x78200;
            iStack_8 = 0x78204;
        }
        else if (iVar2 == 2) {
            iVar5 = 0x78400;
            iStack_8 = 0x78404;
        }
        iVar3 = fcn.0001354b();
        if (iVar3 == 0) {
            return -0x7ffffff7;
        }
        iVar3 = fcn.0001c905();
        if (iVar3 < 0) {
            return iVar3;
        }
        do {
            iVar3 = fcn.0001c730();
            if (-1 < iVar3) {
                if (*(iVar6 + 0x18) == 1) {
                    *(iVar6 + 0x60) = 1;
                }
                else {
                    *(iVar6 + 0x60) = 2;
                }
                fcn.0001c338();
                fcn.0001bfdc();
                fcn.0001c5d1();
                iVar2 = *0x1a0c4;
                if (*(iVar6 + 0x60) == 2) {
                    uVar4 = *(*0x1a0c4 + iVar5);
                    if ((*(param_1 + 0x10) == 1) && (*(*(param_1 + 0x8c) + 0xa4) != '\0')) {
                        uVar4 = uVar4 | 0x80000000;
                    }
                    if ((*(param_1 + 0x10) == 5) && (*0x1a08f != '\0')) {
                        uVar4 = uVar4 | 0x80000000;
                    }
                    if (-1 < uVar4) {
                        uVar4 = uVar4 | 0x40000000;
                    }
                    *(*0x1a0c4 + iVar5) = uVar4;
                }
                uVar4 = *(iVar2 + iStack_8) | 0x80000000;
                if (*(iVar6 + 0x60) != 1) {
                    uVar4 = *(iVar2 + iStack_8) | 0x80008000;
                }
                *(*0x1a0c4 + iStack_8) = uVar4;
                if (*(param_1 + 0x10) != 3) {
                    return iVar3;
                }
                fcn.0001bda7();
                return iVar3;
            }
            puVar1 = iVar6 + 0x20;
            *puVar1 = *puVar1 >> 1;
        } while (*puVar1 != 0);
    }
    return -0x7ffffffe;
}


/* fcn.0001a1b9 @ 0x1a1b9 */

void fcn.0001a1b9(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0e8 == 0) {
        iVar1 = 0x44404;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x44414;
    }
    else if (*0x1a0e8 == 2) {
        iVar1 = 0x44424;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffffffe;
    return;
}


/* fcn.0001fc94 @ 0x1fc94 */

void __fastcall fcn.0001fc94(int param_1,int param_2)

{
    int iVar1;
    int iVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int extraout_EDX;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uStack_18;
    uint32_t uStack_14;
    uint32_t uStack_10;
    
    iVar9 = 0;
    iVar7 = 0;
    iVar6 = 0;
    if (*0x1a0fc == 0) {
        iVar6 = 0x60000;
        iVar9 = 0x70008;
        iVar7 = 0x420c0;
    }
    else if (*0x1a0fc == 1) {
        iVar6 = 0x61000;
        iVar9 = 0x71008;
        iVar7 = 0x420c4;
    }
    else if (*0x1a0fc == 2) {
        iVar6 = 0x62000;
        iVar9 = 0x72008;
        iVar7 = 0x420c8;
    }
    else if (*0x1a0fc == 3) {
        iVar6 = 0x63000;
        iVar9 = 0x73008;
        iVar7 = 0x420d8;
    }
    if ((*(param_1 + 0x10) == 1) && (1 < *(*(param_1 + 0x8c) + 0x218))) {
        cVar3 = fcn.000148da();
        param_1 = extraout_EDX;
        if (cVar3 == '\x01') {
            *(*0x1a0c4 + iVar7) = *(*0x1a0c4 + iVar7) | 0x40000;
        }
    }
    iVar2 = *0x1a0c4;
    uStack_10 = *(param_2 + 8);
    iVar7 = *(param_2 + 4);
    uStack_18 = *(param_2 + 0xc);
    uStack_14 = *(param_2 + 0x10);
    if ((*(param_1 + 0x10) == 1) && (iVar1 = *(param_1 + 0x8c), *(iVar1 + 0xa4) != '\0')) {
        uVar8 = *(iVar1 + 0xa5);
        iVar7 = *(param_2 + 4) / uVar8 + *(iVar1 + 0x1a);
        uStack_10 = *(param_2 + 8) / uVar8;
        uStack_18 = uStack_18 / uVar8;
        uStack_14 = uStack_14 / uVar8;
    }
    uVar8 = iVar7 + -1 + uStack_10;
    uVar5 = iVar7 + -1 + uStack_18;
    uVar4 = uVar8 * 0x10000 | iVar7 - 1U;
    *(*0x1a0c4 + iVar6) = uVar4;
    *(iVar2 + 4 + iVar6) = uVar4;
    *(iVar2 + 8 + iVar6) = (uStack_14 + uVar5) * 0x10000 | uVar5;
    uStack_14 = *(param_2 + 0x1c);
    uStack_10 = *(param_2 + 0x18);
    iVar7 = *(param_2 + 0x14);
    uStack_18 = *(param_2 + 0x20);
    if (*(param_2 + 0x2c) != '\0') {
        uStack_10 = uStack_10 * 2;
        uStack_14 = uStack_14 * 2;
        iVar7 = iVar7 * 2;
        uStack_18 = uStack_18 * 2;
    }
    uStack_14 = iVar7 + -1 + uStack_14;
    uVar4 = (iVar7 + -1 + uStack_10) * 0x10000 | iVar7 - 1U;
    *(iVar2 + 0xc + iVar6) = uVar4;
    *(iVar2 + 0x10 + iVar6) = uVar4;
    *(iVar2 + 0x14 + iVar6) = (uStack_18 + uStack_14) * 0x10000 | uStack_14;
    if (*(param_2 + 0x2c) == '\0') {
        uVar8 = *(iVar2 + iVar9) & 0xff9fffff;
    }
    else {
        *(iVar2 + 0x28 + iVar6) = uVar5 - (uVar8 >> 1);
        uVar8 = *(iVar2 + iVar9) & 0xffbfffff | 0x200000;
    }
    *(iVar2 + iVar9) = uVar8;
    return;
}


/* fcn.0001fe6f @ 0x1fe6f */

void __fastcall fcn.0001fe6f(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if (param_1 == 1) {
        uVar1 = 0x200000;
    }
    else if (param_1 == 2) {
        uVar1 = 0;
    }
    else if (param_1 == 4) {
        uVar1 = 0x100000;
    }
    else if (param_1 == 8) {
        uVar1 = 0x300000;
    }
    if (*0x1a0fc == 0) {
        *(*0x1a0c4 + 0x60400) = *(*0x1a0c4 + 0x60400) & 0xff8fffff | uVar1;
    }
    else {
        if (*0x1a0fc == 1) {
            *(*0x1a0c4 + 0x61400) = *(*0x1a0c4 + 0x61400) & 0xff8fffff | uVar1;
            return;
        }
        if (*0x1a0fc == 2) {
            *(*0x1a0c4 + 0x62400) = *(*0x1a0c4 + 0x62400) & 0xff8fffff | uVar1;
            return;
        }
        if (*0x1a0fc == 3) {
            *(*0x1a0c4 + 0x63400) = *(*0x1a0c4 + 0x63400) & 0xff8fffff | uVar1;
            return;
        }
    }
    return;
}


/* fcn.0001a132 @ 0x1a132 */

void __fastcall fcn.0001a132(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uStack_c;
    
    iVar1 = 0;
    uStack_c = 0;
    if (param_2 == 1) {
        uStack_c = 0x40;
    }
    else if (param_2 != 2) {
        if (param_2 == 4) {
            uStack_c = 0x20;
        }
        else if (param_2 == 8) {
            uStack_c = 0x60;
        }
    }
    if (*0x1a0e8 == 0) {
        iVar1 = 0x70030;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x71030;
    }
    else if (*0x1a0e8 == 2) {
        iVar1 = 0x72030;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffff1f | uStack_c;
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffffff3;
    if (param_2 != 2) {
        *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) | 0x10;
    }
    return;
}


/* fcn.00022f99 @ 0x22f99 */

//WARNING: Removing unreachable block (ram,0x00023049)

void __cdecl fcn.00022f99(int arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    char cVar4;
    int in_ECX;
    int in_EDX;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint uVar12;
    int32_t var_18h;
    int var_14h;
    int32_t var_10h;
    int var_ch;
    int var_8h;
    int32_t var_4h;
    
    uVar7 = arg_8h * 10;
    iVar6 = 0;
    uVar5 = in_EDX * 10;
    iVar3 = *(in_ECX + 0x8c);
    if (*(in_ECX + 0x10) == 1) {
        cVar4 = *(iVar3 + 10);
        arg_8h = 0;
    }
    else {
        cVar4 = *(iVar3 + 5);
        arg_8h = CONCAT13(*(iVar3 + 0x44),arg_8h);
        iVar3 = arg_8h;
    }
    if (cVar4 != '\0') {
        uVar5 = fcn.000268e0(uVar5 * 0x2729,10000,0);
    }
    uVar11 = uVar7;
    if ((*(in_ECX + 0x10) == 1) && (*(iVar3 + 0xa4) == '\x01')) {
        uVar12 = 0;
        iVar2 = fcn.000268c7(0x80000,0,(0U % *(iVar3 + 0xa5) << 0x20 | uVar5) / *(iVar3 + 0xa5),0,uVar7,0);
    }
    else {
        iVar2 = uVar5 * 0x80000;
        uVar12 = 0;
    }
    uVar12 = fcn.000268e0(iVar2,uVar11,uVar12);
    uVar9 = uVar7;
    if (arg_8h._3_1_ != '\0') {
        uVar8 = fcn.000268c7(uVar7,0,0xed775,0);
        uVar9 = fcn.000268e0(uVar8,1000000,0);
    }
    var_ch = uVar9 >> 0x20;
    uVar10 = fcn.000268c7(0x800000,0,arg_10h,0);
    iVar2 = uVar5 * (uVar10 & 0xffffffff);
    iVar1 = arg_ch * (uVar9 & 0xffffffff);
    uVar8 = fcn.000268e0(iVar2,(iVar2 >> 0x20) + uVar5 * (uVar10 >> 0x20),iVar1,(iVar1 >> 0x20) + arg_ch * var_ch);
    iVar3 = *0x1a0c4;
    if (*0x1a0fc == 0) {
        iVar6 = 0x60000;
    }
    else if (*0x1a0fc == 1) {
        iVar6 = 0x61000;
    }
    else if (*0x1a0fc == 2) {
        iVar6 = 0x62000;
    }
    else if (*0x1a0fc == 3) {
        iVar6 = 0x63000;
    }
    *(*0x1a0c4 + 0x30 + iVar6) = uVar8 >> 3 | (uVar8 >> 0x20) << 0x1d | 0x7e000000;
    *(iVar3 + 0x34 + iVar6) = 0x800000;
    *(iVar3 + 0x40 + iVar6) = uVar12;
    *(iVar3 + 0x44 + iVar6) = 0x80000;
    return;
}


/* fcn.0001780a @ 0x1780a */

void __fastcall fcn.0001780a(int param_1,uint param_2,uint param_3)

{
    int iVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    uchar uStack_16;
    uchar uStack_15;
    uint32_t uStack_14;
    uint uStack_10;
    uint uStack_c;
    ulong uStack_8;
    
    uStack_16 = 0;
    if (*(param_1 + 0x10) != 1) {
        return;
    }
    iVar1 = *(param_1 + 0x8c);
    uStack_15 = *(iVar1 + 0xb);
    if (((*0x1a0d8 == 2) && (4 < *(iVar1 + 0x20c))) && (cVar3 = fcn.00017750(param_2,param_3), cVar3 == '\x01'))
    goto code_r0x0001795c;
    uStack_14 = *(param_1 + 0x2c);
    uStack_10 = 1000;
    uStack_c = 0;
    uStack_8 = fcn.000268e0((*(param_1 + 0x34) + *(param_1 + 0x30)) * 1000000000,uStack_14 * 1000);
    iVar6 = uStack_8 >> 0x20;
    uVar4 = uStack_8;
    if (iVar6 == 0) {
        if (uVar4 < 0xdac) goto code_r0x0001795c;
        if (0x1481 < uVar4) goto code_r0x000178eb;
        uVar7 = 0xc;
    }
    else {
code_r0x000178eb:
        uVar7 = 8;
    }
    if (uVar7 <= *(param_1 + 0x44)) {
        iVar5 = fcn.00023aaa(8,1,0,&uStack_16);
        if (iVar5 != -0x7ffffff9) {
            iVar5 = fcn.0001770c();
            iVar2 = *(param_1 + 0x44) * (uStack_8 & 0xffffffff);
            uVar7 = iVar2;
            if (((iVar2 >> 0x20) + *(param_1 + 0x44) * uStack_8._4_4_) - iVar6 != uVar7 < uVar4) {
                return;
            }
            if (iVar5 * 1000 < uVar7 - uVar4) {
                return;
            }
        }
    }
code_r0x0001795c:
    *(iVar1 + 0x218) = 0;
    return;
}


/* fcn.0002034f @ 0x2034f */

void __fastcall fcn.0002034f(int param_1)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    
    cVar1 = fcn.000148da();
    if (cVar1 == '\0') {
        return;
    }
    cVar1 = fcn.00020303();
    if (cVar1 != '\x01') {
        return;
    }
    if ((*(*0x1a0c4 + 0x6fa88) & 0x800000) != 0) goto code_r0x000203bb;
    fcn.00020245();
    if (*(param_1 + 0x10) == 1) {
        uVar2 = *(*0x1a0c4 + 0x6fa88) & 0xffff7fff;
code_r0x000203b0:
        *(*0x1a0c4 + 0x6fa88) = uVar2;
    }
    else if (*(param_1 + 0x10) == 5) {
        uVar2 = *(*0x1a0c4 + 0x6fa88) | 0x8000;
        goto code_r0x000203b0;
    }
    fcn.000201a4();
code_r0x000203bb:
    iVar3 = 0;
    if (*0x1a0fc == 0) {
        iVar3 = 0x60404;
    }
    else if (*0x1a0fc == 1) {
        iVar3 = 0x61404;
    }
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) | 8;
    return;
}


/* fcn.000203e8 @ 0x203e8 */

void __fastcall fcn.000203e8(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    
    if (*0x1a0fc == 0) {
        iVar2 = 0x60400;
    }
    else if (*0x1a0fc == 1) {
        iVar2 = 0x61400;
    }
    else if (*0x1a0fc == 2) {
        iVar2 = 0x62400;
    }
    else if (*0x1a0fc == 3) {
        iVar2 = 0x63400;
    }
    else {
        iVar2 = 0;
    }
    if ((*(param_1 + 0x30) != 0) && (*(param_1 + 0x34) != 0)) {
        if (*(param_1 + 0x30) == 2) {
            uVar1 = *(*0x1a0c4 + iVar2) | 0x10000;
        }
        else {
            uVar1 = *(*0x1a0c4 + iVar2) & 0xfffeffff;
        }
        *(*0x1a0c4 + iVar2) = uVar1;
        if (*(param_1 + 0x34) == 2) {
            uVar1 = *(*0x1a0c4 + iVar2) | 0x20000;
        }
        else {
            uVar1 = *(*0x1a0c4 + iVar2) & 0xfffdffff;
        }
        *(*0x1a0c4 + iVar2) = uVar1;
    }
    return;
}


/* fcn.0001ff1e @ 0x1ff1e */

void __fastcall fcn.0001ff1e(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uStack_c;
    
    uStack_c = 0;
    iVar1 = 0;
    if (*0x1a0fc == 0) {
        iVar1 = 0x60410;
    }
    else if (*0x1a0fc == 1) {
        iVar1 = 0x61410;
    }
    else if (*0x1a0fc == 2) {
        iVar1 = 0x62410;
    }
    else if (*0x1a0fc == 3) {
        iVar1 = 0x63410;
    }
    if (param_2 != 1) {
        if (param_2 == 2) {
            uStack_c = 0x20;
        }
        else if (param_2 == 4) {
            uStack_c = 0x40;
        }
        else if (param_2 == 8) {
            uStack_c = 0x60;
        }
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffff1f | uStack_c;
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) | 1;
    return;
}


/* fcn.000204e5 @ 0x204e5 */

void fcn.000204e5(void)

{
    int iVar1;
    int iStack_8;
    
    iStack_8 = 0;
    iVar1 = 0;
    if (*0x1a0fc == 0) {
        iVar1 = 0x60400;
    }
    else if (*0x1a0fc == 1) {
        iVar1 = 0x61400;
        iStack_8 = 1;
    }
    else if (*0x1a0fc == 2) {
        iVar1 = 0x62400;
        iStack_8 = 2;
    }
    else if (*0x1a0fc == 3) {
        iVar1 = 0x63400;
        iStack_8 = 3;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffff3ff | iStack_8 << 10 | 0x80000100;
    return;
}


/* fcn.0002046c @ 0x2046c */

void fcn.0002046c(void)

{
    if (*0x1a0fc == 0) {
        *(*0x1a0c4 + 0x70008) = *(*0x1a0c4 + 0x70008) | 0x80000000;
    }
    else {
        if (*0x1a0fc == 1) {
            *(*0x1a0c4 + 0x71008) = *(*0x1a0c4 + 0x71008) | 0x80000000;
            return;
        }
        if (*0x1a0fc == 2) {
            *(*0x1a0c4 + 0x72008) = *(*0x1a0c4 + 0x72008) | 0x80000000;
            return;
        }
        if (*0x1a0fc == 3) {
            *(*0x1a0c4 + 0x73008) = *(*0x1a0c4 + 0x73008) | 0x80000000;
            return;
        }
    }
    return;
}


/* fcn.0001a34e @ 0x1a34e */

void fcn.0001a34e(void)

{
    int iVar1;
    
    if (*0x1a0e8 == 0) {
        iVar1 = 0x70028;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x71028;
    }
    else {
        if (*0x1a0e8 != 2) {
            return;
        }
        iVar1 = 0x72028;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) | 0x2000;
    return;
}


/* fcn.00018ffa @ 0x18ffa */

uint __fastcall fcn.00018ffa(int param_1)

{
    int iVar1;
    int iVar2;
    uint unaff_EBX;
    int iVar3;
    uint32_t uVar4;
    uint unaff_EBP;
    uint32_t uVar5;
    uint unaff_ESI;
    int iVar6;
    uint uVar7;
    uint unaff_EDI;
    int iVar8;
    bool bVar9;
    
    iVar2 = *0x1a0c4;
    iVar1 = *(param_1 + 0xac);
    iVar3 = 0;
    iVar6 = 0;
    uVar5 = *(param_1 + 0xa4) << 0xe | *(param_1 + 0xa0);
    uVar4 = *(param_1 + 0xa8);
    iVar8 = 0;
    if (*0x1a0e4 == 0) {
        iVar8 = 0x70240;
        iVar3 = 0x70244;
        iVar6 = 0x70258;
    }
    else if (*0x1a0e4 == 1) {
        iVar8 = 0x71240;
        iVar3 = 0x71244;
        iVar6 = 0x71258;
    }
    else if (*0x1a0e4 == 2) {
        iVar8 = 0x72240;
        iVar3 = 0x72244;
        iVar6 = 0x72258;
    }
    bVar9 = *0x1a0d8 != 1;
    *(*0x1a0c4 + iVar8) = uVar5 | 0x80000000;
    *(iVar2 + iVar3) = uVar5;
    if (bVar9) {
        *(iVar2 + iVar6) = iVar1 << 0xe | uVar4 | 0x80000000;
    }
    if (*0x1a0e4 == 0) {
        *(iVar2 + 0x701cc) = *(iVar2 + 0x701cc) | 0x2000;
    }
    else if (*0x1a0e4 == 1) {
        *(iVar2 + 0x711cc) = *(iVar2 + 0x711cc) | 0x2000;
    }
    else {
        if (*0x1a0e4 != 2) goto code_r0x000190d1;
        *(iVar2 + 0x721cc) = *(iVar2 + 0x721cc) | 0x2000;
    }
    iVar2 = *0x1a0c4;
code_r0x000190d1:
    if (*0x1a0e4 == 0) {
        *(iVar2 + 0x70180) = *(iVar2 + 0x70180) | 0x80000000;
    }
    else if (*0x1a0e4 == 1) {
        *(iVar2 + 0x71180) = *(iVar2 + 0x71180) | 0x80000000;
    }
    else if (*0x1a0e4 == 2) {
        *(iVar2 + 0x72180) = *(iVar2 + 0x72180) | 0x80000000;
    }
    fcn.00018fe8();
    uVar7 = 0;
    if (*0x1a1a4 == '\x01') {
        return 0;
    }
    if (*0x1a0e8 == 0) {
        iVar3 = 0x44408;
    }
    else if (*0x1a0e8 == 1) {
        iVar3 = 0x44418;
    }
    else {
        if (*0x1a0e8 != 2) {
            return 0x80000002;
        }
        iVar3 = 0x44428;
    }
    uVar4 = 0;
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) | 1;
    do {
        fcn.00013584(unaff_EBP,unaff_EBX,unaff_EDI,unaff_ESI);
        if ((*(*0x1a0c4 + iVar3) & 1) != 0) break;
        uVar4 = uVar4 + 1000;
    } while (uVar4 < 500000);
    if (uVar4 == 500000) {
        uVar7 = 0x80000012;
    }
    return uVar7;
}


/* fcn.0001955a @ 0x1955a */

void fcn.0001955a(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0e4 == 0) {
        iVar1 = 0x70180;
    }
    else if (*0x1a0e4 == 1) {
        iVar1 = 0x71180;
    }
    else if (*0x1a0e4 == 2) {
        iVar1 = 0x72180;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0x9fffffff | 0x10000000;
    return;
}


/* fcn.00020ddf @ 0x20ddf */

void __fastcall fcn.00020ddf(int param_1)

{
    char cVar1;
    
    cVar1 = *(param_1 + 0x34);
    if (cVar1 == '\x02') {
        fcn.000264ed(param_1);
    }
    else {
        if (cVar1 == '\x05') {
            fcn.000263a3();
            return;
        }
        if (cVar1 == '\x06') {
            fcn.00026650();
            return;
        }
    }
    return;
}


/* fcn.00026650 @ 0x26650 */

void __fastcall fcn.00026650(int param_1)

{
    int8_t var_4h;
    int8_t var_3h;
    int16_t var_2h;
    
    _var_4h = ((*(param_1 + 0x54) / 1000) * *(param_1 + 0x3c)) / *(param_1 + 0x44) & 0xffff;
    fcn.00023c30(8,4,0,&var_4h);
    return;
}


/* fcn.000263a3 @ 0x263a3 */

void __fastcall fcn.000263a3(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    char cVar3;
    uint32_t uVar4;
    uint uVar5;
    uint8_t uStack_a;
    uint8_t uStack_9;
    char cStack_8;
    char cStack_7;
    uint32_t uStack_4;
    
    uStack_a = 0;
    cStack_8 = *(param_1 + 0x30);
    uVar1 = *(param_1 + 0x2f);
    if (*(param_1 + 0x2d) == '\0') {
        return;
    }
    uVar4 = (((1 << (uVar1 & 0x1f)) + -1) * *(param_1 + 0x3c)) / *(param_1 + 0x44) & 0xffff;
    uStack_9 = uVar1;
    uStack_4 = uVar4;
    iVar2 = fcn.00023aaa(8,1,0,&uStack_a);
    if (iVar2 < 0) {
        return;
    }
    if (cStack_8 == '\x01') {
        uStack_4 = CONCAT22(uStack_4._2_2_,uStack_4 << (0x10 - uVar1 & 0x1f));
        uVar4 = uStack_4;
    }
    uVar1 = uStack_a & 4;
    cVar3 = uVar4 >> 8;
    if ((uVar1 == 0) || (uStack_9 < 9)) {
        if ((uVar1 != 0) && ((8 < uStack_9 && (uVar1 != 0)))) goto code_r0x0002648f;
        if (cStack_8 == '\x01') {
            cStack_8 = cVar3;
        }
        else {
            cStack_8 = uStack_4;
        }
        uVar5 = 1;
    }
    else {
        cStack_7 = uStack_4;
        uVar5 = 2;
        cStack_8 = cVar3;
    }
    iVar2 = fcn.00023c30(8,uVar5,0,&cStack_8);
    if (iVar2 < 0) {
        return;
    }
code_r0x0002648f:
    iVar2 = fcn.00023c30(8,1,0,param_1 + 0x2f);
    if ((-1 < iVar2) && ((*(param_1 + 0x2e) == '\0' || (iVar2 = fcn.00023c30(8,1,0,param_1 + 0x31), -1 < iVar2)))) {
        fcn.00023aaa(8,2,0,&uStack_4);
    }
    return;
}


/* fcn.000264ed @ 0x264ed */

void __fastcall fcn.000264ed(int param_1)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    ulong uVar6;
    
    iVar5 = 0;
    iVar4 = 0;
    if (*(param_1 + 0x32) == '\x02') {
        if (*(param_1 + 0x35) == '\0') {
            iVar5 = 0xc8254;
            iVar4 = 0xc8258;
        }
        else if (*(param_1 + 0x35) == '\x01') {
            iVar5 = 0xc8354;
            iVar4 = 0xc8358;
        }
        uVar2 = (*0x1a0d4 * 1000 & 0xffffffffU) / *(param_1 + 0x38);
        uVar6 = fcn.000268c7(uVar2,0,*(param_1 + 0x3c),0,*(param_1 + 0x44),0);
        uVar3 = fcn.000268e0(uVar6);
        iVar1 = *0x1a0c4;
        *(*0x1a0c4 + iVar5) = uVar2;
        *(iVar1 + iVar4) = uVar3;
    }
    return;
}


/* fcn.0002669b @ 0x2669b */

uint __fastcall fcn.0002669b(int param_1)

{
    uint in_EAX;
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = 0;
    iVar3 = 0;
    if (*(param_1 + 0x32) == '\x02') {
        if (*(param_1 + 0x35) == '\0') {
            iVar3 = 0xc8250;
        }
        else if (*(param_1 + 0x35) == '\x01') {
            iVar3 = 0xc8350;
        }
        if (*(param_1 + 0x33) == '\x04') {
            uVar2 = 0x20000000;
        }
        *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0xdfffffff | uVar2 | 0x80000000;
        uVar1 = 1100000 / *(param_1 + 0x38);
        (**(*0x1a0bc + 4))(*0x1a0c0,*0x1a0bc,uVar1);
        return uVar1;
    }
    return in_EAX;
}


/* fcn.00020e4a @ 0x20e4a */

//WARNING: Variable defined which should be unmapped: var_1h

void __fastcall fcn.00020e4a(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t *puVar3;
    int32_t var_1h;
    
    iVar2 = *(param_1 + 0x8c);
    iVar1 = fcn.00020aa9();
    if ((iVar1 != 0) && (*(iVar2 + 0x34) != '\x04')) {
        if (*(iVar2 + 0x2c) == '\0') {
            puVar3 = *(iVar1 + 8) + *0x1a0c4;
            *puVar3 = *puVar3 | 4;
        }
        else {
            iVar2 = fcn.00023aaa(8,1,0,&var_1h);
            if (-1 < iVar2) {
                fcn.00023c30(8,1,0,&var_1h);
            }
        }
    }
    return;
}


/* fcn.00022773 @ 0x22773 */

int __fastcall fcn.00022773(int param_1)

{
    uint uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint8_t uStack_2b;
    uint8_t uStack_2a;
    uint8_t uStack_29;
    uint8_t uStack_28;
    uint8_t uStack_27;
    uint8_t uStack_26;
    uint8_t uStack_25;
    uint uStack_24;
    uint uStack_20;
    int iStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    int iStack_10;
    uint uStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    uStack_8 = fcn.0001a3c0();
    iStack_4 = fcn.00020750();
    uStack_c = 0;
    uStack_20 = 0;
    uStack_2a = 0;
    uStack_27 = 0;
    uStack_26 = 0;
    uStack_24 = 0;
    iStack_1c = 0;
    if (*(param_1 + 0x10) == 1) {
        iVar4 = *(param_1 + 0x8c);
        uStack_18 = *(iVar4 + 0x8b);
        uStack_14 = uStack_18 & 0x1f;
        cVar2 = *(iVar4 + 0x8d);
    }
    else {
        iStack_10 = *(param_1 + 0x8c);
        uStack_18 = *(iStack_10 + 0x2f);
        uStack_24 = *(iStack_10 + 0x24);
        uStack_14 = *(iStack_10 + 0x195);
        uStack_2a = *(iStack_10 + 0x1d);
        iStack_1c = *(iStack_10 + 0x20);
        cVar2 = *(iStack_10 + 0x194);
        iVar4 = iStack_4;
    }
    uVar1 = uStack_24;
    uStack_28 = fcn.000219bc();
    if (((*(param_1 + 0x10) == 1) && (fcn.00023aaa(8,1,uVar1,&uStack_27), *(param_1 + 0x10) == 1)) &&
       (2 < uStack_27)) {
        iVar6 = *(iVar4 + 0x90 + *(iVar4 + 0x8e) * 2) * 200;
    }
    else if (cVar2 == '\x06') {
        iVar6 = 0x18b820;
    }
    else if (cVar2 == '\n') {
        iVar6 = 2700000;
    }
    else if (cVar2 == '\x14') {
        iVar6 = 5400000;
    }
    else {
        if (cVar2 != '\x1e') {
            return 4;
        }
        iVar6 = 8100000;
    }
    uVar1 = uStack_24;
    if (*(param_1 + 0x10) == 1) {
        fcn.00023aaa(8,1,uStack_24,&uStack_26);
        if (0x11 < uStack_28) {
            fcn.00023aaa(8,1,uVar1,&uStack_2a);
            uStack_2a = uStack_2a & 0x7f;
            if ((0x12 < uStack_28) && ((uStack_26 & 0x80) != 0)) {
                iStack_1c = 3;
            }
        }
        if ((0x11 < uStack_28) && ((uStack_18 & 0x40) != 0)) {
            iStack_1c = 2;
        }
        if (*(param_1 + 0x10) != 1) goto code_r0x0002298a;
        if (2 < uStack_27) {
            fcn.00023aaa(8,1,uVar1,&uStack_29);
            uStack_2b = (*(iVar4 + 0x8e) ^ uStack_29) & 7 ^ uStack_29;
            fcn.00023c30(8,1,uVar1,&uStack_2b);
            goto code_r0x000229aa;
        }
        iVar4 = iVar4 + 0x8d;
    }
    else {
code_r0x0002298a:
        iVar4 = iStack_10 + 0x194;
    }
    fcn.00023c30(8,1,uVar1,iVar4);
code_r0x000229aa:
    uVar5 = uStack_14;
    uVar3 = (*(*0x1a0c4 + uStack_8) >> 1 & 7) + 1;
    if (uVar3 <= uStack_14) {
        uVar3 = uVar3 | uStack_18 & 0x80;
    }
    uStack_2b = uVar3;
    fcn.00023c30(8,1,uVar1,&uStack_2b);
    uVar3 = uStack_2a;
    uStack_8 = uVar3;
    iVar4 = fcn.00021c49(uVar5,uVar3,iVar6,&uStack_20);
    while( true ) {
        if (iVar4 != 3) {
            return iVar4;
        }
        if (iStack_1c == 3) {
            iVar4 = fcn.000224de();
        }
        else if (iStack_1c == 2) {
            iVar4 = fcn.00022228();
        }
        else {
            iVar4 = fcn.00021f72(uVar5,uVar3,iVar6,uStack_20);
        }
        if (iVar4 != 3) {
            return iVar4;
        }
        uVar5 = fcn.00023aaa(8,1,uStack_24,&uStack_29);
        if (uStack_28 < 0x14) {
            uStack_2b = uStack_29 & 0xdc;
        }
        else {
            uStack_2b = uStack_29 & 0xd0;
        }
        uVar3 = fcn.00023c30(8,1,uStack_24,&uStack_2b);
        *(*0x1a0c4 + iStack_4) = *(*0x1a0c4 + iStack_4) & 0xfffffaff | 0x200;
        fcn.00013584();
        if ((((*(param_1 + 0x10) != 3) || (uStack_28 != 0x12)) || (*(iStack_10 + 0x194) != '\x14')) ||
           (uStack_c != '\0')) {
            if (-1 < (uVar5 | uVar3)) {
                return 3;
            }
            return 4;
        }
        uStack_c = CONCAT31(uStack_c._1_3_,1);
        uVar1 = *(*(param_1 + 0x8c) + 0x24);
        fcn.00013584();
        iVar4 = fcn.00023aaa(8,1,uVar1,&uStack_25);
        uVar3 = uStack_8;
        uVar5 = uStack_14;
        if ((uStack_25 & 1) == 0) {
            iVar4 = -0x7ffffff9;
        }
        if (-1 < iVar4) break;
        iVar4 = fcn.00021c49(uStack_14,uStack_8,iVar6,&uStack_20);
    }
    return 3;
}


/* fcn.000236f8 @ 0x236f8 */

uint __fastcall fcn.000236f8(int param_1)

{
    int iVar1;
    uchar uVar2;
    char cVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    
    iVar1 = *(param_1 + 0x10);
    uVar2 = 0;
    uVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    if (iVar1 == 3) {
        iVar5 = *(param_1 + 0x8c);
        cVar3 = *(iVar5 + 0x194);
code_r0x0002372a:
        if (cVar3 == '\x1e') {
            uVar2 = 0x14;
            goto code_r0x0002374a;
        }
        if (cVar3 == '\x14') {
            uVar2 = 10;
            goto code_r0x0002374a;
        }
        if (cVar3 == '\n') {
            uVar2 = 6;
            goto code_r0x0002374a;
        }
    }
    else if (iVar1 == 1) {
        iVar6 = *(param_1 + 0x8c);
        cVar3 = *(iVar6 + 0x8d);
        goto code_r0x0002372a;
    }
    uVar4 = 0x80000007;
code_r0x0002374a:
    if (iVar1 == 3) {
        *(iVar5 + 0x194) = uVar2;
    }
    else if (iVar1 == 1) {
        *(iVar6 + 0x8d) = uVar2;
    }
    return uVar4;
}


/* fcn.0001a978 @ 0x1a978 */

void __fastcall fcn.0001a978(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar1 = *(param_1 + 0x8c);
    *(*0x1a0c4 + 0xc4038) = *(*0x1a0c4 + 0xc4038) & 0xfffe01f2 | 0x1f2;
    iVar2 = *(param_1 + 0x14);
    if (iVar2 == 0) {
        uVar3 = *(*0x1a0c4 + 0xc4030) | 8;
code_r0x0001aa34:
        *(*0x1a0c4 + 0xc4030) = uVar3;
    }
    else {
        if (iVar2 == 1) {
            uVar3 = *(*0x1a0c4 + 0xc4030) | 0x80;
            goto code_r0x0001aa34;
        }
        if (iVar2 == 4) {
            uVar3 = *(*0x1a0c4 + 0xc4034) | 8;
code_r0x0001aa0d:
            *(*0x1a0c4 + 0xc4034) = uVar3;
        }
        else {
            if (iVar2 == 5) {
                uVar3 = *(*0x1a0c4 + 0xc4034) | 0x80;
                goto code_r0x0001aa0d;
            }
            if (iVar2 == 6) {
                uVar3 = *(*0x1a0c4 + 0xc4034) | 0x800;
                goto code_r0x0001aa0d;
            }
            if (iVar2 == 7) {
                uVar3 = *(*0x1a0c4 + 0xc4034) | 0x8000;
                goto code_r0x0001aa0d;
            }
        }
    }
    if (*(param_1 + 0x10) != 3) goto code_r0x0001ab11;
    if (*(iVar1 + 0x16) == '\x01') {
        iVar2 = *(param_1 + 0x14);
        if (iVar2 == 4) {
            uVar3 = *(*0x1a0c4 + 0x44038) | 8;
        }
        else if (iVar2 == 5) {
            uVar3 = *(*0x1a0c4 + 0x44038) | 0x80;
        }
        else if (iVar2 == 6) {
            uVar3 = *(*0x1a0c4 + 0x44038) | 0x800;
        }
        else {
            if (iVar2 != 7) goto code_r0x0001aaaa;
            uVar3 = *(*0x1a0c4 + 0x44038) | 0x8000;
        }
        *(*0x1a0c4 + 0x44038) = uVar3;
    }
code_r0x0001aaaa:
    if (*(iVar1 + 0x17) == '\x01') {
        iVar2 = *(param_1 + 0x14);
        if (iVar2 == 4) {
            uVar3 = *(*0x1a0c4 + 0x44030) | 8;
        }
        else if (iVar2 == 5) {
            uVar3 = *(*0x1a0c4 + 0x44030) | 0x80;
        }
        else if (iVar2 == 6) {
            uVar3 = *(*0x1a0c4 + 0x44030) | 0x800;
        }
        else {
            if (iVar2 != 7) goto code_r0x0001ab11;
            uVar3 = *(*0x1a0c4 + 0x44030) | 0x8000;
        }
        *(*0x1a0c4 + 0x44030) = uVar3;
    }
code_r0x0001ab11:
    if (*(iVar1 + 9) == '\0') {
        return;
    }
    iVar2 = *(param_1 + 0x14);
    if (iVar2 == 0) {
        *(*0x1a0c4 + 0xc4004) = *(*0x1a0c4 + 0xc4004) & 0xfffeffff;
        uVar3 = *(*0x1a0c4 + 0xc400c) | 0x10000;
    }
    else {
        if (iVar2 != 1) {
            if (iVar2 == 4) {
                *(*0x1a0c4 + 0xc4004) = *(*0x1a0c4 + 0xc4004) & 0xfeffffff;
                *(*0x1a0c4 + 0xc400c) = *(*0x1a0c4 + 0xc400c) | 0x1000000;
                if (*(param_1 + 0x10) != 3) {
                    return;
                }
                if (*(iVar1 + 0x16) == '\x01') {
                    *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffeffff;
                    *(*0x1a0c4 + 0x4447c) = *(*0x1a0c4 + 0x4447c) | 0x10000;
                }
                if (*(iVar1 + 0x17) != '\x01') {
                    return;
                }
                *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffffffe;
                uVar3 = *(*0x1a0c4 + 0x4447c) | 1;
            }
            else if (iVar2 == 5) {
                *(*0x1a0c4 + 0xc4004) = *(*0x1a0c4 + 0xc4004) & 0xfdffffff;
                *(*0x1a0c4 + 0xc400c) = *(*0x1a0c4 + 0xc400c) | 0x2000000;
                if (*(param_1 + 0x10) != 3) {
                    return;
                }
                if (*(iVar1 + 0x16) == '\x01') {
                    *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffdffff;
                    *(*0x1a0c4 + 0x4447c) = *(*0x1a0c4 + 0x4447c) | 0x20000;
                }
                if (*(iVar1 + 0x17) != '\x01') {
                    return;
                }
                *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffffffd;
                uVar3 = *(*0x1a0c4 + 0x4447c) | 2;
            }
            else if (iVar2 == 6) {
                *(*0x1a0c4 + 0xc4004) = *(*0x1a0c4 + 0xc4004) & 0xfbffffff;
                *(*0x1a0c4 + 0xc400c) = *(*0x1a0c4 + 0xc400c) | 0x4000000;
                if (*(param_1 + 0x10) != 3) {
                    return;
                }
                if (*(iVar1 + 0x16) == '\x01') {
                    *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffbffff;
                    *(*0x1a0c4 + 0x4447c) = *(*0x1a0c4 + 0x4447c) | 0x40000;
                }
                if (*(iVar1 + 0x17) != '\x01') {
                    return;
                }
                *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffffffb;
                uVar3 = *(*0x1a0c4 + 0x4447c) | 4;
            }
            else {
                if (iVar2 != 7) {
                    return;
                }
                *(*0x1a0c4 + 0xc4004) = *(*0x1a0c4 + 0xc4004) & 0xf7ffffff;
                *(*0x1a0c4 + 0xc400c) = *(*0x1a0c4 + 0xc400c) | 0x8000000;
                if (*(param_1 + 0x10) != 3) {
                    return;
                }
                if (*(iVar1 + 0x16) == '\x01') {
                    *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfff7ffff;
                    *(*0x1a0c4 + 0x4447c) = *(*0x1a0c4 + 0x4447c) | 0x80000;
                }
                if (*(iVar1 + 0x17) != '\x01') {
                    return;
                }
                *(*0x1a0c4 + 0x44474) = *(*0x1a0c4 + 0x44474) & 0xfffffff7;
                uVar3 = *(*0x1a0c4 + 0x4447c) | 8;
            }
            *(*0x1a0c4 + 0x4447c) = uVar3;
            return;
        }
        *(*0x1a0c4 + 0xc4004) = *(*0x1a0c4 + 0xc4004) & 0xfffdffff;
        uVar3 = *(*0x1a0c4 + 0xc400c) | 0x20000;
    }
    *(*0x1a0c4 + 0xc400c) = uVar3;
    return;
}


/* fcn.00016f56 @ 0x16f56 */

int __fastcall fcn.00016f56(uint32_t param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint uStack_4;
    
    uStack_4 = param_1 & 0xffffff;
    iVar2 = *(param_1 + 0x8c);
    iVar1 = fcn.00020aa9();
    if (iVar1 == 0) {
        iVar2 = -0x7ffffff2;
    }
    else {
        if ((*(*(iVar1 + 8) + *0x1a0c4) & 8) == 0) {
            puVar4 = *(iVar1 + 8) + *0x1a0c4;
            *puVar4 = *puVar4 | 8;
        }
        else {
            fcn.00013584();
            iVar1 = fcn.0001ae22();
            if ((iVar1 == 0) && (iVar1 = fcn.00023aaa(8,1,0,&uStack_4 + 3), iVar1 == 0)) {
                return 0;
            }
        }
        fcn.00013584();
        if (*(iVar2 + 0x60) == '\0') {
            fcn.00013584();
            iVar2 = fcn.0001ae22();
            if ((-1 < iVar2) && (iVar2 = fcn.00023aaa(8,1,0,&uStack_4 + 3), -1 < iVar2)) {
                return iVar2;
            }
        }
        else {
            uVar3 = *(iVar2 + 100) / 100;
            do {
                iVar2 = fcn.0001ae22();
                if (-1 < iVar2) {
                    *(*0x1a0c4 + 0xc4030) = *(*0x1a0c4 + 0xc4030);
                    iVar2 = fcn.00023aaa(8,1,0,&uStack_4 + 3);
                    if (-1 < iVar2) {
                        return iVar2;
                    }
                }
                fcn.00013584();
                uVar3 = uVar3 - 1;
            } while (uVar3 != 0);
        }
        iVar2 = -0x7ffffff9;
    }
    return iVar2;
}


/* fcn.00024495 @ 0x24495 */

void __fastcall fcn.00024495(int param_1,uint *param_2,uint *param_3)

{
    int iVar1;
    int iStack_8;
    int iStack_4;
    
    *param_3 = 0;
    *param_2 = 0;
    *(param_1 + 0x28) = 0;
    iStack_8 = param_1;
    iStack_4 = param_1;
    iVar1 = fcn.00024128(0,&iStack_8);
    if (-1 < iVar1) {
        iVar1 = fcn.0002401e();
        if (iVar1 == 0) {
            *(param_1 + 0x28) = 1;
            iVar1 = fcn.000241ba(param_3);
        }
        else {
            iVar1 = fcn.00024001();
            if (iVar1 != 0) {
                return;
            }
            *(param_1 + 0x28) = 3;
            iVar1 = fcn.000242fe(param_3);
        }
        if (iVar1 < 0) {
            *(param_1 + 0x28) = 0;
        }
    }
    return;
}


/* fcn.000183dd @ 0x183dd */

uint __fastcall fcn.000183dd(uint32_t param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if ((param_1 & *(*0x1a0c4 + 0xc5108)) == 0) {
            return 0;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 150000);
    return 0x80000007;
}


/* fcn.0001842e @ 0x1842e */

uint fcn.0001842e(void)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = *0x1a0c4;
    *(*0x1a0c4 + 0xc5104) = 0x80000000;
    *(iVar1 + 0xc5104) = 0;
    uVar2 = 0;
    do {
        if ((*(*0x1a0c4 + 0xc5108) & 0x200) == 0) {
            return 0;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 150000);
    return 0x80000007;
}


/* fcn.00018451 @ 0x18451 */

int __fastcall fcn.00018451(uint param_1,uint8_t param_2)

{
    int iVar1;
    int iVar2;
    
    iVar2 = fcn.000183dd();
    iVar1 = *0x1a0c4;
    if ((-1 < iVar2) && (*(*0x1a0c4 + 0xc5100) = param_2, (*(iVar1 + 0xc5108) & 0x400) != 0)) {
        iVar2 = fcn.0001842e();
    }
    return iVar2;
}


/* fcn.0001838e @ 0x1838e */

void __fastcall fcn.0001838e(uint32_t param_1,uint8_t param_2,int param_3,int param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    
    uVar1 = param_4 << 0x10 | param_1 & 0xff;
    *param_5 = uVar1;
    if ((param_2 & 4) != 0) {
        *param_5 = uVar1 | 0x8000000;
    }
    if ((param_2 & 1) != 0) {
        *param_5 = *param_5 | 0x2000000;
    }
    if ((param_2 & 0x10) != 0) {
        *param_5 = *param_5 | 0x4000000;
    }
    *param_5 = *param_5 | 0x60000000;
    if ((param_2 & 0x30) == 0x10) {
        *param_5 = *param_5 | param_3 << 8;
    }
    return;
}


/* fcn.00018405 @ 0x18405 */

uint fcn.00018405(void)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    do {
        if ((*(*0x1a0c4 + 0xc5108) & 0x800) != 0) {
            return 0;
        }
        uVar1 = uVar1 + 1;
    } while (uVar1 < 150000);
    return 0x80000007;
}


/* fcn.0001848d @ 0x1848d */

uchar fcn.0001848d(uint param_1,uint32_t param_2,int param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar uVar6;
    uint32_t uStack_4;
    
    uVar5 = 0;
    iVar2 = fcn.00018451();
    if (iVar2 < 0) {
        uVar6 = 1;
    }
    else {
        fcn.0001838e(param_1,param_2,&uStack_4);
        uVar6 = 1;
        uStack_4 = uStack_4 | 1;
        *(*0x1a0c4 + 0xc5104) = uStack_4;
        if (param_2 != 0) {
            do {
                iVar2 = fcn.00018405();
                if ((iVar2 < 0) && ((*(*0x1a0c4 + 0xc5108) & 0x400) == 0)) {
                    uVar6 = 2;
                    goto code_r0x00018540;
                }
                if ((*(*0x1a0c4 + 0xc5108) & 0x2400) != 0) {
                    fcn.0001842e();
                    goto code_r0x00018540;
                }
                uVar4 = 0;
                uVar1 = *(*0x1a0c4 + 0xc510c);
                do {
                    if (param_2 <= uVar5) goto code_r0x0001852d;
                    uVar3 = uVar4;
                    uVar4 = uVar4 + 8;
                    *(uVar5 + param_3) = uVar1 >> (uVar3 & 0x1f);
                    uVar5 = uVar5 + 1;
                } while (uVar4 < 0x20);
            } while (uVar5 < param_2);
        }
code_r0x0001852d:
        iVar2 = fcn.000183dd();
        uVar6 = iVar2 < 0;
    }
code_r0x00018540:
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + 0xc5100) = 0;
    *(iVar2 + 0xc5108) = 0x8000;
    return uVar6;
}


/* fcn.0001856c @ 0x1856c */

uchar __thiscall fcn.0001856c(uint16_t param_1,uint param_2,int param_3)

{
    int iVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uchar uVar7;
    uint uStack_4;
    
    iVar6 = 0;
    if (param_1 < 0x80) {
        param_1 = 0;
    }
    else {
        param_1 = param_1 & 0xff;
    }
    iVar2 = fcn.00018451();
    iVar1 = *0x1a0c4;
    if (-1 < iVar2) {
        uVar5 = 0;
        uVar4 = 0;
        do {
            if (0xf < uVar4) break;
            uVar3 = uVar4;
            uVar4 = uVar4 + 8;
            uVar5 = uVar5 | *(iVar6 + param_3) << (uVar3 & 0x1f);
            iVar6 = iVar6 + 1;
        } while (uVar4 < 0x20);
        uVar7 = 2;
        *(*0x1a0c4 + 0xc510c) = uVar5;
        fcn.0001838e(param_1,2,&uStack_4);
        *(iVar1 + 0xc5104) = uStack_4;
        iVar6 = fcn.00018405();
        if ((iVar6 < 0) && ((*(*0x1a0c4 + 0xc5108) & 0x400) == 0)) goto code_r0x00018661;
        if ((*(*0x1a0c4 + 0xc5108) & 0x2400) == 0) {
            iVar6 = fcn.000183dd();
            uVar7 = iVar6 < 0;
            goto code_r0x00018661;
        }
        fcn.0001842e();
    }
    uVar7 = 1;
code_r0x00018661:
    iVar6 = *0x1a0c4;
    *(*0x1a0c4 + 0xc5100) = 0;
    *(iVar6 + 0xc5108) = 0x8000;
    return uVar7;
}


/* fcn.00024a64 @ 0x24a64 */

int fcn.00024a64(uchar param_1,int param_2,int param_3)

{
    int iVar1;
    uchar *puVar2;
    uint extraout_ECX;
    
    if ((param_2 == 0) || (param_3 == 0)) {
        iVar1 = -0x7ffffffe;
    }
    else {
        puVar2 = fcn.0001354b();
        if (puVar2 == NULL) {
            iVar1 = -0x7ffffff7;
        }
        else {
            *puVar2 = param_1;
            fcn.00013385(param_2);
            iVar1 = fcn.000248ee();
            if (-1 < iVar1) {
                iVar1 = fcn.000249cf(param_2 + 1,puVar2,extraout_ECX);
            }
        }
    }
    return iVar1;
}


/* fcn.00024b60 @ 0x24b60 */
// decompilation failed

/* fcn.0001f022 @ 0x1f022 */

uint32_t __fastcall fcn.0001f022(uint8_t *param_1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uchar uVar4;
    
    uVar2 = *(param_1 + 4);
    if (uVar2 == 0) {
code_r0x0001f02d:
        uVar3 = 0x80000002;
    }
    else {
        uVar1 = *param_1;
        if (uVar1 < 0x16) {
            if (uVar1 == 0x15) goto code_r0x0001f083;
            if (uVar1 != 5) {
                if (uVar1 == 7) goto code_r0x0001f083;
                if (uVar1 == 10) goto code_r0x0001f077;
                if (uVar1 != 0x13) goto code_r0x0001f02d;
            }
            if (2 < uVar2) goto code_r0x0001f02d;
            uVar4 = 0;
        }
        else {
            if (uVar1 != 0x23) {
                if (uVar1 != 0x29) {
                    if (uVar1 == 0x37) goto code_r0x0001f083;
                    if (uVar1 != 0x39) goto code_r0x0001f02d;
                }
code_r0x0001f077:
                uVar3 = fcn.0001eec8();
                goto code_r0x0001f09d;
            }
code_r0x0001f083:
            if (2 < uVar2) goto code_r0x0001f02d;
            uVar4 = *(*(param_1 + 0xc) + 1);
        }
        uVar3 = fcn.0001edfa(uVar4);
    }
code_r0x0001f09d:
    return -(*0x1a1a4 != '\x01') & uVar3;
}


/* fcn.0001a229 @ 0x1a229 */

uint fcn.0001a229(void)

{
    uint32_t uVar1;
    uint uVar2;
    int iVar3;
    
    uVar2 = 0;
    if (*0x1a1a4 == '\x01') {
        return 0;
    }
    if (*0x1a0e8 == 0) {
        iVar3 = 0x44408;
    }
    else if (*0x1a0e8 == 1) {
        iVar3 = 0x44418;
    }
    else {
        if (*0x1a0e8 != 2) {
            return 0x80000002;
        }
        iVar3 = 0x44428;
    }
    uVar1 = 0;
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) | 1;
    do {
        fcn.00013584();
        if ((*(*0x1a0c4 + iVar3) & 1) != 0) break;
        uVar1 = uVar1 + 1000;
    } while (uVar1 < 500000);
    if (uVar1 == 500000) {
        uVar2 = 0x80000012;
    }
    return uVar2;
}


/* fcn.000194d8 @ 0x194d8 */

uint __fastcall fcn.000194d8(int param_1)

{
    int iVar1;
    uint uVar2;
    
    iVar1 = *(param_1 + 0x74);
    uVar2 = 0;
    if (iVar1 == 0) {
        uVar2 = 0x701a4;
    }
    else if (iVar1 == 1) {
        uVar2 = 0x711a4;
    }
    else if (iVar1 == 2) {
        uVar2 = 0x721a4;
    }
    return uVar2;
}


/* fcn.00018684 @ 0x18684 */

uint __cdecl fcn.00018684(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    int iVar1;
    uint8_t in_CL;
    uint uVar2;
    int8_t var_3h;
    int8_t var_2h;
    int8_t var_1h;
    
    uVar2 = 0;
    if (in_CL < 0x400) {
        if ((arg_ch == 0) || (0x1fc < arg_ch)) {
            uVar2 = 0x80000002;
        }
        else if (arg_10h == 0) {
            uVar2 = 0x80000002;
        }
        else {
            iVar1 = fcn.0001848d(arg_8h,arg_ch,arg_10h);
            if (iVar1 != 0) {
                var_2h = 0;
                do {
                    if ((iVar1 == 2) || (2 < var_2h)) break;
                    uVar2 = fcn.000268b6();
                    var_2h = var_2h + 1;
                    iVar1 = fcn.0001848d(arg_8h,arg_ch,uVar2);
                } while (iVar1 != 0);
                uVar2 = 0;
                if (iVar1 != 0) {
                    uVar2 = 0x80000007;
                }
            }
        }
    }
    else {
        uVar2 = 0x80000002;
    }
    return uVar2;
}


/* fcn.000134f4 @ 0x134f4 */

int __fastcall fcn.000134f4(char *param_1,char *param_2,uint32_t param_3)

{
    char cVar1;
    
    cVar1 = *param_1;
    if (cVar1 != '\0') {
        do {
            if (((*param_2 == '\0') || (cVar1 != *param_2)) || (param_3 < 2)) break;
            param_1 = param_1 + 1;
            param_2 = param_2 + 1;
            param_3 = param_3 - 1;
            cVar1 = *param_1;
        } while (cVar1 != '\0');
    }
    return *param_1 - *param_2;
}


/* fcn.00018724 @ 0x18724 */

uint32_t __cdecl fcn.00018724(int8_t arg_8h,uint noname_1,uint32_t arg_10h)

{
    int8_t *piVar1;
    int8_t *piVar2;
    int iVar3;
    int8_t *piVar4;
    uint32_t uVar5;
    uint uVar6;
    int8_t var_1h;
    
    uVar5 = 0;
    if (arg_10h == 0) {
        uVar5 = 0x80000002;
    }
    else {
        piVar2 = fcn.0001354b();
        if (piVar2 == NULL) {
            uVar5 = 0x80000009;
        }
        else {
            uVar6 = 1;
            *piVar2 = arg_8h;
            fcn.00013385(1);
            piVar4 = piVar2;
            iVar3 = fcn.0001856c(uVar6,piVar2);
            if (iVar3 != 0) {
                do {
                    if ((iVar3 == 2) || (2 < uVar5)) break;
                    uVar5 = uVar5 + 1;
                    piVar1 = piVar2;
                    iVar3 = fcn.0001856c(piVar4);
                    piVar4 = piVar1;
                } while (iVar3 != 0);
                uVar5 = 0;
                if (iVar3 != 0) {
                    uVar5 = 0x80000007;
                }
            }
        }
    }
    return uVar5;
}


/* fcn.000197d4 @ 0x197d4 */

uchar __fastcall fcn.000197d4(int param_1)

{
    uchar uVar1;
    
    uVar1 = 0;
    if ((*(*(param_1 + 0x8c) + 0x34) == '\x01') && (*(*(param_1 + 0x8c) + 0x38) == 0xc45dd8)) {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.000197ac @ 0x197ac */

uint32_t __fastcall fcn.000197ac(int param_1)

{
    int iVar1;
    
    iVar1 = 0x18;
    if (*0x1a1a4 == '\0') {
        iVar1 = fcn.00014679();
    }
    return (*(param_1 + 0x2c) * iVar1) / 0x18;
}


/* fcn.000147e7 @ 0x147e7 */

uchar __fastcall fcn.000147e7(int param_1)

{
    if ((param_1 != 0) && (param_1 != 1)) {
        return 0;
    }
    return 1;
}


/* fcn.000196d1 @ 0x196d1 */

uint32_t __fastcall fcn.000196d1(int param_1)

{
    uint32_t uVar1;
    uint uStack_4;
    
    uVar1 = *(param_1 + 0x20);
    if (*(uVar1 + 0x7e) != '\0') {
        uStack_4 = param_1;
        uVar1 = fcn.00018684(0x80,1,&uStack_4 + 2);
        if (uStack_4._2_1_ == '\x02') {
            uVar1 = fcn.00018684(0x81,1,&uStack_4 + 2);
            if (uStack_4._2_1_ == '\x03') {
                uVar1 = fcn.00018684(0x82,1,&uStack_4 + 3);
                return uVar1;
            }
        }
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000245a4 @ 0x245a4 */

void __fastcall fcn.000245a4(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    char cVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int iVar8;
    int iVar7;
    uint32_t uVar9;
    
    iVar2 = *(param_1 + 0x20);
    iVar3 = *(param_1 + 0x8c);
    *(iVar3 + 0x3d) = *(iVar3 + 0x3d) & 0xf8;
    *(iVar3 + 0x34) = 0;
    *(iVar3 + 0x38) = 0;
    *(iVar3 + 0x3c) = 0;
    cVar4 = *(iVar2 + 0x7e);
    iVar7 = 0;
    if (cVar4 != '\0') {
        do {
            iVar8 = iVar7;
            iVar7 = iVar8 + 0x80;
            if ((*(iVar2 + iVar7) == '\x02') && (*(iVar2 + 1 + iVar7) == '\x03')) break;
            cVar4 = cVar4 + -1;
        } while (cVar4 != '\0');
        if (cVar4 != '\0') {
            uVar5 = *(iVar2 + 2 + iVar7);
            for (uVar9 = iVar8 + 0x84; uVar9 < uVar5 + iVar7; uVar9 = uVar9 + 1 + (uVar1 & 0x1f)) {
                uVar1 = *(uVar9 + iVar2);
                if ((uVar1 & 0xe0) == 0x60) {
                    uVar6 = CONCAT21(CONCAT11(*(uVar9 + 3 + iVar2),*(uVar9 + 2 + iVar2)),*(uVar9 + 1 + iVar2));
                    *(iVar3 + 0x38) = uVar6;
                    if (uVar6 == 0xc45dd8) {
                        *(iVar3 + 0x34) = *(uVar9 + 4 + iVar2);
                        *(iVar3 + 0x3c) = *(uVar9 + 5 + iVar2);
                        uVar5 = (*(uVar9 + 6 + iVar2) >> 6 ^ *(iVar3 + 0x3d)) & 2 ^ *(iVar3 + 0x3d);
                        *(iVar3 + 0x3d) = uVar5;
                        uVar5 = (*(uVar9 + 6 + iVar2) >> 4 ^ uVar5) & 4 ^ uVar5;
                        *(iVar3 + 0x3d) = uVar5;
                        *(iVar3 + 0x3d) = (*(uVar9 + 6 + iVar2) >> 3 ^ uVar5) & 1 ^ uVar5;
                        uVar5 = (*(uVar9 + 7 + iVar2) & 0xf0) != 0 | *(iVar3 + 0x3e) & 0xfe;
                        *(iVar3 + 0x3e) = uVar5;
                        *(iVar3 + 0x3e) = (*(uVar9 + 7 + iVar2) >> 3 ^ uVar5) & 0x1e ^ uVar5;
                        return;
                    }
                    *(iVar3 + 0x38) = 0;
                }
            }
        }
    }
    return;
}


/* fcn.0001978f @ 0x1978f */

uint __fastcall fcn.0001978f(int param_1,int8_t param_2,uint param_3,uint32_t param_4)

{
    uint uVar1;
    
    if ((*(param_1 + 0x3d) & 2) != 0) {
        uVar1 = fcn.00018724(param_2,param_1,param_4);
        return uVar1;
    }
    return 0;
}


/* fcn.0001a4c0 @ 0x1a4c0 */

uint32_t __fastcall fcn.0001a4c0(int param_1)

{
    int iVar1;
    int8_t iVar2;
    int8_t iVar3;
    int iVar4;
    
    iVar4 = 0;
    iVar3 = 0;
    if (*0x1a1a4 != '\0') {
        return 0xf;
    }
    if (*(param_1 + 0x10) != 3) {
        if ((*(param_1 + 0x10) != 2) && (*(param_1 + 0x10) != 4)) {
            return 0;
        }
        return 0xf;
    }
    if (*(*(param_1 + 0x8c) + 0x24) != 1) {
        return 0xf;
    }
    iVar1 = *(param_1 + 0x14);
    iVar2 = 0;
    if (iVar1 != 4) {
        if (iVar1 != 5) {
            if (iVar1 != 6) {
                if (iVar1 != 7) goto code_r0x0001a50e;
                iVar2 = 8;
            }
            iVar3 = iVar2;
            iVar4 = 0x16e8a0;
            goto code_r0x0001a50e;
        }
        iVar2 = 8;
    }
    iVar3 = iVar2;
    iVar4 = 0x1638a0;
code_r0x0001a50e:
    return *(*0x1a0c4 + iVar4) >> iVar3 & 0xf;
}


/* fcn.0001a569 @ 0x1a569 */

void __fastcall fcn.0001a569(int param_1,char param_2)

{
    int iVar1;
    int8_t iVar2;
    char cVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    
    iVar2 = 0;
    uVar5 = 0;
    iVar4 = 0;
    cVar3 = '\0';
    iVar6 = 0;
    if (*(*(param_1 + 0x8c) + 0x24) == 3) {
        cVar3 = *(*(param_1 + 0x8c) + 0x14);
    }
    iVar1 = *(param_1 + 0x14);
    if (iVar1 == 4) {
        iVar6 = 0x1638c0;
code_r0x0001a5c3:
        uVar5 = 0xf;
    }
    else {
        if (iVar1 == 5) {
            iVar6 = 0x1638c0;
        }
        else {
            if (iVar1 == 6) {
                iVar6 = 0x16e8c0;
                goto code_r0x0001a5c3;
            }
            if (iVar1 != 7) goto code_r0x0001a5c6;
            iVar6 = 0x16e8c0;
        }
        uVar5 = 0xf0;
        iVar2 = 4;
    }
code_r0x0001a5c6:
    if (param_2 == '\x01') {
        iVar4 = ((cVar3 == '\0') - 1 & 7) + 1;
    }
    else if (param_2 == '\x02') {
        iVar4 = ((cVar3 != '\0') - 1 & 0xfffffff7) + 0xc;
    }
    else if (param_2 == '\x04') {
        iVar4 = 0xf;
    }
    *(*0x1a0c4 + iVar6) = ~uVar5 & *(*0x1a0c4 + iVar6) | iVar4 << iVar2;
    return;
}


/* fcn.0001a613 @ 0x1a613 */

void __fastcall fcn.0001a613(int param_1,char param_2)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint32_t uStack_14;
    
    iVar3 = fcn.00021633();
    if (param_2 == '\x01') {
        uStack_14 = 0x40;
        if (*(*(param_1 + 0x8c) + 0x24) != 1) {
            uStack_14 = 0;
        }
    }
    else {
        uStack_14 = 0x80;
    }
    fcn.00021652();
    fcn.00021684();
    uVar4 = fcn.00021652();
    iVar1 = *(iVar3 + 0x54);
    iVar2 = *(iVar3 + 0x4c);
    puVar5 = *(iVar3 + 0x60) + *0x1a0c4;
    *puVar5 = *puVar5 & ~*(iVar3 + 0x58) | *(iVar3 + 0x50) << (*(iVar3 + 0x5c) & 0x1f);
    *(*0x1a0c4 + iVar1 + iVar2) = uVar4 & 0xffffff3f | uStack_14;
    return;
}


/* fcn.000197ee @ 0x197ee */

uchar __fastcall fcn.000197ee(int param_1)

{
    char cVar1;
    uint32_t uVar2;
    uchar uVar3;
    
    uVar3 = 0;
    cVar1 = fcn.000197d4();
    if (cVar1 != '\0') {
        uVar2 = fcn.000197ac();
        if ((340000 < uVar2) || ((*(*(param_1 + 0x8c) + 0x3d) & 1) != 0)) {
            uVar3 = 1;
        }
    }
    return uVar3;
}


/* fcn.000200e7 @ 0x200e7 */

void fcn.000200e7(void)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = fcn.000197ac();
    iVar2 = 0;
    if (*0x1a0fc == 0) {
        iVar2 = 0x60400;
    }
    else if (*0x1a0fc == 1) {
        iVar2 = 0x61400;
    }
    else if (*0x1a0fc == 2) {
        iVar2 = 0x62400;
    }
    else if (*0x1a0fc == 3) {
        iVar2 = 0x63400;
    }
    *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) | 1;
    if (uVar1 < 0x53021) {
        uVar1 = *(*0x1a0c4 + iVar2) & 0xffffffef;
    }
    else {
        uVar1 = *(*0x1a0c4 + iVar2) | 0x10;
    }
    *(*0x1a0c4 + iVar2) = uVar1;
    return;
}


/* fcn.00024ea5 @ 0x24ea5 */

void __fastcall
fcn.00024ea5(int param_1,uint8_t param_2,uint8_t param_3,uint8_t param_4,uint8_t param_5,uint32_t param_6)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    char cVar6;
    uint unaff_ESI;
    uint unaff_EDI;
    int iVar7;
    
    cVar6 = '\0';
    uVar3 = param_2 << 0x10;
    iVar7 = param_1;
    fcn.00021633();
    if (*(param_1 + 0x10) == 3) {
        if (*(*(param_1 + 0x8c) + 0xc) != '\0') {
            param_4 = *(*(param_1 + 0x8c) + 0xe);
            param_3 = param_4 >> 3 & 7;
            param_4 = param_4 & 7;
        }
        iVar4 = (param_4 + param_3 * 4) * 3;
        if (param_6 < 0x2932e1) {
            cVar6 = *(iVar4 + 0x19a68);
        }
        else {
            cVar6 = *(iVar4 + 0x197a8);
        }
        uVar3 = uVar3 & 0xffff0000;
    }
    if ((*(param_1 + 0x10) == 2) || (*(param_1 + 0x10) == 4)) {
        cVar6 = *(param_5 * 3 + 0x19938);
        uVar3 = uVar3 & 0xffff0000;
    }
    if (cVar6 == '\x0f') {
        return;
    }
    uVar2 = uVar3 >> 0x10;
    if ((uVar3 & 0x80000) != 0) {
        fcn.00021652();
        fcn.00021684();
        uVar2 = uVar3 >> 0x10;
    }
    if ((uVar2 & 4) != 0) {
        fcn.00021652();
        fcn.00021684();
        uVar2 = uVar3 >> 0x10;
    }
    if ((uVar2 & 0xc) != 0) {
        fcn.00021652();
        fcn.00021684();
        fcn.00021684();
        uVar2 = uVar3 >> 0x10;
    }
    uVar3 = CONCAT13(uVar2,uVar3) & 0x2ffffff;
    if ((uVar2 & 2) != 0) {
        fcn.00021652();
        fcn.00021684();
        uVar2 = uVar3 >> 0x10;
    }
    iVar4 = (CONCAT11(uVar3 >> 0x18,uVar2) & 0xff01) << 0x10;
    cVar6 = '\0';
    if ((uVar2 & 1) != 0) {
        fcn.00021652();
        fcn.00021684();
        cVar6 = iVar4 >> 0x10;
    }
    if ((iVar4 >> 0x18 != '\0') || (cVar6 != '\0')) {
        fcn.00021652();
        fcn.00021684();
        fcn.00021684();
    }
    if ((*0x1a0d8 == 2) && (*0x1a0de != '\f')) {
        if (((*(iVar7 + 0x10) == 3) && (param_6 == 0x654)) || ((*(iVar7 + 0x10) == 2 && (param_6 == 0x5aa320)))) {
            fcn.00021652();
            fcn.00021684();
            fcn.00021652();
        }
        else {
            fcn.00021652();
            fcn.00021684();
            fcn.00021652();
        }
        fcn.00021684();
    }
    iVar4 = fcn.00021633(unaff_EDI,unaff_ESI);
    if ((*(iVar7 + 0x10) == 2) || (*(iVar7 + 0x10) == 4)) {
        fcn.00021652();
        fcn.00021684();
        uVar3 = fcn.00021652();
        uVar3 = uVar3 | 0x78;
    }
    else {
        if (*(iVar7 + 0x10) != 3) {
            return;
        }
        fcn.00021652();
        fcn.00021684();
        uVar3 = fcn.00021652();
        uVar3 = uVar3 & 0xffffff87;
    }
    iVar7 = *(iVar4 + 0x9c);
    iVar1 = *(iVar4 + 0x94);
    puVar5 = *(iVar4 + 0xa8) + *0x1a0c4;
    *puVar5 = *puVar5 & ~*(iVar4 + 0xa0) | *(iVar4 + 0x98) << (*(iVar4 + 0xa4) & 0x1f);
    *(*0x1a0c4 + iVar7 + iVar1) = uVar3;
    return;
}


/* fcn.00025f1b @ 0x25f1b */

void __fastcall
fcn.00025f1b(int param_1,uint32_t param_2,uint param_3,uint32_t param_4,uint8_t param_5,uint32_t param_6)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    int iVar5;
    int iVar6;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    uint uStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
    uint8_t uStack_8;
    uint8_t uStack_7;
    uint8_t uStack_6;
    uint8_t uStack_5;
    uint8_t uStack_4;
    uint8_t uStack_3;
    uint8_t uStack_2;
    
    iVar5 = 0;
    uStack_30 = 0;
    iStack_2c = 0;
    iVar6 = 0;
    iStack_14 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_34 = 0;
    iStack_38 = 0;
    iStack_28 = 0;
    iStack_20 = 0;
    iStack_24 = 0;
    iStack_18 = 0;
    iStack_1c = 0;
    cVar1 = fcn.000147e7();
    if (cVar1 == '\0') {
        return;
    }
    iVar2 = *(param_1 + 0x10);
    if ((iVar2 == 2) || (iVar2 == 4)) {
        param_5 = ~-(6 < param_5) & param_5;
    }
    if ((iVar2 == 1) && (*(*(param_1 + 0x8c) + 0x80) == '\0')) {
        uStack_30 = 1;
    }
    if ((iVar2 == 3) && (*(*(param_1 + 0x8c) + 0xc) != '\0')) {
        param_4 = CONCAT31(param_4._1_3_,*(*(param_1 + 0x8c) + 0xe)) & 0xffffff07;
    }
    uVar3 = 0;
    do {
        if (*(param_1 + 0x14) == *(uVar3 * 0x54 + 0x19700)) {
            iVar2 = uVar3 * 0x54;
            iStack_2c = *(iVar2 + 0x19708);
            iStack_14 = *(iVar2 + 0x19714);
            iVar5 = *(iVar2 + 0x19704);
            iVar6 = *(iVar2 + 0x19738);
            iStack_44 = *(iVar2 + 0x19718);
            iStack_40 = *(iVar2 + 0x1971c);
            iStack_3c = *(iVar2 + 0x19720);
            iStack_34 = *(iVar2 + 0x19728);
            iStack_38 = *(iVar2 + 0x1972c);
            iStack_28 = *(iVar2 + 0x19734);
            iStack_20 = *(iVar2 + 0x1973c);
            iStack_24 = *(iVar2 + 0x19740);
            iStack_18 = *(iVar2 + 0x19748);
            iStack_1c = *(iVar2 + 0x1974c);
            break;
        }
        uVar4 = uVar3 + 1;
        uVar3 = uVar4;
    } while (uVar4 < 2);
    fcn.00025163(param_4,param_5,uStack_30,param_6,&uStack_c);
    iVar2 = *0x1a0c4;
    if ((*(param_1 + 0x10) == 3) || (*(param_1 + 0x10) == 1)) {
        uVar3 = *(*0x1a0c4 + iStack_2c) | 0x4000000;
    }
    else {
        uVar3 = *(*0x1a0c4 + iStack_2c) & 0xfbffffff;
    }
    *(*0x1a0c4 + iVar5) = uVar3;
    if (param_6 < 0x5b8d81) {
        if (param_2 == 4) {
            *(iVar2 + iStack_14) = *(iVar2 + iStack_14) & 0x7fffffff;
            *(*0x1a0c4 + iStack_44) = *(*0x1a0c4 + iStack_44) | 0x80000000;
            *(*0x1a0c4 + iStack_40) = *(*0x1a0c4 + iStack_40) | 0x80000000;
            uVar3 = *(*0x1a0c4 + iStack_3c) | 0x80000000;
            goto code_r0x000261a8;
        }
        if (param_2 < 4) {
            *(iVar2 + iStack_14) = *(iVar2 + iStack_14) & 0x7fffffff;
            *(*0x1a0c4 + iStack_44) = *(*0x1a0c4 + iStack_44) | 0x80000000;
            *(*0x1a0c4 + iStack_40) = *(*0x1a0c4 + iStack_40) | 0x80000000;
            uVar3 = *(*0x1a0c4 + iStack_3c) & 0x7fffffff;
            goto code_r0x000261a8;
        }
    }
    else {
        *(iVar2 + iStack_14) = *(iVar2 + iStack_14) & 0x7fffffff;
        *(*0x1a0c4 + iStack_44) = *(*0x1a0c4 + iStack_44) & 0x7fffffff;
        *(*0x1a0c4 + iStack_40) = *(*0x1a0c4 + iStack_40) & 0x7fffffff;
        uVar3 = *(*0x1a0c4 + iStack_3c) & 0x7fffffff;
code_r0x000261a8:
        *(*0x1a0c4 + iStack_3c) = uVar3;
        iVar2 = *0x1a0c4;
    }
    *(iVar2 + iStack_28) = *(iVar2 + iStack_28) | 3;
    iVar5 = *0x1a0c4;
    *(*0x1a0c4 + iStack_34) = *(*0x1a0c4 + iStack_38) & 0x7fffffff;
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + iStack_34) = *(iVar5 + iStack_38) & 0xffebffff | 0x80000;
    iVar5 = *0x1a0c4;
    *(*0x1a0c4 + iStack_20) = ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | *(iVar2 + iStack_24) & 0xffff4700 | uStack_7;
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + iStack_18) = (uStack_b << 0x18 ^ *(iVar5 + iStack_1c)) & 0x7f000000 ^ *(iVar5 + iStack_1c);
    uVar3 = ((uStack_8 & 0x3f) << 6 | uStack_9 & 0x3f) << 6 | uStack_a & 0x3f;
    *(iVar2 + iStack_14) = *(iVar2 + iStack_14) & 0xfffc0000 | uVar3;
    *(*0x1a0c4 + iStack_44) = *(*0x1a0c4 + iStack_44) & 0xfffc0000 | uVar3;
    *(*0x1a0c4 + iStack_40) = *(*0x1a0c4 + iStack_40) & 0xfffc0000 | uVar3;
    *(*0x1a0c4 + iStack_3c) = *(*0x1a0c4 + iStack_3c) & 0xfffc0000 | uVar3;
    iVar5 = *0x1a0c4;
    *(*0x1a0c4 + iStack_34) =
         (((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 | uStack_6 & 7) << 3 |
         *(*0x1a0c4 + iStack_38) & 0x99ffffc7;
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + iStack_34) = *(iVar5 + iStack_38) | 0x80000000;
    if ((*(param_1 + 0x10) == 1) && (param_6 < 0x5265c1)) {
        uVar3 = *(iVar2 + iVar6);
        if (*(*(param_1 + 0x8c) + 0x20f) == '\x01') {
            *(iVar2 + iVar6) = uVar3 | 2;
            *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) & 0xfffffffe;
            *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) | 8;
            uVar3 = *(*0x1a0c4 + iVar6) | 4;
            goto code_r0x00026398;
        }
    }
    else {
        uVar3 = *(iVar2 + iVar6);
    }
    *(iVar2 + iVar6) = uVar3 & 0xfffffffd;
    uVar3 = *(*0x1a0c4 + iVar6) & 0xfffffff7;
code_r0x00026398:
    *(*0x1a0c4 + iVar6) = uVar3;
    return;
}


/* fcn.0001a3db @ 0x1a3db */

void __fastcall fcn.0001a3db(int param_1)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iStack_14;
    
    iVar2 = *(param_1 + 0x8c);
    iVar3 = fcn.0001a3c0();
    iStack_14 = 0;
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0xfff3ffff;
    if ((*(param_1 + 0x10) == 3) && (cVar1 = *(iVar2 + 0x194), cVar1 != '\x06')) {
        if (cVar1 == '\n') {
            iStack_14 = 1;
        }
        else if (cVar1 == '\x14') {
            iStack_14 = 2;
        }
        else if (cVar1 == '\x1e') {
            iStack_14 = 3;
        }
    }
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0xff0fffff | iStack_14 << 0x14;
    return;
}


/* fcn.000195d3 @ 0x195d3 */

int fcn.000195d3(void)

{
    int iVar1;
    int iVar2;
    int32_t *piVar3;
    int8_t var_5ch;
    int32_t var_5bh;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int16_t var_34h;
    int8_t var_32h;
    int8_t var_31h;
    int32_t var_30h;
    int32_t var_2ch;
    int16_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int16_t var_18h;
    int8_t var_16h;
    int8_t var_15h;
    int8_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int16_t var_4h;
    int8_t var_2h;
    int8_t var_1h;
    
    var_5ch = 0;
    piVar3 = &var_5bh;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar3 = 0;
        piVar3 = piVar3 + 1;
    }
    iVar2 = 4;
    var_10h = 0x482d5044;
    *piVar3 = 0;
    var_ch = 0x20494d44;
    var_8h = 0x50414441;
    var_4h = 0x4f54;
    var_2h = 0x52;
    var_31h = 4;
    var_24h = 0x482d5044;
    var_20h = 0x20494d44;
    var_1ch = 0x50414441;
    var_18h = 0x4f54;
    var_16h = 0x52;
    var_14h = -0x60;
    var_40h = 0x482d5044;
    var_3ch = 0x20494d44;
    var_38h = 0x50414441;
    var_34h = 0x4f54;
    var_32h = 0x52;
    var_30h = -0x7e3ff60;
    var_2ch = 0x34385350;
    var_28h = 0x3936;
    var_15h = var_31h;
    var_1h = var_31h;
    iVar1 = fcn.00018684(0,0x1a,&var_5ch);
    if (iVar1 < 0) {
        iVar2 = 1;
    }
    else {
        iVar1 = fcn.000134f4(0x1a);
        if (iVar1 != 0) {
            iVar2 = fcn.000134f4(0x11);
            if (iVar2 == 0) {
                iVar2 = 3;
            }
            else {
                iVar2 = fcn.000134f4(0x10);
                iVar2 = 2 - (iVar2 != 0);
            }
        }
    }
    return iVar2;
}


/* fcn.000199c5 @ 0x199c5 */

void fcn.000199c5(void)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    
    uVar3 = 0;
    iVar4 = 0;
    iVar5 = 0;
    if (*0x1a0e8 == 0) {
        iVar5 = 0x60200;
        iVar4 = 0x60220;
    }
    else if (*0x1a0e8 == 1) {
        iVar5 = 0x61200;
        iVar4 = 0x61220;
    }
    else if (*0x1a0e8 == 2) {
        iVar5 = 0x62200;
        iVar4 = 0x62220;
    }
    *(*0x1a0c4 + iVar5) = *(*0x1a0c4 + iVar5) & 0xffffefff;
    iVar2 = *0x1a0c4;
    do {
        puVar1 = uVar3 + 0x19f60;
        uVar3 = uVar3 + 4;
        *(iVar2 + iVar4) = *puVar1;
        iVar4 = iVar4 + 4;
    } while (uVar3 < 0x20);
    *(iVar2 + iVar5) = *(iVar2 + iVar5) | 0x1000;
    return;
}


/* fcn.0001981e @ 0x1981e */

uint __fastcall fcn.0001981e(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_8;
    int8_t var_1h;
    
    iVar1 = *(param_1 + 0x8c);
    uVar2 = 0;
    uStack_8 = param_1;
    while( true ) {
        fcn.00013584();
        if ((*(iVar1 + 0x3d) & 2) != 0) {
            fcn.00018684(0x21,1,&var_1h);
        }
        if ((uStack_8 & 0x1000000) != 0) break;
        if (2000 < uVar2) {
            return 0;
        }
        uVar2 = uVar2 + 1;
    }
    if (2000 < uVar2) {
        return 0;
    }
    return 1;
}


/* fcn.00020151 @ 0x20151 */

void fcn.00020151(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0fc == 0) {
        iVar1 = 0x60400;
    }
    else if (*0x1a0fc == 1) {
        iVar1 = 0x61400;
    }
    else if (*0x1a0fc == 2) {
        iVar1 = 0x62400;
    }
    else if (*0x1a0fc == 3) {
        iVar1 = 0x63400;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xfffffffe;
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffffef;
    return;
}


/* fcn.00019e35 @ 0x19e35 */

uint32_t __fastcall fcn.00019e35(uint32_t param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uStack_8;
    int8_t var_1h;
    
    uStack_8 = param_1 & 0xffffff;
    if (param_2 < 1) {
code_r0x00019ea9:
        uVar2 = 0;
    }
    else {
        if (param_2 < 3) {
            uVar2 = 0x28488;
        }
        else {
            if (param_2 != 3) {
                if (param_2 != 4) goto code_r0x00019ea9;
                if ((*(*(param_1 + 0x8c) + 0x15) == '\x01') && (*(*(param_1 + 0x8c) + 8) == '\0')) {
                    uVar2 = 600000;
                    goto code_r0x00019e76;
                }
            }
            uVar2 = 300000;
        }
code_r0x00019e76:
        iVar1 = fcn.00018684(0x1d,1,&var_1h);
        if (-1 < iVar1) {
            if (var_1h != 0) {
                if (var_1h * 0x9c4 <= uVar2) {
                    uVar2 = var_1h * 0x9c4;
                }
            }
        }
    }
    return uVar2;
}


/* fcn.0001a027 @ 0x1a027 */

void __fastcall fcn.0001a027(int param_1,uint *param_2,uint *param_3)

{
    int iVar1;
    
    if (*(param_1 + 0x1c) == '\0') {
        iVar1 = *(*(param_1 + 0x98) + 0x68);
        if ((iVar1 == 0) && (*(param_1 + 0x6c) == 1)) goto code_r0x0001a05e;
        if (iVar1 != 1) {
            return;
        }
        iVar1 = *(param_1 + 0x6c);
    }
    else {
        if ((*(param_1 + 0x6c) == 0) && (*(param_1 + 0x7c) == 1)) {
code_r0x0001a05e:
            *param_2 = 1;
            *param_3 = 0;
            return;
        }
        if (*(param_1 + 0x6c) != 1) {
            return;
        }
        iVar1 = *(param_1 + 0x7c);
    }
    if (iVar1 == 2) {
        *param_2 = 2;
        *param_3 = 1;
    }
    return;
}


/* fcn.00021633 @ 0x21633 */

int * __fastcall fcn.00021633(int param_1)

{
    int *piVar1;
    uint8_t uVar2;
    
    uVar2 = 0;
    do {
        piVar1 = uVar2 * 0x1b4 + 0x18f70;
        if (*piVar1 == param_1) {
            return piVar1;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    return NULL;
}


/* fcn.0001a698 @ 0x1a698 */

uint __fastcall fcn.0001a698(int param_1)

{
    int8_t iVar1;
    uint32_t uVar2;
    int iVar3;
    uint uStack_8;
    
    iVar3 = *(param_1 + 0x14);
    if (iVar3 == 4) {
        iVar3 = 0x1638a0;
    }
    else {
        if (iVar3 == 5) {
            uVar2 = 0x6000;
            iVar3 = 0x1638a0;
            iVar1 = 0xd;
            goto code_r0x0001a6e1;
        }
        if (iVar3 != 6) {
            if (iVar3 != 7) {
                return 0;
            }
            uVar2 = 0x6000;
            iVar3 = 0x16e8a0;
            iVar1 = 0xd;
            goto code_r0x0001a6e1;
        }
        iVar3 = 0x16e8a0;
    }
    uVar2 = 0x60;
    iVar1 = 5;
code_r0x0001a6e1:
    uVar2 = (*(*0x1a0c4 + iVar3) & uVar2) >> iVar1;
    if (uVar2 == 1) {
        return 1;
    }
    if (uVar2 == 2) {
        uStack_8 = 2;
    }
    else {
        if (uVar2 != 3) {
            return 0;
        }
        uStack_8 = 3;
    }
    return uStack_8;
}


/* fcn.0001a84d @ 0x1a84d */

uint __fastcall fcn.0001a84d(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    
    iVar1 = *(param_1 + 0x8c);
    *(iVar1 + 0x24) = 3;
    iVar4 = *(param_1 + 0x14);
    if (iVar4 == 4) {
        uVar2 = 0x1000000;
        iVar4 = 0x161500;
    }
    else if (iVar4 == 5) {
        uVar2 = 0x2000000;
        iVar4 = 0x161504;
    }
    else if (iVar4 == 6) {
        uVar2 = 0x4000000;
        iVar4 = 0x161508;
    }
    else {
        if (iVar4 != 7) {
            return 0x80000002;
        }
        uVar2 = 0x8000000;
        iVar4 = 0x16150c;
    }
    if ((uVar2 & *(*0x1a0c4 + 0xc4000)) == 0) {
        *(iVar1 + 0x24) = 0;
        iVar1 = fcn.0001a3c0();
        *(iVar1 + *0x1a0c4) = *(iVar1 + *0x1a0c4) & 0xffffffbf;
    }
    else {
        iVar3 = 100;
        do {
            if ((*(*0x1a0c4 + iVar4) & 4) != 0) break;
            fcn.00013584();
            iVar3 = iVar3 + -2;
        } while (iVar3 != 0);
        if (iVar3 != 0) {
            if (*(iVar1 + 0x24) != 0) {
                iVar1 = fcn.0001a3c0();
                *(iVar1 + *0x1a0c4) = *(iVar1 + *0x1a0c4) | 0x40;
            }
            return 0;
        }
        *(iVar1 + 0x24) = 0;
    }
    return 0x80000007;
}


/* fcn.0001a70d @ 0x1a70d */

uint __fastcall fcn.0001a70d(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    uint32_t uVar5;
    
    iVar1 = *(param_1 + 0x8c);
    uVar5 = 2;
    *(iVar1 + 0x24) = 2;
    iVar3 = *(param_1 + 0x14);
    if (iVar3 == 4) {
        uVar5 = 1;
    }
    else if ((iVar3 != 5) && (uVar5 = 4, iVar3 != 6)) {
        if (iVar3 != 7) {
            return 0x80000002;
        }
        uVar5 = 8;
    }
    uVar2 = *(*0x1a0c4 + 0x44470);
    iVar3 = fcn.0001a698();
    if (((uVar5 & uVar2) == 0) && (iVar3 != 2)) {
        *(iVar1 + 0x24) = 0;
        uVar4 = 0x80000007;
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001a773 @ 0x1a773 */

uint __fastcall fcn.0001a773(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    
    iVar1 = *(param_1 + 0x8c);
    *(iVar1 + 0x24) = 1;
    iVar4 = *(param_1 + 0x14);
    if (iVar4 == 4) {
        uVar2 = 0x10000;
        iVar4 = 0x161500;
    }
    else if (iVar4 == 5) {
        uVar2 = 0x20000;
        iVar4 = 0x161504;
    }
    else if (iVar4 == 6) {
        uVar2 = 0x40000;
        iVar4 = 0x161508;
    }
    else {
        if (iVar4 != 7) {
            return 0x80000002;
        }
        uVar2 = 0x80000;
        iVar4 = 0x16150c;
    }
    if ((uVar2 & *(*0x1a0c4 + 0x44470)) == 0) {
        *(iVar1 + 0x24) = 0;
        iVar1 = fcn.0001a3c0();
        *(iVar1 + *0x1a0c4) = *(iVar1 + *0x1a0c4) & 0xffffffbf;
    }
    else {
        iVar3 = 100;
        do {
            if ((*(*0x1a0c4 + iVar4) & 4) != 0) break;
            fcn.00013584();
            iVar3 = iVar3 + -2;
        } while (iVar3 != 0);
        if (iVar3 != 0) {
            if (*(iVar1 + 0x24) != 0) {
                iVar1 = fcn.0001a3c0();
                *(iVar1 + *0x1a0c4) = *(iVar1 + *0x1a0c4) | 0x40;
            }
            return 0;
        }
        *(iVar1 + 0x24) = 0;
    }
    return 0x80000007;
}


/* fcn.0001a927 @ 0x1a927 */

uint __fastcall fcn.0001a927(int param_1)

{
    int iVar1;
    int iVar2;
    
    iVar2 = *(param_1 + 0x8c);
    if ((*(*0x1a0c4 + 0x1638a0) != -1) &&
       (((iVar1 = fcn.0001a84d(), iVar1 == 0 || ((*(iVar2 + 0x17) != '\0' && (iVar1 = fcn.0001a70d(), iVar1 == 0))))
        || ((*(iVar2 + 0x16) != '\0' && (iVar2 = fcn.0001a773(), iVar2 == 0)))))) {
        return 0;
    }
    return 0x80000007;
}


/* fcn.0001b2ae @ 0x1b2ae */

uint32_t __fastcall fcn.0001b2ae(int param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    int iVar4;
    uint8_t uVar5;
    
    if (*0x1a0d8 == 1) {
        uVar2 = 0;
        if (param_2 != 0x9600) goto code_r0x0001b2da;
        iVar4 = 0x171f4;
        uVar5 = 6;
    }
    else {
        uVar2 = *0x1a0d8 - 2;
        if (1 < uVar2) goto code_r0x0001b2da;
        iVar4 = 0x173b0;
        uVar5 = 10;
    }
    uVar1 = 0;
    do {
        uVar2 = uVar1;
        if (*(iVar4 + uVar2 * 8) == param_1) {
            if (param_2 == 0x4b00) {
                return *(iVar4 + 4 + uVar2 * 8);
            }
            if (param_2 == 24000) {
                return *(iVar4 + 6 + uVar2 * 8);
            }
            if (param_2 == 0x9600) {
                return *(iVar4 + 5 + uVar2 * 8);
            }
            break;
        }
        uVar3 = uVar2 + 1;
        uVar1 = uVar3;
    } while (uVar3 < uVar5);
code_r0x0001b2da:
    return uVar2 & 0xffffff00;
}


/* fcn.0001b409 @ 0x1b409 */

void __fastcall fcn.0001b409(int param_1)

{
    uint32_t uVar1;
    
    if (param_1 == 0) {
        uVar1 = *(*0x1a0c4 + 0x65ea0) & 0x7fffffff;
    }
    else {
        uVar1 = *(*0x1a0c4 + 0x65ea0) | 0x80000000;
    }
    *(*0x1a0c4 + 0x65ea0) = uVar1;
    return;
}


/* fcn.0001b22a @ 0x1b22a */

int __fastcall fcn.0001b22a(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    ulong uVar4;
    
    uVar4 = fcn.000154bc();
    uVar2 = uVar4 >> 0x20;
    if (*0x1a100 != 0) {
        piVar1 = *0x1a104;
        uVar3 = uVar2;
        do {
            if ((*piVar1 == param_1) && (piVar1[2] == uVar4)) {
                if ((*0x1a104)[uVar3 * 3 + 1] != 0) {
                    return (*0x1a104)[uVar3 * 3 + 1];
                }
                break;
            }
            uVar3 = uVar3 + 1;
            piVar1 = piVar1 + 3;
        } while (uVar3 < *0x1a100);
    }
    uVar3 = uVar2;
    while ((*(uVar2 + 0x17240) != param_1 || (*(uVar2 + 0x1723c) != uVar4))) {
        uVar2 = uVar2 + 0x18;
        uVar3 = uVar3 + 1;
        if (0x137 < uVar2) {
            return 0;
        }
    }
    return *(uVar3 * 0x18 + 0x17230);
}


/* fcn.0001b3b9 @ 0x1b3b9 */

uint fcn.0001b3b9(void)

{
    int iVar1;
    bool bVar2;
    
    bVar2 = *0x1a1a4 == '\0';
    *(*0x1a0c4 + 0x46070) = *(*0x1a0c4 + 0x46070) & 0x7fffffff;
    if (bVar2) {
        iVar1 = 200;
        while ((*(*0x1a0c4 + 0x46070) & 0x40000000) != 0) {
            fcn.00013584();
            iVar1 = iVar1 + -10;
            if (iVar1 == 0) {
                return 0x80000007;
            }
        }
    }
    return 0;
}


/* fcn.0001b163 @ 0x1b163 */

void __fastcall fcn.0001b163(int param_1,uint *param_2,uint *param_3)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t extraout_ECX;
    uint *extraout_EDX;
    int *piVar3;
    uint uVar4;
    bool bVar5;
    
    uVar2 = 0;
    uVar4 = 0;
    if (*0x1a100 != 0) {
        piVar3 = *0x1a104 + 4;
        do {
            if (*piVar3 == param_1) {
                uVar4 = *(uVar2 * 0xc + *0x1a104);
                break;
            }
            uVar2 = uVar2 + 1;
            piVar3 = piVar3 + 3;
        } while (uVar2 < *0x1a100);
    }
    bVar5 = *0x1a0d8 != 1;
    *param_3 = uVar4;
    if (bVar5) {
        cVar1 = fcn.000148da();
        if (cVar1 != '\x01') {
            return;
        }
        param_2 = extraout_EDX;
        if (extraout_ECX < 0x139) {
            if (extraout_ECX != 0x138) {
                if (((extraout_ECX == 0xac) || (extraout_ECX == 0xb0)) || (extraout_ECX == 0xb3)) {
                    *extraout_EDX = 0x400000;
                    return;
                }
                if ((extraout_ECX != 0xc0) && (extraout_ECX != 0x133)) {
                    return;
                }
            }
        }
        else if ((((extraout_ECX != 0x228) && (extraout_ECX != 0x22c)) && (extraout_ECX != 0x288)) &&
                (extraout_ECX != 0x28c)) {
            return;
        }
        goto code_r0x0001b226;
    }
    if (((param_1 != 0xac) && (param_1 != 0xc0)) && (param_1 != 0x133)) {
        if (param_1 == 0x146) {
            *param_2 = 0x800000;
            goto code_r0x0001b226;
        }
        if ((param_1 != 0x22c) && (param_1 != 0x28c)) goto code_r0x0001b226;
    }
    *param_2 = 0;
code_r0x0001b226:
    *param_2 = 0;
    return;
}


/* fcn.0001b329 @ 0x1b329 */

uint fcn.0001b329(void)

{
    uint8_t uVar1;
    int iVar2;
    bool bVar3;
    
    fcn.000154bc();
    uVar1 = fcn.0001b2ae();
    if (uVar1 != 0) {
        *(*0x1a0c4 + 0x46070) = *(*0x1a0c4 + 0x46070) & 0x7fffff00 | uVar1;
        bVar3 = *0x1a1a4 != '\0';
        *(*0x1a0c4 + 0x46070) = *(*0x1a0c4 + 0x46070) | 0x80000000;
        if (bVar3) {
            fcn.00013584();
            return 0;
        }
        iVar2 = 200;
        do {
            if ((*(*0x1a0c4 + 0x46070) & 0x40000000) != 0) {
                return 0;
            }
            fcn.00013584();
            iVar2 = iVar2 + -10;
        } while (iVar2 != 0);
    }
    return 0x80000007;
}


/* fcn.0001b431 @ 0x1b431 */

void fcn.0001b431(void)

{
    uint32_t *puVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = *0x1a0c4;
    uVar3 = *(*0x1a0c4 + 0x65ea4);
    puVar1 = *0x1a0c4 + 0x65ea0;
    if (*0x1a0ec < 0x145) {
        if (*0x1a0ec == 0x144) {
            uVar3 = uVar3 & 0xff00032a | 0x32a;
        }
        else if (*0x1a0ec == 0xac) {
            uVar3 = uVar3 & 0xff0001b0 | 0x1b0;
        }
        else if (*0x1a0ec == 0xb0) {
            uVar3 = uVar3 & 0xff0001b8 | 0x1b8;
        }
        else if (*0x1a0ec == 0xb3) {
            uVar3 = uVar3 & 0xff0001c0 | 0x1c0;
        }
        else if (*0x1a0ec == 0xc0) {
            uVar3 = uVar3 & 0xff0001e0 | 0x1e0;
        }
        else if (*0x1a0ec == 0x133) {
            uVar3 = uVar3 & 0xff000300 | 0x300;
        }
        else if (*0x1a0ec == 0x138) {
            uVar3 = uVar3 & 0xff00030c | 0x30c;
        }
    }
    else if (*0x1a0ec == 0x146) {
        uVar3 = uVar3 & 0xff000330 | 0x330;
    }
    else if (*0x1a0ec == 0x228) {
        uVar3 = uVar3 & 0xff000564 | 0x564;
    }
    else if (*0x1a0ec == 0x22c) {
        uVar3 = uVar3 & 0xff000570 | 0x570;
    }
    else if (*0x1a0ec == 0x288) {
        uVar3 = uVar3 & 0xff000654 | 0x654;
    }
    else if (*0x1a0ec == 0x28c) {
        uVar3 = uVar3 & 0xff000660 | 0x660;
    }
    *(*0x1a0c4 + 0x65ea4) = uVar3;
    *(iVar2 + 0x65ea0) = *puVar1 & 0xff00003c | 0x3c;
    return;
}


/* fcn.0001e9c6 @ 0x1e9c6 */

uint32_t __fastcall fcn.0001e9c6(uint32_t param_1)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int extraout_ECX;
    uint32_t uVar7;
    
    iVar4 = *(param_1 + 0x8c);
    uVar7 = *(param_1 + 0x2c);
    iVar2 = *(iVar4 + 0x1f8);
    uVar5 = 100;
    uVar1 = *(iVar2 + 6);
    *(iVar4 + 0x1fc) = uVar7;
    if (*0x1a08f != '\0') {
        uVar7 = uVar7 >> 1;
        *(iVar4 + 0x1fc) = uVar7;
        if (((uVar1 & 3) == 1) && (*(iVar4 + 0x1a) != 0)) {
            uVar6 = (*(param_1 + 0x44) + *(param_1 + 0x40)) * *(iVar4 + 0x1a) * 0x3c;
            uVar3 = uVar6 / 1000;
            if (uVar6 % 1000 != 0) {
                uVar3 = uVar3 + 1;
            }
            *(iVar4 + 0x1fc) = uVar3 + uVar7;
        }
    }
    if ((*(iVar2 + 2) & 0xc0) == 0xc0) {
        uVar7 = *(iVar2 + 0xb);
        if (uVar7 != 0) {
            iVar4 = fcn.0001e373();
            if ((-1 < iVar4) && (param_1 <= uVar7)) {
                uVar5 = (uVar7 * 100) / param_1;
                if ((uVar7 * 100) % param_1 != 0) {
                    uVar5 = uVar5 + 1;
                }
                uVar7 = *(extraout_ECX + 0x1fc) * uVar5;
                uVar6 = uVar7 / 100;
                if (uVar7 % 100 != 0) {
                    uVar6 = uVar6 + 1;
                }
                *(extraout_ECX + 0x1fc) = uVar6;
            }
        }
    }
    else {
        uVar5 = 100;
    }
    return uVar5;
}


/* fcn.0001b873 @ 0x1b873 */

uint __fastcall fcn.0001b873(int param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int iVar7;
    
    uVar4 = *(param_1 + 0x2c);
    iVar2 = fcn.000154bc();
    if (*(param_1 + 0x10) == 5) {
        iVar3 = fcn.0001e9c6();
        uVar4 = (iVar3 * uVar4) / 100;
    }
    iVar3 = 2;
    if ((((*(param_1 + 0x10) == 5) || (*(param_1 + 0x10) == 1)) && (*(*(param_1 + 0x8c) + 0xa8) != '\0')) &&
       (*(*(param_1 + 0x8c) + 0xb1) == '\x01')) {
        iVar3 = 1;
    }
    uVar6 = 0;
    if (param_2 == 2) {
        do {
            if ((uVar4 < *(uVar6 * 0x18 + 0x17230) * iVar3 * 1000) && (iVar2 == *(uVar6 * 0x18 + 0x1723c))) {
                return *(uVar6 * 0x18 + 0x17230);
            }
            uVar5 = uVar6 + 1;
            uVar6 = uVar5;
        } while (uVar5 < 0xd);
    }
    else {
        uVar6 = *0x1a100 << 8;
        if (*0x1a100 != 0) {
            do {
                iVar7 = (uVar6 & 0xff) * 0xc;
                if ((uVar4 < *(iVar7 + 4 + *0x1a104) * iVar3 * 1000) && (iVar2 == *(iVar7 + 8 + *0x1a104))) {
                    return *((uVar6 & 0xff) * 0xc + 4 + *0x1a104);
                }
                uVar5 = uVar6 + 1;
                uVar1 = uVar6 >> 8;
                uVar6 = CONCAT31(uVar6 >> 8,uVar5);
            } while (uVar5 < uVar1);
        }
    }
    return 0;
}


/* fcn.0001b6ce @ 0x1b6ce */

int __fastcall fcn.0001b6ce(uint param_1)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.0001b409();
    fcn.00021941();
    iVar1 = fcn.00021759();
    if (((-1 < iVar1) && (iVar1 = fcn.0001b3b9(), -1 < iVar1)) &&
       (*0x1a0ec = param_1, iVar1 = fcn.0001b329(), -1 < iVar1)) {
        fcn.0001b163(&var_4h);
        *(*0x1a0c4 + 0x46000) = *(*0x1a0c4 + 0x46000) & 0xff3ff800 | var_4h | 0x380000;
        fcn.00021941();
        fcn.000217d2();
        fcn.0001b431();
        fcn.0001b409();
    }
    return iVar1;
}


/* fcn.0001b77b @ 0x1b77b */

int fcn.0001b77b(void)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint8_t extraout_DL;
    int iVar4;
    
    fcn.0001b409();
    if (0xc < extraout_DL) {
        return -0x7ffffff9;
    }
    iVar4 = extraout_DL * 0x18;
    fcn.00021941();
    iVar3 = fcn.00021759();
    iVar2 = *0x1a0c4;
    if (-1 < iVar3) {
        *(*0x1a0c4 + 0x46000) = *(*0x1a0c4 + 0x46000) & 0xff3ff800 | *(iVar4 + 0x17238) | *(iVar4 + 0x17240) | 0x380000;
        *(iVar2 + 0x46008) = *(iVar2 + 0x46008) & 0xffff0000 | *(iVar4 + 0x17244) | 0x80000000;
        *0x1a0ec = *(iVar4 + 0x17230);
        fcn.00021941();
        fcn.000217d2();
        iVar2 = *0x1a0c4;
        puVar1 = *0x1a0c4 + 0x65ea0;
        *(*0x1a0c4 + 0x65ea4) = *(*0x1a0c4 + 0x65ea4) & 0xff000000 | *(iVar4 + 0x17246);
        *(iVar2 + 0x65ea0) = *puVar1 & 0xff00003c | 0x3c;
        fcn.0001b409();
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.0001b962 @ 0x1b962 */

int fcn.0001b962(void)

{
    uint32_t uVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    
    iVar4 = 0;
    piVar2 = 0x1a120;
    uVar5 = 0;
    iVar3 = 2;
    do {
        if (*piVar2 != 0) {
            if (*(*piVar2 + 0xc) == 4) {
                uVar1 = fcn.0001b873();
            }
            else {
                uVar1 = *0x1a108;
            }
            if (uVar5 < uVar1) {
                uVar5 = uVar1;
            }
        }
        piVar2 = piVar2 + 1;
        iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    if (uVar5 != *0x1a0ec) {
        iVar4 = fcn.0001b6ce();
        if (iVar4 < 0) {
            iVar4 = -0x7ffffff9;
        }
    }
    return iVar4;
}


/* fcn.0001b9be @ 0x1b9be */

int fcn.0001b9be(void)

{
    uint32_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int *piVar5;
    uint32_t uVar6;
    
    uVar3 = 0;
    piVar5 = 0x1a120;
    uVar6 = 0;
    iVar4 = 2;
    do {
        if ((*piVar5 != 0) && (uVar1 = fcn.0001b873(), uVar6 <= uVar1)) {
            uVar6 = uVar1;
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    do {
        if (*(uVar3 * 0x18 + 0x17230) == uVar6) {
            iVar4 = fcn.0001b77b();
            if (iVar4 < 0) {
                return -0x7ffffff9;
            }
            return iVar4;
        }
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
    } while (uVar2 < 0xd);
    return -0x7ffffff9;
}


/* fcn.0001bfb0 @ 0x1bfb0 */

uint __fastcall fcn.0001bfb0(int param_1)

{
    if (param_1 != 2) {
        if (param_1 == 4) {
            return 10;
        }
        if (param_1 == 8) {
            return 0xc;
        }
        if (param_1 == 0x10) {
            return 0xe;
        }
        if (param_1 == 0x20) {
            return 0x10;
        }
    }
    return 8;
}


/* fcn.0001bee3 @ 0x1bee3 */

//WARNING: Variable defined which should be unmapped: var_1h

uint32_t __fastcall fcn.0001bee3(int param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint8_t uVar6;
    uint32_t uVar5;
    int32_t var_8h;
    int32_t var_1h;
    
    uVar5 = 0;
    uVar2 = fcn.00023aaa(8,1,*(*(param_1 + 0x8c) + 0x24),&var_1h);
    if (-1 < uVar2) {
        uVar2 = *(param_1 + 0x2c);
        if (uVar2 < 0x298101) {
            uVar1 = uVar2 / 340000;
            if (uVar2 % 340000 != 0) {
                uVar1 = uVar1 + 1;
            }
        }
        else {
            uVar1 = uVar2 / 400000;
            if (uVar2 % 400000 != 0) {
                uVar1 = uVar1 + 1;
            }
        }
        uVar4 = 0;
        do {
            uVar3 = uVar4;
            if (uVar1 <= *(uVar4 + 0x19c88)) {
                uVar5 = uVar4 << 8;
                uVar2 = 0;
                if (0x18 < *(uVar4 + 0x19c88)) goto code_r0x0001bfa8;
                break;
            }
            uVar3 = uVar3 + 1;
            uVar4 = uVar3;
        } while (uVar3 < 3);
        uVar2 = 0;
        if ((uVar3 != 3) && (uVar5 >> 8 < 3)) {
            do {
                uVar3 = *((uVar5 >> 8) + 0x19c88);
                uVar2 = *(param_1 + 0x30) / uVar3;
                uVar6 = (uVar5 >> 8) + 1;
                uVar5 = CONCAT11(uVar6,uVar3);
            } while (uVar6 < 3);
        }
    }
code_r0x0001bfa8:
    return uVar2 & 0xffffff00;
}


/* fcn.0001c905 @ 0x1c905 */

uint __fastcall fcn.0001c905(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint32_t *puVar5;
    uint *puVar6;
    int iVar7;
    uint32_t *puVar8;
    int iVar9;
    uint8_t uStack_1;
    
    if ((*(param_1 + 0x10) == 5) || (*(param_1 + 0x10) == 1)) {
        iVar7 = *(param_1 + 0x8c) + 0xa8;
    }
    else {
        iVar7 = *(param_1 + 0x8c) + 0x44;
    }
    if ((*(iVar7 + 0xc) & 4) == 0) {
        *(iVar7 + 0xc) = 2;
    }
    else {
        *(iVar7 + 0xc) = 4;
    }
    *(iVar7 + 0x18) = *(iVar7 + 9);
    if (*(param_1 + 0x10) == 3) {
        uVar1 = fcn.0001bee3();
        if (uVar1 == 0) {
            return 0x80000002;
        }
        *(iVar7 + 0x18) = uVar1;
        iVar2 = fcn.0001be03();
        *(iVar7 + 0x10) = iVar2 << 4;
    }
    *(iVar7 + 0x1c) = *(param_1 + 0x30) / *(iVar7 + 0x18);
    uVar3 = *(iVar7 + 0x14);
    if ((*(iVar7 + 0x14) == 0) || (*(param_1 + 0x40) % uVar3 != 0)) {
        uVar3 = 0x60;
        if (0x5f < *(param_1 + 0x40)) {
            do {
                if (*(param_1 + 0x40) % uVar3 == 0) goto code_r0x0001c9bb;
                uVar3 = uVar3 + 2;
            } while (uVar3 <= *(param_1 + 0x40));
        }
    }
    else {
code_r0x0001c9bb:
        *(iVar7 + 0x20) = uVar3;
    }
    if ((*(param_1 + 0x10) != 5) ||
       ((*(param_1 + 0x30) % *(iVar7 + 0x1c) == 0 && (14999 < *(iVar7 + 0x20) * *(iVar7 + 0x1c))))) {
        puVar5 = 0x1a010;
        puVar8 = iVar7 + 100;
        iVar2 = 0xe;
        do {
            uVar3 = *puVar5;
            puVar5 = puVar5 + 1;
            *puVar8 = uVar3 >> 6;
            puVar8 = puVar8 + 1;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        uVar3 = *(iVar7 + 0x10) >> 4;
        if (uVar3 == 6) {
            uStack_1 = 0;
        }
        else if (uVar3 == 8) {
            uStack_1 = 1;
        }
        else if (uVar3 == 10) {
            uStack_1 = 2;
        }
        else if (uVar3 == 0xc) {
            uStack_1 = 3;
        }
        else {
            if (uVar3 != 0xf) {
                return 0x80000002;
            }
            uStack_1 = 4;
        }
        iVar2 = *(iVar7 + 0xc);
        if (iVar2 == 2) {
            iVar2 = 0;
        }
        else if (iVar2 == 4) {
            iVar2 = 1;
        }
        else if (iVar2 == 8) {
            iVar2 = 2;
        }
        else if (iVar2 == 0x10) {
            iVar2 = 3;
        }
        else {
            if (iVar2 != 0x20) {
                return 0x80000002;
            }
            iVar2 = 4;
        }
        iVar9 = 0xf;
        iVar2 = (uStack_1 * 5 + iVar2) * 0xd0;
        *(iVar7 + 0x2c) = *(iVar2 + 0x17400);
        *(iVar7 + 0x34) = *(iVar2 + 0x17404);
        *(iVar7 + 0x38) = *(iVar2 + 0x17408);
        *(iVar7 + 0x3c) = *(iVar2 + 0x1740c);
        *(iVar7 + 0x40) = *(iVar2 + 0x17410);
        *(iVar7 + 0x28) = *(iVar2 + 0x17414);
        *(iVar7 + 0x24) = *(iVar2 + 0x17418);
        puVar4 = iVar2 + 0x17420;
        puVar6 = iVar7 + 0xa0;
        do {
            puVar6[-1] = puVar4[-1];
            *puVar6 = *puVar4;
            puVar6[1] = puVar4[1];
            iVar9 = iVar9 + -1;
            puVar4 = puVar4 + 3;
            puVar6 = puVar6 + 3;
        } while (iVar9 != 0);
        if (*(iVar7 + 0x38) < 0x2000) {
            *(iVar7 + 0x44) = 0x10000 / (0x2000 - *(iVar7 + 0x38));
            return 0;
        }
    }
    return 0x80000002;
}


/* fcn.0001c730 @ 0x1c730 */

uint __fastcall fcn.0001c730(int param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uStack_c;
    
    if ((*(param_1 + 0x10) == 1) || (*(param_1 + 0x10) == 5)) {
        iVar7 = *(param_1 + 0x8c) + 0xa8;
    }
    else {
        iVar7 = *(param_1 + 0x8c) + 0x44;
    }
    uVar1 = fcn.0001bfb0();
    uStack_c = *(iVar7 + 0x1c) / 3;
    uVar8 = (-(10 < uVar1) & 0x10) + 0x30;
    if (*(iVar7 + 0x1c) % 3 != 0) {
        uStack_c = uStack_c + 1;
    }
    uVar2 = *(iVar7 + 0x10) * *(iVar7 + 0x1c);
    uVar6 = uVar2 >> 7;
    if ((uVar2 & 0x7f) != 0) {
        uVar6 = uVar6 + 1;
    }
    *(iVar7 + 0x5c) = uVar6;
    if (*(iVar7 + 0x17) == '\0') {
        iVar9 = (uVar8 + uVar1 * 4) * 3 + 2;
    }
    else {
        iVar9 = (uVar1 * 4 + 2 + uVar8) * 3;
    }
    do {
        if ((*(iVar7 + 0x20) * uVar6 * 8 - iVar9) % uVar8 == 0) break;
        iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    if (uStack_c < *(iVar7 + 0x44) - 8U) {
        *(iVar7 + 0x44) = uStack_c + 8;
    }
    if (*(iVar7 + 0x44) < 9) {
        *(iVar7 + 0x48) = 0xfff;
    }
    else {
        *(iVar7 + 0x48) = uStack_c / (*(iVar7 + 0x44) - 8);
    }
    uVar8 = *(iVar7 + 0x2c) * *(iVar7 + 0x10);
    uVar2 = (iVar9 - (uVar8 + 8 >> 4)) + 0x2000;
    *(iVar7 + 0x58) = uVar2;
    if (uVar2 < 0x2000) {
        uVar3 = 0x10000 / (0x2000 - uVar2);
        uVar6 = *(iVar7 + 0x20);
        if (uVar6 < 2) {
            *(iVar7 + 0x50) = 0;
        }
        else {
            uVar4 = *(iVar7 + 0x34) << 0xb;
            uVar5 = uVar4 / (uVar6 - 1);
            if (uVar4 % (uVar6 - 1) != 0) {
                uVar5 = uVar5 + 1;
            }
            uVar6 = *(iVar7 + 0x20);
            *(iVar7 + 0x50) = uVar5;
        }
        if (*(iVar7 + 0x50) < 0x10000) {
            uVar4 = ((iVar9 - *(iVar7 + 0x38)) + 0x2000) * 0x800;
            uVar5 = uVar4 / (uVar6 * uStack_c);
            if (uVar4 % (uVar6 * uStack_c) != 0) {
                uVar5 = uVar5 + 1;
            }
            *(iVar7 + 0x54) = uVar5;
            if (uVar3 < 10) {
                *(iVar7 + 0x4c) = 0;
            }
            else {
                *(iVar7 + 0x4c) = (uVar2 * 0x800) / ((*(iVar7 + 0x50) + uVar5) * (uVar3 - 9));
            }
            if (*(iVar7 + 0x4c) < 0x10000) {
                uVar8 = (((*(iVar7 + 0x34) * uStack_c + (uVar8 >> 4)) - *(iVar7 + 0x38)) + 0x2000) * 0x10;
                uVar2 = uVar8 / *(iVar7 + 0x10);
                if (uVar8 % *(iVar7 + 0x10) != 0) {
                    uVar2 = uVar2 + 1;
                }
                *(iVar7 + 0x30) = uVar2 - *(iVar7 + 0x2c);
                return 0;
            }
        }
    }
    return 0x80000002;
}


/* fcn.0001c338 @ 0x1c338 */

void __fastcall fcn.0001c338(int param_1,ushort *param_2)

{
    uchar uVar1;
    char cVar2;
    uint16_t uVar3;
    ushort *puVar4;
    uint8_t uVar5;
    uchar *puVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    uint16_t *puVar10;
    uint16_t *puVar11;
    
    if ((*(param_1 + 0x10) == 1) || (*(param_1 + 0x10) == 5)) {
        iVar9 = *(param_1 + 0x8c) + 0xa8;
    }
    else {
        iVar9 = *(param_1 + 0x8c) + 0x44;
    }
    if ((iVar9 != 0) && (param_2 != NULL)) {
        cVar2 = fcn.0001bfb0();
        *param_2 = 0x11;
        uVar5 = cVar2 << 4 | *(param_2 + 3) & 0xf;
        *(param_2 + 3) = uVar5;
        *(param_2 + 3) = (*(iVar9 + 10) ^ uVar5) & 0xf ^ uVar5;
        uVar3 = (*(iVar9 + 0x16) & 1) << 5 | param_2[2] & 0xffd3 | 0x10;
        param_2[2] = uVar3;
        param_2[2] = (*(iVar9 + 0x10) >> 8 ^ uVar3) & 3 ^ uVar3;
        *(param_2 + 5) = *(iVar9 + 0x10);
        param_2[3] = *(param_1 + 0x40) >> 8 & 0xff | *(param_1 + 0x40) << 8;
        param_2[4] = *(param_1 + 0x30) >> 8 & 0xff | *(param_1 + 0x30) << 8;
        param_2[5] = *(iVar9 + 0x20) >> 8 & 0xff | *(iVar9 + 0x20) << 8;
        param_2[6] = *(iVar9 + 0x1c) >> 8 & 0xff | *(iVar9 + 0x1c) << 8;
        param_2[7] = *(iVar9 + 0x5c) >> 8 & 0xff | *(iVar9 + 0x5c) << 8;
        param_2[8] = param_2[8] ^ (*(iVar9 + 0x2c) >> 8 ^ param_2[8]) & 3;
        *(param_2 + 0x11) = *(iVar9 + 0x2c);
        param_2[9] = *(iVar9 + 0x30) >> 8 & 0xff | *(iVar9 + 0x30) << 8;
        param_2[10] = param_2[10] ^ (*(iVar9 + 0x44) << 8 ^ param_2[10]) & 0x3f00U;
        param_2[0xb] = *(iVar9 + 0x4c) >> 8 & 0xff | *(iVar9 + 0x4c) << 8;
        iVar7 = 0xf;
        param_2[0xc] = param_2[0xc] ^ (*(iVar9 + 0x48) >> 8 ^ param_2[0xc]) & 0xf;
        *(param_2 + 0x19) = *(iVar9 + 0x48);
        param_2[0xd] = param_2[0xd] ^ (*(iVar9 + 0x34) << 8 ^ param_2[0xd]) & 0x1f00U;
        param_2[0xe] = *(iVar9 + 0x50) >> 8 & 0xff | *(iVar9 + 0x50) << 8;
        param_2[0xf] = *(iVar9 + 0x54) >> 8 & 0xff | *(iVar9 + 0x54) << 8;
        param_2[0x10] = *(iVar9 + 0x38) >> 8 & 0xff | *(iVar9 + 0x38) << 8;
        param_2[0x11] = *(iVar9 + 0x58) >> 8 & 0xff | *(iVar9 + 0x58) << 8;
        *(param_2 + 0x12) = *(param_2 + 0x12) ^ (*(iVar9 + 0x3c) ^ *(param_2 + 0x12)) & 0x1f;
        *(param_2 + 0x25) = *(param_2 + 0x25) ^ (*(iVar9 + 0x40) ^ *(param_2 + 0x25)) & 0x1f;
        param_2[0x13] = 0x20;
        *(param_2 + 0x14) = *(param_2 + 0x14) & 0xf6 | 6;
        *(param_2 + 0x29) = *(param_2 + 0x29) ^ (*(iVar9 + 0x28) ^ *(param_2 + 0x29)) & 0x1f;
        uVar5 = *(iVar9 + 0x24);
        puVar4 = param_2 + 0x16;
        *(param_2 + 0x2b) = 0x33;
        *(param_2 + 0x15) = *(param_2 + 0x15) ^ (uVar5 ^ *(param_2 + 0x15)) & 0x1f;
        puVar6 = iVar9 + 100;
        iVar8 = 0xe;
        do {
            uVar1 = *puVar6;
            puVar6 = puVar6 + 4;
            *puVar4 = uVar1;
            puVar4 = puVar4 + 1;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        puVar11 = param_2 + 0x1d;
        puVar10 = iVar9 + 0xa0;
        do {
            uVar3 = (puVar10[-2] << 5 | *puVar10) << 6 | puVar10[2];
            *puVar11 = uVar3 << 8 | uVar3 >> 8;
            puVar11 = puVar11 + 1;
            iVar7 = iVar7 + -1;
            puVar10 = puVar10 + 6;
        } while (iVar7 != 0);
    }
    return;
}


/* fcn.0001bfdc @ 0x1bfdc */

void __fastcall fcn.0001bfdc(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    uint32_t uVar4;
    uint16_t *puVar5;
    int iVar6;
    int iVar7;
    uint32_t uStack_50;
    int aiStack_28 [2];
    uint uStack_20;
    ushort uStack_1c;
    ushort uStack_1a;
    ushort uStack_18;
    ushort uStack_16;
    ushort uStack_14;
    ushort uStack_12;
    ushort uStack_10;
    ushort uStack_e;
    ushort uStack_c;
    ushort uStack_a;
    ushort uStack_8;
    ushort uStack_6;
    uint16_t uStack_4;
    
    aiStack_28[0] = 0;
    iVar6 = *(param_1 + 0x6c);
    aiStack_28[1] = 0;
    if ((*(param_1 + 0x10) == 1) || (*(param_1 + 0x10) == 5)) {
        iVar7 = *(param_1 + 0x8c) + 0xa8;
    }
    else {
        iVar7 = *(param_1 + 0x8c) + 0x44;
    }
    if (iVar6 == 0) {
        aiStack_28[0] = 0x78000;
        aiStack_28[1] = 0x78100;
    }
    else if (iVar6 == 1) {
        aiStack_28[0] = 0x78200;
        aiStack_28[1] = 0x78300;
    }
    else if (iVar6 == 2) {
        aiStack_28[0] = 0x78400;
        aiStack_28[1] = 0x78500;
    }
    puVar5 = &uStack_20;
    iVar6 = 0xf;
    puVar3 = iVar7 + 0xa0;
    do {
        *puVar5 = (puVar3[2] << 5 | *puVar3) << 5 | puVar3[-2];
        puVar5 = puVar5 + 1;
        iVar6 = iVar6 + -1;
        puVar3 = puVar3 + 6;
    } while (iVar6 != 0);
    uVar2 = fcn.0001bfb0();
    if (*(iVar7 + 0x60) != 0) {
        uStack_50 = 0;
        iVar6 = *0x1a0c4;
        do {
            uVar4 = ((*(iVar7 + 10) << 4 | uVar2 & 0xff) << 4 | *(iVar7 + 1)) << 4 | *(iVar7 + 2);
            if (*(iVar7 + 0x16) != '\0') {
                uVar4 = uVar4 | 0x10000;
            }
            iVar1 = aiStack_28[uStack_50];
            *(iVar1 + 0x70 + iVar6) = uVar4 | 0x20000;
            *(iVar1 + 0x74 + iVar6) = *(iVar1 + 0x74 + iVar6) & 0x3ff | *(iVar7 + 0x10);
            iVar6 = *0x1a0c4;
            *(iVar1 + 0x78 + *0x1a0c4) = *(param_1 + 0x30) / *(iVar7 + 0x60) << 0x10 | *(param_1 + 0x40);
            *(iVar1 + 0x7c + iVar6) = *(iVar7 + 0x1c) << 0x10 | *(iVar7 + 0x20);
            *(iVar1 + 0x80 + iVar6) = *(iVar7 + 0x30) << 0x10 | *(iVar7 + 0x2c);
            *(iVar1 + 0x84 + iVar6) = *(iVar7 + 0x48) << 0x10 | *(iVar7 + 0x4c);
            *(iVar1 + 0x88 + iVar6) =
                 (((*(iVar7 + 0x40) & 0x1f) << 8 | *(iVar7 + 0x3c) & 0x1f) << 8 | *(iVar7 + 0x34) & 0x1f) << 8 |
                 *(iVar7 + 0x44) & 0x3f;
            *(iVar1 + 0x8c + iVar6) = *(iVar7 + 0x50) << 0x10 | *(iVar7 + 0x54);
            *(iVar1 + 0x90 + iVar6) = *(iVar7 + 0x38) << 0x10 | *(iVar7 + 0x58);
            *(iVar1 + 0x94 + iVar6) = 0x62000;
            *(iVar1 + 0x98 + iVar6) = (*(iVar7 + 0x24) & 0x1f | 0x3300) << 8 | *(iVar7 + 0x28) & 0x1f;
            *(iVar1 + 0xb0 + iVar6) =
                 ((*(param_1 + 0x30) / *(iVar7 + 0x60)) / *(iVar7 + 0x1c) | *(param_1 + 0x40) / *(iVar7 + 0x20) << 4) <<
                 0x10 | *(iVar7 + 0x5c);
            *(iVar1 + 0x54 + iVar6) =
                 ((*(iVar7 + 0x70) << 8 | *(iVar7 + 0x6c)) << 8 | *(iVar7 + 0x68)) << 8 | *(iVar7 + 100);
            *(iVar1 + 0x58 + iVar6) =
                 ((*(iVar7 + 0x80) << 8 | *(iVar7 + 0x7c)) << 8 | *(iVar7 + 0x78)) << 8 | *(iVar7 + 0x74);
            *(iVar1 + 0x5c + iVar6) =
                 ((*(iVar7 + 0x90) << 8 | *(iVar7 + 0x8c)) << 8 | *(iVar7 + 0x88)) << 8 | *(iVar7 + 0x84);
            uStack_50 = uStack_50 + 1;
            *(iVar1 + 0x60 + iVar6) = *(iVar7 + 0x98) << 8 | *(iVar7 + 0x94);
            *(iVar1 + 8 + iVar6) = uStack_20;
            *(iVar1 + 0xc + iVar6) = CONCAT22(uStack_1a,uStack_1c);
            *(iVar1 + 0x10 + iVar6) = CONCAT22(uStack_16,uStack_18);
            *(iVar1 + 0x14 + iVar6) = CONCAT22(uStack_12,uStack_14);
            *(iVar1 + 0x18 + iVar6) = CONCAT22(uStack_e,uStack_10);
            *(iVar1 + 0x1c + iVar6) = CONCAT22(uStack_a,uStack_c);
            *(iVar1 + 0x20 + iVar6) = CONCAT22(uStack_6,uStack_8);
            *(iVar1 + 0x24 + iVar6) = uStack_4;
        } while (uStack_50 < *(iVar7 + 0x60));
    }
    return;
}


/* fcn.0001c5d1 @ 0x1c5d1 */

int __fastcall fcn.0001c5d1(int param_1,int param_2)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    uint8_t uVar5;
    uint32_t uVar4;
    uint32_t uVar6;
    int iVar7;
    int iVar8;
    uint8_t *puVar9;
    ushort auStack_24 [2];
    uint8_t auStack_20 [4];
    uint32_t uStack_1c;
    int iStack_18;
    uint uStack_14;
    ushort uStack_10;
    uchar uStack_e;
    ushort uStack_c;
    uint uStack_8;
    ushort *puStack_4;
    
    iVar2 = *0x1a0c4;
    iStack_18 = param_2;
    uVar5 = 0;
    auStack_20[0] = 0;
    auStack_20[1] = 0x10;
    auStack_20[2] = 0x7f;
    auStack_20[3] = 0;
    iVar8 = *(param_1 + 0x78);
    uStack_14 = 0;
    if (param_2 == 0) {
        iVar8 = -0x7ffffffe;
    }
    else {
        uVar4 = 0;
        if (*(param_1 + 0x10) == 5) {
            uStack_8 = *(param_1 + 0x14);
            uStack_10 = 10;
            uStack_e = 1;
            uStack_c = 0x80;
            puStack_4 = param_2;
            iVar8 = fcn.0001f022();
            if (-1 < iVar8) {
                uStack_8 = *(param_1 + 0x14);
                uStack_c = 2;
                puStack_4 = auStack_24;
                uStack_10 = 7;
                uStack_e = 1;
                auStack_24[0] = 1;
                iVar8 = fcn.0001f022();
            }
        }
        else {
            if (iVar8 == 0) {
                iVar7 = 0x60200;
                iVar3 = 0x60350;
            }
            else if (iVar8 == 1) {
                iVar7 = 0x61200;
                iVar3 = 0x61350;
            }
            else {
                if (iVar8 != 2) {
                    return 0;
                }
                iVar7 = 0x62200;
                iVar3 = 0x62350;
            }
            uStack_1c = iVar7;
            puVar9 = auStack_20;
            uVar6 = 0;
            iVar8 = 4;
            do {
                uVar1 = uVar5 & 0x1f;
                uVar5 = uVar5 + 8;
                uVar6 = uVar6 | *puVar9 << uVar1;
                puVar9 = puVar9 + 1;
                iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            *(iVar3 + *0x1a0c4) = uVar6;
            do {
                uStack_1c = 0;
                uVar4 = uVar4 & 0xff;
                do {
                    if (0x7f < uVar4) break;
                    uStack_1c = uStack_1c | *((uVar4 & 0xff) + param_2) << ((uVar4 >> 8) << 3 & 0x1f);
                    uVar5 = (uVar4 >> 8) + 1;
                    uVar4 = CONCAT11(uVar5,uVar4 + 1);
                } while (uVar5 < 4);
                iVar8 = 0;
                *((uVar4 & 0xff) + iVar2 + iVar3) = uStack_1c;
            } while (uVar4 < 0x80);
            *(iVar7 + iVar2) = 0x1000000;
        }
    }
    return iVar8;
}


/* fcn.0001bda7 @ 0x1bda7 */

uint fcn.0001bda7(void)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    bool bVar4;
    
    uVar3 = 0;
    iVar1 = fcn.00020750();
    uVar2 = 0;
    bVar4 = *0x1a1a4 == '\0';
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) | 0x40000000;
    if (bVar4) {
        while( true ) {
            fcn.00013584();
            if ((*(*0x1a0c4 + iVar1) & 0x10000000) != 0) break;
            if (10 < uVar2) goto code_r0x0001bdf8;
            uVar2 = uVar2 + 1;
        }
        if (10 < uVar2) {
code_r0x0001bdf8:
            uVar3 = 0x80000012;
        }
    }
    return uVar3;
}


/* fcn.00020a41 @ 0x20a41 */
// decompilation failed

/* fcn.0001cd88 @ 0x1cd88 */

int __fastcall fcn.0001cd88(int param_1)

{
    int iVar1;
    int iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int32_t var_8h;
    int8_t var_4h;
    
    iVar1 = *(param_1 + 0x8c);
    uVar3 = 0;
    *(iVar1 + 0x2a) = 0;
    *(iVar1 + 0x28) = 0;
    var_8h = param_1;
    _var_4h = param_1;
    if ((*(iVar1 + 0x17) == '\0') && (*(iVar1 + 0x16) == '\0')) {
        uVar4 = 1;
    }
    else {
        uVar4 = 300;
    }
    do {
        iVar2 = fcn.00023aaa(8,5,*(iVar1 + 0x24),&var_8h);
        if (-1 < iVar2) break;
        uVar3 = uVar3 + 1;
    } while (uVar3 < uVar4);
    if ((uVar3 != uVar4) && (*(iVar1 + 0x28) = var_8h, 0x13 < var_8h)) {
        *(iVar1 + 0x29) = var_8h._1_1_;
        *(iVar1 + 0x2a) = var_8h._2_1_;
        *(iVar1 + 0x2b) = var_8h._3_1_;
        *(iVar1 + 0x2d) = 1;
        *(iVar1 + 0x2c) = var_4h;
    }
    return iVar2;
}


/* fcn.000231aa @ 0x231aa */
// decompilation failed

/* fcn.000237c7 @ 0x237c7 */

//WARNING: Possible PIC construction at 0x000237ac: Changing call to branch
//WARNING: Removing unreachable block (ram,0x000237b1)

int64_t __fastcall fcn.000237c7(int param_1,int param_2,uchar param_3,uint8_t param_4)

{
    uchar uVar1;
    int iVar2;
    char cVar3;
    uint uVar4;
    int iVar5;
    int iVar6;
    
    iVar5 = 0;
    iVar2 = 0;
    if (*(param_1 + 0x10) == 3) {
        iVar2 = *(param_1 + 0x8c);
    }
    if (param_2 == 0) {
        if (*(iVar2 + 0x194) == '\x06') {
            if (*(param_1 + 0x10) == 3) {
                iVar5 = *(param_1 + 0x8c);
            }
            param_2 = 0;
            if (*(iVar5 + 0x195) != '\x01') {
                *(iVar5 + 0x194) = param_3;
                uVar4 = 0;
                iVar2 = 0;
                if (*(param_1 + 0x10) == 3) {
                    iVar2 = *(param_1 + 0x8c);
                }
                if (*(iVar2 + 0x198) == 1) {
                    *(iVar2 + 0x195) = 1;
                }
                else if (*(iVar2 + 0x198) == 0x11) {
                    *(iVar2 + 0x195) = 2;
                }
                else {
                    uVar4 = 0x80000007;
                }
                return CONCAT44(iVar2,uVar4);
            }
code_r0x000237ea:
            return CONCAT44(param_2,0x80000007);
        }
    }
    else {
        if (param_2 == 1) {
            if (*(iVar2 + 0x198) != 0) goto code_r0x00023790;
        }
        else {
            if (param_2 != 2) {
                param_2 = param_2 + -4;
                goto code_r0x000237ea;
            }
code_r0x00023790:
            iVar2 = 0;
            if (*(param_1 + 0x10) == 3) {
                iVar2 = *(param_1 + 0x8c);
            }
            if (*(iVar2 + 0x195) != '\x01') {
                *(iVar2 + 0x195) = (*(iVar2 + 0x195) == '\x04') + '\x01';
                return param_4 << 0x20;
            }
        }
        iVar2 = 0;
        if (*(param_1 + 0x10) == 3) {
            iVar2 = *(param_1 + 0x8c);
        }
        if (*(iVar2 + 0x194) == '\x06') {
            return CONCAT44(param_4,0x80000007);
        }
        *(iVar2 + 0x195) = param_4;
    }
    iVar2 = *(param_1 + 0x10);
    uVar1 = 0;
    uVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    if (iVar2 == 3) {
        iVar5 = *(param_1 + 0x8c);
        cVar3 = *(iVar5 + 0x194);
code_r0x0002372a:
        if (cVar3 == '\x1e') {
            uVar1 = 0x14;
            goto code_r0x0002374a;
        }
        if (cVar3 == '\x14') {
            uVar1 = 10;
            goto code_r0x0002374a;
        }
        if (cVar3 == '\n') {
            uVar1 = 6;
            goto code_r0x0002374a;
        }
    }
    else if (iVar2 == 1) {
        iVar6 = *(param_1 + 0x8c);
        cVar3 = *(iVar6 + 0x8d);
        goto code_r0x0002372a;
    }
    uVar4 = 0x80000007;
code_r0x0002374a:
    if (iVar2 == 3) {
        *(iVar5 + 0x194) = uVar1;
    }
    else if (iVar2 == 1) {
        *(iVar6 + 0x8d) = uVar1;
    }
    return CONCAT44(iVar2,uVar4);
}


/* fcn.0001d2d7 @ 0x1d2d7 */

int __fastcall fcn.0001d2d7(int param_1)

{
    uint uVar1;
    uchar uVar2;
    int iVar3;
    int iVar4;
    uint uStack_4;
    
    uStack_4._0_3_ = param_1 & 0xffff;
    uStack_4 = CONCAT13(8,uStack_4);
    uVar1 = *(*(param_1 + 0x8c) + 0x24);
    iVar3 = fcn.00023c30(8,1,uVar1,&uStack_4 + 3);
    if (-1 < iVar3) {
        fcn.00013584();
        iVar3 = 1000;
        do {
            iVar4 = fcn.00023aaa(8,1,uVar1,&uStack_4 + 2);
            if (iVar4 < 0) {
                return iVar4;
            }
            if ((uStack_4 & 0x20000) != 0) break;
            fcn.00013584();
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        iVar3 = fcn.00023aaa(8,1,uVar1,&uStack_4 + 2);
        if (-1 < iVar3) {
            uVar2 = uStack_4._2_1_;
            uStack_4 = CONCAT13(uVar2,uStack_4) | 0x80000000;
            iVar3 = fcn.00023c30(8,1,uVar1,&uStack_4 + 3);
            if (-1 < iVar3) {
                iVar4 = 250000;
                do {
                    iVar3 = fcn.00023aaa(8,1,uVar1,&uStack_4 + 2);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                    if ((uStack_4 & 0x10000) != 0) {
                        iVar3 = fcn.00023aaa(8,1,uVar1,&uStack_4 + 2);
                        return iVar3;
                    }
                    fcn.00013584();
                    iVar4 = iVar4 + -10000;
                } while (iVar4 != 0);
            }
        }
    }
    return iVar3;
}


/* fcn.0002058d @ 0x2058d */

void __fastcall fcn.0002058d(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uStack_8;
    
    uStack_8 = 0;
    iVar2 = 0;
    if (*(param_1 + 0x1c) != '\x01') {
        return;
    }
    if (**(param_1 + 0x94) != '\0') {
        if (*0x1a0fc == 0) {
            iVar2 = 0x60404;
        }
        else if (*0x1a0fc == 1) {
            iVar2 = 0x61404;
        }
        else if (*0x1a0fc == 2) {
            iVar2 = 0x62404;
        }
        else if (*0x1a0fc == 3) {
            iVar2 = 0x63404;
        }
        iVar1 = *(param_1 + 0x88);
        if (iVar1 == 0) {
            uStack_8 = 1;
        }
        else if (iVar1 == 1) {
            uStack_8 = 2;
        }
        else if (iVar1 == 2) {
            uStack_8 = 3;
        }
        else if (iVar1 == 3) {
            uStack_8 = 4;
        }
        *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) & 4 | uStack_8;
        *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) | 0x10;
        return;
    }
    return;
}


/* fcn.0001a080 @ 0x1a080 */

void __fastcall fcn.0001a080(uint32_t param_1,char param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t var_8h;
    uint32_t var_4h;
    
    if ((*(param_1 + 0x94) != NULL) && (**(param_1 + 0x94) != '\0')) {
        if (*0x1a0e8 == 0) {
            iVar2 = 0x70060;
        }
        else if (*0x1a0e8 == 1) {
            iVar2 = 0x71060;
        }
        else {
            if (*0x1a0e8 != 2) {
                return;
            }
            iVar2 = 0x72060;
        }
        uVar1 = *(*0x1a0c4 + iVar2) & 0xc0ffffff;
        if (param_2 != '\0') {
            if ((*(*(param_1 + 0x94) + 5) != '\0') || (*(*(param_1 + 0x94) + 6) != '\0')) {
                uVar1 = uVar1 | 0x10000000;
            }
            var_4h = param_1;
            fcn.0001a027(&fcn.0001a080::var_4h);
            if (var_4h == 0) {
                if (param_1 == 1) {
                    uVar1 = uVar1 | 0x3000000;
                }
            }
            else if ((var_4h == 1) && (param_1 == 2)) {
                uVar1 = uVar1 | 0x6000000;
            }
        }
        *(*0x1a0c4 + iVar2) = uVar1;
    }
    return;
}


/* fcn.00020623 @ 0x20623 */

void __fastcall fcn.00020623(int param_1)

{
    int iVar1;
    
    if ((*(param_1 + 0x1c) == '\x01') && (**(param_1 + 0x94) != '\0')) {
        if (*0x1a0fc == 0) {
            iVar1 = 0x60404;
        }
        else if (*0x1a0fc == 1) {
            iVar1 = 0x61404;
        }
        else if (*0x1a0fc == 2) {
            iVar1 = 0x62404;
        }
        else {
            if (*0x1a0fc != 3) {
                return;
            }
            iVar1 = 0x63404;
        }
        *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 4;
        *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) & 0xffffffef;
    }
    return;
}


/* fcn.0001cf7d @ 0x1cf7d */

int __fastcall fcn.0001cf7d(int param_1)

{
    uint8_t *puVar1;
    uint8_t *puVar2;
    int iVar3;
    char cVar4;
    uint8_t uVar5;
    int iVar6;
    uint8_t uVar7;
    bool bVar8;
    uint8_t uStack_8;
    uint8_t uStack_7;
    uint8_t uStack_6;
    uint8_t auStack_5 [4];
    uchar uStack_1;
    
    iVar3 = *(param_1 + 0x8c);
    uStack_1 = 0;
    uStack_8 = 0;
    uStack_6 = 0;
    uStack_7 = 0;
    auStack_5[0] = 0;
    iVar6 = fcn.0001a3c0();
    if ((*(iVar6 + *0x1a0c4) < 0) && (cVar4 = fcn.000147e7(), cVar4 == '\0')) {
        if ((*(iVar3 + 0x16) == '\0') && (*(iVar3 + 0x17) == '\0')) {
            *(iVar3 + 0x24) = 3;
        }
        else {
            cVar4 = fcn.00020a41();
            if (cVar4 == '\0') {
                *(iVar3 + 0x24) = 2;
                goto code_r0x0001d000;
            }
            *(iVar3 + 0x24) = 1;
        }
        if (*(param_1 + 0x14) < 10) {
            *(*(param_1 + 0x14) + 0x1a0a4) = 1;
        }
    }
code_r0x0001d000:
    iVar6 = fcn.0001a3c0();
    if (-1 < *(iVar6 + *0x1a0c4)) {
        iVar6 = fcn.0001cd88();
        if (((-1 < iVar6) && (0x13 < *(iVar3 + 0x28))) && (*(iVar3 + 0x2d) == '\x01')) {
            auStack_5[1] = 0x55;
            fcn.00023c30(8,1,*(*(param_1 + 0x8c) + 0x24),auStack_5 + 1);
        }
        auStack_5[2] = 1;
        iVar6 = fcn.00023c30(8,1,*(iVar3 + 0x24),auStack_5 + 2);
        if (iVar6 < 0) {
            return iVar6;
        }
    }
    iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),auStack_5);
    if (iVar6 < 0) {
        return iVar6;
    }
    auStack_5[2] = auStack_5[0];
    if (auStack_5[0] < '\0') {
        *(iVar3 + 6) = 1;
    }
    else {
        *(iVar3 + 6) = 0;
    }
    iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),&uStack_7);
    if (iVar6 < 0) {
        return iVar6;
    }
    *(iVar3 + 0x1c) = uStack_7;
    *(iVar3 + 0x1d) = ~-(uStack_7 < 0x12) & auStack_5[2] & 0x7f;
    if (((0x11 < uStack_7) && (iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),auStack_5 + 3), iVar6 == 0)) &&
       ((auStack_5[3] & 1) != 0)) {
        *(iVar3 + 0x1a) = 1;
    }
    iVar6 = fcn.0001a3c0();
    if (-1 < *(iVar6 + *0x1a0c4)) {
        if (*(iVar3 + 0x1a) != '\0') {
            iVar6 = fcn.00023c30(8,1,*(iVar3 + 0x24),&uStack_1);
            fcn.00013584();
            if (iVar6 < 0) {
                return iVar6;
            }
        }
        fcn.00023694();
    }
    *(iVar3 + 5) = 0;
    iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),&uStack_8);
    bVar8 = iVar6 < 0;
    if (iVar6 == 0) {
        iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),&uStack_6);
        bVar8 = iVar6 < 0;
        if (iVar6 == 0) {
            if ((uStack_6 & 1) != 0) {
                *(iVar3 + 0x1b) = 1;
                if ((*(iVar3 + 4) != '\0') && (uStack_8 != 0)) {
                    *(iVar3 + 5) = 1;
                }
                goto code_r0x0001d203;
            }
            if ((*(iVar3 + 3) == '\0') || (uStack_8 == 0)) goto code_r0x0001d203;
            *(iVar3 + 5) = 1;
            bVar8 = false;
        }
    }
    if (bVar8) {
        return iVar6;
    }
code_r0x0001d203:
    fcn.0002328d();
    puVar1 = iVar3 + 0x2e;
    iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),puVar1);
    if (-1 < iVar6) {
        uVar5 = fcn.000231aa();
        if (*puVar1 < uVar5) {
            uVar5 = *puVar1;
        }
        puVar2 = iVar3 + 0x2f;
        *(iVar3 + 0x194) = uVar5;
        iVar6 = fcn.00023aaa(8,1,*(iVar3 + 0x24),puVar2);
        if (-1 < iVar6) {
            if ((*puVar1 == 4) || (*puVar1 == 1)) {
                *puVar1 = 0x1e;
            }
            uVar5 = *puVar2;
            if ((*(iVar3 + 0x1c) < 0x13) || ((uStack_8 & 0x80) == 0)) {
                if ((*(iVar3 + 0x1c) < 0x12) || ((uVar5 & 0x40) == 0)) {
                    *(iVar3 + 0x20) = 1;
                }
                else {
                    *(iVar3 + 0x20) = 2;
                }
            }
            else {
                *(iVar3 + 0x20) = 3;
            }
            uVar7 = uVar5 & 0x1f;
            if (*(iVar3 + 0x19) <= (uVar5 & 0x1f)) {
                uVar7 = *(iVar3 + 0x19);
            }
            *puVar2 = uVar5 & 0xe0 | uVar7;
        }
    }
    return iVar6;
}


/* fcn.0001dac4 @ 0x1dac4 */

//WARNING: Variable defined which should be unmapped: var_1h

uint32_t __fastcall fcn.0001dac4(uint32_t param_1)

{
    uint uVar1;
    uint32_t uVar2;
    unkbyte3 Var3;
    uchar uVar4;
    int32_t var_1h;
    
    uVar4 = 0;
    uVar1 = *(*(param_1 + 0x8c) + 0x24);
    uVar2 = fcn.00023aaa(8,1,uVar1,&var_1h);
    if (uVar2 < 0) {
code_r0x0001dafd:
        uVar2 = uVar2 & 0xffffff00;
    }
    else {
        var_1h._0_1_ = param_1 >> 0x18;
        Var3 = uVar2 >> 8;
        uVar2 = CONCAT31(Var3,var_1h);
        if (((param_1 & 0x1000000) != 0) && (uVar2 = CONCAT31(Var3,var_1h) & 0xffffff06, uVar2 == '\x02')) {
            uVar2 = fcn.00023aaa(8,1,uVar1,&var_1h);
            if ((uVar2 < 0) || (uVar2 = CONCAT31(uVar2 >> 8,var_1h) & 0xffffffbf, uVar2 == '\0'))
            goto code_r0x0001dafd;
            uVar4 = 1;
        }
        uVar2 = CONCAT31(uVar2 >> 8,uVar4);
    }
    return uVar2;
}


/* fcn.0001527a @ 0x1527a */

void __fastcall fcn.0001527a(int param_1)

{
    uint8_t uVar1;
    int iVar2;
    bool bVar3;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint8_t uVar8;
    uint32_t uVar7;
    int iStack_4;
    
    iVar6 = -0x7ffffff2;
    iStack_4 = param_1;
    if (*(param_1 + 0x28) == 1) {
        iVar2 = *(param_1 + 0x20);
        uVar1 = *(iVar2 + 0x7e);
        if (uVar1 == 0) {
            return;
        }
        uVar7 = 0x100;
        bVar3 = false;
        if (uVar1 == 0) {
            return;
        }
        do {
            uVar4 = (uVar7 >> 8) * 0x80;
            if (uVar4 < *(param_1 + 0x24)) {
                if (*(uVar4 + iVar2) == 'p') {
                    uVar8 = *(uVar4 + iVar2 + 1) >> 4;
                    if (uVar8 == 1) {
                        iVar6 = fcn.00014b35(&iStack_4);
                        if (-1 < iVar6) {
                            bVar3 = true;
                        }
                    }
                    else if ((uVar8 == 2) && (iVar6 = fcn.00014b35(&iStack_4), -1 < iVar6)) goto code_r0x00015377;
                    if (bVar3) goto code_r0x00015377;
                }
            }
            else if (iVar6 < 0) break;
            uVar8 = (uVar7 >> 8) + 1;
            uVar7 = uVar8 << 8;
        } while (uVar8 <= uVar1);
    }
    else {
        if (*(param_1 + 0x28) != 3) {
            return;
        }
        uVar1 = **(param_1 + 0x20) >> 4;
        if (uVar1 != 1) {
            if (uVar1 != 2) {
                return;
            }
            iVar6 = fcn.00014b35(&iStack_4);
            if (iVar6 < 0) {
                return;
            }
            goto code_r0x00015377;
        }
        iVar6 = fcn.00014b35(&iStack_4);
        if (iVar6 < 0) {
            return;
        }
        bVar3 = true;
    }
    if (!bVar3) {
        return;
    }
code_r0x00015377:
    puVar5 = fcn.0001354b();
    *(param_1 + 0x94) = puVar5;
    if (puVar5 != NULL) {
        *puVar5 = 1;
        *(*(param_1 + 0x94) + 1) = *(iStack_4 + 3) >> 7;
        if ((*(iStack_4 + 3) & 7) == 2) {
            *(*(param_1 + 0x94) + 2) = 1;
        }
        else {
            *(*(param_1 + 0x94) + 2) = 0;
        }
        *(*(param_1 + 0x94) + 3) = ((*(iStack_4 + 6) & 0xc3 | *(iStack_4 + 4) >> 2) >> 2) + 1;
        *(*(param_1 + 0x94) + 4) = (*(iStack_4 + 6) & 0x30 | *(iStack_4 + 4) & 0xf) + 1;
        *(*(param_1 + 0x94) + 5) = (*(iStack_4 + 6) & 0xc) << 2 | *(iStack_4 + 5) >> 4;
        *(*(param_1 + 0x94) + 6) = (*(iStack_4 + 6) & 3) << 4 | *(iStack_4 + 5) & 0xf;
        *(*(param_1 + 0x94) + 8) = *(iStack_4 + 7);
        *(*(param_1 + 0x94) + 0xc) = *(iStack_4 + 9);
        *(*(param_1 + 0x94) + 0x10) = *(iStack_4 + 0xb);
        *(*(param_1 + 0x94) + 0x11) = *(iStack_4 + 0x10);
        *(*(param_1 + 0x94) + 0x12) = *(iStack_4 + 0x11);
        *(*(param_1 + 0x94) + 0x13) = *(iStack_4 + 0x12);
        *(*(param_1 + 0x94) + 0x14) = *(iStack_4 + 0x13);
        *(*(param_1 + 0x94) + 0x15) = *(iStack_4 + 0x14);
        *(*(param_1 + 0x94) + 0x16) = *(iStack_4 + 0x15);
        *(*(param_1 + 0x94) + 0x17) = *(iStack_4 + 0x16);
        *(*(param_1 + 0x94) + 0x18) = *(iStack_4 + 0x17);
        *(*(param_1 + 0x94) + 0x19) = *(iStack_4 + 0x18);
    }
    return;
}


/* fcn.0001ce0e @ 0x1ce0e */

void __fastcall fcn.0001ce0e(int param_1)

{
    int iVar1;
    uchar uVar2;
    int iVar3;
    uint uStack_4;
    
    uStack_4._3_1_ = param_1 >> 0x18;
    uStack_4._0_3_ = param_1;
    iVar1 = *(param_1 + 0x8c);
    *(iVar1 + 0x19d) = 0;
    fcn.00023aaa(8,1,*(iVar1 + 0x24),&uStack_4 + 2);
    if ((uStack_4 & 0x10000) == 0) {
        return;
    }
    if ((uStack_4._2_1_ & 6) == 4) {
        iVar3 = fcn.00023aaa(8,1,*(iVar1 + 0x24),&uStack_4 + 2);
        if (iVar3 < 0) {
            return;
        }
        if ((uStack_4 & 0x200000) != 0) {
            *(iVar1 + 0x19d) = 1;
        }
    }
    if (*(iVar1 + 0x19d) != '\0') {
        fcn.000245a4();
        if ((*(*(param_1 + 0x8c) + 0x3e) & 1) == 0) {
            return;
        }
        iVar3 = fcn.00023aaa(8,1,*(iVar1 + 0x24),&uStack_4 + 2);
        if (iVar3 < 0) {
            return;
        }
        uVar2 = uStack_4._2_1_;
        uStack_4 = CONCAT13(uVar2,uStack_4);
        iVar3 = fcn.00023aaa(8,1,*(iVar1 + 0x24),&uStack_4 + 2);
        if (iVar3 < 0) {
            return;
        }
        if ((((uStack_4._3_1_ & 0xf) == 1) && ((uStack_4._3_1_ & 0xf0) == 0x20)) && ((uStack_4 & 0x10000) != 0)) {
            *(iVar1 + 0x19e) = 1;
        }
        else {
            *(iVar1 + 0x19e) = 0;
        }
    }
    if (((*(iVar1 + 0x19d) == '\x01') && (*(iVar1 + 0x19e) == '\0')) &&
       (iVar3 = fcn.00023aaa(8,1,*(iVar1 + 0x24),&uStack_4 + 2), -1 < iVar3)) {
        uVar2 = uStack_4._2_1_;
        uStack_4 = CONCAT13(uVar2,uStack_4) & 0xf7ffffff;
        fcn.00023c30(8,1,*(iVar1 + 0x24),&uStack_4 + 3);
    }
    return;
}


/* fcn.0001a530 @ 0x1a530 */

uint fcn.0001a530(void)

{
    uint8_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.0001a4c0();
    if (uVar1 == 0) {
        return 0;
    }
    if (uVar1 < 3) {
code_r0x0001a565:
        uVar2 = 1;
    }
    else {
        if (uVar1 != 3) {
            if ((uVar1 == 4) || (uVar1 == 8)) goto code_r0x0001a565;
            if (uVar1 != 0xc) {
                if (uVar1 != 0xf) {
                    return 0;
                }
                return 4;
            }
        }
        uVar2 = 2;
    }
    return uVar2;
}


/* fcn.0001dd50 @ 0x1dd50 */

void __cdecl fcn.0001dd50(int32_t arg_8h,int32_t arg_ch)

{
    int in_ECX;
    int in_EDX;
    
    if (*0x1a08f == '\0') {
        if (in_ECX == 8) {
            *(*0x1a0c4 + in_EDX) = *(*0x1a0c4 + in_EDX) & arg_8h | arg_ch;
            return;
        }
    }
    else {
        *(*0x1a0c4 + in_EDX) = *(*0x1a0c4 + in_EDX) & arg_8h | arg_ch;
    }
    *(*0x1a0c4 + 0x800 + in_EDX) = *(*0x1a0c4 + 0x800 + in_EDX) & arg_8h | arg_ch;
    return;
}


/* fcn.0001dd08 @ 0x1dd08 */

void __fastcall fcn.0001dd08(int param_1,int param_2,uint32_t param_3)

{
    if (*0x1a08f == '\0') {
        if (param_1 == 8) {
            *(*0x1a0c4 + param_2) = *(*0x1a0c4 + param_2) & param_3;
            return;
        }
    }
    else {
        *(*0x1a0c4 + param_2) = *(*0x1a0c4 + param_2) & param_3;
    }
    *(*0x1a0c4 + 0x800 + param_2) = *(*0x1a0c4 + 0x800 + param_2) & param_3;
    return;
}


/* fcn.0001e03f @ 0x1e03f */

uint __fastcall fcn.0001e03f(int param_1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int iStack_14;
    
    uVar1 = *(*(*(param_1 + 0x8c) + 0x1f8) + 6) >> 2;
    uVar2 = uVar1 & 3;
    if (*0x1a08f == '\0') {
        if (*(param_1 + 0x14) == 8) {
            *(*0x1a0c4 + 0x162028) = *(*0x1a0c4 + 0x162028) & 0xffffff0f;
            goto code_r0x0001e0b8;
        }
        if (*(param_1 + 0x14) != 9) goto code_r0x0001e0b8;
    }
    else {
        *(*0x1a0c4 + 0x162028) = *(*0x1a0c4 + 0x162028) & 0xffffff0f;
    }
    *(*0x1a0c4 + 0x6c028) = *(*0x1a0c4 + 0x6c028) & 0xffffff0f;
code_r0x0001e0b8:
    if ((uVar1 & 3) == 0) {
        iStack_14 = 0xb;
    }
    else if (uVar2 == 1) {
        iStack_14 = 10;
    }
    else if (uVar2 == 2) {
        iStack_14 = 8;
    }
    else {
        if (uVar2 != 3) {
            return 0x80000002;
        }
        iStack_14 = 0;
    }
    if (*0x1a08f == '\0') {
        if (*(param_1 + 0x14) == 8) {
            *(*0x1a0c4 + 0x162028) = *(*0x1a0c4 + 0x162028) & 0xffffff0f | iStack_14 << 4;
        }
        else if (*(param_1 + 0x14) == 9) {
            *(*0x1a0c4 + 0x6c028) = *(*0x1a0c4 + 0x6c028) & 0xffffff0f | iStack_14 << 4;
        }
    }
    else {
        *(*0x1a0c4 + 0x162028) = *(*0x1a0c4 + 0x162028) & 0xffffff0f | iStack_14 << 4;
        *(*0x1a0c4 + 0x6c028) = *(*0x1a0c4 + 0x6c028) & 0xffffff0f | iStack_14 << 4;
    }
    return 0;
}


/* fcn.0002523b @ 0x2523b */

void __fastcall fcn.0002523b(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint8_t uStack_c;
    uint8_t uStack_b;
    uint8_t uStack_a;
    uint8_t uStack_9;
    uint8_t uStack_8;
    uint8_t uStack_7;
    uint8_t uStack_6;
    uint8_t uStack_5;
    uint8_t uStack_4;
    uint8_t uStack_3;
    uint8_t uStack_2;
    
    cVar1 = *0x1a08f;
    fcn.00025163(0,0,0,0,&uStack_c);
    iVar4 = *0x1a0c4;
    if (cVar1 == '\0') {
        if (*(param_1 + 0x14) != 8) goto code_r0x0002529e;
        *(*0x19704 + *0x1a0c4) = *(*0x19708 + *0x1a0c4) & 0xfbffffff;
        *(*0x1970c + iVar4) = *(*0x1970c + iVar4) & 0xfbffffff;
code_r0x000256e7:
        if (*(param_1 + 0x14) != 8) goto code_r0x00025343;
        *(*0x19714 + *0x1a0c4) = *(*0x19714 + *0x1a0c4) | 0x80000000;
        *(*0x19718 + *0x1a0c4) = *(*0x19718 + *0x1a0c4) | 0x80000000;
        *(*0x1971c + *0x1a0c4) = *(*0x1971c + *0x1a0c4) & 0x7fffffff;
        *(*0x19720 + *0x1a0c4) = *(*0x19720 + *0x1a0c4) | 0x80000000;
        *(*0x19724 + *0x1a0c4) = *(*0x19724 + *0x1a0c4) & 0x7fffffff;
code_r0x0002575f:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) != 8) goto code_r0x00025405;
        *(*0x1973c + *0x1a0c4) = *(*0x19740 + *0x1a0c4) & 0xfffffdff | 0x500;
        *(iVar4 + 0x162a88) = *(iVar4 + 0x162a88) & 0xfffff8ff;
        *(*0x19744 + *0x1a0c4) = *(*0x19744 + *0x1a0c4) & 0xfffffdff | 0x500;
code_r0x000257bc:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) != 8) goto code_r0x0002548f;
        *(*0x19704 + *0x1a0c4) = *(*0x19708 + *0x1a0c4) & 0xfffffff7 | 4;
        *(*0x1970c + iVar4) = *(*0x1970c + iVar4) & 0xfffffff3;
code_r0x000257f7:
        if (*(param_1 + 0x14) != 8) goto code_r0x000254e0;
        *(*0x19734 + *0x1a0c4) = *(*0x19734 + *0x1a0c4) | 3;
code_r0x00025816:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) != 8) goto code_r0x0002552c;
        *(*0x19728 + *0x1a0c4) = *(*0x1972c + *0x1a0c4) & 0x7fffffff;
        *(*0x19730 + iVar4) = *(*0x19730 + iVar4) & 0x7fffffff;
code_r0x0002584c:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) != 8) goto code_r0x0002559d;
        *(*0x19728 + *0x1a0c4) = *(*0x1972c + *0x1a0c4) & 0xffebffff | 0x80000;
        *(*0x19730 + iVar4) = *(*0x19730 + iVar4) & 0xffebffff | 0x80000;
code_r0x00025890:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) != 8) {
            *(*0x19790 + *0x1a0c4) =
                 ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | *(*0x19794 + *0x1a0c4) & 0xffff4700 | uStack_7;
            uVar3 = ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | uStack_7;
            uVar5 = *(*0x19798 + iVar4);
            goto code_r0x000259a3;
        }
        *(*0x1973c + *0x1a0c4) =
             ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | *(*0x19740 + *0x1a0c4) & 0xffff4700 | uStack_7;
        *(*0x19744 + iVar4) = *(*0x19744 + iVar4) & 0xffff4700 | ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | uStack_7;
code_r0x00025905:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) == 8) {
            *(*0x19748 + *0x1a0c4) = (uStack_b << 0x18 ^ *(*0x1974c + *0x1a0c4)) & 0x7f000000 ^ *(*0x1974c + *0x1a0c4);
            iVar2 = *0x19750;
        }
        else {
            *(*0x1979c + *0x1a0c4) = (uStack_b << 0x18 ^ *(*0x197a0 + *0x1a0c4)) & 0x7f000000 ^ *(*0x197a0 + *0x1a0c4);
            iVar2 = *0x197a4;
        }
        uVar5 = *(iVar2 + iVar4);
    }
    else {
        *(*0x19704 + *0x1a0c4) = *(*0x19708 + *0x1a0c4) & 0xfbffffff;
        *(*0x1970c + iVar4) = *(*0x1970c + iVar4) & 0xfbffffff;
code_r0x0002529e:
        iVar4 = *0x1a0c4;
        *(*0x19758 + *0x1a0c4) = *(*0x1975c + *0x1a0c4) & 0xfbffffff;
        *(*0x19760 + iVar4) = *(*0x19760 + iVar4) & 0xfbffffff;
        if (cVar1 == '\0') goto code_r0x000256e7;
        *(*0x19714 + *0x1a0c4) = *(*0x19714 + *0x1a0c4) | 0x80000000;
        *(*0x19718 + *0x1a0c4) = *(*0x19718 + *0x1a0c4) | 0x80000000;
        *(*0x1971c + *0x1a0c4) = *(*0x1971c + *0x1a0c4) & 0x7fffffff;
        *(*0x19720 + *0x1a0c4) = *(*0x19720 + *0x1a0c4) | 0x80000000;
        *(*0x19724 + *0x1a0c4) = *(*0x19724 + *0x1a0c4) & 0x7fffffff;
code_r0x00025343:
        *(*0x19768 + *0x1a0c4) = *(*0x19768 + *0x1a0c4) | 0x80000000;
        *(*0x1976c + *0x1a0c4) = *(*0x1976c + *0x1a0c4) | 0x80000000;
        *(*0x19770 + *0x1a0c4) = *(*0x19770 + *0x1a0c4) & 0x7fffffff;
        *(*0x19774 + *0x1a0c4) = *(*0x19774 + *0x1a0c4) | 0x80000000;
        *(*0x19778 + *0x1a0c4) = *(*0x19778 + *0x1a0c4) & 0x7fffffff;
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x0002575f;
        *(*0x1973c + *0x1a0c4) = *(*0x19740 + *0x1a0c4) & 0xfffffdff | 0x500;
        *(iVar4 + 0x162a88) = *(iVar4 + 0x162a88) & 0xfffff8ff;
        *(*0x19744 + *0x1a0c4) = *(*0x19744 + *0x1a0c4) & 0xfffffdff | 0x500;
code_r0x00025405:
        iVar4 = *0x1a0c4;
        *(*0x19790 + *0x1a0c4) = *(*0x19794 + *0x1a0c4) & 0xfffffdff | 0x500;
        *(iVar4 + 0x6ca88) = *(iVar4 + 0x6ca88) & 0xfffff8ff;
        *(*0x19798 + *0x1a0c4) = *(*0x19798 + *0x1a0c4) & 0xfffffdff | 0x500;
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x000257bc;
        *(*0x19704 + *0x1a0c4) = *(*0x19708 + *0x1a0c4) & 0xfffffff7 | 4;
        *(*0x1970c + iVar4) = *(*0x1970c + iVar4) & 0xfffffff3;
code_r0x0002548f:
        iVar4 = *0x1a0c4;
        *(*0x19758 + *0x1a0c4) = *(*0x1975c + *0x1a0c4) & 0xfffffff7 | 4;
        *(*0x19760 + iVar4) = *(*0x19760 + iVar4) & 0xfffffff3;
        if (cVar1 == '\0') goto code_r0x000257f7;
        *(*0x19734 + *0x1a0c4) = *(*0x19734 + *0x1a0c4) | 3;
code_r0x000254e0:
        *(*0x19788 + *0x1a0c4) = *(*0x19788 + *0x1a0c4) | 3;
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x00025816;
        *(*0x19728 + *0x1a0c4) = *(*0x1972c + *0x1a0c4) & 0x7fffffff;
        *(*0x19730 + iVar4) = *(*0x19730 + iVar4) & 0x7fffffff;
code_r0x0002552c:
        iVar4 = *0x1a0c4;
        *(*0x1977c + *0x1a0c4) = *(*0x19780 + *0x1a0c4) & 0x7fffffff;
        *(*0x19784 + iVar4) = *(*0x19784 + iVar4) & 0x7fffffff;
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x0002584c;
        *(*0x19728 + *0x1a0c4) = *(*0x1972c + *0x1a0c4) & 0xffebffff | 0x80000;
        *(*0x19730 + iVar4) = *(*0x19730 + iVar4) & 0xffebffff | 0x80000;
code_r0x0002559d:
        iVar4 = *0x1a0c4;
        *(*0x1977c + *0x1a0c4) = *(*0x19780 + *0x1a0c4) & 0xffebffff | 0x80000;
        *(*0x19784 + iVar4) = *(*0x19784 + iVar4) & 0xffebffff | 0x80000;
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x00025890;
        *(*0x1973c + *0x1a0c4) =
             ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | *(*0x19740 + *0x1a0c4) & 0xffff4700 | uStack_7;
        *(*0x19744 + iVar4) = *(*0x19744 + iVar4) & 0xffff4700 | ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | uStack_7;
        iVar4 = *0x1a0c4;
        *(*0x19790 + *0x1a0c4) =
             ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | *(*0x19794 + *0x1a0c4) & 0xffff4700 | uStack_7;
        uVar3 = ((uStack_c & 8) * 2 | uStack_c & 7) << 0xb | uStack_7;
        uVar5 = *(*0x19798 + iVar4);
code_r0x000259a3:
        *(*0x19798 + iVar4) = uVar5 & 0xffff4700 | uVar3;
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x00025905;
        *(*0x19748 + *0x1a0c4) = (uStack_b << 0x18 ^ *(*0x1974c + *0x1a0c4)) & 0x7f000000 ^ *(*0x1974c + *0x1a0c4);
        *(*0x19750 + iVar4) = *(*0x19750 + iVar4) & 0x80ffffff | (uStack_b & 0x7f) << 0x18;
        iVar4 = *0x1a0c4;
        *(*0x1979c + *0x1a0c4) = (uStack_b << 0x18 ^ *(*0x197a0 + *0x1a0c4)) & 0x7f000000 ^ *(*0x197a0 + *0x1a0c4);
        uVar5 = *(*0x197a4 + iVar4);
        iVar2 = *0x197a4;
    }
    *(iVar2 + iVar4) = uVar5 & 0x80ffffff | (uStack_b & 0x7f) << 0x18;
    uVar5 = ((uStack_8 & 0x3f) << 6 | uStack_9 & 0x3f) << 6 | uStack_a & 0x3f;
    if (cVar1 == '\0') {
        if (*(param_1 + 0x14) != 8) {
            fcn.000148c5(uVar5);
            fcn.000148c5(uVar5);
            fcn.000148c5(uVar5);
            fcn.000148c5(uVar5);
            fcn.000148c5(uVar5);
            goto code_r0x00025cb0;
        }
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
code_r0x00025b8a:
        if (*(param_1 + 0x14) != 8) {
            *(*0x1977c + *0x1a0c4) =
                 (((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 | uStack_6 & 7)
                 << 3 | *(*0x19780 + *0x1a0c4) & 0x99ffffc7;
            fcn.000148c5((((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 |
                         uStack_6 & 7) << 3);
            goto code_r0x00025eb0;
        }
        *(*0x19728 + *0x1a0c4) =
             (((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 | uStack_6 & 7) <<
             3 | *(*0x1972c + *0x1a0c4) & 0x99ffffc7;
        fcn.000148c5((((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 |
                     uStack_6 & 7) << 3);
code_r0x00025c3f:
        iVar4 = *0x1a0c4;
        if (*(param_1 + 0x14) == 8) {
            *(*0x19728 + *0x1a0c4) = *(*0x1972c + *0x1a0c4) | 0x80000000;
            iVar2 = *0x19730;
            goto code_r0x00025f0b;
        }
    }
    else {
        *(*0x19714 + *0x1a0c4) = *(*0x19714 + *0x1a0c4) & 0xfffc0000 | uVar5;
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
        fcn.000148c5(uVar5);
code_r0x00025cb0:
        if (cVar1 == '\0') goto code_r0x00025b8a;
        *(*0x19728 + *0x1a0c4) =
             (((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 | uStack_6 & 7) <<
             3 | *(*0x1972c + *0x1a0c4) & 0x99ffffc7;
        fcn.000148c5((((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 |
                     uStack_6 & 7) << 3);
        *(*0x1977c + *0x1a0c4) =
             (((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 | uStack_6 & 7) <<
             3 | *(*0x19780 + *0x1a0c4) & 0x99ffffc7;
        fcn.000148c5((((((uStack_4 & 1) * 2 | uStack_5 & 1) << 3 | uStack_3 & 1) * 2 | uStack_2 & 1) << 0x16 |
                     uStack_6 & 7) << 3);
code_r0x00025eb0:
        iVar4 = *0x1a0c4;
        if (cVar1 == '\0') goto code_r0x00025c3f;
        *(*0x19728 + *0x1a0c4) = *(*0x1972c + *0x1a0c4) | 0x80000000;
        *(*0x19730 + iVar4) = *(*0x19730 + iVar4) | 0x80000000;
    }
    iVar4 = *0x1a0c4;
    *(*0x1977c + *0x1a0c4) = *(*0x19780 + *0x1a0c4) | 0x80000000;
    iVar2 = *0x19784;
code_r0x00025f0b:
    *(iVar2 + iVar4) = *(iVar2 + iVar4) | 0x80000000;
    return;
}


/* fcn.0001ddc7 @ 0x1ddc7 */

uint32_t __fastcall fcn.0001ddc7(int param_1,int param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar3 = 0;
    uVar2 = ((*0x1a1a4 != '\x01') - 1 & 0xc2ec) + 100;
    uVar4 = param_5;
    if (param_5 < uVar2) {
        uVar4 = uVar2;
    }
    if (uVar4 % uVar2 != 0) {
        uVar4 = uVar4 + (uVar2 - uVar4 % uVar2);
    }
    uVar5 = uVar4;
    if (*0x1a08f == '\x01') {
        param_5._0_1_ = '\x02';
    }
    else {
        param_5._0_1_ = '\x01';
        if (param_1 == 9) {
            param_2 = param_2 + 0x800;
        }
    }
    while( true ) {
        do {
            fcn.00013584();
            if (param_4 == 0) {
                uVar1 = (*(*0x1a0c4 + param_2) & param_3) != param_3;
            }
            else {
                uVar1 = *(*0x1a0c4 + param_2) & param_3;
            }
        } while ((uVar1 == 0) && (uVar5 = uVar5 - uVar2, uVar5 != 0));
        if (uVar5 == 0) break;
        if (*0x1a08f == '\x01') {
            param_2 = param_2 + 0x800;
            uVar5 = uVar4;
        }
        param_5._0_1_ = param_5 + -1;
        if (param_5 == '\0') {
code_r0x0001de7b:
            return -(*0x1a1a4 != '\x01') & uVar3;
        }
    }
    uVar3 = 0x80000012;
    goto code_r0x0001de7b;
}


/* fcn.0001e871 @ 0x1e871 */

void fcn.0001e871(void)

{
    uint uVar1;
    
    fcn.0001dd08(0x7fffffff);
    if (*0x1a1a4 == '\x01') {
        uVar1 = 5000000;
    }
    else {
        uVar1 = 500;
    }
    fcn.0001ddc7(0x100000,0,uVar1);
    if (*0x1a08f != '\0') {
        fcn.0001dd08(0xffffffef);
    }
    return;
}


/* fcn.0001dcde @ 0x1dcde */

void __fastcall fcn.0001dcde(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    iVar1 = *0x1a0c4;
    if (*0x1a08f == '\0') {
        if (param_1 == 8) {
            *(*0x1a0c4 + param_2) = param_3;
            return;
        }
    }
    else {
        *(*0x1a0c4 + param_2) = param_3;
    }
    *(iVar1 + 0x800 + param_2) = param_3;
    return;
}


/* fcn.0001eec8 @ 0x1eec8 */

uint32_t __fastcall fcn.0001eec8(uint8_t *param_1,int param_2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int iStack_c;
    int iStack_8;
    
    uVar4 = *(param_1 + 4);
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    if (*(param_1 + 8) == 8) {
        iVar6 = 0x6b0d0;
        iStack_8 = 0x6b100;
        iStack_c = 0x6b104;
    }
    else {
        iVar6 = 0x6b8d0;
        iStack_8 = 0x6b900;
        iStack_c = 0x6b904;
    }
    if (*(param_1 + 4) < 0xfb) {
        uVar8 = 0;
        if (uVar4 != 0) {
            do {
                uVar7 = 0;
                uVar9 = uVar7;
                while (*(*0x1a0c4 + iVar6) == '\0') {
                    if (10 < uVar9) goto code_r0x0001efcd;
                    fcn.00013584();
                    uVar9 = uVar9 + 1;
                }
                if (10 < uVar9) goto code_r0x0001efcd;
                uVar9 = uVar7;
                do {
                    if (uVar4 <= uVar8) break;
                    uVar5 = uVar7;
                    uVar7 = uVar7 + 8;
                    uVar9 = uVar9 | *(uVar8 + param_2) << (uVar5 & 0x1f);
                    uVar8 = uVar8 + 1;
                } while (uVar7 < 0x20);
                *(*0x1a0c4 + iStack_c) = uVar9;
            } while (uVar8 < uVar4);
        }
        uVar9 = 0;
        uVar8 = uVar9;
        while ((*(*0x1a0c4 + iVar6) & 0x1f00) < 0x100) {
            if (10 < uVar8) goto code_r0x0001efcd;
            fcn.00013584();
            uVar8 = uVar8 + 1;
        }
        if (uVar8 < 0xb) {
            *(*0x1a0c4 + iStack_8) =
                 *(*0x1a0c4 + iStack_8) & 0x1f000000 |
                 (uVar4 << 2 | uVar2) << 6 | ((uVar3 != 1) - 1 & 0xc0000000) + 0xc0000000 | uVar1;
        }
        else {
code_r0x0001efcd:
            uVar9 = 0x80000012;
        }
    }
    else {
        uVar9 = 0x80000002;
    }
    return uVar9;
}


/* fcn.0001edfa @ 0x1edfa */

uint __fastcall fcn.0001edfa(uint8_t *param_1,uint32_t param_2,int param_3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint uVar7;
    
    uVar1 = param_1[2];
    uVar2 = *param_1;
    uVar3 = param_1[1];
    uVar7 = 0;
    uVar6 = 0;
    iVar5 = ((*(param_1 + 8) == 8) - 1 & 0x800) + 0x6b100;
    iVar4 = *(param_1 + 8);
    while ((*(((iVar4 == 8) - 1 & 0x800) + 0x6b0d0 + *0x1a0c4) & 0x1f00) < 0x100) {
        if (10 < uVar6) goto code_r0x0001ee6f;
        fcn.00013584();
        uVar6 = uVar6 + 1;
    }
    if (uVar6 < 0xb) {
        *(iVar5 + *0x1a0c4) =
             *(iVar5 + *0x1a0c4) & 0x1f000000 |
             ((param_3 << 8 | param_2) << 2 | uVar3) << 6 | -(uVar1 != 1) & 0x40000000 | uVar2;
    }
    else {
code_r0x0001ee6f:
        uVar7 = 0x80000012;
    }
    return uVar7;
}


/* fcn.0001f9f6 @ 0x1f9f6 */

int __fastcall fcn.0001f9f6(int param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    bool bVar4;
    
    iVar3 = 0;
    iVar2 = *(param_1 + 0x8c);
    iVar1 = fcn.0001f93e();
    if (iVar1 == 0) {
        return -0x7ffffffe;
    }
    if (*(*(iVar2 + 0x208) + 0x2c) != 0) {
        fcn.0001f95a();
        *(*0x1a0c4 + 0xc2020) = *(*0x1a0c4 + 0xc2020) | 0x20000000;
        iVar3 = fcn.00018a0f();
        if (iVar3 < 0) {
            return iVar3;
        }
        fcn.0001f95a();
        iVar2 = fcn.0001f93e();
        if ((*0x1a1a4 == '\0') && (iVar2 != 0)) {
            do {
            } while (-1 < *(*(iVar2 + 4) + *0x1a0c4));
        }
        bVar4 = *0x1a1a4 == '\0';
        *(*0x1a0c4 + 0xc2020) = *(*0x1a0c4 + 0xc2020) & 0xdfffffff;
        if ((bVar4) && ((*(*(iVar1 + 8) + *0x1a0c4) & 1) == 0)) {
            return -0x7ffffffd;
        }
    }
    fcn.00013584();
    return iVar3;
}


/* fcn.00018a0f @ 0x18a0f */

int __fastcall fcn.00018a0f(int param_1,uint32_t param_2)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    
    iVar4 = 0;
    puVar2 = *(*(param_1 + 0x8c) + 0x208);
    uVar1 = *puVar2;
    puVar2 = *(puVar2 + (param_2 & 0xff) * 4 + 4);
    if (puVar2 == NULL) {
        return 0;
    }
    if ((*puVar2 == 0) || (0xb < *puVar2)) {
        return -0x7ffffffe;
    }
    iVar5 = 5;
    uVar3 = puVar2[5];
    do {
        if (uVar3 == 0) {
            return iVar4;
        }
        uVar3 = puVar2[iVar5];
        if (uVar3 == 1) {
            iVar5 = iVar5 + 6 + CONCAT11(puVar2[iVar5 + 5],puVar2[iVar5 + 4]);
            iVar4 = fcn.0001f022();
joined_r0x00018c4f:
            if (iVar4 < 0) {
                return iVar4;
            }
        }
        else {
            if (uVar3 != 2) {
                if (uVar3 == 3) {
                    iVar4 = iVar5 + 4;
                    iVar5 = iVar5 + 5;
                    if (uVar1 < 4) {
                        uVar3 = 0;
                    }
                    else {
                        uVar3 = puVar2[iVar4] >> 1 & 1;
                    }
                    if (uVar3 != 0) {
                        return -0x7ffffffd;
                    }
                    iVar4 = fcn.00024b60();
                }
                else {
                    if (uVar3 != 4) {
                        if (uVar3 == 5) {
                            iVar5 = iVar5 + 7 + puVar2[iVar5 + 7] + 1;
                        }
                        else {
                            if (uVar3 != 6) {
                                return -0x7ffffffe;
                            }
                            iVar5 = iVar5 + 0x11;
                        }
                        goto code_r0x00018c55;
                    }
                    iVar4 = iVar5 + 7;
                    iVar6 = iVar5 + 8;
                    iVar7 = iVar5 + 9;
                    iVar5 = iVar7 + puVar2[iVar6];
                    iVar4 = fcn.00024a64(puVar2[iVar4],puVar2[iVar6],puVar2 + iVar7);
                }
                goto joined_r0x00018c4f;
            }
            fcn.00013584();
            iVar5 = iVar5 + 6;
        }
code_r0x00018c55:
        uVar3 = puVar2[iVar5];
    } while( true );
}


/* fcn.0001de91 @ 0x1de91 */

uint32_t __fastcall fcn.0001de91(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    fcn.0001dd50(-2,1);
    if (*0x1a08f == '\x01') {
        uVar2 = fcn.00020831();
        uVar1 = fcn.00020831();
        uVar2 = uVar2 | uVar1;
    }
    else if ((*(param_1 + 0x14) == 8) || (*(param_1 + 0x14) == 9)) {
        uVar2 = fcn.00020831();
    }
    return uVar2;
}


/* fcn.00016a6c @ 0x16a6c */

int __fastcall fcn.00016a6c(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    
    uVar2 = 0;
    fcn.00015809();
    iVar1 = fcn.0001e373();
    if ((-1 < iVar1) && (iVar1 = fcn.000166de(&uStack_10,&iStack_18), -1 < iVar1)) {
        fcn.00015788(iStack_18 << 10 | uStack_14);
        fcn.00015788(0);
        fcn.000162bc(uStack_10,uStack_c,uStack_8);
        if (*(param_1 + 0x70) == 6) {
            uVar2 = 0;
        }
        else if (*(param_1 + 0x70) == 7) {
            uVar2 = 1;
        }
        if (*0x1a08f == '\x01') {
            uVar2 = uVar2 << 2 | uVar2;
        }
        else if (*(param_1 + 0x14) != 8) {
            uVar2 = uVar2 << 2;
        }
        fcn.00015788(uVar2);
        if (((*0x1a08f == '\x01') || (*(param_1 + 0x14) == 8)) || (*(param_1 + 0x14) == 9)) {
            uVar2 = 0;
        }
        fcn.00015788(uVar2);
        uVar2 = uStack_1c / 0x251c0;
        if (uStack_1c % 0x251c0 != 0) {
            uVar2 = uVar2 + 1;
        }
        uVar2 = uVar2 | 1;
        if (uVar2 < 3) {
            uVar2 = 3;
        }
        uVar3 = uVar2 - 1 >> 1;
        if (uVar2 * 8 - 0x11 < 0x11c) {
            uVar2 = uVar2 * 8 & 0x1ff;
            if (*0x1a08f == '\x01') {
                fcn.00015788(uVar2);
                fcn.00015788(uVar2);
                fcn.00015788(uVar2);
                fcn.00015788(uVar2);
                *(*0x1a0c4 + 0x1621a0) = *(*0x1a0c4 + 0x1621a0) & 0xff00ffff | uVar3 << 0x10;
                *(*0x1a0c4 + 0x6c1a0) = *(*0x1a0c4 + 0x6c1a0) & 0xff00ffff | uVar3 << 0x10;
            }
            else if (*(param_1 + 0x14) == 8) {
                fcn.00015788(uVar2);
                fcn.00015788(uVar2);
                *(*0x1a0c4 + 0x1621a0) = *(*0x1a0c4 + 0x1621a0) & 0xff00ffff | uVar3 << 0x10;
            }
            else {
                fcn.00015788(uVar2);
                fcn.00015788(uVar2);
                *(*0x1a0c4 + 0x6c1a0) = *(*0x1a0c4 + 0x6c1a0) & 0xff00ffff | uVar3 << 0x10;
            }
            fcn.00021941();
            iVar1 = fcn.00021759();
            if (-1 < iVar1) {
                iVar1 = fcn.000158a3();
                return iVar1;
            }
        }
        else {
            iVar1 = -0x7ffffffe;
        }
    }
    return iVar1;
}


/* fcn.0001e166 @ 0x1e166 */

int __fastcall fcn.0001e166(uint32_t param_1)

{
    int iVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t var_4h;
    
    iVar3 = fcn.0001e373();
    iVar1 = *0x1a0c4;
    iVar5 = 0;
    if (iVar3 < 0) {
        return iVar3;
    }
    uVar4 = (~-(1500000 < param_1) & 3) << 3;
    if (*0x1a08f == '\0') {
        if (*(param_1 + 0x14) == 8) {
            uVar4 = *(*0x1a0c4 + 0x162884) & 0xffffffe7 | uVar4;
            *(*0x1a0c4 + 0x162884) = uVar4;
            *(iVar1 + 0x162984) = uVar4;
            *(iVar1 + 0x162a84) = uVar4;
            *(iVar1 + 0x162b84) = uVar4;
            *(iVar1 + 0x162384) = uVar4;
            goto code_r0x0001e256;
        }
        if (*(param_1 + 0x14) != 9) goto code_r0x0001e256;
        uVar4 = *(*0x1a0c4 + 0x6c884) & 0xffffffe7 | uVar4;
    }
    else {
        uVar4 = *(*0x1a0c4 + 0x162884) & 0xffffffe7 | uVar4;
        *(*0x1a0c4 + 0x162884) = uVar4;
        *(iVar1 + 0x162984) = uVar4;
        *(iVar1 + 0x162a84) = uVar4;
        *(iVar1 + 0x162b84) = uVar4;
        *(iVar1 + 0x162384) = uVar4;
    }
    *(iVar1 + 0x6c884) = uVar4;
    *(iVar1 + 0x6c984) = uVar4;
    *(iVar1 + 0x6ca84) = uVar4;
    *(iVar1 + 0x6cb84) = uVar4;
    *(iVar1 + 0x6c384) = uVar4;
code_r0x0001e256:
    iVar2 = *0x1a0c4;
    if (param_1 == 2500000) {
        iVar5 = 3;
    }
    uVar4 = iVar5 * 2;
    if (*0x1a08f == '\0') {
        if (*(param_1 + 0x14) == 8) {
            *(*0x1a0c4 + 0x162a98) = *(iVar1 + 0x162898) & 0xffffff81 | uVar4;
            return iVar3;
        }
        if (*(param_1 + 0x14) != 9) {
            return iVar3;
        }
        uVar4 = *(iVar1 + 0x6c898) & 0xffffff81 | uVar4;
    }
    else {
        uVar4 = *(iVar1 + 0x162898) & 0xffffff81 | uVar4;
        *(*0x1a0c4 + 0x162a98) = uVar4;
    }
    *(iVar2 + 0x6ca98) = uVar4;
    return iVar3;
}


/* fcn.0001e2c7 @ 0x1e2c7 */

int __fastcall fcn.0001e2c7(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0001e03f();
    if (-1 < iVar1) {
        fcn.0002523b();
        if (*0x1a08f == '\0') {
            if ((*(param_1 + 0x14) != 8) && (*(param_1 + 0x14) != 9)) {
                return iVar1;
            }
        }
        else {
            fcn.0001a448();
        }
        fcn.0001a448();
    }
    return iVar1;
}


/* fcn.0001f299 @ 0x1f299 */

void __fastcall fcn.0001f299(int param_1)

{
    if (*0x1a08e == '\x01') {
        if ((*0x1a08f == '\x01') || (*(param_1 + 0x14) == 8)) {
            *(*0x1a0c4 + 0x48400) = *(*0x1a0c4 + 0x48400) | *(*0x1a0c4 + 0x48400) | 0x80080000;
        }
        if ((*0x1a08f == '\x01') || (*(param_1 + 0x14) == 9)) {
            *(*0x1a0c4 + 0x48408) = *(*0x1a0c4 + 0x48408) | *(*0x1a0c4 + 0x48408) | 0xc0000000;
        }
    }
    return;
}


/* fcn.0001e3a2 @ 0x1e3a2 */

uint __fastcall fcn.0001e3a2(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint uVar8;
    int iVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint32_t uStack_14;
    
    iVar10 = *(*(param_1 + 0x8c) + 0x1f8);
    uVar8 = fcn.0001e373();
    uVar1 = *(iVar10 + 0x68);
    uVar2 = *(iVar10 + 0x5e);
    uVar4 = *(iVar10 + 0x69);
    uVar5 = *(iVar10 + 0x62);
    iVar9 = 56000000 / uStack_14;
    if (56000000 % uStack_14 != 0) {
        iVar9 = iVar9 + 1;
    }
    cVar3 = *(iVar10 + 0x17);
    if (cVar3 == '\0') {
        uVar15 = 0x14;
    }
    else if (cVar3 == '\x01') {
        uVar15 = 10;
    }
    else {
        if (cVar3 != '\x02') {
            return 0x80000002;
        }
        uVar15 = 5;
    }
    uVar7 = 1000 / uVar15;
    if (*0x1a1a4 == '\x01') {
        fcn.0001dd50(-0x10000,10);
    }
    iVar10 = 200000 / uVar7;
    if (200000 % uVar7 != 0) {
        iVar10 = iVar10 + 1;
    }
    if (*0x1a1a4 != '\0') {
        iVar10 = 10;
    }
    fcn.0001dd50(-0x10000,iVar10);
    uVar6 = uVar1 << 2;
    uVar15 = uVar6 / uVar7;
    if (uVar6 % uVar7 != 0) {
        uVar15 = uVar15 + 1;
    }
    uVar6 = uVar4 - uVar1;
    uStack_1c = uVar6 / uVar7;
    if (uVar6 % uVar7 != 0) {
        uStack_1c = uStack_1c + 1;
    }
    uStack_18 = 0x96 / uVar7;
    if (0x96 % uVar7 != 0) {
        uStack_18 = uStack_18 + 1;
    }
    if (7 < uVar15) {
        uVar15 = 7;
    }
    if (0xf < uStack_1c) {
        uStack_1c = 0xf;
    }
    if (7 < uStack_18) {
        uStack_18 = 7;
    }
    uVar6 = uVar2 << 2;
    uVar11 = uVar6 / uVar7;
    if (uVar6 % uVar7 != 0) {
        uVar11 = uVar11 + 1;
    }
    uVar6 = uVar5 - uVar2;
    uVar12 = uVar6 / uVar7;
    if (uVar6 % uVar7 != 0) {
        uVar12 = uVar12 + 1;
    }
    uVar13 = (iVar9 + 100) / uVar7;
    if ((iVar9 + 100) % uVar7 != 0) {
        uVar13 = uVar13 + 1;
    }
    if (7 < uVar11) {
        uVar11 = 7;
    }
    if (0xf < uVar12) {
        uVar12 = 0xf;
    }
    if (7 < uVar13) {
        uVar13 = 7;
    }
    uVar14 = 0xf8f08700;
    uVar11 = ((uVar11 << 8 | uVar12) << 0xc | uVar13 | 0xff880080) << 8;
    if (1999999 < uStack_14) {
        uVar12 = 0x32 / uVar7;
        if (0x32U % uVar7 != 0) {
            uVar12 = uVar12 + 1;
        }
        if (3 < uVar12) {
            uVar12 = 3;
        }
        uVar14 = 0xf8f38700;
        uVar11 = uVar11 | (uVar12 | 8) << 0x10;
    }
    uVar14 = ~uVar14;
    fcn.0001dd50(uVar14,uVar11);
    if (*0x1a08f == '\x01') {
        *(*0x1a0c4 + 0x162180) = uVar14 & *(*0x1a0c4 + 0x162180) | uVar11;
code_r0x0001e5c0:
        *(*0x1a0c4 + 0x6c180) = uVar14 & *(*0x1a0c4 + 0x6c180) | uVar11;
    }
    else if (*(param_1 + 0x14) == 8) {
        *(*0x1a0c4 + 0x162180) = uVar14 & *(*0x1a0c4 + 0x162180) | uVar11;
    }
    else if (*(param_1 + 0x14) == 9) goto code_r0x0001e5c0;
    uStack_18 = (uVar15 << 8 | uStack_1c) << 0x10 | uStack_18;
    fcn.0001dd50(0x7870ff78,uStack_18 | 0x80800080);
    if (*0x1a08f == '\x01') {
        *(*0x1a0c4 + 0x162184) = *(*0x1a0c4 + 0x162184) & 0xf8f0fff8 | uStack_18 | 0x80800080;
        uVar15 = *(*0x1a0c4 + 0x6c184);
    }
    else {
        if (*(param_1 + 0x14) == 8) {
            *(*0x1a0c4 + 0x162184) = *(*0x1a0c4 + 0x162184) & 0xf8f0fff8 | uStack_18 | 0x80800080;
            goto code_r0x0001e67d;
        }
        if (*(param_1 + 0x14) != 9) goto code_r0x0001e67d;
        uVar15 = *(*0x1a0c4 + 0x6c184);
    }
    *(*0x1a0c4 + 0x6c184) = uVar15 & 0xf8f0fff8 | uStack_18 | 0x80800080;
code_r0x0001e67d:
    if (800000 < uStack_14) {
        return uVar8;
    }
    fcn.0001dd50(0x7fe0ffff,-0x80000000);
    if (*0x1a08f == '\x01') {
        *(*0x1a0c4 + 0x162188) = *(*0x1a0c4 + 0x162188) & 0xffe0ffff | 0x80000000;
        uVar15 = *(*0x1a0c4 + 0x6c188);
    }
    else {
        if (*(param_1 + 0x14) == 8) {
            *(*0x1a0c4 + 0x162188) = *(*0x1a0c4 + 0x162188) & 0xffe0ffff | 0x80000000;
            return uVar8;
        }
        if (*(param_1 + 0x14) != 9) {
            return uVar8;
        }
        uVar15 = *(*0x1a0c4 + 0x6c188);
    }
    *(*0x1a0c4 + 0x6c188) = uVar15 & 0xffe0ffff | 0x80000000;
    return uVar8;
}


/* fcn.0001e724 @ 0x1e724 */

uint fcn.0001e724(void)

{
    fcn.0001dd50(-0x20000,699);
    fcn.0001dd50(-0x20000,0xf);
    fcn.0001dd50(0xf0000,0x10002000);
    return 0;
}


/* fcn.0001f35a @ 0x1f35a */

void __fastcall fcn.0001f35a(int param_1)

{
    fcn.0001dcde(0xffffffff);
    if (*0x1a08e == '\x01') {
        if ((*0x1a08f == '\0') && (*(param_1 + 0x14) == 8)) {
            *(*0x1a0c4 + 0x6b070) = 0x7fffffff;
            return;
        }
        *(*0x1a0c4 + 0x6b870) = 0x7fffffff;
    }
    return;
}


/* fcn.0001e8ce @ 0x1e8ce */

uint __fastcall fcn.0001e8ce(uint32_t param_1)

{
    uint16_t uVar1;
    int iVar2;
    int extraout_ECX;
    uint32_t uVar3;
    uint unaff_EBX;
    uint unaff_EBP;
    uint unaff_ESI;
    uint32_t uVar4;
    uint unaff_EDI;
    uint uVar5;
    
    iVar2 = *(*(param_1 + 0x8c) + 0x1f8);
    uVar4 = *(iVar2 + 0x18) >> 1 & 1;
    uVar3 = param_1;
    fcn.0001e373();
    if (1499999 < uVar3) {
        uVar4 = uVar4 | 0x20;
    }
    if (*(extraout_ECX + 0xa8) == '\0') {
        uVar3 = ((*(iVar2 + 2) >> 10 & 0xf) - 1) * 0x10000;
    }
    else {
        uVar3 = 0x60000;
    }
    uVar3 = (*(iVar2 + 6) & 0x80) << 8 | uVar4 | uVar3;
    if ((*(iVar2 + 2) & 0x20) != 0) {
        uVar3 = uVar3 | 0x18000000;
        goto code_r0x0001e963;
    }
    if (*(extraout_ECX + 0xa8) == '\0') {
        uVar4 = *(iVar2 + 2) & 0xc0;
        if (uVar4 == 0x40) {
            uVar3 = uVar3 | 0x30000000;
            goto code_r0x0001e963;
        }
        if ((uVar4 != 0x80) && (uVar4 != 0xc0)) goto code_r0x0001e963;
    }
    uVar3 = uVar3 | 0x20000000;
code_r0x0001e963:
    fcn.0001dd50(-0x3807bf32,uVar3);
    iVar2 = *(*(param_1 + 0x8c) + 0x1f8);
    uVar1 = *(iVar2 + 6);
    if (*0x1a08f != '\0') {
        fcn.0001dd50(-0x11,0x10);
        *(*0x1a0c4 + 0x78000) =
             *(*0x1a0c4 + 0x78000) & 0x7efff000 |
             (-((*(iVar2 + 6) & 3) != 1) & 0x1000000) + 0x80000000 | *(param_1 + 0x30) >> 1;
        *(*0x1a0c4 + 0x78004) = *(*0x1a0c4 + 0x78004) & 0xfffff000 | *(param_1 + 0x30) >> 1;
    }
    uVar3 = (uVar1 >> 2 & 3) * 2;
    if (*0x1a0e8 != 0) {
        if (*0x1a0e8 == 1) {
            uVar3 = uVar3 | 0x5000;
        }
        else {
            if (*0x1a0e8 != 2) {
                return 0x80000002;
            }
            uVar3 = uVar3 | 0x6000;
        }
    }
    fcn.0001dd50(0x7fff8ff1,uVar3 | 0x80000000);
    if (*0x1a1a4 == '\x01') {
        uVar5 = 2000000;
    }
    else {
        uVar5 = 5000;
    }
    uVar5 = fcn.0001ddc7(0x100000,1,uVar5,unaff_EDI,unaff_ESI,unaff_EBP,unaff_EBX);
    return uVar5;
}


/* fcn.0001f0af @ 0x1f0af */

uint __fastcall fcn.0001f0af(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    ushort auStack_24 [2];
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    ushort uStack_14;
    uchar uStack_12;
    ushort uStack_10;
    uint uStack_c;
    ushort *puStack_8;
    
    auStack_24[0] = 0;
    if (*0x1a1a4 == '\x01') {
        fcn.00013584();
        return 0;
    }
    iVar1 = ((*(param_1 + 0x14) == 8) - 1 & 0x800) + 0x6b0d0;
    iVar2 = (*0x1a08f == '\x01') + 1;
    iStack_20 = iVar1;
    iStack_1c = iVar2;
    while( true ) {
        uVar3 = 0;
        while ((*(*0x1a0c4 + iVar1) & 0x1f00) != 0x1000) {
            if (10 < uVar3) {
                return 0x80000012;
            }
            fcn.00013584();
            uVar3 = uVar3 + 1;
            iVar1 = iStack_20;
        }
        if (10 < uVar3) {
            return 0x80000012;
        }
        uVar3 = 0;
        while (*(*0x1a0c4 + iVar1) != '@') {
            if (10 < uVar3) {
                return 0x80000012;
            }
            fcn.00013584();
            uVar3 = uVar3 + 1;
            iVar1 = iStack_20;
        }
        if (10 < uVar3) break;
        if (*0x1a08f != '\0') {
            iVar1 = 0x6b8d0;
            iStack_20 = 0x6b8d0;
        }
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
            puStack_8 = auStack_24;
            auStack_24[0] = 0;
            uStack_10 = 2;
            uStack_c = *(param_1 + 0x14);
            uStack_14 = 5;
            uStack_12 = 0;
            fcn.0001f022();
            if (*0x1a08f != '\0') {
                uStack_c = 9;
                fcn.0001f022();
            }
            iVar1 = ((*(param_1 + 0x14) == 8) - 1 & 0x800) + 0x6b0d8;
            iStack_20 = ((*(param_1 + 0x14) == 8) - 1 & 0x800) + 0x6b0d0;
            iVar2 = (*0x1a08f == '\x01') + 1;
            iStack_1c = iVar1;
            iStack_18 = iVar2;
            while( true ) {
                uVar3 = 0;
                while ((*(*0x1a0c4 + iStack_20) & 0x1f00) != 0x1000) {
                    if (10 < uVar3) {
                        return 0x80000012;
                    }
                    fcn.00013584();
                    uVar3 = uVar3 + 1;
                }
                if (10 < uVar3) {
                    return 0x80000012;
                }
                uVar3 = 0;
                while ((*(*0x1a0c4 + iVar1) & 0x20000) != 0) {
                    if (10 < uVar3) {
                        return 0x80000012;
                    }
                    fcn.00013584();
                    uVar3 = uVar3 + 1;
                }
                if (10 < uVar3) break;
                if (*0x1a08f != '\0') {
                    iStack_20 = 0x6b8d0;
                    iVar1 = 0x6b8d8;
                }
                iVar2 = iVar2 + -1;
                if (iVar2 == 0) {
                    return 0;
                }
            }
            return 0x80000012;
        }
    }
    return 0x80000012;
}


/* fcn.0001e986 @ 0x1e986 */

uint __fastcall fcn.0001e986(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t arg_ch;
    uint unaff_ESI;
    uint unaff_EDI;
    uint uVar4;
    
    iVar2 = *(*(param_1 + 0x8c) + 0x1f8);
    fcn.0001e871();
    arg_ch = 0;
    if ((*(iVar2 + 0x18) & 4) == 0) {
        arg_ch = 0x300;
    }
    fcn.0001dd50(-0x301,arg_ch);
    iVar2 = *(*(param_1 + 0x8c) + 0x1f8);
    uVar1 = *(iVar2 + 6);
    if (*0x1a08f != '\0') {
        fcn.0001dd50(-0x11,0x10);
        *(*0x1a0c4 + 0x78000) =
             *(*0x1a0c4 + 0x78000) & 0x7efff000 |
             (-((*(iVar2 + 6) & 3) != 1) & 0x1000000) + 0x80000000 | *(param_1 + 0x30) >> 1;
        *(*0x1a0c4 + 0x78004) = *(*0x1a0c4 + 0x78004) & 0xfffff000 | *(param_1 + 0x30) >> 1;
    }
    uVar3 = (uVar1 >> 2 & 3) * 2;
    if (*0x1a0e8 != 0) {
        if (*0x1a0e8 == 1) {
            uVar3 = uVar3 | 0x5000;
        }
        else {
            if (*0x1a0e8 != 2) {
                return 0x80000002;
            }
            uVar3 = uVar3 | 0x6000;
        }
    }
    fcn.0001dd50(0x7fff8ff1,uVar3 | 0x80000000);
    if (*0x1a1a4 == '\x01') {
        uVar4 = 2000000;
    }
    else {
        uVar4 = 5000;
    }
    uVar4 = fcn.0001ddc7(0x100000,1,uVar4,unaff_EDI,unaff_ESI);
    return uVar4;
}


/* fcn.0001ea8c @ 0x1ea8c */

uint __fastcall fcn.0001ea8c(int param_1)

{
    int iVar1;
    int iVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint uVar6;
    int iVar7;
    uint32_t uVar8;
    int iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uStack_24;
    uint32_t uStack_1c;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    
    iVar7 = *(param_1 + 0x8c);
    uVar10 = *(param_1 + 0x30);
    uVar11 = *(param_1 + 0x34) + uVar10;
    iVar1 = *(iVar7 + 0x1f8);
    uVar8 = *(param_1 + 0x3c);
    uVar4 = *(param_1 + 0x38);
    if (*0x1a08f == '\x01') {
        uVar11 = uVar11 >> 1;
        uVar10 = uVar10 >> 1;
        uVar8 = uVar8 >> 1;
        uVar4 = uVar4 >> 1;
    }
    uVar5 = uVar4 + uVar10;
    iStack_10 = *(param_1 + 0x40);
    iVar9 = *(param_1 + 0x44) + iStack_10;
    uStack_24 = uVar8 + uVar4 + uVar10;
    iStack_8 = *(param_1 + 0x4c);
    iStack_c = *(param_1 + 0x48);
    if (*(param_1 + 0x58) != '\0') {
        iStack_10 = iStack_10 * 2;
        iStack_8 = iStack_8 * 2;
        iStack_c = iStack_c * 2;
    }
    if ((*(iVar1 + 2) & 0xc0) == 0xc0) {
        fcn.0001e373();
        iVar2 = *(iVar1 + 0xb);
        uVar8 = iVar2 * uVar11;
        uVar11 = uVar8 / uStack_1c;
        if (uVar8 % uStack_1c != 0) {
            uVar11 = uVar11 + 1;
        }
        uVar8 = iVar2 * uVar5;
        uVar5 = uVar8 / uStack_1c;
        if (uVar8 % uStack_1c != 0) {
            uVar5 = uVar5 + 1;
        }
        uVar8 = uStack_24 * iVar2;
        uStack_24 = uVar8 / uStack_1c;
        if (uVar8 % uStack_1c != 0) {
            uStack_24 = uStack_24 + 1;
        }
    }
    uStack_1c = uVar10;
    if (*(iVar7 + 0xa8) != '\0') {
        iVar2 = *(iVar7 + 0x1c);
        uVar8 = iVar2 * uVar11;
        uVar11 = uVar8 / 0x18;
        if (uVar8 % 0x18 != 0) {
            uVar11 = uVar11 + 1;
        }
        uVar8 = iVar2 * uVar5;
        uVar5 = uVar8 / 0x18;
        if (uVar8 % 0x18 != 0) {
            uVar5 = uVar5 + 1;
        }
        uVar8 = iVar2 * uStack_24;
        uStack_24 = uVar8 / 0x18;
        if (uVar8 % 0x18 != 0) {
            uStack_24 = uStack_24 + 1;
        }
        uStack_1c = (iVar2 * uVar10) / 0x18;
        if ((iVar2 * uVar10) % 0x18 != 0) {
            uStack_1c = uStack_1c + 1;
        }
    }
    uVar8 = *(param_1 + 0x30);
    if ((uVar8 < 0x100) || ((*(iVar7 + 0x1c) == 0x12 && ((uVar8 & 3) != 0)))) goto code_r0x0001ebfe;
    if (*0x1a08e != '\0') {
        uVar11 = uVar10 + 0xa0;
    }
    if (*0x1a08f == '\0') {
        uVar8 = (uVar11 - 1) * 0x10000;
        uVar10 = uVar10 - 1;
    }
    else {
        uVar8 = (uVar8 >> 1) - 1;
        uVar10 = (uVar11 - 1) * 0x10000;
    }
    fcn.0001dcde(uVar8 | uVar10);
    if ((*(iVar1 + 2) & 0x20) == 0) {
        if (*(iVar7 + 0xa8) == '\x01') {
            if (0x9f < (uVar5 - uStack_1c) * 0x18) {
                uVar10 = (uVar11 - uStack_24) * 0x18;
                goto code_r0x0001ec84;
            }
        }
        else if (0x9f < (uVar5 - uStack_1c) * *(iVar7 + 0x1c)) {
            uVar10 = (uVar11 - uStack_24) * *(iVar7 + 0x1c);
code_r0x0001ec84:
            if (0x9f < uVar10) goto code_r0x0001ecab;
        }
code_r0x0001ebfe:
        uVar6 = 0x80000002;
    }
    else {
code_r0x0001ecab:
        fcn.0001dcde((uStack_24 - 1) * 0x10000 | uVar5 - 1);
        if (*0x1a08e != '\0') {
            fcn.0001e373();
            uVar3 = (*(iVar7 + 0x1c) * uVar11 * 1000) / 0;
            iVar9 = 0x1cc / uVar3;
            if (0x1cc % uVar3 != 0) {
                iVar9 = iVar9 + 1;
            }
            iVar9 = iVar9 + iStack_10;
        }
        if (*(param_1 + 0x58) == '\0') {
            iVar7 = iVar9 + -1;
        }
        else {
            iVar7 = iVar9 + -2;
        }
        fcn.0001dcde(iVar7 << 0x10 | iStack_10 - 1U);
        if (*(param_1 + 0x58) == '\0') {
            iVar9 = iVar9 + -1;
        }
        else {
            iVar9 = iVar9 + -2;
        }
        fcn.0001dcde(iVar9 << 0x10 | iStack_10 - 1U);
        fcn.0001dcde((iStack_10 + -1 + iStack_8 + iStack_c) * 0x10000 | iStack_10 + -1 + iStack_c);
        if (*(param_1 + 0x58) != '\0') {
            fcn.0001dcde(uVar5 - (uVar11 >> 1));
        }
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.0001edb5 @ 0x1edb5 */

void fcn.0001edb5(void)

{
    uint uVar1;
    
    fcn.0001dd50(0x7fffffff,-0x80000000);
    if (*0x1a1a4 == '\x01') {
        uVar1 = 2000000;
    }
    else {
        uVar1 = 34000;
    }
    fcn.0001ddc7(0x40000000,1,uVar1);
    return;
}


/* fcn.0001f3a7 @ 0x1f3a7 */

void __fastcall fcn.0001f3a7(int param_1)

{
    uint32_t uVar1;
    
    if ((*(*(*(param_1 + 0x8c) + 0x1f8) + 2) & 0x20) != 0) {
        uVar1 = fcn.0001dda3();
        uVar1 = uVar1 | 0x20000000;
        if (*0x1a08f != '\0') {
            *(*0x1a0c4 + 0x6b034) = uVar1;
            return;
        }
        if (*(param_1 + 0x14) == 8) {
            *(*0x1a0c4 + 0x6b034) = uVar1;
            return;
        }
        *(*0x1a0c4 + 0x6b834) = uVar1;
    }
    return;
}


/* fcn.0001a1f1 @ 0x1a1f1 */

void fcn.0001a1f1(void)

{
    int iVar1;
    
    iVar1 = 0;
    if (*0x1a0e8 == 0) {
        iVar1 = 0x44404;
    }
    else if (*0x1a0e8 == 1) {
        iVar1 = 0x44414;
    }
    else if (*0x1a0e8 == 2) {
        iVar1 = 0x44424;
    }
    *(*0x1a0c4 + iVar1) = *(*0x1a0c4 + iVar1) | 1;
    return;
}


/* fcn.0001fb56 @ 0x1fb56 */

int fcn.0001fb56(uint param_1,int param_2)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    
    iVar2 = *(param_2 + 0x8c);
    iVar3 = fcn.0001f93e();
    iVar4 = 0;
    if (iVar3 != 0) {
        fcn.0001fb27();
        cVar1 = *(*(param_2 + 0x8c) + 0x34);
        if (cVar1 == '\x02') {
            fcn.0002669b();
        }
        else if (cVar1 == '\x03') {
            fcn.00026756();
        }
        fcn.00013584();
        iVar4 = *(iVar2 + 0x208);
        if (*(iVar4 + 0x1c) != 0) {
            iVar4 = fcn.00018a0f();
            if ((-1 < iVar4) && (*0x1a1a4 == '\0')) {
                iVar4 = *(*0x1a0c4 + *(iVar3 + 8));
            }
        }
    }
    return iVar4;
}


/* fcn.0001e30c @ 0x1e30c */

uint __fastcall fcn.0001e30c(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t *puVar3;
    uint unaff_ESI;
    
    if (*0x1a08f == '\0') {
        if ((*(param_1 + 0x14) != 8) && (*(param_1 + 0x14) != 9)) goto code_r0x00013584;
        iVar2 = fcn.0001a3c0();
        puVar3 = iVar2 + *0x1a0c4;
        uVar1 = *puVar3;
    }
    else {
        iVar2 = fcn.0001a3c0();
        *(iVar2 + *0x1a0c4) = *(iVar2 + *0x1a0c4) & 0x7fffffff;
        iVar2 = fcn.0001a3c0();
        puVar3 = iVar2 + *0x1a0c4;
        uVar1 = *puVar3;
    }
    *puVar3 = uVar1 & 0x7fffffff;
code_r0x00013584:
    (**(*0x1a0bc + 4))(*0x1a0c0,*0x1a0bc,0x14,unaff_ESI);
    return 0x14;
}


/* fcn.00016d95 @ 0x16d95 */

void __fastcall fcn.00016d95(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    bool bVar4;
    
    uVar2 = 0;
    uVar1 = 0;
    iVar3 = 0;
    if (*0x1a08f == '\x01') {
        uVar1 = 0xc00;
    }
    else if (*(param_1 + 0x14) == 8) {
        uVar1 = 0x400;
    }
    else if (*(param_1 + 0x14) == 9) {
        uVar1 = 0x800;
    }
    *(*0x1a0c4 + 0x164280) = ~uVar1 & *(*0x1a0c4 + 0x164280) | uVar1;
    if (*(param_1 + 0x70) == 6) {
        iVar3 = 0x46010;
    }
    else if (*(param_1 + 0x70) == 7) {
        iVar3 = 0x46014;
    }
    fcn.00021941();
    fcn.00021759();
    bVar4 = *0x1a1a4 == '\0';
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0x7fffffff;
    if (bVar4) {
        uVar1 = 0;
        while( true ) {
            fcn.00013584();
            if (((*(*0x1a0c4 + iVar3) & 0x40000000) == 0) || (0x14 < uVar1)) break;
            uVar1 = uVar1 + 1;
        }
    }
    fcn.00021941();
    fcn.000217d2();
    bVar4 = *0x1a1a4 == '\0';
    *(*0x1a0c4 + iVar3) = *(*0x1a0c4 + iVar3) & 0xf7ffffff;
    if (bVar4) {
        while( true ) {
            fcn.00013584();
            if (((*(*0x1a0c4 + iVar3) & 0x4000000) == 0) || (10000 < uVar2)) break;
            uVar2 = uVar2 + 1;
        }
    }
    return;
}


/* fcn.0001dee2 @ 0x1dee2 */

void __fastcall fcn.0001dee2(int param_1)

{
    int iVar1;
    bool bVar2;
    
    if (*0x1a08f == '\x01') {
        bVar2 = *0x1a1a4 != '\0';
        *(*0x1a0c4 + 0x45454) = *(*0x1a0c4 + 0x45454) & 0xfffffffd;
        iVar1 = (bVar2 - 1 & 0xfc6c7932) + 60000000;
        do {
            if ((*(*0x1a0c4 + 0x45454) & 1) == 0) break;
            fcn.00013584();
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        bVar2 = *0x1a1a4 != '\0';
        *(*0x1a0c4 + 0x45454) = *(*0x1a0c4 + 0x45454) & 0xfffffff7;
        iVar1 = (bVar2 - 1 & 0xfc6c7932) + 60000000;
        do {
            if ((*(*0x1a0c4 + 0x45454) & 4) == 0) break;
            fcn.00013584();
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    else if (*(param_1 + 0x14) == 8) {
        bVar2 = *0x1a1a4 != '\0';
        *(*0x1a0c4 + 0x45454) = *(*0x1a0c4 + 0x45454) & 0xfffffffd;
        iVar1 = (bVar2 - 1 & 0xfc6c7932) + 60000000;
        do {
            if ((*(*0x1a0c4 + 0x45454) & 1) == 0) break;
            fcn.00013584();
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    else if (*(param_1 + 0x14) == 9) {
        bVar2 = *0x1a1a4 != '\0';
        *(*0x1a0c4 + 0x45454) = *(*0x1a0c4 + 0x45454) & 0xfffffff7;
        iVar1 = (bVar2 - 1 & 0xfc6c7932) + 60000000;
        do {
            if ((*(*0x1a0c4 + 0x45454) & 4) == 0) break;
            fcn.00013584();
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
    }
    fcn.0001dd08(0xfffffffe);
    return;
}


/* fcn.0001faef @ 0x1faef */

uint fcn.0001faef(void)

{
    uint uVar1;
    
    fcn.00013584();
    uVar1 = fcn.00018a0f();
    fcn.0001f95a();
    return uVar1;
}


/* fcn.0001f95a @ 0x1f95a */

void __fastcall fcn.0001f95a(uint param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = fcn.0001f93e();
    uVar1 = uVar2;
    if (*0x1a1a4 == '\0') {
        while (uVar1 != 0) {
            uVar1 = param_2 & *(*(uVar2 + 4) + *0x1a0c4);
        }
    }
    return;
}


/* fcn.00026806 @ 0x26806 */

void __fastcall fcn.00026806(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    ushort auStack_18 [2];
    ushort uStack_14;
    uchar uStack_12;
    ushort uStack_10;
    uint uStack_c;
    ushort *puStack_8;
    
    iVar2 = *(*(param_1 + 0x8c) + 0x1f8);
    uVar1 = *(iVar2 + 6);
    if ((uVar1 & 3) == 0) {
        uStack_c = *(param_1 + 0x14);
    }
    else if (((uVar1 & 0xc00) == 0) || ((uVar1 & 0xc00) == 0x800)) {
        uStack_c = 8;
    }
    else if ((uVar1 & 0xc00) == 0x400) {
        uStack_c = 9;
    }
    uStack_10 = 2;
    puStack_8 = auStack_18;
    auStack_18[0] = 0x53;
    uStack_14 = 0x15;
    uStack_12 = 1;
    iVar3 = fcn.0001f022();
    if (((-1 < iVar3) && ((uVar1 & 3) != 0)) && ((*(iVar2 + 6) & 0xc00) == 0x800)) {
        uStack_c = 9;
        fcn.0001f022();
    }
    return;
}


/* fcn.0002655e @ 0x2655e */

int __fastcall fcn.0002655e(int param_1)

{
    int iVar1;
    int iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int iVar5;
    uchar uStack_18;
    uchar uStack_17;
    ushort uStack_14;
    uchar uStack_12;
    ushort uStack_10;
    uint uStack_c;
    uchar *puStack_8;
    
    iVar1 = *(param_1 + 0x8c);
    iVar5 = 0;
    iVar2 = *(iVar1 + 0x1f8);
    uVar3 = *(iVar2 + 6) & 3;
    if (*(iVar1 + 0x32) == '\x02') {
        if (*(iVar1 + 0x44) < *(iVar1 + 0x3c)) {
            *(iVar1 + 0x3c) = *(iVar1 + 0x44);
        }
        if (uVar3 == 0) {
            uStack_c = *(param_1 + 0x14);
        }
        else {
            uVar4 = *(iVar2 + 6) & 0xc00;
            if ((uVar4 == 0) || (uVar4 == 0x800)) {
                uStack_c = 8;
            }
            else if (uVar4 == 0x400) {
                uStack_c = 9;
            }
        }
        uStack_18 = 0x51;
        uStack_14 = 0x15;
        uStack_12 = 1;
        uStack_17 = (*(iVar1 + 0x3c) * 0xff) / *(iVar1 + 0x44);
        uStack_10 = 2;
        puStack_8 = &uStack_18;
        iVar5 = fcn.0001f022();
        if (((-1 < iVar5) && (uVar3 != 0)) && ((*(iVar2 + 6) & 0xc00) == 0x800)) {
            uStack_c = 9;
            iVar5 = fcn.0001f022();
        }
    }
    return iVar5;
}


/* fcn.0001fb27 @ 0x1fb27 */

void __fastcall fcn.0001fb27(int param_1)

{
    char cVar1;
    
    cVar1 = *(*(param_1 + 0x8c) + 0x34);
    if (cVar1 == '\x02') {
        fcn.000264ed();
    }
    else if (cVar1 == '\x03') {
        fcn.0002655e();
    }
    return;
}


/* fcn.00026756 @ 0x26756 */

void __fastcall fcn.00026756(int param_1)

{
    uint16_t uVar1;
    int iVar2;
    int iVar3;
    ushort auStack_14 [2];
    ushort uStack_10;
    uchar uStack_e;
    ushort uStack_c;
    uint uStack_8;
    ushort *puStack_4;
    
    iVar2 = *(*(param_1 + 0x8c) + 0x1f8);
    uVar1 = *(iVar2 + 6);
    if ((uVar1 & 3) == 0) {
        uStack_8 = *(param_1 + 0x14);
    }
    else if (((uVar1 & 0xc00) == 0) || ((uVar1 & 0xc00) == 0x800)) {
        uStack_8 = 8;
    }
    else if ((uVar1 & 0xc00) == 0x400) {
        uStack_8 = 9;
    }
    uStack_c = 2;
    puStack_4 = auStack_14;
    auStack_14[0] = 0x2c53;
    uStack_10 = 0x15;
    uStack_e = 1;
    iVar3 = fcn.0001f022();
    if (((-1 < iVar3) && ((uVar1 & 3) != 0)) && ((*(iVar2 + 6) & 0xc00) == 0x800)) {
        uStack_8 = 9;
        fcn.0001f022();
    }
    return;
}


/* fcn.00020303 @ 0x20303 */

uint32_t __fastcall fcn.00020303(int param_1)

{
    uint32_t in_EAX;
    uint32_t uVar1;
    uchar uVar2;
    
    uVar2 = 0;
    if ((*(param_1 + 0x10) == 1) && (*(param_1 + 0x70) == 6)) {
        uVar1 = *(param_1 + 0x8c);
        if ((*(uVar1 + 0x210) == '\x01') ||
           ((1 < *(uVar1 + 0x218) &&
            ((*(param_1 + 0x14) == 0 ||
             ((*(param_1 + 0x14) == 1 && (uVar1 = *(*0x1a0c4 + 0x6fa88), (uVar1 & 0x800000) == 0)))))))) {
            uVar2 = 1;
        }
        return CONCAT31(uVar1 >> 8,uVar2);
    }
    return in_EAX & 0xffffff00;
}


/* fcn.00020245 @ 0x20245 */

void __fastcall fcn.00020245(int param_1)

{
    int iVar1;
    int iVar2;
    
    iVar1 = *0x1a0c4;
    if (*0x1a0fc == 0) {
        param_1 = 0x60000;
    }
    else if (*0x1a0fc == 1) {
        param_1 = 0x61000;
    }
    else if (*0x1a0fc == 2) {
        param_1 = 0x62000;
    }
    else if (*0x1a0fc == 3) {
        param_1 = 0x63000;
    }
    *(*0x1a0c4 + 0x6f000) = *(*0x1a0c4 + param_1);
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + 0x6f004) = *(iVar1 + 4 + param_1);
    iVar1 = *0x1a0c4;
    *(*0x1a0c4 + 0x6f008) = *(iVar2 + 8 + param_1);
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + 0x6f00c) = *(iVar1 + 0xc + param_1);
    iVar1 = *0x1a0c4;
    *(*0x1a0c4 + 0x6f010) = *(iVar2 + 0x10 + param_1);
    iVar2 = *0x1a0c4;
    *(*0x1a0c4 + 0x6f014) = *(iVar1 + 0x14 + param_1);
    iVar1 = *0x1a0c4;
    *(*0x1a0c4 + 0x6f040) = *(iVar2 + 0x40 + param_1);
    *(*0x1a0c4 + 0x6f044) = *(iVar1 + 0x44 + param_1);
    return;
}


/* fcn.000201a4 @ 0x201a4 */

uint fcn.000201a4(void)

{
    int iVar1;
    
    iVar1 = 10;
    *(*0x1a0c4 + 0x6fa88) = *(*0x1a0c4 + 0x6fa88) | 0x80000000;
    do {
        if ((*(*0x1a0c4 + 0x6fa88) & 0x800000) != 0) {
            return 0;
        }
        fcn.00013584();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x80000007;
}


/* fcn.00020e09 @ 0x20e09 */

void __fastcall fcn.00020e09(uint param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00020aa9();
    if ((iVar1 != 0) && (uVar2 = *(*(iVar1 + 4) + *0x1a0c4), *0x1a1a4 == '\0')) {
        while ((param_2 & uVar2) != 0) {
            uVar2 = *(*(iVar1 + 4) + *0x1a0c4);
        }
    }
    return;
}


/* fcn.00021001 @ 0x21001 */

uint __fastcall fcn.00021001(uint32_t *param_1,ushort *param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint8_t uVar4;
    uint uVar5;
    
    if (param_1 == NULL) {
        uVar5 = 0x80000007;
    }
    else {
        *param_2 = *param_1 / 10;
        *(param_2 + 1) = param_1[1];
        *(param_2 + 3) = param_1[2];
        *(param_2 + 2) = (param_1[2] >> 8 ^ param_1[1] >> 4) & 0xf ^ param_1[1] >> 4;
        *(param_2 + 5) = param_1[5];
        *(param_2 + 3) = param_1[6];
        *(param_2 + 7) = (param_1[6] >> 8 ^ param_1[5] >> 4) & 0xf ^ param_1[5] >> 4;
        *(param_2 + 4) = param_1[3];
        *(param_2 + 9) = param_1[4];
        *(param_2 + 5) = param_1[8] & 0xf | param_1[7] << 4;
        *(param_2 + 0xb) = param_1[3] >> 2 & 0xc0 | param_1[7] >> 2 & 0xc | param_1[8] >> 4 & 3 | param_1[4] >> 4 & 0x30
        ;
        *(param_2 + 6) = param_1[9];
        *(param_2 + 0xd) = param_1[10];
        uVar1 = param_1[10];
        uVar2 = param_1[9];
        uVar3 = param_1[9];
        *(param_2 + 0xf) = 0;
        *(param_2 + 7) = (uVar1 >> 8 ^ uVar2 >> 4) & 0xf ^ uVar3 >> 4;
        uVar4 = (param_1[0xc] == 2) * '\x02' + 0x18;
        if (param_1[0xd] == 2) {
            uVar4 = uVar4 | 4;
        }
        *(param_2 + 0x11) = uVar4;
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00010300 @ 0x10300 */

uint8_t * fcn.00010300(uint8_t *param_1,uint32_t param_2,uint8_t param_3)

{
    uint in_EAX;
    uint32_t uVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    ulong uVar4;
    uchar auVar5 [16];
    
    uVar1 = param_3;
    uVar2 = -param_1 & 0x3f;
    puVar3 = param_1;
    if (uVar2 != 0) {
        if (param_2 < uVar2) {
            uVar2 = param_2;
        }
        param_2 = param_2 - uVar2;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar3 = param_3;
            puVar3 = puVar3 + 1;
        }
    }
    uVar2 = param_2 & 0x3f;
    param_2 = param_2 >> 6;
    if (param_2 != 0) {
        uVar1 = CONCAT22(in_EAX >> 0x10,CONCAT11(param_3,param_3));
        auVar5 = pshuflw(ZEXT416(uVar1),ZEXT416(uVar1),0);
        uVar4 = auVar5._0_8_;
        do {
            *puVar3 = uVar4;
            *(puVar3 + 8) = uVar4;
            *(puVar3 + 0x10) = uVar4;
            *(puVar3 + 0x18) = uVar4;
            *(puVar3 + 0x20) = uVar4;
            *(puVar3 + 0x28) = uVar4;
            *(puVar3 + 0x30) = uVar4;
            *(puVar3 + 0x38) = uVar4;
            puVar3 = puVar3 + 0x40;
            param_2 = param_2 - 1;
        } while (param_2 != 0);
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.00021104 @ 0x21104 */

uint __thiscall fcn.00021104(int param_1,char *param_2,int param_3,char *param_4)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    char *pcVar4;
    char *pcVar5;
    uint32_t uVar6;
    char acStack_20 [12];
    uint16_t uStack_14;
    uint8_t uStack_12;
    uint8_t uStack_11;
    uint8_t uStack_10;
    uint8_t uStack_f;
    uint8_t uStack_e;
    uint8_t uStack_d;
    uint8_t uStack_8;
    uint8_t uStack_7;
    uint8_t uStack_6;
    
    acStack_20[0] = '\0';
    acStack_20[1] = '\0';
    acStack_20[2] = -0x60;
    acStack_20[3] = 'W';
    acStack_20[4] = 'I';
    acStack_20[5] = -0x65;
    acStack_20[6] = '&';
    acStack_20[7] = '\x10';
    acStack_20[8] = 'H';
    acStack_20[9] = 'O';
    iVar2 = fcn.00021001();
    if (iVar2 < 0) {
        uVar3 = 0x80000007;
    }
    else {
        pcVar4 = fcn.0001354b();
        if (pcVar4 == NULL) {
            uVar3 = 0x80000009;
        }
        else {
            pcVar4[0] = '\0';
            pcVar4[1] = -1;
            pcVar4[2] = -1;
            pcVar4[3] = -1;
            pcVar4[4] = -1;
            pcVar4[5] = -1;
            pcVar4[6] = -1;
            pcVar4[7] = '\0';
            if (param_2 == NULL) {
                fcn.00010300(pcVar4 + 8,10,0);
            }
            else if (pcVar4 + 8 != param_2) {
                section..text(pcVar4 + 8,param_2,10);
            }
            pcVar4[0x12] = '\x01';
            pcVar4[0x13] = '\x04';
            if (param_3 == 0) {
                pcVar4[0x14] = -0x80;
            }
            else {
                pcVar4[0x14] = (param_3 / 6 - 2U | 0xf8) << 4;
            }
            if ((*(param_1 + 0x10) == 1) || (*(param_1 + 0x10) == 5)) {
                pcVar4[0x15] = ((uStack_6 & 0xf0) << 4 | uStack_8) / 10;
                uVar6 = (uStack_6 & 0xf0) << 4 | uStack_8;
                if (4 < uVar6 % 10) {
                    pcVar4[0x15] = uVar6 / 10 + '\x01';
                }
                pcVar4[0x16] = ((uStack_6 & 0xf) << 8 | uStack_7) / 10;
                uVar6 = (uStack_6 & 0xf) << 8 | uStack_7;
                if (4 < uVar6 % 10) {
                    pcVar4[0x16] = uVar6 / 10 + '\x01';
                }
            }
            else {
                pcVar4[0x15] = -1;
                pcVar4[0x16] = -1;
            }
            pcVar4[0x17] = -1;
            pcVar4[0x18] = '/';
            if (pcVar4 + 0x19 != acStack_20) {
                section..text(pcVar4 + 0x19,acStack_20,10);
            }
            pcVar4[0x23] = '\0';
            pcVar4[0x24] = '\0';
            pcVar4[0x25] = '\0';
            fcn.00010300(pcVar4 + 0x26,0x10,1);
            if (pcVar4 + 0x36 != &uStack_14) {
                section..text(pcVar4 + 0x36,&uStack_14,0x12);
            }
            if (param_4 == NULL) {
                fcn.00010300(pcVar4 + 0x4d,0xd,0);
            }
            else {
                pcVar4[0x4b] = -4;
                if (pcVar4 + 0x4d != param_4) {
                    section..text(pcVar4 + 0x4d,param_4,0xd);
                }
            }
            pcVar4[0x5d] = -3;
            uVar6 = ((uStack_10 & 0xf0) << 4 | uStack_12) + ((uStack_10 & 0xf) << 8 | uStack_11);
            cVar1 = (uStack_14 * 10000) /
                    ((((uStack_d & 0xf0) << 4 | uStack_f) + ((uStack_d & 0xf) << 8 | uStack_e)) * uVar6);
            pcVar4[0x5f] = cVar1;
            pcVar4[0x60] = cVar1 + '\x01';
            iVar2 = 0x7f;
            cVar1 = (uStack_14 * 10) / uVar6;
            pcVar4[0x61] = cVar1;
            pcVar4[0x62] = cVar1 + '\x01';
            pcVar4[100] = '\x01';
            pcVar4[0x6f] = '\x10';
            cVar1 = '\0';
            pcVar4[99] = uStack_14 / 1000 + '\x01';
            pcVar4[0x7e] = '\0';
            pcVar5 = pcVar4;
            do {
                cVar1 = cVar1 + *pcVar5;
                pcVar5 = pcVar5 + 1;
                iVar2 = iVar2 + -1;
            } while (iVar2 != 0);
            pcVar4[0x7f] = -cVar1;
            uVar3 = 0;
            *(param_1 + 0x20) = pcVar4;
            *(param_1 + 0x28) = 1;
            *(param_1 + 0x24) = 0x80;
        }
    }
    return uVar3;
}


/* fcn.00021394 @ 0x21394 */

uint __fastcall fcn.00021394(int param_1,int *param_2,uchar *param_3)

{
    uint *puVar1;
    uint uVar2;
    char cVar3;
    uint32_t uVar4;
    char cVar5;
    uint32_t uVar6;
    uint uStack_a8;
    uint uStack_a4;
    ushort uStack_a0;
    uint uStack_9c;
    uint uStack_98;
    ushort uStack_94;
    uchar uStack_92;
    uint8_t uStack_91;
    int16_t iStack_90;
    int16_t iStack_8e;
    uint16_t uStack_8c;
    int16_t iStack_8a;
    int16_t iStack_88;
    int16_t iStack_86;
    uint16_t uStack_84;
    int16_t iStack_82;
    uint uStack_80;
    uint uStack_7c;
    uchar auStack_78 [10];
    ushort uStack_6e;
    ushort uStack_6b;
    uchar uStack_69;
    uchar uStack_68;
    uchar auStack_67 [101];
    uchar uStack_2;
    
    uStack_a8 = 0x57a00000;
    uVar6 = 0x80;
    uStack_a4 = 0x10269b49;
    uStack_a0 = 0x4f48;
    fcn.00010300(&uStack_80,0x80,0);
    fcn.00010300(&uStack_9c,0x1c,0);
    puVar1 = fcn.0001354b();
    if (puVar1 == NULL) {
        uVar2 = 0x80000009;
    }
    else {
        uStack_80 = 0xffffff00;
        uStack_7c = 0xffffff;
        uStack_6e = 0x401;
        if (param_3 == NULL) {
            fcn.00010300(auStack_78,10,0);
        }
        else if (auStack_78 != param_3) {
            section..text(auStack_78,param_3,10);
        }
        uStack_6b = 0xffff;
        uStack_69 = 0xff;
        section..text(auStack_67,&uStack_a8,10);
        iStack_90 = param_2[1] + -1;
        iStack_8e = param_2[2] + -1;
        uStack_91 = uStack_91 | 0x80;
        uStack_68 = 0x2f;
        uStack_2 = 1;
        uStack_8c = uStack_8c ^ (param_2[3] - 1U ^ uStack_8c) & 0x7fff;
        iStack_8a = param_2[4] + -1;
        uStack_9c = 0x172070;
        iStack_88 = param_2[5] + -1;
        uStack_98 = 0x14002200;
        iStack_86 = param_2[6] + -1;
        uStack_84 = uStack_84 ^ (param_2[7] - 1U ^ uStack_84) & 0x7fff;
        iStack_82 = param_2[8] + -1;
        uStack_94 = *param_2 + -1;
        uStack_92 = *param_2 + -1 >> 0x10;
        if (param_2[0xc] == 2) {
            uStack_8c = uStack_8c | 0x8000;
        }
        if (param_2[0xd] == 2) {
            uStack_84 = uStack_84 | 0x8000;
        }
        if (puVar1 != &uStack_80) {
            section..text(puVar1,&uStack_80,0x80);
        }
        if (puVar1 + 0x20 != &uStack_9c) {
            section..text(puVar1 + 0x20,&uStack_9c,0x1c);
        }
        uVar4 = 0;
        cVar5 = '\0';
        do {
            cVar5 = cVar5 + *(uVar4 + puVar1);
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0x7f);
        cVar3 = '\0';
        *(puVar1 + 0x7f) = -cVar5;
        do {
            cVar3 = cVar3 + *(uVar6 + puVar1);
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0xff);
        *(puVar1 + 0xff) = -cVar3;
        uVar2 = 0;
        *(param_1 + 0x20) = puVar1;
        *(param_1 + 0x28) = 1;
        *(param_1 + 0x24) = 0x100;
    }
    return uVar2;
}


/* fcn.000216d6 @ 0x216d6 */

uint __fastcall fcn.000216d6(uint32_t param_1)

{
    bool bVar1;
    
    if (param_1 < 0x170) {
        if (param_1 != 0x16f) {
            if (param_1 < 0xcd) {
                if (param_1 == 0xcc) {
                    return 3;
                }
                bVar1 = param_1 == 0xa3;
            }
            else {
                if (param_1 == 0xf4) {
                    return 3;
                }
                if (param_1 == 0x11d) {
                    return 3;
                }
                if (param_1 == 0x133) {
                    return 0;
                }
                if (param_1 == 0x138) {
                    return 0;
                }
                bVar1 = param_1 == 0x146;
            }
            if (!bVar1) {
                return 0;
            }
        }
    }
    else if (param_1 < 0x22d) {
        if (param_1 == 0x22c) {
            return 2;
        }
        if (((param_1 != 0x198) && (param_1 != 0x1c0)) && ((param_1 != 0x1e9 && (param_1 != 0x212)))) {
            if (param_1 != 0x228) {
                return 0;
            }
            return 2;
        }
    }
    else if ((((param_1 != 0x23b) && (param_1 != 0x264)) && (param_1 != 0x288)) && (param_1 != 0x28c)) {
        return 0;
    }
    return 3;
}


/* fcn.000156f0 @ 0x156f0 */

int __fastcall fcn.000156f0(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar1 = 0;
    iVar2 = 0;
    uVar3 = 0;
    if (param_1 == 4) {
        iVar1 = 0x4610c;
        uVar3 = 0x1000;
    }
    else if (param_1 == 5) {
        iVar1 = 0x46110;
        uVar3 = 0x2000;
    }
    else if (param_1 == 6) {
        iVar1 = 0x46114;
        uVar3 = 0x4000;
    }
    else if (param_1 == 7) {
        iVar1 = 0x46118;
        uVar3 = 0x200000;
    }
    if ((uVar3 & *(*0x1a0c4 + 0x164280)) == 0) {
        uVar3 = *(*0x1a0c4 + iVar1) >> 0x1c;
        if (uVar3 == 0xc) {
            iVar2 = 0x278d0;
        }
        else if (uVar3 == 0xd) {
            iVar2 = 270000;
        }
        else if (uVar3 == 0xe) {
            iVar2 = 540000;
        }
        else if (uVar3 == 0xf) {
            iVar2 = 810000;
        }
    }
    return iVar2 * 10;
}


/* fcn.00015589 @ 0x15589 */

//WARNING: Removing unreachable block (ram,0x000156e7)
//WARNING: Removing unreachable block (ram,0x00015639)
//WARNING: Removing unreachable block (ram,0x000156ae)

int __fastcall fcn.00015589(int param_1)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iVar5;
    uint8_t uVar6;
    ulong uVar7;
    uint uStack_1c;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    
    iVar1 = fcn.000154bc();
    uStack_1c = 0x8000;
    if (iVar1 == 0x9600) {
        iVar1 = 0x4b00;
        uStack_1c = 0x10000;
    }
    if (param_1 == 6) {
        iVar2 = *0x170f0;
    }
    else {
        iVar2 = 0;
        if (param_1 == 7) {
            iVar2 = *0x170f4;
        }
    }
    uVar4 = *(*0x1a0c4 + iVar2);
    fcn.000154f0();
    iVar2 = fcn.000268c7(uVar4 & 0x3ff,0,iVar1,0);
    uVar7 = fcn.000268c7(uVar4 >> 10 & 0x7fff,0,iVar1,0,uStack_1c,0);
    iVar1 = fcn.000268e0(uVar7);
    iVar5 = 0;
    uVar6 = 0;
    uVar4 = 0;
    do {
        if ((*(*0x1a0c4 + 0x164280) & 0x400 << (uVar6 & 0x1f)) == 0) {
            uVar3 = (3 << (uVar4 & 0x1f) & *(*0x1a0c4 + 0x164280)) >> (uVar4 & 0x1f);
            if (uVar3 == 0) {
                iVar5 = 6;
            }
            else if (uVar3 == 1) {
                iVar5 = 7;
            }
            if (iVar5 == param_1) {
                iVar1 = fcn.000268e0(iVar2 + iVar1,0,iStack_4 * iStack_8 * iStack_c * 5,0);
                return iVar1 * 10;
            }
        }
        uVar4 = uVar4 + 2;
        uVar6 = uVar6 + 1;
        if (2 < uVar4) {
            iVar1 = fcn.000268e0(iVar2 + iVar1,0,iStack_4 * iStack_8 * iStack_c,0);
            return iVar1;
        }
    } while( true );
}


/* fcn.000217ff @ 0x217ff */

uint32_t fcn.000217ff(void)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uStack_4;
    
    uVar5 = 0;
    if (*(*0x1a0c4 + 0x46070) < 0) {
        fcn.0001b22a();
        uStack_4 = fcn.000216d6();
    }
    else {
        uStack_4 = 0;
    }
    iVar6 = 6;
    do {
        cVar1 = fcn.000157a7();
        if (cVar1 == '\x01') {
            uVar3 = 0;
            if (5 < iVar6) {
                if (iVar6 < 8) {
                    uVar3 = fcn.00015589();
                }
                else if (iVar6 == 8) {
                    iVar4 = 4;
                    uVar3 = 0;
                    do {
                        uVar2 = fcn.000156f0();
                        if (uVar3 < uVar2) {
                            uVar3 = uVar2;
                        }
                        iVar4 = iVar4 + 1;
                    } while (iVar4 < 8);
                }
                else if (iVar6 - 9U < 4) {
                    uVar3 = 8100000;
                }
            }
            uVar3 = -(0x5aa320 < uVar3) & 2;
            if (uVar5 < uVar3) {
                uVar5 = uVar3;
            }
        }
        iVar6 = iVar6 + 1;
    } while (iVar6 < 0xd);
    if (uStack_4 <= uVar5) {
        uStack_4 = uVar5;
    }
    return uStack_4;
}


/* fcn.000218bb @ 0x218bb */

uint32_t fcn.000218bb(void)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    
    uVar3 = 0;
    if (*(*0x1a0c4 + 0x46070) < 0) {
        fcn.0001b22a();
        uVar2 = fcn.000216d6();
    }
    else {
        uVar2 = 0;
    }
    iVar4 = 1;
    do {
        cVar1 = fcn.000157a7();
        if ((cVar1 == '\x01') && (uVar3 < 3)) {
            uVar3 = 3;
        }
        iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (uVar2 <= uVar3) {
        uVar2 = uVar3;
    }
    return uVar2;
}


/* fcn.0002191a @ 0x2191a */

uint __fastcall fcn.0002191a(uint param_1)

{
    uint uVar1;
    
    if (*0x1a0d8 == 1) {
        uVar1 = fcn.000218bb(param_1);
    }
    else {
        if (1 < *0x1a0d8 - 2U) {
            return 0;
        }
        uVar1 = fcn.000217ff();
    }
    return uVar1;
}


/* fcn.0001b10e @ 0x1b10e */

uint32_t __fastcall fcn.0001b10e(uint32_t param_1)

{
    if (param_1 < 0x170) {
        if (((param_1 != 0x16f) && (param_1 != 0xa3)) &&
           (((param_1 != 0xac && (((param_1 != 0xf4 && (param_1 != 0x11d)) && (param_1 != 0x133)))) &&
            (param_1 != 0x146)))) {
            return param_1;
        }
    }
    else if ((((param_1 != 0x1c0) && (param_1 != 0x1e9)) && (param_1 != 0x212)) &&
            (((param_1 != 0x22c && (param_1 != 0x23b)) && (param_1 != 0x28c)))) {
        return param_1;
    }
    return param_1 + 1;
}


/* fcn.000219bc @ 0x219bc */

uint __fastcall fcn.000219bc(int param_1)

{
    int iVar1;
    unkbyte3 Var2;
    
    iVar1 = *(param_1 + 0x8c);
    Var2 = iVar1 >> 8;
    if (*(param_1 + 0x10) == 3) {
        return CONCAT31(Var2,*(iVar1 + 0x1c));
    }
    return CONCAT31(Var2,*(iVar1 + 0x216));
}


/* fcn.00021ad1 @ 0x21ad1 */

void __cdecl fcn.00021ad1(uint32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h,uint32_t arg_14h,int32_t arg_18h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t in_EDX;
    
    arg_8h._0_1_ = arg_ch << 3 | arg_8h;
    if (arg_10h != '\0') {
        arg_8h._0_1_ = arg_8h | 4;
    }
    if (arg_14h != '\0') {
        arg_8h._0_1_ = arg_8h | 0x20;
    }
    arg_ch = CONCAT31(arg_ch._1_3_,arg_8h);
    uVar1 = 1;
    if (1 < in_EDX) {
        while (in_EDX < 5) {
            uVar2 = uVar1 + 1;
            *(&arg_ch + uVar1) = arg_8h;
            if (in_EDX <= uVar2) break;
            uVar1 = uVar2;
            arg_8h._0_1_ = arg_ch;
        }
    }
    fcn.00023c30(8);
    return;
}


/* fcn.00021b38 @ 0x21b38 */

uint32_t __cdecl fcn.00021b38(int8_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int in_ECX;
    int in_EDX;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t var_4h;
    
    uVar3 = 0;
    var_4h = in_ECX;
    uVar1 = fcn.00023aaa(8,2,arg_ch,&var_4h);
    if (-1 < uVar1) {
        uVar1 = var_4h & 0xff;
        uVar2 = (var_4h >> 8 & 0xff) << 8 | uVar1;
        if (in_EDX == 1) {
            uVar3 = 1;
        }
        else if (in_EDX == 2) {
            uVar3 = 0x11;
        }
        else if (in_EDX == 4) {
            uVar3 = 0x1111;
        }
        if ((uVar2 & uVar3) == uVar3) {
            return 1;
        }
        if (*(in_ECX + 0x10) == 3) {
            uVar1 = *(in_ECX + 0x8c);
            *(uVar1 + 0x198) = uVar2;
        }
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000219d3 @ 0x219d3 */

uint32_t __fastcall fcn.000219d3(uint param_1,uint param_2)

{
    int32_t var_4h;
    
    fcn.00023aaa(8,2,param_2,&var_4h);
    return var_4h & 0xffff;
}


/* fcn.00021a02 @ 0x21a02 */

//WARNING: Variable defined which should be unmapped: var_1h

void __cdecl fcn.00021a02(int32_t arg_8h,uint32_t arg_ch)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t in_ECX;
    uint8_t *in_EDX;
    uint8_t uVar3;
    uint8_t uVar4;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_4h;
    int8_t var_3h;
    uint32_t var_1h;
    
    uVar2 = 0;
    uVar1 = 0;
    var_10h._0_1_ = 0;
    var_8h._0_1_ = 0;
    var_ch._0_1_ = in_ECX;
    uVar3 = var_ch >> 2 & 3;
    uVar4 = var_ch >> 4 & 3;
    if (arg_ch == 4) {
        var_10h._0_1_ = in_ECX >> 8 & 3;
        var_8h._0_1_ = in_ECX >> 10 & 3;
        uVar1 = in_ECX >> 0xc & 3;
        uVar2 = in_ECX >> 0xe & 3;
    }
    *in_EDX = var_ch & 3;
    if ((var_ch & 3) < uVar4) {
        *in_EDX = uVar4;
    }
    if (*in_EDX < var_10h) {
        *in_EDX = var_10h;
    }
    if (*in_EDX < uVar1) {
        *in_EDX = uVar1;
    }
    *arg_8h = uVar3;
    if (uVar3 < var_ch >> 6) {
        *arg_8h = var_ch >> 6;
    }
    if (*arg_8h < var_8h) {
        *arg_8h = var_8h;
    }
    if (*arg_8h < uVar2) {
        *arg_8h = uVar2;
    }
    uVar1 = *(*arg_8h + 0x19d14);
    if (*in_EDX <= *(*arg_8h + 0x19d14)) {
        uVar1 = *in_EDX;
    }
    *in_EDX = uVar1;
    return;
}


/* fcn.00021bb9 @ 0x21bb9 */

uint __cdecl fcn.00021bb9(int32_t arg_8h)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int in_ECX;
    uchar in_DL;
    uint32_t uVar4;
    int32_t var_8h;
    unkbyte3 Stack_8;
    int8_t var_1h;
    
    _Stack_8 = CONCAT13(in_DL,in_ECX);
    uVar4 = 0;
    var_8h = in_ECX;
    iVar2 = fcn.00023aaa(8,2,arg_8h,&var_8h);
    if (iVar2 < 0) {
        return 0;
    }
    uVar1 = var_8h >> 8;
    uVar3 = var_8h & 0xff;
    fcn.00023aaa(8,1,arg_8h,&var_8h + 1);
    if (in_ECX == 1) {
        uVar4 = 7;
    }
    else if (in_ECX == 2) {
        uVar4 = 0x77;
    }
    else if (in_ECX == 4) {
        uVar4 = 0x7777;
    }
    if (((((uVar1 & 0xff) << 8 | uVar3) & uVar4) == uVar4) && ((var_8h & 0x100U) != 0)) {
        return 1;
    }
    return 0;
}


/* fcn.00021c49 @ 0x21c49 */

uint __fastcall
fcn.00021c49(int param_1,uint param_2,uint32_t param_3,uint32_t param_4,uint param_5,uint16_t *param_6)

{
    bool bVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    char cVar4;
    uint16_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    int extraout_EDX;
    int extraout_EDX_00;
    int iVar9;
    int iVar10;
    uint16_t uVar11;
    uint8_t uStack_25;
    uint32_t uStack_24;
    uint32_t uStack_20;
    int iStack_1c;
    uint uStack_18;
    uint uStack_14;
    int iStack_10;
    uint32_t uStack_c;
    int iStack_8;
    uint32_t uStack_4;
    
    uStack_c = uStack_c & 0xffffff00;
    uStack_4 = uStack_4 & 0xffffff00;
    uStack_18 = 0;
    bVar1 = false;
    uStack_14 = param_2;
    iVar6 = fcn.00020750();
    uVar3 = fcn.000219bc();
    iStack_8 = *0x1a0d8;
    iVar9 = extraout_EDX;
    iVar10 = extraout_EDX;
    iStack_1c = extraout_EDX;
    if (*0x1a0d8 != 1) {
        iStack_1c = extraout_EDX;
        cVar4 = fcn.000147e7();
        iVar9 = extraout_EDX_00;
        if (cVar4 == '\0') {
            bVar1 = true;
            fcn.0001a4c0();
            iVar9 = 0;
            iVar10 = *(*(param_1 + 0x8c) + 0x24);
            iStack_1c = iVar10;
        }
    }
    iVar8 = param_4 - iVar9;
    if (param_4 == iVar9) {
        uStack_18 = 100;
    }
    else if (iVar8 == 1) {
        uStack_18 = 4000;
    }
    else if (iVar8 == 2) {
        uStack_18 = 8000;
    }
    else if (iVar8 == 3) {
        uStack_18 = 12000;
    }
    else if (iVar8 == 4) {
        uStack_18 = 16000;
    }
    *(*0x1a0c4 + iVar6) = *(*0x1a0c4 + iVar6) & 0xfffff8ff;
    iVar9 = fcn.00023aaa(8,1,iVar10,&param_4);
    if (-1 < iVar9) {
        if (uVar3 < 0x14) {
            uStack_25 = param_4 & 0xfc;
        }
        else {
            uStack_25 = param_4 & 0xf0;
        }
        uStack_25 = uStack_25 | 0x21;
        iVar9 = fcn.00023c30(8,1,iVar10,&uStack_25);
        if (iVar9 < 0) {
            return 4;
        }
        param_4 = 0;
        uVar2 = uStack_20 >> 8;
        uStack_20 = uStack_20 & 0xffffff00;
        uVar7 = uStack_24 >> 8;
        uStack_24 = uStack_24 & 0xffffff00;
        param_4._0_2_ = 0;
        uVar11 = param_4;
        if ((*(param_1 + 0x10) == 1) && (iVar9 = *(param_1 + 0x8c), *(iVar9 + 0x87) == '\x01')) {
            uVar3 = 0;
            uStack_24 = CONCAT31(uVar7,*(iVar9 + 0x88));
            uStack_20 = CONCAT31(uVar2,*(iVar9 + 0x89));
            if (param_3 != 0) {
                uVar7 = 0;
                do {
                    uVar11 = uVar11 | (*(iVar9 + 0x88) << 2 | *(iVar9 + 0x89)) << (uVar7 << 2 & 0x1f);
                    uVar3 = uVar3 + 1;
                    uVar7 = uVar3;
                } while (uVar7 < param_3);
                iVar10 = iStack_1c;
            }
        }
        if (((iStack_8 != 1) && (cVar4 = fcn.000148da(), cVar4 == '\x01')) && (iVar10 != 2)) {
            if (bVar1) {
                fcn.00024ea5();
            }
            else {
                fcn.00025f1b(uStack_20,uStack_24,0,param_5);
            }
        }
        fcn.00021ad1(uStack_20,uStack_24,0,0,iVar10);
        uVar3 = 0;
        iStack_10 = 0;
        while( true ) {
            uVar3 = uVar3 + 1;
            fcn.00013584();
            cVar4 = fcn.00021b38(uStack_14,iStack_1c);
            if (cVar4 == '\x01') {
                *param_6 = uVar11;
                return 3;
            }
            uVar5 = fcn.000219d3();
            param_4 = uVar5;
            if (uVar5 == uVar11) {
                iStack_10 = iStack_10 + 1;
                if (4 < iStack_10) {
                    return 0;
                }
            }
            else {
                iStack_10 = 0;
            }
            if (uStack_c != '\0') break;
            fcn.00021a02(&uStack_24,param_3);
            if (uStack_20 == '\x03') {
                uStack_c = CONCAT31(uStack_c._1_3_,1);
            }
            if (uStack_24 == '\x03') {
                uStack_4 = CONCAT31(uStack_4._1_3_,1);
            }
            if (iStack_8 == 1) {
                iVar10 = iStack_1c;
            }
            else {
                cVar4 = fcn.000148da();
                iVar10 = iStack_1c;
                if ((cVar4 == '\x01') && (iStack_1c != 2)) {
                    if (bVar1) {
                        fcn.00024ea5();
                    }
                    else {
                        fcn.00025f1b(uStack_20,uStack_24,0,param_5);
                    }
                }
            }
            fcn.00021ad1(uStack_20,uStack_24,uStack_c,uStack_4,iVar10);
            uVar11 = uVar5;
            if (9 < uVar3) {
                return 0;
            }
        }
        return 0;
    }
    return 4;
}


/* fcn.000224de @ 0x224de */

uint __fastcall fcn.000224de(int param_1,uint param_2,uint32_t param_3,int param_4,uint param_5)

{
    bool bVar1;
    uint32_t arg_ch;
    char cVar2;
    int iVar3;
    int arg_18h;
    ulong uVar4;
    uint8_t uStack_19;
    uint32_t uStack_18;
    uint uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_c = uStack_c & 0xffffff00;
    bVar1 = false;
    uStack_14 = param_2;
    uVar4 = fcn.00020750();
    arg_18h = uVar4 >> 0x20;
    iStack_4 = *0x1a0d8;
    if ((*0x1a0d8 != 1) && (cVar2 = fcn.000147e7(), cVar2 == '\0')) {
        bVar1 = true;
        fcn.0001a4c0();
        arg_18h = *(*(param_1 + 0x8c) + 0x24);
    }
    *(*0x1a0c4 + uVar4) = *(*0x1a0c4 + uVar4) & 0xfffffdff | 0x500;
    iVar3 = fcn.00023aaa(8,1,arg_18h,&param_4);
    if (-1 < iVar3) {
        uStack_19 = param_4 & 0xd7 | 7;
        iVar3 = fcn.00023c30(8,1,arg_18h,&uStack_19);
        if (-1 < iVar3) {
            fcn.00021a02(&uStack_10,param_3);
            arg_ch = uStack_10;
            if (uStack_18 == '\x03') {
                uStack_8 = CONCAT31(uStack_8._1_3_,1);
            }
            if (uStack_10 == '\x03') {
                uStack_c = CONCAT31(uStack_c._1_3_,1);
            }
            if (((iStack_4 != 1) && (cVar2 = fcn.000148da(), cVar2 == '\x01')) && (arg_18h != 2)) {
                if (bVar1) {
                    fcn.00024ea5();
                }
                else {
                    fcn.00025f1b(uStack_18,arg_ch,0,param_5);
                }
            }
            fcn.00021ad1(uStack_18,arg_ch,uStack_8,uStack_c,arg_18h);
            param_4 = 0;
            while( true ) {
                fcn.00013584();
                cVar2 = fcn.00021b38(uStack_14,arg_18h);
                if (cVar2 == '\0') {
                    return 1;
                }
                cVar2 = fcn.00021bb9(arg_18h);
                if (cVar2 == '\x01') break;
                param_4 = param_4 + 1;
                fcn.000219d3();
                if (5 < param_4) {
                    return 2;
                }
                fcn.00021a02(&uStack_10,param_3);
                if (uStack_18 == '\x03') {
                    uStack_8 = CONCAT31(uStack_8._1_3_,1);
                }
                if (uStack_10 == '\x03') {
                    uStack_c = CONCAT31(uStack_c._1_3_,1);
                }
                if (((iStack_4 != 1) && (cVar2 = fcn.000148da(), cVar2 == '\x01')) && (arg_18h != 2)) {
                    if (bVar1) {
                        fcn.00024ea5();
                    }
                    else {
                        fcn.00025f1b(uStack_18,uStack_10,0,param_5);
                    }
                }
                fcn.00021ad1(uStack_18,uStack_10,uStack_8,uStack_c,arg_18h);
            }
            return 3;
        }
    }
    return 4;
}


/* fcn.00022228 @ 0x22228 */

uint __fastcall fcn.00022228(int param_1,uint param_2,uint32_t param_3,int param_4,uint param_5)

{
    bool bVar1;
    uint32_t arg_ch;
    uint8_t uVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    int extraout_EDX;
    int extraout_EDX_00;
    int iVar6;
    int arg_18h;
    uint8_t uStack_1d;
    uint32_t uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_c = uStack_c & 0xffffff00;
    uStack_14 = 0;
    bVar1 = false;
    uStack_18 = param_2;
    iVar4 = fcn.00020750();
    uVar2 = fcn.000219bc();
    iStack_4 = *0x1a0d8;
    iVar6 = extraout_EDX;
    arg_18h = extraout_EDX;
    if ((*0x1a0d8 != 1) && (cVar3 = fcn.000147e7(), iVar6 = extraout_EDX_00, cVar3 == '\0')) {
        bVar1 = true;
        fcn.0001a4c0();
        iVar6 = 0;
        arg_18h = *(*(param_1 + 0x8c) + 0x24);
    }
    iVar5 = param_4 - iVar6;
    if (param_4 == iVar6) {
        uStack_14 = 400;
    }
    else if (iVar5 == 1) {
        uStack_14 = 4000;
    }
    else if (iVar5 == 2) {
        uStack_14 = 8000;
    }
    else if (iVar5 == 3) {
        uStack_14 = 12000;
    }
    else if (iVar5 == 4) {
        uStack_14 = 16000;
    }
    *(*0x1a0c4 + iVar4) = *(*0x1a0c4 + iVar4) & 0xfffffcff | 0x400;
    iVar6 = fcn.00023aaa(8,1,arg_18h,&param_4);
    if (-1 < iVar6) {
        if (uVar2 < 0x14) {
            uStack_1d = param_4 & 0xfc;
        }
        else {
            uStack_1d = param_4 & 0xf0;
        }
        uStack_1d = uStack_1d | 0x23;
        iVar6 = fcn.00023c30(8,1,arg_18h,&uStack_1d);
        if (-1 < iVar6) {
            fcn.00021a02(&uStack_10,param_3);
            arg_ch = uStack_10;
            if (uStack_1c == '\x03') {
                uStack_8 = CONCAT31(uStack_8._1_3_,1);
            }
            if (uStack_10 == '\x03') {
                uStack_c = CONCAT31(uStack_c._1_3_,1);
            }
            if (((iStack_4 != 1) && (cVar3 = fcn.000148da(), cVar3 == '\x01')) && (arg_18h != 2)) {
                if (bVar1) {
                    fcn.00024ea5();
                }
                else {
                    fcn.00025f1b(uStack_1c,arg_ch,0,param_5);
                }
            }
            fcn.00021ad1(uStack_1c,arg_ch,uStack_8,uStack_c,arg_18h);
            param_4 = 0;
            while( true ) {
                fcn.00013584();
                cVar3 = fcn.00021b38(uStack_18,arg_18h);
                if (cVar3 == '\0') {
                    return 1;
                }
                cVar3 = fcn.00021bb9(arg_18h);
                if (cVar3 == '\x01') break;
                param_4 = param_4 + 1;
                fcn.000219d3();
                if (5 < param_4) {
                    return 2;
                }
                fcn.00021a02(&uStack_10,param_3);
                if (uStack_1c == '\x03') {
                    uStack_8 = CONCAT31(uStack_8._1_3_,1);
                }
                if (uStack_10 == '\x03') {
                    uStack_c = CONCAT31(uStack_c._1_3_,1);
                }
                if (((iStack_4 != 1) && (cVar3 = fcn.000148da(), cVar3 == '\x01')) && (arg_18h != 2)) {
                    if (bVar1) {
                        fcn.00024ea5();
                    }
                    else {
                        fcn.00025f1b(uStack_1c,uStack_10,0,param_5);
                    }
                }
                fcn.00021ad1(uStack_1c,uStack_10,uStack_8,uStack_c,arg_18h);
            }
            return 3;
        }
    }
    return 4;
}


/* fcn.00021f72 @ 0x21f72 */

uint __fastcall fcn.00021f72(int param_1,uint param_2,uint32_t param_3,int param_4,uint param_5)

{
    bool bVar1;
    uint32_t arg_ch;
    uint8_t uVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    int extraout_EDX;
    int extraout_EDX_00;
    int iVar6;
    int arg_18h;
    uint8_t uStack_1d;
    uint32_t uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    int iStack_4;
    
    uStack_18 = param_2;
    iVar4 = fcn.00020750();
    uStack_8 = uStack_8 & 0xffffff00;
    uStack_c = uStack_c & 0xffffff00;
    uStack_14 = 0;
    bVar1 = false;
    uVar2 = fcn.000219bc();
    iStack_4 = *0x1a0d8;
    iVar6 = extraout_EDX;
    arg_18h = extraout_EDX;
    if ((*0x1a0d8 != 1) && (cVar3 = fcn.000147e7(), iVar6 = extraout_EDX_00, cVar3 == '\0')) {
        bVar1 = true;
        fcn.0001a4c0();
        iVar6 = 0;
        arg_18h = *(*(param_1 + 0x8c) + 0x24);
    }
    iVar5 = param_4 - iVar6;
    if (param_4 == iVar6) {
        uStack_14 = 400;
    }
    else if (iVar5 == 1) {
        uStack_14 = 4000;
    }
    else if (iVar5 == 2) {
        uStack_14 = 8000;
    }
    else if (iVar5 == 3) {
        uStack_14 = 12000;
    }
    else if (iVar5 == 4) {
        uStack_14 = 16000;
    }
    *(*0x1a0c4 + iVar4) = *(*0x1a0c4 + iVar4) & 0xfffff9ff | 0x100;
    iVar6 = fcn.00023aaa(8,1,arg_18h,&param_4);
    if (-1 < iVar6) {
        if (uVar2 < 0x14) {
            uStack_1d = param_4 & 0xfc;
        }
        else {
            uStack_1d = param_4 & 0xf0;
        }
        uStack_1d = uStack_1d | 0x22;
        iVar6 = fcn.00023c30(8,1,arg_18h,&uStack_1d);
        if (-1 < iVar6) {
            fcn.00021a02(&uStack_10,param_3);
            arg_ch = uStack_10;
            if (uStack_1c == '\x03') {
                uStack_8 = CONCAT31(uStack_8._1_3_,1);
            }
            if (uStack_10 == '\x03') {
                uStack_c = CONCAT31(uStack_c._1_3_,1);
            }
            if (((iStack_4 != 1) && (cVar3 = fcn.000148da(), cVar3 == '\x01')) && (arg_18h != 2)) {
                if (bVar1) {
                    fcn.00024ea5();
                }
                else {
                    fcn.00025f1b(uStack_1c,arg_ch,0,param_5);
                }
            }
            fcn.00021ad1(uStack_1c,arg_ch,uStack_8,uStack_c,arg_18h);
            param_4 = 0;
            while( true ) {
                fcn.00013584();
                cVar3 = fcn.00021b38(uStack_18,arg_18h);
                if (cVar3 == '\0') {
                    return 1;
                }
                cVar3 = fcn.00021bb9(arg_18h);
                if (cVar3 == '\x01') break;
                param_4 = param_4 + 1;
                fcn.000219d3();
                if (5 < param_4) {
                    return 2;
                }
                fcn.00021a02(&uStack_10,param_3);
                if (uStack_1c == '\x03') {
                    uStack_8 = CONCAT31(uStack_8._1_3_,1);
                }
                if (uStack_10 == '\x03') {
                    uStack_c = CONCAT31(uStack_c._1_3_,1);
                }
                if (((iStack_4 != 1) && (cVar3 = fcn.000148da(), cVar3 == '\x01')) && (arg_18h != 2)) {
                    if (bVar1) {
                        fcn.00024ea5();
                    }
                    else {
                        fcn.00025f1b(uStack_1c,uStack_10,0,param_5);
                    }
                }
                fcn.00021ad1(uStack_1c,uStack_10,uStack_8,uStack_c,arg_18h);
            }
            return 3;
        }
    }
    return 4;
}


/* fcn.00022b74 @ 0x22b74 */

uint __fastcall fcn.00022b74(int param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    char cVar6;
    uint32_t *puVar7;
    uint uVar8;
    ulong uVar9;
    
    iVar5 = *0x1a0d8;
    iVar4 = *(param_1 + 0x8c);
    uVar3 = *(iVar4 + 0x82);
    uVar1 = *(iVar4 + 0x86);
    uVar2 = *(iVar4 + 0x85);
    uVar9 = fcn.00020750();
    puVar7 = uVar9 + *0x1a0c4;
    *puVar7 = *puVar7 & 0xfffff8ff;
    if (*((uVar9 >> 0x20 & 0xff) + 0x19d14) < uVar1) {
        uVar8 = 0x80000002;
    }
    else {
        if (iVar5 != 1) {
            cVar6 = fcn.000148da();
            if (cVar6 == '\x01') {
                fcn.00025f1b(uVar1,uVar2,0,uVar3 * 200);
            }
        }
        uVar8 = 0;
    }
    return uVar8;
}


/* fcn.00022d05 @ 0x22d05 */

int __fastcall fcn.00022d05(uint param_1,int8_t param_2)

{
    char cVar1;
    int iVar2;
    
    iVar2 = fcn.00020750();
    *(iVar2 + *0x1a0c4) = *(iVar2 + *0x1a0c4) & 0xfffffdff | 0x500;
    fcn.00013584();
    cVar1 = fcn.00021b38(param_2,0);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffff9;
    }
    else {
        cVar1 = fcn.00021bb9(0);
        iVar2 = (-(cVar1 != '\0') & 0x7ffffff9) + 0x80000007;
    }
    return iVar2;
}


/* fcn.00022c8a @ 0x22c8a */

int __fastcall fcn.00022c8a(uint param_1,int8_t param_2)

{
    char cVar1;
    int iVar2;
    
    iVar2 = fcn.00020750();
    *(iVar2 + *0x1a0c4) = *(iVar2 + *0x1a0c4) & 0xfffffcff | 0x400;
    fcn.00013584();
    cVar1 = fcn.00021b38(param_2,0);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffff9;
    }
    else {
        cVar1 = fcn.00021bb9(0);
        iVar2 = (-(cVar1 != '\0') & 0x7ffffff9) + 0x80000007;
    }
    return iVar2;
}


/* fcn.00022c0f @ 0x22c0f */

int __fastcall fcn.00022c0f(uint param_1,int8_t param_2)

{
    char cVar1;
    int iVar2;
    
    iVar2 = fcn.00020750();
    *(iVar2 + *0x1a0c4) = *(iVar2 + *0x1a0c4) & 0xfffff9ff | 0x100;
    fcn.00013584();
    cVar1 = fcn.00021b38(param_2,0);
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffff9;
    }
    else {
        cVar1 = fcn.00021bb9(0);
        iVar2 = (-(cVar1 != '\0') & 0x7ffffff9) + 0x80000007;
    }
    return iVar2;
}


/* fcn.0002321a @ 0x2321a */

//WARNING: Variable defined which should be unmapped: var_2h

uint fcn.0002321a(void)

{
    int iVar1;
    uchar auStack_8 [2];
    int32_t var_2h;
    
    iVar1 = fcn.00023aaa(8,1,0,&var_2h);
    if ((((-1 < iVar1) && (iVar1 = fcn.00023aaa(8,1,0,&var_2h + 1), -1 < iVar1)) &&
        (iVar1 = fcn.00023aaa(8,1,0,auStack_8 + 1), -1 < iVar1)) &&
       (((_auStack_8 & 0x1000000) != 0 && (((_auStack_8 & 0x100000) != 0 || ((_auStack_8 & 0x100) != 0)))))) {
        return 1;
    }
    return 0;
}


/* fcn.00023841 @ 0x23841 */

uint __fastcall fcn.00023841(uint8_t param_1)

{
    char cVar1;
    uint8_t extraout_CL;
    uint uVar2;
    uint extraout_EDX;
    
    uVar2 = 0;
    if ((*0x1a0d8 != 1) && (cVar1 = fcn.000148da(), param_1 = extraout_CL, uVar2 = extraout_EDX, cVar1 != '\x01')) {
        return extraout_EDX;
    }
    if (param_1 < 0x61) {
        if (param_1 == 0x60) {
            uVar2 = 0x64310;
        }
        else if (param_1 == 0x10) {
            uVar2 = 0x64110;
        }
        else if (param_1 == 0x20) {
            uVar2 = 0x64210;
        }
        else if (param_1 == 0x30) {
            uVar2 = 0x64710;
        }
        else if (param_1 == 0x40) {
            uVar2 = 0x64010;
        }
    }
    else if (param_1 == 0x70) {
        uVar2 = 0x64410;
    }
    else if (param_1 == 0x80) {
        uVar2 = 0x64510;
    }
    else if (param_1 == 0x90) {
        uVar2 = 0x64610;
    }
    return uVar2;
}


/* fcn.00023a71 @ 0x23a71 */

void __fastcall fcn.00023a71(int param_1,int param_2)

{
    uint32_t uVar1;
    
    if ((param_2 == 3) || (param_2 == 0)) {
        uVar1 = 0xc00001f;
    }
    else {
        uVar1 = 0xc00001f;
        if (param_2 == 2) {
            uVar1 = 0xc00081f;
        }
    }
    *(*0x1a0c4 + param_1) = *(*0x1a0c4 + param_1) & 0xf3fff7e0 | uVar1;
    return;
}


/* fcn.000238bb @ 0x238bb */

uint __fastcall fcn.000238bb(uint param_1,uint32_t param_2,int *param_3,uint *param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint *puVar5;
    char cVar6;
    int iVar7;
    uint uVar8;
    char cStack_9;
    uint32_t uStack_8;
    
    iVar2 = fcn.00023841();
    if ((*(*0x1a0c4 + iVar2) & 0x12000000) != 0) {
        *(*0x1a0c4 + iVar2) = *(*0x1a0c4 + iVar2) | 0x12000000;
    }
    uStack_8 = 0;
    while( true ) {
        cStack_9 = '\0';
        do {
            uVar1 = *(*0x1a0c4 + iVar2);
            fcn.00013584();
            iVar4 = *0x1a0c4;
            cStack_9 = cStack_9 + '\x01';
            if (cStack_9 == '\x14') goto code_r0x000239e4;
        } while (uVar1 < 0);
        iVar7 = 5;
        puVar5 = param_4;
        iVar3 = iVar2;
        do {
            iVar3 = iVar3 + 4;
            uVar8 = *puVar5;
            puVar5 = puVar5 + 1;
            *(iVar4 + iVar3) = uVar8;
            iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        *(iVar4 + iVar2) = (param_2 | 0xfffff800) << 0x14 | uVar1 & 0xfe0fffff;
        cVar6 = '\0';
        while( true ) {
            uVar1 = *(iVar4 + iVar2);
            fcn.00013584();
            iVar4 = *0x1a0c4;
            cVar6 = cVar6 + '\x01';
            if ((cVar6 == '\x14') || ((uVar1 & 0x40000000) != 0)) break;
        }
        uVar8 = 0;
        if (((uVar1 & 0x12000000) == 0) && (cVar6 != '\x14')) break;
        *(*0x1a0c4 + iVar2) = uVar1 | 0x52000000;
        fcn.00013584();
        uStack_8 = uStack_8 + 1;
        if (9 < uStack_8) {
            iVar4 = *0x1a0c4;
code_r0x000239b8:
            if (uStack_8 == 10) {
code_r0x000239e4:
                uVar8 = 0x80000012;
            }
            else {
                *param_3 = (*(iVar4 + iVar2) >> 0x14 & 0x1f) - 1;
            }
            return uVar8;
        }
    }
    *(*0x1a0c4 + iVar2) = uVar1 | 0x40000000;
    goto code_r0x000239b8;
}


/* fcn.000239f3 @ 0x239f3 */

void __fastcall fcn.000239f3(uint param_1,uint32_t param_2,int param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar5 = 0;
    iVar2 = fcn.00023841();
    iVar2 = iVar2 + 4;
    uVar1 = *(*0x1a0c4 + iVar2);
    uVar4 = 0;
    do {
        if (param_2 <= uVar5) {
            return;
        }
        uVar3 = uVar4;
        uVar4 = uVar4 + 8;
        *(uVar5 + param_3) = (uVar1 & 0xff00 | (uVar1 & 0xff) << 0x10 | uVar1 >> 0x10 & 0xff) >> (uVar3 & 0x1f);
        uVar5 = uVar5 + 1;
    } while (uVar4 < 0x18);
    do {
        if (param_2 <= uVar5) {
            return;
        }
        iVar2 = iVar2 + 4;
        uVar4 = 0;
        uVar1 = *(*0x1a0c4 + iVar2);
        do {
            if (param_2 <= uVar5) {
                return;
            }
            uVar3 = uVar4;
            uVar4 = uVar4 + 8;
            *(uVar5 + param_3) =
                 (uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) >> (uVar3 & 0x1f);
            uVar5 = uVar5 + 1;
        } while (uVar4 < 0x20);
    } while( true );
}


/* fcn.0002405b @ 0x2405b */

uint __fastcall fcn.0002405b(int param_1,uchar *param_2)

{
    int iVar1;
    uchar uVar2;
    uint uVar3;
    
    uVar3 = 0;
    if (*(param_1 + 0xc) == 3) {
        iVar1 = *(param_1 + 0x10);
        if (iVar1 != 2) {
            if (iVar1 == 3) {
                uVar2 = *(*(param_1 + 0x8c) + 1);
                goto code_r0x000240b1;
            }
            if (iVar1 != 4) {
                return 0;
            }
        }
        *param_2 = *(*(param_1 + 0x8c) + 2);
    }
    else {
        if (*(param_1 + 0xc) != 4) {
            return 0;
        }
        if (*(param_1 + 0x10) != 1) {
            if (*(param_1 + 0x10) != 5) {
                return 0;
            }
            *param_2 = *(*(param_1 + 0x8c) + 0xc);
            return 0;
        }
        uVar2 = *(*(param_1 + 0x8c) + 0xb);
code_r0x000240b1:
        *param_2 = uVar2;
        uVar3 = 1;
    }
    return uVar3;
}


/* fcn.00023f2f @ 0x23f2f */

int __cdecl fcn.00023f2f(uint noname_0,uint noname_1,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int8_t var_8h;
    int8_t var_1h;
    
    uVar2 = 1;
    _var_8h = 0;
    if (arg_14h == 0) {
        iVar1 = -0x7ffffffe;
    }
    else {
        iVar1 = fcn.00023c30(4,0,arg_10h,0);
        if (-1 < iVar1) {
            iVar1 = fcn.00023c30(4,1,arg_10h,&var_8h);
            if ((-1 < iVar1) && (iVar1 == 0)) {
                while( true ) {
                    if (uVar2 < 0x11) {
                        uVar3 = uVar2;
                    }
                    else {
                        uVar3 = 0x10;
                    }
                    iVar1 = fcn.00023c30(4,uVar3,arg_10h,arg_14h);
                    if (iVar1 != 0) break;
                    arg_14h = arg_14h + uVar3;
                    uVar2 = uVar2 - uVar3;
                    if (uVar2 == 0) {
                        return 0;
                    }
                }
                iVar1 = -0x7ffffff9;
            }
        }
        fcn.00023c30(0,0,arg_10h,0);
    }
    return iVar1;
}


/* fcn.000240b8 @ 0x240b8 */

//WARNING: Variable defined which should be unmapped: var_2h

int __fastcall fcn.000240b8(int param_1)

{
    int iVar1;
    uint arg_10h;
    int32_t var_2h;
    
    iVar1 = fcn.0002405b();
    arg_10h = 0;
    if (*(param_1 + 0x10) == 3) {
        arg_10h = *(*(param_1 + 0x8c) + 0x24);
    }
    if (iVar1 == 0) {
        iVar1 = fcn.00018724(0,arg_10h,&var_2h + 1);
    }
    else {
        if (iVar1 != 1) {
            return -0x7ffffff9;
        }
        iVar1 = fcn.00023f2f(arg_10h,arg_10h,arg_10h,&var_2h + 1);
    }
    if (iVar1 < 0) {
        iVar1 = -0x7ffffff9;
    }
    return iVar1;
}


/* fcn.00023e2e @ 0x23e2e */

int fcn.00023e2e(uint32_t param_1,uint param_2,uint param_3,int param_4)

{
    uint uVar1;
    int iVar2;
    uint32_t uStack_4;
    
    uVar1 = param_3;
    if ((param_1 == 0) || (param_4 == 0)) {
        return -0x7ffffffe;
    }
    if ((*0x1a1a4 != '\0') || (iVar2 = fcn.00023c30(4,0,param_3,0), -1 < iVar2)) {
        iVar2 = fcn.00023c30(4,1,uVar1,&param_2);
        if ((-1 < iVar2) && (iVar2 == 0)) {
            if (*0x1a1a4 == '\0') {
                iVar2 = fcn.00023aaa(4,0,uVar1,0);
            }
            else {
                iVar2 = 0;
            }
            if (iVar2 == 0) {
                do {
                    if (param_1 < 0x11) {
                        uStack_4 = param_1;
                    }
                    else {
                        uStack_4 = 0x10;
                    }
                    iVar2 = fcn.00023aaa(4,uStack_4,uVar1,param_4);
                    if (iVar2 != 0) break;
                    param_4 = param_4 + uStack_4;
                    param_1 = param_1 - uStack_4;
                } while (param_1 != 0);
            }
            fcn.00023aaa(0,0,uVar1,0);
            return iVar2;
        }
    }
    fcn.00023c30(0,0,uVar1,0);
    return iVar2;
}


/* fcn.00024128 @ 0x24128 */

int __fastcall fcn.00024128(int param_1,int32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    
    uVar1 = param_3;
    iVar2 = fcn.0002405b();
    param_3 = 0;
    iVar3 = -0x7ffffff9;
    if (*(param_1 + 0x10) == 3) {
        param_3 = *(*(param_1 + 0x8c) + 0x24);
    }
    if ((uVar1 >> 8 != '\0') && (iVar3 = fcn.000240b8(), iVar3 < 0)) {
        return 0;
    }
    if (iVar2 == 0) {
        iVar2 = fcn.00018684(uVar1 & 0xff,param_2,param_4);
    }
    else {
        if (iVar2 != 1) {
            return iVar3;
        }
        iVar2 = fcn.00023e2e(param_2,uVar1,param_3,param_4);
    }
    return iVar2;
}


/* fcn.00023fe0 @ 0x23fe0 */

uint32_t __fastcall fcn.00023fe0(int param_1,uint32_t param_2)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = '\0';
    uVar1 = 0;
    if (param_2 != 0) {
        do {
            cVar2 = cVar2 + *(uVar1 + param_1);
            uVar1 = uVar1 + 1;
        } while (uVar1 < param_2);
    }
    return -(cVar2 != '\0') & 0x8000001b;
}


/* fcn.00024001 @ 0x24001 */

uint __fastcall fcn.00024001(uint8_t *param_1)

{
    uint uVar1;
    
    uVar1 = 0;
    if ((*param_1 & 0xf0) == 0) {
        uVar1 = 0x80000007;
    }
    if (0xfb < param_1[1]) {
        uVar1 = 0x80000007;
    }
    return uVar1;
}


/* fcn.0002401e @ 0x2401e */

uint __fastcall fcn.0002401e(int param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t var_8h;
    int32_t var_4h;
    
    uVar2 = 0;
    var_8h = 0xffffff00;
    var_4h = 0xffffff;
    do {
        if (*(uVar2 + param_1) != *(&var_8h + uVar2)) {
            return 0x80000007;
        }
        uVar1 = uVar2 + 1;
        uVar2 = uVar1;
    } while (uVar1 < 8);
    return 0;
}


/* fcn.000241ba @ 0x241ba */

int __fastcall fcn.000241ba(uint param_1,int *param_2,uint32_t *param_3)

{
    uint8_t uVar1;
    int iVar2;
    uchar *puVar3;
    uint32_t uVar4;
    uchar auStack_80 [126];
    uint8_t uStack_2;
    
    uVar4 = 0x80;
    iVar2 = fcn.00024128(0,auStack_80);
    if ((iVar2 < 0) || (iVar2 = fcn.00023fe0(), iVar2 < 0)) {
code_r0x000242e1:
        if (*param_2 != 0) {
            *param_2 = 0;
            iVar2 = -0x7ffffff9;
            *param_3 = 0;
        }
    }
    else {
        *param_3 = (uStack_2 + 1) * 0x80;
        puVar3 = fcn.0001354b();
        *param_2 = puVar3;
        if (puVar3 == NULL) {
            return -0x7ffffff7;
        }
        if (0x7f < *param_3) {
            uVar1 = uStack_2;
            if (puVar3 != auStack_80) {
                section..text(puVar3,auStack_80,0x80);
            }
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
                iVar2 = fcn.00024128(uVar4,auStack_80);
                if ((iVar2 < 0) || (iVar2 = fcn.00023fe0(), iVar2 < 0)) goto code_r0x000242e1;
                if (uVar4 + 0x80 <= *param_3) {
                    if (*param_2 + uVar4 != auStack_80) {
                        section..text(*param_2 + uVar4,auStack_80,0x80);
                    }
                }
                fcn.00010300(auStack_80,0x80,0);
                uVar4 = uVar4 + 0x80;
            }
        }
    }
    return iVar2;
}


/* fcn.000242fe @ 0x242fe */

int __fastcall fcn.000242fe(uint param_1,int *param_2,uint32_t *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uchar uStack_114;
    uint8_t uStack_113;
    uint8_t uStack_111;
    uint32_t uStack_108;
    uint32_t uStack_104;
    uchar auStack_100 [256];
    
    iVar1 = fcn.00024128(0,&uStack_114);
    if ((-1 < iVar1) && (iVar1 = fcn.00024001(), -1 < iVar1)) {
        uStack_108 = uStack_111;
        *param_3 = (uStack_108 + 1) * 0x100;
        iVar1 = fcn.0001354b();
        *param_2 = iVar1;
        if (iVar1 == 0) {
            return -0x7ffffff7;
        }
        uVar3 = uStack_113 + 5;
        iVar1 = fcn.00024128(0,auStack_100);
        if ((-1 < iVar1) && (iVar1 = fcn.00023fe0(), -1 < iVar1)) {
            if (*param_3 < uVar3) {
                return iVar1;
            }
            fcn.00013385(uVar3);
            if (uStack_111 == 0) {
                return iVar1;
            }
            while ((iVar1 = fcn.00024128(uVar3,&uStack_114), -1 < iVar1 && (iVar1 = fcn.00024001(), -1 < iVar1))) {
                uVar2 = uStack_113;
                iVar1 = fcn.00024128(uVar3,auStack_100);
                if ((iVar1 < 0) || (iVar1 = fcn.00023fe0(), iVar1 < 0)) break;
                uStack_104 = uVar3 + uVar2 + 5;
                if (uStack_104 <= *param_3) {
                    fcn.00013385(uVar2 + 5);
                }
                uStack_108 = uStack_108 + 0xffff;
                uVar3 = uStack_104;
                if (uStack_108 == 0) {
                    return iVar1;
                }
            }
        }
    }
    if (*param_2 != 0) {
        iVar1 = -0x7ffffff9;
        *param_2 = 0;
        *param_3 = 0;
    }
    return iVar1;
}


/* fcn.00026a32 @ 0x26a32 */

ulong __fastcall fcn.00026a32(uint32_t param_1,uint param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out(0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,param_2);
}


/* fcn.000246ae @ 0x246ae */

uint __fastcall fcn.000246ae(uint32_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    
    iVar4 = (param_1 & 0xff) * 0x18;
    fcn.0002698e();
    uVar1 = fcn.000269e7();
    if ((uVar1 & 2) == 0) {
        fcn.00026a32();
        fcn.00026a32();
        fcn.00026a32();
    }
    uVar1 = fcn.000269e7();
    uVar1 = uVar1 & 0xfffff000;
    if ((uVar1 == 0) || (uVar1 == 0xfffff000)) {
        uVar3 = 0x80000006;
    }
    else {
        uVar2 = fcn.000269e7();
        *(iVar4 + 0x19650) = uVar1;
        *(iVar4 + 0x19654) = uVar2 & 0xfffff000;
        *(uVar1 + 0x240) = uVar1;
        *(*(iVar4 + 0x19650) + 0x244) = uVar2 & 0xfffff000;
        *(*(iVar4 + 0x19650) + 0x204) = 7;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00024857 @ 0x24857 */

uint fcn.00024857(void)

{
    int iVar1;
    
    iVar1 = 2000;
    fcn.00013584();
    *(*0x1a0b0 + 0x6c) = *(*0x1a0b0 + 0x6c) & 0xfffffffe;
    do {
        if ((*(*0x1a0b0 + 0x9c) & 1) == 0) {
            return 0;
        }
        fcn.00013584();
        *(*0x1a0b0 + 0x6c) = *(*0x1a0b0 + 0x6c) & 0xfffffffe;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x80000006;
}


/* fcn.000248aa @ 0x248aa */

uint fcn.000248aa(void)

{
    int iVar1;
    
    iVar1 = 2000;
    fcn.00013584();
    *(*0x1a0b0 + 0x6c) = *(*0x1a0b0 + 0x6c) | 1;
    do {
        if ((*(*0x1a0b0 + 0x9c) & 1) != 0) {
            return 0;
        }
        fcn.00013584();
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x80000006;
}


/* fcn.000248ee @ 0x248ee */

int __fastcall fcn.000248ee(uint32_t param_1,uint16_t param_2)

{
    uint *puVar1;
    int iVar2;
    int iVar3;
    uint uVar4;
    
    if (param_2 < 0x400) {
        iVar2 = (param_1 & 0xff) * 0x18;
        if (*0x1a0b0 != *(iVar2 + 0x19650)) {
            iVar3 = fcn.000246ae();
            if (iVar3 < 0) {
                return iVar3;
            }
            *0x1a0b0 = *(iVar2 + 0x19650);
        }
        iVar2 = 1000;
        do {
            if (((*0x1a0b0)[0x1c] & 0x20) == 0) {
                iVar2 = fcn.00024857();
                puVar1 = *0x1a0b0;
                if (iVar2 < 0) {
                    return iVar2;
                }
                uVar4 = 0x65;
                (*0x1a0b0)[5] = 0x214;
                puVar1[6] = 0x272;
                puVar1[7] = 0x50;
                puVar1[8] = 0xad;
                puVar1[0x1f] = 0x32;
                puVar1[0xc] = 0;
                if (0x7f < param_2) {
                    param_2 = param_2 & 0x3ff | 0x1000;
                    uVar4 = 0x75;
                }
                puVar1[1] = param_2;
                puVar1[0xe] = 0;
                puVar1[0xf] = 0;
                *puVar1 = uVar4;
                iVar2 = fcn.000248aa();
                return iVar2;
            }
            fcn.00013584();
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        iVar2 = -0x7ffffffa;
    }
    else {
        iVar2 = -0x7ffffffe;
    }
    return iVar2;
}


/* fcn.000249cf @ 0x249cf */

uint fcn.000249cf(uint32_t param_1,uint8_t *param_2)

{
    uint32_t uVar1;
    
    if (param_1 != 0) {
        do {
            if ((*(*0x1a0b0 + 0x70) & 2) != 0) {
                uVar1 = *param_2;
                if (param_1 < 2) {
                    uVar1 = uVar1 | 0x200;
                }
                else {
                    param_2 = param_2 + 1;
                }
                *(*0x1a0b0 + 0x10) = uVar1;
                fcn.00013584();
                param_1 = param_1 - 1;
            }
        } while (param_1 != 0);
    }
    uVar1 = 0;
    while( true ) {
        fcn.00013584();
        if ((*(*0x1a0b0 + 0x34) & 0x40) != 0) {
            return 0x80000007;
        }
        if ((*(*0x1a0b0 + 0x34) & 0x10) != 0) break;
        if (40000 < uVar1) {
            return 0x80000012;
        }
        uVar1 = uVar1 + 1;
    }
    return 0;
}


/* fcn.00024ad0 @ 0x24ad0 */

void __fastcall fcn.00024ad0(int16_t param_1)

{
    uint32_t uVar1;
    
    *(*0x1a0c4 + 0xc4030) = *(*0x1a0c4 + 0xc4030) & 0xfffffff7;
    if (param_1 == 1) {
        uVar1 = *(*0x1a0c4 + 0xc4030) | 4;
    }
    else {
        if (param_1 != 0) {
            return;
        }
        uVar1 = *(*0x1a0c4 + 0xc4030) & 0xfffffffb;
    }
    *(*0x1a0c4 + 0xc4030) = uVar1;
    return;
}


/* fcn.00024b17 @ 0x24b17 */

void __fastcall fcn.00024b17(int16_t param_1)

{
    uint32_t uVar1;
    
    *(*0x1a0c4 + 0xc4030) = *(*0x1a0c4 + 0xc4030) & 0xffffff7f;
    if (param_1 == 1) {
        uVar1 = *(*0x1a0c4 + 0xc4030) | 0x40;
    }
    else {
        if (param_1 != 0) {
            return;
        }
        uVar1 = *(*0x1a0c4 + 0xc4030) & 0xffffffbf;
    }
    *(*0x1a0c4 + 0xc4030) = uVar1;
    return;
}


/* fcn.00025163 @ 0x25163 */

void __fastcall
fcn.00025163(int param_1,uint8_t param_2,uint8_t param_3,uint8_t param_4,char param_5,uint32_t param_6,int param_7
            )

{
    int iVar1;
    int iVar2;
    
    iVar2 = 0;
    iVar1 = *(param_1 + 0x10);
    if (iVar1 == 1) {
        if ((*(*(param_1 + 0x8c) + 0x20f) == '\x01') && (param_6 < 0x5265c1)) {
            iVar2 = 0x17224;
        }
        else if (param_5 == '\0') {
            iVar2 = (param_3 + param_2 * 4) * 0xb;
            if (param_6 < 0x2932e1) {
                iVar2 = iVar2 + 0x199b8;
            }
            else {
                iVar2 = iVar2 + 0x19888;
            }
        }
        else {
            iVar2 = param_3 + param_2 * 4;
            if (param_6 < 0x5265c1) {
                iVar2 = iVar2 * 0xb + 0x19a98;
            }
            else {
                iVar2 = iVar2 * 0xb + 0x197d8;
            }
        }
    }
    if (iVar1 == 3) {
        iVar2 = (param_3 + param_2 * 4) * 0xb;
        if (param_6 < 0x2932e1) {
            iVar2 = iVar2 + 0x199b8;
        }
        else {
            iVar2 = iVar2 + 0x19888;
        }
    }
    if ((iVar1 == 2) || (iVar1 == 4)) {
        iVar2 = param_4 * 0xb + 0x19968;
    }
    if (iVar1 == 5) {
        iVar2 = 0x19958;
    }
    if (param_7 != iVar2) {
        section..text(param_7,iVar2,0xb);
    }
    return;
}


/* fcn.000148c5 @ 0x148c5 */

void __fastcall fcn.000148c5(int param_1,uint32_t param_2,uint32_t param_3)

{
    *(*0x1a0c4 + param_1) = *(*0x1a0c4 + param_1) & param_2 | param_3;
    return;
}


