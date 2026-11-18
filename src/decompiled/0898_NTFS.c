// decompiled by r2ghidra: 0898_NTFS.pe32
// functions: 43

/* entry0 @ 0x103f4 */

void entry0(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    int64_t aiStackX_8 [2];
    int64_t aiStackX_18 [2];
    uint uVar2;
    
    fcn.00010498(arg1,in_RDX);
    uVar2 = 0;
    *0x149a0 = arg1;
    *0x149a8 = arg1;
    aiStackX_8[0] = arg1;
    (**(*0x14b20 + 0x148))(aiStackX_8,0x14940,0x14980,0x149e0,0x149f0,0);
    iVar1 = (**(*0x14b20 + 0x118))
                      (aiStackX_8[0],0x149b0,aiStackX_18,aiStackX_8[0],aiStackX_8[0],CONCAT44(uVar2,2));
    if (-1 < iVar1) {
        *(aiStackX_18[0] + 0x58) = 0x10568;
    }
    return;
}


/* fcn.00010498 @ 0x10498 */

void fcn.00010498(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x14b20 = *(arg1 + 0x60);
    *0x14b18 = arg1;
    fcn.0001482c();
    iVar3 = fcn.00014898();
    if (iVar3 == 0) {
        uVar4 = fcn.00010340();
        fcn.00010330();
        uVar1 = in(0x1808);
        fcn.00010310(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010300();
        }
        fcn.00010310(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010330();
        }
        else {
            fcn.00010320();
        }
    }
    if ((*0x14b30 != NULL) || (iVar3 = (**(*0x14b20 + 0x140))(0x14930,0,0x14b30), -1 < iVar3)) {
        (***0x14b30)(*0x14b30,0x14b38);
    }
    return;
}


/* fcn.0001482c @ 0x1482c */

int64_t fcn.0001482c(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14b28 == 0) {
        *0x14b28 = 0;
        if (*(*0x14b18 + 0x68) != 0) {
            piVar2 = *(*0x14b18 + 0x70);
            do {
                if ((*0x14920 == *piVar2) && (*0x14928 == piVar2[1])) {
                    *0x14b28 = (*(*0x14b18 + 0x70))[uVar1 * 3 + 2];
                    return *0x14b28;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14b18 + 0x68));
        }
    }
    return *0x14b28;
}


/* fcn.00014898 @ 0x14898 */

