// decompiled by r2ghidra: 2281_FspInitPreMem.te
// functions: 83

/* fcn.0000076c @ 0x76c */

void fcn.0000076c(void)

{
    int *piVar1;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0;
    *(*0xfed00148 + 0xc) = 0xd000;
    fcn.00000dc2();
    if (*(*0xfed00148 + 0x59) == '\0') {
        fcn.0000044b();
        fcn.00000b6b();
        piVar1 = *0xfed00148 + 0x50;
        *(*0xfed00148 + 0x54) = 0;
        var_ch = &var_14h;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffea + -4) + 0x2c))(*(stack0xffffffea + -4),*(*piVar1 + 0x34));
        return;
    }
    var_ch = &var_14h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffea + -4) + 0x24))(*(stack0xffffffea + -4),0xffc5dad8);
    return;
}


/* entry0 @ 0x319 */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_8h

uint entry0(void)

{
    int *piVar1;
    uchar *puVar2;
    uint uVar3;
    uint *puVar4;
    int iVar5;
    int32_t var_14h;
    ushort uStack_14;
    ushort uStack_12;
    int32_t var_ch;
    int32_t var_8h;
    int iStack_8;
    
    var_8h = &stack0xfffffffc;
    var_ch = 0;
    uStack_14 = 0x32c;
    uStack_12 = 0;
    fcn.00000c48(0,&stack0xfffffffc);
    var_8h = 0;
    *(*0xfed00148 + 0xc) = 0xd000;
    fcn.00000dc2();
    if (*(*0xfed00148 + 0x59) == '\0') {
        fcn.0000044b();
        fcn.00000b6b();
        iVar5 = *(*0xfed00148 + 0x50);
        *(*0xfed00148 + 0x54) = 0;
        var_ch = &var_14h;
        uVar3 = InterruptDescriptorTableRegister();
        var_14h._2_2_ = uVar3 >> 0x10;
        piVar1 = *(CONCAT22(uStack_14,var_14h._2_2_) + -4);
        (**(*piVar1 + 0x2c))(piVar1,*(iVar5 + 0x34));
        fcn.00000b6b();
        puVar2 = fcn.00000d27();
        if (puVar2 != NULL) {
            *puVar2 = 1;
            *(puVar2 + 4) = *(iVar5 + 0x24);
            *(puVar2 + 8) = *(iVar5 + 0x30);
            puVar4 = fcn.00000d27();
            if (puVar4 != NULL) {
                *puVar4 = 0x80000010;
                puVar4[1] = 0xffc5d7d8;
                puVar4[2] = puVar2;
                fcn.00000b6b();
                fcn.00000b90(0,&var_8h);
                if (var_8h != 0) {
                    iVar5 = (**var_8h)();
                    if (iVar5 == 0) {
                        iVar5 = fcn.00000b90(0,&iStack_8);
                        if ((iVar5 == 0) && (iStack_8 != 0)) {
                            fcn.00001d6a();
                            fcn.00000f57();
                            fcn.0000161f();
                            fcn.00001fc9();
                            fcn.000020aa();
                            fcn.00001f48();
                            puVar4 = fcn.00000d27();
                            if (puVar4 != NULL) {
                                *puVar4 = 0x80000010;
                                puVar4[1] = 0xffc5d778;
                                puVar4[2] = 0;
                                fcn.00000b6b();
                            }
                        }
                    }
                }
                goto code_r0x000008c0;
            }
        }
        uVar3 = 0x80000009;
    }
    else {
code_r0x000008c0:
        var_ch = &var_14h;
        uVar3 = InterruptDescriptorTableRegister();
        var_14h._2_2_ = uVar3 >> 0x10;
        piVar1 = *(CONCAT22(uStack_14,var_14h._2_2_) + -4);
        uVar3 = (**(*piVar1 + 0x24))(piVar1,0xffc5dad8);
    }
    return uVar3;
}


/* fcn.00000c48 @ 0xc48 */

//WARNING: Removing unreachable block (ram,0x00000c7a)

int __cdecl fcn.00000c48(int32_t arg_8h,int32_t arg_ch)

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
    uVar3 = puVar1[1];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar3;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return in_ECX;
}


/* fcn.00000ed0 @ 0xed0 */

uint fcn.00000ed0(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.000008e6 @ 0x8e6 */

int32_t fcn.000008e6(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000932 @ 0x932 */

int fcn.00000932(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00000911();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000b47();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000bbe @ 0xbbe */

void __cdecl fcn.00000bbe(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00000af6 @ 0xaf6 */

uint32_t __cdecl fcn.00000af6(uint32_t arg_8h,int32_t arg_ch,uint32_t arg_10h)

{
    uint32_t uVar1;
    
    if ((arg_10h != 0) && (arg_8h != arg_ch)) {
        uVar1 = section..text(arg_8h,arg_ch,arg_10h);
        return uVar1;
    }
    return arg_8h;
}


/* fcn.00000998 @ 0x998 */

int fcn.00000998(void)

{
    int iVar1;
    
    iVar1 = fcn.0000095e();
    if (iVar1 != 0) {
        fcn.00000b2e();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.0000095e @ 0x95e */

void __fastcall fcn.0000095e(uint param_1,uint param_2)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),param_1,param_2,&var_8h);
    return;
}


/* fcn.00000b2e @ 0xb2e */

uint * __fastcall fcn.00000b2e(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000d3f @ 0xd3f */

//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Removing unreachable block (ram,0x00000d6e)

void __fastcall fcn.00000d3f(uint param_1)

{
    uint32_t var_1h;
    
    if (*(*0xfed00148 + 0x59) == '\0') {
        do {
            *(*(*0xfed00148 + 8) + 0x24) = param_1;
            fcn.00000100();
        } while( true );
    }
    return;
}


/* fcn.00000100 @ 0x100 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00000100(void)

{
    uint *puVar1;
    uint auStack_30 [2];
    
    auStack_30[0] = InterruptDescriptorTableRegister();
    puVar1 = fcn.00000ed0(auStack_30);
    InterruptDescriptorTableRegister(*puVar1);
    return CONCAT44(puVar1[7],puVar1[9]);
}


/* fcn.00000b47 @ 0xb47 */

uint32_t __fastcall fcn.00000b47(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000b90 @ 0xb90 */

void __cdecl fcn.00000b90(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000b6b @ 0xb6b */

void __fastcall fcn.00000b6b(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000cce @ 0xcce */

int32_t __fastcall fcn.00000cce(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.00000bbe(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.00000be9 @ 0xbe9 */

void fcn.00000be9(uint param_1,uint param_2)

{
    uint *puVar1;
    uint *puVar2;
    
    puVar1 = fcn.00000d27();
    *puVar1 = *0xffc5d968;
    puVar1[1] = *0xffc5d96c;
    puVar1[2] = *0xffc5d970;
    puVar1[3] = *0xffc5d974;
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puVar2 = fcn.00000cf0();
    puVar2[1] = 0xffc5da58;
    *puVar2 = 0x80000010;
    puVar2[2] = puVar1;
    fcn.00000b6b();
    return;
}


/* fcn.00000d27 @ 0xd27 */

int __fastcall fcn.00000d27(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00000cf0();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000000e0(iVar1,param_1);
    return iVar1;
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


/* fcn.00000cf0 @ 0xcf0 */

int32_t __fastcall fcn.00000cf0(uint param_1)

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


/* fcn.00003d25 @ 0x3d25 */

uint __fastcall fcn.00003d25(uint *param_1)

{
    int iVar1;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (*(*0xfed00148 + 0x59) == '\0') {
        iVar1 = *(*(*0xfed00148 + 8) + 0x2c);
    }
    else {
        iVar1 = *(*0xfed00148 + 0x44);
    }
    if (iVar1 == 0) {
        return 0x8000000e;
    }
    *param_1 = 0x108b000c;
    *(param_1 + 1) = 0x108b;
    *(param_1 + 0x12) = 1;
    fcn.00000af6(param_1 + 6,iVar1 + 0x70,0xc);
    return 0;
}


/* fcn.00000334 @ 0x334 */

void fcn.00000334(void)

{
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000008e6();
    return;
}


/* fcn.00000534 @ 0x534 */

void fcn.00000534(void)

{
    int iVar1;
    uint32_t arg_8h;
    
    iVar1 = *(*0xfed00148 + 0x44);
    arg_8h = fcn.00000cce();
    fcn.00000af6(arg_8h,*(*0xfed00148 + 0x50),*(iVar1 + 0x28));
    *(*0xfed00148 + 0x50) = arg_8h;
    return;
}


/* fcn.00000dc2 @ 0xdc2 */

uint32_t __fastcall fcn.00000dc2(uint32_t param_1)

{
    ushort uVar1;
    
    if ((((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) || (**0xfed00148 != 0x44505346)) ||
       ((*(*0xfed00148 + 0x59) != '\0' || ((*0xfed00148)[0x14] == 0)))) {
        uVar1 = 0x80;
    }
    else {
        uVar1 = *((*0xfed00148)[0x14] + 0x8bc);
        param_1 = param_1 & 0xfff | (*0xfed00148)[3];
    }
    out(uVar1,param_1);
    fcn.00000d74(-0x3a24ac,param_1);
    return param_1;
}


/* fcn.000004db @ 0x4db */

uint32_t fcn.000004db(void)

{
    ulong uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int32_t var_4h;
    
    uVar4 = 0;
    uVar5 = 0;
    do {
        uVar1 = rdmsr(*(uVar5 - 0x3a24d8));
        uVar3 = uVar1 | uVar1 >> 0x20;
        if (uVar3 != 0) goto code_r0x0000052c;
        uVar5 = uVar5 + 4;
    } while (uVar5 < 0x2c);
    uVar2 = rdmsr(0xfe);
    uVar5 = uVar2;
    uVar6 = uVar5 & 0xff;
    if ((uVar2 & 0xff) != 0) {
        do {
            uVar1 = rdmsr(uVar4 + 0x200);
            uVar3 = uVar1 | uVar1 >> 0x20;
            if (uVar3 != 0) {
code_r0x0000052c:
                return CONCAT31(uVar3 >> 8,1);
            }
            uVar4 = uVar4 + 1;
            uVar5 = 0;
        } while (uVar4 < uVar6 * 2);
    }
    return uVar5 & 0xffffff00;
}


/* fcn.0000057c @ 0x57c */

uint fcn.0000057c(void)

{
    int iVar1;
    int iVar2;
    char cVar3;
    int *piVar4;
    uint32_t uVar5;
    
    if (*(*0xfed00148 + 0x59) == '\0') {
        piVar4 = *(*(*0xfed00148 + 8) + 0x2c);
        if (*piVar4 != 0x48505346) {
            piVar4 = *(*0xfed00148 + 0x44);
        }
        uVar5 = piVar4[7];
        iVar2 = piVar4[6];
        iVar1 = uVar5 - 1;
        for (; (uVar5 < iVar1 + iVar2 && (*(uVar5 + 0x28) == 0x4856465f)); uVar5 = uVar5 + *(uVar5 + 0x20)) {
            if (*(uVar5 + 0x34) != 0) {
                cVar3 = fcn.00000b47();
                if (cVar3 != '\0') {
                    fcn.00000be9(uVar5,*(uVar5 + 0x20));
                }
            }
        }
    }
    return 0;
}


/* fcn.0000044b @ 0x44b */

int fcn.0000044b(void)

{
    int iVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_14h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffea + -4) + 0x24))(*(stack0xffffffea + -4),0xffc5dae4);
    uVar3 = 0;
    while( true ) {
        iVar1 = fcn.00000b90(&var_8h,&var_ch);
        if (-1 < iVar1) {
            var_4h = &var_14h;
            InterruptDescriptorTableRegister();
            iVar1 = (**(**(stack0xffffffea + -4) + 0x1c))(*(stack0xffffffea + -4),var_8h,uVar3 * 0xc + -0x3a2510);
            return iVar1;
        }
        iVar1 = fcn.00000b6b();
        if (iVar1 < 0) break;
        uVar2 = uVar3 + 1;
        uVar3 = uVar2;
        if (uVar2 != 0) {
            return 0;
        }
    }
    return iVar1;
}


/* fcn.00001d6a @ 0x1d6a */

uint __fastcall fcn.00001d6a(uint param_1,int param_2)

{
    uchar uVar1;
    int iVar2;
    uint32_t uVar3;
    uchar *puVar4;
    uchar *puVar5;
    int iStack_4;
    
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(param_2 + 0x191);
        *(iStack_4 + 0x1d) = *(param_2 + 0x192);
        *(iStack_4 + 0x1f) = *(param_2 + 0x194);
    }
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(param_2 + 0x195);
        *(iStack_4 + 0x1d) = *(param_2 + 0x196);
        *(iStack_4 + 0x1e) = *(param_2 + 0x197);
    }
    fcn.000017ea();
    fcn.000018b5();
    fcn.00001935();
    fcn.00001a8d();
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x741) ^ *(iStack_4 + 0x1c)) & 1;
    }
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x742) ^ *(iStack_4 + 0x1c)) & 1;
        uVar3 = (*(param_2 + 0x49c) << 2 ^ *(iStack_4 + 0x1c)) & 0x1c ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar3;
        *(iStack_4 + 0x1c) = (*(param_2 + 0x19a) << 7 ^ uVar3) & 0x80 ^ uVar3;
    }
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x969) ^ *(iStack_4 + 0x1c)) & 1;
    }
    fcn.00001c04();
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x1fa) ^ *(iStack_4 + 0x1c)) & 1;
    }
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        puVar4 = param_2 + 0xb1e;
        iVar2 = 8;
        puVar5 = iStack_4 + 0x1d;
        do {
            puVar5[-1] = puVar4[-8];
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 4;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        *(iStack_4 + 0x3c) = *(param_2 + 0x334);
    }
    iVar2 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar2) {
        *(iStack_4 + 0x1c) = *(param_2 + 0x80d);
    }
    return 0;
}


/* fcn.00000f57 @ 0xf57 */

uint __fastcall fcn.00000f57(uint param_1,int param_2)

