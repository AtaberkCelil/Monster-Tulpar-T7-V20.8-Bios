// decompiled by r2ghidra: 2180_SaInitFsp.pe32
// functions: 14

/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    char cVar1;
    int iVar2;
    int iVar3;
    int extraout_ECX;
    
    fcn.00010446();
    iVar2 = fcn.00010471();
    if (iVar2 != 0) {
        do {
            cVar1 = fcn.00010514();
            iVar2 = extraout_ECX;
            if (cVar1 != '\0') break;
            iVar3 = fcn.00010471();
            iVar2 = 0;
        } while (iVar3 != 0);
        if (iVar2 != 0) {
            *0x6ac = *(iVar2 + 0x19);
        }
    }
    fcn.000104c3();
    fcn.000104c3();
    return;
}


/* fcn.000104c3 @ 0x104c3 */

void __fastcall fcn.000104c3(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x24))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* entry0 @ 0x10326 */

void entry0(void)

{
    uint uVar1;
    int *piVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    int extraout_ECX;
    int32_t var_ch;
    ushort uStack_c;
    ushort uStack_a;
    int32_t var_4h;
    
    if (*(*0xfed00148 + 0x59) == '\x01') {
        var_4h = &var_ch;
        uVar1 = InterruptDescriptorTableRegister();
        var_ch._2_2_ = uVar1 >> 0x10;
        piVar2 = *(CONCAT22(uStack_c,var_ch._2_2_) + -4);
        (**(*piVar2 + 0x24))(piVar2,0x66c);
        return;
    }
    uStack_c = 0x34b;
    uStack_a = 1;
    fcn.00010446();
    uStack_c = 0x352;
    uStack_a = 1;
    iVar4 = fcn.00010471();
    if (iVar4 != 0) {
        do {
            uStack_c = 0x360;
            uStack_a = 1;
            cVar3 = fcn.00010514();
            iVar4 = extraout_ECX;
            if (cVar3 != '\0') break;
            uStack_c = 0x36f;
            uStack_a = 1;
            iVar5 = fcn.00010471();
            iVar4 = 0;
        } while (iVar5 != 0);
        if (iVar4 != 0) {
            *0x6ac = *(iVar4 + 0x19);
        }
    }
    uStack_c = 0x38b;
    uStack_a = 1;
    fcn.000104c3();
    uStack_c = 0x395;
    uStack_a = 1;
    fcn.000104c3();
    return;
}


/* fcn.000105e4 @ 0x105e4 */

uint fcn.000105e4(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00010446 @ 0x10446 */

int32_t fcn.00010446(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00010471 @ 0x10471 */

int16_t * __fastcall fcn.00010471(uint param_1,int16_t *param_2)

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


/* fcn.00010514 @ 0x10514 */

uint32_t __fastcall fcn.00010514(uint param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *0x630;
    if ((((*0x630 == *param_2) && (uVar1 = *0x634, *0x634 == param_2[1])) && (uVar1 = *0x638, *0x638 == param_2[2]))
       && (uVar1 = *0x63c, *0x63c == param_2[3])) {
        return CONCAT31(*0x63c >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00010563 @ 0x10563 */

ushort fcn.00010563(void)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = fcn.000105a0(0,0);
    iVar2 = fcn.000104ff();
    return *(iVar2 + (uVar1 | 0x50000));
}


/* fcn.000105a0 @ 0x105a0 */

ulong __cdecl fcn.000105a0(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.000104ff @ 0x104ff */

void fcn.000104ff(void)

{
    int iVar1;
    
    iVar1 = fcn.000104e8();
    (**(iVar1 + 0x10))(0x650,0x200002);
    return;
}


/* fcn.000104e8 @ 0x104e8 */

int32_t __fastcall fcn.000104e8(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00010492(param_1,&var_4h);
    return var_4h;
}


/* fcn.00010492 @ 0x10492 */

void __cdecl fcn.00010492(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0x600,0,0,arg_ch);
    return;
}


/* fcn.00010541 @ 0x10541 */

uchar fcn.00010541(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = fcn.000105a0(0,param_2 & 1);
    iVar2 = fcn.000104ff();
    return *(iVar2 + (uVar1 | param_1));
}


/* fcn.00010585 @ 0x10585 */

uint fcn.00010585(void)

{
    uint32_t uVar1;
    int iVar2;
    
    uVar1 = fcn.000105a0(0,0);
    iVar2 = fcn.000104ff();
    return *(iVar2 + (uVar1 | 0x48));
}


