// decompiled by r2ghidra: 0538_OA3.pe32
// functions: 7

/* entry0 @ 0x102e0 */

void entry0(int64_t noname_0,int64_t arg1)

{
    *0x10798 = *(arg1 + 0x60);
    *0x107a0 = *(arg1 + 0x58);
    *0x10790 = arg1;
    fcn.000106a0();
    fcn.00010498(noname_0,arg1);
    return;
}


/* fcn.000106a0 @ 0x106a0 */

int64_t fcn.000106a0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x107b0 == 0) {
        *0x107b0 = 0;
        if (*(*0x10790 + 0x68) != 0) {
            piVar2 = *(*0x10790 + 0x70);
            do {
                if ((*0x10740 == *piVar2) && (*0x10748 == piVar2[1])) {
                    *0x107b0 = (*(*0x10790 + 0x70))[uVar1 * 3 + 2];
                    return *0x107b0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10790 + 0x68));
        }
    }
    return *0x107b0;
}


/* fcn.00010498 @ 0x10498 */

ulong fcn.00010498(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    uint64_t uVar3;
    ulong *puStackX_8;
    uint *puStackX_10;
    ulong uStackX_18;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_bp_10h;
    
    puStackX_10 = NULL;
    var_bp_20h = 0;
    var_18h = 0;
    var_bp_10h = 0;
    var_30h = 0x1368881;
    var_2ch = 0x4b1dc4ad;
    var_28h = 0x7ad531b6;
    var_24h = 0x6bdbc88e;
    puStackX_8 = arg1;
    iVar1 = fcn.000106a0();
    if ((*(iVar1 + 0xc) != 0x20) && (iVar1 = fcn.000106a0(), *(iVar1 + 0xc) != 0x12)) {
        iVar1 = (**(*0x10798 + 0x40))(10,0x55,&puStackX_10);
        if (iVar1 < 0) {
            return 0;
        }
        *puStackX_10 = 0x4d44534d;
        puStackX_10[1] = 0x55;
        *(puStackX_10 + 2) = 3;
        puStackX_10[6] = 0x1072009;
        puStackX_10[7] = 0x20494d41;
        puStackX_10[8] = 0x1000013;
        iVar1 = fcn.00010664();
        iVar1 = (**(iVar1 + 0x28))(0x225);
        if (puStackX_10 + 10 != iVar1) {
            section..text(puStackX_10 + 10,iVar1,6);
        }
        iVar1 = fcn.00010664();
        uVar2 = (**(iVar1 + 0x20))(0x163);
        *(puStackX_10 + 4) = uVar2;
        if (puStackX_10 + 9 != 0xff060000) {
            section..text(puStackX_10 + 9,0xff060000,0x31);
        }
        uVar3 = 0;
        do {
            if (*(puStackX_10 + uVar3 + 0x38) != -1) {
                puStackX_8 = NULL;
                uStackX_18 = 0;
                iVar1 = (**(*0x10798 + 0x140))(0x10730,0,&puStackX_8);
                if (-1 < iVar1) {
                    (**puStackX_8)(puStackX_8,puStackX_10,0x55,&uStackX_18);
                }
                (**(*0x10798 + 0x48))(puStackX_10);
                return 0;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x1d);
        var_18h = puStackX_10;
        var_bp_10h = 0xff060000;
        (**(*0x107a0 + 0x58))(L"OA3MSDMvariable",&var_30h,6,0x18,&var_bp_20h);
        return 0;
    }
    fcn.00010310();
    return 0;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    char cVar2;
    char *pcVar3;
    char *pcVar4;
    
    do {
        pcVar3 = arg1;
        pcVar4 = arg2;
        if (arg3 == 0) break;
        arg3 = arg3 + -1;
        pcVar4 = arg2 + 1;
        pcVar3 = arg1 + 1;
        cVar2 = *arg2;
        cVar1 = *arg1;
        arg1 = pcVar3;
        arg2 = pcVar4;
    } while (cVar1 == cVar2);
    return pcVar3[-1] - pcVar4[-1];
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 1216 named .text
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


/* fcn.00010664 @ 0x10664 */

int64_t fcn.00010664(void)

{
    if (*0x107a8 == 0) {
        (**(*0x10798 + 0x140))(0x10720,0,0x107a8);
    }
    return *0x107a8;
}


/* fcn.00010310 @ 0x10310 */

ulong fcn.00010310(void)

{
    int64_t iVar1;
    int16_t *piVar2;
    int64_t arg1;
    uint64_t uVar3;
    ulong uVar4;
    
    uVar3 = 0;
    uVar4 = 0x800000000000000e;
    arg1 = *(*0x10790 + 0x70);
    if (*(*0x10790 + 0x68) == 0) {
        return 0x800000000000000e;
    }
code_r0x000103ac:
    if ((arg1 == 0x10740) || (iVar1 = fcn.000102a0(arg1,0x10740,0x10), iVar1 == 0)) {
        piVar2 = *(arg1 + 0x10);
        do {
            if (*piVar2 == -1) {
                piVar2 = NULL;
code_r0x000103f5:
                if (piVar2 == NULL) break;
                if ((*(piVar2 + 4) == 0x412e2295dac3cb98) && (*(piVar2 + 8) == 0x31cf20a3eefd6d82))
                goto code_r0x00010406;
            }
            else if (*piVar2 == 4) goto code_r0x000103f5;
            piVar2 = piVar2 + piVar2[1];
        } while( true );
    }
    goto code_r0x00010450;
code_r0x00010406:
    if ((piVar2 != NULL) && ((piVar2[0x10] == '\0' && (iVar1 = *(piVar2 + 0xc), iVar1 != 0)))) {
        if ((*(iVar1 + 0x28) == 0x4856465f) &&
           ((*(*(iVar1 + 0x34) + iVar1) == 0x45f3b62b9f8b1def && (*(*(iVar1 + 0x34) + 8 + iVar1) == 0x1b8019ead7bf8282))
           )) {
            return 0x8000000000000003;
        }
        if (iVar1 + 0x60000 != 0xff060000) {
            section..text(iVar1 + 0x60000,0xff060000,0x31);
        }
        uVar4 = 0;
    }
code_r0x00010450:
    uVar3 = uVar3 + 1;
    arg1 = arg1 + 0x18;
    if (*(*0x10790 + 0x68) <= uVar3) {
        return uVar4;
    }
    goto code_r0x000103ac;
}


