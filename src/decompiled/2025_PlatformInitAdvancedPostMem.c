// decompiled by r2ghidra: 2025_PlatformInitAdvancedPostMem.te
// functions: 153

/* entry0 @ 0x225 */

void __cdecl entry0(uint noname_0,int32_t arg_ch)

{
    char *pcVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint in_ECX;
    uint32_t uVar5;
    int iVar6;
    int32_t var_4h;
    
    fcn.00001b02(in_ECX,&var_4h,0);
    iVar3 = fcn.000052f5();
    if ((iVar3 != 0) && ((*(iVar3 + 0x18) & 1) != 0)) {
        uVar2 = *(iVar3 + 0x2c);
        uVar4 = 0;
        iVar6 = 0;
        uVar5 = 0;
        do {
            *(uVar5 + 0x6bc0) = 0;
            *(uVar5 + 0x6bc3) = uVar2 >> (uVar4 & 0x1f) & 7;
            pcVar1 = iVar3 + 0x30 + iVar6;
            iVar6 = iVar6 + 1;
            *(uVar5 + 0x6bc4) = *pcVar1 != '\0';
            uVar4 = uVar4 + 3;
            uVar5 = uVar5 + 5;
        } while (uVar5 < 0x14);
    }
    fcn.000018f3();
    return;
}


/* fcn.00001b02 @ 0x1b02 */

//WARNING: Removing unreachable block (ram,0x00001b25)

