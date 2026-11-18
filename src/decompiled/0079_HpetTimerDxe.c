// decompiled by r2ghidra: 0079_HpetTimerDxe.pe32
// functions: 21

/* entry0 @ 0x103e4 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103f8(arg1,in_RDX);
    fcn.00010a88(arg1,in_RDX);
    return;
}


/* fcn.000103f8 @ 0x103f8 */

void fcn.000103f8(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x112c8 = *(arg1 + 0x60);
    *0x112c0 = arg1;
    fcn.00010d48();
    puVar4 = fcn.00010d48();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x0001044c:
            if (puVar4 == NULL) {
                uVar5 = fcn.000103e0();
                fcn.000103d0();
                uVar2 = in(0x1808);
                fcn.00010350(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00010280();
                }
                fcn.00010350(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.000103d0();
                }
                else {
                    fcn.000103c0();
                }
                return;
            }
            if ((*0x11270 == *(puVar4 + 4)) && (*0x11278 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x0001044c;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010a88 @ 0x10a88 */

ulong fcn.00010a88(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    uint64_t *puVar8;
    ulong uStackX_10;
    
    (**(*0x112c8 + 0x140))(0x11220,0,0x112a0);
    *0x113a0 = *0xfed00000;
    *0x11360 = *0xfed00010;
    if (*0xfed00000 - 1U < 0xfffffffffffffffe) {
        *0x11360 = *0xfed00010 & 0xfffffffffffffffe;
        uVar6 = 0xff;
        uVar7 = 0;
        *0xfed00010 = *0x11360;
        puVar8 = 0xfed00100;
        *0x11368 = *0xfed000f0;
        *0x11380 = 0xff;
        do {
            *0x11370 = *puVar8;
            if (((*0x11370 >> 0xf & 1) != 0) && (uVar6 == 0xff)) {
                uVar6 = uVar7;
            }
            uVar5 = *0x11370 >> 0x20;
            if ((*0x11370 >> 0x20 != 0) && (*0x11380 == 0xff)) {
                *0x11390 = 0;
                for (; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1) {
                    *0x11390 = *0x11390 + 1;
                }
                *0x11380 = uVar7;
            }
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 4;
        } while (uVar7 <= (*0xfed00000 >> 8 & 0x1f));
        if (uVar6 == 0xff) {
            if (*0x11380 == 0xff) {
                *0xfed00010 = *0x11360;
                return 0x8000000000000007;
            }
            fcn.00010f78(*0x11390);
            *0x11370 = *((*0x11380 + 0x7f68008) * 0x20);
            uVar4 = *0x11370 ^ (*0x11390 << 9 ^ *0x11370) & 0x3e00 | 2;
        }
        else {
            *0x11380 = uVar6;
            uVar1 = fcn.00010ec0();
            uVar6 = *0x11380;
            uStackX_10 = CONCAT44((uVar1 | 0xffffee00) << 0xc,0x16c);
            *(*0x11380 * 0x20 + 0xfed00110) = uStackX_10;
            *0x11370 = *((uVar6 + 0x7f68008) * 0x20);
            uVar4 = *0x11370 & 0xfffffffd;
        }
        uVar6 = *0x11380;
        *0x11370 = CONCAT44(*0x11374,uVar4) & 0xfffffffffffffff3 | 0x100;
        *((*0x11380 + 0x7f68008) * 0x20) = *0x11370;
        *0x11370 = *((uVar6 + 0x7f68008) * 0x20);
        if ((*0x11370 & 0x100) == 0) {
            *0x11398 = 0xffffffff;
        }
        else {
            *0x11398 = 0xffffffffffffffff;
            *0x11370 = *0x11370 & 0xfffffffffffffeff;
            *((*0x11380 + 0x7f68008) * 0x20) = *0x11370;
        }
        iVar2 = (**(*0x112a0 + 0x28))(*0x112a0,0x6c,0x104f4);
        if ((-1 < iVar2) && (iVar2 = fcn.000106e0(0x11250,10000), -1 < iVar2)) {
            (**(*0x112c8 + 0x148))(0x112a8,0x11230,0x11250,0);
            uVar3 = (**(*0x112c8 + 0x50))(0x200,8,0x104c0,0,0x113a8);
            return uVar3;
        }
    }
    return 0x8000000000000007;
}


/* fcn.00010d48 @ 0x10d48 */

int64_t fcn.00010d48(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x112d0 == 0) {
        *0x112d0 = 0;
        if (*(*0x112c0 + 0x68) != 0) {
            piVar2 = *(*0x112c0 + 0x70);
            do {
                if ((*0x11240 == *piVar2) && (*0x11248 == piVar2[1])) {
                    *0x112d0 = (*(*0x112c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x112d0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x112c0 + 0x68));
        }
    }
    return *0x112d0;
}


/* fcn.000103e0 @ 0x103e0 */

uint64_t fcn.000103e0(void)

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


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010282 @ 0x10282 */

void fcn.00010282(void)

{
    return;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(void)

{
    return;
}


/* fcn.00011010 @ 0x11010 */

void fcn.00011010(int64_t arg1)

{
    int64_t iVar1;
    int *piVar2;
    char cVar3;
    uchar uVar4;
    int iVar5;
    uint uVar6;
    code *pcVar7;
    int64_t iVar8;
    
    if (arg1 != '\0') {
        if (9 < *0x11358) goto code_r0x000111fb;
        if ((((*0x11358 == 0) || (iVar5 = in(0xcf8), iVar5 != *((*0x11358 - 1) * 0xc + 0x112e4))) ||
            (cVar3 = in(0x70), cVar3 != *((*0x11358 - 1) * 0xc + 0x112e8))) ||
           ((cVar3 = in(0x76), cVar3 != *((*0x11358 - 1) * 0xc + 0x112e9) || (*((*0x11358 - 1) * 0xc + 0x112e0) == -1))
           )) {
            uVar6 = in(0xcf8);
            *(*0x11358 * 0xc + 0x112e4) = uVar6;
            uVar4 = in(0x74);
            *(*0x11358 * 0xc + 0x112e8) = uVar4;
            uVar4 = in(0x76);
            *(*0x11358 * 0xc + 0x112e9) = uVar4;
            *0x11358 = *0x11358 + 1;
        }
        else {
            piVar2 = (*0x11358 - 1) * 0xc + 0x112e0;
            *piVar2 = *piVar2 + 1;
        }
    }
    iVar8 = 0;
    pcVar7 = *0x112d8;
    while (pcVar7 != NULL) {
        (*pcVar7)(arg1 & 0xff);
        iVar1 = iVar8 * 8;
        iVar8 = iVar8 + 1;
        pcVar7 = *(iVar1 + 0x112e0);
    }
    if (arg1 != '\0') {
        return;
    }
    *0x11358 = *0x11358 - 1;
    if (9 < *0x11358) {
        return;
    }
    if (*(*0x11358 * 0xc + 0x112e8) < 10) {
        do {
            out(0x70,0x8a);
            *0x1135c = in(0x71);
        } while (*0x1135c < '\0');
    }
    out(0x70,*(*0x11358 * 0xc + 0x112e8) | 0x80);
    out(0x76,*(*0x11358 * 0xc + 0x112e9));
    out(0xcf8,*(*0x11358 * 0xc + 0x112e4));
    if (*(*0x11358 * 0xc + 0x112e0) == 0) {
        return;
    }
    piVar2 = *0x11358 * 0xc + 0x112e0;
    *piVar2 = *piVar2 + -1;
code_r0x000111fb:
    *0x11358 = *0x11358 + 1;
    return;
}


/* fcn.00010e58 @ 0x10e58 */

int64_t fcn.00010e58(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.00010e88();
    if (iVar1 == 1) {
        iVar1 = fcn.00010df0();
        *(iVar1 + 0xb0) = 0;
    }
    else {
        iVar1 = 0;
        wrmsr(0x80b,0);
    }
    return iVar1;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


/* fcn.00010ec0 @ 0x10ec0 */

uint32_t fcn.00010ec0(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t uStackX_18;
    
    uVar1 = fcn.00010e2c();
    iVar2 = fcn.00010e88();
    if (iVar2 != 1) {
        return uVar1;
    }
    iVar2 = fcn.00010e88();
    if (iVar2 == 1) {
        fcn.00010390(0,auStackX_10,0,0);
        if (10 < auStackX_10[0]) {
            fcn.00010360(0xb,0,0,auStackX_8);
            if (auStackX_8[0] != 0) goto code_r0x00010f5e;
        }
        fcn.00010390(1,0,auStackX_8,0);
        uStackX_18 = auStackX_8[0] >> 0x18;
    }
    else {
        uStackX_18 = fcn.00010ec0();
    }
code_r0x00010f5e:
    if (uStackX_18 < 0x100) {
        uStackX_18 = uVar1 >> 0x18;
    }
    return uStackX_18;
}


/* fcn.00010f78 @ 0x10f78 */

void fcn.00010f78(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    char cVar3;
    
    uVar1 = *0xfec00010;
    cVar3 = arg1 * '\x02' + '\x11';
    *0xfec00010 = *0xfec00010 & 0xfffff16c | 0x1a16c;
    *0xfec00000 = cVar3;
    iVar2 = fcn.00010ec0();
    *0xfec00000 = cVar3;
    *0xfec00010 = iVar2 << 0x18 | uVar1 & 0xfff16c | 0x1a16c;
    return;
}


/* fcn.000106e0 @ 0x106e0 */

ulong fcn.000106e0(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    uint8_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    uVar3 = (**(*0x112c8 + 0x18))(0x1f);
    uVar1 = *0x11360;
    *0x11360 = *0x11360 & 0xfffffffe;
    *0xfed00010 = CONCAT44(*0x11364,uVar1) & 0xfffffffffffffffe;
    if (arg1 == 0) {
        if (*0x112b8 != 0) {
            uVar4 = *0xfed000f0;
            if (*0xfed000f0 < *0x11368) {
                uVar4 = *0xfed000f0 + *0x11398;
            }
            if ((*0x11388 <= (*0x11398 & uVar4 - *0x11368)) && (*(*0x11380 * 0x20 + 0xfed00108) == *0x11378)) {
                do {
                    iVar5 = *(*0x11380 * 0x20 + 0xfed00108);
                    fcn.00010280();
                } while (iVar5 == *0x11378);
            }
        }
        if ((*0x11370 >> 0xf & 1) == 0) {
            *0xfec00000 = (*0x11390 + '\b') * '\x02';
            *0xfec00010 = *0xfec00010 | 0x10000;
        }
        else {
            *0x11370 = *0x11370 & 0xffffbfff;
        }
        *0x11370 = *0x11370 & 0xfffffffb;
        iVar5 = *0x11380;
    }
    else {
        *0x11388 = (arg1 * 100000000) / *0x113a4;
        if (*0x11368 < *0xfed000f0) {
            uVar4 = *0xfed000f0;
        }
        else {
            uVar4 = *0x11398 + *0xfed000f0;
        }
        if ((*0x11398 & uVar4 - *0x11368) < *0x11388) {
            uVar4 = *0x11368 + *0x11388;
        }
        else {
            uVar4 = *0xfed000f0 + 1;
        }
        *(*0x11380 * 0x20 + 0xfed00108) = uVar4 & *0x11398;
        if ((*0x11370 & 0x8000) == 0) {
            fcn.00010f78(*0x11390);
            *0xfec00000 = (*0x11390 + '\b') * '\x02';
            *0xfec00010 = *0xfec00010 & 0xfffeffff;
            iVar5 = *0x11380;
        }
        else {
            uVar2 = fcn.00010ec0();
            iVar5 = *0x11380;
            *(*0x11380 * 0x20 + 0xfed00110) = CONCAT44((uVar2 | 0xffffee00) << 0xc,0x16c);
            *0x11370 = *0x11370 | 0x4000;
        }
        *0x11370 = *0x11370 | 4;
    }
    *0x112b8 = arg1;
    *((iVar5 + 0x7f68008) * 0x20) = CONCAT44(*0x11374,*0x11370);
    uVar1 = *0x11360;
    *0x11360 = *0x11360 | 1;
    *0xfed00010 = CONCAT44(*0x11364,uVar1) | 1;
    (**(*0x112c8 + 0x20))(uVar3);
    return 0;
}


/* fcn.00010390 @ 0x10390 */

uint64_t fcn.00010390(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010db4 @ 0x10db4 */

ulong fcn.00010db4(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.00010390(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.00010e88 @ 0x10e88 */

char fcn.00010e88(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.00010db4();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.00010df0 @ 0x10df0 */

int64_t fcn.00010df0(void)

{
    uint64_t uVar1;
    char cVar2;
    int64_t iVar3;
    
    cVar2 = fcn.00010db4();
    if (cVar2 == '\0') {
        iVar3 = 0xfee00000;
    }
    else {
        uVar1 = rdmsr(0x1b);
        iVar3 = (uVar1 & 0xffffffff00000000) + (uVar1 & 0xfffff000);
    }
    return iVar3;
}


/* fcn.00010e2c @ 0x10e2c */

uint64_t fcn.00010e2c(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    iVar1 = fcn.00010e88();
    if (iVar1 == 1) {
        iVar1 = fcn.00010df0();
        uVar2 = *(iVar1 + 0x20);
    }
    else {
        uVar2 = rdmsr(0x802);
    }
    return uVar2;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