{
    int iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    uchar *puVar4;
    uint8_t uVar5;
    uint8_t uVar6;
    uint16_t *puVar7;
    uint16_t *puVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iStack_14;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    
    iStack_10 = param_2;
    fcn.00000ee1(&iStack_14);
    fcn.00000ee1(&iStack_4);
    iVar1 = iStack_10;
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3b6) ^ *(iStack_14 + 0x1c)) & 1;
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3b7) * 2 ^ *(iStack_14 + 0x1c)) & 2;
    *(iStack_14 + 0x44) = *(param_2 + 0x298);
    *(iStack_14 + 0x20) = *(param_2 + 0x3b8);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3b9) << 2 ^ *(iStack_14 + 0x1c)) & 4;
    *(iStack_14 + 0x22) = *(param_2 + 0x3ba);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3ce) << 0x14 ^ *(iStack_14 + 0x1c)) & 0x100000;
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3cf) << 0x15 ^ *(iStack_14 + 0x1c)) & 0x200000;
    *(iStack_14 + 0x2a) = *(param_2 + 0x3d2);
    *(iStack_14 + 0x2c) = *(param_2 + 0x3d4);
    *(iStack_14 + 0x2e) = *(param_2 + 0x3d6);
    *(iStack_14 + 0xb0) = *(param_2 + 0x45d);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3f4) << 0x1a ^ *(iStack_14 + 0x1c)) & 0x4000000;
    *(iStack_14 + 0x24) = *(param_2 + 0x3c6);
    *(iStack_14 + 0x26) = *(param_2 + 0x3c8);
    *(iStack_14 + 0x28) = *(param_2 + 0x3ca);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3cc) << 3 ^ *(iStack_14 + 0x1c)) & 0x1f8;
    *(iStack_14 + 0x38) = *(iStack_14 + 0x38) ^ (*(param_2 + 0x821) ^ *(iStack_14 + 0x38)) & 0x3f;
    uVar3 = (*(param_2 + 0x822) << 6 ^ *(iStack_14 + 0x38)) & 0xfc0 ^ *(iStack_14 + 0x38);
    *(iStack_14 + 0x38) = uVar3;
    *(iStack_14 + 0x38) = (*(param_2 + 0x823) << 0xc ^ uVar3) & 0x3f000 ^ uVar3;
    *(iStack_14 + 0xe3) = *(param_2 + 0x3cd);
    *(iStack_14 + 0x38) = *(iStack_14 + 0x38) ^ (*(param_2 + 0x824) << 0x12 ^ *(iStack_14 + 0x38)) & 0xfc0000;
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3c5) << 0x13 ^ *(iStack_14 + 0x1c)) & 0x80000;
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x3c3) << 9 ^ *(iStack_14 + 0x1c)) & 0x3e00;
    *(iStack_14 + 0x3c) = *(param_2 + 0x3d0);
    *(iStack_14 + 0x46) = *(param_2 + 0xa94);
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(param_2 + 0x2a0) ^ *(iStack_14 + 0x40)) & 1;
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(param_2 + 0x2a1) * 2 ^ *(iStack_14 + 0x40)) & 2;
    *(iStack_14 + 0x1c) = *(param_2 + 0x459) << 0x1f | *(iStack_14 + 0x1c) & 0x7fffffff;
    *(iStack_14 + 0xf0) = *(param_2 + 0x45a);
    *(iStack_14 + 0x38) = *(iStack_14 + 0x38) ^ (*(param_2 + 0x4ac) << 0x1e ^ *(iStack_14 + 0x38)) & 0x40000000;
    *(iStack_14 + 0x38) = *(param_2 + 0x4ae) << 0x1f | *(iStack_14 + 0x38) & 0x7fffffff;
    *(iStack_14 + 0x104) = *(param_2 + 0x4b6);
    *(iStack_14 + 0x105) = *(param_2 + 0x4b7);
    *(iStack_14 + 0x106) = *(param_2 + 0x4b8);
    *(iStack_14 + 0x107) = *(param_2 + 0x4b9);
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(param_2 + 0x4ba) << 4 ^ *(iStack_14 + 0x40)) & 0x10;
    *(iStack_14 + 0xf2) = *(param_2 + 0x4bb);
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(param_2 + 0x4c4) << 5 ^ *(iStack_14 + 0x40)) & 0x20;
    puVar4 = iStack_14 + 0x68;
    puVar7 = iStack_14 + 0x48;
    puVar8 = param_2 + 0x3f6;
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(param_2 + 0x4c5) << 6 ^ *(iStack_14 + 0x40)) & 0xc0;
    iStack_c = param_2 - puVar4;
    iStack_8 = param_2 - puVar4;
    iVar9 = 0xf;
    do {
        *puVar4 = puVar4[iStack_c + 0x423];
        uVar2 = *puVar8;
        if (puVar4[iStack_8 + 0x414] == '\x01') {
            uVar2 = ~uVar2 + 1;
        }
        *puVar7 = uVar2;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
        iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    puVar4 = iStack_14 + 0xd4;
    puVar7 = iStack_14 + 0xb4;
    puVar8 = iStack_10 + 0x45e;
    iVar10 = iStack_10 - puVar4;
    iVar11 = iStack_10 - puVar4;
    iVar9 = 0xf;
    do {
        *puVar4 = puVar4[iVar10 + 0x48b];
        uVar2 = *puVar8;
        if (puVar4[iVar11 + 0x47c] == '\x01') {
            uVar2 = ~uVar2 + 1;
        }
        *puVar7 = uVar2;
        puVar8 = puVar8 + 1;
        puVar7 = puVar7 + 1;
        puVar4 = puVar4 + 1;
        iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    *(iStack_14 + 0xb1) = *(iStack_10 + 0x49a);
    *(iStack_14 + 0x77) = *(iStack_10 + 0x432);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(iStack_10 + 0x433) << 0x1b ^ *(iStack_14 + 0x1c)) & 0x8000000;
    if ((*(iStack_14 + 0x1c) & 0x8000000) != 0) {
        uVar3 = 0;
        if (*(iStack_10 + 0x3bf) != '\0') {
            do {
                uVar2 = *(iStack_10 + 0x434 + uVar3 * 2);
                if (*(uVar3 + 0x444 + iStack_10) == '\x01') {
                    uVar2 = ~uVar2 + 1;
                }
                uVar5 = uVar3 + 1;
                *(iStack_14 + 0x88 + uVar3 * 2) = uVar2;
                uVar3 = uVar5;
            } while (uVar5 < *(iStack_10 + 0x3bf));
        }
        uVar3 = 0;
        if ((*(iStack_10 + 0x3f3) & 0xfc) != 0) {
            do {
                uVar2 = *(iStack_10 + 0x3e4 + uVar3 * 2);
                if (*(uVar3 + 0x3ec + iStack_10) == '\x01') {
                    uVar2 = ~uVar2 + 1;
                }
                *(iStack_14 + 0xf4 + uVar3 * 2) = uVar2;
                uVar5 = uVar3 + 1;
                uVar3 = uVar5;
            } while (uVar5 < *(iStack_10 + 0x3f3) >> 2);
        }
    }
    *(iStack_14 + 0xe8) = *(iStack_10 + 0x4a4);
    *(iStack_14 + 0xa4) = *(iStack_10 + 0x3dc);
    *(iStack_14 + 0xa6) = *(iStack_10 + 0x3de);
    *(iStack_14 + 0xa8) = *(iStack_10 + 0x3e0);
    *(iStack_14 + 0xaa) = *(iStack_10 + 0x3e2);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(iStack_10 + 0x29a) << 0x1e ^ *(iStack_14 + 0x1c)) & 0x40000000;
    *(iStack_14 + 0xac) = *(iStack_10 + 0x29c);
    *(iStack_14 + 0xae) = *(iStack_10 + 0x29e);
    *(iStack_14 + 0xe4) = *(iStack_10 + 0x4a0);
    *(iStack_14 + 0x38) = *(iStack_14 + 0x38) ^ (*(iStack_10 + 0x3f0) << 0x18 ^ *(iStack_14 + 0x38)) & 0x1000000;
    *(iStack_14 + 0x38) = *(iStack_14 + 0x38) ^ (*(iStack_10 + 0x3f1) << 0x19 ^ *(iStack_14 + 0x38)) & 0x2000000;
    *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(iStack_10 + 0x3bb) ^ *(iStack_4 + 0x1c)) & 1;
    *(iStack_4 + 0x1c) = (*(iStack_10 + 0x3be) * 2 ^ *(iStack_4 + 0x1c)) & 6 ^ *(iStack_4 + 0x1c);
    fcn.00000a6f();
    if (*(iVar1 + 0x3bf) == -1) {
        *(iVar1 + 0x3bf) = 0;
    }
    if (*(iVar1 + 0x3f3) == -1) {
        *(iVar1 + 0x3f3) = 0;
    }
    if ((*(iVar1 + 0x3bf) == '\0') && (*(iVar1 + 0x3f3) == '\0')) {
        *(iVar1 + 0x3bf) = 0;
        *(iVar1 + 0x3f3) = 0;
    }
    *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(iVar1 + 0x3bf) << 0x10 ^ *(iStack_4 + 0x1c)) & 0xf0000;
    uVar3 = (*(iVar1 + 0x3f3) << 0x16 ^ *(iStack_4 + 0x1c)) & 0xfc00000 ^ *(iStack_4 + 0x1c);
    *(iStack_4 + 0x1c) = uVar3;
    uVar3 = (*(iVar1 + 0x3c0) << 9 ^ uVar3) & 0x600 ^ uVar3;
    *(iStack_4 + 0x1c) = uVar3;
    uVar3 = (*(iVar1 + 0x3c1) << 6 ^ uVar3) & 0x40 ^ uVar3;
    *(iStack_4 + 0x1c) = uVar3;
    uVar3 = (*(iVar1 + 0x3b3) << 7 ^ uVar3) & 0x80 ^ uVar3;
    *(iStack_4 + 0x1c) = uVar3;
    *(iStack_4 + 0x1c) = (*(iVar1 + 0x3c2) << 8 ^ uVar3) & 0x100 ^ uVar3;
    *(iStack_4 + 0x20) = *(iVar1 + 0x3bd);
    *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(iVar1 + 0x3d8) << 0xc ^ *(iStack_4 + 0x1c)) & 0x1000;
    uVar3 = (*(iVar1 + 0x3d9) << 0xb ^ *(iStack_4 + 0x1c)) & 0x800 ^ *(iStack_4 + 0x1c);
    *(iStack_4 + 0x1c) = uVar3;
    uVar3 = (*(iVar1 + 0x3da) << 0xd ^ uVar3) & 0x6000 ^ uVar3;
    *(iStack_4 + 0x1c) = uVar3;
    *(iStack_4 + 0x1c) = (*(iVar1 + 0x3db) << 0xf ^ uVar3) & 0x8000 ^ uVar3;
    *(iStack_4 + 0x29) = *(iVar1 + 0x4bc);
    *(iStack_4 + 0x2c) = *(iVar1 + 0x4c0);
    if ((*(iStack_14 + 0x1c) & 0x10000000) != 0) {
        uVar6 = 0;
        uVar5 = 0;
        if (*(iVar1 + 0x3bf) != '\0') {
            do {
                uVar3 = uVar5;
                uVar5 = uVar5 + 1;
                *(iStack_14 + 0x98 + uVar3) = *(iVar1 + 0x44d + uVar3);
            } while (uVar5 < *(iVar1 + 0x3bf));
        }
        if ((*(iVar1 + 0x3f3) & 0xfc) != 0) {
            do {
                uVar3 = uVar6;
                uVar6 = uVar6 + 1;
                *(iStack_14 + 0xa0 + uVar3) = *(iVar1 + 0x455 + uVar3);
            } while (uVar6 < *(iVar1 + 0x3f3) >> 2);
        }
    }
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(iVar1 + 0x4af) << 2 ^ *(iStack_14 + 0x40)) & 4;
    *(iStack_14 + 0x100) = *(iVar1 + 0x4b0);
    *(iStack_14 + 0x40) = *(iStack_14 + 0x40) ^ (*(iVar1 + 0x4b2) << 3 ^ *(iStack_14 + 0x40)) & 8;
    *(iStack_14 + 0x102) = *(iVar1 + 0x4b4);
    return 0;
}


/* fcn.0000161f @ 0x161f */

uint __fastcall fcn.0000161f(uint param_1,int param_2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iStack_18;
    uint32_t uStack_14;
    int iStack_10;
    int aiStack_c [2];
    
    fcn.00000ee1(&iStack_18);
    fcn.00000ee1(aiStack_c);
    fcn.00000ee1(&iStack_10);
    *(iStack_18 + 0x24) = *(iStack_18 + 0x24) ^ (*(param_2 + 0x3b4) << 4 ^ *(iStack_18 + 0x24)) & 0x10;
    uVar2 = (*(param_2 + 0x3b5) << 5 ^ *(iStack_18 + 0x24)) & 0x20 ^ *(iStack_18 + 0x24);
    *(iStack_18 + 0x24) = uVar2;
    uVar2 = (*(param_2 + 0x4cc) ^ uVar2) & 1 ^ uVar2;
    *(iStack_18 + 0x24) = uVar2;
    uVar4 = (*(param_2 + 0x4cd) * 2 ^ uVar2) & 2 ^ uVar2;
    *(iStack_18 + 0x24) = uVar4;
    *(iStack_18 + 0x24) = (*(param_2 + 0x4ce) << 3 ^ uVar4) & 8 ^ uVar4;
    *(iStack_18 + 0x1c) = *(param_2 + 0x4d0);
    fcn.00000c84(uVar2,uVar2,&uStack_14);
    if ((*(iStack_18 + 0x1c) == 0) || (((uStack_14 & 0x800000) != 0 && ((*(iStack_10 + 0x1c) & 0xfc00000) != 0)))) {
        cVar1 = fcn.00005968();
        *(iStack_18 + 0x1c) = (-(cVar1 != '\0') & 0x200000) + 0x200000;
    }
    iVar3 = fcn.000009bf();
    if (iVar3 != 0xb0670) {
        iVar3 = fcn.000009bf();
        if (iVar3 != 0xb06a0) goto code_r0x0000174c;
    }
    cVar1 = fcn.00000a3d();
    if (cVar1 != '\0') {
        cVar1 = fcn.00005968();
        *(iStack_18 + 0x1c) = (-(cVar1 != '\0') & 0x400000) + 0x400000;
    }
code_r0x0000174c:
    *(iStack_18 + 0x20) = *(param_2 + 0x95a);
    *(aiStack_c[0] + 0x1c) = *(param_2 + 0x4d4);
    *(aiStack_c[0] + 0x20) = *(param_2 + 0x4e0);
    *(aiStack_c[0] + 0x28) = *(param_2 + 0x4d8);
    *(aiStack_c[0] + 0x2c) = *(param_2 + 0x4dc);
    *(aiStack_c[0] + 0x24) = *(param_2 + 0x4e4);
    *(aiStack_c[0] + 0x48) = *(param_2 + 0x4e8);
    *(aiStack_c[0] + 0x4c) = 0;
    *(aiStack_c[0] + 0x50) = *(param_2 + 0x4ec);
    *(aiStack_c[0] + 0x54) = *(param_2 + 0x4f4);
    *(aiStack_c[0] + 0x38) = *(param_2 + 0x4f8);
    *(aiStack_c[0] + 0x3c) = *(param_2 + 0x4fc);
    *(aiStack_c[0] + 0x30) = *(param_2 + 0x500);
    *(aiStack_c[0] + 0x34) = *(param_2 + 0x504);
    *(aiStack_c[0] + 0x40) = *(param_2 + 0x4f0);
    *(aiStack_c[0] + 0x44) = 0;
    *(aiStack_c[0] + 0x58) = *(param_2 + 0x508);
    return 0;
}


/* fcn.00001fc9 @ 0x1fc9 */

uint __fastcall fcn.00001fc9(uint param_1,int param_2)

{
    uint32_t uVar1;
    int32_t var_4h;
    
    fcn.00000ee1(&var_4h);
    *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x20b) ^ *(var_4h + 0x1c)) & 1;
    uVar1 = (*(param_2 + 0x96b) * 2 ^ *(var_4h + 0x1c)) & 6 ^ *(var_4h + 0x1c);
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0x96c) << 3 ^ uVar1) & 8 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0x96d) << 5 ^ uVar1) & 0x20 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0x96e) << 6 ^ uVar1) & 0x40 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0x96f) << 7 ^ uVar1) & 0x80 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    uVar1 = (*(param_2 + 0x970) << 8 ^ uVar1) & 0x100 ^ uVar1;
    *(var_4h + 0x1c) = uVar1;
    *(var_4h + 0x1c) = (*(param_2 + 0x971) << 9 ^ uVar1) & 0x200 ^ uVar1;
    *(var_4h + 0x20) = *(param_2 + 0x20c);
    *(var_4h + 0x24) = *(param_2 + 0x210);
    *(var_4h + 0x28) = *(param_2 + 0x214);
    return 0;
}


/* fcn.00000ee1 @ 0xee1 */

