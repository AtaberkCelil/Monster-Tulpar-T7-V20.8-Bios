// decompiled by r2ghidra: 0359_CastroCovePmicNvm.pe32
// functions: 37

/* entry0 @ 0x10344 */

ulong entry0(ulong noname_0,uint32_t arg1)

{
    ulong uVar1;
    ulong extraout_RAX;
    uint in_register_00000014;
    
    if (*(CONCAT44(in_register_00000014,arg1) + 8) < 0x20000) {
        uVar1 = 0x8000000000000019;
    }
    else {
        fcn.0001036c(noname_0,CONCAT44(in_register_00000014,arg1));
        fcn.00010448(noname_0,CONCAT44(in_register_00000014,arg1));
        uVar1 = extraout_RAX;
    }
    return uVar1;
}


/* fcn.0001036c @ 0x1036c */

ulong fcn.0001036c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x13238 = *(arg1 + 0x60);
    *0x13230 = arg1;
    fcn.00011798();
    puVar4 = fcn.00011798();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103c0:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010340();
                fcn.00010330();
                uVar2 = in(0x1808);
                fcn.00010310(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    fcn.00010300();
                }
                fcn.00010310(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010330();
                }
                else {
                    fcn.00010320();
                }
code_r0x00010429:
                uVar7 = 0;
                if (*(*0x13230 + 0x68) != 0) {
                    piVar8 = *(*0x13230 + 0x70);
                    do {
                        if ((*0x12d20 == *piVar8) && (*0x12d28 == piVar8[1])) {
                            *0x13250 = (*(*0x13230 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x13230 + 0x68));
                }
                *0x13250 = 0;
                return 0x800000000000000e;
            }
            if ((*0x12d90 == *(puVar4 + 4)) && (*0x12d98 == *(puVar4 + 8))) goto code_r0x00010429;
        }
        else if (uVar1 == 4) goto code_r0x000103c0;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010448 @ 0x10448 */

ulong fcn.00010448(ulong noname_0,int64_t arg1)

{
    char cVar1;
    int16_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t *arg2;
    uint8_t uVar5;
    unkbyte7 in_R8;
    uint64_t uStackX_10;
    
    uStackX_10 = arg1 & 0xffffffffffffff00;
    iVar3 = fcn.000116fc();
    cVar1 = (**(iVar3 + 0x30))(0x178);
    if (cVar1 != '\0') {
        iVar4 = fcn.000116fc();
        iVar3 = 0;
        iVar2 = (**(iVar4 + 0x10))(0x1d);
        if (iVar2 == 3) {
            uVar5 = 1;
            do {
                iVar3 = CONCAT71(iVar3 >> 8,uVar5);
                fcn.00011324(iVar3,3);
                uVar5 = uVar5 + 1;
            } while (uVar5 < 3);
        }
        else if (iVar2 == 2) {
            fcn.00011324(CONCAT71(iVar3 >> 8,3),2);
            uVar5 = 3;
        }
        else {
            uVar5 = uStackX_10;
        }
        iVar3 = fcn.000116fc();
        cVar1 = (**(iVar3 + 0x30))(0x235);
        if (cVar1 != '\0') {
            arg2 = &uStackX_10;
            fcn.00010500(0x4f78,arg2,CONCAT71(in_R8,uVar5));
            fcn.000105b4(0x4f78,CONCAT71(arg2 >> 8,uStackX_10) | 0x20,CONCAT71(in_R8,uVar5));
        }
    }
    return 0;
}


/* fcn.00011798 @ 0x11798 */

int64_t fcn.00011798(void)

{
    if (*0x13248 == 0) {
        fcn.00011738(0x12d10,0x13248);
    }
    return *0x13248;
}


/* fcn.00011738 @ 0x11738 */

