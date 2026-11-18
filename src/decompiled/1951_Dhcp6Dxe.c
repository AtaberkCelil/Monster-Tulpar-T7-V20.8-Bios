// decompiled by r2ghidra: 1951_Dhcp6Dxe.pe32
// functions: 77

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    fcn.00010530(arg1,in_RDX);
    arg2 = 0x16f20;
    (**(*0x174c0 + 0x98))(arg1,0x16f20,aiStackX_18);
    *(aiStackX_18[0] + 0x58) = 0x10364;
    fcn.00010600(arg1,arg2);
    return;
}


/* fcn.00010530 @ 0x10530 */

void fcn.00010530(ulong noname_0,int64_t arg1)

{
    *0x174c0 = *(arg1 + 0x60);
    *0x174c8 = *(arg1 + 0x58);
    *0x174b8 = arg1;
    (**(*0x174c0 + 0x140))(0x17000,0,0x174d0);
    (**(*0x174c0 + 0x140))(0x16fe0,0,0x174f0);
    (**(*0x174c0 + 0x140))(0x16fa0,0,0x174e0);
    (**(*0x174c0 + 0x140))(0x17090,0,0x174d8);
    (**(*0x174c0 + 0x140))(0x16fc0,0,0x174e8);
    //WARNING: Could not recover jumptable at 0x000105f7. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x174c0 + 0x140))(0x17070,0,0x174f8);
    return;
}


/* fcn.00010600 @ 0x10600 */

ulong fcn.00010600(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    iVar1 = (**(*0x174c8 + 0x48))(L"NetworkStackVar",0x17080,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x170d0 = arg1;
        *0x170d8 = arg1;
        uVar2 = (**(*0x174c0 + 0x148))(0x170d8,0x17040,0x170b0,0x17060,0x170f8,0x16f40,0x170e0,0);
    }
    return uVar2;
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


/* fcn.0001512c @ 0x1512c */

void fcn.0001512c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000150fc(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.000150fc @ 0x150fc */

ulong fcn.000150fc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x174c0 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.0001586c @ 0x1586c */

int64_t fcn.0001586c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x174c0 + 0x98))(arg1,0x16f90,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.00016ee0(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x174c0 + 0xb8))(0x16f90,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x174c0 + 0x98))(iStackX_20,0x16f90,&uStackX_18), -1 < iVar1)) {
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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 27808 named .text
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


/* fcn.00011298 @ 0x11298 */

uint16_t * fcn.00011298(int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    uint16_t *puVar3;
    uint32_t *arg1_00;
    ulong in_RDX;
    uint32_t *puVar4;
    uint16_t uVar5;
    int iVar6;
    uint64_t arg3;
    int64_t in_R9;
    int64_t var_bp_18h;
    int64_t var_bp_20h;
    uint32_t var_10h;
    uint32_t var_bp_8h;
    
    fcn.00015578(arg1,in_RDX,&var_bp_18h,in_R9);
    if (var_bp_18h != 0) {
        return var_bp_18h;
    }
    iVar2 = fcn.00015d78(&var_10h);
    if ((iVar2 < 0) || ((_var_10h == *0x174a0 && (_var_bp_8h == *0x174a8)))) {
        (**(*0x174c8 + 0x18))(&var_bp_20h,0);
        iVar6 = var_bp_20h._6_1_ + 0x83f46180 +
                ((var_bp_20h._4_1_ +
                 ((var_bp_20h._2_1_ + (var_bp_20h + var_bp_20h * 2) * 4) * 0x1e + var_bp_20h._3_1_) * 0x18) * 0x3c +
                var_bp_20h._5_1_) * 0x3c;
        puVar3 = fcn.0001512c(*(arg1 + 4) + 10);
        if (puVar3 == NULL) {
            return NULL;
        }
        puVar4 = arg1 + 0x228;
        *puVar3 = *(arg1 + 4) + 8;
        uVar1 = iVar6 >> 0x10;
        uVar5 = iVar6;
        puVar3[1] = 0x100;
        puVar3[2] = 0x100;
        *(puVar3 + 3) = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar1 << 8 | uVar1 >> 8);
        arg1_00 = puVar3 + 5;
        arg3 = *(arg1 + 4);
        if ((arg3 == 0) || (arg1_00 == puVar4)) goto code_r0x000113da;
    }
    else {
        puVar3 = fcn.0001512c(0x14);
        if (puVar3 == NULL) {
            return NULL;
        }
        arg1_00 = puVar3 + 2;
        puVar3[0] = 0x12;
        puVar3[1] = 0x400;
        if (arg1_00 == &var_10h) goto code_r0x000113da;
        arg3 = 0x10;
        puVar4 = &var_10h;
    }
    section..text(arg1_00,puVar4,arg3);
code_r0x000113da:
    iVar2 = (**(*0x174c8 + 0x58))(L"ClientId",94000,3,*puVar3 + 2,puVar3);
    if (iVar2 < 0) {
        (**(*0x174c0 + 0x48))(puVar3);
        return NULL;
    }
    return puVar3;
}


/* fcn.00016a74 @ 0x16a74 */

uint * fcn.00016a74(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    ulong *puVar2;
    uint *arg1_00;
    uint *puVar3;
    int64_t iVar4;
    ulong *apuStackX_18 [2];
    
    apuStackX_18[0] = arg3;
    arg1_00 = fcn.000150fc(arg1,0x328);
    if (arg1_00 != NULL) {
        *(arg1_00 + 8) = 6;
        piVar1 = arg1_00 + 0xe;
        *arg1_00 = 0x49504455;
        puVar3 = arg1_00 + 2;
        *puVar3 = puVar3;
        *(arg1_00 + 4) = puVar3;
        puVar3 = arg1_00 + 0xb4;
        *(arg1_00 + 6) = 1;
        *(arg1_00 + 10) = arg1;
        *(arg1_00 + 0xc) = arg2;
        *puVar3 = puVar3;
        *(arg1_00 + 0xb6) = puVar3;
        iVar4 = *0x174c0;
        *(arg1_00 + 0xb8) = 0;
        *piVar1 = 0;
        iVar4 = (**(iVar4 + 0x118))(arg1,0x17010,apuStackX_18,arg2,arg1,2);
        if ((-1 < iVar4) && (iVar4 = (**apuStackX_18[0])(apuStackX_18[0],piVar1), -1 < iVar4)) {
            iVar4 = (**(*0x174c0 + 0x118))(*piVar1,0x16fd0,arg1_00 + 0xba,arg2,arg1,0x10);
            if (-1 < iVar4) {
                iVar4 = fcn.000106bc(arg1_00);
                if ((-1 < iVar4) &&
                   (puVar2 = *(arg1_00 + 0xba), iVar4 = (**puVar2)(puVar2,0,0,0,arg1_00 + 0x10), -1 < iVar4)) {
                    return arg1_00;
                }
                (**(*0x174c0 + 0x120))(*piVar1,0x16fd0,arg2,arg1);
            }
            fcn.00015820(arg1,arg2,0x17010,*piVar1);
        }
        (**(*0x174c0 + 0x48))(arg1_00);
    }
    return NULL;
}


/* fcn.00013134 @ 0x13134 */

void fcn.00013134(int64_t arg1,uint32_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    if (arg2 < 2) {
        piVar1 = *(arg1 + 0xa0);
        piVar2 = *piVar1;
        while (piVar1 != arg1 + 0xa0) {
            if (*(piVar1[3] + 8) != '\v') {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                (**(*0x174c0 + 0x48))(piVar1[3]);
                (**(*0x174c0 + 0x48))(piVar1);
            }
            piVar1 = piVar2;
            piVar2 = *piVar2;
        }
    }
    if ((arg2 & 0xfffffffd) == 0) {
        piVar1 = *(arg1 + 0xa0);
        piVar2 = *piVar1;
        while (piVar1 != arg1 + 0xa0) {
            if (*(piVar1[3] + 8) == '\v') {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                (**(*0x174c0 + 0x48))(piVar1[3]);
                (**(*0x174c0 + 0x48))(piVar1);
            }
            piVar1 = piVar2;
            piVar2 = *piVar2;
        }
        piVar1 = *(arg1 + 0xb0);
        piVar2 = *piVar1;
        while (piVar1 != arg1 + 0xb0) {
            if (piVar1[5] != 0) {
                (**(*0x174c0 + 0x68))();
            }
            *(*piVar1 + 8) = piVar1[1];
            *piVar1[1] = *piVar1;
            (**(*0x174c0 + 0x48))(piVar1);
            piVar1 = piVar2;
            piVar2 = *piVar2;
        }
    }
    return;
}


/* fcn.00011530 @ 0x11530 */

ulong * fcn.00011530(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if (puVar2[3] != 0) {
        uVar4 = 0;
        if (*(puVar2 + 2) != 0) {
            do {
                if (*(puVar2[3] + uVar4 * 8) != 0) {
                    (**(*0x174c0 + 0x48))();
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < *(puVar2 + 2));
        }
        (**(*0x174c0 + 0x48))(puVar2[3]);
    }
    if (puVar2[7] != 0) {
        (**(*0x174c0 + 0x48))();
    }
    puVar3 = puVar2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return puVar2;
}


/* fcn.00010714 @ 0x10714 */

int64_t fcn.00010714(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg2_00;
    uint *puVar1;
    int64_t iVar2;
    uint *puVar3;
    int aiStackX_18 [2];
    uint16_t uStack_28;
    ushort uStack_25;
    uchar uStack_23;
    uchar uStack_22;
    uint32_t uStack_20;
    
    *arg3 = 0;
    puVar1 = fcn.0001512c(0x68);
    if (puVar1 == NULL) {
        return -0x7ffffffffffffff7;
    }
    arg2_00 = puVar1 + 10;
    *arg2_00 = 0;
    fcn.0001586c(arg1,arg2_00);
    iVar2 = *0x174c8;
    if (*arg2_00 != 0) {
        *puVar1 = 0x53364844;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 4) = arg2;
        (**(iVar2 + 0x18))(&uStack_28);
        (**(*0x174c0 + 0xf0))(aiStackX_18);
        puVar1[0x12] = ((aiStackX_18[0] +
                        (CONCAT31(CONCAT21(uStack_25,uStack_23),uStack_22) ^ uStack_28 << 7 ^ uStack_20)) * 0x41c64e6d
                       + 0x3039) % 0xffffffff & 0xffffff;
        if (puVar1 + 6 != 0x170a0) {
            section..text(puVar1 + 6,0x170a0,0x10);
        }
        puVar3 = puVar1 + 0xc;
        iVar2 = (**(*0x174c0 + 0x98))(arg1,0x16f80);
        if (iVar2 < 0) goto code_r0x00010879;
        iVar2 = fcn.00011298(*(*arg2_00 + 0x78));
        *(puVar1 + 0xe) = iVar2;
        if (iVar2 != 0) {
            iVar2 = fcn.00016a74(arg1,arg2,puVar3);
            *(puVar1 + 0x10) = iVar2;
            if (iVar2 != 0) {
                puVar3 = puVar1 + 0x14;
                *arg3 = puVar1;
                *puVar3 = puVar3;
                *(puVar1 + 0x16) = puVar3;
                return 0;
            }
            (**(*0x174c0 + 0x48))(*(puVar1 + 0xe));
        }
    }
    iVar2 = -0x7ffffffffffffff9;
code_r0x00010879:
    (**(*0x174c0 + 0x48))(puVar1);
    return iVar2;
}


/* fcn.00016c4c @ 0x16c4c */

int64_t fcn.00016c4c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    fcn.00016bf4(arg1);
    iVar2 = *(arg1 + 0x2e0);
    if (*(arg1 + 0x20) == '\x04') {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x30))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x174c0 + 0x120))(*(arg1 + 0x38),0x17050,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x16fb0;
    }
    else {
        if ((iVar2 != 0) && (iVar2 = (**(*(arg1 + 0x2e8) + 0x28))(*(arg1 + 0x2e8),iVar2 + 0x28), iVar2 < 0)) {
            return iVar2;
        }
        iVar2 = (**(*0x174c0 + 0x120))(*(arg1 + 0x38),0x16fd0,*(arg1 + 0x30),*(arg1 + 0x28));
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0x17010;
    }
    iVar2 = fcn.00015820(*(arg1 + 0x28),*(arg1 + 0x30),iVar2,*(arg1 + 0x38));
    if (-1 < iVar2) {
        piVar1 = arg1 + 8;
        if (*piVar1 != piVar1) {
            *(*piVar1 + 8) = *(arg1 + 0x10);
            **(arg1 + 0x10) = *piVar1;
        }
        (**(*0x174c0 + 0x48))(arg1);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.0001575c @ 0x1575c */

//WARNING: Removing unreachable block (ram,0x00015789)

int64_t fcn.0001575c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    iVar1 = 0;
code_r0x000157a4:
    do {
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            if ((puVar4 == NULL) || (arg2 == 0)) {
                iVar3 = -0x7ffffffffffffffe;
            }
            else {
                iVar3 = (**(arg2 + 8))(arg2,puVar4[-2]);
            }
            if (iVar3 < 0) {
                return iVar3;
            }
            for (puVar2 = *arg1; puVar2 != arg1; puVar2 = *puVar2) {
                if (puVar2 == puVar4) goto code_r0x000157e8;
            }
            if (puVar2 != puVar4) goto code_r0x000157a4;
code_r0x000157e8:
        }
        iVar3 = 0;
        for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
            iVar3 = iVar3 + 1;
        }
        bVar5 = iVar3 == iVar1;
        iVar1 = iVar3;
        if (bVar5) {
            if (arg3 != 0) {
                *arg3 = iVar3;
            }
            return 0;
        }
    } while( true );
}


