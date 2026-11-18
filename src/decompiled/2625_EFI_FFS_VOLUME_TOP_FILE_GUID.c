// decompiled by r2ghidra: 2625_EFI_FFS_VOLUME_TOP_FILE_GUID.te
// functions: 75

/* entry0 @ 0xf0 */

//WARNING: Control flow encountered bad instruction data

void __fastcall entry0(uint param_1,ushort param_2)

{
    char *pcVar1;
    uint in_EAX;
    int iVar2;
    
    //[00] -r-x section size 12853 named .text
    iVar2 = CONCAT22(in_EAX >> 0x10,0x60);
    pcVar1 = iVar2 + 0x660cf8ba;
    *pcVar1 = *pcVar1 + '`';
    out(param_2,iVar2);
    out(0xcf9,0x60);
    rdtsc();
    //WARNING: Bad instruction - Truncating control flow here
    halt_baddata();
}


/* fcn.000002d0 @ 0x2d0 */

//WARNING: Unable to track spacebase fully for stack
//WARNING: Removing unreachable block (ram,0x000002f5)

void fcn.000002d0(uint param_1,uint param_2,int param_3)

{
    int iVar1;
    int iVar2;
    code *pcVar3;
    uchar *puVar4;
    uint32_t uVar5;
    uchar *puVar6;
    uint uVar7;
    uint in_MM5_Da;
    uint in_MM6_Da;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar7 = fcn.00000bd0(param_1,param_2,param_3);
    *(param_3 + -4) = param_1;
    *(param_3 + -8) = param_2;
    *(param_3 + -0xc) = param_3;
    iVar2 = cpuid_Version_info(1);
    uVar5 = *(iVar2 + 4) >> 0x10 & 0xff;
    if (*(iVar2 + 4) >> 0x10 == '\0') {
        uVar5 = uVar5 + 1;
    }
    *(param_3 + -0x10) = uVar5;
    uVar5 = uVar5 & 0xff;
    puVar4 = param_3 + -0x10;
    do {
        puVar6 = puVar4;
        *(puVar6 + -4) = uVar7;
        uVar5 = uVar5 - 1;
        puVar4 = puVar6 + -4;
    } while (uVar5 != 0);
    *(puVar6 + -8) = in_MM5_Da;
    *(puVar6 + -0xc) = in_MM6_Da;
    *(puVar6 + -0x10) = *0xffffffe0;
    *(puVar6 + -0x14) = *0xfffffffc;
    iVar2 = *(param_3 + -8);
    iVar1 = *(param_3 + -0xc);
    *(puVar6 + -0x18) = iVar2;
    *(puVar6 + -0x1c) = iVar1 - iVar2;
    *(puVar6 + -0x20) = 0x33b;
    fcn.00000d8c(*(puVar6 + -0x1c),*(puVar6 + -0x18),*(puVar6 + -0x14));
    pcVar3 = swi(3);
    (*pcVar3)();
    return;
}


/* fcn.00000bd0 @ 0xbd0 */

void fcn.00000bd0(void)

{
    char cVar1;
    int16_t iVar2;
    
    out(0x408,0x800);
    iVar2 = fcn.00002cfc(0xf8080,0);
    if (iVar2 != 0x10) {
        cVar1 = fcn.00002c14();
        if (cVar1 == '\0') {
            *0xfd882770 = 0x10;
            fcn.00002d32(0xf8080,0);
        }
    }
    fcn.00001eb8();
    fcn.00001473();
    return;
}


/* fcn.00002cfc @ 0x2cfc */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

void __cdecl fcn.00002cfc(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.0000322d(0,arg_ch & 1);
    return;
}


/* fcn.0000322d @ 0x322d */

ulong __fastcall fcn.0000322d(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.00002c14 @ 0x2c14 */

uint32_t fcn.00002c14(void)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = fcn.00002ced();
    if (cVar1 != '\0') {
        uVar2 = fcn.00002c61();
        return uVar2 >> 0x17 & 1;
    }
    uVar2 = fcn.00002c61();
    return uVar2 >> 0x1f;
}


/* fcn.00002ced @ 0x2ced */

bool fcn.00002ced(void)

{
    char cVar1;
    
    cVar1 = fcn.00002caf();
    return cVar1 == '\x04';
}


/* fcn.00002caf @ 0x2caf */

char fcn.00002caf(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffffe244 == -1) {
        uVar1 = fcn.00002ca0();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffffe244 = cVar2;
    }
    return *0xffffe244;
}


/* fcn.00002c61 @ 0x2c61 */

uint __fastcall fcn.00002c61(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.00002d32 @ 0x2d32 */

void __cdecl fcn.00002d32(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00003286();
    return;
}


/* fcn.00003286 @ 0x3286 */

ulong __fastcall fcn.00003286(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.00001eb8 @ 0x1eb8 */

int fcn.00001eb8(void)

{
    char cVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    int iVar4;
    
    uVar2 = fcn.00002cfc(0xf8082,0);
    cVar1 = fcn.00002c01();
    if (cVar1 == '\0') {
        uVar3 = 0;
    }
    else {
        uVar3 = fcn.00002cfc(0xf80a0,0);
    }
    if ((uVar3 | 0x3c03) == uVar2) {
        iVar4 = 0;
    }
    else {
        iVar4 = fcn.00002c3e();
        if (-1 < iVar4) {
            fcn.00002d32(0xf8082,0);
        }
    }
    return iVar4;
}


/* fcn.00001473 @ 0x1473 */

int64_t fcn.00001473(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uchar uVar4;
    uchar uVar5;
    uint32_t uVar6;
    
    uVar1 = in(0x3fa);
    uVar2 = in(0x3fb);
    uVar3 = in(0x3fb);
    out(0x3fb,uVar3 | 0x80);
    uVar4 = in(0x3f9);
    uVar5 = in(0x3f8);
    uVar6 = 0x3fb;
    uVar3 = in(0x3fb);
    out(0x3fb,uVar3 & 0x7f);
    if (((CONCAT11(uVar4,uVar5) != 1) - 1U & ((uVar2 & 0x3f) != 3) - 1U & 1U - ((uVar1 & 0x21) != 1)) == 0) {
        out(0x3fb,0x80);
        out(0x3f9,0);
        out(0x3f8,1);
        out(0x3fb,3);
        out(0x3fa,7);
        uVar6 = 0x3fc;
        out(0x3fc,0);
    }
    return uVar6 << 0x20;
}


/* fcn.00000d8c @ 0xd8c */

//WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl fcn.00000d8c(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uchar *puVar1;
    int iStack_150;
    ushort uStack_14a;
    ushort auStack_144 [2];
    int32_t iStack_140;
    uint uStack_13c;
    int32_t iStack_138;
    int32_t iStack_134;
    int32_t iStack_130;
    int iStack_12c;
    int iStack_128;
    uint32_t uStack_124;
    uint uStack_120;
    uint uStack_11c;
    uchar auStack_118 [276];
    
    fcn.00001473();
    fcn.000003a0();
    uStack_120 = 0;
    puVar1 = auStack_118;
    uStack_11c = 0;
    iStack_150 = 0x22;
    do {
        if (puVar1 != 0xffffe1f8) {
            fcn.00000340(puVar1,0xffffe1f8,8);
        }
        puVar1 = puVar1 + 8;
        iStack_150 = iStack_150 + -1;
    } while (iStack_150 != 0);
    uStack_14a = SUB42(auStack_118,0);
    InterruptDescriptorTableRegister(CONCAT22(uStack_14a,0x10f));
    fcn.00001bfe();
    auStack_144[0] = 0x24;
    iStack_140 = arg_10h;
    iStack_134 = arg_8h;
    iStack_12c = arg_8h - (arg_8h >> 1);
    uStack_13c = *(arg_10h + 0x20);
    iStack_138 = arg_ch;
    iStack_130 = arg_ch;
    iStack_128 = arg_ch + iStack_12c;
    uStack_124 = arg_8h >> 1;
    fcn.00000e58(auStack_144);
    return;
}


/* fcn.00001553 @ 0x1553 */

//WARNING: Removing unreachable block (ram,0x00001582)
//WARNING: Removing unreachable block (ram,0x00001589)

int __cdecl fcn.00001553(int32_t arg_8h)

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
    uVar2 = puVar1[1];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar2;
    }
    return in_ECX;
}


