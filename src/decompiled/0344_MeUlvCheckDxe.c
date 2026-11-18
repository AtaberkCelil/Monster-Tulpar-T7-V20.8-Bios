// decompiled by r2ghidra: 0344_MeUlvCheckDxe.pe32
// functions: 10

/* entry0 @ 0x10304 */

ulong entry0(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    ulong noname_0;
    int64_t iStackX_8;
    
    *0x10658 = *(arg2 + 0x60);
    *0x10650 = arg2;
    iStackX_8 = arg1;
    fcn.000104a4();
    noname_0 = 0x10600;
    iVar4 = fcn.00010510(0x10600);
    if (iVar4 == 0) {
        uVar5 = fcn.00010300();
        fcn.000102f0();
        uVar2 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar3 = in(0x1808);
            uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
            if ((uVar6 >> 0x17 & 1) != 0) break;
            fcn.00010260();
        }
        fcn.000102d0(uVar6,0x1808);
        if ((uVar5 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    iStackX_8 = 0;
    if (*0xc00b0000 == -1) {
        uVar1 = fcn.0001055c();
    }
    else {
        uVar1 = *0xc00b0040;
    }
    if ((uVar1 & 0xf) == 8) {
        (**(*0x10658 + 0x50))(0x200,8,0x103ec,0,&iStackX_8);
    }
    return 0;
}


/* fcn.000104a4 @ 0x104a4 */

int64_t fcn.000104a4(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10660 == 0) {
        *0x10660 = 0;
        if (*(*0x10650 + 0x68) != 0) {
            piVar2 = *(*0x10650 + 0x70);
            do {
                if ((*0x105e0 == *piVar2) && (*0x105e8 == piVar2[1])) {
                    *0x10660 = (*(*0x10650 + 0x70))[uVar1 * 3 + 2];
                    return *0x10660;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10650 + 0x68));
        }
    }
    return *0x10660;
}


/* fcn.00010510 @ 0x10510 */

void fcn.00010510(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000104a4();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001053e:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001053e;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.00010300 @ 0x10300 */

uint64_t fcn.00010300(void)

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


/* fcn.000102f0 @ 0x102f0 */

void fcn.000102f0(void)

{
    return;
}


/* fcn.000102d0 @ 0x102d0 */

uint64_t fcn.000102d0(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010262 @ 0x10262 */

void fcn.00010262(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


/* fcn.0001055c @ 0x1055c */

uint64_t fcn.0001055c(void)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    char32_t *pcVar4;
    uint64_t uVar5;
    
    uVar5 = 0;
    iVar2 = fcn.00010510(0x105d0);
    if (iVar2 != 0) {
        pcVar4 = L"@H`dhl";
        uVar3 = uVar5;
        do {
            if (*pcVar4 == L'@') goto code_r0x0001059a;
            uVar1 = uVar3 + 1;
            uVar3 = uVar1;
            pcVar4 = pcVar4 + 1;
        } while (uVar1 < 6);
        uVar3 = 0xff;
code_r0x0001059a:
        if (uVar3 != 0xff) {
            uVar5 = *(iVar2 + 0x20 + uVar3 * 4);
        }
    }
    return uVar5;
}


/* fcn.00010260 @ 0x10260 */

void fcn.00010260(void)

{
    return;
}


