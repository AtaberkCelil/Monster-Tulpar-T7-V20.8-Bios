// decompiled by r2ghidra: 1896_SnpDxe.pe32
// functions: 38

/* entry0 @ 0x104e8 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t aiStackX_8 [4];
    
    *0x15078 = *(arg2 + 0x60);
    *0x15080 = *(arg2 + 0x58);
    arg2_00 = 0x14a60;
    *0x15070 = arg2;
    (**(*0x15078 + 0x98))(arg1,0x14a60,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x10364;
    fcn.00010540(arg1,arg2_00);
    return;
}


/* fcn.00010540 @ 0x10540 */

ulong fcn.00010540(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    iVar1 = (**(*0x15080 + 0x48))(0x15020,0x14b10,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        *0x14b40 = arg1;
        *0x14b48 = arg1;
        uVar2 = (**(*0x15078 + 0x148))(0x14b48,0x14ae0,0x14b20,0x14b00,0x14b68,0x14a90,0x14b50,0);
    }
    return uVar2;
}


/* fcn.00014560 @ 0x14560 */

void fcn.00014560(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00014530();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00014530 @ 0x14530 */

ulong fcn.00014530(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x15078 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    puVar2 = arg2 + -1 + arg3;
    if ((arg2 < arg1) && (arg1 <= puVar2)) {
        puVar3 = arg1 + -1 + arg3;
        uVar5 = 1;
        uVar4 = arg3;
    }
    else {
        uVar4 = arg3 & 7;
        puVar2 = arg2;
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


/* fcn.00012a80 @ 0x12a80 */

int64_t fcn.00012a80(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        uVar2 = (**(*0x15078 + 0x18))(8);
        if (*(arg1 + 0x80) == 0) {
            iVar1 = fcn.00012988(arg1 + -0x20);
            if (-1 < iVar1) {
                puVar3 = arg1 + 0x3e0;
                iVar4 = 100;
                do {
                    puVar3[-1] = 0;
                    *puVar3 = 0;
                    puVar3 = puVar3 + 2;
                    iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
                *(arg1 + 0xa4) = 0;
            }
        }
        else {
            iVar1 = -0x7ffffffffffffff9;
            if (*(arg1 + 0x80) - 1U < 2) {
                iVar1 = -0x7fffffffffffffec;
            }
        }
        (**(*0x15078 + 0x20))(uVar2);
    }
    return iVar1;
}


/* fcn.00012608 @ 0x12608 */

int64_t fcn.00012608(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong *puVar1;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    arg1_00 = arg1 + -0x20;
    uVar2 = (**(*0x15078 + 0x18))(8);
    if (*(arg1 + 0x80) == 0) {
        iVar4 = -0x7fffffffffffffed;
    }
    else {
        if (*(arg1 + 0x80) == 1) {
            puVar1 = arg1 + 0x70;
            iVar4 = (**(*0x15078 + 0x50))(0x100,0x10,0x13368,arg1_00,puVar1);
            if (-1 < iVar4) {
                *(arg1 + 0xa4) = 0;
                *(arg1 + 0x9c) = 0;
                fcn.00010280(arg1 + 0xa8,0x200);
                if (arg1 + 0x2a8 != arg1 + 0x2e8) {
                    fcn.000102a0(arg1 + 0x2a8,arg1 + 0x2e8,0x20);
                }
                *(arg1 + 0x32c) = *(arg1 + 0x3a0) + arg3 + arg2;
                if ((*(arg1 + 0xa31) == '\0') || (iVar3 = fcn.00012494(arg1_00,0), iVar3 != 0)) {
                    *(arg1 + 0x30c) = 0;
                    iVar4 = fcn.00012494(arg1_00,1);
                    if (iVar4 < 0) {
                        (**(*0x15078 + 0x70))(*puVar1);
                    }
                    else if (*(arg1 + 0xa30) != '\0') {
                        fcn.00011cbc(arg1_00,0,0);
                    }
                }
                goto code_r0x0001275d;
            }
            *puVar1 = 0;
        }
        iVar4 = -0x7ffffffffffffff9;
    }
code_r0x0001275d:
    (**(*0x15078 + 0x20))(uVar2);
    return iVar4;
}


/* fcn.00012ef8 @ 0x12ef8 */

int64_t fcn.00012ef8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint32_t uVar6;
    uint64_t in_stack_00000028;
    int64_t in_stack_00000030;
    
    cVar1 = arg4;
    uVar6 = arg3;
    if (arg1 == 0) {
        return -0x7ffffffffffffffe;
    }
    arg1_00 = arg1 + -0x20;
    uVar3 = (**(*0x15078 + 0x18))(8);
    if (*(arg1 + 0x80) == 0) {
        iVar5 = -0x7fffffffffffffed;
        goto code_r0x00013029;
    }
    if (*(arg1 + 0x80) != 2) {
        iVar5 = -0x7ffffffffffffff9;
        goto code_r0x00013029;
    }
    uVar2 = ~*(arg1 + 0x98);
    uVar4 = arg2;
    if (((uVar4 & uVar2) == 0) && ((uVar6 & uVar2) == 0)) {
        if (cVar1 == '\0') {
            if ((in_stack_00000028 != 0) && ((*(arg1 + 0xa0) < in_stack_00000028 || (in_stack_00000030 == 0))))
            goto code_r0x00012fa8;
        }
        else {
            in_stack_00000028 = 0;
            uVar6 = uVar6 | *(arg1 + 0x98) & 2;
            in_stack_00000030 = 0;
        }
        if ((((uVar4 == 0) && (uVar6 == 0)) && (cVar1 == '\0')) && (in_stack_00000028 == 0)) {
            iVar5 = 0;
            goto code_r0x00013029;
        }
        if (((arg2 & 2U) == 0) || (in_stack_00000028 != 0)) {
            if ((((uVar4 == 0) && (in_stack_00000028 == 0)) ||
                (iVar5 = fcn.00012b38(arg1_00,arg2 & 0xffffffff,in_stack_00000028,in_stack_00000030), -1 < iVar5))
               && (((uVar6 == 0 && (cVar1 == '\0')) ||
                   (iVar5 = fcn.00012c80(arg1_00,uVar6,CONCAT71(in_stack_00000028 >> 8,cVar1)), -1 < iVar5)))) {
                iVar5 = fcn.00012d60(arg1_00);
            }
            goto code_r0x00013029;
        }
    }
code_r0x00012fa8:
    iVar5 = -0x7ffffffffffffffe;
code_r0x00013029:
    (**(*0x15078 + 0x20))(uVar3);
    return iVar5;
}


/* fcn.00012180 @ 0x12180 */

ulong fcn.00012180(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        uVar2 = (**(*0x15078 + 0x18))(8);
        if (*(arg1 + 0x80) == 0) {
            uVar1 = 0x8000000000000013;
        }
        else if (*(arg1 + 0x80) == 2) {
            uVar1 = fcn.00011fcc(arg1 + -0x20);
            *(arg1 + 0xa4) = 0;
            *(arg1 + 0x9c) = 0;
            *(arg1 + 0x80) = 1;
            fcn.00010280(arg1 + 0xa8,0x200);
            if (arg1 + 0x2a8 != arg1 + 0x2e8) {
                fcn.000102a0(arg1 + 0x2a8,arg1 + 0x2e8,0x20);
            }
            (**(*0x15078 + 0x70))(*(arg1 + 0x70));
        }
        else {
            uVar1 = 0x8000000000000007;
        }
        (**(*0x15078 + 0x20))(uVar2);
    }
    return uVar1;
}


/* fcn.00011a6c @ 0x11a6c */

ulong fcn.00011a6c(int64_t arg1)

{
    ulong uVar1;
    ulong uVar2;
    
    if (arg1 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        uVar2 = (**(*0x15078 + 0x18))(8);
        if (*(arg1 + 0x80) == 0) {
            uVar1 = 0x8000000000000013;
        }
        else if (*(arg1 + 0x80) == 1) {
            uVar1 = fcn.000119e8(arg1 + -0x20);
        }
        else {
            uVar1 = 0x8000000000000007;
        }
        (**(*0x15078 + 0x20))(uVar2);
    }
    return uVar1;
}


/* fcn.00011fcc @ 0x11fcc */

ulong fcn.00011fcc(int64_t arg1)

{
    ulong uVar1;
    
    *(arg1 + 900) = 0;
    *(arg1 + 0x382) = 7;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x388) = 0;
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x392) = 0;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        if (*(arg1 + 0x350) != 0) {
            (**(*(arg1 + 0x378) + 0x60))(*(arg1 + 0x378),(*(arg1 + 0x34c) - 1U >> 0xc) + 1);
        }
        *(arg1 + 0x350) = 0;
        uVar1 = 0;
        *(arg1 + 0x34c) = 0;
    }
    else {
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 18400 named .text
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


/* fcn.00012988 @ 0x12988 */

ulong fcn.00012988(int64_t arg1)

{
    ulong *puVar1;
    ulong uVar2;
    
    puVar1 = *(arg1 + 0x3a8);
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x382) = 1;
    *(arg1 + 900) = 0;
    *(arg1 + 0x388) = 0;
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x392) = 0;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    if (*(arg1 + 0x348) != '\0') {
        *(arg1 + 0x38a) = puVar1;
        *(arg1 + 0x386) = 0x40;
        *puVar1 = 0x134a4;
        puVar1[1] = 0x13464;
        puVar1[3] = 0x134c4;
        puVar1[4] = 0x135d0;
        puVar1[5] = 0x136a4;
        puVar1[6] = 0x13724;
        puVar1[2] = 0;
        puVar1[7] = arg1;
    }
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        *(arg1 + 0xa0) = 1;
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.000119e8 @ 0x119e8 */