/* fcn.000018db @ 0x18db */

uint __fastcall fcn.000018db(uint32_t param_1)

{
    ulong uVar1;
    int iVar2;
    uint uVar3;
    int32_t var_4h;
    
    iVar2 = fcn.00001952();
    if (iVar2 == 1) {
        iVar2 = fcn.000018ad();
        uVar3 = *(iVar2 + param_1);
    }
    else {
        uVar1 = rdmsr((param_1 >> 4) + 0x800);
        uVar3 = uVar1;
    }
    return uVar3;
}


/* fcn.0000190e @ 0x190e */

uint32_t __fastcall fcn.0000190e(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    iVar1 = fcn.00001952();
    if (iVar1 == 1) {
        uVar2 = fcn.000018ad();
        *(uVar2 + param_1) = param_2;
        param_2 = uVar2;
    }
    else {
        wrmsr((param_1 >> 4) + 0x800,param_2);
    }
    return param_2;
}


/* fcn.00000340 @ 0x340 */

uint * fcn.00000340(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.000003d0 @ 0x3d0 */

void fcn.000003d0(void)

{
    return;
}


/* fcn.00001738 @ 0x1738 */

int64_t __cdecl fcn.00001738(int32_t arg_8h,int32_t arg_ch)

{
    int64_t iVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int var_14h;
    int32_t var_10h;
    int var_ch;
    int32_t var_4h;
    
    uVar7 = fcn.00001805();
    uVar8 = fcn.00002ae7(arg_8h,arg_ch,uVar7);
    iVar1 = (uVar8 & 0xffffffff) * 1000000000;
    iVar3 = fcn.00002b01(var_18h,var_14h);
    if (iVar3 + -0x21 < 0) {
        var_4h = 0;
    }
    else {
        iVar3 = fcn.00002b01(var_18h,var_14h);
        var_4h = iVar3 + -0x21;
    }
    uVar4 = var_14h;
    uVar5 = 0;
    if ((var_4h & 0x20U) == 0) {
        uVar4 = var_18h;
        uVar5 = var_14h;
    }
    uVar2 = uVar7 >> 0x20;
    if ((var_4h & 0x20U) == 0) {
        uVar2 = uVar7;
    }
    uVar6 = uVar2 >> 0x20;
    iVar9 = (uVar4 >> (var_4h & 0x1f) | uVar5 << 0x20 - (var_4h & 0x1f)) * 1000000000;
    iVar9 = fcn.00002ae7(iVar9,(iVar9 >> 0x20) + (uVar5 >> (var_4h & 0x1f)) * 1000000000,
                         uVar2 >> (var_4h & 0x1f) | uVar6 << 0x20 - (var_4h & 0x1f),uVar6 >> (var_4h & 0x1f));
    return iVar9 + CONCAT44((iVar1 >> 0x20) + (uVar8 >> 0x20) * 1000000000,iVar1);
}


/* fcn.00001668 @ 0x1668 */

int fcn.00001668(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000162f();
    if (iVar1 != 0) {
        fcn.000016ea();
        if (iVar1 + 0x18 != 0) {
            if (param_1 == 0) {
                return iVar1 + 0x18;
            }
            iVar1 = fcn.000016d4(param_1);
            return iVar1;
        }
    }
    return 0;
}


/* fcn.000003a0 @ 0x3a0 */

//WARNING: Removing unreachable block (ram,0x000003af)

uint32_t fcn.000003a0(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t in_CR4;
    
    puVar1 = cpuid_Version_info(1);
    uVar2 = *puVar1;
    if ((puVar1[2] >> 0x19 & 1) != 0) {
        uVar2 = in_CR4 | 0x200;
        *0x1094 = *0xffffe0fa;
    }
    return uVar2;
}


/* fcn.00001bfe @ 0x1bfe */

uint fcn.00001bfe(void)

{
    int iVar1;
    ushort *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ushort in_CS;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar4 = var_ch + 1 >> 3;
    if (0x20 < uVar4) {
        uVar4 = 0x20;
    }
    fcn.000006eb(&var_18h);
    uVar3 = 0;
    if (uVar4 != 0) {
        puVar2 = stack0xfffffff2 + 6;
        do {
            puVar2[-2] = in_CS;
            iVar1 = var_14h * uVar3 + var_18h;
            puVar2[-3] = iVar1;
            uVar3 = uVar3 + 1;
            *puVar2 = iVar1 >> 0x10;
            *(puVar2 + -1) = 0x8e;
            puVar2 = puVar2 + 4;
        } while (uVar3 < uVar4);
    }
    return 0;
}


/* fcn.00000e58 @ 0xe58 */

void __cdecl fcn.00000e58(int32_t arg_8h)

{
    int *piVar1;
    int iVar2;
    char cVar3;
    int *piVar4;
    code *pcVar5;
    int *piVar6;
    int iVar7;
    code *pcStack_10;
    int iStack_c;
    
    pcStack_10 = NULL;
    piVar4 = fcn.00000c34();
    if (piVar4 != NULL) {
        piVar6 = piVar4 + 2;
        do {
            cVar3 = fcn.00001703();
            if ((cVar3 != '\0') && (**piVar6 != 0)) {
                fcn.00001222(&pcStack_10);
                if (pcStack_10 != NULL) goto code_r0x00000ed5;
                fcn.00001593();
            }
            piVar1 = piVar6 + -2;
            piVar6 = piVar6 + 3;
        } while (-1 < *piVar1);
    }
    fcn.00001222(&pcStack_10);
    if (pcStack_10 == NULL) {
        fcn.00001593();
    }
code_r0x00000ed5:
    iVar7 = 0;
    pcVar5 = *0xffffee48;
    while (pcVar5 != NULL) {
        (*pcVar5)();
        iVar2 = iVar7 * 4;
        iVar7 = iVar7 + 1;
        pcVar5 = *(iVar2 + -0x11b4);
    }
    if (piVar4 == NULL) {
        iVar7 = -0x1e00;
    }
    else {
        iVar7 = *(arg_8h + 0x14);
        if (iVar7 != -0x1e00) {
            fcn.00000340(iVar7,0xffffe200,0x24);
        }
        *(iVar7 + 0x18) = *(iVar7 + 0x18) & 0x7fffffff;
        iStack_c = 3;
        if (-1 < *piVar4) {
            piVar6 = iVar7 + 0x24;
            do {
                if (piVar6 != piVar4) {
                    fcn.00000340(piVar6,piVar4,0xc);
                }
                piVar4 = piVar4 + 3;
                iStack_c = iStack_c + 1;
                piVar6 = piVar6 + 3;
            } while (-1 < *piVar4);
        }
        piVar6 = iStack_c * 0xc + iVar7;
        if (piVar6 != piVar4) {
            fcn.00000340(piVar6,piVar4,0xc);
        }
        *(arg_8h + 0x14) = *(arg_8h + 0x14) + 7 + (iStack_c + 1) * 0xc & 0xfffffff8;
        *(arg_8h + 0x18) = *(arg_8h + 0x18) + (iStack_c + 1) * -0xc & 0xfffffff8;
    }
    if (pcStack_10 != NULL) {
        (*pcStack_10)(arg_8h,iVar7);
    }
    return;
}


/* fcn.00000c34 @ 0xc34 */

int __fastcall fcn.00000c34(int param_1)

{
    int *piVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    wrmsr(0x8b,0);
    fcn.00001553(0);
    rdmsr(0x8b);
    uVar2 = fcn.000018db();
    if ((uVar2 & 0x100) == 0) {
        fcn.0000190e();
    }
    fcn.0000190e();
    fcn.000018db();
    fcn.0000190e();
    iVar4 = (*(param_1 + 0x18) >> 1) + *(param_1 + 0x14);
    if (iVar4 != -0x1ee8) {
        fcn.00000340(iVar4,0xffffe118,0x24);
    }
    *(iVar4 + 8) = *(param_1 + 0x10) + *(param_1 + 0xc);
    iVar3 = fcn.000003d0();
    piVar1 = *(iVar3 + 4);
    if ((*piVar1 == 0x554c4441) && (piVar1[1] == 0x545f4450)) {
        *(iVar4 + 0x14) = piVar1;
    }
    return iVar4;
}


/* fcn.00001703 @ 0x1703 */

uint32_t __fastcall fcn.00001703(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00001222 @ 0x1222 */

void __cdecl fcn.00001222(uint32_t arg_8h)

{
    ulong uVar1;
    int32_t var_7ch;
    int32_t var_78h;
    int32_t var_40h;
    int32_t var_ch;
    int32_t var_8h;
    
    fcn.00001083(&var_ch);
    fcn.00000380(&var_7ch,0x70);
    var_7ch = var_ch;
    var_78h = var_8h;
    var_40h = fcn.00001a57();
    fcn.00001083(&var_ch);
    var_7ch = var_ch;
    var_78h = var_8h;
    var_40h = fcn.00001a57();
    uVar1 = fcn.00001a0e();
    if (uVar1 < 0) {
        *(uVar1 >> 0x20) = 0;
    }
    return;
}


/* fcn.00001083 @ 0x1083 */

uint __fastcall fcn.00001083(uint32_t param_1,uint8_t param_2,int *param_3)

{
    int iVar1;
    ushort uVar2;
    uint32_t uVar3;
    unkuint3 *pVar4;
    uint8_t uVar5;
    uchar *puVar6;
    unkuint3 *pVar7;
    uint32_t uVar8;
    uchar *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uchar *puVar12;
    uchar *puVar13;
    bool bVar14;
    
    iVar1 = *(param_1 + 0x24);
    uVar3 = *(param_1 + 0x20);
    puVar13 = uVar3 + param_1;
    *param_3 = 0;
    param_3[1] = 0;
    uVar3 = iVar1 + CARRY4(uVar3,param_1);
    uVar11 = *(param_1 + 0x30) + param_1;
    uVar10 = CARRY4(*(param_1 + 0x30),param_1) + (0xfffffff8 < uVar11);
    puVar12 = uVar11 + 7 & 0xfffffff8;
    if ((uVar3 < uVar10) || ((uVar3 <= uVar10 && (puVar13 < puVar12)))) {
        return 0x8000000e;
    }
    uVar11 = param_2 << 8;
    do {
        uVar5 = puVar12[0x13] & 1;
        uVar11 = CONCAT31(uVar11 >> 8,puVar12[0x13]) & 0xffffff01;
        if (uVar5 == 0) {
            uVar8 = *(puVar12 + 0x14);
            if (uVar8 < 0x18) {
                return 0x8000000e;
            }
        }
        else {
            uVar8 = *(puVar12 + 0x18);
            if (uVar8 < 0x1000000) {
                return 0x8000000e;
            }
        }
        puVar9 = puVar12 + uVar8;
        uVar10 = uVar10 + CARRY4(uVar8,puVar12);
        if (uVar3 < uVar10) {
            return 0x8000000e;
        }
        if ((uVar3 <= uVar10) && (puVar13 < puVar9)) {
            return 0x8000000e;
        }
        if (puVar12[0x12] == uVar11 >> 8) {
            puVar6 = puVar12 + ((uVar5 & uVar11) != 0) * 8 + 0x18;
            uVar11 = 0;
            do {
                bVar14 = 0xfffffffc < puVar6;
                pVar7 = puVar6 + 3 & 0xfffffffc;
                uVar8 = *pVar7;
                if (uVar8 == 0xffffff) {
                    uVar8 = *(pVar7 + 1);
                    if (uVar8 < 0x1000000) {
                        return 0x8000000e;
                    }
                }
                else if (uVar8 < 4) {
                    return 0x8000000e;
                }
                puVar6 = uVar8 + pVar7;
                uVar11 = uVar11 + bVar14 + CARRY4(uVar8,pVar7);
                if (uVar10 < uVar11) {
                    return 0x8000000e;
                }
                if ((uVar10 <= uVar11) && (puVar9 < puVar6)) {
                    return 0x8000000e;
                }
            } while ((*(pVar7 + 3) != '\x10') && (*(pVar7 + 3) != '\x12'));
            if (puVar12[0x12] == param_2) {
                uVar2 = *(pVar7 + 1);
                param_3[1] = 0;
                pVar4 = pVar7 + 2;
                if (CONCAT21(uVar2,*pVar7) != -1) {
                    pVar4 = pVar7 + 1;
                }
                *param_3 = pVar4;
            }
            if (*param_3 != 0 || param_3[1] != 0) {
                return 0;
            }
            uVar11 = param_2 << 8;
        }
        uVar10 = uVar10 + (0xfffffff8 < puVar9);
        puVar12 = puVar9 + 7 & 0xfffffff8;
        if (uVar3 < uVar10) {
            return 0x8000000e;
        }
    } while ((uVar10 < uVar3) || (puVar12 <= puVar13));
    return 0x8000000e;
}


/* fcn.00000380 @ 0x380 */

uint * fcn.00000380(uint *param_1,uint32_t param_2)

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


/* fcn.00001a57 @ 0x1a57 */

int * __fastcall fcn.00001a57(int *param_1)

{
    int *piVar1;
    int iVar2;
    int *piVar3;
    int16_t iVar4;
    int *piVar5;
    int iVar6;
    uint32_t uVar7;
    
    iVar6 = 0;
    if (*param_1 == 0x5a4d) {
        piVar1 = *(param_1 + 0xf) + param_1;
    }
    else {
        piVar1 = param_1;
    }
    if (*piVar1 == 0x5a56) {
        piVar5 = piVar1 + 8;
        if (*piVar5 == 0) {
            return NULL;
        }
        iVar6 = 0x28 - *(piVar1 + 6);
        iVar2 = piVar1 + iVar6 + *piVar5;
        goto code_r0x00001b01;
    }
    if (*piVar1 != 0x4550) {
        return NULL;
    }
    iVar4 = piVar1[1];
    if (iVar4 == 0x14c) {
        iVar4 = 0x10b;
code_r0x00001acd:
        if (iVar4 != 0x10b) goto code_r0x00001add;
        uVar7 = piVar1[0x1d];
        piVar5 = piVar1 + 0x2a;
code_r0x00001af4:
        iVar2 = *piVar5 + param_1;
        if (6 < uVar7) goto code_r0x00001b01;
    }
    else {
        if ((iVar4 != 0x200) && (iVar4 != -0x799c)) {
            iVar4 = piVar1[6];
            goto code_r0x00001acd;
        }
code_r0x00001add:
        if (piVar1[6] == 0x20b) {
            uVar7 = piVar1[0x21];
            piVar5 = piVar1 + 0x2e;
            goto code_r0x00001af4;
        }
    }
    piVar5 = NULL;
    iVar2 = 0;
code_r0x00001b01:
    if ((iVar2 != 0) && (piVar5 != NULL)) {
        uVar7 = 0;
        if (piVar5[1] != 0) {
            piVar1 = iVar2 + 0x10;
            do {
                if ((piVar1[-1] == 2) && (*piVar1 != 0)) {
                    piVar3 = piVar1[1] + iVar6 + param_1;
                    if (*piVar3 == 0x3031424e) {
                        return piVar3 + 4;
                    }
                    if (*piVar3 == 0x434f544d) {
                        return piVar3 + 5;
                    }
                    if (*piVar3 == 0x53445352) {
                        return piVar3 + 6;
                    }
                }
                uVar7 = uVar7 + 0x1c;
                piVar1 = piVar1 + 7;
            } while (uVar7 < piVar5[1]);
        }
    }
    return NULL;
}


/* fcn.00001a0e @ 0x1a0e */

uint __fastcall fcn.00001a0e(int *param_1,int *param_2)

{
    int *piVar1;
    int iVar2;
    
    if (*param_1 == 0x5a4d) {
        piVar1 = *(param_1 + 0xf) + param_1;
    }
    else {
        piVar1 = param_1;
    }
    if (*piVar1 == 0x5a56) {
        iVar2 = (piVar1[2] - *(piVar1 + 6)) + 0x28;
    }
    else {
        if (*piVar1 != 0x4550) {
            return 0x80000003;
        }
        iVar2 = piVar1[10];
    }
    *param_2 = iVar2 + param_1;
    return 0;
}


/* fcn.00001593 @ 0x1593 */

//WARNING: Removing unreachable block (ram,0x000015a5)

void fcn.00001593(void)

{
    uint32_t var_4h;
    
    do {
    } while( true );
}


/* fcn.000013a5 @ 0x13a5 */

void fcn.000013a5(void)

{
    int iVar1;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_14h;
    var_14h = InterruptDescriptorTableRegister();
    iVar1 = fcn.000012f8(&var_8h,&var_4h,&var_24h);
    if (iVar1 == 0) {
        fcn.00001668(var_24h);
        var_ch = &var_1ch;
        InterruptDescriptorTableRegister();
        iVar1 = (**(**(stack0xffffffe2 + -4) + 0x1c))(*(stack0xffffffe2 + -4),var_8h,0xffffe22c);
    }
    if (iVar1 == -0x7ffffff2) {
        iVar1 = fcn.000012f8(&var_8h,&var_4h,&var_24h);
        if (iVar1 == 0) {
            fcn.00001668(var_24h);
            var_ch = &var_1ch;
            InterruptDescriptorTableRegister();
            (**(**(stack0xffffffe2 + -4) + 0x1c))(*(stack0xffffffe2 + -4),var_8h,0xffffe238);
        }
    }
    return;
}


/* fcn.000016ab @ 0x16ab */

void __fastcall fcn.000016ab(uint param_1,uint param_2)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x4c))(*(stack0xfffffff2 + -4),param_1,param_2);
    return;
}


