// decompiled by r2ghidra: 0977_AmiI2cHid.pe32
// functions: 24

/* entry0 @ 0x10384 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.000103a0(arg1,in_RDX);
    fcn.00010468(arg1,in_RDX);
    return;
}


/* fcn.000103a0 @ 0x103a0 */

void fcn.000103a0(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x12288 = *(arg1 + 0x60);
    *0x12280 = arg1;
    fcn.00011990();
    puVar4 = fcn.00011990();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103f4:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010380();
                fcn.00010370();
                uVar2 = in(0x1808);
                fcn.00010350(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010340();
                }
                fcn.00010350(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010370();
                }
                else {
                    fcn.00010360();
                }
                return;
            }
            if ((*0x11da0 == *(puVar4 + 4)) && (*0x11da8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103f4;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010468 @ 0x10468 */

void fcn.00010468(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_8;
    ulong *apuStackX_10 [3];
    ulong in_stack_ffffffffffffffd8;
    uint uVar2;
    
    uVar2 = in_stack_ffffffffffffffd8 >> 0x20;
    apuStackX_10[0] = NULL;
    iStackX_8 = 0;
    (**(*0x12288 + 0x140))(str.SQ__,0,apuStackX_10);
    if (apuStackX_10[0] != NULL) {
        (**apuStackX_10[0])(apuStackX_10[0],0x11cb0,0,1,CONCAT44(uVar2,0x2c),0x20,0x119fc,0x10768);
        iVar1 = (*apuStackX_10[0][2])(apuStackX_10[0],0x11cb0,&iStackX_8);
        if (-1 < iVar1) {
            (**(iStackX_8 + 0x40))(iStackX_8);
        }
    }
    *0x11d48 = 0;
    *0x11d40 = arg1;
    (**(*0x12288 + 0x148))(0x11d48,0x11ce0,0x11d20,0x11cf0,0x11d50,0x11ca0,0x11d68,0);
    return;
}


/* fcn.00011990 @ 0x11990 */

int64_t fcn.00011990(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x12290 == 0) {
        *0x12290 = 0;
        if (*(*0x12280 + 0x68) != 0) {
            piVar2 = *(*0x12280 + 0x70);
            do {
                if ((*0x11cd0 == *piVar2) && (*0x11cd8 == piVar2[1])) {
                    *0x12290 = (*(*0x12280 + 0x70))[uVar1 * 3 + 2];
                    return *0x12290;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12280 + 0x68));
        }
    }
    return *0x12290;
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(void)

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


/* fcn.00010370 @ 0x10370 */

void fcn.00010370(void)

{
    return;
}


/* fcn.00010350 @ 0x10350 */

uint64_t fcn.00010350(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010342 @ 0x10342 */

void fcn.00010342(void)

{
    return;
}


/* fcn.00010360 @ 0x10360 */

void fcn.00010360(void)

{
    return;
}


/* fcn.000118d0 @ 0x118d0 */

void fcn.000118d0(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.000118a0(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102e0(arg1_00,arg1);
    }
    return;
}


/* fcn.000118a0 @ 0x118a0 */

ulong fcn.000118a0(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x12288 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2)

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


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,uint32_t *arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint32_t *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 6656 named .text
    uVar5 = 0;
    puVar2 = arg2 + arg3 + -1;
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
            puVar2 = puVar2 + 2;
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


/* fcn.000118fc @ 0x118fc */

ulong fcn.000118fc(int64_t arg1,int64_t arg2)

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
code_r0x0001195c:
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
            if (*pcVar2 == *pcVar1) goto code_r0x0001195c;
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


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00011858 @ 0x11858 */

int64_t fcn.00011858(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    ulong uStack_28;
    uint uStack_20;
    uint uStack_1c;
    int64_t iStack_18;
    
    uStack_28 = 1;
    uStack_20 = 1;
    uStack_1c = arg3;
    iStack_18 = arg2;
    iVar1 = (**arg1)(arg1,0,0,&uStack_28,aiStackX_8);
    if (aiStackX_8[0] < 0) {
        iVar1 = aiStackX_8[0];
    }
    return iVar1;
}


/* fcn.00011794 @ 0x11794 */

//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00011794(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ushort auStackX_8 [4];
    int64_t var_20h;
    int64_t var_30h_2;
    uint uStack_68;
    uint32_t var_50h;
    ulong uStack_48;
    uint uStack_40;
    uint uStack_3c;
    int64_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_20h_2;
    int32_t var_18h;
    int32_t var_14h;
    int64_t var_bp_10h;
    
    auStackX_8[0] = *(*(arg1 + 0x28) + 0x34);
    uStack_40 = 0;
    uStack_48 = 2;
    uStack_3c = 2;
    var_30h = auStackX_8;
    var_20h_2 = &uStack_68;
    var_28h = 1;
    var_24h = 0x1e;
    iVar1 = (**arg1)(arg1,0,0,&uStack_48,&var_20h);
    if (-1 < var_20h) {
        if (-1 < iVar1) {
            if ((uStack_68 != 0x1e) || (uStack_68._2_2_ != 0x100)) {
                return -0x7ffffffffffffffd;
            }
            if (arg2 != &uStack_68) {
                section..text(arg2,&uStack_68,0x1e);
            }
        }
        var_20h = iVar1;
    }
    return var_20h;
}


/* fcn.00011b9c @ 0x11b9c */

uchar fcn.00011b9c(uint32_t arg1)

{
    int64_t iVar1;
    char cVar2;
    uint32_t auStackX_8 [8];
    
    auStackX_8[0] = arg1;
    cVar2 = fcn.00011b3c();
    if (((cVar2 != '\0') && (fcn.00011c44(auStackX_8), 0xe < auStackX_8[0])) &&
       (iVar1 = fcn.00011c44(auStackX_8), 7 < *(iVar1 + 0x1c0))) {
        return 1;
    }
    return 0;
}


/* fcn.00011b74 @ 0x11b74 */

bool fcn.00011b74(uint32_t arg1)

{
    unkint7 extraout_RAX;
    uint in_register_0000000c;
    uint32_t auStackX_8 [8];
    
    auStackX_8[0] = arg1;
    fcn.00011a78(CONCAT44(in_register_0000000c,arg1),auStackX_8);
    return -1 < extraout_RAX && auStackX_8[0] == 0;
}


/* fcn.00011be4 @ 0x11be4 */

uint fcn.00011be4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    uint auStackX_8 [2];
    uchar auStackX_10 [24];
    
    auStackX_10[0] = arg2;
    auStackX_8[0] = arg1;
    iVar1 = fcn.00011c44(auStackX_10);
    iVar2 = fcn.00011c44(auStackX_8);
    return *(*(iVar1 + 0x1a4) << 0x10 | 0xfd000000 | *(iVar2 + 0x1be) + 0x70 & 0xffff);
}


/* fcn.00011c44 @ 0x11c44 */

ulong fcn.00011c44(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.00011b3c();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x11dc0;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x12000;
    }
    return uVar2;
}