/* fcn.00010960 @ 0x10960 */

int64_t fcn.00010960(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int64_t iVar3;
    
    *arg2 = 0;
    puVar2 = fcn.0001512c(0xf0);
    if (puVar2 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *puVar2 = 0x49364844;
        *(puVar2 + 4) = arg1;
        *(puVar2 + 0x38) = 0x100;
        *(puVar2 + 0x36) = 0x8000000000000014;
        if (puVar2 + 10 != 0x17130) {
            section..text(puVar2 + 10,0x17130,0x48);
        }
        puVar1 = puVar2 + 0x28;
        *puVar1 = puVar1;
        *(puVar2 + 0x2a) = puVar1;
        puVar1 = puVar2 + 0x2c;
        *puVar1 = puVar1;
        *(puVar2 + 0x2e) = puVar1;
        iVar3 = (**(*0x174c0 + 0x50))(0x80000200,8,0x14e54,puVar2,puVar2 + 0x1c);
        if (iVar3 < 0) {
            (**(*0x174c0 + 0x48))(puVar2);
        }
        else {
            *arg2 = puVar2;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.000108b4 @ 0x108b4 */

void fcn.000108b4(int64_t arg1)

{
    fcn.00013134(arg1,0);
    (**(*0x174c0 + 0x70))(*(arg1 + 0x70));
    if (*(arg1 + 0x78) != 0) {
        fcn.00011530(*(arg1 + 0x78));
        (**(*0x174c0 + 0x48))(*(arg1 + 0x78));
    }
    if (*(arg1 + 0x88) != 0) {
        if (*(*(arg1 + 0x88) + 0x10) != 0) {
            (**(*0x174c0 + 0x48))();
        }
        (**(*0x174c0 + 0x48))(*(arg1 + 0x88));
    }
    if (*(arg1 + 0xd0) != 0) {
        (**(*0x174c0 + 0x48))();
    }
    if (*(arg1 + 0xc0) != 0) {
        (**(*0x174c0 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x00010959. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x174c0 + 0x48))(arg1);
    return;
}


/* fcn.00015268 @ 0x15268 */

ulong fcn.00015268(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    char *arg1_00;
    int64_t iVar5;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.000151f8(arg2,arg1);
                if (iVar5 == 0) {
code_r0x0001533b:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
code_r0x00015330:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar5 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar5 = iVar5 + 1;
                                cVar1 = arg1_00[iVar5];
                            }
                            iVar3 = fcn.00016eac(arg1_00,arg1,iVar5);
                            if (iVar3 == 0) {
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            arg1_00 = arg1_00 + iVar5;
                            if (*arg1_00 != '\0') {
                                cVar1 = *arg1_00;
                                pcVar4 = arg1_00;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar4 = pcVar4 + 1;
                                    cVar1 = *pcVar4;
                                } while (cVar1 != '\0');
                            }
                            goto code_r0x00015330;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x0001533b;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.0001536c @ 0x1536c */

ulong fcn.0001536c(uint32_t arg1,uint32_t arg2,ulong noname_2,uint32_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    uint32_t *arg2_00;
    uint32_t *arg1_00;
    uint in_register_00000014;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    uint32_t *puVar9;
    uint in_R9;
    int16_t *arg2_01;
    char *pcVar10;
    char in_stack_00000028;
    
    arg2_01 = CONCAT44(in_R9,arg3);
    arg1_00 = CONCAT44(in_register_00000014,arg2);
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    iVar7 = 0;
    if ((arg2_00 == NULL) || (arg2_01 == NULL)) {
code_r0x0001555b:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg1_00 != NULL) {
            if (*arg2_01 == 0) goto code_r0x0001555b;
            if (in_stack_00000028 == '\0') {
                iVar8 = fcn.000151f8(arg1_00,arg2_00);
                if (iVar8 == 0) {
code_r0x000153f7:
                    iVar8 = iVar7;
                    puVar9 = *0x174b0;
                    if (*0x174b0 != NULL) {
                        for (; pcVar10 = *puVar9, pcVar10 != NULL; puVar9 = puVar9 + 4) {
code_r0x00015469:
                            cVar3 = *pcVar10;
                            if (cVar3 != '\0') {
                                iVar6 = iVar7;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    iVar6 = iVar6 + 1;
                                    cVar3 = pcVar10[iVar6];
                                }
                                arg1_00 = arg2_00;
                                iVar5 = fcn.00016eac(arg2_00,pcVar10,iVar6);
                                if (iVar5 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar10 = pcVar10 + iVar6;
                                cVar3 = *pcVar10;
                                if (cVar3 == '\0') goto code_r0x00015470;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar10 = pcVar10 + 1;
                                    cVar3 = *pcVar10;
                                } while (cVar3 != '\0');
                                goto code_r0x00015469;
                            }
code_r0x00015470:
                            iVar8 = iVar8 + 1;
                        }
                    }
                    puVar9 = fcn.000150fc();
                    if (puVar9 != NULL) {
                        if (((*0x174b0 != NULL) && (iVar8 << 4 != 0)) && (puVar9 != *0x174b0)) {
                            arg1_00 = puVar9;
                            section..text(puVar9,*0x174b0,iVar8 << 4);
                        }
                        cVar3 = *arg2_00;
                        iVar6 = iVar7;
                        while (cVar3 != '\0') {
                            iVar6 = iVar6 + 1;
                            cVar3 = *(iVar6 + arg2_00);
                        }
                        iVar6 = fcn.00015158(arg1_00,iVar6 + 1,arg2_00);
                        *(puVar9 + iVar8 * 4) = iVar6;
                        if (iVar6 != 0) {
                            iVar1 = *arg2_01;
                            piVar2 = arg2_01;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                iVar7 = iVar7 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00015158(arg1_00,iVar7 * 2 + 2,arg2_01);
                            *(puVar9 + iVar8 * 4 + 2) = iVar7;
                            if (iVar7 != 0) {
                                (puVar9 + iVar8 * 4 + 4)[0] = 0;
                                (puVar9 + iVar8 * 4 + 4)[1] = 0;
                                (puVar9 + iVar8 * 4 + 6)[0] = 0;
                                (puVar9 + iVar8 * 4 + 6)[1] = 0;
                                if (*0x174b0 != NULL) {
                                    (**(*0x174c0 + 0x48))();
                                }
                                *0x174b0 = puVar9;
                                return 0;
                            }
                            (**(*0x174c0 + 0x48))(*(puVar9 + iVar8 * 4));
                        }
                        (**(*0x174c0 + 0x48))(puVar9);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg1_00 != '\0') {
                puVar9 = arg1_00;
                do {
                    arg1_00 = *arg2_00 & 0xffffff;
                    if ((*arg2_00 & 0xffffff) == (*puVar9 & 0xffffff)) goto code_r0x000153f7;
                    puVar9 = puVar9 + 3;
                } while (*puVar9 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00011038 @ 0x11038 */

int64_t fcn.00011038(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t arg3;
    int64_t *piVar3;
    ulong noname_2;
    int64_t iStack_18;
    int64_t iStack_10;
    
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        noname_2 = 0;
        iVar2 = (**arg1)(arg1,&iStack_18);
        piVar1 = *0x174b0;
        if (-1 < iVar2) {
            if (*0x174b0 != NULL) {
                iVar2 = 0;
                if (**0x174b0 != 0) {
                    piVar3 = *0x174b0;
                    do {
                        (**(*0x174c0 + 0x48))(*piVar3);
                        if (piVar3[1] != 0) {
                            (**(*0x174c0 + 0x48))();
                        }
                        iVar2 = iVar2 + 1;
                        piVar3 = piVar1 + iVar2 * 2;
                    } while (*piVar3 != 0);
                }
                (**(*0x174c0 + 0x48))(piVar1);
                *0x174b0 = NULL;
            }
            if (iStack_10 == 0) {
                arg3 = 0x173c8;
            }
            else {
                if (8 < *(iStack_10 + 8)) {
                    return -0x7ffffffffffffff9;
                }
                arg3 = *(*(iStack_10 + 8) * 8 + 0x17400);
                (**(*0x174c0 + 0x48))();
            }
            if (iStack_18 != 0) {
                (**(*0x174c0 + 0x48))();
            }
            iVar2 = fcn.0001536c(0x17190,*0x17108,noname_2,arg3);
            if (-1 < iVar2) {
                iVar2 = fcn.0001536c(0x17194,*0x170f0,noname_2,arg3);
            }
        }
    }
    return iVar2;
}


/* fcn.00015578 @ 0x15578 */

int64_t fcn.00015578(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_20;
    
    uStackX_20 = 0;
    *arg1 = 0;
    iVar1 = (**(*0x174c8 + 0x48))(L"ClientId",94000,0,&uStackX_20,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.000150fc(0x8000000000000005,uStackX_20);
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x174c8 + 0x48))(L"ClientId",94000,0,&uStackX_20,iVar1);
            if (iVar1 < 0) {
                (**(*0x174c0 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00015d78 @ 0x15d78 */

ulong fcn.00015d78(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    iStackX_10 = 0;
    iVar1 = fcn.00015198(0x16ff0,aiStackX_18);
    if ((iVar1 < 0) || (aiStackX_18[0] == 0)) {
        iVar1 = fcn.00015198(0x17020,&iStackX_10);
        if (iVar1 < 0) {
            return 0x800000000000000e;
        }
        if (iStackX_10 == 0) {
            return 0x800000000000000e;
        }
        pcVar4 = *(iStackX_10 + 0x18);
        uVar2 = *(iStackX_10 + 0x16);
    }
    else {
        pcVar4 = *(aiStackX_18[0] + 0x10);
        uVar2 = *(aiStackX_18[0] + 0xc);
    }
    pcVar3 = pcVar4 + uVar2;
    do {
        if (*pcVar4 == '\x01') {
            if (pcVar4[1] < 0x19) {
                return 0x800000000000000e;
            }
            if (arg1 != pcVar4 + 8) {
                section..text(arg1,pcVar4 + 8,0x10);
            }
            return 0;
        }
        pcVar4 = pcVar4 + pcVar4[1];
        pcVar5 = pcVar4;
        if (*pcVar4 == '\0') goto code_r0x00015df1;
        do {
            do {
                pcVar4 = pcVar4 + 1;
                pcVar5 = pcVar4;
            } while (*pcVar4 != '\0');
code_r0x00015df1:
            pcVar4 = pcVar5 + 1;
        } while (*pcVar4 != '\0');
        pcVar4 = pcVar5 + 2;
    } while (pcVar4 < pcVar3);
    return 0x800000000000000e;
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


/* fcn.00011bcc @ 0x11bcc */

void fcn.00011bcc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t *arg1_00;
    int16_t *arg2_00;
    uint16_t uVar1;
    int16_t *piVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    int16_t *in_stack_00000028;
    
    *arg4 = 0;
    piVar2 = (arg3 & 0xffffU) + arg2;
    if (arg2 < piVar2) {
        do {
            arg1_00 = arg2 + 4;
            uVar4 = *(arg2 + 0x14);
            uVar1 = *(arg2 + 0x14) >> 0x10;
            uVar8 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
            uVar1 = *(arg2 + 0x18) >> 0x10;
            uVar4 = *(arg2 + 0x18);
            uVar5 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
            if ((*arg2 == 0x500) && (uVar8 <= uVar5)) {
                uVar7 = 0;
                if (*(arg1 + 0x18) != 0) {
                    do {
                        arg2_00 = arg1 + 0x1c + uVar7 * 0x18;
                        if ((arg1_00 == arg2_00) || (iVar3 = fcn.000102e0(arg1_00,arg2_00,0x10), iVar3 == 0))
                        goto code_r0x00011c95;
                        uVar6 = uVar7 + 1;
                        uVar7 = uVar6;
                    } while (uVar6 < *(arg1 + 0x18));
                }
                if (uVar5 != 0) {
code_r0x00011c95:
                    if (in_stack_00000028 != NULL) {
                        if (in_stack_00000028 != arg1_00) {
                            section..text(in_stack_00000028,arg1_00,0x18);
                        }
                        *(in_stack_00000028 + 8) = uVar8;
                        *(in_stack_00000028 + 10) = uVar5;
                        in_stack_00000028 = in_stack_00000028 + 0xc;
                    }
                    *arg4 = *arg4 + 1;
                }
            }
            arg2 = arg2 + (*(arg2 + 2) << 8 | *(arg2 + 2) >> 8) + 4;
        } while (arg2 < piVar2);
    }
    return;
}


/* fcn.00015b34 @ 0x15b34 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00015b34(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    char acStackX_18 [8];
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
    iVar1 = fcn.0001586c(arg1,acStackX_18);
    if (iVar1 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar1 = (**(*0x174c0 + 0x98))(iVar1,0x16f50,&puStack_40);
    if (-1 < iVar1) {
        iVar1 = (**puStack_40)(puStack_40,0x17030,&puStackX_20,auStack_38);
        if (-1 < iVar1) {
            *arg3 = *puStackX_20;
            (**(*0x174c0 + 0x48))();
            if ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2)) {
                uStack_48 = 0;
                iVar1 = (**(*0x174c0 + 0x50))(0x80000000,8,0,0,&uStack_48);
                if (iVar1 < 0) {
                    return -0x7ffffffffffffff9;
                }
                do {
                    iVar1 = (**(*0x174c0 + 0x58))(uStack_48,2,1000000);
                    if (iVar1 < 0) {
                        iVar1 = -0x7ffffffffffffff9;
code_r0x00015d25:
                        (**(*0x174c0 + 0x70))(uStack_48);
                        return iVar1;
                    }
                    do {
                        iVar2 = (**(*0x174c0 + 0x78))(uStack_48);
                        if (-1 < iVar2) {
                            arg2 = arg2 - 1000000;
                            iVar1 = (**puStack_40)(puStack_40,0x17030,&puStackX_20,auStack_38);
                            if (iVar1 < 0) {
                                if (puStackX_20 != NULL) {
                                    (**(*0x174c0 + 0x48))();
                                }
                                goto code_r0x00015d25;
                            }
                            *arg3 = *puStackX_20;
                            (**(*0x174c0 + 0x48))();
                        }
                    } while (iVar2 == -0x7ffffffffffffffa);
                } while ((*arg3 == -0x7ffffffffffffffa) && (999999 < arg2));
                (**(*0x174c0 + 0x70))(uStack_48);
                if ((*arg3 == -0x7ffffffffffffffa) && (arg2 < 1000000)) {
                    return -0x7fffffffffffffee;
                }
            }
            return 0;
        }
        if (puStackX_20 != NULL) {
            (**(*0x174c0 + 0x48))();
        }
        if (iVar1 != -0x7ffffffffffffffd) {
            return iVar1;
        }
    }
    acStackX_18[0] = '\x01';
    iVar1 = fcn.00015934(arg1,acStackX_18);
    if (-1 < iVar1) {
        *arg3 = ~-(acStackX_18[0] != '\0') & 0x800000000000000c;
    }
    return iVar1;
}


/* fcn.000136d4 @ 0x136d4 */

int64_t fcn.000136d4(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    uint *puVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    uint32_t *puStackX_8;
    
    uVar10 = 0;
    iVar6 = *(arg1 + 0x10);
    uVar8 = 0;
    uVar2 = *(*(arg1 + 0x78) + 0x10);
    puVar3 = *(iVar6 + 0x38);
    if (uVar2 != 0) {
        piVar11 = *(*(arg1 + 0x78) + 0x18);
        uVar12 = uVar2;
        uVar9 = uVar10;
        do {
            iVar4 = *piVar11;
            piVar11 = piVar11 + 1;
            uVar8 = uVar9 + 4 + (*(iVar4 + 2) << 8 | *(iVar4 + 2) >> 8);
            uVar9 = uVar8;
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
    }
    puVar5 = fcn.0001512c(uVar8 + 0x400);
    if (puVar5 == NULL) {
        iVar6 = -0x7ffffffffffffff7;
    }
    else {
        *puVar5 = uVar8 + 0x400;
        puVar5[1] = 4;
        *(puVar5 + 2) = 1;
        puVar5[2] = *(iVar6 + 0x48) << 8 | puVar5[2];
        *(iVar6 + 0x48) = *(iVar6 + 0x48) + 1;
        uVar1 = *puVar3;
        puStackX_8 = puVar5;
        puVar7 = fcn.000118a4(puVar5 + 3,0x100,uVar1 << 8 | uVar1 >> 8,puVar3 + 2);
        *puVar7 = 0x2000800;
        *(puVar7 + 1) = 0;
        iVar6 = fcn.000118ec(puVar7 + 6,*(arg1 + 0x88),*(arg1 + 0x90),*(arg1 + 0x94));
        if (*(*(arg1 + 0x78) + 0x10) != 0) {
            do {
                puVar3 = *(*(*(arg1 + 0x78) + 0x18) + uVar10 * 8);
                iVar6 = fcn.000118a4(iVar6,*puVar3,puVar3[1],puVar3 + 4);
                uVar10 = uVar10 + 1;
            } while (uVar10 < *(*(arg1 + 0x78) + 0x10));
        }
        puVar5[1] = puVar5[1] + (iVar6 - puVar5) + -0xc;
        iVar6 = fcn.00013364(arg1,0,&puStackX_8);
        puVar5 = puStackX_8;
        if (iVar6 < 0) {
            (**(*0x174c0 + 0x48))(puStackX_8);
        }
        else {
            *(*(arg1 + 0x88) + 8) = 1;
            *(arg1 + 0xe8) = 0;
            iVar6 = fcn.000135d0(arg1,puStackX_8,puVar7 + 1);
            if (iVar6 < 0) {
                (**(*0x174c0 + 0x48))(puVar5);
            }
            else {
                iVar6 = fcn.00012e18(arg1,puVar5,puVar7 + 1,*(*(arg1 + 0x78) + 0x38));
            }
        }
    }
    return iVar6;
}


/* fcn.00016e1c @ 0x16e1c */

int64_t fcn.00016e1c(uint32_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    ulong in_RDX;
    int64_t in_R8;
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_01 + 0x2e0) == 0) {
        arg1_00 = fcn.0001678c(arg1_01,in_RDX,in_R8);
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
                fcn.0001640c(arg1_00);
            }
        }
    }
    else {
        iVar1 = -0x7fffffffffffffec;
    }
    return iVar1;
}


/* fcn.00013c74 @ 0x13c74 */

int64_t fcn.00013c74(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puStackX_8;
    
    iVar5 = *(arg1 + 0x10);
    puVar2 = *(iVar5 + 0x38);
    iVar4 = *(*(arg1 + 0x88) + 0x10);
    iVar4 = fcn.00011b28(iVar4 + 0xc,*(iVar4 + 4) - 4,2);
    if (iVar4 == 0) {
        iVar5 = -0x7ffffffffffffff9;
    }
    else {
        puVar6 = fcn.0001512c(0x400);
        if (puVar6 == NULL) {
            iVar5 = -0x7ffffffffffffff7;
        }
        else {
            *puVar6 = 0x400;
            puVar6[1] = 4;
            *(puVar6 + 2) = 8;
            puVar6[2] = *(puVar6 + 2) | *(iVar5 + 0x48) << 8;
            *(iVar5 + 0x48) = *(iVar5 + 0x48) + 1;
            uVar1 = *puVar2;
            puStackX_8 = puVar6;
            iVar5 = fcn.000118a4(puVar6 + 3,0x100,uVar1 << 8 | uVar1 >> 8,puVar2 + 2);
            puVar7 = fcn.000118a4(iVar5,0x200,*(iVar4 + 2),iVar4 + 4);
            *puVar7 = 0x2000800;
            *(puVar7 + 1) = 0;
            iVar3 = fcn.000118ec(puVar7 + 6,arg2,0,0);
            puVar6[1] = puVar6[1] + (iVar3 - puVar6) + -0xc;
            iVar5 = fcn.00013364(arg1,8,&puStackX_8);
            puVar6 = puStackX_8;
            if (iVar5 < 0) {
                (**(*0x174c0 + 0x48))(puStackX_8);
            }
            else {
                *(*(arg1 + 0x88) + 8) = 5;
                iVar5 = fcn.000135d0(arg1,puStackX_8,puVar7 + 1);
                if (iVar5 < 0) {
                    (**(*0x174c0 + 0x48))(puVar6);
                }
                else {
                    iVar5 = fcn.00012e18(arg1,puVar6,puVar7 + 1,0);
                }
            }
        }
    }
    return iVar5;
}


/* fcn.00013278 @ 0x13278 */

void fcn.00013278(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    
    fcn.00013134(arg1,1);
    uVar3 = 0;
    if (*(arg1 + 0xd0) != 0) {
        (**(*0x174c0 + 0x48))();
    }
    if (*(arg1 + 0xc0) != 0) {
        (**(*0x174c0 + 0x48))();
    }
    if (*(*(arg1 + 0x88) + 0x10) != 0) {
        (**(*0x174c0 + 0x48))();
    }
    iVar1 = *(arg1 + 0x88);
    *(arg1 + 0xd8) = arg2;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 200) = 0;
    *(arg1 + 0xd0) = 0;
    *(arg1 + 0x90) = 0;
    *(arg1 + 0x98) = 0;
    *(arg1 + 0xe8) = 0;
    *(iVar1 + 8) = 0;
    *(iVar1 + 0x10) = 0;
    if (*(iVar1 + 0x18) != 0) {
        iVar2 = iVar1 + 0x30;
        do {
            *(iVar2 + -4) = 0;
            iVar2 = iVar2 + 0x18;
            uVar3 = uVar3 + 1;
        } while (uVar3 < *(iVar1 + 0x18));
    }
    if (*(*(arg1 + 0x78) + 0x28) != 0) {
        (**(*0x174c0 + 0x68))();
    }
    return;
}


/* fcn.00011434 @ 0x11434 */

ulong fcn.00011434(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint32_t uVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar6;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 != arg2) {
        section..text(arg1_00,arg2,0x40);
    }
    if (*(arg2 + 0x38) == 0) {
code_r0x0001149d:
        if ((*(arg2 + 0x18) != 0) && (*(arg2 + 0x10) != 0)) {
            iVar3 = fcn.0001512c(*(arg2 + 0x10) << 3);
            *(arg1_00 + 0x18) = iVar3;
            if (iVar3 == 0) goto code_r0x0001147a;
            uVar6 = 0;
            if (*(arg2 + 0x10) != 0) {
                do {
                    uVar1 = *(*(*(arg2 + 0x18) + uVar6 * 8) + 2);
                    uVar5 = (uVar1 << 8 | uVar1 >> 8) + 4;
                    uVar4 = fcn.0001512c(uVar5);
                    *(*(arg1_00 + 0x18) + uVar6 * 8) = uVar4;
                    iVar3 = *(*(arg1_00 + 0x18) + uVar6 * 8);
                    if (iVar3 == 0) goto code_r0x0001147a;
                    iVar2 = *(*(arg2 + 0x18) + uVar6 * 8);
                    if (iVar3 != iVar2) {
                        section..text(iVar3,iVar2,uVar5);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < *(arg2 + 0x10));
            }
        }
        uVar4 = 0;
    }
    else {
        iVar3 = fcn.0001512c(0x10);
        *(arg1_00 + 0x38) = iVar3;
        if (iVar3 != 0) {
            if (iVar3 != *(arg2 + 0x38)) {
                section..text(iVar3,*(arg2 + 0x38),0x10);
            }
            goto code_r0x0001149d;
        }
code_r0x0001147a:
        uVar4 = 0x8000000000000009;
    }
    return uVar4;
}


/* fcn.00014068 @ 0x14068 */

int64_t fcn.00014068(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    int64_t *arg2_00;
    int64_t iVar4;
    int64_t in_stack_00000038;
    int64_t in_stack_00000040;
    int64_t in_stack_00000048;
    
    iVar1 = *(arg1 + 0x10);
    iVar4 = arg3;
    uVar3 = (**(*0x174c0 + 0x18))(8);
    *(arg1 + 0xd8) = 0x8000000000000014;
    arg2_00 = fcn.0001512c(0x30);
    if (arg2_00 == NULL) {
        (**(*0x174c0 + 0x20))(uVar3);
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        arg2_00[3] = in_stack_00000040;
        arg2_00[4] = in_stack_00000048;
        arg2_00[5] = in_stack_00000038;
        *arg2_00 = arg1 + 0xb0;
        puVar2 = *(arg1 + 0xb8);
        arg2_00[1] = puVar2;
        *puVar2 = arg2_00;
        *(arg1 + 0xb8) = arg2_00;
        iVar4 = fcn.000141d4(arg1,arg2_00,CONCAT71(iVar4 >> 8,arg2),arg3);
        if ((-1 < iVar4) && ((iVar4 = fcn.00016e1c(*(iVar1 + 0x40)), -1 < iVar4 || (iVar4 == -0x7fffffffffffffec)))) {
            (**(*0x174c0 + 0x20))(uVar3);
            return 0;
        }
        (**(*0x174c0 + 0x20))(uVar3);
        *(*arg2_00 + 8) = arg2_00[1];
        *arg2_00[1] = *arg2_00;
        (**(*0x174c0 + 0x48))(arg2_00);
    }
    return iVar4;
}


/* fcn.00013e14 @ 0x13e14 */

int64_t fcn.00013e14(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    uint8_t uVar4;
    uint uVar5;
    uint32_t *arg2_00;
    uint *puVar6;
    int64_t iVar7;
    int64_t iVar8;
    char cVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t *puStackX_8;
    
    uVar11 = 0;
    iVar7 = *(arg1 + 0x10);
    cVar9 = arg2;
    uVar13 = 0;
    uVar2 = *(*(arg1 + 0x78) + 0x10);
    puVar3 = *(iVar7 + 0x38);
    if (uVar2 != 0) {
        piVar12 = *(*(arg1 + 0x78) + 0x18);
        uVar10 = uVar2;
        uVar14 = uVar11;
        do {
            iVar8 = *piVar12;
            piVar12 = piVar12 + 1;
            uVar13 = uVar14 + 4 + (*(iVar8 + 2) << 8 | *(iVar8 + 2) >> 8);
            uVar14 = uVar13;
            uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
    }
    arg2_00 = fcn.0001512c(uVar13 + 0x400);
    if (arg2_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    *arg2_00 = uVar13 + 0x400;
    arg2_00[1] = 4;
    uVar4 = (cVar9 != '\0') + 5;
    *(arg2_00 + 2) = uVar4;
    arg2_00[2] = uVar4 | *(iVar7 + 0x48) << 8;
    *(iVar7 + 0x48) = *(iVar7 + 0x48) + 1;
    uVar1 = *puVar3;
    puStackX_8 = arg2_00;
    puVar6 = fcn.000118a4(arg2_00 + 3,0x100,uVar1 << 8 | uVar1 >> 8,puVar3 + 2);
    *puVar6 = 0x2000800;
    *(puVar6 + 1) = 0;
    iVar7 = fcn.000118ec(puVar6 + 6,*(arg1 + 0x88),*(arg1 + 0x90),*(arg1 + 0x94));
    if (cVar9 == '\0') {
        iVar8 = *(*(arg1 + 0x88) + 0x10);
        iVar8 = fcn.00011b28(iVar8 + 0xc,*(iVar8 + 4) - 4,2);
        if (iVar8 == 0) {
            iVar7 = -0x7ffffffffffffff9;
            goto code_r0x0001402a;
        }
        iVar7 = fcn.000118a4(iVar7,0x200,*(iVar8 + 2),iVar8 + 4);
    }
    if (*(*(arg1 + 0x78) + 0x10) != 0) {
        do {
            puVar3 = *(*(*(arg1 + 0x78) + 0x18) + uVar11 * 8);
            iVar7 = fcn.000118a4(iVar7,*puVar3,puVar3[1],puVar3 + 4);
            uVar11 = uVar11 + 1;
        } while (uVar11 < *(*(arg1 + 0x78) + 0x10));
    }
    arg2_00[1] = arg2_00[1] + (iVar7 - arg2_00) + -0xc;
    iVar7 = fcn.00013364(arg1,(cVar9 != '\0') + 9,&puStackX_8);
    arg2_00 = puStackX_8;
    if (-1 < iVar7) {
        *(*(arg1 + 0x88) + 8) = (cVar9 != '\0') + 7;
        if (cVar9 == '\0') {
            uVar5 = *(arg1 + 0x90);
        }
        else {
            uVar5 = *(arg1 + 0x94);
        }
        *(arg1 + 0x9c) = uVar5;
        *(arg1 + 0xe8) = 0;
        iVar7 = fcn.000135d0(arg1,puStackX_8,puVar6 + 1);
        if (-1 < iVar7) {
            iVar7 = fcn.00012e18(arg1,arg2_00,puVar6 + 1,0);
            return iVar7;
        }
    }
code_r0x0001402a:
    (**(*0x174c0 + 0x48))(arg2_00);
    return iVar7;
}


/* fcn.0001169c @ 0x1169c */

ulong fcn.0001169c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    uint64_t uVar3;
    
    uVar2 = 0;
    if (arg2 != 0) {
        do {
            uVar3 = 0;
            if (*(arg1 + 0x18) == 0) {
                return 0x800000000000000e;
            }
            arg2_00 = arg1 + 0x1c;
            while ((arg3 != arg2_00 && (iVar1 = fcn.000102e0(arg3,arg2_00,0x10), iVar1 != 0))) {
                uVar3 = uVar3 + 1;
                arg2_00 = arg2_00 + 0x18;
                if (*(arg1 + 0x18) <= uVar3) {
                    return 0x800000000000000e;
                }
            }
            uVar2 = uVar2 + 1;
            arg3 = arg3 + 0x10;
        } while (uVar2 < (arg2 & 0xffffffffU));
    }
    return 0;
}


/* fcn.00011730 @ 0x11730 */

int64_t fcn.00011730(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    
    uVar2 = arg2;
    if (uVar2 == 0) {
        uVar2 = *(arg1 + 0x18);
    }
    iVar5 = (uVar2 - 1) * 0x18 + 0x38;
    arg1_00 = fcn.0001512c(iVar5);
    if (arg1_00 != 0) {
        if (uVar2 == *(arg1 + 0x18)) {
            if (arg1_00 != arg1) {
                section..text(arg1_00,arg1,iVar5);
            }
            *(arg1 + 0x18) = 0;
        }
        else {
            if (arg1_00 != arg1) {
                section..text(arg1_00,arg1,0x38);
            }
            uVar7 = uVar2;
            if (uVar2 != 0) {
                iVar5 = arg1_00 + 0x1c;
                do {
                    uVar6 = 0;
                    if (*(arg1 + 0x18) != 0) {
                        iVar4 = arg1 + 0x1c;
                        do {
                            if ((arg3 == iVar4) || (iVar1 = fcn.000102e0(arg3,iVar4,0x10), iVar1 == 0)) {
                                iVar4 = arg1 + 0x1c + uVar6 * 0x18;
                                if (iVar5 != iVar4) {
                                    section..text(iVar5,iVar4,0x18);
                                }
                                if (uVar6 + 1 < *(arg1 + 0x18)) {
                                    iVar3 = uVar6 * 0x18 + 0x34 + arg1;
                                    iVar1 = (*(arg1 + 0x18) - uVar6) * 0x18 + -0x18;
                                    if ((iVar1 != 0) && (iVar4 != iVar3)) {
                                        section..text(iVar4,iVar3,iVar1);
                                    }
                                }
                                break;
                            }
                            uVar6 = uVar6 + 1;
                            iVar4 = iVar4 + 0x18;
                        } while (uVar6 < *(arg1 + 0x18));
                    }
                    arg3 = arg3 + 0x10;
                    iVar5 = iVar5 + 0x18;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
            *(arg1 + 0x18) = *(arg1 + 0x18) - uVar2;
            *(arg1_00 + 0x18) = uVar2;
        }
    }
    return arg1_00;
}


/* fcn.00013ad0 @ 0x13ad0 */

int64_t fcn.00013ad0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    int iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint *puVar6;
    uint *puVar7;
    uint *puStackX_8;
    
    iVar5 = *(arg1 + 0x10);
    puVar2 = *(iVar5 + 0x38);
    iVar4 = *(*(arg1 + 0x88) + 0x10);
    iVar4 = fcn.00011b28(iVar4 + 0xc,*(iVar4 + 4) - 4,2);
    if (iVar4 == 0) {
        iVar5 = -0x7ffffffffffffff9;
    }
    else {
        puVar6 = fcn.0001512c(0x400);
        if (puVar6 == NULL) {
            iVar5 = -0x7ffffffffffffff7;
        }
        else {
            *puVar6 = 0x400;
            puVar6[1] = 4;
            *(puVar6 + 2) = 9;
            puVar6[2] = *(puVar6 + 2) | *(iVar5 + 0x48) << 8;
            *(iVar5 + 0x48) = *(iVar5 + 0x48) + 1;
            uVar1 = *puVar2;
            puStackX_8 = puVar6;
            puVar7 = fcn.000118a4(puVar6 + 3,0x100,uVar1 << 8 | uVar1 >> 8,puVar2 + 2);
            *puVar7 = 0x2000800;
            *(puVar7 + 1) = 0;
            iVar5 = fcn.000118a4(puVar7 + 6,0x200,*(iVar4 + 2),iVar4 + 4);
            iVar3 = fcn.000118ec(iVar5,arg2,0,0);
            puVar6[1] = puVar6[1] + (iVar3 - puVar6) + -0xc;
            iVar5 = fcn.00013364(arg1,6,&puStackX_8);
            puVar6 = puStackX_8;
            if (iVar5 < 0) {
                (**(*0x174c0 + 0x48))(puStackX_8);
            }
            else {
                *(*(arg1 + 0x88) + 8) = 3;
                *(arg1 + 0xe8) = 0;
                iVar5 = fcn.000135d0(arg1,puStackX_8,puVar7 + 1);
                if (iVar5 < 0) {
                    (**(*0x174c0 + 0x48))(puVar6);
                }
                else {
                    iVar5 = fcn.00012e18(arg1,puVar6,puVar7 + 1,0);
                }
            }
        }
    }
    return iVar5;
}


/* fcn.000115a8 @ 0x115a8 */

int fcn.000115a8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uchar auStack_18 [8];
    uint32_t uStack_10;
    
    iVar3 = arg1;
    (**(*0x174c8 + 0x18))(auStack_18);
    uVar4 = (uStack_10 >> 10 & 0x3ff) * iVar3;
    uVar2 = -(arg3 != '\0') & uStack_10 >> 9 & 1;
    if (arg2 == '\0') {
        if (uVar2 == 0) {
            iVar3 = uVar4 / 0x27f6 + iVar3 * 2;
            goto code_r0x00011683;
        }
        iVar3 = iVar3 * 2;
    }
    else if (uVar2 == 0) {
        iVar3 = iVar3 + uVar4 / 0x27f6;
        goto code_r0x00011683;
    }
    iVar3 = iVar3 - uVar4 / 0x27f6;
code_r0x00011683:
    iVar1 = 1;
    if (iVar3 != 0) {
        iVar1 = iVar3;
    }
    return iVar1;
}


/* fcn.00011b60 @ 0x11b60 */

uint16_t * fcn.00011b60(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint in_register_0000000c;
    uint16_t uVar2;
    uint16_t *puVar3;
    uint16_t *puVar4;
    
    puVar4 = CONCAT44(in_register_0000000c,arg1);
    puVar3 = (arg2 & 0xffffffffU) + puVar4;
    if (puVar4 < puVar3) {
        do {
            if ((*puVar4 == (*arg3 << 8 | *arg3 >> 8)) &&
               (uVar1 = *(arg3 + 4) >> 0x10, uVar2 = *(arg3 + 4),
               *(puVar4 + 2) == CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8))) {
                return puVar4;
            }
            puVar4 = puVar4 + (puVar4[1] << 8 | puVar4[1] >> 8) + 4;
        } while (puVar4 < puVar3);
    }
    return NULL;
}


/* fcn.00011b28 @ 0x11b28 */

uint16_t * fcn.00011b28(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uint16_t *puVar1;
    uint16_t *puVar2;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    puVar2 = (arg2 & 0xffffffffU) + puVar1;
    if (puVar1 < puVar2) {
        do {
            if (*puVar1 == (arg3 << 8 | arg3 >> 8)) {
                return puVar1;
            }
            puVar1 = puVar1 + (puVar1[1] << 8 | puVar1[1] >> 8) + 4;
        } while (puVar1 < puVar2);
    }
    return NULL;
}


/* fcn.00011cf8 @ 0x11cf8 */

ulong fcn.00011cf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *arg1_00;
    ulong uVar1;
    int64_t arg1_01;
    uint32_t *puVar2;
    uint64_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int aiStackX_8 [2];
    uint in_stack_00000028;
    
    arg1_00 = arg1 + 0x88;
    if (*arg1_00 == 0) {
        uVar1 = 0x8000000000000007;
    }
    else {
        fcn.00011bcc(*arg1_00,arg2,arg3 & 0xffff,aiStackX_8);
        if (aiStackX_8[0] == 0) {
            uVar1 = 0x800000000000000e;
        }
        else {
            arg1_01 = fcn.0001512c((aiStackX_8[0] + -1) * 0x18 + 0x38);
            if (arg1_01 == 0) {
                uVar1 = 0x8000000000000009;
            }
            else {
                *(arg1_01 + 8) = *(*arg1_00 + 8);
                *(arg1_01 + 0x18) = aiStackX_8[0];
                iVar5 = *(arg1 + 0x78) + 0x20;
                if (arg1_01 != iVar5) {
                    section..text(arg1_01,iVar5,8);
                }
                fcn.00011bcc(*arg1_00,arg2,arg3 & 0xffff,aiStackX_8);
                if (*(*arg1_00 + 0x10) != 0) {
                    (**(*0x174c0 + 0x48))();
                }
                (**(*0x174c0 + 0x48))(*arg1_00);
                fcn.000102c0(arg1_00,0x18);
                uVar6 = 0xffffffff;
                uVar7 = 0;
                *(arg1 + 0x94) = in_stack_00000028;
                *arg1_00 = arg1_01;
                *(arg1 + 0x90) = arg4;
                if (*(arg1_01 + 0x18) != 0) {
                    uVar3 = *(arg1_01 + 0x18);
                    puVar2 = arg1_01 + 0x30;
                    do {
                        uVar7 = *puVar2;
                        puVar2 = puVar2 + 6;
                        if (uVar7 <= uVar6) {
                            uVar6 = uVar7;
                        }
                        if (uVar7 < uVar6) {
                            uVar7 = uVar6;
                        }
                        uVar3 = uVar3 - 1;
                    } while (uVar3 != 0);
                }
                uVar4 = *(arg1 + 0x90);
                if (uVar4 == 0) {
                    uVar4 = (uVar6 * 5) / 10;
                }
                *(arg1 + 0x90) = uVar4;
                uVar4 = *(arg1 + 0x94);
                if (uVar4 == 0) {
                    uVar4 = (uVar6 << 3) / 10;
                }
                *(arg1 + 0x9c) = 0;
                uVar1 = 0;
                *(arg1 + 0x94) = uVar4;
                *(arg1 + 0x98) = uVar7;
            }
        }
    }
    return uVar1;
}


/* fcn.00015f80 @ 0x15f80 */

int64_t fcn.00015f80(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
        iVar8 = fcn.000150fc(arg1,uVar16);
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
                    goto code_r0x0001607c;
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
code_r0x0001607c:
        }
    }
    iVar19 = fcn.00015e3c(uVar7,uVar7);
    if (iVar19 == 0) {
        if (iVar8 != 0) {
            (**(*0x174c0 + 0x48))(iVar8);
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


/* fcn.00011a6c @ 0x11a6c */

void fcn.00011a6c(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uStack_18;
    uint8_t uStack_16;
    uint8_t uStack_15;
    uint8_t uStack_14;
    uint8_t uStack_13;
    uint8_t uStack_12;
    uint32_t uStack_10;
    
    (**(*0x174c8 + 0x18))(&uStack_18,0);
    uVar1 = 0;
    iVar2 = (uStack_12 + 0x83f46180 +
            ((uStack_14 + ((uStack_16 + (uStack_18 + uStack_18 * 2) * 4) * 0x1e + uStack_15) * 0x18) * 0x3c + uStack_13)
            * 0x3c) * 100 + uStack_10 / 10000000;
    if (*(arg2 + 0xe8) == 0) {
        *(arg2 + 0xe8) = iVar2;
    }
    else {
        uVar1 = iVar2 - *(arg2 + 0xe8);
        if (0xffff < uVar1) {
            uVar1 = 0xffff;
        }
    }
    *arg1 = uVar1 << 8 | uVar1 >> 8;
    return;
}


/* fcn.00016d48 @ 0x16d48 */

int64_t fcn.00016d48(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    
    iVar4 = fcn.0001683c(arg1,in_RDX,in_R8,in_R9);
    if (iVar4 == 0) {
        iVar5 = -0x7ffffffffffffff7;
    }
    else {
        piVar1 = iVar4 + 8;
        piVar2 = arg1 + 0x2d0;
        iVar5 = *piVar2;
        *(iVar4 + 0x10) = piVar2;
        *piVar1 = iVar5;
        *(iVar5 + 8) = piVar1;
        *piVar2 = piVar1;
        iVar5 = *(arg1 + 0x2e8);
        if (*(arg1 + 0x20) == '\x04') {
            iVar5 = (**(iVar5 + 0x20))();
        }
        else {
            iVar5 = (**(iVar5 + 0x18))(iVar5,iVar4 + 0x60);
        }
        if (iVar5 < 0) {
            *(*piVar1 + 8) = *(iVar4 + 0x10);
            **(iVar4 + 0x10) = *piVar1;
            cVar3 = *(*(iVar4 + 0x18) + 0x20);
            if ((cVar3 == '\x04') || (cVar3 == '\x06')) {
                (**(*0x174c0 + 0x70))(*(iVar4 + 0x60));
            }
            (**(*0x174c0 + 0x48))(iVar4);
        }
        else {
            iVar5 = 0;
        }
    }
    return iVar5;
}


/* fcn.00015f54 @ 0x15f54 */

void fcn.00015f54(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00015ee0(*(arg1 + 0x78));
        (**(*0x174c0 + 0x48))(arg1);
    }
    return;
}


/* fcn.00015ee0 @ 0x15ee0 */

void fcn.00015ee0(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x174c0 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x174c0 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x174c0 + 0x48))(arg1);
    }
    return;
}


/* fcn.000118a4 @ 0x118a4 */

int64_t fcn.000118a4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t arg1_00;
    uint16_t uVar1;
    uint in_R9;
    
    *arg1 = arg2;
    arg1_00 = arg1 + 4;
    uVar1 = arg3;
    *(arg1 + 2) = uVar1;
    uVar1 = uVar1 << 8 | uVar1 >> 8;
    if ((uVar1 != 0) && (arg1_00 != CONCAT44(in_R9,arg4))) {
        section..text(arg1_00,arg4,uVar1);
    }
    return uVar1 + arg1_00;
}


/* fcn.000118ec @ 0x118ec */

uint * fcn.000118ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint *puVar3;
    uint64_t uVar4;
    uint *puVar5;
    int iVar6;
    int in_stack_00000028;
    
    *arg1 = *arg2 << 8 | *arg2 >> 8;
    uVar4 = 0;
    uVar2 = *(arg2 + 4);
    uVar1 = *(arg2 + 4) >> 0x10;
    *(arg1 + 4) = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
    puVar3 = arg1 + 8;
    if (*arg2 == 3) {
        iVar6 = -1;
        if (arg3 != 0) {
            iVar6 = arg3;
        }
        uVar1 = iVar6 >> 0x10;
        *puVar3 = CONCAT22(iVar6 << 8 | iVar6 >> 8,uVar1 << 8 | uVar1 >> 8);
        iVar6 = -1;
        if (arg4 != 0) {
            iVar6 = arg4;
        }
        uVar1 = iVar6 >> 0x10;
        *(arg1 + 0xc) = CONCAT22(iVar6 << 8 | iVar6 >> 8,uVar1 << 8 | uVar1 >> 8);
        puVar3 = arg1 + 0x10;
    }
    if (*(arg2 + 0x18) != 0) {
        puVar5 = arg2 + 0x1c;
        do {
            *puVar3 = 0x500;
            *(puVar3 + 2) = 0x1800;
            if (puVar3 + 1 != puVar5) {
                section..text(puVar3 + 1,puVar5,0x10);
            }
            if ((in_stack_00000028 != 4) &&
               (uVar1 = puVar5[4] >> 0x10, uVar2 = puVar5[4],
               puVar3[5] = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8), in_stack_00000028 != 4)) {
                uVar1 = puVar5[5] >> 0x10;
                uVar2 = puVar5[5];
                puVar3[6] = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
            }
            puVar3 = puVar3 + 7;
            uVar4 = uVar4 + 1;
            puVar5 = puVar5 + 6;
        } while (uVar4 < *(arg2 + 0x18));
    }
    uVar1 = (puVar3 - (arg1 + 2)) - 2;
    *(arg1 + 2) = uVar1 * 0x100 | uVar1 >> 8;
    return puVar3;
}


/* fcn.00013364 @ 0x13364 */

ulong fcn.00013364(int64_t arg1,int64_t arg2,int64_t arg3)

{
    code *pcVar1;
    ulong uVar2;
    int64_t iStackX_8;
    
    iStackX_8 = 0;
    uVar2 = 0;
    pcVar1 = **(arg1 + 0x78);
    if (pcVar1 != NULL) {
        uVar2 = (*pcVar1)(arg1 + 0x28,(*(arg1 + 0x78))[1],*(*(arg1 + 0x88) + 8),arg2 & 0xffffffff,*arg3,&iStackX_8)
        ;
        if (iStackX_8 != 0) {
            (**(*0x174c0 + 0x48))(*arg3);
            *arg3 = iStackX_8;
        }
    }
    return uVar2;
}


/* fcn.000135d0 @ 0x135d0 */

int64_t fcn.000135d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uchar *puVar2;
    uint auStack_48 [2];
    int64_t iStack_40;
    uchar auStack_38 [16];
    ushort uStack_28;
    uchar auStack_24 [16];
    ushort uStack_14;
    
    iVar1 = *(arg1 + 0x10);
    iStack_40 = arg2 + 8;
    auStack_48[0] = *(arg2 + 4);
    arg1_00 = fcn.00015f80(auStack_48,1,arg3,0);
    if (arg1_00 == 0) {
        return -0x7ffffffffffffff7;
    }
    fcn.000102c0(auStack_38,0x28);
    puVar2 = *(arg1 + 0xd0);
    if (puVar2 == NULL) {
        puVar2 = 0x17178;
    }
    else if (auStack_24 == puVar2) goto code_r0x00013672;
    section..text(auStack_24,puVar2,0x10);
code_r0x00013672:
    uStack_14 = 0x223;
    uStack_28 = 0x222;
    if (arg3 != 0) {
        fcn.00011a6c(arg3,arg1);
    }
    iVar1 = fcn.00016d48(*(iVar1 + 0x40));
    if (iVar1 < 0) {
        fcn.00015f54(arg1_00);
    }
    else {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00012e18 @ 0x12e18 */

ulong fcn.00012e18(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong *puVar2;
    int iVar3;
    uint uVar4;
    int64_t *piVar5;
    uint64_t arg1_00;
    unkbyte7 Var6;
    unkbyte7 Var8;
    int64_t iVar7;
    
    Var6 = arg2 >> 8;
    iVar7 = arg3;
    piVar5 = fcn.0001512c(0x50);
    if (piVar5 == NULL) {
        return 0x8000000000000009;
    }
    piVar5[3] = arg2;
    *(piVar5 + 2) = *(arg2 + 8) >> 8;
    piVar5[8] = arg3;
    cVar1 = *(arg2 + 8);
    if (cVar1 == '\x01') {
        if (arg4 == 0) {
            piVar5[4] = 1;
            piVar5[5] = 0x78;
        }
        else {
            uVar4 = 1;
            if (*arg4 != 0) {
                uVar4 = *arg4;
            }
            *(piVar5 + 4) = uVar4;
            *(piVar5 + 0x24) = *(arg4 + 4);
            uVar4 = 0x78;
            if (*(arg4 + 8) != 0) {
                uVar4 = *(arg4 + 8);
            }
            *(piVar5 + 5) = uVar4;
            *(piVar5 + 0x2c) = *(arg4 + 0xc);
        }
        iVar7 = 0;
code_r0x00012ff4:
        arg1_00 = *(piVar5 + 4);
        goto code_r0x00012ff7;
    }
    Var8 = iVar7 >> 8;
    if (cVar1 == '\x03') {
        *(piVar5 + 0x24) = 10;
        piVar5[5] = 0x1e;
code_r0x00012f22:
        *(piVar5 + 4) = 1;
    }
    else {
        if (cVar1 != '\x04') {
            if (cVar1 == '\x05') {
                piVar5[4] = 10;
                *(piVar5 + 5) = 600;
                iVar3 = *(arg1 + 0x94) - *(arg1 + 0x90);
            }
            else {
                if (cVar1 != '\x06') {
                    if ((cVar1 != '\b') && (cVar1 != '\t')) {
                        if (cVar1 != '\v') {
                            (**(*0x174c0 + 0x48))(piVar5);
                            return 0x8000000000000007;
                        }
                        if (arg4 == 0) {
                            piVar5[4] = 1;
                            piVar5[5] = 0x78;
                        }
                        else {
                            uVar4 = 1;
                            if (*arg4 != 0) {
                                uVar4 = *arg4;
                            }
                            *(piVar5 + 4) = uVar4;
                            *(piVar5 + 0x24) = *(arg4 + 4);
                            uVar4 = 0x78;
                            if (*(arg4 + 8) != 0) {
                                uVar4 = *(arg4 + 8);
                            }
                            *(piVar5 + 5) = uVar4;
                            *(piVar5 + 0x2c) = *(arg4 + 0xc);
                        }
                        iVar7 = CONCAT71(Var8,1);
                        goto code_r0x00012ff4;
                    }
                    *(piVar5 + 0x24) = 5;
                    *(piVar5 + 0x2c) = 0;
                    goto code_r0x00012f22;
                }
                piVar5[4] = 10;
                *(piVar5 + 5) = 600;
                iVar3 = *(arg1 + 0x98) - *(arg1 + 0x94);
            }
            iVar7 = CONCAT71(Var8,1);
            *(piVar5 + 0x2c) = iVar3;
            arg1_00 = 10;
            goto code_r0x00012ff7;
        }
        piVar5[4] = 1;
        *(piVar5 + 5) = 4;
        *(piVar5 + 0x2c) = 10;
    }
    iVar7 = CONCAT71(Var8,1);
    arg1_00 = 1;
code_r0x00012ff7:
    uVar4 = fcn.000115a8(arg1_00,CONCAT71(Var6,1),iVar7);
    *(piVar5 + 0x34) = uVar4;
    *piVar5 = arg1 + 0xa0;
    puVar2 = *(arg1 + 0xa8);
    piVar5[1] = puVar2;
    *puVar2 = piVar5;
    *(arg1 + 0xa8) = piVar5;
    return 0;
}


/* fcn.000141d4 @ 0x141d4 */

int64_t fcn.000141d4(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint16_t uVar2;
    uint16_t *puVar3;
    uint32_t *arg2_00;
    int64_t iVar4;
    uint32_t *arg1_00;
    uint64_t uVar5;
    int iVar6;
    uint64_t uVar7;
    uint32_t in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    
    uVar5 = 0;
    iVar4 = *(arg1 + 0x10);
    uVar7 = in_stack_00000028;
    puVar3 = *(iVar4 + 0x38);
    iVar6 = (*(arg4 + 2) << 8 | *(arg4 + 2) >> 8) + 4;
    if (uVar7 != 0) {
        do {
            iVar1 = uVar5 * 8;
            uVar5 = uVar5 + 1;
            uVar2 = *(*(in_stack_00000030 + iVar1) + 2);
            iVar6 = iVar6 + 4 + (uVar2 << 8 | uVar2 >> 8);
        } while (uVar5 < uVar7);
    }
    arg2_00 = fcn.0001512c(iVar6 + 0x400U);
    if (arg2_00 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        *(arg2_00 + 2) = 0xb;
        *arg2_00 = iVar6 + 0x400U;
        arg2_00[1] = 4;
        arg2_00[2] = *(iVar4 + 0x48) << 8 | arg2_00[2];
        *(iVar4 + 0x48) = *(iVar4 + 0x48) + 1;
        uVar5 = 0;
        *(arg2 + 0x10) = arg2_00[2] >> 8;
        arg1_00 = arg2_00 + 3;
        if (arg3 != '\0') {
            uVar2 = *puVar3;
            arg1_00 = fcn.000118a4(arg1_00,0x100,uVar2 << 8 | uVar2 >> 8,puVar3 + 2);
        }
        *arg1_00 = 0x800;
        *(arg1_00 + 2) = 0x200;
        iVar4 = fcn.000118a4(arg1_00 + 6,*arg4,*(arg4 + 2),arg4 + 4);
        if (uVar7 != 0) {
            do {
                puVar3 = *(in_stack_00000030 + uVar5 * 8);
                iVar4 = fcn.000118a4(iVar4,*puVar3,puVar3[1],puVar3 + 4);
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar7);
        }
        arg2_00[1] = arg2_00[1] + (iVar4 - arg2_00) + -0xc;
        *(arg1 + 0xe8) = 0;
        iVar4 = fcn.000135d0(arg1,arg2_00,arg1_00 + 1);
        if (iVar4 < 0) {
            (**(*0x174c0 + 0x48))(arg2_00);
        }
        else {
            iVar4 = fcn.00012e18(arg1,arg2_00,arg1_00 + 1,in_stack_00000038);
        }
    }
    return iVar4;
}


/* fcn.00013504 @ 0x13504 */

ulong fcn.00013504(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    int16_t *arg3_00;
    uint64_t arg2_00;
    
    uVar4 = arg2 + 0xc;
    arg2_00 = *(arg2 + 4) - 4;
    iVar2 = fcn.00011b28(uVar4,arg2_00,0xd);
    *arg3 = iVar2;
    if ((iVar2 == 0) || ((*(iVar2 + 4) & 0xff) == 0 && *(iVar2 + 4) >> 8 == 0)) {
        arg3_00 = *(arg1 + 0x78) + 0x20;
        iVar2 = fcn.00011b60(uVar4,arg2_00 & 0xffffffff,arg3_00);
        *arg3 = iVar2;
        if (iVar2 != 0) {
            if (*arg3_00 == 3) {
                uVar4 = iVar2 + 0x10;
                uVar1 = (*(iVar2 + 2) << 8 | *(iVar2 + 2) >> 8) - 0xc;
            }
            else {
                uVar4 = iVar2 + 8;
                uVar1 = (*(iVar2 + 2) << 8 | *(iVar2 + 2) >> 8) - 4;
            }
            iVar2 = fcn.00011b28(uVar4,uVar1,0xd);
            *arg3 = iVar2;
            if ((iVar2 != 0) && ((*(iVar2 + 4) & 0xff) != 0 || *(iVar2 + 4) >> 8 != 0)) goto code_r0x0001354b;
        }
        uVar3 = 0;
    }
    else {
code_r0x0001354b:
        uVar3 = 0x8000000000000007;
    }
    return uVar3;
}


/* fcn.000133e4 @ 0x133e4 */

ulong fcn.000133e4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint16_t uVar7;
    uint64_t arg2_00;
    uint32_t uVar8;
    
    iVar2 = *(arg1 + 0x78);
    iVar1 = fcn.00011b60(arg2 + 0xc,*(arg2 + 4) - 4,iVar2 + 0x20);
    if (iVar1 != 0) {
        if (*(iVar2 + 0x20) == 3) {
            uVar7 = *(iVar1 + 8) >> 0x10;
            uVar5 = *(iVar1 + 8);
            uVar6 = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar7 << 8 | uVar7 >> 8);
            uVar7 = *(iVar1 + 0xc) >> 0x10;
            uVar5 = *(iVar1 + 0xc);
            uVar8 = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar7 << 8 | uVar7 >> 8);
            if ((uVar8 < uVar6) && (uVar8 != 0)) {
                return 0x8000000000000007;
            }
            iVar2 = 0x10;
            uVar7 = (*(iVar1 + 2) << 8 | *(iVar1 + 2) >> 8) - 0xc;
        }
        else {
            uVar6 = 0;
            uVar7 = (*(iVar1 + 2) << 8 | *(iVar1 + 2) >> 8) - 4;
            iVar2 = 8;
        }
        arg2_00 = uVar7;
        iVar3 = fcn.00011b28(iVar2 + iVar1,arg2_00,0xd);
        if ((iVar3 == 0) || ((*(iVar3 + 4) & 0xff) == 0 && *(iVar3 + 4) >> 8 == 0)) {
            uVar4 = fcn.00011cf8(arg1,iVar2 + iVar1,arg2_00 & 0xffff,uVar6);
            return uVar4;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00011e9c @ 0x11e9c */

void fcn.00011e9c(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg1_00;
    uint *puVar2;
    int64_t iVar3;
    uint64_t uVar4;
    
    iVar1 = *(arg1 + 0x80);
    iVar3 = *(arg1 + 0x88);
    if ((iVar1 != 0) && (*(iVar1 + 0x18) != 0)) {
        arg1_00 = fcn.0001512c((*(iVar1 + 0x18) + *(iVar3 + 0x18) + -1) * 0x18 + 0x38);
        if (arg1_00 != 0) {
            if (arg1_00 != iVar3) {
                section..text(arg1_00,iVar3,(*(iVar3 + 0x18) - 1) * 0x18 + 0x38);
            }
            uVar4 = 0;
            if (*(iVar1 + 0x18) != 0) {
                puVar2 = iVar1 + 0x30;
                do {
                    *puVar2 = 0;
                    uVar4 = uVar4 + 1;
                    puVar2 = puVar2 + 6;
                } while (uVar4 < *(iVar1 + 0x18));
            }
            *(arg1_00 + 0x18) = *(arg1_00 + 0x18) + *(iVar1 + 0x18);
            iVar3 = *(iVar3 + 0x18) * 0x18 + 0x1c + arg1_00;
            if ((*(iVar1 + 0x18) * 3 != 0) && (iVar3 != iVar1 + 0x1c)) {
                section..text(iVar3,iVar1 + 0x1c,*(iVar1 + 0x18) * 0x18);
            }
            (**(*0x174c0 + 0x48))(*(arg1 + 0x80));
            (**(*0x174c0 + 0x48))(*(arg1 + 0x88));
            *(arg1 + 0x80) = 0;
            *(arg1 + 0x88) = arg1_00;
        }
    }
    return;
}


/* fcn.000138b0 @ 0x138b0 */

int64_t fcn.000138b0(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint *puVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    uint32_t *puStackX_8;
    
    iVar6 = *(arg1 + 0x10);
    puVar3 = *(iVar6 + 0x38);
    iVar5 = fcn.00011b28(*(arg1 + 0xc0) + 0xc,*(*(arg1 + 0xc0) + 4) - 4,2);
    uVar10 = 0;
    if (iVar5 == 0) {
        iVar6 = -0x7ffffffffffffff9;
    }
    else {
        uVar11 = 0;
        uVar2 = *(*(arg1 + 0x78) + 0x10);
        if (uVar2 != 0) {
            piVar9 = *(*(arg1 + 0x78) + 0x18);
            uVar13 = uVar2;
            uVar12 = uVar10;
            do {
                iVar4 = *piVar9;
                piVar9 = piVar9 + 1;
                uVar11 = uVar12 + 4 + (*(iVar4 + 2) << 8 | *(iVar4 + 2) >> 8);
                uVar12 = uVar11;
                uVar13 = uVar13 - 1;
            } while (uVar13 != 0);
        }
        puVar7 = fcn.0001512c(uVar11 + 0x400);
        if (puVar7 == NULL) {
            iVar6 = -0x7ffffffffffffff7;
        }
        else {
            *puVar7 = uVar11 + 0x400;
            puVar7[1] = 4;
            *(puVar7 + 2) = 3;
            puVar7[2] = *(iVar6 + 0x48) << 8 | puVar7[2];
            *(iVar6 + 0x48) = *(iVar6 + 0x48) + 1;
            uVar1 = *puVar3;
            puStackX_8 = puVar7;
            puVar8 = fcn.000118a4(puVar7 + 3,0x100,uVar1 << 8 | uVar1 >> 8,puVar3 + 2);
            *puVar8 = 0x2000800;
            *(puVar8 + 1) = 0;
            iVar6 = fcn.000118a4(puVar8 + 6,0x200,*(iVar5 + 2),iVar5 + 4);
            iVar6 = fcn.000118ec(iVar6,*(arg1 + 0x88),*(arg1 + 0x90),*(arg1 + 0x94));
            if (*(*(arg1 + 0x78) + 0x10) != 0) {
                do {
                    puVar3 = *(*(*(arg1 + 0x78) + 0x18) + uVar10 * 8);
                    iVar6 = fcn.000118a4(iVar6,*puVar3,puVar3[1],puVar3 + 4);
                    uVar10 = uVar10 + 1;
                } while (uVar10 < *(*(arg1 + 0x78) + 0x10));
            }
            puVar7[1] = puVar7[1] + (iVar6 - puVar7) + -0xc;
            iVar6 = fcn.00013364(arg1,3,&puStackX_8);
            puVar7 = puStackX_8;
            if (iVar6 < 0) {
                (**(*0x174c0 + 0x48))(puStackX_8);
            }
            else {
                *(*(arg1 + 0x88) + 8) = 2;
                *(arg1 + 0xe8) = 0;
                iVar6 = fcn.000135d0(arg1,puStackX_8,puVar8 + 1);
                if (iVar6 < 0) {
                    (**(*0x174c0 + 0x48))(puVar7);
                }
                else {
                    iVar6 = fcn.00012e18(arg1,puVar7,puVar8 + 1,0);
                }
            }
        }
    }
    return iVar6;
}


/* fcn.00013038 @ 0x13038 */

ulong fcn.00013038(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar1 = *(arg1 + 0xa0);
    piVar2 = *piVar1;
    while( true ) {
        piVar3 = piVar2;
        if (piVar1 == arg1 + 0xa0) {
            return 0x800000000000000e;
        }
        if (piVar1[2] == arg2) break;
        piVar2 = *piVar3;
        piVar1 = piVar3;
    }
    if (*(piVar1[3] + 8) == '\v') {
        piVar2 = *(arg1 + 0xb0);
        piVar3 = *piVar2;
        while (piVar2 != arg1 + 0xb0) {
            if (piVar2[2] == arg2) {
                if ((piVar2[5] != 0) && (arg3 != '\0')) {
                    (**(*0x174c0 + 0x68))();
                }
                *(*piVar2 + 8) = piVar2[1];
                *piVar2[1] = *piVar2;
                (**(*0x174c0 + 0x48))(piVar2);
            }
            piVar2 = piVar3;
            piVar3 = *piVar3;
        }
    }
    *(*piVar1 + 8) = piVar1[1];
    *piVar1[1] = *piVar1;
    (**(*0x174c0 + 0x48))(piVar1[3]);
    (**(*0x174c0 + 0x48))(piVar1);
    return 0;
}


/* fcn.00014554 @ 0x14554 */

//WARNING: Variable defined which should be unmapped: var_3h
//WARNING: Variable defined which should be unmapped: var_7h

int64_t fcn.00014554(int64_t arg1,uint32_t arg2)

{
    int iVar1;
    uint32_t *arg1_00;
    uint32_t *arg2_00;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t arg1_01;
    uint in_register_00000014;
    uint64_t uVar6;
    uint32_t *puStackX_10;
    int64_t iStackX_18;
    int32_t var_7h;
    int32_t var_3h;
    
    puStackX_10 = CONCAT44(in_register_00000014,arg2);
    if (puStackX_10[2] != '\a') {
        return -0x7ffffffffffffff9;
    }
    uVar6 = puStackX_10[1];
    arg2 = arg2 + 0xc;
    iStackX_18 = fcn.00011b28(arg2,puStackX_10[1] - 4,0xe);
    iVar3 = *(arg1 + 0x78);
    if (iStackX_18 == 0) {
        if (*(iVar3 + 0x31) != '\0') {
            return -0x7ffffffffffffff9;
        }
    }
    else if (*(iVar3 + 0x31) == '\0') {
        return -0x7ffffffffffffff9;
    }
    iVar1 = *(*(arg1 + 0x88) + 8);
    if (((iVar1 == 2) || (iVar1 - 7U < 2)) &&
       (iStackX_18 = fcn.00011b60(arg2,uVar6 & 0xffffffff,iVar3 + 0x20), iStackX_18 == 0)) {
        return 0;
    }
    iVar3 = fcn.00013364(arg1,4,&puStackX_10);
    arg2_00 = puStackX_10;
    if (iVar3 < 0) {
        return iVar3;
    }
    iVar3 = *(arg1 + 0x88);
    iVar1 = *(iVar3 + 8);
    if ((iVar1 - 3U & 0xfffffffd) == 0) {
        if (*(iVar3 + 0x18) == 0) {
            (**(*0x174c0 + 0x48))(*(iVar3 + 0x10));
            *(*(arg1 + 0x88) + 0x10) = 0;
            *(*(arg1 + 0x88) + 8) = 0;
        }
        else {
            *(iVar3 + 8) = 6;
        }
        *(arg1 + 0xd8) = 0;
        if (*(*(arg1 + 0x78) + 0x28) != 0) {
            (**(*0x174c0 + 0x68))();
        }
        *(arg1 + 0xe8) = 0;
        iVar3 = 0;
    }
    else {
        iStackX_18 = 0;
        iVar4 = fcn.00013504(arg1,puStackX_10,&iStackX_18);
        if (iVar4 < 0) {
            if (iStackX_18 == 0) {
                return 0;
            }
            uVar2 = *(iStackX_18 + 4) << 8 | *(iStackX_18 + 4) >> 8;
            if (uVar2 == 3) {
                if (1 < iVar1 - 7U) {
                    return 0;
                }
                iVar3 = fcn.000138b0(arg1);
            }
            else {
                if (uVar2 != 4) {
                    if (uVar2 != 5) {
                        return 0;
                    }
                    if (*(arg1 + 0xd0) == 0) {
                        return 0;
                    }
                    (**(*0x174c0 + 0x48))();
                    *(arg1 + 0xd0) = 0;
                    return 0;
                }
                if (iVar1 != 4) {
                    return 0;
                }
                if ((*(arg1 + 0x80) == 0) && (iVar3 != 0)) {
                    iVar4 = (*(iVar3 + 0x18) - 1) * 0x18 + 0x38;
                    arg1_01 = fcn.0001512c(iVar4);
                    *(arg1 + 0x80) = arg1_01;
                    if (arg1_01 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    if (arg1_01 != iVar3) {
                        section..text(arg1_01,iVar3,iVar4);
                    }
                }
                *(arg1 + 0x90) = 0;
                *(*(arg1 + 0x88) + 0x18) = 0;
                iVar3 = fcn.000136d4(arg1);
            }
            if (-1 < iVar3) {
                return 0;
            }
            return iVar3;
        }
        iVar3 = fcn.000133e4(arg1,arg2_00);
        if (iVar3 < 0) {
            if (iVar3 == -0x7ffffffffffffff2) {
                return 0;
            }
        }
        else {
            *(arg1 + 0xe8) = 0;
            if (*(*(arg1 + 0x88) + 0x10) != 0) {
                (**(*0x174c0 + 0x48))();
            }
            uVar5 = fcn.0001512c(*arg2_00);
            *(*(arg1 + 0x88) + 0x10) = uVar5;
            arg1_00 = *(*(arg1 + 0x88) + 0x10);
            if (arg1_00 == NULL) {
                return -0x7ffffffffffffff7;
            }
            if ((*arg2_00 != 0) && (arg1_00 != arg2_00)) {
                section..text(arg1_00,arg2_00,*arg2_00);
            }
            *(*(arg1 + 0x88) + 8) = 6;
            *(arg1 + 0xd8) = 0;
            fcn.00011e9c(arg1);
            if (*(*(arg1 + 0x78) + 0x28) != 0) {
                (**(*0x174c0 + 0x68))();
            }
        }
    }
    if (-1 < iVar3) {
        iVar3 = fcn.00013038(arg1,arg2_00[2] >> 8,0);
    }
    return iVar3;
}


/* fcn.00014898 @ 0x14898 */

int64_t fcn.00014898(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iStackX_10;
    
    iStackX_10 = arg2;
    iVar1 = fcn.00013364(arg1,2,&iStackX_10);
    arg2_00 = iStackX_10;
    if (-1 < iVar1) {
        *(arg1 + 0xc0) = iStackX_10;
        iVar1 = fcn.00013038(arg1,*(iStackX_10 + 8) >> 8,0);
        if (-1 < iVar1) {
            iVar1 = fcn.00011b28(arg2_00 + 0xc,*(arg2_00 + 4) - 4,0xc);
            if (iVar1 != 0) {
                arg1_00 = fcn.0001512c(0x10);
                *(arg1 + 0xd0) = arg1_00;
                if (arg1_00 == 0) {
                    return -0x7ffffffffffffff7;
                }
                if (arg1_00 != iVar1 + 4) {
                    section..text(arg1_00,iVar1 + 4,0x10);
                }
            }
            iVar1 = fcn.000133e4(arg1,arg2_00);
            if (-1 < iVar1) {
                iVar1 = fcn.000138b0(arg1);
            }
        }
    }
    return iVar1;
}


/* fcn.00014968 @ 0x14968 */

int64_t fcn.00014968(int64_t arg1,int64_t arg2)

{
    uint32_t arg2_00;
    bool bVar1;
    uint32_t *puVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint32_t *puStackX_10;
    int64_t iStackX_18;
    
    puStackX_10 = arg2;
    iStackX_18 = fcn.00011b28(arg2 + 0xc,*(arg2 + 4) - 4,0xe);
    bVar1 = false;
    if (((iStackX_18 != 0) && (*(*(arg1 + 0x78) + 0x31) != '\0')) && (*(arg2 + 8) == '\a')) {
        iVar3 = fcn.00014554(arg1,arg2);
        return iVar3;
    }
    if ((*(arg2 + 8) != '\x02') || (iVar3 = fcn.00013504(arg1,arg2,&iStackX_18), iVar3 < 0)) {
        return -0x7ffffffffffffff9;
    }
    iVar3 = fcn.00013364(arg1,1,&puStackX_10);
    puVar2 = puStackX_10;
    if (iVar3 < 0) {
        if (iVar3 != -0x7ffffffffffffffa) {
            return iVar3;
        }
        uVar6 = *(arg1 + 200);
        bVar1 = false;
        if ((uVar6 == 0xff) && (*(arg1 + 0xc0) == 0)) {
            bVar1 = true;
        }
        arg2_00 = puStackX_10;
        iVar5 = fcn.00011b28(arg2_00 + 0xc,puStackX_10[1] - 4,7);
        if (*(arg1 + 0xc0) != 0) {
            if ((iVar5 == 0) || (*(iVar5 + 4) <= uVar6)) goto code_r0x00014b20;
            if (*(arg1 + 0xc0) != 0) {
                (**(*0x174c0 + 0x48))();
            }
        }
        puVar4 = fcn.0001512c(*puVar2);
        *(arg1 + 0xc0) = puVar4;
        if (puVar4 == NULL) {
            return -0x7ffffffffffffff7;
        }
        if ((*puVar2 != 0) && (puVar4 != puVar2)) {
            section..text(puVar4,arg2_00,*puVar2);
        }
        if (iVar5 != 0) {
            *(arg1 + 200) = *(iVar5 + 4);
        }
    }
    else {
        if (*(arg1 + 0xc0) != 0) {
            (**(*0x174c0 + 0x48))();
        }
        puVar2 = puStackX_10;
        puVar4 = fcn.0001512c(*puStackX_10);
        *(arg1 + 0xc0) = puVar4;
        if (puVar4 == NULL) {
            return -0x7ffffffffffffff7;
        }
        if ((*puVar2 != 0) && (puVar4 != puVar2)) {
            section..text(puVar4,puVar2,*puVar2);
        }
        *(arg1 + 200) = 0xff;
    }
code_r0x00014b20:
    if ((*(arg1 + 200) == -1) || (bVar1)) {
        iVar3 = fcn.00014898(arg1,*(arg1 + 0xc0));
    }
    return iVar3;
}


/* fcn.0001629c @ 0x1629c */

uint32_t fcn.0001629c(int64_t arg1,ulong noname_1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    if ((arg2 == 0) || (uVar3 = *(arg1 + 0x84), uVar3 == 0)) {
        uVar3 = 0;
    }
    else {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if ((*piVar2 != 0) && (*piVar2 != 0)) break;
                uVar3 = uVar5 + 1;
                uVar5 = uVar3;
                piVar2 = piVar2 + 10;
            } while (uVar3 < *(arg1 + 0x80));
        }
        uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
        iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar3 < arg2) {
            if ((uVar3 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,uVar3);
            }
            arg3 = arg3 + uVar3;
            arg2 = arg2 - uVar3;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (arg2 <= uVar4) {
                    uVar3 = uVar3 + arg2;
                    iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((arg2 != 0) && (arg3 != iVar1)) {
                        section..text(arg3,iVar1,arg2);
                    }
                    break;
                }
                iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                arg2 = arg2 - uVar4;
                uVar3 = uVar3 + uVar4;
                if ((uVar4 != 0) && (arg3 != iVar1)) {
                    section..text(arg3,iVar1,uVar4);
                }
                arg3 = arg3 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((arg2 != 0) && (arg3 != iVar1)) {
                section..text(arg3,iVar1,arg2);
            }
            uVar3 = arg2;
        }
    }
    return uVar3;
}


