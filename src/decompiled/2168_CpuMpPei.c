// decompiled by r2ghidra: 2168_CpuMpPei.pe32
// functions: 132

/* fcn.000116b7 @ 0x116b7 */

void __fastcall fcn.000116b7(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0x10d16 */

void entry0(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),0x5cc4);
    return;
}


/* fcn.00015b5c @ 0x15b5c */

uint fcn.00015b5c(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00013c9b @ 0x13c9b */

uint __fastcall fcn.00013c9b(uint32_t param_1,uint *param_2,uint *param_3)

{
    int iVar1;
    int *piVar2;
    uint uVar3;
    uint32_t uVar4;
    int iStack_8;
    
    piVar2 = fcn.00012413();
    uVar4 = param_1 & 0xffffff;
    iVar1 = *piVar2;
    fcn.00013fd2();
    if (iStack_8 == piVar2[3]) {
        if (param_2 == NULL) {
            uVar3 = 0x80000002;
        }
        else if (uVar4 < piVar2[2]) {
            uVar3 = *(iVar1 + 4 + uVar4 * 0x14);
            param_2[1] = 0;
            param_2[2] = 0;
            *param_2 = uVar3;
            if (uVar4 == piVar2[3]) {
                param_2[2] = 1;
            }
            if (*(uVar4 * 0x90 + 0x10 + piVar2[0xcc]) != '\0') {
                param_2[2] = param_2[2] | 4;
            }
            if (*(uVar4 * 0x90 + 0x14 + piVar2[0xcc]) == 4) {
                param_2[2] = param_2[2] & 0xfffffffd;
            }
            else {
                param_2[2] = param_2[2] | 2;
            }
            fcn.00011d2b(param_2 + 4,param_2 + 5);
            if ((param_1 & 0x1000000) != 0) {
                fcn.00011f57(param_2 + 9,param_2 + 8,param_2 + 7,param_2 + 10,param_2 + 0xb);
            }
            if (param_3 != NULL) {
                *param_3 = *(iVar1 + 8 + uVar4 * 0x14);
            }
            uVar3 = 0;
        }
        else {
            uVar3 = 0x8000000e;
        }
    }
    else {
        uVar3 = 0x80000007;
    }
    return uVar3;
}


/* fcn.0001406d @ 0x1406d */

int __cdecl fcn.0001406d(uint32_t arg_8h,uint noname_1,int32_t arg_10h,int32_t arg_14h)

{
    uint32_t uVar1;
    int iVar2;
    bool bVar3;
    int iVar4;
    code *in_ECX;
    uint32_t uVar5;
    char in_DL;
    uint32_t uVar6;
    int iVar7;
    ulong uVar8;
    uint uVar9;
    int iStack_14;
    uint32_t uStack_10;
    
    iVar4 = fcn.00012413();
    if ((*(iVar4 + 8) == 1) && (arg_8h != '\0')) {
code_r0x00014096:
        iVar4 = -0x7fffffed;
    }
    else {
        if (in_ECX == NULL) {
            return -0x7ffffffe;
        }
        fcn.00013fd2();
        if (uStack_10 != *(iVar4 + 0xc)) {
            return -0x7ffffff9;
        }
        uVar1 = *(iVar4 + 8);
        uVar6 = 0;
        uVar5 = 0;
        bVar3 = false;
        if (uVar1 == 0) {
code_r0x00014118:
            if (arg_8h != '\0') goto code_r0x00014096;
        }
        else {
            iStack_14 = 0;
            do {
                if (((uVar5 != *(iVar4 + 0xc)) && (iVar7 = *(*(iVar4 + 0x330) + iStack_14 + 0x14), iVar7 != 4)) &&
                   (bVar3 = true, iVar7 != 0)) {
                    return -0x7ffffffa;
                }
                iStack_14 = iStack_14 + 0x90;
                uVar5 = uVar5 + 1;
            } while (uVar5 < uVar1);
            if (!bVar3) goto code_r0x00014118;
        }
        *(iVar4 + 0x5c) = 0;
        uVar5 = 0;
        if (uVar1 != 0) {
            iVar7 = 0;
            do {
                iVar2 = *(iVar4 + 0x330);
                *(iVar2 + 0x4c + iVar7) = 0;
                if ((uVar5 != *(iVar4 + 0xc)) && (*(iVar2 + 0x14 + iVar7) == 0)) {
                    *(iVar2 + 0x4c + iVar7) = 1;
                    *(iVar4 + 0x5c) = *(iVar4 + 0x5c) + 1;
                }
                uVar5 = uVar5 + 1;
                iVar7 = iVar7 + 0x90;
            } while (uVar5 < uVar1);
        }
        *(iVar4 + 100) = in_ECX;
        *(iVar4 + 0x68) = arg_14h;
        *(iVar4 + 0x60) = in_DL;
        *(iVar4 + 0x58) = 0;
        *(iVar4 + 0x8c) = 0;
        uVar8 = fcn.00013501();
        *(iVar4 + 0x70) = uVar8;
        *(iVar4 + 0x80) = 0;
        *(iVar4 + 0x84) = 0;
        *(iVar4 + 0x88) = 0;
        if (in_DL == '\0') {
            uVar9 = 0;
code_r0x000141d4:
            fcn.000132c1(uVar6,in_ECX,arg_14h,uVar9);
        }
        else if (uVar1 != 0) {
            iVar7 = 0;
            do {
                if ((uVar6 != uStack_10) && (*(iVar7 + 0x4c + *(iVar4 + 0x330)) != '\0')) {
                    uVar9 = 1;
                    goto code_r0x000141d4;
                }
                uVar6 = uVar6 + 1;
                iVar7 = iVar7 + 0x90;
            } while (uVar6 < uVar1);
        }
        if (arg_8h == '\0') {
            (*in_ECX)(arg_14h);
        }
        do {
            iVar4 = fcn.00013773();
        } while (iVar4 == -0x7ffffffa);
    }
    return iVar4;
}


/* fcn.00014203 @ 0x14203 */

int __cdecl fcn.00014203(uint noname_0,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    int in_ECX;
    uint32_t in_EDX;
    ulong uVar2;
    uint32_t uStack_10;
    
    iVar1 = fcn.00012413();
    fcn.00013fd2();
    if (uStack_10 == *(iVar1 + 0xc)) {
        if (in_EDX < *(iVar1 + 8)) {
            if (((in_EDX == *(iVar1 + 0xc)) || (in_ECX == 0)) || (*(in_EDX * 0x90 + 0x14 + *(iVar1 + 0x330)) == 4)) {
                iVar1 = -0x7ffffffe;
            }
            else {
                iVar1 = *(iVar1 + 0x330) + in_EDX * 0x90;
                *(iVar1 + 0x70) = 0;
                *(iVar1 + 0x50) = 0;
                uVar2 = fcn.00013501();
                *(iVar1 + 0x68) = 0;
                *(iVar1 + 0x6c) = 0;
                *(iVar1 + 0x58) = uVar2;
                fcn.000132c1();
                do {
                    iVar1 = fcn.00013708();
                } while (iVar1 == -0x7ffffffa);
            }
        }
        else {
            iVar1 = -0x7ffffff2;
        }
    }
    else {
        iVar1 = -0x7ffffff9;
    }
    return iVar1;
}


/* fcn.00013f49 @ 0x13f49 */

uint __cdecl fcn.00013f49(int32_t arg_8h)

{
    int iVar1;
    uint uVar2;
    uint32_t in_ECX;
    char in_DL;
    uint32_t var_4h;
    
    iVar1 = fcn.00012413();
    fcn.00013fd2();
    if (in_ECX == *(iVar1 + 0xc)) {
        if (in_ECX == *(iVar1 + 0xc)) {
            uVar2 = 0x80000002;
        }
        else if (in_ECX < *(iVar1 + 8)) {
            if (in_DL == '\0') {
                fcn.0001277e();
            }
            else {
                fcn.000136b4();
            }
            if (arg_8h != 0) {
                *(*(iVar1 + 0x330) + 0x10 + in_ECX * 0x90) = *arg_8h >> 2 & 1;
            }
            uVar2 = 0;
        }
        else {
            uVar2 = 0x8000000e;
        }
    }
    else {
        uVar2 = 0x80000007;
    }
    return uVar2;
}


/* fcn.0001175f @ 0x1175f */

int32_t fcn.0001175f(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000117ad @ 0x117ad */

int fcn.000117ad(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.0001178a();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00011640();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00011600 @ 0x11600 */

int __fastcall fcn.00011600(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* section..text @ 0x10260 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 22816 named .text
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


/* fcn.00011689 @ 0x11689 */

void __cdecl fcn.00011689(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00011736 @ 0x11736 */

void __fastcall fcn.00011736(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x4c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.00013fef @ 0x13fef */

uint __fastcall fcn.00013fef(int *param_1,int *param_2)

{
    int iVar1;
    int iVar2;
    uint uVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iStack_8;
    
    iVar2 = fcn.00012413();
    if ((param_1 == NULL) && (param_2 == NULL)) {
        uVar3 = 0x80000002;
    }
    else {
        fcn.00013fd2();
        if (iStack_8 == *(iVar2 + 0xc)) {
            iVar1 = *(iVar2 + 8);
            iVar4 = 0;
            if (iVar1 != 0) {
                iVar5 = 0;
                iVar6 = iVar1;
                do {
                    if (*(*(iVar2 + 0x330) + 0x14 + iVar5) != 4) {
                        iVar4 = iVar4 + 1;
                    }
                    iVar5 = iVar5 + 0x90;
                    iVar6 = iVar6 + -1;
                } while (iVar6 != 0);
            }
            if (param_1 != NULL) {
                *param_1 = iVar1;
            }
            if (param_2 != NULL) {
                *param_2 = iVar4;
            }
            uVar3 = 0;
        }
        else {
            uVar3 = 0x80000007;
        }
    }
    return uVar3;
}


/* fcn.00010e10 @ 0x10e10 */

uint __cdecl fcn.00010e10(int32_t arg_8h,int32_t arg_ch)

{
    uint uVar1;
    int iVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = fcn.00011689(arg_8h,&var_8h);
    if (var_4h == -0x7ffffff2) {
        uVar1 = 0x8000000e;
    }
    else {
        if ((((var_4h == 0) && (iVar2 = (**var_8h)(), iVar2 == -0x7ffffffb)) && (iVar2 = fcn.00011736(), iVar2 == 0))
           && (iVar2 = (**var_8h)(), iVar2 == 0)) {
            *arg_ch = var_4h;
            return 0;
        }
        uVar1 = 0x80000007;
    }
    return uVar1;
}


/* fcn.00011a89 @ 0x11a89 */

uint32_t fcn.00011a89(void)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00011a25();
    if (iVar1 == 1) {
        fcn.0001185f(0,0,0);
        if (10 < var_8h) {
            fcn.00014823(0,&var_4h,0,&var_ch);
            if (var_4h != 0) {
                return var_ch;
            }
        }
        fcn.0001185f(&var_4h,0,0);
        uVar2 = var_4h >> 0x18;
    }
    else {
        uVar2 = fcn.00011afa();
    }
    return uVar2;
}


/* fcn.00012076 @ 0x12076 */

uint32_t fcn.00012076(void)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),0x80000002,0x11004,0,0x5c70,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


/* fcn.0001181c @ 0x1181c */

int fcn.0001181c(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.000117e3();
    if (iVar1 != 0) {
        fcn.00011627();
        if (iVar1 + 0x18 != 0) {
            if (param_1 == 0) {
                return iVar1 + 0x18;
            }
            iVar1 = fcn.00011600(param_1);
            return iVar1;
        }
    }
    return 0;
}


/* fcn.00011664 @ 0x11664 */

void __fastcall fcn.00011664(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.00011544 @ 0x11544 */

int32_t __fastcall fcn.00011544(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.000116dc(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.00011616 @ 0x11616 */

uint __fastcall fcn.00011616(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000102a0(param_1,param_2);
    return uVar1;
}


/* fcn.000102a0 @ 0x102a0 */

uint * fcn.000102a0(uint *param_1,uint32_t param_2)

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


/* fcn.0001101e @ 0x1101e */

int fcn.0001101e(void)

{
    int iVar1;
    
    iVar1 = fcn.00011544();
    if (iVar1 != 0) {
        fcn.00011616();
    }
    return iVar1;
}


/* fcn.000110dc @ 0x110dc */

uint __fastcall fcn.000110dc(uint32_t *param_1,int param_2,int param_3,uint param_4)

{
    int iVar1;
    uint32_t *puVar2;
    uint uVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    bool bVar9;
    int iStack_10;
    
    if (param_3 < param_2) {
        puVar4 = fcn.0001101e();
        if (puVar4 == NULL) {
            uVar3 = 0x80000009;
        }
        else {
            iVar1 = param_2 + -1;
            iStack_10 = 0x200;
            uVar6 = *(param_2 * 0x20 + 0x5ce4) & param_1[1];
            uVar7 = *(param_2 * 0x20 + 0x5ce0) & *param_1;
            puVar8 = puVar4;
            do {
                uVar5 = param_1[1] & 0x80000000 | uVar6;
                *puVar8 = *param_1 & 0x67 | uVar7;
                puVar8[1] = uVar5;
                if (iVar1 != 1) {
                    *puVar8 = *puVar8 | 0x80;
                    puVar8[1] = uVar5;
                }
                if ((param_4 != '\0') && (param_3 < iVar1)) {
                    fcn.000110dc(param_3,param_4);
                }
                puVar2 = iVar1 * 0x20 + 0x5cd8;
                bVar9 = CARRY4(uVar7,*puVar2);
                uVar7 = uVar7 + *puVar2;
                uVar6 = uVar6 + *(iVar1 * 0x20 + 0x5cdc) + bVar9;
                puVar8 = puVar8 + 2;
                iStack_10 = iStack_10 + -1;
            } while (iStack_10 != 0);
            param_1[1] = 0;
            *param_1 = puVar4 | 3;
            uVar3 = 0;
        }
    }
    else {
        uVar3 = 0x80000002;
    }
    return uVar3;
}


/* fcn.0001103d @ 0x1103d */

uint32_t * __cdecl fcn.0001103d(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t *puVar1;
    ulong uVar2;
    uint32_t uVar3;
    int *in_ECX;
    int iVar4;
    uint32_t *puVar5;
    int iVar6;
    uint32_t in_CR3;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar2 = rdmsr(0xc0000080);
    iVar6 = (uVar2 >> 10 & 1) + 3;
    puVar5 = iVar6 * 0x20 + 0x5ce8;
    do {
        var_ch._0_1_ = *puVar5;
        uVar3 = arg_ch;
        iVar4 = 0;
        if ((*puVar5 & 0x20) == 0) {
            uVar3 = arg_8h;
            iVar4 = arg_ch;
        }
        puVar1 = (in_CR3 & 0xfffff000) + ((uVar3 >> (var_ch & 0x1f) | iVar4 << 0x20 - (var_ch & 0x1f)) & 0x1ff) * 8;
        if (*puVar1 == 0 && puVar1[1] == 0) break;
        if (((*puVar1 & 0x80) != 0) || (iVar6 == 1)) {
            *in_ECX = iVar6;
            return puVar1;
        }
        in_CR3 = *puVar1;
        puVar5 = puVar5 + -8;
        iVar6 = iVar6 + -1;
    } while (0 < iVar6);
    *in_ECX = 0;
    return NULL;
}


/* fcn.0001185f @ 0x1185f */

int __cdecl fcn.0001185f(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    uint uVar4;
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
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar4;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar3;
    }
    return in_ECX;
}


/* fcn.00011280 @ 0x11280 */

uint fcn.00011280(void)

{
    int32_t var_8h;
    uint32_t var_4h;
    
    fcn.0001185f(0,0,0);
    if ((0x80000000 < var_4h) && (fcn.0001185f(0,0,&var_8h), (var_8h & 0x4000000U) != 0)) {
        return 3;
    }
    return 2;
}


/* fcn.000112ca @ 0x112ca */

uint32_t * fcn.000112ca(void)

{
    int iVar1;
    ulong uVar2;
    int iVar3;
    uint32_t *puVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    bool bVar9;
    int iStack_14;
    
    uVar2 = rdmsr(0xc0000080);
    iVar1 = (uVar2 >> 10 & 1) + 3;
    iVar3 = iVar1 * 0x20;
    iStack_14 = 1 << (0x20U - *(iVar3 + 0x5ce8) & 0x1f);
    puVar4 = fcn.0001101e();
    if (puVar4 != NULL) {
        if (iVar1 == 4) {
            iVar5 = fcn.00011280();
        }
        else {
            iVar5 = 2;
        }
        uVar7 = 0;
        uVar6 = 0;
        puVar8 = puVar4;
        for (; iStack_14 != 0; iStack_14 = iStack_14 + -1) {
            puVar8[1] = uVar6;
            *puVar8 = uVar7 | 3;
            if ((iVar5 < iVar1) && (iVar5 != 0)) {
                fcn.000110dc(iVar5,1);
            }
            if (iVar1 == 3) {
                *puVar8 = *puVar8 & 0xfffffff9;
                puVar8[1] = puVar8[1];
            }
            puVar8 = puVar8 + 2;
            bVar9 = CARRY4(uVar7,*(iVar3 + 0x5cd8));
            uVar7 = uVar7 + *(iVar3 + 0x5cd8);
            uVar6 = uVar6 + *(iVar3 + 0x5cdc) + bVar9;
        }
    }
    return puVar4;
}


/* fcn.000120ec @ 0x120ec */

uint __fastcall fcn.000120ec(uint32_t *param_1)

{
    uint32_t *puVar1;
    int iVar2;
    ushort *puVar3;
    uint32_t *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ushort in_CS;
    uint16_t uStack_614;
    int iStack_612;
    int iStack_60c;
    int iStack_608;
    uint32_t auStack_5f8 [382];
    
    if (param_1 != NULL) {
        fcn.000147f9(param_1);
        uVar6 = param_1[1];
        puVar4 = param_1;
        while (uVar6 != 0x80000000) {
            if (2 < uVar6) {
                return 0x80000002;
            }
            if (*puVar4 < 0x20) {
                auStack_5f8[*puVar4 * 0xc] = uVar6;
            }
            puVar1 = puVar4 + 7;
            puVar4 = puVar4 + 6;
            uVar6 = *puVar1;
        }
    }
    InterruptDescriptorTableRegister();
    uVar6 = uStack_614 + 1 >> 3;
    if (0x20 < uVar6) {
        uVar6 = 0x20;
    }
    fcn.000105cb(&iStack_60c);
    uVar5 = 0;
    if (uVar6 != 0) {
        puVar4 = auStack_5f8;
        puVar3 = iStack_612 + 6;
        do {
            puVar3[-2] = in_CS;
            if ((param_1 == NULL) || (*puVar4 != 0)) {
                iVar2 = iStack_608 * uVar5 + iStack_60c;
                puVar3[-3] = iVar2;
                *puVar3 = iVar2 >> 0x10;
                *(puVar3 + -1) = 0x8e;
            }
            uVar5 = uVar5 + 1;
            puVar4 = puVar4 + 0xc;
            puVar3 = puVar3 + 4;
        } while (uVar5 < uVar6);
    }
    return 0;
}


/* fcn.000138ad @ 0x138ad */

uint fcn.000138ad(void)

{
    char cVar1;
    uchar uVar2;
    int *piVar3;
    uint32_t uVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int *piVar10;
    uchar uVar11;
    int *piVar12;
    ulong uVar13;
    uint32_t uVar14;
    int iStack_78;
    int iStack_66;
    uchar auStack_60 [42];
    uint16_t uStack_36;
    int iStack_34;
    ushort uStack_30;
    int aiStack_2c [2];
    int iStack_24;
    int iStack_14;
    
    piVar3 = fcn.000142b9();
    if (piVar3 == NULL) {
        uVar4 = fcn.000147e7();
    }
    else {
        uVar4 = piVar3[2];
    }
    fcn.00010b2a(uVar4);
    iVar9 = iStack_24 + 0x5c + iStack_14;
    cVar1 = fcn.000129a1();
    fcn.0001282d();
    iVar5 = fcn.00011544();
    fcn.00011616();
    iVar7 = uVar4 * 0x8000 + iVar5;
    iVar6 = iStack_78 * uVar4 + iVar7;
    iVar8 = iVar9 + 4 + ((-4 - iVar6) - iVar9 & 7U) + iVar6;
    piVar10 = uStack_36 + 1 + iVar8;
    piVar10[0x12] = -1;
    piVar10[0x15] = iVar9;
    piVar10[5] = iVar5;
    piVar10[0x14] = iVar6;
    uVar11 = 1;
    piVar10[6] = 0x8000;
    piVar10[2] = 1;
    piVar10[3] = 0;
    piVar10[0x22] = 0;
    *(piVar10 + 0x25) = 0;
    piVar10[0xcc] = piVar10 + 0xdc;
    *piVar10 = piVar10 + 0xdc + uVar4 * 0x24;
    piVar10[1] = 0;
    piVar10[4] = 1;
    uVar14 = uVar4;
    uVar2 = fcn.000142d8();
    *(piVar10 + 0x359) = uVar2;
    uVar2 = fcn.000142d8();
    piVar10[0xd7] = -1;
    *(piVar10 + 0x35a) = uVar2;
    iVar5 = fcn.000147ca();
    uVar13 = (**(iVar5 + 0x10))(0x5c50,0x30007);
    *(piVar10 + 0xda) = uVar13;
    if ((*(piVar10 + 0x359) == '\0') || (*(piVar10 + 0x35a) != '\0')) {
        uVar11 = 0;
    }
    *(piVar10 + 0x35b) = uVar11;
    *(iVar8 + -4) = *(iStack_34 + -4);
    fcn.00011600(uStack_36 + 1);
    uStack_30 = 0;
    iStack_34 = iVar8;
    if (piVar10[0xcc] + 0x18 != auStack_60) {
        section..text(piVar10[0xcc] + 0x18,auStack_60,0x34);
    }
    fcn.00012c6c(0,piVar10[5] + 0x8000,0);
    if (piVar10 + 7 != aiStack_2c) {
        section..text(piVar10 + 7,aiStack_2c,0x2c);
    }
    *(piVar10 + 0xca) = cVar1;
    *(piVar10 + 0xd6) = cVar1 == '\x01';
    if (uVar4 != 0) {
        iVar5 = 0;
        do {
            *(iVar5 + 4 + piVar10[0xcc]) = iVar7;
            iVar7 = iVar7 + iStack_78;
            uVar4 = uVar4 - 1;
            iVar5 = iVar5 + 0x90;
        } while (uVar4 != 0);
        uVar4 = uVar14;
    }
    fcn.00011bdb();
    if (piVar3 == NULL) {
        if (1 < uVar4) {
            fcn.00012bc4();
        }
    }
    else {
        uVar4 = 0;
        piVar3[0xd9] = piVar10;
        piVar10[2] = piVar3[2];
        piVar10[3] = piVar3[3];
        *piVar10 = *piVar3;
        piVar10[1] = piVar3[1];
        if (piVar10[2] != 0) {
            piVar12 = *piVar10 + 8;
            iVar5 = 0;
            do {
                *(piVar10[0xcc] + iVar5) = 1;
                iVar6 = *piVar12;
                piVar12 = piVar12 + 5;
                uVar4 = uVar4 + 1;
                *(iVar5 + 0x10 + piVar10[0xcc]) = iVar6 == 0;
                *(iVar5 + 8 + piVar10[0xcc]) = 0;
                iVar5 = iVar5 + 0x90;
            } while (uVar4 < piVar10[2]);
        }
    }
    fcn.0001175f();
    iVar5 = fcn.000117ad();
    if (iVar5 == 0) {
        iVar5 = fcn.000126a5();
        if (iVar5 < 0) {
            fcn.00014616();
        }
    }
    else {
        piVar10[0xd2] = *(iVar5 + 0x18);
        piVar10[0xd3] = *(iVar5 + 0x1c);
        piVar10[0xd4] = *(iVar5 + 0x20);
        piVar10[0xd5] = *(iVar5 + 0x24);
    }
    fcn.00014437();
    fcn.00015a52();
    if (1 < piVar10[2]) {
        if (piVar3 != NULL) {
            piVar10[0x24] = 2;
        }
        fcn.000132c1(0,0x2b60,piVar10,1);
        do {
        } while (piVar10[0x16] < piVar10[2] - 1U);
        if (piVar3 != NULL) {
            piVar10[0x24] = 3;
        }
        uVar4 = 0;
        if (piVar10[2] != 0) {
            do {
                fcn.0001277e();
                uVar4 = uVar4 + 1;
            } while (uVar4 < piVar10[2]);
        }
    }
    fcn.000125e6();
    fcn.0001181c(8);
    InterruptDescriptorTableRegister();
    (**(**(iStack_66 + -4) + 0x24))(*(iStack_66 + -4),0x5d90);
    return 0;
}


/* fcn.00010e91 @ 0x10e91 */

void fcn.00010e91(void)

{
    uint uVar1;
    int *piVar2;
    uint32_t uVar3;
    uint *puVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t *puVar8;
    uint32_t uVar9;
    uint *puStack_94;
    uint32_t *puStack_90;
    uint *puStack_8c;
    uint uStack_88;
    ushort uStack_84;
    uint32_t *puStack_80;
    uint32_t *puStack_7c;
    uint uStack_78;
    uint32_t uStack_74;
    int iStack_70;
    uint32_t auStack_44 [2];
    uint uStack_3c;
    
    fcn.00013fef();
    uVar3 = CONCAT22(uStack_88._2_2_,uStack_88);
    puStack_8c = uVar3 * 0x40 + 0x48;
    fcn.00011736();
    uVar7 = 0;
    puStack_7c = NULL;
    puStack_94 = NULL;
    *puStack_80 = uVar3;
    uVar9 = 0;
    puStack_90 = NULL;
    iVar5 = fcn.00010e10(&uStack_78,&puStack_7c);
    if (iVar5 == 0) {
        uVar9 = *puStack_7c;
        puVar8 = puStack_7c + 2;
    }
    else {
        iVar5 = fcn.00010e10(&uStack_78,&puStack_94);
        if (iVar5 != 0) {
            puVar8 = NULL;
            goto code_r0x00010f44;
        }
        uVar9 = 1;
        auStack_44[0] = fcn.00011a89();
        puVar8 = auStack_44;
        uStack_3c = *puStack_94;
    }
    puStack_90 = puVar8;
code_r0x00010f44:
    if (uVar3 != 0) {
        uStack_88 = 0;
        do {
            fcn.00013c9b(&puStack_94);
            if (uVar9 != 0) {
                uVar6 = uVar9;
                do {
                    if ((uStack_74 == *puVar8) && (iStack_70 == 0)) {
                        puStack_94 = puVar8[2];
                    }
                    puVar8 = puVar8 + 0x10;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            puVar4 = puStack_94;
            if (puStack_94 != NULL) {
                fcn.00012076();
            }
            uVar7 = uVar7 + 1;
            *(uStack_88 + 0x10 + puStack_80) = puVar4;
            *(uStack_88 + 8 + puStack_80) = uStack_74;
            uStack_88 = uStack_88 + 0x40;
            puVar8 = puStack_90;
        } while (uVar7 < uVar3);
    }
    fcn.0001181c(puStack_8c);
    if (puStack_7c == NULL) {
        fcn.00011664();
    }
    else if (uVar9 < uVar3) {
        puStack_8c = &uStack_88;
        uVar1 = InterruptDescriptorTableRegister();
        uStack_88._2_2_ = uVar1 >> 0x10;
        piVar2 = *(CONCAT22(uStack_84,uStack_88._2_2_) + -4);
        uStack_88 = uVar1;
        (**(*piVar2 + 0x1c))(piVar2,uStack_78,0x5cb4);
        return;
    }
    return;
}


/* fcn.000111c1 @ 0x111c1 */

int fcn.000111c1(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    uint32_t *puVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uint32_t arg_8h;
    bool bVar5;
    
    if (((param_1 & 0xfff) == 0) && ((param_3 & 0xfff) == 0)) {
        if ((param_2 == 0) && (param_4 == 0)) {
            iVar3 = 0;
            iVar4 = 0;
            arg_8h = param_1;
            if ((param_3 == 0) || (param_1 <= -param_3)) {
                while (puVar1 = fcn.0001103d(arg_8h,iVar3), puVar1 != NULL) {
                    if (param_1 == 1) {
                        *puVar1 = *puVar1 & 0xfffffffe;
                        bVar5 = 0xffffefff < arg_8h;
                        arg_8h = arg_8h + 0x1000;
                        iVar3 = iVar3 + bVar5;
                        puVar1[1] = puVar1[1];
                        bVar5 = 0xfff < param_3;
                        param_3 = param_3 - 0x1000;
                        iVar4 = iVar4 + -1 + bVar5;
                    }
                    else {
                        iVar2 = fcn.000110dc(1,0);
                        if (iVar2 < 0) {
                            return iVar2;
                        }
                    }
                    if (param_3 == 0 && iVar4 == 0) {
                        return 0;
                    }
                }
            }
        }
        iVar3 = -0x7ffffffd;
    }
    else {
        iVar3 = -0x7ffffffe;
    }
    return iVar3;
}


/* fcn.000116dc @ 0x116dc */

void __cdecl fcn.000116dc(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.00011566 @ 0x11566 */

uint __fastcall fcn.00011566(uint param_1,uint32_t param_2)

{
    int iVar1;
    uint auStack_c [2];
    
    if ((((param_2 & 0xfff) != 0) + (param_2 >> 0xc) != 0) && (iVar1 = fcn.000116dc(auStack_c), -1 < iVar1)) {
        return auStack_c[0];
    }
    return 0;
}


/* fcn.0001157e @ 0x1157e */

uint __fastcall fcn.0001157e(uint param_1)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.00011736();
    if (iVar1 < 0) {
        param_1 = 0;
    }
    return param_1;
}


/* fcn.00011599 @ 0x11599 */

int __fastcall fcn.00011599(uint param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.00011566();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_2 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000102a0(iVar1,param_2);
    return iVar1;
}


/* fcn.00011640 @ 0x11640 */

uint32_t __fastcall fcn.00011640(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0001178a @ 0x1178a */

int16_t * __fastcall fcn.0001178a(int16_t param_1,int16_t *param_2)

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


/* fcn.000117e3 @ 0x117e3 */

int32_t __fastcall fcn.000117e3(uint param_1,uint param_2)

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


/* fcn.00011627 @ 0x11627 */

uint * __fastcall fcn.00011627(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.000118bd @ 0x118bd */

uint __fastcall fcn.000118bd(uint32_t param_1)

{
    uint uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    fcn.0001185f(0,0,0);
    uVar2 = param_1 >> 8 & 0xf;
    if ((uVar2 == 4) || (uVar2 == 5)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00011896 @ 0x11896 */

//WARNING: Removing unreachable block (ram,0x000118af)

int64_t __cdecl fcn.00011896(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00011a25 @ 0x11a25 */

char __fastcall fcn.00011a25(uint param_1)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.000118bd(param_1,param_1);
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.000118f1 @ 0x118f1 */

int fcn.000118f1(void)

{
    ulong uVar1;
    char cVar2;
    int iVar3;
    
    cVar2 = fcn.000118bd();
    if (cVar2 == '\0') {
        return -0x1200000;
    }
    uVar1 = rdmsr(0x1b);
    iVar3 = fcn.00011896(uVar1 >> 0x20,0);
    return iVar3 + (uVar1 & 0xfffff000);
}


/* fcn.00014823 @ 0x14823 */

int __cdecl fcn.00014823(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint *puVar1;
    int in_ECX;
    uint uVar2;
    uint uVar3;
    uint uVar4;
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
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (arg_8h != 0) {
        *arg_8h = *puVar1;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar4;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar2;
    }
    if (arg_14h != 0) {
        *arg_14h = uVar3;
    }
    return in_ECX;
}


/* fcn.00011afa @ 0x11afa */

uint32_t fcn.00011afa(void)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = fcn.0001191f();
    iVar2 = fcn.00011a25();
    uVar3 = uVar1;
    if ((iVar2 == 1) && (uVar3 = fcn.00011a89(), uVar3 < 0x100)) {
        uVar3 = uVar1 >> 0x18;
    }
    return uVar3;
}


/* fcn.0001191f @ 0x1191f */

uint __fastcall fcn.0001191f(uint32_t param_1)

{
    ulong uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_4h;
    
    iVar2 = fcn.00011a25();
    if (iVar2 == 1) {
        iVar2 = fcn.000118f1();
        uVar3 = *(iVar2 + param_1);
    }
    else {
        uVar1 = rdmsr((param_1 >> 4) + 0x800);
        uVar3 = uVar1;
    }
    return uVar3;
}


/* fcn.00011996 @ 0x11996 */

ulong __fastcall fcn.00011996(uint32_t param_1,int param_2)

{
    int iVar1;
    uint uVar2;
    ulong uVar3;
    int32_t var_8h;
    uint32_t var_4h;
    
    iVar1 = fcn.00011a25();
    if (iVar1 == 1) {
        iVar1 = fcn.000118f1();
        uVar2 = *(iVar1 + 0x310);
        do {
        } while ((*(iVar1 + 0x300) & 0x1000) != 0);
        *(iVar1 + 0x310) = param_2 << 0x18;
        *(iVar1 + 0x300) = param_1;
        do {
            param_1 = *(iVar1 + 0x300);
        } while ((param_1 & 0x1000) != 0);
        *(iVar1 + 0x310) = uVar2;
    }
    else {
        uVar3 = fcn.00011896(param_2,0);
        uVar2 = uVar3 >> 0x20;
        param_1 = uVar3 | param_1;
        wrmsr(0x830,CONCAT44(uVar2,param_1));
    }
    return CONCAT44(uVar2,param_1);
}


/* fcn.0001557e @ 0x1557e */

uint __fastcall fcn.0001557e(uint param_1)

{
    uint32_t uVar1;
    ulong uVar2;
    uint64_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = fcn.000154e4();
    uVar3 = fcn.00014872(param_1,0,uVar2);
    uVar1 = uVar3 >> 0x20;
    fcn.0001555d((uVar1 % 1000000 << 0x20 | uVar3 & 0xffffffff) / 1000000,uVar1 / 1000000);
    return param_1;
}


/* fcn.000154e4 @ 0x154e4 */

ulong fcn.000154e4(void)

{
    uint64_t uVar1;
    uint32_t uVar2;
    uint uVar3;
    int32_t var_18h;
    int var_14h;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.0001185f(&var_8h,&var_ch,0);
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


/* fcn.00014872 @ 0x14872 */

void fcn.00014872(uint param_1,uint param_2,uint param_3,uint param_4)

{
    fcn.000148e6(param_1,param_2,param_3,param_4);
    return;
}


/* fcn.000148e6 @ 0x148e6 */

ulong fcn.000148e6(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    return CONCAT44((param_3 * param_1 >> 0x20) + param_1 * param_4 + param_3 * param_2,param_3 * param_1);
}


/* fcn.0001555d @ 0x1555d */

void fcn.0001555d(uint32_t param_1,int param_2)

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


/* fcn.000155e0 @ 0x155e0 */

uint fcn.000155e0(void)

{
    uint uVar1;
    uint32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    fcn.0001185f(&var_4h,&var_8h,&var_ch);
    if (((var_4h == 0x68747541) && (var_8h == 0x444d4163)) && (var_ch == 0x69746e65)) {
        uVar1 = 1;
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.00011952 @ 0x11952 */

uint32_t __fastcall fcn.00011952(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    iVar1 = fcn.00011a25();
    if (iVar1 == 1) {
        uVar2 = fcn.000118f1();
        *(uVar2 + param_1) = param_2;
        param_2 = uVar2;
    }
    else {
        wrmsr((param_1 >> 4) + 0x800,param_2);
    }
    return param_2;
}


/* fcn.0001485d @ 0x1485d */

int __fastcall fcn.0001485d(int param_1)

{
    int iVar1;
    
    if (param_1 == 0) {
        return -1;
    }
    iVar1 = 0x1f;
    for (; 0 < param_1; param_1 = param_1 * 2) {
        iVar1 = iVar1 + -1;
    }
    return iVar1;
}


/* fcn.00011d2b @ 0x11d2b */

void __fastcall fcn.00011d2b(uint32_t param_1,uint32_t *param_2,uint32_t *param_3,uint32_t *param_4)

{
    char cVar1;
    uint32_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uchar auStack_34 [4];
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    int iStack_24;
    uint32_t uStack_20;
    int iStack_1c;
    uchar auStack_18 [4];
    uint32_t uStack_14;
    uint32_t uStack_10;
    uchar auStack_c [4];
    uchar auStack_8 [4];
    uint32_t *puStack_4;
    
    uVar4 = 0;
    uStack_2c = param_1;
    puStack_4 = param_2;
    fcn.0001185f(0,0,&uStack_20);
    if ((uStack_20 & 0x10000000) == 0) {
        if (param_4 != NULL) {
            *param_4 = 0;
        }
        if (param_3 != NULL) {
            *param_3 = 0;
        }
        if (param_2 != NULL) {
            *param_2 = 0;
        }
    }
    else {
        fcn.0001185f(0,0,0);
        fcn.0001185f(0,0,0);
        if ((uStack_28 < 0xb) || (fcn.00014823(auStack_34,&iStack_1c,&uStack_30,0), iStack_1c == 0)) {
            fcn.0001185f(auStack_18,0,0);
            cVar1 = fcn.000155e0();
            if (cVar1 == '\0') {
                if (3 < uStack_28) {
                    fcn.00014823(&iStack_24,0,0,0);
                }
            }
            else if ((0x8000001d < uStack_14) && (fcn.0001185f(0,&uStack_10,0), (uStack_10 & 0x400000) != 0)) {
                fcn.0001185f(0,auStack_c,0);
                fcn.0001185f(auStack_8,0,0);
            }
            cVar1 = fcn.0001485d();
            uVar3 = cVar1 + 1;
            cVar1 = fcn.0001485d();
            uVar4 = cVar1 + 1;
            param_1 = uStack_2c;
        }
        else {
            uVar3 = auStack_34[0] & 0x1f;
            uStack_2c = 1;
            do {
                fcn.00014823(auStack_34,0,&uStack_30,0);
                uVar2 = uStack_30 >> 8 & 0xff;
                if (uVar2 == 2) {
                    uVar4 = (auStack_34[0] & 0x1f) - uVar3;
                    break;
                }
                uStack_2c = uStack_2c + 1;
            } while (uVar2 != 0);
        }
        if (param_4 != NULL) {
            *param_4 = (1 << (uVar3 & 0x1f)) - 1U & param_1;
        }
        if (param_3 != NULL) {
            *param_3 = param_1 >> (uVar3 & 0x1f) & (1 << (uVar4 & 0x1f)) - 1U;
        }
        if (puStack_4 != NULL) {
            *puStack_4 = param_1 >> (uVar4 + uVar3 & 0x1f);
        }
    }
    return;
}


/* fcn.000121bd @ 0x121bd */

void __cdecl fcn.000121bd(int32_t arg_8h)

{
    int in_ECX;
    int32_t unaff_EDI;
    
    fcn.00011afa();
    fcn.000123bc(0x5dc4,in_ECX);
    if ((1 << (in_ECX & 0x1f) & 0x20227d00U) != 0) {
        fcn.000123bc(0x5e04,*arg_8h);
        if (in_ECX == 0xe) {
            fcn.000123bc(0x5e1c,*arg_8h >> 4 & 1);
        }
        fcn.000123bc(0x5e4c,unaff_EDI);
    }
    fcn.000123bc(0x5e50,*(arg_8h + 0x24c));
    fcn.000123bc(0x5e78,*(arg_8h + 0x284));
    fcn.000123bc(0x5eac,*(arg_8h + 0x274));
    fcn.000123bc(0x5ee0,*(arg_8h + 0x25c));
    fcn.000123bc(0x5f1c,*(arg_8h + 0x21c));
    fcn.000123bc(0x5f50,*(arg_8h + 0x204));
    fcn.000123bc(0x5f84,*(arg_8h + 0x214));
    fcn.000123bc(0x5fa0,*(arg_8h + 0x23c));
    fcn.000123bc(0x5fc4,*(arg_8h + 0x234));
    fcn.000123bc(0x5fdc,arg_8h + 4);
    return;
}


/* fcn.000123bc @ 0x123bc */

void __cdecl fcn.000123bc(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t *puVar1;
    uint32_t var_100h;
    
    fcn.000149a0(0,arg_8h,&arg_ch);
    puVar1 = &var_100h;
    while (var_100h != '\0') {
        puVar1 = puVar1 + 1;
        var_100h._0_1_ = *puVar1;
    }
    return;
}


/* fcn.000147f9 @ 0x147f9 */

void __fastcall fcn.000147f9(uint param_1)

{
    fcn.00010bd0(param_1,0x600,0xff);
    return;
}


/* fcn.00010bd0 @ 0x10bd0 */

uchar * fcn.00010bd0(uchar *param_1,int param_2,uchar param_3)

{
    uchar *puVar1;
    
    puVar1 = param_1;
    for (; param_2 != 0; param_2 = param_2 + -1) {
        *puVar1 = param_3;
        puVar1 = puVar1 + 1;
    }
    return param_1;
}


/* fcn.000105cb @ 0x105cb */

ulong __cdecl fcn.000105cb(int32_t arg_8h)

{
    uint in_EAX;
    uint in_EDX;
    
    *arg_8h = 0x2c0;
    *(arg_8h + 4) = 10;
    *(arg_8h + 8) = 0x400;
    return CONCAT44(in_EDX,in_EAX);
}


/* fcn.000149a0 @ 0x149a0 */

uint32_t __cdecl fcn.000149a0(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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
    ulong uVar12;
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
        if ((arg_8h & 0x2000U) != 0) goto code_r0x000149de;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x000149de:
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
        uVar12 = fcn.000148c7();
        if (uVar12 >> 0x20 < uVar12) {
            return 0;
        }
        iStack_74 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar3 = fcn.000148a2();
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
code_r0x00014ac0:
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
            if (uStack_50 == 10) goto code_r0x0001510a;
            if (uStack_50 == 0xd) goto code_r0x00014d4f;
            puVar8 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00014b30:
code_r0x00014b34:
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
                        goto code_r0x00014cbc;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar8;
                        goto code_r0x00014ccf;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x00014cbc;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x00014ccf;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x00014cbc;
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
                    goto code_r0x00014b30;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x00014cbc;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x00014ccf;
                    if (0x39 < uStack_50) goto code_r0x00014c20;
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
                goto code_r0x00014b34;
            }
            goto code_r0x00014b19;
        }
        goto code_r0x00015480;
    }
code_r0x00015484:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00014922(1,0,uStack_5c);
        uVar3 = uStack_7c - uStack_38;
    }
    return uVar3 / uStack_5c;
code_r0x00014c20:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x00014ccf;
    arg_8h = arg_8h | 0x10;
code_r0x00014cbc:
    puVar8 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00014b30;
code_r0x00014ccf:
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
                puStack_78 = 0x62cc;
            }
            else {
                fcn.000154c5(auStack_30,0x26,0,0x62d8,*piVar4);
code_r0x00014dff:
                puStack_78 = auStack_30;
            }
code_r0x00014e03:
            puVar8 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x0001510a:
            puVar8 = arg_ch + iStack_74;
            puStack_78 = 0x633c;
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
                if (uStack_50 == 0x53) goto code_r0x00014e9f;
                if (uStack_50 == 0x58) goto code_r0x00014f7a;
                if (uStack_50 == 0x61) goto code_r0x00014ea9;
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
                    goto code_r0x00014b1d;
                }
                if (uStack_50 != 100) goto code_r0x00014b19;
                goto code_r0x00014f90;
            }
code_r0x00014d4f:
            puVar8 = arg_ch + iStack_74;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 == 10) {
                puStack_78 = 0x633c;
                arg_ch = puVar8;
                goto code_r0x00014e03;
            }
            puStack_78 = 0x6340;
            puVar8 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x00014f7a:
            arg_8h = arg_8h | 0x20;
code_r0x00014f7d:
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
                        puStack_78 = (uVar3 & 0x7fffffff) * 0x15 + 0x63cb;
                        goto code_r0x00014f4b;
                    }
                }
                else if (uVar3 < 6) {
                    puStack_78 = uVar3 * 0x19 + 0x6348;
code_r0x00014f4b:
                    if (puStack_78 != auStack_30) goto code_r0x00015147;
                }
                fcn.000154c5(auStack_30,0x26,0,0x6334,uVar3);
                goto code_r0x00015147;
            }
            if (uStack_50 == 0x73) {
code_r0x00014e9f:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x00014ea9:
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
                    puStack_78 = 0x62bc;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x00015147;
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
                    fcn.000154c5(auStack_30,0x26,0,0x6318,*(uVar3 + 2));
                    goto code_r0x00014dff;
                }
                puStack_78 = 0x630c;
                goto code_r0x00014e03;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x00014b19:
                    puStack_78 = &uStack_50;
code_r0x00014b1d:
                    arg_8h = arg_8h | 0x400;
                    puVar8 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x00015147;
                }
                goto code_r0x00014f7d;
            }
        }
        if (-1 < uVar3) {
            uVar3 = uVar3 & 0xfffffffd | 0x4000;
        }
code_r0x00014f90:
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
code_r0x0001505d:
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
            else if ((uVar3 & 0x4010) == 0x4000) goto code_r0x0001505d;
        }
        iVar5 = fcn.00014956(uVar7,uVar6);
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
code_r0x00015147:
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
            uStack_7c = fcn.00014922(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar10) {
        if (((uStack_7f != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_7c != 0)) {
            uStack_7c = fcn.00014922(1,uStack_7f,uStack_5c);
        }
        iVar5 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar5 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_7c == 0)) goto code_r0x0001531e;
        uVar3 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00014922(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7f == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_7c == 0))
        goto code_r0x0001531e;
        uVar3 = uStack_7f;
        iVar5 = 1;
    }
    uStack_7c = fcn.00014922(iVar5,uVar3,uStack_5c);