ulong fcn.000119e8(int64_t arg1)

{
    ulong uVar1;
    
    *(arg1 + 900) = 0;
    *(arg1 + 0x382) = 2;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x388) = 0;
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x392) = 0;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        *(arg1 + 0xa0) = 0;
        uVar1 = 0;
    }
    else {
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.00012494 @ 0x12494 */

int64_t fcn.00012494(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uStackX_8;
    
    iVar3 = 0;
    puVar1 = *(arg1 + 0x3a8);
    if (*(arg1 + 0x34c) != 0) {
        iVar2 = (**(*(arg1 + 0x378) + 0x58))(*(arg1 + 0x378),0,4,(*(arg1 + 0x34c) - 1U >> 0xc) + 1,&uStackX_8,0);
        if (iVar2 != 0) {
            return iVar2;
        }
        *(arg1 + 0x350) = uStackX_8;
    }
    *puVar1 = *(arg1 + 0x350);
    *(puVar1 + 1) = *(arg1 + 0x34c);
    *(puVar1 + 0xc) = 0;
    *(puVar1 + 0x14) = 0;
    *(puVar1 + 3) = 0;
    *(arg1 + 0x382) = 5;
    *(arg1 + 0x38a) = *(arg1 + 0x3a8);
    *(arg1 + 0x392) = *(arg1 + 0x3b8);
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 900) = arg2;
    *(arg1 + 0x386) = 0xc001a;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (((*(arg1 + 0x39c) & 0xc000) == 0xc000) && (*(arg1 + 0x39a) == 0)) {
        if (arg2 == 0) {
            *(arg1 + 0x32c) = ~*(arg1 + 0x39c) & 1;
        }
        *(arg1 + 0xa0) = 2;
    }
    else {
        if (*(arg1 + 0x350) != 0) {
            (**(*(arg1 + 0x378) + 0x60))(*(arg1 + 0x378),(*(arg1 + 0x34c) - 1U >> 0xc) + 1);
        }
        *(arg1 + 0x350) = 0;
        iVar3 = -0x7ffffffffffffff9;
    }
    return iVar3;
}


/* fcn.0001174c @ 0x1174c */

ulong fcn.0001174c(int64_t arg1)

