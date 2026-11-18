// decompiled by r2ghidra: 2384_NbPei.te
// functions: 22

/* entry0 @ 0x238 */

uint __cdecl entry0(uint noname_0,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_4h;
    
    fcn.00000da6(in_ECX,&var_4h);
    (**(*arg_ch + 0x58))(arg_ch,1,0x61001,0,0,0);
    (**(*arg_ch + 0x18))(arg_ch,0xffd2d854);
    (**(*arg_ch + 0x24))(arg_ch,0xffd2d7f0);
    return 0;
}


/* fcn.00000da6 @ 0xda6 */

//WARNING: Removing unreachable block (ram,0x00000dd1)
//WARNING: Removing unreachable block (ram,0x00000dc2)
//WARNING: Removing unreachable block (ram,0x00000dca)
//WARNING: Removing unreachable block (ram,0x00000de0)

uint __cdecl fcn.00000da6(uint noname_0,int32_t arg_ch)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Version_info(1);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 0xc);
    }
    return 1;
}


/* fcn.00000bab @ 0xbab */

void __fastcall fcn.00000bab(char param_1)

{
    if (param_1 == '\0') {
        if (*0xffd2d897 == 0xff) {
            return;
        }
        *0xc0000080 = *0xffd2d897;
        *0xc0000085 = *0xffd2d896;
        *0xc0000086 = *0xffd2d895;
    }
    else {
        *0xffd2d897 = *0xc0000080;
        *0xc0000080 = *0xc0000080 | 0x30;
        *0xffd2d896 = *0xc0000085;
        *0xffd2d895 = *0xc0000086;
        *0xc0000085 = *0xc0000085 | 0x33;
        *0xc0000086 = *0xc0000086 | 0x33;
    }
    return;
}


/* fcn.00000a5c @ 0xa5c */

uint __cdecl fcn.00000a5c(int32_t arg_8h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    char cVar3;
    int in_ECX;
    uint16_t uVar4;
    int iVar5;
    int iVar6;
    
    uVar1 = *(in_ECX + 0x1e);
    iVar5 = 0;
    uVar4 = 0;
    if (uVar1 != 0) {
        uVar2 = *(in_ECX + 2);
        do {
            if (uVar2 < iVar5 + 0x24U) {
                return 0x8000000e;
            }
            iVar6 = in_ECX + 0x24 + iVar5;
            cVar3 = fcn.00000e07();
            if (cVar3 != '\0') {
                *arg_8h = iVar6;
                return 0;
            }
            iVar5 = iVar5 + *(iVar6 + 2);
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0x8000000e;
}


/* fcn.00000e68 @ 0xe68 */

uint * fcn.00000e68(uint *param_1,uchar param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    
    puVar3 = param_1;
    if (3 < param_3) {
        if ((param_1 & 3) != 0) {
            iVar2 = 4 - (param_1 & 3);
            param_3 = param_3 - iVar2;
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = param_2;
                puVar3 = puVar3 + 1;
            }
        }
        for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
            puVar3 = puVar3 + 1;
        }
        param_3 = param_3 & 3;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar3 = param_2;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.00000cf0 @ 0xcf0 */

void __fastcall fcn.00000cf0(int *param_1,uint *param_2)

{
    int iVar1;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint uVar2;
    int32_t *piVar3;
    int32_t var_cb4h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0xca9;
    *param_2 = 0x4453424e;
    var_4h = 0;
    iVar1 = (**(*param_1 + 0x20))(param_1,0xffd2d710,0,0,&var_4h);
    uVar2 = extraout_ECX;
    if (-1 < iVar1) {
        iVar1 = (**var_4h)(var_4h,0xffd2d8f8,0xffd2d898,0,&var_8h,&var_cb4h);
        uVar2 = extraout_ECX_00;
        if (-1 < iVar1) {
            piVar3 = &var_cb4h;
            goto code_r0x00000d59;
        }
    }
    piVar3 = NULL;
code_r0x00000d59:
    fcn.00000cc3(piVar3,uVar2);
    return;
}


/* fcn.00000a1e @ 0xa1e */

char fcn.00000a1e(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd2d894 == -1) {
        uVar1 = fcn.00000a0f();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd2d894 = cVar2;
    }
    return *0xffd2d894;
}


/* fcn.00000b7f @ 0xb7f */

void __cdecl fcn.00000b7f(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4,0x20,arg_8h);
    return;
}


/* fcn.00000b56 @ 0xb56 */