/* fcn.000016d4 @ 0x16d4 */

int __fastcall fcn.000016d4(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.00000340(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000015f5 @ 0x15f5 */

int fcn.000015f5(void)

{
    char cVar1;
    int iVar2;
    
    fcn.000015a9();
    do {
        iVar2 = fcn.000015d4();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00001703();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000012f8 @ 0x12f8 */

uint __cdecl fcn.000012f8(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    int iVar1;
    uint uVar2;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_ch = &var_14h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffea + -4) + 0x20))(*(stack0xffffffea + -4));
    if (iVar1 == -0x7ffffff2) {
        uVar2 = 0x8000000e;
    }
    else {
        if (iVar1 == 0) {
            var_4h = 0;
            iVar1 = (**var_8h)();
            if (((iVar1 == -0x7ffffffb) && (iVar1 = fcn.000016ab(), iVar1 == 0)) && (iVar1 = (**var_8h)(), iVar1 == 0)
               ) {
                *arg_ch = var_4h;
                if (arg_10h != 0) {
                    *arg_10h = 0;
                    *(arg_10h + 4) = 0;
                }
                return 0;
            }
        }
        uVar2 = 0x80000007;
    }
    return uVar2;
}


/* fcn.00002d6f @ 0x2d6f */

uint __fastcall fcn.00002d6f(int32_t param_1,int32_t param_2,int param_3)

{
    char cVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint noname_0;
    uchar auStack_a8 [4];
    uint uStack_a4;
    uint uStack_a0;
    uint32_t uStack_9c;
    uint uStack_98;
    uint uStack_94;
    uint uStack_90;
    uint uStack_8c;
    int iStack_48;
    int32_t iStack_8;
    
    if (param_3 != 0) {
        cVar1 = fcn.00002e1b();
        if (cVar1 == '\0') {
            return 0x80000015;
        }
        uStack_a4 = 0x48;
        uStack_a0 = 0xe;
        fcn.00002fbf(extraout_ECX);
        fcn.00002ffd(auStack_a8,extraout_ECX_00);
        if (iStack_48 == 0) {
            return 0x80000007;
        }
        uStack_9c = uStack_9c & 0xffff0fff | 0xff0000;
        uStack_98 = *0xffffe1e0;
        uStack_94 = *0xffffe1e4;
        uStack_90 = *0xffffe1e8;
        uStack_8c = *0xffffe1ec;
        fcn.00002ef6(noname_0,param_1,iStack_8,param_2);
    }
    return 0;
}


/* fcn.000015a9 @ 0x15a9 */

int32_t fcn.000015a9(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.000015d4 @ 0x15d4 */

int16_t * __fastcall fcn.000015d4(uint param_1,int16_t *param_2)

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


/* fcn.0000162f @ 0x162f */

int32_t __fastcall fcn.0000162f(uint param_1,uint param_2)

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


/* fcn.000016ea @ 0x16ea */

uint * __fastcall fcn.000016ea(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.00001805 @ 0x1805 */

ulong fcn.00001805(void)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int iVar5;
    
    uVar4 = in(0x1808);
    uVar2 = rdtsc();
    do {
        iVar5 = in(0x1808);
    } while ((((uVar4 & 0xffffff) + 0x16b) - iVar5 & 0x800000) == 0);
    uVar3 = rdtsc();
    iVar1 = (uVar3 - uVar2) * 0x2685;
    return CONCAT44((iVar1 >> 0x20) + (((uVar3 >> 0x20) - (uVar2 >> 0x20)) - (uVar3 < uVar2)) * 0x2685,iVar1);
}


/* fcn.00002ae7 @ 0x2ae7 */

void __thiscall fcn.00002ae7(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
    fcn.00000af0(param_2,param_3,param_4,param_5,param_1);
    return;
}


/* fcn.00002be4 @ 0x2be4 */

ulong __cdecl fcn.00002be4(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    uint64_t uVar1;
    
    uVar1 = arg_ch % arg_10h << 0x20 | arg_8h;
    if (arg_14h != 0) {
        *arg_14h = uVar1 % arg_10h;
    }
    return CONCAT44(arg_ch / arg_10h,uVar1 / arg_10h);
}


/* fcn.00000af0 @ 0xaf0 */

uint64_t fcn.00000af0(uint32_t param_1,uint32_t param_2,uint32_t param_3,int *param_4,int *param_5)

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
        if (param_5 == NULL) goto code_r0x00000b61;
        bVar8 = uVar5 < param_3;
        uVar5 = uVar5 - param_3;
        uVar6 = (uVar6 - param_4) - bVar8;
    }
    if (param_5 != NULL) {
        *param_5 = param_1 - uVar5;
        param_5[1] = (param_2 - uVar6) - (param_1 < uVar5);
    }
code_r0x00000b61:
    return uVar3;
}