int __cdecl fcn.00001b02(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (in_ECX == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (in_ECX == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (in_ECX == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (in_ECX == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (in_ECX == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (in_ECX == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (in_ECX == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (in_ECX == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (in_ECX == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (in_ECX == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (in_ECX == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (in_ECX == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (in_ECX == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (in_ECX == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (in_ECX == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (in_ECX == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(in_ECX);
    }
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar3;
    }
    return in_ECX;
}


/* fcn.000052c2 @ 0x52c2 */

int fcn.000052c2(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.000052a1();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00005388();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000052f5 @ 0x52f5 */

int fcn.000052f5(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00005276();
    do {
        iVar2 = fcn.000052a1();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00005388();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00005276 @ 0x5276 */

int32_t fcn.00005276(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000018f3 @ 0x18f3 */

ulong __fastcall fcn.000018f3(uint param_1,int param_2)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    ushort extraout_var;
    int iStack_ccc;
    int iStack_cc6;
    uint uStack_cc0;
    uint *puStack_cbc;
    uchar auStack_cb8 [2136];
    char cStack_460;
    
    out(0x80,0x9600);
    fcn.000051ce(param_1,&puStack_cbc);
    uStack_cc0 = 0xca9;
    iVar2 = (**puStack_cbc)(puStack_cbc,0x7110,0x6a90,0,&uStack_cc0,auStack_cb8);
    if ((iVar2 < 0) || (cStack_460 == '\x01')) {
        fcn.00000d3e();
        fcn.00000f92();
    }
    fcn.000012ee();
    fcn.000013fd();
    fcn.00001542();
    iVar2 = fcn.00002af0();
    cVar1 = (**(iVar2 + 0x18))(0x5a);
    if (cVar1 != '\0') {
        fcn.00001667();
        fcn.000014c5();
    }
    fcn.0000185a();
    fcn.00002463();
    iStack_ccc = *(param_2 + 0x50) * 0x20 + *(param_2 + 0x38);
    piVar3 = fcn.00005324();
    if (piVar3 != &iStack_ccc) {
        section..text(piVar3,&iStack_ccc,4);
    }
    fcn.000051a5();
    InterruptDescriptorTableRegister();
    (**(**(iStack_cc6 + -4) + 0x24))(*(iStack_cc6 + -4),0x6b80);
    InterruptDescriptorTableRegister();
    uVar4 = (**(**(iStack_cc6 + -4) + 0x24))(*(iStack_cc6 + -4),0x6b98);
    out(0x80,0x967f);
    return CONCAT44(CONCAT22(extraout_var,0x80),uVar4);
}


/* fcn.00004f6b @ 0x4f6b */

void __cdecl fcn.00004f6b(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    var_18h = arg_8h;
    var_14h = arg_ch;
    var_10h = arg_10h;
    var_ch = arg_14h;
    arg_ch = 0x4000;
    fcn.000048a7(&arg_ch,&var_18h);
    return;
}


/* fcn.000048a7 @ 0x48a7 */

int32_t __cdecl fcn.000048a7(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int32_t iVar4;
    int32_t iVar5;
    int32_t iVar6;
    char cVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint32_t in_ECX;
    int32_t in_EDX;
    int iVar10;
    int *piVar11;
    uint32_t uVar12;
    int iVar13;
    bool bVar14;
    bool bVar15;
    int32_t var_f74h;
    int32_t var_d74h;
    int32_t var_d70h;
    int32_t var_d6ch;
    int32_t var_d68h;
    int32_t var_d64h;
    int32_t var_744h;
    int32_t var_73ch;
    int32_t var_444h;
    int32_t var_43ch;
    int32_t var_42ch;
    uint32_t var_144h;
    int32_t var_124h;
    int32_t var_120h;
    int32_t var_cch;
    int32_t var_c8h;
    int32_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    int32_t var_4ch;
    uint32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    uint32_t var_30h;
    int32_t var_28h;
    uint32_t var_24h;
    int32_t var_20h;
    uint32_t var_1ch;
    uint32_t var_18h;
    uint32_t var_10h;
    int32_t var_ch;
    uint32_t var_5h;
    
    var_28h = 0;
    var_48h = in_ECX;
    var_20h = in_EDX;
    fcn.00003227();
    fcn.00000100(&var_144h,0x20,0);
    var_24h = 0;
    var_5h._0_1_ = '\0';
    cVar7 = fcn.00004ff5();
    if (cVar7 == '\0') {
        return -0x7ffffffd;
    }
    var_4ch = 0;
    var_40h = arg_ch + 0x10;
    piVar11 = var_40h;
    do {
        var_30h = piVar11[-2];
        if (var_30h == 0 && piVar11[-1] == 0) {
            return -0x7ffffffe;
        }
        if ((~var_3ch & piVar11[-4]) != 0 || (~var_38h & piVar11[-3]) != 0) {
            return -0x7ffffffd;
        }
        var_10h = piVar11[-4] + var_30h;
        var_58h = piVar11[-3] + piVar11[-1] + CARRY4(piVar11[-4],var_30h);
        var_ch = ~var_38h & var_58h;
        if ((~var_3ch & var_10h) != 0 || var_ch != 0) {
            if (var_10h != var_1ch + 1) {
                return -0x7ffffffd;
            }
            if (var_58h != var_18h + (0xfffffffe < var_1ch)) {
                return -0x7ffffffd;
            }
        }
        if ((((*piVar11 != 0) && (*piVar11 != 1)) && (*piVar11 != 4)) && ((*piVar11 != 5 && (*piVar11 != 6)))) {
            return -0x7ffffffe;
        }
        if ((var_58h != 0) || (0x100000 < var_10h)) {
            var_5h._0_1_ = '\x01';
        }
        piVar11 = piVar11 + 6;
        var_4ch = var_4ch + 1;
    } while (var_4ch == 0);
    if (var_5h != '\0') {
        uVar2 = rdmsr(0xfe);
        var_30h = uVar2 >> 0x20;
        var_24h = uVar2 & 0xff;
        fcn.00002ef6(&var_f74h);
        fcn.00003180(var_1ch,var_18h,var_3ch);
        if (in_ECX == 0) {
            uVar2 = rdmsr(0x2ff);
            var_30h = uVar2 >> 0x20;
            uVar8 = uVar2;
        }
        else {
            var_30h = *(in_ECX + 0x25c);
            uVar8 = *(in_ECX + 600);
        }
        var_ch = 1;
        var_d64h = uVar8 & 7;
        var_d6ch = var_1ch + 1;
        var_d74h = 0;
        var_d68h = var_18h + (0xfffffffe < var_1ch);
        var_d70h = 0;
        var_58h = var_d64h;
        fcn.000042a3(&var_d74h,0x42,&var_ch);
        var_28h = fcn.000032bc(&var_ch,0,0,0x100000,0,0);
        var_4ch = 0;
        var_5h._0_1_ = '\0';
        do {
            in_ECX = var_48h;
            var_10h = *(var_40h + -4);
            iVar10 = *(var_40h + -0xc);
            uVar8 = *(var_40h + -0x10);
            uVar12 = *(var_40h + -8);
            if ((iVar10 == 0) && (uVar8 < 0x100000)) {
                var_30h = 0x100000 - uVar8;
                if ((-(0x100000 < uVar8) <= var_10h) && ((-(0x100000 < uVar8) < var_10h || (var_30h < uVar12)))) {
                    bVar14 = 0xfffff < uVar8;
                    bVar15 = CARRY4(uVar12,uVar8 - 0x100000);
                    uVar12 = uVar12 + (uVar8 - 0x100000);
                    uVar8 = 0x100000;
                    var_10h = var_10h + (bVar14 - 1) + bVar15;
                    iVar10 = 0;
                    goto code_r0x00004ae7;
                }
            }
            else {
code_r0x00004ae7:
                var_28h = fcn.000032bc(&var_ch,uVar8,iVar10,uVar12,var_10h,*var_40h);
                if (var_28h == -0x7fffffec) {
                    var_28h = 0;
                }
                else {
                    if (var_28h == -0x7ffffff7) {
                        return -0x7ffffff7;
                    }
                    var_5h._0_1_ = '\x01';
                }
            }
            var_4ch = var_4ch + 1;
            var_40h = var_40h + 0x18;
        } while (var_4ch == 0);
        if (var_5h != '\0') {
            var_30h = fcn.00006494(var_1ch,var_18h);
            var_18h = 0;
            var_1ch = 1;
            bVar14 = (var_30h & 0x20) == 0;
            var_28h = fcn.00004510(bVar14 << (var_30h & 0x1f),
                                   !bVar14 << (var_30h & 0x1f) | bVar14 >> 0x20 - (var_30h & 0x1f),var_ch,var_20h,
                                   arg_8h,&var_444h,var_24h + 1,&var_60h);
            if (var_28h < 0) {
                return var_28h;
            }
            uVar8 = 0;
            if (var_60h != 0) {
                piVar11 = &var_43ch;
                do {
                    if (((piVar11[-2] == 0 && piVar11[-1] == 0) && (*piVar11 == 0x100000)) && (piVar11[1] == 0)) {
                        var_60h = var_60h + -1;
                        iVar10 = (var_60h - uVar8) * 0x18;
                        if (iVar10 != 0) {
                            fcn.00005348(iVar10);
                        }
                        break;
                    }
                    uVar8 = uVar8 + 1;
                    piVar11 = piVar11 + 6;
                } while (uVar8 < var_60h);
            }
            if (var_24h < var_60h) {
                return -0x7ffffff7;
            }
            fcn.000043eb(&var_444h,var_60h,&var_144h);
        }
    }
    fcn.000000e0(&var_124h,0x58);
    fcn.000000e0(&var_cch,0x58);
    if ((*(arg_ch + 4) == 0) && (*arg_ch < 0x100000)) {
        var_4ch = -1;
        var_20h = *(arg_ch + 0x10);
        var_1ch = *arg_ch;
        var_34h = *(arg_ch + 8);
        var_30h = *(arg_ch + 0xc);
        var_18h = *(arg_ch + 4);
        while (var_34h != 0 || var_30h != 0) {
            var_28h = fcn.00002f6f(&var_34h,&var_4ch,&var_5ch,&var_44h);
            iVar6 = var_4ch;
            iVar5 = var_58h;
            iVar4 = var_5ch;
            if (var_28h < 0) {
                return var_28h;
            }
            (&var_124h)[var_4ch * 2] = (&var_124h)[var_4ch * 2] | var_5ch;
            (&var_120h)[iVar6 * 2] = (&var_120h)[iVar6 * 2] | iVar5;
            uVar8 = ~iVar5 & (&var_c8h)[iVar6 * 2] | var_40h;
            bVar14 = var_18h != 0;
            (&var_cch)[iVar6 * 2] = ~iVar4 & (&var_cch)[iVar6 * 2] | var_44h;
            (&var_c8h)[iVar6 * 2] = uVar8;
            if ((bVar14) || (0xfffff < var_1ch)) break;
        }
        var_28h = 0;
    }
    var_5h._0_1_ = '\0';
    iVar10 = in_ECX - &var_cch;
    iVar13 = 0;
    uVar8 = 0;
    do {
        uVar12 = *(&var_120h + iVar13);
        if (*(&var_124h + iVar13) != 0 || uVar12 != 0) {
            if (var_48h == 0) {
                if (var_5h == '\0') {
                    fcn.00002e17();
                    var_5h._0_1_ = '\x01';
                }
                fcn.0000645b(~*(&var_124h + iVar13),~*(&var_120h + iVar13),*(&var_cch + iVar13),*(&var_c8h + iVar13))
                ;
            }
            else {
                puVar9 = &var_cch + iVar13;
                uVar1 = *(&var_c8h + iVar13);
                *(iVar10 + puVar9) = ~*(&var_124h + iVar13) & *(iVar10 + puVar9) | *puVar9;
                *(iVar10 + 4 + puVar9) = ~uVar12 & *(iVar10 + 4 + puVar9) | uVar1;
            }
        }
        uVar8 = uVar8 + 0xc;
        iVar13 = iVar13 + 8;
    } while (uVar8 < 0x84);
    var_40h = 0;
    if (var_24h != 0) {
        piVar11 = &var_73ch;
        var_10h = var_48h + 0x58;
        var_ch = 0x201;
        uVar8 = var_24h;
        do {
            if (*(&var_144h + var_40h) != '\0') {
                iVar10 = *piVar11;
                if (iVar10 == 0 && piVar11[1] == 0) {
                    var_74h = 0;
                    var_70h = 0;
                    var_6ch = 0;
                    var_68h = 0;
                }
                else {
                    var_70h = piVar11[-1] & var_38h;
                    var_74h = piVar11[-2] & var_3ch | *(piVar11 + 2);
                    var_6ch = ~(iVar10 - 1U) & var_3ch | 0x800;
                    var_68h = ~(piVar11[1] + -1 + (iVar10 != 0)) & var_38h;
                }
                if (var_48h == 0) {
                    if (var_5h == '\0') {
                        fcn.00002e17();
                        var_5h._0_1_ = '\x01';
                    }
                    var_18h = var_70h;
                    var_1ch = var_74h;
                    wrmsr(var_ch + -1,CONCAT44(var_70h,var_74h));
                    var_34h = var_6ch;
                    var_30h = var_68h;
                    var_20h = var_ch;
                    wrmsr(var_ch,CONCAT44(var_68h,var_6ch));
                }
                else if (var_10h != &var_74h) {
                    section..text(var_10h,&var_74h,0x10);
                }
                uVar8 = var_24h;
            }
            var_40h = var_40h + 1;
            var_10h = var_10h + 0x10;
            piVar11 = piVar11 + 6;
            var_ch = var_ch + 2;
        } while (var_40h < uVar8);
    }
    iVar4 = var_28h;
    if (var_48h == 0) {
        if (var_5h != '\0') {
            uVar3 = rdmsr(0x2ff);
            var_38h = uVar3 >> 0x20;
            var_3ch = uVar3 | 0xc00;
            wrmsr(0x2ff,uVar3 | 0xc00);
            fcn.00002e82();
        }
    }
    else {
        *(var_48h + 600) = *(var_48h + 600) | 0xc00;
    }
    return iVar4;
}


/* fcn.000051ce @ 0x51ce */

void __cdecl fcn.000051ce(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 26653 named .text
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.00005987 @ 0x5987 */

uint __cdecl fcn.00005987(int32_t arg_8h)

{
    int iVar1;
    int *in_ECX;
    int *in_EDX;
    int32_t var_2ch;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    fcn.000051ce(in_ECX,&var_8h);
    iVar1 = fcn.000052f5();
    if ((((iVar1 != 0) && (iVar1 = (**(var_8h + 8))(var_8h,&arg_8h,*(iVar1 + 0x18) + 8,&var_4h), -1 < iVar1)) &&
        (var_4h != 0)) && (iVar1 = (**(var_8h + 0x14))(var_8h,0x19,var_4h,&var_ch), -1 < iVar1)) {
        (**(var_8h + 0xc))(var_8h,var_4h,&var_2ch);
        if (*var_14h == 0xffffff) {
            *in_EDX = *(var_14h + 4) + -8;
            iVar1 = var_14h + 8;
        }
        else {
            *in_EDX = *var_14h - 4;
            iVar1 = var_14h + 4;
        }
        *in_ECX = iVar1;
        return 0;
    }
    return 0x8000000e;
}


/* fcn.00002af0 @ 0x2af0 */

int32_t __fastcall fcn.00002af0(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000051ce(param_1,&var_4h);
    return var_4h;
}


/* fcn.00005388 @ 0x5388 */

uint32_t __fastcall fcn.00005388(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00004fb1 @ 0x4fb1 */

int __fastcall fcn.00004fb1(int param_1)

{
    ulong uVar1;
    char cVar2;
    
    cVar2 = fcn.00004ff5();
    if (cVar2 != '\0') {
        fcn.00002ec2();
        rdmsr(0xfe);
        fcn.00002ef6(param_1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(param_1 + 600) = uVar1;
        *(param_1 + 0x25c) = uVar1 >> 0x20;
    }
    return param_1;
}


/* fcn.00004ff5 @ 0x4ff5 */

uint32_t __fastcall fcn.00004ff5(int32_t param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    uVar2 = fcn.00001b02(param_1,0,&var_4h);
    if ((var_4h & 0x1000U) == 0) {
        uVar2 = uVar2 & 0xffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT31(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.00002ec2 @ 0x2ec2 */

uint * __fastcall fcn.00002ec2(uint *param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint *puVar3;
    
    uVar2 = 0;
    puVar3 = param_1;
    do {
        uVar1 = rdmsr(*(uVar2 + 0x7130));
        uVar2 = uVar2 + 0xc;
        *puVar3 = uVar1;
        puVar3[1] = uVar1 >> 0x20;
        puVar3 = puVar3 + 2;
    } while (uVar2 < 0x84);
    return param_1;
}


/* fcn.00002ef6 @ 0x2ef6 */

uint * __fastcall fcn.00002ef6(int param_1,int param_2,uint *param_3)

{
    ulong uVar1;
    int iVar2;
    uint *puVar3;
    uint *puVar4;
    
    if (param_2 != 0) {
        iVar2 = 0x201;
        puVar4 = param_1 + 0x60;
        puVar3 = param_3;
        do {
            if (param_1 == 0) {
                uVar1 = rdmsr(iVar2 + -1);
                *puVar3 = uVar1;
                puVar3[1] = uVar1 >> 0x20;
                uVar1 = rdmsr(iVar2);
                puVar3[2] = uVar1;
                puVar3[3] = uVar1 >> 0x20;
            }
            else {
                *puVar3 = puVar4[-2];
                puVar3[1] = puVar4[-1];
                puVar3[2] = *puVar4;
                puVar3[3] = puVar4[1];
            }
            iVar2 = iVar2 + 2;
            puVar4 = puVar4 + 4;
            puVar3 = puVar3 + 4;
            param_2 = param_2 + -1;
        } while (param_2 != 0);
    }
    return param_3;
}


/* fcn.00003227 @ 0x3227 */

void __fastcall fcn.00003227(uint32_t *param_1,uint32_t *param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    fcn.00001b02(param_1,0,0);
    if (var_8h < 0x80000008) {
        var_4h = var_4h & 0xffffff24U | 0x24;
    }
    else {
        fcn.00001b02(0x80000008,0,0);
    }
    var_ch._0_1_ = var_4h;
    bVar4 = (var_4h & 0x20U) == 0;
    iVar1 = bVar4 << (var_ch & 0x1f);
    uVar2 = iVar1 - 1;
    *param_1 = uVar2;
    uVar3 = ((!bVar4 << (var_ch & 0x1f) | bVar4 >> 0x20 - (var_ch & 0x1f)) - 1) + (iVar1 != 0);
    *param_2 = uVar2 & 0xfffff000;
    param_2[1] = uVar3;
    param_1[1] = uVar3;
    return;
}


/* fcn.00003180 @ 0x3180 */

int __cdecl fcn.00003180(uint32_t noname_0,uint32_t noname_1,int32_t arg_10h)

{
    uint32_t uVar1;
    uint32_t *in_ECX;
    uint32_t uVar2;
    int in_EDX;
    uint32_t *puVar3;
    int iVar4;
    uint32_t in_stack_00000010;
    int in_stack_00000014;
    
    fcn.000000e0();
    iVar4 = 0;
    if (in_EDX != 0) {
        puVar3 = in_stack_00000014 + 0x10;
        do {
            if ((in_ECX[2] & 0x800) != 0) {
                uVar1 = in_ECX[1];
                puVar3[-4] = *in_ECX & arg_10h;
                puVar3[-3] = uVar1 & in_stack_00000010;
                uVar1 = in_ECX[3];
                uVar2 = ~(in_ECX[2] & arg_10h) & noname_0;
                puVar3[-2] = uVar2 + 1;
                iVar4 = iVar4 + 1;
                puVar3[-1] = (~(uVar1 & in_stack_00000010) & noname_1) + (0xfffffffe < uVar2);
                *puVar3 = *in_ECX;
            }
            in_ECX = in_ECX + 4;
            puVar3 = puVar3 + 6;
            in_EDX = in_EDX + -1;
        } while (in_EDX != 0);
    }
    return iVar4;
}


/* fcn.000042a3 @ 0x42a3 */

uint __fastcall fcn.000042a3(int param_1,uint32_t param_2,uint param_3,uint param_4,uint param_5)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int *piVar4;
    
    uVar2 = 0;
    uVar3 = 0;
    if (param_2 != 0) {
        piVar4 = param_1 + 8;
        do {
            if (((*piVar4 != 0 || piVar4[1] != 0) && (piVar4[2] == 6)) &&
               (iVar1 = fcn.000032bc(param_5,piVar4[-2],piVar4[-1],*piVar4,piVar4[1],piVar4[2]),
               iVar1 == -0x7ffffff7)) {
                return 0x80000009;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 6;
        } while (uVar3 < param_2);
    }
    uVar3 = 0;
    if (param_2 != 0) {
        piVar4 = param_1 + 0x10;
        do {
            if (((piVar4[-2] != 0 || piVar4[-1] != 0) && (*piVar4 != 6)) &&
               ((*piVar4 != 0 &&
                (iVar1 = fcn.000032bc(param_5,piVar4[-4],piVar4[-3],piVar4[-2],piVar4[-1],*piVar4),
                iVar1 == -0x7ffffff7)))) {
                return 0x80000009;
            }
            uVar3 = uVar3 + 1;
            piVar4 = piVar4 + 6;
        } while (uVar3 < param_2);
        if (param_2 != 0) {
            piVar4 = param_1 + 8;
            do {
                if (((*piVar4 != 0 || piVar4[1] != 0) && (piVar4[2] == 0)) &&
                   (iVar1 = fcn.000032bc(param_5,piVar4[-2],piVar4[-1],*piVar4,piVar4[1],piVar4[2]),
                   iVar1 == -0x7ffffff7)) {
                    return 0x80000009;
                }
                uVar2 = uVar2 + 1;
                piVar4 = piVar4 + 6;
            } while (uVar2 < param_2);
        }
    }
    return 0;
}


/* fcn.000000e0 @ 0xe0 */

uint * fcn.000000e0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return param_1;
}


/* fcn.0000029b @ 0x29b */

int __cdecl fcn.0000029b(uint32_t arg_8h)

{
    int iVar1;
    int in_EDX;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar4 = 0;
    iVar1 = -0x7ffffff2;
    var_4h = 0xff;
    if (arg_8h != 0) {
        puVar2 = in_EDX + 8;
        do {
            if ((puVar2[-1] == 0) && (puVar2[-2] < 0x100000)) {
                uVar3 = *puVar2;
                *puVar2 = *puVar2 - 0x100000;
                puVar2[-2] = 0x100000;
                puVar2[1] = (puVar2[1] - 1) + (0xfffff < uVar3);
                puVar2[-1] = 0;
            }
            if ((puVar2[-1] == 0) || (puVar2[2] != 6)) {
                iVar1 = fcn.00004f6b(puVar2[-2],puVar2[-1],*puVar2,puVar2[1]);
            }
            else {
                var_4h = uVar4;
            }
            uVar4 = uVar4 + 1;
            puVar2 = puVar2 + 6;
        } while (uVar4 < arg_8h);
        if (var_4h != 0xff) {
            iVar1 = var_4h * 0x18;
            uVar4 = *(iVar1 + 8 + in_EDX);
            uVar3 = uVar4 + *(iVar1 + in_EDX);
            uVar4 = *(iVar1 + 0xc + in_EDX) + *(iVar1 + 4 + in_EDX) + CARRY4(uVar4,*(iVar1 + in_EDX));
            var_10h = uVar3;
            var_ch = uVar4;
            do {
                iVar1 = fcn.00004f6b(0,1,uVar3,uVar4 - 1);
                if ((uVar4 != 0) && ((1 < uVar4 || (uVar3 != 0)))) {
                    uVar3 = var_10h >> 1 | var_ch << 0x1f;
                    uVar4 = var_ch >> 1;
                    var_10h = uVar3;
                    var_ch = uVar4;
                }
            } while ((iVar1 != 0) && ((1 < uVar4 || ((uVar4 != 0 && (uVar3 != 0))))));
        }
    }
    return iVar1;
}


/* fcn.000051fb @ 0x51fb */

void __fastcall fcn.000051fb(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x28))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00005131 @ 0x5131 */

uint __cdecl fcn.00005131(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00005168 @ 0x5168 */

void __cdecl fcn.00005168(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.000050b2 @ 0x50b2 */

void fcn.000050b2(int32_t param_1,int32_t param_2)

{
    fcn.00005037(param_1,param_2);
    fcn.00005072(param_1,param_2);
    return;
}


/* fcn.00005037 @ 0x5037 */

ushort __cdecl fcn.00005037(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00005072 @ 0x5072 */

uint __cdecl fcn.00005072(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.00002df3 @ 0x2df3 */

uint32_t __fastcall fcn.00002df3(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00002d47(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0xe;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 10;
}


/* fcn.00002d47 @ 0x2d47 */

char fcn.00002d47(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0x6bb0 == -1) {
        uVar1 = fcn.00002d36();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0x6bb0 = cVar2;
    }
    return *0x6bb0;
}


/* fcn.000050db @ 0x50db */

void fcn.000050db(int32_t param_1,int32_t param_2)

{
    fcn.00005037(param_1,param_2);
    fcn.00005072(param_1,param_2);
    return;
}


/* fcn.00002189 @ 0x2189 */

uint __fastcall fcn.00002189(uint param_1,uint param_2)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00005f15();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        cVar1 = fcn.00005ef5();
        if (cVar1 == '\0') {
            uVar2 = 0x80000003;
        }
        else {
            fcn.00005f86(0xfffffffe,param_2);
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.0000543f @ 0x543f */

uint32_t __fastcall fcn.0000543f(uint32_t param_1)

{
    int32_t var_8h;
    int var_4h;
    
    fcn.00001b3e(param_1 * 0x369e99,param_1 * 0x369e99 >> 0x20);
    fcn.000053f6();
    return param_1;
}


/* fcn.00001b3e @ 0x1b3e */

ulong __cdecl fcn.00001b3e(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch / 1000000,(arg_ch % 1000000 << 0x20 | arg_8h) / 1000000);
}


/* fcn.000053f6 @ 0x53f6 */

void __fastcall fcn.000053f6(uint32_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    
    uVar5 = param_1 & 0x3fffff;
    uVar4 = param_1 >> 0x16;
    do {
        uVar1 = in(0x1808);
        iVar3 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        do {
            iVar2 = in(0x1808);
        } while ((iVar3 - iVar2 & 0x800000U) == 0);
        bVar6 = uVar4 != 0;
        uVar4 = uVar4 - 1;
    } while (bVar6);
    return;
}


/* fcn.00005220 @ 0x5220 */

void __cdecl fcn.00005220(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00002b28 @ 0x2b28 */

void fcn.00002b28(void)

{
    int iVar1;
    
    iVar1 = fcn.00002b0c();
    (**(iVar1 + 0x10))(0x6b00,0x30006);
    return;
}


/* fcn.00002b0c @ 0x2b0c */

int32_t __fastcall fcn.00002b0c(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.000051ce(param_1,&var_4h);
    return var_4h;
}


/* fcn.000004b8 @ 0x4b8 */

uint fcn.000004b8(void)

{
    int *piVar1;
    ulong uVar2;
    int16_t *piVar3;
    char cVar4;
    uint uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint32_t arg_8h;
    uint32_t uVar10;
    bool bVar11;
    ushort *puStack_ae4;
    uint32_t uStack_ae0;
    ushort uStack_adc;
    ushort uStack_ada;
    ushort uStack_ad8;
    ushort uStack_ad6;
    int16_t *piStack_ad0;
    int32_t iStack_acc;
    uint uStack_ac8;
    uint32_t auStack_ac4 [4];
    uint32_t uStack_ab4;
    uchar auStack_76c [512];
    uint32_t uStack_56c;
    uint uStack_568;
    uchar auStack_564 [88];
    uchar auStack_50c [512];
    uint32_t uStack_30c;
    uint uStack_308;
    
    uVar8 = 0;
    puStack_ae4 = &uStack_adc;
    uStack_ae0 = 0;
    uVar7 = 0;
    uVar10 = 0;
    uVar5 = InterruptDescriptorTableRegister();
    uStack_ada = uVar5 >> 0x10;
    uStack_adc = uVar5;
    piVar1 = *(CONCAT22(uStack_ad8,uStack_ada) + -4);
    (**(*piVar1 + 0x30))(piVar1,&piStack_ad0);
    do {
        piVar3 = piStack_ad0;
        if (*piStack_ad0 == -1) {
code_r0x0000056f:
            fcn.00004fb1();
            cVar4 = fcn.00004ff5();
            if (cVar4 != '\0') {
                uVar2 = rdmsr(0xfe);
                uStack_ac8 = uVar2 >> 0x20;
            }
            fcn.00003227();
            auStack_ac4[0] = 0;
            auStack_ac4[1] = 0;
            auStack_ac4[2] = CONCAT22(uStack_ada,uStack_adc) + 1;
            auStack_ac4[3] = CONCAT22(uStack_ad6,uStack_ad8) + (0xfffffffe < CONCAT22(uStack_ada,uStack_adc));
            puStack_ae4 = 0x1;
            uStack_ab4 = uStack_56c & 7;
            fcn.00003180(CONCAT22(uStack_ada,uStack_adc),CONCAT22(uStack_ad6,uStack_ad8),iStack_acc);
            fcn.000042a3(auStack_ac4,0x20,&puStack_ae4);
            arg_8h = puStack_ae4 + 1;
            auStack_ac4[puStack_ae4 * 6] = uVar10;
            auStack_ac4[puStack_ae4 * 6 + 1] = uVar7;
            auStack_ac4[puStack_ae4 * 6 + 2] = uVar8;
            auStack_ac4[puStack_ae4 * 6 + 3] = uStack_ae0;
            auStack_ac4[puStack_ae4 * 6 + 4] = 6;
            fcn.000000e0(auStack_564);
            uStack_30c = uStack_56c;
            uStack_308 = uStack_568;
            uVar5 = fcn.0000029b(arg_8h);
            section..text(auStack_76c,auStack_50c,0x200);
            return uVar5;
        }
        if ((*piStack_ad0 == 4) && (cVar4 = fcn.00005388(), cVar4 != '\0')) {
            iVar6 = *(piVar3 + 0xc);
            if (iVar6 != 0) {
                puVar9 = piVar3 + 0x14;
                do {
                    if ((puVar9[-1] != 0) || (0x100000 < puVar9[-2])) {
                        bVar11 = CARRY4(uVar8,puVar9[2]);
                        uVar8 = uVar8 + puVar9[2];
                        uStack_ae0 = uStack_ae0 + puVar9[3] + bVar11;
                        if ((uVar10 == 0 && uVar7 == 0) ||
                           ((puVar9[1] <= uVar7 && ((puVar9[1] < uVar7 || (*puVar9 < uVar10)))))) {
                            uVar10 = *puVar9;
                            uVar7 = puVar9[1];
                        }
                    }
                    puVar9 = puVar9 + 8;
                    iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
            }
            goto code_r0x0000056f;
        }
        piStack_ad0 = piVar3 + piVar3[1];
    } while( true );
}


/* fcn.00005476 @ 0x5476 */

void __fastcall fcn.00005476(int param_1,uint param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    int iVar3;
    char *pcVar4;
    char *pcVar5;
    char cVar6;
    uint *puVar7;
    uint *puVar8;
    
    iVar3 = fcn.000051fb();
    if (iVar3 < 0) {
        cVar6 = '\0';
    }
    else if (param_1 == 0x11) {
        cVar6 = '\x02';
    }
    else {
        cVar6 = ((param_1 != 5) - 1U & 3) + 1;
    }
    puVar2 = 0x6be0;
    puVar8 = 0x6be0;
    while( true ) {
        puVar7 = puVar2;
        pcVar5 = 0x71b4;
        for (pcVar4 = puVar8[2]; (*pcVar4 != '\0' && (*pcVar4 == *pcVar5)); pcVar4 = pcVar4 + 1) {
            pcVar5 = pcVar5 + 1;
        }
        if (*pcVar4 == *pcVar5) break;
        if ((((*puVar7 != NULL) && (uVar1 = puVar7[1], uVar1 != 0)) &&
            ((((cVar6 == '\x02' && ((uVar1 & 2) != 0)) || ((cVar6 == '\x04' && ((uVar1 & 4) != 0)))) ||
             ((cVar6 == '\x01' && ((uVar1 & 1) != 0)))))) && (iVar3 = (**puVar7)(param_2), iVar3 < 0)) {
            return;
        }
        puVar2 = puVar7 + 3;
        puVar8 = puVar7;
    }
    return;
}


/* fcn.00000801 @ 0x801 */

void __fastcall fcn.00000801(uint param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint uStack_584;
    uint *puStack_580;
    uchar auStack_57c [52];
    uint8_t uStack_548;
    char cStack_4fe;
    
    iVar1 = fcn.000051ce(param_1,&puStack_580);
    if (-1 < iVar1) {
        iVar1 = fcn.000052f5();
        if ((iVar1 != 0) && ((*(iVar1 + 0x18) & 2) != 0)) {
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x3c))(0x176,2);
        }
        uVar2 = fcn.00005131(0xbc,0);
        uVar2 = uVar2 & 0xfff00000;
        iVar1 = fcn.00002af0();
        uVar3 = (**(iVar1 + 0xc))(0x171);
        if (uVar3 == 0) {
            uVar3 = 0xc0000000;
        }
        if (uVar3 - uVar2 != 0 || uVar3 < uVar2) {
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x44))(0x170,uVar2);
            iVar4 = (uVar3 - uVar2) + -1 + uVar2;
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x44))(0x171,iVar4);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x44))(0x174,uVar2);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x44))(0x175,iVar4);
        }
        uStack_584 = 0x578;
        iVar1 = (**puStack_580)(puStack_580,0x7100,0x6b40,0,&uStack_584,auStack_57c);
        if ((-1 < iVar1) && ((cStack_4fe == '\x01' || (2 < uStack_548)))) {
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x48))(0x16e,0,0x40);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x48))(0x16f,0xffffffff,0x7f);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x48))(0x172,0,0x40);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x48))(0x173,0xffffffff,0x7f);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x10))(0x16e);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0x10))(0x16f);
        }
    }
    return;
}


/* fcn.00001a21 @ 0x1a21 */

uint32_t __fastcall fcn.00001a21(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00001b02(param_1,0,0);
    return param_1 & 0xfff0ff0;
}


/* fcn.00005936 @ 0x5936 */

uint fcn.00005936(void)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint extraout_var;
    
    iVar2 = fcn.00005037(0xa3000,0);
    if (iVar2 == -1) {
        cVar1 = fcn.00002da1(extraout_var);
        if (cVar1 == '\0') {
            fcn.00002d85();
        }
        uVar3 = fcn.00005f50();
        if ((uVar3 & 0x800) != 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.000006af @ 0x6af */

void fcn.000006af(void)

{
    bool bVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uint noname_0;
    int iStack_cbc;
    uint uStack_cb8;
    uint *puStack_cb4;
    uchar auStack_cb0 [2997];
    int16_t iStack_fb;
    
    bVar1 = false;
    iVar3 = fcn.00002af0();
    (**(iVar3 + 0xc))(0x29);
    fcn.000051fb();
    if ((iStack_cbc == 0x11) || (iStack_cbc == 5)) {
        iVar3 = fcn.000051ce(noname_0,&puStack_cb4);
        if (-1 < iVar3) {
            uStack_cb8 = 0xca9;
            iVar3 = (**puStack_cb4)(puStack_cb4,0x7110,0x6a90,0,&uStack_cb8,auStack_cb0);
            if ((-1 < iVar3) && (iStack_fb != 0)) {
                iVar3 = fcn.00005131(0xa0000,0);
                if (iVar3 != -1) {
                    fcn.00005168(0xa0010,0);
                    fcn.00005168(0xa0014,0);
                    fcn.000050b2(0xa0004,0);
                    cVar2 = fcn.00002df3();
                    uVar4 = *((cVar2 - 1) * 0x10 + -0x19ffb80) & 3;
                    if ((uVar4 != 3) && (uVar4 == 1)) {
                        bVar1 = true;
                    }
                    fcn.000050db(0xa0004,0);
                    fcn.00005168(0xa0010,0);
                    fcn.00005168(0xa0014,0);
                    if (bVar1) {
                        fcn.00002189();
                        fcn.0000543f();
                        fcn.00002189();
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0000096a @ 0x96a */

void fcn.0000096a(void)

{
    uchar uVar1;
    ushort uVar2;
    int iVar3;
    uint uVar4;
    ulong uVar5;
    int32_t var_4h;
    
    fcn.00005220(&var_4h);
    *(var_4h + 8) = *0x70e0;
    *(var_4h + 0xc) = *0x70e4;
    *(var_4h + 0x10) = *0x70e8;
    *(var_4h + 0x14) = *0x70ec;
    iVar3 = fcn.00002af0();
    uVar2 = (**(iVar3 + 8))(0x1d);
    *(var_4h + 0x18) = uVar2;
    iVar3 = fcn.00002af0();
    uVar4 = (**(iVar3 + 0xc))(0x46);
    *(var_4h + 0x1c) = uVar4;
    iVar3 = fcn.00002af0();
    uVar4 = (**(iVar3 + 0xc))(0x41);
    *(var_4h + 0x20) = uVar4;
    iVar3 = fcn.00002af0();
    uVar5 = (**(iVar3 + 0x10))(0x16e);
    *(var_4h + 0x28) = uVar5;
    iVar3 = fcn.00002af0();
    uVar5 = (**(iVar3 + 0x10))(0x16f);
    *(var_4h + 0x30) = uVar5;
    iVar3 = fcn.00002af0();
    uVar5 = (**(iVar3 + 0x10))(0x172);
    *(var_4h + 0x38) = uVar5;
    iVar3 = fcn.00002af0();
    uVar5 = (**(iVar3 + 0x10))(0x173);
    *(var_4h + 0x40) = uVar5;
    *(var_4h + 0x48) = 2;
    iVar3 = fcn.00002af0();
    uVar1 = (**(iVar3 + 4))(0x16d);
    *(var_4h + 0x5c) = uVar1;
    iVar3 = fcn.00002af0();
    uVar4 = (**(iVar3 + 0xc))(0x170);
    *(var_4h + 0x4c) = uVar4;
    iVar3 = fcn.00002af0();
    uVar4 = (**(iVar3 + 0xc))(0x171);
    *(var_4h + 0x50) = uVar4;
    iVar3 = fcn.00002af0();
    uVar4 = (**(iVar3 + 0xc))(0x174);
    *(var_4h + 0x54) = uVar4;
    iVar3 = fcn.00002af0();
    uVar4 = (**(iVar3 + 0xc))(0x175);
    *(var_4h + 0x58) = uVar4;
    iVar3 = fcn.00002af0();
    uVar1 = (**(iVar3 + 4))(0x54);
    *(var_4h + 0x5d) = uVar1;
    uVar5 = fcn.00002b28();
    *(var_4h + 0x60) = uVar5;
    iVar3 = fcn.00002b0c();
    uVar4 = (**(iVar3 + 0xc))(0x6a40,2);
    *(var_4h + 0x68) = uVar4;
    return;
}


/* fcn.00001a7e @ 0x1a7e */

//WARNING: Removing unreachable block (ram,0x00001ae1)

int __fastcall fcn.00001a7e(int32_t *param_1)

{
    int iVar1;
    uint extraout_ECX;
    int32_t var_28h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_8h;
    int32_t var_4h;
    
    if (param_1 == NULL) {
        iVar1 = -0x7ffffffe;
    }
    else {
        fcn.000000e0(&var_28h,0x10);
        fcn.000000e0(&var_18h,0x10);
        iVar1 = fcn.00005c2a(1,extraout_ECX,&var_28h,&var_18h);
        if (-1 < iVar1) {
            *param_1 = var_18h;
            param_1[1] = var_14h;
        }
    }
    return iVar1;
}


/* fcn.000053e2 @ 0x53e2 */

//WARNING: Removing unreachable block (ram,0x00005362)

uint fcn.000053e2(void)

{
    uint uVar1;
    int iVar2;
    
    iVar2 = fcn.000053ac();
    if (iVar2 != 0) {
        uVar1 = fcn.000000e0(iVar2,0x10);
        return uVar1;
    }
    return 0;
}


/* fcn.000053ac @ 0x53ac */

int32_t fcn.000053ac(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),0x10,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000bb0 @ 0xbb0 */

uint32_t __fastcall fcn.00000bb0(uint32_t *param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar1 = *param_1;
    uVar2 = uVar1 >> 2 & 3;
    if (uVar2 == 0) {
        if ((uVar1 & 0xfff0) == 0) {
            uVar1 = 0x300;
        }
        else {
            uVar1 = uVar1 >> 4 & 0xfff;
        }
        uVar1 = uVar1 << 0x10 | *(param_1 + 2);
    }
    else {
        if (uVar2 != 1) {
            return 0;
        }
        uVar1 = *(*(param_1 + 6) + 0xfe600000 + param_2 * 4);
    }
    return uVar1 & 0xffff | (uVar1 >> 0x10) << 0x12;
}


/* fcn.0000524b @ 0x524b */

void __cdecl fcn.0000524b(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00005324 @ 0x5324 */

int fcn.00005324(void)

{
    int iVar1;
    
    iVar1 = fcn.00005307();
    if (iVar1 != 0) {
        fcn.0000536f();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00005307 @ 0x5307 */

int32_t fcn.00005307(void)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.00005220(&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.0000536f @ 0x536f */

uint * __fastcall fcn.0000536f(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000c79 @ 0xc79 */

uint8_t __fastcall fcn.00000c79(uint8_t *param_1)

{
    int iVar1;
    int32_t var_cb4h;
    int8_t var_459h;
    int32_t var_8h;
    int32_t var_4h;
    
    if ((((param_1 != NULL) && ((*param_1 & 0xc) == 4)) && ((*param_1 & 0x80) != 0)) &&
       (iVar1 = fcn.000051ce(param_1,&var_8h), -1 < iVar1)) {
        var_4h = 0xca9;
        iVar1 = (**var_8h)(var_8h,0x7110,0x6a90,0,&var_4h,&var_cb4h);
        return (iVar1 < 0) - 1U & var_459h;
    }
    return 0;
}


/* fcn.00005c2a @ 0x5c2a */

int __thiscall fcn.00005c2a(uint32_t *param_1,uint8_t param_2,uint param_3,uint32_t *param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    int iVar2;
    
    param_1[0x20] = *param_4;
    param_1[0x21] = param_4[1];
    param_1[0x22] = param_4[2];
    param_1[0x23] = param_4[3];
    iVar2 = 0;
    *param_1 = param_2 << 0xc | 0x400a6;
    uVar1 = 0;
    do {
        if ((param_1[1] & 1) == 0) {
code_r0x00005c88:
            if ((param_1[1] & 2) != 0) {
                iVar2 = -0x7ffffff9;
            }
            if ((-1 < iVar2) && (param_5 != NULL)) {
                *param_5 = param_1[0x24];
                param_5[1] = param_1[0x25];
                param_5[2] = param_1[0x26];
                param_5[3] = param_1[0x27];
            }
            return iVar2;
        }
        if (100000 < uVar1) {
            iVar2 = -0x7fffffee;
            goto code_r0x00005c88;
        }
        fcn.0000543f();
        uVar1 = uVar1 + 1;
    } while( true );
}


/* fcn.00000ce4 @ 0xce4 */

int8_t __fastcall fcn.00000ce4(uint8_t *param_1)

{
    int32_t var_cb4h;
    int8_t var_45ah;
    int32_t var_8h;
    int32_t var_4h;
    
    if (((*param_1 & 0xc) == 4) && ((*param_1 & 0x20) == 0)) {
        var_45ah = 0;
    }
    else {
        fcn.000051ce(param_1,&var_8h);
        var_4h = 0xca9;
        (**var_8h)(var_8h,0x7110,0x6a90,0,&var_4h,&var_cb4h);
    }
    return var_45ah;
}


/* fcn.00002b3d @ 0x2b3d */

uint __fastcall fcn.00002b3d(uint32_t *param_1)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t arg_8h;
    
    iVar1 = fcn.00005037(0x50000,0);
    if (iVar1 != -1) {
        arg_8h = 0x50100;
        uVar4 = 0;
        uVar2 = fcn.00005131(0x50100,0);
        *param_1 = uVar2;
        if (uVar2 == 0x23) {
            uVar2 = fcn.00005131(0x50108,0);
            while( true ) {
                param_1[3] = uVar2;
                if (param_1[3] == 4) {
                    uVar4 = fcn.00005131(arg_8h + 0xc,uVar4 + (0xfffffff3 < arg_8h));
                    param_1[4] = uVar4;
                    return 0;
                }
                if ((*param_1 < 0x100000) || (uVar2 = *param_1 >> 0x14, uVar2 == 0xfff)) break;
                arg_8h = uVar2 + 0x50000;
                uVar4 = 0xfffaffff < uVar2;
                uVar3 = fcn.00005131(arg_8h,uVar4);
                *param_1 = uVar3;
                uVar2 = fcn.00005131(uVar2 + 0x50008,uVar4 + (0xfffffff7 < arg_8h));
            }
        }
    }
    return 0x80000003;
}


/* fcn.00002c18 @ 0x2c18 */

//WARNING: Removing unreachable block (ram,0x00002cbc)
//WARNING: Removing unreachable block (ram,0x00002c75)
//WARNING: Removing unreachable block (ram,0x00002d04)

int __fastcall fcn.00002c18(int *param_1)

{
    int iVar1;
    int iVar2;
    int32_t var_28h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000000e0(&var_28h,0x18);
    fcn.000000e0(&var_8h,8);
    iVar1 = fcn.00002b3d();
    if (-1 < iVar1) {
        iVar2 = fcn.00002bee();
        iVar1 = *(iVar2 + 0x6044);
        if (*(*(iVar2 + 0x6040) + iVar2) != 0) {
            *param_1 = *(iVar2 + 0x6040);
            param_1[1] = iVar1;
        }
        iVar1 = *(iVar2 + 0x604c);
        if (*(*(iVar2 + 0x6048) + iVar2) != 0) {
            param_1[2] = *(iVar2 + 0x6048);
            param_1[3] = iVar1;
        }
        iVar1 = *(iVar2 + 0x6054);
        if (*(*(iVar2 + 0x6050) + iVar2) != 0) {
            param_1[4] = *(iVar2 + 0x6050);
            param_1[5] = iVar1;
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0000535e @ 0x535e */

uint __fastcall fcn.0000535e(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.00002bee @ 0x2bee */

uint32_t __fastcall fcn.00002bee(int param_1)

{
    uint32_t uVar1;
    int32_t arg_8h;
    
    uVar1 = *(param_1 + 0x10) & 7;
    if (uVar1 == 0) {
        arg_8h = 0x50010;
    }
    else {
        if (uVar1 != 1) {
            return 0;
        }
        arg_8h = 0x50014;
    }
    uVar1 = fcn.00005131(arg_8h,0);
    return uVar1 & 0xfffffff0;
}


/* fcn.00005a47 @ 0x5a47 */

int __fastcall fcn.00005a47(uint8_t param_1)

{
    uint32_t uVar1;
    int iVar2;
    int iVar3;
    uint16_t uVar4;
    uint32_t uStack_20;
    uchar auStack_1c [28];
    
    fcn.000000e0(auStack_1c,0x18);
    iVar2 = fcn.00002b3d();
    if (-1 < iVar2) {
        fcn.000000e0(&uStack_20,4);
        iVar3 = fcn.00002bee();
        uStack_20 = uStack_20 & 0xffff0000 | param_1 | 0x80000000;
        uVar4 = 0;
        *(iVar3 + 0x6038) = uStack_20;
        do {
            uVar1 = *(iVar3 + 0x6038);
            fcn.0000543f();
            uVar4 = uVar4 + 1;
            if (uVar1 < 0x80000000) {
                return iVar2;
            }
        } while (uVar4 < 1000);
    }
    return iVar2;
}


/* fcn.00000c15 @ 0xc15 */

uint8_t __fastcall fcn.00000c15(int param_1)

{
    int iVar1;
    int32_t var_cb4h;
    int8_t var_459h;
    int32_t var_8h;
    int32_t var_4h;
    
    if (((param_1 != 0) && ((*(param_1 + 4) & 0x80) != 0)) && (iVar1 = fcn.000051ce(param_1,&var_8h), -1 < iVar1)) {
        var_4h = 0xca9;
        iVar1 = (**var_8h)(var_8h,0x7110,0x6a90,0,&var_4h,&var_cb4h);
        return (iVar1 < 0) - 1U & var_459h;
    }
    return 0;
}


/* fcn.000027a8 @ 0x27a8 */

uint __fastcall fcn.000027a8(uint32_t param_1,int param_2)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint32_t uStack_68;
    int iStack_54;
    int iStack_50;
    uint auStack_4c [4];
    uint32_t auStack_3c [4];
    uchar auStack_2c [4];
    uint32_t auStack_28 [10];
    
    iVar2 = fcn.00006309();
    uStack_68 = 0;
    if (param_1 != 0) {
        do {
            iVar7 = param_2 + uStack_68 * 0xc;
            uVar9 = *(iVar7 + 2) & 0x1f;
            fcn.000026cf(uStack_68);
            fcn.000000e0(auStack_2c,0x28);
            while ((uStack_68 < param_1 && (uVar9 == (*(iVar7 + 2) & 0x1f)))) {
                fcn.000000e0(auStack_4c,0x10);
                fcn.000000e0(auStack_3c,0x10);
                fcn.00006135(auStack_4c,auStack_3c);
                uVar6 = 0;
                do {
                    iVar3 = fcn.00005e34();
                    if (iVar3 != 0) {
                        fcn.00005e88(~auStack_3c[uVar6],auStack_4c[uVar6]);
                    }
                    uVar6 = uVar6 + 1;
                } while (uVar6 < 3);
                fcn.000025db(auStack_2c);
                iVar7 = iVar7 + 0xc;
                uStack_68 = uStack_68 + 1;
            }
            puVar8 = auStack_28;
            uVar6 = 0;
            iVar7 = uVar9 * 0x1e + iVar2;
            do {
                if (*(iVar7 + 4) != -1) {
                    fcn.00005e88(~*puVar8,puVar8[-1]);
                }
                if (*(iVar7 + 0xc) != -1) {
                    fcn.00005e88(~puVar8[2],puVar8[1]);
                }
                if (*(iVar7 + 0x14) != -1) {
                    fcn.00005e88(~puVar8[4],puVar8[3]);
                }
                if (*(iVar7 + 0x10) != -1) {
                    fcn.00005e88(~puVar8[6],puVar8[5]);
                }
                uVar9 = puVar8[7];
                if (uVar9 != 0) {
                    uVar4 = fcn.00005d46();
                    if (uVar4 != 0) {
                        uVar5 = fcn.00005cc6();
                        if (uVar5 < uVar4) {
                            puVar1 = iStack_54 + uVar5 * 8;
                            *puVar1 = *puVar1 | uVar9;
                        }
                    }
                }
                uVar9 = puVar8[8];
                if (uVar9 != 0) {
                    uVar4 = fcn.00005d46();
                    if (uVar4 != 0) {
                        uVar5 = fcn.00005cc6();
                        if (uVar5 < uVar4) {
                            puVar1 = iStack_50 + 4 + uVar5 * 8;
                            *puVar1 = *puVar1 | uVar9;
                        }
                    }
                }
                uVar6 = uVar6 + 1;
                puVar8 = puVar8 + 10;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        } while (uStack_68 < param_1);
    }
    return 0;
}


/* fcn.00001f72 @ 0x1f72 */

int __fastcall fcn.00001f72(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    fcn.000000e0(&uStack_24,0x10);
    fcn.000000e0(&uStack_14,0x10);
    uVar7 = (param_1 & 0x1ff) >> 5;
    uVar4 = param_1 & 0x1f;
    cVar1 = fcn.00005f15();
    if ((cVar1 == '\0') || (cVar1 = fcn.00005ef5(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    if (((*param_2 & 0x48000) == 0x48000) && ((param_2[1] & 0x600) != 0x600)) {
        return -0x7ffffffe;
    }
    fcn.00006135(&uStack_24,&uStack_14);
    fcn.00005f86(~uStack_14,uStack_24);
    fcn.00005f86(~uStack_10,uStack_20);
    fcn.00005f86(~uStack_c,uStack_1c);
    uVar5 = *param_2;
    if ((uVar5 & 0x28000) == 0x28000) {
        uVar2 = 1 << uVar4;
        uVar5 = uVar2;
    }
    else {
        uVar2 = (uVar5 >> 5 & 1) << uVar4;
        uVar5 = (uVar5 >> 6 & 1) << uVar4;
    }
    fcn.00001c86(uVar7,~uVar2,uVar5);
    fcn.00001c86(uVar7,~((*param_2 >> 0xf & 1) << uVar4),(*param_2 >> 0x12 & 1) << uVar4);
    iVar6 = (*param_2 >> 0x10 & 1) << uVar4;
    iVar3 = fcn.00001c86(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
    if ((iVar3 == -0x7ffffffd) && (iVar6 != 0)) {
code_r0x000020f8:
        iVar3 = -0x7ffffffd;
    }
    else {
        iVar6 = (*param_2 >> 0x11 & 1) << uVar4;
        iVar3 = fcn.00001c86(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
        if (iVar3 == -0x7ffffffd) {
            if (iVar6 != 0) goto code_r0x000020f8;
            iVar3 = 0;
        }
        if ((param_2[1] & 0x1e00) != 0) {
            iVar3 = fcn.00005db6();
        }
    }
    return iVar3;
}


/* fcn.0000127d @ 0x127d */

uint __fastcall fcn.0000127d(int param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    uint unaff_ESI;
    int iVar7;
    uint unaff_EDI;
    
    param_2 = param_2 & 0xffff;
    fcn.000027a8();
    if (param_2 != 0) {
        uVar3 = param_2;
        do {
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    iVar1 = fcn.00005324();
    if (param_2 != 0) {
        puVar5 = iVar1 + 4;
        puVar4 = param_1 + 4;
        do {
            if (((*puVar4 & 0x1f) != 0) && (iVar1 != 0)) {
                puVar5[-1] = puVar4[-1];
                *puVar5 = *puVar5 ^ (*puVar5 ^ *puVar4) & 0x1f;
                puVar5 = puVar5 + 2;
            }
            puVar4 = puVar4 + 3;
            param_2 = param_2 - 1;
        } while (param_2 != 0);
    }
    iVar1 = fcn.00006309(unaff_EDI,unaff_ESI);
    uVar3 = fcn.0000259e();
    uVar2 = fcn.00002582();
    for (; uVar3 <= uVar2; uVar3 = uVar3 + 1) {
        iVar7 = (uVar3 & 0x1f) * 0x1e + iVar1;
        if (*(iVar7 + 6) != -1) {
            uVar6 = 0;
            do {
                fcn.00005e88(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
        if (*(iVar7 + 10) != -1) {
            uVar6 = 0;
            do {
                fcn.00005e88(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
        if (*(iVar7 + 0xe) != -1) {
            uVar6 = 0;
            do {
                fcn.00005e88(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
        if (*(iVar7 + 0x12) != -1) {
            uVar6 = 0;
            do {
                fcn.00005e88(0xffffffff,0xffffffff);
                uVar6 = uVar6 + 1;
            } while (uVar6 <= *(iVar7 + 0x1c) >> 5);
        }
    }
    return 0;
}


/* fcn.00001638 @ 0x1638 */

void __fastcall fcn.00001638(uint32_t *param_1)

{
    fcn.000000e0(param_1,8);
    *param_1 = *param_1 & 0xff0082e1 | 0x82e1;
    *(param_1 + 3) = 5;
    param_1[1] = param_1[1] & 0xfffffe01 | 1;
    return;
}


/* fcn.000025b7 @ 0x25b7 */

int __fastcall fcn.000025b7(uint32_t param_1,int param_2)

{
    char cVar1;
    
    cVar1 = fcn.00002da1();
    return (((cVar1 != '\0') + 8) * 0x100 | param_1) * 0x10000 + param_2;
}


/* fcn.00002da1 @ 0x2da1 */

uint __fastcall fcn.00002da1(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002d47(param_1);
    if (cVar1 != '\x02') {
        cVar1 = fcn.00002d47(param_1);
        if (cVar1 != '\x05') {
            cVar1 = fcn.00002d47(param_1);
            if (cVar1 != '\x06') {
                cVar1 = fcn.00002d47(param_1);
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00000d3e @ 0xd3e */

void fcn.00000d3e(void)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    int iVar7;
    uint32_t *puVar8;
    uint *puVar9;
    uint32_t *puVar10;
    uint *puVar11;
    uint uVar12;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uchar auStack_24 [16];
    uchar auStack_14 [20];
    
    fcn.000000e0(&uStack_2c,8);
    iVar3 = fcn.00001a7e();
    if ((-1 < iVar3) && ((uStack_2c & 1) != 0)) {
        iVar3 = 0;
        uVar4 = uStack_2c >> 2 & 3;
        if (uVar4 == 0) {
            if ((uStack_2c & 2) != 0) {
                return;
            }
        }
        else {
            if (uVar4 != 1) {
                return;
            }
            if (uStack_2c < 0) {
                return;
            }
        }
        iVar2 = fcn.00005037(0xa2000,0);
        if (iVar2 != -1) {
            fcn.00005168(0xa2010,0);
            fcn.000050b2(0xa2004,0);
            uVar5 = uStack_2c >> 2 & 3;
            uVar4 = 1;
            if (uVar5 == 0) {
                uStack_30 = 1;
            }
            else if (uVar5 == 1) {
                uStack_30 = *((uStack_28 >> 0x10) + 0xfe600000);
            }
            else {
                uStack_30 = 0;
            }
            puVar10 = NULL;
            if (uStack_30 != 0) {
                do {
                    puVar6 = fcn.000053e2();
                    if (puVar6 == NULL) {
                        return;
                    }
                    uVar5 = fcn.00000bb0();
                    *puVar6 = uVar5;
                    if ((*((uVar5 & 0xffff) + 0xfe600000) != 0) && (*((uVar5 & 0xffff) + 0xfe600000) < 0x80000000)) {
                        iVar7 = fcn.0000524b(puVar6 + 1);
                        if (iVar7 < 0) goto code_r0x00000f68;
                        iVar3 = iVar3 + 1;
                        puVar6[3] = 0;
                        if (puVar10 == NULL) {
                            puVar10 = puVar6;
                        }
                        else {
                            for (puVar8 = puVar10; puVar8[3] != 0; puVar8 = puVar8[3]) {
                            }
                            puVar8[3] = puVar6;
                        }
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 <= uStack_30);
                if (iVar3 != 0) {
                    puVar6 = fcn.00005324();
                    if (puVar6 == NULL) {
                        return;
                    }
                    for (; puVar10 != NULL; puVar10 = puVar10[3]) {
                        uVar4 = 0;
                        *puVar6 = puVar10[1];
                        puVar6[1] = puVar10[2];
                        puVar6[2] = *(puVar10 + 2);
                        puVar11 = puVar10[1];
                        puVar9 = *puVar10 + 0xfe600000;
                        if (*(puVar10 + 2) != 0) {
                            do {
                                uVar4 = uVar4 + 4;
                                *puVar11 = *puVar9;
                                puVar9 = puVar9 + 1;
                                puVar11 = puVar11 + 1;
                            } while (uVar4 < *(puVar10 + 2));
                        }
                        puVar6 = puVar6 + 4;
                    }
                    cVar1 = fcn.00000c79();
                    if (cVar1 == '\x01') {
                        uVar12 = 0x10;
                        fcn.000000e0(auStack_24,0x10);
                        fcn.00005c2a(6,uVar12,auStack_24,0);
                    }
                    cVar1 = fcn.00000ce4();
                    if (cVar1 == '\x01') {
                        uVar12 = 0x10;
                        fcn.000000e0(auStack_14,0x10);
                        fcn.00005c2a(4,uVar12,auStack_14,0);
                    }
                }
            }
code_r0x00000f68:
            fcn.000050db(0xa2004,0);
            fcn.00005168(0xa2010,0);
        }
    }
    return;
}


/* fcn.00000f92 @ 0xf92 */

void fcn.00000f92(void)

{
    uint uVar1;
    char cVar2;
    int iVar3;
    int iVar4;
    uint **ppuVar5;
    uint *puVar6;
    int iVar7;
    int iVar8;
    int32_t iVar9;
    uint *apuStack_84 [2];
    uint *apuStack_7c [2];
    uint *apuStack_74 [2];
    uint uStack_6c;
    uint uStack_68;
    int iStack_64;
    int iStack_60;
    int iStack_5c;
    int iStack_58;
    int iStack_54;
    int iStack_50;
    uint *puStack_4c;
    uint uStack_48;
    int iStack_44;
    uint *puStack_3c;
    uint uStack_38;
    int iStack_34;
    uint *puStack_2c;
    uint uStack_28;
    int iStack_24;
    uchar auStack_1c [16];
    uint32_t uStack_c;
    
    fcn.000000e0(auStack_1c,0x18);
    iVar3 = fcn.00002b3d();
    if (iVar3 < 0) {
        return;
    }
    if ((uStack_c & 7) == 0) {
        iVar9 = 0x50010;
    }
    else {
        if ((uStack_c & 7) != 1) goto code_r0x00000fec;
        iVar9 = 0x50014;
    }
    fcn.00005168(iVar9,0);
code_r0x00000fec:
    fcn.000050b2(0x50004,0);
    fcn.000000e0(&iStack_64,0x18);
    fcn.00002c18();
    iVar7 = iStack_60 * 4;
    iVar8 = iStack_58 * 4;
    iVar3 = iStack_50 * 4;
    if ((((iVar7 != 0) && (*(iStack_64 + -0x1a00000) != 0)) && (iVar4 = fcn.0000524b(apuStack_84), -1 < iVar4)) &&
       ((iVar4 = fcn.0000524b(apuStack_7c), -1 < iVar4 && (iVar4 = fcn.0000524b(apuStack_74), -1 < iVar4)))) {
        puStack_4c = apuStack_84[0];
        uStack_48 = 0;
        puStack_2c = apuStack_7c[0];
        uStack_28 = 0;
        uStack_38 = 0;
        puStack_3c = apuStack_74[0];
        iStack_44 = iVar7;
        iStack_34 = iVar3;
        iStack_24 = iVar8;
        ppuVar5 = fcn.00005324();
        if ((ppuVar5 != NULL) && (ppuVar5 != &puStack_4c)) {
            section..text(ppuVar5,&puStack_4c,0x30);
        }
        fcn.0000535e();
        fcn.0000535e();
        fcn.0000535e();
        puVar6 = iStack_64 + -0x1a00000;
        if (iVar7 != 0) {
            iVar7 = (iVar7 - 1U >> 2) + 1;
            do {
                uVar1 = *puVar6;
                puVar6 = puVar6 + 1;
                *apuStack_84[0] = uVar1;
                apuStack_84[0] = apuStack_84[0] + 1;
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
        }
        puVar6 = iStack_5c + -0x1a00000;
        if (iVar8 != 0) {
            iVar7 = (iVar8 - 1U >> 2) + 1;
            do {
                uVar1 = *puVar6;
                puVar6 = puVar6 + 1;
                *apuStack_7c[0] = uVar1;
                apuStack_7c[0] = apuStack_7c[0] + 1;
                iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
        }
        puVar6 = iStack_54 + -0x1a00000;
        if (iVar3 != 0) {
            iVar3 = (iVar3 - 1U >> 2) + 1;
            do {
                uVar1 = *puVar6;
                puVar6 = puVar6 + 1;
                *apuStack_74[0] = uVar1;
                apuStack_74[0] = apuStack_74[0] + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
        iVar3 = fcn.00002bee();
        fcn.000000e0(&uStack_6c,8);
        uStack_6c = *(iVar3 + 0x6030);
        uStack_68 = *(iVar3 + 0x6034);
        fcn.00005a47();
        cVar2 = fcn.00000c15();
        if (cVar2 == '\x01') {
            fcn.00005a47();
        }
    }
    fcn.000050db(0x50004,0);
    if ((uStack_c & 7) == 0) {
        iVar9 = 0x50010;
    }
    else {
        if ((uStack_c & 7) != 1) {
            return;
        }
        iVar9 = 0x50014;
    }
    fcn.00005168(iVar9,0);
    return;
}


/* fcn.000012ee @ 0x12ee */

void fcn.000012ee(void)

{
    int iVar1;
    uint noname_0;
    int32_t var_828h;
    uint32_t var_a4h;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00002af0();
    iVar1 = (**(iVar1 + 0xc))(0x47);
    if (iVar1 != 0) {
        iVar1 = fcn.00002af0();
        noname_0 = 0x48;
        iVar1 = (**(iVar1 + 0xc))();
        if (iVar1 != 0) {
            iVar1 = fcn.000051ce(noname_0,&var_10h);
            if (-1 < iVar1) {
                var_ch = 0x80d;
                iVar1 = (**var_10h)(var_10h,0x711c,0x6b30,0,&var_ch,&var_828h);
                if ((-1 < iVar1) && (var_a4h != '\0')) {
                    iVar1 = fcn.00002af0();
                    (**(iVar1 + 0xc))(0x47);
                    fcn.000000e0(&var_18h,8);
                    var_18h = var_18h & 0xffffe2ffU | 0x6280;
                    fcn.00001f72();
                    if (var_a4h._1_1_ != '\0') {
                        iVar1 = fcn.00002af0();
                        (**(iVar1 + 0xc))(0x48);
                        fcn.000000e0(&var_8h,8);
                        var_4h = var_4h & 0xffffe7ffU | 0x600;
                        var_8h = var_8h & 0xff34edffU | 0x348d80;
                        fcn.00001f72();
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000013fd @ 0x13fd */

void __fastcall fcn.000013fd(uint param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_14c8h;
    uint32_t var_ee8h;
    int32_t var_818h;
    uint32_t var_2fdh;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000051ce(param_1,&var_8h);
    if (-1 < iVar1) {
        var_4h = 0x80d;
        iVar1 = (**var_8h)(var_8h,0x711c,0x6b30,0,&var_4h,&var_818h);
        if (-1 < iVar1) {
            var_4h = 0xca9;
            iVar1 = (**var_8h)(var_8h,0x7110,0x6a90,0,&var_4h,&var_14c8h);
            if (-1 < iVar1) {
                iVar1 = fcn.00002af0();
                uVar2 = (**(iVar1 + 8))(0x1d);
                if ((((uVar2 & 0xffff) - 10 < 3) && (var_2fdh == '\0')) && (var_ee8h != '\0')) {
                    iVar1 = fcn.00002af0();
                    (**(iVar1 + 8))(0x1a);
                    iVar1 = fcn.00002af0();
                    (**(iVar1 + 0xc))(0x19);
                    fcn.0000127d();
                }
            }
        }
    }
    return;
}


/* fcn.00001542 @ 0x1542 */

void __fastcall fcn.00001542(uint param_1)

{
    char cVar1;
    int16_t iVar2;
    int iVar3;
    int32_t var_14d0h;
    int8_t var_edch;
    int32_t var_820h;
    uint32_t var_ech;
    int8_t var_ch;
    unkbyte3 Stack_f;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar3 = fcn.000051ce(param_1,&var_8h);
    if (-1 < iVar3) {
        var_4h = 0x80d;
        iVar3 = (**var_8h)(var_8h,0x711c,0x6b30,0,&var_4h,&var_820h);
        if (-1 < iVar3) {
            var_4h = 0xca9;
            iVar3 = (**var_8h)(var_8h,0x7110,0x6a90,0,&var_4h,&var_14d0h);
            if (-1 < iVar3) {
                cVar1 = fcn.00005936();
                if ((cVar1 == '\0') || (var_ech == '\0')) {
                    _var_ch = CONCAT31(Stack_f,var_edch);
                    iVar3 = fcn.00002af0();
                    (**(iVar3 + 0x3c))(0x34,_var_ch);
                }
                cVar1 = fcn.00005936();
                if (cVar1 == '\0') {
                    iVar3 = fcn.00002af0();
                    iVar3 = (**(iVar3 + 0xc))(0x13);
                    if (iVar3 != 0) {
                        iVar3 = fcn.00002af0();
                        iVar2 = (**(iVar3 + 8))(0x14);
                        if (iVar2 != 0) {
                            iVar3 = fcn.00002af0();
                            (**(iVar3 + 8))(0x14);
                            iVar3 = fcn.00002af0();
                            (**(iVar3 + 0xc))(0x13);
                            fcn.0000127d();
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.00001667 @ 0x1667 */

void __fastcall fcn.00001667(uint param_1)

{
    int iVar1;
    uint8_t uVar2;
    int32_t var_14d8h;
    int32_t var_cc8h;
    uint32_t var_c57h;
    int8_t var_c48h;
    uint32_t var_c41h;
    int8_t var_c35h;
    int8_t var_c2fh;
    int8_t var_c17h;
    uint32_t var_c10h;
    int8_t var_c04h;
    int8_t var_bfeh;
    int8_t var_be6h;
    uint32_t var_bdfh;
    int8_t var_bd3h;
    int8_t var_bcdh;
    int8_t var_bb5h;
    uint32_t var_baeh;
    int8_t var_ba2h;
    int8_t var_b9ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int8_t var_1h;
    
    iVar1 = fcn.000051ce(param_1,&var_14h);
    if (-1 < iVar1) {
        var_10h = 0x80d;
        uVar2 = 0;
        iVar1 = (**var_14h)(var_14h,0x711c,0x6b30,0,&var_10h,&var_14d8h);
        if (-1 < iVar1) {
            var_10h = 0xca9;
            iVar1 = (**var_14h)(var_14h,0x7110,0x6a90,0,&var_10h,&var_cc8h);
            if (-1 < iVar1) {
                if (var_c57h != '\0') {
                    fcn.00001638();
                    if ((var_c48h == 2) || (var_c48h == 3)) {
                        var_ch = var_ch | 0x6000;
                    }
                    if (var_c41h != 0) {
                        do {
                            fcn.000025b7();
                            fcn.00001f72();
                            uVar2 = uVar2 + 1;
                        } while (uVar2 < var_c41h);
                    }
                }
                uVar2 = 0;
                if (var_c57h._1_1_ != '\0') {
                    fcn.00001638();
                    if ((var_c17h == 2) || (var_c17h == 3)) {
                        var_ch = var_ch | 0x6000;
                    }
                    var_1h = 0;
                    if (var_c10h != 0) {
                        do {
                            fcn.000025b7();
                            fcn.00001f72();
                            uVar2 = uVar2 + 1;
                        } while (uVar2 < var_c10h);
                    }
                }
                uVar2 = 0;
                if (var_c57h._2_1_ != '\0') {
                    fcn.00001638();
                    if ((var_be6h == 2) || (var_be6h == 3)) {
                        var_ch = var_ch | 0x6000;
                    }
                    var_1h = 0;
                    if (var_bdfh != 0) {
                        do {
                            fcn.000025b7();
                            fcn.00001f72();
                            uVar2 = uVar2 + 1;
                        } while (uVar2 < var_bdfh);
                    }
                }
                uVar2 = 0;
                if (var_c57h._3_1_ != '\0') {
                    fcn.00001638();
                    if ((var_bb5h == 2) || (var_bb5h == 3)) {
                        var_ch = var_ch | 0x6000;
                    }
                    if (var_baeh != 0) {
                        do {
                            fcn.000025b7();
                            fcn.00001f72();
                            uVar2 = uVar2 + 1;
                        } while (uVar2 < var_baeh);
                    }
                }
            }
        }
    }
    return;
}


/* fcn.000014c5 @ 0x14c5 */

void __fastcall fcn.000014c5(uint param_1)

{
    int iVar1;
    int32_t var_cb8h;
    int8_t var_2ddh;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000051ce(param_1,&var_8h);
    if (-1 < iVar1) {
        var_4h = 0xca9;
        iVar1 = (**var_8h)(var_8h,0x7110,0x6a90,0,&var_4h,&var_cb8h);
        if ((-1 < iVar1) && (var_2ddh - 1U < 2)) {
            iVar1 = fcn.00002af0();
            (**(iVar1 + 8))(0x16);
            iVar1 = fcn.00002af0();
            (**(iVar1 + 0xc))(0x15);
            fcn.0000127d();
        }
    }
    return;
}


/* fcn.0000185a @ 0x185a */

void __fastcall fcn.0000185a(uint param_1)

{
    int16_t iVar1;
    int iVar2;
    int32_t var_818h;
    uint32_t var_265h;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar2 = fcn.000051ce(param_1,&var_8h);
    if (-1 < iVar2) {
        var_4h = 0x80d;
        iVar2 = (**var_8h)(var_8h,0x711c,0x6b30,0,&var_4h,&var_818h);
        if ((-1 < iVar2) && (var_265h == '\x03')) {
            iVar2 = fcn.00002af0();
            iVar2 = (**(iVar2 + 0xc))(0x4f);
            if (iVar2 != 0) {
                iVar2 = fcn.00002af0();
                iVar1 = (**(iVar2 + 8))(0x50);
                if (iVar1 != 0) {
                    iVar2 = fcn.00002af0();
                    (**(iVar2 + 8))(0x50);
                    iVar2 = fcn.00002af0();
                    (**(iVar2 + 0xc))(0x4f);
                    fcn.0000127d();
                }
            }
        }
    }
    return;
}


/* fcn.00002463 @ 0x2463 */

int fcn.00002463(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uStack_10;
    uint32_t uStack_c;
    int iStack_8;
    int iStack_4;
    
    uVar1 = fcn.0000259e();
    uVar2 = fcn.00002582();
    do {
        if (uVar2 < uVar1) {
            return 0;
        }
        uVar6 = 0;
        fcn.00002558();
        do {
            uStack_10 = 0;
            uStack_c = 0;
            iVar3 = fcn.00006345(&uStack_10,&uStack_c);
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar4 = fcn.00005d8a();
            if ((uVar4 == 0) || (uVar5 = fcn.00005cc6(), uVar4 <= uVar5)) {
                uVar4 = 0;
            }
            else {
                uVar4 = *(iStack_8 + uVar5 * 8);
            }
            iVar3 = fcn.000023ad(~(uVar4 | uStack_10));
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar4 = fcn.00005d8a();
            if ((uVar4 == 0) || (uVar5 = fcn.00005cc6(), uVar4 <= uVar5)) {
                uVar4 = 0;
            }
            else {
                uVar4 = *(iStack_4 + 4 + uVar5 * 8);
            }
            iVar3 = fcn.00002436(~(uVar4 | uStack_c));
            if (iVar3 < 0) {
                return iVar3;
            }
            uVar6 = uVar6 + 1;
            uVar4 = fcn.00002558();
        } while (uVar6 <= uVar4 >> 5);
        uVar1 = uVar1 + 1;
    } while( true );
}


/* fcn.000051a5 @ 0x51a5 */

void fcn.000051a5(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0x6ba4);
    return;
}


/* fcn.00005b31 @ 0x5b31 */
// decompilation failed

/* fcn.00006309 @ 0x6309 */

uint __fastcall fcn.00006309(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002da1();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0x6e90;
    }
    *param_1 = 0x13;
    return 0x6c50;
}


/* fcn.0000259e @ 0x259e */

uint32_t __fastcall fcn.0000259e(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002da1();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.00002582 @ 0x2582 */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00002582(uint param_1)

{
    int32_t var_4h;
    
    fcn.00006309(param_1,param_1);
    fcn.0000259e();
    return;
}


/* fcn.00005e68 @ 0x5e68 */

uint __fastcall fcn.00005e68(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.0000223d @ 0x223d */

uint __fastcall fcn.0000223d(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00001b5f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001bae(param_2,param_3);
    }
    return uVar2;
}


/* fcn.00002351 @ 0x2351 */

uint __fastcall fcn.00002351(uint param_1,uint param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00001b5f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001da0(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.00005e88 @ 0x5e88 */

uint __fastcall fcn.00005e88(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.000023ad @ 0x23ad */

uint __fastcall fcn.000023ad(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00001b5f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001da0(param_2,0xffffffff,param_3);
    }
    return uVar2;
}


/* fcn.000022c7 @ 0x22c7 */

uint __fastcall fcn.000022c7(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00001b5f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001bae(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000066aa @ 0x66aa */

void fcn.000066aa(int16_t param_1,int32_t param_2)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.000066cf(0xf9000,0,param_1,param_2,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.000066cf @ 0x66cf */

int __cdecl
fcn.000066cf(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int32_t arg_28h,int32_t arg_2ch)

{
    uint8_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int in_EDX;
    int arg_ch_00;
    int arg_8h_00;
    int arg_ch_01;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if ((in_EDX < 0) || ((1 < in_EDX && ((in_EDX < 4 || ((7 < in_EDX && (in_EDX != 0x13)))))))) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00005037(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.00005037(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.00005168(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.00005168(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.00005104(arg_8h_00,arg_ch_00);
                fcn.00005072(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.00005168(arg_8h + 0xd4,arg_ch_01);
                fcn.000050b2(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.00005037(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.00005131(arg_8h + 0xd4,arg_ch_01);
                            *arg_28h = uVar5;
                        }
                        return 0;
                    }
                    return ((uVar1 != 2) - 1 & 9) + 0x80000007;
                }
            }
            iVar3 = -0x7fffffee;
        }
    }
    return iVar3;
}


/* fcn.00005f15 @ 0x5f15 */

uint32_t __fastcall fcn.00005f15(uint32_t param_1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar2 = fcn.00005eb4();
    if (uVar2 != '\0') {
        iVar3 = fcn.00006309();
        uVar1 = *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar3);
        uVar2 = uVar1;
        if ((param_1 & 0x1ff) < uVar2) {
            return CONCAT31(uVar1 >> 8,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00005ef5 @ 0x5ef5 */

bool __fastcall fcn.00005ef5(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.000021c6(param_1);
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.00005f50 @ 0x5f50 */

uint __fastcall fcn.00005f50(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00006309();
    uVar2 = fcn.00005e34();
    return *(((*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar1) | 0xfffffd00) << 8 | uVar2 & 0xffff0000) << 8 | uVar2 & 0xffff
            );
}


/* fcn.00005e34 @ 0x5e34 */

int __fastcall fcn.00005e34(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.00006309();
    return *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (param_2 + (param_1 & 0x1ff) * 4) * 4;
}


/* fcn.00006081 @ 0x6081 */

void __fastcall fcn.00006081(uint param_1,uint32_t *param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    
    uVar1 = *param_2;
    uVar2 = fcn.00006262();
    *(param_3 + 3) = uVar2;
    uVar3 = ((uVar1 & 0x6000000 | 0x1080800) >> 3 | uVar1 & 0x1e0000) >> 1 | *param_3 & 0xff10e0ff | uVar1 & 0x300;
    *param_3 = uVar3;
    if ((uVar1 & 0x200) == 0) {
        *param_3 = (uVar1 & 0x800000 | 0x400000) >> 0xc | uVar3;
    }
    uVar3 = param_2[1];
    *param_3 = (uVar1 & 0x1c00 | 0x400200) >> 9 | (uVar1 & 1) << 0xe | *param_3 & 0xffffbfe1;
    param_3[1] = ((uVar1 & 0x10000000 | 0x8004000) >> 5 | uVar3 & 0x3c00) >> 9 | param_3[1] & 0xffc03e01;
    return;
}


/* fcn.00006262 @ 0x6262 */

uint fcn.00006262(void)

{
    char cVar1;
    uint32_t extraout_EDX;
    
    cVar1 = fcn.0000632f();
    if (cVar1 == '\0') {
        if (extraout_EDX < 4) {
            return *(extraout_EDX * 4 + 0x725c);
        }
    }
    else if (extraout_EDX < 4) {
        return *(extraout_EDX * 4 + 0x724c);
    }
    return 0;
}


/* fcn.0000632f @ 0x632f */

uchar __fastcall fcn.0000632f(int param_1)

{
    if ((param_1 != 0x905) && (param_1 != 0x809)) {
        return 0;
    }
    return 1;
}


/* fcn.00001bae @ 0x1bae */
// decompilation failed

/* fcn.00006135 @ 0x6135 */

int __cdecl fcn.00006135(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint32_t *in_EDX;
    int32_t var_4h;
    
    iVar1 = fcn.00006291(&var_4h);
    if (-1 < iVar1) {
        *arg_ch = *arg_ch | -((*in_EDX & 0x3f000000) != 0) & 0xc0000000;
        *arg_8h = *arg_8h | var_4h << 0x1e;
        *arg_ch = *arg_ch | -((*in_EDX & 0x700000) != 0) & 0x6000000;
        *arg_8h = *arg_8h | (*in_EDX & 0x600000) << 4;
        *arg_ch = *arg_ch | -((*in_EDX & 0xf8000) != 0) & 0x1e0000;
        *arg_8h = *arg_8h | (*in_EDX & 0xf0000) * 2;
        *arg_ch = *arg_ch | -((*in_EDX & 0x380) != 0) & 0x300;
        *arg_8h = *arg_8h | *in_EDX & 0x300;
        *arg_ch = *arg_ch | -((*in_EDX & 0xc00) != 0) & 0x800000;
        *arg_8h = *arg_8h | (*in_EDX & 0x800) << 0xc;
        *arg_ch = *arg_ch | (*in_EDX & 0x6000) != 0;
        *arg_8h = *arg_8h | *in_EDX >> 0xe & 1;
        *arg_ch = *arg_ch | -((in_EDX[1] & 0x6000) != 0) & 0x10000000;
        *arg_8h = *arg_8h | (in_EDX[1] & 0x4000) << 0xe;
        *arg_ch = *arg_ch | -((*in_EDX & 0xf) != 0) & 0x1c00;
        *arg_8h = *arg_8h | (*in_EDX & 0xe) << 9;
        *(arg_ch + 4) = *(arg_ch + 4) | -((in_EDX[1] & 0x1f) != 0) & 0x3c00;
        *(arg_8h + 4) = *(arg_8h + 4) | (in_EDX[1] & 0x1e) << 9;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00006291 @ 0x6291 */

uint __cdecl fcn.00006291(int32_t arg_8h)

{
    char cVar1;
    int in_EDX;
    
    if (in_EDX != 0) {
        if (in_EDX == 1) {
            cVar1 = fcn.0000632f();
            *arg_8h = -(cVar1 != '\0') & 3;
            return 0;
        }
        if (in_EDX == 3) {
            *arg_8h = 1;
            return 0;
        }
        if (in_EDX == 5) {
            *arg_8h = 2;
            return 0;
        }
        if (in_EDX != 7) {
            if (in_EDX == 9) {
                *arg_8h = 3;
                return 0;
            }
            return 0x80000002;
        }
        cVar1 = fcn.0000632f();
        if (cVar1 == '\0') {
            return 0x80000002;
        }
    }
    *arg_8h = 0;
    return 0;
}


/* fcn.00005f86 @ 0x5f86 */

//WARNING: Removing unreachable block (ram,0x00006058)
//WARNING: Removing unreachable block (ram,0x00005fc0)
//WARNING: Removing unreachable block (ram,0x00005fdf)
//WARNING: Removing unreachable block (ram,0x00006030)

void fcn.00005f86(uint32_t param_1,uint32_t param_2)

{
    if (((~param_1 | param_2) & 0xfffffffe) != 0) {
        fcn.00002267();
    }
    if (((~param_1 | param_2) & 1) != 0) {
        fcn.000022f1();
    }
    fcn.00006309();
    fcn.00005e34();
    fcn.00005e88(param_1,param_2);
    return;
}


/* fcn.00001c86 @ 0x1c86 */

uint __fastcall fcn.00001c86(int param_1,uint32_t param_2,uint param_3,uint32_t param_4,uint32_t param_5)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int16_t iVar5;
    uint32_t auStack_8 [2];
    
    bVar2 = false;
    uVar4 = 0;
    param_2 = param_2 & 0x1f;
    auStack_8[0] = 0;
    iVar3 = fcn.00006309();
    if (param_1 == 0) {
        iVar5 = *(param_2 * 0x1e + iVar3 + 4);
code_r0x00001d18:
        bVar1 = false;
    }
    else {
        if (param_1 == 1) {
            iVar5 = *(param_2 * 0x1e + iVar3 + 0xc);
        }
        else {
            if (param_1 == 2) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 10);
                goto code_r0x00001d18;
            }
            if (param_1 == 3) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x10);
            }
            else {
                if (param_1 == 4) {
                    iVar5 = *(param_2 * 0x1e + iVar3 + 0xe);
                    goto code_r0x00001d18;
                }
                if (param_1 != 5) {
                    return 0x80000003;
                }
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x14);
            }
        }
        bVar1 = true;
        bVar2 = true;
    }
    if (iVar5 == -1) {
        return 0x80000003;
    }
    if ((bVar1) && (fcn.0000223d(auStack_8), uVar4 = auStack_8[0], auStack_8[0] != 0)) {
        if ((auStack_8[0] & (~param_4 | param_5)) == 0) {
            uVar4 = 0;
        }
        else {
            fcn.00002351(auStack_8[0]);
        }
    }
    fcn.00005e88(param_4,param_5);
    if ((bVar2) && (uVar4 != 0)) {
        fcn.000023ad(uVar4);
    }
    return 0;
}


/* fcn.00005db6 @ 0x5db6 */

uint __fastcall fcn.00005db6(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if (param_2 != 0) {
        uVar1 = fcn.00005d46();
        if (uVar1 == 0) {
            return 0x8000000e;
        }
        uVar2 = fcn.00005cc6();
        if (uVar1 <= uVar2) {
            return 0x80000002;
        }
        if ((param_2 & 3) == 3) {
            *(param_1 + uVar2 * 8) = *(param_1 + uVar2 * 8) | 1 << (param_1 & 0x1f);
        }
        if ((param_2 & 0xc) == 0xc) {
            *(param_1 + 4 + uVar2 * 8) = *(param_1 + 4 + uVar2 * 8) | 1 << (param_1 & 0x1f);
        }
    }
    return 0;
}


/* fcn.00001b5f @ 0x1b5f */

uint32_t __fastcall fcn.00001b5f(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.00006309();
    uVar2 = fcn.0000259e();
    if (((uVar2 <= param_1) && (uVar2 = fcn.00002582(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00001da0 @ 0x1da0 */

uint __fastcall fcn.00001da0(int param_1,uint32_t param_2,int param_3,uint32_t param_4,uint32_t param_5)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    uint32_t auStack_8 [2];
    
    auStack_8[0] = 0;
    iVar2 = fcn.00006309();
    if (param_1 == 6) {
        uVar1 = *((param_2 & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.0000223d(auStack_8);
    }
    else {
        if (param_1 != 7) {
            return 0x80000003;
        }
        uVar1 = *((param_2 & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.000022c7(auStack_8);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    auStack_8[0] = auStack_8[0] & param_4 | param_5;
    uVar3 = fcn.000066aa(uVar1 + param_3 * 8,0);
    return uVar3;
}


/* fcn.000023da @ 0x23da */

uint __fastcall fcn.000023da(uint param_1,uint param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00001b5f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001da0(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.00002558 @ 0x2558 */

ushort __fastcall fcn.00002558(uint32_t param_1)

{
    ushort uVar1;
    int iVar2;
    uint32_t var_4h;
    
    iVar2 = fcn.00006309();
    if ((param_1 & 0x1f) < param_1) {
        uVar1 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00006345 @ 0x6345 */

uint __fastcall fcn.00006345(uint32_t param_1,uint32_t param_2,uint32_t *param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uStack_c;
    
    if ((param_3 == NULL) || (param_4 == NULL)) {
        uVar5 = 0x80000002;
    }
    else {
        cVar2 = fcn.00002da1();
        uVar7 = 0;
        if (cVar2 != '\0') {
            uVar6 = 0;
            do {
                uVar1 = *(uVar6 + 0x70b0);
                if ((((param_1 == (uVar1 >> 0x10 & 0xf1f)) && (param_2 == (uVar1 & 0x1ff) >> 5)) &&
                    (iVar3 = fcn.00001e4a(), -1 < iVar3)) &&
                   (((uVar4 = uStack_c & 0x1f, uVar4 != 3 && (uVar4 != 5)) &&
                    ((uVar4 != 1 || ((uStack_c & 0x1f80) == 0x380)))))) {
                    uVar7 = uVar7 | 1 << (uVar1 & 0x1f);
                }
                uVar6 = uVar6 + 4;
            } while (uVar6 < 0x20);
        }
        *param_3 = uVar7;
        uVar5 = 0;
        *param_4 = uVar7;
    }
    return uVar5;
}


/* fcn.00005d8a @ 0x5d8a */

uint16_t __fastcall fcn.00005d8a(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.000052f5();
    if (iVar1 == 0) {
        *param_1 = 0;
        return 0;
    }
    *param_1 = iVar1 + 0x18;
    return *(iVar1 + 2) - 0x18U >> 3;
}


/* fcn.00005cc6 @ 0x5cc6 */

int __fastcall fcn.00005cc6(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    if (param_1 != 0) {
        do {
            fcn.0000259e();
            uVar1 = fcn.00002558();
            iVar2 = iVar2 + 1 + (uVar1 >> 5);
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_1);
    }
    return iVar2 + param_2;
}


/* fcn.00002436 @ 0x2436 */

uint __fastcall fcn.00002436(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.00001b5f();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00001da0(param_2,0xffffffff,param_3);
    }
    return uVar2;
}


/* fcn.000026cf @ 0x26cf */

uint __fastcall fcn.000026cf(uint param_1,int param_2,uint32_t param_3)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t auStack_c [3];
    
    auStack_c[2] = fcn.00006309();
    puVar1 = param_3 * 0xc + param_2;
    uVar3 = *(puVar1 + 2) & 0x1f;
    fcn.000000e0(auStack_c,4);
    while( true ) {
        if ((auStack_c[1] <= param_3) || (uVar3 != (*(puVar1 + 2) & 0x1f))) {
            uVar2 = 0;
            do {
                if (auStack_c[uVar2] != 0) {
                    fcn.00002351(auStack_c[uVar2]);
                    fcn.000023da(auStack_c[uVar2]);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 <= *(uVar3 * 0x1e + 0x1c + auStack_c[2]) - 1 >> 5);
            return 0;
        }
        uVar2 = *puVar1 & 0x1ff;
        if (*(uVar3 * 0x1e + 0x1c + auStack_c[2]) <= uVar2) {
            return 0x80000002;
        }
        if (uVar2 >> 5 != 0) break;
        param_3 = param_3 + 1;
        auStack_c[0] = auStack_c[0] | 1 << (*puVar1 & 0x1f);
        puVar1 = puVar1 + 3;
    }
    return 0x80000003;
}


/* fcn.000025db @ 0x25db */

void __fastcall fcn.000025db(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    int8_t iVar1;
    uint32_t uVar2;
    
    uVar2 = param_1 & 0x1f;
    if (param_1 >> 5 == 0) {
        iVar1 = uVar2;
        param_3[1] = param_3[1] | (*param_2 >> 5 & 1) << iVar1;
        *param_3 = *param_3 | (*param_2 >> 6 & 1) << iVar1;
        param_3[3] = param_3[3] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[2] = param_3[2] | (*param_2 >> 0x12 & 1) << iVar1;
        param_3[5] = param_3[5] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[4] = param_3[4] | (*(param_2 + 2) & 1) << iVar1;
        param_3[7] = param_3[7] | (*param_2 >> 0xf & 1) << iVar1;
        param_3[6] = param_3[6] | (*param_2 >> 0x11 & 1) << iVar1;
        if ((*param_2 & 0x28000) == 0x28000) {
            param_3[1] = param_3[1] | 1 << uVar2;
            *param_3 = *param_3 | 1 << uVar2;
        }
        param_3[8] = param_3[8] | (param_2[1] >> 10 & 1) << iVar1;
        param_3[9] = param_3[9] | (param_2[1] >> 0xc & 1) << iVar1;
        if ((((*param_2 & 0x1f) == 1) && ((*param_2 & 0x1f80) == 0x280)) && ((param_2[1] & 0x1800) == 0)) {
            param_3[9] = param_3[9] | 1 << uVar2;
        }
    }
    return;
}


/* fcn.00005d46 @ 0x5d46 */

uint16_t __fastcall fcn.00005d46(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.000052f5();
    if (iVar1 == 0) {
        iVar1 = fcn.00005cf9();
        *param_1 = iVar1;
        if (iVar1 == 0) {
            return 0;
        }
        iVar1 = fcn.000052f5();
    }
    else {
        *param_1 = iVar1 + 0x18;
    }
    return *(iVar1 + 2) - 0x18U >> 3;
}


/* fcn.00002d36 @ 0x2d36 */

void fcn.00002d36(void)

{
    fcn.00005037(0xf8002,0);
    return;
}


/* fcn.00005348 @ 0x5348 */

int __fastcall fcn.00005348(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00003694 @ 0x3694 */

void __fastcall
fcn.00003694(uint16_t param_1,int param_2,int param_3,uint16_t param_4,uint16_t param_5,char param_6)

{
    uint8_t *puVar1;
    char cVar2;
    uint8_t uVar3;
    char cVar4;
    uint8_t uVar6;
    uint32_t uVar5;
    uint16_t uVar7;
    uint8_t uVar8;
    int iVar9;
    uint32_t uVar10;
    
    if (param_4 <= param_5) {
        uVar7 = param_4;
        do {
            uVar10 = uVar7;
            iVar9 = uVar10 * 0x20;
            puVar1 = iVar9 + 0x1c + param_2;
            *puVar1 = *puVar1 & 0xfe;
            cVar2 = *(param_4 * param_1 + param_3 + uVar10);
            *(iVar9 + 0x1d + param_2) = cVar2;
            if (cVar2 != -1) {
                if (param_6 == '\0') {
                    cVar4 = '\0';
                }
                else {
                    cVar4 = *(param_1 * uVar10 + param_4 + param_3);
                }
                *(iVar9 + 0x1d + param_2) = cVar4 + cVar2;
            }
            uVar7 = uVar7 + 1;
        } while (uVar7 <= param_5);
    }
    uVar10 = param_4;
    uVar3 = 0;
    if ((*(param_5 * 0x20 + 0x1c + param_2) & 1) == 0) {
        param_4 = param_4 + 1;
        uVar7 = param_4;
        do {
            for (; uVar7 <= param_5; uVar7 = uVar7 + 1) {
                uVar5 = uVar7;
                iVar9 = uVar5 * 0x20;
                if ((*(iVar9 + 0x1c + param_2) & 1) == 0) {
                    uVar8 = *(uVar10 * param_1 + uVar5 + param_3);
                    if (uVar8 != 0xff) {
                        if (param_6 == '\0') {
                            uVar6 = 0;
                        }
                        else {
                            uVar6 = *(param_1 * uVar5 + uVar10 + param_3);
                        }
                        if (uVar3 + uVar6 + uVar8 <= *(iVar9 + 0x1d + param_2)) {
                            *(iVar9 + 0x1d + param_2) = uVar3 + uVar6 + uVar8;
                            *(iVar9 + 0x1e + param_2) = uVar10;
                        }
                    }
                }
            }
            uVar10 = param_1;
            uVar8 = 0xff;
            uVar7 = param_4;
            uVar3 = 0xff;
            if (param_4 <= param_5) {
                do {
                    if (((*(uVar7 * 0x20 + 0x1c + param_2) & 1) == 0) &&
                       (uVar3 = *(uVar7 * 0x20 + 0x1d + param_2), uVar3 < uVar8)) {
                        uVar10 = uVar7;
                        uVar8 = uVar3;
                    }
                    uVar7 = uVar7 + 1;
                } while (uVar7 <= param_5);
                uVar3 = uVar8;
            }
            puVar1 = uVar10 * 0x20 + 0x1c + param_2;
            *puVar1 = *puVar1 | 1;
            uVar7 = param_4;
        } while ((*(param_5 * 0x20 + 0x1c + param_2) & 1) == 0);
    }
    return;
}


/* fcn.00003842 @ 0x3842 */

uint __cdecl fcn.00003842(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    int iVar1;
    int in_ECX;
    int *in_EDX;
    
    iVar1 = *in_EDX;
    *(iVar1 * 0x18 + in_ECX) = arg_8h;
    *(iVar1 * 0x18 + 4 + in_ECX) = arg_ch;
    iVar1 = *in_EDX;
    *(iVar1 * 0x18 + 8 + in_ECX) = arg_10h;
    *(iVar1 * 0x18 + 0xc + in_ECX) = arg_14h;
    *(*in_EDX * 0x18 + 0x10 + in_ECX) = arg_18h;
    *in_EDX = *in_EDX + 1;
    return 0;
}


/* fcn.0000387c @ 0x387c */

int __fastcall
fcn.0000387c(uint32_t param_1,int param_2,uint param_3,uint param_4,uint32_t param_5,uint32_t param_6,int param_7
            ,int param_8,uint16_t param_9,uint16_t param_10,uint8_t param_11,char param_12,int param_13,
            int param_14,int *param_15)

{
    char *pcVar1;
    uint32_t arg_8h;
    uint32_t uVar2;
    uint8_t uVar3;
    char cVar4;
    int iVar5;
    uint32_t uVar6;
    char cVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    int *piVar11;
    uint16_t uVar12;
    uint32_t uVar13;
    int iVar14;
    uint32_t uVar15;
    bool bVar16;
    ulong uVar17;
    int iStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t uStack_30;
    int iStack_24;
    uint32_t uStack_18;
    
    uVar13 = param_9;
    uStack_40 = *(uVar13 * 0x20 + param_7);
    uStack_3c = *(uVar13 * 0x20 + 4 + param_7);
    uVar10 = *(param_10 * 0x20 + param_7);
    uVar15 = uVar10 - uStack_40;
    iVar5 = (*(param_10 * 0x20 + 4 + param_7) - uStack_3c) - (uVar10 < uStack_40);
    cVar4 = '\a';
    cVar7 = cVar4;
    for (uVar3 = param_11; '\0' < uVar3; uVar3 = uVar3 * '\x02') {
        cVar7 = cVar7 + -1;
    }
    uVar6 = cVar7;
    uVar9 = param_11 & ~(1 << (uVar6 & 0x1f));
    uVar10 = uVar9;
    uVar3 = uVar9;
    while ('\0' < uVar3) {
        uVar3 = uVar10 * '\x02';
        uVar10 = uVar3;
        cVar4 = cVar4 + -1;
    }
    if (param_13 == 0) {
        *((param_6 & 0xffff) * uVar13 + param_10 + param_8) = uVar6 != param_1;
        *((param_6 & 0xffff) * param_10 + uVar13 + param_8) = uVar6 == param_1;
    }
    uStack_38 = 0xffffffff;
    uStack_34 = 0xffffffff;
    iVar14 = 0;
    uStack_18 = 0;
    uStack_30 = 0;
    iStack_24 = 0;
    if (param_5 != 0) {
        _param_11 = param_2 + 8;
        iStack_48 = iVar5;
        uStack_44 = uVar15;
        do {
            if (uVar15 == 0 && iVar5 == 0) {
                return 0;
            }
            if (_param_11[-1] <= uStack_3c) {
                if (uStack_3c == _param_11[-1]) {
                    if (uStack_40 < _param_11[-2]) goto code_r0x00003d5a;
                }
                uVar10 = *_param_11 + _param_11[-2];
                uVar15 = _param_11[1] + _param_11[-1] + CARRY4(*_param_11,_param_11[-2]);
                if ((uStack_3c <= uVar15) && ((uStack_3c < uVar15 || (uStack_40 < uVar10)))) {
                    uVar13 = iStack_48 + uStack_3c + CARRY4(uStack_44,uStack_40);
                    if ((uVar13 < uVar15) || ((uVar13 <= uVar15 && (uStack_44 + uStack_40 <= uVar10)))) {
                        uVar13 = uStack_44;
                        iVar5 = iStack_48;
                    }
                    else {
                        uVar13 = uVar10 - uStack_40;
                        iVar5 = (uVar15 - uStack_3c) - (uVar10 < uStack_40);
                    }
                    if ((uVar9 & 1 << (_param_11[2] & 0x1f)) != 0) {
                        if ((uStack_38 & uStack_34) == 0xffffffff) {
                            uStack_38 = uStack_40;
                            uStack_34 = uStack_3c;
                        }
                        bVar16 = CARRY4(uStack_30,uVar13);
                        uStack_30 = uStack_30 + uVar13;
                        iVar14 = iVar14 + iVar5 + bVar16;
                        iStack_24 = iVar14;
                    }
                    bVar16 = CARRY4(uStack_40,uVar13);
                    uStack_40 = uStack_40 + uVar13;
                    uStack_3c = uStack_3c + iVar5 + bVar16;
                    bVar16 = uStack_44 < uVar13;
                    uStack_44 = uStack_44 - uVar13;
                    iStack_48 = (iStack_48 - iVar5) - bVar16;
                    if (uStack_30 != 0 || iVar14 != 0) {
                        if (_param_11[2] != uVar6) {
                            iVar5 = iStack_48;
                            uVar15 = uStack_44;
                            if (uStack_44 != 0 || iStack_48 != 0) goto code_r0x00003d5a;
                        }
                        uVar10 = param_9;
                        if (param_9 <= param_10) {
                            do {
                                iVar5 = (uVar10 & 0xffff) * 0x20;
                                if ((*(iVar5 + param_7) == uStack_38) && (*(iVar5 + 4 + param_7) == uStack_34)) break;
                                uVar10 = uVar10 + 1;
                            } while (uVar10 <= param_10);
                            iVar14 = iStack_24;
                        }
                        uVar15 = uVar10 & 0xffff;
                        uVar12 = uVar10;
                        if (uVar12 <= param_10) {
                            do {
                                iVar5 = (uVar15 & 0xffff) * 0x20;
                                if ((*(iVar5 + param_7) == uStack_30 + uStack_38) &&
                                   (*(iVar5 + 4 + param_7) == iVar14 + uStack_34 + CARRY4(uStack_30,uStack_38))) break;
                                uVar15 = uVar15 + 1;
                            } while (uVar15 <= param_10);
                        }
                        uVar8 = uVar15;
                        if ((param_12 == '\x02') || ((uVar10 & 0xffff) == (uVar15 & 0xffff) - 1)) {
                            if (param_13 == 0) {
                                pcVar1 = (param_6 & 0xffff) * param_9 + param_10 + param_8;
                                *pcVar1 = *pcVar1 + (uVar15 - uVar10);
                            }
                            else if (uVar12 != uVar8) {
                                piVar11 = param_15;
                                do {
                                    iVar5 = (uVar10 & 0xffff) * 0x20;
                                    if (*piVar11 == param_14) {
                                        return -0x7ffffff7;
                                    }
                                    uVar17 = fcn.00003842(*(iVar5 + param_7),*(iVar5 + 4 + param_7),
                                                          *(iVar5 + 0x10 + param_7),*(iVar5 + 0x14 + param_7),
                                                          (*(iVar5 + 0x18 + param_7) << 0x19) >> 0x19);
                                    piVar11 = uVar17 >> 0x20;
                                    if (uVar17 < 0) {
                                        return uVar17;
                                    }
                                    uVar10 = uVar10 + 1;
                                } while (uVar10 != uVar8);
                            }
                        }
                        else {
                            fcn.00003694(param_8,uVar10,uVar15,1);
                            if (param_13 == 0) {
                                pcVar1 = (param_6 & 0xffff) * param_9 + param_10 + param_8;
                                *pcVar1 = *pcVar1 + *((uVar15 & 0xffff) * 0x20 + 0x1d + param_7);
                            }
                            else if (uVar8 != uVar12) {
                                do {
                                    uVar13 = uVar15 & 0xffff;
                                    uVar10 = uVar15 & 0xffff;
                                    uVar8 = *(uVar13 * 0x20 + 0x1e + param_7);
                                    uVar15 = uVar8;
                                    if (*(uVar15 * (param_6 & 0xffff) + uVar13 + param_8) +
                                        *(uVar13 * (param_6 & 0xffff) + uVar15 + param_8) != 0) {
                                        if (uVar15 == uVar13 - 1) {
                                            iVar5 = (*(uVar15 * 0x20 + 0x18 + param_7) << 0x19) >> 0x19;
                                        }
                                        else {
                                            iVar5 = cVar4;
                                        }
                                        arg_8h = *(uVar15 * 0x20 + param_7);
                                        iVar14 = *(uVar15 * 0x20 + 4 + param_7);
                                        uVar2 = *(uVar13 * 0x20 + param_7);
                                        if (*param_15 == param_14) {
                                            return -0x7ffffff7;
                                        }
                                        iVar5 = fcn.00003842(arg_8h,iVar14,uVar2 - arg_8h,
                                                             (*(uVar13 * 0x20 + 4 + param_7) - iVar14) -
                                                             (uVar2 < arg_8h),iVar5);
                                        if (iVar5 < 0) {
                                            return iVar5;
                                        }
                                    }
                                    if ((uVar15 != uVar13 - 1) &&
                                       (iVar5 = fcn.0000387c(param_3,param_4,param_5,param_6,param_7,param_8,
                                                             uVar15,uVar10,uVar9,2,param_13,param_14,param_15),
                                       iVar5 < 0)) {
                                        return iVar5;
                                    }
                                } while (uVar8 != uVar12);
                            }
                        }
                        uStack_38 = 0xffffffff;
                        uStack_34 = 0xffffffff;
                        iVar14 = 0;
                        uStack_30 = 0;
                        iStack_24 = 0;
                    }
                }
                iVar5 = iStack_48;
                uVar15 = uStack_44;
            }
code_r0x00003d5a:
            _param_11 = _param_11 + 6;
            uStack_18 = uStack_18 + 1;
        } while (uStack_18 < param_5);
    }
    return 0;
}


/* fcn.000031fc @ 0x31fc */

ulong __cdecl fcn.000031fc(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    if (arg_8h == 0 && arg_ch == 0) {
        return CONCAT44(arg_14h,arg_10h);
    }
    return CONCAT44(~arg_ch + (0xfffffffe < ~arg_8h) & arg_ch,~arg_8h + 1U & arg_8h);
}


/* fcn.00006414 @ 0x6414 */

ulong __cdecl fcn.00006414(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    bool bVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    if (arg_8h == 0 && arg_ch == 0) {
        uVar3 = 0;
        iVar2 = 0;
    }
    else {
        uVar1 = fcn.00006494(arg_8h,arg_ch);
        bVar4 = (uVar1 & 0x20) == 0;
        uVar3 = !bVar4 << (uVar1 & 0x1f) | bVar4 >> 0x20 - (uVar1 & 0x1f);
        iVar2 = bVar4 << (uVar1 & 0x1f);
    }
    return CONCAT44(uVar3,iVar2);
}


/* fcn.00000100 @ 0x100 */

uchar * fcn.00000100(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.0000358d @ 0x358d */

char __fastcall
fcn.0000358d(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,int param_6,
            uchar *param_7)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t *puVar4;
    char cVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    uint32_t uStack_10;
    int iStack_c;
    uint32_t uStack_8;
    
    cVar5 = '\0';
    uVar6 = 0;
    uVar3 = 0;
    uStack_8 = 0;
    uStack_8._0_1_ = 0;
    if (param_2 != 0) {
        puVar4 = param_1 + 8;
        iStack_c = param_6;
        uStack_10 = param_5;
        do {
            if (puVar4[-1] <= param_4) {
                if (param_4 <= puVar4[-1]) {
                    if (param_3 < puVar4[-2]) goto code_r0x00003670;
                }
                uVar2 = puVar4[-2] + *puVar4;
                uVar1 = puVar4[-1] + puVar4[1] + CARRY4(puVar4[-2],*puVar4);
                if (param_4 <= uVar1) {
                    if (uVar1 <= param_4) {
                        if (uVar2 <= param_3) goto code_r0x00003670;
                    }
                    if ((uVar3 & 0xff & 1 << (puVar4[2] & 0x1f)) == 0) {
                        uStack_8 = uVar3 & 0xff | 1 << (puVar4[2] & 0x1f);
                        cVar5 = cVar5 + '\x01';
                    }
                    uVar3 = param_4 + iStack_c + CARRY4(param_3,uStack_10);
                    if ((uVar3 < uVar1) || ((uVar3 <= uVar1 && (param_3 + uStack_10 <= uVar2)))) break;
                    uVar3 = param_3 - puVar4[-2];
                    uVar7 = uVar3 - *puVar4;
                    bVar8 = CARRY4(uStack_10,uVar7);
                    uStack_10 = uStack_10 + uVar7;
                    iStack_c = iStack_c +
                               ((((param_4 - puVar4[-1]) - (param_3 < puVar4[-2])) - puVar4[1]) - (uVar3 < *puVar4)) +
                               bVar8;
                    uVar3 = uStack_8;
                    param_3 = uVar2;
                    param_4 = uVar1;
                }
            }
code_r0x00003670:
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 6;
        } while (uVar6 < param_2);
    }
    if (param_7 != NULL) {
        *param_7 = uStack_8;
    }
    return cVar5;
}


/* fcn.000032bc @ 0x32bc */

uint __fastcall
fcn.000032bc(uint32_t *param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5,
            uint32_t param_6,uint32_t param_7,uint32_t param_8)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    int iVar10;
    bool bVar11;
    uint32_t uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    uStack_10 = param_4;
    uStack_28 = param_6;
    uVar1 = param_4 + param_6;
    uStack_1c = 0;
    uStack_c = param_5;
    uVar2 = param_5 + param_7 + CARRY4(param_4,param_6);
    uStack_24 = param_7;
    uStack_2c = 0;
    uVar8 = *param_3;
    uStack_20 = 0;
    uStack_30 = 0;
    uStack_34 = 0;
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (uVar8 != 0) {
        puVar9 = param_1;
        do {
            if (uVar7 == uVar8) {
                if ((puVar9[1] <= param_5) && ((puVar9[1] < param_5 || (*puVar9 <= param_4)))) {
                    uVar3 = puVar9[3] + puVar9[1] + CARRY4(puVar9[2],*puVar9);
                    if ((param_5 <= uVar3) && ((param_5 < uVar3 || (param_4 < puVar9[2] + *puVar9)))) {
                        uStack_20 = param_4 - *puVar9;
                        uStack_30 = (param_5 - puVar9[1]) - (param_4 < *puVar9);
                        uVar7 = uStack_34;
                    }
                }
            }
            if ((puVar9[1] <= uVar2) && ((puVar9[1] < uVar2 || (*puVar9 < uVar1)))) {
                uVar3 = puVar9[3] + puVar9[1] + CARRY4(puVar9[2],*puVar9);
                if ((uVar2 < uVar3) || ((uVar2 <= uVar3 && (uVar1 <= puVar9[2] + *puVar9)))) {
                    uVar6 = param_1[uStack_34 * 6 + 2] - uVar1;
                    uStack_1c = uVar6 + param_1[uStack_34 * 6];
                    uStack_2c = ((param_1[uStack_34 * 6 + 3] - uVar2) - (param_1[uStack_34 * 6 + 2] < uVar1)) +
                                param_1[uStack_34 * 6 + 1] + CARRY4(uVar6,param_1[uStack_34 * 6]);
                    uVar6 = uStack_34;
                    break;
                }
            }
            uStack_34 = uStack_34 + 1;
            puVar9 = puVar9 + 6;
        } while (uStack_34 < uVar8);
    }
    if ((uVar7 == uVar6) && (param_1[uVar7 * 6 + 4] == param_8)) {
        uVar4 = 0x80000014;
    }
    else {
        if (((uVar7 != 0) && (uStack_20 == 0 && uStack_30 == 0)) && (param_1[uVar7 * 6 + -2] == param_8)) {
            uVar7 = uVar7 - 1;
            uStack_28 = param_6 + param_1[uVar7 * 6 + 2];
            uStack_24 = param_7 + param_1[uVar7 * 6 + 3] + CARRY4(param_6,param_1[uVar7 * 6 + 2]);
            uStack_10 = param_4 - param_1[uVar7 * 6 + 2];
            uStack_c = (param_5 - param_1[uVar7 * 6 + 3]) - (param_4 < param_1[uVar7 * 6 + 2]);
        }
        if (((uVar6 != uVar8 - 1) && (uStack_1c == 0 && uStack_2c == 0)) && (param_1[uVar6 * 6 + 10] == param_8)) {
            uVar6 = uVar6 + 1;
            bVar11 = CARRY4(uStack_28,param_1[uVar6 * 6 + 2]);
            uStack_28 = uStack_28 + param_1[uVar6 * 6 + 2];
            uStack_24 = uStack_24 + param_1[uVar6 * 6 + 3] + bVar11;
        }
        iVar10 = (uVar6 - uVar7) + -2;
        if (uStack_20 == 0 && uStack_30 == 0) {
            iVar10 = (uVar6 - uVar7) + -1;
        }
        if (uStack_1c == 0 && uStack_2c == 0) {
            iVar10 = iVar10 + 1;
        }
        if (param_2 < uVar8 - iVar10) {
            uVar4 = 0x80000009;
        }
        else {
            iVar5 = (uVar8 - uVar6) * 0x18 + -0x18;
            if (iVar5 != 0) {
                fcn.00005348(iVar5);
            }
            *param_3 = *param_3 - iVar10;
            uVar8 = uVar7;
            if (uStack_20 != 0 || uStack_30 != 0) {
                uVar8 = uVar7 + 1;
                param_1[uVar7 * 6 + 2] = uStack_20;
                param_1[uVar7 * 6 + 3] = uStack_30;
            }
            if (uStack_1c != 0 || uStack_2c != 0) {
                iVar10 = uVar6 - iVar10;
                param_1[iVar10 * 6 + 1] = uStack_c + uStack_24 + CARRY4(uStack_10,uStack_28);
                param_1[iVar10 * 6 + 2] = uStack_1c;
                param_1[iVar10 * 6 + 3] = uStack_2c;
                param_1[iVar10 * 6] = uStack_10 + uStack_28;
                param_1[iVar10 * 6 + 4] = param_1[uVar6 * 6 + 4];
            }
            param_1[uVar8 * 6] = uStack_10;
            param_1[uVar8 * 6 + 1] = uStack_c;
            param_1[uVar8 * 6 + 3] = uStack_24;
            param_1[uVar8 * 6 + 2] = uStack_28;
            param_1[uVar8 * 6 + 4] = param_8;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.000043ad @ 0x43ad */

uint32_t __fastcall fcn.000043ad(int param_1,int param_2)

{
    int iVar1;
    uint8_t uVar2;
    
    uVar2 = 1;
    for (; iVar1 = *(param_1 + 0x10), iVar1 == 0; param_1 = param_1 + 0x18) {
        if (param_2 == 1) goto code_r0x000043e7;
        param_2 = param_2 + -1;
    }
    if (iVar1 != 1) {
        if (iVar1 != 4) {
            if (iVar1 == 5) goto code_r0x000043e1;
            if (iVar1 - 6U != 0) {
                return iVar1 - 6U & 0xffffff00;
            }
        }
        return 0x51;
    }
code_r0x000043e1:
    uVar2 = 1 << (*(param_1 + 0x10) & 0x1f) | 1;
code_r0x000043e7:
    return uVar2;
}


/* fcn.00003d83 @ 0x3d83 */

//WARNING: Removing unreachable block (ram,0x00003e2b)

int __fastcall
fcn.00003d83(int param_1,int param_2,int32_t param_3,int32_t param_4,int param_5,int param_6,uint32_t *param_7,
            uint param_8,int param_9,int *param_10)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t uVar5;
    uchar uVar6;
    char cVar7;
    int16_t iVar8;
    int iVar9;
    char cVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint8_t uVar13;
    uint32_t *puVar14;
    uchar *puVar15;
    int arg_10h;
    uint32_t uVar16;
    uint32_t *puVar17;
    uint32_t uVar18;
    bool bVar19;
    uint64_t uVar20;
    uint32_t uStack_30;
    int iStack_2c;
    uint32_t uStack_28;
    ulong uStack_24;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    int iStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    iVar4 = CONCAT44(uStack_28,uStack_30);
    uVar2 = CONCAT44(uStack_c,uStack_8);
    uVar20 = CONCAT44(uStack_24._4_4_,uStack_24);
    iVar9 = param_5 * 0x18;
    uVar12 = *(iVar9 + -0x18 + param_2);
    puVar17 = iVar9 + -0x10 + param_2;
    uStack_10 = uVar12 + *puVar17;
    uStack_4 = *(iVar9 + -0x14 + param_2) + *(iVar9 + -0xc + param_2) + CARRY4(uVar12,*puVar17);
    uVar12 = 0;
    uStack_18 = 0;
    iStack_2c = param_2;
    iStack_14 = param_1;
    if (param_5 != 0) {
        puVar17 = param_2 + 8;
        uStack_1c = param_5;
        do {
            uVar16 = *puVar17;
            uVar18 = puVar17[1];
            uVar2 = CONCAT44(uStack_c,uVar18);
            iVar3 = *(puVar17 + -2);
            iVar4 = *(puVar17 + -2);
            if (uVar16 != 0 || uVar18 != 0) {
                puVar14 = param_6 + 0x18 + uVar12 * 0x20;
                do {
                    uStack_28 = iVar3 >> 0x20;
                    uStack_30 = iVar3;
                    uStack_c = uVar2 >> 0x20;
                    uStack_8 = uVar2;
                    uStack_24 = uVar20;
                    uVar20 = fcn.000031fc(uStack_30,uStack_28,param_3,param_4);
                    uStack_c = uVar20 >> 0x20;
                    uStack_8 = uVar20;
                    uVar2 = uVar20;
                    if (CONCAT44(uVar18,uVar16) < uVar20) {
                        uStack_24 = uVar20;
                        uVar20 = fcn.00006414(uVar16,uVar18);
                        uVar2 = CONCAT44(uStack_c,uStack_8);
                    }
                    uStack_24._4_4_ = uVar20 >> 0x20;
                    uStack_24._0_4_ = uVar20;
                    if (uStack_18 < *param_7 >> 5) {
                        puVar14[-6] = uStack_30;
                        puVar14[-5] = uStack_28;
                        *(puVar14 + -4) = uVar2;
                        uVar12 = puVar17[2];
                        puVar14[-1] = uStack_24._4_4_;
                        *puVar14 = *puVar14 ^ (uVar12 ^ *puVar14) & 0x7f;
                        puVar14[-2] = uStack_24;
                    }
                    iVar3 = uVar20 + CONCAT44(uStack_28,uStack_30);
                    bVar19 = uVar16 < uStack_24;
                    uVar16 = uVar16 - uStack_24;
                    uVar18 = (uVar18 - uStack_24._4_4_) - bVar19;
                    uVar12 = uStack_18 + 1;
                    puVar14 = puVar14 + 8;
                    uStack_18 = uVar12;
                } while (uVar16 != 0 || uVar18 != 0);
                iVar4 = iVar3;
            }
            uStack_c = uVar2 >> 0x20;
            uStack_24._4_4_ = uVar20 >> 0x20;
            puVar17 = puVar17 + 6;
            uStack_1c = uStack_1c + -1;
        } while (uStack_1c != 0);
        uStack_1c = 0;
    }
    uVar16 = uVar12 + 1;
    uVar18 = (uVar12 + 0x21) * uVar16;
    if (*param_7 < uVar18) {
        *param_7 = uVar18;
        iVar9 = -0x7ffffffb;
    }
    else {
        puVar17 = uVar16 * 0x20 + param_6;
        puVar17[-8] = uStack_10;
        puVar17[-7] = uStack_4;
        uStack_24._0_4_ = puVar17;
        if (uVar16 != 0) {
            param_7 = puVar17;
            uVar18 = 0;
            do {
                uStack_28 = iVar4 >> 0x20;
                uStack_30 = iVar4;
                uStack_c = uVar2 >> 0x20;
                uStack_8 = uVar2;
                uVar11 = uVar18 + 1;
                if (uVar11 != 0) {
                    fcn.00000100(param_7,uVar11,0);
                    iVar4 = CONCAT44(uStack_28,uStack_30);
                    uVar2 = CONCAT44(uStack_c,uStack_8);
                }
                uStack_28 = iVar4 >> 0x20;
                uStack_30 = iVar4;
                uStack_c = uVar2 >> 0x20;
                uStack_8 = uVar2;
                iVar9 = (uVar16 - uVar18) + -1;
                if (iVar9 != 0) {
                    fcn.00000100((uVar12 + 2) * uVar18 + 1 + puVar17,iVar9,0xff);
                    iVar4 = CONCAT44(uStack_28,uStack_30);
                    uVar2 = CONCAT44(uStack_c,uStack_8);
                }
                param_7 = param_7 + uVar16;
                uVar18 = uVar11;
            } while (uVar11 < uVar16);
        }
        uVar18 = 0;
        if (uVar12 != 0) {
            param_7 = param_6 + 0x18;
            puVar15 = puVar17 + 1;
            puVar14 = param_7;
            do {
                puVar17 = uVar16 + puVar17;
                if ((*puVar14 << 0x19) >> 0x19 == iStack_14) {
                    *puVar15 = 0;
                    *(puVar17 + uVar18) = 1;
                }
                else {
                    *puVar15 = 1;
                    *(puVar17 + uVar18) = 0;
                }
                uVar18 = uVar18 + 1;
                puVar14 = puVar14 + 8;
                puVar15 = puVar15 + uVar12 + 2;
            } while (uVar18 < uVar12);
            puVar17 = uStack_24;
        }
        uVar13 = 2;
        param_7 = CONCAT31(param_7._1_3_,2);
        do {
            if (uVar16 != 0) {
                uStack_18 = 0;
                uVar18 = 2;
                do {
                    uStack_30 = iVar4;
                    uVar11 = uVar18 & 0xffff;
                    uStack_1c = uVar18 & 0xffff;
                    if (uVar11 < uVar16) {
                        uStack_8 = uStack_18 << 5;
                        do {
                            puVar17 = uStack_24;
                            uStack_c = *(uStack_8 + param_6);
                            uStack_10 = *(uStack_8 + 4 + param_6);
                            uVar1 = *(uVar11 * 0x20 + param_6);
                            uStack_28 = uVar1 - uStack_c;
                            uStack_24._4_4_ = (*(uVar11 * 0x20 + 4 + param_6) - uStack_10) - (uVar1 < uStack_c);
                            uVar1 = *(uStack_8 + 0xc + param_6);
                            uVar2 = CONCAT44(uStack_c,uStack_8);
                            iVar4 = CONCAT44(uStack_28,uStack_30);
                            if (uVar1 < uStack_24._4_4_) break;
                            if (uVar1 <= uStack_24._4_4_) {
                                uVar2 = CONCAT44(uStack_c,uStack_8);
                                iVar4 = CONCAT44(uStack_28,uStack_30);
                                if (*(uStack_8 + 8 + param_6) < uStack_28) break;
                            }
                            if ((*(uStack_18 * uVar16 + uVar11 + uStack_24) == -1) &&
                               ((uStack_28 - 1 & uStack_28) == 0 &&
                                ((uStack_24._4_4_ - 1) + (uStack_28 != 0) & uStack_24._4_4_) == 0)) {
                                uVar5 = fcn.0000358d(uStack_c,uStack_10,uStack_28,uStack_24._4_4_,&uStack_30);
                                iVar4 = CONCAT44(uStack_28,uStack_30);
                                uVar2 = CONCAT44(uStack_c,uStack_8);
                                if (uVar5 == uVar13) {
                                    fcn.0000387c(param_3,param_4,param_5,uVar16,param_6,puVar17,uVar18 - 2,
                                                 uStack_1c,uStack_30,param_7,0,0,0);
                                }
                                else if (uVar13 == 2) break;
                            }
                            iVar4 = CONCAT44(uStack_28,uStack_30);
                            uVar2 = CONCAT44(uStack_c,uStack_8);
                            uStack_1c = uStack_1c + 1;
                            uVar11 = uStack_1c & 0xffff;
                        } while (uVar11 < uVar16);
                    }
                    uStack_18 = uVar18 - 1 & 0xffff;
                    uVar18 = uVar18 + 1;
                } while (uStack_18 < uVar16);
            }
            uStack_28 = iVar4 >> 0x20;
            uStack_30 = iVar4;
            uStack_c = uVar2 >> 0x20;
            uStack_8 = uVar2;
            uVar13 = uVar13 + 1;
            param_7 = CONCAT31(param_7._1_3_,uVar13);
        } while (uVar13 < 4);
        iVar9 = 0;
        fcn.00003694(puVar17,0,uVar12,0);
        iVar8 = uVar12;
        uStack_c = uVar12;
        while (iVar8 != 0) {
            uStack_10 = uStack_c & 0xffff;
            uStack_24._4_4_ = uStack_10 * 0x20;
            param_7._1_3_ = param_7 >> 8;
            param_7 = CONCAT31(param_7._1_3_,0xff);
            uStack_30 = uStack_30 & 0xffffff00;
            uStack_1c = *(uStack_24._4_4_ + 0x1e + param_6);
            uStack_c = uStack_1c;
            uStack_8 = uStack_10;
            if (*(uStack_1c * uVar16 + uStack_10 + puVar17) != '\0') {
                uStack_18 = *(uStack_1c * 0x20 + param_6);
                arg_10h = *(uStack_24._4_4_ + param_6) - uStack_18;
                iVar9 = *(uStack_1c * 0x20 + 4 + param_6);
                uStack_4 = (*(uStack_24._4_4_ + 4 + param_6) - iVar9) - (*(uStack_24._4_4_ + param_6) < uStack_18);
                uVar6 = fcn.0000358d(uStack_18,iVar9,arg_10h,uStack_4,&uStack_30);
                puVar17 = uStack_24;
                param_7 = CONCAT31(param_7._1_3_,uVar6);
                cVar7 = '\a';
                for (cVar10 = uStack_30; '\0' < cVar10; cVar10 = cVar10 * '\x02') {
                    cVar7 = cVar7 + -1;
                }
                if (*param_10 == param_9) {
                    iVar9 = -0x7ffffff7;
                    break;
                }
                iVar9 = fcn.00003842(uStack_18,iVar9,arg_10h,uStack_4,cVar7);
                if (iVar9 < 0) break;
            }
            if (uStack_1c != uStack_8 - 1) {
                if (param_7 == -1) {
                    iVar9 = uStack_1c * 0x20;
                    uVar6 = fcn.0000358d(*(iVar9 + param_6),*(iVar9 + 4 + param_6),
                                         *(uStack_24._4_4_ + param_6) - *(iVar9 + param_6),
                                         (*(uStack_24._4_4_ + 4 + param_6) - *(iVar9 + 4 + param_6)) -
                                         (*(uStack_24._4_4_ + param_6) < *(iVar9 + param_6)),&uStack_30);
                    param_7 = CONCAT31(param_7._1_3_,uVar6);
                }
                iVar9 = fcn.0000387c(param_3,param_4,param_5,uVar16,param_6,puVar17,uStack_c,uStack_10,uStack_30
                                     ,param_7,param_8,param_9,param_10);
                if (iVar9 < 0) break;
            }
            iVar8 = uStack_c;
        }
    }
    return iVar9;
}


/* fcn.00006494 @ 0x6494 */

//WARNING: Possible PIC construction at 0x000064a7: Changing call to branch
//WARNING: Removing unreachable block (ram,0x000064ac)

int fcn.00006494(int param_1,int param_2)

{
    int iVar1;
    
    if (param_2 != 0) {
        param_1 = param_2;
    }
    if (param_1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < param_1; param_1 = param_1 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.00004510 @ 0x4510 */

//WARNING: Removing unreachable block (ram,0x00004764)
//WARNING: Removing unreachable block (ram,0x000045a9)
//WARNING: Removing unreachable block (ram,0x00004670)

int __fastcall
fcn.00004510(uint32_t param_1,int param_2,int32_t param_3,int32_t param_4,uint32_t param_5,uint param_6,
            uint32_t *param_7,uint param_8,int param_9,int *param_10)

{
    uint8_t uVar1;
    int iVar2;
    int extraout_ECX;
    uint32_t extraout_ECX_00;
    uint32_t uVar3;
    int extraout_ECX_01;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    ulong uStack_10;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    uStack_14 = 0;
    *param_10 = 0;
    uStack_20 = 0;
    iStack_18 = param_2;
    uStack_8 = param_1;
    if (param_5 != 0) {
        do {
            uStack_2c = *(uStack_20 * 0x18 + param_2);
            uVar5 = *(uStack_20 * 0x18 + 4 + param_2);
            uStack_24 = uVar5;
            if (uStack_20 < param_5) {
                iVar9 = fcn.000031fc(uStack_2c,uVar5,param_3,param_4);
                uVar11 = iVar9 + CONCAT44(uVar5,uStack_2c);
                puVar4 = extraout_ECX + 8 + param_2;
                do {
                    uStack_4 = puVar4[-2] + *puVar4;
                    uVar6 = uStack_2c;
                    if (uVar11 <= CONCAT44(puVar4[-1] + puVar4[1] + CARRY4(puVar4[-2],*puVar4),uStack_4)) {
                        do {
                            uStack_10._4_4_ = iVar9 >> 0x20;
                            uStack_10._0_4_ = iVar9;
                            uStack_1c = uVar11 >> 0x20;
                            uStack_28 = uVar11;
                            if (uStack_14 <= *param_7) {
                                param_2 = iStack_18;
                                if (puVar4[2] != uStack_8) {
                                    if (*param_10 == param_9) {
                                        return -0x7ffffff7;
                                    }
                                    iVar2 = fcn.00003842(uStack_2c,uVar5,uStack_10,uStack_10._4_4_,puVar4[2]);
                                    uStack_10 = iVar9;
                                    if (iVar2 < 0) {
                                        return iVar2;
                                    }
                                    iVar9 = uStack_10;
                                }
                            }
                            uVar5 = uStack_1c;
                            uStack_24 = uStack_1c;
                            uStack_10 = iVar9;
                            iVar9 = fcn.000031fc(uStack_28,uStack_1c,param_3,param_4);
                            uVar11 = iVar9 + CONCAT44(uVar5,extraout_ECX_00);
                            uStack_4 = puVar4[-2] + *puVar4;
                            uStack_2c = extraout_ECX_00;
                            uVar6 = uStack_28;
                        } while (iVar9 + CONCAT44(uVar5,extraout_ECX_00) <=
                                 CONCAT44(puVar4[-1] + puVar4[1] + CARRY4(puVar4[-2],*puVar4),uStack_4));
                    }
                    uStack_2c = uVar6;
                    uStack_10._4_4_ = iVar9 >> 0x20;
                    uStack_1c = uVar11 >> 0x20;
                    uVar3 = puVar4[-2] - uStack_2c;
                    uVar7 = puVar4[-1];
                    puVar4[-1] = uVar5;
                    uVar6 = *puVar4;
                    *puVar4 = *puVar4 + uVar3;
                    puVar4[1] = puVar4[1] + ((uVar7 - uVar5) - (puVar4[-2] < uStack_2c)) + CARRY4(uVar6,uVar3);
                    puVar4[-2] = uStack_2c;
                    if (*puVar4 != 0 || puVar4[1] != 0) break;
                    uStack_20 = uStack_20 + 1;
                    puVar4 = puVar4 + 6;
                } while (uStack_20 < param_5);
            }
            if (uStack_20 == param_5) break;
            uStack_10._0_4_ = uStack_20 * 0x18 + param_2;
            uVar1 = fcn.000043ad();
            uStack_10._4_4_ = uStack_20 + 1;
            uStack_1c = uStack_20;
            if (uStack_10._4_4_ < param_5) {
                puVar4 = uStack_10 + 10;
                uVar5 = uStack_10._4_4_;
                do {
                    if ((uVar1 & 1 << (*puVar4 & 0x1f)) == 0) break;
                    uStack_1c = uStack_1c + 1;
                    puVar4 = puVar4 + 6;
                    uVar5 = uVar5 + 1;
                } while (uVar5 < param_5);
                param_2 = iStack_18;
                uStack_4 = uVar1;
            }
            uVar10 = fcn.000031fc(uStack_2c,uStack_24,param_3,param_4);
            iVar2 = extraout_ECX_01 * 0x18;
            uVar5 = *(iVar2 + 8 + param_2);
            uVar6 = uVar5 - uStack_2c;
            uVar11 = fcn.00006414(uVar6 + *(iVar2 + param_2),
                                  ((*(iVar2 + 0xc + param_2) - uStack_24) - (uVar5 < uStack_2c)) +
                                  *(iVar2 + 4 + param_2) + CARRY4(uVar6,*(iVar2 + param_2)));
            if (uVar10 < uVar11) {
                uVar11 = uVar10;
            }
            iVar9 = uVar11 + CONCAT44(uStack_24,uStack_2c);
            uVar7 = iVar9;
            uVar6 = iVar9 >> 0x20;
            uVar5 = uStack_20;
            if (uStack_10._4_4_ < param_5) {
                puVar4 = uStack_10;
                do {
                    if ((uVar6 < puVar4[7]) || ((uVar6 == puVar4[7] && (uVar7 <= puVar4[6])))) break;
                    uVar5 = uVar5 + 1;
                    uStack_10._4_4_ = uStack_10._4_4_ + 1;
                    puVar4 = puVar4 + 6;
                } while (uStack_10._4_4_ < param_5);
                param_2 = iStack_18;
            }
            iVar8 = uVar5 * 0x18;
            uStack_4 = *(iVar8 + 8 + param_2);
            uStack_10._4_4_ = *(iVar8 + 0xc + param_2);
            *(iVar8 + 8 + param_2) = uVar7 - *(iVar8 + param_2);
            *(iVar8 + 0xc + param_2) = (uVar6 - *(iVar8 + 4 + param_2)) - (uVar7 < *(iVar8 + param_2));
            uStack_1c = *param_7;
            iVar2 = fcn.00003d83(param_3,param_4,(uVar5 - uStack_20) + 1,param_6,&uStack_1c,param_8,param_9,
                                 param_10);
            if (iVar2 == -0x7ffffffb) {
                if (uStack_14 <= uStack_1c) {
                    uStack_14 = uStack_1c;
                }
                iVar2 = 0;
            }
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = *(iVar8 + 0xc + param_2);
            if ((uStack_4 == *(iVar8 + 8 + param_2)) && (uStack_10._4_4_ == iVar2)) {
                uVar5 = uVar5 + 1;
            }
            else {
                puVar4 = iVar8 + 8 + param_2;
                uVar3 = *puVar4;
                *(iVar8 + param_2) = uVar7;
                *(iVar8 + 4 + param_2) = uVar6;
                *(iVar8 + 8 + param_2) = uStack_4 - *puVar4;
                *(iVar8 + 0xc + param_2) = (uStack_10._4_4_ - iVar2) - (uStack_4 < uVar3);
            }
            uStack_20 = uVar5;
        } while (uVar5 < param_5);
        if (*param_7 < uStack_14) {
            *param_7 = uStack_14;
            return -0x7ffffffb;
        }
    }
    return 0;
}


/* fcn.000043eb @ 0x43eb */

void __fastcall fcn.000043eb(int param_1,uint32_t param_2,int param_3,uint32_t param_4,int param_5)

{
    int iVar1;
    int *piVar2;
    int *piVar3;
    uint32_t uVar4;
    uint32_t uStack_10;
    uint32_t uStack_8;
    
    uStack_8 = 0;
    if (param_2 != 0) {
        piVar2 = param_1 + 8;
        do {
            *(uStack_8 + param_5) = 0;
            if (*piVar2 != 0 || piVar2[1] != 0) {
                uStack_10 = 0;
                if (param_4 != 0) {
                    piVar3 = param_3 + 0x10;
                    do {
                        if ((((piVar2[-2] == piVar3[-4]) && (piVar2[-1] == piVar3[-3])) && (*piVar2 == piVar3[-2])) &&
                           ((piVar2[1] == piVar3[-1] && (piVar2[2] == *piVar3)))) break;
                        uStack_10 = uStack_10 + 1;
                        piVar3 = piVar3 + 6;
                    } while (uStack_10 < param_4);
                }
                if (uStack_10 == param_4) {
                    *piVar2 = 0;
                    piVar2[1] = 0;
                    *(uStack_8 + param_5) = 1;
                }
                else {
                    *(uStack_10 * 0x18 + 8 + param_3) = 0;
                    *(uStack_10 * 0x18 + 0xc + param_3) = 0;
                }
            }
            uStack_8 = uStack_8 + 1;
            piVar2 = piVar2 + 6;
        } while (uStack_8 < param_2);
    }
    uVar4 = 0;
    do {
        if (param_4 == 0) {
            return;
        }
        if (*(param_3 + 8) != 0 || *(param_3 + 0xc) != 0) {
            if (uVar4 < param_2) {
                piVar2 = param_1 + 8 + uVar4 * 0x18;
                do {
                    if (*piVar2 == 0 && piVar2[1] == 0) break;
                    uVar4 = uVar4 + 1;
                    piVar2 = piVar2 + 6;
                } while (uVar4 < param_2);
            }
            iVar1 = uVar4 * 0x18 + param_1;
            if (iVar1 != param_3) {
                section..text(iVar1,param_3,0x18);
            }
            *(uVar4 + param_5) = 1;
        }
        param_3 = param_3 + 0x18;
        param_4 = param_4 - 1;
    } while( true );
}


/* fcn.00002f6f @ 0x2f6f */

//WARNING: Removing unreachable block (ram,0x00003023)

uint __cdecl fcn.00002f6f(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t in_ECX;
    uint32_t uVar4;
    uint32_t *in_EDX;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    int32_t var_34h;
    int32_t var_30h;
    int var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar4 = *arg_ch + 1;
    if (uVar4 < 0xb) {
        puVar9 = uVar4 * 0xc + 0x7134;
        iVar7 = 0;
        do {
            if ((in_EDX[1] != 0) || (*puVar9 <= *in_EDX)) {
                uVar2 = puVar9[1] * 8;
                uVar5 = (puVar9[1] * 8 >> 0x20) + CARRY4(uVar2,*puVar9);
                if ((in_EDX[1] < uVar5) || ((in_EDX[1] <= uVar5 && (*in_EDX < uVar2 + *puVar9)))) break;
            }
            uVar4 = uVar4 + 1;
            puVar9 = puVar9 + 3;
        } while (uVar4 < 0xb);
        if (uVar4 < 0xb) {
            uVar5 = *in_EDX - *(uVar4 * 0xc + 0x7134);
            uVar2 = *(uVar4 * 0xc + 0x7138);
            uVar3 = uVar5 / uVar2;
            if (uVar5 % uVar2 == 0) {
                uVar1 = (8 - uVar3) * uVar2;
                if (*arg_8h < uVar1) {
                    if (*arg_8h % uVar2 != 0) {
                        return 0x80000003;
                    }
                    iVar7 = (8 - *arg_8h / uVar2) - uVar3;
                    uVar1 = *arg_8h;
                }
                var_18h = uVar1 >> 0x20;
                var_14h = uVar1;
                *arg_10h = 0xffffffff;
                *(arg_10h + 4) = 0xffffffff;
                uVar2 = in_ECX * 0x1010101;
                uVar5 = (in_ECX * 0x1010101 >> 0x20) + in_ECX * 0x1010101;
                *arg_14h = uVar2;
                *(arg_14h + 4) = uVar5;
                if (uVar3 != 0) {
                    uVar3 = uVar3 << 3;
                    var_2ch._0_1_ = uVar3;
                    uVar8 = 0;
                    if ((uVar3 & 0x20) == 0) {
                        uVar8 = 0xffffffff;
                    }
                    *arg_10h = uVar8 << (var_2ch & 0x1f);
                    *(arg_10h + 4) = -1 << (var_2ch & 0x1f) | uVar8 >> 0x20 - (var_2ch & 0x1f);
                    uVar8 = 0;
                    uVar6 = uVar2;
                    if ((uVar3 & 0x20) == 0) {
                        uVar8 = uVar2;
                        uVar6 = uVar5;
                    }
                    *arg_14h = uVar8 << (var_2ch & 0x1f) & uVar2;
                    *(arg_14h + 4) = (uVar6 << (var_2ch & 0x1f) | uVar8 >> 0x20 - (var_2ch & 0x1f)) & uVar5;
                }
                if (iVar7 != 0) {
                    uVar2 = *(arg_10h + 4);
                    uVar8 = iVar7 << 3;
                    var_2ch._0_1_ = uVar8;
                    uVar5 = uVar2;
                    uVar3 = 0;
                    if ((uVar8 & 0x20) == 0) {
                        uVar5 = *arg_10h;
                        uVar3 = uVar2;
                    }
                    *arg_10h = *arg_10h & (uVar5 >> (var_2ch & 0x1f) | uVar3 << 0x20 - (var_2ch & 0x1f));
                    *(arg_10h + 4) = uVar2 & uVar3 >> (var_2ch & 0x1f);
                    uVar2 = *(arg_14h + 4);
                    uVar5 = uVar2;
                    uVar3 = 0;
                    if ((uVar8 & 0x20) == 0) {
                        uVar5 = *arg_14h;
                        uVar3 = uVar2;
                    }
                    *arg_14h = *arg_14h & (uVar5 >> (var_2ch & 0x1f) | uVar3 << 0x20 - (var_2ch & 0x1f));
                    *(arg_14h + 4) = uVar2 & uVar3 >> (var_2ch & 0x1f);
                }
                uVar2 = *arg_8h;
                *arg_8h = *arg_8h - var_14h;
                *(arg_8h + 4) = (*(arg_8h + 4) - var_18h) - (uVar2 < var_14h);
                uVar2 = *in_EDX;
                *in_EDX = *in_EDX + var_14h;
                in_EDX[1] = in_EDX[1] + var_18h + CARRY4(uVar2,var_14h);
                *arg_ch = uVar4;
                return 0;
            }
        }
    }
    return 0x80000003;
}


/* fcn.00002e17 @ 0x2e17 */

uint64_t __fastcall fcn.00002e17(uint *param_1)

{
    uint64_t uVar1;
    uint8_t in_IF;
    uint in_CR4;
    int32_t var_8h;
    int32_t var_4h;
    
    *(param_1 + 1) = in_IF & 1;
    *param_1 = in_CR4;
    uVar1 = rdmsr(0x2ff);
    wrmsr(0x2ff,uVar1 & 0xfffffffffffff7ff);
    return uVar1 & 0xfffffffffffff7ff;
}


/* fcn.0000645b @ 0x645b */

ulong __cdecl fcn.0000645b(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    ulong uVar1;
    uint in_ECX;
    uint32_t uVar2;
    uint32_t uVar3;
    int32_t var_4h;
    
    uVar1 = rdmsr(in_ECX);
    uVar2 = uVar1 & arg_8h | arg_10h;
    uVar3 = uVar1 >> 0x20 & arg_ch | arg_14h;
    wrmsr(in_ECX,CONCAT44(uVar3,uVar2));
    return CONCAT44(uVar3,uVar2);
}


/* fcn.00002e82 @ 0x2e82 */

void fcn.00002e82(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return;
}


/* fcn.000052a1 @ 0x52a1 */

int16_t * __fastcall fcn.000052a1(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.000064e2 @ 0x64e2 */

uint __fastcall fcn.000064e2(char param_1,uint32_t param_2,uint param_3,int32_t param_4)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar2 = 0x80000002;
    if (param_1 == '\x02') {
        uVar1 = fcn.00006624();
        if ((uVar1 & 0xff) <= param_2) {
            return 0x80000002;
        }
        uVar2 = fcn.00006642(param_4);
    }
    if ((param_1 == '\x01') && (uVar1 = fcn.00002dcf(), param_2 < (uVar1 & 0xff))) {
        uVar2 = fcn.00005ad8(param_4);
    }
    return uVar2;
}


/* fcn.0000658b @ 0x658b */

uint __fastcall fcn.0000658b(uint32_t param_1,char param_2,uint param_3,uint param_4,uint32_t *param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    uVar2 = 0;
    if (param_1 != 0) {
        do {
            uVar1 = fcn.00005131(0x3f00548,0);
            *param_5 = uVar1;
            if (uVar1 == 0xffffffff) {
                return 0;
            }
            if (param_2 == '\0') {
                uVar1 = ~uVar1;
            }
            if ((uVar1 & 1) != 0) {
                return 1;
            }
            fcn.0000543f();
            uVar2 = uVar2 + 1;
        } while (uVar2 < param_1);
    }
    return 0;
}


/* fcn.000065e0 @ 0x65e0 */

uchar __cdecl fcn.000065e0(int32_t arg_18h)

{
    uchar uVar1;
    uint uVar2;
    int32_t var_4h;
    
    uVar2 = 0;
    fcn.00005168(0x3f0054c,0);
    uVar1 = fcn.0000658b(uVar2,uVar2,&var_4h);
    fcn.00005168(0x3f0054c,0);
    return uVar1;
}


/* fcn.0000653a @ 0x653a */

void fcn.0000653a(void)

{
    char cVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = 15000;
    cVar1 = fcn.000065e0(15000);
    if (cVar1 != '\0') {
        do {
            iVar3 = iVar3 + -1;
            iVar2 = fcn.00005131(0x3f00548,0);
            if (iVar2 == -1) {
                return;
            }
            iVar2 = fcn.00005131(0x3f00000,0);
            if (iVar2 != -1) {
                return;
            }
            fcn.0000543f();
        } while (iVar3 != 0);
    }
    return;
}


/* fcn.00002d85 @ 0x2d85 */

uint __fastcall fcn.00002d85(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002d47(param_1);
    if (cVar1 != '\x01') {
        cVar1 = fcn.00002d47(param_1);
        if (cVar1 != '\x04') {
            return 0;
        }
    }
    return 1;
}


/* fcn.00002dcf @ 0x2dcf */

uint32_t __fastcall fcn.00002dcf(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00002d47(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0x1c;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 0xc;
}


/* fcn.00005cf9 @ 0x5cf9 */

int fcn.00005cf9(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.0000259e();
    uVar2 = fcn.00002582();
    for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
        fcn.00002558();
    }
    iVar3 = fcn.00005324();
    if (iVar3 != 0) {
        fcn.0000535e();
    }
    return iVar3;
}


/* fcn.000021c6 @ 0x21c6 */

uint __fastcall fcn.000021c6(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int8_t iVar5;
    
    cVar1 = fcn.00005f15();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.00006309();
        if (*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.00005e68();
            iVar5 = (param_1 & 7) << 2;
            *param_2 = (uVar4 & 3 << iVar5) >> iVar5;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00005eb4 @ 0x5eb4 */

uint __fastcall fcn.00005eb4(uint32_t param_1)

{
    char cVar1;
    uint32_t var_4h;
    
    cVar1 = fcn.00002da1();
    if (((param_1 >> 0x18 & 0xf) == (cVar1 != '\0') + 8) && (fcn.00006309(), (param_1 >> 0x10 & 0x1f) < param_1)) {
        return 1;
    }
    return 0;
}


/* fcn.00002267 @ 0x2267 */

int __fastcall fcn.00002267(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.00005f15();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00001bae((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.00002381 @ 0x2381 */

void __fastcall fcn.00002381(uint8_t param_1)

{
    fcn.00002351(1 << (param_1 & 0x1f));
    return;
}


/* fcn.000022f1 @ 0x22f1 */

int __fastcall fcn.000022f1(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.00005f15();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00001bae((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.0000240a @ 0x240a */

void __fastcall fcn.0000240a(uint8_t param_1)

{
    fcn.000023da(1 << (param_1 & 0x1f));
    return;
}


/* fcn.00001e4a @ 0x1e4a */

int __fastcall fcn.00001e4a(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    uStack_18 = param_1 & 0x1f;
    cVar1 = fcn.00005f15();
    if ((cVar1 == '\0') || (cVar1 = fcn.00005ef5(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    uStack_14 = fcn.00005f50();
    uStack_10 = fcn.00005f50();
    uStack_c = fcn.00005f50();
    fcn.00006081(param_2);
    uVar3 = (param_1 & 0x1ff) >> 5;
    iVar2 = fcn.00001bae(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    *param_2 = ((uStack_1c >> (uStack_18 & 0x1f)) << 6 ^ *param_2) & 0x40 ^ *param_2 | 0x20;
    iVar2 = fcn.00001bae(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = ~((uStack_1c >> (uStack_18 & 0x1f)) << 10) & 0x400 | param_2[1] & 0xffffe3ff | 0x200;
    iVar2 = fcn.00001bae(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = param_2[1] | ~((uStack_1c >> (uStack_18 & 0x1f)) << 0xc) & 0x1000 | 0x800;
    return 0;
}


/* fcn.00006624 @ 0x6624 */

uint __fastcall fcn.00006624(uint param_1)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.00001a44(param_1);
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.00006642 @ 0x6642 */

uint __cdecl fcn.00006642(int32_t arg_8h)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t in_ECX;
    uint uVar3;
    uint *in_EDX;
    
    uVar2 = fcn.00006624();
    if ((uVar2 & 0xff) < in_ECX) {
        return 0x80000002;
    }
    uVar3 = 0;
    if (in_ECX != 0) {
        if (in_ECX == 1) {
            *in_EDX = 1;
            goto code_r0x000066a1;
        }
        if (in_ECX == 2) {
            cVar1 = fcn.00001a44();
            if (cVar1 != '\x01') {
                *in_EDX = 6;
                *arg_8h = 2;
                return 0;
            }
            uVar3 = 1;
            *in_EDX = 1;
            goto code_r0x000066a1;
        }
    }
    *in_EDX = 6;
code_r0x000066a1:
    *arg_8h = uVar3;
    return 0;
}


/* fcn.00005ad8 @ 0x5ad8 */

uint __fastcall fcn.00005ad8(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    char cVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    
    uVar2 = fcn.00002dcf();
    if (param_1 < (uVar2 & 0xff)) {
        iVar4 = (param_1 >> 2) * 3;
        cVar1 = *(iVar4 + 0x6c36);
        *param_2 = *(iVar4 + 0x6c34);
        *param_3 = *((*(iVar4 + 0x6c35) | 0xfffffd00) << 0x10) >> ((param_1 - cVar1) * '\x04' & 0x1fU) & 7;
        uVar3 = 0;
    }
    else {
        uVar3 = 0x80000002;
    }
    return uVar3;
}


/* fcn.00001a44 @ 0x1a44 */

void __fastcall fcn.00001a44(uint param_1)

{
    int32_t var_4h;
    
    fcn.00001b02(param_1,0,0);
    fcn.00005037(2,0);
    fcn.00005b31();
    return;
}


/* fcn.00005104 @ 0x5104 */

void fcn.00005104(int32_t param_1,int32_t param_2)

{
    fcn.00005037(param_1,param_2);
    fcn.00005072(param_1,param_2);
    return;
}