/* fcn.00011b00 @ 0x11b00 */

void fcn.00011b00(void)

{
    if (*0x11db0 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x11db0 = '\x05';
        }
        else {
            *0x11db0 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00011a78 @ 0x11a78 */

ulong fcn.00011a78(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    uint32_t *puVar4;
    uint32_t auStackX_8 [8];
    
    auStackX_8[0] = arg1;
    puVar4 = arg2;
    cVar1 = fcn.00011b9c(auStackX_8[0]);
    if (cVar1 == '\0') {
        uVar2 = 0x8000000000000002;
    }
    else {
        iVar3 = fcn.00011c44(auStackX_8);
        if (*(iVar3 + 0x1a6) == 0xffff) {
            *arg2 = 0;
            uVar2 = 0x8000000000000003;
        }
        else {
            *puVar4 = *(*(iVar3 + 0x1a4) << 0x10 | 0xfd000000 | *(iVar3 + 0x1a6)) >> 0x1c & 3;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.00011b3c @ 0x11b3c */

ulong fcn.00011b3c(void)

{
    char cVar1;
    
    cVar1 = fcn.00011b00();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.00011b00(), cVar1 != '\x05')) && (cVar1 = fcn.00011b00(), cVar1 != '\x06')
        ) && (cVar1 = fcn.00011b00(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


