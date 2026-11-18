// decompiled by r2ghidra: 1747_TrustedDeviceSetupApp.pe32
// functions: 131

/* entry0 @ 0x102c8 */

ulong entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    char cVar2;
    ulong uVar3;
    
    fcn.0001031c(param_1,param_2);
    uVar3 = fcn.0001044c(param_1,param_2);
    while( true ) {
        cVar2 = fcn.00018418(0x18740);
        iVar1 = *0x18740;
        if (cVar2 != '\0') break;
        fcn.00018460(*0x18740);
        (**(*0x1a798 + 0x48))(iVar1);
    }
    return uVar3;
}


/* fcn.0001031c @ 0x1031c */

void fcn.0001031c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong *puStackX_8;
    ulong uStackX_10;
    int64_t aiStackX_18 [2];
    
    *0x1a798 = *(arg2 + 0x60);
    *0x1a7a0 = *(arg2 + 0x58);
    *0x1a788 = arg1;
    *0x1a790 = arg2;
    (**(*0x1a798 + 0x140))(0x18768,0,0x1a7b8);
    (**(*0x1a798 + 0x140))(0x18558,0,0x1a7c0);
    (**(*0x1a798 + 0x140))(0x18588,0,0x1a7c8);
    (**(*0x1a798 + 0x140))(0x18548,0,0x1a7b0);
    (**(*0x1a798 + 0x140))(0x185a8,0,0x1a7a8);
    iVar1 = (**(*0x1a798 + 0x140))(0x18568,0,&puStackX_8);
    if (-1 < iVar1) {
        iVar1 = (**puStackX_8)(puStackX_8,0x1a751);
        if ((-1 < iVar1) && (*0x1a751 != '\0')) {
            iVar1 = (*puStackX_8[1])(puStackX_8,aiStackX_18);
            if (-1 < iVar1) {
                uStackX_10 = 0;
                (**(aiStackX_18[0] + 0xe0))(0x1569c,0x18750,&uStackX_10);
            }
        }
    }
    return;
}


/* fcn.0001044c @ 0x1044c */

//WARNING: Variable defined which should be unmapped: var_14h
//WARNING: Variable defined which should be unmapped: var_18h

int * fcn.0001044c(uint32_t arg1,int64_t arg2)

{
    bool bVar1;
    bool bVar2;
    char cVar3;
    char cVar4;
    int64_t iVar5;
    int *piVar6;
    uint in_register_0000000c;
    char *pcVar7;
    int64_t *piVar8;
    char *pcVar9;
    uchar *arg2_00;
    int *piVar10;
    int *piVar11;
    uint8_t **ppuVar12;
    int *arg4;
    uint8_t *puStackX_8;
    uint8_t *puStackX_10;
    uint8_t *puStackX_18;
    int aiStackX_20 [2];
    uint32_t var_58h;
    uint32_t var_60h;
    int iStack_58;
    uchar auStack_54 [4];
    int *apiStack_50 [2];
    int32_t var_18h;
    int64_t var_14h;
    
    puStackX_8 = CONCAT44(in_register_0000000c,arg1);
    piVar11 = NULL;
    arg4 = aiStackX_20;
    ppuVar12 = &puStackX_8;
    arg2_00 = auStack_54;
    cVar4 = '\0';
    iStack_58 = 0;
    puStackX_10 = arg2 & 0xffffffffffff0000;
    bVar2 = false;
    bVar1 = false;
    piVar10 = NULL;
    apiStack_50[0] = NULL;
    section..text(0,arg2_00,ppuVar12,arg4);
    if (((puStackX_8 != 0x756e6547) || (puStackX_18 != 0x49656e69)) || (aiStackX_20[0] != 0x6c65746e)) {
        fcn.00010b00(0x191e8,arg2_00,ppuVar12,arg4);
        return 0xffff;
    }
    *0x1a750 = 1;
    fcn.00010b00(0x19240,0x19200,ppuVar12,arg4);
    ppuVar12 = &puStackX_8;
    *0x1a750 = 0;
    puStackX_8 = NULL;
    iVar5 = (**(*0x1a798 + 0x140))(0x18730,0);
    if (iVar5 < 0) {
code_r0x00010543:
        fcn.00010b00(0x19248,iVar5,ppuVar12,arg4);
    }
    else {
        if (puStackX_8 == NULL) {
            iVar5 = -0x7ffffffffffffff2;
        }
        else {
            if ((*puStackX_8 < 3) || (*(puStackX_8 + 0x28) == NULL)) {
                iVar5 = -0x7ffffffffffffff2;
                goto code_r0x00010543;
            }
            iVar5 = (**(puStackX_8 + 0x28))();
        }
        if (iVar5 < 0) goto code_r0x00010543;
    }
    piVar6 = fcn.00010b80();
    if (piVar6 < 0) {
        pcVar7 = "Error In Initializing Graphic Console:%r\n";
code_r0x00010569:
        fcn.00010b00(pcVar7,piVar6,ppuVar12,arg4);
        return piVar6;
    }
    ppuVar12 = 0x185d0;
    piVar8 = 0x186f0;
    arg4 = NULL;
    pcVar7 = NULL;
    *0x1a758 = fcn.000151c4(0x186f0,0,0x185d0,0);
    if (*0x1a758 == 0) {
        piVar8 = fcn.000152e0(piVar8);
        if (piVar8 == NULL) {
            fcn.00010b00(0x197f0,pcVar7,ppuVar12,arg4);
            piVar6 = 0x8000000000000009;
            pcVar7 = "Error In Initializing String Support :%r\n";
            goto code_r0x00010569;
        }
        *0x1a758 = *piVar8;
        (**(*0x1a798 + 0x48))();
    }
    piVar6 = fcn.00010f44();
    if (piVar6 < 0) {
        pcVar9 = "Error In Displaying Welcome Screen:%r\n";
    }
    else {
        piVar6 = fcn.00011994(piVar8);
        if (piVar6 == NULL) {
            if ((*(*0x1a740 + 0x14) & 0x800) == 0) {
                if (*(*0x1a740 + 0x10) == 0) {
                    *0x1a750 = 1;
                    fcn.00010b00(0x193b0,pcVar7,ppuVar12,arg4);
                    *0x1a750 = 0;
                    piVar6 = piVar11;
                    goto code_r0x00010a2c;
                }
                if (*(*0x1a740 + 0x16) == 0) goto code_r0x00010a2c;
                if (*(*0x1a740 + 0x16) == 1) {
                    puStackX_8 = NULL;
                    iVar5 = (**(*0x1a798 + 0x140))(0x18730,0,&puStackX_8);
                    bVar1 = bVar2;
                    if (-1 < iVar5) {
                        if (puStackX_8 == NULL) {
                            iVar5 = -0x7ffffffffffffff2;
                        }
                        else {
                            if ((*puStackX_8 < 2) || (*(puStackX_8 + 0x18) == NULL)) goto code_r0x00010713;
                            iVar5 = (**(puStackX_8 + 0x18))();
                        }
                        bVar1 = false;
                        if (-1 < iVar5) {
                            bVar1 = true;
                        }
                    }
code_r0x00010713:
                    ppuVar12 = *(*0x1a740 + 0x5e);
                    pcVar7 = *0x1a740 + 0x1e;
                    arg4 = *(*0x1a740 + 0x14) >> 4 & 1;
                    iVar5 = fcn.00011c8c(*(*0x1a740 + 0x1a),pcVar7,ppuVar12,arg4);
                    if ((iVar5 != 0) || (piVar6 = fcn.00011654(3), piVar6 == NULL)) goto code_r0x00010788;
                    pcVar7 = 
                    "c:\\tcwork\\a62c38facd75f450\\edk2_2017\\AppPkg\\Applications\\IntelDropShipApp\\Sources\\Intel_TDS_Extension.c"
                    ;
                    ppuVar12 = 0x150;
                    arg4 = piVar6;
                    fcn.00010b00(0x19438,0x193d0,0x150,piVar6);
                }
                else {
                    *0x1a750 = 1;
                    fcn.00010b00(0x19470,pcVar7,ppuVar12,arg4);
                    *0x1a750 = 0;
code_r0x00010788:
                    if ((*(*0x1a740 + 0x14) & 1) == 0) goto code_r0x0001089e;
                    ppuVar12 = &puStackX_8;
                    puStackX_8 = NULL;
                    piVar6 = (**(*0x1a798 + 0x140))(0x18730);
                    cVar3 = cVar4;
                    if ((-1 < piVar6) && (*(puStackX_8 + 8) != NULL)) {
                        cVar3 = (**(puStackX_8 + 8))();
                    }
                    if (piVar6 < 0) {
                        pcVar9 = "Error In Getting BIOS Chassis Intrusion Feature Status:%r\n";
                    }
                    else if ((cVar3 == '\0') && (piVar6 = fcn.00011654(1), piVar6 != NULL)) {
                        pcVar9 = "Error Updating the Seal Status: 0x%x\n";
                    }
                    else {
                        ppuVar12 = &puStackX_18;
                        pcVar7 = NULL;
                        puStackX_18 = NULL;
                        piVar6 = (**(*0x1a798 + 0x140))(0x18730);
                        if (piVar6 < 0) {
code_r0x0001084d:
                            if (-1 < piVar6) {
                                if (cVar4 != '\0') {
                                    *0x1a750 = 1;
                                    fcn.00010b00(0x19528,pcVar7,ppuVar12,arg4);
                                    *0x1a750 = 0;
                                    piVar6 = fcn.00011654(0);
                                    if (piVar6 < 0) {
                                        pcVar9 = "Error Updating the Seal Status:%x";
                                        piVar11 = piVar10;
                                        goto code_r0x000109d4;
                                    }
                                }
code_r0x0001089e:
                                if ((*(*0x1a740 + 0x14) & 0x40) == 0) goto code_r0x00010938;
                                piVar6 = fcn.000117d4(apiStack_50);
                                piVar11 = apiStack_50[0];
                                if (piVar6 != NULL) {
                                    pcVar7 = piVar6;
                                    fcn.00010b00(0x19580,piVar6,ppuVar12,arg4);
                                    piVar11 = apiStack_50[0];
                                    goto code_r0x000109d9;
                                }
                                iVar5 = fcn.00012750(apiStack_50[0]);
                                if (iVar5 == 0) {
                                    piVar6 = fcn.00011654(4);
                                    if (-1 < piVar6) goto code_r0x00010938;
                                    pcVar9 = "Error In Updating Seal Status:%x\n";
                                }
                                else {
                                    piVar6 = fcn.00011654(5);
                                    if (piVar6 < 0) {
                                        pcVar9 = "Error in Updating Seal Status:%x\n";
                                    }
                                    else {
                                        if (iVar5 != 1) {
                                            piVar10 = fcn.0001113c();
                                            if (piVar10 < 0) {
                                                fcn.00010b00(0x195c8,piVar10,ppuVar12,arg4);
                                                pcVar7 = piVar10;
                                            }
                                            fcn.00010b00(0x195f0,pcVar7,ppuVar12,arg4);
                                        }
code_r0x00010938:
                                        pcVar9 = 0x2000;
                                        if (((*(*0x1a740 + 0x14) & 0x2000) == 0) &&
                                           (pcVar9 = 0x1000, (*(*0x1a740 + 0x14) & 0x1000) != 0)) {
                                            ppuVar12 = &puStackX_10;
                                            piVar10 = &iStack_58;
                                            pcVar7 = fcn.000112e4(0x1000,piVar10,ppuVar12);
                                            if (pcVar7 == NULL) {
                                                piVar6 = fcn.0001248c(pcVar9,piVar10,ppuVar12,arg4);
                                                pcVar7 = piVar10;
                                                if (piVar6 < 0) {
                                                    pcVar9 = "Error In Extending Disk Measurement Event:%x\n";
                                                    goto code_r0x000109d4;
                                                }
                                            }
                                            else {
                                                pcVar9 = "Error In Getting Disk Parameters:0x%x\n";
                                                fcn.00010b00(0x19668,pcVar7,ppuVar12,arg4);
                                            }
                                        }
                                        piVar6 = fcn.00011994(pcVar9);
                                        if (piVar6 == NULL) {
                                            piVar6 = fcn.000122c8();
                                            if (-1 < piVar6) goto code_r0x000109d9;
                                            pcVar9 = "Error In Extending Seal Event:%r\n";
                                        }
                                        else {
                                            pcVar9 = "Error In Getting Seal Data:0x%x\n";
                                        }
                                    }
                                }
                                goto code_r0x000109d4;
                            }
                        }
                        else {
                            if (*(puStackX_18 + 0x10) != NULL) {
                                cVar4 = (**(puStackX_18 + 0x10))();
                                goto code_r0x0001084d;
                            }
                            piVar6 = 0x8000000000000018;
                        }
                        pcVar9 = "Error In Getting BIOS chassis Intrusion Detection State:%r\n";
                        piVar11 = piVar10;
                    }
code_r0x000109d4:
                    pcVar7 = piVar6;
                    fcn.00010b00(pcVar9,piVar6,ppuVar12,arg4);
                }
code_r0x000109d9:
                piVar10 = piVar11;
                if (bVar1) {
                    ppuVar12 = &puStackX_10;
                    pcVar7 = NULL;
                    puStackX_10 = NULL;
                    piVar6 = (**(*0x1a798 + 0x140))(0x18730);
                    if (-1 < piVar6) {
                        if (((puStackX_10 == NULL) || (*puStackX_10 < 2)) || (*(puStackX_10 + 0x20) == NULL)) {
                            piVar6 = 0x800000000000000e;
                        }
                        else {
                            piVar6 = (**(puStackX_10 + 0x20))();
                        }
                    }
                }
                goto code_r0x00010a2c;
            }
            pcVar9 = "\n Measurements Collection Mode Enabled\n";
            *0x1a750 = 1;
            fcn.00010b00(0x19330,pcVar7,ppuVar12,arg4);
            *0x1a750 = 0;
            piVar6 = fcn.000122c8();
            if (piVar6 < 0) {
                pcVar9 = "Error In Extending Seal Event:%r\n";
                fcn.00010b00(0x19358,piVar6,ppuVar12,arg4);
                pcVar7 = piVar6;
            }
            piVar6 = fcn.000114d4(pcVar9);
            if (piVar6 == NULL) goto code_r0x00010a2c;
            pcVar9 = "Error In in DS Feature Deactivation :0x%x\n";
        }
        else {
            pcVar9 = "Error In Getting Feature State Data:0x%x\n";
        }
    }
    pcVar7 = piVar6;
    fcn.00010b00(pcVar9,piVar6,ppuVar12,arg4);
    piVar10 = piVar11;
code_r0x00010a2c:
    if (*0x1a748 != 0) {
        (**(*0x1a798 + 0x48))();
        *0x1a748 = 0;
    }
    if (piVar10 != NULL) {
        (**(*0x1a798 + 0x48))(piVar10);
    }
    iVar5 = *0x1a740;
    if (*0x1a740 != 0) {
        (**(*0x1a798 + 0x48))();
        *0x1a740 = 0;
    }
    fcn.00010d40();
    piVar8 = fcn.000152e0(iVar5);
    if (piVar8 == NULL) {
        fcn.00010b00(0x197f0,pcVar7,ppuVar12,arg4);
    }
    else {
        iVar5 = *piVar8;
        (**(*0x1a798 + 0x48))(piVar8);
        (**(*(*0x1a790 + 0x40) + 0x38))(*(*0x1a790 + 0x40),0,0);
        if (iVar5 != 0) {
            (**(*0x1a7c0 + 8))(*0x1a7c0,iVar5);
        }
    }
    return piVar6;
}


/* fcn.00018460 @ 0x18460 */

ulong fcn.00018460(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if (cVar1 != '\0') {
        cVar1 = fcn.00018418(arg1);
        if (cVar1 != '\0') {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x221,
                         "!IsListEmpty (Entry)");
        }
    }
    *(*arg1 + 8) = *(arg1 + 8);
    **(arg1 + 8) = *arg1;
    return *arg1;
}


/* fcn.00012d54 @ 0x12d54 */

uchar fcn.00012d54(void)

{
    return 0;
}


/* fcn.00018418 @ 0x18418 */

bool fcn.00018418(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if (cVar1 != '\0') {
        cVar1 = fcn.00018294(arg1,arg1,0);
        if (cVar1 == '\0') {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x169,
                         "InternalBaseLibIsNodeInList (ListHead, ListHead, ((BOOLEAN)(0==1)))");
        }
    }
    return *arg1 == arg1;
}


/* fcn.00018294 @ 0x18294 */

bool fcn.00018294(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x3c,
                     "List != ((void *) 0)");
    }
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (*arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x3d,
                     "List->ForwardLink != ((void *) 0)");
    }
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (*(arg1 + 8) == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x3e,
                     "List->BackLink != ((void *) 0)");
    }
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg2 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x3f,
                     "Node != ((void *) 0)");
    }
    uVar4 = 0;
    piVar3 = arg1;
    if ((*0x191e4 == '\0') || (arg3 == '\0')) {
        uVar2 = *0x191e0;
    }
    else {
        uVar2 = *0x191e0;
        do {
            piVar3 = *piVar3;
            if (uVar2 != 0) {
                uVar4 = uVar4 + 1;
                cVar1 = fcn.00012d54();
                if (cVar1 == '\0') {
code_r0x0001838e:
                    uVar2 = *0x191e0;
                }
                else {
                    uVar2 = *0x191e0;
                    if (uVar2 <= uVar4) {
                        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",
                                     0x50,"Count < _gPcd_FixedAtBuild_PcdMaximumLinkedListLength");
                        goto code_r0x0001838e;
                    }
                }
                if (uVar2 <= uVar4) {
                    return piVar3 == arg2;
                }
            }
            if (piVar3 == arg1) {
                if (piVar3 != arg2) {
                    return false;
                }
                break;
            }
        } while (piVar3 != arg2);
    }
    if (uVar2 != 0) {
        do {
            piVar3 = *piVar3;
            uVar4 = uVar4 + 1;
            if (piVar3 == arg1) break;
        } while (uVar4 < uVar2);
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (*0x191e0 <= uVar4)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0x6d,
                         "Count < _gPcd_FixedAtBuild_PcdMaximumLinkedListLength");
        }
    }
    return true;
}


/* fcn.00012d50 @ 0x12d50 */

void fcn.00012d50(void)

{
    return;
}


/* section..text @ 0x102a0 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    //[00] -r-x section size 33440 named .text
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


/* fcn.00010b00 @ 0x10b00 */

void fcn.00010b00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int64_t iVar2;
    uchar *puVar3;
    uchar auStackY_108 [64];
    int64_t in_stack_ffffffffffffff38;
    int32_t in_stack_ffffffffffffff40;
    
    if (*0x1a750 != '\0') {
        fcn.00012ddc(auStackY_108,0x100,0,arg1,in_stack_ffffffffffffff38,in_stack_ffffffffffffff40);
        iVar2 = fcn.00017c3c(auStackY_108);
        puVar3 = auStackY_108;
        while (iVar2 != 0) {
            iVar2 = iVar2 + -1;
            do {
                uVar1 = in(0x3fd);
            } while ((uVar1 & 0x20) == 0);
            out(0x3f8,*puVar3);
            puVar3 = puVar3 + 1;
        }
    }
    return;
}


/* fcn.00010b80 @ 0x10b80 */

int64_t fcn.00010b80(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_R9;
    
    *0x1a768 = 0;
    *0x1a76c = 0;
    iVar2 = 0x1a770;
    iVar1 = (**(*0x1a798 + 0x140))(0x18598,0);
    if (iVar1 < 0) {
        fcn.00010b00(0x197b0,iVar1,iVar2,in_R9);
        *0x1a770 = 0;
    }
    else {
        iVar2 = 0x1a760;
        iVar1 = (**(*0x1a798 + 0x140))(0x18548,0);
        if (-1 < iVar1) {
            iVar1 = *(*(*0x1a770 + 0x18) + 8);
            *0x1a768 = *(iVar1 + 4);
            *0x1a76c = *(iVar1 + 8);
            return 0;
        }
        fcn.00010b00(0x197d0,iVar1,iVar2,in_R9);
    }
    return iVar1;
}


/* fcn.000151c4 @ 0x151c4 */

uint64_t fcn.000151c4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t *piVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t auStack_48 [2];
    
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iVar2 = arg3;
        uVar4 = 0;
        iStackX_18 = arg3;
        iStackX_20 = arg4;
        do {
            iVar1 = fcn.00018120(iVar2);
            piVar6 = piVar6 + 1;
            uVar3 = uVar4 + iVar1 + -4;
            uVar4 = uVar3;
            iVar2 = *piVar6;
        } while (iVar2 != 0);
        if (uVar3 != 0) {
            iVar2 = fcn.00013b18(uVar3 + 0x18);
            if (iVar2 != 0) {
                fcn.00017fa0(iVar2,arg1);
                *(iVar2 + 0x10) = uVar3 + 0x18;
                iVar5 = iVar2 + 0x14;
                piVar6 = &iStackX_18;
                do {
                    iVar1 = fcn.00018120(arg3);
                    fcn.00017570(iVar5,arg3 + 4,iVar1 - 4U);
                    piVar6 = piVar6 + 1;
                    iVar5 = iVar5 + (iVar1 - 4U);
                    arg3 = *piVar6;
                } while (arg3 != 0);
                fcn.00017570(iVar5,0x1a6e8,4);
                iVar5 = (***0x1a7c0)(*0x1a7c0,iVar2,arg2,auStack_48);
                if (iVar5 < 0) {
                    auStack_48[0] = 0;
                }
                (**(*0x1a798 + 0x48))(iVar2);
                return auStack_48[0];
            }
        }
    }
    return 0;
}


/* fcn.000152e0 @ 0x152e0 */

int64_t * fcn.000152e0(int64_t arg1)

{
    char cVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t iVar5;
    int64_t iStackX_8;
    uchar auStackX_10 [8];
    uchar auStack_28 [16];
    
    iStackX_8 = 0;
    iVar2 = (**(*0x1a7c0 + 0x18))(*0x1a7c0,0,0,&iStackX_8,auStackX_10);
    if ((iVar2 == -0x7ffffffffffffffb) && (piVar3 = fcn.00013b18(iStackX_8 + 8), piVar3 != NULL)) {
        iVar2 = (**(*0x1a7c0 + 0x18))(*0x1a7c0,0,0,&iStackX_8,piVar3);
        if (-1 < iVar2) {
            iVar5 = 0;
            iVar2 = 0;
            if (*piVar3 != 0) {
                piVar4 = piVar3;
                do {
                    fcn.00015118(*piVar4,auStack_28);
                    cVar1 = fcn.00017f38(auStack_28,0x186f0);
                    if (cVar1 != '\0') {
                        piVar3[iVar5] = *piVar4;
                        iVar5 = iVar5 + 1;
                    }
                    iVar2 = iVar2 + 1;
                    piVar4 = piVar3 + iVar2;
                } while (*piVar4 != 0);
                if (iVar5 != 0) {
                    piVar3[iVar5] = 0;
                    return piVar3;
                }
            }
        }
        (**(*0x1a798 + 0x48))(piVar3);
    }
    return NULL;
}


/* fcn.00010f44 @ 0x10f44 */

ulong fcn.00010f44(ulong param_1,int64_t param_2,int64_t param_3,int64_t param_4)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg1;
    int64_t iVar3;
    uint32_t arg1_00;
    char *arg1_01;
    int64_t iVar4;
    uint64_t uVar5;
    uint *puVar6;
    uint64_t arg2;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    int32_t var_30h;
    int32_t var_38h;
    
    auStackX_10[0] = 0x989898;
    auStackX_8[0] = 0;
    fcn.00010d40();
    iVar1 = fcn.00013b18(400);
    if (iVar1 == 0) {
        arg1_01 = "Error AllocatteZeroPool pManufacturerString\n";
code_r0x00010f82:
        fcn.00010b00(arg1_01,param_2,param_3,param_4);
        return 0x8000000000000009;
    }
    iVar1 = fcn.00013b18(400);
    if (iVar1 == 0) {
        arg1_01 = "Error AllocatteZeroPool pPcString\n";
        goto code_r0x00010f82;
    }
    iVar4 = 400;
    iVar2 = fcn.00013b18(400);
    if (iVar2 == 0) {
        arg1_01 = "Error AllocateZeroPool pWelcomeString\n";
        goto code_r0x00010f82;
    }
    arg1 = fcn.00010c34(iVar4);
    arg1_00 = iVar4;
    if ((arg1 != 0) && (iVar1 = fcn.000153d4(arg1_00,5,param_3), iVar1 != 0)) {
        iVar2 = fcn.000153d4(arg1_00,4,param_3);
        if (iVar2 == 0) goto code_r0x00011100;
        iVar4 = fcn.00017dc8(iVar1);
        iVar2 = fcn.00017dc8(iVar2);
        iVar3 = fcn.00017dc8(arg1);
        arg2 = (*0x1a76c >> 1) - 0x19;
        puVar6 = auStackX_10;
        uVar5 = *0x1a768 + (iVar3 + iVar4 + iVar2 + 2) * -8 >> 1;
        fcn.00010d90(uVar5,arg2,puVar6,auStackX_8);
        iVar2 = fcn.000153d4(uVar5,6,puVar6);
        if (iVar2 == 0) goto code_r0x00011100;
        iVar2 = fcn.00017dc8(iVar2);
        puVar6 = auStackX_10;
        uVar5 = *0x1a768 + iVar2 * -8 >> 1;
        fcn.00010d90(uVar5,arg2 + 0x19,puVar6,auStackX_8);
        iVar2 = fcn.000153d4(uVar5,7,puVar6);
        if (iVar2 == 0) goto code_r0x00011100;
        iVar4 = fcn.00017dc8(iVar2);
        fcn.00010d90(*0x1a768 + iVar4 * -8 >> 1,arg2 + 0x32,auStackX_10,auStackX_8);
    }
    (**(*0x1a798 + 0x48))(iVar2);
