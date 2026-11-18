// decompiled by r2ghidra: 1811_CryptoDxe.pe32
// functions: 10

/* entry0 @ 0xff73711c */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    
    fcn.ff73718c(arg1,arg2);
    iStackX_8 = arg1;
    iVar1 = (**(*0xff7386e4 + 0x148))(&iStackX_8,0xff7373ec,0xff73742c,0);
    if ((iVar1 < 0) && (*0xff7386fc != 0)) {
        (**(*(arg2 + 0x60) + 0x48))();
        *0xff7386fc = 0;
    }
    return iVar1;
}


/* fcn.ff73718c @ 0xff73718c */

//WARNING: Variable defined which should be unmapped: var_4h

void fcn.ff73718c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t noname_0;
    int64_t iStackX_8;
    int32_t var_4h;
    
    *0xff7386e4 = *(arg2 + 0x60);
    *0xff7386ec = *(arg2 + 0x58);
    *0xff7386dc = arg2;
    iStackX_8 = arg1;
    fcn.ff73730c();
    puVar4 = fcn.ff73730c();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0xff737202:
            if (puVar4 == NULL) {
                uVar5 = fcn.ff736ebc();
                fcn.ff736e6c();
                uVar2 = in(0x1808);
                fcn.ff736e1c(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar7 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    func_0xff736e0c();
                }
                fcn.ff736e1c(uVar7,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.ff736e6c();
                }
                else {
                    fcn.ff736e5c();
                }
code_r0xff73726b:
                if (*0xff7386fc == NULL) {
                    *0xff73a35c = 0x2000;
                    iVar6 = (**(*(arg2 + 0x60) + 0x40))(4);
                    if (iVar6 < 0) {
                        *0xff7386fc = NULL;
                    }
                }
                fcn.ff736e2c(1,0,0,&iStackX_8);
                return;
            }
            if ((*0xff73740c == *(puVar4 + 4)) && (*0xff737414 == *(puVar4 + 8))) goto code_r0xff73726b;
        }
        else if (uVar1 == 4) goto code_r0xff737202;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.ff7372e0 @ 0xff7372e0 */

void fcn.ff7372e0(void)

{
    return;
}


/* fcn.ff73730c @ 0xff73730c */

int64_t fcn.ff73730c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0xff7386f4 == 0) {
        *0xff7386f4 = 0;
        if (*(*0xff7386dc + 0x68) != 0) {
            piVar2 = *(*0xff7386dc + 0x70);
            do {
                if ((*0xff7373fc == *piVar2) && (*0xff737404 == piVar2[1])) {
                    *0xff7386f4 = (*(*0xff7386dc + 0x70))[uVar1 * 3 + 2];
                    return *0xff7386f4;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0xff7386dc + 0x68));
        }
    }
    return *0xff7386f4;
}


/* fcn.ff736ebc @ 0xff736ebc */

uint64_t fcn.ff736ebc(void)

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


/* fcn.ff736e6c @ 0xff736e6c */

void fcn.ff736e6c(void)

{
    return;
}


/* fcn.ff736e1c @ 0xff736e1c */

uint64_t fcn.ff736e1c(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.ff736e0e @ 0xff736e0e */

void fcn.ff736e0e(void)

{
    return;
}


/* fcn.ff736e5c @ 0xff736e5c */

void fcn.ff736e5c(void)

{
    return;
}


/* fcn.ff736e2c @ 0xff736e2c */

uint64_t fcn.ff736e2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