code_r0x0001531e:
    uVar3 = arg_8h & 0x2000;
    if ((uStack_7f != 0) < uStack_60) {
        uVar7 = uStack_4c;
        puVar9 = puStack_78;
        puStack_78 = uStack_7f != 0;
        do {
            if ((*puVar9 == '\0') && ((uVar7 < 2 || (*(puVar9 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar3 == 0) && (uStack_7c != 0)) {
                uStack_7c = fcn.00014922(1,CONCAT11(*(puVar9 + 1),*puVar9) & uStack_3c,uStack_5c);
            }
            uVar6 = uStack_4c;
            puVar9 = puVar9 + uVar7;
            puVar2 = puStack_78 + 1;
            if (bVar11) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x000153ff;
                puStack_78 = puStack_78 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_78) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar7 = uStack_4c;
                if ((uVar3 == 0) && (uStack_7c != 0)) {
                    uStack_7c = fcn.00014922(1,0x2c,uStack_5c);
                    uVar7 = uVar6;
                    puVar2 = puStack_78;
                    goto code_r0x000153ff;
                }
            }
            else {
code_r0x000153ff:
                puStack_78 = puVar2;
            }
        } while (puStack_78 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar3 == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00014922(uStack_48 - uStack_68,0x20,uStack_5c);
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
    if (uStack_50 == 0) goto code_r0x00015480;
    goto code_r0x00014ac0;
code_r0x00015480:
    uVar3 = uStack_64;
    goto code_r0x00015484;
}


/* fcn.00012413 @ 0x12413 */

int fcn.00012413(void)

{
    uint64_t uVar1;
    int iVar2;
    int32_t var_10h;
    int32_t var_4h;
    
    uVar1 = rdmsr(0x1b);
    if ((uVar1 & 0x100) == 0) {
        InterruptDescriptorTableRegister();
        iVar2 = stack0xffffffee + 1 + var_10h;
    }
    else {
        iVar2 = fcn.000142b9();
    }
    return iVar2;
}


/* fcn.000142b9 @ 0x142b9 */

uint fcn.000142b9(void)

{
    int iVar1;
    uint uVar2;
    
    uVar2 = 0;
    fcn.0001175f();
    iVar1 = fcn.000117ad();
    if (iVar1 != 0) {
        uVar2 = *(iVar1 + 0x18);
    }
    return uVar2;
}


/* fcn.000142d8 @ 0x142d8 */

//WARNING: Removing unreachable block (ram,0x0001430a)

bool __fastcall fcn.000142d8(int param_1)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return param_1 == 0;
}


/* fcn.000115b1 @ 0x115b1 */

int __fastcall fcn.000115b1(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0001157e();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000102a0(iVar1,param_1);
    return iVar1;
}


/* fcn.00010b7e @ 0x10b7e */

//WARNING: Unable to track spacebase fully for stack

ulong __cdecl fcn.00010b7e(int32_t arg_24h,int32_t arg_28h)

{
    uint uVar1;
    char *in_stack_00000004;
    char *in_stack_00000008;
    uchar auStack_2c [12];
    
    uVar1 = GlobalDescriptorTableRegister();
    *(in_stack_00000004 + 8) = uVar1;
    uVar1 = InterruptDescriptorTableRegister();
    *(in_stack_00000004 + 0xe) = uVar1;
    *(in_stack_00000004 + 4) = auStack_2c;
    *in_stack_00000004 = '\x01';
    do {
    } while (*in_stack_00000008 != '\x01');
    GlobalDescriptorTableRegister(*(in_stack_00000008 + 8));
    InterruptDescriptorTableRegister(*(in_stack_00000008 + 0xe));
    *in_stack_00000008 = '\x02';
    do {
    } while (*in_stack_00000004 != '\x02');
    return CONCAT44(*(*(in_stack_00000008 + 4) + 0x20),*(*(in_stack_00000008 + 4) + 0x28));
}


/* fcn.00015807 @ 0x15807 */

int * __fastcall fcn.00015807(int *param_1)

{
    int iVar1;
    
    iVar1 = 1;
    LOCK();
    if (*param_1 == 1) {
        *param_1 = 2;
    }
    else {
        iVar1 = *param_1;
    }
    UNLOCK();
    if (iVar1 != 1) {
        rdtsc();
        fcn.000155c2();
        while( true ) {
            iVar1 = 1;
            LOCK();
            if (*param_1 == 1) {
                *param_1 = 2;
            }
            else {
                iVar1 = *param_1;
            }
            UNLOCK();
            if (iVar1 == 1) break;
            rdtsc();
        }
    }
    return param_1;
}


/* fcn.00010c30 @ 0x10c30 */

uint fcn.00010c30(uint param_1)

{
    TaskRegister(param_1);
    return param_1;
}


/* fcn.000147ca @ 0x147ca */

int32_t fcn.000147ca(void)

{
    int32_t var_4h;
    
    fcn.00011689(0,&var_4h);
    return var_4h;
}


/* fcn.00012b91 @ 0x12b91 */

uint __fastcall fcn.00012b91(int *param_1,uint32_t *param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int *piVar5;
    
    iVar1 = *param_1;
    uVar2 = param_1[2];
    iVar3 = fcn.00011afa();
    uVar4 = 0;
    if (uVar2 != 0) {
        piVar5 = iVar1 + 4;
        do {
            if (*piVar5 == iVar3) {
                *param_2 = uVar4;
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 5;
        } while (uVar4 < uVar2);
    }
    return 0x8000000e;
}


/* fcn.00014437 @ 0x14437 */

void __fastcall fcn.00014437(int param_1,uint32_t param_2)

{
    ulong uVar1;
    char cVar2;
    uint32_t uVar3;
    uint uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int iStack_1c;
    int iStack_18;
    uint32_t uStack_14;
    uint uStack_10;
    int iStack_c;
    uint8_t uStack_8;
    
    if (*(param_1 + 0x350) != 0 || *(param_1 + 0x354) != 0) {
        uVar6 = 0;
        iStack_18 = param_1;
        uStack_14 = param_2;
        fcn.00011a89(0,&iStack_1c);
        fcn.00011d2b();
        if (iStack_1c == 0) {
            uVar1 = rdmsr(0x17);
            uStack_8 = uVar1 >> 0x32 & 7;
            fcn.0001185f(0,0,0);
            if ((((param_2 == *(param_1 + 0xc)) ||
                 (iVar5 = *(param_1 + 0xc) * 0x90 + *(param_1 + 0x330), *(iVar5 + 0x74) != iStack_c)) ||
                (*(iVar5 + 0x78) != uStack_8)) || (*(iVar5 + 0x80) == 0 && *(iVar5 + 0x84) == 0)) {
                uVar3 = *(param_1 + 0x348);
                uVar7 = 0;
                uVar8 = *(param_1 + 0x350) + uVar3;
                do {
                    cVar2 = fcn.0001569d(uVar7,&iStack_c,1,1);
                    if (cVar2 == '\0') {
                        iVar5 = 0x400;
                    }
                    else {
                        uVar7 = *(uVar3 + 4);
                        iVar5 = 0x800;
                        uVar6 = uVar3;
                        if (*(uVar3 + 0x1c) != 0) {
                            iVar5 = *(uVar3 + 0x20);
                        }
                    }
                    uVar3 = uVar3 + iVar5;
                } while (uVar3 < uVar8);
                param_2 = uStack_14;
                param_1 = iStack_18;
            }
            else {
                uVar6 = *(iVar5 + 0x80);
                uVar7 = *(uVar6 + 4);
            }
            if (uVar7 != 0) {
                iVar5 = *(param_1 + 0x330);
                *(iVar5 + 0x80 + param_2 * 0x90) = uVar6;
                *(iVar5 + 0x84 + param_2 * 0x90) = 0;
            }
            uVar3 = fcn.00015624();
            if (uVar3 < uVar7) {
                uStack_10 = 0;
                uStack_14 = uVar6 + 0x30;
                wrmsr(0x79,uStack_14);
            }
            uVar4 = fcn.00015624();
            *(*(param_1 + 0x330) + 0x88 + param_2 * 0x90) = uVar4;
        }
    }
    return;
}


/* fcn.00015a94 @ 0x15a94 */

ulong * __fastcall fcn.00015a94(ulong *param_1)

{
    char cVar1;
    uint32_t uVar2;
    ulong *puVar3;
    int32_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    cVar1 = fcn.00015b19();
    if (cVar1 != '\0') {
        fcn.000158c2();
        uVar2 = 0;
        puVar3 = param_1;
        do {
            wrmsr(*(uVar2 + 0x66b0),*puVar3);
            uVar2 = uVar2 + 0xc;
            puVar3 = puVar3 + 1;
        } while (uVar2 < 0x84);
        fcn.000159e9();
        wrmsr(0x2ff,param_1[0x4b]);
        fcn.0001592d();
    }
    return param_1;
}


/* fcn.00015b19 @ 0x15b19 */

uint32_t fcn.00015b19(void)

{
    ulong uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    uVar2 = fcn.0001185f(0,0,&var_4h);
    if ((var_4h & 0x1000U) == 0) {
        uVar2 = uVar2 & 0xffffff00;
    }
    else {
        uVar1 = rdmsr(0xfe);
        uVar2 = CONCAT31(uVar1 >> 8,(uVar1 >> 8 & 1) != 0 && uVar1 != '\0');
    }
    return uVar2;
}


/* fcn.000158c2 @ 0x158c2 */

uint64_t __fastcall fcn.000158c2(uint *param_1)

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


/* fcn.000159e9 @ 0x159e9 */

ulong __fastcall fcn.000159e9(ulong *param_1)

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


/* fcn.0001592d @ 0x1592d */

void fcn.0001592d(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return;
}


/* fcn.000132c1 @ 0x132c1 */

void __fastcall fcn.000132c1(int param_1,char param_2,int param_3,uint param_4,uint param_5,char param_6)

{
    bool bVar1;
    uchar uVar2;
    int iVar3;
    int extraout_ECX;
    int extraout_ECX_00;
    uint32_t uVar4;
    uint32_t uStack_c;
    int iStack_8;
    
    bVar1 = false;
    *(param_1 + 0x58) = 0;
    if ((*(param_1 + 0x358) != '\0') || (iStack_8 = param_1, *(param_1 + 0x90) != 3)) {
        bVar1 = true;
        fcn.00013222();
        if (*(param_1 + 0x35c) == -1) {
            *(param_1 + 0x35c) = 0;
        }
        fcn.00013064();
        fcn.0001279d();
        iStack_8 = extraout_ECX;
    }
    if (*(param_1 + 0x328) == '\x02') {
        iVar3 = fcn.000147ca();
        iStack_8 = 7;
        uVar2 = (**(iVar3 + 4))(0x5bb0,7);
        *(param_1 + 0x329) = uVar2;
    }
    if (param_2 == '\0') {
        iVar3 = param_3 * 0x90 + *(param_1 + 0x330);
        *(iVar3 + 8) = param_4;
        *(iVar3 + 0xc) = param_5;
        fcn.0001277e();
        **(iVar3 + 4) = 0x50415453;
        if (bVar1) {
            if (*(param_1 + 0x359) != '\0') {
                fcn.00014413();
            }
            if ((*(param_1 + 0x35a) == '\0') || (*(param_1 + 0x90) == 1)) {
                fcn.00011b26();
            }
        }
        fcn.00013045();
        goto code_r0x000134c4;
    }
    uStack_c = 0;
    if (*(param_1 + 8) != 0) {
        iStack_8 = 0;
        do {
            if ((uStack_c != *(param_1 + 0xc)) &&
               ((iVar3 = *(param_1 + 0x330) + iStack_8, *(iVar3 + 0x14) != 4 || (param_6 != '\0')))) {
                *(iVar3 + 8) = param_4;
                *(iVar3 + 0xc) = param_5;
                fcn.0001277e();
                if (*(param_1 + 0x90) != 1) {
                    **(iVar3 + 4) = 0x50415453;
                }
            }
            uStack_c = uStack_c + 1;
            iStack_8 = iStack_8 + 0x90;
        } while (uStack_c < *(param_1 + 8));
    }
    uVar4 = 0;
    if (bVar1) {
        if (*(param_1 + 0x359) != '\0') {
            fcn.00014413();
        }
        if ((*(param_1 + 0x35a) == '\0') || (*(param_1 + 0x90) == 1)) {
            fcn.00011b82();
            iStack_8 = extraout_ECX_00;
            goto code_r0x000133ed;
        }
    }
    else {
code_r0x000133ed:
        if (*(param_1 + 0x90) == 1) {
            fcn.000147e7(iStack_8);
            fcn.0001365c();
            do {
            } while (*(*(param_1 + 0x334) + 0x3c) != 0);
            goto code_r0x000134c4;
        }
    }
    if (*(param_1 + 8) != 0) {
        do {
            if (uVar4 != *(param_1 + 0xc)) {
                fcn.00013045();
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < *(param_1 + 8));
    }
code_r0x000134c4:
    if (((bVar1) && (*(param_1 + 0x35b) == '\0')) && (*(param_1 + 0x54) != 0)) {
        fcn.00011600(*(param_1 + 0x54));
    }
    *(param_1 + 0x358) = *(param_1 + 0x328) == '\x01';
    return;
}


/* fcn.00011a4b @ 0x11a4b */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

uint32_t __fastcall fcn.00011a4b(uint param_1)

{
    uint64_t uVar1;
    uint32_t uVar2;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar2 = fcn.000118bd(param_1,param_1);
    if (uVar2 != '\0') {
        uVar2 = fcn.00011a25();
        if (uVar2 == 1) {
            uVar1 = rdmsr(0x1b);
            uVar2 = uVar1 | 0x400;
            wrmsr(0x1b,uVar1 | 0x400);
        }
    }
    return uVar2;
}


/* fcn.0001277e @ 0x1277e */

void __fastcall fcn.0001277e(uint *param_1,uint param_2)

{
    fcn.00015807();
    param_1[5] = param_2;
    *param_1 = 1;
    return;
}


/* fcn.00012a35 @ 0x12a35 */

void __fastcall fcn.00012a35(int *param_1)

{
    uint32_t uVar1;
    uchar *puVar2;
    uint uVar3;
    uint32_t uVar4;
    int iVar5;
    uint32_t uVar6;
    int *piVar7;
    uint32_t *puVar8;
    uchar *puVar9;
    uint32_t uVar10;
    uchar *puVar11;
    uint32_t uVar12;
    uint32_t uStack_2c;
    int iStack_28;
    uchar auStack_14 [20];
    
    iVar5 = param_1[2];
    puVar2 = *param_1;
    uVar10 = iVar5 - 1;
    if (iVar5 != 1) {
        if (iVar5 != 1) {
            iStack_28 = 0;
            uVar4 = 0;
            puVar9 = puVar2;
            do {
                uVar12 = *(puVar9 + 4);
                uVar1 = uVar4 + 1;
                if (uVar1 <= uVar10) {
                    puVar8 = puVar9 + 0x18;
                    uVar6 = uVar1;
                    uStack_2c = uVar4;
                    do {
                        if (*puVar8 < uVar12) {
                            uVar12 = *puVar8;
                            uStack_2c = uVar6;
                        }
                        uVar6 = uVar6 + 1;
                        puVar8 = puVar8 + 5;
                    } while (uVar6 <= uVar10);
                    if (uStack_2c != uVar4) {
                        puVar11 = puVar2 + uStack_2c * 0x14;
                        if (auStack_14 != puVar11) {
                            section..text(auStack_14,puVar11,0x14);
                        }
                        if (puVar11 != puVar9) {
                            section..text(puVar11,puVar9,0x14);
                        }
                        if (puVar9 != auStack_14) {
                            section..text(puVar9,auStack_14,0x14);
                        }
                        iVar5 = param_1[0xcc];
                        uVar3 = *(uStack_2c * 0x90 + 4 + iVar5);
                        *(uStack_2c * 0x90 + 4 + iVar5) = *(iStack_28 + 4 + iVar5);
                        *(iStack_28 + 4 + param_1[0xcc]) = uVar3;
                    }
                }
                iStack_28 = iStack_28 + 0x90;
                puVar9 = puVar9 + 0x14;
                uVar4 = uVar1;
            } while (uVar1 < uVar10);
        }
        uVar10 = 0;
        iVar5 = fcn.00011a89();
        if (param_1[2] != 0) {
            piVar7 = puVar2 + 4;
            do {
                if (*piVar7 == iVar5) {
                    param_1[3] = uVar10;
                    return;
                }
                uVar10 = uVar10 + 1;
                piVar7 = piVar7 + 5;
            } while (uVar10 < param_1[2]);
        }
    }
    return;
}


/* fcn.00011bdb @ 0x11bdb */

uint32_t fcn.00011bdb(void)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    fcn.0001191f();
    fcn.00011952();
    fcn.0001191f();
    fcn.00011952();
    uVar3 = fcn.0001191f();
    uVar3 = uVar3 & 0xfffe5cff | 0x400;
    iVar1 = fcn.00011a25();
    if (iVar1 == 1) {
        uVar2 = fcn.000118f1();
        *(uVar2 + 0x360) = uVar3;
        uVar3 = uVar2;
    }
    else {
        wrmsr(0x836,uVar3);
    }
    return uVar3;
}


/* fcn.00011c38 @ 0x11c38 */

void fcn.00011c38(void)

{
    fcn.0001191f();
    fcn.00011952();
    fcn.0001191f();
    fcn.00011952();
    return;
}


/* fcn.00011c70 @ 0x11c70 */

void __fastcall fcn.00011c70(int param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.0001191f();
    if ((uVar1 & 0x100) == 0) {
        fcn.00011952();
    }
    fcn.00011952();
    if (param_1 != 0) {
        fcn.0001485d();
        fcn.0001191f();
        fcn.00011952();
    }
    fcn.0001191f();
    fcn.00011952();
    return;
}


/* fcn.00011d0d @ 0x11d0d */

void __fastcall fcn.00011d0d(uint param_1)

{
    fcn.0001191f(param_1);
    fcn.00011952();
    return;
}


/* fcn.000128b1 @ 0x128b1 */

//WARNING: Variable defined which should be unmapped: var_1h

void __fastcall fcn.000128b1(int32_t *param_1,char param_2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_1h;
    
    var_8h = param_1[2];
    var_ch = *param_1;
    var_1h._0_1_ = param_2;
    if (param_2 != '\0') {
        fcn.0001185f(0,0,&var_10h);
    }
    GlobalDescriptorTableRegister(param_1[9]);
    var_ch = param_1 + 0x2a;
    InterruptDescriptorTableRegister(*var_ch);
    uVar1 = *(param_1 + 0xc);
    if ((uVar1 != 0) && (uVar1 < *(param_1 + 9))) {
        iVar3 = uVar1 + *(param_1 + 0x26);
        uVar2 = *(iVar3 + 4);
        if ((uVar2 & 0x8000) != 0) {
            *(iVar3 + 4) = uVar2 & 0xfffffdff;
            fcn.00010c30(param_1[0xc]);
        }
    }
    return;
}


/* fcn.00012c6c @ 0x12c6c */

void __fastcall fcn.00012c6c(int *param_1,int param_2,int param_3,uint param_4,uint param_5)

{
    int iVar1;
    ulong uVar2;
    char cVar3;
    uint uVar4;
    uint *puVar5;
    uint unaff_ESI;
    int iVar6;
    uint unaff_EDI;
    
    iVar6 = param_2 * 0x14;
    iVar1 = *param_1;
    uVar4 = fcn.00011a89();
    *(iVar6 + iVar1) = uVar4;
    uVar4 = fcn.00011afa();
    *(iVar6 + 4 + iVar1) = uVar4;
    *(iVar6 + 0xc + iVar1) = param_4;
    *(iVar6 + 8 + iVar1) = param_3;
    *(iVar6 + 0x10 + iVar1) = param_5;
    param_2 = param_2 * 0x90;
    *(param_1[0xcc] + 0x4c + param_2) = 0;
    *(param_1[0xcc] + 0x10 + param_2) = param_3 == 0;
    cVar3 = fcn.000155e0();
    if (cVar3 == '\0') {
        uVar2 = rdmsr(0x17);
        *(param_1[0xcc] + 0x78 + param_2) = uVar2 >> 0x32 & 7;
    }
    fcn.0001185f(0,0,0);
    *(param_1[0xcc] + param_2) = 1;
    puVar5 = param_1[0xcc] + param_2;
    fcn.00015807(unaff_EDI,unaff_ESI,puVar5);
    puVar5[5] = 0;
    *puVar5 = 1;
    return;
}


/* fcn.0001480d @ 0x1480d */

//WARNING: Removing unreachable block (ram,0x0001481f)

void fcn.0001480d(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.0001282d @ 0x1282d */

void __fastcall fcn.0001282d(uint *param_1)

{
    uint uVar1;
    ushort uVar2;
    uint in_DR0;
    uint in_DR1;
    uint in_DR2;
    uint in_DR3;
    uint in_DR6;
    uint in_DR7;
    uint in_CR0;
    uint in_CR3;
    uint in_CR4;
    int32_t var_8h;
    int32_t var_4h;
    
    *param_1 = in_CR0;
    param_1[1] = in_CR3;
    param_1[2] = in_CR4;
    var_8h = param_1;
    var_4h = param_1;
    fcn.0001185f(0,0,&var_8h);
    if ((var_8h & 4U) != 0) {
        param_1[3] = in_DR0;
        param_1[4] = in_DR1;
        param_1[5] = in_DR2;
        param_1[6] = in_DR3;
        param_1[7] = in_DR6;
        param_1[8] = in_DR7;
    }
    uVar1 = GlobalDescriptorTableRegister();
    param_1[9] = uVar1;
    uVar1 = InterruptDescriptorTableRegister();
    *(param_1 + 0x2a) = uVar1;
    uVar2 = TaskRegister();
    *(param_1 + 0xc) = uVar2;
    return;
}


/* fcn.0001431b @ 0x1431b */

void __fastcall fcn.0001431b(uint param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    code *pcVar6;
    int iStack_14;
    uint16_t uStack_10;
    int iStack_e;
    uint16_t uStack_8;
    int iStack_6;
    
    fcn.00012b91();
    GlobalDescriptorTableRegister();
    uVar3 = 0;
    uVar4 = 0;
    uVar2 = uStack_10 + 1 >> 3;
    if (uVar2 != 0) {
        puVar5 = iStack_e + 4;
        do {
            if (((*puVar5 & 0x600000) == 0) && (0x800 < (*puVar5 & 0xf00))) break;
            puVar5 = puVar5 + 2;
            uVar4 = uVar4 + 1;
        } while ((uVar4 & 0xffff) < uVar2);
    }
    GlobalDescriptorTableRegister();
    uVar2 = uStack_8 + 1 >> 3;
    if (uVar2 != 0) {
        puVar5 = iStack_6 + 4;
        do {
            uVar1 = *puVar5;
            if ((((uVar1 & 0x200000) == 0) && ((uVar1 & 0x400000) != 0)) && (0x800 < (uVar1 & 0xf00))) break;
            puVar5 = puVar5 + 2;
            uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffff) < uVar2);
    }
    if (*(param_2 + 0x4c) == 0) {
        pcVar6 = *(*(param_2 + 0x334) + 0x18) + *(param_2 + 0x38);
    }
    else {
        pcVar6 = *(param_2 + 0x3c) + *(param_2 + 0x4c);
    }
    (*pcVar6)(*(*(param_2 + 0x334) + 0x18),(uVar4 & 0x1fff) << 3,(uVar3 & 0x1fff) << 3,
              *(param_2 + 0x360) + iStack_14 * -0x80);
    return;
}


/* fcn.0001244b @ 0x1244b */

uint32_t __fastcall fcn.0001244b(int param_1)

{
    char cVar1;
    int16_t *piVar2;
    uint32_t uVar3;
    int16_t *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    
    uVar8 = param_1 + 0xfffU & 0xfffff000;
    piVar2 = fcn.0001175f();
    while( true ) {
        if (*piVar2 == -1) {
            return 0xffffffff;
        }
        if ((((*piVar2 == 3) && (*(piVar2 + 0x12) == 0)) && (*(piVar2 + 0x10) < 0x100000)) &&
           ((*(piVar2 + 0xc) == 0 && ((*(piVar2 + 0xe) & 0x380) == 0)))) break;
code_r0x000125c9:
        piVar2 = piVar2 + piVar2[1];
    }
    uVar10 = *(piVar2 + 0x14) + *(piVar2 + 0x10);
    uVar7 = *(piVar2 + 0x16) + *(piVar2 + 0x12) + CARRY4(*(piVar2 + 0x14),*(piVar2 + 0x10));
    cVar1 = fcn.000142d8();
    if (((cVar1 == '\0') || (uVar7 < *0x5da4)) || ((uVar7 <= *0x5da4 && (uVar10 <= *0x5da0)))) {
        if ((uVar7 != 0) || (uVar7 = 0, 0x100000 < uVar10)) {
            uVar10 = 0x100000;
            uVar7 = 0;
        }
    }
    else {
        uVar7 = *0x5da4;
        uVar10 = *0x5da0;
    }
    if (uVar7 == 0) goto code_r0x000125b6;
code_r0x00012503:
    uVar5 = uVar10 - uVar8;
    uVar3 = uVar7 - (uVar10 < uVar8);
    uVar9 = uVar5 & 0xfffff000;
    if ((*(piVar2 + 0x12) <= uVar3) && ((*(piVar2 + 0x12) < uVar3 || (*(piVar2 + 0x10) <= uVar9)))) {
        piVar4 = fcn.0001175f();
        do {
            if (*piVar4 == -1) {
                cVar1 = fcn.000142d8();
                if (cVar1 != '\0') {
                    *0x5da0 = uVar9;
                    *0x5da4 = uVar3;
                }
                return uVar9;
            }
            if (*piVar4 == 2) {
                uVar6 = *(piVar4 + 0x12) + *(piVar4 + 0xe) + CARRY4(*(piVar4 + 0x10),*(piVar4 + 0xc));
                if (((uVar3 <= uVar6) && ((uVar3 < uVar6 || (uVar9 < *(piVar4 + 0x10) + *(piVar4 + 0xc))))) &&
                   ((*(piVar4 + 0xe) < uVar7 || ((*(piVar4 + 0xe) <= uVar7 && (*(piVar4 + 0xc) < uVar10))))))
                goto code_r0x000125a2;
            }
            piVar4 = piVar4 + piVar4[1];
        } while( true );
    }
    goto code_r0x000125c9;
code_r0x000125a2:
    uVar7 = uVar3;
    uVar10 = uVar5;
    if (uVar3 != 0) goto code_r0x00012503;
code_r0x000125b6:
    if (uVar10 <= uVar8) goto code_r0x000125c9;
    goto code_r0x00012503;
}


/* fcn.000147e7 @ 0x147e7 */

void fcn.000147e7(void)

{
    int iVar1;
    
    iVar1 = fcn.000147ca();
    (**(iVar1 + 0xc))(0x5bb0,2);
    return;
}


/* fcn.00013222 @ 0x13222 */

void __fastcall fcn.00013222(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    
    if (*(param_1 + 0x48) == -1) {
        iVar2 = fcn.0001244b();
        *(param_1 + 0x4c) = 0;
        *(param_1 + 0x334) = *(param_1 + 0x34) + *(param_1 + 0x24) + iVar2;
        *(param_1 + 0x48) = iVar2;
        cVar1 = fcn.000142d8();
        if (cVar1 != '\0') {
            cVar1 = fcn.000142d8();
            if (cVar1 == '\0') {
                fcn.000147e7();
                uVar3 = fcn.0001244b();
                *(param_1 + 0x360) = uVar3;
                if (*(param_1 + 0x48) <= uVar3) {
                    fcn.0001480d();
                }
            }
        }
    }
    if (*(param_1 + 0x54) != 0) {
        fcn.00011600(*(param_1 + 0x54));
    }
    iVar2 = *(param_1 + 0x34) + *(param_1 + 0x24);
    if (iVar2 != 0) {
        fcn.00011600(iVar2);
    }
    return;
}


/* fcn.00013064 @ 0x13064 */

void __fastcall fcn.00013064(uint *param_1)

{
    uint *puVar1;
    uint64_t uVar2;
    int32_t iVar3;
    int32_t iVar4;
    int iVar5;
    uint uVar6;
    int iVar7;
    uint16_t in_CS;
    uint16_t in_DS;
    uint32_t in_CR0;
    uint in_CR3;
    uint32_t in_CR4;
    int32_t var_18h;
    uint32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    puVar1 = param_1[0xcd];
    *puVar1 = param_1[5];
    puVar1[1] = param_1[6];
    puVar1[6] = param_1[0x12];
    puVar1[7] = param_1[8];
    puVar1[9] = in_CS;
    puVar1[10] = in_DS;
    puVar1[0xc] = in_CR3;
    puVar1[2] = 0x2d1b;
    puVar1[8] = 0;
    puVar1[0xf] = 0;
    puVar1[0xd] = param_1[0x24];
    puVar1[0xe] = *param_1;
    puVar1[0x10] = param_1;
    uVar6 = 0;
    var_10h = param_1;
    var_ch = puVar1;
    if ((in_CR0 & 0x80000000) != 0) {
        fcn.0001185f(0,0,0);
        uVar6 = 0;
        if (0x80000000 < var_4h) {
            fcn.0001185f(0,0,&var_8h);
            uVar6 = 0;
            if ((var_8h & 0x100000U) != 0) {
                uVar2 = rdmsr(0xc0000080);
                uVar6 = 0;
                if ((uVar2 & 0x800) != 0) {
                    uVar6 = 1;
                }
            }
        }
    }
    iVar4 = var_ch;
    iVar3 = var_10h;
    puVar1[0xb] = uVar6;
    puVar1[0x11] = 0xcc0;
    *(var_ch + 0x54) = in_CR4 >> 0xc & 1;
    *(var_ch + 0x55) = *(var_10h + 0x359);
    *(var_ch + 0x56) = *(var_10h + 0x35a);
    *(var_ch + 0x57) = *(var_10h + 0x368);
    if ((*(var_ch + 0x56) != '\0') && (fcn.0001185f(0,0,0), 10 < var_14h)) {
        fcn.0001185f(&var_18h,0,0);
        *(iVar4 + 0x5b) = var_18h != 0;
    }
    uVar6 = GlobalDescriptorTableRegister();
    *(iVar4 + 0xc) = uVar6;
    var_10h = iVar4 + 0x12;
    uVar6 = InterruptDescriptorTableRegister();
    *var_10h = uVar6;
    iVar7 = *(iVar4 + 0xe);
    iVar5 = *(iVar4 + 0xc) + 1;
    while (((*(iVar7 + 4) & 0x200000) != 0 || ((*(iVar7 + 4) & 0xf00) < 0x800))) {
        iVar7 = iVar7 + 8;
        iVar5 = iVar5 + -8;
        if (iVar5 == 0) {
code_r0x000131d9:
            if (*(iVar3 + 0x4c) == 0) {
                iVar7 = *(iVar4 + 0x18) + *(iVar3 + 0x30);
            }
            else {
                iVar7 = (*(iVar3 + 0x34) + *(iVar3 + 0x24)) - *(iVar3 + 0x30);
                if (iVar7 != 0) {
                    fcn.00011600(iVar7);
                }
                iVar7 = *(iVar3 + 0x4c);
            }
            *(iVar4 + 0x48) = iVar7;
            *(iVar4 + 0x4e) = *(iVar4 + 0x1c) + (*(iVar4 + 0x48) - *(iVar3 + 0x30));
            *(iVar4 + 0x52) = *(iVar4 + 0x24);
            return;
        }
    }
    *(iVar4 + 0x4c) = iVar7 - *(iVar4 + 0xe);
    goto code_r0x000131d9;
}


/* fcn.0001279d @ 0x1279d */

void __fastcall fcn.0001279d(int param_1)

{
    uchar *puVar1;
    uint8_t *puVar2;
    uint8_t extraout_var;
    uint32_t uVar3;
    uint uVar4;
    
    puVar1 = param_1 + 0x340;
    puVar2 = param_1 + 0x341;
    if (param_1 + 0x33c != NULL) {
        uVar3 = fcn.0001191f();
        *(param_1 + 0x33c) = 1 << (((uVar3 >> 1 ^ uVar3) & 3 ^ uVar3 >> 1) + 1 & 7);
    }
    if ((puVar2 != NULL) || (puVar1 != NULL)) {
        uVar3 = fcn.0001191f();
        if (puVar2 != NULL) {
            *puVar2 = uVar3 >> 0x11 & 1;
        }
        if (puVar1 != NULL) {
            *puVar1 = uVar3;
        }
    }
    uVar4 = fcn.0001191f();
    *(param_1 + 0x338) = uVar4;
    fcn.0001191f();
    *(param_1 + 0x342) = ~extraout_var & 1;
    return;
}


/* fcn.00014413 @ 0x14413 */

void __fastcall fcn.00014413(uint32_t param_1)

{
    _pe_dos_header = 0x82eff2e;
    *0x4 = 0;
    *0x8 = 0;
    *0xa = param_1 >> 4;
    return;
}


/* fcn.00011b82 @ 0x11b82 */

void fcn.00011b82(void)

{
    char cVar1;
    
    fcn.00011996();
    fcn.0001557e();
    fcn.00011996();
    cVar1 = fcn.000155e0();
    if (cVar1 == '\0') {
        fcn.0001557e();
        fcn.00011996();
    }
    return;
}


/* fcn.0001365c @ 0x1365c */

uint __fastcall fcn.0001365c(int param_1,uint32_t param_2)

{
    char cVar1;
    ulong uVar2;
    
    *(param_1 + 0x80) = 0;
    *(param_1 + 0x84) = 0;
    uVar2 = fcn.00013501();
    *(param_1 + 0x70) = uVar2;
    do {
        if (param_2 <= *(param_1 + 0x58)) break;
        cVar1 = fcn.00013594(*(param_1 + 0x70),*(param_1 + 0x74));
    } while (cVar1 == '\0');
    return *(param_1 + 0x58);
}


/* fcn.00013045 @ 0x13045 */

void __fastcall fcn.00013045(int *param_1)

{
    int iVar1;
    
    do {
        iVar1 = 0x50415453;
        LOCK();
        if (*param_1 == 0x50415453) {
            *param_1 = 0x50415453;
        }
        else {
            iVar1 = *param_1;
        }
        UNLOCK();
    } while (iVar1 != 0);
    return;
}


/* fcn.00011b26 @ 0x11b26 */

void fcn.00011b26(void)

{
    char cVar1;
    
    fcn.00011996();
    fcn.0001557e();
    fcn.00011996();
    cVar1 = fcn.000155e0();
    if (cVar1 == '\0') {
        fcn.0001557e();
        fcn.00011996();
    }
    return;
}


/* fcn.0001488b @ 0x1488b */

void fcn.0001488b(uint param_1,uint param_2,uint param_3,uint param_4)

{
    fcn.00010c40(0xffffffff,0xffffffff,param_3,param_4,0);
    return;
}


/* fcn.00014905 @ 0x14905 */

ulong __cdecl fcn.00014905(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint64_t uVar1;
    
    uVar1 = arg_ch % arg_10h << 0x20 | arg_8h;
    if (arg_14h != 0) {
        *arg_14h = uVar1 % arg_10h;
    }
    return CONCAT44(arg_ch / arg_10h,uVar1 / arg_10h);
}


/* fcn.00010c40 @ 0x10c40 */

uint64_t fcn.00010c40(uint32_t param_1,uint32_t param_2,uint32_t param_3,int *param_4,int *param_5)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    int *piVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    bool bVar8;
    
    if (param_4 == NULL) {
        if (param_5 != NULL) {
            param_5[1] = 0;
            param_4 = param_5;
        }
        uVar1 = param_2 % param_3 << 0x20 | param_1;
        if (param_4 != NULL) {
            *param_4 = uVar1 % param_3;
        }
        return CONCAT44(param_2 / param_3,uVar1 / param_3);
    }
    uVar3 = param_1;
    piVar4 = param_4;
    uVar5 = param_2;
    uVar7 = param_3;
    do {
        uVar6 = uVar5 & 1;
        uVar5 = uVar5 >> 1;
        uVar3 = uVar3 >> 1 | (uVar6 != 0) << 0x1f;
        uVar7 = uVar7 >> 1 | piVar4 << 0x1f;
        piVar4 = piVar4 >> 1;
    } while (piVar4 != NULL);
    uVar1 = CONCAT44(uVar5,uVar3) / uVar7;
    uVar3 = uVar1;
    iVar2 = (uVar1 & 0xffffffff) * param_3;
    uVar7 = iVar2 >> 0x20;
    uVar5 = iVar2;
    uVar6 = uVar7 + param_4 * uVar3;
    if ((CARRY4(uVar7,param_4 * uVar3)) || ((param_2 <= uVar6 && ((param_2 < uVar6 || (param_1 < uVar5)))))) {
        uVar3 = uVar3 - 1;
        if (param_5 == NULL) goto code_r0x00010cb1;
        bVar8 = uVar5 < param_3;
        uVar5 = uVar5 - param_3;
        uVar6 = (uVar6 - param_4) - bVar8;
    }
    if (param_5 != NULL) {
        *param_5 = param_1 - uVar5;
        param_5[1] = (param_2 - uVar6) - (param_1 < uVar5);
    }
code_r0x00010cb1:
    return uVar3;
}


/* fcn.000155c2 @ 0x155c2 */

void __fastcall fcn.000155c2(uint *param_1,uint *param_2)

{
    if (param_1 != NULL) {
        *param_1 = 0;
        param_1[1] = 0;
    }
    if (param_2 != NULL) {
        *param_2 = 0xffffffff;
        param_2[1] = 0xffffffff;
    }
    fcn.000154e4(param_1);
    return;
}


/* fcn.00013501 @ 0x13501 */

//WARNING: Removing unreachable block (ram,0x0001353b)

uint __fastcall fcn.00013501(uint32_t param_1,uint *param_2)

{
    ulong uVar1;
    uint uVar2;
    uint extraout_ECX;
    uint64_t uVar3;
    uint64_t uVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = rdtsc();
    *param_2 = uVar1;
    param_2[1] = uVar1 >> 0x20;
    if (param_1 == 0) {
        uVar2 = 0;
    }
    else {
        uVar3 = fcn.000154e4();
        uVar4 = fcn.0001488b(extraout_ECX,extraout_ECX,param_1,0);
        if (uVar4 < uVar3) {
            uVar2 = fcn.00014872(uVar3,param_1 / 1000000,0);
        }
        else {
            uVar3 = fcn.00014872(uVar3,param_1,0);
            uVar2 = ((uVar3 >> 0x20) % 1000000 << 0x20 | uVar3 & 0xffffffff) / 1000000;
        }
    }
    return uVar2;
}


/* fcn.00013594 @ 0x13594 */

uint __fastcall fcn.00013594(uint32_t *param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4)

{
    ulong uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    bool bVar8;
    uint32_t uStack_10;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    if (param_3 != 0 || param_4 != 0) {
        fcn.000155c2();
        uVar7 = uStack_8 - uStack_10;
        iVar4 = (uStack_4 - uStack_c) - (uStack_8 < uStack_10);
        if ((iVar4 < 1) && (iVar4 < 0)) {
            bVar8 = uVar7 != 0;
            uVar7 = -uVar7;
            iVar4 = -(iVar4 + bVar8);
        }
        uVar1 = rdtsc();
        uVar5 = uVar1 >> 0x20;
        uVar2 = uVar1;
        uVar3 = uVar2 - *param_1;
        iVar6 = (uVar5 - param_1[1]) - (uVar2 < *param_1);
        if ((uStack_4 <= uStack_c) && ((uStack_c != uStack_4 || (uStack_8 < uStack_10)))) {
            bVar8 = uVar3 != 0;
            uVar3 = -uVar3;
            iVar6 = -(iVar6 + bVar8);
        }
        if ((iVar6 < 1) && (iVar6 < 0)) {
            bVar8 = CARRY4(uVar3,uVar7 + 1);
            uVar3 = uVar3 + uVar7 + 1;
            iVar6 = iVar6 + iVar4 + (0xfffffffe < uVar7) + bVar8;
        }
        uVar7 = *param_2;
        *param_2 = *param_2 + uVar3;
        param_2[1] = param_2[1] + iVar6 + CARRY4(uVar7,uVar3);
        *param_1 = uVar2;
        param_1[1] = uVar5;
        if ((param_4 <= param_2[1]) && ((param_2[1] != param_4 || (param_3 < *param_2)))) {
            return 1;
        }
    }
    return 0;
}


/* fcn.000136b4 @ 0x136b4 */

void __fastcall fcn.000136b4(uint param_1)

{
    int iVar1;
    
    iVar1 = fcn.00012413();
    *(iVar1 + 0x90) = 2;
    fcn.000132c1(param_1,0,0,1);
    do {
    } while (*(iVar1 + 0x58) == 0);
    *(iVar1 + 0x90) = 3;
    fcn.0001277e();
    return;
}


/* fcn.00010b2a @ 0x10b2a */

ulong __cdecl fcn.00010b2a(int32_t arg_24h)

{
    uint in_EAX;
    uint in_EDX;
    uint *in_stack_00000004;
    
    *in_stack_00000004 = 0x9c0;
    in_stack_00000004[1] = 0x41;
    in_stack_00000004[2] = 0x135;
    in_stack_00000004[3] = 0xaf7;
    in_stack_00000004[4] = 0x33;
    in_stack_00000004[5] = 0x41;
    in_stack_00000004[6] = 2;
    in_stack_00000004[7] = 0x135;
    in_stack_00000004[8] = 0xf4;
    in_stack_00000004[9] = 0;
    in_stack_00000004[10] = 0;
    return CONCAT44(in_EDX,in_EAX);
}


/* fcn.000129a1 @ 0x129a1 */

char __fastcall fcn.000129a1(uint32_t *param_1)

{
    char cVar1;
    char cVar2;
    int iVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar3 = fcn.000147ca();
    cVar1 = (**(iVar3 + 4))(0x5bb0,0x60008006);
    if (cVar1 == '\x02') {
        fcn.0001185f(0,&var_4h,0);
        if ((var_4h >> 3 & 1) == 0) {
            cVar1 = '\x01';
        }
        cVar2 = fcn.000142d8();
        if ((cVar2 != '\0') && (cVar2 = fcn.000142d8(), cVar2 == '\0')) {
            cVar1 = '\x01';
        }
        if (cVar1 == '\x02') {
            fcn.0001185f(&var_8h,0,0);
            *param_1 = var_8h;
            return '\x02';
        }
    }
    *param_1 = 4;
    return cVar1;
}


/* fcn.00012bc4 @ 0x12bc4 */

uint __fastcall fcn.00012bc4(uint *param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    uVar4 = 0;
    param_1[0x24] = 1;
    fcn.000132c1(0,0,0,1);
    uVar3 = param_1[0x16] + 1;
    param_1[0x24] = 3;
    param_1[2] = uVar3;
    if (uVar3 < 0x100) {
        puVar1 = *param_1;
        uVar2 = 0;
        if (uVar3 != 0) {
            do {
                if (0xfe < *puVar1) goto code_r0x00012c14;
                uVar2 = uVar2 + 1;
                puVar1 = puVar1 + 5;
            } while (uVar2 < uVar3);
        }
    }
    else {
code_r0x00012c14:
        fcn.000132c1(0,0x2b5b,0,1);
        do {
        } while (param_1[0x16] < param_1[2] - 1);
        fcn.00011a4b();
        if (param_1[2] != 0) {
            do {
                fcn.0001277e();
                uVar4 = uVar4 + 1;
            } while (uVar4 < param_1[2]);
        }
    }
    fcn.00012a35();
    return param_1[2];
}


/* fcn.000126a5 @ 0x126a5 */

uint __fastcall fcn.000126a5(int param_1)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    int iVar4;
    uint *puStack_c;
    uint uStack_8;
    uint uStack_4;
    
    iVar1 = fcn.00011689(0,&puStack_c);
    if (iVar1 < 0) {
        uVar2 = 0x80000003;
    }
    else {
        uVar2 = *(param_1 + 8);
        iVar1 = fcn.000115b1();
        if (iVar1 == 0) {
            uVar2 = 0x80000009;
        }
        else {
            uVar3 = 0;
            if (*(param_1 + 8) != 0) {
                iVar4 = 0;
                do {
                    iVar4 = iVar4 + 0x90;
                    *(iVar1 + uVar3 * 8) = *(*(param_1 + 0x330) + -0x1c + iVar4);
                    *(iVar1 + 4 + uVar3 * 8) = *(*(param_1 + 0x330) + -0x18 + iVar4);
                    uVar3 = uVar3 + 1;
                } while (uVar3 < *(param_1 + 8));
            }
            iVar1 = (**puStack_c)(puStack_c,uVar2,iVar1,&uStack_4,&uStack_8);
            if (iVar1 < 0) {
                uVar2 = 0x8000000e;
            }
            else {
                *(param_1 + 0x348) = uStack_8;
                *(param_1 + 0x350) = uStack_4;
                uVar2 = 0;
                *(param_1 + 0x34c) = 0;
                *(param_1 + 0x354) = 0;
            }
        }
    }
    return uVar2;
}


