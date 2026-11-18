// decompiled by r2ghidra: 0030_RomLayoutDxe.pe32
// functions: 13

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000102fc(arg1,arg2);
    fcn.00010464(arg1,arg2);
    return;
}


/* fcn.000102fc @ 0x102fc */

void fcn.000102fc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg2_00;
    int64_t iVar2;
    uint64_t noname_0;
    uint64_t uVar3;
    int64_t iStackX_8;
    
    *0x10b58 = *(arg2 + 0x60);
    *0x10b50 = arg2;
    *0x10b60 = arg1;
    fcn.00010904();
    fcn.000108a4(0x10ae0,0x10b70);
    iStackX_8 = 0;
    iVar1 = fcn.000108a4(0x10ab0,&iStackX_8);
    if (iVar1 < 0) {
        arg2_00 = fcn.00010934(0x10ab0);
    }
    else {
        arg2_00 = iStackX_8;
    }
    if (arg2_00 != 0) {
        *0x10b7c = *(arg2_00 + 0x18);
        *0x10b80 = *(arg2_00 + 0x1c);
        *0x10b78 = ((*(arg2_00 + 2) - 0x28) / *(arg2_00 + 0x20)) * *0x10b80;
        iVar2 = fcn.000109ec(*0x10b78);
        *0x10b88 = iVar2;
        if (iVar2 != 0) {
            uVar3 = arg2_00 + 0x28;
            *0x10b90 = *0x10b78 + iVar2;
            noname_0 = *(arg2_00 + 2) + arg2_00;
            if (uVar3 < noname_0) {
                noname_0 = *0x10b80;
                do {
                    (**(*0x10b58 + 0x160))(iVar2,uVar3 + 8,noname_0);
                    noname_0 = *0x10b80;
                    uVar3 = uVar3 + *(arg2_00 + 0x20);
                    iVar2 = iVar2 + noname_0;
                } while (uVar3 < *(arg2_00 + 2) + arg2_00);
            }
            if (iVar1 < 0) {
                iVar1 = fcn.00010a20(noname_0,*(arg2_00 + 2),arg2_00);
                if (iVar1 != 0) {
                    (**(*0x10b58 + 0xc0))(0x10ab0,iVar1);
                }
            }
        }
    }
    return;
}


/* fcn.00010464 @ 0x10464 */

ulong fcn.00010464(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    ulong auStackX_10 [3];
    uchar auStack_38 [48];
    
    auStackX_10[0] = 0;
    iStackX_8 = arg1;
    fcn.00010934(0x10aa0);
    for (iVar2 = *0x10b88; iVar2 != 0; iVar2 = fcn.000109bc(iVar2)) {
        if ((*(iVar2 + 0x24) & 0x808) == 0x800) {
            (**(*0x10b58 + 0x160))(auStack_38,iVar2,*0x10b80);
            cVar1 = fcn.0001076c(auStack_38);
            if (cVar1 == '\x01') {
                fcn.00010980(auStack_38);
            }
        }
    }
    iVar2 = (**(*0x10b58 + 0x50))(0x200,8,0x107bc,0,0x10b48);
    if (-1 < iVar2) {
        (**(*0x10b58 + 0xa8))(0x10b08,*0x10b48,auStackX_10);
    }
    (**(*0x10b58 + 0x148))(&iStackX_8,0x10ac0,0x10af0,0);
    return 0;
}


/* fcn.00010904 @ 0x10904 */

int64_t fcn.00010904(void)

{
    if (*0x10b68 == 0) {
        fcn.000108a4(0x10ad0,0x10b68);
    }
    return *0x10b68;
}


/* fcn.000108a4 @ 0x108a4 */

ulong fcn.000108a4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10b50;
    uVar4 = 0;
    *arg2 = 0;
    uVar1 = *(iVar3 + 0x68);
    if (uVar1 != 0) {
        piVar2 = *(iVar3 + 0x70);
        piVar5 = piVar2;
        do {
            if ((*CONCAT44(in_register_0000000c,arg1) == *piVar5) &&
               (CONCAT44(in_register_0000000c,arg1)[1] == piVar5[1])) {
                *arg2 = piVar2[uVar4 * 3 + 2];
                return 0;
            }
            uVar4 = uVar4 + 1;
            piVar5 = piVar5 + 3;
        } while (uVar4 < uVar1);
    }
    return 0x800000000000000e;
}


/* fcn.00010934 @ 0x10934 */

void fcn.00010934(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.00010904();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x00010962:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x00010962;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000109ec @ 0x109ec */

ulong fcn.000109ec(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x10b58 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00010a20 @ 0x10a20 */

int64_t fcn.00010a20(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x10b58 + 0x40))(6,arg1,&iStackX_20);
    if (iVar1 < 0) {
        iStackX_20 = 0;
    }
    if (((iStackX_20 != 0) && (arg1 != 0)) && (iStackX_20 != arg2)) {
        iStackX_20 = section..text(iStackX_20,arg2,arg1);
    }
    return iStackX_20;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2080 named .text
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


/* fcn.0001076c @ 0x1076c */

char fcn.0001076c(int64_t arg1)

{
    char cVar1;
    int64_t *piVar2;
    int64_t iVar3;
    
    iVar3 = 0;
    cVar1 = '\x01';
    if (*0x10b40 != 0) {
        piVar2 = 0x10b40;
        do {
            cVar1 = (**piVar2)(arg1);
            if (cVar1 == '\0') {
                return '\0';
            }
            iVar3 = iVar3 + 1;
            piVar2 = iVar3 * 8 + 0x10b40;
        } while (*piVar2 != 0);
    }
    return cVar1;
}


/* fcn.00010980 @ 0x10980 */

ulong fcn.00010980(uint32_t arg1)

{
    ulong uVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    ulong auStackX_8 [4];
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    auStackX_8[0] = 0;
    if (*(iVar2 + 0x10) == -1) {
        uVar1 = 0x8000000000000011;
    }
    else {
        uVar1 = (**(*0x10b70 + 0x98))(*(iVar2 + 0x10),*(iVar2 + 0x1c),auStackX_8);
    }
    return uVar1;
}


/* fcn.000109bc @ 0x109bc */

uint64_t fcn.000109bc(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if ((((uVar2 != 0) && (*0x10b88 <= uVar2)) && (uVar2 <= *0x10b90)) && (uVar1 = 0, uVar2 + *0x10b80 < *0x10b90)) {
        uVar1 = uVar2 + *0x10b80;
    }
    return uVar1;
}


/* fcn.000106f8 @ 0x106f8 */

ulong fcn.000106f8(int64_t arg1,int64_t arg2)

{
    char cVar1;
    ulong uVar2;
    uchar auStack_38 [48];
    
    uVar2 = 0x8000000000000002;
    if ((arg1 != 0) && (arg2 != 0)) {
        fcn.00010934(0x10aa0);
        (**(*0x10b58 + 0x160))(auStack_38,arg2,*0x10b80);
        cVar1 = fcn.0001076c(auStack_38);
        if (cVar1 == '\x01') {
            uVar2 = fcn.00010980(auStack_38);
        }
    }
    return uVar2;
}