uint __cdecl fcn.00000ee1(int32_t arg_8h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    char cVar3;
    int in_ECX;
    uint16_t uVar4;
    int iVar5;
    int iVar6;
    
    uVar1 = *(in_ECX + 0x1e);
    iVar5 = 0;
    uVar4 = 0;
    if (uVar1 != 0) {
        uVar2 = *(in_ECX + 2);
        do {
            if (uVar2 < iVar5 + 0x24U) {
                return 0x8000000e;
            }
            iVar6 = in_ECX + 0x24 + iVar5;
            cVar3 = fcn.00000b47();
            if (cVar3 != '\0') {
                *arg_8h = iVar6;
                return 0;
            }
            iVar5 = iVar5 + *(iVar6 + 2);
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0x8000000e;
}


/* fcn.000020aa @ 0x20aa */

uint __fastcall fcn.000020aa(uint param_1,int param_2)

{
    ushort uVar1;
    uint uVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    int iVar6;
    uchar *puVar7;
    uint32_t uVar8;
    ushort *puVar9;
    uint *puVar10;
    uint *puVar11;
    uint8_t uVar12;
    int iVar13;
    ushort *puVar14;
    int iVar15;
    int iVar16;
    uchar *puVar17;
    int iVar18;
    int iStack_94;
    int iStack_90;
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    int iStack_7c;
    int iStack_78;
    int iStack_74;
    int iStack_70;
    int iStack_6c;
    int iStack_68;
    int iStack_64;
    int iStack_60;
    int iStack_5c;
    int iStack_58;
    int iStack_54;
    int iStack_50;
    int iStack_4c;
    int iStack_48;
    int iStack_44;
    int iStack_40;
    int iStack_3c;
    int iStack_38;
    int iStack_34;
    int iStack_30;
    int iStack_2c;
    int iStack_28;
    int iStack_24;
    int iStack_20;
    int iStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    
    iStack_70 = *(*0xfed00148 + 0x50);
    iStack_88 = 0;
    iStack_6c = param_2;
    fcn.00000ee1(&stack0xffffff78);
    iStack_8c = 0;
    fcn.00000ee1(&stack0xffffff74);
    iStack_7c = 0;
    fcn.00000ee1(&stack0xffffff84);
    iStack_90 = 0;
    fcn.00000ee1(&stack0xffffff70);
    iStack_80 = 0;
    fcn.00000ee1(&stack0xffffff80);
    iStack_94 = 0;
    fcn.00000ee1(&stack0xffffff6c);
    iStack_74 = 0;
    fcn.00000ee1(&stack0xffffff8c);
    iStack_84 = 0;
    fcn.00000ee1(&stack0xffffff7c);
    iStack_54 = 0;
    fcn.00000ee1(&stack0xffffffac);
    iStack_78 = 0;
    fcn.00000ee1(&stack0xffffff88);
    iStack_64 = 0;
    fcn.00000ee1(&stack0xffffff9c);
    iStack_5c = 0;
    fcn.00000ee1(&stack0xffffffa4);
    iStack_68 = 0;
    fcn.00000ee1(&stack0xffffff98);
    iStack_58 = 0;
    fcn.00000ee1(&stack0xffffffa8);
    iStack_60 = 0;
    fcn.00000ee1(&stack0xffffffa0);
    iVar13 = iStack_94;
    fcn.000000e0(*(iStack_94 + 0xec),0x4000);
    if ((*(param_2 + 0x4c) != 0) && (*(param_2 + 0x180) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec),*(param_2 + 0x4c),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x50) != 0) && (*(param_2 + 0x181) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x400,*(param_2 + 0x50),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x54) != 0) && (*(param_2 + 0x182) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x800,*(param_2 + 0x54),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x58) != 0) && (*(param_2 + 0x183) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0xc00,*(param_2 + 0x58),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x5c) != 0) && (*(param_2 + 0x184) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x1000,*(param_2 + 0x5c),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x60) != 0) && (*(param_2 + 0x185) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x1400,*(param_2 + 0x60),*(param_2 + 0x48));
    }
    if ((*(param_2 + 100) != 0) && (*(param_2 + 0x186) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x1800,*(param_2 + 100),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x68) != 0) && (*(param_2 + 0x187) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x1c00,*(param_2 + 0x68),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x6c) != 0) && (*(param_2 + 0x188) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x2000,*(param_2 + 0x6c),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x70) != 0) && (*(param_2 + 0x189) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x2400,*(param_2 + 0x70),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x74) != 0) && (*(param_2 + 0x18a) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x2800,*(param_2 + 0x74),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x78) != 0) && (*(param_2 + 0x18b) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x2c00,*(param_2 + 0x78),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x7c) != 0) && (*(param_2 + 0x18c) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x3000,*(param_2 + 0x7c),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x80) != 0) && (*(param_2 + 0x18d) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x3400,*(param_2 + 0x80),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x84) != 0) && (*(param_2 + 0x18e) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x3800,*(param_2 + 0x84),*(param_2 + 0x48));
    }
    if ((*(param_2 + 0x88) != 0) && (*(param_2 + 399) == '\0')) {
        fcn.00000af6(*(iVar13 + 0xec) + 0x3c00,*(param_2 + 0x88),*(param_2 + 0x48));
    }
    if (param_2 + 0x98 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0),param_2 + 0x98,2);
    }
    if (param_2 + 0x9a != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 2,param_2 + 0x9a,2);
    }
    if (param_2 + 0x9c != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 4,param_2 + 0x9c,2);
    }
    if (param_2 + 0x9e != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 6,param_2 + 0x9e,2);
    }
    if (param_2 + 0xa0 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 8,param_2 + 0xa0,2);
    }
    if (param_2 + 0xa2 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 10,param_2 + 0xa2,2);
    }
    if (param_2 + 0xa4 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0xc,param_2 + 0xa4,2);
    }
    if (param_2 + 0xa6 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0xe,param_2 + 0xa6,2);
    }
    if (param_2 + 0xa8 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x10,param_2 + 0xa8,0x10);
    }
    if (param_2 + 0xb8 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x20,param_2 + 0xb8,0x10);
    }
    if (param_2 + 200 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x30,param_2 + 200,0x10);
    }
    if (param_2 + 0xd8 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x40,param_2 + 0xd8,0x10);
    }
    if (param_2 + 0xe8 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x50,param_2 + 0xe8,0x10);
    }
    if (param_2 + 0xf8 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x60,param_2 + 0xf8,0x10);
    }
    if (param_2 + 0x108 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x70,param_2 + 0x108,0x10);
    }
    if (param_2 + 0x118 != 0) {
        fcn.00000af6(*(iVar13 + 0xf0) + 0x80,param_2 + 0x118,0x10);
    }
    **(iVar13 + 0xf4) = *(param_2 + 0x8c);
    if (param_2 + 0x8e != 0) {
        fcn.00000af6(*(iVar13 + 0xf4) + 2,param_2 + 0x8e,10);
    }
    iVar16 = iStack_90;
    puVar14 = param_2 + 0x202;
    *(iVar13 + 0xf8) = *(param_2 + 0x40);
    *(iVar13 + 0xfc) = *(param_2 + 0x44);
    *(iVar13 + 0x104) = *(param_2 + 0x8d9);
    *(iVar13 + 0x100) = *(iVar13 + 0x100) ^ (*(param_2 + 0x8b8) ^ *(iVar13 + 0x100)) & 1;
    *(iVar13 + 0x105) = *(param_2 + 0x1d5);
    puVar7 = iStack_90 + 0x9c;
    puVar9 = iStack_90 + 0x94;
    *(iStack_90 + 0x5c) = *(iStack_90 + 0x5c) ^ (*(param_2 + 0x128) << 2 ^ *(iStack_90 + 0x5c)) & 4;
    *(iStack_90 + 0x5c) = *(iStack_90 + 0x5c) ^ (*(param_2 + 0x174) * 2 ^ *(iStack_90 + 0x5c)) & 2;
    *(iStack_90 + 0x6e) = *(param_2 + 0x1d4);
    iVar5 = param_2 - puVar7;
    iVar13 = 4;
    do {
        uVar1 = *puVar14;
        puVar14 = puVar14 + 1;
        *puVar9 = uVar1;
        puVar9 = puVar9 + 1;
        *puVar7 = puVar7[iVar5 + 0x1fe];
        puVar7 = puVar7 + 1;
        iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    *(iStack_90 + 0x151) = *(param_2 + 0xb2a);
    *(iStack_90 + 0x154) = *(param_2 + 0xb2e);
    *(iStack_90 + 0x82) = *(param_2 + 0x20a);
    *(iStack_90 + 0x68) = *(param_2 + 0x1d2);
    *(iStack_90 + 0x44) = *(param_2 + 0x1d8);
    *(iStack_90 + 0x45) = *(param_2 + 0x1d9);
    *(iStack_90 + 0x46) = *(param_2 + 0x1da);
    *(iStack_90 + 0x47) = *(param_2 + 0x1db);
    *(iStack_90 + 0x48) = *(param_2 + 0x1dc);
    *(iStack_90 + 0x49) = *(param_2 + 0x1dd);
    *(iStack_90 + 0x4a) = *(param_2 + 0x1de);
    *(iStack_90 + 0x4b) = *(param_2 + 0x1df);
    *(iStack_90 + 0x40) = *(iStack_90 + 0x40) ^ (*(param_2 + 0x825) * 2 ^ *(iStack_90 + 0x40)) & 2;
    uVar8 = (*(param_2 + 0x8b9) << 9 ^ *(iStack_90 + 0x40)) & 0x200 ^ *(iStack_90 + 0x40);
    *(iStack_90 + 0x40) = uVar8;
    uVar8 = (*(param_2 + 0x176) << 0xb ^ uVar8) & 0x800 ^ uVar8;
    *(iStack_90 + 0x40) = uVar8;
    uVar8 = (*(param_2 + 0x175) << 10 ^ uVar8) & 0x400 ^ uVar8;
    *(iStack_90 + 0x40) = uVar8;
    uVar8 = (*(param_2 + 0x1e0) << 3 ^ uVar8) & 8 ^ uVar8;
    *(iStack_90 + 0x40) = uVar8;
    *(iStack_90 + 0x40) = (*(param_2 + 0x8b7) << 0xc ^ uVar8) & 0x1000 ^ uVar8;
    *(iStack_90 + 0x83) = *(param_2 + 0x8da);
    *(iStack_90 + 0x5c) = *(iStack_90 + 0x5c) ^ (*(param_2 + 0xb2d) ^ *(iStack_90 + 0x5c)) & 1;
    *(iStack_90 + 0x4d) = *(param_2 + 0x17e);
    if (iStack_8c != 0) {
        *(iStack_8c + 0x40) = *(param_2 + 0x1d0);
        *(iStack_8c + 99) = *(param_2 + 0x1d1);
    }
    *(iStack_90 + 0xf9) = *(param_2 + 0x2ad);
    *(iStack_90 + 0xfb) = *(param_2 + 0x2af);
    *(iStack_90 + 0x1f) = *(param_2 + 0x1e1);
    *(iStack_90 + 0x3a) = *(param_2 + 0x1e4);
    *(iStack_90 + 0xf4) = *(param_2 + 0x2a4);
    *(iStack_90 + 0xf6) = *(param_2 + 0x2a6);
    *(iStack_90 + 0x70) = *(param_2 + 0x1e2);
    *(iStack_90 + 0x4c) = *(param_2 + 0x1e6);
    *(iStack_90 + 0x20) = *(param_2 + 0x1e7);
    *(iStack_90 + 0x32) = *(param_2 + 0x1e8);
    *(iStack_90 + 0x30) = *(param_2 + 0x1ea);
    *(iStack_90 + 0x24) = *(param_2 + 0x1ec);
    *(iStack_90 + 0x22) = *(param_2 + 0x1ee);
    *(iStack_90 + 0x34) = *(param_2 + 0x1f0);
    *(iStack_90 + 0x28) = *(param_2 + 0x1f2);
    *(iStack_90 + 0x2a) = *(param_2 + 500);
    *(iStack_90 + 0x2e) = *(param_2 + 0x1f5);
    *(iStack_90 + 0x26) = *(param_2 + 0x1f6);
    *(iStack_90 + 0x2c) = *(param_2 + 0x1f7);
    *(iStack_90 + 0x118) = *(param_2 + 0xae0);
    *(iStack_90 + 0x11a) = *(param_2 + 0xae2);
    *(iStack_90 + 0x11c) = *(param_2 + 0xae4);
    *(iStack_90 + 0x11e) = *(param_2 + 0xae6);
    *(iStack_90 + 0x120) = *(param_2 + 0xae7);
    *(iStack_90 + 0x122) = *(param_2 + 0xae8);
    *(iStack_90 + 0x124) = *(param_2 + 0xae9);
    *(iStack_90 + 0x126) = *(param_2 + 0xaea);
    *(iStack_90 + 0x6f) = *(param_2 + 0x1f8);
    *(iStack_90 + 0x153) = *(param_2 + 0x2b0);
    cVar3 = fcn.00000ae1();
    iVar5 = iStack_6c;
    iVar13 = iStack_8c;
    if (cVar3 == '\0') {
        *(iVar16 + 0x40) = *(iVar16 + 0x40) & 0xffffffbf;
    }
    else {
        *(iVar16 + 0x40) = *(iVar16 + 0x40) | 0x40;
    }
    *(iVar16 + 0x1e) = *(param_2 + 0x82f);
    *(iVar16 + 0x54) = *(iVar16 + 0x54) ^ (*(param_2 + 0x830) ^ *(iVar16 + 0x54)) & 1;
    uVar8 = (*(param_2 + 0x831) * 2 ^ *(iVar16 + 0x54)) & 2 ^ *(iVar16 + 0x54);
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x832) << 2 ^ uVar8) & 4 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    *(iVar16 + 0x54) = (*(param_2 + 0x833) << 3 ^ uVar8) & 8 ^ uVar8;
    *(iVar16 + 0x58) = *(iVar16 + 0x58) ^ (*(param_2 + 0x8e9) << 0x11 ^ *(iVar16 + 0x58)) & 0x20000;
    *(iVar16 + 0x58) = *(iVar16 + 0x58) ^ (*(param_2 + 0xb2b) << 0x12 ^ *(iVar16 + 0x58)) & 0x40000;
    *(iVar16 + 0x54) = *(iVar16 + 0x54) ^ (*(param_2 + 0x834) << 4 ^ *(iVar16 + 0x54)) & 0x10;
    uVar8 = (*(param_2 + 0x835) << 5 ^ *(iVar16 + 0x54)) & 0x20 ^ *(iVar16 + 0x54);
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x836) << 6 ^ uVar8) & 0x40 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x837) << 7 ^ uVar8) & 0x80 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x838) << 8 ^ uVar8) & 0x100 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x839) << 9 ^ uVar8) & 0x200 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x83a) << 10 ^ uVar8) & 0x400 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x83b) << 0xb ^ uVar8) & 0x800 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x83c) << 0xc ^ uVar8) & 0x1000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x83d) << 0xd ^ uVar8) & 0x2000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x83e) << 0xe ^ uVar8) & 0x4000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x83f) << 0xf ^ uVar8) & 0x8000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x840) << 0x10 ^ uVar8) & 0x10000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x841) << 0x11 ^ uVar8) & 0x20000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x842) << 0x12 ^ uVar8) & 0x40000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x843) << 0x13 ^ uVar8) & 0x80000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x844) << 0x14 ^ uVar8) & 0x100000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x845) << 0x15 ^ uVar8) & 0x200000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x846) << 0x16 ^ uVar8) & 0x400000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x847) << 0x17 ^ uVar8) & 0x800000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x848) << 0x18 ^ uVar8) & 0x1000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x849) << 0x19 ^ uVar8) & 0x2000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x84c) << 0x1d ^ uVar8) & 0x20000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x1d7) << 0x1a ^ uVar8) & 0x4000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x84a) << 0x1b ^ uVar8) & 0x8000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x84b) << 0x1c ^ uVar8) & 0x10000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    uVar8 = (*(param_2 + 0x84d) << 0x1e ^ uVar8) & 0x40000000 ^ uVar8;
    *(iVar16 + 0x54) = uVar8;
    *(iVar16 + 0x54) = *(param_2 + 0x84e) << 0x1f | uVar8 & 0x7fffffff;
    *(iVar16 + 0xef) = *(param_2 + 0xaa9);
    *(iVar16 + 0xf0) = *(param_2 + 0xaaa);
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x84f) ^ *(iVar16 + 0x40)) & 1;
    *(iVar16 + 0xeb) = *(param_2 + 0x8e1);
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x850) << 2 ^ *(iVar16 + 0x40)) & 4;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x1e0) << 3 ^ *(iVar16 + 0x40)) & 8;
    *(iVar16 + 0x5c) = *(iVar16 + 0x5c) ^ (*(param_2 + 0x174) * 2 ^ *(iVar16 + 0x5c)) & 2;
    uVar8 = (*(param_2 + 0x851) << 3 ^ *(iVar16 + 0x5c)) & 8 ^ *(iVar16 + 0x5c);
    *(iVar16 + 0x5c) = uVar8;
    *(iVar16 + 0x5c) = (*(param_2 + 0x852) << 4 ^ uVar8) & 0x10 ^ uVar8;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x854) << 0x12 ^ *(iVar16 + 0x40)) & 0x40000;
    *(iVar16 + 0x5c) = *(iVar16 + 0x5c) ^ (*(param_2 + 0x853) << 6 ^ *(iVar16 + 0x5c)) & 0x40;
    uVar8 = (*(param_2 + 0x856) << 7 ^ *(iVar16 + 0x5c)) & 0x80 ^ *(iVar16 + 0x5c);
    *(iVar16 + 0x5c) = uVar8;
    uVar8 = (*(param_2 + 0x857) << 8 ^ uVar8) & 0x100 ^ uVar8;
    *(iVar16 + 0x5c) = uVar8;
    uVar8 = (*(param_2 + 0x858) << 9 ^ uVar8) & 0x200 ^ uVar8;
    *(iVar16 + 0x5c) = uVar8;
    uVar8 = (*(param_2 + 0x859) << 10 ^ uVar8) & 0x400 ^ uVar8;
    *(iVar16 + 0x5c) = uVar8;
    *(iVar16 + 0x5c) = (*(param_2 + 0x85a) << 0xb ^ uVar8) & 0x800 ^ uVar8;
    *(iVar16 + 0x6c) = *(param_2 + 0xb28);
    *(iVar16 + 0x5c) = *(iVar16 + 0x5c) ^ (*(param_2 + 0x85c) << 0x13 ^ *(iVar16 + 0x5c)) & 0x80000;
    uVar8 = (*(param_2 + 0x85d) << 0x14 ^ *(iVar16 + 0x5c)) & 0x100000 ^ *(iVar16 + 0x5c);
    *(iVar16 + 0x5c) = uVar8;
    *(iVar16 + 0x5c) = (*(param_2 + 0x85e) << 0x15 ^ uVar8) & 0x200000 ^ uVar8;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x86f) << 7 ^ *(iVar16 + 0x40)) & 0x80;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x870) << 8 ^ *(iVar16 + 0x40)) & 0x100;
    *(iVar16 + 0x50) = *(param_2 + 0x874);
    *(iVar16 + 0x4e) = *(param_2 + 0x871);
    *(iVar16 + 0x66) = *(param_2 + 0x872);
    *(iVar16 + 0xf8) = *(param_2 + 0x8e3);
    *(iVar16 + 0x3c) = *(param_2 + 0x878);
    *(iVar16 + 0x3e) = *(param_2 + 0x87a);
    *(iVar16 + 0x58) = *(iVar16 + 0x58) ^ (*(param_2 + 0x85f) ^ *(iVar16 + 0x58)) & 1;
    uVar8 = (*(param_2 + 0x860) * 2 ^ *(iVar16 + 0x58)) & 2 ^ *(iVar16 + 0x58);
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x861) << 2 ^ uVar8) & 4 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x862) << 3 ^ uVar8) & 8 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x863) << 4 ^ uVar8) & 0x10 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x864) << 5 ^ uVar8) & 0x20 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x8e8) << 0x10 ^ uVar8) & 0x10000 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x865) << 6 ^ uVar8) & 0x40 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x8e2) << 0xf ^ uVar8) & 0x8000 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x8ea) << 0x13 ^ uVar8) & 0x80000 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x8fe) << 0x14 ^ uVar8) & 0x100000 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x866) << 7 ^ uVar8) & 0x80 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x867) << 8 ^ uVar8) & 0x100 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x868) << 9 ^ uVar8) & 0x200 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x869) << 10 ^ uVar8) & 0x400 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x86a) << 0xb ^ uVar8) & 0x800 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    uVar8 = (*(param_2 + 0x86b) << 0xc ^ uVar8) & 0x1000 ^ uVar8;
    *(iVar16 + 0x58) = uVar8;
    *(iVar16 + 0x58) = (*(param_2 + 0x86c) << 0xd ^ uVar8) & 0x2000 ^ uVar8;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x86d) << 0x13 ^ *(iVar16 + 0x40)) & 0x80000;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x86e) << 0x14 ^ *(iVar16 + 0x40)) & 0x100000;
    *(iVar16 + 0x114) = *(param_2 + 0xad8);
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x8e6) << 0x16 ^ *(iVar16 + 0x40)) & 0x400000;
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x8e7) << 0x17 ^ *(iVar16 + 0x40)) & 0x1800000;
    *(iVar16 + 0x6b) = *(param_2 + 0x8a7);
    *(iVar16 + 0x71) = *(param_2 + 0x8ac);
    *(iVar16 + 0x72) = *(param_2 + 0x8ad);
    *(iVar16 + 0x73) = *(param_2 + 0x8ae);
    *(iVar16 + 0x74) = *(param_2 + 0x8b0);
    *(iVar16 + 0x75) = *(param_2 + 0x8b1);
    *(iVar16 + 0x77) = *(param_2 + 0x8b2);
    *(iVar16 + 0x78) = *(param_2 + 0x8b3);
    *(iVar16 + 0x79) = *(param_2 + 0x8b5);
    *(iVar16 + 0xed) = *(param_2 + 0x8a9);
    *(iVar16 + 0xec) = *(param_2 + 0x8a8);
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x8b4) << 0xe ^ *(iVar16 + 0x40)) & 0x4000;
    *(iVar16 + 0x84) = *(param_2 + 0x8c4);
    *(iVar16 + 0x88) = *(param_2 + 0x8c8);
    *(iVar16 + 0x8c) = *(param_2 + 0x8cc);
    *(iVar16 + 0x90) = *(param_2 + 0x8d0);
    puVar10 = iVar16 + 200;
    puVar11 = param_2 + 0x154;
    *(iVar16 + 0x5c) = *(iVar16 + 0x5c) ^ (*(param_2 + 0x85b) << 0x16 ^ *(iVar16 + 0x5c)) & 0xc00000;
    *(iVar16 + 0x111) = *(param_2 + 0x8e5);
    *(iVar16 + 0xe9) = *(param_2 + 0x8af);
    *(iVar16 + 0xea) = *(param_2 + 0x8db);
    *(iVar16 + 0xf2) = *(param_2 + 0x8dc);
    *(iVar16 + 0xf3) = *(param_2 + 0x8dd);
    *(iVar16 + 0x110) = *(param_2 + 0x8e4);
    *(iVar16 + 0x7c) = *(param_2 + 0x8e0);
    *(iVar16 + 0xee) = *(param_2 + 0xaa8);
    *(iVar16 + 0x13e) = *(param_2 + 0xb06);
    *(iVar16 + 0x150) = *(param_2 + 0xb29);
    *(iVar16 + 0x13c) = *(param_2 + 0xb04);
    *(iVar16 + 0x146) = *(param_2 + 0xb0e);
    *(iVar16 + 0x148) = *(param_2 + 0xb10);
    *(iVar16 + 0x14a) = *(param_2 + 0xb12);
    *(iVar16 + 0x14c) = *(param_2 + 0xb14);
    *(iVar16 + 0x14e) = *(param_2 + 0xb26);
    *(iVar16 + 0x40) = *(iVar16 + 0x40) ^ (*(param_2 + 0x8fc) << 0x15 ^ *(iVar16 + 0x40)) & 0x200000;
    uVar8 = (*(param_2 + 0x12a) << 0xf ^ *(iVar16 + 0x40)) & 0x8000 ^ *(iVar16 + 0x40);
    *(iVar16 + 0x40) = uVar8;
    puVar7 = iVar16 + 0xa0;
    *(iVar16 + 0x40) = (*(param_2 + 299) << 0x10 ^ uVar8) & 0x30000 ^ uVar8;
    param_2 = param_2 - puVar7;
    iVar16 = 8;
    do {
        *puVar7 = puVar7[param_2 + 300];
        puVar7 = puVar7 + 1;
        puVar10[-8] = puVar11[-8];
        uVar2 = *puVar11;
        puVar11 = puVar11 + 1;
        *puVar10 = uVar2;
        puVar10 = puVar10 + 1;
        iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
    *(iStack_90 + 0xfa) = *(iStack_6c + 0xab1);
    *(iStack_90 + 0x100) = *(iStack_6c + 0xab8);
    *(iStack_90 + 0x104) = *(iStack_6c + 0xabc);
    *(iStack_90 + 0x108) = *(iStack_6c + 0xac0);
    *(iStack_90 + 0x10c) = *(iStack_6c + 0xac4);
    *(iStack_90 + 0xfc) = *(iStack_6c + 0xac8);
    *(iStack_90 + 0x128) = *(iStack_6c + 0xaf0);
    *(iStack_90 + 300) = *(iStack_6c + 0xaf4);
    *(iStack_90 + 0x130) = *(iStack_6c + 0xaf8);
    *(iStack_90 + 0x134) = *(iStack_6c + 0xafc);
    *(iStack_90 + 0x138) = *(iStack_6c + 0xb00);
    *(iStack_90 + 0x140) = *(iStack_6c + 0xb07);
    *(iStack_90 + 0x141) = *(iStack_6c + 0xb08);
    *(iStack_90 + 0x142) = *(iStack_6c + 0xb09);
    *(iStack_90 + 0x143) = *(iStack_6c + 0xb0a);
    *(iStack_90 + 0x144) = *(iStack_6c + 0xb0c);
    *(iStack_90 + 0x145) = *(iStack_6c + 0xb0b);
    if (iStack_80 != 0) {
        puVar11 = iStack_80 + 0x24;
        *(iStack_80 + 0x1d) = *(iStack_6c + 0x19f);
        puVar10 = iStack_6c + 0x1a4;
        *(iStack_80 + 0x1e) = *(iStack_6c + 0x1a0);
        iVar16 = 3;
        do {
            uVar2 = *puVar10;
            puVar10 = puVar10 + 1;
            *puVar11 = uVar2;
            puVar11 = puVar11 + 1;
            iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        *(iStack_80 + 0x1c) = *(iStack_6c + 0x1c8);
        *(iStack_80 + 0x1f) = *(iStack_6c + 0x1c9);
        *(iStack_80 + 0x20) = *(iStack_6c + 0x1ca);
        *(iStack_80 + 0x21) = *(iStack_6c + 0x1cb);
        *(iStack_80 + 0x23) = *(iStack_6c + 0x8f8);
        *(iStack_80 + 0x30) = *(iStack_6c + 0x8f4);
    }
    if (iStack_7c != 0) {
        *(iStack_7c + 0x1e) = *(iStack_6c + 0x1cd);
        *(iStack_7c + 0x1d) = *(iStack_6c + 0x1ce);
        *(iStack_7c + 0x21) = *(iStack_6c + 0x1cf);
        *(iStack_7c + 0x1c) = *(iStack_6c + 0x21f);
        *(iStack_7c + 0x28) = *(iStack_6c + 0x228);
        *(iStack_7c + 0x48) = *(iStack_6c + 0x290);
        *(iStack_7c + 0x4c) = *(iStack_6c + 0x294);
        *(iStack_7c + 0x26) = *(iStack_6c + 0x22c);
        *(iStack_7c + 0x23) = *(iStack_6c + 0x220);
        *(iStack_7c + 0x40) = *(iStack_6c + 0x311);
        *(iStack_7c + 0x22) = *(iStack_6c + 0x278);
        *(iStack_7c + 0x20) = *(iStack_6c + 0x8ef);
        *(iStack_7c + 0x50) = *(iStack_6c + 0x8fa);
        *(iStack_7c + 0x52) = *(iStack_6c + 0x2a2);
        *(iStack_7c + 0x53) = *(iStack_6c + 0x8fd);
        *(iStack_7c + 0x30) = *(iStack_6c + 0x279);
        *(iStack_7c + 0x31) = *(iStack_6c + 0x27a);
        *(iStack_7c + 0x32) = *(iStack_6c + 0x27b);
        *(iStack_7c + 0x33) = *(iStack_6c + 0x27c);
        *(iStack_7c + 0x34) = *(iStack_6c + 0x27d);
        *(iStack_7c + 0x35) = *(iStack_6c + 0x27e);
        *(iStack_7c + 0x36) = *(iStack_6c + 0x27f);
        *(iStack_7c + 0x37) = *(iStack_6c + 0x280);
        *(iStack_7c + 0x38) = *(iStack_6c + 0x281);
        *(iStack_7c + 0x39) = *(iStack_6c + 0x282);
        *(iStack_7c + 0x3a) = *(iStack_6c + 0x283);
        *(iStack_7c + 0x3b) = *(iStack_6c + 0x284);
        *(iStack_7c + 0x3c) = *(iStack_6c + 0x285);
        *(iStack_7c + 0x3d) = *(iStack_6c + 0x286);
        *(iStack_7c + 0x3e) = *(iStack_6c + 0x287);
        *(iStack_7c + 0x3f) = *(iStack_6c + 0x288);
    }
    if (iStack_78 != 0) {
        *(iStack_78 + 0x34) = *(iStack_6c + 0x252);
        *(iStack_78 + 0x84) = *(iStack_6c + 0x2ae);
        *(iStack_78 + 0x1c) = *(iStack_6c + 0x22e);
        *(iStack_78 + 0x1d) = *(iStack_6c + 0x22f);
        *(iStack_78 + 0x20) = *(iStack_6c + 0x232);
        *(iStack_78 + 0x24) = *(iStack_6c + 0x236);
        *(iStack_78 + 0x25) = *(iStack_6c + 0x237);
        *(iStack_78 + 0x28) = *(iStack_6c + 0x23a);
        *(iStack_78 + 0x30) = *(iStack_6c + 0x242);
        *(iStack_78 + 0x3c) = *(iStack_6c + 0x974);
        *(iStack_78 + 0x3d) = *(iStack_6c + 0x978);
        *(iStack_78 + 0x40) = *(iStack_6c + 0x984);
        *(iStack_78 + 0x44) = *(iStack_6c + 0x994);
        *(iStack_78 + 0x45) = *(iStack_6c + 0x998);
        *(iStack_78 + 0x48) = *(iStack_6c + 0x9a4);
        *(iStack_78 + 0x50) = *(iStack_6c + 0x9c4);
        *(iStack_78 + 0x54) = *(iStack_6c + 0x9d4);
        *(iStack_78 + 0x55) = *(iStack_6c + 0x9d8);
        *(iStack_78 + 0x58) = *(iStack_6c + 0x9e4);
        *(iStack_78 + 0x5c) = *(iStack_6c + 0x9f4);
        *(iStack_78 + 0x5d) = *(iStack_6c + 0x9f8);
        *(iStack_78 + 0x60) = *(iStack_6c + 0xa04);
        *(iStack_78 + 0x68) = *(iStack_6c + 0xa24);
        *(iStack_78 + 0x6c) = *(iStack_6c + 0xa34);
        *(iStack_78 + 0x6d) = *(iStack_6c + 0xa38);
        *(iStack_78 + 0x70) = *(iStack_6c + 0xa44);
        *(iStack_78 + 0x74) = *(iStack_6c + 0xa54);
        *(iStack_78 + 0x75) = *(iStack_6c + 0xa58);
        *(iStack_78 + 0x78) = *(iStack_6c + 0xa64);
        *(iStack_78 + 0x80) = *(iStack_6c + 0xa84);
        *(iStack_78 + 0x38) = *(iStack_6c + 0x218);
        *(iStack_78 + 0x3a) = *(iStack_6c + 0x21a);
        if (iStack_7c != 0) {
            if (*(iStack_7c + 0x1c) == '\x04') {
                *(iStack_78 + 0x35) = 2;
                *(iStack_78 + 0x36) = 0x2112;
                *(iStack_7c + 0x1c) = 0;
            }
            else {
                if (*(iStack_7c + 0x1c) == '\0') {
                    *(iStack_78 + 0x35) = 0;
                }
                else {
                    *(iStack_78 + 0x35) = 3;
                }
                *(iStack_78 + 0x36) = 0x2212;
            }
        }
    }
    if (iStack_88 != 0) {
        *(iStack_88 + 0x38) = *(iStack_6c + 0x21c);
        *(iStack_88 + 0x34) = *(iStack_6c + 0x17c);
        *(iStack_88 + 0x3c) = *(iStack_6c + 0x4a);
    }
    if (iStack_8c != 0) {
        iVar16 = 0x10;
        fcn.000000e0(iStack_8c + 0x1c,0x10);
        *(iVar13 + 0x34) = *(iVar5 + 0x178);
        *(iVar13 + 0x2c) = *(iStack_70 + 0x24);
        *(iVar13 + 0x3c) = *(iVar13 + 0x3c) & 0xfffffffb;
        *(iVar13 + 0x43) = *(iVar5 + 0x8bf);
        *(iVar13 + 0x3c) = *(iVar13 + 0x3c) ^ (*(iVar5 + 0x8eb) ^ *(iVar13 + 0x3c)) & 1;
        *(iVar13 + 0x3c) = *(iVar13 + 0x3c) ^ (*(iVar5 + 0x8ec) * 2 ^ *(iVar13 + 0x3c)) & 2;
        *(iVar13 + 0x42) = *(iVar5 + 0x8f0);
        *(iVar13 + 0x41) = *(iVar5 + 0x8ed);
        iVar6 = 0;
        do {
            cVar3 = *(iVar6 + 0x180 + iVar5);
            if (cVar3 != '\0') {
                *(iVar6 + 0x1c + iVar13) = cVar3;
            }
            iVar6 = iVar6 + 1;
            iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        *(iVar13 + 0x60) = *(iVar5 + 0x8c0);
    }
    iVar13 = iStack_54;
    if (iStack_84 != 0) {
        *(iStack_74 + 0x1f) = *(iVar5 + 0x315);
        *(iStack_74 + 0x21) = *(iVar5 + 0x333);
        *(iStack_74 + 0x22) = *(iVar5 + 0x3b1);
        *(iStack_74 + 0x23) = *(iVar5 + 0x3b2);
        *(iStack_74 + 0x60) = *(iVar5 + 0x335);
        *(iStack_74 + 0x61) = *(iVar5 + 0x336);
        *(iStack_74 + 0x62) = *(iVar5 + 0x337);
        *(iStack_74 + 99) = *(iVar5 + 0x338);
        *(iStack_74 + 0xa5) = *(iVar5 + 0x359);
        *(iStack_74 + 0xa6) = *(iVar5 + 0x36a);
        *(iStack_74 + 0xa4) = *(iVar5 + 0x334);
        *(iStack_74 + 200) = *(iVar5 + 0x38b);
        *(iStack_74 + 0xc9) = *(iVar5 + 0x38c);
        *(iStack_74 + 0xca) = *(iVar5 + 0x38d);
        *(iStack_74 + 0xcb) = *(iVar5 + 0x3a8);
        *(iStack_74 + 0xcc) = *(iVar5 + 0x396);
        *(iStack_74 + 0xcd) = *(iVar5 + 0x397);
        *(iStack_74 + 0xfe) = *(iVar5 + 0x2ac);
        *(iStack_74 + 0xff) = *(iVar5 + 0xab0);
        *(iStack_84 + 0x20) = *(iStack_84 + 0x20) ^ (*(iVar5 + 0x21e) ^ *(iStack_84 + 0x20)) & 1;
        puVar7 = iStack_74 + 0x24;
        iVar16 = iVar5 - puVar7;
        iStack_88 = iVar5 - puVar7;
        iStack_70 = iStack_74 - puVar7;
        iStack_78 = iVar5 - puVar7;
        iStack_7c = iStack_74 - puVar7;
        iStack_80 = iVar5 - puVar7;
        iStack_94 = iStack_74 - puVar7;
        iStack_8c = iVar5 - puVar7;
        iStack_90 = iStack_74 - puVar7;
        iStack_50 = iVar5 - puVar7;
        iStack_4c = iStack_74 - puVar7;
        iStack_48 = iVar5 - puVar7;
        iStack_44 = iStack_74 - puVar7;
        iStack_40 = iVar5 - puVar7;
        iStack_84 = 8;
        iStack_3c = iStack_74 - puVar7;
        iStack_38 = iVar5 - puVar7;
        iStack_34 = iStack_74 - puVar7;
        iStack_30 = iVar5 - puVar7;
        iStack_2c = iVar5 - puVar7;
        iStack_28 = iVar5 - puVar7;
        iStack_24 = iVar5 - puVar7;
        iStack_20 = iVar5 - puVar7;
        iStack_1c = iStack_74 - puVar7;
        iStack_18 = iVar5 - puVar7;
        iStack_14 = iStack_74 - puVar7;
        iStack_10 = iVar5 - puVar7;
        iStack_c = iStack_74 - puVar7;
        iStack_8 = iVar5 - puVar7;
        iStack_4 = iStack_74 - puVar7;
        puVar17 = iStack_74 + 0x85;
        do {
            *puVar7 = puVar7[iVar16 + 0x317];
            puVar7[iStack_70 + 0x2c] = puVar7[iStack_88 + 799];
            puVar7[iStack_7c + 0x34] = puVar7[iStack_78 + 0x327];
            puVar7[iStack_94 + 0x40] = puVar7[iStack_80 + 0x35a];
            puVar7[iStack_90 + 0x48] = puVar7[iStack_8c + 0x362];
            puVar7[iStack_4c + 0x50] = puVar7[iStack_50 + 0x36b];
            puVar7[iStack_44 + 0x58] = puVar7[iStack_48 + 0x373];
            puVar7[iStack_3c + 100] = puVar7[iStack_40 + 0x339];
            puVar7[iStack_34 + 0x6c] = puVar7[iStack_38 + 0x341];
            puVar17[-1] = puVar7[iStack_30 + 0x349];
            *puVar17 = puVar7[iStack_2c + 0x351];
            puVar17[0x23] = puVar7[iStack_28 + 0x37b];
            puVar17[0x24] = puVar7[iStack_24 + 899];
            puVar7[iStack_1c + 0xde] = puVar7[iStack_20 + 0x38e];
            puVar7[iStack_14 + 0xe6] = puVar7[iStack_18 + 0x3a9];
            puVar7[iStack_c + 0xce] = puVar7[iStack_10 + 0x398];
            puVar7[iStack_4 + 0xd6] = puVar7[iStack_8 + 0x3a0];
            puVar7 = puVar7 + 1;
            iStack_84 = iStack_84 + -1;
            puVar17 = puVar17 + 4;
        } while (iStack_84 != 0);
        iVar16 = 4;
        puVar7 = iStack_74 + 0x3c;
        iVar5 = iStack_6c - puVar7;
        do {
            *puVar7 = puVar7[iVar5 + 0x32f];
            puVar7 = puVar7 + 1;
            iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        *(iStack_74 + 0x20) = *(iStack_6c + 0x316);
        *(iStack_74 + 0x1c) = *(iStack_6c + 0x312);
        *(iStack_74 + 0x1d) = *(iStack_6c + 0x313);
        *(iStack_74 + 0x1e) = *(iStack_6c + 0x314);
        iStack_84 = 0;
        iVar5 = iStack_6c;
    }
    if (iStack_68 != 0) {
        puVar7 = iStack_68 + 0x1e;
        *(iStack_68 + 0x1c) = *(iVar5 + 0x255);
        iVar6 = iVar5 - puVar7;
        iVar16 = 6;
        do {
            *puVar7 = puVar7[iVar6 + 0x266];
            puVar7 = puVar7 + 1;
            iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
        puVar7 = iStack_68 + 0x24;
        iVar18 = iVar5 - puVar7;
        iVar15 = iVar5 - puVar7;
        iVar6 = iStack_68 - puVar7;
        iVar16 = 8;
        do {
            *puVar7 = puVar7[iVar18 + 0x256];
            puVar7[iVar6 + 0x2c] = puVar7[iVar15 + 0x25e];
            puVar7 = puVar7 + 1;
            iVar16 = iVar16 + -1;
        } while (iVar16 != 0);
    }
    if (iStack_64 != 0) {
        *(iStack_64 + 0x1c) = *(iVar5 + 0x1fb);
        *(iStack_64 + 0x1d) = *(iVar5 + 0x1fc);
        *(iStack_64 + 0x1e) = *(iVar5 + 0x1fd);
    }
    if (iStack_60 != 0) {
        *(iStack_60 + 0x1c) = *(iVar5 + 0x4b);
    }
    if (iStack_5c != 0) {
        *(iStack_5c + 0x1c) = *(iStack_5c + 0x1c) ^ (*(iVar5 + 0x247) ^ *(iStack_5c + 0x1c)) & 1;
        *(iStack_5c + 0x1c) = *(iStack_5c + 0x1c) ^ (*(iVar5 + 0x248) << 0x16 ^ *(iStack_5c + 0x1c)) & 0x400000;
        *(iStack_5c + 0x21) = *(iVar5 + 0x249);
        *(iStack_5c + 0x30) = *(iVar5 + 0x24a);
        *(iStack_5c + 0x32) = *(iVar5 + 0x24c);
        *(iStack_5c + 0x34) = *(iVar5 + 0x24e);
        *(iStack_5c + 0x36) = *(iVar5 + 0x250);
        *(iStack_5c + 0x1c) = *(iStack_5c + 0x1c) ^ (*(iVar5 + 0x253) << 0x17 ^ *(iStack_5c + 0x1c)) & 0x800000;
    }
    if (iStack_58 != 0) {
        *(iStack_58 + 0x1c) = *(iStack_58 + 0x1c) ^ (*(iVar5 + 0x826) ^ *(iStack_58 + 0x1c)) & 1;
        uVar8 = (*(iVar5 + 0x827) * 2 ^ *(iStack_58 + 0x1c)) & 2 ^ *(iStack_58 + 0x1c);
        *(iStack_58 + 0x1c) = uVar8;
        uVar8 = (*(iVar5 + 0x828) << 2 ^ uVar8) & 4 ^ uVar8;
        *(iStack_58 + 0x1c) = uVar8;
        uVar8 = (*(iVar5 + 0x829) << 3 ^ uVar8) & 8 ^ uVar8;
        *(iStack_58 + 0x1c) = uVar8;
        uVar8 = (*(iVar5 + 0x82a) << 8 ^ uVar8) & 0x100 ^ uVar8;
        *(iStack_58 + 0x1c) = uVar8;
        uVar8 = (*(iVar5 + 0x82b) << 9 ^ uVar8) & 0x200 ^ uVar8;
        *(iStack_58 + 0x1c) = uVar8;
        uVar8 = (*(iVar5 + 0x82c) << 10 ^ uVar8) & 0x400 ^ uVar8;
        *(iStack_58 + 0x1c) = uVar8;
        *(iStack_58 + 0x1c) = (*(iVar5 + 0x82d) << 0xb ^ uVar8) & 0x800 ^ uVar8;
        *(iStack_58 + 0x20) = *(iStack_58 + 0x20) ^ (*(iVar5 + 0x8ba) ^ *(iStack_58 + 0x20)) & 0xf;
    }
    if (iStack_54 != 0) {
        *(iStack_54 + 0x1c) = *(iVar5 + 0x26c);
        *(iStack_54 + 0x20) = *(iVar5 + 0x270);
        cVar3 = fcn.00004b78();
        uVar8 = 0;
        if (cVar3 != '\0') {
            do {
                uVar12 = uVar8 + 1;
                *(iVar13 + 0x24 + uVar8) = *(iVar5 + 0x274 + uVar8);
                *(uVar8 + 0x28 + iVar13) = *(uVar8 + 0x271 + iVar5);
                *(uVar8 + 0x2c + iVar13) = *(uVar8 + 0x2a8 + iVar5);
                *(uVar8 + 0x30 + iVar13) = *(uVar8 + 0xaac + iVar5);
                uVar4 = fcn.00004b78();
                uVar8 = uVar12;
            } while (uVar12 < uVar4);
        }
    }
    return 0;
}


/* fcn.00001f48 @ 0x1f48 */

uint __fastcall fcn.00001f48(uint param_1,int param_2)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00000ee1(&var_8h);
    fcn.00000ee1(&var_4h);
    *(var_4h + 0x1c) = *(param_2 + 0x8d6);
    if (*(param_2 + 0x8d6) != '\0') {
        *(var_4h + 0x1d) = *(param_2 + 0x8d7);
        *(var_4h + 0x1e) = *(param_2 + 0x8d4);
        *(var_4h + 0x20) = *(param_2 + 0x8d8);
    }
    *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (*(param_2 + 400) ^ *(var_8h + 0x1c)) & 0xf;
    *(var_8h + 0x20) = *(param_2 + 0x4ad);
    return 0;
}


/* fcn.00000911 @ 0x911 */

int16_t * __fastcall fcn.00000911(uint param_1,int16_t *param_2)

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


/* fcn.00000e50 @ 0xe50 */

ushort __cdecl fcn.00000e50(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00005989();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.00005989 @ 0x5989 */

void fcn.00005989(void)

{
    int iVar1;
    
    iVar1 = fcn.000057dd();
    (**(iVar1 + 0x10))(0xffc5da98,0x200002);
    return;
}


/* fcn.000057dd @ 0x57dd */

int32_t fcn.000057dd(void)

{
    int32_t var_4h;
    
    fcn.00000b90(0,&var_4h);
    return var_4h;
}


/* fcn.000041df @ 0x41df */

//WARNING: Control flow encountered bad instruction data

uchar __fastcall fcn.000041df(int param_1,uint16_t param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    
    uVar2 = 4;
    if (param_1 == 0x906a0) {
        switch(param_2) {
        case 0x4601:
        case 0x4602:
        case 0x4603:
        case 0x4604:
        case 0x4605:
        case 0x4606:
        case 0x4607:
        case 0x4608:
        case 0x4609:
        case 0x460a:
        case 0x460b:
        case 0x460c:
        case 0x460d:
        case 0x460e:
        case 0x460f:
        case 0x4610:
        case 0x4611:
        case 0x4612:
        case 0x4613:
        case 0x4614:
        case 0x4615:
        case 0x4616:
        case 0x4617:
        case 0x4618:
        case 0x4619:
        case 0x461a:
        case 0x461b:
        case 0x461c:
        case 0x461d:
        case 0x461e:
        case 0x461f:
        case 0x4620:
        case 0x4621:
        case 0x4622:
        case 0x4623:
        case 0x4624:
        case 0x4625:
        case 0x4626:
        case 0x4627:
        case 0x4628:
        case 0x4629:
        case 0x462a:
        case 0x462b:
        case 0x462c:
        case 0x462d:
        case 0x462e:
        case 0x462f:
        case 0x4630:
        case 0x4631:
        case 0x4632:
        case 0x4633:
        case 0x4634:
        case 0x4635:
        case 0x4636:
        case 0x4637:
        case 0x4638:
        case 0x4639:
        case 0x463a:
        case 0x463b:
        case 0x463c:
        case 0x463d:
        case 0x463e:
        case 0x463f:
        case 0x4640:
        case 0x4641:
        case 0x4642:
        case 0x4643:
        case 0x4644:
        case 0x4645:
        case 0x4646:
        case 0x4647:
        case 0x4648:
        case 0x4649:
        case 0x464a:
        case 0x464b:
        case 0x464c:
        case 0x464d:
        case 0x464e:
        case 17999:
        case 18000:
        case 0x4651:
        case 0x4652:
        case 0x4653:
        case 0x4654:
        case 0x4655:
        case 0x4656:
        case 0x4657:
        case 0x4658:
        case 0x4659:
        case 0x465a:
        case 0x465b:
        case 0x465c:
        case 0x465d:
        case 0x465e:
        case 0x465f:
        case 0x4660:
        case 0x4661:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        }
    }
    else if (param_1 == 0xb06a0) {
        uVar1 = param_2;
        if ((0xa705 < uVar1) && ((uVar1 < 0xa70c || ((0xa714 < uVar1 && ((uVar1 < 0xa717 || (uVar1 - 0xa71b < 2))))))))
        {
            uVar2 = 0;
        }
    }
    else if ((param_1 == 0xb06e0) &&
            ((param_2 == 0x4614 ||
             ((0x4616 < param_2 && ((param_2 < 0x4619 || ((0x461a < param_2 && (param_2 < 0x461d)))))))))) {
        uVar2 = 2;
    }
    return uVar2;
}


/* fcn.000047f4 @ 0x47f4 */

int __cdecl fcn.000047f4(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    ulong uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t *arg_ch_00;
    uint32_t uStack_38;
    uint uStack_34;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    uint32_t uStack_20;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    uVar1 = rdmsr(0x1b);
    uStack_14 = uVar1 >> 0x20;
    iVar2 = fcn.00004ab6();
    if (iVar2 < 0) {
        return iVar2;
    }
    if (arg_8h == 1) {
        uStack_30 = arg_ch | 0x80000000;
        uVar3 = fcn.00000e92(0x48,0);
        uVar3 = uVar3 & 0xfffffffe;
        *(uVar3 + 0x5da4) = uStack_30;
        fcn.00004ab6();
        uStack_30 = *(uVar3 + 0x5da4);
        uStack_2c = *(uVar3 + 0x5da0);
        fcn.00005895();
        uStack_20 = *(uVar3 + 0x5da4);
        uStack_1c = *(uVar3 + 0x5da0);
        if ((uStack_30 != uStack_20) && (uStack_2c != uStack_1c)) {
            return -0x7ffffffe;
        }
        *arg_14h = uStack_30 & 0xff;
        arg_ch_00 = &uStack_2c;
    }
    else if (arg_8h == 2) {
        uStack_28 = *arg_10h;
        uStack_24 = arg_ch | 0x80000000;
        fcn.00000af6(&uStack_38,&uStack_28,8);
        uStack_18 = uStack_38;
        uStack_14 = uStack_34;
        wrmsr(0x150,CONCAT44(uStack_34,uStack_38));
        fcn.00004ab6();
        uVar1 = rdmsr(0x150);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.00000af6(&uStack_28,&uStack_38,8);
        fcn.00005895();
        uVar1 = rdmsr(0x150);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.00000af6(&uStack_10,&uStack_38,8);
        if ((uStack_24 != uStack_c) && (uStack_28 != uStack_10)) {
            return -0x7ffffffe;
        }
        *arg_14h = uStack_24 & 0xff;
        arg_ch_00 = &uStack_28;
    }
    else {
        if (arg_8h != 3) {
            return -0x7ffffffd;
        }
        uStack_30 = arg_ch | 0x80000000;
        uStack_2c = *arg_10h;
        wrmsr(0x608,uStack_2c);
        uStack_14 = 0;
        wrmsr(0x607,uStack_30);
        uStack_18 = uStack_30;
        fcn.00004ab6();
        uVar1 = rdmsr(0x607);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.00000af6(&uStack_30,&uStack_38,4);
        uVar1 = rdmsr(0x608);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.00000af6(&uStack_2c,&uStack_38,4);
        fcn.00005895();
        uVar1 = rdmsr(0x607);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.00000af6(&uStack_20,&uStack_38,4);
        uVar1 = rdmsr(0x608);
        uStack_34 = uVar1 >> 0x20;
        uStack_38 = uVar1;
        fcn.00000af6(&uStack_1c,&uStack_38,4);
        if ((uStack_30 != uStack_20) && (uStack_2c != uStack_1c)) {
            return -0x7ffffffe;
        }
        *arg_14h = uStack_30 & 0xff;
        arg_ch_00 = &uStack_2c;
    }
    fcn.00000af6(arg_10h,arg_ch_00,4);
    return iVar2;
}


/* fcn.00000a03 @ 0xa03 */

void fcn.00000a03(void)

{
    int32_t var_4h;
    
    fcn.00000c48(0,0);
    fcn.00000e50(2,0);
    fcn.000041df();
    return;
}


/* fcn.000009e2 @ 0x9e2 */

uint32_t __fastcall fcn.000009e2(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00000c48(0,0);
    return param_1 & 0xf;
}


/* fcn.000042d8 @ 0x42d8 */

uint __fastcall fcn.000042d8(int param_1)

{
    ulong uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    char cVar4;
    int16_t iVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    int16_t iVar9;
    uint32_t uVar10;
    uint uVar11;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    uVar11 = 0;
    iVar5 = fcn.00000e50(2,0);
    fcn.00000e50(0x10002,0);
    iVar6 = fcn.000009bf();
    uVar1 = rdmsr(0x614);
    uVar2 = rdmsr(0x606);
    rdmsr(0x649);
    rdmsr(0x64a);
    if ((uVar2 & 0xf) == 0) {
code_r0x00004379:
        uVar8 = 1;
    }
    else {
        uVar3 = (uVar2 & 0xf) - 1;
        iVar7 = 0;
        if ((uVar3 & 0x20) == 0) {
            iVar7 = 2;
        }
        uVar8 = iVar7 << (uVar3 & 0x1f);
        cVar4 = fcn.00000ae1();
        if ((cVar4 != '\0') && (uVar8 == '\0')) goto code_r0x00004379;
    }
    uVar10 = uVar1 & 0x7fff;
    uVar8 = uVar8 & 0xff;
    iVar9 = ((0U % uVar8 << 0x20 | uVar10) / uVar8) * 100;
    uVar10 = uVar10 % uVar8;
    if (uVar10 != 0) {
        iVar9 = iVar9 + (uVar10 * 100) / uVar8;
    }
    if (param_1 == 0) {
        if (iVar6 != 0x906a0) {
code_r0x0000466c:
            if (iVar6 != 0xb06a0) {
                return uVar11;
            }
            if (iVar5 == -0x58fa) {
                if (iVar9 == 0xaf0) {
                    return 0xc3;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xc4;
            }
            if (iVar5 == -0x58f9) {
                if (iVar9 == 0xaf0) {
                    return 0xc1;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xc2;
            }
            if (iVar5 == -0x58f8) {
                if (iVar9 == 0x5dc) {
                    return 0xc0;
                }
                if (iVar9 != 0xaf0) {
                    return uVar11;
                }
                return 0xca;
            }
            if (iVar5 == -0x58ea) {
                if (iVar9 == 0xaf0) {
                    return 0xc9;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xc5;
            }
            if (iVar5 == -0x58eb) {
                if (iVar9 == 0xaf0) {
                    return 0xcb;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xcc;
            }
            if (iVar5 == -0x58e5) {
                if (iVar9 != 0x5dc) {
                    return uVar11;
                }
                return 199;
            }
            if (iVar5 == -0x58e4) {
                if (iVar9 != 0x5dc) {
                    return uVar11;
                }
                return 0xc6;
            }
            if (iVar5 == -0x58f7) {
                if (iVar9 == 0xaf0) {
                    return 0xd3;
                }
                if (iVar9 != 0x1194) {
                    return uVar11;
                }
                return 0xd4;
            }
            if (iVar5 != -0x58f6) {
                if (iVar5 != -0x58f5) {
                    return uVar11;
                }
                if (iVar9 != 0x5dc) {
                    return uVar11;
                }
                return 0xd0;
            }
            if (iVar9 == 0xaf0) {
                return 0xd1;
            }
            if (iVar9 != 0x1194) {
                return uVar11;
            }
            return 0xd2;
        }
        if (iVar5 == 0x4641) {
            if (iVar9 == 0x1194) {
                uVar11 = 0x35;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x32;
            }
        }
        else if (iVar5 == 0x4601) {
            if (iVar9 == 0x5dc) {
                uVar11 = 0x30;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x3b;
            }
        }
        else if (iVar5 == 0x4621) {
            if (iVar9 == 0xaf0) {
                uVar11 = 0x31;
            }
            else {
                if (iVar9 != 0x1194) {
                    return 0;
                }
                uVar11 = 0x38;
            }
        }
        else if (iVar5 == 0x4629) {
            if (iVar9 == 0x1194) {
                uVar11 = 0x39;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x3a;
            }
        }
        else if (iVar5 == 0x4619) {
            if (iVar9 == 0x5dc) {
                uVar11 = 0x36;
            }
            else {
                if (iVar9 != 0xaf0) {
                    return 0;
                }
                uVar11 = 0x3d;
            }
        }
        else if (iVar5 == 0x4609) {
            if (iVar9 == 0x5dc) {
                uVar11 = 0x37;
            }
            else if (iVar9 == 0xaf0) {
                uVar11 = 0x3c;
            }
            else {
                if (iVar9 != 0x1194) {
                    return 0;
                }
                uVar11 = 0x3e;
            }
        }
        else if (iVar5 == 0x4659) {
            if (iVar9 != 0xaf0) {
                return 0;
            }
            uVar11 = 0x3f;
        }
        else if (iVar5 == 0x4645) {
            if (iVar9 != 0xaf0) {
                return 0;
            }
            uVar11 = 0x40;
        }
        else {
            if (iVar5 != 0x4649) {
                return 0;
            }
            if (iVar9 != 0xaf0) {
                if (iVar9 != 0x1194) {
                    return 0;
                }
                uVar11 = 0x42;
                goto code_r0x0000466c;
            }
            uVar11 = 0x41;
        }
    }
    else {
        if (param_1 == 1) {
            return 0;
        }
        if (param_1 != 2) {
            return 0;
        }
        if (iVar6 != 0x906a0) {
            return 0;
        }
        if (iVar5 == 0x461a) {
            if (iVar9 == 500) {
                uVar11 = 0x52;
            }
            else if (iVar9 == 700) {
                uVar11 = 0x53;
            }
            else if (iVar9 == 900) {
                uVar11 = 0x58;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 0x60;
            }
        }
        else if (iVar5 == 0x4602) {
            if (iVar9 == 900) {
                uVar11 = 0x57;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 99;
            }
        }
        else if (iVar5 == 0x4622) {
            if (iVar9 == 500) {
                uVar11 = 0x51;
            }
            else if (iVar9 == 700) {
                uVar11 = 0x50;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 0x62;
            }
        }
        else {
            if (iVar5 != 0x460a) {
                return 0;
            }
            if (iVar9 == 700) {
                uVar11 = 0x54;
            }
            else if (iVar9 == 900) {
                uVar11 = 0x59;
            }
            else {
                if (iVar9 != 0x4b0) {
                    return 0;
                }
                uVar11 = 0x61;
            }
        }
    }
    return uVar11;
}


/* fcn.00000ae1 @ 0xae1 */

void __fastcall fcn.00000ae1(uint param_1)

{
    fcn.00000e16(param_1,param_1,param_1);
    return;
}


/* fcn.00000e16 @ 0xe16 */

uchar fcn.00000e16(void)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00005989();
    return *(iVar1 + 0xfc);
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 22782 named .text
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


/* fcn.00004c12 @ 0x4c12 */

uint32_t __cdecl fcn.00004c12(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    uint32_t *puVar2;
    uint32_t uVar3;
    uint32_t in_ECX;
    int32_t *piVar4;
    int iVar5;
    uint32_t in_EDX;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t *puVar8;
    uint32_t *puVar9;
    bool bVar10;
    bool bVar11;
    uint8_t uStack_7f;
    uint32_t uStack_7c;
    uint32_t *puStack_78;
    int iStack_74;
    uint32_t *puStack_70;
    uint32_t uStack_6c;
    uint32_t uStack_68;
    uint32_t uStack_64;
    uint32_t uStack_60;
    uint32_t uStack_5c;
    uint32_t uStack_58;
    uint32_t uStack_54;
    uint32_t uStack_50;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    uint32_t auStack_30 [11];
    
    puStack_70 = NULL;
    if (in_EDX == 0) {
        if ((arg_8h & 0x2000U) != 0) goto code_r0x00004c50;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x00004c50:
        if (arg_ch == 0) {
            return 0;
        }
    }
    if ((arg_8h & 0x40U) == 0) {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 1;
    }
    else {
        if (1000000 < in_EDX) {
            return 0;
        }
        uStack_5c = 2;
    }
    if ((arg_8h & 0x100U) == 0) {
        uVar3 = fcn.00005905();
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_74 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar3 = fcn.000058e0();
        if (1000000 < uVar3) {
            return 0;
        }
        iStack_74 = 2;
        uStack_54 = 0xffff;
    }
    if ((arg_8h & 0x2000U) == 0) {
        if (in_EDX == 0) {
            return 0;
        }
    }
    else {
        in_ECX = in_ECX & -(in_EDX != 0);
    }
    uStack_58 = 0;
    uStack_38 = 0;
    uStack_64 = 0;
    if (in_ECX != 0) {
        uStack_38 = in_ECX;
        uStack_58 = (in_EDX - 1) * uStack_5c + in_ECX;
    }
    if (iStack_74 == 1) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar3) & uStack_54;
    uVar3 = 0;
    uStack_7c = in_ECX;
    if (uStack_50 != 0) {
code_r0x00004d3d:
        if ((uStack_7c == 0) || (uStack_7c < uStack_58)) {
            uStack_68 = 1;
            arg_8h = arg_8h & 0x2140;
            uStack_48 = 0;
            uStack_7f = 0;
            bVar11 = false;
            bVar10 = false;
            uStack_60 = 0;
            uStack_44 = 0;
            uStack_6c = arg_8h;
            if (uStack_50 == 10) goto code_r0x00005387;
            if (uStack_50 == 0xd) goto code_r0x00004fcc;
            puVar8 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00004dad:
code_r0x00004db1:
                arg_ch = puVar8 + iStack_74;
                if (iStack_74 == 1) {
                    uVar3 = 0;
                }
                else {
                    uVar3 = *(arg_ch + 1) << 8;
                }
                uStack_50 = (*arg_ch | uVar3) & uStack_54;
                if (uStack_50 < 0x2e) {
                    if (uStack_50 == 0x2d) {
                        arg_8h = arg_8h | 1;
                        goto code_r0x00004f39;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar8;
                        goto code_r0x00004f4c;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00004f39;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x00004f4c;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00004f39;
                    }
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x200;
                        if (puStack_70 == NULL) {
                            puVar9 = arg_10h + 4;
                            arg_10h = puVar9;
                        }
                        else {
                            puVar9 = puStack_70 + 1;
                            puStack_70 = puVar9;
                        }
                        uStack_48 = puVar9[-1];
                        puVar8 = arg_ch;
                        uStack_6c = arg_8h;
                    }
                    else {
                        if (puStack_70 == NULL) {
                            puVar9 = arg_10h + 4;
                            arg_10h = puVar9;
                        }
                        else {
                            puVar9 = puStack_70 + 1;
                            puStack_70 = puVar9;
                        }
                        uStack_68 = puVar9[-1];
                        puVar8 = arg_ch;
                    }
                    goto code_r0x00004dad;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00004f39;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x00004f4c;
                    if (0x39 < uStack_50) goto code_r0x00004e9d;
                }
                uVar3 = 0;
                uStack_60 = 0;
                if (0x2f < uStack_50) {
                    do {
                        if (0x39 < uStack_50) break;
                        arg_ch = arg_ch + iStack_74;
                        uVar3 = (uStack_50 - 0x30) + uVar3 * 10;
                        if (iStack_74 == 1) {
                            uVar7 = 0;
                        }
                        else {
                            uVar7 = *(arg_ch + 1) << 8;
                        }
                        uStack_50 = (*arg_ch | uVar7) & uStack_54;
                    } while (0x2f < uStack_50);
                    arg_8h = uStack_6c;
                    uStack_60 = uVar3;
                }
                puVar8 = arg_ch + -iStack_74;
                if ((arg_8h & 0x800U) == 0) {
                    arg_8h = arg_8h | 0x200;
                    uStack_48 = uStack_60;
                    uStack_6c = arg_8h;
                }
                else {
                    uStack_68 = uStack_60;
                }
                goto code_r0x00004db1;
            }
            goto code_r0x00004d96;
        }
        goto code_r0x000056fd;
    }
code_r0x00005701:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00004b94(1,0,uStack_5c);
        uVar3 = uStack_7c - uStack_38;
    }
    return uVar3 / uStack_5c;
code_r0x00004e9d:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x00004f4c;
    arg_8h = arg_8h | 0x10;
code_r0x00004f39:
    puVar8 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00004dad;
code_r0x00004f4c:
    uVar3 = arg_8h;
    puVar8 = arg_ch;
    if (uStack_50 < 0x68) {
        if (uStack_50 == 0x67) {
            if (puStack_70 == NULL) {
                piVar4 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                piVar4 = *puStack_70;
                puStack_70 = puStack_70 + 1;
            }
            if (piVar4 == NULL) {
                puStack_78 = 0xffc5dd50;
            }
            else {
                fcn.00005742(auStack_30,0x26,0,-0x3a22a4,*piVar4);
code_r0x0000507c:
                puStack_78 = auStack_30;
            }
code_r0x00005080:
            puVar8 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x00005387:
            puVar8 = arg_ch + iStack_74;
            puStack_78 = 0xffc5ddc0;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 != 0xd) {
                puVar8 = arg_ch;
            }
        }
        else {
            if (uStack_50 != 0xd) {
                if (uStack_50 == 0x53) goto code_r0x0000511c;
                if (uStack_50 == 0x58) goto code_r0x000051f7;
                if (uStack_50 == 0x61) goto code_r0x00005126;
                if (uStack_50 == 99) {
                    if (puStack_70 == NULL) {
                        uVar1 = *arg_10h;
                        arg_10h = arg_10h + 4;
                    }
                    else {
                        uVar1 = *puStack_70;
                        puStack_70 = puStack_70 + 1;
                    }
                    uStack_40 = uVar1;
                    puStack_78 = &uStack_40;
                    goto code_r0x00004d9a;
                }
                if (uStack_50 != 100) goto code_r0x00004d96;
                goto code_r0x0000520d;
            }
code_r0x00004fcc:
            puVar8 = arg_ch + iStack_74;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 == 10) {
                puStack_78 = 0xffc5ddc0;
                arg_ch = puVar8;
                goto code_r0x00005080;
            }
            puStack_78 = 0xffc5ddc4;
            puVar8 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x000051f7:
            arg_8h = arg_8h | 0x20;
code_r0x000051fa:
            uVar3 = arg_8h | 0x80;
        }
        else {
            if (uStack_50 == 0x72) {
                if (puStack_70 == NULL) {
                    uVar3 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar3 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                puStack_78 = auStack_30;
                if (uVar3 < 0) {
                    if ((uVar3 & 0x7fffffff) - 1 < 0x21) {
                        puStack_78 = (uVar3 & 0x7fffffff) * 0x15 + -0x3a21b5;
                        goto code_r0x000051c8;
                    }
                }
                else if (uVar3 < 6) {
                    puStack_78 = uVar3 * 0x19 + -0x3a2238;
code_r0x000051c8:
                    if (puStack_78 != auStack_30) goto code_r0x000053c4;
                }
                fcn.00005742(auStack_30,0x26,0,-0x3a2248,uVar3);
                goto code_r0x000053c4;
            }
            if (uStack_50 == 0x73) {
code_r0x0000511c:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x00005126:
                if (puStack_70 == NULL) {
                    puStack_78 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    puStack_78 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                if (puStack_78 == NULL) {
                    arg_8h = arg_8h & 0xfffffbff;
                    puStack_78 = 0xffc5dd40;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x000053c4;
            }
            if (uStack_50 == 0x74) {
                if (puStack_70 == NULL) {
                    uVar3 = *arg_10h;
                    arg_10h = arg_10h + 4;
                }
                else {
                    uVar3 = *puStack_70;
                    puStack_70 = puStack_70 + 1;
                }
                if (uVar3 != 0) {
                    fcn.00005742(auStack_30,0x26,0,-0x3a2264,*(uVar3 + 2));
                    goto code_r0x0000507c;
                }
                puStack_78 = 0xffc5dd90;
                goto code_r0x00005080;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x00004d96:
                    puStack_78 = &uStack_50;
code_r0x00004d9a:
                    arg_8h = arg_8h | 0x400;
                    puVar8 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x000053c4;
                }
                goto code_r0x000051fa;
            }
        }
        if (-1 < uVar3) {
            uVar3 = uVar3 & 0xfffffffd | 0x4000;
        }
code_r0x0000520d:
        if ((uVar3 & 0x10) == 0) {
            if (puStack_70 == NULL) {
                uVar7 = *arg_10h;
                arg_10h = arg_10h + 4;
            }
            else {
                uVar7 = *puStack_70;
                puStack_70 = puStack_70 + 1;
            }
            uVar6 = uVar7 >> 0x1f;
        }
        else if (puStack_70 == NULL) {
            uVar7 = *arg_10h;
            uVar6 = *(arg_10h + 4);
            arg_10h = arg_10h + 8;
        }
        else {
            uVar7 = *puStack_70;
            uVar6 = puStack_70[1];
            puStack_70 = puStack_70 + 2;
        }
        uStack_7f = (uVar3 & 4) << 3;
        if ((uVar3 & 2) != 0) {
            uStack_7f = 0x2b;
        }
        bVar11 = (uVar3 & 8) != 0;
        if (uVar3 < '\0') {
            bVar11 = false;
            if ((((uVar3 & 0x10) == 0) && (uVar6 < 1)) && (uVar6 < 0)) {
code_r0x000052da:
                uVar6 = 0;
            }
        }
        else {
            if ((uVar3 & 8) != 0) {
                uVar3 = uVar3 & 0xffffffdf;
                uStack_68 = 1;
            }
            if (((uVar6 < 1) && (uVar6 < 0)) && ((uVar3 & 0x4000) == 0)) {
                uStack_7f = 0x2d;
                bVar10 = uVar7 != 0;
                uVar7 = -uVar7;
                uVar6 = -(uVar6 + bVar10);
            }
            else if ((uVar3 & 0x4010) == 0x4000) goto code_r0x000052da;
        }
        iVar5 = fcn.00004bc8(uVar7,uVar6);
        uStack_60 = iVar5 - auStack_30;
        if (uVar7 == 0 && uVar6 == 0) {
            uStack_60 = uStack_60 & -(uStack_68 != 0);
        }
        puStack_78 = auStack_30 + uStack_60;
        uStack_44 = uStack_60 % 3;
        if (uStack_44 != 0) {
            uStack_44 = 3 - uStack_44;
        }
        if ((bVar11) && (uStack_60 != 0)) {
            uStack_60 = uStack_60 + (uStack_60 - 1) / 3;
        }
        if (uStack_7f != 0) {
            uStack_60 = uStack_60 + 1;
            uStack_68 = uStack_68 + 1;
        }
        arg_8h = uVar3 | 0x1000;
        bVar10 = true;
        uStack_6c = arg_8h;
        if ((uVar3 & 0xa21) == 0x220) {
            uStack_68 = uStack_48;
        }
    }
code_r0x000053c4:
    arg_ch = puVar8;
    uVar3 = arg_8h & 0x400;
    uStack_4c = uVar3;
    uStack_4c = (uVar3 != 0) + 1;
    uStack_3c = (-(uVar3 != 0) & 0xff00) + 0xff;
    if ((arg_8h & 0x1000U) == 0) {
        uStack_60 = 0;
        puVar9 = puStack_78;
        while ((((*puVar9 != '\0' || ((uVar3 != 0 && (*(puVar9 + 1) != '\0')))) &&
                ((uStack_60 < uStack_68 || ((arg_8h & 0x800U) == 0)))) &&
               ((uStack_3c & CONCAT11(*(puVar9 + 1),*puVar9)) != 0))) {
            uStack_60 = uStack_60 + 1;
            puVar9 = puVar9 + uStack_4c;
        }
    }
    else {
        uStack_4c = -uStack_4c;
    }
    if (uStack_68 < uStack_60) {
        uStack_68 = uStack_60;
    }
    uStack_34 = arg_8h & 0x201U;
    if ((arg_8h & 0x201U) == 0x200) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00004b94(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar10) {
        if (((uStack_7f != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_7c != 0)) {
            uStack_7c = fcn.00004b94(1,uStack_7f,uStack_5c);
        }
        iVar5 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar5 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_7c == 0)) goto code_r0x0000559b;
        uVar3 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00004b94(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7f == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_7c == 0))
        goto code_r0x0000559b;
        uVar3 = uStack_7f;
        iVar5 = 1;
    }
    uStack_7c = fcn.00004b94(iVar5,uVar3,uStack_5c);
code_r0x0000559b:
    uVar3 = arg_8h & 0x2000;
    if ((uStack_7f != 0) < uStack_60) {
        uVar7 = uStack_4c;
        puVar9 = puStack_78;
        puStack_78 = uStack_7f != 0;
        do {
            if ((*puVar9 == '\0') && ((uVar7 < 2 || (*(puVar9 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar3 == 0) && (uStack_7c != 0)) {
                uStack_7c = fcn.00004b94(1,CONCAT11(*(puVar9 + 1),*puVar9) & uStack_3c,uStack_5c);
            }
            uVar6 = uStack_4c;
            puVar9 = puVar9 + uVar7;
            puVar2 = puStack_78 + 1;
            if (bVar11) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x0000567c;
                puStack_78 = puStack_78 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_78) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar7 = uStack_4c;
                if ((uVar3 == 0) && (uStack_7c != 0)) {
                    uStack_7c = fcn.00004b94(1,0x2c,uStack_5c);
                    uVar7 = uVar6;
                    puVar2 = puStack_78;
                    goto code_r0x0000567c;
                }
            }
            else {
code_r0x0000567c:
                puStack_78 = puVar2;
            }
        } while (puStack_78 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar3 == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00004b94(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    arg_ch = arg_ch + iStack_74;
    if (iStack_74 == 1) {
        uVar3 = 0;
    }
    else {
        uVar3 = *(arg_ch + 1) << 8;
    }
    uStack_50 = (*arg_ch | uVar3) & uStack_54;
    if (uStack_50 == 0) goto code_r0x000056fd;
    goto code_r0x00004d3d;
code_r0x000056fd:
    uVar3 = uStack_64;
    goto code_r0x00005701;
}


/* fcn.00003d74 @ 0x3d74 */

uint __cdecl fcn.00003d74(uint32_t arg_8h)

{
    char cVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint noname_0;
    int32_t in_EDX;
    int iStack_50;
    
    if (arg_8h != 0) {
        cVar1 = fcn.00003e13();
        if (cVar1 == '\0') {
            return 0x80000015;
        }
        fcn.00003f7b(extraout_ECX);
        fcn.00003fb4(&stack0xffffff50,extraout_ECX_00);
        if (iStack_50 == 0) {
            return 0x80000007;
        }
        fcn.00003ebe(noname_0,noname_0,arg_8h,in_EDX);
    }
    return 0;
}


/* fcn.00000d74 @ 0xd74 */

void __cdecl fcn.00000d74(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t arg_8h_00;
    uint32_t var_104h;
    
    fcn.00004c12(0,arg_8h,&arg_ch);
    arg_8h_00 = 0;
    while (var_104h != '\0') {
        var_104h._0_1_ = *(&var_104h + arg_8h_00 + 1);
        arg_8h_00 = arg_8h_00 + 1;
    }
    fcn.00003d74(arg_8h_00);
    return;
}


/* fcn.00000a6f @ 0xa6f */

uint __fastcall fcn.00000a6f(uchar *param_1,uchar *param_2)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    uint32_t uVar3;
    uint uVar4;
    
    fcn.00000a03();
    fcn.000009e2();
    iVar2 = fcn.000042d8(extraout_ECX);
    uVar4 = 0;
    uVar3 = 0;
    while (iVar2 != *(uVar3 * 8 + -0x3a2448)) {
        uVar3 = uVar3 + 1;
        if (0x30 < uVar3) {
            cVar1 = fcn.00000ae1();
            if (cVar1 == '\0') {
                uVar4 = 0x80000003;
            }
            else {
                *param_1 = 1;
                *param_2 = 1;
            }
            return uVar4;
        }
    }
    if (param_1 != NULL) {
        *param_1 = *(uVar3 * 8 + -0x3a2444);
    }
    if (param_2 == NULL) {
        return 0;
    }
    *param_2 = *(uVar3 * 8 + -0x3a2443);
    return 0;
}


/* fcn.00000c84 @ 0xc84 */

//WARNING: Removing unreachable block (ram,0x00000cb5)
//WARNING: Removing unreachable block (ram,0x00000ca6)
//WARNING: Removing unreachable block (ram,0x00000cae)
//WARNING: Removing unreachable block (ram,0x00000cc4)

uint __cdecl fcn.00000c84(uint noname_0,uint noname_1,int32_t arg_10h)

{
    int iVar1;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    if (arg_10h != 0) {
        *arg_10h = *(iVar1 + 0xc);
    }
    return 7;
}


/* fcn.00005968 @ 0x5968 */

ulong fcn.00005968(void)

{
    uint64_t uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    
    uVar1 = rdmsr(0xcf);
    uVar5 = uVar1 >> 0x20;
    uVar3 = uVar1;
    if ((uVar1 & 4) != 0) {
        uVar2 = rdmsr(0x2d9);
        uVar5 = uVar2 >> 0x20;
        uVar4 = uVar2 | uVar5;
        uVar3 = 0;
        if (uVar4 != 0) {
            uVar3 = CONCAT31(uVar4 >> 8,1);
            goto code_r0x00005986;
        }
    }
    uVar3 = uVar3 & 0xffffff00;
code_r0x00005986:
    return CONCAT44(uVar5,uVar3);
}


/* fcn.000009bf @ 0x9bf */

uint32_t __fastcall fcn.000009bf(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00000c48(0,0);
    return param_1 & 0xfff0ff0;
}


/* fcn.00000a3d @ 0xa3d */

uint32_t fcn.00000a3d(void)

{
    uint32_t uVar1;
    int32_t var_8h;
    uint32_t var_4h;
    
    uVar1 = fcn.000047f4(1,0x1c,&var_8h,&var_4h);
    if ((uVar1 == 0) && (var_4h == 0)) {
        uVar1 = var_8h >> 1 & 1;
    }
    else {
        uVar1 = uVar1 & 0xffffff00;
    }
    return uVar1;
}


/* fcn.000057bd @ 0x57bd */

uint32_t fcn.000057bd(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00005770();
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


/* fcn.00005770 @ 0x5770 */

char fcn.00005770(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffc5db20 == -1) {
        uVar1 = fcn.00005761();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffc5db20 = cVar2;
    }
    return *0xffc5db20;
}


/* fcn.000057ae @ 0x57ae */

bool fcn.000057ae(void)

{
    char cVar1;
    
    cVar1 = fcn.00005770();
    return cVar1 == '\x04';
}


/* fcn.000017ea @ 0x17ea */

void __fastcall fcn.000017ea(uint param_1,int param_2)

{
    uint8_t uVar1;
    int32_t arg_ch;
    int iVar2;
    uint32_t uVar3;
    int32_t var_4h;
    
    iVar2 = fcn.00000ee1(&var_4h);
    if (-1 < iVar2) {
        *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(param_2 + 0x17f) ^ *(var_4h + 0x1c)) & 1;
        uVar3 = (*(param_2 + 0x743) * 2 ^ *(var_4h + 0x1c)) & 2 ^ *(var_4h + 0x1c);
        *(var_4h + 0x1c) = uVar3;
        uVar3 = (*(param_2 + 0x968) << 2 ^ uVar3) & 4 ^ uVar3;
        *(var_4h + 0x1c) = uVar3;
        uVar3 = (*(param_2 + 0x96a) << 3 ^ uVar3) & 8 ^ uVar3;
        *(var_4h + 0x1c) = uVar3;
        *(var_4h + 0x1c) = (*(param_2 + 0x748) << 4 ^ uVar3) & 0x10 ^ uVar3;
        *(var_4h + 0x20) = *(param_2 + 0x746);
        *(var_4h + 0x23) = *(param_2 + 0x744);
        uVar1 = *(param_2 + 0x744);
        if (uVar1 != 0) {
            arg_ch = *(param_2 + 0x7d4);
            fcn.000000e0(var_4h + 0x24U,0x80);
            fcn.00000af6(var_4h + 0x24U,arg_ch,uVar1);
        }
    }
    return;
}


/* fcn.000018b5 @ 0x18b5 */

void __fastcall fcn.000018b5(uint param_1,int param_2)

{
    uint uVar1;
    uint8_t uVar2;
    char cVar3;
    int iVar4;
    uint *puVar5;
    uint32_t uVar6;
    uchar *puVar7;
    int iStack_4;
    
    iVar4 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar4) {
        uVar2 = fcn.000057bd();
        puVar5 = param_2 + 0x78c;
        puVar7 = iStack_4 + 0x21;
        *(iStack_4 + 0x1c) = (1 << (uVar2 & 0x1f)) - 1U & *(param_2 + 0x7d8);
        for (uVar6 = 0; cVar3 = fcn.000057ae(), uVar6 < (cVar3 != '\0') * 8 + 10; uVar6 = uVar6 + 1) {
            puVar7[-1] = *(uVar6 + 0x749 + param_2);
            *puVar7 = *(uVar6 + 0x769 + param_2);
            uVar1 = *puVar5;
            puVar5 = puVar5 + 1;
            *(puVar7 + 3) = uVar1;
            puVar7 = puVar7 + 8;
        }
    }
    return;
}


/* fcn.00001935 @ 0x1935 */

void __fastcall fcn.00001935(uint param_1,int param_2)

{
    uint8_t *puVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    int iStack_4;
    
    iVar3 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar3) {
        uVar2 = fcn.000057bd();
        uVar7 = uVar2;
        if (uVar2 != 0) {
            puVar6 = param_2 + 0x545;
            puVar5 = iStack_4 + 0x1c;
            do {
                *puVar5 = *puVar5 ^ (puVar6[-0x1c] ^ *puVar5) & 1;
                uVar4 = (*puVar6 * 2 ^ *puVar5) & 0x7e ^ *puVar5;
                *puVar5 = uVar4;
                uVar4 = (puVar6[0x1c] << 7 ^ uVar4) & 0x80 ^ uVar4;
                *puVar5 = uVar4;
                uVar4 = (puVar6[0x38] << 8 ^ uVar4) & 0x3f00 ^ uVar4;
                *puVar5 = uVar4;
                uVar4 = (puVar6[0x54] << 0xe ^ uVar4) & 0x4000 ^ uVar4;
                *puVar5 = uVar4;
                uVar4 = (puVar6[0x70] << 0xf ^ uVar4) & 0x1f8000 ^ uVar4;
                *puVar5 = uVar4;
                uVar4 = (puVar6[0x8c] << 0x15 ^ uVar4) & 0x200000 ^ uVar4;
                *puVar5 = uVar4;
                *puVar5 = (puVar6[0xa8] << 0x16 ^ uVar4) & 0xfc00000 ^ uVar4;
                puVar5[1] = puVar5[1] ^ (puVar6[0xc4] ^ puVar5[1]) & 1;
                uVar4 = (puVar6[0xe0] * 2 ^ puVar5[1]) & 0x7e ^ puVar5[1];
                puVar5[1] = uVar4;
                uVar4 = (puVar6[0xfc] << 7 ^ uVar4) & 0x80 ^ uVar4;
                puVar5[1] = uVar4;
                uVar4 = (puVar6[0x118] << 8 ^ uVar4) & 0x3f00 ^ uVar4;
                puVar5[1] = uVar4;
                uVar4 = (puVar6[0x134] << 0xe ^ uVar4) & 0x4000 ^ uVar4;
                puVar5[1] = uVar4;
                puVar1 = puVar6 + 0x150;
                puVar6 = puVar6 + 1;
                puVar5[1] = (*puVar1 << 0xf ^ uVar4) & 0x1f8000 ^ uVar4;
                puVar5 = puVar5 + 2;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
    }
    return;
}


/* fcn.00001a8d @ 0x1a8d */

void __fastcall fcn.00001a8d(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint8_t *puVar4;
    int iStack_4;
    
    iVar1 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar1) {
        puVar4 = param_2 + 0x6b9;
        iVar1 = 8;
        puVar3 = iStack_4 + 0x20;
        do {
            puVar3[-1] = puVar3[-1] ^ (puVar4[-8] ^ puVar3[-1]) & 1;
            uVar2 = (*puVar4 * 2 ^ puVar3[-1]) & 0x7e ^ puVar3[-1];
            puVar3[-1] = uVar2;
            uVar2 = (puVar4[8] << 7 ^ uVar2) & 0x80 ^ uVar2;
            puVar3[-1] = uVar2;
            uVar2 = (puVar4[0x10] << 8 ^ uVar2) & 0x3f00 ^ uVar2;
            puVar3[-1] = uVar2;
            uVar2 = (puVar4[0x18] << 0xe ^ uVar2) & 0x4000 ^ uVar2;
            puVar3[-1] = uVar2;
            uVar2 = (puVar4[0x20] << 0xf ^ uVar2) & 0x1f8000 ^ uVar2;
            puVar3[-1] = uVar2;
            uVar2 = (puVar4[0x28] << 0x15 ^ uVar2) & 0x200000 ^ uVar2;
            puVar3[-1] = uVar2;
            puVar3[-1] = (puVar4[0x30] << 0x16 ^ uVar2) & 0xfc00000 ^ uVar2;
            *puVar3 = *puVar3 ^ (puVar4[0x38] ^ *puVar3) & 1;
            uVar2 = (puVar4[0x40] * 2 ^ *puVar3) & 0x7e ^ *puVar3;
            *puVar3 = uVar2;
            uVar2 = (puVar4[0x48] << 7 ^ uVar2) & 0x80 ^ uVar2;
            *puVar3 = uVar2;
            uVar2 = (puVar4[0x50] << 8 ^ uVar2) & 0x3f00 ^ uVar2;
            *puVar3 = uVar2;
            uVar2 = (puVar4[0x58] << 0xe ^ uVar2) & 0x4000 ^ uVar2;
            *puVar3 = uVar2;
            uVar2 = (puVar4[0x60] << 0xf ^ uVar2) & 0x1f8000 ^ uVar2;
            *puVar3 = uVar2;
            uVar2 = (puVar4[0x68] << 0x15 ^ uVar2) & 0x200000 ^ uVar2;
            *puVar3 = uVar2;
            *puVar3 = (puVar4[0x70] << 0x16 ^ uVar2) & 0xfc00000 ^ uVar2;
            puVar3[1] = puVar3[1] ^ (puVar4[0x78] ^ puVar3[1]) & 1;
            puVar3[1] = puVar3[1] ^ (puVar4[0x80] * 2 ^ puVar3[1]) & 0x7e;
            puVar4 = puVar4 + 1;
            iVar1 = iVar1 + -1;
            puVar3 = puVar3 + 3;
        } while (iVar1 != 0);
    }
    return;
}


/* fcn.00001c04 @ 0x1c04 */

void __fastcall fcn.00001c04(uint param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    int iStack_4;
    
    iVar1 = fcn.00000ee1(&iStack_4);
    if (-1 < iVar1) {
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x1f9) ^ *(iStack_4 + 0x1c)) & 1;
        uVar2 = (*(param_2 + 0x7f4) * 2 ^ *(iStack_4 + 0x1c)) & 2 ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar2;
        uVar2 = (*(param_2 + 0x7dc) << 2 ^ uVar2) & 4 ^ uVar2;
        *(iStack_4 + 0x1c) = uVar2;
        *(iStack_4 + 0x1c) = (*(param_2 + 0x7dd) << 3 ^ uVar2) & 8 ^ uVar2;
        *(iStack_4 + 0x20) = *(iStack_4 + 0x20) ^ (*(param_2 + 0x7de) ^ *(iStack_4 + 0x20)) & 1;
        uVar6 = 0;
        uVar2 = 0;
        do {
            *(iStack_4 + 0x24 + uVar2) = *(param_2 + 0x7df + uVar2);
            uVar2 = uVar2 + 1;
        } while (uVar2 < 2);
        puVar3 = iStack_4 + 0x28;
        puVar5 = param_2 + 0x198;
        iVar1 = 2;
        puVar4 = param_2 + 0x7ec;
        do {
            *puVar3 = *puVar3 ^ (puVar5[0x64a] ^ *puVar3) & 1;
            puVar3[1] = puVar4[-2];
            puVar3[2] = *puVar4;
            puVar3[3] = puVar4[3];
            *puVar3 = *puVar3 ^ (*puVar5 * 2 ^ *puVar3) & 6;
            puVar5 = puVar5 + 1;
            puVar3 = puVar3 + 4;
            iVar1 = iVar1 + -1;
            puVar4 = puVar4 + 1;
        } while (iVar1 != 0);
        uVar2 = 0;
        puVar3 = iStack_4 + 0x48;
        do {
            *puVar3 = *puVar3 ^ (*(param_2 + 0x800 + uVar2) ^ *puVar3) & 1;
            uVar2 = uVar2 + 1;
            puVar3 = puVar3 + 1;
        } while (uVar2 < 6);
        puVar3 = iStack_4 + 0x60;
        do {
            *puVar3 = *puVar3 ^ (*(param_2 + 0x806 + uVar6) ^ *puVar3) & 1;
            uVar6 = uVar6 + 1;
            puVar3 = puVar3 + 1;
        } while (uVar6 < 4);
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_2 + 0x80a) << 4 ^ *(iStack_4 + 0x1c)) & 0xf0;
        uVar2 = (*(param_2 + 0x80b) << 8 ^ *(iStack_4 + 0x1c)) & 0x700 ^ *(iStack_4 + 0x1c);
        *(iStack_4 + 0x1c) = uVar2;
        *(iStack_4 + 0x1c) = (*(param_2 + 0x80c) << 0xb ^ uVar2) & 0x800 ^ uVar2;
    }
    return;
}


