// decompiled by r2ghidra: 0438_MotherBoardHealthDxe.pe32
// functions: 9

/* entry0 @ 0x102bc */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x108d8 = *(arg2 + 0x60);
    *0x108e0 = *(arg2 + 0x58);
    *0x108d0 = arg2;
    fcn.0001049c(arg1,arg2);
    return;
}


/* fcn.0001049c @ 0x1049c */

int64_t fcn.0001049c(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    ulong *puVar2;
    int64_t iVar3;
    int64_t *arg1_00;
    int64_t var_18h;
    int64_t var_30h;
    int64_t var_bp_20h;
    int64_t var_14h;
    
    var_18h = 0x10;
    fcn.00010260(&var_30h,0x10);
    iVar1 = (**(*0x108e0 + 0x48))(0x10880,0x10860,0,&var_18h,&var_30h);
    if (iVar1 != 0) {
        if (iVar1 == -0x7ffffffffffffff2) {
            iVar1 = (**(*0x108e0 + 0x58))(0x10880,0x10860,7,0x10,&var_30h);
        }
        if (iVar1 < 0) {
            return iVar1;
        }
    }
    iVar1 = fcn.0001064c();
    if ((iVar1 != 0) && (puVar2 = fcn.00010260(iVar1,0x28), puVar2 != NULL)) {
        *puVar2 = 0;
        puVar2[1] = 0x10364;
        arg1_00 = &var_bp_20h;
        puVar2[2] = 0x10458;
        puVar2[3] = 0x102e8;
        fcn.00010260(arg1_00,0x14);
        stack0xffffffffffffffdc = *0x10840;
        var_14h = *0x10848;
        var_bp_20h._0_4_ = 0x140401;
        iVar3 = fcn.00010768(arg1_00,&var_bp_20h);
        iVar1 = *0x108d8;
        if (iVar3 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            puVar2[4] = iVar3;
            iVar1 = (**(iVar1 + 0x148))(puVar2,0x10850,puVar2 + 1,0x10870,iVar3,0);
            if (-1 < iVar1) {
                return iVar1;
            }
        }
        (**(*0x108d8 + 0x48))(puVar2);
        if (iVar3 != 0) {
            (**(*0x108d8 + 0x48))(iVar3);
        }
        return iVar1;
    }
    return -0x7ffffffffffffff7;
}


/* fcn.0001064c @ 0x1064c */

ulong fcn.0001064c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x108d8 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
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


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 1504 named .text
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


/* fcn.00010768 @ 0x10768 */

ulong fcn.00010768(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t arg1_00;
    ulong noname_0_00;
    int64_t iVar4;
    
    uVar3 = 0;
    if (arg1 == 0) {
        noname_0_00 = 0x108a4;
        iVar2 = fcn.00010718(0x108a4);
        if (iVar2 != 0) {
            uVar3 = fcn.0001067c(noname_0_00,iVar2,0x108a4);
        }
    }
    else {
        uVar1 = *(arg1 + 2);
        iVar2 = fcn.0001064c(noname_0,uVar1 + 4);
        if (iVar2 != 0) {
            if ((uVar1 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.00010280(iVar2,arg1,uVar1);
            }
            iVar4 = *(iVar2 + 2) + iVar2;
            if (iVar4 != 0x108a4) {
                fcn.00010280(iVar4,0x108a4,4);
            }
            iVar4 = iVar2;
            arg1_00 = fcn.00010718(iVar2);
            if (arg1_00 != 0) {
                uVar3 = fcn.0001067c(iVar4,arg1_00,iVar2);
            }
            (**(*0x108d8 + 0x48))(iVar2);
        }
    }
    return uVar3;
}


/* fcn.000106bc @ 0x106bc */

bool fcn.000106bc(uint32_t arg1)

{
    uint in_register_0000000c;
    char *pcVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    
    pcVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    if (pcVar1 != NULL) {
        while( true ) {
            if ((*pcVar1 == '\x7f') && (pcVar1[1] == -1)) {
                return *(pcVar1 + 2) == 4;
            }
            uVar2 = *(pcVar1 + 2);
            if ((((uVar2 < 4) || (~uVar3 < uVar2)) || (uVar3 = uVar3 + uVar2, 0xfffffffffffffffb < uVar3)) ||
               (((*pcVar1 == '\x04' && (pcVar1[1] == '\x04')) && (*(pcVar1 + (uVar2 - 2)) != 0)))) break;
            pcVar1 = pcVar1 + uVar2;
        }
    }
    return false;
}


/* fcn.00010718 @ 0x10718 */

char * fcn.00010718(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.000106bc(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.0001067c @ 0x1067c */

void fcn.0001067c(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001064c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.00010280(arg1_00,arg2,arg1);
    }
    return;
}


