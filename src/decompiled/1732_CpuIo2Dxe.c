// decompiled by r2ghidra: 1732_CpuIo2Dxe.pe32
// functions: 8

/* entry0 @ 0x102d0 */

void entry0(ulong noname_0,int64_t arg1)

{
    *0x107a0 = *(arg1 + 0x60);
    *0x10798 = arg1;
    (**(*0x107a0 + 0x148))(0x10790,0x10720,0x10730,0);
    return;
}


/* fcn.0001030c @ 0x1030c */

uint64_t fcn.0001030c(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t uVar2;
    int64_t in_R9;
    uint64_t in_stack_00000028;
    
    if ((in_stack_00000028 != 0) && (arg2 < 0xc)) {
        if (arg2 - 4 < 4) {
            in_R9 = 1;
        }
        arg2 = arg2 & 3;
        if ((arg1 != '\0') || (arg2 != 3)) {
            uVar2 = *(arg2 + 0x10750);
            if ((arg3 & uVar2 - 1) == 0) {
                uVar1 = (-(arg1 != '\0') & 0xffffffffffff0000) + 0xffff;
                if (in_R9 != 0) {
                    uVar1 = uVar1 >> arg2;
                    if (uVar1 < in_R9 - 1U) {
                        return 0x8000000000000003;
                    }
                    uVar1 = (uVar1 - in_R9) + 1 << arg2;
                }
                if (arg3 <= uVar1) {
                    if (8 < *(arg2 + 0x10750)) {
                        uVar2 = 8;
                    }
                    return -((uVar2 - 1 & in_stack_00000028) != 0) & 0x8000000000000003;
                }
            }
            return 0x8000000000000003;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001029b @ 0x1029b */

void fcn.0001029b(int64_t arg1)

{
    uint uVar1;
    int64_t in_RDX;
    uint *in_R8;
    
    while (in_RDX != 0) {
        in_RDX = in_RDX + -1;
        uVar1 = in(arg1);
        *in_R8 = uVar1;
        in_R8 = in_R8 + 1;
    }
    return;
}


/* fcn.0001028d @ 0x1028d */

void fcn.0001028d(int64_t arg1)

{
    ushort uVar1;
    int64_t in_RDX;
    ushort *in_R8;
    
    while (in_RDX != 0) {
        in_RDX = in_RDX + -1;
        uVar1 = in(arg1);
        *in_R8 = uVar1;
        in_R8 = in_R8 + 1;
    }
    return;
}


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(int64_t arg1)

{
    uchar uVar1;
    int64_t in_RDX;
    uchar *in_R8;
    
    //[00] -r-x section size 1184 named .text
    while (in_RDX != 0) {
        in_RDX = in_RDX + -1;
        uVar1 = in(arg1);
        *in_R8 = uVar1;
        in_R8 = in_R8 + 1;
    }
    return;
}


/* fcn.000102c3 @ 0x102c3 */

void fcn.000102c3(int64_t arg1)

{
    int64_t in_RDX;
    uint *in_R8;
    
    while (in_RDX != 0) {
        in_RDX = in_RDX + -1;
        out(*in_R8,arg1);
        in_R8 = in_R8 + 1;
    }
    return;
}


/* fcn.000102b5 @ 0x102b5 */

void fcn.000102b5(int64_t arg1)

{
    int64_t in_RDX;
    ushort *in_R8;
    
    while (in_RDX != 0) {
        in_RDX = in_RDX + -1;
        out(*in_R8,arg1);
        in_R8 = in_R8 + 1;
    }
    return;
}


/* fcn.000102a8 @ 0x102a8 */

void fcn.000102a8(int64_t arg1)

{
    int64_t in_RDX;
    uchar *in_R8;
    
    while (in_RDX != 0) {
        in_RDX = in_RDX + -1;
        out(*in_R8,arg1);
        in_R8 = in_R8 + 1;
    }
    return;
}