/* fcn.00004b78 @ 0x4b78 */

uint fcn.00004b78(void)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.00000a03();
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.00005895 @ 0x5895 */

uint __fastcall fcn.00005895(uint param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    
    uVar2 = fcn.000057fa();
    uVar3 = fcn.00005949(param_1,0,uVar2);
    uVar1 = uVar3 >> 0x20;
    fcn.00005874((uVar1 % 1000000 << 0x20 | uVar3 & 0xffffffff) / 1000000,uVar1 / 1000000);
    return param_1;
}


/* fcn.000057fa @ 0x57fa */

ulong fcn.000057fa(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.00000c48(&var_8h,&var_ch);
    if ((var_4h == 0) || (var_8h == 0)) {
        uVar3 = 0;
        uVar2 = 0;
    }
    else {
        var_18h = 24000000;
        if (var_ch != 0) {
            var_18h = var_ch;
        }
        uVar1 = var_8h * var_18h + (var_4h >> 1);
        var_14h = uVar1 >> 0x20;
        uVar2 = var_14h / var_4h;
        uVar3 = (var_14h % var_4h << 0x20 | uVar1 & 0xffffffff) / var_4h;
    }
    return CONCAT44(uVar2,uVar3);
}


/* fcn.00005949 @ 0x5949 */

