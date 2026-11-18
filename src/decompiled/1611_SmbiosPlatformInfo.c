// decompiled by r2ghidra: 1611_SmbiosPlatformInfo.pe32
// functions: 54

/* entry0 @ 0x103a4 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.000103d0(arg1,arg2);
    iVar1 = fcn.000121bc();
    (**(iVar1 + 0x90))(0x211,0x132d0);
    fcn.00011b68();
    return 0;
}


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0;
    
    *0x14940 = *(arg2 + 0x60);
    *0x14950 = *(arg2 + 0x58);
    *0x14938 = arg2;
    *0x14948 = arg1;
    fcn.000121f8();
    noname_0 = 0x13de8;
    iVar3 = fcn.00012264(0x13de8);
    if (iVar3 == 0) {
        uVar4 = fcn.000103a0();
        fcn.00010390();
        uVar1 = in(0x1808);
        fcn.00010370(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            fcn.00010360();
        }
        fcn.00010370(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.00010390();
        }
        else {
            fcn.00010380();
        }
    }
    (**(*0x14940 + 0x140))(0x13020,0,0x14968);
    (**(*0x14940 + 0x140))(0x13010,0,0x14988);
    (**(*0x14940 + 0x140))(0x12fe0,0,0x14978);
    (**(*0x14940 + 0x140))(0x13040,0,0x14970);
    //WARNING: Could not recover jumptable at 0x000104ff. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x14940 + 0x140))(0x13000,0,0x14980);
    return;
}


/* fcn.000121bc @ 0x121bc */

int64_t fcn.000121bc(void)

{
    if (*0x14958 == 0) {
        (**(*0x14940 + 0x140))(0x12fc0,0,0x14958);
    }
    return *0x14958;
}


/* fcn.00011b68 @ 0x11b68 */

ulong fcn.00011b68(void)

{
    int64_t iVar1;
    ulong uVar2;
    bool bVar3;
    
    iVar1 = fcn.000121bc();
    *0x14930 = (**(iVar1 + 0x20))(0x211);
    if (*0x14930 != 0) {
        iVar1 = fcn.000121bc();
        *0x14920 = (**(iVar1 + 0x30))(0x20e);
        if (*0x14920 != '\0') {
            iVar1 = fcn.000121bc();
            *0x14928 = (**(iVar1 + 0x20))(0x20d);
        }
        fcn.00010be4();
        fcn.00010f60();
        fcn.0001103c();
        fcn.0001118c();
        if ((*0x133c0 != 0) && (*0x133c8 != NULL)) {
            bVar3 = *0x14920 != '\0';
            **0x133c8 = L"J6H1:1-X Boot with Default; J8H1:1-X BIOS RECOVERY";
            if (bVar3) {
                if (*0x14928 == 0) {
                    uVar2 = *0x13588;
                }
                else {
                    uVar2 = *(*0x14928 + 0x38);
                }
                **0x133c8 = uVar2;
            }
            *0x133e0 = 1;
            *0x133d8 = 0;
        }
        fcn.00011308();
        fcn.0001147c();
        uVar2 = *0x148d0;
        if ((*0x13398 != 0) && (*0x133a0 != NULL)) {
            *(*0x13398 + 5) = 1;
            *(*0x13398 + 0x15) = 1;
            **0x133a0 = uVar2;
            *0x133b8 = 1;
            *0x133b0 = 0;
            *0x133a8 = 1;
        }
        fcn.00010818();
        if (*0x13370 != 0) {
            *(*0x13370 + 10) = 0;
            *0x13390 = 1;
            *0x13388 = 0;
        }
        if ((*0x134b0 != 0) && (*0x134b8 != 0)) {
            *0x134d0 = 1;
            *0x134c8 = 0;
        }
        fcn.00011648();
        if (*0x13410 != 0) {
            *0x13430 = 1;
            *0x13428 = 0;
        }
        if (*0x13438 != 0) {
            *0x13458 = 1;
            *0x13450 = 0;
        }
        fcn.00011954();
    }
    return 0;
}


/* fcn.000121f8 @ 0x121f8 */

int64_t fcn.000121f8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x14960 == 0) {
        *0x14960 = 0;
        if (*(*0x14938 + 0x68) != 0) {
            piVar2 = *(*0x14938 + 0x70);
            do {
                if ((*0x13030 == *piVar2) && (*0x13038 == piVar2[1])) {
                    *0x14960 = (*(*0x14938 + 0x70))[uVar1 * 3 + 2];
                    return *0x14960;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x14938 + 0x68));
        }
    }
    return *0x14960;
}


/* fcn.00012264 @ 0x12264 */