/* fcn.00014616 @ 0x14616 */

void __fastcall fcn.00014616(int param_1)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    int arg_8h;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong uVar8;
    uint32_t uStack_10;
    int iStack_c;
    
    iVar2 = fcn.000147ca();
    uVar8 = (**(iVar2 + 0x10))(0x5bb0,5);
    *(param_1 + 0x348) = uVar8;
    iVar2 = fcn.000147ca();
    uVar8 = (**(iVar2 + 0x10))(0x5bb0,6);
    uVar7 = *(param_1 + 0x348);
    uVar3 = uVar8 + uVar7;
    *(param_1 + 0x350) = uVar8;
    if ((uVar7 != 0) && (uVar7 != uVar3)) {
        uVar6 = 0;
        uStack_10 = 8;
        iStack_c = 0;
        iVar2 = fcn.0001157e();
        if ((iVar2 != 0) && (arg_8h = fcn.00011544(), arg_8h != 0)) {
            uVar5 = 0;
            if (*(param_1 + 8) != 0) {
                iVar4 = 0;
                do {
                    *(arg_8h + 4 + uVar5 * 8) = *(iVar4 + 0x78 + *(param_1 + 0x330));
                    *(arg_8h + uVar5 * 8) = *(iVar4 + 0x74 + *(param_1 + 0x330));
                    uVar5 = uVar5 + 1;
                    iVar4 = iVar4 + 0x90;
                } while (uVar5 < *(param_1 + 8));
            }
            do {
                cVar1 = fcn.0001569d(0,arg_8h,*(param_1 + 8),0);
                if (cVar1 == '\0') {
                    iVar4 = 0x400;
                }
                else {
                    uVar6 = uVar6 + 1;
                    if (uStack_10 < uVar6) {
                        if ((0xfffffff < uStack_10) || (iVar2 = fcn.000115c9(uStack_10 << 4,iVar2), iVar2 == 0))
                        goto code_r0x0001479c;
                        uStack_10 = uStack_10 * 2;
                    }
                    iVar4 = 0x800;
                    if (*(uVar7 + 0x1c) != 0) {
                        iVar4 = *(uVar7 + 0x20);
                    }
                    iStack_c = iStack_c + iVar4;
                    *(iVar2 + -8 + uVar6 * 8) = uVar7;
                    *(iVar2 + -4 + uVar6 * 8) = iVar4;
                }
                uVar7 = uVar7 + iVar4;
            } while (uVar7 < uVar3);
            if (uVar6 != 0) {
                fcn.00014598(uVar6,iStack_c);
            }
code_r0x0001479c:
            fcn.00011707(arg_8h,0);
        }
    }
    return;
}


