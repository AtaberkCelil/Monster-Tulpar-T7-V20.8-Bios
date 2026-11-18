// decompiled by r2ghidra: 2248_C2F9AE46-3437-4FEF-9CB1-9A568B282FEE.te
// functions: 17

/* entry0 @ 0x15b */

void entry0(void)

{
    do {
    //WARNING: Do nothing block with infinite loop
    } while( true );
}


/* fcn.000001c7 @ 0x1c7 */

int fcn.000001c7(void)

{
    return 0x1c7 - *0x1b8;
}


/* fcn.000001bc @ 0x1bc */

uint fcn.000001bc(void)

{
    int iVar1;
    
    iVar1 = fcn.000001c7();
    return *(iVar1 + 0x1c);
}


/* fcn.00000152 @ 0x152 */

uint fcn.00000152(void)

{
    return *0xffbb028e;
}


/* fcn.00000421 @ 0x421 */

//WARNING: Removing unreachable block (ram,0x000004db)
//WARNING: Removing unreachable block (ram,0x0000057e)
//WARNING: Restarted to delay deadcode elimination for space: stack

void __cdecl
fcn.00000421(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,code *noname_3,int32_t arg_18h,int32_t arg_1ch)

{
    int iVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint16_t uStack_2f0;
    int iStack_2ee;
    uint uStack_2e8;
    uint uStack_2e4;
    uint uStack_2d8;
    uint uStack_2d4;
    ushort auStack_2cc [2];
    int32_t iStack_2c8;
    uint uStack_2c4;
    int32_t iStack_2c0;
    int32_t iStack_2bc;
    int32_t iStack_2b8;
    int32_t iStack_2b4;
    int iStack_2b0;
    uint uStack_2ac;
    uint uStack_2a8;
    uint uStack_2a4;
    uint auStack_2a0 [167];
    
    fcn.000002d8();
    uStack_2a8 = 0;
    uStack_2a4 = 0;
    InterruptDescriptorTableRegister();
    if (iStack_2ee == 0) {
        iVar1 = fcn.000001c7();
        puVar2 = auStack_2a0;
        iVar1 = *(iVar1 + 0x1c) + *(iVar1 + 0x18) + -0x1c;
        uStack_2e8 = CONCAT22(8,iVar1);
        uStack_2e4 = CONCAT22(iVar1 >> 0x10,0x8e00);
        uStack_2d8 = uStack_2e8;
        uStack_2d4 = uStack_2e4;
        iVar1 = 0x22;
        do {
            if (puVar2 != &uStack_2d8) {
                fcn.00000248(puVar2,&uStack_2d8,8);
            }
            puVar2 = puVar2 + 2;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        uVar3 = 0x110;
    }
    else {
        uVar3 = uStack_2f0 + 1;
        if (0x110 < uVar3) {
            do {
            } while( true );
        }
        if (uVar3 != 0) {
            fcn.000007d4(uVar3);
        }
    }
    iStack_2ee._0_2_ = SUB42(auStack_2a0,0);
    InterruptDescriptorTableRegister(CONCAT22(iStack_2ee,uVar3 + -1));
    fcn.00000692(arg_1ch);
    auStack_2cc[0] = 0x24;
    iStack_2c8 = arg_10h;
    iStack_2c0 = arg_ch;
    iStack_2b8 = arg_ch;
    uStack_2c4 = *(arg_10h + 0x20);
    iStack_2bc = arg_8h;
    iStack_2b4 = arg_8h;
    iStack_2b0 = *(*0xfed00148 + 8) + 0x34;
    uStack_2ac = 0;
    (*noname_3)(auStack_2cc,0xffbb0a0c);
    do {
    } while( true );
}


/* fcn.0000074e @ 0x74e */

uint fcn.0000074e(char param_1)

{
    int *piVar1;
    int iVar2;
    
    piVar1 = *0xfed00148;
    if (param_1 != '\x02') {
        if (param_1 == '\x03') {
            if (*0xfed00148 != 0xffffffff) {
                return 0x80000003;
            }
            iVar2 = fcn.000007fb();
            if (iVar2 < 0) {
                return 0x80000002;
            }
            return 0;
        }
        if (param_1 != '\x04') {
            if ((param_1 != '\x05') && (param_1 != '\x06')) {
                return 0x80000003;
            }
            if (*0xfed00148 == NULL) {
                return 0x80000003;
            }
            if (*0xfed00148 == 0xffffffff) {
                return 0x80000003;
            }
            if (**0xfed00148 != 0x44505346) {
                return 0x80000003;
            }
            iVar2 = fcn.000007fb();
            if (iVar2 < 0) {
                return 0x80000002;
            }
            goto code_r0x000007cf;
        }
    }
    if (((*0xfed00148 == NULL) || (*0xfed00148 == 0xffffffff)) || (**0xfed00148 != 0x44505346)) {
        return 0x80000003;
    }
code_r0x000007cf:
    *(piVar1 + 0x16) = param_1;
    return 0;
}


/* fcn.000007ea @ 0x7ea */

uint fcn.000007ea(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00000387 @ 0x387 */

int fcn.00000387(void)

{
    return 0x387 - *0x378;
}


/* fcn.000002d8 @ 0x2d8 */

//WARNING: Removing unreachable block (ram,0x000002e7)

uint32_t fcn.000002d8(void)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint32_t in_CR4;
    
    puVar1 = cpuid_Version_info(1);
    uVar2 = *puVar1;
    if ((puVar1[2] >> 0x19 & 1) != 0) {
        uVar2 = in_CR4 | 0x200;
        *0x1094 = *0xffbb09ca;
    }
    return uVar2;
}


/* fcn.00000248 @ 0x248 */

uint * fcn.00000248(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.000007d4 @ 0x7d4 */

int __fastcall fcn.000007d4(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.00000248(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000692 @ 0x692 */

void __fastcall fcn.00000692(uint *param_1,uint param_2,uchar param_3)

{
    ulong uVar1;
    uint *puVar2;
    uint uVar3;
    int iVar4;
    
    *0xfed00148 = param_1;
    fcn.00000288(param_1,0x184);
    *param_1 = 0x44505346;
    *(param_1 + 1) = 0;
    param_1[2] = param_2;
    param_1[0x20] = 2;
    param_1[0x1e] = 0x46524550;
    puVar2 = *0xfed00148;
    if ((*0xfed00148)[0x20] < 0x20) {
        uVar1 = rdtsc();
        iVar4 = (*0xfed00148)[0x20];
        (*0xfed00148)[iVar4 * 2 + 0x21] = uVar1;
        puVar2[iVar4 * 2 + 0x22] = uVar1 >> 0x20;
        *(puVar2 + puVar2[0x20] * 8 + 0x8b) = 0xf2;
    }
    puVar2[0x20] = puVar2[0x20] + 1;
    uVar3 = fcn.000001c7();
    param_1[0x11] = uVar3;
    fcn.00000616();
    *(*0xfed00148 + 0x16) = param_3;
    iVar4 = *((*0xfed00148)[2] + 0x34);
    if (iVar4 == 0) {
        iVar4 = *(param_1[0x11] + 0x24) + *(param_1[0x11] + 0x1c);
    }
    (*0xfed00148)[0x12] = iVar4;
    (*0xfed00148)[0x14] = iVar4;
    (*0xfed00148)[0x15] = 0;
    return;
}


/* fcn.000001e8 @ 0x1e8 */

void fcn.000001e8(void)

{
    return;
}


/* fcn.000001f8 @ 0x1f8 */

//WARNING: Unable to track spacebase fully for stack

ulong __fastcall fcn.000001f8(uint param_1,uint param_2,int param_3,int param_4)

{
    uint in_EAX;
    uint *puVar1;
    uint unaff_EBX;
    uint unaff_retaddr;
    uint auStack_10 [2];
    uint uStack_4;
    
    auStack_10[1] = param_1;
    auStack_10[0] = param_2;
    puVar1 = auStack_10 + (param_4 - param_3);
    uStack_4 = in_EAX;
    *puVar1 = param_2;
    puVar1[1] = auStack_10[1];
    puVar1[2] = unaff_EBX;
    puVar1[3] = uStack_4;
    puVar1[4] = unaff_retaddr;
    return CONCAT44(*puVar1,puVar1[3]);
}


/* fcn.00000288 @ 0x288 */

uint * fcn.00000288(uint *param_1,uint32_t param_2)

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


/* fcn.00000616 @ 0x616 */

void __fastcall fcn.00000616(int param_1)

{
    int *piVar1;
    
    piVar1 = 0xfefffffc;
    *(param_1 + 0x30) = 0;
    *(param_1 + 0x34) = 0;
    *(param_1 + 0x38) = 0;
    *(param_1 + 0x3c) = 0;
    *(param_1 + 0x40) = 0;
    if (*0xfefffff8 == 0x4455434d) {
        while (*piVar1 != 0) {
            if (piVar1[-1] == 0x4455434d) {
                fcn.000007d4(0x10);
code_r0x0000067c:
                piVar1 = piVar1 + -6;
            }
            else {
                if (piVar1[-1] == 0x30524550) {
                    fcn.000007d4(0x10);
                    *(param_1 + 0x8b) = 0xf0;
                    *(param_1 + 0x93) = 0xf1;
                    goto code_r0x0000067c;
                }
                piVar1 = piVar1 + -*piVar1;
            }
        }
    }
    return;
}


/* fcn.000007fb @ 0x7fb */

uint __fastcall fcn.000007fb(int param_1,int *param_2)

{
    int *piVar1;
    bool bVar2;
    
    if (param_1 == 3) {
        if (param_2 == NULL) {
            return 0;
        }
        if (*param_2 != 0x554c4441) {
            return 0x80000002;
        }
        if (param_2[1] != 0x4d5f4450) {
            return 0x80000002;
        }
        if (param_2[10] == 0) {
            return 0x80000002;
        }
        bVar2 = (param_2[0xc] & 0xfffU) == 0;
    }
    else {
        if (param_1 != 5) {
            return 0;
        }
        piVar1 = *(*0xfed00148 + 0x54);
        if ((*(*0xfed00148 + 0x54) == NULL) && (piVar1 = param_2, param_2 == NULL)) {
            return 0;
        }
        if (*piVar1 != 0x554c4441) {
            return 0x80000002;
        }
        bVar2 = piVar1[1] == 0x535f4450;
    }
    if (!bVar2) {
        return 0x80000002;
    }
    return 0;
}


