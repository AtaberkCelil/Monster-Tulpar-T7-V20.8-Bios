// decompiled by r2ghidra: 1908_TcpDxe.pe32
// functions: 127

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x1b5f0 = *(arg2 + 0x60);
    *0x1b5f8 = *(arg2 + 0x58);
    *0x1b5e8 = arg2;
    (**(*0x1b5f0 + 0x140))(0x1ac30,0,0x1b608);
    arg2_00 = 0x1ab80;
    (**(*0x1b5f0 + 0x98))(arg1,0x1ab80,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010560(arg1,arg2_00);
    return;
}


/* fcn.00010560 @ 0x10560 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010560(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    ulong noname_1;
    ulong uStackX_10;
    char acStackX_18 [8];
    int aiStackX_20 [2];
    uint32_t var_30h;
    int64_t var_38h;
    uint16_t uStack_28;
    ushort uStack_25;
    uchar uStack_23;
    uchar uStack_22;
    uint32_t uStack_20;
    int64_t var_bp_10h;
    int32_t var_8h;
    
    uStackX_10 = 8;
    noname_1 = 0x1ac50;
    iVar2 = (**(*0x1b5f8 + 0x48))(L"NetworkStackVar",0x1ac50,0,&uStackX_10,acStackX_18);
    if ((iVar2 == 0) && (acStackX_18[0] == '\0')) {
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        iVar2 = fcn.00018ab4(arg1,noname_1,0x1adc0,arg1);
        if (-1 < iVar2) {
            iVar2 = fcn.00018ab4(arg1,noname_1,0x1ac80,0);
            if (iVar2 < 0) {
                (**(*0x1b5f0 + 0x150))(*0x1ade8,0x1abf0,0x1adc0,0x1ac20,0x1ae18,0x1ab90,0x1ae30,0);
            }
            else {
                (**(*0x1b5f8 + 0x18))(&uStack_28);
                (**(*0x1b5f0 + 0xf0))(aiStackX_20);
                uVar1 = ((aiStackX_20[0] +
                         (CONCAT31(CONCAT21(uStack_25,uStack_23),uStack_22) ^ uStack_28 << 7 ^ uStack_20)) *
                         0x41c64e6d + 0x3039) % 0xffffffff;
                *0x1adf0 = uVar1 % *0x1adf0;
                *0x1b610 = (uVar1 & 0x3ff) + 0x400;
                iVar2 = 0;
                *0x1b612 = *0x1b610;
            }
        }
    }
    return iVar2;
}


/* fcn.00018ab4 @ 0x18ab4 */

void fcn.00018ab4(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    (**(*0x1b5f0 + 0x148))(arg2 + 0x28,0x1abf0,arg2,0x1ac20,0x1ae18,0x1ab90,0x1ae30,0);
    return;
}


/* fcn.000182c0 @ 0x182c0 */

void fcn.000182c0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00018290(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00018290 @ 0x18290 */

ulong fcn.00018290(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1b5f0 + 0x40))(4,param_2,auStackX_18);
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 43264 named .text
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


/* fcn.0001a168 @ 0x1a168 */

int64_t fcn.0001a168(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_20;
    
    iVar1 = fcn.000182c0(0xa0);
    if (iVar1 != 0) {
        iVar2 = iVar1 + 0x60;
        *iVar2 = iVar2;
        *(iVar1 + 0x68) = iVar2;
        iVar2 = iVar1 + 0x10;
        *iVar2 = iVar2;
        *(iVar1 + 0x18) = iVar2;
        iVar2 = *0x1b5f0;
        *(iVar1 + 0x20) = arg2;
        *(iVar1 + 0x28) = arg1;
        *(iVar1 + 0x90) = arg3;
        iStackX_20 = 0;
        iVar3 = iVar1;
        iVar2 = (**(iVar2 + 0x50))(0x200,0x10,0x1a14c,iVar1,&iStackX_20);
        if (-1 < iVar2) {
            *(iVar1 + 0x48) = iStackX_20;
            iVar2 = fcn.000195ec(arg2,arg1,iVar1 + 0x30,CONCAT71(iVar3 >> 8,arg3));
            if (-1 < iVar2) {
                return iVar1;
            }
        }
        if (iStackX_20 != 0) {
            (**(*0x1b5f0 + 0x70))();
        }
        (**(*0x1b5f0 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.0001a408 @ 0x1a408 */

int64_t fcn.0001a408(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *arg1_00;
    uint in_R9D;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 == NULL) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        if (arg1_00[8] != '\0') {
            *(*arg1_00 + 8) = arg1_00[1];
            *arg1_00[1] = *arg1_00;
            iVar2 = (**(arg1_00[7] + 8))(arg1_00[7],0);
            if (iVar2 < 0) {
                return iVar2;
            }
            *(arg1_00 + 8) = 0;
            piVar1 = arg1_00 + 2;
            while (*piVar1 != piVar1) {
                fcn.0001a8c0(arg1_00,*piVar1 + -0x18);
            }
            (**(*0x1b5f0 + 0x70))(arg1_00[9]);
        }
        iVar2 = fcn.00019718(arg1_00[4],arg1_00[5],arg1_00[6],CONCAT31(in_R9D >> 8,arg1_00[0x12]));
        if (-1 < iVar2) {
            (**(*0x1b5f0 + 0x48))(arg1_00);
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.0001a25c @ 0x1a25c */

int64_t fcn.0001a25c(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    ulong *puVar4;
    uint16_t uVar5;
    uint in_register_00000014;
    uchar *puVar6;
    
    puVar6 = CONCAT44(in_register_00000014,arg2);
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    if (puVar6 == NULL) {
        return -0x7ffffffffffffffe;
    }
    if (*(puVar4 + 8) != '\0') {
        return -0x7ffffffffffffff1;
    }
    cVar1 = *(puVar4 + 0x12);
    if (cVar1 == '\x04') {
        if (puVar6[0x11] != '\0') {
            return -0x7ffffffffffffffd;
        }
        if (puVar6[5] == '\0') {
            uVar2 = *(puVar6 + 6) >> 0x10;
            uVar5 = *(puVar6 + 6);
            *(puVar4 + 0x94) = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar2 << 8 | uVar2 >> 8);
            uVar2 = *(puVar6 + 10) >> 0x10;
            uVar5 = *(puVar6 + 10);
            *(puVar4 + 0x13) = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar2 << 8 | uVar2 >> 8);
        }
        iVar3 = puVar4[7];
    }
    else {
        iVar3 = puVar4[7];
    }
    iVar3 = (**(iVar3 + 8))(iVar3,puVar6);
    if (-1 < iVar3) {
        if (((cVar1 == '\x04') && (iVar3 = (**(puVar4[7] + 0x18))(puVar4[7],1,0x1b600,0x1b600,0x1b600), iVar3 < 0))
           && (iVar3 != -0x7ffffffffffffff2)) {
            return iVar3;
        }
        puVar4[0x10] = *(puVar6 + 0x48);
        puVar4[0x11] = *(puVar6 + 0x50);
        puVar4[0xe] = *(puVar6 + 0x38);
        puVar4[0xf] = *(puVar6 + 0x40);
        *(puVar4 + 0x41) = *puVar6;
        iVar3 = puVar4[7];
        if (cVar1 == '\x04') {
            iVar3 = (**(iVar3 + 0x28))();
            if (iVar3 < 0) {
                (**(puVar4[7] + 8))(puVar4[7],0);
                return iVar3;
            }
        }
        else {
            iVar3 = (**(iVar3 + 0x30))(iVar3,puVar4 + 9);
            if (iVar3 < 0) {
                (**(puVar4[7] + 8))(puVar4[7],0);
                return iVar3;
            }
        }
        *(puVar4 + 8) = 1;
        *puVar4 = 0x1aee0;
        puVar4[1] = *0x1aee8;
        **0x1aee8 = puVar4;
        *0x1aee8 = puVar4;
        return iVar3;
    }
    return iVar3;
}


/* fcn.000106ec @ 0x106ec */

void fcn.000106ec(void)

{
    *0x1b5d8 = *0x1b5d8 + -1;
    if (*0x1b5d8 < 1) {
        (**(*0x1b5f0 + 0x58))(*0x1b5d0,0,0);
        (**(*0x1b5f0 + 0x70))(*0x1b5d0);
        *0x1b5d0 = 0;
    }
    return;
}


/* fcn.000109e0 @ 0x109e0 */

ulong fcn.000109e0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar2 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = *(arg2 + 8);
        if (((uVar1 != 0) && (*(arg2 + 0x10) != 0)) && (uVar1 != 0)) {
            do {
                if (*(arg1 + -0x20) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x00010a1f. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar3 = (**(*arg2 + 8))(*arg2);
                    return uVar3;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001073c @ 0x1073c */

int64_t fcn.0001073c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint *arg1_00;
    uint *puVar1;
    int64_t iVar2;
    uint *puVar3;
    uint32_t arg2_00;
    ulong uVar4;
    char cVar5;
    ulong uVar6;
    ulong uVar7;
    int64_t iStackX_8;
    uchar auStack_78 [72];
    ulong uStack_30;
    
    cVar5 = arg3;
    uVar7 = 0x1ac10;
    if (cVar5 != '\x04') {
        uVar7 = 0x1ac40;
    }
    iStackX_8 = arg1;
    iVar2 = (**(*0x1b5f0 + 0x118))(arg1,uVar7,0,arg2,arg1,4);
    if (-1 < iVar2) {
        return -0x7fffffffffffffec;
    }
    uVar4 = 0x1abc0;
    if (cVar5 != '\x04') {
        uVar4 = 0x1abd0;
    }
    uVar6 = 0;
    iVar2 = (**(*0x1b5f0 + 0x118))(iStackX_8,uVar4,0,arg2,iStackX_8,4);
    if (-1 < iVar2) {
        puVar3 = fcn.000182c0(0x48);
        if (puVar3 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *puVar3 = 0x44504354;
        arg1_00 = puVar3 + 10;
        *(puVar3 + 2) = iStackX_8;
        *(puVar3 + 4) = arg2;
        *(puVar3 + 6) = cVar5;
        if (arg1_00 != 0x1acf8) {
            uVar6 = 0;
            section..text(arg1_00,0x1acf8,0x10);
        }
        iVar2 = fcn.0001a168(arg2,iStackX_8,CONCAT71(uVar6 >> 8,cVar5));
        *(puVar3 + 8) = iVar2;
        if (iVar2 == 0) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            puVar1 = puVar3 + 0xe;
            *puVar1 = puVar1;
            *(puVar3 + 0x10) = puVar1;
            fcn.000102c0(auStack_78,0x58);
            if (cVar5 == '\x04') {
                iVar2 = 0x1c;
                arg2_00 = 0x1ae70;
            }
            else {
                iVar2 = 0x34;
                arg2_00 = 0x1ae90;
            }
            section..text(auStack_78,arg2_00,iVar2);
            auStack_78[0] = 6;
            uStack_30 = 0x12e64;
            if (*(puVar3 + 8) == 0) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                iVar2 = fcn.0001a25c(*(puVar3 + 8),auStack_78);
            }
            if (-1 < iVar2) {
                iVar2 = 0;
                if ((*0x1b5d8 != 0) ||
                   ((iVar2 = (**(*0x1b5f0 + 0x50))(0x80000200,0x10,0x146b0,0,0x1b5d0), -1 < iVar2 &&
                    (iVar2 = (**(*0x1b5f0 + 0x58))(*0x1b5d0,1,2000000), -1 < iVar2)))) {
                    *0x1b5d8 = *0x1b5d8 + 1;
                }
                if (-1 < iVar2) {
                    iVar2 = (**(*0x1b5f0 + 0x148))(&iStackX_8,uVar7,arg1_00,0);
                    if (-1 < iVar2) {
                        return 0;
                    }
                    fcn.000106ec();
                }
            }
        }
        if (*(puVar3 + 8) != 0) {
            fcn.0001a408(*(puVar3 + 8));
            *(puVar3 + 8) = 0;
        }
        (**(*0x1b5f0 + 0x48))(puVar3);
        return iVar2;
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00010a30 @ 0x10a30 */

int64_t fcn.00010a30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint8_t *puVar5;
    ulong *puVar6;
    ulong uVar7;
    ulong *puVar8;
    ulong uVar9;
    bool bVar10;
    char in_stack_00000028;
    int64_t iStack_48;
    uint64_t uStack_40;
    int64_t iStack_38;
    int64_t iStack_30;
    int64_t iStack_28;
    int64_t iStack_20;
    
    uVar9 = 0x1ac10;
    if (in_stack_00000028 != '\x04') {
        uVar9 = 0x1ac40;
    }
    uVar7 = 0x1abe0;
    if (in_stack_00000028 != '\x04') {
        uVar7 = 0x1ac00;
    }
    iVar1 = (**(*0x1b5f0 + 0x128))(arg1,uVar7,&iStack_48,&uStack_40);
    if (iVar1 < 0) {
        return 0;
    }
    iVar1 = 0;
    uVar2 = 0;
    if (uStack_40 != 0) {
        puVar5 = iStack_48 + 0x10;
        do {
            if ((*puVar5 & 0x10) != 0) {
                iVar1 = *(iStack_48 + 8 + uVar2 * 0x18);
                break;
            }
            uVar2 = uVar2 + 1;
            puVar5 = puVar5 + 0x18;
        } while (uVar2 < uStack_40);
    }
    (**(*0x1b5f0 + 0x48))(iStack_48);
    if (iVar1 == 0) {
        return 0;
    }
    iVar3 = (**(*0x1b5f0 + 0x118))(iVar1,uVar9,&iStack_38,arg2,arg1,2);
    if (iVar3 < 0) {
        return -0x7ffffffffffffff9;
    }
    if (arg3 == 0) {
        if (*(iStack_38 + 0x10) != iStack_38 + 0x10) {
            return iVar3;
        }
        (**(*0x1b5f0 + 0x150))(iVar1,uVar9,iStack_38,0);
        fcn.0001a408(*(iStack_38 + -8));
        *(iStack_38 + -8) = 0;
        fcn.000106ec();
        (**(*0x1b5f0 + 0x48))(iStack_38 + -0x28);
    }
    else {
        iStack_30 = iStack_38;
        puVar8 = iStack_38 + 0x10;
        if (puVar8 == NULL) {
            return -0x7ffffffffffffffe;
        }
        iStack_28 = arg3;
        iStack_20 = arg4;
        iVar1 = 0;
code_r0x00010b51:
        do {
            for (puVar6 = *puVar8; puVar6 != puVar8; puVar6 = *puVar6) {
                iVar3 = fcn.000109e0(puVar6,&iStack_30);
                if (iVar3 < 0) {
                    return iVar3;
                }
                for (puVar4 = *puVar8; puVar4 != puVar8; puVar4 = *puVar4) {
                    if (puVar4 == puVar6) goto code_r0x00010b8c;
                }
                if (puVar4 != puVar6) goto code_r0x00010b51;
code_r0x00010b8c:
            }
            iVar3 = 0;
            for (puVar6 = *puVar8; puVar6 != puVar8; puVar6 = *puVar6) {
                iVar3 = iVar3 + 1;
            }
            bVar10 = iVar3 != iVar1;
            iVar1 = iVar3;
        } while (bVar10);
    }
    return 0;
}


/* fcn.00011950 @ 0x11950 */

int64_t fcn.00011950(int64_t param_1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong uStackX_10;
    
    iVar1 = fcn.00014c64(param_1);
    if (iVar1 != 0) {
        iVar2 = fcn.000185a4(iVar1 + 0x48);
        if (-1 < iVar2) {
            iVar3 = (**(iVar1 + 0x100))(iVar1,0,0);
            iVar2 = *0x1b5f0;
            *(iVar1 + 0x58) = 1;
            (**(iVar2 + 0x20))(*(iVar1 + 0x50));
            if (-1 < iVar3) {
                return iVar1;
            }
        }
        if (*(iVar1 + 0x178) != NULL) {
            (**(iVar1 + 0x178))(iVar1,*(iVar1 + 0x180));
        }
        uVar4 = 0x1ac70;
        if (*(iVar1 + 0x11c) != '\x04') {
            uVar4 = 0x1ac60;
        }
        (**(*0x1b5f0 + 0x118))(*(iVar1 + 8),uVar4,&uStackX_10,*(iVar1 + 0x10),*(iVar1 + 8),2);
        (**(*0x1b5f0 + 0x150))(*(iVar1 + 8),uVar4,uStackX_10,0);
        fcn.00014ef8(iVar1);
    }
    return 0;
}


/* fcn.000117e0 @ 0x117e0 */

int64_t fcn.000117e0(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong uVar3;
    ulong uVar4;
    bool bVar5;
    ulong uStackX_8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x88) == '\0') {
        *(arg1_00 + 0x88) = 1;
        uVar4 = 0x1ac70;
        uVar3 = 0x1abe0;
        bVar5 = *(arg1_00 + 0x11c) != '\x04';
        if (bVar5) {
            uVar4 = 0x1ac60;
        }
        if (bVar5) {
            uVar3 = 0x1ac00;
        }
        (**(*0x1b5f0 + 0x120))
                  (*(*(*(arg1_00 + 0x110) + 0x130) + 0x28),uVar3,*(*(*(arg1_00 + 0x108) + 0x20) + 0x28),
                   *(arg1_00 + 8));
        if (*(arg1_00 + 0x178) != NULL) {
            (**(arg1_00 + 0x178))(arg1_00,*(arg1_00 + 0x180));
        }
        (**(*0x1b5f0 + 0x118))(*(arg1_00 + 8),uVar4,&uStackX_8,*(arg1_00 + 0x10),*(arg1_00 + 8),2);
        (**(*0x1b5f0 + 0x150))(*(arg1_00 + 8),uVar4,uStackX_8,0);
        iVar2 = fcn.000185a4(arg1 + 0x48);
        if (iVar2 < 0) {
            return -0x7ffffffffffffff1;
        }
        iVar2 = (**(arg1_00 + 0x100))(arg1_00,1,0);
        if (iVar2 < 0) {
            *(arg1_00 + 0x88) = 0;
        }
        else if (*(arg1_00 + 0x38) - 1U < 2) {
            fcn.00014f7c(arg1_00);
            *(arg1_00 + 0x40) = 0;
            *(arg1_00 + 0x38) = 0;
        }
        iVar1 = *0x1b5f0;
        *(arg1_00 + 0x58) = 1;
        (**(iVar1 + 0x20))(*(arg1_00 + 0x50));
        if (iVar2 < 0) {
            return iVar2;
        }
        fcn.00014ef8(arg1);
    }
    return 0;
}


/* fcn.00011f88 @ 0x11f88 */

int64_t fcn.00011f88(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar2 = fcn.000185a4(arg1 + 0x48);
    if (iVar2 < 0) {
        iVar2 = -0x7ffffffffffffff1;
    }
    else {
        if (*(arg1 + 0x38) - 1U < 2) {
            iVar2 = (**(arg1 + 0x100))(arg1,3,0);
            if (-1 < iVar2) {
                *(arg1 + 0x80) = 0x8000000000000015;
                fcn.00014f7c(arg1);
                *(arg1 + 0x40) = 0;
                *(arg1 + 0x38) = 0;
            }
        }
        else {
            iVar2 = -0x7ffffffffffffff1;
        }
        iVar1 = *0x1b5f0;
        *(arg1 + 0x58) = 1;
        (**(iVar1 + 0x20))(*(arg1 + 0x50));
    }
    return iVar2;
}


/* fcn.00011a44 @ 0x11a44 */

ulong fcn.00011a44(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = fcn.000185a4(arg1 + 0x48);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000f;
    }
    else {
        if (*(arg1 + 0x38) - 1U < 2) {
            uVar2 = 0x800000000000000f;
        }
        else {
            uVar2 = (**(arg1 + 0x100))(arg1,2,arg2);
        }
        iVar1 = *0x1b5f0;
        *(arg1 + 0x58) = 1;
        (**(iVar1 + 0x20))(*(arg1 + 0x50));
    }
    return uVar2;
}


/* fcn.000185a4 @ 0x185a4 */

ulong fcn.000185a4(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(puVar2 + 2) == 2) {
        uVar1 = 0x800000000000000f;
    }
    else {
        uVar1 = (**(*0x1b5f0 + 0x18))(*puVar2);
        puVar2[1] = uVar1;
        uVar1 = 0;
        *(puVar2 + 2) = 2;
    }
    return uVar1;
}


/* fcn.000110e4 @ 0x110e4 */

uint64_t fcn.000110e4(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint32_t uVar1;
    uint in_R8;
    int *piVar2;
    int iVar3;
    
    piVar2 = CONCAT44(in_R8,arg3);
    uVar1 = 0;
    iVar3 = 0;
    if (arg2 != 0) {
        do {
            if (*(piVar2 + 2) == 0) {
                return 0x8000000000000002;
            }
            iVar3 = iVar3 + *piVar2;
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 4;
        } while (uVar1 < arg2);
    }
    return -(arg1 != iVar3) & 0x8000000000000002;
}


/* fcn.00014f7c @ 0x14f7c */

void fcn.00014f7c(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    int iVar3;
    
    iVar2 = *(arg1 + 0x68);
    *(arg1 + 0x42) = 0;
    fcn.00018de0(iVar2 + 0x20);
    *(iVar2 + 0x30) = 0;
    iVar2 = *(arg1 + 0x78);
    fcn.00018de0(iVar2 + 0x20);
    *(iVar2 + 0x30) = 0;
    if (*(arg1 + 0xf0) != 0) {
        *(*(arg1 + 0xf0) + 8) = *(arg1 + 0x80);
        (**(*0x1b5f0 + 0x68))(**(arg1 + 0xf0));
        *(arg1 + 0xf0) = 0;
    }
    if (*(arg1 + 0xf8) != 0) {
        *(*(arg1 + 0xf8) + 8) = *(arg1 + 0x80);
        (**(*0x1b5f0 + 0x68))(**(arg1 + 0xf8));
        *(arg1 + 0xf8) = 0;
    }
    iVar3 = arg1;
    fcn.00014a40(arg1,iVar3 + 0xb0);
    fcn.00014a40(arg1,iVar3 + 0xc0);
    fcn.00014a40(arg1,iVar3 + 0xd0);
    fcn.00014a40(arg1,iVar3 + 0xe0);
    if (*(arg1 + 0x40) == '\x01') {
        puVar1 = arg1 + 0xa0;
        while (*puVar1 != puVar1) {
            fcn.000117e0(*puVar1 - 0xa0);
        }
        *(arg1 + 0x90) = 0;
    }
    return;
}


/* fcn.00014ef8 @ 0x14ef8 */

void fcn.00014ef8(uint32_t arg1)

{
    int *piVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x38) != '\0') {
        fcn.00014f7c(arg1_00);
        *(arg1_00 + 0x40) = 0;
        *(arg1_00 + 0x38) = 0;
    }
    fcn.000192fc(*(arg1_00 + 0x78));
    fcn.000192fc(*(arg1_00 + 0x68));
    if (*(arg1_00 + 0x98) != 0) {
        *(*(arg1_00 + 0xa0) + 8) = *(arg1_00 + 0xa8);
        **(arg1_00 + 0xa8) = *(arg1_00 + 0xa0);
        piVar1 = *(arg1_00 + 0x98) + 0x90;
        *piVar1 = *piVar1 + -1;
        *(arg1_00 + 0x98) = 0;
    }
    //WARNING: Could not recover jumptable at 0x00014f77. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1b5f0 + 0x48))(arg1_00);
    return;
}


