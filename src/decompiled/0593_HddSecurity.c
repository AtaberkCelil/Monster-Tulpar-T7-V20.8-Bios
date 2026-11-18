// decompiled by r2ghidra: 0593_HddSecurity.pe32
// functions: 43

/* entry0 @ 0x102c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x134f0 = *(arg2 + 0x60);
    *0x134e8 = arg2;
    fcn.000102e0(arg1,arg2);
    return;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(int64_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint64_t uVar2;
    int64_t iVar3;
    ulong uStackX_8;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    uStackX_8 = 0;
    iStackX_10 = arg2;
    puVar1 = fcn.00012eb4(arg1,0x10);
    *0x16500 = puVar1;
    if (puVar1 != NULL) {
        *puVar1 = 0x105e0;
        puVar1[1] = fcn.00010588;
        uVar2 = (**(*0x134f0 + 0x80))(&uStackX_8,0x13300,0,puVar1);
        if (uVar2 < 0) {
            return uVar2;
        }
        iVar3 = (**(*0x134f0 + 0x40))(6,0x30f8,&iStackX_10);
        *0x134c8 = iStackX_10;
        if (iVar3 < 0) {
            *0x134c8 = 0;
        }
        if (*0x134c8 != 0) {
            iStackX_10 = *0x134c8;
            iVar3 = (**(*0x134f0 + 0x40))(0,0x200,aiStackX_18);
            if (iVar3 < 0) {
                aiStackX_18[0] = 0;
            }
            *0x134e0 = aiStackX_18[0];
            return ~-(aiStackX_18[0] != 0) & 0x8000000000000009;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00012eb4 @ 0x12eb4 */

int64_t fcn.00012eb4(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    iVar1 = (**(*0x134f0 + 0x40))(4,arg1,aiStackX_18);
    if (iVar1 < 0) {
        aiStackX_18[0] = 0;
    }
    if ((aiStackX_18[0] != 0) && (arg1 != 0)) {
        aiStackX_18[0] = fcn.000102a0(aiStackX_18[0],arg1);
    }
    return aiStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

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


/* fcn.00011130 @ 0x11130 */

ulong fcn.00011130(int64_t arg1)

{
    int iVar1;
    ulong uVar2;
    int64_t in_RDX;
    
    iVar1 = *(arg1 + 0x40);
    if (iVar1 == 0) {
        return 0;
    }
    if (iVar1 == 1) {
code_r0x00011143:
        uVar2 = fcn.00012168(arg1,in_RDX);
    }
    else {
        if (iVar1 != 2) {
            if (iVar1 != 3) {
                return 0;
            }
            if (*(*(arg1 + 0x38) + 0x4c) != '\0') goto code_r0x00011143;
        }
        uVar2 = fcn.00010ff0(arg1,in_RDX);
    }
    return uVar2;
}


/* fcn.000110cc @ 0x110cc */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000110cc(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    int64_t arg1_00;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *noname_0;
    int64_t *noname_0_00;
    uint16_t uVar3;
    uint32_t arg2_00;
    uint16_t uVar4;
    int64_t arg1_01;
    uchar auStack_68 [2];
    uchar uStack_66;
    int64_t var_50h;
    int64_t iStack_50;
    uchar *puStack_48;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    ushort uStack_20;
    int32_t var_10h;
    int16_t var_8h;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 == 0) {
        return 0;
    }
    if (arg2 == 1) {
        uVar3 = *(iVar1 + 8);
        arg1_01 = iVar1 + 0x23;
        uVar4 = *(iVar1 + 9);
        noname_0 = *(iVar1 + 0x3d8);
code_r0x00011116:
        if (noname_0 == NULL) {
            iVar1 = -0x7ffffffffffffffe;
        }
        else {
            noname_0_00 = noname_0;
            iVar1 = fcn.00012d84(noname_0,1,*(*noname_0 + 4));
            if ((iVar1 != 0) && (arg1_00 = fcn.00012d84(noname_0_00,1,*(*noname_0 + 4)), arg1_00 != 0)) {
                fcn.000102a0(&stack0xffffffffffffff98,0x14);
                fcn.000102a0(arg1_00,0x14);
                fcn.000102a0(&stack0xffffffffffffffb0,0x38);
                puStack_48 = &stack0xffffffffffffff98;
                uStack_66 = 0xec;
                uStack_20 = 0x8004;
                var_bp_20h._0_4_ = 0x200;
                var_38h = 30000000;
                iStack_50 = arg1_00;
                var_30h = iVar1;
                iVar2 = (*noname_0[1])(noname_0,uVar3,uVar4,&stack0xffffffffffffffb0,0);
                if ((-1 < iVar2) && (arg1_01 != iVar1)) {
                    section..text(arg1_01,iVar1,0x200);
                }
                (**(*0x134f0 + 0x30))(arg1_00,1);
                (**(*0x134f0 + 0x30))(iVar1,1);
                return iVar2;
            }
            iVar1 = -0x7ffffffffffffff7;
        }
        return iVar1;
    }
    if (arg2 == 2) {
        arg2_00 = 2;
    }
    else {
        if (arg2 != 3) {
            return 0;
        }
        if (*(iVar1 + 0x4c) != '\0') {
            arg1_01 = *(iVar1 + 0xb0);
            uVar4 = *(iVar1 + 0x62);
            uVar3 = *(iVar1 + 0x60);
            noname_0 = *(iVar1 + 0x18);
            goto code_r0x00011116;
        }
        arg2_00 = 3;
    }
    var_28h = 0x11129;
    iVar1 = fcn.00010f58(iVar1,arg2_00);
    return iVar1;
}


/* fcn.000109bc @ 0x109bc */