ulong fcn.00011738(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x13230;
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


/* fcn.000116fc @ 0x116fc */

int64_t fcn.000116fc(void)

{
    if (*0x13240 == 0) {
        (**(*0x13238 + 0x140))(0x12cd0,0,0x13240);
    }
    return *0x13240;
}


/* fcn.00011324 @ 0x11324 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_2ch

int64_t fcn.00011324(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    char cVar3;
    char cVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    ulong in_R8;
    int64_t iVar8;
    ulong uVar9;
    int64_t arg3;
    uint64_t uVar10;
    uint64_t *arg4;
    uint64_t uVar11;
    uint16_t uVar12;
    uint64_t uStackX_18;
    int64_t iStackX_20;
    int64_t var_50h;
    int64_t var_58h;
    uchar auStackY_68 [4];
    uint16_t uStackY_64;
    uint16_t auStackY_60 [4];
    ushort *puStackY_58;
    ushort *puStackY_50;
    int64_t arg_60h;
    int64_t in_stack_ffffffffffffffc0;
    int16_t var_2ch;
    uint32_t var_28h;
    uint32_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    cVar4 = arg1;
    iVar8 = CONCAT71(in_R8 >> 8,cVar4);
    auStackY_60[0] = 0;
    uStackY_64 = 0;
    iVar5 = fcn.00010500(0x7d03,&uStackX_18,iVar8);
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar8 = CONCAT71(iVar8 >> 8,cVar4);
    iVar5 = fcn.00010500(0x7905,&iStackX_20,iVar8);
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar5 = fcn.00010500(0x7902,auStackY_68,CONCAT71(iVar8 >> 8,cVar4));
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar5 = fcn.000116fc();
    (**(iVar5 + 0x78))(0x234,uStackX_18);
    iVar5 = fcn.000116fc();
    (**(iVar5 + 0x78))(0x233,iStackX_20);
    iVar8 = 0x12d50;
    arg_60h = 0;
    iVar5 = (**(*0x13238 + 0x148))(&stack0xffffffffffffffb8,0x12cc0,0x12d50,0);
    if (iVar5 < 0) {
        return iVar5;
    }
    uStackX_18 = 0;
    iStackX_20 = 0;
    if (arg2 == 3) {
        if (cVar4 == '\x01') {
            iVar8 = 0x12d00;
        }
        else {
            if (cVar4 != '\x02') goto code_r0x00011446;
            iVar8 = 0x12d40;
        }
code_r0x0001142f:
        iVar5 = fcn.000106d8(&uStackX_18,&iStackX_20,iVar8);
    }
    else {
        if ((arg2 == 2) && (cVar4 == '\x03')) {
            iVar8 = 0x12ce0;
            goto code_r0x0001142f;
        }
code_r0x00011446:
        iVar5 = -0x7ffffffffffffffd;
    }
    arg2_00 = iStackX_20;
    uVar10 = uStackX_18;
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar8 = CONCAT71(iVar8 >> 8,cVar4);
    iVar5 = fcn.000107f0(uStackX_18,iStackX_20,iVar8);
    if (iVar5 < 0) {
        return iVar5;
    }
    arg4 = &uStackX_18;
    uStackX_18 = uStackX_18 & 0xffffffffffff0000;
    iVar8 = CONCAT71(iVar8 >> 8,1);
    iVar5 = fcn.00010d54(uVar10,arg2_00,iVar8,arg4);
    if (iVar5 == 0) {
        iVar5 = fcn.000116fc();
        cVar3 = (**(iVar5 + 0x30))(0x177);
        if (cVar3 != '\0') {
            arg4 = &uStackX_18;
            iVar8 = CONCAT71(iVar8 >> 8,2);
            fcn.00010d54(uVar10,arg2_00,iVar8,arg4);
        }
    }
    uVar2 = uStackX_18;
    uVar1 = uStackX_18;
    if (uStackX_18 == 0) {
        return -0x7ffffffffffffffe;
    }
    iVar5 = CONCAT71(iVar8 >> 8,cVar4);
    iVar8 = fcn.00010500(0x7dff,&iStackX_20,iVar5);
    if (iVar8 < 0) {
        return iVar8;
    }
    iVar5 = fcn.00010500(0x7dfe,&uStackX_18,CONCAT71(iVar5 >> 8,cVar4));
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar12 = uStackX_18 * 0x100 + iStackX_20;
    if (0xfff < uVar1 + uVar12) {
        return -0x7ffffffffffffffc;
    }
    uVar11 = uVar2 & 0xffff;
    iVar5 = (**(*0x13238 + 0x40))(4,uVar11,&puStackY_58);
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar9 = 0;
    (**(*0x13238 + 0x168))(puStackY_58,uVar2 & 0xffff,0);
    iVar5 = CONCAT71(arg4 >> 8,cVar4);
    arg3 = CONCAT71(uVar9 >> 8,1);
    iVar6 = fcn.00010834(uVar10,arg2_00,arg3,iVar5,arg_60h,in_stack_ffffffffffffffc0);
    iVar8 = iVar6;
    if ((iVar6 == 0) || (iVar6 == -0x7fffffffffffffec)) {
        iVar7 = fcn.000116fc();
        cVar3 = (**(iVar7 + 0x30))(0x177);
        if (cVar3 != '\0') {
            iVar5 = CONCAT71(iVar5 >> 8,cVar4);
            iVar8 = fcn.00010834(uVar10,arg2_00,CONCAT71(arg3 >> 8,2),iVar5,arg_60h,in_stack_ffffffffffffffc0);
        }
    }
    if ((iVar8 < 0) && (iVar6 != 0)) {
        return iVar8;
    }
    iVar8 = (**(*0x13238 + 0x40))(4,uVar11,&puStackY_50);
    if (iVar8 < 0) {
        return iVar8;
    }
    (**(*0x13238 + 0x168))(puStackY_50,uVar11,0);
    iVar5 = CONCAT71(iVar5 >> 8,cVar4);
    uVar10 = uVar12;
    fcn.00010e70(&puStackY_50,auStackY_60,uVar10,iVar5);
    if (uStackY_64 == auStackY_60[0]) {
        uVar10 = uStackY_64;
        if ((uVar10 == 0) || (puStackY_58 == puStackY_50)) {
            iVar8 = 0;
        }
        else {
            iVar8 = fcn.00010280(puStackY_58,puStackY_50,uVar10);
        }
        if (iVar8 == 0) goto code_r0x0001169a;
    }
    out(0x80,0xffe);
    fcn.00011828(0x12da0,0xffe,uVar10,iVar5);
code_r0x0001169a:
    (**(*0x13238 + 0x48))(puStackY_50);
    (**(*0x13238 + 0x48))(puStackY_58);
    iVar5 = fcn.000116fc();
    cVar4 = (**(iVar5 + 0x30))(0x17b);
    if ((cVar4 != '\0') && (iVar5 = fcn.00011054(), iVar5 < 0)) {
        return iVar5;
    }
    iVar5 = fcn.000116fc();
    (**(iVar5 + 0xa0))(0x235,1);
    return 0;
}


/* fcn.00010500 @ 0x10500 */

int64_t fcn.00010500(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t extraout_RAX;
    ulong noname_1;
    char cVar1;
    unkbyte7 Var2;
    int64_t arg2_00;
    unkbyte7 in_R9;
    uint auStack_28 [4];
    uchar auStack_18 [16];
    
    cVar1 = arg3;
    fcn.000102a0(auStack_28,0x10);
    noname_1 = 0x10;
    fcn.000102a0(auStack_18,0x10);
    *arg2 = 0;
    auStack_28[0] = arg1;
    if (cVar1 == '\x01') {
        arg2_00 = 0;
    }
    else {
        Var2 = arg3 >> 8;
        if (cVar1 == '\x02') {
            arg2_00 = CONCAT71(Var2,3);
        }
        else {
            if (cVar1 != '\x03') {
                return -0x7ffffffffffffffe;
            }
            arg2_00 = CONCAT71(Var2,6);
        }
    }
    fcn.000118fc(0xfe000000,noname_1,arg2_00,CONCAT71(in_R9,2));
    if (-1 < extraout_RAX) {
        *arg2 = auStack_18[0];
    }
    return extraout_RAX;
}


/* fcn.000105b4 @ 0x105b4 */

ulong fcn.000105b4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong extraout_RAX;
    ulong noname_1;
    char cVar1;
    uchar uVar2;
    unkbyte7 Var3;
    unkbyte7 in_R9;
    uint32_t auStack_28 [4];
    uchar auStack_18 [16];
    
    cVar1 = arg3;
    Var3 = arg3 >> 8;
    fcn.000102a0(auStack_28,0x10);
    noname_1 = 0x10;
    fcn.000102a0(auStack_18,0x10);
    uVar2 = 1;
    auStack_28[0] = (arg2 & 0xff) << 0x10 | arg1;
    if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
            uVar2 = 4;
        }
        else {
            if (cVar1 != '\x03') {
                return 0x8000000000000002;
            }
            uVar2 = 7;
        }
    }
    fcn.000118fc(0xfe000000,noname_1,CONCAT71(Var3,uVar2),CONCAT71(in_R9,3));
    return extraout_RAX;
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


