// decompiled by r2ghidra: 0663_TcgDxeplatform.pe32
// functions: 11

/* entry0 @ 0x10384 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    
    fcn.00010398(arg1,in_RDX);
    fcn.00010460(arg1,in_RDX);
    return;
}


/* fcn.00010398 @ 0x10398 */

void fcn.00010398(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x10708 = *(arg1 + 0x60);
    *0x10700 = arg1;
    fcn.00010558();
    puVar4 = fcn.00010558();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103ec:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010320();
                fcn.00010310();
                uVar2 = in(0x1808);
                fcn.000102f0(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x000102e0();
                }
                fcn.000102f0(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010310();
                }
                else {
                    fcn.00010300();
                }
                return;
            }
            if ((*0x106d0 == *(puVar4 + 4)) && (*0x106d8 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103ec;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010460 @ 0x10460 */

char * fcn.00010460(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t arg1_00;
    int64_t iVar4;
    char *pcVar5;
    int64_t iStackX_8;
    int64_t iStackX_10;
    char *pcStackX_18;
    
    pcVar3 = NULL;
    iStackX_10 = 0;
    iVar4 = *(*0x10700 + 0x68);
    iStackX_8 = arg1;
    if (iVar4 != 0) {
        iVar2 = *(*0x10700 + 0x70) + iVar4 * 0x18;
        do {
            iVar4 = iVar4 + -1;
            arg1_00 = iVar2 + -0x18;
            if (arg1_00 == 0x106c0) {
code_r0x000104c1:
                iStackX_8 = *(iVar2 + -8);
                iVar2 = fcn.000105c4(&iStackX_8,&pcStackX_18);
                if (-1 < iVar2) {
                    pcVar5 = pcStackX_18;
                    goto code_r0x000104e6;
                }
            }
            else {
                iVar1 = fcn.000102c0(arg1_00,0x106c0,0x10);
                if (iVar1 == 0) goto code_r0x000104c1;
            }
            iVar2 = arg1_00;
        } while (iVar4 != 0);
    }
    pcVar5 = pcVar3;
code_r0x000104e6:
    iVar4 = (**(*0x10708 + 0x140))(0x106a0,0,&iStackX_10);
    if ((pcVar5 != NULL) && (*pcVar5 == '\x01')) {
        (**(iStackX_10 + 0x30))();
    }
    if (-1 < iVar4) {
        (**(iStackX_10 + 0x18))();
        (**(iStackX_10 + 0x10))();
        (**(iStackX_10 + 8))();
        pcVar3 = (**(iStackX_10 + 0x20))();
    }
    return pcVar3;
}


/* fcn.00010558 @ 0x10558 */

int64_t fcn.00010558(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10710 == 0) {
        *0x10710 = 0;
        if (*(*0x10700 + 0x68) != 0) {
            piVar2 = *(*0x10700 + 0x70);
            do {
                if ((*0x106c0 == *piVar2) && (*0x106c8 == piVar2[1])) {
                    *0x10710 = (*(*0x10700 + 0x70))[uVar1 * 3 + 2];
                    return *0x10710;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10700 + 0x68));
        }
    }
    return *0x10710;
}


/* fcn.00010320 @ 0x10320 */

uint64_t fcn.00010320(void)

{
    uint8_t in_CF;
    uint8_t in_PF;
    uint8_t in_AF;
    uint8_t in_ZF;
    uint8_t in_SF;
    uint8_t in_TF;
    uint8_t in_IF;
    uint8_t in_OF;
    uint8_t in_NT;
    uint8_t in_AC;
    uint8_t in_VIF;
    uint8_t in_VIP;
    uint8_t in_ID;
    
    return (in_NT & 1) * 0x4000 | (in_OF & 1) * 0x800 | (in_IF & 1) * 0x200 | (in_TF & 1) * 0x100 | (in_SF & 1) * 0x80 |
           (in_ZF & 1) * 0x40 | (in_AF & 1) * 0x10 | (in_PF & 1) * 4 | in_CF & 1 | (in_ID & 1) * 0x200000 |
           (in_VIP & 1) * 0x100000 | (in_VIF & 1) * 0x80000 | (in_AC & 1) * 0x40000;
}


/* fcn.00010310 @ 0x10310 */

void fcn.00010310(void)

{
    return;
}


/* fcn.000102f0 @ 0x102f0 */

uint64_t fcn.000102f0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.000102e2 @ 0x102e2 */

void fcn.000102e2(void)

{
    return;
}


/* fcn.00010300 @ 0x10300 */

void fcn.00010300(void)

{
    return;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.000105c4 @ 0x105c4 */

int64_t fcn.000105c4(int64_t arg1,int64_t arg2)

{
    int16_t *piVar1;
    int16_t iVar2;
    int64_t iVar3;
    int16_t *piVar4;
    int64_t iVar5;
    
    iVar5 = -0x7ffffffffffffff2;
    do {
        piVar1 = *arg1;
        if (*piVar1 == -1) {
            return -0x7ffffffffffffff2;
        }
        piVar4 = piVar1;
        if (piVar1 != NULL) {
            iVar2 = *piVar1;
            while ((iVar2 != -1 && (iVar2 != 4))) {
                piVar4 = piVar4 + piVar4[1];
                iVar2 = *piVar4;
            }
            if (*piVar4 == -1) {
                piVar4 = piVar1;
            }
        }
        if ((*piVar4 == 4) &&
           ((piVar4 + 4 == 0x106b0 || (iVar3 = fcn.000102c0(0x106b0,piVar4 + 4,0x10), iVar3 == 0)))) {
            iVar5 = 0;
            *arg2 = piVar4 + 0xc;
        }
        *arg1 = piVar4[1] + piVar4;
    } while (iVar5 < 0);
    return iVar5;
}


