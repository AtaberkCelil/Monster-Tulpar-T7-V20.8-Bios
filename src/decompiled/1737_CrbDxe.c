// decompiled by r2ghidra: 1737_CrbDxe.pe32
// functions: 13

/* entry0 @ 0x10380 */

void entry0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    
    *0x10c48 = *(arg2 + 0x60);
    *0x10c40 = arg2;
    fcn.00010938();
    noname_0 = 0x10c08;
    iVar3 = fcn.000109a4(0x10c08);
    if (iVar3 == 0) {
        uVar4 = fcn.00010370();
        fcn.00010360();
        uVar1 = in(0x1808);
        fcn.00010340(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010330();
        }
        fcn.00010340(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010360();
        }
        else {
            fcn.00010350();
        }
    }
    fcn.00010438(arg1,arg2);
    return;
}


/* fcn.00010938 @ 0x10938 */

int64_t fcn.00010938(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10c60 == 0) {
        *0x10c60 = 0;
        if (*(*0x10c40 + 0x68) != 0) {
            piVar2 = *(*0x10c40 + 0x70);
            do {
                if ((*0x10bc0 == *piVar2) && (*0x10bc8 == piVar2[1])) {
                    *0x10c60 = (*(*0x10c40 + 0x70))[uVar1 * 3 + 2];
                    return *0x10c60;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10c40 + 0x68));
        }
    }
    return *0x10c60;
}


/* fcn.000109a4 @ 0x109a4 */

void fcn.000109a4(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010938();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000109d2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000109d2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(void)

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


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010332 @ 0x10332 */

void fcn.00010332(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010438 @ 0x10438 */

ulong fcn.00010438(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong auStackX_8 [2];
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    
    if (*0x10c78 == 0) {
        *0x10c68 = *(arg2 + 0x60);
        *0x10c70 = *(arg2 + 0x58);
        *0x10c78 = arg2;
    }
    iStackX_18 = arg1;
    iVar1 = fcn.00010938();
    if ((*(iVar1 + 0xc) == 0x20) || (*(iVar1 + 0xc) == 0x12)) {
        fcn.00010748();
    }
    (**(*0x10c68 + 0x148))(&iStackX_18,0x10b70,0x10bd8,0);
    (**(*0x10c48 + 0x50))(0x200,8,0x105ac,0,auStackX_8);
    (**(*0x10c48 + 0xa8))(0x10bb0,auStackX_8[0],auStackX_20);
    (**(*0x10c48 + 0x68))(auStackX_8[0]);
    return 0;
}


/* fcn.00010748 @ 0x10748 */

ulong fcn.00010748(void)

{
    uchar uVar1;
    ushort uVar2;
    uint uVar3;
    int64_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    
    iVar4 = fcn.000109a4(0x10b90);
    if (iVar4 == 0) {
        uVar5 = 0x800000000000000e;
    }
    else {
        uVar2 = *(iVar4 + 0x18);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x80))(0x1d,uVar2);
        uVar3 = *(iVar4 + 0x1c);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x88))(0x46,uVar3);
        uVar3 = *(iVar4 + 0x20);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x88))(0x41,uVar3);
        uVar5 = *(iVar4 + 0x28);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x90))(0x16e,uVar5);
        uVar5 = *(iVar4 + 0x30);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x90))(0x16f,uVar5);
        uVar5 = *(iVar4 + 0x38);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x90))(0x172,uVar5);
        uVar5 = *(iVar4 + 0x40);
        iVar6 = fcn.000108fc();
        (**(iVar6 + 0x90))(0x173,uVar5);
        if (*(iVar4 + 0x48) != 0) {
            uVar3 = *(iVar4 + 0x4c);
            iVar6 = fcn.000108fc();
            (**(iVar6 + 0x88))(0x170,uVar3);
            uVar3 = *(iVar4 + 0x50);
            iVar6 = fcn.000108fc();
            (**(iVar6 + 0x88))(0x171,uVar3);
            uVar3 = *(iVar4 + 0x54);
            iVar6 = fcn.000108fc();
            (**(iVar6 + 0x88))(0x174,uVar3);
            uVar3 = *(iVar4 + 0x58);
            iVar6 = fcn.000108fc();
            (**(iVar6 + 0x88))(0x175,uVar3);
            uVar1 = *(iVar4 + 0x5c);
            iVar6 = fcn.000108fc();
            (**(iVar6 + 0x78))(0x16d,uVar1);
            uVar1 = *(iVar4 + 0x5d);
            iVar6 = fcn.000108fc();
            (**(iVar6 + 0x78))(0x54,uVar1);
        }
        if (1 < *(iVar4 + 0x48)) {
            uVar3 = *(iVar4 + 0x68);
            iVar4 = fcn.000108c0();
            (**(iVar4 + 0x50))(0x10b60,2,uVar3);
        }
        uVar5 = 0;
    }
    return uVar5;
}


/* section..text @ 0x102a0 */

uint64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    //[00] -r-x section size 2240 named .text
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


/* fcn.000108fc @ 0x108fc */

int64_t fcn.000108fc(void)

{
    if (*0x10c58 == 0) {
        (**(*0x10c48 + 0x140))(0x10b80,0,0x10c58);
    }
    return *0x10c58;
}


/* fcn.000108c0 @ 0x108c0 */

int64_t fcn.000108c0(void)

{
    if (*0x10c50 == 0) {
        (**(*0x10c48 + 0x140))(0x10ba0,0,0x10c50);
    }
    return *0x10c50;
}