/* fcn.00014c5c @ 0x14c5c */

void fcn.00014c5c(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    
    iVar3 = *(arg1 + 0x10);
    if ((*(arg2 + 8) == '\a') && (piVar1 = arg1 + 0xb0, *piVar1 != piVar1)) {
        piVar4 = *piVar1;
        do {
            if (*(piVar4 + 2) == *(arg2 + 8) >> 8) {
                iVar2 = fcn.00011b28(arg2 + 0xc,*(arg2 + 4) - 4,2);
                if ((iVar2 != 0) && (iVar2 = (*piVar4[3])(arg1 + 0x28,piVar4[4]), iVar2 != -0x7ffffffffffffffa)) {
                    fcn.00013038(arg1,*(arg2 + 8) >> 8,0);
                    *(arg1 + 0xd8) = iVar2;
                }
                break;
            }
        } while (piVar4 != piVar1);
    }
    iVar3 = fcn.00016e1c(*(iVar3 + 0x40));
    if (iVar3 < 0) {
        fcn.00013134(arg1,2);
    }
    return;
}


/* fcn.00014b58 @ 0x14b58 */

void fcn.00014b58(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint16_t *puVar5;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(arg1_00 + 0x10);
    puVar5 = *(iVar2 + 0x38);
    if ((*(arg1_00 + 0x78) != 0) && ((uVar3 = *(arg2 + 8) & 0xff, uVar3 == 2 || (uVar3 == 7)))) {
        uVar3 = arg2;
        iVar4 = fcn.00011b28(uVar3 + 0xc,*(arg2 + 4) - 4,1);
        if (iVar4 != 0) {
            if ((*puVar5 == 0) || (iVar4 + 4 == puVar5 + 1)) {
                iVar4 = 0;
            }
            else {
                iVar4 = fcn.000102e0(iVar4 + 4,puVar5 + 1,*puVar5);
            }
            if ((iVar4 == 0) && (iVar4 = fcn.00011b28(uVar3 + 0xc,*(arg2 + 4) - 4,2), iVar4 != 0)) {
                iVar1 = *(*(arg1_00 + 0x88) + 8);
                if (iVar1 == 1) {
                    fcn.00014968(arg1_00,arg2);
                }
                else if (((iVar1 - 2U < 4) || (iVar1 - 7U < 2)) && (iVar4 = fcn.00014554(arg1_00,uVar3), iVar4 < 0))
                goto code_r0x00014c3c;
            }
        }
    }
    iVar4 = fcn.00016e1c(*(iVar2 + 0x40));
    if (-1 < iVar4) {
        return;
    }
code_r0x00014c3c:
    fcn.00013278(arg1_00,iVar4);
    return;
}