{
    int64_t arg2;
    ulong uVar1;
    
    arg2 = *(arg1 + 0x3b8);
    *(arg1 + 900) = 0;
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x382) = 10;
    *(arg1 + 0x388) = 0x60;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x392) = arg2;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        if ((*(arg1 + 0xa4) != 0) && (arg1 + 0x2c8 != arg2)) {
            fcn.000102a0(arg1 + 0x2c8,arg2,*(arg1 + 0xa4));
        }
        if ((*(arg1 + 0xa4) != 0) && (arg1 + 0x2e8 != arg2 + 0x20)) {
            fcn.000102a0(arg1 + 0x2e8,arg2 + 0x20,*(arg1 + 0xa4));
        }
        if ((*(arg1 + 0xa4) != 0) && (arg1 + 0x308 != arg2 + 0x40)) {
            fcn.000102a0(arg1 + 0x308,arg2 + 0x40,*(arg1 + 0xa4));
        }
        uVar1 = 0;
    }
    else {
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.000149a8 @ 0x149a8 */

ulong fcn.000149a8(ulong noname_0,ulong noname_1,int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    
    if (*(*0x15070 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (**(*0x15078 + 0x170))(0x200,0x10,0x106e4,arg1,0x14a80,arg2);
    }
    return uVar1;
}


/* fcn.00014634 @ 0x14634 */

ulong fcn.00014634(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    uint64_t uVar2;
    char cVar3;
    ulong uVar4;
    int64_t iVar5;
    char cVar6;
    char *pcVar7;
    char *pcVar8;
    uint64_t uVar9;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.000145a0(arg2,arg1);
                if (iVar5 == 0) {
code_r0x00014739:
                    for (; pcVar8 = *arg3, pcVar8 != NULL; arg3 = arg3 + 0x10) {
code_r0x0001472f:
                        cVar3 = *pcVar8;
                        if (cVar3 != '\0') {
                            uVar9 = 0;
                            if (cVar3 != '\0') {
                                cVar6 = cVar3;
                                do {
                                    if (cVar6 == ';') break;
                                    uVar9 = uVar9 + 1;
                                    cVar6 = pcVar8[uVar9];
                                } while (cVar6 != '\0');
                            }
                            pcVar7 = arg1;
                            pcVar1 = pcVar8;
                            uVar2 = uVar9;
                            if (uVar9 == 0) {
code_r0x00014747:
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            for (; (((cVar3 != '\0' && (*pcVar7 != '\0')) && (*pcVar1 == *pcVar7)) && (1 < uVar2));
                                uVar2 = uVar2 - 1) {
                                cVar3 = pcVar1[1];
                                pcVar7 = pcVar7 + 1;
                                pcVar1 = pcVar1 + 1;
                            }
                            if (*pcVar1 == *pcVar7) goto code_r0x00014747;
                            pcVar8 = pcVar8 + uVar9;
                            if (*pcVar8 != '\0') {
                                cVar3 = *pcVar8;
                                pcVar7 = pcVar8;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar7 = pcVar7 + 1;
                                    cVar3 = *pcVar7;
                                } while (cVar3 != '\0');
                            }
                            goto code_r0x0001472f;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00014739;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.0001377c @ 0x1377c */

void fcn.0001377c(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000137e0(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000137e0 @ 0x137e0 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.000137e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uVar7;
    int64_t iVar8;
    char *pcVar9;
    int64_t iVar10;
    uint64_t uVar11;
    int64_t iVar12;
    int64_t iVar13;
    uint64_t *puVar14;
    char cVar15;
    char *pcVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    uint64_t *puVar19;
    uint64_t uVar20;
    int64_t *piVar21;
    uint8_t *puVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    int64_t iStack_98;
    uint64_t uStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar6 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001383b;
    }
    else {
        uVar6 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001383b:
    uVar18 = 1000000;
    iVar13 = 2;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 1;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar20 = 2;
    }
    uVar11 = uVar20;
    if ((arg3 >> 8 & 1) == 0) {
        uVar5 = fcn.00014a2c(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.00014a00(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        uStack_90 = 0xffff;
    }
    var_78h = iVar13;
    if (uVar6 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * (uVar11 & 0xffffffff);
    }
    if (iVar13 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uVar18 = *arg4;
    uVar6 = iVar4;
    while( true ) {
        uVar11 = 1;
        uStack_a8 = (uVar18 | uVar6) & uStack_90;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar6 = 0;
        iStack_98 = 0;
        cVar3 = '\0';
        uVar5 = arg3 & 0x2140;
        uStack_b8 = 1;
        uVar18 = 1;
        cVar15 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar5;
        if (uStack_a8 == 10) {
            puVar22 = arg4 + var_78h;
            pcVar9 = 0x14ca4;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar22[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
            if (uStack_a8 != 0xd) {
                puVar22 = arg4;
            }
        }
        else {
            uVar18 = uVar11;
            if (uStack_a8 == 0xd) {
code_r0x00013bc5:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x14ca4;
                }
                else {
                    pcVar9 = 0x14ca8;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00013984:
                    while( true ) {
                        puStackX_20 = arg4 + var_78h;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                        if (uStack_a8 < 0x2e) break;
                        if (uStack_a8 == 0x2e) {
                            uVar5 = uVar5 | 0x800;
                            goto code_r0x00013b27;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00013b3e;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00013b27;
                                }
                                goto code_r0x00013b3e;
                            }
                        }
                        uVar6 = 0;
                        uStack_c0 = 0;
                        if (0x2f < uStack_a8) {
                            do {
                                if (0x39 < uStack_a8) break;
                                puStackX_20 = puStackX_20 + var_78h;
                                uVar6 = uStack_a8 + (uVar6 * 5 + -0x18) * 2;
                                if (var_78h == 1) {
                                    iVar4 = 0;
                                }
                                else {
                                    iVar4 = puStackX_20[1] << 8;
                                }
                                uStack_a8 = (*puStackX_20 | iVar4) & uStack_90;
                            } while (0x2f < uStack_a8);
                            uStack_c0 = uVar6;
                        }
                        arg4 = puStackX_20 + -var_78h;
                        uVar6 = uStack_c0;
                        if ((uVar5 & 0x800) == 0) {
                            uVar5 = uVar5 | 0x200;
                            uStack_a0 = uStack_c0;
                            uStackX_18 = uVar5;
                        }
                        else {
                            uVar18 = uStack_c0;
                            uStack_b8 = uStack_c0;
                        }
                    }
                    if (uStack_a8 == 0x2d) {
                        uVar5 = uVar5 | 1;
code_r0x00013b27:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00013984;
                    }
                    if (uStack_a8 != 0) {
                        if (uStack_a8 == 0x20) {
                            uVar5 = uVar5 | 4;
                        }
                        else {
                            if (uStack_a8 == 0x2a) {
                                if ((uVar5 & 0x800) == 0) {
                                    uVar5 = uVar5 | 0x200;
                                    if (puVar14 == NULL) {
                                        uStack_a0 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_a0 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uStackX_18 = uVar5;
                                }
                                else {
                                    if (puVar14 == NULL) {
                                        uStack_b8 = *puVar19;
                                        puVar19 = puVar19 + 1;
                                        in_stack_00000028 = puVar19;
                                    }
                                    else {
                                        uStack_b8 = *puVar14;
                                        puVar14 = puVar14 + 1;
                                        puStack_b0 = puVar14;
                                    }
                                    arg4 = puStackX_20;
                                    uVar18 = uStack_b8;
                                }
                                goto code_r0x00013984;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00013b3e;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00013b27;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00013b3e:
                    puVar22 = puStackX_20;
                    if (uStack_a8 < 0x68) {
                        if (uStack_a8 == 0x67) {
                            if (puVar14 == NULL) {
                                uVar18 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar18 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar18 == 0) {
                                pcVar9 = "<null guid>";
                            }
                            else {
                                fcn.0001450c(&var_68h_2,0x26,0,0x14c38);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00013bc5;
                                if (uStack_a8 == 0x53) goto code_r0x00013dd4;
                                if (uStack_a8 == 0x58) goto code_r0x00013eca;
                                if (uStack_a8 == 0x61) goto code_r0x00013ddd;
                                if (uStack_a8 == 99) {
                                    if (puVar14 == NULL) {
                                        uVar1 = *puVar19;
                                        in_stack_00000028 = puVar19 + 1;
                                    }
                                    else {
                                        uVar1 = *puVar14;
                                        puStack_b0 = puVar14 + 1;
                                    }
                                    var_80h = uVar1;
                                    pcVar9 = &var_80h;
                                    goto code_r0x00013969;
                                }
                                if (uStack_a8 != 100) goto code_r0x00013965;
                                goto code_r0x00013ee1;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x14ca4;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar22[1] << 8;
                            }
                            uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                            if (uStack_a8 != 0xd) {
                                puVar22 = puStackX_20;
                            }
                        }
                        goto code_r0x000140dc;
                    }
                    if (uStack_a8 != 0x70) {
                        if (uStack_a8 == 0x72) {
                            if (puVar14 == NULL) {
                                uVar11 = *puVar19;
                                in_stack_00000028 = puVar19 + 1;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            pcVar9 = &var_68h_2;
                            if (uVar11 < 0) {
                                if ((uVar11 & 0x7fffffffffffffff) - 1 < 0x21) {
                                    pcVar9 = (uVar11 & 0x7fffffffffffffff) * 0x15;
                                    iVar13 = 0x14d3b;
                                    goto code_r0x00013e91;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x00013e91:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x000140dc;
                            }
                            fcn.0001450c(&var_68h_2,0x26,0,0x14c9c);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00013dd4:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00013ddd:
                                if (puVar14 == NULL) {
                                    pcVar9 = *puVar19;
                                    in_stack_00000028 = puVar19 + 1;
                                }
                                else {
                                    puStack_b0 = puVar14 + 1;
                                    pcVar9 = *puVar14;
                                }
                                if (pcVar9 == NULL) {
                                    uVar5 = uVar5 & 0xfffffffffffffbff;
                                    pcVar9 = "<null string>";
                                    uStackX_18 = uVar5;
                                }
                                uVar18 = uVar18 & -((uVar5 & 0x800) != 0);
                                goto code_r0x000140dc;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00013965;
                                    goto code_r0x00013ece;
                                }
                                goto code_r0x00013ed3;
                            }
                            if (puVar14 == NULL) {
                                in_stack_00000028 = puVar19 + 1;
                                uVar11 = *puVar19;
                            }
                            else {
                                uVar11 = *puVar14;
                                puStack_b0 = puVar14 + 1;
                            }
                            if (uVar11 == 0) {
                                pcVar9 = "<null time>";
                                goto code_r0x000140dc;
                            }
                            fcn.0001450c(&var_68h_2,0x26,0,0x14c80);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x000140dc;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x00013eca:
                    uVar5 = uVar5 | 0x20;
code_r0x00013ece:
                    uVar5 = uVar5 | 0x80;
code_r0x00013ed3:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00013ee1:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00013f23;
                        }
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else if (puVar14 == NULL) {
                        uVar6 = *puVar19;
                        in_stack_00000028 = puVar19 + 1;
                    }
                    else {
                        uVar6 = *puVar14;
code_r0x00013f23:
                        puStack_b0 = puVar14 + 1;
                    }
                    cVar3 = (uVar5 & 4) << 3;
                    if ((uVar5 & 2) != 0) {
                        cVar3 = '+';
                    }
                    bVar23 = (uVar5 & 8) != 0;
                    if (uVar5 < '\0') {
                        uVar17 = 0x10;
                        bVar23 = false;
                        if (((uVar5 & 0x10) == 0) && (uVar2 = 0x10, uVar6 < 0)) {
code_r0x00013fab:
                            uVar17 = uVar2;
                            uVar6 = uVar6 & 0xffffffff;
                        }
                    }
                    else {
                        uVar17 = 10;
                        if ((uVar5 & 8) != 0) {
                            uVar5 = uVar5 & 0xffffffffffffffdf;
                            uVar18 = 1;
                        }
                        if ((uVar6 < 0) && (uVar5 >> 0xe == 0)) {
                            cVar3 = '-';
                            uVar6 = -uVar6;
                        }
                        else {
                            uVar2 = 10;
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x00013fab;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEFN"[uVar11 % uVar17];
                        uVar11 = uVar7;
                    } while (uVar7 != 0);
                    uStack_c0 = piVar21 - &var_68h_2;
                    if (uVar6 == 0) {
                        uStack_c0 = uStack_c0 & -(uVar18 != 0);
                    }
                    pcVar9 = &var_68h_2 + uStack_c0;
                    iStack_98 = 3 - uStack_c0 % 3;
                    if (uStack_c0 % 3 == 0) {
                        iStack_98 = 0;
                    }
                    if ((bVar23) && (uStack_c0 != 0)) {
                        uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
                    }
                    if (cVar3 != '\0') {
                        uStack_c0 = uStack_c0 + 1;
                        uVar18 = uVar18 + 1;
                    }
                    uVar5 = uVar5 | 0x1000;
                    cVar15 = '\x01';
                    uVar6 = uStack_c0;
                    uStackX_18 = uVar5;
                    if ((uVar5 & 0xa21) == 0x220) {
                        uVar18 = uStack_a0;
                    }
                }
                else {
code_r0x00013965:
                    pcVar9 = &uStack_a8;
code_r0x00013969:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x000140dc:
        puStackX_20 = puVar22;
        uVar17 = uVar5;
        iVar13 = ((uVar5 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar5 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar5 >> 0xc & 1) == 0) {
            uVar6 = 0;
            pcVar16 = pcVar9 + 1;
            while ((((pcVar16[-1] != '\0' || (((uVar5 & 0x400) != 0 && (*pcVar16 != '\0')))) &&
                    ((uVar6 < uVar18 || ((uVar5 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar16 << 8 | pcVar16[-1])) != 0))) {
                uVar6 = uVar6 + 1;
                pcVar16 = pcVar16 + iVar13;
            }
            uStack_c0 = uVar6;
        }
        else {
            iVar13 = -iVar13;
        }
        if (uVar18 < uVar6) {
            uVar18 = uVar6;
        }
        uVar11 = uVar17 & 0x201;
        var_40h = uVar11;
        pcVar16 = pcStack_d8;
        if (uVar11 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar20;
            if (((uVar5 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000137ac(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000137ac(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar7, (uVar5 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar7 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar7;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar20, (uVar5 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar10 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar20 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar20;
                    iVar10 = iVar10 + 1;
                } while (iVar10 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000137ac(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar5;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar6 = cVar3 != '\0';
            iVar10 = iStack_98;
            do {
                if ((*pcVar9 == '\0') && ((iVar13 < 2 || (*(pcVar9 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar7;
                uVar11 = *pcVar9 & _cStack0000000000000030;
                if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar12 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar11;
                        if (uVar7 != 1) {
                            *(arg1 + 1) = uVar11 >> 8;
                        }
                        arg1 = arg1 + uVar7;
                        iVar12 = iVar12 + 1;
                    } while (iVar12 < 1);
                }
                pcVar9 = pcVar9 + iVar13;
                uVar11 = uVar6 + 1;
                if ((bVar23) && (iVar10 = iVar10 + 1, iVar10 == 3)) {
                    iVar12 = 0;
                    uVar11 = uVar6 + 2;
                    if (uStack_c0 <= uVar11) break;
                    uStack_d0 = uStack_d0 + uVar7;
                    iVar10 = iVar12;
                    if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar8 = 0;
                        do {
                            iVar10 = iVar12;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar7 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar7;
                            iVar8 = iVar8 + 1;
                            iVar10 = 0;
                        } while (iVar8 < 1);
                    }
                }
                uVar6 = uVar11;
            } while (uVar11 < uStack_c0);
            arg3 = uStackX_18;
            uVar11 = var_40h;
        }
        if (uVar11 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar18) * uVar7;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000137ac(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        arg4 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uVar18 = iVar4;
        uVar6 = *arg4;
    }
    iVar13 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar20;
    }
    pcVar9 = arg1;
    do {
        if (pcStack_d8 + uVar20 <= pcVar9) break;
        *pcVar9 = '\0';
        if (uVar20 != 1) {
            pcVar9[1] = '\0';
        }
        pcVar9 = pcVar9 + uVar20;
        iVar13 = iVar13 + 1;
    } while (iVar13 < 1);
    return (arg1 - _var_70h) / uVar20;
}


/* fcn.0001476c @ 0x1476c */

ulong fcn.0001476c(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    char *pcVar6;
    int64_t iVar7;
    char *pcVar8;
    char *pcVar9;
    uint64_t uVar10;
    uint64_t uVar11;
    uint64_t uVar12;
    uint in_R8;
    int16_t *arg2_00;
    uint32_t *puVar13;
    uint64_t uVar14;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    uVar11 = 0;
    if (arg2_00 == NULL) {
code_r0x0001498b:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x0001498b;
            if (arg4 == '\0') {
                iVar7 = fcn.000145a0(arg2,arg1);
                if (iVar7 == 0) {
code_r0x000147ed:
                    uVar12 = uVar11;
                    puVar5 = *0x15068;
                    if (*0x15068 != NULL) {
                        for (; pcVar9 = *puVar5, pcVar9 != NULL; puVar5 = puVar5 + 2) {
code_r0x00014893:
                            cVar3 = *pcVar9;
                            if (cVar3 != '\0') {
                                uVar10 = uVar11;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    uVar10 = uVar10 + 1;
                                    cVar3 = pcVar9[uVar10];
                                }
                                if (uVar10 == 0) {
                                    return 0x8000000000000014;
                                }
                                cVar3 = *arg1;
                                pcVar8 = arg1;
                                pcVar6 = pcVar9;
                                for (uVar14 = uVar10;
                                    (((cVar3 != '\0' && (*pcVar6 != '\0')) && (*pcVar8 == *pcVar6)) && (1 < uVar14));
                                    uVar14 = uVar14 - 1) {
                                    pcVar8 = pcVar8 + 1;
                                    pcVar6 = pcVar6 + 1;
                                    cVar3 = *pcVar8;
                                }
                                arg2 = *pcVar8 - *pcVar6;
                                if (*pcVar8 - *pcVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar9 = pcVar9 + uVar10;
                                cVar3 = *pcVar9;
                                if (cVar3 == '\0') goto code_r0x00014899;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar9 = pcVar9 + 1;
                                    cVar3 = *pcVar9;
                                } while (cVar3 != '\0');
                                goto code_r0x00014893;
                            }
code_r0x00014899:
                            uVar12 = uVar12 + 1;
                        }
                    }
                    puVar5 = fcn.00014530();
                    if (puVar5 != NULL) {
                        if (((*0x15068 != NULL) && (uVar12 << 4 != 0)) && (puVar5 != *0x15068)) {
                            arg2 = puVar5;
                            fcn.000102a0(puVar5,*0x15068,uVar12 << 4);
                        }
                        cVar3 = *arg1;
                        uVar10 = uVar11;
                        while (cVar3 != '\0') {
                            uVar10 = uVar10 + 1;
                            cVar3 = *(uVar10 + arg1);
                        }
                        iVar7 = fcn.00014560(arg2,uVar10 + 1,arg1);
                        puVar5[uVar12 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                uVar11 = uVar11 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar7 = fcn.00014560(arg2,uVar11 * 2 + 2,arg2_00);
                            puVar5[uVar12 * 2 + 1] = iVar7;
                            if (iVar7 != 0) {
                                puVar5[uVar12 * 2 + 2] = 0;
                                puVar5[uVar12 * 2 + 3] = 0;
                                if (*0x15068 != NULL) {
                                    (**(*0x15078 + 0x48))();
                                }
                                *0x15068 = puVar5;
                                return 0;
                            }
                            (**(*0x15078 + 0x48))(puVar5[uVar12 * 2]);
                        }
                        (**(*0x15078 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar13 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar13 & 0xffffff)) goto code_r0x000147ed;
                    puVar13 = puVar13 + 3;
                } while (*puVar13 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.00011188 @ 0x11188 */

int64_t fcn.00011188(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    int64_t *piVar6;
    uint64_t in_R9;
    uchar auStack_a8 [160];
    
    if (arg1 == 0) {
        iVar2 = -0x7ffffffffffffffe;
    }
    else {
        iVar3 = fcn.0001377c(auStack_a8,0xa0,0x14bf0,in_R9);
        iVar2 = *(arg1 + 0x78);
        uVar5 = 0;
        if (*(iVar2 + 4) != 0) {
            do {
                in_R9 = *(iVar2 + 0x228 + uVar5);
                iVar4 = fcn.0001377c(auStack_a8 + iVar3 * 2,iVar3 * -2 + 0xa0,85000,in_R9);
                iVar2 = *(arg1 + 0x78);
                iVar3 = iVar3 + iVar4;
                uVar5 = uVar5 + 1;
            } while (uVar5 < *(iVar2 + 4));
        }
        fcn.0001377c(auStack_a8 + (iVar3 + -1) * 2,(iVar3 + -1) * -2 + 0xa0,0x14c14,in_R9);
        piVar1 = *0x15068;
        if (*0x15068 != NULL) {
            iVar2 = 0;
            if (**0x15068 != 0) {
                piVar6 = *0x15068;
                do {
                    (**(*0x15078 + 0x48))(*piVar6);
                    if (piVar6[1] != 0) {
                        (**(*0x15078 + 0x48))();
                    }
                    iVar2 = iVar2 + 1;
                    piVar6 = piVar1 + iVar2 * 2;
                } while (*piVar6 != 0);
            }
            (**(*0x15078 + 0x48))(piVar1);
            *0x15068 = NULL;
        }
        iVar2 = fcn.0001476c(0x14ba0,*0x14b78,auStack_a8,CONCAT71(in_R9 >> 8,1));
        if (-1 < iVar2) {
            iVar2 = fcn.0001476c(0x14ba4,*0x14b60,auStack_a8,0);
        }
    }
    return iVar2;
}


/* fcn.00011400 @ 0x11400 */

uint64_t fcn.00011400(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t arg2_00;
    uint64_t uVar2;
    int64_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint16_t *in_stack_00000038;
    
    uVar2 = *arg3;
    piVar1 = *(arg1 + 0x3a8);
    arg2_00 = *(arg1 + 0x3b8);
    *piVar1 = arg2;
    *(piVar1 + 1) = *arg3;
    *(piVar1 + 0xc) = 0;
    *(arg1 + 0x382) = 0x11;
    *(arg1 + 0x388) = 0x50;
    *(arg1 + 900) = 0x100000;
    *(arg1 + 0x38a) = piVar1;
    *(arg1 + 0x392) = arg2_00;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        *arg3 = *(arg2_00 + 0x40);
        if (arg4 != 0) {
            *arg4 = *(arg2_00 + 0x46);
        }
        if (((in_stack_00000028 != 0) && (*(arg1 + 0xa4) != 0)) && (in_stack_00000028 != arg2_00)) {
            fcn.000102a0(in_stack_00000028,arg2_00,*(arg1 + 0xa4));
        }
        if (in_stack_00000030 != 0) {
            if ((*(arg1 + 0xa4) != 0) && (in_stack_00000030 != arg2_00 + 0x20)) {
                fcn.000102a0(in_stack_00000030,arg2_00 + 0x20,*(arg1 + 0xa4));
            }
        }
        if (in_stack_00000038 != NULL) {
            *in_stack_00000038 = *(arg2_00 + 0x44) << 8 | *(arg2_00 + 0x45);
        }
        if ((*(arg1 + 0x32b) != '\0') && (*(arg1 + 0x32c) == '\0')) {
            *(arg1 + 0x32c) = 1;
        }
        uVar2 = -(uVar2 < *arg3) & 0x8000000000000005;
    }
    else {
        uVar2 = (*(arg1 + 0x39a) != 0x13) + 0x8000000000000006;
    }
    return uVar2;
}


/* fcn.00011840 @ 0x11840 */

ulong fcn.00011840(int64_t arg1,uint32_t arg2)

{
    int64_t arg1_00;
    ulong uVar1;
    uint in_register_00000014;
    
    arg1_00 = *(arg1 + 0x3a8);
    uVar1 = *(arg1 + 0x3b8);
    *(arg1 + 0x382) = 10;
    if (CONCAT44(in_register_00000014,arg2) == 0) {
        *(arg1 + 900) = 1;
        *(arg1 + 0x38a) = 0;
    }
    else {
        *(arg1 + 900) = 0;
        if ((*(arg1 + 0xa4) != 0) && (arg1_00 != CONCAT44(in_register_00000014,arg2))) {
            fcn.000102a0(arg1_00,CONCAT44(in_register_00000014,arg2),*(arg1 + 0xa4));
        }
        *(arg1 + 0x38a) = arg1_00;
        *(arg1 + 0x386) = 0x20;
    }
    *(arg1 + 0x392) = uVar1;
    *(arg1 + 0x388) = 0x60;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))(arg1 + 0x382);
    if (*(arg1 + 0x39a) == 0) {
        fcn.0001174c(arg1);
        uVar1 = 0;
    }
    else {
        uVar1 = 0x8000000000000007;
    }
    return uVar1;
}


/* fcn.00011aec @ 0x11aec */

ulong fcn.00011aec(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int64_t arg1_00;
    int64_t arg2_00;
    ulong uVar2;
    
    arg1_00 = *(arg1 + 0x3a8);
    arg2_00 = *(arg1 + 0x3b8);
    *(arg1 + 0x382) = 0xc;
    *(arg1 + 900) = arg2 != '\0';
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x386) = 0x200010;
    *(arg1 + 0x38a) = arg1_00;
    *(arg1 + 0x392) = arg2_00;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    if (arg1_00 != arg3) {
        fcn.000102a0(arg1_00,arg3,0x10);
    }
    (**(arg1 + 0x340))(arg1 + 0x382);
    iVar1 = *(arg1 + 0x39a);
    if (iVar1 == 0) {
        if (arg4 != arg2_00) {
            fcn.000102a0(arg4,arg2_00,0x20);
        }
        uVar2 = 0;
    }
    else if (iVar1 == 2) {
        uVar2 = 0x8000000000000002;
    }
    else {
        uVar2 = 0x8000000000000003;
        if (iVar1 != 0xc) {
            uVar2 = 0x8000000000000007;
        }
    }
    return uVar2;
}


/* fcn.00011cbc @ 0x11cbc */

ulong fcn.00011cbc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t arg1_00;
    uint32_t uVar3;
    int64_t *piVar4;
    
    piVar4 = *(arg1 + 0x3b8);
    uVar3 = 0;
    *(arg1 + 0x382) = 0xe;
    *(arg1 + 900) = 0;
    if (arg3 != '\0') {
        *(arg1 + 900) = 2;
        fcn.00010280(piVar4 + 1,0x100);
    }
    if (arg2 != 0) {
        *(arg1 + 900) = *(arg1 + 900) | 1;
    }
    if (*(arg1 + 0xa50) != '\0') {
        *(arg1 + 900) = *(arg1 + 900) | 4;
    }
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x386) = 0x1080000;
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x392) = piVar4;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))(arg1 + 0x382);
    if (*(arg1 + 0x39a) == 0) {
        if (arg2 != 0) {
            uVar1 = *(arg1 + 0x39c);
            *arg2 = (uVar1 & 1) != 0;
            if ((uVar1 & 2) != 0) {
                *arg2 = *arg2 | 2;
            }
            if ((uVar1 & 4) != 0) {
                *arg2 = *arg2 | 4;
            }
            if ((uVar1 & 8) != 0) {
                *arg2 = *arg2 | 4;
            }
        }
        if ((arg3 != '\0') && ((*(arg1 + 0x39c) & 0x20) == 0)) {
            do {
                piVar4 = piVar4 + 1;
                if (*piVar4 != 0) {
                    if (*(arg1 + 0xa64) == *(arg1 + 0xa60)) {
                        if ((0xffff < *(arg1 + 0xa60) + 0x20U) || (arg1_00 = fcn.00014530(), arg1_00 == 0))
                        goto code_r0x00011d92;
                        if ((*(arg1 + 0xa64) != 0) && (arg1_00 != *(arg1 + 0xa58))) {
                            fcn.000102a0(arg1_00,*(arg1 + 0xa58),*(arg1 + 0xa64) << 3);
                        }
                        (**(*0x15078 + 0x48))(*(arg1 + 0xa58));
                        *(arg1 + 0xa60) = *(arg1 + 0xa60) + 0x20;
                        *(arg1 + 0xa58) = arg1_00;
                    }
                    *(*(arg1 + 0xa58) + *(arg1 + 0xa64) * 8) = *piVar4;
                    *(arg1 + 0xa64) = *(arg1 + 0xa64) + 1;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x20);
        }
        if (*(arg1 + 0xa50) != '\0') {
            *(*(arg1 + 0x98) + 0x28c) = ~(*(arg1 + 0x39c) >> 6) & 1;
        }
        uVar2 = 0;
    }
    else {
code_r0x00011d92:
        uVar2 = 0x8000000000000007;
    }
    return uVar2;
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


/* fcn.00012788 @ 0x12788 */

ulong fcn.00012788(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = *(arg1 + 0x3b8);
    *(arg1 + 900) = 0;
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x382) = 0xd;
    *(arg1 + 0x388) = 0x200;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x392) = iVar1;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        iVar1 = iVar1 + arg2;
        if ((arg3 != 0) && (arg4 != iVar1)) {
            fcn.000102a0(arg4,iVar1,arg3);
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000003;
        if (*(arg1 + 0x39a) != 0xc) {
            uVar2 = 0x8000000000000007;
        }
    }
    return uVar2;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00012b38 @ 0x12b38 */

ulong fcn.00012b38(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t arg1_00;
    ulong uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint16_t uVar3;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    *(iVar2 + 0x388) = 0;
    *(iVar2 + 0x382) = 9;
    *(iVar2 + 900) = 0x8000;
    *(iVar2 + 0x39e) = *(iVar2 + 0x34a);
    *(iVar2 + 0x38a) = 0;
    *(iVar2 + 0x392) = 0;
    *(iVar2 + 0x39a) = 0;
    *(iVar2 + 0x3a0) = 0;
    if ((arg2 & 1U) != 0) {
        *(iVar2 + 900) = 0x8001;
    }
    if ((arg2 & 4U) != 0) {
        *(iVar2 + 900) = *(iVar2 + 900) | 2;
    }
    if ((arg2 & 8U) != 0) {
        *(iVar2 + 900) = *(iVar2 + 900) | 8;
    }
    if ((arg2 & 0x10U) != 0) {
        *(iVar2 + 900) = *(iVar2 + 900) | 0x10;
    }
    if ((arg2 & 2U) != 0) {
        *(iVar2 + 900) = *(iVar2 + 900) | 4;
    }
    if (arg3 != 0) {
        uVar3 = arg3 << 5;
        *(iVar2 + 0x386) = uVar3;
        arg1_00 = *(iVar2 + 0x3a8);
        *(iVar2 + 0x38a) = arg1_00;
        if ((uVar3 != 0) && (arg1_00 != arg4)) {
            fcn.000102a0(arg1_00,arg4,uVar3);
        }
    }
    (**(iVar2 + 0x340))(iVar2 + 0x382);
    uVar3 = *(iVar2 + 0x39a);
    if (uVar3 == 0) {
        return 0;
    }
    if (uVar3 == 0) {
code_r0x00012c44:
        uVar1 = 0x8000000000000007;
    }
    else {
        if (2 < uVar3) {
            if (uVar3 == 0xc) {
                return 0x8000000000000003;
            }
            if (uVar3 != 0xe) goto code_r0x00012c44;
        }
        uVar1 = 0x8000000000000002;
    }
    return uVar1;
}


/* fcn.00012c80 @ 0x12c80 */

uint64_t fcn.00012c80(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    
    *(arg1 + 0x386) = 0;
    *(arg1 + 0x382) = 9;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x38a) = 0;
    *(arg1 + 0x392) = 0;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    uVar1 = -(arg2 != 0) & 0x4000;
    *(arg1 + 900) = uVar1;
    if (arg3 != '\0') {
        *(arg1 + 900) = uVar1 | 0x2000;
    }
    if ((arg2 & 1U) != 0) {
        *(arg1 + 900) = *(arg1 + 900) | 1;
    }
    if ((arg2 & 4U) != 0) {
        *(arg1 + 900) = *(arg1 + 900) | 2;
    }
    if ((arg2 & 8U) != 0) {
        *(arg1 + 900) = *(arg1 + 900) | 8;
    }
    if ((arg2 & 0x10U) != 0) {
        *(arg1 + 900) = *(arg1 + 900) | 0x10;
    }
    if ((arg2 & 2U) != 0) {
        *(arg1 + 900) = *(arg1 + 900) | 4;
    }
    (**(arg1 + 0x340))(arg1 + 0x382);
    return -(*(arg1 + 0x39a) != 0) & 0x8000000000000007;
}


/* fcn.00012d60 @ 0x12d60 */

ulong fcn.00012d60(int64_t arg1)

{
    uint16_t uVar1;
    ulong uVar2;
    int64_t iVar3;
    uchar *arg1_00;
    uchar auStack_28 [32];
    
    *(arg1 + 900) = 0;
    *(arg1 + 0x382) = 9;
    uVar1 = *(arg1 + 0xc0) << 5;
    *(arg1 + 0x388) = uVar1;
    *(arg1 + 0x38a) = 0;
    if ((*(arg1 + 0xc0) & 0x7ff) == 0) {
        *(arg1 + 0x392) = 0;
    }
    else {
        *(arg1 + 0x392) = *(arg1 + 0x3b8);
        if (uVar1 != 0) {
            fcn.00010280(*(arg1 + 0x3b8),uVar1);
        }
    }
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))(arg1 + 0x382);
    if (*(arg1 + 0x39a) == 0) {
        uVar1 = *(arg1 + 0x39c);
        *(arg1 + 0xbc) = (uVar1 & 1) != 0;
        if ((uVar1 & 2) != 0) {
            *(arg1 + 0xbc) = *(arg1 + 0xbc) | 4;
        }
        if ((uVar1 & 8) != 0) {
            *(arg1 + 0xbc) = *(arg1 + 0xbc) | 8;
        }
        if ((uVar1 & 0x10) != 0) {
            *(arg1 + 0xbc) = *(arg1 + 0xbc) | 0x10;
        }
        if ((uVar1 & 4) != 0) {
            *(arg1 + 0xbc) = *(arg1 + 0xbc) | 2;
        }
        if ((*(arg1 + 0x388) != 0) && (arg1 + 200 != *(arg1 + 0x3b8))) {
            fcn.000102a0(arg1 + 200,*(arg1 + 0x3b8),*(arg1 + 0x388));
        }
        fcn.000102e0(auStack_28,0x20,0);
        *(arg1 + 0xc4) = 0;
        if (*(arg1 + 0xc0) != 0) {
            do {
                arg1_00 = arg1 + 200 + *(arg1 + 0xc4) * 0x20;
                if ((arg1_00 == auStack_28) || (iVar3 = fcn.00010300(arg1_00,auStack_28,0x20), iVar3 == 0)) break;
                *(arg1 + 0xc4) = *(arg1 + 0xc4) + 1;
            } while (*(arg1 + 0xc4) < *(arg1 + 0xc0));
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000000000007;
    }
    return uVar2;
}


/* fcn.00013054 @ 0x13054 */

ulong fcn.00013054(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    int16_t iVar2;
    int64_t arg1_00;
    ulong uVar3;
    uint in_stack_00000028;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    int16_t *in_stack_00000040;
    
    arg1_00 = *(arg1 + 0x3a8);
    if (in_stack_00000038 == 0) {
        in_stack_00000038 = arg1 + 0x2c8;
    }
    if ((*(arg1 + 0xa4) != 0) && (arg1_00 != in_stack_00000038)) {
        fcn.000102a0(arg1_00,in_stack_00000038,*(arg1 + 0xa4));
    }
    if ((*(arg1 + 0xa4) != 0) && (arg1_00 + 0x20 != in_stack_00000030)) {
        fcn.000102a0(arg1_00 + 0x20,in_stack_00000030,*(arg1 + 0xa4));
    }
    iVar2 = *in_stack_00000040;
    uVar1 = *(in_stack_00000040 + 1);
    *(arg1_00 + 0x40) = in_stack_00000028;
    *(arg1_00 + 0x46) = arg3;
    *(arg1_00 + 0x48) = 2;
    *(arg1_00 + 0x44) = uVar1 | iVar2 << 8;
    *(arg1_00 + 100) = in_stack_00000028;
    *(arg1_00 + 0x4c) = arg2;
    *(arg1_00 + 0x54) = arg3;
    *(arg1_00 + 0x5c) = arg4;
    *(arg1_00 + 0x68) = 0;
    *(arg1_00 + 0x58) = 0;
    *(arg1 + 0x382) = 0xf;
    *(arg1 + 0x39e) = *(arg1 + 0x34a);
    *(arg1 + 900) = 0x14c0001;
    *(arg1 + 0x388) = 0;
    *(arg1 + 0x392) = 0;
    *(arg1 + 0x38a) = arg1_00;
    *(arg1 + 0x39a) = 0;
    *(arg1 + 0x3a0) = 0;
    (**(arg1 + 0x340))();
    if (*(arg1 + 0x39a) == 0) {
        uVar3 = 0;
    }
    else {
        uVar3 = 0x8000000000000002;
        if (*(arg1 + 0x39a) != 0xe) {
            uVar3 = 0x8000000000000007;
        }
    }
    return uVar3;
}


/* fcn.00014a00 @ 0x14a00 */

uint64_t fcn.00014a00(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (999999 < uVar1) {
                return 0xf4241;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.00014a2c @ 0x14a2c */

uint64_t fcn.00014a2c(uint32_t arg1)

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


/* fcn.0001450c @ 0x1450c */

void fcn.0001450c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.000137e0(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000137ac @ 0x137ac */

uchar * fcn.000137ac(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.000145a0 @ 0x145a0 */

ulong fcn.000145a0(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00014600:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00014600;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