/* fcn.00015a52 @ 0x15a52 */

int __fastcall fcn.00015a52(int param_1)

{
    ulong uVar1;
    char cVar2;
    
    cVar2 = fcn.00015b19();
    if (cVar2 != '\0') {
        fcn.0001596d();
        rdmsr(0xfe);
        fcn.000159a1(param_1 + 0x58);
        uVar1 = rdmsr(0x2ff);
        *(param_1 + 600) = uVar1;
        *(param_1 + 0x25c) = uVar1 >> 0x20;
    }
    return param_1;
}


/* fcn.0001596d @ 0x1596d */

uint * __fastcall fcn.0001596d(uint *param_1)

{
    ulong uVar1;
    uint32_t uVar2;
    uint *puVar3;
    
    uVar2 = 0;
    puVar3 = param_1;
    do {
        uVar1 = rdmsr(*(uVar2 + 0x66b0));
        uVar2 = uVar2 + 0xc;
        *puVar3 = uVar1;
        puVar3[1] = uVar1 >> 0x20;
        puVar3 = puVar3 + 2;
    } while (uVar2 < 0x84);
    return param_1;
}


/* fcn.000159a1 @ 0x159a1 */

int32_t __cdecl fcn.000159a1(int32_t arg_8h)

{
    ulong uVar1;
    int in_EDX;
    int iVar2;
    uint *puVar3;
    int32_t var_4h;
    
    if (in_EDX != 0) {
        iVar2 = 0x201;
        puVar3 = arg_8h;
        do {
            uVar1 = rdmsr(iVar2 + -1);
            *puVar3 = uVar1;
            puVar3[1] = uVar1 >> 0x20;
            uVar1 = rdmsr(iVar2);
            iVar2 = iVar2 + 2;
            puVar3[2] = uVar1;
            puVar3[3] = uVar1 >> 0x20;
            puVar3 = puVar3 + 4;
            in_EDX = in_EDX + -1;
        } while (in_EDX != 0);
    }
    return arg_8h;
}


