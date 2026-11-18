// decompiled by r2ghidra: 2198_FspNotifyPhasePeim.pe32
// functions: 8

/* entry0 @ 0x10349 */

uint entry0(void)

{
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    if (*(*0xfed00148 + 0x59) == '\0') {
        var_4h = &var_14h;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffea + -4) + 0x20))(*(stack0xffffffea + -4),0x680,0,&var_8h,&var_ch);
        var_4h = &var_1ch;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffe2 + -4) + 0x1c))(*(stack0xffffffe2 + -4),var_8h,0x71c);
    }
    else {
        fcn.00010400();
    }
    return 0;
}


/* fcn.00010425 @ 0x10425 */

uint fcn.00010425(uint param_1)

{
    uint uVar1;
    
    uVar1 = *(*0xfed00148 + 8);
    *(*0xfed00148 + 8) = param_1;
    return uVar1;
}


/* fcn.00010400 @ 0x10400 */

void __fastcall fcn.00010400(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.0001048a @ 0x1048a */

void fcn.0001048a(void)

{
    uint32_t var_4h;
    
    fcn.00010436();
    fcn.000105fc();
    if (*(*0xfed00148 + 0x59) == '\0') {
        *(*(*0xfed00148 + 8) + 0x24) = 0;
        fcn.00010220();
    }
    return;
}


/* fcn.000104d6 @ 0x104d6 */

void fcn.000104d6(void)

{
    int iVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t var_8h;
    int8_t var_1h;
    
    uVar2 = 0;
    do {
        fcn.00010436();
        if (uVar2 == 0) {
            *(*0xfed00148 + 0xc) = 0x6000;
code_r0x00010533:
            fcn.000105fc();
        }
        else {
            if (uVar2 == 1) {
                *(*0xfed00148 + 0xc) = 0x4000;
                goto code_r0x00010533;
            }
            if (uVar2 == 2) {
                *(*0xfed00148 + 0xc) = 0x2000;
                goto code_r0x00010533;
            }
        }
        iVar1 = **(*(*0xfed00148 + 8) + 0x34);
        if (*(uVar2 * 4 + 0x728) == iVar1) {
            iVar3 = 0;
            if (iVar1 == 0x20) {
                fcn.00010400();
code_r0x0001058f:
                if (iVar3 < 0) goto code_r0x00010594;
            }
            else {
                if ((iVar1 != 0x40) && (iVar1 != 0xf0)) {
                    iVar3 = -0x7ffffffe;
                    goto code_r0x0001058f;
                }
                fcn.00010400();
            }
            uVar2 = uVar2 + 1;
        }
        else {
            iVar3 = -0x7ffffffd;
        }
code_r0x00010594:
        fcn.00010436();
        if (((uVar2 == 1) || (uVar2 == 2)) || (uVar2 == 3)) {
            fcn.000105fc();
        }
        if (*(*0xfed00148 + 0x59) == '\0') {
            do {
                *(*(*0xfed00148 + 8) + 0x24) = iVar3;
                fcn.00010220();
            } while (iVar3 != 0);
        }
        if (2 < uVar2) {
            return;
        }
    } while( true );
}


/* fcn.00010220 @ 0x10220 */

//WARNING: Unable to track spacebase fully for stack

ulong fcn.00010220(void)

{
    uint *puVar1;
    uint auStack_30 [2];
    
    //[00] -r-x section size 1088 named .text
    auStack_30[0] = InterruptDescriptorTableRegister();
    puVar1 = fcn.00010425(auStack_30);
    InterruptDescriptorTableRegister(*puVar1);
    return CONCAT44(puVar1[7],puVar1[9]);
}


/* fcn.00010436 @ 0x10436 */

ulong __fastcall fcn.00010436(uchar param_1)

{
    int iVar1;
    uint uVar2;
    uint uVar3;
    ulong uVar4;
    int iVar5;
    
    iVar5 = *0xfed00148;
    if (*(*0xfed00148 + 0x80) < 0x20) {
        uVar4 = rdtsc();
        iVar1 = *(*0xfed00148 + 0x80);
        *(*0xfed00148 + 0x84 + iVar1 * 8) = uVar4;
        *(iVar5 + 0x88 + iVar1 * 8) = uVar4 >> 0x20;
        *(iVar5 + 0x8b + *(iVar5 + 0x80) * 8) = param_1;
    }
    iVar1 = *(iVar5 + 0x80);
    uVar2 = *(iVar5 + 0x84 + iVar1 * 8);
    uVar3 = *(iVar5 + 0x88 + iVar1 * 8);
    *(iVar5 + 0x80) = iVar1 + 1;
    return CONCAT44(uVar3,uVar2);
}


/* fcn.000105fc @ 0x105fc */

uint32_t __fastcall fcn.000105fc(uint param_1,uint param_2)

{
    uint32_t uVar1;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    uVar1 = (**(**(stack0xfffffff2 + -4) + 0x58))(*(stack0xfffffff2 + -4),1,param_2,0,0x6c0,0);
    return uVar1 & -(uVar1 != 0xa0000002);
}


