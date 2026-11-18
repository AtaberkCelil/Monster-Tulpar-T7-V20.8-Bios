// decompiled by r2ghidra: 0997_I2cHostDxe.pe32
// functions: 9

/* entry0 @ 0x10428 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t aiStackX_8 [4];
    
    *0x11048 = *(arg2 + 0x60);
    *0x11040 = arg2;
    (**(*0x11048 + 0x98))(arg1,0x10f00,aiStackX_8);
    *(aiStackX_8[0] + 0x58) = 0x102e0;
    *0x10fe0 = arg1;
    *0x10fe8 = arg1;
    (**(*0x11048 + 0x148))(0x10fe8,0x10f50,0x10fc0,0x10f60,0x10f70,0x10f30,0x10f88,0);
    return;
}


/* fcn.00010e58 @ 0x10e58 */

ulong fcn.00010e58(int64_t arg1,int64_t arg2)

{
    char *pcVar1;
    char *pcVar2;
    uint64_t uVar3;
    char cVar4;
    char cVar5;
    uint64_t uVar6;
    
    cVar4 = *arg1;
    do {
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        uVar6 = 0;
        if (cVar4 != '\0') {
            cVar5 = cVar4;
            do {
                if (cVar5 == ';') break;
                uVar6 = uVar6 + 1;
                cVar5 = *(arg1 + uVar6);
            } while (cVar5 != '\0');
        }
        pcVar1 = arg2;
        pcVar2 = arg1;
        uVar3 = uVar6;
        if (uVar6 == 0) {
code_r0x00010eb8:
            if (*(uVar6 + arg2) == '\0') {
                return 0;
            }
        }
        else {
            for (; (((cVar4 != '\0' && (*pcVar1 != '\0')) && (*pcVar2 == *pcVar1)) && (1 < uVar3)); uVar3 = uVar3 - 1) {
                cVar4 = pcVar2[1];
                pcVar1 = pcVar1 + 1;
                pcVar2 = pcVar2 + 1;
            }
            if (*pcVar2 == *pcVar1) goto code_r0x00010eb8;
        }
        arg1 = arg1 + uVar6;
        cVar4 = *arg1;
        if (cVar4 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar4 != ';') break;
            arg1 = arg1 + 1;
            cVar4 = *arg1;
        } while (cVar4 != '\0');
        cVar4 = *arg1;
    } while( true );
}


/* fcn.00010dfc @ 0x10dfc */

ulong fcn.00010dfc(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x11048 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    for (uVar1 = arg2 >> 3; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
    }
    return arg1;
}


/* fcn.00010aac @ 0x10aac */

int64_t fcn.00010aac(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    
    piVar1 = arg1 + 0x30;
    piVar2 = *piVar1;
    if (piVar2[6] != NULL) {
        *piVar2[6] = arg2;
    }
    if (piVar2[4] != 0) {
        (**(*0x11048 + 0x68))();
    }
    *(*piVar2 + 8) = piVar2[1];
    *piVar2[1] = *piVar2;
    (**(*0x11048 + 0x48))(piVar2[5]);
    (**(*0x11048 + 0x48))(piVar2 + -1);
    if (*piVar1 != piVar1) {
        fcn.00010b50(arg1);
    }
    return arg2;
}


/* fcn.00010b50 @ 0x10b50 */

ulong fcn.00010b50(uint32_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong uVar3;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0x8000000000000006;
    iVar1 = *(*(arg1_00 + 0x30) + 0x10);
    if (*(arg1_00 + 8) == iVar1) {
        uVar2 = (**(*0x11048 + 0x18))(0x10);
        *(arg1_00 + 0x20) = 0;
        fcn.00010a54(*(arg1_00 + 0x10),arg1_00);
        (**(*0x11048 + 0x20))(uVar2);
    }
    else {
        *(arg1_00 + 0x28) = 1;
        uVar3 = (***(arg1_00 + 0x50))(*(arg1_00 + 0x50),iVar1,*(arg1_00 + 0x10),arg1_00 + 0x20);
    }
    return uVar3;
}


/* fcn.00010a54 @ 0x10a54 */

void fcn.00010a54(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    *(arg1 + 0x28) = 0;
    iVar1 = *(arg1 + 0x20);
    if (iVar1 < 0) {
        fcn.00010aac(arg1,iVar1);
        *(arg1 + 8) = 0xffffffffffffffff;
    }
    else {
        iVar1 = *(arg1 + 0x30);
        *(arg1 + 8) = *(iVar1 + 0x10);
        (**(*(arg1 + 0x58) + 0x10))(*(arg1 + 0x58),*(iVar1 + 0x18),*(iVar1 + 0x28),*(arg1 + 0x18),arg1 + 0x20);
    }
    return;
}


/* fcn.00010e2c @ 0x10e2c */

void fcn.00010e2c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010dfc(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3200 named .text
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


