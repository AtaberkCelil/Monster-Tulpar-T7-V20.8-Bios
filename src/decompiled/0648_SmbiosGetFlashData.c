// decompiled by r2ghidra: 0648_SmbiosGetFlashData.pe32
// functions: 9

/* entry0 @ 0x102e0 */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t aiStackX_8 [4];
    
    fcn.00010328(arg1,arg2);
    aiStackX_8[0] = arg1;
    iVar1 = fcn.00010520();
    if (-1 < iVar1) {
        (**(*0x10898 + 0x148))(aiStackX_8,0x10830,0x10860,0);
    }
    return;
}


/* fcn.00010328 @ 0x10328 */

void fcn.00010328(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int16_t *arg2_00;
    int64_t iVar2;
    int16_t *noname_0;
    int16_t *piVar3;
    int16_t *piStackX_8;
    
    *0x10898 = *(arg2 + 0x60);
    *0x10890 = arg2;
    piStackX_8 = arg1;
    fcn.00010728();
    fcn.000106c8(0x10850,0x108a8);
    piStackX_8 = NULL;
    iVar1 = fcn.000106c8(0x10820,&piStackX_8);
    if (iVar1 < 0) {
        arg2_00 = fcn.00010728();
        do {
            if (*arg2_00 == -1) {
                arg2_00 = NULL;
code_r0x000103bf:
                if (arg2_00 == NULL) {
                    return;
                }
                if ((*0x10820 == *(arg2_00 + 4)) && (*0x10828 == *(arg2_00 + 8))) goto code_r0x000103db;
            }
            else if (*arg2_00 == 4) goto code_r0x000103bf;
            arg2_00 = arg2_00 + arg2_00[1];
        } while( true );
    }
    arg2_00 = piStackX_8;
code_r0x000103db:
    if (arg2_00 != NULL) {
        *0x108c0 = *(arg2_00 + 0xe);
        *0x108b0 = ((arg2_00[1] - 0x28) / *(arg2_00 + 0x10)) * *0x108c0;
        iVar2 = fcn.00010788(*0x108b0);
        *0x108c8 = iVar2;
        if (iVar2 != 0) {
            piVar3 = arg2_00 + 0x14;
            *0x108b8 = *0x108b0 + iVar2;
            noname_0 = arg2_00[1] + arg2_00;
            if (piVar3 < noname_0) {
                noname_0 = *0x108c0;
                do {
                    (**(*0x10898 + 0x160))(iVar2,piVar3 + 4,noname_0);
                    noname_0 = *0x108c0;
                    piVar3 = piVar3 + *(arg2_00 + 0x10);
                    iVar2 = iVar2 + noname_0;
                } while (piVar3 < arg2_00[1] + arg2_00);
            }
            if ((iVar1 < 0) && (iVar1 = fcn.000107bc(noname_0,arg2_00[1],arg2_00), iVar1 != 0)) {
                (**(*0x10898 + 0xc0))(0x10820,iVar1);
            }
        }
    }
    return;
}


/* fcn.00010520 @ 0x10520 */

ulong fcn.00010520(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t *piVar4;
    unkuint3 *pVar5;
    int64_t *piVar6;
    unkuint3 *pVar7;
    uint32_t uVar8;
    
    iVar3 = *0x108c8;
    do {
        if (iVar3 == 0) {
            return 0x800000000000000e;
        }
        if (*(iVar3 + 0x20) == 0) {
            iVar1 = *(iVar3 + 0x10);
            if (*(iVar1 + 0x34) == 0) {
                iVar2 = *(iVar1 + 0x30) + iVar1;
            }
            else {
                iVar2 = *(iVar1 + 0x34) + iVar1;
                iVar2 = *(iVar2 + 0x10) + iVar2;
            }
            piVar4 = iVar2 + (-iVar2 & 7);
            piVar6 = piVar4;
            do {
                if (iVar1 + -1 + *(iVar1 + 0x20) <= piVar6) break;
                if ((*(piVar6 + 0x13) & 1) == 0) {
                    iVar2 = 0x18;
                    uVar8 = *(piVar6 + 0x14);
                }
                else {
                    uVar8 = *(piVar6 + 3);
                    iVar2 = 0x20;
                    if (uVar8 == 0xffffffff) break;
                }
                pVar5 = iVar2 + piVar6;
                if ((*piVar6 == 0x41c0f1abfd44820b) && (piVar6[1] == -0x424691aaaaf3b152)) {
                    pVar7 = pVar5 + (uVar8 - iVar2) + -1;
                    goto code_r0x00010699;
                }
                piVar6 = piVar6 + (-uVar8 & 7) + uVar8;
            } while (piVar4 <= piVar6);
code_r0x000105c5:
            pVar5 = NULL;
code_r0x000105c8:
            if (pVar5 != NULL) {
                *0x108d0 = *pVar5;
                *0x108d8 = pVar5 + 2;
                return 0;
            }
        }
        iVar3 = fcn.00010758(iVar3);
    } while( true );
code_r0x00010699:
    if (pVar7 <= pVar5) goto code_r0x000105c5;
    if (*(pVar5 + 3) == '\x19') {
        pVar5 = pVar5 + 1;
        goto code_r0x000105c8;
    }
    uVar8 = (-*pVar5 & 3) + *pVar5;
    if (uVar8 == 0) goto code_r0x000105c5;
    pVar5 = pVar5 + uVar8;
    goto code_r0x00010699;
}


/* fcn.00010728 @ 0x10728 */

int64_t fcn.00010728(void)

{
    if (*0x108a0 == 0) {
        fcn.000106c8(0x10840,0x108a0);
    }
    return *0x108a0;
}


/* fcn.000106c8 @ 0x106c8 */

ulong fcn.000106c8(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x10890;
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


/* fcn.00010788 @ 0x10788 */

ulong fcn.00010788(int64_t arg1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x10898 + 0x40))(4,arg1,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.000107bc @ 0x107bc */

int64_t fcn.000107bc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iStackX_20;
    
    iVar1 = (**(*0x10898 + 0x40))(6,arg1,&iStackX_20);
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
    
    //[00] -r-x section size 1440 named .text
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


/* fcn.00010758 @ 0x10758 */

uint64_t fcn.00010758(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar1 = 0;
    if ((((uVar2 != 0) && (*0x108c8 <= uVar2)) && (uVar2 <= *0x108b8)) && (uVar1 = 0, uVar2 + *0x108c0 < *0x108b8)) {
        uVar1 = uVar2 + *0x108c0;
    }
    return uVar1;
}


