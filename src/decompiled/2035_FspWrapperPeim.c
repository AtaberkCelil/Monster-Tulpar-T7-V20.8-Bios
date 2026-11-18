// decompiled by r2ghidra: 2035_FspWrapperPeim.te
// functions: 59

/* fcn.000002d5 @ 0x2d5 */

uint __fastcall fcn.000002d5(uint param_1)

{
    int iStack_14;
    int iStack_e;
    
    fcn.00003323(param_1,param_1);
    fcn.00003277(0x84,0);
    fcn.00003277(0x85,0);
    fcn.00003277(0x86,0);
    fcn.00002c21();
    fcn.00000498();
    fcn.00000235();
    InterruptDescriptorTableRegister();
    (**(**(iStack_e + -4) + 0x28))(*(iStack_e + -4),&iStack_14);
    if (iStack_14 == 0x11) {
        InterruptDescriptorTableRegister();
        (**(**(iStack_e + -4) + 0x24))(*(iStack_e + -4),0x3740);
    }
    return 0;
}


/* entry0 @ 0x1d5 */

uint __fastcall entry0(uint param_1)

{
    int iStack_14;
    int iStack_e;
    
    fcn.00003323(param_1,param_1);
    fcn.00003277(0x84,0);
    fcn.00003277(0x85,0);
    fcn.00003277(0x86,0);
    fcn.00002c21();
    fcn.00000498();
    fcn.00000235();
    InterruptDescriptorTableRegister();
    (**(**(iStack_e + -4) + 0x28))(*(iStack_e + -4),&iStack_14);
    if (iStack_14 == 0x11) {
        InterruptDescriptorTableRegister();
        (**(**(iStack_e + -4) + 0x24))(*(iStack_e + -4),0x3740);
    }
    return 0;
}


/* fcn.00003057 @ 0x3057 */