ulong fcn.00005949(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    return CONCAT44((param_3 * param_1 >> 0x20) + param_1 * param_4 + param_3 * param_2,param_3 * param_1);
}


/* fcn.00005874 @ 0x5874 */

void fcn.00005874(uint32_t param_1,int param_2)

{
    ulong uVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar1 = rdtsc();
    uVar4 = (uVar1 >> 0x20) + param_2 + CARRY4(uVar1,param_1);
    do {
        uVar2 = rdtsc();
        uVar3 = uVar2 >> 0x20;
        if (uVar4 < uVar3) {
            return;
        }
    } while ((uVar3 < uVar4) || (uVar2 <= uVar1 + param_1));
    return;
}


/* fcn.00003e13 @ 0x3e13 */

uint fcn.00003e13(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uchar uVar5;
    int iVar6;
    
    uVar5 = 0;
    iVar6 = -0x7ffffff9;
    if (*0xfe1000e8 != 0xff) {
        iVar6 = 0;
    }
    uVar1 = (*0xfe1000e8 == 0xff) - 1U & *0xfe1000e8;
    if ((-1 < iVar6) && ((uVar1 & 1) != 0)) {
        uVar1 = uVar1 >> 1;
        uVar2 = uVar1 & 3;
        uVar4 = CONCAT31(0xfe1000,uVar1) & 0xffffff03;
        if (((uVar2 != 0) && (uVar2 != 1)) && ((cVar3 = uVar4, cVar3 == '\x02' || (cVar3 == '\x03')))) {
            uVar5 = 1;
        }
        return CONCAT31(uVar4 >> 8,uVar5);
    }
    return 0xfe100000;
}


