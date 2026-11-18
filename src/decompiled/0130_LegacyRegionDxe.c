// decompiled by r2ghidra: 0130_LegacyRegionDxe.pe32
// functions: 4

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10860 = *(arg2 + 0x60);
    *0x10868 = *(arg2 + 0x58);
    *0x10858 = arg2;
    fcn.0001030c(arg1,arg2);
    return;
}


/* fcn.0001030c @ 0x1030c */

ulong fcn.0001030c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong auStackX_10 [3];
    uint32_t var_ba4h;
    uint uStack_cc8;
    uint uStack_cc4;
    uint uStack_cc0;
    uint uStack_cbc;
    uchar auStack_cb8 [3172];
    char cStack_54;
    
    uStack_cc8 = 0xec87d643;
    uStack_cc4 = 0x4bb5eba4;
    uStack_cc0 = 0x3e3fe5a1;
    uStack_cbc = 0xa90db236;
    auStackX_10[0] = 0xca9;
    iVar1 = (**(*0x10868 + 0x48))(L"Setup",&uStack_cc8,0,auStackX_10,auStack_cb8);
    if ((iVar1 < 0) || (cStack_54 == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        uVar2 = (**(*0x10860 + 0x148))(0x10850,0x10720,0x107f8,0);
    }
    return uVar2;
}


/* fcn.000103c0 @ 0x103c0 */

ulong fcn.000103c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    uint64_t uVar6;
    int *piVar7;
    uint32_t uVar8;
    int *in_stack_00000028;
    
    uVar2 = arg1;
    if ((((arg2 == 0) || (in_stack_00000028 == NULL)) || (uVar8 = arg2 + -1 + uVar2, uVar2 < 0xc0000)) ||
       (0xfffff < uVar8)) {
        uVar1 = 0x8000000000000002;
    }
    else {
        uVar4 = 0;
        uVar3 = 0;
        do {
            if ((*(uVar3 + 0x10730) <= uVar2) && (uVar2 < *(uVar3 + 0x10730) + *(uVar3 + 0x10734))) {
                uVar6 = uVar4;
                break;
            }
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 + 0xc;
            uVar6 = 0;
        } while (uVar3 < 0x9c);
        if (uVar6 < 0xd) {
            piVar7 = (uVar6 * 3 + 1) * 4 + 0x10730;
            puVar5 = uVar6 * 3 + 0x107d0;
            do {
                if (arg3 != 0) {
                    if (*arg3 == '\0') {
                        *(*puVar5 + 0xc0000000) = *(*puVar5 + 0xc0000000) & ~puVar5[1];
                    }
                    else {
                        *(*puVar5 + 0xc0000000) = *(*puVar5 + 0xc0000000) | puVar5[1];
                    }
                }
                if (arg4 != 0) {
                    if (*arg4 == '\0') {
                        *(*puVar5 + 0xc0000000) = *(*puVar5 + 0xc0000000) & ~puVar5[2];
                    }
                    else {
                        *(*puVar5 + 0xc0000000) = *(*puVar5 + 0xc0000000) | puVar5[2];
                    }
                }
                if ((piVar7[-1] <= uVar8) && (uVar8 < piVar7[-1] + *piVar7)) {
                    *in_stack_00000028 = *piVar7;
                    break;
                }
                uVar6 = uVar6 + 1;
                puVar5 = puVar5 + 3;
                piVar7 = piVar7 + 3;
            } while (uVar6 < 0xd);
        }
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000106e8 @ 0x106e8 */

ulong fcn.000106e8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10860 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