code_r0x00011100:
    if (iVar1 != 0) {
        (**(*0x1a798 + 0x48))(iVar1);
    }
    if (arg1 != 0) {
        (**(*0x1a798 + 0x48))(arg1);
    }
    return 0;
}


/* fcn.00011994 @ 0x11994 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00011994(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    int64_t arg1_00;
    char *pcVar5;
    int64_t in_RDX;
    int64_t arg2;
    int64_t in_R8;
    int64_t in_R9;
    int64_t iStackX_8;
    int64_t iStackX_10;
    int64_t var_38h;
    uint32_t uStack_74;
    ushort uStack_62;
    uint uStack_60;
    uint uStack_5c;
    int32_t var_50h;
    int64_t var_48h;
    int32_t var_40h;
    int16_t var_3ch;
    int32_t var_38h_2;
    int32_t var_34h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_10h;
    
    iVar4 = 0;
    iStackX_10 = 0;
    iStackX_8 = arg1;
    if (*0x1a740 != 0) {
        (**(*0x1a798 + 0x48))();
        *0x1a740 = 0;
    }
    iVar2 = fcn.00011224(&iStackX_10);
    if (iVar2 < 0) {
        return iVar2;
    }
    puVar3 = fcn.00013b18(0x2000);
    if (puVar3 == NULL) {
        fcn.00010b00(0x19bd8,in_RDX,in_R8,in_R9);
        return -0x7ffffffffffffff7;
    }
    *(puVar3 + 4) = 0;
    uStack_60 = 0;
    *puVar3 = 1;
    *(puVar3 + 2) = 7;
    _var_40h = uStack_74 << 0x20;
    var_30h = CONCAT26(uStack_62,0x5000000000c);
    arg2 = iStackX_10;
    _var_38h_2 = puVar3;
    uVar1 = fcn.00011264(&var_40h,iStackX_10);
    if (uVar1 == 0) {
        iVar4 = fcn.00013b18(0x2000);
        if (iVar4 == 0) {
            pcVar5 = "FeatureStateRes Memory Allocation Failure\n";
        }
        else {
            var_48h = &iStackX_8;
            iStackX_8 = CONCAT44(iStackX_8._4_4_,0x2000);
            uStack_5c = 1;
            arg2 = iStackX_10;
            _var_50h = iVar4;
            uVar1 = fcn.000112a8(&uStack_60,iStackX_10);
            if (uVar1 != 0) {
                pcVar5 = "HeciRead Failed:%d";
                goto code_r0x00011a68;
            }
            uVar1 = *(iVar4 + 0xc);
            if (uVar1 != 0) {
                fcn.00010b00(0x19b88,uVar1,in_R8,in_R9);
                iVar2 = uVar1;
                goto code_r0x00011b1d;
            }
            arg1_00 = fcn.00013b18(0x2000);
            if (arg1_00 != 0) {
                fcn.00017570(arg1_00,iVar4,iStackX_8);
                *0x1a740 = arg1_00;
                goto code_r0x00011b1d;
            }
            pcVar5 = "FeatureData Memory Allocation Failure \n";
        }
        fcn.00010b00(pcVar5,arg2,in_R8,in_R9);
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        pcVar5 = "\nHeciWrite Failed:%d";
code_r0x00011a68:
        fcn.00010b00(pcVar5,uVar1,in_R8,in_R9);
        iVar2 = uVar1;
    }
code_r0x00011b1d:
    (**(*0x1a798 + 0x48))(puVar3);
    if (iVar4 != 0) {
        (**(*0x1a798 + 0x48))(iVar4);
    }
    return iVar2;
}


/* fcn.000122c8 @ 0x122c8 */

int64_t fcn.000122c8(void)

{
    uint uVar1;
    ushort *puVar2;
    int64_t iVar3;
    uchar *arg2;
    int64_t iVar4;
    uint64_t arg3;
    int64_t iVar5;
    uchar *in_R9;
    ulong *arg4;
    ulong uStack_58;
    ulong uStack_50;
    uchar uStack_48;
    uchar auStack_47 [63];
    
    iVar4 = *0x1a740;
    iVar3 = 0;
    iVar5 = 0x3f;
    uStack_48 = 0;
    fcn.00018528(auStack_47,0,0x3f);
    if (iVar4 == 0) {
        fcn.00010b00(0x19e18,iVar3,iVar5,in_R9);
        return -0x7ffffffffffffffe;
    }
    puVar2 = fcn.00013b18(0x4a);
    if (puVar2 == NULL) {
        fcn.00010b00(0x19e48,iVar3,iVar5,in_R9);
        return -0x7ffffffffffffff7;
    }
    *puVar2 = *(iVar4 + 0x14);
    uVar1 = *(iVar4 + 0x16);
    *(puVar2 + 3) = 2;
    *(puVar2 + 1) = uVar1;
    arg3 = *(iVar4 + 0x4b2);
    if (iVar4 + 0x4b4 == 0) {
        fcn.00010b00(0x19d08,0,arg3,in_R9);
        iVar4 = -0x7ffffffffffffffe;
    }
    else {
        in_R9 = &uStack_48;
        iVar4 = fcn.000121f4(2,iVar4 + 0x4b4,arg3,in_R9);
        if (-1 < iVar4) {
            arg2 = &uStack_48;
            iVar5 = 0x20;
            fcn.00017570(puVar2 + 5,arg2,0x20);
            iVar4 = fcn.00017c3c(0x19de8);
            iVar3 = fcn.00013b18(iVar4 + 0x4a);
            if (iVar3 != 0) {
                fcn.00017570(iVar3,0x19de8,iVar4);
                fcn.00017570(iVar3 + iVar4,puVar2,0x4a);
                arg4 = &uStack_58;
                iVar4 = iVar4 + 0x4a;
                uStack_58 = *0x19088;
                uStack_50 = *0x19090;
                iVar5 = fcn.00012054(iVar3,0x19e00,iVar4,arg4);
                if (iVar5 < 0) {
                    fcn.00010b00(0x19ea0,iVar5,iVar4,arg4);
                }
                (**(*0x1a798 + 0x48))(iVar3);
                return iVar5;
            }
            fcn.00010b00(0x19e80,arg2,iVar5,in_R9);
            iVar4 = -0x7ffffffffffffff7;
            goto code_r0x000123f1;
        }
    }
    fcn.00010b00(0x19e68,iVar4,arg3,in_R9);
code_r0x000123f1:
    (**(*0x1a798 + 0x48))(puVar2);
    return iVar4;
}


/* fcn.000114d4 @ 0x114d4 */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000114d4(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    char *arg1_00;
    int64_t in_RDX;
    int64_t arg2;
    int64_t in_R8;
    int64_t in_R9;
    uint auStackX_8 [2];
    int64_t iStackX_10;
    int64_t var_28h;
    uint32_t uStack_64;
    int32_t var_50h;
    ushort uStack_52;
    int64_t var_48h;
    int32_t var_40h;
    int16_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int64_t var_30h;
    int64_t var_28h_2;
    int64_t var_bp_20h;
    int64_t var_10h;
    
    auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,arg1);
    iVar4 = 0;
    iStackX_10 = 0;
    iVar2 = fcn.00011224(&iStackX_10);
    if (iVar2 < 0) {
        return iVar2;
    }
    puVar3 = fcn.00013b18(0x2000);
    if (puVar3 == NULL) {
        fcn.00010b00(0x19a30,in_RDX,in_R8,in_R9);
        return -0x7ffffffffffffff7;
    }
    var_48h._0_4_ = 0;
    var_30h = uStack_64 << 0x20;
    *puVar3 = 1;
    *(puVar3 + 2) = 6;
    *(puVar3 + 4) = 0x99;
    *(puVar3 + 6) = 3;
    var_bp_20h = CONCAT26(uStack_52,0x500000000a5);
    arg2 = iStackX_10;
    var_28h_2 = puVar3;
    uVar1 = fcn.00011264(&var_30h,iStackX_10);
    if (uVar1 == 0) {
        iVar4 = fcn.00013b18(0x2000);
        if (iVar4 == 0) {
            fcn.00010b00(0x19a60,arg2,in_R8,in_R9);
            iVar2 = -0x7ffffffffffffff7;
            goto code_r0x0001161a;
        }
        _var_38h = auStackX_8;
        auStackX_8[0] = 0x2000;
        var_48h._4_4_ = 1;
        _var_40h = iVar4;
        uVar1 = fcn.000112a8(&var_48h,iStackX_10);
        if (uVar1 == 0) {
            if (*(iVar4 + 0xc) != 0) {
                fcn.00010b00(0x19a90,*(iVar4 + 0xc),in_R8,in_R9);
                iVar2 = -0x7ffffffffffffff9;
            }
            goto code_r0x0001161a;
        }
        arg1_00 = "\nHeciRead Failed:%d";
    }
    else {
        arg1_00 = "\nHeciWrite Failed:%d";
    }
    fcn.00010b00(arg1_00,uVar1,in_R8,in_R9);
    iVar2 = uVar1;
code_r0x0001161a:
    (**(*0x1a798 + 0x48))(puVar3);
    if (iVar4 != 0) {
        (**(*0x1a798 + 0x48))(iVar4);
    }
    return iVar2;
}


/* fcn.00011c8c @ 0x11c8c */

int64_t fcn.00011c8c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uchar uVar1;
    int iVar2;
    bool bVar3;
    bool bVar4;
    char cVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    ushort *puVar13;
    uint32_t uStack_e4;
    int iStack_e0;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    ulong uStack_c8;
    int64_t iStack_c0;
    uchar auStack_b8 [16];
    ulong uStack_a8;
    ulong uStack_a0;
    ushort uStack_98;
    ushort uStack_96;
    uint32_t auStack_94 [23];
    
    uVar7 = 0;
    uStack_98 = 0;
    fcn.00018528(&uStack_96,0,0x52);
    bVar3 = true;
    uStack_e4 = 0;
    iStack_e0 = 0;
    iStack_d8 = 0;
    uStack_d0 = 0;
    bVar4 = true;
    iVar6 = (**(*0x1a798 + 0x138))(2,0x18778,0,&uStack_d0,&iStack_d8);
    if (iVar6 != 0) {
        return iVar6;
    }
    uVar8 = uVar7;
    if (uStack_d0 != 0) {
        while (iVar6 = (**(*0x1a798 + 0x98))(*(iStack_d8 + uVar8 * 8),0x18778), iVar6 != 0) {
            uVar8 = uVar8 + 1;
            if (uStack_d0 <= uVar8) {
                if (iStack_d8 != 0) {
                    (**(*0x1a798 + 0x48))();
                }
                return iVar6;
            }
        }
    }
    uVar11 = 0;
    if (((arg1 != 0) && (uVar11 = 0, arg2 != 0)) && (arg4 != 0)) {
        uVar8 = (arg1 & 0xffffffffU) / 9;
        uVar11 = uVar8;
        if (uVar11 != 0) {
            if (uVar11 != 0) {
                uVar12 = 3;
                puVar13 = &uStack_96;
                do {
                    iVar2 = uVar12;
                    puVar13[-1] = CONCAT11(*((iVar2 - 2) + arg2),*((iVar2 - 3) + arg2));
                    *puVar13 = CONCAT11(*(uVar12 + arg2),*((iVar2 - 1) + arg2));
                    uVar12 = iVar2 + 9;
                    uVar1 = *(iVar2 + 5 + arg2);
                    *(puVar13 + 1) =
                         CONCAT31(CONCAT21(CONCAT11(*(iVar2 + 4 + arg2),*(iVar2 + 3 + arg2)),*(iVar2 + 2 + arg2)),
                                  *(iVar2 + 1 + arg2));
                    *(puVar13 + 3) = uVar1;
                    uVar8 = uVar8 - 1;
                    puVar13 = puVar13 + 6;
                } while (uVar8 != 0);
            }
            goto code_r0x00011e54;
        }
    }
    bVar3 = false;
code_r0x00011e54:
    (**(*0x1a798 + 0x50))(0x80000000,0,0,0,&uStack_c8);
    (**(*0x1a798 + 0x58))(uStack_c8,2);
    uStack_a8 = uStack_c8;
    uStack_a0 = *(*0x1a778 + 0x10);
    while( true ) {
        if (((bVar3) && (uStack_e4 == uVar11)) || ((bVar4 && (iStack_e0 == 4)))) {
            iVar6 = fcn.00012a7c();
            if (iVar6 == 0) {
                iVar9 = 0;
            }
            else {
                iVar9 = 3;
                if (iVar6 != -0x7fffffffffffffeb) {
                    if (iVar6 == -0x7fffffffffffffee) {
                        iVar6 = 3;
                    }
                    iVar9 = iVar6;
                }
            }
            goto code_r0x00012022;
        }
        iStack_c0 = 0;
        iVar6 = (**(*0x1a798 + 0x60))(2,&uStack_a8);
        if (iVar6 < 0) goto code_r0x0001201d;
        if (iStack_c0 == 0) break;
        if (iStack_c0 == 1) {
            *0x1a7d8 = iStack_c0;
            (**(*0x1a778 + 8))(*0x1a778,auStack_b8);
        }
        if (*0x1a7d8 == 0) goto code_r0x0001201d;
        uVar10 = uVar7;
        if ((bVar3) && (uVar10 < uVar11)) {
            if ((auStack_94[uVar7 * 3] & 0x80000000) == 0) {
                cVar5 = '\0';
            }
            else {
                cVar5 = fcn.00011bc8(auStack_b8,&uStack_98 + uVar10 * 0xc);
            }
            if (cVar5 == '\0') goto code_r0x00011f8d;
            uStack_e4 = uStack_e4 + 1;
        }
        else {
code_r0x00011f8d:
            bVar3 = false;
        }
        if ((bVar4) && (uVar10 < 4)) {
            if ((*(uVar7 * 0xc + 0x18704) & 0x80000000) == 0) {
                cVar5 = '\0';
            }
            else {
                cVar5 = fcn.00011bc8(auStack_b8,uVar7 * 0xc + 0x18700);
            }
            if (cVar5 == '\0') goto code_r0x00011fd3;
            iStack_e0 = iStack_e0 + 1;
        }
        else {
code_r0x00011fd3:
            bVar4 = false;
        }
        uVar7 = uVar10 + 1;
    }
    *0x1a7d8 = 0;
code_r0x0001201d:
    iVar9 = 2;
code_r0x00012022:
    if (iStack_d8 != 0) {
        (**(*0x1a798 + 0x48))();
    }
    return iVar9;
}


/* fcn.00011654 @ 0x11654 */

//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00011654(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    char *arg1_00;
    int64_t in_RDX;
    int64_t arg2;
    int64_t in_R8;
    int64_t in_R9;
    uint auStackX_10 [2];
    int64_t iStackX_18;
    int32_t var_28h;
    int64_t var_30h;
    uint32_t uStack_64;
    int32_t var_50h;
    ushort uStack_52;
    int64_t var_48h;
    int32_t var_40h;
    int16_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int64_t var_30h_2;
    int64_t var_28h_2;
    int64_t var_bp_20h;
    int64_t var_10h;
    
    auStackX_10[0] = 0;
    iVar4 = 0;
    iStackX_18 = 0;
    iVar2 = fcn.00011224(&iStackX_18);
    if (iVar2 < 0) {
        return iVar2;
    }
    puVar3 = fcn.00013b18(0x2000);
    if (puVar3 == NULL) {
        fcn.00010b00(0x19aa8,in_RDX,in_R8,in_R9);
        return -0x7ffffffffffffff7;
    }
    var_48h._0_4_ = 0;
    var_30h_2 = uStack_64 << 0x20;
    *(puVar3 + 6) = arg1;
    *puVar3 = 1;
    *(puVar3 + 2) = 9;
    *(puVar3 + 4) = 4;
    var_bp_20h = CONCAT26(uStack_52,0x50000000010);
    arg2 = iStackX_18;
    var_28h_2 = puVar3;
    uVar1 = fcn.00011264(&var_30h_2,iStackX_18);
    if (uVar1 == 0) {
        iVar4 = fcn.00013b18(0x2000);
        if (iVar4 == 0) {
            fcn.00010b00(0x19ad0,arg2,in_R8,in_R9);
            iVar2 = -0x7ffffffffffffff7;
            goto code_r0x0001179b;
        }
        _var_38h = auStackX_10;
        auStackX_10[0] = 0x2000;
        var_48h._4_4_ = 1;
        _var_40h = iVar4;
        uVar1 = fcn.000112a8(&var_48h,iStackX_18);
        if (uVar1 == 0) {
            uVar1 = *(iVar4 + 0xc);
            if (uVar1 != 0) {
                fcn.00010b00(0x199b8,uVar1,in_R8,in_R9);
                iVar2 = uVar1;
            }
            goto code_r0x0001179b;
        }
        arg1_00 = "\nHeciRead Failed:%d";
    }
    else {
        arg1_00 = "\nHeciWrite Failed:%d";
    }
    fcn.00010b00(arg1_00,uVar1,in_R8,in_R9);
    iVar2 = uVar1;
code_r0x0001179b:
    (**(*0x1a798 + 0x48))(puVar3);
    if (iVar4 != 0) {
        (**(*0x1a798 + 0x48))(iVar4);
    }
    return iVar2;
}


/* fcn.000117d4 @ 0x117d4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.000117d4(int64_t arg1)

{
    uint32_t uVar1;
    int64_t arg2;
    ushort *puVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t in_RDX;
    int64_t in_R8;
    int64_t in_R9;
    uint32_t auStackX_10 [2];
    int64_t iStackX_18;
    int32_t var_38h;
    int64_t var_40h;
    uint32_t uStack_74;
    ushort uStack_62;
    uint uStack_60;
    uint uStack_5c;
    int32_t var_50h;
    int64_t var_48h;
    int32_t var_40h_2;
    int16_t var_3ch;
    int32_t var_38h_2;
    int32_t var_34h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_10h;
    
    auStackX_10[0] = 0;
    iVar3 = 0;
    iStackX_18 = 0;
    arg2 = fcn.00011224(&iStackX_18);
    if (arg2 < 0) {
        return arg2;
    }
    puVar2 = fcn.00013b18(0x2000);
    if (puVar2 == NULL) {
        fcn.00010b00(0x19af8,in_RDX,in_R8,in_R9);
        return -0x7ffffffffffffff7;
    }
    *(puVar2 + 4) = 0;
    uStack_60 = 0;
    *puVar2 = 1;
    *(puVar2 + 2) = 8;
    _var_40h_2 = uStack_74 << 0x20;
    var_30h = CONCAT26(uStack_62,0x5000000000c);
    iVar4 = iStackX_18;
    _var_38h_2 = puVar2;
    uVar1 = fcn.00011264(&var_40h_2,iStackX_18);
    if (uVar1 != 0) {
        fcn.00010b00(0x19b28,uVar1,in_R8,in_R9);
        arg2 = uVar1;
        goto code_r0x00011957;
    }
    iVar3 = fcn.00013b18(0x2000);
    if (iVar3 == 0) {
        fcn.00010b00(0x19b40,iVar4,in_R8,in_R9);
    }
    else {
        var_48h = auStackX_10;
        auStackX_10[0] = 0x2000;
        uStack_5c = 1;
        _var_50h = iVar3;
        uVar1 = fcn.000112a8(&uStack_60,iStackX_18);
        if (uVar1 != 0) {
            fcn.00010b00(0x19b70,uVar1,in_R8,in_R9);
            arg2 = uVar1;
        }
        uVar1 = *(iVar3 + 0xc);
        if (uVar1 != 0) {
            fcn.00010b00(0x19b88,uVar1,in_R8,in_R9);
            arg2 = uVar1;
            goto code_r0x00011957;
        }
        iVar4 = fcn.00013b18(0x2000);
        *arg1 = iVar4;
        if (iVar4 != 0) {
            fcn.00017570(iVar4,iVar3,auStackX_10[0]);
            goto code_r0x00011957;
        }
        fcn.00010b00(0x19ba0,arg2,in_R8,in_R9);
    }
    arg2 = -0x7ffffffffffffff7;
code_r0x00011957:
    (**(*0x1a798 + 0x48))(puVar2);
    if (iVar3 != 0) {
        (**(*0x1a798 + 0x48))(iVar3);
    }
    return arg2;
}


/* fcn.00012750 @ 0x12750 */

int64_t fcn.00012750(int64_t arg1)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    char *arg1_00;
    char *pcVar4;
    char *arg4;
    char *arg3;
    char **arg4_00;
    char *pcVar5;
    char cStackX_8;
    char acStackX_10 [8];
    char acStackX_18 [8];
    uint32_t auStackX_20 [2];
    uint32_t var_67h;
    uint32_t var_6fh;
    uint32_t var_77h;
    int32_t var_7fh;
    char *pcStack_e8;
    int64_t iStack_e0;
    ulong auStack_d8 [2];
    char cStack_c8;
    uchar auStack_c7 [70];
    int64_t var_79h;
    int8_t var_69h;
    int64_t var_68h;
    
    arg4 = NULL;
    iStack_e0 = 0;
    pcStack_e8 = NULL;
    cStack_c8 = '\0';
    fcn.00018528(auStack_c7,0,0x7f);
    auStackX_20[0] = 0;
    if (arg1 == 0) {
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        arg3 = NULL;
        arg4_00 = &pcStack_e8;
        pcVar4 = 0x185b8;
        iVar3 = (**(*0x1a798 + 0x138))(2);
        if (iVar3 < 0) {
            iVar3 = 1;
        }
        else {
            arg1_00 = arg4;
            pcVar5 = arg4;
            if (pcStack_e8 != NULL) {
                do {
                    auStack_d8[0] = 0;
                    if (*(iStack_e0 + pcVar5 * 8) == 0) {
                        iVar3 = -0x7ffffffffffffffe;
code_r0x0001285d:
                        if (iVar3 == 0) {
                            if (arg1_00 == NULL) {
                                iVar3 = -0x7ffffffffffffffe;
                            }
                            else {
                                arg3 = acStackX_18;
                                pcVar4 = acStackX_10;
                                iVar3 = fcn.000125a0(arg1_00,pcVar4,arg3);
                                if (-1 < iVar3) {
                                    iVar3 = 0x100000005020000;
                                    iVar2 = fcn.00013f88(arg1_00,0x100000005020000,arg3,0);
                                    if (iVar2 == 0) {
                                        if (cStackX_8 == '\0') {
                                            arg3 = &cStack_c8;
                                            iVar2 = fcn.00014270(arg1_00,iVar3,arg3,auStackX_20);
                                            fcn.000140a0(arg1_00);
                                            arg4 = auStackX_20[0];
                                            goto code_r0x00012910;
                                        }
code_r0x00012915:
                                        iVar2 = 1;
                                    }
                                    else {
code_r0x00012910:
                                        if (cStackX_8 != '\0') goto code_r0x00012915;
                                    }
                                    if (iVar2 != 0) {
                                        iVar3 = 2;
                                        break;
                                    }
                                    iVar3 = 0x100000005020000;
                                    bVar1 = false;
                                    iVar2 = fcn.00013f88(arg1_00,0x100000005020000,arg3,arg4);
                                    if ((iVar2 == 0) && (cStackX_8 == '\0')) {
                                        bVar1 = true;
                                        fcn.000140a0(arg1_00);
                                    }
                                    *0x1a750 = 1;
                                    if (acStackX_10[0] != '\0') {
                                        fcn.00010b00(0x1a028,iVar3,arg3,arg4);
                                        *0x1a750 = 0;
                                        iVar3 = fcn.000126ec(arg1_00,arg1 + 0x14,*(arg1 + 0x10),&cStack_c8);
                                        break;
                                    }
                                    if (acStackX_18[0] == '\0') {
                                        if (bVar1) {
                                            pcVar4 = "\nSED Lock Not Present\n";
                                        }
                                        else {
                                            fcn.00010b00(0x1a060,iVar3,arg3,arg4);
                                            arg3 = *(arg1 + 0x10);
                                            iVar3 = arg1 + 0x14;
                                            arg4 = &cStack_c8;
                                            *0x1a750 = 0;
                                            iVar2 = fcn.0001506c(arg1_00,iVar3,arg3,arg4);
                                            pcVar4 = "Ownership Revert - Unsuccessful\n";
                                            if (iVar2 == 0) {
                                                pcVar4 = "Ownership Revert - Successful\n";
                                            }
                                        }
                                        *0x1a750 = 1;
                                        fcn.00010b00(pcVar4,iVar3,arg3,arg4);
                                        *0x1a750 = 0;
                                    }
                                    else {
                                        fcn.00010b00(0x1a040,iVar3,arg3,arg4);
                                        *0x1a750 = 0;
                                        iVar3 = fcn.000126ec(arg1_00,arg1 + 0x14,*(arg1 + 0x10),&cStack_c8);
                                        if (iVar3 != 0) break;
                                    }
                                    iVar3 = 1;
                                    break;
                                }
                            }
                            fcn.00010b00(0x19ff8,pcVar4,arg3,arg4_00);
                            break;
                        }
                        if (arg1_00 != NULL) {
                            (**(*0x1a798 + 0x48))(arg1_00);
                            arg1_00 = NULL;
                        }
                    }
                    else {
                        arg3 = auStack_d8;
                        pcVar4 = 0x185b8;
                        iVar3 = (**(*0x1a798 + 0x98))();
                        if (iVar3 < 0) goto code_r0x0001285d;
                        arg1_00 = fcn.00013b18(0x18);
                        if (arg1_00 != NULL) {
                            *(arg1_00 + 0xc) = auStack_d8[0];
                            goto code_r0x0001285d;
                        }
                        iVar3 = -0x7ffffffffffffff7;
                    }
                    pcVar5 = pcVar5 + 1;
                } while (pcVar5 < pcStack_e8);
                if (arg1_00 != NULL) {
                    (**(*0x1a798 + 0x48))(arg1_00);
                }
            }
        }
    }
    return iVar3;
}