/* fcn.0001437c @ 0x1437c */

int64_t fcn.0001437c(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint16_t *puVar3;
    int64_t iVar4;
    uint32_t *puVar5;
    int64_t iVar6;
    uint *puVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    int64_t *piVar11;
    uint64_t uVar12;
    uint32_t *puStackX_8;
    
    uVar10 = 0;
    iVar6 = *(arg1 + 0x10);
    uVar8 = 0;
    uVar2 = *(*(arg1 + 0x78) + 0x10);
    puVar3 = *(iVar6 + 0x38);
    if (uVar2 != 0) {
        piVar11 = *(*(arg1 + 0x78) + 0x18);
        uVar12 = uVar2;
        uVar9 = uVar10;
        do {
            iVar4 = *piVar11;
            piVar11 = piVar11 + 1;
            uVar8 = uVar9 + 4 + (*(iVar4 + 2) << 8 | *(iVar4 + 2) >> 8);
            uVar9 = uVar8;
            uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
    }
    puVar5 = fcn.0001512c(uVar8 + 0x400);
    if (puVar5 == NULL) {
        iVar6 = -0x7ffffffffffffff7;
    }
    else {
        *puVar5 = uVar8 + 0x400;
        puVar5[1] = 4;
        *(puVar5 + 2) = 4;
        puVar5[2] = *(iVar6 + 0x48) << 8 | 4;
        *(iVar6 + 0x48) = *(iVar6 + 0x48) + 1;
        uVar1 = *puVar3;
        puStackX_8 = puVar5;
        puVar7 = fcn.000118a4(puVar5 + 3,0x100,uVar1 << 8 | uVar1 >> 8,puVar3 + 2);
        *puVar7 = 0x2000800;
        *(puVar7 + 1) = 0;
        iVar6 = fcn.000118ec(puVar7 + 6,*(arg1 + 0x88),*(arg1 + 0x90),*(arg1 + 0x94));
        if (*(*(arg1 + 0x78) + 0x10) != 0) {
            do {
                puVar3 = *(*(*(arg1 + 0x78) + 0x18) + uVar10 * 8);
                iVar6 = fcn.000118a4(iVar6,*puVar3,puVar3[1],puVar3 + 4);
                uVar10 = uVar10 + 1;
            } while (uVar10 < *(*(arg1 + 0x78) + 0x10));
        }
        puVar5[1] = puVar5[1] + (iVar6 - puVar5) + -0xc;
        iVar6 = fcn.00013364(arg1,7,&puStackX_8);
        puVar5 = puStackX_8;
        if (iVar6 < 0) {
            (**(*0x174c0 + 0x48))(puStackX_8);
        }
        else {
            *(*(arg1 + 0x88) + 8) = 4;
            *(arg1 + 0xe8) = 0;
            iVar6 = fcn.000135d0(arg1,puStackX_8,puVar7 + 1);
            if (iVar6 < 0) {
                (**(*0x174c0 + 0x48))(puVar5);
            }
            else {
                iVar6 = fcn.00012e18(arg1,puVar5,puVar7 + 1,0);
            }
        }
    }
    return iVar6;
}


/* fcn.00016eac @ 0x16eac */

int64_t fcn.00016eac(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.000151f8 @ 0x151f8 */

ulong fcn.000151f8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    cVar1 = *arg1;
    do {
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        iVar3 = 0;
        while ((cVar1 != '\0' && (cVar1 != ';'))) {
            iVar3 = iVar3 + 1;
            cVar1 = *(arg1 + iVar3);
        }
        iVar2 = fcn.00016eac(arg1,arg2,iVar3);
        if ((iVar2 == 0) && (*(iVar3 + arg2) == '\0')) {
            return 0;
        }
        arg1 = arg1 + iVar3;
        cVar1 = *arg1;
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar1 != ';') break;
            arg1 = arg1 + 1;
            cVar1 = *arg1;
        } while (cVar1 != '\0');
        cVar1 = *arg1;
    } while( true );
}


