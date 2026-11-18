// decompiled by r2ghidra: 2124_FsRecovery.pe32
// functions: 75

/* entry0 @ 0x102a0 */

void entry0(uint param_1,int *param_2)

{
    *0x4bd4 = param_2;
    (**(*param_2 + 0x18))(param_2,0x454c);
    return;
}


/* fcn.0001202c @ 0x1202c */

uint __thiscall fcn.0001202c(int16_t *param_1,int param_2)

{
    int16_t iVar1;
    char cVar2;
    uint uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == 0) {
        uVar3 = 0x80000002;
    }
    else {
        uVar6 = fcn.00012000();
        uVar4 = uVar6 >> 0x20;
        uVar5 = uVar6;
        if (uVar4 < uVar6) {
            uVar5 = uVar4;
        }
        cVar2 = fcn.00011fbf(param_2,uVar5 + 1);
        if (cVar2 == '\0') {
            uVar3 = 0x8000000f;
        }
        else {
            if (uVar5 != 0) {
                param_2 = param_2 - param_1;
                do {
                    iVar1 = *(param_2 + param_1);
                    if (iVar1 == 0) break;
                    *param_1 = iVar1;
                    param_1 = param_1 + 1;
                    uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
            }
            uVar3 = 0;
            *param_1 = 0;
        }
    }
    return uVar3;
}


/* fcn.00012000 @ 0x12000 */

uint32_t __fastcall fcn.00012000(int16_t *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if ((param_1 == NULL) || (param_2 == 0)) {
        uVar1 = 0;
    }
    else {
        uVar1 = 0;
        if (*param_1 != 0) {
            do {
                if (param_2 - 1 <= uVar1) {
                    return param_2;
                }
                uVar1 = uVar1 + 1;
            } while (param_1[uVar1] != 0);
        }
    }
    return uVar1;
}


/* fcn.00011fbf @ 0x11fbf */

bool fcn.00011fbf(uint param_1,int param_2)

{
    char cVar1;
    
    cVar1 = fcn.00011f99(param_1,param_2 * 2);
    return cVar1 == '\0';
}


/* fcn.00011f99 @ 0x11f99 */

uint32_t __fastcall fcn.00011f99(uint32_t param_1,int param_2,uint32_t param_3,int param_4)

{
    uint32_t uVar1;
    
    if (param_3 <= param_1) {
        uVar1 = param_4 + param_3;
        if (param_1 < uVar1) goto code_r0x00011fb7;
        if (param_3 < param_1) goto code_r0x00011fbb;
    }
    uVar1 = param_1 + param_2;
    if (uVar1 <= param_3) {
code_r0x00011fbb:
        return uVar1 & 0xffffff00;
    }
code_r0x00011fb7:
    return CONCAT31(uVar1 >> 8,1);
}


/* fcn.00010240 @ 0x10240 */