/* fcn.00002b01 @ 0x2b01 */

//WARNING: Possible PIC construction at 0x00002b14: Changing call to branch
//WARNING: Removing unreachable block (ram,0x00002b19)

int fcn.00002b01(int param_1,int param_2)

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


/* fcn.0000187a @ 0x187a */

uchar __fastcall fcn.0000187a(uint32_t param_1)

{
    uchar uVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    fcn.00001553(0);
    uVar2 = param_1 >> 8 & 0xf;
    if ((uVar2 == 4) || (uVar2 == 5)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00002b79 @ 0x2b79 */

//WARNING: Removing unreachable block (ram,0x00002b92)

int64_t __cdecl fcn.00002b79(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return arg_8h << 0x20;
}


/* fcn.00001952 @ 0x1952 */

char __fastcall fcn.00001952(uint param_1)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.0000187a(param_1,param_1);
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.000018ad @ 0x18ad */

int fcn.000018ad(void)

{
    ulong uVar1;
    char cVar2;
    int iVar3;
    
    cVar2 = fcn.0000187a();
    if (cVar2 == '\0') {
        return -0x1200000;
    }
    uVar1 = rdmsr(0x1b);
    iVar3 = fcn.00002b79(uVar1 >> 0x20,0);
    return iVar3 + (uVar1 & 0xfffff000);
}


/* fcn.00002b1d @ 0x2b1d */

//WARNING: Removing unreachable block (ram,0x00002b44)
//WARNING: Removing unreachable block (ram,0x00002b3c)
//WARNING: Removing unreachable block (ram,0x00002b53)

uint __cdecl fcn.00002b1d(uint noname_0,int32_t arg_ch,uint noname_2,int32_t arg_14h)

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


/* fcn.000019e2 @ 0x19e2 */

uint32_t fcn.000019e2(void)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    uVar1 = fcn.000018db();
    iVar2 = fcn.00001952();
    uVar3 = uVar1;
    if ((iVar2 == 1) && (uVar3 = fcn.00001978(), uVar3 < 0x100)) {
        uVar3 = uVar1 >> 0x18;
    }
    return uVar3;
}


/* fcn.00001978 @ 0x1978 */

uint32_t fcn.00001978(void)

{
    int iVar1;
    uint32_t uVar2;
    uint noname_0;
    int32_t var_ch;
    uint32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.00001952();
    if (iVar1 == 1) {
        fcn.00001553(0);
        if (10 < var_8h) {
            fcn.00002b1d(noname_0,&var_4h,noname_0,&var_ch);
            if (var_4h != 0) {
                return var_ch;
            }
        }
        fcn.00001553(&var_4h);
        uVar2 = var_4h >> 0x18;
    }
    else {
        uVar2 = fcn.000019e2();
    }
    return uVar2;
}


/* fcn.00001c6b @ 0x1c6b */

void __cdecl fcn.00001c6b(int32_t arg_8h)

{
    int in_ECX;
    int32_t unaff_EDI;
    
    fcn.000019e2();
    fcn.00001e6a(-0x1b0c,in_ECX);
    if ((1 << (in_ECX & 0x1f) & 0x20227d00U) != 0) {
        fcn.00001e6a(-0x1acc,*arg_8h);
        if (in_ECX == 0xe) {
            fcn.00001e6a(-0x1ab4,*arg_8h >> 4 & 1);
        }
        fcn.00001e6a(-0x1a84,unaff_EDI);
    }
    fcn.00001e6a(-0x1a80,*(arg_8h + 0x24c));
    fcn.00001e6a(-0x1a58,*(arg_8h + 0x284));
    fcn.00001e6a(-0x1a24,*(arg_8h + 0x274));
    fcn.00001e6a(-0x19f0,*(arg_8h + 0x25c));
    fcn.00001e6a(-0x19b4,*(arg_8h + 0x21c));
    fcn.00001e6a(-0x1980,*(arg_8h + 0x204));
    fcn.00001e6a(-0x194c,*(arg_8h + 0x214));
    fcn.00001e6a(-0x1930,*(arg_8h + 0x23c));
    fcn.00001e6a(-0x190c,*(arg_8h + 0x234));
    fcn.00001e6a(-0x18f4,arg_8h + 4);
    return;
}


/* fcn.00001e6a @ 0x1e6a */

void __cdecl fcn.00001e6a(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint32_t var_100h;
    
    fcn.00001fa3(0,arg_8h,&arg_ch);
    iVar1 = 0;
    while (var_100h != '\0') {
        var_100h._0_1_ = *(&var_100h + iVar1 + 1);
        iVar1 = iVar1 + 1;
    }
    fcn.000014fa();
    return;
}


/* fcn.000006eb @ 0x6eb */

ulong __cdecl fcn.000006eb(int32_t arg_8h)

{
    uint in_EAX;
    uint in_EDX;
    
    *arg_8h = 0xffffb188;
    *(arg_8h + 4) = 10;
    *(arg_8h + 8) = 0xffffb2c8;
    return CONCAT44(in_EDX,in_EAX);
}


/* fcn.00001fa3 @ 0x1fa3 */

uint32_t __cdecl fcn.00001fa3(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

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
        if ((arg_8h & 0x2000U) != 0) goto code_r0x00001fe1;
    }
    else {
        if (((arg_8h & 0x2000U) == 0) && (in_ECX == 0)) {
            return 0;
        }
code_r0x00001fe1:
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
        uVar12 = fcn.00002bc5();
        if (uVar12 >> 0x20 < uVar12) {
            return 0;
        }
        iStack_74 = 1;
        uStack_54 = 0xff;
    }
    else {
        uVar3 = fcn.00002ba0();
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
code_r0x000020c3:
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
            if (uStack_50 == 10) goto code_r0x0000270d;
            if (uStack_50 == 0xd) goto code_r0x00002352;
            puVar8 = arg_ch;
            if (uStack_50 == 0x25) {
code_r0x00002133:
code_r0x00002137:
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
                        goto code_r0x000022bf;
                    }
                    if (uStack_50 == 0) {
                        uStack_68 = 0;
                        arg_ch = puVar8;
                        goto code_r0x000022d2;
                    }
                    if (uStack_50 == 0x20) {
                        arg_8h = arg_8h | 4;
                        goto code_r0x000022bf;
                    }
                    if (uStack_50 != 0x2a) {
                        if (uStack_50 == 0x2b) {
                            arg_8h = arg_8h | 2;
                        }
                        else {
                            if (uStack_50 != 0x2c) goto code_r0x000022d2;
                            arg_8h = arg_8h | 8;
                        }
                        goto code_r0x000022bf;
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
                    goto code_r0x00002133;
                }
                if (uStack_50 == 0x2e) {
                    arg_8h = arg_8h | 0x800;
                    goto code_r0x000022bf;
                }
                if (uStack_50 == 0x30) {
                    if ((arg_8h & 0x800U) == 0) {
                        arg_8h = arg_8h | 0x20;
                        uStack_6c = arg_8h;
                    }
                }
                else {
                    if (uStack_50 < 0x31) goto code_r0x000022d2;
                    if (0x39 < uStack_50) goto code_r0x00002223;
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
                goto code_r0x00002137;
            }
            goto code_r0x0000211c;
        }
        goto code_r0x00002a83;
    }