ulong fcn.000109bc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    ulong uVar2;
    uint16_t uVar3;
    char cVar4;
    uint uVar5;
    int64_t iVar6;
    int16_t in_stack_00000028;
    int in_stack_00000030;
    uint uStack_c8;
    uint8_t uStack_c0;
    uint8_t uStack_bf;
    uchar auStack_be [32];
    uchar uStack_9e;
    uchar uStack_9d;
    uint64_t uStack_98;
    uint8_t *puStack_90;
    uint uStack_88;
    uchar uStack_74;
    uint32_t *puStack_70;
    uchar *puStack_68;
    uint32_t uStack_60;
    uchar uStack_5c;
    uint uStack_58;
    int iStack_4c;
    uint uStack_48;
    uchar auStack_30 [24];
    
    uVar5 = 0;
    uVar1 = arg4 & 0xff;
    uStack_c8 = 0;
    if (in_stack_00000030 == 2) {
        iVar6 = *(arg1 + 0x138);
    }
    else {
        if (in_stack_00000030 != 3) {
            return 0x8000000000000003;
        }
        uStack_c8 = *(arg1 + 0x48);
        iVar6 = *(arg1 + 0x18);
    }
    fcn.000102a0(&uStack_c0,0x24);
    fcn.000102a0(&uStack_98,0x38);
    fcn.000102a0(&uStack_60,0x2c);
    fcn.000102a0(auStack_30,0x10);
    cVar4 = arg4;
    if ((uVar1 - 3 & 0xfd) != 0) {
        uVar3 = arg2 & 0x103;
        uStack_c0 = uStack_c0 | uVar3 >> 8;
        uStack_bf = uStack_bf | uVar3 & 1;
        if (cVar4 == '\x04') {
            uStack_c0 = uStack_c0 | uVar3 >> 1;
        }
        if (((cVar4 != '\x06') && ((arg2 & 1U) != 0)) && (in_stack_00000028 - 1U < 0xfffe)) {
            uStack_9d = in_stack_00000028;
            uStack_9e = in_stack_00000028 >> 8;
        }
        if (auStack_be != arg3) {
            section..text(auStack_be,arg3,0x20);
        }
        uVar5 = 0x24;
    }
    uStack_58 = 0;
    uStack_60 = uStack_60 & 0xfffffc81 | 0x81;
    uStack_5c = 0xc;
    iStack_4c = (uVar1 | 0xffef0000) << 8;
    if (cVar4 != '\x04') {
        uStack_98 = 10000000;
        goto code_r0x00010bb9;
    }
    if ((arg2 & 2U) == 0) {
        if (in_stack_00000030 == 2) {
            uStack_98 = *(arg1 + 0x12a) * 0x100 + (*(arg1 + 0x12a) >> 8);
        }
        if (in_stack_00000030 == 3) {
            uVar3 = *(arg1 + 0x32);
            goto code_r0x00010b83;
        }
    }
    else {
        if (in_stack_00000030 == 2) {
            uStack_98 = *(arg1 + 300) * 0x100 + (*(arg1 + 300) >> 8);
        }
        if (in_stack_00000030 == 3) {
            uVar3 = *(arg1 + 0x34);
code_r0x00010b83:
            uStack_98 = uVar3 * 0x100 + (uVar3 >> 8);
        }
    }
    if (uStack_98 < 0xff) {
        uStack_98 = uStack_98 * 1200000000;
    }
    else {
        uStack_98 = 0;
    }
code_r0x00010bb9:
    puStack_70 = &uStack_60;
    puStack_68 = auStack_30;
    uStack_74 = 0;
    puStack_90 = &uStack_c0;
    uStack_88 = uVar5;
    uStack_48 = uVar5;
    uVar2 = (**(iVar6 + 8))(iVar6,uStack_c8,&uStack_98);
    return uVar2;
}


/* fcn.00010718 @ 0x10718 */

ulong fcn.00010718(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t *arg2_00;
    ulong uVar1;
    uint32_t unaff_R14D;
    uint16_t in_stack_00000028;
    int in_stack_00000030;
    
    arg2_00 = fcn.00012eb4(arg1,0x200);
    if (arg2_00 == NULL) {
        uVar1 = 0x8000000000000009;
    }
    else {
        *arg2_00 = arg2;
        if (arg2_00 + 1 != arg3) {
            section..text(arg2_00 + 1,arg3,0x20);
        }
        if (((arg2 & arg4 == -0xf) != 0) && (in_stack_00000028 - 1 < 0xfffe)) {
            arg2_00[0x11] = in_stack_00000028;
        }
        uVar1 = 0x8000000000000003;
        if ((in_stack_00000030 != 0) && ((in_stack_00000030 - 1U & 0xfffffffd) == 0)) {
            uVar1 = fcn.00011858(arg1,arg2_00,in_stack_00000030,unaff_R14D);
        }
        (**(*0x134f0 + 0x48))(arg2_00);
    }
    return uVar1;
}


/* fcn.00012a54 @ 0x12a54 */

int64_t fcn.00012a54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t uVar1;
    int iVar2;
    ulong *puVar3;
    ulong uVar4;
    int64_t iVar5;
    ulong *arg1_00;
    int64_t iVar6;
    uchar auStackX_8 [8];
    uchar auStack_38 [8];
    uchar auStack_30 [8];
    ulong uStack_28;
    uchar auStack_20 [8];
    
    iVar5 = *(arg1 + 0x38);
    iVar2 = arg4;
    uVar1 = *(arg1 + 0x40);
    if (1 < iVar2 - 1U) {
        return -0x7ffffffffffffffe;
    }
    if (5 < uVar1) {
        return -0x7ffffffffffffffd;
    }
    uStack_28 = 0xe8;
    fcn.000102a0(*0x134c8,0xe8);
    puVar3 = *0x134c8;
    if (iVar2 == 1) {
        **0x134c8 = *0x13340;
        uVar4 = *0x13348;
code_r0x00012adf:
        puVar3[1] = uVar4;
    }
    else if (iVar2 == 2) {
        **0x134c8 = *0x13350;
        uVar4 = *0x13358;
        goto code_r0x00012adf;
    }
    puVar3[2] = 0xd0;
    if (uVar1 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (uVar1 == 1) {
        iVar6 = *(*(iVar5 + 0x350) + 0x78);
        *(puVar3 + 0x3a) = *(iVar5 + 8);
        *(puVar3 + 0x3c) = *(iVar5 + 9);
    }
    else if (uVar1 == 2) {
        iVar6 = *(iVar5 + 0x10);
        puVar3[8] = *(iVar5 + 0x18);
    }
    else {
        if (uVar1 != 3) {
            return -0x7ffffffffffffffd;
        }
        *(puVar3 + 10) = *(iVar5 + 0x4c);
        iVar6 = *(iVar5 + 8);
        if (puVar3 + 0xd != iVar5 + 0x74) {
            section..text(puVar3 + 0xd,iVar5 + 0x74,0x3c);
        }
    }
    if (iVar6 == 0) {
        return -0x7ffffffffffffffd;
    }
    iVar5 = (**(iVar6 + 0x70))(iVar6,auStack_20,auStackX_8,auStack_38,auStack_30);
    if (iVar5 < 0) {
        return iVar5;
    }
    *(puVar3 + 9) = auStackX_8[0];
    *(puVar3 + 0x49) = auStack_38[0];
    *(puVar3 + 0x4a) = auStack_30[0];
    *(puVar3 + 3) = 0x44444824;
    *(puVar3 + 0x36) = arg2;
    *(puVar3 + 0x4c) = uVar1;
    if ((arg2 & 1U) == 0) {
        arg1_00 = puVar3 + 0x19;
        puVar3[4] = arg1_00;
    }
    else {
        arg1_00 = puVar3 + 0x15;
        puVar3[5] = arg1_00;
        if (arg3 == 0) {
            fcn.000102a0(arg1_00,0x20);
            goto code_r0x00012beb;
        }
    }
    if (arg1_00 != arg3) {
        section..text(arg1_00,arg3,0x20);
    }
code_r0x00012beb:
    if ((*0x134a0 == NULL) && (iVar5 = (**(*0x134f0 + 0x140))(0x132a0,0,0x134a0), iVar5 < 0)) {
        return iVar5;
    }
    iVar5 = (***0x134a0)(*0x134a0,*0x134c8,&uStack_28);
    return iVar5;
}