/* fcn.00014c64 @ 0x14c64 */

uint * fcn.00014c64(int64_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    bool bVar9;
    
    uVar8 = 0x1ac70;
    bVar9 = *(arg1 + 0x1c) != '\x04';
    iVar7 = *(arg1 + 8);
    uVar3 = 0x50;
    if (bVar9) {
        uVar3 = 0x48;
    }
    if (bVar9) {
        uVar8 = 0x1ac60;
    }
    if (((iVar7 == 0) || (*(iVar7 + 0x90) != *(iVar7 + 0x8c))) && (puVar4 = fcn.000182c0(0x188), puVar4 != NULL)) {
        puVar5 = puVar4 + 10;
        piVar1 = puVar4 + 0x28;
        *puVar5 = puVar5;
        *(puVar4 + 0xc) = puVar5;
        puVar5 = puVar4 + 0x2c;
        *piVar1 = piVar1;
        *(puVar4 + 0x2a) = piVar1;
        *puVar5 = puVar5;
        *(puVar4 + 0x2e) = puVar5;
        puVar5 = puVar4 + 0x30;
        *puVar5 = puVar5;
        *(puVar4 + 0x32) = puVar5;
        puVar5 = puVar4 + 0x34;
        *puVar5 = puVar5;
        *(puVar4 + 0x36) = puVar5;
        puVar5 = puVar4 + 0x38;
        *puVar5 = puVar5;
        *(puVar4 + 0x3a) = puVar5;
        *(puVar4 + 0x12) = 8;
        *(puVar4 + 0x14) = 4;
        puVar4[0x16] = 1;
        iVar6 = fcn.000192b0();
        *(puVar4 + 0x1a) = iVar6;
        if (iVar6 != 0) {
            iVar6 = fcn.000192b0();
            *(puVar4 + 0x1e) = iVar6;
            if (iVar6 != 0) {
                *puVar4 = 0x4b434f53;
                puVar5 = puVar4 + 0x48;
                *(puVar4 + 0x26) = iVar7;
                puVar4[0x23] = *(arg1 + 0x10);
                *(puVar4 + 0x40) = *(arg1 + 0x50);
                puVar4[0x18] = *(arg1 + 0x14);
                puVar4[0x1c] = *(arg1 + 0x18);
                puVar4[0xf] = *arg1;
                *(puVar4 + 4) = *(arg1 + 0x58);
                *(puVar4 + 0x10) = *(arg1 + 4);
                *(puVar4 + 0x5c) = *(arg1 + 0x28);
                *(puVar4 + 0x5e) = *(arg1 + 0x30);
                *(puVar4 + 0x60) = *(arg1 + 0x38);
                *(puVar4 + 0x20) = 0x8000000000000015;
                puVar4[0x19] = 0x800;
                puVar4[0x1d] = 0x800;
                *(puVar4 + 0x47) = *(arg1 + 0x1c);
                if (puVar5 != *(arg1 + 0x20)) {
                    section..text(puVar5,*(arg1 + 0x20),uVar3);
                }
                if ((*(arg1 + 0x48) != 0) && (puVar4 + 0x42 != *(arg1 + 0x40))) {
                    section..text(puVar4 + 0x42,*(arg1 + 0x40),*(arg1 + 0x48));
                }
                iVar6 = (**(*0x1b5f0 + 0x148))(puVar4 + 2,uVar8,puVar5,0);
                if (-1 < iVar6) {
                    if (iVar7 != 0) {
                        *(iVar7 + 0x90) = *(iVar7 + 0x90) + 1;
                        *piVar1 = iVar7 + 0xa0;
                        puVar2 = *(iVar7 + 0xa8);
                        *(puVar4 + 0x2a) = puVar2;
                        *puVar2 = piVar1;
                        *(iVar7 + 0xa8) = piVar1;
                    }
                    if ((*(puVar4 + 0x5c) == NULL) ||
                       (iVar7 = (**(puVar4 + 0x5c))(puVar4,*(puVar4 + 0x60)), -1 < iVar7)) {
                        return puVar4;
                    }
                }
            }
        }
        if (*(puVar4 + 2) != 0) {
            (**(*0x1b5f0 + 0x150))(*(puVar4 + 2),uVar8,puVar4 + 0x48,0);
        }
        if (*(puVar4 + 0x1a) != 0) {
            fcn.000192fc(*(puVar4 + 0x1a));
        }
        if (*(puVar4 + 0x1e) != 0) {
            fcn.000192fc(*(puVar4 + 0x1e));
        }
        (**(*0x1b5f0 + 0x48))(puVar4);
    }
    return NULL;
}


/* fcn.000116d8 @ 0x116d8 */

uint64_t fcn.000116d8(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint in_register_00000014;
    
    for (puVar2 = *(arg1 + 0xd0); puVar2 != arg1 + 0xd0; puVar2 = *puVar2) {
        piVar1 = puVar2[2];
        if (CONCAT44(in_register_00000014,arg2) == *piVar1) goto code_r0x00011760;
    }
    for (puVar2 = *(arg1 + 0xe0); puVar2 != arg1 + 0xe0; puVar2 = *puVar2) {
        piVar1 = puVar2[2];
        if (CONCAT44(in_register_00000014,arg2) == *piVar1) goto code_r0x00011760;
    }
    for (puVar2 = *(arg1 + 0xc0); puVar2 != arg1 + 0xc0; puVar2 = *puVar2) {
        piVar1 = puVar2[2];
        if (CONCAT44(in_register_00000014,arg2) == *piVar1) goto code_r0x00011760;
    }
    for (puVar2 = *(arg1 + 0xb0); puVar2 != arg1 + 0xb0; puVar2 = *puVar2) {
        piVar1 = puVar2[2];
        if (CONCAT44(in_register_00000014,arg2) == *piVar1) goto code_r0x00011760;
    }
    piVar1 = *(arg1 + 0xf0);
    if (((piVar1 == NULL) || (*piVar1 != CONCAT44(in_register_00000014,arg2))) &&
       ((piVar1 = *(arg1 + 0xf8), piVar1 == NULL || (*piVar1 != CONCAT44(in_register_00000014,arg2))))) {
        return piVar1 & 0xffffffffffffff00;
    }
code_r0x00011760:
    return CONCAT71(piVar1 >> 8,1);
}


/* fcn.00011778 @ 0x11778 */

int64_t * fcn.00011778(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar2 = fcn.000182c0(0x28);
    if (piVar2 != NULL) {
        piVar2[4] = arg1;
        piVar2[2] = arg3;
        *(piVar2 + 3) = arg4;
        *piVar2 = arg2;
        piVar1 = *(arg2 + 8);
        piVar2[1] = piVar1;
        *piVar1 = piVar2;
        *(arg2 + 8) = piVar2;
    }
    return piVar2;
}


/* fcn.00014974 @ 0x14974 */

int64_t fcn.00014974(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong uVar6;
    
    uVar6 = 0;
    uVar5 = 0x146cc;
    iVar3 = fcn.00018e88(arg2 + 0x10,*(arg2 + 8));
    if (iVar3 == 0) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        iVar4 = *(arg1 + 0x68);
        piVar1 = iVar3 + 0x10;
        *piVar1 = iVar4 + 0x20;
        piVar2 = *(iVar4 + 0x28);
        *(iVar3 + 0x18) = piVar2;
        *piVar2 = piVar1;
        *(iVar4 + 0x28) = piVar1;
        *(iVar4 + 0x30) = *(iVar4 + 0x30) + *(iVar3 + 0x84);
        *(iVar4 + 0x34) = *(iVar4 + 0x34) + 1;
        if ((*(arg2 + 1) != '\0') &&
           (iVar3 = (**(arg1 + 0x100))(arg1,CONCAT71(piVar1 >> 8,6),0,iVar3,uVar5,uVar6), iVar3 < 0)) {
            return iVar3;
        }
        if ((*arg2 != '\0') && (iVar3 = (**(arg1 + 0x100))(arg1,5,0), iVar3 < 0)) {
            return iVar3;
        }
        iVar4 = (**(arg1 + 0x100))(arg1,4,0);
        iVar3 = 0;
        if (iVar4 < 0) {
            iVar3 = iVar4;
        }
    }
    return iVar3;
}


/* fcn.000147cc @ 0x147cc */

uint32_t fcn.000147cc(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    int64_t *piVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    bool bVar14;
    
    iVar3 = *(arg2 + 0x10);
    piVar10 = *(arg1 + 0x78) + 0x20;
    uVar2 = *(iVar3 + 4);
    if (*piVar10 == piVar10) {
        iVar4 = 0;
    }
    else {
        iVar4 = *piVar10 + -2;
    }
    uVar7 = *(iVar4 + 0x38);
    if ((uVar7 == 0) || (*(iVar4 + 0x84) <= uVar7)) {
        uVar6 = *(iVar4 + 0x84);
        piVar5 = iVar4 + 0x10;
        piVar9 = *piVar5;
        if (piVar9 == piVar10) goto code_r0x0001486d;
        if (*(iVar4 + 0x18) == piVar5) goto code_r0x0001486d;
        bVar14 = piVar9 == piVar5;
        do {
            if (bVar14) goto code_r0x0001486d;
            piVar5 = piVar9 + -2;
            while( true ) {
                if (((uVar2 <= uVar6) || (piVar5 == NULL)) || (uVar11 = *(piVar5 + 7), (uVar7 != 0) != (uVar11 != 0)))
                {
                    if (uVar2 < uVar6) {
                        uVar6 = uVar2;
                    }
                    goto code_r0x000148e0;
                }
                if ((uVar7 != 0) && (uVar11 < *(piVar5 + 0x84))) {
                    if (uVar11 + uVar6 < uVar2) {
                        *(piVar5 + 7) = 0;
                    }
                    else {
                        *(piVar5 + 7) = (uVar11 - uVar2) + uVar6;
                    }
                    uVar11 = piVar5[7] + uVar6;
                    uVar6 = uVar2;
                    if (uVar11 < uVar2) {
                        uVar6 = uVar11;
                    }
                    goto code_r0x000148e0;
                }
                uVar6 = uVar6 + *(piVar5 + 0x84);
                piVar1 = piVar5 + 2;
                piVar9 = *piVar1;
                if ((piVar9 != piVar10) && (piVar5[3] != piVar1)) break;
code_r0x0001486d:
                piVar5 = NULL;
            }
            bVar14 = piVar9 == piVar1;
        } while( true );
    }
    uVar6 = uVar2;
    if (uVar7 < uVar2) {
        uVar6 = uVar7;
    }
    if (uVar6 < uVar7) {
        *(iVar4 + 0x38) = uVar7 - uVar6;
    }
    else {
        *(iVar4 + 0x38) = 0;
    }
code_r0x000148e0:
    uVar11 = 0;
    *(iVar3 + 4) = uVar6;
    uVar13 = 0;
    *iVar3 = uVar7 != 0;
    uVar2 = uVar6;
    if (*(iVar3 + 8) != 0) {
        do {
            if (uVar2 == 0) break;
            puVar8 = (uVar13 + 1) * 0x10 + iVar3;
            uVar7 = uVar2;
            if (*puVar8 < uVar2) {
                uVar7 = *puVar8;
            }
            fcn.00019330(*(arg1 + 0x78),uVar11,uVar7,*(puVar8 + 2));
            *puVar8 = uVar7;
            uVar11 = uVar11 + uVar7;
            uVar12 = uVar13 + 1;
            uVar13 = uVar12;
            uVar2 = uVar2 - uVar7;
        } while (uVar12 < *(iVar3 + 8));
    }
    fcn.00019424(*(arg1 + 0x78),uVar6);
    iVar3 = *0x1b5f0;
    *(arg2 + 8) = 0;
    (**(iVar3 + 0x68))(*arg2);
    return uVar6;
}


/* fcn.00014b60 @ 0x14b60 */

ulong fcn.00014b60(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    uint in_register_00000014;
    int64_t *piVar4;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    piVar1 = *piVar4;
    uVar3 = 0;
    iVar2 = *0x1b5f0;
    if ((piVar1 == piVar4) && (arg1 != 0)) {
        uVar3 = 0x800000000000000e;
    }
    else {
        while (*0x1b5f0 = iVar2, piVar1 != piVar4) {
            if (arg1 == 0) {
                *(piVar1[2] + 8) = 0x8000000000000015;
                (**(*0x1b5f0 + 0x68))(*piVar1[2]);
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                (**(*0x1b5f0 + 0x48))(piVar1);
                piVar1 = *piVar4;
                uVar3 = 0;
                iVar2 = *0x1b5f0;
            }
            else {
                if (arg1 == piVar1[2]) {
                    *(arg1 + 8) = 0x8000000000000015;
                    (**(iVar2 + 0x68))(*arg1);
                    *(*piVar1 + 8) = piVar1[1];
                    *piVar1[1] = *piVar1;
                    (**(*0x1b5f0 + 0x48))(piVar1);
                    return 0;
                }
                piVar1 = *piVar1;
                uVar3 = 0x800000000000000e;
            }
        }
    }
    return uVar3;
}


/* fcn.00019514 @ 0x19514 */

void fcn.00019514(int64_t arg1,int64_t arg2)

{
    uint uStack_18;
    uint uStack_14;
    uchar uStack_f;
    ushort uStack_e;
    
    fcn.000102c0(&uStack_18,0xc);
    uStack_18 = arg1;
    uStack_14 = arg2;
    uStack_f = 6;
    uStack_e = 0;
    fcn.000194d0(&uStack_18,0xc);
    return;
}


/* fcn.000194d0 @ 0x194d0 */

uint32_t fcn.000194d0(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    if ((arg2 & 1) != 0) {
        uVar3 = *((arg2 - 1) + arg1);
    }
    if (1 < arg2) {
        uVar2 = (arg2 - 2 >> 1) + 1;
        do {
            uVar1 = *arg1;
            arg1 = arg1 + 2;
            uVar3 = uVar3 + uVar1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    for (; uVar3 >> 0x10 != 0; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
    }
    return uVar3 & 0xffff;
}


/* fcn.00019560 @ 0x19560 */

void fcn.00019560(int64_t arg1,int64_t arg2)

{
    uchar auStack_38 [16];
    uchar auStack_28 [16];
    uint uStack_18;
    uint32_t uStack_14;
    
    fcn.000102c0(auStack_38,0x28);
    if (auStack_38 != arg1) {
        section..text(auStack_38,arg1,0x10);
    }
    if (auStack_28 != arg2) {
        section..text(auStack_28,arg2,0x10);
    }
    uStack_18 = 0;
    uStack_14 = uStack_14 & 0xffffff | 0x6000000;
    fcn.000194d0(auStack_38,0x28);
    return;
}


/* fcn.00012874 @ 0x12874 */

int16_t fcn.00012874(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uchar auStack_108 [4];
    int16_t iStack_104;
    int64_t iStack_c0;
    int64_t iStack_b0;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t var_bp_78h;
    int64_t var_bp_68h;
    uchar auStack_68 [4];
    int16_t iStack_64;
    int64_t var_58h;
    int64_t var_48h;
    int64_t var_40h;
    
    fcn.000102c0(auStack_68,0x58);
    fcn.000102c0(auStack_108,0xa0);
    puVar1 = *(*(*(arg1 + 0x108) + 0x20) + 0x38);
    if (*(arg1 + 0x11c) == '\x04') {
        (**puVar1)(puVar1,auStack_68);
    }
    else {
        iVar2 = (**puVar1)(puVar1,auStack_108,0,0);
        if (-1 < iVar2) {
            if (iStack_c0 != 0) {
                (**(*0x1b5f0 + 0x48))();
            }
            if (iStack_b0 != 0) {
                (**(*0x1b5f0 + 0x48))();
            }
            if (iStack_a0 != 0) {
                (**(*0x1b5f0 + 0x48))();
            }
            if (iStack_90 != 0) {
                (**(*0x1b5f0 + 0x48))();
            }
            if (var_bp_78h != 0) {
                (**(*0x1b5f0 + 0x48))();
            }
            if (var_bp_68h != 0) {
                (**(*0x1b5f0 + 0x48))();
            }
        }
        iStack_64 = iStack_104;
    }
    return iStack_64 + -0x14;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000123e0 @ 0x123e0 */

bool fcn.000123e0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t iVar1;
    int64_t extraout_RAX;
    uint in_register_0000000c;
    bool bVar2;
    
    if (arg3 == '\x04') {
        bVar2 = *CONCAT44(in_register_0000000c,arg1) == *arg2;
    }
    else {
        if (CONCAT44(in_register_0000000c,arg1) == arg2) {
            iVar1 = 0;
        }
        else {
            fcn.000102e0(CONCAT44(in_register_0000000c,arg1),arg2,0x10);
            iVar1 = extraout_RAX;
        }
        bVar2 = iVar1 == 0;
    }
    return bVar2;
}


/* fcn.00012410 @ 0x12410 */

ulong * fcn.00012410(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int *piVar2;
    char cVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    ulong *puVar6;
    char cVar7;
    ulong *puVar8;
    uint8_t uVar9;
    bool bVar10;
    
    cVar7 = arg3;
    puVar8 = NULL;
    uVar9 = 4;
    puVar6 = *0x1ae08;
    do {
        if (puVar6 == 0x1ae08) {
            return puVar8;
        }
        if (((cVar7 == *(puVar6[3] + 0x11c)) && (*(arg1 + 0x10) == *(puVar6 + 6))) &&
           ((*(puVar6 + 0x44) == 0 || (*(puVar6 + 0x44) == *(arg2 + 0x10))))) {
            piVar1 = puVar6 + 0x34;
            if (cVar7 == '\x04') {
                bVar10 = *piVar1 == 0;
code_r0x000124b8:
                if ((!bVar10) && (cVar3 = fcn.000123e0(piVar1,arg2,arg3 & 0xff), cVar3 == '\0'))
                goto code_r0x000125ac;
            }
            else if ((((*piVar1 != 0) || (*(puVar6 + 7) != 0)) || (*(puVar6 + 0x3c) != 0)) || (*(puVar6 + 8) != 0)) {
                bVar10 = false;
                goto code_r0x000124b8;
            }
            if ((*(puVar6 + 6) == 0) || (*(puVar6 + 6) == *(arg1 + 0x10))) {
                piVar2 = puVar6 + 4;
                if (cVar7 == '\x04') {
                    bVar10 = *piVar2 == 0;
code_r0x00012515:
                    if ((!bVar10) && (cVar3 = fcn.000123e0(piVar2,arg1,arg3 & 0xff), cVar3 == '\0'))
                    goto code_r0x000125ac;
                }
                else if (((*piVar2 != 0) || (*(puVar6 + 0x24) != 0)) ||
                        ((*(puVar6 + 5) != 0 || (*(puVar6 + 0x2c) != 0)))) {
                    bVar10 = false;
                    goto code_r0x00012515;
                }
                if (cVar7 == '\x04') {
                    bVar10 = *piVar1 == 0;
                }
                else if ((((*piVar1 != 0) || (*(puVar6 + 7) != 0)) || (*(puVar6 + 0x3c) != 0)) ||
                        (bVar10 = true, *(puVar6 + 8) != 0)) {
                    bVar10 = false;
                }
                uVar5 = bVar10 + 1;
                if (*(puVar6 + 0x44) != 0) {
                    uVar5 = bVar10;
                }
                if (cVar7 == '\x04') {
                    bVar10 = *piVar2 == 0;
                }
                else if (((*piVar2 != 0) || (*(puVar6 + 0x24) != 0)) ||
                        ((*(puVar6 + 5) != 0 || (bVar10 = true, *(puVar6 + 0x2c) != 0)))) {
                    bVar10 = false;
                }
                uVar4 = uVar5 + 1;
                if (bVar10 == false) {
                    uVar4 = uVar5;
                }
                if (uVar4 < uVar9) {
                    if (uVar4 == 0) {
                        return puVar6;
                    }
                    puVar8 = puVar6;
                    uVar9 = uVar4;
                }
            }
        }
code_r0x000125ac:
        puVar6 = *puVar6;
    } while( true );
}


/* fcn.000146d0 @ 0x146d0 */

void fcn.000146d0(uint32_t arg1)

{
    ulong *puVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    ulong *puVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar6;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(*(arg1_00 + 0x68) + 0x30) < *(arg1_00 + 0x60)) {
        uVar6 = *(arg1_00 + 0x60) - *(*(arg1_00 + 0x68) + 0x30);
    }
    else {
        uVar6 = 0;
    }
    if (*(arg1_00 + 100) <= uVar6) {
        puVar1 = arg1_00 + 0xd0;
        do {
            if (*puVar1 == puVar1) {
                return;
            }
            piVar3 = *puVar1;
            *(*piVar3 + 8) = piVar3[1];
            *piVar3[1] = *piVar3;
            *piVar3 = arg1_00 + 0xe0;
            puVar4 = *(arg1_00 + 0xe8);
            piVar3[1] = puVar4;
            *puVar4 = piVar3;
            *(arg1_00 + 0xe8) = piVar3;
            uVar2 = *(*(piVar3[2] + 0x10) + 4);
            iVar5 = fcn.00014974(arg1_00,*(piVar3[2] + 0x10));
            if (iVar5 < 0) {
                *(*piVar3 + 8) = piVar3[1];
                *piVar3[1] = *piVar3;
                *(piVar3[2] + 8) = iVar5;
                (**(*0x1b5f0 + 0x68))(*piVar3[2]);
                (**(*0x1b5f0 + 0x48))(piVar3);
                return;
            }
            uVar6 = -(uVar2 < uVar6) & uVar6 - uVar2;
        } while (*(arg1_00 + 100) <= uVar6);
    }
    return;
}


/* fcn.00014ab4 @ 0x14ab4 */

void fcn.00014ab4(int64_t arg1)

{
    int64_t *piVar1;
    int *piVar2;
    int64_t iVar3;
    ulong uVar4;
    ulong *puVar5;
    
    iVar3 = *(arg1 + 0x98);
    piVar1 = iVar3 + 0xb0;
    if (*piVar1 != piVar1) {
        piVar1 = *piVar1;
        uVar4 = *(arg1 + 8);
        puVar5 = piVar1[2];
        puVar5[1] = 0;
        puVar5[2] = uVar4;
        (**(*0x1b5f0 + 0x68))(*puVar5);
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x1b5f0 + 0x48))(piVar1);
        *(*(arg1 + 0xa0) + 8) = *(arg1 + 0xa8);
        **(arg1 + 0xa8) = *(arg1 + 0xa0);
        piVar2 = iVar3 + 0x90;
        *piVar2 = *piVar2 + -1;
        *(arg1 + 0x98) = 0;
    }
    return;
}


/* fcn.00012cf0 @ 0x12cf0 */