code_r0x00002a87:
    if ((arg_8h & 0x2000U) == 0) {
        fcn.00001f25(1,0,uStack_5c);
        uVar3 = uStack_7c - uStack_38;
    }
    return uVar3 / uStack_5c;
code_r0x00002223:
    if ((uStack_50 != 0x4c) && (uStack_50 != 0x6c)) goto code_r0x000022d2;
    arg_8h = arg_8h | 0x10;
code_r0x000022bf:
    puVar8 = arg_ch;
    uStack_6c = arg_8h;
    goto code_r0x00002133;
code_r0x000022d2:
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
                puStack_78 = 0xffffe9fc;
            }
            else {
                fcn.00002ac8(auStack_30,0x26,0,-0x15f8,*piVar4);
code_r0x00002402:
                puStack_78 = auStack_30;
            }
code_r0x00002406:
            puVar8 = arg_ch;
        }
        else if (uStack_50 == 10) {
code_r0x0000270d:
            puVar8 = arg_ch + iStack_74;
            puStack_78 = 0xffffea6c;
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
                if (uStack_50 == 0x53) goto code_r0x000024a2;
                if (uStack_50 == 0x58) goto code_r0x0000257d;
                if (uStack_50 == 0x61) goto code_r0x000024ac;
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
                    goto code_r0x00002120;
                }
                if (uStack_50 != 100) goto code_r0x0000211c;
                goto code_r0x00002593;
            }