/* fcn.0001113c @ 0x1113c */

ulong fcn.0001113c(void)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t arg2;
    int32_t *arg3;
    int32_t *arg4;
    int32_t var_10h;
    int32_t var_bp_18h;
    
    var_bp_18h = 0x989898;
    var_10h = 0;
    fcn.00010d40();
    iVar1 = fcn.00017dc8(*0x19078);
    arg2 = (*0x1a76c >> 1) - 0x19;
    fcn.00010d90(*0x1a768 + (iVar1 + -1) * -8 >> 1,arg2,&var_bp_18h,&var_10h);
    iVar2 = fcn.00017dc8(*0x19080);
    iVar1 = arg2 + 0x19;
    arg4 = &var_10h;
    arg3 = &var_bp_18h;
    fcn.00010d90(*0x1a768 + (iVar2 + -1) * -8 >> 1,iVar1,arg3,arg4);
    fcn.00010b00(0x198b8,iVar1,arg3,arg4);
    (**(*0x1a798 + 0xf8))(60000000);
    return 0;
}


/* fcn.00010d40 @ 0x10d40 */

void fcn.00010d40(void)

{
    uint auStackX_8 [8];
    
    auStackX_8[0] = 0;
    (**(*0x1a770 + 0x10))(*0x1a770,auStackX_8,0,0,0,0,0,*0x1a768,*0x1a76c,0);
    return;
}


/* fcn.00017dc8 @ 0x17dc8 */

uint64_t fcn.00017dc8(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00012d54();
    uVar2 = 0;
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0xac,
                     "String != ((void *) 0)");
    }
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && ((arg1 & 1U) != 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0xad,
                     "((UINTN) String & 0x00000001) == 0");
    }
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        if (((*0x191e0 != 0) && (cVar1 = fcn.00012d54(), cVar1 != '\0')) && (*0x191e0 <= uVar2)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0xb5,
                         "Length < _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength");
        }
        uVar2 = uVar2 + 1;
    }
    return uVar2;
}


/* fcn.00010d90 @ 0x10d90 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h

int64_t fcn.00010d90(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t var_bh;
    int64_t in_stack_00000028;
    ushort *puStack_68;
    int64_t *piStack_60;
    int64_t iStack_58;
    uchar auStack_50 [4];
    uchar auStack_4c [4];
    int64_t in_stack_ffffffffffffffb8;
    int32_t in_stack_ffffffffffffffc0;
    int64_t var_11h;
    int64_t var_9h;
    uint32_t var_1h;
    
    arg1_00 = fcn.00013b18(0x3e82);
    fcn.00012ddc(arg1_00,0x1f41,0x140,in_stack_00000028,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0);
    puStack_68 = NULL;
    piStack_60 = NULL;
    puStack_68 = fcn.00013b18(0x10);
    if (puStack_68 != NULL) {
        *puStack_68 = *0x1a768;
        puStack_68[1] = *0x1a76c;
        fcn.00017624(auStack_50,0x14);
        if (arg3 != 0) {
            fcn.00017570(auStack_50,arg3,4);
        }
        if (arg4 != 0) {
            fcn.00017570(auStack_4c,arg4,4);
        }
        if (*0x1a770 != 0) {
            *(puStack_68 + 4) = *0x1a770;
            iVar1 = (***0x1a760)(*0x1a760,0xed,arg1_00,auStack_50,&puStack_68,arg1,arg2,&piStack_60,&iStack_58,
                                 0);
            if (-1 < iVar1) {
                if (iStack_58 == 0) {
                    iVar1 = 0;
                }
                else {
                    iVar1 = (piStack_60[1] - *piStack_60) + 1;
                }
                if (piStack_60 != NULL) {
                    (**(*0x1a798 + 0x48))();
                }
                if (puStack_68 != NULL) {
                    (**(*0x1a798 + 0x48))();
                }
                goto code_r0x00010f23;
            }
        }
    }
    if (piStack_60 != NULL) {
        (**(*0x1a798 + 0x48))();
    }
    if (puStack_68 != NULL) {
        (**(*0x1a798 + 0x48))(puStack_68);
    }
    iVar1 = 0;
code_r0x00010f23:
    (**(*0x1a798 + 0x48))(arg1_00);
    return iVar1;
}


/* fcn.000112e4 @ 0x112e4 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.000112e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    int64_t arg1_00;
    char *pcVar5;
    int64_t iVar6;
    int64_t arg3_00;
    int64_t in_R9;
    uint64_t uStackX_8;
    int64_t iStackX_20;
    int64_t var_58h;
    uint32_t uStack_84;
    ushort uStack_72;
    uint uStack_70;
    uint uStack_6c;
    int64_t iStack_68;
    uint64_t *puStack_60;
    int32_t var_50h;
    int64_t var_48h;
    int32_t var_40h;
    int16_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_20h;
    int64_t var_bp_10h;
    
    iVar4 = 0;
    uStackX_8 = arg1 & 0xffffffff00000000;
    iStackX_20 = 0;
    iVar6 = arg2;
    arg3_00 = arg3;
    iVar2 = fcn.00011224(&iStackX_20);
    if (iVar2 < 0) {
        return iVar2;
    }
    puVar3 = fcn.00013b18(0x2000);
    if (puVar3 == NULL) {
        fcn.00010b00(0x19928,iVar6,arg3_00,in_R9);
        return -0x7ffffffffffffff7;
    }
    *puVar3 = 1;
    *(puVar3 + 2) = 3;
    _var_50h = uStack_84 << 0x20;
    uStack_70 = 0;
    _var_40h = CONCAT26(uStack_72,0x5000000000c);
    iVar6 = iStackX_20;
    var_48h = puVar3;
    uVar1 = fcn.00011264(&var_50h,iStackX_20);
    if (uVar1 == 0) {
        iVar4 = fcn.00013b18(0x2000);
        if (iVar4 == 0) {
            pcVar5 = "\nDiskParamGetRes Memory Allocation Failure";
        }
        else {
            puStack_60 = &uStackX_8;
            uStackX_8 = CONCAT44(uStackX_8._4_4_,0x2000);
            uStack_6c = 1;
            iVar6 = iStackX_20;
            iStack_68 = iVar4;
            uVar1 = fcn.000112a8(&uStack_70,iStackX_20);
            if (uVar1 != 0) {
                pcVar5 = "\nHeciRead Failed:%d";
                goto code_r0x000113a9;
            }
            uVar1 = *(iVar4 + 0xc);
            if (uVar1 != 0) {
                fcn.00010b00(0x199b8,uVar1,arg3_00,in_R9);
                iVar2 = uVar1;
                goto code_r0x00011498;
            }
            if (*(iVar4 + 0x14) == 0) {
                fcn.00010b00(0x199d0,iVar6,arg3_00,in_R9);
                iVar2 = -0x7ffffffffffffffe;
                goto code_r0x00011498;
            }
            arg1_00 = fcn.00013b18(*(iVar4 + 0x14));
            if (arg1_00 != 0) {
                fcn.00017570(arg1_00,iVar4 + 0x16,*(iVar4 + 0x14));
                *0x1a748 = arg1_00;
                *arg2 = *(iVar4 + 0x10);
                *arg3 = *(iVar4 + 0x14);
                goto code_r0x00011498;
            }
            pcVar5 = "\nDiskOutParams Memory Allocation Failure";
        }
        fcn.00010b00(pcVar5,iVar6,arg3_00,in_R9);
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        pcVar5 = "\nHeciWrite Failed:%d";
code_r0x000113a9:
        fcn.00010b00(pcVar5,uVar1,arg3_00,in_R9);
        iVar2 = uVar1;
    }
code_r0x00011498:
    (**(*0x1a798 + 0x48))(puVar3);
    if (iVar4 != 0) {
        (**(*0x1a798 + 0x48))(iVar4);
    }
    return iVar2;
}


/* fcn.0001248c @ 0x1248c */

int64_t fcn.0001248c(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t arg1_00;
    int64_t iVar3;
    int64_t arg1_01;
    ulong *arg4;
    ulong uStack_18;
    ulong uStack_10;
    
    iVar1 = *0x1a748;
    if (*0x1a748 == 0) {
        fcn.00010b00(0x19f00,arg1,arg2,arg3);
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        iVar3 = *(*0x1a748 + 4) * 0x110 + 8;
        iVar2 = fcn.00017c3c(0x19ee8);
        arg1_01 = iVar2 + iVar3;
        arg1_00 = fcn.00013b18(arg1_01);
        if (arg1_00 == 0) {
            fcn.00010b00(0x19f20,arg1,arg2,arg3);
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            fcn.00017570(arg1_00,0x19ee8,iVar2);
            fcn.00017570(arg1_00 + iVar2,iVar1,iVar3);
            arg4 = &uStack_18;
            uStack_18 = *0x19098;
            uStack_10 = *0x190a0;
            iVar1 = fcn.00012054(arg1_00,0x19ed0,arg1_01,arg4);
            if (iVar1 < 0) {
                fcn.00010b00(0x19f40,iVar1,arg1_01,arg4);
            }
            (**(*0x1a798 + 0x48))(arg1_00);
        }
    }
    return iVar1;
}


/* fcn.00012ddc @ 0x12ddc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

uint64_t fcn.00012ddc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int32_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    char *pcVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    char *pcVar9;
    uint64_t uVar10;
    int64_t iVar11;
    char cVar12;
    char cVar13;
    uint64_t uVar14;
    int64_t iVar15;
    char cVar16;
    uint64_t uVar17;
    uint64_t *puVar18;
    bool bVar19;
    uint32_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    uint32_t uStack0000000000000030;
    int8_t var_68h_2;
    int64_t var_70h;
    uint64_t uStack_d8;
    char *pcStack_d0;
    uint64_t uStack_c8;
    uint64_t *puStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h_2;
    uint32_t var_68h;
    uint32_t var_64h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_18h;
    
    puVar18 = NULL;
    puStack_b8 = NULL;
    if (arg2 == 0) {
        if ((arg3 & 0x2000U) == 0) goto code_r0x00012e39;
    }
    else if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
        return 0;
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x00012e39:
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uStack0000000000000030 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uStack0000000000000030 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar3 = fcn.00017b94(arg4,0xf4241);
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_98 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar3 = fcn.00017bc0(arg4,0xf4241);
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_98 = 2;
        uStack_90 = 0xffff;
    }
    if ((arg3 & 0x2000U) == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else if (arg2 == 0) {
        arg1 = 0;
    }
    var_78h = 0;
    uStack_d8 = 0;
    pcStack_d0 = NULL;
    puStackX_20 = arg4;
    if (arg1 != NULL) {
        var_78h = arg1;
        pcStack_d0 = arg1 + (arg2 + -1) * uStack0000000000000030;
    }
    while( true ) {
        uStack_b0 = (puStackX_20[1] << 8 | *puStackX_20) & uStack_90;
        if ((uStack_b0 == 0) || ((arg1 != NULL && (pcStack_d0 <= arg1)))) break;
        uStack_a0 = 0;
        uVar7 = 0;
        cVar12 = '\0';
        var_80h = 0;
        uVar14 = arg3 & 0x2140;
        cVar16 = '\0';
        cVar13 = '\0';
        bVar19 = false;
        uVar3 = 1;
        uStack_a8 = 1;
        uStack_c8 = 0;
        uVar17 = uVar14;
        uStackX_18 = uVar14;
        if (uStack_b0 == 10) {
            puStackX_20 = puStackX_20 + iStack_98;
            uVar14 = puStackX_20[1] << 8 | *puStackX_20;
code_r0x0001321c:
            uStack_b0 = uVar14 & uStack_90;
            pcVar5 = 0x1a58c;
            if ((uVar14 & uStack_90) != 0xd) {
code_r0x000136b2:
                puStackX_20 = puStackX_20 + -iStack_98;
            }
        }
        else if (uStack_b0 == 0xd) {
            puStackX_20 = puStackX_20 + iStack_98;
            uVar14 = puStackX_20[1] << 8 | *puStackX_20;
code_r0x000131e3:
            uStack_b0 = uVar14 & uStack_90;
            if ((uVar14 & uStack_90) != 10) {
                pcVar5 = 0x1a590;
                goto code_r0x000136b2;
            }
            pcVar5 = 0x1a58c;
        }
        else if (uStack_b0 == 0x25) {
            puVar8 = in_stack_00000028;
code_r0x00012f79:
            puStackX_20 = puStackX_20 + iStack_98;
            uStack_b0 = (puStackX_20[1] << 8 | *puStackX_20) & uStack_90;
            if (0x2d < uStack_b0) {
                if (uStack_b0 != 0x2e) {
                    if (uStack_b0 == 0x30) {
                        if ((uVar14 >> 0xb & 1) == 0) {
                            uVar14 = uVar14 | 0x20;
                            uStackX_18 = uVar14;
                        }
                    }
                    else {
                        if (uStack_b0 < 0x31) goto code_r0x0001311e;
                        if (0x39 < uStack_b0) {
                            if ((uStack_b0 - 0x4c & 0xffffffffffffffdf) == 0) {
                                uVar14 = uVar14 | 0x10;
                                goto code_r0x00013108;
                            }
                            goto code_r0x0001311e;
                        }
                    }
                    uVar7 = 0;
                    uStack_c8 = 0;
                    if (0x2f < uStack_b0) {
                        do {
                            if (0x39 < uStack_b0) break;
                            puStackX_20 = puStackX_20 + iStack_98;
                            uVar7 = uStack_b0 + (uVar7 * 5 + -0x18) * 2;
                            uStack_b0 = (puStackX_20[1] << 8 | *puStackX_20) & uStack_90;
                        } while (0x2f < uStack_b0);
                        uStack_c8 = uVar7;
                    }
                    puStackX_20 = puStackX_20 + -iStack_98;
                    uVar7 = uStack_c8;
                    if ((uVar14 >> 0xb & 1) == 0) {
                        uVar14 = uVar14 | 0x200;
                        uStack_a0 = uStack_c8;
                        uStackX_18 = uVar14;
                    }
                    else {
                        uStack_a8 = uStack_c8;
                        uVar3 = uStack_c8;
                    }
                    goto code_r0x00012f79;
                }
                uVar14 = uVar14 | 0x800;
code_r0x00013108:
                uStackX_18 = uVar14;
                goto code_r0x00012f79;
            }
            if (uStack_b0 == 0x2d) {
                uVar14 = uVar14 | 1;
                goto code_r0x00013108;
            }
            if (uStack_b0 != 0) {
                if (uStack_b0 == 0x20) {
                    uVar14 = uVar14 | 4;
                    goto code_r0x00013108;
                }
                if (uStack_b0 == 0x2a) {
                    if ((uVar14 >> 0xb & 1) == 0) {
                        uVar14 = uVar14 | 0x200;
                        if (puVar18 == NULL) {
                            uStack_a0 = *puVar8;
                            puVar8 = puVar8 + 1;
                            in_stack_00000028 = puVar8;
                        }
                        else {
                            uStack_a0 = *puVar18;
                            puVar18 = puVar18 + 1;
                            puStack_b8 = puVar18;
                        }
                        uStackX_18 = uVar14;
                    }
                    else {
                        if (puVar18 == NULL) {
                            uStack_a8 = *puVar8;
                            puVar8 = puVar8 + 1;
                            in_stack_00000028 = puVar8;
                        }
                        else {
                            uStack_a8 = *puVar18;
                            puVar18 = puVar18 + 1;
                            puStack_b8 = puVar18;
                        }
                        uVar3 = uStack_a8;
                    }
                    goto code_r0x00012f79;
                }
                if (uStack_b0 != 0x2b) {
                    if (uStack_b0 == 0x2c) {
                        uVar14 = uVar14 | 8;
                        goto code_r0x00013108;
                    }
                    goto code_r0x0001311e;
                }
                uVar14 = uVar14 | 2;
                goto code_r0x00013108;
            }
            puStackX_20 = puStackX_20 + -iStack_98;
            uVar3 = 0;
            uStack_a8 = 0;
code_r0x0001311e:
            uVar17 = uVar14;
            if (uStack_b0 < 0x68) {
                if (uStack_b0 != 0x67) {
                    if (uStack_b0 == 10) {
                        puStackX_20 = puStackX_20 + iStack_98;
                        uVar14 = puStackX_20[1] << 8 | *puStackX_20;
                        goto code_r0x0001321c;
                    }
                    if (uStack_b0 == 0xd) {
                        puStackX_20 = puStackX_20 + iStack_98;
                        uVar14 = puStackX_20[1] << 8 | *puStackX_20;
                        goto code_r0x000131e3;
                    }
                    if (uStack_b0 == 0x53) goto code_r0x000133de;
                    if (uStack_b0 == 0x58) goto code_r0x000134d0;
                    if (uStack_b0 == 0x61) goto code_r0x000133e7;
                    if (uStack_b0 == 99) {
                        if (puVar18 == NULL) {
                            uVar1 = *puVar8;
                            in_stack_00000028 = puVar8 + 1;
                        }
                        else {
                            uVar1 = *puVar18;
                            puVar18 = puVar18 + 1;
                            puStack_b8 = puVar18;
                        }
                        var_70h_2 = uVar1;
                        pcVar5 = &var_70h_2;
                        goto code_r0x0001319d;
                    }
                    if (uStack_b0 != 100) goto code_r0x00013356;
                    goto code_r0x000134e7;
                }
                if (puVar18 == NULL) {
                    uVar3 = *puVar8;
                    in_stack_00000028 = puVar8 + 1;
                }
                else {
                    uVar3 = *puVar18;
                    puVar18 = puVar18 + 1;
                    puStack_b8 = puVar18;
                }
                if (uVar3 == 0) {
                    pcVar5 = "<null guid>";
                    uVar3 = uStack_a8;
                    goto code_r0x000131a6;
                }
                fcn.00018120(uVar3);
                fcn.000180e8(uVar3 + 4);
                fcn.000180e8(uVar3 + 6);
                fcn.00013ac4(&var_68h,0x26,0,0x1a520);
                uVar3 = uStack_a8;
                puVar18 = puStack_b8;
code_r0x0001330c:
                pcVar5 = &var_68h;
code_r0x00013310:
                uVar7 = uStack_c8;
            }
            else {
                if (uStack_b0 == 0x70) {
                    uVar14 = uVar14 & 0xffffffffffffffd9 | 0x10;
code_r0x000134d0:
                    uVar14 = uVar14 | 0x20;
code_r0x000134d4:
                    uVar14 = uVar14 | 0x80;
code_r0x000134d9:
                    if (-1 < uVar14) {
                        uVar14 = uVar14 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x000134e7:
                    if ((uVar14 & 0x10) == 0) {
                        if (puVar18 != NULL) {
                            uVar7 = *puVar18;
                            goto code_r0x00013529;
                        }
                        uVar7 = *puVar8;
                        in_stack_00000028 = puVar8 + 1;
                    }
                    else if (puVar18 == NULL) {
                        uVar7 = *puVar8;
                        in_stack_00000028 = puVar8 + 1;
                    }
                    else {
                        uVar7 = *puVar18;
code_r0x00013529:
                        puVar18 = puVar18 + 1;
                        puStack_b8 = puVar18;
                    }
                    if ((uVar14 & 4) != 0) {
                        cVar13 = ' ';
                    }
                    if ((uVar14 & 2) != 0) {
                        cVar13 = '+';
                    }
                    bVar19 = (uVar14 & 8) != 0;
                    if (uVar14 < '\0') {
                        iVar11 = 0x10;
                        bVar19 = false;
                        if (((uVar14 & 0x10) != 0) || (-1 < uVar7)) goto code_r0x000135b5;
code_r0x000135b3:
                        uVar7 = uVar7 & 0xffffffff;
                    }
                    else {
                        iVar11 = 10;
                        if (bVar19) {
                            uVar14 = uVar14 & 0xffffffffffffffdf;
                            uVar3 = 1;
                        }
                        if (uVar7 < 0) {
                            if (uVar14 >> 0xe != 0) goto code_r0x00013597;
                            uVar7 = -uVar7;
                            cVar13 = '-';
                        }
                        else if (uVar14 >> 0xe != 0) {
code_r0x00013597:
                            if ((uVar14 & 0x10) == 0) goto code_r0x000135b3;
                        }
                    }
code_r0x000135b5:
                    iVar11 = fcn.00012d8c(&var_68h,uVar7,iVar11);
                    uStack_c8 = iVar11 - &var_68h;
                    if (uVar7 == 0) {
                        uStack_c8 = uStack_c8 & -(uVar3 != 0);
                    }
                    pcVar5 = &var_68h + uStack_c8;
                    var_80h = uStack_c8 % 3;
                    if (var_80h != 0) {
                        var_80h = 3 - var_80h;
                    }
                    if ((bVar19) && (uStack_c8 != 0)) {
                        uStack_c8 = uStack_c8 + (uStack_c8 - 1) / 3;
                    }
                    if (cVar13 != '\0') {
                        uStack_c8 = uStack_c8 + 1;
                        uVar3 = uVar3 + 1;
                    }
                    uVar17 = uVar14 | 0x1000;
                    cVar16 = '\x01';
                    uVar7 = uStack_c8;
                    uStackX_18 = uVar17;
                    cVar12 = cVar13;
                    if (((((uVar14 & 0x20) != 0) && ((uVar14 & 1) == 0)) && ((uVar14 & 0x200) != 0)) &&
                       ((uVar14 & 0x800) == 0)) {
                        uVar3 = uStack_a0;
                    }
                    goto code_r0x000131ab;
                }
                if (uStack_b0 == 0x72) {
                    if (puVar18 == NULL) {
                        uVar14 = *puVar8;
                        in_stack_00000028 = puVar8 + 1;
                    }
                    else {
                        uVar14 = *puVar18;
                        puVar18 = puVar18 + 1;
                        puStack_b8 = puVar18;
                    }
                    pcVar5 = &var_68h;
                    if (uVar14 < 0) {
                        if ((uVar14 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar5 = *(uVar14 * 8 + 0x1a5d8);
                            goto code_r0x0001349a;
                        }
                    }
                    else if (uVar14 < 6) {
                        pcVar5 = *(uVar14 * 8 + 0x1a5b0);
code_r0x0001349a:
                        if (pcVar5 != &var_68h) goto code_r0x000131a6;
                    }
                    fcn.00013ac4(&var_68h,0x26,0,0x1a584);
                    goto code_r0x00013310;
                }
                if (uStack_b0 == 0x73) {
code_r0x000133de:
                    uVar17 = uVar14 | 0x400;
                    uStackX_18 = uVar17;
code_r0x000133e7:
                    if (puVar18 == NULL) {
                        pcVar5 = *puVar8;
                        in_stack_00000028 = puVar8 + 1;
                    }
                    else {
                        pcVar5 = *puVar18;
                        puVar18 = puVar18 + 1;
                        puStack_b8 = puVar18;
                    }
                    if (pcVar5 == NULL) {
                        uVar17 = uVar17 & 0xfffffffffffffbff;
                        pcVar5 = "<null string>";
                        uStackX_18 = uVar17;
                    }
                    if ((uVar17 >> 0xb & 1) == 0) {
                        uVar3 = 0;
                    }
                    goto code_r0x000131ab;
                }
                if (uStack_b0 == 0x74) {
                    if (puVar18 == NULL) {
                        uVar7 = *puVar8;
                        in_stack_00000028 = puVar8 + 1;
                    }
                    else {
                        uVar7 = *puVar18;
                        puVar18 = puVar18 + 1;
                        puStack_b8 = puVar18;
                    }
                    if (uVar7 != 0) {
                        fcn.00013ac4(&var_68h,0x26,0,0x1a568);
                        goto code_r0x0001330c;
                    }
                    pcVar5 = "<null time>";
                    uVar7 = uStack_c8;
                }
                else {
                    if (uStack_b0 == 0x75) goto code_r0x000134d9;
                    if (uStack_b0 == 0x78) goto code_r0x000134d4;
code_r0x00013356:
                    pcVar5 = &uStack_b0;
code_r0x0001319d:
                    uStackX_18 = uVar14 | 0x400;
                    uVar17 = uStackX_18;
                }
            }
code_r0x000131a6:
            cVar16 = '\0';
        }
        else {
            uVar17 = uVar14 | 0x400;
            pcVar5 = &uStack_b0;
            uStackX_18 = uVar17;
        }
code_r0x000131ab:
        iVar11 = 1;
        if ((uVar17 >> 10 & 1) == 0) {
            uVar14 = 0xff;
        }
        else {
            uVar14 = 0xffff;
            iVar11 = 2;
        }
        if ((uVar17 >> 0xc & 1) == 0) {
            uVar7 = 0;
            puVar8 = pcVar5;
            while (((uVar7 < uVar3 || ((uVar17 >> 0xb & 1) == 0)) && ((uVar14 & (*(puVar8 + 1) << 8 | *puVar8)) != 0)))
            {
                uVar7 = uVar7 + 1;
                puVar8 = puVar8 + iVar11;
            }
            uStack_c8 = uVar7;
        }
        else {
            iVar11 = -iVar11;
        }
        if (uVar3 < uVar7) {
            uVar3 = uVar7;
        }
        uVar2 = uVar17;
        uStack_a8 = uVar3;
        var_40h = uVar2 & 0x201;
        pcVar9 = pcStack_d0;
        if ((uVar2 & 0x201) == 0x200) {
            uStack_d8 = uStack_d8 + uStack0000000000000030 * (uStack_a0 - uVar3);
            if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012d58(arg1,pcStack_d0,uStack_a0 - uVar3,0x20);
                uVar7 = uStack_c8;
            }
        }
        if (cVar16 == '\0') {
            uVar10 = uStack0000000000000030;
            uStack_d8 = uStack_d8 + uVar10 * (uVar3 - uVar7);
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012d58(arg1,pcVar9,uVar3 - uVar7,(uVar2 & 0x2000) + 0x20);
            }
            if (((cVar12 != '\0') && (uStack_d8 = uStack_d8 + uVar10, (uVar17 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar6 = 0;
                uVar3 = (uVar2 & 0x2000) + 1;
                do {
                    if (pcStack_d0 <= arg1) break;
                    *arg1 = cVar12;
                    if (uVar10 != uVar3) {
                        *(arg1 + 1) = '\0';
                    }
                    iVar6 = iVar6 + uVar3;
                    arg1 = arg1 + uVar10;
                } while (iVar6 < uVar3);
            }
        }
        else {
            if (cVar12 != '\0') {
                uVar10 = uStack0000000000000030;
                uStack_d8 = uStack_d8 + uVar10;
                if (((uVar17 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                    iVar6 = 0;
                    do {
                        if (pcStack_d0 <= arg1) break;
                        *arg1 = cVar12;
                        if (uVar10 != 1) {
                            *(arg1 + 1) = '\0';
                        }
                        iVar6 = iVar6 + 1;
                        arg1 = arg1 + uVar10;
                    } while (iVar6 < 1);
                }
            }
            uVar10 = uStack0000000000000030;
            uStack_d8 = uStack_d8 + uVar10 * (uVar3 - uVar7);
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012d58(arg1,pcStack_d0,uVar3 - uVar7,(uVar2 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar17;
        if ((cVar12 != '\0') < uStack_c8) {
            uVar3 = cVar12 != '\0';
            iVar6 = var_80h;
            do {
                uStack_d8 = uStack_d8 + uVar10;
                uVar7 = (*(pcVar5 + 1) << 8 | *pcVar5) & uVar14;
                if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar15 = 0;
                    do {
                        if (pcStack_d0 <= arg1) break;
                        *arg1 = uVar7;
                        if (uVar10 != 1) {
                            *(arg1 + 1) = uVar7 >> 8;
                        }
                        iVar15 = iVar15 + 1;
                        arg1 = arg1 + uVar10;
                    } while (iVar15 < 1);
                }
                pcVar5 = pcVar5 + iVar11;
                uVar7 = uVar3 + 1;
                if ((bVar19) && (iVar6 = iVar6 + 1, iVar6 == 3)) {
                    uVar7 = uVar3 + 2;
                    iVar15 = 0;
                    if (uStack_c8 <= uVar7) break;
                    uStack_d8 = uStack_d8 + uVar10;
                    iVar6 = iVar15;
                    if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar4 = 0;
                        do {
                            iVar6 = iVar15;
                            if (pcStack_d0 <= arg1) break;
                            *arg1 = ',';
                            if (uVar10 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            iVar4 = iVar4 + 1;
                            arg1 = arg1 + uVar10;
                            iVar6 = 0;
                        } while (iVar4 < 1);
                    }
                }
                uVar3 = uVar7;
            } while (uVar7 < uStack_c8);
            arg3 = uStackX_18;
            puVar18 = puStack_b8;
        }
        if (var_40h == 0x201) {
            uStack_d8 = uStack_d8 + uVar10 * (uStack_a0 - uStack_a8);
            if (((uVar17 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.00012d58(arg1,pcStack_d0,uStack_a0 - uStack_a8,0x20);
            }
        }
        puStackX_20 = puStackX_20 + iStack_98;
    }
    uVar3 = uStack0000000000000030;
    iVar11 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d8 / uVar3;
    }
    pcVar5 = arg1;
    do {
        if (pcStack_d0 + uVar3 <= pcVar5) break;
        *pcVar5 = '\0';
        if (uVar3 != 1) {
            pcVar5[1] = '\0';
        }
        iVar11 = iVar11 + 1;
        pcVar5 = pcVar5 + uVar3;
    } while (iVar11 < 1);
    return (arg1 - var_78h) / uVar3;
}


/* fcn.00017c3c @ 0x17c3c */

