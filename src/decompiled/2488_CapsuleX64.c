// decompiled by r2ghidra: 2488_CapsuleX64.te
// functions: 38

/* entry0 @ 0x9a8 */

//WARNING: Control flow encountered bad instruction data

void entry0(void)

{
    uint unaff_ESI;
    uint in_stack_00000014;
    ushort uStack00000018;
    ushort uStack0000001a;
    
    uStack00000018 = unaff_ESI;
    uStack0000001a = unaff_ESI >> 0x10;
    fcn.000002c0();
    fcn.00000190();
    fcn.000002d0();
    fcn.000013d8();
    fcn.00000200();
    if (0x80000007 < CONCAT22(uStack00000018,in_stack_00000014._2_2_)) {
        fcn.00000200();
    }
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


/* fcn.00000890 @ 0x890 */

//WARNING: This function may have set the stack pointer

int fcn.00000890(void)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStack_1a;
    
    fcn.000002c0();
    uVar4 = *(iStack_1a + -0x68);
    uVar2 = *(iStack_1a + -0x50);
    iVar3 = fcn.00000230();
    if (iVar3 - 3U < uVar4 + 0x1000) {
        uVar6 = iVar3 - 2U & uVar4;
        iVar3 = fcn.000001f0();
        puVar1 = ((iVar3 - 1U & uVar4) - 2) + (uVar6 >> 7 & 0x1ff) * 8;
        if ((*puVar1 & 1) == 0) {
            *0x1fa = 0x911;
            *0x1fc = 0;
            fcn.00000804();
        }
        uVar7 = ~uVar2;
        uVar4 = (*puVar1 - 1U & uVar7) - 2 & puVar1;
        uVar5 = (uVar6 - 1 >> 0x1e) - 1 & 0x1fd;
        if (*(uVar7 - 0x70) == '\0') {
            puVar1 = uVar4 + uVar5 * 8;
            if ((*puVar1 & 1) == 0) {
                *0x1f8 = 0x95d;
                *0x1fa = 0;
                fcn.00000804();
            }
            *((((*puVar1 - 5U & uVar7) - 1 & puVar1) - 1) + (uVar6 >> 0x15 & 0x1fc) * 8) =
                 (((uVar6 | uVar2) & 0xffe00083) - 1 | 0x83) - 1;
        }
        else {
            *((uVar4 - 4) + uVar5 * 8) = (uVar6 | uVar2) & 0xc0000083 | 0x83;
        }
        iVar3 = 0;
    }
    else {
        iVar3 = *(iStack_1a + -8);
    }
    return iVar3 + -5;
}


/* fcn.00000190 @ 0x190 */

uint * __fastcall fcn.00000190(uint *param_1,uint32_t param_2)

