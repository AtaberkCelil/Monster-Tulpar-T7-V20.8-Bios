// decompiled by r2ghidra: 1955_Ip6Dxe.pe32
// functions: 199

/* entry0 @ 0x10508 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    fcn.00010550(arg1,in_RDX);
    arg2 = 0x240c0;
    (**(*0x25e20 + 0x98))(arg1,0x240c0,aiStackX_18);
    *(aiStackX_18[0] + 0x58) = 0x10384;
    fcn.00010620(arg1,arg2);
    return;
}


/* fcn.00010550 @ 0x10550 */

void fcn.00010550(ulong noname_0,int64_t arg1)

{
    *0x25e20 = *(arg1 + 0x60);
    *0x25e28 = *(arg1 + 0x58);
    *0x25e18 = arg1;
    (**(*0x25e20 + 0x140))(0x25138,0,0x25e38);
    (**(*0x25e20 + 0x140))(0x25128,0,0x25e50);
    (**(*0x25e20 + 0x140))(0x250f8,0,0x25e30);
    (**(*0x25e20 + 0x140))(0x251f8,0,0x25e40);
    (**(*0x25e20 + 0x140))(0x25118,0,0x25e48);
    //WARNING: Could not recover jumptable at 0x00010617. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x25e20 + 0x140))(0x251b8,0,0x25e60);
    return;
}


/* fcn.00010620 @ 0x10620 */

ulong fcn.00010620(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg2_00;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    arg2_00 = 0x251d8;
    iVar1 = (**(*0x25e28 + 0x48))(L"NetworkStackVar",0x251d8,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        fcn.00020d9c(0x250e8,arg2_00);
        *0x25228 = arg1;
        *0x25230 = arg1;
        uVar2 = (**(*0x25e20 + 0x148))(0x25230,0x25188,0x25208,0x251a8,0x252a0,0x24100,0x25288,0);
    }
    return uVar2;
}


/* fcn.00020d9c @ 0x20d9c */

int64_t fcn.00020d9c(int64_t arg1,int64_t arg2)

{
    ulong in_R8;
    ulong in_R9;
    int64_t aiStackX_10 [3];
    ulong in_stack_00000028;
    
    aiStackX_10[0] = arg2;
    (**(*0x25e20 + 0x50))(0x200,8,in_R8,in_R9,aiStackX_10);
    (**(*0x25e20 + 0xa8))(arg1,aiStackX_10[0],in_stack_00000028);
    (**(*0x25e20 + 0x68))(aiStackX_10[0]);
    return aiStackX_10[0];
}


/* fcn.00023f88 @ 0x23f88 */

ulong fcn.00023f88(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    char *pcStackX_10;
    int64_t var_bp_20h;
    uchar auStack_28 [8];
    int16_t var_18h;
    int16_t var_16h;
    
    iVar2 = 0;
    var_bp_20h = 0;
    if (arg1 != 0) {
        iStackX_8 = arg1;
        pcStackX_10 = arg2;
        iVar1 = (**(*0x25e20 + 0x98))(arg1,0x24130,&pcStackX_10);
        if (-1 < iVar1) {
            iVar1 = (**(*0x25e20 + 0xb8))(0x25108,&pcStackX_10,&iStackX_8);
            if (iVar1 < 0) {
                while( true ) {
                    if ((*pcStackX_10 == '\x7f') && (pcStackX_10[1] == -1)) {
                        return 0;
                    }
                    if ((*pcStackX_10 == '\x03') && (pcStackX_10[1] == '\x05')) break;
                    pcStackX_10 = pcStackX_10 + *(pcStackX_10 + 2);
                }
                return 1;
            }
            iVar1 = (**(*0x25e20 + 0x98))(iStackX_8,0x25108,&var_bp_20h);
            if (((-1 < iVar1) && (iVar1 = (**(var_bp_20h + 0x30))(var_bp_20h,auStack_28), -1 < iVar1)) &&
               (*0x25238 != -1)) {
                iVar1 = iVar2;
                do {
                    if (*(iVar2 + 0x2523a) == -1) {
                        return 0;
                    }
                    if ((*(iVar2 + 0x25238) == var_18h) && (*(iVar2 + 0x2523a) == var_16h)) {
                        return 1;
                    }
                    iVar1 = iVar1 + 1;
                    iVar2 = iVar1 * 4;
                } while (*(iVar2 + 0x25238) != -1);
            }
        }
    }
    return 0;
}


/* fcn.00019348 @ 0x19348 */

void fcn.00019348(int64_t arg1)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    
    iVar2 = *(arg1 + 0x3a8);
    (**(iVar2 + 0x38))(iVar2);
    (**(iVar2 + 8))(iVar2,0);
    *(arg1 + 0x3a8) = 0;
    iVar2 = (**(*0x25e20 + 0x120))(*(arg1 + 0x3a0),0x24110,*(arg1 + -0x2d8),*(arg1 + -0x2d0));
    if (-1 < iVar2) {
        uVar1 = *(arg1 + 0x3a0);
        iVar2 = (**(*0x25e20 + 0x118))(*(arg1 + -0x2d0),0x240d0,&iStackX_8,*(arg1 + -0x2d8),*(arg1 + -0x2d0),2);
        if (-1 < iVar2) {
            (**(iStackX_8 + 8))(iStackX_8,uVar1);
        }
        *(arg1 + 0x3a0) = 0;
    }
    return;
}


/* fcn.00022b74 @ 0x22b74 */

void fcn.00022b74(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = *piVar2;
    piVar4 = **piVar2;
    while (piVar3 != piVar2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        iVar1 = *0x25e20;
        piVar2[4] = piVar2[4] + -1;
        (**(iVar1 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    piVar3 = piVar2[2];
    piVar4 = *piVar3;
    while (piVar3 != piVar2 + 2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        (**(*0x25e20 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    return;
}


/* fcn.0001f198 @ 0x1f198 */

void fcn.0001f198(int64_t arg1)

{
    int iVar1;
    char cVar2;
    int64_t arg2;
    
    if (*(arg1 + 0x3e0) != 0) {
        (**(*0x25e20 + 0x120))(*(arg1 + -0x2d0),0x25168,*(arg1 + -0x2d8));
        (**(*0x25e20 + 0x150))(*(arg1 + 0x3e0),0x24130,*(arg1 + 0x400),0x25158,arg1 + 1000,0);
    }
    if (*(arg1 + 0x400) != 0) {
        (**(*0x25e20 + 0x48))();
    }
    arg2 = *(arg1 + 0x408);
    if (arg2 != 0) {
        (**(*0x25e50 + 8))(*0x25e50);
    }
    cVar2 = fcn.00023f88(*(arg1 + -0x2d0),arg2);
    if (cVar2 == '\0') {
        iVar1 = arg1;
        fcn.0001d838(iVar1 + 0x420);
        fcn.0001d838(iVar1 + 0x438);
        fcn.0001d838(iVar1 + 0x450);
    }
    *(arg1 + 0x430) = 0;
    *(arg1 + 0x448) = 0;
    *(arg1 + 0x460) = 0;
    return;
}


/* fcn.0001c370 @ 0x1c370 */

ulong fcn.0001c370(int64_t arg1,int64_t arg2)

{
    fcn.00010280(arg2,0x10);
    *arg2 = 0x2ff;
    *(arg2 + 0xf) = (arg1 != '\0') + '\x01';
    return 0;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 81472 named .text
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


/* fcn.0001a5d0 @ 0x1a5d0 */

int64_t fcn.0001a5d0(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t *piVar7;
    
    piVar2 = fcn.00019fa8(arg1,arg2);
    if (piVar2 == NULL) {
        iVar3 = -0x7ffffffffffffff2;
    }
    else {
        if ((piVar2[2] < 1) || (iVar3 = piVar2[2] + -1, piVar2[2] = iVar3, iVar3 < 1)) {
            piVar1 = arg1 + 0x880;
            piVar7 = *piVar1;
            iVar3 = piVar2 + 0x2d;
            iVar6 = 0;
            if (piVar7 != piVar1) {
                do {
                    if (piVar7 + 0x2d == iVar3) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = fcn.000102e0(piVar7 + 0x2d,iVar3,0x20);
                    }
                    piVar7 = *piVar7;
                    iVar5 = iVar6 + 1;
                    if (iVar4 != 0) {
                        iVar5 = iVar6;
                    }
                    iVar6 = iVar5;
                } while (piVar7 != piVar1);
                if (((iVar5 == 1) && (iVar3 = (**(*(arg1 + 0x928) + 0x18))(*(arg1 + 0x928),0,iVar3), iVar3 < 0)) &&
                   (iVar3 != -0x7ffffffffffffff2)) {
                    return iVar3;
                }
            }
            if ((*(piVar2 + 0x2c) != '\0') && (iVar3 = fcn.0001a1a8(arg1,arg2), iVar3 < 0)) {
                return iVar3;
            }
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            (**(*0x25e20 + 0x48))(piVar2);
        }
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00019728 @ 0x19728 */

void fcn.00019728(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    fcn.000124d8(arg1,-0x7fffffffffffffeb,0x19404,arg2);
    *(arg1 + 0x18) = *(arg1 + 0x18) + -1;
    if (*(arg1 + 0x18) < 1) {
        fcn.000124d8(arg1,-0x7fffffffffffffeb,0x19404,0);
        piVar1 = arg1 + 0x78;
        while (*piVar1 != piVar1) {
            iVar2 = *piVar1;
            piVar3 = *piVar1;
            if (piVar3 != piVar1) {
                *piVar1 = *piVar3;
                *(*piVar3 + 8) = piVar1;
            }
            (**(*0x25e20 + 0x48))(iVar2 + -8);
        }
        piVar1 = arg1 + 0x88;
        while (*piVar1 != piVar1) {
            piVar3 = *piVar1;
            if (piVar3 != piVar1) {
                *piVar1 = *piVar3;
                *(*piVar3 + 8) = piVar1;
            }
            (**(*0x25e20 + 0x48))();
        }
        fcn.0001c5f0(*(arg1 + 0x38),arg1 + 0x20,arg1 + 0x30,0);
        *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
        **(arg1 + 0x10) = *(arg1 + 8);
        (**(*0x25e20 + 0x48))(arg1);
    }
    return;
}


/* fcn.00014d00 @ 0x14d00 */

void fcn.00014d00(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    *(*arg2 + 8) = *(arg2 + 8);
    **(arg2 + 8) = *arg2;
    do {
        iVar1 = fcn.00012b3c(*(arg1 + 0x50),0,0,arg2 + 0x1a);
    } while (iVar1 != -0x7ffffffffffffff2);
    //WARNING: Could not recover jumptable at 0x00014d64. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x25e20 + 0x48))(arg2);
    return;
}


/* fcn.00012b3c @ 0x12b3c */

ulong fcn.00012b3c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    char cVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    ulong uVar8;
    uchar uVar9;
    int64_t *piVar10;
    int64_t *piVar11;
    int64_t *piVar12;
    
    uVar9 = arg3;
    iVar1 = *(arg1 + 8);
    piVar7 = ((arg3 & 0xffU) + 1) * 0x10 + arg1;
    uVar8 = 0;
    piVar6 = *piVar7;
    piVar11 = *piVar6;
    do {
        piVar4 = piVar11;
        if (piVar6 == piVar7) {
            if (iVar1 == *(arg1 + 8)) {
                uVar8 = 0x800000000000000e;
            }
            return uVar8;
        }
        if (arg2 == 0) {
code_r0x00012ba2:
            if ((arg4 != 0) && (arg4 != piVar6 + 0x2d)) {
                arg3 = 0;
                iVar3 = fcn.000102e0(arg4,piVar6 + 0x2d,0x10);
                if (iVar3 != 0) goto code_r0x00012c59;
            }
            piVar11 = arg1 + 0x820;
            iVar3 = 0x1f;
            piVar12 = piVar11;
            do {
                piVar5 = *piVar12;
                piVar10 = **piVar12;
                while (piVar5 != piVar11) {
                    if (piVar5[3] == piVar6) {
                        *(*piVar5 + 8) = piVar5[1];
                        *piVar5[1] = *piVar5;
                        piVar5 = piVar5 + 2;
                        *piVar5 = *piVar5 + -1;
                        if (*piVar5 == 0) {
                            (**(*0x25e20 + 0x48))();
                        }
                    }
                    piVar5 = piVar10;
                    piVar10 = *piVar10;
                }
                piVar11 = piVar11 + 2;
                piVar12 = piVar12 + 2;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            *(*piVar6 + 8) = piVar6[1];
            *piVar6[1] = *piVar6;
            piVar11 = piVar6 + 2;
            *piVar11 = *piVar11 + -1;
            if (*piVar11 == 0) {
                (**(*0x25e20 + 0x48))(piVar6);
            }
            *(arg1 + 8) = *(arg1 + 8) + -1;
        }
        else {
            cVar2 = fcn.000229d0(arg2,piVar6 + 0x1d,arg3);
            if (cVar2 != '\0') goto code_r0x00012ba2;
        }
code_r0x00012c59:
        arg3 = CONCAT71(arg3 >> 8,uVar9);
        piVar11 = *piVar4;
        piVar6 = piVar4;
    } while( true );
}


/* fcn.000146d0 @ 0x146d0 */

void fcn.000146d0(int64_t arg1,uint32_t arg2)

{
    ulong *arg2_00;
    uint in_register_00000014;
    ulong *puVar1;
    unkbyte7 in_R8;
    unkbyte7 in_R9;
    
    puVar1 = CONCAT44(in_register_00000014,arg2);
    arg2_00 = *puVar1;
    while (arg2_00 != puVar1) {
        fcn.00014588(arg1,arg2_00,CONCAT71(in_R8,puVar1 == arg1 + 0x8c8),CONCAT71(in_R9,1));
        arg2_00 = *puVar1;
    }
    return;
}


/* fcn.00012960 @ 0x12960 */

void fcn.00012960(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    
    *arg1 = *arg1 + -1;
    if (*arg1 < 1) {
        piVar3 = arg1 + 0x10;
        iVar2 = 0x81;
        piVar4 = piVar3;
        do {
            piVar1 = *piVar3;
            piVar5 = **piVar3;
            while (piVar1 != piVar4) {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                piVar1 = piVar1 + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    (**(*0x25e20 + 0x48))();
                }
                piVar1 = piVar5;
                piVar5 = *piVar5;
            }
            piVar4 = piVar4 + 2;
            piVar3 = piVar3 + 2;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        piVar3 = arg1 + 0x820;
        iVar2 = 0x1f;
        piVar4 = piVar3;
        do {
            piVar1 = *piVar3;
            piVar5 = **piVar3;
            while (piVar1 != piVar4) {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                piVar1 = piVar1 + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    (**(*0x25e20 + 0x48))();
                }
                piVar1 = piVar5;
                piVar5 = *piVar5;
            }
            piVar4 = piVar4 + 2;
            piVar3 = piVar3 + 2;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        (**(*0x25e20 + 0x48))(arg1);
    }
    return;
}


/* fcn.0001b9d4 @ 0x1b9d4 */

void fcn.0001b9d4(int64_t arg1)

{
    int64_t *arg1_00;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = 0x7f;
    piVar2 = arg1;
    do {
        arg1_00 = *arg1;
        piVar3 = **arg1;
        while (arg1_00 != piVar2) {
            *(*arg1_00 + 8) = arg1_00[1];
            *arg1_00[1] = *arg1_00;
            fcn.0001ab6c(arg1_00);
            arg1_00 = piVar3;
            piVar3 = *piVar3;
        }
        piVar2 = piVar2 + 2;
        arg1 = arg1 + 0x10;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.00014a84 @ 0x14a84 */

ulong fcn.00014a84(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    char cVar5;
    ulong uVar6;
    int64_t iVar7;
    char cVar8;
    ulong in_stack_00000028;
    code *in_stack_00000030;
    ulong in_stack_00000038;
    
    cVar8 = arg3;
    if ((arg4 == '\0') || (in_stack_00000030 == NULL)) {
        piVar1 = arg2 + 0x68;
        piVar4 = **piVar1;
        piVar3 = *piVar1;
        while (piVar2 = piVar4, piVar3 != piVar1) {
            if (cVar8 != '\0') {
                iVar7 = *(piVar3[4] + 0x20);
                if (*(iVar7 + 0x18) != -1) {
                    fcn.0001d54c(arg1,piVar3[4],arg3,iVar7 + 8);
                }
            }
            if ((in_stack_00000030 == NULL) ||
               (cVar5 = (*in_stack_00000030)(piVar3 + -1,in_stack_00000038), cVar5 != '\0')) {
                arg3 = 0;
                *(*piVar3 + 8) = piVar3[1];
                *piVar3[1] = *piVar3;
                (*piVar3[3])(piVar3[4],in_stack_00000028,0,piVar3[5]);
                (**(*0x25e20 + 0x70))(piVar3[0xe]);
                (**(*0x25e20 + 0x48))(piVar3 + -1);
            }
            piVar4 = *piVar2;
            piVar3 = piVar2;
        }
        if ((*(arg2 + 0x29) != '\0') && (*piVar1 == piVar1)) {
            *(*(arg2 + 0x10) + 8) = *(arg2 + 0x18);
            **(arg2 + 0x18) = *(arg2 + 0x10);
            *(arg2 + 0x29) = 0;
        }
        if (arg4 != '\0') {
            if ((*(arg2 + 0x28) != '\0') && (iVar7 = fcn.00014d68(arg1,arg2 + 0x2b), iVar7 != 0)) {
                fcn.00014d00(arg1,iVar7);
            }
            *(*arg2 + 8) = *(arg2 + 8);
            **(arg2 + 8) = *arg2;
            (**(*0x25e20 + 0x48))(arg2);
        }
        uVar6 = 0;
    }
    else {
        uVar6 = 0x8000000000000002;
    }
    return uVar6;
}


/* fcn.0001fa74 @ 0x1fa74 */

void fcn.0001fa74(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001fa44(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010280(arg1_00,arg1);
    }
    return;
}


/* fcn.0001fa44 @ 0x1fa44 */

ulong fcn.0001fa44(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x25e20 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00022a6c @ 0x22a6c */

int fcn.00022a6c(void)

{
    int aiStackX_8 [8];
    uint16_t uStack_18;
    ushort uStack_15;
    uchar uStack_13;
    uchar uStack_12;
    uint32_t uStack_10;
    
    (**(*0x25e28 + 0x18))(&uStack_18,0);
    (**(*0x25e20 + 0xf0))(aiStackX_8);
    return aiStackX_8[0] + (CONCAT31(CONCAT21(uStack_15,uStack_13),uStack_12) ^ uStack_18 << 7 ^ uStack_10);
}


/* fcn.000107c4 @ 0x107c4 */

int64_t fcn.000107c4(int64_t arg1)

{
    ulong uVar1;
    int iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    int64_t in_R9;
    int64_t iStackX_8;
    ulong in_stack_ffffffffffffffc0;
    uint uVar5;
    uchar auStack_28 [16];
    
    *(arg1 + 0x18) = 3;
    if (*(arg1 + 0xbd8) != 0) {
        (**(*0x25e20 + 0x58))();
        (**(*0x25e20 + 0x70))(*(arg1 + 0xbd8));
        *(arg1 + 0xbd8) = 0;
    }
    if (*(arg1 + 0xbe0) != 0) {
        (**(*0x25e20 + 0x58))();
        (**(*0x25e20 + 0x70))(*(arg1 + 0xbe0));
        *(arg1 + 0xbe0) = 0;
    }
    if (*(arg1 + 0xfb0) != 0) {
        (**(*0x25e20 + 0x48))();
    }
    iVar2 = arg1;
    if (*(arg1 + 0xbec) != '\0') {
        if (*(arg1 + 0xf88) != 0) {
            fcn.00019348(arg1 + 0xbe8);
        }
        if (*(arg1 + 4000) != 0) {
            (**(*0x25e20 + 0x70))();
        }
        fcn.00022b74(iVar2 + 0xf30);
        fcn.00022b74(iVar2 + 0xf08);
        piVar4 = arg1 + 0xce8;
        iVar3 = 7;
        do {
            if ((*(piVar4 + -6) & 1) == 0) {
                if (*piVar4 != 0) {
                    (**(*0x25e20 + 0x48))();
                }
                *piVar4 = 0;
                piVar4[1] = 0;
            }
            fcn.00022b74(piVar4 - 0x28);
            piVar4 = piVar4 + 0xb;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        fcn.0001f198(arg1 + 0xbe8);
        *(*(arg1 + 0xbf0) + 8) = *(arg1 + 0xbf8);
        **(arg1 + 0xbf8) = *(arg1 + 0xbf0);
    }
    if (*(arg1 + 0x8a1) == '\0') {
        fcn.0001c370(0,auStack_28);
        iVar3 = fcn.0001a5d0(arg1,auStack_28);
        if ((iVar3 < 0) && (iVar3 != -0x7fffffffffffffed)) {
            return iVar3;
        }
    }
    if (*(arg1 + 0x48) != 0) {
        fcn.00019728(*(arg1 + 0x48),0);
        *(arg1 + 0x48) = 0;
    }
    piVar4 = arg1 + 0x8e8;
    while (uVar5 = in_stack_ffffffffffffffc0 >> 0x20, *piVar4 != piVar4) {
        fcn.00014d00(arg1,*piVar4);
    }
    fcn.000146d0(arg1,iVar2 + 0x8c8);
    fcn.000146d0(arg1,iVar2 + 0x8d8);
    if (*(arg1 + 0x50) != 0) {
        fcn.00012960(*(arg1 + 0x50));
        *(arg1 + 0x50) = 0;
    }
    if (*(arg1 + 0x900) != 0) {
        (**(*0x25e20 + 0x48))();
    }
    *(arg1 + 0x900) = 0;
    fcn.0001b9d4(arg1 + 0x88);
    if (*(arg1 + 0x920) != 0) {
        iVar3 = *(arg1 + 0x928);
        if (iVar3 != 0) {
            (**(iVar3 + 0x30))(iVar3,0);
            (**(*(arg1 + 0x928) + 8))(*(arg1 + 0x928),0);
            (**(*0x25e20 + 0x120))(*(arg1 + 0x920),0x251e8,*(arg1 + 0x910),*(arg1 + 0x918));
            *(arg1 + 0x928) = 0;
        }
        in_R9 = *(arg1 + 0x910);
        uVar1 = *(arg1 + 0x920);
        iVar3 = (**(*0x25e20 + 0x118))(*(arg1 + 0x918),0x25168,&iStackX_8,in_R9,*(arg1 + 0x918),CONCAT44(uVar5,2))
        ;
        if (-1 < iVar3) {
            (**(iStackX_8 + 8))(iStackX_8,uVar1);
        }
        *(arg1 + 0x920) = 0;
    }
    if (*(arg1 + 0x70) != 0) {
        (**(*0x25e20 + 0x70))();
    }
    piVar4 = arg1 + 0x8b8;
    while (*piVar4 != piVar4) {
        in_R9 = CONCAT71(in_R9 >> 8,1);
        fcn.00014a84(arg1,*piVar4,0,in_R9);
    }
    return 0;
}


/* fcn.00020d68 @ 0x20d68 */

ulong fcn.00020d68(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x25e20 + 0x98))(param_1,0x24130,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.0001a34c @ 0x1a34c */

int64_t fcn.0001a34c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uchar auStack_18 [16];
    
    fcn.0001c370(0,auStack_18);
    piVar1 = fcn.00019f20(arg1,auStack_18,0xffffffff);
    if (piVar1 == NULL) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        iVar2 = fcn.0001c834(*(arg1 + 0x928),auStack_18,piVar1 + 0x2d);
        if ((-1 < iVar2) &&
           ((iVar2 = (**(*(arg1 + 0x928) + 0x18))(*(arg1 + 0x928),1,piVar1 + 0x2d), -1 < iVar2 ||
            (iVar2 == -0x7fffffffffffffec)))) {
            return 0;
        }
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x25e20 + 0x48))(piVar1);
    }
    return iVar2;
}


/* fcn.00022de8 @ 0x22de8 */

int64_t fcn.00022de8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong **arg3_00;
    ushort *puVar7;
    ulong **ppuVar8;
    uint64_t auStackX_10 [2];
    ulong *puStackX_20;
    int64_t var_248h;
    int64_t iStack_2f8;
    ulong *puStack_2f0;
    ulong *apuStack_2e8 [4];
    ulong *apuStack_2c8 [82];
    
    iStack_2f8 = 0;
    arg3_00 = arg3;
    auStackX_10[0] = arg2;
    iVar2 = fcn.00022d20(arg1,&iStack_2f8);
    if (iVar2 == 0) {
        arg3_00 = &puStackX_20;
        auStackX_10[0] = 0;
        iVar2 = (**(*0x25e20 + 0x98))(arg1,0x25168);
        if ((-1 < iVar2) && (iVar2 = (**puStackX_20)(puStackX_20,auStackX_10), -1 < iVar2)) {
            arg3_00 = &puStack_2f0;
            iVar2 = (**(*0x25e20 + 0x98))(auStackX_10[0],0x251e8);
            if (-1 < iVar2) {
                arg3_00 = apuStack_2c8;
                iVar2 = (**puStack_2f0)(puStack_2f0,0);
                if ((-1 < iVar2) || (iVar2 == -0x7fffffffffffffed)) {
                    ppuVar8 = apuStack_2c8;
                    (*puStackX_20[1])(puStackX_20,auStackX_10[0]);
                    goto code_r0x00022f0a;
                }
            }
            (*puStackX_20[1])(puStackX_20,auStackX_10[0]);
        }
        uVar6 = auStackX_10[0];
    }
    else {
        ppuVar8 = *(iStack_2f8 + 0x78);
code_r0x00022f0a:
        uVar1 = *(ppuVar8 + 4);
        if ((uVar1 != 0) && (apuStack_2e8 != ppuVar8 + 0x45)) {
            arg3_00 = uVar1;
            fcn.000102a0(apuStack_2e8,ppuVar8 + 0x45,arg3_00);
        }
        iVar2 = 0;
        uVar6 = uVar1;
    }
    if (-1 < iVar2) {
        iVar2 = uVar6 * 4 + 0xc;
        puVar3 = fcn.0001fa74(iVar2);
        if (puVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            *arg3 = puVar3;
            ppuVar8 = apuStack_2e8;
            if (uVar6 != 0) {
                puVar7 = puVar3;
                do {
                    fcn.0001fbd4(puVar3,puVar7 + (iVar2 - puVar3),arg3_00,*ppuVar8);
                    puVar7 = *arg3;
                    ppuVar8 = ppuVar8 + 1;
                    iVar4 = fcn.0001f378(puVar3,puVar7 + (iVar2 - puVar3) >> 1);
                    puVar3 = puVar3 + iVar4;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            pcVar5 = fcn.00020d68(arg1);
            if (pcVar5 != NULL) {
                while( true ) {
                    if ((*pcVar5 == '\x7f') && (pcVar5[1] == -1)) {
                        uVar6 = 0;
                        goto code_r0x00022ff1;
                    }
                    if ((*pcVar5 == '\x03') && (pcVar5[1] == '\x14')) break;
                    pcVar5 = pcVar5 + *(pcVar5 + 2);
                }
                uVar6 = *(pcVar5 + 4);
code_r0x00022ff1:
                if (uVar6 != 0) {
                    *puVar3 = 0x5c;
                    puVar3 = puVar3 + 1;
                    fcn.0001fbd4(puVar3,(*arg3 - puVar3) + iVar2,arg3_00,uVar6);
                    iVar2 = fcn.0001f378(puVar3,(*arg3 - puVar3) + iVar2 >> 1);
                    puVar3 = puVar3 + iVar2;
                }
            }
            *puVar3 = 0;
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00019024 @ 0x19024 */

int64_t fcn.00019024(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint8_t *puVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    ulong *puVar9;
    int64_t iVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    bool bVar13;
    
    uVar12 = 0;
    *arg1 = 0x43365049;
    uVar5 = 0;
    for (puVar9 = *0x252d8; (puVar9 != 0x252d8 && (*(puVar9 + 2) <= uVar5)); puVar9 = *puVar9) {
        uVar5 = uVar5 + 1;
    }
    *(arg1 + 0x18) = uVar5;
    puVar1 = arg1 + 8;
    *puVar1 = puVar9;
    *(arg1 + 0x10) = puVar9[1];
    *puVar9[1] = puVar1;
    puVar9[1] = puVar1;
    iVar7 = arg1 + 0xe8;
    iVar10 = 7;
    do {
        iVar2 = iVar7 + -0x10;
        *(iVar7 + -8) = iVar2;
        *iVar2 = iVar2;
        *iVar7 = iVar7;
        *(iVar7 + 8) = iVar7;
        *(iVar7 + 0x10) = 0;
        iVar7 = iVar7 + 0x58;
        iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
    iVar10 = arg1 + 800;
    *iVar10 = iVar10;
    iVar7 = arg1 + 0x330;
    *(arg1 + 0x328) = iVar10;
    *iVar7 = iVar7;
    *(arg1 + 0x338) = iVar7;
    *(arg1 + 0x340) = 0;
    iVar10 = arg1 + 0x348;
    *iVar10 = iVar10;
    iVar7 = arg1 + 0x358;
    *(arg1 + 0x350) = iVar10;
    *iVar7 = iVar7;
    *(arg1 + 0x360) = iVar7;
    *(arg1 + 0x368) = 0;
    *(arg1 + 0xd0) = *(arg1 + 0xd0) | 3;
    *(arg1 + 0xc0) = 0x176e4;
    *(arg1 + 0x100) = arg1 + 0x20;
    *(arg1 + 0x108) = 0x88;
    fcn.0001fb70(arg1 + 0x20,0x40,0x256b0,*(arg1 + 0x18));
    iVar7 = arg1 + -0x7c;
    *(arg1 + 0x60) = *(arg1 + -0x1c);
    uVar8 = *(arg1 + -0x2a0);
    *(arg1 + 100) = uVar8;
    if ((uVar8 != 0) && (arg1 + 0x68 != iVar7)) {
        fcn.000102a0(arg1 + 0x68,iVar7,uVar8);
    }
    *(arg1 + 0x128) = *(arg1 + 0x128) | 1;
    *(arg1 + 0x110) = 0x177f4;
    *(arg1 + 0x158) = arg1 + 0xa8;
    *(arg1 + 0x160) = 8;
    *(arg1 + 0x120) = 0x800000000000000e;
    *(arg1 + 0x168) = 0x1783c;
    *(arg1 + 0x1b0) = arg1 + 0xb0;
    *(arg1 + 0x1b8) = 4;
    *(arg1 + 0xb0) = 1;
    *(arg1 + 0x180) = *(arg1 + 0x180) | 1;
    *(arg1 + 0x1c0) = 0x1798c;
    *(arg1 + 0x208) = arg1 + 0xb4;
    *(arg1 + 0x210) = 4;
    *(arg1 + 0xb4) = 1;
    *(arg1 + 0x1d8) = *(arg1 + 0x1d8) | 1;
    *(arg1 + 0x218) = 0x17c4c;
    *(arg1 + 0x228) = 0x800000000000000e;
    *(arg1 + 0x270) = 0x1825c;
    *(arg1 + 0x280) = 0x800000000000000e;
    *(arg1 + 0x2c8) = 0x184ec;
    iVar10 = *0x25e20;
    *(arg1 + 0x2d8) = 0x800000000000000e;
    (**(iVar10 + 0x50))(0x200,8,0x18a0c,arg1,arg1 + 0x3b8);
    *(arg1 + 4) = 1;
    iVar10 = fcn.000173a0(*(arg1 + 0x468),arg1);
    if (iVar10 == -0x7ffffffffffffff2) {
        iVar6 = fcn.00022a6c();
        uVar11 = (iVar6 * 0x41c64e6d + 0x3039) % 0xffffffff;
        *(arg1 + 0x3b4) = uVar11;
        if (*(arg1 + -0x2a0) != 0) {
            do {
                puVar3 = uVar12 + iVar7;
                uVar4 = uVar12;
                uVar12 = uVar12 + 1;
                uVar8 = uVar11 | *puVar3 << ((uVar4 & 3) << 3);
                uVar11 = uVar8;
                *(arg1 + 0x3b4) = uVar8;
            } while (uVar12 < *(arg1 + -0x2a0));
        }
        fcn.00017594(*(arg1 + 0x468),arg1);
    }
    else if (iVar10 < 0) {
        return iVar10;
    }
    bVar13 = *0x25e00 == '\x01';
    *(arg1 + 0x370) = 0x18bec;
    *(arg1 + 0x378) = 0x18d44;
    *(arg1 + 0x380) = 0x18e5c;
    *(arg1 + 0x388) = 0x18f38;
    if (bVar13) {
        iVar7 = 0;
    }
    else {
        iVar7 = fcn.0001eedc(arg1);
    }
    return iVar7;
}


/* fcn.00019604 @ 0x19604 */

uint * fcn.00019604(int64_t arg1)

{
    uint *arg1_00;
    uint *puVar1;
    int64_t arg2;
    int64_t extraout_RAX;
    unkbyte7 in_R9;
    
    arg1_00 = fcn.0001fa44(arg1,0xb0);
    if (arg1_00 != NULL) {
        *arg1_00 = 0x49365049;
        *(arg1_00 + 6) = 1;
        puVar1 = arg1_00 + 8;
        *puVar1 = puVar1;
        *(arg1_00 + 10) = puVar1;
        arg1_00[0xc] = 0;
        *(arg1_00 + 0xd) = 0;
        *(arg1_00 + 0xe) = arg1;
        *(arg1_00 + 0x10) = *(arg1 + 0x918);
        *(arg1_00 + 0x12) = *(arg1 + 0x910);
        puVar1 = arg1_00 + 0x14;
        *puVar1 = puVar1;
        *(arg1_00 + 0x16) = puVar1;
        puVar1 = arg1_00 + 0x18;
        *puVar1 = puVar1;
        *(arg1_00 + 0x1a) = puVar1;
        arg1_00[0x1c] = *(arg1 + 0xc9c);
        puVar1 = arg1_00 + 0x1e;
        *puVar1 = puVar1;
        *(arg1_00 + 0x20) = puVar1;
        puVar1 = arg1_00 + 0x22;
        *puVar1 = puVar1;
        *(arg1_00 + 0x24) = puVar1;
        puVar1 = arg1_00 + 0x26;
        *puVar1 = puVar1;
        *(arg1_00 + 0x28) = puVar1;
        *(arg1_00 + 0x2a) = 0;
        arg2 = fcn.0001c3a8(arg1);
        if (arg2 != 0) {
            fcn.0001940c(arg1_00,arg2,0,CONCAT71(in_R9,0x40));
            (**(*0x25e20 + 0x48))(arg2);
            if (-1 < extraout_RAX) {
                return arg1_00;
            }
        }
        (**(*0x25e20 + 0x48))(arg1_00);
    }
    return NULL;
}


/* fcn.00010ad8 @ 0x10ad8 */

int64_t fcn.00010ad8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int16_t iVar2;
    uint *arg1_00;
    int64_t iVar3;
    uint *puVar4;
    uint64_t uVar5;
    ulong *puVar6;
    char *pcVar7;
    ulong *puVar8;
    int64_t *piVar9;
    ulong *puVar10;
    int64_t iVar11;
    ulong *puStackX_18;
    
    *arg3 = 0;
    arg1_00 = fcn.0001fa74(0x1060);
    if (arg1_00 == NULL) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        *arg1_00 = 0x53365049;
        *(arg1_00 + 6) = 0;
        *(arg1_00 + 2) = 0x114dc;
        piVar1 = arg1_00 + 0xe;
        *(arg1_00 + 8) = 0;
        *(arg1_00 + 4) = 0x11648;
        iVar3 = 0x7f;
        puVar4 = arg1_00 + 10;
        *puVar4 = puVar4;
        *(arg1_00 + 0xc) = puVar4;
        *piVar1 = piVar1;
        *(arg1_00 + 0x10) = piVar1;
        *(arg1_00 + 0x12) = 0;
        *(arg1_00 + 0x14) = 0;
        arg1_00[0x16] = 0x52365049;
        *(arg1_00 + 0x18) = 0;
        *(arg1_00 + 0x1a) = 0;
        *(arg1_00 + 0x1e) = 0x8000000000000006;
        puVar4 = arg1_00 + 0x22;
        *(arg1_00 + 0x1c) = 0;
        *(arg1_00 + 0x20) = 0;
        do {
            *puVar4 = puVar4;
            *(puVar4 + 2) = puVar4;
            puVar4 = puVar4 + 4;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        puVar4 = arg1_00 + 0x220;
        *(arg1_00 + 0x21e) = 0;
        *puVar4 = puVar4;
        *(arg1_00 + 0x222) = puVar4;
        fcn.00010280(arg1_00 + 0x224,0x10);
        arg1_00[0x228] = 0;
        *(arg1_00 + 0x229) = 0xff;
        arg1_00[0x22a] = 0x500;
        arg1_00[0x22b] = 30000;
        uVar5 = fcn.00022a6c();
        arg1_00[0x22d] = 1000;
        piVar9 = arg1_00 + 0x24a;
        arg1_00[0x23e] = 0;
        arg1_00[0x22c] = (((uVar5 & 0xffffffff) / 0xffffffff) * 2 + 1) * arg1_00[0x22b] >> 1;
        puVar4 = arg1_00 + 0x22e;
        *puVar4 = puVar4;
        *(arg1_00 + 0x230) = puVar4;
        puVar4 = arg1_00 + 0x23a;
        *puVar4 = puVar4;
        *(arg1_00 + 0x23c) = puVar4;
        puVar4 = arg1_00 + 0x232;
        *puVar4 = puVar4;
        *(arg1_00 + 0x234) = puVar4;
        puVar4 = arg1_00 + 0x236;
        *puVar4 = puVar4;
        *(arg1_00 + 0x238) = puVar4;
        *(arg1_00 + 0x23f) = 8;
        *(arg1_00 + 0x240) = 0;
        *(arg1_00 + 0x242) = 0x300;
        arg1_00[0x243] = 0;
        *(arg1_00 + 0x244) = arg2;
        *(arg1_00 + 0x246) = arg1;
        *(arg1_00 + 0x248) = 0;
        *piVar9 = 0;
        *(arg1_00 + 0x24c) = 0;
        arg1_00[0x24e] = 0x10186dd;
        arg1_00[0x24f] = 0x10001;
        *(arg1_00 + 0x250) = 0;
        fcn.00010280(arg1_00 + 0x251,0x290);
        *(arg1_00 + 0x2f8) = 0;
        *(arg1_00 + 0x2f6) = 0;
        fcn.00010280(arg1_00 + 0x2fa,0x468);
        *(arg1_00 + 0x414) = 0;
        puVar6 = fcn.0001fa44();
        if (puVar6 != NULL) {
            *(puVar6 + 1) = 0;
            iVar3 = 0x81;
            *puVar6 = 1;
            puVar10 = puVar6;
            do {
                puVar8 = puVar10 + 2;
                *puVar8 = puVar8;
                puVar10[3] = puVar8;
                iVar3 = iVar3 + -1;
                puVar10 = puVar8;
            } while (iVar3 != 0);
            puVar10 = puVar6 + 0x142;
            iVar3 = 0x1f;
            puVar8 = puVar6 + 0x104;
            do {
                *puVar8 = puVar8;
                puVar8[1] = puVar8;
                puVar8 = puVar8 + 2;
                *puVar10 = 0;
                puVar10 = puVar10 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        *(arg1_00 + 0x14) = puVar6;
        if (puVar6 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            iVar3 = (**(*0x25e20 + 0x50))(0x80000200,8,0x19c84,arg1_00,arg1_00 + 0x2f6);
            if ((-1 < iVar3) &&
               (iVar3 = (**(*0x25e20 + 0x50))(0x80000200,8,0x16658,arg1_00,arg1_00 + 0x2f8), -1 < iVar3)) {
                iVar3 = (**(*0x25e20 + 0x118))(arg1,0x25168,&puStackX_18,arg2,arg1,2);
                if (-1 < iVar3) {
                    iVar3 = (**puStackX_18)(puStackX_18,arg1_00 + 0x248);
                }
                if (((-1 < iVar3) &&
                    (iVar3 = (**(*0x25e20 + 0x118))(*(arg1_00 + 0x248),0x251e8,piVar9,arg2,arg1,0x10), -1 < iVar3)
                    ) && (iVar3 = (**(*piVar9 + 8))(*piVar9), -1 < iVar3)) {
                    iVar11 = 0;
                    iVar3 = (***piVar9)(*piVar9,0,arg1_00 + 0x251);
                    if (-1 < iVar3) {
                        arg1_00[0x416] = 0x4d8;
                        pcVar7 = fcn.00020d68(*(arg1_00 + 0x246));
                        if (pcVar7 != NULL) {
                            while( true ) {
                                if ((*pcVar7 == '\x7f') && (pcVar7[1] == -1)) {
                                    iVar2 = 0;
                                    goto code_r0x00010f07;
                                }
                                if ((*pcVar7 == '\x03') && (pcVar7[1] == '\x14')) break;
                                pcVar7 = pcVar7 + *(pcVar7 + 2);
                            }
                            iVar2 = *(pcVar7 + 4);
code_r0x00010f07:
                            if (iVar2 != 0) {
                                arg1_00[0x416] = arg1_00[0x416] + -4;
                            }
                        }
                        arg1_00[0x417] = arg1_00[0x416];
                        if (*(arg1_00 + 0x2f3) == '\x01') {
                            iVar3 = fcn.0001a34c(arg1_00);
                            if (((-1 < iVar3) &&
                                (iVar3 = fcn.00022de8(*(arg1_00 + 0x246),iVar11,arg1_00 + 0x414), -1 < iVar3)) &&
                               (iVar3 = fcn.00019024(arg1_00 + 0x2fa), -1 < iVar3)) {
                                iVar3 = fcn.00019604(arg1_00);
                                *(arg1_00 + 0x12) = iVar3;
                                if (iVar3 == 0) {
                                    iVar3 = -0x7ffffffffffffff9;
                                }
                                else {
                                    iVar3 = (**(*0x25e20 + 0x50))(0x200,0x10,0x19900,arg1_00 + 0x16,arg1_00 + 0x1c);
                                    if (-1 < iVar3) {
                                        iVar3 = *(arg1_00 + 0x12);
                                        iVar11 = *piVar1;
                                        piVar9 = iVar3 + 8;
                                        *arg3 = arg1_00;
                                        *piVar9 = iVar11;
                                        *(iVar3 + 0x10) = piVar1;
                                        *(iVar11 + 8) = piVar9;
                                        *piVar1 = piVar9;
                                        return 0;
                                    }
                                }
                            }
                        }
                        else {
                            iVar3 = -0x7ffffffffffffffd;
                        }
                    }
                }
            }
        }
        fcn.000107c4(arg1_00);
        (**(*0x25e20 + 0x48))(arg1_00);
    }
    return iVar3;
}


/* fcn.000173a0 @ 0x173a0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000173a0(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint *arg1_00;
    int64_t iVar3;
    uint8_t uVar4;
    uint16_t *puVar5;
    uint64_t uVar6;
    int64_t iStackX_18;
    int64_t var_40h;
    uint16_t auStack_38 [2];
    uint32_t uStack_34;
    int iStack_30;
    int64_t var_10h;
    int32_t var_8h;
    
    uVar6 = 0;
    iStackX_18 = 0;
    iVar2 = (**(*0x25e28 + 0x48))(arg1,0x24140,0,&iStackX_18,0);
    if (iVar2 == -0x7ffffffffffffffb) {
        arg1_00 = fcn.0001fa44(0x8000000000000005,iStackX_18);
        if (arg1_00 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            iVar2 = (**(*0x25e28 + 0x48))(arg1,0x24140,0,&iStackX_18,arg1_00);
            if (-1 < iVar2) {
                iVar1 = fcn.00023e0c(arg1_00,iStackX_18);
                if ((iVar1 == -1) && (*(arg1_00 + 6) < 7)) {
                    *(arg2 + 0x3b4) = *arg1_00;
                    if (*(arg1_00 + 6) != 0) {
                        puVar5 = arg1_00 + 2;
                        do {
                            if (auStack_38 != puVar5) {
                                fcn.000102a0(auStack_38,puVar5,0xc);
                            }
                            iVar2 = iStack_30 * 0x58;
                            uVar4 = *(iVar2 + 0xd0 + arg2) & 1;
                            if ((uVar4 == 0) || (*(iVar2 + 0x108 + arg2) == uStack_34)) {
                                if (uVar4 == 0) {
                                    if (iStackX_18 - auStack_38[0] < uStack_34) goto code_r0x0001753f;
                                    iVar3 = fcn.0001fa44();
                                    *(iVar2 + 0x100 + arg2) = iVar3;
                                    if (iVar3 == 0) goto code_r0x0001751a;
                                }
                                iVar3 = *(iVar2 + 0x100 + arg2);
                                if ((uStack_34 != 0) && (iVar3 != auStack_38[0] + arg1_00)) {
                                    fcn.000102a0(iVar3,auStack_38[0] + arg1_00,uStack_34);
                                }
                                *(iVar2 + 0x108 + arg2) = uStack_34;
                                *(iVar2 + 200 + arg2) = 0;
                            }
code_r0x0001751a:
                            uVar6 = uVar6 + 1;
                            puVar5 = puVar5 + 6;
                        } while (uVar6 < *(arg1_00 + 6));
                    }
                    (**(*0x25e20 + 0x48))(arg1_00);
                    return 0;
                }
            }
code_r0x0001753f:
            (**(*0x25e20 + 0x48))(arg1_00);
            (**(*0x25e28 + 0x58))(arg1,0x24140,3,0,0);
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    return iVar2;
}


/* fcn.00022ad4 @ 0x22ad4 */

int64_t fcn.00022ad4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    bool bVar5;
    
    if (arg2 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = 0;
code_r0x00022b0c:
        do {
            for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
                iVar3 = (*arg2)(puVar4,arg3);
                if (iVar3 < 0) {
                    return iVar3;
                }
                for (puVar2 = *arg1; puVar2 != arg1; puVar2 = *puVar2) {
                    if (puVar2 == puVar4) goto code_r0x00022b3f;
                }
                if (puVar2 != puVar4) goto code_r0x00022b0c;
code_r0x00022b3f:
            }
            iVar3 = 0;
            for (puVar4 = *arg1; puVar4 != arg1; puVar4 = *puVar4) {
                iVar3 = iVar3 + 1;
            }
            bVar5 = iVar3 != iVar1;
            iVar1 = iVar3;
        } while (bVar5);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00013110 @ 0x13110 */

void fcn.00013110(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    fcn.00010280(arg2,0x168);
    *(arg2 + 0x58) = 0;
    *(arg2 + 0x120) = 0;
    *arg2 = 0x50365049;
    *(arg2 + 0x60) = arg1;
    if (arg2 + 8 != 0x25240) {
        fcn.000102a0(arg2 + 8,0x25240,0x48);
    }
    iVar2 = arg2 + 0x80;
    *iVar2 = iVar2;
    iVar1 = arg2 + 0x90;
    *(arg2 + 0x88) = iVar2;
    *iVar1 = iVar1;
    *(arg2 + 0x98) = iVar1;
    *(arg2 + 0xa0) = 0;
    iVar2 = arg2 + 0xa8;
    *iVar2 = iVar2;
    iVar1 = arg2 + 0xb8;
    *(arg2 + 0xb0) = iVar2;
    *iVar1 = iVar1;
    *(arg2 + 0xc0) = iVar1;
    iVar1 = arg2 + 0xd0;
    *(arg2 + 200) = 0;
    *iVar1 = iVar1;
    *(arg2 + 0xd8) = iVar1;
    iVar1 = arg2 + 0xe0;
    *iVar1 = iVar1;
    *(arg2 + 0xe8) = iVar1;
    *(arg2 + 0xf0) = 0x10;
    *(arg2 + 0xf8) = 4;
    *(arg2 + 0x100) = 1;
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,uint32_t arg2,int64_t arg3)

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


/* fcn.000133d0 @ 0x133d0 */

ulong fcn.000133d0(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    
    iVar1 = fcn.000140f8(arg1,0);
    if (-1 < iVar1) {
        arg1_00 = arg1;
        iVar1 = fcn.0001a6fc(arg1_00,0,0);
        if (-1 < iVar1) {
            if (*(arg1 + 0x108) != 0) {
                *(*(arg1 + 0x110) + 8) = *(arg1 + 0x118);
                **(arg1 + 0x118) = *(arg1 + 0x110);
                fcn.00019728(*(arg1 + 0x108),arg1);
                *(arg1 + 0x108) = 0;
            }
            if (*(arg1 + 0x120) != 0) {
                (**(*0x25e20 + 0x48))();
                *(arg1 + 0x120) = 0;
                *(arg1 + 0x128) = 0;
            }
            fcn.00022b74(arg1_00 + 0xa8);
            fcn.00022b74(arg1_00 + 0x80);
            return 0;
        }
    }
    return 0x8000000000000007;
}


/* fcn.0001c74c @ 0x1c74c */

ulong fcn.0001c74c(uint32_t arg1,uint32_t *arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong *puVar4;
    ulong *puVar5;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x8a0) == '\0') {
code_r0x0001c7b2:
        for (puVar4 = *(iVar3 + 0x38); puVar4 != iVar3 + 0x38; puVar4 = *puVar4) {
            for (puVar5 = puVar4[3]; puVar5 != puVar4 + 3; puVar5 = *puVar5) {
                if (puVar5 + 2 == arg2) {
code_r0x0001c7fe:
                    if (arg3 != 0) {
                        *arg3 = puVar4 + -1;
                    }
                    if (arg4 != 0) {
                        *arg4 = puVar5 + -1;
                    }
                    goto code_r0x0001c7ae;
                }
                iVar1 = fcn.000102e0(puVar5 + 2,arg2,0x10);
                if (iVar1 == 0) goto code_r0x0001c7fe;
            }
        }
        uVar2 = 0;
    }
    else {
        if (iVar3 + 0x890 != arg2) {
            iVar1 = fcn.000102e0(iVar3 + 0x890,arg2,0x10);
            if (iVar1 != 0) goto code_r0x0001c7b2;
        }
        if (arg3 != 0) {
            *arg3 = *(iVar3 + 0x48);
        }
        if (arg4 != 0) {
            *arg4 = 0;
        }
code_r0x0001c7ae:
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.000229a8 @ 0x229a8 */

int64_t fcn.000229a8(uint32_t arg1)

{
    unkuint7 Var1;
    uint in_register_0000000c;
    char *pcVar2;
    uint8_t uVar3;
    
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    Var1 = pcVar2 >> 8;
    if ((*pcVar2 == -2) && (pcVar2[1] == -0x80)) {
        uVar3 = 2;
        while (pcVar2[uVar3] == '\0') {
            uVar3 = uVar3 + 1;
            if (7 < uVar3) {
                return CONCAT71(Var1,1);
            }
        }
    }
    return Var1 << 8;
}


/* fcn.000117f8 @ 0x117f8 */

ulong fcn.000117f8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint *puVar2;
    int64_t *arg1_00;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    *arg3 = 0;
    piVar4 = piVar3;
    if (piVar3[0x114] != '\0') {
        puVar2 = fcn.0001fa44(piVar3,0x38);
        if (puVar2 == NULL) {
            return 0x8000000000000009;
        }
        *puVar2 = 0x49415049;
        if (puVar2 + 6 != piVar3 + 0x112) {
            fcn.000102a0(puVar2 + 6,piVar3 + 0x112,0x10);
        }
        *(puVar2 + 10) = 0x4000;
        piVar4 = puVar2 + 2;
        *arg3 = *arg3 + 1;
        puVar2[0xb] = 0xffffffff;
        puVar2[0xc] = 0xffffffff;
        *piVar4 = arg2;
        puVar1 = *(arg2 + 8);
        *(puVar2 + 4) = puVar1;
        *puVar1 = piVar4;
        *(arg2 + 8) = piVar4;
    }
    piVar5 = piVar3[7];
    do {
        if (piVar5 == piVar3 + 7) {
            return 0;
        }
        for (piVar6 = piVar5[3]; piVar6 != piVar5 + 3; piVar6 = *piVar6) {
            if (piVar6[4] == '\0') {
                arg1_00 = fcn.0001fa44(piVar4,0x38);
                if (arg1_00 == NULL) {
                    return 0x8000000000000009;
                }
                if (arg1_00 != piVar6 + -1) {
                    arg1_00 = fcn.000102a0(arg1_00,piVar6 + -1,0x38);
                }
                if (arg1_00 == NULL) {
                    return 0x8000000000000009;
                }
                *arg3 = *arg3 + 1;
                piVar4 = arg1_00 + 1;
                *piVar4 = arg2;
                puVar1 = *(arg2 + 8);
                arg1_00[2] = puVar1;
                *puVar1 = piVar4;
                *(arg2 + 8) = piVar4;
            }
        }
        piVar5 = *piVar5;
    } while( true );
}


/* fcn.0001c5f0 @ 0x1c5f0 */

ulong fcn.0001c5f0(int64_t arg1,int64_t arg2,uint32_t *arg3,int64_t arg4)

{
    int64_t *arg1_00;
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uint32_t *arg3_00;
    int64_t *piVar5;
    bool bVar6;
    uint8_t in_stack_00000028;
    int64_t iStack_48;
    int64_t *piStack_40;
    uchar auStack_38 [16];
    
    piVar4 = *arg2;
    if (((piVar4 == arg2) || (*arg3 == 0)) || (0x80 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar3 = 0x800000000000000e;
        arg3_00 = arg3;
        piVar5 = *piVar4;
        do {
            if (arg4 == 0) {
code_r0x0001c692:
                if (arg1 != 0) {
                    arg1_00 = piVar4 + 2;
                    fcn.0001c554(arg1_00,auStack_38);
                    fcn.0001a5d0(arg1,auStack_38);
                    iStack_48 = arg1 + 8;
                    piStack_40 = arg1_00;
                    if (arg1 + 0x28 != 0) {
                        arg3_00 = &iStack_48;
                        fcn.00022ad4(arg1 + 0x28,0x1c5a0,arg3_00);
                    }
                }
                *(*piVar4 + 8) = piVar4[1];
                *piVar4[1] = *piVar4;
                (**(*0x25e20 + 0x48))(piVar4 + -1);
                *arg3 = *arg3 - 1;
                uVar3 = 0;
            }
            else {
                if (in_stack_00000028 == 0x80) {
                    if (arg4 != piVar4 + 2) {
                        arg3_00 = NULL;
                        iVar2 = fcn.000102e0(arg4,piVar4 + 2,0x10);
                        if (iVar2 != 0) goto code_r0x0001c675;
                    }
                    goto code_r0x0001c692;
                }
code_r0x0001c675:
                if (in_stack_00000028 == *(piVar4 + 0x21)) {
                    arg3_00 = CONCAT71(arg3_00 >> 8,in_stack_00000028);
                    cVar1 = fcn.000229d0(arg4,piVar4 + 2,arg3_00);
                    if (cVar1 != '\0') goto code_r0x0001c692;
                }
            }
            bVar6 = piVar5 != arg2;
            piVar4 = piVar5;
            piVar5 = *piVar5;
        } while (bVar6);
    }
    return uVar3;
}


/* fcn.00011930 @ 0x11930 */

//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00011930(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t uVar5;
    uint64_t uVar6;
    int64_t *******pppppppiVar7;
    ulong *puVar8;
    uint8_t uVar9;
    int64_t *******pppppppiVar10;
    ulong uVar12;
    ulong uVar11;
    ulong uVar13;
    uint32_t auStackX_8 [2];
    uint32_t var_bp_20h;
    int64_t *******pppppppiStack_28;
    int64_t *******pppppppiStack_20;
    int64_t var_bp_10h;
    int64_t var_8h;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    pppppppiStack_28 = &pppppppiStack_28;
    uVar12 = 0;
    uVar11 = 0;
    pppppppiStack_20 = &pppppppiStack_28;
    if (*(iVar4 + 0x8a0) == '\0') {
        return 0x8000000000000011;
    }
    cVar2 = fcn.0001c74c(arg1,arg2,0,0);
    uVar13 = uVar12;
    if (cVar2 == '\0') {
        if (*arg2 == -1) {
            uVar3 = *(arg2 + 1) >> 4;
code_r0x000119c0:
            if (2 < uVar3) {
                fcn.000117f8(arg1,&pppppppiStack_28,auStackX_8);
                uVar1 = auStackX_8[0];
                if (auStackX_8[0] == 0) {
                    uVar13 = 0x8000000000000011;
                }
                else {
                    if (arg3 != iVar4 + 0x890) {
                        fcn.000102a0(arg3,iVar4 + 0x890,0x10);
                    }
                    if (uVar1 != 1) {
                        for (puVar8 = *(iVar4 + 0x8d8); puVar8 != iVar4 + 0x8d8; puVar8 = *puVar8) {
                            if ((*(puVar8 + 0x1c) == 0) &&
                               (fcn.0001c5f0(0,&pppppppiStack_28,auStackX_8,puVar8 + 0x21), uVar13 = uVar11,
                               auStackX_8[0] == 1)) goto code_r0x00011b00;
                        }
                        uVar3 = 0;
                        uVar6 = 0;
                        while( true ) {
                            if (*(uVar6 + arg3) != *(uVar6 + arg2)) break;
                            uVar3 = uVar3 + 8;
                            uVar5 = uVar6 + 1;
                            uVar6 = uVar5;
                            if (0xf < uVar5) goto code_r0x00011a83;
                        }
                        cVar2 = '\b';
                        for (uVar5 = *(uVar6 + arg3) ^ *(uVar6 + arg2); uVar5 != 0; uVar5 = uVar5 >> 1) {
                            cVar2 = cVar2 + -1;
                        }
                        uVar3 = uVar3 + cVar2;
code_r0x00011a83:
                        pppppppiVar7 = NULL;
                        pppppppiVar10 = pppppppiStack_28;
                        uVar13 = uVar11;
                        if (pppppppiStack_28 != &pppppppiStack_28) {
                            do {
                                uVar5 = 0;
                                uVar6 = 0;
code_r0x00011a97:
                                uVar9 = *(pppppppiVar10 + uVar6 + 0x10);
                                if (uVar9 == *(uVar6 + arg2)) goto code_r0x00011aa9;
                                cVar2 = '\b';
                                for (uVar9 = uVar9 ^ *(uVar6 + arg2); uVar9 != 0; uVar9 = uVar9 >> 1) {
                                    cVar2 = cVar2 + -1;
                                }
                                uVar5 = uVar5 + cVar2;
code_r0x00011ac7:
                                if (uVar3 < uVar5) {
                                    pppppppiVar7 = pppppppiVar10 + 2;
                                    uVar3 = uVar5;
                                }
                                pppppppiVar10 = *pppppppiVar10;
                                if (pppppppiVar10 == &pppppppiStack_28) {
                                    if (pppppppiVar7 == NULL) break;
                                    goto code_r0x00011aed;
                                }
                            } while( true );
                        }
                    }
                }
                goto code_r0x00011b00;
            }
        }
        else {
            cVar2 = fcn.000229a8(arg2);
            if (cVar2 == '\0') {
                uVar3 = 0xe;
                goto code_r0x000119c0;
            }
        }
        pppppppiVar7 = iVar4 + 0x890;
code_r0x00011aed:
        uVar13 = uVar11;
        if (arg3 == pppppppiVar7) goto code_r0x00011b00;
    }
    else {
        if (arg3 == arg2) goto code_r0x00011b00;
        pppppppiVar7 = arg2;
    }
    fcn.000102a0(arg3,pppppppiVar7,0x10);
    uVar13 = uVar12;
code_r0x00011b00:
    fcn.0001c5f0(0,&pppppppiStack_28,auStackX_8,0);
    return uVar13;
code_r0x00011aa9:
    uVar5 = uVar5 + 8;
    uVar9 = uVar6 + 1;
    uVar6 = uVar9;
    if (0xf < uVar9) goto code_r0x00011ac7;
    goto code_r0x00011a97;
}


/* fcn.00023aac @ 0x23aac */

int64_t fcn.00023aac(uint32_t arg1,int64_t arg2,int64_t arg3)

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
            fcn.00023488(arg1,*(iVar3 + 0x84) - 1,auStackX_18);
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
            fcn.00023488(arg1,0,auStackX_18);
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


/* fcn.0001cd98 @ 0x1cd98 */

ulong fcn.0001cd98(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar *arg1_00;
    int64_t arg1_01;
    ulong uVar1;
    ulong *puVar2;
    int iVar3;
    uint64_t uVar4;
    int iVar5;
    uint64_t arg3_00;
    uint8_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t uVar9;
    uchar uVar10;
    uint64_t uVar11;
    uint32_t in_stack_00000028;
    uint16_t in_stack_00000030;
    int64_t *in_stack_00000038;
    uchar uStack_38;
    uchar uStack_37;
    uint16_t uStack_36;
    uint uStack_34;
    
    arg1_01 = fcn.0001fa44();
    if (arg1_01 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        uVar4 = 0;
        arg3_00 = 0;
        uVar8 = 0;
        uVar10 = arg2;
        uVar7 = arg2 & 0xff;
        uVar11 = arg2 & 0xff;
        if (arg4 != 0) {
            while( true ) {
                uVar10 = uVar11;
                if (in_stack_00000028 < uVar4) break;
                uVar6 = uVar7;
                iVar5 = arg3_00;
                uVar11 = uVar7;
                if ((uVar6 == 0) || (iVar3 = uVar7, iVar3 == 0x2b)) {
code_r0x0001ce9f:
                    uVar7 = *(uVar4 + arg4);
                    if ((uVar6 == 0x3c) && (*(uVar4 + arg4) != 0x2b)) goto code_r0x0001ceb2;
                    iVar3 = *(uVar4 + 1 + arg4) * 8;
                    uVar8 = uVar4;
code_r0x0001cee8:
                    arg3_00 = iVar5 + iVar3 + 8;
                    uVar4 = uVar4 + iVar3 + 8;
                }
                else {
                    if (iVar3 == 0x2c) {
                        if (iVar5 != 0) goto code_r0x0001ceb2;
                    }
                    else {
                        if (iVar3 == 0x33) {
                            uVar7 = *(uVar4 + arg4);
                            iVar3 = *(uVar4 + 1 + arg4) * 4;
                            goto code_r0x0001cee8;
                        }
                        if (iVar3 == 0x3c) goto code_r0x0001ce9f;
                        if ((0x3a < uVar6) || ((0x404000000020040U >> (uVar7 & 0x3f) & 1) == 0)) {
                            if ((arg1 == 0) || (*arg1 != 0x53365049)) {
code_r0x0001cef1:
                                (**(*0x25e20 + 0x48))(arg1_01);
                                return 0x8000000000000003;
                            }
                            puVar2 = *(arg1 + 0x28);
                            while( true ) {
                                if (puVar2 == arg1 + 0x28) goto code_r0x0001cef1;
                                if ((puVar2[-2] == 1) && (*(puVar2 + 0xc4) == uVar6)) break;
                                puVar2 = *puVar2;
                            }
                        }
code_r0x0001ceb2:
                        if ((iVar5 != 0) && (arg1_01 != arg4)) {
                            fcn.000102a0(arg1_01,arg4,arg3_00);
                        }
                    }
                    uVar4 = in_stack_00000028 + 1;
                    *(uVar8 + arg1_01) = 0x2c;
                }
            }
        }
        arg1_00 = arg1_01 + arg3_00;
        uStack_38 = arg3;
        if ((in_stack_00000030 & 0xfffc) == 0) {
            uStack_38 = uVar10;
        }
        uStack_37 = 0;
        uStack_36 = in_stack_00000030 << 8 | in_stack_00000030 >> 8;
        uStack_34 = *0x25ea0;
        if (arg1_00 != &uStack_38) {
            fcn.000102a0(arg1_00,&uStack_38,8);
        }
        if ((arg4 != 0) && (arg3_00 < in_stack_00000028)) {
            uVar9 = in_stack_00000028 - arg3_00;
            if ((uVar9 != 0) && (arg1_00 + 8 != arg4 + arg3_00)) {
                fcn.000102a0(arg1_00 + 8,arg4 + arg3_00,uVar9);
            }
        }
        *in_stack_00000038 = arg1_01;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001c9c4 @ 0x1c9c4 */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.0001c9c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_60h,uint32_t arg_68h,
                  int64_t arg_70h,int64_t arg_78h,uint32_t arg_80h,int64_t arg_88h,int64_t arg_90h)

{
    int iVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    bool bVar4;
    uint8_t uVar5;
    char cVar6;
    ulong *puVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t noname_2;
    char *arg3_00;
    int64_t iVar11;
    uchar *puVar12;
    uint8_t uVar13;
    uint8_t uVar14;
    uint32_t in_stack_00000028;
    char in_stack_00000030;
    int *in_stack_00000038;
    uint in_stack_00000040;
    uint in_stack_00000044;
    int8_t var_50h;
    unkbyte7 in_stack_00000049;
    uint8_t in_stack_00000050;
    unkbyte7 in_stack_00000051;
    uint in_stack_0000005c;
    uint32_t var_10h;
    
    puVar2 = CONCAT71(in_stack_00000049,var_50h);
    if (puVar2 != NULL) {
        *puVar2 = 0;
    }
    puVar3 = CONCAT71(in_stack_00000051,in_stack_00000050);
    if (puVar3 != NULL) {
        *puVar3 = 0;
    }
    puVar12 = CONCAT44(in_stack_0000005c,arg_60h);
    uVar13 = 0;
    if (puVar12 != NULL) {
        *puVar12 = 0;
    }
    *CONCAT44(in_stack_00000044,in_stack_00000040) = arg3;
    if (arg4 == 0) {
        if (in_stack_00000028 != 0) {
            return 0;
        }
    }
    else {
        if (in_stack_00000028 == 0) {
            return 0;
        }
        bVar4 = false;
        noname_2 = CONCAT44(in_stack_00000044,in_stack_00000040) & 0xffffffffffffff00;
        in_stack_00000050 = 0;
        uVar9 = 0;
        do {
            uVar14 = *arg3;
            uVar8 = uVar9;
            if (uVar14 == 0) {
                if (uVar8 != 0) {
                    if (in_stack_00000030 == '\0') {
                        return 0;
                    }
                    goto code_r0x0001ccf5;
                }
                bVar4 = true;
code_r0x0001cbbc:
                uVar5 = uVar13 + 1;
                if (uVar14 != 0x3c) {
                    uVar5 = uVar13;
                }
                uVar13 = uVar5;
                if (2 < uVar13) {
                    return 0;
                }
                arg3_00 = uVar8 + 1 + arg4;
                uVar14 = *arg3_00 * '\b' + 6;
                if ((arg1 != 0) && (arg2 != 0)) {
                    arg3_00 = arg3_00 + 1;
                    cVar6 = fcn.0001c87c(arg1,arg2,arg3_00,CONCAT71(arg4 >> 8,uVar14));
                    if (cVar6 == '\0') {
                        return 0;
                    }
                    puVar12 = CONCAT44(in_stack_0000005c,arg_60h);
                }
                uVar8 = uVar8 + 2 + uVar14;
                uVar10 = uVar8;
                if (bVar4) {
                    if (puVar3 != NULL) {
                        *puVar3 = uVar8;
                    }
                    bVar4 = false;
                }
                noname_2 = CONCAT71(arg3_00 >> 8,in_stack_00000050);
            }
            else if (uVar14 == 0x2b) {
                if (*(uVar9 + arg4 + 3) != '\0') {
                    if (arg1 == 0) {
                        return 0;
                    }
                    if (arg2 == 0) {
                        return 0;
                    }
                    iVar11 = *(arg2 + 0x20);
                    if (*(iVar11 + 0x18) == -1) {
                        return 0;
                    }
                    goto code_r0x0001cd18;
                }
                uVar8 = uVar8 + *(uVar9 + arg4 + 1) * 8 + 8;
                uVar10 = uVar8;
                if (puVar3 != NULL) {
                    *puVar3 = uVar8;
                }
            }
            else if (uVar14 == 0x2c) {
                if (1 < noname_2) {
                    return 0;
                }
                if (((arg1 != 0) && (arg2 != 0)) && ((in_stack_00000028 & 7) != 0)) {
                    if (uVar9 + arg4 == 0) {
                        return 0;
                    }
                    if (((*(uVar9 + arg4 + 2) >> 8 & 1) != 0) && (*(*(arg2 + 0x20) + 0x18) != -1)) {
                        iVar1 = *(arg2 + 0x20);
                        goto code_r0x0001cd1c;
                    }
                }
                if (puVar12 != NULL) {
                    *puVar12 = 1;
                }
                if ((in_stack_00000030 != '\0') && (in_stack_00000038 != NULL)) {
                    *in_stack_00000038 = arg3 - arg4;
                }
                uVar10 = uVar8 + 8;
            }
            else {
                if (uVar14 != 0x33) {
                    if (uVar14 == 0x3b) {
                        *CONCAT44(in_stack_00000044,in_stack_00000040) = arg3;
                        return 0;
                    }
                    if (uVar14 == 0x3c) goto code_r0x0001cbbc;
                    uVar13 = *arg3;
                    if ((0x3a < uVar13) || ((0x404000000020040U >> (uVar13 & 0x3f) & 1) == 0)) {
                        if ((arg1 == 0) || (*arg1 != 0x53365049)) goto code_r0x0001ccf5;
                        puVar7 = *(arg1 + 0x28);
                        goto code_r0x0001cacd;
                    }
                    break;
                }
                in_stack_00000050 = noname_2 + 1;
                noname_2 = CONCAT71(noname_2 >> 8,in_stack_00000050);
                if (1 < in_stack_00000050) {
                    return 0;
                }
                uVar10 = uVar8 + (*(uVar9 + arg4 + 1) + '\x02') * '\x04';
            }
            arg3 = uVar9 + arg4;
            uVar8 = uVar10;
            uVar9 = uVar10;
        } while (uVar8 <= in_stack_00000028);
code_r0x0001cc63:
        *CONCAT44(in_stack_00000044,in_stack_00000040) = arg3;
        if (puVar2 != NULL) {
            *puVar2 = uVar8;
        }
    }
    return 1;
code_r0x0001cacd:
    if (puVar7 == arg1 + 0x28) {
code_r0x0001ccf5:
        if (((arg1 != 0) && (arg2 != 0)) && (iVar11 = *(arg2 + 0x20), *(iVar11 + 0x18) != -1)) {
code_r0x0001cd18:
            iVar1 = iVar11;
code_r0x0001cd1c:
            fcn.0001d54c(arg1,arg2,noname_2,iVar1 + 8);
        }
        return 0;
    }
    if ((puVar7[-2] == 1) && (*(puVar7 + 0xc4) == uVar13)) goto code_r0x0001cc63;
    puVar7 = *puVar7;
    goto code_r0x0001cacd;
}


/* fcn.00011b34 @ 0x11b34 */

ulong fcn.00011b34(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint64_t uVar2;
    uint8_t uVar3;
    ulong uStackX_20;
    uint32_t auStack_18 [4];
    
    uVar3 = 0;
    while (*(uVar3 + arg2) == '\0') {
        uVar3 = uVar3 + 1;
        if (0xf < uVar3) {
            return 0;
        }
    }
    uVar2 = 0;
    do {
        arg1_00 = arg1;
        if (*(uVar2 + arg3) != '\0') {
            fcn.0001c74c(arg1_00,arg3,&uStackX_20,0);
            goto code_r0x00011bd5;
        }
        uVar3 = uVar2 + 1;
        uVar2 = uVar3;
    } while (uVar3 < 0x10);
    iVar1 = fcn.00011930(arg1_00,arg2,auStack_18);
    if (iVar1 < 0) {
        uStackX_20 = *(arg1 + 0x48);
    }
    else {
        fcn.0001c74c(arg1_00,auStack_18,&uStackX_20,0);
        if (arg3 != auStack_18) {
            fcn.000102a0(arg3,auStack_18,0x10);
        }
    }
code_r0x00011bd5:
    return uStackX_20;
}


/* fcn.0001d428 @ 0x1d428 */

uint64_t fcn.0001d428(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    int iVar6;
    int64_t arg2_00;
    uint8_t uVar7;
    int64_t in_R8;
    uint8_t auStack_28 [16];
    
    arg2_00 = 0;
    fcn.00010280(auStack_28,0x10);
    uVar7 = 0;
    do {
        in_R8 = CONCAT71(in_R8 >> 8,0xff);
        arg2_00 = CONCAT71(arg2_00 >> 8,uVar7);
        iVar3 = fcn.00014654(arg1,arg2_00,in_R8,arg2);
        uVar4 = 0;
        if (iVar3 != 0) {
            if (auStack_28 != iVar3 + 0x21) {
                fcn.000102a0(auStack_28,iVar3 + 0x21,0x10);
            }
            uVar1 = *(iVar3 + 0x20);
            if (uVar1 == 0) {
                fcn.00010280(auStack_28,0x10);
            }
            else if (uVar1 < 0x80) {
                puVar5 = auStack_28 + (uVar1 >> 3);
                uVar2 = *puVar5;
                if ((uVar1 >> 3 != 0) && (iVar6 = 0x10 - (uVar1 >> 3), iVar6 != 0)) {
                    fcn.00010280(puVar5,iVar6);
                }
                if ((uVar1 & 7) != 0) {
                    *puVar5 = -1 << (8 - (uVar1 & 7) & 0x1f) & uVar2;
                }
            }
            puVar5 = auStack_28;
            if (puVar5 == arg2) {
code_r0x0001d547:
                return CONCAT71(puVar5 >> 8,1);
            }
            in_R8 = 0;
            arg2_00 = arg2;
            uVar4 = fcn.000102e0(auStack_28,arg2,0x10);
            puVar5 = NULL;
            if (uVar4 == 0) goto code_r0x0001d547;
        }
        uVar7 = uVar7 ^ 1;
        if (uVar7 == 0) {
            return uVar4 & 0xffffffffffffff00;
        }
    } while( true );
}


/* fcn.00023488 @ 0x23488 */

int64_t fcn.00023488(uint32_t arg1,uint32_t arg2,int64_t arg3)

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


/* fcn.00023e50 @ 0x23e50 */

uint32_t fcn.00023e50(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    uVar4 = 0;
    uVar2 = 0;
    if (*(arg1 + 0x80) != 0) {
        puVar5 = arg1 + 0xa8;
        uVar3 = *(arg1 + 0x80);
        do {
            if (*puVar5 != 0) {
                uVar1 = fcn.00023e0c(*(puVar5 + -4),*puVar5);
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
    return uVar2 & 0xffff;
}


/* fcn.00023ec8 @ 0x23ec8 */

void fcn.00023ec8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uchar auStack_38 [16];
    uchar auStack_28 [16];
    uint uStack_18;
    uint32_t uStack_14;
    
    fcn.00010280(auStack_38,0x28);
    if (auStack_38 != arg1) {
        fcn.000102a0(auStack_38,arg1,0x10);
    }
    if (auStack_28 != arg2) {
        fcn.000102a0(auStack_28,arg2,0x10);
    }
    uStack_14 = arg3 << 0x18 | uStack_14 & 0xffffff;
    uVar1 = (arg4 & 0xffffffffU) >> 0x10;
    uVar2 = arg4 & 0xffffffffU;
    uStack_18 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
    fcn.00023e0c(auStack_38,0x28);
    return;
}


/* fcn.0001b03c @ 0x1b03c */

//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.0001b03c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint32_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong uVar8;
    uint64_t arg3_00;
    uint32_t auStackX_20 [2];
    int64_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    int in_stack_00000038;
    int64_t in_stack_00000040;
    uint32_t var_5fh;
    int64_t iStack_70;
    ulong uStack_68;
    uchar auStack_60 [31];
    int32_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    
    iVar6 = *arg4;
    uStack_68 = 0;
    iStack_70 = 0;
    auStackX_20[0] = *(iVar6 + 0x80);
    fcn.00010280(auStack_60,0x28);
    if (*(*0x25e08 + 2) != '\0') {
        *(arg1 + 0x1058) = *(arg1 + 0x105c);
        return 0;
    }
    *(arg1 + 0x1058) = *(arg1 + 0x105c) + -0x36;
    if (*(*arg2 + 0x18) == -1) {
        return 0;
    }
    if (*(*arg2 + 8) == -1) {
        return 0;
    }
    iStack_70 = fcn.0001fa74(auStackX_20[0] << 4);
    if (iStack_70 == 0) {
code_r0x0001b0e1:
        iVar7 = -0x7ffffffffffffff7;
    }
    else {
        iVar3 = fcn.00023970(iVar6,iStack_70,auStackX_20);
        iVar4 = iStack_70;
        uVar2 = auStackX_20[0];
        if (iVar3 < 0) {
            (**(*0x25e20 + 0x48))(iStack_70);
            return iVar3;
        }
        iVar3 = *arg2;
        *(iVar3 + 2) = *(iVar3 + 2) << 8 | *(iVar3 + 2) >> 8;
        *(iVar3 + 4) = *(iVar3 + 4) << 8 | *(iVar3 + 4) >> 8;
        iVar7 = (***0x25e08)(*0x25e08,*(arg1 + 0x918),6,*arg2,arg3,in_stack_00000028,in_stack_00000030,&iStack_70
                             ,auStackX_20,in_stack_00000038,&uStack_68);
        iVar3 = *arg2;
        *(iVar3 + 2) = *(iVar3 + 2) << 8 | *(iVar3 + 2) >> 8;
        *(iVar3 + 4) = *(iVar3 + 4) << 8 | *(iVar3 + 4) >> 8;
        if (iVar7 < 0) {
            iVar3 = iVar4;
        }
        else if ((uVar2 != auStackX_20[0]) || (iVar3 = iStack_70, iVar4 != iStack_70)) {
            (**(*0x25e20 + 0x48))(iVar4);
            if ((in_stack_00000038 == 1) && (in_stack_00000040 != 0)) {
                *(in_stack_00000040 + 0x10) = uStack_68;
                iVar4 = fcn.000237f4(iStack_70,auStackX_20[0],0x78);
                *(in_stack_00000040 + 0x18) = iVar4;
                if (iVar4 != 0) {
                    if (iVar4 + 0x38 != iVar6 + 0x38) {
                        fcn.000102a0(iVar4 + 0x38,iVar6 + 0x38,0x30);
                    }
                    piVar1 = iVar6 + 8;
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                        piVar1 = *(iVar6 + 0x78) + 8;
                        *piVar1 = *piVar1 + -1;
                        iVar4 = *(iVar6 + 0x78);
                        if (*(iVar4 + 8) < 1) {
                            if ((*(iVar4 + 0x20) & 1) != 0) {
                                (**(*0x25e20 + 0x48))(*(iVar4 + 0x38));
                            }
                            (**(*0x25e20 + 0x48))(*(iVar6 + 0x78));
                            (**(*0x25e20 + 0x48))(iVar6);
                        }
                    }
                    *arg4 = *(in_stack_00000040 + 0x18);
                    return iVar7;
                }
                *(in_stack_00000040 + 0x18) = *arg4;
            }
            else {
                puVar5 = fcn.0001fa74(0x10);
                if (puVar5 == NULL) {
                    (**(*0x25e20 + 0x68))(uStack_68);
                    return -0x7ffffffffffffff7;
                }
                *puVar5 = uStack_68;
                puVar5[1] = iVar6;
                iVar6 = fcn.000237f4(iStack_70,auStackX_20[0],0x78);
                if (iVar6 != 0) {
                    if ((in_stack_00000038 == 0) && (auStack_60 != *arg2)) {
                        uVar8 = 0;
                        iVar4 = fcn.000102e0(auStack_60,*arg2,0x28);
                        if (iVar4 != 0) {
                            arg3_00 = CONCAT71(uVar8 >> 8,1);
                            iVar4 = fcn.00023aac(iVar6,*in_stack_00000030 + 0x28,arg3_00);
                            if (iVar4 == 0) {
                                iVar7 = -0x7ffffffffffffff7;
                            }
                            else {
                                if (iVar4 != *arg2) {
                                    arg3_00 = 0;
                                    fcn.000102a0(iVar4,*arg2,0x28);
                                }
                                *arg2 = iVar4;
                                *(iVar6 + 0x20) = iVar4;
                                iVar3 = *in_stack_00000028;
                                if (iVar3 != 0) {
                                    arg3_00 = *in_stack_00000030;
                                    if ((arg3_00 != 0) && (iVar4 + 0x28 != iVar3)) {
                                        fcn.000102a0(iVar4 + 0x28,iVar3,arg3_00);
                                    }
                                }
                                fcn.00023bec(iVar6,*in_stack_00000030 + 0x28,CONCAT71(arg3_00 >> 8,1));
                                if (iVar6 + 0x38 != puVar5[1] + 0x38) {
                                    fcn.000102a0(iVar6 + 0x38,puVar5[1] + 0x38,0x30);
                                }
                            }
                        }
                    }
                    *arg4 = iVar6;
                    return iVar7;
                }
                (**(*0x25e20 + 0x68))(uStack_68);
                (**(*0x25e20 + 0x48))(puVar5);
            }
            goto code_r0x0001b0e1;
        }
        (**(*0x25e20 + 0x48))(iVar3);
    }
    return iVar7;
}


/* fcn.000149f4 @ 0x149f4 */

int64_t * fcn.000149f4(int64_t arg1,uint32_t *arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar1 = arg1 + 0x8b8;
    piVar3 = *piVar1;
    piVar4 = **piVar1;
    while( true ) {
        if (piVar3 == piVar1) {
            return NULL;
        }
        if ((arg2 == piVar3 + 0x2b) || (iVar2 = fcn.000102e0(arg2,piVar3 + 0x2b,0x10), iVar2 == 0)) break;
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    *(*piVar3 + 8) = piVar3[1];
    *piVar3[1] = *piVar3;
    iVar2 = *piVar1;
    *piVar3 = iVar2;
    piVar3[1] = piVar1;
    *(iVar2 + 8) = piVar3;
    *piVar1 = piVar3;
    return piVar3;
}


/* fcn.00012cb0 @ 0x12cb0 */

int64_t * fcn.00012cb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uchar *puVar6;
    int64_t *piVar7;
    uchar auStack_28 [16];
    
    iVar2 = *(arg1 + 0x50);
    uVar5 = (*arg2 ^ *arg3) % 0x1f;
    piVar7 = (uVar5 + 0x82) * 0x10 + iVar2;
    piVar3 = fcn.00012744(iVar2,arg2,arg3);
    if (piVar3 != NULL) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        iVar2 = *piVar7;
        *piVar3 = iVar2;
        piVar3[1] = piVar7;
        *(iVar2 + 8) = piVar3;
        *piVar7 = piVar3;
        return piVar3;
    }
    iVar4 = fcn.0001262c(iVar2,arg2);
    if (iVar4 == 0) {
        return NULL;
    }
    if ((*(iVar4 + 0x18) & 1) == 0) {
        puVar6 = iVar4 + 0x2d;
        if (auStack_28 == puVar6) goto code_r0x00012d87;
    }
    else {
        if (auStack_28 == arg2) goto code_r0x00012d87;
        puVar6 = arg2;
    }
    fcn.000102a0(auStack_28,puVar6,0x10);
code_r0x00012d87:
    piVar3 = iVar4 + 0x10;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
        (**(*0x25e20 + 0x48))(iVar4);
    }
    piVar3 = fcn.000126a0(arg2,arg3,auStack_28,iVar4);
    if (piVar3 == NULL) {
        return NULL;
    }
    iVar4 = *piVar7;
    *piVar3 = iVar4;
    piVar3[1] = piVar7;
    *(iVar4 + 8) = piVar3;
    *piVar7 = piVar3;
    piVar3[2] = piVar3[2] + 1;
    pcVar1 = uVar5 + 0xa10 + iVar2;
    *pcVar1 = *pcVar1 + '\x01';
    return piVar3;
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


/* fcn.00014900 @ 0x14900 */

int64_t * fcn.00014900(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    piVar2 = fcn.0001fa74(0x88);
    if (piVar2 == NULL) {
        return NULL;
    }
    *(piVar2 + 5) = 0;
    *(piVar2 + 0x5c) = 0;
    piVar2[0xf] = 0;
    piVar2[4] = 1;
    *(piVar2 + 0x2a) = 0;
    *(piVar2 + 0xc) = 4;
    piVar2[0x10] = 0x14724;
    piVar1 = piVar2 + 0xd;
    *piVar1 = piVar1;
    piVar2[0xe] = piVar1;
    if (piVar2 + 0x2b != arg2) {
        fcn.000102a0(piVar2 + 0x2b,arg2,0x10);
    }
    iVar3 = piVar2 + 0x3b;
    if (arg3 == 0) {
        arg3 = 0x25e80;
        if (iVar3 == 0x25e80) goto code_r0x000149ae;
    }
    else if (iVar3 == arg3) goto code_r0x000149ae;
    fcn.000102a0(iVar3,arg3,0x20);
code_r0x000149ae:
    piVar1 = arg1 + 0x8b8;
    iVar3 = *piVar1;
    piVar2[1] = piVar1;
    *piVar2 = iVar3;
    *(iVar3 + 8) = piVar2;
    *piVar1 = piVar2;
    iVar3 = fcn.00014d68(arg1,arg2);
    if (iVar3 != 0) {
        *(iVar3 + 0x30) = piVar2;
    }
    return piVar2;
}


/* fcn.0001c554 @ 0x1c554 */

void fcn.0001c554(int64_t arg1,int64_t arg2)

{
    fcn.00010280(arg2,0x10);
    *arg2 = 0x2ff;
    *(arg2 + 0xb) = 0xff01;
    if (arg2 + 0xd != arg1 + 0xd) {
        fcn.000102a0(arg2 + 0xd,arg1 + 0xd,3);
    }
    return;
}


/* fcn.0001538c @ 0x1538c */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h

ulong fcn.0001538c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t arg4_00;
    ushort *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint8_t uVar6;
    uint32_t arg1_00;
    uint64_t uVar7;
    int iVar8;
    int64_t var_17h;
    ushort *in_stack_00000028;
    uint32_t var_6fh;
    int16_t var_1h;
    int16_t var_3h;
    uchar auStack_68 [24];
    uchar auStack_50 [16];
    uchar auStack_40 [24];
    int64_t var_11h;
    int16_t var_5h;
    
    if ((arg3 == 0) || (arg4 == 0)) {
        return 0x8000000000000002;
    }
    bVar1 = false;
    if (arg2 != 0) {
        uVar7 = 0;
        do {
            if (*(uVar7 + arg2) != '\0') {
                if (in_stack_00000028 == NULL) {
                    return 0x8000000000000002;
                }
                iVar8 = 0x20;
                goto code_r0x000153ec;
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
        } while (uVar6 < 0x10);
    }
    bVar1 = true;
    iVar8 = 0x18;
code_r0x000153ec:
    arg4_00 = fcn.000232c4(iVar8 + 0x28);
    if (arg4_00 == 0) {
        return 0x8000000000000009;
    }
    if (arg2 == 0) {
        fcn.00010280(auStack_50,0x10);
    }
    else if (auStack_50 != arg2) {
        fcn.000102a0(auStack_50,arg2,0x10);
    }
    if (auStack_40 != arg3) {
        fcn.000102a0(auStack_40,arg3,0x10);
    }
    *(arg4_00 + 0x98) = *(arg4_00 + 0x98) + 0x28;
    *(arg4_00 + 0xa0) = *(arg4_00 + 0xa0) + 0x28;
    arg1_00 = arg4_00;
    puVar2 = fcn.00023aac(arg1_00,8,0);
    fcn.00010280(puVar2,8);
    *puVar2 = 0x87;
    iVar3 = fcn.00023aac(arg1_00,0x10,0);
    if (iVar3 != arg4) {
        fcn.000102a0(iVar3,arg4,0x10);
    }
    if (!bVar1) {
        puVar2 = fcn.00023aac(arg1_00,8,0);
        *puVar2 = 0x101;
        if (puVar2 + 1 != in_stack_00000028) {
            fcn.000102a0(puVar2 + 1,in_stack_00000028,6);
        }
        fcn.0001c554(arg3,auStack_68);
        if (((auStack_68 == arg3) || (iVar3 = fcn.000102e0(auStack_68,arg3,0xd), iVar3 == 0)) &&
           (iVar3 = arg4, iVar4 = fcn.000149f4(arg1,arg4), iVar4 == 0)) {
            fcn.00014900(arg1,iVar3,arg4,0);
        }
    }
    uVar5 = fcn.00011d14(arg1,*(arg1 + 0x48),0,arg4_00);
    return uVar5;
}


/* fcn.0001262c @ 0x1262c */

ulong * fcn.0001262c(int64_t arg1,uint32_t *arg2)

{
    char cVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    unkbyte7 in_R8;
    
    puVar4 = arg1 + 0x810;
    iVar3 = 0x80;
    do {
        for (puVar2 = *puVar4; puVar2 != puVar4; puVar2 = *puVar2) {
            if ((arg2 != NULL) &&
               (cVar1 = fcn.000229d0(arg2,puVar2 + 0x1d,CONCAT71(in_R8,*(puVar2 + 0x1c))), cVar1 != '\0')) {
                puVar2[2] = puVar2[2] + 1;
                return puVar2;
            }
        }
        puVar4 = puVar4 + -2;
        iVar3 = iVar3 + -1;
        if (iVar3 < 0) {
            return NULL;
        }
    } while( true );
}


/* fcn.000234ec @ 0x234ec */

int64_t fcn.000234ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint64_t uVar6;
    int *piVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    int iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    int64_t *piVar17;
    uint32_t uVar18;
    uint64_t uVar19;
    uint32_t uVar20;
    uint64_t uVar21;
    
    iVar11 = arg4;
    uVar8 = 0;
    uVar10 = arg3;
    if (uVar10 != 0) {
        uVar3 = arg2;
        if (uVar3 + uVar10 <= *(arg1 + 0x84)) {
            uVar20 = *(arg1 + 0x80);
            uVar6 = 0;
            uVar16 = 0;
            if (uVar20 != 0) {
                piVar7 = arg1 + 0xa8;
                do {
                    uVar18 = *piVar7 + uVar16;
                    if (uVar3 < uVar18) break;
                    uVar12 = uVar6 + 1;
                    uVar6 = uVar12;
                    piVar7 = piVar7 + 10;
                    uVar16 = uVar18;
                } while (uVar12 < uVar20);
            }
            uVar13 = uVar6;
            uVar21 = 0;
            uVar18 = 0;
            iVar1 = *(arg1 + 0xa8 + uVar6 * 0x28);
            uVar12 = iVar1 - (uVar3 - uVar16);
            if (uVar12 < uVar10) {
                uVar14 = uVar13 + 1;
                uVar9 = uVar14;
                if (uVar14 < uVar20) {
                    piVar7 = arg1 + (uVar9 * 4 + 0x15 + uVar14) * 8;
                    uVar14 = uVar16 + iVar1;
                    do {
                        iVar1 = *piVar7;
                        if (uVar3 + uVar10 <= iVar1 + uVar14) {
                            uVar18 = (uVar3 - uVar14) + uVar10;
                            uVar20 = uVar9;
                            goto code_r0x000235dc;
                        }
                        uVar15 = uVar9 + 1;
                        uVar9 = uVar15;
                        piVar7 = piVar7 + 10;
                        uVar14 = iVar1 + uVar14;
                    } while (uVar15 < uVar20);
                }
            }
            else {
                uVar18 = uVar10;
                uVar12 = uVar10;
                uVar20 = uVar13;
code_r0x000235dc:
                uVar21 = uVar20;
            }
            uVar20 = uVar21;
            if (iVar11 == 0) {
                iVar4 = fcn.00023220(0,(uVar20 - uVar13) + 1);
                if (iVar4 != 0) {
                    *(iVar4 + 0x78) = *(arg1 + 0x78);
code_r0x000236c8:
                    piVar17 = *(arg1 + 0x78) + 8;
                    *piVar17 = *piVar17 + 1;
                    *(iVar4 + 0x84) = uVar10;
                    iVar5 = (uVar3 - uVar16) + *(arg1 + 0x98 + uVar6 * 0x28);
                    uVar6 = uVar8;
                    uVar9 = uVar8 + 1;
                    *(iVar4 + 0x88 + uVar6 * 0x28) = iVar5;
                    *(iVar4 + 0x90 + uVar6 * 0x28) = uVar12 + iVar5;
                    *(iVar4 + 0x98 + uVar6 * 0x28) = iVar5;
                    *(iVar4 + 0xa0 + uVar6 * 0x28) = uVar12 + iVar5;
                    *(iVar4 + 0xa8 + uVar6 * 0x28) = uVar12;
                    uVar8 = uVar13 + 1;
                    if (uVar8 < uVar20) {
                        uVar19 = uVar20 - uVar8;
                        piVar17 = arg1 + (uVar8 * 4 + 0x13 + uVar8) * 8;
                        uVar6 = uVar9;
                        do {
                            uVar8 = *(piVar17 + 2);
                            iVar5 = *piVar17;
                            uVar9 = uVar6 + 1;
                            *(iVar4 + 0x88 + uVar6 * 0x28) = iVar5;
                            piVar17 = piVar17 + 5;
                            *(iVar4 + 0x98 + uVar6 * 0x28) = iVar5;
                            *(iVar4 + 0xa8 + uVar6 * 0x28) = uVar8;
                            iVar5 = iVar5 + uVar8;
                            *(iVar4 + 0x90 + uVar6 * 0x28) = iVar5;
                            *(iVar4 + 0xa0 + uVar6 * 0x28) = iVar5;
                            uVar19 = uVar19 - 1;
                            uVar6 = uVar9;
                        } while (uVar19 != 0);
                    }
                    if (uVar13 != uVar20) {
                        iVar5 = *(arg1 + 0x98 + uVar21 * 0x28);
                        *(iVar4 + 0x88 + uVar9 * 0x28) = iVar5;
                        *(iVar4 + 0x90 + uVar9 * 0x28) = uVar18 + iVar5;
                        *(iVar4 + 0xa0 + uVar9 * 0x28) = uVar18 + iVar5;
                        *(iVar4 + 0x98 + uVar9 * 0x28) = iVar5;
                        *(iVar4 + 0xa8 + uVar9 * 0x28) = uVar18;
                    }
                    if (iVar4 + 0x38 != arg1 + 0x38) {
                        fcn.000102a0(iVar4 + 0x38,arg1 + 0x38,0x40);
                    }
                    return iVar4;
                }
            }
            else {
                iVar4 = fcn.00023220(1,(uVar20 - uVar13) + 2);
                if (iVar4 != 0) {
                    iVar5 = fcn.0001fa44();
                    if (iVar5 != 0) {
                        iVar2 = *(iVar4 + 0x78);
                        *(iVar2 + 0x10) = 0x234e4;
                        *(iVar2 + 0x18) = *(arg1 + 0x78);
                        *(iVar2 + 0x20) = 1;
                        *(iVar2 + 0x24) = iVar11;
                        iVar2 = *(iVar4 + 0x78);
                        *(iVar2 + 0x30) = iVar11;
                        *(iVar2 + 0x38) = iVar5;
                        iVar2 = (arg4 & 0xffffffffU) + iVar5;
                        *(iVar4 + 0x90) = iVar2;
                        *(iVar4 + 0xa0) = iVar2;
                        *(iVar4 + 0x88) = iVar5;
                        *(iVar4 + 0x98) = iVar5;
                        *(iVar4 + 0xa8) = iVar11;
                        *(iVar4 + 0x98) = *(iVar4 + 0x98) + (arg4 & 0xffffffffU);
                        *(iVar4 + 0xa8) = 0;
                        uVar8 = 1;
                        goto code_r0x000236c8;
                    }
                    (**(*0x25e20 + 0x48))(iVar4);
                }
            }
        }
    }
    return 0;
}


/* fcn.000233c8 @ 0x233c8 */

void fcn.000233c8(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.00023354(*(arg1 + 0x78));
        (**(*0x25e20 + 0x48))(arg1);
    }
    return;
}


/* fcn.00023354 @ 0x23354 */

void fcn.00023354(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x25e20 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x25e20 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x25e20 + 0x48))(arg1);
    }
    return;
}


/* fcn.00011be8 @ 0x11be8 */

int64_t fcn.00011be8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    uint16_t uVar2;
    int64_t arg1_00;
    int64_t iVar3;
    uint64_t arg2_00;
    int64_t in_stack_00000028;
    uchar in_stack_00000038;
    uint32_t in_stack_00000040;
    
    iVar3 = CONCAT71(arg3 >> 8,1);
    arg2_00 = in_stack_00000040;
    arg1_00 = fcn.00023aac(arg2,arg2_00,iVar3);
    if (arg1_00 == 0) {
        iVar3 = -0x7ffffffffffffffc;
    }
    else {
        if (arg1_00 != arg3) {
            iVar3 = 0;
            arg2_00 = arg3;
            fcn.000102a0(arg1_00,arg3,0x28);
        }
        uVar2 = *(arg2 + 0x84) - 0x28;
        *(arg1_00 + 4) = uVar2 * 0x100 | uVar2 >> 8;
        *(arg2 + 0x20) = arg1_00;
        if (in_stack_00000040 - 0x30 == 0) {
            *(arg1_00 + 6) = 0x2c;
        }
        if ((arg4 & 0xfffcU) == 0) {
            uVar1 = *(arg3 + 6);
        }
        else {
            uVar1 = *(arg1_00 + 6);
        }
        iVar3 = fcn.0001cd98(arg1,CONCAT71(arg2_00 >> 8,uVar1),CONCAT71(iVar3 >> 8,in_stack_00000038),
                             in_stack_00000028);
        if (-1 < iVar3) {
            if (arg1_00 + 0x28 != 0) {
                fcn.000102a0(arg1_00 + 0x28,0,(in_stack_00000040 - 0x30) + 8);
            }
            (**(*0x25e20 + 0x48))(0);
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00019990 @ 0x19990 */

int64_t fcn.00019990(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint *arg1_00;
    int64_t arg1_01;
    ulong *puVar2;
    uint uVar3;
    int iVar4;
    int64_t arg1_02;
    uint *puVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint *puVar9;
    uint auStackX_8 [2];
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    
    arg1_02 = *(arg1 + 0x38);
    puVar5 = fcn.0001fa44(arg1,((*(arg3 + 0x80) - 1) + 0xc) * 0x10);
    if (puVar5 == NULL) {
        return -0x7ffffffffffffff7;
    }
    piVar1 = puVar5 + 2;
    *puVar5 = 0x54365049;
    arg1_00 = puVar5 + 0xe;
    *piVar1 = piVar1;
    *(puVar5 + 4) = piVar1;
    *(puVar5 + 8) = in_stack_00000028;
    *(puVar5 + 6) = arg2;
    *(puVar5 + 0xc) = in_stack_00000030;
    *(puVar5 + 10) = arg3;
    fcn.00010280(arg1_00,0x20);
    puVar9 = *(arg1 + 0x38) + 0xb6c;
    if (puVar5 + 0x16 != puVar9) {
        fcn.000102a0(puVar5 + 0x16,puVar9,0x20);
    }
    puVar2 = puVar5 + 0x1e;
    *(puVar5 + 0x20) = 0x8000000000000006;
    iVar6 = (**(*0x25e20 + 0x50))(0x200,0x10,0x19974,puVar5,puVar2);
    if (iVar6 < 0) {
        (**(*0x25e20 + 0x48))(puVar5);
        return -0x7ffffffffffffff7;
    }
    *(puVar5 + 0x22) = puVar5 + 0x24;
    *(puVar5 + 0x26) = puVar5 + 0x16;
    *(puVar5 + 0x24) = arg1_00;
    *(puVar5 + 0x28) = 0x86dd;
    uVar3 = *(arg3 + 0x84);
    *(puVar5 + 0x2a) = 0;
    puVar5[0x29] = uVar3;
    auStackX_8[0] = *(arg3 + 0x80);
    fcn.00023970(arg3,puVar5 + 0x2c,auStackX_8);
    *(puVar5 + 0xaa) = auStackX_8[0];
    if (*arg4 == -1) {
        iVar6 = fcn.0001c834(*(arg1_02 + 0x928),arg4,arg1_00);
        if (iVar6 < 0) goto code_r0x00019c5e;
    }
    else {
        iVar6 = *(arg3 + 0x20) + 8;
        arg1_01 = *(arg3 + 0x20) + 0x18;
        if ((arg1_01 == iVar6) || (iVar6 = fcn.000102e0(arg1_01,iVar6,0x10), iVar6 == 0)) {
            puVar9 = arg1_02 + 0xb6c;
        }
        else {
            puVar7 = fcn.000149f4(arg1_02,arg4);
            if (puVar7[0xf] == 0) {
                puVar7[0xf] = arg1;
            }
            iVar4 = *(puVar7 + 0x5c);
            if (iVar4 != 1) {
                if (iVar4 == 2) {
                    *(puVar7 + 0x5c) = 3;
                    *(puVar7 + 100) = 0x32;
                }
                else if (1 < iVar4 - 3U) {
                    puVar2 = arg1 + 0x50;
                    puVar8 = *puVar2;
                    do {
                        if (puVar8 == puVar2) {
                            *piVar1 = puVar7 + 0xd;
                            puVar8 = puVar7[0xe];
                            *(puVar5 + 4) = puVar8;
                            *puVar8 = piVar1;
                            puVar7[0xe] = piVar1;
                            piVar1 = puVar7 + 2;
                            *piVar1 = puVar2;
                            puVar2 = *(arg1 + 0x58);
                            puVar7[3] = puVar2;
                            *puVar2 = piVar1;
                            *(arg1 + 0x58) = piVar1;
code_r0x00019be2:
                            *(puVar7 + 0x29) = 1;
                            return 0;
                        }
                        if (puVar8 + -2 == puVar7) {
                            *piVar1 = puVar7 + 0xd;
                            puVar2 = puVar7[0xe];
                            *(puVar5 + 4) = puVar2;
                            *puVar2 = piVar1;
                            puVar7[0xe] = piVar1;
                            goto code_r0x00019be2;
                        }
                        puVar8 = *puVar8;
                    } while( true );
                }
            }
            puVar9 = puVar7 + 0x3b;
        }
        if (arg1_00 != puVar9) {
            fcn.000102a0(arg1_00,puVar9,0x20);
        }
    }
    *piVar1 = arg1 + 0x60;
    puVar7 = *(arg1 + 0x68);
    *(puVar5 + 4) = puVar7;
    *puVar7 = piVar1;
    *(arg1 + 0x68) = piVar1;
    iVar6 = (**(*(arg1_02 + 0x928) + 0x20))(*(arg1_02 + 0x928),puVar2);
    if (-1 < iVar6) {
        return 0;
    }
    *(*piVar1 + 8) = *(puVar5 + 4);
    **(puVar5 + 4) = *piVar1;
code_r0x00019c5e:
    (**(*0x25e20 + 0x70))(*puVar2);
    (**(*0x25e20 + 0x48))(puVar5);
    return iVar6;
}


/* fcn.000124d8 @ 0x124d8 */

void fcn.000124d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t iVar1;
    char cVar2;
    ulong *puVar3;
    ulong *puVar4;
    
    arg1_00 = *(arg1 + 0x38);
    puVar3 = *(arg1 + 0x50);
    puVar4 = *puVar3;
    while (puVar3 != arg1 + 0x50) {
        fcn.00014a84(arg1_00,puVar3 + -2,0,0);
        puVar3 = puVar4;
        puVar4 = *puVar4;
    }
    puVar3 = *(arg1 + 0x60);
    puVar4 = *puVar3;
    do {
        if (puVar3 == arg1 + 0x60) {
            return;
        }
        if (arg3 == 0) {
code_r0x0001255e:
            iVar1 = *(arg1_00 + 0x928);
            (**(iVar1 + 0x30))(iVar1,puVar3 + 0xe);
        }
        else {
            cVar2 = (*arg3)(puVar3 + -1,arg4);
            if (cVar2 != '\0') goto code_r0x0001255e;
        }
        puVar3 = puVar4;
        puVar4 = *puVar4;
    } while( true );
}


/* fcn.000229d0 @ 0x229d0 */

ulong fcn.000229d0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint8_t uVar2;
    uint8_t uVar3;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar2 = arg3;
    if (uVar2 != 0) {
        uVar3 = uVar2 >> 3;
        if ((uVar2 >> 3 == 0) || (arg1_00 == arg2)) {
            iVar1 = 0;
        }
        else {
            iVar1 = fcn.000102e0(arg1_00,arg2,uVar3);
        }
        if ((iVar1 != 0) ||
           (((arg3 & 7U) != 0 &&
            ((uVar2 = -1 << (8 - (uVar2 & 7) & 0x1f), 0xf < uVar3 ||
             ((*(uVar3 + arg1_00) & uVar2) != (*(uVar3 + arg2) & uVar2))))))) {
            return 0;
        }
    }
    return 1;
}


/* fcn.0001259c @ 0x1259c */

int64_t fcn.0001259c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    
    iVar1 = fcn.0001fa74(0x40);
    if (iVar1 != 0) {
        *(iVar1 + 0x18) = 0;
        *(iVar1 + 0x1c) = arg2;
        *(iVar1 + 0x10) = 1;
        if ((CONCAT44(in_register_0000000c,arg1) != 0) && (iVar1 + 0x1d != CONCAT44(in_register_0000000c,arg1))) {
            fcn.000102a0(iVar1 + 0x1d,arg1,0x10);
        }
        if ((arg3 != 0) && (iVar1 + 0x2d != arg3)) {
            fcn.000102a0(iVar1 + 0x2d,arg3,0x10);
        }
    }
    return iVar1;
}


/* fcn.00012744 @ 0x12744 */

ulong * fcn.00012744(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    uint64_t uVar3;
    
    uVar3 = (*arg2 ^ *arg3) % 0x1f;
    puVar2 = *(arg1 + (uVar3 + 0x82) * 0x10);
    while( true ) {
        if (puVar2 == (uVar3 + 0x82) * 0x10 + arg1) {
            return NULL;
        }
        if (((arg2 == puVar2 + 4) || (iVar1 = fcn.000102e0(arg2,puVar2 + 4,0x10), iVar1 == 0)) &&
           ((arg3 == puVar2 + 6 || (iVar1 = fcn.000102e0(arg3,puVar2 + 6,0x10), iVar1 == 0)))) break;
        puVar2 = *puVar2;
    }
    puVar2[2] = puVar2[2] + 1;
    return puVar2;
}


/* fcn.000126a0 @ 0x126a0 */

int64_t fcn.000126a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001fa44(arg1,0x50);
    if (iVar1 != 0) {
        *(iVar1 + 0x18) = arg4;
        *(iVar1 + 0x10) = 1;
        if (iVar1 + 0x20 != arg1) {
            fcn.000102a0(iVar1 + 0x20,arg1,0x10);
        }
        if (iVar1 + 0x30 != arg2) {
            fcn.000102a0(iVar1 + 0x30,arg2,0x10);
        }
        if (iVar1 + 0x40 != arg3) {
            fcn.000102a0(iVar1 + 0x40,arg3,0x10);
        }
    }
    return iVar1;
}


/* fcn.0001faa0 @ 0x1faa0 */

void fcn.0001faa0(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001fa44();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001c290 @ 0x1c290 */

ulong fcn.0001c290(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *arg1_00;
    int64_t iVar1;
    ulong *puVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    ulong *arg1_01;
    ulong *puVar4;
    uint in_R8;
    int64_t *piVar5;
    uint64_t uVar6;
    
    piVar5 = CONCAT44(in_R8,arg3);
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar3 + 0x8a0) == '\0') {
        uVar6 = 0;
    }
    else {
        uVar6 = *(*(iVar3 + 0x48) + 0x30) + 1;
    }
    *arg2 = uVar6;
    if ((piVar5 != NULL) && (uVar6 != 0)) {
        if (*piVar5 == 0) {
            iVar1 = fcn.0001fa44(iVar3,uVar6 * 0x11);
            *piVar5 = iVar1;
            if (iVar1 == 0) {
                return 0x8000000000000009;
            }
        }
        arg1_00 = *piVar5;
        if (arg1_00 != iVar3 + 0x890) {
            fcn.000102a0(arg1_00,iVar3 + 0x890,0x10);
        }
        *(arg1_00 + 2) = 0x40;
        puVar2 = *(iVar3 + 0x48) + 0x20;
        for (puVar4 = *puVar2; arg1_01 = arg1_00 + 0x11, puVar4 != puVar2; puVar4 = *puVar4) {
            if (arg1_01 != puVar4 + 2) {
                fcn.000102a0(arg1_01,puVar4 + 2,0x10);
            }
            *(arg1_00 + 0x21) = *(puVar4 + 0x21);
            puVar2 = *(iVar3 + 0x48) + 0x20;
            arg1_00 = arg1_01;
        }
    }
    return 0;
}


/* fcn.000127fc @ 0x127fc */

//WARNING: Removing unreachable block (ram,0x0001289a)

ulong fcn.000127fc(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    uint in_register_00000014;
    int64_t *piVar3;
    ulong *puVar4;
    ulong *puVar5;
    ulong *puVar6;
    uint8_t uVar7;
    uint64_t arg3_00;
    uint64_t uVar8;
    int iVar9;
    int64_t iVar10;
    
    piVar3 = CONCAT44(in_register_00000014,arg2);
    if (arg3 != 0) {
        if (*piVar3 == 0) {
            iVar2 = fcn.0001fa44(arg1,(arg3 & 0xffffffffU) * 0x21);
            *piVar3 = iVar2;
            if (iVar2 == 0) {
                return 0x8000000000000009;
            }
        }
        iVar2 = *piVar3;
        uVar8 = 0;
        puVar5 = arg1 + 0x810;
        iVar9 = 0x80;
        puVar6 = puVar5;
        do {
            for (puVar4 = *puVar6; puVar4 != puVar5; puVar4 = *puVar4) {
                uVar1 = *(puVar4 + 0x1c);
                iVar10 = uVar8 * 0x21 + 0x10 + iVar2;
                uVar7 = *(puVar4 + 0x1c) & 7;
                fcn.00010280(iVar10,0x10);
                arg3_00 = uVar1 >> 3;
                if ((arg3_00 != 0) && (iVar10 != puVar4 + 0x1d)) {
                    fcn.000102a0(iVar10,puVar4 + 0x1d,arg3_00);
                }
                if (uVar7 != 0) {
                    *(arg3_00 + iVar10) = -1 << (8 - uVar7 & 0x1f) & *(puVar4 + arg3_00 + 0x1d);
                }
                iVar10 = uVar8 * 0x21 + iVar2;
                if (iVar10 != puVar4 + 0x2d) {
                    fcn.000102a0(iVar10,puVar4 + 0x2d,0x10);
                }
                uVar8 = uVar8 + 1;
                *(iVar10 + 0x20) = *(puVar4 + 0x1c);
            }
            puVar5 = puVar5 + -2;
            puVar6 = puVar6 + -2;
            iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
    }
    return 0;
}


/* fcn.0001428c @ 0x1428c */

ulong fcn.0001428c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    uint32_t uVar5;
    
    uVar5 = 0;
    piVar4 = *(arg1 + 0x60) + 0x8b8;
    uVar3 = 0;
    piVar1 = *piVar4;
    if (piVar1 != piVar4) {
        do {
            piVar1 = *piVar1;
            uVar3 = uVar3 + 1;
        } while (piVar1 != piVar4);
        if (uVar3 != 0) {
            iVar2 = fcn.0001fa44(arg1,uVar3 * 0x34);
            if (iVar2 == 0) {
                return 0x8000000000000009;
            }
            *arg2 = uVar3;
            for (piVar1 = *piVar4; piVar1 != piVar4; piVar1 = *piVar1) {
                arg1_00 = uVar5 * 0x34 + iVar2;
                *(arg1_00 + 0x30) = *(piVar1 + 0x5c);
                if (arg1_00 != piVar1 + 0x2b) {
                    fcn.000102a0(arg1_00,piVar1 + 0x2b,0x10);
                }
                if (arg1_00 + 0x10 != piVar1 + 0x3b) {
                    fcn.000102a0(arg1_00 + 0x10,piVar1 + 0x3b,0x20);
                }
                uVar5 = uVar5 + 1;
            }
            *arg3 = iVar2;
        }
    }
    return 0;
}


/* fcn.0001436c @ 0x1436c */

ulong fcn.0001436c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int64_t arg1_00;
    int64_t *piVar4;
    uint32_t uVar5;
    
    uVar5 = 0;
    piVar4 = *(arg1 + 0x60) + 0x8c8;
    uVar3 = 0;
    piVar1 = *piVar4;
    if (piVar1 != piVar4) {
        do {
            piVar1 = *piVar1;
            uVar3 = uVar3 + 1;
        } while (piVar1 != piVar4);
        if (uVar3 != 0) {
            iVar2 = fcn.0001fa44(arg1,uVar3 * 0x11);
            if (iVar2 == 0) {
                return 0x8000000000000009;
            }
            *arg2 = uVar3;
            for (piVar1 = *piVar4; piVar1 != piVar4; piVar1 = *piVar1) {
                arg1_00 = uVar5 * 0x11 + iVar2;
                if (arg1_00 != piVar1 + 0x21) {
                    fcn.000102a0(arg1_00,piVar1 + 0x21,0x10);
                }
                uVar5 = uVar5 + 1;
                *(arg1_00 + 0x10) = piVar1[4];
            }
            *arg3 = iVar2;
        }
    }
    return 0;
}


/* fcn.000140f8 @ 0x140f8 */

int64_t fcn.000140f8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00022cc4(arg1 + 0xa8,0x14014,arg2);
    if (iVar1 < 0) {
        if (arg2 == 0) {
            return iVar1;
        }
        if (iVar1 != -0x7fffffffffffffeb) {
            return iVar1;
        }
    }
    else {
        iVar1 = fcn.00022cc4(arg1 + 0x80,0x14070,arg2);
        (**(*0x25e60 + 8))(*0x25e60);
        if (iVar1 < 0) {
            if ((arg2 == 0) || (iVar1 != -0x7fffffffffffffeb)) {
                return iVar1;
            }
        }
        else {
            if (arg2 != 0) {
                return -0x7ffffffffffffff2;
            }
            if ((*(arg1 + 200) != 0) || (*(arg1 + 0xa0) != 0)) {
                return -0x7ffffffffffffff9;
            }
        }
    }
    return 0;
}


/* fcn.0001a6fc @ 0x1a6fc */

uint64_t fcn.0001a6fc(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar3;
    uint32_t uVar4;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = *(arg1_00 + 0x60);
    if (arg2 == '\0') {
        uVar4 = *(arg1_00 + 0x128);
        do {
            do {
                if (uVar4 == 0) {
                    return -(arg3 != 0) & 0x800000000000000e;
                }
                uVar4 = uVar4 - 1;
                iVar2 = uVar4 * 0x10 + *(arg1_00 + 0x120);
            } while (((arg3 != 0) && (iVar2 != arg3)) && (iVar3 = fcn.000102e0(iVar2,arg3,0x10), iVar3 != 0));
            uVar1 = fcn.0001a5d0(*(arg1_00 + 0x60),iVar2);
            if (uVar1 < 0) {
                return uVar1;
            }
            fcn.0001a418(arg1_00,iVar2);
            if (*(arg1_00 + 0x128) == 0) {
                (**(*0x25e20 + 0x48))(*(arg1_00 + 0x120));
                *(arg1_00 + 0x120) = 0;
            }
        } while (arg3 == 0);
        uVar1 = 0;
    }
    else {
        uVar1 = 0;
        if (*(arg1_00 + 0x128) != 0) {
            do {
                iVar3 = uVar1 * 0x10 + *(arg1_00 + 0x120);
                if ((iVar3 == arg3) || (iVar3 = fcn.000102e0(iVar3,arg3,0x10), iVar3 == 0)) {
                    return 0x8000000000000014;
                }
                uVar4 = uVar1 + 1;
                uVar1 = uVar4;
            } while (uVar4 < *(arg1_00 + 0x128));
        }
        uVar1 = fcn.0001a4d0(iVar2,*(arg1_00 + 0x108),arg3);
        if (-1 < uVar1) {
            *(arg1_00 + 0x128) = *(arg1_00 + 0x128) + 1;
            iVar2 = fcn.0001fa44();
            if (iVar2 == 0) {
                uVar1 = 0x8000000000000009;
            }
            else {
                if (1 < *(arg1_00 + 0x128)) {
                    uVar1 = *(arg1_00 + 0x128) - 1;
                    if ((uVar1 != 0) && (iVar2 != *(arg1_00 + 0x120))) {
                        fcn.000102a0(iVar2,*(arg1_00 + 0x120),uVar1 << 4);
                    }
                    (**(*0x25e20 + 0x48))(*(arg1_00 + 0x120));
                }
                iVar3 = (*(arg1_00 + 0x128) - 1) * 0x10 + iVar2;
                if (iVar3 != arg3) {
                    fcn.000102a0(iVar3,arg3,0x10);
                }
                *(arg1_00 + 0x120) = iVar2;
                uVar1 = 0;
            }
        }
    }
    return uVar1;
}


/* fcn.000130a0 @ 0x130a0 */

uint64_t fcn.000130a0(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char extraout_AL;
    uint64_t uVar1;
    uint in_register_00000014;
    uint8_t uVar2;
    
    uVar2 = 0;
    do {
        if (*(uVar2 + CONCAT44(in_register_00000014,arg2)) != '\0') {
            if (*CONCAT44(in_register_00000014,arg2) == -1) {
                return 0;
            }
            uVar1 = 0;
            goto code_r0x000130ce;
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x10);
    goto code_r0x000130fa;
    while( true ) {
        uVar2 = uVar1 + 1;
        uVar1 = uVar2;
        if (0xe < uVar2) break;
code_r0x000130ce:
        if (*(uVar1 + CONCAT44(in_register_00000014,arg2)) != '\0') goto code_r0x000130e8;
    }
    if (*(uVar2 + CONCAT44(in_register_00000014,arg2)) < 2) {
        return 0;
    }
code_r0x000130e8:
    fcn.0001c74c(arg1,CONCAT44(in_register_00000014,arg2),0,0);
    if (extraout_AL == '\0') {
        return arg3 == '\0';
    }
code_r0x000130fa:
    return arg3 & 0xff;
}


/* fcn.000131e4 @ 0x131e4 */

int64_t fcn.000131e4(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint64_t uVar9;
    uint32_t *arg1_01;
    uint32_t arg2_00;
    int64_t iStackX_8;
    int64_t iStackX_18;
    uint32_t auStack_28 [4];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar6 = *(arg1_00 + 0x60);
    arg1_01 = arg1_00 + 300;
    arg2_00 = arg2;
    if (*(arg1_00 + 0x58) == 1) {
        iVar6 = fcn.000140f8(arg1_00,0);
        if (iVar6 < 0) {
            return -0x7ffffffffffffff9;
        }
        if (arg1_01 == arg2) {
            return 0;
        }
        fcn.000102a0(arg1_01,arg2_00,0x34);
        return 0;
    }
    uVar9 = 0;
    do {
        if (*(uVar9 + 0x14 + arg2) != '\0') {
            bVar3 = false;
            break;
        }
        bVar3 = true;
        uVar8 = uVar9 + 1;
        uVar9 = uVar8;
    } while (uVar8 < 0x10);
    uVar9 = 0;
    do {
        if (*(uVar9 + 4 + arg2) != '\0') {
            bVar4 = false;
            break;
        }
        bVar4 = true;
        uVar8 = uVar9 + 1;
        uVar9 = uVar8;
    } while (uVar8 < 0x10);
    if (bVar3) {
        if (!bVar4) {
            iVar7 = fcn.00011930(iVar6,arg2 + 4,auStack_28);
            if (iVar7 < 0) {
                return iVar7;
            }
            goto code_r0x00013318;
        }
        piVar2 = arg1_00 + 0x110;
        piVar1 = *(iVar6 + 0x48) + 0x18;
        *piVar1 = *piVar1 + 1;
        *(arg1_00 + 0x108) = *(iVar6 + 0x48);
        iVar6 = *(iVar6 + 0x48);
        *piVar2 = iVar6 + 0x98;
        piVar1 = *(iVar6 + 0xa0);
        *(arg1_00 + 0x118) = piVar1;
        *piVar1 = piVar2;
        *(iVar6 + 0xa0) = piVar2;
        if (arg1_01 == arg2) goto code_r0x000132d6;
        iVar6 = 0x34;
    }
    else {
        if (auStack_28 != arg2 + 0x14) {
            fcn.000102a0(auStack_28,arg2 + 0x14,0x10);
        }
code_r0x00013318:
        cVar5 = fcn.0001c74c(iVar6,auStack_28,&iStackX_18,&iStackX_8);
        if (cVar5 == '\0') {
            return -0x7ffffffffffffffe;
        }
        if (iStackX_8 == 0) {
            *(arg1_00 + 0x78) = 0x40;
        }
        else {
            *(arg1_00 + 0x78) = *(iStackX_8 + 0x29);
        }
        piVar1 = arg1_00 + 0x110;
        *(iStackX_18 + 0x18) = *(iStackX_18 + 0x18) + 1;
        *(arg1_00 + 0x108) = iStackX_18;
        *piVar1 = iStackX_18 + 0x98;
        piVar2 = *(iStackX_18 + 0xa0);
        *(arg1_00 + 0x118) = piVar2;
        *piVar2 = piVar1;
        *(iStackX_18 + 0xa0) = piVar1;
        if (arg1_01 != arg2) {
            fcn.000102a0(arg1_01,arg2_00,0x34);
        }
        arg1_01 = arg1_00 + 0x140;
        if (arg1_01 == auStack_28) goto code_r0x000132d6;
        iVar6 = 0x10;
        arg2_00 = auStack_28;
    }
    fcn.000102a0(arg1_01,arg2_00,iVar6);
code_r0x000132d6:
    *(arg1_00 + 0x58) = 1;
    return 0;
}


/* fcn.00013490 @ 0x13490 */

int64_t fcn.00013490(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    char cVar5;
    
    bVar1 = false;
    cVar5 = '\0';
    if (arg2 == '\0') {
        bVar1 = true;
        for (puVar2 = *(arg1 + 0x38); puVar2 != arg1 + 0x38; puVar2 = *puVar2) {
            *(puVar2 + 0x14) = 0;
            for (puVar4 = puVar2[0x12]; puVar4 != puVar2 + 0x12; puVar4 = *puVar4) {
                if (*(puVar4 + 0x1f) != '\0') {
                    cVar5 = '\x01';
                    *(puVar2 + 0x14) = 1;
                }
            }
        }
        if (cVar5 == *(arg1 + 0x93d)) {
            return 0;
        }
        *(arg1 + 0x93d) = cVar5;
    }
    iVar3 = (**(*(arg1 + 0x928) + 8))(*(arg1 + 0x928),arg1 + 0x930);
    if ((iVar3 < 0) && (bVar1)) {
        *(arg1 + 0x93d) = cVar5 == '\0';
    }
    return iVar3;
}


/* fcn.00012a5c @ 0x12a5c */

ulong fcn.00012a5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong uVar4;
    uint8_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    int64_t arg3_00;
    
    piVar8 = ((arg3 & 0xffU) + 1) * 0x10 + arg1;
    piVar3 = *piVar8;
    iVar6 = arg2;
    arg3_00 = arg3;
    while( true ) {
        if (piVar3 == piVar8) break;
        iVar6 = piVar3 + 0x1d;
        arg3_00 = CONCAT71(arg3_00 >> 8,arg3);
        cVar1 = fcn.000229d0(arg2,iVar6,arg3_00);
        if (cVar1 != '\0') {
            iVar6 = piVar3 + 0x2d;
            if (arg4 == iVar6) {
                return 0x800000000000000f;
            }
            arg3_00 = 0;
            iVar2 = fcn.000102e0(arg4,iVar6,0x10);
            if (iVar2 == 0) {
                return 0x800000000000000f;
            }
        }
        piVar3 = *piVar3;
    }
    piVar3 = fcn.0001259c(arg2,CONCAT71(iVar6 >> 8,arg3),arg4);
    if (piVar3 == NULL) {
        uVar4 = 0x8000000000000009;
    }
    else {
        uVar7 = 0;
        do {
            if (*(uVar7 + arg4) != '\0') goto code_r0x00012b0c;
            uVar5 = uVar7 + 1;
            uVar7 = uVar5;
        } while (uVar5 < 0x10);
        *(piVar3 + 3) = 1;
code_r0x00012b0c:
        iVar6 = *piVar8;
        *piVar3 = iVar6;
        piVar3[1] = piVar8;
        *(iVar6 + 8) = piVar3;
        *piVar8 = piVar3;
        *(arg1 + 8) = *(arg1 + 8) + 1;
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.00016574 @ 0x16574 */

ulong fcn.00016574(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t noname_1;
    char in_stack_00000028;
    
    noname_1 = arg2;
    iVar1 = fcn.000149f4(arg1,arg2);
    if (iVar1 == 0) {
        if (arg3 == 0) {
            return 0x800000000000000e;
        }
        iVar1 = fcn.00014900(arg1,noname_1,arg2,arg3);
        if (iVar1 == 0) {
            return 0x8000000000000009;
        }
    }
    else {
        if (in_stack_00000028 == '\0') {
            return 0x800000000000000f;
        }
        if ((arg3 != 0) && (iVar1 + 0x3b != arg3)) {
            fcn.000102a0(iVar1 + 0x3b,arg3,0x20);
        }
    }
    *(iVar1 + 0x5c) = 1;
    if (arg4 == 0) {
        *(iVar1 + 100) = 0xffffffff;
    }
    else {
        *(iVar1 + 0x2a) = 1;
        *(iVar1 + 100) = ((arg4 & 0xffffffffU) / 10000 + 99U) / 100;
    }
    return 0;
}


/* fcn.00022cc4 @ 0x22cc4 */

int64_t fcn.00022cc4(uint32_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000237f4 @ 0x237f4 */

//WARNING: Variable defined which should be unmapped: var_1h

int64_t fcn.000237f4(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t arg1_00;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    int32_t var_1h;
    
    uVar7 = 0;
    uVar10 = arg3;
    uVar8 = arg3 & 0xffffffff;
    uVar9 = arg2;
    uVar6 = 0;
    arg1_00 = arg2;
    uVar3 = uVar7;
    uVar11 = uVar6;
    if (uVar10 != 0) {
        uVar3 = fcn.0001fa44(arg1_00,uVar8);
        if (uVar3 == 0) {
            return 0;
        }
        arg1_00 = arg2 + 1;
        uVar11 = uVar10;
    }
    iVar4 = fcn.00023220(arg1_00,arg1_00);
    if (iVar4 == 0) {
        if (uVar3 != 0) {
            (**(*0x25e20 + 0x48))(uVar3);
        }
        return 0;
    }
    iVar1 = *(iVar4 + 0x78);
    *(iVar1 + 0x10) = in_stack_00000028;
    *(iVar1 + 0x18) = in_stack_00000030;
    *(iVar1 + 0x20) = uVar11 != 0;
    if (uVar11 != 0) {
        iVar2 = *(iVar4 + 0x78);
        *(iVar2 + 0x30) = uVar10;
        *(iVar2 + 0x38) = uVar3;
        *(iVar4 + 0x90) = uVar8 + uVar3;
        *(iVar4 + 0xa0) = uVar8 + uVar3;
        *(iVar4 + 0x88) = uVar3;
        *(iVar4 + 0x98) = uVar3;
        *(iVar4 + 0xa8) = uVar10;
        *(iVar4 + 0x98) = *(iVar4 + 0x98) + uVar8;
        *(iVar4 + 0xa8) = 0;
    }
    if (arg2 != 0) {
        uVar3 = uVar11 != 0;
        do {
            uVar11 = *arg1;
            iVar2 = *(arg1 + 8);
            puVar5 = (uVar3 + 3) * 0x10 + *(iVar4 + 0x78);
            *puVar5 = uVar11;
            *(puVar5 + 2) = iVar2;
            *(iVar4 + 0x90 + uVar3 * 0x28) = iVar2 + uVar11;
            *(iVar4 + 0xa0 + uVar3 * 0x28) = iVar2 + uVar11;
            *(iVar4 + 0x88 + uVar3 * 0x28) = iVar2;
            *(iVar4 + 0x98 + uVar3 * 0x28) = iVar2;
            *(iVar4 + 0xa8 + uVar3 * 0x28) = uVar11;
            uVar6 = uVar7 + *arg1;
            uVar7 = uVar6;
            arg1 = arg1 + 0x10;
            uVar9 = uVar9 - 1;
            uVar3 = uVar3 + 1;
        } while (uVar9 != 0);
    }
    *(iVar1 + 0x24) = uVar6 + uVar10;
    *(iVar4 + 0x84) = uVar6;
    return iVar4;
}


/* fcn.00022c60 @ 0x22c60 */

ulong fcn.00022c60(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.00022bf8(arg1);
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


/* fcn.00011d14 @ 0x11d14 */

//WARNING: Removing unreachable block (ram,0x000123b1)
//WARNING: Removing unreachable block (ram,0x000123f6)
//WARNING: Removing unreachable block (ram,0x00012460)

int64_t fcn.00011d14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    uint8_t uVar2;
    char cVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    int64_t iVar10;
    uint8_t *puVar11;
    uint64_t arg2_00;
    int64_t iVar12;
    uint32_t uVar13;
    uint32_t *arg2_01;
    uint32_t *arg2_02;
    uint32_t uVar14;
    uint8_t *arg3_00;
    ulong uVar15;
    code cVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    uint16_t *puVar19;
    uint64_t uStackX_20;
    char cStack0000000000000028;
    unkbyte7 Stack0000000000000029;
    uint8_t *in_stack_00000030;
    uint32_t in_stack_00000038;
    int64_t in_stack_00000048;
    uint32_t in_stack_ffffffffffffff60;
    code cVar20;
    uint in_stack_ffffffffffffff68;
    uint32_t in_stack_ffffffffffffff6c;
    uint in_stack_ffffffffffffff70;
    uint in_stack_ffffffffffffff74;
    char cVar21;
    uint32_t in_stack_ffffffffffffff78;
    int64_t in_stack_ffffffffffffff80;
    uint32_t uStack_68;
    uint8_t *puStack_60;
    uint8_t auStack_58 [16];
    uchar auStack_48 [16];
    
    arg3_00 = _cStack0000000000000028;
    uStackX_20 = arg4;
    iVar12 = arg2;
    fcn.0001c9c4(0,0,_cStack0000000000000028 + 6,in_stack_00000030,0,in_stack_ffffffffffffff60,
                 CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68),
                 CONCAT44(in_stack_ffffffffffffff74,in_stack_ffffffffffffff70),in_stack_ffffffffffffff78,
                 in_stack_ffffffffffffff80,arg2);
    if ((arg2 == 0) && ((arg3 == 0 || (arg2 = *(arg3 + 0x108), iVar12 = arg2, arg2 == 0)))) {
        arg2 = fcn.00011b34(arg1,arg3_00 + 0x18,arg3_00 + 8);
        if (arg3 != 0) {
            *(arg3 + 0x108) = arg2;
        }
        iVar12 = arg2;
        if (arg2 == 0) {
            return -0x7fffffffffffffef;
        }
    }
    *arg3_00 = *arg3_00 & 0xf;
    *arg3_00 = *arg3_00 | 0x60;
    arg3_00[1] = arg3_00[1] & 0xf;
    *arg3_00 = *arg3_00 & 0xf0;
    cVar16 = pe_dos_header;
    uVar13 = arg4;
    if (pe_dos_header == 0x6) {
        uVar15 = 0;
        iVar8 = fcn.00023488(uVar13,0,0);
        *(arg4 + 0x28) = iVar8;
        puVar19 = iVar8 + 0x10;
code_r0x00011e76:
        if (*puVar19 != 0) goto code_r0x00011ed1;
    }
    else {
        if (pe_dos_header == 0x11) {
            uVar15 = 0;
            iVar8 = fcn.00023488(uVar13,0,0);
            *(arg4 + 0x30) = iVar8;
            puVar19 = iVar8 + 6;
            goto code_r0x00011e76;
        }
        if (pe_dos_header != 0x3a) goto code_r0x00011ed1;
        cVar3 = fcn.0001d428(arg1,arg3_00 + 0x18);
        if (cVar3 != '\0') {
            return -0x7ffffffffffffffe;
        }
        uVar15 = 0;
        iVar8 = fcn.00023488(uVar13,0,0);
        puVar19 = iVar8 + 2;
        if (*(iVar8 + 2) != 0) {
            puVar19 = NULL;
        }
    }
    if (puVar19 != NULL) {
        uVar4 = fcn.00023e50(arg4);
        uVar5 = fcn.00023ec8(arg3_00 + 8,arg3_00 + 0x18,CONCAT71(uVar15 >> 8,cVar16),*(arg4 + 0x84));
        uVar13 = uVar5 + uVar4;
        if ((uVar13 & 0xffff0000) != 0) {
            uVar13 = (uVar13 & 0xffff) + 1;
        }
        *puVar19 = ~uVar13;
    }
code_r0x00011ed1:
    cVar16 = pe_dos_header;
    if (*0x25e01 != '\0') {
        iVar8 = fcn.0001b03c(arg1,&stack0x00000028,0,&uStackX_20);
        if (iVar8 < 0) {
            return iVar8;
        }
        arg4 = uStackX_20;
        arg3_00 = _cStack0000000000000028;
    }
    puVar11 = arg3_00 + 6;
    cVar3 = fcn.0001c9c4(arg1,arg4,puVar11,in_stack_00000030,0,in_stack_ffffffffffffff60,
                         CONCAT44(in_stack_ffffffffffffff6c,in_stack_ffffffffffffff68),
                         CONCAT44(in_stack_ffffffffffffff74,in_stack_ffffffffffffff70),in_stack_ffffffffffffff78,
                         in_stack_ffffffffffffff80,iVar12);
    cVar21 = in_stack_ffffffffffffff78;
    if ((cVar3 == '\0') || ((in_stack_ffffffffffffff6c & 7) != 0)) {
        return -0x7ffffffffffffffe;
    }
    arg2_02 = arg3_00 + 0x18;
    uVar13 = in_stack_ffffffffffffff6c;
    cVar20 = pe_dos_header;
    if ((*arg2_02 == -1) || (iVar8 = fcn.000149f4(arg1,arg2_02), iVar8 != 0)) {
        if (&stack0xffffffffffffff78 != arg2_02) {
            puVar11 = NULL;
            fcn.000102a0(&stack0xffffffffffffff78,arg2_02,0x10);
        }
    }
    else {
        puVar11 = arg3_00 + 8;
        iVar8 = fcn.00012cb0(arg1,arg2_02,puVar11);
        if (iVar8 == 0) {
            return -0x7ffffffffffffff2;
        }
        if (&stack0xffffffffffffff78 != iVar8 + 0x40) {
            puVar11 = NULL;
            fcn.000102a0(&stack0xffffffffffffff78,iVar8 + 0x40,0x10);
        }
        piVar1 = iVar8 + 0x10;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            (**(*0x25e20 + 0x48))(iVar8);
        }
    }
    if ((cVar21 != -1) && (arg2_02 != arg3_00 + 8)) {
        puVar11 = NULL;
        iVar8 = fcn.000102e0(arg2_02,arg3_00 + 8,0x10);
        if (iVar8 != 0) {
            arg2_01 = &stack0xffffffffffffff78;
            iVar8 = fcn.000149f4(arg1,arg2_01);
            if (iVar8 == 0) {
                cVar16 = cVar20;
                iVar8 = fcn.00014900(arg1,arg2_01,&stack0xffffffffffffff78,0);
                if (iVar8 == 0) {
                    return -0x7ffffffffffffff7;
                }
                iVar10 = iVar8 + 0x2b;
                fcn.0001c554(iVar10,auStack_58);
                iVar9 = fcn.00011930(arg1,iVar10,auStack_48);
                if (iVar9 < 0) {
                    return iVar9;
                }
                puVar11 = auStack_58;
                iVar10 = fcn.0001538c(arg1,auStack_48,puVar11,iVar10);
                if (iVar10 < 0) {
                    return iVar10;
                }
                *(iVar8 + 0x60) = *(iVar8 + 0x60) + -1;
                *(iVar8 + 100) = (*(arg1 + 0x8b4) + 99U) / 100 + 1;
            }
            *(iVar8 + 0x78) = arg2;
        }
    }
    puStack_60 = NULL;
    uVar2 = 0;
    _cStack0000000000000028 = _cStack0000000000000028 & 0xffffffffffffff00;
    iVar8 = fcn.0001262c(*(arg1 + 0x50),arg2_02);
    if (iVar8 != 0) {
        if ((*(iVar8 + 0x18) & 0x10) != 0) {
            iVar10 = fcn.0001cd98(arg1,CONCAT71(arg2_02 >> 8,arg3_00[6]),CONCAT71(puVar11 >> 8,cVar16),
                                  in_stack_00000030);
            if (iVar10 < 0) {
                return iVar10;
            }
            if ((in_stack_00000030 == NULL) && (in_stack_00000038 == 0)) {
                uVar2 = arg3_00[6];
                arg3_00[6] = 0x2c;
            }
            puStack_60 = in_stack_00000030;
            uVar13 = in_stack_ffffffffffffff6c + 8;
            in_stack_00000038 = in_stack_00000038 + 8;
            in_stack_00000030 = NULL;
            *0x25ea0 = *0x25ea0 + 1;
            _cStack0000000000000028 = CONCAT71(Stack0000000000000029,1);
        }
        piVar1 = iVar8 + 0x10;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
            (**(*0x25e20 + 0x48))(iVar8);
        }
    }
    uVar17 = *(arg1 + 0x1058) + 0x28;
    if (uVar17 < *(arg4 + 0x84) + uVar13 + 0x28) {
        if (cStack0000000000000028 != '\0') {
            in_stack_00000038 = in_stack_00000038 - 8;
            in_stack_00000030 = puStack_60;
            if ((puStack_60 == NULL) && (in_stack_00000038 == 0)) {
                arg3_00[6] = uVar2;
            }
        }
        uVar13 = in_stack_00000038 - uStack_68;
        if ((*(arg4 + 0x84) + uVar13 & 0xffff0000) == 0) {
            if (uVar13 != 0) {
                _cStack0000000000000028 = fcn.000234ec(arg4,0,*(arg4 + 0x84),uVar13);
                puVar11 = fcn.00023aac(_cStack0000000000000028,uVar13,1);
                if ((uVar13 != 0) && (puVar11 != in_stack_00000030 + uStack_68)) {
                    fcn.000102a0(puVar11,in_stack_00000030 + uStack_68,uVar13);
                }
                fcn.000233c8(arg4);
                arg4 = _cStack0000000000000028;
            }
            uVar14 = 0;
            uVar13 = uStack_68 + 0x30;
            uVar18 = uVar17 - uVar13 & 0xfffffff8;
            uVar6 = (*(arg4 + 0x84) + -1 + uVar18) / uVar18;
            arg2_00 = 0;
            _cStack0000000000000028 = _cStack0000000000000028 & 0xffffffff00000000;
            uVar17 = uVar18;
            if (uVar6 != 0) {
                do {
                    iVar8 = fcn.000234ec(arg4,arg2_00,uVar17,uVar13);
                    if (iVar8 == 0) {
                        iVar8 = -0x7ffffffffffffff7;
                        goto code_r0x000123f1;
                    }
                    uVar4 = _cStack0000000000000028 | 1;
                    if (uVar14 == uVar6 - 1) {
                        uVar4 = _cStack0000000000000028 & 0xfffe;
                    }
                    fcn.00011be8(arg1,iVar8,arg3_00,uVar4);
                    iVar8 = fcn.00019990(iVar12,arg3,iVar8,&stack0xffffffffffffff78);
                    if (iVar8 < 0) goto code_r0x000123f1;
                    if ((uVar14 == uVar6 - 1) && (in_stack_00000048 != 0)) {
                        *(*(in_stack_00000048 + 8) + 8) = iVar8;
                    }
                    uVar7 = _cStack0000000000000028 + uVar17;
                    arg2_00 = uVar7;
                    uVar17 = *(arg4 + 0x84) - uVar7;
                    _cStack0000000000000028 = CONCAT44(Stack0000000000000029._3_4_,uVar7);
                    if (uVar18 < uVar17) {
                        uVar17 = uVar18;
                    }
                    uVar14 = uVar14 + 1;
                } while (uVar14 < uVar6);
            }
            fcn.000233c8(arg4);
            *0x25ea0 = *0x25ea0 + 1;
            return 0;
        }
    }
    else {
        puVar11 = fcn.00023aac(arg4,uVar13 + 0x28,1);
        if (puVar11 != NULL) {
            if (puVar11 != arg3_00) {
                fcn.000102a0(puVar11,arg3_00,0x28);
            }
            *(arg4 + 0x20) = puVar11;
            if (in_stack_00000030 != NULL) {
                if ((in_stack_00000038 != 0) && (puVar11 + 0x28 != in_stack_00000030)) {
                    fcn.000102a0(puVar11 + 0x28,in_stack_00000030,in_stack_00000038);
                }
            }
            iVar12 = fcn.00019990(arg2,arg3,arg4,&stack0xffffffffffffff78);
            return iVar12;
        }
    }
    iVar8 = -0x7ffffffffffffffc;
code_r0x000123f1:
    fcn.000124d8(iVar12,iVar8,0x124c4,arg4);
    return iVar8;
}


/* fcn.0001bdc0 @ 0x1bdc0 */

ulong fcn.0001bdc0(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong *puVar3;
    int64_t *piVar4;
    int64_t *arg1_00;
    int64_t arg1_01;
    ulong uVar5;
    int64_t *in_RDX;
    int64_t *arg1_02;
    int64_t iVar6;
    
    piVar1 = arg1 + 0xd0;
    do {
        if ((*piVar1 == piVar1) || (*(arg1 + 0xa0) == 0)) {
            return 0;
        }
        piVar2 = *piVar1;
        arg1_02 = piVar2 + -2;
        if ((piVar2[-1] < 2) && (*(piVar2[0xd] + 8) < 2)) {
            piVar4 = fcn.0001bae8(arg1,arg1_02);
            if (piVar4 == NULL) {
                return 0x8000000000000009;
            }
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            arg1_00 = arg1_02;
        }
        else {
            uVar5 = 0;
            arg1_00 = fcn.000233f4(arg1_02,in_RDX,0x28);
            if (arg1_00 == NULL) {
                return 0x8000000000000009;
            }
            iVar6 = CONCAT71(uVar5 >> 8,1);
            arg1_01 = fcn.00023aac(arg1_00,0x28,iVar6);
            arg1_00[4] = arg1_01;
            if (arg1_01 != piVar2[2]) {
                iVar6 = 0;
                fcn.000102a0(arg1_01,piVar2[2],0x28);
            }
            fcn.00023bec(arg1_00,0x28,CONCAT71(iVar6 >> 8,1));
            piVar4 = fcn.0001bae8(arg1,arg1_00);
            if (piVar4 == NULL) {
                fcn.000233c8(arg1_00);
                return 0x8000000000000009;
            }
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            fcn.000233c8(arg1_02);
        }
        if (*(arg1 + 0x100) != 2) {
            uVar5 = (**(*0x25e20 + 0x18))(*(arg1 + 0xf0));
            *(arg1 + 0xf8) = uVar5;
            *(arg1 + 0x100) = 2;
        }
        piVar2 = arg1 + 0xe0;
        iVar6 = *piVar2;
        *piVar4 = iVar6;
        piVar4[1] = piVar2;
        *(iVar6 + 8) = piVar4;
        iVar6 = *0x25e20;
        *piVar2 = piVar4;
        *(arg1 + 0x100) = 1;
        (**(iVar6 + 0x20))(*(arg1 + 0xf8));
        in_RDX = *(arg1 + 0x80);
        *(*in_RDX + 8) = in_RDX[1];
        *in_RDX[1] = *in_RDX;
        piVar2 = arg1 + 0x90;
        *(arg1 + 0xa0) = *(arg1 + 0xa0) + -1;
        iVar6 = *piVar2;
        *in_RDX = iVar6;
        in_RDX[1] = piVar2;
        *(iVar6 + 8) = in_RDX;
        *piVar2 = in_RDX;
        puVar3 = in_RDX[2];
        puVar3[1] = arg1_00[10];
        puVar3[2] = piVar4 + 4;
        (**(*0x25e20 + 0x68))(*puVar3);
    } while( true );
}


/* fcn.00014654 @ 0x14654 */

ulong * fcn.00014654(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    ulong *puVar2;
    ulong *puVar3;
    char cVar4;
    unkbyte7 Var5;
    uint in_R9;
    
    cVar4 = arg3;
    Var5 = arg3 >> 8;
    puVar3 = arg1 + 0x8d8 + (-(arg2 != '\0') & 0xfffffffffffffff0);
    puVar2 = *puVar3;
    do {
        if (puVar2 == puVar3) {
            return NULL;
        }
        if (cVar4 == -1) {
            cVar1 = *(puVar2 + 4);
code_r0x0001469e:
            cVar1 = fcn.000229d0(puVar2 + 0x21,CONCAT44(in_R9,arg4),CONCAT71(Var5,cVar1));
            if (cVar1 != '\0') {
                return puVar2;
            }
        }
        else if (*(puVar2 + 4) == cVar4) {
            cVar1 = cVar4;
            goto code_r0x0001469e;
        }
        puVar2 = *puVar2;
    } while( true );
}


/* fcn.00014588 @ 0x14588 */

void fcn.00014588(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong *puVar2;
    
    if (((arg4 != '\0') || (*(arg2 + 0x10) < 1)) || (iVar1 = *(arg2 + 0x10) + -1, *(arg2 + 0x10) = iVar1, iVar1 < 1))
    {
        if (arg3 == '\0') {
            for (puVar2 = *(arg1 + 0x38); puVar2 != arg1 + 0x38; puVar2 = *puVar2) {
                fcn.0001c5f0(arg1,puVar2 + 3,puVar2 + 5,arg2 + 0x21);
            }
        }
        else {
            do {
                arg3 = CONCAT71(arg3 >> 8,*(arg2 + 0x20));
                iVar1 = fcn.00012b3c(*(arg1 + 0x50),arg2 + 0x21,arg3,0);
            } while (iVar1 != -0x7ffffffffffffff2);
        }
        *(*arg2 + 8) = *(arg2 + 8);
        **(arg2 + 8) = *arg2;
        (**(*0x25e20 + 0x48))(arg2);
    }
    return;
}


/* fcn.00014d68 @ 0x14d68 */

ulong * fcn.00014d68(int64_t arg1,uint32_t *arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    
    puVar2 = *(arg1 + 0x8e8);
    while( true ) {
        if (puVar2 == arg1 + 0x8e8) {
            return NULL;
        }
        if ((arg2 == puVar2 + 0x1a) || (iVar1 = fcn.000102e0(arg2,puVar2 + 0x1a,0x10), iVar1 == 0)) break;
        puVar2 = *puVar2;
    }
    return puVar2;
}


/* fcn.0001d54c @ 0x1d54c */

ulong fcn.0001d54c(int64_t arg1,int64_t arg2,ulong noname_2,uint32_t arg3)

{
    char cVar1;
    int64_t arg4;
    char *pcVar2;
    int64_t arg1_00;
    ulong uVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint32_t uVar8;
    uint in_R9;
    char in_stack_00000028;
    char in_stack_00000030;
    uint *in_stack_00000038;
    uchar auStack_48 [4];
    uint16_t uStack_44;
    uchar uStack_42;
    uchar uStack_41;
    uchar auStack_40 [16];
    char acStack_30 [24];
    
    pcVar2 = CONCAT44(in_R9,arg3);
    if (pcVar2 != NULL) {
        uVar5 = 0;
        do {
            if (pcVar2[uVar5] != '\0') {
                if (*pcVar2 == -1) {
                    return 0x8000000000000002;
                }
                cVar1 = fcn.0001d428(arg1,pcVar2);
                if (cVar1 != '\0') {
                    return 0x8000000000000002;
                }
                if ((in_stack_00000028 != '\x01') && (in_stack_00000028 != '\x03')) {
                    if (in_stack_00000028 != '\x04') {
                        return 0x8000000000000002;
                    }
                    if (in_stack_00000038 == NULL) {
                        return 0x8000000000000002;
                    }
                }
                uVar8 = *(arg2 + 0x84) + 0x30;
                if (*(arg1 + 0x1058) < uVar8) {
                    uVar8 = *(arg1 + 0x1058);
                }
                arg4 = fcn.000232c4(uVar8);
                if (arg4 != 0) {
                    uVar7 = uVar8 - 0x28;
                    fcn.00010280(auStack_48,0x28);
                    uStack_42 = 0x3a;
                    uStack_44 = uVar7 * 0x100 | uVar7 >> 8;
                    uStack_41 = *(arg1 + 0x8a4);
                    fcn.00010280(auStack_40,0x10);
                    if (acStack_30 != pcVar2) {
                        fcn.000102a0(acStack_30,arg3,0x10);
                    }
                    *(arg4 + 0x98) = *(arg4 + 0x98) + 0x28;
                    *(arg4 + 0xa0) = *(arg4 + 0xa0) + 0x28;
                    pcVar2 = fcn.00023aac(arg4,8,0);
                    if (pcVar2 != NULL) {
                        fcn.00010280(pcVar2,8);
                        pcVar2[1] = in_stack_00000030;
                        *pcVar2 = in_stack_00000028;
                        if (in_stack_00000038 != NULL) {
                            uVar7 = *in_stack_00000038 >> 0x10;
                            uVar6 = *in_stack_00000038;
                            *(pcVar2 + 4) = CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar7 << 8 | uVar7 >> 8);
                        }
                        uVar7 = uVar8 - 0x30;
                        arg1_00 = fcn.00023aac(arg4,uVar7,0);
                        if (arg1_00 != 0) {
                            if (uVar7 != 0) {
                                fcn.00010280(arg1_00,uVar7);
                            }
                            if (uVar7 != 0) {
                                fcn.00023ca8(arg2,0,uVar7,arg1_00);
                            }
                        }
                        uVar3 = fcn.00011d14(arg1,0,0,arg4);
                        return uVar3;
                    }
                    fcn.000233c8(arg4);
                }
                return 0x8000000000000009;
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < 0x10);
    }
    return 0x8000000000000002;
}


/* fcn.00014424 @ 0x14424 */

ulong * fcn.00014424(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    int *piVar1;
    ulong *puVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t *piVar6;
    uint in_R8;
    uint32_t arg4_00;
    uint8_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    if (((in_stack_00000030 != 0) && (arg4 <= arg3)) && (in_stack_00000028 < 0x81)) {
        arg4_00 = in_stack_00000030;
        puVar2 = fcn.00014654(arg1,arg2,CONCAT71(CONCAT44(in_R8,arg3) >> 8,in_stack_00000028),arg4_00);
        if (puVar2 != NULL) {
            puVar2[2] = puVar2[2] + 1;
            return puVar2;
        }
        iVar5 = 0;
        puVar2 = fcn.0001fa44();
        if (puVar2 != NULL) {
            puVar2[2] = 1;
            *(puVar2 + 3) = arg3;
            *(puVar2 + 0x1c) = arg4;
            *(puVar2 + 4) = in_stack_00000028;
            if (puVar2 + 0x21 != in_stack_00000030) {
                fcn.000102a0(puVar2 + 0x21,arg4_00,0x10);
                iVar5 = in_stack_00000030;
            }
            piVar6 = (-(arg2 != '\0') & 0xfffffffffffffff0) + 0x8d8 + arg1;
            if (arg2 != '\0') {
                piVar3 = fcn.0001259c(arg4_00,CONCAT71(iVar5 >> 8,in_stack_00000028),0);
                if (piVar3 == NULL) {
                    (**(*0x25e20 + 0x48))(puVar2);
                    return NULL;
                }
                *(piVar3 + 3) = 1;
                piVar4 = (in_stack_00000028 + 1) * 0x10 + *(arg1 + 0x50);
                iVar5 = *piVar4;
                *piVar3 = iVar5;
                piVar3[1] = piVar4;
                *(iVar5 + 8) = piVar3;
                *piVar4 = piVar3;
                piVar1 = *(arg1 + 0x50) + 8;
                *piVar1 = *piVar1 + 1;
            }
            piVar3 = *piVar6;
            if (piVar3 != piVar6) {
                do {
                    if (*(piVar3 + 4) < *(puVar2 + 4)) break;
                    piVar3 = *piVar3;
                } while (piVar3 != piVar6);
            }
            *puVar2 = piVar3;
            puVar2[1] = piVar3[1];
            *piVar3[1] = puVar2;
            piVar3[1] = puVar2;
            return puVar2;
        }
    }
    return NULL;
}


/* fcn.000232c4 @ 0x232c4 */

int64_t fcn.000232c4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.00023220(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001fa44();
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
        (**(*0x25e20 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.00023ca8 @ 0x23ca8 */

uint32_t fcn.00023ca8(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int *piVar2;
    int64_t iVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    
    if (arg2 < *(arg1 + 0x84)) {
        uVar1 = *(arg1 + 0x84) - arg2;
        uVar6 = arg3;
        if (uVar1 < arg3) {
            uVar6 = uVar1;
        }
        uVar1 = 0;
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if (*piVar2 != 0) {
                    uVar4 = *piVar2 + uVar1;
                    if (arg2 < uVar4) break;
                    uVar1 = uVar4;
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
                piVar2 = piVar2 + 10;
            } while (uVar4 < *(arg1 + 0x80));
        }
        uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28) - (arg2 - uVar1);
        iVar3 = (arg2 - uVar1) + *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar4 < uVar6) {
            if ((uVar4 != 0) && (arg4 != iVar3)) {
                fcn.000102a0(arg4,iVar3,uVar4);
            }
            arg4 = arg4 + uVar4;
            uVar6 = uVar6 - uVar4;
            while (uVar1 = uVar5 + 1, uVar5 = uVar1, uVar1 < *(arg1 + 0x80)) {
                uVar1 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (uVar6 <= uVar1) {
                    uVar4 = uVar4 + uVar6;
                    iVar3 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((uVar6 != 0) && (arg4 != iVar3)) {
                        fcn.000102a0(arg4,iVar3,uVar6);
                    }
                    break;
                }
                iVar3 = *(arg1 + 0x98 + uVar5 * 0x28);
                uVar6 = uVar6 - uVar1;
                uVar4 = uVar4 + uVar1;
                if ((uVar1 != 0) && (arg4 != iVar3)) {
                    fcn.000102a0(arg4,iVar3,uVar1);
                }
                arg4 = arg4 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((uVar6 != 0) && (arg4 != iVar3)) {
                fcn.000102a0(arg4,iVar3,uVar6);
            }
            uVar4 = uVar6;
        }
    }
    else {
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.0001c940 @ 0x1c940 */

ulong fcn.0001c940(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int16_t iVar2;
    int iVar3;
    uint64_t uVar4;
    bool bVar5;
    
    uVar4 = 0;
    if (arg1 == 0) {
code_r0x0001c953:
        uVar1 = 0;
    }
    else {
        if (1 < (arg2 & 0xffffU)) {
            do {
                iVar3 = *(uVar4 + 1 + arg1) * 8;
                iVar2 = iVar3;
                if (*(uVar4 + arg1) == '\x03') {
                    bVar5 = iVar2 == 0x20;
code_r0x0001c98e:
                    if (!bVar5) goto code_r0x0001c953;
                }
                else {
                    if (*(uVar4 + arg1) == '\x05') {
                        bVar5 = iVar2 == 8;
                        goto code_r0x0001c98e;
                    }
                    if (iVar2 == 0) goto code_r0x0001c953;
                }
                if ((*(uVar4 + arg1) - 1U < 5) && (arg2 < iVar3 + uVar4)) goto code_r0x0001c953;
                uVar4 = uVar4 + iVar3;
            } while (uVar4 + 1 < (arg2 & 0xffffU));
        }
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00015048 @ 0x15048 */

ulong * fcn.00015048(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar2 = *(arg1 + 0x38);
    do {
        if (puVar2 == arg1 + 0x38) {
            return NULL;
        }
        for (puVar3 = puVar2[0xe]; puVar3 != puVar2 + 0xe; puVar3 = *puVar3) {
            if ((puVar3[4] + 0x18 == arg2) || (iVar1 = fcn.000102e0(puVar3[4] + 0x18,arg2,0x10), iVar1 == 0)) {
                if (arg3 != 0) {
                    *arg3 = puVar2 + -1;
                }
                return puVar3 + -1;
            }
        }
        puVar2 = *puVar2;
    } while( true );
}


/* fcn.00014dc4 @ 0x14dc4 */

void fcn.00014dc4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t arg1_00;
    int64_t iVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint uStack_48;
    ushort uStack_44;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    uchar auStack_28 [16];
    
    arg1_00 = *(arg2 + 0x38);
    iVar3 = *(arg3 + 0x28);
    if (arg1 == '\0') {
        fcn.0001a5d0(arg1_00,arg3 + 0x30);
    }
    else {
        iVar5 = iVar3 + 0x18;
        iVar6 = arg2;
        cVar4 = fcn.000229a8(iVar5);
        if (cVar4 == '\0') {
            piVar1 = iVar3 + 8;
            piVar2 = arg2 + 0x20;
            iVar5 = *piVar2;
            *(iVar3 + 0x10) = piVar2;
            *piVar1 = iVar5;
            *(iVar5 + 8) = piVar1;
            *piVar2 = piVar1;
            *(arg2 + 0x30) = *(arg2 + 0x30) + 1;
            fcn.00014424(arg1_00,CONCAT71(piVar1 >> 8,1),*(iVar3 + 0x2c),*(iVar3 + 0x30));
            *(arg2 + 0x34) = 1;
        }
        else {
            if (arg1_00 + 0x890 != iVar5) {
                fcn.000102a0(arg1_00 + 0x890,iVar5,0x10);
                iVar6 = iVar5;
            }
            *(arg1_00 + 0x8a0) = 1;
            *(arg2 + 0x34) = 1;
            iVar5 = *(arg1_00 + 0xf90);
            if (*(arg1_00 + 0x8a2) != '\0') {
                (**(iVar5 + 0x10))(iVar5);
                *(arg1_00 + 0x8a2) = 0;
            }
            if (*(arg1_00 + 0x8a3) != '\0') {
                uStack_2c = 0;
                uStack_48 = 0x2000600;
                uStack_44 = 0x1700;
                uStack_38 = 4;
                iVar6 = CONCAT71(iVar6 >> 8,1);
                uStack_34 = 0x40;
                uStack_30 = 0x3c;
                (**(iVar5 + 0x18))(iVar5,iVar6,&uStack_48,0,0,&uStack_38,*(arg1_00 + 4000),0x18bb4,
                                   arg1_00 + 0xbe8);
            }
            fcn.00014424(arg1_00,CONCAT71(iVar6 >> 8,1),0xffffffff,0xffffffff);
        }
    }
    if (*(arg3 + 0x40) != NULL) {
        (**(arg3 + 0x40))(arg1 & 0xff,iVar3 + 0x18,*(arg3 + 0x48));
    }
    cVar4 = fcn.000229a8(iVar3 + 0x18);
    if (arg1 == '\0') {
        if (cVar4 != '\0') {
            (**(*0x25e20 + 0x48))(iVar3);
            *(*(arg3 + 8) + 8) = *(arg3 + 0x10);
            **(arg3 + 0x10) = *(arg3 + 8);
            (**(*0x25e20 + 0x48))();
            fcn.0001c370(0,auStack_28);
            fcn.0001a5d0(arg1_00,auStack_28);
            *(arg1_00 + 0x8a1) = 1;
            (**(*(arg1_00 + 0x928) + 8))(*(arg1_00 + 0x928),0);
            (**(*0x25e20 + 0x58))(*(arg1_00 + 0xbd8),0,0);
            (**(*0x25e20 + 0x58))(*(arg1_00 + 0xbe0),0,0);
            return;
        }
    }
    else if (cVar4 == '\0') goto code_r0x00015005;
    (**(*0x25e20 + 0x48))(iVar3);
code_r0x00015005:
    *(*(arg3 + 8) + 8) = *(arg3 + 0x10);
    **(arg3 + 0x10) = *(arg3 + 8);
    (**(*0x25e20 + 0x48))(arg3);
    return;
}


/* fcn.000151f4 @ 0x151f4 */

ulong fcn.000151f4(int64_t arg1,uint32_t *arg2,int64_t arg3,uint32_t *arg4)

{
    int64_t arg4_00;
    ulong uVar1;
    ushort *puVar2;
    uint32_t *arg1_00;
    uint32_t arg1_01;
    ushort *in_stack_00000028;
    char in_stack_00000040;
    uint32_t auStack_40 [4];
    uchar auStack_30 [24];
    
    arg4_00 = fcn.000232c4(0x48);
    if (arg4_00 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        if (auStack_40 != arg2) {
            fcn.000102a0(auStack_40,arg2,0x10);
        }
        if (auStack_30 != arg3) {
            fcn.000102a0(auStack_30,arg3,0x10);
        }
        *(arg4_00 + 0x98) = *(arg4_00 + 0x98) + 0x28;
        *(arg4_00 + 0xa0) = *(arg4_00 + 0xa0) + 0x28;
        arg1_01 = arg4_00;
        puVar2 = fcn.00023aac(arg1_01,8,0);
        fcn.00010280(puVar2,8);
        *puVar2 = 0x88;
        if (in_stack_00000040 != '\0') {
            *(puVar2 + 2) = *(puVar2 + 2) | 0x40;
        }
        *(puVar2 + 2) = *(puVar2 + 2) | 0x20;
        arg1_00 = fcn.00023aac(arg1_01,0x10,0);
        if (arg1_00 != arg4) {
            fcn.000102a0(arg1_00,arg4,0x10);
        }
        puVar2 = fcn.00023aac(arg1_01,8,0);
        *puVar2 = 0x102;
        if (puVar2 + 1 != in_stack_00000028) {
            fcn.000102a0(puVar2 + 1,in_stack_00000028,6);
        }
        uVar1 = fcn.00011d14(arg1,0,0,arg4_00);
    }
    return uVar1;
}


/* fcn.00014c20 @ 0x14c20 */

int64_t * fcn.00014c20(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    ulong *puVar2;
    int64_t *piVar3;
    int64_t iVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    
    piVar3 = fcn.0001fa44(arg1,0x38);
    if (piVar3 != NULL) {
        piVar3[2] = 1;
        *(piVar3 + 3) = arg3;
        iVar4 = fcn.000149f4(arg1,arg2);
        piVar3[6] = iVar4;
        if (piVar3 + 0x1a != arg2) {
            fcn.000102a0(piVar3 + 0x1a,arg2,0x10);
        }
        piVar5 = fcn.0001259c(0,0,arg2);
        if (piVar5 != NULL) {
            piVar6 = *(arg1 + 0x50) + 0x10;
            iVar4 = *piVar6;
            *piVar5 = iVar4;
            piVar5[1] = piVar6;
            *(iVar4 + 8) = piVar5;
            *piVar6 = piVar5;
            piVar1 = *(arg1 + 0x50) + 8;
            *piVar1 = *piVar1 + 1;
            *piVar3 = arg1 + 0x8e8;
            puVar2 = *(arg1 + 0x8f0);
            piVar3[1] = puVar2;
            *puVar2 = piVar3;
            *(arg1 + 0x8f0) = piVar3;
            return piVar3;
        }
        (**(*0x25e20 + 0x48))(piVar3);
    }
    return NULL;
}


/* fcn.00017150 @ 0x17150 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_27h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.00017150(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int64_t var_fh;
    int32_t var_17h;
    int64_t var_1fh;
    int16_t var_27h;
    int32_t var_2bh;
    int64_t var_2fh;
    int16_t var_37h;
    int64_t var_3fh;
    int64_t var_67h;
    int64_t var_77h;
    ulong in_stack_ffffffffffffff60;
    uint uVar5;
    uint uStack_78;
    ushort uStack_74;
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    ulong uStack_58;
    ulong uStack_50;
    uint uStack_48;
    int64_t iStack_40;
    ushort uStack_38;
    uint uStack_34;
    ulong uStack_30;
    ushort uStack_28;
    int32_t var_19h;
    int16_t var_15h;
    int32_t var_9h;
    int32_t var_5h;
    int32_t var_1h;
    int32_t var_3h;
    
    iVar2 = *0x25e20;
    piVar1 = arg1 + 0x3a0;
    if (*piVar1 != 0) {
        return 0;
    }
    *(arg1 + 0x3b0) = arg2;
    uVar3 = CONCAT44(in_stack_ffffffffffffff60 >> 0x20,2);
    iVar2 = (**(iVar2 + 0x118))(*(arg1 + -0x2d0),0x240d0,&var_fh + 1,*(arg1 + -0x2d8),*(arg1 + -0x2d0),uVar3);
    uVar5 = uVar3 >> 0x20;
    if (-1 < iVar2) {
        iVar2 = (**stack0x00000008)(stack0x00000008,piVar1);
    }
    if (iVar2 == -0x7ffffffffffffffd) {
        if (*(arg1 + 0x390) != 0) {
            return -0x7ffffffffffffffd;
        }
        uVar3 = fcn.00020d9c(0x240d0,arg1 + 0x398);
        *(arg1 + 0x390) = uVar3;
    }
    if (iVar2 < 0) {
        return iVar2;
    }
    if (*(arg1 + 0x390) != 0) {
        (**(*0x25e20 + 0x70))();
    }
    (**(*0x25e20 + 0x118))(*piVar1,0x24110,arg1 + 0x3a8,*(arg1 + -0x2d8),*(arg1 + -0x2d0),CONCAT44(uVar5,0x10));
    iVar2 = *(arg1 + 0x3a8);
    (**(iVar2 + 8))(iVar2,0);
    uStack_78 = 0x2000600;
    uStack_74 = 0x1700;
    unique0x00008f00 = &uStack_78;
    if (arg2 != '\0') {
        uStack_5c = 0;
        uStack_68 = 4;
        uStack_64 = 0x40;
        uStack_60 = 0x3c;
        if (*(arg1 + -0x348) == '\0') {
            *(arg1 + -0x345) = 1;
            return 0;
        }
        iVar2 = (**(iVar2 + 0x18))(iVar2,1,&uStack_78,0,0,&uStack_68,*(arg1 + 0x3b8),0x18bb4,arg1);
        return iVar2;
    }
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_28 = 0;
    iStack_40 = &var_1fh + 1;
    stack0xffffffffffffffe0 = 0;
    uStack_38 = 3;
    uStack_34 = *(arg1 + 0x3b4);
    uStack_30 = *(arg1 + 0x3b8);
    uStack_48 = 1;
    iVar4 = (**(iVar2 + 8))(iVar2,&uStack_58);
    if (iVar4 < 0) {
        return iVar4;
    }
    if (*(arg1 + -0x348) == '\0') {
        *(arg1 + -0x346) = 1;
        return iVar4;
    }
    iVar2 = (**(iVar2 + 0x10))(iVar2);
    return iVar2;
}


/* fcn.0001940c @ 0x1940c */

ulong fcn.0001940c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *arg1_00;
    uint64_t uVar1;
    uchar auVar2 [16];
    char cVar3;
    int iVar4;
    uint *puVar5;
    ulong uVar6;
    int64_t *piVar7;
    int64_t iVar8;
    ulong *puVar9;
    uint64_t uVar10;
    int64_t arg3_00;
    int64_t iStackX_8;
    uint in_stack_00000028;
    uint in_stack_00000030;
    code *in_stack_00000038;
    int64_t in_stack_00000040;
    
    iVar8 = *(arg1 + 0x38);
    arg3_00 = 0;
    cVar3 = fcn.0001c74c(iVar8,arg2,0,&iStackX_8);
    if (cVar3 == '\0') {
        puVar5 = fcn.0001fa44();
        if (puVar5 != NULL) {
            arg1_00 = puVar5 + 6;
            *puVar5 = 0x49415049;
            if (arg1_00 != arg2) {
                arg3_00 = 0;
                fcn.000102a0(arg1_00,arg2,0x10);
            }
            *(puVar5 + 10) = arg3;
            *(puVar5 + 0x29) = arg4;
            puVar5[0xb] = in_stack_00000028;
            puVar5[0xc] = in_stack_00000030;
            if (*(puVar5 + 0x29) == '\0') {
                for (puVar9 = *(iVar8 + 0x8c8); puVar9 != iVar8 + 0x8c8; puVar9 = *puVar9) {
                    arg3_00 = CONCAT71(arg3_00 >> 8,*(puVar9 + 4));
                    cVar3 = fcn.000229d0(puVar9 + 0x21,arg1_00,arg3_00);
                    if (cVar3 != '\0') {
                        *(puVar5 + 0x29) = *(puVar9 + 4);
                        break;
                    }
                }
                if (*(puVar5 + 0x29) == '\0') {
                    for (puVar9 = *(iVar8 + 0x8d8); puVar9 != iVar8 + 0x8d8; puVar9 = *puVar9) {
                        arg3_00 = CONCAT71(arg3_00 >> 8,*(puVar9 + 4));
                        cVar3 = fcn.000229d0(puVar9 + 0x21,arg1_00,arg3_00);
                        if (cVar3 != '\0') {
                            *(puVar5 + 0x29) = *(puVar9 + 4);
                            break;
                        }
                    }
                    if (*(puVar5 + 0x29) == '\0') {
                        *(puVar5 + 0x29) = 0x40;
                    }
                }
            }
            iVar4 = fcn.00022a6c();
            uVar1 = (iVar4 * 0x41c64e6d + 0x3039) % 0xffffffff;
            uVar10 = uVar1 * 1000 >> 0x20;
            piVar7 = fcn.0001fa44(uVar1,0x38);
            if (piVar7 != NULL) {
                piVar7[3] = arg1;
                piVar7[4] = puVar5;
                auVar2._8_8_ = 0;
                auVar2._0_8_ = uVar10;
                iVar8 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar2,8);
                piVar7[5] = in_stack_00000038;
                piVar7[6] = in_stack_00000040;
                *(piVar7 + 2) = (uVar10 - iVar8 >> 1) + iVar8 >> 6;
                *piVar7 = arg1 + 0x88;
                puVar9 = *(arg1 + 0x90);
                piVar7[1] = puVar9;
                *puVar9 = piVar7;
                *(arg1 + 0x90) = piVar7;
                goto code_r0x000195ea;
            }
            (**(*0x25e20 + 0x48))(puVar5);
        }
        uVar6 = 0x8000000000000009;
    }
    else {
        *(iStackX_8 + 0x2c) = in_stack_00000028;
        *(iStackX_8 + 0x30) = in_stack_00000030;
        if (in_stack_00000038 != NULL) {
            (*in_stack_00000038)(1,arg2,in_stack_00000040);
        }
code_r0x000195ea:
        uVar6 = 0;
    }
    return uVar6;
}


/* fcn.000150e0 @ 0x150e0 */

ulong fcn.000150e0(uint32_t arg1)

{
    int64_t arg4;
    ulong uVar1;
    ushort *arg1_00;
    uint in_register_0000000c;
    int64_t arg1_01;
    uchar *arg1_02;
    int64_t arg2;
    uchar auStack_30 [16];
    uchar auStack_20 [24];
    
    arg1_01 = CONCAT44(in_register_0000000c,arg1);
    arg2 = 0;
    if (*(arg1_01 + 0x48) != 0) {
        arg2 = *(arg1_01 + 0x48);
    }
    arg4 = fcn.000232c4(0x30);
    if (arg4 == 0) {
        uVar1 = 0x8000000000000009;
    }
    else {
        arg1_02 = auStack_30;
        fcn.00010280(arg1_02,0x10);
        fcn.0001c370(CONCAT71(arg1_02 >> 8,1),auStack_20);
        *(arg4 + 0x98) = *(arg4 + 0x98) + 0x28;
        *(arg4 + 0xa0) = *(arg4 + 0xa0) + 0x28;
        arg1_00 = fcn.00023aac(arg4,8,0);
        fcn.00010280(arg1_00,8);
        *arg1_00 = 0x85;
        uVar1 = fcn.00011d14(arg1_01,arg2,0,arg4);
    }
    return uVar1;
}


/* fcn.0001a4d0 @ 0x1a4d0 */

int64_t fcn.0001a4d0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    iVar1 = fcn.00019fa8(arg1,arg3);
    if (iVar1 == 0) {
        piVar2 = fcn.00019f20(arg1,arg3,10);
        if (piVar2 == NULL) {
            return -0x7ffffffffffffff7;
        }
        *(piVar2 + 0x2c) = 1;
        iVar1 = fcn.0001c834(*(arg1 + 0x928),arg3,piVar2 + 0x2d);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*(arg1 + 0x928) + 0x18))(*(arg1 + 0x928),1,piVar2 + 0x2d);
        if (((iVar1 < 0) && (iVar1 != -0x7fffffffffffffec)) || (iVar1 = fcn.0001a004(arg1,arg2,arg3), iVar1 < 0)) {
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            (**(*0x25e20 + 0x48))(piVar2);
            return iVar1;
        }
    }
    else {
        *(iVar1 + 0x10) = *(iVar1 + 0x10) + 1;
    }
    return 0;
}


/* fcn.00019fa8 @ 0x19fa8 */

ulong * fcn.00019fa8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puVar2;
    
    puVar2 = *(arg1 + 0x880);
    while( true ) {
        if (puVar2 == arg1 + 0x880) {
            return NULL;
        }
        if ((arg2 == puVar2 + 3) || (iVar1 = fcn.000102e0(arg2,puVar2 + 3,0x10), iVar1 == 0)) break;
        puVar2 = *puVar2;
    }
    return puVar2;
}


/* fcn.00019f20 @ 0x19f20 */

int64_t * fcn.00019f20(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t *piVar2;
    
    piVar2 = fcn.0001fa44(arg1,0x50);
    if (piVar2 != NULL) {
        piVar2[2] = 1;
        *(piVar2 + 5) = arg3;
        *(piVar2 + 0x2c) = 0;
        if (piVar2 + 3 != arg2) {
            fcn.000102a0(piVar2 + 3,arg2,0x10);
        }
        *piVar2 = arg1 + 0x880;
        puVar1 = *(arg1 + 0x888);
        piVar2[1] = puVar1;
        *puVar1 = piVar2;
        *(arg1 + 0x888) = piVar2;
    }
    return piVar2;
}


/* fcn.0001c834 @ 0x1c834 */

void fcn.0001c834(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint in_register_00000014;
    uchar auStack_18 [16];
    
    if (auStack_18 != CONCAT44(in_register_00000014,arg2)) {
        fcn.000102a0(auStack_18,arg2,0x10);
    }
    (**(arg1 + 0x10))(arg1,1,auStack_18,arg3);
    return;
}


/* fcn.0001a004 @ 0x1a004 */

//WARNING: Variable defined which should be unmapped: var_bp_18h

int64_t fcn.0001a004(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t arg4;
    int64_t iVar3;
    ushort *arg1_00;
    uint32_t uVar4;
    ulong uVar5;
    uchar auStack_50 [16];
    uchar auStack_40 [9];
    int8_t var_2fh;
    int32_t var_2eh;
    int16_t var_2ah;
    int64_t var_28h;
    int64_t var_bp_18h;
    
    arg4 = fcn.000232c4(0x48);
    if (arg4 == 0) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        if (auStack_40 != arg3) {
            fcn.000102a0(auStack_40,arg3,0x10);
        }
        if (auStack_50 != arg1 + 0x890) {
            fcn.000102a0(auStack_50,arg1 + 0x890,0x10);
        }
        *(arg4 + 0x98) = *(arg4 + 0x98) + 0x28;
        *(arg4 + 0xa0) = *(arg4 + 0xa0) + 0x28;
        iVar3 = fcn.00023aac(arg4,8,0);
        iVar3 = fcn.0001cd48(iVar3);
        if (iVar3 < 0) {
            fcn.000233c8(arg4);
        }
        else {
            uVar5 = 0;
            arg1_00 = fcn.00023aac(arg4,0x18,0);
            fcn.00010280(arg1_00,0x18);
            *arg1_00 = 0x83;
            if (arg1_00 + 4 != arg3) {
                uVar5 = 0;
                fcn.000102a0(arg1_00 + 4,arg3,0x10);
            }
            uVar1 = fcn.00023e0c(arg1_00,0x18);
            uVar2 = fcn.00023ec8(auStack_50,auStack_40,CONCAT71(uVar5 >> 8,0x3a),0x18);
            uVar4 = uVar2 + uVar1;
            if ((uVar4 & 0xffff0000) != 0) {
                uVar4 = (uVar4 & 0xffff) + 1;
            }
            arg1_00[1] = ~uVar4;
            iVar3 = fcn.00011d14(arg1,arg2,0,arg4);
        }
    }
    return iVar3;
}


/* fcn.00020e6c @ 0x20e6c */

ulong fcn.00020e6c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
                iVar5 = fcn.00020dfc(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00020f3f:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
code_r0x00020f34:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar5 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar5 = iVar5 + 1;
                                cVar1 = arg1_00[iVar5];
                            }
                            iVar3 = fcn.0001f344(arg1_00,arg1,iVar5);
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
                            goto code_r0x00020f34;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00020f3f;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.0002305c @ 0x2305c */

ulong fcn.0002305c(int64_t arg1,int64_t arg2)

{
    uint16_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t uVar5;
    ushort *noname_0;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    uint16_t auStack_78 [8];
    ushort auStack_68 [40];
    
    uVar6 = 0;
    if (arg2 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        fcn.00010280(auStack_78,0x10);
        uVar2 = uVar6;
        do {
            uVar8 = uVar2 + 1;
            puVar1 = auStack_78 + (uVar2 & 0xfffffffffffffffe);
            *puVar1 = *puVar1 | *(uVar2 + arg1) << ((uVar2 & 1) * -8 + 8 & 0x1f);
            uVar2 = uVar8;
        } while (uVar8 < 0x10);
        uVar8 = 0xffffffffffffffff;
        uVar7 = 0xffffffffffffffff;
        uVar2 = uVar6;
        uVar5 = uVar6;
        uVar9 = uVar6;
        do {
            if (auStack_78[uVar5] == 0) {
                if (uVar8 == 0xffffffffffffffff) {
                    uVar2 = 1;
                    uVar8 = uVar5;
                }
                else {
                    uVar2 = uVar2 + 1;
                }
            }
            else if (uVar8 != 0xffffffffffffffff) {
                if ((2 < uVar2) && ((uVar7 == 0xffffffffffffffff || (uVar9 < uVar2)))) {
                    uVar7 = uVar8;
                    uVar9 = uVar2;
                }
                uVar8 = 0xffffffffffffffff;
                uVar2 = uVar6;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < 8);
        if (((uVar8 != 0xffffffffffffffff) && (2 < uVar2)) && ((uVar7 == 0xffffffffffffffff || (uVar9 < uVar2)))) {
            uVar7 = uVar8;
            uVar9 = uVar2;
        }
        noname_0 = auStack_68;
        do {
            if (((uVar7 == 0xffffffffffffffff) || (uVar6 < uVar7)) || (uVar9 + uVar7 <= uVar6)) {
                if (uVar6 != 0) {
                    *noname_0 = 0x3a;
                    noname_0 = noname_0 + 1;
                }
                iVar3 = fcn.0001fb70(noname_0,10,0x25db4,auStack_78[uVar6]);
                noname_0 = noname_0 + iVar3;
            }
            else if (uVar6 == uVar7) {
                *noname_0 = 0x3a;
                noname_0 = noname_0 + 1;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 8);
        if ((uVar7 != 0xffffffffffffffff) && (uVar9 + uVar7 == 8)) {
            *noname_0 = 0x3a;
            noname_0 = noname_0 + 1;
        }
        *noname_0 = 0;
        if (noname_0 - auStack_68 < 0x51) {
            fcn.0001f3ac(arg2,0x28,auStack_68);
            uVar4 = 0;
        }
        else {
            uVar4 = 0x8000000000000005;
        }
    }
    return uVar4;
}


/* fcn.0001fb70 @ 0x1fb70 */

void fcn.0001fb70(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001fd64(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001fd64 @ 0x1fd64 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001fd64(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001fdc3;
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
code_r0x0001fdc3:
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
        uVar21 = fcn.0001fa20(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001f378(arg4,0xf4241);
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
            pcVar8 = 0x2593c;
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
code_r0x0002017e:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x2593c;
            }
            else {
                pcVar8 = 0x25940;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x0001ff15:
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
                    goto code_r0x000200b8;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x000200cf;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x000200b8;
                        }
                        goto code_r0x000200cf;
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
code_r0x000200b8:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x0001ff15;
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
                        goto code_r0x0001ff15;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x000200cf;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x000200b8;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x000200cf:
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
                        fcn.00020acc(&var_68h_2,0x26,0,0x258d0);
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
                            goto code_r0x0002017e;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x00020367;
                        if (uStack_a8 == 0x58) goto code_r0x0002045c;
                        if (uStack_a8 == 0x61) goto code_r0x00020370;
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
                            goto code_r0x0001fef6;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001fef2;
                        goto code_r0x00020473;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x2593c;
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
                goto code_r0x000206a0;
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
                            iVar12 = 0x259db;
                            goto code_r0x00020423;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x00020423:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x000206a0;
                    }
                    fcn.00020acc(&var_68h_2,0x26,0,0x25934);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x00020367:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x00020370:
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
                        goto code_r0x000206a0;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001fef2;
                            goto code_r0x00020460;
                        }
                        goto code_r0x00020465;
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
                        goto code_r0x000206a0;
                    }
                    fcn.00020acc(&var_68h_2,0x26,0,0x25918);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x000206a0;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x0002045c:
            uVar21 = uVar21 | 0x20;
code_r0x00020460:
            uVar21 = uVar21 | 0x80;
code_r0x00020465:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x00020473:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x000204b5;
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
code_r0x000204b5:
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
code_r0x0002053d:
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
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x0002053d;
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
code_r0x0001fef2:
            pcVar8 = &uStack_a8;
code_r0x0001fef6:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x000206a0:
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
                arg1 = fcn.0001fba0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001fba0(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
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
                arg1 = fcn.0001fba0(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
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
                arg1 = fcn.0001fba0(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
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


/* fcn.00020f70 @ 0x20f70 */

ulong fcn.00020f70(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint in_R8;
    int16_t *arg2_00;
    char *pcVar10;
    uint32_t *puVar11;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    iVar8 = 0;
    if (arg2_00 == NULL) {
code_r0x00021154:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x00021154;
            if (arg4 == '\0') {
                iVar9 = fcn.00020dfc(arg2,arg1);
                if (iVar9 == 0) {
code_r0x00020ff0:
                    iVar9 = iVar8;
                    puVar5 = *0x25e10;
                    if (*0x25e10 != NULL) {
                        for (; pcVar10 = *puVar5, pcVar10 != NULL; puVar5 = puVar5 + 2) {
code_r0x00021062:
                            cVar3 = *pcVar10;
                            if (cVar3 != '\0') {
                                iVar7 = iVar8;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    iVar7 = iVar7 + 1;
                                    cVar3 = pcVar10[iVar7];
                                }
                                arg2 = arg1;
                                iVar6 = fcn.0001f344(arg1,pcVar10,iVar7);
                                if (iVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar10 = pcVar10 + iVar7;
                                cVar3 = *pcVar10;
                                if (cVar3 == '\0') goto code_r0x00021069;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar10 = pcVar10 + 1;
                                    cVar3 = *pcVar10;
                                } while (cVar3 != '\0');
                                goto code_r0x00021062;
                            }
code_r0x00021069:
                            iVar9 = iVar9 + 1;
                        }
                    }
                    puVar5 = fcn.0001fa44();
                    if (puVar5 != NULL) {
                        if (((*0x25e10 != NULL) && (iVar9 << 4 != 0)) && (puVar5 != *0x25e10)) {
                            arg2 = puVar5;
                            fcn.000102a0(puVar5,*0x25e10,iVar9 << 4);
                        }
                        cVar3 = *arg1;
                        iVar7 = iVar8;
                        while (cVar3 != '\0') {
                            iVar7 = iVar7 + 1;
                            cVar3 = *(iVar7 + arg1);
                        }
                        iVar7 = fcn.0001faa0(arg2,iVar7 + 1,arg1);
                        puVar5[iVar9 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                iVar8 = iVar8 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar8 = fcn.0001faa0(arg2,iVar8 * 2 + 2,arg2_00);
                            puVar5[iVar9 * 2 + 1] = iVar8;
                            if (iVar8 != 0) {
                                puVar5[iVar9 * 2 + 2] = 0;
                                puVar5[iVar9 * 2 + 3] = 0;
                                if (*0x25e10 != NULL) {
                                    (**(*0x25e20 + 0x48))();
                                }
                                *0x25e10 = puVar5;
                                return 0;
                            }
                            (**(*0x25e20 + 0x48))(puVar5[iVar9 * 2]);
                        }
                        (**(*0x25e20 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar11 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar11 & 0xffffff)) goto code_r0x00020ff0;
                    puVar11 = puVar11 + 3;
                } while (*puVar11 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00016c00 @ 0x16c00 */

int64_t fcn.00016c00(int64_t arg1)

{
    int64_t *piVar1;
    uchar *arg3;
    int64_t iVar2;
    int64_t iVar3;
    uchar *puVar4;
    int64_t *piVar5;
    char16_t *arg2;
    char acStack_1f8 [12];
    uchar auStack_1ec [16];
    uchar auStack_1dc [44];
    int64_t iStack_1b0;
    int64_t iStack_1a0;
    int64_t iStack_190;
    int64_t iStack_180;
    int64_t iStack_170;
    int64_t iStack_160;
    uchar auStack_158 [80];
    uchar auStack_108 [256];
    
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    puVar4 = NULL;
    arg3 = (**arg1)(arg1,acStack_1f8,0);
    if (arg3 < 0) {
        if (acStack_1f8[0] != '\0') {
            arg2 = L"IPv6(%r)";
            iVar2 = 0x100;
            puVar4 = auStack_108;
            goto code_r0x00016d5e;
        }
    }
    else {
        if (iStack_1b0 != 0) {
            (**(*0x25e20 + 0x48))();
        }
        if (iStack_1a0 != 0) {
            (**(*0x25e20 + 0x48))();
        }
        if (iStack_190 != 0) {
            (**(*0x25e20 + 0x48))();
        }
        if (iStack_180 != 0) {
            (**(*0x25e20 + 0x48))();
        }
        if (iStack_170 != 0) {
            (**(*0x25e20 + 0x48))();
        }
        if (iStack_160 != 0) {
            (**(*0x25e20 + 0x48))();
        }
        if (acStack_1f8[0] != '\0') {
            iVar2 = fcn.0002305c(auStack_1dc,auStack_158);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar3 = fcn.0001fb70(auStack_108,0x100,0x25608,auStack_158);
            iVar2 = fcn.0002305c(auStack_1ec,auStack_158);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = iVar3 * -2 + 0x100;
            puVar4 = auStack_108 + iVar3 * 2;
            arg3 = auStack_158;
            arg2 = L"DestinationAddress=%s)";
code_r0x00016d5e:
            fcn.0001fb70(puVar4,iVar2,arg2,arg3);
            puVar4 = arg3;
            goto code_r0x00016d63;
        }
    }
    fcn.0001fb70(auStack_108,0x100,0x25670,puVar4);
code_r0x00016d63:
    piVar1 = *0x25e10;
    if (*0x25e10 != NULL) {
        iVar2 = 0;
        if (**0x25e10 != 0) {
            piVar5 = *0x25e10;
            do {
                (**(*0x25e20 + 0x48))(*piVar5);
                if (piVar5[1] != 0) {
                    (**(*0x25e20 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar5 = piVar1 + iVar2 * 2;
            } while (*piVar5 != 0);
        }
        (**(*0x25e20 + 0x48))(piVar1);
        *0x25e10 = NULL;
    }
    iVar2 = fcn.00020f70(0x255c0,*0x252b0,auStack_108,CONCAT71(puVar4 >> 8,1));
    if (-1 < iVar2) {
        iVar2 = fcn.00020f70(0x255c4,*0x25298,auStack_108,0);
    }
    return iVar2;
}


/* fcn.00023e0c @ 0x23e0c */

uint32_t fcn.00023e0c(int64_t arg1,uint32_t arg2)

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


/* fcn.00016f40 @ 0x16f40 */

void fcn.00016f40(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    ulong *puVar4;
    int64_t *piVar5;
    ulong *puVar6;
    int64_t *piVar7;
    ulong *arg3;
    int64_t *piVar8;
    ulong *puVar9;
    uchar uVar10;
    
    piVar7 = arg1 + 0x8e8;
    bVar1 = false;
    while (*piVar7 != piVar7) {
        fcn.00014d00(arg1,*piVar7);
    }
    fcn.000146d0(arg1,arg1 + 0x8c8);
    iVar3 = arg1 + 0x8d8;
    fcn.000146d0(arg1,iVar3);
    if (*(arg1 + 0x8a0) != '\0') {
        fcn.00014424(arg1,CONCAT71(iVar3 >> 8,1),0xffffffff,0xffffffff);
    }
    piVar7 = *(arg1 + 0x48) + 0x20;
    if ((*piVar7 != piVar7) && (*(*(arg1 + 0x48) + 0x30) != 0)) {
        piVar8 = *piVar7;
        if (piVar8 != piVar7) {
            piVar7 = arg1 + 0x28;
            bVar1 = false;
            do {
                if (*piVar7 != piVar7) {
                    for (piVar5 = *piVar7; piVar5 != piVar7; piVar5 = *piVar5) {
                        if (piVar5[-2] == 1) {
                            if (piVar5 + 0x1b != piVar8 + 2) {
                                iVar3 = fcn.000102e0(piVar5 + 0x1b,piVar8 + 2,0x10);
                                if (iVar3 != 0) goto code_r0x00017020;
                            }
                            bVar1 = true;
                            break;
                        }
code_r0x00017020:
                    }
                }
                piVar8 = *piVar8;
            } while (piVar8 != *(arg1 + 0x48) + 0x20);
        }
        uVar10 = 0;
        fcn.0001c5f0(arg1,*(arg1 + 0x48) + 0x20,*(arg1 + 0x48) + 0x30,0);
        if ((*(arg1 + 0x918) != 0) && (bVar1)) {
            (**(*0x25e20 + 0x108))(*(arg1 + 0x918),0,0,1,uVar10);
        }
    }
    for (puVar6 = *(arg1 + 0x38); puVar6 != arg1 + 0x38; puVar6 = *puVar6) {
        piVar7 = puVar6[0x10];
        piVar8 = *piVar7;
        while (piVar7 != puVar6 + 0x10) {
            cVar2 = fcn.000229a8(piVar7[4] + 0x18);
            if (cVar2 == '\0') {
                *(*piVar7 + 8) = piVar7[1];
                *piVar7[1] = *piVar7;
                (**(*0x25e20 + 0x48))(piVar7);
            }
            piVar7 = piVar8;
            piVar8 = *piVar8;
        }
        puVar4 = puVar6[0xe];
        puVar9 = *puVar4;
        while (puVar4 != puVar6 + 0xe) {
            arg3 = puVar4 + -1;
            cVar2 = fcn.000229a8(puVar4[4] + 0x18);
            if (cVar2 == '\0') {
                fcn.00014dc4(0,puVar6 + -1,arg3);
            }
            puVar4 = puVar9;
            puVar9 = *puVar9;
        }
    }
    if (arg2 == 1) {
        *(arg1 + 0x908) = 0x300;
        *(arg1 + 0x90c) = 10;
    }
    return;
}


/* fcn.00017594 @ 0x17594 */

ulong fcn.00017594(int64_t arg1,int64_t arg2)

{
    int64_t arg3;
    uint16_t uVar1;
    uint *arg1_00;
    ulong uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    
    iVar5 = 8;
    piVar4 = arg2 + 200;
    uVar7 = 0;
    iVar6 = 7;
    do {
        if (((*(piVar4 + 1) & 2) == 0) && (-1 < *piVar4)) {
            iVar5 = iVar5 + 0xc + piVar4[8];
        }
        piVar4 = piVar4 + 0xb;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    arg1_00 = fcn.0001fa44(arg1,iVar5);
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        iVar6 = arg1_00 + iVar5;
        *arg1_00 = *(arg2 + 0x3b4);
        piVar4 = arg2 + 0x108;
        *(arg1_00 + 6) = 0;
        do {
            if (((*(piVar4 + -7) & 2) == 0) && (-1 < piVar4[-8])) {
                arg3 = *piVar4;
                iVar6 = iVar6 - arg3;
                if ((arg3 != 0) && (iVar6 != piVar4[-1])) {
                    fcn.000102a0(iVar6,piVar4[-1],arg3);
                }
                uVar3 = *(arg1_00 + 6);
                arg1_00[uVar3 * 3 + 4] = uVar7;
                arg1_00[uVar3 * 3 + 3] = *piVar4;
                *(arg1_00 + uVar3 * 3 + 2) = iVar6 - arg1_00;
                *(arg1_00 + 6) = *(arg1_00 + 6) + 1;
            }
            uVar7 = uVar7 + 1;
            piVar4 = piVar4 + 0xb;
        } while (uVar7 < 7);
        *(arg1_00 + 1) = 0;
        uVar1 = fcn.00023e0c(arg1_00,iVar5);
        *(arg1_00 + 1) = ~uVar1;
        uVar2 = (**(*0x25e28 + 0x58))(arg1,0x24140,3,iVar5,arg1_00);
        (**(*0x25e20 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.000179bc @ 0x179bc */

void fcn.000179bc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    
    iVar6 = 0;
    if (*(arg3 + 0x268) != 0) {
        uVar4 = 0;
        if (*(arg3 + 0x268) / 0x12 != 0) {
            iVar5 = 0;
            do {
                iVar6 = *(arg3 + 0x260) + iVar5;
                if ((arg2 == iVar6) || (iVar3 = fcn.000102e0(arg2,iVar6,0x10), iVar3 == 0)) break;
                uVar4 = uVar4 + 1;
                iVar5 = iVar5 + 0x12;
            } while (uVar4 < *(arg3 + 0x268) / 0x12);
        }
        iVar5 = arg3 + 0x348;
        if (arg1 == '\0') {
            iVar5 = arg3 + 800;
        }
        fcn.00022c60(iVar5,iVar6,0);
        iVar6 = *(arg3 + 0x368);
        if (*(arg3 + 0x340) + iVar6 == *(arg3 + 0x268) / 0x12) {
            if (*(arg3 + 0x340) == 0) {
                *(arg3 + 0x228) = 0;
            }
            else {
                (**(*0x25e20 + 0x48))(*(arg3 + 0x260));
                iVar6 = iVar6 * 0x12;
                *(arg3 + 0x268) = iVar6;
                if (iVar6 == 0) {
                    *(arg3 + 0x260) = 0;
                    *(arg3 + 0x228) = 0x800000000000000e;
                }
                else {
                    iVar6 = fcn.0001fa44();
                    *(arg3 + 0x228) = 0;
                    *(arg3 + 0x260) = iVar6;
                    if (*(arg3 + 0x368) != 0) {
                        piVar1 = arg3 + 0x358;
                        do {
                            piVar2 = *(arg3 + 0x348);
                            *(*piVar2 + 8) = piVar2[1];
                            *piVar2[1] = *piVar2;
                            *(arg3 + 0x368) = *(arg3 + 0x368) + -1;
                            iVar5 = *piVar1;
                            *piVar2 = iVar5;
                            piVar2[1] = piVar1;
                            *(iVar5 + 8) = piVar2;
                            *piVar1 = piVar2;
                            if (iVar6 != piVar2[2]) {
                                fcn.000102a0(iVar6,piVar2[2],0x12);
                            }
                            iVar6 = iVar6 + 0x12;
                        } while (*(arg3 + 0x368) != 0);
                    }
                }
            }
            if (*(arg3 + 0x340) != 0) {
                piVar1 = arg3 + 0x330;
                do {
                    piVar2 = *(arg3 + 800);
                    *(*piVar2 + 8) = piVar2[1];
                    *piVar2[1] = *piVar2;
                    *(arg3 + 0x340) = *(arg3 + 0x340) + -1;
                    iVar6 = *piVar1;
                    *piVar2 = iVar6;
                    piVar2[1] = piVar1;
                    *(iVar6 + 8) = piVar2;
                    *piVar1 = piVar2;
                } while (*(arg3 + 0x340) != 0);
            }
            if (*(arg3 + 0x368) != 0) {
                piVar1 = arg3 + 0x358;
                do {
                    piVar2 = *(arg3 + 0x348);
                    *(*piVar2 + 8) = piVar2[1];
                    *piVar2[1] = *piVar2;
                    *(arg3 + 0x368) = *(arg3 + 0x368) + -1;
                    iVar6 = *piVar1;
                    *piVar2 = iVar6;
                    piVar2[1] = piVar1;
                    *(iVar6 + 8) = piVar2;
                    *piVar1 = piVar2;
                } while (*(arg3 + 0x368) != 0);
            }
            fcn.00022cc4(arg3 + 0x238,0x17384,0);
            fcn.00017594(*(arg3 + 0x468),arg3);
        }
    }
    return;
}


/* fcn.00018750 @ 0x18750 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

uint64_t fcn.00018750(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg3_00;
    uint16_t *puVar5;
    char *pcVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint16_t auStackX_8 [4];
    uint16_t auStackX_20 [4];
    int64_t var_30h;
    int16_t var_48h;
    uint32_t auStack_38 [4];
    int64_t var_bp_10h;
    
    uVar7 = 0;
    auStack_38[0] = 0;
    iVar2 = (**(arg1 + 0x40))(arg1,arg3,auStack_38,0);
    if ((iVar2 != -0x7ffffffffffffffb) || (iVar2 = fcn.0001fa44(0x8000000000000005,auStack_38[0] << 3), iVar2 == 0)) {
        return 0x8000000000000006;
    }
    iVar3 = (**(arg1 + 0x40))(arg1,arg3,auStack_38,iVar2);
    if (iVar3 < 0) {
code_r0x0001893a:
        uVar7 = 0x8000000000000006;
    }
    else {
        uVar8 = uVar7;
        uVar10 = auStack_38[0];
        if (auStack_38[0] != 0) {
            do {
                puVar5 = *(iVar2 + uVar8 * 8);
                if (auStackX_20 != puVar5) {
                    fcn.000102a0(auStackX_20,puVar5,2);
                    uVar10 = auStack_38[0];
                }
                auStackX_20[0] = auStackX_20[0] << 8 | auStackX_20[0] >> 8;
                if (auStackX_20[0] == 0x17) {
                    puVar5 = *(iVar2 + uVar8 * 8) + 2;
                    if (auStackX_8 != puVar5) {
                        fcn.000102a0(auStackX_8,puVar5,2);
                    }
                    uVar1 = auStackX_8[0] >> 8;
                    auStackX_8[0] = auStackX_8[0] << 8 | uVar1;
                    arg3_00 = auStackX_8[0];
                    if ((auStackX_8[0] == 0) || ((uVar1 & 0xf) != 0)) goto code_r0x0001893a;
                    pcVar6 = *(iVar2 + uVar8 * 8) + 4;
                    uVar12 = uVar7;
                    if (auStackX_8[0] >> 4 != 0) goto code_r0x00018877;
                    goto code_r0x000188af;
                }
                uVar8 = uVar8 + 1;
            } while (uVar8 < uVar10);
        }
    }
    goto code_r0x00018944;
code_r0x00018877:
    do {
        if (*pcVar6 == -1) goto code_r0x0001893a;
        uVar11 = 0;
        do {
            if (pcVar6[uVar11] != '\0') goto code_r0x000188a3;
            uVar9 = uVar11 + 1;
            uVar11 = uVar9;
        } while (uVar9 < 0xf);
        if (pcVar6[uVar9] < 2) goto code_r0x0001893a;
code_r0x000188a3:
        pcVar6 = pcVar6 + 0x10;
        uVar12 = uVar12 + 1;
    } while (uVar12 < auStackX_8[0] >> 4);
code_r0x000188af:
    if (*(arg2 + 0x318) != auStackX_8[0]) {
        if (*(arg2 + 0x310) != 0) {
            (**(*0x25e20 + 0x48))(*(arg2 + 0x310));
            arg3_00 = auStackX_8[0];
        }
        uVar4 = fcn.0001fa44(arg3_00,arg3_00);
        arg3_00 = auStackX_8[0];
        *(arg2 + 0x310) = uVar4;
    }
    iVar3 = *(iVar2 + uVar8 * 8) + 4;
    if ((arg3_00 != 0) && (*(arg2 + 0x310) != iVar3)) {
        fcn.000102a0(*(arg2 + 0x310),iVar3,arg3_00);
        arg3_00 = auStackX_8[0];
    }
    *(arg2 + 0x318) = arg3_00;
    *(arg2 + 0x2d8) = 0;
    fcn.00022cc4(arg2 + 0x2e8,0x17384,0);
code_r0x00018944:
    (**(*0x25e20 + 0x48))(iVar2);
    return uVar7;
}


/* fcn.0001eedc @ 0x1eedc */

int64_t fcn.0001eedc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uchar *arg3;
    int64_t arg4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    int64_t var_bp_50h;
    int64_t var_180h;
    int64_t var_188h;
    int64_t var_190h;
    uint uVar5;
    uint uStack_248;
    ulong uStack_244;
    ulong uStack_23c;
    uchar auStack_228 [256];
    uchar auStack_128 [256];
    
    iVar1 = (**(*0x25e20 + 0x98))(*(arg1 + -0x2d0),0x24130,&iStackX_8);
    if (iVar1 < 0) {
        return iVar1;
    }
    *(arg1 + 0x3d8) = 0x49434649;
    fcn.00010280(&uStack_248,0x14);
    uStack_244 = *0x251c8;
    uStack_23c = *0x251d0;
    uStack_248 = 0x140401;
    iVar1 = fcn.00020c8c(iStackX_8,&uStack_248);
    *(arg1 + 0x400) = iVar1;
    if (iVar1 != 0) {
        uVar5 = 0;
        *(arg1 + 1000) = 0x1e710;
        piVar4 = arg1 + 0x3e0;
        *(arg1 + 0x3f0) = 0x1e8ec;
        *(arg1 + 0x3f8) = 0x1ebd4;
        iVar1 = (**(*0x25e20 + 0x148))(piVar4,0x24130,*(arg1 + 0x400),0x25158,arg1 + 1000,0);
        if ((iVar1 < 0) ||
           (iVar1 = (**(*0x25e20 + 0x118))
                              (*(arg1 + -0x2d0),0x25168,auStackX_18,*(arg1 + -0x2d8),*piVar4,CONCAT44(uVar5,8)),
           iVar1 < 0)) goto code_r0x0001ef7c;
        iVar1 = *piVar4;
        arg4 = 0x25350;
        iVar2 = fcn.00021ad0(0x24120,iVar1,0x24160,0x25350);
        *(arg1 + 0x408) = iVar2;
        if (iVar2 != 0) {
            piVar4 = &iStackX_10;
            iVar1 = fcn.00022de8(*(arg1 + -0x2d0),iVar1,piVar4);
            if (-1 < iVar1) {
                iVar1 = fcn.00021904(*(arg1 + 0x408),3,piVar4,arg4);
                fcn.0001fb70(auStack_228,0x80,0x25870,iVar1);
                arg3 = auStack_228;
                fcn.000217ec(*(arg1 + 0x408),3,arg3);
                uVar3 = fcn.00021904(*(arg1 + 0x408),2,arg3,iVar1);
                fcn.0001fb70(auStack_228,0x80,0x25888,iStackX_10);
                fcn.000217ec(*(arg1 + 0x408),2,auStack_228);
                fcn.0001fb70(auStack_128,0x80,0x258a0,iStackX_10);
                fcn.000217ec(*(arg1 + 0x408),5,auStack_128);
                (**(*0x25e20 + 0x48))(iStackX_10);
                (**(*0x25e20 + 0x48))(uVar3);
                iVar1 = arg1 + 0x420;
                *iVar1 = iVar1;
                *(arg1 + 0x428) = iVar1;
                iVar1 = arg1 + 0x438;
                *iVar1 = iVar1;
                *(arg1 + 0x440) = iVar1;
                iVar1 = arg1 + 0x450;
                *iVar1 = iVar1;
                *(arg1 + 0x458) = iVar1;
                return 0;
            }
            goto code_r0x0001ef7c;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x0001ef7c:
    fcn.0001f198(arg1);
    return iVar1;
}


/* fcn.0001c3a8 @ 0x1c3a8 */

//WARNING: Variable defined which should be unmapped: var_28h

ushort * fcn.0001c3a8(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uchar *puVar3;
    ushort *puVar4;
    uint8_t *arg1_00;
    uint8_t auStackX_8 [3];
    ushort uStackX_b;
    uint8_t auStackX_d [3];
    uchar auStackX_10 [8];
    int64_t var_bp_20h;
    int64_t var_28h;
    int64_t var_30h;
    
    if (*(arg1 + 0x900) != 0) {
        (**(*0x25e20 + 0x48))();
    }
    var_bp_20h = 8;
    puVar1 = arg1 + 0xf58;
    fcn.00010280(auStackX_10,8);
    iVar2 = (**(arg1 + 0xf60))(puVar1,1,&var_bp_20h,auStackX_10);
    arg1_00 = 0x800000000000000e;
    if (iVar2 == -0x7ffffffffffffff2) {
        if ((*(arg1 + 0x948) == 6) && (*(arg1 + 0x8fc) == '\b')) {
            if (auStackX_8 != arg1 + 0xb6c) {
                arg1_00 = auStackX_8;
                fcn.000102a0(arg1_00,arg1 + 0xb6c,3);
            }
            uStackX_b = 0xfeff;
            if (auStackX_d != arg1 + 0xb6f) {
                arg1_00 = auStackX_d;
                fcn.000102a0(arg1_00,arg1 + 0xb6f,3);
            }
            if ((auStackX_8[0] & 2) == 0) {
                auStackX_8[0] = auStackX_8[0] | 2;
            }
            else {
                auStackX_8[0] = auStackX_8[0] & 0xfd;
            }
            puVar3 = fcn.0001faa0(arg1_00,*(arg1 + 0x8fc),auStackX_8);
        }
        else {
            puVar3 = NULL;
        }
        *(arg1 + 0x900) = puVar3;
        if (puVar3 == NULL) {
            return NULL;
        }
        if ((*(arg1 + 0x8fc) != 0) && (auStackX_10 != puVar3)) {
            fcn.000102a0(auStackX_10,puVar3,*(arg1 + 0x8fc));
        }
        iVar2 = (**puVar1)(puVar1,1,var_bp_20h,auStackX_10);
        if (iVar2 < 0) goto code_r0x0001c4ce;
    }
    else {
        if (iVar2 < 0) {
            return NULL;
        }
        iVar2 = fcn.0001faa0(0x800000000000000e,var_bp_20h,auStackX_10);
        *(arg1 + 0x900) = iVar2;
        if (iVar2 == 0) {
            return NULL;
        }
    }
    puVar4 = fcn.0001fa74(0x10);
    if (puVar4 != NULL) {
        if ((*(arg1 + 0x8fc) != 0) && (puVar4 + 4 != *(arg1 + 0x900))) {
            fcn.000102a0(puVar4 + 4,*(arg1 + 0x900),*(arg1 + 0x8fc));
        }
        *puVar4 = 0x80fe;
        return puVar4;
    }
code_r0x0001c4ce:
    (**(*0x25e20 + 0x48))(*(arg1 + 0x900));
    *(arg1 + 0x900) = 0;
    return NULL;
}


/* fcn.00023970 @ 0x23970 */

ulong fcn.00023970(uint32_t arg1,int64_t arg2,uint32_t arg3)

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


/* fcn.0001ab6c @ 0x1ab6c */

void fcn.0001ab6c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar3 = *(arg1 + 0x10);
    piVar1 = *piVar3;
    while (piVar2 = piVar1, piVar3 != arg1 + 0x10) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        fcn.000233c8(piVar3 + -2);
        piVar1 = *piVar2;
        piVar3 = piVar2;
    }
    if (*(arg1 + 0x60) != 0) {
        fcn.000233c8(*(arg1 + 0x60));
    }
    //WARNING: Could not recover jumptable at 0x0001abda. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x25e20 + 0x48))(arg1);
    return;
}


/* fcn.0001cd48 @ 0x1cd48 */

ulong fcn.0001cd48(int64_t arg1)

{
    uchar auStackX_8 [2];
    ushort uStackX_a;
    uchar uStackX_e;
    
    fcn.00010280(auStackX_8,8);
    auStackX_8[0] = 0x3a;
    uStackX_a = 0x205;
    uStackX_e = 1;
    if (arg1 != auStackX_8) {
        fcn.000102a0(arg1,auStackX_8,8);
    }
    return 0;
}


/* fcn.0001a1a8 @ 0x1a1a8 */

int64_t fcn.0001a1a8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t arg4;
    int64_t iVar3;
    ushort *arg1_00;
    uint32_t uVar4;
    uchar *arg1_01;
    ulong uVar5;
    uchar auStack_58 [17];
    uint8_t uStack_47;
    uint uStack_46;
    ushort uStack_42;
    uchar auStack_40 [16];
    uchar auStack_30 [24];
    
    arg1_01 = NULL;
    arg4 = fcn.000232c4(0x48);
    if (arg4 == 0) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        uStack_47 = uStack_47 & 0xf0;
        uStack_46 = 0x20000000;
        uStack_42 = 0x100;
        if (auStack_40 != arg1 + 0x890) {
            arg1_01 = auStack_40;
            fcn.000102a0(arg1_01,arg1 + 0x890,0x10);
        }
        fcn.0001c370(CONCAT71(arg1_01 >> 8,1),auStack_58);
        fcn.000102a0(auStack_30,auStack_58,0x10);
        *(arg4 + 0x98) = *(arg4 + 0x98) + 0x28;
        *(arg4 + 0xa0) = *(arg4 + 0xa0) + 0x28;
        iVar3 = fcn.00023aac(arg4,8,0);
        iVar3 = fcn.0001cd48(iVar3);
        if (iVar3 < 0) {
            fcn.000233c8(arg4);
        }
        else {
            uVar5 = 0;
            arg1_00 = fcn.00023aac(arg4,0x18,0);
            fcn.00010280(arg1_00,0x18);
            *arg1_00 = 0x84;
            if (arg1_00 + 4 != arg2) {
                uVar5 = 0;
                fcn.000102a0(arg1_00 + 4,arg2,0x10);
            }
            uVar1 = fcn.00023e0c(arg1_00,0x18);
            uVar2 = fcn.00023ec8(auStack_40,auStack_30,CONCAT71(uVar5 >> 8,0x3a),0x18);
            uVar4 = uVar2 + uVar1;
            if ((uVar4 & 0xffff0000) != 0) {
                uVar4 = (uVar4 & 0xffff) + 1;
            }
            arg1_00[1] = ~uVar4;
            iVar3 = fcn.00011d14(arg1,0,0,arg4);
        }
    }
    return iVar3;
}


/* fcn.0001a418 @ 0x1a418 */

ulong fcn.0001a418(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t arg1_00;
    uint32_t uVar4;
    uint64_t uVar5;
    
    uVar1 = *(arg1 + 0x128);
    uVar5 = 0;
    uVar4 = 0;
    if (uVar1 != 0) {
        do {
            uVar4 = uVar5;
            iVar3 = uVar5 * 0x10 + *(arg1 + 0x120);
            if (iVar3 == arg2) break;
            iVar3 = fcn.000102e0(iVar3,arg2,0x10);
            if (iVar3 == 0) break;
            uVar4 = uVar4 + 1;
            uVar5 = uVar4;
        } while (uVar4 < uVar1);
    }
    if (uVar4 == uVar1) {
        uVar2 = 0x800000000000000e;
    }
    else {
        if (uVar4 < uVar1 - 1) {
            iVar3 = uVar4 << 4;
            uVar5 = (uVar1 - 1) - uVar4;
            do {
                arg1_00 = *(arg1 + 0x120) + iVar3;
                if (arg1_00 != arg1_00 + 0x10) {
                    fcn.000102a0(arg1_00,arg1_00 + 0x10,0x10);
                }
                iVar3 = iVar3 + 0x10;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
        *(arg1 + 0x128) = *(arg1 + 0x128) + -1;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001a8d8 @ 0x1a8d8 */

ulong fcn.0001a8d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    
    if (arg2 == 0) {
        *(arg4 + 0x28) = 0;
        uVar1 = fcn.0001a004(arg1,0,arg3);
    }
    else {
        if ((*(arg4 + 0x28) == 0) || ((arg2 & 0xffffU) / 1000 < *(arg4 + 0x28))) {
            fcn.00022a6c();
            *(arg4 + 0x28) = 0;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00023bec @ 0x23bec */

int fcn.00023bec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    char cVar6;
    uint64_t uVar7;
    int iVar8;
    
    cVar6 = arg3;
    if ((arg2 != 0) && (uVar3 = *(arg1 + 0x84), uVar3 != 0)) {
        uVar5 = arg2 & 0xffffffff;
        if (uVar3 < arg2) {
            uVar5 = uVar3;
        }
        iVar8 = 0;
        *(arg1 + 0x84) = uVar3 - uVar5;
        if (cVar6 == '\0') {
            uVar7 = *(arg1 + 0x80) - 1;
        }
        else {
            uVar7 = 0;
            iVar8 = 0;
        }
        do {
            uVar3 = *(arg1 + 0xa8 + uVar7 * 0x28);
            if (uVar3 != 0) {
                uVar4 = uVar5;
                if (uVar4 <= uVar3) {
                    piVar1 = arg1 + 0xa8 + uVar7 * 0x28;
                    *piVar1 = *piVar1 - uVar4;
                    if (cVar6 == '\0') {
                        piVar2 = arg1 + 0xa0 + uVar7 * 0x28;
                        *piVar2 = *piVar2 - uVar5;
                    }
                    else {
                        piVar2 = arg1 + 0x98 + uVar7 * 0x28;
                        *piVar2 = *piVar2 + uVar5;
                    }
                    return iVar8 + uVar4;
                }
                piVar1 = arg1 + 0xa8 + uVar7 * 0x28;
                *piVar1 = *piVar1 - uVar3;
                uVar5 = uVar4 - uVar3;
                iVar8 = iVar8 + uVar3;
                if (cVar6 == '\0') {
                    piVar2 = arg1 + 0xa0 + uVar7 * 0x28;
                    *piVar2 = *piVar2 - uVar3;
                }
                else {
                    piVar2 = arg1 + 0x98 + uVar7 * 0x28;
                    *piVar2 = *piVar2 + uVar3;
                }
            }
            uVar7 = uVar7 + ((-(cVar6 != '\0') & 2) - 1);
        } while( true );
    }
    return 0;
}


/* fcn.0001abe8 @ 0x1abe8 */

void fcn.0001abe8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if (*(arg1 + 0x40) < arg2) {
        uVar1 = arg2 - *(arg1 + 0x40);
        fcn.00023bec(arg1,uVar1 & 0xffffffff,CONCAT71(arg3 >> 8,1));
        *(arg1 + 0x48) = *(arg1 + 0x48) - uVar1;
        *(arg1 + 0x40) = arg2;
    }
    if (arg3 < *(arg1 + 0x44)) {
        uVar1 = arg3 - *(arg1 + 0x44);
        fcn.00023bec(arg1,uVar1 & 0xffffffff,0);
        *(arg1 + 0x48) = *(arg1 + 0x48) - uVar1;
        *(arg1 + 0x44) = arg3;
    }
    return;
}


/* fcn.000233f4 @ 0x233f4 */

int64_t fcn.000233f4(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg4;
    
    iVar1 = fcn.000232c4(*(arg1 + 0x84) + arg2);
    if (iVar1 != 0) {
        if (iVar1 + 0x38 != arg1 + 0x38) {
            fcn.000102a0(iVar1 + 0x38,arg1 + 0x38,0x40);
        }
        *(iVar1 + 0x98) = *(iVar1 + 0x98) + (arg2 & 0xffffffffU);
        *(iVar1 + 0xa0) = *(iVar1 + 0xa0) + (arg2 & 0xffffffffU);
        arg4 = fcn.00023aac(iVar1,*(arg1 + 0x84),0);
        if (*(arg1 + 0x84) != 0) {
            fcn.00023ca8(arg1,0,*(arg1 + 0x84),arg4);
        }
    }
    return iVar1;
}


/* fcn.000239e4 @ 0x239e4 */

ulong fcn.000239e4(int64_t arg1)

{
    ulong *puVar1;
    int64_t arg1_00;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    for (puVar1 = *arg1; puVar1 != arg1; puVar1 = *puVar1) {
    }
    arg1_00 = fcn.0001fa44();
    uVar2 = 0;
    if (arg1_00 != 0) {
        uVar5 = 0;
        for (puVar1 = *arg1; puVar1 != arg1; puVar1 = *puVar1) {
            uVar4 = 0;
            uVar6 = uVar5;
            if (*(puVar1 + 0xe) != 0) {
                do {
                    uVar5 = uVar6;
                    if (*(puVar1 + uVar4 * 5 + 0x13) != 0) {
                        uVar5 = uVar6 + 1;
                        *(arg1_00 + 8 + uVar6 * 0x10) = puVar1[uVar4 * 5 + 0x11];
                        *(arg1_00 + uVar6 * 0x10) = *(puVar1 + uVar4 * 5 + 0x13);
                    }
                    uVar3 = uVar4 + 1;
                    uVar4 = uVar3;
                    uVar6 = uVar5;
                } while (uVar3 < *(puVar1 + 0xe));
            }
        }
        uVar2 = fcn.000237f4(arg1_00,uVar5,0);
        (**(*0x25e20 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.0001ac5c @ 0x1ac5c */

int64_t fcn.0001ac5c(int64_t arg1,int64_t arg2)

{
    uint uVar1;
    int iVar2;
    int64_t *piVar3;
    int64_t *arg1_00;
    int64_t iVar4;
    int64_t iVar5;
    uchar *puVar6;
    int64_t iVar7;
    int64_t *arg2_00;
    int64_t *piVar8;
    int64_t *piVar9;
    uint32_t uVar10;
    int64_t arg3;
    uint64_t arg3_00;
    int64_t *piVar11;
    
    iVar7 = *(arg2 + 0x20);
    piVar9 = iVar7 + 8;
    piVar8 = iVar7 + 0x18;
    uVar10 = *piVar9 + *piVar8 + *(arg2 + 0x58);
    arg2_00 = uVar10 * 0x2040811 >> 0x20;
    piVar11 = (uVar10 % 0x7f) * 0x10 + arg1;
    for (arg1_00 = *piVar11; arg1_00 != piVar11; arg1_00 = *arg1_00) {
        if (((arg1_00[8] == *(arg2 + 0x58)) &&
            ((arg1_00 + 6 == piVar9 || (arg2_00 = piVar9, iVar4 = fcn.000102e0(arg1_00 + 6,piVar9,0x10), iVar4 == 0)
             ))) && ((arg1_00 + 4 == piVar8 ||
                     (arg2_00 = piVar8, iVar4 = fcn.000102e0(arg1_00 + 4,piVar8,0x10), iVar4 == 0))))
        goto code_r0x0001ad91;
    }
    uVar1 = *(arg2 + 0x58);
    arg2_00 = 0x68;
    arg1_00 = fcn.0001fa44();
    if (arg1_00 != NULL) {
        if (arg1_00 + 4 != piVar8) {
            fcn.000102a0(arg1_00 + 4,piVar8,0x10);
            arg2_00 = piVar8;
        }
        if (arg1_00 + 6 != piVar9) {
            fcn.000102a0(arg1_00 + 6,piVar9,0x10);
            arg2_00 = piVar9;
        }
        piVar9 = arg1_00 + 2;
        *piVar9 = piVar9;
        arg1_00[3] = piVar9;
        *(arg1_00 + 8) = uVar1;
        *(arg1_00 + 0x44) = 0;
        arg1_00[10] = 0;
        arg1_00[0xb] = 0;
        arg1_00[0xc] = 0;
        *(arg1_00 + 0x4c) = 0x3d;
        iVar4 = *piVar11;
        *arg1_00 = iVar4;
        arg1_00[1] = piVar11;
        *(iVar4 + 8) = arg1_00;
        *piVar11 = arg1_00;
code_r0x0001ad91:
        piVar9 = arg1_00 + 2;
        piVar8 = *piVar9;
        if (piVar8 != piVar9) {
            do {
                if (*(arg2 + 0x40) < piVar8[6]) break;
                piVar8 = *piVar8;
            } while (piVar8 != piVar9);
        }
        piVar11 = piVar8[1];
        if (piVar11 != piVar9) {
            if (*(arg2 + 0x40) < *(piVar11 + 0x34)) {
                if (*(arg2 + 0x44) <= *(piVar11 + 0x34)) goto code_r0x0001ae4f;
                arg2_00 = piVar11[6];
                fcn.0001abe8(piVar11 + -2,arg2_00,*(arg2 + 0x40));
            }
        }
        piVar11 = arg2 + 0x10;
        *piVar11 = piVar8;
        *(arg2 + 0x18) = piVar8[1];
        *piVar8[1] = piVar11;
        piVar8[1] = piVar11;
        while (piVar8 != piVar9) {
            if (*(arg2 + 0x44) < *(piVar8 + 0x34)) {
                iVar2 = piVar8[6];
                if (iVar2 < *(arg2 + 0x44)) {
                    if (*(arg2 + 0x40) == iVar2) {
                        *(*piVar11 + 8) = *(arg2 + 0x18);
                        **(arg2 + 0x18) = *piVar11;
                        goto code_r0x0001ae4f;
                    }
                    arg2_00 = *(arg2 + 0x40);
                    fcn.0001abe8(arg2,arg2_00,iVar2);
                }
                break;
            }
            piVar3 = *piVar8;
            *(*piVar8 + 8) = piVar8[1];
            arg2_00 = piVar8[1];
            *arg2_00 = *piVar8;
            *(arg1_00 + 9) = arg1_00[9] - piVar8[7];
            fcn.000233c8(piVar8 + -2);
            piVar8 = piVar3;
        }
        *(arg1_00 + 9) = arg1_00[9] + *(arg2 + 0x48);
        if (*(arg2 + 0x40) == 0) {
            if (((arg1_00[10] != 0) || (arg1_00[0xc] != 0)) || (iVar4 = fcn.000233f4(arg2,arg2_00,0x28), iVar4 == 0))
            goto code_r0x0001ae4f;
            arg3 = 0;
            iVar5 = fcn.00023488(iVar4,0,0);
            *(iVar5 + 2) = *(iVar5 + 2) << 8 | *(iVar5 + 2) >> 8;
            *(iVar5 + 4) = *(iVar5 + 4) << 8 | *(iVar5 + 4) >> 8;
            *(iVar4 + 0x20) = iVar5;
            arg1_00[0xc] = iVar4;
            if (*(arg2 + 0x5c) == 0x28) {
                *(iVar7 + 6) = *(arg2 + 0x5e);
            }
            else {
                puVar6 = fcn.00023488(arg2,*(arg2 + 0x60) + 0x28,arg3);
                if (puVar6 == NULL) goto code_r0x0001ae4f;
                *puVar6 = *(arg2 + 0x5e);
            }
            arg1_00[10] = iVar7;
            arg1_00[0xb] = arg2 + 0x38;
        }
        if ((*(arg2 + 0x5f) != '\0') && (*(arg1_00 + 0x44) == 0)) {
            *(arg1_00 + 0x44) = *(arg2 + 0x44);
        }
        if (*(arg1_00 + 0x44) == 0) {
            return 0;
        }
        if (*(arg1_00 + 9) < *(arg1_00 + 0x44)) {
            return 0;
        }
        *(*arg1_00 + 8) = arg1_00[1];
        *arg1_00[1] = *arg1_00;
        if (*(arg1_00[3] + 0x34) == *(arg1_00 + 0x44)) {
            iVar7 = arg1_00[0xb];
            arg3_00 = *(iVar7 + 0x24);
            iVar4 = fcn.000234ec(*piVar9 + -0x10,0,arg3_00,0);
            for (piVar8 = *piVar9; piVar8 != piVar9; piVar8 = *piVar8) {
                arg3_00 = CONCAT71(arg3_00 >> 8,1);
                fcn.00023bec(piVar8 + -2,*(iVar7 + 0x24) + 8,arg3_00);
            }
            iVar7 = *piVar9;
            piVar8 = iVar4 + 0x10;
            *piVar8 = iVar7;
            *(iVar4 + 0x18) = piVar9;
            *(iVar7 + 8) = piVar8;
            *piVar9 = piVar8;
            iVar7 = fcn.000239e4(piVar9);
            if (iVar7 != 0) {
                *(iVar7 + 0x20) = arg1_00[10];
                if (iVar7 + 0x38 != arg1_00[0xb]) {
                    fcn.000102a0(iVar7 + 0x38,arg1_00[0xb],0x30);
                }
                return iVar7;
            }
        }
        fcn.0001ab6c(arg1_00);
    }
code_r0x0001ae4f:
    fcn.000233c8(arg2);
    return 0;
}


/* fcn.0001b420 @ 0x1b420 */

ulong fcn.0001b420(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint16_t uVar2;
    int64_t *piVar3;
    char cVar4;
    int iVar5;
    uint8_t *puVar6;
    int64_t iVar7;
    uchar *puVar8;
    uint8_t uVar9;
    uint16_t uVar10;
    uint64_t uVar11;
    uint32_t uVar12;
    int16_t iVar13;
    uint32_t uVar14;
    int iVar15;
    int64_t unaff_R13;
    int64_t unaff_R14;
    uint32_t unaff_R15D;
    int *in_stack_00000030;
    int *in_stack_00000038;
    char *in_stack_00000040;
    uint in_stack_00000048;
    uint in_stack_0000004c;
    uint32_t in_stack_ffffffffffffffc0;
    int64_t in_stack_ffffffffffffffc8;
    unkbyte7 in_stack_ffffffffffffffd0;
    char cVar16;
    
    iVar15 = 0;
    puVar6 = fcn.00023488(*arg2,0,0);
    piVar3 = CONCAT44(in_stack_0000004c,in_stack_00000048);
    *piVar3 = puVar6;
    if (((puVar6 != NULL) && ((*puVar6 & 0xf0) == 0x60)) && (puVar6[8] != 0xff)) {
        uVar14 = iVar15 + 0x10;
        fcn.00010280(&stack0xffffffffffffffc8,uVar14);
        cVar4 = iVar15 + 1;
        if ((&stack0xffffffffffffffc8 != *piVar3 + 0x18) &&
           (cVar16 = cVar4, iVar7 = fcn.000102e0(&stack0xffffffffffffffc8,*piVar3 + 0x18,uVar14), iVar7 != 0)) {
            iVar7 = *piVar3;
            uVar11 = 0;
            do {
                if (*(uVar11 + 0x18 + iVar7) != '\0') {
                    *(iVar7 + 2) = *(iVar7 + 2) << 8 | *(iVar7 + 2) >> 8;
                    *(iVar7 + 4) = *(iVar7 + 4) << 8 | *(iVar7 + 4) >> 8;
                    *(*arg2 + 0x20) = iVar7;
                    iVar1 = *arg2;
                    *(iVar1 + 0x3c) = 0;
                    *(iVar1 + 0x38) = arg3;
                    iVar5 = 0;
                    if (*(arg1 + 0x93d) != '\0') {
                        iVar5 = iVar15 + 1;
                    }
                    *(iVar1 + 0x3c) = iVar5;
                    cVar4 = fcn.0001c74c(arg1,iVar7 + 0x18,0,0);
                    if (cVar4 == '\0') {
                        if ((*(*piVar3 + 0x18) == -1) && (iVar7 = fcn.00019fa8(arg1,*piVar3 + 0x18), iVar7 != 0)) {
                            *(iVar1 + 0x3c) = 3;
                        }
                    }
                    else {
                        *(iVar1 + 0x3c) = 2;
                    }
                    if (*(iVar1 + 0x3c) == 0) {
                        return 0x8000000000000002;
                    }
                    uVar10 = *(*piVar3 + 4);
                    *(iVar1 + 0x40) = 0;
                    *(iVar1 + 0x48) = uVar10;
                    *(iVar1 + 0x44) = uVar10;
                    *(iVar1 + 0x5c) = 0x28;
                    *(iVar1 + 0x50) = 0;
                    *(iVar1 + 0x5f) = 0;
                    uVar12 = uVar10 + 0x28 & 0xffff;
                    uVar14 = *(*arg2 + 0x84);
                    if (uVar12 < uVar14) {
                        fcn.00023bec(*arg2,uVar14 - uVar12,0);
                    }
                    if (uVar12 != *(*arg2 + 0x84)) {
                        return 0x8000000000000002;
                    }
                    if (uVar10 != 0) {
                        iVar7 = fcn.0001fa44();
                        *arg4 = iVar7;
                        if (iVar7 == 0) {
                            return 0x8000000000000002;
                        }
                        if (uVar10 != 0) {
                            fcn.00023ca8(*arg2,0x28,uVar10,iVar7);
                        }
                    }
                    iVar7 = *piVar3 + 6;
                    cVar4 = fcn.0001c9c4(arg1,*arg2,iVar7,*arg4,in_stack_00000040,in_stack_ffffffffffffffc0,
                                         in_stack_ffffffffffffffc8,CONCAT17(cVar16,in_stack_ffffffffffffffd0),
                                         unaff_R15D,unaff_R14,unaff_R13);
                    if (cVar4 != '\0') {
                        iVar15 = *in_stack_00000038;
                        if (*in_stack_00000040 != '\0') {
                            puVar8 = fcn.00023488(*arg2,iVar15 + 0x28U,0);
                            if (puVar8 == NULL) {
                                return 0x8000000000000002;
                            }
                            uVar10 = *(puVar8 + 2);
                            uVar2 = uVar10 >> 8;
                            if ((uVar2 & 1) == 0) {
                                *(iVar1 + 0x5f) = 1;
                            }
                            uVar10 = uVar10 << 8 | uVar2 & 0xfffe;
                            if (uVar10 == 0) {
                                *(iVar1 + 0x5e) = *puVar8;
                            }
                            iVar13 = iVar15 + 0x28U;
                            *(iVar1 + 0x5c) = iVar13;
                            uVar12 = uVar12 - (iVar13 + 8);
                            *(iVar1 + 0x40) = uVar10;
                            *(iVar1 + 0x48) = uVar12;
                            *(iVar1 + 0x44) = uVar12 + uVar10;
                            *(iVar1 + 0x58) = *(puVar8 + 4);
                            *(iVar1 + 0x60) = in_stack_00000048;
                            if (*(iVar1 + 0x5f) == '\0') {
                                uVar12 = uVar12 & 0x80000007;
                                if (uVar12 < 0) {
                                    uVar12 = (uVar12 - 1 | 0xfffffff8) + 1;
                                }
                                if (uVar12 != 0) {
                                    return 0x8000000000000002;
                                }
                            }
                            iVar7 = fcn.0001ac5c(arg1 + 0x88,*arg2);
                            *arg2 = iVar7;
                            if (iVar7 == 0) {
                                return 0x8000000000000002;
                            }
                            iVar7 = *(iVar7 + 0x20);
                            *piVar3 = iVar7;
                            uVar10 = *(iVar7 + 4);
                            if (uVar10 != 0) {
                                if (*arg4 != 0) {
                                    (**(*0x25e20 + 0x48))();
                                }
                                iVar7 = fcn.0001fa44();
                                *arg4 = iVar7;
                                if (iVar7 == 0) {
                                    return 0x8000000000000002;
                                }
                                if (uVar10 != 0) {
                                    fcn.00023ca8(*arg2,0x28,uVar10,iVar7);
                                }
                            }
                            iVar7 = *piVar3 + 6;
                            cVar4 = fcn.0001c9c4(arg1,*arg2,iVar7,*arg4,in_stack_00000040,in_stack_ffffffffffffffc0
                                                 ,in_stack_ffffffffffffffc8,
                                                 CONCAT17(cVar16,in_stack_ffffffffffffffd0),unaff_R15D,unaff_R14,
                                                 unaff_R13);
                            if (cVar4 == '\0') {
                                return 0x8000000000000002;
                            }
                        }
                        fcn.00023bec(*arg2,*in_stack_00000030 + 0x28,CONCAT71(iVar7 >> 8,1));
                        return 0;
                    }
                    return 0x8000000000000002;
                }
                uVar9 = uVar11 + cVar4;
                uVar11 = uVar9;
            } while (uVar9 < uVar14);
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001c194 @ 0x1c194 */

ulong fcn.0001c194(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    ulong *puVar4;
    int64_t iVar5;
    ulong *puVar6;
    
    puVar1 = arg1 + 0x38;
    iVar5 = 0;
    for (puVar4 = *puVar1; puVar4 != puVar1; puVar4 = *puVar4) {
        if (*(puVar4 + 0x2c) != '\0') {
            iVar2 = fcn.0001bfc4(arg1,arg2,arg3,puVar4 - 8);
            iVar5 = iVar5 + iVar2;
        }
    }
    fcn.000233c8(arg3);
    if (iVar5 == 0) {
        uVar3 = 0x800000000000000e;
    }
    else {
        for (puVar4 = *puVar1; puVar4 != puVar1; puVar4 = *puVar4) {
            if (*(puVar4 + 0x2c) != '\0') {
                for (puVar6 = puVar4[0x12]; puVar6 != puVar4 + 0x12; puVar6 = *puVar6) {
                    fcn.0001bdc0(puVar6 + -0x22);
                }
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001d324 @ 0x1d324 */

ulong fcn.0001d324(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint8_t auStackX_18 [8];
    char acStack_38 [48];
    
    uVar3 = 0;
    if (3 < *(arg3 + 0x84)) {
        fcn.00023ca8(arg3,0,4,auStackX_18);
        uVar1 = fcn.00023ec8(arg2 + 8,arg2 + 0x18,CONCAT71(uVar3 >> 8,0x3a),*(arg3 + 0x84));
        uVar2 = fcn.00023e50(arg3);
        uVar4 = uVar2 + uVar1;
        if ((uVar4 & 0xffff0000) != 0) {
            uVar4 = (uVar4 & 0xffff) + 1;
        }
        if (uVar4 == -1) {
            if (0x7f < auStackX_18[0]) {
                uVar3 = fcn.0001d208(arg1,arg2,arg3);
                return uVar3;
            }
            if (0x2f < *(arg3 + 0x84)) {
                uVar3 = 0;
                fcn.00023ca8(arg3,0,0x30,acStack_38);
                if (acStack_38[0] == '\x02') {
                    uVar3 = fcn.0001d108(arg1,uVar3,arg3);
                    return uVar3;
                }
                *(arg3 + 0x50) = 0x8000000000000016;
                uVar3 = fcn.0001c194(arg1,arg2,arg3);
                return uVar3;
            }
        }
    }
    fcn.000233c8(arg3);
    return 0x8000000000000002;
}


/* fcn.0001bae8 @ 0x1bae8 */

int64_t fcn.0001bae8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    iVar1 = fcn.0001fa44(arg1,((*(arg2 + 0x80) - 1) + 6) * 0x10);
    if (iVar1 != 0) {
        *iVar1 = iVar1;
        *(iVar1 + 8) = iVar1;
        *(iVar1 + 0x10) = arg1;
        *(iVar1 + 0x18) = arg2;
        fcn.00010280(iVar1 + 0x20,0x10);
        iVar2 = (**(*0x25e20 + 0x50))(0x200,0x10,0x1ba48,iVar1,iVar1 + 0x30);
        if (-1 < iVar2) {
            *(iVar1 + 0x38) = 0x28;
            iVar2 = *(arg2 + 0x20);
            *(iVar2 + 2) = *(iVar2 + 2) << 8 | *(iVar2 + 2) >> 8;
            *(iVar2 + 4) = *(iVar2 + 4) << 8 | *(iVar2 + 4) >> 8;
            *(iVar1 + 0x40) = iVar2;
            *(iVar1 + 0x48) = *(arg2 + 0x84);
            *(iVar1 + 0x4c) = *(arg2 + 0x80);
            fcn.00023970(arg2,iVar1 + 0x50,iVar1 + 0x4c);
            return iVar1;
        }
        (**(*0x25e20 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.0001bbd8 @ 0x1bbd8 */

bool fcn.0001bbd8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    bool bVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    uint64_t uVar8;
    uint32_t in_stack_ffffffffffffffb0;
    uint8_t in_stack_ffffffffffffffb8;
    unkbyte7 in_stack_ffffffffffffffb9;
    uint in_stack_ffffffffffffffc0;
    ushort in_stack_ffffffffffffffc4;
    ushort in_stack_ffffffffffffffc6;
    uint32_t in_stack_ffffffffffffffc8;
    int64_t in_stack_ffffffffffffffd0;
    int64_t in_stack_ffffffffffffffd8;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = 0;
    if (*(iVar5 + 0x158) == -1) {
code_r0x0001bc07:
        bVar2 = false;
    }
    else {
        if (*(iVar5 + 0x12f) == '\0') {
            iVar3 = fcn.00023488(arg3,0,0);
            cVar1 = fcn.0001c9c4(*(iVar5 + 0x60),arg3,arg2 + 6,iVar3,0,in_stack_ffffffffffffffb0,
                                 CONCAT71(in_stack_ffffffffffffffb9,in_stack_ffffffffffffffb8),
                                 CONCAT26(in_stack_ffffffffffffffc6,
                                          CONCAT24(in_stack_ffffffffffffffc4,in_stack_ffffffffffffffc0)),
                                 in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,in_stack_ffffffffffffffd8);
            if (cVar1 == '\0') goto code_r0x0001bc07;
            if (pe_dos_header == 0x3a) {
                if (*(iVar5 + 0x12d) == '\0') {
                    if ((*(iVar5 + 300) != ':') &&
                       (fcn.00023ca8(arg3,0,0x30,&stack0xffffffffffffffb8), in_stack_ffffffffffffffb8 < 0x80)) {
                        if (*(iVar5 + 0x12e) != '\0') {
                            iVar3 = fcn.00023488(arg3,0x30,0);
                            cVar1 = fcn.0001c9c4(0,0,&stack0xffffffffffffffc6,iVar3,0,in_stack_ffffffffffffffb0,
                                                 CONCAT71(in_stack_ffffffffffffffb9,in_stack_ffffffffffffffb8),
                                                 CONCAT26(in_stack_ffffffffffffffc6,
                                                          CONCAT24(in_stack_ffffffffffffffc4,in_stack_ffffffffffffffc0)
                                                         ),in_stack_ffffffffffffffc8,in_stack_ffffffffffffffd0,
                                                 in_stack_ffffffffffffffd8);
                            if (cVar1 != '\0') goto code_r0x0001bd25;
                        }
                        goto code_r0x0001bc07;
                    }
                    goto code_r0x0001bd25;
                }
            }
            else {
code_r0x0001bd25:
                if ((*(iVar5 + 0x12d) == '\0') && (pe_dos_header != *(iVar5 + 300))) goto code_r0x0001bc07;
            }
            if (*(arg3 + 0x3c) == 3) {
                uVar6 = 0;
                do {
                    if (*(uVar6 + 0x140 + iVar5) != '\0') {
                        uVar7 = 0;
                        if (*(iVar5 + 0x128) == 0) goto code_r0x0001bdb2;
                        goto code_r0x0001bd83;
                    }
                    uVar4 = uVar6 + 1;
                    uVar6 = uVar4;
                } while (uVar4 < 0x10);
            }
        }
        bVar2 = true;
    }
    return bVar2;
    while( true ) {
        uVar7 = uVar7 + 1;
        uVar8 = uVar7;
        if (*(iVar5 + 0x128) <= uVar7) break;
code_r0x0001bd83:
        uVar7 = uVar8;
        iVar3 = uVar8 * 0x10 + *(iVar5 + 0x120);
        if ((iVar3 == arg2 + 0x18) || (iVar3 = fcn.000102e0(iVar3,arg2 + 0x18,0x10), iVar3 == 0)) break;
    }
code_r0x0001bdb2:
    return uVar7 < *(iVar5 + 0x128);
}


/* fcn.0001bfc4 @ 0x1bfc4 */

int64_t fcn.0001bfc4(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint uVar4;
    ulong *puVar5;
    char cVar6;
    uint uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint *puVar10;
    int64_t iVar11;
    int64_t iVar12;
    uint in_R9;
    int64_t *piVar13;
    
    uVar7 = 1;
    if (*(CONCAT44(in_R9,arg4) + 0xa8) == '\0') {
        uVar7 = *(arg3 + 0x3c);
    }
    uVar4 = *(arg3 + 0x3c);
    piVar3 = CONCAT44(in_R9,arg4) + 0x98;
    *(arg3 + 0x3c) = uVar7;
    iVar11 = 0;
    piVar13 = *piVar3;
    iVar12 = iVar11;
    if (piVar13 != piVar3) {
        do {
            if (piVar13[-0x17] == 1) {
                cVar6 = fcn.0001bbd8(piVar13 - 0x110,arg2,arg3);
                if (cVar6 == '\0') {
                    iVar8 = -0x7ffffffffffffffe;
                }
                else {
                    uVar9 = *(arg3 + 0x80) - 1;
                    puVar10 = fcn.0001fa44(uVar9 * 5,uVar9 * 0x28 + 0xb0);
                    if (puVar10 == NULL) {
                        iVar8 = -0x7ffffffffffffff7;
                    }
                    else {
                        *puVar10 = 0x6675626e;
                        piVar1 = puVar10 + 4;
                        *(puVar10 + 2) = 1;
                        *piVar1 = piVar1;
                        *(puVar10 + 6) = piVar1;
                        *(puVar10 + 8) = *(arg3 + 0x20);
                        *(puVar10 + 10) = *(arg3 + 0x28);
                        if (puVar10 + 0xe != arg3 + 0x38) {
                            fcn.000102a0(puVar10 + 0xe,arg3 + 0x38,0x40);
                        }
                        piVar2 = *(arg3 + 0x78) + 8;
                        *piVar2 = *piVar2 + 1;
                        *(puVar10 + 0x1e) = *(arg3 + 0x78);
                        puVar10[0x20] = *(arg3 + 0x80);
                        puVar10[0x21] = *(arg3 + 0x84);
                        if ((*(arg3 + 0x80) * 5 != 0) && (puVar10 + 0x22 != arg3 + 0x88)) {
                            fcn.000102a0(puVar10 + 0x22,arg3 + 0x88,*(arg3 + 0x80) * 0x28);
                        }
                        puVar10[0x13] = (piVar13[9] + 999999U) / 1000000;
                        *piVar1 = piVar13 + -8;
                        puVar5 = piVar13[-7];
                        *(puVar10 + 6) = puVar5;
                        *puVar5 = piVar1;
                        iVar8 = 0;
                        piVar13[-7] = piVar1;
                    }
                }
            }
            else {
                iVar8 = -0x7fffffffffffffed;
            }
            piVar13 = *piVar13;
            iVar11 = iVar12 + 1;
            if (iVar8 != 0) {
                iVar11 = iVar12;
            }
            iVar12 = iVar11;
        } while (piVar13 != piVar3);
    }
    *(arg3 + 0x3c) = uVar4;
    return iVar11;
}


/* fcn.0001c87c @ 0x1c87c */

ulong fcn.0001c87c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint64_t noname_2;
    int64_t iVar3;
    uint8_t uVar4;
    
    uVar4 = 0;
    if (arg4 != 0) {
        do {
            noname_2 = uVar4;
            uVar1 = *(noname_2 + arg3);
            if (uVar1 == 0) {
                uVar4 = uVar4 + 1;
            }
            else if (uVar1 == 1) {
                uVar4 = uVar4 + *(noname_2 + 1 + arg3) + '\x02';
            }
            else if (uVar1 == 5) {
                uVar4 = uVar4 + 4;
            }
            else {
                uVar2 = uVar1 & 0xc0;
                if ((uVar1 & 0xc0) == 0) {
                    uVar4 = uVar4 + *(noname_2 + 1 + arg3);
                }
                else {
                    if (uVar2 == 0x40) {
                        return 0;
                    }
                    if (uVar2 == 0x80) {
                        iVar3 = *(arg2 + 0x20);
code_r0x0001c906:
                        fcn.0001d54c(arg1,arg2,noname_2,iVar3 + 8);
                        return 0;
                    }
                    if (uVar2 == 0xc0) {
                        iVar3 = *(arg2 + 0x20);
                        if (*(iVar3 + 0x18) == -1) {
                            return 0;
                        }
                        goto code_r0x0001c906;
                    }
                }
            }
        } while (uVar4 < arg4);
    }
    return 1;
}


/* fcn.0001aa9c @ 0x1aa9c */

ulong fcn.0001aa9c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *arg1_00;
    char cVar1;
    int64_t iVar2;
    ulong uVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    uchar auStack_28 [8];
    char acStack_20 [24];
    
    uVar3 = 0x8000000000000002;
    uVar5 = 0;
    do {
        if (*(uVar5 + 8 + arg2) != '\0') {
            cVar1 = fcn.000229a8(arg2 + 8);
            if (cVar1 == '\0') goto code_r0x0001ab4c;
            break;
        }
        uVar4 = uVar5 + 1;
        uVar5 = uVar4;
    } while (uVar4 < 0x10);
    if ((((*(arg2 + 7) == '\x01') && (arg1_00 = arg2 + 0x18, *arg1_00 == -1)) &&
        ((fcn.00023ca8(arg3,0,0x18,auStack_28), arg1_00 == acStack_20 ||
         (iVar2 = fcn.000102e0(arg1_00,acStack_20,0x10), iVar2 == 0)))) &&
       (iVar2 = fcn.00019fa8(arg1,acStack_20), iVar2 != 0)) {
        if (*(iVar2 + 0x2c) == '\0') {
            *(iVar2 + 0x28) = 0;
        }
        uVar3 = 0;
    }
code_r0x0001ab4c:
    fcn.000233c8(arg3);
    return uVar3;
}


/* fcn.00016218 @ 0x16218 */

ulong fcn.00016218(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *arg2_00;
    uint32_t *arg2_01;
    uint8_t uVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t *piVar9;
    int iVar10;
    char *pcVar11;
    ulong uVar12;
    uint16_t uVar13;
    char *pcVar14;
    uint32_t arg2_02;
    char acStack_58 [32];
    
    iVar6 = 0;
    uVar12 = 0x8000000000000002;
    iVar5 = fcn.00023488(arg3,0,0);
    if (((iVar5 == 0) || (*(arg2 + 7) != -1)) || (*(iVar5 + 1) != iVar6)) goto code_r0x0001654c;
    arg2_02 = iVar6 + 0x28;
    uVar13 = arg2_02;
    if (*(arg2 + 4) < uVar13) goto code_r0x0001654c;
    puVar1 = arg2 + 8;
    cVar4 = fcn.000229a8(puVar1);
    if (cVar4 == '\0') goto code_r0x0001654c;
    puVar2 = arg2 + 0x18;
    cVar4 = fcn.0001c74c(arg1,puVar2,iVar6,0);
    if (cVar4 == '\0') goto code_r0x0001654c;
    uVar13 = *(arg2 + 4) - uVar13;
    if (uVar13 != 0) {
        iVar6 = fcn.00023488(arg3,arg2_02,0);
        cVar4 = fcn.0001c940(iVar6,uVar13);
        if (cVar4 == '\0') goto code_r0x0001654c;
    }
    arg2_00 = iVar5 + 8;
    arg2_01 = iVar5 + 0x18;
    if (*arg2_01 == -1) goto code_r0x0001654c;
    if (arg2_00 == arg2_01) {
        iVar6 = 0;
    }
    else {
        iVar6 = fcn.000102e0(arg2_00,arg2_01,0x10);
    }
    cVar4 = fcn.000229a8(arg2_00);
    if ((cVar4 == '\0') && (iVar6 != 0)) goto code_r0x0001654c;
    pcVar14 = iVar5 + 0x28;
    pcVar11 = NULL;
    for (iVar10 = *(arg3 + 0x84) + -0x28; 0 < iVar10; iVar10 = iVar10 - uVar3 * 8) {
        uVar3 = pcVar14[1];
        if (*pcVar14 == '\x02') {
            pcVar11 = pcVar14;
            if (uVar3 != 1) goto code_r0x0001654c;
        }
        else if (uVar3 == 0) goto code_r0x0001654c;
        pcVar14 = pcVar14 + uVar3 * 8;
    }
    if (iVar10 != 0) goto code_r0x0001654c;
    iVar5 = fcn.00012744(*(arg1 + 0x50),arg2_01,puVar2);
    if (iVar5 == 0) {
        iVar5 = fcn.0001262c(*(arg1 + 0x50),arg2_01);
        if ((iVar5 != 0) || (iVar5 = fcn.0001259c(arg2_01,0,0), iVar5 != 0)) {
            if (iVar6 == 0) {
                *(iVar5 + 0x18) = 1;
            }
            piVar8 = fcn.000126a0(arg2_01,puVar2,arg2_00,iVar5);
            if (piVar8 != NULL) {
                piVar9 = ((*puVar2 ^ *arg2_01) % 0x1f + 0x82) * 0x10 + *(arg1 + 0x50);
                iVar5 = *piVar9;
                *piVar8 = iVar5;
                piVar8[1] = piVar9;
                *(iVar5 + 8) = piVar8;
                *piVar9 = piVar8;
                goto code_r0x00016476;
            }
        }
        uVar12 = 0x8000000000000009;
        goto code_r0x0001654c;
    }
    puVar2 = iVar5 + 0x40;
    if ((puVar2 != puVar1) && (iVar7 = fcn.000102e0(puVar2,puVar1,0x10), iVar7 != 0)) goto code_r0x0001654c;
    if (puVar2 != arg2_00) {
        fcn.000102a0(puVar2,arg2_00,0x10);
    }
    if (iVar6 == 0) {
        puVar1 = *(iVar5 + 0x18) + 0x18;
        *puVar1 = *puVar1 | 1;
    }
code_r0x00016476:
    iVar5 = fcn.000149f4(arg1,arg2_00);
    if (pcVar11 == NULL) {
code_r0x0001653c:
        if ((iVar5 != 0) && (iVar6 != 0)) {
            *(iVar5 + 0x28) = 1;
        }
    }
    else {
        if (iVar5 != 0) {
            pcVar14 = iVar5 + 0x3b;
            pcVar11 = pcVar11 + 2;
            if (pcVar11 == pcVar14) {
                iVar7 = 0;
            }
            else {
                iVar7 = fcn.000102e0(pcVar11,pcVar14,6);
            }
            if ((*(iVar5 + 0x5c) == 0) || (iVar7 != 0)) {
                if (pcVar14 != pcVar11) {
                    fcn.000102a0(pcVar14,pcVar11,6);
                }
                *(iVar5 + 100) = 0xffffffff;
                iVar10 = *(iVar5 + 0x5c);
                *(iVar5 + 0x5c) = 2;
                if (iVar10 == 0) {
                    (**(iVar5 + 0x80))(iVar5);
                }
            }
            goto code_r0x0001653c;
        }
        fcn.00010280(acStack_58,0x20);
        pcVar11 = pcVar11 + 2;
        if (acStack_58 != pcVar11) {
            fcn.000102a0(acStack_58,pcVar11,6);
        }
        iVar5 = fcn.00014900(arg1,pcVar11,arg2_00,acStack_58);
        if (iVar5 != 0) {
            *(iVar5 + 100) = 0xffffffff;
            *(iVar5 + 0x5c) = 2;
            goto code_r0x0001653c;
        }
    }
    uVar12 = 0;
code_r0x0001654c:
    fcn.000233c8(arg3);
    return uVar12;
}


/* fcn.00015904 @ 0x15904 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h

ulong fcn.00015904(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    char cVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint16_t uVar9;
    ulong uVar10;
    uchar uStackX_10;
    unkbyte7 StackX_11;
    int64_t iStackX_18;
    uint32_t uStackX_20;
    int64_t var_48h;
    uint32_t var_58h;
    char acStack_58 [2];
    uchar auStack_56 [6];
    uchar uStack_50;
    char cStack_4f;
    uint32_t uStack_4c;
    uint32_t auStack_48 [3];
    uint8_t uStack_39;
    int64_t var_bp_18h;
    uint32_t var_10h;
    
    iStackX_18 = arg3;
    fcn.00023ca8(arg3,0,8,&uStack_50);
    fcn.00023ca8(arg3,8,0x10,auStack_48);
    uVar10 = 0x8000000000000002;
    if (((*(arg2 + 7) != -1) || (cStack_4f != '\0')) || (auStack_48[0] == -1)) goto code_r0x00015bf4;
    uVar7 = 0;
    do {
        if (*(auStack_48 + uVar7) != '\0') goto code_r0x0001599d;
        uVar6 = uVar7 + 1;
        uVar7 = uVar6;
    } while (uVar6 < 0xf);
    if (*(auStack_48 + uVar6) < 2) goto code_r0x00015bf4;
code_r0x0001599d:
    if (*(arg2 + 4) < 0x18) goto code_r0x00015bf4;
    uVar9 = *(arg2 + 4) - 0x18;
    if (uVar9 != 0) {
        iVar3 = fcn.00023488(arg3,0x18,0);
        cVar2 = fcn.0001c940(iVar3,uVar9);
        if (cVar2 == '\0') goto code_r0x00015bf4;
    }
    uVar8 = uStack_4c & 0x40;
    if ((*(arg2 + 0x18) == -1) && (uVar8 != 0)) goto code_r0x00015bf4;
    iVar3 = fcn.00015048(arg1,auStack_48,&uStackX_10);
    if (iVar3 != 0) {
        fcn.000233c8(arg3);
        fcn.00014dc4(0,CONCAT71(StackX_11,uStackX_10),iVar3);
        return 0x8000000000000016;
    }
    iVar3 = fcn.000149f4(arg1,auStack_48);
    if (iVar3 == 0) goto code_r0x00015bf4;
    uStackX_20 = uStack_4c & 0x80;
    uStackX_10 = uStackX_20 != 0;
    bVar1 = false;
    if (7 < uVar9) {
        fcn.00023ca8(iStackX_18,0x18,8,acStack_58);
        bVar1 = false;
        if (acStack_58[0] == '\x02') {
            bVar1 = true;
        }
    }
    iVar4 = 0;
    if ((bVar1) && (iVar3 + 0x3b != auStack_56)) {
        iVar4 = fcn.000102e0(iVar3 + 0x3b,auStack_56,6);
    }
    if (((*(iVar3 + 0x28) == '\0') && (uStackX_20 != 0)) && (iVar5 = fcn.00014d68(arg1,auStack_48), iVar5 != 0)) {
        *(iVar5 + 0x30) = iVar3;
    }
    if (*(iVar3 + 0x5c) == 0) {
        if (bVar1) {
            if (iVar3 + 0x3b != auStack_56) {
                fcn.000102a0(iVar3 + 0x3b,auStack_56,6);
            }
            if (uVar8 == 0) {
                *(iVar3 + 100) = 0xffffffff;
                *(iVar3 + 0x5c) = 2;
                (**(iVar3 + 0x80))(iVar3);
            }
            else {
                *(iVar3 + 0x5c) = 1;
                *(iVar3 + 100) = (*(arg1 + 0x8b0) + 99U) / 100;
            }
code_r0x00015bd8:
            *(iVar3 + 0x28) = uStackX_10;
code_r0x00015bde:
            if (*(iVar3 + 0x5c) == 1) {
                (**(iVar3 + 0x80))(iVar3);
            }
            goto code_r0x00015bed;
        }
    }
    else {
        if ((uStack_4c & 0x20) != 0) {
            if ((iVar4 != 0) && (iVar3 + 0x3b != auStack_56)) {
                fcn.000102a0(iVar3 + 0x3b,auStack_56,6);
            }
code_r0x00015b7b:
            if (uVar8 == 0) {
                if (iVar4 != 0) {
                    *(iVar3 + 100) = 0xffffffff;
                    *(iVar3 + 0x5c) = 2;
                }
            }
            else {
                *(iVar3 + 0x5c) = 1;
                *(iVar3 + 100) = (*(arg1 + 0x8b0) + 99U) / 100;
            }
            if (((*(iVar3 + 0x28) != '\0') && (uStackX_20 == 0)) &&
               (iVar4 = fcn.00014d68(arg1,auStack_48), iVar4 != 0)) {
                fcn.00014d00(arg1,iVar4);
            }
            goto code_r0x00015bd8;
        }
        if (iVar4 == 0) goto code_r0x00015b7b;
        if (*(iVar3 + 0x5c) == 1) {
            *(iVar3 + 100) = 0xffffffff;
            *(iVar3 + 0x5c) = 2;
            goto code_r0x00015bde;
        }
code_r0x00015bed:
        uVar10 = 0;
    }
    arg3 = iStackX_18;
code_r0x00015bf4:
    fcn.000233c8(arg3);
    return uVar10;
}


/* fcn.000155b4 @ 0x155b4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

uint64_t fcn.000155b4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg1_00;
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint32_t *arg2_00;
    uint64_t uVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    char cVar10;
    char acStack_78 [2];
    uchar auStack_76 [6];
    int64_t aiStack_70 [2];
    uchar uStack_60;
    char cStack_5f;
    uint32_t auStack_58 [3];
    uint8_t auStack_49 [9];
    int64_t var_38h;
    int64_t var_28h;
    uint32_t var_20h;
    int64_t var_bp_10h;
    
    fcn.00023ca8(arg3,0,8,&uStack_60);
    fcn.00023ca8(arg3,8,0x10,auStack_58);
    uVar9 = 0x8000000000000002;
    if (*(arg2 + 7) != -1) goto code_r0x000158dc;
    uVar7 = 0;
    if ((cStack_5f != '\0') || (auStack_58[0] == -1)) goto code_r0x000158dc;
    uVar4 = uVar7;
    do {
        if (*(auStack_58 + uVar4) != '\0') goto code_r0x00015653;
        uVar6 = uVar4 + 1;
        uVar4 = uVar6;
    } while (uVar6 < 0xf);
    if (*(auStack_58 + uVar6) < 2) goto code_r0x000158dc;
code_r0x00015653:
    if (*(arg2 + 4) < 0x18) goto code_r0x000158dc;
    uVar8 = *(arg2 + 4) - 0x18;
    if (uVar8 != 0) {
        iVar2 = fcn.00023488(arg3,0x18,0);
        cVar1 = fcn.0001c940(iVar2,uVar8);
        if (cVar1 == '\0') goto code_r0x000158dc;
    }
    uVar4 = uVar7;
    do {
        if (*(uVar4 + 8 + arg2) != '\0') {
            uVar4 = uVar7;
            goto code_r0x000156a7;
        }
        uVar6 = uVar4 + 1;
        uVar4 = uVar6;
    } while (uVar6 < 0x10);
    uVar4 = 1;
code_r0x000156a7:
    arg1_00 = arg2 + 0x18;
    fcn.0001c554(arg1_00,aiStack_70);
    if (aiStack_70 == arg1_00) {
        uVar3 = uVar7;
    }
    else {
        uVar3 = fcn.000102e0(aiStack_70,arg1_00,0xd);
    }
    cVar1 = fcn.0001c74c(arg1,auStack_58,aiStack_70,0);
    cVar10 = uVar4;
    uVar4 = uVar7;
    if ((7 < uVar8) && (fcn.00023ca8(arg3,0x18,8,acStack_78), acStack_78[0] == '\x01')) {
        if (cVar10 != '\0') goto code_r0x000158dc;
        uVar4 = 1;
    }
    if (cVar10 == '\0') {
        if (cVar1 == '\0') goto code_r0x000158dc;
        if (uVar3 != 0) {
            if (cVar1 == '\0') goto code_r0x000158dc;
            goto code_r0x0001574f;
        }
    }
    else {
        if (uVar3 != 0) goto code_r0x000158dc;
code_r0x0001574f:
        if ((cVar10 != '\0') && (cVar1 == '\0')) {
            iVar2 = fcn.00015048(arg1,auStack_58,aiStack_70);
            if (iVar2 != 0) {
                if (*(arg1 + 0x80) != 0) {
                    iVar5 = *(*(arg1 + 0x80) + 0x38);
                    if (iVar5 != 0) {
                        if ((*(arg1 + 0x948) == 0) || (iVar5 == arg1 + 0xb6c)) {
                            uVar9 = uVar7;
                        }
                        else {
                            uVar9 = fcn.000102e0(iVar5,arg1 + 0xb6c,*(arg1 + 0x948));
                        }
                        if (uVar9 == 0) {
                            *(iVar2 + 0x20) = *(iVar2 + 0x20) + 1;
                            uVar9 = uVar7;
                        }
                        else {
                            fcn.00014dc4(0,aiStack_70[0],iVar2);
                            uVar9 = 0x8000000000000016;
                        }
                    }
                }
            }
            goto code_r0x000158dc;
        }
    }
    if (uVar4 != '\0') {
        arg2_00 = arg2 + 8;
        iVar2 = fcn.000149f4(arg1,arg2_00);
        if (iVar2 == 0) {
            iVar2 = fcn.00014900(arg1,arg2_00,arg2 + 8,0);
            if (iVar2 == 0) {
                uVar9 = 0x8000000000000009;
                goto code_r0x000158dc;
            }
        }
        else if ((iVar2 + 0x3b == auStack_76) || (iVar5 = fcn.000102e0(iVar2 + 0x3b,auStack_76,6), iVar5 == 0))
        goto code_r0x00015880;
        *(iVar2 + 100) = 0xffffffff;
        *(iVar2 + 0x5c) = 2;
        if (iVar2 + 0x3b != auStack_76) {
            fcn.000102a0(iVar2 + 0x3b,auStack_76,6);
        }
        (**(iVar2 + 0x80))();
    }
code_r0x00015880:
    if ((cVar10 == '\0') || (cVar1 == '\0')) {
        if (auStack_49 + 1 != arg2 + 8) {
            fcn.000102a0(auStack_49 + 1,arg2 + 8,0x10);
        }
    }
    else {
        fcn.0001c370(0,auStack_49 + 1);
    }
    uVar9 = fcn.000151f4(arg1,auStack_58,auStack_49 + 1,auStack_58);
code_r0x000158dc:
    fcn.000233c8(arg3);
    return uVar9;
}


/* fcn.00015c18 @ 0x15c18 */

//WARNING: Variable defined which should be unmapped: var_1fh
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h
//WARNING: Variable defined which should be unmapped: var_21h
//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

int64_t fcn.00015c18(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *arg2_00;
    int iVar1;
    char cVar2;
    char cVar3;
    int64_t iVar4;
    uint32_t *arg2_01;
    ulong uVar5;
    uint64_t uVar6;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar uVar7;
    uint32_t *puVar8;
    uint64_t uVar9;
    int64_t iVar10;
    uchar *puVar11;
    int64_t iVar12;
    uint32_t arg2_02;
    uint8_t uVar13;
    uint16_t uVar14;
    char acStackX_8 [8];
    uchar auStackX_10 [7];
    int64_t var_1fh;
    uint8_t auStackX_20 [8];
    int64_t var_67h;
    int64_t var_7fh;
    uint16_t auStack_b8 [4];
    uchar auStack_b0 [2];
    uint8_t uStack_ae;
    uint8_t uStack_ad;
    uint32_t uStack_ac;
    uint32_t uStack_a8;
    uchar auStack_a0 [16];
    uint uStack_90;
    int iStack_8c;
    int aiStack_88 [2];
    uchar uStack_80;
    char cStack_7f;
    uint uStack_7c;
    uchar uStack_78;
    uint8_t uStack_77;
    uchar auStack_76 [6];
    uint32_t auStack_70 [2];
    uchar auStack_68 [7];
    int64_t var_59h;
    int64_t var_51h;
    uint32_t var_49h;
    int64_t var_41h;
    uchar auStack_40 [7];
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_9h;
    int64_t var_1h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar12 = -0x7ffffffffffffffe;
    _auStackX_10 = arg2;
    if (*(arg1_00 + 0xc98) != 1) goto code_r0x000161f2;
    fcn.00023ca8(arg3,0,8,&uStack_80);
    arg2_00 = arg2 + 8;
    cVar2 = fcn.000229a8(arg2_00);
    if (((cVar2 == '\0') || (*(arg2 + 7) != -1)) || (uVar7 = 0, cStack_7f != '\0')) goto code_r0x000161f2;
    arg2_02 = 0x10;
    if (*(arg2 + 4) < 0x10) goto code_r0x000161f2;
    uVar14 = *(arg2 + 4) - 0x10;
    if (uVar14 != 0) {
        iVar4 = fcn.00023488(arg3,0x10,0);
        cVar2 = fcn.0001c940(iVar4,uVar14);
        if (cVar2 == '\0') goto code_r0x000161f2;
    }
    uVar14 = uStack_7c >> 0x10;
    uStack_90 = CONCAT22(uStack_7c << 8 | uStack_7c >> 8,uVar14 << 8 | uVar14 >> 8);
    fcn.000102a0(auStack_b8,&uStack_90,2);
    puVar8 = arg2_00;
    arg2_01 = fcn.00014d68(arg1_00,arg2_00);
    if (arg2_01 == NULL) {
        if (auStack_b8[0] != 0) {
            puVar8 = arg2_00;
            iVar12 = fcn.00014c20(arg1_00,arg2_00,auStack_b8[0]);
            if (iVar12 == 0) {
code_r0x00015d30:
                iVar12 = -0x7ffffffffffffff7;
                goto code_r0x000161f2;
            }
        }
    }
    else if (auStack_b8[0] == 0) {
        fcn.00014d00(arg1_00,arg2_01);
        puVar8 = arg2_01;
    }
    else {
        *(arg2_01 + 6) = auStack_b8[0];
        if (*(arg2_01 + 0xc) == 0) {
            puVar8 = arg2_00;
            uVar5 = fcn.000149f4(arg1_00,arg2_00);
            *(arg2_01 + 0xc) = uVar5;
        }
    }
    if (uStack_90._3_1_ != '\0') {
        *(arg1_00 + 0x8a4) = uStack_90._3_1_;
    }
    if (uStack_90._2_1_ < '\0') {
code_r0x00015d8b:
        fcn.00017150(arg1_00 + 0xbe8,CONCAT71(puVar8 >> 8,uVar7));
    }
    else if ((uStack_90 & 0x400000) != 0) {
        uVar7 = 1;
        goto code_r0x00015d8b;
    }
    fcn.00023ca8(arg3,8,4,aiStack_88);
    fcn.00023ca8(arg3,0xc,4,&iStack_8c);
    uVar14 = aiStack_88[0] >> 0x10;
    aiStack_88[0] = CONCAT22(aiStack_88[0] << 8 | aiStack_88[0] >> 8,uVar14 << 8 | uVar14 >> 8);
    uVar14 = iStack_8c >> 0x10;
    iStack_8c = CONCAT22(iStack_8c << 8 | iStack_8c >> 8,uVar14 << 8 | uVar14 >> 8);
    if ((aiStack_88[0] != 0) && (aiStack_88[0] != *(arg1_00 + 0x8ac))) {
        *(arg1_00 + 0x8ac) = aiStack_88[0];
        uVar6 = fcn.00022a6c();
        *(arg1_00 + 0x8b0) = (((uVar6 & 0xffffffff) / 0xffffffff) * 2 + 1) * *(arg1_00 + 0x8ac) >> 1;
    }
    if (iStack_8c != 0) {
        *(arg1_00 + 0x8b4) = iStack_8c;
    }
    iVar4 = fcn.000149f4(arg1_00,arg2_00);
    if (iVar4 != 0) {
        *(iVar4 + 0x28) = 1;
    }
    *(arg1_00 + 0x908) = 1;
    if (0x10 < *(_auStackX_10 + 4)) {
        do {
            iVar12 = 0;
            fcn.00023ca8(arg3,arg2_02,1,acStackX_8);
            if (acStackX_8[0] == '\x01') {
                fcn.00023ca8(arg3,arg2_02,8,&uStack_78);
                fcn.00010280(&var_59h + 1,0x20);
                puVar11 = auStack_76;
                fcn.000102a0(&var_59h + 1,puVar11,6);
                if (iVar4 == 0) {
                    iVar4 = fcn.00014900(arg1_00,puVar11,arg2_00,&var_59h + 1);
                    if (iVar4 == 0) goto code_r0x00015d30;
                    *(iVar4 + 0x28) = 1;
                    *(iVar4 + 0x5c) = 2;
                    *(iVar4 + 100) = 0xffffffff;
                }
                else {
                    iVar10 = iVar4 + 0x3b;
                    if (&var_59h + 1 != iVar10) {
                        iVar12 = fcn.000102e0(&var_59h + 1,iVar10,6);
                    }
                    if ((*(iVar4 + 0x5c) == 0) || (iVar12 != 0)) {
                        if (iVar10 != &var_59h + 1) {
                            fcn.000102a0(iVar10,&var_59h + 1,6);
                        }
                        *(iVar4 + 100) = 0xffffffff;
                        iVar1 = *(iVar4 + 0x5c);
                        *(iVar4 + 0x5c) = 2;
                        if (iVar1 == 0) {
                            (**(iVar4 + 0x80))(iVar4);
                        }
                    }
                }
                uVar13 = uStack_77;
code_r0x000161d8:
                arg2_02 = arg2_02 + uVar13 * 8;
            }
            else if (acStackX_8[0] == '\x03') {
                uVar6 = 0;
                fcn.00023ca8(arg3,arg2_02,0x20,auStack_b0);
                uVar14 = uStack_ac >> 0x10;
                uStack_ac = CONCAT22(uStack_ac << 8 | uStack_ac >> 8,uVar14 << 8 | uVar14 >> 8);
                uVar14 = uStack_a8 >> 0x10;
                uVar13 = uStack_ad >> 6;
                uStack_a8 = CONCAT22(uStack_a8 << 8 | uStack_a8 >> 8,uVar14 << 8 | uVar14 >> 8);
                uVar9 = uStack_a8;
                cVar2 = uStack_ad >> 7;
                if ((uStack_ae == 0x40) && (cVar3 = fcn.000229a8(auStack_a0), cVar3 != '\0')) {
                    arg2_02 = arg2_02 + 0x20;
                }
                else {
                    if (-cVar2 != '\0') {
                        uVar6 = CONCAT71(uVar6 >> 8,uStack_ae);
                        puVar11 = auStack_a0;
                        iVar10 = CONCAT71(uVar9 >> 8,1);
                        iVar12 = fcn.00014654(arg1_00,iVar10,uVar6,puVar11);
                        if (iVar12 == 0) {
                            uVar6 = uStack_ac;
                            if ((uStack_ac != 0) &&
                               (iVar12 = fcn.00014424(arg1_00,CONCAT71(iVar10 >> 8,1),uStack_ac,uStack_a8),
                               iVar12 == 0)) goto code_r0x00015d30;
                        }
                        else if (uStack_ac == 0) {
                            uVar6 = CONCAT71(uVar6 >> 8,-cVar2);
                            fcn.00014588(arg1_00,iVar12,uVar6,CONCAT71(puVar11 >> 8,1));
                        }
                        else {
                            *(iVar12 + 0x18) = uStack_ac;
                        }
                    }
                    if (((uVar13 & 1) != 0) && (uStack_a8 <= uStack_ac)) {
                        iVar12 = fcn.00014654(arg1_00,0,CONCAT71(uVar6 >> 8,uStack_ae),auStack_a0);
                        if (iVar12 == 0) {
                            if ((uStack_ac != 0) && (uStack_ae + *(arg1_00 + 0x8fc) * 8 == 0x80)) {
                                fcn.000102a0(auStack_70,auStack_a0,8);
                                if (auStack_68 != *(arg1_00 + 0x900)) {
                                    fcn.000102a0(auStack_68,*(arg1_00 + 0x900),8);
                                }
                                uVar5 = 0;
                                cVar2 = fcn.0001c74c(arg1,auStack_70,0,0);
                                if (((cVar2 == '\0') && (iVar12 = fcn.00015048(arg1_00,auStack_70,0), iVar12 == 0))
                                   && (iVar12 = fcn.0001940c(*(arg1_00 + 0x48),auStack_70,0,
                                                             CONCAT71(uVar5 >> 8,uStack_ae)), iVar12 < 0))
                                goto code_r0x000161f2;
                                iVar12 = fcn.00014424(arg1_00,0,uStack_ac,uStack_a8);
                                if (iVar12 == 0) goto code_r0x00015d30;
                            }
                        }
                        else {
                            *(iVar12 + 0x1c) = uStack_a8;
                            if ((uStack_ac < 0x1c21) && (uStack_ac <= *(iVar12 + 0x18))) {
                                if (0x1c20 < *(iVar12 + 0x18)) {
                                    *(iVar12 + 0x18) = 0x1c20;
                                }
                            }
                            else {
                                *(iVar12 + 0x18) = uStack_ac;
                            }
                        }
                    }
                    arg2_02 = arg2_02 + 0x20;
                }
            }
            else {
                if (acStackX_8[0] != '\x05') {
                    fcn.00023ca8(arg3,arg2_02 + 1,1,auStackX_20);
                    uVar13 = auStackX_20[0];
                    goto code_r0x000161d8;
                }
                fcn.00023ca8(arg3,arg2_02,8,auStack_40);
                arg2_02 = arg2_02 + 8;
            }
        } while (arg2_02 < *(_auStackX_10 + 4));
    }
    iVar12 = 0;
code_r0x000161f2:
    fcn.000233c8(arg3);
    return iVar12;
}


/* fcn.0001a94c @ 0x1a94c */

int64_t fcn.0001a94c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    char *arg1_00;
    ulong *arg4;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    char acStack_48 [16];
    int64_t var_30h;
    char acStack_30 [8];
    int64_t var_20h;
    int64_t var_bp_18h;
    
    iVar3 = -0x7ffffffffffffffe;
    uVar5 = 0;
    do {
        if (*(uVar5 + 8 + arg2) != '\0') {
            cVar1 = fcn.000229a8(arg2 + 8);
            if (cVar1 == '\0') goto code_r0x0001aa75;
            break;
        }
        uVar4 = uVar5 + 1;
        uVar5 = uVar4;
    } while (uVar4 < 0x10);
    if ((*(arg2 + 7) != '\x01') || (arg1_00 = arg2 + 0x18, *arg1_00 != -1)) goto code_r0x0001aa75;
    fcn.00023ca8(arg3,0,0x18,&var_30h);
    var_30h._4_2_ = var_30h._4_2_ << 8 | var_30h._4_2_ >> 8;
    fcn.0001c370(0,acStack_48);
    if ((arg1_00 == acStack_48) || (iVar2 = fcn.000102e0(arg1_00,acStack_48,0x10), iVar2 == 0)) {
        for (arg4 = *(arg1 + 0x880); arg4 != arg1 + 0x880; arg4 = *arg4) {
            iVar3 = fcn.0001a8d8(arg1,var_30h._4_2_,arg4 + 3,arg4);
            if (iVar3 < 0) goto code_r0x0001aa75;
        }
    }
    else {
        if ((arg1_00 != acStack_30) && (iVar2 = fcn.000102e0(arg1_00,acStack_30,0x10), iVar2 != 0))
        goto code_r0x0001aa75;
        iVar3 = fcn.00019fa8(arg1,acStack_30);
        if (iVar3 != 0) {
            iVar3 = fcn.0001a8d8(arg1,var_30h._4_2_,acStack_30,iVar3);
            goto code_r0x0001aa75;
        }
    }
    iVar3 = 0;
code_r0x0001aa75:
    fcn.000233c8(arg3);
    return iVar3;
}


/* fcn.0001cfb4 @ 0x1cfb4 */

ulong fcn.0001cfb4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t *arg2_00;
    char cVar1;
    int64_t arg4;
    uchar *puVar2;
    ulong uVar3;
    uchar auStack_48 [4];
    uint16_t uStack_44;
    uchar uStack_42;
    uchar uStack_41;
    uint32_t auStack_40 [4];
    uchar auStack_30 [24];
    
    uVar3 = 0x8000000000000009;
    arg4 = fcn.000233f4(arg3,arg2,0x78);
    if (arg4 != 0) {
        puVar2 = fcn.00023488(arg4,0,0);
        if (puVar2 == NULL) {
            fcn.000233c8(arg4);
        }
        else {
            *puVar2 = 0x81;
            *(puVar2 + 2) = 0;
            fcn.00010280(auStack_48,0x28);
            uStack_44 = *(arg3 + 0x84) << 8 | *(arg3 + 0x84) >> 8;
            uStack_41 = *(arg1 + 0x8a4);
            uStack_42 = 0x3a;
            if (auStack_30 != arg2 + 8) {
                fcn.000102a0(auStack_30,arg2 + 8,0x10);
            }
            arg2_00 = arg2 + 0x18;
            cVar1 = fcn.0001c74c(arg1,arg2_00,0,0);
            if ((cVar1 != '\0') && (auStack_40 != arg2_00)) {
                fcn.000102a0(auStack_40,arg2_00,0x10);
            }
            uVar3 = fcn.00011d14(arg1,0,0,arg4);
        }
    }
    fcn.000233c8(arg3);
    return uVar3;
}


/* fcn.0001d108 @ 0x1d108 */

ulong fcn.0001d108(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint32_t uVar5;
    ulong uVar6;
    uchar auStack_38 [32];
    uint32_t auStack_18 [4];
    
    fcn.00023ca8(arg2,0,0x30,auStack_38);
    uVar6 = 0;
    uVar5 = CONCAT22(auStack_38._4_4_ << 8 | auStack_38._4_4_ >> 8,
                     SUB42(auStack_38._4_4_,2) << 8 | SUB42(auStack_38._4_4_,2) >> 8);
    if (uVar5 < 0x500) {
        if (auStack_18[0] == -1) {
            piVar2 = fcn.0001259c(auStack_18,CONCAT71(uVar5 >> 8,0x80),0);
            if (piVar2 == NULL) {
                uVar6 = 0x8000000000000009;
            }
            else {
                *(piVar2 + 3) = 0x11;
                piVar4 = *(arg1 + 0x50) + 0x810;
                iVar3 = *piVar4;
                *piVar2 = iVar3;
                piVar2[1] = piVar4;
                *(iVar3 + 8) = piVar2;
                *piVar4 = piVar2;
                piVar1 = *(arg1 + 0x50) + 8;
                *piVar1 = *piVar1 + 1;
            }
        }
        else {
            iVar3 = fcn.0001262c(*(arg1 + 0x50),auStack_18);
            if (iVar3 == 0) {
                uVar6 = 0x800000000000000e;
            }
            else {
                *(iVar3 + 0x18) = *(iVar3 + 0x18) | 0x10;
                piVar2 = iVar3 + 0x10;
                *piVar2 = *piVar2 + -1;
                if (*piVar2 == 0) {
                    (**(*0x25e20 + 0x48))(iVar3);
                    uVar6 = 0;
                }
            }
        }
    }
    fcn.000233c8(arg2);
    return uVar6;
}


/* fcn.0001d208 @ 0x1d208 */

ulong fcn.0001d208(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    char cStackX_20;
    char cStackX_21;
    
    fcn.00023ca8(arg3,0,8,&cStackX_20);
    if (cStackX_20 == -0x80) {
        if (cStackX_21 != '\0') {
            return 0x8000000000000002;
        }
        uVar1 = fcn.0001cfb4(arg1,arg2,arg3);
    }
    else if (cStackX_20 == -0x7f) {
        uVar1 = fcn.0001c194(arg1,arg2,arg3);
    }
    else if (cStackX_20 == -0x7e) {
        uVar1 = fcn.0001a94c(arg1,arg2,arg3);
    }
    else {
        if (cStackX_20 != -0x7d) {
            if (cStackX_20 == -0x7a) {
                uVar1 = fcn.00015c18(arg1,arg2,arg3);
                return uVar1;
            }
            if (cStackX_20 == -0x79) {
                uVar1 = fcn.000155b4(arg1,arg2,arg3);
                return uVar1;
            }
            if (cStackX_20 == -0x78) {
                uVar1 = fcn.00015904(arg1,arg2,arg3);
                return uVar1;
            }
            if (cStackX_20 == -0x77) {
                uVar1 = fcn.00016218(arg1,arg2,arg3);
                return uVar1;
            }
            if (cStackX_20 != -0x71) {
                return 0x8000000000000002;
            }
        }
        uVar1 = fcn.0001aa9c(arg1,arg2,arg3);
    }
    return uVar1;
}


/* fcn.00022288 @ 0x22288 */

int64_t * fcn.00022288(ulong param_1)

{
    int64_t *piVar1;
    int64_t iVar2;
    
    piVar1 = fcn.0001fa44(param_1,0x18);
    if (piVar1 != NULL) {
        iVar2 = fcn.0001fa44();
        *piVar1 = iVar2;
        if (iVar2 != 0) {
            piVar1[2] = 0;
            piVar1[1] = 0x200;
            return piVar1;
        }
        (**(*0x25e20 + 0x48))(piVar1);
    }
    return NULL;
}


/* fcn.000223c8 @ 0x223c8 */

void fcn.000223c8(int64_t arg1)

{
    unkbyte7 in_R8;
    uchar auStack_28 [2];
    ulong uStack_26;
    ulong uStack_1e;
    
    fcn.00010280(auStack_28,0x12);
    uStack_26 = *0x240f0;
    uStack_1e = *0x240f8;
    fcn.00022368(arg1,auStack_28,CONCAT71(in_R8,0x5f),0x12);
    return;
}


/* fcn.00022368 @ 0x22368 */

int64_t fcn.00022368(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t arg1_00;
    char in_stack_00000028;
    
    *arg1 = arg2;
    uVar1 = in_stack_00000028 + arg3 & 0x7f;
    *(arg1 + 1) = uVar1;
    arg1_00 = fcn.0002230c(noname_0,uVar1);
    if ((arg3 != 0) && (arg1_00 != arg1)) {
        fcn.000102a0(arg1_00,arg1,arg3);
    }
    return arg1_00;
}


/* fcn.0002230c @ 0x2230c */

int64_t fcn.0002230c(int64_t arg1,int64_t arg2)

{
    uint64_t arg1_00;
    int64_t iVar1;
    ulong uVar2;
    
    arg1_00 = *(arg1 + 8);
    if (arg1_00 < *(arg1 + 0x10) + arg2) {
        uVar2 = fcn.0001fae0(arg1,arg1_00,arg2 + 0x200 + arg1_00,*arg1);
        *arg1 = uVar2;
        *(arg1 + 8) = *(arg1 + 8) + arg2 + 0x200;
    }
    iVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = iVar1 + arg2;
    return *arg1 + iVar1;
}


/* fcn.0001fae0 @ 0x1fae0 */

int64_t fcn.0001fae0(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001fa44(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.00010280(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.000102a0(arg1_00,arg3,arg2);
            }
            (**(*0x25e20 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.000222dc @ 0x222dc */

void fcn.000222dc(int64_t arg1)

{
    if (*arg1 != 0) {
        (**(*0x25e20 + 0x48))();
    }
    //WARNING: Could not recover jumptable at 0x00022306. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x25e20 + 0x48))(arg1);
    return;
}


/* fcn.0001d9fc @ 0x1d9fc */

ulong fcn.0001d9fc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t *in_stack_00000028;
    
    if (((arg3 == 0) || (arg4 == 0)) || (in_stack_00000028 == NULL)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        *arg2 = 0;
        *arg4 = 0;
        iVar1 = fcn.00022288();
        *arg2 = iVar1;
        if (iVar1 != 0) {
            iVar1 = fcn.00022288();
            *arg4 = iVar1;
            if ((iVar1 != 0) && (iVar1 = fcn.000223c8(*arg2), iVar1 != 0)) {
                iVar3 = *arg4;
                *(iVar1 + 0x12) = 0;
                *(iVar1 + 0x13) = arg1;
                iVar3 = fcn.000223c8(iVar3);
                if (iVar3 != 0) {
                    *(iVar3 + 0x12) = 0;
                    *(iVar3 + 0x13) = 0xffff;
                    *in_stack_00000028 = iVar3;
                    *arg3 = iVar1;
                    return 0;
                }
            }
            if (*arg2 != 0) {
                fcn.000222dc(*arg2);
            }
            if (*arg4 != 0) {
                fcn.000222dc(*arg4);
            }
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.0001d884 @ 0x1d884 */

void fcn.0001d884(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    int64_t iVar2;
    char16_t *pcVar3;
    uint64_t uVar4;
    uint32_t arg2_00;
    uint64_t uVar5;
    uint64_t uVar6;
    uchar auStack_28 [16];
    
    uVar6 = 0;
    bVar1 = false;
    uVar5 = uVar6;
    do {
        if (bVar1) {
code_r0x0001d908:
            if (*(uVar5 + arg1) != '\0') goto code_r0x0001d92d;
            iVar2 = fcn.0001fb70(arg2,0x50,0x256c0,*(uVar5 + 1 + arg1));
        }
        else {
            if (*(uVar5 + arg1) == '\0') {
                if (*(arg1 + 1 + uVar5) == '\0') {
                    if (uVar5 == 0) {
                        *arg2 = 0x3a003a;
                        iVar2 = 4;
                    }
                    else {
                        *arg2 = 0x3a;
                        iVar2 = 2;
                    }
                    arg2 = arg2 + iVar2;
                    for (; ((uVar5 < 0xf && (*(arg1 + uVar5) == '\0')) && (*(arg1 + 1 + uVar5) == '\0'));
                        uVar5 = uVar5 + 2) {
                    }
                    bVar1 = true;
                    if (uVar5 == 0x10) {
                        *arg2 = 0;
                        return;
                    }
                }
                goto code_r0x0001d908;
            }
code_r0x0001d92d:
            if (*(uVar5 + 1 + arg1) < 0x10) {
                pcVar3 = L"%x0%x:";
                uVar4 = uVar6;
                do {
                    pcVar3 = pcVar3 + 1;
                    uVar4 = uVar4 + 1;
                } while (*pcVar3 != L'\0');
                iVar2 = uVar4 * 2 + 2;
                if (iVar2 != 0) {
                    arg2_00 = 0x256c8;
code_r0x0001d989:
                    fcn.000102a0(auStack_28,arg2_00,iVar2);
                }
            }
            else {
                pcVar3 = L"%x%x:";
                uVar4 = uVar6;
                do {
                    pcVar3 = pcVar3 + 1;
                    uVar4 = uVar4 + 1;
                } while (*pcVar3 != L'\0');
                iVar2 = uVar4 * 2 + 2;
                if (iVar2 != 0) {
                    arg2_00 = 0x256d8;
                    goto code_r0x0001d989;
                }
            }
            iVar2 = fcn.0001fb70(arg2,0x50,auStack_28,*(uVar5 + arg1));
        }
        uVar5 = uVar5 + 2;
        arg2 = arg2 + iVar2 * 2;
        if ((uVar5 == 0x10) && (*arg2 = 0, *(arg2 + -2) == 0x3a)) {
            *(arg2 + -2) = 0;
        }
        if (0xe < uVar5) {
            return;
        }
    } while( true );
}


/* fcn.000217ec @ 0x217ec */

int16_t fcn.000217ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int16_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t aiStackX_10 [4];
    
    aiStackX_10[0] = arg2;
    pcVar4 = fcn.0002291c(arg1);
    if (pcVar4 == NULL) {
        iVar3 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffe;
        cVar2 = *pcVar4;
        arg1_00 = pcVar4;
        while (cVar2 != '\0') {
            pcVar6 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar6 == ';') break;
                    pcVar6 = pcVar6 + 1;
                } while (*pcVar6 != '\0');
                if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                    pcVar6 = pcVar6 + 1;
                }
            }
            iVar5 = 0;
            do {
                iVar8 = iVar5 + 1;
                pcVar1 = iVar5 + 0x25cd1;
                iVar5 = iVar8;
            } while (*pcVar1 != '\0');
            iVar5 = fcn.0001f344(arg1_00,0x25cd0,iVar8);
            if (iVar5 != 0) {
                if (aiStackX_10[0] == 0) {
                    iVar7 = (***0x25e38)(*0x25e38,arg1,aiStackX_10);
                }
                else {
                    iVar7 = (*(*0x25e38)[2])(*0x25e38,arg1);
                }
                if (iVar7 < 0) break;
            }
            arg1_00 = pcVar6;
            cVar2 = *pcVar6;
        }
        (**(*0x25e20 + 0x48))(pcVar4);
        iVar3 = 0;
        if (-1 < iVar7) {
            iVar3 = aiStackX_10[0];
        }
    }
    return iVar3;
}


/* fcn.000226e8 @ 0x226e8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.000226e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h)

{
    uint32_t uVar1;
    bool bVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    int64_t iVar7;
    uint32_t *arg1_00;
    uint32_t *arg1_01;
    int64_t unaff_R13;
    int64_t unaff_R14;
    uint32_t *arg1_02;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t auStackX_18 [2];
    int64_t iStackX_20;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint32_t *puStackY_58;
    uint32_t *puStackY_50;
    int64_t var_18h;
    int64_t var_10h;
    
    auStackX_18[0] = CONCAT22(auStackX_18[0]._2_2_,arg3);
    puVar5 = NULL;
    puStackY_58 = NULL;
    puVar6 = NULL;
    iStackX_20 = arg4;
    iVar3 = (**(*0x25e50 + 0x20))(*0x25e50,arg1,&puStackY_58,0);
    if (iVar3 != -0x7ffffffffffffffb) {
        return iVar3;
    }
    puVar4 = fcn.0001fa44(0x8000000000000005,puStackY_58);
    if (puVar4 == NULL) {
        return -0x7ffffffffffffff7;
    }
    arg1_01 = arg1;
    iVar3 = (**(*0x25e50 + 0x20))(*0x25e50,arg1,&puStackY_58,puVar4);
    if (-1 < iVar3) {
        puStackY_58 = puStackY_58 + *(arg4 + 0x10);
        puVar5 = fcn.0001fa74(puStackY_58);
        puStackY_50 = puVar5;
        if ((puVar5 == NULL) || (arg1_00 = puStackY_58, puVar6 = fcn.0001fa74(puStackY_58), puVar6 == NULL)) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            uVar9 = 0x14;
            if (puVar5 != puVar4) {
                arg1_00 = puVar5;
                arg1_01 = puVar4;
                fcn.000102a0(puVar5,puVar4,0x14);
            }
            iVar3 = iStackX_20;
            uVar1 = puVar4[4];
            arg1_02 = puVar5 + 5;
            bVar2 = false;
            if (0x14 < uVar1) {
                do {
                    puVar5 = uVar9 + puVar4;
                    if (auStackX_18 != puVar5) {
                        arg1_00 = auStackX_18;
                        arg1_01 = puVar5;
                        fcn.000102a0(arg1_00,puVar5,4);
                    }
                    uVar8 = uVar9 + (*puVar5 & 0xffffff);
                    uVar9 = uVar8;
                    if ((*(puVar5 + 3) == '\x02') &&
                       (iVar7 = fcn.00022420(arg1_00,arg1_01,puVar5,iVar3,unaff_R14,unaff_R13), -1 < iVar7)) {
                        bVar2 = true;
                        puVar5 = puVar6;
                    }
                    if (auStackX_18 != puVar5) {
                        arg1_00 = auStackX_18;
                        arg1_01 = puVar5;
                        fcn.000102a0(arg1_00,puVar5,4);
                    }
                    if (((auStackX_18[0] & 0xffffff) != 0) && (arg1_02 != puVar5)) {
                        arg1_00 = arg1_02;
                        fcn.000102a0(arg1_02,puVar5,auStackX_18[0] & 0xffffff);
                        arg1_01 = puVar5;
                    }
                    puVar5 = puStackY_50;
                    arg1_02 = arg1_02 + (auStackX_18[0] & 0xffffff);
                } while (uVar8 < uVar1);
                if (bVar2) {
                    puStackY_58 = arg1_02 - puStackY_50;
                    puStackY_50[4] = puStackY_58;
                    iVar3 = (**(*0x25e50 + 0x10))(*0x25e50,arg1,puStackY_50);
                    goto code_r0x000228d4;
                }
            }
            iVar3 = -0x7ffffffffffffff2;
        }
    }
code_r0x000228d4:
    (**(*0x25e20 + 0x48))(puVar4);
    if (puVar5 != NULL) {
        (**(*0x25e20 + 0x48))(puVar5);
    }
    if (puVar6 != NULL) {
        (**(*0x25e20 + 0x48))(puVar6);
    }
    return iVar3;
}


/* fcn.0001d838 @ 0x1d838 */

void fcn.0001d838(uint32_t arg1)

{
    uint in_register_0000000c;
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar1 = *CONCAT44(in_register_0000000c,arg1);
    piVar2 = *piVar1;
    while (piVar1 != CONCAT44(in_register_0000000c,arg1)) {
        *(*piVar1 + 8) = piVar1[1];
        *piVar1[1] = *piVar1;
        (**(*0x25e20 + 0x48))();
        piVar1 = piVar2;
        piVar2 = *piVar2;
    }
    return;
}


/* fcn.0001f7f8 @ 0x1f7f8 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.0001f7f8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    uchar *arg1_00;
    uint64_t arg3_00;
    uint64_t uVar3;
    int16_t *arg1_01;
    uchar uVar4;
    uint64_t uVar5;
    int16_t *piStackX_8;
    ulong *puStackX_10;
    uint32_t var_40h;
    uint64_t uStack_58;
    uchar auStack_50 [24];
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    
    bVar1 = false;
    uVar5 = 0xff;
    uVar4 = 0xff;
    arg3_00 = 0x10;
    if ((arg1 == 0) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar3 = 0;
    puStackX_10 = arg2;
    do {
        arg1_01 = arg1;
        if (((9 < *arg1 - 0x30U) && (5 < *arg1 - 0x41U)) && (5 < *arg1 - 0x61U)) {
            if (*arg1 != 0x3a) {
                return 0x8000000000000003;
            }
            if (bVar1) {
                return 0x8000000000000003;
            }
            if (arg3_00 != 0x10) {
                return 0x8000000000000003;
            }
            if (uVar3 == 0x10) {
                return 0x8000000000000003;
            }
            arg1_01 = arg1 + 2;
            arg3_00 = uVar3;
            if (uVar3 == 0) {
                if (*arg1_01 != 0x3a) {
                    return 0x8000000000000003;
                }
                arg1_01 = arg1 + 4;
            }
        }
        if (((*arg1_01 - 0x30U < 10) || (*arg1_01 - 0x41U < 6)) || (*arg1_01 - 0x61U < 6)) {
            if (bVar1) {
                iVar2 = fcn.0001f5fc(arg1_01,&piStackX_8,&uStack_58);
                if (iVar2 < 0) {
                    return 0x8000000000000003;
                }
                if (piStackX_8 == arg1_01) {
                    return 0x8000000000000003;
                }
                if (0x80 < uStack_58) {
                    return 0x8000000000000003;
                }
                arg1_01 = piStackX_8;
                uVar5 = uStack_58;
                break;
            }
            iVar2 = fcn.0001f6e0(arg1_01,&piStackX_8,&uStack_58);
            if (iVar2 < 0) {
                return 0x8000000000000003;
            }
            if (8 < (piStackX_8 - arg1_01 & 0xfffffffffffffffeU)) {
                return 0x8000000000000003;
            }
            auStack_50[uVar3] = uStack_58 >> 8;
            auStack_50[uVar3 + 1] = uStack_58;
            uVar3 = uVar3 + 2;
            arg1_01 = piStackX_8;
        }
        else {
            if (*arg1_01 != 0x2f) break;
            if (arg3_00 != uVar3) {
                return 0x8000000000000003;
            }
        }
        if (*arg1_01 == 0x2f) {
            bVar1 = true;
        }
        else {
            if (*arg1_01 != 0x3a) break;
            if (uVar3 == 0x10) goto code_r0x0001f990;
        }
        arg1 = arg1_01 + 1;
        arg1_01 = arg1;
    } while (uVar3 < 0x11);
    uVar4 = uVar5;
    if (uVar3 == 0x10) {
code_r0x0001f990:
        if (arg3_00 != 0x10) {
            return 0x8000000000000003;
        }
        if (uVar3 != 0x10) goto code_r0x0001f99e;
    }
    else {
code_r0x0001f99e:
        if (arg3_00 == 0x10) {
            return 0x8000000000000003;
        }
        if (arg3_00 == 0) goto code_r0x0001f9c4;
    }
    if (arg3 != auStack_50) {
        fcn.000102a0(arg3,auStack_50,arg3_00);
    }
code_r0x0001f9c4:
    if (0x10 - uVar3 != 0) {
        fcn.00010280(arg3_00 + arg3,0x10 - uVar3);
    }
    if (arg3_00 < uVar3) {
        arg1_00 = arg3 + 0x10 + (arg3_00 - uVar3);
        if ((uVar3 - arg3_00 != 0) && (arg1_00 != auStack_50 + arg3_00)) {
            fcn.000102a0(arg1_00,auStack_50 + arg3_00,uVar3 - arg3_00);
        }
    }
    if (arg4 != 0) {
        *arg4 = uVar4;
    }
    if (puStackX_10 != NULL) {
        *puStackX_10 = arg1_01;
    }
    return 0;
}


/* fcn.0001d77c @ 0x1d77c */

int64_t fcn.0001d77c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_20;
    
    if ((arg4 == 0) || (arg3 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iStackX_20 = 0;
        iVar1 = (**(arg1 + 8))(arg1,arg2,&iStackX_20,0);
        if (iVar1 == -0x7ffffffffffffffb) {
            iVar2 = fcn.0001fa74(iStackX_20);
            if (iVar2 == 0) {
                iVar1 = -0x7ffffffffffffff7;
            }
            else {
                iVar1 = (**(arg1 + 8))(arg1,arg2 & 0xffffffff,&iStackX_20,iVar2);
                if (iVar1 < 0) {
                    (**(*0x25e20 + 0x48))(iVar2);
                }
                else {
                    *arg3 = iStackX_20;
                    iVar1 = 0;
                    *arg4 = iVar2;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.0001df5c @ 0x1df5c */

uint64_t fcn.0001df5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int16_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uchar *noname_0;
    uchar auStack_228 [16];
    uchar auStack_218 [512];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    iVar2 = fcn.000217ec(arg2,8,arg1);
    if (iVar2 == 0) {
        return 0x8000000000000009;
    }
    uVar1 = *(arg1 + 0x40);
    if (uVar1 == 1) {
        iVar6 = 0x12;
        uVar4 = 0x25700;
    }
    else {
        if (uVar1 != 2) {
            fcn.0001fb70(auStack_218,6,0x256e4,uVar1);
            goto code_r0x0001e006;
        }
        iVar6 = 0x2c;
        uVar4 = 0x25718;
    }
    fcn.000102a0(auStack_218,uVar4,iVar6);
code_r0x0001e006:
    uVar3 = 0;
    iVar2 = fcn.000217ec(arg2,0xb,auStack_218);
    if (iVar2 == 0) {
        return 0x8000000000000009;
    }
    noname_0 = auStack_218;
    uVar5 = 0;
    if (*(arg1 + 0x44) != 0) {
        do {
            if (*(arg1 + 0x48 + uVar5) < 0x10) {
                iVar6 = 10;
                uVar4 = 0x25748;
            }
            else {
                iVar6 = 8;
                uVar4 = 0x25758;
            }
            fcn.000102a0(auStack_228,uVar4,iVar6);
            uVar3 = 0;
            iVar6 = fcn.0001fb70(noname_0,8,auStack_228,*(arg1 + 0x48 + uVar5));
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            noname_0 = noname_0 + iVar6 * 2;
        } while (uVar4 < *(arg1 + 0x44));
        if (uVar4 != 0) {
            *(noname_0 + -2) = 0;
        }
    }
    iVar2 = fcn.000217ec(arg2,CONCAT62(uVar3 >> 0x10,0xe),auStack_218);
    return ~-(iVar2 != 0) & 0x8000000000000009;
}


/* fcn.0001e0d8 @ 0x1e0d8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.0001e0d8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    uint32_t uVar2;
    ulong *puVar3;
    ulong uVar4;
    int iVar5;
    int64_t arg1_00;
    ulong *puVar6;
    ulong *arg1_01;
    ulong *puVar7;
    int32_t var_bp_10h;
    
    iVar5 = arg2;
    if ((arg3 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if (iVar5 == 0) {
            puVar7 = arg1 + 0x420;
            arg1_00 = *(arg1 + 0x430) * 0x12;
        }
        else {
            if (iVar5 == 1) {
                uVar2 = *(arg1 + 0x448);
                puVar7 = arg1 + 0x438;
            }
            else {
                if (iVar5 != 2) {
                    return 0x8000000000000003;
                }
                uVar2 = *(arg1 + 0x460);
                puVar7 = arg1 + 0x450;
            }
            arg1_00 = uVar2 << 4;
        }
        puVar3 = fcn.0001fa74(arg1_00);
        if (puVar3 == NULL) {
            uVar4 = 0x8000000000000009;
        }
        else {
            arg1_01 = puVar3;
            for (puVar6 = *puVar7; puVar6 != puVar7; puVar6 = *puVar6) {
                puVar1 = puVar6 + 2;
                if (iVar5 == 0) {
                    if (arg1_01 != puVar1) {
                        fcn.000102a0(arg1_01,puVar1,0x10);
                    }
                    *(arg1_01 + 0x11) = *(puVar6 + 4);
                    arg1_01 = arg1_01 + 0x12;
                }
                else {
                    if (arg1_01 != puVar1) {
                        fcn.000102a0(arg1_01,puVar1,0x10);
                    }
                    arg1_01 = arg1_01 + 2;
                }
            }
            *arg3 = puVar3;
            uVar4 = 0;
            *arg4 = arg1_00;
        }
    }
    return uVar4;
}


/* fcn.00022004 @ 0x22004 */

uchar fcn.00022004(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    int64_t arg1_00;
    ulong in_RDX;
    
    arg1_00 = fcn.00021cfc(arg1,in_RDX,0);
    uVar2 = 0;
    if (arg1_00 != 0) {
        cVar1 = fcn.00021f6c(arg1,arg1_00,0x25cf8,0x25d08);
        uVar2 = 0;
        if (cVar1 != '\0') {
            uVar2 = fcn.00021f6c(arg1,arg1_00,0x25d08,0x25d18);
        }
        (**(*0x25e20 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.00021cfc @ 0x21cfc */

int16_t * fcn.00021cfc(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t arg2;
    int16_t iVar1;
    int64_t arg1_00;
    bool bVar2;
    uint16_t uVar3;
    uint16_t *puVar4;
    uint64_t arg1_01;
    uint64_t uVar5;
    int16_t *arg1_02;
    int64_t iVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    int16_t *piVar9;
    char16_t *pcVar10;
    uint16_t *puVar11;
    uint64_t uVar12;
    
    uVar12 = 0;
    puVar11 = 0x25320;
    puVar4 = 0x25320;
    uVar8 = uVar12;
    uVar3 = *0x25320;
    while (uVar3 != 0) {
        puVar4 = puVar4 + 1;
        uVar8 = uVar8 + 1;
        uVar3 = *puVar4;
    }
    arg1_01 = uVar12;
    uVar5 = uVar12;
    if (arg1 != 0) {
        arg1_01 = fcn.00020d68(arg1);
        if (arg1_01 == 0) {
            return NULL;
        }
        uVar5 = fcn.00020b4c(arg1_01);
    }
    arg2 = (uVar5 + uVar8 * 2) * 2 + 0x32;
    arg1_00 = arg2 * 2;
    arg1_02 = fcn.0001fa74(arg1_00);
    if (arg1_02 == NULL) {
        return NULL;
    }
    pcVar10 = L"GUID=";
    fcn.0001f3ac(arg1_02,arg2,0x25cf8);
    iVar1 = *arg1_02;
    piVar9 = arg1_02;
    uVar8 = uVar12;
    while (iVar1 != 0) {
        piVar9 = piVar9 + 1;
        uVar8 = uVar8 + 1;
        iVar1 = *piVar9;
    }
    piVar9 = arg1_02 + uVar8;
    do {
        fcn.0001fbd4(piVar9,(arg1_00 - piVar9) + arg1_02,pcVar10,*(uVar12 + 0x24120));
        iVar6 = fcn.0001f378(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
        uVar12 = uVar12 + 1;
        piVar9 = piVar9 + iVar6;
    } while (uVar12 < 0x10);
    pcVar10 = L"&NAME=";
    fcn.0001f52c(arg1_02,arg2,0x25d08);
    uVar12 = 0;
    iVar1 = *piVar9;
    piVar7 = piVar9;
    uVar8 = uVar12;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        uVar8 = uVar8 + 1;
        iVar1 = *piVar7;
    }
    piVar9 = piVar9 + uVar8;
    uVar3 = *0x25320;
    while (uVar3 != 0) {
        fcn.0001fbd4(piVar9,(arg1_00 - piVar9) + arg1_02,pcVar10,uVar3);
        iVar6 = fcn.0001f378(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
        puVar11 = puVar11 + 1;
        piVar9 = piVar9 + iVar6;
        uVar3 = *puVar11;
    }
    pcVar10 = L"&PATH=";
    fcn.0001f52c(arg1_02,arg2,0x25d18);
    iVar6 = 0;
    iVar1 = *piVar9;
    piVar7 = piVar9;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = *piVar7;
    }
    piVar9 = piVar9 + iVar6;
    if (uVar5 != 0) {
        do {
            fcn.0001fbd4(piVar9,(arg1_00 - piVar9) + arg1_02,pcVar10,*(uVar12 + arg1_01));
            iVar6 = fcn.0001f378(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
            uVar12 = uVar12 + 1;
            piVar9 = piVar9 + iVar6;
        } while (uVar12 < uVar5);
    }
    *piVar9 = 0;
    bVar2 = false;
    iVar1 = *arg1_02;
    piVar9 = arg1_02;
    while (iVar1 != 0) {
        iVar1 = *piVar9;
        if (iVar1 == 0x3d) {
            bVar2 = true;
        }
        else if (iVar1 == 0x26) {
            bVar2 = false;
        }
        else if ((bVar2) && (iVar1 - 0x41U < 6)) {
            *piVar9 = iVar1 + 0x20;
        }
        piVar9 = piVar9 + 1;
        iVar1 = *piVar9;
    }
    return arg1_02;
}


/* fcn.00021f6c @ 0x21f6c */

bool fcn.00021f6c(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    
    arg2_00 = arg2;
    iVar1 = fcn.0001f2c4(noname_0,arg2_00);
    if (iVar1 != 0) {
        iVar2 = fcn.0001f2c4(arg1,arg2_00);
        if (iVar2 != 0) {
            iVar3 = fcn.0001f2c4(iVar1,arg3);
            if (iVar3 != 0) {
                iVar4 = fcn.0001f2c4(iVar2,arg3);
                if (iVar4 != 0) {
                    iVar3 = iVar3 - iVar1 >> 1;
                    if (iVar3 == iVar4 - iVar2 >> 1) {
                        iVar1 = fcn.0001f288(iVar1,iVar2,iVar3);
                        return iVar1 == 0;
                    }
                }
            }
        }
    }
    return false;
}


/* fcn.0001e1fc @ 0x1e1fc */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001e1fc(int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t *arg1_01;
    int aiStackX_8 [2];
    uint auStackX_18 [2];
    ulong uStackX_20;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t aiStack_48 [2];
    int64_t var_bp_10h;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iVar4 = *(arg2 + 0x408);
    arg1_00 = arg2 + 0x370;
    aiStack_48[0] = 0;
    uStackX_20 = 0;
    if (arg1_00 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.0001d77c(arg1_00,0,&uStackX_20,aiStack_48);
    }
    iVar1 = aiStack_48[0];
    if ((-1 < iVar2) && (iVar2 = fcn.0001df5c(aiStack_48[0],iVar4,arg1), -1 < iVar2)) {
        iVar4 = 8;
        arg1_01 = arg2 + 0x418;
        uStackX_20 = 8;
        fcn.00010280(arg1_01,8);
        iVar2 = (**(arg2 + 0x378))(arg1_00,1,&uStackX_20,arg1_01);
        if (-1 < iVar2) {
            iVar2 = arg1 + 0xc;
            if ((iVar2 != 0) && (arg1_01 != NULL)) {
                do {
                    iVar3 = fcn.0001fb70(iVar2,0x32,0x256c0,*arg1_01);
                    arg1_01 = arg1_01 + 1;
                    iVar2 = iVar2 + iVar3 * 2;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                *(iVar2 + -2) = 0;
            }
            uStackX_20 = 4;
            iVar2 = (**(arg2 + 0x378))(arg1_00,2,&uStackX_20,aiStackX_8);
            if (-1 < iVar2) {
                if (aiStackX_8[0] == 0) {
                    *(arg1 + 4) = 1;
                }
                else {
                    if (aiStackX_8[0] != 1) {
                        iVar2 = -0x7ffffffffffffffd;
                        goto code_r0x0001e374;
                    }
                    *(arg1 + 4) = 0;
                }
                uStackX_20 = 4;
                iVar2 = (**(arg2 + 0x378))(arg1_00,3,&uStackX_20,auStackX_18);
                if (-1 < iVar2) {
                    *(arg1 + 8) = auStackX_18[0];
                }
            }
        }
    }
code_r0x0001e374:
    if (iVar1 != 0) {
        (**(*0x25e20 + 0x48))(iVar1);
    }
    return iVar2;
}


/* fcn.0001f2c4 @ 0x1f2c4 */

int16_t * fcn.0001f2c4(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    int16_t *piVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int16_t *piVar5;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar4 == 0) {
        return piVar2;
    }
    do {
        iVar1 = *piVar2;
        if (iVar1 == 0) {
            return NULL;
        }
        piVar3 = piVar2;
        piVar5 = piVar4;
        if (iVar1 == *piVar4) {
            do {
                if (iVar1 == 0) break;
                piVar3 = piVar3 + 1;
                piVar5 = piVar5 + 1;
                iVar1 = *piVar3;
            } while (iVar1 == *piVar5);
        }
        if (*piVar5 == 0) {
            return piVar2;
        }
        if (*piVar3 == 0) {
            return NULL;
        }
        piVar2 = piVar2 + 1;
    } while( true );
}


/* fcn.0001daec @ 0x1daec */

int64_t fcn.0001daec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int16_t *piVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int16_t iVar4;
    int64_t iVar5;
    int64_t arg1_01;
    int64_t iVar6;
    int64_t *arg2_00;
    int iVar7;
    int64_t arg1_02;
    int16_t *piVar8;
    int64_t *arg3_00;
    uint64_t arg3_01;
    int64_t unaff_R13;
    ushort uStackX_10;
    uint uStackX_12;
    int16_t iStackX_16;
    int64_t *in_stack_00000028;
    int64_t iStackY_48;
    int64_t *piStackY_40;
    int64_t iStackY_38;
    int64_t iStackY_30;
    
    if ((arg2 == 0) || (arg4 == 0)) {
        iVar5 = -0x7ffffffffffffffe;
    }
    else {
        iVar7 = arg3;
        if (iVar7 == 0) {
            uVar3 = 0x9000;
        }
        else if (iVar7 == 1) {
            uVar3 = 0xb000;
        }
        else if (iVar7 == 2) {
            uVar3 = 0xc000;
        }
        else {
            if (iVar7 != 3) {
                return -0x7ffffffffffffffd;
            }
            uVar3 = 0xa000;
        }
        arg3_00 = &iStackY_38;
        arg2_00 = &iStackY_48;
        iVar5 = fcn.0001d9fc(uVar3,arg2_00,arg3_00,&uStackX_10);
        if (-1 < iVar5) {
            arg1_00 = CONCAT26(iStackX_16,CONCAT42(uStackX_12,uStackX_10));
            piStackY_40 = NULL;
            if (in_stack_00000028 != NULL) {
                iStackY_38 = arg4;
                iVar5 = arg4;
                do {
                    iVar6 = 0;
                    if (iVar7 == 0) {
                        arg1_01 = iStackY_38;
                        arg1_02 = iStackY_38;
                    }
                    else if (iVar7 == 3) {
                        arg1_01 = arg4 + 0x10;
                        arg1_02 = arg4;
                    }
                    else {
                        arg1_01 = iVar5;
                        arg1_02 = iVar5;
                    }
                    iStackY_30 = arg4;
                    fcn.0001d884(arg1_01,arg1);
                    iVar4 = *arg1;
                    piVar8 = arg1;
                    while (iVar4 != 0) {
                        piVar8 = piVar8 + 1;
                        iVar6 = iVar6 + 1;
                        iVar4 = *piVar8;
                    }
                    piVar8 = arg1 + iVar6 * 2;
                    if (iVar7 == 0) {
                        uVar2 = *(arg1_02 + 0x10);
code_r0x0001dbfd:
                        arg3_01 = uVar2;
                        *piVar8 = 0x2f;
                        iVar6 = fcn.0001fb70(piVar8 + 1,6,0x256e4,arg3_01);
                        piVar8 = piVar8 + 1 + iVar6;
                        if (iVar7 == 3) {
                            iVar6 = fcn.0001fb70(piVar8,8,0x256f0,arg3_01);
                            piVar8 = piVar8 + iVar6;
                            fcn.0001d884(arg1_02,piVar8);
                            iVar6 = 0;
                            iVar4 = *piVar8;
                            piVar1 = piVar8;
                            while (iVar4 != 0) {
                                piVar1 = piVar1 + 1;
                                iVar6 = iVar6 + 1;
                                iVar4 = *piVar1;
                            }
                            piVar8 = piVar8 + iVar6;
                        }
                    }
                    else if (iVar7 == 3) {
                        uVar2 = *(arg1_02 + 0x20);
                        goto code_r0x0001dbfd;
                    }
                    iVar4 = fcn.000217ec(arg2,0,arg1);
                    if (iVar4 == 0) {
                        iVar5 = -0x7ffffffffffffffe;
                        goto code_r0x0001dd28;
                    }
                    fcn.00010280(&uStackX_10,8);
                    arg3_00 = CONCAT71(arg1 >> 8,3);
                    uStackX_12 = 0x2b002b;
                    iStackX_16 = iVar4;
                    fcn.00022368(iStackY_48,&uStackX_10,arg3_00,8);
                    arg1 = piVar8 + 1;
                    *piVar8 = 0x20;
                    arg2_00 = piStackY_40 + 1;
                    iStackY_38 = iStackY_38 + 0x11;
                    arg4 = iStackY_30 + 0x21;
                    iVar5 = iVar5 + 0x10;
                    piStackY_40 = arg2_00;
                    iStackY_30 = arg4;
                } while (arg2_00 < in_stack_00000028);
            }
            *(arg1 + -2) = 0;
            iVar5 = fcn.000226e8(arg2,arg2_00,arg3_00,iStackY_48,unaff_R13);
code_r0x0001dd28:
            fcn.000222dc(iStackY_48);
            fcn.000222dc(arg1_00);
        }
    }
    return iVar5;
}


/* fcn.00022084 @ 0x22084 */

bool fcn.00022084(int64_t noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    char16_t *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t aiStackX_18 [2];
    ulong auStack_28 [2];
    
    auStack_28[0] = 0x638;
    aiStackX_18[0] = arg1;
    piVar3 = fcn.00021bec(noname_0,noname_1,0);
    iVar6 = 0;
    if (piVar3 != NULL) {
        pcVar4 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
        iVar5 = iVar6;
        do {
            pcVar4 = pcVar4 + 1;
            iVar5 = iVar5 + 1;
        } while (*pcVar4 != L'\0');
        iVar1 = *piVar3;
        piVar2 = piVar3;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
        iVar6 = iVar5 * 2 + iVar6 * 2;
        iVar5 = fcn.0001fa74(iVar6 + 4);
        fcn.0001fb70(iVar5,iVar6 + 4,0x25d28,0x25d40);
        (**(*0x25e20 + 0x48))(piVar3);
        if (iVar5 != 0) {
            iVar6 = (**(*0x25e30 + 0x20))(*0x25e30,iVar5,arg2,auStack_28,aiStackX_18);
            (**(*0x25e20 + 0x48))(iVar5);
            return -1 < iVar6;
        }
    }
    return false;
}


/* fcn.0001e96c @ 0x1e96c */

int64_t fcn.0001e96c(int64_t arg1)

{
    int64_t arg2;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_160h;
    int64_t var_168h;
    uchar auStack_228 [512];
    
    arg2 = *(arg1 + 0x408);
    arg1 = arg1 + 0x370;
    iVar3 = -0x7ffffffffffffffe;
    iStackX_8 = 0;
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar1 = fcn.0001d77c(arg1,0,&iStackX_10,&iStackX_8);
    }
    iVar2 = iStackX_8;
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = fcn.0001daec(auStack_228,arg2,0,*(iStackX_8 + 0x70));
    if ((-1 < iVar1) && (iVar1 = fcn.0001daec(auStack_228,arg2,3,*(iVar2 + 0x80)), -1 < iVar1)) {
        (**(*0x25e20 + 0x48))(iVar2);
        iStackX_10 = 0;
        iStackX_8 = 0;
        if (arg1 == 0) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            iVar1 = fcn.0001d77c(arg1,6,&iStackX_10,&iStackX_8);
        }
        iVar2 = iStackX_8;
        if ((iVar1 < 0) && (iVar1 != -0x7ffffffffffffff2)) {
            if (iStackX_8 != 0) {
                (**(*0x25e20 + 0x48))(iStackX_8);
                return iVar1;
            }
            return iVar1;
        }
        if ((iStackX_10 == 0) || (iVar1 = fcn.0001daec(auStack_228,arg2,2,iStackX_8), -1 < iVar1)) {
            if (iVar2 != 0) {
                (**(*0x25e20 + 0x48))(iVar2);
            }
            iStackX_10 = 0;
            iStackX_8 = 0;
            if (arg1 != 0) {
                iVar3 = fcn.0001d77c(arg1,5,&iStackX_10,&iStackX_8);
            }
            iVar1 = iStackX_8;
            if ((iVar3 < 0) && (iVar3 != -0x7ffffffffffffff2)) {
                if (iStackX_8 != 0) {
                    (**(*0x25e20 + 0x48))(iStackX_8);
                }
            }
            else {
                if ((iStackX_10 == 0) || (iVar3 = fcn.0001daec(auStack_228,arg2,1,iStackX_8), -1 < iVar3)) {
                    if (iVar1 != 0) {
                        (**(*0x25e20 + 0x48))(iVar1);
                    }
                    return 0;
                }
                (**(*0x25e20 + 0x48))(iVar1);
            }
            return iVar3;
        }
    }
    (**(*0x25e20 + 0x48))(iVar2);
    return iVar1;
}


/* fcn.0001e464 @ 0x1e464 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.0001e464(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uchar auStackX_8 [16];
    int64_t iStackX_18;
    ulong uStackX_20;
    int64_t var_40h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t iStack_58;
    int64_t iStack_50;
    int64_t aiStack_48 [2];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    if ((CONCAT44(in_register_0000000c,arg1) == 0) || (arg2 == 0)) {
        return -0x7ffffffffffffffe;
    }
    if (*(CONCAT44(in_register_0000000c,arg1) + 4) == 0) {
        return 0;
    }
    *(arg2 + 0x410) = 0;
    puVar1 = arg2 + 0x370;
    iVar2 = (**puVar1)(puVar1,2,4,arg2 + 0x410);
    if (iVar2 < 0) {
        return iVar2;
    }
    iStack_58 = 0;
    iStack_50 = 0;
    iVar2 = 0;
    iVar4 = 0;
    iStackX_18 = 0;
    aiStack_48[0] = 0;
    iVar3 = (**(*0x25e20 + 0x50))(0x200,0x10,0x1d778,auStackX_8,&iStack_58);
    if ((iVar3 < 0) || (iVar3 = (**(*0x25e20 + 0x50))(0x80000000,8,0,0,&iStack_50), iVar3 < 0))
    goto code_r0x0001e69a;
    if ((*(arg2 + 0x420) != arg2 + 0x420) && (*(arg2 + 0x430) != 0)) {
        iVar3 = fcn.0001e0d8(arg2,0,aiStack_48,&uStackX_20);
        if (-1 < iVar3) {
            auStackX_8[0] = 0;
            iVar3 = (**(arg2 + 0x380))(puVar1,4,iStack_58);
            iVar4 = aiStack_48[0];
            if (-1 < iVar3) {
                iVar3 = (**puVar1)(puVar1,4,uStackX_20,aiStack_48[0]);
                if (iVar3 == -0x7ffffffffffffffa) {
                    (**(*0x25e20 + 0x58))(iStack_50,2,50000000);
                    (**(*0x25e20 + 0x78))(iStack_50);
                }
                iVar3 = (**(arg2 + 0x388))(puVar1,4,iStack_58);
                if (iVar3 < 0) goto code_r0x0001e69a;
                goto code_r0x0001e5ee;
            }
        }
        iVar2 = 0;
        iVar4 = aiStack_48[0];
        goto code_r0x0001e69a;
    }
code_r0x0001e5ee:
    if ((*(arg2 + 0x438) == arg2 + 0x438) || (*(arg2 + 0x448) == 0)) {
code_r0x0001e64e:
        iVar2 = 0;
        if ((*(arg2 + 0x450) != arg2 + 0x450) && (*(arg2 + 0x460) != 0)) {
            iVar3 = fcn.0001e0d8(arg2,2,&iStackX_18,&uStackX_20);
            iVar2 = iStackX_18;
            if (iVar3 < 0) goto code_r0x0001e6ef;
            iVar3 = (**puVar1)(puVar1,6,uStackX_20,iStackX_18);
            if (iVar3 < 0) goto code_r0x0001e69a;
        }
        iVar3 = 0;
    }
    else {
        iVar3 = fcn.0001e0d8(arg2,1,&iStackX_18,&uStackX_20);
        iVar2 = iStackX_18;
        if (-1 < iVar3) {
            iVar3 = (**puVar1)(puVar1,5,uStackX_20,iStackX_18);
            if (iVar3 < 0) goto code_r0x0001e69a;
            (**(*0x25e20 + 0x48))(iVar2);
            iStackX_18 = 0;
            goto code_r0x0001e64e;
        }
code_r0x0001e6ef:
        iVar2 = iStackX_18;
    }
code_r0x0001e69a:
    if (iStack_58 != 0) {
        (**(*0x25e20 + 0x70))();
    }
    if (iStack_50 != 0) {
        (**(*0x25e20 + 0x70))();
    }
    if (iVar4 != 0) {
        (**(*0x25e20 + 0x48))(iVar4);
    }
    if (iVar2 != 0) {
        (**(*0x25e20 + 0x48))(iVar2);
    }
    return iVar3;
}


/* fcn.0001e3ac @ 0x1e3ac */

int64_t fcn.0001e3ac(uint32_t arg1,int64_t arg2)

{
    uint *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint in_register_0000000c;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar3 == 0) || (arg2 == 0)) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        puVar1 = arg2 + 0x410;
        puVar2 = arg2 + 0x370;
        if (*(iVar3 + 4) == 0) {
            *puVar1 = 1;
        }
        else if (*(iVar3 + 4) == 1) {
            *puVar1 = 0;
        }
        *(arg2 + 0x414) = *(iVar3 + 8);
        iVar3 = (**puVar2)(puVar2,2,4,puVar1);
        if ((-1 < iVar3) && (iVar3 = (**puVar2)(puVar2,3,4,arg2 + 0x414), -1 < iVar3)) {
            iVar4 = (**puVar2)(puVar2,1,8,arg2 + 0x418);
            iVar3 = 0;
            if (iVar4 < 0) {
                iVar3 = iVar4;
            }
        }
    }
    return iVar3;
}


/* fcn.0001dd7c @ 0x1dd7c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_20h

ulong fcn.0001dd7c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int64_t *piVar2;
    bool bVar3;
    int16_t *piVar4;
    ulong uVar5;
    int64_t *piVar6;
    uint8_t uVar7;
    uint8_t *arg1_00;
    uint64_t uVar8;
    int64_t iVar9;
    int16_t *arg1_01;
    int16_t *piVar10;
    int iVar11;
    int16_t *piStackX_8;
    int64_t var_30h;
    uint8_t auStack_48 [15];
    uint8_t auStack_39 [17];
    uint32_t var_bp_20h;
    int64_t var_bp_10h;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar5 = 0x8000000000000002;
    }
    else {
        arg1_00 = auStack_48;
        fcn.00010280(arg1_00,0x11);
        iVar9 = 0;
        iVar1 = *arg1;
        piVar4 = arg1;
        while (iVar1 != 0) {
            piVar4 = piVar4 + 1;
            iVar9 = iVar9 + 1;
            iVar1 = *piVar4;
        }
        piVar4 = fcn.0001faa0(arg1_00,iVar9 * 2 + 2,arg1);
        if (piVar4 == NULL) {
            uVar5 = 0x8000000000000009;
        }
        else {
            fcn.0001d838(arg2);
            bVar3 = false;
            iVar11 = 0;
            arg1_01 = piVar4;
            while (piVar10 = arg1_01, *arg1_01 != 0) {
                do {
                    if (*piVar10 == 0x20) break;
                    piVar10 = piVar10 + 1;
                } while (*piVar10 != 0);
                if (*piVar10 == 0) {
                    bVar3 = true;
                }
                *piVar10 = 0;
                iVar9 = fcn.0001f7f8(arg1_01,&piStackX_8,auStack_48,auStack_39 + 1);
                if ((iVar9 < 0) || (*piStackX_8 != 0)) {
code_r0x0001def9:
                    uVar5 = 0x8000000000000002;
code_r0x0001df03:
                    fcn.0001d838(arg2);
                    (**(*0x25e20 + 0x48))(piVar4);
                    return uVar5;
                }
                if (auStack_39[1] == -1) {
                    auStack_39[1] = '\0';
                }
                if (auStack_48[0] == 0xff) goto code_r0x0001def9;
                uVar8 = 0;
                do {
                    if (auStack_48[uVar8] != 0) goto code_r0x0001de9a;
                    uVar7 = uVar8 + 1;
                    uVar8 = uVar7;
                } while (uVar7 < 0xf);
                if (auStack_48[uVar7] < 2) goto code_r0x0001def9;
code_r0x0001de9a:
                piVar6 = fcn.0001fa44(uVar8,0x28);
                if (piVar6 == NULL) {
                    uVar5 = 0x8000000000000009;
                    goto code_r0x0001df03;
                }
                if (piVar6 + 2 != auStack_48) {
                    fcn.000102a0(piVar6 + 2,auStack_48,0x11);
                }
                *piVar6 = arg2;
                iVar11 = iVar11 + 1;
                piVar2 = *(arg2 + 8);
                piVar6[1] = piVar2;
                *piVar2 = piVar6;
                *(arg2 + 8) = piVar6;
                if (bVar3) break;
                arg1_01 = piVar10 + 1;
            }
            (**(*0x25e20 + 0x48))(piVar4);
            uVar5 = 0;
            *arg3 = iVar11;
        }
    }
    return uVar5;
}


/* fcn.0001f6e0 @ 0x1f6e0 */

ulong fcn.0001f6e0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    int64_t iVar5;
    uint16_t *puVar6;
    
    if (((arg1 != 0) && (arg3 != 0)) && (puVar6 = arg1, uVar1 = fcn.0001f378(arg1,0xf4241), uVar1 < 0xf4241)) {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*puVar6 == 0x20 || (*puVar6 == 9)); puVar6 = puVar6 + 1) {
        }
        iVar4 = 0x30;
        for (; *puVar6 == 0x30; puVar6 = puVar6 + 1) {
        }
        uVar3 = *puVar6;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (puVar6[-1] != 0x30) {
                *arg3 = 0;
                return 0;
            }
            puVar6 = puVar6 + 1;
        }
        *arg3 = 0;
        iVar5 = -1;
        for (; ((*puVar6 - iVar4 < 10 || (*puVar6 - 0x41 < 6)) || (*puVar6 - 0x61 < 6)); puVar6 = puVar6 + 1) {
            iVar2 = fcn.0001f314(*puVar6);
            if (iVar5 - iVar2 >> 4 < *arg3) {
                *arg3 = iVar5;
                if (arg2 != NULL) {
                    *arg2 = puVar6;
                }
                return 0x8000000000000003;
            }
            *arg3 = *arg3 * 0x10 + iVar2;
        }
        if (arg2 != NULL) {
            *arg2 = puVar6;
        }
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.0002140c @ 0x2140c */

void fcn.0002140c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ushort *arg1_00;
    int64_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [4];
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    uchar uStack_7c;
    ulong *puStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [24];
    
    uStack_c8 = 0xf31fcbb5;
    uStack_c4 = 0x4215b53d;
    uStack_c0 = 0x3361db81;
    uStack_bc = 0x6a98d4e4;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    iVar1 = (**(*0x25e20 + 0x140))(&uStack_c8);
    uVar3 = 0;
    if (iVar1 < 0) {
        uVar9 = uVar3;
        if (iStackX_18 != 0) {
            piVar6 = &iStackX_18;
            iVar1 = iStackX_18;
            do {
                iVar8 = 0;
                uVar2 = fcn.00021364(iVar1,0,0,0);
                if (uVar3 <= uVar2 >> 1) {
                    uVar3 = fcn.00021364(iVar1,0,0,iVar8);
                    uVar3 = uVar3 >> 1;
                }
                piVar6 = piVar6 + 1;
                uVar9 = uVar9 + 1;
                iVar1 = *piVar6;
            } while (iVar1 != 0);
        }
        iVar1 = *(*0x25e18 + 0x40);
        if (auStack_90 != *(iVar1 + 0x48)) {
            fcn.000102a0(auStack_90,*(iVar1 + 0x48),0x18);
        }
        (**(iVar1 + 0x18))(iVar1,iStack_8c,&iStack_68);
        (**(iVar1 + 0x40))(iVar1,0);
        (**(iVar1 + 0x28))(iVar1,arg1);
        uStack_b8 = iStack_70 - 3U;
        if (uVar9 < iStack_70 - 3U) {
            uStack_b8 = uVar9;
        }
        uVar9 = iStack_68 - 2U;
        if (uVar3 < iStack_68 - 2U) {
            uVar9 = uVar3;
        }
        uVar2 = (iStack_68 - uVar9) - 2 >> 1;
        uVar7 = (iStack_70 - uStack_b8) - 3 >> 1;
        uStack_a8 = uVar2;
        uStack_60 = uVar9;
        arg1_00 = fcn.0001fa74(uVar9 * 2 + 6);
        uVar3 = uVar9 * 2 + 4;
        if (uVar3 != 0) {
            fcn.00010300(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x250c;
        *(arg1_00 + uVar9 + 1) = 0x2510;
        (**(iVar1 + 0x38))(iVar1,uVar2,uVar7);
        iVar8 = uVar7 + 1;
        (**(iVar1 + 8))(iVar1,arg1_00);
        iStack_98 = iStackX_18;
        if (iStackX_18 != 0) {
            piStack_a0 = &iStackX_18;
            iVar4 = iStackX_18;
            do {
                iStack_98 = iVar4;
                if (uStack_b8 == 0) break;
                if (uVar3 != 0) {
                    fcn.00010300(arg1_00,uVar3 >> 1,0x20);
                }
                *arg1_00 = 0x2502;
                *(arg1_00 + uVar9 + 1) = 0x2502;
                (**(iVar1 + 0x38))(iVar1,uVar2);
                (**(iVar1 + 8))(iVar1);
                uVar5 = 0;
                uStack_b0 = fcn.00021364(iVar4,0,0,0);
                uStack_b0 = uStack_b0 >> 1;
                if (uVar9 < uStack_b0) {
                    fcn.00021364(iVar4,CONCAT71(uVar5 >> 8,1),uVar9,&uStack_b0);
                    uVar9 = uStack_b0;
                    iVar4 = fcn.0001fa74(uStack_b0 * 2 + 2);
                    fcn.0001f44c(iVar4,uVar9 + 1,iStack_98,uVar9 - 3);
                    fcn.0001f52c(iVar4,uVar9 + 1,0x25cc8);
                    (**(iVar1 + 0x38))(iVar1,uStack_a8 + 1,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                    (**(*0x25e20 + 0x48))();
                    uVar9 = uStack_60;
                    uVar2 = uStack_a8;
                }
                else {
                    (**(iVar1 + 0x38))(iVar1,(uVar9 - uStack_b0 >> 1) + 1 + uVar2,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                }
                iVar8 = iVar8 + 1;
                uStack_b8 = uStack_b8 - 1;
                piStack_a0 = piStack_a0 + 1;
                iVar4 = *piStack_a0;
                iStack_98 = iVar4;
            } while (iVar4 != 0);
        }
        if (uVar3 != 0) {
            fcn.00010300(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x2514;
        *(arg1_00 + uVar9 + 1) = 0x2518;
        (**(iVar1 + 0x38))(iVar1,uVar2,iVar8);
        (**(iVar1 + 8))(iVar1,arg1_00);
        (**(*0x25e20 + 0x48))(arg1_00);
        (**(iVar1 + 0x40))(iVar1,uStack_7c);
        (**(iVar1 + 0x38))(iVar1,iStack_84,iStack_80);
        (**(iVar1 + 0x28))(iVar1,iStack_88);
        if (arg2 != 0) {
            while (iVar1 = (**(*(*0x25e18 + 0x30) + 8))(*(*0x25e18 + 0x30),arg2), iVar1 < 0) {
                if (iVar1 == -0x7ffffffffffffffa) {
                    (**(*0x25e20 + 0x60))(1,*(*0x25e18 + 0x30) + 0x10,auStack_58);
                }
            }
        }
    }
    else {
        (**puStack_78)(arg1,arg2,&iStackX_18);
    }
    return;
}


/* fcn.00022180 @ 0x22180 */

bool fcn.00022180(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    char16_t *pcVar1;
    int64_t arg1_00;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char16_t *pcVar6;
    int64_t iStackX_10;
    int64_t iStackX_18;
    
    pcVar6 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
    iVar3 = 0;
    pcVar1 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
    iVar4 = iVar3;
    do {
        pcVar1 = pcVar1 + 1;
        iVar4 = iVar4 + 1;
    } while (*pcVar1 != L'\0');
    iVar4 = iVar4 * 2 + 0x42;
    iStackX_10 = arg1;
    iStackX_18 = arg2;
    arg1_00 = fcn.0001fa74(iVar4);
    fcn.0001fb70(arg1_00,iVar4,0x25770,0x25d40);
    if (arg1_00 != 0) {
        iVar4 = arg1_00;
        iVar2 = (**(*0x25e30 + 0x18))(*0x25e30,arg1_00,arg3,0x638,&iStackX_18,&iStackX_10);
        iVar5 = iStackX_18;
        if (iVar2 < 0) {
            iVar5 = iVar3;
        }
        (**(*0x25e20 + 0x48))();
        if (iVar5 != 0) {
            do {
                iVar2 = iVar3;
                pcVar6 = pcVar6 + 1;
                iVar3 = iVar2 + 1;
            } while (*pcVar6 != L'\0');
            iVar3 = fcn.00021bec(arg1_00,iVar4,iVar5 + (iVar2 + 2) * 2);
            (**(*0x25e20 + 0x48))(iVar5);
            return iVar3 != 0;
        }
    }
    return false;
}


/* fcn.00020c8c @ 0x20c8c */

ulong fcn.00020c8c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x25cc0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00020b4c(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.0001faa0(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.0001fa44(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.000102a0(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x25cc0) {
                fcn.000102a0(iVar4,0x25cc0,4);
            }
            uVar2 = fcn.00020b9c(arg1,iVar3);
            (**(*0x25e20 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00021ad0 @ 0x21ad0 */

uint64_t fcn.00021ad0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int *piVar5;
    int64_t *piVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t auStack_48 [2];
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        piVar5 = arg3;
        uVar4 = 0;
        do {
            piVar6 = piVar6 + 1;
            uVar3 = uVar4 + *piVar5 + -4;
            uVar4 = uVar3;
            piVar5 = *piVar6;
        } while (piVar5 != NULL);
        if (uVar3 != 0) {
            iStackX_18 = arg3;
            puVar1 = fcn.0001fa74(uVar3 + 0x18);
            if (puVar1 != NULL) {
                *puVar1 = *arg1;
                piVar6 = &iStackX_18;
                puVar1[1] = *(arg1 + 8);
                *(puVar1 + 2) = uVar3 + 0x18;
                piVar5 = puVar1 + 0x14;
                do {
                    uVar3 = *arg3 - 4;
                    if ((uVar3 != 0) && (piVar5 != arg3 + 4)) {
                        fcn.000102a0(piVar5,arg3 + 4,uVar3);
                    }
                    piVar6 = piVar6 + 1;
                    piVar5 = piVar5 + uVar3;
                    arg3 = *piVar6;
                } while (arg3 != NULL);
                if (piVar5 != 0x25db0) {
                    fcn.000102a0(piVar5,0x25db0,4);
                }
                iVar2 = (***0x25e50)(*0x25e50,puVar1,arg2,auStack_48);
                if (iVar2 < 0) {
                    auStack_48[0] = 0;
                }
                (**(*0x25e20 + 0x48))(puVar1);
                return auStack_48[0];
            }
        }
    }
    return 0;
}


/* fcn.00021904 @ 0x21904 */

int64_t fcn.00021904(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    char *pcVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iVar6 = arg1;
    iStackX_18 = arg3;
    arg1_00 = fcn.0002291c(arg1);
    if (arg1_00 != NULL) {
        fcn.00021174(iVar6,aiStack_38,arg3);
        pcVar7 = arg1_00;
        iVar6 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x25cf2;
                if (iVar6 != 0) {
                    iVar3 = iVar6;
                }
                iVar3 = fcn.00021230(arg1_00,0,0x25cf2,iVar3);
                if (iVar3 == 0) goto code_r0x00021a80;
                iStackX_18 = 0;
                iVar4 = (**(*0x25e38 + 8))(*0x25e38,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.0001fa74(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x25e38 + 8))(*0x25e38,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x25e20 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x00021a80;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x00021a80;
                if (iVar6 == 0) break;
                (**(*0x25e20 + 0x48))(iVar6);
                iVar6 = 0;
            }
            for (; (*pcVar7 != '\0' && (*pcVar7 != ';')); pcVar7 = pcVar7 + 1) {
            }
            cVar2 = *pcVar7;
            pcVar1 = pcVar7 + 1;
            pcVar7 = NULL;
            if (cVar2 == ';') {
                pcVar7 = pcVar1;
            }
        } while (pcVar7 != NULL);
code_r0x00021a80:
        (**(*0x25e20 + 0x48))(arg1_00);
        if (iVar6 != 0) {
            (**(*0x25e20 + 0x48))(iVar6);
        }
        if (iVar3 != 0) {
            (**(*0x25e20 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.0001f378 @ 0x1f378 */

uint64_t fcn.0001f378(uint32_t arg1,int64_t arg2)

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


/* fcn.0001f314 @ 0x1f314 */

int64_t fcn.0001f314(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 - 0x30 < 10) {
        iVar1 = (arg1 & 0xffff) - 0x30;
    }
    else {
        if (uVar2 - 0x61 < 0x1a) {
            uVar2 = uVar2 - 0x20;
        }
        iVar1 = uVar2 - 0x37;
    }
    return iVar1;
}


/* fcn.0001f5fc @ 0x1f5fc */

ulong fcn.0001f5fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint64_t uVar2;
    uint16_t *puVar3;
    
    if (((arg1 == 0) || (arg3 == 0)) || (puVar3 = arg1, uVar2 = fcn.0001f378(arg1,0xf4241), 1000000 < uVar2)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        if (arg2 != NULL) {
            *arg2 = arg1;
        }
        for (; (*puVar3 == 0x20 || (*puVar3 == 9)); puVar3 = puVar3 + 1) {
        }
        for (; *puVar3 == 0x30; puVar3 = puVar3 + 1) {
        }
        *arg3 = 0;
        for (; *puVar3 - 0x30 < 10; puVar3 = puVar3 + 1) {
            if (~(*puVar3 - 0x30) / 10 < *arg3) {
                *arg3 = 0xffffffffffffffff;
                if (arg2 != NULL) {
                    *arg2 = puVar3;
                }
                return 0x8000000000000003;
            }
            *arg3 = (*puVar3 - 0x30) + *arg3 * 10;
        }
        if (arg2 != NULL) {
            *arg2 = puVar3;
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.0001fba0 @ 0x1fba0 */

uchar * fcn.0001fba0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001fa20 @ 0x1fa20 */

uint64_t fcn.0001fa20(uint32_t arg1)

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


/* fcn.00020acc @ 0x20acc */

void fcn.00020acc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001fd64(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00020af0 @ 0x20af0 */

bool fcn.00020af0(uint32_t arg1)

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


/* fcn.00020b4c @ 0x20b4c */

char * fcn.00020b4c(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00020af0(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00020b9c @ 0x20b9c */

int64_t fcn.00020b9c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x25cc0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00020af0(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00020af0(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00020b4c(arg1);
        iVar4 = fcn.00020b4c(arg2);
        iVar2 = fcn.0001fa44();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.000102a0(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.000102a0(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.00020b4c(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001faa0(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.0001f344 @ 0x1f344 */

int64_t fcn.0001f344(int64_t arg1,uint32_t arg2,uint32_t arg3)

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


/* fcn.00020dfc @ 0x20dfc */

ulong fcn.00020dfc(int64_t arg1,int64_t arg2)

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
        iVar2 = fcn.0001f344(arg1,arg2,iVar3);
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


/* fcn.00021364 @ 0x21364 */

int64_t fcn.00021364(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 1;
        uVar3 = uVar2;
        do {
            while ((((iVar1 = *(arg1 + uVar2 * 2), iVar1 != -0x10 && (iVar1 != -0xf)) && (iVar1 != 0)) &&
                   ((uVar3 = uVar3 + iVar4, arg2 == '\0' || (uVar3 <= arg3))))) {
                uVar2 = uVar2 + 1;
            }
            if (*(arg1 + uVar2 * 2) == 0) break;
            if ((arg2 != '\0') && (arg3 < uVar3)) {
                *arg4 = uVar2;
                break;
            }
            iVar4 = (*(arg1 + uVar2 * 2) != -0x10) + 1;
            uVar2 = uVar2 + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
        iVar4 = uVar3 * 2;
    }
    return iVar4;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ushort *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001f44c @ 0x1f44c */

ulong fcn.0001f44c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.0001f378(arg3,arg2_00);
    if ((arg2 <= arg4) && (arg2 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001f4f4;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x0001f4f4:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.0001f52c @ 0x1f52c */

ulong fcn.0001f52c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.0001f378(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.0001f378(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x0001f5cd;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x0001f5cd:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.0002291c @ 0x2291c */

int64_t fcn.0002291c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x25e38 + 0x18))(*0x25e38,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.0001fa74(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x25e38 + 0x18))(*0x25e38,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x25e20 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00021174 @ 0x21174 */

int64_t fcn.00021174(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x25e28 + 0x48))(L"PlatformLang",0x240e0,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.0001fa44();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x25e28 + 0x48))(L"PlatformLang",0x240e0,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x25e20 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00021230 @ 0x21230 */

char * fcn.00021230(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x00021280:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x00021280;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x0002131b;
                }
            }
            else {
code_r0x0002131b:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    pcVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar5 != '\0' && (*pcVar5 == ';')); pcVar5 = pcVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar5[arg3_00];
                            }
                            if (uVar4 <= arg3_00) goto code_r0x000212e8;
                        }
                        else {
code_r0x000212e8:
                            iVar3 = fcn.0001f344(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.0001fa74(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = fcn.000102a0(arg1_00,pcVar5,arg3_00);
                                        return pcVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        pcVar5 = pcVar5 + arg3_00;
                        cVar2 = *pcVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x00021320;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x0002131b;
                }
            }
code_r0x00021320:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.0001f3ac @ 0x1f3ac */

ulong fcn.0001f3ac(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.0001f378(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001f422;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x0001f422:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.0001fbd4 @ 0x1fbd4 */

ulong fcn.0001fbd4(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = str.0123456789ABCDEF[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = str.0123456789ABCDEF[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.0001fba0(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.0001f288 @ 0x1f288 */

int64_t fcn.0001f288(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.00021bec @ 0x21bec */

int64_t fcn.00021bec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    int64_t iStackX_10;
    
    iStackX_10 = arg2;
    if (*0x25e58 == 0) {
        iStackX_8 = arg1;
        iVar1 = (**(*0x25e20 + 0x140))(0x25178,0,0x25e58);
        if ((iVar1 < 0) || (*0x25e58 == 0)) {
            return 0;
        }
    }
    iStackX_8 = 0;
    if (arg3 == 0) {
        iVar1 = (**(*0x25e58 + 8))(*0x25e58,&iStackX_8,&iStackX_10,1,0x24120,0x25320);
        if (-1 < iVar1) {
            iVar1 = fcn.0001fa74(2);
            return iVar1;
        }
        if (iVar1 != -0x7ffffffffffffffb) {
            return 0;
        }
        iVar1 = fcn.0001fa74(iStackX_8);
        if (iVar1 == 0) {
            return 0;
        }
    }
    else {
        iVar1 = arg3;
    }
    iVar2 = (**(*0x25e58 + 8))(*0x25e58,&iStackX_8,iVar1,arg3 == 0,0x24120,0x25320);
    if (iVar2 < 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00022420 @ 0x22420 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

ulong fcn.00022420(ulong noname_0,int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg_60h,int64_t arg_68h)

{
    uint32_t *puVar1;
    bool bVar2;
    bool bVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t *arg1_00;
    uint32_t *puVar8;
    int iVar9;
    uint64_t uVar10;
    uint in_R8;
    uint32_t *puVar11;
    uint64_t uVar12;
    int64_t iVar13;
    uint32_t auStackX_10 [4];
    int64_t *piStackX_20;
    ulong *in_stack_00000028;
    uint32_t *in_stack_00000030;
    char acStack_48 [16];
    int16_t var_bp_10h;
    
    puVar8 = in_stack_00000030;
    puVar11 = CONCAT44(in_R8,arg2);
    auStackX_10[0] = CONCAT22(auStackX_10[0]._2_2_,arg1);
    acStack_48[0] = '\x01';
    acStack_48[1] = '\0';
    uVar10 = 4;
    piStackX_20 = arg3;
    if (in_stack_00000030 != puVar11) {
        fcn.000102a0(in_stack_00000030,arg2,4);
    }
    puVar8 = puVar8 + 1;
    if (auStackX_10 != puVar11) {
        fcn.000102a0(auStackX_10,arg2,4);
    }
    arg1_00 = puVar11 + 1;
    bVar2 = false;
    bVar3 = false;
    uVar12 = uVar10;
    uVar4 = auStackX_10[0];
    do {
        if ((uVar4 & 0xffffff) <= uVar12) {
            return 0x800000000000000e;
        }
        if (((*(arg1_00 + 1) & 0x7f) != 0) && (puVar8 != arg1_00)) {
            fcn.000102a0(puVar8,arg1_00,*(arg1_00 + 1) & 0x7f);
            uVar4 = auStackX_10[0];
        }
        uVar7 = *(arg1_00 + 1) & 0x7f;
        puVar8 = puVar8 + uVar7;
        uVar10 = uVar10 + uVar7;
        if (*arg1_00 == '\x0e') {
            if ((*(arg1_00 + 2) == *0x24120) && (*(arg1_00 + 10) == *0x24128)) {
                bVar2 = true;
            }
            else {
                bVar2 = false;
            }
        }
        else if ((*arg1_00 == '\x01') || (*arg1_00 == ']')) {
            if ((arg1_00 + 2 == acStack_48) ||
               (iVar5 = fcn.000102e0(arg1_00 + 2,acStack_48,2), uVar4 = auStackX_10[0], iVar5 == 0)) {
                bVar3 = true;
            }
            else {
                bVar3 = false;
            }
        }
        if (((bVar2) && (bVar3)) && (puVar1 = *piStackX_20, ((*(arg1_00 + 1) ^ *(puVar1 + 1)) & 0x7f) == 0)) {
            if (((*(puVar1 + 1) & 0x7f) == 0) || (arg1_00 == puVar1)) {
                iVar5 = 0;
            }
            else {
                iVar5 = fcn.000102e0(arg1_00,puVar1,*(puVar1 + 1) & 0x7f);
                uVar4 = auStackX_10[0];
            }
            if (iVar5 == 0) {
                if (in_stack_00000028 == NULL) goto code_r0x000225f8;
                puVar1 = *in_stack_00000028;
                break;
            }
        }
        uVar7 = *(arg1_00 + 1) & 0x7f;
        uVar12 = uVar12 + uVar7;
        arg1_00 = arg1_00 + uVar7;
    } while( true );
    while( true ) {
        if (((*(puVar1 + 1) & 0x7f) == 0) || (arg1_00 == puVar1)) {
            iVar5 = 0;
        }
        else {
            iVar5 = fcn.000102e0(arg1_00,puVar1,*(puVar1 + 1) & 0x7f);
            uVar4 = auStackX_10[0];
        }
        if (iVar5 == 0) break;
        do {
            uVar7 = *(arg1_00 + 1) & 0x7f;
            uVar12 = uVar12 + uVar7;
            arg1_00 = arg1_00 + uVar7;
            if ((uVar4 & 0xffffff) <= uVar12) goto code_r0x000225ea;
        } while (((*(arg1_00 + 1) ^ *(puVar1 + 1)) & 0x7f) != 0);
    }
code_r0x000225ea:
    if ((uVar4 & 0xffffff) <= uVar12) {
        return 0x800000000000000e;
    }
code_r0x000225f8:
    uVar7 = *(*piStackX_20 + 1) & 0x7f;
    puVar1 = *piStackX_20 + uVar7;
    if ((piStackX_20[2] - uVar7 != 0) && (puVar8 != puVar1)) {
        fcn.000102a0(puVar8,puVar1,piStackX_20[2] - uVar7);
        uVar4 = auStackX_10[0];
    }
    puVar8 = puVar8 + (piStackX_20[2] - uVar7);
    iVar9 = uVar10 + (piStackX_20[2] - uVar7);
    if (in_stack_00000028 != NULL) {
        if (((*(arg1_00 + 1) & 0x7f) != 0) && (puVar8 != arg1_00)) {
            fcn.000102a0(puVar8,arg1_00,*(arg1_00 + 1) & 0x7f);
            uVar4 = auStackX_10[0];
        }
        uVar6 = *(arg1_00 + 1) & 0x7f;
        puVar8 = puVar8 + uVar6;
        iVar9 = iVar9 + uVar6;
    }
    iVar13 = uVar12 + (*(arg1_00 + 1) & 0x7f);
    iVar5 = (uVar4 & 0xffffff) - iVar13;
    if ((iVar5 != 0) && (puVar8 != iVar13 + puVar11)) {
        fcn.000102a0(puVar8,iVar13 + puVar11,iVar5);
        uVar4 = auStackX_10[0];
    }
    auStackX_10[0] = uVar4 ^ (iVar9 + ((uVar4 & 0xffffff) - iVar13) ^ uVar4) & 0xffffff;
    if (in_stack_00000030 != auStackX_10) {
        fcn.000102a0(in_stack_00000030,auStackX_10,4);
    }
    return 0;
}


/* fcn.00022bf8 @ 0x22bf8 */

int64_t * fcn.00022bf8(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.0001fa44(arg1,0x20);
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


/* fcn.00022d20 @ 0x22d20 */

int64_t fcn.00022d20(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x25e20 + 0x98))(arg1,0x24150,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.00020d68(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x25e20 + 0xb8))(0x24150,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x25e20 + 0x98))(iStackX_20,0x24150,&uStackX_18), -1 < iVar1)) {
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


/* fcn.00023220 @ 0x23220 */

uint * fcn.00023220(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.0001fa74((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x000232b2;
        puVar2 = fcn.0001fa74(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x000232b2;
        }
        (**(*0x25e20 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x000232b2:
    return puVar1;
}