/* fcn.00015158 @ 0x15158 */

void fcn.00015158(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000150fc();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00016ee0 @ 0x16ee0 */

ulong fcn.00016ee0(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x174c0 + 0x98))(param_1,0x16f70,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00015934 @ 0x15934 */

int64_t fcn.00015934(int64_t arg1,int64_t arg2)

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
    iVar5 = fcn.0001586c(arg1,&iStackX_20);
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
            if ((uVar3 != 0) && (iVar7 = fcn.00015158(iVar5,uVar3 << 5,puVar4 + 10), uVar9 = 0, iVar7 == 0)) {
                return -0x7ffffffffffffff7;
            }
            iVar5 = (**(iVar8 + 0x28))(iVar8);
            if ((((-1 < iVar5) && (iVar5 = (**(iVar8 + 0x10))(iVar8), -1 < iVar5)) &&
                (iVar5 = (**(iVar8 + 8))(iVar8), -1 < iVar5)) && (iVar5 = (**(iVar8 + 0x18))(iVar8,0,0), -1 < iVar5)
               ) {
                *arg2 = *(*(iVar8 + 0x78) + 0x28c);
                iVar8 = (**(iVar8 + 0x30))(iVar8,uVar2,uVar1 ^ uVar2,uVar9,uVar3,iVar7);
                if (iVar7 != 0) {
                    (**(*0x174c0 + 0x48))(iVar7);
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
            (**(*0x174c0 + 0x48))(iVar7);
        }
        return iVar5;
    }
    *arg2 = 1;
    return 0;
}