int __fastcall fcn.00003057(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uStack_878;
    uint32_t uStack_874;
    int iStack_870;
    int32_t iStack_86c;
    uchar auStack_864 [88];
    uchar auStack_80c [512];
    uint32_t uStack_60c;
    uint uStack_608;
    uint uStack_604;
    uint uStack_600;
    int iStack_5fc;
    int iStack_5f8;
    uint32_t uStack_5f4;
    
    cVar1 = fcn.000029f3();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffd;
    }
    else if (param_1 == 0) {
        iVar2 = -0x7ffffffe;
    }
    else {
        fcn.000000e0(param_1,0x260);
        fcn.0000291b();
        fcn.0000055b();
        fcn.00002d34();
        fcn.00000987();
        iStack_5fc = uStack_874 + 1;
        uStack_878 = 1;
        iStack_5f8 = iStack_870 + (0xfffffffe < uStack_874);
        uStack_604 = 0;
        uStack_5f4 = *(param_1 + 600) & 7;
        uStack_600 = 0;
        fcn.000008e0(uStack_874,iStack_870,iStack_86c);
        fcn.00001ba4(&uStack_604,0x20,&uStack_878);
        uVar3 = fcn.000032ec(0xa8,0);
        uVar4 = fcn.000032ec(0xac,0);
        fcn.000000e0(auStack_864,0x260);
        uStack_60c = uStack_60c & 0xffffff06 | 6;
        iVar2 = fcn.00002ebb(uVar3 & 0xfff00000,uVar4 & 0x7f,uStack_878);
        if (iVar2 == -0x7ffffff7) {
            fcn.000000e0(auStack_864,0x260);
            uStack_60c = *(param_1 + 600);
            uStack_608 = *(param_1 + 0x25c);
            iVar2 = fcn.00002ebb(uVar3 & 0xfff00000,uVar4 & 0x7f,uStack_878);
        }
        if (-1 < iVar2) {
            if (iVar2 == 0) {
                if (param_1 + 0x58 != auStack_80c) {
                    section..text(param_1 + 0x58,auStack_80c,0x200);
                }
                *(param_1 + 600) = uStack_60c;
                *(param_1 + 0x25c) = uStack_608;
            }
            fcn.0000295f();
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.000004bd @ 0x4bd */

void __cdecl fcn.000004bd(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0x3720,0,0,arg_ch);
    return;
}


/* fcn.0000291b @ 0x291b */

int __fastcall fcn.0000291b(int param_1)

{
    ulong uVar1;
    char cVar2;
    
    cVar2 = fcn.000029f3();
    if (cVar2 != '\0') {
        fcn.00000622();
        rdmsr(0xfe);
        fcn.00000656(param_1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(param_1 + 600) = uVar1;
        *(param_1 + 0x25c) = uVar1 >> 0x20;
    }
    return param_1;
}


/* fcn.000029f3 @ 0x29f3 */

uint32_t __fastcall fcn.000029f3(int32_t param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    uVar2 = fcn.00003443(param_1,param_1,&var_4h);
    if ((var_4h & 0x1000U) == 0) {
        uVar2 = uVar2 & 0xffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT31(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.00000622 @ 0x622 */

uint * __fastcall fcn.00000622(uint *param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint *puVar3;
    
    uVar2 = 0;
    puVar3 = param_1;
    do {
        uVar1 = rdmsr(*(uVar2 + 0x3780));
        uVar2 = uVar2 + 0xc;
        *puVar3 = uVar1;
        puVar3[1] = uVar1 >> 0x20;
        puVar3 = puVar3 + 2;
    } while (uVar2 < 0x84);
    return param_1;
}


/* fcn.00000656 @ 0x656 */

uint * __fastcall fcn.00000656(int param_1,int param_2,uint *param_3)

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


/* fcn.0000040a @ 0x40a */

int fcn.0000040a(void)

{
    char cVar1;
    int iVar2;
    
    fcn.000003be();
    do {
        iVar2 = fcn.000003e9();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000537();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000003a6 @ 0x3a6 */

int __fastcall fcn.000003a6(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000036f();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
}


/* fcn.0000036f @ 0x36f */

int32_t __fastcall fcn.0000036f(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),param_1,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
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


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 13461 named .text
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


/* fcn.0000047d @ 0x47d */

int fcn.0000047d(void)

{
    int iVar1;
    int extraout_EDX;
    
    iVar1 = fcn.00000444();
    if (iVar1 == 0) {
        return 0;
    }
    fcn.00000515();
    return extraout_EDX + 0x18;
}


/* fcn.00000444 @ 0x444 */

int32_t __fastcall fcn.00000444(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000515 @ 0x515 */

uint * __fastcall fcn.00000515(uint *param_1)

{
    *param_1 = *0x36d0;
    param_1[1] = *0x36d4;
    param_1[2] = *0x36d8;
    param_1[3] = *0x36dc;
    return param_1;
}


/* fcn.000004ee @ 0x4ee */

int __fastcall fcn.000004ee(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00003323 @ 0x3323 */

ulong fcn.00003323(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    *0xc0000080 = 0x33333330;
    return 0x33333330;
}


/* fcn.00003277 @ 0x3277 */

uint __cdecl fcn.00003277(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = 0x33;
    return CONCAT31(uVar1 >> 8,0x33);
}


/* fcn.00002c21 @ 0x2c21 */

uint fcn.00002c21(void)

{
    int iVar1;
    int iVar2;
    uint *puVar3;
    uint *puVar4;
    uint uVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    
    puVar3 = fcn.000003a6();
    if (puVar3 != NULL) {
        puVar4 = fcn.000003a6();
        if (puVar4 == NULL) {
            uVar5 = 0x80000009;
        }
        else {
            puVar3[1] = 0;
            *puVar3 = 0x61733534;
            iVar6 = fcn.0000040a();
            if (iVar6 == 0) {
                uVar5 = 0x8000000e;
            }
            else {
                iVar7 = fcn.000003a6();
                puVar3[8] = iVar7;
                if (iVar7 == 0) {
                    uVar5 = 0x80000009;
                }
                else {
                    uVar8 = 0;
                    if (*(iVar6 + 0x18) != 0) {
                        iVar7 = 0;
                        do {
                            iVar2 = puVar3[8];
                            uVar8 = uVar8 + 1;
                            *(iVar7 + iVar2) = *(iVar6 + 0x20 + iVar7);
                            iVar1 = iVar7 + 0x20;
                            *(iVar7 + 4 + iVar2) = *(iVar6 + 4 + iVar1);
                            iVar7 = puVar3[8];
                            *(iVar7 + -0x18 + iVar1) = *(iVar6 + 8 + iVar1);
                            *(iVar7 + -0x14 + iVar1) = *(iVar6 + 0xc + iVar1);
                            iVar7 = puVar3[8];
                            *(iVar7 + -0x10 + iVar1) = *(iVar6 + 0x10 + iVar1);
                            *(iVar7 + -0xc + iVar1) = *(iVar6 + 0x14 + iVar1);
                            iVar7 = puVar3[8];
                            *(iVar7 + -8 + iVar1) = *(iVar6 + 0x18 + iVar1);
                            *(iVar7 + -4 + iVar1) = *(iVar6 + 0x1c + iVar1);
                            iVar7 = iVar1;
                        } while (uVar8 < *(iVar6 + 0x18));
                    }
                    puVar3[7] = uVar8;
                    puVar3[2] = 0x2c47;
                    puVar3[3] = 0x2ca2;
                    puVar3[4] = 0x2d30;
                    puVar3[5] = 0x2d6d;
                    *(puVar3 + 6) = 0;
                    *puVar4 = 0x80000010;
                    puVar4[1] = 0x36c0;
                    puVar4[2] = puVar3 + 2;
                    fcn.00000498();
                    uVar5 = 0;
                }
            }
        }
        return uVar5;
    }
    return 0x80000009;
}


/* fcn.00000498 @ 0x498 */

void __fastcall fcn.00000498(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000235 @ 0x235 */

uint fcn.00000235(void)

{
    uchar *puVar1;
    uint uVar2;
    uint *puVar3;
    int iVar4;
    int16_t var_8h;
    int8_t var_6h;
    int8_t var_5h;
    int8_t var_4h;
    int16_t var_3h;
    uchar uStack_5;
    
    puVar1 = fcn.0000040a();
    if (puVar1 == NULL) {
        uVar2 = 0x8000000e;
    }
    else {
        puVar3 = fcn.000003a6();
        if (puVar3 != NULL) {
            *puVar3 = 0xcdd;
            *(puVar3 + 1) = 1;
            _var_8h = CONCAT13(puVar1[1],CONCAT12(*puVar1,1));
            _var_4h = *(puVar1 + 4);
            if (puVar3 + 5 != &var_8h) {
                section..text(puVar3 + 5,&var_8h,7);
            }
            if (puVar3 + 3 != 0x3760) {
                section..text(puVar3 + 3,0x3760,0x13);
            }
            iVar4 = fcn.0000047d();
            if (iVar4 != 0) {
                fcn.000004ee(0x20);
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000003be @ 0x3be */

int32_t fcn.000003be(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000537 @ 0x537 */

uint32_t __fastcall fcn.00000537(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.000003e9 @ 0x3e9 */

int16_t * __fastcall fcn.000003e9(uint param_1,int16_t *param_2)

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


/* fcn.00003443 @ 0x3443 */

//WARNING: Removing unreachable block (ram,0x0000346a)
//WARNING: Removing unreachable block (ram,0x00003472)

int __cdecl fcn.00003443(uint noname_0,uint noname_1,int32_t arg_10h)

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


/* fcn.00000987 @ 0x987 */

void __fastcall fcn.00000987(uint32_t *param_1,uint32_t *param_2)

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
    
    fcn.00003443(param_1,param_1,0);
    if (var_8h < 0x80000008) {
        var_4h = var_4h & 0xffffff24U | 0x24;
    }
    else {
        fcn.00003443(0x80000008,0x80000008,0);
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


/* fcn.000008e0 @ 0x8e0 */

int __cdecl fcn.000008e0(uint32_t noname_0,uint32_t noname_1,int32_t arg_10h)

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


/* fcn.00000f95 @ 0xf95 */

void __fastcall
fcn.00000f95(uint16_t param_1,int param_2,int param_3,uint16_t param_4,uint16_t param_5,char param_6)

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


/* fcn.00001143 @ 0x1143 */

uint __cdecl fcn.00001143(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

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


/* fcn.0000117d @ 0x117d */

int __fastcall
fcn.0000117d(uint32_t param_1,int param_2,uint param_3,uint param_4,uint32_t param_5,uint32_t param_6,int param_7
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
                    if (uStack_40 < _param_11[-2]) goto code_r0x0000165b;
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
                            if (uStack_44 != 0 || iStack_48 != 0) goto code_r0x0000165b;
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
                                    uVar17 = fcn.00001143(*(iVar5 + param_7),*(iVar5 + 4 + param_7),
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
                            fcn.00000f95(param_8,uVar10,uVar15,1);
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
                                        iVar5 = fcn.00001143(arg_8h,iVar14,uVar2 - arg_8h,
                                                             (*(uVar13 * 0x20 + 4 + param_7) - iVar14) -
                                                             (uVar2 < arg_8h),iVar5);
                                        if (iVar5 < 0) {
                                            return iVar5;
                                        }
                                    }
                                    if ((uVar15 != uVar13 - 1) &&
                                       (iVar5 = fcn.0000117d(param_3,param_4,param_5,param_6,param_7,param_8,
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
code_r0x0000165b:
            _param_11 = _param_11 + 6;
            uStack_18 = uStack_18 + 1;
        } while (uStack_18 < param_5);
    }
    return 0;
}


/* fcn.0000095c @ 0x95c */

ulong __cdecl fcn.0000095c(int32_t arg_8h,uint32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    if (arg_8h == 0 && arg_ch == 0) {
        return CONCAT44(arg_14h,arg_10h);
    }
    return CONCAT44(~arg_ch + (0xfffffffe < ~arg_8h) & arg_ch,~arg_8h + 1U & arg_8h);
}


/* fcn.00003483 @ 0x3483 */

ulong __cdecl fcn.00003483(uint32_t arg_8h,uint32_t arg_ch)

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
        uVar1 = fcn.00003427(arg_8h,arg_ch);
        bVar4 = (uVar1 & 0x20) == 0;
        uVar3 = !bVar4 << (uVar1 & 0x1f) | bVar4 >> 0x20 - (uVar1 & 0x1f);
        iVar2 = bVar4 << (uVar1 & 0x1f);
    }
    return CONCAT44(uVar3,iVar2);
}


/* fcn.00000180 @ 0x180 */

uchar * fcn.00000180(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.00000e8e @ 0xe8e */

char __fastcall
fcn.00000e8e(int param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,uint32_t param_5,int param_6,
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
                    if (param_3 < puVar4[-2]) goto code_r0x00000f71;
                }
                uVar2 = puVar4[-2] + *puVar4;
                uVar1 = puVar4[-1] + puVar4[1] + CARRY4(puVar4[-2],*puVar4);
                if (param_4 <= uVar1) {
                    if (uVar1 <= param_4) {
                        if (uVar2 <= param_3) goto code_r0x00000f71;
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
code_r0x00000f71:
            uVar6 = uVar6 + 1;
            puVar4 = puVar4 + 6;
        } while (uVar6 < param_2);
    }
    if (param_7 != NULL) {
        *param_7 = uStack_8;
    }
    return cVar5;
}


/* fcn.00000bbd @ 0xbbd */

uint __fastcall
fcn.00000bbd(uint32_t *param_1,uint32_t param_2,uint32_t *param_3,uint32_t param_4,uint32_t param_5,
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
                fcn.000004ee(iVar5);
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


/* fcn.00001cae @ 0x1cae */

uint32_t __fastcall fcn.00001cae(int param_1,int param_2)

{
    int iVar1;
    uint8_t uVar2;
    
    uVar2 = 1;
    for (; iVar1 = *(param_1 + 0x10), iVar1 == 0; param_1 = param_1 + 0x18) {
        if (param_2 == 1) goto code_r0x00001ce8;
        param_2 = param_2 + -1;
    }
    if (iVar1 != 1) {
        if (iVar1 != 4) {
            if (iVar1 == 5) goto code_r0x00001ce2;
            if (iVar1 - 6U != 0) {
                return iVar1 - 6U & 0xffffff00;
            }
        }
        return 0x51;
    }
code_r0x00001ce2:
    uVar2 = 1 << (*(param_1 + 0x10) & 0x1f) | 1;
code_r0x00001ce8:
    return uVar2;
}


/* fcn.00001684 @ 0x1684 */

//WARNING: Removing unreachable block (ram,0x0000172c)

int __fastcall
fcn.00001684(int param_1,int param_2,int32_t param_3,int32_t param_4,int param_5,int param_6,uint32_t *param_7,
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
                    uVar20 = fcn.0000095c(uStack_30,uStack_28,param_3,param_4);
                    uStack_c = uVar20 >> 0x20;
                    uStack_8 = uVar20;
                    uVar2 = uVar20;
                    if (CONCAT44(uVar18,uVar16) < uVar20) {
                        uStack_24 = uVar20;
                        uVar20 = fcn.00003483(uVar16,uVar18);
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
                    fcn.00000180(param_7,uVar11,0);
                    iVar4 = CONCAT44(uStack_28,uStack_30);
                    uVar2 = CONCAT44(uStack_c,uStack_8);
                }
                uStack_28 = iVar4 >> 0x20;
                uStack_30 = iVar4;
                uStack_c = uVar2 >> 0x20;
                uStack_8 = uVar2;
                iVar9 = (uVar16 - uVar18) + -1;
                if (iVar9 != 0) {
                    fcn.00000180((uVar12 + 2) * uVar18 + 1 + puVar17,iVar9,0xff);
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
                                uVar5 = fcn.00000e8e(uStack_c,uStack_10,uStack_28,uStack_24._4_4_,&uStack_30);
                                iVar4 = CONCAT44(uStack_28,uStack_30);
                                uVar2 = CONCAT44(uStack_c,uStack_8);
                                if (uVar5 == uVar13) {
                                    fcn.0000117d(param_3,param_4,param_5,uVar16,param_6,puVar17,uVar18 - 2,
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
        fcn.00000f95(puVar17,0,uVar12,0);
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
                uVar6 = fcn.00000e8e(uStack_18,iVar9,arg_10h,uStack_4,&uStack_30);
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
                iVar9 = fcn.00001143(uStack_18,iVar9,arg_10h,uStack_4,cVar7);
                if (iVar9 < 0) break;
            }
            if (uStack_1c != uStack_8 - 1) {
                if (param_7 == -1) {
                    iVar9 = uStack_1c * 0x20;
                    uVar6 = fcn.00000e8e(*(iVar9 + param_6),*(iVar9 + 4 + param_6),
                                         *(uStack_24._4_4_ + param_6) - *(iVar9 + param_6),
                                         (*(uStack_24._4_4_ + 4 + param_6) - *(iVar9 + 4 + param_6)) -
                                         (*(uStack_24._4_4_ + param_6) < *(iVar9 + param_6)),&uStack_30);
                    param_7 = CONCAT31(param_7._1_3_,uVar6);
                }
                iVar9 = fcn.0000117d(param_3,param_4,param_5,uVar16,param_6,puVar17,uStack_c,uStack_10,uStack_30
                                     ,param_7,param_8,param_9,param_10);
                if (iVar9 < 0) break;
            }
            iVar8 = uStack_c;
        }
    }
    return iVar9;
}


/* fcn.00001ba4 @ 0x1ba4 */

uint __fastcall fcn.00001ba4(int param_1,uint32_t param_2,uint param_3,uint param_4,uint param_5)

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
               (iVar1 = fcn.00000bbd(param_5,piVar4[-2],piVar4[-1],*piVar4,piVar4[1],piVar4[2]),
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
                (iVar1 = fcn.00000bbd(param_5,piVar4[-4],piVar4[-3],piVar4[-2],piVar4[-1],*piVar4),
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
                   (iVar1 = fcn.00000bbd(param_5,piVar4[-2],piVar4[-1],*piVar4,piVar4[1],piVar4[2]),
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


/* fcn.00003427 @ 0x3427 */

//WARNING: Possible PIC construction at 0x0000343a: Changing call to branch
//WARNING: Removing unreachable block (ram,0x0000343f)

int fcn.00003427(int param_1,int param_2)

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


/* fcn.00001e11 @ 0x1e11 */

//WARNING: Removing unreachable block (ram,0x00002065)
//WARNING: Removing unreachable block (ram,0x00001eaa)
//WARNING: Removing unreachable block (ram,0x00001f71)

int __fastcall
fcn.00001e11(uint32_t param_1,int param_2,int32_t param_3,int32_t param_4,uint32_t param_5,uint param_6,
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
                iVar9 = fcn.0000095c(uStack_2c,uVar5,param_3,param_4);
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
                                    iVar2 = fcn.00001143(uStack_2c,uVar5,uStack_10,uStack_10._4_4_,puVar4[2]);
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
                            iVar9 = fcn.0000095c(uStack_28,uStack_1c,param_3,param_4);
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
            uVar1 = fcn.00001cae();
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
            uVar10 = fcn.0000095c(uStack_2c,uStack_24,param_3,param_4);
            iVar2 = extraout_ECX_01 * 0x18;
            uVar5 = *(iVar2 + 8 + param_2);
            uVar6 = uVar5 - uStack_2c;
            uVar11 = fcn.00003483(uVar6 + *(iVar2 + param_2),
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
            iVar2 = fcn.00001684(param_3,param_4,(uVar5 - uStack_20) + 1,param_6,&uStack_1c,param_8,param_9,
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


/* fcn.00001cec @ 0x1cec */

void __fastcall fcn.00001cec(int param_1,uint32_t param_2,int param_3,uint32_t param_4,int param_5)

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


/* fcn.000006cf @ 0x6cf */

//WARNING: Removing unreachable block (ram,0x00000783)

uint __cdecl fcn.000006cf(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

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
        puVar9 = uVar4 * 0xc + 0x3784;
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
            uVar5 = *in_EDX - *(uVar4 * 0xc + 0x3784);
            uVar2 = *(uVar4 * 0xc + 0x3788);
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


/* fcn.00000577 @ 0x577 */

uint64_t __fastcall fcn.00000577(uint *param_1)

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


/* fcn.000034ca @ 0x34ca */

ulong __cdecl fcn.000034ca(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

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


/* fcn.000005e2 @ 0x5e2 */

void fcn.000005e2(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return;
}


/* fcn.000021a8 @ 0x21a8 */

int32_t __cdecl fcn.000021a8(int32_t arg_8h,int32_t arg_ch)

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
    fcn.00000987();
    fcn.00000180(&var_144h,0x20,0);
    var_24h = 0;
    var_5h._0_1_ = '\0';
    cVar7 = fcn.000029f3();
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
        fcn.00000656(&var_f74h);
        fcn.000008e0(var_1ch,var_18h,var_3ch);
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
        fcn.00001ba4(&var_d74h,0x42,&var_ch);
        var_28h = fcn.00000bbd(&var_ch,0,0,0x100000,0,0);
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
                    goto code_r0x000023e8;
                }
            }
            else {
code_r0x000023e8:
                var_28h = fcn.00000bbd(&var_ch,uVar8,iVar10,uVar12,var_10h,*var_40h);
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
            var_30h = fcn.00003427(var_1ch,var_18h);
            var_18h = 0;
            var_1ch = 1;
            bVar14 = (var_30h & 0x20) == 0;
            var_28h = fcn.00001e11(bVar14 << (var_30h & 0x1f),
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
                            fcn.000004ee(iVar10);
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
            fcn.00001cec(&var_444h,var_60h,&var_144h);
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
            var_28h = fcn.000006cf(&var_34h,&var_4ch,&var_5ch,&var_44h);
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
                    fcn.00000577();
                    var_5h._0_1_ = '\x01';
                }
                fcn.000034ca(~*(&var_124h + iVar13),~*(&var_120h + iVar13),*(&var_cch + iVar13),*(&var_c8h + iVar13))
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
                        fcn.00000577();
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
            fcn.000005e2();
        }
    }
    else {
        *(var_48h + 600) = *(var_48h + 600) | 0xc00;
    }
    return iVar4;
}


/* fcn.000028b2 @ 0x28b2 */

ulong __fastcall fcn.000028b2(ulong *param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = rdmsr(0xfe);
    uVar3 = uVar1 >> 0x20;
    uVar2 = uVar1;
    uVar4 = uVar2 & 0xff;
    if (uVar1 != '\0') {
        iVar5 = 0x201;
        do {
            wrmsr(iVar5 + -1,*param_1);
            uVar2 = *(param_1 + 1);
            uVar3 = *(param_1 + 0xc);
            wrmsr(iVar5,param_1[1]);
            iVar5 = iVar5 + 2;
            param_1 = param_1 + 2;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    return CONCAT44(uVar3,uVar2);
}


/* fcn.00002a34 @ 0x2a34 */

uint fcn.00002a34(void)

{
    uint32_t uVar1;
    
    out(0x1800,0x800);
    out(0x1834,0x20);
    uVar1 = in(0x1830);
    out(0x1830,uVar1 | 2);
    return 0;
}


/* fcn.000032b1 @ 0x32b1 */

ushort __cdecl fcn.000032b1(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000335c @ 0x335c */

uint32_t __fastcall fcn.0000335c(uint32_t param_1,uint *param_2,uint32_t param_3,int param_4)

{
    uchar uVar1;
    ushort uVar2;
    uint uVar3;
    uint32_t uVar4;
    bool bVar5;
    uint32_t uStack_8;
    
    if (param_2 == NULL) {
        param_1 = 0;
    }
    else {
        uVar4 = param_1;
        if ((param_3 & 1) != 0) {
            uVar1 = fcn.00003240(param_3,param_4);
            bVar5 = 0xfffffffe < param_3;
            param_3 = param_3 + 1;
            *param_2 = uVar1;
            param_4 = param_4 + bVar5;
            uVar4 = param_1 - 1;
            param_2 = param_2 + 1;
        }
        if ((1 < uVar4) && ((param_3 & 2) != 0)) {
            uVar2 = fcn.000032b1(param_3,param_4);
            bVar5 = 0xfffffffd < param_3;
            param_3 = param_3 + 2;
            *param_2 = uVar2;
            param_4 = param_4 + bVar5;
            uVar4 = uVar4 - 2;
            param_2 = param_2 + 2;
        }
        if (3 < uVar4) {
            uStack_8 = uVar4 >> 2;
            do {
                uVar3 = fcn.000032ec(param_3,param_4);
                bVar5 = 0xfffffffb < param_3;
                param_3 = param_3 + 4;
                *param_2 = uVar3;
                param_4 = param_4 + bVar5;
                uVar4 = uVar4 - 4;
                param_2 = param_2 + 1;
                uStack_8 = uStack_8 - 1;
            } while (uStack_8 != 0);
        }
        if (1 < uVar4) {
            uVar2 = fcn.000032b1(param_3,param_4);
            bVar5 = 0xfffffffd < param_3;
            param_3 = param_3 + 2;
            *param_2 = uVar2;
            param_4 = param_4 + bVar5;
            uVar4 = uVar4 - 2;
            param_2 = param_2 + 2;
        }
        if (uVar4 != 0) {
            uVar1 = fcn.00003240(param_3,param_4);
            *param_2 = uVar1;
        }
    }
    return param_1;
}


/* fcn.0000055b @ 0x55b */

uint32_t __fastcall fcn.0000055b(uint param_1)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    
    cVar2 = fcn.000029f3(param_1,param_1);
    if (cVar2 == '\0') {
        uVar3 = 0;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar3 = uVar1 & 0xff;
    }
    return uVar3;
}


/* fcn.00000a1b @ 0xa1b */

uint32_t __cdecl fcn.00000a1b(int32_t arg_8h,int32_t arg_ch)

{
    int64_t iVar1;
    uint64_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    int32_t var_520h;
    int32_t var_220h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int var_4h;
    
    uVar2 = rdmsr(0x2ff);
    if ((uVar2 & 0x800) == 0) {
        return 0;
    }
    if (((arg_ch == 0) && (arg_8h < 0x100000)) && ((uVar2 & 0x400) != 0)) {
        uVar6 = 0;
        var_4h = 0;
        do {
            if ((*(uVar6 + 0x3784) <= arg_8h) &&
               ((iVar1 = *(uVar6 + 0x3788) * 8, uVar4 = iVar1, (iVar1 >> 0x20) + CARRY4(uVar4,*(uVar6 + 0x3784)) != 0
                || (arg_8h < uVar4 + *(uVar6 + 0x3784))))) {
                var_4h = var_4h * 0xc;
                uVar3 = rdmsr(*(var_4h + 0x3780));
                uVar8 = uVar3 >> 0x20;
                uVar5 = (arg_8h - *(var_4h + 0x3784)) / *(var_4h + 0x3788) << 3;
                var_4h._0_1_ = uVar5;
                uVar6 = uVar8;
                uVar4 = 0;
                if ((uVar5 & 0x20) == 0) {
                    uVar6 = uVar3;
                    uVar4 = uVar8;
                }
                return (uVar6 >> (var_4h & 0x1f) | uVar4 << 0x20 - (var_4h & 0x1f)) & 0xff;
            }
            var_4h = var_4h + 1;
            uVar6 = uVar6 + 0xc;
        } while (uVar6 < 0x84);
    }
    uVar3 = rdmsr(0xfe);
    var_14h = uVar3 >> 0x20;
    var_4h = uVar3 & 0xff;
    var_ch = uVar2;
    fcn.00000656(&var_220h);
    fcn.00000987();
    fcn.000008e0(var_18h,var_14h,var_20h);
    uVar6 = 7;
    uVar4 = uVar2;
    if (var_4h != 0) {
        puVar7 = &var_520h;
        do {
            if (((puVar7[2] != 0 || puVar7[3] != 0) && (puVar7[1] <= arg_ch)) &&
               ((arg_ch != puVar7[1] || (*puVar7 <= arg_8h)))) {
                uVar4 = puVar7[3] + puVar7[1] + CARRY4(puVar7[2],*puVar7);
                if (((arg_ch <= uVar4) && ((arg_ch < uVar4 || (arg_8h < puVar7[2] + *puVar7)))) &&
                   ((uVar6 == 7 || (((uVar6 != puVar7[4] && (uVar6 != 0)) && ((uVar6 != 4 || (puVar7[4] != 6)))))))) {
                    uVar6 = puVar7[4];
                }
            }
            puVar7 = puVar7 + 6;
            var_4h = var_4h + -1;
        } while (var_4h != 0);
        uVar4 = var_ch;
        if (uVar6 != 7) {
            return uVar6;
        }
    }
    return uVar4 & 7;
}


/* fcn.0000286c @ 0x286c */

void __cdecl fcn.0000286c(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

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
    fcn.000021a8(&arg_ch,&var_18h);
    return;
}


/* fcn.00002d34 @ 0x2d34 */

void __fastcall fcn.00002d34(int param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int16_t iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint32_t uVar8;
    uint32_t *puVar9;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t auStack_44 [6];
    uchar auStack_2c [8];
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint uStack_18;
    uint uStack_14;
    uint uStack_10;
    uchar uStack_c;
    
    auStack_44[0] = 0xff000000;
    auStack_44[1] = 0;
    auStack_44[2] = 0x1000000;
    auStack_44[3] = 0;
    auStack_44[4] = 5;
    auStack_44[5] = 0;
    auStack_2c[0] = 1;
    uStack_24 = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    uStack_18 = 0;
    uStack_14 = 1;
    uStack_10 = 0;
    uStack_c = 0;
    fcn.00000987();
    iVar4 = fcn.000032b1(0x10000,0);
    if (iVar4 != -1) {
        fcn.0000335c(0x10018,0);
        uStack_24 = 0;
        uStack_20 = 0;
        uStack_c = 1;
    }
    iVar5 = fcn.0000055b();
    if (iVar5 != 0) {
        puVar9 = param_1 + 0x58;
        do {
            uVar1 = puVar9[1];
            uVar2 = *puVar9;
            cVar3 = fcn.000029f3();
            if (cVar3 == '\0') {
                uVar6 = 0;
            }
            else {
                uVar6 = fcn.00000a1b(uVar2,uVar1);
            }
            uVar8 = 0;
            puVar7 = auStack_44;
            do {
                if ((((puVar7[6] == '\x01') && ((uVar2 & 0xfffff000) == *puVar7)) && (uVar1 == puVar7[1])) &&
                   (uVar6 == puVar7[4])) {
                    if (auStack_44[uVar8 * 8 + 2] == 0 && auStack_44[uVar8 * 8 + 3] == 0) {
                        uVar1 = puVar9[2];
                        uVar2 = puVar9[3];
                        auStack_44[uVar8 * 8 + 2] = ~(uVar1 & 0xfffff000) + 1 & uStack_4c;
                        auStack_44[uVar8 * 8 + 3] = ~uVar2 + (0xfffffffe < ~(uVar1 & 0xfffff000)) & uStack_48;
                    }
                    fcn.0000286c(auStack_44[uVar8 * 8],auStack_44[uVar8 * 8 + 1],auStack_44[uVar8 * 8 + 2],
                                 auStack_44[uVar8 * 8 + 3]);
                    auStack_2c[uVar8 * 0x20] = 0;
                    break;
                }
                uVar8 = uVar8 + 1;
                puVar7 = puVar7 + 8;
            } while (uVar8 < 2);
            puVar9 = puVar9 + 4;
            iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
    }
    return;
}


/* fcn.000032ec @ 0x32ec */

uint __cdecl fcn.000032ec(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00002ebb @ 0x2ebb */

//WARNING: Removing unreachable block (ram,0x00002ff5)
//WARNING: Removing unreachable block (ram,0x00002fe8)
//WARNING: Removing unreachable block (ram,0x00003049)

int __cdecl fcn.00002ebb(uint32_t arg_8h,uint32_t arg_ch,uint32_t arg_10h)

{
    uint32_t *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    int in_EDX;
    int *piVar8;
    uint32_t arg_8h_00;
    uint64_t uVar9;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_10h = 0;
    var_4h = 0;
    uVar5 = 0;
    if (arg_10h != 0) {
        piVar8 = in_EDX + 0x10;
        do {
            iVar4 = fcn.0000286c(piVar8[-4],piVar8[-3],piVar8[-2],piVar8[-1]);
            if (iVar4 < 0) {
                return iVar4;
            }
            if (*piVar8 == 6) {
                var_10h = var_4h;
            }
            var_4h = var_4h + 1;
            piVar8 = piVar8 + 6;
        } while (var_4h < arg_10h);
        uVar5 = var_10h;
    }
    iVar4 = fcn.0000040a();
    if (((iVar4 == 0) || (*(iVar4 + 0x18) != '\x01')) || (iVar4 = fcn.0000286c(0,0x40,0,0x40), -1 < iVar4)) {
        iVar4 = uVar5 * 0x18;
        puVar1 = iVar4 + 8 + in_EDX;
        uVar5 = *(iVar4 + 4 + in_EDX) + *(iVar4 + 0xc + in_EDX) + CARRY4(*(iVar4 + in_EDX),*puVar1);
        if ((uVar5 <= arg_ch) && ((uVar5 < arg_ch || (*(iVar4 + in_EDX) + *puVar1 < arg_8h)))) {
            uVar9 = fcn.00003483(arg_8h,arg_ch);
            if (uVar9 != CONCAT44(arg_ch,arg_8h)) {
                uVar9 = uVar9 << 1;
            }
            uVar5 = *(iVar4 + 4 + in_EDX);
            arg_10h = 1;
            if ((1 < uVar5) || (uVar6 = *(iVar4 + in_EDX), arg_8h_00 = 0, uVar5 != 0)) {
                arg_10h = *(iVar4 + 4 + in_EDX);
                uVar6 = *(iVar4 + in_EDX);
                arg_8h_00 = *(iVar4 + in_EDX);
            }
            puVar1 = iVar4 + 8 + in_EDX;
            if (CONCAT44(*(iVar4 + 4 + in_EDX) + *(iVar4 + 0xc + in_EDX) + CARRY4(uVar6,*puVar1),uVar6 + *puVar1) <
                uVar9) {
                do {
                    if ((uVar9 <= CONCAT44(arg_10h,arg_8h_00)) ||
                       (iVar3 = uVar9 - CONCAT44(arg_10h,arg_8h_00),
                       iVar7 = fcn.0000286c(arg_8h_00,arg_10h,iVar3,iVar3 >> 0x20), iVar7 == 0)) break;
                    uVar2 = uVar9 >> 1;
                    uVar9 = uVar9 >> 1;
                    puVar1 = iVar4 + 8 + in_EDX;
                } while (CONCAT44(*(iVar4 + 4 + in_EDX) + *(iVar4 + 0xc + in_EDX) + CARRY4(*(iVar4 + in_EDX),*puVar1),
                                  *(iVar4 + in_EDX) + *puVar1) < uVar2);
            }
        }
        iVar4 = 0;
    }
    return iVar4;
}


/* fcn.0000295f @ 0x295f */

ulong * __fastcall fcn.0000295f(ulong *param_1)

{
    char cVar1;
    uint32_t uVar2;
    ulong *puVar3;
    
    cVar1 = fcn.000029f3();
    if (cVar1 != '\0') {
        fcn.00000577();
        uVar2 = 0;
        puVar3 = param_1;
        do {
            wrmsr(*(uVar2 + 0x3780),*puVar3);
            uVar2 = uVar2 + 0xc;
            puVar3 = puVar3 + 1;
        } while (uVar2 < 0x84);
        fcn.000028b2();
        wrmsr(0x2ff,param_1[0x4b]);
        fcn.000005e2();
    }
    return param_1;
}


/* fcn.00003240 @ 0x3240 */

uint __cdecl fcn.00003240(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