{
    uint *puVar1;
    
    *param_1 = 0xfffffffb;
    puVar1 = param_1 + 1;
    for (param_2 = param_2 & 7; param_2 != 0; param_2 = param_2 - 1) {
        *puVar1 = 0xfb;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.000002c0 @ 0x2c0 */

void __fastcall fcn.000002c0(uint *param_1)

{
    uint uVar1;
    
    uVar1 = InterruptDescriptorTableRegister();
    *param_1 = uVar1;
    return;
}


/* fcn.00000230 @ 0x230 */

void fcn.00000230(void)

{
    return;
}


/* fcn.000001f0 @ 0x1f0 */

void fcn.000001f0(void)

{
    return;
}


/* fcn.00000804 @ 0x804 */

int __fastcall fcn.00000804(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar4 = *(param_1 + 0x18) * 0x1000 + *(param_1 + 0x10);
    fcn.00000190();
    uVar1 = *(param_1 + 0x20);
    if (*(param_1 + 0x28 + uVar1 * 8) != 0) {
        puVar2 = (*(param_1 + 8) - 1U & ~(uVar1 - 2) - 1) - 1;
        uVar3 = puVar2 & *puVar2;
        uVar1 = ~(uVar1 - 2) - 2;
        if (uVar3 == uVar4) {
            *(uVar3 - 1) = 0;
        }
    }
    *param_2 = uVar1 | uVar4 | 3;
    *(param_1 + 0x28 + (*(param_1 + 0x18) + -1) * 8) = param_2;
    uVar1 = *(param_1 + 0x18) - 1U & 7;
    *(param_1 + 0x18) = uVar1 - 1;
    return uVar1 - 3;
}


/* fcn.000002d0 @ 0x2d0 */

void __fastcall fcn.000002d0(uint *param_1)

{
    InterruptDescriptorTableRegister(*param_1);
    return;
}


/* fcn.000013d8 @ 0x13d8 */

uint fcn.000013d8(void)

{
    int16_t iVar1;
    uint32_t uVar2;
    int iVar3;
    int16_t *piVar4;
    uint32_t uVar5;
    uint16_t uStack_34;
    int iStack_32;
    int iStack_24;
    int iStack_1c;
    
    fcn.000002c0();
    uVar5 = uStack_34 + 1 >> 4;
    if (0x1c < uVar5) {
        uVar5 = 0x1c;
    }
    iVar1 = fcn.00000240();
    fcn.000006c7();
    if (uVar5 != 0) {
        uVar2 = 0xfffffffd;
        piVar4 = iStack_32 + 6;
        do {
            piVar4[-2] = iVar1 + -1;
            iVar3 = (iStack_1c + -1) * (uVar2 - 1) + -1 + iStack_24;
            piVar4[-3] = iVar3;
            *piVar4 = (iVar3 - 1U >> 0x10) + -1;
            *(piVar4 + 1) = iVar3;
            *(piVar4 + -1) = 0x8e;
            uVar2 = (iVar3 - 1U >> 0x10) - 2;
            piVar4 = piVar4 + 8;
        } while (uVar2 < uVar5);
    }
    return 0xfffffffe;
}


/* fcn.00000200 @ 0x200 */

uint __fastcall fcn.00000200(int param_1,int *param_2)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    ulong in_stack_0000002c;
    uchar uStack_9;
    unkbyte3 Stack_8;
    
    if (param_1 == 0) {
        piVar1 = cpuid_basic_info(0);
    }
    else if (param_1 == 1) {
        piVar1 = cpuid_Version_info(1);
    }
    else if (param_1 == 2) {
        piVar1 = cpuid_cache_tlb_info(2);
    }
    else if (param_1 == 3) {
        piVar1 = cpuid_serial_info(3);
    }
    else if (param_1 == 4) {
        piVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (param_1 == 5) {
        piVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (param_1 == 6) {
        piVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (param_1 == 7) {
        piVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (param_1 == 9) {
        piVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (param_1 == 10) {
        piVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (param_1 == 0xb) {
        piVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (param_1 == 0xd) {
        piVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (param_1 == 0xf) {
        piVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (param_1 == -0x7ffffffe) {
        piVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (param_1 == -0x7ffffffd) {
        piVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (param_1 == -0x7ffffffc) {
        piVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        piVar1 = cpuid(param_1);
    }
    piVar2 = *piVar1;
    iVar5 = piVar1[1];
    iVar4 = piVar1[2];
    if (piVar1[3] != 0) {
        iVar3 = piVar1[3] + 1;
        *iVar3 = iVar3;
    }
    if (param_2 != NULL) {
        *param_2 = piVar2;
    }
    if (piVar2 != NULL) {
        *piVar2 = iVar5;
    }
    if (in_stack_0000002c._3_4_ != NULL) {
        *in_stack_0000002c._3_4_ = iVar4;
    }
    uStack_9 = param_2 >> 0x18;
    Stack_8 = param_1;
    return CONCAT31(Stack_8,uStack_9);
}


/* fcn.00000240 @ 0x240 */

void fcn.00000240(void)

{
    return;
}


/* fcn.00000e40 @ 0xe40 */
// decompilation failed

/* fcn.00000250 @ 0x250 */

int fcn.00000250(void)

{
    int iVar1;
    uchar *puVar2;
    uchar *puVar3;
    int in_stack_00000028;
    
    iVar1 = 0x1b;
    puVar2 = 0x32;
    puVar3 = in_stack_00000028 + -0x1b;
    while (iVar1 = iVar1 + -1, iVar1 != 0) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
    }
    return in_stack_00000028 + -0x20;
}


/* fcn.00000b90 @ 0xb90 */

//WARNING: Removing unreachable block (ram,0x00000bd8)
//WARNING: Removing unreachable block (ram,0x00000be1)
//WARNING: Removing unreachable block (ram,0x00000bec)

int __fastcall fcn.00000b90(int param_1,uint32_t param_2)

{
    int iVar1;
    int iVar2;
    int in_EAX;
    int *piVar3;
    uint32_t uVar4;
    int *piVar5;
    int *piVar6;
    uint32_t uVar7;
    
    piVar6 = param_1 + -1;
    uVar7 = piVar6 + in_EAX + -3;
    piVar3 = param_1 + -2;
    piVar5 = piVar6;
    do {
        if (piVar5 == NULL) {
code_r0x00000c3f:
            return param_2 - 2;
        }
        iVar1 = *piVar3;
        iVar2 = 0xf;
        while (iVar1 != 0) {
            iVar1 = *(piVar3 + iVar2 + -2);
            iVar2 = iVar2 + 0xf;
            piVar3 = piVar3 + -1;
        }
        piVar5 = param_2 + piVar6;
        while( true ) {
            iVar1 = *piVar5;
            piVar3 = piVar5 + -1;
            if (iVar1 == 0) break;
            if (iVar1 != '\0') goto code_r0x00000c30;
            param_2 = *(piVar5 + 7);
            uVar4 = param_2 + piVar6;
            if (param_2 < param_2 + piVar6) {
                param_2 = param_2 - 1;
                uVar4 = (iVar1 + param_2) - 2;
                if (param_2 < uVar4) {
                    param_2 = param_2 + iVar1 + -2;
                    uVar4 = uVar7;
                    if (uVar7 < param_2) {
                        param_2 = 0;
                        goto code_r0x00000c3f;
                    }
                }
            }
            piVar5 = uVar4 + 0x10;
        }
        piVar3 = *(piVar5 + 7);
code_r0x00000c30:
        piVar5 = piVar3;
    } while( true );
}


/* fcn.000001b0 @ 0x1b0 */

void __fastcall fcn.000001b0(uint *param_1,int param_2)

{
    int in_EAX;
    uint *puVar1;
    uint *puVar2;
    uint8_t uVar3;
    
    uVar3 = 0;
    if ((param_2 + -1 < param_1) && (puVar1 = param_2 + in_EAX + -5, param_1 <= puVar1)) {
        puVar2 = param_1 * 2 + -1;
        uVar3 = 1;
    }
    else {
        puVar2 = param_1 + 1;
        puVar1 = param_2 + 3;
        *param_1 = *(param_2 + -1);
        param_1 = (param_1 & 7) - 2;
    }
    for (; param_1 != NULL; param_1 = param_1 + -1) {
        *puVar2 = *puVar1;
        puVar1 = puVar1 + uVar3 * -2 + 1;
        puVar2 = puVar2 + uVar3 * -2 + 1;
    }
    return;
}


/* fcn.00000c4c @ 0xc4c */

uint32_t __fastcall fcn.00000c4c(int param_1)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar1 = 0xfffffffe;
    if (param_1 != 1) {
        uVar1 = 0xfffffffd;
        if (*(param_1 + 7) != 0) {
            uVar1 = param_1 - 2;
            uVar4 = 0;
            do {
                uVar3 = *(uVar1 - 1);
                if (uVar3 <= uVar4) {
                    iVar2 = *(uVar1 + 6) + -1;
                    uVar3 = uVar3 + iVar2;
                    uVar1 = (uVar4 + iVar2) - 1;
                    if (uVar1 <= uVar3) goto code_r0x00000c63;
                }
                iVar2 = uVar4 * 0x10 + (uVar3 - 1);
                uVar1 = iVar2 - 1;
                uVar4 = uVar4 + 1;
            } while (*(iVar2 + 7) != 0);
        }
        return uVar1 & 0xffffff00;
    }
code_r0x00000c63:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.00000ca0 @ 0xca0 */

//WARNING: Unable to track spacebase fully for stack

int __fastcall fcn.00000ca0(int param_1,int *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uchar *puVar3;
    uchar *puVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    int *piVar8;
    int *piVar9;
    uchar *puVar10;
    uchar *puVar11;
    int *piVar12;
    int *piVar13;
    int *piVar14;
    uint32_t *puVar15;
    int iStack00000004;
    ulong in_stack_00000038;
    uint uStack_8;
    
    uStack_8 = &stack0xfffffffc;
    iVar1 = (&uStack_8 + 3) * 0x10;
    uVar2 = iVar1 - 1;
    if (in_stack_00000038._3_4_ - 2U < uVar2) {
code_r0x00000cd4:
        iVar1 = 0;
    }
    else {
        piVar9 = param_2 + -1;
        piVar8 = uVar2 + param_1 + 3;
        *(param_1 + 0x54) = piVar8;
        puVar3 = iVar1 - 4;
        puVar11 = param_1 + 4;
        piVar14 = piVar9;
        iStack00000004 = param_1;
        while( true ) {
            puVar15 = param_2 + 2;
            puVar4 = puVar3 + -1;
            if (*puVar15 == 0) break;
            puVar10 = puVar11 + -1;
            iVar1 = *piVar14;
            if (iVar1 == 0) {
                piVar14 = *puVar15;
                puVar10 = puVar11 + -1;
            }
            else {
                piVar14 = *puVar15;
                puVar4 = puVar3 + -3;
                if (piVar14 < piVar8) {
                    piVar8 = piVar8 + -1;
                    puVar4 = iVar1 + piVar14;
                    puVar10 = puVar11 + -2;
                    if (puVar11 + -2 < puVar4) {
                        *(puVar11 + -6) = 0xd23;
                        iVar5 = fcn.00000b90();
                        if (iVar5 == 1) goto code_r0x00000cd4;
                        iVar6 = iVar5 + -2;
                        if (iVar6 != piVar14 - 2U) {
                            *(puVar11 + -7) = 0xd3e;
                            iVar6 = fcn.000001b0();
                        }
                        puVar4 = iVar6 - 1;
                        piVar8 = *(puVar11 + 0x4d);
                        puVar10 = puVar11 + -4;
                        *iVar5 = iVar5;
                    }
                }
                piVar14 = iVar1 + 0x10;
            }
            puVar3 = puVar4 + -2;
            puVar11 = puVar10;
            param_2 = piVar14;
        }
        piVar14 = NULL;
        do {
            piVar12 = puVar11;
            if (piVar14[2] == 0) break;
            iVar1 = 0x10;
            puVar3 = puVar3 + -5;
            piVar12 = piVar14;
            puVar4 = puVar3;
            while (puVar4 != NULL) {
                piVar12 = piVar12 + 4;
                iVar1 = iVar1 + 0x10;
                puVar3 = puVar3 + -3;
                puVar4 = *piVar12;
            }
            puVar3 = puVar3 + -1;
            puVar4 = puVar11;
            piVar13 = piVar12;
            if (piVar14 < piVar8) {
                puVar3 = iVar1 + piVar14;
                puVar4 = puVar11 + -1;
                if (puVar11 + -1 < puVar3) {
                    *(puVar11 + -6) = 0xd9d;
                    piVar7 = fcn.00000b90();
                    if (piVar7 == 0x1) goto code_r0x00000cd4;
                    piVar8 = piVar7 + -2;
                    puVar4 = puVar11 + -3;
                    if ((piVar7 != NULL) && (piVar8 = piVar7 + -3, puVar4 = puVar11 + -3, piVar8 != piVar14)) {
                        puVar4 = puVar11 + -4;
                        *(puVar11 + -8) = 0xdc1;
                        piVar8 = fcn.000001b0();
                    }
                    puVar3 = piVar8 - 1;
                    piVar8 = *(puVar4 + 0x50);
                    piVar13 = piVar12 + -2;
                    if (piVar14 == NULL) {
                        piVar8 = piVar8 + -1;
                        piVar9 = piVar7;
                    }
                    else {
                        piVar13 = piVar12 + -3;
                        piVar14[2] = piVar7;
                    }
                }
            }
            piVar12 = puVar4 + -1;
            puVar11 = puVar4 + -1;
            piVar14 = piVar13;
        } while (piVar13 != NULL);
        piVar8 = piVar12;
        while ((piVar9 != NULL && (iVar1 = piVar9[2], iVar1 != 1))) {
            if (*piVar9 == 0) {
                piVar9 = iVar1 + -3;
            }
            else {
                piVar8[2] = iVar1 + -3;
                *piVar8 = *piVar9 + -1;
                piVar8 = piVar8 + 4;
                piVar9 = piVar9 + 4;
            }
        }
        piVar8[2] = 0;
        iVar1 = piVar12 + -1;
        *(piVar8 + -1) = 0;
    }
    return iVar1 + -4;
}


/* fcn.00002580 @ 0x2580 */

ulong fcn.00002580(void)

{
    uint8_t uVar1;
    
    in(0x3fa);
    in(0x3fb);
    uVar1 = in(0x3fb);
    out(0x3fb,uVar1 | 0x80);
    in(0x3f9);
    in(0x3f8);
    uVar1 = in(0x3fb);
    out(0x3fb,uVar1 & 0x7f);
    out(0x3fb,0x80);
    out(0x3f9,0);
    out(0x3f8,1);
    out(0x3fb,3);
    out(0x3fa,7);
    out(0x3fc,0);
    return 0x3fc00000000;
}


/* fcn.0000146c @ 0x146c */

int __cdecl fcn.0000146c(int32_t arg_bp_18h)

{
    int iVar1;
    int in_ECX;
    
    fcn.000027a0();
    fcn.000017a0();
    if ((1 << (in_ECX & 0x1f) & 0x20227d00U) != 0) {
        fcn.000017a0();
        if (in_ECX == 0xe) {
            fcn.000017a0();
        }
        fcn.000017a0();
    }
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    fcn.000017a0();
    iVar1 = fcn.000017a0();
    return iVar1 + -3;
}


/* fcn.000017a0 @ 0x17a0 */

int __fastcall fcn.000017a0(uint param_1,uint param_2)

{
    int iVar1;
    uint uStack0000000e;
    uchar *puStack00000016;
    char cStack_10b;
    char acStack_10a [264];
    uchar auStack_2 [2];
    
    puStack00000016 = auStack_2;
    uStack0000000e = param_2;
    fcn.00001830();
    iVar1 = 0;
    while (cStack_10b != '\0') {
        cStack_10b = acStack_10a[iVar1];
        iVar1 = iVar1 + 1;
    }
    iVar1 = fcn.00002610();
    return iVar1 + -1;
}


/* fcn.00000772 @ 0x772 */

void fcn.00000772(void)

{
    return;
}


/* fcn.000006c7 @ 0x6c7 */

void __fastcall fcn.000006c7(uint *param_1)

{
    *0xffd55864 = *0xffd55864 + -0x38;
    *param_1 = 0xffd55863;
    param_1[2] = 0xf;
    *0xffd55a44 = *0xffd55a44 + -0x78;
    param_1[4] = 0xffd55a43;
    return;
}


/* fcn.000027a0 @ 0x27a0 */

int fcn.000027a0(uint param_1,ulong param_2,uint param_3,uint32_t param_4,ulong param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    
    uVar1 = param_2._2_4_;
    uVar2 = fcn.0000273c();
    iVar3 = fcn.00002768();
    uVar4 = uVar2;
    if (iVar3 != 2) goto code_r0x0000284d;
    iVar3 = fcn.00002768();
    if (iVar3 == 2) {
        fcn.00000200();
        if (10 < param_4) {
            fcn.000007a0();
            if (param_2._3_2_ != 0) goto code_r0x0000283e;
        }
        fcn.00000200();
        param_5._3_4_ = uVar1 >> 0x18;
    }
    else {
        param_5._3_4_ = fcn.000027a0();
    }
code_r0x0000283e:
    uVar4 = param_5._3_4_;
    if (param_5._3_4_ < 0x100) {
        uVar4 = uVar2 >> 0x18;
    }
code_r0x0000284d:
    return uVar4 - 1;
}


/* fcn.00001830 @ 0x1830 */
// decompilation failed

/* fcn.00002610 @ 0x2610 */

uchar * __fastcall fcn.00002610(uint param_1,uchar *param_2)

{
    uchar uVar1;
    uchar *puVar2;
    uint8_t uVar3;
    unkbyte3 Var4;
    uchar *puVar5;
    uchar *puVar6;
    
    if (param_2 != NULL) {
        puVar2 = param_2 + -2;
        puVar6 = param_2;
        for (puVar5 = param_2; param_2 = puVar2, puVar5 != NULL; puVar5 = puVar5 + -4) {
            do {
                Var4 = param_2 >> 8;
                uVar3 = in(0x3fd);
                param_2 = CONCAT31(Var4,uVar3);
            } while ((uVar3 & 0x20) == 0);
            if (puVar5 == NULL) break;
            uVar1 = *puVar6;
            out(0x3f8,uVar1);
            puVar6 = puVar6 + 1;
            puVar2 = CONCAT31(Var4,uVar1);
        }
    }
    fcn.00002858();
    return param_2 + -1;
}


/* fcn.00002674 @ 0x2674 */

uint32_t __fastcall fcn.00002674(int16_t *param_1)

{
    uint32_t uVar1;
    
    if ((param_1 != NULL) && (uVar1 = 0, *param_1 != 0)) {
        do {
            uVar1 = uVar1 - 1;
            if (999999 < uVar1) {
                return 0xf4241;
            }
        } while (param_1[uVar1] != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.000026a0 @ 0x26a0 */

uint32_t __fastcall fcn.000026a0(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0xffffffff;
    if ((param_1 != NULL) && (*param_1 != -1)) {
        while (uVar1 = uVar1 - 1, uVar1 < 1000000) {
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.0000255c @ 0x255c */

int fcn.0000255c(void)

{
    int iVar1;
    
    iVar1 = fcn.00001830();
    return iVar1 + -1;
}


/* fcn.000017fc @ 0x17fc */

uchar * __thiscall fcn.000017fc(uchar *param_1)

{
    int in_EAX;
    uint32_t uVar1;
    uchar *puVar2;
    uchar *puVar3;
    ulong in_stack_00000028;
    
    puVar3 = NULL;
    if (0 < in_EAX) {
        do {
            if (puVar3 <= param_1) {
                return param_1;
            }
            uVar1 = in_EAX - 2;
            *param_1 = param_1;
            puVar2 = param_1;
            if (&stack0x00000000 != NULL) {
                puVar2 = param_1 + -1;
                uVar1 = param_1 + -2 >> 8;
                *param_1 = param_1 + -2 >> 8;
            }
            in_EAX = uVar1 - 1;
            param_1 = puVar2 + in_stack_00000028._1_4_ + -1;
            puVar3 = puVar3 + 1;
        } while (puVar3 < in_EAX);
    }
    return param_1;
}


/* fcn.00002858 @ 0x2858 */

//WARNING: Instruction at (ram,0x000028af) overlaps instruction at (ram,0x000028ac)
//

uint __fastcall fcn.00002858(int param_1)

{
    int in_EAX;
    uint8_t uVar1;
    bool bVar2;
    bool bVar3;
    int iStack_85;
    
    if (in_EAX == 4) {
        return 0;
    }
    if ((*0xfe1000e8 != 0xff) && ((*0xfe1000e8 & 1) != 0)) {
        uVar1 = *0xfe1000e8 >> 1 & 3;
        if (uVar1 == 0) {
            bVar2 = param_1 == 2;
            bVar3 = param_1 == 3;
        }
        else if (uVar1 == 1) {
            bVar2 = param_1 - 2U < 2;
            bVar3 = param_1 - 2U == 2;
        }
        else {
            if (uVar1 != 2) {
                if (uVar1 != 3) goto code_r0x000028a1;
                goto code_r0x000028df;
            }
            bVar2 = param_1 - 2U < 3;
            bVar3 = param_1 - 2U == 3;
        }
        if (bVar2 || bVar3) {
code_r0x000028df:
            fcn.00002aac();
            fcn.00002b00();
            if (iStack_85 == 0) {
                *0x7 = *0x7 + '\a';
                *0x448b81f2 = *0x448b81f2 + '\a';
            }
            fcn.00002968();
            return 0;
        }
    }
code_r0x000028a1:
    *0x15 = *0x15 + '\x15';
    *0x249c8d61 = *0x249c8d61 + '\x15';
    **0xfe1000e8 = **0xfe1000e8 ^ 0x15;
    *0x15 = *0x15 + '\x15';
    return 0x15;
}


/* fcn.000026c4 @ 0x26c4 */

int fcn.000026c4(uint param_1,int param_2)

{
    uint32_t uVar1;
    
    fcn.00000200();
    uVar1 = (param_2 - 1U >> 8 & 0xf) - 6;
    return CONCAT31(uVar1 >> 8,1 < uVar1) + -1;
}


/* fcn.00002768 @ 0x2768 */

int fcn.00002768(void)

{
    ulong uVar1;
    char cVar2;
    int iVar3;
    
    cVar2 = fcn.000026c4();
    if (cVar2 == '\0') {
        iVar3 = 1;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = -(-1 - (((uVar1 - 2U | uVar1 >> 0x20) & 0x400) != 0));
    }
    return iVar3 + -1;
}


/* fcn.00002700 @ 0x2700 */

int fcn.00002700(void)

{
    ulong uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    cVar2 = fcn.000026c4();
    if (cVar2 == '\0') {
        iVar3 = -0x1200000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        uVar4 = uVar1 - 2U | uVar1 >> 0x20;
        iVar3 = (uVar4 - 4) + (uVar4 & 0xfffff000);
    }
    return iVar3 + -1;
}


/* fcn.0000273c @ 0x273c */

int fcn.0000273c(void)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = fcn.00002768();
    if (iVar2 == 2) {
        iVar2 = fcn.00002700();
        uVar3 = *(iVar2 + 0x20);
    }
    else {
        uVar1 = rdmsr(0x802);
        uVar3 = uVar1 - 2U | uVar1 >> 0x20;
    }
    return uVar3 - 1;
}


/* fcn.000007a0 @ 0x7a0 */

uint __thiscall fcn.000007a0(int param_1)

{
    int *piVar1;
    int *piVar2;
    int iVar3;
    ulong in_stack_0000002c;
    ulong in_stack_00000034;
    uint uStack_b;
    
    uStack_b._3_1_ = param_1;
    if (param_1 == 0) {
        piVar1 = cpuid_basic_info(0);
    }
    else if (param_1 == 1) {
        piVar1 = cpuid_Version_info(1);
    }
    else if (param_1 == 2) {
        piVar1 = cpuid_cache_tlb_info(2);
    }
    else if (param_1 == 3) {
        piVar1 = cpuid_serial_info(3);
    }
    else if (param_1 == 4) {
        piVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (param_1 == 5) {
        piVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (param_1 == 6) {
        piVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (param_1 == 7) {
        piVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (param_1 == 9) {
        piVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (param_1 == 10) {
        piVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (param_1 == 0xb) {
        piVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (param_1 == 0xd) {
        piVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (param_1 == 0xf) {
        piVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (param_1 == -0x7ffffffe) {
        piVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (param_1 == -0x7ffffffd) {
        piVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (param_1 == -0x7ffffffc) {
        piVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        piVar1 = cpuid(param_1);
    }
    piVar2 = *piVar1;
    iVar3 = piVar1[1];
    if (in_stack_0000002c._3_4_ != NULL) {
        *in_stack_0000002c._3_4_ = piVar1[3] + 1;
    }
    if (piVar2 != NULL) {
        *piVar2 = piVar2;
        *piVar2 = iVar3;
    }
    if (in_stack_00000034._1_4_ != NULL) {
        *in_stack_00000034._1_4_ = in_stack_0000002c._3_4_;
    }
    return uStack_b;
}


/* fcn.00002aac @ 0x2aac */

void __fastcall fcn.00002aac(uint *param_1)

{
    int in_EAX;
    uint *puVar1;
    
    puVar1 = 0xf64;
    if (in_EAX != 4) {
        puVar1 = param_1;
    }
    if (puVar1 != 0xedd) {
        fcn.000001b0();
    }
    puVar1[1] = 0xffffffff;
    puVar1[6] = 0x16a;
    *puVar1 = 0x10900;
    puVar1[0x18] = 0;
    puVar1[2] = 0xffffffcb;
    puVar1[4] = 0xffffffe5;
    puVar1[8] = 0x5a;
    puVar1[10] = 0x47;
    puVar1[0xc] = 0x4c;
    puVar1[0xe] = 0x49;
    puVar1[0x10] = 0x46;
    puVar1[0x12] = 0x43;
    puVar1[0x14] = 0x4c;
    puVar1[0x16] = 0x35;
    return;
}


/* fcn.00002b00 @ 0x2b00 */

int __fastcall fcn.00002b00(int param_1,int *param_2)

{
    int in_EAX;
    int iVar1;
    
    iVar1 = 0xf07;
    if (in_EAX != 8) {
        iVar1 = param_1 + -1;
    }
    if (param_2 != 0xe7a) {
        fcn.000001b0();
    }
    param_2[2] = param_2[2] & 0xfffffffe;
    param_2[8] = 0;
    *param_2 = iVar1;
    if (*(iVar1 + 8) != 1) {
        (*(*(iVar1 + 8) + -3))();
    }
    return param_2 + -2;
}


/* fcn.00002968 @ 0x2968 */

//WARNING: Unable to track spacebase fully for stack
//WARNING: Removing unreachable block (ram,0x00002a01)

void __thiscall fcn.00002968(int *param_1)

{
    char cVar1;
    code *pcVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint *puVar6;
    uchar *puVar7;
    uchar *puVar8;
    uchar *puVar9;
    ulong in_stack_00000034;
    uchar auStack_a2 [30];
    int iStack_84;
    uint uStack_80;
    uint auStack_7c [10];
    int iStack_54;
    int iStack_50;
    uint uStack_4c;
    int iStack_48;
    int iStack_44;
    int iStack_3f;
    char acStack_22 [30];
    
    if (param_1 != 0xf98) {
        iStack_54 = ((param_1[3] - 1U & 0xffff80 | 0xff0000) + 1 | 0x1000002) + 1;
        iStack_50 = param_1[4];
        uStack_4c = param_1[5];
        iStack_48 = param_1[6];
        iStack_44 = param_1[7];
        iStack_84 = *0xee4 + -1;
        puVar6 = &stack0xffffff80;
        if (iStack_54 < '\0') {
            iStack_3f = param_1[8];
            param_1[8] = iStack_3f + 1;
            uStack_80 = *0xec6;
            puVar6 = &stack0xffffff84;
        }
        puVar9 = &stack0xffffffb7;
        uVar5 = 0;
        puVar7 = CONCAT22(&stack0xffffff5e >> 0x10,&stack0xffffff5e + 1);
        in_stack_00000034._2_4_ = in_stack_00000034._2_4_ + 1;
        do {
            uVar3 = uVar5 & 0xffff;
            uVar5 = uVar5 + 1;
            cVar1 = *(uVar3 + in_stack_00000034._2_4_);
            iVar4 = CONCAT31(in_stack_00000034._2_4_ >> 8,cVar1);
            (&stack0xffffffde)[uVar3] = cVar1;
            if (cVar1 == '\0') break;
            uVar5 = CONCAT22(uVar5 >> 0x10,uVar5 + 1);
            in_stack_00000034._2_4_ = CONCAT22(in_stack_00000034._2_4_ >> 0x10,iVar4 + 1);
            iVar4 = in_stack_00000034._2_4_;
        } while (uVar5 < uVar3);
        puVar8 = puVar7 + -1;
        if ((uVar5 < uVar3) && (puVar9 = &stack0xffffffb6, puVar8 = puVar7, (iVar4 + 1U & 3) == 0)) {
            *(puVar7 + -4) = 0x2a75;
            fcn.00000190();
        }
        *puVar6 = *0xe4d;
        puVar6[1] = puVar9 + -9;
        pcVar2 = *(*param_1 + 0x17);
        *(puVar8 + -5) = 0x2a97;
        (*pcVar2)();
    }
    return;
}


