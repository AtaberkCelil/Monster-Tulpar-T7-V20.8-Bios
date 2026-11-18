// decompiled by r2ghidra: 1850_NvmeInt13.pe32
// functions: 2

/* entry0 @ 0x10260 */

void entry0(int64_t arg1,int64_t arg2)

{
    //[00] -r-x section size 1024 named .text
    *0x106c8 = *(arg2 + 0x60);
    *0x106c0 = arg2;
    fcn.00010280(arg1,arg2);
    return;
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    ushort uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    uint64_t auStackX_10 [3];
    
    auStackX_10[1] = 0;
    auStackX_10[0] = 0;
    iStackX_8 = arg1;
    iVar2 = (**(*0x106c8 + 0x140))(0x10660,0,0x106b8);
    if ((-1 < iVar2) && (iVar2 = (***0x106b8)(1,0,5,&iStackX_8,auStackX_10), uVar1 = *0x10688, -1 < iVar2)) {
        if ((iStackX_8 == 0) || (auStackX_10[0] == 0)) {
            iVar2 = -0x7ffffffffffffff2;
        }
        else {
            uVar3 = *(iStackX_8 + 0x6ef);
            if (auStackX_10[0] < uVar3 + 0xb) {
                iVar2 = -0x7ffffffffffffffe;
            }
            else {
                *(uVar3 + iStackX_8) = *0x10680;
                *(uVar3 + 8 + iStackX_8) = uVar1;
                *(uVar3 + 10 + iStackX_8) = *0x1068a;
                *0x106b0 = (*(*0x106b8)[8])(iStackX_8,auStackX_10[0] & 0xffff,0x10);
                *0x106d0 = 0x103b0;
                iVar2 = (**(*0x106c8 + 0x80))(auStackX_10 + 1,0x10670,0,0x106d0);
            }
        }
    }
    return iVar2;
}


