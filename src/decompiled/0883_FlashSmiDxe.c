// decompiled by r2ghidra: 0883_FlashSmiDxe.pe32
// functions: 18

/* entry0 @ 0x11114 */

int64_t entry0(int64_t param_1,int64_t param_2)

{
    int64_t iVar1;
    
    fcn.00011158(param_1,param_2);
    iVar1 = fcn.00011ee0();
    if ((*(iVar1 + 0xc) == 0x12) || (*(iVar1 + 0xc) == 0x20)) {
        iVar1 = fcn.00011c84(param_1,param_2);
        if (-1 < iVar1) {
            return iVar1;
        }
    }
    else {
        iVar1 = -0x7ffffffffffffffd;
    }
    fcn.00011428();
    return iVar1;
}


/* fcn.00011158 @ 0x11158 */

void fcn.00011158(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint16_t *puVar5;
    int64_t iVar6;
    uint32_t uVar7;
    uint64_t noname_0;
    int64_t iStackX_8;
    
    *0x13128 = *(arg2 + 0x58);
    *0x13120 = *(arg2 + 0x60);
    *0x13118 = arg2;
    *0x13130 = *0x13128;
    *0x13148 = *0x13120;
    iStackX_8 = arg1;
    (**(*0x13120 + 0x50))(0x201,8,0x11e50,0,0x13138);
    (**(*0x13148 + 0x50))(0x60000202,8,0x11e5c,0,0x13140);
    fcn.00011ee0();
    puVar5 = fcn.00011ee0();
    do {
        uVar1 = *puVar5;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar5 = NULL;
code_r0x0001121a:
            if (puVar5 == NULL) {
                cVar2 = fcn.00012224();
                uVar3 = in(0x1808);
                fcn.000110b0(noname_0,0x1808);
                while( true ) {
                    iVar4 = in(0x1808);
                    uVar7 = ((uVar3 & 0xffffff) + 0x16b) - iVar4;
                    if ((uVar7 >> 0x17 & 1) != 0) break;
                    func_0x000110a0();
                }
                fcn.000110b0(uVar7,0x1808);
                if (cVar2 == '\0') {
                    fcn.000110d0();
                }
                else {
                    fcn.000110c0();
                }
code_r0x00011279:
                *0x131d0 = *0x13128;
                (**(*0x13120 + 0x50))(0x60000202,0x10,0x11f50,0,0x131c8);
                (**(*0x13120 + 0x50))(0x201,0x10,0x11f4c,0,0x131d8);
                fcn.00011f64();
                (**(*0x13120 + 0x170))(0x200,0x10,0x11fc4,0,0x13070,0x131b8);
                (**(*0x13120 + 0x170))(0x200,0x10,0x11fec,0,0x13050,0x131c0);
                iVar6 = (**(*0x13120 + 0x140))(0x13060,0,0x13198);
                if ((iVar6 < 0) ||
                   (((***0x13198)(*0x13198,0x13188), *0x13188 == '\0' ||
                    (iVar6 = (*(*0x13198)[1])(*0x13198,0x131a8), iVar6 < 0)))) {
                    (**(*0x13120 + 0x50))(0x201,8,0x121f4,0,0x13180);
                    (**(*0x13120 + 0x50))(0x60000202,8,0x12210,0,0x13170);
                }
                else {
                    iStackX_8 = 0;
                    (**(*0x131a8 + 0xc0))(0x13030,0x121d8,&iStackX_8);
                }
                return;
            }
            if ((*0x130b0 == *(puVar5 + 4)) && (*0x130b8 == *(puVar5 + 8))) goto code_r0x00011279;
        }
        else if (uVar1 == 4) goto code_r0x0001121a;
        puVar5 = puVar5 + puVar5[1];
    } while( true );
}


/* fcn.00011ee0 @ 0x11ee0 */

int64_t fcn.00011ee0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x13158 == 0) {
        *0x13158 = 0;
        if (*(*0x13118 + 0x68) != 0) {
            piVar2 = *(*0x13118 + 0x70);
            do {
                if ((*0x13040 == *piVar2) && (*0x13048 == piVar2[1])) {
                    *0x13158 = (*(*0x13118 + 0x70))[uVar1 * 3 + 2];
                    return *0x13158;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x13118 + 0x68));
        }
    }
    return *0x13158;
}