int64_t fcn.00012cf0(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint *arg2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint in_stack_ffffffffffffff6c;
    unkbyte6 in_stack_ffffffffffffff72;
    int64_t in_stack_ffffffffffffff78;
    ushort in_stack_ffffffffffffff80;
    ulong in_stack_ffffffffffffff88;
    uint32_t in_stack_ffffffffffffff90;
    uchar auStack_61 [9];
    uint uStack_58;
    uchar auStack_54 [16];
    uchar auStack_44 [16];
    uint16_t uStack_34;
    uint16_t uStack_32;
    uint uStack_30;
    uchar auStack_2c [20];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(iVar2 + 0x110);
    uVar3 = *(iVar1 + 0x30) << 8 | *(iVar1 + 0x30) >> 8;
    uVar4 = *(iVar1 + 0x44) << 8 | *(iVar1 + 0x44) >> 8;
    if (*(iVar2 + 0x11c) == '\x04') {
        fcn.00018b0c(&stack0xffffffffffffff88,*(*(iVar2 + 0x108) + 8),*(iVar1 + 0x20),uVar3,
                     CONCAT44(in_stack_ffffffffffffff6c,*(iVar1 + 0x34)),CONCAT62(in_stack_ffffffffffffff72,uVar4),
                     in_stack_ffffffffffffff78,CONCAT11(in_stack_ffffffffffffff80 >> 8,*(iVar1 + 0x128)),
                     in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
        if (auStack_61 != iVar1 + 299) {
            section..text(auStack_61,iVar1 + 299,4);
        }
        arg2 = &stack0xffffffffffffff88;
    }
    else {
        uStack_58 = 0x3c0d03;
        if (auStack_54 != iVar1 + 0x20) {
            section..text(auStack_54,iVar1 + 0x20,0x10);
        }
        if (auStack_44 != iVar1 + 0x34) {
            section..text(auStack_44,iVar1 + 0x34,0x10);
        }
        uStack_30 = 0x40000006;
        uStack_34 = uVar3;
        uStack_32 = uVar4;
        fcn.000102c0(auStack_2c,0x10);
        arg2 = &uStack_58;
    }
    iVar1 = fcn.0001846c(*(iVar2 + 0x18),arg2);
    *(iVar2 + 0x20) = iVar1;
    if (iVar1 == 0) {
        iVar1 = -0x7ffffffffffffff7;
    }
    else {
        iVar1 = (**(*0x1b5f0 + 0x80))(iVar2 + 8,0x1aba0,0,iVar1);
        if (iVar1 < 0) {
            (**(*0x1b5f0 + 0x48))(*(iVar2 + 0x20));
            *(iVar2 + 0x20) = 0;
        }
    }
    return iVar1;
}


/* fcn.00018e2c @ 0x18e2c */

int64_t fcn.00018e2c(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 < *(iVar3 + 0x84)) {
        uVar4 = 0;
        if (*(iVar3 + 0x80) != 0) {
            piVar5 = iVar3 + 0xa8;
            uVar6 = 0;
            do {
                iVar1 = *piVar5;
                if (arg2 < iVar1 + uVar6) {
                    if (arg3 != 0) {
                        *arg3 = uVar4;
                    }
                    return (arg2 - uVar6) + *(iVar3 + 0x98 + uVar4 * 0x28);
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                piVar5 = piVar5 + 10;
                uVar6 = iVar1 + uVar6;
            } while (uVar2 < *(iVar3 + 0x80));
        }
    }
    return 0;
}


/* fcn.00018cb0 @ 0x18cb0 */

int64_t fcn.00018cb0(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.00018c0c(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.00018290();
        if (iVar3 != 0) {
            iVar1 = *(iVar2 + 0x78);
            *(iVar1 + 0x24) = arg1;
            *(iVar1 + 0x38) = iVar3;
            *(iVar1 + 0x30) = arg1;
            *(iVar2 + 0xa8) = 0;
            *(iVar2 + 0x90) = (arg1 & 0xffffffffU) + iVar3;
            *(iVar2 + 0x88) = iVar3;
            *(iVar2 + 0x98) = iVar3;
            *(iVar2 + 0xa0) = iVar3;
            return iVar2;
        }
        (**(*0x1b5f0 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.00018f44 @ 0x18f44 */

int64_t fcn.00018f44(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_18 [4];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar5 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    iVar4 = arg2;
    if (arg3 == '\0') {
        if (*(iVar3 + 0x84) != 0) {
            fcn.00018e2c(arg1,*(iVar3 + 0x84) - 1,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((*(iVar3 + 0x90 + uVar6 * 0x28) - *(iVar3 + 0xa0 + uVar6 * 0x28) < uVar5) &&
               (auStackX_18[0] < *(iVar3 + 0x80) - 1U)) {
                uVar6 = auStackX_18[0] + 1;
            }
        }
        iVar2 = *(iVar3 + 0xa0 + uVar6 * 0x28);
        if (uVar5 <= *(iVar3 + 0x90 + uVar6 * 0x28) - iVar2) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0xa0 + uVar6 * 0x28) = uVar5 + iVar2;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return iVar2;
        }
    }
    else {
        if (*(iVar3 + 0x84) != 0) {
            fcn.00018e2c(arg1,0,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((auStackX_18[0] != 0) && (*(iVar3 + 0x98 + uVar6 * 0x28) - *(iVar3 + 0x88 + uVar6 * 0x28) < uVar5)) {
                uVar6 = auStackX_18[0] - 1;
            }
        }
        iVar2 = *(iVar3 + 0x98 + uVar6 * 0x28);
        if (uVar5 <= iVar2 - *(iVar3 + 0x88 + uVar6 * 0x28)) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0x98 + uVar6 * 0x28) = iVar2 - uVar5;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return *(iVar3 + 0x98 + uVar6 * 0x28);
        }
    }
    return 0;
}


/* fcn.00012a48 @ 0x12a48 */

uint16_t fcn.00012a48(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    
    uVar4 = 0;
    uVar2 = 0;
    if (*(arg1 + 0x80) != 0) {
        puVar5 = arg1 + 0xa8;
        uVar3 = *(arg1 + 0x80);
        uVar2 = 0;
        do {
            if (*puVar5 != 0) {
                uVar1 = fcn.000194d0(*(puVar5 + -4),*puVar5);
                if ((uVar4 & 1) != 0) {
                    uVar1 = uVar1 << 8 | uVar1 >> 8;
                }
                uVar2 = uVar1 + (uVar2 & 0xffff);
                if ((uVar2 & 0xffff0000) != 0) {
                    uVar2 = (uVar2 & 0xffff) + 1;
                }
                uVar4 = uVar4 + *puVar5;
            }
            puVar5 = puVar5 + 10;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    uVar2 = (uVar2 & 0xffff) + arg2;
    if ((uVar2 & 0xffff0000) != 0) {
        uVar2 = (uVar2 & 0xffff) + 1;
    }
    uVar2 = (*(arg1 + 0x84) << 8 | *(arg1 + 0x84) >> 8) + (uVar2 & 0xffff);
    if ((uVar2 & 0xffff0000) != 0) {
        uVar2 = (uVar2 & 0xffff) + 1;
    }
    return ~uVar2;
}


/* fcn.00012e94 @ 0x12e94 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00012e94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_50h)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t var_30h;
    ushort auStack_38 [2];
    uint uStack_34;
    uchar uStack_30;
    ushort uStack_2f;
    uchar uStack_2d;
    int16_t var_bp_10h;
    int32_t var_ch;
    int8_t var_8h;
    int16_t var_7h;
    int8_t var_5h;
    
    if (arg1 == 0) {
        iStackX_8 = 0;
        iVar1 = fcn.0001a95c(&iStackX_8,CONCAT71(arg2 >> 8,var_30h),arg3);
        if (iVar1 == 0) {
            return -1;
        }
        iVar3 = iStackX_8;
        iVar2 = 0;
        if (var_30h != '\x06') {
            iVar2 = iVar1;
        }
code_r0x00012f21:
        if (var_30h == '\x04') {
            uStack_2f = 0xff00;
            uStack_2d = 0;
            uStack_30 = 6;
            fcn.000102c0(&uStack_34,4);
            if (auStack_38 != arg3) {
                section..text(auStack_38,arg3,4);
            }
            goto code_r0x00012f68;
        }
    }
    else {
        iVar2 = *(arg1 + 0x130);
        iVar3 = *(*(*(arg1 + 0x18) + 0x108) + 0x20);
        if (var_30h != '\x06') goto code_r0x00012f21;
        if (*(arg1 + 0x12f) == '\0') {
            arg4 = 0;
            goto code_r0x00012f21;
        }
    }
    auStack_38[0] = 0xff06;
    uStack_34 = 0;
code_r0x00012f68:
    if (iVar3 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001a4d0(iVar3,arg2,iVar2,arg4);
    }
    return (-1 < iVar2) - 1;
}


/* fcn.00018db4 @ 0x18db4 */

void fcn.00018db4(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00018d40(*(arg1 + 0x78));
        (**(*0x1b5f0 + 0x48))(arg1);
    }
    return;
}


/* fcn.00018d40 @ 0x18d40 */

void fcn.00018d40(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x1b5f0 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x1b5f0 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x1b5f0 + 0x48))(arg1);
    }
    return;
}


/* fcn.00018b0c @ 0x18b0c */

//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.00018b0c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,ulong noname_4,ulong noname_5,
                 int64_t arg_40h,int16_t arg_48h,ulong noname_8,uint32_t arg_58h)

{
    int64_t iVar1;
    bool bVar2;
    int64_t iStackX_8;
    int64_t var_bp_20h;
    ushort in_stack_00000042;
    int64_t aiStack_28 [2];
    int64_t var_bp_10h;
    
    var_bp_20h._0_4_ = arg3;
    *arg1 = 0x1b0c03;
    if (arg1 + 4 != &var_bp_20h) {
        arg3 = 0;
        section..text(arg1 + 4,&var_bp_20h,4);
    }
    if (arg1 + 8 != &stack0x00000028) {
        arg3 = 0;
        section..text(arg1 + 8,&stack0x00000028,4);
    }
    *(arg1 + 0xe) = noname_5;
    *(arg1 + 0xc) = arg4;
    *(arg1 + 0x10) = 6;
    bVar2 = true;
    if (arg_48h != '\0') {
        arg3 = &iStackX_8;
        iStackX_8 = 0;
        aiStack_28[0] = 4;
        iVar1 = (**(*0x1b5f0 + 0x98))(arg2,0x1abb0,arg3);
        if (-1 < iVar1) {
            arg3 = aiStack_28;
            iVar1 = (**(iStackX_8 + 8))(iStackX_8,1,arg3,&arg_48h);
            if (-1 < iVar1) {
                bVar2 = _arg_48h == 0;
            }
        }
    }
    *(arg1 + 0x12) = bVar2;
    fcn.000102c0(arg1 + 0x13,4);
    fcn.00010300(arg1 + 0x17,4,CONCAT71(arg3 >> 8,0xff));
    *(arg1 + 0x1a) = 0;
    return;
}


/* fcn.0001846c @ 0x1846c */

ulong fcn.0001846c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x1b4f0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.0001832c(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.000182ec(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00018290(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x1b4f0) {
                section..text(iVar4,0x1b4f0,4);
            }
            uVar2 = fcn.0001837c(arg1,iVar3);
            (**(*0x1b5f0 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.0001a95c @ 0x1a95c */

ulong * fcn.0001a95c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *arg1_00;
    ulong *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    
    if ((arg3 != 0) && (((arg2 & 0xff) - 4 & 0xfd) == 0)) {
        for (puVar1 = *0x1aee0; puVar1 != 0x1aee0; puVar1 = *puVar1) {
            if (((*arg1 == 0) || (*arg1 == puVar1)) && (*(puVar1 + 0x12) == arg2)) {
                for (puVar2 = puVar1[2]; puVar2 != puVar1 + 2; puVar2 = *puVar2) {
                    arg1_00 = puVar2 + -3;
                    if (*(puVar2 + 8) == '\x04') {
                        if (arg1_00 == arg3) goto code_r0x0001aa02;
                        iVar3 = 4;
                    }
                    else {
                        if (arg1_00 == arg3) goto code_r0x0001aa02;
                        iVar3 = 0x10;
                    }
                    iVar3 = fcn.000102e0(arg1_00,arg3,iVar3);
                    if (iVar3 == 0) {
code_r0x0001aa02:
                        *arg1 = puVar1;
                        return arg1_00;
                    }
                }
            }
        }
    }
    return NULL;
}


/* fcn.0001a4d0 @ 0x1a4d0 */

int64_t fcn.0001a4d0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg3_00;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if ((arg2 == 0) || ((*(iVar1 + 0x90) == '\x04' && (arg4 == 0)))) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else if (*(iVar1 + 0x40) == '\0') {
        iVar1 = -0x7fffffffffffffed;
    }
    else {
        if (arg3 == 0) {
            arg3_00 = *(iVar1 + 0x38);
        }
        else {
            arg3_00 = *(arg3 + 0x30);
        }
        arg1_00 = fcn.00019a64(iVar1,arg2,arg3_00,arg4);
        if (arg1_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            if (*(iVar1 + 0x90) == '\x04') {
                iVar1 = (**(arg3_00 + 0x20))();
            }
            else {
                iVar1 = (**(arg3_00 + 0x28))(arg3_00,arg1_00 + 0x38);
            }
            if (iVar1 < 0) {
                fcn.00019cb8(arg1_00);
            }
        }
    }
    return iVar1;
}


/* fcn.000125dc @ 0x125dc */

ulong fcn.000125dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong *puVar2;
    uint16_t uVar3;
    char cVar4;
    uint32_t arg3_00;
    
    arg3_00 = arg3;
    cVar4 = arg3;
    uVar3 = arg2 << 8 | arg2 >> 8;
    for (puVar2 = *0x1ae08; puVar2 != 0x1ae08; puVar2 = *puVar2) {
        if (cVar4 == *(puVar2[3] + 0x11c)) {
            arg3_00 = CONCAT31(arg3_00 >> 8,cVar4);
            cVar1 = fcn.000123e0(arg1,puVar2 + 4,arg3_00);
            if ((cVar1 != '\0') && (uVar3 == *(puVar2 + 6))) {
                return 1;
            }
        }
    }
    puVar2 = *0x1adf8;
    do {
        if (puVar2 == 0x1adf8) {
            return 0;
        }
        if (cVar4 == *(puVar2[3] + 0x11c)) {
            arg3_00 = CONCAT31(arg3_00 >> 8,cVar4);
            cVar1 = fcn.000123e0(arg1,puVar2 + 4,arg3_00);
            if ((cVar1 != '\0') && (uVar3 == *(puVar2 + 6))) {
                return 1;
            }
        }
        puVar2 = *puVar2;
    } while( true );
}


/* fcn.0001a6a4 @ 0x1a6a4 */

int64_t fcn.0001a6a4(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uchar *arg1_00;
    uchar auStack_118 [28];
    uchar auStack_fc [32];
    char cStack_dc;
    int64_t iStack_d0;
    int64_t iStack_c0;
    int64_t iStack_b0;
    int64_t iStack_a0;
    int64_t iStack_90;
    int64_t iStack_80;
    uchar auStack_78 [14];
    uchar auStack_6a [4];
    uchar auStack_66 [78];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    puVar1 = *(arg1_00 + 0x30);
    iVar2 = (*puVar1[1])(puVar1);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (arg2 == 0) {
        fcn.000102c0(arg1_00,0x10);
        fcn.000102c0(arg1_00 + 0x10,4);
        return iVar2;
    }
    if (arg1_00[0x58] == '\x04') {
        if (*(arg2 + 5) != '\0') {
            iVar2 = (**puVar1)(puVar1,auStack_78,0,0);
            if (iVar2 < 0) goto code_r0x0001a870;
            if (arg2 + 6 != auStack_6a) {
                section..text(arg2 + 6,auStack_6a,4);
            }
            if (arg2 + 10 != auStack_66) {
                section..text(arg2 + 10,auStack_66,4);
            }
        }
        if (arg1_00 != arg2 + 6) {
            section..text(arg1_00,arg2 + 6,4);
        }
        if (arg1_00 + 0x10 != arg2 + 10) {
            section..text(arg1_00 + 0x10,arg2 + 10,4);
        }
        iVar2 = (*puVar1[5])(puVar1,arg1_00 + 0x38);
    }
    else {
        iVar2 = (**puVar1)(puVar1,auStack_118,0,0);
        if (iVar2 < 0) goto code_r0x0001a870;
        if (cStack_dc == '\0') {
            return -0x7fffffffffffffef;
        }
        if (arg2 + 0x14 != auStack_fc) {
            section..text(arg2 + 0x14,auStack_fc,0x10);
        }
        if (iStack_d0 != 0) {
            (**(*0x1b5f0 + 0x48))();
        }
        if (iStack_c0 != 0) {
            (**(*0x1b5f0 + 0x48))();
        }
        if (iStack_b0 != 0) {
            (**(*0x1b5f0 + 0x48))();
        }
        if (iStack_a0 != 0) {
            (**(*0x1b5f0 + 0x48))();
        }
        if (iStack_90 != 0) {
            (**(*0x1b5f0 + 0x48))();
        }
        if (iStack_80 != 0) {
            (**(*0x1b5f0 + 0x48))();
        }
        if (arg1_00 != auStack_fc) {
            section..text(arg1_00,auStack_fc,0x10);
        }
        iVar2 = (*puVar1[6])(puVar1,arg1_00 + 0x38);
    }
    if (-1 < iVar2) {
        return iVar2;
    }
code_r0x0001a870:
    (*puVar1[1])(puVar1,0);
    return iVar2;
}


/* fcn.00018de0 @ 0x18de0 */

void fcn.00018de0(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint in_register_0000000c;
    
    piVar1 = *CONCAT44(in_register_0000000c,arg1);
    piVar3 = *piVar1;
    while (piVar2 = piVar3, piVar1 != CONCAT44(in_register_0000000c,arg1)) {
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        fcn.00018db4(piVar1 + -2);
        piVar3 = *piVar2;
        piVar1 = piVar2;
    }
    return;
}


/* fcn.0001a58c @ 0x1a58c */

int64_t fcn.0001a58c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uchar uVar3;
    int64_t arg1_00;
    int64_t iVar4;
    int64_t iVar5;
    ulong in_R9;
    ulong uStackX_10;
    
    arg1_00 = fcn.00018290(arg1,0x60);
    if (arg1_00 != 0) {
        piVar1 = arg1_00 + 0x18;
        piVar2 = arg1_00 + 0x28;
        *piVar1 = piVar1;
        *(arg1_00 + 0x20) = piVar1;
        *piVar2 = 0;
        fcn.000102c0(arg1_00,0x10);
        fcn.000102c0(arg1_00 + 0x10,4);
        *(arg1_00 + 0x50) = 1;
        uVar3 = *(arg1 + 0x90);
        *(arg1_00 + 0x58) = uVar3;
        iVar4 = fcn.000195ec(*(arg1 + 0x20),*(arg1 + 0x28),piVar2,CONCAT71(in_R9 >> 8,uVar3));
        if (-1 < iVar4) {
            iVar4 = arg1_00;
            iVar5 = (**(*0x1b5f0 + 0x50))(0x200,0x10,0x19e28,arg1_00,&uStackX_10);
            if (-1 < iVar5) {
                *(arg1_00 + 0x38) = uStackX_10;
                *piVar1 = arg1 + 0x10;
                piVar2 = *(arg1 + 0x18);
                *(arg1_00 + 0x20) = piVar2;
                *piVar2 = piVar1;
                *(arg1 + 0x18) = piVar1;
                return arg1_00;
            }
            fcn.00019718(*(arg1 + 0x20),*(arg1 + 0x28),*piVar2,CONCAT71(iVar4 >> 8,*(arg1_00 + 0x58)));
        }
        (**(*0x1b5f0 + 0x48))(arg1_00);
    }
    return 0;
}


/* fcn.000195ec @ 0x195ec */

int64_t fcn.000195ec(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong uVar4;
    ulong in_stack_00000028;
    ulong *apuStack_18 [2];
    
    if (arg4 == '\x04') {
        uVar3 = 0x1abc0;
        uVar4 = 0x1abe0;
    }
    else {
        if (arg4 != '\x06') {
            return -0x7ffffffffffffffd;
        }
        uVar3 = 0x1abd0;
        uVar4 = 0x1ac00;
    }
    iVar1 = (**(*0x1b5f0 + 0x118))(arg1,uVar3,apuStack_18,arg2,arg1,2);
    if (((-1 < iVar1) && (iVar1 = (**apuStack_18[0])(apuStack_18[0],arg3), -1 < iVar1)) &&
       (iVar1 = (**(*0x1b5f0 + 0x118))(*arg3,uVar4,in_stack_00000028,arg2,arg1,0x10), iVar1 < 0)) {
        uVar4 = *arg3;
        iVar2 = (**(*0x1b5f0 + 0x118))(arg1,uVar3,apuStack_18,arg2,arg1,2);
        if (-1 < iVar2) {
            (*apuStack_18[0][1])(apuStack_18[0],uVar4);
        }
    }
    return iVar1;
}


/* fcn.00019718 @ 0x19718 */

int64_t fcn.00019718(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    int64_t aiStack_18 [2];
    
    if (arg4 == '\x04') {
        uVar3 = 0x1abc0;
        uVar2 = 0x1abe0;
    }
    else {
        if (arg4 != '\x06') {
            return -0x7ffffffffffffffd;
        }
        uVar3 = 0x1abd0;
        uVar2 = 0x1ac00;
    }
    iVar1 = (**(*0x1b5f0 + 0x120))(arg3,uVar2,arg2,arg1);
    if ((-1 < iVar1) && (iVar1 = (**(*0x1b5f0 + 0x118))(arg1,uVar3,aiStack_18,arg2,arg1,2), -1 < iVar1)) {
        iVar1 = (**(aiStack_18[0] + 8))(aiStack_18[0],arg3);
    }
    return iVar1;
}


/* fcn.0001a8c0 @ 0x1a8c0 */

void fcn.0001a8c0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint in_R9D;
    uint32_t arg4;
    
    if (((arg1 != 0) && (arg2 != 0)) && (*(arg2 + 0x50) = *(arg2 + 0x50) + -1, *(arg2 + 0x50) < 1)) {
        cVar1 = *(arg1 + 0x90);
        *(*(arg2 + 0x18) + 8) = *(arg2 + 0x20);
        **(arg2 + 0x20) = *(arg2 + 0x18);
        iVar2 = *(arg2 + 0x30);
        if (cVar1 == '\x04') {
            (**(iVar2 + 8))(iVar2,0);
            arg4 = CONCAT31(in_R9D >> 8,4);
        }
        else {
            (**(iVar2 + 8))(iVar2,0);
            arg4 = CONCAT31(in_R9D >> 8,6);
        }
        fcn.00019718(*(arg1 + 0x20),*(arg1 + 0x28),*(arg2 + 0x28),arg4);
        (**(*0x1b5f0 + 0x70))(*(arg2 + 0x38));
        (**(*0x1b5f0 + 0x48))(arg2);
    }
    return;
}


/* fcn.00013364 @ 0x13364 */

ulong fcn.00013364(int64_t arg1,uint32_t arg2)