/* fcn.000118fc @ 0x118fc */

int64_t fcn.000118fc(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    uint *in_stack_00000028;
    uint *in_stack_00000030;
    
    iVar1 = arg1;
    *(iVar1 + 0x80) = *in_stack_00000028;
    *(iVar1 + 0x84) = in_stack_00000028[1];
    *(iVar1 + 0x88) = in_stack_00000028[2];
    *(iVar1 + 0x8c) = in_stack_00000028[3];
    *(arg1 & 0xffffffff) = ((arg3 & 0xff) << 4 | arg2 & 0xff) << 0xc | 0xc0;
    uVar3 = 0;
    do {
        if ((*(iVar1 + 4) & 1) == 0) {
            iVar2 = 0;
code_r0x0001198d:
            if ((*(iVar1 + 4) & 2) != 0) {
                iVar2 = -0x7ffffffffffffff9;
            }
            if ((-1 < iVar2) && (in_stack_00000030 != NULL)) {
                *in_stack_00000030 = *(iVar1 + 0x90);
                in_stack_00000030[1] = *(iVar1 + 0x94);
                in_stack_00000030[2] = *(iVar1 + 0x98);
                in_stack_00000030[3] = *(iVar1 + 0x9c);
            }
            return iVar2;
        }
        if (100000 < uVar3) {
            iVar2 = -0x7fffffffffffffee;
            goto code_r0x0001198d;
        }
        fcn.000117c8(0x23);
        uVar3 = uVar3 + 1;
    } while( true );
}


/* fcn.0001065c @ 0x1065c */

int64_t fcn.0001065c(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    unkbyte7 in_R8;
    uint8_t auStackX_10 [8];
    
    uVar2 = 0;
    while ((iVar1 = fcn.00010500(0x7dfb,auStackX_10,CONCAT71(in_R8,arg1)), iVar1 != 0 || ((auStackX_10[0] & 2) != 0)
           )) {
        (**(*0x13238 + 0xf8))(100000);
        uVar2 = uVar2 + 1;
        if (9 < uVar2) {
code_r0x000106b1:
            if (uVar2 == 10) {
                iVar1 = -0x7fffffffffffffee;
            }
            return iVar1;
        }
    }
    iVar1 = 0;
    goto code_r0x000106b1;
}


/* fcn.00010d54 @ 0x10d54 */

int64_t fcn.00010d54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t extraout_RAX;
    int64_t extraout_RAX_00;
    int64_t extraout_RAX_01;
    int64_t iVar1;
    char *pcVar2;
    int16_t iVar3;
    uint16_t uVar4;
    char cVar5;
    unkbyte7 Var6;
    uint16_t uVar7;
    int16_t iVar8;
    uint8_t auStackX_8 [8];
    uchar in_stack_00000028;
    uint8_t uStack_38;
    char acStack_37 [15];
    
    cVar5 = arg3;
    Var6 = arg3 >> 8;
    uVar4 = 0x1f;
    iVar3 = 0;
    iVar8 = 0x1f;
    fcn.00010500(0x7d03,auStackX_8,CONCAT71(Var6,in_stack_00000028));
    iVar1 = extraout_RAX;
    if (-1 < extraout_RAX) {
        fcn.00010500(0x7905,&uStack_38,CONCAT71(Var6,in_stack_00000028));
        iVar1 = extraout_RAX_00;
        if (-1 < extraout_RAX_00) {
            fcn.00010500(0x7902,acStack_37,CONCAT71(Var6,in_stack_00000028));
            iVar1 = extraout_RAX_01;
            if ((-1 < extraout_RAX_01) && (0x1f < arg2)) {
                do {
                    uVar7 = iVar8 + iVar3;
                    iVar8 = uVar7 + 6;
                    pcVar2 = uVar7 + arg1;
                    iVar3 = CONCAT11(pcVar2[4],pcVar2[5]);
                    if (*pcVar2 == '\0') break;
                    if ((((cVar5 == *pcVar2) && (pcVar2[1] == -0xf)) &&
                        ((cVar5 != '\x01' || (auStackX_8[0] < pcVar2[3])))) &&
                       (((cVar5 != '\x02' || (uStack_38 < pcVar2[3])) && (acStack_37[0] == pcVar2[2])))) {
                        *arg4 = *arg4 + iVar3;
                        uVar4 = uVar4 + iVar3;
                    }
                } while (uVar4 < arg2);
            }
        }
    }
    return iVar1;
}


/* fcn.000107f0 @ 0x107f0 */

