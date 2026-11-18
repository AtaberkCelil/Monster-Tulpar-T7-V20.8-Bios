// decompiled by r2ghidra: 1925_HttpUtilitiesDxe.pe32
// functions: 10

/* entry0 @ 0x10424 */

void entry0(ulong noname_0,int64_t arg1)

{
    int64_t aiStackX_8 [4];
    
    *0x10ee8 = *(arg1 + 0x60);
    *0x10ee0 = arg1;
    (**(*0x10ee8 + 0x98))(noname_0,0x10e80,aiStackX_8);
    aiStackX_8[1] = 0;
    *(aiStackX_8[0] + 0x58) = 0x10364;
    (**(*0x10ee8 + 0x148))(aiStackX_8 + 1,0x10e90,0x10ea0,0);
    return;
}


/* fcn.00010b3c @ 0x10b3c */

void fcn.00010b3c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010b0c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102c0(arg1_00,arg1);
    }
    return;
}


/* fcn.00010b0c @ 0x10b0c */

ulong fcn.00010b0c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10ee8 + 0x40))(4,param_2,auStackX_18);
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


/* fcn.00010bd4 @ 0x10bd4 */

ulong fcn.00010bd4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    ulong uVar4;
    
    if (((arg1 == 0) || (arg2 == 0)) || (arg3 == 0)) {
        uVar4 = 0x8000000000000002;
    }
    else {
        if (*arg1 != 0) {
            (**(*0x10ee8 + 0x48))();
        }
        if (*(arg1 + 8) != 0) {
            (**(*0x10ee8 + 0x48))();
        }
        iVar2 = 0;
        cVar1 = *arg2;
        while (cVar1 != '\0') {
            iVar2 = iVar2 + 1;
            cVar1 = *(iVar2 + arg2);
        }
        iVar2 = iVar2 + 1;
        iVar3 = fcn.00010b3c(iVar2);
        *arg1 = iVar3;
        if (iVar3 != 0) {
            if ((iVar2 != 0) && (iVar3 != arg2)) {
                section..text(iVar3,arg2,iVar2);
            }
            *(*arg1 + -1 + iVar2) = 0;
            iVar2 = 0;
            cVar1 = *arg3;
            while (cVar1 != '\0') {
                iVar2 = iVar2 + 1;
                cVar1 = *(iVar2 + arg3);
            }
            iVar2 = iVar2 + 1;
            iVar3 = fcn.00010b3c(iVar2);
            *(arg1 + 8) = iVar3;
            if (iVar3 != 0) {
                if ((iVar2 != 0) && (iVar3 != arg3)) {
                    section..text(iVar3,arg3,iVar2);
                }
                *(*(arg1 + 8) + -1 + iVar2) = 0;
                return 0;
            }
            (**(*0x10ee8 + 0x48))(*arg1);
        }
        uVar4 = 0x8000000000000009;
    }
    return uVar4;
}


/* fcn.00010b68 @ 0x10b68 */

int64_t * fcn.00010b68(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    
    if ((((arg1 != 0) && (arg2 != 0)) && (arg3 != 0)) && (uVar2 = 0, arg1 != 0)) {
        do {
            iVar1 = fcn.00010a94(*arg2,arg3);
            if (iVar1 == 0) {
                return arg2;
            }
            uVar2 = uVar2 + 1;
            arg2 = arg2 + 0x10;
        } while (uVar2 < arg1);
    }
    return NULL;
}


/* section..text @ 0x10280 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 3072 named .text
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


/* fcn.00010e10 @ 0x10e10 */

void fcn.00010e10(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    
    if (arg1 != 0) {
        if (arg2 != 0) {
            piVar1 = arg1 + 8;
            do {
                if (piVar1[-1] != 0) {
                    (**(*0x10ee8 + 0x48))();
                }
                if (*piVar1 != 0) {
                    (**(*0x10ee8 + 0x48))();
                }
                piVar1 = piVar1 + 2;
                arg2 = arg2 + -1;
            } while (arg2 != 0);
        }
        (**(*0x10ee8 + 0x48))(arg1);
    }
    return;
}


