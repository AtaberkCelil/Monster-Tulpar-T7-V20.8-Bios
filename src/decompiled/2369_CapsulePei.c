// decompiled by r2ghidra: 2369_CapsulePei.te
// functions: 44

/* fcn.0000168b @ 0x168b */

void __fastcall fcn.0000168b(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0x23c */

void entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd276c4);
    return;
}


/* fcn.00001948 @ 0x1948 */

void fcn.00001948(void)

{
    return;
}


/* fcn.00001875 @ 0x1875 */

ulong __fastcall fcn.00001875(uint8_t param_1)

{
    bool bVar1;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    bVar1 = (param_1 & 0x20) == 0;
    return CONCAT44(!bVar1 << (param_1 & 0x1f) | bVar1 >> 0x20 - (param_1 & 0x1f),bVar1 << (param_1 & 0x1f));
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


/* fcn.00000200 @ 0x200 */

void fcn.00000200(int param_1)

{
    //WARNING: Could not recover jumptable at 0x00000239. Too many branches
    //WARNING: Treating indirect jump as call
    (**(param_1 + 0x14))();
    return;
}


/* fcn.00000160 @ 0x160 */

uint fcn.00000160(uint *param_1)

{
    uint unaff_EBX;
    uint unaff_EBP;
    uint unaff_ESI;
    uint unaff_EDI;
    uint32_t in_CR4;
    uint unaff_retaddr;
    
    fcn.00001948(param_1);
    param_1[6] = 0;
    if ((*0xffd2765c != 0) && ((in_CR4 >> 0x17 & 1) != 0)) {
        param_1[9] = 1;
    }
    *param_1 = unaff_EBX;
    param_1[1] = unaff_ESI;
    param_1[2] = unaff_EDI;
    param_1[3] = unaff_EBP;
    param_1[4] = &param_1;
    param_1[5] = unaff_retaddr;
    //WARNING: Treating indirect jump as return
    return 0;
}


/* fcn.00000246 @ 0x246 */

void __thiscall fcn.00000246(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t *puVar6;
    bool bVar7;
    uint32_t *puStack_14;
    uint32_t uStack_10;
    
    uVar1 = fcn.00001875(param_1,param_1);
    uVar3 = 0;
    param_2[1] = 0;
    puVar6 = param_2 + 0x400;
    *param_2 = puVar6;
    *param_2 = *param_2 | 2;
    *param_2 = *param_2 | 1;
    iVar4 = 0x200;
    param_2[1] = param_2[1];
    if (param_1 == '\0') {
        uVar3 = 0;
        if (uVar1 != 0) {
            uVar5 = 0;
            uVar3 = 0;
            puStack_14 = param_2 + 0x800;
            uStack_10 = uVar1;
            do {
                iVar4 = 0x200;
                puVar6[1] = 0;
                puVar2 = puStack_14 + 0x400;
                *puVar6 = puStack_14;
                *puVar6 = *puVar6 | 2;
                *puVar6 = *puVar6 | 1;
                puVar6[1] = puVar6[1];
                do {
                    *puStack_14 = uVar5 | 2;
                    *puStack_14 = *puStack_14 | 1;
                    *puStack_14 = *puStack_14 | 0x80;
                    bVar7 = 0xffdfffff < uVar5;
                    uVar5 = uVar5 + 0x200000;
                    puStack_14[1] = uVar3;
                    puStack_14 = puStack_14 + 2;
                    uVar3 = uVar3 + bVar7;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                puVar6 = puVar6 + 2;
                uStack_10 = uStack_10 - 1;
                puStack_14 = puVar2;
            } while (uStack_10 != 0);
            if (0x1ff < uVar1) goto code_r0x00000357;
            uVar3 = uVar1;
        }
        iVar4 = 0x200 - uVar3;
        do {
            fcn.000000e0(puVar6,8);
            puVar6 = puVar6 + 2;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    else {
        uVar1 = 0;
        do {
            *puVar6 = uVar3 | 2;
            *puVar6 = *puVar6 | 1;
            *puVar6 = *puVar6 | 0x80;
            bVar7 = 0xbfffffff < uVar3;
            uVar3 = uVar3 + 0x40000000;
            puVar6[1] = uVar1;
            puVar6 = puVar6 + 2;
            uVar1 = uVar1 + bVar7;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
code_r0x00000357:
    iVar4 = 0x1ff;
    do {
        param_2 = param_2 + 2;
        fcn.000000e0(param_2,8);
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000001b0 @ 0x1b0 */

uint64_t fcn.000001b0(void)

{
    uint64_t uVar1;
    uint in_CR0;
    
    uVar1 = rdmsr(0xc0000080);
    wrmsr(0xc0000080,uVar1 | 0x100);
    return CONCAT44(uVar1 >> 0x20,in_CR0) | 0x80000000;
}


/* fcn.00000396 @ 0x396 */

uint32_t __fastcall fcn.00000396(uint *param_1,int param_2,uint param_3,uint param_4)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00000160(param_1[6]);
    uVar2 = 0;
    if (iVar1 == 0) {
        fcn.00000246(param_3,param_4);
        GlobalDescriptorTableRegister(*0xffd276bc);
        fcn.000001b0(0x38,*param_1,param_1[1],param_1,0,param_2,0,param_1[4] + param_1[2],
                     param_1[5] + param_1[3] + CARRY4(param_1[4],param_1[2]));
    }
    if (*(param_2 + 10) != 0) {
        uVar2 = *(param_2 + 10) | 0x80000000;
    }
    return uVar2;
}


/* fcn.000016b0 @ 0x16b0 */

void __cdecl fcn.000016b0(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.000017af @ 0x17af */

int32_t fcn.000017af(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000017da @ 0x17da */

int16_t * __fastcall fcn.000017da(int16_t param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == param_1) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00001835 @ 0x1835 */

//WARNING: Removing unreachable block (ram,0x0000185c)
//WARNING: Removing unreachable block (ram,0x00001864)

int __cdecl fcn.00001835(uint noname_0,uint noname_1,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint *in_EDX;
    uint uVar2;
    int32_t var_10h;
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
    uVar2 = puVar1[2];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return in_ECX;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 6751 named .text
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


/* fcn.00001708 @ 0x1708 */

void __fastcall fcn.00001708(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x4c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.0000177a @ 0x177a */

uint __fastcall fcn.0000177a(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.00000783 @ 0x783 */

void __fastcall fcn.00000783(uint32_t *param_1)

{
    uint32_t *puVar1;
    uint32_t *puVar2;
    uint32_t *puVar3;
    int32_t var_10h;
    
    puVar3 = param_1 + 4;
    if (param_1[2] != 0 || param_1[3] != 0) {
        do {
            for (; puVar3[2] != 0 || puVar3[3] != 0; puVar3 = puVar3 + 4) {
                if ((puVar3[1] <= param_1[1]) && ((param_1[1] != puVar3[1] || (*puVar3 < *param_1)))) {
                    if (&var_10h != param_1) {
                        section..text(&var_10h,param_1,0x10);
                    }
                    if (param_1 != puVar3) {
                        section..text(param_1,puVar3,0x10);
                    }
                    if (puVar3 != &var_10h) {
                        section..text(puVar3,&var_10h,0x10);
                    }
                }
            }
            puVar1 = param_1 + 6;
            puVar3 = param_1 + 8;
            puVar2 = param_1 + 7;
            param_1 = param_1 + 4;
        } while (*puVar1 != 0 || *puVar2 != 0);
    }
    return;
}


/* fcn.000007ff @ 0x7ff */

void __fastcall fcn.000007ff(uint32_t *param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint32_t *puVar6;
    uint32_t *puVar7;
    
    puVar7 = param_1;
    if (param_1[2] != 0 || param_1[3] != 0) {
        do {
            puVar6 = param_1;
            if (puVar7 != param_1) {
                section..text(puVar7,param_1,0x10);
            }
            while( true ) {
                puVar5 = puVar6;
                puVar6 = puVar5 + 4;
                uVar3 = puVar5[6];
                uVar4 = puVar5[7];
                if (((uVar3 == 0 && uVar4 == 0) || (*puVar6 != *param_1 + param_1[2])) ||
                   (puVar5[5] != param_1[1] + param_1[3] + CARRY4(*param_1,param_1[2]))) break;
                puVar1 = param_1 + 2;
                uVar2 = *puVar1;
                *puVar1 = *puVar1 + uVar3;
                param_1[3] = uVar4 + param_1[3] + CARRY4(uVar2,uVar3);
                if (puVar7 != param_1) {
                    uVar4 = puVar5[6];
                    puVar1 = puVar7 + 2;
                    uVar3 = *puVar1;
                    *puVar1 = *puVar1 + uVar4;
                    puVar7[3] = puVar7[3] + puVar5[7] + CARRY4(uVar3,uVar4);
                }
            }
            puVar7 = puVar7 + 4;
            param_1 = puVar6;
        } while (puVar5[6] != 0 || puVar5[7] != 0);
    }
    fcn.000000e0(puVar7,0x10);
    return;
}


/* fcn.00000729 @ 0x729 */

uint8_t __fastcall fcn.00000729(uint32_t param_1)

{
    int iVar1;
    uint noname_0;
    uint32_t var_4h;
    
    fcn.000017af();
    iVar1 = fcn.000017da();
    if (iVar1 == 0) {
        fcn.00001835(noname_0,noname_0,0);
        if (param_1 < 0x80000008) {
            var_4h._0_1_ = 0x24;
        }
        else {
            fcn.00001835(0x80000008,0x80000008,0);
            var_4h._0_1_ = param_1;
        }
    }
    else {
        var_4h._0_1_ = *(iVar1 + 8);
    }
    if (0x30 < var_4h) {
        var_4h._0_1_ = 0x30;
    }
    return var_4h;
}


/* fcn.0000174c @ 0x174c */

int __fastcall fcn.0000174c(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00001731();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.00001731 @ 0x1731 */

uint __fastcall fcn.00001731(uint param_1)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.00001708();
    if (iVar1 < 0) {
        param_1 = 0;
    }
    return param_1;
}


/* fcn.000018e9 @ 0x18e9 */

uint __fastcall fcn.000018e9(int16_t *param_1)

{
    char cVar1;
    uint32_t uVar2;
    uint extraout_ECX;
    int iVar3;
    int16_t iVar4;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    uVar2 = fcn.000018cc();
    if (0x1d < uVar2) {
        return 0x80000005;
    }
    cVar1 = fcn.000018a4(extraout_ECX,uVar2 * 2 + 2);
    if (cVar1 != '\0') {
        return 0x8000000f;
    }
    iVar4 = 0x43;
    iVar3 = -0x2d8974 - param_1;
    do {
        *param_1 = iVar4;
        param_1 = param_1 + 1;
        iVar4 = *(iVar3 + param_1);
    } while (iVar4 != 0);
    *param_1 = 0;
    return 0;
}


/* fcn.000018cc @ 0x18cc */

int fcn.000018cc(void)

{
    int16_t *piVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    do {
        if (0x39 < uVar3) {
            return 0x1e;
        }
        iVar2 = iVar2 + 1;
        piVar1 = uVar3 - 0x2d8972;
        uVar3 = uVar3 + 2;
    } while (*piVar1 != 0);
    return iVar2;
}


/* fcn.000018a4 @ 0x18a4 */

uint32_t __thiscall fcn.000018a4(uint32_t param_1,uint param_2,int param_3)

{
    uint32_t uVar1;
    
    if (0xffd2768b < param_1) {
        uVar1 = param_3 - 0x2d8974;
        if (param_1 < uVar1) goto code_r0x000018c6;
        if (0xffd2768c < param_1) goto code_r0x000018c9;
    }
    uVar1 = param_1 + 0x3c;
    if (uVar1 < 0xffd2768d) {
code_r0x000018c9:
        return uVar1 & 0xffffff00;
    }
code_r0x000018c6:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.000019c0 @ 0x19c0 */

uint __fastcall fcn.000019c0(int param_1,uint32_t param_2,uint param_3,int32_t param_4,int32_t param_5)

{
    uint uVar1;
    int iVar2;
    char *pcVar3;
    uint32_t uVar4;
    int32_t extraout_ECX;
    int iVar5;
    uint32_t uVar6;
    bool bVar7;
    int arg_ch;
    uchar auStack_28 [40];
    
    if ((param_1 == 0) || (0x1e8481 < param_2)) {
        uVar1 = 0x80000002;
    }
    else {
        iVar5 = 0;
        if ((param_5 < 1) && (param_5 < 0)) {
            iVar5 = 1;
            iVar2 = -param_4;
            arg_ch = -(param_5 + (param_4 != 0));
        }
        else {
            iVar2 = param_4;
            arg_ch = param_5;
        }
        iVar2 = fcn.00001976(iVar2,arg_ch);
        uVar6 = iVar5 + (iVar2 - auStack_28);
        uVar4 = 0x25;
        if (uVar6 < 0x25) {
            uVar4 = uVar6;
        }
        if (param_2 < uVar4 * 2 + 2) {
            uVar1 = 0x80000005;
        }
        else {
            if ((param_5 < 1) && (param_5 < 0)) {
                bVar7 = param_4 != 0;
                param_4 = -param_4;
                param_5 = -(param_5 + bVar7);
                fcn.00001949(1,0x2d,uVar4);
            }
            pcVar3 = fcn.00001976(param_4,param_5);
            for (iVar5 = pcVar3 - auStack_28; iVar5 != 0; iVar5 = iVar5 + -1) {
                fcn.00001949(1,*pcVar3,param_5);
                pcVar3 = pcVar3 + -1;
                param_5 = extraout_ECX;
            }
            fcn.00001949(1,0,param_5);
            uVar1 = 0;
        }
    }
    return uVar1;
}


/* fcn.00001764 @ 0x1764 */

int __fastcall fcn.00001764(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000a00 @ 0xa00 */

int __fastcall fcn.00000a00(uint32_t *param_1,int *param_2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int iVar3;
    uint32_t uVar4;
    uint extraout_ECX;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint uStack_64;
    uint *puStack_60;
    int iStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    int *piStack_50;
    uint32_t *puStack_4c;
    int iStack_48;
    int iStack_44;
    int16_t iStack_3c;
    int16_t aiStack_3a [29];
    
    iStack_48 = 0;
    iStack_3c = 0;
    uVar7 = 0;
    iStack_44 = 0;
    iVar8 = 0;
    if ((param_1 == NULL) || (param_2 == NULL)) {
        iVar3 = -0x7ffffffe;
    }
    else {
        *param_2 = 0;
        *param_1 = 0;
        piStack_50 = param_2;
        puStack_4c = param_1;
        iVar3 = fcn.000016b0(param_1,&puStack_60);
        if (-1 < iVar3) {
            uVar6 = 0xa0;
            iVar3 = fcn.0000174c();
            if (iVar3 != 0) {
                fcn.000018e9(extraout_ECX);
                piVar2 = &iStack_3c;
                iVar5 = 0;
                iVar1 = iStack_3c;
                while (iVar1 != 0) {
                    piVar2 = piVar2 + 1;
                    iVar5 = iVar5 + 1;
                    iVar1 = *piVar2;
                }
                while( true ) {
                    if (iVar8 != 0) {
                        fcn.000019c0(iVar5,iVar8,0,iVar5,iVar5);
                    }
                    uStack_64 = 8;
                    iVar5 = (**puStack_60)(puStack_60,&iStack_3c,0xffd2759c,0,&uStack_64,&iStack_48);
                    if (iVar5 < 0) break;
                    uVar4 = 0;
                    if (uVar7 != 0) {
                        do {
                            if ((*(iVar3 + uVar4 * 8) == iStack_48) && (*(iVar3 + 4 + uVar4 * 8) == iStack_44))
                            goto code_r0x00000b5a;
                            uVar4 = uVar4 + 1;
                        } while (uVar4 < uVar7);
                    }
                    uStack_54 = uVar7 + 1;
                    if (uVar6 <= uStack_54) {
                        uStack_58 = uVar6 * 2;
                        iStack_5c = fcn.0000174c();
                        if (iStack_5c == 0) goto code_r0x00000a66;
                        if (uVar6 != 0) {
                            fcn.00001764(uVar6);
                        }
                        iVar3 = iStack_5c;
                        uVar6 = uStack_58;
                    }
                    *(iVar3 + uVar7 * 8) = iStack_48;
                    *(iVar3 + 4 + uVar7 * 8) = iStack_44;
                    uVar7 = uStack_54;
code_r0x00000b5a:
                    iVar8 = iVar8 + 1;
                    iVar5 = iStack_48;
                }
                if (uVar7 == 0) {
                    return -0x7ffffff2;
                }
                iVar8 = fcn.0000174c();
                *piStack_50 = iVar8;
                if (iVar8 != 0) {
                    if (uVar7 << 3 != 0) {
                        fcn.00001764(uVar7 << 3);
                    }
                    *puStack_4c = uVar7;
                    return 0;
                }
            }
code_r0x00000a66:
            iVar3 = -0x7ffffff7;
        }
    }
    return iVar3;
}


/* fcn.0000087c @ 0x87c */

uint * fcn.0000087c(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    uint32_t uVar9;
    ulong uVar10;
    uint *in_stack_fffffff4;
    uint32_t uStack_8;
    
    uStack_8 = 0;
    iVar6 = 0;
    iVar7 = 0;
    fcn.000017af();
    iVar4 = fcn.000017da();
    if (iVar4 != 0) {
        do {
            if (*(iVar4 + 0x18) == 0) {
                iVar7 = iVar7 + 1;
            }
            iVar4 = fcn.000017da();
        } while (iVar4 != 0);
        if (iVar7 != 0) {
            fcn.00001708();
            fcn.0000177a();
            iVar7 = 0;
            fcn.000017af();
            iVar4 = fcn.000017da();
            if (iVar4 != 0) {
                iVar8 = 0;
                do {
                    if (*(iVar4 + 0x18) == 0) {
                        *(iVar8 + in_stack_fffffff4) = *(iVar4 + 0x20);
                        *(iVar8 + 4 + in_stack_fffffff4) = *(iVar4 + 0x24);
                        *(iVar8 + 8 + in_stack_fffffff4) = *(iVar4 + 0x28);
                        *(iVar8 + 0xc + in_stack_fffffff4) = *(iVar4 + 0x2c);
                        uVar1 = *(iVar8 + 4 + in_stack_fffffff4);
                        if ((((uVar1 != 0) || (uStack_8 < *(iVar8 + in_stack_fffffff4))) && (uVar1 < 2)) && (uVar1 == 0)
                           ) {
                            iVar6 = iVar7;
                            uStack_8 = *(iVar8 + in_stack_fffffff4);
                        }
                        iVar7 = iVar7 + 1;
                        iVar8 = iVar8 + 0x10;
                    }
                    iVar4 = fcn.000017da();
                } while (iVar4 != 0);
            }
            uVar1 = in_stack_fffffff4[iVar6 * 4 + 2];
            uVar2 = in_stack_fffffff4[iVar6 * 4];
            uVar9 = uVar1 + in_stack_fffffff4[iVar6 * 4];
            uVar3 = in_stack_fffffff4[iVar6 * 4];
            uVar5 = (-uVar9 & 0x3fffffff) - in_stack_fffffff4[iVar6 * 4];
            in_stack_fffffff4[iVar6 * 4 + 2] = uVar5 + uVar9;
            in_stack_fffffff4[iVar6 * 4 + 3] =
                 (-((-uVar9 & 0x3fffffff) < uVar3) - in_stack_fffffff4[iVar6 * 4 + 1]) +
                 in_stack_fffffff4[iVar6 * 4 + 3] + in_stack_fffffff4[iVar6 * 4 + 1] + CARRY4(uVar1,uVar2) +
                 CARRY4(uVar5,uVar9);
            fcn.00000783();
            fcn.000007ff();
            return in_stack_fffffff4;
        }
    }
    fcn.00001708();
    fcn.000000e0(in_stack_fffffff4,0x20);
    *in_stack_fffffff4 = 0;
    in_stack_fffffff4[1] = 0;
    fcn.00000729();
    uVar10 = fcn.00001875();
    *(in_stack_fffffff4 + 2) = uVar10;
    return in_stack_fffffff4;
}


/* fcn.00000646 @ 0x646 */

int __fastcall fcn.00000646(uint param_1,int16_t *param_2)

{
    int iVar1;
    uint noname_0;
    int16_t iVar2;
    int iVar3;
    uint uStack_34;
    uchar *puStack_30;
    uint uStack_2c;
    uint *puStack_28;
    uchar auStack_24 [6];
    int iStack_1e;
    uchar auStack_18 [2];
    int iStack_16;
    int *apiStack_10 [2];
    uchar auStack_8 [8];
    
    iVar2 = 0;
    iVar3 = 0;
    do {
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(iStack_1e + -4) + 0x38))(*(iStack_1e + -4),iVar3,&uStack_34);
        iVar3 = iVar3 + 1;
        if (iVar1 < 0) {
            return iVar1;
        }
        puStack_30 = auStack_18;
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(iStack_16 + -4) + 0x68))(0xffd2764c,uStack_34,&uStack_2c);
    } while (iVar1 < 0);
    fcn.000016b0(noname_0,&puStack_28);
    iVar3 = (**puStack_28)(puStack_28,uStack_2c,apiStack_10,auStack_8,param_1,auStack_24);
    if (-1 < iVar3) {
        if (*apiStack_10[0] == 0x5a4d) {
            apiStack_10[0] = *(apiStack_10[0] + 0xf) + apiStack_10[0];
        }
        if (*apiStack_10[0] == 0x5a56) {
            iVar2 = *(apiStack_10[0] + 2);
        }
        else if (*apiStack_10[0] == 0x4550) {
            iVar2 = apiStack_10[0][1];
        }
        *param_2 = iVar2;
    }
    return iVar3;
}


/* fcn.0000040b @ 0x40b */

int __fastcall
fcn.0000040b(uint32_t *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint32_t *param_6,
            uint32_t *param_7)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uStack_a8;
    uint32_t uStack_a4;
    uint32_t uStack_a0;
    uint *puStack_9c;
    uint32_t auStack_98 [3];
    uint32_t *puStack_8c;
    ushort uStack_88;
    uint uStack_86;
    uint uStack_82;
    uint uStack_7e;
    uint uStack_7a;
    uint uStack_76;
    uint uStack_70;
    uint uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uchar *puStack_58;
    uint uStack_54;
    uint uStack_50;
    uint uStack_4c;
    uint uStack_48;
    uint uStack_44;
    uint32_t *puStack_40;
    uint uStack_3c;
    uint32_t *puStack_38;
    uint uStack_34;
    uchar uStack_30;
    uint uStack_2f;
    uint uStack_2b;
    uchar auStack_1c [28];
    
    puStack_9c = param_2;
    puStack_8c = param_1;
    fcn.000000e0(&uStack_70,0x49);
    fcn.000000e0(&uStack_88,0x18);
    auStack_98[1] = 0;
    uVar3 = param_1[1];
    auStack_98[0] = *param_7;
    uStack_a8 = *param_6;
    uVar7 = *param_1;
    uVar8 = auStack_98[0] + uStack_a8;
    uVar1 = CARRY4(auStack_98[0],uStack_a8);
    uVar6 = param_1[3];
    uStack_a4 = 0;
    if ((uVar3 < uVar6) || ((uVar3 <= uVar6 && (uVar7 <= param_1[2])))) {
        uVar4 = param_1[4] + param_1[2];
        uVar5 = param_1[5] + param_1[3] + CARRY4(param_1[4],param_1[2]);
    }
    else {
        uVar7 = param_1[2];
        uStack_a0 = uStack_a8;
        iVar2 = fcn.00001875(0,0);
        uVar3 = (iVar2 + 10) * 0x1000;
        uVar4 = uVar3 + *param_1;
        uVar5 = param_1[1] + CARRY4(uVar3,*param_1);
        uVar3 = uVar6;
    }
    uStack_a0 = uStack_a8;
    if ((uStack_a4 < uVar3) || ((uStack_a4 <= uVar3 && (uStack_a8 < uVar7)))) {
        if ((uVar1 < uVar3) || ((uVar1 <= uVar3 && (uVar8 <= uVar7)))) goto code_r0x000004e7;
        if ((uVar5 <= uVar1) && ((uVar5 < uVar1 || (uVar4 < uVar8)))) {
            uVar6 = (uVar1 - uVar5) - (uVar8 < uVar4);
            uVar3 = (uVar3 - uStack_a4) - (uVar7 < uStack_a8);
            param_1 = puStack_8c;
            if ((uVar3 <= uVar6) && ((uVar3 < uVar6 || (uVar7 - uStack_a8 < uVar8 - uVar4)))) goto code_r0x000004dd;
        }
        auStack_98[0] = uVar7 - uStack_a8;
        auStack_98[1] = 0;
    }
    else {
        if ((uVar1 < uVar5) || ((uVar1 <= uVar5 && (uVar8 <= uVar4)))) {
            return -0x7ffffff7;
        }
code_r0x000004dd:
        uStack_a8 = uVar4;
        uStack_a4 = uVar5;
    }
code_r0x000004e7:
    puStack_58 = auStack_1c;
    uStack_54 = 0;
    uStack_68 = param_1[2];
    uStack_64 = param_1[3];
    uStack_60 = param_1[4];
    uStack_5c = param_1[5];
    uStack_70 = puStack_9c;
    uStack_50 = param_3;
    uStack_4c = param_4;
    uStack_48 = param_5;
    puStack_40 = &uStack_a8;
    puStack_38 = auStack_98;
    uStack_88 = 0x10;
    puStack_9c = &uStack_76;
    uStack_6c = 0;
    uStack_44 = 0;
    uStack_3c = 0;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2f = 0;
    uStack_2b = 0;
    uStack_86 = 0xffd25de4;
    uStack_82 = 0;
    uStack_7e = 0;
    uStack_7a = 0;
    uStack_76 = GlobalDescriptorTableRegister();
    iVar2 = fcn.00000396(*param_1,param_1[1]);
    if (-1 < iVar2) {
        *param_6 = uStack_a8;
        *param_7 = auStack_98[0];
    }
    return iVar2;
}


/* fcn.00001362 @ 0x1362 */

//WARNING: Removing unreachable block (ram,0x000013e6)
//WARNING: Removing unreachable block (ram,0x000013f2)
//WARNING: Removing unreachable block (ram,0x00001406)
//WARNING: Removing unreachable block (ram,0x00001471)
//WARNING: Removing unreachable block (ram,0x00001487)
//WARNING: Removing unreachable block (ram,0x00001499)
//WARNING: Removing unreachable block (ram,0x000014b2)
//WARNING: Removing unreachable block (ram,0x000014c3)
//WARNING: Removing unreachable block (ram,0x000014cd)
//WARNING: Removing unreachable block (ram,0x000014dd)
//WARNING: Removing unreachable block (ram,0x000014fb)
//WARNING: Removing unreachable block (ram,0x00001535)
//WARNING: Removing unreachable block (ram,0x0000153e)
//WARNING: Removing unreachable block (ram,0x0000154a)
//WARNING: Removing unreachable block (ram,0x00001553)
//WARNING: Removing unreachable block (ram,0x00001555)
//WARNING: Removing unreachable block (ram,0x0000155c)
//WARNING: Removing unreachable block (ram,0x00001563)
//WARNING: Removing unreachable block (ram,0x0000156a)
//WARNING: Removing unreachable block (ram,0x00001572)
//WARNING: Removing unreachable block (ram,0x00001592)
//WARNING: Removing unreachable block (ram,0x00001596)
//WARNING: Removing unreachable block (ram,0x000015a6)
//WARNING: Removing unreachable block (ram,0x000015b1)
//WARNING: Removing unreachable block (ram,0x000015bb)
//WARNING: Removing unreachable block (ram,0x000015c3)
//WARNING: Removing unreachable block (ram,0x0000163b)
//WARNING: Removing unreachable block (ram,0x00001640)
//WARNING: Removing unreachable block (ram,0x0000164d)
//WARNING: Removing unreachable block (ram,0x000015d1)
//WARNING: Removing unreachable block (ram,0x00001601)
//WARNING: Removing unreachable block (ram,0x000015d8)
//WARNING: Removing unreachable block (ram,0x00001609)
//WARNING: Removing unreachable block (ram,0x0000160e)
//WARNING: Removing unreachable block (ram,0x0000161b)
//WARNING: Removing unreachable block (ram,0x00001630)
//WARNING: Removing unreachable block (ram,0x00001635)
//WARNING: Removing unreachable block (ram,0x0000164f)
//WARNING: Removing unreachable block (ram,0x0000165d)
//WARNING: Removing unreachable block (ram,0x000013fc)

int fcn.00001362(void)

{
    int iVar1;
    int aiStack_74 [5];
    uchar auStack_60 [4];
    uchar auStack_5c [92];
    
    aiStack_74[3] = 0;
    aiStack_74[4] = 0;
    aiStack_74[1] = 0;
    aiStack_74[2] = 0;
    aiStack_74[0] = 0;
    iVar1 = fcn.000012e3(auStack_60);
    if ((-1 < iVar1) && (iVar1 = fcn.00001233(aiStack_74,auStack_5c), -1 < iVar1)) {
        iVar1 = -0x7ffffff2;
    }
    return iVar1;
}


/* fcn.00001ab9 @ 0x1ab9 */

uint32_t fcn.00001ab9(void)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),0x80000002,0x3031001,0,0xffd275ac,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


/* fcn.000016dd @ 0x16dd */

void __cdecl fcn.000016dd(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),6);
    return;
}


/* fcn.000017fd @ 0x17fd */

int32_t fcn.000017fd(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),0xb,0x18,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.0000178b @ 0x178b */

uint32_t __fastcall fcn.0000178b(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000f39 @ 0xf39 */

int __cdecl fcn.00000f39(uint32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    unkuint3 Var3;
    uint32_t uVar2;
    uint32_t *in_ECX;
    uint32_t *puVar4;
    uint32_t uVar5;
    int iVar6;
    
    uVar2 = -arg_14h;
    Var3 = uVar2 >> 8;
    if ((uVar2 <= arg_ch) && ((uVar2 < arg_ch || (-arg_10h - 1U < arg_8h)))) {
        return Var3 << 8;
    }
    if (in_ECX == NULL) {
        return CONCAT31(Var3,1);
    }
    iVar6 = 0;
    if (in_ECX[2] != 0 || in_ECX[3] != 0) {
        puVar4 = in_ECX;
        do {
            uVar2 = puVar4[1];
            uVar1 = *puVar4;
            if ((uVar2 <= arg_ch) && ((arg_ch != uVar2 || (uVar1 <= arg_8h)))) {
                uVar5 = puVar4[3] + uVar2 + CARRY4(puVar4[2],uVar1);
                uVar2 = arg_ch + arg_14h + CARRY4(arg_8h,arg_10h);
                if ((uVar2 < uVar5) || ((uVar2 <= uVar5 && (arg_8h + arg_10h <= puVar4[2] + uVar1)))) {
                    return CONCAT31(uVar2 >> 8,1);
                }
            }
            iVar6 = iVar6 + 1;
            puVar4 = in_ECX + iVar6 * 4;
        } while (puVar4[2] != 0 || puVar4[3] != 0);
    }
    return 0;
}


/* fcn.00000ea9 @ 0xea9 */

uint32_t __fastcall fcn.00000ea9(int *param_1,uint32_t param_2,int param_3,int param_4)

{
    int *piVar1;
    uint32_t uVar2;
    bool bVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int *piVar7;
    uint32_t uVar8;
    
    uVar8 = (param_2 - param_4) + param_3;
    piVar7 = param_1;
joined_r0x00000ebd:
    do {
        if (piVar7 == NULL) {
            return param_2;
        }
        bVar3 = false;
        iVar6 = 0x10;
        iVar5 = iVar6;
        if (*piVar7 != 0 || piVar7[1] != 0) {
            do {
                piVar1 = piVar7 + iVar5;
                iVar6 = iVar5 + 0x10;
                iVar4 = iVar5 + 4;
                iVar5 = iVar6;
            } while (*piVar1 != 0 || *(piVar7 + iVar4) != 0);
        }
        if ((piVar7 < param_4 + param_2) && (uVar2 = iVar6 + piVar7, param_2 < uVar2)) {
            if (uVar8 < uVar2) {
                return 0;
            }
            bVar3 = true;
            param_2 = uVar2;
            piVar7 = param_1;
        }
        for (; *piVar7 != 0 || piVar7[1] != 0; piVar7 = piVar7 + 4) {
            if (bVar3) goto joined_r0x00000ebd;
            uVar2 = piVar7[2];
            if ((uVar2 < param_4 + param_2) && (param_2 < *piVar7 + uVar2)) {
                bVar3 = true;
                param_2 = *piVar7 + uVar2;
                piVar7 = param_1;
                if (uVar8 < param_2) {
                    return 0;
                }
            }
        }
        if (!bVar3) {
            piVar7 = piVar7[2];
        }
    } while( true );
}


/* fcn.00000fbd @ 0xfbd */

uint32_t * __fastcall fcn.00000fbd(uint32_t *param_1)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    bool bVar5;
    int iStack_4;
    
    uVar4 = 0;
    iVar3 = 0;
    iStack_4 = 0;
    do {
        while( true ) {
            cVar2 = fcn.00000f39(param_1,0,0x10,0);
            if (cVar2 == '\0') {
                return NULL;
            }
            uVar1 = param_1[1];
            if ((*param_1 == 0 && uVar1 == 0) && (param_1[2] == 0 && param_1[3] == 0)) {
                if (iStack_4 == 0) {
                    return NULL;
                }
                if (!(uVar4 != 0 || iVar3 != 0)) {
                    return param_1;
                }
                return NULL;
            }
            if ((param_1 & 7) != 0) {
                return NULL;
            }
            if (!(*param_1 == 0 && uVar1 == 0)) break;
            param_1 = param_1[2];
        }
        if (uVar1 != 0) {
            return NULL;
        }
        cVar2 = fcn.00000f39(param_1[2],param_1[3],*param_1,0);
        if (cVar2 == '\0') {
            return NULL;
        }
        if (uVar4 == 0 && iVar3 == 0) {
            uVar1 = param_1[2];
            if (*param_1 < 0x1c) {
                return NULL;
            }
            uVar4 = *(uVar1 + 0x18);
            if (uVar4 < *(uVar1 + 0x10)) {
                return NULL;
            }
            uVar1 = *(uVar1 + 0x14);
            if ((uVar1 & 0x10000) == 0) {
                return NULL;
            }
            if ((uVar1 & 0x30000) == 0x20000) {
                return NULL;
            }
            if ((uVar1 & 0x50000) == 0x40000) {
                return NULL;
            }
            iStack_4 = iStack_4 + 1;
            iVar3 = 0;
        }
        if ((iVar3 == 0) && (uVar4 < *param_1)) {
            return NULL;
        }
        bVar5 = uVar4 < *param_1;
        uVar4 = uVar4 - *param_1;
        iVar3 = iVar3 - bVar5;
        param_1 = param_1 + 4;
    } while( true );
}


/* fcn.000012e3 @ 0x12e3 */

ulong __fastcall fcn.000012e3(int *param_1,uint param_2,int *param_3)

{
    int iVar1;
    uint *puVar2;
    uint uVar3;
    int *piVar4;
    int iVar5;
    uint *puVar6;
    int iVar7;
    
    puVar6 = NULL;
    iVar7 = 0;
    iVar5 = 0;
    piVar4 = param_1;
    if (*param_1 != 0 || param_1[1] != 0) {
        do {
            if ((piVar4[1] == 0) && (*piVar4 != -1)) {
                iVar1 = *piVar4;
                puVar2 = fcn.00000fbd();
                if (puVar2 != NULL) {
                    if (puVar6 == NULL) {
                        iVar7 = iVar1;
                    }
                    else {
                        puVar6[2] = iVar1;
                        puVar6[3] = 0;
                        *puVar6 = 0;
                        puVar6[1] = 0;
                    }
                    puVar6 = puVar2;
                }
            }
            iVar5 = iVar5 + 1;
            piVar4 = param_1 + iVar5 * 2;
        } while (*piVar4 != 0 || piVar4[1] != 0);
        if (iVar7 != 0) {
            *param_3 = iVar7;
            uVar3 = 0;
            goto code_r0x0000135b;
        }
    }
    uVar3 = 0x8000000e;
code_r0x0000135b:
    return CONCAT44(param_2,uVar3);
}


/* fcn.00001233 @ 0x1233 */

uint __fastcall fcn.00001233(uint32_t *param_1,int *param_2,uint32_t *param_3,int *param_4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    int iVar5;
    int iStack_8;
    
    uVar3 = param_1[3];
    iVar5 = 0;
    iVar4 = 0;
    iStack_8 = 0;
    uVar2 = 0;
    if (param_1[2] != 0 || uVar3 != 0) {
        do {
            if (*param_1 == 0 && param_1[1] == 0) {
                puVar1 = param_1[2];
                if (param_1 == puVar1) {
                    return 0x8000000e;
                }
                if (uVar3 != 0) {
                    return 0x8000000e;
                }
            }
            else {
                if ((param_1[1] != 0) || (~uVar2 <= *param_1)) {
                    return 0x80000009;
                }
                uVar2 = uVar2 + *param_1;
                iVar4 = iVar4 + 1;
                if (iVar5 == 0) {
                    iStack_8 = iStack_8 + 1;
                    iVar5 = *(param_1[2] + 0x18);
                }
                iVar5 = iVar5 - *param_1;
                puVar1 = param_1 + 4;
            }
            uVar3 = puVar1[3];
            param_1 = puVar1;
        } while (puVar1[2] != 0 || uVar3 != 0);
        if (iVar4 != 0) {
            if (param_2 != NULL) {
                *param_2 = iVar4;
            }
            if (param_3 != NULL) {
                *param_3 = uVar2;
            }
            if (param_4 != NULL) {
                *param_4 = iStack_8;
            }
            return 0;
        }
    }
    return 0x8000000e;
}


/* fcn.000010b6 @ 0x10b6 */

int * __fastcall fcn.000010b6(uint param_1,int *param_2,int param_3,int *param_4,uint32_t param_5)

{
    int *piVar1;
    int iVar2;
    int *piVar3;
    int iVar4;
    int iVar5;
    int *piVar6;
    int *piVar7;
    int *piStack_8;
    
    if (param_5 < param_3 * 0x10) {
        param_4 = NULL;
    }
    else {
        iVar4 = param_5 + param_3 * -0x10;
        piVar3 = param_2;
        while (piVar6 = piVar3 + 2, *piVar6 != 0 || piVar3[3] != 0) {
            if (*piVar3 == 0 && piVar3[1] == 0) {
                piVar3 = *piVar6;
            }
            else {
                if ((*piVar6 < param_4 + param_3 * 4) && (iVar5 = *piVar3, param_4 < *piVar6 + iVar5)) {
                    iVar2 = fcn.00000ea9(iVar4,iVar5);
                    if (iVar2 == 0) {
                        return NULL;
                    }
                    if (iVar5 != 0) {
                        fcn.00001764(iVar5);
                    }
                    piVar3[3] = 0;
                    *piVar6 = iVar2;
                }
                piVar3 = piVar3 + 4;
            }
        }
        piStack_8 = NULL;
        piVar3 = param_2;
        while (piVar3[2] != 0 || piVar3[3] != 0) {
            iVar5 = 0x10;
            piVar6 = piVar3;
            piVar7 = piVar3;
            if (*piVar3 != 0 || piVar3[1] != 0) {
                do {
                    piVar7 = piVar6 + 4;
                    iVar5 = iVar5 + 0x10;
                    piVar1 = piVar6 + 5;
                    piVar6 = piVar7;
                } while (*piVar7 != 0 || *piVar1 != 0);
            }
            if ((piVar3 < param_4 + param_3 * 4) && (param_4 < iVar5 + piVar3)) {
                piVar3 = fcn.00000ea9(iVar4,iVar5);
                if (piVar3 == NULL) {
                    return NULL;
                }
                if (iVar5 != 0) {
                    fcn.00001764(iVar5);
                }
                if (piStack_8 == NULL) {
                    param_2 = piVar3;
                }
                else {
                    piStack_8[3] = 0;
                    piStack_8[2] = piVar3;
                }
            }
            piVar3 = piVar7[2];
            if (piVar3 == NULL) break;
            piStack_8 = piVar7;
        }
        piVar3 = param_4;
        while (param_2 != NULL) {
            piVar6 = param_2[2];
            iVar4 = param_2[3];
            if (piVar6 == NULL && iVar4 == 0) break;
            if (*param_2 == 0 && param_2[1] == 0) {
                param_2 = piVar6;
            }
            else {
                piVar3[2] = piVar6;
                piVar3[3] = iVar4;
                *piVar3 = *param_2;
                piVar3[1] = param_2[1];
                piVar3 = piVar3 + 4;
                param_2 = param_2 + 4;
            }
        }
        piVar3[2] = 0;
        piVar3[3] = 0;
        *piVar3 = 0;
        piVar3[1] = 0;
    }
    return param_4;
}


/* fcn.00001976 @ 0x1976 */

uchar * __cdecl fcn.00001976(int32_t arg_8h,int32_t arg_ch)

{
    uint64_t uVar1;
    uchar *in_ECX;
    int32_t in_EDX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = &var_ch;
    *in_ECX = 0;
    var_4h = in_EDX;
    do {
        uVar1 = arg_ch;
        arg_ch = arg_ch / var_4h;
        uVar1 = uVar1 % var_4h << 0x20 | arg_8h;
        arg_8h = uVar1 / var_4h;
        if (var_8h != 0) {
            *var_8h = uVar1 % var_4h;
        }
        in_ECX = in_ECX + 1;
        *in_ECX = *(var_ch + -0x2d8924);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00001949 @ 0x1949 */

uchar * __fastcall fcn.00001949(uchar *param_1,uchar *param_2,int param_3,uint param_4)

{
    int iVar1;
    
    iVar1 = 0;
    if (0 < param_3) {
        do {
            if (param_2 <= param_1) {
                return param_1;
            }
            *param_1 = param_4;
            param_1[1] = param_4 >> 8;
            param_1 = param_1 + 2;
            iVar1 = iVar1 + 1;
        } while (iVar1 < param_3);
    }
    return param_1;
}