uint64_t fcn.00017c3c(int64_t arg1)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0x43a,
                     "String != ((void *) 0)");
    }
    uVar2 = 0;
    cVar1 = *arg1;
    while (cVar1 != '\0') {
        if (((*0x191e0 != 0) && (cVar1 = fcn.00012d54(), cVar1 != '\0')) && (*0x191e0 <= uVar2)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0x442,
                         "Length < _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength");
        }
        arg1 = arg1 + 1;
        uVar2 = uVar2 + 1;
        cVar1 = *arg1;
    }
    return uVar2;
}


/* fcn.000153d4 @ 0x153d4 */

int64_t fcn.000153d4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg4;
    int64_t aiStackX_8 [2];
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iVar4 = *0x1a758;
    aiStackX_8[0] = 0;
    iVar3 = 0;
    iVar1 = *0x1a758;
    iStackX_18 = arg3;
    arg1_00 = fcn.0001553c(*0x1a758);
    if (arg1_00 != 0) {
        fcn.00013b40(iVar1,aiStackX_8,arg3);
        arg4 = 0x191e4;
        if (aiStackX_8[0] != 0) {
            arg4 = aiStackX_8[0];
        }
        iVar1 = fcn.00013bfc(arg1_00,0,0x191e4,arg4);
        if (iVar1 != 0) {
            iStackX_20 = 0;
            iVar2 = (**(*0x1a7b8 + 8))(*0x1a7b8,iVar1,iVar4,arg2 & 0xffff,&iStackX_18,&iStackX_20,0);
            if (iVar2 == -0x7ffffffffffffffb) {
                iVar3 = fcn.00013b18(iStackX_20);
                if (iVar3 != 0) {
                    iVar4 = (**(*0x1a7b8 + 8))(*0x1a7b8,iVar1,iVar4,arg2 & 0xffff,iVar3,&iStackX_20,0);
                    if (iVar4 < 0) {
                        (**(*0x1a798 + 0x48))(iVar3);
                        iVar3 = 0;
                    }
                }
            }
        }
        (**(*0x1a798 + 0x48))(arg1_00);
        if (aiStackX_8[0] != 0) {
            (**(*0x1a798 + 0x48))(aiStackX_8[0]);
        }
        if (iVar1 != 0) {
            (**(*0x1a798 + 0x48))(iVar1);
        }
    }
    return iVar3;
}


/* fcn.00013b18 @ 0x13b18 */

void fcn.00013b18(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00013ae8(arg1,arg1);
    if (arg1_00 != 0) {
        fcn.00017624(arg1_00,arg1);
    }
    return;
}


/* fcn.00013ae8 @ 0x13ae8 */

ulong fcn.00013ae8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1a798 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00017624 @ 0x17624 */

int64_t fcn.00017624(int64_t arg1,int64_t arg2)

{
    char cVar1;
    
    if (arg2 != 0) {
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (arg1 == 0)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\ZeroMemWrapper.c",
                         0x35,"Buffer != ((void *) 0)");
        }
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (-arg1 < arg2)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\ZeroMemWrapper.c",
                         0x36,"Length <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)Buffer + 1)");
        }
        arg1 = fcn.0001787c(arg1,arg2);
    }
    return arg1;
}


/* fcn.00017cc4 @ 0x17cc4 */

int64_t fcn.00017cc4(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00017c3c(arg1);
    return iVar1 + 1;
}


/* fcn.00017964 @ 0x17964 */

ulong fcn.00017964(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && ((arg2 & 1U) != 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb51,
                     "((UINTN) Destination & 0x00000001) == 0");
    }
    cVar1 = fcn.00012d54();
    if (cVar1 == '\0') {
code_r0x000179d3:
        if (arg2 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg2 == 0) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb56,
                     "(Destination != ((void *) 0))");
        goto code_r0x000179d3;
    }
    cVar1 = fcn.00012d54();
    if (cVar1 == '\0') {
code_r0x00017a09:
        if (arg1 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg1 == 0) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb57,
                     "(Source != ((void *) 0))");
        goto code_r0x00017a09;
    }
    if (*0x191e0 != 0) {
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (*0x191e0 < arg3)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb5d,
                         "(DestMax <= (_gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength))");
        }
        if (*0x191e0 < arg3) {
            return 0x8000000000000002;
        }
    }
    if (*0x191e0 != 0) {
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (*0x191e0 < arg3)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb60,
                         "(DestMax <= (_gPcd_FixedAtBuild_PcdMaximumAsciiStringLength))");
        }
        if (*0x191e0 < arg3) {
            return 0x8000000000000002;
        }
    }
    cVar1 = fcn.00012d54();
    if (cVar1 == '\0') {
code_r0x00017aac:
        if (arg3 == 0) {
            return 0x8000000000000002;
        }
    }
    else if (arg3 == 0) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb66,
                     "(DestMax != 0)");
        goto code_r0x00017aac;
    }
    uVar2 = fcn.00017b94(arg1,arg3);
    cVar1 = fcn.00012d54();
    if (cVar1 == '\0') {
code_r0x00017ae5:
        if (arg3 <= uVar2) {
            return 0x8000000000000005;
        }
    }
    else if (arg3 <= uVar2) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb6c,
                     "(DestMax > SourceLen)");
        goto code_r0x00017ae5;
    }
    cVar1 = fcn.00012d54();
    if (cVar1 == '\0') {
code_r0x00017b35:
        if (arg1 <= arg2) goto code_r0x00017b3a;
    }
    else {
        if (arg2 < arg1) {
code_r0x00017b18:
            if (arg1 < arg2 + arg3 * 2) {
code_r0x00017b21:
                fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0xb71,
                             "!InternalSafeStringIsOverlap (Destination, DestMax * sizeof(CHAR16), (void *)Source, SourceLen + 1)"
                            );
            }
            goto code_r0x00017b35;
        }
        if (arg2 < arg1 + 1 + uVar2) goto code_r0x00017b21;
        if (arg2 <= arg1) goto code_r0x00017b18;
code_r0x00017b3a:
        if (arg2 < arg1 + 1 + uVar2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00017b6d;
    }
    if (arg1 < arg2 + arg3 * 2) {
        return 0x800000000000000f;
    }
code_r0x00017b6d:
    for (; *arg1 != '\0'; arg1 = arg1 + 1) {
        *arg2 = *arg1;
        arg2 = arg2 + 2;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.00017570 @ 0x17570 */

int64_t fcn.00017570(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    char cVar1;
    uint in_register_00000014;
    int64_t arg2_00;
    uint in_R8;
    int64_t iVar2;
    
    iVar2 = CONCAT44(in_R8,arg3);
    arg2_00 = CONCAT44(in_register_00000014,arg2);
    if (iVar2 != 0) {
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (-arg1 - 1U < iVar2 - 1U)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\CopyMemWrapper.c",
                         0x38,"(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)DestinationBuffer)");
        }
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (-arg2_00 - 1U < iVar2 - 1U)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\CopyMemWrapper.c",
                         0x39,"(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)SourceBuffer)");
        }
        if (arg1 != arg2_00) {
            arg1 = fcn.000176a4(arg1,arg2_00,arg3);
        }
    }
    return arg1;
}


/* fcn.00010c34 @ 0x10c34 */

int64_t fcn.00010c34(int64_t arg1)

{
    int64_t iVar1;
    int64_t arg2;
    uint32_t arg1_00;
    char *pcVar2;
    char cVar3;
    char *arg1_01;
    int64_t *arg3;
    int64_t arg3_00;
    uint auStackX_8 [2];
    char *pcStackX_10;
    int64_t aiStackX_18 [2];
    
    auStackX_8[0] = arg1;
    arg3 = aiStackX_18;
    arg1_00 = 0x18578;
    arg2 = 0;
    iVar1 = (**(*0x1a798 + 0x140))(0x18578,0);
    if (iVar1 < 0) {
        arg2 = fcn.000153d4(arg1_00,2,arg3);
    }
    arg3_00 = 0;
    auStackX_8[0] = CONCAT22(auStackX_8[0]._2_2_,0xfffe);
    iVar1 = (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],auStackX_8,0,&pcStackX_10,0);
    do {
        if (iVar1 < 0) {
            return arg2;
        }
        if (*pcStackX_10 == '\x01') {
            cVar3 = pcStackX_10[4];
            arg1_01 = pcStackX_10 + pcStackX_10[1];
            if (cVar3 == '\0') {
                arg2 = fcn.00013b18(2);
            }
            else {
                iVar1 = 0;
                do {
                    arg1_01 = arg1_01 + iVar1;
                    cVar3 = cVar3 + -1;
                    pcVar2 = arg1_01;
                    iVar1 = fcn.00017cc4(arg1_01);
                    if (arg1_01[iVar1] == '\0') break;
                } while (cVar3 != '\0');
                if ((cVar3 == '\0') && (iVar1 != 1)) {
                    arg2 = fcn.00013b18(iVar1 * 2);
                    fcn.00017964(arg1_01,arg2,iVar1);
                }
                else {
                    arg2 = fcn.000153d4(pcVar2,3,arg3_00);
                }
            }
        }
        arg3_00 = 0;
        iVar1 = (**(aiStackX_18[0] + 0x18))(aiStackX_18[0],auStackX_8,0,&pcStackX_10,0);
    } while( true );
}


/* fcn.00011224 @ 0x11224 */

int64_t fcn.00011224(int64_t arg1)

{
    int64_t arg2;
    int64_t in_R9;
    
    arg2 = (**(*0x1a798 + 0x140))(0x18788,0);
    if (arg2 < 0) {
        fcn.00010b00(0x198e0,arg2,arg1,in_R9);
    }
    return arg2;
}


/* fcn.00011264 @ 0x11264 */

int64_t fcn.00011264(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    uint64_t arg3;
    uchar uVar1;
    unkbyte7 in_R9;
    
    uVar1 = *(arg1 + 0x14);
    arg3 = *(arg1 + 0x10);
    arg2_00 = (**(arg2 + 0x10))(*arg1,*(arg1 + 8),arg3,uVar1,*(arg1 + 0x15));
    if (arg2_00 < 0) {
        fcn.00010b00(0x19908,arg2_00,arg3,CONCAT71(in_R9,uVar1));
    }
    return arg2_00;
}


/* fcn.000112a8 @ 0x112a8 */

int64_t fcn.000112a8(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t arg3;
    int64_t arg4;
    
    arg4 = *(arg1 + 0x10);
    arg3 = *(arg1 + 8);
    arg2_00 = (**(arg2 + 8))(*arg1,*(arg1 + 4));
    if (arg2_00 < 0) {
        fcn.00010b00(0x19918,arg2_00,arg3,arg4);
    }
    return arg2_00;
}


/* fcn.00018528 @ 0x18528 */

int64_t fcn.00018528(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; arg3 != 0; arg3 = arg3 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011bc8 @ 0x11bc8 */

uint64_t fcn.00011bc8(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t in_RAX;
    uint16_t uVar6;
    uint in_register_00000014;
    uint16_t *puVar7;
    bool bVar8;
    
    puVar7 = CONCAT44(in_register_00000014,arg2);
    if ((*(arg1 + 4) & 0x80000000) != 0) {
        uVar1 = *puVar7;
        in_RAX = uVar1;
        uVar2 = *(arg1 + 4);
        uVar3 = puVar7[2];
        if (uVar1 == 0) {
            uVar1 = puVar7[1];
            if (((uVar1 - 0x41 < 0x1a) || (uVar4 = uVar1 - 0x61, uVar4 < 0x1a)) &&
               ((uVar6 = *(arg1 + 2), uVar6 - 0x41 < 0x1a || (uVar4 = uVar6 - 0x61, uVar4 < 0x1a)))) {
                if ((*(arg1 + 8) & 0xc4) == 0xc4) {
                    if (uVar6 - 0x41 < 0x1a) {
                        uVar6 = uVar6 + 0x20;
                    }
                    else if (uVar6 - 0x61 < 0x1a) {
                        uVar6 = uVar6 - 0x20;
                    }
                    *(arg1 + 2) = uVar6;
                }
                in_RAX = *(arg1 + 2);
                bVar8 = puVar7[1] == *(arg1 + 2);
            }
            else {
                in_RAX = uVar4;
                bVar8 = uVar1 == *(arg1 + 2);
            }
        }
        else {
            if (uVar1 != *arg1) goto code_r0x00011c88;
            bVar8 = ((uVar3 & 3) != 0) == ((uVar2 & 3) != 0);
            in_RAX = 0;
        }
        if (bVar8) {
            uVar5 = 0;
            if (((((uVar2 & 0xc) != 0) == ((uVar3 & 0xc) != 0)) &&
                (uVar5 = 0, ((uVar2 & 0x30) != 0) == ((uVar3 & 0x30) != 0))) &&
               (uVar5 = 0, ((uVar2 & 0xc0) != 0) == ((uVar3 & 0xc0) != 0))) {
                uVar5 = 0x200;
                if (((uVar2 ^ uVar3) & 0x200) == 0) {
                    return CONCAT71(2,~((uVar2 ^ uVar3) >> 8) & 1);
                }
            }
            return uVar5;
        }
    }
code_r0x00011c88:
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.00012a7c @ 0x12a7c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.00012a7c(void)

{
    bool bVar1;
    int iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint *arg3;
    uint *arg4;
    uint auStackX_8 [2];
    uint auStackX_10 [2];
    uint32_t auStackX_18 [2];
    ulong uStackX_20;
    int32_t var_40h;
    int32_t var_48h;
    int32_t var_50h;
    int64_t var_58h;
    int64_t iStack_58;
    ulong uStack_50;
    ulong uStack_48;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    auStackX_10[0] = 0x989898;
    auStackX_18[0] = 0;
    iStack_58 = 0;
    bVar1 = false;
    auStackX_8[0] = 0;
    fcn.00010d40();
    iVar3 = fcn.00017dc8(*0x190c0);
    uVar7 = (*0x1a76c >> 1) - 0x32;
    fcn.00010d90(*0x1a768 + (iVar3 + -1) * -8 >> 1,uVar7,auStackX_10,auStackX_8);
    iVar3 = fcn.00017dc8(*0x190c8);
    fcn.00010d90(*0x1a768 + (iVar3 + -1) * -8 >> 1,uVar7 + 0x19,auStackX_10,auStackX_8);
    iVar4 = fcn.00017dc8(*0x190d0);
    iVar3 = *0x190d0;
    fcn.00010d90(*0x1a768 + (iVar4 + -1) * -8 >> 1,uVar7 + 0x4b,auStackX_10,auStackX_8);
    iVar4 = uVar7 + 100;
    (**(*0x1a798 + 0x50))(0x80000000,0,0,0,&uStackX_20,iVar3);
    (**(*0x1a798 + 0x58))(uStackX_20,2,1200000000);
    uStack_50 = uStackX_20;
    iVar3 = 1;
code_r0x00012bc7:
    do {
        while( true ) {
            iVar5 = fcn.00017dc8(*0x190b0);
            iVar6 = fcn.00017dc8(*0x190b8);
            uVar7 = *0x1a768 + (iVar6 + -2 + iVar5) * -8 >> 1;
            iVar5 = uVar7 - 10;
            if (iVar3 == 1) {
                fcn.00010d90(iVar5,iVar4,auStackX_10,auStackX_8);
                arg4 = auStackX_10;
                arg3 = auStackX_8;
            }
            else {
                fcn.00010d90(iVar5,iVar4,auStackX_8,auStackX_10);
                arg4 = auStackX_8;
                arg3 = auStackX_10;
            }
            fcn.00010d90(uVar7 + 0x19,iVar4,arg3,arg4);
            uStack_48 = *(*(*0x1a790 + 0x30) + 0x10);
            do {
                iVar5 = (**(*0x1a798 + 0x60))(2,&uStack_50,&iStack_58);
                if (-1 < iVar5) {
                    if (iStack_58 == 0) {
                        fcn.00010d40();
                        return 0x8000000000000012;
                    }
                    if (iStack_58 == 1) {
                        (**(*(*0x1a790 + 0x30) + 8))(*(*0x1a790 + 0x30),auStackX_18);
                        bVar1 = true;
                    }
                }
            } while (!bVar1);
            iVar2 = (auStackX_18[0] & 0xffff) + (auStackX_18[0] >> 0x10);
            if (iVar2 != 3) break;
            if (iVar3 < 1) {
code_r0x00012d37:
                iVar3 = iVar3 + 1;
            }
        }
        if (iVar2 == 4) {
            if (iVar3 != 0) {
                iVar3 = iVar3 + -1;
            }
            goto code_r0x00012bc7;
        }
        if (iVar2 == 9) {
            if (iVar3 < 1) goto code_r0x00012d37;
            iVar3 = 0;
        }
        else if (iVar2 == 0xd) {
            fcn.00010d40();
            return -(iVar3 != 0) & 0x8000000000000015;
        }
    } while( true );
}


/* fcn.00016eb4 @ 0x16eb4 */

ulong fcn.00016eb4(int64_t arg1)

{
    fcn.000184b4(arg1,0x70,0);
    *arg1 = 0x6a09e667;
    *(arg1 + 4) = 0xbb67ae85;
    *(arg1 + 8) = 0x3c6ef372;
    *(arg1 + 0xc) = 0xa54ff53a;
    *(arg1 + 0x10) = 0x510e527f;
    *(arg1 + 0x14) = 0x9b05688c;
    *(arg1 + 0x18) = 0x1f83d9ab;
    *(arg1 + 0x1c) = 0x5be0cd19;
    *(arg1 + 0x6c) = 0x20;
    return 1;
}


/* fcn.000184b4 @ 0x184b4 */

int64_t fcn.000184b4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    char cVar2;
    char *pcVar3;
    
    uVar1 = arg3;
    if (arg2 != 0) {
        cVar2 = fcn.00012d54();
        if ((cVar2 != '\0') && (-arg1 - 1U < arg2 - 1U)) {
            pcVar3 = "(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)Buffer)";
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\SetMemWrapper.c",
                         0x36,"(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)Buffer)");
            arg3 = pcVar3;
        }
        arg1 = fcn.00017884(arg1,arg2,CONCAT71(arg3 >> 8,uVar1));
    }
    return arg1;
}


/* fcn.00016f14 @ 0x16f14 */

ulong fcn.00016f14(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t arg2_00;
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint in_R8;
    
    uVar4 = CONCAT44(in_R8,arg3);
    if (uVar4 != 0) {
        uVar1 = *(arg1 + 0x20) + arg3 * 8;
        if (uVar1 < *(arg1 + 0x20)) {
            *(arg1 + 0x24) = *(arg1 + 0x24) + 1;
        }
        *(arg1 + 0x20) = uVar1;
        uVar3 = *(arg1 + 0x68);
        *(arg1 + 0x24) = *(arg1 + 0x24) + (uVar4 >> 0x1d);
        if (uVar3 != 0) {
            arg2_00 = arg1 + 0x28;
            if ((uVar4 < 0x40) && (uVar3 + uVar4 < 0x40)) {
                fcn.00017570(uVar3 + arg2_00,arg2,arg3);
                *(arg1 + 0x68) = *(arg1 + 0x68) + arg3;
                return 1;
            }
            iVar2 = 0x40 - uVar3;
            fcn.00017570(uVar3 + arg2_00,arg2,iVar2);
            fcn.000171dc(arg1,arg2_00,1);
            *(arg1 + 0x68) = 0;
            arg2 = arg2 + iVar2;
            uVar4 = uVar4 - iVar2;
            fcn.000184b4(arg2_00,0x40,0);
        }
        uVar3 = uVar4 >> 6;
        if (uVar3 != 0) {
            fcn.000171dc(arg1,arg2,uVar3);
            arg2 = arg2 + uVar3 * 0x40;
            uVar4 = uVar4 + uVar3 * -0x40;
        }
        if (uVar4 != 0) {
            *(arg1 + 0x68) = uVar4;
            fcn.00017570(arg1 + 0x28,arg2,uVar4);
        }
    }
    return 1;
}


/* fcn.0001701c @ 0x1701c */