int64_t fcn.000107f0(int64_t arg1,ulong noname_1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    char acStackX_8 [32];
    
    iVar2 = fcn.00010500(0x7902,acStackX_8,arg2);
    if (-1 < iVar2) {
        pcVar3 = arg1 + 1;
        iVar4 = 10;
        do {
            cVar1 = *pcVar3;
            pcVar3 = pcVar3 + 3;
            if (acStackX_8[0] == cVar1) {
                iVar2 = 0;
            }
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    return iVar2;
}


/* fcn.00010834 @ 0x10834 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_1bh
//WARNING: Variable defined which should be unmapped: var_1eh

int64_t fcn.00010834(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_60h,int64_t arg_68h)

{
    int64_t iVar1;
    int64_t iVar2;
    char *pcVar3;
    ulong uVar4;
    uchar *puVar5;
    uint64_t uVar6;
    uint8_t *arg2_00;
    uint8_t uVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    uint64_t uVar10;
    char cVar11;
    uchar uVar12;
    uint16_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    bool bVar16;
    int64_t in_stack_00000028;
    uint16_t *in_stack_00000030;
    int64_t var_40h;
    int64_t var_48h;
    int8_t var_50h;
    uchar uStack_58;
    uint8_t uStack_57;
    uint16_t uStack_56;
    uint8_t uStack_54;
    uint8_t uStack_53;
    char cStack_52;
    uint8_t uStack_51;
    uint8_t auStack_50 [2];
    uint16_t uStack_4e;
    uint16_t uStack_4c;
    uint32_t uStack_48;
    int16_t var_1eh;
    int64_t var_1bh;
    uint32_t var_10h;
    
    cVar11 = arg3;
    uVar12 = arg4;
    iVar2 = CONCAT71(arg3 >> 8,uVar12);
    uVar13 = 0;
    bVar16 = false;
    uVar9 = *in_stack_00000030;
    uVar6 = 0x1f;
    uVar14 = 0x1f;
    uStack_56 = uVar9;
    iVar1 = fcn.00010500(0x7d03,&uStack_53,iVar2);
    if (-1 < iVar1) {
        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
        iVar1 = fcn.00010500(0x7905,&uStack_54,iVar2);
        if (-1 < iVar1) {
            iVar2 = CONCAT71(iVar2 >> 8,uVar12);
            iVar1 = fcn.00010500(0x7902,&cStack_52,iVar2);
            if (-1 < iVar1) {
                if (0x1f < arg2) {
                    do {
                        uVar13 = uVar14 + uVar13;
                        uStack_4e = uVar13 + 6;
                        uVar10 = uStack_4e;
                        pcVar3 = uVar13 + arg1;
                        uStack_4c = CONCAT11(pcVar3[4],pcVar3[5]);
                        if (*pcVar3 == '\0') {
                            if (!bVar16) {
                                return -0x7fffffffffffffec;
                            }
                            break;
                        }
                        uVar14 = uVar10;
                        if ((cVar11 == *pcVar3) && (pcVar3[1] == -0xf)) {
                            if (cVar11 == '\x02') {
                                iVar2 = CONCAT71(iVar2 >> 8,uStack_54);
                                if (pcVar3[3] <= uStack_54) goto code_r0x00010cdf;
                            }
                            if (((cVar11 != '\x01') || (uStack_53 < pcVar3[3])) && (cStack_52 == pcVar3[2])) {
                                uVar15 = uStack_4e;
                                uStack_48 = uStack_4c + uStack_4e;
                                if (uStack_4e < uStack_48) {
                                    do {
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        puVar5 = &uStack_58;
                                        iVar1 = fcn.00010500(0x7df0,puVar5,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        uVar6 = CONCAT71(puVar5 >> 8,uStack_58) & 0xfffffffffffffff8;
                                        uStack_58 = uVar6;
                                        iVar1 = fcn.000105b4(0x7df0,uVar6,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        puVar5 = &uStack_58;
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        iVar1 = fcn.00010500(0x7df7,puVar5,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        uVar6 = CONCAT71(puVar5 >> 8,uStack_58) | 0x40;
                                        uStack_58 = uVar6;
                                        iVar1 = fcn.000105b4(0x7df7,uVar6,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        puVar5 = &uStack_58;
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        iVar1 = fcn.00010500(0x7df6,puVar5,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        uVar6 = CONCAT71(puVar5 >> 8,uStack_58) & 0xffffffffffffff80;
                                        uStack_58 = uVar6;
                                        iVar1 = fcn.000105b4(0x7df6,uVar6,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        puVar5 = &uStack_58;
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        iVar1 = fcn.00010500(0x7df5,puVar5,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        uVar6 = CONCAT71(puVar5 >> 8,uStack_58) & 0xffffffffffffff88 | 8;
                                        uStack_58 = uVar6;
                                        iVar1 = fcn.000105b4(0x7df5,uVar6,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        puVar5 = &uStack_58;
                                        iVar1 = fcn.00010500(0x7a32,puVar5,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                        iVar1 = fcn.000105b4(0x7a32,CONCAT71(puVar5 >> 8,uStack_58),iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        uVar7 = 0;
                                        do {
                                            iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                                            iVar1 = fcn.00010500(0x7dfb,&uStack_51,iVar2);
                                            if ((uStack_51 & 1) == 0) {
                                                iVar1 = 0;
                                                break;
                                            }
                                            (**(*0x13238 + 0xf8))(10000);
                                            uVar7 = uVar7 + 1;
                                        } while (uVar7 < 100);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        uVar13 = uVar10;
                                        iVar1 = uVar10 + 3;
                                        uVar7 = (*(uVar10 + 1 + arg1) & 0x1f) + 1;
                                        uVar9 = uVar13;
                                        while (iVar2 = CONCAT71(iVar2 >> 8,uVar12), uVar10 < iVar1 + uVar7) {
                                            iVar2 = fcn.000105b4((uVar9 - uVar15) + 0x7dcd,
                                                                 CONCAT71(arg1 >> 8,*(uVar10 + arg1)),iVar2);
                                            if (uVar9 == uVar13) {
                                                *(uStack_56 + in_stack_00000028) = *(uVar10 + arg1) | 0x80;
                                            }
                                            else {
                                                *(uStack_56 + in_stack_00000028) = *(uVar10 + arg1);
                                            }
                                            if (iVar2 < 0) {
                                                return iVar2;
                                            }
                                            uVar9 = uVar9 + 1;
                                            uStack_56 = uStack_56 + 1;
                                            uVar10 = uVar9;
                                        }
                                        puVar5 = &uStack_58;
                                        iVar1 = fcn.00010500(0x7df1,puVar5,iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        iVar1 = CONCAT71(iVar2 >> 8,uVar12);
                                        uVar6 = CONCAT71(puVar5 >> 8,uStack_58) | 1;
                                        uVar4 = 0x7df1;
                                        uStack_58 = uVar6;
                                        iVar2 = fcn.000105b4(0x7df1,uVar6,iVar1);
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        iVar2 = fcn.0001065c(CONCAT71(uVar4 >> 8,uVar12));
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                        puVar5 = &uStack_58;
                                        iVar2 = fcn.00010500(0x7df1,puVar5,iVar1);
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                        uVar6 = CONCAT71(puVar5 >> 8,uStack_58) | 2;
                                        uStack_58 = uVar6;
                                        iVar2 = fcn.000105b4(0x7df1,uVar6,iVar1);
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        uVar8 = 0;
                                        do {
                                            iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                            iVar2 = fcn.00010500(0x7dfb,auStack_50,iVar1);
                                            if ((auStack_50[0] & 1) == 0) {
                                                iVar2 = 0;
                                                break;
                                            }
                                            (**(*0x13238 + 0xf8))(10000);
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 < 100);
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        uVar8 = 0;
                                        do {
                                            iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                            iVar2 = fcn.00010500(0x7a32,&uStack_57,iVar1);
                                            bVar16 = iVar2 < 0;
                                            if (iVar2 != 0) goto code_r0x00010c81;
                                            if ((uStack_57 & 1) != 0) break;
                                            (**(*0x13238 + 0xf8))(1000);
                                            uVar8 = uVar8 + 1;
                                        } while (uVar8 < 100);
                                        iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                        arg2_00 = &uStack_57;
                                        iVar2 = fcn.00010500(0x7a32,arg2_00,iVar1);
                                        bVar16 = iVar2 < 0;
                                        if (iVar2 == 0) {
                                            iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                            uVar6 = CONCAT71(arg2_00 >> 8,uStack_57) | 1;
                                            uStack_57 = uVar6;
                                            iVar2 = fcn.000105b4(0x7a32,uVar6,iVar1);
                                            bVar16 = iVar2 < 0;
                                        }
code_r0x00010c81:
                                        if (bVar16) {
                                            return iVar2;
                                        }
                                        iVar1 = CONCAT71(iVar1 >> 8,uVar12);
                                        puVar5 = &uStack_58;
                                        iVar2 = fcn.00010500(0x7a32,puVar5,iVar1);
                                        if (iVar2 < 0) {
                                            return iVar2;
                                        }
                                        iVar2 = CONCAT71(iVar1 >> 8,uVar12);
                                        iVar1 = fcn.000105b4(0x7a32,CONCAT71(puVar5 >> 8,uStack_58),iVar2);
                                        if (iVar1 < 0) {
                                            return iVar1;
                                        }
                                        uVar13 = uVar13 + uVar7 + 3;
                                        uVar10 = uVar13;
                                        uVar15 = uVar13;
                                    } while (uVar15 < uStack_48);
                                    uVar14 = uStack_4e;
                                }
                                bVar16 = true;
                                uVar6 = uVar10;
                            }
                        }
code_r0x00010cdf:
                        uVar13 = uStack_4c;
                    } while (uVar6 < arg2);
                    uVar9 = uStack_56;
                }
                puVar5 = &uStack_58;
                iVar2 = CONCAT71(iVar2 >> 8,uVar12);
                iVar1 = fcn.00010500(0x7df1,puVar5,iVar2);
                if (-1 < iVar1) {
                    iVar1 = fcn.000105b4(0x7df1,CONCAT71(puVar5 >> 8,uStack_58) & 0xfffffffffffffffe,
                                         CONCAT71(iVar2 >> 8,uVar12));
                    *in_stack_00000030 = uVar9;
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00010e70 @ 0x10e70 */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.00010e70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint8_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint64_t arg2_00;
    uint16_t uVar5;
    uint16_t uVar6;
    int64_t iVar7;
    uchar uVar8;
    uint8_t auStack_48 [8];
    int64_t iStack_40;
    ulong auStack_38 [2];
    int64_t var_20h;
    int64_t var_bp_18h;
    int64_t var_bp_10h;
    
    uVar8 = arg4;
    uVar6 = arg3;
    iVar3 = (**(*0x13238 + 0x40))(4,0x1000,&iStack_40);
    uVar5 = 0;
    if (-1 < iVar3) {
        uVar4 = 0;
        (**(*0x13238 + 0x168))(iStack_40,0x1000,0);
        iVar7 = CONCAT71(uVar4 >> 8,uVar8);
        iVar3 = fcn.00010500(0x7dff,auStack_48,iVar7);
        uVar2 = auStack_48[0];
        if (-1 < iVar3) {
            iVar7 = CONCAT71(iVar7 >> 8,uVar8);
            iVar3 = fcn.00010500(0x7dfe,auStack_48,iVar7);
            if (-1 < iVar3) {
                arg2_00 = uVar6 >> 8;
                iVar7 = CONCAT71(iVar7 >> 8,uVar8);
                uVar1 = CONCAT11(auStack_48[0],uVar2);
                auStack_48[0] = auStack_48[0] & 0x1f;
                iVar3 = fcn.000105b4(0x7dc9,arg2_00,iVar7);
                if (-1 < iVar3) {
                    iVar7 = CONCAT71(iVar7 >> 8,uVar8);
                    uVar4 = 0x7dca;
                    iVar3 = fcn.000105b4(0x7dca,CONCAT71(arg2_00 >> 8,arg3),iVar7);
                    if ((-1 < iVar3) && (iVar3 = fcn.0001065c(CONCAT71(uVar4 >> 8,uVar8)), -1 < iVar3)) {
                        (**(*0x13238 + 0xf8))(0x140);
                        for (; uVar6 < (uVar1 & 0x1fff); uVar6 = uVar6 + 1) {
                            iVar7 = CONCAT71(iVar7 >> 8,uVar8);
                            iVar3 = fcn.00010500(0x7dcc,auStack_48,iVar7);
                            if (iVar3 < 0) {
                                return iVar3;
                            }
                            *(uVar5 + iStack_40) = auStack_48[0];
                            uVar5 = uVar5 + 1;
                            (**(*0x13238 + 0xf8))(1);
                        }
                        iVar3 = (**(*0x13238 + 0x40))(4,uVar5,auStack_38);
                        if (-1 < iVar3) {
                            (**(*0x13238 + 0x168))(auStack_38[0],uVar5,0);
                            (**(*0x13238 + 0x160))(auStack_38[0],iStack_40,uVar5);
                            (**(*0x13238 + 0x48))(iStack_40);
                            *arg1 = auStack_38[0];
                            *arg2 = uVar5;
                        }
                    }
                }
            }
        }
    }
    return iVar3;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    uint in_register_0000000c;
    char *pcVar3;
    char *pcVar4;
    char *pcVar5;
    
    //[00] -r-x section size 10816 named .text
    pcVar3 = CONCAT44(in_register_0000000c,arg1);
    do {
        pcVar4 = pcVar3;
        pcVar5 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar5 = arg2 + 1;
        pcVar4 = pcVar3 + 1;
        cVar2 = *arg2;
        cVar1 = *pcVar3;
        pcVar3 = pcVar4;
        arg2 = pcVar5;
    } while (cVar1 == cVar2);
    return pcVar4[-1] - pcVar5[-1];
}


/* fcn.00011054 @ 0x11054 */

void fcn.00011054(ulong param_1,ulong param_2,ulong param_3)

{
    ulong noname_1;
    unkbyte7 Var1;
    uchar auStack_28 [16];
    uchar auStack_18 [24];
    
    Var1 = param_3 >> 8;
    fcn.000102a0(auStack_18,0x10);
    noname_1 = 0x10;
    fcn.000102a0(auStack_28,0x10);
    fcn.000118fc(0xfe000000,noname_1,CONCAT71(Var1,0xf),0);
    return;
}


/* fcn.000106d8 @ 0x106d8 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.000106d8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    uchar auStackX_20 [8];
    int64_t var_38h;
    int64_t iStack_48;
    int64_t iStack_40;
    int64_t var_30h;
    int64_t var_28h;
    uint32_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iStack_48 = 0;
    iStack_40 = 0;
    var_28h = 0;
    _var_20h = 0;
    iVar1 = (**(*0x13238 + 0x138))(2,0x12cf0,0,&var_30h,&iStack_48);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (var_30h != 0) {
            do {
                iVar1 = (**(*0x13238 + 0x98))(*(iStack_48 + uVar2 * 8),0x12cf0,&iStack_40);
                if ((-1 < iVar1) &&
                   (iVar1 = (**(iStack_40 + 0x18))(iStack_40,arg3,0x19,0,&var_28h,&var_20h,auStackX_20),
                   iVar1 == 0)) {
                    *arg1 = var_28h;
                    *arg2 = _var_20h;
                    break;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < var_30h);
        }
        (**(*0x13238 + 0x48))(iStack_48);
    }
    return iVar1;
}


/* fcn.00011828 @ 0x11828 */

void fcn.00011828(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    uint64_t uVar3;
    uint32_t *arg1_00;
    int64_t iVar5;
    int64_t iVar4;
    char cStackY_108;
    char acStackY_107 [47];
    int64_t in_stack_ffffffffffffff28;
    int8_t in_stack_ffffffffffffff30;
    
    fcn.00011a24(&cStackY_108,0x100,0,arg1,in_stack_ffffffffffffff28,in_stack_ffffffffffffff30);
    uVar3 = fcn.00010340();
    fcn.00010330();
    out(0x72,3);
    cVar2 = in(0x73);
    if ((uVar3 >> 9 & 1) != 0) {
        fcn.00010320();
    }
    if ((cVar2 == '\x01') && (iVar5 = 0, cStackY_108 != '\0')) {
        do {
            iVar4 = iVar5 + 1;
            pcVar1 = acStackY_107 + iVar5;
            iVar5 = iVar4;
        } while (*pcVar1 != '\0');
        if ((((iVar4 != 0) && (*0xfe1000e8 != 0xff)) && ((*0xfe1000e8 & 1) != 0)) &&
           (((*0xfe1000e8 >> 1 & 3) - 2 < 2 && (arg1_00 = fcn.000127f4(), arg1_00 != NULL)))) {
            fcn.000128d4(arg1_00);
        }
    }
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.00011a24 @ 0x11a24 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.00011a24(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

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
        if ((arg3 & 0x2000U) == 0) goto code_r0x00011a7f;
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
code_r0x00011a7f:
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
        uVar5 = fcn.000127d0(arg4);
        if (uVar18 < uVar5) {
            return 0;
        }
        iVar13 = 1;
        uStack_90 = 0xff;
    }
    else {
        uVar5 = fcn.000127a4(arg4);
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
            pcVar9 = 0x12e44;
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
code_r0x00011e09:
                puVar22 = arg4 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puVar22[1] << 8;
                }
                uStack_a8 = (iVar4 | *puVar22) & uStack_90;
                if (uStack_a8 == 10) {
                    pcVar9 = 0x12e44;
                }
                else {
                    pcVar9 = 0x12e48;
                    puVar22 = arg4;
                }
            }
            else {
                puStackX_20 = arg4;
                if (uStack_a8 == 0x25) {
                    puVar14 = puStack_b0;
                    puVar19 = in_stack_00000028;
code_r0x00011bc8:
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
                            goto code_r0x00011d6b;
                        }
                        if (uStack_a8 == 0x30) {
                            if ((uVar5 & 0x800) == 0) {
                                uVar5 = uVar5 | 0x20;
                                uStackX_18 = uVar5;
                            }
                        }
                        else {
                            if (uStack_a8 < 0x31) goto code_r0x00011d82;
                            if (0x39 < uStack_a8) {
                                if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                                    uVar5 = uVar5 | 0x10;
                                    goto code_r0x00011d6b;
                                }
                                goto code_r0x00011d82;
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
code_r0x00011d6b:
                        arg4 = puStackX_20;
                        uStackX_18 = uVar5;
                        goto code_r0x00011bc8;
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
                                goto code_r0x00011bc8;
                            }
                            if (uStack_a8 == 0x2b) {
                                uVar5 = uVar5 | 2;
                            }
                            else {
                                if (uStack_a8 != 0x2c) goto code_r0x00011d82;
                                uVar5 = uVar5 | 8;
                            }
                        }
                        goto code_r0x00011d6b;
                    }
                    uVar18 = 0;
                    uStack_b8 = 0;
                    puStackX_20 = arg4;
