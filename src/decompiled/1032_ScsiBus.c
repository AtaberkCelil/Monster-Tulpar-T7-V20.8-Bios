// decompiled by r2ghidra: 1032_ScsiBus.pe32
// functions: 18

/* entry0 @ 0x10334 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11d28 = *(arg2 + 0x60);
    *0x11c60 = arg1;
    *0x11c68 = arg1;
    *0x11d20 = arg2;
    (**(*0x11d28 + 0x148))(0x11c68,0x11c00,0x11c40,0x11c10,0x11c70,0x11bd0,0x11c88,0);
    return;
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


/* fcn.00011a18 @ 0x11a18 */

ulong fcn.00011a18(ulong noname_0,int64_t arg1,int64_t arg2)

{
    ushort **arg3;
    uint64_t uVar1;
    ulong uVar2;
    ushort *arg1_00;
    ushort **noname_2;
    ushort *puStackX_20;
    ushort auStack_218 [264];
    
    noname_2 = arg2;
    arg3 = fcn.000116cc(arg2);
    if (arg3 < 0x1ed) {
        puStackX_20 = auStack_218;
code_r0x00011add:
        *puStackX_20 = 0x14;
        puStackX_20[1] = arg3;
        *(puStackX_20 + 2) = *0x11ba0;
        *(puStackX_20 + 6) = *0x11ba8;
        arg1_00 = puStackX_20;
        if (((arg2 != 0) && (arg1_00 = puStackX_20 + 10, arg3 != NULL)) && (arg1_00 != arg2)) {
            section..text(arg1_00,arg2,arg3);
            noname_2 = arg3;
        }
        uVar2 = fcn.0001197c(arg1_00,arg1 & 0xffffffff,noname_2,0x11c30);
        if (puStackX_20 != auStack_218) {
            (**(*0x11d28 + 0x48))();
        }
    }
    else {
        if (((*0x11d28 == 0) || (*(*0x11d28 + 0x40) == 0)) || (*(*0x11d28 + 0x48) == 0)) {
            return 0x8000000000000003;
        }
        uVar1 = (**(*0x11d28 + 0x18))(0x1f);
        (**(*0x11d28 + 0x20))(uVar1);
        if (uVar1 < 0x11) {
            puStackX_20 = NULL;
            noname_2 = &puStackX_20;
            (**(*0x11d28 + 0x40))(4,arg3 + 0x14);
            if (puStackX_20 != NULL) goto code_r0x00011add;
        }
        uVar2 = 0x8000000000000009;
    }
    return uVar2;
}


/* fcn.00011604 @ 0x11604 */