/* fcn.00003f7b @ 0x3f7b */

void __fastcall fcn.00003f7b(uint *param_1)

{
    if (param_1 == NULL) {
        param_1 = 0xffc5e208;
    }
    fcn.00000af6(param_1,-0x3a1e58,0x34);
    param_1[1] = 0xffffffff;
    *param_1 = 0x10900;
    param_1[4] = 0xffc5bea8;
    fcn.0000402b(param_1,0);
    return;
}


/* fcn.0000402b @ 0x402b */

void fcn.0000402b(int param_1,uint param_2)

{
    *(param_1 + 8) = 0xffc5bdc7;
    *(param_1 + 0xc) = 0xffc5bdf2;
    *(param_1 + 0x30) = param_2;
    *(param_1 + 0x14) = 0xffc5be4f;
    *(param_1 + 0x18) = 0xffc5be40;
    *(param_1 + 0x1c) = 0xffc5be5e;
    *(param_1 + 0x20) = 0xffc5be6c;
    *(param_1 + 0x24) = 0xffc5be7c;
    *(param_1 + 0x28) = 0xffc5be99;
    *(param_1 + 0x2c) = 0xffc5be8a;
    return;
}


/* fcn.00003fb4 @ 0x3fb4 */

int * __fastcall fcn.00003fb4(int param_1,int *param_2,uint param_3)