/* fcn.00011c84 @ 0x11c84 */

int64_t fcn.00011c84(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t in_R9;
    int64_t arg3;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    
    if (*0x13190 != NULL) {
        return -0x7ffffffffffffff7;
    }
    str._CS_[4] = 0;
    *0x13190 = "_CS_";
    *0x131f8 = "_CS_";
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar1 = (**(*0x13120 + 0x40))(6,0x1000000,0x130f8);
    if (-1 < iVar1) {
        iVar2 = 0;
        iVar1 = (**(*0x13120 + 0x140))(0x13000,0,0x13110);
        if ((-1 < iVar1) || (iVar1 = fcn.00011e84(0x13000,iVar2,0x114c8,in_R9), -1 < iVar1)) {
            iVar1 = (**(*0x13120 + 0x140))(0x13080,0,0x13108);
            if (iVar1 < 0) {
                return iVar1;
            }
            iStackX_10 = 0;
            iVar1 = (**(*0x13120 + 0x40))(6,0x40);
            if (-1 < iVar1) {
                fcn.00011040(iStackX_10,0x40,0);
                *0x130f0 = iStackX_10;
                *0x13100 = iStackX_10 + 0x18;
                if (iStackX_10 != 0x130a0) {
                    section..text(iStackX_10,0x130a0,0x10);
                }
                arg3 = 0;
                *(*0x130f0 + 0x10) = 0x28;
                iVar2 = 8;
                iVar1 = (**(*0x13120 + 0x50))(0x60000202,8,0x11c54,0,&iStackX_8);
                if ((-1 < iVar1) && (iVar1 = fcn.00011e84(0x13090,iVar2,0x11ab8,arg3), -1 < iVar1)) {
                    (**(*0x13120 + 0x170))(0x200,8,0x11b84,0,0x13020,auStackX_18);
                }
            }
        }
    }
    return 0;
}


/* fcn.00011428 @ 0x11428 */

void fcn.00011428(void)

{
    if ((*0x13188 == '\0') && (*0x13120 != 0)) {
        (**(*0x13120 + 0x70))(*0x13180);
        (**(*0x13120 + 0x70))(*0x13170);
    }
    (**(*0x13120 + 0x70))(*0x131b8);
    (**(*0x13120 + 0x70))(*0x131c0);
    (**(*0x13120 + 0x70))(*0x131c8);
    (**(*0x13120 + 0x70))(*0x131d8);
    (**(*0x13148 + 0x70))(*0x13138);
    //WARNING: Could not recover jumptable at 0x000114c3. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x13148 + 0x70))(*0x13140);
    return;
}


/* fcn.00012224 @ 0x12224 */

uint8_t fcn.00012224(void)

{
    unkuint7 extraout_RAX;
    
    fcn.000110e0();
    fcn.000110d0();
    return (extraout_RAX & 0xfffffe) >> 1 & 1;
}


/* fcn.000110e0 @ 0x110e0 */

uint64_t fcn.000110e0(void)

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


/* fcn.000110d0 @ 0x110d0 */

void fcn.000110d0(void)

{
    return;
}


/* fcn.000110b0 @ 0x110b0 */

uint64_t fcn.000110b0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000110a2 @ 0x110a2 */

void fcn.000110a2(void)

{
    return;
}


/* fcn.000110c0 @ 0x110c0 */

void fcn.000110c0(void)

{
    return;
}


/* fcn.00011f64 @ 0x11f64 */

void fcn.00011f64(void)

{
    int64_t iVar1;
    
    if ((((*0x13168 == 0) && (*0x13160 == '\0')) && (*0x13120 != 0)) && (*(*0x13120 + 0x140) != NULL)) {
        iVar1 = (**(*0x13120 + 0x140))(0x13010,0,0x13168);
        if (iVar1 < 0) {
            *0x13168 = 0;
        }
    }
    return;
}


