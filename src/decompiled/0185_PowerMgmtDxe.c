// decompiled by r2ghidra: 0185_PowerMgmtDxe.pe32
// functions: 27

/* entry0 @ 0x103b4 */

ulong entry0(ulong param_1,int64_t param_2)

{
    int64_t iVar1;
    ulong uVar2;
    
    fcn.00010408(param_1,param_2);
    iVar1 = fcn.000116c4(0x117e0);
    uVar2 = 0;
    if (iVar1 == 0) {
        uVar2 = 0x800000000000000e;
    }
    else {
        *0x11888 = iVar1 + 0x18;
        *0x11880 = iVar1 + 0x40;
        fcn.00010504();
        fcn.00010990();
    }
    return uVar2;
}


/* fcn.00010408 @ 0x10408 */

void fcn.00010408(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x11908 = *(arg1 + 0x60);
    *0x11900 = arg1;
    fcn.00011658();
    noname_0_00 = 0x11840;
    iVar3 = fcn.000116c4(0x11840);
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010330(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010320();
        }
        fcn.00010330(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    //WARNING: Could not recover jumptable at 0x000104b1. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x11908 + 0x140))(0x11800,0,0x11918);
    return;
}


/* fcn.000116c4 @ 0x116c4 */

void fcn.000116c4(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011658();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000116f2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000116f2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010504 @ 0x10504 */

//WARNING: Variable defined which should be unmapped: var_1ch

void fcn.00010504(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    ulong noname_0;
    uint32_t uVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    char acStackX_8 [8];
    uint32_t auStackX_10 [2];
    uint64_t uStackX_18;
    uint32_t var_30h_2;
    int64_t var_38h;
    uint32_t var_40h_2;
    int64_t iStack_68;
    int64_t iStack_60;
    uchar auStack_58 [16];
    uint32_t var_40h;
    int iStack_44;
    int64_t var_38h_2;
    int64_t var_30h;
    uint32_t var_1ch;
    
    uVar10 = 0;
    iStack_68 = 0;
    uStackX_18 = 0;
    uVar8 = 0;
    (**(*0x11908 + 0x140))(str.C__);
    if (*0x118e8 != NULL) {
        fcn.000102f0(1,auStackX_10,0,0);
        uVar6 = auStackX_10[0] & 0xf;
        uVar3 = fcn.0001162c();
        *(**0x118e8 + 9) = uVar3 | uVar6;
    }
    fcn.000102c0(6,0,auStackX_10,0);
    if ((auStackX_10[0] >> 0xe & 1) != 0) {
        iVar4 = (**(*0x11908 + 0x140))(0x117c0,0,0x118c0);
        if (iVar4 < 0) {
            return;
        }
        fcn.00010260(auStack_58,0x30);
        noname_0 = 0x35;
        uVar11 = rdmsr(0x35);
        uVar7 = (uVar11 & 0xffffffff) >> 0x10;
        iStack_68 = fcn.000113c4(0x35,uVar7 << 2);
        iStack_60 = fcn.000113c4(noname_0,uVar7 << 3);
        if (iStack_68 == 0) {
            return;
        }
        if (iStack_60 == 0) {
            return;
        }
        (**(*0x118c0 + 0x30))(*0x118c0,&uStackX_18);
        uVar7 = uVar10;
        uVar9 = uVar10;
        if ((uVar11 & 0xffff) != 0) {
            do {
                iVar4 = (**(*0x118c0 + 8))(*0x118c0,uVar7,auStack_58);
                if (iVar4 < 0) {
                    return;
                }
                if (iStack_44 == 0) {
                    if (uVar7 == uStackX_18) {
                        fcn.000104b8(&iStack_68);
                        *0x11898 = *0x11898 + 1;
                    }
                    else {
                        (**(*0x118c0 + 0x18))(*0x118c0,fcn.000104b8,uVar7,0,0,&iStack_68,0);
                        *0x11898 = *0x11898 + 1;
                        acStackX_8[0] = '\0';
                        (**(*0x118c0 + 0x18))(*0x118c0,0x11414,uVar7,0,0,acStackX_8,0);
                        if (acStackX_8[0] != '@') goto code_r0x000106ec;
                    }
                    uVar9 = uVar9 + 1;
                }
code_r0x000106ec:
                uVar8 = uVar9;
                uVar3 = uVar7 + 1;
                uVar7 = uVar3;
            } while (uVar3 < (uVar11 & 0xffff));
        }
        uVar2 = 0xff;
        if (uVar8 != 0) {
            puVar5 = iStack_68 + 1;
            uVar11 = uVar8;
            do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 4;
                if (uVar1 < uVar2) {
                    uVar2 = uVar1;
                }
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
        }
        if (*0x118e8 != NULL) {
            if ((*(**0x118e8 + 0x56) != '\0') && (uVar8 != 0)) {
                puVar5 = iStack_68 + 1;
                uVar11 = uVar10;
                do {
                    if (uVar2 < *puVar5) {
                        uVar10 = 1;
                        break;
                    }
                    uVar3 = uVar11 + 1;
                    uVar11 = uVar3;
                    puVar5 = puVar5 + 4;
                } while (uVar3 < uVar8);
            }
            *(**0x118e8 + 0x56) = uVar10;
            *(**0x118e8 + 0x55) = uVar2;
        }
    }
    (**(*0x11908 + 0x140))(0x11820,0,0x118f0);
    return;
}


/* fcn.00010990 @ 0x10990 */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00010990(void)

{
    char *pcVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    char *pcVar8;
    char cVar9;
    uchar auStackX_8 [8];
    uint auStackX_10 [2];
    uchar auStackX_18 [8];
    int64_t var_28h_2;
    int64_t var_30h_2;
    int64_t var_38h_2;
    int64_t var_40h;
    int64_t iStack_58;
    char *pcStack_50;
    uint64_t uStack_48;
    int64_t var_38h;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    
    uVar7 = 0;
    iStack_58 = 0;
    iVar5 = (**(*0x11908 + 0x138))(2,0x117f0,0,&uStack_48,&var_38h);
    iStack_58 = 0;
    uVar6 = uVar7;
    if (uStack_48 != 0) {
        do {
            (**(*0x11908 + 0x98))(*(var_38h + uVar6 * 8),0x117f0,&iStack_58);
            var_30h = 0;
            auStackX_10[0] = 0;
            iVar5 = (**(iStack_58 + 0x10))(iStack_58,0x117d0,0,&var_30h,auStackX_8,auStackX_18,auStackX_10);
            if (iVar5 == 0) break;
            uVar6 = uVar6 + 1;
        } while (uVar6 < uStack_48);
    }
    (**(*0x11908 + 0x48))(var_38h);
    if (iStack_58 == 0) {
        iVar5 = -0x7ffffffffffffff2;
    }
    else {
        pcStack_50 = NULL;
        while (iVar5 == 0) {
            iVar5 = (**(iStack_58 + 0x18))(iStack_58,0x117d0,0x19,uVar7,&pcStack_50,&var_30h,auStackX_10);
            if (-1 < iVar5) {
                uVar6 = *(pcStack_50 + 0x10);
                if (uVar6 < 0x64735030757044) {
                    if (uVar6 == 0x64735030757043) {
                        *0x118f8 = pcStack_50;
                    }
                    else if (uVar6 == 0x6473507041) {
                        *0x118a0 = pcStack_50;
                    }
                    else if (uVar6 == 0x7077487041) {
                        *0x118a8 = pcStack_50;
                    }
                    else if (uVar6 == 0x7473437041) {
                        *0x118b8 = pcStack_50;
                    }
                    else if (uVar6 == 0x7473497041) {
                        *0x118b0 = pcStack_50;
                    }
                    else if (uVar6 == 0x7473547041) {
                        *0x11890 = pcStack_50;
                    }
                }
                else if (uVar6 == 0x70774830757043) {
                    *0x118d8 = pcStack_50;
                    iVar3 = **0x118e8;
                    uVar2 = *(iVar3 + 1);
                    if ((uVar2 >> 0x16 & 1) != 0) {
                        if (((((~(uVar2 >> 0x18) & 1) != 0) && ((uVar2 >> 0x19 & 1) != 0)) && (*(iVar3 + 0x56) == '\0'))
                           && ((*(iVar3 + 0x55) != '\0' &&
                               (uVar2 = *(pcStack_50 + 4), pcStack_50 <= pcStack_50 + uVar2)))) {
                            pcVar8 = pcStack_50 + 0xe;
                            do {
                                if ((pcVar8[-0xe] == '\b') && (*(pcVar8 + -0xd) == 0x434f5043)) {
                                    uVar4 = (*(**0x118e8 + 0x55) * 0x7f) / 100;
                                    cVar9 = uVar4;
                                    if (((uVar4 & 0xff) * 100) / 0x7f < *(**0x118e8 + 0x55)) {
                                        cVar9 = cVar9 + '\x01';
                                    }
                                    *pcVar8 = cVar9;
                                }
                                pcVar1 = pcVar8 + -0xd;
                                pcVar8 = pcVar8 + 1;
                            } while (pcVar1 <= pcStack_50 + uVar2);
                        }
                        iVar5 = 0;
                    }
                }
                else if (uVar6 == 0x74647353757043) {
                    *0x118e0 = pcStack_50;
                }
                else if (uVar6 == 0x74734330757043) {
                    *0x11870 = pcStack_50;
                }
                else if (uVar6 == 0x74734930757043) {
                    *0x118c8 = pcStack_50;
                    if (((*(**0x118e8 + 1) & 1) != 0) && (iVar5 = fcn.00010fc0(**0x118e8,0x74734930757043), iVar5 < 0)
                       ) {
                        return iVar5;
                    }
                }
                else if (uVar6 == 0x74735430757043) {
                    *0x118d0 = pcStack_50;
                }
                uVar7 = uVar7 + 1;
                pcStack_50 = NULL;
            }
        }
        if (((((*(**0x118e8 + 1) & 1) == 0) || (iVar5 = fcn.000108c8(0x118c8), -1 < iVar5)) &&
            (((*(**0x118e8 + 1) & 0x400001) == 0 || (iVar5 = fcn.000108c8(0x118f8), -1 < iVar5)))) &&
           (((*(**0x118e8 + 1) & 0x400000) == 0 || (iVar5 = fcn.000108c8(0x118d8), -1 < iVar5)))) {
            if ((*(**0x118e8 + 1) & 0x200) == 0) {
                if ((*(**0x118e8 + 1) & 0x72) != 0) {
                    var_28h_2 = 0;
                    (***0x118f0)(*0x118f0,*0x11870,*(*0x11870 + 4),&var_28h_2);
                }
                (**(*0x11908 + 0x48))(*0x11870);
                (**(*0x11908 + 0x48))(*0x118a0);
                (**(*0x11908 + 0x48))(*0x118b0);
                (**(*0x11908 + 0x48))(*0x118b8);
            }
            else {
                iVar5 = fcn.000108c8(0x118b0);
                if (iVar5 < 0) {
                    return iVar5;
                }
                if (((*(**0x118e8 + 1) & 0x400001) != 0) && (iVar5 = fcn.000108c8(0x118a0), iVar5 < 0)) {
                    return iVar5;
                }
                iVar5 = fcn.000108c8(0x11870);
                if (iVar5 < 0) {
                    return iVar5;
                }
                iVar5 = fcn.000108c8(0x118b8);
                if (iVar5 < 0) {
                    return iVar5;
                }
                if (((*(**0x118e8 + 1) & 0x400000) != 0) && (iVar5 = fcn.000108c8(0x118a8), iVar5 < 0)) {
                    return iVar5;
                }
            }
            fcn.00010798();
            var_28h_2 = 0;
            iVar5 = (***0x118f0)(*0x118f0,*0x118e0,*(*0x118e0 + 4),&var_28h_2);
            (**(*0x11908 + 0x48))(*0x118e0);
            if ((*(**0x118e8 + 1) & 0x400) != 0) {
                var_28h_2 = 0;
                iVar5 = (***0x118f0)(*0x118f0,*0x118d0,*(*0x118d0 + 4),&var_28h_2);
                (**(*0x11908 + 0x48))(*0x118d0);
                if ((*(**0x118e8 + 1) & 0x200) != 0) {
                    var_28h_2 = 0;
                    iVar5 = (***0x118f0)(*0x118f0,*0x11890,*(*0x11890 + 4),&var_28h_2);
                }
            }
            (**(*0x11908 + 0x48))(*0x11890);
        }
    }
    return iVar5;
}


/* fcn.00011658 @ 0x11658 */

int64_t fcn.00011658(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x11910 == 0) {
        *0x11910 = 0;
        if (*(*0x11900 + 0x68) != 0) {
            piVar2 = *(*0x11900 + 0x70);
            do {
                if ((*0x11830 == *piVar2) && (*0x11838 == piVar2[1])) {
                    *0x11910 = (*(*0x11900 + 0x70))[uVar1 * 3 + 2];
                    return *0x11910;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x11900 + 0x68));
        }
    }
    return *0x11910;
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* fcn.0001148c @ 0x1148c */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0001148c(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t *arg2_00;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint64_t uStack_30;
    uint32_t var_20h;
    uint32_t var_1ch;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    iVar1 = fcn.000115a4(noname_0,arg1);
    if (-1 < iVar1) {
        uStack_38 = *arg2;
        uStack_34 = arg1 | 0x80000000;
        fcn.00010280(&uStack_30,&uStack_38,8);
        wrmsr(0x150,(uStack_30 >> 0x20) << 0x20 | uStack_30 & 0xffffffff);
        fcn.000115a4(0x150,uStack_30 >> 0x20);
        uStack_30 = rdmsr(0x150);
        arg2_00 = &uStack_30;
        fcn.00010280(&uStack_38,arg2_00,8);
        fcn.00011770(10,arg2_00);
        uStack_30 = rdmsr(0x150);
        fcn.00010280(&var_20h,&uStack_30,8);
        if ((uStack_34 == var_1ch) || (uStack_38 == var_20h)) {
            *arg3 = uStack_34 & 0xff;
            if (arg2 != &uStack_38) {
                fcn.00010280(arg2,&uStack_38,4);
            }
        }
        else {
            iVar1 = -0x7ffffffffffffffe;
        }
    }
    return iVar1;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.0001162c @ 0x1162c */

uint32_t fcn.0001162c(void)

{
    uint32_t auStackX_8 [8];
    
    fcn.000102f0(1,auStackX_8,0,0);
    return auStackX_8[0] & 0xfff0ff0;
}


/* fcn.000102c0 @ 0x102c0 */

uint64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 5472 named .text
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


/* fcn.000113c4 @ 0x113c4 */

int64_t fcn.000113c4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x11908 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.00010260(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.000104b8 @ 0x104b8 */

void fcn.000104b8(uint32_t *arg1)

{
    uint64_t uVar1;
    uint auStackX_10 [2];
    uint auStackX_18 [4];
    
    fcn.0001148c(arg1,0x1c,auStackX_10,auStackX_18);
    uVar1 = *0x11898;
    *(*arg1 + uVar1 * 4) = auStackX_10[0];
    *(*(arg1 + 2) + uVar1 * 4) = auStackX_18[0];
    return;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


/* fcn.00010fc0 @ 0x10fc0 */

ulong fcn.00010fc0(ulong noname_0,int64_t arg1)

{
    uchar uVar1;
    ulong uVar2;
    uint16_t uVar3;
    char *pcVar4;
    uint16_t uVar5;
    char *pcVar6;
    char *in_R8;
    uint16_t *puVar7;
    uint16_t uVar8;
    char *pcVar9;
    int64_t iVar10;
    char *pcStackX_20;
    uint16_t *puStack_68;
    
    puVar7 = NULL;
    puStack_68 = NULL;
    uVar1 = *(**0x118e8 + 1) >> 8;
    rdmsr(0xce);
    *0x11878 = *(*0x11880 + 6);
    uVar8 = *0x11878 * 0x21 + 3;
    pcVar6 = *0x118c8 + *(*0x118c8 + 4);
    pcVar4 = *0x118c8;
    iVar10 = *0x11880;
    pcStackX_20 = pcVar6;
    uVar3 = *0x11878;
    while( true ) {
        uVar5 = 1;
        if (pcVar6 < pcVar4) break;
        if (((*pcVar4 == '\x10') && (*(pcVar4 + 5) == 0x5f42535f)) && (*(pcVar4 + 9) == 0x30305250)) {
            puVar7 = pcVar4 + 1;
            puStack_68 = puVar7;
        }
        if (*pcVar4 == '\b') {
            if (*(pcVar4 + 1) == 0x5353504c) {
                if (uVar3 < 0x11) {
                    pcVar4[8] = uVar3;
                    *(pcVar4 + 6) = (uVar8 & 0xfff4 | 4) << 4 | uVar8 & 0xf;
                    in_R8 = pcVar6 + (-0x213 - pcVar4);
                    if ((in_R8 != NULL) && (pcVar4 + uVar8 != pcVar4 + 0x213)) {
                        fcn.00010280(pcVar4 + uVar8,pcVar4 + 0x213,in_R8);
                        iVar10 = *0x11880;
                        uVar3 = *0x11878;
                    }
                    pcVar6 = pcVar6 + -(0x213 - uVar8);
                    pcStackX_20 = pcVar6;
                }
                else {
                    pcVar4[8] = '\x10';
                    pcVar4[6] = 'C';
                    pcVar4[7] = '!';
                }
                pcVar9 = pcVar4 + 9;
                if (uVar3 < 0x11) {
                    if (uVar3 != 0) {
                        do {
                            in_R8 = CONCAT71(in_R8 >> 8,uVar5 == 1);
                            fcn.00010f40(pcVar9,CONCAT11(*(iVar10 + 4 + uVar5 * 0x18) >> 8,uVar1) & 0xff01,in_R8);
                            pcVar9 = pcVar9 + 0x21;
                            uVar5 = uVar5 + 1;
                            pcVar6 = pcStackX_20;
                            puVar7 = puStack_68;
                        } while (uVar5 <= uVar3);
                    }
                }
                else {
                    uVar5 = 1;
                    do {
                        in_R8 = CONCAT71(in_R8 >> 8,uVar5 == 1);
                        fcn.00010f40(pcVar9,CONCAT11(*(iVar10 + 0x10 + uVar5 * 0x18) >> 8,uVar1) & 0xff01,in_R8);
                        pcVar9 = pcVar9 + 0x21;
                        uVar5 = uVar5 + 1;
                        pcVar6 = pcStackX_20;
                        puVar7 = puStack_68;
                    } while (uVar5 < 0x11);
                }
            }
            uVar5 = 1;
            if ((*pcVar4 == '\b') && (*(pcVar4 + 1) == 0x53535054)) {
                if (uVar3 < 0x29) {
                    pcVar4[8] = uVar3;
                    *(pcVar4 + 6) = (uVar8 & 0xfff4 | 4) << 4 | uVar8 & 0xf;
                    in_R8 = pcVar6 + (-0x52b - pcVar4);
                    if ((in_R8 != NULL) && (pcVar4 + uVar8 != pcVar4 + 0x52b)) {
                        fcn.00010280(pcVar4 + uVar8,pcVar4 + 0x52b,in_R8);
                        iVar10 = *0x11880;
                        uVar3 = *0x11878;
                    }
                    pcVar6 = pcVar6 + -(0x52b - uVar8);
                    pcStackX_20 = pcVar6;
                }
                pcVar9 = pcVar4 + 9;
                if (uVar3 != 0) {
                    do {
                        in_R8 = CONCAT71(in_R8 >> 8,uVar5 == 1);
                        fcn.00010f40(pcVar9,CONCAT11(*(iVar10 + 4 + uVar5 * 0x18) >> 8,uVar1) & 0xff01,in_R8);
                        pcVar9 = pcVar9 + 0x21;
                        uVar5 = uVar5 + 1;
                    } while (uVar5 <= uVar3);
                    pcVar6 = pcStackX_20;
                    puVar7 = puStack_68;
                }
            }
        }
        pcVar4 = pcVar4 + 1;
    }
    if (puVar7 == NULL) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar3 = pcVar6 - puVar7;
        *puVar7 = (uVar3 & 0xfff4 | 4) << 4 | uVar3 & 0xf;
        *(*0x118c8 + 4) = pcVar6 - *0x118c8;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000108c8 @ 0x108c8 */

ulong fcn.000108c8(int64_t arg1)

{
    uint32_t *arg2;
    int64_t iVar1;
    ulong uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t *puStackX_8;
    
    puVar3 = NULL;
    if ((arg1 == 0) || (*arg1 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar1 = (**(*0x11908 + 0x40))(0,*(*arg1 + 4),&puStackX_8);
        puVar4 = puStackX_8;
        if (iVar1 < 0) {
            puVar4 = puVar3;
        }
        if (puVar4 == NULL) {
            uVar2 = 0x8000000000000009;
        }
        else {
            arg2 = *arg1;
            puStackX_8 = puVar4;
            if ((arg2[1] != 0) && (puVar4 != arg2)) {
                fcn.00010280(puVar4,arg2,arg2[1]);
            }
            (**(*0x11908 + 0x48))(*arg1);
            *arg1 = puVar4;
            *(puVar4 + 9) = 0;
            arg1 = *arg1;
            puVar4 = puVar3;
            if (*(arg1 + 4) != 0) {
                do {
                    puVar4 = puVar4 + *(arg1 + puVar3);
                    puVar3 = puVar3 + 1;
                } while (puVar3 < *(arg1 + 4));
            }
            *(arg1 + 9) = -puVar4;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00010798 @ 0x10798 */

void fcn.00010798(void)

{
    uint uVar1;
    char *pcVar2;
    char *pcVar3;
    char *pcVar4;
    bool bVar5;
    bool bVar6;
    
    pcVar2 = *0x118e0;
    bVar5 = *0x118e0 < *0x118e0 + *(*0x118e0 + 4);
    bVar6 = *0x118e0 == *0x118e0 + *(*0x118e0 + 4);
    pcVar4 = *0x118e0;
    while( true ) {
        if (!bVar5 && !bVar6) {
            return;
        }
        if ((*pcVar4 == '\b') && (*(pcVar4 + 1) == 0x54445353)) {
            *(pcVar4 + 0x14) = *0x118c8;
            *(pcVar4 + 0x19) = *(CONCAT44(*0x118cc,*0x118c8) + 4);
            *(pcVar4 + 0x28) = *0x118b0;
            *(pcVar4 + 0x2d) = *(CONCAT44(*0x118b4,*0x118b0) + 4);
            *(pcVar4 + 0x3c) = *0x11870;
            *(pcVar4 + 0x41) = *(CONCAT44(*0x11874,*0x11870) + 4);
            *(pcVar4 + 0x50) = *0x118b8;
            *(pcVar4 + 0x55) = *(CONCAT44(*0x118bc,*0x118b8) + 4);
            if (*0x118d8 != 0) {
                *(pcVar4 + 100) = *0x118d8;
                *(pcVar4 + 0x69) = *(*0x118d8 + 4);
                if (*0x118a8 != 0) {
                    *(pcVar4 + 0x78) = *0x118a8;
                    *(pcVar4 + 0x7d) = *(*0x118a8 + 4);
                }
            }
            *(pcVar4 + 0xa0) = *0x118f8;
            *(pcVar4 + 0xa5) = *(CONCAT44(*0x118fc,*0x118f8) + 4);
            *(pcVar4 + 0xb4) = *0x118a0;
            *(pcVar4 + 0xb9) = *(CONCAT44(*0x118a4,*0x118a0) + 4);
        }
        if ((*pcVar4 == -0x80) && (*(pcVar4 + 1) == 0x53564e50)) break;
        pcVar4 = pcVar4 + 1;
        pcVar3 = pcVar2 + *(pcVar2 + 4);
        bVar5 = pcVar4 < pcVar3;
        bVar6 = pcVar4 == pcVar3;
    }
    uVar1 = **0x118e8;
    pcVar4[0xc] = -0x56;
    pcVar4[0xd] = '\0';
    *(pcVar4 + 7) = uVar1;
    return;
}


/* fcn.00010f40 @ 0x10f40 */

void fcn.00010f40(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int in_R9D;
    uint32_t in_stack_00000028;
    uint in_stack_00000030;
    uint8_t in_stack_00000038;
    uint8_t in_stack_00000040;
    
    if ((arg2 == '\0') || (arg3 == '\0')) {
        if (in_stack_00000028 < in_stack_00000040) {
            *(arg1 + 4) = ((in_stack_00000040 * 100) / in_stack_00000038 - 1) * in_stack_00000038;
            goto code_r0x00010f87;
        }
        iVar1 = in_stack_00000028 * 100;
    }
    else {
        iVar1 = in_R9D * 100 + 1;
    }
    *(arg1 + 4) = iVar1;
code_r0x00010f87:
    *(arg1 + 9) = in_stack_00000030;
    *(arg1 + 0xe) = 10;
    *(arg1 + 0x18) = in_stack_00000028 << 8;
    if (in_stack_00000028 < in_stack_00000040) {
        *(arg1 + 0x1d) = in_stack_00000040 << 8;
    }
    else {
        *(arg1 + 0x1d) = in_stack_00000028 << 8;
    }
    *(arg1 + 0x13) = 10;
    return;
}


/* fcn.000115a4 @ 0x115a4 */

ulong fcn.000115a4(ulong noname_0,int64_t arg1)

{
    char cVar1;
    uint32_t *arg2;
    uint16_t uVar2;
    ulong uVar3;
    ulong uStackX_10;
    uchar auStackX_18 [7];
    char cStackX_1f;
    
    uVar3 = 0;
    uVar2 = 0;
    do {
        uStackX_10 = rdmsr(0x150);
        arg2 = &uStackX_10;
        fcn.00010280(auStackX_18,arg2,8);
        cVar1 = cStackX_1f;
        fcn.00011770(1,arg2);
        uVar2 = uVar2 + 1;
        if (-1 < cVar1) {
            return 0;
        }
    } while (uVar2 < 1000);
    if (uVar2 == 1000) {
        uVar3 = 0x8000000000000012;
    }
    return uVar3;
}


/* fcn.00011770 @ 0x11770 */

int64_t fcn.00011770(int64_t arg1,int64_t arg2)

{
    fcn.00011710((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00011710 @ 0x11710 */

void fcn.00011710(int64_t arg1)

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
            fcn.00010320();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