code_r0x00002352:
            puVar8 = arg_ch + iStack_74;
            if (iStack_74 == 1) {
                uVar3 = 0;
            }
            else {
                uVar3 = puVar8[1] << 8;
            }
            uStack_50 = (*puVar8 | uVar3) & uStack_54;
            if (uStack_50 == 10) {
                puStack_78 = 0xffffea6c;
                arg_ch = puVar8;
                goto code_r0x00002406;
            }
            puStack_78 = 0xffffea70;
            puVar8 = arg_ch;
        }
    }
    else {
        if (uStack_50 == 0x70) {
            arg_8h = arg_8h & 0xffffffc9;
code_r0x0000257d:
            arg_8h = arg_8h | 0x20;
code_r0x00002580:
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
                        puStack_78 = (uVar3 & 0x7fffffff) * 0x15 + -0x1505;
                        goto code_r0x0000254e;
                    }
                }
                else if (uVar3 < 6) {
                    puStack_78 = uVar3 * 0x19 + -0x1588;
code_r0x0000254e:
                    if (puStack_78 != auStack_30) goto code_r0x0000274a;
                }
                fcn.00002ac8(auStack_30,0x26,0,-0x159c,uVar3);
                goto code_r0x0000274a;
            }
            if (uStack_50 == 0x73) {
code_r0x000024a2:
                arg_8h = arg_8h | 0x400;
                uStack_6c = arg_8h;
code_r0x000024ac:
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
                    puStack_78 = 0xffffe9ec;
                    uStack_6c = arg_8h;
                }
                uStack_68 = uStack_68 & -((arg_8h & 0x800U) != 0);
                goto code_r0x0000274a;
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
                    fcn.00002ac8(auStack_30,0x26,0,-0x15b8,*(uVar3 + 2));
                    goto code_r0x00002402;
                }
                puStack_78 = 0xffffea3c;
                goto code_r0x00002406;
            }
            if (uStack_50 != 0x75) {
                if (uStack_50 != 0x78) {
code_r0x0000211c:
                    puStack_78 = &uStack_50;
code_r0x00002120:
                    arg_8h = arg_8h | 0x400;
                    puVar8 = arg_ch;
                    uStack_6c = arg_8h;
                    goto code_r0x0000274a;
                }
                goto code_r0x00002580;
            }
        }
        if (-1 < uVar3) {
            uVar3 = uVar3 & 0xfffffffd | 0x4000;
        }