{
    bool bVar1;
    char cVar2;
    char cVar3;
    uint16_t *puVar4;
    int64_t iVar5;
    int64_t arg3;
    uchar auStack_28 [16];
    
    arg3 = 0;
    cVar2 = arg2;
    if (cVar2 == '\x04') {
        if (auStack_28 != arg1 + 1) {
            section..text(auStack_28,arg1 + 1,4);
        }
        puVar4 = 0x1b612;
        iVar5 = 10;
    }
    else {
        iVar5 = 0x10;
        if (auStack_28 != arg1) {
            arg3 = 0;
            section..text(auStack_28,arg1,0x10);
        }
        puVar4 = 0x1b610;
    }
    if (*(iVar5 + arg1) == 0) {
        bVar1 = false;
        if (*puVar4 == 0xffff) {
            *puVar4 = 0x400;
        }
        *puVar4 = *puVar4 + 1;
        while( true ) {
            arg3 = CONCAT71(arg3 >> 8,cVar2);
            cVar3 = fcn.000125dc(auStack_28,*puVar4,arg3);
            if (cVar3 == '\0') break;
            *puVar4 = *puVar4 + 1;
            if (*puVar4 < 0x401) {
                if (bVar1) {
                    return 0x8000000000000009;
                }
                bVar1 = true;
                *puVar4 = 0x401;
            }
        }
        *(iVar5 + arg1) = *puVar4;
    }
    else {
        cVar2 = fcn.000125dc(auStack_28,*(iVar5 + arg1),CONCAT71(arg3 >> 8,cVar2));
        if (cVar2 != '\0') {
            return 0x8000000000000002;
        }
    }
    return 0;
}


/* fcn.000127c0 @ 0x127c0 */

ulong fcn.000127c0(uint32_t arg1)

{
    int64_t iVar1;
    char cVar2;
    ulong uVar3;
    uint in_register_0000000c;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    uint32_t in_R8D;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    if (piVar4[6] == 0) {
code_r0x000127d9:
        uVar3 = 0xffffffffffffffff;
    }
    else {
        piVar6 = 0x1ae08;
        if (piVar4[0xe] != '\x01') {
            piVar6 = 0x1adf8;
        }
        for (piVar5 = *piVar6; piVar5 != piVar6; piVar5 = *piVar5) {
            if (piVar4[6] == piVar5[6]) {
                in_R8D = CONCAT31(in_R8D >> 8,*(piVar4[3] + 0x11c));
                cVar2 = fcn.000123e0(arg1 + 0x20,piVar5 + 4,in_R8D);
                if ((cVar2 != '\0') && (*(piVar4 + 0x44) == *(piVar5 + 0x44))) {
                    in_R8D = CONCAT31(in_R8D >> 8,*(piVar4[3] + 0x11c));
                    cVar2 = fcn.000123e0(arg1 + 0x34,piVar5 + 0x34,in_R8D);
                    if (cVar2 != '\0') goto code_r0x000127d9;
                }
            }
        }
        iVar1 = *piVar6;
        *piVar4 = iVar1;
        piVar4[1] = piVar6;
        *(iVar1 + 8) = piVar4;
        uVar3 = 0;
        *piVar6 = piVar4;
    }
    return uVar3;
}


/* fcn.00013480 @ 0x13480 */

void fcn.00013480(int64_t arg1)

{
    int64_t iVar1;
    
    if (*(*(arg1 + 0x130) + 0x50) < 2) {
        fcn.0001a6a4(*(arg1 + 0x130),0);
    }
    iVar1 = *(arg1 + 0x18);
    if (*(iVar1 + 0x38) - 1U < 2) {
        *(*arg1 + 8) = *(arg1 + 8);
        **(arg1 + 8) = *arg1;
        if (*(iVar1 + 0x20) != 0) {
            (**(*0x1b5f0 + 0x90))(*(iVar1 + 8),0x1aba0);
            (**(*0x1b5f0 + 0x48))(*(iVar1 + 0x20));
            *(iVar1 + 0x20) = 0;
        }
    }
    fcn.00018de0(arg1 + 0x48);
    fcn.00018de0(arg1 + 0x58);
    *(arg1 + 0x70) = 0;
    *(arg1 + 0x12f) = 0;
    return;
}


/* fcn.0001363c @ 0x1363c */

//WARNING: Variable defined which should be unmapped: var_14h
//WARNING: Variable defined which should be unmapped: var_1ch

int64_t fcn.0001363c(uint32_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    ushort uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    int iVar7;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar *arg1_01;
    uint *arg1_02;
    uint *puVar8;
    int *piVar9;
    uint *arg1_03;
    int iVar10;
    uint uStack_68;
    uchar auStack_64 [6];
    uint uStack_5e;
    uchar uStack_5a;
    uchar uStack_59;
    uint auStack_54 [3];
    int64_t var_40h;
    uint uStack_3c;
    int64_t var_2ch;
    int8_t var_1ch;
    int8_t var_1bh;
    int32_t var_14h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(arg1_00 + 0x110);
    iVar5 = 4;
    if (*(arg1_00 + 0x11c) == '\x04') {
        section..text(&uStack_68,0x1ae70,0x1c);
        uStack_5a = *arg2;
        uStack_59 = *(arg2 + 1);
        auStack_64[1] = *(arg2 + 2);
        uStack_68._0_1_ = 6;
        if (&uStack_5e != arg2 + 7) {
            section..text(&uStack_5e,arg2 + 7,4);
        }
        auStack_54[0] = 0xffffffff;
        puVar8 = arg2 + 3;
        if (auStack_64 + 2 != puVar8) {
            arg1_01 = auStack_64 + 2;
            iVar4 = iVar5;
code_r0x00013730:
            section..text(arg1_01,puVar8,iVar4);
        }
    }
    else {
        section..text(&uStack_68,0x1ae90,0x34);
        var_40h._4_1_ = *arg2;
        uStack_3c = 0xffffffff;
        var_40h._5_1_ = *(arg2 + 1);
        uStack_68._0_1_ = 6;
        if (auStack_54 != arg2 + 2) {
            section..text(auStack_54,arg2 + 2,0x10);
        }
        puVar8 = arg2 + 0x14;
        if (auStack_64 != puVar8) {
            iVar4 = 0x10;
            arg1_01 = auStack_64;
            goto code_r0x00013730;
        }
    }
    arg1_03 = arg2 + 2;
    if (*(*(iVar2 + 0x130) + 0x50) < 2) {
        puVar8 = &uStack_68;
        iVar4 = fcn.0001a6a4(*(iVar2 + 0x130),puVar8);
        if (iVar4 < 0) {
            return iVar4;
        }
    }
    if (*(arg1_00 + 0x11c) == '\x04') {
        if (arg2 + 3 != auStack_64 + 2) {
            puVar8 = auStack_64 + 2;
            section..text(arg2 + 3,puVar8,4);
        }
        if (arg2 + 7 == &uStack_5e) goto code_r0x000137ae;
        puVar8 = &uStack_5e;
        arg1_02 = arg2 + 7;
    }
    else {
        if (arg1_03 == auStack_54) goto code_r0x000137ae;
        iVar5 = 0x10;
        puVar8 = auStack_54;
        arg1_02 = arg1_03;
    }
    section..text(arg1_02,puVar8,iVar5);
code_r0x000137ae:
    iVar5 = fcn.00013364(arg1_03,CONCAT71(puVar8 >> 8,*(arg1_00 + 0x11c)));
    if (-1 < iVar5) {
        *(iVar2 + 0x68) = *(iVar2 + 0x68) | 2;
        *(iVar2 + 0x98) = 0x218;
        *(iVar2 + 0x70) = 0;
        uVar3 = fcn.00012874(arg1_00);
        *(iVar2 + 0xec) = 0;
        puVar8 = iVar2 + 0x20;
        *(iVar2 + 0xfc) = 0xffffffff;
        *(iVar2 + 0xb0) = uVar3;
        *(iVar2 + 0xf8) = *(iVar2 + 0x98);
        *(iVar2 + 0xf4) = 0xf;
        *(iVar2 + 0x106) = 3;
        *(iVar2 + 0x110) = 36000;
        iVar10 = 10;
        *(iVar2 + 0x114) = 300;
        *(iVar2 + 0x11c) = 10;
        *(iVar2 + 0x120) = 10;
        *(iVar2 + 0x118) = 8;
        *(iVar2 + 0x11a) = 0xc;
        *(iVar2 + 0x124) = 0x177;
        cVar1 = *(arg1_00 + 0x11c);
        *(iVar2 + 0x12a) = *(arg2 + 1);
        *(iVar2 + 0x129) = *arg2;
        if (cVar1 == '\x04') {
            *(iVar2 + 0x128) = *arg1_03;
            if (puVar8 != arg2 + 3) {
                section..text(puVar8,arg2 + 3,4);
            }
            *(iVar2 + 0x30) = *(arg2 + 0xc) << 8 | *(arg2 + 0xc) >> 8;
            if (iVar2 + 299 != arg2 + 7) {
                section..text(iVar2 + 299,arg2 + 7,4);
            }
            if (iVar2 + 0x34 != arg2 + 0xe) {
                section..text(iVar2 + 0x34,arg2 + 0xe,4);
            }
            *(iVar2 + 0x44) = *(arg2 + 0x12) << 8 | *(arg2 + 0x12) >> 8;
            piVar9 = *(arg2 + 0x18);
        }
        else {
            if (puVar8 != arg1_03) {
                section..text(puVar8,arg1_03,0x10);
            }
            *(iVar2 + 0x30) = *(arg2 + 0x12) << 8 | *(arg2 + 0x12) >> 8;
            if (iVar2 + 0x34 != arg2 + 0x14) {
                section..text(iVar2 + 0x34,arg2 + 0x14,0x10);
            }
            *(iVar2 + 0x44) = *(arg2 + 0x24) << 8 | *(arg2 + 0x24) >> 8;
            piVar9 = *(arg2 + 0x28);
        }
        uVar6 = 0;
        if (piVar9 != NULL) {
            iVar7 = 0x200000;
            if (*piVar9 - 0x2000U < 0x1fe001) {
                iVar7 = *piVar9;
            }
            *(arg1_00 + 0x70) = iVar7;
            iVar7 = 0x200000;
            if (piVar9[1] - 0x2000U < 0x1fe001) {
                iVar7 = piVar9[1];
            }
            *(arg1_00 + 0x60) = iVar7;
            iVar7 = iVar10;
            if (piVar9[2] - 5U < 6) {
                iVar7 = piVar9[2];
            }
            *(arg1_00 + 0x8c) = iVar7;
            uVar3 = 0xc;
            if (piVar9[4] - 6U < 7) {
                uVar3 = piVar9[4];
            }
            *(iVar2 + 0x11a) = uVar3;
            iVar7 = iVar10;
            if (piVar9[5] * 5 - 10U < 0xb) {
                iVar7 = piVar9[5] * 5;
            }
            *(iVar2 + 0x11c) = iVar7;
            if (piVar9[6] == 0) {
                *(iVar2 + 0x120) = 0;
            }
            else {
                iVar7 = piVar9[6] * 5;
                if (iVar7 - 10U < 0x123) {
                    iVar10 = iVar7;
                }
                *(iVar2 + 0x120) = iVar10;
            }
            if (piVar9[7] != 0) {
                *(iVar2 + 0x68) = *(iVar2 + 0x68) & 0xfffffffd;
                iVar10 = 8;
                if (piVar9[7] - 4U < 5) {
                    iVar10 = piVar9[7];
                }
                *(iVar2 + 0x118) = iVar10;
                iVar10 = 36000;
                if (piVar9[8] * 5 - 36000U < 0x8ca1) {
                    iVar10 = piVar9[8] * 5;
                }
                *(iVar2 + 0x110) = iVar10;
                iVar10 = 300;
                if (piVar9[9] * 5 - 0x96U < 0x97) {
                    iVar10 = piVar9[9] * 5;
                }
                *(iVar2 + 0x114) = iVar10;
            }
            iVar10 = 0x177;
            if (piVar9[3] * 5 - 300U < 0x4c) {
                iVar10 = piVar9[3] * 5;
            }
            *(iVar2 + 0x124) = iVar10;
            if (piVar9[10] == '\0') {
                *(iVar2 + 0x68) = *(iVar2 + 0x68) | 1;
            }
            if (*(piVar9 + 0x29) == '\0') {
                *(iVar2 + 0x68) = *(iVar2 + 0x68) | 0x10;
            }
            if (*(piVar9 + 0x2a) == '\0') {
                *(iVar2 + 0x68) = *(iVar2 + 0x68) | 4;
            }
        }
        iVar5 = fcn.00012cf0(arg1);
        if (-1 < iVar5) {
            if (((*(arg1_00 + 0x11c) == '\x04') && (*(arg2 + 0x14) == '\0')) ||
               ((*(arg1_00 + 0x11c) == '\x06' && (*(arg2 + 0x26) == '\0')))) {
                *(iVar2 + 0x70) = 1;
                *(arg1_00 + 0x40) = 1;
                *(arg1_00 + 0x38) = 2;
            }
            else {
                *(arg1_00 + 0x38) = 1;
            }
            if (*(arg1_00 + 0x11c) == '\x06') {
                *(iVar2 + 0x138) = 0x19;
                do {
                    if (*(uVar6 + 0x34 + iVar2) != '\0') goto code_r0x00013ae1;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < 0x10);
                *(iVar2 + 0x12f) = 1;
            }
code_r0x00013ae1:
            fcn.000127c0(iVar2);
        }
    }
    return iVar5;
}


/* fcn.00013520 @ 0x13520 */

int64_t fcn.00013520(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uchar auStackX_8 [8];
    
    cVar1 = *(arg1 + 0x11c);
    iVar3 = fcn.000182c0(0x140);
    if (iVar3 == 0) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        iVar2 = *(*(arg1 + 0x108) + 0x20);
        iVar4 = fcn.0001a58c(iVar2);
        *(iVar3 + 0x130) = iVar4;
        if (iVar4 == 0) {
            iVar4 = -0x7ffffffffffffff7;
        }
        else {
            uVar5 = 0x1abe0;
            if (cVar1 != '\x04') {
                uVar5 = 0x1ac00;
            }
            iVar4 = (**(*0x1b5f0 + 0x118))(*(iVar4 + 0x28),uVar5,auStackX_8,*(iVar2 + 0x28),*(arg1 + 8),8);
            if (-1 < iVar4) {
                *iVar3 = iVar3;
                iVar2 = iVar3 + 0x48;
                *(iVar3 + 8) = iVar3;
                *iVar2 = iVar2;
                *(iVar3 + 0x50) = iVar2;
                iVar2 = iVar3 + 0x58;
                *iVar2 = iVar2;
                *(iVar3 + 0x60) = iVar2;
                *(iVar3 + 0x70) = 0;
                *(iVar3 + 0x18) = arg1;
                *(arg1 + 0x110) = iVar3;
                return 0;
            }
            fcn.0001a8c0(iVar2,*(iVar3 + 0x130));
        }
        (**(*0x1b5f0 + 0x48))(iVar3);
    }
    return iVar4;
}


/* fcn.000154b8 @ 0x154b8 */

uint32_t fcn.000154b8(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    iVar1 = *(arg1 + 0x18);
    uVar3 = 0;
    uVar4 = 0;
    if ((*(arg1 + 0x9c) - *(arg1 + 0xa0)) - *(arg1 + 0xa4) < 0) {
        uVar4 = (*(arg1 + 0xa0) - *(arg1 + 0x9c)) + *(arg1 + 0xa4);
    }
    if (*(*(iVar1 + 0x78) + 0x30) < *(iVar1 + 0x70)) {
        uVar3 = *(iVar1 + 0x70) - *(*(iVar1 + 0x78) + 0x30);
    }
    uVar2 = -(uVar4 < uVar3) & uVar3 - uVar4;
    if ((*(arg1 + 0x98) < uVar2) || (*(iVar1 + 0x70) <= uVar2 * 2)) {
        uVar4 = uVar3;
    }
    return uVar4;
}


/* fcn.00015ea8 @ 0x15ea8 */

void fcn.00015ea8(int64_t arg1)

{
    int64_t arg2;
    int64_t iVar1;
    
    arg2 = fcn.00018cb0(0xc0);
    if (arg2 != 0) {
        *(arg2 + 0x98) = *(arg2 + 0x98) + 0xc0;
        *(arg2 + 0xa0) = *(arg2 + 0xa0) + 0xc0;
        *(arg2 + 0x38) = *(arg1 + 0x7c);
        *(arg2 + 0x3c) = *(arg1 + 0x7c);
        *(arg2 + 0x44) = 0x10;
        iVar1 = fcn.000155f8(arg1,arg2);
        if (iVar1 == 0) {
            *(arg1 + 0x68) = *(arg1 + 0x68) & 0xffffbfff;
            *(arg1 + 0x71) = 0;
        }
        fcn.00018db4(arg2);
    }
    return;
}


/* fcn.000155f8 @ 0x155f8 */

ulong fcn.000155f8(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int16_t iVar2;
    uint16_t uVar3;
    ushort uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    ushort *puVar8;
    uint32_t uVar9;
    uint16_t uVar10;
    uint8_t uVar11;
    int64_t in_R8;
    int8_t unaff_R13B;
    
    uVar5 = arg2;
    iVar6 = fcn.00016114(uVar5);
    if (iVar6 == 0) {
        uVar7 = 0xffffffffffffffff;
    }
    else {
        iVar1 = *(arg2 + 0x84);
        uVar11 = *(arg2 + 0x44) >> 1 & 1;
        if (uVar11 == 0) {
            iVar2 = 0;
            if (((*(arg1 + 0x68) >> 6 & 1) != 0) && ((*(arg2 + 0x44) & 4) == 0)) {
                iVar2 = 0xc;
                in_R8 = CONCAT71(in_R8 >> 8,1);
                uVar9 = fcn.00018f44(uVar5,0xc,in_R8);
                fcn.00015198(uVar9,0x101080a);
                fcn.00015198(uVar9 + 4,*0x1ae68);
                fcn.00015198(uVar9 + 8,*(arg1 + 0xdc));
            }
        }
        else {
            iVar2 = fcn.000151dc(arg1,arg2);
        }
        puVar8 = fcn.00018f44(uVar5,0x14,CONCAT71(in_R8 >> 8,1));
        *(arg2 + 0x28) = puVar8;
        *puVar8 = *(arg1 + 0x30);
        puVar8[1] = *(arg1 + 0x44);
        uVar3 = *(arg2 + 0x38) >> 0x10;
        uVar10 = *(arg2 + 0x38);
        *(puVar8 + 2) = CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar3 << 8 | uVar3 >> 8);
        uVar3 = *(arg1 + 0x9c) >> 0x10;
        uVar10 = *(arg1 + 0x9c);
        *(puVar8 + 6) = (iVar2 + 0x14U >> 2) << 4;
        *(puVar8 + 4) = CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar3 << 8 | uVar3 >> 8);
        if (uVar11 == 0) {
            uVar5 = fcn.000154b8(arg1);
            *(arg1 + 0xa0) = uVar5;
        }
        else {
            uVar5 = *(*(arg1 + 0x18) + 0x70);
        }
        uVar5 = uVar5 >> (*(arg1 + 0xda) & 0x1f);
        puVar8[8] = 0;
        uVar9 = 0xffff;
        if (uVar5 < 0xffff) {
            uVar9 = uVar5;
        }
        puVar8[7] = uVar9 << 8 | uVar9 >> 8;
        *(arg2 + 0x44) = *(arg2 + 0x44) & 0xf7;
        if (iVar1 != 0) {
            if (((*(arg1 + 0x68) >> 9 & 1) == 0) || (*(arg2 + 0x3c) - *(arg2 + 0x38) < *(arg1 + 0x80) - *(arg2 + 0x38)))
            {
                if ((*(arg2 + 0x3c) == *(arg1 + 0x7c)) && (*(*(*(arg1 + 0x18) + 0x68) + 0x30) == 0)) {
                    *(arg2 + 0x44) = *(arg2 + 0x44) | 8;
                }
            }
            else {
                *(arg2 + 0x44) = *(arg2 + 0x44) | 8;
                *(arg1 + 0x68) = *(arg1 + 0x68) & 0xfffffdff;
            }
        }
        *(arg2 + 0x44) = *(arg2 + 0x44) & 0xdf;
        if (((*(arg1 + 0x68) >> 7 & 1) != 0) && (*(arg2 + 0x38) - *(arg1 + 0x84) < 1)) {
            *(arg2 + 0x44) = *(arg2 + 0x44) | 0x20;
            iVar1 = *(arg1 + 0x84);
            if (iVar1 - *(arg2 + 0x3c) < 0) {
                *(arg2 + 0x46) = iVar1 - *(arg2 + 0x38);
            }
            else {
                uVar9 = iVar1 - *(arg2 + 0x38);
                uVar5 = 0xffff;
                if (uVar9 < 0xffff) {
                    uVar5 = uVar9;
                }
                *(arg2 + 0x46) = uVar5;
            }
        }
        *(puVar8 + 0xd) = *(arg2 + 0x44);
        puVar8[9] = *(arg2 + 0x46) << 8 | *(arg2 + 0x46) >> 8;
        uVar4 = fcn.00012a48(arg2,*(arg1 + 0x72));
        puVar8[8] = uVar4;
        *(arg1 + 0xa4) = *(arg1 + 0x9c);
        if (uVar11 != 0) {
            *(arg1 + 0xa0) = puVar8[7] << 8 | puVar8[7] >> 8;
        }
        *(arg1 + 0x71) = 0;
        uVar7 = fcn.00012e94(arg1,arg2,arg1 + 0x20,arg1 + 0x34,unaff_R13B);
    }
    return uVar7;
}


/* fcn.00012fbc @ 0x12fbc */

ulong fcn.00012fbc(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uchar *puVar2;
    uint *puVar3;
    ulong *puVar4;
    ulong uVar5;
    uint in_register_00000014;
    int64_t *piVar6;
    
    piVar6 = CONCAT44(in_register_00000014,arg2);
    if ((*(*(arg1 + 0x18) + 0x38) - 1U < 2) || (piVar6[1] == 0)) {
        if (*piVar6 != NULL) {
            **piVar6 = *(arg1 + 0x70);
        }
        puVar2 = piVar6[1];
        if (puVar2 != NULL) {
            puVar3 = *(puVar2 + 0x18);
            *puVar2 = *(arg1 + 0x129);
            puVar2[1] = *(arg1 + 0x12a);
            puVar2[2] = *(arg1 + 0x128);
            if (puVar2 + 3 != arg1 + 0x20) {
                section..text(puVar2 + 3,arg1 + 0x20,4);
            }
            if (puVar2 + 7 != arg1 + 299) {
                section..text(puVar2 + 7,arg1 + 299,4);
            }
            *(puVar2 + 0xc) = *(arg1 + 0x30) << 8 | *(arg1 + 0x30) >> 8;
            if (puVar2 + 0xe != arg1 + 0x34) {
                section..text(puVar2 + 0xe,arg1 + 0x34,4);
            }
            *(puVar2 + 0x12) = *(arg1 + 0x44) << 8 | *(arg1 + 0x44) >> 8;
            puVar2[0x14] = *(arg1 + 0x70) != '\x01';
            if (puVar3 != NULL) {
                *puVar3 = *(*(arg1 + 0x18) + 0x70);
                puVar3[1] = *(*(arg1 + 0x18) + 0x60);
                puVar3[2] = *(*(arg1 + 0x18) + 0x8c);
                puVar3[3] = *(arg1 + 0x124) / 5;
                puVar3[4] = *(arg1 + 0x11a);
                puVar3[5] = *(arg1 + 0x11c) / 5;
                puVar3[6] = *(arg1 + 0x120) / 5;
                puVar3[7] = *(arg1 + 0x118);
                puVar3[8] = *(arg1 + 0x110) / 5;
                puVar3[9] = *(arg1 + 0x114) / 5;
                *(puVar3 + 10) = ~*(arg1 + 0x68) & 1;
                *(puVar3 + 0x29) = ~(*(arg1 + 0x68) >> 4) & 1;
                uVar1 = *(arg1 + 0x68);
                *(puVar3 + 0x2b) = 0;
                *(puVar3 + 0x2a) = ~(uVar1 >> 2) & 1;
            }
        }
        puVar4 = *(*(arg1 + 0x130) + 0x30);
        uVar5 = (**puVar4)(puVar4,piVar6[2],piVar6[3],piVar6[4]);
    }
    else {
        uVar5 = 0x8000000000000013;
    }
    return uVar5;
}


