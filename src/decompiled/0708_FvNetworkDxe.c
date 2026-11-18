// decompiled by r2ghidra: 0708_FvNetworkDxe.pe32
// functions: 11

/* entry0 @ 0x10310 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.0001032c(arg1,arg2);
    fcn.00010408(arg1,arg2);
    return;
}


/* fcn.0001032c @ 0x1032c */

ulong fcn.0001032c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    int64_t *piVar8;
    
    *0x108a8 = *(arg1 + 0x60);
    *0x108a0 = arg1;
    fcn.00010634();
    puVar4 = fcn.00010634();
    do {
        uVar1 = *puVar4;
        uVar7 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x00010380:
            if (puVar4 == NULL) {
                uVar5 = fcn.000102a0();
                fcn.00010290();
                uVar2 = in(0x1808);
                fcn.00010270(uVar7,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010260();
                }
                fcn.00010270(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010290();
                }
                else {
                    fcn.00010280();
                }
code_r0x000103e9:
                uVar7 = 0;
                if (*(*0x108a0 + 0x68) != 0) {
                    piVar8 = *(*0x108a0 + 0x70);
                    do {
                        if ((*0x10820 == *piVar8) && (*0x10828 == piVar8[1])) {
                            *0x108d0 = (*(*0x108a0 + 0x70))[uVar7 * 3 + 2];
                            return 0;
                        }
                        uVar7 = uVar7 + 1;
                        piVar8 = piVar8 + 3;
                    } while (uVar7 < *(*0x108a0 + 0x68));
                }
                *0x108d0 = 0;
                return 0x800000000000000e;
            }
            if ((*0x10840 == *(puVar4 + 4)) && (*0x10848 == *(puVar4 + 8))) goto code_r0x000103e9;
        }
        else if (uVar1 == 4) goto code_r0x00010380;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010408 @ 0x10408 */

ulong fcn.00010408(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    char cVar2;
    uint uVar3;
    uint uVar4;
    int64_t iVar5;
    int64_t iStackX_8;
    ulong uStackX_18;
    char acStackX_20 [8];
    ulong uStack_cd8;
    uchar auStack_cd0 [8];
    uchar auStack_cc8 [4];
    char cStack_cc4;
    char cStack_64;
    
    if (*0x108c8 == 0) {
        *0x108c0 = *(arg2 + 0x58);
        *0x108c8 = arg2;
    }
    iStackX_8 = arg1;
    iVar5 = fcn.00010598();
    cVar2 = (**(iVar5 + 8))(0x107e0,0x1000004);
    if (cVar2 == '\x01') {
        return 0x8000000000000003;
    }
    uStackX_18 = 8;
    iVar5 = (**(*0x108c0 + 0x48))(L"NetworkStackVar",0x10830,&iStackX_8,&uStackX_18,acStackX_20);
    if ((iVar5 < 0) || (acStackX_20[0] != '\x01')) {
        uStack_cd8 = 0xca9;
        bVar1 = false;
        iVar5 = (**(*0x108c0 + 0x48))(L"Setup",0x107f0,0,&uStack_cd8,auStack_cc8);
        if ((iVar5 < 0) || ((cStack_64 != '\x01' && (cStack_cc4 != '\0')))) goto code_r0x00010508;
    }
    bVar1 = true;
code_r0x00010508:
    iVar5 = fcn.00010598();
    cVar2 = (**(iVar5 + 8))(0x107e0,0x1000001);
    if (cVar2 == '\x01') {
        bVar1 = true;
    }
    if (!bVar1) {
        return 0x8000000000000003;
    }
    iVar5 = fcn.00010598();
    (**(iVar5 + 0x40))(0x107e0,0x1000004,1);
    iVar5 = fcn.00010598();
    uVar3 = (**(iVar5 + 0x18))(0x107e0,0x1000003);
    iVar5 = fcn.00010598();
    uVar4 = (**(iVar5 + 0x18))(0x107e0,0x1000002);
    (**(*0x108d0 + 0x98))(uVar4,uVar3,auStack_cd0);
    (**(*0x108d0 + 0x80))();
    return 0;
}


/* fcn.00010634 @ 0x10634 */

int64_t fcn.00010634(void)

{
    if (*0x108b8 == 0) {
        fcn.000105d4(0x10810,0x108b8);
    }
    return *0x108b8;
}


/* fcn.000105d4 @ 0x105d4 */

ulong fcn.000105d4(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int64_t *piVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    uint64_t uVar4;
    int64_t *piVar5;
    
    iVar3 = *0x108a0;
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


/* fcn.000102a0 @ 0x102a0 */

uint64_t fcn.000102a0(void)

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


/* fcn.00010290 @ 0x10290 */

void fcn.00010290(void)

{
    return;
}


/* fcn.00010270 @ 0x10270 */

uint64_t fcn.00010270(ulong noname_0,int64_t arg1)

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


/* fcn.00010280 @ 0x10280 */

void fcn.00010280(void)

{
    return;
}


/* fcn.00010598 @ 0x10598 */

int64_t fcn.00010598(void)

{
    if (*0x108b0 == 0) {
        (**(*0x108a8 + 0x140))(0x10800,0,0x108b0);
    }
    return *0x108b0;
}