{
    if (param_2 == NULL) {
        param_2 = 0xffc5e148;
    }
    else {
        if (param_1 == 0) {
            param_1 = -0x3a1df8;
        }
        fcn.00000af6(param_2,-0x3a1e58,0x60);
        param_2[1] = param_2[1] & 0xfffffffe;
        param_2[7] = 0;
        *param_2 = param_1;
        if (*(param_1 + 8) != NULL) {
            (**(param_1 + 8))(param_2,param_3);
        }
    }
    return param_2;
}


/* fcn.00003ebe @ 0x3ebe */

void __cdecl fcn.00003ebe(uint noname_0,uint noname_1,int32_t arg_10h,int32_t arg_14h)

{
    char cVar1;
    int *in_ECX;
    int32_t iVar2;
    uint16_t uVar3;
    int32_t var_80h;
    int32_t var_50h;
    int32_t var_2ch;
    int32_t var_4h;
    
    var_4h = &var_2ch;
    if (in_ECX != 0xffc5e148) {
        var_80h = in_ECX[2] & 0xffff80U | 0x1000042;
        fcn.00003e53(arg_10h,&var_80h,&var_4h);
        iVar2 = var_4h;
        if (arg_10h == 0) {
            do {
                uVar3 = arg_10h;
                cVar1 = *((arg_10h & 0xffffU) + arg_14h);
                *(&var_50h + (arg_10h & 0xffffU)) = cVar1;
                if (cVar1 == '\0') break;
                arg_10h = arg_10h + 1;
                uVar3 = arg_10h;
            } while (uVar3 < 0x18);
            if (uVar3 < 0x18) {
                fcn.00000b1d();
            }
            iVar2 = var_4h;
            *var_4h = *0xffc5db80;
        }
        else {
            var_50h = arg_14h;
            *var_4h = *0xffc5db84;
            *(iVar2 + 2) = arg_10h;
        }
        *(iVar2 + 4) = *0xffc5dba8;
        (**(*in_ECX + 0x10))();
    }
    return;
}


