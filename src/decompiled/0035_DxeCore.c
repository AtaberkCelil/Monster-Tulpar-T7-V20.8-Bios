// decompiled by r2ghidra: 0035_DxeCore.pe32
// functions: 236

/* entry0 @ 0x10bf0 */

//WARNING: Removing unreachable block (ram,0x00010c1a)

void entry0(int64_t arg1)

{
    *0x27b00 = arg1;
    fcn.00010e2c(arg1);
    do {
        fcn.000102a0();
    } while( true );
}


/* fcn.0001fbb4 @ 0x1fbb4 */

void fcn.0001fbb4(void)

{
    return;
}


/* fcn.00022050 @ 0x22050 */

void fcn.00022050(uint32_t param_1,int64_t param_2,uint32_t param_3)

{
    fcn.0002215c(param_1,param_2,param_3);
    return;
}


/* fcn.0002215c @ 0x2215c */

//WARNING: Removing unreachable block (ram,0x000221df)

void fcn.0002215c(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    code *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    int iVar6;
    uint uVar7;
    uint in_register_0000000c;
    int64_t iVar8;
    int64_t iVar9;
    uint in_R8;
    int64_t arg3_00;
    int64_t in_R9;
    bool bVar10;
    uint64_t uStackX_18;
    
    iVar4 = *0x27e98;
    iVar2 = *0x27e90;
    arg3_00 = CONCAT44(in_R8,arg3);
    iVar9 = CONCAT44(in_register_0000000c,arg1);
    if (iVar9 == 0x1d) {
        iVar9 = 0x1d;
    }
    iVar8 = iVar9 * 0x58;
    iVar6 = *(iVar8 + 0xc + *0x27e90);
    if (iVar6 == 1) {
        *(arg2 + 0x358) = (1 << (iVar9 & 0x1f) & 0x20227d00U) != 0;
        *(arg2 + 0x360) = *(iVar8 + 0x10 + iVar2);
    }
    else if (iVar6 == 2) {
        while( true ) {
            LOCK();
            bVar10 = *(iVar8 + iVar2) == 1;
            if (bVar10) {
                *(iVar8 + iVar2) = 2;
            }
            UNLOCK();
            if (bVar10) {
                uVar7 = fcn.00024d60();
                *(iVar8 + 8 + iVar2) = uVar7;
                iVar4 = *0x27e90;
                *(iVar8 + 0x18 + *0x27e90) = *(arg2 + 0x2d0);
                *(iVar8 + 0x20 + iVar4) = *(arg2 + 0x2f0);
                *(iVar8 + 0x28 + iVar4) = *(arg2 + 0x268);
                *(iVar8 + 0x30 + iVar4) = *(arg2 + 0x2c8);
                *(iVar8 + 0x38 + iVar4) = *(arg2 + 0x2a0);
                *(iVar8 + 0x40 + iVar4) = *arg2;
                uStackX_18 = *(arg2 + 0x268) & 0xfffffffffffffdff;
                *(arg2 + 0x268) = uStackX_18;
                *(arg2 + 0x2a0) = iVar4 + 0x48 + iVar8;
                *(arg2 + 0x358) = (1 << (iVar9 & 0x1f) & 0x20227d00U) != 0;
                *(arg2 + 0x360) = *(iVar8 + 0x10 + iVar2);
                return;
            }
            iVar6 = fcn.00024d60();
            iVar3 = *0x27e90;
            if (*(iVar8 + 8 + iVar2) == iVar6) break;
            fcn.000102a0();
        }
        *(arg2 + 0x2d0) = *(iVar8 + 0x18 + *0x27e90);
        *(arg2 + 0x2f0) = *(iVar8 + 0x20 + iVar3);
        *(arg2 + 0x268) = *(iVar8 + 0x28 + iVar3);
        *(arg2 + 0x2c8) = *(iVar8 + 0x30 + iVar3);
        *(arg2 + 0x2a0) = *(iVar8 + 0x38 + iVar3);
        *arg2 = *(iVar8 + 0x40 + iVar3);
        *(iVar8 + iVar2) = 1;
    }
    else if (iVar6 != -1) {
        do {
            fcn.000102a0();
        } while( true );
    }
    if ((iVar4 == 0) || (pcVar1 = *(iVar4 + iVar9 * 8), pcVar1 == NULL)) {
        if (iVar9 < 0x20) {
            while( true ) {
                LOCK();
                bVar10 = *0x27e88 == 1;
                if (bVar10) {
                    *0x27e88 = 2;
                }
                UNLOCK();
                if (bVar10) break;
                fcn.000102a0();
            }
            uVar5 = fcn.00024e18();
            if ((uVar5 & 2) != 0) {
                fcn.00024a9c();
            }
            if ((uVar5 & 0x10) != 0) {
                fcn.0002544c();
            }
            fcn.00022530(iVar9,arg2);
            fcn.00022864(0x27930,arg2,arg3_00,in_R9);
            *0x27e88 = 1;
            if (*(iVar8 + 0xc + iVar2) != 1) {
                do {
                    fcn.000102a0();
                } while( true );
            }
        }
    }
    else {
        (*pcVar1)(iVar9,arg2);
    }
    return;
}


/* fcn.00010e2c @ 0x10e2c */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h

void fcn.00010e2c(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    int16_t *piVar3;
    code *pcVar4;
    uint32_t arg1_00;
    ulong uVar5;
    int64_t iVar6;
    ulong *puVar7;
    int16_t *piVar8;
    int64_t iVar9;
    int64_t *piVar10;
    uint64_t uVar11;
    int64_t iStackX_8;
    ulong *puStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_f8;
    uchar auStack_f0 [8];
    int64_t iStack_e8;
    uchar auStack_d0 [8];
    int *apiStack_c8 [4];
    ulong uStack_a8;
    ulong uStack_a0;
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_41h;
    int64_t var_19h;
    int64_t var_11h;
    
    iStackX_8 = arg1;
    iVar1 = fcn.0001fbb8(0x25b50,arg1);
    fcn.00022060(-(iVar1 != 0) & iVar1 + 0x18U);
    fcn.00012b80(&iStackX_8,&iStack_f8,&iStackX_20);
    *0x27b08 = fcn.0001f974(6,0x78,0x25d60);
    *0x25f18 = fcn.0001f974(6,0x88,0x25e90);
    *0x26a38 = *0x27b08;
    *(*0x27b08 + 0x58) = *0x25f18;
    if (*0x27ca8 == 0) {
        *0x27ca8 = *0x26a38;
        *0x27ca0 = *(*0x26a38 + 0x58);
    }
    do {
        if (*arg1 == -1) {
            arg1 = 0;
code_r0x00010f0f:
            if ((arg1 == NULL) || ((*(arg1 + 8) == *0x25ae0 && (*(arg1 + 0x10) == *0x25ae8)))) break;
        }
        else if (*arg1 == 2) goto code_r0x00010f0f;
        arg1 = arg1 + *(arg1 + 2);
    } while( true );
    *0x26a70 = *(arg1 + 0x20);
    *0x26a20 = *(arg1 + 0x40);
    *0x26a68 = *(arg1 + 0x18);
    *0x27e28 = *(arg1 + 0x30);
    *0x27e30 = *(arg1 + 0x38);
    *0x29c20 = 0x27e28;
    *0x26a90 = ((*0x26a70 & 0xfff) != 0) + (*0x26a70 >> 0xc);
    *0x26aa0 = *0x26b88;
    *0x26a88 = *0x26a68;
    fcn.000138a4(0x26a08,0x25b20,0,0x26a28);
    *0x27b20 = *0x26a08;
    *0x27ba0 = "ldri";
    *0x29c28 = 0x26a28;
    fcn.0001826c(0x200,8);
    fcn.00017f50(0x25a10,*0x27e48,0x27e50);
    *0x27e38 = 0x27e38;
    *0x27e40 = 0x27e38;
    fcn.00017ba0(0x26a28);
    piVar10 = &iStackX_8;
    fcn.00012f50(piVar10,iStack_f8,iStackX_20);
    fcn.00010c20(piVar10,iStack_f8);
    fcn.00010470(apiStack_c8,0x90);
    iVar1 = *0x29c28;
    piVar2 = *(*0x29c28 + 0x40);
    arg1_00 = piVar2;
    apiStack_c8[0] = piVar2;
    *NULL = fcn.00020270(arg1_00);
    if (*piVar2 == 0x5a4d) {
        piVar2 = *(piVar2 + 0xf) + piVar2;
    }
    if (*piVar2 == 0x5a56) {
        *0x10 = (piVar2[3] - *(piVar2 + 6)) + 0x28;
    }
    else if (*piVar2 == 0x4550) {
        *0x10 = piVar2[0x15];
    }
    else {
        *0x10 = 0;
    }
    *NULL = *0x10 & 0xffffffff;
    fcn.00020214(arg1_00,auStack_f0);
    uStack_a0 = *(iVar1 + 0x40);
    uStack_a8 = 0x2202c;
    fcn.0001d47c(0x25ce0,0x25de0);
    fcn.0001d47c(0x25c30,iStackX_8);
    fcn.0001d47c(0x259d0,0x26650);
    fcn.0001f484(1,0x3041000,iStackX_20,0x25d00);
    puStackX_10 = 0xffffffffffffffff;
    iVar1 = fcn.000160ec(1,4);
    if (iVar1 < 0) {
        uVar5 = 0;
        iVar1 = fcn.000160ec(0,4);
        if (iVar1 < 0) goto code_r0x00011218;
    }
    puVar7 = puStackX_10 + 0x3fffffU & 0xffffffffffc00000;
    iVar1 = ((puVar7 - puStackX_10 & 0xfffU) != 0) + (puVar7 - puStackX_10 >> 0xc);
    if (iVar1 != 0) {
        fcn.00016160(puStackX_10,iVar1);
    }
    puStackX_10 = puVar7 + 0x200;
    if (0x400 - iVar1 != 0) {
        fcn.00016160(puStackX_10,0x400 - iVar1);
    }
    *(puVar7 + 2) = 0;
    *0x27bd8 = puVar7;
    *puVar7 = 0x5453595320494249;
    uVar5 = 0x25bb0;
    puVar7[1] = *0x27b08;
    fcn.0001d47c(0x25bb0,0x27bc8);
code_r0x00011218:
    fcn.00019d78(uVar5,*0x29c28,*0x27b20);
    iVar6 = 0x20;
    iVar1 = 0x29880;
    do {
        *iVar1 = iVar1;
        *(iVar1 + 8) = iVar1;
        iVar1 = iVar1 + 0x10;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    fcn.000182dc(0x200,0x1e,0x1a340,0);
    fcn.000182dc(0x200,0x10,0x1fbb4,0);
    fcn.000182dc(0x200,8,0x1bee4,0);
    fcn.000182dc(0x200,0x10,0x1befc,0);
    *0x29a80 = 2;
    *0x27e58 = 0x27e58;
    *0x27e60 = 0x27e58;
    fcn.0001826c(0x200,8);
    fcn.00017f50(0x25b90,iStack_e8,auStack_d0);
    iVar1 = fcn.0001fbb8(0x25b50,iStackX_8);
    if (iVar1 != 0) {
        iVar6 = 1;
        for (piVar2 = iVar1 + 0x1c; *piVar2 != -0x80000000; piVar2 = piVar2 + 6) {
            iVar6 = iVar6 + 1;
        }
        iVar1 = fcn.0001f974(4,iVar6 * 0x18,iVar1 + 0x18);
        fcn.0001d47c(0x25c20,iVar1);
    }
    uVar5 = 0x25cf0;
    fcn.00013ab0(0x27b18,0x25cf0,0x260f0,0);
    piVar10 = 0x26370;
    fcn.00013640(0x26370);
    fcn.00013640(0x265a0);
    piVar3 = *0x27b00;
    piVar8 = *0x27b00;
code_r0x000113ea:
    for (; *piVar8 != -1; piVar8 = piVar8 + piVar8[1]) {
        if (*piVar8 == 5) goto code_r0x000113f5;
    }
    piVar8 = NULL;
code_r0x000113f5:
    if (piVar8 != NULL) {
        uVar11 = 0;
        do {
            if (*piVar3 == -1) {
                piVar3 = NULL;
code_r0x00011417:
                if (piVar3 == NULL) goto code_r0x00011434;
                if ((*(piVar3 + 4) == *(piVar8 + 4)) && (*(piVar3 + 8) == *(piVar8 + 8))) goto code_r0x00011430;
            }
            else if (*piVar3 == 0xc) goto code_r0x00011417;
            piVar3 = piVar3 + piVar3[1];
        } while( true );
    }
    fcn.0001fcd8(0x25a20);
    uVar11 = *0x27c78;
    if (uVar11 != 0) {
        iVar1 = uVar11 * 0x10 + *0x27c88;
        do {
            iVar1 = iVar1 + -0x10;
            fcn.000138a4(0x27bf8,iVar1,0,0x26d20);
            uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
    }
    uVar5 = 0x192cc;
    fcn.0001fcd8(0x25b30);
    iVar6 = *0x27b20;
    iVar1 = *0x27b08;
    iVar9 = 0;
    pcVar4 = 0x24840;
    while (pcVar4 != NULL) {
        (*pcVar4)(iVar6,iVar1);
        iVar9 = iVar9 + 1;
        pcVar4 = *(iVar9 * 8 + 0x26f30);
    }
    fcn.000189fc();
    iVar1 = *0x26370;
    do {
        if (iVar1 == 0) {
code_r0x00011550:
            fcn.0001f484(1,0x3041001,uVar5,0x25d00);
            (***0x27b10)(*0x27b10);
            iStackX_18 = 0;
            while (iStackX_18 == 0) {
                fcn.000102a0();
            }
            return;
        }
        if (piVar10[4] == '\0') {
            fcn.0001f484(0x80000002,0x3041000,uVar5,0x25d00);
            goto code_r0x00011550;
        }
        piVar10 = piVar10 + 5;
        iVar1 = *piVar10;
    } while( true );
code_r0x00011430:
    uVar11 = *(piVar3 + 0xc);
code_r0x00011434:
    fcn.00019fb4(*(piVar8 + 4),uVar5,0,uVar11);
    piVar8 = piVar8 + piVar8[1];
    piVar3 = *0x27b00;
    goto code_r0x000113ea;
}


/* fcn.000102a2 @ 0x102a2 */

void fcn.000102a2(void)

{
    return;
}


/* fcn.0001fbb8 @ 0x1fbb8 */

int16_t * fcn.0001fbb8(uint32_t arg1,int64_t arg2)

{
    uint in_register_0000000c;
    
    do {
        if (*arg2 == -1) {
            arg2 = 0;
code_r0x0001fbd8:
            if ((arg2 == NULL) ||
               ((*CONCAT44(in_register_0000000c,arg1) == *(arg2 + 8) &&
                (*(CONCAT44(in_register_0000000c,arg1) + 8) == *(arg2 + 0x10))))) {
                return arg2;
            }
        }
        else if (*arg2 == 4) goto code_r0x0001fbd8;
        arg2 = arg2 + *(arg2 + 2);
    } while( true );
}


/* fcn.00010b90 @ 0x10b90 */

uint64_t fcn.00010b90(void)

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


/* fcn.00010b40 @ 0x10b40 */

void fcn.00010b40(void)

{
    return;
}


/* fcn.00010aa0 @ 0x10aa0 */

uint64_t fcn.00010aa0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102a0 @ 0x102a0 */

void fcn.000102a0(void)

{
    return;
}


/* fcn.00010b30 @ 0x10b30 */

void fcn.00010b30(void)

{
    return;
}


/* fcn.00020390 @ 0x20390 */

ulong fcn.00020390(void)

{
    *0x27c88 = fcn.0001f9d8(*0x27c7c,*0x27c7c << 4,*0x27c7c + 0x10 << 4,*0x27c88);
    if (*0x27c88 != 0) {
        *0x27c80 = fcn.0001f9d8(*0x27c7c,*0x27c7c << 3,*0x27c7c + 0x10 << 3,*0x27c80);
        if (*0x27c80 != 0) {
            *0x27c90 = fcn.0001f9d8(*0x27c7c,*0x27c7c << 3,*0x27c7c + 0x10 << 3,*0x27c90);
            if (*0x27c90 != 0) {
                *0x27c7c = *0x27c7c + 0x10;
                return 0;
            }
            *0x27c90 = 0;
        }
        if (*0x27c88 != 0) {
            fcn.0001ab70();
        }
    }
    if (*0x27c80 != 0) {
        fcn.0001ab70(*0x27c80);
    }
    if (*0x27c90 != 0) {
        fcn.0001ab70(*0x27c90);
    }
    return 0x8000000000000009;
}


/* fcn.0001f974 @ 0x1f974 */

//WARNING: Removing unreachable block (ram,0x0001f9aa)
//WARNING: Removing unreachable block (ram,0x0001f9af)
//WARNING: Removing unreachable block (ram,0x0001f9b4)

ulong fcn.0001f974(int64_t noname_0,int64_t arg1,int64_t arg2)

{
    fcn.0001a7c4(noname_0);
    return 0;
}


/* fcn.0001a7c4 @ 0x1a7c4 */

int64_t fcn.0001a7c4(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t in_EDX;
    uint in_register_00000014;
    int64_t in_R8;
    
    iVar1 = fcn.0001a714(arg1,in_EDX,in_R8);
    if (((-1 < iVar1) && (*0x27c00 != '\0')) && (uVar2 = arg1 - 5, uVar2 < 2)) {
        fcn.0001bd4c(uVar2,CONCAT44(in_register_00000014,in_EDX));
    }
    return iVar1;
}


/* fcn.0001a714 @ 0x1a714 */

uint64_t fcn.0001a714(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_00000014;
    
    if (((arg1 - 0xe < 0x6ffffff2) || (arg1 == 7)) || (arg3 == 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        *arg3 = 0;
        if ((CONCAT44(in_register_00000014,arg2) < 0xffffffffffffffd8) && (iVar2 = fcn.0001d634(0x26cf8), -1 < iVar2))
        {
            uVar3 = fcn.0001a8a0(arg1,CONCAT44(in_register_00000014,arg2),0);
            *arg3 = uVar3;
            *0x26d08 = 1;
            fcn.0001bc20(*0x26d00);
            return ~-(*arg3 != 0) & 0x8000000000000009;
        }
        uVar1 = 0x8000000000000009;
    }
    return uVar1;
}


/* fcn.0001bd4c @ 0x1bd4c */

void fcn.0001bd4c(ulong noname_0,int64_t arg1)

{
    int *arg2;
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint *puVar4;
    int *piVar5;
    uint32_t uVar6;
    int *piVar7;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    uchar auStackX_20 [8];
    int64_t var_40h;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    
    if ((*0x27b38 == '\0') && (*0x26d38 != '\0')) {
        if (*0x27c08 == NULL) {
            (**(*0x27c48 + 0xc0))(0x25b40);
        }
        uStackX_10 = 0;
        fcn.0001c530(&uStackX_10,0,auStackX_20,&uStackX_18);
        do {
            arg2 = fcn.0001f8f0(uStackX_10);
            iVar1 = fcn.0001c530(&uStackX_10,arg2,auStackX_20,&uStackX_18);
            if (iVar1 < 0) {
                fcn.0001ab70(arg2);
            }
        } while (iVar1 == -0x7ffffffffffffffb);
        uVar6 = 0;
        uVar2 = uStackX_10 / uStackX_18;
        piVar5 = arg2;
        for (uVar3 = uVar2; uVar3 != 0; uVar3 = uVar3 - 1) {
            if (*piVar5 - 5U < 2) {
                uVar6 = uVar6 + 1;
            }
            piVar5 = piVar5 + uStackX_18;
        }
        puVar4 = fcn.0001f8f0(uVar6 * uStackX_18 + 0x10);
        puVar4[3] = 0;
        piVar5 = puVar4 + 4;
        puVar4[1] = uVar6;
        *puVar4 = 1;
        puVar4[2] = uStackX_18;
        piVar7 = arg2;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
            if (*piVar7 - 5U < 2) {
                if ((uStackX_18 != 0) && (piVar5 != piVar7)) {
                    fcn.00010430(piVar5,piVar7,uStackX_18);
                }
                *(piVar5 + 8) = *(piVar5 + 8) & 0x8000000000024000;
                piVar5 = piVar5 + uStackX_18;
            }
            piVar7 = piVar7 + uStackX_18;
        }
        fcn.0001ab70(arg2);
        (**(*0x27c48 + 0xc0))(0x25b40,puVar4);
        if (*0x27c08 != NULL) {
            fcn.0001ab70();
        }
        *0x27c08 = puVar4;
    }
    return;
}


/* fcn.00010430 @ 0x10430 */

int64_t fcn.00010430(int64_t arg1,uint32_t arg2,int64_t arg3)

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


/* fcn.00022060 @ 0x22060 */

ulong fcn.00022060(int64_t arg1)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    ulong in_R8;
    uint16_t uStack_38;
    int64_t iStack_36;
    uchar auStack_28 [32];
    
    *0x27e90 = 0x27ea0;
    *0x27e98 = 0x289a0;
    *0x27e88 = 1;
    fcn.00010490(0x27ea0,0xb00,CONCAT71(in_R8 >> 8,0xff));
    if (arg1 != 0) {
        for (puVar1 = arg1 + 4; *puVar1 != 0x80000000; puVar1 = puVar1 + 6) {
            if (2 < *puVar1) {
                return 0x8000000000000002;
            }
            if (puVar1[-1] < 0x20) {
                *(puVar1[-1] * 0x58 + 0x27eac) = *puVar1;
            }
        }
    }
    fcn.00010b60(&uStack_38);
    uVar2 = uStack_38 + 1 >> 4;
    if (0x20 < uVar2) {
        uVar2 = 0x20;
    }
    fcn.00010957(auStack_28);
    *0x27e80 = uVar2;
    fcn.00022438(iStack_36,auStack_28,0x27e80);
    return 0;
}


/* fcn.00012b80 @ 0x12b80 */

//WARNING: Variable defined which should be unmapped: var_bp_18h

ulong fcn.00012b80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int16_t *piVar4;
    uint64_t *puVar5;
    int16_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t arg2_00;
    int16_t *piVar11;
    int iVar12;
    uint64_t uVar13;
    int16_t *piVar14;
    int16_t *piVar15;
    uint64_t uStackX_8;
    uint64_t *puStackX_10;
    uint64_t *puStackX_18;
    uint64_t uStackX_20;
    uint32_t var_48h;
    int64_t var_60h;
    int16_t *piStack_58;
    int64_t var_bp_18h;
    
    iVar1 = *arg1;
    iVar12 = 0;
    uVar2 = 0;
    do {
        *(uVar2 + 0x28ac0) = 0;
        *(uVar2 + 0x28ac8) = 0;
        iVar8 = 0xc;
        iVar7 = uVar2 + 0x28ad8;
        *(uVar2 + 0x28ad0) = iVar12;
        do {
            *iVar7 = iVar7;
            *(iVar7 + 8) = iVar7;
            piVar15 = *0x27b00;
            iVar7 = iVar7 + 0x10;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        iVar12 = iVar12 + 1;
        uVar2 = uVar2 + 0xe8;
    } while (uVar2 < 0xd98);
    piStack_58 = NULL;
    uVar2 = 0;
    puStackX_10 = arg2;
    puStackX_18 = arg3;
    iVar7 = fcn.0001fbb8(0x259d0,*0x27b00);
    if (iVar7 != 0) {
        iVar8 = iVar7 + 0x18;
        uVar13 = *(iVar7 + 2) - 0x18;
        if (((iVar8 != 0) && (uVar13 - 1 < 0x80)) && (iVar8 != 0x26650)) {
            fcn.00010430(0x26650,iVar8,uVar13);
            piVar15 = *0x27b00;
        }
    }
    iVar8 = 0;
    iVar7 = 0;
    if (*0x26650 != 0xf) {
        iVar3 = 0;
        do {
            iVar7 = iVar7 + 1;
            iVar8 = iVar8 + *(iVar3 + 0x26654) * 0x1000;
            iVar3 = iVar7 * 8;
        } while (*(iVar3 + 0x26650) != 0xf);
    }
    piVar14 = *arg1;
    uVar13 = iVar8 + 0x10000;
    iVar6 = *piVar14;
    piVar4 = piVar14;
    while (uVar9 = 0, arg2_00 = 0, iVar6 != -1) {
        if (((iVar6 == 3) && (*(piVar4 + 0xc) == 0)) &&
           (((*(piVar4 + 0xe) & 0x85c387) == 7 &&
            ((*(piVar4 + 0x10) <= *(iVar1 + 0x28) && (*(iVar1 + 0x20) <= *(piVar4 + 0x10) + *(piVar4 + 0x14))))))) {
            iVar7 = *(piVar4 + 0x10);
            uVar2 = *(piVar4 + 0xe);
            uStackX_20 = *(iVar1 + 0x10) + 0xfffU & 0xfffffffffffff000;
            iVar6 = *piVar15;
            uStackX_8 = (*(piVar4 + 0x14) - uStackX_20) + iVar7 & 0xfffffffffffff000;
            piVar11 = piVar15;
            goto code_r0x00012d26;
        }
        piVar4 = piVar4 + piVar4[1];
        iVar6 = *piVar4;
    }
    goto code_r0x00012dd4;
code_r0x00012d26:
    if (iVar6 == -1) goto code_r0x00012d2c;
    if (iVar6 == 2) goto code_r0x00012d2f;
    piVar11 = piVar11 + piVar11[1];
    iVar6 = *piVar11;
    goto code_r0x00012d26;
code_r0x00012d2c:
    piVar11 = NULL;
code_r0x00012d2f:
    fcn.00012a4c(&uStackX_20,&uStackX_8,piVar11);
    if (uVar13 <= uStackX_8) {
        uVar9 = uStackX_8;
        arg2_00 = uStackX_20;
        goto code_r0x00012ec3;
    }
    arg2_00 = *(iVar1 + 0x28) + 0xfffU & 0xfffffffffffff000;
    uVar9 = *(iVar1 + 0x20) - arg2_00 & 0xfffffffffffff000;
    if (uVar13 <= uVar9) goto code_r0x00012ec3;
    uStackX_20 = iVar7 + 0xfffU & 0xfffffffffffff000;
    uStackX_8 = piVar14 - uStackX_20 & 0xfffffffffffff000;
    iVar6 = *piVar15;
    piVar11 = piVar15;
    while (iVar6 != -1) {
        if (iVar6 == 2) goto code_r0x00012db2;
        piVar11 = piVar11 + piVar11[1];
        iVar6 = *piVar11;
    }
    piVar11 = NULL;
code_r0x00012db2:
    fcn.00012a4c(&uStackX_20,&uStackX_8,piVar11);
    uVar9 = uStackX_8;
    arg2_00 = uStackX_20;
    piStack_58 = piVar4;
code_r0x00012dd4:
    if (uVar9 < uVar13) {
        uVar10 = 0xffffffffffffffff;
        iVar6 = *piVar14;
        while (iVar6 != -1) {
            if (((((piVar14 != piStack_58) && (iVar6 == 3)) && (*(piVar14 + 0xc) == 0)) &&
                ((*(piVar14 + 0xe) & 0x85c387) == 7)) &&
               ((uVar10 == 0xffffffffffffffff || (uVar10 < *(piVar14 + 0x10))))) {
                uStackX_20 = *(piVar14 + 0x10) + 0xfffU & 0xfffffffffffff000;
                uStackX_8 = (*(piVar14 + 0x14) - uStackX_20) + *(piVar14 + 0x10) & 0xfffffffffffff000;
                iVar6 = *piVar15;
                piVar4 = piVar15;
                while (iVar6 != -1) {
                    if (iVar6 == 2) goto code_r0x00012e7d;
                    piVar4 = piVar4 + piVar4[1];
                    iVar6 = *piVar4;
                }
                piVar4 = NULL;
code_r0x00012e7d:
                fcn.00012a4c(&uStackX_20,&uStackX_8,piVar4);
                if (uVar13 <= uStackX_8) {
                    uVar2 = *(piVar14 + 0xe);
                    uVar10 = *(piVar14 + 0x10);
                    uVar9 = uStackX_8;
                    arg2_00 = uStackX_20;
                }
            }
            piVar14 = piVar14 + piVar14[1];
            iVar6 = *piVar14;
        }
    }
code_r0x00012ec3:
    uVar13 = 0;
    puVar5 = 0x261f0;
    uVar10 = *0x261f0;
    if ((uVar2 >> 0x19 & 1) == 0) {
        while (uVar10 != 0) {
            if ((puVar5[2] != '\0') && ((*puVar5 & uVar2) != 0)) {
                uVar13 = uVar13 | puVar5[1];
            }
            puVar5 = puVar5 + 3;
            uVar10 = *puVar5;
        }
    }
    else {
        while (uVar10 != 0) {
            if ((puVar5[2] != '\0') && ((*puVar5 & uVar2) != 0)) {
                uVar13 = uVar13 | puVar5[1];
            }
            puVar5 = puVar5 + 3;
            uVar10 = *puVar5;
        }
    }
    fcn.00015720(7,arg2_00,uVar9 >> 0xc,uVar13);
    *puStackX_10 = arg2_00;
    *puStackX_18 = uVar9;
    return 0;
}


/* fcn.000138a4 @ 0x138a4 */

int64_t fcn.000138a4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    ulong *puVar4;
    ulong *arg1_00;
    ulong *puVar5;
    int64_t iVar6;
    ulong *puVar7;
    uchar auStackX_8 [8];
    char in_stack_00000028;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 != 0)) {
        return -0x7ffffffffffffffe;
    }
    puVar4 = NULL;
    arg1_00 = NULL;
    iVar6 = -0x7ffffffffffffff7;
    iVar3 = arg2;
    if ((*arg1 != 0) && (iVar6 = fcn.00013f48(*arg1,arg2,auStackX_8,*0x27b20), -1 < iVar6)) {
        return -0x7ffffffffffffffe;
    }
    fcn.0001d66c(0x26628);
    iVar3 = fcn.000136cc(arg2,CONCAT71(iVar3 >> 8,1));
    if (iVar3 == 0) goto code_r0x00013a5d;
    puVar4 = fcn.0001f924(4,0x58);
    if (puVar4 == NULL) {
code_r0x00013955:
        iVar6 = -0x7ffffffffffffff7;
    }
    else {
        arg1_00 = *arg1;
        if (arg1_00 == NULL) {
            arg1_00 = fcn.0001f924(4,0x38);
            if (arg1_00 == NULL) goto code_r0x00013955;
            *arg1_00 = 0x6c646e68;
            puVar7 = arg1_00 + 1;
            puVar5 = arg1_00 + 3;
            *puVar5 = puVar5;
            arg1_00[4] = puVar5;
            *0x27b68 = *0x27b68 + 1;
            arg1_00[6] = *0x27b68;
            *puVar7 = 0x26640;
            arg1_00[2] = *0x26648;
            **0x26648 = puVar7;
            *0x26648 = puVar7;
        }
        else {
            iVar6 = fcn.0001369c(arg1_00);
            if (iVar6 < 0) goto code_r0x00013a5d;
        }
        *puVar4 = 0x63666970;
        piVar1 = puVar4 + 1;
        puVar4[3] = arg1_00;
        piVar2 = arg1_00 + 3;
        puVar4[6] = iVar3;
        puVar7 = puVar4 + 8;
        puVar4[7] = arg4;
        *puVar7 = puVar7;
        puVar4[9] = puVar7;
        puVar4[10] = 0;
        iVar6 = *piVar2;
        puVar4[2] = piVar2;
        *piVar1 = iVar6;
        *(iVar6 + 8) = piVar1;
        *piVar2 = piVar1;
        piVar1 = puVar4 + 4;
        *piVar1 = iVar3 + 0x28;
        puVar7 = *(iVar3 + 0x30);
        puVar4[5] = puVar7;
        *puVar7 = piVar1;
        *(iVar3 + 0x30) = piVar1;
        if (in_stack_00000028 != '\0') {
            for (puVar7 = *(iVar3 + 0x38); puVar7 != iVar3 + 0x38; puVar7 = *puVar7) {
                fcn.000184e8(puVar7[2]);
            }
        }
        iVar6 = 0;
    }
code_r0x00013a5d:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    if (iVar6 < 0) {
        if (puVar4 != NULL) {
            fcn.0001ab70(puVar4);
        }
    }
    else {
        *arg1 = arg1_00;
    }
    return iVar6;
}


/* fcn.0001826c @ 0x1826c */

ulong fcn.0001826c(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong extraout_RAX;
    uint in_register_00000014;
    int64_t in_R8;
    int64_t in_R9;
    
    if (((arg1 & 0x300U) == 0) ||
       (((CONCAT44(in_register_00000014,arg2) - 4U & 0xfffffffffffffff3) == 0 &&
        (CONCAT44(in_register_00000014,arg2) != 0xc)))) {
        fcn.000182dc(arg1,CONCAT44(in_register_00000014,arg2),in_R8,in_R9);
        uVar1 = extraout_RAX;
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00017f50 @ 0x17f50 */

uint64_t fcn.00017f50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        iVar3 = arg2;
        fcn.0001d66c(0x26628);
        puVar4 = NULL;
        iVar3 = fcn.000136cc(arg1,CONCAT71(iVar3 >> 8,1));
        if (iVar3 != 0) {
            puVar4 = fcn.0001f8f0(0x30);
            if (puVar4 != NULL) {
                *(arg2 + 0x58) = *(arg2 + 0x58) | 2;
                piVar1 = puVar4 + 2;
                *puVar4 = 0x6e747270;
                puVar4[5] = iVar3 + 0x28;
                puVar4[1] = iVar3;
                puVar4[4] = arg2;
                *piVar1 = iVar3 + 0x38;
                puVar2 = *(iVar3 + 0x40);
                puVar4[3] = puVar2;
                *puVar2 = piVar1;
                *(iVar3 + 0x40) = piVar1;
            }
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
        if (puVar4 != NULL) {
            *arg3 = puVar4;
        }
        uVar5 = ~-(puVar4 != NULL) & 0x8000000000000009;
    }
    return uVar5;
}


/* fcn.00017ba0 @ 0x17ba0 */

void fcn.00017ba0(int64_t arg1)

{
    ulong *puVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    ulong uVar4;
    char cVar5;
    int iVar6;
    uint32_t uVar7;
    uint *arg1_00;
    uint *puVar8;
    uint64_t uVar9;
    int64_t in_RDX;
    ulong *puVar10;
    int64_t iVar11;
    ulong *puVar12;
    uint64_t uVar13;
    int *piVar14;
    
    uVar13 = 0;
    if (((*0x27b58 != 0) && (iVar6 = fcn.00017a6c(arg1,in_RDX), iVar6 == 1)) &&
       (arg1_00 = fcn.0001f924(4,0x40), arg1_00 != NULL)) {
        *arg1_00 = 0x44525049;
        *(arg1_00 + 6) = *(arg1 + 0x40);
        *(arg1_00 + 8) = *(arg1 + 0x48);
        piVar3 = *(arg1 + 0x40);
        uVar7 = 0;
        if (*piVar3 == 0x5a4d) {
            uVar7 = *(piVar3 + 0x1e);
        }
        uVar9 = uVar7;
        if ((*(piVar3 + uVar9) == 0x4550) && (uVar7 = *(piVar3 + uVar9 + 0x38), (uVar7 & 0xfff) == 0)) {
            uVar2 = *(piVar3 + uVar9 + 0x14);
            puVar1 = arg1_00 + 0xc;
            *(arg1_00 + 10) = 0;
            *puVar1 = puVar1;
            *(arg1_00 + 0xe) = puVar1;
            if (*(piVar3 + uVar9 + 6) != 0) {
                piVar14 = piVar3 + uVar2 + uVar9 + 0x28;
                do {
                    if ((piVar14[5] & 0xa0000000U) == 0x20000000) {
                        puVar8 = fcn.0001f8f0(0x28);
                        if (puVar8 == NULL) {
                            return;
                        }
                        *puVar8 = 0x43525049;
                        *(puVar8 + 6) = piVar14[-1] + piVar3;
                        puVar10 = puVar8 + 2;
                        *(puVar8 + 8) = (uVar7 - *piVar14 & uVar7 - 1) + *piVar14;
                        *puVar10 = puVar1;
                        puVar12 = *(arg1_00 + 0xe);
                        *(puVar8 + 4) = puVar12;
                        *puVar12 = puVar10;
                        *(arg1_00 + 0xe) = puVar10;
                        *(arg1_00 + 10) = *(arg1_00 + 10) + 1;
                    }
                    uVar13 = uVar13 + 1;
                    piVar14 = piVar14 + 10;
                } while (uVar13 < *(piVar3 + uVar9 + 6));
            }
            if (*(arg1_00 + 10) != 0) {
                for (puVar10 = *puVar1; puVar12 = *puVar10, puVar10 != puVar1; puVar10 = *puVar10) {
                    for (; puVar12 != puVar1; puVar12 = *puVar12) {
                        uVar13 = puVar10[2];
                        if (puVar12[2] < uVar13) {
                            uVar4 = puVar10[3];
                            puVar10[2] = puVar12[2];
                            puVar10[3] = puVar12[3];
                            puVar12[2] = uVar13;
                            puVar12[3] = uVar4;
                        }
                    }
                }
                cVar5 = fcn.0001c648(arg1_00);
                if (cVar5 != '\0') {
                    uVar9 = *(arg1_00 + 6);
                    iVar11 = (-*(arg1 + 0x48) & 0xfff) + *(arg1 + 0x48);
                    *(arg1_00 + 8) = iVar11;
                    uVar13 = uVar9 + iVar11;
                    puVar10 = *puVar1;
                    while (puVar10 != puVar1) {
                        puVar12 = *puVar10;
                        if (uVar9 < puVar10[2]) {
                            fcn.00017b44(uVar9,puVar10[2] - uVar9,0x4000);
                        }
                        fcn.00017b44(puVar10[2],puVar10[3],0x20000);
                        uVar9 = puVar10[3] + puVar10[2];
                        puVar10 = puVar12;
                    }
                    if (uVar9 < uVar13) {
                        fcn.00017b44(uVar9,uVar13 - uVar9,0x4000);
                    }
                    puVar1 = arg1_00 + 2;
                    *puVar1 = 0x27e58;
                    *(arg1_00 + 4) = *0x27e60;
                    **0x27e60 = puVar1;
                    *0x27e60 = puVar1;
                }
            }
        }
    }
    return;
}


/* fcn.00012f50 @ 0x12f50 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_29h

ulong fcn.00012f50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    int16_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    int16_t *piVar11;
    uint64_t arg4;
    int64_t *piVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_67h;
    int64_t var_7fh;
    uchar auStack_88 [16];
    uint64_t uStack_78;
    uint32_t uStack_68;
    int64_t var_29h;
    int64_t var_19h;
    int32_t var_9h;
    
    iVar7 = *arg1;
    for (piVar11 = *0x27b00; *piVar11 != -1; piVar11 = piVar11 + piVar11[1]) {
        if (*piVar11 == 6) goto code_r0x00012fae;
    }
    piVar11 = NULL;
code_r0x00012fae:
    if (piVar11 == NULL) {
        uVar5 = 0x800000000000000e;
    }
    else {
        uVar1 = *(piVar11 + 4);
        uVar2 = *(piVar11 + 9);
        iStackX_10 = arg2;
        iStackX_18 = arg3;
        iStackX_20 = iVar7;
        iVar6 = fcn.0001f974(4,0x50,0x26120);
        *(iVar6 + 0x20) = (1LL << (uVar1 & 0x3f)) + -1;
        piVar9 = iVar6 + 8;
        *piVar9 = *0x261e0;
        *(iVar6 + 0x10) = 0x261e0;
        *(*piVar9 + 8) = piVar9;
        *0x261e0 = piVar9;
        iVar6 = fcn.0001f974(4,0x50,0x26190);
        piVar9 = iVar6 + 8;
        *(iVar6 + 0x20) = (1LL << (uVar2 & 0x3f)) + -1;
        piVar12 = NULL;
        *piVar9 = *0x26358;
        *(iVar6 + 0x10) = 0x26358;
        *(*piVar9 + 8) = piVar9;
        piVar11 = *arg1;
        iVar4 = *piVar11;
        *0x26358 = piVar9;
        if (iVar4 != -1) {
            do {
                uVar14 = 1;
                if (iVar4 == 3) {
                    uVar8 = *(piVar11 + 0xc);
                    if (uVar8 == 0) {
                        uVar13 = *(piVar11 + 0xe) & 0x85c387;
                        uVar8 = 0;
                        if (uVar13 == 7) {
                            uVar8 = (-((*(piVar11 + 0xe) & 0x2000000) != 0) & 3) + 2;
                        }
                        if (uVar13 == 3) {
                            uVar8 = 1;
                        }
                        if (uVar13 != 1) {
                            uVar14 = uVar8;
                        }
                        if ((*(piVar11 + 0xe) & 0x800000) != 0) {
                            uVar14 = 4;
                        }
                        if (uVar14 != 0) goto code_r0x0001312e;
                    }
                    else if (uVar8 == 1) {
code_r0x000130e9:
                        uVar14 = 3;
code_r0x0001312e:
                        piVar9 = 0x261f0;
                        iVar7 = *0x261f0;
                        while (iVar7 != 0) {
                            piVar9 = piVar9 + 3;
                            iVar7 = *piVar9;
                        }
                        if (uVar14 != 0) {
                            fcn.00011b10(0x20,uVar14,0,*(piVar11 + 0x10));
                        }
                    }
                    else if (uVar8 == 2) {
                        uVar14 = 2;
code_r0x000130d7:
                        fcn.000127b8(uVar14,*(piVar11 + 0x10),*(piVar11 + 0x14));
                    }
                    else {
                        if (uVar8 == 3) goto code_r0x000130e9;
                        if (3 < uVar8) {
                            if (uVar8 < 6) goto code_r0x0001312e;
                            if (uVar8 == 6) goto code_r0x000130d7;
                        }
                    }
                }
                piVar11 = piVar11 + piVar11[1];
                iVar4 = *piVar11;
            } while (iVar4 != -1);
            arg2 = iStackX_10;
            iVar7 = iStackX_20;
            arg3 = iStackX_18;
        }
        iVar6 = fcn.000124d8(arg2,auStack_88);
        if (-1 < iVar6) {
            fcn.000122cc(2,uStack_68,0,arg3);
        }
        piVar11 = *arg1;
        iVar4 = *piVar11;
        if (iVar4 != -1) {
            do {
                if (iVar4 == 2) {
                    uStackX_8 = *(piVar11 + 0xc);
                    iVar7 = fcn.000124d8(uStackX_8,auStack_88);
                    uVar8 = uStack_68;
                    if (((-1 < iVar7) && (iVar7 = fcn.000122cc(2,uStack_68,0,*(piVar11 + 0x10)), -1 < iVar7)) &&
                       ((uVar8 == 2 || (uVar8 == 5)))) {
                        fcn.00015720(*(piVar11 + 0x14),*(piVar11 + 0xc),*(piVar11 + 0x10) >> 0xc,
                                     uStack_78 & 0x7fffffffffffffff);
                    }
                }
                if (*piVar11 == 5) {
                    uStackX_8 = *(piVar11 + 4);
                    fcn.000122cc(2,3,0,*(piVar11 + 8));
                }
                piVar11 = piVar11 + piVar11[1];
                iVar4 = *piVar11;
            } while (iVar4 != -1);
            iVar7 = iStackX_20;
        }
        fcn.00012670(&uStackX_8,&iStackX_20);
        if (uStackX_8 != 0) {
            piVar9 = iStackX_20 + 8;
            uVar14 = uStackX_8;
            do {
                if (((piVar9[3] == 2) || (piVar9[3] == 5)) && (piVar9[4] == 0)) {
                    uVar3 = piVar9[-1];
                    uVar10 = *piVar9 + uVar3;
                    uStackX_8 = uVar3 + 0xfff & 0xfffffffffffff000;
                    arg4 = uVar10 - uStackX_8 & 0xfffffffffffff000;
                    if ((arg4 != 0) && (uStackX_8 <= uVar10)) {
                        if ((*arg1 < uVar3) || (uVar10 < *(iVar7 + 0x28))) {
                            fcn.00015720(7,uStackX_8,uVar10 - uStackX_8 >> 0xc,piVar9[1] & 0x7fffffffffffffff);
                            fcn.000122cc(2,*(piVar9 + 3),0,arg4);
                        }
                        else {
                            piVar12 = piVar9 + -1;
                        }
                    }
                }
                piVar9 = piVar9 + 7;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        iVar6 = iStackX_20;
        *0x27b00 = fcn.0001f974(4,*(iVar7 + 0x28) - *arg1,*arg1);
        *arg1 = *0x27b00;
        if (piVar12 != NULL) {
            uStackX_8 = *piVar12 + 0xfffU & 0xfffffffffffff000;
            uVar14 = (piVar12[1] - uStackX_8) + *piVar12;
            fcn.00015720(7,uStackX_8,uVar14 >> 0xc,piVar12[2] & 0x7fffffffffffffff);
            fcn.000122cc(2,*(piVar12 + 4),0,uVar14 & 0xfffffffffffff000);
        }
        fcn.0001ab70(iVar6);
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.00010c20 @ 0x10c20 */

void fcn.00010c20(ulong noname_0,int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    ulong noname_0_00;
    int64_t *piVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    
    iVar5 = *0x27b08;
    noname_0_00 = 0x26ea0;
    *0x27c58 = *0x27b20;
    *0x27c48 = *(*0x27b08 + 0x60);
    *0x27c60 = *(*0x27b08 + 0x58);
    *0x27c50 = *0x27b08;
    iVar2 = fcn.0001fbb8(0x26ea0,*0x27b00);
    if (iVar2 == 0) {
        uVar3 = fcn.00010b90();
        fcn.00010b40();
        uVar8 = in(0x1808);
        iVar2 = fcn.00010aa0(noname_0_00,0x1808);
        while( true ) {
            iVar1 = in(0x1808);
            uVar6 = ((uVar8 & 0xffffff) + 0x16b) - iVar1;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            fcn.000102a0();
        }
        iVar4 = fcn.00010aa0(uVar6,0x1808);
        if ((uVar3 >> 9 & 1) == 0) {
            fcn.00010b40();
        }
        else {
            fcn.00010b30();
        }
        *0x27c70 = (iVar4 - iVar2) * 0x2685;
    }
    else {
        *0x27c70 = *(iVar2 + 0x18);
    }
    fcn.00020390();
    uVar3 = 0;
    *(*(iVar5 + 0x58) + 0x68) = 0x228c0;
    if (*0x27c78 != 0) {
        piVar7 = *0x27c88;
        do {
            if ((*piVar7 == *0x25bc0) && (piVar7[1] == *0x25bc8)) {
                *(*0x27c80 + uVar3 * 8) = 0x22b44;
                *(*0x27c90 + uVar3 * 8) = 0x22a48;
                return;
            }
            uVar8 = uVar3 + 1;
            uVar3 = uVar8;
            piVar7 = piVar7 + 2;
        } while (uVar8 < *0x27c78);
    }
    if ((*0x27c78 < *0x27c7c) || (iVar5 = fcn.00020390(), iVar5 == 0)) {
        piVar7 = *0x27c88;
        uVar9 = *0x27c78;
        uVar3 = *0x27c78;
        (*0x27c88)[uVar3 * 2] = *0x25bc0;
        piVar7[uVar3 * 2 + 1] = *0x25bc8;
        *(*0x27c80 + uVar9 * 8) = 0x22b44;
        *(*0x27c90 + *0x27c78 * 8) = 0x22a48;
        *0x27c78 = *0x27c78 + 1;
        iVar5 = fcn.0001f974(4,0x10,0x25bc0);
        if (iVar5 != 0) {
            (**(*0x27c48 + 0xc0))(0x25bc0,iVar5);
        }
    }
    return;
}


/* fcn.00010470 @ 0x10470 */

int64_t fcn.00010470(int64_t arg1,int64_t arg2)

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


/* fcn.00020270 @ 0x20270 */

int * fcn.00020270(uint32_t arg1)

{
    int *piVar1;
    int16_t iVar2;
    uint in_register_0000000c;
    int *piVar3;
    int64_t iVar4;
    int *piVar5;
    uint32_t *puVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar9 = 0;
    if (*piVar3 == 0x5a4d) {
        piVar5 = *(piVar3 + 0xf) + piVar3;
    }
    else {
        piVar5 = piVar3;
    }
    if (*piVar5 == 0x5a56) {
        puVar6 = piVar5 + 8;
        if (*puVar6 == 0) {
            return NULL;
        }
        iVar9 = 0x28 - *(piVar5 + 6);
        iVar4 = piVar5 + iVar9 + *puVar6;
        goto code_r0x00020329;
    }
    if (*piVar5 != 0x4550) {
        return NULL;
    }
    iVar2 = piVar5[1];
    if (iVar2 == 0x14c) {
        iVar2 = 0x10b;
code_r0x000202ef:
        if (iVar2 != 0x10b) goto code_r0x00020301;
        uVar7 = piVar5[0x1d];
        puVar6 = piVar5 + 0x2a;
code_r0x0002031a:
        iVar4 = *puVar6 + piVar3;
        if (6 < uVar7) goto code_r0x00020329;
    }
    else {
        if ((iVar2 != 0x200) && (iVar2 != -0x799c)) {
            iVar2 = piVar5[6];
            goto code_r0x000202ef;
        }
code_r0x00020301:
        if (piVar5[6] == 0x20b) {
            uVar7 = piVar5[0x21];
            puVar6 = piVar5 + 0x2e;
            goto code_r0x0002031a;
        }
    }
    puVar6 = NULL;
    iVar4 = 0;
code_r0x00020329:
    if ((iVar4 != 0) && (puVar6 != NULL)) {
        uVar8 = 0;
        if (puVar6[1] != 0) {
            piVar5 = iVar4 + 0x10;
            do {
                if ((piVar5[-1] == 2) && (*piVar5 != 0)) {
                    piVar1 = piVar5[1] + iVar9 + piVar3;
                    if (*piVar1 == 0x3031424e) {
                        return piVar1 + 4;
                    }
                    if (*piVar1 == 0x434f544d) {
                        return piVar1 + 5;
                    }
                    if (*piVar1 == 0x53445352) {
                        return piVar1 + 6;
                    }
                }
                uVar8 = uVar8 + 0x1c;
                piVar5 = piVar5 + 7;
            } while (uVar8 < puVar6[1]);
        }
    }
    return NULL;
}


/* fcn.00020214 @ 0x20214 */

ulong fcn.00020214(uint32_t arg1,int64_t arg2)

{
    int *piVar1;
    uint in_register_0000000c;
    int *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar2 == 0x5a4d) {
        piVar1 = *(piVar2 + 0xf) + piVar2;
    }
    else {
        piVar1 = piVar2;
    }
    if (*piVar1 == 0x5a56) {
        *arg2 = piVar2 + (piVar1[2] - *(piVar1 + 6)) + 0x28;
    }
    else {
        if (*piVar1 != 0x4550) {
            return 0x8000000000000003;
        }
        *arg2 = piVar1[10] + piVar2;
    }
    return 0;
}


/* fcn.0001d47c @ 0x1d47c */

//WARNING: Removing unreachable block (ram,0x0001d5ad)
//WARNING: Removing unreachable block (ram,0x0001d5f2)
//WARNING: Removing unreachable block (ram,0x0001d5bd)
//WARNING: Removing unreachable block (ram,0x0001d5c2)
//WARNING: Removing unreachable block (ram,0x0001d5c7)
//WARNING: Removing unreachable block (ram,0x0001d5dc)

ulong fcn.0001d47c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    int64_t arg3;
    
    arg1_00 = *0x27b08;
    uVar3 = 0;
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar1 = *(*0x27b08 + 0x68);
    piVar2 = *(*0x27b08 + 0x70);
    if (uVar1 != 0) {
        piVar4 = piVar2;
        do {
            if ((*arg1 == *piVar4) && (*(arg1 + 8) == piVar4[1])) break;
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 3;
        } while (uVar3 < uVar1);
    }
    if (uVar3 < uVar1) {
        if (arg2 != 0) {
            piVar2[uVar3 * 3 + 2] = arg2;
            goto code_r0x0001d617;
        }
        *(*0x27b08 + 0x68) = uVar1 - 1;
        arg3 = ((uVar1 - 1) - uVar3) * 0x18;
        piVar2 = piVar2 + uVar3 * 3;
        if ((arg3 != 0) && (piVar2 != piVar2 + 3)) {
            fcn.00010430(piVar2,piVar2 + 3,arg3);
            arg1_00 = *0x27b08;
        }
    }
    else {
        if (arg2 == 0) {
            return 0x800000000000000e;
        }
        if (*0x27c18 <= uVar3 * 0x18) {
            *0x27c18 = *0x27c18 + 0x180;
            fcn.0001a7c4(6);
            return 0x8000000000000009;
        }
        piVar2[uVar3 * 3] = *arg1;
        piVar2[uVar3 * 3 + 1] = *(arg1 + 8);
        piVar2[uVar3 * 3 + 2] = arg2;
        *(arg1_00 + 0x68) = *(arg1_00 + 0x68) + 1;
    }
    fcn.000115ac(arg1_00);
code_r0x0001d617:
    fcn.00018208(arg1);
    return 0;
}


/* fcn.0001f484 @ 0x1f484 */

ulong fcn.0001f484(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if ((arg1 & 0xff) - 1 < 3) {
        if (*0x27c68 != NULL) {
code_r0x0001f4fc:
            uVar2 = (***0x27c68)(arg1 & 0xffffffff,arg2 & 0xffffffff,0,arg3,in_stack_00000028);
            return uVar2;
        }
        if ((*0x27c48 != 0) && (*(*0x27c48 + 0x140) != NULL)) {
            iVar1 = (**(*0x27c48 + 0x140))(0x259f0,0,0x27c68);
            if (iVar1 < 0) {
                *0x27c68 = NULL;
            }
            if (*0x27c68 != NULL) goto code_r0x0001f4fc;
        }
    }
    return 0x8000000000000003;
}


/* fcn.000160ec @ 0x160ec */

int64_t fcn.000160ec(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t in_R8;
    int64_t in_R9;
    uchar auStackX_8 [8];
    
    if ((arg1 == 2) || (arg1 < 3)) {
        arg1_00 = arg2;
        iVar2 = fcn.00015f24(CONCAT44(in_register_0000000c,arg1),arg2,in_R8,in_R9);
        if (-1 < iVar2) {
            if ((*0x27c00 != '\0') && (uVar1 = arg2 - 5, uVar1 < 2)) {
                fcn.0001bd4c(uVar1,arg1_00);
            }
            auStackX_8[0] = 0;
            if (*0x27b30 != NULL) {
                (***0x27b30)(*0x27b30,auStackX_8);
            }
        }
    }
    else {
        iVar2 = -0x7ffffffffffffffe;
    }
    return iVar2;
}


/* fcn.00016160 @ 0x16160 */

int64_t fcn.00016160(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t extraout_RAX;
    int64_t noname_0;
    int64_t iVar3;
    uint32_t uVar4;
    unkbyte7 in_R8;
    uint32_t auStackX_10 [2];
    
    fcn.0001d66c(0x26e88);
    piVar2 = *0x26e78;
    if (*0x26e78 == 0x26e78) {
code_r0x000161e8:
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        do {
            piVar1 = piVar2;
            if ((piVar1[3] <= arg1) && (piVar2 = piVar1, arg1 < piVar1[4])) break;
            piVar2 = *piVar1;
        } while (piVar2 != 0x26e78);
        if (piVar2 == 0x26e78) goto code_r0x000161e8;
        if ((arg1 & 0xfffU) == 0) {
            uVar4 = *(piVar1 + 0x14);
            fcn.00015978(arg1,arg2,CONCAT71(in_R8,1),7);
            iVar3 = extraout_RAX;
            goto code_r0x000161f6;
        }
        iVar3 = -0x7ffffffffffffffe;
    }
    arg2 = 0x26e78;
    uVar4 = auStackX_10[0];
code_r0x000161f6:
    *0x26e98 = 1;
    noname_0 = *0x26e90;
    fcn.0001bc20(*0x26e90);
    if (-1 < iVar3) {
        if ((*0x27c00 != '\0') && (uVar4 - 5 < 2)) {
            fcn.0001bd4c(noname_0,arg2);
        }
        auStackX_10[0] = auStackX_10[0] & 0xffffff00;
        if (*0x27b30 != NULL) {
            (***0x27b30)(*0x27b30,auStackX_10);
        }
    }
    return iVar3;
}


/* fcn.00019d78 @ 0x19d78 */

void fcn.00019d78(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *arg1_00;
    uint *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    piVar1 = *0x27bd0;
    *0x27bc8 = *0x27bc8 | 1;
    if (*0x27bcc < *0x27be0) {
        uVar4 = 0;
        iVar3 = **0x27bd0;
        while (iVar3 != 0) {
            uVar4 = uVar4 + 1;
            iVar3 = (*0x27bd0)[uVar4];
        }
    }
    else {
        iVar3 = *0x27be0 * 8;
        arg1_00 = fcn.0001f924(4,iVar3 + 0x1000);
        if (arg1_00 == NULL) goto code_r0x00019e61;
        if ((iVar3 != 0) && (arg1_00 != piVar1)) {
            fcn.00010430(arg1_00,piVar1,iVar3);
        }
        fcn.0001ab70(piVar1);
        uVar4 = *0x27be0;
        *0x27bd0 = arg1_00;
        *0x27be0 = *0x27be0 + 0x200;
    }
    piVar1 = *0x27bd0;
    puVar2 = fcn.0001f924(4,0x18);
    piVar1[uVar4] = puVar2;
    if (puVar2 != NULL) {
        *puVar2 = 1;
        *(piVar1[uVar4] + 8) = arg1;
        *(piVar1[uVar4] + 0x10) = arg2;
        *0x27bcc = *0x27bcc + 1;
        *0x27bc8 = *0x27bc8 | 2;
    }
code_r0x00019e61:
    *0x27bc8 = *0x27bc8 & 0xfffffffe;
    return;
}


/* fcn.000182dc @ 0x182dc */

ulong fcn.000182dc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint64_t uVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    int64_t *in_stack_00000028;
    ulong *in_stack_00000030;
    
    uVar8 = arg1 & 0xffffffff;
    if (in_stack_00000030 != NULL) {
        uVar2 = 0;
        do {
            iVar6 = arg1;
            if (iVar6 == *(uVar2 + 0x26f50)) {
                piVar5 = in_stack_00000028;
                if (in_stack_00000028 == NULL) {
                    if (iVar6 == 0x201) {
                        piVar5 = 0x25c70;
                    }
                    else {
                        piVar5 = 0x25cc0;
                        if (iVar6 != 0x60000202) {
                            piVar5 = in_stack_00000028;
                        }
                    }
                }
                else {
                    if (iVar6 == 0x201) {
                        return 0x8000000000000002;
                    }
                    if (iVar6 == 0x60000202) {
                        return 0x8000000000000002;
                    }
                    if ((*in_stack_00000028 == *0x25c70) && (in_stack_00000028[1] == *0x25c78)) {
                        uVar8 = 0x201;
                    }
                    else if ((*in_stack_00000028 == *0x25cc0) && (in_stack_00000028[1] == *0x25cc8)) {
                        uVar8 = 0x60000202;
                    }
                }
                uVar7 = uVar8;
                if ((uVar8 & 0x300) == 0) {
                    arg2 = 0;
                    arg3 = 0;
                    arg4 = 0;
                }
                else {
                    if (arg3 == 0) {
                        return 0x8000000000000002;
                    }
                    if (0x19 < arg2 - 5U) {
                        return 0x8000000000000002;
                    }
                }
                iVar4 = 6;
                if ((uVar8 & 0x40000000) == 0) {
                    iVar4 = 4;
                }
                puVar3 = fcn.0001f924(iVar4,0xb8);
                if (puVar3 == NULL) {
                    return 0x8000000000000009;
                }
                *puVar3 = 0x746e7665;
                *(puVar3 + 1) = uVar7;
                puVar3[4] = arg2;
                puVar3[5] = arg3;
                puVar3[6] = arg4;
                if (piVar5 != NULL) {
                    puVar3[7] = *piVar5;
                    puVar3[8] = piVar5[1];
                    *(puVar3 + 0xb) = *(puVar3 + 0xb) | 1;
                }
                *in_stack_00000030 = puVar3;
                if ((uVar8 & 0x40000000) != 0) {
                    *(puVar3 + 0xc) = uVar7;
                    piVar5 = puVar3 + 0x11;
                    puVar3[0xd] = arg2;
                    puVar3[0xe] = arg3;
                    puVar3[0xf] = arg4;
                    puVar3[0x10] = puVar3;
                    iVar4 = *0x25dd8;
                    *piVar5 = *0x25dd8 + 0x10;
                    puVar1 = *(iVar4 + 0x18);
                    puVar3[0x12] = puVar1;
                    *puVar1 = piVar5;
                    *(iVar4 + 0x18) = piVar5;
                }
                fcn.0001d66c(0x26b90);
                if ((uVar7 >> 9 & 1) != 0) {
                    piVar5 = puVar3 + 2;
                    *piVar5 = *0x26ba8;
                    puVar3[3] = 0x26ba8;
                    *(*piVar5 + 8) = piVar5;
                    *0x26ba8 = piVar5;
                }
                *0x26ba0 = 1;
                fcn.0001bc20(*0x26b98);
                return 0;
            }
            uVar2 = uVar2 + 4;
        } while (uVar2 < 0x20);
    }
    return 0x8000000000000002;
}


/* fcn.00013ab0 @ 0x13ab0 */

int64_t fcn.00013ab0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t *piVar2;
    char *arg4_00;
    int64_t arg1_00;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iStackX_8;
    int64_t aiStackX_10 [3];
    int64_t iStack_48;
    char *pcStack_40;
    
    arg1_00 = *0x26b88;
    aiStackX_10[0] = arg2;
    aiStackX_10[1] = arg3;
    aiStackX_10[2] = arg4;
    if (arg1 == 0) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        piVar6 = &iStackX_8;
        uVar1 = *arg1;
        uVar4 = 0;
        iVar3 = 0;
        *0x26b88 = 0x10;
        iStackX_8 = arg1;
        do {
            piVar2 = piVar6[1];
            if (piVar2 == NULL) break;
            piVar6 = piVar6 + 2;
            arg4_00 = *piVar6;
            if ((*piVar2 == *0x25b00) && (piVar2[1] == *0x25b08)) {
                iStack_48 = 0;
                pcStack_40 = arg4_00;
                iVar3 = fcn.0001998c(0x25b00,&pcStack_40,&iStack_48);
                if ((iVar3 < 0) || (((iStack_48 == 0 || (*pcStack_40 != '\x7f')) || (pcStack_40[1] != -1))))
                goto code_r0x00013b80;
                iVar3 = -0x7fffffffffffffec;
            }
            else {
code_r0x00013b80:
                iVar3 = fcn.000138a4(arg1,piVar2,0,arg4_00);
            }
            uVar4 = uVar4 + 1;
        } while (-1 < iVar3);
        if (iVar3 < 0) {
            if (1 < uVar4) {
                piVar6 = &iStackX_8;
                iVar5 = uVar4 - 1;
                do {
                    piVar2 = piVar6 + 1;
                    piVar6 = piVar6 + 2;
                    fcn.00013d0c(*arg1,*piVar2,*piVar6);
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
            *arg1 = uVar1;
        }
        fcn.0001bc20(arg1_00);
    }
    return iVar3;
}


/* fcn.00013640 @ 0x13640 */

void fcn.00013640(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *piVar2;
    while (iVar1 != 0) {
        fcn.0001826c(0x200,8);
        fcn.00017f50(*piVar2,piVar2[2],piVar2 + 3);
        piVar2 = piVar2 + 5;
        iVar1 = *piVar2;
    }
    return;
}


/* fcn.00019fb4 @ 0x19fb4 */

int64_t fcn.00019fb4(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint16_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t *puVar6;
    uint64_t uVar7;
    uint in_register_0000000c;
    uint64_t arg1_00;
    uint64_t uVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t *puVar14;
    uint64_t uVar15;
    ulong *in_stack_00000028;
    uchar auStack_58 [32];
    int iStack_38;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x28) != 0x4856465f) {
        return -0x7ffffffffffffff6;
    }
    uVar15 = 0;
    if (-1 < *(arg1_00 + 0x2c)) {
        uVar4 = 1 << (*(arg1_00 + 0x2c) >> 0x10 & 0x1f);
        if (uVar4 < 8) {
            uVar4 = 8;
        }
        if (arg1_00 % uVar4 != 0) {
            iVar5 = fcn.000124d8(arg1_00,auStack_58);
            if (iVar5 < 0) {
                return -0x7ffffffffffffff6;
            }
            if (iStack_38 != 2) {
                return -0x7ffffffffffffff6;
            }
        }
    }
    iVar5 = fcn.0001f974(4,0x80,0x26c00);
    if (iVar5 == 0) {
        return -0x7ffffffffffffff7;
    }
    *(iVar5 + 0x70) = arg1_00;
    uVar3 = *(arg1_00 + 0x2c);
    *(iVar5 + 0x50) = arg2;
    *(iVar5 + 0x68) = uVar3;
    *(iVar5 + 0x78) = arg3;
    *(iVar5 + 0x58) = 0;
    uVar2 = *(arg1_00 + 0x30);
    if ((*(arg1_00 + 0x20) < uVar2) || (uVar2 < 0x40)) {
        iVar10 = -0x7ffffffffffffff6;
code_r0x0001a28c:
        if (-1 < iVar10) {
            return iVar10;
        }
    }
    else {
        if ((*(arg1_00 + 0x20) - 1) + arg1_00 < arg1_00) {
            iVar10 = -0x7ffffffffffffff7;
            goto code_r0x0001a291;
        }
        puVar14 = arg1_00 + 0x38;
        puVar1 = uVar2 + arg1_00;
        puVar6 = puVar14;
        if (puVar14 < puVar1) {
            do {
                if (*puVar6 == 0) break;
                uVar8 = *puVar6 + *(iVar5 + 0x58);
                if (uVar8 < *(iVar5 + 0x58)) goto code_r0x0001a107;
                puVar6 = puVar6 + 2;
                *(iVar5 + 0x58) = uVar8;
            } while (puVar6 < puVar1);
            if (puVar6 < puVar1) {
                if (0xffffffffffffffe < *(iVar5 + 0x58)) goto code_r0x0001a0fa;
                iVar10 = fcn.0001f8f0(*(iVar5 + 0x58) << 4);
                *(iVar5 + 0x60) = iVar10;
                if (iVar10 == 0) goto code_r0x0001a0fa;
                uVar4 = *puVar14;
                iVar10 = -0x7ffffffffffffff6;
                uVar8 = uVar15;
                uVar7 = uVar15;
                uVar13 = uVar15;
                if (uVar4 != 0) {
                    do {
                        if (uVar4 != 0) {
                            iVar9 = uVar13 << 4;
                            uVar11 = uVar7;
                            uVar12 = uVar15;
                            do {
                                *(iVar9 + *(iVar5 + 0x60)) = uVar11;
                                *(*(iVar5 + 0x60) + 8 + iVar9) = puVar14[1];
                                uVar7 = puVar14[1] + uVar11;
                                if (uVar7 < uVar11) {
                                    uVar8 = 0x800000000000000a;
                                    uVar7 = uVar11;
                                    break;
                                }
                                uVar13 = uVar13 + 1;
                                iVar9 = iVar9 + 0x10;
                                uVar12 = uVar12 + 1;
                                uVar11 = uVar7;
                            } while (uVar12 < *puVar14);
                        }
                        puVar14 = puVar14 + 2;
                        uVar4 = *puVar14;
                    } while (uVar4 != 0);
                    if (uVar8 < 0) goto code_r0x0001a291;
                }
                if (uVar7 != *(arg1_00 + 0x20)) goto code_r0x0001a291;
                uVar2 = *(arg1_00 + 0x34);
                if (uVar2 == 0) {
code_r0x0001a1d0:
                    iVar10 = fcn.0001f974(4,0x1c,0x26c80);
                    *(iVar5 + 0x10) = iVar10;
                    if (iVar10 == 0) {
code_r0x0001a0fa:
                        fcn.0001ab70(iVar5);
                        return -0x7ffffffffffffff7;
                    }
                    *(iVar10 + 8) = arg1_00;
                    *(*(iVar5 + 0x10) + 0x10) = (arg1_00 - 1) + *(arg1_00 + 0x20);
                }
                else {
                    if ((uVar2 < *(arg1_00 + 0x30)) || (*(arg1_00 + 0x20) - 0x14 < uVar2)) goto code_r0x0001a291;
                    if (uVar2 == 0) goto code_r0x0001a1d0;
                    iVar10 = fcn.0001f974(4,0x18,0x26ca0);
                    *(iVar5 + 0x10) = iVar10;
                    if (iVar10 == 0) goto code_r0x0001a0fa;
                    uVar2 = *(arg1_00 + 0x34);
                    *(iVar10 + 4) = *(uVar2 + arg1_00);
                    *(iVar10 + 0xc) = *(uVar2 + 8 + arg1_00);
                }
                iVar10 = fcn.00013ab0(iVar5 + 8,0x25a20,iVar5 + 0x18,0x25b00);
                if (in_stack_00000028 != NULL) {
                    *in_stack_00000028 = *(iVar5 + 8);
                }
                goto code_r0x0001a28c;
            }
        }
code_r0x0001a107:
        iVar10 = -0x7ffffffffffffff6;
    }
code_r0x0001a291:
    if (*(iVar5 + 0x60) != 0) {
        fcn.0001ab70();
    }
    fcn.0001ab70(iVar5);
    return iVar10;
}


/* fcn.0001fcd8 @ 0x1fcd8 */

ulong fcn.0001fcd8(int64_t arg1)

{
    ulong in_R9;
    ulong in_stack_00000028;
    ulong *puVar1;
    ulong auStack_18 [2];
    
    puVar1 = auStack_18;
    (**(*0x27c48 + 0x50))(0x200);
    (**(*0x27c48 + 0xa8))(arg1,auStack_18[0],in_stack_00000028,in_R9,puVar1);
    (**(*0x27c48 + 0x68))(auStack_18[0]);
    return auStack_18[0];
}


/* fcn.000189fc @ 0x189fc */

int64_t fcn.000189fc(void)

{
    int64_t *arg1;
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    code *arg3;
    uint32_t uStackX_8;
    
    if (*0x27bb8 == '\0') {
        *0x27bb8 = '\x01';
        arg3 = fcn.0001fbb4;
        iVar3 = fcn.000182dc(0x200,0x10,0x1fbb4,0);
        if (-1 < iVar3) {
            iVar3 = -0x7ffffffffffffff2;
code_r0x00018b1e:
            do {
                piVar5 = *0x26bd0;
                if (*0x26bd0 != 0x26bd0) {
                    if (((*0x26bd0)[0xd] == 0) && ((*0x26bd0)[0xe] == '\0')) {
                        arg3 = (*0x26bd0)[5];
                        iVar4 = fcn.000175b0(0,*0x27b20,arg3,0);
                        if (iVar4 < 0) {
                            fcn.0001d66c(0x26bb8);
                            if (iVar4 == -0x7fffffffffffffe6) {
                                *(piVar5 + 0x5f) = 1;
                            }
                            else {
                                *(piVar5 + 0xc) = 1;
                            }
                            *(piVar5 + 0x5e) = 0;
                            *(*piVar5 + 8) = piVar5[1];
                            *piVar5[1] = *piVar5;
                            *0x26bc8 = 1;
                            fcn.0001bc20(*0x26bc0);
                            goto code_r0x00018b1e;
                        }
                    }
                    fcn.0001d66c(0x26bb8);
                    *(piVar5 + 0x5e) = 0;
                    *(piVar5 + 0xc) = 1;
                    *(*piVar5 + 8) = piVar5[1];
                    *piVar5[1] = *piVar5;
                    *0x26bc8 = 1;
                    iVar3 = *0x26bc0;
                    fcn.0001bc20(*0x26bc0);
                    if (piVar5[0xe] == '\0') {
                        fcn.0001f534(iVar3,0x3040002,arg3,0);
                        iVar3 = piVar5[0xd];
                        arg3 = NULL;
                        fcn.000176a8(iVar3,0,0);
                        fcn.0001f534(iVar3,0x3040003,arg3,0);
                    }
                    else {
                        arg3 = piVar5 + 3;
                        fcn.00019078(piVar5[6],piVar5[2],arg3);
                    }
                    iVar3 = 0;
                    goto code_r0x00018b1e;
                }
                if (-1 < iVar3) {
                    fcn.000184e8(uStackX_8);
                }
                bVar1 = false;
                piVar5 = *0x26bf0;
                if (*0x26bf0 == 0x26bf0) break;
                do {
                    arg1 = piVar5 + -1;
                    if (*(piVar5 + 0x71) != '\0') {
                        fcn.00018814(arg1);
                    }
                    if (*(piVar5 + 0x6c) != '\0') {
                        cVar2 = fcn.0001df84(arg1);
                        if (cVar2 != '\0') {
                            fcn.00018c54(arg1);
                            bVar1 = true;
                        }
                    }
                    piVar5 = *piVar5;
                } while (piVar5 != 0x26bf0);
            } while (bVar1);
            fcn.000186e8(uStackX_8);
            *0x27bb8 = '\0';
        }
    }
    else {
        iVar3 = -0x7fffffffffffffec;
    }
    return iVar3;
}


/* fcn.000228f0 @ 0x228f0 */

void fcn.000228f0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    char16_t *noname_0;
    int64_t in_RDX;
    int iVar3;
    int *piVar4;
    ulong uStackX_10;
    
    uStackX_10 = 8;
    if (((*0x27c98 == 0) || (iVar1 = *(*0x27c98 + 0x10), iVar1 == 0)) ||
       (piVar4 = *(*0x27c98 + 8), noname_0 = arg1, piVar4 == NULL)) {
        in_RDX = 0x25d10;
        noname_0 = L"FPDT_Volatile";
        iVar1 = (**(*0x27ca0 + 0x48))(L"FPDT_Volatile",0x25d10,0,&uStackX_10,0x27c98);
        if (iVar1 < 0) {
            return;
        }
        iVar1 = *(*0x27c98 + 0x10);
        if (iVar1 == 0) {
            return;
        }
        piVar4 = *(*0x27c98 + 8);
        if (piVar4 == NULL) {
            return;
        }
    }
    if ((*piVar4 == 0x54504246) && (piVar4[2] == 2)) {
        iVar3 = arg1;
        if (iVar3 == 0) {
            iVar2 = fcn.00025830(noname_0,in_RDX);
            *(piVar4 + 6) = (iVar2 * iVar1) / 1000000;
        }
        else if (iVar3 == 1) {
            iVar2 = fcn.00025830(noname_0,in_RDX);
            *(piVar4 + 8) = (iVar2 * iVar1) / 1000000;
        }
        else if (iVar3 == 2) {
            iVar2 = fcn.00025830(noname_0,in_RDX);
            *(piVar4 + 10) = (iVar2 * iVar1) / 1000000;
        }
        else if (iVar3 == 3) {
            iVar2 = fcn.00025830(noname_0,in_RDX);
            *(piVar4 + 0xc) = (iVar2 * iVar1) / 1000000;
        }
    }
    return;
}


/* fcn.00018208 @ 0x18208 */

void fcn.00018208(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    ulong *puVar5;
    ulong *puVar6;
    
    fcn.0001d66c(0x26b90);
    puVar6 = 0x26ba8;
    for (puVar5 = *0x26ba8; uVar2 = *0x26b98, puVar5 != puVar6; puVar5 = *puVar5) {
        if ((puVar5[5] == *arg1) && (puVar5[6] == *(arg1 + 8))) {
            fcn.000181a4(puVar5 + -2);
        }
    }
    *0x26ba0 = 1;
    uVar3 = *0x26b98;
    while (*0x27ba8 != 0) {
        uVar3 = *0x27ba8;
        *0x26b88 = fcn.0001fa50(*0x27ba8);
        if (*0x26b88 <= uVar2) break;
        if (*0x26b88 < 0x1f) {
            fcn.0001bb84(CONCAT71(uVar3 >> 8,1));
        }
        uVar3 = *0x26b88;
        fcn.0001d66c(0x26b90);
        piVar4 = uVar3 * 0x10 + 0x29880;
        while (piVar1 = *piVar4, piVar1 != piVar4) {
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            *piVar1 = 0;
            if ((*(piVar1 + -8) & 0x200) != 0) {
                *(piVar1 + -0x3c) = 0;
            }
            *0x26ba0 = 1;
            fcn.0001bc20(*0x26b98);
            (*piVar1[-4])(piVar1 + -9,piVar1[-3]);
            fcn.0001d66c(0x26b90);
        }
        *0x27ba8 = *0x27ba8 & ~(1LL << (uVar3 & 0x3f));
        *0x26ba0 = 1;
        uVar3 = *0x26b98;
        fcn.0001bc20(*0x26b98);
    }
    *0x26b88 = uVar2;
    if (uVar2 < 0x1f) {
        fcn.0001bb84(CONCAT71(uVar3 >> 8,1));
    }
    return;
}


/* fcn.0001d66c @ 0x1d66c */

void fcn.0001d66c(int64_t arg1)

{
    ulong uVar1;
    
    uVar1 = fcn.0001bbd8(*arg1);
    *(arg1 + 8) = uVar1;
    *(arg1 + 0x10) = 2;
    return;
}


/* fcn.0001bbd8 @ 0x1bbd8 */

uint64_t fcn.0001bbd8(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = *0x26b88;
    if (((0x1e < CONCAT44(in_register_0000000c,arg1)) && (*0x26b88 < 0x1f)) && (*0x27b58 != 0)) {
        (**(*0x27b58 + 0x10))(*0x27b58);
    }
    *0x26b88 = CONCAT44(in_register_0000000c,arg1);
    return uVar1;
}


/* fcn.0001bc20 @ 0x1bc20 */

void fcn.0001bc20(int64_t arg1)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    
    uVar2 = arg1;
    while (*0x27ba8 != 0) {
        uVar2 = *0x27ba8;
        *0x26b88 = fcn.0001fa50(*0x27ba8);
        if (*0x26b88 <= arg1) break;
        if (*0x26b88 < 0x1f) {
            fcn.0001bb84(CONCAT71(uVar2 >> 8,1));
        }
        uVar2 = *0x26b88;
        fcn.0001d66c(0x26b90);
        piVar3 = uVar2 * 0x10 + 0x29880;
        while (piVar1 = *piVar3, piVar1 != piVar3) {
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            *piVar1 = 0;
            if ((*(piVar1 + -8) & 0x200) != 0) {
                *(piVar1 + -0x3c) = 0;
            }
            *0x26ba0 = 1;
            fcn.0001bc20(*0x26b98);
            (*piVar1[-4])(piVar1 + -9,piVar1[-3]);
            fcn.0001d66c(0x26b90);
        }
        *0x27ba8 = *0x27ba8 & ~(1LL << (uVar2 & 0x3f));
        *0x26ba0 = 1;
        uVar2 = *0x26b98;
        fcn.0001bc20(*0x26b98);
    }
    *0x26b88 = arg1;
    if (arg1 < 0x1f) {
        fcn.0001bb84(CONCAT71(uVar2 >> 8,1));
    }
    return;
}


/* fcn.00017b44 @ 0x17b44 */

void fcn.00017b44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar auStack_48 [24];
    uint32_t uStack_30;
    
    fcn.000124d8(arg1,auStack_48);
    //WARNING: Could not recover jumptable at 0x00017b9a. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x27b58 + 0x38))(*0x27b58,arg1,arg2,uStack_30 & 0x101f | arg3 & 0xe6000);
    return;
}


/* fcn.000124d8 @ 0x124d8 */

int64_t fcn.000124d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.0001d66c(0x26100);
        iVar2 = 1;
        iVar1 = fcn.00011ab8(arg1,1,&iStackX_10,auStackX_18);
        if (iVar1 < 0) {
            iVar1 = -0x7ffffffffffffff2;
        }
        else {
            *arg2 = *(iStackX_10 + 0x10);
            *(arg2 + 8) = (*(iStackX_10 + 0x18) - *(iStackX_10 + 0x10)) + iVar2;
            *(arg2 + 0x10) = *(iStackX_10 + 0x20);
            *(arg2 + 0x18) = *(iStackX_10 + 0x28);
            *(arg2 + 0x20) = *(iStackX_10 + 0x30);
            *(arg2 + 0x28) = *(iStackX_10 + 0x38);
            *(arg2 + 0x30) = *(iStackX_10 + 0x40);
        }
        *0x26110 = iVar2;
        fcn.0001bc20(*0x26108);
    }
    return iVar1;
}


/* fcn.000115ac @ 0x115ac */

void fcn.000115ac(int64_t arg1)

{
    int64_t iVar1;
    uint auStackX_8 [8];
    
    iVar1 = *0x27c48;
    *(arg1 + 0x10) = 0;
    auStackX_8[0] = 0;
    (**(iVar1 + 0x158))(arg1,*(arg1 + 0xc),auStackX_8);
    *(arg1 + 0x10) = auStackX_8[0];
    return;
}


/* fcn.0001f924 @ 0x1f924 */

//WARNING: Removing unreachable block (ram,0x0001f953)
//WARNING: Removing unreachable block (ram,0x0001f958)

ulong fcn.0001f924(int64_t arg1,int64_t arg2)

{
    fcn.0001a7c4(arg1);
    return 0;
}


/* fcn.0001ab70 @ 0x1ab70 */

int64_t fcn.0001ab70(int64_t param_1)

{
    int64_t iVar1;
    int *arg2;
    int aiStackX_10 [6];
    
    arg2 = aiStackX_10;
    iVar1 = fcn.0001ab10(param_1,arg2);
    if (((-1 < iVar1) && (*0x27c00 != '\0')) && (aiStackX_10[0] - 5U < 2)) {
        fcn.0001bd4c(aiStackX_10[0] - 5U,arg2);
    }
    return iVar1;
}


/* fcn.0001ab10 @ 0x1ab10 */

ulong fcn.0001ab10(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        fcn.0001d66c(0x26cf8);
        uVar1 = fcn.0001ac24(arg1,arg2);
        *0x26d08 = 1;
        fcn.0001bc20(*0x26d00);
    }
    return uVar1;
}


/* fcn.000119b8 @ 0x119b8 */

ulong fcn.000119b8(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    ulong *puVar1;
    uint in_R8;
    int64_t *piVar2;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == '\0') {
        piVar2 = puVar1[1];
    }
    else {
        piVar2 = *puVar1;
    }
    if (piVar2 != CONCAT44(in_R8,arg3)) {
        if ((((puVar1[4] != piVar2[4]) || (puVar1[5] != piVar2[5])) || (*(puVar1 + 6) != piVar2[6])) ||
           (((*(puVar1 + 0x34) != *(piVar2 + 0x34) || (puVar1[7] != piVar2[7])) || (puVar1[8] != piVar2[8])))) {
            return 0x8000000000000003;
        }
        if (arg2 == '\0') {
            puVar1[2] = piVar2[2];
        }
        else {
            puVar1[3] = piVar2[3];
        }
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        fcn.0001ab70(piVar2 + -1);
    }
    return 0;
}


/* fcn.00011ab8 @ 0x11ab8 */

ulong fcn.00011ab8(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint64_t uVar2;
    uint in_register_00000014;
    uint in_R8;
    ulong *in_stack_00000028;
    
    *CONCAT44(in_R8,arg3) = 0;
    *arg4 = 0;
    puVar1 = *in_stack_00000028;
    while( true ) {
        if (puVar1 == in_stack_00000028) {
            return 0x800000000000000e;
        }
        if ((puVar1[2] <= arg1) && (arg1 <= puVar1[3])) {
            *CONCAT44(in_R8,arg3) = puVar1;
        }
        if (((*CONCAT44(in_R8,arg3) != 0) &&
            (uVar2 = CONCAT44(in_register_00000014,arg2) + -1 + arg1, puVar1[2] <= uVar2)) && (uVar2 <= puVar1[3]))
        break;
        puVar1 = *puVar1;
    }
    *arg4 = puVar1;
    return 0;
}


/* fcn.00011874 @ 0x11874 */

ulong fcn.00011874(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    *0x27c20 = 1;
    iVar1 = fcn.0001f924(4,0x50);
    *arg1 = iVar1;
    *0x27c20 = 0;
    if (iVar1 != 0) {
        *0x27c20 = 1;
        iVar1 = fcn.0001f924(4,0x50);
        *arg2 = iVar1;
        *0x27c20 = 0;
        if (iVar1 != 0) {
            *0x27c20 = 0;
            return 0;
        }
        fcn.0001ab70(*arg1);
    }
    return 0x8000000000000009;
}


/* fcn.000118f0 @ 0x118f0 */

ulong fcn.000118f0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint in_R9;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    if (*(arg2 + 0x18) < arg3) {
        if (in_stack_00000030 != arg2) {
            fcn.00010430(in_stack_00000030,arg2,0x50);
        }
        *(arg2 + 0x18) = arg3;
        piVar1 = in_stack_00000030 + 8;
        *(in_stack_00000030 + 0x20) = arg3 + -1;
        *piVar1 = arg1;
        piVar3 = *(arg1 + 8);
        *(in_stack_00000030 + 0x10) = piVar3;
        *piVar3 = piVar1;
        *(arg1 + 8) = piVar1;
    }
    arg3 = CONCAT44(in_R9,arg4) + arg3;
    uVar2 = arg3 - 1;
    if (uVar2 < *(arg2 + 0x20)) {
        if (in_stack_00000028 != arg2) {
            fcn.00010430(in_stack_00000028,arg2,0x50);
        }
        *(in_stack_00000028 + 0x18) = arg3;
        piVar1 = in_stack_00000028 + 8;
        *(arg2 + 0x20) = uVar2;
        iVar4 = *arg1;
        *piVar1 = iVar4;
        *(in_stack_00000028 + 0x10) = arg1;
        *(iVar4 + 8) = piVar1;
        *arg1 = piVar1;
    }
    return 0;
}


/* fcn.00011a50 @ 0x11a50 */

ulong fcn.00011a50(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint32_t in_stack_00000028;
    
    iVar1 = arg2;
    if (*CONCAT44(in_register_0000000c,arg1) == 0) {
        fcn.0001ab70();
    }
    if (*arg2 == 0) {
        fcn.0001ab70(arg2);
    }
    for (; arg3 != *arg4; arg3 = *arg3) {
        iVar1 = 0;
        fcn.000119b8(arg3,0,in_stack_00000028);
    }
    fcn.000119b8(arg4,CONCAT71(iVar1 >> 8,1),in_stack_00000028);
    return 0;
}


/* fcn.00011f40 @ 0x11f40 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.00011f40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_60h,int64_t arg_68h,
                  int64_t arg_70h,uint32_t arg_78h,int64_t arg_80h)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint64_t *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t arg2_00;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong uVar8;
    int64_t *piVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    bool bVar13;
    uint64_t in_stack_00000028;
    uint64_t in_stack_00000030;
    int64_t var_40h;
    int64_t in_stack_00000040;
    int32_t var_50h;
    int32_t var_58h;
    int64_t *piStack_68;
    int64_t *piStack_60;
    int64_t *piStack_58;
    uint32_t auStack_50 [2];
    uint64_t uStack_48;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    uint32_t var_10h;
    
    uVar11 = arg4;
    uVar10 = arg3;
    uVar5 = arg2;
    if ((((4 < uVar5) || (5 < uVar10)) || (2 < uVar11)) || ((var_40h == 0 || (in_stack_00000040 == 0)))) {
        return 0x8000000000000002;
    }
    if (0x3f < in_stack_00000028) {
        return 0x800000000000000e;
    }
    if (in_stack_00000030 == 0) {
        return 0x8000000000000002;
    }
    uStack_48 = arg1 & 0x20;
    if ((arg1 & 0x20U) == 0) {
        if ((arg1 & 0x40U) == 0) {
code_r0x0001226e:
            uVar8 = 0x8000000000000003;
            goto code_r0x00012278;
        }
        fcn.0001d66c(0x26170);
        piVar9 = 0x26358;
    }
    else {
        fcn.0001d66c(0x26100);
        piVar9 = 0x261e0;
    }
    piStack_68 = NULL;
    piStack_60 = NULL;
    uVar12 = (1LL << (in_stack_00000028 & 0x3f)) - 1;
    arg2_00 = in_stack_00000030;
    piStack_58 = piVar9;
    if (uVar5 != 2) {
        if ((uVar5 == 1) || (uVar5 == 4)) {
            puVar3 = var_40h;
        }
        else {
            puVar3 = piVar9[1] + 0x18;
        }
        uVar1 = *puVar3;
        if (uVar5 - 3 < 2) {
            piVar7 = piVar9[1];
        }
        else {
            piVar7 = *piVar9;
        }
code_r0x000120e7:
        do {
            piVar6 = piVar7;
            if (piVar6 == piVar9) goto code_r0x00012028;
            if (uVar5 - 3 < 2) {
                piVar7 = piVar6[1];
            }
            else {
                piVar7 = *piVar6;
            }
            if (piVar6[7] == 0) {
                if (arg1 == 0x21) {
                    bVar13 = *(piVar6 + 6) == uVar10;
                }
                else {
                    if (arg1 != 0x41) goto code_r0x000120e7;
                    bVar13 = *(piVar6 + 0x34) == uVar11;
                }
                if (bVar13) {
                    if (uVar5 - 3 < 2) {
                        if (uVar1 < piVar6[2] + in_stack_00000030) goto code_r0x000120e7;
                        uVar4 = piVar6[3];
                        if (uVar4 + 1 < in_stack_00000030) goto code_r0x00012028;
                        if (uVar1 < uVar4) {
                            uVar4 = uVar1;
                        }
                        *var_40h = (uVar4 - in_stack_00000030) + 1 & ~uVar12;
                    }
                    else {
                        uVar4 = piVar6[2] + uVar12 & ~uVar12;
                        *var_40h = uVar4;
                        if (uVar1 < (in_stack_00000030 - 1) + uVar4) goto code_r0x00012028;
                    }
                    iVar2 = fcn.00011ab8(*var_40h,arg2_00,&piStack_68,&piStack_60);
                    if (iVar2 < 0) goto code_r0x00012028;
                    bVar13 = piStack_68 == *piStack_60;
                    piVar7 = piStack_68;
                    while( true ) {
                        if (bVar13) goto code_r0x00012097;
                        if (piVar7[7] != 0) break;
                        if (arg1 == 0x21) {
                            bVar13 = *(piVar7 + 6) == uVar10;
                        }
                        else {
                            if (arg1 != 0x41) break;
                            bVar13 = *(piVar7 + 0x34) == uVar11;
                        }
                        if (!bVar13) break;
                        piVar7 = *piVar7;
                        bVar13 = piVar7 == *piStack_60;
                    }
                }
            }
        } while( true );
    }
    if (((*var_40h & uVar12) == 0) && (iVar2 = fcn.00011ab8(*var_40h,arg2_00,&piStack_68,&piStack_60), -1 < iVar2))
    {
        piVar9 = piStack_68;
        if (piStack_68 != *piStack_60) {
            do {
                piVar7 = *piVar9;
                if (piVar9[7] != 0) goto code_r0x00012028;
                if (arg1 == 0x21) {
                    bVar13 = *(piVar9 + 6) == uVar10;
                }
                else {
                    if (arg1 != 0x41) goto code_r0x0001226e;
                    bVar13 = *(piVar9 + 0x34) == uVar11;
                }
                if (!bVar13) goto code_r0x00012028;
                piVar9 = piVar7;
            } while (piVar7 != *piStack_60);
        }
code_r0x00012097:
        piVar7 = piStack_60;
        piVar9 = piStack_68;
        iVar2 = fcn.00011874(auStack_50,&piStack_60);
        piVar6 = piStack_60;
        if (iVar2 < 0) {
            uVar8 = 0x8000000000000009;
        }
        else {
            if (piVar9 != *piVar7) {
                do {
                    fcn.000118f0(piVar9,piVar9 + -1,*var_40h,arg2_00);
                    piVar9[7] = in_stack_00000040;
                    piVar9[8] = _var_50h;
                    piVar9 = *piVar9;
                } while (piVar9 != *piVar7);
                piVar9 = piStack_68;
            }
            uVar8 = fcn.00011a50(auStack_50[0],piVar6,piVar9,piVar7);
        }
    }
    else {
code_r0x00012028:
        uVar8 = 0x800000000000000e;
    }
code_r0x00012278:
    if (uStack_48 != 0) {
        *0x26110 = 1;
        fcn.0001bc20(*0x26108);
    }
    if ((arg1 & 0x40U) != 0) {
        *0x26180 = 1;
        fcn.0001bc20(*0x26178);
    }
    return uVar8;
}


/* fcn.00011b10 @ 0x11b10 */

int64_t fcn.00011b10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t *arg1_00;
    uint32_t uVar6;
    bool bVar7;
    uint64_t in_stack_00000028;
    uint64_t in_stack_00000030;
    uint64_t in_stack_00000038;
    int64_t *piStack_68;
    int64_t *piStack_60;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    uint64_t uStack_40;
    
    uVar6 = 0;
    if (in_stack_00000028 == 0) {
        return -0x7ffffffffffffffe;
    }
    uStack_40 = arg1 & 0x20;
    if ((arg1 & 0x20U) == 0) {
        if ((arg1 & 0x40U) != 0) {
            fcn.0001d66c(0x26170);
            uVar2 = 0x26358;
            goto code_r0x00011b8d;
        }
    }
    else {
        fcn.0001d66c(0x26100);
        uVar2 = 0x261e0;
code_r0x00011b8d:
        uStack_48 = uVar2;
        iVar3 = fcn.00011ab8(arg4,in_stack_00000028,&piStack_60,&piStack_68);
        arg1_00 = piStack_60;
        if (-1 < iVar3) {
            piVar4 = piStack_60;
            if (piStack_60 != *piStack_68) {
                do {
                    if (arg1 != 0x20) {
                        if (arg1 == 0x22) {
code_r0x00011cf7:
                            if (piVar4[7] != 0) goto code_r0x00011d0f;
                        }
                        else {
                            if (arg1 != 0x23) {
                                if (arg1 == 0x24) {
                                    if ((in_stack_00000038 < 0) && (((arg4 | in_stack_00000028) & 0xfff) != 0)) {
code_r0x00011d3e:
                                        iVar3 = -0x7ffffffffffffffe;
                                        goto code_r0x00011c82;
                                    }
                                    bVar7 = (piVar4[4] & in_stack_00000038) == in_stack_00000038;
                                }
                                else {
                                    if (arg1 != 0x25) {
                                        if (arg1 == 0x40) {
                                            iVar1 = *(piVar4 + 0x34);
                                            goto code_r0x00011d07;
                                        }
                                        if (arg1 == 0x42) goto code_r0x00011cf7;
                                        if (arg1 == 0x43) {
                                            iVar1 = *(piVar4 + 0x34);
                                            goto code_r0x00011c35;
                                        }
                                        goto code_r0x00011d0f;
                                    }
                                    if (((arg4 & 0xfffU) != 0) || ((in_stack_00000028 & 0xfff) != 0))
                                    goto code_r0x00011d3e;
                                    bVar7 = (piVar4[5] & in_stack_00000030) == piVar4[5];
                                }
                                if (bVar7) goto code_r0x00011d0f;
                                goto code_r0x00011c78;
                            }
                            iVar1 = piVar4[6];
code_r0x00011c35:
                            if (iVar1 != 0) goto code_r0x00011d09;
                        }
                        iVar3 = -0x7ffffffffffffff2;
                        goto code_r0x00011c82;
                    }
                    iVar1 = piVar4[6];
code_r0x00011d07:
                    if (iVar1 != 0) {
code_r0x00011d4d:
                        iVar3 = -0x7ffffffffffffff1;
                        goto code_r0x00011c82;
                    }
code_r0x00011d09:
                    if (piVar4[7] != 0) goto code_r0x00011d4d;
code_r0x00011d0f:
                    piVar4 = *piVar4;
                } while (piVar4 != *piStack_68);
            }
            iVar3 = fcn.00011874(&uStack_50,&iStack_58);
            if (iVar3 < 0) {
                iVar3 = -0x7ffffffffffffff7;
                goto code_r0x00011c82;
            }
            if (arg1 == 0x24) {
                uVar6 = in_stack_00000038 & 0xe6000;
                if ((in_stack_00000038 & 1) == 0) {
                    if ((in_stack_00000038 & 2) == 0) {
                        if ((in_stack_00000038 & 4) == 0) {
                            if ((in_stack_00000038 & 8) == 0) {
                                if ((in_stack_00000038 & 0x10) == 0) {
                                    if ((in_stack_00000038 & 0x1000) != 0) {
                                        uVar6 = uVar6 | 0x1000;
                                    }
                                }
                                else {
                                    uVar6 = uVar6 | 0x10;
                                }
                            }
                            else {
                                uVar6 = uVar6 | 8;
                            }
                        }
                        else {
                            uVar6 = uVar6 | 4;
                        }
                    }
                    else {
                        uVar6 = uVar6 | 2;
                    }
                }
                else {
                    uVar6 = uVar6 | 1;
                }
                if (uVar6 != 0) {
                    if (*0x27b58 == 0) {
                        iVar3 = -0x5ffffffffffffffe;
                    }
                    else {
                        iVar3 = (**(*0x27b58 + 0x38))(*0x27b58,arg4,in_stack_00000028,uVar6,uVar2);
                        if (-1 < iVar3) {
                            arg1_00 = piStack_60;
                            goto code_r0x00011e12;
                        }
                    }
                    fcn.0001ab70(uStack_50);
                    fcn.0001ab70(iStack_58);
                    goto code_r0x00011c82;
                }
            }
code_r0x00011e12:
            if (arg1_00 != *piStack_68) {
                do {
                    fcn.000118f0(arg1_00,arg1_00 + -1,arg4,in_stack_00000028);
                    if (arg1 == 0x20) {
                        uVar5 = 0xc000000000000000;
                        *(arg1_00 + 6) = arg2;
                        if (arg2 != 3) {
                            uVar5 = 0x8000000000000000;
                        }
                        uVar5 = in_stack_00000030 | uVar5;
code_r0x00011efd:
                        arg1_00[4] = uVar5;
                    }
                    else if (arg1 == 0x22) {
code_r0x00011ec3:
                        arg1_00[7] = 0;
                        arg1_00[8] = 0;
                    }
                    else if (arg1 == 0x23) {
                        *(arg1_00 + 6) = 0;
                        arg1_00[4] = 0;
                    }
                    else if (arg1 == 0x24) {
                        if (uVar6 == 0) {
                            in_stack_00000038 = in_stack_00000038 | *(arg1_00 + 5) & 0xe701f;
                        }
                        arg1_00[5] = in_stack_00000038;
                    }
                    else {
                        if (arg1 == 0x25) {
                            uVar5 = in_stack_00000030;
                            goto code_r0x00011efd;
                        }
                        if (arg1 == 0x40) {
                            *(arg1_00 + 0x34) = arg3;
                        }
                        else {
                            if (arg1 == 0x42) goto code_r0x00011ec3;
                            if (arg1 == 0x43) {
                                *(arg1_00 + 0x34) = 0;
                            }
                        }
                    }
                    arg1_00 = *arg1_00;
                } while (arg1_00 != *piStack_68);
                arg1_00 = piStack_60;
            }
            iVar3 = fcn.00011a50(uStack_50,iStack_58,arg1_00,piStack_68);
            goto code_r0x00011c82;
        }
    }
code_r0x00011c78:
    iVar3 = -0x7ffffffffffffffd;
code_r0x00011c82:
    if (uStack_40 != 0) {
        *0x26110 = 1;
        fcn.0001bc20(*0x26108);
    }
    if ((arg1 & 0x40U) != 0) {
        *0x26180 = 1;
        fcn.0001bc20(*0x26178);
    }
    return iVar3;
}


/* fcn.000122cc @ 0x122cc */

void fcn.000122cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t unaff_retaddr;
    int64_t in_stack_00000008;
    uint32_t in_stack_00000010;
    int64_t in_stack_00000018;
    uint32_t in_stack_fffffffffffffff8;
    
    fcn.00011f40(0x21,arg1 & 0xffffffff,arg2 & 0xffffffff,0,in_stack_fffffffffffffff8,unaff_retaddr,
                 in_stack_00000008,in_stack_00000010,in_stack_00000018);
    return;
}


/* fcn.00015720 @ 0x15720 */

void fcn.00015720(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t *puVar3;
    int64_t iVar4;
    uint64_t *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int *piVar10;
    bool bVar11;
    uchar auStackX_10 [8];
    
    if (((arg2 & 0xfffU) == 0) && (uVar8 = arg1 & 0xffffffff, 0x6ffffff0 < arg1 - 0xfU)) {
        fcn.0001d66c(0x26e88);
        iVar9 = arg2 + -1 + arg3 * 0x1000;
        fcn.00015334(uVar8,arg2,iVar9,arg4);
        fcn.00015450(uVar8,arg2,iVar9);
        *0x26e98 = 1;
        fcn.0001bc20(*0x26e90);
        uVar8 = 0;
        auStackX_10[0] = 0;
        if (*0x27b30 != NULL) {
            (***0x27b30)(*0x27b30,auStackX_10);
        }
        if (*0x27b89 == '\0') {
            if (*0x26650 != 0xf) {
                puVar3 = 0x26650;
                uVar6 = uVar8;
                uVar7 = uVar8;
                do {
                    iVar9 = *puVar3;
                    if ((*puVar3 < 0x10) && (*(uVar6 + 0x26654) != 0)) {
                        iVar4 = fcn.000160ec(0,iVar9);
                        if (iVar4 < 0) {
                            if (uVar7 == 0) {
                                return;
                            }
                            do {
                                if ((*(uVar8 * 8 + 0x26650) < 0x10) && (uVar1 = *(uVar8 * 8 + 0x26654), uVar1 != 0)) {
                                    iVar9 = *(uVar8 * 8 + 0x26650);
                                    fcn.00016160(*(iVar9 * 0x30 + 0x266f0),uVar1);
                                    *(iVar9 * 0x30 + 0x266f8) = 0xffffffffffffffff;
                                    *(iVar9 * 0x30 + 0x266f0) = 0;
                                }
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < uVar7);
                            return;
                        }
                        uVar2 = *(iVar9 * 0x30 + 0x266f0);
                        bVar11 = uVar2 < *0x266e0;
                        *(iVar9 * 0x30 + 0x266f8) = (uVar2 - 1) + *(uVar6 + 0x26654) * 0x1000;
                        if (bVar11) {
                            *0x266e0 = uVar2 - 1;
                        }
                    }
                    uVar7 = uVar7 + 1;
                    uVar6 = uVar7 * 8;
                    puVar3 = uVar6 + 0x26650;
                } while (*puVar3 != 0xf);
            }
            if (*0x26650 != 0xf) {
                puVar3 = 0x26650;
                bVar11 = *0x26650 == 0xf;
                uVar6 = uVar8;
                uVar7 = uVar8;
                uVar1 = *0x26650;
                do {
                    if ((uVar1 < 0xf || bVar11) && (*(uVar7 + 0x26654) != 0)) {
                        uVar1 = *puVar3;
                        fcn.00016160(*(uVar1 * 0x30 + 0x266f0),*(uVar7 + 0x26654));
                        *(uVar1 * 0x30 + 0x26708) = *(uVar7 + 0x26654);
                        *(uVar7 + 0x26654) = 0;
                    }
                    uVar6 = uVar6 + 1;
                    uVar7 = uVar6 * 8;
                    puVar3 = uVar7 + 0x26650;
                    uVar1 = *puVar3;
                    bVar11 = uVar1 == 0xf;
                } while (!bVar11);
            }
            uVar1 = *0x26650;
            puVar5 = 0x266f8;
            uVar6 = uVar8;
            do {
                if (uVar1 != 0xf) {
                    piVar10 = 0x26650;
                    uVar7 = uVar8;
                    do {
                        if (uVar6 == *piVar10) {
                            puVar5[3] = uVar7;
                        }
                        uVar7 = uVar7 + 1;
                        piVar10 = uVar7 * 8 + 0x26650;
                    } while (*piVar10 != 0xf);
                }
                puVar5[1] = 0;
                if (*puVar5 == 0xffffffffffffffff) {
                    *puVar5 = *0x266e0;
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 6;
            } while (puVar5 < 0x269c8);
            *0x27b89 = '\x01';
        }
    }
    return;
}


/* fcn.00015978 @ 0x15978 */

ulong fcn.00015978(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    bool bVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    ulong uVar6;
    int64_t *piVar7;
    ulong *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t arg3_00;
    char cVar12;
    uint64_t uVar13;
    uint32_t uVar14;
    int64_t in_stack_00000030;
    
    uVar14 = arg4;
    iVar10 = uVar14;
    uVar11 = arg1 + -1 + arg2 * 0x1000;
    cVar12 = arg3;
    if (((arg2 == 0) || ((arg1 & 0xfffU) != 0)) || (uVar11 <= arg1)) {
        uVar6 = 0x8000000000000002;
    }
    else {
        if (((uVar14 - 5 & 0xfffffffa) == 0) &&
           (((*(iVar10 * 0x30 + 0x26718) == '\0' || (uVar9 = *(iVar10 * 0x30 + 0x266f0), uVar9 == 0)) ||
            ((arg1 < uVar9 || (*(iVar10 * 0x30 + 0x266f8) < uVar11)))))) {
            bVar2 = true;
        }
        else {
            bVar2 = false;
        }
        do {
            uVar13 = *0x269f0;
            uVar9 = *0x266e0;
            piVar4 = *0x26e78;
            if (*0x26e78 == 0x26e78) {
                return 0x800000000000000e;
            }
            do {
                piVar3 = piVar4;
                piVar7 = piVar3 + -1;
                if ((piVar3[3] <= arg1) && (piVar4 = piVar3, arg1 < piVar3[4])) break;
                piVar4 = *piVar3;
            } while (piVar4 != 0x26e78);
            if (piVar4 == 0x26e78) {
                return 0x800000000000000e;
            }
            if (((cVar12 != '\0') && (uVar14 != 7)) && (piVar3[4] < uVar11)) {
                return 0x800000000000000e;
            }
            arg3_00 = uVar11;
            if (piVar3[4] < uVar11) {
                arg3_00 = piVar3[4];
            }
            if (cVar12 != '\0') {
                if ((*(piVar3 + 0x14) == 7) != (uVar14 != 7)) {
                    return 0x800000000000000e;
                }
                if ((*(piVar3 + 0x14) < 0xf) &&
                   (((iVar5 = *(piVar3 + 0x14), *(iVar5 * 0x30 + 0x266f0) <= arg1 &&
                     (arg1 <= *(iVar5 * 0x30 + 0x266f8))) || ((*0x269f0 <= arg1 && (arg1 <= *0x266e0)))))) {
                    uVar1 = *(iVar5 * 0x30 + 0x26700);
                    if (uVar1 < arg2) {
                        *(iVar5 * 0x30 + 0x26700) = 0;
                    }
                    else {
                        *(iVar5 * 0x30 + 0x26700) = uVar1 - arg2;
                    }
                }
                if ((uVar14 < 0xf) &&
                   (((*(iVar10 * 0x30 + 0x266f0) <= arg1 && (arg1 <= *(iVar10 * 0x30 + 0x266f8))) ||
                    ((uVar13 <= arg1 && (arg1 <= uVar9)))))) {
                    iVar5 = *(iVar10 * 0x30 + 0x26710);
                    piVar4 = iVar10 * 0x30 + 0x26700;
                    *piVar4 = *piVar4 + arg2;
                    if (*(iVar5 * 8 + 0x26654) < *(iVar10 * 0x30 + 0x26700)) {
                        *(iVar5 * 8 + 0x26654) = *(iVar10 * 0x30 + 0x26700);
                    }
                }
            }
            if (piVar3[3] == arg1) {
                piVar3[3] = arg3_00 + 1;
            }
            else if (piVar3[4] == arg3_00) {
                piVar3[4] = arg1 - 1;
            }
            else {
                iVar5 = *0x27b90 * 0x40;
                piVar7 = iVar5 + 0x29aa0;
                *piVar7 = 0x70616d6d;
                *(iVar5 + 0x29ab8) = 0;
                *(iVar5 + 0x29abc) = *(piVar3 + 0x14);
                *(iVar5 + 0x29ac0) = arg3_00 + 1;
                *(iVar5 + 0x29ac8) = piVar3[4];
                *(iVar5 + 0x29ad8) = piVar3[6];
                piVar3[4] = arg1 - 1;
                puVar8 = iVar5 + 0x29aa8;
                *0x27b90 = *0x27b90 + 1;
                *puVar8 = 0x26e78;
                *(iVar5 + 0x29ab0) = *0x26e80;
                **0x26e80 = puVar8;
                *0x26e80 = puVar8;
            }
            if (cVar12 == '\0') {
                uVar9 = *(piVar7 + 0x1c);
                iVar5 = in_stack_00000030;
            }
            else {
                uVar9 = arg4 & 0xffffffff;
                iVar5 = piVar7[7];
            }
            if (piVar7[4] == piVar7[5] + 1) {
                fcn.000152e8(piVar7);
            }
            uVar13 = arg3_00;
            fcn.00015334(uVar9,arg1,arg3_00,iVar5);
            fcn.00015450(uVar9,arg1,uVar13);
            arg1 = arg3_00 + 1;
        } while (arg1 < uVar11);
        if (bVar2) {
            *0x27b80 = *0x27b78;
        }
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.0001f8f0 @ 0x1f8f0 */

ulong fcn.0001f8f0(int64_t arg1)

{
    fcn.0001a7c4(4);
    return 0;
}


/* fcn.00012a4c @ 0x12a4c */

void fcn.00012a4c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    int64_t var_38h;
    int64_t var_40h;
    
    var_28h = *arg1;
joined_r0x00012a6d:
    do {
        if (arg3 == NULL) {
            return;
        }
        uStackX_18 = *(arg3 + 0x20) + *(arg3 + 0x18);
        if ((var_28h <= *(arg3 + 0x18)) && (uStackX_18 <= *arg2 + var_28h)) {
            uStackX_10 = (*arg2 + var_28h) - uStackX_18;
            uStackX_8 = *(arg3 + 0x18) - var_28h;
            if (uStackX_8 == 0) goto code_r0x00012b1d;
            piVar2 = *(arg3 + 2) + arg3;
            break;
        }
        arg3 = *(arg3 + 2) + arg3;
        iVar1 = *arg3;
        while (iVar1 != -1) {
            if (iVar1 == 2) goto joined_r0x00012a6d;
            arg3 = arg3 + *(arg3 + 2);
            iVar1 = *arg3;
        }
        arg3 = 0;
    } while( true );
code_r0x00012af5:
    if (*piVar2 == -1) goto code_r0x00012aff;
    if (*piVar2 == 2) goto code_r0x00012b02;
    piVar2 = piVar2 + piVar2[1];
    goto code_r0x00012af5;
code_r0x00012aff:
    piVar2 = NULL;
code_r0x00012b02:
    fcn.00012a4c(&var_28h,&uStackX_8,piVar2);
code_r0x00012b1d:
    if (uStackX_10 != 0) {
        for (piVar2 = *(arg3 + 2) + arg3; *piVar2 != -1; piVar2 = piVar2 + piVar2[1]) {
            if (*piVar2 == 2) goto code_r0x00012b47;
        }
        piVar2 = NULL;
code_r0x00012b47:
        fcn.00012a4c(&uStackX_18,&uStackX_10,piVar2);
    }
    if (uStackX_10 < uStackX_8) {
        *arg2 = uStackX_8;
        uStackX_18 = var_28h;
    }
    else {
        *arg2 = uStackX_10;
    }
    *arg1 = uStackX_18;
    return;
}


/* fcn.000127b8 @ 0x127b8 */

ulong fcn.000127b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    
    if (arg1 - 1U < 2) {
        uVar1 = fcn.00011b10(0x40,0,arg1 & 0xffffffff,arg2);
    }
    else {
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00012670 @ 0x12670 */

ulong fcn.00012670(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong *puVar3;
    ulong *puVar4;
    int64_t iVar5;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        *arg1 = 0;
        *arg2 = 0;
        fcn.0001d66c(0x26100);
        while( true ) {
            iVar5 = 0;
            for (puVar3 = *0x261e0; puVar3 != 0x261e0; puVar3 = *puVar3) {
                iVar5 = iVar5 + 1;
            }
            if ((iVar5 == *arg1) && (*arg2 != 0)) {
                puVar4 = *arg2;
                for (puVar3 = *0x261e0; puVar3 != 0x261e0; puVar3 = *puVar3) {
                    *puVar4 = puVar3[2];
                    puVar4[1] = (puVar3[3] - puVar3[2]) + 1;
                    puVar4[2] = puVar3[4];
                    puVar4[3] = puVar3[5];
                    *(puVar4 + 4) = *(puVar3 + 6);
                    puVar4[5] = puVar3[7];
                    puVar4[6] = puVar3[8];
                    puVar4 = puVar4 + 7;
                }
                *0x26110 = 1;
                fcn.0001bc20(*0x26108);
                return 0;
            }
            *0x26110 = 1;
            fcn.0001bc20(*0x26108);
            if (*arg2 != 0) {
                fcn.0001ab70();
            }
            iVar2 = fcn.0001f8f0(iVar5 * 0x38);
            *arg2 = iVar2;
            if (iVar2 == 0) break;
            *arg1 = iVar5;
            fcn.0001d66c(0x26100);
        }
        *arg1 = 0;
        uVar1 = 0x8000000000000009;
    }
    return uVar1;
}


/* fcn.00019b44 @ 0x19b44 */

int64_t fcn.00019b44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStack_28;
    int64_t iStack_20;
    int64_t iStack_18;
    int64_t iStack_10;
    
    if ((arg3 == 0) || (arg1 == 0)) {
        return -0x7ffffffffffffffe;
    }
    *arg3 = 0;
    iStack_18 = 0x26640;
    iStack_28 = arg1;
    iStack_20 = arg2;
    iVar1 = fcn.0001d634(0x26628);
    if (iVar1 < 0) {
        return -0x7ffffffffffffff2;
    }
    *0x27bc0 = *0x27bc0 + 1;
    if (arg2 == 0) {
        iStack_10 = fcn.000136cc(arg1,0);
        if (iStack_10 != 0) {
            iStack_18 = iStack_10 + 0x28;
            iVar2 = fcn.0001992c(&iStack_28,arg3);
            goto code_r0x00019bfe;
        }
    }
    else {
        iVar2 = fcn.000198f4(&iStack_28,arg3);
code_r0x00019bfe:
        if (iVar2 != 0) {
            if (arg2 != 0) {
                *(arg2 + 0x28) = **(arg2 + 0x28);
            }
            goto code_r0x00019c13;
        }
    }
    iVar1 = -0x7ffffffffffffff2;
code_r0x00019c13:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return iVar1;
}


/* fcn.000136cc @ 0x136cc */

int64_t * fcn.000136cc(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (*0x26618 != 0x26618) {
        piVar2 = *0x26618;
        do {
            if ((piVar2[2] == *arg1) && (piVar2[3] == *(arg1 + 8))) {
                if (piVar2 + -1 != NULL) {
                    return piVar2 + -1;
                }
                break;
            }
            piVar2 = *piVar2;
        } while (piVar2 != 0x26618);
    }
    piVar2 = NULL;
    if ((arg2 != '\0') && (piVar2 = fcn.0001f8f0(0x48), piVar2 != NULL)) {
        *piVar2 = 0x65747270;
        piVar2[3] = *arg1;
        piVar2[4] = *(arg1 + 8);
        piVar1 = piVar2 + 5;
        *piVar1 = piVar1;
        piVar2[6] = piVar1;
        piVar1 = piVar2 + 7;
        *piVar1 = piVar1;
        piVar2[8] = piVar1;
        piVar1 = piVar2 + 1;
        *piVar1 = 0x26618;
        piVar2[2] = *0x26620;
        **0x26620 = piVar1;
        *0x26620 = piVar1;
    }
    return piVar2;
}


/* fcn.00013f48 @ 0x13f48 */

int64_t fcn.00013f48(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t *piVar2;
    bool bVar3;
    bool bVar4;
    bool bVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iStackX_10;
    int64_t in_stack_00000028;
    uint32_t in_stack_00000030;
    
    if ((arg2 == 0) || ((in_stack_00000030 != 4 && (arg3 == 0)))) {
        return -0x7ffffffffffffffe;
    }
    fcn.0001d66c(0x26628);
    iVar6 = fcn.0001369c(arg1);
    iVar8 = -0x7fffffffffffffec;
    iVar9 = -0x7ffffffffffffffd;
    if (iVar6 < 0) {
code_r0x00013ff7:
code_r0x00013ffc:
        if (in_stack_00000030 == 4) goto code_r0x00014265;
        if (iVar6 < 0) goto code_r0x0001400e;
    }
    else {
        if (in_stack_00000030 == 0) {
code_r0x00013fed:
            iVar6 = -0x7ffffffffffffffe;
            goto code_r0x00013ff7;
        }
        if ((in_stack_00000030 < 3) || (in_stack_00000030 == 4)) {
code_r0x0001403a:
            iStackX_10 = fcn.00013ed8(arg1,arg2);
            if (iStackX_10 == 0) {
                iVar6 = iVar9;
code_r0x00014050:
                iVar8 = -0x7fffffffffffffec;
            }
            else {
                bVar5 = false;
                puVar1 = iStackX_10 + 0x40;
                bVar4 = false;
                for (puVar7 = *puVar1; puVar7 != puVar1; puVar7 = *puVar7) {
                    if (((puVar7[2] == arg4) && (*(puVar7 + 4) == in_stack_00000030)) &&
                       (puVar7[3] == in_stack_00000028)) {
                        bVar3 = true;
                    }
                    else {
                        bVar3 = false;
                    }
                    if (((*(puVar7 + 4) & 0x10) != 0) && (bVar5 = true, bVar3)) {
                        iVar8 = -0x7fffffffffffffec;
                        iVar6 = iVar8;
                        goto code_r0x00013ffc;
                    }
                    if ((*(puVar7 + 4) & 0x20) == 0) {
                        if (bVar3) {
                            *(puVar7 + 0x24) = *(puVar7 + 0x24) + 1;
                            goto code_r0x0001411d;
                        }
                    }
                    else {
                        bVar4 = true;
                    }
                }
                if (in_stack_00000030 == 0x10) {
                    if ((bVar4) || (bVar5)) {
                        iVar6 = -0x7ffffffffffffff1;
                        goto code_r0x00014265;
                    }
code_r0x000141e8:
                    if (arg4 == 0) {
code_r0x0001411d:
                        iVar6 = 0;
                        goto code_r0x00014050;
                    }
                    puVar7 = fcn.0001f8f0(0x30);
                    iVar8 = -0x7fffffffffffffec;
                    iVar9 = -0x7ffffffffffffffd;
                    if (puVar7 == NULL) {
                        iVar6 = -0x7ffffffffffffff7;
                    }
                    else {
                        *puVar7 = 0x6c646f70;
                        piVar2 = puVar7 + 1;
                        puVar7[3] = arg4;
                        puVar7[4] = in_stack_00000028;
                        *(puVar7 + 5) = in_stack_00000030;
                        *(puVar7 + 0x2c) = 1;
                        *piVar2 = puVar1;
                        puVar1 = *(iStackX_10 + 0x48);
                        puVar7[2] = puVar1;
                        *puVar1 = piVar2;
                        *(iStackX_10 + 0x48) = piVar2;
                        *(iStackX_10 + 0x50) = *(iStackX_10 + 0x50) + 1;
                        iVar6 = 0;
                    }
                }
                else {
                    if ((in_stack_00000030 - 0x20 & 0xffffffef) != 0) goto code_r0x000141e8;
                    if (bVar4) {
                        iVar6 = -0x7ffffffffffffff1;
                        goto code_r0x00014050;
                    }
                    if (!bVar5) goto code_r0x000141e8;
                    do {
                        puVar7 = *puVar1;
                        while( true ) {
                            if (puVar7 == puVar1) {
                                iVar9 = -0x7ffffffffffffffd;
                                goto code_r0x000141e8;
                            }
                            if ((*(puVar7 + 4) & 0x10) != 0) break;
                            puVar7 = *puVar7;
                        }
                        *0x26638 = 1;
                        fcn.0001bc20(*0x26630);
                        iVar6 = fcn.00014ec4(arg1,puVar7[2],0);
                        fcn.0001d66c(0x26628);
                    } while (-1 < iVar6);
                    iVar6 = -0x7ffffffffffffff1;
                    iVar8 = -0x7fffffffffffffec;
                    iVar9 = -0x7ffffffffffffffd;
                }
            }
            goto code_r0x00013ffc;
        }
        if (in_stack_00000030 != 8) {
            if (in_stack_00000030 != 0x10) {
                if (in_stack_00000030 == 0x20) {
                    iVar6 = fcn.0001369c(arg4);
                    if (-1 < iVar6) goto code_r0x0001403a;
                    goto code_r0x0001400e;
                }
                if (in_stack_00000030 != 0x30) goto code_r0x00013fed;
            }
            iVar6 = fcn.0001369c(arg4);
            if ((iVar6 < 0) || (iVar6 = fcn.0001369c(in_stack_00000028), iVar6 < 0)) goto code_r0x00013ff7;
            goto code_r0x0001403a;
        }
        iVar6 = fcn.0001369c(arg4);
        if ((-1 < iVar6) && (iVar6 = fcn.0001369c(in_stack_00000028), -1 < iVar6)) {
            if (arg1 == in_stack_00000028) {
                iVar6 = -0x7ffffffffffffffe;
                goto code_r0x00014265;
            }
            goto code_r0x0001403a;
        }
code_r0x0001400e:
        if (iVar6 != iVar8) {
            if (iVar6 == iVar9) {
                *arg3 = 0;
            }
            goto code_r0x00014265;
        }
    }
    *arg3 = *(iStackX_10 + 0x38);
code_r0x00014265:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return iVar6;
}


/* fcn.0001369c @ 0x1369c */

uint64_t fcn.0001369c(int64_t arg1)

{
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    return -(*arg1 != 0x6c646e68) & 0x8000000000000002;
}


/* fcn.000184e8 @ 0x184e8 */

ulong fcn.000184e8(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg1_00 == NULL) || (*arg1_00 != 0x746e7665)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        fcn.0001d66c(0x26b90);
        if ((*(arg1_00 + 0xc) == 0) && (*(arg1_00 + 0xc) = 1, (*(arg1_00 + 1) & 0x200) != 0)) {
            if ((*(arg1_00 + 0xb) & 1) == 0) {
                fcn.000181a4(arg1_00);
            }
            else {
                *0x26ba0 = 1;
                fcn.0001bc20(*0x26b98);
                fcn.00018208(arg1_00 + 7);
                fcn.0001d66c(0x26b90);
            }
        }
        *0x26ba0 = 1;
        fcn.0001bc20(*0x26b98);
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001998c @ 0x1998c */

ulong fcn.0001998c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *arg1_00;
    char *arg2_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t iStackX_8;
    char *pcStackX_20;
    uint64_t uStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg1_00 = *arg2, arg1_00 == NULL)) {
code_r0x00019b2a:
        uVar5 = 0x8000000000000002;
    }
    else {
        iStack_50 = 0;
        iVar4 = 0;
        iStackX_8 = 0;
        for (pcStackX_20 = arg1_00; (*pcStackX_20 != '\x7f' || ((pcStackX_20[1] != -1 && (pcStackX_20[1] != '\x01'))));
            pcStackX_20 = pcStackX_20 + *(pcStackX_20 + 2)) {
        }
        iVar6 = pcStackX_20 - arg1_00;
        iVar2 = fcn.00019c50(2,arg1,0,&uStack_58);
        iVar1 = iStack_50;
        if ((-1 < iVar2) && (uStack_58 != 0)) {
            iVar2 = -1;
            uVar7 = 0;
            if (uStack_58 != 0) {
                do {
                    iStack_48 = *(iVar1 + uVar7 * 8);
                    iVar3 = fcn.00013f48(iStack_48,0x25b00,&pcStackX_20,*0x27b20);
                    arg2_00 = pcStackX_20;
                    if (-1 < iVar3) {
                        iVar3 = fcn.0001f678(pcStackX_20);
                        iVar3 = iVar3 + -4;
                        if (iVar3 <= iVar6) {
                            if ((iVar3 == 0) || (arg1_00 == arg2_00)) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = fcn.000104b0(arg1_00,arg2_00,iVar3);
                            }
                            if ((iVar4 == 0) && (iVar2 < iVar3)) {
                                iStackX_8 = iStack_48;
                                iVar4 = iStack_48;
                                iVar2 = iVar3;
                                goto code_r0x00019add;
                            }
                        }
                        iVar4 = iStackX_8;
                    }
code_r0x00019add:
                    uVar7 = uVar7 + 1;
                } while (uVar7 < uStack_58);
            }
            fcn.0001ab70(iStack_50);
            if (iVar2 != -1) {
                if (arg3 != 0) {
                    *arg3 = iVar4;
                    *arg2 = arg1_00 + iVar2;
                    return 0;
                }
                goto code_r0x00019b2a;
            }
        }
        uVar5 = 0x800000000000000e;
    }
    return uVar5;
}


/* fcn.00013d0c @ 0x13d0c */

int64_t fcn.00013d0c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.0001d66c(0x26628);
        iVar1 = fcn.0001369c(arg1);
        if (-1 < iVar1) {
            iVar1 = fcn.0001378c(arg1,arg2,arg3);
            if (iVar1 == 0) {
                iVar1 = -0x7ffffffffffffff2;
            }
            else {
                iVar1 = fcn.00013bf4(arg1,iVar1);
                if (-1 < iVar1) {
                    iVar1 = -0x7ffffffffffffff2;
                    puVar2 = fcn.00017ef4(arg1,arg2,arg3);
                    if (puVar2 != NULL) {
                        *0x27b68 = *0x27b68 + 1;
                        *(arg1 + 0x30) = *0x27b68;
                        *(puVar2[1] + 8) = puVar2[2];
                        *puVar2[2] = puVar2[1];
                        *puVar2 = 0;
                        fcn.0001ab70(puVar2);
                        iVar1 = 0;
                    }
                    if (*(arg1 + 0x18) == arg1 + 0x18) {
                        *arg1 = 0;
                        *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
                        **(arg1 + 0x10) = *(arg1 + 8);
                        fcn.0001ab70(arg1);
                    }
                }
            }
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
    }
    return iVar1;
}


/* fcn.00014ec4 @ 0x14ec4 */

int64_t fcn.00014ec4(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    uint32_t *puVar2;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    ulong *puVar9;
    ulong *puVar10;
    ulong *puVar11;
    uint64_t uVar12;
    uint in_R8;
    int64_t *piVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    ulong uVar16;
    uint uVar17;
    int64_t iStack_58;
    
    iStackX_18 = CONCAT44(in_R8,arg3);
    fcn.0001d66c(0x26628);
    iVar4 = fcn.0001369c(arg1);
    if ((iVar4 < 0) || ((iStackX_18 != 0 && (iVar4 = fcn.0001369c(iStackX_18), iVar4 < 0)))) {
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
        return iVar4;
    }
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    iVar4 = 0;
    uVar14 = 1;
    if (arg2 == 0) {
        fcn.0001d66c(0x26628);
        puVar1 = arg1 + 0x18;
        for (puVar11 = *puVar1; puVar11 != puVar1; puVar11 = *puVar11) {
            puVar9 = puVar11[7];
            while (puVar9 != puVar11 + 7) {
                puVar2 = puVar9 + 4;
                puVar9 = *puVar9;
                iVar5 = iVar4 + 1;
                if ((*puVar2 & 0x10) == 0) {
                    iVar5 = iVar4;
                }
                iVar4 = iVar5;
            }
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
        if (iVar4 == 0) {
            return 0;
        }
        iVar4 = fcn.0001f8f0(iVar4 << 3);
        if (iVar4 == 0) {
            return -0x7ffffffffffffff7;
        }
        uVar14 = 0;
        fcn.0001d66c(0x26628);
        for (puVar11 = *puVar1; puVar11 != puVar1; puVar11 = *puVar11) {
            for (puVar9 = puVar11[7]; puVar9 != puVar11 + 7; puVar9 = *puVar9) {
                if ((*(puVar9 + 4) & 0x10) != 0) {
                    uVar15 = 0;
                    if (uVar14 != 0) {
                        do {
                            if (*(iVar4 + uVar15 * 8) == puVar9[2]) goto code_r0x0001502b;
                            uVar15 = uVar15 + 1;
                        } while (uVar15 < uVar14);
                    }
                    *(iVar4 + uVar14 * 8) = puVar9[2];
                    uVar14 = uVar14 + 1;
                }
code_r0x0001502b:
            }
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
    }
    iStack_58 = 0;
    uVar15 = 0;
    iStackX_10 = arg2;
    if (uVar14 != 0) {
        do {
            if (iVar4 != 0) {
                iStackX_10 = *(iVar4 + uVar15 * 8);
            }
            uVar17 = 1;
            uVar16 = 0;
            iVar5 = fcn.00013f48(iStackX_10,0x25c50,&iStackX_20,*0x27b20);
            if ((iVar5 < 0) || (iStackX_20 == 0)) {
                iVar5 = -0x7ffffffffffffffe;
                goto code_r0x000152c6;
            }
            bVar3 = false;
            iVar5 = 0;
            fcn.0001d66c(0x26628);
            puVar1 = arg1 + 0x18;
            for (puVar11 = *puVar1; puVar11 != puVar1; puVar11 = *puVar11) {
                for (puVar9 = puVar11[7]; puVar9 != puVar11 + 7; puVar9 = *puVar9) {
                    iVar6 = iVar5;
                    if (puVar9[2] == iStackX_10) {
                        iVar6 = iVar5 + 1;
                        if ((*(puVar9 + 4) & 8) == 0) {
                            iVar6 = iVar5;
                        }
                        if ((*(puVar9 + 4) & 0x10) != 0) {
                            bVar3 = true;
                        }
                    }
                    iVar5 = iVar6;
                }
            }
            *0x26638 = 1;
            fcn.0001bc20(*0x26630);
            if (bVar3) {
                bVar3 = false;
                piVar7 = NULL;
                uVar12 = 0;
                if (iVar5 != 0) {
                    piVar7 = fcn.0001f8f0(iVar5 << 3);
                    if (piVar7 == NULL) {
                        iVar5 = -0x7ffffffffffffff7;
                        goto code_r0x000152c6;
                    }
                    uVar12 = 0;
                    fcn.0001d66c(0x26628);
                    bVar3 = false;
                    for (puVar11 = *puVar1; puVar11 != puVar1; puVar11 = *puVar11) {
                        puVar9 = puVar11 + 7;
                        puVar10 = *puVar9;
                        if (puVar10 != puVar9) {
                            do {
                                if ((puVar10[2] == iStackX_10) && ((*(puVar10 + 4) & 8) != 0)) {
                                    uVar8 = 0;
                                    if (uVar12 != 0) {
                                        do {
                                            if (piVar7[uVar8] == puVar10[3]) goto code_r0x000151bc;
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 < uVar12);
                                    }
                                    iVar5 = puVar10[3];
                                    piVar7[uVar12] = iVar5;
                                    if (iStackX_18 == iVar5) {
                                        bVar3 = true;
                                    }
                                    uVar12 = uVar12 + 1;
                                }
code_r0x000151bc:
                                puVar10 = *puVar10;
                            } while (puVar10 != puVar9);
                        }
                    }
                    *0x26638 = 1;
                    fcn.0001bc20(*0x26630);
                }
                if ((iStackX_18 == 0) || (bVar3)) {
                    uVar8 = 0;
                    iVar5 = 0;
                    if (uVar12 != 0) {
                        if (iStackX_18 == 0) {
                            uVar8 = uVar12;
                            piVar13 = piVar7;
                        }
                        else {
                            uVar8 = 1;
                            piVar13 = &iStackX_18;
                        }
                        iVar5 = (**(iStackX_20 + 0x10))(iStackX_20,arg1,uVar8,piVar13,uVar16,uVar17);
                        if (iVar5 < 0) goto code_r0x0001526e;
                    }
                    if ((iStackX_18 == 0) || (uVar12 == uVar8)) {
                        iVar5 = (**(iStackX_20 + 0x10))(iStackX_20,arg1,0,0);
                    }
                    if (-1 < iVar5) {
                        iStack_58 = iStack_58 + 1;
                    }
                }
code_r0x0001526e:
                if (piVar7 != NULL) {
                    fcn.0001ab70(piVar7);
                }
            }
            uVar15 = uVar15 + 1;
        } while (uVar15 < uVar14);
        if (iStack_58 != 0) {
            iVar5 = 0;
            goto code_r0x000152c6;
        }
    }
    iVar5 = -0x7ffffffffffffff2;
code_r0x000152c6:
    if (iVar4 != 0) {
        fcn.0001ab70(iVar4);
    }
    return iVar5;
}


/* fcn.000146b4 @ 0x146b4 */

int64_t fcn.000146b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint64_t arg4_00;
    uint64_t uVar10;
    uint uVar11;
    int64_t iStack_28;
    int64_t iStack_20;
    
    fcn.0001d66c(0x26628);
    iVar3 = fcn.0001369c(arg1);
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    iVar5 = 0;
    if (iVar3 < 0) {
        return iVar3;
    }
    if (*0x27b40 != NULL) {
        uVar11 = 1;
        uVar10 = 0;
        iVar4 = fcn.00013f48(arg1,0x25b00,&iStack_28,*0x27b20);
        iVar3 = iStack_28;
        if (-1 < iVar4) {
            iVar4 = iStack_28;
            iVar9 = iVar5;
            if ((arg3 != 0) && (arg4 == '\0')) {
                iVar4 = fcn.0001f678(iStack_28);
                iStack_28 = iVar4 + -4;
                iStack_20 = fcn.0001f678(arg3);
                iVar4 = fcn.0001f924(4,iStack_20 + iVar4 + -4);
                if ((iStack_28 != 0) && (iVar4 != iVar3)) {
                    fcn.00010430(iVar4,iVar3,iStack_28);
                }
                if ((iStack_20 != 0) && (iStack_28 + iVar4 != arg3)) {
                    fcn.00010430(iStack_28 + iVar4,arg3,iStack_20);
                }
                iVar9 = iVar4;
            }
            iVar3 = (***0x27b40)(*0x27b40,iVar4,0,0,uVar10 & 0xffffffffffffff00,uVar11);
            if (iVar9 != 0) {
                fcn.0001ab70(iVar9);
            }
            if (iVar3 < 0) {
                return iVar3;
            }
        }
    }
    if ((arg3 != 0) && (iVar5 = fcn.0001f6d0(arg3), iVar5 == 0)) {
        return -0x7ffffffffffffff7;
    }
    do {
        iVar3 = fcn.00014af8(arg1,arg2,iVar5);
        iStack_20 = iVar3;
    } while (iVar3 == -0x7ffffffffffffffa);
    uVar10 = 0;
    if (iVar5 != 0) {
        fcn.0001ab70(iVar5);
    }
    if (arg4 != '\0') {
        fcn.0001d66c(0x26628);
        iVar5 = fcn.0001369c(arg1);
        if (-1 < iVar5) {
            puVar1 = arg1 + 0x18;
            arg4_00 = uVar10;
            for (puVar7 = *puVar1; puVar7 != puVar1; puVar7 = *puVar7) {
                puVar6 = puVar7[7];
                while (puVar6 != puVar7 + 7) {
                    puVar2 = puVar6 + 4;
                    puVar6 = *puVar6;
                    uVar8 = arg4_00 + 1;
                    if ((*puVar2 & 8) == 0) {
                        uVar8 = arg4_00;
                    }
                    arg4_00 = uVar8;
                }
            }
            iVar3 = fcn.0001f8f0(arg4_00 << 3);
            if (iVar3 != 0) {
                uVar8 = uVar10;
                for (puVar7 = *puVar1; puVar7 != puVar1; puVar7 = *puVar7) {
                    for (puVar6 = puVar7[7]; puVar6 != puVar7 + 7; puVar6 = *puVar6) {
                        if ((*(puVar6 + 4) & 8) != 0) {
                            *(iVar3 + uVar8 * 8) = puVar6[3];
                            uVar8 = uVar8 + 1;
                        }
                    }
                }
                *0x26638 = 1;
                fcn.0001bc20(*0x26630);
                if (uVar8 != 0) {
                    do {
                        arg4_00 = CONCAT71(arg4_00 >> 8,1);
                        fcn.000146b4(*(iVar3 + uVar10 * 8),0,0,arg4_00);
                        uVar10 = uVar10 + 1;
                    } while (uVar10 < uVar8);
                }
                fcn.0001ab70(iVar3);
                return iStack_20;
            }
            iVar3 = -0x7ffffffffffffff7;
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
    }
    return iVar3;
}


/* fcn.0001378c @ 0x1378c */

ulong * fcn.0001378c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar3 = NULL;
    iVar1 = fcn.000136cc(arg2,0);
    if (iVar1 != 0) {
        for (puVar2 = *(arg1 + 0x18);
            (puVar3 = NULL, puVar2 != arg1 + 0x18 &&
            ((puVar3 = puVar2 + -1, puVar2[6] != arg3 || (puVar2[5] != iVar1)))); puVar2 = *puVar2) {
        }
    }
    return puVar3;
}


/* fcn.00013bf4 @ 0x13bf4 */

int64_t fcn.00013bf4(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    unkbyte7 in_R9;
    
    piVar1 = arg2 + 0x40;
    iVar2 = 0;
    do {
        piVar3 = *piVar1;
        while( true ) {
            if (piVar3 == piVar1) {
                if (-1 < iVar2) {
                    piVar3 = *piVar1;
                    while (piVar3 != piVar1) {
                        if ((*(piVar3 + 4) & 7) == 0) {
                            piVar3 = *piVar3;
                        }
                        else {
                            *(*piVar3 + 8) = piVar3[1];
                            *piVar3[1] = *piVar3;
                            piVar3 = *piVar3;
                            *(arg2 + 0x50) = *(arg2 + 0x50) + -1;
                            fcn.0001ab70();
                        }
                    }
                    if (*(arg2 + 0x50) == 0) {
                        return iVar2;
                    }
                }
                goto code_r0x00013cb0;
            }
            if ((*(piVar3 + 4) & 0x10) != 0) break;
            piVar3 = *piVar3;
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
        iVar2 = fcn.00014ec4(arg1,piVar3[2],0);
        fcn.0001d66c(0x26628);
    } while (-1 < iVar2);
code_r0x00013cb0:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    fcn.000146b4(arg1,0,0,CONCAT71(in_R9,1));
    fcn.0001d66c(0x26628);
    return -0x7ffffffffffffff1;
}


/* fcn.00017ef4 @ 0x17ef4 */

int64_t fcn.00017ef4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = fcn.0001378c(arg1,arg2,arg3);
    if (iVar1 != 0) {
        piVar3 = *(iVar1 + 0x30) + 0x38;
        piVar2 = *piVar3;
        if (piVar2 != piVar3) {
            do {
                if (piVar2[3] == iVar1 + 0x20) {
                    piVar2[3] = *(iVar1 + 0x28);
                }
                piVar2 = *piVar2;
            } while (piVar2 != piVar3);
        }
        *(*(iVar1 + 0x20) + 8) = *(iVar1 + 0x28);
        **(iVar1 + 0x28) = *(iVar1 + 0x20);
    }
    return iVar1;
}


/* fcn.00013ed8 @ 0x13ed8 */

int64_t * fcn.00013ed8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = fcn.0001369c(arg1);
    if (-1 < iVar1) {
        piVar3 = arg1 + 0x18;
        piVar2 = *piVar3;
        if (piVar2 != piVar3) {
            do {
                if ((*(piVar2[5] + 0x18) == *arg2) && (*(piVar2[5] + 0x20) == *(arg2 + 8))) {
                    return piVar2 + -1;
                }
                piVar2 = *piVar2;
            } while (piVar2 != piVar3);
        }
    }
    return NULL;
}


/* fcn.0001f678 @ 0x1f678 */

char * fcn.0001f678(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    ulong in_R8;
    int64_t in_R9;
    
    pcVar2 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001f604(arg1,0,in_R8,in_R9);
        pcVar3 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar3 != '\x7f' || (pcVar3[1] != -1)); pcVar3 = pcVar3 + *(pcVar3 + 2)) {
            }
            pcVar2 = pcVar3 + (*(pcVar3 + 2) - arg1);
        }
    }
    return pcVar2;
}


/* fcn.0001f6d0 @ 0x1f6d0 */

void fcn.0001f6d0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001f678(arg1);
    if (arg1_00 != 0) {
        fcn.0001f974(4,arg1_00,arg1);
    }
    return;
}


/* fcn.00014af8 @ 0x14af8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong fcn.00014af8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong *puVar1;
    bool bVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg3_00;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    int64_t iVar11;
    uint64_t uVar12;
    uint64_t uStackX_20;
    int64_t var_40h;
    int64_t var_50h;
    uint32_t var_58h;
    int64_t iStack_68;
    int64_t iStack_60;
    uint64_t uStack_58;
    ulong *puStack_50;
    ulong uStack_48;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar11 = 0;
    uStack_58 = 0;
    iStack_60 = 0;
    uStackX_20 = 0;
    puStack_50 = NULL;
    uStack_48 = 0;
    iVar5 = fcn.00019c50(2,0x25c50,0,&uStack_58);
    uVar8 = uStack_58;
    if ((-1 < iVar5) && (uStack_58 != 0)) {
        arg3_00 = fcn.0001f8f0(uStack_58 << 3);
        iVar5 = iStack_60;
        if (arg3_00 == 0) {
            fcn.0001ab70(iStack_60);
            return 0x8000000000000009;
        }
        if (arg2 != 0) {
            arg1_00 = *arg2;
            while (arg1_00 != 0) {
                fcn.00014980(arg1_00,&uStackX_20,arg3_00,uVar8);
                iVar11 = iVar11 + 1;
                arg1_00 = *(arg2 + iVar11 * 8);
            }
        }
        iVar11 = fcn.00019b44(0x25cd0,0,&puStack_50);
        puVar1 = puStack_50;
        if ((-1 < iVar11) && (puStack_50 != NULL)) {
            iStack_68 = 0;
            while (iVar11 = (**puVar1)(puVar1,arg1,&iStack_68), -1 < iVar11) {
                fcn.00014980(iStack_68,&uStackX_20,arg3_00,uVar8);
            }
        }
        while( true ) {
            uVar10 = 0;
            uVar9 = 0;
            uVar12 = uVar8;
            if (uVar8 == 0) break;
            do {
                iVar11 = fcn.00013f48(*(iVar5 + uVar9 * 8),0x25b10,&puStack_50,*0x27b20);
                if (((-1 < iVar11) && (puStack_50 != NULL)) &&
                   ((uVar4 = (**puStack_50)(puStack_50), uVar12 == uVar8 || (uVar10 < uVar4)))) {
                    uVar12 = uVar9;
                    uVar10 = uVar4;
                }
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar8);
            if (uVar12 == uVar8) break;
            fcn.00014980(*(iVar5 + uVar12 * 8),&uStackX_20,arg3_00,uVar8);
        }
        iVar11 = fcn.00013f48(arg1,0x25b60,&puStack_50,*0x27b20);
        puVar1 = puStack_50;
        if ((-1 < iVar11) && (puStack_50 != NULL)) {
            iStack_68 = 0;
            while (iVar11 = (**puVar1)(puVar1,&iStack_68), -1 < iVar11) {
                fcn.00014980(iStack_68,&uStackX_20,arg3_00,uVar8);
            }
        }
        uVar12 = uStackX_20;
        uVar9 = 0;
        if (uVar8 != 0) {
            do {
                fcn.00014980(*(iVar5 + uVar9 * 8),&uStackX_20,arg3_00,uVar8);
                uVar9 = uVar9 + 1;
            } while (uVar9 < uVar8);
        }
        uVar9 = uStackX_20;
        fcn.0001ab70(iVar5);
        fcn.00019c50(2,0x25c50,0,&uStackX_20);
        fcn.0001ab70(uStack_48);
        if (uVar8 < uStackX_20) {
            fcn.0001ab70(arg3_00);
            return 0x8000000000000006;
        }
        while (uVar8 = uVar12, uVar8 < uVar9) {
            iVar11 = *(arg3_00 + uVar8 * 8);
            uVar12 = uVar8 + 1;
            uVar10 = *(iVar11 + 0x18);
            uVar6 = uVar12;
            uVar7 = uVar8;
            if (uVar12 < uVar9) {
                do {
                    iVar5 = *(arg3_00 + uVar6 * 8);
                    if (uVar10 < *(iVar5 + 0x18)) {
                        uVar10 = *(iVar5 + 0x18);
                        uVar7 = uVar6;
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar9);
                if (uVar8 != uVar7) {
                    *(arg3_00 + uVar8 * 8) = *(arg3_00 + uVar7 * 8);
                    *(arg3_00 + uVar7 * 8) = iVar11;
                }
            }
        }
        bVar2 = false;
code_r0x00014e18:
        do {
            bVar3 = false;
            uVar8 = 0;
            if (uVar9 == 0) break;
            do {
                if (bVar3) goto code_r0x00014e18;
                puVar1 = *(arg3_00 + uVar8 * 8);
                if ((puVar1 != NULL) && (iVar11 = (**puVar1)(puVar1,arg1,arg3), -1 < iVar11)) {
                    *(arg3_00 + uVar8 * 8) = 0;
                    bVar3 = true;
                    iVar11 = (*puVar1[1])(puVar1,arg1,arg3);
                    if (-1 < iVar11) {
                        bVar2 = true;
                    }
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uVar9);
        } while (bVar3);
        fcn.0001ab70(arg3_00);
        if ((bVar2) || (((arg3 != 0 && (*arg3 == '\x7f')) && (*(arg3 + 1) == -1)))) {
            return 0;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00014980 @ 0x14980 */

void fcn.00014980(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t in_stack_00000028;
    char in_stack_00000030;
    int64_t aiStack_28 [2];
    
    fcn.0001d66c(0x26628);
    iVar1 = fcn.0001369c(arg1);
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    if (-1 < iVar1) {
        if (in_stack_00000030 == '\0') {
            iVar1 = fcn.00013f48(arg1,0x25c50,aiStack_28,*0x27b20);
            if ((-1 < iVar1) && (aiStack_28[0] != 0)) {
                uVar2 = 0;
                uVar3 = *arg2;
                if (uVar3 != 0) {
                    do {
                        if (arg4 <= uVar2) break;
                        if (aiStack_28[0] == *(arg3 + uVar2 * 8)) {
                            return;
                        }
                        uVar2 = uVar2 + 1;
                    } while (uVar2 < uVar3);
                }
                if (uVar3 < arg4) {
                    *(arg3 + uVar3 * 8) = aiStack_28[0];
                }
                *arg2 = uVar3 + 1;
                uVar3 = 0;
                if (arg4 != 0) {
                    do {
                        if (*(in_stack_00000028 + uVar3 * 8) == arg1) {
                            *(in_stack_00000028 + uVar3 * 8) = 0;
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < arg4);
                }
            }
        }
        else {
            uVar3 = 0;
            if (arg4 != 0) {
                do {
                    iVar1 = fcn.00013f48(*(in_stack_00000028 + uVar3 * 8),0x25c50,aiStack_28,*0x27b20);
                    if (((-1 < iVar1) && (aiStack_28[0] != 0)) && (*(aiStack_28[0] + 0x20) == arg1)) {
                        fcn.00014980(*(in_stack_00000028 + uVar3 * 8),arg2,arg3,arg4);
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < arg4);
            }
        }
    }
    return;
}


/* fcn.00019c50 @ 0x19c50 */

int64_t fcn.00019c50(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStackX_20;
    int64_t *in_stack_00000028;
    
    if ((arg4 == 0) || (in_stack_00000028 == NULL)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        *arg4 = 0;
        *in_stack_00000028 = 0;
        uStackX_20 = 0;
        fcn.0001d66c(0x26628);
        iVar1 = fcn.000196f0(arg1 & 0xffffffff,arg2,arg3,&uStackX_20);
        if ((iVar1 < 0) && (iVar1 != -0x7ffffffffffffffb)) {
            if (iVar1 != -0x7ffffffffffffffe) {
                iVar1 = -0x7ffffffffffffff2;
            }
        }
        else {
            iVar1 = fcn.0001f8f0(uStackX_20);
            *in_stack_00000028 = iVar1;
            if (iVar1 == 0) {
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                iVar1 = fcn.000196f0(arg1 & 0xffffffff,arg2,arg3,&uStackX_20);
                uVar2 = uStackX_20 >> 3;
                if (iVar1 < 0) {
                    uVar2 = 0;
                }
                *arg4 = uVar2;
            }
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
    }
    return iVar1;
}


/* fcn.00010490 @ 0x10490 */

int64_t fcn.00010490(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000152e8 @ 0x152e8 */

void fcn.000152e8(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = iVar2 + 8;
    *(*piVar1 + 8) = *(iVar2 + 0x10);
    **(iVar2 + 0x10) = *piVar1;
    *piVar1 = 0;
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x18) != '\0') {
        *piVar1 = 0x266d0;
        *(iVar2 + 0x10) = *0x266d8;
        **0x266d8 = piVar1;
        *0x266d8 = piVar1;
    }
    return;
}


/* fcn.000167dc @ 0x167dc */

int64_t fcn.000167dc(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t arg1_00;
    uint64_t arg3_00;
    
    arg3_00 = arg1 & 0xffffffff;
    arg1_00 = fcn.00015e40(-1,arg2,arg3_00,0x1000);
    if (arg1_00 != 0) {
        if (arg3 == '\0') {
            fcn.00015978(arg1_00,arg2,CONCAT71(arg3_00 >> 8,1),arg1 & 0xffffffff);
        }
        else {
            fcn.0001ddc0(arg1_00,arg2,arg1);
        }
    }
    return arg1_00;
}


/* fcn.00015334 @ 0x15334 */

void fcn.00015334(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int iVar2;
    ulong *puVar3;
    ulong *puVar4;
    ulong *puVar5;
    
    iVar2 = arg1;
    if (((iVar2 == 7) && (arg2 == 0)) && (0xffe < arg3)) {
        fcn.00010490(0,0x1000,0);
    }
    *0x27b78 = *0x27b78 + 1;
    fcn.00018208(0x25a30);
    puVar5 = 0x26e78;
    puVar3 = *0x26e78;
code_r0x000153cf:
    do {
        do {
            puVar4 = puVar3;
            if (puVar4 == puVar5) {
                iVar1 = *0x27b90 * 0x40;
                *(iVar1 + 0x29aa0) = 0x70616d6d;
                *(iVar1 + 0x29ab8) = 0;
                *(iVar1 + 0x29abc) = iVar2;
                *(iVar1 + 0x29ac0) = arg2;
                *(iVar1 + 0x29ac8) = arg3;
                *(iVar1 + 0x29ad0) = 0;
                *(iVar1 + 0x29ad8) = arg4;
                puVar3 = iVar1 + 0x29aa8;
                *0x27b90 = *0x27b90 + 1;
                *puVar3 = puVar5;
                *(iVar1 + 0x29ab0) = *0x26e80;
                **0x26e80 = puVar3;
                *0x26e80 = puVar3;
                return;
            }
            puVar3 = *puVar4;
        } while (*(puVar4 + 0x14) != iVar2);
    } while (puVar4[6] != arg4);
    iVar1 = puVar4[4];
    if (iVar1 + 1 != arg2) goto code_r0x000153bd;
    arg2 = puVar4[3];
    iVar1 = arg3;
    goto code_r0x000153ca;
code_r0x000153bd:
    if (puVar4[3] == arg3 + 1) {
code_r0x000153ca:
        fcn.000152e8(puVar4 - 8);
        arg3 = iVar1;
    }
    goto code_r0x000153cf;
}


/* fcn.00015450 @ 0x15450 */

void fcn.00015450(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    
    if (*0x27b70 == 0) {
        *0x27b70 = 1;
        iVar3 = 1;
        iVar4 = *0x27b90;
        if (*0x27b90 != 0) {
            do {
                if (*0x266d0 == 0x266d0) {
                    iVar3 = fcn.000167dc(4,1,arg1,0);
                    if (iVar3 != 0) {
                        iVar4 = 0x40;
                        piVar2 = iVar3 + 8;
                        do {
                            piVar5 = piVar2;
                            piVar5[-1] = 0x70616d6d;
                            *piVar5 = 0x266d0;
                            piVar5[1] = *0x266d8;
                            **0x266d8 = piVar5;
                            iVar4 = iVar4 + -1;
                            piVar2 = piVar5 + 8;
                            *0x266d8 = piVar5;
                        } while (iVar4 != 0);
                        iVar4 = *0x27b90;
                        goto code_r0x00015510;
                    }
                    piVar5 = NULL;
                }
                else {
code_r0x00015510:
                    piVar2 = *0x266d0;
                    piVar5 = *0x266d0 + -1;
                    *(**0x266d0 + 8) = (*0x266d0)[1];
                    *piVar2[1] = *piVar2;
                    *0x27b90 = iVar4;
                }
                iVar4 = *0x27b90 + -1;
                arg1 = iVar4 * 0x40;
                *0x27b90 = iVar4;
                if (*(arg1 + 0x29aa8) == 0) {
                    piVar2 = piVar5 + 1;
                    *piVar2 = 0x266d0;
                    piVar5[2] = *0x266d8;
                    **0x266d8 = piVar2;
                    *0x266d8 = piVar2;
                }
                else {
                    *(*(arg1 + 0x29aa8) + 8) = *(arg1 + 0x29ab0);
                    **(arg1 + 0x29ab0) = *(arg1 + 0x29aa8);
                    *(arg1 + 0x29aa8) = 0;
                    if (piVar5 != arg1 + 0x29aa0) {
                        fcn.00010430(piVar5,arg1 + 0x29aa0,0x40);
                        iVar4 = *0x27b90;
                    }
                    *(piVar5 + 3) = 1;
                    for (arg1 = *0x26e78;
                        (arg1 != 0x26e78 && ((*(arg1 + 0x10) == '\0' || (*(arg1 + 0x18) <= piVar5[4])))); arg1 = *arg1)
                    {
                    }
                    piVar2 = piVar5 + 1;
                    *piVar2 = arg1;
                    piVar1 = *(arg1 + 8);
                    piVar5[2] = piVar1;
                    *piVar1 = piVar2;
                    *(arg1 + 8) = piVar2;
                }
            } while (iVar4 != 0);
            iVar3 = *0x27b70;
        }
        *0x27b70 = iVar3 + -1;
    }
    return;
}


/* fcn.0001db54 @ 0x1db54 */

uchar fcn.0001db54(int64_t arg1)

{
    int64_t iVar1;
    uchar uVar2;
    
    iVar1 = fcn.0001da6c(arg1 + -0x1000,3);
    uVar2 = 1;
    if ((iVar1 != 1) && (1 < iVar1 - 4U)) {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001da6c @ 0x1da6c */

uint64_t fcn.0001da6c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t *puStackX_10;
    
    uVar5 = 0;
    iVar4 = 0;
    do {
        uVar1 = fcn.0001d690(arg1,0,&puStackX_10);
        uVar3 = arg2;
        if (uVar1 < arg2) {
            uVar3 = uVar1;
        }
        if (puStackX_10 != NULL) {
            uVar2 = arg1 >> 0xc & 0x3f;
            uVar1 = uVar2;
            if (uVar1 + uVar3 < 0x41) {
                uVar6 = 0;
                uVar7 = uVar3;
            }
            else {
                uVar6 = uVar1 + uVar3 & 0x3f;
                uVar7 = 0x40 - uVar1;
            }
            if ((uVar1 == 0) && (uVar3 == 0x40)) {
                uVar1 = *puStackX_10;
            }
            else {
                uVar1 = *puStackX_10 >> uVar2 & (1LL << (uVar7 & 0x3f)) - 1U;
                if (uVar6 != 0) {
                    uVar1 = uVar1 | ((1LL << uVar6) - 1U & puStackX_10[1]) << (uVar7 & 0x3f);
                }
            }
            uVar5 = uVar5 | uVar1 << (iVar4 & 0x3f);
        }
        iVar4 = iVar4 + uVar3;
        arg2 = arg2 - uVar3;
        arg1 = arg1 + uVar3 * 0x1000;
    } while (arg2 != 0);
    return uVar5;
}


/* fcn.00015c9c @ 0x15c9c */

uint64_t fcn.00015c9c(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong *puVar1;
    char cVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    uint in_register_00000014;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t in_stack_00000028;
    char in_stack_00000030;
    
    uVar7 = CONCAT44(in_register_0000000c,arg1);
    if ((uVar7 < 0xfff) || (uVar6 = 0, arg3 == 0)) {
        uVar6 = 0;
    }
    else {
        if ((arg1 & 0xfff) != 0xfff) {
            uVar7 = uVar7 - 0x1000 | 0xfff;
        }
        for (puVar1 = *0x26e78; puVar1 != 0x26e78; puVar1 = *puVar1) {
            if (*(puVar1 + 0x14) == 7) {
                uVar4 = puVar1[4];
                if ((puVar1[3] < uVar7) && (CONCAT44(in_register_00000014,arg2) <= uVar4)) {
                    if (uVar7 <= uVar4) {
                        uVar4 = uVar7;
                    }
                    uVar4 = (~(in_stack_00000028 - 1U) & uVar4 + 1) - 1;
                    if ((((puVar1[3] <= uVar4) && (uVar3 = (uVar4 - puVar1[3]) + 1, arg3 * 0x1000 <= uVar3)) &&
                        (CONCAT44(in_register_00000014,arg2) <= uVar4 + arg3 * -0x1000 + 1)) && (uVar6 < uVar4)) {
                        if (in_stack_00000030 == '\0') {
code_r0x00015de1:
                            uVar6 = uVar4;
                        }
                        else {
                            uVar5 = (uVar4 - uVar3) + 1;
                            uVar4 = uVar5 + arg3 * -0x1000 + uVar3;
                            if (uVar4 != 0) {
                                cVar2 = fcn.0001db54(uVar3 + uVar5);
                                if (cVar2 == '\0') {
                                    uVar4 = uVar4 - 0x1000;
                                }
                                if (((uVar5 <= uVar4) &&
                                    ((uVar4 != uVar5 || (cVar2 = fcn.0001db54(uVar4 - 0x1000), cVar2 != '\0')))) &&
                                   (uVar4 = (arg3 * 0x1000 - 1U) + uVar4, uVar4 != 0)) goto code_r0x00015de1;
                            }
                        }
                    }
                }
            }
        }
        uVar6 = uVar6 + arg3 * -0x1000 + 1;
        if ((uVar6 & 0xfff) != 0) {
            uVar6 = 0;
        }
    }
    return uVar6;
}


/* fcn.00015628 @ 0x15628 */

uchar fcn.00015628(void)

{
    uint64_t uVar1;
    ulong noname_0;
    int64_t arg2;
    ulong *puVar2;
    uchar uVar3;
    int64_t arg3;
    
    fcn.0001d66c(0x26100);
    uVar3 = 0;
    for (puVar2 = *0x261e0; puVar2 != 0x261e0; puVar2 = *puVar2) {
        if (((*(puVar2 + 6) == 1) && (arg3 = puVar2[3], arg3 != -1)) &&
           (uVar1 = puVar2[4], (uVar1 & 0x700000000000000) == 0x300000000000000)) {
            arg2 = puVar2[2];
            puVar2[8] = 0;
            puVar2[7] = *0x27b20;
            *(puVar2 + 6) = (-((uVar1 & 0x10000) != 0) & 3) + 2;
            noname_0 = 7;
            puVar2[4] = uVar1 | 0x400000000000000;
            fcn.00015334(7,arg2,arg3,uVar1 & 0x78ffffffffffffff);
            fcn.00015450(noname_0,arg2,arg3);
            uVar3 = 1;
        }
    }
    *0x26110 = 1;
    fcn.0001bc20(*0x26108);
    return uVar3;
}


/* fcn.00015e40 @ 0x15e40 */

uint64_t fcn.00015e40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = arg3;
    do {
        if (((uVar3 < 0xf) && (uVar2 = *(uVar3 * 0x30 + 0x266f8), uVar2 <= arg1)) &&
           (uVar2 = fcn.00015c9c(uVar2,*(uVar3 * 0x30 + 0x266f0),arg2), uVar2 != 0)) {
            return uVar2;
        }
        if ((*0x266e0 <= arg1) && (uVar2 = fcn.00015c9c(*0x266e0,0,arg2), uVar2 != 0)) {
            if (uVar2 < *0x269f0) {
                *0x269f0 = uVar2;
            }
            return uVar2;
        }
        uVar2 = fcn.00015c9c(arg1,0,arg2);
        if (uVar2 != 0) {
            return uVar2;
        }
        cVar1 = fcn.00015628();
    } while (cVar1 != '\0');
    return 0;
}


/* fcn.0001ddc0 @ 0x1ddc0 */

ulong fcn.0001ddc0(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    ulong extraout_RAX;
    int64_t arg1_00;
    uint32_t uVar2;
    uint in_R8;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    uVar2 = arg3;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    if (arg3 == 7) {
        fcn.0001dd10(&iStackX_8,&iStackX_10);
        fcn.0001dc28(arg1,arg2);
        if (iStackX_10 == 0) {
            return 0;
        }
        arg2 = iStackX_10;
        arg1_00 = iStackX_8;
    }
    else {
        cVar1 = fcn.0001db54(arg2 * 0x1000 + arg1);
        if (cVar1 == '\0') {
            arg2 = arg2 + 1;
        }
        cVar1 = fcn.0001db54(arg1 + -0x1000);
        arg1_00 = arg1;
        if (cVar1 == '\0') {
            arg2 = arg2 + 1;
            arg1_00 = arg1 + -0x1000;
        }
    }
    fcn.00015978(arg1_00,arg2,CONCAT44(in_R8,CONCAT31(uVar2 >> 8,1)),arg3);
    return extraout_RAX;
}


/* fcn.0001dbc0 @ 0x1dbc0 */

void fcn.0001dbc0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    uint64_t noname_1;
    uint64_t uVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t *unaff_RSI;
    uint64_t *arg1_01;
    uint32_t uVar6;
    
    arg1_00 = arg2 * 0x1000 + arg1;
    cVar1 = fcn.0001db54(arg1_00);
    if (cVar1 == '\0') {
        fcn.0001db88(arg1_00);
    }
    cVar1 = fcn.0001db54(arg1 + -0x1000);
    if (cVar1 == '\0') {
        fcn.0001db88(arg1 + -0x1000);
    }
    if (arg2 != 0) {
        uVar5 = arg2;
        do {
            uVar2 = fcn.0001d690(arg1,CONCAT71(arg2 >> 8,1),&stack0x00000010);
            uVar3 = uVar5;
            if (uVar2 < uVar5) {
                uVar3 = uVar2;
            }
            uVar6 = arg1 >> 0xc & 0x3f;
            if (uVar6 + uVar3 < 0x40) {
                uVar4 = 0;
                noname_1 = 0;
                uVar2 = uVar3;
            }
            else {
                uVar4 = uVar6 + uVar3 & 0x3f;
                noname_1 = uVar3 - (-uVar6 & 0x3f) >> 6;
                uVar2 = -uVar6 & 0x3f;
            }
            arg1_01 = unaff_RSI;
            if (uVar2 != 0) {
                *unaff_RSI = *unaff_RSI | (1LL << (uVar2 & 0x3f)) + -1 << uVar6;
                arg1_01 = unaff_RSI + 1;
            }
            arg2 = noname_1;
            if (noname_1 != 0) {
                if (noname_1 != 0) {
                    fcn.000104d0(arg1_01,noname_1,-1);
                }
                arg1_01 = arg1_01 + noname_1;
            }
            if (uVar4 != 0) {
                *arg1_01 = *arg1_01 | (1LL << uVar4) - 1U;
            }
            uVar5 = uVar5 - uVar3;
            arg1 = arg1 + uVar3 * 0x1000;
        } while (uVar5 != 0);
    }
    return;
}


/* fcn.00015f24 @ 0x15f24 */

int64_t fcn.00015f24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg3_00;
    int64_t iVar1;
    uint64_t *puVar2;
    uint64_t arg1_00;
    int iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint64_t arg3_01;
    uint64_t uVar6;
    char in_stack_00000028;
    
    arg3_00 = arg2;
    arg3_01 = arg2 & 0xffffffff;
    iVar3 = arg1;
    if (((arg3_00 - 0xe < 0x6ffffff2) || (arg3_00 == 7)) || (arg4 == 0)) {
        return -0x7ffffffffffffffe;
    }
    if ((iVar3 == 2) && ((*arg4 & 0xfff) != 0)) {
code_r0x00015f7c:
        iVar1 = -0x7ffffffffffffff2;
        goto code_r0x000160cb;
    }
    arg1_00 = *arg4;
    uVar6 = 0xffffffffffffffff;
    if (iVar3 == 2) {
        if ((0xffffffffffffe < arg3 - 1U) || (uVar4 = (arg1_00 - 1) + arg3 * 0x1000, uVar4 <= arg1_00))
        goto code_r0x00015f7c;
        uVar5 = 0;
        puVar2 = 0x266f8;
        do {
            if ((((arg3_00 != uVar5) && (puVar2[4] != '\0')) && (puVar2[2] != 0)) &&
               ((((puVar2[-1] <= arg1_00 && (arg1_00 <= *puVar2)) || ((puVar2[-1] <= uVar4 && (uVar4 <= *puVar2)))) ||
                ((arg1_00 < puVar2[-1] && (*puVar2 < uVar4)))))) goto code_r0x00015f7c;
            uVar5 = uVar5 + 1;
            puVar2 = puVar2 + 6;
        } while (uVar5 < 0xf);
    }
    else if (iVar3 == 1) {
        uVar6 = arg1_00;
    }
    uVar4 = arg3;
    fcn.0001d66c(0x26e88);
    if (iVar3 == 2) {
code_r0x00016060:
        if (in_stack_00000028 == '\0') {
            iVar1 = fcn.00015978(arg1_00,arg3,CONCAT71(uVar4 >> 8,1),arg3_01);
        }
        else {
            iVar1 = fcn.0001ddc0(arg1_00,arg3,arg3_00);
        }
    }
    else {
        uVar4 = arg3_01;
        arg1_00 = fcn.00015e40(uVar6,arg3,arg3_01,0x1000);
        if (arg1_00 != 0) goto code_r0x00016060;
        iVar1 = -0x7ffffffffffffff7;
    }
    *0x26e98 = 1;
    fcn.0001bc20(*0x26e90);
    if (-1 < iVar1) {
        if (in_stack_00000028 != '\0') {
            fcn.0001dbc0(arg1_00,arg3);
        }
        *arg4 = arg1_00;
    }
code_r0x000160cb:
    return iVar1;
}


/* fcn.00016258 @ 0x16258 */

int64_t fcn.00016258(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int *piVar2;
    uint in_register_00000014;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 != CONCAT44(in_register_00000014,arg2)) {
        do {
            if ((*piVar2 == *CONCAT44(in_register_00000014,arg2)) &&
               (*(piVar2 + 8) == *(CONCAT44(in_register_00000014,arg2) + 0x20))) {
                iVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x18);
                if (*(piVar2 + 6) * 0x1000 + *(piVar2 + 2) == *(CONCAT44(in_register_00000014,arg2) + 8)) {
code_r0x000162b7:
                    *(piVar2 + 6) = *(piVar2 + 6) + iVar1;
                    return CONCAT44(in_register_00000014,arg2);
                }
                if (*(piVar2 + 2) + iVar1 * -0x1000 == *(CONCAT44(in_register_00000014,arg2) + 8)) {
                    *(piVar2 + 2) = *(CONCAT44(in_register_00000014,arg2) + 8);
                    *(piVar2 + 4) = *(CONCAT44(in_register_00000014,arg2) + 0x10);
                    iVar1 = *(CONCAT44(in_register_00000014,arg2) + 0x18);
                    goto code_r0x000162b7;
                }
            }
            piVar2 = piVar2 + 0xc;
        } while (piVar2 != CONCAT44(in_register_00000014,arg2));
    }
    return CONCAT44(in_register_00000014,arg2) + 0x30;
}


/* fcn.0001bf08 @ 0x1bf08 */

void fcn.0001bf08(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int *piVar2;
    int *arg1_00;
    int *piVar3;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *arg2;
    piVar3 = piVar2;
    arg1_00 = piVar2;
    while (piVar3 < iVar1 + piVar2) {
        if (arg1_00 != piVar3) {
            fcn.00010430(arg1_00,piVar3,0x28);
        }
        while ((((piVar3 = piVar3 + arg3, piVar3 < iVar1 + piVar2 && (*arg1_00 == *piVar3)) &&
                (*(arg1_00 + 8) == *(piVar3 + 8))) && (*(arg1_00 + 6) * 0x1000 + *(arg1_00 + 2) == *(piVar3 + 2)))) {
            *(arg1_00 + 6) = *(arg1_00 + 6) + *(piVar3 + 6);
        }
        arg1_00 = arg1_00 + arg3;
    }
    *arg2 = arg1_00 - piVar2;
    return;
}


/* fcn.00019854 @ 0x19854 */

ulong fcn.00019854(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    
    fcn.0001d66c(0x26628);
    uVar1 = fcn.000196f0(arg1 & 0xffffffff,arg2,arg3,arg4);
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return uVar1;
}


/* fcn.000196f0 @ 0x196f0 */

int64_t fcn.000196f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    bool bVar2;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    code *pcVar6;
    uchar auStackX_20 [8];
    int64_t *in_stack_00000028;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    
    bVar2 = false;
    iVar4 = arg1;
    if (arg4 == 0) {
        bVar2 = true;
code_r0x00019725:
        uVar5 = 0;
        iStack_38 = 0x26640;
        iStack_48 = arg2;
        iStack_40 = arg3;
        if (iVar4 != 0) {
            if (iVar4 == 1) {
                if (arg3 != 0) {
                    pcVar6 = fcn.000198f4;
                    goto code_r0x000197b9;
                }
            }
            else if ((iVar4 == 2) && (pcVar6 = fcn.0001992c, arg2 != 0)) {
                iStack_30 = fcn.000136cc(arg2,0);
                if (iStack_30 != 0) {
                    iStack_38 = iStack_30 + 0x28;
                    goto code_r0x000197b9;
                }
                goto code_r0x00019830;
            }
            iVar3 = -0x7ffffffffffffffe;
            goto code_r0x0001983d;
        }
        pcVar6 = 0x198cc;
code_r0x000197b9:
        if (!bVar2) {
            *0x27bc0 = *0x27bc0 + 1;
            iVar3 = (*pcVar6)(&iStack_48,auStackX_20);
            if (iVar3 != 0) {
                do {
                    uVar5 = uVar5 + 8;
                    if (uVar5 <= *arg4) {
                        *in_stack_00000028 = iVar3;
                        in_stack_00000028 = in_stack_00000028 + 1;
                    }
                    iVar3 = (*pcVar6)(&iStack_48);
                } while (iVar3 != 0);
                if (uVar5 != 0) {
                    iVar3 = 0;
                    uVar1 = *arg4;
                    *arg4 = uVar5;
                    if (uVar1 < uVar5) {
                        iVar3 = -0x7ffffffffffffffb;
                    }
                    if ((iVar4 == 1) && (-1 < iVar3)) {
                        *(arg3 + 0x28) = **(arg3 + 0x28);
                    }
                    goto code_r0x0001983d;
                }
            }
code_r0x00019830:
            iVar3 = -0x7ffffffffffffff2;
            goto code_r0x0001983d;
        }
    }
    else if ((*arg4 == 0) || (in_stack_00000028 != NULL)) goto code_r0x00019725;
    iVar3 = -0x7ffffffffffffffe;
code_r0x0001983d:
    return iVar3;
}


/* fcn.00021454 @ 0x21454 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.00021454(int64_t arg1)

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
    iVar3 = fcn.00020f28(arg1,auStack_138);
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
code_r0x000214f7:
            *(arg1 + 0x7c) = 1;
            goto code_r0x00021501;
        }
    }
    else if ((iStack_11c == 0) && (iStack_120 == 0)) goto code_r0x000214f7;
    *(arg1 + 0x7c) = 0;
code_r0x00021501:
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
                if (iVar4 < 0) goto code_r0x0002163d;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00021645;
                if ((uStack_15c <= uVar7) && (uVar7 < iStack_160 + uStack_15c)) {
                    iVar3 = (uStack_154 - uStack_15c) + uVar7;
                    if (iVar3 == 0) {
                        return 0;
                    }
                    if (puVar10[1] == 0) {
                        return 0;
                    }
                    goto code_r0x000215c6;
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
                if (iVar4 < 0) goto code_r0x0002163d;
                bVar12 = iStackX_8 == 0x28;
                if (!bVar12) goto code_r0x00021645;
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
                    if (iVar4 < 0) goto code_r0x00021634;
                    bVar12 = iStackX_8 == 0x1c;
                    if (!bVar12) goto code_r0x00021645;
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
code_r0x0002163d:
    bVar12 = iStackX_8 == 0x28;
    goto code_r0x00021645;
code_r0x000215c6:
    iStackX_8 = 0x1c;
    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uVar6 + iVar3,&iStackX_8,auStack_188);
    if (iVar4 < 0) goto code_r0x00021634;
    bVar12 = iStackX_8 == 0x1c;
    if (!bVar12) goto code_r0x00021645;
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
    goto code_r0x000215c6;
code_r0x00021634:
    bVar12 = iStackX_8 == 0x1c;
code_r0x00021645:
    *(arg1 + 0x68) = 1;
    if (!bVar12) {
        return -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.0001685c @ 0x1685c */

int64_t fcn.0001685c(uint32_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uStackX_20;
    uint64_t *in_stack_00000028;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((arg3 == 0) || (in_stack_00000028 == NULL)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        if (uVar2 < 0x1001) {
            iVar1 = fcn.000160ec(0,arg2 & 0xffffffffU);
            if (iVar1 < 0) {
                return iVar1;
            }
        }
        else {
            iVar1 = fcn.000160ec(0,arg2 & 0xffffffffU);
            if (iVar1 < 0) {
                return iVar1;
            }
            uVar3 = uStackX_20 + (uVar2 - 1) & ~(uVar2 - 1);
            iVar1 = ((uVar3 - uStackX_20 & 0xfff) != 0) + (uVar3 - uStackX_20 >> 0xc);
            if (iVar1 != 0) {
                fcn.00016160(uStackX_20,iVar1);
            }
            iVar1 = ((uVar2 >> 0xc) + ((arg1 & 0xfff) != 0)) - iVar1;
            uStackX_20 = uVar3;
            if (iVar1 != 0) {
                fcn.00016160(arg3 * 0x1000 + uVar3,iVar1);
            }
        }
        *in_stack_00000028 = uStackX_20;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00021a60 @ 0x21a60 */

//WARNING: Variable defined which should be unmapped: var_3h

int64_t fcn.00021a60(uint32_t arg1)

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
        fcn.00010430(&iStack_d8,arg1,0x90);
    }
    iVar2 = fcn.00021454(&iStack_d8);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (piVar6[1] < uStack_d0) {
        *(piVar6 + 0xd) = 6;
        return -0x7ffffffffffffffb;
    }
    if (*piVar6 == 0) {
code_r0x00021ad6:
        *(piVar6 + 0xd) = 5;
        return -0x7ffffffffffffffe;
    }
    if (cStack_5c != '\0') {
        if (iStack_5e == 0xc) {
            *(piVar6 + 0xd) = 4;
            return -0x7fffffffffffffff;
        }
        if (iStack_d8 != *piVar6) goto code_r0x00021ad6;
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
            goto code_r0x00021dda;
            if ((uStackX_10 < *(iVar2 + 8)) && (iVar3 = *(iVar2 + 8) - uStackX_10, iVar3 != 0)) {
                fcn.00010470(uVar4 + uStackX_10,iVar3);
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
            goto code_r0x00021d0a;
        }
        piVar6[0xe] = 0;
    }
    else {
        uVar12 = *(iVar9 + 0x1c);
code_r0x00021d0a:
        piVar6[0xe] = (uVar12 >> 1) << 3;
    }
    piVar6[6] = 0;
    if (piVar6[8] != 0) {
        if (uVar13 + uVar14 <= *(piVar6 + 8)) {
            *(piVar6 + 0xd) = 5;
            goto code_r0x00021d46;
        }
        iVar3 = (*piVar6 - uVar14) + *(piVar6 + 8);
        if (iVar3 == 0) goto code_r0x00021d46;
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
            if (uVar12 == 0) goto code_r0x00021e4b;
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
code_r0x00021d46:
            *(piVar6 + 0xd) = 9;
            return -0x7fffffffffffffff;
        }
        if (*(iVar3 + 0x14) == 0) {
            uStackX_10 = *(iVar3 + 0x10);
            iStackX_18 = (*piVar6[4])(piVar6[5],*(iVar3 + 0x18) - uVar14,&uStackX_10);
            if (iStackX_18 < 0) {
                iStackX_18 = -0x7fffffffffffffff;
code_r0x00021dda:
                *(piVar6 + 0xd) = 1;
                return iStackX_18;
            }
            *(iVar3 + 0x14) = uVar12;
        }
        piVar5 = piVar6[9];
        if (*piVar5 == 0x3031424e) {
            if (*(iVar3 + 0x10) < 0x10) goto code_r0x00021e27;
            piVar5 = piVar5 + 4;
        }
        else if (*piVar5 == 0x434f544d) {
            if (*(iVar3 + 0x10) < 0x14) goto code_r0x00021e27;
            piVar5 = piVar5 + 5;
        }
        else {
            if (*piVar5 != 0x53445352) goto code_r0x00021e4b;
            if (*(iVar3 + 0x10) < 0x18) goto code_r0x00021e27;
            piVar5 = piVar5 + 6;
        }
        piVar6[10] = piVar5;
    }
code_r0x00021e4b:
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
code_r0x00021e27:
                        *(piVar6 + 0xd) = 0xb;
                        return -0x7ffffffffffffffd;
                    }
                    puVar8 = iVar2 + 0x10;
                    bVar16 = *puVar15 != 0;
                    uVar14 = uVar10;
                    while (bVar16) {
                        uVar1 = *puVar8;
                        if (0x7fffffff < uVar1) {
                            if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00021e27;
                            piVar7 = (uVar1 & 0x7fffffff) + iVar2;
                            if ((((*piVar7 == 3) && (piVar7[1] == 0x48)) && (piVar7[2] == 0x49)) && (piVar7[3] == 0x49))
                            {
                                uVar1 = puVar8[1];
                                if (0x7fffffff < uVar1) {
                                    if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00021e27;
                                    uVar13 = uVar1 & 0x7fffffff;
                                    puVar15 = iVar2 + 0xc + uVar13;
                                    if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + 2 + *(uVar13 + 0xe + iVar2)) * 8)
                                    goto code_r0x00021e27;
                                    puVar8 = iVar2 + 0x10 + uVar13;
                                    uVar1 = puVar8[1];
                                    if (0x7fffffff < uVar1) {
                                        if (uVar12 <= (uVar1 & 0x7fffffff)) goto code_r0x00021e27;
                                        uVar13 = uVar1 & 0x7fffffff;
                                        puVar15 = uVar13 + 0xc + iVar2;
                                        if (uVar12 < (uVar1 & 0x7fffffff) + (*puVar15 + *(uVar13 + 0xe + iVar2) + 2) * 8
                                           ) goto code_r0x00021e27;
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
                                    goto code_r0x00021e27;
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


/* fcn.000217a8 @ 0x217a8 */

ulong fcn.000217a8(uint32_t arg1)

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
code_r0x000218be:
                *(piVar5 + 0xd) = 9;
                return 0x8000000000000001;
            }
            if (puVar16 < puVar11) goto code_r0x000218be;
        }
        if (iVar15 != 0) {
            piVar13 = piVar5[6];
            puVar12 = puVar11;
            while (puVar12 < puVar16) {
                puVar17 = puVar12 + 2;
                if (((puVar12[1] == 0) || (~puVar12[1] < puVar12)) ||
                   (puVar1 = puVar12[1] + puVar12, puVar9[1] + puVar11 < puVar1)) goto code_r0x000218be;
                if (piVar5[1] + puVar18 <= *puVar12) {
                    *(piVar5 + 0xd) = 5;
                    goto code_r0x000218be;
                }
                if ((*piVar5 - puVar18) + *puVar12 == 0) goto code_r0x000218be;
                for (; puVar17 < puVar1; puVar17 = puVar17 + 2) {
                    uVar7 = (*puVar17 & 0xfff) + *puVar12;
                    if (puVar18 + piVar5[1] <= uVar7) {
                        *(piVar5 + 0xd) = 5;
code_r0x00021a14:
                        uVar4 = 0x8000000000000001;
code_r0x00021a1e:
                        *(piVar5 + 0xd) = 9;
                        return uVar4;
                    }
                    piVar8 = (*piVar5 - puVar18) + uVar7;
                    if (piVar8 == NULL) goto code_r0x00021a14;
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
                                        goto code_r0x00021a1e;
                                    }
                                    *piVar8 = *piVar8 + iVar15;
                                    if (piVar13 != NULL) {
                                        piVar13 = piVar13 + (-piVar13 & 7);
                                        *piVar13 = *piVar8;
                                        piVar13 = piVar13 + 1;
                                    }
                                }
                                goto code_r0x000219e9;
                            }
                            *piVar8 = *piVar8 + iVar15;
                        }
                        if (piVar13 != NULL) {
                            *piVar13 = *piVar8;
                            piVar13 = piVar13 + 2;
                        }
                    }
code_r0x000219e9:
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


/* fcn.0001c788 @ 0x1c788 */

void fcn.0001c788(int64_t arg1)

{
    ulong *puVar1;
    uint16_t uVar2;
    int16_t *piVar3;
    ulong uVar4;
    char cVar5;
    uint32_t uVar6;
    uint *arg1_00;
    uint *puVar7;
    ulong *puVar8;
    uint64_t uVar9;
    ulong *puVar10;
    int *piVar11;
    uint64_t uVar12;
    
    uVar12 = 0;
    if ((*0x27c10 == '\0') && (arg1_00 = fcn.0001f8f0(0x40), arg1_00 != NULL)) {
        *arg1_00 = 0x44525049;
        *(arg1_00 + 6) = *arg1;
        *(arg1_00 + 8) = *(arg1 + 8);
        piVar3 = *arg1;
        uVar6 = 0;
        if (*piVar3 == 0x5a4d) {
            uVar6 = *(piVar3 + 0x1e);
        }
        uVar9 = uVar6;
        if (*(piVar3 + uVar9) == 0x4550) {
            if ((*(piVar3 + uVar9 + 0x38) & 0xfff) == 0) {
                uVar2 = *(piVar3 + uVar9 + 0x14);
                puVar1 = arg1_00 + 0xc;
                *(arg1_00 + 10) = 0;
                *puVar1 = puVar1;
                *(arg1_00 + 0xe) = puVar1;
                if (*(piVar3 + uVar9 + 6) != 0) {
                    piVar11 = piVar3 + uVar2 + uVar9 + 0x28;
                    do {
                        if ((*(piVar11 + 5) & 0x20) != 0) {
                            puVar7 = fcn.0001f8f0(0x28);
                            if (puVar7 == NULL) {
                                return;
                            }
                            *puVar7 = 0x43525049;
                            *(puVar7 + 6) = piVar11[-1] + piVar3;
                            puVar8 = puVar7 + 2;
                            *(puVar7 + 8) = (-*piVar11 & 0xfffU) + *piVar11;
                            *puVar8 = puVar1;
                            puVar10 = *(arg1_00 + 0xe);
                            *(puVar7 + 4) = puVar10;
                            *puVar10 = puVar8;
                            *(arg1_00 + 0xe) = puVar8;
                            *(arg1_00 + 10) = *(arg1_00 + 10) + 1;
                        }
                        uVar12 = uVar12 + 1;
                        piVar11 = piVar11 + 10;
                    } while (uVar12 < *(piVar3 + uVar9 + 6));
                }
                if (*(arg1_00 + 10) != 0) {
                    for (puVar8 = *puVar1; puVar10 = *puVar8, puVar8 != puVar1; puVar8 = *puVar8) {
                        for (; puVar10 != puVar1; puVar10 = *puVar10) {
                            uVar12 = puVar8[2];
                            if (puVar10[2] < uVar12) {
                                uVar4 = puVar8[3];
                                puVar8[2] = puVar10[2];
                                puVar8[3] = puVar10[3];
                                puVar10[2] = uVar12;
                                puVar10[3] = uVar4;
                            }
                        }
                    }
                    cVar5 = fcn.0001c648(arg1_00);
                    if (cVar5 == '\0') {
                        return;
                    }
                    puVar1 = arg1_00 + 2;
                    *puVar1 = 0x26d58;
                    *(arg1_00 + 4) = *0x26d60;
                    **0x26d60 = puVar1;
                    *0x26d48 = *0x26d48 + 1;
                    if (*0x26d50 < *(arg1_00 + 10)) {
                        *0x26d50 = *(arg1_00 + 10);
                    }
                    *0x26d60 = puVar1;
                    fcn.0001c6c0();
                    return;
                }
            }
            if (*0x26d38 != '\0') {
                *0x26d38 = '\0';
            }
        }
    }
    return;
}


/* fcn.000144b8 @ 0x144b8 */

int64_t fcn.000144b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    
    if ((arg2 == 0) || (arg3 == 0)) {
        return -0x7ffffffffffffffe;
    }
    *arg3 = 0;
    iVar5 = 0;
    fcn.0001d66c(0x26628);
    iVar2 = fcn.0001369c(arg1);
    if (-1 < iVar2) {
        piVar1 = arg1 + 0x18;
        piVar3 = *piVar1;
        if (piVar3 != piVar1) {
            do {
                piVar3 = *piVar3;
                iVar5 = iVar5 + 1;
            } while (piVar3 != piVar1);
            if (iVar5 != 0) {
                piVar3 = fcn.0001f8f0(iVar5 * 8);
                if (piVar3 == NULL) {
                    iVar2 = -0x7ffffffffffffff7;
                }
                else {
                    *arg2 = piVar3;
                    *arg3 = iVar5;
                    for (piVar4 = *piVar1; piVar4 != piVar1; piVar4 = *piVar4) {
                        *piVar3 = piVar4[5] + 0x18;
                        piVar3 = piVar3 + 1;
                    }
                    iVar2 = 0;
                }
                goto code_r0x00014581;
            }
        }
        iVar2 = -0x7ffffffffffffffe;
    }
code_r0x00014581:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return iVar2;
}


/* fcn.000143ac @ 0x143ac */

int64_t fcn.000143ac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    uint *puVar5;
    int64_t iVar6;
    
    iVar6 = 0;
    *arg3 = 0;
    *arg4 = 0;
    fcn.0001d66c(0x26628);
    iVar2 = fcn.00013ed8(arg1,arg2);
    iVar4 = -0x7ffffffffffffff2;
    if (iVar2 != 0) {
        puVar1 = iVar2 + 0x40;
        iVar4 = iVar6;
        for (puVar3 = *puVar1; puVar3 != puVar1; puVar3 = *puVar3) {
            iVar4 = iVar4 + 1;
        }
        iVar2 = 0x18;
        if (iVar4 != 0) {
            iVar2 = iVar4 * 0x18;
        }
        iVar4 = fcn.0001f8f0(iVar2);
        if (iVar4 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            puVar3 = *puVar1;
            iVar2 = iVar6;
            if (puVar3 != puVar1) {
                puVar5 = iVar4 + 0x10;
                do {
                    iVar2 = iVar2 + 1;
                    *(puVar5 + -4) = puVar3[2];
                    *(puVar5 + -2) = puVar3[3];
                    *puVar5 = *(puVar3 + 4);
                    puVar5[1] = *(puVar3 + 0x24);
                    puVar3 = *puVar3;
                    puVar5 = puVar5 + 6;
                } while (puVar3 != puVar1);
            }
            *arg3 = iVar4;
            *arg4 = iVar2;
            iVar4 = iVar6;
        }
    }
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return iVar4;
}


/* fcn.0001429c @ 0x1429c */

int64_t fcn.0001429c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    
    fcn.0001d66c(0x26628);
    iVar2 = fcn.0001369c(arg1);
    if (-1 < iVar2) {
        iVar2 = fcn.0001369c(arg3);
        if (-1 < iVar2) {
            if (arg4 != 0) {
                iVar2 = fcn.0001369c(arg4);
                if (iVar2 < 0) goto code_r0x0001437a;
            }
            if (arg2 == 0) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                iVar2 = -0x7ffffffffffffff2;
                iVar3 = fcn.00013ed8(arg1,arg2);
                if (iVar3 != 0) {
                    piVar1 = *(iVar3 + 0x40);
                    while (piVar4 = piVar1, piVar4 != iVar3 + 0x40) {
                        piVar1 = *piVar4;
                        if ((piVar4[2] == arg3) && (piVar4[3] == arg4)) {
                            *(*piVar4 + 8) = piVar4[1];
                            *piVar4[1] = *piVar4;
                            *(iVar3 + 0x50) = *(iVar3 + 0x50) + -1;
                            fcn.0001ab70();
                            iVar2 = 0;
                        }
                    }
                }
            }
        }
    }
code_r0x0001437a:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return iVar2;
}


/* fcn.0001c97c @ 0x1c97c */

void fcn.0001c97c(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (*0x27c10 == '\0') {
        if (*0x26d58 != 0x26d58) {
            piVar1 = *0x26d58;
            do {
                piVar2 = piVar1 + -1;
                if ((*CONCAT44(in_register_0000000c,arg1) == piVar1[2]) &&
                   (CONCAT44(in_register_0000000c,arg1)[1] == piVar1[3])) goto code_r0x0001c9c7;
                piVar1 = *piVar1;
            } while (piVar1 != 0x26d58);
        }
        piVar2 = NULL;
code_r0x0001c9c7:
        if (piVar2 != NULL) {
            while (piVar1 = piVar2[6], piVar1 != piVar2 + 6) {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                fcn.0001ab70();
            }
            *(piVar2[1] + 8) = piVar2[2];
            *piVar2[2] = piVar2[1];
            fcn.0001ab70(piVar2);
            *0x26d48 = *0x26d48 + -1;
        }
    }
    return;
}


/* fcn.00016e00 @ 0x16e00 */

int64_t fcn.00016e00(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t aiStackX_10 [3];
    
    iVar2 = 0;
    iVar1 = fcn.00013f48(arg1,0x25b20,aiStackX_10,*0x27b20);
    if (-1 < iVar1) {
        iVar2 = aiStackX_10[0] + -0x28;
    }
    return iVar2;
}


/* fcn.0001fd30 @ 0x1fd30 */

int64_t fcn.0001fd30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    char *pcVar2;
    int64_t iVar3;
    char *pcVar4;
    char *pcVar5;
    uchar auStackX_18 [8];
    char *pcStack_88;
    int64_t iStack_80;
    int64_t iStack_78;
    int64_t iStack_70;
    ulong uStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    ulong *puStack_50;
    ulong *puStack_48;
    uchar auStack_40 [8];
    int64_t aiStack_38 [2];
    
    pcVar5 = NULL;
    if ((arg3 == 0) || (arg4 == 0)) {
        return 0;
    }
    iStack_70 = 0;
    iStack_78 = 0;
    iStack_80 = 0;
    *arg4 = 0;
    pcVar2 = fcn.0001f6d0(arg2);
    if (pcVar2 == NULL) {
        return 0;
    }
    pcStack_88 = pcVar2;
    iVar3 = (**(*0x27c48 + 0xb8))(0x25b30,&pcStack_88,&uStack_68);
    if (-1 < iVar3) {
        if ((*pcStack_88 != '\x04') || (pcVar4 = pcStack_88 + 4, pcStack_88[1] != '\x06')) {
            pcVar4 = pcVar5;
        }
        if ((pcVar4 == NULL) || (iVar3 = (**(*0x27c48 + 0x98))(uStack_68,0x25b30,&iStack_58), iVar3 < 0))
        goto code_r0x0001fe82;
        iStack_78 = 0;
        iVar3 = (**(iStack_58 + 0x18))(iStack_58,pcVar4,0x10,0,&iStack_78,&iStack_80,arg4);
        if (iVar3 < 0) {
            if (iStack_78 != 0) {
                fcn.0001ab70();
                *arg4 = 0;
            }
            iStack_78 = 0;
            iVar3 = (**(iStack_58 + 0x10))(iStack_58,pcVar4,&iStack_78,&iStack_80,auStackX_18,auStack_40,arg4);
            if (iVar3 < 0) goto code_r0x0001fe82;
        }
code_r0x000201c4:
        *arg3 = iStack_80;
        goto code_r0x000201e2;
    }
code_r0x0001fe82:
    pcStack_88 = pcVar2;
    iVar3 = (**(*0x27c48 + 0xb8))(0x25bd0,&pcStack_88,&uStack_68);
    if (((-1 < iVar3) && (iVar3 = (**(*0x27c48 + 0x98))(uStack_68,0x25bd0,aiStack_38), -1 < iVar3)) &&
       (iVar3 = (**(aiStack_38[0] + 8))(aiStack_38[0],&iStack_70), -1 < iVar3)) {
        pcVar4 = fcn.0001f6d0(pcStack_88);
        if (pcVar4 == NULL) {
            (**(iStack_70 + 0x10))(iStack_70);
            iVar3 = -0x7ffffffffffffff7;
        }
        pcStack_88 = pcVar4;
        while (iVar1 = iStack_70, -1 < iVar3) {
            if ((*pcStack_88 == '\x7f') && (pcStack_88[1] == -1)) {
code_r0x0001ff83:
                if (iVar3 < 0) break;
                iStack_60 = 0;
                iVar3 = (**(iStack_70 + 0x40))(iStack_70,0x25af0,&iStack_60,0);
                if (iVar3 == -0x7ffffffffffffffb) {
                    pcVar5 = fcn.0001f8f0(iStack_60);
                    if (pcVar5 == NULL) {
                        iVar3 = -0x7ffffffffffffff7;
                        break;
                    }
                    iVar3 = (**(iStack_70 + 0x40))(iStack_70,0x25af0,&iStack_60,pcVar5);
                }
                if (-1 < iVar3) {
                    if (pcVar5 == NULL) break;
                    if ((pcVar5[0x48] & 0x10U) == 0) {
                        iStack_78 = fcn.0001f8f0(*(pcVar5 + 8));
                        if (iStack_78 == 0) {
                            iVar3 = -0x7ffffffffffffff7;
                        }
                        else {
                            iStack_80 = *(pcVar5 + 8);
                            iVar3 = (**(iStack_70 + 0x20))(iStack_70,&iStack_80,iStack_78);
                        }
                    }
                }
                if (pcVar5 != NULL) {
                    fcn.0001ab70(pcVar5);
                }
                break;
            }
            if ((*pcStack_88 != '\x04') || (pcStack_88[1] != '\x04')) {
                iVar3 = -0x7ffffffffffffffd;
                goto code_r0x0001ff83;
            }
            iStack_70 = 0;
            iVar3 = (**(iVar1 + 8))(iVar1,&iStack_70,pcStack_88 + 4,1,0);
            (**(iVar1 + 0x10))(iVar1);
            pcStack_88 = pcStack_88 + *(pcStack_88 + 2);
        }
        if (iStack_70 != 0) {
            (**(iStack_70 + 0x10))(iStack_70);
        }
        if (pcVar4 != NULL) {
            fcn.0001ab70(pcVar4);
        }
        if (-1 < iVar3) goto code_r0x000201c4;
    }
    if (((arg1 == '\0') &&
        (pcStack_88 = pcVar2, iVar3 = (**(*0x27c48 + 0xb8))(0x25d40,&pcStack_88,&uStack_68), -1 < iVar3)) &&
       (iVar3 = (**(*0x27c48 + 0x98))(uStack_68,0x25d40,&puStack_50), -1 < iVar3)) {
        iStack_80 = 0;
        iStack_78 = 0;
        iVar3 = (**puStack_50)(puStack_50,pcStack_88,0,&iStack_80,0);
        if (iVar3 == -0x7ffffffffffffffb) {
            iStack_78 = fcn.0001f8f0(iStack_80);
            if (iStack_78 == 0) goto code_r0x00020124;
            iVar3 = (**puStack_50)(puStack_50,pcStack_88,0,&iStack_80,iStack_78);
        }
        if (-1 < iVar3) goto code_r0x000201c4;
    }
code_r0x00020124:
    pcStack_88 = pcVar2;
    iVar3 = (**(*0x27c48 + 0xb8))(0x25ac0,&pcStack_88,&uStack_68);
    if ((iVar3 < 0) || (iVar3 = (**(*0x27c48 + 0x98))(uStack_68,0x25ac0,&puStack_48), iVar3 < 0)) {
code_r0x000201cd:
        if (iStack_78 != 0) {
            fcn.0001ab70();
            iStack_78 = 0;
        }
    }
    else {
        iStack_80 = 0;
        iStack_78 = 0;
        iVar3 = (**puStack_48)(puStack_48,pcStack_88,arg1 & 0xff,&iStack_80,0);
        if (iVar3 != -0x7ffffffffffffffb) {
code_r0x000201bf:
            if (-1 < iVar3) goto code_r0x000201c4;
            goto code_r0x000201cd;
        }
        iStack_78 = fcn.0001f8f0(iStack_80);
        if (iStack_78 != 0) {
            iVar3 = (**puStack_48)(puStack_48,pcStack_88,arg1 & 0xff,&iStack_80,iStack_78);
            goto code_r0x000201bf;
        }
    }
    *arg3 = 0;
code_r0x000201e2:
    fcn.0001ab70(pcVar2);
    return iStack_78;
}


/* fcn.0001f7dc @ 0x1f7dc */

ulong fcn.0001f7dc(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x27c48 + 0x98))(param_1,0x25b00,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0001f6fc @ 0x1f6fc */

int64_t fcn.0001f6fc(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    int64_t arg1_00;
    ulong in_R8;
    int64_t in_R9;
    
    if (arg1 == 0) {
        arg1 = 0x273b0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.0001f604(arg1,0,in_R8,in_R9);
        if (cVar1 != '\0') {
            cVar1 = fcn.0001f604(arg2,0,in_R8,in_R9);
            if (cVar1 != '\0') {
                iVar2 = fcn.0001f678(arg1);
                arg3 = fcn.0001f678(arg2);
                arg1_00 = fcn.0001f8f0(arg3 + -4 + iVar2);
                if (arg1_00 == 0) {
                    return 0;
                }
                if ((iVar2 != 0) && (arg1_00 != arg1)) {
                    arg1_00 = fcn.00010430(arg1_00,arg1,iVar2);
                }
                iVar2 = iVar2 + -4 + arg1_00;
                if (arg3 == 0) {
                    return arg1_00;
                }
                if (iVar2 == arg2) {
                    return arg1_00;
                }
                fcn.00010430(iVar2,arg2,arg3);
                return arg1_00;
            }
        }
        return 0;
    }
    iVar2 = fcn.0001f6d0(arg1);
    return iVar2;
}


/* fcn.00016a90 @ 0x16a90 */

//WARNING: Removing unreachable block (ram,0x00016d90)

int64_t fcn.00016a90(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t *arg1_00;
    int16_t iVar1;
    uint16_t uVar2;
    char cVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    ulong *puVar5;
    
    arg1_00 = arg2 + 0xf0;
    arg2_00 = 0x90;
    fcn.00010470(arg1_00,0x90);
    *(arg2 + 0x118) = arg1;
    *(arg2 + 0x110) = 0x16a24;
    if (arg1_00 == NULL) {
        return -0x7ffffffffffffffe;
    }
    iVar4 = fcn.00021454(arg1_00);
    if (iVar4 < 0) {
        return iVar4;
    }
    for (puVar5 = *0x27e38; iVar1 = *(arg2 + 0x168), puVar5 != 0x27e38; puVar5 = *puVar5) {
        if (*(puVar5 + 3) == iVar1) {
            arg2_00 = *(arg2 + 0x16a);
            cVar3 = (**puVar5[2])(puVar5[2],arg2_00,*(arg2 + 0x48));
            if (cVar3 != '\0') {
                *(arg2 + 0xd8) = puVar5[2];
                goto code_r0x00016b4a;
            }
        }
    }
    if ((iVar1 != 0x14c) && (iVar1 != -0x799c)) {
        return -0x7ffffffffffffffd;
    }
code_r0x00016b4a:
    uVar2 = *(arg2 + 0x16a);
    if (uVar2 == 10) {
        *(arg2 + 0x150) = 1;
        *(arg2 + 0x154) = 2;
    }
    else if (uVar2 == 0xb) {
        *(arg2 + 0x150) = 3;
        *(arg2 + 0x154) = 4;
    }
    else {
        if (1 < uVar2 - 0xc) {
            *(arg2 + 0x158) = 4;
            return -0x7ffffffffffffffd;
        }
        *(arg2 + 0x150) = 5;
        *(arg2 + 0x154) = 6;
    }
    *(arg2 + 0x90) = ((*(arg2 + 0xf8) & 0xfff) != 0) + (*(arg2 + 0xf8) >> 0xc);
    if ((*arg1_00 < 0x100000) && (*(arg2 + 0x16c) == '\0')) {
code_r0x00016c37:
        iVar4 = fcn.0001685c(*(arg2 + 0x128),arg2_00,*(arg2 + 0x150),*(arg2 + 0x90));
    }
    else {
        arg2_00 = *(arg2 + 0x150);
        iVar4 = fcn.000160ec(2,arg2_00);
        if (-1 < iVar4) goto code_r0x00016c5e;
        if (*(arg2 + 0x16c) == '\0') goto code_r0x00016c37;
    }
    if (iVar4 < 0) {
        return iVar4;
    }
code_r0x00016c5e:
    *(arg2 + 0x88) = *arg1_00;
    iVar4 = fcn.00021a60(arg1_00);
    if (-1 < iVar4) {
        if (*(arg2 + 0x16a) == 0xc) {
            fcn.0001a7c4(6);
            *(arg2 + 0x120) = 0;
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            iVar4 = fcn.000217a8(arg1_00);
            if (-1 < iVar4) {
                *(arg2 + 0xd0) = *(arg2 + 0x168);
                *(arg2 + 0x20) = *(arg2 + 0x108);
                *(arg2 + 0x68) = *arg1_00;
                *(arg2 + 0x70) = *(arg2 + 0xf8);
                *(arg2 + 0x78) = *(arg2 + 0x150);
                *(arg2 + 0x7c) = *(arg2 + 0x154);
                *(arg2 + 0x10) = *(arg2 + 0x16a);
                if (*(arg2 + 0x16a) != 0xc) {
                    return 0;
                }
                fcn.0001a7c4(6);
                *(arg2 + 0xe0) = 0;
            }
        }
    }
    fcn.00016160(*arg1_00,*(arg2 + 0x90));
    *arg1_00 = 0;
    *(arg2 + 0x88) = 0;
    if (*(arg2 + 0x120) != 0) {
        fcn.0001ab70();
    }
    return iVar4;
}


/* fcn.00018044 @ 0x18044 */

int64_t fcn.00018044(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    unkbyte7 Var6;
    
    Var6 = arg4 >> 8;
    if (arg2 == 0) {
        return -0x7ffffffffffffffe;
    }
    fcn.0001d66c(0x26628);
    iVar4 = fcn.0001369c(arg1);
    if (iVar4 < 0) goto code_r0x0001816e;
    iVar4 = fcn.0001378c(arg1,arg2,arg3);
    if (iVar4 != 0) {
        iVar4 = fcn.00013bf4(arg1,iVar4);
        if (iVar4 < 0) goto code_r0x0001816e;
        iVar4 = fcn.00017ef4(arg1,arg2,arg3);
        if (iVar4 != 0) {
            iVar2 = *(iVar4 + 0x30);
            piVar1 = iVar4 + 0x20;
            *(iVar4 + 0x38) = arg4;
            *piVar1 = iVar2 + 0x28;
            piVar3 = *(iVar2 + 0x30);
            *(iVar4 + 0x28) = piVar3;
            *piVar3 = piVar1;
            *(iVar2 + 0x30) = piVar1;
            *0x27b68 = *0x27b68 + 1;
            *(arg1 + 0x30) = *0x27b68;
            *0x26638 = 1;
            fcn.0001bc20(*0x26630);
            fcn.000146b4(arg1,0,0,CONCAT71(Var6,1));
            fcn.0001d66c(0x26628);
            for (puVar5 = *(iVar2 + 0x38); puVar5 != iVar2 + 0x38; puVar5 = *puVar5) {
                fcn.000184e8(puVar5[2]);
            }
            iVar4 = 0;
            goto code_r0x0001816e;
        }
    }
    iVar4 = -0x7ffffffffffffff2;
code_r0x0001816e:
    *0x26638 = 1;
    fcn.0001bc20(*0x26630);
    return iVar4;
}


/* fcn.00016e44 @ 0x16e44 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Removing unreachable block (ram,0x0001701b)

int64_t fcn.00016e44(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint in_register_0000000c;
    char cVar7;
    int *arg2_00;
    uint64_t uVar8;
    int64_t *piStackX_8;
    int aiStackX_10 [2];
    int64_t *piStackX_18;
    int64_t *piStackX_20;
    uint32_t var_40h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t *piStack_68;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    cVar7 = arg2;
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,cVar7);
    piStack_68 = NULL;
    piStackX_8 = NULL;
    if (*0x27e58 != 0x27e58) {
        piVar2 = *0x27e58;
code_r0x00016e81:
        if (piVar2[2] != *(iVar6 + 0x68)) goto code_r0x00016e8b;
        fcn.00017b44(piVar2[2],piVar2[3],0);
        while (piVar1 = piVar2[5], piVar1 != piVar2 + 5) {
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            fcn.0001ab70();
        }
        if (*piVar2 != 0) {
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
        }
        fcn.0001ab70();
    }
code_r0x00016ef8:
    if (*(iVar6 + 0xd8) != 0) {
        (**(*(iVar6 + 0xd8) + 0x10))();
    }
    if (*(iVar6 + 8) != 0) {
        iVar3 = fcn.00019c50(0,0,0,&iStack_58);
        if (-1 < iVar3) {
            if (iStack_58 != 0) {
                iVar3 = iStack_58;
                do {
                    iVar4 = fcn.000144b8(*piStack_68,&piStackX_8,&iStack_50);
                    if (-1 < iVar4) {
                        if (iStack_50 != 0) {
                            piVar2 = piStackX_8;
                            iVar4 = iStack_50;
                            do {
                                piStackX_20 = piVar2;
                                iVar5 = fcn.000143ac(*piStack_68,*piVar2,&piStackX_18,aiStack_48);
                                piVar1 = piStackX_20;
                                if (-1 < iVar5) {
                                    if (aiStack_48[0] != 0) {
                                        piVar2 = piStackX_18;
                                        iVar5 = aiStack_48[0];
                                        do {
                                            if (*piVar2 == *(iVar6 + 8)) {
                                                fcn.0001429c(*piStack_68,*piVar1,*(iVar6 + 8),piVar2[1]);
                                            }
                                            piVar2 = piVar2 + 3;
                                            iVar5 = iVar5 + -1;
                                        } while (iVar5 != 0);
                                        piVar2 = piVar1;
                                    }
                                    if (piStackX_18 != NULL) {
                                        fcn.0001ab70(piStackX_18);
                                    }
                                }
                                piVar2 = piVar2 + 1;
                                iVar4 = iVar4 + -1;
                                piStackX_20 = piVar2;
                            } while (iVar4 != 0);
                        }
                        if (piStackX_8 != NULL) {
                            fcn.0001ab70(piStackX_8);
                        }
                    }
                    piStack_68 = piStack_68 + 1;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
            }
            cVar7 = aiStackX_10[0];
        }
        iVar3 = *0x27bd0;
        uVar8 = 0;
        *0x27bc8 = *0x27bc8 | 1;
        if (*0x27be0 != 0) {
            do {
                iVar4 = *(*0x27bd0 + uVar8 * 8);
                if ((iVar4 != 0) && (*(iVar4 + 0x10) == *(iVar6 + 8))) {
                    fcn.0001ab70();
                    *(iVar3 + uVar8 * 8) = 0;
                    *0x27bcc = *0x27bcc + -1;
                    *0x27bc8 = *0x27bc8 | 2;
                    break;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < *0x27be0);
        }
        *0x27bc8 = *0x27bc8 & 0xfffffffe;
        fcn.00013d0c(*(iVar6 + 8),0x25a60,*(iVar6 + 0xe8));
        fcn.00013d0c(*(iVar6 + 8),0x25b20,iVar6 + 0x28);
        if (*(iVar6 + 0x170) != 0) {
            fcn.00013d0c(*(iVar6 + 8),0x25aa0,*(iVar6 + 0x170));
        }
    }
    iVar3 = *(iVar6 + 0xe0);
    if (iVar3 != 0) {
        if (*(iVar3 + 0x20) != 0) {
            *(*(iVar3 + 0x20) + 8) = *(iVar3 + 0x28);
            **(iVar3 + 0x28) = *(iVar3 + 0x20);
            fcn.0001c97c(*(iVar6 + 0xe0));
        }
        fcn.0001ab70(*(iVar6 + 0xe0));
    }
    if ((*(iVar6 + 0x88) != 0) && (cVar7 != '\0')) {
        fcn.00016160(*(iVar6 + 0x88),*(iVar6 + 0x90));
    }
    if (*(iVar6 + 0x48) != 0) {
        fcn.0001ab70();
    }
    if (*(iVar6 + 0xe8) != 0) {
        fcn.0001ab70();
    }
    if (*(iVar6 + 0x98) != 0) {
        fcn.0001ab70();
    }
    arg2_00 = aiStackX_10;
    var_28h = 0x1ab80;
    iVar6 = fcn.0001ab10(iVar6,arg2_00);
    if (((-1 < iVar6) && (*0x27c00 != '\0')) && (aiStackX_10[0] - 5U < 2)) {
        var_28h = 0x1aba2;
        fcn.0001bd4c(aiStackX_10[0] - 5U,arg2_00);
    }
    return iVar6;
code_r0x00016e8b:
    piVar2 = *piVar2;
    if (piVar2 == 0x27e58) goto code_r0x00016ef8;
    goto code_r0x00016e81;
}


/* fcn.0001716c @ 0x1716c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t * fcn.0001716c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h,int64_t arg_58h,
                      int64_t arg_60h,uint32_t arg_68h,uint32_t arg_70h,int32_t arg_78h)

{
    ulong *arg4_00;
    bool bVar1;
    bool bVar2;
    int64_t iVar3;
    ulong *arg2_00;
    ulong uVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t *piVar8;
    ulong *arg3_00;
    int64_t *piVar9;
    int64_t in_stack_00000028;
    int64_t var_38h;
    int64_t *piStack0000000000000038;
    int64_t *in_stack_00000040;
    int64_t iStack_48;
    char cStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t var_20h;
    uint32_t var_18h;
    int64_t var_10h;
    int64_t var_8h;
    
    piVar7 = NULL;
    if ((in_stack_00000040 == NULL) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    iVar3 = fcn.00016e00(arg2);
    if (iVar3 == 0) {
        return 0x8000000000000002;
    }
    fcn.00010470(&iStack_48,0x20);
    iStack_48 = 0x66676d69;
    bVar1 = false;
    bVar2 = false;
    piStack0000000000000038 = NULL;
    arg_58h._0_4_ = 0;
    var_38h = arg3;
    arg_50h = arg3;
    if (arg4 == 0) {
        if (arg3 == 0) {
            return 0x8000000000000002;
        }
        uVar4 = 0x25b30;
        piVar8 = fcn.0001998c(0x25b30,&var_38h,&stack0x00000038);
        piVar5 = piVar7;
        if (piVar8 < 0) {
            uVar4 = 0x25bd0;
            var_38h = arg3;
            piVar8 = fcn.0001998c(0x25bd0,&var_38h,&stack0x00000038);
            if (piVar8 < 0) {
                if (arg1 == '\0') {
                    uVar4 = 0x25d40;
                    var_38h = arg3;
                    piVar8 = fcn.0001998c(0x25d40,&var_38h,&stack0x00000038);
                }
                piVar5 = NULL;
                if (piVar8 < 0) {
                    uVar4 = 0x25ac0;
                    var_38h = arg3;
                    piVar8 = fcn.0001998c(0x25ac0,&var_38h,&stack0x00000038);
                    if (-1 < piVar8) {
                        bVar1 = true;
                        piVar5 = var_38h;
                    }
                }
            }
        }
        else {
            bVar2 = true;
        }
        piVar6 = arg3;
        iStack_38 = fcn.0001fd30(CONCAT71(uVar4 >> 8,arg1),arg3,&iStack_30,&arg_58h);
        piVar9 = piStack0000000000000038;
        if (iStack_38 != 0) {
            cStack_40 = '\x01';
            if (bVar1) {
                iVar3 = fcn.0001f7dc(piStack0000000000000038);
                arg3 = fcn.0001f6fc(iVar3,piVar5);
                piVar6 = piVar5;
            }
            goto code_r0x00017317;
        }
        piVar8 = 0x800000000000000e;
        piVar7 = NULL;
    }
    else {
        piVar6 = &var_38h;
        iStack_30 = in_stack_00000028;
        iStack_38 = arg4;
        iVar3 = fcn.0001998c(0x25b00,piVar6,&stack0x00000038);
        piVar9 = piStack0000000000000038;
        if (iVar3 < 0) {
            piVar9 = piVar7;
        }
        piVar8 = piVar7;
        bVar2 = bVar1;
        if (in_stack_00000028 == 0) {
            piVar8 = 0x8000000000000001;
        }
code_r0x00017317:
        if (-1 < piVar8) {
            if (*0x27b40 == NULL) {
                if ((*0x27b48 != NULL) && (piVar7 = NULL, arg3 != NULL)) {
code_r0x0001736b:
                    piVar6 = arg_58h;
                    piVar8 = (***0x27b48)(*0x27b48,piVar6);
                    goto code_r0x00017379;
                }
            }
            else {
                piVar6 = arg3;
                piVar8 = (***0x27b40)(*0x27b40,arg3,iStack_38,iStack_30,arg1 & 0xff);
                if (-1 < piVar8) {
                    if (bVar2) goto code_r0x0001736b;
code_r0x00017379:
                    piVar7 = piVar8;
                    if (-1 < piVar8) goto code_r0x000173ac;
                }
                piVar7 = piVar8;
                if (piVar8 != 0x800000000000001a) {
                    if (piVar8 == 0x800000000000000f) {
                        *in_stack_00000040 = 0;
                    }
                    goto code_r0x0001731c;
                }
            }
code_r0x000173ac:
            piVar6 = 0x188;
            arg2_00 = fcn.0001f924(4,0x188);
            if (arg2_00 == NULL) {
                piVar8 = 0x8000000000000009;
            }
            else {
                piVar6 = arg3;
                if ((piVar9 != NULL) && (iVar3 = fcn.00013f48(piVar9,0x25b00,&var_38h,*0x27b20), -1 < iVar3)) {
                    iVar3 = fcn.0001f678(var_38h);
                    piVar6 = iVar3 + -4 + arg3;
                }
                arg4_00 = arg2_00 + 5;
                arg2_00[7] = *0x27b08;
                *arg4_00 = 0x1000;
                *arg2_00 = 0x6972646c;
                arg2_00[8] = piVar9;
                uVar4 = fcn.0001f6d0(piVar6);
                arg2_00[0x12] = 0;
                piVar9 = arg2_00 + 1;
                arg2_00[9] = uVar4;
                piVar6 = 0x25b20;
                arg2_00[6] = arg2;
                piVar5 = piVar9;
                arg3_00 = arg4_00;
                piVar8 = fcn.000138a4(piVar9,0x25b20,0,arg4_00);
                if (-1 < piVar8) {
                    piVar6 = &iStack_48;
                    piVar8 = fcn.00016a90(piVar5,piVar6,arg2_00,arg3_00);
                    if (-1 < piVar8) {
                        fcn.00019d78(piVar5,arg4_00,*piVar9);
                        piVar6 = 0x25b20;
                        piVar8 = fcn.00018044(*piVar9,0x25b20,arg4_00,arg4_00);
                        if (-1 < piVar8) {
                            if (arg3 != NULL) {
                                uVar4 = fcn.0001f6d0(arg3);
                                arg2_00[0x1d] = uVar4;
                            }
                            piVar6 = 0x25a60;
                            piVar8 = fcn.000138a4(piVar9,0x25a60,0,arg2_00[0x1d]);
                            if (-1 < piVar8) {
                                if (arg2_00[0x2e] != 0) {
                                    piVar6 = 0x25aa0;
                                    piVar8 = fcn.000138a4(piVar9,0x25aa0,0,arg2_00[0x2e]);
                                    if (piVar8 < 0) goto code_r0x0001753d;
                                }
                                piVar6 = arg2_00[0x1d];
                                fcn.00017ba0(arg4_00);
                                *in_stack_00000040 = *piVar9;
                            }
                        }
                    }
                }
            }
            goto code_r0x0001753d;
        }
    }
code_r0x0001731c:
    arg2_00 = NULL;
code_r0x0001753d:
    if (cStack_40 != '\0') {
        fcn.0001ab70(iStack_38);
    }
    if (arg3 != arg_50h) {
        fcn.0001ab70(arg3);
    }
    if (piVar8 < 0) {
        if (arg2_00 != NULL) {
            fcn.00016e44(arg2_00,CONCAT71(piVar6 >> 8,1));
        }
    }
    else {
        if (piVar7 < 0) {
            piVar8 = piVar7;
        }
        if (arg2_00 != NULL) {
            arg2_00[0x30] = piVar8;
        }
    }
    return piVar8;
}


/* fcn.000102b0 @ 0x102b0 */

ulong fcn.000102b0(int64_t arg1)

{
    ulong unaff_RBX;
    ulong unaff_RBP;
    ulong unaff_RSI;
    ulong unaff_RDI;
    ulong unaff_R12;
    ulong unaff_R13;
    ulong unaff_R14;
    ulong unaff_R15;
    uint32_t in_CR4;
    int64_t in_SSP;
    ulong unaff_XMM6_Qa;
    ulong unaff_XMM6_Qb;
    ulong unaff_XMM7_Qa;
    ulong unaff_XMM7_Qb;
    ulong unaff_XMM8_Qa;
    ulong unaff_XMM8_Qb;
    ulong unaff_XMM9_Qa;
    ulong unaff_XMM9_Qb;
    ulong unaff_XMM10_Qa;
    ulong unaff_XMM10_Qb;
    ulong unaff_XMM11_Qa;
    ulong unaff_XMM11_Qb;
    ulong unaff_XMM12_Qa;
    ulong unaff_XMM12_Qb;
    ulong unaff_XMM13_Qa;
    ulong unaff_XMM13_Qb;
    ulong unaff_XMM14_Qa;
    ulong unaff_XMM14_Qb;
    ulong unaff_XMM15_Qa;
    ulong unaff_XMM15_Qb;
    ulong unaff_retaddr;
    uchar auStackX_8 [32];
    
    fcn.0001fbb4();
    *(arg1 + 0xf8) = 0;
    if ((*0x26f20 != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
        *(arg1 + 0xf8) = in_SSP + 8;
    }
    *arg1 = unaff_RBX;
    *(arg1 + 8) = auStackX_8;
    *(arg1 + 0x10) = unaff_RBP;
    *(arg1 + 0x18) = unaff_RDI;
    *(arg1 + 0x20) = unaff_RSI;
    *(arg1 + 0x28) = unaff_R12;
    *(arg1 + 0x30) = unaff_R13;
    *(arg1 + 0x38) = unaff_R14;
    *(arg1 + 0x40) = unaff_R15;
    *(arg1 + 0x48) = unaff_retaddr;
    *(arg1 + 0x50) = *0x1094;
    *(arg1 + 0x58) = unaff_XMM6_Qa;
    *(arg1 + 0x60) = unaff_XMM6_Qb;
    *(arg1 + 0x68) = unaff_XMM7_Qa;
    *(arg1 + 0x70) = unaff_XMM7_Qb;
    *(arg1 + 0x78) = unaff_XMM8_Qa;
    *(arg1 + 0x80) = unaff_XMM8_Qb;
    *(arg1 + 0x88) = unaff_XMM9_Qa;
    *(arg1 + 0x90) = unaff_XMM9_Qb;
    *(arg1 + 0x98) = unaff_XMM10_Qa;
    *(arg1 + 0xa0) = unaff_XMM10_Qb;
    *(arg1 + 0xa8) = unaff_XMM11_Qa;
    *(arg1 + 0xb0) = unaff_XMM11_Qb;
    *(arg1 + 0xb8) = unaff_XMM12_Qa;
    *(arg1 + 0xc0) = unaff_XMM12_Qb;
    *(arg1 + 200) = unaff_XMM13_Qa;
    *(arg1 + 0xd0) = unaff_XMM13_Qb;
    *(arg1 + 0xd8) = unaff_XMM14_Qa;
    *(arg1 + 0xe0) = unaff_XMM14_Qb;
    *(arg1 + 0xe8) = unaff_XMM15_Qa;
    *(arg1 + 0xf0) = unaff_XMM15_Qb;
    //WARNING: Treating indirect jump as return
    return 0;
}


/* fcn.0001f534 @ 0x1f534 */

ulong fcn.0001f534(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    int64_t arg3;
    ulong *in_stack_00000028;
    uchar *in_stack_00000030;
    uint *puStack0000000000000038;
    uint uStack_218;
    ulong uStack_214;
    ulong uStack_20c;
    uchar auStack_204 [508];
    
    puStack0000000000000038 = &uStack_218;
    uStack_218 = 0x80014;
    uVar2 = 8;
    puVar1 = 0x259a0;
    if (in_stack_00000028 != NULL) {
        puVar1 = in_stack_00000028;
    }
    uStack_214 = *puVar1;
    uStack_20c = puVar1[1];
    if ((in_stack_00000030 != NULL) && (auStack_204 != in_stack_00000030)) {
        fcn.00010430(auStack_204,in_stack_00000030,8);
    }
    arg3 = 0x25d00;
    if (arg2 != 0) {
        arg3 = arg2;
    }
    uVar2 = fcn.0001f484(1,arg1 & 0xffffffff,uVar2,arg3);
    if (puStack0000000000000038 != &uStack_218) {
        (**(*0x27c48 + 0x48))();
    }
    return uVar2;
}


/* fcn.000178f4 @ 0x178f4 */

ulong fcn.000178f4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    
    arg1_00 = *0x26b88;
    *0x26b88 = 0x10;
    iVar2 = arg2;
    iVar1 = fcn.00016e00(arg1);
    uVar3 = 0;
    if (iVar1 != 0) {
        if (*(iVar1 + 0x18) == '\0') {
            fcn.00016e44(iVar1,CONCAT71(iVar2 >> 8,1));
            goto code_r0x000179d0;
        }
        if (iVar1 == *0x27ba0) {
            *(iVar1 + 0xa8) = arg2;
            if (arg4 != 0) {
                *(iVar1 + 0xb0) = arg3;
                iVar2 = fcn.0001f8f0(arg3);
                *(iVar1 + 0xb8) = iVar2;
                if (iVar2 == 0) {
                    uVar3 = 0x8000000000000009;
                    goto code_r0x000179d0;
                }
                if ((*(iVar1 + 0xb0) != 0) && (iVar2 != arg4)) {
                    fcn.00010430(iVar2,arg4,*(iVar1 + 0xb0));
                }
            }
            fcn.0001bc20(arg1_00);
            fcn.00010380(*(iVar1 + 200),-1);
            uVar3 = 0x800000000000000f;
            goto code_r0x000179d0;
        }
    }
    uVar3 = 0x8000000000000002;
code_r0x000179d0:
    fcn.0001bc20(arg1_00);
    return uVar3;
}


/* fcn.000145b8 @ 0x145b8 */

void fcn.000145b8(int64_t arg1)

{
    uint64_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    unkbyte7 in_R9;
    
    fcn.0001d66c(0x26628);
    uVar5 = 0;
    uVar6 = uVar5;
    puVar4 = *0x26640;
    while (puVar4 != 0x26640) {
        puVar1 = puVar4 + 5;
        puVar4 = *puVar4;
        uVar2 = uVar6 + 1;
        if (*puVar1 <= arg1) {
            uVar2 = uVar6;
        }
        uVar6 = uVar2;
    }
    iVar3 = fcn.0001f8f0(uVar6 << 3);
    if (iVar3 == 0) {
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
    }
    else {
        uVar6 = uVar5;
        for (puVar4 = *0x26640; puVar4 != 0x26640; puVar4 = *puVar4) {
            if (arg1 < puVar4[5]) {
                *(iVar3 + uVar6 * 8) = puVar4 + -1;
                uVar6 = uVar6 + 1;
            }
        }
        *0x26638 = 1;
        fcn.0001bc20(*0x26630);
        if (uVar6 != 0) {
            do {
                fcn.000146b4(*(iVar3 + uVar5 * 8),0,0,CONCAT71(in_R9,1));
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar6);
        }
        fcn.0001ab70(iVar3);
    }
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(int64_t arg1,int64_t arg2)

{
    *0x1094 = *(arg1 + 0x50);
    //WARNING: Could not recover jumptable at 0x00010429. Too many branches
    //WARNING: Treating indirect jump as call
    (**(arg1 + 0x48))(arg1,arg2);
    return;
}


/* fcn.00017a6c @ 0x17a6c */

bool fcn.00017a6c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    char acStackX_18 [8];
    ulong uStackX_20;
    int64_t aiStack_18 [2];
    
    acStackX_18[0] = '\0';
    if ((*0x27b30 != NULL) && ((***0x27b30)(*0x27b30,acStackX_18), acStackX_18[0] != '\0')) {
        return false;
    }
    if (arg1 == *0x29c28) {
        uVar1 = 2;
    }
    else {
        if (arg2 != 0) {
            uStackX_20 = 0;
            aiStack_18[0] = arg2;
            iVar2 = (**(*0x27c48 + 0xb8))(0x25b30,aiStack_18,&uStackX_20);
            if (-1 < iVar2) {
                iVar2 = (**(*0x27c48 + 0x118))(uStackX_20,0x25b30,0,0,0,4);
                uVar1 = 2;
                if (-1 < iVar2) goto code_r0x00017b27;
            }
        }
        uVar1 = 1;
    }
code_r0x00017b27:
    return (*0x29a80 & uVar1) != 0;
}


/* fcn.0001c648 @ 0x1c648 */

ulong fcn.0001c648(int64_t arg1)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    ulong *puVar4;
    
    puVar3 = *(arg1 + 0x30);
    puVar4 = NULL;
    while( true ) {
        if (puVar3 == arg1 + 0x30) {
            return 1;
        }
        uVar1 = puVar3[3];
        if (uVar1 == 0) {
            return 0;
        }
        uVar2 = puVar3[2];
        if (uVar2 < *(arg1 + 0x18)) {
            return 0;
        }
        if (~uVar1 <= uVar2) break;
        if (*(arg1 + 0x18) + *(arg1 + 0x20) < uVar2 + uVar1) {
            return 0;
        }
        if ((puVar4 != NULL) && (uVar2 < puVar4[4] + puVar4[3])) {
            return 0;
        }
        puVar4 = puVar3 + -1;
        puVar3 = *puVar3;
    }
    return 0;
}


/* fcn.000186e8 @ 0x186e8 */

int64_t fcn.000186e8(int arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    int *arg2;
    int aiStackX_10 [6];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((arg1_00 != NULL) && (*arg1_00 == 0x746e7665)) {
        if (arg1_00[1] < 0) {
            fcn.0001a4d4(arg1,0,0);
        }
        fcn.0001d66c(0x26b90);
        if (arg1_00[0x11] != 0) {
            *(arg1_00[0x11] + 8) = arg1_00[0x12];
            *arg1_00[0x12] = arg1_00[0x11];
        }
        if (arg1_00[9] != 0) {
            *(arg1_00[9] + 8) = arg1_00[10];
            *arg1_00[10] = arg1_00[9];
        }
        if (arg1_00[2] != 0) {
            *(arg1_00[2] + 8) = arg1_00[3];
            *arg1_00[3] = arg1_00[2];
        }
        *0x26ba0 = 1;
        fcn.0001bc20(*0x26b98);
        if ((*(arg1_00 + 0xb) & 2) != 0) {
            fcn.000137ec(arg1_00);
        }
        *arg1_00 = 0;
        arg2 = aiStackX_10;
        iVar1 = fcn.0001ab10(arg1_00,arg2);
        if (((-1 < iVar1) && (*0x27c00 != '\0')) && (aiStackX_10[0] - 5U < 2)) {
            fcn.0001bd4c(aiStackX_10[0] - 5U,arg2);
        }
        return iVar1;
    }
    return -0x7ffffffffffffffe;
}


/* fcn.000181a4 @ 0x181a4 */

void fcn.000181a4(int64_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    
    piVar1 = arg1 + 0x48;
    if (*piVar1 != 0) {
        *(*piVar1 + 8) = *(arg1 + 0x50);
        **(arg1 + 0x50) = *piVar1;
        *piVar1 = 0;
    }
    iVar3 = *(arg1 + 0x20) * 0x10;
    *piVar1 = iVar3 + 0x29880;
    puVar2 = *(iVar3 + 0x29888);
    *(arg1 + 0x50) = puVar2;
    *puVar2 = piVar1;
    *(iVar3 + 0x29888) = piVar1;
    *0x27ba8 = *0x27ba8 | 1LL << (*(arg1 + 0x20) & 0x3f);
    return;
}


/* fcn.00018588 @ 0x18588 */

ulong fcn.00018588(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t *arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (((arg1_00 == NULL) || (*arg1_00 != 0x746e7665)) || ((*(arg1_00 + 1) & 0x200) != 0)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        uVar1 = 0x8000000000000006;
        if ((*(arg1_00 + 0xc) == 0) && ((*(arg1_00 + 1) & 0x100) != 0)) {
            fcn.0001d66c(0x26b90);
            if (*(arg1_00 + 0xc) == 0) {
                fcn.000181a4(arg1_00);
            }
            *0x26ba0 = 1;
            fcn.0001bc20(*0x26b98);
        }
        if (*(arg1_00 + 0xc) != 0) {
            fcn.0001d66c(0x26b90);
            if (*(arg1_00 + 0xc) != 0) {
                *(arg1_00 + 0xc) = 0;
                uVar1 = 0;
            }
            *0x26ba0 = 1;
            fcn.0001bc20(*0x26b98);
        }
    }
    return uVar1;
}


/* fcn.0001a4d4 @ 0x1a4d4 */

ulong fcn.0001a4d4(int arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong uVar4;
    uint in_register_0000000c;
    int64_t *piVar5;
    ulong *puVar6;
    uint in_R8;
    int64_t aiStackX_18 [2];
    
    piVar5 = CONCAT44(in_register_0000000c,arg1);
    aiStackX_18[0] = CONCAT44(in_R8,arg3);
    if ((((piVar5 == NULL) || (*piVar5 != 0x746e7665)) || (2 < arg2)) || (-1 < piVar5[1])) {
        uVar4 = 0x8000000000000002;
    }
    else {
        fcn.0001d66c(0x26ce0);
        piVar1 = piVar5 + 0x13;
        if (*piVar1 != 0) {
            *(*piVar1 + 8) = piVar5[0x14];
            *piVar5[0x14] = *piVar1;
            *piVar1 = 0;
        }
        piVar5[0x15] = 0;
        piVar5[0x16] = 0;
        if (arg2 != 0) {
            if (arg2 == 1) {
                if (aiStackX_18[0] == 0) {
                    (**(*0x27b50 + 0x10))(*0x27b50,aiStackX_18);
                }
                piVar5[0x16] = aiStackX_18[0];
            }
            fcn.0001d66c(0x26cc8);
            iVar3 = *0x27be8;
            *0x26cd8 = 1;
            fcn.0001bc20(*0x26cd0);
            piVar5[0x15] = aiStackX_18[0] + iVar3;
            for (puVar6 = *0x26cb8; (puVar6 != 0x26cb8 && (puVar6[2] <= aiStackX_18[0] + iVar3)); puVar6 = *puVar6) {
            }
            *piVar1 = puVar6;
            puVar2 = puVar6[1];
            piVar5[0x14] = puVar2;
            *puVar2 = piVar1;
            puVar6[1] = piVar1;
            if (aiStackX_18[0] == 0) {
                fcn.000184e8(*0x27bf0);
            }
        }
        *0x26cf0 = 1;
        fcn.0001bc20(*0x26ce8);
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000137ec @ 0x137ec */

ulong fcn.000137ec(int64_t arg1)

{
    ulong *puVar1;
    int64_t *piVar2;
    
code_r0x00013800:
    fcn.0001d66c(0x26628);
    puVar1 = *0x26618;
    do {
        if (puVar1 == 0x26618) {
            *0x26638 = 1;
            fcn.0001bc20(*0x26630);
            return 0;
        }
        for (piVar2 = puVar1[6]; piVar2 != puVar1 + 6; piVar2 = *piVar2) {
            if (piVar2[2] == arg1) {
                *(*piVar2 + 8) = piVar2[1];
                *piVar2[1] = *piVar2;
                fcn.0001ab70(piVar2 + -2);
                *0x26638 = 1;
                fcn.0001bc20(*0x26630);
                goto code_r0x00013800;
            }
        }
        puVar1 = *puVar1;
    } while( true );
}


/* fcn.000175b0 @ 0x175b0 */

ulong fcn.000175b0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    char cVar3;
    uint32_t unaff_EBX;
    int32_t unaff_EBP;
    char *pcVar4;
    uint64_t uVar5;
    int64_t unaff_R14;
    uint32_t unaff_retaddr;
    int64_t in_stack_ffffffffffffffe8;
    int64_t in_stack_fffffffffffffff0;
    
    cVar3 = arg1;
    if (arg3 == 0) {
code_r0x0001764f:
        if (cVar3 != '\0') {
            *0x27b98 = 1;
        }
        uVar2 = fcn.0001716c(CONCAT71(arg1 >> 8,cVar3),arg2,arg3,arg4,in_stack_ffffffffffffffe8,
                             in_stack_fffffffffffffff0,unaff_R14,unaff_retaddr,unaff_EBX,unaff_EBP);
    }
    else {
        uVar5 = 0;
        pcVar4 = arg3;
        while( true ) {
            if ((*pcVar4 == '\x7f') && (pcVar4[1] == -1)) goto code_r0x0001764f;
            uVar1 = pcVar4[3] * 0x100 + pcVar4[2];
            if (uVar1 < 4) break;
            uVar5 = uVar5 + uVar1;
            uVar1 = 0;
            do {
                if (*pcVar4 == *(uVar1 + 0x27a7c)) break;
                uVar1 = uVar1 + 1;
            } while (uVar1 < 6);
            if ((uVar1 == 6) || (0x10000 < uVar5)) break;
            arg1 = pcVar4[3] * 0x100;
            pcVar4 = pcVar4 + arg1 + pcVar4[2];
        }
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00018814 @ 0x18814 */

int64_t fcn.00018814(int64_t arg1)

{
    ulong *puVar1;
    char *pcVar2;
    int64_t iVar3;
    uchar auStackX_8 [8];
    
    puVar1 = arg1 + 0x50;
    iVar3 = (**(*(arg1 + 0x48) + 0x18))(*(arg1 + 0x48),arg1 + 0x30,0x13,0,puVar1,arg1 + 0x58,auStackX_8);
    if (iVar3 < 0) {
        if (iVar3 == -0x7fffffffffffffe8) {
            *(arg1 + 0x79) = 1;
            return -0x7fffffffffffffe8;
        }
        *puVar1 = 0;
        *(arg1 + 0x74) = 1;
    }
    else {
        pcVar2 = *puVar1;
        if (*pcVar2 == '\t') {
            *(arg1 + 0x75) = 1;
        }
        else {
            *(arg1 + 0x74) = 1;
        }
        if (*pcVar2 == '\0') {
            *(arg1 + 0x60) = 1;
        }
        else if (*pcVar2 == '\x01') {
            *(arg1 + 0x61) = 1;
        }
        if ((*(arg1 + 0x60) != '\0') || (*(arg1 + 0x61) != '\0')) {
            if (arg1 + 100 != pcVar2 + 1) {
                fcn.00010430(arg1 + 100,pcVar2 + 1,0x10);
            }
        }
    }
    *(arg1 + 0x79) = 0;
    return iVar3;
}


/* fcn.0001df84 @ 0x1df84 */

//WARNING: Variable defined which should be unmapped: var_10h

char fcn.0001df84(uint32_t arg1)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint32_t *puVar6;
    uint8_t *puVar7;
    uint8_t *puVar8;
    uint8_t *puVar9;
    char acStackX_8 [8];
    char acStackX_10 [8];
    uchar auStackX_18 [16];
    uint32_t var_30h;
    uint32_t var_38h;
    int64_t var_40h;
    uint8_t auStack_38 [16];
    int64_t var_10h;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    acStackX_8[0] = '\0';
    acStackX_10[0] = '\0';
    if ((*(iVar5 + 0x61) == '\0') && (*(iVar5 + 0x60) == '\0')) {
        puVar7 = *(iVar5 + 0x50);
        if (puVar7 == NULL) {
            piVar3 = 0x26370;
            iVar5 = *0x26370;
            while( true ) {
                if (iVar5 == 0) {
                    return '\x01';
                }
                if (piVar3[4] == '\0') break;
                piVar3 = piVar3 + 5;
                iVar5 = *piVar3;
            }
        }
        else {
            *0x27c40 = *0x27c30;
            puVar8 = puVar7;
            puVar2 = puVar7;
            if (*(iVar5 + 0x58) != 0) {
                do {
                    puVar9 = puVar2 + 1;
                    uVar1 = *puVar8;
                    puVar6 = NULL;
                    if (uVar1 < 7) {
                        if (uVar1 == 6) {
code_r0x0001e094:
                            puVar6 = CONCAT71(puVar6 >> 8,1);
                        }
                        else {
                            if (uVar1 < 2) {
code_r0x0001e159:
                                if (puVar8 != puVar7) {
                                    return '\0';
                                }
                                goto code_r0x0001e177;
                            }
                            if (uVar1 == 2) {
                                if (auStack_38 != puVar9) {
                                    fcn.00010430(auStack_38,puVar9,0x10);
                                }
                                puVar7 = auStack_38;
                                iVar4 = fcn.00019b44(puVar7,0,auStackX_18);
                                if (-1 < iVar4) {
                                    *puVar8 = 0xff;
                                    goto code_r0x0001e10f;
                                }
                                iVar4 = 0;
                                goto code_r0x0001e111;
                            }
                            if (uVar1 == 3) {
                                iVar4 = fcn.0001df58(acStackX_8);
                                if (iVar4 < 0) {
                                    return '\0';
                                }
                                puVar6 = acStackX_10;
                                iVar4 = fcn.0001df58(puVar6);
                                if (iVar4 < 0) {
                                    return '\0';
                                }
                                if ((acStackX_8[0] == '\0') ||
                                   (puVar6 = CONCAT71(puVar6 >> 8,1), acStackX_10[0] == '\0')) {
                                    puVar6 = puVar6 & 0xffffffffffffff00;
                                }
                            }
                            else if (uVar1 == 4) {
                                iVar4 = fcn.0001df58(acStackX_8);
                                if (iVar4 < 0) {
                                    return '\0';
                                }
                                puVar6 = acStackX_10;
                                iVar4 = fcn.0001df58(puVar6);
                                if (iVar4 < 0) {
                                    return '\0';
                                }
                                if ((acStackX_8[0] != '\0') ||
                                   (puVar6 = puVar6 & 0xffffffffffffff00, acStackX_10[0] != '\0'))
                                goto code_r0x0001e094;
                            }
                            else {
                                if (uVar1 != 5) {
                                    return '\0';
                                }
                                puVar6 = acStackX_8;
                                iVar4 = fcn.0001df58(puVar6);
                                if (iVar4 < 0) {
                                    return '\0';
                                }
                                puVar6 = CONCAT71(puVar6 >> 8,acStackX_8[0] == '\0');
                            }
                        }
code_r0x0001e16d:
                        iVar4 = fcn.0001df18(puVar6);
                        if (iVar4 < 0) {
                            return '\0';
                        }
                    }
                    else {
                        if (uVar1 == 7) {
                            puVar6 = NULL;
                            goto code_r0x0001e16d;
                        }
                        if (uVar1 == 8) {
                            iVar5 = fcn.0001df58(acStackX_8);
                            if (iVar5 < 0) {
                                acStackX_8[0] = '\0';
                            }
                            return acStackX_8[0];
                        }
                        if (uVar1 == 9) goto code_r0x0001e159;
                        if (uVar1 != 0xff) {
                            return '\0';
                        }
                        puVar7 = NULL;
                        if (auStack_38 != puVar9) {
                            puVar7 = auStack_38;
                            fcn.00010430(puVar7,puVar9,0x10);
                        }
code_r0x0001e10f:
                        iVar4 = CONCAT71(puVar7 >> 8,1);
code_r0x0001e111:
                        iVar4 = fcn.0001df18(iVar4);
                        if (iVar4 < 0) {
                            return '\0';
                        }
                        puVar8 = puVar8 + 0x10;
                        puVar9 = puVar2 + 0x11;
                    }
code_r0x0001e177:
                    puVar7 = *(iVar5 + 0x50);
                    puVar8 = puVar8 + 1;
                    puVar2 = puVar9;
                } while (puVar8 + -puVar7 < *(iVar5 + 0x58));
            }
        }
    }
    return '\0';
}


/* fcn.00018c54 @ 0x18c54 */

void fcn.00018c54(int64_t arg1)

{
    ulong *puVar1;
    
    for (puVar1 = *0x26bf0; puVar1 != 0x26bf0; puVar1 = *puVar1) {
        if ((((*(puVar1 + 0xb) != '\0') && (*(puVar1 + 0x6c) != '\0')) && (puVar1 + -1 != arg1)) &&
           ((*(arg1 + 0x30) == *(puVar1 + 0x5c) && (*(arg1 + 0x38) == *(puVar1 + 100))))) {
            fcn.00018c54(puVar1 + -1);
        }
    }
    fcn.0001d66c(0x26bb8);
    *(arg1 + 0x74) = 0;
    puVar1 = arg1 + 0x18;
    *(arg1 + 0x76) = 1;
    *puVar1 = 0x26bd0;
    *(arg1 + 0x20) = *0x26bd8;
    **0x26bd8 = puVar1;
    *0x26bc8 = 1;
    *0x26bd8 = puVar1;
    fcn.0001bc20(*0x26bc0);
    for (puVar1 = *0x26bf0; puVar1 != 0x26bf0; puVar1 = *puVar1) {
        if (((*(puVar1 + 0x59) != '\0') && (*(puVar1 + 0x6c) != '\0')) &&
           ((puVar1 + -1 != arg1 && ((*(arg1 + 0x30) == *(puVar1 + 0x5c) && (*(arg1 + 0x38) == *(puVar1 + 100))))))) {
            fcn.00018c54(puVar1 + -1);
        }
    }
    return;
}


/* fcn.00019078 @ 0x19078 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00019078(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint16_t *arg1_00;
    uint32_t uVar6;
    uint16_t *arg1_01;
    uint64_t uVar7;
    uint16_t *puVar8;
    int64_t iVar9;
    uint32_t auStackX_20 [2];
    int64_t var_58h;
    uint16_t *puStack_48;
    uint64_t uStack_40;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar9 = 0;
    while( true ) {
        puVar8 = NULL;
        puStack_48 = NULL;
        uStack_40 = 0;
        iVar5 = arg1;
        arg1_01 = arg3;
        iVar4 = (**(arg1 + 0x18))(arg1,arg3,0x17,iVar9,&puStack_48,&uStack_40,auStackX_20);
        if (iVar4 < 0) break;
        if (*0x27b48 != NULL) {
            iVar5 = fcn.00018efc(iVar5,arg2,arg3);
            arg1_01 = auStackX_20[0];
            iVar4 = (***0x27b48)(*0x27b48,arg1_01,iVar5);
            if (iVar5 != 0) {
                fcn.0001ab70(iVar5);
            }
            if (iVar4 != 0) {
                if (puStack_48 != NULL) {
                    fcn.0001ab70();
                }
                goto code_r0x000192a7;
            }
        }
        puVar2 = puStack_48;
        arg1_00 = puStack_48;
        if (-1 < *(puStack_48 + 0x16)) {
            uVar6 = *(puStack_48 + 0x16) >> 0x10 & 0x1f;
            uVar3 = 1 << uVar6;
            if (uVar3 < 8) {
                uVar3 = 8;
            }
            arg1_01 = NULL;
            if (puStack_48 % uVar3 != 0) {
                arg1_01 = ((uStack_40 & 0xfff) != 0) + (uStack_40 >> 0xc);
                arg1_00 = fcn.0001f810(uVar6,arg1_01,uVar3);
                if (arg1_00 == NULL) {
                    fcn.0001ab70(puStack_48);
                    iVar4 = -0x7ffffffffffffff7;
                    goto code_r0x000192a7;
                }
                if (puVar2[0x1a] != 0) {
                    uVar1 = puVar2[0x1a];
                    puVar8 = puVar2 + *(puVar2 + uVar1 + 0x10) + uVar1;
                    for (arg1_01 = puVar2 + uVar1 + 0x14; arg1_01 < puVar8; arg1_01 = arg1_01 + *arg1_01) {
                        if (arg1_01[1] == 3) {
                            uVar3 = *(puVar2 + 0x16);
                            uVar7 = *(arg1_01 + 2);
                            if ((uVar7 != 0) && (arg1_00 != puVar2)) {
                                puVar8 = *(arg1_01 + 2);
                                fcn.00010430(arg1_00,puVar2,puVar8);
                            }
                            arg1_01 = uStack_40 - uVar7;
                            if (arg1_01 != NULL) {
                                fcn.00010490(uVar7 + arg1_00,arg1_01,CONCAT71(puVar8 >> 8,-((uVar3 & 0x800) != 0)));
                            }
                            goto code_r0x00019218;
                        }
                    }
                }
                if ((uStack_40 != 0) && (arg1_01 = puStack_48, arg1_00 != puStack_48)) {
                    fcn.00010430(arg1_00,puStack_48,uStack_40);
                }
code_r0x00019218:
                fcn.0001ab70(puStack_48);
                puStack_48 = NULL;
                puVar8 = arg1_00;
            }
        }
        iVar4 = fcn.00019fb4(arg1_00,arg1_01,arg2,auStackX_20[0]);
        if (iVar4 < 0) break;
        iVar9 = iVar9 + 1;
    }
    if (puStack_48 != NULL) {
        fcn.0001ab70();
    }
    if (puVar8 != NULL) {
        fcn.00016160(puVar8,((uStack_40 & 0xfff) != 0) + (uStack_40 >> 0xc));
    }
code_r0x000192a7:
    if (iVar9 != 0) {
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.000176a8 @ 0x176a8 */

int64_t fcn.000176a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t arg2_00;
    int64_t noname_2;
    
    arg2_00 = arg2;
    noname_2 = arg3;
    iVar2 = fcn.00016e00(arg1);
    if ((iVar2 == 0) || (*(iVar2 + 0x18) != '\0')) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        iVar3 = *(iVar2 + 0x180);
        if (-1 < iVar3) {
            if ((*(iVar2 + 0xd0) == -0x799c) || (*(iVar2 + 0xd8) != 0)) {
                if (*0x27b98 != '\0') {
                    arg2_00 = 0x3090002;
                    fcn.0001f484(1,0x3090002,noname_2,0x25d00);
                    *0x27b98 = '\0';
                    if (((*(iVar2 + 0x58) == 4) && (*(iVar2 + 0x60) != NULL)) && (**(iVar2 + 0x60) == 0x4f420000)) {
                        *(iVar2 + 0x58) = 0;
                        *(iVar2 + 0x60) = 0;
                    }
                }
                iVar3 = *(iVar2 + 0xd8);
                if (iVar3 != 0) {
                    arg2_00 = *(iVar2 + 0x88);
                    noname_2 = *(iVar2 + 0x90) << 0xc;
                    iVar3 = (**(iVar3 + 8))(iVar3,arg2_00,noname_2,iVar2 + 0x20);
                    if (iVar3 < 0) {
                        return iVar3;
                    }
                }
                uVar1 = *0x27ba0;
                iVar3 = *0x27b68;
                *(iVar2 + 0xa0) = *0x26b88;
                *0x27ba0 = iVar2;
                iVar4 = fcn.0001f8f0(0x108);
                *(iVar2 + 0xc0) = iVar4;
                if (iVar4 == 0) {
                    iVar3 = -0x7ffffffffffffff7;
                    *0x27ba0 = uVar1;
                }
                else {
                    iVar4 = iVar4 + (-iVar4 & 7);
                    *(iVar2 + 200) = iVar4;
                    iVar5 = fcn.000102b0(iVar4);
                    if (iVar5 == 0) {
                        *(iVar2 + 0x18) = 1;
                        fcn.0001f534(iVar4,0x3040002,noname_2,0x25ce0);
                        arg2_00 = (**(iVar2 + 0x20))(arg1,*(iVar2 + 0x38));
                        *(iVar2 + 0xa8) = arg2_00;
                        fcn.000178f4(arg1,arg2_00,0,0);
                    }
                    fcn.0001bc20(*(iVar2 + 0xa0));
                    fcn.0001ab70(*(iVar2 + 0xc0));
                    *0x27ba0 = uVar1;
                    if (*(iVar2 + 0x10) != 10) {
                        fcn.000145b8(iVar3);
                    }
                    if ((arg3 == 0) || (arg2 == 0)) {
                        fcn.0001ab70(*(iVar2 + 0xb8));
                        *(iVar2 + 0xb8) = 0;
                    }
                    else {
                        *arg2 = *(iVar2 + 0xb0);
                        *arg3 = *(iVar2 + 0xb8);
                    }
                    iVar3 = *(iVar2 + 0xa8);
                    if ((iVar3 < 0) || (*(iVar2 + 0x10) == 10)) {
                        fcn.00016e44(iVar2,CONCAT71(arg2_00 >> 8,1));
                    }
                }
            }
            else {
                iVar3 = -0x7ffffffffffffffd;
            }
        }
    }
    return iVar3;
}


/* fcn.0001cc54 @ 0x1cc54 */

//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.0001cc54(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t *arg1_00;
    int64_t var_20h;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_30h;
    int64_t var_28h_2;
    uint32_t var_18h;
    int16_t var_bp_10h;
    
    var_28h = 0;
    var_20h = 0;
    iVar1 = fcn.0001cb18(arg1,&var_28h,&var_20h,0x40,var_30h);
    if (-1 < iVar1) {
        if ((var_18h == 0x4856465f) &&
           (((var_30h == *0x25ba0 && (var_28h_2 == *0x25ba8)) || ((var_30h == *0x25a90 && (var_28h_2 == *0x25a98)))))) {
            arg1_00 = fcn.0001f8f0(var_bp_10h);
            *arg2 = arg1_00;
            if (arg1_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            if (arg1_00 != &var_40h) {
                fcn.00010430(arg1_00,&var_40h,0x40);
            }
            iVar1 = fcn.0001cb18(arg1,&var_28h,&var_20h,var_bp_10h - 0x40,var_30h);
            if (iVar1 < 0) {
                fcn.0001ab70(*arg2);
            }
            return iVar1;
        }
        iVar1 = -0x7ffffffffffffffe;
    }
    return iVar1;
}


/* fcn.0001cb18 @ 0x1cb18 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001cb18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_50h)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_8;
    uint64_t uStackX_20;
    int64_t var_30h;
    int64_t iStack_38;
    uint64_t uStack_30;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    uVar3 = 0;
    uStackX_20 = arg4;
    iStack_38 = arg4;
    iVar1 = (**(arg1 + 0x20))(arg1,*arg2,*arg3,&iStack_38);
    if (iVar1 == 0) {
        *arg3 = *arg3 + uStackX_20;
    }
    else {
        if (iVar1 != -0x7ffffffffffffffc) {
            return iVar1;
        }
        uStackX_20 = uStackX_20 - iStack_38;
        iVar1 = var_30h + iStack_38;
        *arg2 = *arg2 + 1;
        while (uStackX_20 != 0) {
            iVar2 = (**(arg1 + 0x18))(arg1,*arg2,&uStackX_8,&uStack_30);
            if (iVar2 < 0) {
                return iVar2;
            }
            uVar3 = 0;
            if (uStack_30 != 0) {
                do {
                    if (uStackX_20 < uStackX_8) goto code_r0x0001cc11;
                    iVar2 = (**(arg1 + 0x20))(arg1,*arg2 + uVar3,0,&uStackX_8,iVar1);
                    if (iVar2 < 0) {
                        return iVar2;
                    }
                    uVar3 = uVar3 + 1;
                    iVar1 = iVar1 + uStackX_8;
                    uStackX_20 = uStackX_20 - uStackX_8;
                } while (uVar3 < uStack_30);
            }
            if (uStackX_20 < uStackX_8) {
code_r0x0001cc11:
                if ((uStackX_20 != 0) &&
                   (iVar1 = (**(arg1 + 0x20))(arg1,*arg2 + uVar3,0,&uStackX_20,iVar1), iVar1 < 0)) {
                    return iVar1;
                }
                break;
            }
            *arg2 = *arg2 + uStack_30;
        }
        *arg2 = *arg2 + uVar3;
        *arg3 = uStackX_20;
    }
    return 0;
}


/* fcn.00018efc @ 0x18efc */

ulong fcn.00018efc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    uVar2 = 0;
    iStackX_8 = arg1;
    iVar1 = fcn.00013f48(arg2,0x25b00,&iStackX_8,*0x27b20);
    if (-1 < iVar1) {
        *0x29860 = 0x140604;
        *0x29864 = *arg3;
        *0x2986c = *(arg3 + 8);
        fcn.00010430(0x29874,0x273b0,4);
        uVar2 = fcn.0001f6fc(iStackX_8,0x29860);
    }
    return uVar2;
}


/* fcn.0001f810 @ 0x1f810 */

uint64_t fcn.0001f810(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uStackX_10;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = fcn.000160ec(0,4);
            if (-1 < iVar1) {
                return uStackX_10;
            }
        }
        else {
            iVar1 = fcn.000160ec(0,4);
            if (-1 < iVar1) {
                uVar2 = uStackX_10 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar2 - uStackX_10 & 0xfff) != 0) + (uVar2 - uStackX_10 >> 0xc);
                if (iVar1 != 0) {
                    fcn.00016160(uStackX_10,iVar1);
                }
                iVar1 = ((arg2 >> 0xc) + ((arg2 & 0xfffU) != 0)) - iVar1;
                if (iVar1 != 0) {
                    fcn.00016160(arg1 * 0x1000 + uVar2,iVar1);
                }
                return uVar2;
            }
        }
    }
    return 0;
}


/* fcn.00018d48 @ 0x18d48 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

ulong * fcn.00018d48(int64_t arg1)

{
    ulong *puVar1;
    bool bVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t *puVar6;
    ulong *puVar7;
    int16_t iVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    int64_t unaff_R15;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStackY_48;
    int64_t iStackY_40;
    int64_t var_10h;
    int64_t var_8h;
    
    uVar12 = 0;
    uStackX_10 = 0;
    bVar2 = false;
    iVar4 = fcn.00013f48(arg1,0x25a20,&iStackX_20,*0x27b20);
    if ((iVar4 < 0) || (iVar4 = fcn.0001cc54(iStackX_20,&uStackX_10), uVar3 = uStackX_10, iVar4 < 0))
    goto code_r0x00018e93;
    iVar8 = 0;
    uVar10 = *(uStackX_10 + 0x30) >> 1;
    uVar5 = uVar12;
    bVar2 = false;
    if (uVar10 != 0) {
        do {
            iVar8 = iVar8 + *(uStackX_10 + uVar5 * 2);
            uVar5 = uVar5 + 1;
        } while (uVar5 < uVar10);
        if (iVar8 != 0) goto code_r0x00018e5e;
    }
    if (*(uStackX_10 + 0x34) != 0) {
        uVar9 = *(uStackX_10 + 0x34);
        puVar6 = uStackX_10 + 0x38;
        uStackX_18 = 0;
        uStackX_10 = 0;
        uVar5 = uVar12;
        do {
            if ((*puVar6 == 0) && (puVar6[1] == 0)) goto code_r0x00018e33;
            uVar11 = *puVar6;
            uVar10 = uVar12;
            if (uVar11 != 0) {
                do {
                    if (uVar9 < puVar6[1]) break;
                    uVar9 = uVar9 - puVar6[1];
                    uVar5 = uVar5 + 1;
                    uVar10 = uVar10 + 1;
                } while (uVar10 < uVar11);
                uStackX_18 = uVar5;
            }
            if (uVar10 < uVar11) goto code_r0x00018e2d;
            puVar6 = puVar6 + 2;
        } while( true );
    }
    goto code_r0x00018e5e;
code_r0x00018e2d:
    uStackX_10 = uVar9;
code_r0x00018e33:
    iVar4 = fcn.0001cb18(iStackX_20,&uStackX_18,&uStackX_10,0x10,unaff_R15);
    bVar2 = false;
    if (-1 < iVar4) {
        bVar2 = true;
    }
code_r0x00018e5e:
    fcn.0001ab70(uVar3);
    puVar7 = *0x26be0;
    if (bVar2) {
        for (; puVar7 != 0x26be0; puVar7 = *puVar7) {
            if ((iStackY_48 == puVar7[3]) && (iStackY_40 == puVar7[4])) {
                return NULL;
            }
        }
    }
code_r0x00018e93:
    puVar7 = fcn.0001f924(4,0x30);
    *puVar7 = 0x776f6e6b;
    puVar7[3] = arg1;
    if (bVar2) {
        puVar7[4] = iStackY_48;
        puVar7[5] = iStackY_40;
    }
    puVar1 = puVar7 + 1;
    *puVar1 = 0x26be0;
    puVar7[2] = *0x26be8;
    **0x26be8 = puVar1;
    *0x26be8 = puVar1;
    return puVar7;
}


/* fcn.00018f94 @ 0x18f94 */

ulong fcn.00018f94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t arg1_00;
    ulong *arg1_01;
    ulong uVar2;
    
    arg1_01 = fcn.0001f924(4,0x90);
    if (arg4 == '\v') {
        *(arg1_01 + 0x11) = 1;
    }
    *arg1_01 = 0x72767264;
    arg1_01[6] = *arg3;
    arg1_00 = *(arg3 + 8);
    arg1_01[7] = arg1_00;
    arg1_01[5] = arg2;
    arg1_01[9] = arg1;
    uVar2 = fcn.00018efc(arg1_00,arg2,arg3);
    arg1_01[8] = uVar2;
    fcn.00018814(arg1_01);
    fcn.0001d66c(0x26bb8);
    puVar1 = arg1_01 + 1;
    *puVar1 = 0x26bf0;
    arg1_01[2] = *0x26bf8;
    **0x26bf8 = puVar1;
    *0x26bc8 = 1;
    *0x26bf8 = puVar1;
    fcn.0001bc20(*0x26bc0);
    return 0;
}


/* fcn.000104b0 @ 0x104b0 */

int64_t fcn.000104b0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.0001d634 @ 0x1d634 */

ulong fcn.0001d634(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(puVar2 + 2) == 2) {
        uVar1 = 0x800000000000000f;
    }
    else {
        uVar1 = fcn.0001bbd8(*puVar2);
        puVar2[1] = uVar1;
        uVar1 = 0;
        *(puVar2 + 2) = 2;
    }
    return uVar1;
}


/* fcn.0001992c @ 0x1992c */

int64_t fcn.0001992c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    *arg2 = 0;
    iVar3 = **(arg1 + 0x10);
    *(arg1 + 0x10) = iVar3;
    iVar2 = *0x27bc0;
    if (iVar3 != *(arg1 + 0x18) + 0x28) {
        do {
            iVar1 = *(iVar3 + -8);
            *arg2 = *(iVar3 + 0x18);
            if (*(iVar1 + 0x28) != iVar2) {
                *(iVar1 + 0x28) = iVar2;
                return iVar1;
            }
            iVar3 = **(arg1 + 0x10);
            *(arg1 + 0x10) = iVar3;
        } while (iVar3 != *(arg1 + 0x18) + 0x28);
    }
    return 0;
}


/* fcn.000198f4 @ 0x198f4 */

ulong fcn.000198f4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    
    uVar3 = 0;
    *arg2 = 0;
    iVar1 = *(arg1 + 8);
    if (iVar1 != 0) {
        *(arg1 + 8) = 0;
        iVar2 = **(iVar1 + 0x28);
        if (iVar2 != *(iVar1 + 8) + 0x28) {
            uVar3 = *(iVar2 + -8);
            *arg2 = *(iVar2 + 0x18);
        }
    }
    return uVar3;
}


/* fcn.0001a8a0 @ 0x1a8a0 */

int64_t * fcn.0001a8a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char cVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    
    cVar12 = arg3;
    uVar8 = arg2 + 0x28 + (-arg2 & 7);
    uVar9 = 0;
    do {
        if (uVar8 <= *(uVar9 * 2 + 0x26f80)) goto code_r0x0001a8fe;
        uVar9 = uVar9 + 1;
    } while (uVar9 < 0xc);
    uVar9 = 0xc;
code_r0x0001a8fe:
    iVar2 = fcn.0001a640(arg1 & 0xffffffff);
    piVar6 = NULL;
    if (iVar2 != 0) {
        uVar3 = 0;
        uVar14 = 0x1000;
        do {
            if (0xfff < *(uVar3 * 2 + 0x26f80)) goto code_r0x0001a938;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc);
        uVar3 = 0xc;
code_r0x0001a938:
        if ((uVar9 < uVar3) && (cVar12 == '\0')) {
            piVar6 = iVar2 + 0x18 + uVar9 * 0x10;
            if (*piVar6 == piVar6) {
                uVar3 = *(uVar9 * 2 + 0x26f80);
                do {
                    uVar10 = uVar9;
                    uVar9 = uVar10 + 1;
                    piVar6 = piVar6 + 2;
                    uVar4 = 0;
                    do {
                        if (0xfff < *(uVar4 * 2 + 0x26f80)) goto code_r0x0001a981;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < 0xc);
                    uVar4 = 0xc;
code_r0x0001a981:
                    if (uVar4 <= uVar9) {
                        piVar6 = fcn.0001a804(arg1 & 0xffffffff,1,arg3,0);
                        piVar5 = NULL;
                        if (piVar6 != NULL) goto code_r0x0001a9da;
                        goto code_r0x0001aac1;
                    }
                } while (*piVar6 == piVar6);
                uVar14 = *(uVar9 * 2 + 0x26f80);
                piVar5 = *(iVar2 + 0x18 + uVar9 * 0x10);
                piVar6 = piVar5 + -1;
                *(*piVar5 + 8) = piVar5[1];
                *piVar5[1] = *piVar5;
code_r0x0001a9da:
                piVar5 = piVar6;
                if (uVar3 < uVar14) {
                    piVar13 = iVar2 + 0x18 + uVar10 * 0x10;
                    do {
                        uVar1 = *(uVar10 * 2 + 0x26f80);
                        while (uVar9 = uVar1 + uVar3, uVar9 <= uVar14) {
                            *(piVar6 + uVar3) = 0x30726670;
                            *(piVar6 + uVar3 + 4) = uVar10;
                            piVar7 = uVar3 + 8 + piVar6;
                            iVar11 = *piVar13;
                            *piVar7 = iVar11;
                            piVar7[1] = piVar13;
                            *(iVar11 + 8) = piVar7;
                            *piVar13 = piVar7;
                            uVar3 = uVar9;
                        }
                        uVar10 = uVar10 - 1;
                        piVar13 = piVar13 + -2;
                    } while (uVar3 < uVar14);
                }
            }
            else {
                piVar6 = *piVar6;
                *(*piVar6 + 8) = piVar6[1];
                *piVar6[1] = *piVar6;
                piVar5 = piVar6 + -1;
            }
        }
        else {
            uVar9 = uVar8 - 0x10;
            if (cVar12 == '\0') {
                uVar9 = uVar8;
            }
            iVar11 = ((uVar9 & 0xfff) != 0) + (uVar9 >> 0xc);
            piVar5 = fcn.0001a804(arg1 & 0xffffffff,iVar11,arg3,CONCAT71(0x26f,cVar12));
            uVar8 = uVar9;
            if ((cVar12 != '\0') && (piVar5 != NULL)) {
                piVar5 = piVar5 + ((iVar11 * 0x1000 - (-uVar9 & 7)) - uVar9);
            }
        }
code_r0x0001aac1:
        piVar6 = NULL;
        if (piVar5 != NULL) {
            *(iVar2 + 8) = *(iVar2 + 8) + uVar8;
            piVar6 = piVar5 + 3;
            *piVar5 = 0x30646870;
            piVar5[2] = uVar8;
            *(piVar5 + 1) = arg1;
            if (cVar12 == '\0') {
                *(piVar5 + (uVar8 - 0x10)) = 0x6c617470;
                *(piVar5 + (uVar8 - 8)) = uVar8;
            }
        }
    }
    return piVar6;
}


/* fcn.0001a640 @ 0x1a640 */

ulong * fcn.0001a640(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    uVar3 = arg1;
    if (uVar3 < 0xf) {
        puVar1 = uVar3 * 0xe8 + 0x28ac0;
    }
    else {
        if (0x6fffffff < uVar3) {
            for (puVar1 = *0x26d10; puVar1 != 0x26d10; puVar1 = *puVar1) {
                if (*(puVar1 + -0x19) == uVar3) {
                    return puVar1 + -0x1b;
                }
            }
            puVar1 = fcn.0001a8a0(4,0xe8,0);
            if (puVar1 != NULL) {
                puVar1[1] = 0;
                iVar4 = 0xc;
                *puVar1 = 0x74736c70;
                *(puVar1 + 2) = uVar3;
                puVar2 = puVar1 + 3;
                do {
                    *puVar2 = puVar2;
                    puVar2[1] = puVar2;
                    puVar2 = puVar2 + 2;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                puVar2 = puVar1 + 0x1b;
                *puVar2 = *0x26d10;
                puVar1[0x1c] = 0x26d10;
                (*0x26d10)[1] = puVar2;
                *0x26d10 = puVar2;
                return puVar1;
            }
        }
        puVar1 = NULL;
    }
    return puVar1;
}


/* fcn.0001a804 @ 0x1a804 */

int64_t fcn.0001a804(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    unkbyte7 Var2;
    uint64_t auStackX_18 [2];
    
    Var2 = arg4 >> 8;
    auStackX_18[0] = arg3;
    iVar1 = fcn.0001d634(0x26e88);
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    else {
        fcn.000167dc(arg1 & 0xffffffff,arg2,arg3,CONCAT71(Var2,arg4));
        *0x26e98 = 1;
        fcn.0001bc20(*0x26e90);
        if (arg1_00 != 0) {
            if (arg4 != '\0') {
                fcn.0001dbc0(arg1_00,arg2);
            }
            auStackX_18[0] = auStackX_18[0] & 0xffffffffffffff00;
            if (*0x27b30 != NULL) {
                (***0x27b30)(*0x27b30,auStackX_18);
            }
        }
        iVar1 = arg1_00;
    }
    return iVar1;
}


/* fcn.0001ac24 @ 0x1ac24 */

ulong fcn.0001ac24(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int *piVar2;
    int iVar3;
    bool bVar4;
    bool bVar5;
    int64_t arg1_00;
    ulong *puVar6;
    ulong *arg1_01;
    int64_t *piVar7;
    ulong *puVar8;
    int *arg2_00;
    int64_t iVar9;
    uint64_t uVar10;
    
    arg2_00 = arg1 + -0x18;
    iVar3 = *arg2_00;
    if (((((iVar3 + 0xcf9b9790U & 0xfeffffff) != 0) ||
         (uVar10 = *(arg1 + -8), *((uVar10 - 0x10) + arg2_00) != 0x6c617470)) || (uVar10 != *((uVar10 - 8) + arg2_00)))
       || (arg1_00 = fcn.0001a640(*(arg1 + -0x10)), arg1_00 == 0)) {
        return 0x8000000000000002;
    }
    *(arg1_00 + 8) = *(arg1_00 + 8) - uVar10;
    piVar1 = arg1 + -0x10;
    if (arg2 != 0) {
        *arg2 = *piVar1;
    }
    arg1_01 = NULL;
    puVar8 = 0xc;
    do {
        if (uVar10 <= *(arg1_01 * 2 + 0x26f80)) goto code_r0x0001acb9;
        arg1_01 = arg1_01 + 1;
    } while (arg1_01 < 0xc);
    arg1_01 = puVar8;
code_r0x0001acb9:
    puVar6 = NULL;
    do {
        if (0xfff < *(puVar6 * 2 + 0x26f80)) {
            puVar8 = puVar6;
            break;
        }
        puVar6 = puVar6 + 1;
    } while (puVar6 < 0xc);
    if ((arg1_01 < puVar8) && (iVar3 != 0x31646870)) {
        *(arg1 + -0x14) = arg1_01;
        *arg2_00 = 0x30726670;
        arg2_00 = arg2_00 & 0xfffffffffffff000;
        piVar7 = arg1_01 * 0x10 + 0x18 + arg1_00;
        iVar9 = *piVar7;
        *piVar1 = iVar9;
        *(arg1 + -8) = piVar7;
        *(iVar9 + 8) = piVar1;
        *piVar7 = piVar1;
        if (*arg2_00 != 0x30726670) goto code_r0x0001adab;
        bVar4 = true;
        uVar10 = 0;
        do {
            if (!bVar4) goto code_r0x0001adab;
            piVar2 = uVar10 + arg2_00;
            uVar10 = uVar10 + *(piVar2[1] * 2 + 0x26f80);
            bVar5 = false;
            if (*piVar2 == 0x30726670) {
                bVar5 = bVar4;
            }
            bVar4 = bVar5;
        } while (uVar10 < 0x1000);
        if (!bVar4) goto code_r0x0001adab;
        uVar10 = 0;
        do {
            *(*(uVar10 + 8 + arg2_00) + 8) = *(uVar10 + 0x10 + arg2_00);
            arg1_01 = *(uVar10 + 0x10 + arg2_00);
            *arg1_01 = *(uVar10 + 8 + arg2_00);
            uVar10 = uVar10 + *(*(uVar10 + 4 + arg2_00) * 2 + 0x26f80);
        } while (uVar10 < 0x1000);
        iVar9 = 1;
    }
    else {
        iVar9 = ((uVar10 & 0xfff) != 0) + (uVar10 >> 0xc);
    }
    fcn.0001abac(arg1_01,arg2_00,iVar9);
code_r0x0001adab:
    if ((0x6fffffff < *(arg1_00 + 0x10)) && (*(arg1_00 + 8) == 0)) {
        *(*(arg1_00 + 0xd8) + 8) = *(arg1_00 + 0xe0);
        **(arg1_00 + 0xe0) = *(arg1_00 + 0xd8);
        fcn.0001ac24(arg1_00,0);
    }
    return 0;
}


/* fcn.0001abac @ 0x1abac */

void fcn.0001abac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    unkbyte7 Var1;
    uint32_t auStackX_8 [2];
    
    Var1 = arg3 >> 8;
    auStackX_8[0] = arg1;
    fcn.0001d66c(0x26e88);
    fcn.00015978(arg2,arg3,CONCAT71(Var1,1),7);
    *0x26e98 = 1;
    fcn.0001bc20(*0x26e90);
    auStackX_8[0] = auStackX_8[0] & 0xffffff00;
    if (*0x27b30 != NULL) {
        (***0x27b30)(*0x27b30,auStackX_8);
    }
    return;
}


/* fcn.0001fc78 @ 0x1fc78 */

ulong fcn.0001fc78(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x27c50;
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


/* fcn.0001af14 @ 0x1af14 */

ulong fcn.0001af14(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_18;
    uint64_t *puStackX_20;
    
    iStackX_18 = 0;
    iVar1 = fcn.0001fc78(arg1,&puStackX_20);
    if ((((iVar1 == 0) && (*puStackX_20 == *arg1)) && (puStackX_20[1] == *(arg1 + 8))) &&
       ((iVar1 = fcn.00019b44(arg1,0,&iStackX_18), -1 < iVar1 && (iStackX_18 != 0)))) {
        *arg2 = iStackX_18;
        return 1;
    }
    return 0;
}


/* fcn.0001ae00 @ 0x1ae00 */

ulong fcn.0001ae00(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint *puVar2;
    uint *puVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong *in_stack_00000028;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar3 = fcn.0001f8f0(0x48);
    if (puVar3 == NULL) {
code_r0x0001ae37:
        uVar4 = 0x8000000000000009;
    }
    else {
        if (arg3 == '\0') {
            *(puVar3 + 8) = arg2;
        }
        else if (arg1_00 == 0) {
            *(puVar3 + 8) = 0;
        }
        else {
            iVar5 = fcn.0001f8f0(arg1_00);
            *(puVar3 + 8) = iVar5;
            if (iVar5 == 0) {
                fcn.0001ab70(puVar3);
                goto code_r0x0001ae37;
            }
            if (iVar5 != arg2) {
                fcn.00010430(iVar5,arg2,arg1_00);
            }
        }
        iVar5 = *0x26b88;
        puVar1 = puVar3 + 2;
        *puVar3 = 0x53535853;
        puVar2 = puVar3 + 0xc;
        *(puVar3 + 6) = puVar3;
        *(puVar3 + 10) = arg1_00;
        *puVar2 = puVar2;
        *(puVar3 + 0xe) = puVar2;
        puVar3[0x10] = arg4;
        *puVar1 = 0x26d28;
        *(puVar3 + 4) = *0x26d30;
        *0x26b88 = 0x10;
        **0x26d30 = puVar1;
        *0x26d30 = puVar1;
        fcn.0001bc20(iVar5);
        *in_stack_00000028 = *(puVar3 + 6);
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001b03c @ 0x1b03c */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.0001b03c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    ulong *puVar2;
    uint64_t uVar3;
    char cVar4;
    uint32_t uVar5;
    uint *puVar6;
    int64_t iVar7;
    int64_t *piVar8;
    ulong uVar9;
    int64_t iVar10;
    unkuint3 *pVar11;
    uint64_t uVar12;
    uint16_t uVar13;
    int iVar14;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint64_t uStackX_18;
    uint *puStackX_20;
    int64_t var_48h;
    int32_t var_50h;
    uint32_t var_58h;
    int64_t var_60h;
    uint uVar16;
    uint32_t *puVar15;
    ulong *apuStack_58 [3];
    int64_t var_18h;
    
    pVar11 = (arg2 & 0xffffffffU) + *(arg1 + 0x20);
    uVar12 = arg3;
    puVar6 = fcn.0001f924(4,0x40);
    *arg3 = puVar6;
    if (puVar6 == NULL) {
        return -0x7ffffffffffffff7;
    }
    *puVar6 = 0x53435853;
    puVar6[6] = *(pVar11 + 3);
    if (*pVar11 == 0xffffff) {
        puVar6[7] = *(pVar11 + 1);
    }
    else {
        puVar6[7] = *pVar11;
    }
    *(puVar6 + 0xc) = 0;
    *(puVar6 + 10) = 0;
    puVar6[8] = arg2;
    if (puVar6[6] == 1) {
        iVar7 = 9;
        if (puVar6[7] < 9) {
            iVar7 = -0x7ffffffffffffff2;
        }
        else {
            if (*pVar11 == 0xffffff) {
                iVar7 = 0xd;
                uVar5 = *(pVar11 + 2);
                iVar14 = *(pVar11 + 1) + -0xd;
                cVar4 = pVar11[3];
            }
            else {
                uVar5 = *(pVar11 + 1);
                iVar14 = *pVar11 - 9;
                cVar4 = pVar11[2];
            }
            puVar1 = iVar7 + pVar11;
            if (uVar5 == 0) {
                uStackX_18 = 0;
                puStackX_20 = NULL;
                goto code_r0x0001b43a;
            }
            uStackX_18 = uVar5;
            puStackX_20 = fcn.0001f8f0(uVar5);
            if (puStackX_20 == NULL) {
                iVar7 = -0x7ffffffffffffff7;
                goto code_r0x0001b314;
            }
            if (cVar4 == '\0') {
                if ((uStackX_18 != 0) && (puStackX_20 != puVar1)) {
                    fcn.00010430(puStackX_20,puVar1,uStackX_18);
                }
code_r0x0001b43a:
                iVar7 = fcn.0001ae00(uStackX_18,puStackX_20,0,*(arg1 + 0x40));
                if (-1 < iVar7) goto code_r0x0001b1e9;
            }
            else {
                if (cVar4 != '\x01') goto code_r0x0001b43a;
                iVar7 = fcn.00019b44(0x25cf0,0,apuStack_58);
                if (iVar7 < 0) {
                    iVar7 = -0x7fffffffffffffe8;
                }
                else {
                    puVar15 = auStackX_8;
                    iVar7 = (**apuStack_58[0])(apuStack_58[0],puVar1,iVar14,&uStackX_18,puVar15);
                    uVar16 = puVar15 >> 0x20;
                    if ((iVar7 < 0) || (uStackX_18 != uVar5)) {
                        fcn.0001ab70(puVar6);
                        fcn.0001ab70(puStackX_20);
                        if (-1 < iVar7) {
                            iVar7 = -0x7ffffffffffffffc;
                        }
                        goto code_r0x0001b205;
                    }
                    iVar10 = fcn.0001f8f0(auStackX_8[0]);
                    if (iVar10 == 0) {
                        iVar7 = -0x7ffffffffffffff7;
                    }
                    else {
                        iVar7 = (*apuStack_58[0][1])
                                          (apuStack_58[0],puVar1,iVar14,puStackX_20,CONCAT44(uVar16,uStackX_18),
                                           iVar10,auStackX_8[0]);
                        fcn.0001ab70(iVar10);
                        if (-1 < iVar7) goto code_r0x0001b43a;
                    }
                }
            }
code_r0x0001b465:
            fcn.0001ab70(puVar6);
            puVar6 = puStackX_20;
        }
code_r0x0001b314:
        fcn.0001ab70(puVar6);
    }
    else {
        if (puVar6[6] == 2) {
            if (*pVar11 == 0xffffff) {
                *(puVar6 + 0xc) = pVar11 + 2;
                uVar13 = *(pVar11 + 0x1a);
            }
            else {
                *(puVar6 + 0xc) = pVar11 + 1;
                uVar13 = *(pVar11 + 0x16);
            }
            cVar4 = fcn.0001af14(*(puVar6 + 0xc),apuStack_58);
            if (cVar4 == '\0') {
                if ((uVar13 & 1) == 0) {
                    auStackX_10[0] = *(arg1 + 0x40);
                    if ((uVar13 & 2) != 0) {
                        auStackX_10[0] = auStackX_10[0] | 6;
                    }
                    if (*pVar11 == 0xffffff) {
                        uVar5 = *(pVar11 + 1) - pVar11[6];
                        uVar3 = pVar11[6];
                    }
                    else {
                        uVar12 = pVar11[5];
                        uVar5 = *pVar11 - pVar11[5];
                        uVar3 = uVar12;
                    }
                    iVar7 = fcn.0001ae00(uVar5,pVar11 + uVar3,CONCAT71(uVar12 >> 8,1),auStackX_10[0]);
                    if (iVar7 < 0) goto code_r0x0001b314;
                }
                else {
                    piVar8 = fcn.0001f8f0(0x18);
                    *piVar8 = puVar6;
                    piVar8[1] = arg1;
                    uVar9 = fcn.0001fcd8(*(puVar6 + 0xc));
                    *(*piVar8 + 0x38) = uVar9;
                }
            }
            else {
                iVar7 = (**apuStack_58[0])(apuStack_58[0],pVar11,&puStackX_20,&uStackX_18,auStackX_10);
                if (iVar7 < 0) {
                    fcn.0001ab70(*arg3);
                    return -0x7fffffffffffffe8;
                }
                if ((uVar13 & 2) == 0) {
                    auStackX_10[0] = *(arg1 + 0x40);
                }
                else {
                    auStackX_10[0] = auStackX_10[0] | *(arg1 + 0x40) & 0xf;
                }
                iVar7 = fcn.0001ae00(uStackX_18,puStackX_20,0,auStackX_10[0]);
                if (iVar7 < 0) {
                    puVar6 = *arg3;
                    goto code_r0x0001b465;
                }
            }
        }
code_r0x0001b1e9:
        piVar8 = puVar6 + 2;
        *piVar8 = arg1 + 0x30;
        puVar2 = *(arg1 + 0x38);
        *(puVar6 + 4) = puVar2;
        *puVar2 = piVar8;
        iVar7 = 0;
        *(arg1 + 0x38) = piVar8;
    }
code_r0x0001b205:
    return iVar7;
}


/* fcn.0001b474 @ 0x1b474 */

int64_t fcn.0001b474(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    unkint3 *pVar5;
    uint64_t arg2_00;
    int64_t *arg3_00;
    uint8_t uVar6;
    int64_t iStackX_8;
    uint8_t uStackX_10;
    int64_t *piStackX_18;
    int64_t *piStackX_20;
    int in_stack_00000028;
    int64_t *in_stack_00000030;
    int64_t *in_stack_00000038;
    uint *in_stack_00000040;
    int64_t iStack_38;
    int64_t iStack_30;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_10 = arg2;
    iStackX_8 = 0;
    iVar3 = -0x7ffffffffffffff2;
    if (*(arg1_00 + 0x28) != 0) {
        piVar1 = arg1_00 + 0x30;
        piStackX_18 = arg3;
        piStackX_20 = arg4;
        if (((*piVar1 != piVar1) || (*(arg1_00 + 0x28) < 4)) ||
           (iVar3 = fcn.0001b03c(arg1_00,0,&iStackX_8), -1 < iVar3)) {
            iStackX_8 = *piVar1 + -8;
            iVar3 = -0x7ffffffffffffff2;
            arg3_00 = piStackX_18;
            uVar6 = uStackX_10;
            while (iVar4 = iStackX_8, uVar6 != 0) {
                if (*(iStackX_8 + 0x18) != uVar6) goto code_r0x0001b575;
                if ((uVar6 != 2) || (piStackX_20 == NULL)) break;
                pVar5 = *(iStackX_8 + 0x20) + *(arg1_00 + 0x20);
                if (*pVar5 == -1) {
                    if ((*(pVar5 + 2) == *piStackX_20) && (*(pVar5 + 4) == piStackX_20[1])) break;
                }
                else if ((*(pVar5 + 1) == *piStackX_20) && (*(pVar5 + 3) == piStackX_20[1])) break;
code_r0x0001b575:
                if (*(iStackX_8 + 0x28) == 0) {
                    if ((*(iStackX_8 + 0x18) == 2) && (uVar6 != 2)) {
                        iVar3 = -0x7fffffffffffffe8;
                    }
                }
                else {
                    if (in_stack_00000028 + 1U < 0x10) {
                        iVar3 = fcn.0001b474(*(iStackX_8 + 0x28),CONCAT71(&iStack_38 >> 8,uVar6),arg3_00,piStackX_20
                                            );
                        arg3_00 = piStackX_18;
                        uVar6 = uStackX_10;
                    }
                    else {
                        iVar3 = -0x7fffffffffffffeb;
                    }
                    if (*arg3_00 == 0) {
                        *in_stack_00000030 = iStack_38;
                        *in_stack_00000038 = iStack_30;
                        goto code_r0x0001b6d9;
                    }
                    if (iVar3 == -0x7fffffffffffffeb) {
                        return -0x7fffffffffffffeb;
                    }
                }
                piVar2 = iVar4 + 8;
                if ((piVar2 == piVar1) || (*(arg1_00 + 0x38) != piVar2)) {
                    iStackX_8 = *piVar2 + -8;
                }
                else {
                    arg2_00 = *(iVar4 + 0x1c) + *(iVar4 + 0x20) + 3 & 0xfffffffc;
                    if (*(arg1_00 + 0x28) - 4U < arg2_00) goto code_r0x0001b6db;
                    iVar4 = fcn.0001b03c(arg1_00,arg2_00,&iStackX_8);
                    if (iVar4 < 0) {
                        return iVar4;
                    }
                    arg3_00 = piStackX_18;
                    uVar6 = uStackX_10;
                }
            }
            *arg3_00 = *arg3_00 + -1;
            if (*arg3_00 != 0) goto code_r0x0001b575;
            *in_stack_00000030 = iStackX_8;
            *in_stack_00000038 = arg1_00;
            *in_stack_00000040 = *(arg1_00 + 0x40);
code_r0x0001b6d9:
            iVar3 = 0;
        }
    }
code_r0x0001b6db:
    return iVar3;
}


/* fcn.0001b8ec @ 0x1b8ec */

ulong fcn.0001b8ec(uint32_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t arg1_00;
    uint in_register_0000000c;
    char cVar4;
    ulong uVar5;
    
    arg1_00 = *0x26b88;
    cVar4 = arg2;
    *0x26b88 = 0x10;
    piVar3 = *0x26d28;
    if (*0x26d28 == 0x26d28) {
code_r0x0001b9e0:
        uVar5 = 0x8000000000000002;
    }
    else {
        for (; piVar3[2] != CONCAT44(in_register_0000000c,arg1); piVar3 = *piVar3) {
            if ((piVar3 != 0x26d28) && (*0x26d30 == piVar3)) goto code_r0x0001b9e0;
        }
        piVar1 = piVar3 + 5;
        uVar5 = 0;
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        piVar2 = *piVar1;
        while (piVar2 != piVar1) {
            piVar2 = *piVar1;
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            if (piVar2[4] != 0) {
                arg2 = CONCAT31(arg2 >> 8,1);
                fcn.0001b8ec(piVar2[4],arg2);
            }
            if (piVar2[6] != 0) {
                (**(*0x27c48 + 0x70))();
            }
            fcn.0001ab70(piVar2 + -1);
            piVar2 = *piVar1;
        }
        if (cVar4 != '\0') {
            fcn.0001ab70(piVar3[3]);
        }
        fcn.0001ab70(piVar3 + -1);
    }
    fcn.0001bc20(arg1_00);
    return uVar5;
}


/* fcn.00020474 @ 0x20474 */

ulong fcn.00020474(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    uVar1 = 4;
    if (*arg1 == -1) {
        uVar1 = 8;
    }
    uVar5 = 0;
    if (*0x27c78 != 0) {
        do {
            piVar3 = uVar5 * 0x10 + *0x27c88;
            if ((*piVar3 == *(uVar1 + arg1)) && (piVar3[1] == *(uVar1 + 8 + arg1))) {
                uVar2 = (**(*0x27c80 + uVar5 * 8))(arg1,arg2,arg3,arg4);
                return uVar2;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *0x27c78);
    }
    return 0x8000000000000003;
}


/* fcn.0001fa50 @ 0x1fa50 */

int64_t fcn.0001fa50(uint32_t arg1)

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


/* fcn.0001bb84 @ 0x1bb84 */

void fcn.0001bb84(int64_t arg1)

{
    int64_t iVar1;
    char acStackX_10 [24];
    
    if (*0x27b58 != 0) {
        if (arg1 == '\0') {
            (**(*0x27b58 + 0x10))(*0x27b58);
        }
        else if ((*0x27b30 == NULL) ||
                ((iVar1 = (***0x27b30)(*0x27b30,acStackX_10), -1 < iVar1 && (acStackX_10[0] == '\0')))) {
            (**(*0x27b58 + 8))(*0x27b58);
        }
    }
    return;
}


/* fcn.0001c530 @ 0x1c530 */

int64_t fcn.0001c530(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t unaff_RBX;
    int64_t iVar4;
    
    if (*0x26d38 == '\0') {
        iVar2 = fcn.000162c0(arg1,arg2,arg3,arg4,unaff_RBX);
    }
    else if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        fcn.0001d66c(0x26d68);
        iVar1 = *arg1;
        iVar4 = (*0x26d50 * 2 + 1) * *0x26d48;
        iVar2 = fcn.000162c0(arg1,arg2,arg3,arg4,unaff_RBX);
        if (iVar2 == -0x7ffffffffffffffb) {
            *arg1 = *arg1 + *arg4 * iVar4;
        }
        else if (iVar2 == 0) {
            uVar3 = *arg4 * iVar4;
            if (iVar1 - *arg1 < uVar3) {
                iVar2 = -0x7ffffffffffffffb;
                *arg1 = uVar3 + *arg1;
            }
            else {
                fcn.0001c164(arg1,arg2,*arg4);
            }
        }
        *0x26d78 = 1;
        fcn.0001bc20(*0x26d70);
    }
    return iVar2;
}


/* fcn.0001bfb0 @ 0x1bfb0 */

int64_t fcn.0001bfb0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    uint auStack_58 [2];
    uint64_t uStack_50;
    int64_t iStack_40;
    uint64_t uStack_38;
    
    if (auStack_58 != arg3) {
        fcn.00010430(auStack_58,arg3,0x28);
    }
    iVar6 = iStack_40 * 0x1000 + uStack_50;
    iVar4 = 0;
    puVar1 = *(arg1 + 0x30);
    do {
        do {
            puVar5 = puVar1;
            if (puVar5 == arg1 + 0x30) goto code_r0x0001c107;
            puVar1 = *puVar5;
        } while (puVar5[2] < uStack_50);
        *arg2 = auStack_58[0];
        *(arg2 + 8) = uStack_50;
        *(arg2 + 0x10) = 0;
        iVar2 = (puVar5[2] - uStack_50 >> 0xc) + ((puVar5[2] - uStack_50 & 0xfff) != 0);
        *(arg2 + 0x18) = iVar2;
        *(arg2 + 0x20) = uStack_38 | 0x4000;
        if (iVar2 != 0) {
            arg2 = arg2 + arg4;
            iVar4 = iVar4 + 1;
        }
        *arg2 = auStack_58[0];
        *(arg2 + 8) = puVar5[2];
        *(arg2 + 0x10) = 0;
        iVar2 = ((puVar5[3] & 0xfff) != 0) + (puVar5[3] >> 0xc);
        *(arg2 + 0x18) = iVar2;
        *(arg2 + 0x20) = uStack_38 & 0xffffffffffffbfff | 0x20000;
        if (iVar2 != 0) {
            arg2 = arg2 + arg4;
            iVar4 = iVar4 + 1;
        }
        uStack_50 = (-((puVar5[3] & 0xfff) != 0) & 0x1000) + (puVar5[3] & 0xfffffffffffff000) + puVar5[2];
        uVar3 = iVar6 - uStack_50;
    } while (((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc) != 0);
code_r0x0001c107:
    uVar3 = *(arg1 + 0x20) + *(arg1 + 0x18);
    if (uStack_50 < uVar3) {
        uVar3 = uVar3 - uStack_50;
        *(arg2 + 0x10) = 0;
        *arg2 = auStack_58[0];
        *(arg2 + 8) = uStack_50;
        *(arg2 + 0x18) = ((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc);
        iVar4 = iVar4 + 1;
        *(arg2 + 0x20) = uStack_38 | 0x4000;
    }
    return iVar4;
}


/* fcn.000162c0 @ 0x162c0 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

ulong * fcn.000162c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h)

{
    ulong *puVar1;
    int64_t *piVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint64_t uVar9;
    int iVar10;
    ulong *puVar11;
    uint32_t uVar12;
    uint64_t uStackX_8;
    uint *in_stack_00000028;
    int64_t var_40h;
    ulong auStack_88 [3];
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t var_50h;
    uint32_t uStack_50;
    int iStack_4c;
    int64_t var_38h;
    int64_t var_30h;
    uint32_t var_28h;
    uint32_t var_20h;
    int32_t var_bp_18h;
    uint32_t var_14h;
    
    puVar7 = NULL;
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    fcn.0001d66c(0x26100);
    puVar8 = puVar7;
    for (puVar1 = *0x261e0; puVar1 != 0x261e0; puVar1 = *puVar1) {
        if (((*(puVar1 + 6) == 4) || (*(puVar1 + 6) == 1)) || ((*(puVar1 + 6) == 3 && (puVar1[5] < 0)))) {
            puVar8 = puVar8 + 1;
        }
    }
    if (arg4 != 0) {
        *arg4 = 0x30;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = 1;
    }
    fcn.0001d66c(0x26e88);
    uVar9 = puVar8 * 0x30;
    if ((*0x267d8 == '\0') && (puVar1 = puVar7, puVar8 = *0x26e78, *0x267c8 != 0)) {
        for (; puVar8 != 0x26e78; puVar8 = *puVar8) {
            if ((((*(puVar8 + 0x14) == 4) && (puVar8[3] <= *0x267b8 + 1U)) && (*0x267b0 <= puVar8[4] + 1)) &&
               (uVar12 = puVar1 + 1, puVar1 = uVar12, 0x3f < uVar12)) {
                *0x267d8 = '\x01';
                break;
            }
        }
    }
    piVar2 = 0x26708;
    do {
        if ((piVar2[2] != '\0') && (*piVar2 != 0)) {
            uVar9 = uVar9 + 0x30;
        }
        piVar2 = piVar2 + 6;
        puVar1 = *0x26e78;
    } while (piVar2 < 0x269d8);
    for (; puVar1 != 0x26e78; puVar1 = *puVar1) {
        puVar5 = 0x266f0;
        puVar8 = puVar7;
        do {
            uVar12 = puVar8;
            if ((puVar5[5] != '\0') && (puVar5[3] != 0)) {
                if (*(puVar1 + 0x14) == uVar12) {
                    if ((puVar1[3] <= puVar5[1] + 1) && (*puVar5 <= puVar1[4] + 1)) break;
                }
                else if ((*puVar5 <= puVar1[3]) && (puVar1[4] <= puVar5[1])) {
                    if (*(puVar1 + 0x14) != 7) {
                        uVar9 = uVar9 + 0x60;
                    }
                    break;
                }
            }
            uVar12 = uVar12 + 1;
            puVar8 = uVar12;
            puVar5 = puVar5 + 6;
        } while (puVar5 < 0x269c0);
        if (uVar12 == 0xf) {
            uVar9 = uVar9 + 0x30;
        }
    }
    if (*arg1 < uVar9) {
        puVar7 = 0x8000000000000005;
    }
    else {
        if (arg2 != 0) {
            if (uVar9 != 0) {
                fcn.00010470(arg2,uVar9);
            }
            uVar12 = arg2;
            puVar3 = arg2;
            for (puVar1 = *0x26e78; puVar1 != 0x26e78; puVar1 = *puVar1) {
                uVar4 = *(puVar1 + 0x14);
                *puVar3 = uVar4;
                *(puVar3 + 2) = puVar1[3];
                *(puVar3 + 4) = puVar1[5];
                *(puVar3 + 6) = (puVar1[4] - puVar1[3]) + 1 >> 0xc;
                if (uVar4 == 7) {
                    piVar2 = 0x26708;
                    puVar8 = puVar7;
                    do {
                        if ((((piVar2[2] != '\0') && (*piVar2 != 0)) && (piVar2[-3] <= puVar1[3])) &&
                           (puVar1[4] <= piVar2[-2])) {
                            *puVar3 = puVar8;
                        }
                        uVar4 = puVar8 + 1;
                        puVar8 = uVar4;
                        piVar2 = piVar2 + 6;
                    } while (uVar4 < 0xf);
                }
                uVar9 = puVar1[6];
                *(puVar3 + 8) = uVar9;
                if ((*puVar3 < 0xf) && (*(*puVar3 * 0x30 + 0x26719) != '\0')) {
                    *(puVar3 + 8) = uVar9 | 0x8000000000000000;
                }
                puVar3 = fcn.00016258(uVar12,puVar3);
            }
            fcn.00010470(auStack_88,0x50);
            uVar9 = uStack_50;
            puVar11 = 0x261e0;
            puVar8 = *0x261e0;
            puVar1 = puVar7;
            do {
                iVar10 = uVar9;
                if (((puVar8 == puVar11) || (puVar1 = puVar8 + -1, iStack_60 != puVar8[4])) ||
                   ((var_50h != puVar8[5] || ((iVar10 != *(puVar8 + 6) || (iStack_4c != *(puVar8 + 0x34))))))) {
                    if (iVar10 == 1) {
code_r0x0001660c:
                        *(puVar3 + 2) = iStack_70;
                        puVar3[4] = 0;
                        puVar3[5] = 0;
                        *(puVar3 + 6) = (iStack_68 - iStack_70) + 1U >> 0xc;
                        *(puVar3 + 8) = iStack_60 & 0xe701f | var_50h & 0xbfffffffffffffffU;
                        if (uStack_50 == 1) {
                            *puVar3 = 0;
                            *(puVar3 + 8) = *(puVar3 + 8) & 0x7fffffffffffffff;
                        }
                        else if (uStack_50 == 3) {
                            *puVar3 = ((var_50h & 0x4000000000000000U) != 0) + 0xb;
                        }
                        uVar9 = uStack_50;
                        puVar3 = fcn.00016258(uVar12,puVar3);
code_r0x0001669b:
                        if (uVar9 == 4) {
                            *(puVar3 + 2) = iStack_70;
                            puVar3[4] = 0;
                            puVar3[5] = 0;
                            *(puVar3 + 6) = (iStack_68 - iStack_70) + 1U >> 0xc;
                            *puVar3 = 0xe;
                            *(puVar3 + 8) = iStack_60 & 0xe701f | var_50h | 0x8000;
                            puVar3 = fcn.00016258(uVar12,puVar3);
                            uVar9 = uStack_50;
                        }
                    }
                    else {
                        if (iVar10 != 3) goto code_r0x0001669b;
                        if ((var_50h & 0x8000000000000000U) != 0) goto code_r0x0001660c;
                    }
                    if (puVar8 == puVar11) goto code_r0x00016726;
                    if ((puVar1 != NULL) && (auStack_88 != puVar1)) {
                        fcn.00010430(auStack_88,puVar1,0x50);
                        uVar9 = uStack_50;
                        puVar11 = 0x261e0;
                    }
                }
                else {
                    iStack_68 = puVar8[3];
                }
                puVar8 = *puVar8;
            } while( true );
        }
        puVar7 = 0x8000000000000002;
    }
code_r0x00016781:
    if (arg3 != 0) {
        *arg3 = *0x27b78;
    }
    *0x26e98 = 1;
    fcn.0001bc20(*0x26e90);
    *0x26110 = 1;
    fcn.0001bc20(*0x26108);
    *arg1 = uVar9;
    return puVar7;
code_r0x00016726:
    uStackX_8 = puVar3 - arg2;
    if (arg2 < puVar3) {
        puVar5 = arg2 + 0x20;
        iVar6 = (puVar3 + (-1 - arg2)) / 0x30 + 1;
        do {
            *puVar5 = *puVar5 & 0xfffffffffffd9fff;
            puVar5 = puVar5 + 6;
            iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
    }
    fcn.0001bf08(uVar12,&uStackX_8,0x30);
    uVar9 = uStackX_8;
    goto code_r0x00016781;
}


/* fcn.0001c164 @ 0x1c164 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Variable defined which should be unmapped: var_38h

void fcn.0001c164(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint *puVar2;
    int *piVar3;
    ulong *puVar4;
    int *arg1_00;
    ulong *puVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint *puVar10;
    uint *puVar11;
    int64_t iVar12;
    uint *puVar13;
    bool bVar14;
    int64_t iStackX_10;
    ulong *puStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    uint32_t var_58h_2;
    int64_t var_60h;
    int64_t iStack_98;
    uint auStack_70 [2];
    uint64_t uStack_68;
    int64_t var_58h;
    int64_t var_50h_2;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_18h;
    int64_t var_10h;
    
    iStackX_10 = 0;
    iStackX_20 = 0;
    iVar9 = (*0x26d50 * 2 + 1) * *0x26d48;
    iVar1 = iVar9 + -1 + *arg1 / arg3;
    iStack_98 = *arg1 / arg3 - 1;
    if (-1 < iStack_98) {
        puVar11 = iStack_98 * arg3 + arg2;
        do {
            iVar8 = 0;
            uVar6 = *(puVar11 + 2);
            uVar7 = *(puVar11 + 6) * 0x1000 + uVar6;
            do {
                for (puVar4 = *0x26d58; puVar4 != 0x26d58; puVar4 = *puVar4) {
                    puVar5 = puVar4 + -1;
                    if ((uVar6 <= puVar4[2]) && (puVar4[2] + puVar4[3] <= uVar7)) goto code_r0x0001c224;
                }
                puVar5 = NULL;
code_r0x0001c224:
                if (puVar5 == NULL) break;
                uVar6 = puVar5[4] + puVar5[3];
                iVar8 = iVar8 + puVar5[5] * 2 + 1;
            } while (uVar6 < uVar7);
            iVar12 = iVar8 + -1;
            if (iVar8 == 0) {
                iVar12 = 0;
            }
            puVar10 = (iVar1 - iVar12) * arg3 + arg2;
            if (iVar12 == 0) {
                if ((arg3 != 0) && (puVar10 != puVar11)) {
                    fcn.00010430(puVar10,puVar11,arg3);
                }
                iStackX_10 = 0;
            }
            else {
                iStackX_10 = 0;
                if (auStack_70 != puVar11) {
                    fcn.00010430(auStack_70,puVar11,0x28);
                }
                uVar6 = var_50h_2 * 0x1000 + uStack_68;
                puStackX_18 = NULL;
                puVar2 = puVar10;
                do {
                    for (puVar4 = *0x26d58; puVar4 != 0x26d58; puVar4 = *puVar4) {
                        puVar5 = puVar4 + -1;
                        if ((uStack_68 <= puVar4[2]) && (puVar4[2] + puVar4[3] <= uVar6)) goto code_r0x0001c2f1;
                    }
                    puVar5 = NULL;
code_r0x0001c2f1:
                    if (puVar5 == NULL) {
                        if ((uStack_68 < uVar6) && (puStackX_18 != NULL)) {
                            if ((*(puVar2 + (0x20 - arg3)) & 0x4000) == 0) {
                                *puVar2 = auStack_70[0];
                                *(puVar2 + 4) = 0;
                                *(puVar2 + 2) = uStack_68;
                                *(puVar2 + 6) = var_50h_2;
                                *(puVar2 + 8) = var_48h | 0x4000;
                                iStackX_10 = iStackX_10 + 1;
                            }
                            else {
                                uVar6 = uVar6 - *(puVar2 + (8 - arg3));
                                *(puVar2 + (0x18 - arg3)) = ((uVar6 & 0xfff) != 0) + (uVar6 >> 0xc);
                            }
                        }
                        break;
                    }
                    iVar8 = fcn.0001bfb0(puVar5,puVar2,auStack_70,arg3);
                    uStack_68 = puVar5[4] + puVar5[3];
                    iStackX_10 = iStackX_10 + iVar8;
                    puVar2 = puVar2 + iVar8 * arg3;
                    var_50h_2 = ((uVar6 - uStack_68 & 0xfff) != 0) + (uVar6 - uStack_68 >> 0xc);
                    puStackX_18 = puVar5;
                } while (uStack_68 < uVar6);
                iStackX_10 = iStackX_10 + -1;
            }
            iVar1 = (iVar12 - iStackX_10) + (iVar1 - iVar12);
            puVar2 = iVar1 * arg3 + arg2;
            if ((iStackX_10 * arg3 != 0) && (puVar2 != puVar10)) {
                fcn.00010430(puVar2,puVar10,iStackX_10 * arg3);
            }
            iVar1 = iVar1 + -1;
            iStackX_10 = iStackX_20 + iStackX_10;
            puVar11 = puVar11 - arg3;
            iStack_98 = iStack_98 + -1;
            iStackX_20 = iStackX_10;
        } while (-1 < iStack_98);
    }
    iVar9 = (iVar9 - iStackX_10) * arg3 + arg2;
    iVar1 = *arg1 + iStackX_10 * arg3;
    if ((iVar1 != 0) && (arg2 != iVar9)) {
        fcn.00010430(arg2,iVar9,iVar1);
    }
    *arg1 = *arg1 + iStackX_10 * arg3;
    puVar11 = arg2 + arg3;
    puVar10 = *arg1 + arg2;
    if (arg2 < puVar10) {
        puVar2 = arg2;
        puVar13 = puVar11;
        do {
            for (; puVar11 < puVar10; puVar11 = puVar11 + arg3) {
                if (*(puVar11 + 2) < *(puVar13 + (8 - arg3))) {
                    if (auStack_70 != puVar2) {
                        fcn.00010430(auStack_70,puVar2,0x28);
                    }
                    if (puVar2 != puVar11) {
                        fcn.00010430(puVar2,puVar11,0x28);
                    }
                    if (puVar11 != auStack_70) {
                        fcn.00010430(puVar11,auStack_70,0x28);
                    }
                }
            }
            puVar11 = puVar13 + arg3;
            bVar14 = puVar13 < puVar10;
            puVar2 = puVar13;
            puVar13 = puVar11;
        } while (bVar14);
    }
    iVar1 = *arg1;
    for (piVar3 = arg2; piVar3 < iVar1 + arg2; piVar3 = piVar3 + arg3) {
        if ((*piVar3 == 6) || (*piVar3 - 0xbU < 2)) {
            *(piVar3 + 8) = *(piVar3 + 8) | 0x4000;
        }
    }
    iVar1 = *arg1;
    piVar3 = arg2;
    arg1_00 = arg2;
    while (piVar3 < iVar1 + arg2) {
        if (arg1_00 != piVar3) {
            var_38h = 0x1bf50;
            fcn.00010430(arg1_00,piVar3,0x28);
        }
        while ((((piVar3 = piVar3 + arg3, piVar3 < iVar1 + arg2 && (*arg1_00 == *piVar3)) &&
                (*(arg1_00 + 8) == *(piVar3 + 8))) && (*(arg1_00 + 6) * 0x1000 + *(arg1_00 + 2) == *(piVar3 + 2)))) {
            *(arg1_00 + 6) = *(arg1_00 + 6) + *(piVar3 + 6);
        }
        arg1_00 = arg1_00 + arg3;
    }
    *arg1 = arg1_00 - arg2;
    return;
}


/* fcn.0001c6c0 @ 0x1c6c0 */

void fcn.0001c6c0(void)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    ulong uVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong *puVar8;
    ulong *puVar9;
    ulong *puVar10;
    
    for (puVar9 = *0x26d58; puVar10 = *puVar9, puVar9 != 0x26d58; puVar9 = *puVar9) {
        for (; puVar10 != 0x26d58; puVar10 = *puVar10) {
            uVar3 = puVar9[2];
            if (puVar10[2] < uVar3) {
                uVar4 = puVar9[3];
                piVar1 = puVar9 + 5;
                uVar5 = puVar9[4];
                puVar9[2] = puVar10[2];
                puVar9[3] = puVar10[3];
                puVar9[4] = puVar10[4];
                puVar10[2] = uVar3;
                piVar2 = puVar10 + 5;
                puVar10[3] = uVar4;
                puVar10[4] = uVar5;
                if (piVar1 != piVar2) {
                    *(*piVar1 + 8) = puVar9[6];
                    *puVar9[6] = *piVar1;
                    iVar6 = *piVar2;
                    iVar7 = *piVar1;
                    *piVar1 = iVar6;
                    puVar9[6] = piVar2;
                    *(iVar6 + 8) = piVar1;
                    *piVar2 = piVar1;
                    puVar9[6] = puVar10[6];
                    *puVar10[6] = *piVar2;
                    *piVar2 = iVar7;
                    puVar8 = *(iVar7 + 8);
                    puVar10[6] = puVar8;
                    *puVar8 = piVar2;
                    *(iVar7 + 8) = piVar2;
                }
            }
        }
    }
    return;
}


/* fcn.0001ca2c @ 0x1ca2c */

void fcn.0001ca2c(int64_t arg1)

{
    for (; (arg1 & 0xffffffff00000000U) != 0; arg1 = arg1 - 0xffffffff) {
        (***0x27b28)(*0x27b28,0xffffffff);
    }
    //WARNING: Could not recover jumptable at 0x0001ca83. Too many branches
    //WARNING: Treating indirect jump as call
    (***0x27b28)(*0x27b28,arg1 & 0xffffffff);
    return;
}


/* fcn.0001cd64 @ 0x1cd64 */

int64_t fcn.0001cd64(int64_t arg1)

{
    char *pcVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint8_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t *piVar10;
    uint8_t uVar11;
    uint8_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t *puVar15;
    uint64_t uVar16;
    int64_t iVar17;
    char cVar18;
    uint64_t uVar19;
    char cVar20;
    char cVar21;
    char cVar22;
    char cVar23;
    char cVar24;
    char cVar25;
    char cVar26;
    char cVar27;
    char cVar28;
    char cVar29;
    char cVar30;
    char cVar31;
    char cVar32;
    char cVar33;
    char cVar34;
    char cVar35;
    uint32_t auStackX_10 [2];
    uint64_t uStackX_18;
    int64_t iStackX_20;
    ulong auStack_58 [3];
    
    puVar2 = *(arg1 + 8);
    iVar7 = *(arg1 + 0x68);
    uVar9 = 0;
    iVar6 = (**puVar2)(puVar2,auStackX_10);
    if (-1 < iVar6) {
        uStackX_18 = *(iVar7 + 0x20);
        if ((auStackX_10[0] & 0x400) == 0) {
            *(arg1 + 0x9e) = 0;
            iVar6 = fcn.0001f8f0(uStackX_18);
            *(arg1 + 0x70) = iVar6;
            if (iVar6 == 0) {
                return -0x7ffffffffffffff7;
            }
        }
        else {
            *(arg1 + 0x9e) = 1;
            iVar6 = (*puVar2[2])(puVar2,auStack_58);
            if (iVar6 < 0) {
                return iVar6;
            }
            *(arg1 + 0x70) = auStack_58[0];
        }
        iVar6 = 0;
        iVar17 = *(arg1 + 0x70);
        *(arg1 + 0x78) = iVar17 + uStackX_18;
        if (*(arg1 + 0x9e) == '\0') {
            iStackX_20 = 0;
            for (puVar15 = iVar7 + 0x38; (uVar19 = 0, *puVar15 != 0 || (puVar15[1] != 0)); puVar15 = puVar15 + 2) {
                uStackX_18 = puVar15[1];
                if (*puVar15 != 0) {
                    do {
                        iVar6 = (*puVar2[4])(puVar2,iVar6,0,&uStackX_18,iVar17);
                        if (iVar6 < 0) goto code_r0x0001d20d;
                        uVar19 = uVar19 + 1;
                        iVar17 = iVar17 + puVar15[1];
                        iVar6 = iStackX_20 + 1;
                        iStackX_20 = iVar6;
                    } while (uVar19 < *puVar15);
                }
            }
        }
        iVar6 = 0;
        cVar18 = '\0';
        if ((auStackX_10[0] & 0x800) == 0) {
            *(arg1 + 0x9c) = 0;
        }
        else {
            *(arg1 + 0x9c) = 1;
        }
        iVar17 = arg1 + 0x88;
        *iVar17 = iVar17;
        *(arg1 + 0x90) = iVar17;
        uVar19 = *(arg1 + 0x70);
        if (*(iVar7 + 0x34) == 0) {
            iVar7 = *(iVar7 + 0x30) + uVar19;
        }
        else {
            iVar7 = *(iVar7 + 0x34) + uVar19;
            iVar7 = *(iVar7 + 0x10) + iVar7;
        }
        iVar3 = *(arg1 + 0x78);
        uVar16 = iVar7 + (-iVar7 & 7);
        if (uVar19 <= uVar16) {
            do {
                if (iVar3 - 0x18U < uVar16) goto code_r0x0001cf77;
                if (cVar18 != '\0') {
                    fcn.0001ab70(uVar9);
                    cVar18 = '\0';
                }
                uVar8 = 0;
                uVar19 = iVar3 - uVar16;
                if (0x18 < uVar19) {
                    uVar19 = 0x18;
                }
                uVar14 = uVar8;
                if (uVar19 == 0) break;
                while (*(uVar14 + uVar16) == (*(arg1 + 0x9c) != '\x01') + -1) {
                    uVar14 = uVar14 + 1;
                    if (uVar19 <= uVar14) goto code_r0x0001cf71;
                }
                uVar5 = *(uVar16 + 0x17);
                if (*(arg1 + 0x9c) != '\0') {
                    uVar5 = ~uVar5;
                }
                uVar13 = 0x80;
                do {
                    if ((uVar5 & uVar13) != 0) break;
                    uVar11 = uVar13 >> 1;
                    uVar13 = uVar11;
                } while (uVar11 != 0);
                uVar5 = uVar13;
                if ((uVar5 < 0x11) && ((0x10114U >> (uVar13 & 0x1f) & 1) != 0)) {
                    uVar11 = *(uVar16 + 0x13) & 1;
                    if (uVar11 == 0) {
                        cVar20 = '\0';
                        do {
                            cVar20 = cVar20 + *(uVar8 + uVar16);
                            uVar8 = uVar8 + 1;
                        } while (uVar8 < 0x18);
                    }
                    else {
                        cVar20 = '\0';
                        cVar21 = '\0';
                        cVar22 = '\0';
                        cVar23 = '\0';
                        cVar24 = '\0';
                        cVar25 = '\0';
                        cVar26 = '\0';
                        cVar27 = '\0';
                        cVar28 = '\0';
                        cVar29 = '\0';
                        cVar30 = '\0';
                        cVar31 = '\0';
                        cVar32 = '\0';
                        cVar33 = '\0';
                        cVar34 = '\0';
                        cVar35 = '\0';
                        do {
                            pcVar1 = uVar8 + uVar16;
                            uVar8 = uVar8 + 0x10;
                            cVar20 = *pcVar1 + cVar20;
                            cVar21 = pcVar1[1] + cVar21;
                            cVar22 = pcVar1[2] + cVar22;
                            cVar23 = pcVar1[3] + cVar23;
                            cVar24 = pcVar1[4] + cVar24;
                            cVar25 = pcVar1[5] + cVar25;
                            cVar26 = pcVar1[6] + cVar26;
                            cVar27 = pcVar1[7] + cVar27;
                            cVar28 = pcVar1[8] + cVar28;
                            cVar29 = pcVar1[9] + cVar29;
                            cVar30 = pcVar1[10] + cVar30;
                            cVar31 = pcVar1[0xb] + cVar31;
                            cVar32 = pcVar1[0xc] + cVar32;
                            cVar33 = pcVar1[0xd] + cVar33;
                            cVar34 = pcVar1[0xe] + cVar34;
                            cVar35 = pcVar1[0xf] + cVar35;
                        } while (uVar8 < 0x20);
                        cVar20 = cVar20 + cVar28 + cVar24 + cVar32 + cVar22 + cVar30 + cVar26 + cVar34 +
                                 cVar21 + cVar29 + cVar25 + cVar33 + cVar23 + cVar31 + cVar27 + cVar35;
                    }
                    if (cVar20 - *(uVar16 + 0x11) != *(uVar16 + 0x17)) goto code_r0x0001d1bb;
                    uVar9 = uVar16;
                    if (((*(uVar16 + 0x13) & 0x40) != 0) && (*(arg1 + 0x9e) != '\0')) {
                        if (uVar11 == 0) {
                            uVar13 = *(uVar16 + 0x14);
                        }
                        else {
                            uVar13 = *(uVar16 + 0x18);
                        }
                        uVar9 = fcn.0001f974(4,uVar13,uVar16);
                        if (uVar9 != 0) {
                            cVar18 = '\x01';
                            goto code_r0x0001d08b;
                        }
code_r0x0001d1e7:
                        iVar6 = -0x7ffffffffffffff7;
                        goto code_r0x0001d1fd;
                    }
code_r0x0001d08b:
                    uVar19 = 0;
                    uVar5 = *(uVar9 + 0x17);
                    uVar11 = uVar5;
                    if (*(arg1 + 0x9c) != '\0') {
                        uVar11 = ~uVar5;
                    }
                    uVar12 = 0x80;
                    do {
                        if ((uVar11 & uVar12) != 0) break;
                        uVar12 = uVar12 >> 1;
                    } while (uVar12 != 0);
                    if (((uVar12 - 4 & 0xf3) != 0) || (uVar12 == 0xc)) goto code_r0x0001d1f3;
                    cVar21 = -0x56;
                    cVar20 = '\0';
                    if ((*(uVar9 + 0x13) & 0x40) != 0) {
                        if ((*(uVar9 + 0x13) & 1) == 0) {
                            cVar21 = '\0';
                            if (*(uVar9 + 0x14) != 0x18) {
                                do {
                                    cVar20 = cVar21 + *(uVar19 + 0x18 + uVar9);
                                    uVar19 = uVar19 + 1;
                                    cVar21 = cVar20;
                                } while (uVar19 < *(uVar9 + 0x14) - 0x18);
                            }
                        }
                        else {
                            cVar21 = '\0';
                            if (*(uVar9 + 0x18) != 0x20) {
                                do {
                                    cVar20 = cVar21 + *(uVar19 + 0x20 + uVar9);
                                    uVar19 = uVar19 + 1;
                                    cVar21 = cVar20;
                                } while (uVar19 < *(uVar9 + 0x18) - 0x20);
                            }
                        }
                        cVar21 = -cVar20;
                    }
                    if (*(uVar9 + 0x11) != cVar21) goto code_r0x0001d1f3;
                    if (((*(uVar9 + 0x13) & 1) == 0) || (*(arg1 + 0x9d) != '\0')) {
                        if (*(arg1 + 0x9c) != '\0') {
                            uVar5 = ~uVar5;
                        }
                        uVar11 = 0x80;
                        do {
                            if ((uVar5 & uVar11) != 0) break;
                            uVar11 = uVar11 >> 1;
                        } while (uVar11 != 0);
                        if (uVar11 != 0x10) {
                            piVar10 = fcn.0001f924(4,0x28);
                            if (piVar10 == NULL) goto code_r0x0001d1e7;
                            *(piVar10 + 4) = cVar18;
                            cVar18 = '\0';
                            piVar10[2] = uVar9;
                            *piVar10 = iVar17;
                            puVar2 = *(arg1 + 0x90);
                            piVar10[1] = puVar2;
                            *puVar2 = piVar10;
                            *(arg1 + 0x90) = piVar10;
                        }
                        if ((*(uVar9 + 0x13) & 1) == 0) {
                            uVar19 = *(uVar9 + 0x14);
                        }
                        else {
                            uVar19 = *(uVar9 + 0x18);
                        }
                        uVar16 = uVar16 + 7 + uVar19;
                    }
                    else {
                        uVar16 = uVar16 + 7 + *(uVar9 + 0x18);
                    }
                    uVar16 = uVar16 & 0xfffffffffffffff8;
                }
                else {
code_r0x0001d1bb:
                    if ((uVar5 != 0x20) && (uVar5 != 1)) {
code_r0x0001d1f3:
                        iVar6 = -0x7ffffffffffffff6;
code_r0x0001d1fd:
                        if (cVar18 != '\0') {
                            fcn.0001ab70(uVar9);
                        }
code_r0x0001d20d:
                        puVar2 = *(arg1 + 0x88);
                        while (puVar2 != arg1 + 0x88) {
                            puVar4 = *puVar2;
                            if (puVar2[3] != 0) {
                                fcn.0001b8ec(puVar2[3],0);
                            }
                            if (*(puVar2 + 4) != '\0') {
                                fcn.0001ab70(puVar2[2]);
                            }
                            fcn.0001ab70(puVar2);
                            puVar2 = puVar4;
                        }
                        if (*(arg1 + 0x9e) == '\0') {
                            fcn.0001ab70(*(arg1 + 0x70));
                        }
                        fcn.0001ab70(*(arg1 + 0x68));
                        goto code_r0x0001cf77;
                    }
                    uVar16 = uVar16 + (-((*(uVar16 + 0x13) & 1) != 0) & 8) + 0x18;
                }
            } while (*(arg1 + 0x70) <= uVar16);
code_r0x0001cf71:
            iVar6 = 0;
        }
    }
code_r0x0001cf77:
    return iVar6;
}


/* fcn.0001d690 @ 0x1d690 */

int64_t fcn.0001d690(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t noname_1;
    int64_t iVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    ulong *puStackX_8;
    
    puStackX_8 = NULL;
    if (arg2 != '\0') {
        puVar3 = *0x27c28;
        while ((*0x26e48 < 5 && (arg1 >> (*(*0x26e48 * -8 + 0x26e70) & 0x3f) != 0))) {
            if (puVar3 != NULL) {
                uVar5 = *(*0x26e48 * -8 + 0x26e40) * 8 + 8;
                fcn.00015f24(0,4,((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc),&puStackX_8);
                puVar3 = puStackX_8;
                if (uVar5 != 0) {
                    fcn.00010490(puStackX_8,uVar5,0);
                }
                *puVar3 = *0x27c28;
                *0x27c28 = puVar3;
            }
            *0x26e48 = *0x26e48 + 1;
        }
    }
    piVar4 = 0x27c28;
    uVar5 = 5 - *0x26e48;
    do {
        if (4 < uVar5) {
code_r0x0001d837:
            *arg3 = piVar4;
            return 0x10000 - (arg1 >> 0xc & 0xffff);
        }
        if (*piVar4 == 0) {
            if (arg2 == '\0') {
                piVar4 = NULL;
                goto code_r0x0001d837;
            }
            noname_1 = *(uVar5 * 8 + 0x26e20) * 8 + 8;
            fcn.00015f24(0,4,((noname_1 & 0xfff) != 0) + (noname_1 >> 0xc),&puStackX_8);
            puVar3 = puStackX_8;
            if (noname_1 != 0) {
                fcn.00010490(puStackX_8,noname_1,0);
            }
            *piVar4 = puVar3;
        }
        iVar1 = uVar5 * 8;
        iVar2 = uVar5 * 8;
        uVar5 = uVar5 + 1;
        piVar4 = *piVar4 + (arg1 >> (*(iVar1 + 0x26e50) & 0x3f) & *(iVar2 + 0x26e20)) * 8;
    } while( true );
}


/* fcn.000104d0 @ 0x104d0 */

int64_t fcn.000104d0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    int64_t *piVar1;
    
    piVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *piVar1 = arg2;
        piVar1 = piVar1 + 1;
    }
    return arg1;
}


/* fcn.0001db88 @ 0x1db88 */

void fcn.0001db88(int64_t arg1)

{
    if (*0x27b58 != 0) {
        *0x27c20 = 1;
        (**(*0x27b58 + 0x38))(*0x27b58,arg1,0x1000,0x2000);
        *0x27c20 = 0;
    }
    return;
}


/* fcn.0001d964 @ 0x1d964 */

void fcn.0001d964(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t noname_1;
    uint64_t uVar2;
    uint64_t *arg1_00;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint64_t *puStackX_10;
    
    if (arg2 != 0) {
        uVar3 = arg2;
        do {
            uVar1 = fcn.0001d690(arg1,CONCAT71(arg2 >> 8,1),&puStackX_10);
            uVar2 = uVar3;
            if (uVar1 < uVar3) {
                uVar2 = uVar1;
            }
            uVar4 = arg1 >> 0xc & 0x3f;
            if (uVar4 + uVar2 < 0x40) {
                uVar5 = 0;
                noname_1 = 0;
                uVar1 = uVar2;
            }
            else {
                uVar5 = uVar4 + uVar2 & 0x3f;
                noname_1 = uVar2 - (-uVar4 & 0x3f) >> 6;
                uVar1 = -uVar4 & 0x3f;
            }
            arg1_00 = puStackX_10;
            if (uVar1 != 0) {
                *puStackX_10 = *puStackX_10 & ~((1LL << (uVar1 & 0x3f)) + -1 << uVar4);
                arg1_00 = puStackX_10 + 1;
            }
            arg2 = noname_1;
            if (noname_1 != 0) {
                if (noname_1 != 0) {
                    fcn.000104d0(arg1_00,noname_1,0);
                }
                arg1_00 = arg1_00 + noname_1;
            }
            if (uVar5 != 0) {
                *arg1_00 = *arg1_00 & ~((1LL << uVar5) - 1U);
            }
            uVar3 = uVar3 - uVar2;
            arg1 = arg1 + uVar2 * 0x1000;
        } while (uVar3 != 0);
    }
    return;
}


/* fcn.0001dd10 @ 0x1dd10 */

void fcn.0001dd10(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    if (((arg1 != 0) && (arg2 != 0)) && (iVar3 = *arg2, iVar3 != 0)) {
        iVar4 = *arg1;
        uVar1 = fcn.0001da6c(iVar4 + -0x2000,2);
        if ((uVar1 & 2) == 0) {
            if ((uVar1 & 1) == 0) {
                iVar4 = iVar4 + -0x1000;
                iVar3 = iVar3 + 1;
            }
        }
        else {
            iVar4 = iVar4 + 0x1000;
            iVar3 = iVar3 + -1;
        }
        uVar1 = fcn.0001da6c(iVar3 * 0x1000 + iVar4,2);
        if ((uVar1 & 1) == 0) {
            iVar2 = iVar3 + 1;
            if ((uVar1 & 2) != 0) {
                iVar2 = iVar3;
            }
            iVar3 = iVar2;
        }
        else if (iVar3 != 0) {
            iVar3 = iVar3 + -1;
        }
        *arg1 = iVar4;
        *arg2 = iVar3;
    }
    return;
}


/* fcn.0001dc28 @ 0x1dc28 */

void fcn.0001dc28(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t arg1_00;
    
    if (arg2 != 0) {
        uVar1 = fcn.0001da6c(arg1 + -0x2000,2);
        if ((uVar1 & 2) == 0) {
            if (((uVar1 & 1) == 0) && (*0x27b58 != 0)) {
                *0x27c20 = 1;
                (**(*0x27b58 + 0x38))(*0x27b58,arg1 + -0x1000,0x1000,0);
                *0x27c20 = 0;
            }
        }
        else {
            fcn.0001db88(arg1);
        }
        arg1_00 = arg2 * 0x1000 + arg1;
        uVar1 = fcn.0001da6c(arg1_00,2);
        if ((uVar1 & 1) == 0) {
            if (((uVar1 & 2) == 0) && (*0x27b58 != 0)) {
                *0x27c20 = 1;
                (**(*0x27b58 + 0x38))(*0x27b58,arg1_00,0x1000,0);
                *0x27c20 = 0;
            }
        }
        else {
            fcn.0001db88(arg1_00 + -0x1000);
        }
        fcn.0001d964(arg1,arg2);
    }
    return;
}


/* fcn.0001de6c @ 0x1de6c */

ulong fcn.0001de6c(void)

{
    int64_t arg1;
    ulong uVar1;
    int64_t arg1_00;
    
    arg1_00 = 0x1000;
    if (*0x27c30 != 0) {
        arg1_00 = (*0x27c38 - *0x27c30) + 0x1000;
    }
    arg1 = fcn.0001f8f0(arg1_00);
    if (arg1 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        if (*0x27c30 != 0) {
            if ((*0x27c38 - *0x27c30 != 0) && (arg1 != *0x27c30)) {
                fcn.00010430(arg1,*0x27c30,*0x27c38 - *0x27c30);
            }
            fcn.0001ab70(*0x27c30);
        }
        *0x27c40 = *0x27c40 + (arg1 - *0x27c30);
        *0x27c38 = arg1 + arg1_00;
        uVar1 = 0;
        *0x27c30 = arg1;
    }
    return uVar1;
}


/* fcn.0001df58 @ 0x1df58 */

ulong fcn.0001df58(uint32_t *arg1)

{
    if (*0x27c40 == *0x27c30) {
        return 0x800000000000000f;
    }
    *0x27c40 = *0x27c40 + -1;
    *arg1 = **0x27c40;
    return 0;
}


/* fcn.0001df18 @ 0x1df18 */

int64_t fcn.0001df18(int64_t arg1)

{
    int64_t iVar1;
    
    if ((*0x27c40 == *0x27c38) && (iVar1 = fcn.0001de6c(), iVar1 < 0)) {
        return iVar1;
    }
    **0x27c40 = arg1;
    *0x27c40 = *0x27c40 + 1;
    return 0;
}


/* fcn.0001e1ac @ 0x1e1ac */

void fcn.0001e1ac(int64_t arg1,int64_t arg2)

{
    uint32_t auStackX_8 [8];
    
    (***(arg1 + -0x10))(*(arg1 + -0x10),auStackX_8);
    *arg2 = auStackX_8[0] & 0xfffff0ff;
    return;
}


/* fcn.0001e1d8 @ 0x1e1d8 */

int64_t fcn.0001e1d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    uint8_t auStackX_8 [8];
    uint32_t *in_stack_00000028;
    int64_t *in_stack_00000030;
    
    iVar4 = fcn.0001e1ac(arg1,auStackX_8);
    if (-1 < iVar4) {
        if ((auStackX_8[0] & 4) == 0) {
            iVar4 = -0x7ffffffffffffff1;
        }
        else if (*arg3 < 0x10) {
            do {
                piVar5 = *arg2;
                if (*arg2 == NULL) {
                    piVar5 = arg1 + 0x70;
                }
                piVar5 = *piVar5;
                if (piVar5 == arg1 + 0x70) goto code_r0x0001e2f9;
                puVar2 = piVar5[2];
                *arg2 = piVar5;
            } while ((*(puVar2 + 0x12) == -0x10) || ((*arg3 != '\0' && (*arg3 != *(puVar2 + 0x12)))));
            iVar4 = 0x26f98;
            *arg3 = *(puVar2 + 0x12);
            *arg4 = *puVar2;
            *(arg4 + 8) = puVar2[1];
            uVar1 = *(puVar2 + 0x13);
            if ((uVar1 & 2) == 0) {
                iVar4 = 0x26fa0;
            }
            uVar3 = *((uVar1 >> 3 & 7) + iVar4);
            uVar6 = uVar3 | 0x100;
            if ((uVar1 & 4) == 0) {
                uVar6 = uVar3;
            }
            *in_stack_00000028 = uVar6;
            if ((*(*(arg1 + 0x50) + 0x2c) & 0x400) != 0) {
                *in_stack_00000028 = uVar6 | 0x200;
            }
            if ((*(puVar2 + 0x13) & 1) == 0) {
                iVar4 = *(puVar2 + 0x14) - 0x18;
            }
            else {
                iVar4 = *(puVar2 + 3) - 0x20;
            }
            *in_stack_00000030 = iVar4;
            iVar4 = 0;
        }
        else {
code_r0x0001e2f9:
            iVar4 = -0x7ffffffffffffff2;
        }
    }
    return iVar4;
}


/* fcn.0001e31c @ 0x1e31c */

ulong fcn.0001e31c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *arg2_00;
    uint8_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uchar auStackX_10 [8];
    uchar *in_stack_00000028;
    uint32_t *in_stack_00000030;
    uint *in_stack_00000038;
    uint64_t uStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    
    if (arg2 == 0) {
        return 0x8000000000000002;
    }
    arg2_00 = arg1 + 0x68;
    *arg2_00 = 0;
    do {
        auStackX_10[0] = 0;
        iVar4 = fcn.0001e1d8(arg1,arg2_00,auStackX_10,&iStack_28);
        if (iVar4 < 0) {
            return 0x800000000000000e;
        }
    } while ((iStack_28 != *arg2) || (iStack_20 != *(arg2 + 8)));
    iVar4 = *(*arg2_00 + 0x10);
    if ((*(arg1 + 0x86) == '\0') || (*(*arg2_00 + 0x20) != '\0')) {
code_r0x0001e410:
        uVar2 = *arg4;
        *in_stack_00000028 = *(iVar4 + 0x12);
        iVar7 = 0x26f98;
        uVar1 = *(iVar4 + 0x13);
        if ((uVar1 & 2) == 0) {
            iVar7 = 0x26fa0;
        }
        uVar3 = *((uVar1 >> 3 & 7) + iVar7);
        uVar6 = uVar3 | 0x100;
        if ((uVar1 & 4) == 0) {
            uVar6 = uVar3;
        }
        *in_stack_00000030 = uVar6;
        if ((*(*(arg1 + 0x50) + 0x2c) & 0x400) != 0) {
            *in_stack_00000030 = uVar6 | 0x200;
        }
        *in_stack_00000038 = *(arg1 + 0x80);
        *arg4 = uStack_30;
        if (arg3 == 0) {
            return 0;
        }
        uVar5 = 0;
        iVar4 = (-((*(iVar4 + 0x13) & 1) != 0) & 8) + 0x18 + iVar4;
        if (*arg3 == 0) {
            iVar7 = fcn.0001f8f0(uStack_30);
            *arg3 = iVar7;
            if (iVar7 == 0) goto code_r0x0001e3f3;
        }
        else if (uVar2 < uStack_30) {
            uVar5 = 4;
            uStack_30 = uVar2;
        }
        if ((uStack_30 != 0) && (*arg3 != iVar4)) {
            fcn.00010430(*arg3,iVar4,uStack_30);
        }
    }
    else {
        if ((*(iVar4 + 0x13) & 1) == 0) {
            uVar6 = *(iVar4 + 0x14);
        }
        else {
            uVar6 = *(iVar4 + 0x18);
        }
        iVar4 = fcn.0001f974(4,uVar6,iVar4);
        if (iVar4 != 0) {
            *(*arg2_00 + 0x10) = iVar4;
            *(*arg2_00 + 0x20) = 1;
            goto code_r0x0001e410;
        }
code_r0x0001e3f3:
        uVar5 = 0x8000000000000009;
    }
    return uVar5;
}


/* fcn.0001b6e4 @ 0x1b6e4 */

int64_t fcn.0001b6e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t arg1_00;
    int64_t iVar2;
    unkuint3 *pVar3;
    uint64_t arg1_01;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uStackX_18;
    int64_t *in_stack_00000028;
    uint64_t *in_stack_00000030;
    uint *in_stack_00000038;
    char in_stack_00000040;
    int64_t iStack_38;
    int64_t iStack_30;
    
    arg1_00 = *0x26b88;
    iStack_38 = arg4 + 1;
    *0x26b88 = 0x10;
    if (*0x26d28 == 0x26d28) {
code_r0x0001b8bc:
        iVar6 = -0x7ffffffffffffffe;
        goto code_r0x0001b8c6;
    }
    iVar5 = 8;
    for (puVar1 = *0x26d28; puVar1[2] != arg1; puVar1 = *puVar1) {
        if ((puVar1 != 0x26d28) && (*0x26d30 == puVar1)) goto code_r0x0001b8bc;
    }
    iVar6 = 0;
    if (arg2 == 0) {
        arg1_01 = puVar1[4];
        iVar5 = puVar1[3];
        *in_stack_00000038 = *(puVar1 + 7);
    }
    else {
        iVar6 = fcn.0001b474(puVar1 - 8,CONCAT71(arg2 >> 8,*arg2),&iStack_38,0);
        if (iVar6 < 0) {
            if (iVar6 != -0x7fffffffffffffeb) goto code_r0x0001b8c6;
code_r0x0001b7d7:
            iVar6 = -0x7ffffffffffffff2;
            goto code_r0x0001b8c6;
        }
        pVar3 = *(iStack_30 + 0x20) + *0x20;
        if (*pVar3 == 0xffffff) {
            if (in_stack_00000040 == '\0') goto code_r0x0001b7d7;
            arg1_01 = *(pVar3 + 1) - 8;
        }
        else {
            iVar5 = 4;
            arg1_01 = *pVar3 - 4;
        }
        iVar5 = iVar5 + pVar3;
        uStackX_18 = arg3;
        *in_stack_00000038 = uStackX_18;
    }
    uVar4 = arg1_01;
    if (*in_stack_00000028 == 0) {
        iVar2 = fcn.0001f8f0(arg1_01);
        *in_stack_00000028 = iVar2;
        if (iVar2 == 0) {
            iVar6 = -0x7ffffffffffffff7;
            goto code_r0x0001b8c6;
        }
    }
    else if (*in_stack_00000030 < arg1_01) {
        iVar6 = 4;
        uVar4 = *in_stack_00000030;
    }
    if ((uVar4 != 0) && (*in_stack_00000028 != iVar5)) {
        fcn.00010430(*in_stack_00000028,iVar5,uVar4);
    }
    *in_stack_00000030 = arg1_01;
code_r0x0001b8c6:
    fcn.0001bc20(arg1_00);
    return iVar6;
}


/* fcn.0001fa94 @ 0x1fa94 */

uint64_t fcn.0001fa94(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.0001fb88 @ 0x1fb88 */

uint64_t fcn.0001fb88(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.0001f460 @ 0x1f460 */

void fcn.0001f460(int64_t arg1)

{
    int64_t in_RCX;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001e6f8(in_RCX,in_RDX,in_R8,arg1,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001e6f8 @ 0x1e6f8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001e6f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
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
    uint64_t uStack_98;
    int64_t iStack_90;
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
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001e757;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001e757:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.0001fb88(arg4,0xf4241);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001fa94(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
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
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x27034;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x0001eb12:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x27034;
            }
            else {
                pcVar8 = 0x27038;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x0001e8a9:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x0001ea4c;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x0001ea63;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x0001ea4c;
                        }
                        goto code_r0x0001ea63;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x0001ea4c:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x0001e8a9;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x0001e8a9;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x0001ea63;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x0001ea4c;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x0001ea63:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.0001f460(0x26fc8);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x0001eb12;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001ecfb;
                        if (uStack_a8 == 0x58) goto code_r0x0001edf0;
                        if (uStack_a8 == 0x61) goto code_r0x0001ed04;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x0001e88a;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001e886;
                        goto code_r0x0001ee07;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x27034;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x0001f034;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x270cb;
                            goto code_r0x0001edb7;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001edb7:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x0001f034;
                    }
                    fcn.0001f460(0x2702c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001ecfb:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x0001ed04:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x0001f034;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001e886;
                            goto code_r0x0001edf4;
                        }
                        goto code_r0x0001edf9;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x0001f034;
                    }
                    fcn.0001f460(0x27010);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x0001f034;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x0001edf0:
            uVar21 = uVar21 | 0x20;
code_r0x0001edf4:
            uVar21 = uVar21 | 0x80;
code_r0x0001edf9:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x0001ee07:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x0001ee49;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x0001ee49:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x0001eed1:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x0001eed1;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x0001e886:
            pcVar8 = &uStack_a8;
code_r0x0001e88a:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x0001f034:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001e6c4(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001e6c4(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001e6c4(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001e6c4(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.0001e6c4 @ 0x1e6c4 */

uchar * fcn.0001e6c4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001f604 @ 0x1f604 */

uint64_t fcn.0001f604(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    uint64_t in_RAX;
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((pcVar1 != NULL) && (in_RAX = arg2 - 1, 2 < in_RAX)) {
        uVar3 = 0;
        iVar4 = -1;
        if (arg2 != 0) {
            iVar4 = arg2;
        }
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return CONCAT71(in_RAX >> 8,*(pcVar1 + 2) == 4);
            }
            uVar2 = *(pcVar1 + 2);
            if ((uVar2 < 4) || (in_RAX = ~uVar3, in_RAX < uVar2)) break;
            uVar3 = uVar3 + uVar2;
            in_RAX = iVar4 - 4;
            if ((in_RAX < uVar3) || (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0))))
            break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.0001f9d8 @ 0x1f9d8 */

int64_t fcn.0001f9d8(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001f924(4,arg2);
    if ((arg1_00 != 0) && (arg3 != 0)) {
        if (arg1 < arg2) {
            arg2 = arg1;
        }
        if ((arg2 != 0) && (arg1_00 != arg3)) {
            fcn.00010430(arg1_00,arg3,arg2);
        }
        fcn.0001ab70(arg3);
    }
    return arg1_00;
}


/* fcn.00010ba0 @ 0x10ba0 */

int64_t fcn.00010ba0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ushort *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0002052c @ 0x2052c */

void fcn.0002052c(int64_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int iVar5;
    
    uVar2 = arg2;
    uVar4 = *(arg1 + 0x1c) << (arg2 & 0x3f);
    *(arg1 + 0x1c) = uVar4;
    if (*(arg1 + 0x18) < uVar2) {
        iVar1 = *(arg1 + 0x18);
        uVar3 = *(arg1 + 0x20);
        iVar5 = *(arg1 + 0x28);
        do {
            uVar2 = arg2 - iVar1;
            arg2 = uVar2;
            uVar3 = uVar4 | uVar3 << (uVar2 & 0x3f);
            uVar4 = uVar3;
            *(arg1 + 0x1c) = uVar3;
            if (iVar5 == 0) {
                uVar3 = 0;
                *(arg1 + 0x20) = 0;
            }
            else {
                iVar5 = iVar5 + -1;
                *(arg1 + 0x28) = iVar5;
                uVar3 = *(*(arg1 + 0x14) + *arg1);
                *(arg1 + 0x14) = *(arg1 + 0x14) + 1;
                *(arg1 + 0x20) = uVar3;
            }
            *(arg1 + 0x18) = 8;
            iVar1 = 8;
        } while (8 < uVar2);
    }
    *(arg1 + 0x18) = *(arg1 + 0x18) - uVar2;
    *(arg1 + 0x1c) = *(arg1 + 0x1c) | *(arg1 + 0x20) >> (*(arg1 + 0x18) & 0x1f);
    return;
}


/* fcn.000205c0 @ 0x205c0 */

ulong fcn.000205c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    ulong uVar4;
    uint8_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint16_t *puVar8;
    uint16_t uVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    int16_t *piVar12;
    uint64_t uVar13;
    int16_t iVar14;
    uint32_t uVar15;
    uint16_t uVar16;
    int64_t iVar17;
    uint16_t uVar18;
    uint16_t uVar19;
    int64_t in_stack_00000028;
    uint16_t auStack_a0 [17];
    int16_t iStack_7e;
    uint64_t uStack_78;
    int16_t aiStack_70 [24];
    
    uVar16 = arg4;
    uVar9 = arg2;
    iVar17 = 0;
    uVar11 = 0;
    piVar12 = aiStack_70;
    for (iVar6 = 0x11; iVar6 != 0; iVar6 = iVar6 + -1) {
        *piVar12 = 0;
        piVar12 = piVar12 + 1;
    }
    if (uVar9 != 0) {
        do {
            uVar10 = uVar11;
            if (0x10 < *(uVar10 + arg3)) goto code_r0x000206c2;
            uVar11 = uVar11 + 1;
            aiStack_70[*(uVar10 + arg3)] = aiStack_70[*(uVar10 + arg3)] + 1;
        } while (uVar11 < uVar9);
    }
    auStack_a0[0] = 0;
    auStack_a0[1] = 0;
    uVar15 = 1;
    do {
        iVar6 = iVar17 + 2;
        uVar11 = uVar15 + 1;
        iVar2 = iVar17 + 2;
        iVar17 = iVar17 + 2;
        auStack_a0[uVar15 + 1] = (*(aiStack_70 + iVar6) << (0x10U - uVar15 & 0x1f)) + *(auStack_a0 + iVar2);
        uVar15 = uVar11;
    } while (uVar11 < 0x11);
    if (iStack_7e == 0) {
        aiStack_70[0] = 0;
        uVar10 = 1;
        uVar5 = 0x10 - uVar16;
        uVar1 = arg4;
        uVar13 = uVar10;
        if (uVar16 == 0) goto code_r0x000206cc;
        do {
            uVar11 = uVar10 + 1;
            uVar13 = uVar11;
            auStack_a0[uVar10] = auStack_a0[uVar10] >> (uVar5 & 0x1f);
            aiStack_70[uVar10] = 1 << (uVar1 - uVar10 & 0x1f);
            uVar10 = uVar13;
        } while (uVar11 <= uVar16);
        for (; uVar13 < 0x11; uVar13 = uVar13 + 1) {
code_r0x000206cc:
            aiStack_70[uVar13] = 1 << (0x10U - uVar13 & 0x1f);
        }
        uVar5 = uVar5 & 0x1f;
        uVar11 = auStack_a0[(arg4 & 0xffffU) + 1] >> uVar5;
        if (((auStack_a0[(arg4 & 0xffffU) + 1] >> uVar5 != 0) && (uVar3 = 1 << (uVar1 & 0x1f), uVar11 < uVar3)) &&
           (uVar10 = uVar3 - uVar11, (uVar10 & 0x7fffffffffffffff) != 0)) {
            fcn.00010ba0(in_stack_00000028 + uVar11 * 2,uVar10 & 0x7fffffffffffffff,0);
        }
        uVar13 = arg2 & 0xffff;
        uVar10 = 0;
        if (uVar9 != 0) {
            uVar7 = 0x10 - uVar16;
            uStack_78 = uVar7;
            do {
                uVar11 = uVar10;
                uVar5 = *(uVar10 + arg3);
                if (uVar5 - 1 < 0x10) {
                    uVar3 = auStack_a0[uVar5];
                    uVar18 = aiStack_70[uVar5] + uVar3;
                    if (uVar5 < uVar16 || uVar5 == uVar16) {
                        if ((uVar18 <= uVar3) || (1 << (uVar1 & 0x1f) < uVar18)) {
                            return 0xffff;
                        }
                        do {
                            uVar10 = uVar3;
                            uVar3 = uVar3 + 1;
                            *(in_stack_00000028 + uVar10 * 2) = uVar11;
                        } while (uVar3 < uVar18);
                    }
                    else {
                        puVar8 = in_stack_00000028 + (uVar3 >> (uVar7 & 0x3f)) * 2;
                        iVar14 = uVar5 - uVar16;
                        if (iVar14 != 0) {
                            do {
                                if ((*puVar8 == 0) && (uVar19 = uVar13, uVar19 < 0x3fb)) {
                                    *(arg1 + 0x32 + uVar13 * 2) = 0;
                                    *(arg1 + 0x828 + uVar13 * 2) = 0;
                                    *puVar8 = uVar19;
                                    uVar13 = uVar19 + 1;
                                }
                                if (*puVar8 < 0x3fb) {
                                    iVar6 = arg1 + 0x828;
                                    if ((uVar3 & 1 << (0xf - uVar1 & 0x1f)) == 0) {
                                        iVar6 = arg1 + 0x32;
                                    }
                                    puVar8 = iVar6 + *puVar8 * 2;
                                }
                                uVar3 = uVar3 * 2;
                                iVar14 = iVar14 + -1;
                            } while (iVar14 != 0);
                        }
                        *puVar8 = uVar11;
                        uVar7 = uStack_78;
                    }
                    auStack_a0[uVar5] = uVar18;
                }
                uVar10 = uVar11 + 1;
            } while (uVar11 + 1 < uVar9);
        }
        uVar4 = 0;
    }
    else {
code_r0x000206c2:
        uVar4 = 0xffff;
    }
    return uVar4;
}


/* fcn.000208b4 @ 0x208b4 */

ulong fcn.000208b4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint16_t uVar9;
    uint32_t uVar10;
    
    uVar10 = *(arg1 + 0x1c);
    uVar4 = 0x20 - (arg3 & 0xffffU);
    fcn.0002052c(arg1,arg3 & 0xffffU);
    uVar6 = uVar10 >> (uVar4 & 0x1f);
    if (uVar6 == 0) {
        uVar10 = *(arg1 + 0x1c);
        fcn.0002052c(arg1,arg3 & 0xffff);
        fcn.00010ba0(arg1 + 0x323c,0x100,uVar10 >> (uVar4 & 0x1f) & 0xffff);
        if ((arg2 & 0xffffU) != 0) {
            fcn.00010490(arg1 + 0x121c,arg2 & 0xffffU,0);
        }
        uVar3 = 0;
    }
    else {
        uVar7 = 0;
        uVar8 = uVar7;
        if (uVar6 != 0) {
            do {
                uVar8 = uVar7;
                if (0x1e < uVar7) break;
                uVar10 = *(arg1 + 0x1c) >> 0x1d;
                uVar5 = *(arg1 + 0x1c) >> 0x10;
                uVar9 = uVar5 >> 0xd;
                if (uVar5 >> 0xd == 7) {
                    for (uVar2 = 0x10000000; uVar9 = uVar10, (*(arg1 + 0x1c) & uVar2) != 0; uVar2 = uVar2 >> 1) {
                        uVar10 = uVar9 + 1;
                    }
                }
                uVar10 = uVar9 - 3;
                if (uVar9 < 7) {
                    uVar10 = 3;
                }
                fcn.0002052c(arg1,uVar10);
                uVar5 = uVar7 + 1;
                uVar8 = uVar5;
                *(uVar7 + 0x121c + arg1) = uVar9;
                if (uVar5 == arg4) {
                    uVar1 = *(arg1 + 0x1c);
                    fcn.0002052c(arg1,2);
                    uVar5 = uVar1 >> 0x1e;
                    for (; (uVar5 = uVar5 - 1, -1 < uVar5 && (uVar8 < 0x1f)); uVar8 = uVar8 + 1) {
                        *(uVar8 + 0x121c + arg1) = 0;
                    }
                }
                uVar7 = uVar8;
            } while (uVar8 < uVar6);
        }
        while ((uVar6 = uVar8, uVar6 < arg2 && (uVar6 < 0x1f))) {
            *(uVar8 + 0x121c + arg1) = 0;
            uVar8 = uVar6 + 1;
        }
        uVar3 = fcn.000205c0(arg1,arg2 & 0xffff,arg1 + 0x121c,8);
    }
    return uVar3;
}


/* fcn.00020a64 @ 0x20a64 */

void fcn.00020a64(int64_t arg1)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    
    uVar1 = *(arg1 + 0x1c);
    fcn.0002052c(arg1,9);
    uVar6 = uVar1 >> 0x17;
    if (uVar6 == 0) {
        uVar2 = *(arg1 + 0x1c);
        fcn.0002052c(arg1,9);
        fcn.00010490(arg1 + 0x101e,0x1fe,0);
        fcn.00010ba0(arg1 + 0x123c,0x1000,uVar2 >> 0x17);
    }
    else {
        uVar5 = 0;
        if (uVar6 != 0) {
            do {
                if (0x1fd < uVar5) break;
                uVar4 = *(arg1 + 0x323c + (*(arg1 + 0x1c) >> 0x18) * 2);
                if (0x12 < uVar4) {
                    uVar2 = 0x800000;
                    do {
                        if ((uVar2 & *(arg1 + 0x1c)) == 0) {
                            uVar4 = *(arg1 + 0x32 + uVar4 * 2);
                        }
                        else {
                            uVar4 = *(arg1 + 0x828 + uVar4 * 2);
                        }
                        uVar2 = uVar2 >> 1;
                    } while (0x12 < uVar4);
                }
                fcn.0002052c(arg1,*(uVar4 + 0x121c + arg1));
                if (uVar4 < 3) {
                    if (uVar4 == 0) {
                        uVar4 = 1;
                    }
                    else if (uVar4 == 1) {
                        uVar1 = *(arg1 + 0x1c);
                        fcn.0002052c(arg1,4);
                        uVar4 = (uVar1 >> 0x1c) + 3;
                    }
                    else if (uVar4 == 2) {
                        uVar1 = *(arg1 + 0x1c);
                        fcn.0002052c(arg1,9);
                        uVar4 = (uVar1 >> 0x17) + 0x14;
                    }
                    for (; (uVar4 = uVar4 - 1, -1 < uVar4 && (uVar5 < 0x1fe)); uVar5 = uVar5 + 1) {
                        *(uVar5 + 0x101e + arg1) = 0;
                    }
                }
                else {
                    *(uVar5 + 0x101e + arg1) = uVar4 + -2;
                    uVar5 = uVar5 + 1;
                }
            } while (uVar5 < uVar6);
        }
        iVar3 = 0x1fe - uVar5;
        if (iVar3 != 0) {
            fcn.00010490(arg1 + 0x101e + uVar5,iVar3,0);
        }
        fcn.000205c0(arg1,0x1fe,arg1 + 0x101e,0xc);
    }
    return;
}


/* fcn.00020c3c @ 0x20c3c */

void fcn.00020c3c(int64_t arg1)

{
    ushort uVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint16_t uVar4;
    
    do {
        if (*(arg1 + 0x24) == 0) {
            uVar1 = *(arg1 + 0x1e);
            fcn.0002052c(arg1,0x10);
            *(arg1 + 0x24) = uVar1;
            iVar2 = fcn.000208b4(arg1,0x13,5,3);
            *(arg1 + 0x30) = iVar2;
            if (iVar2 == 0) {
                fcn.00020a64(arg1);
                iVar2 = fcn.000208b4(arg1,0x1f,*(arg1 + 0x343c),0xffff);
                *(arg1 + 0x30) = iVar2;
                if (iVar2 == 0) goto code_r0x00020cdf;
                uVar4 = 0;
            }
            else {
                uVar4 = 0;
            }
        }
        else {
code_r0x00020cdf:
            *(arg1 + 0x24) = *(arg1 + 0x24) + -1;
            uVar4 = *(arg1 + 0x123c + (*(arg1 + 0x1c) >> 0x14) * 2);
            if (0x1fd < uVar4) {
                uVar3 = 0x80000;
                do {
                    if ((uVar3 & *(arg1 + 0x1c)) == 0) {
                        uVar4 = *(arg1 + 0x32 + uVar4 * 2);
                    }
                    else {
                        uVar4 = *(arg1 + 0x828 + uVar4 * 2);
                    }
                    uVar3 = uVar3 >> 1;
                } while (0x1fd < uVar4);
            }
            fcn.0002052c(arg1,*(uVar4 + 0x101e + arg1));
        }
        if (*(arg1 + 0x30) != 0) {
            return;
        }
        if (uVar4 < 0x100) {
            if (*(arg1 + 0x2c) <= *(arg1 + 0x10)) {
                return;
            }
            *(*(arg1 + 0x10) + *(arg1 + 8)) = uVar4;
            *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
        }
        else {
            iVar2 = uVar4 - 0xfd;
            uVar4 = *(arg1 + 0x323c + (*(arg1 + 0x1c) >> 0x18) * 2);
            if (0x1e < uVar4) {
                uVar3 = 0x800000;
                do {
                    if ((uVar3 & *(arg1 + 0x1c)) == 0) {
                        uVar4 = *(arg1 + 0x32 + uVar4 * 2);
                    }
                    else {
                        uVar4 = *(arg1 + 0x828 + uVar4 * 2);
                    }
                    uVar3 = uVar3 >> 1;
                } while (0x1e < uVar4);
            }
            fcn.0002052c(arg1,*(uVar4 + 0x121c + arg1));
            uVar3 = uVar4;
            if (1 < uVar4) {
                uVar3 = *(arg1 + 0x1c);
                fcn.0002052c(arg1,uVar4 - 1);
                uVar3 = (1 << (uVar4 - 1U & 0x1f)) + (uVar3 >> (0x20U - (uVar4 - 1) & 0x1f));
            }
            uVar3 = (*(arg1 + 0x10) - uVar3) - 1;
            while( true ) {
                iVar2 = iVar2 + -1;
                if (iVar2 < 0) break;
                if (*(arg1 + 0x2c) <= *(arg1 + 0x10)) {
                    return;
                }
                if (*(arg1 + 0x2c) <= uVar3) {
                    *(arg1 + 0x30) = 0xffff;
                    return;
                }
                *(*(arg1 + 0x10) + *(arg1 + 8)) = *(uVar3 + *(arg1 + 8));
                *(arg1 + 0x10) = *(arg1 + 0x10) + 1;
                uVar3 = uVar3 + 1;
            }
            if (*(arg1 + 0x2c) <= *(arg1 + 0x10)) {
                return;
            }
        }
    } while( true );
}


/* fcn.00020f28 @ 0x20f28 */

//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.00020f28(int64_t arg1,int64_t arg2)

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
        goto code_r0x0002142e;
    }
    bVar9 = false;
    if (iStackX_18 != 0x40) goto code_r0x0002142e;
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
        goto code_r0x0002142e;
    }
    bVar9 = false;
    if (iStackX_18 != 0x108) goto code_r0x0002142e;
    if (*piStackX_10 == 0x5a56) {
        *(arg1 + 0x7d) = 1;
        *(arg1 + 0x78) = *(piStackX_10 + 2);
        uVar1 = *(piStackX_10 + 5);
        *(arg1 + 8) = 0;
        *(arg1 + 0x38) = 0;
        *(arg1 + 0x7a) = uVar1;
        iVar4 = piStackX_10[3] - *(piStackX_10 + 6);
        *(arg1 + 0x58) = iVar4 + 0x28;
        if ((*(piStackX_10 + 6) < 0x29) || (piStackX_10[3] <= *(piStackX_10 + 6))) goto code_r0x0002100e;
        iStackX_18 = 1;
        iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar4 + 0x27,&stack0x00000018,auStackX_8);
        if (-1 < iVar4) {
            bVar9 = iStackX_18 == 1;
            if (!bVar9) goto code_r0x0002142e;
            if (((piStackX_10[7] != 0) && (piStackX_10[6] == 0)) || ((piStackX_10[9] != 0 && (piStackX_10[8] == 0))))
            goto code_r0x0002100e;
            goto code_r0x000212f5;
        }
    }
    else {
        if (*piStackX_10 != 0x4550) {
code_r0x00021412:
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
code_r0x0002100e:
                *(arg1 + 0x68) = 0xb;
                return -0x7ffffffffffffffd;
            }
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = false;
                if (iStackX_18 != 1) goto code_r0x0002142e;
                if ((4 < piStackX_10[0x1d]) && (piStackX_10[0x27] != 0)) {
                    if (~piStackX_10[0x26] < piStackX_10[0x27]) goto code_r0x0002100e;
                    iVar6 = piStackX_10[0x27];
                    iVar5 = piStackX_10[0x26];
code_r0x000212ac:
                    iStackX_18 = 1;
                    iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),iVar6 + iVar5 + -1,&stack0x00000018,auStackX_8);
                    if (iVar4 < 0) goto code_r0x0002107b;
                    bVar9 = iStackX_18 == 1;
                    if (!bVar9) goto code_r0x0002142e;
                }
code_r0x000212d9:
                *(arg1 + 0x7a) = piStackX_10[0x17];
                *(arg1 + 8) = piStackX_10[0x14];
                *(arg1 + 0x38) = piStackX_10[0xe];
                *(arg1 + 0x58) = piStackX_10[0x15];
code_r0x000212f5:
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
                            goto code_r0x0002142e;
                        }
                        bVar9 = iStackX_18 == 0x28;
                        if (!bVar9) goto code_r0x0002142e;
                        if (*(arg1 + 0x7d) != '\0') {
                            iVar5 = *(piStackX_10 + 6) - 0x28;
                            uStack_9c = uStack_9c - iVar5;
                            uStack_94 = uStack_94 - iVar5;
                        }
                        if (uStack_98 != 0) {
                            if (((uStack_9c < *(arg1 + 0x58)) || (uStack_94 < *(arg1 + 0x58))) ||
                               (-uStack_94 - 1 < uStack_98)) goto code_r0x0002100e;
                            iStackX_18 = 1;
                            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),uStack_94 + (uStack_98 - 1),&stack0x00000018,
                                                      auStackX_8);
                            if (iVar4 < 0) goto code_r0x0002107b;
                            bVar9 = iStackX_18 == 1;
                            if (!bVar9) goto code_r0x0002142e;
                        }
                        uVar8 = uVar8 + 1;
                        iVar6 = iVar6 + 0x28;
                    } while (uVar8 < uVar7);
                }
                return 0;
            }
        }
        else {
            if (piStackX_10[6] != 0x20b) goto code_r0x00021412;
            if (((((0x10 < piStackX_10[0x21]) || (*(piStackX_10 + 5) - 0x70 != piStackX_10[0x21] << 3)) ||
                 (uVar7 = *(arg1 + 0x3c) + 0x18 + *(piStackX_10 + 5), piStackX_10[0x14] <= uVar7)) ||
                (((piStackX_10[0x14] - uVar7) / 0x28 <= *(piStackX_10 + 6) ||
                 (uVar8 = piStackX_10[0x15], uVar8 <= uVar7)))) ||
               ((piStackX_10[0x14] <= uVar8 || ((uVar8 - uVar7) / 0x28 < *(piStackX_10 + 6))))) goto code_r0x0002100e;
            iStackX_18 = 1;
            iVar4 = (**(arg1 + 0x20))(*(arg1 + 0x28),piStackX_10[0x15] + -1,&stack0x00000018,auStackX_8);
            if (-1 < iVar4) {
                bVar9 = iStackX_18 == 1;
                if (!bVar9) goto code_r0x0002142e;
                if ((4 < piStackX_10[0x21]) && (piStackX_10[0x2b] != 0)) {
                    if (~piStackX_10[0x2a] < piStackX_10[0x2b]) goto code_r0x0002100e;
                    iVar6 = piStackX_10[0x2b];
                    iVar5 = piStackX_10[0x2a];
                    goto code_r0x000212ac;
                }
                goto code_r0x000212d9;
            }
        }
    }
code_r0x0002107b:
    bVar9 = iStackX_18 == 1;
code_r0x0002142e:
    *(arg1 + 0x68) = 1;
    if (!bVar9) {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.00010b60 @ 0x10b60 */

void fcn.00010b60(ulong *param_1)

{
    ulong uVar1;
    
    uVar1 = InterruptDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00010957 @ 0x10957 */

void fcn.00010957(int64_t arg1)

{
    *arg1 = 0x10510;
    *(arg1 + 8) = 0xf;
    *(arg1 + 0x10) = 0x106f0;
    *0x10515 = 0x10721;
    *0x10524 = 0x10721;
    *0x10533 = 0x10721;
    *0x10542 = 0x10721;
    *0x10551 = 0x10721;
    *0x10560 = 0x10721;
    *0x1056f = 0x10721;
    *0x1057e = 0x10721;
    *0x1058d = 0x10721;
    *0x1059c = 0x10721;
    *0x105ab = 0x10721;
    *0x105ba = 0x10721;
    *0x105c9 = 0x10721;
    *0x105d8 = 0x10721;
    *0x105e7 = 0x10721;
    *0x105f6 = 0x10721;
    *0x10605 = 0x10721;
    *0x10614 = 0x10721;
    *0x10623 = 0x10721;
    *0x10632 = 0x10721;
    *0x10641 = 0x10721;
    *0x10650 = 0x10721;
    *0x1065f = 0x10721;
    *0x1066e = 0x10721;
    *0x1067d = 0x10721;
    *0x1068c = 0x10721;
    *0x1069b = 0x10721;
    *0x106aa = 0x10721;
    *0x106b9 = 0x10721;
    *0x106c8 = 0x10721;
    *0x106d7 = 0x10721;
    *0x106e6 = 0x10721;
    *0x106f5 = 0x106ff;
    return;
}


/* fcn.00022438 @ 0x22438 */

void fcn.00022438(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    ushort uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    unkuint6 *pVar6;
    
    iVar4 = *(arg3 + 0x10);
    uVar2 = fcn.00010b10();
    uVar5 = 0;
    if (*arg3 != 0) {
        pVar6 = arg1 + 6;
        iVar4 = iVar4 + 0x48;
        do {
            *(pVar6 + -4) = uVar2;
            iVar1 = *(iVar4 + -0x3c);
            if (iVar1 != 0) {
                if (iVar1 == 1) {
code_r0x000224c0:
                    *(iVar4 + -0x38) = *pVar6 * 0x10000 + *(pVar6 + -6);
                }
                else if (iVar1 == 2) {
                    *(iVar4 + -0x48) = 1;
                    iVar3 = *(arg2 + 0x10);
                    if ((*(arg2 + 8) != 0) && (iVar4 != iVar3)) {
                        fcn.00010430(iVar4,iVar3,*(arg2 + 8));
                    }
                    fcn.00010a95(iVar4,CONCAT71(iVar3 >> 8,uVar5));
                    goto code_r0x000224c0;
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


/* fcn.00024d60 @ 0x24d60 */

uint32_t fcn.00024d60(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    
    uVar1 = fcn.00024cfc();
    iVar2 = fcn.00024d28();
    if (iVar2 != 1) {
        return uVar1;
    }
    iVar2 = fcn.00024d28();
    if (iVar2 == 1) {
        fcn.00010ae0(0,auStackX_10,0,0);
        if (10 < auStackX_10[0]) {
            fcn.00010bc0(0xb,0,0,auStackX_8);
            if (auStackX_8[0] != 0) goto code_r0x00024dfe;
        }
        fcn.00010ae0(1,0,auStackX_8,0);
        uStackX_18 = auStackX_8[0] >> 0x18;
    }
    else {
        uStackX_18 = fcn.00024d60();
    }
code_r0x00024dfe:
    if (uStackX_18 < 0x100) {
        uStackX_18 = uVar1 >> 0x18;
    }
    return uStackX_18;
}


/* fcn.00024e18 @ 0x24e18 */

uint8_t fcn.00024e18(void)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    bool bVar4;
    
    if (*0x27cb8 == '\x01') {
        uVar3 = *0x26ee4;
    }
    else {
        iVar1 = fcn.0001fbb8(0x25d20,*0x27b00);
        if ((iVar1 == 0) || (iVar1 == -0x18)) {
            uVar3 = 0x22;
        }
        else {
            bVar4 = *(iVar1 + 0x1b) != '\0';
            *0x27cb8 = '\x01';
            uVar3 = bVar4 | 2;
            if (*(iVar1 + 0x1c) == '\0') {
                uVar3 = bVar4;
            }
            uVar2 = uVar3 | 8;
            if (*(iVar1 + 0x1d) == '\0') {
                uVar2 = uVar3;
            }
            uVar3 = uVar2 | 0x10;
            if (*(iVar1 + 0x1e) == '\0') {
                uVar3 = uVar2;
            }
            *0x26ee4 = uVar3 | 0x20;
            if (*(iVar1 + 0x1f) == '\0') {
                *0x26ee4 = uVar3;
            }
            uVar3 = *0x26ee4;
        }
    }
    return uVar3;
}


/* fcn.00024a9c @ 0x24a9c */

ulong fcn.00024a9c(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uchar uVar4;
    uchar uVar5;
    char cVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    char cVar10;
    
    cVar10 = '\0';
    uVar9 = 0x1c200;
    if (*0x27cb9 == '\x01') {
        uVar8 = *0x26ee0;
    }
    else {
        cVar10 = '\0';
        iVar7 = fcn.0001fbb8(0x25d20,*0x27b00);
        uVar8 = uVar9;
        if ((iVar7 != 0) && (iVar7 != -0x18)) {
            cVar6 = *(iVar7 + 0x1a);
            if (cVar6 == '\x03') {
                uVar8 = 0x2580;
            }
            else if (cVar6 == '\x04') {
                uVar8 = 0x4b00;
            }
            else if (cVar6 == '\x06') {
                uVar8 = 0xe100;
            }
            *0x27cb9 = '\x01';
            *0x26ee0 = uVar8;
        }
    }
    if ((uVar8 == 0) || (uVar8 != (uVar8 / 0x2580) * 0x2580)) {
        uVar8 = uVar9;
    }
    uVar9 = (uVar9 & 0xffffffff) / uVar8;
    uVar1 = in(0x3fa);
    uVar2 = in(0x3fb);
    uVar3 = in(0x3fb);
    out(0x3fb,uVar3 | 0x80);
    uVar4 = in(0x3f9);
    uVar5 = in(0x3f8);
    uVar3 = in(0x3fb);
    out(0x3fb,uVar3 & 0x7f);
    cVar6 = cVar10;
    if ((uVar2 & 0x3f) == 3) {
        cVar6 = (uVar1 & 0x21) == 1;
    }
    if (CONCAT11(uVar4,uVar5) != uVar9) {
        cVar6 = cVar10;
    }
    if (cVar6 == '\0') {
        out(0x3fb,0x80);
        out(0x3f9,uVar9 >> 8);
        out(0x3f8,uVar9);
        out(0x3fb,3);
        out(0x3fa,7);
        out(0x3fc,0);
    }
    return 0;
}


/* fcn.0002544c @ 0x2544c */

void fcn.0002544c(void)

{
    uint *puVar1;
    uint64_t arg1;
    
    arg1 = *0x26ef4;
    if ((*0xfdcb0618 & 2) == 0) {
        arg1 = 0xf1000;
    }
    puVar1 = fcn.000257d0(arg1);
    if (((puVar1 & 0xffffff00) != 0) && ((puVar1 & 0xfffff000) != 0xfffff000)) {
        fcn.00025418(puVar1 & 0xfffff000,arg1);
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


/* fcn.00022530 @ 0x22530 */

void fcn.00022530(uint32_t arg1,int64_t arg2)

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
        arg3 = *(uVar2 * 8 + 0x27960);
    }
    else {
        arg3 = "Reserved";
    }
    uVar1 = fcn.00024d60();
    arg4 = uVar1;
    fcn.00022864(0x273c0,uVar2,arg3,arg4);
    if ((1 << (arg1 & 0x1f) & 0x20227d00U) != 0) {
        arg2_00 = *arg2;
        fcn.00022864(0x27400,arg2_00,arg3,arg4);
        if (uVar2 == 0xe) {
            uVar2 = *arg2;
            arg2_00 = uVar2 >> 4 & 1;
            arg4 = uVar2 >> 2 & 1;
            arg3 = uVar2 >> 3 & 1;
            fcn.00022864(0x27418,arg2_00,arg3,arg4);
        }
        fcn.00022864(0x27448,arg2_00,arg3,arg4);
    }
    fcn.00022864(0x27450,*(arg2 + 0x2a0),*(arg2 + 0x2c8),*(arg2 + 0x268));
    fcn.00022864(0x27480,*(arg2 + 0x310),*(arg2 + 0x308),*(arg2 + 0x300));
    iVar3 = *(arg2 + 0x2e8);
    fcn.00022864(0x274b0,*(arg2 + 0x2f8),*(arg2 + 0x2f0),iVar3);
    fcn.00022864(0x274e0,*(arg2 + 0x2e0),*(arg2 + 0x2d8),iVar3);
    fcn.00022864(0x27500,*(arg2 + 0x318),*(arg2 + 800),*(arg2 + 0x328));
    iVar3 = *(arg2 + 0x340);
    fcn.00022864(0x27530,*(arg2 + 0x330),*(arg2 + 0x338),iVar3);
    fcn.00022864(0x27560,*(arg2 + 0x348),*(arg2 + 0x350),iVar3);
    iVar3 = *(arg2 + 0x2b0);
    fcn.00022864(0x27580,*(arg2 + 0x2c0),*(arg2 + 0x2b8),iVar3);
    fcn.00022864(0x275b0,*(arg2 + 0x2a8),*(arg2 + 0x2d0),iVar3);
    iVar3 = *(arg2 + 0x250);
    fcn.00022864(0x275d0,*(arg2 + 0x238),*(arg2 + 0x248),iVar3);
    fcn.00022864(0x27600,*(arg2 + 600),*(arg2 + 0x260),iVar3);
    fcn.00022864(0x27620,*(arg2 + 0x208),*(arg2 + 0x210),*(arg2 + 0x218));
    fcn.00022864(0x27650,*(arg2 + 0x220),*(arg2 + 0x228),*(arg2 + 0x230));
    fcn.00022864(0x27680,*(arg2 + 0x280),*(arg2 + 0x288),*(arg2 + 0x270));
    iVar3 = *(arg2 + 0x278);
    arg3_00 = *(arg2 + 0x298);
    fcn.00022864(0x276a8,*(arg2 + 0x290),arg3_00,iVar3);
    fcn.00022864(0x276d0,arg2 + 8,arg3_00,iVar3);
    return;
}


/* fcn.00022864 @ 0x22864 */

//WARNING: Type propagation algorithm not settling

void fcn.00022864(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    uint uStackY_108;
    int64_t in_stack_ffffffffffffff38;
    int8_t in_stack_ffffffffffffff40;
    
    fcn.0001e6f8(&uStackY_108,0x100,0,arg1,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40);
    arg2_00 = 0;
    while (uStackY_108 != '\0') {
        uStackY_108._0_1_ = *(&uStackY_108 + arg2_00 + 1U);
        arg2_00 = arg2_00 + 1;
    }
    fcn.00024bd8(&uStackY_108,arg2_00);
    return;
}


/* fcn.00010b10 @ 0x10b10 */

void fcn.00010b10(void)

{
    return;
}


/* fcn.00010a95 @ 0x10a95 */

void fcn.00010a95(int64_t arg1,int64_t arg2)

{
    *(arg1 + 1) = arg2;
    return;
}


/* fcn.00024bd8 @ 0x24bd8 */

uint64_t fcn.00024bd8(uint32_t *arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint64_t uVar3;
    uint32_t *noname_0;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    uVar3 = 0;
    noname_0 = arg1;
    uVar1 = fcn.00024e18();
    if (((uVar1 & 2) != 0) && (noname_0 = arg2, puVar5 = arg1, arg1 != NULL)) {
        while (noname_0 != NULL) {
            do {
                uVar2 = in(0x3fd);
            } while ((uVar2 & 0x20) == 0);
            uVar4 = uVar3;
            do {
                if (noname_0 == NULL) goto code_r0x00024c3f;
                out(0x3f8,*puVar5);
                uVar4 = uVar4 + 1;
                noname_0 = noname_0 + -1;
                puVar5 = puVar5 + 1;
            } while (uVar4 < 0x10);
        }
code_r0x00024c3f:
        uVar3 = arg2;
    }
    if ((uVar1 & 0x10) != 0) {
        uVar3 = fcn.000254f8(noname_0,arg1,arg2);
    }
    if ((uVar1 & 0x20) != 0) {
        fcn.00024eb8(4,arg1,arg2);
    }
    return uVar3;
}


/* fcn.00025830 @ 0x25830 */

uint64_t fcn.00025830(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00022c30 @ 0x22c30 */

//WARNING: Variable defined which should be unmapped: var_23h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Removing unreachable block (ram,0x00022d29)

ulong fcn.00022c30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    int iVar2;
    int64_t arg2_00;
    int64_t iVar3;
    int32_t var_bh;
    int32_t var_23h;
    int32_t var_2bh;
    ulong uStackX_20;
    uint32_t var_6fh;
    int64_t var_7fh;
    uint64_t auStack_c8 [2];
    code *pcStack_b8;
    int64_t iStack_b0;
    ulong uStack_a8;
    ulong uStack_98;
    ulong uStack_90;
    int64_t iStack_80;
    uchar auStack_78 [7];
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_59h;
    int64_t var_51h;
    int64_t var_49h;
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_11h;
    
    arg2_00 = 0;
    auStack_c8[1] = 0x22c10;
    uStack_a8 = 0x10000;
    pcStack_b8 = fcn.0001fbb4;
    iVar3 = 0xc;
    do {
        puVar1 = iVar3 + arg1;
        iVar3 = iVar3 + -1;
        arg2_00 = arg2_00 * 0x100 + *puVar1;
    } while (4 < iVar3);
    auStack_c8[0] = arg2 - 0xd;
    if (4 < auStack_c8[0]) {
        iStack_80 = 0;
        uStack_90 = 0;
        iStack_b0 = arg4;
        iVar2 = fcn.000242b0(&stack0x00000020,arg1);
        if ((iVar2 == 0) && (iVar2 = fcn.00024334(&uStack_98,&stack0x00000020,auStack_c8 + 1), iVar2 == 0)) {
            uStack_98 = uStackX_20;
        }
        if (iVar2 == 0) {
            stack0xffffffffffffff90 = 0;
            stack0xffffffffffffffcc = 0;
            var_51h._1_4_ = 0;
            stack0xffffffffffffffac = 0;
            stack0xffffffffffffffc4 = 0x114;
            iStack_80 = arg3;
            _auStack_78 = arg2_00;
            iVar2 = fcn.00023fcc(&uStack_98,arg2_00,arg1 + 0xd,auStack_c8);
            (*pcStack_b8)(auStack_c8 + 1,uStack_90);
            if (iVar2 == 0) {
                return 0;
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.000242b0 @ 0x242b0 */

ulong fcn.000242b0(int64_t arg1,uint32_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    char cVar3;
    char cVar4;
    uint in_register_00000014;
    uint8_t *puVar5;
    
    puVar5 = CONCAT44(in_register_00000014,arg2);
    uVar2 = *(puVar5 + 1);
    if (*(puVar5 + 1) < 0x1000) {
        uVar2 = 0x1000;
    }
    uVar1 = *puVar5;
    *(arg1 + 4) = uVar2;
    if (0xe0 < uVar1) {
        return 4;
    }
    uVar2 = *puVar5 / 9;
    cVar3 = uVar2;
    *arg1 = *puVar5 + cVar3 * -9;
    cVar4 = uVar2 / 5;
    *(arg1 + 2) = cVar4;
    *(arg1 + 1) = cVar3 + cVar4 * -5;
    return 0;
}


/* fcn.00024334 @ 0x24334 */

ulong fcn.00024334(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    
    uVar2 = (0x300 << (*(arg2 + 1) + *arg2 & 0x1fU)) + 0x7c0;
    if ((*(arg1 + 8) == 0) || (uVar2 != *(arg1 + 0x60))) {
        (**(arg3 + 8))(arg3);
        *(arg1 + 8) = 0;
        iVar1 = (**arg3)(arg3,uVar2 * 2);
        *(arg1 + 8) = iVar1;
        if (iVar1 == 0) {
            return 2;
        }
        *(arg1 + 0x60) = uVar2;
        *(arg1 + 0x10) = iVar1 + 0xd00;
    }
    return 0;
}


/* fcn.00023fcc @ 0x23fcc */

ulong fcn.00023fcc(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    uint in_register_0000000c;
    char *arg1_00;
    uint64_t uVar5;
    uint64_t arg3_00;
    uint32_t uVar6;
    ushort *puVar7;
    uint64_t uVar8;
    char *arg3_01;
    uint64_t uVar9;
    uint *in_stack_00000030;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = *(arg1_00 + 0x5c);
    arg3_00 = *arg4;
    *arg4 = 0;
    *in_stack_00000030 = 0;
    if (0x112 < uVar6) {
        while ((arg3_00 != 0 && (*(arg1_00 + 100) < 5))) {
            cVar1 = *arg3;
            arg3 = arg3 + 1;
            uVar6 = *(arg1_00 + 100);
            *arg4 = *arg4 + 1;
            arg1_00[uVar6 + 0x68] = cVar1;
            *(arg1_00 + 100) = *(arg1_00 + 100) + 1;
            arg3_00 = arg3_00 - 1;
        }
        if ((*(arg1_00 + 100) != 0) && (arg1_00[0x68] != '\0')) {
            return 1;
        }
        if (*(arg1_00 + 100) < 5) {
code_r0x00024056:
            *in_stack_00000030 = 3;
            return 0;
        }
        arg1_00[0x38] = -1;
        arg1_00[0x39] = -1;
        arg1_00[0x3a] = -1;
        arg1_00[0x3b] = -1;
        arg1_00[100] = '\0';
        arg1_00[0x65] = '\0';
        arg1_00[0x66] = '\0';
        arg1_00[0x67] = '\0';
        *(arg1_00 + 0x3c) = CONCAT31(CONCAT21(CONCAT11(arg1_00[0x69],arg1_00[0x6a]),arg1_00[0x6b]),arg1_00[0x6c]);
        if (0x113 < *(arg1_00 + 0x5c)) {
            puVar7 = *(arg1_00 + 8);
            for (uVar5 = (0x300 << (arg1_00[1] + *arg1_00 & 0x1fU)) + 0x7c0; uVar5 != 0; uVar5 = uVar5 - 1) {
                *puVar7 = 0x400;
                puVar7 = puVar7 + 1;
            }
            arg1_00[0x54] = '\x01';
            arg1_00[0x55] = '\0';
            arg1_00[0x56] = '\0';
            arg1_00[0x57] = '\0';
            arg1_00[0x50] = '\x01';
            arg1_00[0x51] = '\0';
            arg1_00[0x52] = '\0';
            arg1_00[0x53] = '\0';
            arg1_00[0x4c] = '\x01';
            arg1_00[0x4d] = '\0';
            arg1_00[0x4e] = '\0';
            arg1_00[0x4f] = '\0';
            arg1_00[0x48] = '\x01';
            arg1_00[0x49] = '\0';
            arg1_00[0x4a] = '\0';
            arg1_00[0x4b] = '\0';
            arg1_00[0x58] = '\0';
            arg1_00[0x59] = '\0';
            arg1_00[0x5a] = '\0';
            arg1_00[0x5b] = '\0';
        }
        arg1_00[0x5c] = '\0';
        arg1_00[0x5d] = '\0';
        arg1_00[0x5e] = '\0';
        arg1_00[0x5f] = '\0';
    }
    fcn.000238dc(arg1,arg2);
    iVar3 = *(arg1_00 + 0x5c);
    do {
        if (iVar3 == 0x112) {
            if (*(arg1_00 + 0x3c) != 0) {
                return 1;
            }
            *in_stack_00000030 = 1;
            return 0;
        }
        bVar2 = false;
        if (arg2 <= *(arg1_00 + 0x28)) {
            if (*(arg1_00 + 0x5c) != 0) goto code_r0x0002426a;
            if (*(arg1_00 + 0x3c) == 0) {
                *in_stack_00000030 = 4;
                return 0;
            }
            bVar2 = true;
        }
        uVar6 = *(arg1_00 + 100);
        uVar5 = uVar6;
        if (uVar6 == 0) {
            if ((arg3_00 < 0x14) || (bVar2)) {
                iVar3 = fcn.00023a0c(arg1_00,arg3);
                if (iVar3 == 0) {
                    if ((arg3_00 != 0) && (arg1_00 + 0x68 != arg3)) {
                        fcn.00010430(arg1_00 + 0x68,arg3,arg3_00);
                    }
                    *arg4 = *arg4 + arg3_00;
                    *(arg1_00 + 100) = arg3_00;
                    goto code_r0x00024056;
                }
                if ((bVar2) && (iVar3 != 2)) {
code_r0x0002426a:
                    *in_stack_00000030 = 2;
                    return 1;
                }
                arg3_01 = arg3;
            }
            else {
                arg3_01 = arg3 + (arg3_00 - 0x14);
            }
            *(arg1_00 + 0x30) = arg3;
            iVar3 = fcn.00023968(arg1_00,arg2,arg3_01);
            if (iVar3 != 0) {
                return 1;
            }
            uVar5 = *(arg1_00 + 0x30) - arg3;
            arg3 = *(arg1_00 + 0x30);
            *arg4 = *arg4 + uVar5;
        }
        else {
            uVar9 = 0;
            if (uVar6 < 0x14) {
                uVar8 = uVar5;
                do {
                    uVar6 = uVar8;
                    if (arg3_00 <= uVar9) break;
                    uVar6 = uVar6 + 1;
                    uVar8 = uVar6;
                    arg1_00[uVar5 + 0x68] = *(arg3 + uVar9);
                    uVar9 = uVar9 + 1;
                    uVar5 = uVar5 + 1;
                } while (uVar6 < 0x14);
            }
            *(arg1_00 + 100) = uVar6;
            if ((uVar6 < 0x14) || (bVar2)) {
                iVar3 = fcn.00023a0c(arg1_00,arg1 + 0x68);
                if (iVar3 == 0) {
                    *arg4 = *arg4 + uVar9;
                    goto code_r0x00024056;
                }
                if ((bVar2) && (iVar3 != 2)) goto code_r0x0002426a;
            }
            *(arg1_00 + 0x30) = arg1_00 + 0x68;
            iVar3 = fcn.00023968(arg1_00,arg2,arg1_00 + 0x68);
            if (iVar3 != 0) {
                return 1;
            }
            uVar4 = (*(arg1_00 + 0x30) - arg1) - 0x68;
            if ((uVar6 < uVar4) || (uVar6 = uVar6 - uVar4, uVar9 < uVar6)) {
                return 0xb;
            }
            uVar5 = uVar9 - uVar6;
            *arg4 = *arg4 + uVar5;
            arg3 = arg3 + uVar5;
            arg1_00[100] = '\0';
            arg1_00[0x65] = '\0';
            arg1_00[0x66] = '\0';
            arg1_00[0x67] = '\0';
        }
        arg3_00 = arg3_00 - uVar5;
        iVar3 = *(arg1_00 + 0x5c);
    } while( true );
}


/* fcn.00022d64 @ 0x22d64 */

ulong fcn.00022d64(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uchar *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int iVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint16_t *puVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint in_register_00000014;
    uint64_t uVar18;
    uchar *puVar19;
    uint32_t uVar20;
    uint8_t *puVar21;
    int iVar22;
    uint32_t uVar23;
    uint in_R8;
    uint32_t uVar24;
    uint16_t *puVar25;
    uint32_t uVar26;
    int iVar27;
    int64_t iVar28;
    uint32_t uVar29;
    uint64_t uVar30;
    uint32_t uStackX_8;
    uint32_t uStackX_20;
    uint32_t uStack_88;
    uint32_t uStack_84;
    uint32_t uStack_80;
    uint64_t uStack_68;
    
    uStack_88 = *(arg1 + 0x4c);
    uStackX_8 = *(arg1 + 0x48);
    uVar30 = uStackX_8;
    uVar17 = *(arg1 + 0x54);
    iVar7 = *(arg1 + 0x10);
    uVar29 = *(arg1 + 0x58);
    uVar2 = *arg1;
    uStack_68 = *(arg1 + 0x28);
    uStackX_20 = *(arg1 + 0x40);
    puVar21 = *(arg1 + 0x30);
    uStack_84 = *(arg1 + 0x50);
    uVar3 = *(arg1 + 2);
    uVar4 = *(arg1 + 1);
    iVar8 = *(arg1 + 0x18);
    uVar24 = *(arg1 + 0x38);
    uVar9 = *(arg1 + 0x20);
    uVar6 = *(arg1 + 0x44);
    iVar10 = 0;
    uVar23 = *(arg1 + 0x3c);
    uStack_80 = uVar17;
    do {
        uVar20 = (uStackX_20 & (1 << (uVar3 & 0x1f)) - 1U) * 0x10;
        uVar5 = *(iVar7 + -0x200 + (uVar20 + uVar29) * 2);
        uVar18 = uVar20 + uVar29;
        if (uVar24 < 0x1000000) {
            uVar23 = uVar23 << 8 | *puVar21;
            uVar24 = uVar24 << 8;
            puVar21 = puVar21 + 1;
        }
        uVar11 = (uVar24 >> 0xb) * uVar5;
        if (uVar23 < uVar11) {
            iVar28 = iVar7 + 0x280;
            *(iVar7 + -0x200 + uVar18 * 2) = (0x800 - uVar5 >> 5) + uVar5;
            if ((uStackX_20 != 0) || (uVar6 != 0)) {
                uVar18 = uStack_68;
                if (uStack_68 == 0) {
                    uVar18 = uVar9;
                }
                uVar30 = uStackX_8;
                iVar28 = iVar28 + ((*((uVar18 - 1) + iVar8) + uStackX_20 * 0x100 &
                                   (0x100 << (uVar4 & 0x1f)) - (0x100U >> (uVar2 & 0x1f))) << (uVar2 & 0x1f)) * 3 * 2;
            }
            uStackX_20 = uStackX_20 + 1;
            if (uVar29 < 7) {
                uVar17 = 1;
                uVar12 = 3;
                if (uVar29 < 4) {
                    uVar12 = uVar29;
                }
                do {
                    uVar30 = uVar17;
                    uVar5 = *(iVar28 + uVar30 * 2);
                    if (uVar11 < 0x1000000) {
                        uVar23 = uVar23 << 8 | *puVar21;
                        uVar11 = uVar11 << 8;
                        puVar21 = puVar21 + 1;
                    }
                    uVar20 = (uVar11 >> 0xb) * uVar5;
                    if (uVar23 < uVar20) {
                        *(iVar28 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar17 = uVar17 * 2;
                        uVar24 = uVar20;
                    }
                    else {
                        uVar24 = uVar11 - uVar20;
                        uVar17 = uVar17 * 2 + 1;
                        uVar23 = uVar23 - uVar20;
                        *(iVar28 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                    }
                    uVar11 = uVar24;
                } while (uVar17 < 0x100);
            }
            else {
                uVar20 = *(((-(uStack_68 < uVar30) & uVar9) - uVar30) + uStack_68 + iVar8);
                uVar12 = (-(uVar29 < 10) & 0xfffffffd) + 6;
                uVar14 = 0x100;
                uVar17 = 1;
                uVar24 = uVar11;
                do {
                    uVar20 = uVar20 * 2;
                    uVar26 = uVar14 & uVar20;
                    uVar11 = uVar14 + uVar26 + uVar17;
                    uVar5 = *(iVar28 + uVar11 * 2);
                    if (uVar24 < 0x1000000) {
                        uVar23 = uVar23 << 8 | *puVar21;
                        uVar24 = uVar24 << 8;
                        puVar21 = puVar21 + 1;
                    }
                    uVar13 = (uVar24 >> 0xb) * uVar5;
                    if (uVar23 < uVar13) {
                        uVar17 = uVar17 * 2;
                        *(iVar28 + uVar11 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar24 = uVar13;
                        uVar14 = uVar26 ^ uVar14;
                    }
                    else {
                        uVar24 = uVar24 - uVar13;
                        uVar17 = uVar17 * 2 + 1;
                        uVar23 = uVar23 - uVar13;
                        *(iVar28 + uVar11 * 2) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar26;
                    }
                } while (uVar17 < 0x100);
            }
            uVar29 = uVar29 - uVar12;
            *(uStack_68 + iVar8) = uVar17;
            uStack_68 = uStack_68 + 1;
code_r0x00023834:
            uVar11 = uStack_80;
code_r0x0002383d:
            uVar30 = uStackX_8;
            uVar17 = uVar11;
        }
        else {
            uVar24 = uVar24 - uVar11;
            uVar30 = uVar29;
            uVar23 = uVar23 - uVar11;
            *(iVar7 + -0x200 + uVar18 * 2) = uVar5 - (uVar5 >> 5);
            uVar5 = *(iVar7 + 0x20 + uVar30 * 2);
            if (uVar24 < 0x1000000) {
                uVar23 = uVar23 * 0x100 | *puVar21;
                uVar24 = uVar24 * 0x100;
                puVar21 = puVar21 + 1;
            }
            uVar14 = (uVar24 >> 0xb) * uVar5;
            uVar11 = uVar17;
            if (uVar23 < uVar14) {
                puVar15 = iVar7 + -0x600;
                *(iVar7 + 0x20 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                uVar29 = uVar29 + 0xc;
code_r0x000232c6:
                uVar17 = uStack_84;
                uVar5 = *puVar15;
                if (uVar14 < 0x1000000) {
                    uVar23 = uVar23 << 8 | *puVar21;
                    uVar14 = uVar14 << 8;
                    puVar21 = puVar21 + 1;
                }
                uVar24 = (uVar14 >> 0xb) * uVar5;
                if (uVar23 < uVar24) {
                    puVar25 = puVar15 + uVar20;
                    *puVar15 = (0x800 - uVar5 >> 5) + uVar5;
                    iVar10 = 0;
                    uVar14 = 8;
                }
                else {
                    uVar14 = uVar14 - uVar24;
                    uVar23 = uVar23 - uVar24;
                    *puVar15 = uVar5 - (uVar5 >> 5);
                    uVar5 = puVar15[8];
                    if (uVar14 < 0x1000000) {
                        uVar23 = uVar23 * 0x100 | *puVar21;
                        uVar14 = uVar14 * 0x100;
                        puVar21 = puVar21 + 1;
                    }
                    uVar12 = (uVar14 >> 0xb) * uVar5;
                    if (uVar23 < uVar12) {
                        puVar15[8] = (0x800 - uVar5 >> 5) + uVar5;
                        iVar10 = 8;
                        uVar14 = 8;
                        puVar25 = puVar15 + uVar20 + 8;
                        uVar24 = uVar12;
                    }
                    else {
                        uVar24 = uVar14 - uVar12;
                        puVar25 = puVar15 + 0x100;
                        uVar23 = uVar23 - uVar12;
                        uVar14 = 0x100;
                        iVar10 = 0x10;
                        puVar15[8] = uVar5 - (uVar5 >> 5);
                    }
                }
                uVar30 = 1;
                do {
                    uVar5 = puVar25[uVar30];
                    if (uVar24 < 0x1000000) {
                        uVar23 = uVar23 << 8 | *puVar21;
                        uVar24 = uVar24 << 8;
                        puVar21 = puVar21 + 1;
                    }
                    uVar20 = (uVar24 >> 0xb) * uVar5;
                    if (uVar23 < uVar20) {
                        puVar25[uVar30] = (0x800 - uVar5 >> 5) + uVar5;
                        uVar12 = uVar30 * 2;
                        uVar24 = uVar20;
                    }
                    else {
                        uVar24 = uVar24 - uVar20;
                        uVar12 = uVar30 * 2 + 1;
                        uVar23 = uVar23 - uVar20;
                        puVar25[uVar30] = uVar5 - (uVar5 >> 5);
                    }
                    uVar30 = uVar12;
                } while (uVar12 < uVar14);
                uVar12 = uVar12 + (iVar10 - uVar14);
                if (0xb < uVar29) {
                    uVar20 = 1;
                    uVar14 = 3;
                    if (uVar12 < 4) {
                        uVar14 = uVar12;
                    }
                    iVar28 = iVar7 + (uVar14 << 6) * 2;
                    do {
                        uVar30 = uVar20;
                        uVar5 = *(iVar28 + 0x80 + uVar30 * 2);
                        if (uVar24 < 0x1000000) {
                            uVar23 = uVar23 << 8 | *puVar21;
                            uVar24 = uVar24 << 8;
                            puVar21 = puVar21 + 1;
                        }
                        uVar14 = (uVar24 >> 0xb) * uVar5;
                        if (uVar23 < uVar14) {
                            *(iVar28 + 0x80 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar20 = uVar20 * 2;
                            uVar24 = uVar14;
                        }
                        else {
                            uVar24 = uVar24 - uVar14;
                            uVar20 = uVar20 * 2 + 1;
                            uVar23 = uVar23 - uVar14;
                            *(iVar28 + 0x80 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                        }
                    } while (uVar20 < 0x40);
                    uVar20 = uVar20 - 0x40;
                    if (3 < uVar20) {
                        iVar10 = (uVar20 >> 1) - 1;
                        uVar14 = uVar20 & 1 | 2;
                        if (uVar20 < 0xe) {
                            uVar20 = (uVar14 << (iVar10 & 0x1f)) + 1;
                            iVar22 = 1;
                            do {
                                iVar27 = iVar22;
                                uVar30 = uVar20;
                                uVar5 = *(iVar7 + -0xd00 + uVar30 * 2);
                                if (uVar24 < 0x1000000) {
                                    uVar23 = uVar23 << 8 | *puVar21;
                                    uVar24 = uVar24 << 8;
                                    puVar21 = puVar21 + 1;
                                }
                                uVar11 = (uVar24 >> 0xb) * uVar5;
                                if (uVar23 < uVar11) {
                                    *(iVar7 + -0xd00 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                    uVar24 = uVar11;
                                    iVar22 = iVar27;
                                }
                                else {
                                    uVar24 = uVar24 - uVar11;
                                    uVar23 = uVar23 - uVar11;
                                    iVar22 = iVar27 * 2;
                                    *(iVar7 + -0xd00 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                                }
                                uVar20 = uVar20 + iVar22;
                                iVar10 = iVar10 + -1;
                                iVar22 = iVar27 * 2;
                            } while (iVar10 != 0);
                            uVar20 = uVar20 + iVar27 * -2;
                        }
                        else {
                            iVar10 = (uVar20 >> 1) - 5;
                            do {
                                if (uVar24 < 0x1000000) {
                                    uVar23 = uVar23 << 8 | *puVar21;
                                    uVar24 = uVar24 << 8;
                                    puVar21 = puVar21 + 1;
                                }
                                uVar24 = uVar24 >> 1;
                                uVar20 = uVar23 - uVar24 >> 0x1f;
                                uVar14 = uVar14 * 2 + 1 + uVar20;
                                uVar23 = (uVar23 - uVar24) + (uVar20 & uVar24);
                                iVar10 = iVar10 + -1;
                            } while (iVar10 != 0);
                            uVar5 = *(iVar7 + 2);
                            if (uVar24 < 0x1000000) {
                                uVar23 = uVar23 * 0x100 | *puVar21;
                                uVar24 = uVar24 << 8;
                                puVar21 = puVar21 + 1;
                            }
                            uVar20 = (uVar24 >> 0xb) * uVar5;
                            if (uVar23 < uVar20) {
                                iVar28 = 2;
                                *(iVar7 + 2) = (0x800 - uVar5 >> 5) + uVar5;
                                uVar24 = uVar20;
                            }
                            else {
                                uVar24 = uVar24 - uVar20;
                                uVar23 = uVar23 - uVar20;
                                iVar28 = 3;
                                *(iVar7 + 2) = uVar5 - (uVar5 >> 5);
                            }
                            uVar5 = *(iVar7 + iVar28 * 2);
                            if (uVar24 < 0x1000000) {
                                uVar23 = uVar23 << 8 | *puVar21;
                                uVar24 = uVar24 << 8;
                                puVar21 = puVar21 + 1;
                            }
                            uVar20 = (uVar24 >> 0xb) * uVar5;
                            if (uVar23 < uVar20) {
                                *(iVar7 + iVar28 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                iVar10 = 2;
                                uVar24 = uVar20;
                            }
                            else {
                                uVar24 = uVar24 - uVar20;
                                uVar23 = uVar23 - uVar20;
                                iVar10 = 4;
                                *(iVar7 + iVar28 * 2) = uVar5 - (uVar5 >> 5);
                            }
                            uVar20 = iVar10 + iVar28;
                            uVar30 = uVar20;
                            uVar5 = *(iVar7 + uVar30 * 2);
                            if (uVar24 < 0x1000000) {
                                uVar23 = uVar23 << 8 | *puVar21;
                                uVar24 = uVar24 << 8;
                                puVar21 = puVar21 + 1;
                            }
                            uVar26 = (uVar24 >> 0xb) * uVar5;
                            if (uVar23 < uVar26) {
                                *(iVar7 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                uVar20 = uVar20 + 4;
                                uVar24 = uVar26;
                            }
                            else {
                                uVar24 = uVar24 - uVar26;
                                uVar23 = uVar23 - uVar26;
                                *(iVar7 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                                uVar20 = uVar20 + 8;
                            }
                            uVar30 = uVar20;
                            uVar5 = *(iVar7 + uVar30 * 2);
                            if (uVar24 < 0x1000000) {
                                uVar23 = uVar23 << 8 | *puVar21;
                                uVar24 = uVar24 << 8;
                                puVar21 = puVar21 + 1;
                            }
                            uVar26 = (uVar24 >> 0xb) * uVar5;
                            if (uVar23 < uVar26) {
                                *(iVar7 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                uVar20 = uVar20 - 8;
                                uVar24 = uVar26;
                            }
                            else {
                                uVar24 = uVar24 - uVar26;
                                uVar23 = uVar23 - uVar26;
                                *(iVar7 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                            }
                            uVar20 = uVar14 * 0x10 | uVar20;
                            if (uVar20 == 0xffffffff) {
                                iVar10 = 0x112;
                                uVar29 = uVar29 - 0xc;
                                uVar17 = uVar11;
code_r0x0002387b:
                                if (uVar24 < 0x1000000) {
                                    uVar23 = uVar23 << 8 | *puVar21;
                                    uVar24 = uVar24 << 8;
                                    puVar21 = puVar21 + 1;
                                }
                                *(arg1 + 0x40) = uStackX_20;
                                *(arg1 + 0x30) = puVar21;
                                *(arg1 + 0x38) = uVar24;
                                *(arg1 + 0x3c) = uVar23;
                                *(arg1 + 0x5c) = iVar10;
                                *(arg1 + 0x28) = uStack_68;
                                *(arg1 + 0x48) = uStackX_8;
                                *(arg1 + 0x4c) = uStack_88;
                                *(arg1 + 0x50) = uStack_84;
                                *(arg1 + 0x54) = uVar17;
                                *(arg1 + 0x58) = uVar29;
                                return 0;
                            }
                        }
                    }
                    uStack_80 = uStack_84;
                    uStack_84 = uStack_88;
                    uVar29 = (-(uVar29 < 0x13) & 0xfffffffd) + 10;
                    uStack_88 = uStackX_8;
                    uVar14 = uVar6;
                    if (uVar6 == 0) {
                        uVar14 = uStackX_20;
                    }
                    uVar11 = uVar17;
                    uStackX_8 = uVar20 + 1;
                    if (uVar14 <= uVar20) goto code_r0x00023770;
                }
                uVar12 = uVar12 + 2;
                uVar30 = CONCAT44(in_register_00000014,arg2) - uStack_68;
                if (uVar30 == 0) {
code_r0x00023770:
                    *(arg1 + 0x28) = uStack_68;
                    return 1;
                }
                uVar18 = uVar12;
                if (uVar30 < uVar12) {
                    uVar18 = uVar30 & 0xffffffff;
                }
                uStackX_20 = uStackX_20 + uVar18;
                uVar30 = ((-(uStack_68 < uStackX_8) & uVar9) - uStackX_8) + uStack_68;
                iVar10 = uVar12 - uVar18;
                if (uVar9 - uVar30 < uVar18) {
                    do {
                        uVar16 = uVar30 + 1;
                        *(uStack_68 + iVar8) = *(uVar30 + iVar8);
                        uStack_68 = uStack_68 + 1;
                        uVar30 = uVar16;
                        if (uVar16 == uVar9) {
                            uVar30 = 0;
                        }
                        uVar17 = uVar18 - 1;
                        uVar18 = uVar17;
                    } while (uVar17 != 0);
                    goto code_r0x00023834;
                }
                iVar22 = uStack_68;
                puVar19 = iVar8 + uStack_68;
                uStack_68 = uStack_68 + uVar18;
                puVar1 = puVar19 + uVar18;
                do {
                    *puVar19 = puVar19[uVar30 - iVar22];
                    puVar19 = puVar19 + 1;
                } while (puVar19 != puVar1);
                goto code_r0x0002383d;
            }
            uVar24 = uVar24 - uVar14;
            uVar23 = uVar23 - uVar14;
            *(iVar7 + 0x20 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
            uVar5 = *(iVar7 + 0x38 + uVar30 * 2);
            if (uVar24 < 0x1000000) {
                uVar23 = uVar23 * 0x100 | *puVar21;
                uVar24 = uVar24 * 0x100;
                puVar21 = puVar21 + 1;
            }
            uVar14 = (uVar24 >> 0xb) * uVar5;
            if (uVar14 <= uVar23) {
                uVar24 = uVar24 - uVar14;
                uVar23 = uVar23 - uVar14;
                *(iVar7 + 0x38 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                uVar5 = *(iVar7 + 0x50 + uVar30 * 2);
                if (uVar24 < 0x1000000) {
                    uVar23 = uVar23 * 0x100 | *puVar21;
                    uVar24 = uVar24 * 0x100;
                    puVar21 = puVar21 + 1;
                }
                uVar14 = (uVar24 >> 0xb) * uVar5;
                if (uVar23 < uVar14) {
                    *(iVar7 + 0x50 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                    uVar17 = uStack_88;
                }
                else {
                    uVar24 = uVar24 - uVar14;
                    uVar23 = uVar23 - uVar14;
                    *(iVar7 + 0x50 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                    uVar5 = *(iVar7 + 0x68 + uVar30 * 2);
                    if (uVar24 < 0x1000000) {
                        uVar23 = uVar23 * 0x100 | *puVar21;
                        uVar24 = uVar24 * 0x100;
                        puVar21 = puVar21 + 1;
                    }
                    uVar12 = (uVar24 >> 0xb) * uVar5;
                    if (uVar23 < uVar12) {
                        *(iVar7 + 0x68 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar14 = uVar12;
                        uVar17 = uStack_84;
                    }
                    else {
                        uVar14 = uVar24 - uVar12;
                        uVar23 = uVar23 - uVar12;
                        *(iVar7 + 0x68 + uVar30 * 2) = uVar5 - (uVar5 >> 5);
                        uStack_80 = uStack_84;
                        uVar11 = uStack_84;
                    }
                    uStack_84 = uStack_88;
                }
                uStack_88 = uStackX_8;
                uStackX_8 = uVar17;
code_r0x000232b0:
                puVar15 = iVar7 + -0xa00;
                uVar29 = (-(uVar29 < 7) & 0xfffffffd) + 0xb;
                goto code_r0x000232c6;
            }
            *(iVar7 + 0x38 + uVar30 * 2) = (0x800 - uVar5 >> 5) + uVar5;
            uVar5 = *(iVar7 + -0xc00 + uVar18 * 2);
            if (uVar14 < 0x1000000) {
                uVar23 = uVar23 << 8 | *puVar21;
                uVar14 = uVar14 * 0x100;
                puVar21 = puVar21 + 1;
            }
            uVar24 = (uVar14 >> 0xb) * uVar5;
            if (uVar24 <= uVar23) {
                uVar14 = uVar14 - uVar24;
                uVar23 = uVar23 - uVar24;
                *(iVar7 + -0xc00 + uVar18 * 2) = uVar5 - (uVar5 >> 5);
                goto code_r0x000232b0;
            }
            uVar30 = uStackX_8;
            *(iVar7 + -0xc00 + uVar18 * 2) = (0x800 - uVar5 >> 5) + uVar5;
            uStackX_20 = uStackX_20 + 1;
            *(uStack_68 + iVar8) = *(((-(uStack_68 < uVar30) & uVar9) - uVar30) + uStack_68 + iVar8);
            uStack_68 = uStack_68 + 1;
            uVar29 = (-(uVar29 < 7) & 0xfffffffe) + 0xb;
        }
        if ((CONCAT44(in_register_00000014,arg2) <= uStack_68) || (CONCAT44(in_R8,arg3) <= puVar21))
        goto code_r0x0002387b;
    } while( true );
}


/* fcn.000238dc @ 0x238dc */

void fcn.000238dc(uint32_t arg1,int64_t arg2)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint in_register_0000000c;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    
    uVar2 = *(CONCAT44(in_register_0000000c,arg1) + 0x5c);
    uVar7 = uVar2;
    if (uVar2 - 1 < 0x111) {
        uVar9 = *(CONCAT44(in_register_0000000c,arg1) + 0x28);
        iVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0x18);
        uVar5 = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
        uVar8 = *(CONCAT44(in_register_0000000c,arg1) + 0x48);
        if (arg2 - uVar9 < uVar7) {
            uVar7 = arg2 - uVar9 & 0xffffffff;
        }
        uVar6 = uVar7;
        if ((*(CONCAT44(in_register_0000000c,arg1) + 0x44) == 0) &&
           (iVar3 = *(CONCAT44(in_register_0000000c,arg1) + 4),
           iVar3 - *(CONCAT44(in_register_0000000c,arg1) + 0x40) <= uVar6)) {
            *(CONCAT44(in_register_0000000c,arg1) + 0x44) = iVar3;
        }
        piVar1 = CONCAT44(in_register_0000000c,arg1) + 0x40;
        *piVar1 = *piVar1 + uVar6;
        *(CONCAT44(in_register_0000000c,arg1) + 0x5c) = uVar2 - uVar6;
        while (uVar6 != 0) {
            *(uVar9 + iVar4) = *(((-(uVar9 < uVar8) & uVar5) - uVar8) + uVar9 + iVar4);
            uVar9 = uVar9 + 1;
            uVar6 = uVar7 - 1;
            uVar7 = uVar6;
        }
        *(CONCAT44(in_register_0000000c,arg1) + 0x28) = uVar9;
    }
    return;
}


/* fcn.00023a0c @ 0x23a0c */

ulong fcn.00023a0c(int64_t arg1,uint32_t arg2)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t *puVar5;
    uint32_t uVar6;
    int iVar7;
    uint in_register_00000014;
    int64_t iVar8;
    uint64_t uVar9;
    int iVar10;
    int64_t iVar11;
    uint32_t uVar12;
    int64_t in_R8;
    int64_t iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint8_t *puVar16;
    ulong uVar17;
    uint32_t uVar18;
    
    puVar16 = CONCAT44(in_register_00000014,arg2);
    uVar15 = *(arg1 + 0x38);
    puVar1 = puVar16 + in_R8;
    uVar6 = *(arg1 + 0x58);
    uVar9 = uVar6;
    iVar13 = *(arg1 + 0x10);
    uVar14 = *(arg1 + 0x3c);
    uVar18 = ((1 << (*(arg1 + 2) & 0x1f)) - 1U & *(arg1 + 0x40)) * 0x10;
    if (uVar15 < 0x1000000) {
        if (puVar1 <= puVar16) {
            return 0;
        }
        uVar14 = uVar14 << 8 | *puVar16;
        uVar15 = uVar15 << 8;
        puVar16 = puVar16 + 1;
    }
    uVar2 = (uVar15 >> 0xb) * *(iVar13 + -0x200 + (uVar18 + uVar6) * 2);
    if (uVar14 < uVar2) {
        iVar11 = 0;
        iVar13 = iVar13 + 0x280;
        if ((*(arg1 + 0x44) != 0) || (*(arg1 + 0x40) != 0)) {
            iVar8 = *(arg1 + 0x28);
            if (iVar8 == 0) {
                iVar8 = *(arg1 + 0x20);
            }
            iVar13 = iVar13 + ((((1 << (*(arg1 + 1) & 0x1f)) - 1U & *(arg1 + 0x40)) << (*arg1 & 0x1f)) +
                              (*(*(arg1 + 0x18) + -1 + iVar8) >> (8U - *arg1 & 0x1f))) * 0x300 * 2;
        }
        if (uVar6 < 7) {
            uVar9 = 1;
            do {
                if (uVar2 < 0x1000000) {
                    if (puVar1 <= puVar16) {
                        return 0;
                    }
                    uVar14 = uVar14 << 8 | *puVar16;
                    uVar2 = uVar2 << 8;
                    puVar16 = puVar16 + 1;
                }
                uVar15 = (uVar2 >> 0xb) * *(iVar13 + uVar9 * 2);
                if (uVar14 < uVar15) {
                    uVar6 = uVar9 * 2;
                    uVar2 = uVar15;
                }
                else {
                    uVar2 = uVar2 - uVar15;
                    uVar6 = uVar9 * 2 + 1;
                    uVar14 = uVar14 - uVar15;
                }
                uVar9 = uVar6;
            } while (uVar6 < 0x100);
        }
        else {
            if (*(arg1 + 0x28) < *(arg1 + 0x48)) {
                iVar11 = *(arg1 + 0x20);
            }
            uVar6 = 1;
            uVar18 = 0x100;
            uVar15 = *((*(arg1 + 0x18) - *(arg1 + 0x48)) + *(arg1 + 0x28) + iVar11);
            do {
                uVar15 = uVar15 * 2;
                uVar12 = uVar18 & uVar15;
                if (uVar2 < 0x1000000) {
                    if (puVar1 <= puVar16) {
                        return 0;
                    }
                    uVar14 = uVar14 << 8 | *puVar16;
                    uVar2 = uVar2 << 8;
                    puVar16 = puVar16 + 1;
                }
                uVar3 = (uVar2 >> 0xb) * *(iVar13 + (uVar18 + uVar6 + uVar12) * 2);
                if (uVar14 < uVar3) {
                    uVar6 = uVar6 * 2;
                    uVar2 = uVar3;
                    uVar18 = uVar12 ^ uVar18;
                }
                else {
                    uVar2 = uVar2 - uVar3;
                    uVar6 = uVar6 * 2 + 1;
                    uVar14 = uVar14 - uVar3;
                    uVar18 = uVar12;
                }
            } while (uVar6 < 0x100);
        }
        uVar17 = 1;
        goto code_r0x00023be9;
    }
    uVar15 = uVar15 - uVar2;
    uVar14 = uVar14 - uVar2;
    if (uVar15 < 0x1000000) {
        if (puVar1 <= puVar16) {
            return 0;
        }
        uVar14 = uVar14 * 0x100 | *puVar16;
        uVar15 = uVar15 * 0x100;
        puVar16 = puVar16 + 1;
    }
    iVar4 = 0;
    uVar12 = (uVar15 >> 0xb) * *(iVar13 + 0x20 + uVar9 * 2);
    if (uVar14 < uVar12) {
        puVar5 = iVar13 + -0x600;
        uVar15 = 0;
        uVar17 = 2;
    }
    else {
        uVar15 = uVar15 - uVar12;
        uVar14 = uVar14 - uVar12;
        uVar17 = 3;
        if (uVar15 < 0x1000000) {
            if (puVar1 <= puVar16) {
                return 0;
            }
            uVar14 = uVar14 * 0x100 | *puVar16;
            uVar15 = uVar15 * 0x100;
            puVar16 = puVar16 + 1;
        }
        uVar2 = (uVar15 >> 0xb) * *(iVar13 + 0x38 + uVar9 * 2);
        if (uVar14 < uVar2) {
            if (uVar2 < 0x1000000) {
                if (puVar1 <= puVar16) {
                    return 0;
                }
                uVar14 = uVar14 << 8 | *puVar16;
                uVar2 = uVar2 * 0x100;
                puVar16 = puVar16 + 1;
            }
            uVar12 = (uVar2 >> 0xb) * *(iVar13 + -0xc00 + (uVar18 + uVar6) * 2);
            if (uVar14 < uVar12) {
                if ((uVar12 < 0x1000000) && (puVar1 <= puVar16)) {
                    return 0;
                }
                return 3;
            }
code_r0x00023d7b:
            uVar14 = uVar14 - uVar12;
            uVar12 = uVar2 - uVar12;
        }
        else {
            uVar15 = uVar15 - uVar2;
            uVar14 = uVar14 - uVar2;
            if (uVar15 < 0x1000000) {
                if (puVar1 <= puVar16) {
                    return 0;
                }
                uVar14 = uVar14 * 0x100 | *puVar16;
                uVar15 = uVar15 * 0x100;
                puVar16 = puVar16 + 1;
            }
            uVar12 = (uVar15 >> 0xb) * *(iVar13 + 0x50 + uVar9 * 2);
            if (uVar12 <= uVar14) {
                uVar2 = uVar15 - uVar12;
                uVar14 = uVar14 - uVar12;
                if (uVar2 < 0x1000000) {
                    if (puVar1 <= puVar16) {
                        return 0;
                    }
                    uVar14 = uVar14 * 0x100 | *puVar16;
                    uVar2 = uVar2 * 0x100;
                    puVar16 = puVar16 + 1;
                }
                uVar12 = (uVar2 >> 0xb) * *(iVar13 + 0x68 + uVar9 * 2);
                if (uVar12 <= uVar14) goto code_r0x00023d7b;
            }
        }
        uVar15 = 0xc;
        puVar5 = iVar13 + -0xa00;
    }
    if (uVar12 < 0x1000000) {
        if (puVar1 <= puVar16) {
            return 0;
        }
        uVar14 = uVar14 << 8 | *puVar16;
        uVar12 = uVar12 << 8;
        puVar16 = puVar16 + 1;
    }
    uVar2 = (uVar12 >> 0xb) * *puVar5;
    if (uVar14 < uVar2) {
        puVar5 = puVar5 + uVar18;
        uVar18 = 8;
    }
    else {
        uVar12 = uVar12 - uVar2;
        uVar14 = uVar14 - uVar2;
        if (uVar12 < 0x1000000) {
            if (puVar1 <= puVar16) {
                return 0;
            }
            uVar14 = uVar14 * 0x100 | *puVar16;
            uVar12 = uVar12 * 0x100;
            puVar16 = puVar16 + 1;
        }
        uVar6 = (uVar12 >> 0xb) * puVar5[8];
        if (uVar14 < uVar6) {
            puVar5 = puVar5 + uVar18 + 8;
            uVar18 = 8;
            iVar4 = 8;
            uVar2 = uVar6;
        }
        else {
            uVar2 = uVar12 - uVar6;
            puVar5 = puVar5 + 0x100;
            uVar14 = uVar14 - uVar6;
            iVar4 = 0x10;
            uVar18 = 0x100;
        }
    }
    uVar9 = 1;
    do {
        if (uVar2 < 0x1000000) {
            if (puVar1 <= puVar16) {
                return 0;
            }
            uVar14 = uVar14 << 8 | *puVar16;
            uVar2 = uVar2 << 8;
            puVar16 = puVar16 + 1;
        }
        uVar6 = (uVar2 >> 0xb) * puVar5[uVar9];
        if (uVar14 < uVar6) {
            uVar12 = uVar9 * 2;
            uVar2 = uVar6;
        }
        else {
            uVar2 = uVar2 - uVar6;
            uVar12 = uVar9 * 2 + 1;
            uVar14 = uVar14 - uVar6;
        }
        uVar9 = uVar12;
    } while (uVar12 < uVar18);
    uVar12 = uVar12 + (iVar4 - uVar18);
    if (uVar15 < 4) {
        uVar15 = 3;
        if (uVar12 < 3) {
            uVar15 = uVar12;
        }
        uVar9 = 1;
        do {
            if (uVar2 < 0x1000000) {
                if (puVar1 <= puVar16) {
                    return 0;
                }
                uVar14 = uVar14 << 8 | *puVar16;
                uVar2 = uVar2 << 8;
                puVar16 = puVar16 + 1;
            }
            uVar6 = (uVar2 >> 0xb) * *(iVar13 + (uVar15 << 6) * 2 + 0x80 + uVar9 * 2);
            if (uVar14 < uVar6) {
                uVar18 = uVar9 * 2;
                uVar2 = uVar6;
            }
            else {
                uVar2 = uVar2 - uVar6;
                uVar18 = uVar9 * 2 + 1;
                uVar14 = uVar14 - uVar6;
            }
            uVar9 = uVar18;
        } while (uVar18 < 0x40);
        uVar18 = uVar18 - 0x40;
        if (3 < uVar18) {
            iVar4 = (uVar18 >> 1) - 1;
            if (uVar18 < 0xe) {
                iVar13 = iVar13 + ((uVar18 & 1 | 2) << (iVar4 & 0x1f)) * 2 + -0xd00;
            }
            else {
                iVar4 = (uVar18 >> 1) - 5;
                do {
                    if (uVar2 < 0x1000000) {
                        if (puVar1 <= puVar16) {
                            return 0;
                        }
                        uVar14 = uVar14 << 8 | *puVar16;
                        uVar2 = uVar2 << 8;
                        puVar16 = puVar16 + 1;
                    }
                    uVar2 = uVar2 >> 1;
                    uVar14 = uVar14 - (0xffffffffU - (uVar14 - uVar2 >> 0x1f) & uVar2);
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                iVar4 = 4;
            }
            uVar9 = 1;
            iVar7 = 1;
            while( true ) {
                if (uVar2 < 0x1000000) {
                    if (puVar1 <= puVar16) {
                        return 0;
                    }
                    uVar14 = uVar14 << 8 | *puVar16;
                    uVar2 = uVar2 << 8;
                    puVar16 = puVar16 + 1;
                }
                uVar15 = (uVar2 >> 0xb) * *(iVar13 + uVar9 * 2);
                if (uVar14 < uVar15) {
                    uVar2 = uVar15;
                    iVar10 = iVar7;
                }
                else {
                    uVar2 = uVar2 - uVar15;
                    uVar14 = uVar14 - uVar15;
                    iVar10 = iVar7 * 2;
                }
                iVar7 = iVar7 * 2;
                iVar4 = iVar4 + -1;
                if (iVar4 == 0) break;
                uVar9 = uVar9 + iVar10;
            }
        }
    }
code_r0x00023be9:
    if ((uVar2 < 0x1000000) && (puVar1 <= puVar16)) {
        return 0;
    }
    return uVar17;
}


/* fcn.00023968 @ 0x23968 */

ulong fcn.00023968(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    do {
        iVar2 = arg2;
        if (*(arg1 + 0x44) == 0) {
            uVar3 = *(arg1 + 4) - *(arg1 + 0x40);
            if (uVar3 < arg2 - *(arg1 + 0x28)) {
                iVar2 = uVar3 + *(arg1 + 0x28);
            }
            if ((*(arg1 + 0x40) == 0) && (0xbffffbff < *(arg1 + 0x3c))) {
                return 1;
            }
        }
        uVar1 = fcn.00022d64(arg1,iVar2,arg3);
        if (uVar1 != 0) {
            return uVar1;
        }
        if ((*(arg1 + 0x44) == 0) && (*(arg1 + 4) <= *(arg1 + 0x40))) {
            *(arg1 + 0x44) = *(arg1 + 4);
        }
        fcn.000238dc(arg1,arg2);
    } while (((*(arg1 + 0x28) < arg2) && (*(arg1 + 0x30) < arg3)) && (*(arg1 + 0x5c) < 0x112));
    return 0;
}


/* fcn.000243b4 @ 0x243b4 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000243b4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_18 [8];
    uint64_t uStackX_20;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t var_20h;
    int64_t var_18h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    var_20h._0_4_ = 0x9b3ada4f;
    var_20h._4_4_ = 0x4c24ae56;
    var_18h._0_4_ = 0x3bf0ea8d;
    var_18h._4_4_ = 0x50ae5875;
    iVar1 = (**(*0x27c48 + 0x138))(2,0x25b30,0,&uStackX_20,&iStack_38);
    if (-1 < iVar1) {
        uVar2 = 0;
        iVar1 = -0x7ffffffffffffff2;
        if (uStackX_20 != 0) {
            do {
                iVar1 = (**(*0x27c48 + 0x98))(*(iStack_38 + uVar2 * 8),0x25b30,&iStack_30);
                if (-1 < iVar1) {
                    iVar1 = (**(iStack_30 + 0x18))(iStack_30,&var_20h,0x19,0,arg1,arg2,auStackX_18);
                    if (-1 < iVar1) break;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_20);
        }
        (**(*0x27c48 + 0x48))(iStack_38);
    }
    return iVar1;
}


/* fcn.000245a8 @ 0x245a8 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000245a8(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    int64_t var_28h;
    int64_t var_30h;
    uint32_t var_38h;
    int64_t aiStack_38 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x27c48 + 0x138))(2,0x25b30,0,&var_28h,aiStack_38);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (var_28h != 0) {
            do {
                iVar1 = (**(*0x27c48 + 0x98))(*(aiStack_38[0] + uVar2 * 8),0x25b30,&var_20h);
                if (-1 < iVar1) {
                    iStackX_18 = 0;
                    aiStack_38[1] = 0;
                    iVar1 = (**(var_20h + 0x18))(var_20h,0x26eb0,0x18,0,&iStackX_18,aiStack_38 + 1,auStackX_10);
                    if (-1 < iVar1) {
                        iStackX_18 = iStackX_18 + 0x10;
                        if (arg1 != iStackX_18) {
                            fcn.00010430(arg1,iStackX_18,0x78);
                        }
                        iStackX_18 = iStackX_18 + -0x10;
                        (**(*0x27c48 + 0x48))();
                        return 0;
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < var_28h);
        }
        (**(*0x27c48 + 0x48))(aiStack_38[0]);
        iVar1 = -0x7ffffffffffffff2;
    }
    return iVar1;
}


/* fcn.0001fac8 @ 0x1fac8 */

ulong fcn.0001fac8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    ulong uVar1;
    uint64_t uVar2;
    
    if (((arg1 == 0) || (arg2 == 0)) || (uVar2 = fcn.0001fa94(arg1,0xf4241), 1000000 < uVar2)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        *arg2 = 0;
        for (; *arg1 - 0x30 < 10; arg1 = arg1 + 2) {
            if (~(*arg1 - 0x30) / 10 < *arg2) {
                *arg2 = 0xffffffffffffffff;
                return 0x8000000000000003;
            }
            *arg2 = (*arg1 - 0x30) + *arg2 * 10;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000246bc @ 0x246bc */

//WARNING: Variable defined which should be unmapped: var_1h

uint fcn.000246bc(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *in_RDX;
    int64_t *piVar3;
    bool bVar4;
    uint auStackX_8 [2];
    int64_t var_67h;
    int16_t iStack_98;
    int16_t iStack_96;
    int16_t iStack_94;
    int16_t iStack_92;
    ushort uStack_90;
    int64_t aiStack_88 [4];
    char cStack_62;
    char cStack_61;
    char cStack_5f;
    char cStack_5e;
    int16_t var_39h;
    int16_t var_37h;
    int16_t var_35h;
    int16_t var_33h;
    int16_t var_31h;
    int64_t var_29h;
    int8_t var_3h;
    int8_t var_2h;
    int8_t var_1h;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (piVar2 == NULL) {
        iVar1 = fcn.000245a8(aiStack_88);
    }
    else {
        piVar3 = piVar2 + 0x1ffffe;
        do {
            if (((*piVar3 == *0x26ec0) && (*0x26ec0 == *piVar3)) && (*0x26ec8 == piVar3[1])) {
                in_RDX = piVar3 + 2;
                if (aiStack_88 != in_RDX) {
                    fcn.00010430(aiStack_88,in_RDX,0x78);
                }
                goto code_r0x00024740;
            }
            in_RDX = piVar3 + -4;
            bVar4 = piVar2 <= piVar3;
            piVar3 = in_RDX;
        } while (bVar4);
        iVar1 = -0x7ffffffffffffff2;
    }
    if (iVar1 < 0) {
        auStackX_8[0] = 0;
    }
    else {
code_r0x00024740:
        iStack_98 = cStack_62;
        iStack_96 = cStack_61;
        iStack_94 = cStack_5f;
        iStack_92 = cStack_5e;
        uStack_90 = 0;
        fcn.0001fac8(&iStack_98,in_RDX,auStackX_8);
    }
    return auStackX_8[0];
}


/* fcn.00024788 @ 0x24788 */

//WARNING: Variable defined which should be unmapped: var_1h

bool fcn.00024788(void)

{
    int iVar1;
    int64_t iVar2;
    uchar *noname_1;
    int iVar3;
    int aiStackX_8 [2];
    int64_t var_67h;
    int16_t iStack_98;
    int16_t iStack_96;
    int16_t iStack_94;
    int16_t iStack_92;
    ushort uStack_90;
    uchar auStack_88 [38];
    char cStack_62;
    char cStack_61;
    char cStack_5f;
    char cStack_5e;
    int16_t var_39h;
    int16_t var_37h;
    int16_t var_35h;
    int16_t var_33h;
    int16_t var_31h;
    int64_t var_29h;
    int8_t var_3h;
    int8_t var_2h;
    int8_t var_1h;
    
    iVar1 = 0;
    if (*0x27cb0 == 0) {
        iVar3 = 0;
    }
    else {
        noname_1 = *0x27cb0 + 0x18;
        if (auStack_88 != noname_1) {
            fcn.00010430(auStack_88,noname_1,0x78);
        }
        iStack_98 = cStack_62;
        iStack_96 = cStack_61;
        iStack_94 = cStack_5f;
        iStack_92 = cStack_5e;
        uStack_90 = 0;
        fcn.0001fac8(&iStack_98,noname_1,aiStackX_8);
        iVar3 = aiStackX_8[0];
    }
    iVar2 = fcn.0001fbb8(0x259c0,*0x27b00);
    if (iVar2 != 0) {
        iVar1 = fcn.000246bc(*(iVar2 + 0x18));
    }
    return iVar3 == iVar1;
}


/* fcn.000244b4 @ 0x244b4 */

void fcn.000244b4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t var_20h_2;
    int64_t var_28h;
    int64_t var_40h;
    int64_t var_38h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h_2;
    int32_t var_24h;
    int64_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_bp_10h;
    int32_t var_ch;
    
    var_28h = &var_20h;
    var_30h = -0x64c525b1;
    var_2ch = 0x4c24ae56;
    var_28h_2 = 0x3bf0ea8d;
    var_24h = 0x50ae5875;
    var_20h._0_4_ = 0x140704;
    var_20h._4_4_ = 0x5c60f367;
    var_18h = 0x419aa505;
    var_14h = 0x4f2a9e85;
    var_bp_10h = -0x1a90350a;
    var_ch = 0x4ff7f;
    iVar1 = (**(*0x27c48 + 0xb8))(0x25b30,&var_28h,&var_40h);
    if (iVar1 < 0) {
        fcn.000243b4(arg1,arg2);
    }
    else {
        iVar1 = (**(*0x27c48 + 0x98))(var_40h,0x25b30,&var_38h);
        if (-1 < iVar1) {
            (**(var_38h + 0x18))(var_38h,&var_30h,0x19,0,arg1,arg2,&var_20h_2);
        }
    }
    return;
}


/* fcn.000254f8 @ 0x254f8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000254f8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    uint32_t *puVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *arg1_00;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int aiStackX_20 [2];
    uint32_t var_48h;
    int aiStack_48 [2];
    uint32_t *puStack_40;
    int64_t aiStack_38 [2];
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    cVar1 = fcn.000255f8(noname_0,&puStack_40,aiStackX_20);
    if ((cVar1 != '\0') && (arg1 != 0)) {
        if (aiStackX_20[0] == 1) {
            uVar2 = puStack_40[0x1f];
        }
        else {
            uVar2 = *(puStack_40 + 0x1f);
        }
        if (uVar2 != 0xff) {
            uVar8 = 0;
            iVar6 = 1000000;
            if (arg2 == 0) {
                return 0;
            }
            uVar7 = 0;
            do {
                while( true ) {
                    if (aiStackX_20[0] == 1) {
                        uVar5 = puStack_40[0x1f];
                    }
                    else {
                        uVar5 = *(puStack_40 + 0x1f);
                    }
                    if ((uVar5 & 2) == 0) break;
                    if (aiStackX_20[0] == 1) {
                        *puStack_40 = *(uVar7 + arg1);
                    }
                    else {
                        *puStack_40 = *(uVar7 + arg1);
                    }
                    uVar8 = uVar8 + 1;
                    uVar7 = uVar8;
                    if (arg2 <= uVar7) {
                        return arg2;
                    }
                }
                if (iVar6 == 0) {
                    arg1_00 = aiStack_38;
                    puVar3 = puStack_40;
                    cVar1 = fcn.000255f8(puStack_40,arg1_00,aiStack_48);
                    if (cVar1 == '\0') {
                        return 0;
                    }
                    if (aiStack_48[0] == 1) {
                        uVar4 = *(aiStack_38[0] + 0x10);
                    }
                    else {
                        uVar4 = CONCAT71(puVar3 >> 8,*(aiStack_38[0] + 4));
                    }
                    uVar2 = uVar4 >> 5;
                    if ((uVar2 & 1) == 0) {
                        return 0;
                    }
                    fcn.0002577c(CONCAT71(uVar4 >> 8,uVar2) & 0xffffffffffffff01,arg1_00);
                    iVar6 = 1000000;
                }
                fcn.0001fc18(0x23);
                iVar6 = iVar6 + -10;
            } while( true );
        }
    }
    return 0;
}


/* fcn.00024eb8 @ 0x24eb8 */

ulong fcn.00024eb8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg2_00;
    uint8_t uVar1;
    uchar *arg2_01;
    uint *arg3_00;
    bool bVar2;
    bool bVar3;
    uint uStack_108;
    uint uStack_104;
    uchar auStack_f8 [12];
    uint32_t uStack_ec;
    ulong uStack_e8;
    ulong uStack_e0;
    int64_t iStack_88;
    uchar auStack_78 [112];
    
    if (arg3 == 0) {
        return 0;
    }
    if (*0xfe1000e8 == 0xff) {
        return 0x8000000000000015;
    }
    if ((*0xfe1000e8 & 1) == 0) {
        return 0x8000000000000015;
    }
    uVar1 = *0xfe1000e8 >> 1 & 3;
    arg2_00 = arg1;
    if (uVar1 == 0) {
        bVar2 = arg2_00 == 1;
        bVar3 = arg2_00 == 2;
    }
    else if (uVar1 == 1) {
        bVar2 = arg2_00 - 1 < 2;
        bVar3 = arg2_00 - 1 == 2;
    }
    else {
        if (uVar1 != 2) {
            if (uVar1 != 3) {
                return 0x8000000000000015;
            }
            goto code_r0x00024f3f;
        }
        bVar2 = arg2_00 - 1 < 3;
        bVar3 = arg2_00 - 1 == 3;
    }
    if (!bVar2 && !bVar3) {
        return 0x8000000000000015;
    }
code_r0x00024f3f:
    uStack_108 = 0x48;
    uStack_104 = 0xe;
    fcn.0002510c(auStack_78);
    arg3_00 = &uStack_108;
    arg2_01 = auStack_f8;
    fcn.00025160(auStack_78,arg2_01,arg3_00);
    if (iStack_88 != 0) {
        uStack_ec = uStack_ec & 0xffff0fff | 0xff0000;
        uStack_e8 = *0x25d00;
        uStack_e0 = *0x25d08;
        fcn.00024fc8(auStack_f8,arg2_01,arg3_00,arg2_00);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00010ae0 @ 0x10ae0 */

uint64_t fcn.00010ae0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
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
    if (arg2 != 0) {
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


/* fcn.00024c84 @ 0x24c84 */

ulong fcn.00024c84(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.00010ae0(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.00024d28 @ 0x24d28 */

char fcn.00024d28(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.00024c84();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.00024cc0 @ 0x24cc0 */

int64_t fcn.00024cc0(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.00024c84();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.00024cfc @ 0x24cfc */

uint64_t fcn.00024cfc(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.00024d28();
    if (iVar1 == 1) {
        iVar1 = fcn.00024cc0();
        uVar2 = *(iVar1 + 0x20);
    }
    else {
        uVar2 = rdmsr(0x802);
    }
    return uVar2;
}


/* fcn.00010bc0 @ 0x10bc0 */

uint64_t fcn.00010bc0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0002510c @ 0x2510c */

void fcn.0002510c(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x27dc0;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x27d40) {
        fcn.00010430(arg1_00,0x27d40,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x252ac;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x251cc;
    *(arg1_00 + 4) = fcn.0001fbb4;
    *(arg1_00 + 8) = 0x25270;
    *(arg1_00 + 10) = 0x25268;
    *(arg1_00 + 0xc) = 0x25278;
    *(arg1_00 + 0xe) = 0x25280;
    *(arg1_00 + 0x10) = 0x25288;
    *(arg1_00 + 0x12) = 0x25290;
    *(arg1_00 + 0x14) = 0x252a4;
    *(arg1_00 + 0x16) = 0x25298;
    return;
}


/* fcn.00025160 @ 0x25160 */

int64_t fcn.00025160(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    iVar1 = 0x27dc0;
    if (arg1 != 0) {
        iVar1 = arg1;
    }
    if (arg2 != 0x27d40) {
        fcn.00010430(arg2,0x27d40,0x78);
    }
    *(arg2 + 8) = *(arg2 + 8) & 0xfffffffe;
    *(arg2 + 0x20) = 0;
    *arg2 = iVar1;
    if (*(iVar1 + 8) != NULL) {
        (**(iVar1 + 8))(arg2,arg3);
    }
    return arg2;
}


/* fcn.00024fc8 @ 0x24fc8 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.00024fc8(uint32_t arg1,ulong noname_1,ulong noname_2,uint32_t arg2)

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
    if (piVar2 != 0x27cc0) {
        puVar4 = &uStack_88;
        uVar5 = (arg2 & 7) << 4 | *(piVar2 + 0xc) & 0xffff80;
        uStack_58 = uVar5 | 0x1000002;
        if ((*(piVar2 + 0xc) & 0xff0000) == 0xff0000) {
            iStack_54 = piVar2[2];
            iStack_4c = piVar2[3];
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x27a90;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = piVar2[4];
            *(piVar2 + 4) = _auStack_44 + 1;
            *puVar4 = *0x27a94;
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
                fcn.00010470(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x27aa8;
        }
        else {
            uStack_58 = uVar5 | 0x1000202;
            *puVar4 = *0x27aa4;
            puVar4[1] = *0x27aac;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x27ad0;
        (**(*piVar2 + 0x18))(piVar2,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.000257d0 @ 0x257d0 */

int64_t fcn.000257d0(uint32_t arg1)

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


/* fcn.00025418 @ 0x25418 */

void fcn.00025418(ulong noname_0,int64_t arg1)

{
    if ((((*arg1 != -1) && ((*(arg1 + 4) & 2) == 0)) && ((*(arg1 + 0x10) & 0xfffff000) != 0)) &&
       ((*(arg1 + 0x10) & 0xfffff000) != 0xfffff000)) {
        *(arg1 + 4) = *(arg1 + 4) | 2;
    }
    return;
}


/* fcn.000255f8 @ 0x255f8 */

uint64_t fcn.000255f8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    if ((*0xfdcb0618 & 2) == 0) {
        uVar2 = fcn.000257d0(0xf1000);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) goto code_r0x00025768;
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
        uVar4 = *0x26ef4;
        uVar2 = fcn.000257d0(*0x26ef4);
        *arg1 = uVar2;
        if ((uVar2 + 0x1000 & 0xffffffffffffefff) == 0) {
code_r0x00025768:
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


/* fcn.0002577c @ 0x2577c */

void fcn.0002577c(int64_t arg1,uint32_t arg2)

{
    char cVar1;
    uint8_t uVar2;
    int aiStackX_10 [2];
    int64_t aiStackX_18 [2];
    
    aiStackX_10[0] = CONCAT31(aiStackX_10[0]._1_3_,arg2);
    cVar1 = fcn.000255f8(arg1,aiStackX_18,aiStackX_10);
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


/* fcn.0001fc18 @ 0x1fc18 */

void fcn.0001fc18(int64_t arg1)

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
            fcn.000102a0();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