ulong fcn.0001701c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint uVar2;
    code *pcVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    uVar5 = *(arg2 + 0x68);
    iVar4 = arg2 + 0x28;
    *(uVar5 + iVar4) = 0x80;
    uVar6 = uVar5 + 1;
    uVar5 = 0;
    if (0x38 < uVar6) {
        fcn.000184b4(uVar6 + iVar4,0x40 - uVar6,0);
        uVar6 = 0;
        fcn.000171dc(arg2,iVar4,1);
    }
    fcn.000184b4(uVar6 + iVar4,0x38 - uVar6,0);
    *(arg2 + 0x60) = *(arg2 + 0x27);
    *(arg2 + 0x61) = *(arg2 + 0x26);
    *(arg2 + 0x62) = *(arg2 + 0x25);
    *(arg2 + 99) = *(arg2 + 0x24);
    *(arg2 + 100) = *(arg2 + 0x23);
    *(arg2 + 0x65) = *(arg2 + 0x22);
    *(arg2 + 0x66) = *(arg2 + 0x21);
    *(arg2 + 0x67) = *(arg2 + 0x20);
    fcn.000171dc(arg2,arg2 + 0x28,1);
    pcVar3 = *0x18760;
    *(arg2 + 0x68) = 0;
    (*pcVar3)(arg2 + 0x28,0,0x40);
    uVar1 = *(arg2 + 0x6c);
    if (uVar1 == 0x1c) {
        iVar4 = 7;
        do {
            uVar2 = *arg2;
            arg2 = arg2 + 4;
            *arg1 = uVar2 >> 0x18;
            *(arg1 + 1) = uVar2 >> 0x10;
            *(arg1 + 2) = uVar2 >> 8;
            *(arg1 + 3) = uVar2;
            arg1 = arg1 + 4;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    else if (uVar1 == 0x20) {
        iVar4 = 8;
        do {
            uVar2 = *arg2;
            arg2 = arg2 + 4;
            *arg1 = uVar2 >> 0x18;
            *(arg1 + 1) = uVar2 >> 0x10;
            *(arg1 + 2) = uVar2 >> 8;
            *(arg1 + 3) = uVar2;
            arg1 = arg1 + 4;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    else {
        if (0x20 < uVar1) {
            return 0;
        }
        if ((uVar1 & 0xfffffffc) != 0) {
            do {
                uVar6 = uVar5;
                uVar5 = uVar5 + 1;
                uVar2 = *(arg2 + uVar6 * 4);
                *arg1 = uVar2 >> 0x18;
                *(arg1 + 1) = uVar2 >> 0x10;
                *(arg1 + 2) = uVar2 >> 8;
                *(arg1 + 3) = uVar2;
                arg1 = arg1 + 4;
            } while (uVar5 < *(arg2 + 0x6c) >> 2);
        }
    }
    return 1;
}


/* fcn.000121f4 @ 0x121f4 */

ulong fcn.000121f4(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char *arg1_00;
    int64_t iVar2;
    uint64_t arg3_00;
    int64_t arg4_00;
    
    if (arg1 != 2) {
        fcn.00010b00(0x19dc8,arg1,arg3,arg4);
        return 0;
    }
    iVar2 = arg2;
    arg3_00 = arg3;
    arg4_00 = arg4;
    *0x1a780 = fcn.00013b18(0x70);
    if (*0x1a780 == 0) {
        arg1_00 = "Failed to Allocate pool\n";
    }
    else {
        cVar1 = fcn.00016eb4(*0x1a780);
        if (cVar1 == '\0') {
            arg1_00 = "Error in Intializing hash Algorithm\n";
        }
        else {
            arg3_00 = arg3 & 0xffff;
            if ((*0x1a780 == 0) || (cVar1 = fcn.00016f14(*0x1a780,arg2,arg3), iVar2 = arg2, cVar1 == '\0')) {
                arg1_00 = "Error in Updating has Algorithm\n";
            }
            else {
                iVar2 = *0x1a780;
                if ((*0x1a780 == 0) || (arg4 == 0)) {
                    cVar1 = '\0';
                }
                else {
                    cVar1 = fcn.0001701c(arg4,*0x1a780);
                }
                if (cVar1 != '\0') {
                    return 0;
                }
                arg1_00 = "Error in Getting Final Hash\n";
            }
        }
    }
    fcn.00010b00(arg1_00,iVar2,arg3_00,arg4_00);
    return 0x8000000000000009;
}


/* fcn.00012054 @ 0x12054 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00012054(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    int *piVar5;
    int64_t *arg3_00;
    int64_t iStackX_8;
    int64_t var_40h;
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iStackX_8 = 0;
    uStack_48 = 0x607f766c;
    uStack_44 = 0x42be7455;
    uStack_40 = 0xd7e40b93;
    uStack_3c = 0xf72b26d;
    if ((arg1 == 0) || (arg2 == 0)) {
        fcn.00010b00(0x19c60,arg2,arg3,arg4);
        iVar3 = -0x7ffffffffffffffe;
    }
    else {
        arg3_00 = &iStackX_8;
        iVar3 = arg4;
        iVar2 = (**(*0x1a798 + 0x140))(&uStack_48);
        if (iVar2 < 0) {
            fcn.00010b00(0x19c80,iVar2,arg3_00,iVar3);
        }
        else {
            iVar4 = fcn.00017dc8(arg2);
            iVar2 = arg3 + iVar4 * 2;
            piVar5 = fcn.00013b18(iVar2 + 0x32);
            if (piVar5 != NULL) {
                piVar5[1] = 0xe;
                *(piVar5 + 10) = 5;
                *(piVar5 + 0xe) = 0x80000001;
                *piVar5 = iVar2 + 0x32;
                *(piVar5 + 2) = 1;
                *(piVar5 + 0x22) = iVar4;
                *(piVar5 + 0x2a) = arg3;
                uVar1 = *(arg4 + 8);
                *(piVar5 + 0x12) = *arg4;
                *(piVar5 + 0x1a) = uVar1;
                fcn.00017570(piVar5 + 0x32,arg2,iVar4 * 2);
                fcn.00017570(piVar5 + (iVar4 + 0x19) * 2,arg1,arg3);
                iVar2 = iVar2 + 0x20;
                iVar3 = piVar5 + 0x12;
                iVar4 = (**(iStackX_8 + 0x10))(iStackX_8,0,iVar3,iVar2,piVar5);
                if (iVar4 < 0) {
                    fcn.00010b00(0x19ce0,iVar4,iVar3,iVar2);
                }
                (**(*0x1a798 + 0x48))(piVar5);
                return iVar4;
            }
            fcn.00010b00(0x19cb0,0,arg3_00,iVar3);
            if (iStackX_8 != 0) {
                (**(*0x1a798 + 0x48))();
            }
        }
        iVar3 = -0x7ffffffffffffff7;
    }
    return iVar3;
}


/* fcn.00014b5c @ 0x14b5c */

ulong fcn.00014b5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    ushort uVar3;
    int iVar4;
    ulong uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t uStackX_8;
    uint32_t var_160h;
    uchar auStack_228 [512];
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar5 = 2;
    }
    else {
        fcn.00017624(auStack_228,0x200);
        uVar5 = 0;
        iVar4 = fcn.00013dc4(*(arg1 + 0xc),*(arg1 + 0x14),0,0);
        if (iVar4 != 1) {
            uVar2 = fcn.00016e5c(auStack_228,1);
            *arg2 = *arg2 & 0xffffffef;
            *arg2 = *arg2 | (uVar2 & 1) << 4;
            uVar2 = fcn.00016e5c(auStack_228,2);
            *arg2 = *arg2 & 0xffffffdf;
            *arg2 = *arg2 | (uVar2 & 1) << 5;
            uVar2 = fcn.00016e5c(auStack_228,0xee);
            *arg2 = *arg2 & 0xffffffbf;
            *arg2 = *arg2 | (uVar2 & 1) << 6;
            fcn.00017624(auStack_228,0x200);
            iVar4 = fcn.00013dc4(*(arg1 + 0xc),*(arg1 + 0x14),CONCAT71(uVar5 >> 8,1),1);
            if (iVar4 != 1) {
                uStackX_8 = 0;
                iVar6 = fcn.00016db8(auStack_228,0x203,&uStackX_8);
                *arg2 = *arg2 & 0xfffffffd;
                *arg3 = 0;
                *arg2 = *arg2 | (iVar6 != 0) * 2;
                if (((*arg2 & 2) != 0) && (0x13 < uStackX_8)) {
                    uVar7 = ((*(iVar6 + 0xd) == '\0') << 8 ^ *arg2) & 0x100 ^ *arg2;
                    *arg2 = uVar7;
                    *arg2 = ((*(iVar6 + 0xe) == '\0') << 9 ^ uVar7) & 0x200 ^ uVar7;
                    uVar3 = fcn.00017ecc(*(iVar6 + 4));
                    *arg3 = uVar3;
                }
                uStackX_8 = 0;
                iVar6 = fcn.00016db8(auStack_228,0x301,&uStackX_8);
                *arg2 = *arg2 & 0xfffffffb;
                *arg2 = *arg2 | (iVar6 != 0) << 2;
                if (((iVar6 != 0) && (0x13 < uStackX_8)) && (*arg3 == 0)) {
                    uVar3 = fcn.00017ecc(*(iVar6 + 4));
                    cVar1 = *(iVar6 + 0xd);
                    *arg3 = uVar3;
                    *arg2 = *arg2 ^ ((cVar1 == '\0') << 8 ^ *arg2) & 0x100;
                    *arg2 = *arg2 ^ ((*(iVar6 + 0xe) == '\0') << 9 ^ *arg2) & 0x200;
                }
                uStackX_8 = 0;
                iVar6 = fcn.00016db8(auStack_228,0x302,&uStackX_8);
                *arg2 = *arg2 & 0xfffffff7;
                *arg2 = *arg2 | (iVar6 != 0) << 3;
                if (((iVar6 != 0) && (0x13 < uStackX_8)) && (*arg3 == 0)) {
                    uVar3 = fcn.00017ecc(*(iVar6 + 4));
                    cVar1 = *(iVar6 + 0xd);
                    *arg3 = uVar3;
                    *arg2 = *arg2 ^ ((cVar1 == '\0') << 8 ^ *arg2) & 0x100;
                    *arg2 = *arg2 ^ ((*(iVar6 + 0xe) == '\0') << 9 ^ *arg2) & 0x200;
                }
                uStackX_8 = 0;
                iVar6 = fcn.00016db8(auStack_228,0x200,&uStackX_8);
                *arg2 = *arg2 & 0xfffffffe;
                *arg2 = *arg2 | iVar6 != 0;
                if (((iVar6 != 0) && (0x13 < uStackX_8)) && (*arg3 == 0)) {
                    uVar3 = fcn.00017ecc(*(iVar6 + 4));
                    *arg3 = uVar3;
                }
                uStackX_8 = 0;
                iVar6 = fcn.00016db8(auStack_228,2,&uStackX_8);
                if ((iVar6 != 0) && (0xf < uStackX_8)) {
                    *arg2 = *arg2 ^ (*(iVar6 + 4) << 4 ^ *arg2) & 0x80;
                }
                uStackX_8 = 0;
                iVar6 = fcn.00016db8(auStack_228,0x402,&uStackX_8);
                if ((iVar6 != 0) && (0xf < uStackX_8)) {
                    *arg2 = *arg2 | 0x400;
                }
                return 0;
            }
        }
        uVar5 = 1;
    }
    return uVar5;
}


/* fcn.00014ec4 @ 0x14ec4 */

ulong fcn.00014ec4(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int64_t iVar2;
    ulong in_R8;
    uint64_t uStackX_8;
    uchar auStack_208 [512];
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar1 = 2;
    }
    else {
        fcn.00017624(auStack_208,0x200);
        uVar1 = fcn.00013dc4(*(arg1 + 0xc),*(arg1 + 0x14),CONCAT71(in_R8 >> 8,1),1);
        if (uVar1 != 1) {
            uStackX_8 = 0;
            iVar2 = fcn.00016db8(auStack_208,2,&uStackX_8);
            if ((iVar2 != 0) && (0xf < uStackX_8)) {
                fcn.00017570(arg2,iVar2,0x10);
            }
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.00014f70 @ 0x14f70 */

int fcn.00014f70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int iVar2;
    int64_t arg2_00;
    char acStackX_10 [8];
    uchar *in_stack_00000028;
    int64_t in_stack_00000030;
    
    acStackX_10[0] = arg2;
    if ((((arg1 == 0) || (in_stack_00000030 == 0)) || (arg3 == 0)) || (in_stack_00000028 == NULL)) {
        iVar2 = 2;
    }
    else {
        arg2_00 = 0x200000005020000;
        iVar2 = fcn.00013f88(arg1,0x200000005020000,arg3,arg4);
        if ((iVar2 == 0) && (acStackX_10[0] == '\0')) {
            *in_stack_00000028 = 0;
            iVar2 = fcn.00014680(arg1,arg2_00,acStackX_10);
            cVar1 = acStackX_10[0];
            if ((iVar2 != 0) || (acStackX_10[0] != '\0')) {
                fcn.000140a0(arg1);
            }
            iVar2 = fcn.0001506c(arg1,arg3,arg4 & 0xffffffff,in_stack_00000030);
            acStackX_10[0] = cVar1;
        }
        else {
            *in_stack_00000028 = 1;
        }
        if (acStackX_10[0] != '\0') {
            iVar2 = 1;
        }
    }
    return iVar2;
}


/* fcn.000125a0 @ 0x125a0 */

ulong fcn.000125a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    int iVar2;
    ulong uVar3;
    uint32_t *arg2_00;
    uint8_t uVar4;
    int64_t arg2_01;
    uint32_t *arg2_02;
    uint32_t uVar5;
    int64_t arg3_00;
    ushort *arg3_01;
    uchar in_R9B;
    unkbyte7 in_R9;
    ushort auStackX_10 [4];
    uchar auStack_28 [4];
    uint8_t uStack_24;
    
    auStackX_10[0] = 0;
    if (arg2 == 0) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar4 = 0;
        *arg2 = 0;
        arg2_01 = arg2;
        arg3_00 = arg3;
        arg2_00 = fcn.00013b18(4);
        if (arg2_00 == NULL) {
            fcn.00010b00(0x19f70,arg2_01,arg3_00,CONCAT71(in_R9,in_R9B));
            uVar3 = 0x8000000000000009;
        }
        else {
            arg3_01 = auStackX_10;
            arg2_02 = arg2_00;
            iVar2 = fcn.00014b5c(arg1,arg2_00,arg3_01);
            uVar3 = 0x800000000000000e;
            if (iVar2 == 0) {
                *(arg1 + 10) = auStackX_10[0];
                iVar2 = fcn.00014ec4(arg1,auStack_28);
                if (iVar2 == 0) {
                    uVar1 = 1;
                    uVar5 = *arg2_00 >> 4 & 1;
                    if (((uVar5 != 0) &&
                        (((((*arg2_00 & 4) != 0 || ((*arg2_00 & 1) != 0)) || ((*arg2_00 & 2) != 0)) ||
                         ((*arg2_00 & 8) != 0)))) && (((uStack_24 & 1) != 0 && ((uStack_24 & 2) != 0)))) {
                        uVar4 = uStack_24 >> 2 & 1;
                    }
                    *arg2 = uVar4;
                    if (((uVar5 == 0) ||
                        ((((*arg2_00 & 4) == 0 && ((*arg2_00 & 1) == 0)) &&
                         (((*arg2_00 & 2) == 0 && ((*arg2_00 & 8) == 0)))))) ||
                       (((uStack_24 & 1) == 0 || ((uStack_24 & 2) == 0)))) {
                        uVar1 = 0;
                    }
                    *arg3 = uVar1;
                    uVar3 = 0;
                }
            }
            else {
                fcn.00010b00(0x19fa8,arg2_02,arg3_01,CONCAT71(in_R9,in_R9B));
            }
            (**(*0x1a798 + 0x48))(arg2_00);
        }
    }
    return uVar3;
}


/* fcn.00013f88 @ 0x13f88 */

ulong fcn.00013f88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    ulong uVar2;
    uchar *arg3_00;
    uint32_t arg4_00;
    uint32_t auStackX_18 [4];
    char *in_stack_00000038;
    char *noname_5;
    uint32_t in_stack_fffffffffffffd68;
    uchar auStack_278 [40];
    uchar auStack_250 [56];
    uchar auStack_218 [512];
    
    arg4_00 = arg4;
    auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,arg3);
    if ((arg1 == 0) || (in_stack_00000038 == NULL)) {
        uVar2 = 2;
    }
    else {
        *(arg1 + 8) = 0;
        *arg1 = 1;
        uVar2 = fcn.00015804(auStack_278,auStack_218);
        if ((uVar2 == 0) && (uVar2 = fcn.000168ac(auStack_278,auStackX_18,*(arg1 + 10)), uVar2 == 0)) {
            arg3_00 = auStack_218;
            noname_5 = in_stack_00000038;
            uVar2 = fcn.00013eb0(arg1,auStackX_18[0],arg3_00,arg4_00);
            if (uVar2 == 0) {
                if ((*in_stack_00000038 == '\0') &&
                   (iVar1 = fcn.00016a60(auStack_250,*(arg1 + 10),arg3_00,arg4_00,arg1 + 4,noname_5,
                                         in_stack_fffffffffffffd68), iVar1 != 0)) {
                    fcn.000140a0(arg1);
                    return 1;
                }
                uVar2 = 0;
            }
        }
    }
    return uVar2;
}


/* fcn.00014270 @ 0x14270 */

uint64_t fcn.00014270(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    int64_t iVar4;
    uint32_t uStackX_8;
    uint uStackX_c;
    uint auStackX_10 [2];
    uint32_t uStack_288;
    int64_t iStack_284;
    uchar auStack_278 [40];
    int iStack_250;
    uint32_t uStack_24c;
    uchar auStack_248 [48];
    uchar auStack_218 [512];
    
    auStackX_10[0] = arg2;
    if (((arg1 == 0) || (arg3 == 0)) || (arg4 == 0)) {
        return 2;
    }
    iVar4 = arg4;
    uVar2 = fcn.00015804(auStack_278,auStack_218);
    uVar1 = iVar4;
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00015858(auStack_278,*(arg1 + 10),*(arg1 + 8));
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.000158d0(auStack_278,*(arg1 + 4),*arg1);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.000159cc(auStack_278);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar3 = 0x28400000b000000;
    uVar2 = fcn.000165b0(auStack_278,0x28400000b000000,0x1600000006000000);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00016640(auStack_278);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00015f8c(auStack_278);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00015fe4(auStack_278);
    if (uVar2 != 0) {
        return uVar2;
    }
    iVar4 = CONCAT71(uVar3 >> 8,3);
    uVar2 = fcn.00015f20(auStack_278,iVar4);
    if (uVar2 != 0) {
        return uVar2;
    }
    iVar4 = CONCAT71(iVar4 >> 8,3);
    uVar2 = fcn.00015f20(auStack_278,iVar4);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00016010(auStack_278);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00015fe4(auStack_278);
    if (uVar2 != 0) {
        return uVar2;
    }
    iVar4 = CONCAT71(iVar4 >> 8,4);
    uVar2 = fcn.00015f20(auStack_278,iVar4);
    if (uVar2 != 0) {
        return uVar2;
    }
    uVar2 = fcn.00015f20(auStack_278,CONCAT71(iVar4 >> 8,3));
    if (uVar2 == 0) {
        uVar2 = fcn.00016010(auStack_278);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00015fb8(auStack_278);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00016668(auStack_278);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00016690(auStack_278);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00015a94(auStack_278);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00015b50(auStack_278);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00015b78(auStack_278,&uStackX_8);
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar2 = fcn.00013eb0(arg1,uStackX_8,auStack_218,uVar1);
        if (uVar2 != 0) {
            return uVar2;
        }
        if (auStackX_10[0] != uVar2) {
            return 1;
        }
        uVar1 = fcn.000160d0(auStack_248,&uStack_288);
        uVar2 = uVar1;
        if (uVar1 == 0) {
            if (uStack_288 != 5) {
                return 1;
            }
            uVar2 = 0;
        }
        if (uVar2 != 0) {
            return uVar2;
        }
        uVar1 = fcn.000160d0(auStack_248,&uStack_288);
        if ((uVar1 != 0) || (uStack_288 == 5)) {
            if (uVar1 != 0) {
                return uVar1;
            }
            uVar1 = fcn.000160d0(auStack_248,&uStack_288);
            if ((uVar1 != 0) || (uStack_288 == 7)) {
                if (uVar1 != 0) {
                    return uVar1;
                }
                uVar2 = fcn.000164cc(auStack_248,&iStack_250);
                if (uVar2 != 0) {
                    return uVar2;
                }
                uVar2 = fcn.000160d0(auStack_248,&uStack_288);
                if (uVar2 == 0) {
                    *arg4 = 0;
                    uVar2 = fcn.000162bc(&uStack_288,&uStack_24c,arg4,auStackX_10);
                    if (uVar2 != 0) {
                        return 1;
                    }
                    if (auStackX_10[0] != '\x01') {
                        return 1;
                    }
                    iVar4 = uStack_24c + iStack_284;
                    if (iVar4 == 0) {
                        return 1;
                    }
                }
                else {
                    iVar4 = CONCAT44(uStackX_c,uStackX_8);
                }
                if (uVar2 != 0) {
                    return uVar2;
                }
                uVar2 = fcn.000160d0(auStack_248,&uStack_288);
                if (uVar2 != 0) {
                    return uVar2;
                }
                if (uStack_288 != 8) {
                    return 1;
                }
                uVar2 = fcn.000160d0(auStack_248,&uStack_288);
                if (uVar2 != 0) {
                    return uVar2;
                }
                if (uStack_288 != 6) {
                    return 1;
                }
                uVar2 = fcn.000160d0(auStack_248,&uStack_288);
                if (uVar2 != 0) {
                    return uVar2;
                }
                if (uStack_288 != 6) {
                    return 1;
                }
                uVar2 = fcn.000160d0(auStack_248,&uStack_288);
                if (uVar2 != 0) {
                    return uVar2;
                }
                if (uStack_288 != 10) {
                    return 1;
                }
                if (iStack_250 == 3) {
                    if (iVar4 == 0) {
                        return 1;
                    }
                    if (0x80 < *arg4) {
                        return 5;
                    }
                    fcn.00017570(arg3,iVar4,*arg4);
                    return 0;
                }
                return 1;
            }
        }
        return 1;
    }
    return uVar2;
}


/* fcn.000140a0 @ 0x140a0 */

ulong fcn.000140a0(int64_t arg1)

{
    int16_t iVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    ulong noname_2;
    uint32_t auStackX_8 [2];
    int16_t aiStackX_10 [4];
    uint32_t var_1a0h;
    uint32_t var_1a8h;
    uchar auStack_258 [48];
    uint32_t auStack_228 [4];
    uchar auStack_218 [400];
    int64_t var_80h;
    
    if (arg1 == 0) {
        uVar5 = 2;
    }
    else {
        uVar5 = fcn.00015804(auStack_258,auStack_218);
        if (uVar5 == 0) {
            uVar3 = *(arg1 + 4);
            uVar4 = *arg1;
            uVar5 = fcn.00015858(auStack_258,*(arg1 + 10),*(arg1 + 8));
            if (((uVar5 == 0) && (uVar5 = fcn.000158d0(auStack_258,uVar3,uVar4), uVar5 == 0)) &&
               (uVar5 = fcn.000159cc(auStack_258), uVar5 == 0)) {
                noname_2 = 0;
                auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,0xfa);
                uVar5 = fcn.00015bd8(auStack_258,0,0,auStackX_8);
                if (((((uVar5 == 0) && (uVar5 = fcn.00015a94(auStack_258), uVar5 == 0)) &&
                     ((uVar5 = fcn.00015b50(auStack_258), uVar5 == 0 &&
                      ((uVar5 = fcn.00015b78(auStack_258,auStackX_8), uVar5 == 0 &&
                       (uVar5 = fcn.00013d18(*(arg1 + 0xc),*(arg1 + 0x14),noname_2,*(arg1 + 10)), uVar5 == 0))))))
                    && (uVar5 = fcn.00013dc4(*(arg1 + 0xc),*(arg1 + 0x14),CONCAT71(noname_2 >> 8,1),*(arg1 + 10)),
                       uVar5 == 0)) && (uVar5 = fcn.0001603c(auStack_258,auStack_218), uVar5 == 0)) {
                    iVar1 = *(arg1 + 8);
                    iVar2 = *(arg1 + 10);
                    uVar5 = fcn.00016730(auStack_258,auStackX_8,aiStackX_10);
                    if (uVar5 == 0) {
                        if ((auStackX_8[0] == iVar2) && (aiStackX_10[0] == iVar1)) {
                            uVar5 = fcn.000160d0(auStack_258,auStack_228);
                            if (uVar5 == 0) {
                                if (auStack_228[0] == 0xb) {
                                    uVar5 = 0;
                                }
                                else {
                                    uVar5 = 1;
                                }
                            }
                        }
                        else {
                            uVar5 = 1;
                        }
                    }
                }
            }
        }
    }
    return uVar5;
}


/* fcn.000126ec @ 0x126ec */

ulong fcn.000126ec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t arg3_00;
    uint64_t arg4_00;
    
    if ((arg2 != 0) && (arg4 != 0)) {
        arg4_00 = arg3 & 0xffffffff;
        arg3_00 = arg2;
        iVar1 = fcn.00014f70(arg1,arg2,arg2,arg4_00);
        if (iVar1 == 0) {
            *0x1a750 = 1;
            fcn.00010b00(0x19fd8,arg2,arg3_00,arg4_00);
            *0x1a750 = 0;
            return 0;
        }
    }
    return 2;
}


/* fcn.0001506c @ 0x1506c */

int fcn.0001506c(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int iVar1;
    int64_t arg2_00;
    uint in_R9;
    char cStackX_8;
    uint32_t in_stack_00000028;
    
    if (((arg1 == 0) || (CONCAT44(in_R9,arg4) == 0)) || (arg2 == 0)) {
        return 2;
    }
    arg2_00 = 0x100000005020000;
    iVar1 = fcn.00013f88(arg1,0x100000005020000,arg3,arg3 & 0xffffffff);
    if (iVar1 == 0) {
        if (cStackX_8 != '\0') {
            return 1;
        }
        iVar1 = fcn.00014844(arg1,arg2_00,CONCAT44(in_R9,arg4),in_stack_00000028);
        fcn.000140a0(arg1);
    }
    if (cStackX_8 != '\0') {
        return 1;
    }
    return iVar1;
}


/* fcn.000181d8 @ 0x181d8 */

uint64_t fcn.000181d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg2 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\DivU64x32Remainder.c",0x2f,
                     "Divisor != 0");
    }
    if (arg3 != 0) {
        *arg3 = arg1 % (arg2 & 0xffffffffU);
    }
    return arg1 / (arg2 & 0xffffffffU);
}


/* fcn.00017bc0 @ 0x17bc0 */

