// decompiled by r2ghidra: 1921_DnsDxe.pe32
// functions: 78

/* entry0 @ 0x1036c */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_8 [4];
    
    *0x196c8 = *(arg2 + 0x60);
    *0x196d0 = *(arg2 + 0x58);
    *0x196c0 = arg2;
    (**(*0x196c8 + 0x140))(0x18f70,0,0x196d8);
    (**(*0x196c8 + 0x98))(arg1,0x18e20,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.000103e4(arg1);
    return;
}


/* fcn.000103e4 @ 0x103e4 */

int64_t fcn.000103e4(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong in_RDX;
    
    iVar3 = fcn.00017240(arg1,in_RDX,0x18fa0,arg1);
    if (-1 < iVar3) {
        iVar3 = fcn.00017240(arg1,in_RDX,0x18fd0,0);
        if (-1 < iVar3) {
            *0x196b0 = fcn.00016d00(0x48);
            if (*0x196b0 == NULL) {
                iVar3 = -0x7ffffffffffffff7;
            }
            else {
                iVar3 = (**(*0x196c8 + 0x50))(0x80000200,8,0x13568,0,*0x196b0);
                if (-1 < iVar3) {
                    iVar3 = (**(*0x196c8 + 0x58))(**0x196b0,1,10000000);
                    puVar2 = *0x196b0;
                    if (-1 < iVar3) {
                        puVar1 = *0x196b0 + 1;
                        *puVar1 = puVar1;
                        puVar2[2] = puVar1;
                        puVar1 = puVar2 + 3;
                        *puVar1 = puVar1;
                        puVar2[4] = puVar1;
                        puVar1 = puVar2 + 5;
                        *puVar1 = puVar1;
                        puVar2[6] = puVar1;
                        puVar1 = puVar2 + 7;
                        *puVar1 = puVar1;
                        puVar2[8] = puVar1;
                        return iVar3;
                    }
                    (**(*0x196c8 + 0x70))(**0x196b0);
                }
                (**(*0x196c8 + 0x48))(*0x196b0);
            }
            fcn.00017298(0x18fd0);
        }
        fcn.00017298(0x18fa0);
    }
    return iVar3;
}


/* fcn.00017240 @ 0x17240 */

void fcn.00017240(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    *(arg2 + 0x20) = arg1;
    *(arg2 + 0x28) = arg3;
    (**(*0x196c8 + 0x148))(arg2 + 0x28,0x18f40,arg2,0x18f60,0x19080,0x18e60,0x19098,0);
    return;
}


/* fcn.00016d00 @ 0x16d00 */

void fcn.00016d00(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00016cd0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00016cd0 @ 0x16cd0 */

ulong fcn.00016cd0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x196c8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00017298 @ 0x17298 */

void fcn.00017298(int64_t arg1)

{
    (**(*0x196c8 + 0x150))(*(arg1 + 0x28),0x18f40,arg1,0x18f60,0x19080,0x18e60,0x19098,0);
    return;
}


/* fcn.00011860 @ 0x11860 */

ulong fcn.00011860(uint32_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        iVar4 = 0;
code_r0x0001189e:
        fcn.000175e4(arg1 + 0x118,0x11720,iVar4);
        if (*(iVar3 + 0x138) == 0) {
            iVar4 = *(*(iVar3 + 0x168) + 0x2e8);
            (**(iVar4 + 0x30))(iVar4,*(*(iVar3 + 0x168) + 0x2e0) + 0x28);
        }
        uVar2 = 0;
    }
    else {
        for (puVar1 = *(iVar3 + 0x118); puVar1 != iVar3 + 0x118; puVar1 = *puVar1) {
            iVar4 = puVar1[2];
            if (*(iVar4 + 0x15) == CONCAT44(in_register_00000014,arg2)) goto code_r0x0001189e;
        }
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.000118fc @ 0x118fc */

ulong fcn.000118fc(uint32_t arg1,uint32_t arg2)

{
    ulong *puVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint in_register_00000014;
    int64_t iVar4;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        iVar4 = 0;
code_r0x0001193a:
        fcn.000175e4(arg1 + 0x140,0x117c0,iVar4);
        if (*(iVar3 + 0x160) == 0) {
            iVar4 = *(*(iVar3 + 0x168) + 0x2e8);
            (**(iVar4 + 0x28))(iVar4,*(*(iVar3 + 0x168) + 0x2e0) + 0x28);
        }
        uVar2 = 0;
    }
    else {
        for (puVar1 = *(iVar3 + 0x140); puVar1 != iVar3 + 0x140; puVar1 = *puVar1) {
            iVar4 = puVar1[2];
            if (*(iVar4 + 0x21) == CONCAT44(in_register_00000014,arg2)) goto code_r0x0001193a;
        }
        uVar2 = 0x800000000000000e;
    }
    return uVar2;
}


/* fcn.000189fc @ 0x189fc */

int64_t fcn.000189fc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong in_RDX;
    
    fcn.00018974(arg1,in_RDX,0,0);
    iVar2 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x196c8 + 0x120))(*(arg1 + 0x38),0x18f50,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x18ed0;
    }
    else {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x196c8 + 0x120))(*(arg1 + 0x38),0x18ef0,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x18f00;
    }
    iVar2 = fcn.0001768c(*(arg1 + 0x28),*(arg1 + 0x30),iVar2,*(arg1 + 0x38));
    if (-1 < iVar2) {
        piVar1 = arg1 + 8;
        if (*piVar1 != piVar1) {
            *(*piVar1 + 8) = *(arg1 + 0x10);
            **(arg1 + 0x10) = *piVar1;
        }
        (**(*0x196c8 + 0x48))(arg1);
        iVar2 = 0;
    }
    return iVar2;
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
    
    //[00] -r-x section size 35744 named .text
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


/* fcn.00018784 @ 0x18784 */

uint * fcn.00018784(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t *arg4;
    ulong *puVar1;
    uint *puVar2;
    uint *puVar3;
    int64_t iVar4;
    
    puVar2 = fcn.00016cd0(arg1,0x328);
    if (puVar2 == NULL) {
        return NULL;
    }
    *(puVar2 + 8) = arg3;
    arg4 = puVar2 + 0xe;
    *puVar2 = 0x49504455;
    puVar3 = puVar2 + 2;
    *puVar3 = puVar3;
    *(puVar2 + 4) = puVar3;
    puVar3 = puVar2 + 0xb4;
    *(puVar2 + 6) = 1;
    *(puVar2 + 10) = arg1;
    *(puVar2 + 0xc) = arg2;
    *puVar3 = puVar3;
    *(puVar2 + 0xb6) = puVar3;
    *(puVar2 + 0xb8) = 0;
    *arg4 = 0;
    if (arg3 == '\x04') {
        iVar4 = fcn.00017640(arg1,arg2,0x18ed0,arg4);
        if (iVar4 < 0) goto code_r0x00018945;
        iVar4 = (**(*0x196c8 + 0x118))(*arg4,0x18f50,puVar2 + 0xba,arg2,arg1,0x10);
        if (-1 < iVar4) {
            puVar1 = *(puVar2 + 0xba);
            iVar4 = (**puVar1)(puVar1,0,0,0,puVar2 + 0x10);
            if (-1 < iVar4) {
                return puVar2;
            }
            (**(*0x196c8 + 0x120))(*arg4,0x18f50,arg2,arg1);
        }
        iVar4 = 0x18ed0;
    }
    else {
        iVar4 = fcn.00017640(arg1,arg2,0x18f00,arg4);
        if (iVar4 < 0) goto code_r0x00018945;
        iVar4 = (**(*0x196c8 + 0x118))(*arg4,0x18ef0,puVar2 + 0xba,arg2,arg1,0x10);
        if (-1 < iVar4) {
            puVar1 = *(puVar2 + 0xba);
            iVar4 = (**puVar1)(puVar1,0,0,0,puVar2 + 0x10);
            if (-1 < iVar4) {
                return puVar2;
            }
            (**(*0x196c8 + 0x120))(*arg4,0x18ef0,arg2,arg1);
        }
        iVar4 = 0x18f00;
    }
    fcn.0001768c(arg1,arg2,iVar4,*arg4);
code_r0x00018945:
    (**(*0x196c8 + 0x48))(puVar2);
    return NULL;
}


/* fcn.00010738 @ 0x10738 */

int64_t fcn.00010738(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong noname_2;
    uint *puVar6;
    uint uVar7;
    uint uVar8;
    uint uVar9;
    uint uVar10;
    
    *arg4 = 0;
    puVar3 = fcn.00016d00(0x78);
    if (puVar3 == NULL) {
        return -0x7ffffffffffffff7;
    }
    *puVar3 = 0x53534e44;
    if (arg3 == '\x04') {
        uVar7 = *0x190d0;
        uVar8 = *0x190d4;
        uVar9 = *0x190d8;
        uVar10 = *0x190dc;
    }
    else {
        uVar7 = *0x190e0;
        uVar8 = *0x190e4;
        uVar9 = *0x190e8;
        uVar10 = *0x190ec;
    }
    puVar3[2] = uVar7;
    puVar3[3] = uVar8;
    puVar3[4] = uVar9;
    puVar3[5] = uVar10;
    *(puVar3 + 6) = 0;
    piVar1 = puVar3 + 0x16;
    puVar6 = puVar3 + 8;
    puVar2 = puVar3 + 0x18;
    *puVar6 = puVar6;
    *(puVar3 + 10) = puVar6;
    puVar6 = puVar3 + 0xe;
    *(puVar3 + 0xc) = 0;
    *puVar6 = puVar6;
    *(puVar3 + 0x10) = puVar6;
    iVar4 = *0x196c8;
    *(puVar3 + 0x12) = arg1;
    *(puVar3 + 0x14) = arg2;
    *piVar1 = 0;
    *puVar2 = 0;
    *(puVar3 + 0x1a) = arg3;
    iVar4 = (**(iVar4 + 0x50))(0x80000000,8,0,0,piVar1);
    if (iVar4 < 0) {
        (**(*0x196c8 + 0x48))(puVar3);
    }
    else {
        noname_2 = 0x1336c;
        puVar6 = puVar3;
        iVar4 = (**(*0x196c8 + 0x50))(0x80000200,8,0x1336c,puVar3,puVar2);
        if (iVar4 < 0) {
            if (*piVar1 != 0) {
                (**(*0x196c8 + 0x70))();
            }
        }
        else {
            *(puVar3 + 0x1c) = 0;
            iVar5 = fcn.00018784(arg1,arg2,noname_2,CONCAT71(puVar6 >> 8,*(puVar3 + 0x1a)));
            *(puVar3 + 0x1c) = iVar5;
            if (iVar5 != 0) {
                *arg4 = puVar3;
                return iVar4;
            }
            if (*piVar1 != 0) {
                (**(*0x196c8 + 0x70))();
            }
            (**(*0x196c8 + 0x70))(*puVar2);
            iVar4 = -0x7ffffffffffffff9;
        }
        (**(*0x196c8 + 0x48))(puVar3);
    }
    return iVar4;
}


/* fcn.000106ec @ 0x106ec */

void fcn.000106ec(int64_t arg1)

{
    fcn.000189fc(*(arg1 + 0x70));
    if (*(arg1 + 0x58) != 0) {
        (**(*0x196c8 + 0x70))();
    }
    if (*(arg1 + 0x60) != 0) {
        (**(*0x196c8 + 0x70))();
    }
    //WARNING: Could not recover jumptable at 0x00010733. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x196c8 + 0x48))(arg1);
    return;
}


/* fcn.00017be8 @ 0x17be8 */

uint64_t fcn.00017be8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x196c8 + 0x128))(param_1,param_2,&iStackX_20,&uStackX_18);
    uVar2 = 0;
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        if (uStackX_18 != 0) {
            puVar4 = iStackX_20 + 0x10;
            uVar3 = uVar2;
            do {
                if ((*puVar4 & 0x10) != 0) {
                    uVar2 = *(iStackX_20 + 8 + uVar3 * 0x18);
                    break;
                }
                uVar3 = uVar3 + 1;
                puVar4 = puVar4 + 0x18;
            } while (uVar3 < uStackX_18);
        }
        (**(*0x196c8 + 0x48))();
    }
    return uVar2;
}


/* fcn.0001747c @ 0x1747c */

//WARNING: Removing unreachable block (ram,0x000174a2)

int64_t fcn.0001747c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    iVar1 = 0;
code_r0x000174b3:
    do {
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            iVar3 = fcn.00010698(puVar4,arg2);
            if (iVar3 < 0) {
                return iVar3;
            }
            for (puVar2 = *arg1; puVar2 != arg1; puVar2 = *puVar2) {
                if (puVar2 == puVar4) goto code_r0x000174e9;
            }
            if (puVar2 != puVar4) goto code_r0x000174b3;
code_r0x000174e9:
        }
        iVar3 = 0;
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            iVar3 = iVar3 + 1;
        }
        bVar5 = iVar3 == iVar1;
        iVar1 = iVar3;
        if (bVar5) {
            return 0;
        }
    } while( true );
}


/* fcn.000171c8 @ 0x171c8 */