/* fcn.00003e53 @ 0x3e53 */

void __thiscall fcn.00003e53(int param_1,int16_t param_2,uint32_t *param_3,int *param_4)

{
    uint uVar1;
    uint *puVar2;
    
    uVar1 = *0xffc5db68;
    puVar2 = *param_4;
    if (*(param_3 + 2) == -1) {
        param_3[1] = *(param_1 + 0xc);
        param_3[2] = *(param_1 + 0x10);
        param_3[3] = *(param_1 + 0x14);
        param_3[4] = *(param_1 + 0x18);
        *puVar2 = uVar1;
        puVar2 = puVar2 + 1;
    }
    if ((*param_3 & 0x80) != 0) {
        param_3[5] = *(param_1 + 0x1c);
        *(param_1 + 0x1c) = *(param_1 + 0x1c) + 1;
        *puVar2 = *0xffc5db6c;
        puVar2 = puVar2 + 1;
    }
    if (param_2 != 0) {
        *param_3 = *param_3 | 0x200;
        *(param_3 + 10) = param_2;
        *puVar2 = *0xffc5db7c;
        puVar2 = puVar2 + 1;
    }
    *param_4 = puVar2;
    return;
}


/* fcn.00000b1d @ 0xb1d */

uint __fastcall fcn.00000b1d(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000000e0(param_1,param_2);
    return uVar1;
}


/* fcn.00004ab6 @ 0x4ab6 */

uint __fastcall fcn.00004ab6(int param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint uVar4;
    uint16_t uVar5;
    uint uStack_1c;
    uint uStack_18;
    uchar auStack_14 [3];
    uint8_t uStack_11;
    uchar auStack_c [7];
    uint8_t uStack_5;
    
    uVar4 = 0;
    uVar5 = 0;
    uVar3 = 1;
    do {
        if (param_1 == 1) {
            uVar2 = fcn.00000e92(0x48,0);
            uVar3 = *((uVar2 & 0xfffffffe) + 0x5da4) >> 0x18;
code_r0x00004b3e:
            uVar3 = uVar3 >> 7;
        }
        else if (param_1 == 2) {
            uVar1 = rdmsr(0x150);
            uStack_18 = uVar1 >> 0x20;
            uStack_1c = uVar1;
            fcn.00000af6(auStack_c,&uStack_1c,8);
            uVar3 = uStack_5 >> 7;
        }
        else if (param_1 == 3) {
            uVar1 = rdmsr(0x607);
            uStack_18 = uVar1 >> 0x20;
            uStack_1c = uVar1;
            fcn.00000af6(auStack_14,&uStack_1c,8);
            uVar3 = uStack_11;
            goto code_r0x00004b3e;
        }
        fcn.00005895();
        uVar5 = uVar5 + 1;
        if (uVar3 != 1) {
            return 0;
        }
        if (999 < uVar5) {
            if (uVar5 == 1000) {
                rdmsr(0x1b);
                uVar4 = 0x80000012;
            }
            return uVar4;
        }
    } while( true );
}


/* fcn.00000e92 @ 0xe92 */

uint __cdecl fcn.00000e92(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00005989();
    return *(iVar1 + (arg_8h | (arg_ch & 1U) << 0x1c));
}


/* fcn.000058e0 @ 0x58e0 */

uint32_t __fastcall fcn.000058e0(int16_t *param_1)

{
    uint32_t uVar1;
    
    if ((param_1 != NULL) && (uVar1 = 0, *param_1 != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00005905 @ 0x5905 */

uint32_t __fastcall fcn.00005905(char *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (((param_1 != NULL) && (param_2 != 0)) && (uVar1 = 0, *param_1 != '\0')) {
        do {
            if (param_2 - 1 <= uVar1) {
                return param_2;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00005742 @ 0x5742 */

void __cdecl fcn.00005742(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00004c12(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.00004bc8 @ 0x4bc8 */

uchar * __cdecl fcn.00004bc8(int32_t arg_8h,int32_t arg_ch)

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
        *in_ECX = *(var_ch + -0x3a1ee8);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00004b94 @ 0x4b94 */

uchar * __cdecl fcn.00004b94(int arg_8h,int32_t arg_ch,int arg_10h)

{
    uchar *in_ECX;
    uchar *in_EDX;
    int iVar1;
    
    iVar1 = 0;
    if (0 < arg_8h) {
        do {
            if (in_EDX <= in_ECX) {
                return in_ECX;
            }
            *in_ECX = arg_ch;
            if (arg_10h != 1) {
                in_ECX[1] = arg_ch >> 8;
            }
            in_ECX = in_ECX + arg_10h;
            iVar1 = iVar1 + 1;
        } while (iVar1 < arg_8h);
    }
    return in_ECX;
}


/* fcn.00005761 @ 0x5761 */

void fcn.00005761(void)

{
    fcn.00000e50(0xf8002,0);
    return;
}