void fcn.00000b56(void)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),0xffd2d86c);
    return;
}


/* fcn.00000c50 @ 0xc50 */

uint __fastcall fcn.00000c50(uint32_t param_1)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    bool bVar6;
    
    uVar3 = (param_1 >> 1) + (param_1 * 2) / 0x19 + param_1 * 3;
    uVar1 = in(0x1808);
    uVar5 = uVar1 + (uVar3 & 0xffffff);
    if (uVar5 < uVar1) {
        uVar2 = 1;
    }
    else {
        uVar2 = uVar5 >> 0x18;
        uVar5 = uVar5 & 0xffffff;
    }
    iVar4 = (uVar3 >> 0x18) + uVar2;
    while (iVar4 != 0) {
        uVar3 = in(0x1808);
        if (uVar3 < uVar1) {
            iVar4 = iVar4 + -1;
        }
        uVar1 = uVar3;
    }
    do {
        if (uVar5 <= uVar1) {
            return 0;
        }
        uVar3 = in(0x1808);
        bVar6 = uVar1 <= uVar3;
        uVar1 = uVar3;
    } while (bVar6);
    return 0;
}


/* fcn.00000b47 @ 0xb47 */

void __fastcall fcn.00000b47(uint param_1)

{
    fcn.00000ad2(param_1);
    fcn.00000b1e();
    return;
}


/* fcn.00000ad2 @ 0xad2 */