ulong fcn.000171c8(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x196b8;
    if (*0x196b8 != NULL) {
        iVar2 = 0;
        if (**0x196b8 != 0) {
            piVar3 = *0x196b8;
            do {
                (**(*0x196c8 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x196c8 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.00010590 @ 0x10590 */

ulong fcn.00010590(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int64_t extraout_RAX;
    uint *puVar3;
    ulong in_R8;
    unkbyte7 in_R9;
    
    *arg2 = 0;
    puVar2 = fcn.00016d00(0x170);
    if (puVar2 != NULL) {
        *puVar2 = 0x49534e44;
        puVar3 = puVar2 + 2;
        *puVar3 = puVar3;
        *(puVar2 + 4) = puVar3;
        *(puVar2 + 0x26) = 0;
        *(puVar2 + 0x28) = 0;
        *(puVar2 + 0x2a) = arg1;
        if (*(arg1 + 0x68) == '\x04') {
            if (puVar2 + 6 != 0x19040) {
                in_R8 = 0x40;
                section..text(puVar2 + 6,0x19040,0x40);
            }
            puVar3 = puVar2 + 0x46;
        }
        else {
            if (puVar2 + 0x16 != 0x19000) {
                in_R8 = 0x40;
                section..text(puVar2 + 0x16,0x19000,0x40);
            }
            puVar3 = puVar2 + 0x50;
        }
        *puVar3 = puVar3;
        puVar1 = puVar3 + 4;
        *(puVar3 + 2) = puVar3;
        *puVar1 = puVar1;
        *(puVar3 + 6) = puVar1;
        *(puVar3 + 8) = 0;
        fcn.00018784(*(arg1 + 0x48),*(arg1 + 0x50),in_R8,CONCAT71(in_R9,*(arg1 + 0x68)));
        *(puVar2 + 0x5a) = extraout_RAX;
        if (extraout_RAX != 0) {
            *arg2 = puVar2;
            return 0;
        }
        (**(*0x196c8 + 0x48))(puVar2);
    }
    return 0x8000000000000009;
}


/* fcn.00010518 @ 0x10518 */

void fcn.00010518(int64_t arg1)

{
    fcn.000102c0(arg1 + 0xb8,0x28);
    fcn.000102c0(arg1 + 0xe0,0x28);
    if (*(arg1 + 0x138) != 0) {
        fcn.00011860(arg1,0);
    }
    if (*(arg1 + 0x160) != 0) {
        fcn.000118fc(arg1,0);
    }
    if (*(arg1 + 0x168) != 0) {
        fcn.000189fc(*(arg1 + 0x168));
    }
    //WARNING: Could not recover jumptable at 0x0001058b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x196c8 + 0x48))(arg1);
    return;
}


/* fcn.00018974 @ 0x18974 */

void fcn.00018974(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cVar2;
    ulong *puVar3;
    ulong *puVar4;
    
    puVar3 = *(arg1 + 0x2d0);
    puVar4 = *puVar3;
    do {
        if (puVar3 == arg1 + 0x2d0) {
            return;
        }
        if (arg2 == 0) {
code_r0x000189b9:
            iVar1 = *(arg1 + 0x2e8);
            if (*(arg1 + 0x20) == '\x04') {
                (**(iVar1 + 0x30))();
            }
            else {
                (**(iVar1 + 0x28))(iVar1,puVar3 + 0xb);
            }
        }
        else {
            cVar2 = (*arg2)(puVar3 + -1,arg3);
            if (cVar2 != '\0') goto code_r0x000189b9;
        }
        puVar3 = puVar4;
        puVar4 = *puVar4;
    } while( true );
}


/* fcn.000116c0 @ 0x116c0 */

ulong fcn.000116c0(uint32_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    uint in_register_00000014;
    int64_t *piVar4;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    for (piVar4 = *piVar3; piVar4 != piVar3; piVar4 = *piVar4) {
        if (piVar4[2] == CONCAT44(in_register_00000014,arg2)) goto code_r0x000116dc;
    }
    piVar4 = NULL;
code_r0x000116dc:
    if (piVar4 == NULL) {
        return 0x800000000000000e;
    }
    *(*piVar4 + 8) = piVar4[1];
    *piVar4[1] = *piVar4;
    piVar1 = piVar3 + 2;
    piVar3[4] = piVar3[4] + -1;
    iVar2 = *piVar1;
    *piVar4 = iVar2;
    piVar4[1] = piVar1;
    *(iVar2 + 8) = piVar4;
    *piVar1 = piVar4;
    return 0;
}


/* fcn.000175e4 @ 0x175e4 */

int64_t fcn.000175e4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t *piVar4;
    bool bVar5;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = *piVar3;
    if (piVar1 != piVar3) {
        piVar4 = *piVar1;
        do {
            iVar2 = (*arg2)(piVar3,piVar1,arg3);
            if (iVar2 < 0) {
                return iVar2;
            }
            bVar5 = piVar4 != piVar3;
            piVar1 = piVar4;
            piVar4 = *piVar4;
        } while (bVar5);
    }
    return 0;
}


/* fcn.00011ad8 @ 0x11ad8 */

bool fcn.00011ad8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    bool bVar4;
    uchar auStack_68 [36];
    char cStack_44;
    
    iVar3 = *(arg1 + 0xa8);
    puVar1 = *(arg2 + 0x2e8);
    iVar2 = (**(*0x196c8 + 0x58))(*(iVar3 + 0x58),2,50000000);
    if (iVar2 < 0) {
code_r0x00011b6c:
        bVar4 = false;
    }
    else {
        do {
            iVar2 = (**(*0x196c8 + 0x78))(*(iVar3 + 0x58));
            if (-1 < iVar2) goto code_r0x00011b6c;
            (*puVar1[7])(puVar1);
            iVar2 = (**puVar1)(puVar1,0,auStack_68,0,0);
        } while ((iVar2 < 0) || (cStack_44 == '\0'));
        (*puVar1[1])(puVar1,0);
        iVar3 = (*puVar1[1])(puVar1,arg3);
        bVar4 = iVar3 == 0;
    }
    return bVar4;
}


/* fcn.00011b84 @ 0x11b84 */

uint64_t fcn.00011b84(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    int64_t iVar4;
    char acStack_a8 [60];
    char cStack_6c;
    int64_t iStack_60;
    int64_t iStack_50;
    int64_t iStack_40;
    int64_t iStack_30;
    int64_t iStack_20;
    int64_t iStack_10;
    
    iVar1 = *(arg1 + 0xa8);
    puVar2 = *(arg2 + 0x2e8);
    uVar3 = (**(*0x196c8 + 0x58))(*(iVar1 + 0x58),2,50000000);
    if (uVar3 < 0) {
code_r0x00011cb7:
        uVar3 = uVar3 & 0xffffffffffffff00;
    }
    else {
        do {
            do {
                do {
                    uVar3 = (**(*0x196c8 + 0x78))(*(iVar1 + 0x58));
                    if (-1 < uVar3) goto code_r0x00011cb7;
                    (*puVar2[6])(puVar2);
                    iVar4 = (**puVar2)(puVar2,0,acStack_a8,0,0);
                } while (iVar4 < 0);
                if (iStack_60 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (iStack_50 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (iStack_40 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (iStack_30 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (iStack_20 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (iStack_10 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
            } while ((acStack_a8[0] != '\0') && (cStack_6c == '\0'));
            (*puVar2[1])(puVar2,0);
            iVar4 = (*puVar2[1])(puVar2);
        } while (iVar4 != 0);
        uVar3 = 1;
    }
    return uVar3;
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


/* fcn.00017fe8 @ 0x17fe8 */

ulong fcn.00017fe8(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint64_t uVar3;
    int *piVar4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar2 + 0x84) != 0) {
        uVar3 = 0;
        if (*(iVar2 + 0x80) != 0) {
            piVar4 = iVar2 + 0xa8;
            do {
                if (*piVar4 != 0) {
                    return *(iVar2 + 0x98 + uVar3 * 0x28);
                }
                uVar1 = uVar3 + 1;
                uVar3 = uVar1;
                piVar4 = piVar4 + 10;
            } while (uVar1 < *(iVar2 + 0x80));
        }
    }
    return 0;
}


/* fcn.00012328 @ 0x12328 */

uint64_t fcn.00012328(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint64_t in_RAX;
    uint16_t *puVar5;
    uint in_register_0000000c;
    ulong *puVar6;
    ulong *in_stack_00000028;
    
    puVar6 = *CONCAT44(in_register_0000000c,arg1);
    do {
        if (puVar6 == CONCAT44(in_register_0000000c,arg1)) {
            *in_stack_00000028 = 0;
            return in_RAX & 0xffffffffffffff00;
        }
        iVar2 = puVar6[3];
        *in_stack_00000028 = puVar6;
        if (iVar2 != 0) {
            puVar5 = fcn.00017fe8(iVar2);
            cVar1 = puVar5[6];
            iVar2 = 0;
            while (cVar1 != '\0') {
                cVar1 = *(iVar2 + 0xd + puVar5);
                iVar2 = iVar2 + 1;
            }
            uVar3 = *puVar5 << 8 | *puVar5 >> 8;
            in_RAX = uVar3;
            if ((uVar3 == arg2) &&
               (uVar3 = *(iVar2 + 0xd + puVar5), uVar3 = uVar3 << 8 | uVar3 >> 8, in_RAX = uVar3, uVar3 == arg3)) {
                uVar3 = *(iVar2 + 0xf + puVar5);
                uVar4 = uVar3 << 8 | uVar3 >> 8;
                in_RAX = uVar4;
                if (uVar4 == arg4) {
                    return CONCAT71(uVar3,1);
                }
            }
        }
        puVar6 = *puVar6;
    } while( true );
}


/* fcn.00012084 @ 0x12084 */

ulong fcn.00012084(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int16_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    
    iVar5 = 0;
    piVar3 = *arg1;
    piVar6 = **arg1;
    do {
        if (piVar3 == arg1) {
            piVar3 = fcn.00016cd0();
            if (piVar3 != NULL) {
                *piVar3 = piVar3;
                piVar3[1] = piVar3;
                for (piVar4 = *arg4; *piVar4 != 0; piVar4 = piVar4 + 1) {
                }
                iVar2 = fcn.00016cd0();
                piVar3[2] = iVar2;
                if (iVar2 != 0) {
                    for (piVar4 = *arg4; *piVar4 != 0; piVar4 = piVar4 + 1) {
                        iVar5 = iVar5 + 1;
                    }
                    iVar5 = iVar5 * 2 + 2;
                    if ((iVar5 != 0) && (iVar2 != *arg4)) {
                        section..text(iVar2,*arg4,iVar5);
                    }
                    iVar5 = fcn.00016cd0();
                    piVar3[3] = iVar5;
                    if (iVar5 != 0) {
                        if (iVar5 != *(arg4 + 8)) {
                            section..text(iVar5,*(arg4 + 8),0x10);
                        }
                        *(piVar3 + 4) = *(arg4 + 0x10);
                        *piVar3 = arg1;
                        piVar6 = *(arg1 + 8);
                        piVar3[1] = piVar6;
                        *piVar6 = piVar3;
                        *(arg1 + 8) = piVar3;
                        return 0;
                    }
                    (**(*0x196c8 + 0x48))(piVar3[2]);
                }
                (**(*0x196c8 + 0x48))(piVar3);
            }
            return 0x8000000000000009;
        }
        piVar4 = piVar3[2];
        for (piVar1 = *arg4; (*piVar1 != 0 && (*piVar1 == *piVar4)); piVar1 = piVar1 + 1) {
            piVar4 = piVar4 + 1;
        }
        if (*piVar1 == *piVar4) {
            if ((*(arg4 + 8) == piVar3[3]) || (iVar2 = fcn.000102e0(*(arg4 + 8),piVar3[3],0x10), iVar2 == 0)) {
                if (arg2 != '\0') {
                    *(*piVar3 + 8) = piVar3[1];
                    *piVar3[1] = *piVar3;
                    (**(*0x196c8 + 0x48))(piVar3[2]);
                    (**(*0x196c8 + 0x48))(piVar3[3]);
                    (**(*0x196c8 + 0x48))(piVar3);
                    return 0;
                }
                if (arg3 != '\0') {
                    *(piVar3 + 4) = *(arg4 + 0x10);
                    return 0;
                }
                return 0x800000000000000f;
            }
        }
        piVar3 = piVar6;
        piVar6 = *piVar6;
    } while( true );
}


/* fcn.00011e8c @ 0x11e8c */

ulong fcn.00011e8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int16_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    
    iVar5 = 0;
    piVar3 = *arg1;
    piVar6 = **arg1;
    do {
        if (piVar3 == arg1) {
            piVar3 = fcn.00016cd0();
            if (piVar3 != NULL) {
                *piVar3 = piVar3;
                piVar3[1] = piVar3;
                for (piVar4 = *arg4; *piVar4 != 0; piVar4 = piVar4 + 1) {
                }
                iVar2 = fcn.00016cd0();
                piVar3[2] = iVar2;
                if (iVar2 != 0) {
                    for (piVar4 = *arg4; *piVar4 != 0; piVar4 = piVar4 + 1) {
                        iVar5 = iVar5 + 1;
                    }
                    iVar5 = iVar5 * 2 + 2;
                    if ((iVar5 != 0) && (iVar2 != *arg4)) {
                        section..text(iVar2,*arg4,iVar5);
                    }
                    iVar5 = fcn.00016cd0();
                    piVar3[3] = iVar5;
                    if (iVar5 != 0) {
                        if (iVar5 != *(arg4 + 8)) {
                            section..text(iVar5,*(arg4 + 8),4);
                        }
                        *(piVar3 + 4) = *(arg4 + 0x10);
                        *piVar3 = arg1;
                        piVar6 = *(arg1 + 8);
                        piVar3[1] = piVar6;
                        *piVar6 = piVar3;
                        *(arg1 + 8) = piVar3;
                        return 0;
                    }
                    (**(*0x196c8 + 0x48))(piVar3[2]);
                }
                (**(*0x196c8 + 0x48))(piVar3);
            }
            return 0x8000000000000009;
        }
        piVar4 = piVar3[2];
        for (piVar1 = *arg4; (*piVar1 != 0 && (*piVar1 == *piVar4)); piVar1 = piVar1 + 1) {
            piVar4 = piVar4 + 1;
        }
        if (*piVar1 == *piVar4) {
            if ((*(arg4 + 8) == piVar3[3]) || (iVar2 = fcn.000102e0(*(arg4 + 8),piVar3[3],4), iVar2 == 0)) {
                if (arg2 != '\0') {
                    *(*piVar3 + 8) = piVar3[1];
                    *piVar3[1] = *piVar3;
                    (**(*0x196c8 + 0x48))(piVar3[2]);
                    (**(*0x196c8 + 0x48))(piVar3[3]);
                    (**(*0x196c8 + 0x48))(piVar3);
                    return 0;
                }
                if (arg3 != '\0') {
                    *(piVar3 + 4) = *(arg4 + 0x10);
                    return 0;
                }
                return 0x800000000000000f;
            }
        }
        piVar3 = piVar6;
        piVar6 = *piVar6;
    } while( true );
}


/* fcn.00017fbc @ 0x17fbc */

void fcn.00017fbc(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00017f48(*(arg1 + 0x78));
        (**(*0x196c8 + 0x48))(arg1);
    }
    return;
}


/* fcn.00017f48 @ 0x17f48 */

void fcn.00017f48(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x196c8 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x196c8 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x196c8 + 0x48))(arg1);
    }
    return;
}


/* fcn.000123d8 @ 0x123d8 */

int64_t fcn.000123d8(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint16_t *puVar1;
    char *pcVar2;
    int16_t iVar3;
    int16_t *piVar4;
    int iVar5;
    int16_t *piVar6;
    char cVar7;
    int64_t *piVar8;
    ulong uVar9;
    ulong uVar10;
    char *arg1_00;
    uint8_t *puVar11;
    int16_t *piVar12;
    uint16_t uVar13;
    uint16_t uVar14;
    uint8_t *puVar15;
    uint8_t *puVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    int64_t iVar20;
    int64_t *piVar21;
    int64_t *piVar22;
    uint16_t uVar23;
    uint32_t uVar24;
    int64_t *piVar25;
    uint32_t uVar26;
    int64_t *piVar27;
    int64_t iVar28;
    int64_t *piVar29;
    uint32_t uStackX_18;
    uint32_t uStack_b0;
    uint32_t uStack_a8;
    uint32_t uStack_98;
    int64_t iStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t iStack_48;
    
    piVar25 = NULL;
    uStack_b0 = 0;
    uStackX_18 = 0;
    uStack_98 = 0;
    *arg4 = 1;
    uStack_a8 = 0;
    if (arg3 < 0xd) {
code_r0x000124d3:
        iVar19 = -0x7fffffffffffffeb;
code_r0x000124dd:
        *arg4 = 0;
        return iVar19;
    }
    *arg2 = *arg2 << 8 | *arg2 >> 8;
    *(arg2 + 2) = *(arg2 + 2) << 8 | *(arg2 + 2) >> 8;
    *(arg2 + 6) = *(arg2 + 6) << 8 | *(arg2 + 6) >> 8;
    *(arg2 + 8) = *(arg2 + 8) << 8 | *(arg2 + 8) >> 8;
    uVar13 = *(arg2 + 4) << 8 | *(arg2 + 4) >> 8;
    *(arg2 + 4) = uVar13;
    *(arg2 + 10) = *(arg2 + 10) << 8 | *(arg2 + 10) >> 8;
    if (1 < uVar13) {
        iVar19 = -0x7ffffffffffffffd;
        goto code_r0x000124dd;
    }
    pcVar2 = arg2 + 0xc;
    cVar7 = *pcVar2;
    piVar8 = piVar25;
    while (cVar7 != '\0') {
        piVar8 = piVar8 + 1;
        cVar7 = *(piVar8 + pcVar2);
    }
    uVar17 = piVar8 + 1;
    uVar18 = uVar17;
    if (arg3 - 0xc <= uVar18 + 4) goto code_r0x000124d3;
    uVar24 = (arg3 - 0xc) + (-4 - uVar17);
    *(pcVar2 + uVar18) = *(pcVar2 + uVar18) << 8 | *(pcVar2 + uVar18) >> 8;
    *(pcVar2 + uVar18 + 2) = *(pcVar2 + uVar18 + 2) << 8 | *(pcVar2 + uVar18 + 2) >> 8;
    uVar9 = (**(*0x196c8 + 0x18))(8);
    iVar5 = arg1;
    if (*(*(arg1 + 0xa8) + 0x68) == '\x04') {
        cVar7 = fcn.00012328(iVar5 + 0x118,*arg2,*(pcVar2 + uVar17),*(pcVar2 + uVar17 + 2));
        if (cVar7 != '\0') {
            piVar8 = piVar25;
            piVar29 = *0x10;
            goto code_r0x000125a0;
        }
    }
    else {
        cVar7 = fcn.00012328(iVar5 + 0x140,*arg2,*(pcVar2 + uVar17),*(pcVar2 + uVar17 + 2));
        if (cVar7 != '\0') {
            piVar8 = *0x10;
            piVar29 = piVar25;
code_r0x000125a0:
            piVar27 = NULL;
            uVar13 = *(arg2 + 2) & 0xf;
            if (((uVar13 == 0) && (*(arg2 + 6) != 0)) && ((*(arg2 + 2) & 0x8000) != 0)) {
                piVar21 = piVar25;
                piVar22 = piVar25;
                if (*(*(arg1 + 0xa8) + 0x68) != '\x04') {
                    if (piVar8[4] != '\0') {
                        uVar10 = fcn.00016d00(0x20);
                        *(*(piVar8 + 0x21) + 0x18) = uVar10;
                        if (*(*(piVar8 + 0x21) + 0x18) != 0) {
                            iVar19 = *(arg2 + 6) << 5;
code_r0x00012875:
                            uVar10 = fcn.00016d00(iVar19);
                            *(*(*(piVar8 + 0x21) + 0x18) + 8) = uVar10;
                            iVar19 = *(piVar8 + 0x21);
                            goto code_r0x0001264e;
                        }
                        goto code_r0x0001261b;
                    }
                    if (*(pcVar2 + uVar17) == 0x1c) {
                        uVar10 = fcn.00016d00(0x10);
                        *(*(piVar8 + 0x21) + 0x18) = uVar10;
                        if (*(*(piVar8 + 0x21) + 0x18) != 0) {
                            iVar19 = *(arg2 + 6) << 4;
                            goto code_r0x00012875;
                        }
                        goto code_r0x0001261b;
                    }
                    iVar19 = -0x7ffffffffffffffd;
code_r0x00012625:
                    piVar27 = NULL;
                    goto code_r0x00012e46;
                }
                if (*(piVar29 + 0x14) == '\0') {
                    if (*(pcVar2 + uVar17) != 1) {
                        iVar19 = -0x7ffffffffffffffd;
                        goto code_r0x00012e46;
                    }
                    uVar10 = fcn.00016d00(0x10);
                    *(*(piVar29 + 0x15) + 0x18) = uVar10;
                    if (*(*(piVar29 + 0x15) + 0x18) != 0) {
                        iVar19 = *(arg2 + 6) << 2;
                        goto code_r0x00012636;
                    }
code_r0x0001261b:
                    iVar19 = -0x7ffffffffffffff7;
                    goto code_r0x00012625;
                }
                uVar10 = fcn.00016d00(0x20);
                *(*(piVar29 + 0x15) + 0x18) = uVar10;
                if (*(*(piVar29 + 0x15) + 0x18) == 0) goto code_r0x0001261b;
                iVar19 = *(arg2 + 6) << 5;
code_r0x00012636:
                uVar10 = fcn.00016d00(iVar19);
                *(*(*(piVar29 + 0x15) + 0x18) + 8) = uVar10;
                iVar19 = *(piVar29 + 0x15);
code_r0x0001264e:
                if (*(*(iVar19 + 0x18) + 8) == 0) goto code_r0x0001261b;
                iVar19 = -0x7ffffffffffffff2;
                puVar15 = pcVar2 + uVar17 + 4;
                if (*(arg2 + 6) != 0) {
                    do {
                        piVar22 = NULL;
                        if (uVar24 < 0xd) {
code_r0x00012cef:
                            *arg4 = 0;
code_r0x00012cc2:
                            iVar19 = -0x7fffffffffffffeb;
code_r0x00012ccc:
                            piVar21 = piVar22;
code_r0x00012ccf:
                            piVar27 = NULL;
                            goto code_r0x00012e3e;
                        }
                        if ((*puVar15 & 0xc0) != 0xc0) {
code_r0x00012cd7:
                            iVar19 = -0x7ffffffffffffffd;
                            goto code_r0x00012ccc;
                        }
                        puVar1 = puVar15 + 2;
                        *(puVar15 + 4) = *(puVar15 + 4) << 8 | *(puVar15 + 4) >> 8;
                        uVar13 = *(puVar15 + 6) >> 0x10;
                        uVar14 = *(puVar15 + 6);
                        uVar23 = *puVar1 << 8 | *puVar1 >> 8;
                        uVar26 = CONCAT22(uVar14 << 8 | uVar14 >> 8,uVar13 << 8 | uVar13 >> 8);
                        uVar13 = *(puVar15 + 10) << 8 | *(puVar15 + 10) >> 8;
                        *puVar1 = uVar23;
                        *(puVar15 + 6) = uVar26;
                        *(puVar15 + 10) = uVar13;
                        if (uVar24 - 0xc < uVar13) goto code_r0x00012cef;
                        uVar24 = (uVar24 - 0xc) - uVar13;
                        cVar7 = *(*(arg1 + 0xa8) + 0x68);
                        if ((cVar7 != '\x04') || (*(piVar29 + 0x14) == '\0')) {
                            if ((cVar7 == '\x06') && (piVar8[4] != '\0')) {
                                iVar28 = 0;
                                iVar19 = *(*(*(piVar8 + 0x21) + 0x18) + 8);
                                cVar7 = *pcVar2;
                                while (cVar7 != '\0') {
                                    iVar28 = iVar28 + 1;
                                    cVar7 = pcVar2[iVar28];
                                }
                                arg1_00 = fcn.00016d00(iVar28 + 1);
                                iVar28 = 0;
                                iVar20 = uStackX_18 * 0x20;
                                *(iVar20 + iVar19) = arg1_00;
                                if (arg1_00 == NULL) goto code_r0x00012c9b;
                                cVar7 = *pcVar2;
                                while (cVar7 != '\0') {
                                    iVar28 = iVar28 + 1;
                                    cVar7 = pcVar2[iVar28];
                                }
                                goto code_r0x0001277b;
                            }
                            if (uVar23 == 1) {
                                if (uVar13 != 4) goto code_r0x00012cc2;
                                puVar11 = puVar15 + 0xc;
                                puVar16 = *(*(*(piVar29 + 0x15) + 0x18) + 8) + uStack_b0 * 4;
                                if (puVar16 != puVar11) {
                                    section..text(puVar16,puVar11,4);
                                }
                                piVar21 = fcn.00016d00(0x18);
                                if (piVar21 != NULL) {
                                    piVar25 = piVar22;
                                    for (piVar12 = piVar29[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                        piVar25 = piVar25 + 1;
                                    }
                                    piVar12 = fcn.00016d00(piVar25 * 2 + 2);
                                    *piVar21 = piVar12;
                                    if (piVar12 == NULL) goto code_r0x00012ce3;
                                    piVar4 = piVar29[1];
                                    iVar3 = *piVar4;
                                    piVar6 = piVar4;
                                    piVar25 = piVar22;
                                    while (iVar3 != 0) {
                                        piVar6 = piVar6 + 1;
                                        piVar25 = piVar25 + 1;
                                        iVar3 = *piVar6;
                                    }
                                    iVar19 = piVar25 * 2 + 2;
                                    if ((iVar19 != 0) && (piVar12 != piVar4)) {
                                        section..text(piVar12,piVar4,iVar19);
                                    }
                                    puVar16 = fcn.00016d00(4);
                                    piVar21[1] = puVar16;
                                    if (puVar16 == NULL) goto code_r0x00012ce3;
                                    if (puVar16 != puVar11) {
                                        iVar19 = 0;
                                        section..text(puVar16,puVar11,4);
                                    }
                                    iVar28 = *0x196b0;
                                    if ((uStack_a8 == 0) || (uVar26 = *(puVar15 + 6), uVar26 == 0)) {
                                        uVar26 = *(puVar15 + 6);
                                        if (*(puVar15 + 6) < uStack_a8) {
                                            uVar26 = uStack_a8;
                                        }
                                    }
                                    else {
                                        if (uStack_a8 < uVar26) {
                                            uVar26 = uStack_a8;
                                        }
                                    }
                                    *(piVar21 + 2) = uVar26;
                                    iStack_58 = *piVar21;
                                    iStack_50 = piVar21[1];
                                    iStack_48 = piVar21[2];
                                    fcn.00011e8c(iVar28 + 8,0,CONCAT71(iVar19 >> 8,1),&iStack_58);
                                    (**(*0x196c8 + 0x48))(*piVar21);
                                    iVar19 = *0x196c8;
                                    *piVar21 = 0;
                                    (**(iVar19 + 0x48))(piVar21[1]);
                                    iVar19 = *0x196c8;
                                    piVar21[1] = 0;
                                    (**(iVar19 + 0x48))(piVar21);
                                    uStack_b0 = uStack_b0 + 1;
                                    goto code_r0x00012c31;
                                }
code_r0x00012ce3:
                                iVar19 = -0x7ffffffffffffff7;
                                goto code_r0x00012ccf;
                            }
                            if (uVar23 == 5) {
                                uStack_a8 = uVar26;
                                goto code_r0x00012c35;
                            }
                            if (uVar23 != 0x1c) goto code_r0x00012cd7;
                            if (uVar13 != 0x10) goto code_r0x00012cc2;
                            puVar11 = puVar15 + 0xc;
                            puVar16 = uStack_b0 * 0x10 + *(*(*(piVar8 + 0x21) + 0x18) + 8);
                            if (puVar16 != puVar11) {
                                section..text(puVar16,puVar11,0x10);
                            }
                            piVar22 = fcn.00016d00(0x18);
                            iVar19 = 0;
                            if (piVar22 != NULL) {
                                for (piVar12 = piVar8[1]; *piVar12 != 0; piVar12 = piVar12 + 1) {
                                    iVar19 = iVar19 + 1;
                                }
                                piVar12 = fcn.00016d00(iVar19 * 2 + 2);
                                iVar19 = 0;
                                *piVar22 = piVar12;
                                if (piVar12 != NULL) {
                                    piVar4 = piVar8[1];
                                    iVar3 = *piVar4;
                                    piVar6 = piVar4;
                                    while (iVar3 != 0) {
                                        piVar6 = piVar6 + 1;
                                        iVar19 = iVar19 + 1;
                                        iVar3 = *piVar6;
                                    }
                                    iVar19 = iVar19 * 2 + 2;
                                    if ((iVar19 != 0) && (piVar12 != piVar4)) {
                                        section..text(piVar12,piVar4,iVar19);
                                    }
                                    puVar16 = fcn.00016d00(0x10);
                                    piVar22[1] = puVar16;
                                    if (puVar16 != NULL) {
                                        if (puVar16 != puVar11) {
                                            section..text(puVar16,puVar11,0x10);
                                        }
                                        iVar19 = *0x196b0;
                                        if ((uStack_a8 == 0) || (uVar26 = *(puVar15 + 6), uVar26 == 0)) {
                                            uVar26 = *(puVar15 + 6);
                                            if (*(puVar15 + 6) < uStack_a8) {
                                                uVar26 = uStack_a8;
                                            }
                                        }
                                        else {
                                            if (uStack_a8 < uVar26) {
                                                uVar26 = uStack_a8;
                                            }
                                        }
                                        *(piVar22 + 2) = uVar26;
                                        iStack_78 = *piVar22;
                                        iStack_70 = piVar22[1];
                                        iStack_68 = piVar22[2];
                                        fcn.00012084(iVar19 + 0x28,0,1,&iStack_78);
                                        (**(*0x196c8 + 0x48))(*piVar22);
                                        iVar19 = *0x196c8;
                                        *piVar22 = 0;
                                        (**(iVar19 + 0x48))(piVar22[1]);
                                        iVar19 = *0x196c8;
                                        piVar22[1] = 0;
                                        (**(iVar19 + 0x48))(piVar22);
                                        uStack_b0 = uStack_b0 + 1;
                                        goto code_r0x00012c31;
                                    }
                                }
                            }
                            piVar21 = NULL;
                            iVar19 = -0x7ffffffffffffff7;
                            piVar27 = piVar21;
                            goto code_r0x00012e3e;
                        }
                        iVar28 = 0;
                        iVar19 = *(*(*(piVar29 + 0x15) + 0x18) + 8);
                        cVar7 = *pcVar2;
                        while (cVar7 != '\0') {
                            iVar28 = iVar28 + 1;
                            cVar7 = pcVar2[iVar28];
                        }
                        arg1_00 = fcn.00016d00(iVar28 + 1);
                        iVar28 = 0;
                        iVar20 = uStackX_18 * 0x20;
                        *(iVar20 + iVar19) = arg1_00;
                        if (arg1_00 == NULL) {
code_r0x00012c9b:
                            piVar27 = NULL;
                            piVar25 = uStackX_18;
                            iVar19 = -0x7ffffffffffffff7;
                            piVar21 = NULL;
                            piVar22 = NULL;
                            goto code_r0x00012e46;
                        }
                        cVar7 = *pcVar2;
                        while (cVar7 != '\0') {
                            iVar28 = iVar28 + 1;
                            cVar7 = pcVar2[iVar28];
                        }
code_r0x0001277b:
                        if ((iVar28 != 0) && (arg1_00 != pcVar2)) {
                            section..text(arg1_00,pcVar2,iVar28);
                        }
                        *(iVar20 + 8 + iVar19) = *puVar1;
                        *(iVar20 + 10 + iVar19) = *(puVar15 + 4);
                        *(iVar20 + 0xc + iVar19) = *(puVar15 + 6);
                        uVar13 = *(puVar15 + 10);
                        *(iVar20 + 0x10 + iVar19) = uVar13;
                        puVar11 = fcn.00016d00(uVar13);
                        piVar21 = NULL;
                        *(iVar20 + 0x18 + iVar19) = puVar11;
                        if (puVar11 == NULL) {
                            iVar19 = -0x7ffffffffffffff7;
                            piVar22 = piVar21;
                            piVar27 = piVar21;
                            goto code_r0x00012e3e;
                        }
                        uVar18 = *(iVar20 + 0x10 + iVar19);
                        if ((uVar18 != 0) && (puVar11 != puVar15 + 0xc)) {
                            section..text(puVar11,puVar15 + 0xc,uVar18);
                        }
                        uStackX_18 = uStackX_18 + 1;
code_r0x00012c31:
                        iVar19 = 0;
code_r0x00012c35:
                        puVar15 = puVar15 + *(puVar15 + 10) + 0xc;
                        uStack_98 = uStack_98 + 1;
                    } while (uStack_98 < *(arg2 + 6));
                }
                piVar21 = NULL;
                piVar22 = piVar21;
                piVar27 = piVar21;
                if (*(*(arg1 + 0xa8) + 0x68) == '\x04') {
                    if (*(piVar29 + 0x14) != '\0') {
                        iVar28 = *(piVar29 + 0x15);
                        goto code_r0x00012d2c;
                    }
                    if (*(pcVar2 + uVar17) == 1) {
                        iVar28 = *(piVar29 + 0x15);
                        goto code_r0x00012d44;
                    }
                    piVar25 = uStackX_18;
                    iVar19 = -0x7ffffffffffffffd;
                }
                else {
                    if (piVar8[4] != '\0') {
                        iVar28 = *(piVar8 + 0x21);
code_r0x00012d2c:
                        **(iVar28 + 0x18) = uStackX_18;
                        goto code_r0x00012da5;
                    }
                    if (*(pcVar2 + uVar17) == 0x1c) {
                        iVar28 = *(piVar8 + 0x21);
code_r0x00012d44:
                        **(iVar28 + 0x18) = uStack_b0;
                        goto code_r0x00012da5;
                    }
                    piVar25 = uStackX_18;
                    iVar19 = -0x7ffffffffffffffd;
                }
            }
            else {
                iVar19 = -0x7ffffffffffffff9;
                if (uVar13 == 3) {
                    iVar19 = -0x7ffffffffffffff2;
                }
code_r0x00012da5:
                if (*0x18 != 0) {
                    fcn.00017fbc(*0x18);
                }
                piVar21 = NULL;
                if (*(*(arg1 + 0xa8) + 0x68) == '\x04') {
                    fcn.000116c0(iVar5 + 0x118,piVar29);
                    *(*(piVar29 + 0x15) + 8) = iVar19;
                    iVar28 = **(piVar29 + 0x15);
                }
                else {
                    fcn.000116c0(iVar5 + 0x140,piVar8);
                    *(*(piVar8 + 0x21) + 8) = iVar19;
                    iVar28 = **(piVar8 + 0x21);
                }
                if (iVar28 != 0) {
                    (**(*0x196c8 + 0x68))();
                    (**(*0x196d8 + 8))(*0x196d8);
                    piVar21 = NULL;
                }
                piVar22 = piVar21;
                piVar27 = piVar21;
                if (-1 < iVar19) goto code_r0x000130b5;
code_r0x00012e3e:
                piVar25 = uStackX_18;
code_r0x00012e46:
            }
            if (piVar29 != NULL) {
                if (*(piVar29 + 0x14) == piVar27) {
                    if ((*(pcVar2 + uVar17) == 1) && (iVar28 = *(*(piVar29 + 0x15) + 0x18), iVar28 != 0)) {
                        if (*(iVar28 + 8) != 0) {
                            (**(*0x196c8 + 0x48))();
                        }
                        (**(*0x196c8 + 0x48))(*(*(piVar29 + 0x15) + 0x18));
                        piVar27 = NULL;
                        *(*(piVar29 + 0x15) + 0x18) = 0;
                    }
                }
                else {
                    iVar28 = *(*(piVar29 + 0x15) + 0x18);
                    if (iVar28 != 0) {
                        if (*(iVar28 + 8) != piVar27) {
                            if (piVar25 != 0) {
                                iVar28 = piVar25 << 5;
                                do {
                                    iVar28 = iVar28 + -0x20;
                                    uStackX_18 = piVar25 - 1;
                                    if (*(iVar28 + *(*(*(piVar29 + 0x15) + 0x18) + 8)) != 0) {
                                        (**(*0x196c8 + 0x48))();
                                    }
                                    if (*(*(*(*(piVar29 + 0x15) + 0x18) + 8) + 0x18 + iVar28) != 0) {
                                        (**(*0x196c8 + 0x48))();
                                    }
                                    piVar25 = uStackX_18;
                                } while (uStackX_18 != 0);
                            }
                            (**(*0x196c8 + 0x48))(*(*(*(piVar29 + 0x15) + 0x18) + 8));
                        }
                        (**(*0x196c8 + 0x48))(*(*(piVar29 + 0x15) + 0x18));
                        piVar27 = NULL;
                    }
                }
            }
            if (piVar8 != NULL) {
                if (piVar8[4] == piVar27) {
                    if ((*(pcVar2 + uVar17) == 0x1c) && (iVar28 = *(*(piVar8 + 0x21) + 0x18), iVar28 != 0)) {
                        if (*(iVar28 + 8) != 0) {
                            (**(*0x196c8 + 0x48))();
                        }
                        (**(*0x196c8 + 0x48))(*(*(piVar8 + 0x21) + 0x18));
                        *(*(piVar8 + 0x21) + 0x18) = 0;
                    }
                }
                else {
                    iVar28 = *(*(piVar8 + 0x21) + 0x18);
                    if (iVar28 != 0) {
                        if (*(iVar28 + 8) != piVar27) {
                            if (uStackX_18 != 0) {
                                iVar28 = uStackX_18 << 5;
                                do {
                                    iVar28 = iVar28 + -0x20;
                                    uStackX_18 = uStackX_18 - 1;
                                    if (*(iVar28 + *(*(*(piVar8 + 0x21) + 0x18) + 8)) != 0) {
                                        (**(*0x196c8 + 0x48))();
                                    }
                                    if (*(*(*(*(piVar8 + 0x21) + 0x18) + 8) + 0x18 + iVar28) != 0) {
                                        (**(*0x196c8 + 0x48))();
                                    }
                                } while (uStackX_18 != 0);
                            }
                            (**(*0x196c8 + 0x48))(*(*(*(piVar8 + 0x21) + 0x18) + 8));
                        }
                        (**(*0x196c8 + 0x48))(*(*(piVar8 + 0x21) + 0x18));
                    }
                }
            }
            if (piVar21 != NULL) {
                if (*piVar21 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (piVar21[1] != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                (**(*0x196c8 + 0x48))(piVar21);
            }
            if (piVar22 != NULL) {
                if (*piVar22 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (piVar22[1] != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                (**(*0x196c8 + 0x48))(piVar22);
            }
            goto code_r0x000130b5;
        }
    }
    iVar19 = -0x7fffffffffffffeb;
    *arg4 = 0;
code_r0x000130b5:
    (**(*0x196c8 + 0x20))(uVar9);
    return iVar19;
}


/* fcn.00018d50 @ 0x18d50 */

int64_t fcn.00018d50(uint32_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    ulong in_RDX;
    int64_t in_R8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_01 + 0x2e0) == 0) {
        arg1_00 = fcn.000186d4(arg1_01,in_RDX,in_R8);
        if (arg1_00 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = *(arg1_01 + 0x2e8);
            *(arg1_01 + 0x2e0) = arg1_00;
            if (*(arg1_01 + 0x20) == '\x04') {
                iVar1 = (**(iVar1 + 0x28))();
            }
            else {
                iVar1 = (**(iVar1 + 0x20))(iVar1,arg1_00 + 0x28);
            }
            if (iVar1 < 0) {
                *(arg1_01 + 0x2e0) = 0;
                fcn.00018354(arg1_00);
            }
        }
    }
    else {
        iVar1 = -0x7fffffffffffffec;
    }
    return iVar1;
}


/* fcn.00018b64 @ 0x18b64 */

int64_t fcn.00018b64(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t *piVar3;
    char cVar4;
    uint *puVar5;
    int64_t iVar6;
    int64_t iStackX_20;
    ulong in_stack_00000030;
    
    iStackX_20 = arg3;
    puVar5 = fcn.00016cd0(arg1,((*(arg2 + 0x80) - 1) + 10) * 0x10);
    if (puVar5 != NULL) {
        *puVar5 = 0x54504455;
        piVar1 = puVar5 + 2;
        *piVar1 = piVar1;
        puVar2 = puVar5 + 0x18;
        *(puVar5 + 4) = piVar1;
        *(puVar5 + 6) = arg1;
        *(puVar5 + 10) = arg2;
        *(puVar5 + 8) = 0x13158;
        *(puVar5 + 0xc) = in_stack_00000030;
        cVar4 = *(arg1 + 0x20);
        iStackX_20 = CONCAT44(iStackX_20._4_4_,*(arg2 + 0x80));
        *(puVar5 + 0x1a) = 0x8000000000000006;
        if (cVar4 == '\x04') {
            iVar6 = (**(*0x196c8 + 0x50))();
            if (-1 < iVar6) {
                *(puVar5 + 0x1c) = puVar5 + 0x1e;
                *(puVar5 + 0x1e) = 0;
                *(puVar5 + 0x20) = 0;
                puVar5[0x22] = *(arg2 + 0x84);
                fcn.000182e0(arg2,puVar5 + 0x24,&iStackX_20);
                puVar5[0x23] = iStackX_20;
code_r0x00018cbc:
                piVar3 = arg1 + 0x2d0;
                iVar6 = *piVar3;
                *(puVar5 + 4) = piVar3;
                *piVar1 = iVar6;
                *(iVar6 + 8) = piVar1;
                *piVar3 = piVar1;
                iVar6 = *(arg1 + 0x2e8);
                if (*(arg1 + 0x20) == '\x04') {
                    iVar6 = (**(iVar6 + 0x20))();
                }
                else {
                    iVar6 = (**(iVar6 + 0x18))(iVar6,puVar2);
                }
                if (iVar6 < 0) {
                    *(*piVar1 + 8) = *(puVar5 + 4);
                    **(puVar5 + 4) = *piVar1;
                    if ((*(*(puVar5 + 6) + 0x20) == '\x04') || (*(*(puVar5 + 6) + 0x20) == '\x06')) {
                        (**(*0x196c8 + 0x70))(*puVar2);
                    }
                    (**(*0x196c8 + 0x48))(puVar5);
                    return iVar6;
                }
                return 0;
            }
        }
        else {
            iVar6 = (**(*0x196c8 + 0x50))(0x200,0x10,0x183f8,puVar5,puVar2);
            if (-1 < iVar6) {
                *(puVar5 + 0x1c) = puVar5 + 0x1e;
                *(puVar5 + 0x1e) = 0;
                puVar5[0x20] = *(arg2 + 0x84);
                fcn.000182e0(arg2,puVar5 + 0x22,&iStackX_20);
                puVar5[0x21] = iStackX_20;
                goto code_r0x00018cbc;
            }
        }
        (**(*0x196c8 + 0x48))(puVar5);
    }
    return -0x7ffffffffffffff7;
}


/* fcn.00017414 @ 0x17414 */

int fcn.00017414(void)

{
    int aiStackX_8 [8];
    uint16_t uStack_18;
    ushort uStack_15;
    uchar uStack_13;
    uchar uStack_12;
    uint32_t uStack_10;
    
    (**(*0x196d0 + 0x18))(&uStack_18,0);
    (**(*0x196c8 + 0xf0))(aiStackX_8);
    return aiStackX_8[0] + (CONCAT31(CONCAT21(uStack_15,uStack_13),uStack_12) ^ uStack_18 << 7 ^ uStack_10);
}


/* fcn.00018038 @ 0x18038 */

int64_t fcn.00018038(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int *piVar2;
    uint64_t *puVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t *puVar11;
    uint32_t uVar12;
    int iVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint64_t uVar16;
    uint32_t *puVar17;
    int iVar18;
    int64_t iVar19;
    uint32_t uStackX_8;
    int iStackX_10;
    uint32_t uStackX_18;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    uint64_t uStack_58;
    uint64_t uStack_50;
    
    uStack_50 = 0;
    uStack_58 = uStack_58 & 0xffffffff00000000;
    uVar10 = 0;
    uVar12 = arg2;
    iStackX_10 = 0;
    uStackX_18 = 0;
    iVar8 = 0;
    uVar15 = 0;
    uStackX_8 = 0;
    iVar18 = 0;
    uVar16 = arg4 & 0xffffffff;
    if ((arg4 <= *arg1) || (uVar12 == 1)) {
        uVar16 = 0;
    }
    iVar13 = uVar16;
    uVar7 = uVar12;
    if (iVar13 != 0) {
        iVar8 = fcn.00016cd0(arg1,uVar16);
        if (iVar8 == 0) {
            return 0;
        }
        uVar7 = uVar12 + 1;
        iStackX_10 = iVar13;
        if (uVar12 == 0) {
            uVar10 = 0;
            uVar15 = 0;
            iVar18 = 0;
        }
        else {
            iVar19 = iVar8;
            puVar17 = arg1;
            do {
                uVar14 = uVar16;
                if (uVar14 < *puVar17) {
                    uVar9 = uVar15;
                    iVar5 = *(arg1 + 8 + uVar9 * 0x10);
                    if ((uVar14 != 0) && (iVar19 != iVar5)) {
                        section..text(iVar19,iVar5,uVar16);
                    }
                    puVar3 = arg1 + uVar9 * 0x10;
                    uStack_58 = *puVar3;
                    uStack_50 = puVar3[1];
                    iVar18 = iVar18 + uVar14;
                    piVar1 = arg1 + 8 + uVar9 * 0x10;
                    *piVar1 = *piVar1 + uVar16;
                    uVar10 = uStackX_18 + uVar14;
                    piVar2 = arg1 + uVar9 * 0x10;
                    *piVar2 = *piVar2 - uVar14;
                    uStackX_8 = uVar15;
                    goto code_r0x00018134;
                }
                if ((*puVar17 != 0) && (iVar19 != *(puVar17 + 2))) {
                    section..text(iVar19,*(puVar17 + 2),*puVar17);
                }
                uVar4 = *puVar17;
                uVar15 = uVar15 + 1;
                uVar10 = uStackX_18 + uVar4;
                uVar16 = uVar14 - uVar4;
                iVar19 = iVar19 + uVar4;
                iVar18 = iVar18 + uVar4;
                uVar7 = uVar7 - 1;
            } while ((uVar14 - uVar4 != 0) && (puVar17 = puVar17 + 4, uStackX_18 = uVar10, uVar15 < uVar12));
code_r0x00018134:
        }
    }
    iVar19 = fcn.00017ea4(uVar7,uVar7);
    if (iVar19 == 0) {
        if (iVar8 != 0) {
            (**(*0x196c8 + 0x48))(iVar8);
        }
        return 0;
    }
    iVar5 = *(iVar19 + 0x78);
    *(iVar5 + 0x10) = in_stack_00000028;
    *(iVar5 + 0x18) = in_stack_00000030;
    *(iVar5 + 0x20) = iStackX_10 != 0;
    if (iStackX_10 != 0) {
        iVar6 = *(iVar19 + 0x78);
        *(iVar6 + 0x30) = uVar10;
        *(iVar6 + 0x38) = iVar8;
        *(iVar19 + 0x88) = iVar8;
        *(iVar19 + 0x90) = uVar10 + iVar8;
        *(iVar19 + 0x98) = iVar8;
        *(iVar19 + 0xa0) = uVar10 + iVar8;
        *(iVar19 + 0xa8) = uVar10;
    }
    uVar10 = iStackX_10 != 0;
    if (uVar15 < uVar12) {
        puVar17 = uVar15 * 0x10 + arg1;
        uVar16 = uVar12 - uVar15;
        do {
            uVar15 = *puVar17;
            iVar8 = *(puVar17 + 2);
            uVar9 = uVar10;
            uVar10 = uVar10 + 1;
            puVar11 = (uVar9 + 3) * 0x10 + *(iVar19 + 0x78);
            *puVar11 = uVar15;
            *(puVar11 + 2) = iVar8;
            *(iVar19 + 0x90 + uVar9 * 0x28) = iVar8 + uVar15;
            *(iVar19 + 0xa0 + uVar9 * 0x28) = iVar8 + uVar15;
            *(iVar19 + 0x88 + uVar9 * 0x28) = iVar8;
            *(iVar19 + 0x98 + uVar9 * 0x28) = iVar8;
            *(iVar19 + 0xa8 + uVar9 * 0x28) = uVar15;
            iVar18 = iVar18 + *puVar17;
            puVar17 = puVar17 + 4;
            uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
    }
    *(iVar5 + 0x24) = iVar18;
    *(iVar19 + 0x84) = iVar18;
    if (uStackX_8 != 0) {
        puVar3 = arg1 + uStackX_8 * 0x10;
        *puVar3 = uStack_58;
        puVar3[1] = uStack_50;
    }
    return iVar19;
}


/* fcn.00011998 @ 0x11998 */

ulong fcn.00011998(uint32_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_01;
    uint64_t uVar2;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_01 != arg2) {
        section..text(arg1_01,arg2,0x28);
    }
    uVar2 = 0;
    *(arg1_01 + 8) = 0;
    if (*(arg2 + 8) != 0) {
        iVar1 = fcn.00016cd0();
        *(arg1_01 + 8) = iVar1;
        if (iVar1 == 0) {
            fcn.000102c0(arg1_01,0x28);
            return 0x8000000000000009;
        }
        if (*arg2 != 0) {
            do {
                iVar1 = *(arg2 + 8) + uVar2 * 4;
                arg1_00 = *(arg1_01 + 8) + uVar2 * 4;
                if (arg1_00 != iVar1) {
                    section..text(arg1_00,iVar1,4);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < *arg2);
        }
    }
    return 0;
}


/* fcn.00018b00 @ 0x18b00 */

void fcn.00018b00(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00018974(arg1,arg2,0,0);
    iVar1 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if (iVar1 != 0) {
            (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar1 + 0x28);
        }
    }
    else if (iVar1 != 0) {
        (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar1 + 0x28);
    }
    //WARNING: Could not recover jumptable at 0x00018b60. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*(arg1 + 0x2e8) + 8))(*(arg1 + 0x2e8),0);
    return;
}


/* fcn.000154e4 @ 0x154e4 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.000154e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    int64_t arg2_00;
    int64_t arg1_00;
    uint64_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    ulong uVar9;
    int64_t iVar10;
    char acStackX_8 [4];
    int64_t var_14h;
    int64_t iStackX_20;
    int32_t var_e4h;
    int8_t var_e8h;
    uint32_t var_130h;
    int64_t var_138h;
    int64_t var_148h;
    int64_t *piVar11;
    ulong in_stack_fffffffffffffe00;
    uint uVar12;
    int64_t iStack_1e8;
    int64_t aiStack_1e0 [2];
    uint uStack_1d0;
    uint uStack_1cc;
    uchar uStack_1c8;
    uchar *apuStack_1c0 [2];
    int64_t iStack_1b0;
    int64_t iStack_1a8;
    int64_t iStack_1a0;
    int64_t iStack_198;
    int64_t iStack_190;
    uchar auStack_188 [4];
    ushort uStack_184;
    uint uStack_17c;
    int64_t iStack_178;
    uint uStack_170;
    int64_t iStack_168;
    uint32_t uStack_160;
    int64_t iStack_158;
    int64_t iStack_148;
    ulong uStack_140;
    uint uStack_138;
    uint uStack_134;
    uchar uStack_130;
    uchar uStack_12f;
    uint8_t uStack_12e;
    uchar auStack_114 [140];
    int64_t var_80h;
    uint32_t var_bp_78h;
    int64_t var_70h;
    int64_t var_bp_68h;
    int64_t var_bp_60h;
    int32_t var_54h;
    int64_t var_bp_50h;
    int32_t var_bp_48h;
    int64_t var_bp_40h;
    uint32_t var_38h;
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_bp_18h;
    int32_t var_10h;
    int32_t var_ch;
    int64_t var_8h;
    
    uVar12 = in_stack_fffffffffffffe00 >> 0x20;
    uVar8 = 0;
    arg2_00 = *(*(arg1 + 0xa8) + 0x50);
    arg1_00 = *(*(arg1 + 0xa8) + 0x48);
    aiStack_1e0[0] = 0;
    iStack_1e8 = 0;
    iStackX_20 = 0;
    stack0x00000010 = 0;
    iStack_1a8 = 0;
    iStack_1b0 = 0;
    fcn.000102c0(apuStack_1c0,0x10);
    fcn.000102c0(aiStack_1e0 + 1,0x14);
    fcn.000102c0(&iStack_148,0x10);
    fcn.000102c0(&iStack_198,0x48);
    acStackX_8[0] = '\0';
    iStack_1a0 = 0;
    iStack_148 = arg2;
    fcn.000179a0(arg1_00,200000000,&iStack_1a0);
    if (iStack_1a0 != 0) {
        return -0x7ffffffffffffff4;
    }
    iVar5 = fcn.00017640(arg1_00,arg2_00,0x18f30,aiStack_1e0);
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar9 = CONCAT44(uVar12,0x10);
    iVar5 = (**(*0x196c8 + 0x118))(aiStack_1e0[0],0x18f90,&iStack_1e8,arg2_00,arg1_00,uVar9);
    uVar12 = uVar9 >> 0x20;
    if (iVar5 < 0) goto code_r0x00015a22;
    aiStack_1e0[1] = 0;
    uStack_1d0 = 0x1010800;
    uStack_1cc = 0x10001;
    uStack_1c8 = 0;
    iVar5 = (**(iStack_1e8 + 8))(iStack_1e8,aiStack_1e0 + 1);
    if (((((iVar5 < 0) || (iVar5 = fcn.00017640(arg1_00,arg2_00,0x18e90,&iStackX_20), iVar5 < 0)) ||
         (iVar5 = (**(*0x196c8 + 0x118))(iStackX_20,0x18f80,&var_14h + 4,arg2_00,arg1_00,CONCAT44(uVar12,0x10)),
         iVar5 < 0)) || (iVar5 = (**(*0x196c8 + 0x98))(arg1_00,0x18ee0,&iStack_1a8), iVar5 < 0)) ||
       ((iVar5 = (**(iStack_1a8 + 8))(iStack_1a8,0,&iStack_1b0,0), iVar5 < 0 && (iVar5 != -0x7ffffffffffffffb))))
    goto code_r0x00015a22;
    iVar6 = fcn.00016d00(iStack_1b0);
    if (iVar6 == 0) {
        iVar5 = -0x7ffffffffffffff7;
        goto code_r0x00015a22;
    }
    iVar5 = (**(iStack_1a8 + 8))(iStack_1a8,0,&iStack_1b0,iVar6);
    if (-1 < iVar5) {
        piVar11 = &iStack_190;
        uVar9 = 0x151d4;
        iVar5 = (**(*0x196c8 + 0x50))(0x200,0x10,0x151d4,acStackX_8,piVar11);
        uVar12 = piVar11 >> 0x20;
        if (-1 < iVar5) {
            fcn.00010300(auStack_188,4,CONCAT71(uVar9 >> 8,0xff));
            uStack_17c = 1;
            uStack_184 = 0x43;
            iStack_178 = fcn.00016d00(10);
            if (iStack_178 != 0) {
                if (*(arg1 + 200) == '\0') {
                    if (iStack_178 != arg1 + 0xcb) {
                        section..text(iStack_178,arg1 + 0xcb,4);
                    }
                    iVar5 = arg1 + 0xcf;
                }
                else {
                    if (iStack_178 != iVar6 + 0x68) {
                        section..text(iStack_178,iVar6 + 0x68,4);
                    }
                    iVar5 = iVar6 + 0x6c;
                }
                if (iStack_178 + 4 != iVar5) {
                    section..text(iStack_178 + 4,iVar5,4);
                }
                *(iStack_178 + 8) = 0x44;
                uStack_170 = 5;
                uStack_138 = 0xf9;
                uStack_134 = 0xf1;
                fcn.000102c0(&uStack_130,0xec);
                uStack_130 = 1;
                puVar1 = iVar6 + 0x48;
                uStack_12f = *(iVar6 + 0x40);
                uStack_12e = *(iVar6 + 0x44);
                if ((uStack_12e != 0) && (auStack_114 != puVar1)) {
                    section..text(auStack_114,puVar1,uStack_12e);
                }
                var_bp_40h._4_4_ = 0x63538263;
                var_38h._0_1_ = 0xff;
                apuStack_1c0[0] = fcn.00016d00(3);
                if (apuStack_1c0[0] != NULL) {
                    *apuStack_1c0[0] = 0x35;
                    apuStack_1c0[0][1] = 1;
                    apuStack_1c0[0][2] = 3;
                    apuStack_1c0[1] = fcn.00016d00(3);
                    if (apuStack_1c0[1] != NULL) {
                        *apuStack_1c0[1] = 0x37;
                        apuStack_1c0[1][1] = 1;
                        apuStack_1c0[1][2] = 6;
                        (**(stack0x00000010 + 0x30))
                                  (stack0x00000010,&uStack_138,0,0,CONCAT44(uVar12,2),apuStack_1c0,&iStack_168);
                        iVar4 = fcn.00017414();
                        uVar2 = (iVar4 * 0x41c64e6d + 0x3039) % 0xffffffff;
                        uVar7 = uVar2;
                        uVar3 = uVar2 >> 0x10;
                        iVar5 = iVar6 + 0x68;
                        *(iStack_168 + 0xc) = CONCAT22(uVar7 << 8 | uVar7 >> 8,uVar3 << 8 | uVar3 >> 8);
                        *(iStack_168 + 0x12) = 0x80;
                        if (*(arg1 + 200) == '\0') {
                            iVar5 = arg1 + 0xcb;
                        }
                        if (iStack_168 + 0x14 != iVar5) {
                            section..text(iStack_168 + 0x14,iVar5,4);
                        }
                        if ((*(iVar6 + 0x44) != 0) && (iStack_168 + 0x24 != puVar1)) {
                            section..text(iStack_168 + 0x24,puVar1,*(iVar6 + 0x44));
                        }
                        *(iStack_168 + 10) = *(iVar6 + 0x44);
                        iVar5 = (**(stack0x00000010 + 0x38))(stack0x00000010,&iStack_198);
                        if (-1 < iVar5) {
                            do {
                                iVar5 = (**(iStack_1e8 + 0x38))(iStack_1e8);
                            } while (acStackX_8[0] == '\0');
                            if (iStack_198 < 0) {
                                iVar5 = iStack_198;
                            }
                            else {
                                if (uStack_160 != 0) {
                                    iVar10 = 0;
                                    do {
                                        iVar5 = fcn.000151e4(stack0x00000010,iStack_158 + iVar10,&iStack_148);
                                        if (-1 < iVar5) break;
                                        uVar8 = uVar8 + 1;
                                        iVar10 = iVar10 + 0xf9;
                                    } while (uVar8 < uStack_160);
                                }
                                *arg3 = uStack_140;
                            }
                        }
                        goto code_r0x00015a15;
                    }
                }
            }
            iVar5 = -0x7ffffffffffffff7;
        }
    }
code_r0x00015a15:
    (**(*0x196c8 + 0x48))(iVar6);
code_r0x00015a22:
    uVar8 = 0;
    do {
        if (apuStack_1c0[uVar8] != NULL) {
            (**(*0x196c8 + 0x48))();
        }
        uVar8 = uVar8 + 1;
    } while (uVar8 < 2);
    if (iStack_178 != 0) {
        (**(*0x196c8 + 0x48))();
    }
    if (iStack_168 != 0) {
        (**(*0x196c8 + 0x48))();
    }
    if (iStack_158 != 0) {
        (**(*0x196c8 + 0x48))();
    }
    if (iStack_190 != 0) {
        (**(*0x196c8 + 0x70))();
    }
    if (stack0x00000010 != 0) {
        (**(stack0x00000010 + 0x28))(stack0x00000010);
        (**(stack0x00000010 + 8))(stack0x00000010,0);
        (**(*0x196c8 + 0x120))(iStackX_20,0x18f80,arg2_00,arg1_00);
    }
    if (iStackX_20 != 0) {
        fcn.0001768c(arg1_00,arg2_00,0x18e90,iStackX_20);
    }
    if (iStack_1e8 != 0) {
        (**(iStack_1e8 + 8))(iStack_1e8,0);
        (**(*0x196c8 + 0x120))(aiStack_1e0[0],0x18f90,arg2_00,arg1_00);
    }
    fcn.0001768c(arg1_00,arg2_00,0x18f30,aiStack_1e0[0]);
    return iVar5;
}


/* fcn.00011cd0 @ 0x11cd0 */

int64_t fcn.00011cd0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int32_t var_30h;
    int16_t var_2ch;
    int8_t var_2ah;
    int32_t var_28h;
    int32_t var_24h;
    int8_t var_20h;
    uchar var_1fh [4];
    int32_t var_1bh;
    int16_t var_16h;
    uchar var_14h [4];
    int16_t var_bp_10h;
    
    var_20h = *(arg1 + 200);
    var_30h = 0;
    var_28h = 0;
    var_24h = 0;
    var_1bh = *(arg1 + 0xcf);
    var_16h = *(arg1 + 0xd4);
    var_bp_10h = 0x35;
    var_2ch = -0x8000;
    var_2ah = 0;
    if (var_1fh != arg1 + 0xcb) {
        section..text(var_1fh,arg1 + 0xcb,4);
    }
    if (var_14h != arg1 + 0x108) {
        section..text(var_14h,arg1 + 0x108,4);
    }
    iVar2 = (**(*(arg2 + 0x2e8) + 8))(*(arg2 + 0x2e8),&var_30h);
    if ((iVar2 == -0x7fffffffffffffef) && (cVar1 = fcn.00011ad8(arg1,arg2,&var_30h), cVar1 != '\0')) {
        return 0;
    }
    return iVar2;
}


/* fcn.0001227c @ 0x1227c */

ulong fcn.0001227c(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    uint in_register_0000000c;
    ulong *puVar4;
    ulong *puVar5;
    ulong auStackX_10 [3];
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    auStackX_10[0]._0_4_ = arg2;
    puVar2 = *puVar4;
    puVar5 = **puVar4;
    while (puVar2 != puVar4) {
        if (puVar2 + 2 == auStackX_10) goto code_r0x0001231b;
        iVar1 = fcn.000102e0(puVar2 + 2,auStackX_10,4);
        if (iVar1 == 0) goto code_r0x0001231b;
        puVar2 = puVar5;
        puVar5 = *puVar5;
    }
    puVar2 = fcn.00016cd0();
    if (puVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        *puVar2 = puVar2;
        puVar2[1] = puVar2;
        if (puVar2 + 2 != auStackX_10) {
            section..text(puVar2 + 2,auStackX_10,4);
        }
        *puVar2 = puVar4;
        puVar5 = puVar4[1];
        puVar2[1] = puVar5;
        *puVar5 = puVar2;
        puVar4[1] = puVar2;
code_r0x0001231b:
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00017e10 @ 0x17e10 */

char * fcn.00017e10(uint32_t arg1)

{
    int16_t iVar1;
    char *pcVar2;
    int16_t *piVar3;
    uint in_register_0000000c;
    int16_t *piVar4;
    char *pcVar5;
    char cVar6;
    int64_t iVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    
    piVar4 = CONCAT44(in_register_0000000c,arg1);
    iVar8 = 0;
    iVar1 = *piVar4;
    piVar3 = piVar4;
    iVar7 = iVar8;
    while (iVar1 != 0) {
        piVar3 = piVar3 + 1;
        iVar7 = iVar7 + 1;
        iVar1 = *piVar3;
    }
    if ((iVar7 + 2U < 0x100) && (pcVar2 = fcn.00016d00(iVar7 + 2U), pcVar2 != NULL)) {
        pcVar5 = pcVar2 + 1;
        cVar6 = '\0';
        pcVar9 = pcVar2;
        if (*piVar4 != 0) {
            piVar3 = piVar4;
            iVar7 = iVar8;
            iVar10 = iVar8;
            do {
                iVar1 = *piVar3;
                *pcVar5 = iVar1;
                if (iVar1 == '.') {
                    *pcVar9 = iVar7;
                    iVar7 = iVar8;
                    pcVar9 = pcVar5;
                }
                else {
                    iVar7 = iVar7 + 1;
                }
                cVar6 = iVar7;
                iVar10 = iVar10 + 1;
                pcVar5 = pcVar5 + 1;
                piVar3 = piVar4 + iVar10;
            } while (*piVar3 != 0);
        }
        *pcVar9 = cVar6;
        *pcVar5 = '\0';
    }
    else {
        pcVar2 = NULL;
    }
    return pcVar2;
}


/* fcn.00013214 @ 0x13214 */

ulong fcn.00013214(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    uint16_t uVar5;
    int64_t arg3_00;
    int64_t *in_stack_00000028;
    int aiStack_28 [2];
    uint16_t *puStack_20;
    
    puVar3 = fcn.00016cd0();
    iVar4 = 0;
    if (puVar3 != NULL) {
        puStack_20 = puVar3;
        iVar2 = fcn.00017414();
        puVar3[1] = 1;
        puVar3[2] = 0x100;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        uVar5 = (iVar2 * 0x41c64e6d + 0x3039) % 0xffffffff;
        *puVar3 = uVar5 << 8 | uVar5 >> 8;
        cVar1 = *arg2;
        arg3_00 = iVar4;
        while (cVar1 != '\0') {
            arg3_00 = arg3_00 + 1;
            cVar1 = *(arg3_00 + arg2);
        }
        if ((arg3_00 != 0) && (puVar3 + 6 != arg2)) {
            section..text(puVar3 + 6,arg2,arg3_00);
        }
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar4 = iVar4 + 1;
            cVar1 = *(iVar4 + arg2);
        }
        aiStack_28[0] = iVar4;
        *(aiStack_28[0] + 0xc + puVar3) = 0;
        *(aiStack_28[0] + 0xd + puVar3) = arg3 << 8 | arg3 >> 8;
        *(aiStack_28[0] + 0xd + 2 + puVar3) = arg4 << 8 | arg4 >> 8;
        aiStack_28[0] = aiStack_28[0] + 0x11;
        iVar4 = fcn.00018038(aiStack_28,1,arg3_00,0);
        *in_stack_00000028 = iVar4;
        if (iVar4 != 0) {
            *(iVar4 + 0x38) = *(arg1 + 0x168);
            return 0;
        }
        (**(*0x196c8 + 0x48))(puStack_20);
    }
    return 0x8000000000000009;
}


/* fcn.00017580 @ 0x17580 */

ulong fcn.00017580(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.00017518(arg1);
    if (piVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        piVar2[2] = arg2;
        piVar2[3] = arg3;
        *piVar2 = arg1;
        piVar1 = *(arg1 + 8);
        piVar2[1] = piVar1;
        *piVar1 = piVar2;
        *(arg1 + 8) = piVar2;
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000131c0 @ 0x131c0 */

void fcn.000131c0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t in_R9;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((*(*(iVar2 + 0x168) + 0x2e0) == 0) && (arg3 = iVar2, iVar1 = fcn.00018d50(*(iVar2 + 0x168)), iVar1 < 0)) {
        return;
    }
    *(arg2 + 8) = *(arg2 + 8) + 1;
    fcn.00018b64(*(iVar2 + 0x168),arg2,arg3,in_R9);
    return;
}


/* fcn.00011a38 @ 0x11a38 */

ulong fcn.00011a38(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 != arg2) {
        section..text(arg1_00,arg2,0x28);
    }
    uVar4 = 0;
    *(arg1_00 + 0x18) = 0;
    if (*(arg2 + 0x18) != 0) {
        iVar1 = fcn.00016cd0();
        *(arg1_00 + 0x18) = iVar1;
        if (iVar1 == 0) {
            fcn.000102c0(arg1_00,0x28);
            return 0x8000000000000009;
        }
        if (*(arg2 + 0x14) != 0) {
            do {
                iVar2 = *(arg2 + 0x18) + uVar4 * 0x10;
                iVar1 = uVar4 * 0x10 + *(arg1_00 + 0x18);
                if (iVar1 != iVar2) {
                    section..text(iVar1,iVar2,0x10);
                }
                uVar3 = uVar4 + 1;
                uVar4 = uVar3;
            } while (uVar3 < *(arg2 + 0x14));
        }
    }
    return 0;
}


/* fcn.00015b54 @ 0x15b54 */

int64_t fcn.00015b54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint *puVar2;
    int64_t iVar3;
    int64_t iStackX_18;
    ulong in_stack_ffffffffffffff70;
    uint uVar4;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    int64_t iStack_40;
    ulong uStack_38;
    
    uVar4 = in_stack_ffffffffffffff70 >> 0x20;
    iStack_60 = 0;
    iStack_68 = 0;
    iStackX_18 = 0;
    fcn.000102c0(&iStack_40,0x10);
    iStack_58 = 0;
    iStack_40 = arg3;
    fcn.000179a0(arg2,200000000,&iStack_58);
    if (iStack_58 != 0) {
        return -0x7ffffffffffffff4;
    }
    iVar1 = fcn.00017640(arg2,arg1,0x18e40,&iStack_60);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = (**(*0x196c8 + 0x118))(iStack_60,0x18e80,&iStack_68,arg1,arg2,CONCAT44(uVar4,0x10));
    if (iVar1 < 0) goto code_r0x00015d89;
    puVar2 = fcn.00016d00(6);
    if (puVar2 == NULL) {
        iVar1 = -0x7ffffffffffffff7;
        goto code_r0x00015d89;
    }
    *puVar2 = 0x2000600;
    *(puVar2 + 5) = 0x17;
    uStack_50 = 4;
    uStack_4c = 1;
    uStack_48 = 10;
    uStack_44 = 0x1e;
    iVar1 = (**(iStack_68 + 0x18))(iStack_68,1,puVar2,0,0,&uStack_50,0,0x15340,&iStack_40);
    if (iVar1 == -0x7fffffffffffffef) {
        iVar1 = (**(*0x196c8 + 0x50))(0x80000000,8,0,0,&iStackX_18);
        if ((-1 < iVar1) && (iVar1 = (**(*0x196c8 + 0x58))(iStackX_18,2,50000000), -1 < iVar1)) {
            do {
                iVar3 = (**(*0x196c8 + 0x78))(iStackX_18);
                if (-1 < iVar3) {
                    iVar1 = (**(iStack_68 + 0x18))(iStack_68,1,puVar2,0,0,&uStack_50,0,0x15340,&iStack_40);
                }
            } while (iVar3 == -0x7ffffffffffffffa);
            goto code_r0x00015d74;
        }
    }
    else {
code_r0x00015d74:
        *arg4 = uStack_38;
    }
    (**(*0x196c8 + 0x48))(puVar2);
code_r0x00015d89:
    if (iStackX_18 != 0) {
        (**(*0x196c8 + 0x70))();
    }
    if (iStack_68 != 0) {
        (**(*0x196c8 + 0x120))(iStack_60,0x18e80,arg1,arg2);
    }
    fcn.0001768c(arg2,arg1,0x18e40,iStack_60);
    return iVar1;
}


/* fcn.00011db8 @ 0x11db8 */

int64_t fcn.00011db8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int32_t var_40h;
    int8_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int64_t var_30h;
    int16_t var_20h;
    int64_t var_1eh;
    int16_t var_eh;
    
    var_20h = *(arg1 + 0xf2);
    var_40h = 0;
    var_38h = 0;
    var_34h = 0;
    var_eh = 0x35;
    var_3ch = -0x80;
    if (&var_30h != arg1 + 0xe2) {
        section..text(&var_30h,arg1 + 0xe2,0x10);
    }
    if (&var_1eh != arg1 + 0x108) {
        section..text(&var_1eh,arg1 + 0x108,0x10);
    }
    iVar2 = (**(*(arg2 + 0x2e8) + 8))(*(arg2 + 0x2e8),&var_40h);
    if ((iVar2 == -0x7fffffffffffffef) && (cVar1 = fcn.00011b84(arg1,arg2,&var_40h), cVar1 != '\0')) {
        return 0;
    }
    return iVar2;
}


/* fcn.00016e54 @ 0x16e54 */

ulong fcn.00016e54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.00016dc0(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00016f59:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x00016f4f:
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
code_r0x00016f67:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00016f67;
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
                            goto code_r0x00016f4f;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00016f59;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00015ee0 @ 0x15ee0 */

void fcn.00015ee0(int64_t noname_0,int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00015f44(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00015f44 @ 0x15f44 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00015f44(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00015fa3;
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
code_r0x00015fa3:
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
        uVar21 = fcn.00015ebc(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.00015df8(arg4,0xf4241);
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
            pcVar8 = 0x19274;
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
code_r0x0001635e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x19274;
            }
            else {
                pcVar8 = 0x19278;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x000160f5:
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
                    goto code_r0x00016298;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000162af;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x00016298;
                        }
                        goto code_r0x000162af;
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
code_r0x00016298:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x000160f5;
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
                        goto code_r0x000160f5;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000162af;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x00016298;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000162af:
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
                        fcn.00016cac(&var_68h_2,0x26,0,0x19208);
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
                            goto code_r0x0001635e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00016547;
                        if (uStack_a8 == 0x58) goto code_r0x0001663c;
                        if (uStack_a8 == 0x61) goto code_r0x00016550;
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
                            goto code_r0x000160d6;
                        }
                        if (uStack_a8 != 100) goto code_r0x000160d2;
                        goto code_r0x00016653;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x19274;
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
                goto code_r0x00016880;
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
                            iVar12 = 0x1930b;
                            goto code_r0x00016603;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00016603:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x00016880;
                    }
                    fcn.00016cac(&var_68h_2,0x26,0,0x1926c);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00016547:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00016550:
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
                        goto code_r0x00016880;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x000160d2;
                            goto code_r0x00016640;
                        }
                        goto code_r0x00016645;
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
                        goto code_r0x00016880;
                    }
                    fcn.00016cac(&var_68h_2,0x26,0,0x19250);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x00016880;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x0001663c:
            uVar21 = uVar21 | 0x20;
code_r0x00016640:
            uVar21 = uVar21 | 0x80;
code_r0x00016645:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00016653:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x00016695;
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
code_r0x00016695:
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
code_r0x0001671d:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x0001671d;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = "0123456789ABCDEF%"[uVar10 % uVar16];
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
code_r0x000160d2:
            pcVar8 = &uStack_a8;
code_r0x000160d6:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x00016880:
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
                arg1 = fcn.00015f10(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00015f10(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.00015f10(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.00015f10(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00016f8c @ 0x16f8c */

ulong fcn.00016f8c(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

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
code_r0x000171ab:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x000171ab;
            if (arg4 == '\0') {
                iVar7 = fcn.00016dc0(arg2,arg1);
                if (iVar7 == 0) {
code_r0x0001700d:
                    uVar12 = uVar11;
                    puVar5 = *0x196b8;
                    if (*0x196b8 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x000170b3:
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
                                if (cVar3 == '\0') goto code_r0x000170b9;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x000170b3;
                            }
code_r0x000170b9:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00016cd0();
                    if (puVar5 != NULL) {
                        if (((*0x196b8 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x196b8)) {
                            arg2 = puVar5;
                            section..text(puVar5,*0x196b8,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.00016d2c(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00016d2c(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x196b8 != NULL) {
                                    (**(*0x196c8 + 0x48))();
                                }
                                *0x196b8 = puVar5;
                                return 0;
                            }
                            (**(*0x196c8 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x196c8 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x0001700d;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00017c54 @ 0x17c54 */

ulong fcn.00017c54(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t noname_1;
    ushort *noname_0;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint16_t auStack_78 [8];
    ushort auStack_68 [40];
    
    uVar5 = 0;
    if (arg2 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        fcn.000102c0(auStack_78,0x10);
        uVar2 = uVar5;
        do {
            uVar7 = uVar2 + 1;
            puVar1 = auStack_78 + (uVar2 & 0xfffffffffffffffe);
            *puVar1 = *puVar1 | *(uVar2 + arg1) << ((uVar2 & 1) * -8 + 8 & 0x1f);
            uVar2 = uVar7;
        } while (uVar7 < 0x10);
        uVar7 = 0xffffffffffffffff;
        uVar6 = 0xffffffffffffffff;
        uVar2 = uVar5;
        noname_1 = uVar5;
        uVar8 = uVar5;
        do {
            if (auStack_78[noname_1] == 0) {
                if (uVar7 == 0xffffffffffffffff) {
                    uVar2 = 1;
                    uVar7 = noname_1;
                }
                else {
                    uVar2 = uVar2 + 1;
                }
            }
            else if (uVar7 != 0xffffffffffffffff) {
                if ((2 < uVar2) && ((uVar6 == 0xffffffffffffffff || (uVar8 < uVar2)))) {
                    uVar6 = uVar7;
                    uVar8 = uVar2;
                }
                uVar7 = 0xffffffffffffffff;
                uVar2 = uVar5;
            }
            noname_1 = noname_1 + 1;
        } while (noname_1 < 8);
        if (((uVar7 != 0xffffffffffffffff) && (2 < uVar2)) && ((uVar6 == 0xffffffffffffffff || (uVar8 < uVar2)))) {
            uVar6 = uVar7;
            uVar8 = uVar2;
        }
        noname_0 = auStack_68;
        do {
            if (((uVar6 == 0xffffffffffffffff) || (uVar5 < uVar6)) || (uVar8 + uVar6 <= uVar5)) {
                if (uVar5 != 0) {
                    *noname_0 = 0x3a;
                    noname_0 = noname_0 + 1;
                }
                noname_1 = 10;
                iVar3 = fcn.00015ee0(noname_0,10,0x195f0,auStack_78[uVar5]);
                noname_0 = noname_0 + iVar3;
            }
            else if (uVar5 == uVar6) {
                *noname_0 = 0x3a;
                noname_0 = noname_0 + 1;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 8);
        if ((uVar6 != 0xffffffffffffffff) && (uVar8 + uVar6 == 8)) {
            *noname_0 = 0x3a;
            noname_0 = noname_0 + 1;
        }
        *noname_0 = 0;
        if (noname_0 - auStack_68 < 0x51) {
            fcn.00015e24(arg2,noname_1,auStack_68);
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000005;
        }
    }
    return uVar4;
}


/* fcn.00016d6c @ 0x16d6c */

ulong fcn.00016d6c(uint32_t arg1,int64_t arg2,int64_t arg3)

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
    (**(*0x196c8 + 0x48))(*arg2);
    return uVar2;
}


/* fcn.00014f70 @ 0x14f70 */

int64_t fcn.00014f70(int64_t arg1)

{
    int64_t iVar1;
    uchar *puVar2;
    uchar auStack_1a8 [2];
    uchar auStack_1a6 [46];
    int64_t iStack_178;
    int64_t iStack_168;
    uchar auStack_158 [80];
    uchar auStack_108 [264];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**arg1)(arg1,auStack_1a8);
        if (-1 < iVar1) {
            iVar1 = fcn.00017c54(auStack_1a6,auStack_158);
            if (-1 < iVar1) {
                puVar2 = auStack_158;
                fcn.00015ee0(auStack_108,0x100,0x191a0,puVar2);
                if (iStack_168 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (iStack_178 != 0) {
                    (**(*0x196c8 + 0x48))();
                }
                if (*0x196b8 != 0) {
                    fcn.000171c8();
                    *0x196b8 = 0;
                }
                iVar1 = fcn.00016f8c(0x190f0,*0x19090,auStack_108,CONCAT71(puVar2 >> 8,1));
                if (-1 < iVar1) {
                    iVar1 = fcn.00016f8c(0x190f4,*0x190a8,auStack_108,0);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00014e74 @ 0x14e74 */

int64_t fcn.00014e74(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStack_f8 [19];
    uint8_t uStack_e5;
    int64_t iStack_c8;
    int64_t iStack_b8;
    uchar auStack_a8 [168];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = (**arg1)(arg1,auStack_f8);
        if (-1 < iVar1) {
            uVar2 = 0;
            fcn.00015ee0(auStack_a8,0xa0,0x19140,uStack_e5);
            if (iStack_b8 != 0) {
                (**(*0x196c8 + 0x48))();
            }
            if (iStack_c8 != 0) {
                (**(*0x196c8 + 0x48))();
            }
            if (*0x196b8 != 0) {
                fcn.000171c8();
                *0x196b8 = 0;
            }
            iVar1 = fcn.00016f8c(0x190f0,*0x19090,auStack_a8,CONCAT71(uVar2 >> 8,1));
            if (-1 < iVar1) {
                iVar1 = fcn.00016f8c(0x190f4,*0x190a8,auStack_a8,0);
            }
        }
    }
    return iVar1;
}


/* fcn.000179a0 @ 0x179a0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000179a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uStackX_18;
    ulong *puStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    ulong uStack_48;
    ulong *puStack_40;
    uchar auStack_38 [16];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    *arg3 = 0;
    puStackX_20 = NULL;
    uStackX_18 = 0;
    iVar1 = fcn.000176d8(arg1,&uStackX_18);
    if (iVar1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = (**(*0x196c8 + 0x98))(iVar1,0x18e70,&puStack_40);
    if (-1 < iVar1) {
        iVar1 = (**puStack_40)(puStack_40,0x18f20,&puStackX_20,auStack_38);
        if (-1 < iVar1) {
            *arg3 = *puStackX_20;
            (**(*0x196c8 + 0x48))();
            if ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2)) {
                uStack_48 = 0;
                iVar1 = (**(*0x196c8 + 0x50))(0x80000000,8,0,0,&uStack_48);
                if (iVar1 < 0) {
                    return -0x7ffffffffffffff9;
                }
                do {
                    iVar1 = (**(*0x196c8 + 0x58))(uStack_48,2,1000000);
                    if (iVar1 < 0) {
                        iVar1 = -0x7ffffffffffffff9;
code_r0x00017b96:
                        (**(*0x196c8 + 0x70))(uStack_48);
                        return iVar1;
                    }
                    do {
                        iVar2 = (**(*0x196c8 + 0x78))(uStack_48);
                        if (-1 < iVar2) {
                            arg2 = arg2 - 1000000;
                            iVar1 = (**puStack_40)(puStack_40,0x18f20,&puStackX_20,auStack_38);
                            if (iVar1 < 0) {
                                if (puStackX_20 != NULL) {
                                    (**(*0x196c8 + 0x48))();
                                }
                                goto code_r0x00017b96;
                            }
                            *arg3 = *puStackX_20;
                            (**(*0x196c8 + 0x48))();
                        }
                    } while (iVar2 == -0x7ffffffffffffffa);
                } while ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2));
                (**(*0x196c8 + 0x70))(uStack_48);
                if ((*arg3 == -0x7ffffffffffffffa) && (arg2 < 1000000)) {
                    return -0x7fffffffffffffee;
                }
            }
            return 0;
        }
        if (puStackX_20 != NULL) {
            (**(*0x196c8 + 0x48))();
        }
        if (iVar1 != -0x7ffffffffffffffd) {
            return iVar1;
        }
    }
    uStackX_18 = CONCAT71(uStackX_18._1_7_,1);
    iVar1 = fcn.000177a0(arg1,&uStackX_18);
    if (-1 < iVar1) {
        *arg3 = ~-(uStackX_18 != '\0') & 0x800000000000000c;
    }
    return iVar1;
}


/* fcn.00017640 @ 0x17640 */

void fcn.00017640(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *apuStack_18 [2];
    
    iVar1 = (**(*0x196c8 + 0x118))(arg1,arg3,apuStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**apuStack_18[0])(apuStack_18[0],arg4);
    }
    return;
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


/* fcn.000151e4 @ 0x151e4 */

ulong fcn.000151e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    char *pcVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t uVar7;
    int64_t arg1_00;
    uint32_t uVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint32_t auStackX_8 [2];
    
    auStackX_8[0] = 0;
    iVar3 = (**(arg1 + 0x40))(arg1,arg2,auStackX_8,0);
    if (iVar3 == -0x7ffffffffffffffb) {
        iVar3 = fcn.00016cd0(0x8000000000000005,auStackX_8[0] << 3);
        if (iVar3 == 0) {
code_r0x00015248:
            uVar4 = 0x8000000000000009;
        }
        else {
            iVar5 = (**(arg1 + 0x40))(arg1,arg2,auStackX_8,iVar3);
            if (iVar5 < 0) {
code_r0x0001530e:
                uVar4 = 0x8000000000000007;
            }
            else {
                uVar9 = 0;
                uVar4 = 0x800000000000000e;
                uVar7 = auStackX_8[0];
                if (auStackX_8[0] != 0) {
                    do {
                        pcVar2 = *(iVar3 + uVar9 * 8);
                        if (*pcVar2 == '\x06') {
                            uVar1 = pcVar2[1];
                            if (((uVar1 & 3) != 0) || (uVar1 == 0)) goto code_r0x0001530e;
                            uVar7 = uVar1 >> 2;
                            uVar11 = uVar7;
                            iVar5 = fcn.00016cd0(pcVar2,uVar7 << 2);
                            if (iVar5 == 0) goto code_r0x00015248;
                            if (uVar1 >> 2 != 0) {
                                iVar10 = 0;
                                arg1_00 = iVar5;
                                do {
                                    iVar6 = *(iVar3 + uVar9 * 8) + 2 + iVar10;
                                    if (arg1_00 != iVar6) {
                                        section..text(arg1_00,iVar6,4);
                                    }
                                    iVar10 = iVar10 + 4;
                                    arg1_00 = arg1_00 + 4;
                                    uVar11 = uVar11 - 1;
                                } while (uVar11 != 0);
                            }
                            **arg3 = uVar7;
                            uVar4 = 0;
                            *(arg3 + 8) = iVar5;
                            uVar7 = auStackX_8[0];
                        }
                        uVar8 = uVar9 + 1;
                        uVar9 = uVar8;
                    } while (uVar8 < uVar7);
                }
            }
            (**(*0x196c8 + 0x48))(iVar3);
        }
    }
    else {
        uVar4 = 0x8000000000000007;
    }
    return uVar4;
}


/* fcn.0001768c @ 0x1768c */

void fcn.0001768c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x196c8 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.00015df8 @ 0x15df8 */

uint64_t fcn.00015df8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
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


/* fcn.00015ebc @ 0x15ebc */

uint64_t fcn.00015ebc(uint32_t arg1)

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


/* fcn.00016cac @ 0x16cac */

void fcn.00016cac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00015f44(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00015f10 @ 0x15f10 */

uchar * fcn.00015f10(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00016dc0 @ 0x16dc0 */

ulong fcn.00016dc0(int64_t arg1,int64_t arg2)

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
code_r0x00016e20:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00016e20;
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


/* fcn.00016d2c @ 0x16d2c */

void fcn.00016d2c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00016cd0();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00010698 @ 0x10698 */

ulong fcn.00010698(int64_t arg1,int64_t arg2)

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
                if (*(arg1 + 0xa8) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x000106da. Too many branches
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


/* fcn.00017518 @ 0x17518 */

int64_t * fcn.00017518(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.00016cd0(arg1,0x20);
            if (piVar2 == NULL) {
                if (uVar3 == 0) {
                    return NULL;
                }
                break;
            }
            arg1 = *piVar1;
            uVar3 = uVar3 + 1;
            *piVar2 = arg1;
            piVar2[1] = piVar1;
            *(arg1 + 8) = piVar2;
            *piVar1 = piVar2;
        } while (uVar3 < 0x40);
    }
    piVar2 = *piVar1;
    if (piVar2 != piVar1) {
        *piVar1 = *piVar2;
        *(*piVar2 + 8) = piVar1;
    }
    return piVar2;
}


/* fcn.00018de0 @ 0x18de0 */

ulong fcn.00018de0(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x196c8 + 0x98))(param_1,0x18ea0,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.000176d8 @ 0x176d8 */

int64_t fcn.000176d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x196c8 + 0x98))(arg1,0x18eb0,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.00018de0(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x196c8 + 0xb8))(0x18eb0,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x196c8 + 0x98))(iStackX_20,0x18eb0,&uStackX_18), -1 < iVar1)) {
                if (arg2 != 0) {
                    *arg2 = uStackX_18;
                }
                return iStackX_20;
            }
        }
        arg1 = 0;
    }
    else if (arg2 != 0) {
        *arg2 = uStackX_18;
    }
    return arg1;
}


/* fcn.000177a0 @ 0x177a0 */

int64_t fcn.000177a0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uchar uVar9;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    
    iVar7 = 0;
    iStackX_20 = 0;
    iVar5 = fcn.000176d8(arg1,&iStackX_20);
    iVar8 = iStackX_20;
    if (iVar5 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (*(*(iStackX_20 + 0x78) + 0x28b) == '\0') {
        return -0x7ffffffffffffffd;
    }
    iVar5 = iStackX_20;
    iVar6 = (**(iStackX_20 + 0x58))(iStackX_20,auStackX_18,0);
    if (iVar6 < 0) {
        return iVar6;
    }
    puVar4 = *(iVar8 + 0x78);
    if (puVar4[0xa3] == '\0') {
        uVar1 = *puVar4;
        if (2 < uVar1) {
            return -0x7ffffffffffffff9;
        }
        if (uVar1 == 2) {
            uVar1 = puVar4[6];
            uVar2 = puVar4[7];
            uVar3 = puVar4[9];
            uVar9 = 1;
            if ((uVar3 != 0) && (iVar7 = fcn.00016d2c(iVar5,uVar3 << 5,puVar4 + 10), uVar9 = 0, iVar7 == 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar5 = (**(iVar8 + 0x28))(iVar8);
            if ((((-1 < iVar5) && (iVar5 = (**(iVar8 + 0x10))(iVar8), -1 < iVar5)) &&
                (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) && (iVar5 = (**(iVar8 + 0x18))(iVar8,0,0), -1 < iVar5)
               ) {
                *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                iVar8 = (**(iVar8 + 0x30))(iVar8,uVar2,uVar1 ^ uVar2,uVar9,uVar3,iVar7);
                if (iVar7 != 0) {
                    (**(*0x196c8 + 0x48))(iVar7);
                }
                return iVar8;
            }
        }
        else {
            if ((uVar1 != 0) || (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) {
                iVar5 = (**(iVar8 + 0x18))(iVar8,0,0);
                if (iVar5 < 0) {
                    iVar5 = -0x7ffffffffffffff9;
                }
                else {
                    *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                    (**(iVar8 + 0x28))(iVar8);
                }
                if (uVar1 != 0) {
                    return iVar5;
                }
            }
            (**(iVar8 + 0x10))(iVar8);
        }
        if (iVar7 != 0) {
            (**(*0x196c8 + 0x48))(iVar7);
        }
        return iVar5;
    }
    *arg2 = 1;
    return 0;
}


/* fcn.00015e24 @ 0x15e24 */

ulong fcn.00015e24(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0x28;
    uVar2 = fcn.00015df8(arg2,0x28);
    if (uVar3 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg2 <= arg1) {
        if (arg1 < arg2 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg2 < arg1) goto code_r0x00015e91;
    }
    if (arg2 < arg1 + 0x50) {
        return 0x800000000000000f;
    }
code_r0x00015e91:
    iVar1 = *arg2;
    if (iVar1 != 0) {
        arg2 = arg2 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg2 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00017ea4 @ 0x17ea4 */

uint * fcn.00017ea4(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.00016d00((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x00017f36;
        puVar2 = fcn.00016d00(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x00017f36;
        }
        (**(*0x196c8 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x00017f36:
    return puVar1;
}


/* fcn.000172ec @ 0x172ec */

//WARNING: Variable defined which should be unmapped: var_20h

uint64_t * fcn.000172ec(uint32_t arg1)

{
    uint64_t *arg1_00;
    uint16_t uVar1;
    uint in_register_0000000c;
    uint64_t *arg1_01;
    uint16_t uVar2;
    uint16_t uVar3;
    uint64_t uStackX_8;
    uint64_t uStackX_10;
    int64_t var_20h;
    int64_t var_28h;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (&uStackX_10 != arg1_01) {
        section..text(&uStackX_10,arg1,8);
    }
    arg1_00 = arg1_01 + 1;
    if (&uStackX_8 != arg1_00) {
        section..text(&uStackX_8,arg1_00,8);
    }
    uVar1 = uStackX_10 >> 0x10;
    uVar2 = uStackX_10 >> 0x20;
    uVar3 = uStackX_10 >> 0x30;
    uStackX_10 = CONCAT62(CONCAT42(CONCAT22(uStackX_10 << 8 | uStackX_10 >> 8,uVar1 << 8 | uVar1 >> 8),
                                   uVar2 << 8 | uVar2 >> 8),uVar3 << 8 | uVar3 >> 8);
    uVar1 = uStackX_8 >> 0x10;
    uVar2 = uStackX_8 >> 0x20;
    uVar3 = uStackX_8 >> 0x30;
    uStackX_8 = CONCAT22(uStackX_8 << 8 | uStackX_8 >> 8,uVar1 << 8 | uVar1 >> 8) << 0x20 |
                (uVar2 << 8 | uVar2 >> 8) << 0x10 | uVar3 << 8 | uVar3 >> 8;
    if (arg1_01 != &uStackX_8) {
        section..text(arg1_01,&uStackX_8,8);
    }
    if (arg1_00 != &uStackX_10) {
        section..text(arg1_00,&uStackX_10,8);
    }
    return arg1_01;
}


/* fcn.00018354 @ 0x18354 */

void fcn.00018354(int64_t arg1)

{
    char cVar1;
    
    cVar1 = *(*(arg1 + 8) + 0x20);
    if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
        (**(*0x196c8 + 0x70))(*(arg1 + 0x28));
    }
    //WARNING: Could not recover jumptable at 0x0001838b. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x196c8 + 0x48))(arg1);
    return;
}


/* fcn.000182e0 @ 0x182e0 */

ulong fcn.000182e0(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint in_R8;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar5 = 0;
    if (*(iVar1 + 0x80) != 0) {
        do {
            if (*(iVar1 + 0xa8 + uVar5 * 0x28) != 0) {
                if (*CONCAT44(in_R8,arg3) <= uVar3) {
                    return 0x8000000000000005;
                }
                uVar2 = uVar3;
                uVar3 = uVar3 + 1;
                *(arg2 + 8 + uVar2 * 0x10) = *(iVar1 + 0x98 + uVar5 * 0x28);
                *(arg2 + uVar2 * 0x10) = *(iVar1 + 0xa8 + uVar5 * 0x28);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *(iVar1 + 0x80));
    }
    *CONCAT44(in_R8,arg3) = uVar3;
    return 0;
}


/* fcn.000186d4 @ 0x186d4 */

uint * fcn.000186d4(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint *puVar1;
    int64_t iVar2;
    
    puVar1 = fcn.00016cd0(arg1,0x40);
    if (puVar1 != NULL) {
        puVar1[8] = 0;
        *puVar1 = 0x52504455;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 6) = arg2;
        *(puVar1 + 4) = 0x130e4;
        *(puVar1 + 0xe) = 0;
        *(puVar1 + 0xc) = 0x8000000000000006;
        iVar2 = (**(*0x196c8 + 0x50))(0x200,0x10,0x186b8,puVar1,puVar1 + 10);
        if (-1 < iVar2) {
            return puVar1;
        }
        (**(*0x196c8 + 0x48))(puVar1);
    }
    return NULL;
}


