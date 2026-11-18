// decompiled by r2ghidra: 2459_OemModelIDPei.te
// functions: 20

/* fcn.0000017e @ 0x17e */

//WARNING: Control flow encountered bad instruction data
//WARNING: Variable defined which should be unmapped: var_1h

uint __fastcall fcn.0000017e(uint32_t param_1)

{
    uint uVar1;
    uint extraout_ECX;
    int32_t var_1h;
    
    fcn.00000317();
    uVar1 = fcn.0000026a(extraout_ECX,extraout_ECX);
    fcn.00000577();
    switch(param_1 >> 0x18) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    *0xfe41074c = *0xfe41074c & 0xc0 | 0x4d;
    if ((*0xfe4107ca & 1) == 0) {
        *0xfe4107ca = *0xfe4107ca | 1;
    }
    return uVar1;
}


/* entry0 @ 0x179 */

//WARNING: Control flow encountered bad instruction data
//WARNING: Variable defined which should be unmapped: var_1h

uint __fastcall entry0(uint32_t param_1)

{
    uint uVar1;
    uint extraout_ECX;
    int32_t var_1h;
    
    fcn.00000317();
    uVar1 = fcn.0000026a(extraout_ECX,extraout_ECX);
    fcn.00000577();
    switch(param_1 >> 0x18) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    }
    *0xfe41074c = *0xfe41074c & 0xc0 | 0x4d;
    if ((*0xfe4107ca & 1) == 0) {
        *0xfe4107ca = *0xfe4107ca | 1;
    }
    return uVar1;
}


/* fcn.00000317 @ 0x317 */

uint fcn.00000317(void)

{
    char cVar1;
    uint uVar2;
    uint extraout_ECX;
    
    cVar1 = fcn.000003cc();
    if (cVar1 != '\0') {
        fcn.0000038d();
    }
    cVar1 = fcn.000003df();
    if (cVar1 == '\0') {
        fcn.00000429(extraout_ECX);
        uVar2 = 0;
        fcn.00000552(0xf8098,0);
        fcn.00000515(0xf8098,0);
    }
    else {
        uVar2 = 0x80000003;
    }
    return uVar2;
}


/* fcn.0000026a @ 0x26a */

uint fcn.0000026a(void)

{
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int16_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int16_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.000005aa();
    fcn.00000603();
    fcn.000005aa();
    fcn.00000603();
    *0xfd882774 = *0xfd882774 | 0x800;
    return 0;
}


/* fcn.000005aa @ 0x5aa */

ulong __fastcall fcn.000005aa(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.00000603 @ 0x603 */

ulong __fastcall fcn.00000603(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.00000577 @ 0x577 */

void __fastcall fcn.00000577(int param_1)

{
    if (param_1 != -0x1bef2bf) {
        section..text(param_1,0xfe410d41,1);
    }
    return;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1473 named .text
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.000003cc @ 0x3cc */

uint32_t fcn.000003cc(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000409();
    return uVar1 >> 0xc & 1;
}


/* fcn.00000409 @ 0x409 */

uint __fastcall fcn.00000409(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.0000038d @ 0x38d */

uint __fastcall fcn.0000038d(int param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    if ((param_2 != NULL) && (param_1 < 2)) {
        uVar1 = -(param_1 != 1) & 0xfffffff0;
        uVar1 = fcn.000004de(uVar1 + 0xf80a8,0xfff07fff < uVar1 + 0xa8);
        *param_2 = uVar1 & 0xffff0000;
        return 0;
    }
    return 0x80000002;
}


/* fcn.000004de @ 0x4de */

uint __cdecl fcn.000004de(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.000003df @ 0x3df */

uint32_t fcn.000003df(void)

{
    char cVar1;
    uint32_t uVar2;
    
    cVar1 = fcn.00000494();
    if (cVar1 != '\0') {
        uVar2 = fcn.00000409();
        return uVar2 >> 0x17 & 1;
    }
    uVar2 = fcn.00000409();
    return uVar2 >> 0x1f;
}


/* fcn.00000494 @ 0x494 */

bool fcn.00000494(void)

{
    char cVar1;
    
    cVar1 = fcn.00000456();
    return cVar1 == '\x04';
}


/* fcn.00000456 @ 0x456 */

char fcn.00000456(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd50fc4 == -1) {
        uVar1 = fcn.00000447();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd50fc4 = cVar2;
    }
    return *0xffd50fc4;
}


/* fcn.00000429 @ 0x429 */

void __fastcall fcn.00000429(uint param_1,uint32_t param_2)

{
    *((param_2 & 0xffff8800 | 0xfffd8800) << 8 | param_2 & 0xffff) = 0xfe410001;
    return;
}


/* fcn.00000552 @ 0x552 */

void fcn.00000552(int32_t param_1,int32_t param_2)

{
    fcn.000004de(param_1,param_2);
    fcn.00000515(param_1,param_2);
    return;
}


/* fcn.00000515 @ 0x515 */

void __cdecl fcn.00000515(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.000004a3 @ 0x4a3 */

ushort __cdecl fcn.000004a3(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000447 @ 0x447 */

void fcn.00000447(void)

{
    fcn.000004a3(0xf8002,0);
    return;
}