/* fcn.000131a4 @ 0x131a4 */

ulong fcn.000131a4(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uchar *puVar2;
    uint *puVar3;
    ulong *puVar4;
    ulong uVar5;
    uint in_register_00000014;
    int64_t *piVar6;
    
    piVar6 = CONCAT44(in_register_00000014,arg2);
    if ((*(*(arg1 + 0x18) + 0x38) - 1U < 2) || (piVar6[1] == 0)) {
        if (*piVar6 != NULL) {
            **piVar6 = *(arg1 + 0x70);
        }
        puVar2 = piVar6[1];
        if (puVar2 != NULL) {
            puVar3 = *(puVar2 + 0x28);
            *puVar2 = *(arg1 + 0x129);
            puVar2[1] = *(arg1 + 0x12a);
            *(puVar2 + 0x12) = *(arg1 + 0x30) << 8 | *(arg1 + 0x30) >> 8;
            *(puVar2 + 0x24) = *(arg1 + 0x44) << 8 | *(arg1 + 0x44) >> 8;
            puVar2[0x26] = *(arg1 + 0x70) != '\x01';
            if (puVar2 + 2 != arg1 + 0x20) {
                section..text(puVar2 + 2,arg1 + 0x20,0x10);
            }
            if (puVar2 + 0x14 != arg1 + 0x34) {
                section..text(puVar2 + 0x14,arg1 + 0x34,0x10);
            }
            if (puVar3 != NULL) {
                *puVar3 = *(*(arg1 + 0x18) + 0x70);
                puVar3[1] = *(*(arg1 + 0x18) + 0x60);
                puVar3[2] = *(*(arg1 + 0x18) + 0x8c);
                puVar3[3] = *(arg1 + 0x124) / 5;
                puVar3[4] = *(arg1 + 0x11a);
                puVar3[5] = *(arg1 + 0x11c) / 5;
                puVar3[6] = *(arg1 + 0x120) / 5;
                puVar3[7] = *(arg1 + 0x118);
                puVar3[8] = *(arg1 + 0x110) / 5;
                puVar3[9] = *(arg1 + 0x114) / 5;
                *(puVar3 + 10) = ~*(arg1 + 0x68) & 1;
                *(puVar3 + 0x29) = ~(*(arg1 + 0x68) >> 4) & 1;
                uVar1 = *(arg1 + 0x68);
                *(puVar3 + 0x2b) = 0;
                *(puVar3 + 0x2a) = ~(uVar1 >> 2) & 1;
            }
        }
        puVar4 = *(*(arg1 + 0x130) + 0x30);
        uVar5 = (**puVar4)(puVar4,piVar6[2],piVar6[3],piVar6[4]);
    }
    else {
        uVar5 = 0x8000000000000013;
    }
    return uVar5;
}


/* fcn.00012bf8 @ 0x12bf8 */

//WARNING: Variable defined which should be unmapped: var_14h

void fcn.00012bf8(int64_t arg1)

{
    uint16_t uVar1;
    ushort uVar2;
    int64_t arg1_00;
    ushort *puVar3;
    uint16_t uVar4;
    int8_t unaff_BL;
    int32_t var_14h;
    
    arg1_00 = fcn.00018cb0(0xc0);
    if (arg1_00 != 0) {
        puVar3 = fcn.00018f44(arg1_00,0x14,0);
        *(arg1_00 + 0x28) = puVar3;
        *(puVar3 + 0xd) = 4;
        uVar1 = *(arg1 + 0x7c) >> 0x10;
        uVar4 = *(arg1 + 0x7c);
        *(puVar3 + 2) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
        uVar1 = *(arg1 + 0x9c) >> 0x10;
        uVar4 = *(arg1 + 0x9c);
        *(puVar3 + 4) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
        *puVar3 = *(arg1 + 0x30);
        puVar3[1] = *(arg1 + 0x44);
        *(puVar3 + 6) = 0x50;
        *(puVar3 + 7) = 0xffff;
        puVar3[9] = 0;
        uVar2 = fcn.00012a48(arg1_00,*(arg1 + 0x72));
        puVar3[8] = uVar2;
        fcn.00012e94(arg1,arg1_00,arg1 + 0x20,arg1 + 0x34,unaff_BL);
        fcn.00018db4(arg1_00);
    }
    return;
}


/* fcn.00012970 @ 0x12970 */

void fcn.00012970(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    char cVar2;
    
    cVar2 = arg2;
    *(arg1 + 0x70) = cVar2;
    if (cVar2 == '\0') {
        iVar1 = *(arg1 + 0x18);
        if (*(iVar1 + 0xf8) != 0) {
            *(*(iVar1 + 0xf8) + 8) = 0;
            (**(*0x1b5f0 + 0x68))(**(iVar1 + 0xf8));
            *(iVar1 + 0xf8) = 0;
        }
        fcn.00014f7c(iVar1);
        *(iVar1 + 0x40) = 0;
        if (*(iVar1 + 0x98) != 0) {
            fcn.000117e0(iVar1);
        }
    }
    else if (cVar2 == '\x04') {
        iVar1 = *(arg1 + 0x18);
        *(iVar1 + 0x40) = 3;
        if (*(iVar1 + 0x98) == 0) {
            *(*(iVar1 + 0xf0) + 8) = 0;
            (**(*0x1b5f0 + 0x68))(**(iVar1 + 0xf0));
            *(iVar1 + 0xf0) = 0;
            fcn.000146d0(iVar1);
        }
        else {
            fcn.00014ab4(iVar1);
        }
        if (*(arg1 + 0x10) != 0) {
            fcn.00012cf0(*(arg1 + 0x18));
        }
    }
    return;
}


/* fcn.000141dc @ 0x141dc */

//WARNING: Removing unreachable block (ram,0x00012984)
//WARNING: Removing unreachable block (ram,0x0001298d)
//WARNING: Removing unreachable block (ram,0x000129d1)
//WARNING: Removing unreachable block (ram,0x0001299f)
//WARNING: Removing unreachable block (ram,0x000129d9)
//WARNING: Removing unreachable block (ram,0x000129e0)

void fcn.000141dc(int64_t arg1)

{
    int64_t arg1_00;
    
    fcn.00018de0(arg1 + 0x48);
    fcn.00018de0(arg1 + 0x58);
    *(arg1 + 0x70) = 0;
    arg1_00 = *(arg1 + 0x18);
    if (*(arg1_00 + 0xf8) != 0) {
        *(*(arg1_00 + 0xf8) + 8) = 0;
        (**(*0x1b5f0 + 0x68))(**(arg1_00 + 0xf8));
        *(arg1_00 + 0xf8) = 0;
    }
    fcn.00014f7c(arg1_00);
    *(arg1_00 + 0x40) = 0;
    if (*(arg1_00 + 0x98) != 0) {
        fcn.000117e0(arg1_00);
    }
    return;
}


/* fcn.00012224 @ 0x12224 */

void fcn.00012224(int64_t arg1)

{
    uint uVar1;
    ushort uVar2;
    
    if (*(*(arg1 + 0x18) + 0x11c) == '\x04') {
        uVar2 = fcn.00019514(*(arg1 + 0x20),*(arg1 + 0x34));
    }
    else {
        uVar2 = fcn.00019560(arg1 + 0x20,arg1 + 0x34);
    }
    *(arg1 + 0x72) = uVar2;
    *0x1adf0 = *0x1adf0 + 0x800;
    *(arg1 + 0x88) = 0x218;
    *(arg1 + 0x74) = *0x1adf0;
    *(arg1 + 0x78) = *0x1adf0;
    *(arg1 + 0x7c) = *0x1adf0;
    *(arg1 + 0x94) = *0x1adf0;
    uVar1 = *(*(arg1 + 0x18) + 0x70);
    *(arg1 + 0xda) = 0;
    *(arg1 + 0x10c) = 0;
    *(arg1 + 0xd8) = 0;
    *(arg1 + 0xa0) = uVar1;
    return;
}


/* fcn.00014484 @ 0x14484 */

void fcn.00014484(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int *piVar5;
    
    iVar4 = arg3 + *0x1ae68;
    *(arg1 + 0xb2) = *(arg1 + 0xb2) | 1 << (arg2 & 0x1f);
    *(arg1 + 0xb4 + (arg2 & 0xffffU) * 4) = iVar4;
    *(arg1 + 0x68) = *(arg1 + 0x68) & 0xffffefff;
    iVar4 = *0x1ae68;
    piVar5 = arg1 + 0xb4;
    uVar3 = 0;
    *(arg1 + 0xcc) = 0xffff;
    do {
        if (((*(arg1 + 0xb2) >> (uVar3 & 0x1f) & 1) != 0) && (iVar1 = *piVar5, (iVar1 - iVar4) - *(arg1 + 0xcc) < 0)) {
            *(arg1 + 0x68) = *(arg1 + 0x68) | 0x1000;
            *(arg1 + 0xcc) = iVar1 - iVar4;
        }
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
        piVar5 = piVar5 + 1;
    } while (uVar2 < 6);
    return;
}


/* fcn.00015b18 @ 0x15b18 */

int64_t fcn.00015b18(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int64_t arg1_00;
    int64_t iVar6;
    uint in_register_0000000c;
    int64_t arg1_01;
    int iVar7;
    uint64_t arg3;
    uint32_t uVar8;
    uint64_t arg2_00;
    uint64_t in_R8;
    int64_t *piVar9;
    uint8_t uVar10;
    int64_t iStackX_18;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    iStackX_18 = 0;
    if ((*(arg1_01 + 0x70) == '\0') || ((*(arg1_01 + 0x68) >> 10 & 1) != 0)) {
        iStackX_18 = 0;
    }
    else {
        do {
            uVar3 = fcn.00015528(arg1,arg2);
            uVar4 = *(arg1_01 + 0x7c);
            arg3 = uVar3;
            uVar10 = *(*(arg1_01 + 0x70) + 0x1b0d0);
            uVar3 = uVar4;
            if ((uVar10 & 2) != 0) {
                uVar3 = *(arg1_01 + 0x74);
                arg3 = 0;
            }
            iVar7 = arg3;
            if (iVar7 == 0) {
                if ((uVar10 & 3) == 0) break;
code_r0x00015b95:
                arg1_00 = fcn.00018cb0(iVar7 + 0xc0);
                if (arg1_00 != 0) {
                    *(arg1_00 + 0x98) = *(arg1_00 + 0x98) + 0xc0;
                    arg2_00 = 0;
                    *(arg1_00 + 0xa0) = *(arg1_00 + 0xa0) + 0xc0;
                    if (iVar7 != 0) {
                        iVar6 = fcn.00018f44(arg1_00,arg3,0);
                        uVar4 = fcn.00019330(*(*(arg1_01 + 0x18) + 0x68),0,arg3,iVar6);
                        arg2_00 = uVar4;
                        in_R8 = arg3;
                    }
                    *(arg1_00 + 8) = *(arg1_00 + 8) + 1;
                    piVar1 = arg1_00 + 0x10;
                    *(arg1_00 + 0x38) = uVar3;
                    *(arg1_00 + 0x3c) = uVar3 + iVar7;
                    *piVar1 = arg1_01 + 0x48;
                    piVar9 = *(arg1_01 + 0x50);
                    *(arg1_00 + 0x18) = piVar9;
                    *piVar9 = piVar1;
                    *(arg1_01 + 0x50) = piVar1;
                    iVar7 = arg2_00;
                    if (iVar7 != 0) {
                        iVar6 = *(arg1_01 + 0x18);
                        fcn.00019424(*(iVar6 + 0x68),arg2_00);
                        while (iVar7 != 0) {
                            piVar1 = *(iVar6 + 0xe0);
                            puVar2 = piVar1[2];
                            uVar4 = arg2_00;
                            if (uVar4 < *(piVar1 + 3)) {
                                *(piVar1 + 3) = *(piVar1 + 3) - uVar4;
                                arg2_00 = 0;
                            }
                            else {
                                *(*piVar1 + 8) = piVar1[1];
                                *piVar1[1] = *piVar1;
                                puVar2[1] = 0;
                                (**(*0x1b5f0 + 0x68))(*puVar2);
                                arg2_00 = uVar4 - piVar1[3];
                                (**(*0x1b5f0 + 0x48))(piVar1);
                            }
                            iVar7 = arg2_00;
                        }
                        fcn.000146d0(iVar6);
                    }
                }
            }
            else {
                if (*(arg1_01 + 0x48) != arg1_01 + 0x48) {
                    uVar4 = *(*(arg1_01 + 0x50) + 0x2c);
                }
                if (-1 < uVar3 - uVar4) goto code_r0x00015b95;
                arg1_00 = fcn.00015890(arg1_01,uVar3,arg3);
                in_R8 = arg3;
            }
            iVar6 = fcn.00016114(arg1_00);
            if (iVar6 == 0) {
                fcn.00018db4(arg1_00);
                break;
            }
            if (arg1_00 == 0) break;
            uVar4 = *(arg1_00 + 0x84);
            uVar5 = uVar3 + uVar4;
            uVar8 = uVar5 + 1;
            if ((uVar10 & 2) == 0) {
                uVar8 = uVar5;
            }
            if ((uVar10 & 1) != 0) {
                if (*(arg1_01 + 0x48) == arg1_01 + 0x48) {
                    iVar7 = *(arg1_01 + 0x7c);
                }
                else {
                    iVar7 = *(*(arg1_01 + 0x50) + 0x2c);
                }
                if (((iVar7 == *(arg1_01 + 0x7c)) && (*(*(*(arg1_01 + 0x18) + 0x68) + 0x30) == 0)) &&
                   (((uVar8 - *(arg1_01 + 0x94)) - *(arg1_01 + 0x88)) + 1 < 0)) {
                    uVar8 = uVar8 + 1;
                }
                else {
                    uVar10 = uVar10 & 0xfe;
                }
            }
            *(arg1_00 + 0x38) = uVar3;
            *(arg1_00 + 0x3c) = uVar8;
            *(arg1_00 + 0x44) = uVar10;
            iVar6 = fcn.00016114(arg1_00);
            if (iVar6 == 0) {
code_r0x00015e74:
                fcn.00018db4(arg1_00);
                break;
            }
            piVar1 = arg1_01 + 0x48;
            piVar9 = *piVar1;
            if (piVar9 != piVar1) {
                iVar7 = *(piVar9 + 5);
                do {
                    iVar6 = fcn.00016114(piVar9 - 0x10);
                    if ((iVar6 == 0) || (iVar7 != piVar9[5])) goto code_r0x00015e74;
                    iVar7 = *(piVar9 + 0x2c);
                    piVar9 = *piVar9;
                } while (piVar9 != piVar1);
            }
            if (uVar8 == uVar3) goto code_r0x00015e74;
            iVar6 = fcn.000155f8(arg1_01,arg1_00);
            in_R8 = CONCAT71(in_R8 >> 8,1);
            if (iVar6 != 0) {
                fcn.00019084(arg1_00,(*(*(arg1_00 + 0x28) + 0xc) >> 4) << 2,in_R8);
                *(arg1_00 + 0x28) = 0;
                if ((uVar10 & 1) != 0) {
                    *(arg1_01 + 0x68) = *(arg1_01 + 0x68) | 0x400;
                }
                goto code_r0x00015e74;
            }
            iStackX_18 = iStackX_18 + (uVar8 - uVar3);
            fcn.00019084(arg1_00,(*(*(arg1_00 + 0x28) + 0xc) >> 4) << 2,in_R8);
            *(arg1_00 + 0x28) = 0;
            fcn.00018db4(arg1_00);
            *(arg1_01 + 0x71) = 0;
            if ((uVar10 & 1) != 0) {
                *(arg1_01 + 0x68) = *(arg1_01 + 0x68) | 0x400;
            }
            if (*(arg1_01 + 0x7c) - uVar8 < 0) {
                *(arg1_01 + 0x7c) = uVar8;
            }
            if ((*(arg1_01 + 0xb2) & 2) == 0) {
                in_R8 = *(arg1_01 + 0xf4);
                fcn.00014484(arg1_01,1,in_R8);
            }
            if ((*(arg1_01 + 0x106) == '\x03') && ((*(arg1_01 + 0x68) >> 0xd & 1) == 0)) {
                *(arg1_01 + 0xe4) = uVar3;
                *(arg1_01 + 0xe8) = 0;
                *(arg1_01 + 0x68) = *(arg1_01 + 0x68) | 0x2000;
            }
        } while (uVar4 == *(arg1_01 + 0x98));
    }
    return iStackX_18;
}


/* fcn.000186c8 @ 0x186c8 */

ulong fcn.000186c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.00018634(arg2,arg1);
                if (iVar5 == 0) {
code_r0x000187cd:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x000187c3:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x000187db:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x000187db;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x000187c3;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x000187cd;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000174dc @ 0x174dc */

void fcn.000174dc(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00017540(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00017540 @ 0x17540 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00017540(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001759b;
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
code_r0x0001759b:
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
        uVar5 = fcn.0001ab54(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.0001ab28(arg4);
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
            pcVar9 = 0x1b16c;
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
code_r0x00017925:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x1b16c;
                }
                else {
                    pcVar9 = 0x1b170;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x000176e4:
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
                            goto code_r0x00017887;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x0001789e;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00017887;
                                }
                                goto code_r0x0001789e;
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
code_r0x00017887:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x000176e4;
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
                                goto code_r0x000176e4;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x0001789e;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00017887;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x0001789e:
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
                                fcn.0001826c(&var_68h_2,0x26,0,0x1b100);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00017925;
                                if (uStack_a8 == 0x53) goto code_r0x00017b34;
                                if (uStack_a8 == 0x58) goto code_r0x00017c2a;
                                if (uStack_a8 == 0x61) goto code_r0x00017b3d;
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
                                    goto code_r0x000176c9;
                                }
                                if (uStack_a8 != 100) goto code_r0x000176c5;
                                goto code_r0x00017c41;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x1b16c;
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
                        goto code_r0x00017e3c;
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
                                    iVar13 = 0x1b20b;
                                    goto code_r0x00017bf1;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00017bf1:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00017e3c;
                            }
                            fcn.0001826c(&var_68h_2,0x26,0,0x1b164);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00017b34:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00017b3d:
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
                                goto code_r0x00017e3c;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x000176c5;
                                    goto code_r0x00017c2e;
                                }
                                goto code_r0x00017c33;
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
                                goto code_r0x00017e3c;
                            }
                            fcn.0001826c(&var_68h_2,0x26,0,0x1b148);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00017e3c;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00017c2a:
                    uVar5 = uVar5 | 0x20;
code_r0x00017c2e:
                    uVar5 = uVar5 | 0x80;
code_r0x00017c33:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00017c41:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00017c83;
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
code_r0x00017c83:
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
code_r0x00017d0b:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00017d0b;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = str.0123456789ABCDEF[uVar11 % uVar17];
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
code_r0x000176c5:
                    pcVar9 = &uStack_a8;
