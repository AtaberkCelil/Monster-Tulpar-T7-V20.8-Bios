// decompiled by r2ghidra: 0848_CapsuleRuntimeDxe.pe32
// functions: 16

/* entry0 @ 0x11124 */

int64_t entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    
    fcn.0001119c(arg1,in_RDX);
    *0x12194 = 0x6400000;
    *0x12190 = 0xa00000;
    fcn.0001176c();
    iVar1 = *0x121a8;
    *(*0x121a8 + 0x70) = 0x113c8;
    *(iVar1 + 0x78) = 0x115bc;
    iVar1 = (**(*0x121a0 + 0x148))(0x12180,0x12010,0,0);
    if (iVar1 < 0) {
        fcn.00011290();
    }
    return iVar1;
}


/* fcn.0001119c @ 0x1119c */

void fcn.0001119c(ulong noname_0,int64_t arg1)

{
    *0x121a8 = *(arg1 + 0x58);
    *0x121a0 = *(arg1 + 0x60);
    *0x12198 = arg1;
    *0x121b0 = *0x121a8;
    *0x121c8 = *0x121a0;
    (**(*0x121a0 + 0x50))(0x201,8,0x11900,0,0x121b8);
    (**(*0x121c8 + 0x50))(0x60000202,8,0x1190c,0,0x121c0);
    if (*0x121d8 == 0) {
        fcn.00011ad8();
    }
    *0x121f0 = *0x121a8;
    (**(*0x121a0 + 0x50))(0x60000202,0x10,0x11bd0,0,0x121e8);
    (**(*0x121a0 + 0x50))(0x201,0x10,0x11bc8,0,0x121f8);
    return;
}


/* fcn.00011ad8 @ 0x11ad8 */

ulong fcn.00011ad8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    *0x121d8 = 0;
    if (*(*0x12198 + 0x68) != 0) {
        piVar2 = *(*0x12198 + 0x70);
        do {
            if ((*0x12030 == *piVar2) && (*0x12038 == piVar2[1])) {
                *0x121d8 = (*(*0x12198 + 0x70))[uVar1 * 3 + 2];
                return 0;
            }
            uVar1 = uVar1 + 1;
            piVar2 = piVar2 + 3;
        } while (uVar1 < *(*0x12198 + 0x68));
    }
    return 0x800000000000000e;
}


/* fcn.0001176c @ 0x1176c */

void fcn.0001176c(void)

{
    int64_t iVar1;
    ulong uStackX_8;
    uchar auStackX_10 [24];
    ulong uStack_28;
    ulong uStack_20;
    uint64_t uStack_18;
    
    uStack_28 = fcn.000116bc(0xe000);
    uStack_18 = 0x8000;
    uStack_20 = fcn.000116bc(0x8000);
    iVar1 = (**(*0x121a8 + 0x58))(L"CapsuleLongModeBuffer",0x12040,3,0x18,&uStack_28);
    if (iVar1 < 0) {
        (**(*0x121a0 + 0x30))(uStack_20,((uStack_18 & 0xfff) != 0) + (uStack_18 >> 0xc));
    }
    else {
        (**(*0x121a0 + 0x50))(0x200,8,0x11728,0,&uStackX_8);
        (**(*0x121a0 + 0xa8))(0x12000,uStackX_8,auStackX_10);
        (**(*0x121a0 + 0x68))(uStackX_8);
    }
    return;
}


/* fcn.00011290 @ 0x11290 */

void fcn.00011290(void)

{
    (**(*0x121a0 + 0x70))(*0x121e8);
    (**(*0x121a0 + 0x70))(*0x121f8);
    (**(*0x121c8 + 0x70))(*0x121b8);
    //WARNING: Could not recover jumptable at 0x000112d9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x121c8 + 0x70))(*0x121c0);
    return;
}


/* fcn.00011874 @ 0x11874 */