uint64_t fcn.00017bc0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    cVar1 = fcn.00012d54();
    uVar2 = 0;
    if ((cVar1 != '\0') && ((arg1 & 1U) != 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\SafeString.c",0x80,
                     "((UINTN) String & 0x00000001) == 0");
    }
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar2 = 0;
    }
    else if (*arg1 != 0) {
        do {
            if (arg2 - 1U <= uVar2) {
                return arg2;
            }
            uVar2 = uVar2 + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
    }
    return uVar2;
}


/* fcn.00017b94 @ 0x17b94 */

uint64_t fcn.00017b94(uint32_t arg1,int64_t arg2)

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


/* fcn.00018120 @ 0x18120 */

uint fcn.00018120(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\Unaligned.c",0x8d,
                     "Buffer != ((void *) 0)");
    }
    return *arg1;
}


/* fcn.000180e8 @ 0x180e8 */

ushort fcn.000180e8(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\Unaligned.c",0x26,
                     "Buffer != ((void *) 0)");
    }
    return *arg1;
}


/* fcn.00013ac4 @ 0x13ac4 */

void fcn.00013ac4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int32_t in_stack_00000040;
    
    fcn.00012ddc(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.00012d8c @ 0x12d8c */

char * fcn.00012d8c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t auStackX_8 [2];
    
    *arg1 = 0;
    do {
        arg2 = fcn.000181d8(arg2,arg3 & 0xffffffff,auStackX_8);
        arg1 = arg1 + 1;
        *arg1 = str.0123456789ABCDEF[auStackX_8[0]];
    } while (arg2 != 0);
    return arg1;
}


/* fcn.00012d58 @ 0x12d58 */

uchar * fcn.00012d58(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00017cd8 @ 0x17cd8 */

int64_t fcn.00017cd8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    
    if (arg3 == 0) {
        iVar2 = 0;
    }
    else {
        cVar1 = fcn.00012d54();
        if (cVar1 != '\0') {
            iVar2 = fcn.00017c3c(arg1);
            if (iVar2 == -1) {
                fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0x528,
                             "AsciiStrSize (FirstString)");
            }
        }
        cVar1 = fcn.00012d54();
        if (cVar1 != '\0') {
            iVar2 = fcn.00017c3c(arg2);
            if (iVar2 == -1) {
                fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0x529,
                             "AsciiStrSize (SecondString)");
            }
        }
        if (*0x191e0 != 0) {
            cVar1 = fcn.00012d54();
            if ((cVar1 != '\0') && (*0x191e0 < arg3)) {
                fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\String.c",0x52c,
                             0x18bc8);
            }
        }
        for (; (((*arg1 != '\0' && (*arg2 != '\0')) && (*arg1 == *arg2)) && (1 < arg3)); arg3 = arg3 - 1) {
            arg1 = arg1 + 1;
            arg2 = arg2 + 1;
        }
        iVar2 = *arg1 - *arg2;
    }
    return iVar2;
}


/* fcn.00017ecc @ 0x17ecc */

uint32_t fcn.00017ecc(int64_t arg1)

{
    return (arg1 & 0xffffU) >> 8 | (arg1 & 0xffffU) << 8;
}


/* fcn.00017edc @ 0x17edc */

uint fcn.00017edc(int64_t arg1)

{
    ushort uVar1;
    ushort uVar2;
    
    uVar1 = fcn.00017ecc(arg1);
    uVar2 = fcn.00017ecc(arg1 >> 0x10 & 0xffff);
    return CONCAT22(uVar1,uVar2);
}


/* fcn.00013d18 @ 0x13d18 */

uchar fcn.00013d18(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ushort uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar uVar4;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    uVar3 = in_stack_00000028 + 0x1ffU & 0xfffffffffffffe00;
    if (uVar3 < 0x201) {
        fcn.00017624(in_stack_00000028 + in_stack_00000030,uVar3 - in_stack_00000028);
        uVar1 = fcn.00017ecc(arg3 & 0xffff);
        iVar2 = (**(arg1 + 8))(arg1,arg2 & 0xffffffff,5000000000,1,uVar1,uVar3);
        uVar4 = iVar2 != 0;
    }
    else {
        uVar4 = 5;
    }
    return uVar4;
}


/* fcn.00013dc4 @ 0x13dc4 */

ulong fcn.00013dc4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ushort uVar1;
    int iVar2;
    int iVar3;
    int64_t iVar4;
    int iVar5;
    int64_t in_stack_00000028;
    
    iVar5 = 5000;
    while( true ) {
        iVar5 = iVar5 + -1;
        fcn.00017624(in_stack_00000028,0x200);
        uVar1 = fcn.00017ecc(arg4 & 0xffff);
        iVar4 = (**arg1)(arg1,arg2 & 0xffffffff,5000000000,arg3,uVar1,0x200);
        if (iVar4 < 0) {
            return 1;
        }
        if ((arg3 != '\x01') || (arg4 == 1)) break;
        iVar2 = fcn.00017edc(*(in_stack_00000028 + 0x10));
        iVar3 = fcn.00017edc(*(in_stack_00000028 + 8));
        if ((iVar2 != 0) && (iVar3 == 0)) {
            return 0;
        }
        if (iVar5 == 0) {
            return 1;
        }
    }
    return 0;
}


/* fcn.0001603c @ 0x1603c */

ulong fcn.0001603c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    ulong uVar2;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        return 2;
    }
    *(arg1 + 0xc) = arg2;
    uVar1 = fcn.00017edc(*(arg2 + 0x10));
    if (uVar1 < 0x1ed) {
        *(arg1 + 0x14) = 0;
        *(arg1 + 0x1c) = 0;
        *(arg1 + 0x24) = 0;
        *(arg1 + 8) = 0x200;
        *arg1 = arg2;
        if (uVar1 != 0) {
            if (uVar1 < 0x18) goto code_r0x00016070;
            *(arg1 + 0x14) = *(arg1 + 0xc) + 0x14;
            uVar1 = fcn.00017edc(*(*(arg1 + 0xc) + 0x28));
            if (uVar1 != 0) {
                if (uVar1 < 0xc) goto code_r0x00016070;
                *(arg1 + 0x1c) = *(arg1 + 0x14) + 0x18;
            }
        }
        uVar2 = 0;
    }
    else {
code_r0x00016070:
        uVar2 = 5;
    }
    return uVar2;
}


/* fcn.00016730 @ 0x16730 */

ulong fcn.00016730(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    ushort uVar1;
    ulong uVar2;
    
    if (((arg1 == 0) || (arg2 == NULL)) || (arg3 == 0)) {
        uVar2 = 2;
    }
    else if (*(arg1 + 0xc) == 0) {
        uVar2 = 4;
    }
    else {
        uVar1 = fcn.00017ecc(*(*(arg1 + 0xc) + 4));
        *arg2 = uVar1;
        uVar1 = fcn.00017ecc(*(*(arg1 + 0xc) + 6));
        *arg3 = uVar1;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001679c @ 0x1679c */

uint64_t fcn.0001679c(uint32_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint in_register_00000014;
    uint32_t var_bp_10h;
    uint32_t var_bp_20h;
    uint32_t var_40h;
    int64_t var_30h;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar2 == 0) || (CONCAT44(in_register_00000014,arg2) == 0)) {
        uVar1 = 2;
    }
    else if (((*(iVar2 + 0xc) == 0) || (*(iVar2 + 0x14) == 0)) || (*(iVar2 + 0x1c) == 0)) {
        uVar1 = 4;
    }
    else {
        fcn.00017570(&var_30h,arg1,0x2c);
        do {
            uVar1 = fcn.000160d0(&var_30h,&var_40h);
            if (uVar1 != 0) {
                return uVar1;
            }
        } while (var_40h != 10);
        uVar1 = fcn.000160d0(&var_30h,&var_40h);
        if (uVar1 == 0) {
            if (var_40h == 5) {
                uVar1 = fcn.00016478(&var_30h,CONCAT44(in_register_00000014,arg2));
                if (uVar1 != 0) {
                    return uVar1;
                }
                uVar1 = fcn.00016478(&var_30h,&var_bp_10h);
                if (uVar1 != 0) {
                    return uVar1;
                }
                uVar1 = fcn.00016478(&var_30h,&var_bp_20h);
                if (uVar1 != 0) {
                    return uVar1;
                }
                uVar1 = fcn.000160d0(&var_30h,&var_40h);
                if (uVar1 != 0) {
                    return uVar1;
                }
                if ((var_40h == 6) && (var_bp_10h == '\0')) {
                    return var_bp_20h != '\0';
                }
            }
            uVar1 = 1;
        }
    }
    return uVar1;
}


/* fcn.00015804 @ 0x15804 */

ulong fcn.00015804(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar1 = 2;
    }
    else {
        fcn.00017624(arg2,0x200);
        *(arg1 + 0xc) = 0;
        *(arg1 + 0x14) = 0;
        *(arg1 + 0x1c) = 0;
        *(arg1 + 8) = 0x200;
        *arg1 = arg2;
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000168ac @ 0x168ac */

void fcn.000168ac(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t arg1_00;
    int64_t arg2_00;
    unkbyte7 in_R9;
    ulong in_stack_00000030;
    uint uStack0000000000000038;
    uint32_t in_stack_00000040;
    int64_t in_stack_00000048;
    uint32_t uStack0000000000000050;
    
    arg1_00 = arg1;
    iVar1 = fcn.00015858(arg1_00,arg3 & 0xffff,0);
    if ((((iVar1 == 0) && (iVar1 = fcn.000158d0(arg1_00,0,0), iVar1 == 0)) &&
        (iVar1 = fcn.000159cc(arg1_00), iVar1 == 0)) &&
       ((iVar1 = fcn.000165b0(arg1_00,-0x100000000000000,0x2ff000000000000), iVar1 == 0 &&
        (iVar1 = fcn.00016640(arg1_00), iVar1 == 0)))) {
        uStack0000000000000038 = 1;
        iVar1 = fcn.00015ed8(arg1,&stack0x00000038,4);
        if ((iVar1 == 0) && (iVar1 = fcn.00015f50(arg1,in_stack_00000030), iVar1 == 0)) {
            arg2_00 = CONCAT71(in_stack_00000030 >> 8,1);
            iVar1 = fcn.00015f20(arg1,arg2_00);
            if (iVar1 == 0) {
                if ((in_stack_00000048 != 0) && (in_stack_00000040 != 0)) {
                    iVar1 = fcn.00015fe4(arg1);
                    if (iVar1 != 0) {
                        return;
                    }
                    iVar1 = fcn.00015f20(arg1,0);
                    if (iVar1 != 0) {
                        return;
                    }
                    iVar1 = fcn.00015d64(arg1,in_stack_00000048,in_stack_00000040,CONCAT71(in_R9,1),0);
                    if (iVar1 != 0) {
                        return;
                    }
                    iVar1 = fcn.00016010(arg1);
                    arg2_00 = in_stack_00000048;
                    if (iVar1 != 0) {
                        return;
                    }
                }
                if (_uStack0000000000000050 != 0) {
                    iVar1 = fcn.00015fe4(arg1);
                    if (iVar1 != 0) {
                        return;
                    }
                    iVar1 = fcn.00015f20(arg1,CONCAT71(arg2_00 >> 8,3));
                    if (iVar1 != 0) {
                        return;
                    }
                    iVar1 = fcn.00015f50(arg1,uStack0000000000000050);
                    if (iVar1 != 0) {
                        return;
                    }
                    iVar1 = fcn.00016010(arg1);
                    if (iVar1 != 0) {
                        return;
                    }
                }
                iVar1 = fcn.00016668(arg1_00);
                if ((((iVar1 == 0) && (iVar1 = fcn.00016690(arg1_00), iVar1 == 0)) &&
                    (iVar1 = fcn.00015a94(arg1_00), iVar1 == 0)) && (iVar1 = fcn.00015b50(arg1_00), iVar1 == 0)) {
                    fcn.00015b78(arg1,arg2);
                }
            }
        }
    }
    return;
}


/* fcn.00013eb0 @ 0x13eb0 */

ulong fcn.00013eb0(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    int16_t iVar1;
    int16_t iVar2;
    ulong uVar3;
    int64_t iVar4;
    int16_t aiStackX_8 [4];
    uint32_t auStackX_20 [2];
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    if ((arg1 == 0) || (in_stack_00000030 == 0)) {
        uVar3 = 2;
    }
    else {
        iVar4 = arg3;
        auStackX_20[0] = arg4;
        uVar3 = fcn.00013d18(*(arg1 + 0xc),*(arg1 + 0x14),arg3,*(arg1 + 10));
        if (((uVar3 == 0) &&
            (uVar3 = fcn.00013dc4(*(arg1 + 0xc),*(arg1 + 0x14),CONCAT71(iVar4 >> 8,1),*(arg1 + 10)), uVar3 == 0))
           && (uVar3 = fcn.0001603c(in_stack_00000028,arg3), uVar3 == 0)) {
            iVar1 = *(arg1 + 8);
            iVar2 = *(arg1 + 10);
            uVar3 = fcn.00016730(in_stack_00000028,auStackX_20,aiStackX_8);
            if (uVar3 == 0) {
                if ((auStackX_20[0] == iVar2) && (aiStackX_8[0] == iVar1)) {
                    uVar3 = fcn.0001679c(in_stack_00000028,in_stack_00000030);
                }
                else {
                    uVar3 = 1;
                }
            }
        }
    }
    return uVar3;
}


/* fcn.00016a60 @ 0x16a60 */

uint64_t fcn.00016a60(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4,int64_t noname_4,ulong noname_5,
                     uint32_t arg_40h)

{
    uint64_t uVar1;
    int64_t aiStackX_8 [2];
    uint32_t var_bp_20h;
    uint32_t auStackX_20 [2];
    int64_t iStack_68;
    uint32_t auStack_60 [2];
    uint32_t var_50h;
    uint32_t var_48h;
    int64_t var_38h;
    
    var_bp_20h = CONCAT22(var_bp_20h._2_2_,arg3);
    if ((arg1 == 0) || (noname_4 == 0)) {
        uVar1 = 2;
    }
    else {
        auStackX_20[0] = arg4;
        fcn.00017570(&var_48h,arg1,0x2c);
        uVar1 = fcn.0001679c(&var_48h,&var_bp_20h);
        if (uVar1 == 0) {
            if (var_bp_20h == '\0') {
                uVar1 = fcn.00016730(&var_48h,&var_bp_20h,auStackX_20);
                if (uVar1 != 0) {
                    return uVar1;
                }
                if ((arg2 == var_bp_20h) && (auStackX_20[0] == 0)) {
                    uVar1 = fcn.000160d0(&var_48h,auStack_60);
                    if (uVar1 != 0) {
                        return uVar1;
                    }
                    if (auStack_60[0] == 9) {
                        uVar1 = fcn.00016520(&var_48h,aiStackX_8);
                        if (uVar1 != 0) {
                            return uVar1;
                        }
                        uVar1 = fcn.00016520(&var_48h,&iStack_68);
                        if (uVar1 != 0) {
                            return uVar1;
                        }
                        uVar1 = fcn.000160d0(&var_48h,auStack_60);
                        if (uVar1 != 0) {
                            return uVar1;
                        }
                        if (auStack_60[0] == 5) {
                            uVar1 = fcn.000164cc(&var_48h,&var_bp_20h);
                            if (uVar1 != 0) {
                                return uVar1;
                            }
                            uVar1 = fcn.000164cc(&var_48h,noname_4);
                            if (uVar1 != 0) {
                                return uVar1;
                            }
                            uVar1 = fcn.000160d0(&var_48h,auStack_60);
                            if (uVar1 != 0) {
                                return uVar1;
                            }
                            if (auStack_60[0] == 6) {
                                uVar1 = fcn.000160d0(&var_48h,auStack_60);
                                if (uVar1 != 0) {
                                    return uVar1;
                                }
                                if ((auStack_60[0] == 10) && (aiStackX_8[0] == -0x100000000000000)) {
                                    if (iStack_68 != 0x3ff000000000000) {
                                        return 1;
                                    }
                                    return var_bp_20h != 1;
                                }
                            }
                        }
                    }
                }
            }
            uVar1 = 1;
        }
    }
    return uVar1;
}


/* fcn.00015858 @ 0x15858 */

int fcn.00015858(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    ushort uVar1;
    int iVar2;
    uint in_register_0000000c;
    ulong *puVar3;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3 == NULL) {
        iVar2 = arg1 + 2;
    }
    else if (((*(puVar3 + 0xc) == 0) && (*(puVar3 + 0x14) == 0)) && (*(puVar3 + 0x1c) == 0)) {
        if (*(puVar3 + 1) < 0x14) {
            iVar2 = 5;
        }
        else {
            *(puVar3 + 0xc) = *puVar3;
            uVar1 = fcn.00017ecc(arg2 & 0xffff);
            *(*(puVar3 + 0xc) + 4) = uVar1;
            uVar1 = fcn.00017ecc(arg3 & 0xffff);
            *(*(puVar3 + 0xc) + 6) = uVar1;
            iVar2 = 0;
        }
    }
    else {
        iVar2 = 4;
    }
    return iVar2;
}


/* fcn.000158d0 @ 0x158d0 */

int fcn.000158d0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    ushort uVar3;
    int iVar4;
    uint32_t uVar5;
    uint uVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    
    iVar7 = CONCAT44(in_register_0000000c,arg1);
    if (iVar7 == 0) {
        iVar4 = arg1 + 2;
    }
    else if (((*(iVar7 + 0xc) == 0) || (*(iVar7 + 0x14) != 0)) || (*(iVar7 + 0x1c) != 0)) {
        iVar4 = 4;
    }
    else {
        iVar4 = fcn.00017edc(*(*(iVar7 + 0xc) + 0x10));
        if (*(iVar7 + 8) < iVar4 + 0x18U) {
            iVar4 = 5;
        }
        else {
            uVar5 = fcn.00017edc(*(*(iVar7 + 0xc) + 0x10));
            *(iVar7 + 0x14) = uVar5 + *(iVar7 + 0xc) + 0x14;
            uVar6 = fcn.00017edc(arg2 & 0xffffffff);
            **(iVar7 + 0x14) = uVar6;
            uVar6 = fcn.00017edc(arg3 & 0xffffffff);
            *(*(iVar7 + 0x14) + 4) = uVar6;
            uVar6 = fcn.00017edc(0);
            *(*(iVar7 + 0x14) + 8) = uVar6;
            uVar3 = fcn.00017ecc(0);
            iVar1 = *(iVar7 + 0x14);
            *(iVar1 + 0xe) = uVar3;
            uVar6 = fcn.00017edc(0);
            *(iVar1 + 0x10) = uVar6;
            iVar2 = *(iVar7 + 0xc);
            *(iVar1 + 0x14) = 0;
            iVar4 = fcn.00017edc(*(iVar2 + 0x10));
            uVar6 = fcn.00017edc(iVar4 + 0x18);
            *(*(iVar7 + 0xc) + 0x10) = uVar6;
            iVar4 = 0;
        }
    }
    return iVar4;
}


/* fcn.000159cc @ 0x159cc */

int fcn.000159cc(uint32_t arg1)

{
    int64_t iVar1;
    ushort uVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    int64_t iVar7;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    if (iVar6 == 0) {
        iVar3 = arg1 + 2;
    }
    else if (((*(iVar6 + 0xc) == 0) || (*(iVar6 + 0x14) == 0)) || (*(iVar6 + 0x1c) != 0)) {
        iVar3 = 4;
    }
    else {
        iVar3 = fcn.00017edc(*(*(iVar6 + 0xc) + 0x10));
        if (*(iVar6 + 8) < iVar3 + 0xcU) {
            iVar3 = 5;
        }
        else {
            uVar4 = fcn.00017edc(*(*(iVar6 + 0x14) + 0x14));
            iVar7 = *(iVar6 + 0x14) + 0x18 + uVar4;
            *(iVar6 + 0x1c) = iVar7;
            uVar2 = fcn.00017ecc(0);
            *(iVar7 + 6) = uVar2;
            iVar1 = *(iVar6 + 0xc);
            *(iVar7 + 8) = 0;
            iVar3 = fcn.00017edc(*(iVar1 + 0x10));
            uVar5 = fcn.00017edc(iVar3 + 0xc);
            *(*(iVar6 + 0xc) + 0x10) = uVar5;
            iVar3 = fcn.00017edc(*(*(iVar6 + 0x14) + 0x14));
            uVar5 = fcn.00017edc(iVar3 + 0xc);
            *(*(iVar6 + 0x14) + 0x14) = uVar5;
            iVar3 = 0;
        }
    }
    return iVar3;
}


/* fcn.00015bd8 @ 0x15bd8 */