/* fcn.00011170 @ 0x11170 */

int64_t fcn.00011170(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    uint16_t uVar3;
    int64_t iVar4;
    
    arg2_00 = *(arg1 + 0x40);
    iVar1 = *(arg1 + 0x38);
    if (5 < arg2_00) {
        return -0x7ffffffffffffffd;
    }
    uVar3 = arg2 & 0x101;
    arg1_00 = iVar1;
    iVar4 = arg4;
    iVar2 = fcn.000110cc(arg1_00,arg2_00);
    if (iVar2 < 0) {
        return iVar2;
    }
    if (arg2_00 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (arg2_00 == 1) {
code_r0x000111e4:
        iVar2 = fcn.00011e0c(arg1,uVar3,arg3,arg4 & 0xffff);
    }
    else {
        if (arg2_00 != 2) {
            if (arg2_00 != 3) goto code_r0x0001123c;
            if (*(iVar1 + 0x4c) != '\0') goto code_r0x000111e4;
        }
        iVar2 = fcn.000109bc(*(arg1 + 0x38),uVar3,arg3,CONCAT71(iVar4 >> 8,1));
    }
code_r0x0001123c:
    if ((-1 < iVar2) && (fcn.000110cc(arg1_00,arg2_00), (arg2 & 1U) == 0)) {
        fcn.00012a54(arg1,uVar3,arg3,1);
    }
    return iVar2;
}


/* fcn.00010c08 @ 0x10c08 */

int64_t fcn.00010c08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint64_t noname_0;
    uint32_t arg2_00;
    char acStackX_8 [8];
    char acStackX_10 [8];
    
    acStackX_10[0] = '\0';
    acStackX_8[0] = '\0';
    arg2_00 = arg2;
    uVar4 = 0;
    uVar3 = 0;
    if (arg2_00 == 3) {
        uVar3 = *(arg1 + 0x20);
        *arg4 = *(arg1 + 0x68);
    }
    if (arg2_00 == 2) {
        uVar3 = *(*(arg1 + 0x168) + 0x100);
        *arg4 = *(arg1 + 0x18);
    }
    if ((uVar3 & 1) != 0) {
        noname_0 = arg1;
        iVar1 = fcn.000108e8(arg1,arg2,acStackX_10,acStackX_8);
        if (iVar1 < 0) {
code_r0x00010cf0:
            iVar1 = fcn.00012eb4(noname_0,0x58);
            if (iVar1 == 0) {
                return -0x7ffffffffffffff7;
            }
            if (arg2_00 == 2) {
                *(arg1 + 0x120) = iVar1;
                *(iVar1 + 0x38) = arg1;
            }
            if (arg2_00 == 3) {
                *(arg1 + 0x28) = iVar1;
                *(iVar1 + 0x38) = arg1;
            }
            iVar2 = fcn.000110cc(*(iVar1 + 0x38),arg2_00);
            if ((-1 < iVar2) && (iVar2 = fcn.00011688(arg2 & 0xffffffff,*arg4,iVar1), -1 < iVar2)) {
                *arg3 = iVar1;
                return iVar2;
            }
            (**(*0x134f0 + 0x48))(iVar1);
            return iVar2;
        }
        if ((acStackX_10[0] != '\0') && (noname_0 = arg1, iVar1 = fcn.000110cc(arg1,arg2_00), -1 < iVar1)) {
            if (arg2_00 == 2) {
                uVar4 = *(arg1 + 0x130) >> 8;
                noname_0 = uVar4;
            }
            if (arg2_00 == 3) {
                uVar4 = *(arg1 + 0x38) >> 8;
            }
            if (((uVar4 & 1) != 0) && ((acStackX_8[0] == '\0' || ((uVar4 & 2) != 0)))) goto code_r0x00010cf0;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00011cac @ 0x11cac */

//WARNING: Variable defined which should be unmapped: var_bp_20h

int64_t fcn.00011cac(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    int64_t iVar3;
    uchar *arg2_00;
    uint32_t arg2_01;
    uchar auStackX_8 [8];
    char acStackX_10 [8];
    int8_t var_bp_20h;
    int8_t var_150h;
    uint32_t var_158h;
    uchar auStack_228 [164];
    uint8_t uStack_184;
    uint8_t uStack_128;
    int8_t var_3ch;
    
    acStackX_10[0] = '\0';
    fcn.000102a0(auStack_228,0x200);
    arg2_01 = arg2;
    if (arg2_01 == 1) {
        if (*(arg1 + 0x18) != 0) {
            return -0x7ffffffffffffffd;
        }
        uVar1 = *arg1;
        arg2_00 = arg1 + 0x23;
    }
    else {
        if (arg2_01 != 3) {
            return -0x7ffffffffffffffd;
        }
        uVar1 = *(arg1 + 0x68);
        arg2_00 = *(arg1 + 0xb0);
    }
    *arg4 = uVar1;
    if (auStack_228 != arg2_00) {
        section..text(auStack_228,arg2_00,0x200);
    }
    if ((uStack_184 & 2) != 0) {
        auStackX_8[0] = 1;
        iVar3 = arg1;
        iVar2 = fcn.00011b30(arg1,arg2 & 0xffffffff,auStackX_8,acStackX_10);
        if (((iVar2 < 0) || (acStackX_10[0] == '\0')) || ((uStack_128 & 2) != 0)) {
            iVar3 = fcn.00012eb4(iVar3,0x58);
            if (iVar3 == 0) {
                return -0x7ffffffffffffff7;
            }
            if (arg2_01 == 1) {
                *(iVar3 + 0x38) = arg1;
                *(arg1 + 0x370) = iVar3;
            }
            else if (arg2_01 == 3) {
                *(arg1 + 0x28) = iVar3;
                *(iVar3 + 0x38) = arg1;
            }
            iVar2 = fcn.000110cc(*(iVar3 + 0x38),arg2_01);
            if ((-1 < iVar2) && (iVar2 = fcn.00011688(arg2 & 0xffffffff,*arg4,iVar3), -1 < iVar2)) {
                *arg3 = iVar3;
                return iVar2;
            }
            (**(*0x134f0 + 0x48))(iVar3);
            return iVar2;
        }
    }
    return -0x7ffffffffffffffd;
}


/* fcn.00010588 @ 0x10588 */

int64_t fcn.00010588(uint32_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    uint in_register_0000000c;
    ulong *puVar2;
    int64_t iVar3;
    ulong uVar4;
    int iVar5;
    int64_t iVar6;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    if ((puVar2 == NULL) || (5 < arg2)) {
        return -0x7ffffffffffffffe;
    }
    if (arg2 == 0) {
        return -0x7ffffffffffffffd;
    }
    if (arg2 == 1) {
        iVar5 = 1;
code_r0x000105cd:
        if (iVar5 == 1) {
            iVar6 = puVar2[0x6e];
            uVar4 = *puVar2;
        }
        else {
            if (iVar5 != 3) {
                return 0;
            }
            iVar6 = puVar2[5];
            uVar4 = puVar2[0xd];
        }
        if (iVar6 == 0) {
            return 0;
        }
        iVar1 = (**(*0x134f0 + 0x150))(uVar4,0x132d0,iVar6,0);
        if (iVar1 == 0) {
            (**(*0x134f0 + 0x48))(iVar6);
        }
        return iVar1;
    }
    if (arg2 == 2) {
        iVar5 = 2;
    }
    else {
        if (arg2 != 3) {
            return -0x7ffffffffffffffd;
        }
        iVar5 = 3;
        if (*(puVar2 + 0x4c) != '\0') goto code_r0x000105cd;
    }
    iVar6 = -0x7ffffffffffffffd;
    if (iVar5 == 2) {
        iVar1 = puVar2[0x24];
        iVar3 = puVar2[3];
    }
    else {
        if (iVar5 != 3) {
            return 0;
        }
        iVar1 = puVar2[5];
        iVar3 = puVar2[0xd];
    }
    if (iVar1 == 0) {
        return 0;
    }
    if ((iVar3 != 0) && (iVar6 = (**(*0x134f0 + 0x150))(iVar3,0x132d0,iVar1,0), iVar6 == 0)) {
        (**(*0x134f0 + 0x48))(iVar1);
    }
    return iVar6;
}


/* fcn.00012c64 @ 0x12c64 */

void fcn.00012c64(uint32_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uchar *in_R8;
    uchar auStackX_18 [16];
    
    if (((*0x134d0 == 0) && (arg1 == 2)) && (iVar1 = fcn.00013244(0x10,0x12600,in_R8,0x134d0), iVar1 < 0)) {
        return;
    }
    if (*0x134c0 == 0) {
        iVar1 = (**(*0x134f0 + 0x50))(0x200,8,0x12274,0,0x134c0);
        if (iVar1 < 0) {
            return;
        }
        in_R8 = auStackX_18;
        iVar1 = (**(*0x134f0 + 0xa8))(0x13428,*0x134c0);
        if (iVar1 < 0) {
            return;
        }
    }
    if ((*0x134d8 == 0) && (iVar1 = fcn.000131e4(), iVar1 < 0)) {
        return;
    }
    if (*0x134a0 == 0) {
        in_R8 = 0x134a0;
        (**(*0x134f0 + 0x140))(0x132a0,0);
    }
    if ((*0x134b0 == 0) && (iVar1 = fcn.00013244(8,0x12990,in_R8,0x134b0), iVar1 < 0)) {
        return;
    }
    if (*0x134b8 != '\0') {
        fcn.00012a54(arg2,1,0,1);
    }
    return;
}


/* fcn.00011574 @ 0x11574 */

int64_t fcn.00011574(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint uVar3;
    int16_t iVar4;
    
    iVar2 = *(arg1 + 0x38);
    uVar1 = *(arg1 + 0x40);
    iVar4 = 0;
    if ((iVar2 == 0) || (5 < uVar1)) {
code_r0x0001166c:
        iVar2 = -0x7ffffffffffffffd;
    }
    else {
        if (uVar1 != 0) {
            if (uVar1 == 1) {
                iVar4 = *(iVar2 + 0xdb);
            }
            else if (uVar1 == 2) {
                iVar4 = *(iVar2 + 0x12e) * 0x100 + (*(iVar2 + 0x12e) >> 8);
            }
            else {
                if (uVar1 != 3) goto code_r0x0001166c;
                if (*(iVar2 + 0x4c) == '\0') {
                    iVar4 = *(iVar2 + 0x36) * 0x100 + (*(iVar2 + 0x36) >> 8);
                }
                else {
                    iVar4 = *(*(iVar2 + 0xb0) + 0xb8);
                }
            }
        }
        uVar3 = 2;
        if ((iVar4 != 0) && (iVar4 != -1)) {
            uVar3 = 2;
            if (iVar4 != 1) {
                uVar3 = 0x10002;
            }
        }
        iVar2 = fcn.00011130(arg1);
        if (-1 < iVar2) {
            iVar2 = 0;
            *arg2 = uVar3;
        }
    }
    return iVar2;
}


/* fcn.0001050c @ 0x1050c */

void fcn.0001050c(int64_t arg1)

{
    unkint7 extraout_RAX;
    uint64_t uVar1;
    uchar auStack_28 [32];
    
    fcn.000102a0(auStack_28,0x20);
    uVar1 = 0;
    do {
        auStack_28[uVar1] = L"OEM_MASTER_PASSWORD_TAG"[uVar1];
        if (L"OEM_MASTER_PASSWORD_TAG"[uVar1] == L'\0') break;
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x20);
    fcn.00011130(arg1);
    if (-1 < extraout_RAX) {
        fcn.00011170(arg1,1,auStack_28,0xfffe);
    }
    return;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 12352 named .text
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


/* fcn.00011858 @ 0x11858 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_ch

ulong fcn.00011858(int64_t arg1,int64_t arg2,int8_t arg_40h,uint32_t arg_50h)

{
    int64_t arg1_00;
    int64_t arg1_01;
    ulong uVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uchar in_stack_00000028;
    unkbyte3 in_stack_00000039;
    uchar auStack_68 [2];
    uchar uStack_66;
    int64_t var_50h;
    int64_t iStack_50;
    uchar *puStack_48;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_28h;
    uint uStack_24;
    int64_t var_18h;
    int32_t var_ch;
    int16_t var_8h;
    
    if (_arg_40h == 1) {
        piVar2 = *(arg1 + 0x3d8);
        uVar3 = *(arg1 + 8);
        uVar4 = *(arg1 + 9);
    }
    else {
        if (_arg_40h != 3) {
            return 0x8000000000000002;
        }
        piVar2 = *(arg1 + 0x18);
        uVar3 = *(arg1 + 0x60);
        uVar4 = *(arg1 + 0x62);
    }
    if (piVar2 == NULL) {
        return 0x8000000000000002;
    }
    arg1_00 = fcn.00012d84(arg1,1,*(*piVar2 + 4));
    if ((arg1_00 != 0) && (arg1_01 = fcn.00012d84(arg1,1,*(*piVar2 + 4)), arg1_01 != 0)) {
        fcn.000102a0(auStack_68,0x14);
        fcn.000102a0(arg1_00,0x14);
        fcn.000102a0(&iStack_50,0x38);
        puStack_48 = auStack_68;
        uStack_66 = in_stack_00000028;
        var_38h = 30000000;
        iStack_50 = arg1_00;
        if (arg1_01 != arg2) {
            section..text(arg1_01,arg2,0x200);
        }
        var_18h._0_2_ = 0x8005;
        uStack_24 = 0x200;
        var_28h = arg1_01;
        uVar1 = (*piVar2[1])(piVar2,uVar3,uVar4,&iStack_50,0);
        (**(*0x134f0 + 0x30))(arg1_00,1);
        (**(*0x134f0 + 0x30))(arg1_01,1);
        return uVar1;
    }
    return 0x8000000000000009;
}


/* fcn.000107fc @ 0x107fc */

ulong fcn.000107fc(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    uint uVar3;
    uchar auStack_88 [16];
    uint32_t uStack_78;
    uchar uStack_74;
    uint uStack_70;
    uint uStack_60;
    ulong uStack_48;
    int64_t iStack_40;
    uint uStack_38;
    uchar uStack_24;
    uint32_t *puStack_20;
    uchar *puStack_18;
    
    iVar2 = 0;
    uVar3 = 0;
    if (arg2 == 3) {
        iVar2 = *(arg1 + 0x18);
        uVar3 = *(arg1 + 0x48);
    }
    if (arg2 == 2) {
        iVar2 = *(arg1 + 0x138);
    }
    if (iVar2 == 0) {
        uVar1 = 0x8000000000000002;
    }
    else {
        fcn.000102a0(&uStack_48,0x38);
        fcn.000102a0(&uStack_78,0x2c);
        fcn.000102a0(auStack_88,0x10);
        uStack_70 = 0;
        uStack_78 = uStack_78 & 0xfffffc82 | 0x82;
        uStack_60 = arg4;
        puStack_20 = &uStack_78;
        uStack_74 = 0xc;
        puStack_18 = auStack_88;
        uStack_48 = 10000000;
        uStack_24 = 0;
        iStack_40 = arg3;
        uStack_38 = uStack_60;
        uVar1 = (**(iVar2 + 8))(iVar2,uVar3,&uStack_48,0);
    }
    return uVar1;
}


/* fcn.000108e8 @ 0x108e8 */

ulong fcn.000108e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    bool bVar6;
    uchar auStack_208 [6];
    uchar uStack_202;
    uchar uStack_201;
    char acStack_200 [504];
    
    *arg3 = 0;
    *arg4 = 0;
    fcn.000102a0(auStack_208,0x200);
    iVar1 = fcn.000107fc(arg1,arg2,auStack_208,0x200);
    if ((iVar1 < 0) || (uVar3 = CONCAT11(uStack_202,uStack_201), uVar3 == 0)) {
        uVar2 = 0x8000000000000003;
    }
    else {
        uVar5 = 0;
        bVar6 = uVar3 != 0;
        while (bVar6) {
            if (acStack_200[uVar5] == -0x11) {
                *arg3 = 1;
            }
            if (acStack_200[uVar5] == '\x01') {
                *arg4 = 1;
            }
            if ((*arg3 != '\0') && (*arg4 != '\0')) break;
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
            bVar6 = uVar4 < uVar3;
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00011688 @ 0x11688 */

ulong fcn.00011688(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg2;
    iVar1 = (**(*0x134f0 + 0x118))(arg2,0x132d0,0,0,0,4);
    if (iVar1 < 0) {
        *(arg3 + 0x40) = arg1;
        *arg3 = fcn.00011130;
        *(arg3 + 8) = fcn.00011170;
        *(arg3 + 0x10) = 0x11298;
        *(arg3 + 0x18) = 0x113e0;
        *(arg3 + 0x20) = 0x114e8;
        *(arg3 + 0x28) = 0x1152c;
        *(arg3 + 0x30) = fcn.00011574;
        uVar2 = (**(*0x134f0 + 0x148))(aiStackX_10,0x132d0,arg3,0);
    }
    else {
        uVar2 = 0x8000000000000014;
    }
    return uVar2;
}


/* fcn.00010f58 @ 0x10f58 */

void fcn.00010f58(int64_t arg1,uint32_t arg2)

{
    int64_t iVar1;
    ulong uStack_18;
    ulong uStack_10;
    
    if (arg2 == 2) {
        fcn.000102a0(&uStack_18,0x10);
        iVar1 = fcn.000107fc(arg1,2,&uStack_18,0x10);
        if (-1 < iVar1) {
            *(arg1 + 0x128) = uStack_18;
            *(arg1 + 0x130) = uStack_10;
        }
    }
    else if (arg2 == 3) {
        fcn.000102a0(&uStack_18,0x10);
        iVar1 = fcn.000107fc(arg1,3,&uStack_18,0x10);
        if (-1 < iVar1) {
            *(arg1 + 0x30) = uStack_18;
            *(arg1 + 0x38) = uStack_10;
        }
    }
    return;
}


/* fcn.00012168 @ 0x12168 */

ulong fcn.00012168(int64_t arg1,int64_t arg2)

{
    int iVar1;
    int64_t iVar2;
    uchar *arg2_00;
    uchar auStack_208 [164];
    uint8_t uStack_164;
    ushort uStack_108;
    
    iVar2 = *(arg1 + 0x38);
    iVar1 = *(arg1 + 0x40);
    fcn.000102a0(auStack_208,0x200);
    if (iVar1 == 1) {
        arg2_00 = iVar2 + 0x23;
    }
    else {
        if (iVar1 != 3) {
            return 0x8000000000000003;
        }
        arg2_00 = *(iVar2 + 0xb0);
    }
    if (auStack_208 != arg2_00) {
        section..text(auStack_208,arg2_00,0x200);
    }
    if ((uStack_164 & 2) != 0) {
        *arg2 = uStack_108;
    }
    return 0;
}


/* fcn.00010ff0 @ 0x10ff0 */

ulong fcn.00010ff0(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int16_t iVar2;
    
    if (*(arg1 + 0x40) == 2) {
        uVar1 = *(*(arg1 + 0x38) + 0x130);
        iVar2 = uVar1 * 0x100 + (uVar1 >> 8);
    }
    else {
        if (*(arg1 + 0x40) != 3) {
            return 0x8000000000000003;
        }
        uVar1 = *(*(arg1 + 0x38) + 0x38);
        iVar2 = uVar1 * 0x100 + (uVar1 >> 8);
    }
    *arg2 = iVar2;
    return 0;
}


/* fcn.00011e0c @ 0x11e0c */

ulong fcn.00011e0c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int iVar1;
    int64_t arg1_00;
    ulong extraout_RAX;
    uchar *arg2_00;
    uchar uVar2;
    unkbyte6 Var3;
    uchar auStack_218 [512];
    
    uVar2 = arg4 >> 8;
    Var3 = arg4 >> 0x10;
    arg1_00 = *(arg1 + 0x38);
    iVar1 = *(arg1 + 0x40);
    fcn.000102a0(auStack_218,0x200);
    if (iVar1 == 1) {
        arg2_00 = arg1_00 + 0x23;
    }
    else {
        if (iVar1 != 3) {
            return 0x8000000000000003;
        }
        arg2_00 = *(arg1_00 + 0xb0);
    }
    if (auStack_218 != arg2_00) {
        section..text(auStack_218,arg2_00,0x200);
    }
    fcn.00010718(arg1_00,arg2 & 0xffff,arg3,CONCAT62(Var3,CONCAT11(uVar2,0xf1)));
    return extraout_RAX;
}


/* fcn.00011ecc @ 0x11ecc */

int64_t fcn.00011ecc(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int64_t arg1_00;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar1;
    unkbyte7 Var2;
    
    Var2 = arg4 >> 8;
    arg1_00 = *(arg1 + 0x38);
    arg2_00 = *(arg1 + 0x40);
    if (((arg4 & 6) == 2) && ((arg2 & 1U) == 0)) {
        fcn.00010718(arg1_00,arg2,arg3,CONCAT71(Var2,0xf6));
        if (-1 < extraout_RAX) {
            fcn.00010718(arg1_00,arg2 & 0xffff,arg3,CONCAT71(Var2,0xf1));
        }
        fcn.000110cc(arg1_00,arg2_00);
        iVar1 = extraout_RAX;
    }
    else {
        fcn.00010718(arg1_00,arg2 & 0xffff,arg3,CONCAT71(Var2,0xf2));
        iVar1 = extraout_RAX_00;
        if (-1 < extraout_RAX_00) {
            fcn.000110cc(arg1_00,arg2_00);
        }
    }
    return iVar1;
}


/* fcn.00010d7c @ 0x10d7c */

int64_t fcn.00010d7c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint32_t arg2_00;
    int64_t arg1_00;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t iVar1;
    unkbyte7 Var2;
    
    Var2 = arg4 >> 8;
    arg1_00 = *(arg1 + 0x38);
    arg2_00 = *(arg1 + 0x40);
    if (((arg4 & 6) == 2) && ((arg2 & 1U) == 0)) {
        fcn.000109bc(arg1_00,arg2,arg3,CONCAT71(Var2,6));
        if (-1 < extraout_RAX) {
            fcn.000109bc(arg1_00,arg2 & 0xffff,arg3,CONCAT71(Var2,1));
        }
        iVar1 = extraout_RAX;
    }
    else {
        fcn.000109bc(arg1_00,arg2 & 0xffff,arg3,CONCAT71(Var2,2));
        iVar1 = extraout_RAX_00;
        if (-1 < extraout_RAX_00) {
            iVar1 = fcn.000110cc(arg1_00,arg2_00);
        }
    }
    return iVar1;
}


/* fcn.000103d0 @ 0x103d0 */

int64_t fcn.000103d0(int64_t arg1)

{
    uint32_t arg2;
    int64_t arg1_00;
    int64_t iVar1;
    uint64_t uVar2;
    ulong in_R9;
    unkbyte7 Var3;
    uchar auStack_38 [32];
    
    fcn.000102a0(auStack_38,0x20);
    uVar2 = 0;
    do {
        auStack_38[uVar2] = L"amim"[uVar2];
        if (L"amim"[uVar2] == L'\0') break;
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x20);
    fcn.00011130(arg1);
    arg2 = *(arg1 + 0x40);
    arg1_00 = *(arg1 + 0x38);
    if (5 < arg2) {
        return -0x7ffffffffffffffd;
    }
    iVar1 = fcn.000110cc(arg1_00,arg2);
    if (iVar1 < 0) {
        return iVar1;
    }
    Var3 = in_R9 >> 8;
    if (arg2 < 2) {
code_r0x000104bc:
        iVar1 = fcn.00010718(arg1_00,1,auStack_38,CONCAT71(Var3,0xf1));
    }
    else {
        if (arg2 != 2) {
            if (arg2 != 3) {
                return -0x7ffffffffffffffd;
            }
            if (*(arg1_00 + 0x4c) != '\0') goto code_r0x000104bc;
        }
        iVar1 = fcn.000109bc(arg1_00,1,auStack_38,CONCAT71(Var3,1));
    }
    if ((-1 < iVar1) && (iVar1 = fcn.000110cc(arg1_00,arg2), -1 < iVar1)) {
        iVar1 = fcn.00012a54(arg1,1,auStack_38,1);
    }
    return iVar1;
}


/* fcn.00010e30 @ 0x10e30 */

//WARNING: Removing unreachable block (ram,0x00010e66)

int64_t fcn.00010e30(int64_t arg1)

{
    uint32_t arg2;
    int64_t arg1_00;
    int64_t iVar1;
    int64_t extraout_RAX;
    unkbyte7 in_R9;
    
    arg2 = *(arg1 + 0x40);
    arg1_00 = *(arg1 + 0x38);
    iVar1 = fcn.00011130(arg1);
    if (-1 < iVar1) {
        fcn.000109bc(arg1_00,0,0,CONCAT71(in_R9,5));
        if (-1 < extraout_RAX) {
            fcn.000110cc(arg1_00,arg2);
        }
        iVar1 = extraout_RAX;
    }
    return iVar1;
}


/* fcn.00010eb0 @ 0x10eb0 */

int64_t fcn.00010eb0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t arg2_00;
    int64_t arg1_00;
    int64_t iVar1;
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    unkbyte7 in_R9;
    
    arg2_00 = *(arg1 + 0x40);
    arg1_00 = *(arg1 + 0x38);
    iVar1 = fcn.000110cc(arg1_00,arg2_00);
    if (-1 < iVar1) {
        fcn.000109bc(arg1_00,0,0,CONCAT71(in_R9,3));
        iVar1 = extraout_RAX;
        if (-1 < extraout_RAX) {
            fcn.000109bc(arg1_00,arg2 & 3,arg3,CONCAT71(in_R9,4));
            if (-1 < extraout_RAX_00) {
                fcn.000110cc(arg1_00,arg2_00);
            }
            iVar1 = extraout_RAX_00;
        }
    }
    return iVar1;
}


/* fcn.00012d84 @ 0x12d84 */

uint64_t fcn.00012d84(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uStackX_10;
    
    if (arg1 != 0) {
        if (arg2 < 0x1001) {
            iVar1 = (**(*0x134f0 + 0x28))(0,4,arg1,&uStackX_10);
            if (-1 < iVar1) {
                return uStackX_10;
            }
        }
        else {
            iVar2 = (arg2 >> 0xc) + ((arg2 & 0xfffU) != 0) + arg1;
            iVar1 = (**(*0x134f0 + 0x28))(0,4,iVar2);
            if (-1 < iVar1) {
                uVar3 = uStackX_10 + (arg2 - 1U) & ~(arg2 - 1U);
                iVar1 = ((uVar3 - uStackX_10 & 0xfff) != 0) + (uVar3 - uStackX_10 >> 0xc);
                if (iVar1 != 0) {
                    (**(*0x134f0 + 0x30))(uStackX_10,iVar1);
                }
                uStackX_10 = arg1 * 0x1000 + uVar3;
                arg1 = (iVar2 - iVar1) - arg1;
                if (arg1 != 0) {
                    (**(*0x134f0 + 0x30))(uStackX_10,arg1);
                }
                return uVar3;
            }
        }
    }
    return 0;
}


/* fcn.00011b30 @ 0x11b30 */

uint64_t fcn.00011b30(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    uchar *arg2_00;
    ulong *puVar4;
    uint uVar5;
    int64_t aiStack_438 [2];
    uchar auStack_428 [96];
    uint8_t uStack_3c8;
    uchar auStack_228 [6];
    uchar uStack_222;
    uchar uStack_221;
    char acStack_220 [504];
    
    aiStack_438[0] = 0x200;
    fcn.000102a0(auStack_428,0x200);
    uVar1 = 0;
    if (arg2 == 1) {
        puVar4 = *(arg1 + 0x388);
        uVar5 = **(*(arg1 + 0x360) + 8);
        arg2_00 = arg1 + 0x23;
code_r0x00011bb3:
        if (auStack_428 != arg2_00) {
            section..text(auStack_428,arg2_00,0x200);
        }
        if ((uStack_3c8 & 1) != 0) {
            if (puVar4 != NULL) {
                if (aiStack_438[0] != 0) {
                    fcn.000102a0(auStack_228,aiStack_438[0]);
                }
                iVar2 = (**puVar4)(puVar4,uVar5,50000000,0,0,0x200,auStack_228,aiStack_438);
                if ((-1 < iVar2) && (uVar3 = CONCAT11(uStack_222,uStack_221), uVar3 != 0)) {
                    if (uVar3 != 0) {
                        do {
                            if (acStack_220[uVar1] == '\x01') {
                                *arg4 = 1;
                            }
                        } while (((*arg3 == '\0') || (*arg4 == '\0')) && (uVar1 = uVar1 + 1, uVar1 < uVar3));
                    }
                    return 0;
                }
                goto code_r0x00011c7e;
            }
            uVar1 = 0x8000000000000003;
        }
        *arg4 = 0;
    }
    else {
        if (arg2 == 3) {
            puVar4 = *(arg1 + 0x10);
            uVar5 = 0;
            arg2_00 = *(arg1 + 0xb0);
            goto code_r0x00011bb3;
        }
code_r0x00011c7e:
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00011754 @ 0x11754 */

ulong fcn.00011754(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    ulong uVar1;
    int64_t *piVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    int64_t iStack_48;
    int64_t iStack_40;
    ulong uStack_38;
    uchar uStack_18;
    
    if (arg2 == 1) {
        piVar2 = *(arg1 + 0x3d8);
        uVar4 = *(arg1 + 8);
        uVar3 = *(arg1 + 9);
    }
    else {
        if (arg2 != 3) {
            return 0x8000000000000002;
        }
        piVar2 = *(arg1 + 0x18);
        uVar4 = *(arg1 + 0x60);
        uVar3 = *(arg1 + 0x62);
    }
    if (piVar2 == NULL) {
        return 0x8000000000000002;
    }
    arg1_00 = fcn.00012d84(arg1,1,*(*piVar2 + 4));
    if (arg1_00 != 0) {
        fcn.000102a0(arg1_00,0x14);
        fcn.000102a0(&iStack_48,0x38);
        uStack_38 = 30000000;
        uStack_18 = 2;
        iStack_48 = arg1_00;
        iStack_40 = arg3;
        uVar1 = (*piVar2[1])(piVar2,uVar4,uVar3,&iStack_48,0);
        (**(*0x134f0 + 0x30))(arg1_00,1);
        return uVar1;
    }
    return 0x8000000000000009;
}


/* fcn.000130a8 @ 0x130a8 */

ulong fcn.000130a8(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x1347c;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.00012f68(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.00012f04(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.00012e80(uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = section..text(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x1347c) {
                section..text(iVar4,0x1347c,4);
            }
            uVar2 = fcn.00012fb8(arg1,iVar3);
            (**(*0x134f0 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.00012404 @ 0x12404 */

int64_t fcn.00012404(int64_t arg1)

{
    uint uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint64_t uStackX_8;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    uint64_t uStackX_20;
    ulong auStack_38 [3];
    
    iVar2 = (**(arg1 + 0x70))(arg1,auStack_38,&iStackX_10,&uStackX_18,&uStackX_20);
    if (-1 < iVar2) {
        uVar4 = 0;
        do {
            uVar6 = *(uVar4 + 0x13360);
            uVar3 = uVar6;
            if (0xff < *(uVar4 + 0x13360)) {
                uVar3 = uVar6 << 0x20;
            }
            uVar5 = (iStackX_10 << 8 | uStackX_18) << 8 | uStackX_20;
            iVar2 = (**(arg1 + 0x30))(arg1,*(uVar4 + 0x13364),uVar6,1,&uStackX_8);
            if (iVar2 < 0) {
                return iVar2;
            }
            uStackX_8 = uStackX_8 & *(uVar4 + 0x13368);
            if (0x17f < *0x134ac) {
                return -0x7ffffffffffffff7;
            }
            iVar2 = *0x134ac * 0x20;
            *0x134ac = *0x134ac + 1;
            *(iVar2 + 0x13500) = auStack_38[0];
            uVar1 = *(uVar4 + 0x13364);
            uVar4 = uVar4 + 0xc;
            *(iVar2 + 0x13508) = uVar5 << 8 | uVar3;
            *(iVar2 + 0x13510) = uVar1;
            *(iVar2 + 0x13518) = uStackX_8;
        } while (uVar4 < 0x3c);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00012520 @ 0x12520 */

int64_t fcn.00012520(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t aiStackX_18 [2];
    
    if ((arg1 == 0) || (arg2 == 0)) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        aiStackX_18[0] = arg2 + 0x18;
        if (aiStackX_18[0] != 0) {
            fcn.000102a0(*0x134c8,aiStackX_18[0]);
        }
        iVar1 = *0x134c8;
        if (*0x134c8 != 0x13408) {
            section..text(*0x134c8,0x13408,0x10);
        }
        arg1_00 = iVar1 + 0x18;
        *(iVar1 + 0x10) = arg2;
        if (arg1_00 != arg1) {
            section..text(arg1_00,arg1,arg2);
        }
        if ((*0x134a0 != NULL) || (iVar1 = (**(*0x134f0 + 0x140))(0x132a0,0,0x134a0), -1 < iVar1)) {
            iVar1 = (***0x134a0)(*0x134a0,*0x134c8,aiStackX_18);
        }
    }
    return iVar1;
}


/* fcn.00013244 @ 0x13244 */

ulong fcn.00013244(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    ulong uVar1;
    int64_t iVar2;
    
    if (*(*0x134e8 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        iVar2 = 0x131e0;
        if (arg2 != 0) {
            iVar2 = arg2;
        }
        uVar1 = (**(*0x134f0 + 0x170))(0x200,arg1,iVar2,0,0x132b0,arg3);
    }
    return uVar1;
}


/* fcn.000131e4 @ 0x131e4 */

ulong fcn.000131e4(void)

{
    ulong uVar1;
    
    if (*(*0x134e8 + 8) < 0x20000) {
        uVar1 = 0x8000000000000003;
    }
    else {
        uVar1 = (**(*0x134f0 + 0x170))(0x200,0x10,0x12274,0,0x132c0,0x134d8);
    }
    return uVar1;
}


/* fcn.00013184 @ 0x13184 */

bool fcn.00013184(uint32_t arg1)

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


/* fcn.00012f68 @ 0x12f68 */

char * fcn.00012f68(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.00013184(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.00012f04 @ 0x12f04 */

int64_t fcn.00012f04(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x134f0 + 0x40))(4,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* fcn.00012e80 @ 0x12e80 */

ulong fcn.00012e80(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x134f0 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00012fb8 @ 0x12fb8 */

int64_t fcn.00012fb8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1347c;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.00013184(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.00013184(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.00012f68(arg1);
        iVar4 = fcn.00012f68(arg2);
        iVar2 = fcn.00012e80(iVar4 + -4 + iVar3);
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
    iVar2 = fcn.00012f68(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.00012f04(iVar4,iVar2,arg1);
    }
    return iVar3;
}


