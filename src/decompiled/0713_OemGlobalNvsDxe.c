// decompiled by r2ghidra: 0713_OemGlobalNvsDxe.pe32
// functions: 40

/* entry0 @ 0x10420 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001044c(arg1,arg2);
    fcn.0001052c(arg1,arg2);
    return;
}


/* fcn.0001044c @ 0x1044c */

ulong fcn.0001044c(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    
    *0x12238 = *(arg1 + 0x60);
    *0x12230 = arg1;
    fcn.00011540();
    iVar3 = fcn.00011570();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x12260 != NULL) || (iVar3 = (**(*0x12238 + 0x140))(0x11ce0,0), -1 < iVar3)) {
        (***0x12260)(*0x12260,0x12268);
    }
    uVar4 = 0;
    if (*(*0x12230 + 0x68) != 0) {
        piVar6 = *(*0x12230 + 0x70);
        do {
            if ((*0x11cf0 == *piVar6) && (*0x11cf8 == piVar6[1])) {
                *0x12270 = (*(*0x12230 + 0x70))[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar6 = piVar6 + 3;
        } while (uVar4 < *(*0x12230 + 0x68));
    }
    *0x12270 = 0;
    return 0x800000000000000e;
}


/* fcn.0001052c @ 0x1052c */

int64_t fcn.0001052c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [2];
    uchar auStackX_18 [16];
    
    if (*0x12250 == 0) {
        *0x12248 = *(arg2 + 0x60);
        *0x12240 = *(arg2 + 0x58);
        *0x12250 = arg2;
    }
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x12238 + 0x40))(10,0x231,0x12278);
    if (-1 < iVar1) {
        fcn.00010260(*0x12278,0x231);
        (**(*0x12238 + 0x148))(aiStackX_8,0x11cb0,0x12278,0);
        (**(*0x12238 + 0x170))(0x200,8,0x105f0,0,0x11ca0,auStackX_18);
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00011540 @ 0x11540 */

int64_t fcn.00011540(void)

{
    if (*0x12258 == 0) {
        fcn.000114e0(0x11cd0,0x12258);
    }
    return *0x12258;
}


/* fcn.000114e0 @ 0x114e0 */

ulong fcn.000114e0(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x12230;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00011570 @ 0x11570 */

void fcn.00011570(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00011540();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000115a7:
            if ((piVar1 == NULL) || ((*0x11d20 == *(piVar1 + 4) && (*0x11d28 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000115a7;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 6720 named .text
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


/* fcn.0001128c @ 0x1128c */

int64_t fcn.0001128c(void)

{
    int64_t iVar1;
    
    iVar1 = fcn.00011260(0xca9);
    if (iVar1 != 0) {
        (**(*0x12248 + 0x168))(iVar1,0xca9,0);
    }
    return iVar1;
}


/* fcn.00011260 @ 0x11260 */

ulong fcn.00011260(int64_t arg1)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0;
    (**(*0x12248 + 0x40))(4,arg1,auStackX_10);
    return auStackX_10[0];
}


/* fcn.00011410 @ 0x11410 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00011410(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t auStackX_10 [2];
    int *piStackX_18;
    int64_t iStackX_20;
    int64_t var_40h;
    int64_t var_48h;
    uchar auStack_38 [16];
    int64_t var_bp_10h;
    
    iVar2 = 0;
    piStackX_18 = NULL;
    uVar3 = 0;
    auStackX_10[0] = arg2;
    iVar1 = (**(*0x12248 + 0x140))(0x11d10,0,&iStackX_20);
    if (iVar1 < 0) {
        iVar1 = -0x5ffffffffffffffe;
    }
    else {
        iVar4 = 0;
        iVar1 = (**(iStackX_20 + 8))(0,&piStackX_18,auStackX_10,auStack_38);
        if (-1 < iVar1) {
            do {
                if (*piStackX_18 == 0x50434146) {
                    if (auStackX_10[0] == 2) {
                        uVar3 = piStackX_18[10];
                    }
                    if ((auStackX_10[0] & 0x1c) != 0) {
                        iVar2 = *(piStackX_18 + 0x23);
                    }
                }
                if ((uVar3 != 0) && (iVar2 != 0)) goto code_r0x000114c3;
                iVar4 = iVar4 + 1;
                iVar1 = (**(iStackX_20 + 8))(iVar4,&piStackX_18,auStackX_10,auStack_38);
            } while (-1 < iVar1);
            if (iVar2 == 0) {
                if (uVar3 == 0) {
                    return iVar1;
                }
                *arg1 = uVar3;
            }
            else {
code_r0x000114c3:
                *arg1 = iVar2;
            }
            iVar1 = 0;
        }
    }
    return iVar1;
}


/* fcn.000113a0 @ 0x113a0 */

int64_t fcn.000113a0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RCX;
    int64_t in_RDX;
    int64_t in_R8;
    uint8_t *puStack_28;
    
    iVar1 = fcn.000112c8(in_RCX,in_RDX,in_R8,arg1);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (*puStack_28 < 2) {
        if (1 < arg1) {
            return -0x7ffffffffffffffe;
        }
        *puStack_28 = arg1;
    }
    else if (*puStack_28 == 10) {
        puStack_28[1] = arg1;
    }
    else if (*puStack_28 == 0xb) {
        *(puStack_28 + 1) = arg1;
    }
    else if (*puStack_28 == 0xc) {
        *(puStack_28 + 1) = arg1;
    }
    else {
        if (*puStack_28 != 0xe) {
            return -0x7ffffffffffffffe;
        }
        *(puStack_28 + 1) = arg1;
    }
    return 0;
}


/* fcn.00011694 @ 0x11694 */

uint64_t fcn.00011694(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.000115fc();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.0001189c(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.0001189c(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00011670 @ 0x11670 */

bool fcn.00011670(int64_t param_1)

{
    unkint7 extraout_RAX;
    int aiStackX_10 [6];
    
    fcn.00010fb0(param_1,aiStackX_10);
    return -1 < extraout_RAX && aiStackX_10[0] == 0;
}


/* fcn.0001175c @ 0x1175c */

void fcn.0001175c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t iVar2;
    uint32_t *puVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uStackX_10;
    uchar auStackX_18 [8];
    
    uVar5 = ~arg3 | arg4;
    uVar6 = 0;
    if ((uVar5 & 0xfffffffe) != 0) {
        cVar1 = fcn.00011694(0x9020014);
        uVar6 = 0;
        if (cVar1 != '\0') {
            arg2 = 0x902;
            iVar2 = fcn.00010d5c(6,0x902);
            if ((-1 < iVar2) && (uVar6 = (uStackX_10 >> 8 & 0x1000) >> 0xc, uVar6 != 0)) {
                arg2 = 0;
                fcn.00011110(0x902,0,0x100000);
            }
        }
    }
    uVar4 = 0;
    if ((uVar5 & 1) != 0) {
        cVar1 = fcn.00011694(0x9020014);
        uVar4 = 0;
        if (cVar1 != '\0') {
            arg2 = 0x902;
            iVar2 = fcn.00010d5c(7,0x902);
            if ((-1 < iVar2) && (uVar4 = arg1 >> 0x14 & 1, uVar4 != 0)) {
                arg2 = 0;
                fcn.000111b8(0x902,0,0x100000);
            }
        }
    }
    iVar2 = fcn.0001189c(auStackX_18);
    uVar5 = fcn.00011634(0x9020014,arg2);
    puVar3 = (uVar5 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar2 + 0x3c) << 0x10 | uVar5 & 0xffff;
    *puVar3 = *puVar3 & arg3 | arg4;
    if (uVar6 != 0) {
        fcn.00011164(0x902,0,0x100000);
    }
    if (uVar4 != 0) {
        fcn.0001120c(0x902,0,0x100000);
    }
    return;
}


/* fcn.00011b40 @ 0x11b40 */

void fcn.00011b40(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00010c8c @ 0x10c8c */

char * fcn.00010c8c(uint32_t arg1,uint32_t arg2)

{
    char cVar1;
    uint in_register_0000000c;
    char *pcVar2;
    char *pcVar3;
    uint in_register_00000014;
    char *pcVar4;
    char *pcVar5;
    
    pcVar4 = CONCAT44(in_register_00000014,arg2);
    pcVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*pcVar4 == '\0') {
        return pcVar2;
    }
    do {
        cVar1 = *pcVar2;
        if (cVar1 == '\0') {
            return NULL;
        }
        pcVar3 = pcVar2;
        pcVar5 = pcVar4;
        if (cVar1 == *pcVar4) {
            do {
                if (cVar1 == '\0') break;
                pcVar3 = pcVar3 + 1;
                pcVar5 = pcVar5 + 1;
                cVar1 = *pcVar3;
            } while (cVar1 == *pcVar5);
        }
        if (*pcVar5 == '\0') {
            return pcVar2;
        }
        if (*pcVar3 == '\0') {
            return NULL;
        }
        pcVar2 = pcVar2 + 1;
    } while( true );
}


/* fcn.00010f58 @ 0x10f58 */

ulong fcn.00010f58(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    int64_t arg2_00;
    
    arg2_00 = arg2;
    cVar1 = fcn.00011694(arg1);
    if (cVar1 == '\0') {
        uVar3 = 0x8000000000000002;
    }
    else {
        cVar1 = fcn.00011670(arg1 & 0xffffffff);
        if (cVar1 == '\0') {
            uVar3 = 0x8000000000000003;
        }
        else {
            uVar2 = fcn.00011704(arg1 & 0xffffffff,arg2_00);
            *arg2 = uVar2 >> 1 & 1;
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.0001189c @ 0x1189c */

ulong fcn.0001189c(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.000115fc();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x11d40;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x11f80;
    }
    return uVar2;
}


/* fcn.000115fc @ 0x115fc */

ulong fcn.000115fc(void)

{
    char cVar1;
    
    cVar1 = fcn.000115c0();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.000115c0(), cVar1 != '\x05')) && (cVar1 = fcn.000115c0(), cVar1 != '\x06')
        ) && (cVar1 = fcn.000115c0(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.000110c0 @ 0x110c0 */

ulong fcn.000110c0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010cd4(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010d5c(7,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.00011070 @ 0x11070 */

ulong fcn.00011070(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010cd4(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010d5c(6,arg1 & 0xffffffff);
    }
    return uVar2;
}


/* fcn.000118cc @ 0x118cc */

ulong fcn.000118cc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    uint16_t uVar2;
    ulong uVar3;
    uint8_t uVar4;
    int iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    int iVar8;
    uint *in_stack_00000048;
    uint8_t *in_stack_00000050;
    
    uVar7 = arg4;
    if ((uVar7 < 0x14) && ((0x800f3U >> (uVar7 & 0x1f) & 1) != 0)) {
        if (*((arg1 >> 4 & 0x10000000 | arg1 & 0xffffffffU) + 0xc0000000) == -1) {
            uVar3 = 0x8000000000000007;
        }
        else {
            uVar1 = arg1 + 0xd8;
            iVar8 = 0xfffffff;
            iVar5 = 0xfffffff;
            do {
                if ((*((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000) & 1) == 0) break;
                iVar5 = iVar5 + -1;
            } while (0 < iVar5);
            if (iVar5 != 0) {
                *in_stack_00000050 = 4;
                *((arg1 + 0xd0U >> 4 & 0x10000000 | arg1 + 0xd0U & 0xffffffff) + 0xc0000000) =
                     arg2 << 0x18 | arg3 & 0xffff;
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *((arg1 + 0xdcU >> 4 & 0x10000000 | arg1 + 0xdcU & 0xffffffff) + 0xc0000000) = arg3 >> 0x10;
                *(uVar6 + 0xc0000000) = arg4 << 8 | *(uVar6 + 0xc0000000) & 0x7f;
                *((arg1 + 0xdaU >> 4 & 0x10000000 | arg1 + 0xdaU & 0xffffffff) + 0xc0000000) = 0xf000;
                if ((((uVar7 == 1) || (uVar7 == 5)) || (uVar7 == 7)) || (uVar7 == 0x13)) {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = *in_stack_00000048;
                }
                else {
                    *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000) = 0;
                }
                uVar6 = uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff;
                *(uVar6 + 0xc0000000) = *(uVar6 + 0xc0000000) | 1;
                do {
                    uVar2 = *((uVar1 >> 4 & 0x10000000 | uVar1 & 0xffffffff) + 0xc0000000);
                    if ((uVar2 & 1) == 0) break;
                    iVar8 = iVar8 + -1;
                } while (0 < iVar8);
                if (iVar8 != 0) {
                    uVar4 = uVar2 >> 1 & 3;
                    *in_stack_00000050 = uVar4;
                    if (uVar4 == 0) {
                        if (((arg4 & 0xfffffff9U) == 0) && (uVar7 != 2)) {
                            *in_stack_00000048 =
                                 *((arg1 + 0xd4U >> 4 & 0x10000000 | arg1 + 0xd4U & 0xffffffff) + 0xc0000000);
                        }
                        return 0;
                    }
                    if (uVar4 != 2) {
                        return 0x8000000000000007;
                    }
                    return 0x8000000000000010;
                }
            }
            uVar3 = 0x8000000000000012;
        }
    }
    else {
        uVar3 = 0x8000000000000002;
    }
    return uVar3;
}


/* fcn.00011704 @ 0x11704 */

uint fcn.00011704(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    uVar3 = arg1 & 0xffffffff;
    iVar2 = fcn.0001189c(auStackX_10);
    uVar1 = fcn.00011634(uVar3 & 0xffffffff,arg2);
    return *(*((uVar3 >> 0x10 & 0x1f) * 0x1e + iVar2) << 0x10 | (uVar1 & 0xffff0000 | 0xfffd0000) << 8 | uVar1 & 0xffff)
    ;
}


/* fcn.00011634 @ 0x11634 */

int fcn.00011634(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint auStackX_10 [6];
    
    auStackX_10[0] = arg2;
    uVar2 = arg1 & 0xffffffff;
    iVar1 = fcn.0001189c(auStackX_10);
    return *((uVar2 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (uVar2 & 0x1ff) * 0x10;
}


/* fcn.00010cd4 @ 0x10cd4 */

uint64_t fcn.00010cd4(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    int iStackX_8;
    uint32_t auStackX_18 [4];
    
    uVar6 = arg1;
    uVar7 = arg2;
    iVar2 = fcn.0001189c(auStackX_18);
    uVar5 = uVar6 & 0x1f;
    uVar3 = fcn.000115fc();
    uVar4 = uVar3 & 0xffffffffffffff00;
    if (((uVar3 != '\0') + 8) * 0x100 <= uVar6) {
        fcn.0001189c();
        cVar1 = fcn.000115fc();
        uVar4 = iStackX_8 - 1U;
        if (((uVar6 <= (((cVar1 != '\0') + 8) * 0x100 | iStackX_8 - 1U)) && (uVar5 < auStackX_18[0])) &&
           (uVar4 = uVar5, uVar7 <= *(uVar4 * 0x1e + 0x1c + iVar2) - 1 >> 5)) {
            return CONCAT71(uVar5 >> 8,1);
        }
    }
    return uVar4 & 0xffffffffffffff00;
}


/* fcn.00010d5c @ 0x10d5c */

ulong fcn.00010d5c(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint8_t *puVar4;
    int iVar5;
    int in_R8D;
    uint *in_R9;
    uchar auStackX_8 [8];
    
    uVar3 = arg2 & 0x1f;
    iVar1 = fcn.0001189c(auStackX_8);
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 4);
    }
    else if (iVar5 == 1) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xc);
    }
    else if (iVar5 == 2) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 10);
    }
    else if (iVar5 == 3) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x10);
    }
    else if (iVar5 == 4) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0xe);
    }
    else if (iVar5 == 5) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x14);
    }
    else if (iVar5 == 6) {
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x16);
    }
    else {
        if (iVar5 != 7) {
            return 0x8000000000000003;
        }
        puVar4 = (uVar3 & 0xffffffff) * 0x1e + iVar1;
        uVar2 = *(puVar4 + 0x18);
    }
    if (uVar2 == 0xffff) {
        return 0x8000000000000003;
    }
    if (iVar5 - 6U < 2) {
        in_R8D = in_R8D * 8;
    }
    else {
        in_R8D = in_R8D * 4;
    }
    *in_R9 = *(*puVar4 << 0x10 | (uVar2 + in_R8D & 0xffff0000 | 0xfffd0000) << 8 | uVar2 + in_R8D & 0xffff);
    return 0;
}