ulong fcn.00011874(int64_t arg1)

{
    char16_t cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar2 = fcn.00011848();
    if (0x1d < uVar2) {
        return 0x8000000000000005;
    }
    if (L"CapsuleUpdateData" <= arg1) {
        if (arg1 < L"CapsuleUpdateData" + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (L"CapsuleUpdateData" + 1 <= arg1) goto code_r0x000118d8;
    }
    if (L"CapsuleUpdateData" + 1 <= arg1 + 0x3c) {
        return 0x800000000000000f;
    }
code_r0x000118d8:
    cVar1 = L'C';
    iVar3 = L"CapsuleUpdateData" - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar3 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar4;
    return 0;
}


/* fcn.00011934 @ 0x11934 */

ulong fcn.00011934(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    char *pcVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    pcVar7 = &cStack_38;
    pcVar8 = &cStack_38;
    if ((pcVar3 == NULL) || (0x1e8481 < arg2)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar10 = 0;
        uVar6 = arg3;
        if (arg3 < 0) {
            iVar10 = 1;
            pcVar7 = &cStack_38;
            uVar6 = -arg3;
            do {
                pcVar7 = pcVar7 + 1;
                uVar4 = uVar6 / 10;
                *pcVar7 = "0123456789ABCDEFP "[uVar6 % 10];
                uVar6 = uVar4;
            } while (uVar4 != 0);
        }
        else {
            do {
                pcVar7 = pcVar7 + 1;
                uVar4 = uVar6 / 10;
                *pcVar7 = "0123456789ABCDEFP "[uVar6 % 10];
                uVar6 = uVar4;
            } while (uVar4 != 0);
        }
        pcVar5 = 0x25;
        if (pcVar7 + (iVar10 - &cStack_38) < 0x25) {
            pcVar5 = pcVar7 + (iVar10 - &cStack_38);
        }
        if (arg2 < pcVar5 * 2 + 2U) {
            uVar2 = 0x8000000000000005;
        }
        else {
            pcVar7 = pcVar3 + pcVar5 * 2;
            if (arg3 < 0) {
                arg3 = -arg3;
                iVar10 = 0;
                do {
                    if (pcVar7 <= pcVar3) break;
                    pcVar3[0] = '-';
                    pcVar3[1] = '\0';
                    iVar10 = iVar10 + 1;
                    pcVar3 = pcVar3 + 2;
                } while (iVar10 < 1);
            }
            do {
                pcVar8 = pcVar8 + 1;
                uVar6 = arg3 / 10;
                *pcVar8 = "0123456789ABCDEFP "[arg3 % 10];
                arg3 = uVar6;
            } while (uVar6 != 0);
            for (iVar10 = pcVar8 - &cStack_38; iVar10 != 0; iVar10 = iVar10 + -1) {
                cVar1 = *pcVar8;
                iVar9 = 0;
                do {
                    if (pcVar7 <= pcVar3) break;
                    *pcVar3 = cVar1;
                    iVar9 = iVar9 + 1;
                    pcVar3[1] = cVar1 >> 7;
                    pcVar3 = pcVar3 + 2;
                } while (iVar9 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar10 = 0;
            do {
                if (pcVar7 + 2 <= pcVar3) break;
                pcVar3[0] = '\0';
                pcVar3[1] = '\0';
                iVar10 = iVar10 + 1;
                pcVar3 = pcVar3 + 2;
            } while (iVar10 < 1);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00011b3c @ 0x11b3c */

ulong fcn.00011b3c(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint32_t uVar5;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *piVar2;
    piVar3 = 0x12060;
    uVar5 = 0;
    while ((iVar1 != *piVar3 || (piVar2[1] != piVar3[1]))) {
        uVar5 = uVar5 + 1;
        piVar3 = piVar3 + 2;
        if (1 < uVar5) {
            uVar5 = 0;
            piVar3 = 0x12080;
            while ((iVar1 != *piVar3 || (piVar2[1] != piVar3[1]))) {
                uVar5 = uVar5 + 1;
                piVar3 = piVar3 + 2;
                if (4 < uVar5) {
                    iVar4 = 0;
                    piVar3 = *0x12140;
                    while( true ) {
                        if (piVar3 == NULL) {
                            return 0x8000000000000003;
                        }
                        if ((*piVar3 == iVar1) && (piVar3[1] == piVar2[1])) break;
                        iVar4 = iVar4 + 1;
                        piVar3 = *(iVar4 * 8 + 0x12140);
                    }
                    return 0;
                }
            }
            return 0;
        }
    }
    return 0;
}


/* fcn.00011be4 @ 0x11be4 */

int64_t fcn.00011be4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t arg1_00;
    uint64_t uVar2;
    uint32_t uStackX_10;
    uint32_t auStackX_18 [2];
    
    if (arg2 != 0) {
        fcn.00011020(1,0,auStackX_18,0);
        if ((uStackX_10 & 0x80000) == 0) {
            fcn.000110f0();
        }
        else {
            uVar2 = auStackX_18[0] >> 5 & 0x7f8;
            arg1_00 = ~(uVar2 - 1) & arg1;
            do {
                iVar1 = fcn.00011100(arg1_00);
                arg1_00 = uVar2 + iVar1;
            } while (arg1_00 != (arg2 + -1 + uVar2 + arg1 & ~(uVar2 - 1)));
        }
    }
    return arg1;
}


/* fcn.000112e0 @ 0x112e0 */

int64_t fcn.000112e0(int64_t arg1)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg3;
    ulong noname_2;
    ulong uStackX_18;
    
    iVar3 = fcn.00011874(arg1);
    iVar4 = 0;
    if (-1 < iVar3) {
        iVar1 = *arg1;
        piVar2 = arg1;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar1 = *piVar2;
        }
        uStackX_18 = 0;
        noname_2 = 0;
        arg3 = 1;
        iVar3 = (**(*0x121f0 + 0x48))(arg1,0x12040,0,&uStackX_18,0);
        while (iVar3 == -0x7ffffffffffffffb) {
            iVar3 = fcn.00011934(iVar4 * 2 + arg1,iVar4 * -2 + 0x3c,noname_2,arg3);
            if (iVar3 < 0) {
                return iVar3;
            }
            arg3 = arg3 + 1;
            uStackX_18 = 0;
            noname_2 = 0;
            iVar3 = (**(*0x121f0 + 0x48))(arg1,0x12040,0,&uStackX_18,0);
        }
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 4096 named .text
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


/* fcn.000116bc @ 0x116bc */

int64_t fcn.000116bc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iStackX_8;
    
    iStackX_8 = 0xffffffff;
    (**(*0x121a0 + 0x28))(1,0,((arg1 & 0xfffU) != 0) + (arg1 >> 0xc),&iStackX_8);
    iVar1 = iStackX_8;
    if (arg1 != 0) {
        fcn.00011000(iStackX_8,arg1);
    }
    return iVar1;
}


/* fcn.00011848 @ 0x11848 */

uint64_t fcn.00011848(void)

{
    int16_t *piVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    uVar2 = 0;
    uVar3 = uVar2;
    do {
        if (0x39 < uVar3) {
            return 0x1e;
        }
        uVar2 = uVar2 + 1;
        piVar1 = uVar3 + 0x120d2;
        uVar3 = uVar3 + 2;
    } while (*piVar1 != 0);
    return uVar2;
}


/* fcn.00011020 @ 0x11020 */

uint64_t fcn.00011020(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.000110f0 @ 0x110f0 */

void fcn.000110f0(void)

{
    return;
}


/* fcn.00011100 @ 0x11100 */

int64_t fcn.00011100(int64_t arg1)

{
    clflush(*arg1);
    return arg1;
}