code_r0x00011d82:
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
                                fcn.00012750(&var_68h_2,0x26,0,0x12dd8);
                                pcVar9 = &var_68h_2;
                                uVar6 = uStack_c0;
                                cVar15 = cStack0000000000000030;
                            }
                            uVar18 = uStack_b8;
                        }
                        else {
                            if (uStack_a8 != 10) {
                                arg4 = puStackX_20;
                                if (uStack_a8 == 0xd) goto code_r0x00011e09;
                                if (uStack_a8 == 0x53) goto code_r0x00012018;
                                if (uStack_a8 == 0x58) goto code_r0x0001210e;
                                if (uStack_a8 == 0x61) goto code_r0x00012021;
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
                                    goto code_r0x00011bad;
                                }
                                if (uStack_a8 != 100) goto code_r0x00011ba9;
                                goto code_r0x00012125;
                            }
                            puVar22 = puStackX_20 + var_78h;
                            pcVar9 = 0x12e44;
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
                        goto code_r0x00012320;
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
                                    iVar13 = 0x12edb;
                                    goto code_r0x000120d5;
                                }
                            }
                            else if (uVar11 < 6) {
                                iVar13 = uVar11 * 0x19;
                                pcVar9 = "Success";
code_r0x000120d5:
                                pcVar9 = pcVar9 + iVar13;
                                if (pcVar9 != &var_68h_2) goto code_r0x00012320;
                            }
                            fcn.00012750(&var_68h_2,0x26,0,0x12e3c);
                        }
                        else {
                            if (uStack_a8 == 0x73) {
code_r0x00012018:
                                uVar5 = uVar5 | 0x400;
                                uStackX_18 = uVar5;
code_r0x00012021:
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
                                goto code_r0x00012320;
                            }
                            if (uStack_a8 != 0x74) {
                                if (uStack_a8 != 0x75) {
                                    if (uStack_a8 != 0x78) goto code_r0x00011ba9;
                                    goto code_r0x00012112;
                                }
                                goto code_r0x00012117;
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
                                goto code_r0x00012320;
                            }
                            fcn.00012750(&var_68h_2,0x26,0,0x12e20);
                            pcVar9 = &var_68h_2;
                        }
                        uVar6 = uStack_c0;
                        goto code_r0x00012320;
                    }
                    uVar5 = uVar5 & 0xffffffffffffffd9 | 0x10;