/* fcn.000125e6 @ 0x125e6 */

void __fastcall fcn.000125e6(int param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int iVar5;
    uint *puVar6;
    int *piVar7;
    int iVar8;
    uint32_t uVar9;
    
    iVar1 = *(param_1 + 8);
    puVar6 = fcn.0001157e();
    if (puVar6 != NULL) {
        *puVar6 = *(param_1 + 0x348);
        puVar6[1] = *(param_1 + 0x34c);
        puVar6[2] = *(param_1 + 0x350);
        puVar6[3] = *(param_1 + 0x354);
        uVar9 = 0;
        puVar6[4] = *(param_1 + 8);
        if (*(param_1 + 8) != 0) {
            iVar8 = 0;
            piVar7 = puVar6 + 6;
            do {
                uVar2 = *(*(param_1 + 0x330) + 0x80 + iVar8);
                iVar3 = *(*(param_1 + 0x330) + 0x84 + iVar8);
                if (uVar2 == 0 && iVar3 == 0) {
                    *piVar7 = -1;
                    piVar7[1] = -1;
                }
                else {
                    uVar4 = *(param_1 + 0x348);
                    iVar5 = *(param_1 + 0x34c);
                    *piVar7 = uVar2 - *(param_1 + 0x348);
                    piVar7[1] = (iVar3 - iVar5) - (uVar2 < uVar4);
                }
                uVar9 = uVar9 + 1;
                piVar7 = piVar7 + 2;
                iVar8 = iVar8 + 0x90;
            } while (uVar9 < *(param_1 + 8));
        }
        fcn.0001181c(iVar1 * 8 + 0x18);
    }
    return;
}