void fcn.00011604(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000115d4(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.000115d4 @ 0x115d4 */

ulong fcn.000115d4(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11d28 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

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


/* fcn.00010ea8 @ 0x10ea8 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00010ea8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,uint32_t arg_50h)

{
    uint32_t uVar1;
    int64_t *piVar2;
    char cVar3;
    int64_t iVar4;
    char *pcVar5;
    uint *arg1_00;
    ulong uVar6;
    int64_t iVar7;
    int64_t in_stack_00000028;
    uint uVar8;
    int64_t iStack_38;
    char *pcStack_30;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    iVar7 = in_stack_00000028;
    arg1_00 = NULL;
    pcStack_30 = NULL;
    iStack_38 = 0;
    if (*(in_stack_00000028 + 0x10) == '\0') {
        iVar4 = (**(*(in_stack_00000028 + 0x18) + 0x18))(*(in_stack_00000028 + 0x18),*arg3,arg4,&iStack_38);
    }
    else {
        iVar4 = (**(*(in_stack_00000028 + 0x20) + 0x18))(*(in_stack_00000028 + 0x20),arg3);
    }
    if (iVar4 < 0) {
        return iVar4;
    }
    pcVar5 = fcn.0001180c(*(iVar7 + 0x28),iStack_38);
    if (pcVar5 != NULL) {
        in_stack_00000028 = 0;
        pcStack_30 = pcVar5;
        iVar4 = (**(*0x11d28 + 0xb8))(0x11be0,&pcStack_30,&stack0x00000028);
        if ((((-1 < iVar4) && (in_stack_00000028 != 0)) && (*pcStack_30 == '\x7f')) && (pcStack_30[1] == -1)) {
            iVar4 = -0x7fffffffffffffec;
            goto code_r0x00011081;
        }
        arg1_00 = fcn.00011604(0x88);
        if (arg1_00 != NULL) {
            *arg1_00 = 0x6f696373;
            *(arg1_00 + 0x18) = iVar7;
            if (arg1_00 + 0x1a != arg3) {
                section..text(arg1_00 + 0x1a,arg3,0x10);
            }
            *(arg1_00 + 0x1e) = arg4;
            if (*(iVar7 + 0x10) == '\0') {
                piVar2 = *(iVar7 + 0x18);
                *(arg1_00 + 0x14) = piVar2;
                *(arg1_00 + 0x12) = 0;
                uVar1 = *(*piVar2 + 0x18);
            }
            else {
                piVar2 = *(iVar7 + 0x20);
                *(arg1_00 + 0x16) = piVar2;
                *(arg1_00 + 0x12) = 1;
                uVar1 = *(*piVar2 + 8);
            }
            arg1_00[0xe] = uVar1;
            *(arg1_00 + 4) = 0x10b04;
            *(arg1_00 + 6) = 0x10b1c;
            *(arg1_00 + 8) = 0x10b70;
            *(arg1_00 + 10) = 0x10ba8;
            *(arg1_00 + 0xc) = 0x10c1c;
            fcn.00011a18(uVar1,0x2070004,*(iVar7 + 0x28));
            cVar3 = fcn.0001111c(arg1_00);
            iVar4 = *0x11d28;
            if (cVar3 != '\0') {
                uVar8 = 0;
                *(arg1_00 + 0x10) = pcVar5;
                iVar4 = (**(iVar4 + 0x148))(arg1_00 + 2,0x11be0,pcVar5,0x11c20,arg1_00 + 4,0);
                if (-1 < iVar4) {
                    if (*(iVar7 + 0x10) == '\0') {
                        iVar7 = iVar7 + 0x18;
                        uVar6 = 0x11bf0;
                    }
                    else {
                        iVar7 = iVar7 + 0x20;
                        uVar6 = 0x11bc0;
                    }
                    (**(*0x11d28 + 0x118))(arg2,uVar6,iVar7,*(arg1 + 0x28),*(arg1_00 + 2),CONCAT44(uVar8,8));
                    return 0;
                }
                goto code_r0x00011081;
            }
        }
    }
    iVar4 = -0x7ffffffffffffff7;
code_r0x00011081:
    (**(*0x11d28 + 0x48))(iStack_38);
    if (pcVar5 != NULL) {
        (**(*0x11d28 + 0x48))(pcVar5);
    }
    if (arg1_00 != NULL) {
        (**(*0x11d28 + 0x48))(arg1_00);
    }
    return iVar4;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 6432 named .text
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


/* fcn.000112c8 @ 0x112c8 */

ulong fcn.000112c8(uint32_t arg1,uint32_t arg2)

{
    uint in_register_0000000c;
    uint in_register_00000014;
    
    *CONCAT44(in_register_00000014,arg2) = *CONCAT44(in_register_0000000c,arg1);
    *(CONCAT44(in_register_00000014,arg2) + 0x20) = *(CONCAT44(in_register_0000000c,arg1) + 0x18);
    *(CONCAT44(in_register_00000014,arg2) + 0x30) = *(CONCAT44(in_register_0000000c,arg1) + 0x24);
    *(CONCAT44(in_register_00000014,arg2) + 0x31) = *(CONCAT44(in_register_0000000c,arg1) + 0x25);
    *(CONCAT44(in_register_00000014,arg2) + 0x32) = *(CONCAT44(in_register_0000000c,arg1) + 0x26);
    *(CONCAT44(in_register_00000014,arg2) + 0x33) = *(CONCAT44(in_register_0000000c,arg1) + 0x27);
    *(CONCAT44(in_register_00000014,arg2) + 0x18) = *(CONCAT44(in_register_0000000c,arg1) + 0x10);
    *(CONCAT44(in_register_00000014,arg2) + 0x34) = *(CONCAT44(in_register_0000000c,arg1) + 0x28);
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x25) == '\0') {
        *(CONCAT44(in_register_00000014,arg2) + 8) = *(CONCAT44(in_register_0000000c,arg1) + 8);
        *(CONCAT44(in_register_00000014,arg2) + 0x28) = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
    }
    else if (*(CONCAT44(in_register_00000014,arg2) + 0x31) == '\x01') {
        *(CONCAT44(in_register_00000014,arg2) + 0x10) = *(CONCAT44(in_register_0000000c,arg1) + 8);
        *(CONCAT44(in_register_00000014,arg2) + 0x2c) = *(CONCAT44(in_register_0000000c,arg1) + 0x20);
    }
    return 0;
}


/* fcn.0001180c @ 0x1180c */

ulong fcn.0001180c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x11cf0;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.000116cc(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00011630(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.000115d4(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x11cf0) {
                section..text(iVar4,0x11cf0,4);
            }
            uVar2 = fcn.0001171c(arg1,iVar3);
            (**(*0x11d28 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.0001111c @ 0x1111c */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_28h

uchar fcn.0001111c(int64_t arg1)

{
    uint32_t uVar1;
    uint8_t *arg1_00;
    uint8_t *arg1_01;
    int64_t iVar2;
    uchar uVar4;
    uchar uVar3;
    uint32_t uVar5;
    uint8_t uVar6;
    uchar uStackX_8;
    uchar auStackX_10 [4];
    uchar uStackX_14;
    int8_t var_40h;
    int64_t var_48h;
    ulong uStack_78;
    uint8_t *puStack_70;
    uint8_t *puStack_60;
    uchar *puStack_58;
    uint32_t uStack_50;
    int64_t var_40h_2;
    int64_t var_38h;
    int64_t var_28h;
    int64_t var_20h;
    int32_t var_bp_18h;
    int16_t var_10h;
    int8_t var_ch;
    
    iVar2 = arg1;
    arg1_00 = fcn.000114d8(arg1,1,*(arg1 + 0x38));
    uVar3 = 0;
    uVar4 = 0;
    if (arg1_00 != NULL) {
        arg1_01 = fcn.000114d8(iVar2,1,*(arg1 + 0x38));
        uVar3 = 0;
        if (arg1_01 != NULL) {
            uStackX_8 = 0x12;
            fcn.000102c0(arg1_00,0x60);
            fcn.000102c0(arg1_01,0x12);
            uVar6 = 0;
            uVar5 = 0x60;
            do {
                fcn.000102c0(&uStack_78,0x38);
                fcn.000102c0(auStackX_10,6);
                var_40h_2._4_1_ = uStackX_8;
                puStack_58 = auStackX_10;
                uStack_78 = 30000000;
                uVar1 = uVar5;
                if (0xff < uVar5) {
                    uVar1 = 0xff;
                }
                uStackX_14 = uVar1;
                auStackX_10[0] = 0x12;
                var_40h_2._0_2_ = 6;
                puStack_70 = arg1_00;
                puStack_60 = arg1_01;
                uStack_50 = uVar5;
                iVar2 = (**(arg1 + 0x30))(arg1 + 0x10,&uStack_78,0);
                uStackX_8 = var_40h_2._4_1_;
                if (-1 < iVar2) {
                    if ((((var_40h_2._2_1_ == '\0') && (var_40h_2._3_1_ == '\x02')) && ((*arg1_01 & 0x7f) == 0x70)) &&
                       (uVar3 = uVar4, (arg1_01[2] & 0xf) == 5)) goto code_r0x00011286;
                    break;
                }
                uVar3 = 0;
                if (iVar2 + 0x7ffffffffffffffeU < 3) goto code_r0x00011286;
                uVar6 = uVar6 + 1;
                uVar5 = uStack_50;
            } while (uVar6 < 2);
            uVar3 = 0;
            if (((uVar6 != 2) && (uVar3 = uVar4, *arg1_00 < 0x20)) && (uVar6 = *arg1_00 & 0x1f, 9 < uVar6 - 0x14)) {
                *(arg1 + 0x80) = uVar6;
                *(arg1 + 0x82) = arg1_00[1] >> 7;
                if (arg1_00[2] == 0) {
                    *(arg1 + 0x81) = 0;
                }
                else {
                    *(arg1 + 0x81) = arg1_00[2] & 7;
                }
                uVar3 = 1;
            }
code_r0x00011286:
            (**(*0x11d28 + 0x30))(arg1_01,1);
        }
        (**(*0x11d28 + 0x30))(arg1_00,1);
    }
    return uVar3;
}


/* fcn.000114d8 @ 0x114d8 */

uint64_t fcn.000114d8(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_10;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = (**(*0x11d28 + 0x28))(0,4,arg1,&uStackX_10);
            if (-1 < iVar1) {
                return uStackX_10;
            }
        }
        else {
            iVar2 = (arg2 >> 0xc) + ((arg2 & 0xfffU) != 0) + arg1;
            iVar1 = (**(*0x11d28 + 0x28))(0,4,iVar2);
            if (-1 < iVar1) {
                uVar3 = uStackX_10 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
                if (iVar1 != 0) {
                    (**(*0x11d28 + 0x30))(uStackX_10,iVar1);
                }
                uStackX_10 = arg1 * 0x1000 + uVar3;
                arg1 = (iVar2 - iVar1) - arg1;
                if (arg1 != 0) {
                    (**(*0x11d28 + 0x30))(uStackX_10,arg1);
                }
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.000118e8 @ 0x118e8 */

ulong fcn.000118e8(int64_t arg1,int64_t arg2)

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
code_r0x00011948:
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
            if (*pcVar2 == *pcVar1) goto code_r0x00011948;
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


/* fcn.00011670 @ 0x11670 */

bool fcn.00011670(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.000116cc @ 0x116cc */

char * fcn.000116cc(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00011670(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00011630 @ 0x11630 */

void fcn.00011630(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000115d4();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001171c @ 0x1171c */

int64_t fcn.0001171c(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x11cf0;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00011670(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00011670(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.000116cc(arg1);
        iVar4 = fcn.000116cc(arg2);
        iVar2 = fcn.000115d4();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = section..text(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.000116cc(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00011630(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.0001197c @ 0x1197c */

ulong fcn.0001197c(ulong noname_0,int64_t arg1,ulong noname_2,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    ulong in_stack_00000028;
    
    if (*0x11d30 == NULL) {
        if ((*0x11d28 != 0) && (*(*0x11d28 + 0x140) != NULL)) {
            iVar1 = (**(*0x11d28 + 0x140))(0x11bb0,0,0x11d30);
            if (iVar1 < 0) {
                *0x11d30 = NULL;
            }
            if (*0x11d30 != NULL) goto code_r0x000119ef;
        }
        uVar2 = 0x8000000000000003;
    }
    else {
code_r0x000119ef:
        uVar2 = (***0x11d30)(1,arg1 & 0xffffffff,0,arg2,in_stack_00000028);
    }
    return uVar2;
}