code_r0x0001210e:
                    uVar5 = uVar5 | 0x20;
code_r0x00012112:
                    uVar5 = uVar5 | 0x80;
code_r0x00012117:
                    if (-1 < uVar5) {
                        uVar5 = uVar5 & 0xfffffffffffffffd | 0x4000;
                    }
code_r0x00012125:
                    if ((uVar5 & 0x10) == 0) {
                        if (puVar14 != NULL) {
                            uVar6 = *puVar14;
                            goto code_r0x00012167;
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
code_r0x00012167:
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
code_r0x000121ef:
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
                            if ((uVar5 & 0x4010) == 0x4000) goto code_r0x000121ef;
                        }
                    }
                    var_68h_2._0_1_ = 0;
                    piVar21 = &var_68h_2;
                    uVar11 = uVar6;
                    do {
                        uVar7 = uVar11 / uVar17;
                        piVar21 = piVar21 + 1;
                        *piVar21 = "0123456789ABCDEF\b\x04\x02"[uVar11 % uVar17];
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
code_r0x00011ba9:
                    pcVar9 = &uStack_a8;
code_r0x00011bad:
                    uVar5 = uVar5 | 0x400;
                    uStackX_18 = uVar5;
                    puVar22 = puStackX_20;
                }
            }
        }