code_r0x00002593:
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
code_r0x00002660:
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
            else if ((uVar3 & 0x4010) == 0x4000) goto code_r0x00002660;
        }
        iVar5 = fcn.00001f59(uVar7,uVar6);
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
code_r0x0000274a:
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
            uStack_7c = fcn.00001f25(uStack_48 - uStack_68,0x20,uStack_5c);
        }
    }
    if (bVar10) {
        if (((uStack_7f != 0) && (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) == 0)) && (uStack_7c != 0)) {
            uStack_7c = fcn.00001f25(1,uStack_7f,uStack_5c);
        }
        iVar5 = uStack_68 - uStack_60;
        uStack_64 = uStack_64 + iVar5 * uStack_5c;
        if (((arg_8h & 0x2000U) != 0) || (uStack_7c == 0)) goto code_r0x00002921;
        uVar3 = 0x30;
    }
    else {
        uStack_64 = uStack_64 + (uStack_68 - uStack_60) * uStack_5c;
        if (((arg_8h & 0x2000U) == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00001f25(uStack_68 - uStack_60,0x20,uStack_5c);
        }
        if (((uStack_7f == 0) || (uStack_64 = uStack_64 + uStack_5c, (arg_8h & 0x2000U) != 0)) || (uStack_7c == 0))
        goto code_r0x00002921;
        uVar3 = uStack_7f;
        iVar5 = 1;
    }
    uStack_7c = fcn.00001f25(iVar5,uVar3,uStack_5c);
code_r0x00002921:
    uVar3 = arg_8h & 0x2000;
    if ((uStack_7f != 0) < uStack_60) {
        uVar7 = uStack_4c;
        puVar9 = puStack_78;
        puStack_78 = uStack_7f != 0;
        do {
            if ((*puVar9 == '\0') && ((uVar7 < 2 || (*(puVar9 + 1) == '\0')))) break;
            uStack_64 = uStack_64 + uStack_5c;
            if ((uVar3 == 0) && (uStack_7c != 0)) {
                uStack_7c = fcn.00001f25(1,CONCAT11(*(puVar9 + 1),*puVar9) & uStack_3c,uStack_5c);
            }
            uVar6 = uStack_4c;
            puVar9 = puVar9 + uVar7;
            puVar2 = puStack_78 + 1;
            if (bVar11) {
                uStack_44 = uStack_44 + 1;
                if (uStack_44 != 3) goto code_r0x00002a02;
                puStack_78 = puStack_78 + 2;
                uStack_44 = 0;
                if (uStack_60 <= puStack_78) break;
                uStack_64 = uStack_64 + uStack_5c;
                uVar7 = uStack_4c;
                if ((uVar3 == 0) && (uStack_7c != 0)) {
                    uStack_7c = fcn.00001f25(1,0x2c,uStack_5c);
                    uVar7 = uVar6;
                    puVar2 = puStack_78;
                    goto code_r0x00002a02;
                }
            }
            else {
code_r0x00002a02:
                puStack_78 = puVar2;
            }
        } while (puStack_78 < uStack_60);
        arg_8h = uStack_6c;
    }
    if (uStack_34 == 0x201) {
        uStack_64 = uStack_64 + (uStack_48 - uStack_68) * uStack_5c;
        if ((uVar3 == 0) && (uStack_7c != 0)) {
            uStack_7c = fcn.00001f25(uStack_48 - uStack_68,0x20,uStack_5c);
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
    if (uStack_50 == 0) goto code_r0x00002a83;
    goto code_r0x000020c3;
code_r0x00002a83:
    uVar3 = uStack_64;
    goto code_r0x00002a87;
}


/* fcn.000014fa @ 0x14fa */

int __fastcall fcn.000014fa(uchar *param_1,int param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    iVar3 = param_2;
    if (param_1 == NULL) {
        iVar3 = 0;
    }
    else {
        while (iVar3 != 0) {
            do {
                uVar1 = in(0x3fd);
            } while ((uVar1 & 0x20) == 0);
            uVar2 = 0;
            do {
                if (iVar3 == 0) goto code_r0x0000153b;
                out(0x3f8,*param_1);
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + -1;
                param_1 = param_1 + 1;
            } while (uVar2 < 0x10);
        }
code_r0x0000153b:
        iVar3 = param_2;
    }
    fcn.00002d6f(param_2);
    return iVar3;
}


/* fcn.00002c01 @ 0x2c01 */

uint32_t fcn.00002c01(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00002c61();
    return uVar1 >> 0xc & 1;
}


/* fcn.00002c3e @ 0x2c3e */

uint __fastcall fcn.00002c3e(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.00002c14();
    if (cVar1 != '\0') {
        return 0x80000003;
    }
    fcn.00002c81(param_1);
    return 0;
}


/* fcn.00002c81 @ 0x2c81 */

void __fastcall fcn.00002c81(uint param_1,uint32_t param_2,ushort param_3)

{
    *((param_2 & 0xffff8800 | 0xfffd8800) << 8 | param_2 & 0xffff) = param_3;
    return;
}


/* fcn.00002ba0 @ 0x2ba0 */

uint32_t __fastcall fcn.00002ba0(int16_t *param_1)

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


/* fcn.00002bc5 @ 0x2bc5 */

uint32_t __fastcall fcn.00002bc5(char *param_1)

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


/* fcn.00002ac8 @ 0x2ac8 */

void __cdecl fcn.00002ac8(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    fcn.00001fa3(arg_10h,arg_14h,&arg_18h);
    return;
}


/* fcn.00001f59 @ 0x1f59 */

uchar * __cdecl fcn.00001f59(int32_t arg_8h,int32_t arg_ch)

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
        *in_ECX = *(var_ch + -0x1238);
    } while (arg_8h != 0 || arg_ch != 0);
    return in_ECX;
}