uint * fcn.00010240(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    //[00] -r-x section size 16992 named .text
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


/* fcn.000120c2 @ 0x120c2 */

uint __thiscall fcn.000120c2(char *param_1,int param_2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    
    if (param_1 == NULL) {
        return 0x80000002;
    }
    if (param_2 == 0) {
        uVar2 = 0x80000002;
    }
    else {
        uVar5 = fcn.0001209b();
        uVar3 = uVar5 >> 0x20;
        uVar4 = uVar5;
        if (uVar3 < uVar5) {
            uVar4 = uVar3;
        }
        cVar1 = fcn.00011fe1(param_2,uVar4 + 1);
        if (cVar1 == '\0') {
            uVar2 = 0x8000000f;
        }
        else {
            if (uVar4 != 0) {
                param_2 = param_2 - param_1;
                do {
                    if (param_1[param_2] == '\0') break;
                    *param_1 = param_1[param_2];
                    param_1 = param_1 + 1;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
            }
            *param_1 = '\0';
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.0001209b @ 0x1209b */

uint32_t __fastcall fcn.0001209b(char *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    if (((param_1 != NULL) && (param_2 != 0)) && (uVar1 = 0, *param_1 != '\0')) {
        do {
            if (param_2 - 1 <= uVar1) {
                return param_2;
            }
            uVar1 = uVar1 + 1;
        } while (param_1[uVar1] != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00011fe1 @ 0x11fe1 */

bool fcn.00011fe1(uint param_1,uint param_2)

{
    char cVar1;
    
    cVar1 = fcn.00011f99(param_1,param_2);
    return cVar1 == '\0';
}


/* fcn.00012296 @ 0x12296 */

int __fastcall fcn.00012296(char *param_1)

{
    char cVar1;
    int iVar2;
    
    iVar2 = 0;
    cVar1 = *param_1;
    while (cVar1 != '\0') {
        param_1 = param_1 + 1;
        iVar2 = iVar2 + 1;
        cVar1 = *param_1;
    }
    return iVar2;
}


/* fcn.000103b9 @ 0x103b9 */

bool __fastcall fcn.000103b9(int16_t *param_1,int16_t *param_2,char param_3,int param_4)

{
    int iVar1;
    int iVar2;
    int16_t iVar3;
    int16_t iVar4;
    bool bVar5;
    
    iVar1 = fcn.00012000();
    iVar2 = fcn.00012000();
    if (iVar2 != 0) {
        do {
            if (param_4 == 0) break;
            iVar4 = *param_1;
            param_1 = param_1 + 1;
            if (iVar4 == 0) goto code_r0x000104af;
            if (iVar4 == 0x2a) {
                for (; *param_2 != 0x2e; param_2 = param_2 + 1) {
                    param_4 = param_4 + -1;
                }
                for (; *param_1 != 0x2e; param_1 = param_1 + 1) {
                }
            }
            else {
                if (iVar4 == 0x2c) goto code_r0x000104af;
                if (iVar4 == 0x2e) {
                    if (param_3 == '\x01') {
                        for (; *param_2 == 0x20; param_2 = param_2 + 1) {
                            param_4 = param_4 + -1;
                        }
                    }
code_r0x0001044d:
                    iVar3 = *param_2;
                    if (iVar3 - 0x61U < 0x1a) {
                        iVar3 = iVar3 + -0x20;
                    }
                    if (iVar4 - 0x61U < 0x1a) {
                        iVar4 = iVar4 + -0x20;
                    }
                    if (iVar3 != iVar4) {
                        return false;
                    }
                }
                else {
                    if (iVar4 != 0x3f) goto code_r0x0001044d;
                    if (*param_2 == 0) {
                        return false;
                    }
                }
                param_2 = param_2 + 1;
                param_4 = param_4 + -1;
            }
            iVar1 = fcn.00012000();
            iVar2 = fcn.00012000();
        } while (iVar2 != 0);
    }
    if (iVar1 == 0) {
code_r0x000104af:
        bVar5 = true;
    }
    else {
        bVar5 = *param_1 == 0x2c;
    }
    return bVar5;
}


/* fcn.000104c5 @ 0x104c5 */

uint32_t __cdecl fcn.000104c5(uint32_t arg_8h,uint32_t arg_ch)

{
    int iVar1;
    uint32_t uVar2;
    uint uVar3;
    char cVar4;
    char *in_ECX;
    char *pcVar5;
    ulong uVar6;
    int32_t var_4h;
    
    iVar1 = fcn.00012296();
    uVar6 = fcn.00012296();
    uVar3 = 0;
    if (uVar6 != 0) {
        do {
            pcVar5 = uVar6 >> 0x20;
            uVar3 = uVar6;
            if (arg_ch == 0) break;
            cVar4 = *in_ECX;
            in_ECX = in_ECX + 1;
            uVar3 = 0;
            if (cVar4 == '\0') goto code_r0x00010583;
            if (cVar4 == '*') {
                for (; *pcVar5 != '.'; pcVar5 = pcVar5 + 1) {
                    arg_ch = arg_ch - 1;
                }
                for (; *in_ECX != '.'; in_ECX = in_ECX + 1) {
                }
            }
            else {
                uVar3 = 0;
                if (cVar4 == ',') goto code_r0x00010583;
                if (cVar4 == '.') {
                    if (arg_8h == '\x01') {
                        for (; *pcVar5 == ' '; pcVar5 = pcVar5 + 1) {
                            arg_ch = arg_ch - 1;
                        }
                    }
code_r0x00010533:
                    uVar2 = *pcVar5;
                    if (*pcVar5 + 0x9fU < 0x1a) {
                        uVar2 = uVar2 - 0x20;
                    }
                    if (cVar4 + 0x9fU < 0x1a) {
                        cVar4 = cVar4 + -0x20;
                    }
                    if (uVar2 != cVar4) {
code_r0x0001051b:
                        return uVar2 & 0xffffff00;
                    }
                }
                else {
                    if (cVar4 != '?') goto code_r0x00010533;
                    uVar2 = 0;
                    if (*pcVar5 == '\0') goto code_r0x0001051b;
                }
                arg_ch = arg_ch - 1;
            }
            iVar1 = fcn.00012296();
            uVar6 = fcn.00012296();
            uVar3 = 0;
        } while (uVar6 != 0);
    }
    if (iVar1 == 0) {
code_r0x00010583:
        uVar2 = CONCAT31(uVar3 >> 8,1);
    }
    else {
        uVar2 = CONCAT31(uVar3 >> 8,*in_ECX == ',');
    }
    return uVar2;
}


/* fcn.00014320 @ 0x14320 */

uint * fcn.00014320(uint *param_1,uchar param_2,uint32_t param_3)

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


/* fcn.00011f89 @ 0x11f89 */

int __fastcall fcn.00011f89(int16_t *param_1)

{
    int iVar1;
    
    iVar1 = 0;
    for (; *param_1 != 0; param_1 = param_1 + 1) {
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}


/* fcn.000122a4 @ 0x122a4 */

ulong __cdecl fcn.000122a4(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    uint8_t in_CL;
    uint32_t uVar2;
    int8_t var_4h;
    
    if (in_CL < 0x40) {
        uVar2 = arg_ch;
        if (0x1f < in_CL) {
            uVar2 = 0;
            arg_8h = arg_ch;
        }
        uVar1 = arg_8h >> (in_CL & 0x1f) | uVar2 << 0x20 - (in_CL & 0x1f);
        uVar2 = uVar2 >> (in_CL & 0x1f);
    }
    else {
        uVar1 = 0;
        uVar2 = 0;
    }
    return CONCAT44(uVar2,uVar1);
}


/* fcn.00014380 @ 0x14380 */

int32_t __cdecl fcn.00014380(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    bool bVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint *puVar4;
    uint8_t uVar5;
    
    uVar5 = 0;
    bVar1 = false;
    uVar2 = arg_ch - arg_8h;
    puVar4 = arg_8h;
    if (arg_ch < arg_8h) {
        uVar2 = -uVar2;
        if (arg_8h <= arg_10h + arg_ch) {
            puVar4 = arg_10h + arg_8h;
            bVar1 = true;
            uVar5 = 1;
            arg_ch = arg_10h + arg_ch;
        }
    }
    if ((3 < arg_10h) && (3 < uVar2)) {
        uVar2 = arg_ch & 3;
        uVar3 = puVar4 & 3;
        if (bVar1) {
            arg_ch = arg_ch + -1;
            puVar4 = puVar4 + -1;
        }
        if ((uVar2 == uVar3) && (uVar2 != 0)) {
            if (!bVar1) {
                uVar2 = 4 - uVar2;
            }
            arg_10h = arg_10h - uVar2;
            for (; uVar2 != 0; uVar2 = uVar2 - 1) {
                *puVar4 = *arg_ch;
                arg_ch = arg_ch + uVar5 * -2 + 1;
                puVar4 = puVar4 + uVar5 * -2 + 1;
            }
        }
        if (bVar1) {
            arg_ch = arg_ch + -3;
            puVar4 = puVar4 + -3;
        }
        for (uVar2 = arg_10h >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar4 = *arg_ch;
            arg_ch = arg_ch + (uVar5 * -2 + 1) * 4;
            puVar4 = puVar4 + uVar5 * -2 + 1;
        }
        arg_10h = arg_10h & 3;
        if (arg_10h == 0) {
            return arg_8h;
        }
        if (bVar1) {
            arg_ch = arg_ch + 4;
            puVar4 = puVar4 + 1;
        }
    }
    if (bVar1) {
        arg_ch = arg_ch + -1;
        puVar4 = puVar4 + -1;
    }
    for (; arg_10h != 0; arg_10h = arg_10h - 1) {
        *puVar4 = *arg_ch;
        arg_ch = arg_ch + uVar5 * -2 + 1;
        puVar4 = puVar4 + uVar5 * -2 + 1;
    }
    return arg_8h;
}


/* fcn.00010952 @ 0x10952 */

int __fastcall
fcn.00010952(int *param_1,uint32_t *param_2,uint32_t param_3,int param_4,int param_5,int32_t param_6)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    int aiStack_8 [2];
    
    uVar4 = param_3 + *(param_2 + 0x15);
    iVar1 = param_4 + *(param_2 + 0x19) + CARRY4(param_3,*(param_2 + 0x15));
    if (*param_2 == 0x1000) {
        uVar5 = fcn.000122a4(uVar4,iVar1);
        uVar4 = uVar4 & 0xfff;
    }
    else if (*param_2 == 0x800) {
        uVar5 = fcn.000122a4(uVar4,iVar1);
        uVar4 = uVar4 & 0x7ff;
    }
    else {
        uVar5 = fcn.000122a4(uVar4,iVar1);
        uVar4 = uVar4 & 0x1ff;
    }
    uVar2 = *param_2;
    uVar2 = ((uVar2 + uVar4 + param_5 + -1) / uVar2) * uVar2;
    iVar1 = ((uVar2 & 0xfff) != 0) + (uVar2 >> 0xc);
    uVar3 = iVar1 * 0x1000;
    if (*0x462c < uVar3) {
        iVar1 = (**(*param_1 + 0x48))(param_1,4,iVar1,aiStack_8);
        if (iVar1 < 0) {
            return iVar1;
        }
        *0x4634 = aiStack_8[0];
        *0x462c = uVar3;
    }
    iVar1 = (**(param_2[1] + 8))(param_1,param_2[1],param_2[2],uVar5,uVar2,*0x4634);
    if (-1 < iVar1) {
        fcn.00014380(param_6,*0x4634 + uVar4,param_5);
    }
    return iVar1;
}


/* fcn.0001218c @ 0x1218c */

uint __fastcall fcn.0001218c(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.00010240(param_1,param_2);
    return uVar1;
}


/* fcn.00010aa8 @ 0x10aa8 */

int __fastcall fcn.00010aa8(int param_1)

{
    int iVar1;
    
    if ((*0x463c)[4] <= (*0x463c)[3] + param_1) {
        param_1 = (*0x463c)[4] - (*0x463c)[3];
    }
    iVar1 = fcn.00010952(param_1 * 4 + *(*0x4bc8 + 0x1d),*(*0x4bc8 + 0x21) + CARRY4(param_1 * 4,*(*0x4bc8 + 0x1d)),
                         (*0x463c)[1],**0x463c);
    if (-1 < iVar1) {
        (*0x463c)[2] = param_1;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010bd2 @ 0x10bd2 */

int __fastcall fcn.00010bd2(char param_1,uint32_t param_2,uint32_t *param_3,char param_4)

{
    uint16_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int *piVar4;
    int iVar5;
    
    iVar5 = 0;
    if (param_1 == '\x01') {
        iVar5 = 1;
        uVar1 = *(**0x463c + param_2 * 2);
        while (uVar3 = uVar1, uVar3 < 0xfff8) {
            if ((uVar3 != param_2 + 1) && (param_4 != '\0')) goto code_r0x00010c75;
            iVar5 = iVar5 + 1;
            param_2 = uVar3;
            uVar1 = *(**0x463c + uVar3 * 2);
        }
code_r0x00010c14:
        *param_3 = 0;
    }
    else {
        if (param_1 == '\x02') {
            piVar4 = *0x463c;
            while( true ) {
                iVar5 = iVar5 + 1;
                if ((param_2 < piVar4[2]) || (piVar4[3] + piVar4[2] <= param_2)) {
                    iVar2 = fcn.00010aa8();
                    if (iVar2 < 0) {
                        return 0;
                    }
                    piVar4 = *0x463c;
                }
                uVar3 = *(*piVar4 + (param_2 - piVar4[2]) * 4) & 0xfffffff;
                if (0xffffff7 < uVar3) goto code_r0x00010c14;
                if ((uVar3 != param_2 + 1) && (param_4 != '\0')) break;
                param_2 = uVar3;
            }
        }
        else if (param_1 == '\x05') {
            piVar4 = *0x463c;
            while( true ) {
                iVar5 = iVar5 + 1;
                if ((param_2 < piVar4[2]) || (piVar4[3] + piVar4[2] <= param_2)) {
                    iVar2 = fcn.00010aa8();
                    if (iVar2 < 0) {
                        return 0;
                    }
                    piVar4 = *0x463c;
                }
                uVar3 = *(*piVar4 + (param_2 - piVar4[2]) * 4);
                if ((0xfffffff7 < uVar3) || (uVar3 == 0)) goto code_r0x00010c14;
                if ((uVar3 != param_2 + 1) && (param_4 != '\0')) break;
                param_2 = uVar3;
            }
        }
        else {
            while( true ) {
                iVar5 = iVar5 + 1;
                uVar1 = *((param_2 >> 1) + **0x463c + param_2);
                if ((param_2 & 1) == 0) {
                    uVar3 = uVar1 & 0xfff;
                }
                else {
                    uVar3 = uVar1 >> 4;
                }
                if (0xff7 < uVar3) {
                    *param_3 = 0;
                    return iVar5;
                }
                if ((uVar3 != param_2 + 1) && (param_4 != '\0')) break;
                param_2 = uVar3;
            }
        }
code_r0x00010c75:
        *param_3 = uVar3;
    }
    return iVar5;
}


/* fcn.000122fe @ 0x122fe */

ulong __cdecl fcn.000122fe(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t in_ECX;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = arg_8h * in_ECX >> 0x20;
    _var_ch = CONCAT44(var_8h + arg_ch * in_ECX,arg_8h * in_ECX);
    return _var_ch;
}


/* fcn.00010af9 @ 0x10af9 */

int __fastcall fcn.00010af9(int *param_1,int param_2,uint32_t param_3)

{
    int iVar1;
    uint32_t uVar2;
    int *piStack_8;
    int *piStack_4;
    
    piStack_8 = param_1;
    piStack_4 = param_1;
    if (*0x463c == NULL) {
        iVar1 = (**(*param_1 + 0x4c))(param_1,0x14,0x463c);
        if (iVar1 < 0) {
            return iVar1;
        }
        iVar1 = (**(*param_1 + 0x48))(param_1,4,0x20,&piStack_8);
        if (iVar1 < 0) {
            *0x463c = NULL;
            return iVar1;
        }
        **0x463c = piStack_8;
    }
    uVar2 = param_3;
    if (0x1ffff < param_3) {
        uVar2 = 0x4000;
    }
    (*0x463c)[1] = uVar2;
    fcn.0001218c();
    iVar1 = fcn.00010952(*(param_2 + 0x1d),*(param_2 + 0x21),(*0x463c)[1],**0x463c);
    if (iVar1 < 0) {
        *0x463c = NULL;
        return iVar1;
    }
    (*0x463c)[2] = 0;
    (*0x463c)[3] = (-(param_3 < 0x20000) & 0xffffefff) + 0x1000;
    (*0x463c)[4] = param_3 >> 2;
    return 0;
}


/* fcn.00010d2f @ 0x10d2f */

void __fastcall fcn.00010d2f(uint param_1,int param_2,int param_3,uint32_t param_4,int param_5)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    
    iVar4 = param_5;
    uVar5 = param_4;
    while( true ) {
        iVar2 = param_3;
        iVar1 = fcn.00010bd2(&param_3,1);
        uVar3 = *(param_2 + 0x35) * iVar1;
        uVar6 = uVar5;
        if (uVar3 < uVar5) {
            uVar6 = uVar3;
        }
        uVar3 = uVar6;
        iVar1 = iVar4;
        uVar7 = fcn.000122fe(iVar2 + -2,0);
        iVar2 = fcn.00010952(uVar7 + *(param_2 + 0x2d),
                             (uVar7 >> 0x20) + *(param_2 + 0x31) + CARRY4(uVar7,*(param_2 + 0x2d)),uVar3,iVar1);
        if ((iVar2 < 0) || (param_3 == 0)) break;
        iVar4 = iVar4 + uVar6;
        uVar5 = uVar5 - uVar6;
    }
    return;
}


/* fcn.00010a66 @ 0x10a66 */

uint __fastcall fcn.00010a66(char *param_1)

{
    uint uVar1;
    
    uVar1 = 0;
    if (((((*(param_1 + 0xb) < 0x1001) && (param_1[0xd] != 0)) && (param_1[0xd] < 0x81)) &&
        ((*(param_1 + 0xe) != 0 && (param_1[0x10] != '\0')))) &&
       ((*(param_1 + 0x1fe) == -0x55ab && ((*param_1 == -0x15 || (*param_1 == -0x17)))))) {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.00010db9 @ 0x10db9 */

void __fastcall fcn.00010db9(int *param_1,int param_2,uint32_t param_3)

{
    uint16_t *puVar1;
    int iVar2;
    char cVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong uVar9;
    uint auStack_8 [2];
    
    iVar2 = param_3;
    uVar4 = *(param_3 + 0x16);
    if (*(param_3 + 0x16) == 0) {
        uVar4 = *(param_3 + 0x24);
    }
    uVar7 = *(param_3 + 0xb);
    uVar5 = *(param_3 + 0x13);
    if (*(param_3 + 0x13) == 0) {
        uVar5 = *(param_3 + 0x20);
    }
    puVar1 = param_3 + 0xe;
    iVar6 = (*(param_3 + 0x11) * 0x20 + -1 + uVar7) / uVar7;
    uVar8 = uVar7 * iVar6;
    param_3 = (((uVar5 - *(param_3 + 0x10) * uVar4) - *puVar1) - iVar6) / *(param_3 + 0xd);
    uVar9 = fcn.000122fe(*puVar1,0);
    *(param_2 + 0x1d) = uVar9;
    uVar5 = *(iVar2 + 0x10) * *(iVar2 + 0xb) * uVar4;
    *(param_2 + 0x25) = uVar5 + *(param_2 + 0x1d);
    *(param_2 + 0x29) = (uVar9 >> 0x20) + CARRY4(uVar5,*(param_2 + 0x1d));
    *(param_2 + 0x2d) = uVar8 + *(param_2 + 0x25);
    *(param_2 + 0x31) = *(param_2 + 0x29) + CARRY4(uVar8,*(param_2 + 0x25));
    *(param_2 + 0x35) = *(iVar2 + 0xd) * *(iVar2 + 0xb);
    if (param_3 < 0xfff5) {
        cVar3 = '\x01' - (param_3 < 0xff5);
    }
    else {
        cVar3 = '\x02';
    }
    *(param_2 + 0xc) = cVar3;
    *0x4628 = *(iVar2 + 0x11);
    iVar6 = fcn.00010af9(uVar7 * uVar4);
    if (-1 < iVar6) {
        if (uVar8 == 0) {
            iVar6 = fcn.00010bd2(&param_3,0);
            uVar8 = *(param_2 + 0x35) * iVar6;
            *0x4628 = uVar8 >> 5;
        }
        iVar6 = ((uVar8 & 0xfff) != 0) + (uVar8 >> 0xc);
        param_3 = iVar6 * 0x1000;
        if (*0x4640 < param_3) {
            iVar6 = (**(*param_1 + 0x48))(param_1,4,iVar6,auStack_8);
            if (iVar6 < 0) {
                return;
            }
            *0x4644 = auStack_8[0];
            *0x4640 = param_3;
        }
        fcn.0001218c();
        if (*(param_2 + 0xc) == '\x02') {
            fcn.00010d2f(*(iVar2 + 0x2c));
        }
        else {
            fcn.00010952(*(param_2 + 0x25),*(param_2 + 0x29),uVar8,*0x4644);
        }
    }
    return;
}


/* fcn.00011819 @ 0x11819 */

void fcn.00011819(int *param_1)

{
    uint8_t uVar1;
    int16_t iVar2;
    char cVar3;
    int iVar4;
    int16_t *piVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    uint uStack_224;
    uint32_t uStack_220;
    char acStack_21c [12];
    uchar auStack_210 [4];
    uint8_t *apuStack_20c [131];
    
    *param_1 = 0;
    puVar10 = *0x4644;
    uVar8 = *0x4628;
    uStack_220 = *0x4628;
    iVar4 = fcn.0001144a(&uStack_224,0);
    if (-1 < iVar4) {
        if (*0x4624 != '\0') {
code_r0x0001199a:
            while (cVar3 = fcn.000117b3(), cVar3 == '\0') {
                cVar3 = fcn.0001073b();
                if (cVar3 != '\0') {
                    uVar9 = 0;
                    puVar6 = puVar10;
                    do {
                        if (uStack_220 <= uVar9) goto code_r0x000119b3;
                        if (((*puVar6 & 0xe0) == 0x40) && (puVar6[0xb] == 0xf)) {
                            fcn.000107b1();
                            cVar3 = fcn.00010879();
                            if (cVar3 != '\0') goto code_r0x000118c7;
                        }
                        uVar9 = uVar9 + 1;
                        puVar6 = puVar6 + 0x20;
                    } while( true );
                }
                fcn.0001064e();
                uVar9 = 0;
                if (uVar8 != 0) {
                    puVar6 = puVar10;
                    do {
                        if ((((*puVar6 != 0xe5) && (*puVar6 != 0)) && (acStack_21c[0] != '\0')) &&
                           (iVar4 = fcn.000105fa(0xb,acStack_21c), -1 < iVar4)) goto code_r0x000118d5;
                        uVar9 = uVar9 + 1;
                        puVar6 = puVar6 + 0x20;
                    } while (uVar9 < uVar8);
                }
            }
        }
code_r0x000119b3:
        *0x4620 = 0;
        cVar3 = fcn.000102b8();
        while (cVar3 == '\x01') {
            uVar8 = 0;
            cVar3 = fcn.0001073b();
            if (cVar3 == '\0') {
                fcn.0001064e();
                uVar9 = uStack_220;
                if (uStack_220 != 0) {
                    puVar6 = puVar10;
                    do {
                        if (((*puVar6 != 0xe5) && (*puVar6 != 0)) &&
                           ((acStack_21c[0] != '\0' && (iVar4 = fcn.000105fa(0xb,acStack_21c), -1 < iVar4)))) {
                            iVar4 = *param_1;
                            *param_1 = 1;
                            *(iVar4 * 4 + 0x4be0) = puVar10 + uVar8 * 0x20;
                            return;
                        }
                        uVar8 = uVar8 + 1;
                        puVar6 = puVar6 + 0x20;
                    } while (uVar8 < uVar9);
                }
            }
            else {
                if (*0x4651 == '\0') {
                    uVar9 = 0;
                    cVar3 = *0x49c0;
                    while (cVar3 != '\0') {
                        cVar3 = *(uVar9 + 0x49c1);
                        uVar9 = uVar9 + 1;
                    }
                }
                else {
                    piVar5 = 0x49c0;
                    uVar9 = uVar8;
                    iVar2 = *0x49c0;
                    while (iVar2 != 0) {
                        piVar5 = piVar5 + 1;
                        uVar9 = uVar9 + 1;
                        iVar2 = *piVar5;
                    }
                }
                *0x4648 = uVar9;
                if (uStack_220 != 0) {
                    puVar6 = puVar10;
                    do {
                        if (((*puVar6 & 0xe0) == 0x40) && (puVar6[0xb] == 0xf)) {
                            fcn.000107b1();
                            if (*0x4651 == '\0') {
                                if (*0x49c0 == '\0') goto code_r0x00011ae3;
                                iVar4 = fcn.000105fa(uVar9,0x49c0);
                            }
                            else {
                                iVar4 = fcn.00010594(1,uVar9);
                            }
                            if (-1 < iVar4) {
                                uVar1 = puVar10[uVar8 * 0x20];
                                iVar4 = *param_1;
                                *param_1 = 1;
                                *(iVar4 * 4 + 0x4be0) = puVar10 + ((uVar1 & 0x1fU) + uVar8) * 0x20;
                                return;
                            }
                        }
code_r0x00011ae3:
                        uVar8 = uVar8 + 1;
                        puVar6 = puVar6 + 0x20;
                    } while (uVar8 < uStack_220);
                }
            }
            cVar3 = fcn.000102b8();
        }
    }
    return;
code_r0x000118c7:
    uVar9 = uVar9 + (puVar10[uVar9 * 0x20] & 0x1fU);
code_r0x000118d5:
    iVar4 = fcn.00010bd2(auStack_210,0);
    uVar7 = *(*0x4bc8 + 0x35) * iVar4;
    iVar4 = ((uVar7 & 0xfff) != 0) + (uVar7 >> 0xc);
    uVar8 = uVar7 >> 5;
    uStack_224 = CONCAT22(*(puVar10 + uVar9 * 0x20 + 0x14),*(puVar10 + uVar9 * 0x20 + 0x1a));
    uVar9 = iVar4 * 0x1000;
    uStack_220 = uVar8;
    if (uVar7 < uVar9) {
        iVar4 = (**(**0x4bd4 + 0x48))(*0x4bd4,4,iVar4,apuStack_20c);
        if (iVar4 < 0) goto code_r0x00011a55;
        uVar7 = uVar9;
        puVar10 = apuStack_20c[0];
    }
    fcn.0001218c();
    iVar4 = fcn.00010d2f(uStack_224,uVar7,puVar10);
    if (iVar4 < 0) {
code_r0x00011a55:
        *param_1 = 0;
        return;
    }
    goto code_r0x0001199a;
}


/* fcn.00010f82 @ 0x10f82 */

int __fastcall fcn.00010f82(uint param_1,uint param_2,uint32_t *param_3,uint param_4)

{
    char cVar1;
    int iVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t auStack_8 [2];
    
    uVar4 = 0;
    iVar2 = fcn.00010952(0,0,0x200,*0x49ac + 0x200);
    if (-1 < iVar2) {
        iVar2 = *0x49ac + 0x200;
        cVar1 = fcn.00010a66();
        if (cVar1 != '\0') {
            *0x4bc8 = param_2;
            iVar3 = fcn.00010db9(iVar2);
            if (iVar3 < 0) {
                return iVar3;
            }
            fcn.00011819(auStack_8,iVar2);
            if (auStack_8[0] != 0) {
                do {
                    iVar2 = *(uVar4 * 4 + 0x4be0);
                    if ((*(iVar2 + 0x1c) <= *param_3) &&
                       (iVar2 = fcn.00010d2f(CONCAT22(*(iVar2 + 0x14),*(iVar2 + 0x1a)),*(iVar2 + 0x1c),param_4),
                       -1 < iVar2)) {
                        *param_3 = *(*(uVar4 * 4 + 0x4be0) + 0x1c);
                        return 0;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < auStack_8[0]);
            }
        }
        iVar2 = -0x7ffffff2;
    }
    return iVar2;
}


/* fcn.00011bf3 @ 0x11bf3 */

int __fastcall fcn.00011bf3(uint param_1,int param_2)

{
    char *pcVar1;
    int iVar2;
    char cVar4;
    char *pcVar3;
    uint8_t uVar5;
    uint32_t uVar6;
    ulong uVar7;
    int64_t iVar8;
    
    if (*0x4bd0 != '\0') {
        for (; *0x4bc0 < 4; *0x4bc0 = *0x4bc0 + 1) {
            uVar5 = (*0x49ac)[*0x4bc0 * 0x10 + 0x1c2];
            uVar6 = uVar5 << 8;
            if (uVar5 == 0xee) {
                *0x4bd0 = '\0';
                *0x4bc0 = 0;
                goto code_r0x00011d3f;
            }
            if (((*0x4630 != '\0') && (*0x49b0 = 1, *0x4668 != 0 || *0x466c != 0)) && (*0x4670 != 0 || *0x4674 != 0)) {
                uVar6 = CONCAT11(uVar5,(*0x4688 != '\x01') + -1) & 0xffffff01;
                *0x49b0 = (*(*0x49ac + 0x1b8) != *0x4678) - 1U & uVar6;
            }
            cVar4 = uVar6 >> 8;
            if ((cVar4 == '\x05') || (cVar4 == '\x0f')) {
                *0x4bd8 = *(*0x49ac + *0x4bc0 * 0x10 + 0x1c6);
                if (*0x49a8 == 0) {
                    *0x49a8 = *0x4bd8;
                }
                else {
                    *0x4bd8 = *0x4bd8 + *0x49a8;
                }
                uVar7 = fcn.000122fe(0x200,0);
                pcVar1 = *0x49ac;
                *(param_2 + 0x15) = uVar7;
                iVar2 = fcn.00010952(0,0,0x200,pcVar1);
                if (iVar2 < 0) {
                    return iVar2;
                }
                *0x4bc0 = 0;
            }
            iVar2 = *0x4bc0 * 0x10;
            if ((((*0x49ac)[iVar2 + 0x1c2] != '\0') && (*(*0x49ac + iVar2 + 0x1ca) != 0)) &&
               (*(*0x49ac + iVar2 + 0x1c6) != 0)) {
                uVar7 = fcn.000122fe(0x200,0);
                *0x4bc0 = *0x4bc0 + 1;
                *(param_2 + 0x15) = uVar7;
                goto code_r0x00011ed5;
            }
        }
        if (*0x4bd0 != '\0') {
            return -0x7ffffff2;
        }
    }
    if (*0x4bc0 == 0) {
code_r0x00011d3f:
        uVar7 = fcn.000122fe(1,0);
        iVar2 = fcn.00010952(uVar7,0x200,*0x49ac);
        if (iVar2 < 0) {
            return iVar2;
        }
        if (**0x49ac != 'E') {
            return -0x7ffffff2;
        }
        if ((*0x49ac)[1] != 'F') {
            return -0x7ffffff2;
        }
        if ((*0x49ac)[2] != 'I') {
            return -0x7ffffff2;
        }
        *0x4bc4 = *(*0x49ac + 0x50);
        if (*(*0x49ac + 0x54) != 0x80) {
            return -0x7ffffff2;
        }
        uVar7 = fcn.000122fe(2,0);
        iVar2 = fcn.00010952(uVar7,0x200,*0x49ac);
        if (iVar2 < 0) {
            return iVar2;
        }
    }
    if (*0x4bc0 < *0x4bc4) {
        uVar6 = *0x4bc0 & 3;
        if ((uVar6 == 0) && (*0x4bc0 != 0)) {
            uVar7 = fcn.000122fe((*0x4bc0 >> 2) + 2,0);
            pcVar1 = *0x49ac;
            *(param_2 + 0x15) = 0;
            *(param_2 + 0x19) = 0;
            iVar2 = fcn.00010952(uVar7,0x200,pcVar1);
            if (iVar2 < 0) {
                return iVar2;
            }
        }
        pcVar1 = *0x49ac;
        *0x4bc0 = *0x4bc0 + 1;
        iVar8 = fcn.000122fe(*(*0x49ac + uVar6 * 0x80 + 0x20),*(*0x49ac + uVar6 * 0x80 + 0x24));
        *(param_2 + 0x15) = iVar8;
        if (iVar8 != 0) {
            if (*0x4630 != '\0') {
                uVar5 = 1;
                *0x49b0 = 1;
                if ((*0x4668 != 0 || *0x466c != 0) && (*0x4670 != 0 || *0x4674 != 0)) {
                    if (*0x4688 == '\x02') {
                        pcVar3 = 0x4678;
                        iVar2 = 0x10;
                        do {
                            uVar5 = uVar5 & ((pcVar1 + uVar6 * 0x80 + -0x4668)[pcVar3] != *pcVar3) - 1U;
                            pcVar3 = pcVar3 + 1;
                            iVar2 = iVar2 + -1;
                            *0x49b0 = uVar5;
                        } while (iVar2 != 0);
                    }
                    else {
                        *0x49b0 = 0;
                    }
                }
            }
code_r0x00011ed5:
            iVar2 = fcn.00011bac(*0x4bcc);
            if (-1 < iVar2) {
                *0x4650 = 1;
            }
            return 0;
        }
    }
    return -0x7ffffff2;
}


/* fcn.0001219d @ 0x1219d */

int __fastcall fcn.0001219d(int *param_1,int *param_2,int param_3)

{
    int iVar1;
    uint32_t uVar2;
    int *piVar3;
    
    piVar3 = param_3 + param_1;
    uVar2 = param_1 & 3;
    if ((uVar2 != 0) && (uVar2 == (param_2 & 3))) {
        iVar1 = 4 - uVar2;
        for (; (iVar1 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
            param_2 = param_2 + 1;
            iVar1 = iVar1 + -1;
        }
    }
    for (; (param_1 <= piVar3 + -1 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
        param_2 = param_2 + 1;
    }
    while( true ) {
        if (piVar3 <= param_1) {
            return 0;
        }
        if (*param_1 != *param_2) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
    }
    return *param_1 - *param_2;
}


/* fcn.000116ce @ 0x116ce */

void __fastcall fcn.000116ce(uint param_1,uint32_t param_2,int *param_3)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint8_t *puVar5;
    uint32_t uStack_c;
    uchar auStack_4 [4];
    
    puVar5 = *0x4644;
    uStack_c = 0;
    *param_3 = 0;
    iVar2 = fcn.0001144a(auStack_4,0);
    if ((-1 < iVar2) && (param_2 != 0)) {
        do {
            uVar1 = *puVar5;
            if (uVar1 == 0) {
                return;
            }
            uVar3 = 0;
            if (*0x4651 == '\0') {
                if (puVar5[0x21] != 0x3b) {
                    uVar4 = uVar3;
                    do {
                        uVar3 = uVar4;
                        if (puVar5[0x20] <= uVar4) break;
                        uVar3 = uVar4 + 1;
                        iVar2 = uVar4 + 0x22;
                        uVar4 = uVar3;
                    } while (puVar5[iVar2] != 0x3b);
                }
                if (*param_3 != '\0') {
                    iVar2 = fcn.000105fa(uVar3,param_3);
                    goto joined_r0x0001178e;
                }
            }
            else {
                if (*(puVar5 + 2) != 0x3b) {
                    do {
                        if (puVar5[0x20] <= uVar3) break;
                        uVar3 = uVar3 + 1;
                    } while (*(puVar5 + 2 + uVar3 * 2) != 0x3b);
                }
                iVar2 = fcn.00010594(0,uVar3);
joined_r0x0001178e:
                if (-1 < iVar2) {
                    iVar2 = *param_3;
                    *(iVar2 * 4 + 0x4980) = puVar5;
                    *param_3 = iVar2 + 1;
                    return;
                }
            }
            uStack_c = uStack_c + uVar1;
            puVar5 = puVar5 + uVar1 * 0x21;
        } while (uStack_c < param_2);
    }
    return;
}


/* fcn.00011121 @ 0x11121 */

int __fastcall fcn.00011121(int *param_1,int *param_2,uint32_t *param_3,uint param_4)

{
    uint32_t uVar1;
    int iVar2;
    uint extraout_ECX;
    uint32_t uVar3;
    uint32_t uStack_814;
    int *piStack_810;
    uint auStack_80c [2];
    char acStack_804 [158];
    int iStack_766;
    uint32_t uStack_75e;
    
    *(param_2 + 0x15) = 0;
    *(param_2 + 0x19) = 0;
    piStack_810 = param_1;
    iVar2 = fcn.00010952(*param_2 << 4,0,*param_2,acStack_804);
    if (-1 < iVar2) {
        if ((acStack_804[0] == '\x01') && (iVar2 = fcn.0001219d(5), iVar2 == 0)) {
            iVar2 = ((uStack_75e & 0xfff) != 0) + (uStack_75e >> 0xc);
            uVar3 = iVar2 * 0x1000;
            if (*0x4640 < uVar3) {
                iVar2 = (**(*param_1 + 0x48))(param_1,4,iVar2,auStack_80c);
                if (iVar2 < 0) {
                    return iVar2;
                }
                *0x4644 = auStack_80c[0];
                *0x4640 = uVar3;
            }
            fcn.0001218c();
            iVar2 = fcn.00010952(*param_2 * iStack_766,0,uStack_75e,*0x4644);
            if (iVar2 < 0) {
                return iVar2;
            }
            fcn.000116ce(&uStack_814,extraout_ECX);
            if ((uStack_814 != 0) && (uVar3 = 0, uStack_814 != 0)) {
                do {
                    iVar2 = *(uVar3 * 4 + 0x4980);
                    uVar1 = *(iVar2 + 10);
                    if ((uVar1 <= *param_3) &&
                       (iVar2 = fcn.00010952(*(iVar2 + 2) * *param_2,0,uVar1,param_4), -1 < iVar2)) {
                        *param_3 = *(*(uVar3 * 4 + 0x4980) + 10);
                        return 0;
                    }
                    uVar3 = uVar3 + 1;
                } while (uVar3 < uStack_814);
            }
        }
        iVar2 = -0x7ffffff2;
    }
    return iVar2;
}


/* fcn.00011051 @ 0x11051 */

int __cdecl fcn.00011051(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h,int32_t arg_14h)

{
    int iVar1;
    int iVar2;
    
    *(arg_ch + 0x15) = 0;
    *(arg_ch + 0x19) = 0;
    iVar1 = fcn.00010f82(arg_10h,arg_14h);
    if ((iVar1 < 0) && (iVar1 = fcn.00010952(0,0,0x200,*0x49ac), -1 < iVar1)) {
        if (*(*0x49ac + 0x1fe) == -0x55ab) {
            *0x4bc0 = 0;
            *0x4bd8 = 0;
            *0x49a8 = 0;
            *0x4bd0 = 1;
            do {
                iVar1 = fcn.00011bf3();
                if ((((-1 < iVar1) && (*0x4650 != '\0')) && ((*0x4630 == '\0' || (*0x49b0 != '\0')))) &&
                   (iVar2 = fcn.00010f82(arg_10h,arg_14h), -1 < iVar2)) {
                    *0x4650 = 0;
                    return iVar2;
                }
            } while (iVar1 == 0);
        }
        iVar1 = -0x7ffffff2;
    }
    return iVar1;
}


/* fcn.00011f5c @ 0x11f5c */

void __cdecl fcn.00011f5c(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00011f40 @ 0x11f40 */

int32_t __fastcall fcn.00011f40(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00011f5c(param_1,&var_4h);
    return var_4h;
}


/* fcn.00014237 @ 0x14237 */

int __fastcall fcn.00014237(int *param_1,uint *param_2,uint32_t *param_3,uchar *param_4)

{
    int iVar1;
    uint *puStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    uStack_10 = 0x974231d5;
    puStack_18 = NULL;
    uStack_c = 0x44d1ed4b;
    uStack_8 = 0x51ce7088;
    uStack_4 = 0x684dc15c;
    if ((param_2 == NULL) && (param_3 == NULL)) {
        iVar1 = -0x7ffffffd;
    }
    else {
        if (param_4 != NULL) {
            *param_4 = 1;
        }
        if (param_3 != NULL) {
            if (*param_3 < 0x1004000) {
                *param_3 = 0x1004000;
            }
            if (param_2 != NULL) {
                iVar1 = (**(*param_1 + 0x20))(param_1,0x44a0,0,0,&puStack_18);
                if (iVar1 < 0) {
                    return iVar1;
                }
                uStack_14 = 0x1d;
                iVar1 = (**puStack_18)(puStack_18,0x45d8,&uStack_10,0,&uStack_14,0x48a0);
                if (-1 < iVar1) {
                    if ((*0x48a0 == '\x01') && (*0x48a5 != '\0')) {
                        *param_2 = 0x48a5;
                    }
                    *param_3 = *0x48b5;
                    (**(*param_1 + 0x2c))(param_1,0x12);
                }
            }
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001144a @ 0x1144a */

int __fastcall fcn.0001144a(uint *param_1,uint *param_2,uint *param_3,uchar *param_4)

{
    int iVar1;
    uint uVar2;
    uint32_t uVar3;
    ulong uVar4;
    uint *puStack_8;
    uint *puStack_4;
    
    puStack_8 = param_1;
    puStack_4 = param_1;
    iVar1 = fcn.00011f5c(param_1,&puStack_4);
    if (iVar1 < 0) {
        return iVar1;
    }
    puStack_8 = 0x230;
    uVar3 = 0;
    iVar1 = (**puStack_4)(puStack_4,0x44f0,0x44c0,0,&puStack_8,0x4660);
    if (iVar1 < 0) {
        if (param_2 != NULL) {
            *param_2 = 0x4570;
            *0x4651 = 0;
        }
        if (param_3 != NULL) {
            iVar1 = fcn.00011f40();
            uVar2 = (**(iVar1 + 0xc))(9);
            *param_3 = uVar2;
        }
        if (param_4 != NULL) {
            *param_4 = 0;
        }
        iVar1 = fcn.00014237(param_3,param_4);
        if (param_2 == NULL) {
            return iVar1;
        }
        if (**param_2 == '\0') {
            return iVar1;
        }
        do {
            uVar3 = uVar3 + 1;
        } while ((*param_2)[uVar3] != '\0');
        if (uVar3 < 0x100) {
            return iVar1;
        }
code_r0x00011540:
        iVar1 = -0x7ffffffe;
    }
    else {
        if (param_2 != NULL) {
            *param_2 = 0x468a;
            uVar4 = fcn.00012000();
            if (uVar4 >> 0x20 <= uVar4) goto code_r0x00011540;
        }
        if (param_3 != NULL) {
            *param_3 = *0x488c;
        }
        if (param_4 != NULL) {
            *param_4 = 0;
        }
        *0x4651 = 1;
        iVar1 = 0;
        *0x4630 = 1;
        *0x4624 = 1;
    }
    return iVar1;
}


/* fcn.00011369 @ 0x11369 */

int __fastcall fcn.00011369(int *param_1,uint param_2,int param_3,int *param_4,int param_5)

{
    int iVar1;
    int *piVar2;
    int iVar3;
    uint auStack_54 [2];
    uint uStack_4c;
    char cStack_48;
    uint uStack_40;
    uint uStack_3c;
    int iStack_38;
    uint uStack_34;
    
    if (((param_3 == 0) || (param_4 == NULL)) || ((*param_4 != 0 && (param_5 == 0)))) {
        iVar1 = -0x7ffffffe;
    }
    else {
        fcn.00010240(&uStack_3c,0x39);
        iVar1 = (**(param_3 + 4))(param_1,param_3,param_2,&uStack_4c);
        if (-1 < iVar1) {
            if (cStack_48 != '\0') {
                uStack_3c = uStack_40;
                *0x4bcc = uStack_4c;
                iStack_38 = param_3;
                uStack_34 = param_2;
                iVar1 = (**(*param_1 + 0x48))(param_1,4,1,auStack_54);
                if (-1 < iVar1) {
                    iVar1 = 0;
                    *0x49ac = auStack_54[0];
                    piVar2 = 0x45c0;
                    do {
                        iVar3 = (**piVar2)(param_1,&uStack_3c,param_4,param_5);
                        if (iVar3 == 0) {
                            return 0;
                        }
                        iVar1 = iVar1 + 1;
                        piVar2 = iVar1 * 4 + 0x45c0;
                    } while (*piVar2 != 0);
                    return iVar3;
                }
            }
            iVar1 = -0x7ffffff2;
        }
    }
    return iVar1;
}


/* fcn.0001224d @ 0x1224d */

int __fastcall fcn.0001224d(uint param_1,uint *param_2)

{
    uint uVar1;
    int iVar2;
    int32_t var_4h;
    
    if (param_2 == NULL) {
        iVar2 = -0x7ffffffe;
    }
    else {
        uVar1 = *param_2;
        do {
            iVar2 = fcn.00012216();
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.0001219d(0x10);
        } while (iVar2 != 0);
        *param_2 = uVar1;
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00010594 @ 0x10594 */

uint __fastcall fcn.00010594(int16_t *param_1,int16_t *param_2,uint param_3,int param_4)

{
    char cVar1;
    
    if (((*param_1 != 0) && (*param_2 != 0)) && (param_4 != 0)) {
        do {
            if (*param_1 == 0x2c) {
                param_1 = param_1 + 1;
            }
            cVar1 = fcn.000103b9(param_3,param_4);
            if (cVar1 == '\x01') {
                return 0;
            }
            for (; *param_1 != 0x2c; param_1 = param_1 + 1) {
                if (*param_1 == 0) {
                    return 0x80000002;
                }
            }
        } while (*param_1 != 0);
    }
    return 0x80000002;
}


/* fcn.000105fa @ 0x105fa */

uint __fastcall fcn.000105fa(char *param_1,uint32_t param_2,uint32_t param_3,char *param_4)

{
    char cVar1;
    uint uVar2;
    
    if ((*param_1 == '\0') || (param_3 == 0)) {
        uVar2 = 0x80000002;
    }
    else {
        while( true ) {
            if (*param_4 == ',') {
                param_4 = param_4 + 1;
            }
            cVar1 = fcn.000104c5(param_2,param_3);
            if (cVar1 == '\x01') break;
            for (; *param_4 != ','; param_4 = param_4 + 1) {
                if (*param_4 == '\0') {
                    return 0x80000002;
                }
            }
        }
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.0001073b @ 0x1073b */

uint __fastcall fcn.0001073b(int param_1)

{
    uint16_t uVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    
    if (*(*0x4bc8 + 0xc) == '\x02') {
        if (*0x4651 == '\0') {
            uVar3 = fcn.00012296();
            if (uVar3 < 0xd) {
                uVar4 = 0;
                if (uVar3 != 0) {
                    do {
                        if (*(uVar4 + param_1) == '.') break;
                        uVar4 = uVar4 + 1;
                    } while (uVar4 < uVar3);
                    goto code_r0x000107a0;
                }
                goto code_r0x000107a5;
            }
        }
        else {
            uVar3 = fcn.00011f89();
            if (uVar3 < 0xd) {
                uVar4 = 0;
                if (uVar3 != 0) {
                    do {
                        uVar1 = *(param_1 + uVar4 * 2);
                        if (0xff < uVar1) goto code_r0x000107ac;
                    } while ((uVar1 != 0x2e) && (uVar4 = uVar4 + 1, uVar4 < uVar3));
code_r0x000107a0:
                    if (8 < uVar4) goto code_r0x000107ac;
                }
code_r0x000107a5:
                if (uVar3 - uVar4 < 5) goto code_r0x0001074a;
            }
        }
code_r0x000107ac:
        uVar2 = 1;
    }
    else {
code_r0x0001074a:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000107b1 @ 0x107b1 */

void __fastcall fcn.000107b1(uint8_t *param_1,int param_2)

{
    uint8_t uVar1;
    uint8_t uVar2;
    ushort uVar3;
    char cVar4;
    int iVar5;
    uint32_t uVar6;
    int iVar7;
    uint8_t *puVar8;
    
    uVar1 = *param_1;
    uVar6 = 0;
    iVar7 = 0;
    param_1 = param_1 + (uVar1 & 0x1f) * 0x20 + -0x12;
    cVar4 = *0x4651;
    do {
        puVar8 = param_1 + -0xd;
        iVar5 = 5;
        if (cVar4 == '\0') {
            do {
                uVar2 = *puVar8;
                puVar8 = puVar8 + 2;
                *(iVar7 + param_2) = uVar2;
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar5 = 6;
            puVar8 = param_1;
            do {
                uVar2 = *puVar8;
                puVar8 = puVar8 + 2;
                *(iVar7 + param_2) = uVar2;
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            puVar8 = param_1 + 0xe;
            iVar5 = 2;
            do {
                uVar2 = *puVar8;
                puVar8 = puVar8 + 2;
                *(iVar7 + param_2) = uVar2;
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
        else {
            do {
                uVar3 = *puVar8;
                puVar8 = puVar8 + 2;
                *(param_2 + iVar7 * 2) = uVar3;
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            iVar5 = 6;
            puVar8 = param_1;
            do {
                uVar3 = *puVar8;
                puVar8 = puVar8 + 2;
                *(param_2 + iVar7 * 2) = uVar3;
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            puVar8 = param_1 + 0xe;
            iVar5 = 2;
            do {
                uVar3 = *puVar8;
                puVar8 = puVar8 + 2;
                *(param_2 + iVar7 * 2) = uVar3;
                iVar7 = iVar7 + 1;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            cVar4 = *0x4651;
        }
        param_1 = param_1 + -0x20;
        uVar6 = uVar6 + 1;
    } while (uVar6 < (uVar1 & 0x1f));
    if (cVar4 == '\0') {
        *(iVar7 + param_2) = 0;
    }
    else {
        *(param_2 + iVar7 * 2) = 0;
    }
    return;
}


/* fcn.00010879 @ 0x10879 */

uint32_t __fastcall fcn.00010879(int param_1,int param_2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    int16_t iVar5;
    uint32_t uVar6;
    ulong uVar7;
    
    if (*0x4651 == '\0') {
        fcn.00012296();
        uVar7 = fcn.00012296();
        uVar3 = uVar7;
        if (uVar7 >> 0x20 == uVar3) {
            uVar6 = 0;
            uVar2 = fcn.00012296();
            uVar3 = 0;
            if (uVar2 != 0) {
                do {
                    cVar4 = *(uVar6 + param_1);
                    if (cVar4 + 0x9fU < 0x1a) {
                        cVar4 = cVar4 + -0x20;
                    }
                    uVar3 = *(uVar6 + param_2);
                    if (*(uVar6 + param_2) + 0x9fU < 0x1a) {
                        uVar3 = uVar3 - 0x20;
                    }
                    if (cVar4 != uVar3) goto code_r0x0001089d;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar2);
            }
            goto code_r0x0001094a;
        }
    }
    else {
        uVar2 = fcn.00011f89();
        uVar3 = fcn.00011f89();
        if (uVar2 == uVar3) {
            uVar6 = 0;
            uVar2 = fcn.00011f89();
            uVar3 = 0;
            if (uVar2 != 0) {
                do {
                    iVar5 = *(param_1 + uVar6 * 2);
                    if (iVar5 - 0x61U < 0x1a) {
                        iVar5 = iVar5 + -0x20;
                    }
                    uVar1 = *(param_2 + uVar6 * 2);
                    uVar3 = uVar1 - 0x20;
                    if (0x19 < uVar1 - 0x61) {
                        uVar3 = uVar1;
                    }
                    if (iVar5 != uVar3) goto code_r0x0001089d;
                    uVar6 = uVar6 + 1;
                } while (uVar6 < uVar2);
            }
code_r0x0001094a:
            return CONCAT31(uVar3 >> 8,1);
        }
    }
code_r0x0001089d:
    return uVar3 & 0xffffff00;
}


/* fcn.000117b3 @ 0x117b3 */

uint __fastcall fcn.000117b3(int *param_1,int *param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    ulong uVar4;
    
    if (*0x4651 == '\0') {
        uVar4 = fcn.00012296();
        iVar2 = uVar4 >> 0x20;
        uVar1 = 0;
        if (uVar4 != 0) {
            do {
                if (*(iVar2 + uVar1) == '/') {
                    *(iVar2 + uVar1) = 0;
                    iVar2 = iVar2 + 1 + uVar1;
                    goto code_r0x00011813;
                }
                uVar1 = uVar1 + 1;
            } while (uVar1 < uVar4);
        }
    }
    else {
        iVar2 = *param_1;
        uVar1 = fcn.00011f89();
        uVar3 = 0;
        if (uVar1 != 0) {
            do {
                if (*(iVar2 + uVar3 * 2) == 0x2f) {
                    *(iVar2 + uVar3 * 2) = 0;
                    iVar2 = iVar2 + 2 + uVar3 * 2;
code_r0x00011813:
                    *param_2 = iVar2;
                    return 0;
                }
                uVar3 = uVar3 + 1;
            } while (uVar3 < uVar1);
        }
    }
    return 1;
}


/* fcn.000102b8 @ 0x102b8 */

uint32_t __fastcall fcn.000102b8(uint param_1)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int16_t *piVar4;
    char *pcVar5;
    uint32_t var_200h;
    uint32_t var_100h;
    
    if (*0x4651 == '\0') {
        fcn.000120c2(param_1,param_1);
        uVar3 = fcn.0001209b();
        if (((uVar3 == 0) || (uVar3 < *0x4620)) || (*(&var_100h + *0x4620) == '\0')) goto code_r0x000103b2;
        pcVar5 = 0x49c0;
        fcn.00010240(0x49c0,0x100);
        for (; (cVar1 = *(&var_100h + *0x4620), cVar1 != ',' && (cVar1 != '\0')); *0x4620 = *0x4620 + 1) {
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
        }
    }
    else {
        fcn.0001202c();
        uVar3 = fcn.00012000();
        if (((uVar3 == 0) || (uVar3 < *0x4620)) || (*(&var_200h + *0x4620 * 2) == 0)) {
code_r0x000103b2:
            return uVar3 & 0xffffff00;
        }
        piVar4 = 0x49c0;
        fcn.00010240(0x49c0,0x200);
        for (; (iVar2 = *(&var_200h + *0x4620 * 2), iVar2 != 0x2c && (iVar2 != 0)); *0x4620 = *0x4620 + 1) {
            *piVar4 = iVar2;
            piVar4 = piVar4 + 1;
        }
    }
    *0x4620 = *0x4620 + 1;
    return CONCAT31(*0x4620 >> 8,1);
}


/* fcn.0001064e @ 0x1064e */

void __fastcall fcn.0001064e(char *param_1,int param_2)

{
    int iVar1;
    char cVar2;
    char *pcVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    char acStack_10 [16];
    
    if (*0x4651 == '\0') {
        uVar4 = 0;
        iVar1 = -param_1;
        do {
            cVar2 = *param_1;
            param_1[acStack_10 + iVar1] = cVar2;
            if (cVar2 == '\0') break;
            uVar4 = uVar4 + 1;
            param_1 = param_1 + 1;
        } while (uVar4 < 0xd);
    }
    else {
        uVar4 = 0;
        do {
            acStack_10[uVar4] = param_1[uVar4 * 2];
            if (*(param_1 + uVar4 * 2) == 0) break;
            uVar4 = uVar4 + 1;
        } while (uVar4 < 0xd);
    }
    for (uVar4 = 0; (acStack_10[0] != '\0' && (cVar2 = acStack_10[uVar4], cVar2 != '.')); uVar4 = uVar4 + 1) {
        if (cVar2 + 0x9fU < 0x1a) {
            cVar2 = cVar2 + -0x20;
        }
        *(param_2 + uVar4) = cVar2;
        acStack_10[0] = acStack_10[uVar4 + 1];
    }
    uVar5 = uVar4;
    if (uVar4 < 8) {
        fcn.00014320(param_2 + uVar4,0x20,8 - uVar4);
        uVar5 = uVar4 + (8 - uVar4);
    }
    if (acStack_10[uVar4] == '.') {
        for (pcVar3 = acStack_10 + uVar4 + 1; *pcVar3 != '\0'; pcVar3 = pcVar3 + 1) {
            cVar2 = *pcVar3;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar2 = cVar2 + -0x20;
            }
            *(uVar5 + param_2) = cVar2;
            uVar5 = uVar5 + 1;
        }
    }
    if (uVar5 < 0xb) {
        fcn.00014320(uVar5 + param_2,0x20,0xb - uVar5);
        uVar5 = uVar5 + (0xb - uVar5);
    }
    *(uVar5 + param_2) = 0;
    return;
}


/* fcn.00011bac @ 0x11bac */

uint __cdecl fcn.00011bac(int32_t arg_8h)

{
    int iVar1;
    code *pcVar2;
    uint uVar3;
    int iVar4;
    int8_t var_8h;
    
    uVar3 = 0;
    iVar4 = 0;
    pcVar2 = *0x4638;
    while (pcVar2 != NULL) {
        uVar3 = (*pcVar2)();
        iVar1 = iVar4 * 4;
        iVar4 = iVar4 + 1;
        pcVar2 = *(iVar1 + 0x463c);
    }
    return uVar3;
}


/* fcn.0001432a @ 0x1432a */

uint * fcn.0001432a(uint *param_1,uint32_t param_2,uchar param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    
    puVar3 = param_1;
    if (3 < param_2) {
        if ((param_1 & 3) != 0) {
            iVar2 = 4 - (param_1 & 3);
            param_2 = param_2 - iVar2;
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = param_3;
                puVar3 = puVar3 + 1;
            }
        }
        for (uVar1 = param_2 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = CONCAT22(CONCAT11(param_3,param_3),CONCAT11(param_3,param_3));
            puVar3 = puVar3 + 1;
        }
        param_2 = param_2 & 3;
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
        *puVar3 = param_3;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.00012216 @ 0x12216 */

uint __fastcall fcn.00012216(uint param_1,uint *param_2)

{
    int16_t iVar1;
    int16_t *piVar2;
    
    if (param_2 == NULL) {
        return 0x80000002;
    }
    piVar2 = *param_2;
    iVar1 = *piVar2;
    do {
        if (iVar1 == -1) {
            return 0x8000000e;
        }
        piVar2 = piVar2 + piVar2[1];
        iVar1 = *piVar2;
    } while (iVar1 != 4);
    *param_2 = piVar2;
    return 0;
}


/* fcn.000122d1 @ 0x122d1 */

ulong __cdecl fcn.000122d1(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    uint32_t uVar2;
    uint8_t in_CL;
    uint32_t uVar3;
    int8_t var_4h;
    
    if (in_CL < 0x40) {
        uVar2 = arg_8h;
        if (0x1f < in_CL) {
            uVar2 = 0;
            arg_ch = arg_8h;
        }
        uVar3 = arg_ch << (in_CL & 0x1f) | uVar2 >> 0x20 - (in_CL & 0x1f);
        iVar1 = uVar2 << (in_CL & 0x1f);
    }
    else {
        iVar1 = 0;
        uVar3 = 0;
    }
    return CONCAT44(uVar3,iVar1);
}


/* fcn.00012405 @ 0x12405 */

uint __fastcall fcn.00012405(uint *param_1,int64_t *param_2,uint32_t *param_3)

{
    uint8_t *puVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t arg_ch;
    uchar uVar5;
    uint8_t uVar6;
    uint16_t uVar7;
    uint8_t uVar9;
    char cVar10;
    uint32_t uVar8;
    uint32_t arg_ch_00;
    uint32_t uVar11;
    uint8_t *puVar12;
    int64_t iVar13;
    int64_t iVar14;
    ulong uVar15;
    
    puVar1 = *param_1;
    iVar13 = 0;
    uVar9 = *puVar1;
    if (uVar9 == 0) {
        uVar2 = 0x8000001f;
    }
    else {
        uVar7 = CONCAT11(uVar9,uVar9 >> 4) & 0xfff;
        uVar8 = uVar7;
        uVar9 = uVar7 >> 8;
        if (uVar9 != 0) {
            puVar12 = puVar1 + uVar9;
            iVar13 = 0;
            do {
                iVar13 = fcn.000122d1(iVar13,iVar13 >> 0x20);
                iVar13 = iVar13 + *puVar12;
                puVar12 = puVar12 + -1;
                uVar5 = uVar8;
                cVar10 = (uVar8 >> 8) + -1;
                uVar8 = CONCAT11(cVar10,uVar5);
            } while (cVar10 != '\0');
            uVar8 = CONCAT11(uVar9,uVar5);
        }
        iVar14 = 0;
        cVar10 = uVar8;
        uVar4 = CONCAT11(cVar10,cVar10);
        uVar3 = uVar4 & 0xff;
        puVar12 = puVar1 + uVar3 + (uVar8 >> 8) + 1 + -1;
        uVar9 = *puVar12;
        while( true ) {
            uVar6 = uVar4;
            arg_ch_00 = iVar14 >> 0x20;
            if (cVar10 == '\0') break;
            iVar14 = fcn.000122d1(iVar14,arg_ch_00);
            iVar14 = iVar14 + *puVar12;
            puVar12 = puVar12 + -1;
            cVar10 = (uVar4 >> 8) + -1;
            uVar4 = CONCAT11(cVar10,uVar6);
        }
        if ((uVar9 < '\0') && (uVar6 < 8)) {
            uVar11 = 8 - uVar6;
            uVar4 = 0;
            arg_ch = uVar4;
            do {
                uVar15 = fcn.000122a4(uVar4,arg_ch);
                uVar4 = uVar15;
                arg_ch = uVar15 >> 0x20 | 0xff000000;
                uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
            iVar14 = CONCAT44(arg_ch_00 | arg_ch,iVar14 | uVar4);
        }
        uVar4 = *param_3;
        *param_3 = *param_3 + iVar14;
        param_3[1] = param_3[1] + (iVar14 >> 0x20) + CARRY4(uVar4,iVar14);
        *param_2 = iVar13;
        *param_1 = puVar1 + uVar3 + (uVar8 >> 8) + 1;
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00012376 @ 0x12376 */

uint __fastcall fcn.00012376(uint32_t *param_1,char *param_2)

{
    int16_t iVar1;
    uint uVar2;
    int16_t *piVar3;
    int16_t *piVar4;
    int16_t *piVar5;
    
    if (((((*param_2 == 'F') && (param_2[1] == 'I')) && (param_2[2] == 'L')) && (param_2[3] == 'E')) ||
       (((*param_2 == 'I' && (param_2[1] == 'N')) && ((param_2[2] == 'D' && (param_2[3] == 'X')))))) {
        piVar3 = param_2 + *(param_2 + 4);
        iVar1 = *(param_2 + 6) + -1;
        if (*piVar3 != 0) {
            piVar4 = param_2 + 0x1fe;
            piVar5 = piVar3;
            do {
                piVar5 = piVar5 + 1;
                if (*piVar4 != *piVar3) {
                    return 0x8000000a;
                }
                iVar1 = iVar1 + -1;
                *piVar4 = *piVar5;
                piVar4 = piVar4 + (*param_1 & 0xfffffffe);
            } while (iVar1 != 0);
            *piVar3 = 0;
        }
        uVar2 = 0;
    }
    else {
        uVar2 = 0x8000000e;
    }
    return uVar2;
}


/* fcn.0001255b @ 0x1255b */

uint __thiscall fcn.0001255b(uint param_1,int param_2,uint32_t param_3,uint32_t param_4,char *param_5)

{
    int iVar1;
    uint32_t uVar2;
    int32_t arg_ch;
    int32_t arg_8h;
    bool bVar3;
    int64_t iVar4;
    int64_t iVar5;
    ulong uVar6;
    uint32_t uStack_2c;
    uint32_t uStack_28;
    uint32_t uStack_24;
    int32_t iStack_10;
    int32_t iStack_c;
    int32_t iStack_8;
    int32_t iStack_4;
    
    iStack_10 = 0;
    iStack_c = 0;
    fcn.00012405(&iStack_10,param_1);
    iVar4 = fcn.000122fe(iStack_8,iStack_4);
    uVar2 = *(param_2 + 0xb);
    if (*(param_2 + 0xb) < 0x401) {
        uStack_2c = 0x400 / uVar2;
        uVar2 = 0x400;
    }
    else {
        uStack_2c = 1;
    }
    iVar5 = fcn.000122fe(iStack_10,iStack_c);
    uStack_28 = 0;
    uStack_24 = 0;
    do {
        if (iVar4 == 0) {
            iVar1 = fcn.00012405(&iStack_10,uStack_28);
            if (iVar1 < 0) {
                return 0x8000000e;
            }
            iVar4 = fcn.000122fe(iStack_8,iStack_4);
            iVar5 = fcn.000122fe(iStack_10,iStack_c);
        }
        else {
            iVar5 = iVar5 + uStack_2c;
            iVar4 = CONCAT44((iVar4 >> 0x20) - (iVar4 < uVar2),iVar4 - uVar2);
            bVar3 = 0xfffffffe < uStack_28;
            uStack_28 = uStack_28 + 1;
            uStack_24 = uStack_24 + bVar3;
        }
        arg_ch = iVar5 >> 0x20;
        arg_8h = iVar5;
    } while ((uStack_24 < (param_4 & 0xffff)) || ((uStack_24 <= (param_4 & 0xffff) && (uStack_28 < param_3))));
    uVar6 = fcn.000122fe(arg_8h,arg_ch);
    iVar1 = fcn.00010952(uVar6,uVar2,param_5);
    if ((-1 < iVar1) &&
       ((((*param_5 == 'F' && (param_5[1] == 'I')) && (param_5[2] == 'L')) &&
        ((param_5[3] == 'E' && (*0x4 = arg_ch, iVar1 = fcn.00012376(), _pe_dos_header = arg_8h, -1 < iVar1)))))) {
        return 0;
    }
    return 0x8000000e;
}


/* fcn.0001252c @ 0x1252c */

uint __fastcall fcn.0001252c(int param_1,uint8_t param_2,uint *param_3)

{
    uint8_t uVar1;
    uint8_t *puVar2;
    
    puVar2 = *(param_1 + 0x14) + param_1;
    while( true ) {
        uVar1 = *puVar2;
        if (uVar1 == param_2) {
            *param_3 = puVar2;
            return 0;
        }
        if (((param_2 < uVar1) || (uVar1 == 0xff)) || (*(puVar2 + 4) == 0)) break;
        puVar2 = puVar2 + *(puVar2 + 4);
    }
    return 0x8000000e;
}


/* fcn.00012834 @ 0x12834 */

void __cdecl fcn.00012834(int32_t arg_8h,int32_t arg_ch,uint32_t arg_10h,int32_t arg_14h,int32_t arg_18h)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t *puVar4;
    
    puVar4 = *0x49ac + 0x680;
    uVar2 = *puVar4;
    while( true ) {
        if (arg_10h == uVar2) {
            uVar2 = puVar4[4];
            uVar1 = puVar4[5];
            if (((uVar2 != *arg_18h) || (uVar1 != *(arg_18h + 4))) &&
               (iVar3 = fcn.0001255b(arg_8h,uVar2,uVar1,arg_ch), iVar3 == 0)) {
                *arg_18h = uVar2;
                *(arg_18h + 4) = uVar1;
            }
            return;
        }
        puVar4 = puVar4 + puVar4[1];
        arg_14h = arg_14h - puVar4[1];
        uVar2 = *puVar4;
        if (uVar2 == 0) break;
        if (arg_14h == 0) {
            return;
        }
    }
    return;
}


/* fcn.000121ff @ 0x121ff */

void fcn.000121ff(void)

{
    fcn.0001432a(*0x4644,*0x4640,0);
    return;
}


/* fcn.00012716 @ 0x12716 */

//WARNING: Removing unreachable block (ram,0x0001278e)

int __thiscall fcn.00012716(uint param_1,uint param_2,uint param_3,int param_4,uint64_t *param_5)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int iVar3;
    uint extraout_ECX;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    uint64_t uVar7;
    int32_t iStack_10;
    int32_t iStack_c;
    int32_t iStack_8;
    int32_t iStack_4;
    
    uVar4 = 0;
    iStack_10 = 0;
    iStack_c = 0;
    iVar3 = fcn.00012405(&iStack_10,param_1);
    if (-1 < iVar3) {
        while( true ) {
            uVar6 = fcn.000122fe(iStack_8,iStack_4);
            uVar7 = fcn.000122fe(uVar6,uVar6 >> 0x20);
            uVar1 = uVar7;
            if (*param_5 < uVar7) {
                uVar1 = *param_5;
            }
            uVar5 = uVar1;
            uVar6 = fcn.000122fe(iStack_10,iStack_c);
            uVar6 = fcn.000122fe(uVar6,uVar6 >> 0x20);
            if (uVar1 == 0) {
                return -0x7ffffff6;
            }
            iVar3 = fcn.00010952(uVar6,uVar5,param_4);
            if (iVar3 < 0) break;
            param_4 = param_4 + uVar5;
            uVar4 = uVar4 + uVar5;
            uVar2 = *param_5;
            *param_5 = *param_5 - uVar5;
            *(param_5 + 4) = (*(param_5 + 4) - (uVar1 >> 0x20)) - (uVar2 < uVar5);
            if (((uVar7 == uVar1) && (iVar3 = fcn.00012405(&iStack_10,extraout_ECX), iVar3 < 0)) ||
               (*param_5 == 0 && *(param_5 + 4) == 0)) break;
        }
        *(param_5 + 4) = 0;
        iVar3 = 0;
        *param_5 = uVar4;
    }
    return iVar3;
}


/* fcn.00012899 @ 0x12899 */

int __thiscall fcn.00012899(int *param_1,int32_t param_2,uint32_t param_3,int param_4,uint32_t param_5)

{
    uint32_t arg_10h;
    uint64_t uVar1;
    int iVar2;
    int iVar3;
    uint extraout_ECX;
    uint uVar4;
    uint extraout_ECX_00;
    uint32_t arg_10h_00;
    uint32_t uVar5;
    bool bVar6;
    ulong uVar7;
    uint32_t uStack_14;
    uint32_t uStack_10;
    int iStack_c;
    uint auStack_8 [2];
    
    uVar5 = param_5;
    uStack_10 = param_3;
    iStack_c = param_4;
    uStack_14 = param_5;
    iVar2 = fcn.0001255b(param_2,param_3,param_4,param_5,param_1);
    if (-1 < iVar2) {
        param_3 = uVar5;
        param_5 = param_5 & 0xffffff00;
        iVar2 = fcn.0001252c(&param_3);
        if ((iVar2 == 0) && (*(param_3 + 8) == '\0')) {
            arg_10h_00 = *(param_3 + 4) - *(param_3 + 0x14);
            param_5 = CONCAT31(param_5._1_3_,1);
            fcn.00014380(*0x49ac + 0x680,*(param_3 + 0x14) + param_3,arg_10h_00);
        }
        else {
            arg_10h_00 = param_5;
        }
        *0x4938 = '\0';
        if (param_5 != '\0') {
            fcn.00012834(param_2,uVar5,0x90,arg_10h_00,&uStack_10);
        }
        param_3 = uVar5;
        iVar2 = fcn.0001252c(&param_3);
        if (iVar2 == 0) {
            iVar2 = param_3 + *(param_3 + 0x14);
            arg_10h = *(iVar2 + 0x14);
            if (0x57 < arg_10h) {
                fcn.00014380(*0x49ac + 0x580,*(iVar2 + 0x10) + 0x10 + iVar2,arg_10h);
                *0x4938 = '\x01';
                *0x4934 = arg_10h;
            }
        }
        if (param_5 != '\0') {
            fcn.00012834(param_2,uVar5,0xa0,arg_10h_00,&uStack_10);
        }
        iVar2 = fcn.0001252c(&uStack_14);
        if (iVar2 < 0) {
            if (*0x4938 != '\0') {
                iVar2 = 0;
            }
        }
        else {
            fcn.00014380(*0x49ac + 0x500,*(uStack_14 + 0x20) + uStack_14,0x80);
            param_5 = *0x49ac + 0x500;
            param_3 = 0;
            uVar5 = 0;
            iVar2 = 0;
            param_4 = 0;
            uVar4 = extraout_ECX;
            while (iVar3 = fcn.00012405(&param_3,uVar4), iVar3 == 0) {
                bVar6 = CARRY4(uVar5,uStack_10);
                uVar5 = uVar5 + uStack_10;
                iVar2 = iVar2 + iStack_c + bVar6;
            }
            uVar7 = fcn.000122fe(uVar5,iVar2);
            _param_3 = fcn.000122fe(uVar7,uVar7 >> 0x20);
            iVar2 = _param_3 >> 0x20;
            if (*0x4625 == '\0') {
                uVar1 = _param_3 & 0xfff;
                iVar2 = fcn.000122a4(_param_3,iVar2);
                iVar2 = (uVar1 != 0) + iVar2;
                iVar3 = (**(*param_1 + 0x48))(param_1,4,iVar2,auStack_8);
                if (iVar3 < 0) {
                    return iVar3;
                }
                *0x4640 = iVar2 * 0x1000;
                *0x4644 = auStack_8[0];
                fcn.000121ff(extraout_ECX_00);
                *0x4625 = '\x01';
            }
            else if ((iVar2 != 0) || (*0x4640 < _param_3)) {
                _param_3 = *0x4640;
            }
            iVar2 = fcn.00012716(param_2,*0x49ac + 0x500,*0x4644,&param_3);
            *0x4890 = param_3;
        }
    }
    return iVar2;
}


/* fcn.00012326 @ 0x12326 */

uint __fastcall fcn.00012326(char *param_1)

{
    uint uVar1;
    
    uVar1 = 0;
    if ((((((param_1[0x10] == '\0') && (*(param_1 + 0x13) == 0)) && (*(param_1 + 0x20) == 0)) &&
         ((*(param_1 + 0x28) != 0 || *(param_1 + 0x2c) != 0 && (param_1[3] == 'N')))) &&
        ((param_1[4] == 'T' && ((param_1[5] == 'F' && (param_1[6] == 'S')))))) && (*(param_1 + 0x1fe) == -0x55ab)) {
        if ((*param_1 == -0x15) || (*param_1 == -0x17)) {
            uVar1 = 1;
        }
    }
    return uVar1;
}


/* fcn.00012b30 @ 0x12b30 */

void __cdecl fcn.00012b30(int32_t arg_8h)

{
    int32_t iVar1;
    int iVar2;
    int in_EDX;
    ulong uVar3;
    int32_t var_404h;
    
    iVar1 = arg_8h;
    uVar3 = fcn.000122fe(*(arg_8h + 0x30),*(arg_8h + 0x34));
    uVar3 = fcn.000122fe(uVar3,uVar3 >> 0x20);
    *(in_EDX + 0x1d) = uVar3;
    iVar2 = fcn.00010952(*(in_EDX + 0x1d),uVar3 >> 0x20,0x400,&var_404h);
    if (-1 < iVar2) {
        arg_8h = &var_404h;
        iVar2 = fcn.0001252c(&arg_8h);
        if (-1 < iVar2) {
            fcn.00014380(*0x49ac + 0x400,*(arg_8h + 0x20) + arg_8h,0x100);
            *0x4625 = 0;
            fcn.00012899(iVar1,5,0,&var_404h);
        }
    }
    return;
}


/* fcn.00012fb0 @ 0x12fb0 */

void fcn.00012fb0(uint param_1,int *param_2)

{
    uint uVar1;
    uint uVar2;
    char cVar3;
    int iVar4;
    int *piVar5;
    uint *puStack_8;
    int *piStack_4;
    
    uVar2 = *0x4890;
    uVar1 = *0x4644;
    puStack_8 = NULL;
    *param_2 = 0;
    iVar4 = fcn.0001144a(&piStack_4,0);
    if (-1 < iVar4) {
        if (*0x4624 == '\0') {
            piVar5 = param_2;
code_r0x00013060:
            cVar3 = fcn.00012d57(uVar2,piVar5,&puStack_8);
            if (cVar3 != '\0') {
                iVar4 = *param_2;
                *param_2 = 1;
                *(iVar4 * 4 + 0x4940) = puStack_8;
            }
        }
        else {
            piStack_4 = param_2;
            do {
                piVar5 = piStack_4;
                cVar3 = fcn.000117b3();
                if (cVar3 != '\0') goto code_r0x00013060;
                cVar3 = fcn.00012d57(uVar2,piVar5,&puStack_8);
            } while ((cVar3 != '\0') && (iVar4 = fcn.00012899(*0x4930,*puStack_8,puStack_8[1],uVar1), -1 < iVar4));
        }
    }
    return;
}


/* fcn.00012d57 @ 0x12d57 */

uint __fastcall fcn.00012d57(uint param_1,char *param_2,int param_3,char *param_4,uint *param_5)

{
    uint8_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    char *pcVar7;
    char *pcVar8;
    char *pcVar9;
    uint32_t uVar10;
    uint *puVar11;
    char *pcStack_308;
    char acStack_300 [256];
    uint auStack_200 [128];
    
    pcStack_308 = param_2;
    if (*0x4938 != '\0') {
        pcVar7 = *0x49ac + 0x580;
        uVar10 = *0x4934;
        do {
            pcVar8 = pcVar7 + 0x52;
            uVar1 = pcVar7[0x50];
            if (*0x4651 == '\0') {
                uVar3 = 0;
                if (uVar1 != 0) {
                    uVar3 = uVar1;
                    pcVar9 = acStack_300;
                    uVar5 = uVar3;
                    do {
                        cVar2 = *pcVar8;
                        pcVar8 = pcVar8 + 2;
                        *pcVar9 = cVar2;
                        pcVar9 = pcVar9 + 1;
                        uVar5 = uVar5 - 1;
                    } while (uVar5 != 0);
                }
                acStack_300[uVar3] = '\0';
                if (*param_4 != '\0') {
                    iVar4 = fcn.000105fa(uVar1);
                    goto code_r0x00012e26;
                }
            }
            else {
                uVar3 = 0;
                if (uVar1 != 0) {
                    uVar3 = uVar1;
                    puVar11 = auStack_200;
                    for (uVar5 = uVar1 >> 1; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *puVar11 = *pcVar8;
                        pcVar8 = pcVar8 + 4;
                        puVar11 = puVar11 + 1;
                    }
                    for (uVar5 = (uVar1 & 1) != 0; uVar5 != 0; uVar5 = uVar5 - 1) {
                        *puVar11 = *pcVar8;
                        pcVar8 = pcVar8 + 2;
                        puVar11 = puVar11 + 2;
                    }
                }
                *(auStack_200 + uVar3 * 2) = 0;
                iVar4 = fcn.00010594(0);
code_r0x00012e26:
                if (-1 < iVar4) {
code_r0x00012f01:
                    *param_5 = pcVar7;
                    return 1;
                }
            }
            uVar10 = uVar10 - *(pcVar7 + 8);
            pcVar7 = pcVar7 + *(pcVar7 + 8);
        } while (0x57 < uVar10);
    }
    do {
        if ((((*pcStack_308 != 'I') || (pcStack_308[1] != 'N')) || (pcStack_308[2] != 'D')) ||
           ((pcStack_308[3] != 'X' || (iVar4 = fcn.00012376(), iVar4 < 0)))) {
            return 0;
        }
        uVar10 = *(pcStack_308 + 0x1c);
        pcVar7 = pcStack_308 + *(pcStack_308 + 0x18) + 0x18;
        uVar3 = uVar10;
        if (uVar10 < 0x58) {
            return 0;
        }
        do {
            if (*(pcVar7 + 8) == 0) {
                return 0;
            }
            pcVar8 = pcVar7 + 0x52;
            uVar1 = pcVar7[0x50];
            if (*0x4651 == '\0') {
                uVar5 = 0;
                if (uVar1 != 0) {
                    uVar5 = uVar1;
                    pcVar9 = acStack_300;
                    uVar6 = uVar5;
                    do {
                        cVar2 = *pcVar8;
                        pcVar8 = pcVar8 + 2;
                        *pcVar9 = cVar2;
                        pcVar9 = pcVar9 + 1;
                        uVar6 = uVar6 - 1;
                    } while (uVar6 != 0);
                }
                acStack_300[uVar5] = '\0';
                if (*param_4 != '\0') {
                    iVar4 = fcn.000105fa(uVar1);
                    goto code_r0x00012f59;
                }
            }
            else {
                uVar5 = 0;
                if (uVar1 != 0) {
                    uVar5 = uVar1;
                    puVar11 = auStack_200;
                    for (uVar6 = uVar1 >> 1; uVar6 != 0; uVar6 = uVar6 - 1) {
                        *puVar11 = *pcVar8;
                        pcVar8 = pcVar8 + 4;
                        puVar11 = puVar11 + 1;
                    }
                    for (uVar6 = (uVar1 & 1) != 0; uVar6 != 0; uVar6 = uVar6 - 1) {
                        *puVar11 = *pcVar8;
                        pcVar8 = pcVar8 + 2;
                        puVar11 = puVar11 + 2;
                    }
                }
                *(auStack_200 + uVar5 * 2) = 0;
                iVar4 = fcn.00010594(0);
code_r0x00012f59:
                if (-1 < iVar4) goto code_r0x00012f01;
            }
            uVar3 = uVar3 - *(pcVar7 + 8);
            pcVar7 = pcVar7 + *(pcVar7 + 8);
        } while (0x57 < uVar3);
        if (uVar10 < 0x1000) {
            uVar10 = 0x1000;
        }
        else {
            uVar10 = uVar10 + 0x100 & 0xffffff00;
        }
        pcStack_308 = pcStack_308 + uVar10;
        param_3 = param_3 - uVar10;
        if (param_3 == 0) {
            return 0;
        }
    } while( true );
}


/* fcn.00012bec @ 0x12bec */

int __fastcall fcn.00012bec(uint param_1,uint param_2,uint32_t *param_3,uint32_t param_4)

{
    uint *puVar1;
    char cVar2;
    int iVar3;
    int32_t arg_8h;
    uint32_t uVar4;
    int32_t iVar5;
    uint32_t uStack_c;
    uint32_t uStack_8;
    uint uStack_4;
    
    uVar4 = 0;
    iVar3 = fcn.00010952(0,0,0x200,*0x49ac + 0x200);
    if (-1 < iVar3) {
        cVar2 = fcn.00012326();
        if (cVar2 != '\0') {
            iVar5 = arg_8h;
            iVar3 = fcn.00012b30(arg_8h);
            if (iVar3 < 0) {
                return iVar3;
            }
            *0x4930 = *0x49ac + 0x200;
            *0x4894 = param_2;
            fcn.00012fb0(iVar5,&uStack_c,iVar5);
            if (uStack_c != 0) {
                do {
                    puVar1 = *(uVar4 * 4 + 0x4940);
                    if ((puVar1[0x11] == 0) && (puVar1[0x10] <= *param_3)) {
                        uStack_c = param_4;
                        uStack_8 = puVar1[0x10];
                        uStack_4 = puVar1[0x11];
                        iVar3 = fcn.0001255b(*0x49ac + 0x200,*puVar1,*(puVar1 + 1),param_4,puVar1);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        iVar3 = fcn.0001252c(&uStack_c);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        fcn.00014380(*0x49ac + 0x500,*(uStack_c + 0x20) + uStack_c,0x80);
                        iVar3 = fcn.00012716(*0x49ac + 0x200,*0x49ac + 0x500,param_4,&uStack_8);
                        if (iVar3 < 0) {
                            return iVar3;
                        }
                        *param_3 = uStack_8;
                        return 0;
                    }
                    uVar4 = uVar4 + 1;
                } while (uVar4 < uStack_c);
            }
        }
        iVar3 = -0x7ffffff2;
    }
    return iVar3;
}


/* fcn.0001312e @ 0x1312e */

int __thiscall fcn.0001312e(int *param_1,int param_2,int param_3,uint32_t *param_4,int *param_5)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    ulong uVar6;
    int aiStack_8 [2];
    
    uVar5 = 0x400 << (*(param_2 + 0x18) & 0x1f);
    uVar2 = *param_4;
    uVar3 = uVar5 >> 2;
    if (uVar2 < 0xc) {
        if (*0x48f4 == '\0') {
            iVar4 = *(param_3 + 0x28 + uVar2 * 4);
        }
        else {
code_r0x00013236:
            if (uVar2 < uVar3 + 0xc) goto code_r0x00013314;
            if (*0x48f4 != '\x02') {
                *0x48f4 = '\x02';
                iVar4 = (**(*param_1 + 0x48))(param_1,4,((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc),aiStack_8);
                if (iVar4 < 0) {
                    return -0x7fffffe1;
                }
                *0x48ec = aiStack_8[0];
                uVar6 = fcn.000122fe(*(param_3 + 0x5c),0);
                iVar4 = fcn.00010952(uVar6,uVar5,*0x48f0);
                if (iVar4 < 0) {
                    return iVar4;
                }
                if (*0x48f4 != '\x02') goto code_r0x00013314;
            }
            uVar1 = uVar2 - 0xc;
            if (uVar1 % uVar3 == 0) {
                uVar6 = fcn.000122fe(*(*0x48f0 + -4 + (uVar1 / uVar3) * 4),0);
                iVar4 = fcn.00010952(uVar6,uVar5,*0x48ec);
                if (iVar4 < 0) {
                    return iVar4;
                }
            }
            iVar4 = *(*0x48ec + (uVar1 - (uVar1 / uVar3) * uVar3) * 4);
        }
    }
    else {
        if ((uVar2 < uVar3 + 0xc) && (*0x48f4 != '\x01')) {
            *0x48f4 = '\x01';
            iVar4 = (**(*param_1 + 0x48))(param_1,4,((uVar5 & 0xfff) != 0) + (uVar5 >> 0xc),aiStack_8);
            if (iVar4 < 0) {
                return -0x7fffffe1;
            }
            *0x48f0 = aiStack_8[0];
            uVar6 = fcn.000122fe(*(param_3 + 0x58),0);
            iVar4 = fcn.00010952(uVar6,uVar5,*0x48f0);
            if (iVar4 < 0) {
                return iVar4;
            }
        }
        if ((uVar3 + 0xc <= uVar2) || (*0x48f4 != '\x01')) goto code_r0x00013236;
        iVar4 = *(*0x48f0 + -0x30 + uVar2 * 4);
    }
    *param_5 = iVar4;
code_r0x00013314:
    *param_4 = uVar2 + 1;
    return (-(*param_5 != 0) & 0x7fffffe1) + 0x8000001f;
}


/* fcn.00013336 @ 0x13336 */

int fcn.00013336(int param_1,int param_2,int param_3,uint32_t *param_4)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    int extraout_ECX;
    uint extraout_ECX_00;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    int iVar7;
    bool bVar8;
    ulong uVar9;
    uint32_t uStack_10;
    uint uStack_c;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    uStack_c = 0;
    uVar4 = 0;
    uVar5 = 0;
    uStack_8 = 0;
    *0x48f4 = 0;
    uVar6 = 0x400 << (*(param_1 + 0x18) & 0x1f);
    uStack_10 = 0;
    uStack_4 = uVar6;
    if ((*(param_2 + 0x28) == -0xcf6) && (*(param_2 + 0x2c) == 4)) {
        uStack_8 = *(param_2 + 0x2a);
        uVar3 = 0;
        if (*(param_2 + 0x2a) != 0) {
            do {
                iVar7 = uVar3 * 0xc;
                uVar9 = fcn.000122d1(*(iVar7 + 0x3a + param_2),0);
                puVar1 = (uVar3 + 5) * 0xc + param_2;
                uVar9 = fcn.000122fe(uVar9 + *puVar1,(uVar9 >> 0x20) + CARRY4(uVar9,*puVar1));
                uVar4 = *(iVar7 + 0x38 + param_2) * extraout_ECX;
                if ((param_4[1] == 0) && (*param_4 <= uVar4)) {
                    iVar7 = fcn.00010952(uVar9,*param_4,param_3);
                    if (-1 < iVar7) {
                        uVar4 = *param_4;
                        *param_4 = *param_4 + uVar5;
                        param_4[1] = param_4[1] + uStack_10 + CARRY4(uVar4,uVar5);
                        return 0;
                    }
                    *param_4 = uVar5;
                    param_4[1] = uStack_10;
                    return iVar7;
                }
                iVar7 = fcn.00010952(uVar9,uVar4,param_3);
                if (iVar7 < 0) {
                    return iVar7;
                }
                uVar6 = *param_4;
                *param_4 = *param_4 - uVar4;
                param_4[1] = param_4[1] - (uVar6 < uVar4);
                bVar8 = CARRY4(uVar5,uVar4);
                uVar5 = uVar5 + uVar4;
                uStack_10 = uStack_10 + bVar8;
                uVar3 = uVar3 + 1;
            } while (uVar3 < uStack_8);
        }
    }
    else {
        iVar7 = fcn.0001312e(param_1,param_2,&uStack_8,&uStack_c,0xf30a);
        if (iVar7 < 0) {
            *param_4 = 0;
            param_4[1] = 0;
            return iVar7;
        }
        uStack_10 = param_3;
        do {
            uVar9 = fcn.000122fe(uVar6,0);
            if ((param_4[1] == 0) && (*param_4 <= uVar6)) {
                iVar7 = fcn.00010952(uVar9,*param_4,uStack_10);
                if (-1 < iVar7) {
                    uVar6 = *param_4;
                    *param_4 = *param_4 + uVar5;
                    param_4[1] = param_4[1] + uVar4 + CARRY4(uVar6,uVar5);
                    return 0;
                }
                *param_4 = uVar5;
                param_4[1] = uVar4;
                return iVar7;
            }
            iVar7 = fcn.00010952(uVar9,uVar6,uStack_10);
            if (iVar7 < 0) {
                return iVar7;
            }
            uVar2 = *param_4;
            *param_4 = *param_4 - uVar6;
            param_4[1] = param_4[1] - (uVar2 < uVar6);
            bVar8 = CARRY4(uVar5,uVar6);
            uVar5 = uVar5 + uVar6;
            uVar4 = uVar4 + bVar8;
            uStack_10 = uStack_10 + uVar6;
            iVar7 = fcn.0001312e(param_1,param_2,&uStack_8,&uStack_c,extraout_ECX_00);
            if (iVar7 < 0) {
                *param_4 = uVar5;
                param_4[1] = uVar4;
                return 0;
            }
        } while (*param_4 != 0 || param_4[1] != 0);
    }
    return -0x7ffffff6;
}


/* fcn.0001355c @ 0x1355c */

int __thiscall fcn.0001355c(int *param_1,int param_2,int param_3)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint extraout_ECX;
    uint32_t uVar4;
    uint32_t arg_8h;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint32_t uStack_34;
    int iStack_30;
    uint auStack_2c [2];
    uchar auStack_24 [8];
    uint uStack_1c;
    
    uVar4 = 0;
    uStack_34 = 0x400 << (*(param_2 + 0x18) & 0x1f);
    iVar5 = fcn.000122fe(uStack_34,0);
    arg_8h = param_3 - 1;
    uVar2 = *(param_2 + 0x28);
    if (uVar2 < arg_8h) {
        uVar4 = arg_8h / uVar2;
        arg_8h = arg_8h % uVar2;
        uVar4 = uVar4 << 5;
    }
    iVar1 = fcn.00010952(iVar5 + uVar4,0x20,auStack_24);
    if (-1 < iVar1) {
        *0x492c = uStack_1c;
        iVar5 = fcn.000122fe(arg_8h,0);
        iVar6 = fcn.000122fe(uStack_34,0);
        iVar1 = fcn.00010952(iVar5 + iVar6,0x80,*0x49ac + 0x980);
        if (-1 < iVar1) {
            uVar7 = fcn.000122d1(*(*0x49ac + 0x9ec),0);
            uStack_34 = uVar7 + *(*0x49ac + 0x984);
            iStack_30 = (uVar7 >> 0x20) + CARRY4(uVar7,*(*0x49ac + 0x984));
            if (*0x4625 == '\0') {
                uVar2 = uStack_34 & 0xfff;
                iVar1 = fcn.000122a4(uStack_34,iStack_30);
                iVar1 = (uVar2 != 0) + iVar1;
                iVar3 = (**(*param_1 + 0x48))(param_1,4,iVar1,auStack_2c);
                if (iVar3 < 0) {
                    return iVar3;
                }
                *0x4640 = iVar1 * 0x1000;
                *0x4644 = auStack_2c[0];
                fcn.000121ff(extraout_ECX);
                *0x4625 = '\x01';
            }
            else if ((iStack_30 != 0) || (*0x4640 < uStack_34)) {
                uStack_34 = *0x4640;
                iStack_30 = 0;
            }
            iVar1 = fcn.00013336(param_2,*0x49ac + 0x980,*0x4644,&uStack_34);
            *0x4898 = uStack_34;
            return iVar1;
        }
    }
    return -0x7ffffff2;
}


/* fcn.00013ab7 @ 0x13ab7 */

void fcn.00013ab7(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t extraout_ECX;
    uint32_t uVar4;
    uint32_t uVar5;
    uchar *puStack_114;
    uint *puStack_110;
    uchar *puStack_10c;
    uchar auStack_104 [4];
    uchar auStack_100 [256];
    
    uVar5 = 0;
    puStack_10c = *0x4644;
    puStack_110 = NULL;
    *param_2 = 0;
    iVar2 = fcn.0001144a(auStack_104,0);
    if (-1 < iVar2) {
        if (*0x4651 != '\0') {
            uVar3 = fcn.00012000();
            uVar4 = extraout_ECX;
            if (uVar3 != 0) {
                do {
                    if (0xff < *(puStack_114 + uVar5 * 2)) goto code_r0x00013b5c;
                    uVar4 = uVar5 + 1;
                    uVar5 = uVar4;
                } while (uVar4 < uVar3);
            }
            fcn.0001212c(uVar4);
            puStack_114 = auStack_100;
        }
code_r0x00013b5c:
        if (*0x4624 != '\0') {
            puStack_10c = puStack_114;
            cVar1 = fcn.000117b3();
            while (cVar1 == '\0') {
                cVar1 = fcn.00013a2e(puStack_114,&puStack_110);
                if (cVar1 == '\0') {
                    return;
                }
                iVar2 = fcn.0001355c(*0x4928,*puStack_110);
                puStack_114 = puStack_10c;
                if (iVar2 < 0) {
                    return;
                }
                cVar1 = fcn.000117b3();
            }
        }
        cVar1 = fcn.00013a2e(puStack_114,&puStack_110);
        if (cVar1 != '\0') {
            iVar2 = *param_2;
            *param_2 = 1;
            *(iVar2 * 4 + 0x4900) = puStack_110;
        }
    }
    return;
}


/* fcn.00013713 @ 0x13713 */

int __fastcall fcn.00013713(uint param_1,uint param_2,uint32_t *param_3,uint param_4)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t arg_8h;
    uint32_t uVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong uVar7;
    uint uVar8;
    uint32_t uStack_3c;
    uint32_t uStack_38;
    uint32_t uStack_34;
    int iStack_30;
    uint32_t uStack_2c;
    int iStack_28;
    uchar auStack_24 [8];
    uint uStack_1c;
    
    iVar1 = fcn.00010952(0,0,0x200,*0x49ac + 0x780);
    if (-1 < iVar1) {
        uVar2 = 0;
        do {
            if (*(uVar2 + *0x49ac + 0x780) != '\0') goto code_r0x00013979;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x200);
        fcn.00010952(0x400,0,0x200,*0x49ac + 0x780);
        if ((((*(*0x49ac + 0x7b8) == -0x10ad) && (*(*0x49ac + 0x798) < 4)) && (*(*0x49ac + 0x794) < 2)) &&
           ((*(*0x49ac + 0x78c) < *(*0x49ac + 0x784) && (*(*0x49ac + 0x790) < *(*0x49ac + 0x780))))) {
            uVar8 = 2;
            *0x4625 = 0;
            iVar1 = fcn.0001355c(*0x49ac + 0x780,2);
            if (iVar1 < 0) {
                return iVar1;
            }
            *0x4928 = *0x49ac + 0x780;
            *0x48e8 = param_2;
            fcn.00013ab7(uVar8,&uStack_3c,uVar8);
            uVar2 = uStack_3c;
            if (uStack_3c != 0) {
                uStack_34 = *(*0x49ac + 0x7d8);
                iStack_30 = 0x400 << (*(*0x49ac + 0x798) & 0x1f);
                iVar4 = fcn.000122fe(iStack_30,0);
                uVar3 = 0;
                if (uVar2 != 0) {
                    do {
                        uStack_38 = *(*0x49ac + 0x7a8);
                        arg_8h = **(uVar3 * 4 + 0x4900) - 1;
                        uVar2 = 0;
                        if (uStack_38 < arg_8h) {
                            uVar2 = arg_8h / uStack_38;
                            arg_8h = arg_8h % uStack_38;
                            uVar2 = uVar2 << 5;
                        }
                        iVar1 = fcn.00010952(iVar4 + uVar2,0x20,auStack_24);
                        if (iVar1 < 0) break;
                        *0x492c = uStack_1c;
                        iVar5 = fcn.000122fe(arg_8h,0);
                        iVar6 = fcn.000122fe(iStack_30,0);
                        iVar4 = iVar5 + iVar6;
                        iVar1 = fcn.00010952(iVar6 + iVar5,0x80,*0x49ac + 0xa00);
                        if (-1 < iVar1) {
                            uVar7 = fcn.000122d1(*(*0x49ac + 0xa6c),0);
                            uStack_2c = uVar7 + *(*0x49ac + 0xa04);
                            iStack_28 = (uVar7 >> 0x20) + CARRY4(uVar7,*(*0x49ac + 0xa04));
                            if (uStack_2c <= *param_3) {
                                iVar1 = fcn.00013336(*0x49ac + 0x780,*0x49ac + 0xa00,param_4,&uStack_2c);
                                if (iVar1 < 0) {
                                    return iVar1;
                                }
                                *param_3 = uStack_2c;
                                return 0;
                            }
                        }
                        uVar3 = uVar3 + 1;
                    } while (uVar3 < uStack_3c);
                }
            }
        }
code_r0x00013979:
        iVar1 = -0x7ffffff2;
    }
    return iVar1;
}


/* fcn.0001212c @ 0x1212c */

uint __fastcall fcn.0001212c(int16_t *param_1,uchar *param_2)

{
    char cVar1;
    uint uVar2;
    ulong uVar3;
    
    if ((param_2 == NULL) || (param_1 == NULL)) {
        uVar2 = 0x80000002;
    }
    else {
        uVar3 = fcn.00012000();
        if (uVar3 < uVar3 >> 0x20) {
            cVar1 = fcn.00011f99(param_1,uVar3 * 2 + 2);
            if (cVar1 == '\0') {
                for (; *param_1 != 0; param_1 = param_1 + 1) {
                    *param_2 = *param_1;
                    param_2 = param_2 + 1;
                }
                *param_2 = 0;
                uVar2 = 0;
            }
            else {
                uVar2 = 0x8000000f;
            }
        }
        else {
            uVar2 = 0x80000005;
        }
    }
    return uVar2;
}


/* fcn.00013a2e @ 0x13a2e */

uint __fastcall fcn.00013a2e(int param_1,int param_2,char *param_3,int *param_4)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int iVar3;
    uint32_t arg_10h;
    uchar auStack_80 [128];
    
    while( true ) {
        uVar2 = *(param_1 + 4);
        if (uVar2 == 0) {
            return 0;
        }
        uVar1 = *(param_1 + 6);
        arg_10h = 0;
        if (uVar1 != 0) {
            arg_10h = uVar1;
            fcn.00014380(auStack_80,param_1 + 8,arg_10h);
        }
        auStack_80[arg_10h] = 0;
        if ((*param_3 != '\0') && (iVar3 = fcn.000105fa(uVar1,param_3), -1 < iVar3)) break;
        param_1 = param_1 + uVar2;
        param_2 = param_2 - uVar2;
        if (param_2 == 0) {
            return 0;
        }
    }
    *param_4 = param_1;
    return 1;
}


/* fcn.00013c0c @ 0x13c0c */

void __fastcall fcn.00013c0c(uint param_1,int param_2,int param_3,uint32_t param_4,int param_5,int param_6)

{
    int iVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    ulong uVar6;
    
    if (param_5 == '\0') {
        param_5 = param_6;
        uVar4 = param_4;
        while( true ) {
            iVar2 = param_3;
            iVar1 = fcn.00010bd2(&param_3,1);
            uVar3 = *(param_2 + 0x35) * iVar1;
            uVar5 = uVar4;
            if (uVar3 < uVar4) {
                uVar5 = uVar3;
            }
            uVar3 = uVar5;
            iVar1 = param_5;
            uVar6 = fcn.000122fe(iVar2 + -2,0);
            iVar2 = fcn.00010952(uVar6 + *(param_2 + 0x2d),
                                 (uVar6 >> 0x20) + *(param_2 + 0x31) + CARRY4(uVar6,*(param_2 + 0x2d)),uVar3,iVar1);
            if ((iVar2 < 0) || (param_3 == 0)) break;
            param_5 = param_5 + uVar5;
            uVar4 = uVar4 - uVar5;
        }
    }
    else {
        uVar4 = param_4;
        iVar2 = param_6;
        uVar6 = fcn.000122fe(param_3 + -2,0);
        fcn.00010952(uVar6 + *(param_2 + 0x2d),(uVar6 >> 0x20) + *(param_2 + 0x31) + CARRY4(uVar6,*(param_2 + 0x2d)),
                     uVar4,iVar2);
    }
    return;
}


/* fcn.00013cc2 @ 0x13cc2 */

void __fastcall fcn.00013cc2(int *param_1,int param_2,int param_3)

{
    uint8_t uVar1;
    int iVar2;
    int extraout_ECX;
    uint32_t uVar3;
    uint32_t uVar4;
    ulong uVar5;
    uint uStack_c;
    uint auStack_8 [2];
    
    uStack_c = 0;
    uVar3 = 1 << (*(param_3 + 0x6c) & 0x1f);
    uVar1 = *(param_3 + 0x6d);
    iVar2 = *(param_3 + 0x54);
    uVar5 = fcn.000122fe(*(param_3 + 0x50),0);
    *(param_2 + 0x1d) = uVar5;
    uVar5 = fcn.000122fe(*(param_3 + 0x58),0);
    *(param_2 + 0x2d) = uVar5;
    uVar5 = fcn.000122fe((*(param_3 + 0x60) + -2) * ((uVar3 << (uVar1 & 0x1f)) / uVar3),0);
    *(param_2 + 0x29) = (uVar5 >> 0x20) + *(param_2 + 0x31) + CARRY4(uVar5,*(param_2 + 0x2d));
    *(param_2 + 0x25) = uVar5 + *(param_2 + 0x2d);
    *(param_2 + 0x35) = uVar3 << (*(param_3 + 0x6d) & 0x1f);
    *(param_2 + 0xc) = 5;
    iVar2 = fcn.00010af9(iVar2 * uVar3);
    if (-1 < iVar2) {
        iVar2 = fcn.00010bd2(&uStack_c,0);
        uVar3 = *(param_2 + 0x35) * iVar2;
        *0x4628 = uVar3 >> 5;
        iVar2 = ((uVar3 & 0xfff) != 0) + (uVar3 >> 0xc);
        uVar4 = iVar2 * 0x1000;
        if (*0x4640 < uVar4) {
            iVar2 = (**(*param_1 + 0x48))(param_1,4,iVar2,auStack_8);
            if (iVar2 < 0) {
                return;
            }
            *0x4644 = auStack_8[0];
            iVar2 = extraout_ECX;
            *0x4640 = uVar4;
        }
        fcn.000121ff(iVar2);
        fcn.00013c0c(*(param_3 + 0x60),uVar3,0,*0x4644);
    }
    return;
}


/* fcn.0001412c @ 0x1412c */

void fcn.0001412c(uint param_1,int *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int *piVar6;
    int iStack_10;
    int *piStack_c;
    uint auStack_8 [2];
    
    uVar5 = *0x4628;
    iStack_10 = 0;
    *param_2 = 0;
    iVar2 = fcn.0001144a(auStack_8,0);
    if (-1 < iVar2) {
        if (*0x4624 == '\0') {
            piVar6 = param_2;
code_r0x00014210:
            cVar1 = fcn.00013fae(uVar5,piVar6,&iStack_10);
            if (cVar1 != '\0') {
                iVar2 = *param_2;
                *param_2 = 1;
                *(iVar2 * 4 + 0x48c0) = iStack_10;
            }
        }
        else {
            piStack_c = param_2;
            uVar4 = uVar5;
            do {
                piVar6 = piStack_c;
                cVar1 = fcn.000117b3();
                if (cVar1 != '\0') {
                    uVar5 = uVar4;
                    goto code_r0x00014210;
                }
                cVar1 = fcn.00013fae(uVar5,piVar6,&iStack_10);
                if (cVar1 == '\0') {
                    return;
                }
                auStack_8[0] = CONCAT31(auStack_8[0]._1_3_,*(iStack_10 + 1) != '\0');
                uVar3 = *(iStack_10 + 0x18);
                if (*0x4640 < *(iStack_10 + 0x18)) {
                    uVar3 = *0x4640;
                }
                uVar4 = uVar3 >> 5;
                iVar2 = fcn.00013c0c(*(iStack_10 + 0x14),uVar3,auStack_8[0],*0x4644);
            } while (-1 < iVar2);
        }
    }
    return;
}


/* fcn.00013dfb @ 0x13dfb */

int __fastcall fcn.00013dfb(uint param_1,uint param_2,uint32_t *param_3,uint param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t uStack_c;
    uint uStack_8;
    
    uVar5 = 0;
    uStack_8 = param_2;
    iVar3 = fcn.00010952(0,0,0x200,*0x49ac + 0x200);
    if (-1 < iVar3) {
        iVar3 = *0x49ac + 0x200;
        if (((((8 < *(*0x49ac + 0x26c)) && (*(*0x49ac + 0x26c) < 0xd)) && (*(*0x49ac + 0x20b) == '\0')) &&
            ((*(*0x49ac + 0x203) == 'E' && (*(*0x49ac + 0x204) == 'X')))) &&
           ((*(*0x49ac + 0x205) == 'F' && ((*(*0x49ac + 0x206) == 'A' && (*(*0x49ac + 0x207) == 'T')))))) {
            *0x489c = param_2;
            iVar4 = fcn.00013cc2(iVar3);
            if (iVar4 < 0) {
                return iVar4;
            }
            fcn.0001412c(iVar3,&uStack_c,iVar3);
            uVar2 = uStack_c;
            if (uStack_c != 0) {
                do {
                    iVar3 = *(uVar5 * 4 + 0x48c0);
                    uVar1 = *(iVar3 + 0x18);
                    if (uVar1 <= *param_3) {
                        uStack_c = CONCAT31(uStack_c._1_3_,*(iVar3 + 1) >> 1) & 0xffffff01;
                        iVar3 = fcn.00013c0c(*(iVar3 + 0x14),uVar1,uStack_c,param_4);
                        if (-1 < iVar3) {
                            *param_3 = uVar1;
                            return 0;
                        }
                    }
                    uVar5 = uVar5 + 1;
                } while (uVar5 < uVar2);
            }
        }
        iVar3 = -0x7ffffff2;
    }
    return iVar3;
}


/* fcn.00013fae @ 0x13fae */

uint __fastcall fcn.00013fae(uint param_1,int param_2,uint32_t param_3,char *param_4,int *param_5)

{
    uint32_t uVar1;
    char *pcVar2;
    int iVar3;
    char cVar5;
    uint32_t uVar4;
    uint8_t uVar6;
    ushort uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    ushort *puVar10;
    char *pcVar11;
    uint8_t uStack_192;
    uint8_t uStack_191;
    char *pcStack_184;
    char acStack_180 [128];
    ushort auStack_100 [128];
    
    pcStack_184 = NULL;
    uVar8 = 0;
    uStack_191 = 0;
    uVar9 = 0;
    uStack_192 = 0;
    if (param_3 != 0) {
        puVar10 = param_2 + 0x26;
        do {
            cVar5 = *(puVar10 + -0x13);
            if (cVar5 == '\0') {
                return 0;
            }
            if ((cVar5 < '\0') && (cVar5 == -0x7b)) {
                iVar3 = uVar9 + 1;
                if (*(puVar10 + -3) == -0x40) {
                    uStack_192 = *(puVar10 + -3);
                    iVar3 = uVar9 + 2;
                    *puVar10 = puVar10[-0x11];
                    uVar4 = uStack_192;
                    uVar8 = uVar4;
                    uStack_191 = uStack_192;
                    pcStack_184 = puVar10 + -3;
                }
                else {
                    uVar4 = uStack_192;
                }
                pcVar2 = param_2 + iVar3 * 0x20;
                while ((pcVar11 = pcVar2, *pcVar11 == -0x3f && (uVar4 != '\0'))) {
                    uVar4 = CONCAT11(*0x4651,uVar4);
                    uVar8 = uVar8 & 0xffffff00;
                    do {
                        uVar7 = uVar8;
                        uVar1 = uVar8 >> 8;
                        cVar5 = uVar4 >> 8;
                        if (cVar5 == '\0') {
                            acStack_180[uVar1] = pcVar11[(uVar8 & 0xff) * 2 + 2];
                        }
                        else {
                            auStack_100[uVar1] = *(pcVar11 + (uVar8 & 0xff) * 2 + 2);
                        }
                        uStack_192 = uVar4 - 1;
                        uVar4 = CONCAT31(uVar4 >> 8,uStack_192);
                        if (uStack_192 == 0) {
                            uVar7 = CONCAT31(uVar8 >> 8,0xf);
                            if (cVar5 == '\0') {
                                acStack_180[uVar1 + 1] = '\0';
                                if (*param_4 == '\0') goto code_r0x000140e3;
                                iVar3 = fcn.000105fa(uStack_191,param_4);
                            }
                            else {
                                auStack_100[uVar1 + 1] = 0;
                                iVar3 = fcn.00010594(0,uStack_191);
                            }
                            if (-1 < iVar3) {
                                *param_5 = pcStack_184;
                                return 1;
                            }
                            uVar4 = *0x4651 << 8;
                        }
code_r0x000140e3:
                        uVar6 = uVar7 + 1;
                        uVar8 = CONCAT11((uVar7 >> 8) + '\x01',uVar6);
                        pcVar2 = pcVar11 + 0x20;
                    } while (uVar6 < 0xf);
                }
            }
            uVar9 = uVar9 + 1;
            puVar10 = puVar10 + 0x10;
        } while (uVar9 < param_3);
    }
    return 0;
}