/* fcn.00013fd2 @ 0x13fd2 */

uint __fastcall fcn.00013fd2(uint32_t *param_1)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    int *piVar4;
    uint32_t uVar5;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    piVar4 = fcn.00012413();
    iVar1 = *piVar4;
    uVar2 = piVar4[2];
    iVar3 = fcn.00011afa();
    uVar5 = 0;
    if (uVar2 != 0) {
        piVar4 = iVar1 + 4;
        do {
            if (*piVar4 == iVar3) {
                *param_1 = uVar5;
                return 0;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 5;
        } while (uVar5 < uVar2);
    }
    return 0x8000000e;
}


/* fcn.00011f57 @ 0x11f57 */

void __fastcall
fcn.00011f57(uint32_t param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5,uint param_6,uint param_7)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t *puVar3;
    uint32_t uStack_44;
    uint32_t uStack_40;
    uint32_t auStack_3c [11];
    uint *puStack_10;
    uint *puStack_c;
    uint *puStack_8;
    uint uStack_4;
    
    puVar3 = auStack_3c;
    for (iVar1 = 7; puVar3 = puVar3 + 1, iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = 0;
    }
    fcn.0001185f(0,0,0);
    if (auStack_3c[0] < 0x1f) {
        if (param_3 != NULL) {
            *param_3 = 0;
        }
        if (param_4 != NULL) {
            *param_4 = 0;
        }
        if (param_5 != NULL) {
            *param_5 = 0;
        }
        fcn.00011d2b(param_6,param_7);
    }
    else {
        while( true ) {
            fcn.00014823(&uStack_40,0,&uStack_44,0);
            if (uStack_44 >> 8 == '\0') break;
            auStack_3c[(uStack_44 >> 8 & 0xff) + 1] = uStack_40 & 0x1f;
        }
        uVar2 = 2;
        do {
            if (auStack_3c[uVar2 + 1] == 0) {
                auStack_3c[uVar2 + 1] = auStack_3c[uVar2];
            }
            uVar2 = uVar2 + 1;
        } while (uVar2 < 7);
        puStack_8 = param_3;
        puStack_c = param_4;
        puStack_10 = param_5;
        auStack_3c[10] = param_6;
        uStack_4 = param_2;
        auStack_3c[9] = param_7;
        auStack_3c[7] = 0x20;
        uVar2 = 4;
        do {
            puVar3 = *(auStack_3c + uVar2 + 0x20);
            if (puVar3 != NULL) {
                *puVar3 = (1 << (*(auStack_3c + uVar2 + 4) - *(auStack_3c + uVar2) & 0x1fU)) - 1U &
                          param_1 >> (*(auStack_3c + uVar2) & 0x1f);
            }
            uVar2 = uVar2 + 4;
        } while (uVar2 < 0x19);
    }
    return;
}


