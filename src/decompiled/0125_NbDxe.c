// decompiled by r2ghidra: 0125_NbDxe.pe32
// functions: 25

/* entry0 @ 0x103e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103fc(arg1,arg2);
    fcn.00010b2c(arg1,arg2);
    return;
}


/* fcn.000103fc @ 0x103fc */

void fcn.000103fc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x11978 = *(arg1 + 0x60);
    *0x11970 = arg1;
    fcn.00011108();
    iVar3 = fcn.00011174();
    if (iVar3 == 0) {
        uVar4 = fcn.00010380();
        fcn.00010370();
        uVar1 = in(0x1808);
        fcn.000102f0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102e0();
        }
        fcn.000102f0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010370();
        }
        else {
            fcn.00010360();
        }
    }
    if ((*0x11990 != NULL) || (iVar3 = (**(*0x11978 + 0x140))(0x11800,0,0x11990), -1 < iVar3)) {
        (***0x11990)(*0x11990,0x11998);
    }
    return;
}


/* fcn.00010b2c @ 0x10b2c */

ulong fcn.00010b2c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    char cVar2;
    int64_t iVar3;
    int iVar4;
    ulong uVar5;
    ulong uVar6;
    uint64_t auStackX_8 [2];
    ulong uStackX_18;
    ulong uStackX_20;
    int8_t var_10ah;
    int64_t var_550h;
    int64_t var_558h;
    uint64_t *puVar7;
    ulong uStack_608;
    char16_t acStack_600 [4];
    char16_t acStack_5f8 [4];
    char16_t cStack_5f0;
    ulong uStack_5e8;
    ulong uStack_5e0;
    uchar auStack_5d8 [8];
    uchar auStack_5d0 [8];
    uchar auStack_5c8 [16];
    uchar auStack_5b8 [394];
    uint8_t uStack_42e;
    int64_t var_80h;
    
    auStackX_8[0] = arg1 & 0xffffffff00000000;
    cStack_5f0 = str.MemCeil.[8];
    acStack_600 = str.MemCeil.._0_8_;
    acStack_5f8 = str.MemCeil.._8_8_;
    uStack_608 = 4;
    if (*0x119d8 == 0) {
        *0x119a0 = *(arg2 + 0x60);
        *0x119a8 = *(arg2 + 0x58);
        *0x119d8 = arg2;
    }
    fcn.0001124c(1,0x61005);
    iVar3 = fcn.000110cc();
    cVar2 = (**(iVar3 + 0x30))(0x117b0,0x1100000);
    if (cVar2 != '\0') {
        (**(*0x11978 + 0x50))(0x200,0x10,0x10aec,0,&uStackX_20);
        (**(*0x11978 + 0xa8))(0x11770,uStackX_20,auStack_5d8);
        (**(*0x11978 + 0x68))(uStackX_20);
    }
    uStack_5e8 = 0x578;
    iVar3 = (**(*0x119a8 + 0x48))(L"SaSetup",0x117f0,0,&uStack_5e8,auStack_5b8);
    if (iVar3 != 0) {
        fcn.0001124c(0x80000002,0x61001);
    }
    if (uStack_42e == 0) {
        puVar7 = NULL;
        uVar6 = 0;
        uVar5 = 0;
    }
    else {
        if (uStack_42e < 8) {
            if (uStack_42e == 7) {
                iVar4 = 0x600;
            }
            else {
                iVar4 = 0x400;
                if (uStack_42e == 1) {
                    iVar4 = 0xc00;
                }
                else if (uStack_42e == 2) {
                    iVar4 = 0xb00;
                }
                else if (uStack_42e == 3) {
                    iVar4 = 0xa00;
                }
                else if (uStack_42e == 4) {
                    iVar4 = 0x900;
                }
                else if (uStack_42e == 5) {
                    iVar4 = 0x800;
                }
                else if (uStack_42e == 6) {
                    iVar4 = 0x700;
                }
            }
        }
        else {
            iVar4 = 0x400;
            if (uStack_42e == 8) {
                iVar4 = 0x500;
            }
            else if (uStack_42e != 9) {
                if (uStack_42e == 10) {
                    iVar4 = 0x300;
                }
                else if (uStack_42e == 0xb) {
                    iVar4 = 0x200;
                }
                else if (uStack_42e == 0x14) {
                    iVar4 = 0xe00;
                }
                else if (uStack_42e == 0x15) {
                    iVar4 = 0xd00;
                }
            }
        }
        uStack_608 = 4;
        iVar3 = (**(*0x119a8 + 0x48))(acStack_600,str.__1_,0,&uStack_608,auStackX_8);
        if (-1 < iVar3) goto code_r0x00010da3;
        uVar6 = 4;
        uVar5 = 3;
        uVar1 = iVar4 * -0x100000;
        if (0xc0000000 < iVar4 * -0x100000) {
            uVar1 = 0xc0000000;
        }
        puVar7 = auStackX_8;
        auStackX_8[0] = CONCAT44(auStackX_8[0]._4_4_,uVar1);
    }
    (**(*0x119a8 + 0x58))(acStack_600,str.__1_,uVar5,uVar6,puVar7);