void fcn.00012264(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000121f8();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00012292:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00012292;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103a0 @ 0x103a0 */

uint64_t fcn.000103a0(void)

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


/* fcn.00010390 @ 0x10390 */

void fcn.00010390(void)

{
    return;
}


/* fcn.00010370 @ 0x10370 */

uint64_t fcn.00010370(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010362 @ 0x10362 */

void fcn.00010362(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

void fcn.00010380(void)

{
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint in_register_00000014;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 11520 named .text
    uVar5 = 0;
    puVar3 = CONCAT44(in_register_00000014,arg2);
    puVar2 = puVar3 + arg3 + -1;
    if ((puVar3 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = puVar3;
        puVar3 = arg1;
        for (uVar1 = arg3 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar5 * -2 + 1;
        puVar3 = puVar3 + uVar5 * -2 + 1;
    }
    return arg1;
}


/* fcn.00012190 @ 0x12190 */

void fcn.00012190(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00012160(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010300(arg1_00,arg1);
    }
    return;
}


/* fcn.00012160 @ 0x12160 */

ulong fcn.00012160(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x14940 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
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


/* fcn.000120cc @ 0x120cc */

ulong fcn.000120cc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if ((((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) || (arg3 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00011f40(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x0001214e;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x0001214e:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.00012028 @ 0x12028 */

ulong fcn.00012028(int64_t arg1,ulong noname_1,uint32_t *arg2)

{
    char cVar1;
    uint64_t uVar2;
    
    if (((arg1 != 0) && (arg2 != NULL)) && (uVar2 = fcn.00012004(arg1), uVar2 < 0xf4241)) {
        for (; (*arg1 == ' ' || (*arg1 == '\t')); arg1 = arg1 + 1) {
        }
        for (; *arg1 == '0'; arg1 = arg1 + 1) {
        }
        *arg2 = 0;
        while( true ) {
            if (9 < *arg1 - 0x30U) {
                return 0;
            }
            cVar1 = *arg1;
            if (~(cVar1 + -0x30) / 10 < *arg2) break;
            arg1 = arg1 + 1;
            *arg2 = cVar1 + -0x30 + *arg2 * 10;
        }
        *arg2 = 0xffffffffffffffff;
        return 0x8000000000000003;
    }
    return 0x8000000000000002;
}


/* fcn.00012410 @ 0x12410 */

ulong fcn.00012410(void)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStack_58 [8];
    uchar auStack_50 [44];
    ushort uStack_24;
    ushort uStack_22;
    ushort uStack_20;
    ushort uStack_1e;
    ushort uStack_1c;
    ushort uStack_1a;
    
    iVar1 = fcn.00012344(auStack_58);
    if (iVar1 < 0) {
        uVar2 = 0x800000000000000e;
    }
    else {
        section..text(0x149a0,auStack_50,0x42);
        *0x14a20 = uStack_20;
        *0x14a22 = uStack_1e;
        *0x14a26 = uStack_1c;
        *0x14a28 = uStack_1a;
        *0x14a2e = 0x30;
        *0x14a30 = uStack_24;
        *0x14a32 = uStack_22;
        uVar2 = 0;
        *0x14a24 = 0x2f;
        *0x14a2a = 0x32002f;
        *0x14a34 = 0;
    }
    return uVar2;
}


/* fcn.00010690 @ 0x10690 */

//WARNING: Variable defined which should be unmapped: var_28h

ulong fcn.00010690(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    int16_t *piVar2;
    int64_t arg2_00;
    ulong uVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    uint64_t uVar7;
    int64_t arg1_00;
    uchar uStackX_10;
    unkbyte7 StackX_11;
    uint32_t var_28h;
    uchar auStack_68 [16];
    int64_t var_50h;
    int16_t iStack_4e;
    int16_t aiStack_4c [5];
    int16_t iStack_42;
    int16_t iStack_40;
    int16_t var_36h;
    int16_t var_2ah;
    
    uVar7 = 0;
    if ((arg2 == 0) || (arg3 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        if (auStack_68 != CONCAT44(in_register_0000000c,arg1)) {
            section..text(auStack_68,arg1,0x42);
        }
        piVar2 = &iStack_4e;
        uVar4 = uVar7;
        iVar1 = iStack_4e;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            uVar4 = uVar4 + 1;
            iVar1 = *piVar2;
        }
        piVar2 = &iStack_42;
        uVar5 = uVar7;
        iVar1 = iStack_42;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            uVar5 = uVar5 + 1;
            iVar1 = *piVar2;
        }
        if (uVar5 < uVar4) {
            piVar2 = &iStack_4e;
            iVar1 = iStack_4e;
            while (iVar1 != 0) {
                piVar2 = piVar2 + 1;
                uVar7 = uVar7 + 1;
                iVar1 = *piVar2;
            }
        }
        else {
            piVar2 = &iStack_42;
            while (iStack_42 != 0) {
                piVar2 = piVar2 + 1;
                uVar7 = uVar7 + 1;
                iStack_42 = *piVar2;
            }
        }
        arg1_00 = uVar7 + 1;
        arg2_00 = fcn.00012190(arg1_00);
        if (arg2_00 != 0) {
            if (9 < iStack_4e - 0x30U) {
                iStack_4e = 0x30;
            }
            iVar6 = arg2_00;
            fcn.000120cc(&iStack_4e,arg2_00,arg1_00);
            fcn.00012028(arg2_00,iVar6,&uStackX_10);
            *arg2 = uStackX_10;
            fcn.00012028(arg2_00,iVar6,&uStackX_10);
            if (CONCAT71(StackX_11,uStackX_10) < 0xff) {
                iVar6 = arg2_00;
                fcn.000120cc(&iStack_42,arg2_00,arg1_00);
                fcn.00012028(arg2_00,iVar6,&uStackX_10);
                *arg3 = uStackX_10;
            }
            else {
                *arg2 = 0xff;
                *arg3 = 0xff;
            }
            (**(*0x14940 + 0x48))(arg2_00);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011f74 @ 0x11f74 */

ulong fcn.00011f74(int64_t arg1)

{
    char16_t cVar1;
    uint64_t uVar2;
    char16_t *pcVar3;
    int64_t iVar4;
    uint64_t uVar5;
    char16_t cVar6;
    
    cVar6 = L'\0';
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    uVar5 = 0x2d;
    pcVar3 = L"SmbiosType1SystemUuid";
    uVar2 = fcn.00011f40(0x148a0,0x2d);
    if (uVar5 <= uVar2) {
        return 0x8000000000000005;
    }
    if (pcVar3 <= arg1) {
        if (arg1 < pcVar3 + uVar2 + 1) {
            return 0x800000000000000f;
        }
        if (pcVar3 < arg1) goto code_r0x00011fdc;
    }
    if (pcVar3 < arg1 + 0x5a) {
        return 0x800000000000000f;
    }
code_r0x00011fdc:
    cVar1 = L'S';
    iVar4 = pcVar3 - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar4 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar6;
    return 0;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.0001256c @ 0x1256c */

int64_t fcn.0001256c(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint64_t arg2_00;
    char acStackX_8 [2];
    uint8_t uStackX_a;
    char cStackX_b;
    char cStack_28;
    char acStack_27 [31];
    
    arg2_00 = arg2 & 0xffffffff;
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        fcn.00010300(&cStack_28,0x11);
        fcn.00010300(acStackX_8,4);
        iVar2 = fcn.000124c4(acStackX_8,0x28,4);
        if (-1 < iVar2) {
            if (((acStackX_8[0] == -0x1e) && ((uStackX_a & 0xf) == 1)) && (cStackX_b == 'P')) {
                iVar2 = fcn.000124c4(&cStack_28,0x80,0x10);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = 0;
                if (cStack_28 != '\0') {
                    do {
                        iVar3 = iVar2 + 1;
                        pcVar1 = acStack_27 + iVar2;
                        iVar2 = iVar3;
                    } while (*pcVar1 != '\0');
                    if (iVar3 != 0) {
                        if (((arg2_00 != 0) && (fcn.00010300(arg1,arg2_00), arg2_00 != 0)) && (arg1 != &cStack_28)) {
                            section..text(arg1,&cStack_28,arg2_00);
                        }
                        return 0;
                    }
                }
            }
            iVar2 = -0x7ffffffffffffff2;
        }
    }
    return iVar2;
}


/* fcn.000108f0 @ 0x108f0 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.000108f0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    char *pcVar3;
    uint64_t uVar4;
    uint16_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint64_t uVar8;
    uint16_t uVar9;
    char *pcStackX_20;
    int16_t var_58h;
    int64_t iStack_88;
    int16_t iStack_78;
    int16_t iStack_76;
    char cStack_6e;
    char cStack_6d;
    int16_t aiStack_68 [8];
    int64_t var_50h;
    int64_t var_48h;
    uint32_t var_40h;
    uint32_t var_35h;
    uint32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_bp_20h;
    int32_t var_1ch;
    int32_t var_bp_18h;
    int32_t var_14h;
    int16_t var_bp_10h;
    
    uVar8 = 0;
    if (*arg4 == 0) {
        return -0x7ffffffffffffff2;
    }
    uVar9 = pcStackX_20;
    uVar6 = pcStackX_20;
code_r0x00010936:
    iVar2 = (**(*0x14940 + 0x98))(*(*arg3 + uVar8 * 8),0x12f90);
    if ((iVar2 < 0) || (iVar2 = (**(iStack_88 + 0x88))(iStack_88,&pcStackX_20), iVar2 != -0x7ffffffffffffffd)) {
        if (iVar2 < 0) {
            (**(*0x14940 + 0x48))(*arg3);
            return iVar2;
        }
    }
    else {
        pcStackX_20 = NULL;
    }
    pcVar3 = pcStackX_20;
code_r0x0001099b:
    bVar1 = false;
    if (pcVar3 == NULL) {
        uVar9 = 0xff;
code_r0x000109ec:
        uVar6 = 1;
    }
    else {
        if (*pcVar3 == 'y') {
            bVar1 = true;
        }
        else {
            do {
                if (pcVar3[3] == '\x02') {
                    uVar6 = *(pcVar3 + 0xe);
                    uVar9 = *(pcVar3 + 0x16);
                }
                pcVar3 = pcVar3 + 0x2e;
                pcStackX_20 = pcVar3;
            } while (*pcVar3 != 'y');
        }
        if ((uVar6 == 0) && (uVar9 == 0)) {
            return -0x7ffffffffffffff2;
        }
        if (bVar1) goto code_r0x00010ad6;
        if (uVar6 == 0) goto code_r0x000109ec;
    }
    uVar5 = uVar6;
    if (uVar6 <= uVar9) {
        do {
            uVar7 = 0;
            do {
                fcn.000102e0(&iStack_78,0x10,0);
                (**(iStack_88 + 0x38))(iStack_88,2,(uVar7 | uVar5 << 8) << 0x10,3,&iStack_78);
                if (iStack_78 == -0x7f7a) {
                    var_40h._0_2_ = 0x24fd;
                    uVar4 = 0;
                    aiStack_68[0] = 0x95a;
                    aiStack_68[1] = 0x95b;
                    aiStack_68[2] = 0x3165;
                    aiStack_68[3] = 0x3166;
                    aiStack_68[4] = 0x8b0;
                    aiStack_68[5] = 0x8b1;
                    aiStack_68[6] = 0x8b2;
                    aiStack_68[7] = 0x8b3;
                    var_50h._0_4_ = 0x8b508b4;
                    var_50h._4_4_ = 0x24f308b6;
                    var_48h._0_4_ = 0x24f524f4;
                    var_48h._4_4_ = 0x24fb24f6;
                    do {
                        if (iStack_76 == aiStack_68[uVar4]) goto code_r0x00010ae8;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < 0x11);
                    if ((cStack_6d == '\x02') && (cStack_6e == -0x80)) {
code_r0x00010ae8:
                        *arg1 = uVar5;
                        *arg2 = uVar7;
                        return 0;
                    }
                }
                uVar7 = uVar7 + 1;
            } while (uVar7 < 0x20);
            uVar5 = uVar5 + 1;
        } while (uVar5 <= uVar9);
        pcVar3 = pcStackX_20;
    }
    goto code_r0x0001099b;
code_r0x00010ad6:
    uVar8 = uVar8 + 1;
    if (*arg4 <= uVar8) {
        return -0x7ffffffffffffff2;
    }
    goto code_r0x00010936;
}


/* fcn.00010b34 @ 0x10b34 */

ulong fcn.00010b34(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    
    iVar3 = ((arg2 & 0xffU) << 5 | arg3 & 0x1f) << 0xf;
    uVar1 = *(iVar3 + 0xc0000148);
    *arg1 = uVar1 >> 0x18;
    *(arg1 + 1) = uVar1 >> 0x10;
    *(arg1 + 2) = uVar1 >> 8;
    uVar1 = *(iVar3 + 0xc0000144);
    *(arg1 + 3) = uVar1 >> 0x10;
    *(arg1 + 4) = uVar1 >> 8;
    *(arg1 + 5) = uVar1;
    uVar2 = *arg1 & 0xffffff;
    if (((uVar2 != 0x888888) && (uVar2 != 0)) && (uVar2 != 0xffffff)) {
        return 0;
    }
    return 0x800000000000000e;
}


/* fcn.00011dbc @ 0x11dbc */

ulong fcn.00011dbc(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
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
    
    pcVar7 = &cStack_38;
    pcVar8 = &cStack_38;
    iVar10 = 0;
    pcVar3 = 0x14aa0;
    uVar6 = arg2;
    if (arg2 < 0) {
        iVar10 = 1;
        pcVar7 = &cStack_38;
        uVar6 = -arg2;
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
    pcVar5 = 0x25;
    if (pcVar7 + (iVar10 - &cStack_38) < 0x25) {
        pcVar5 = pcVar7 + (iVar10 - &cStack_38);
    }
    if (pcVar5 * 2 + 2U < 0x81) {
        pcVar7 = pcVar5 * 2 + 0x14aa0;
        if (arg2 < 0) {
            arg2 = -arg2;
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
            uVar6 = arg2 / 10;
            *pcVar8 = "0123456789ABCDEF"[arg2 % 10];
            arg2 = uVar6;
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
            if (pcVar5 * 2 + 0x14aa2 <= pcVar3) break;
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
    return uVar2;
}


/* fcn.000105ec @ 0x105ec */

ulong fcn.000105ec(int64_t arg1)

{
    int iVar1;
    char cVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (arg1 == 0) {
        return 0x8000000000000002;
    }
    iVar3 = fcn.000121bc();
    cVar2 = (**(iVar3 + 8))(0xf7);
    if (cVar2 != '\x01') {
        iVar3 = fcn.000121bc();
        cVar2 = (**(iVar3 + 8))(0xf7);
        if (cVar2 != '\x06') {
            iVar3 = fcn.000121bc();
            cVar2 = (**(iVar3 + 8))(0xf7);
            if (cVar2 != '\x05') {
                uVar4 = 0x8000000000000003;
                goto code_r0x00010660;
            }
        }
    }
    iVar3 = fcn.000121bc();
    cVar2 = (**(iVar3 + 0x30))(0x45);
    if (cVar2 != '\0') {
        iVar1 = *(arg1 + 4);
        if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 == 3)) && (*0x13db8 == '\0')) {
            *arg1 = 0;
        }
        return 0;
    }
    uVar4 = 0x800000000000000e;
code_r0x00010660:
    *arg1 = 0;
    return uVar4;
}


/* fcn.00010508 @ 0x10508 */

void fcn.00010508(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int iVar2;
    ulong uVar3;
    uint8_t auStackX_10 [8];
    int aiStackX_18 [2];
    
    iVar1 = *0x14940;
    auStackX_10[0] = 0;
    aiStackX_18[0] = 0;
    *arg2 = 0;
    iVar1 = (**(iVar1 + 0x140))(0x12f90,0,0x14990);
    if (iVar1 < 0) {
        return;
    }
    iVar2 = arg1;
    if (iVar2 == 3) {
        uVar3 = 0x20004;
    }
    else if (iVar2 == 5) {
        uVar3 = 0x1f0604;
    }
    else {
        if (iVar2 == 7) {
            (**(*0x14990 + 0x38))(*0x14990,2,0x1f0304,1,aiStackX_18);
            if (aiStackX_18[0] == -1) {
                return;
            }
            goto code_r0x000105d4;
        }
        if (iVar2 != 9) {
            return;
        }
        uVar3 = 0x170004;
    }
    (**(*0x14990 + 0x38))(*0x14990,0,uVar3,1,auStackX_10);
    aiStackX_18[0]._0_1_ = auStackX_10[0];
    if (auStackX_10[0] == 0xff) {
        return;
    }
code_r0x000105d4:
    *arg2 = (aiStackX_18[0] & 3) != 0;
    return;
}


/* fcn.00010be4 @ 0x10be4 */

ulong fcn.00010be4(void)

{
    uchar *arg1;
    bool bVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong *puVar4;
    uchar uVar5;
    char cVar6;
    int16_t iVar7;
    int64_t iVar8;
    uint8_t uVar9;
    uint64_t uVar10;
    uchar *puVar11;
    uint16_t auStackX_8 [4];
    uint16_t auStackX_10 [4];
    uint32_t auStackX_18 [2];
    ulong uStackX_20;
    int16_t var_67h;
    int16_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    int64_t iStack_d8;
    uchar auStack_d0 [8];
    uchar auStack_c8 [8];
    uchar auStack_c0 [16];
    uchar auStack_b0 [24];
    uchar auStack_98 [23];
    int64_t var_79h;
    int64_t var_71h;
    int64_t var_69h;
    int64_t var_61h;
    int64_t var_51h;
    int64_t var_39h;
    
    iVar3 = *0x13300;
    iVar2 = *0x132f8;
    if (*0x132f8 == 0) {
        return 0;
    }
    if (*0x13300 == 0) {
        return 0;
    }
    *(*0x13300 + 8) = L"Alder Lake Client Platform";
    *(iVar3 + 0x10) = 0x13e48;
    *(iVar3 + 0x28) = L"Alder Lake Client System";
    iVar8 = fcn.000121bc();
    uVar5 = (**(iVar8 + 8))(0x152);
    *(iVar2 + 0x18) = uVar5;
    iVar8 = fcn.000121bc();
    cVar6 = (**(iVar8 + 8))(0x115);
    iVar8 = fcn.000121bc();
    iVar7 = (**(iVar8 + 0x10))(0x1d);
    if ((((((cVar6 - 5U & 0xfd) == 0) || (iVar7 == 5)) || (iVar7 == 0xe)) || ((iVar7 == 0x17 || (iVar7 == 0x31)))) ||
       (iVar7 == 0x38)) {
        *(iVar3 + 8) = L"Raptor Lake Client Platform";
        *(iVar3 + 0x28) = L"Raptor Lake Client System";
    }
    puVar4 = *0x14928;
    if ((*0x14920 != '\0') && (*0x14928 != NULL)) {
        *(iVar3 + 8) = **0x14928;
        *(iVar3 + 0x10) = puVar4[1];
        *(iVar3 + 0x28) = puVar4[2];
        *(iVar2 + 0x18) = *(puVar4 + 3);
    }
    fcn.00011f74(auStack_98);
    arg1 = iVar2 + 8;
    if (auStack_c0 != arg1) {
        section..text(auStack_c0,arg1,0x10);
    }
    uStackX_20 = 0x10;
    bVar1 = false;
    iVar8 = (**(*0x14950 + 0x48))(auStack_98,0x12fb0,0,&uStackX_20,arg1);
    if (-1 < iVar8) {
        if ((arg1 == auStack_c0) || (iVar8 = fcn.000102c0(arg1,auStack_c0,0x10), iVar8 == 0)) {
            bVar1 = true;
        }
        iVar8 = fcn.000121f8();
        if ((*(iVar8 + 0xc) != 4) && (!bVar1)) {
            *0x132f8 = iVar2;
            *0x13300 = iVar3;
            *0x13310 = 0;
            *0x13318 = 1;
            return 0;
        }
    }
    iVar8 = fcn.0001256c(auStack_b0,0x10);
    if (iVar8 < 0) {
        if (((*((*0xc00fd010 & 0xfffff000) + 0x60) != 0x7fff) &&
            (iVar8 = (**(*0x14940 + 0x140))(0x12ff0,0), -1 < iVar8)) &&
           (iVar8 = (**(iStack_d8 + 8))(iStack_d8,3,0,6,auStackX_18), -1 < iVar8)) {
            auStackX_18[0] = auStackX_18[0] & 0xffffff;
            if (((auStackX_18[0] == 0x888888) || (auStackX_18[0] == 0)) || (auStackX_18[0] == 0xffffff)) {
                iVar8 = -0x7ffffffffffffff2;
            }
            if (-1 < iVar8) {
                uVar10 = 0;
                puVar11 = arg1;
                do {
                    uVar9 = uVar10 + 1;
                    *puVar11 = *(auStackX_18 + uVar10 + (uVar10 / 6) * -6);
                    puVar11 = puVar11 + 1;
                    uVar10 = uVar9;
                } while (uVar9 < 0x10);
                goto code_r0x00010efc;
            }
        }
        iVar8 = (**(*0x14940 + 0x138))(2,0x12f90,0,auStack_d0,auStack_c8);
        if (-1 < iVar8) {
            iVar8 = fcn.000108f0(auStackX_10,auStackX_8,auStack_c8,auStack_d0);
        }
        if ((iVar8 == 0) && (iVar8 = fcn.00010b34(auStackX_18,auStackX_10[0],auStackX_8[0]), -1 < iVar8)) {
            uVar10 = 0;
            puVar11 = arg1;
            do {
                uVar9 = uVar10 + 1;
                *puVar11 = *(auStackX_18 + uVar10 + (uVar10 / 6) * -6);
                puVar11 = puVar11 + 1;
                uVar10 = uVar9;
            } while (uVar9 < 0x10);
        }
    }
    else {
        uVar10 = 0;
        puVar11 = arg1;
        do {
            uVar9 = uVar10 + 1;
            *puVar11 = auStack_b0[uVar10 + (uVar10 / 0xc) * -0xc];
            puVar11 = puVar11 + 1;
            uVar10 = uVar9;
        } while (uVar9 < 0x10);
    }
code_r0x00010efc:
    *(iVar2 + 0x10) = *(iVar2 + 0x10) & 0x3f;
    *(iVar2 + 0xe) = *(iVar2 + 0xe) & 0xf;
    *(iVar2 + 0x10) = *(iVar2 + 0x10) | 0x80;
    *(iVar2 + 0xe) = *(iVar2 + 0xe) | 0x50;
    (**(*0x14950 + 0x58))(auStack_98,0x12fb0,3,uStackX_20,arg1);
    *0x13318 = 1;
    *0x13310 = 0;
    *0x132f8 = iVar2;
    *0x13300 = iVar3;
    return 0;
}


/* fcn.00010f60 @ 0x10f60 */

ulong fcn.00010f60(ulong param_1,int64_t param_2,ulong param_3)

{
    int64_t iVar1;
    ulong *puVar2;
    uint16_t uVar3;
    int64_t iVar4;
    ulong uVar5;
    ulong *puVar6;
    bool bVar7;
    
    puVar2 = *0x13328;
    iVar1 = *0x13320;
    if ((*0x13320 != 0) && (*0x13328 != NULL)) {
        iVar4 = fcn.000121bc();
        uVar5 = (**(iVar4 + 0x20))(0x20f);
        puVar2[1] = uVar5;
        iVar4 = fcn.000121bc();
        uVar5 = 0x21;
        uVar3 = (**(iVar4 + 0x10))();
        fcn.00011dbc(uVar5,param_2,param_3,uVar3 + 1);
        bVar7 = *0x14920 != '\0';
        puVar2[2] = 0x14aa0;
        if (bVar7) {
            if ((*0x14928 == 0) || (puVar6 = *(*0x14928 + 0x20), *(*0x14928 + 0x20) == NULL)) {
                puVar6 = *0x13570;
            }
            puVar2[1] = *puVar6;
            *puVar2 = puVar6[1];
            puVar2[2] = puVar6[2];
            *(iVar1 + 9) = *(puVar6 + 3);
            *(iVar1 + 0xd) = *(puVar6 + 0x19);
            puVar2[5] = puVar6[4];
        }
        *0x13340 = 1;
        *0x13338 = 0;
    }
    *0x13320 = iVar1;
    *0x13328 = puVar2;
    return 0;
}


/* fcn.0001103c @ 0x1103c */

ulong fcn.0001103c(void)

{
    int64_t iVar1;
    ulong *puVar2;
    char cVar3;
    int64_t iVar4;
    uchar uVar5;
    ulong *puVar6;
    uint8_t uVar7;
    bool bVar8;
    
    puVar2 = *0x13350;
    iVar1 = *0x13348;
    if (*0x13348 == 0) {
        return 0;
    }
    if (*0x13350 == NULL) {
        return 0;
    }
    uVar7 = *(*0x13348 + 0x14) * *(*0x13348 + 0x13) + 0x16;
    iVar4 = fcn.000121bc();
    cVar3 = (**(iVar4 + 8))(0xf7);
    if (cVar3 != '\x01') {
        iVar4 = fcn.000121bc();
        cVar3 = (**(iVar4 + 8))(0xf7);
        if (cVar3 != '\x06') {
            iVar4 = fcn.000121bc();
            cVar3 = (**(iVar4 + 8))(0xf7);
            if (cVar3 != '\x02') {
                iVar4 = fcn.000121bc();
                cVar3 = (**(iVar4 + 8))(0xf7);
                if (cVar3 != '\x03') {
                    iVar4 = fcn.000121bc();
                    cVar3 = (**(iVar4 + 8))(0xf7);
                    uVar5 = 0x11;
                    if (cVar3 == '\x05') {
                        uVar5 = 9;
                    }
                    goto code_r0x000110ed;
                }
            }
            uVar5 = 3;
            goto code_r0x000110ed;
        }
    }
    uVar5 = 9;
code_r0x000110ed:
    bVar8 = *0x14920 != '\0';
    *(iVar1 + 5) = uVar5;
    if (bVar8) {
        if ((*0x14928 == 0) || (puVar6 = *(*0x14928 + 0x28), *(*0x14928 + 0x28) == NULL)) {
            puVar6 = *0x13578;
        }
        *puVar2 = *puVar6;
        *(iVar1 + 5) = *(puVar6 + 1);
        *(iVar1 + 9) = *(puVar6 + 3);
        *(iVar1 + 10) = *(puVar6 + 0x19);
        *(iVar1 + 0xb) = *(puVar6 + 0x1a);
        *(iVar1 + 0xc) = *(puVar6 + 0x1b);
        *(iVar1 + 0x11) = *(puVar6 + 0x1c);
        *(iVar1 + 0x12) = *(puVar6 + 0x1d);
    }
    *(iVar1 + 1) = uVar7;
    *(iVar1 + -1 + uVar7) = 5;
    *0x13368 = 1;
    *0x13360 = 0;
    *0x13348 = iVar1;
    *0x13350 = puVar2;
    return 0;
}


/* fcn.0001118c @ 0x1118c */

ulong fcn.0001118c(void)

{
    int64_t arg1;
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint64_t uVar5;
    uint8_t uVar6;
    ulong *arg1_00;
    uint64_t uVar7;
    
    puVar2 = *0x133f0;
    iVar1 = *0x133e8;
    if ((*0x133e8 != 0) && (*0x133f0 != NULL)) {
        iVar3 = fcn.00012190(0x171);
        puVar4 = fcn.00012190(0x290);
        if ((puVar4 == NULL) || (iVar3 == 0)) {
            return 0x8000000000000009;
        }
        uVar7 = 0;
        uVar6 = 0;
        do {
            if (*0x14920 == '\0') {
code_r0x00011226:
                arg1 = iVar3 + uVar7 * 9;
                if (arg1 != iVar1) {
                    section..text(arg1,iVar1,9);
                }
                arg1_00 = puVar4 + uVar7 * 2;
                if (arg1_00 != puVar2) {
                    section..text(arg1_00,puVar2,0x10);
                }
                uVar5 = uVar6;
                uVar7 = uVar7 + 1;
                *(arg1 + 5) = *(uVar5 * 0x28 + 0x13760);
                *(arg1 + 7) = *(uVar5 * 0x28 + 0x13770);
                *(arg1 + 8) = *(uVar5 * 0x28 + 0x13774);
                *arg1_00 = *(uVar5 * 0x28 + 0x13758);
                arg1_00[1] = *(uVar5 * 0x28 + 0x13768);
            }
            else {
                if (*0x14928 == 0) {
                    uVar5 = *0x13580;
                }
                else {
                    uVar5 = *(*0x14928 + 0x30);
                }
                if ((uVar5 >> (uVar6 & 0x3f) & 1) != 0) goto code_r0x00011226;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 0x29);
        *0x13400 = 1;
        *0x133e8 = iVar3;
        *0x133f0 = puVar4;
        *0x13408 = uVar7;
    }
    return 0;
}


/* fcn.00011308 @ 0x11308 */

ulong fcn.00011308(void)

{
    ulong *arg1;
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint8_t uVar5;
    int64_t arg1_00;
    int *arg1_01;
    int64_t iStackX_8;
    
    puVar2 = *0x13468;
    iVar1 = *0x13460;
    uVar5 = 0;
    if ((*0x13460 != 0) && (*0x13468 != NULL)) {
        iVar3 = fcn.00012190(0x4e);
        puVar4 = fcn.00012190(0x78);
        if ((iVar3 == 0) || (puVar4 == NULL)) {
            return 0x8000000000000009;
        }
        arg1_01 = 0x135b0;
        iStackX_8 = 3;
        do {
            arg1_00 = uVar5 * 0x1a + iVar3;
            if (arg1_00 != iVar1) {
                section..text(arg1_00,iVar1,0x1a);
            }
            arg1 = puVar4 + uVar5 * 5;
            if (arg1 != puVar2) {
                section..text(arg1,puVar2,0x28);
            }
            fcn.000105ec(arg1_01);
            if (*arg1_01 == 1) {
                uVar5 = uVar5 + 1;
                *arg1 = *(arg1_01 + 2);
                arg1[1] = *(arg1_01 + 4);
                arg1[2] = *(arg1_01 + 6);
                arg1[3] = *(arg1_01 + 8);
                arg1[4] = *(arg1_01 + 10);
                *(arg1_00 + 9) = arg1_01[0xc];
                *(arg1_00 + 10) = arg1_01[0xd];
                *(arg1_00 + 0xc) = *(arg1_01 + 0x36);
                *(arg1_00 + 0xf) = arg1_01[0x10];
                *(arg1_00 + 0x15) = arg1_01[0x14];
                *(arg1_00 + 0x16) = arg1_01[0x15];
            }
            arg1_01 = arg1_01 + 0x16;
            iStackX_8 = iStackX_8 + -1;
        } while (iStackX_8 != 0);
        *0x13480 = uVar5;
        *0x13478 = 1;
        *0x13460 = iVar3;
        *0x13468 = puVar4;
    }
    return 0;
}


/* fcn.0001147c @ 0x1147c */

ulong fcn.0001147c(void)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    uint8_t *puVar5;
    int64_t iVar6;
    int64_t arg1;
    uint8_t uVar7;
    uint64_t uVar8;
    int64_t iVar9;
    ulong *arg1_00;
    bool bVar10;
    int64_t iStackX_8;
    
    puVar2 = *0x13490;
    iVar1 = *0x13488;
    iStackX_8 = 0;
    if ((*0x13488 != 0) && (*0x13490 != NULL)) {
        iVar3 = fcn.00012190(0x1e);
        puVar4 = fcn.00012190(0x10);
        if ((puVar4 == NULL) || (iVar3 == 0)) {
            return 0x8000000000000009;
        }
        uVar8 = 0;
        iVar9 = *0x14928;
        do {
            if ((*0x14920 != '\0') && (iVar9 != 0)) {
                iStackX_8 = *(iVar9 + 0x40);
            }
            arg1 = uVar8 * 0xf + iVar3;
            if (arg1 != iVar1) {
                section..text(arg1,iVar1,0xf);
                iVar9 = *0x14928;
            }
            arg1_00 = puVar4 + uVar8;
            if (arg1_00 != puVar2) {
                section..text(arg1_00,puVar2,8);
                iVar9 = *0x14928;
            }
            iVar6 = uVar8 * 0x20;
            *(arg1 + 6) = *(arg1 + 6) ^ (*(iVar6 + 0x13064) ^ *(arg1 + 6)) & 0x1f;
            bVar10 = *0x14920 != '\0';
            *(arg1 + 6) = *(iVar6 + 0x13068) << 5 | *(arg1 + 6) & 0x1f;
            *(arg1 + 7) = *(iVar6 + 0x1306c);
            *(arg1 + 8) = *(iVar6 + 0x13070);
            *(arg1 + 0xc) = *(iVar6 + 0x13074);
            *arg1_00 = *(iVar6 + 0x13078);
            if (bVar10) {
                if ((iVar9 == 0) || (puVar5 = iStackX_8 + uVar8 * 0x10, puVar5 == NULL)) {
                    puVar5 = *0x13590;
                }
                *(arg1 + 6) = *(arg1 + 6) ^ (*puVar5 ^ *(arg1 + 6)) & 0x1f;
                *arg1_00 = *(puVar5 + 8);
            }
            uVar7 = uVar8 + 1;
            uVar8 = uVar7;
        } while (uVar7 < 2);
        *0x134a8 = uVar7;
        *0x134a0 = 1;
        *0x13488 = iVar3;
        *0x13490 = puVar4;
    }
    return 0;
}


/* fcn.00010818 @ 0x10818 */

ulong fcn.00010818(void)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    uchar uVar4;
    int64_t iVar5;
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    
    iVar2 = *0x132d8;
    iVar1 = *0x132d0;
    if ((*0x132d0 != 0) && (*0x132d8 != 0)) {
        fcn.00012410();
        *(iVar2 + 0x10) = 0x14a20;
        *(iVar2 + 8) = 0x149a0;
        *(iVar1 + 9) = 0xff;
        *(iVar1 + 0x12) = 0xf33;
        iVar5 = fcn.00010690(0x149a0,auStackX_8,auStackX_10);
        if (iVar5 == 0) {
            *(iVar1 + 0x14) = auStackX_8[0];
            *(iVar1 + 0x15) = auStackX_10[0];
            *(iVar1 + 0x18) = 0x20;
        }
        iVar5 = fcn.000121bc();
        cVar3 = (**(iVar5 + 0x30))(0x45);
        if (cVar3 != '\0') {
            iVar5 = fcn.000121bc();
            uVar4 = (**(iVar5 + 8))(0x42);
            *(iVar1 + 0x16) = uVar4;
            iVar5 = fcn.000121bc();
            uVar4 = (**(iVar5 + 8))(0x43);
            *(iVar1 + 0x17) = uVar4;
        }
        *0x132f0 = 1;
        *0x132e8 = 0;
    }
    *0x132d0 = iVar1;
    *0x132d8 = iVar2;
    return 0;
}


/* fcn.00011648 @ 0x11648 */

ulong fcn.00011648(void)

{
    ulong *arg1;
    char cVar1;
    int iVar2;
    int64_t iVar3;
    uint8_t *puVar4;
    uint8_t uVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint8_t uVar10;
    uint64_t uVar11;
    uint8_t uVar12;
    uint64_t uVar13;
    int64_t iVar14;
    int64_t iVar15;
    bool bVar16;
    uint8_t auStackX_8 [8];
    uchar uStackX_10;
    uint8_t uStackX_18;
    ulong *puStackX_20;
    
    iVar3 = *0x134d8;
    iVar15 = 0;
    puStackX_20 = *0x134e0;
    if ((*0x134d8 != 0) && (*0x134e0 != NULL)) {
        iVar6 = fcn.00012190(0x2c);
        puVar7 = fcn.00012190(0x20);
        if ((iVar6 == 0) || (puVar7 == NULL)) {
            return 0x8000000000000009;
        }
        uVar10 = 0;
        uVar13 = 0;
        iVar9 = *0x14928;
        do {
            uVar12 = uVar13;
            if (*0x14920 == '\0') {
code_r0x000116f4:
                uVar11 = uVar10;
                iVar9 = uVar11 * 0xb + iVar6;
                if (iVar9 != iVar3) {
                    section..text(iVar9,iVar3,0xb);
                }
                arg1 = puVar7 + uVar11;
                if (arg1 != puStackX_20) {
                    section..text(arg1,puStackX_20,8);
                }
                fcn.00010508(*(uVar11 * 0x20 + 0x136d0),uVar11 * 0x20 + 0x136d4);
                iVar14 = uVar13 * 0x20;
                uVar5 = *(iVar14 + 0x136d0);
                cVar1 = *(iVar14 + 0x136d4);
                *(iVar9 + 6) = 0;
                *(iVar9 + 5) = cVar1 << 7 | uVar5 & 0x7f;
                *(iVar9 + 7) = *(iVar14 + 0x136da);
                *(iVar9 + 9) = *(iVar14 + 0x136dc);
                iVar2 = *(iVar14 + 0x136d0);
                if (iVar2 == 3) {
                    *(iVar9 + 10) = 0x10;
                }
                else if (iVar2 == 5) {
                    *(iVar9 + 10) = 0xfe;
                }
                else if (iVar2 == 7) {
                    *(iVar9 + 10) = 0xfb;
                }
                else if (iVar2 == 9) {
                    *(iVar9 + 10) = 0xb8;
                }
                else {
                    *(iVar9 + 10) = *(iVar14 + 0x136dd);
                }
                puVar4 = *0x135a0;
                if (*0x14920 != '\0') {
                    if ((*0x14928 == 0) || (iVar15 + uVar11 * 4 == 0)) {
                        *(iVar9 + 7) = **0x135a0;
                        *(iVar9 + 9) = puVar4[1];
                        uVar5 = puVar4[2] << 3 | puVar4[3];
                    }
                    else {
                        *(iVar9 + 7) = *(iVar15 + uVar13 * 4);
                        *(iVar9 + 9) = *(iVar15 + 1 + uVar13 * 4);
                        uVar5 = *(iVar15 + 2 + uVar13 * 4) << 3 | *(iVar15 + 3 + uVar13 * 4);
                    }
                    *(iVar9 + 10) = uVar5;
                    uStackX_18 = uVar5 & 7;
                    uStackX_10 = *(iVar9 + 9);
                    bVar16 = false;
                    auStackX_8[0] = 0;
                    iVar8 = (**(*0x14940 + 0x140))(0x12f90,0,0x14990);
                    if ((-1 < iVar8) &&
                       ((**(*0x14990 + 0x38))
                                  (*0x14990,0,CONCAT21(CONCAT11(uStackX_10,uVar5 >> 3),uStackX_18) << 8 | 4,1,
                                   auStackX_8), auStackX_8[0] != 0xff)) {
                        bVar16 = (auStackX_8[0] & 3) != 0;
                    }
                    *(iVar9 + 5) = *(iVar9 + 5) & 0x7f;
                    *(iVar9 + 5) = *(iVar9 + 5) | bVar16 << 7;
                }
                iVar9 = *0x14928;
                uVar10 = uVar10 + 1;
                *arg1 = *(iVar14 + 0x136c8);
            }
            else if (iVar9 == 0) {
                if ((*0x13598 >> (uVar12 & 0x1f) & 1) != 0) goto code_r0x000116f4;
            }
            else if ((*(iVar9 + 0x48) >> (uVar12 & 0x1f) & 1) != 0) {
                iVar15 = *(iVar9 + 0x50);
                goto code_r0x000116f4;
            }
            uVar13 = uVar12 + 1;
        } while (uVar12 + 1 < 4);
        *0x134f8 = uVar10;
        *0x134f0 = 1;
        *0x134d8 = iVar6;
        *0x134e0 = puVar7;
    }
    return 0;
}


/* fcn.00011954 @ 0x11954 */

ulong fcn.00011954(void)

{
    uint8_t uVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint8_t *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint8_t *puVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    
    iVar3 = *0x13508;
    iVar2 = *0x13500;
    if ((*0x13500 != 0) && (*0x13508 != 0)) {
        iVar4 = fcn.000121bc();
        puVar5 = (**(iVar4 + 0x20))(0x210);
        puVar8 = 0x130e0;
        if (puVar5 != NULL) {
            puVar8 = puVar5;
        }
        uVar1 = *puVar8;
        if (uVar1 < 2) {
            iVar4 = iVar2;
            iVar6 = iVar3;
        }
        else {
            iVar4 = fcn.00012190(uVar1 * 0x1d);
            if ((iVar4 == 0) || (iVar6 = fcn.00012190(uVar1 << 3), iVar6 == 0)) {
                return 0x8000000000000009;
            }
        }
        uVar9 = 0;
        if (uVar1 != 0) {
            uVar11 = uVar1;
            puVar8 = puVar8 + 0x10;
            uVar10 = uVar9;
            do {
                if (1 < uVar1) {
                    iVar7 = uVar10 * 0x1d + iVar4;
                    if (iVar7 != iVar2) {
                        section..text(iVar7,iVar2,0x1d);
                    }
                    iVar7 = iVar6 + uVar10 * 8;
                    if (iVar7 != iVar3) {
                        section..text(iVar7,iVar3,8);
                    }
                }
                uVar9 = uVar10;
                if (puVar8[0xd] != 0) {
                    iVar7 = uVar10 * 0x1d;
                    *(iVar7 + 5 + iVar4) = *puVar8;
                    *(iVar7 + 6 + iVar4) = puVar8[1];
                    if (*(((puVar8[0xb] & 0x1f | puVar8[10] << 5) << 3 | puVar8[0xc] & 7) * 0x1000 + 0xc0000000) != -1)
                    {
                        puVar8[2] = 4;
                    }
                    *(iVar7 + 7 + iVar4) = puVar8[2];
                    *(iVar7 + 8 + iVar4) = puVar8[3];
                    *(iVar7 + 9 + iVar4) = *(puVar8 + 4);
                    *(iVar7 + 0xb + iVar4) = puVar8[6];
                    *(iVar7 + 0xc + iVar4) = puVar8[7];
                    *(iVar7 + 0xd + iVar4) = *(puVar8 + 8);
                    *(iVar7 + 0xf + iVar4) = puVar8[10];
                    *(iVar7 + 0x10 + iVar4) = puVar8[0xb] << 3 | puVar8[0xc];
                    uVar9 = uVar10 + 1;
                    *(iVar6 + uVar10 * 8) = *(puVar8 + -8);
                }
                puVar8 = puVar8 + 0x18;
                uVar11 = uVar11 - 1;
                uVar10 = uVar9;
            } while (uVar11 != 0);
        }
        *0x13518 = 1 < uVar1;
        *0x13500 = iVar4;
        *0x13508 = iVar6;
        *0x13520 = uVar9;
    }
    return 0;
}


/* fcn.00011f40 @ 0x11f40 */

uint64_t fcn.00011f40(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
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


/* fcn.00012004 @ 0x12004 */

uint64_t fcn.00012004(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.000122b0 @ 0x122b0 */

void fcn.000122b0(int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    uint64_t uVar3;
    int iVar4;
    uint32_t uVar5;
    
    uVar3 = arg1 >> 0x16 & 0x3ff;
    uVar5 = arg1 & 0x3fffff;
    do {
        uVar1 = in(0x1808);
        iVar4 = (uVar1 & 0xffffff) + uVar5;
        uVar5 = 0x400000;
        while( true ) {
            iVar2 = in(0x1808);
            if ((iVar4 - iVar2 >> 0x17 & 1) != 0) break;
            fcn.00010360();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00012718 @ 0x12718 */

//WARNING: Removing unreachable block (ram,0x000127f2)

int64_t fcn.00012718(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    ulong noname_1_00;
    uint64_t uVar3;
    int64_t arg2_00;
    uint64_t *arg3_00;
    uint64_t uStackX_8;
    
    uStackX_8 = arg1;
    arg1_00 = fcn.00012658(arg1);
    iVar1 = fcn.00012698(arg1_00,noname_1,arg2,arg3);
    if (iVar1 < 0) {
        arg2_00 = 0;
        arg3_00 = &uStackX_8;
        noname_1_00 = 0x12fd0;
        iVar1 = (**(*0x14940 + 0x138))(2);
        if (-1 < iVar1) {
            uVar3 = 0;
            uVar2 = uStackX_8;
            if (uStackX_8 != 0) {
                do {
                    if (*(uVar3 * 8) != arg1_00) {
                        iVar1 = fcn.00012698(*(uVar3 * 8),noname_1_00,arg2_00,arg3_00);
                        if (-1 < iVar1) goto code_r0x000127ff;
                        uVar2 = uStackX_8;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uVar2);
            }
            if (uVar3 == uVar2) {
                iVar1 = -0x7ffffffffffffff2;
            }
        }
    }
    else {
        iVar1 = 0;
    }
code_r0x000127ff:
    return iVar1;
}


/* fcn.00012344 @ 0x12344 */

ulong fcn.00012344(int64_t arg1)

{
    int64_t iVar1;
    ulong in_RDX;
    uchar *arg1_00;
    int64_t in_R8;
    uchar *puStackX_8;
    ulong uStackX_10;
    uchar auStack_58 [80];
    
    puStackX_8 = NULL;
    uStackX_10 = 0;
    arg1_00 = auStack_58;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    iVar1 = 0x12fa0;
    puStackX_8 = fcn.00012264(0x12fa0);
    if (puStackX_8 == NULL) {
        iVar1 = fcn.00012718(iVar1,in_RDX,in_R8,&puStackX_8);
        if ((iVar1 != 0) || (puStackX_8 == NULL)) {
            return 0x800000000000000e;
        }
        uStackX_10 = 0x4a;
        if (arg1_00 != puStackX_8) {
            section..text(arg1_00,puStackX_8,0x4a);
        }
        (**(*0x14940 + 0x48))(puStackX_8);
    }
    else {
        uStackX_10 = 0x4a;
        if (arg1_00 != puStackX_8 + 0x18) {
            section..text(arg1_00,puStackX_8 + 0x18,0x4a);
        }
    }
    return 0;
}


/* fcn.00012814 @ 0x12814 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00012814(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    bool bVar1;
    int64_t iVar2;
    char cVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t arg2_00;
    int iVar7;
    uint64_t uVar8;
    int64_t aiStack_38 [2];
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar5 = 0;
    aiStack_38[1] = 400;
    uVar8 = arg3 & 0xffffffff;
    arg2_00 = arg2 & 0xffffffff;
    bVar1 = true;
    if (arg4 == 0) {
        return -0x7ffffffffffffffe;
    }
    aiStack_38[0] = 0;
    if (arg1 != 0) {
        iVar5 = fcn.00011d18(CONCAT71(arg1 >> 8,*arg1));
    }
    cVar3 = fcn.00012b3c(iVar5,aiStack_38);
    if (cVar3 == '\0') {
        return -0x7ffffffffffffff9;
    }
    iVar6 = fcn.00012e9c(aiStack_38[0],arg2_00,aiStack_38 + 1);
    iVar5 = aiStack_38[0];
    if (iVar6 != 0) {
        return iVar6;
    }
    iVar6 = 1000000;
    do {
        if ((*(iVar5 + 0x2c) >> 6 & 1) != 0) {
            iVar5 = -0x7ffffffffffffff9;
            goto code_r0x00012984;
        }
        if (((*(aiStack_38[0] + 0x70) >> 1 & 1) == 0) || (0x3e < (*(aiStack_38[0] + 0x74) & 0x1ff))) {
            fcn.00012310(1,arg2_00);
            iVar6 = iVar6 + -1;
        }
        else {
            uVar4 = *arg4;
            if (uVar8 == 1) {
                uVar4 = uVar4 | 0x200;
            }
            if (bVar1) {
                uVar4 = uVar4 | 0x400;
            }
            arg4 = arg4 + 1;
            uVar8 = uVar8 - 1;
            bVar1 = false;
            *(aiStack_38[0] + 0x10) = uVar4;
        }
        iVar2 = aiStack_38[0];
        if (uVar8 == 0) {
            iVar7 = 50000;
            while (((*(iVar2 + 0x70) >> 2 & 1) == 0 && ((*(iVar2 + 0x70) & 1) != 0))) {
                fcn.00012310(1,arg2_00);
                iVar7 = iVar7 + -1;
                if (iVar7 == 0) {
                    return -0x7fffffffffffffee;
                }
            }
            return 0;
        }
    } while (iVar6 != 0);
    iVar5 = -0x7fffffffffffffee;
code_r0x00012984:
    iVar6 = aiStack_38[0];
    fcn.00012c40(aiStack_38[0],arg2_00);
    fcn.00012e9c(iVar6,arg2 & 0xffffffff,aiStack_38 + 1);
    return iVar5;
}


/* fcn.000129bc @ 0x129bc */

//WARNING: Variable defined which should be unmapped: var_10h

ulong fcn.000129bc(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    char cVar2;
    uint uVar3;
    ulong uVar4;
    int64_t iVar5;
    int64_t *arg2_00;
    uint32_t uVar6;
    uint64_t uVar7;
    int iVar8;
    int64_t iVar9;
    int32_t var_10h;
    int64_t aiStack_28 [2];
    
    aiStack_28[1] = 400;
    iVar5 = 0;
    uVar7 = arg2 & 0xffffffff;
    if (arg3 == 0) {
        uVar4 = 0x8000000000000002;
    }
    else {
        aiStack_28[0] = 0;
        if (arg1 != 0) {
            iVar5 = fcn.00011d18(CONCAT71(arg1 >> 8,*arg1));
        }
        arg2_00 = aiStack_28;
        cVar2 = fcn.00012b3c(iVar5,arg2_00);
        iVar5 = aiStack_28[0];
        if (cVar2 == '\0') {
            uVar4 = 0x8000000000000007;
        }
        else {
            iVar9 = 1000000;
            do {
                iVar1 = aiStack_28[0];
                if ((*(iVar5 + 0x2c) >> 6 & 1) != 0) {
                    uVar4 = 0x8000000000000007;
                    goto code_r0x00012b0e;
                }
                uVar6 = *(aiStack_28[0] + 0x70);
                arg2_00 = uVar6;
                if ((((*(aiStack_28[0] + 0x78) & 0x1ff) < 0x3f) && ((uVar6 & 0x10) == 0)) && ((uVar6 & 2) != 0)) {
                    uVar3 = 0x100;
                    if (uVar7 == 1) {
                        uVar3 = 0x300;
                    }
                    iVar8 = 250000;
                    *(aiStack_28[0] + 0x10) = uVar3;
                    do {
                        if ((*(iVar1 + 0x70) & 8) != 0) {
                            *arg3 = *(iVar1 + 0x10);
                            arg3 = arg3 + 1;
                            uVar6 = uVar7 - 1;
                            uVar7 = uVar6;
                            if (uVar6 == 0) {
                                return 0;
                            }
                            break;
                        }
                        fcn.00012310(1,arg2_00);
                        iVar8 = iVar8 + -1;
                        if (iVar8 == 0) {
                            return 0x8000000000000012;
                        }
                    } while (iVar8 != 0);
                    if (uVar7 == 0) {
                        return 0;
                    }
                }
                fcn.00012310(1,arg2_00);
                iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            uVar4 = 0x8000000000000012;
code_r0x00012b0e:
            fcn.00012c40(aiStack_28[0],arg2_00);
        }
    }
    return uVar4;
}


/* fcn.000124c4 @ 0x124c4 */

int64_t fcn.000124c4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint8_t uVar1;
    int64_t iVar2;
    uchar auStackX_18 [8];
    ushort uStackX_20;
    
    uStackX_20 = 0;
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar2 = fcn.000121bc();
        auStackX_18[0] = (**(iVar2 + 8))(0xff);
        uStackX_20 = CONCAT11(arg2 & 0xffffffffU,(arg2 & 0xffffffffU) >> 8);
        iVar2 = fcn.000121bc();
        uVar1 = (**(iVar2 + 8))(0x100);
        iVar2 = fcn.00012814(auStackX_18,uVar1,2,&uStackX_20);
        if (-1 < iVar2) {
            iVar2 = fcn.000121bc();
            uVar1 = (**(iVar2 + 8))(0x100);
            iVar2 = fcn.000129bc(auStackX_18,uVar1,arg3 & 0xffffffff,arg1);
        }
    }
    return iVar2;
}


/* fcn.00012658 @ 0x12658 */

ulong fcn.00012658(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x14940 + 0x98))(*0x14948,0x12f80,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.00012698 @ 0x12698 */

ulong fcn.00012698(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg2;
    if (arg1 != 0) {
        iStackX_20 = arg3;
        iVar1 = (**(*0x14940 + 0x98))(arg1,0x12fd0,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,0x12fa0,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* fcn.00011d18 @ 0x11d18 */

uint64_t fcn.00011d18(uint32_t arg1)

{
    uint64_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    
    uVar2 = arg1;
    if (7 < uVar2) {
code_r0x00011d20:
        uVar4 = 0x7000;
        goto code_r0x00011d6a;
    }
    uVar3 = arg1 & 0xff;
    if (uVar2 == 0) goto code_r0x00011d68;
    if (uVar3 == 1) goto code_r0x00011d53;
    if (uVar3 == 2) {
        uVar4 = 0x2000;
    }
    else if (uVar3 == 3) {
        uVar4 = 0x3000;
    }
    else if (uVar3 == 4) {
code_r0x00011d68:
        uVar4 = 0;
    }
    else {
        if (uVar3 != 5) {
            if (uVar3 == 6) goto code_r0x00011d68;
            if (uVar3 != 7) goto code_r0x00011d20;
        }
code_r0x00011d53:
        uVar4 = 0x1000;
    }
code_r0x00011d6a:
    if (uVar2 < 8) {
        arg1 = arg1 & 0xff;
        if ((((uVar2 == 0) || (arg1 == 1)) || (arg1 == 2)) || (arg1 == 3)) {
            uVar1 = 0xa8000;
            goto code_r0x00011db6;
        }
        if ((arg1 == 4) || (arg1 == 5)) {
            uVar1 = 0xc8000;
            goto code_r0x00011db6;
        }
        if ((arg1 == 6) || (arg1 == 7)) {
            uVar1 = 0x80000;
            goto code_r0x00011db6;
        }
    }
    uVar1 = 0xf8000;
code_r0x00011db6:
    return uVar1 | uVar4;
}


/* fcn.00012b3c @ 0x12b3c */

uint64_t fcn.00012b3c(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int64_t iVar3;
    
    iVar3 = (*((arg1 + 0x10U >> 4 & 0x10000000 | arg1 + 0x10U & 0xffffffff) + 0xc0000000) & 0xfffff000) +
            (*((arg1 + 0x14U >> 4 & 0x10000000 | arg1 + 0x14U & 0xffffffff) + 0xc0000000) << 0x20);
    *arg2 = iVar3;
    uVar2 = iVar3 + 0x1000;
    if ((uVar2 & 0xffffffffffffefff) != 0) {
        uVar2 = arg1 + 4;
        if ((*((uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff) + 0xc0000000) & 2) == 0) {
            uVar2 = uVar2 >> 4 & 0x10000000 | uVar2 & 0xffffffff;
            *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) | 2;
        }
        uVar2 = arg1 + 0x84U >> 4 & 0x10000000 | arg1 + 0x84U & 0xffffffff;
        *(uVar2 + 0xc0000000) = *(uVar2 + 0xc0000000) & 0xfc;
        uVar1 = *(iVar3 + 0x204);
        uVar2 = uVar1;
        if (((uVar1 & 3) == 0) && ((uVar1 & 4) == 0)) {
            *(iVar3 + 0x204) = uVar1 | 7;
            uVar2 = *(iVar3 + 0x208);
        }
        uVar2 = CONCAT71(uVar2 >> 8,1);
    }
    return uVar2;
}


/* fcn.00012e9c @ 0x12e9c */

int64_t fcn.00012e9c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    
    if (*arg1 - 1U < 0xfffffffe) {
        iVar1 = fcn.00012c40(arg1,arg2);
        if (iVar1 == 0) {
            iVar1 = arg3;
            fcn.00012c9c(arg1,arg3);
            uVar2 = arg2 & 0x3ff;
            uVar3 = uVar2 | 0x1000;
            if (-1 < arg2) {
                uVar3 = uVar2;
            }
            *(arg1 + 4) = uVar3;
            uVar3 = 1;
            if (399 < *arg3) {
                uVar3 = 3 - (*arg3 < 0xd48);
            }
            iVar4 = 50000;
            *arg1 = (uVar3 | 0x30) * 2 | *arg1 & 0xfffffff9 | 1;
            *(arg1 + 0x6c) = 1;
            do {
                if ((*(arg1 + 0x9c) & 1) != 0) {
                    return 0;
                }
                fcn.00012310(1,iVar1);
                iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            iVar1 = -0x7fffffffffffffee;
        }
    }
    else {
        iVar1 = -0x7ffffffffffffff9;
    }
    return iVar1;
}


/* fcn.00012310 @ 0x12310 */

int64_t fcn.00012310(int64_t arg1,int64_t arg2)

{
    fcn.000122b0((arg1 * 0x369e99) / 1000000 & 0xffffffff);
    return arg1;
}


/* fcn.00012c40 @ 0x12c40 */

ulong fcn.00012c40(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.00012310(100,arg2);
    iVar1 = 50000;
    *(arg1 + 0x6c) = 0;
    do {
        if ((*(arg1 + 0x9c) & 1) == 0) {
            return 0;
        }
        fcn.00012310(1,arg2);
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return 0x8000000000000012;
}


/* fcn.00012c9c @ 0x12c9c */

void fcn.00012c9c(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint in_register_00000014;
    uint64_t *puVar3;
    uint32_t uVar4;
    
    puVar3 = CONCAT44(in_register_00000014,arg2);
    if (*puVar3 < 400) {
        uVar1 = *(arg1 + 0x18);
        uVar4 = *(arg1 + 0x14);
        if (*puVar3 < 0x15) {
            uVar4 = uVar4 & 0xffff07fd | 0x7fd;
            uVar1 = uVar1 & 0xffff0b40 | 0xb40;
        }
        else if (*puVar3 < 0x33) {
            uVar4 = uVar4 & 0xffff0332 | 0x332;
            uVar1 = uVar1 & 0xffff0480 | 0x480;
        }
        else if (*puVar3 < 0x4c) {
            uVar4 = uVar4 & 0xffff02c2 | 0x2c2;
            uVar1 = uVar1 & 0xffff0264 | 0x264;
        }
        else if (*puVar3 < 400) {
            uVar4 = uVar4 & 0xffff0199 | 0x199;
            uVar1 = uVar1 & 0xffff0240 | 0x240;
        }
        uVar2 = *(arg1 + 0x7c);
        if (*puVar3 < 1000) {
            uVar2 = uVar2 & 0xff200010 | 0x200010;
        }
        else if (*puVar3 < 0xd48) {
            uVar2 = uVar2 & 0xff000020 | 0x20;
        }
        else {
            uVar2 = uVar2 & 0xff000010 | 0x10;
        }
        *(arg1 + 0x7c) = uVar2;
        *(arg1 + 0x14) = uVar4;
        *(arg1 + 0x18) = uVar1;
        return;
    }
    if (0xd47 < *puVar3) {
        *puVar3 = 0xd48;
        uVar1 = *(arg1 + 0x24);
        uVar4 = *(arg1 + 0x28);
        if (0xd47 < *puVar3) {
            uVar1 = uVar1 & 0xffff0010 | 0x10;
            uVar4 = uVar4 & 0xffff0022 | 0x22;
        }
        uVar2 = *(arg1 + 0x7c);
        if (*puVar3 < 1000) {
            uVar2 = uVar2 & 0xff200010 | 0x200010;
        }
        else if (*puVar3 < 0xd48) {
            uVar2 = uVar2 & 0xff000020 | 0x20;
        }
        else {
            uVar2 = uVar2 & 0xff000010 | 0x10;
        }
        *(arg1 + 0x7c) = uVar2;
        *(arg1 + 0x24) = uVar1;
        *(arg1 + 0x28) = uVar4;
        return;
    }
    *puVar3 = (-(*puVar3 < 1000) & 0xfffffffffffffda8) + 1000;
    uVar1 = *(arg1 + 0x1c);
    uVar4 = *(arg1 + 0x20);
    if (*puVar3 < 400) {
        if (*puVar3 < 1000) goto code_r0x00012df5;
    }
    else if (*puVar3 < 1000) {
        uVar1 = uVar1 & 0xffff003f | 0x3f;
        uVar4 = uVar4 & 0xffff00b3 | 0xb3;
        goto code_r0x00012df5;
    }
    if (*puVar3 < 0xd48) {
        uVar1 = uVar1 & 0xffff001c | 0x1c;
        uVar4 = uVar4 & 0xffff0041 | 0x41;
    }
code_r0x00012df5:
    uVar2 = *(arg1 + 0x7c);
    if (*puVar3 < 1000) {
        uVar2 = uVar2 & 0xff200010 | 0x200010;
    }
    else if (*puVar3 < 0xd48) {
        uVar2 = uVar2 & 0xff000020 | 0x20;
    }
    else {
        uVar2 = uVar2 & 0xff000010 | 0x10;
    }
    *(arg1 + 0x7c) = uVar2;
    *(arg1 + 0x1c) = uVar1;
    *(arg1 + 0x20) = uVar4;
    return;
}