/* fcn.00013773 @ 0x13773 */

uint fcn.00013773(void)

{
    char cVar1;
    int iVar2;
    char *pcVar3;
    uint uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iVar8;
    
    iVar2 = fcn.00012413();
    uVar7 = 0;
    if (*(iVar2 + 8) != 0) {
        iVar8 = 0;
        do {
            iVar5 = *(iVar2 + 0x330) + iVar8;
            if ((*(iVar5 + 0x4c) != '\0') && (*(iVar5 + 0x14) == 3)) {
                *(iVar2 + 0x5c) = *(iVar2 + 0x5c) + -1;
                *(iVar8 + 0x4c + *(iVar2 + 0x330)) = 0;
                fcn.0001277e();
                if (*(iVar2 + 0x60) != '\0') {
                    iVar5 = fcn.00012413();
                    uVar6 = 0;
                    if (*(iVar5 + 8) != 0) {
                        pcVar3 = *(iVar5 + 0x330) + 0x4c;
                        do {
                            if (*pcVar3 != '\0') {
                                fcn.000132c1(uVar6,*(iVar2 + 100),*(iVar2 + 0x68),1);
                                break;
                            }
                            uVar6 = uVar6 + 1;
                            pcVar3 = pcVar3 + 0x90;
                        } while (uVar6 < *(iVar5 + 8));
                    }
                }
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 0x90;
        } while (uVar7 < *(iVar2 + 8));
    }
    if (*(iVar2 + 0x5c) == 0) {
        uVar4 = 0;
    }
    else {
        cVar1 = fcn.00013594(*(iVar2 + 0x70),*(iVar2 + 0x74));
        if (cVar1 == '\0') {
            uVar4 = 0x80000006;
        }
        else {
            if (*(iVar2 + 0x8c) != 0) {
                uVar4 = fcn.0001157e();
                **(iVar2 + 0x8c) = uVar4;
            }
            iVar8 = 0;
            uVar7 = 0;
            if (*(iVar2 + 8) != 0) {
                iVar5 = 0;
                do {
                    if (*(*(iVar2 + 0x330) + 0x4c + iVar5) != '\0') {
                        fcn.000136b4();
                        *(*(iVar2 + 0x330) + 0x4c + iVar5) = 0;
                        if (*(iVar2 + 0x8c) != NULL) {
                            *(**(iVar2 + 0x8c) + iVar8 * 4) = uVar7;
                            iVar8 = iVar8 + 1;
                        }
                    }
                    uVar7 = uVar7 + 1;
                    iVar5 = iVar5 + 0x90;
                } while (uVar7 < *(iVar2 + 8));
            }
            if (*(iVar2 + 0x8c) != NULL) {
                *(**(iVar2 + 0x8c) + iVar8 * 4) = 0xffffffff;
            }
            uVar4 = 0x80000012;
        }
    }
    return uVar4;
}


/* fcn.00013708 @ 0x13708 */

uint __fastcall fcn.00013708(int param_1)

{
    char cVar1;
    int iVar2;
    uint uVar3;
    
    iVar2 = fcn.00012413();
    iVar2 = param_1 * 0x90 + *(iVar2 + 0x330);
    if (*(iVar2 + 0x14) == 3) {
        if (*(iVar2 + 0x50) != NULL) {
            **(iVar2 + 0x50) = 1;
        }
        fcn.0001277e();
        uVar3 = 0;
    }
    else {
        cVar1 = fcn.00013594(*(iVar2 + 0x58),*(iVar2 + 0x5c));
        if (cVar1 == '\0') {
            uVar3 = 0x80000006;
        }
        else {
            if (*(iVar2 + 0x50) != NULL) {
                **(iVar2 + 0x50) = 0;
            }
            fcn.000136b4();
            uVar3 = 0x80000012;
        }
    }
    return uVar3;
}


/* fcn.0001569d @ 0x1569d */

uint __fastcall fcn.0001569d(int *param_1,uint32_t param_2,uint32_t param_3,uint param_4,uint param_5,char param_6)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    char cVar4;
    uint32_t uVar5;
    int iVar6;
    int iVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t uStack_8;
    
    if ((((0x2f < param_2) && (param_2 <= ~param_1)) && (*param_1 == 1)) &&
       ((param_1[5] == 1 && (param_3 < param_1[1])))) {
        uStack_8 = param_1[7];
        if (uStack_8 == 0) {
            uStack_8 = 2000;
        }
        if ((uStack_8 & 3) == 0) {
            uVar8 = 0x800;
            if (param_1[7] != 0) {
                uVar8 = param_1[8];
            }
            if (((uVar8 & 0x3ff) == 0) && (uVar8 <= param_2)) {
                uVar9 = 0;
                if (param_6 != '\0') {
                    iVar7 = 0;
                    uVar5 = 0;
                    if (uVar8 >> 2 != 0) {
                        do {
                            iVar7 = iVar7 + param_1[uVar5];
                            uVar5 = uVar5 + 1;
                        } while (uVar5 < uVar8 >> 2);
                        if (iVar7 != 0) {
                            return 0;
                        }
                    }
                }
                iVar7 = param_1[3];
                iVar1 = param_1[4];
                iVar2 = param_1[6];
                cVar4 = fcn.0001565d(param_4,param_5);
                if (cVar4 != '\0') {
                    return 1;
                }
                uVar5 = (uVar8 - uStack_8) - 0x30;
                if ((((0x13 < uVar5) && ((uVar5 & 3) == 0)) &&
                    (uVar3 = *(param_1 + uStack_8 + 0x30), uVar3 < 0x15555556)) &&
                   (uVar8 = (uVar8 - uStack_8) - 0x44, uVar3 * 0xc < uVar8 || uVar3 * 0xc - uVar8 == 0)) {
                    if (param_6 != '\0') {
                        iVar6 = 0;
                        uVar8 = 0;
                        if (uVar5 >> 2 != 0) {
                            do {
                                iVar6 = iVar6 + *(param_1 + uVar8 * 4 + uStack_8 + 0x30);
                                uVar8 = uVar8 + 1;
                            } while (uVar8 < uVar5 >> 2);
                            if (iVar6 != 0) {
                                return 0;
                            }
                        }
                    }
                    if (uVar3 != 0) {
                        param_1 = param_1 + uStack_8 + 0x48;
                        do {
                            if (((param_6 == '\0') || (param_1[-1] + param_1[1] + *param_1 == iVar1 + iVar7 + iVar2)) &&
                               (cVar4 = fcn.0001565d(param_4,param_5), cVar4 != '\0')) {
                                return 1;
                            }
                            uVar9 = uVar9 + 1;
                            param_1 = param_1 + 3;
                        } while (uVar9 < uVar3);
                    }
                }
            }
        }
    }
    return 0;
}