code_r0x00010da3:
    iVar3 = (**(*0x119a0 + 0x50))(0x200,8,0x10fd8,0,&uStack_5e0);
    if (-1 < iVar3) {
        iVar3 = (**(*0x119a0 + 0xa8))(0x11710,uStack_5e0,auStack_5d0);
    }
    if (iVar3 != 0) {
        fcn.0001124c(0x80000002,0x61001);
    }
    uVar5 = 0x11968;
    iVar3 = (**(*0x119a0 + 0x140))(0x11740,0);
    if (iVar3 < 0) {
        *0xc0000080 = 0;
        *0xc0000085 = 0;
        *0xc0000086 = 0;
    }
    iVar3 = fcn.000112c4(0x11780,0x107c4,uVar5,0x119f8);
    if (iVar3 != 0) {
        fcn.0001124c(0x80000002,0x61001);
    }
    uVar5 = 0x106f8;
    iVar3 = (**(*0x119a0 + 0x170))(0x200,0x10,0x106f8,0,0x11878,0x119f8);
    if (iVar3 != 0) {
        fcn.0001124c(0x80000002,0x61001);
    }
    fcn.00010900();
    fcn.000112c4(0x11820,0x105d0,uVar5,0x11938);
    uVar5 = 0x11920;
    iVar3 = (**(*0x119a0 + 0x140))(0x11720,0);
    if (iVar3 < 0) {
        iVar3 = fcn.000112c4(0x11720,0x106b8,uVar5,&uStackX_18);
        if (iVar3 != 0) {
            fcn.0001124c(0x80000002,0x61001);
        }
    }
    else if (*0x11920 == 0) {
        (**(*0x119a0 + 0x140))(0x11720,0,0x11920);
    }
    (**(*0x119a0 + 0x50))(0x201,8,0x10aa8,0,&uStackX_18);
    (**(*0x119a0 + 0x50))(0x200,8,0x10aa8,0,&uStackX_18);
    (**(*0x119a0 + 0xa8))(0x11730,uStackX_18,auStack_5c8);
    return 0;
}


/* fcn.00011108 @ 0x11108 */

int64_t fcn.00011108(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11988 == 0) {
        *0x11988 = 0;
        if (*(*0x11970 + 0x68) != 0) {
            piVar2 = *(*0x11970 + 0x70);
            do {
                if ((*0x117d0 == *piVar2) && (*0x117d8 == piVar2[1])) {
                    *0x11988 = (*(*0x11970 + 0x70))[uVar1 * 3 + 2];
                    return *0x11988;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11970 + 0x68));
        }
    }
    return *0x11988;
}


/* fcn.00011174 @ 0x11174 */