code_r0x00012320:
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
                arg1 = fcn.000119f0(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
            }
        }
        uVar7 = uVar20;
        if (cVar15 == '\0') {
            uStack_d0 = uStack_d0 + (uVar18 - uVar6) * uVar20;
            if (((uVar5 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.000119f0(arg1,pcVar16,uVar18 - uVar6,(uVar17 & 0x2000) + 0x20);
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
                arg1 = fcn.000119f0(arg1,pcStack_d8,uVar18 - uVar6,(uVar17 & 0x2000) + 0x30);
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
                arg1 = fcn.000119f0(arg1,pcStack_d8,uStack_a0 - uVar18,0x20);
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


/* fcn.000127f4 @ 0x127f4 */

uint64_t fcn.000127f4(ulong param_1)

{
    int64_t iVar1;
    int64_t *arg1;
    int64_t iVar2;
    uint uVar3;
    uint uStack_18;
    uint uStack_14;
    
    arg1 = *0x13258;
    if (*0x13258 == NULL) {
        uStack_18 = 0x48;
        uStack_14 = 0xe;
        iVar1 = fcn.00012774(param_1,0x68);
        uVar3 = fcn.00012a08(iVar1);
        arg1 = fcn.00012774(uVar3,0x78);
        if (arg1 == NULL) {
            arg1 = 0x13260;
        }
        else {
            iVar2 = 0x13360;
            if (iVar1 != 0) {
                iVar2 = iVar1;
            }
            if (arg1 != 0x132e0) {
                fcn.000102c0(arg1,0x132e0,0x78);
            }
            *(arg1 + 1) = *(arg1 + 1) | 1;
            *(arg1 + 4) = 0;
            *arg1 = iVar2;
            if (*(iVar2 + 8) != NULL) {
                (**(iVar2 + 8))(arg1,&uStack_18);
            }
        }
        *0x13258 = arg1;
        *(arg1 + 0xc) = *(arg1 + 0xc) & 0xffff0fff | 0xff0000;
        iVar1 = *0x12d38;
        arg1[2] = *0x12d30;
        arg1[3] = iVar1;
    }
    return -(arg1[0xe] != 0) & arg1;
}


/* fcn.000128d4 @ 0x128d4 */

//WARNING: Variable defined which should be unmapped: var_5h
//WARNING: Variable defined which should be unmapped: var_1fh

void fcn.000128d4(uint32_t *arg1)

{
    char cVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint *puVar4;
    int32_t var_bh;
    int16_t var_1fh;
    int8_t var_27h;
    int16_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint uStack_88;
    int16_t aiStack_82 [21];
    uint32_t uStack_58;
    ulong uStack_54;
    ulong uStack_4c;
    uchar auStack_44 [3];
    int64_t var_39h;
    char acStack_28 [23];
    int32_t var_9h;
    int64_t var_5h;
    
    if (arg1 != 0x13260) {
        puVar4 = &uStack_88;
        uVar2 = arg1[3] & 0xffff80;
        uStack_58 = uVar2 | 0x1000042;
        if ((arg1[3] & 0xff0000) == 0xff0000) {
            uStack_54 = *(arg1 + 4);
            uStack_4c = *(arg1 + 6);
            puVar4 = &stack0xffffffffffffff7c;
            uStack_88 = *0x131c0;
        }
        if (uStack_58 < '\0') {
            _auStack_44 = arg1[8];
            arg1[8] = _auStack_44 + 1;
            *puVar4 = *0x131c4;
            puVar4 = puVar4 + 1;
        }
        if (in_stack_00000028 == 0) {
            uVar3 = 0;
            do {
                cVar1 = *(uVar3 + in_stack_00000030);
                acStack_28[uVar3] = cVar1;
                if (cVar1 == '\0') break;
                uVar3 = uVar3 + 1;
            } while (uVar3 < 0x18);
            if ((uVar3 < 0x18) && (0x18 - uVar3 != 0)) {
                fcn.000102a0(acStack_28 + uVar3,0x18 - uVar3);
            }
            *puVar4 = *0x131d8;
        }
        else {
            uStack_58 = uVar2 | 0x1000242;
            *puVar4 = *0x131d4;
            puVar4[1] = *0x131dc;
            *(puVar4 + 6) = in_stack_00000028;
            puVar4 = puVar4 + 1;
        }
        puVar4[1] = *0x13200;
        (**(*arg1 + 0x18))(arg1,&uStack_88,&uStack_58);
    }
    return;
}


/* fcn.000117c8 @ 0x117c8 */

void fcn.000117c8(int64_t arg1)

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
            fcn.00010300();
        }
        iVar4 = uVar3;
        uVar3 = iVar4 - 1;
    } while (iVar4 != 0);
    return;
}


/* fcn.000127a4 @ 0x127a4 */

uint64_t fcn.000127a4(uint32_t arg1)

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


/* fcn.000127d0 @ 0x127d0 */

uint64_t fcn.000127d0(uint32_t arg1)

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


/* fcn.00012750 @ 0x12750 */

void fcn.00012750(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.00011a24(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.000119f0 @ 0x119f0 */

uchar * fcn.000119f0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

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


/* fcn.00012774 @ 0x12774 */

ulong fcn.00012774(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x13238 + 0x40))(6,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00012a08 @ 0x12a08 */

void fcn.00012a08(int64_t arg1)

{
    uint *arg1_00;
    
    arg1_00 = 0x13360;
    if (arg1 != 0) {
        arg1_00 = arg1;
    }
    if (arg1_00 != 0x132e0) {
        fcn.000102c0(arg1_00,0x132e0,0x68);
    }
    arg1_00[1] = 0xffffffff;
    *(arg1_00 + 6) = 0x12b40;
    *arg1_00 = 0x10900;
    *(arg1_00 + 0x18) = 0;
    *(arg1_00 + 2) = 0x12a5c;
    *(arg1_00 + 4) = 0x12a84;
    *(arg1_00 + 8) = 0x12b04;
    *(arg1_00 + 10) = 0x12afc;
    *(arg1_00 + 0xc) = 0x12b0c;
    *(arg1_00 + 0xe) = 0x12b14;
    *(arg1_00 + 0x10) = 0x12b1c;
    *(arg1_00 + 0x12) = 0x12b24;
    *(arg1_00 + 0x14) = 0x12b38;
    *(arg1_00 + 0x16) = 0x12b2c;
    return;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