/* fcn.00015624 @ 0x15624 */

uint fcn.00015624(void)

{
    ulong uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    wrmsr(0x8b,0);
    fcn.0001185f(0,0,0);
    uVar1 = rdmsr(0x8b);
    return uVar1 >> 0x20;
}


/* fcn.000115c9 @ 0x115c9 */

int __fastcall fcn.000115c9(uint param_1,uint32_t param_2,uint32_t param_3,int param_4)

{
    int iVar1;
    
    iVar1 = fcn.00011599();
    if ((iVar1 != 0) && (param_4 != 0)) {
        if (param_3 <= param_2) {
            param_2 = param_3;
        }
        if (param_2 != 0) {
            fcn.00011600(param_2);
        }
    }
    return iVar1;
}


/* fcn.00014598 @ 0x14598 */

void __fastcall fcn.00014598(int param_1,int param_2,int param_3,uint param_4)

{
    int iVar1;
    int *piVar2;
    
    iVar1 = fcn.00011544();
    if (iVar1 != 0) {
        if (param_3 != 0) {
            piVar2 = param_2 + 4;
            do {
                if (*piVar2 != 0) {
                    fcn.00011600(*piVar2);
                }
                piVar2 = piVar2 + 2;
                param_3 = param_3 + -1;
            } while (param_3 != 0);
        }
        *(param_1 + 0x34c) = 0;
        *(param_1 + 0x354) = 0;
        *(param_1 + 0x348) = iVar1;
        *(param_1 + 0x350) = param_4;
    }
    return;
}


/* fcn.00011707 @ 0x11707 */

void __cdecl fcn.00011707(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.000148a2 @ 0x148a2 */

uint32_t __fastcall fcn.000148a2(int16_t *param_1)

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


/* fcn.000148c7 @ 0x148c7 */

uint32_t __fastcall fcn.000148c7(char *param_1)

{
    uint32_t uVar1;
    
    uVar1 = 0;
    if ((param_1 != NULL) && (*param_1 != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (param_1[uVar1] == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.000154c5 @ 0x154c5 */

void __cdecl fcn.000154c5(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.000149a0(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.00014956 @ 0x14956 */

uchar * __cdecl fcn.00014956(int32_t arg_8h,int32_t arg_ch)

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
        *in_ECX = *(var_ch + 0x66a0);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00014922 @ 0x14922 */

uchar * __cdecl fcn.00014922(int arg_8h,int32_t arg_ch,int arg_10h)

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


/* fcn.0001565d @ 0x1565d */

uint __fastcall fcn.0001565d(int param_1,uint32_t param_2,int param_3,uint32_t param_4)

{
    uint uVar1;
    uint32_t uVar2;
    
    if (param_4 == 0) {
        uVar1 = 1;
    }
    else {
        uVar2 = 0;
        if (param_4 != 0) {
            do {
                if ((param_1 == *(param_3 + uVar2 * 8)) && ((param_2 & 1 << (*(param_3 + 4 + uVar2 * 8) & 0x1f)) != 0))
                {
                    return 1;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < param_4);
        }
        uVar1 = 0;
    }
    return uVar1;
}