ulong fcn.00015bd8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    ulong uVar4;
    char cVar5;
    uint32_t uVar6;
    int iVar7;
    uchar *arg1_00;
    uint32_t in_stack_00000028;
    char in_stack_00000030;
    
    uVar6 = 0;
    if (((arg1 == 0) || ((cVar5 = arg3, cVar5 != '\0' && (arg2 == 0)))) || ((in_stack_00000028 != 0 && (arg4 == 0)))) {
        uVar4 = 2;
    }
    else if (((*(arg1 + 0xc) == 0) || (*(arg1 + 0x14) == 0)) || (*(arg1 + 0x1c) == 0)) {
        uVar4 = 4;
    }
    else {
        iVar7 = (arg3 & 0xff) + in_stack_00000028;
        iVar1 = fcn.00017edc(*(*(arg1 + 0xc) + 0x10));
        if (*(arg1 + 8) < iVar1 + iVar7) {
            uVar4 = 5;
        }
        else {
            uVar2 = fcn.00017edc(*(*(arg1 + 0xc) + 0x10));
            arg1_00 = *(arg1 + 0xc) + 0x14 + uVar2;
            if (cVar5 != '\0') {
                if ((((arg3 & 0xff) - 1 & 0xfc) != 0) || (cVar5 == '\x03')) {
                    return 1;
                }
                fcn.00017570(arg1_00,arg2,arg3 & 0xffU);
                arg1_00 = arg1_00 + (arg3 & 0xffU);
            }
            if (in_stack_00000030 == '\0') {
                fcn.00017570(arg1_00,arg4,in_stack_00000028);
            }
            else if (in_stack_00000028 != 0) {
                do {
                    iVar1 = in_stack_00000028 - uVar6;
                    uVar6 = uVar6 + 1;
                    *arg1_00 = *((iVar1 - 1) + arg4);
                    arg1_00 = arg1_00 + 1;
                } while (uVar6 < in_stack_00000028);
            }
            iVar1 = fcn.00017edc(*(*(arg1 + 0xc) + 0x10));
            uVar3 = fcn.00017edc(iVar7 + iVar1);
            *(*(arg1 + 0xc) + 0x10) = uVar3;
            iVar1 = fcn.00017edc(*(*(arg1 + 0x14) + 0x14));
            uVar3 = fcn.00017edc(iVar7 + iVar1);
            *(*(arg1 + 0x14) + 0x14) = uVar3;
            iVar1 = fcn.00017edc(*(*(arg1 + 0x1c) + 8));
            uVar3 = fcn.00017edc(iVar7 + iVar1);
            *(*(arg1 + 0x1c) + 8) = uVar3;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00015a94 @ 0x15a94 */

int fcn.00015a94(uint32_t arg1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if (iVar5 == 0) {
        iVar1 = arg1 + 2;
    }
    else if (((*(iVar5 + 0xc) == 0) || (*(iVar5 + 0x14) == 0)) || (*(iVar5 + 0x1c) == 0)) {
        iVar1 = 4;
    }
    else {
        uVar2 = fcn.00017edc(*(*(iVar5 + 0x1c) + 8));
        iVar1 = 4 - (uVar2 & 3);
        if (iVar1 == 4) {
            iVar1 = 0;
        }
        iVar3 = fcn.00017edc(*(*(iVar5 + 0xc) + 0x10));
        if (*(iVar5 + 8) < iVar3 + iVar1) {
            iVar1 = 5;
        }
        else {
            iVar3 = fcn.00017edc(*(*(iVar5 + 0x14) + 0x14));
            uVar4 = fcn.00017edc(iVar1 + iVar3);
            *(*(iVar5 + 0x14) + 0x14) = uVar4;
            iVar3 = fcn.00017edc(*(*(iVar5 + 0xc) + 0x10));
            uVar4 = fcn.00017edc(iVar1 + iVar3);
            *(iVar5 + 0x1c) = 0;
            *(*(iVar5 + 0xc) + 0x10) = uVar4;
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.00015b50 @ 0x15b50 */

int fcn.00015b50(uint32_t arg1)

{
    uint in_register_0000000c;
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        return arg1 + 2;
    }
    if (((*(CONCAT44(in_register_0000000c,arg1) + 0xc) != 0) && (*(CONCAT44(in_register_0000000c,arg1) + 0x14) != 0))
       && (*(CONCAT44(in_register_0000000c,arg1) + 0x1c) == 0)) {
        *(CONCAT44(in_register_0000000c,arg1) + 0x14) = 0;
        return 0;
    }
    return 4;
}


/* fcn.00015b78 @ 0x15b78 */

ulong fcn.00015b78(uint32_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar3 == 0) || (arg2 == 0)) {
        uVar2 = 2;
    }
    else if ((*(iVar3 + 0xc) == 0) || ((*(iVar3 + 0x14) != 0 || (*(iVar3 + 0x1c) != 0)))) {
        uVar2 = 4;
    }
    else {
        iVar1 = fcn.00017edc(*(*(iVar3 + 0xc) + 0x10));
        *(iVar3 + 0xc) = 0;
        *arg2 = iVar1 + 0x14;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000160d0 @ 0x160d0 */

ulong fcn.000160d0(uint32_t arg1,uint32_t *arg2)

{
    uint8_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if ((iVar4 == 0) || (arg2 == NULL)) {
        return 2;
    }
    if (((*(iVar4 + 0xc) == 0) || (*(iVar4 + 0x14) == 0)) || (iVar3 = *(iVar4 + 0x1c), iVar3 == 0)) {
        return 4;
    }
    if (*(iVar4 + 0x24) == 0) {
        *(iVar4 + 0x24) = iVar3 + 0xc;
    }
    uVar2 = fcn.00017edc(*(iVar3 + 8));
    puVar6 = *(iVar4 + 0x1c) + 0xc + (uVar2 & 0xffffffff);
    puVar5 = *(iVar4 + 0x24);
    if (puVar6 <= puVar5) {
        return 6;
    }
    uVar1 = *puVar5;
    *(arg2 + 1) = puVar5;
    if (uVar1 < 0x80) {
        *arg2 = 1;
        puVar5 = puVar5 + 1;
    }
    else {
        if (uVar1 < 0xc0) {
            puVar5 = *(iVar4 + 0x24);
            *arg2 = 2;
            uVar2 = *puVar5 & 0xf;
            iVar3 = *(arg2 + 1) + 1;
        }
        else if (uVar1 + 0x40 < 0x20) {
            if (puVar6 <= puVar5 + 2) {
                return 6;
            }
            puVar5 = *(iVar4 + 0x24);
            *arg2 = 3;
            uVar2 = (*puVar5 & 7) << 8 | puVar5[1];
            iVar3 = *(arg2 + 1) + 2;
        }
        else {
            if (3 < uVar1 + 0x20) {
                if (uVar1 < 0xfa) {
                    if (uVar1 == 0xf9) {
                        *arg2 = 10;
                    }
                    else if (uVar1 == 0xf0) {
                        *arg2 = 5;
                    }
                    else if (uVar1 == 0xf1) {
                        *arg2 = 6;
                    }
                    else if (uVar1 == 0xf2) {
                        *arg2 = 7;
                    }
                    else if (uVar1 == 0xf3) {
                        *arg2 = 8;
                    }
                    else {
                        if (uVar1 != 0xf8) goto code_r0x00016273;
                        *arg2 = 9;
                    }
                }
                else if (uVar1 == 0xfa) {
                    *arg2 = 0xb;
                }
                else if (uVar1 == 0xfb) {
                    *arg2 = 0xc;
                }
                else if (uVar1 == 0xfc) {
                    *arg2 = 0xd;
                }
                else if (uVar1 == 0xff) {
                    *arg2 = 0xe;
                }
                else {
code_r0x00016273:
                    *arg2 = 0;
                }
                *(iVar4 + 0x24) = *(iVar4 + 0x24) + 1;
                puVar5 = *(arg2 + 1) + 1;
                goto code_r0x000162a1;
            }
            if (puVar6 <= puVar5 + 4) {
                return 6;
            }
            iVar3 = *(iVar4 + 0x24);
            *arg2 = 4;
            uVar2 = CONCAT11(*(iVar3 + 1),*(iVar3 + 2)) << 8 | *(iVar3 + 3);
            iVar3 = *(arg2 + 1) + 4;
        }
        puVar5 = uVar2 + iVar3;
    }
    if (puVar6 <= puVar5) {
        return 6;
    }
code_r0x000162a1:
    *(iVar4 + 0x24) = puVar5;
    return 0;
}


/* fcn.000165b0 @ 0x165b0 */

uint64_t fcn.000165b0(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar auStackX_8 [8];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 == 0) {
        uVar1 = arg1 + 2;
    }
    else if (((*(arg1_00 + 0xc) == 0) || (*(arg1_00 + 0x14) == 0)) || (*(arg1_00 + 0x1c) == 0)) {
        uVar1 = 4;
    }
    else {
        auStackX_8[0] = 0xf8;
        uVar1 = fcn.00015bd8(arg1_00,0,0,auStackX_8);
        if (uVar1 == 0) {
            uVar1 = fcn.00015f50(arg1_00,arg2);
            if (uVar1 == 0) {
                uVar1 = fcn.00015f50(arg1_00,arg3);
            }
        }
    }
    return uVar1;
}


/* fcn.00016640 @ 0x16640 */

uint64_t fcn.00016640(uint32_t arg1)

{
    uint64_t extraout_RAX;
    uint64_t uVar1;
    uint in_register_0000000c;
    uchar auStackX_10 [24];
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar1 = arg1 + 2;
    }
    else {
        if (((*(CONCAT44(in_register_0000000c,arg1) + 0xc) != 0) &&
            (*(CONCAT44(in_register_0000000c,arg1) + 0x14) != 0)) &&
           (*(CONCAT44(in_register_0000000c,arg1) + 0x1c) != 0)) {
            auStackX_10[0] = 0xf0;
            fcn.00015bd8(CONCAT44(in_register_0000000c,arg1),0,0,auStackX_10);
            return extraout_RAX;
        }
        uVar1 = 4;
    }
    return uVar1;
}


/* fcn.00015f8c @ 0x15f8c */

void fcn.00015f8c(int64_t arg1)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = 0xf0;
    fcn.00015bd8(arg1,0,0,auStackX_10);
    return;
}


/* fcn.00015fe4 @ 0x15fe4 */

void fcn.00015fe4(int64_t arg1)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = 0xf2;
    fcn.00015bd8(arg1,0,0,auStackX_10);
    return;
}


/* fcn.00015f20 @ 0x15f20 */

ulong fcn.00015f20(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    if (arg1 == 0) {
        uVar1 = 2;
    }
    else {
        uVar1 = fcn.00015d64(arg1,auStackX_10,1,0,0);
    }
    return uVar1;
}


/* fcn.00016010 @ 0x16010 */

void fcn.00016010(int64_t arg1)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = 0xf3;
    fcn.00015bd8(arg1,0,0,auStackX_10);
    return;
}


/* fcn.00015fb8 @ 0x15fb8 */

void fcn.00015fb8(int64_t arg1)

{
    uchar auStackX_10 [24];
    
    auStackX_10[0] = 0xf1;
    fcn.00015bd8(arg1,0,0,auStackX_10);
    return;
}


/* fcn.00016668 @ 0x16668 */

uint64_t fcn.00016668(uint32_t arg1)

{
    uint64_t extraout_RAX;
    uint64_t uVar1;
    uint in_register_0000000c;
    uchar auStackX_10 [24];
    
    if (CONCAT44(in_register_0000000c,arg1) == 0) {
        uVar1 = arg1 + 2;
    }
    else {
        if (((*(CONCAT44(in_register_0000000c,arg1) + 0xc) != 0) &&
            (*(CONCAT44(in_register_0000000c,arg1) + 0x14) != 0)) &&
           (*(CONCAT44(in_register_0000000c,arg1) + 0x1c) != 0)) {
            auStackX_10[0] = 0xf1;
            fcn.00015bd8(CONCAT44(in_register_0000000c,arg1),0,0,auStackX_10);
            return extraout_RAX;
        }
        uVar1 = 4;
    }
    return uVar1;
}


/* fcn.00016690 @ 0x16690 */

uint64_t fcn.00016690(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar auStackX_8 [8];
    uchar auStackX_10 [24];
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (arg1_00 == 0) {
        uVar1 = arg1 + 2;
    }
    else if (((*(arg1_00 + 0xc) == 0) || (*(arg1_00 + 0x14) == 0)) || (*(arg1_00 + 0x1c) == 0)) {
        uVar1 = 4;
    }
    else {
        auStackX_8[0] = 0xf9;
        uVar1 = fcn.00015bd8(arg1_00,0,0,auStackX_8);
        if (uVar1 == 0) {
            uVar1 = fcn.00015f8c(arg1_00);
            if (uVar1 == 0) {
                uVar1 = fcn.00015f20(arg1_00,0);
                if (uVar1 == 0) {
                    uVar1 = fcn.00015f20(arg1_00,0);
                    if (uVar1 == 0) {
                        uVar1 = fcn.00015f20(arg1_00,0);
                        if (uVar1 == 0) {
                            auStackX_10[0] = 0xf1;
                            uVar1 = fcn.00015bd8(arg1_00,0,0,auStackX_10);
                            return uVar1;
                        }
                    }
                }
            }
        }
    }
    return uVar1;
}


/* fcn.000164cc @ 0x164cc */

uint64_t fcn.000164cc(int64_t arg1,uint32_t arg2)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint64_t auStackX_10 [3];
    uint32_t auStack_18 [4];
    
    if (CONCAT44(in_register_00000014,arg2) == NULL) {
        uVar1 = arg2 + 2;
    }
    else {
        uVar1 = fcn.000160d0(arg1,auStack_18);
        if (uVar1 == 0) {
            uVar1 = fcn.000163c0(auStack_18,auStackX_10);
            if (uVar1 == 0) {
                if (auStackX_10[0] < 0x100000000) {
                    *CONCAT44(in_register_00000014,arg2) = auStackX_10[0];
                    uVar1 = 0;
                }
                else {
                    uVar1 = 1;
                }
            }
        }
    }
    return uVar1;
}


/* fcn.000162bc @ 0x162bc */

ulong fcn.000162bc(uint32_t *arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint8_t *puVar4;
    uint32_t uVar5;
    uint8_t *in_stack_00000028;
    
    uVar5 = 0;
    if ((((arg1 == NULL) || (arg2 == 0)) || (arg3 == 0)) || ((arg4 == 0 || (in_stack_00000028 == NULL)))) {
        return 2;
    }
    uVar3 = *arg1;
    if (uVar3 == 1) {
        puVar4 = *(arg1 + 1);
        *arg4 = 0;
        *arg2 = 0;
        *in_stack_00000028 = *puVar4 >> 6 & 1;
code_r0x000163b3:
        *arg3 = uVar5;
    }
    else {
        if (uVar3 == 2) {
            puVar4 = *(arg1 + 1);
            *arg2 = 1;
            uVar1 = *puVar4;
            *arg4 = uVar1 >> 5 & 1;
            uVar5 = uVar1 & 0xf;
            *in_stack_00000028 = uVar1 >> 4 & 1;
        }
        else {
            if (uVar3 == 3) {
                puVar4 = *(arg1 + 1);
                *arg2 = 2;
                uVar1 = *puVar4;
                *arg4 = uVar1 >> 4 & 1;
                *in_stack_00000028 = uVar1 >> 3 & 1;
                uVar5 = (uVar1 & 7) << 8 | puVar4[1];
                goto code_r0x000163b3;
            }
            if (uVar3 != 4) {
                return 7;
            }
            puVar4 = *(arg1 + 1);
            *arg2 = 4;
            uVar1 = *puVar4;
            *in_stack_00000028 = uVar1 & 1;
            uVar2 = puVar4[1];
            *arg4 = uVar1 >> 1 & 1;
            uVar5 = CONCAT21(CONCAT11(uVar2,puVar4[2]),puVar4[3]);
        }
        *arg3 = uVar5;
    }
    return 0;
}


/* fcn.00014918 @ 0x14918 */