void fcn.00014898(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001482c();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x000148cf:
            if ((piVar1 == NULL) || ((*0x14a08 == *(piVar1 + 4) && (*0x14a10 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x000148cf;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010340 @ 0x10340 */

uint64_t fcn.00010340(void)

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


/* fcn.00010330 @ 0x10330 */

void fcn.00010330(void)

{
    return;
}


/* fcn.00010310 @ 0x10310 */

uint64_t fcn.00010310(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010302 @ 0x10302 */

void fcn.00010302(void)

{
    return;
}


/* fcn.00010320 @ 0x10320 */

void fcn.00010320(void)

{
    return;
}


/* fcn.0001090c @ 0x1090c */

int64_t fcn.0001090c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong *puVar1;
    uint32_t uVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    ulong *puStackX_20;
    int64_t var_38h;
    
    iVar3 = (**(*0x14b20 + 0x40))(4,0x390,&puStackX_20);
    uVar7 = 0;
    if (iVar3 < 0) {
        iVar3 = -0x7ffffffffffffff7;
    }
    else {
        fcn.00010280(puStackX_20,0x390);
        puStackX_20[0x39] = arg1;
        puStackX_20[0x3a] = arg2;
        *(puStackX_20 + 0x3b) = **(arg2 + 8);
        iVar3 = fcn.00010b80(puStackX_20,0);
        if (-1 < iVar3) {
            puStackX_20[0x3c] = *0x14b10;
            puStackX_20[1] = 0x119b4;
            *puStackX_20 = 0x10000;
            puStackX_20[2] = arg3;
            puStackX_20[0x47] = 0;
            puStackX_20[0x48] = 0;
            puStackX_20[0x46] = 0;
            puStackX_20[0x4a] = 0;
            puStackX_20[0x4b] = 0;
            puStackX_20[0x49] = 0;
            puStackX_20[0x4d] = 0;
            puStackX_20[0x4e] = 0;
            puStackX_20[0x4c] = 0;
            uVar2 = *(puStackX_20 + 0x184) * 2;
            uVar5 = 0x1000;
            if (0x1000 < uVar2) {
                uVar5 = uVar2;
            }
            fcn.00011574(puStackX_20,uVar5,puStackX_20 + 0x41,0);
            *(puStackX_20 + 0x42) = uVar5;
            uVar2 = *(puStackX_20 + 0x184);
            uVar5 = *(puStackX_20 + 0x3e);
            uVar6 = *(puStackX_20 + 500) / uVar2 + uVar5 / uVar2;
            (**(*0x14b20 + 0x40))(4,uVar6 * 0x30 + uVar6 * uVar2,puStackX_20 + 0x43);
            iVar3 = puStackX_20[0x43];
            puVar4 = uVar6 * uVar2 + iVar3;
            if (uVar6 != 0) {
                do {
                    *puVar4 = 0;
                    puVar1 = puVar4 + 4;
                    puVar4[1] = 0;
                    puVar4[2] = iVar3;
                    *(puVar4 + 3) = 0;
                    *(puVar4 + 0x1c) = 2 - (uVar7 < uVar5 / uVar2);
                    *puVar1 = 0;
                    puVar4[5] = puStackX_20[0x4e];
                    if (puStackX_20[0x4d] == 0) {
                        puStackX_20[0x4d] = puVar1;
                    }
                    else {
                        *puStackX_20[0x4e] = puVar1;
                    }
                    puStackX_20[0x4c] = puStackX_20[0x4c] + 1;
                    puVar4 = puVar4 + 6;
                    puStackX_20[0x4e] = puVar1;
                    uVar7 = uVar7 + 1;
                    iVar3 = iVar3 + *(puStackX_20 + 0x184);
                } while (uVar7 < uVar6);
            }
            iVar3 = (**(*0x14b20 + 0x148))(puStackX_20 + 2,0x149c0,puStackX_20,0);
            if (-1 < iVar3) {
                return 0;
            }
            iVar3 = -0x7ffffffffffffffd;
        }
        (**(*0x14b20 + 0x48))(puStackX_20);
    }
    return iVar3;
}


/* fcn.00011600 @ 0x11600 */

ulong fcn.00011600(int64_t arg1,uint32_t arg2)

{
    ulong uVar1;
    uint8_t *puVar2;
    uint in_register_00000014;
    uint32_t uVar3;
    ulong *puVar4;
    uint64_t uVar5;
    int64_t iVar6;
    
    puVar4 = *(arg1 + 0x280);
    iVar6 = -0x7ffffffffffffff2;
    while( true ) {
        if (puVar4 == NULL) {
            *(arg1 + 0x1e8) = *(arg1 + 0x1e8) - *(CONCAT44(in_register_00000014,arg2) + -0xc);
    //WARNING: Could not recover jumptable at 0x00011679. Too many branches
    //WARNING: Treating indirect jump as call
            uVar1 = (**(*0x14b20 + 0x48))(CONCAT44(in_register_00000014,arg2));
            return uVar1;
        }
        if ((puVar4[-2] <= CONCAT44(in_register_00000014,arg2)) && (CONCAT44(in_register_00000014,arg2) < puVar4[-1]))
        {
            iVar6 = 0;
            uVar5 = CONCAT44(in_register_00000014,arg2) - puVar4[-2] >> 7;
            puVar2 = (uVar5 & 0xffffffff) + puVar4[-4];
            uVar3 = 1;
            if (*puVar2 != 1) {
                return 0;
            }
            do {
                *puVar2 = 0;
                uVar5 = uVar5 + 1;
                uVar3 = uVar3 + 1;
                puVar2 = uVar5 + puVar4[-4];
            } while (*puVar2 == uVar3);
        }
        if (iVar6 == 0) break;
        puVar4 = *puVar4;
    }
    return 0;
}


/* fcn.0001116c @ 0x1116c */

void fcn.0001116c(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t *piVar3;
    ulong *puVar4;
    
    piVar3 = *(arg1 + 0x250);
    do {
        if (piVar3 == NULL) break;
        *(piVar3 + -0x41) = arg2;
        *(piVar3 + -0x39) = 0;
        fcn.00011868(arg1 + 0x248,piVar3);
        piVar3 = *piVar3;
    } while (piVar3 != NULL);
    puVar4 = *(arg1 + 0x238);
    while (puVar4 != NULL) {
        *(puVar4 + -0x2c) = 0;
        puVar1 = *puVar4;
        if (puVar4[-2] != 0) {
            fcn.000135dc(puVar4 + -0x15);
        }
        if (*(puVar4 + -0x13) != '\0') {
            *(arg1 + 0x228) = 0;
        }
        fcn.000114e4(puVar4 + -0x15);
        puVar4 = puVar1;
    }
    *(arg1 + 0x18) = arg2;
    *(arg1 + 0x74) = 0;
    if (*(arg1 + 0x178) != 0) {
        (**(*0x14b20 + 0x48))();
    }
    iVar2 = *(arg1 + 0x270);
    *(arg1 + 0x178) = 0;
    for (; iVar2 != 0; iVar2 = *(iVar2 + 8)) {
        *(iVar2 + -0x20) = 0;
        *(iVar2 + -0x18) = 0;
        *(iVar2 + -8) = 0;
    }
    return;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 18048 named .text
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


/* fcn.00010b80 @ 0x10b80 */

int64_t fcn.00010b80(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    bool bVar4;
    int iVar5;
    uint32_t uVar6;
    int64_t iVar7;
    uint64_t uVar8;
    bool bVar9;
    char *pcStackX_8;
    
    pcStackX_8 = NULL;
    iVar7 = fcn.00011574(arg1,*(*(*(arg1 + 0x1d0) + 8) + 0xc),&pcStackX_8,0);
    if (iVar7 < 0) {
        return -0x7ffffffffffffff7;
    }
    iVar7 = (**(*(arg1 + 0x1c8) + 8))(*(arg1 + 0x1c8),*(arg1 + 0x1d8),0,*(*(*(arg1 + 0x1d0) + 8) + 0xc),pcStackX_8);
    if ((iVar7 < 0) || (arg2 != '\0')) {
        fcn.00011600(arg1,pcStackX_8);
        *(arg1 + 0x18) = iVar7;
        return iVar7;
    }
    if (*(pcStackX_8 + 0x1fe) != -0x55ab) {
        fcn.00011600(arg1,pcStackX_8);
        return -0x7ffffffffffffffd;
    }
    bVar9 = (*pcStackX_8 + 0x17U & 0xfd) == 0;
    iVar1 = *(pcStackX_8 + 0xb);
    if (iVar1 == 0x200) {
        *(arg1 + 0x180) = 9;
    }
    else if (iVar1 == 0x400) {
        *(arg1 + 0x180) = 10;
    }
    else if (iVar1 == 0x800) {
        *(arg1 + 0x180) = 0xb;
    }
    else if (iVar1 == 0x1000) {
        *(arg1 + 0x180) = 0xc;
    }
    else {
        bVar9 = false;
    }
    if (((0x3f < pcStackX_8[0xd] - 1U) || ((0x800000008000808bU >> (pcStackX_8[0xd] - 1U & 0x3f) & 1) == 0)) &&
       (pcStackX_8[0xd] != -0x80)) {
        bVar9 = false;
    }
    if (*(pcStackX_8 + 0x13) == 0) {
        bVar4 = false;
        if (*(pcStackX_8 + 0xe) == 0) {
            bVar4 = bVar9;
        }
        if (*(pcStackX_8 + 0x20) == 0) goto code_r0x00010cdf;
    }
    bVar4 = false;
code_r0x00010cdf:
    iVar7 = *(pcStackX_8 + 0x28);
    bVar9 = false;
    if (*(pcStackX_8 + 3) == 0x5346544e) {
        bVar9 = iVar7 != 0 & bVar4;
    }
    if (bVar9) {
        *(arg1 + 0x188) = iVar7;
        uVar2 = *(pcStackX_8 + 0xe);
        *(arg1 + 400) = iVar7 - uVar2;
        uVar8 = (iVar7 - uVar2) / pcStackX_8[0xd];
        *(arg1 + 0x198) = uVar8;
        iVar7 = *0x14b20;
        *(arg1 + 400) = pcStackX_8[0xd] * uVar8;
        (**(iVar7 + 0x160))(arg1 + 0x20,pcStackX_8,0x54);
        iVar5 = *(arg1 + 0x2d) << (*(arg1 + 0x180) & 0x1f);
        *(arg1 + 0x184) = iVar5;
        uVar3 = iVar5 * 2;
        uVar6 = 0x4000;
        if (0x4000 < uVar3) {
            uVar6 = uVar3;
        }
        *(arg1 + 0x1f0) = uVar6;
        uVar6 = 0x8000;
        if (0x8000 < uVar3) {
            uVar6 = uVar3;
        }
        *(arg1 + 500) = uVar6;
    }
    fcn.00011600(arg1,pcStackX_8);
    if (bVar9) {
        *(arg1 + 0x18) = 0;
        iVar7 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffd;
        *(arg1 + 0x18) = 0x8000000000000003;
    }
    return iVar7;
}


/* fcn.00011574 @ 0x11574 */

int64_t fcn.00011574(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    
    if (arg2 < 0x401) {
        iVar1 = fcn.00011684(arg1,arg2,arg3,arg4);
    }
    else {
        iVar1 = (**(*0x14b20 + 0x40))(4,arg2 & 0xffffffff);
        if (((iVar1 == 0) && (*(arg1 + 0x1e8) = *(arg1 + 0x1e8) + *(*arg3 + -0xc), arg4 != '\0')) &&
           ((arg2 & 0xffffffffU) != 0)) {
            fcn.00010280(*arg3,arg2 & 0xffffffffU);
        }
    }
    return iVar1;
}


/* fcn.00010f10 @ 0x10f10 */

int64_t fcn.00010f10(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    char cVar3;
    ulong *puVar4;
    int64_t arg2_00;
    int64_t *piVar5;
    uint32_t arg3_00;
    int64_t *piVar6;
    int64_t iVar7;
    ulong *in_stack_00000030;
    uint32_t in_stack_00000038;
    int64_t *piStack_38;
    ulong uStack_30;
    
    piStack_38 = NULL;
    arg3_00 = arg2;
    cVar3 = fcn.000110c0(arg1,in_stack_00000038,arg3_00,arg3 & 0xffffffff);
    if (cVar3 == '\0') {
        uVar2 = *(arg1 + 0x184);
        uStack_30 = CONCAT44(arg2 >> 0x20,(-uVar2 | 0xf0000000) & arg3_00);
        puVar4 = *(arg1 + 0x268);
        do {
            if (puVar4 == NULL) goto code_r0x00010fb6;
            piVar5 = puVar4 + -4;
            puVar1 = puVar4 + -4;
            puVar4 = *puVar4;
        } while (*puVar1 != in_stack_00000038);
        piStack_38 = piVar5;
code_r0x00010fb6:
        arg2_00 = (**(*(arg1 + 0x1c8) + 8))(*(arg1 + 0x1c8),*(arg1 + 0x1d8),uStack_30,uVar2,piStack_38[2]);
        iVar7 = 0;
        if (arg2_00 < 0) {
            if (arg2_00 + 0x7ffffffffffffff4U < 2) {
                fcn.0001116c(arg1,arg2_00);
            }
            return arg2_00;
        }
        *piStack_38 = uStack_30;
        piStack_38[1] = uVar2 + uStack_30;
        piVar6 = arg1 + 0x260;
        *(piStack_38 + 3) = 0;
        piVar5 = piStack_38 + 4;
        *(piStack_38 + 0x1c) = in_stack_00000038;
        fcn.00011868(piVar6,piVar5);
        *piVar5 = iVar7;
        piVar5[1] = piVar6[2];
        if (piVar6[1] == iVar7) {
            piVar6[1] = piVar5;
        }
        else {
            *piVar6[2] = piVar5;
        }
        *piVar6 = *piVar6 + 1;
        piVar6[2] = piVar5;
        fcn.000110c0(arg1,in_stack_00000038,arg3_00,arg3 & 0xffffffff);
    }
    *in_stack_00000030 = piStack_38;
    return 0;
}


/* fcn.000110c0 @ 0x110c0 */

uint64_t fcn.000110c0(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    ulong *puVar2;
    int64_t iVar3;
    uint in_R8;
    int64_t *piVar4;
    uint64_t *puVar5;
    int64_t *in_stack_00000028;
    uint32_t *in_stack_00000030;
    ulong *in_stack_00000038;
    
    iVar3 = *(arg1 + 0x270);
    while( true ) {
        if (iVar3 == 0) {
            return arg2 & 0xffffff00;
        }
        puVar5 = iVar3 + -0x20;
        if (((*(iVar3 + -4) == arg2) && (*puVar5 <= CONCAT44(in_R8,arg3))) &&
           (CONCAT44(in_R8,arg3) < *(iVar3 + -0x18))) break;
        iVar3 = *(iVar3 + 8);
    }
    *in_stack_00000028 = (arg3 - *puVar5) + *(iVar3 + -0x10);
    arg3 = *(iVar3 + -0x18) - arg3;
    if (arg4 < arg3) {
        arg3 = arg4;
    }
    piVar4 = arg1 + 0x260;
    *in_stack_00000030 = arg3;
    fcn.00011868(piVar4,iVar3);
    puVar1 = puVar5 + 4;
    *puVar1 = 0;
    puVar2 = piVar4[2];
    puVar5[5] = puVar2;
    if (piVar4[1] == 0) {
        piVar4[1] = puVar1;
    }
    else {
        puVar2 = piVar4[2];
        *puVar2 = puVar1;
    }
    *piVar4 = *piVar4 + 1;
    piVar4[2] = puVar1;
    *in_stack_00000038 = puVar5;
    return CONCAT71(puVar2 >> 8,1);
}


/* fcn.00011868 @ 0x11868 */

void fcn.00011868(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    uint in_register_00000014;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(CONCAT44(in_register_00000014,arg2) + 8);
    if (piVar2[2] == CONCAT44(in_register_00000014,arg2)) {
        piVar2[2] = iVar1;
    }
    else {
        *(*CONCAT44(in_register_00000014,arg2) + 8) = iVar1;
    }
    if (piVar2[1] == CONCAT44(in_register_00000014,arg2)) {
        piVar2[1] = *CONCAT44(in_register_00000014,arg2);
    }
    else {
        **(CONCAT44(in_register_00000014,arg2) + 8) = *CONCAT44(in_register_00000014,arg2);
    }
    *piVar2 = *piVar2 + -1;
    return;
}


/* fcn.000135dc @ 0x135dc */

ulong fcn.000135dc(int64_t arg1)

{
    ulong *puVar1;
    ulong *puVar2;
    
    puVar2 = *(arg1 + 0x98);
    while (puVar2 != NULL) {
        puVar1 = *puVar2;
        *(*arg1 + 0x1ec) = *(*arg1 + 0x1ec) + -1;
        fcn.00011600(*arg1,*(puVar2 + -0xc));
        fcn.00011868(arg1 + 0x90,puVar2);
        fcn.00011600(*arg1,puVar2 - 100);
        puVar2 = puVar1;
    }
    return 0;
}


/* fcn.000114e4 @ 0x114e4 */

ulong fcn.000114e4(uint32_t arg1)

{
    int64_t arg1_00;
    ulong uVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    arg1_00 = *piVar2;
    if ((*(piVar2 + 0x7c) == 0) && (piVar2[0x13] == 0)) {
        fcn.00011600(arg1_00,piVar2[3]);
        fcn.00011868(arg1_00 + 0x230,arg1 + 0xa8);
        if (piVar2[0x11] != 0) {
            fcn.00011868(piVar2[0x11] + 0xb8,arg1 + 0xd0);
        }
        fcn.00011600(arg1_00,arg1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0x800000000000000f;
    }
    return uVar1;
}


/* fcn.0001125c @ 0x1125c */

int64_t fcn.0001125c(uint32_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = *(iVar2 + 0x80);
    if (*(iVar2 + 0x78) != 0) {
        return *(iVar2 + 0x78);
    }
    if (piVar1 == NULL) {
        return -0x7ffffffffffffff2;
    }
    if (piVar1[1] != 0) {
        return piVar1[1];
    }
    iVar2 = 0;
    if (*(*piVar1 + 0x18) < 0) {
        iVar2 = *(*piVar1 + 0x18);
    }
    return iVar2;
}


/* fcn.0001426c @ 0x1426c */

uint64_t fcn.0001426c(void)

{
    uint64_t uVar1;
    
    uVar1 = (**(*0x14b20 + 0x18))(0x1f);
    (**(*0x14b20 + 0x20))(uVar1);
    if (uVar1 < 9) {
        uVar1 = 8;
    }
    return uVar1;
}


/* fcn.00011350 @ 0x11350 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00011350(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    uint64_t uVar6;
    uint32_t uVar7;
    ulong in_R9;
    int64_t arg4;
    uint64_t uVar8;
    int64_t iStackX_18;
    char *pcStackX_20;
    int64_t var_30h;
    int64_t var_40h;
    int64_t var_48h;
    uint64_t auStack_38 [2];
    int64_t var_bp_10h;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    iStackX_18 = 0;
    piVar1 = *(iVar5 + 0x80);
    iVar3 = *piVar1;
    if (((*(iVar5 + 0x78) != 0 || *(iVar3 + 0x18) != 0) || piVar1[1] != 0) ||
       (((*(piVar1 + 0xd) & 0x10) != 0 && (arg2 != 0)))) {
        return -0x7ffffffffffffffd;
    }
    *(iVar5 + 0x90) = arg2;
    if (arg2 == -1) {
        *(iVar5 + 0x90) = piVar1[0xc];
    }
    arg4 = CONCAT71(in_R9 >> 8,1);
    if (piVar1[0x10] == '\x01') {
code_r0x000114ce:
        iVar3 = 0;
    }
    else {
        if (*(iVar5 + 0x90) == 0) {
            if (piVar1[0x1c] != '\0') {
                uVar7 = 0;
                iVar3 = fcn.00013c70(&pcStackX_20,auStack_38,&iStackX_18,0);
                if (iVar3 < 0) {
                    return iVar3;
                }
                *(iVar5 + 0xa0) = *(iVar5 + 0xa0) & uVar7;
                *(iVar5 + 0x98) = iStackX_18;
                goto code_r0x000114ce;
            }
        }
        else {
            uVar7 = *(iVar3 + 0x184);
            uVar4 = arg2 / uVar7;
            pcStackX_20 = *(iVar5 + 0xb0);
            if (*pcStackX_20 != '\0') {
                iVar3 = fcn.00013c70(&pcStackX_20,auStack_38,&iStackX_18,arg4);
                if (iVar3 < 0) {
                    return iVar3;
                }
                uVar2 = auStack_38[0];
                uVar8 = 0;
                while (((uVar6 = uVar2, uVar6 < uVar4 && (*pcStackX_20 != '\0')) &&
                       (iVar3 = fcn.00013c70(&pcStackX_20,auStack_38,&iStackX_18,arg4), -1 < iVar3))) {
                    uVar2 = uVar6 + auStack_38[0];
                    uVar8 = uVar6;
                }
                *(iVar5 + 0xa0) = arg2 % uVar7;
                *(iVar5 + 0x98) = (uVar4 - uVar8) + iStackX_18;
                goto code_r0x000114ce;
            }
        }
        iVar3 = -0x7fffffffffffffe1;
    }
    return iVar3;
}


/* fcn.00013c70 @ 0x13c70 */

ulong fcn.00013c70(int64_t arg1,int64_t *arg2,int64_t arg3,int64_t arg4)

{
    uint8_t *puVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uint64_t uVar7;
    uint8_t uVar8;
    uint8_t *puVar9;
    uchar *in_stack_00000028;
    uint8_t *in_stack_00000030;
    
    iVar5 = 0;
    uVar7 = 0;
    uVar4 = 0;
    uVar8 = *in_stack_00000030 >> 4;
    uVar6 = *in_stack_00000030 & 0xf;
    for (uVar3 = uVar6; uVar3 != 0; uVar3 = uVar3 - 1) {
        iVar5 = iVar5 * 0x100 + in_stack_00000030[(uVar3 - 1) + 1];
    }
    puVar9 = in_stack_00000030 + uVar6 + 1;
    puVar1 = puVar9 + (uVar8 - 1);
    uVar3 = uVar8;
    if (uVar8 == 0) {
        *in_stack_00000028 = 1;
    }
    else {
        for (; uVar3 != 0; uVar3 = uVar3 - 1) {
            uVar7 = uVar7 * 0x100 + puVar9[uVar3 - 1];
        }
        puVar9 = puVar9 + uVar8;
        if ((*puVar1 < '\0') && (uVar8 < 8)) {
            uVar2 = 8 - uVar8;
            do {
                uVar4 = uVar4 >> 8 | 0xff00000000000000;
                uVar2 = uVar2 - 1;
            } while (uVar2 != 0);
            uVar7 = uVar7 | uVar4;
        }
    }
    *arg3 = *arg3 + uVar7;
    *arg2 = iVar5;
    if (arg4 != '\0') {
        *arg1 = puVar9;
    }
    return 0;
}


/* fcn.00011684 @ 0x11684 */

int64_t fcn.00011684(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t *piVar6;
    char *pcVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t *piStackX_8;
    uint32_t uStackX_10;
    int64_t aiStack_38 [2];
    
    iVar8 = *(arg1 + 0x288);
    uVar9 = uStackX_10;
    uVar3 = arg2 >> 7 & 0x1ffffff;
    uVar11 = uVar3 + 1;
    if ((arg2 & 0x7fU) == 0) {
        uVar11 = uVar3;
    }
    do {
        if (iVar8 == 0) {
            iVar4 = (**(*0x14b20 + 0x40))(4,0x8100,aiStack_38);
            iVar8 = *0x14b20;
            if (-1 < iVar4) {
                *(arg1 + 0x1e8) = *(arg1 + 0x1e8) + 0x8100;
                iVar4 = (**(iVar8 + 0x40))(4,0x30,&piStackX_8);
                if (iVar4 < 0) {
                    (**(*0x14b20 + 0x48))();
                }
                else {
                    *(arg1 + 0x1e8) = *(arg1 + 0x1e8) + 0x30;
                    *piStackX_8 = aiStack_38[0];
                    *(piStackX_8 + 1) = 0x100;
                    piStackX_8[2] = aiStack_38[0] + 0x100;
                    piStackX_8[3] = aiStack_38[0] + 0x8100;
                    piVar6 = piStackX_8 + 4;
                    *piVar6 = 0;
                    piStackX_8[5] = *(arg1 + 0x288);
                    if (*(arg1 + 0x280) == 0) {
                        *(arg1 + 0x280) = piVar6;
                    }
                    else {
                        **(arg1 + 0x288) = piVar6;
                    }
                    *(arg1 + 0x278) = *(arg1 + 0x278) + 1;
                    *(arg1 + 0x288) = piVar6;
                    fcn.00010280(aiStack_38[0],0x100);
                }
            }
            if (iVar4 < 0) {
                return iVar4;
            }
            iVar8 = *(arg1 + 0x288);
        }
        pcVar1 = *(iVar8 + -0x20);
        uVar2 = 0;
        uVar5 = 0;
        iVar4 = -0x7ffffffffffffff2;
        pcVar7 = pcVar1;
code_r0x000117e1:
        if (*pcVar7 != '\0') {
            uVar2 = 0;
code_r0x0001183e:
            uVar5 = uVar5 + 1;
            pcVar7 = pcVar7 + 1;
            if (0xff < uVar5) goto code_r0x0001182e;
            goto code_r0x000117e1;
        }
        if (uVar2 == 0) {
            uVar9 = uVar5;
        }
        uVar2 = uVar2 + 1;
        uVar10 = uVar11;
        if (uVar2 < uVar10) goto code_r0x0001183e;
        iVar4 = 0;
        *arg3 = (uVar9 << 7) + *(iVar8 + -0x10);
        uVar2 = 0;
        if (uVar10 != 0) {
            do {
                uVar2 = uVar2 + 1;
                pcVar1[uVar9] = uVar2;
                uVar9 = uVar9 + 1;
            } while (uVar2 < uVar10);
        }
        if ((arg4 != '\0') && ((uVar11 & 0x1ffffff) != 0)) {
            fcn.00010280(*arg3,uVar10 << 7);
        }
code_r0x0001182e:
        if (iVar4 == 0) {
            return 0;
        }
        iVar8 = *(iVar8 + 8);
    } while( true );
}


/* fcn.00011c70 @ 0x11c70 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00011c70(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int *arg2_00;
    int64_t iVar3;
    int64_t arg3;
    int *piVar4;
    ulong uVar5;
    ulong in_R9;
    int64_t *piStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    int *apiStack_48 [2];
    int64_t var_10h;
    
    iVar2 = 0;
    piStackX_18 = NULL;
    iVar1 = fcn.00011684(arg1,0x160,&piStackX_18,CONCAT71(in_R9 >> 8,1));
    if ((iVar1 < 0) || (iVar1 = fcn.00011684(arg1,4,piStackX_18 + 3,0), iVar1 < 0)) {
        return -0x7ffffffffffffff7;
    }
    *piStackX_18[3] = 0;
    *(piStackX_18 + 2) = 1;
    *piStackX_18 = arg1;
    piStackX_18[0xd] = 0x10;
    piStackX_18[1] = 0;
    *(piStackX_18 + 0x10) = 0;
    *(piStackX_18 + 0x74) = 5;
    *(piStackX_18 + 0xf) = 5;
    arg2_00 = *(arg1 + 0x208);
    iVar3 = *(arg1 + 0x2d) * *(arg1 + 0x50);
    *(arg1 + 0x220) = 1;
    apiStack_48[0] = arg2_00;
    iVar1 = fcn.00010de8(arg1,arg2_00,iVar3,0);
    if (iVar1 < 0) goto code_r0x0001200d;
    *(arg1 + 0x1fc) = arg2_00[7];
    iStackX_20 = 0;
    if (*arg2_00 == 0x454c4946) {
        arg3 = CONCAT71(iVar3 >> 8,0x30);
        iVar1 = fcn.00013d74(arg1,arg2_00,arg3,&iStackX_20);
        iVar3 = iVar2;
        if (iVar1 < 0) goto code_r0x00011e19;
        if ((*(iStackX_20 + 8) == '\0') && (*(iStackX_20 + 0xc) == 0)) {
            iVar3 = iStackX_20 + *(iStackX_20 + 0x14);
            iStackX_20 = iVar3;
            if (*arg2_00 != 0x454c4946) goto code_r0x00011da5;
            iVar1 = fcn.00013d74(arg1,arg2_00,CONCAT71(arg3 >> 8,0x80),&iStackX_20);
            iVar2 = 0;
            if (-1 < iVar1) {
                iVar1 = 0;
                iVar2 = *(iStackX_20 + 0x20) + iStackX_20;
            }
            goto code_r0x00011e19;
        }
code_r0x00011dce:
        iVar1 = -0x7ffffffffffffff2;
        goto code_r0x0001200d;
    }
code_r0x00011da5:
    iVar1 = -0x7ffffffffffffff2;
    iVar3 = iStackX_20;
code_r0x00011e19:
    if (iVar1 < 0) goto code_r0x0001200d;
    if ((((*(iVar3 + 0x42) != 0x24) || (*(iVar3 + 0x44) != 0x4d)) || (*(iVar3 + 0x46) != 0x46)) ||
       ((*(iVar3 + 0x48) != 0x54 || (*(iVar3 + 0x40) != '\x04')))) {
        iVar1 = -0x7ffffffffffffff2;
    }
    if (iVar1 < 0) goto code_r0x0001200d;
    (**(*0x14b20 + 0x160))(arg1 + 0x290,iVar2,0x100);
    piVar4 = arg2_00;
    iVar1 = fcn.00013fbc(arg1,5,arg2_00,0);
    if (iVar1 < 0) goto code_r0x0001200d;
    fcn.00010280(piStackX_18 + 4,0x54);
    iStackX_20 = 0;
    piStackX_18[4] = 0x5000000000005;
    *(piStackX_18 + 5) = 0x58;
    *(piStackX_18 + 0x2a) = 0x44;
    if (*arg2_00 != 0x454c4946) goto code_r0x00011dce;
    iVar1 = fcn.00013d74(arg1,arg2_00,CONCAT71(piVar4 >> 8,0x30),&iStackX_20);
    if (iVar1 < 0) goto code_r0x0001200d;
    uVar5 = 0;
    iStackX_20 = iStackX_20 + *(iStackX_20 + 0x14);
    (**(*0x14b20 + 0x160))(piStackX_18 + 6,iStackX_20,0x44);
    if ((*(piStackX_18 + 0x71) != '\x02') && ((piStackX_18[0xd] >> 0x1c & 1) != 0)) {
        piStackX_18[0xb] = 0;
        piStackX_18[0xc] = 0;
        piStackX_18[0xd] = piStackX_18[0xd] & 0xffffffffefffffffU | 0x10;
    }
    if (*arg2_00 == 0x454c4946) {
        iVar1 = CONCAT71(uVar5 >> 8,0x90);
        iVar2 = fcn.00013d74(arg1,arg2_00,iVar1,&iStackX_20);
        if ((-1 < iVar2) && (0x58 < *(iStackX_20 + 4))) {
            *(piStackX_18 + 0x10) = 2;
        }
        if (*arg2_00 != 0x454c4946) goto code_r0x00011f81;
        iVar1 = fcn.00013d74(arg1,arg2_00,CONCAT71(iVar1 >> 8,0xa0),apiStack_48);
        arg2_00 = apiStack_48[0];
        if (iVar1 < 0) goto code_r0x00011fa4;
    }
    else {
code_r0x00011f81:
        iVar1 = -0x7ffffffffffffff2;
code_r0x00011fa4:
        if (piStackX_18[0x10] != '\x02') goto code_r0x0001200d;
        *(piStackX_18 + 0x10) = 1;
    }
    if (piStackX_18[0x10] != '\x01') {
        (**(*0x14b20 + 0x160))(piStackX_18 + 0x1c,arg2_00 + *(arg2_00 + 8),0x80);
    }
    piStackX_18[0x13] = 0;
    iVar1 = 0;
    piStackX_18[0x14] = 0;
    piStackX_18[0x12] = 0;
    *arg2 = piStackX_18;
code_r0x0001200d:
    *(arg1 + 0x220) = 0;
    return iVar1;
}


/* fcn.00014790 @ 0x14790 */

ulong fcn.00014790(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if (((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) {
        return 0x8000000000000002;
    }
    fcn.00014764(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (extraout_RAX + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x00014801;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x00014801:
    iVar1 = *arg3;
    if (iVar1 != 0) {
        arg3 = arg3 - arg1;
        do {
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            iVar1 = *(arg3 + arg1);
        } while (iVar1 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.00014764 @ 0x14764 */

uint64_t fcn.00014764(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.000145d4 @ 0x145d4 */

ulong fcn.000145d4(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    ulong uVar2;
    uint in_register_0000000c;
    char *pcVar3;
    uint64_t uVar4;
    char *pcVar5;
    uint64_t uVar6;
    char *pcVar7;
    char *pcVar8;
    int64_t iVar9;
    int64_t iVar10;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    pcVar7 = &cStack_38;
    pcVar8 = &cStack_38;
    if (pcVar3 == NULL) {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar10 = 0;
        uVar6 = arg3;
        if (arg3 < 0) {
            iVar10 = 1;
            pcVar7 = &cStack_38;
            uVar6 = -arg3;
            do {
                pcVar7 = pcVar7 + 1;
                uVar4 = uVar6 / 10;
                *pcVar7 = "0123456789ABCDEF"[uVar6 % 10];
                uVar6 = uVar4;
            } while (uVar4 != 0);
        }
        else {
            do {
                pcVar7 = pcVar7 + 1;
                uVar4 = uVar6 / 10;
                *pcVar7 = "0123456789ABCDEF"[uVar6 % 10];
                uVar6 = uVar4;
            } while (uVar4 != 0);
        }
        pcVar5 = 0xf;
        if (pcVar7 + (iVar10 - &cStack_38) < 0xf) {
            pcVar5 = pcVar7 + (iVar10 - &cStack_38);
        }
        if (pcVar5 * 2 + 2U < 0x21) {
            pcVar7 = pcVar3 + pcVar5 * 2;
            if (arg3 < 0) {
                arg3 = -arg3;
                iVar10 = 0;
                do {
                    if (pcVar7 <= pcVar3) break;
                    pcVar3[0] = '-';
                    pcVar3[1] = '\0';
                    iVar10 = iVar10 + 1;
                    pcVar3 = pcVar3 + 2;
                } while (iVar10 < 1);
            }
            do {
                pcVar8 = pcVar8 + 1;
                uVar6 = arg3 / 10;
                *pcVar8 = "0123456789ABCDEF"[arg3 % 10];
                arg3 = uVar6;
            } while (uVar6 != 0);
            for (iVar10 = pcVar8 - &cStack_38; iVar10 != 0; iVar10 = iVar10 + -1) {
                cVar1 = *pcVar8;
                iVar9 = 0;
                do {
                    if (pcVar7 <= pcVar3) break;
                    *pcVar3 = cVar1;
                    iVar9 = iVar9 + 1;
                    pcVar3[1] = cVar1 >> 7;
                    pcVar3 = pcVar3 + 2;
                } while (iVar9 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar10 = 0;
            do {
                if (pcVar7 + 2 <= pcVar3) break;
                pcVar3[0] = '\0';
                pcVar3[1] = '\0';
                iVar10 = iVar10 + 1;
                pcVar3 = pcVar3 + 2;
            } while (iVar10 < 1);
            uVar2 = 0;
        }
        else {
            uVar2 = 0x8000000000000005;
        }
    }
    return uVar2;
}


/* fcn.00012030 @ 0x12030 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00012030(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    ulong *puVar2;
    ulong uVar3;
    ulong *puStackX_20;
    int64_t var_30h;
    int64_t var_48h;
    ulong uStack_48;
    int64_t iStack_40;
    uchar auStack_38 [16];
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    arg1_00 = *arg1;
    puStackX_20 = NULL;
    uStack_48 = 0;
    iStack_40 = 0;
    iVar1 = fcn.00011684(arg1_00,0xd0,&puStackX_20,1);
    if (iVar1 < 0) {
        return -0x7ffffffffffffff7;
    }
    uVar3 = 0;
    iVar1 = 0;
    if ((*(arg1 + 0x80) & 0xfd) == 0) {
        if (*(arg1 + 0xe0) == '\0') {
            return -0x7fffffffffffffe1;
        }
        iVar1 = fcn.00013c70(auStack_38,&iStack_40,&uStack_48,0);
        if (iVar1 < 0) {
            return iVar1;
        }
        uVar3 = uStack_48;
        iVar1 = iStack_40;
    }
    puStackX_20[0x12] = 0;
    puStackX_20[0xf] = 0;
    puStackX_20[0x13] = uVar3;
    *(puStackX_20 + 0x14) = 0;
    puStackX_20[0x15] = iVar1;
    puStackX_20[0x16] = arg1 + 0xe0;
    puStackX_20[0x10] = arg1;
    puStackX_20[0x11] = arg3;
    puStackX_20[1] = 0x12230;
    puStackX_20[2] = 0x134ac;
    puStackX_20[3] = 0x125c0;
    puStackX_20[4] = 0x12334;
    puStackX_20[5] = 0x12514;
    puStackX_20[6] = 0x1129c;
    puStackX_20[7] = 0x112ec;
    puStackX_20[8] = 0x1365c;
    puStackX_20[9] = 0x12538;
    puStackX_20[10] = 0x125c8;
    *puStackX_20 = 0x10000;
    *(arg1 + 0x7c) = *(arg1 + 0x7c) + 1;
    puVar2 = puStackX_20 + 0xb9;
    *puVar2 = 0;
    *(puStackX_20 + 0xc1) = *(arg1_00 + 600);
    if (*(arg1_00 + 0x250) == 0) {
        *(arg1_00 + 0x250) = puVar2;
    }
    else {
        **(arg1_00 + 600) = puVar2;
    }
    *(arg1_00 + 0x248) = *(arg1_00 + 0x248) + 1;
    *(arg1_00 + 600) = puVar2;
    *arg2 = puStackX_20;
    return 0;
}


/* fcn.00010de8 @ 0x10de8 */

int64_t fcn.00010de8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg2_00;
    uint64_t uVar1;
    int64_t iVar2;
    bool bVar3;
    ulong auStackX_18 [2];
    uint64_t in_stack_00000028;
    uint32_t in_stack_00000030;
    
    iVar2 = (arg3 << (*(arg1 + 0x180) & 0x3f)) + (arg4 & 0xffffffffU);
    if (in_stack_00000030 == 3) {
        arg2_00 = (**(*(arg1 + 0x1c8) + 8))(*(arg1 + 0x1c8),*(arg1 + 0x1d8),iVar2,in_stack_00000028,arg2);
        if (arg2_00 < 0) {
            iVar2 = arg2_00 + 0x7ffffffffffffff4;
            bVar3 = arg2_00 == -0x7ffffffffffffff3;
code_r0x00010e60:
            if (iVar2 == 0 || bVar3) {
                fcn.0001116c(arg1,arg2_00);
            }
        }
    }
    else {
        for (; in_stack_00000028 != 0; in_stack_00000028 = in_stack_00000028 - uVar1) {
            arg2_00 = fcn.00010f10(arg1,iVar2,in_stack_00000028 & 0xffffffff,auStackX_18);
            if (arg2_00 < 0) {
                iVar2 = arg2_00 + 0x7ffffffffffffff4;
                bVar3 = iVar2 == 1;
                goto code_r0x00010e60;
            }
            uVar1 = in_stack_00000030;
            (**(*0x14b20 + 0x160))(arg2,auStackX_18[0],in_stack_00000030);
            arg2 = arg2 + uVar1;
            iVar2 = iVar2 + uVar1;
        }
        arg2_00 = 0;
    }
    return arg2_00;
}


/* fcn.00013d74 @ 0x13d74 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00013d74(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int iVar2;
    bool bVar3;
    bool bVar4;
    uint8_t uVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    uint32_t *puVar8;
    uint8_t *puVar9;
    uint32_t uVar10;
    uint8_t uVar11;
    int64_t arg4_00;
    uint32_t *puStackX_10;
    uint32_t uStackX_18;
    int64_t var_48h;
    int32_t var_50h;
    int64_t iStack_58;
    int64_t iStack_50;
    uchar auStack_48 [16];
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    bVar4 = false;
    bVar3 = false;
    puVar8 = NULL;
    puStackX_10 = NULL;
    uVar11 = arg3;
    puVar9 = *(arg2 + 0x14) + arg2;
    uVar5 = *puVar9;
    if (uVar5 != uVar11) {
        do {
            if (uVar5 == 0x20) {
                if (puVar9[8] == 0) {
                    iVar6 = fcn.00011574(arg1,*(arg1 + 0x1fc),&puStackX_10,0);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    uVar1 = *(puVar9 + 0x14);
                    iVar2 = *(puVar9 + 4);
                    (**(*0x14b20 + 0x160))(puStackX_10,puVar9 + *(puVar9 + 0x14));
                    uStackX_18 = iVar2 - uVar1;
                    bVar3 = true;
                }
                else {
                    iStack_50 = 0;
                    iStack_58 = 0;
                    if (puVar9[*(puVar9 + 0x20)] == 0) {
                        return -0x7fffffffffffffe1;
                    }
                    arg4_00 = 0;
                    iVar6 = fcn.00013c70(auStack_48,&iStack_58,&iStack_50,0);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    uVar10 = *(arg1 + 0x184) * iStack_58;
                    iVar6 = fcn.00011574(arg1,uVar10,&puStackX_10,arg4_00);
                    if (iVar6 < 0) {
                        return iVar6;
                    }
                    iVar6 = fcn.00010de8(arg1,puStackX_10,*(arg1 + 0x2d) * iStack_50,0);
                    uStackX_18 = uVar10;
                    bVar3 = bVar4;
                    if (-1 < iVar6) {
                        bVar3 = true;
                    }
                }
                puVar8 = puStackX_10;
                bVar4 = bVar3;
            }
            if (uVar11 < *puVar9) {
                if (!bVar3) goto code_r0x00013f9d;
                uVar10 = *puVar8;
                iVar6 = 0;
                puVar7 = puVar8;
                goto code_r0x00013f25;
            }
            if ((*puVar9 == 0xff) || (*(puVar9 + 4) == 0)) goto code_r0x00013f9d;
            puVar9 = puVar9 + *(puVar9 + 4);
            uVar5 = *puVar9;
        } while (uVar5 != uVar11);
    }
    *arg4 = puVar9;
code_r0x00013edd:
    if (puVar8 != NULL) {
        fcn.00011600(arg1,puVar8);
    }
    return 0;
code_r0x00013f25:
    if (uVar10 == 0x10) {
        iVar6 = *(puVar7 + 4);
    }
    if ((arg3 & 0xff) == uVar10) {
        if (*(puVar7 + 4) != iVar6) {
            iVar6 = fcn.00013fbc(arg1,*(puVar7 + 4),arg2,0);
            puVar8 = puStackX_10;
            if (iVar6 == 0) {
                puVar9 = *(arg2 + 0x14) + arg2;
                goto code_r0x00013f85;
            }
        }
        goto code_r0x00013f9d;
    }
    puVar7 = puVar7 + puVar7[1];
    uStackX_18 = uStackX_18 - puVar7[1];
    uVar10 = *puVar7;
    if ((uVar10 == 0) || (uStackX_18 == 0)) goto code_r0x00013f9d;
    goto code_r0x00013f25;
code_r0x00013f85:
    uVar5 = *puVar9;
    if (uVar5 == uVar11) goto code_r0x00013f8c;
    if (((uVar11 < uVar5) || (uVar5 == 0xff)) || (*(puVar9 + 4) == 0)) {
code_r0x00013f9d:
        if (puVar8 != NULL) {
            fcn.00011600(arg1,puVar8);
        }
        return -0x7ffffffffffffff2;
    }
    puVar9 = puVar9 + *(puVar9 + 4);
    goto code_r0x00013f85;
code_r0x00013f8c:
    *arg4 = puVar9;
    goto code_r0x00013edd;
}


/* fcn.00013fbc @ 0x13fbc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h

uint64_t fcn.00013fbc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t iVar2;
    int iVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    char *pcVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uStackX_10;
    int64_t var_48h;
    int32_t var_50h;
    int64_t iStack_68;
    char *pcStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int64_t var_10h;
    
    uVar4 = 0;
    pcStack_60 = arg1 + 0x290;
    iStack_68 = 0;
    uVar5 = arg2 & 0xffffffffffff;
    uVar11 = 0;
    if (*pcStack_60 != '\0') {
        fcn.00013c70(&pcStack_60,&iStack_58,&iStack_68,CONCAT71(arg4 >> 8,1));
    }
    uVar7 = *(arg1 + 0x184) * iStack_58;
    uVar8 = uVar7;
    if ((*(arg1 + 0x184) != 0x200) || (uVar8 = uVar7 >> 1, (uVar7 & 1) == 0)) {
        uVar1 = *(arg1 + 0x1fc);
        uStackX_10 = 0;
        uVar10 = uVar1;
        if (uVar1 < *(arg1 + 0x2b)) {
            uVar7 = *(arg1 + 0x2b) / uVar10;
            uStackX_10 = uVar7;
        }
        else {
            uVar11 = uVar10 / *(arg1 + 0x2b);
            uVar7 = uVar4;
        }
        iVar6 = *(arg1 + 0x2d) * iStack_68;
        if (uVar11 == 0) {
            iVar3 = uVar5 % uVar7;
        }
        else {
            iVar3 = 0;
        }
        if (uVar5 != 0) {
            uStack_50 = 0;
            pcVar9 = pcStack_60;
            do {
                if (uVar8 == 0) {
                    if (*pcVar9 == '\0') {
                        return 0x800000000000000e;
                    }
                    iVar6 = fcn.00013c70(&pcStack_60,&iStack_58,&iStack_68,CONCAT71(uStack_50 >> 8,1));
                    if (iVar6 < 0) {
                        return 0x800000000000000e;
                    }
                    uVar7 = *(arg1 + 0x184) * iStack_58;
                    uVar8 = uVar7;
                    if ((*(arg1 + 0x184) == 0x200) && (uVar8 = uVar7 >> 1, (uVar7 & 1) != 0)) {
                        return 0x800000000000000e;
                    }
                    iVar6 = *(arg1 + 0x2d) * iStack_68;
                    pcVar9 = pcStack_60;
                }
                else {
                    iVar6 = iVar6 + uVar11;
                    if (((uVar11 == 0) && (uStack_50 != 0)) && (uStack_50 % uStackX_10 == 0)) {
                        iVar6 = iVar6 + 1;
                    }
                    uVar8 = uVar8 - uVar1;
                    uStack_50 = uStack_50 + 1;
                }
            } while (uStack_50 < uVar5);
        }
        if (((uVar11 == 0) && (iVar3 == 0)) && (uVar5 != 0)) {
            iVar6 = iVar6 + 1;
        }
        iVar2 = fcn.00010de8(arg1,arg3,iVar6,iVar3 * uVar10);
        if ((-1 < iVar2) && (*arg3 == 0x454c4946)) {
            if (arg4 != 0) {
                *arg4 = iVar6;
            }
            iVar6 = fcn.000141f4(arg1,arg3);
            if (iVar6 < 0) {
                uVar4 = 0x800000000000000e;
            }
            return uVar4;
        }
    }
    return 0x800000000000000e;
}


/* fcn.000125f0 @ 0x125f0 */

uint64_t fcn.000125f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    int *arg3_00;
    uint32_t uVar1;
    int64_t iVar2;
    int **ppiVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    uint64_t uVar9;
    uint16_t *puVar10;
    uint16_t *puVar11;
    uint16_t uVar12;
    int64_t *piVar13;
    int64_t *arg1_01;
    uint64_t uVar14;
    ulong *puVar15;
    int *piVar16;
    unkbyte7 Var17;
    ulong uVar18;
    int *piStackX_8;
    uint uStack0000000000000028;
    ushort uStack000000000000002c;
    int64_t *piStack_248;
    ulong uStack_240;
    uint16_t auStack_238 [264];
    
    piVar13 = *(arg1 + 0x80);
    uVar6 = 0;
    uVar18 = 0x2e;
    uStack0000000000000028 = 0x2e002e;
    piStackX_8 = CONCAT44(piStackX_8._4_4_,0x2e);
    uStack000000000000002c = 0;
    arg1_00 = *piVar13;
    if (piVar13[1] < 0) {
        return piVar13[1];
    }
    if (**arg2 == 0x5c) {
        piVar13 = *(arg1_00 + 0x228);
        *arg2 = *arg2 + 1;
    }
    iVar2 = *arg2;
    uVar1 = fcn.00014764(iVar2,0x104);
    if ((2 < uVar1) && (*(iVar2 + (uVar1 - 1) * 2) == 0x5c)) {
        *(iVar2 + (uVar1 - 1) * 2) = 0;
    }
code_r0x0001268f:
    arg1_01 = piVar13;
    uVar5 = uVar6;
code_r0x00012692:
    puVar4 = *arg2;
    uVar8 = *puVar4;
    auStack_238[0] = uVar8;
    uVar9 = uVar6;
    while ((uVar8 != 0 && (puVar4[uVar9] != 0x5c))) {
        uVar1 = uVar9 + 1;
        auStack_238[uVar9] = puVar4[uVar9];
        if (0x104 < uVar1) {
            return 0x800000000000000e;
        }
        uVar8 = puVar4[uVar1];
        uVar9 = uVar1;
    }
    uVar8 = puVar4[uVar9];
    auStack_238[uVar9] = 0;
    uVar14 = uVar9 + 1;
    if (uVar8 != 0x5c) {
        uVar14 = uVar9;
    }
    if (((uVar14 != 0) && (puVar4[uVar14 - 1] == 0x5c)) && (puVar4[uVar14] == 0)) {
        return 0x800000000000000e;
    }
    *arg2 = puVar4 + uVar14;
    if (auStack_238[0] == 0) {
        if (uVar5 < 0) goto code_r0x000129dc;
        if (arg1_01[2] != '\0') goto code_r0x00012b5d;
        arg3_00 = *(arg1_00 + 0x208);
        *(arg1_00 + 0x220) = 1;
        piVar16 = arg3_00;
        piStackX_8 = arg3_00;
        iVar2 = fcn.00013fbc(arg1_00,arg1_01[4],arg3_00,&stack0x00000028);
        if (iVar2 < 0) {
            uVar6 = 0x800000000000000e;
code_r0x00012ba1:
            *(arg1_00 + 0x220) = 0;
            return uVar6;
        }
        Var17 = piVar16 >> 8;
        if ((*(arg3_00 + 0x16) & 2) == 0) {
            if ((*arg3_00 != 0x454c4946) ||
               (iVar2 = fcn.00013d74(arg1_00,arg3_00,CONCAT71(Var17,0x80),&piStackX_8), iVar2 < 0)) {
                uVar6 = 0x800000000000000f;
                goto code_r0x00012ba1;
            }
            if (piStackX_8[2] == '\0') goto code_r0x00012b4f;
            (**(*0x14b20 + 0x160))(arg1_01 + 0x1c,piStackX_8 + *(piStackX_8 + 8),0x80);
            *(arg1_01 + 0x10) = 0;
        }
        else if ((*arg3_00 == 0x454c4946) &&
                (iVar2 = fcn.00013d74(arg1_00,arg3_00,CONCAT71(Var17,0xa0),&piStackX_8), iVar2 == 0)) {
            uVar18 = 0;
            piStackX_8 = piStackX_8 + *(piStackX_8 + 8);
            (**(*0x14b20 + 0x160))(arg1_01 + 0x1c,piStackX_8,0x80);
            *(arg1_01 + 0x10) = 0;
            if ((*arg3_00 == 0x454c4946) &&
               ((iVar2 = fcn.00013d74(arg1_00,arg3_00,CONCAT71(uVar18 >> 8,0x90),&piStackX_8), iVar2 == 0 &&
                (0x58 < piStackX_8[1])))) {
                *(arg1_01 + 0x10) = 2;
            }
        }
        else {
code_r0x00012b4f:
            *(arg1_01 + 0x10) = 1;
        }
        *(arg1_00 + 0x220) = 0;
code_r0x00012b5d:
        uVar6 = fcn.00012030(arg1_01,&uStack_240,arg4);
        *arg3 = uStack_240;
        return uVar6;
    }
    puVar4 = auStack_238;
    uVar7 = 1;
    puVar11 = auStack_238;
    uVar8 = auStack_238[0];
    do {
        uVar9 = uVar6;
        if (uVar8 == uVar18) {
            uVar9 = uVar7;
        }
        puVar11 = puVar11 + 1;
        uVar7 = uVar9;
        uVar8 = *puVar11;
    } while (uVar8 != 0);
    if (uVar7 == 0) {
        puVar11 = auStack_238;
        uVar8 = auStack_238[0];
        while (uVar8 == 0x20) {
            puVar11 = puVar11 + 1;
            uVar8 = *puVar11;
        }
        uVar8 = *puVar11;
        puVar10 = auStack_238;
        if (uVar8 != 0) {
            do {
                *puVar10 = uVar8;
                puVar10 = puVar10 + 1;
                uVar8 = *((puVar11 - auStack_238) + puVar10);
            } while (uVar8 != 0);
        }
        *puVar10 = 0;
        iVar2 = fcn.00014764(auStack_238,0xff);
        for (puVar11 = auStack_238 + iVar2 + -1;
            (auStack_238 <= puVar11 && ((*puVar11 == 0x20 || (*puVar11 == uVar18)))); puVar11 = puVar11 + -1) {
        }
        puVar11[1] = 0;
        uVar8 = auStack_238[0];
        if (auStack_238[0] == 0) {
            return 0x800000000000000e;
        }
        do {
            if ((uVar8 < 0x40) && ((0xd4008404ffffffffU >> (uVar8 & 0x3f) & 1) != 0)) {
                return 0x800000000000000e;
            }
            if (uVar8 == 0x5c) {
                return 0x800000000000000e;
            }
            if (uVar8 == 0x7c) {
                return 0x800000000000000e;
            }
            puVar4 = puVar4 + 1;
            uVar8 = *puVar4;
        } while (*puVar4 != 0);
    }
    ppiVar3 = &piStackX_8;
    puVar4 = auStack_238;
    uVar8 = auStack_238[0];
    do {
        if (uVar8 != *ppiVar3) break;
        puVar4 = puVar4 + 1;
        ppiVar3 = ppiVar3 + 2;
        uVar8 = *puVar4;
    } while (uVar8 != 0);
    if (*puVar4 != *ppiVar3) {
        puVar4 = &stack0x00000028;
        puVar11 = auStack_238;
        uVar8 = auStack_238[0];
        do {
            if (uVar8 != *puVar4) break;
            puVar11 = puVar11 + 1;
            puVar4 = puVar4 + 1;
            uVar8 = *puVar11;
        } while (uVar8 != 0);
        if (*puVar11 != *puVar4) {
            if ((*(arg1_01 + 0xd) & 0x10) != 0) {
                for (puVar15 = arg1_01[0x18]; puVar15 != NULL; puVar15 = *puVar15) {
                    piVar13 = puVar15 + -0x1a;
                    puVar4 = auStack_238;
                    for (puVar11 = puVar15[-0x17]; uVar8 = *puVar11, uVar8 != 0; puVar11 = puVar11 + 1) {
                        if (uVar8 - 0x61 < 0x1a) {
                            uVar8 = uVar8 - 0x20;
                        }
                        uVar12 = *puVar4;
                        if (uVar12 - 0x61 < 0x1a) {
                            uVar12 = uVar12 - 0x20;
                        }
                        if (uVar8 != uVar12) break;
                        puVar4 = puVar4 + 1;
                    }
                    if ((*puVar11 == *puVar4) && (puVar15[-0x19] == 0)) {
                        uVar18 = 0x2e;
                        piStack_248 = piVar13;
                        goto code_r0x0001268f;
                    }
                }
                if ((arg1_01[0x13] == 0) && (iVar2 = fcn.00012bac(arg1_01), iVar2 < 0)) {
                    return uVar5;
                }
                puVar15 = arg1_01[0x13];
                do {
                    if (puVar15 == NULL) break;
                    puVar4 = auStack_238;
                    for (puVar11 = *(puVar15 + -0xc); uVar8 = *puVar11, uVar8 != 0; puVar11 = puVar11 + 1) {
                        if (uVar8 - 0x61 < 0x1a) {
                            uVar8 = uVar8 - 0x20;
                        }
                        uVar12 = *puVar4;
                        if (uVar12 - 0x61 < 0x1a) {
                            uVar12 = uVar12 - 0x20;
                        }
                        if (uVar8 != uVar12) break;
                        puVar4 = puVar4 + 1;
                    }
                    if (*puVar11 == *puVar4) goto code_r0x00012994;
                    puVar15 = *puVar15;
                } while( true );
            }
            goto code_r0x000129dc;
        }
        if ((arg1_01 == *(arg1_00 + 0x228)) || (arg1_01 = arg1_01[0x11], arg1_01 == NULL)) goto code_r0x000129dc;
    }
    goto code_r0x000129b6;
code_r0x00012994:
    uVar5 = fcn.00013344(puVar15 + -100,arg1_01,&piStack_248);
    uVar18 = 0x2e;
    if (uVar5 == 0) {
        arg1_01 = piStack_248;
    }
code_r0x000129b6:
    if (uVar5 < 0) {
code_r0x000129dc:
        if (**arg2 != 0) {
            return 0x800000000000000e;
        }
        if (arg4 < 0) {
            return 0x8000000000000003;
        }
        return 0x800000000000000e;
    }
    goto code_r0x00012692;
}


/* fcn.00012bac @ 0x12bac */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_30h

int64_t fcn.00012bac(int64_t arg1)

{
    uint16_t uVar1;
    uint64_t arg1_00;
    uint64_t *arg3;
    bool bVar2;
    bool bVar3;
    int64_t iVar4;
    uint32_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint64_t uVar8;
    int64_t *piVar9;
    uint64_t uVar10;
    ulong *puVar11;
    uint64_t *puVar12;
    ulong uVar13;
    char *pcVar14;
    uint64_t uVar15;
    uint64_t *puVar16;
    uint64_t uVar17;
    int64_t iStackX_10;
    uint32_t uStackX_18;
    int iStackX_20;
    int8_t var_50h;
    int64_t var_58h;
    int32_t var_60h;
    int32_t var_bp_68h;
    uint32_t uStack_118;
    int64_t iStack_110;
    uint64_t *puStack_108;
    int iStack_100;
    uint64_t *puStack_f8;
    uint32_t uStack_f0;
    int64_t *piStack_e8;
    uint64_t uStack_e0;
    int64_t iStack_d8;
    uint64_t uStack_d0;
    char *pcStack_c8;
    uint64_t uStack_c0;
    int64_t aiStack_b8 [2];
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int64_t var_70h;
    uint64_t uStack_70;
    int64_t var_60h_2;
    int iStack_60;
    int iStack_5c;
    int64_t var_50h_2;
    int64_t var_bp_40h;
    int64_t var_bp_30h;
    int64_t var_bp_20h;
    int32_t var_10h;
    
    arg1_00 = *arg1;
    uVar8 = 0;
    iStack_100 = 0;
    bVar3 = true;
    if (100 < *(arg1_00 + 0x1ec)) {
        fcn.00013580(arg1_00,0);
    }
    uStack_118 = *(arg1_00 + 0x184);
    arg3 = *(arg1_00 + 0x208);
    *(arg1_00 + 0x220) = 1;
    if ((*(arg1 + 0x80) == '\0') && (*(arg1 + 0xe0) == '\0')) {
        puVar12 = arg3;
        iVar6 = fcn.00013fbc(arg1_00,*(arg1 + 0x20),arg3,0);
        if (iVar6 < 0) {
            iVar6 = -0x7ffffffffffffff2;
            goto code_r0x00013328;
        }
        if ((*arg3 == 0x454c4946) &&
           (iVar6 = fcn.00013d74(arg1_00,arg3,CONCAT71(puVar12 >> 8,0xa0),&iStackX_10), iVar6 == 0)) {
            uVar13 = 0;
            iStackX_10 = iStackX_10 + *(iStackX_10 + 0x20);
            (**(*0x14b20 + 0x160))(arg1 + 0xe0,iStackX_10,0x80);
            *(arg1 + 0x80) = 0;
            if ((*arg3 == 0x454c4946) &&
               ((iVar6 = fcn.00013d74(arg1_00,arg3,CONCAT71(uVar13 >> 8,0x90),&iStackX_10), iVar6 == 0 &&
                (0x58 < *(iStackX_10 + 4))))) {
                *(arg1 + 0x80) = 2;
            }
        }
        else {
            *(arg1 + 0x80) = 1;
        }
    }
    bVar2 = true;
    pcStack_c8 = arg1 + 0xe0;
    puStack_108 = NULL;
    aiStack_b8[0] = 0;
    iStackX_10 = 0;
    uStackX_18 = 0;
    do {
        uVar17 = 0;
        uStack_e0 = 0;
        puStack_f8 = arg3;
        if ((1 < *(arg1 + 0x80) - 1U) || (!bVar2)) {
            uVar5 = *(arg1_00 + 0x184);
            uStack_118 = 0x1000;
            puVar12 = 0x1000 / uVar5;
            iStack_110._0_4_ = uVar5;
            if (puVar12 == 0) {
                puVar12 = 0x1;
                iStack_110._0_4_ = 0x1000;
            }
            do {
                if (puStack_108 == NULL) {
                    if ((*pcStack_c8 == '\0') ||
                       (iVar6 = fcn.00013c70(&pcStack_c8,&puStack_108,aiStack_b8,CONCAT71(uVar8 >> 8,1)), iVar6 < 0
                       )) goto code_r0x00012edf;
                    uVar8 = uStackX_18;
                    iStackX_10 = aiStack_b8[0];
                }
                puVar16 = puStack_108 & 0xffffffff;
                if (puVar12 < puStack_108) {
                    puVar16 = puVar12;
                }
                uStack_c0 = puVar16 * iStack_110;
                iVar6 = fcn.00010de8(arg1_00,puStack_f8,uVar8 / *(arg1_00 + 0x2b) + *(arg1_00 + 0x2d) * iStackX_10,0)
                ;
                if (iVar6 < 0) goto code_r0x00013328;
                puStack_f8 = puStack_f8 + uStack_c0;
                uVar10 = iStack_110;
                if (iStack_110 < uVar5) {
                    uStackX_18 = uStackX_18 + iStack_110;
                    puVar12 = puVar12 - 1;
                    if (uStackX_18 < uVar5) goto code_r0x00012e67;
                    uVar8 = 0;
                    puStack_108 = puStack_108 + -1;
                    uStackX_18 = 0;
                }
                else {
                    puVar12 = puVar12 - puVar16;
                    puStack_108 = puStack_108 - puVar16;
                    iStackX_10 = iStackX_10 + puVar16;
code_r0x00012e67:
                    uVar8 = uStackX_18;
                }
            } while (puVar12 != 0);
            puVar12 = puStack_108;
            uVar17 = uStack_e0;
            puStack_f8 = arg3;
            bVar2 = bVar3;
        }
        else {
            if (*(arg1_00 + 0x184) < 0x400) {
                uStack_118 = *(arg1_00 + 0x1fc);
            }
            uVar10 = arg1_00;
            puVar12 = arg3;
            iVar7 = fcn.00013fbc(arg1_00,*(arg1 + 0x20),arg3,0);
            iVar6 = -0x7ffffffffffffff2;
            if (iVar7 < 0) goto code_r0x00013328;
        }
        iVar6 = fcn.000141f4(uVar10,arg3);
        if (iVar6 < 0) goto code_r0x00012edf;
        if (*arg3 == 0x454c4946) {
            fcn.00013d74(arg1_00,arg3,CONCAT71(puVar12 >> 8,0x90),&puStack_f8);
            uVar1 = *(puStack_f8 + 0x14);
            iStackX_20 = *(puStack_f8 + uVar1 + 0x14);
            puVar12 = puStack_f8 + *(puStack_f8 + uVar1 + 0x10) + 0x10 + uVar1;
            uVar17 = puVar12 - arg3;
            uStack_e0 = uVar17;
            if (iStackX_20 < 0x58) goto code_r0x00012edf;
        }
        else {
            puVar12 = arg3;
        }
        if (*arg3 == 0x58444e49) {
            iStackX_20 = *(arg3 + 0x1c);
            uVar17 = uVar17 + arg3[3] + 0x18;
            puVar12 = arg3 + uVar17;
            uStack_e0 = uVar17;
            if (0x57 < iStackX_20) goto code_r0x00012f43;
        }
        else {
code_r0x00012f43:
            if ((*arg3 != 0x454c4946) && (*arg3 != 0x58444e49)) {
                return 0;
            }
            if (uVar17 < uStack_118) {
code_r0x00012f68:
                uVar8 = puVar12[10];
                uVar1 = puVar12[1];
                iVar6 = fcn.00011574(arg1_00,uVar8 * 2 + 2,&uStack_d0,0);
                if (-1 < iVar6) {
                    (**(*0x14b20 + 0x160))(uStack_d0,puVar12 + 0x52);
                    *(uStack_d0 + uVar8 * 2) = 0;
                    if ((*puVar12 & 0xffffffffffff) < 0x10) {
                        puVar12[9] = puVar12[9] | 6;
                    }
                    if (*(puVar12 + 0x51) != '\x02') {
                        if ((puVar12[9] >> 0x1c & 1) != 0) {
                            puVar12[9] = puVar12[9] & 0xffffffffefffffff | 0x10;
                            puVar12[7] = 0;
                            puVar12[8] = 0;
                        }
                        iStack_110 = 0;
                        puVar12[7] = puVar12[7] & 0xfffffffffff;
                        puVar12[8] = puVar12[8] & 0xfffffffffff;
                        uStack_a8 = *puVar12;
                        uStack_a0 = puVar12[1];
                        var_50h_2._0_4_ = puVar12[10];
                        uStack_98 = puVar12[2];
                        uStack_90 = puVar12[3];
                        iVar7 = *arg1;
                        var_80h = puVar12[4];
                        var_78h = puVar12[5];
                        iVar6 = *(iVar7 + 0x288);
                        var_60h_2._0_4_ = puVar12[8];
                        var_60h_2._4_4_ = *(puVar12 + 0x44);
                        iStack_60 = puVar12[9];
                        iStack_5c = *(puVar12 + 0x4c);
                        uStack_c0 = uStack_d0;
                        var_70h = puVar12[6];
                        uStack_70 = puVar12[7];
                        do {
                            if (iVar6 == 0) {
                                iVar6 = (**(*0x14b20 + 0x40))(4,0x8100,&iStack_d8);
                                iVar4 = *0x14b20;
                                if (-1 < iVar6) {
                                    *(iVar7 + 0x1e8) = *(iVar7 + 0x1e8) + 0x8100;
                                    iVar6 = (**(iVar4 + 0x40))(4,0x30,&piStack_e8);
                                    if (iVar6 < 0) {
                                        (**(*0x14b20 + 0x48))();
                                    }
                                    else {
                                        *(iVar7 + 0x1e8) = *(iVar7 + 0x1e8) + 0x30;
                                        *piStack_e8 = iStack_d8;
                                        *(piStack_e8 + 1) = 0x100;
                                        piStack_e8[2] = iStack_d8 + 0x100;
                                        piStack_e8[3] = iStack_d8 + 0x8100;
                                        piVar9 = piStack_e8 + 4;
                                        *piVar9 = 0;
                                        piStack_e8[5] = *(iVar7 + 0x288);
                                        if (*(iVar7 + 0x280) == 0) {
                                            *(iVar7 + 0x280) = piVar9;
                                        }
                                        else {
                                            **(iVar7 + 0x288) = piVar9;
                                        }
                                        *(iVar7 + 0x278) = *(iVar7 + 0x278) + 1;
                                        *(iVar7 + 0x288) = piVar9;
                                        fcn.00010280(iStack_d8,0x100);
                                    }
                                }
                                if (iVar6 < 0) goto code_r0x00013275;
                                iVar6 = *(iVar7 + 0x288);
                            }
                            uVar8 = 0;
                            uVar17 = 0x800000000000000e;
                            uVar10 = 0;
                            pcVar14 = *(iVar6 + -0x20);
                            do {
                                if (*pcVar14 == '\0') {
                                    uVar15 = uStack_f0;
                                    if (uVar8 == 0) {
                                        uVar15 = uVar10;
                                    }
                                    uVar5 = uVar8 + 1;
                                    uStack_f0 = uVar15;
                                    uVar8 = uVar5;
                                    if (uVar5 != 0) {
                                        iStack_110 = (uStack_f0 << 7) + *(iVar6 + -0x10);
                                        (*(iVar6 + -0x20))[uVar15] = '\x01';
                                        uStack_f0 = uStack_f0 + 1;
                                        uVar17 = 0;
                                        break;
                                    }
                                }
                                else {
                                    uVar8 = 0;
                                }
                                uVar5 = uVar10 + 1;
                                uVar10 = uVar5;
                                pcVar14 = pcVar14 + 1;
                            } while (uVar5 < 0x100);
                            if (uVar17 == 0) goto code_r0x000131e1;
                            iVar6 = *(iVar6 + 8);
                        } while( true );
                    }
                    goto code_r0x0001328e;
                }
                goto code_r0x00013328;
            }
code_r0x000132ea:
            bVar2 = false;
            bVar3 = false;
        }
        if (iStackX_20 < 1) goto code_r0x00012edf;
        uVar8 = uStackX_18;
    } while( true );
code_r0x000131e1:
    iVar6 = 0;
    (**(*0x14b20 + 0x160))(iStack_110,&uStack_a8,0x54);
    *(iStack_110 + 0x58) = uStack_c0;
    *(iStack_110 + 0x60) = iStack_100;
    puVar11 = iStack_110 + 100;
    *puVar11 = 0;
    *(iStack_110 + 0x6c) = *(arg1 + 0xa0);
    if (*(arg1 + 0x98) == 0) {
        *(arg1 + 0x98) = puVar11;
    }
    else {
        **(arg1 + 0xa0) = puVar11;
    }
    *(arg1 + 0x90) = *(arg1 + 0x90) + 1;
    *(arg1 + 0xa0) = puVar11;
    *(*arg1 + 0x1ec) = *(*arg1 + 0x1ec) + 1;
code_r0x00013275:
    if (iVar6 < 0) goto code_r0x00013328;
    iStack_100 = iStack_100 + 1;
    uVar17 = uStack_e0;
code_r0x0001328e:
    puVar12 = puVar12 + uVar1;
    uVar17 = uVar17 + uVar1;
    iStackX_20 = iStackX_20 - uVar1;
    if (((((puVar12[2] & 0xffffffffffff) != 5) && ((*puVar12 & 0xffffffffffff) == 0)) || (iStackX_20 < 0x58)) ||
       (puVar12[1] == 0)) {
        if (*(arg1 + 0x80) == '\x01') goto code_r0x00012edf;
        goto code_r0x000132ea;
    }
    uStack_e0 = uVar17;
    if (uStack_118 <= uVar17) goto code_r0x000132ea;
    goto code_r0x00012f68;
code_r0x00012edf:
    iVar6 = 0;
code_r0x00013328:
    *(arg1_00 + 0x220) = 0;
    return iVar6;
}


/* fcn.00013a84 @ 0x13a84 */

uint32_t fcn.00013a84(uint32_t arg1,int64_t arg2)

{
    uchar auVar1 [16];
    uint32_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint in_register_0000000c;
    uint16_t *puVar5;
    uint64_t uVar6;
    char cVar7;
    uint32_t uVar8;
    char cVar9;
    uint32_t uVar10;
    uint16_t uVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    
    puVar5 = CONCAT44(in_register_0000000c,arg1);
    puVar5[6] = 0x7ff;
    puVar5[7] = 0;
    uVar8 = 0;
    *(puVar5 + 7) = 0;
    uVar13 = 0x641;
    for (uVar6 = arg2 + 864000000000; uVar11 = uVar13, 0x11ed178c6c000 < uVar6; uVar6 = uVar6 + 0xfffee12e87394000) {
        if ((uVar13 == (uVar13 / 400) * 400) || (((uVar13 & 3) == 0 && (uVar13 != (uVar13 / 100) * 100)))) {
            uVar6 = uVar6 - 864000000000;
        }
        uVar13 = uVar11 + 1;
    }
    uVar2 = uVar6 / 864000000000;
    if (uVar2 == 0) {
        uVar11 = uVar11 - 1;
        if ((uVar11 == (uVar11 / 400) * 400) || (((uVar11 & 3) == 0 && (uVar11 != (uVar11 / 100) * 100)))) {
            uVar2 = 0x16e;
        }
        else {
            uVar2 = 0x16d;
        }
    }
    *puVar5 = uVar11;
    uVar12 = uVar11;
    cVar9 = '\x01';
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar6 % 864000000000;
    uVar10 = 0x1f;
    *(puVar5 + 2) = (uVar6 % 864000000000) / 36000000000;
    uVar6 = SUB168(auVar1 % ZEXT816(36000000000),0) / 600000000;
    *(puVar5 + 5) = uVar6;
    uVar4 = SUB164(auVar1 % ZEXT816(36000000000),0) + uVar6 * -600000000;
    uVar6 = uVar4 / 10000000;
    *(puVar5 + 3) = uVar6;
    *(puVar5 + 4) = (uVar4 + uVar6 * -10000000) * 100;
    uVar4 = uVar11 * 0x51eb851f;
    if ((uVar12 == (uVar11 / 400) * 400) || (((uVar11 & 3) == 0 && (uVar4 = (uVar12 / 100) * 100, uVar12 != uVar4)))) {
        uVar6 = 1;
        do {
            uVar12 = uVar10;
            if (uVar10 < uVar2) {
                cVar9 = cVar9 + '\x01';
                uVar4 = *(uVar6 + 0x14ab8);
                uVar12 = uVar10 + *(uVar6 + 0x14ab8);
                uVar8 = uVar10;
            }
            uVar10 = uVar12;
            cVar7 = uVar8;
            uVar3 = uVar6 + 1;
            uVar6 = uVar3;
        } while (uVar3 < 0xd);
    }
    else {
        uVar6 = 1;
        do {
            uVar12 = uVar10;
            if (uVar10 < uVar2) {
                cVar9 = cVar9 + '\x01';
                uVar4 = *(uVar6 + 0x14ac8);
                uVar12 = uVar10 + *(uVar6 + 0x14ac8);
                uVar8 = uVar10;
            }
            uVar10 = uVar12;
            cVar7 = uVar8;
            uVar3 = uVar6 + 1;
            uVar6 = uVar3;
        } while (uVar3 < 0xd);
    }
    *(puVar5 + 1) = cVar9;
    *(puVar5 + 3) = uVar2 - cVar7;
    return uVar4;
}


/* fcn.000142a8 @ 0x142a8 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h
//WARNING: Removing unreachable block (ram,0x00014488)
//WARNING: Removing unreachable block (ram,0x00014493)

int64_t fcn.000142a8(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int64_t *piVar3;
    int64_t arg1_00;
    int64_t iVar4;
    int64_t iVar5;
    int *piVar6;
    int *piVar7;
    uint in_R9;
    uint32_t *puVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    int *piStackX_8;
    int64_t iStackX_10;
    int64_t var_40h;
    int64_t iStack_68;
    int64_t iStack_60;
    int64_t iStack_58;
    uint64_t uStack_50;
    uint64_t uStack_48;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    uint32_t var_bp_10h;
    
    iVar4 = CONCAT44(in_R9,arg4);
    piVar3 = *(arg1 + 0x80);
    uVar10 = 0;
    iStack_60 = 0;
    iStack_58 = 0;
    uVar11 = *(arg1 + 0x90);
    arg1_00 = *piVar3;
    if ((*(piVar3 + 0xd) & 0x4c00) == 0) {
        iStackX_10 = arg2;
        uStack_50 = uVar11;
        if (piVar3[0x10] == '\x01') {
            piVar6 = *(arg1_00 + 0x208);
            *(arg1_00 + 0x220) = 1;
            piVar7 = piVar6;
            piStackX_8 = piVar6;
            iVar4 = fcn.00013fbc(arg1_00,*(*(arg1 + 0x80) + 0x20),piVar6,0);
            if (-1 < iVar4) {
                if (*piVar6 == 0x454c4946) {
                    iVar4 = fcn.00013d74(arg1_00,piVar6,CONCAT71(piVar7 >> 8,0x80),&piStackX_8);
                    if (-1 < iVar4) {
                        uVar10 = piStackX_8[4];
                        if (*arg3 - uVar11 <= piStackX_8[4]) {
                            uVar10 = *arg3 - uVar11;
                        }
                        (**(*0x14b20 + 0x160))(arg2,piStackX_8 + *(piStackX_8 + 5) + uVar11,uVar10);
                        *(arg1_00 + 0x220) = 0;
                        *(arg1 + 0x90) = *(arg1 + 0x90) + uVar10;
                        *arg3 = uVar10;
                        return 0;
                    }
                }
                else {
                    iVar4 = -0x7ffffffffffffff2;
                }
            }
            *(arg1_00 + 0x220) = 0;
        }
        else {
            piStackX_8 = *(arg1 + 0xb0);
            while (piVar6 = piStackX_8, iVar9 = iStack_68, *piStackX_8 != '\0') {
                iVar4 = CONCAT71(iVar4 >> 8,1);
                iVar5 = fcn.00013c70(&piStackX_8,&iStack_68,&iStack_60,iVar4);
                piVar6 = piStackX_8;
                iVar9 = iStack_68;
                if ((iVar5 != 0) ||
                   (uVar10 = uVar10 + (*(arg1_00 + 0x2d) * iStack_68 << (*(arg1_00 + 0x180) & 0x3f)), uVar11 < uVar10))
                break;
            }
            do {
                uVar10 = *(arg1 + 0xa0);
                uStack_48 = (*(arg1_00 + 0x2d) * iVar9 << (*(arg1_00 + 0x180) & 0x3f)) - uVar10;
                uVar11 = uStack_48;
                if (*arg3 < uStack_48) {
                    uVar11 = *arg3;
                }
                if (uVar11 == 0) {
                    return -0x7ffffffffffffff6;
                }
                iVar4 = fcn.00010de8(arg1_00,iStackX_10,
                                     *(arg1_00 + 0x2d) * *(arg1 + 0x98) + uVar10 / *(arg1_00 + 0x2b),
                                     uVar10 % *(arg1_00 + 0x2b));
                if (iVar4 < 0) break;
                puVar8 = arg1 + 0xa0;
                iStackX_10 = iStackX_10 + uVar11;
                uVar1 = *puVar8;
                uStack_50 = uStack_50 + uVar11;
                iStack_58 = iStack_58 + uVar11;
                *arg3 = *arg3 - uVar11;
                *(arg1 + 0x90) = uStack_50;
                uVar2 = *(arg1_00 + 0x184);
                if (puVar8 != NULL) {
                    *puVar8 = (uVar1 + uVar11) % uVar2;
                }
                *(arg1 + 0x98) = *(arg1 + 0x98) + (uVar1 + uVar11) / uVar2;
                if ((uVar11 == uStack_48) || (*(arg1 + 0x98) == iStack_60 + iVar9)) {
                    if (*arg3 == 0) break;
                    if ((*piVar6 == '\0') ||
                       (iVar4 = fcn.00013c70(&piStackX_8,&iStack_68,&iStack_60,CONCAT71(puVar8 >> 8,1)), iVar4 < 0)
                       ) {
                        iVar4 = 0;
                        break;
                    }
                    *(arg1 + 0x98) = iStack_60;
                    *(arg1 + 0xa8) = iStack_68;
                    piVar6 = piStackX_8;
                    iVar9 = iStack_68;
                }
            } while (*arg3 != 0);
            *arg3 = iStack_58;
        }
    }
    else {
        iVar4 = -0x7ffffffffffffffd;
    }
    return iVar4;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* fcn.00013344 @ 0x13344 */

int64_t fcn.00013344(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    ulong in_R9;
    ulong *puVar3;
    ulong *puStackX_10;
    
    puStackX_10 = NULL;
    iVar2 = fcn.00011684(*arg2,0x160,&puStackX_10,CONCAT71(in_R9 >> 8,1));
    if (-1 < iVar2) {
        puVar3 = puStackX_10;
        iVar1 = fcn.00014764(*(arg1 + 0x58),0xff);
        iVar2 = fcn.00011574(*arg2,iVar1 * 2 + 2,puVar3 + 3,0);
        if (-1 < iVar2) {
            *puStackX_10 = *arg2;
            puStackX_10[1] = 0;
            *(puStackX_10 + 2) = 0;
            (**(*0x14b20 + 0x160))(puStackX_10 + 4,arg1,0x54);
            fcn.00014790(puStackX_10[3],0xff,*(arg1 + 0x58));
            puStackX_10[0x11] = arg2;
            *arg3 = puStackX_10;
            puVar3 = puStackX_10 + 0x1a;
            *puVar3 = 0;
            puStackX_10[0x1b] = *(arg2 + 200);
            if (*(arg2 + 0xc0) == 0) {
                *(arg2 + 0xc0) = puVar3;
            }
            else {
                **(arg2 + 200) = puVar3;
            }
            *(arg2 + 0xb8) = *(arg2 + 0xb8) + 1;
            *(arg2 + 200) = puVar3;
            puVar3 = puStackX_10 + 0x15;
            arg2 = *arg2;
            *puVar3 = 0;
            puStackX_10[0x16] = *(arg2 + 0x240);
            if (*(arg2 + 0x238) == 0) {
                *(arg2 + 0x238) = puVar3;
            }
            else {
                **(arg2 + 0x240) = puVar3;
            }
            *(arg2 + 0x230) = *(arg2 + 0x230) + 1;
            iVar2 = 0;
            *(arg2 + 0x240) = puVar3;
        }
    }
    return iVar2;
}


/* fcn.00013580 @ 0x13580 */

ulong fcn.00013580(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    
    puVar1 = *(arg1 + 0x238);
    while ((puVar1 != NULL && (100 < *(arg1 + 0x1ec)))) {
        if ((puVar1 + -0x15 != arg2) && (puVar1[-2] != 0)) {
            fcn.000135dc(puVar1 + -0x15);
        }
        puVar1 = *puVar1;
    }
    return 0;
}


/* fcn.000141f4 @ 0x141f4 */

ulong fcn.000141f4(ulong noname_0,uint32_t arg1)

{
    int16_t *piVar1;
    uint in_register_00000014;
    int *piVar2;
    int16_t *piVar3;
    int16_t iVar4;
    int16_t *piVar5;
    
    piVar2 = CONCAT44(in_register_00000014,arg1);
    if ((*piVar2 != 0x454c4946) && (*piVar2 != 0x58444e49)) {
        return 0x800000000000000e;
    }
    piVar1 = *(piVar2 + 1) + piVar2;
    iVar4 = *(piVar2 + 6) + -1;
    if (*piVar1 != 0) {
        piVar3 = piVar2 + 0x1fe;
        piVar5 = piVar1;
        do {
            piVar5 = piVar5 + 1;
            if (*piVar3 != *piVar1) {
                return 0x800000000000000a;
            }
            *piVar3 = *piVar5;
            piVar3 = piVar3 + 0x100;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        *piVar1 = 0;
    }
    return 0;
}


/* fcn.000138e8 @ 0x138e8 */

int64_t fcn.000138e8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int *arg3_00;
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    uint32_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int *piVar6;
    int *piStackX_8;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar4 + 0x74) != '\0') {
        iVar4 = iVar4 + 0x76;
        uVar3 = 0x7f;
        iVar1 = fcn.00014764(iVar4,0x7f);
        uVar5 = iVar1 * 2 + 2;
        if (*arg2 < uVar5) {
            iVar4 = -0x7ffffffffffffffb;
        }
        else {
            fcn.00014790(arg3,uVar3,iVar4);
            iVar4 = 0;
        }
        *arg2 = uVar5;
        return iVar4;
    }
    uVar5 = *arg2;
    iVar1 = (-(uVar5 < 2) & 0xfffffffffffffff7) + 0x800000000000000e;
    if (*(*(iVar4 + 0x228) + 0x98) == 0) {
        fcn.00012bac(*(iVar4 + 0x228));
    }
    arg3_00 = *(iVar4 + 0x208);
    *(iVar4 + 0x220) = 1;
    piVar6 = arg3_00;
    piStackX_8 = arg3_00;
    iVar2 = fcn.00013fbc(iVar4,3,arg3_00,0);
    if (iVar2 < 0) goto code_r0x00013a62;
    if (*arg3_00 == 0x454c4946) {
        iVar2 = fcn.00013d74(iVar4,arg3_00,CONCAT71(piVar6 >> 8,0x60),&piStackX_8);
        if (iVar2 == 0) {
            iVar2 = iVar4 + 0x76;
            uVar3 = piStackX_8[4];
            iVar1 = piStackX_8 + *(piStackX_8 + 5);
            fcn.00010280(iVar2,0x100);
            (**(*0x14b20 + 0x160))(iVar2,iVar1,uVar3);
            uVar5 = uVar3 + 2;
            *(iVar4 + 0x74) = 1;
            if (*arg2 < uVar5) {
                *arg2 = uVar5;
                iVar1 = -0x7ffffffffffffffb;
            }
            else {
                iVar1 = 0;
                fcn.00014790(arg3,0x7f,iVar2);
                *arg2 = uVar5;
            }
            goto code_r0x00013a62;
        }
        if (iVar2 == -0x7ffffffffffffff2) goto code_r0x00013a4d;
        if (1 < uVar5) goto code_r0x00013a62;
    }
    else {
code_r0x00013a4d:
        if (1 < *arg2) {
            fcn.00010280(arg3,2);
        }
        iVar1 = 0;
    }
    *arg2 = 2;
code_r0x00013a62:
    *(iVar4 + 0x220) = 0;
    return iVar1;
}


/* fcn.000137ec @ 0x137ec */

ulong fcn.000137ec(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t arg2_00;
    ulong uVar6;
    
    iVar5 = *(arg1 + 0x80);
    uVar6 = 0;
    if ((*(iVar5 + 0x10) != '\0') && (*(iVar5 + 0x98) == 0)) {
        fcn.00012bac(iVar5);
    }
    uVar4 = fcn.00014764(*(iVar5 + 0x18),0xff);
    uVar1 = uVar4 * 2 + 0x52;
    uVar2 = *arg2;
    *arg2 = uVar1;
    if (uVar2 < uVar1) {
        uVar6 = 0x8000000000000005;
    }
    else {
        *arg3 = uVar1;
        iVar3 = arg3;
        *(arg3 + 8) = *(iVar5 + 0x60);
        *(arg3 + 0x10) = *(iVar5 + 0x58);
        fcn.00013a84(iVar3 + 0x18,*(iVar5 + 0x38));
        fcn.00013a84(iVar3 + 0x28,*(iVar5 + 0x50));
        fcn.00013a84(iVar3 + 0x38,*(iVar5 + 0x40));
        arg2_00 = 0xff;
        *(arg3 + 0x48) = *(iVar5 + 0x68) & 0x37;
        fcn.00014790(arg3 + 0x50,0xff,*(iVar5 + 0x18));
        if ((*(arg3 + 0x48) & 0x10) != 0) {
            iVar5 = fcn.00014764(iVar3 + 0x50,arg2_00);
            if (iVar5 == 0) {
                *(arg3 + 0x48) = 0x10;
            }
        }
    }
    return uVar6;
}