code_r0x000176c9:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00017e3c:
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
                arg1 = fcn.0001750c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001750c(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.0001750c(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.0001750c(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.00018a3c @ 0x18a3c */

ulong fcn.00018a3c(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x1b5e0;
    if (*0x1b5e0 != NULL) {
        iVar2 = 0;
        if (**0x1b5e0 != 0) {
            piVar3 = *0x1b5e0;
            do {
                (**(*0x1b5f0 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x1b5f0 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x1b5f0 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.00018800 @ 0x18800 */

ulong fcn.00018800(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    char *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint in_R8;
    int16_t *arg2_00;
    uint32_t *puVar13;
    uint64_t uVar14;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    uVar11 = 0;
    if (arg2_00 == NULL) {
code_r0x00018a1f:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x00018a1f;
            if (arg4 == '\0') {
                iVar7 = fcn.00018634(arg2,arg1);
                if (iVar7 == 0) {
code_r0x00018881:
                    uVar12 = uVar11;
                    puVar5 = *0x1b5e0;
                    if (*0x1b5e0 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x00018927:
                            cVar3 = *pcVar9;
                            if (cVar3 != '\0') {
                                uVar10 = uVar11;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    uVar10 = uVar10 + 1;
                                    cVar3 = pcVar9[uVar10];
                                }
                                if (uVar10 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar3 = *arg1;
                                pcVar8 = arg1;
                                pcVar6 = pcVar9;
                                for (uVar14 = uVar10;
                                    (((cVar3 != '\0' && (*pcVar6 != '\0')) && (*pcVar8 == *pcVar6)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    pcVar8 = pcVar8 + 1;
                                    pcVar6 = pcVar6 + 1;
                                    cVar3 = *pcVar8;
                                }
                                arg2 = *pcVar8 - *pcVar6;
                                if (*pcVar8 - *pcVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar9 = pcVar9 + uVar10;
                                cVar3 = *pcVar9;
                                if (cVar3 == '\0') goto code_r0x0001892d;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x00018927;
                            }
code_r0x0001892d:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00018290();
                    if (puVar5 != NULL) {
                        if (((*0x1b5e0 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x1b5e0)) {
                            arg2 = puVar5;
                            section..text(puVar5,*0x1b5e0,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.000182ec(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.000182ec(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x1b5e0 != NULL) {
                                    (**(*0x1b5f0 + 0x48))();
                                }
                                *0x1b5e0 = puVar5;
                                return 0;
                            }
                            (**(*0x1b5f0 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x1b5f0 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x00018881;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000185e0 @ 0x185e0 */

ulong fcn.000185e0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t *puVar1;
    uint in_register_0000000c;
    ulong uVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    uVar2 = 0x8000000000000003;
    if (*arg3 != 0) {
        puVar1 = *arg2 + 0x10;
        do {
            if ((*(puVar1 + -8) == CONCAT44(in_register_0000000c,arg1)) && ((*puVar1 & 8) != 0)) {
                uVar2 = 0;
                break;
            }
            uVar3 = uVar3 + 1;
            puVar1 = puVar1 + 0x18;
        } while (uVar3 < *arg3);
    }
    (**(*0x1b5f0 + 0x48))(*arg2);
    return uVar2;
}


/* fcn.00013f70 @ 0x13f70 */

int64_t fcn.00013f70(int64_t arg1)

{
    int64_t iVar1;
    uint64_t arg3;
    uchar auStack_d8 [18];
    uint16_t uStack_c6;
    uchar auStack_a8 [160];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.000102c0(auStack_d8,0x30);
        arg3 = 0;
        iVar1 = (**arg1)(arg1,0,auStack_d8,0,0,0);
        if (iVar1 < 0) {
            if (iVar1 != -0x7fffffffffffffed) {
                return iVar1;
            }
            fcn.000174dc(auStack_a8,0xa0,0x1b070,arg3);
        }
        else {
            arg3 = uStack_c6;
            fcn.000174dc(auStack_a8,0xa0,0x1b010,arg3);
        }
        if (*0x1b5e0 != 0) {
            fcn.00018a3c();
            *0x1b5e0 = 0;
        }
        iVar1 = fcn.00018800(0x1af10,*0x1ae28,auStack_a8,CONCAT71(arg3 >> 8,1));
        if (-1 < iVar1) {
            iVar1 = fcn.00018800(0x1af14,*0x1ae40,auStack_a8,0);
        }
    }
    return iVar1;
}


/* fcn.00013e5c @ 0x13e5c */

int64_t fcn.00013e5c(int64_t arg1)

{
    int64_t iVar1;
    uint64_t arg3;
    uchar auStack_c8 [12];
    uint16_t uStack_bc;
    uchar auStack_a8 [160];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        fcn.000102c0(auStack_c8,0x20);
        arg3 = 0;
        iVar1 = (**arg1)(arg1,0,auStack_c8,0,0,0);
        if (iVar1 < 0) {
            if (iVar1 != -0x7fffffffffffffed) {
                return iVar1;
            }
            fcn.000174dc(auStack_a8,0xa0,0x1afe0,arg3);
        }
        else {
            arg3 = uStack_bc;
            fcn.000174dc(auStack_a8,0xa0,0x1af80,arg3);
        }
        if (*0x1b5e0 != 0) {
            fcn.00018a3c();
            *0x1b5e0 = 0;
        }
        iVar1 = fcn.00018800(0x1af10,*0x1ae28,auStack_a8,CONCAT71(arg3 >> 8,1));
        if (-1 < iVar1) {
            iVar1 = fcn.00018800(0x1af14,*0x1ae40,auStack_a8,0);
        }
    }
    return iVar1;
}


/* fcn.00015a1c @ 0x15a1c */

ulong fcn.00015a1c(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    ulong uVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint64_t arg3;
    
    iVar3 = arg2;
    if ((*(arg1 + 0xd9) == 0) ||
       ((-1 < *(arg1 + 0x10c) - iVar3 && (1 << (*(arg1 + 0xd9) & 0x1f) < (iVar3 - *(arg1 + 0x94)) - *(arg1 + 0x88))))) {
        if ((iVar3 - *(arg1 + 0x88)) - *(arg1 + 0x94) < 1) {
            uVar4 = (*(arg1 + 0x88) - iVar3) + *(arg1 + 0x94);
            goto code_r0x00015a86;
        }
code_r0x00015afb:
        uVar1 = 0;
    }
    else {
        uVar4 = *(arg1 + 0x7c) - iVar3;
code_r0x00015a86:
        if (*(arg1 + 0x98) <= uVar4) {
            uVar4 = *(arg1 + 0x98);
        }
        arg3 = uVar4;
        arg2_00 = fcn.00015890(arg1,arg2,arg3);
        if (arg2_00 != 0) {
            iVar2 = fcn.00016114(arg2_00);
            if (iVar2 != 0) {
                iVar2 = fcn.000155f8(arg1,arg2_00);
                if (iVar2 == 0) {
                    if (*(arg1 + 0x10c) - iVar3 < 0) {
                        *(arg1 + 0x10c) = iVar3;
                    }
                    fcn.00019084(arg2_00,(*(*(arg2_00 + 0x28) + 0xc) >> 4) << 2,CONCAT71(arg3 >> 8,1));
                    *(arg2_00 + 0x28) = 0;
                    fcn.00018db4(arg2_00);
                    goto code_r0x00015afb;
                }
            }
            fcn.00018db4(arg2_00);
        }
        uVar1 = 0xffffffffffffffff;
    }
    return uVar1;
}


/* fcn.00015528 @ 0x15528 */

uint32_t fcn.00015528(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    iVar3 = *(iVar4 + 0x94) + *(iVar4 + 0x88);
    iVar6 = *(iVar4 + 0xf8) + *(iVar4 + 0x78);
    if (iVar6 - iVar3 < 0) {
        iVar3 = iVar6;
    }
    iVar6 = *(iVar4 + 0x7c);
    if (iVar6 - iVar3 < 0) {
        uVar7 = iVar3 - iVar6;
    }
    if (*(iVar4 + 0x48) == iVar4 + 0x48) {
        iVar3 = iVar6;
    }
    else {
        iVar3 = *(*(iVar4 + 0x50) + 0x2c);
    }
    uVar5 = (*(*(*(iVar4 + 0x18) + 0x68) + 0x30) - iVar6) + iVar3;
    uVar1 = *(iVar4 + 0x98);
    uVar2 = uVar5;
    if (uVar7 < uVar5) {
        uVar2 = uVar7;
    }
    if (uVar1 < uVar2) {
        uVar2 = uVar1;
    }
    if (arg2 == 0) {
        if (uVar2 == 0) {
            if (uVar5 == 0) {
                return 0;
            }
        }
        else {
            if (uVar2 == uVar1) {
                return uVar2;
            }
            if (*(iVar4 + 0x8c) <= uVar2 * 2) {
                return uVar2;
            }
            if (uVar2 == uVar5) {
                if (iVar6 == *(iVar4 + 0x78)) {
                    return uVar2;
                }
                if ((*(iVar4 + 0x68) & 1) != 0) {
                    return uVar2;
                }
            }
        }
        if (((*(iVar4 + 0xb2) & 2) == 0) && (*(iVar4 + 0xd8) == '\0')) {
            fcn.000144b4(arg1);
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00015f1c @ 0x15f1c */

ulong fcn.00015f1c(int64_t arg1)

{
    int iVar1;
    int64_t arg2;
    ulong uVar2;
    
    arg2 = fcn.00018cb0(0xc0);
    if (arg2 == 0) {
        uVar2 = 0xffffffffffffffff;
    }
    else {
        *(arg2 + 0x98) = *(arg2 + 0x98) + 0xc0;
        *(arg2 + 0xa0) = *(arg2 + 0xa0) + 0xc0;
        *(arg2 + 0x38) = *(arg1 + 0x7c) + -1;
        iVar1 = *(arg1 + 0x7c);
        *(arg2 + 0x44) = 0x10;
        *(arg2 + 0x3c) = iVar1 + -1;
        uVar2 = fcn.000155f8(arg1,arg2);
        fcn.00018db4(arg2);
    }
    return uVar2;
}


/* fcn.00014424 @ 0x14424 */

void fcn.00014424(uint32_t arg1)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint in_register_0000000c;
    uint16_t uVar4;
    uint32_t uVar5;
    int *piVar6;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1) + 0x68;
    *puVar1 = *puVar1 & 0xffffefff;
    iVar3 = *0x1ae68;
    piVar6 = CONCAT44(in_register_0000000c,arg1) + 0xb4;
    uVar5 = 0;
    *(CONCAT44(in_register_0000000c,arg1) + 0xcc) = 0xffff;
    do {
        if (((*(CONCAT44(in_register_0000000c,arg1) + 0xb2) >> (uVar5 & 0x1f) & 1) != 0) &&
           (iVar2 = *piVar6, (iVar2 - iVar3) - *(CONCAT44(in_register_0000000c,arg1) + 0xcc) < 0)) {
            puVar1 = CONCAT44(in_register_0000000c,arg1) + 0x68;
            *puVar1 = *puVar1 | 0x1000;
            *(CONCAT44(in_register_0000000c,arg1) + 0xcc) = iVar2 - iVar3;
        }
        uVar4 = uVar5 + 1;
        uVar5 = uVar4;
        piVar6 = piVar6 + 1;
    } while (uVar4 < 6);
    return;
}


/* fcn.00019330 @ 0x19330 */

uint64_t fcn.00019330(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    ulong *arg1_00;
    uint32_t uVar5;
    ulong *puVar6;
    uint32_t uVar7;
    
    uVar5 = arg3;
    if ((uVar5 == 0) || (*(arg1 + 0x30) <= arg2)) {
        uVar4 = 0;
    }
    else {
        uVar3 = *(arg1 + 0x30) - arg2;
        puVar1 = arg1 + 0x20;
        puVar6 = *puVar1;
        if (uVar3 < uVar5) {
            uVar5 = uVar3;
        }
        arg1_00 = NULL;
        uVar3 = 0;
        for (; puVar6 != puVar1; puVar6 = *puVar6) {
            arg1_00 = puVar6 + -2;
            uVar7 = *(puVar6 + 0x74) + uVar3;
            if (arg2 < uVar7) break;
            uVar3 = uVar7;
        }
        arg2 = arg2 - uVar3;
        uVar3 = *(arg1_00 + 0x84) - arg2;
        if (uVar5 < uVar3) {
            uVar4 = fcn.00019140(arg1_00,arg2,uVar5,arg4);
        }
        else {
            fcn.00019140(arg1_00,arg2,uVar3,arg4);
            puVar6 = *puVar6;
            arg4 = arg4 + uVar3;
            uVar5 = uVar5 - uVar3;
            while( true ) {
                if ((uVar5 == 0) || (puVar6 == puVar1)) goto code_r0x00019404;
                uVar7 = *(puVar6 + 0x74);
                if (uVar5 <= uVar7) break;
                uVar5 = uVar5 - uVar7;
                uVar3 = uVar3 + uVar7;
                fcn.00019140(puVar6 + -2,0,uVar7,arg4);
                puVar2 = puVar6 + 0x74;
                puVar6 = *puVar6;
                arg4 = arg4 + *puVar2;
            }
            fcn.00019140(puVar6 + -2,0,uVar5,arg4);
            uVar3 = uVar3 + uVar5;
code_r0x00019404:
            uVar4 = uVar3;
        }
    }
    return uVar4;
}


/* fcn.00019424 @ 0x19424 */

int fcn.00019424(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t *piVar2;
    int iVar3;
    uint32_t arg2_00;
    uint64_t uVar4;
    int64_t *piVar5;
    int iVar6;
    int64_t *piVar7;
    
    uVar4 = arg2 & 0xffffffff;
    if (arg2 == 0) {
        iVar6 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x30);
        piVar7 = *(arg1 + 0x20);
        if (uVar1 < arg2) {
            uVar4 = uVar1;
        }
        *(arg1 + 0x30) = uVar1 - uVar4;
        iVar6 = 0;
        piVar2 = *piVar7;
        while (piVar5 = piVar2, piVar7 != arg1 + 0x20) {
            uVar1 = *(piVar7 + 0x74);
            arg2_00 = uVar4;
            if (arg2_00 < uVar1) {
                iVar3 = fcn.00019084(piVar7 + -2,arg2_00,CONCAT71(piVar7 >> 8,1));
                iVar6 = iVar6 + iVar3;
                break;
            }
            iVar6 = iVar6 + uVar1;
            uVar4 = arg2_00 - uVar1;
            *(*piVar7 + 8) = piVar7[1];
            *piVar7[1] = *piVar7;
            fcn.00018db4(piVar7 + -2);
            *(arg1 + 0x34) = *(arg1 + 0x34) + -1;
            if (arg2_00 - uVar1 == 0) break;
            piVar2 = *piVar5;
            piVar7 = piVar5;
        }
    }
    return iVar6;
}


/* fcn.00018e88 @ 0x18e88 */

int64_t fcn.00018e88(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t iVar9;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    
    uVar7 = arg2 & 0xffffffff;
    iVar6 = 0;
    iVar5 = fcn.00018c0c(arg2 & 0xffffffff,arg2);
    if (iVar5 != 0) {
        iVar2 = *(iVar5 + 0x78);
        *(iVar2 + 0x10) = in_stack_00000028;
        *(iVar2 + 0x18) = in_stack_00000030;
        *(iVar2 + 0x20) = 0;
        if (arg2 != 0) {
            iVar9 = 0x30;
            piVar8 = iVar5 + 0x98;
            do {
                uVar1 = *arg1;
                iVar3 = *(arg1 + 8);
                iVar4 = *(iVar5 + 0x78);
                *(iVar9 + iVar4) = uVar1;
                *(iVar9 + 8 + iVar4) = iVar3;
                iVar9 = iVar9 + 0x10;
                piVar8[-1] = iVar3 + uVar1;
                piVar8[1] = iVar3 + uVar1;
                piVar8[-2] = iVar3;
                *piVar8 = iVar3;
                *(piVar8 + 2) = uVar1;
                piVar8 = piVar8 + 5;
                iVar6 = iVar6 + *arg1;
                arg1 = arg1 + 0x10;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        *(iVar2 + 0x24) = iVar6;
        *(iVar5 + 0x84) = iVar6;
    }
    return iVar5;
}


/* fcn.000192b0 @ 0x192b0 */

uint * fcn.000192b0(ulong param_1)

{
    uint *puVar1;
    uint *puVar2;
    
    puVar1 = fcn.00018290(param_1,0x38);
    if (puVar1 != NULL) {
        *puVar1 = 0x7571626e;
        *(puVar1 + 2) = 1;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        puVar2 = puVar1 + 8;
        *puVar2 = puVar2;
        *(puVar1 + 10) = puVar2;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0;
    }
    return puVar1;
}


/* fcn.000192fc @ 0x192fc */

void fcn.000192fc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00018de0(arg1 + 0x20);
        iVar2 = *0x1b5f0;
        *(arg1 + 0x34) = 0;
        *(arg1 + 0x30) = 0;
        (**(iVar2 + 0x48))(arg1);
    }
    return;
}


/* fcn.00014a40 @ 0x14a40 */

void fcn.00014a40(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint in_register_00000014;
    int64_t *piVar3;
    
    piVar3 = CONCAT44(in_register_00000014,arg2);
    piVar1 = *piVar3;
    while (piVar1 != piVar3) {
        puVar2 = piVar1[2];
        puVar2[1] = *(arg1 + 0x80);
        (**(*0x1b5f0 + 0x68))(*puVar2);
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x1b5f0 + 0x48))(piVar1);
        piVar1 = *piVar3;
    }
    return;
}


/* fcn.00015198 @ 0x15198 */

void fcn.00015198(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    uint auStackX_10 [6];
    
    uVar1 = arg2 >> 0x10;
    auStackX_10[0] = CONCAT22(arg2 << 8 | arg2 >> 8,uVar1 << 8 | uVar1 >> 8);
    if (CONCAT44(in_register_0000000c,arg1) != auStackX_10) {
        section..text(CONCAT44(in_register_0000000c,arg1),auStackX_10,4);
    }
    return;
}


/* fcn.00015154 @ 0x15154 */

uint fcn.00015154(uint32_t arg1)

{
    uint in_register_0000000c;
    uchar auStackX_8 [32];
    
    if (auStackX_8 != CONCAT44(in_register_0000000c,arg1)) {
        section..text(auStackX_8,arg1,4);
    }
    return CONCAT22(auStackX_8._0_4_ << 8 | auStackX_8._0_4_ >> 8,
                    SUB42(auStackX_8._0_4_,2) << 8 | SUB42(auStackX_8._0_4_,2) >> 8);
}


/* fcn.000144b4 @ 0x144b4 */

void fcn.000144b4(uint32_t arg1)

{
    uint32_t *puVar1;
    int iVar2;
    uint in_register_0000000c;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0xd8) == '\0') {
        *(CONCAT44(in_register_0000000c,arg1) + 0xd4) = *(CONCAT44(in_register_0000000c,arg1) + 0xf4);
        *(CONCAT44(in_register_0000000c,arg1) + 0xd8) = 1;
    }
    else {
        piVar6 = CONCAT44(in_register_0000000c,arg1) + 0xd4;
        *piVar6 = *piVar6 << 1;
    }
    uVar4 = *(CONCAT44(in_register_0000000c,arg1) + 0xd4);
    if (uVar4 < 5) {
        *(CONCAT44(in_register_0000000c,arg1) + 0xd4) = 5;
    }
    else {
        if (300 < uVar4) {
            uVar4 = 300;
        }
        *(CONCAT44(in_register_0000000c,arg1) + 0xd4) = uVar4;
    }
    iVar5 = *(CONCAT44(in_register_0000000c,arg1) + 0xd4) + *0x1ae68;
    *(CONCAT44(in_register_0000000c,arg1) + 0xb2) = *(CONCAT44(in_register_0000000c,arg1) + 0xb2) | 4;
    *(CONCAT44(in_register_0000000c,arg1) + 0xbc) = iVar5;
    puVar1 = CONCAT44(in_register_0000000c,arg1) + 0x68;
    *puVar1 = *puVar1 & 0xffffefff;
    iVar5 = *0x1ae68;
    piVar6 = CONCAT44(in_register_0000000c,arg1) + 0xb4;
    uVar4 = 0;
    *(CONCAT44(in_register_0000000c,arg1) + 0xcc) = 0xffff;
    do {
        if (((*(CONCAT44(in_register_0000000c,arg1) + 0xb2) >> (uVar4 & 0x1f) & 1) != 0) &&
           (iVar2 = *piVar6, (iVar2 - iVar5) - *(CONCAT44(in_register_0000000c,arg1) + 0xcc) < 0)) {
            puVar1 = CONCAT44(in_register_0000000c,arg1) + 0x68;
            *puVar1 = *puVar1 | 0x1000;
            *(CONCAT44(in_register_0000000c,arg1) + 0xcc) = iVar2 - iVar5;
        }
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
        piVar6 = piVar6 + 1;
    } while (uVar3 < 6);
    return;
}


/* fcn.00016114 @ 0x16114 */

uint32_t fcn.00016114(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int iVar3;
    int iVar4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (iVar2 == 0) {
        return arg1 + 1;
    }
    iVar4 = *(iVar2 + 0x84);
    iVar1 = *(iVar2 + 0x28);
    if (iVar1 != 0) {
        if (*(iVar1 + 0xd) != *(iVar2 + 0x44)) {
            return 0;
        }
        iVar4 = iVar4 + (*(iVar1 + 0xc) >> 4) * -4;
    }
    iVar3 = iVar4 + 1;
    if ((*(iVar2 + 0x44) & 2) == 0) {
        iVar3 = iVar4;
    }
    iVar4 = iVar3 + 1;
    if ((*(iVar2 + 0x44) & 1) == 0) {
        iVar4 = iVar3;
    }
    return iVar4 + *(iVar2 + 0x38) == *(iVar2 + 0x3c);
}


/* fcn.000151dc @ 0x151dc */

int16_t fcn.000151dc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t arg1_00;
    int16_t iVar2;
    uint8_t uVar3;
    uint64_t arg3;
    
    uVar1 = *(arg1 + 0x68);
    arg3 = uVar1;
    uVar3 = 0;
    iVar2 = 0;
    arg1_00 = arg2;
    if (((uVar1 >> 4 & 1) == 0) && (((*(arg2 + 0x44) & 0x10) == 0 || (arg3 = uVar1 >> 5, (uVar1 >> 5 & 1) != 0)))) {
        iVar2 = 0xc;
        arg3 = CONCAT71(arg3 >> 8,1);
        uVar1 = fcn.00018f44(arg1_00,0xc,arg3);
        fcn.00015198(uVar1,0x101080a);
        fcn.00015198(uVar1 + 4,*0x1ae68);
        fcn.00015198(uVar1 + 8,0);
    }
    if (((*(arg1 + 0x68) >> 2 & 1) == 0) && (((*(arg2 + 0x44) & 0x10) == 0 || ((*(arg1 + 0x68) >> 3 & 1) != 0)))) {
        arg3 = CONCAT71(arg3 >> 8,1);
        uVar1 = fcn.00018f44(arg1_00,4,arg3);
        iVar2 = iVar2 + 4;
        do {
            if (*(*(arg1 + 0x18) + 0x70) <= 0xffff << (uVar3 & 0x1f)) break;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xe);
        fcn.00015198(uVar1,uVar3 | 0x1030300);
    }
    uVar1 = fcn.00018f44(arg1_00,4,CONCAT71(arg3 >> 8,1));
    fcn.00015198(uVar1,*(arg1 + 0xb0) | 0x2040000);
    return iVar2 + 4;
}


/* fcn.00019140 @ 0x19140 */

uint32_t fcn.00019140(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    
    uVar6 = arg3;
    if ((uVar6 == 0) || (*(arg1 + 0x84) <= arg2)) {
        uVar1 = 0;
    }
    else {
        uVar1 = *(arg1 + 0x84) - arg2;
        if (uVar1 < uVar6) {
            uVar6 = uVar1;
        }
        uVar4 = 0;
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if (*piVar2 != 0) {
                    uVar1 = *piVar2 + uVar4;
                    if (arg2 < uVar1) break;
                    uVar4 = uVar1;
                }
                uVar1 = uVar5 + 1;
                uVar5 = uVar1;
                piVar2 = piVar2 + 10;
            } while (uVar1 < *(arg1 + 0x80));
        }
        uVar1 = *(arg1 + 0xa8 + uVar5 * 0x28) - (arg2 - uVar4);
        iVar3 = (arg2 - uVar4) + *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar1 < uVar6) {
            if ((uVar1 != 0) && (arg4 != iVar3)) {
                section..text(arg4,iVar3,uVar1);
            }
            arg4 = arg4 + uVar1;
            uVar6 = uVar6 - uVar1;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (uVar6 <= uVar4) {
                    uVar1 = uVar1 + uVar6;
                    iVar3 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((uVar6 != 0) && (arg4 != iVar3)) {
                        section..text(arg4,iVar3,uVar6);
                    }
                    break;
                }
                iVar3 = *(arg1 + 0x98 + uVar5 * 0x28);
                uVar6 = uVar6 - uVar4;
                uVar1 = uVar1 + uVar4;
                if ((uVar4 != 0) && (arg4 != iVar3)) {
                    section..text(arg4,iVar3,uVar4);
                }
                arg4 = arg4 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((uVar6 != 0) && (arg4 != iVar3)) {
                section..text(arg4,iVar3,uVar6);
            }
            uVar1 = uVar6;
        }
    }
    return uVar1;
}


/* fcn.00015890 @ 0x15890 */

int64_t * fcn.00015890(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg1_00;
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t arg4;
    int64_t *piVar3;
    int64_t *piVar4;
    int iVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint8_t uVar10;
    
    piVar2 = arg1 + 0x48;
    piVar4 = *piVar2;
    if (*piVar2 != piVar2) {
        do {
            piVar3 = piVar4;
            arg1_00 = piVar3 + -2;
            piVar1 = piVar3 + 5;
            iVar5 = arg2;
            if ((iVar5 - *(piVar3 + 0x2c) < 0) && (piVar4 = piVar3, *piVar1 - iVar5 < 1)) break;
            piVar4 = *piVar3;
        } while (piVar4 != piVar2);
        if ((piVar4 != piVar2) && (arg1_00 != NULL)) {
            iVar8 = arg3;
            if ((*piVar1 == iVar5) &&
               ((((*(piVar3 + 0x2c) - *piVar1) - iVar8 < 1 && (piVar3[-1] < 2)) && (*(piVar3[0xd] + 8) < 2)))) {
                piVar3[-1] = piVar3[-1] + 1;
                return arg1_00;
            }
            piVar2 = fcn.00018cb0(iVar8 + 0xc0);
            if (piVar2 != NULL) {
                piVar2[0x13] = piVar2[0x13] + 0xc0;
                piVar2[0x14] = piVar2[0x14] + 0xc0;
                iVar6 = *(piVar3 + 0x2c);
                uVar10 = *(piVar3 + 0x34);
                if ((iVar5 - iVar6) + iVar8 < 0) {
                    iVar6 = iVar5 + iVar8;
                }
                uVar9 = iVar6 - iVar5;
                uVar7 = iVar5 - *piVar1;
                if ((*(piVar3 + 0x34) & 2) != 0) {
                    if (*piVar1 - iVar5 < 0) {
                        uVar10 = uVar10 & 0xfd;
                        uVar7 = uVar7 - 1;
                    }
                    else {
                        uVar9 = uVar9 - 1;
                    }
                }
                if ((*(piVar3 + 0x34) & 1) != 0) {
                    if (*(piVar3 + 0x2c) == iVar6) {
                        uVar9 = uVar9 - 1;
                    }
                    else {
                        uVar10 = uVar10 & 0xfe;
                    }
                }
                if (uVar9 != 0) {
                    arg4 = fcn.00018f44(piVar2,uVar9,0);
                    uVar7 = fcn.00019140(arg1_00,uVar7,uVar9,arg4);
                    if (uVar7 != uVar9) {
                        fcn.00018db4(piVar2);
                        return NULL;
                    }
                }
                piVar4 = piVar2 + 7;
                if (piVar4 != piVar1) {
                    section..text(piVar4,piVar1,0x14);
                }
                *piVar4 = iVar5;
                *(piVar2 + 0x3c) = iVar6;
                *(piVar2 + 0x44) = uVar10;
                return piVar2;
            }
        }
    }
    return NULL;
}


/* fcn.00019084 @ 0x19084 */

int fcn.00019084(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char cVar4;
    uint64_t uVar5;
    int iVar6;
    
    cVar4 = arg3;
    if ((arg2 != 0) && (uVar3 = *(arg1 + 0x84), uVar3 != 0)) {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        iVar6 = 0;
        *(arg1 + 0x84) = uVar3 - arg2;
        if (cVar4 == '\0') {
            uVar5 = *(arg1 + 0x80) - 1;
        }
        else {
            uVar5 = 0;
            iVar6 = 0;
        }
        do {
            uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
            if (uVar3 != 0) {
                if (arg2 <= uVar3) {
                    piVar1 = arg1 + 0xa8 + uVar5 * 0x28;
                    *piVar1 = *piVar1 - arg2;
                    if (cVar4 == '\0') {
                        piVar2 = arg1 + 0xa0 + uVar5 * 0x28;
                        *piVar2 = *piVar2 - arg2;
                    }
                    else {
                        piVar2 = arg1 + 0x98 + uVar5 * 0x28;
                        *piVar2 = *piVar2 + arg2;
                    }
                    return iVar6 + arg2;
                }
                piVar1 = arg1 + 0xa8 + uVar5 * 0x28;
                *piVar1 = *piVar1 - uVar3;
                arg2 = arg2 - uVar3;
                iVar6 = iVar6 + uVar3;
                if (cVar4 == '\0') {
                    piVar2 = arg1 + 0xa0 + uVar5 * 0x28;
                    *piVar2 = *piVar2 - uVar3;
                }
                else {
                    piVar2 = arg1 + 0x98 + uVar5 * 0x28;
                    *piVar2 = *piVar2 + uVar3;
                }
            }
            uVar5 = uVar5 + ((-(cVar4 != '\0') & 2) - 1);
        } while( true );
    }
    return 0;
}


/* fcn.0001630c @ 0x1630c */

ulong fcn.0001630c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    ulong uVar1;
    int iVar2;
    int iVar3;
    unkbyte7 Var4;
    uint32_t uVar5;
    
    iVar3 = arg3;
    Var4 = arg3 >> 8;
    if ((*(arg1 + 0x3c) - arg2 < 1) || (iVar2 = *(arg1 + 0x38), iVar3 - iVar2 < 1)) {
        *(arg1 + 0x44) = *(arg1 + 0x44) & 0xfc;
        *(arg1 + 0x38) = *(arg1 + 0x3c);
        fcn.00019084(arg1,*(arg1 + 0x84),CONCAT71(Var4,1));
        uVar1 = 1;
    }
    else {
        if (iVar2 - arg2 < 0) {
            uVar5 = arg2 - iVar2;
            iVar2 = *(arg1 + 0x46) + iVar2;
            *(arg1 + 0x38) = arg2;
            if ((*(arg1 + 0x44) & 2) != 0) {
                *(arg1 + 0x44) = *(arg1 + 0x44) & 0xfd;
                uVar5 = uVar5 - 1;
            }
            if ((*(arg1 + 0x44) & 0x20) != 0) {
                if (iVar2 - arg2 < 0) {
                    *(arg1 + 0x44) = *(arg1 + 0x44) & 0xdf;
                }
                else {
                    *(arg1 + 0x46) = iVar2 - arg2;
                }
            }
            if (uVar5 != 0) {
                fcn.00019084(arg1,uVar5,CONCAT71(Var4,1));
            }
        }
        if (iVar3 - *(arg1 + 0x3c) < 0) {
            uVar5 = *(arg1 + 0x3c) - iVar3;
            *(arg1 + 0x3c) = iVar3;
            if ((*(arg1 + 0x44) & 1) != 0) {
                *(arg1 + 0x44) = *(arg1 + 0x44) & 0xfe;
                uVar5 = uVar5 - 1;
            }
            if (uVar5 != 0) {
                fcn.00019084(arg1,uVar5,0);
            }
        }
        uVar1 = fcn.00016114(arg1);
    }
    return uVar1;
}


/* fcn.000126a0 @ 0x126a0 */

int64_t * fcn.000126a0(uint32_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4,int8_t arg_30h,uint32_t arg_38h)

{
    char cVar1;
    int64_t *piVar2;
    uint in_register_00000014;
    uint in_R8;
    ulong uVar3;
    unkbyte7 Var4;
    int64_t var_30h;
    uint32_t var_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_8h;
    
    uVar3 = CONCAT44(in_R8,arg3);
    var_bp_8h._0_2_ = arg1;
    var_20h._0_2_ = arg3;
    if (&var_bp_18h != CONCAT44(in_register_00000014,arg2)) {
        uVar3 = 0;
        section..text(&var_bp_18h,arg2,0x10);
    }
    if (&var_30h != arg4) {
        uVar3 = 0;
        section..text(&var_30h,arg4,0x10);
    }
    piVar2 = *0x1adf8;
    do {
        Var4 = uVar3 >> 8;
        if (piVar2 == 0x1adf8) {
            if (arg_38h == '\0') {
                piVar2 = NULL;
            }
            else {
                piVar2 = fcn.00012410(&var_bp_18h,&var_30h,CONCAT71(Var4,arg_30h));
            }
            return piVar2;
        }
        if ((arg_30h == *(piVar2[3] + 0x11c)) && (var_20h == *(piVar2 + 0x44))) {
            uVar3 = CONCAT71(Var4,arg_30h);
            cVar1 = fcn.000123e0(&var_30h,piVar2 + 0x34,uVar3);
            if ((cVar1 != '\0') && (var_bp_8h == piVar2[6])) {
                uVar3 = CONCAT71(uVar3 >> 8,arg_30h);
                cVar1 = fcn.000123e0(&var_bp_18h,piVar2 + 4,uVar3);
                if (cVar1 != '\0') {
                    *(*piVar2 + 8) = piVar2[1];
                    *piVar2[1] = *piVar2;
                    *piVar2 = *0x1adf8;
                    piVar2[1] = 0x1adf8;
                    (*0x1adf8)[1] = piVar2;
                    *0x1adf8 = piVar2;
                    return piVar2;
                }
            }
        }
        piVar2 = *piVar2;
    } while( true );
}


/* fcn.00012b14 @ 0x12b14 */

int64_t fcn.00012b14(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    int iVar5;
    
    iVar3 = fcn.00018e2c(arg2,0,0);
    *(arg2 + 0x28) = iVar3;
    uVar2 = *(iVar3 + 4) >> 0x10;
    uVar4 = *(iVar3 + 4);
    iVar5 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar2 << 8 | uVar2 >> 8);
    *(arg2 + 0x38) = iVar5;
    uVar2 = *(iVar3 + 8) >> 0x10;
    uVar4 = *(iVar3 + 8);
    *(arg2 + 0x40) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar2 << 8 | uVar2 >> 8);
    *(arg2 + 0x3c) = *(arg2 + 0x84) + (*(iVar3 + 0xc) >> 4) * -4 + iVar5;
    *(arg2 + 0x46) = *(iVar3 + 0x12) << 8 | *(iVar3 + 0x12) >> 8;
    *(arg2 + 0x48) = (*(iVar3 + 0xe) << 8 | *(iVar3 + 0xe) >> 8) << (*(arg1 + 0xd9) & 0x1f);
    uVar1 = *(iVar3 + 0xd);
    *(arg2 + 0x44) = uVar1;
    if ((uVar1 & 2) != 0) {
        uVar2 = *(iVar3 + 0xe);
        *(arg2 + 0x3c) = *(arg2 + 0x3c) + 1;
        *(arg2 + 0x48) = uVar2 << 8 | uVar2 >> 8;
    }
    if ((uVar1 & 1) != 0) {
        *(arg2 + 0x3c) = *(arg2 + 0x3c) + 1;
    }
    return arg2 + 0x38;
}


/* fcn.00015300 @ 0x15300 */

ulong fcn.00015300(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    uint8_t uVar3;
    int iVar4;
    uint uVar5;
    uint32_t arg1_00;
    uint16_t *puVar6;
    char cVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint16_t auStackX_8 [4];
    
    uVar9 = *(arg1 + 0xc);
    *arg2 = 0;
    uVar9 = (uVar9 >> 4) * '\x04' - 0x14;
    if (uVar9 != 0) {
        iVar1 = arg1 + 0x14;
        arg1_00 = iVar1;
        if ((uVar9 == 0xc) && (iVar4 = fcn.00015154(arg1_00), iVar4 == 0x101080a)) {
            uVar5 = fcn.00015154(arg1 + 0x18);
            *(arg2 + 4) = uVar5;
            uVar5 = fcn.00015154(arg1 + 0x1c);
            *(arg2 + 8) = uVar5;
            *arg2 = 4;
        }
        else {
            uVar8 = 0;
            if (uVar9 != 0) {
                do {
                    cVar7 = uVar8;
                    cVar2 = *(uVar8 + iVar1);
                    if (cVar2 == '\0') {
                        uVar8 = uVar9;
                    }
                    else if (cVar2 == '\x01') {
                        uVar8 = cVar7 + 1;
                    }
                    else {
                        iVar4 = uVar8;
                        if (cVar2 == '\x02') {
                            if (*(uVar8 + 1 + iVar1) != '\x04') {
                                return 0xffffffffffffffff;
                            }
                            if (uVar9 - iVar4 < 4) {
                                return 0xffffffffffffffff;
                            }
                            puVar6 = uVar8 + 2 + iVar1;
                            if (auStackX_8 != puVar6) {
                                section..text(auStackX_8,puVar6,2);
                            }
                            *arg2 = *arg2 | 1;
                            *(arg2 + 2) = auStackX_8[0] << 8 | auStackX_8[0] >> 8;
                            uVar8 = cVar7 + 4;
                        }
                        else if (cVar2 == '\x03') {
                            if (*(uVar8 + 1 + iVar1) != '\x03') {
                                return 0xffffffffffffffff;
                            }
                            if (uVar9 - iVar4 < 3) {
                                return 0xffffffffffffffff;
                            }
                            uVar3 = *(uVar8 + 2 + iVar1);
                            if (0xe < uVar3) {
                                uVar3 = 0xe;
                            }
                            *arg2 = *arg2 | 2;
                            uVar8 = cVar7 + 3;
                            *(arg2 + 1) = uVar3;
                        }
                        else if (cVar2 == '\b') {
                            if (*(uVar8 + 1 + iVar1) != '\n') {
                                return 0xffffffffffffffff;
                            }
                            if (uVar9 - iVar4 < 10) {
                                return 0xffffffffffffffff;
                            }
                            uVar5 = fcn.00015154(iVar4 + 2 + arg1_00);
                            *(arg2 + 4) = uVar5;
                            uVar5 = fcn.00015154(iVar4 + 6 + arg1_00);
                            *arg2 = *arg2 | 4;
                            uVar8 = cVar7 + 10;
                            *(arg2 + 8) = uVar5;
                        }
                        else {
                            uVar3 = *(iVar4 + 1 + iVar1);
                            if ((uVar9 - iVar4 < uVar3) || (uVar3 < 2)) {
                                return 0xffffffffffffffff;
                            }
                            uVar8 = cVar7 + uVar3;
                        }
                    }
                } while (uVar8 < uVar9);
            }
        }
    }
    return 0;
}


/* fcn.00015090 @ 0x15090 */

int64_t fcn.00015090(int64_t arg1)

{
    int64_t iVar1;
    int32_t var_60h;
    int8_t var_5ch;
    int64_t var_58h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int8_t var_44h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    var_50h = *(arg1 + 0x8c);
    var_5ch = *(arg1 + 0x40);
    var_10h = *(arg1 + 0x100);
    var_60h = *(arg1 + 0x3c);
    var_48h = *(arg1 + 0x70);
    var_4ch = *(arg1 + 0x60);
    var_bp_8h = *(arg1 + 0x10);
    var_44h = *(arg1 + 0x11c);
    var_40h = arg1 + 0x120;
    var_38h = *(arg1 + 0x170);
    var_30h = *(arg1 + 0x178);
    var_28h = *(arg1 + 0x180);
    var_20h = arg1 + 0x108;
    var_18h = 0x14;
    var_58h = arg1;
    iVar1 = fcn.00014c64(&var_60h);
    if (iVar1 != 0) {
        *(iVar1 + 0x40) = 2;
        *(iVar1 + 0x38) = *(arg1 + 0x38);
    }
    return iVar1;
}


/* fcn.000122ac @ 0x122ac */

void fcn.000122ac(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint8_t uVar1;
    uint uVar2;
    ushort uVar3;
    uint16_t uVar4;
    int iVar5;
    uint8_t uVar6;
    uint in_R8;
    uint8_t *puVar7;
    
    puVar7 = CONCAT44(in_R8,arg3);
    uVar2 = *(arg2 + 0x10);
    *(arg1 + 0x88) = uVar2;
    *(arg1 + 0x8c) = uVar2;
    *(arg1 + 0x90) = *arg2;
    if ((*(arg2 + 0xc) & 0x10) == 0) {
        iVar5 = *(arg1 + 0x74) + 1;
    }
    else {
        iVar5 = *(arg2 + 8);
    }
    uVar6 = *puVar7;
    *(arg1 + 0x94) = iVar5;
    if ((uVar6 & 1) == 0) {
        *(arg1 + 0xb0) = 0x218;
    }
    else {
        uVar3 = 0x40;
        if (0x3f < *(puVar7 + 2)) {
            uVar3 = *(puVar7 + 2);
        }
        *(arg1 + 0x98) = uVar3;
        uVar4 = fcn.00012874(*(arg1 + 0x18));
        if (uVar4 < *(arg1 + 0x98)) {
            *(arg1 + 0x98) = uVar4;
        }
    }
    *(arg1 + 0xf8) = *(arg1 + 0x98);
    iVar5 = *arg2;
    *(arg1 + 0xac) = iVar5;
    iVar5 = iVar5 + 1;
    uVar6 = *puVar7;
    *(arg1 + 0x9c) = iVar5;
    *(arg1 + 0xa4) = iVar5;
    if (((uVar6 & 2) == 0) || ((*(arg1 + 0x68) >> 2 & 1) != 0)) {
        uVar6 = 0;
    }
    else {
        uVar6 = 0;
        *(arg1 + 0xd9) = puVar7[1];
        do {
            if (*(*(arg1 + 0x18) + 0x70) <= 0xffff << (uVar6 & 0x1f)) break;
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0xe);
        *(arg1 + 0x68) = *(arg1 + 0x68) | 8;
    }
    uVar1 = *puVar7;
    *(arg1 + 0xda) = uVar6;
    if (((uVar1 & 4) != 0) && ((*(arg1 + 0x68) >> 4 & 1) == 0)) {
        uVar2 = *(puVar7 + 4);
        *(arg1 + 0x68) = *(arg1 + 0x68) | 0x60;
        *(arg1 + 0x98) = *(arg1 + 0x98) - 0xc;
        *(arg1 + 0xdc) = uVar2;
    }
    return;
}


/* fcn.000163f4 @ 0x163f4 */

ulong fcn.000163f4(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t *arg1_00;
    int64_t *piVar2;
    uint8_t uVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *puVar8;
    int64_t *piVar9;
    ulong uVar10;
    int iVar11;
    int64_t iVar12;
    uint in_register_0000000c;
    int64_t arg1_01;
    int64_t iVar13;
    int iStackX_8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = arg1_01 + 0x58;
    if ((*piVar1 != piVar1) && (3 < *(arg1_01 + 0x70))) {
        iVar4 = *(arg1_01 + 0x9c);
        piVar2 = *piVar1;
        while (piVar2 != piVar1) {
            arg1_00 = piVar2 + -2;
            iVar13 = 1;
            iVar12 = fcn.00016114(arg1_00);
            if (iVar12 == 0) {
code_r0x000164ae:
                fcn.00018db4(arg1_00);
                return 0xffffffffffffffff;
            }
            if (iVar4 - piVar2[5] < 0) {
                return 0;
            }
            iVar4 = *(piVar2 + 0x2c);
            piVar6 = *piVar2;
            *(arg1_01 + 0x9c) = iVar4;
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            if ((*(piVar2 + 0x34) & iVar13) != 0) {
                if (*piVar1 != piVar1) goto code_r0x000164ae;
                uVar3 = *(arg1_01 + 0x70);
                if (2 < uVar3) {
                    if (uVar3 < 5) {
                        *(arg1_01 + 0x70) = 9;
                    }
                    else if (uVar3 == 5) {
                        if ((iVar13 & *(arg1_01 + 0x68) >> 0xb) != 0) goto code_r0x000164d0;
                        *(arg1_01 + 0x70) = 7;
                    }
                    else if (uVar3 == 6) {
code_r0x000164d0:
                        *(arg1_01 + 0x70) = 8;
                        *(arg1_01 + 0xb2) = 0;
                        iVar12 = arg1_01;
                        fcn.00014424(arg1);
                        if (*(arg1_01 + 0x120) == 0) {
                            fcn.00015ea8(iVar12);
                            fcn.000141dc(arg1_01);
                        }
                        else {
                            fcn.00014484(iVar12,5,*(arg1_01 + 0x120));
                        }
                        iVar13 = 1;
                    }
                    else if (uVar3 - 7 < 4) goto code_r0x000164ae;
                }
                *(arg1_01 + 0x68) = *(arg1_01 + 0x68) | 0x4000;
                *(piVar2 + 0x2c) = *(piVar2 + 0x2c) + -1;
            }
            if ((*(piVar2 + 0x34) & 8) != 0) {
                *(arg1_01 + 0x68) = *(arg1_01 + 0x68) | 0x4000;
            }
            if (*(piVar2 + 0x74) != 0) {
                iVar11 = 0;
                if (((iVar13 & *(arg1_01 + 0x68) >> 8) != 0) && (iVar5 = *(arg1_01 + 0xa8), piVar2[5] - iVar5 < 1)) {
                    if (*(piVar2 + 0x2c) - iVar5 < 1) {
                        iVar11 = *(piVar2 + 0x74);
                    }
                    else {
                        iVar11 = (iVar5 - piVar2[5]) + iVar13;
                    }
                }
                iVar12 = *(arg1_01 + 0x18);
                piVar2[-1] = piVar2[-1] + iVar13;
                *(piVar2 + 5) = iVar11;
                iVar7 = *(iVar12 + 0x78);
                *piVar2 = iVar7 + 0x20;
                puVar8 = *(iVar7 + 0x28);
                piVar2[1] = puVar8;
                *puVar8 = piVar2;
                *(iVar7 + 0x28) = piVar2;
                *(iVar7 + 0x30) = *(iVar7 + 0x30) + *(piVar2 + 0x74);
                *(iVar7 + 0x34) = *(iVar7 + 0x34) + iVar13;
                iStackX_8 = *(*(iVar12 + 0x78) + 0x30);
                if (iStackX_8 != 0) {
                    piVar2 = iVar12 + 0xc0;
                    do {
                        if (*piVar2 == piVar2) break;
                        piVar9 = *piVar2;
                        iVar11 = fcn.000147cc(iVar12,piVar9[2]);
                        if (iVar11 == 0) break;
                        *(*piVar9 + 8) = piVar9[1];
                        *piVar9[1] = *piVar9;
                        (**(*0x1b5f0 + 0x48))(piVar9);
                        iStackX_8 = iStackX_8 - iVar11;
                    } while (iStackX_8 != 0);
                    iVar13 = 1;
                }
            }
            if (*(arg1_01 + 0x70) - 7U < 4) {
                iVar12 = *(arg1_01 + 0x18);
                *(iVar12 + 0x42) = *(iVar12 + 0x42) | iVar13;
                piVar2 = iVar12 + 0xc0;
                if (*piVar2 != piVar2) {
                    uVar10 = *(iVar12 + 0x80);
                    *(iVar12 + 0x80) = 0x8000000000000068;
                    fcn.00014a40(iVar12,piVar2);
                    *(iVar12 + 0x80) = uVar10;
                }
            }
            fcn.00018db4(arg1_00);
            piVar2 = piVar6;
        }
    }
    return 0;
}


/* fcn.0001625c @ 0x1625c */

void fcn.0001625c(int64_t arg1,int64_t arg2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    
    uVar2 = *(arg1 + 0xec);
    iVar3 = arg2;
    if (uVar2 == 0) {
        *(arg1 + 0xec) = iVar3 * 8;
        *(arg1 + 0xf0) = iVar3 << 2;
    }
    else {
        iVar4 = uVar2 + iVar3 * -8;
        iVar1 = -iVar4;
        if (-1 < iVar4) {
            iVar1 = iVar4;
        }
        *(arg1 + 0xf0) = iVar1 + *(arg1 + 0xf0) * 3 >> 2;
        *(arg1 + 0xec) = (uVar2 >> 3) * 7 + iVar3;
    }
    uVar2 = *(arg1 + 0xf0) << 2;
    if (uVar2 < 8) {
        uVar2 = 8;
    }
    uVar2 = *(arg1 + 0xec) + uVar2 >> 3;
    *(arg1 + 0xf4) = uVar2;
    if (uVar2 < 5) {
        *(arg1 + 0xf4) = 5;
        return;
    }
    if (300 < uVar2) {
        uVar2 = 300;
    }
    *(arg1 + 0xf4) = uVar2;
    return;
}


/* fcn.000167d8 @ 0x167d8 */

ulong fcn.000167d8(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    ulong uVar2;
    int64_t *piVar3;
    uint32_t arg2_00;
    
    piVar3 = *(arg1 + 0x48);
    while( true ) {
        if (piVar3 == arg1 + 0x48) {
            return 1;
        }
        arg2_00 = arg2;
        if (arg2_00 - piVar3[5] < 1) break;
        if (0 < *(piVar3 + 0x2c) - arg2_00) {
            uVar2 = fcn.0001630c(piVar3 + -2,arg2_00,*(piVar3 + 0x2c));
            return uVar2;
        }
        piVar1 = *piVar3;
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        fcn.00018db4(piVar3 + -2);
        piVar3 = piVar1;
    }
    return 1;
}


/* fcn.00015f94 @ 0x15f94 */

ulong fcn.00015f94(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    ushort uVar2;
    int64_t arg1_00;
    ushort *puVar3;
    uint16_t uVar4;
    int iVar5;
    int8_t unaff_R12B;
    uint32_t *in_stack_00000028;
    char in_stack_00000030;
    
    if ((*(arg2 + 0xd) & 4) != 0) {
        return 0;
    }
    arg1_00 = fcn.00018cb0(0xc0);
    if (arg1_00 == 0) {
        return 0xffffffffffffffff;
    }
    puVar3 = fcn.00018f44(arg1_00,0x14,0);
    *(arg1_00 + 0x28) = puVar3;
    *(puVar3 + 0xd) = 4;
    if (arg1 == 0) {
        if ((*(arg2 + 0xd) & 0x10) != 0) {
            *(puVar3 + 2) = *(arg2 + 8);
            *(puVar3 + 4) = 0;
            goto code_r0x00016081;
        }
        *(puVar3 + 2) = 0;
        *(puVar3 + 0xd) = 0x14;
        uVar1 = *(arg2 + 4) >> 0x10;
        uVar4 = *(arg2 + 4);
        iVar5 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8) + arg3;
    }
    else {
        uVar1 = *(arg1 + 0x7c) >> 0x10;
        uVar4 = *(arg1 + 0x7c);
        *(puVar3 + 2) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
        iVar5 = *(arg1 + 0x9c);
        *(puVar3 + 0xd) = 0x14;
    }
    uVar1 = iVar5 >> 0x10;
    *(puVar3 + 4) = CONCAT22(iVar5 << 8 | iVar5 >> 8,uVar1 << 8 | uVar1 >> 8);
code_r0x00016081:
    *puVar3 = *(arg2 + 2);
    puVar3[1] = *arg2;
    *(puVar3 + 6) = 0x50;
    *(puVar3 + 7) = 0xffff;
    puVar3[9] = 0;
    if (in_stack_00000030 == '\x04') {
        uVar1 = fcn.00019514(*arg4,*in_stack_00000028);
    }
    else {
        uVar1 = fcn.00019560(arg4,in_stack_00000028);
    }
    uVar2 = fcn.00012a48(arg1_00,uVar1);
    puVar3[8] = uVar2;
    fcn.00012e94(arg1,arg1_00,arg4,in_stack_00000028,unaff_R12B);
    fcn.00018db4(arg1_00);
    return 0;
}


/* fcn.00016174 @ 0x16174 */

void fcn.00016174(uint32_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar2;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x106) == '\x01') {
        uVar2 = *(arg2 + 8);
        if (uVar2 == *(arg1_00 + 0x78)) {
            *(arg1_00 + 0xf8) = *(arg1_00 + 0xf8) + *(arg1_00 + 0x98);
        }
        else if (*(arg1_00 + 0x100) - uVar2 < 1) {
            uVar2 = *(arg1_00 + 0x98) + (*(arg1_00 + 0x7c) - *(arg1_00 + 0x78));
            *(arg1_00 + 0x106) = 3;
            if (*(arg1_00 + 0xfc) < uVar2) {
                uVar2 = *(arg1_00 + 0xfc);
            }
            *(arg1_00 + 0xf8) = uVar2;
        }
        else {
            fcn.00015a1c(arg1_00,uVar2);
            uVar2 = *(arg2 + 8) - *(arg1_00 + 0x78);
            if (*(arg1_00 + 0x98) <= uVar2) {
                uVar2 = uVar2 - *(arg1_00 + 0x98);
            }
            *(arg1_00 + 0xf8) = *(arg1_00 + 0xf8) - uVar2;
        }
    }
    else {
        uVar1 = *(arg1_00 + 0x7c) - *(arg1_00 + 0x78) >> 1;
        uVar2 = *(arg1_00 + 0x98) * 2;
        *(arg1_00 + 0x100) = *(arg1_00 + 0x7c);
        *(arg1_00 + 0x106) = 1;
        if (uVar2 < uVar1) {
            uVar2 = uVar1;
        }
        *(arg1_00 + 0x68) = *(arg1_00 + 0x68) & 0xffffdfff;
        *(arg1_00 + 0xfc) = uVar2;
        fcn.00015a1c(arg1_00,*(arg1_00 + 0x78));
        *(arg1_00 + 0xf8) = *(arg1_00 + 0x98) + *(arg1_00 + 0x98) * 2 + *(arg1_00 + 0xfc);
    }
    return;
}


/* fcn.00014518 @ 0x14518 */

void fcn.00014518(uint32_t arg1)

{
    uint32_t *puVar1;
    int iVar2;
    uint in_register_0000000c;
    uint16_t uVar3;
    uint32_t uVar4;
    int iVar5;
    int *piVar6;
    
    if ((*(CONCAT44(in_register_0000000c,arg1) + 0x68) >> 1 & 1) == 0) {
        if (((*(CONCAT44(in_register_0000000c,arg1) + 0xb2) & 8) != 0) &&
           (*(CONCAT44(in_register_0000000c,arg1) + 0x110) <= *(CONCAT44(in_register_0000000c,arg1) + 0xd0))) {
            iVar5 = *(CONCAT44(in_register_0000000c,arg1) + 0x114) + *0x1ae68;
            *(CONCAT44(in_register_0000000c,arg1) + 0xb2) = *(CONCAT44(in_register_0000000c,arg1) + 0xb2) | 8;
            *(CONCAT44(in_register_0000000c,arg1) + 0xc0) = iVar5;
            puVar1 = CONCAT44(in_register_0000000c,arg1) + 0x68;
            *puVar1 = *puVar1 & 0xffffefff;
            iVar5 = *0x1ae68;
            piVar6 = CONCAT44(in_register_0000000c,arg1) + 0xb4;
            uVar4 = 0;
            *(CONCAT44(in_register_0000000c,arg1) + 0xcc) = 0xffff;
            do {
                if (((*(CONCAT44(in_register_0000000c,arg1) + 0xb2) >> (uVar4 & 0x1f) & 1) != 0) &&
                   (iVar2 = *piVar6, (iVar2 - iVar5) - *(CONCAT44(in_register_0000000c,arg1) + 0xcc) < 0)) {
                    puVar1 = CONCAT44(in_register_0000000c,arg1) + 0x68;
                    *puVar1 = *puVar1 | 0x1000;
                    *(CONCAT44(in_register_0000000c,arg1) + 0xcc) = iVar2 - iVar5;
                }
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
                piVar6 = piVar6 + 1;
            } while (uVar3 < 6);
            return;
        }
        fcn.00014484(CONCAT44(in_register_0000000c,arg1),3,*(CONCAT44(in_register_0000000c,arg1) + 0x110));
        *(CONCAT44(in_register_0000000c,arg1) + 0x119) = 0;
    }
    return;
}


/* fcn.00016674 @ 0x16674 */

ulong fcn.00016674(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint32_t uVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    
    piVar1 = arg1 + 0x58;
    *(arg2 + 8) = *(arg2 + 8) + 1;
    if (*piVar1 == piVar1) {
        piVar5 = arg2 + 0x10;
        *piVar5 = piVar1;
        puVar3 = *(arg1 + 0x60);
        *(arg2 + 0x18) = puVar3;
        *puVar3 = piVar5;
        *(arg1 + 0x60) = piVar5;
    }
    else {
        piVar5 = *piVar1;
        piVar7 = piVar1;
        do {
            piVar6 = piVar5;
            piVar5 = piVar6;
            if (*(arg2 + 0x38) - piVar6[5] < 0) break;
            piVar5 = *piVar6;
            piVar7 = piVar6;
        } while (piVar5 != piVar1);
        if ((piVar7 != piVar1) && (uVar2 = *(piVar7 + 0x2c), *(arg2 + 0x38) - uVar2 < 0)) {
            if (*(arg2 + 0x3c) - uVar2 < 1) {
                return 1;
            }
            iVar4 = fcn.0001630c(arg2,uVar2,*(arg2 + 0x3c));
            if (iVar4 == 0) {
                return 0;
            }
        }
        iVar4 = *piVar7;
        piVar6 = arg2 + 0x10;
        *piVar6 = iVar4;
        *(arg2 + 0x18) = piVar7;
        *(iVar4 + 8) = piVar6;
        *piVar7 = piVar6;
        *(arg1 + 0x68) = *(arg1 + 0x68) | 0x4000;
        while (piVar5 != piVar1) {
            if (*(piVar5 + 0x2c) - *(arg2 + 0x3c) < 1) {
                piVar7 = *piVar5;
                *(*piVar5 + 8) = piVar5[1];
                *piVar5[1] = *piVar5;
                fcn.00018db4(piVar5 + -2);
                piVar5 = piVar7;
            }
            else {
                uVar2 = *(piVar5 + 5);
                if (uVar2 - *(arg2 + 0x3c) < 0) {
                    if (uVar2 - *(arg2 + 0x38) < 1) {
                        *(*piVar6 + 8) = *(arg2 + 0x18);
                        **(arg2 + 0x18) = *piVar6;
                        return 1;
                    }
                    iVar4 = fcn.0001630c(arg2,*(arg2 + 0x38),uVar2);
                    if (iVar4 != 0) {
                        return 1;
                    }
                    *(*piVar6 + 8) = *(arg2 + 0x18);
                    **(arg2 + 0x18) = *piVar6;
                    return 0;
                }
                piVar5 = *piVar5;
            }
        }
    }
    return 1;
}


/* fcn.0001aa2c @ 0x1aa2c */

ulong fcn.0001aa2c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar1 = arg1;
    if (arg2 == '\x04') {
        if (arg3 != 0) {
            *arg3 = *((arg1 & 0xffU) * 2 + 0x1aec8);
        }
        if (arg4 != 0) {
            *arg4 = *((arg1 & 0xffU) * 2 + 0x1aec9);
        }
        uVar2 = arg1 & 0xff;
        if (uVar2 < 4) {
            if (uVar2 == 3) {
                return 0x8000000000000067;
            }
            if ((arg1 & 0xffU) == 0) {
                return 0x8000000000000064;
            }
            if (uVar2 == 1) {
                return 0x8000000000000065;
            }
            if (uVar2 == 2) {
                return 0x8000000000000066;
            }
        }
        else if (3 < uVar2) {
            if (5 < uVar2) {
                if (uVar2 < 8) {
                    return 0x8000000000000065;
                }
                if (9 < uVar2) {
                    return 0x8000000000000003;
                }
            }
            return 0x8000000000000016;
        }
    }
    else if (arg2 == '\x06') {
        if (arg3 != 0) {
            *arg3 = *((arg1 & 0xffU) * 2 + 0x1aef0);
        }
        if (arg4 != 0) {
            *arg4 = *((arg1 & 0xffU) * 2 + 0x1aef1);
        }
        if (uVar1 == 0) {
            return 0x8000000000000064;
        }
        if (uVar1 == 1) {
            return 0x8000000000000065;
        }
        if (uVar1 == 2) {
            return 0x8000000000000066;
        }
        if (uVar1 == 3) {
            return 0x8000000000000067;
        }
        if (uVar1 == 4) {
            return 0x8000000000000016;
        }
        if (4 < uVar1) {
            if (uVar1 < 7) {
                return 0x8000000000000065;
            }
            if (uVar1 < 10) {
                return 0x8000000000000016;
            }
        }
    }
    return 0x8000000000000003;
}


/* fcn.0001ab28 @ 0x1ab28 */

uint64_t fcn.0001ab28(uint32_t arg1)

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


/* fcn.0001ab54 @ 0x1ab54 */

uint64_t fcn.0001ab54(uint32_t arg1)

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


/* fcn.0001826c @ 0x1826c */

void fcn.0001826c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00017540(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001750c @ 0x1750c */

uchar * fcn.0001750c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00018548 @ 0x18548 */

bool fcn.00018548(uint32_t arg1)

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


/* fcn.0001832c @ 0x1832c */

char * fcn.0001832c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00018548(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.000182ec @ 0x182ec */

void fcn.000182ec(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00018290();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001837c @ 0x1837c */

int64_t fcn.0001837c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1b4f0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00018548(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00018548(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.0001832c(arg1);
        iVar4 = fcn.0001832c(arg2);
        iVar2 = fcn.00018290();
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
    iVar2 = fcn.0001832c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.000182ec(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.00018634 @ 0x18634 */

ulong fcn.00018634(int64_t arg1,int64_t arg2)

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
code_r0x00018694:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00018694;
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


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00018c0c @ 0x18c0c */

uint * fcn.00018c0c(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.000182c0((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x00018c9e;
        puVar2 = fcn.000182c0(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x00018c9e;
        }
        (**(*0x1b5f0 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x00018c9e:
    return puVar1;
}


/* fcn.00019cb8 @ 0x19cb8 */

void fcn.00019cb8(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    cVar1 = *(*(arg1 + 0x10) + 0x90);
    if (cVar1 == '\x04') {
        iVar3 = *(arg1 + 0x48);
        iVar2 = *(iVar3 + 8);
    }
    else {
        if (cVar1 != '\x06') {
            return;
        }
        iVar3 = *(arg1 + 0x48);
        iVar2 = *(iVar3 + 0x10);
    }
    (**(*0x1b5f0 + 0x70))(*(arg1 + 0x38));
    (**(*0x1b5f0 + 0x48))(iVar3);
    if (iVar2 != 0) {
        (**(*0x1b5f0 + 0x48))(iVar2);
    }
    fcn.00018db4(*(arg1 + 0x30));
    *(*arg1 + 8) = *(arg1 + 8);
    **(arg1 + 8) = *arg1;
    (**(*0x1b5f0 + 0x48))(arg1);
    return;
}


/* fcn.000197d8 @ 0x197d8 */

ulong fcn.000197d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char cVar2;
    char *pcVar3;
    uint8_t uVar4;
    
    if (*(arg2 + 0x84) < 0x1c) {
        return 0x8000000000000015;
    }
    pcVar3 = *(arg2 + 0x98);
    uVar1 = pcVar3[8];
    if (*(arg2 + 0x84) < (uVar1 & 0xf) * 4 + 0xc) {
        return 0x8000000000000015;
    }
    cVar2 = *pcVar3;
    uVar4 = pcVar3[1];
    if (cVar2 != '\x03') {
        if (cVar2 == '\x04') {
            if (uVar4 != 0) {
                return 0x8000000000000015;
            }
            uVar4 = 8;
        }
        else if (cVar2 == '\v') {
            if (1 < uVar4) {
                return 0x8000000000000015;
            }
            uVar4 = uVar4 + 6;
        }
        else {
            if (cVar2 != '\f') {
                return 0x8000000000000015;
            }
            if (1 < uVar4) {
                return 0x8000000000000015;
            }
            uVar4 = 9;
        }
        goto code_r0x00019897;
    }
    if (uVar4 < 9) {
        if (6 < uVar4) goto code_r0x00019916;
        if (uVar4 < 4) goto code_r0x00019897;
        if (uVar4 == 4) {
            uVar4 = 4;
            goto code_r0x00019897;
        }
        if (uVar4 == 5) goto code_r0x00019897;
        if (uVar4 != 6) {
            return 0x8000000000000015;
        }
    }
    else if (uVar4 != 9) {
        if (uVar4 != 10) {
            if (uVar4 == 0xb) goto code_r0x00019895;
            if (uVar4 != 0xc) {
                return 0x8000000000000015;
            }
        }
code_r0x00019916:
        uVar4 = 1;
        goto code_r0x00019897;
    }
code_r0x00019895:
    uVar4 = 0;
code_r0x00019897:
    fcn.00019084(arg2,((uVar1 & 0xf) * 4 - pcVar3) + pcVar3 + 8,CONCAT71(pcVar3 >> 8,1));
    if (*(arg2 + 0x84) != 0) {
        (**(arg1 + 0x80))(0x8000000000000016,uVar4,arg3,arg2,*(arg1 + 0x70));
    }
    return 0;
}


/* fcn.00019920 @ 0x19920 */

ulong fcn.00019920(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char *pcVar2;
    char cVar3;
    uint in_register_00000014;
    int64_t arg1_00;
    char *pcVar4;
    char cVar5;
    
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    if (*(arg1_00 + 0x84) < 0x30) {
        return 0x8000000000000015;
    }
    pcVar2 = *(arg1_00 + 0x98);
    cVar5 = *pcVar2;
    uVar1 = pcVar2[1];
    if (cVar5 != '\x01') {
        if (cVar5 == '\x02') {
            if (uVar1 != 0) {
                return 0x8000000000000015;
            }
            cVar5 = '\x04';
        }
        else if (cVar5 == '\x03') {
            if (1 < uVar1) {
                return 0x8000000000000015;
            }
            cVar5 = uVar1 + 5;
        }
        else {
            if (cVar5 != '\x04') {
                return 0x8000000000000015;
            }
            if (3 < uVar1) {
                return 0x8000000000000015;
            }
            cVar5 = uVar1 + 7;
        }
        goto code_r0x000199bc;
    }
    if (uVar1 == 0) {
code_r0x000199ba:
        cVar5 = '\0';
    }
    else {
        if (uVar1 != 1) {
            if (uVar1 == 2) goto code_r0x000199ba;
            if (uVar1 != 3) {
                if (uVar1 == 4) {
                    cVar5 = '\x03';
                    goto code_r0x000199bc;
                }
                if (uVar1 != 5) {
                    if (uVar1 != 6) {
                        return 0x8000000000000015;
                    }
                    goto code_r0x000199ba;
                }
            }
        }
        cVar5 = '\x01';
    }
code_r0x000199bc:
    cVar3 = pcVar2[0xe];
    pcVar4 = pcVar2 + 0x30;
    do {
        if (cVar3 == '\0') {
code_r0x000199ed:
            cVar3 = *pcVar4;
            pcVar4 = pcVar4 + pcVar4[1] * 8;
        }
        else {
            if (((cVar3 == '\x01') || (cVar3 == '\x06')) || (cVar3 == '\x11')) {
code_r0x00019a09:
                fcn.00019084(arg1_00,pcVar4 - pcVar2,CONCAT71(pcVar2 >> 8,1));
                if (*(arg1_00 + 0x84) != 0) {
                    (**(arg1 + 0x80))(0x8000000000000016,cVar5,arg3,arg1_00,*(arg1 + 0x70));
                }
                return 0;
            }
            if (cVar3 != ',') {
                if (cVar3 == ';') goto code_r0x00019a09;
                if (cVar3 != '<') {
                    return 0x8000000000000015;
                }
                goto code_r0x000199ed;
            }
            cVar3 = *pcVar4;
        }
        pcVar4 = pcVar4 + 8;
    } while( true );
}


/* fcn.00019a64 @ 0x19a64 */

int64_t * fcn.00019a64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint uVar1;
    ulong *puVar2;
    uint32_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t arg1_00;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t iStackX_20;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    
    if ((*(arg1 + 0x90) - 4U & 0xfd) == 0) {
        iStackX_20 = 0;
        arg1_00 = 0;
        piVar4 = fcn.00018290(arg1,0x50);
        if (piVar4 != NULL) {
            iVar5 = (**(*0x1b5f0 + 0x50))(0x200,0x10,0x19da4,piVar4,&iStackX_20);
            if (-1 < iVar5) {
                uVar9 = *(arg2 + 0x80);
                iVar5 = fcn.00018290();
                if (iVar5 != 0) {
                    iVar6 = 0x28;
                    uVar3 = 0x38;
                    if (*(arg1 + 0x90) == '\x04') {
                        uVar3 = 0x28;
                    }
                    uVar10 = 0;
                    uVar8 = 0;
                    uVar11 = uVar10;
                    if (*(arg2 + 0x80) != 0) {
                        do {
                            uVar10 = uVar11;
                            if (*(arg2 + 0xa8 + uVar8 * 0x28) != 0) {
                                if (uVar9 <= uVar11) goto code_r0x00019b67;
                                iVar6 = uVar11 * 2;
                                uVar10 = uVar11 + 1;
                                *(uVar3 + iVar5 + 8 + uVar11 * 0x10) = *(arg2 + 0x98 + uVar8 * 0x28);
                                *(uVar3 + iVar5 + uVar11 * 0x10) = *(arg2 + 0xa8 + uVar8 * 0x28);
                            }
                            uVar7 = uVar8 + 1;
                            uVar8 = uVar7;
                            uVar11 = uVar10;
                        } while (uVar7 < *(arg2 + 0x80));
                    }
                    uVar9 = uVar10;
code_r0x00019b67:
                    if (in_stack_00000038 == 0) {
code_r0x00019bec:
                        if (*(arg1 + 0x90) == '\x04') {
                            if (iVar5 != in_stack_00000030) {
                                section..text(iVar5,in_stack_00000030,4);
                            }
                            *(iVar5 + 0x10) = 0;
                            *(iVar5 + 0x18) = 0;
                            *(iVar5 + 8) = arg1_00;
                            *(iVar5 + 0x20) = *(arg2 + 0x84);
                            *(iVar5 + 0x24) = uVar9;
                        }
                        else {
                            if (in_stack_00000030 == 0) {
                                fcn.000102c0(iVar5,0x10);
                            }
                            else if (iVar5 != in_stack_00000030) {
                                section..text(iVar5,in_stack_00000030,0x10);
                            }
                            *(iVar5 + 0x10) = arg1_00;
                            uVar1 = *(arg2 + 0x84);
                            *(iVar5 + 0x18) = 0;
                            *(iVar5 + 0x20) = 0;
                            *(iVar5 + 0x2c) = uVar1;
                            *(iVar5 + 0x30) = uVar9;
                        }
                        piVar4[7] = iStackX_20;
                        piVar4[9] = iVar5;
                        piVar4[2] = arg1;
                        piVar4[3] = 0;
                        piVar4[4] = 0;
                        piVar4[5] = arg3;
                        piVar4[6] = arg2;
                        *(arg2 + 8) = *(arg2 + 8) + 1;
                        *piVar4 = arg1 + 0x60;
                        puVar2 = *(arg1 + 0x68);
                        piVar4[1] = puVar2;
                        *puVar2 = piVar4;
                        *(arg1 + 0x68) = piVar4;
                        return piVar4;
                    }
                    arg1_00 = fcn.00018290(iVar6,0xc);
                    if ((arg1_00 != 0) && (arg1_00 != in_stack_00000038)) {
                        arg1_00 = section..text(arg1_00,in_stack_00000038,0xc);
                    }
                    if (arg1_00 != 0) goto code_r0x00019bec;
                    (**(*0x1b5f0 + 0x48))(iVar5);
                }
            }
            (**(*0x1b5f0 + 0x48))(piVar4);
            if (iStackX_20 != 0) {
                (**(*0x1b5f0 + 0x70))();
            }
        }
    }
    return NULL;
}