ulong fcn.00014918(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    ulong uVar2;
    int64_t arg2_00;
    uint32_t arg4;
    uint32_t auStackX_18 [4];
    uchar auStack_268 [96];
    uchar auStack_208 [512];
    
    arg4 = arg3;
    auStackX_18[0] = CONCAT31(auStackX_18[0]._1_3_,arg2);
    if ((arg1 == 0) || (arg3 == 0)) {
        uVar1 = 2;
    }
    else {
        uVar1 = fcn.00015804(auStack_268,auStack_208);
        if (uVar1 == 0) {
            uVar1 = fcn.00015858(auStack_268,*(arg1 + 10),*(arg1 + 8));
            if (uVar1 == 0) {
                uVar1 = fcn.000158d0(auStack_268,*(arg1 + 4),*arg1);
                if (uVar1 == 0) {
                    uVar1 = fcn.000159cc(auStack_268);
                    if (uVar1 == 0) {
                        uVar2 = 0x100000002080000;
                        uVar1 = fcn.000165b0(auStack_268,0x100000002080000,0x1700000006000000);
                        if (uVar1 == 0) {
                            uVar1 = fcn.00016640(auStack_268);
                            if (uVar1 == 0) {
                                uVar1 = fcn.00015fe4(auStack_268);
                                if (uVar1 == 0) {
                                    arg2_00 = CONCAT71(uVar2 >> 8,1);
                                    uVar1 = fcn.00015f20(auStack_268,arg2_00);
                                    if (uVar1 == 0) {
                                        uVar1 = fcn.00015f8c(auStack_268);
                                        if (uVar1 == 0) {
                                            uVar1 = fcn.00015fe4(auStack_268);
                                            if (uVar1 == 0) {
                                                uVar1 = fcn.00015f20(auStack_268,CONCAT71(arg2_00 >> 8,7));
                                                if (uVar1 == 0) {
                                                    uVar2 = 0;
                                                    uVar1 = fcn.00015f20(auStack_268,0);
                                                    if (uVar1 == 0) {
                                                        uVar1 = fcn.00016010(auStack_268);
                                                        if (uVar1 == 0) {
                                                            uVar1 = fcn.00015fe4(auStack_268);
                                                            if (uVar1 == 0) {
                                                                uVar1 = fcn.00015f20(auStack_268,
                                                                                     CONCAT71(uVar2 >> 8,8));
                                                                if (uVar1 == 0) {
                                                                    uVar1 = fcn.00015f20(auStack_268,0);
                                                                    if (uVar1 == 0) {
                                                                        uVar1 = fcn.00016010(auStack_268);
                                                                        if (uVar1 == 0) {
                                                                            uVar1 = fcn.00015fb8(auStack_268);
                                                                            if (uVar1 == 0) {
                                                                                uVar1 = fcn.00016010(auStack_268);
                                                                                if (uVar1 == 0) {
                                                                                    uVar1 = fcn.00016668(auStack_268);
                                                                                    if (uVar1 == 0) {
                                                                                        uVar1 = fcn.00016690(auStack_268
                                                                                                            );
                                                                                        if (uVar1 == 0) {
                                                                                            uVar1 = fcn.00015a94(
                                                            auStack_268);
                                                            if (uVar1 == 0) {
                                                                uVar1 = fcn.00015b50(auStack_268);
                                                                if (uVar1 == 0) {
                                                                    uVar1 = fcn.00015b78(auStack_268,auStackX_18);
                                                                    if (uVar1 == 0) {
                                                                        uVar1 = fcn.00013eb0(arg1,auStackX_18[0],
                                                                                             auStack_208,arg4);
                                                                    }
                                                                }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar1;
}


/* fcn.00015ed8 @ 0x15ed8 */

ulong fcn.00015ed8(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint32_t arg3_00;
    ulong uVar1;
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar1 = 2;
    }
    else {
        do {
            arg3_00 = arg3;
            if (arg3_00 < 2) break;
            arg3 = arg3_00 - 1;
        } while (*((arg3_00 - 1) + arg2) == '\0');
        uVar1 = fcn.00015d64(arg1,arg2,arg3_00,0,0);
    }
    return uVar1;
}


/* fcn.00016ccc @ 0x16ccc */

void fcn.00016ccc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    uint32_t arg1_00;
    uint64_t arg2_00;
    uint64_t arg3_00;
    uchar uVar2;
    unkbyte6 Var3;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint32_t in_stack_00000040;
    uint32_t in_stack_00000048;
    
    uVar2 = arg4 >> 8;
    Var3 = arg4 >> 0x10;
    arg1_00 = arg1;
    iVar1 = fcn.00015858(arg1_00,arg3 & 0xffff,arg4 & 0xffff);
    if (iVar1 == 0) {
        arg3_00 = in_stack_00000030;
        arg2_00 = in_stack_00000028;
        iVar1 = fcn.000158d0(arg1_00,arg2_00,arg3_00);
        if (iVar1 == 0) {
            iVar1 = fcn.000159cc(arg1_00);
            if (iVar1 == 0) {
                iVar1 = fcn.00016c00(arg1,arg2_00,arg3_00);
                if (iVar1 == 0) {
                    iVar1 = fcn.00015d64(arg1,in_stack_00000040,in_stack_00000048,CONCAT62(Var3,CONCAT11(uVar2,1))
                                         ,0);
                    if (iVar1 == 0) {
                        iVar1 = fcn.00016c88(arg1);
                        if (iVar1 == 0) {
                            iVar1 = fcn.00015a94(arg1_00);
                            if (iVar1 == 0) {
                                iVar1 = fcn.00015b50(arg1_00);
                                if (iVar1 == 0) {
                                    fcn.00015b78(arg1,arg2);
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00016c00 @ 0x16c00 */

void fcn.00016c00(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint auStackX_18 [4];
    
    auStackX_18[0] = arg2;
    uVar2 = 0x10000000b000000;
    iVar1 = fcn.000165b0(arg1,0x10000000b000000,0x1700000006000000);
    if (iVar1 == 0) {
        iVar1 = fcn.00016640(arg1);
        if (iVar1 == 0) {
            iVar1 = fcn.00015fe4(arg1);
            if (iVar1 == 0) {
                iVar1 = fcn.00015f20(arg1,CONCAT71(uVar2 >> 8,1));
                if (iVar1 == 0) {
                    iVar1 = fcn.00015f8c(arg1);
                    if (iVar1 == 0) {
                        iVar1 = fcn.00015fe4(arg1);
                        if (iVar1 == 0) {
                            auStackX_18[0] = 3;
                            fcn.00015ed8(arg1,auStackX_18,4);
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00015d64 @ 0x15d64 */

ulong fcn.00015d64(int64_t arg1,uint32_t arg2,uint32_t arg3,int64_t arg4,int8_t arg_30h)

{
    uint8_t uVar1;
    ulong uVar2;
    uint8_t uVar3;
    uint in_register_00000014;
    uint8_t *arg4_00;
    uint8_t *arg2_00;
    uint in_R8;
    unkbyte7 Var4;
    int64_t arg3_00;
    uint8_t auStackX_8 [8];
    uint8_t var_ch;
    int8_t var_bh;
    int8_t var_8h;
    int8_t var_7h;
    int8_t var_6h;
    int8_t var_bp_10h;
    int8_t var_5h;
    
    arg4_00 = CONCAT44(in_register_00000014,arg2);
    uVar3 = arg4;
    if (arg1 == 0) {
        return 2;
    }
    Var4 = CONCAT44(in_R8,arg3) >> 8;
    if (arg3 == 0) {
        if (uVar3 == 0) {
            return 1;
        }
    }
    else {
        if (arg4_00 == NULL) {
            return 2;
        }
        if (arg3 == 1) {
            if (uVar3 == 0) {
                uVar3 = *arg4_00;
                uVar1 = uVar3;
                if (arg_30h != 0) {
                    uVar1 = uVar3 + 0x20;
                }
                if (uVar1 < 0x40) {
                    arg3_00 = 0;
                    auStackX_8[0] = (arg_30h & 1U) << 6 | uVar3 & 0x3f;
                    arg2_00 = NULL;
                    arg4_00 = auStackX_8;
                    goto code_r0x00015ec2;
                }
            }
        }
        else if (0xf < arg3) {
            uVar1 = arg3 >> 8;
            if (arg3 < 0x800) {
                arg2_00 = &var_ch;
                uVar3 = ((uVar3 & 1 | 0xfc) * '\x02' | arg_30h & 1U) << 3 | var_ch & 7;
                var_ch = uVar3 ^ (uVar1 ^ uVar3) & 7;
                arg3_00 = CONCAT71(Var4,2);
                var_bh = arg3;
            }
            else {
                arg2_00 = &var_8h;
                var_8h = (uVar3 & 1 | 0xf0) * '\x02' | var_8h & 0xcU | arg_30h & 1U;
                var_7h = arg3 >> 0x10;
                arg3_00 = CONCAT71(Var4,4);
                var_6h = uVar1;
            }
            goto code_r0x00015ec2;
        }
    }
    arg3_00 = CONCAT71(Var4,1);
    arg2_00 = &var_bp_10h;
code_r0x00015ec2:
    uVar2 = fcn.00015bd8(arg1,arg2_00,arg3_00,arg4_00);
    return uVar2;
}


/* fcn.00016c88 @ 0x16c88 */

void fcn.00016c88(int64_t arg1)

{
    int iVar1;
    
    iVar1 = fcn.00016010(arg1);
    if (iVar1 == 0) {
        iVar1 = fcn.00015fb8(arg1);
        if (iVar1 == 0) {
            iVar1 = fcn.00016010(arg1);
            if (iVar1 == 0) {
                iVar1 = fcn.00016668(arg1);
                if (iVar1 == 0) {
                    fcn.00016690(arg1);
                }
            }
        }
    }
    return;
}


/* fcn.00016e5c @ 0x16e5c */

uint64_t fcn.00016e5c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint16_t uVar3;
    
    uVar1 = fcn.00017ecc(*(arg1 + 6));
    uVar2 = 0x1f8;
    if (0x1f8 < uVar1) {
        uVar1 = 0x1f8;
    }
    uVar3 = 0;
    while( true ) {
        if (uVar1 <= uVar3) {
            return uVar2 & 0xffffffffffffff00;
        }
        uVar2 = uVar3;
        if (*(uVar2 + 8 + arg1) == arg2) break;
        uVar3 = uVar3 + 1;
    }
    return CONCAT71(uVar3 >> 8,1);
}


/* fcn.00016db8 @ 0x16db8 */

ulong fcn.00016db8(int64_t arg1,int64_t arg2,uint32_t *arg3)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    int64_t arg1_00;
    uint32_t uVar5;
    ulong uVar6;
    ushort auStack_38 [4];
    ulong uStack_30;
    ulong uStack_28;
    
    auStack_38[0] = arg2;
    uStack_30 = 0;
    uStack_28 = 0;
    iVar2 = fcn.00017edc(*arg1);
    uVar4 = 0;
    uVar6 = 0;
    if (iVar2 != 0) {
        uVar3 = iVar2 - 0x2c;
        arg1_00 = arg1 + 0x30;
        if (4 < uVar3) {
            do {
                uVar5 = *(arg1_00 + 3) + 4;
                if (uVar3 < uVar5) break;
                cVar1 = fcn.00016d74(arg1,arg1_00,uVar5,auStack_38);
                if (cVar1 != '\0') break;
                uVar3 = uVar3 - uVar5;
                arg1_00 = arg1_00 + uVar5;
            } while (4 < uVar3);
            uVar4 = uStack_28;
            uVar6 = uStack_30;
        }
    }
    if (arg3 != NULL) {
        *arg3 = uVar4;
    }
    return uVar6;
}


/* fcn.00014680 @ 0x14680 */

ulong fcn.00014680(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint32_t *arg2_00;
    uint32_t arg4;
    int64_t iVar2;
    uint32_t auStackX_10 [2];
    uchar auStack_268 [96];
    uchar auStack_208 [512];
    
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg2);
    if ((arg1 == 0) || (arg3 == 0)) {
        uVar1 = 2;
    }
    else {
        iVar2 = arg3;
        uVar1 = fcn.00014918(arg1,arg2,arg3,arg3);
        arg4 = iVar2;
        if ((uVar1 == 0) && (*arg3 == uVar1)) {
            uVar1 = fcn.00015804(auStack_268,auStack_208);
            if (uVar1 == 0) {
                uVar1 = fcn.00015858(auStack_268,*(arg1 + 10),*(arg1 + 8));
                if (uVar1 == 0) {
                    uVar1 = fcn.000158d0(auStack_268,*(arg1 + 4),*arg1);
                    if (uVar1 == 0) {
                        uVar1 = fcn.000159cc(auStack_268);
                        if (uVar1 == 0) {
                            uVar1 = fcn.000165b0(auStack_268,0x100000000000000,0x1100000006000000);
                            if (uVar1 == 0) {
                                uVar1 = fcn.00016640(auStack_268);
                                if (uVar1 == 0) {
                                    uVar1 = fcn.00015fe4(auStack_268);
                                    if (uVar1 == 0) {
                                        arg2_00 = auStackX_10;
                                        auStackX_10[0] = 0x60000;
                                        uVar1 = fcn.00015ed8(auStack_268,arg2_00,4);
                                        if (uVar1 == 0) {
                                            uVar1 = fcn.00015f20(auStack_268,CONCAT71(arg2_00 >> 8,1));
                                            if (uVar1 == 0) {
                                                uVar1 = fcn.00016010(auStack_268);
                                                if (uVar1 == 0) {
                                                    uVar1 = fcn.00016668(auStack_268);
                                                    if (uVar1 == 0) {
                                                        uVar1 = fcn.00016690(auStack_268);
                                                        if (uVar1 == 0) {
                                                            uVar1 = fcn.00015a94(auStack_268);
                                                            if (uVar1 == 0) {
                                                                uVar1 = fcn.00015b50(auStack_268);
                                                                if (uVar1 == 0) {
                                                                    uVar1 = fcn.00015b78(auStack_268,auStackX_10);
                                                                    if (uVar1 == 0) {
                                                                        uVar1 = fcn.00013eb0(arg1,auStackX_10[0],
                                                                                             auStack_208,arg4);
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return uVar1;
}


/* fcn.00014844 @ 0x14844 */

ulong fcn.00014844(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    uint32_t arg4_00;
    uint64_t uStackX_10;
    int64_t in_stack_00000028;
    uchar auStack_268 [96];
    uchar auStack_208 [512];
    
    if (((arg1 == 0) || (arg3 == 0)) || (in_stack_00000028 == 0)) {
        uVar1 = 2;
    }
    else {
        uStackX_10 = arg2;
        uVar1 = fcn.00015804(auStack_268,auStack_208);
        if (uVar1 == 0) {
            arg4_00 = *(arg1 + 8);
            uVar1 = fcn.00016ccc(auStack_268,&uStackX_10,*(arg1 + 10),*(arg1 + 8));
            if (uVar1 == 0) {
                uVar1 = fcn.00013eb0(arg1,uStackX_10 & 0xffffffff,auStack_208,arg4_00);
            }
        }
    }
    return uVar1;
}


/* fcn.00017fa0 @ 0x17fa0 */

int64_t fcn.00017fa0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.00018158(arg2);
    fcn.00018190(arg1,iVar1);
    iVar1 = fcn.00018158(arg2 + 8);
    fcn.00018190(arg1 + 8,iVar1);
    return arg1;
}


/* fcn.00018158 @ 0x18158 */

ulong fcn.00018158(int64_t arg1)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\Unaligned.c",0xc0,
                     "Buffer != ((void *) 0)");
    }
    return *arg1;
}


/* fcn.00018190 @ 0x18190 */

int64_t fcn.00018190(int64_t arg1,int64_t arg2)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (arg1 == 0)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\Unaligned.c",0xdb,
                     "Buffer != ((void *) 0)");
    }
    *arg1 = arg2;
    return arg2;
}


/* fcn.00015118 @ 0x15118 */

int64_t fcn.00015118(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    ulong uStackX_18;
    
    uStackX_18 = 0;
    arg2_00 = 0;
    iVar1 = (**(*0x1a7c0 + 0x20))(*0x1a7c0,arg1,&uStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        arg2_00 = fcn.00013ae8();
        iVar1 = (**(*0x1a7c0 + 0x20))(*0x1a7c0,arg1,&uStackX_18,arg2_00);
    }
    if (-1 < iVar1) {
        fcn.00017fa0(arg2,arg2_00);
        iVar1 = 0;
    }
    (**(*0x1a798 + 0x48))(arg2_00);
    return iVar1;
}


/* fcn.00017f38 @ 0x17f38 */

ulong fcn.00017f38(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    
    iVar1 = fcn.00018158(arg1);
    iVar2 = fcn.00018158(arg2);
    iVar3 = fcn.00018158(arg1 + 8);
    iVar4 = fcn.00018158(arg2 + 8);
    if ((iVar1 == iVar2) && (iVar3 == iVar4)) {
        uVar5 = 1;
    }
    else {
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.0001553c @ 0x1553c */

int64_t fcn.0001553c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x1a7b8 + 0x18))(*0x1a7b8,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.00013b18(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x1a7b8 + 0x18))(*0x1a7b8,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x1a798 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.00013b40 @ 0x13b40 */

int64_t fcn.00013b40(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    auStackX_18[0] = 0;
    *arg1 = 0;
    iVar1 = (**(*0x1a7a0 + 0x48))(L"PlatformLang",0x18798,0,auStackX_18,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.00013ae8();
        *arg1 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x1a7a0 + 0x48))(L"PlatformLang",0x18798,0,auStackX_18,iVar1);
            if (iVar1 < 0) {
                (**(*0x1a798 + 0x48))(*arg1);
                *arg1 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.00013bfc @ 0x13bfc */

ulong fcn.00013bfc(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    char cVar5;
    uint64_t uVar6;
    char *arg1_00;
    uint in_R9;
    int64_t *piVar7;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    cVar5 = arg2;
    iStackX_20 = CONCAT44(in_R9,arg4);
    if (arg3 != 0) {
        piVar7 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            uVar6 = 3;
            uVar2 = fcn.00017c3c(arg3);
            if (uVar2 < 4) {
                uVar2 = fcn.00017c3c(arg3);
            }
            else {
                uVar2 = 3;
            }
            if (cVar5 == '\0') {
                cVar1 = *arg3;
                uVar2 = 0;
                if (cVar1 != '\0') {
                    do {
                        if (cVar1 == ';') break;
                        uVar2 = uVar2 + 1;
                        cVar1 = *(arg3 + uVar2);
                    } while (cVar1 != '\0');
                    goto code_r0x00013cd4;
                }
            }
            else {
code_r0x00013cd4:
                if (uVar2 != 0) {
                    cVar1 = *arg1;
                    arg1_00 = arg1;
                    while (cVar1 != '\0') {
                        if (cVar5 == '\0') {
                            for (; (*arg1_00 != '\0' && (*arg1_00 == ';')); arg1_00 = arg1_00 + 1) {
                            }
                            uVar6 = 0;
                            cVar1 = *arg1_00;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                uVar6 = uVar6 + 1;
                                cVar1 = arg1_00[uVar6];
                            }
                            if (uVar2 <= uVar6) goto code_r0x00013ca4;
                        }
                        else {
code_r0x00013ca4:
                            iVar3 = fcn.00017cd8(arg1_00,arg3,uVar2);
                            if (iVar3 == 0) {
                                iVar3 = fcn.00013b18(uVar6 + 1);
                                if (iVar3 == 0) {
                                    return 0;
                                }
                                uVar4 = fcn.00017570(iVar3,arg1_00,uVar6);
                                return uVar4;
                            }
                        }
                        arg1_00 = arg1_00 + uVar6;
                        cVar1 = *arg1_00;
                    }
                    if ((cVar5 != '\0') || (uVar2 = uVar2 - 1, uVar2 == 0)) goto code_r0x00013cd9;
                    do {
                        if (*(arg3 + uVar2) == '-') break;
                        uVar2 = uVar2 - 1;
                    } while (uVar2 != 0);
                    goto code_r0x00013cd4;
                }
            }
code_r0x00013cd9:
            piVar7 = piVar7 + 1;
            arg3 = *piVar7;
        } while (arg3 != NULL);
    }
    return 0;
}


/* fcn.00015714 @ 0x15714 */

char * fcn.00015714(int64_t arg1)

{
    char cVar1;
    uint16_t uVar2;
    char *pcVar3;
    char *pcVar4;
    
    pcVar4 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001577c(arg1);
        pcVar3 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar3 != '\x7f' || (pcVar3[1] != -1)); pcVar3 = pcVar3 + uVar2) {
                uVar2 = fcn.000180e8(pcVar3 + 2);
            }
            uVar2 = fcn.000180e8(pcVar3 + 2);
            pcVar4 = pcVar3 + (uVar2 - arg1);
        }
    }
    return pcVar4;
}


/* fcn.00017fe8 @ 0x17fe8 */

ulong fcn.00017fe8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if ((arg3 == 0) || (iVar3 == arg2)) {
        uVar2 = 0;
    }
    else {
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (iVar3 == 0)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\CompareMemWrapper.c"
                         ,arg1 + 0x3c,"DestinationBuffer != ((void *) 0)");
        }
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (arg2 == 0)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\CompareMemWrapper.c"
                         ,0x3d,"SourceBuffer != ((void *) 0)");
        }
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (-iVar3 - 1U < arg3 - 1U)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\CompareMemWrapper.c"
                         ,0x3e,"(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)DestinationBuffer)");
        }
        cVar1 = fcn.00012d54();
        if ((cVar1 != '\0') && (-arg2 - 1U < arg3 - 1U)) {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseMemoryLib\\CompareMemWrapper.c"
                         ,0x3f,"(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)SourceBuffer)");
        }
        uVar2 = fcn.0001785c(arg1,arg2,arg3);
    }
    return uVar2;
}


/* fcn.00018230 @ 0x18230 */

int64_t fcn.00018230(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    char cVar2;
    
    cVar2 = fcn.00012d54();
    if (cVar2 != '\0') {
        cVar2 = fcn.00018294(arg1,arg2,0);
        if (cVar2 == '\0') {
            fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LinkedList.c",0xb1,
                         "InternalBaseLibIsNodeInList (ListHead, Entry, ((BOOLEAN)(0==1)))");
        }
    }
    iVar1 = *arg1;
    *(arg2 + 8) = arg1;
    *arg2 = iVar1;
    *(iVar1 + 8) = arg2;
    *arg1 = arg2;
    return arg1;
}


/* fcn.000155c8 @ 0x155c8 */

ulong fcn.000155c8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg3_00;
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    
    arg3_00 = fcn.00015714(arg1);
    puVar3 = *0x18740;
    do {
        if (puVar3 == 0x18740) {
            iVar1 = fcn.00013b18(arg3_00 + 0x31);
            if (iVar1 == 0) {
                uVar2 = 0x8000000000000009;
            }
            else {
                *(iVar1 + 0x30) = arg3;
                fcn.00017570(iVar1 + 0x10,arg2,0x20);
                fcn.00017570(iVar1 + 0x31,arg1,arg3_00);
                fcn.00018230(0x18740,iVar1);
code_r0x0001567e:
                uVar2 = 0;
            }
            return uVar2;
        }
        iVar1 = fcn.00017fe8(puVar3 + 0x31,arg1,arg3_00);
        if (iVar1 == 0) {
            fcn.00017570(puVar3 + 2,arg2,0x20);
            goto code_r0x0001567e;
        }
        puVar3 = *puVar3;
    } while( true );
}


/* fcn.0001577c @ 0x1577c */

bool fcn.0001577c(int64_t arg1)

{
    uint16_t uVar1;
    int16_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    
    uVar4 = 0;
    while( true ) {
        if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
            iVar2 = fcn.000180e8(arg1 + 2);
            return iVar2 == 4;
        }
        uVar3 = fcn.000180e8(arg1 + 2);
        uVar3 = uVar3 & 0xffff;
        if (((uVar3 < 4) || (-uVar4 - 1 < uVar3)) || (uVar4 = uVar4 + uVar3, 0xfffffffffffffffb < uVar4)) break;
        uVar1 = fcn.000180e8(arg1 + 2);
        arg1 = arg1 + uVar1;
    }
    return false;
}


/* fcn.00017e80 @ 0x17e80 */

int64_t fcn.00017e80(int64_t arg1,int64_t arg2)

{
    char cVar1;
    
    cVar1 = fcn.00012d54();
    if ((cVar1 != '\0') && (0x3f < arg2)) {
        fcn.00012d50("c:\\tcwork\\a62c38facd75f450\\edk2_2017\\MdePkg\\Library\\BaseLib\\LShiftU64.c",0x27,
                     "Count < 64");
    }
    return arg1 << (arg2 & 0x3f);
}


/* fcn.000163c0 @ 0x163c0 */

ulong fcn.000163c0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint8_t *puVar5;
    char acStackX_8 [16];
    char cStackX_18;
    uint32_t auStackX_20 [2];
    uint32_t auStack_28 [4];
    
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar2 = 2;
    }
    else {
        *arg2 = 0;
        uVar2 = fcn.000162bc(arg1,auStack_28,auStackX_20,acStackX_8);
        if (uVar2 == 0) {
            if ((acStackX_8[0] == uVar2) && (cStackX_18 == '\0')) {
                if (*arg1 == 1) {
                    *arg2 = **(arg1 + 4) & 0x3f;
                }
                else {
                    uVar4 = auStackX_20[0];
                    if (8 < auStackX_20[0]) {
                        return 5;
                    }
                    puVar5 = auStack_28[0] + *(arg1 + 4);
                    if (auStackX_20[0] != 0) {
                        do {
                            uVar3 = fcn.00017e80(*arg2,8);
                            uVar1 = *puVar5;
                            puVar5 = puVar5 + 1;
                            *arg2 = uVar3 | uVar1;
                            uVar4 = uVar4 - 1;
                        } while (uVar4 != 0);
                    }
                }
                uVar2 = 0;
            }
            else {
                uVar2 = 7;
            }
        }
    }
    return uVar2;
}


/* fcn.00015f50 @ 0x15f50 */

ulong fcn.00015f50(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    ulong extraout_RAX;
    uint in_register_00000014;
    unkbyte7 in_R8;
    uchar auStackX_8 [8];
    ulong auStackX_10 [3];
    
    auStackX_10[0] = CONCAT44(in_register_00000014,arg2);
    if (arg1 == 0) {
        uVar1 = 2;
    }
    else {
        auStackX_8[0] = 0xa8;
        fcn.00015bd8(arg1,auStackX_8,CONCAT71(in_R8,1),auStackX_10);
        uVar1 = extraout_RAX;
    }
    return uVar1;
}


/* fcn.00016478 @ 0x16478 */

ulong fcn.00016478(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    uint64_t auStackX_10 [3];
    uint32_t auStack_18 [4];
    
    if (arg2 == 0) {
        uVar1 = 2;
    }
    else {
        uVar1 = fcn.000160d0(arg1,auStack_18);
        if (uVar1 == 0) {
            uVar1 = fcn.000163c0(auStack_18,auStackX_10);
            if (uVar1 == 0) {
                if (auStackX_10[0] < 0x100) {
                    *arg2 = auStackX_10[0];
                    uVar1 = 0;
                }
                else {
                    uVar1 = 1;
                }
            }
        }
    }
    return uVar1;
}


/* fcn.00016520 @ 0x16520 */

ulong fcn.00016520(int64_t arg1,int64_t arg2)

{
    int iVar1;
    ulong uVar2;
    uint32_t arg2_00;
    char acStackX_10 [16];
    int aiStackX_20 [2];
    int aiStack_28 [2];
    uint32_t uStack_20;
    int iStack_1c;
    
    arg2_00 = 0;
    if (arg2 == 0) {
        uVar2 = 2;
    }
    else {
        uVar2 = fcn.000160d0(arg1,&uStack_20);
        if (uVar2 == 0) {
            aiStackX_20[0] = 0;
            iVar1 = fcn.000162bc(&uStack_20,aiStack_28,aiStackX_20,acStackX_10);
            if ((iVar1 == 0) && (acStackX_10[0] == '\x01')) {
                arg2_00 = aiStack_28[0] + iStack_1c;
            }
            if (aiStackX_20[0] == 8) {
                fcn.00017570(arg2,arg2_00,8);
                uVar2 = 0;
            }
            else {
                uVar2 = 1;
            }
        }
    }
    return uVar2;
}


/* fcn.00016d74 @ 0x16d74 */

bool fcn.00016d74(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    
    iVar1 = fcn.00017ecc(*arg1);
    if (iVar1 == *arg3) {
        *(arg3 + 8) = arg1;
        *(arg3 + 0x10) = arg2;
    }
    return iVar1 == *arg3;
}


/* fcn.000171dc @ 0x171dc */

void fcn.000171dc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint8_t *puVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint32_t uVar15;
    uint32_t uVar16;
    int64_t iVar17;
    uint32_t uVar18;
    uint32_t uVar19;
    uint32_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint32_t uStackX_10;
    uint32_t uStackX_20;
    uint32_t uStack_e8;
    uint32_t uStack_e4;
    int *piStack_a8;
    int64_t iStack_a0;
    uint32_t auStack_88 [18];
    
    if (arg3 != 0) {
        uVar11 = *arg1;
        uVar10 = *(arg1 + 4);
        uVar9 = *(arg1 + 8);
        uVar20 = *(arg1 + 0xc);
        uVar22 = *(arg1 + 0x10);
        uVar16 = *(arg1 + 0x14);
        uVar19 = *(arg1 + 0x18);
        uVar4 = *(arg1 + 0x1c);
        do {
            arg3 = arg3 + -1;
            iVar17 = 0;
            puVar7 = arg2;
            uVar13 = uVar10;
            uVar14 = uVar9;
            uVar5 = uVar11;
            uVar15 = uVar22;
            uVar1 = uVar16;
            uStackX_20 = uVar19;
            uStack_e8 = uVar20;
            uStack_e4 = uVar4;
            do {
                uStackX_10 = uVar1;
                uVar1 = uVar15;
                uVar3 = uVar5;
                uVar2 = uVar14;
                uVar14 = uVar13;
                arg2 = puVar7 + 4;
                uVar5 = *puVar7 << 0x18 | puVar7[1] << 0x10 | puVar7[2] << 8 | puVar7[3];
                auStack_88[iVar17] = uVar5;
                iVar12 = ((uVar1 >> 0xb | uVar1 << 0x15) ^ (uVar1 << 7 | uVar1 >> 0x19) ^ (uVar1 >> 6 | uVar1 << 0x1a))
                         + (~uVar1 & uStackX_20 ^ uStackX_10 & uVar1) + *(iVar17 * 4 + 0x190e0) + uVar5 + uStack_e4;
                iVar17 = iVar17 + 1;
                uStack_e4 = uStackX_20;
                uVar15 = uStack_e8 + iVar12;
                uStackX_20 = uStackX_10;
                uVar5 = ((uVar3 >> 0xd | uVar3 << 0x13) ^ (uVar3 << 10 | uVar3 >> 0x16) ^ (uVar3 >> 2 | uVar3 << 0x1e))
                        + ((uVar14 ^ uVar3) & uVar2 ^ uVar14 & uVar3) + iVar12;
                puVar7 = arg2;
                uVar13 = uVar3;
                uStack_e8 = uVar2;
            } while (iVar17 < 0x10);
            uVar13 = 0xe;
            piStack_a8 = iVar17 * 4 + 0x190e0;
            iStack_a0 = 0x30;
            do {
                uVar2 = uVar5;
                uVar6 = uStackX_10;
                uVar18 = uVar15;
                uVar21 = uVar3;
                uVar8 = uVar14;
                uStackX_10 = uVar1;
                uVar14 = uVar13 + 2 & 0xf;
                uVar5 = auStack_88[uVar13 + 3 & 0xf];
                uVar1 = auStack_88[uVar13 & 0xf];
                auStack_88[uVar14] =
                     auStack_88[uVar14] +
                     ((uVar1 << 0xf | uVar1 >> 0x11) ^ (uVar1 << 0xd | uVar1 >> 0x13) ^ uVar1 >> 10) +
                     ((uVar5 << 0xe | uVar5 >> 0x12) ^ (uVar5 >> 7 | uVar5 << 0x19) ^ uVar5 >> 3) +
                     auStack_88[uVar13 - 5 & 0xf];
                iVar12 = (~uVar18 & uVar6 ^ uStackX_10 & uVar18) +
                         auStack_88[uVar14] +
                         ((uVar18 >> 0xb | uVar18 << 0x15) ^ (uVar18 << 7 | uVar18 >> 0x19) ^
                         (uVar18 >> 6 | uVar18 << 0x1a)) + *piStack_a8 + uStack_e4;
                piStack_a8 = piStack_a8 + 1;
                uVar15 = uStack_e8 + iVar12;
                uVar5 = ((uVar2 >> 0xd | uVar2 << 0x13) ^ (uVar2 << 10 | uVar2 >> 0x16) ^ (uVar2 >> 2 | uVar2 << 0x1e))
                        + ((uVar21 ^ uVar2) & uVar8 ^ uVar21 & uVar2) + iVar12;
                uVar13 = uVar13 + 1;
                iStack_a0 = iStack_a0 + -1;
                uVar1 = uVar18;
                uVar14 = uVar21;
                uVar3 = uVar2;
                uStack_e8 = uVar8;
                uStack_e4 = uVar6;
            } while (iStack_a0 != 0);
            uVar10 = uVar10 + uVar2;
            uVar20 = uVar20 + uVar8;
            uVar22 = uVar22 + uVar15;
            uVar19 = uVar19 + uStackX_10;
            uVar16 = uVar16 + uVar18;
            uVar4 = uVar4 + uVar6;
            uVar11 = uVar11 + uVar5;
            uVar9 = uVar9 + uVar21;
            *(arg1 + 0x18) = uVar19;
            *arg1 = uVar11;
            *(arg1 + 4) = uVar10;
            *(arg1 + 8) = uVar9;
            *(arg1 + 0xc) = uVar20;
            *(arg1 + 0x10) = uVar22;
            *(arg1 + 0x14) = uVar16;
            *(arg1 + 0x1c) = uVar4;
        } while (arg3 != 0);
    }
    return;
}


/* fcn.000176a4 @ 0x176a4 */

ulong fcn.000176a4(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar uVar1;
    uint uVar2;
    ulong uVar3;
    uint in_register_0000000c;
    uint in_R8;
    int64_t iVar4;
    uint64_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint *puVar8;
    uint *puVar9;
    uchar *puVar10;
    uint64_t uVar11;
    uchar *puVar12;
    
    uVar5 = CONCAT44(in_R8,arg3);
    if ((((arg1 & 7) == 0) && ((arg2 & 7U) == 0)) && (7 < uVar5)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar6 = CONCAT44(in_register_0000000c,arg1);
            uVar11 = uVar5 >> 3;
            iVar4 = uVar5 + uVar11 * -8;
            do {
                uVar3 = *arg2;
                arg2 = arg2 + 8;
                *puVar6 = uVar3;
                puVar6 = puVar6 + 1;
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            if (iVar4 != 0) {
                arg2 = arg2 - puVar6;
                do {
                    *puVar6 = *(arg2 + puVar6);
                    puVar6 = puVar6 + 1;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar6 = arg2 + uVar5;
            puVar7 = CONCAT44(in_register_0000000c,arg1) + uVar5;
            uVar11 = arg3 & 7;
            if ((arg3 & 7) != 0) {
                uVar5 = uVar5 - uVar11;
                do {
                    puVar6 = puVar6 + -1;
                    puVar7 = puVar7 + -1;
                    *puVar7 = *puVar6;
                    uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
            }
            if (uVar5 != 0) {
                iVar4 = (uVar5 - 1 >> 3) + 1;
                do {
                    puVar6 = puVar6 + -1;
                    puVar7 = puVar7 + -1;
                    *puVar7 = *puVar6;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
        }
    }
    else if ((((arg1 & 3) == 0) && ((arg2 & 3U) == 0)) && (3 < uVar5)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar8 = CONCAT44(in_register_0000000c,arg1);
            uVar11 = uVar5 >> 2;
            iVar4 = uVar5 + uVar11 * -4;
            do {
                uVar2 = *arg2;
                arg2 = arg2 + 4;
                *puVar8 = uVar2;
                puVar8 = puVar8 + 1;
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            if (iVar4 != 0) {
                arg2 = arg2 - puVar8;
                do {
                    *puVar8 = *(arg2 + puVar8);
                    puVar8 = puVar8 + 1;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar8 = arg2 + uVar5;
            puVar9 = CONCAT44(in_register_0000000c,arg1) + uVar5;
            uVar11 = arg3 & 3;
            if ((arg3 & 3) != 0) {
                uVar5 = uVar5 - uVar11;
                do {
                    puVar8 = puVar8 + -1;
                    puVar9 = puVar9 + -1;
                    *puVar9 = *puVar8;
                    uVar11 = uVar11 - 1;
                } while (uVar11 != 0);
            }
            if (uVar5 != 0) {
                iVar4 = (uVar5 - 1 >> 2) + 1;
                do {
                    puVar8 = puVar8 + -1;
                    puVar9 = puVar9 + -1;
                    *puVar9 = *puVar8;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
            }
        }
    }
    else if (CONCAT44(in_register_0000000c,arg1) < arg2) {
        puVar10 = CONCAT44(in_register_0000000c,arg1);
        if (uVar5 != 0) {
            do {
                *puVar10 = puVar10[arg2 - CONCAT44(in_register_0000000c,arg1)];
                puVar10 = puVar10 + 1;
                uVar5 = uVar5 - 1;
            } while (uVar5 != 0);
        }
    }
    else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
        puVar10 = (uVar5 - 1) + CONCAT44(in_register_0000000c,arg1);
        puVar12 = (uVar5 - 1) + arg2;
        for (; uVar5 != 0; uVar5 = uVar5 - 1) {
            uVar1 = *puVar12;
            puVar12 = puVar12 + -1;
            *puVar10 = uVar1;
            puVar10 = puVar10 + -1;
        }
    }
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.0001787c @ 0x1787c */

int64_t fcn.0001787c(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    ulong *puVar2;
    uint64_t uVar3;
    
    puVar2 = arg1;
    if (((arg1 & 7U) == 0) && (7 < arg2)) {
        uVar1 = fcn.00017e80(0,0x20);
        uVar3 = arg2 >> 3;
        arg2 = arg2 + uVar3 * -8;
        do {
            *puVar2 = uVar1;
            puVar2 = puVar2 + 1;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    else if (((arg1 & 3U) == 0) && (3 < arg2)) {
        uVar3 = arg2 >> 2;
        arg2 = arg2 + uVar3 * -4;
        do {
            *puVar2 = 0;
            puVar2 = puVar2 + 4;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    for (; arg2 != 0; arg2 = arg2 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return arg1;
}


/* fcn.0001785c @ 0x1785c */

int64_t fcn.0001785c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    uint in_register_0000000c;
    uint8_t *puVar1;
    
    for (puVar1 = CONCAT44(in_register_0000000c,arg1); (arg3 = arg3 + -1, arg3 != 0 && (*puVar1 == *arg2));
        puVar1 = puVar1 + 1) {
        arg2 = arg2 + 1;
    }
    return *puVar1 - *arg2;
}


/* fcn.00017884 @ 0x17884 */

int64_t fcn.00017884(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    uint64_t *puVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    uVar3 = CONCAT44(in_register_00000014,arg2);
    uVar5 = arg3 & 0xff;
    puVar2 = arg1;
    if (((arg1 & 7U) == 0) && (7 < uVar3)) {
        uVar5 = arg3 & 0xff;
        uVar5 = ((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5;
        uVar1 = fcn.00017e80(uVar5,0x20);
        uVar4 = uVar3 >> 3;
        uVar3 = uVar3 + uVar4 * -8;
        do {
            *puVar2 = uVar1 | uVar5;
            puVar2 = puVar2 + 1;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    else if (((arg1 & 3U) == 0) && (3 < uVar3)) {
        uVar1 = uVar3 >> 2;
        uVar3 = uVar3 + uVar1 * -4;
        do {
            *puVar2 = ((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5;
            puVar2 = puVar2 + 4;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = arg3;
        puVar2 = puVar2 + 1;
    }
    return arg1;
}