int32_t fcn.00000ad2(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000b1e @ 0xb1e */

int fcn.00000b1e(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.00000afd();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000e07();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00000c0c @ 0xc0c */

int32_t __cdecl fcn.00000c0c(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    char in_CL;
    
    uVar1 = *(arg_8h & 0xffffff06U | 6);
    if ((uVar1 != 0xff) && ((uVar1 & 0x10) != 0)) {
        arg_ch._1_3_ = (arg_8h & 0xffffff06U) >> 8;
        for (arg_ch = CONCAT31(arg_ch._1_3_,0x34); *arg_ch != '\0'; arg_ch = arg_ch + 1) {
            arg_ch = CONCAT31(arg_ch._1_3_,*arg_ch);
            if (*arg_ch == in_CL) {
                return arg_ch;
            }
        }
    }
    return 0;
}


/* fcn.00000429 @ 0x429 */

uint __fastcall fcn.00000429(uint32_t param_1,uint32_t param_2,uint8_t param_3,uint8_t param_4,uint16_t param_5)

{
    uint uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    bool bVar6;
    
    uVar4 = ((param_2 & 0x1f | (param_1 & 0xff) << 5) << 3 | param_3 & 7) << 0xc;
    uVar5 = param_4 + 0x10 | uVar4;
    *(uVar5 + 0xc0000000) = 0x10;
    fcn.00000c50();
    if (param_5 != 0) {
        uVar4 = param_4 + 0x30 | uVar4;
        *(uVar4 + 0xc0000000) = *(uVar4 + 0xc0000000) & 0xfff0 | param_5;
        uVar1 = fcn.00000c50();
        return uVar1;
    }
    *(uVar5 + 0xc0000000) = 0x20;
    uVar5 = in(0x1808);
    uVar4 = uVar5 + 0x15d9c0;
    if (uVar4 < uVar5) {
        uVar2 = 1;
    }
    else {
        uVar2 = uVar4 >> 0x18;
        uVar4 = uVar4 & 0xffffff;
    }
    while (uVar2 != 0) {
        uVar3 = in(0x1808);
        if (uVar3 < uVar5) {
            uVar2 = uVar2 - 1;
        }
        uVar5 = uVar3;
    }
    do {
        if (uVar4 <= uVar5) {
            return 0;
        }
        uVar2 = in(0x1808);
        bVar6 = uVar5 <= uVar2;
        uVar5 = uVar2;
    } while (bVar6);
    return 0;
}


/* fcn.00000740 @ 0x740 */

void fcn.00000740(void)

{
    int iVar1;
    uint32_t uVar2;
    uint8_t *puVar3;
    uint8_t *puVar4;
    
    puVar4 = 0xffd2d841;
    iVar1 = 3;
    do {
        uVar2 = (*puVar4 & 0x1f | puVar4[-1] << 5) << 3 | puVar4[1] & 7;
        if ((*(uVar2 * 0x1000 + -0x40000000) != -1) &&
           (uVar2 = uVar2 << 0xc, (*((uVar2 | 0xba) + 0xc0000000) & 0x40) != 0)) {
            puVar3 = (uVar2 | 0x3e) + 0xc0000000;
            *((uVar2 | 0x18) + 0xc0000000) = 0x10100;
            *0xc0100000 = 0;
            *puVar3 = *puVar3 & 0xf7;
            *((uVar2 | 0x18) + 0xc0000000) = 0;
        }
        puVar4 = puVar4 + 6;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.000004b0 @ 0x4b0 */

void fcn.000004b0(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    char *pcVar8;
    uint8_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uStack_24;
    int iStack_18;
    
    iVar5 = fcn.00000b47();
    if (iVar5 != 0) {
        pcVar8 = iVar5 + 0x1c;
        uStack_24 = 0;
        puVar9 = 0xffd2d841;
        iStack_18 = 3;
        do {
            uVar1 = puVar9[-1];
            uVar2 = *puVar9;
            uVar3 = puVar9[1];
            if (*pcVar8 == '\0') {
                uVar7 = uVar3 & 7;
                uVar13 = (uVar2 & 0x1f | uVar1 << 5) << 3 | uVar7;
                if (*(uVar13 * 0x1000 + -0x40000000) != -1) {
                    uVar13 = uVar13 << 0xc;
                    uVar6 = uVar13 | 0x18;
                    *(uVar6 + 0xc0000000) = 0x10100;
                    *0xc0100000 = 0;
                    fcn.00000c50();
                    uVar10 = (uVar1 + 0xc00) * 0x20;
                    uVar11 = (uVar10 + uVar2) * 8;
                    uVar12 = uVar11 + uVar3;
                    uVar4 = fcn.00000c0c(uVar12 * 0x1000,
                                         (((0xfffff3ff < uVar1) * 0x20 + CARRY4(uVar10,uVar2)) * 8 +
                                         CARRY4(uVar11,uVar3)) * 0x1000 | uVar12 >> 0x14);
                    fcn.00000429(uVar3,uVar4,3);
                    if (*0xc0100000 == -1) {
                        fcn.00000429(uVar3,uVar4,0);
                        if (*0xc0100000 == -1) {
                            fcn.00000429(uVar3,uVar4,2);
                            if (*0xc0100000 == -1) {
                                fcn.00000429(uVar3,uVar4,1);
                                if (*0xc0100000 == -1) {
                                    fcn.00000429(uVar3,uVar4,0);
                                    if (((*0xc0100000 == -1) && ((*((uVar13 | 0xba) + 0xc0000000) & 0x40) == 0)) &&
                                       (uVar2 == 1)) {
                                        uVar13 = 1 << (uVar3 & 0x1f);
                                        uVar10 = uStack_24 & 0xff | uVar13;
                                        if (((uStack_24 | uVar13) & 6) != 6) {
                                            uVar10 = uVar10 & 0xfffffffe;
                                        }
                                        uStack_24 = uVar10;
                                        if ((uVar10 >> (uVar3 & 0x1f) & 1) != 0) {
                                            *((((uVar1 << 5 | 1) << 3 | uVar7) << 0xc | uVar4 + 0x10) + 0xc0000000) =
                                                 0x10;
                                            *0xc0000054 = *0xc0000054 & ~puVar9[3];
                                        }
                                    }
                                }
                            }
                        }
                    }
                    *(uVar6 + 0xc0000000) = 0;
                }
            }
            pcVar8 = pcVar8 + 1;
            puVar9 = puVar9 + 6;
            iStack_18 = iStack_18 + -1;
        } while (iStack_18 != 0);
    }
    return;
}


/* fcn.00000d6b @ 0xd6b */

ushort __cdecl fcn.00000d6b(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000a0f @ 0xa0f */

void fcn.00000a0f(void)

{
    fcn.00000d6b(0xf8002,0);
    return;
}


/* fcn.00000e07 @ 0xe07 */

uint32_t __fastcall fcn.00000e07(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000afd @ 0xafd */

int16_t * __fastcall fcn.00000afd(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00000cc3 @ 0xcc3 */

void __fastcall fcn.00000cc3(uint param_1,uint param_2,uint param_3)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    
    iVar3 = 0;
    pcVar2 = 0xffd2d643;
    while (pcVar2 != NULL) {
        (*pcVar2)(param_1,param_2,param_3,1);
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        pcVar2 = *(iVar1 + -0x2d26f8);
    }
    return;
}