void fcn.00011174(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011108();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000111ab:
            if ((piVar1 == NULL) || ((*0x11848 == *(piVar1 + 4) && (*0x11850 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000111ab;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.0001131c @ 0x1131c */

void fcn.0001131c(void)

{
    (**(*0x11978 + 0x140))(0x117a0,0,0x119e0);
    //WARNING: Could not recover jumptable at 0x00011358. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x11978 + 0x140))(0x11790,0,0x119e8);
    return;
}


/* fcn.00011360 @ 0x11360 */

int64_t fcn.00011360(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x119e0 == 0) && (fcn.0001131c(), *0x119e0 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x119e0 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x000113f3;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x52414d44);
        uVar2 = fcn.00011554(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x000113f3:
    return iVar1;
}


/* fcn.000104cc @ 0x104cc */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.000104cc(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int64_t iStackX_18;
    ulong *puStackX_20;
    int64_t var_30h;
    int64_t var_38h;
    int64_t aiStack_28 [2];
    int64_t var_10h;
    
    iStackX_18 = 0;
    aiStack_28[0] = 0;
    puStackX_20 = NULL;
    iVar3 = 0x11790;
    *0x11950 = 1;
    iVar2 = (**(*0x119a0 + 0x140))(0x11790,0,&puStackX_20);
    if ((((-1 < iVar2) && (iVar2 = fcn.0001131c(), -1 < iVar2)) &&
        (iVar3 = fcn.00011360(iVar3,aiStack_28,&iStackX_18), iVar2 = aiStack_28[0], -1 < iVar3)) &&
       (aiStack_28[0] != 0)) {
        uVar1 = *(aiStack_28[0] + 4);
        for (uVar4 = 0x30; uVar4 < uVar1; uVar4 = uVar4 + *(uVar4 + 2 + aiStack_28[0])) {
            if (((*(uVar4 + aiStack_28[0]) == 1) && (*(uVar4 + 0x1e + aiStack_28[0]) == '\x14')) &&
               (*(uVar4 + 0x1d + aiStack_28[0]) == '\0')) {
                *(uVar4 + 8 + aiStack_28[0]) = arg1;
                *(uVar4 + 0x10 + aiStack_28[0]) = arg2;
                if (uVar1 <= uVar4) {
                    return;
                }
                if ((iStackX_18 != 0) && (iVar3 = (*puStackX_20[1])(puStackX_20), iVar3 < 0)) {
                    return;
                }
                iStackX_18 = 0;
                (**puStackX_20)(puStackX_20,iVar2,*(iVar2 + 4),&iStackX_18);
                (**(*0x119a0 + 0x48))(iVar2);
                return;
            }
        }
    }
    return;
}


/* fcn.00011090 @ 0x11090 */

void fcn.00011090(void)

{
    if (*0x11840 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11840 = '\x05';
        }
        else {
            *0x11840 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00011400 @ 0x11400 */

ulong fcn.00011400(void)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uchar uVar3;
    uint32_t auStackX_8 [8];
    
    fcn.00010330(1,auStackX_8,0,0);
    uVar3 = 4;
    if ((auStackX_8[0] & 0xfff0ff0) == 0x906a0) {
        if (*0xc0000002 < 0x4622) {
            uVar2 = *0xc0000002 - 0x4601;
            if ((*0xc0000002 - 0x4601 & 0xffffffdf) != 0) {
                if (*0xc0000002 != 0x4602) {
                    if (*0xc0000002 == 0x4609) goto code_r0x0001151b;
                    uVar1 = *0xc0000002 - 0x460a;
                    uVar2 = uVar1;
                    if ((0xd < uVar1) || ((0x2401U >> (uVar1 & 0x1f) & 1) == 0)) {
                        if (*0xc0000002 == 0x4619) goto code_r0x0001151b;
                        uVar2 = *0xc0000002 - 0x461a;
                        if (2 < *0xc0000002 - 0x461a) goto code_r0x0001145f;
                    }
                }
code_r0x0001145d:
                uVar3 = 2;
                goto code_r0x0001145f;
            }
        }
        else {
            uVar2 = 0;
            if (*0xc0000002 == 0x4622) goto code_r0x0001145d;
            if (((((*0xc0000002 != 0x4629) && (*0xc0000002 != 0x4641)) && (*0xc0000002 != 0x4645)) &&
                ((*0xc0000002 != 0x4649 && (*0xc0000002 != 0x4659)))) && (*0xc0000002 != 0x4661)) goto code_r0x0001145f;
        }
    }
    else {
        uVar1 = (auStackX_8[0] & 0xfff0ff0) - 0xb06a0;
        uVar2 = uVar1;
        if (uVar1 != 0) {
            if (uVar1 != 0x40) goto code_r0x0001145f;
            uVar2 = *0xc0000002;
            if ((*0xc0000002 != 0x4614) && (uVar1 = *0xc0000002 - 0x4617, uVar2 = uVar1, (uVar1 & 0xfffffffa) != 0))
            goto code_r0x0001145f;
            goto code_r0x0001145d;
        }
        uVar2 = *0xc0000002;
        if (*0xc0000002 < 0xa706) goto code_r0x0001145f;
        if (0xa70b < *0xc0000002) {
            uVar1 = *0xc0000002 - 0xa715;
            uVar2 = uVar1;
            if ((7 < uVar1) || ((0xc3U >> (uVar1 & 0x1f) & 1) == 0)) goto code_r0x0001145f;
        }
    }
code_r0x0001151b:
    uVar3 = 0;
code_r0x0001145f:
    return CONCAT71(uVar2 >> 8,uVar3);
}


/* fcn.000115a0 @ 0x115a0 */

void fcn.000115a0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    if (arg2 != 0) {
        *arg2 = *puVar1;
    }
    if (arg3 != 0) {
        *arg3 = uVar2;
    }
    if (arg4 != 0) {
        *arg4 = uVar4;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar3;
    }
    return;
}


/* fcn.0001124c @ 0x1124c */

int64_t fcn.0001124c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    if (*0x119b0 == '\0') {
        iVar1 = fcn.000111c4();
        if (-1 < iVar1) {
            iVar1 = (***0x119c8)(arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
        }
    }
    else if (*0x119b8 == NULL) {
        iVar1 = -0x7ffffffffffffff2;
    }
    else {
        iVar1 = (***0x119b8)(*0x119b8,arg1 & 0xffffffffU,arg2 & 0xffffffffU,0,0,0);
    }
    return iVar1;
}


/* fcn.000110cc @ 0x110cc */

int64_t fcn.000110cc(void)

{
    if (*0x11980 == 0) {
        (**(*0x11978 + 0x140))(0x11760,0,0x11980);
    }
    return *0x11980;
}


/* fcn.000112c4 @ 0x112c4 */

void fcn.000112c4(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t iVar1;
    ulong in_stack_00000028;
    
    iVar1 = (**(*0x119a0 + 0x50))(0x200,8,arg2,0,arg3);
    if (-1 < iVar1) {
        (**(*0x119a0 + 0xa8))(arg1,*arg3,in_stack_00000028);
    }
    return;
}


/* fcn.00010900 @ 0x10900 */

ulong fcn.00010900(void)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    char acStackX_8 [8];
    uchar auStackX_10 [16];
    uchar auStackX_20 [8];
    uint32_t var_ba4h;
    uint32_t var_badh;
    uint32_t var_c00h;
    int64_t var_c08h;
    int64_t var_c10h;
    int64_t var_c18h;
    ulong uStack_cc8;
    uchar auStack_cc0 [8];
    uchar auStack_cb8 [3172];
    char cStack_54;
    char cStack_4b;
    
    acStackX_8[0] = '\0';
    cVar1 = fcn.00011090();
    *0x1195e = cVar1 != '\x03';
    *0x1195b = ~(*0xc00000e4 >> 0xb) & 1;
    *0x1195c = *0xc0010000 != -1;
    *0x1195f = ~(*0xc00000e4 >> 0x17) & 1;
    uVar2 = fcn.00011400();
    *0x11960 = ((uVar2 & 0xfd) != 0) + '\x01';
    if (*0x1195c == '\x01') {
        uStack_cc8 = 1;
        iVar3 = (**(*0x119a8 + 0x48))(L"SecureBoot",0x11700,0,&uStack_cc8,acStackX_8);
        if ((iVar3 < 0) || (acStackX_8[0] == '\0')) {
            uStack_cc8 = 0xca9;
            iVar3 = (**(*0x119a8 + 0x48))(L"Setup",0x11830,0,&uStack_cc8,auStack_cb8);
            if ((iVar3 < 0) || ((cStack_54 != '\0' && (cStack_4b != '\x01')))) goto code_r0x00010a0d;
        }
        *0x1195d = 1;
    }
code_r0x00010a0d:
    fcn.000115a0(1,auStackX_10,auStack_cc0,auStackX_20);
    *0x11961 = auStackX_10._0_4_ & 0x3ff0;
    *0x11965 = auStackX_10._0_4_ & 0xf;
    *0x11963 = SUB42(auStackX_10._0_4_,2) & 0xfff;
    (**(*0x119a8 + 0x58))(L"NBPlatformData",0x11830,2,0xe,0x11958);
    return 0;
}


/* fcn.000111c4 @ 0x111c4 */

ulong fcn.000111c4(void)

{
    ulong uVar1;
    
    uVar1 = 0;
    if (*0x119b0 == '\0') {
        if (*0x119c8 == 0) {
            if (*0x119c0 != '\0') {
                return 0x8000000000000003;
            }
            uVar1 = (**(*0x119a0 + 0x140))(0x11858,0,0x119c8);
        }
    }
    else if (*0x119b8 == 0) {
        if ((*0x119c0 == '\0') && (*0x119d0 != 0)) {
    //WARNING: Could not recover jumptable at 0x00011203. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x119d0 + 0xd0))(0x11868,0,0x119b8);
            return uVar1;
        }
        return 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011554 @ 0x11554 */

void fcn.00011554(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00011524();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00011524 @ 0x11524 */

ulong fcn.00011524(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11978 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 5280 named .text
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
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


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


