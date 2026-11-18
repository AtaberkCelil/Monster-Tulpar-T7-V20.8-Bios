// decompiled by r2ghidra: 1727_TcgPlatformSetupPolicy.pe32
// functions: 4

/* entry0 @ 0x10320 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x10cc0 = *(arg2 + 0x60);
    *0x10cc8 = *(arg2 + 0x58);
    *0x10cb8 = arg2;
    fcn.000107ac(arg1,arg2);
    return;
}


/* fcn.000107ac @ 0x107ac */

ulong fcn.000107ac(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    uchar uVar4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uint auStackX_18 [2];
    ulong uStackX_20;
    int32_t var_c20h;
    int64_t var_c28h;
    ulong uStack_cd8;
    uchar auStack_cd0 [8];
    uchar auStack_cc8 [16];
    uchar uStack_cb8;
    uchar uStack_cb7;
    uchar uStack_cb6;
    uchar uStack_cb5;
    uchar uStack_cb4;
    uchar uStack_cb3;
    uchar uStack_caf;
    uchar uStack_cad;
    uchar uStack_cab;
    uchar uStack_caa;
    uchar uStack_ca9;
    uchar uStack_ca8;
    uchar uStack_ca7;
    uchar uStack_ca6;
    uint8_t uStack_c9f;
    uint8_t uStack_c9e;
    uint8_t uStack_c9d;
    uint8_t uStack_c9c;
    char cStack_c9b;
    
    uStackX_20 = 1;
    uStack_cd8 = 0xca9;
    iStackX_8 = arg1;
    iStackX_10 = arg2;
    iVar2 = (**(*0x10cc0 + 0x40))(4,0x28,0x10cb0);
    if (iVar2 < 0) {
        uVar3 = 0x8000000000000009;
    }
    else {
        auStackX_18[0] = 3;
        iVar2 = (**(*0x10cc8 + 0x48))(L"TcgInternalSyncFlag",0x10be0,auStackX_18,&uStackX_20,&iStackX_10);
        uVar4 = iStackX_10;
        if (iVar2 < 0) {
            uVar4 = 0;
        }
        iStackX_10 = CONCAT71(iStackX_10._1_7_,uVar4);
        iVar2 = (**(*0x10cc8 + 0x48))(L"Setup",0x10c00,auStackX_18,&uStack_cd8,auStack_cc8);
        **0x10cb0 = 3;
        if (iVar2 < 0) {
            fcn.00010260(*0x10cb0 + 1,0x1b,0);
        }
        else {
            fcn.00010260(*0x10cb0 + 1,0x1b,0);
            (*0x10cb0)[1] = uStack_cb3;
            (*0x10cb0)[2] = uStack_cb8;
            (*0x10cb0)[3] = uStack_caf;
            (*0x10cb0)[4] = uStack_cb7;
            (*0x10cb0)[0xf] = iStackX_10;
            (*0x10cb0)[6] = uStack_cab;
            (*0x10cb0)[7] = uStack_ca6;
            (*0x10cb0)[5] = 0;
            (*0x10cb0)[8] = 1;
            (*0x10cb0)[9] = uStack_cb6;
            (*0x10cb0)[10] = uStack_cb5;
            (*0x10cb0)[0xb] = uStack_cb4;
            (*0x10cb0)[0xc] = 0;
            (*0x10cb0)[0xd] = 0;
            (*0x10cb0)[0xe] = uStack_cad;
            (*0x10cb0)[0x10] = 0;
            (*0x10cb0)[0x11] = 0;
            (*0x10cb0)[0x12] = 0;
            (*0x10cb0)[0x13] = 0;
            (*0x10cb0)[0x16] = uStack_ca8;
            (*0x10cb0)[0x15] = uStack_ca9;
            (*0x10cb0)[0x14] = uStack_caa;
            (*0x10cb0)[0x17] = uStack_ca7;
            iVar2 = fcn.00010b8c();
            uVar1 = (**(iVar2 + 0x30))(10);
            *(*0x10cb0 + 0x18) = uStack_c9f & uVar1 | uStack_c9e & 2 | uStack_c9d & 4 | uStack_c9c & 8;
            if (cStack_c9b == '\x01') {
                *(*0x10cb0 + 0x18) = *(*0x10cb0 + 0x18) | 0x10;
            }
        }
        *(*0x10cb0 + 0x20) = 0x1034c;
        *0x10cd8 = (*0x10cb0)[1];
        *0x10cd9 = (*0x10cb0)[2];
        *0x10cda = (*0x10cb0)[3];
        *0x10cdb = (*0x10cb0)[4];
        *0x10cdd = (*0x10cb0)[6];
        *0x10cde = (*0x10cb0)[7];
        *0x10cdf = (*0x10cb0)[8];
        *0x10ce0 = (*0x10cb0)[9];
        *0x10ce1 = (*0x10cb0)[10];
        *0x10ce2 = (*0x10cb0)[0xb];
        *0x10ce3 = (*0x10cb0)[0xc];
        *0x10ce4 = (*0x10cb0)[0xd];
        *0x10ce5 = (*0x10cb0)[0xe];
        *0x10ce6 = (*0x10cb0)[0xf];
        *0x10ce7 = (*0x10cb0)[0x10];
        *0x10ce8 = (*0x10cb0)[0x11];
        *0x10ce9 = (*0x10cb0)[0x12];
        *0x10cea = (*0x10cb0)[0x13];
        *0x10ced = (*0x10cb0)[0x16];
        *0x10cec = (*0x10cb0)[0x15];
        *0x10ceb = (*0x10cb0)[0x14];
        *0x10cee = (*0x10cb0)[0x17];
        *0x10cef = *(*0x10cb0 + 0x18);
        (**(*0x10cc0 + 0x148))(&iStackX_8,0x10c10,*0x10cb0,0);
        uVar3 = (**(*0x10cc0 + 0x170))(0x200,8,0x10740,0,0x10c30,auStack_cd0);
    }
    return uVar3;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 2432 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.00010b8c @ 0x10b8c */

int64_t fcn.00010b8c(void)

{
    if (*0x10cd0 == 0) {
        (**(*0x10cc0 + 0x140))(0x10bf0,0,0x10cd0);
    }
    return *0x10cd0;
}