/* fcn.00012004 @ 0x12004 */

ulong fcn.00012004(int64_t arg1)

{
    uint8_t uVar1;
    int *piVar2;
    uchar uVar3;
    uchar uVar4;
    uint32_t uVar5;
    uint64_t uStackX_8;
    
    piVar2 = *0x131f8;
    if ((*0x131f8 == NULL) || (**0x131f8 != 0x5f53435f)) {
        return 0x8000000000000002;
    }
    if ((*0x131f8)[1] != '\0') {
        return 0x800000000000000f;
    }
    uVar3 = in(0x21);
    uVar4 = in(0xa1);
    uVar5 = in(0x1830);
    if (*0x131a0 != '\0') {
        if ((uVar5 & 1) != 0) {
            *0x131a0 = '\0';
        }
        if (*0x131a0 != '\0') {
            goto code_r0x000120a2;
        }
    }
    *0x131a0 = '\x01';
    *0x131a1 = uVar5 & 1;
code_r0x000120a2:
    uVar1 = *0x131a1;
    out(0x21,0xff);
    out(0xa1,0xff);
    uVar5 = in(0x1830);
    out(0x1830,uVar5 & 0xfffffffc);
    if (*0x13178 == '\0') {
        *0x131b0 = *(*0x130c0 + 0x10);
        if ((*0x131b0 & 1) != 0) {
            uStackX_8 = *0x131b0 & 0xfffffffffffffffe;
            *(*0x130c0 + 0x10) = uStackX_8;
        }
    }
    *(piVar2 + 1) = 1;
    *(piVar2 + 6) = uVar3;
    *(piVar2 + 7) = uVar4;
    *(piVar2 + 5) = uVar1;
    return 0;
}


/* fcn.00011040 @ 0x11040 */

int64_t fcn.00011040(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000114f8 @ 0x114f8 */

ulong fcn.000114f8(void)

{
    ulong uVar1;
    ulong auStackX_8 [4];
    
    if ((*0x13110 == NULL) || (*0x130f0 == 0)) {
        uVar1 = 0x8000000000000003;
    }
    else {
        auStackX_8[0] = 0x40;
        uVar1 = (***0x13110)(*0x13110,*0x130f0,auStackX_8);
    }
    return uVar1;
}


/* fcn.00012124 @ 0x12124 */

ulong fcn.00012124(int64_t arg1)

{
    char *pcVar1;
    ushort uVar2;
    uint32_t uVar3;
    uchar uStackX_e;
    uchar uStackX_f;
    
    if ((*0x131f8 != NULL) && (**0x131f8 == 0x5f53435f)) {
        if ((*0x131f8)[1] == '\0') {
            return 0x8000000000000013;
        }
        uVar2 = *(*0x131f8 + 6);
        pcVar1 = *0x131f8 + 5;
        *(*0x131f8 + 1) = 0;
        if (*pcVar1 != '\0') {
            uVar3 = in(0x1830);
            out(0x1830,uVar3 | 2);
            uVar3 = in(0x1830);
            out(0x1830,uVar3 | 1);
        }
        if ((*0x13178 == '\0') && (((*0x131b0 ^ *(*0x130c0 + 0x10)) & 1) != 0)) {
            *(*0x130c0 + 0x10) = *0x131b0;
        }
        uStackX_e = uVar2;
        out(0x21,uStackX_e);
        uStackX_f = uVar2 >> 8;
        out(0xa1,uStackX_f);
        return 0;
    }
    return 0x8000000000000002;
}


/* fcn.00011e84 @ 0x11e84 */

void fcn.00011e84(int64_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    int64_t aiStackX_10 [2];
    ulong ***pppuStackX_20;
    
    aiStackX_10[0] = arg2;
    pppuStackX_20 = arg3;
    (**(*0x13120 + 0x50))(0x200,8,noname_2,0,aiStackX_10);
    pppuStackX_20 = &pppuStackX_20;
    (**(*0x13120 + 0xa8))(arg1,aiStackX_10[0],&pppuStackX_20);
    return;
}


/* section..text @ 0x11000 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 8192 named .text
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