/* fcn.00010cfc @ 0x10cfc */

char * fcn.00010cfc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char *pcVar2;
    char cVar3;
    char *pcVar4;
    char cVar5;
    
    if (arg2 == 0) {
        return NULL;
    }
    if (arg3 == 0) {
        return NULL;
    }
    *arg2 = 0;
    *arg3 = 0;
    cVar5 = *arg1;
    if (cVar5 != '\0') {
        pcVar2 = arg1;
        cVar3 = cVar5;
        do {
            pcVar4 = "\r\n\r\n";
            pcVar1 = pcVar2;
            if (cVar3 == '\r') {
                do {
                    if (cVar3 == '\0') break;
                    pcVar1 = pcVar1 + 1;
                    pcVar4 = pcVar4 + 1;
                    cVar3 = *pcVar1;
                } while (cVar3 == *pcVar4);
                if (*pcVar4 == '\0') goto code_r0x00010d60;
            }
            if (*pcVar1 == '\0') {
                return NULL;
            }
            pcVar2 = pcVar2 + 1;
            cVar3 = *pcVar2;
        } while (cVar3 != '\0');
    }
    pcVar2 = NULL;
code_r0x00010d60:
    if (pcVar2 == NULL) {
        return NULL;
    }
    pcVar1 = arg1;
    while( true ) {
        if (cVar5 == '\0') {
            return NULL;
        }
        if (cVar5 == ':') break;
        pcVar1 = pcVar1 + 1;
        cVar5 = *pcVar1;
    }
    pcVar4 = pcVar1 + 1;
    if (pcVar4 == NULL) {
        return NULL;
    }
    *pcVar1 = '\0';
    while( true ) {
        for (; (cVar5 = *pcVar4, cVar5 == ' ' || (cVar5 == '\t')); pcVar4 = pcVar4 + 1) {
            if (pcVar2 == pcVar4) {
                return NULL;
            }
        }
        if ((cVar5 != '\r') || (pcVar2 - pcVar4 < 3)) break;
        if (pcVar4[1] != '\n') {
            return NULL;
        }
        if ((pcVar4[2] != ' ') && (pcVar4[2] != '\t')) break;
        pcVar4 = pcVar4 + 3;
    }
    pcVar2 = pcVar4;
    do {
        while( true ) {
            pcVar1 = pcVar2;
            if (*pcVar1 == '\0') {
                return NULL;
            }
            if (*pcVar1 == '\r') break;
            pcVar2 = pcVar1 + 1;
        }
        if (pcVar1 + 1 == NULL) {
            return NULL;
        }
        if (pcVar1[1] != '\n') {
            return NULL;
        }
        pcVar2 = pcVar1 + 2;
    } while ((*pcVar2 == ' ') || (*pcVar2 == '\t'));
    *pcVar1 = '\0';
    *arg2 = arg1;
    *arg3 = pcVar4;
    return pcVar2;
}


/* fcn.00010a94 @ 0x10a94 */

int64_t fcn.00010a94(int64_t arg1,int64_t arg2)

{
    char cVar1;
    char cVar2;
    char cVar3;
    
    cVar3 = *arg1;
    if (*arg1 + 0x9fU < 0x1a) {
        cVar3 = cVar3 + -0x20;
    }
    cVar2 = *arg2;
    if (cVar2 + 0x9fU < 0x1a) {
        cVar1 = cVar2 + -0x20;
    }
    else {
        cVar1 = cVar2;
    }
    if (*arg1 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if ((cVar2 == '\0') || (cVar3 != cVar1)) break;
            arg2 = arg2 + 1;
            cVar3 = *(arg2 + arg1);
            if (cVar3 + 0x9fU < 0x1a) {
                cVar3 = cVar3 + -0x20;
            }
            cVar2 = *arg2;
            cVar1 = cVar2;
            if (cVar2 + 0x9fU < 0x1a) {
                cVar1 = cVar2 + -0x20;
            }
        } while (*(arg2 + arg1) != '\0');
    }
    return cVar3 - cVar1;
}


