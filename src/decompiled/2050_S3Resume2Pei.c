// decompiled by r2ghidra: 2050_S3Resume2Pei.te
// functions: 39

/* entry0 @ 0x249 */

uint entry0(uint param_1,int *param_2)

{
    (**(*param_2 + 0x18))(param_2,0x14cc);
    return 0;
}


/* fcn.00000a1c @ 0xa1c */

uint * __fastcall fcn.00000a1c(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00000b42 @ 0xb42 */

void __cdecl fcn.00000b42(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000b07 @ 0xb07 */

//WARNING: Removing unreachable block (ram,0x00000b19)

void fcn.00000b07(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.00000dea @ 0xdea */

uint32_t __fastcall fcn.00000dea(uint32_t param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = param_1 & 0xff;
    if (((uVar1 == 1) || (uVar1 == 2)) || (uVar1 == 3)) {
        var_4h = &var_ch;
        InterruptDescriptorTableRegister();
        uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),param_1,param_2,0,0x1490,0);
        uVar1 = uVar1 & -(uVar1 != 0xa0000002);
    }
    else {
        uVar1 = 0x80000003;
    }
    return uVar1;
}


/* fcn.000002e2 @ 0x2e2 */

void __fastcall fcn.000002e2(uint param_1)

{
    int32_t var_28h;
    uint32_t var_24h;
    int16_t var_20h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.00000b42(param_1,&var_4h);
    return;
}


/* fcn.00000b1d @ 0xb1d */

void __fastcall fcn.00000b1d(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00000299 @ 0x299 */

void fcn.00000299(void)

{
    uint noname_0;
    int32_t var_24h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0x18;
    fcn.00000a1c();
    fcn.00000b42(noname_0,&var_8h);
    return;
}


/* fcn.00000a6f @ 0xa6f */

void __cdecl
fcn.00000a6f(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h,int32_t arg_1ch,
            int32_t arg_20h,int32_t arg_24h)

{
    fcn.00000120(0x38,arg_8h,arg_ch,arg_10h,arg_14h,arg_18h,arg_1ch,arg_20h,arg_24h);
    return;
}


/* fcn.00000120 @ 0x120 */

uint64_t fcn.00000120(void)

{
    uint64_t uVar1;
    uint in_CR0;
    
    uVar1 = rdmsr(0xc0000080);
    wrmsr(0xc0000080,uVar1 | 0x100);
    return CONCAT44(uVar1 >> 0x20,in_CR0) | 0x80000000;
}


/* fcn.00000ad2 @ 0xad2 */

void __cdecl fcn.00000ad2(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int32_t var_1ch;
    int32_t var_ch;
    int32_t var_8h;
    
    var_ch = arg_14h + -0xc;
    var_8h = arg_8h;
    *(arg_14h + -8) = arg_ch;
    *(arg_14h + -4) = arg_10h;
    fcn.00000170(&var_1ch,0xffffffff);
    return;
}


/* fcn.00000170 @ 0x170 */

void fcn.00000170(int param_1)

{
    //WARNING: Could not recover jumptable at 0x000001a9. Too many branches
    //WARNING: Treating indirect jump as call
    (**(param_1 + 0x14))();
    return;
}


/* fcn.00000b6f @ 0xb6f */

int32_t fcn.00000b6f(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000b9a @ 0xb9a */

int16_t * __fastcall fcn.00000b9a(int16_t param_1,int16_t *param_2)

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


/* fcn.00000a96 @ 0xa96 */

//WARNING: Removing unreachable block (ram,0x00000ac1)

int __cdecl fcn.00000a96(int32_t arg_8h,uint noname_1,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint *in_EDX;
    uint uVar2;
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
    uVar2 = puVar1[2];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar3;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    return in_ECX;
}


/* fcn.00000100 @ 0x100 */

uint * fcn.00000100(uint *param_1,uint32_t param_2)

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


/* fcn.00000bbd @ 0xbbd */

int fcn.00000bbd(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00000b9a();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000a35();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000c93 @ 0xc93 */

//WARNING: Removing unreachable block (ram,0x00000d0f)

void __fastcall fcn.00000c93(int32_t param_1,int param_2)

{
    uint uVar1;
    int iVar2;
    int32_t var_8h;
    uint32_t var_4h;
    
    iVar2 = fcn.00000d2f();
    if (iVar2 == 1) {
        iVar2 = fcn.00000c20();
        uVar1 = *(iVar2 + 0x310);
        do {
        } while ((*(iVar2 + 0x300) & 0x1000) != 0);
        *(iVar2 + 0x310) = param_2 << 0x18;
        *(iVar2 + 0x300) = param_1;
        do {
        } while ((*(iVar2 + 0x300) & 0x1000) != 0);
        *(iVar2 + 0x310) = uVar1;
    }
    else {
        fcn.000011a5(param_1,param_2);
    }
    return;
}


/* fcn.00000dc1 @ 0xdc1 */

uint32_t fcn.00000dc1(void)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = fcn.00000c6a();
    iVar2 = fcn.00000d2f();
    uVar3 = uVar1;
    if ((iVar2 == 1) && (uVar3 = fcn.00000d55(), uVar3 < 0x100)) {
        uVar3 = uVar1 >> 0x18;
    }
    return uVar3;
}


/* fcn.000000a0 @ 0xa0 */

uint fcn.000000a0(uint param_1)

{
    //[00] -r-x section size 4490 named .text
    return param_1;
}


/* fcn.000009e6 @ 0x9e6 */

int32_t fcn.000009e6(void)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),0x28,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00000fea @ 0xfea */

uint32_t __fastcall fcn.00000fea(uchar *param_1,int param_2,uint *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint uStack_58;
    uint *puStack_54;
    uint uStack_50;
    uint uStack_4c;
    uchar auStack_48 [16];
    uchar auStack_38 [8];
    uint uStack_30;
    uint uStack_2c;
    uint32_t uStack_28;
    uint uStack_24;
    uchar auStack_20 [16];
    int iStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == 0) {
        if (param_3 != NULL) {
            return 0x80000002;
        }
    }
    else if (param_3 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.00000b42(param_1,&puStack_54);
    if (iVar1 < 0) {
        uVar2 = fcn.00000ea0(param_3);
        return uVar2;
    }
    fcn.000000c0(auStack_48,0x1450,0x10);
    uStack_4c = 0;
    uStack_50 = 0x30;
    fcn.000000c0(auStack_38,&uStack_50,8);
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_30 = 3;
    uStack_2c = 0x30;
    if (auStack_20 != param_1) {
        fcn.000000c0(auStack_20,param_1,0x10);
    }
    uStack_c = 0;
    uStack_4 = 0;
    if (param_3 == NULL) {
        uStack_8 = 0;
    }
    else {
        uStack_8 = *param_3;
    }
    uStack_58 = 0x48;
    iStack_10 = param_2;
    iVar1 = (**puStack_54)(puStack_54,auStack_48,&uStack_58);
    if (iVar1 == -0x7fffffed) {
        uStack_28 = fcn.00000ea0(param_3);
        if (param_3 == NULL) goto code_r0x000010f9;
        uStack_8 = *param_3;
    }
    if (param_3 != NULL) {
        *param_3 = uStack_8;
    }
code_r0x000010f9:
    if (uStack_28 == 0) {
        return 0;
    }
    return uStack_28 | 0x80000000;
}


/* fcn.0000110b @ 0x110b */

uint32_t __fastcall fcn.0000110b(uint param_1)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_38h;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00000b42(param_1,&var_8h);
    if (iVar1 < 0) {
        uVar2 = fcn.00000f6f();
    }
    else {
        fcn.000000c0(&var_38h,0x1450,0x10);
        var_ch = 0;
        var_10h = 0x10;
        fcn.000000c0(&var_28h,&var_10h,8);
        var_18h = -1;
        var_14h = -1;
        var_20h = 5;
        var_1ch = 0x10;
        var_4h = 0x28;
        iVar1 = (**var_8h)(var_8h,&var_38h,&var_4h);
        if (iVar1 == -0x7fffffed) {
            var_18h = fcn.00000f6f();
        }
        uVar2 = 0;
        if (var_18h != 0) {
            uVar2 = var_18h | 0x80000000;
        }
    }
    return uVar2;
}


/* fcn.0000025d @ 0x25d */

uint32_t __fastcall fcn.0000025d(int *param_1)

{
    uint32_t in_EAX;
    
    param_1 = *param_1;
    if (((((param_1 != NULL) && (*param_1 == 0x53434146)) &&
         ((param_1[3] != 0 || (in_EAX = 0, param_1[6] != 0 || param_1[7] != 0)))) &&
        (((in_EAX = param_1[6] | param_1[7], in_EAX != 0 && (param_1[8] == '\x02')) && ((*(param_1 + 5) & 2) != 0))))
       && ((*(param_1 + 9) & 1) != 0)) {
        return CONCAT31(in_EAX >> 8,1);
    }
    return in_EAX & 0xffffff00;
}


/* fcn.000004a5 @ 0x4a5 */

void __fastcall fcn.000004a5(uint32_t *param_1,uint8_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint noname_1;
    uint32_t *puVar3;
    uint32_t *puVar4;
    uint32_t *puVar5;
    bool bVar6;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    fcn.00000b6f();
    iVar1 = fcn.00000b9a();
    if (iVar1 == 0) {
        fcn.00000a96(0,noname_1,0);
        if (var_4h < 0x80000008) {
            uVar2 = CONCAT31(param_2,0x24);
        }
        else {
            fcn.00000a96(0,0x80000008,0);
            uVar2 = CONCAT11(param_2,var_4h);
        }
    }
    else {
        uVar2 = CONCAT11(param_2,*(iVar1 + 8));
    }
    if (0x30 < uVar2) {
        uVar2 = CONCAT31(uVar2 >> 8,0x30);
    }
    if (uVar2 >> 8 != '\0') {
        uVar2 = 0x20;
        fcn.00000100(param_1,0x2000);
    }
    if (uVar2 < 0x28) {
        uVar2 = (uVar2 & 0xff) - 0x1e;
        var_8h = 1;
        var_18h._0_1_ = uVar2;
        var_4h = ((uVar2 & 0x20) == 0) << (var_18h & 0x1f);
    }
    else {
        uVar2 = (uVar2 & 0xff) - 0x27;
        var_18h._0_1_ = uVar2;
        var_8h = ((uVar2 & 0x20) == 0) << (var_18h & 0x1f);
        var_4h = 0x200;
    }
    var_10h = 0;
    var_ch = 0;
    puVar3 = param_1 + 0x400;
    for (; var_8h != 0; var_8h = var_8h + -1) {
        param_1[1] = 0;
        puVar5 = puVar3 + 0x400;
        *param_1 = puVar3;
        *param_1 = *param_1 | 2;
        *param_1 = *param_1 | 1;
        param_1[1] = param_1[1];
        if (var_4h != 0) {
            var_18h = var_4h;
            puVar4 = puVar5;
            do {
                puVar3[1] = 0;
                puVar5 = puVar4 + 0x400;
                *puVar3 = puVar4;
                iVar1 = 0x200;
                *puVar3 = *puVar3 | 2;
                *puVar3 = *puVar3 | 1;
                puVar3[1] = puVar3[1];
                do {
                    *puVar4 = var_10h | 2;
                    *puVar4 = *puVar4 | 1;
                    *puVar4 = *puVar4 | 0x80;
                    bVar6 = 0xffdfffff < var_10h;
                    var_10h = var_10h + 0x200000;
                    puVar4[1] = var_ch;
                    puVar4 = puVar4 + 2;
                    var_ch = var_ch + bVar6;
                    iVar1 = iVar1 + -1;
                } while (iVar1 != 0);
                puVar3 = puVar3 + 2;
                var_18h = var_18h + -1;
                puVar4 = puVar5;
            } while (var_18h != 0);
        }
        param_1 = param_1 + 2;
        puVar3 = puVar5;
    }
    return;
}


/* fcn.00000655 @ 0x655 */

void __cdecl fcn.00000655(int32_t arg_8h,int32_t arg_ch)

{
    uint uVar1;
    uint32_t uVar2;
    ushort *arg_18h;
    uint noname_0;
    int iVar3;
    uint8_t uVar4;
    uint8_t uVar5;
    uint8_t in_AF;
    uint8_t uVar6;
    uint8_t uVar7;
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t uVar8;
    uint8_t in_NT;
    uint8_t in_AC;
    uint8_t in_VIF;
    uint8_t in_VIP;
    uint8_t in_ID;
    uint32_t uStack_1c;
    int iStack_18;
    uint *puStack_14;
    uchar auStack_10 [12];
    
    fcn.00000b6f();
    uVar2 = fcn.00000bbd();
    uVar4 = 0;
    uVar8 = 0;
    uVar7 = uVar2 < 0;
    uVar6 = uVar2 == 0;
    uVar5 = (POPCOUNT(uVar2 & 0xff) & 1U) == 0;
    if (!uVar6) {
        fcn.00000c93();
        fcn.00000dc1();
        fcn.00000c93();
        uStack_1c = fcn.00000b42(noname_0,&iStack_18);
        uVar7 = uStack_1c < 0;
        if (!uVar7) {
            puStack_14 = auStack_10;
            uStack_1c = 0;
            iVar3 = 0;
            do {
                uVar1 = InterruptDescriptorTableRegister();
                *puStack_14 = uVar1;
                uStack_1c = (**(iStack_18 + 4))(*(auStack_10._2_4_ + -4),iStack_18,iVar3);
                iVar3 = iVar3 + 1;
            } while (-1 < uStack_1c);
            puStack_14 = auStack_10;
            uStack_1c = 0;
            iVar3 = 0;
            do {
                uVar1 = InterruptDescriptorTableRegister();
                *puStack_14 = uVar1;
                uStack_1c = (**(iStack_18 + 8))(*(auStack_10._2_4_ + -4),iStack_18,iVar3);
                iVar3 = iVar3 + 1;
                uVar7 = uStack_1c < 0;
            } while (!uVar7);
        }
        uVar8 = 0;
        uVar6 = uStack_1c == 0;
        uVar5 = (POPCOUNT(uStack_1c & 0xff) & 1U) == 0;
        uVar4 = 0;
        uStack_1c = fcn.00000b1d();
        fcn.00000299();
    }
    puStack_14 = (in_NT & 1) * 0x4000 | (uVar8 & 1) * 0x800 | (in_IF & 1) * 0x200 | (in_TF & 1) * 0x100 |
                 (uVar7 & 1) * 0x80 | (uVar6 & 1) * 0x40 | (in_AF & 1) * 0x10 | (uVar5 & 1) * 4 | uVar4 & 1 |
                 (in_ID & 1) * 0x200000 | (in_VIP & 1) * 0x100000 | (in_VIF & 1) * 0x80000 | (in_AC & 1) * 0x40000;
    GlobalDescriptorTableRegister(*0x1550);
    fcn.000000a0(0x18);
    arg_18h = fcn.000009e6();
    if (arg_18h == NULL) {
        fcn.00000dea();
    }
    *arg_18h = 0x10;
    *(arg_18h + 5) = 0x518;
    *(arg_18h + 9) = &uStack_1c;
    puStack_14 = arg_18h + 0x11;
    *(arg_18h + 7) = 0;
    *(arg_18h + 0xb) = 0;
    uVar1 = InterruptDescriptorTableRegister();
    *puStack_14 = uVar1;
    fcn.00000dea();
    fcn.00000a6f(*arg_ch,*(arg_ch + 4),arg_8h,0,arg_18h,0,*(arg_8h + 0x20) + *(arg_8h + 0x18),0);
    fcn.00000b07();
    return;
}


/* fcn.000000c0 @ 0xc0 */

uint * fcn.000000c0(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
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


/* fcn.00000a35 @ 0xa35 */

uint32_t __fastcall fcn.00000a35(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000bec @ 0xbec */

uchar __fastcall fcn.00000bec(uint32_t param_1)

{
    uchar uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    fcn.00000a96(0,param_1,0);
    uVar2 = param_1 >> 8 & 0xf;
    if ((uVar2 == 4) || (uVar2 == 5)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00000d2f @ 0xd2f */

char __fastcall fcn.00000d2f(uint param_1)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.00000bec(param_1,param_1);
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.00000c20 @ 0xc20 */

//WARNING: Removing unreachable block (ram,0x00000c53)

uint32_t fcn.00000c20(void)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    cVar2 = fcn.00000bec();
    if (cVar2 == '\0') {
        uVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        uVar3 = uVar1 & 0xfffff000;
    }
    return uVar3;
}


/* fcn.000011a5 @ 0x11a5 */

ulong __cdecl fcn.000011a5(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    wrmsr(0x830,CONCAT44(arg_ch,arg_8h));
    return CONCAT44(arg_ch,arg_8h);
}


/* fcn.000011c6 @ 0x11c6 */

//WARNING: Removing unreachable block (ram,0x000011ed)
//WARNING: Removing unreachable block (ram,0x000011e5)
//WARNING: Removing unreachable block (ram,0x000011fc)

uint __cdecl fcn.000011c6(uint noname_0,int32_t arg_ch,uint noname_2,int32_t arg_14h)

{
    int iVar1;
    uint uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Extended_Topology_info(0xb);
    uVar2 = *(iVar1 + 8);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 4);
    }
    if (arg_14h != 0) {
        *arg_14h = uVar2;
    }
    return 0xb;
}


/* fcn.00000c6a @ 0xc6a */

//WARNING: Variable defined which should be unmapped: var_4h

uint __fastcall fcn.00000c6a(uint param_1)

{
    ulong uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_4h;
    
    iVar2 = fcn.00000d2f(param_1,param_1);
    if (iVar2 == 1) {
        iVar2 = fcn.00000c20();
        uVar3 = *(iVar2 + 0x20);
    }
    else {
        uVar1 = rdmsr(0x802);
        uVar3 = uVar1;
    }
    return uVar3;
}


/* fcn.00000d55 @ 0xd55 */

uint32_t fcn.00000d55(void)

{
    int iVar1;
    uint32_t uVar2;
    uint noname_1;
    uint noname_0;
    uint extraout_ECX;
    uint noname_1_00;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00000d2f();
    if (iVar1 == 1) {
        fcn.00000a96(0,noname_1,0);
        noname_1_00 = noname_0;
        if (10 < var_8h) {
            fcn.000011c6(noname_0,&var_4h,noname_0,&var_ch);
            noname_1_00 = extraout_ECX;
            if (var_4h != 0) {
                return var_ch;
            }
        }
        fcn.00000a96(&var_4h,noname_1_00,0);
        uVar2 = var_4h >> 0x18;
    }
    else {
        uVar2 = fcn.00000dc1();
    }
    return uVar2;
}


/* fcn.00000e47 @ 0xe47 */

uint fcn.00000e47(void)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    fcn.00000b6f();
    iVar3 = fcn.00000bbd();
    uVar4 = 0;
    iVar3 = *(*(iVar3 + 0x20) + 0x5a);
    uVar1 = *(iVar3 + 0x98);
    iVar3 = *(iVar3 + 0xa0);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.00000a35();
            if (cVar2 != '\0') {
                return *(uVar4 * 0x18 + 0x10 + iVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.00000a59 @ 0xa59 */

int __fastcall fcn.00000a59(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.000000c0(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000ea0 @ 0xea0 */

uint __fastcall fcn.00000ea0(uint param_1,int param_2,uint32_t *param_3)

{
    uint *puVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint *puVar9;
    uint *puStack_10;
    uint uStack_c;
    int iStack_6;
    
    uStack_c = param_1;
    iVar6 = fcn.00000b42(param_1,&puStack_10);
    if (-1 < iVar6) {
        iVar6 = 0;
        do {
            InterruptDescriptorTableRegister();
            iVar7 = (**puStack_10)(*(iStack_6 + -4),puStack_10,iVar6);
            iVar6 = iVar6 + 1;
        } while (-1 < iVar7);
    }
    iVar6 = fcn.00000e47();
    puVar1 = *(iVar6 + 8);
    for (puVar2 = *puVar1; puVar2 != puVar1; puVar2 = *puVar2) {
        puVar9 = puVar2 + -0xe;
        cVar5 = fcn.00000a35();
        if (cVar5 != '\0') goto code_r0x00000f16;
    }
    puVar9 = NULL;
code_r0x00000f16:
    if (puVar9 == NULL) {
        uVar8 = 0x8000000e;
    }
    else if ((param_2 == 0) && ((puVar9[10] & 1) == 0)) {
        uVar8 = 0x80000008;
    }
    else if ((param_3 == NULL) || (uVar3 = puVar9[8], uVar4 = *param_3, *param_3 = uVar3, uVar3 <= uVar4)) {
        if (puVar9[8] != 0) {
            fcn.00000a59(puVar9[8]);
        }
        uVar8 = 0;
    }
    else {
        uVar8 = 0x80000005;
    }
    return uVar8;
}


/* fcn.00000f6f @ 0xf6f */

uint __fastcall fcn.00000f6f(uint param_1)

{
    uint uVar1;
    uint *puVar2;
    int iVar3;
    int iVar4;
    uint *puVar5;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar3 = fcn.00000b42(param_1,&var_8h);
    if (-1 < iVar3) {
        var_4h = &var_10h;
        iVar3 = 0;
        do {
            uVar1 = InterruptDescriptorTableRegister();
            *var_4h = uVar1;
            iVar4 = (**var_8h)(*(stack0xffffffee + -4),var_8h,iVar3);
            iVar3 = iVar3 + 1;
        } while (-1 < iVar4);
    }
    iVar3 = fcn.00000e47();
    puVar2 = *(iVar3 + 8);
    for (puVar5 = *puVar2; puVar5 != puVar2; puVar5 = *puVar5) {
        if (((puVar5[-4] & 1) != 0) && (puVar5[-6] != 0)) {
            fcn.00000a59(puVar5[-6]);
        }
    }
    return 0;
}