/* fcn.00015198 @ 0x15198 */

ulong fcn.00015198(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x174b8;
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


/* fcn.00015e3c @ 0x15e3c */

uint * fcn.00015e3c(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.0001512c((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x00015ece;
        puVar2 = fcn.0001512c(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x00015ece;
        }
        (**(*0x174c0 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x00015ece:
    return puVar1;
}


/* fcn.00015634 @ 0x15634 */

//WARNING: Variable defined which should be unmapped: var_20h

uint64_t * fcn.00015634(uint32_t arg1)

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


/* fcn.0001640c @ 0x1640c */

void fcn.0001640c(int64_t arg1)

{
    char cVar1;
    
    cVar1 = *(*(arg1 + 8) + 0x20);
    if ((cVar1 == '\x04') || (cVar1 == '\x06')) {
        (**(*0x174c0 + 0x70))(*(arg1 + 0x28));
    }
    //WARNING: Could not recover jumptable at 0x00016443. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x174c0 + 0x48))(arg1);
    return;
}


/* fcn.00016228 @ 0x16228 */

ulong fcn.00016228(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.000106bc @ 0x106bc */

void fcn.000106bc(int64_t arg1)

{
    uint *arg1_00;
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x2e8);
    arg1_00 = arg1 + 0x2f0;
    fcn.000102c0(arg1_00,0x34);
    *(arg1 + 0x2f4) = 0x80;
    *arg1_00 = 0;
    *(arg1 + 0x2f8) = 0;
    *(arg1 + 0x322) = 0;
    *(arg1 + 0x310) = 0x222;
    //WARNING: Could not recover jumptable at 0x0001070e. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 8))(iVar1,arg1_00);
    return;
}


/* fcn.00015820 @ 0x15820 */

void fcn.00015820(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x174c0 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.00016bf4 @ 0x16bf4 */

void fcn.00016bf4(int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar2 = *(arg1 + 0x2d0);
    puVar3 = *puVar2;
    while (puVar2 != arg1 + 0x2d0) {
        iVar1 = *(arg1 + 0x2e8);
        if (*(arg1 + 0x20) == '\x04') {
            (**(iVar1 + 0x30))();
        }
        else {
            (**(iVar1 + 0x28))(iVar1,puVar2 + 0xb);
        }
        puVar2 = puVar3;
        puVar3 = *puVar3;
    }
    return;
}


/* fcn.0001683c @ 0x1683c */

uint * fcn.0001683c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    uint16_t uVar2;
    uint *puVar3;
    uint *puVar4;
    int64_t iVar5;
    uint16_t uVar6;
    uint auStackX_8 [2];
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    puVar3 = fcn.000150fc(arg1,((*(arg2 + 0x80) - 1) + 10) * 0x10);
    if (puVar3 == NULL) {
        return NULL;
    }
    *puVar3 = 0x54504455;
    puVar4 = puVar3 + 2;
    *puVar4 = puVar4;
    *(puVar3 + 4) = puVar4;
    *(puVar3 + 0xc) = 0;
    *(puVar3 + 8) = 0x1189c;
    *(puVar3 + 6) = arg1;
    *(puVar3 + 10) = arg2;
    auStackX_8[0] = *(arg2 + 0x80);
    cVar1 = *(arg1 + 0x20);
    *(puVar3 + 0x1a) = 0x8000000000000006;
    if (cVar1 == '\x04') {
        iVar5 = (**(*0x174c0 + 0x50))(0x200,0x10);
        if (-1 < iVar5) {
            *(puVar3 + 0x1c) = puVar3 + 0x1e;
            *(puVar3 + 0x1e) = 0;
            *(puVar3 + 0x20) = 0;
            puVar3[0x22] = *(arg2 + 0x84);
            fcn.00016228(arg2,puVar3 + 0x24,auStackX_8);
            puVar3[0x23] = auStackX_8[0];
            if (arg3 == 0) {
                return puVar3;
            }
            uVar6 = *arg3;
            uVar2 = *arg3 >> 0x10;
            if (puVar3 + 0xf != &iStackX_20) {
                iStackX_20._0_4_ = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar2 << 8 | uVar2 >> 8);
                section..text(puVar3 + 0xf,&iStackX_20,4);
            }
            uVar2 = *(arg3 + 0x14) >> 0x10;
            uVar6 = *(arg3 + 0x14);
            iStackX_20 = CONCAT44(iStackX_20._4_4_,CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar2 << 8 | uVar2 >> 8));
            if (puVar3 + 0x42 != &iStackX_20) {
                section..text(puVar3 + 0x42,&iStackX_20,4);
            }
            *(puVar3 + 0x10) = *(arg3 + 0x10);
            *(puVar3 + 0x46) = *(arg3 + 0x24);
code_r0x00016a5d:
            *(puVar3 + 0x1e) = puVar3 + 0xf;
            return puVar3;
        }
    }
    else {
        iVar5 = (**(*0x174c0 + 0x50))(0x200,0x10,0x164b0,puVar3,puVar3 + 0x18);
        if (-1 < iVar5) {
            *(puVar3 + 0x1c) = puVar3 + 0x1e;
            *(puVar3 + 0x1e) = 0;
            puVar3[0x20] = *(arg2 + 0x84);
            fcn.00016228(arg2,puVar3 + 0x22,auStackX_8);
            puVar3[0x21] = auStackX_8[0];
            if (arg3 == 0) {
                return puVar3;
            }
            if (puVar3 + 0xf != arg3) {
                section..text(puVar3 + 0xf,arg3,0x10);
            }
            if (puVar3 + 0x4e != arg3 + 0x14) {
                section..text(puVar3 + 0x4e,arg3 + 0x14,0x10);
            }
            *(puVar3 + 0x13) = *(arg3 + 0x10);
            *(puVar3 + 0x5e) = *(arg3 + 0x24);
            goto code_r0x00016a5d;
        }
    }
    (**(*0x174c0 + 0x48))(puVar3);
    return NULL;
}


/* fcn.0001678c @ 0x1678c */

uint * fcn.0001678c(int64_t arg1,ulong noname_1,int64_t arg2)

{
    uint *puVar1;
    int64_t iVar2;
    
    puVar1 = fcn.000150fc(arg1,0x40);
    if (puVar1 != NULL) {
        puVar1[8] = 0;
        *puVar1 = 0x52504455;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 6) = arg2;
        *(puVar1 + 4) = 0x14d28;
        *(puVar1 + 0xe) = 0;
        *(puVar1 + 0xc) = 0x8000000000000006;
        iVar2 = (**(*0x174c0 + 0x50))(0x200,0x10,0x16770,puVar1,puVar1 + 10);
        if (-1 < iVar2) {
            return puVar1;
        }
        (**(*0x174c0 + 0x48))(puVar1);
    }
    return NULL;
}