/* fcn.00001f25 @ 0x1f25 */

uchar * __cdecl fcn.00001f25(int arg_8h,int32_t arg_ch,int arg_10h)

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


/* fcn.00002ca0 @ 0x2ca0 */

void fcn.00002ca0(void)

{
    fcn.00002cfc(0xf8002,0);
    return;
}


/* fcn.00002e1b @ 0x2e1b */

uint __fastcall fcn.00002e1b(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    uint32_t uVar4;
    uchar uVar5;
    int iVar6;
    bool bVar7;
    
    uVar5 = 0;
    iVar6 = -0x7ffffff9;
    if (*0xfe1000e8 != 0xff) {
        iVar6 = 0;
    }
    uVar1 = (*0xfe1000e8 == 0xff) - 1U & *0xfe1000e8;
    if ((iVar6 < 0) || ((uVar1 & 1) == 0)) {
        return 0xfe100000;
    }
    uVar1 = uVar1 >> 1;
    uVar2 = uVar1 & 3;
    uVar4 = CONCAT31(0xfe1000,uVar1) & 0xffffff03;
    if (uVar2 == 0) {
        if (param_1 != 1) {
            bVar7 = param_1 == 2;
            goto code_r0x00002e82;
        }
    }
    else {
        if (uVar2 == 1) {
            if ((param_1 == 1) || (param_1 == 2)) goto code_r0x00002e84;
            bVar7 = param_1 == 3;
        }
        else {
            cVar3 = uVar4;
            if (cVar3 == '\x02') {
                if (((param_1 == 1) || (param_1 == 2)) || (param_1 == 3)) goto code_r0x00002e84;
                bVar7 = param_1 == 4;
            }
            else {
                bVar7 = cVar3 == '\x03';
            }
        }
code_r0x00002e82:
        if (!bVar7) goto code_r0x00002e86;
    }
code_r0x00002e84:
    uVar5 = 1;
code_r0x00002e86:
    return CONCAT31(uVar4 >> 8,uVar5);
}


/* fcn.00002fbf @ 0x2fbf */

void __fastcall fcn.00002fbf(uint *param_1)

{
    if (param_1 == NULL) {
        param_1 = 0xffffef10;
    }
    if (param_1 != 0xffffeeb0) {
        fcn.00000340(param_1,0xffffeeb0,0x34);
    }
    param_1[1] = 0xffffffff;
    *param_1 = 0x10900;
    param_1[4] = 0xffffded6;
    fcn.00003079(param_1,0);
    return;
}


/* fcn.00002ffd @ 0x2ffd */

int * __fastcall fcn.00002ffd(int param_1,int *param_2,uint param_3)

{
    if (param_2 == NULL) {
        param_2 = 0xffffee50;
    }
    else {
        if (param_1 == 0) {
            param_1 = -0x10f0;
        }
        if (param_2 != 0xffffeeb0) {
            fcn.00000340(param_2,0xffffeeb0,0x60);
        }
        param_2[1] = param_2[1] & 0xfffffffe;
        param_2[7] = 0;
        *param_2 = param_1;
        if (*(param_1 + 8) != NULL) {
            (**(param_1 + 8))(param_2,param_3);
        }
    }
    return param_2;
}


/* fcn.00002ef6 @ 0x2ef6 */

void __cdecl fcn.00002ef6(uint noname_0,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

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
    if (in_ECX != 0xffffee50) {
        var_80h = (arg_ch & 7U) << 4 | in_ECX[2] & 0xffff80U | 0x1000002;
        fcn.00002e8b(arg_10h,&var_80h,&var_4h);
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
                fcn.00001727();
            }
            iVar2 = var_4h;
            *var_4h = *0xffffedf0;
        }
        else {
            var_50h = arg_14h;
            *var_4h = *0xffffedf4;
            *(iVar2 + 2) = arg_10h;
        }
        *(iVar2 + 4) = *0xffffee18;
        (**(*in_ECX + 0x10))();
    }
    return;
}


/* fcn.00002e8b @ 0x2e8b */

void __thiscall fcn.00002e8b(int param_1,int16_t param_2,uint32_t *param_3,int *param_4)

{
    uint uVar1;
    uint *puVar2;
    
    uVar1 = *0xffffedd8;
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
        *puVar2 = *0xffffeddc;
        puVar2 = puVar2 + 1;
    }
    if (param_2 != 0) {
        *param_3 = *param_3 | 0x200;
        *(param_3 + 10) = param_2;
        *puVar2 = *0xffffedec;
        puVar2 = puVar2 + 1;
    }
    *param_4 = puVar2;
    return;
}


/* fcn.00001727 @ 0x1727 */

uint __fastcall fcn.00001727(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00000380(param_1,param_2);
    return uVar1;
}


/* fcn.00003079 @ 0x3079 */

void fcn.00003079(int param_1,uint param_2)

{
    *(param_1 + 8) = 0xffffddf5;
    *(param_1 + 0xc) = 0xffffde20;
    *(param_1 + 0x30) = param_2;
    *(param_1 + 0x14) = 0xffffde7d;
    *(param_1 + 0x18) = 0xffffde6e;
    *(param_1 + 0x1c) = 0xffffde8c;
    *(param_1 + 0x20) = 0xffffde9a;
    *(param_1 + 0x24) = 0xffffdeaa;
    *(param_1 + 0x28) = 0xffffdec7;
    *(param_1 + 0x2c) = 0xffffdeb8;
    return;
}


