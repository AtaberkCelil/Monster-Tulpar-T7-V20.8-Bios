// decompiled by r2ghidra: 2055_MsegSmramPeim.te
// functions: 16

/* entry0 @ 0x179 */

int __fastcall entry0(int32_t param_1)

{
    ulong uVar1;
    uint8_t uVar2;
    int iVar3;
    int32_t var_4h;
    
    var_4h = param_1;
    uVar2 = fcn.000003bc(param_1,param_1);
    if ((((uVar2 & 0x70) == 0x30) && (uVar1 = rdmsr(0xce), (uVar1 >> 0x3b & 1) != 0)) &&
       (fcn.000003d3(0xce,&var_4h), (var_4h >> 6 & 1) != 0)) {
        iVar3 = fcn.000001ca();
        if (iVar3 < 0) {
            return iVar3;
        }
        iVar3 = fcn.00000285();
        return iVar3;
    }
    return 0;
}


/* fcn.000003bc @ 0x3bc */

uint fcn.000003bc(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000417(0,0);
    return *((uVar1 | 0xb0060) + 0xc0000000);
}


/* fcn.00000417 @ 0x417 */

ulong __cdecl fcn.00000417(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.000003d3 @ 0x3d3 */

//WARNING: Removing unreachable block (ram,0x000003fe)
//WARNING: Removing unreachable block (ram,0x000003ef)
//WARNING: Removing unreachable block (ram,0x000003f7)
//WARNING: Removing unreachable block (ram,0x0000040d)

uint __cdecl fcn.000003d3(uint noname_0,int32_t arg_ch)

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


/* fcn.000001ca @ 0x1ca */

uint __fastcall fcn.000001ca(uint param_1)

{
    uint32_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    uint uVar7;
    int *piVar8;
    int *piVar9;
    
    iVar6 = fcn.0000032f(param_1,param_1);
    if (iVar6 == 0) {
        uVar7 = 0x8000000e;
    }
    else {
        iVar3 = *(iVar6 + 0x18);
        piVar8 = fcn.0000039a();
        fcn.000002cd(iVar3 * 0x20 + 8);
        *piVar8 = iVar3 + 1;
        piVar9 = piVar8 + iVar3 * 8 + -6;
        if (piVar8 + iVar3 * 8 + 2 != piVar9) {
            section..text(piVar8 + iVar3 * 8 + 2,piVar9,0x20);
        }
        puVar1 = piVar8 + iVar3 * 8 + 6;
        uVar2 = *puVar1;
        *puVar1 = *puVar1 - 0x11a000;
        iVar4 = piVar8[iVar3 * 8 + 4];
        piVar8[iVar3 * 8 + 7] = piVar8[iVar3 * 8 + 7] + -1 + (0x119fff < uVar2);
        iVar5 = piVar8[iVar3 * 8 + 6];
        piVar8[iVar3 * 8] = piVar8[iVar3 * 8] | 0x10;
        *piVar9 = iVar4 + iVar5;
        piVar8[iVar3 * 8 + -4] = iVar4 + iVar5;
        piVar8[iVar3 * 8 + 1] = piVar8[iVar3 * 8 + 1];
        piVar9[1] = 0;
        piVar8[iVar3 * 8 + -3] = 0;
        piVar8[iVar3 * 8 + -2] = 0x11a000;
        piVar8[iVar3 * 8 + -1] = 0;
        fcn.000000e0(iVar6 + 8,0x10);
        uVar7 = 0;
    }
    return uVar7;
}


/* fcn.00000285 @ 0x285 */

uint fcn.00000285(void)

{
    uint32_t *puVar1;
    int iVar2;
    uint32_t *puVar3;
    
    iVar2 = fcn.0000032f();
    if ((iVar2 != 0) && (puVar1 = iVar2 + 0x18, puVar1 != NULL)) {
        puVar3 = fcn.0000039a();
        if ((1 < *puVar1) && (puVar3 != puVar1 + *puVar1 * 8 + -0xe)) {
            section..text(puVar3,puVar1 + *puVar1 * 8 + -0xe,0x20);
        }
        return 0;
    }
    return 0x8000000e;
}


/* fcn.0000032f @ 0x32f */

uint fcn.0000032f(void)

{
    char cVar1;
    int iVar2;
    uint extraout_ECX;
    
    fcn.000002e3();
    do {
        iVar2 = fcn.0000030e();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000474();
    } while (cVar1 == '\0');
    return extraout_ECX;
}


/* fcn.0000039a @ 0x39a */

int fcn.0000039a(void)

{
    int iVar1;
    
    iVar1 = fcn.00000361();
    if (iVar1 != 0) {
        fcn.0000045b();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.00000361 @ 0x361 */

int32_t __fastcall fcn.00000361(uint param_1,uint param_2)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x34))(*(stack0xffffffee + -4),4,param_2,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.0000045b @ 0x45b */

uint * __fastcall fcn.0000045b(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* section..text @ 0xa0 */

uint * section..text(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    //[00] -r-x section size 1025 named .text
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


/* fcn.000002cd @ 0x2cd */

int __fastcall fcn.000002cd(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = section..text(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000000e0 @ 0xe0 */

uint * fcn.000000e0(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
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


/* fcn.000002e3 @ 0x2e3 */

int32_t fcn.000002e3(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000474 @ 0x474 */

uint32_t __fastcall fcn.00000474(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x650;
    if ((((*0x650 == *param_2) && (uVar1 = *0x654, *0x654 == param_2[1])) && (uVar1 = *0x658, *0x658 == param_2[2]))
       && (uVar1 = *0x65c, *0x65c == param_2[3])) {
        return CONCAT31(*0x65c >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.0000030e @ 0x30e */

int16_t * __fastcall fcn.0000030e(uint param_1,int16_t *param_2)

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