/* fcn.00010e7c @ 0x10e7c */

ulong fcn.00010e7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uint64_t arg2_00;
    uint32_t uVar4;
    uchar *puVar5;
    int iVar6;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000028;
    
    auStackX_8[0] = 0;
    iVar6 = arg1;
    uVar4 = arg2 & 0x1f;
    arg2_00 = arg3 & 0xffffffff;
    iVar2 = fcn.0001189c(auStackX_10);
    if (iVar6 == 6) {
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x16);
        fcn.00011070(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    else {
        if (iVar6 != 7) {
            return 0x8000000000000003;
        }
        puVar5 = uVar4 * 0x1e + iVar2;
        uVar1 = *(puVar5 + 0x18);
        fcn.000110c0(arg2 & 0xffffffffU,arg2_00,auStackX_8);
    }
    if (uVar1 == 0xffff) {
        return 0x8000000000000003;
    }
    auStackX_10[0] = auStackX_8[0] & arg4 | in_stack_00000028;
    uVar3 = fcn.000118cc(0xf9000,CONCAT71(arg2_00 >> 8,*puVar5),uVar1 + arg3 * 8,0x13);
    return uVar3;
}


/* fcn.00011bf0 @ 0x11bf0 */

int64_t fcn.00011bf0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    bool bVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ulong *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg2 - arg1;
    puVar4 = arg1;
    if (arg2 < arg1) {
        uVar2 = -uVar2;
        if (arg1 <= arg3 + arg2) {
            puVar4 = arg3 + arg1;
            bVar1 = true;
            uVar5 = 1;
            arg2 = arg3 + arg2;
        }
    }
    if ((7 < arg3) && (7 < uVar2)) {
        uVar2 = arg2 & 7;
        uVar3 = puVar4 & 7;
        if (bVar1) {
            arg2 = arg2 + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 8 - uVar2;
            }
            arg3 = arg3 - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg2;
                arg2 = arg2 + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg2 = arg2 + -7;
            puVar4 = puVar4 + -7;
        }
        for (uVar2 = arg3 >> 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg2;
            arg2 = arg2 + (uVar5 * -2 + 1) * 8;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg3 = arg3 & 7;
        if (arg3 == 0) {
            return arg1;
        }
        if (bVar1) {
            arg2 = arg2 + 8;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg2 = arg2 + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg3 != 0; arg3 = arg3 - 1) {
        *puVar4 = *arg2;
        arg2 = arg2 + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.000112c8 @ 0x112c8 */

ulong fcn.000112c8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int *piVar2;
    char *pcVar3;
    int *piVar4;
    uint32_t uVar5;
    int64_t arg3_00;
    int aiStackX_20 [2];
    int64_t *in_stack_00000028;
    
    do {
        arg3_00 = 0;
        cVar1 = *arg3;
        while (cVar1 != '\0') {
            arg3_00 = arg3_00 + 1;
            cVar1 = *(arg3_00 + arg3);
        }
        aiStackX_20[0] = 0x5f5f5f5f;
        fcn.00011bf0(aiStackX_20,arg3,arg3_00);
        uVar5 = 0;
        if (arg2 != NULL) {
            pcVar3 = NULL;
            do {
                piVar4 = pcVar3 + arg1;
                if (*piVar4 == aiStackX_20[0]) goto code_r0x0001132f;
                uVar5 = uVar5 + 1;
                pcVar3 = uVar5;
            } while (pcVar3 < arg2);
        }
        piVar4 = NULL;
code_r0x0001132f:
        if (piVar4 == NULL) {
            return 0x800000000000000e;
        }
        piVar2 = piVar4;
        if ((*(piVar4 + -1) + 0xa4U & 0xfd) == 0) {
            piVar2 = piVar4 + -1;
        }
        if (*(piVar2 + -1) == '\b') {
            *(in_stack_00000028 + 0x1c) = 0;
            in_stack_00000028[1] = piVar2;
            in_stack_00000028[2] = piVar4 + 1;
            *in_stack_00000028 = piVar2 + -1;
            *(in_stack_00000028 + 3) = 3;
            return 0;
        }
        arg2 = arg1 + arg2 + (4 - piVar4);
        arg1 = piVar4 + 1;
    } while( true );
}


/* fcn.000115c0 @ 0x115c0 */

void fcn.000115c0(void)

{
    if (*0x11d30 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11d30 = '\x05';
        }
        else {
            *0x11d30 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00010fb0 @ 0x10fb0 */

uint64_t fcn.00010fb0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint64_t uVar2;
    int64_t iVar3;
    int8_t iVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    uchar auStackX_18 [16];
    
    uVar2 = arg1 & 0xffffffff;
    cVar1 = fcn.00011694(arg1);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar7 = uVar2 & 0x1ff;
        uVar2 = uVar2 >> 0x10 & 0x1f;
        iVar3 = fcn.0001189c(auStackX_18);
        iVar5 = (uVar2 & 0xffffffff) * 0x1e;
        if (*(iVar5 + 2 + iVar3) == -1) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            uVar6 = *(iVar5 + 2 + iVar3) + (uVar7 >> 3 & 0x1fffffff) * 4;
            iVar4 = (uVar7 & 7) << 2;
            *arg2 = (*((uVar6 & 0xffff0000 | 0xfffd0000) << 8 | *(iVar5 + iVar3) << 0x10 | uVar6 & 0xffff) & 3 << iVar4)
                    >> iVar4;
            uVar2 = 0 >> iVar4;
        }
    }
    return uVar2;
}


/* fcn.00011110 @ 0x11110 */

ulong fcn.00011110(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010cd4(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010e7c(6,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.000111b8 @ 0x111b8 */

ulong fcn.000111b8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010cd4(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010e7c(7,arg1 & 0xffffffff,arg2 & 0xffffffff,~arg3);
    }
    return uVar2;
}


/* fcn.00011164 @ 0x11164 */

ulong fcn.00011164(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010cd4(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010e7c(6,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


/* fcn.0001120c @ 0x1120c */

ulong fcn.0001120c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00010cd4(arg1,arg2);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = fcn.00010e7c(7,arg1 & 0xffffffff,arg2 & 0xffffffff,0xffffffff);
    }
    return uVar2;
}


