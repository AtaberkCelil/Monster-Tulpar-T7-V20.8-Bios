// decompiled by r2ghidra: 1632_UsbTypeCDxe.pe32
// functions: 14

/* entry0 @ 0x10364 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.00010378(arg1,arg2);
    fcn.00010454(arg1,arg2);
    return;
}


/* fcn.00010378 @ 0x10378 */

void fcn.00010378(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0;
    
    *0x10de8 = *(arg2 + 0x60);
    *0x10df8 = *(arg2 + 0x58);
    *0x10de0 = arg2;
    *0x10df0 = arg1;
    fcn.00010ba0();
    puVar4 = fcn.00010ba0();
    do {
        uVar1 = *puVar4;
        noname_0 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000103de:
            if (puVar4 == NULL) {
                uVar5 = fcn.00010360();
                fcn.00010350();
                uVar2 = in(0x1808);
                fcn.00010330(noname_0,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00010320();
                }
                fcn.00010330(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00010350();
                }
                else {
                    fcn.00010340();
                }
                return;
            }
            if ((*0x10d70 == *(puVar4 + 4)) && (*0x10d78 == *(puVar4 + 8))) {
                return;
            }
        }
        else if (uVar1 == 4) goto code_r0x000103de;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.00010454 @ 0x10454 */

//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.00010454(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uchar uVar2;
    uint8_t uVar3;
    int64_t iVar4;
    ushort *puVar5;
    uint *puVar6;
    char cVar7;
    int64_t iVar8;
    char cVar9;
    int64_t in_R8;
    int64_t in_R9;
    int64_t iStackX_8;
    ushort *puStackX_10;
    ulong uStackX_18;
    ulong *puStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    ulong auStack_48 [3];
    int64_t var_18h;
    
    iStackX_8 = arg1;
    puStackX_10 = arg2;
    iVar4 = fcn.00010b64();
    iVar8 = 0x45;
    cVar1 = (**(iVar4 + 0x30))();
    cVar9 = '\0';
    if (cVar1 == '\x01') {
code_r0x00010498:
        iVar4 = fcn.00010c0c(iVar8);
        fcn.00010c4c(iVar4,arg2,in_R8,in_R9);
        iVar4 = fcn.00010b64();
        puVar5 = (**(iVar4 + 0x28))(0x225);
        if (puStackX_10 + 5 != puVar5) {
            section..text(puStackX_10 + 5,puVar5,6);
        }
        (**(*0x10de8 + 0x140))(0x10d30,0,&puStackX_20);
        iStackX_8 = 0;
        (**puStackX_20)(puStackX_20,puStackX_10,uStackX_18,&iStackX_8);
    }
    else {
        iVar4 = fcn.00010b64();
        iVar8 = 0x14a;
        cVar1 = (**(iVar4 + 0x30))();
        if (cVar1 != '\0') goto code_r0x00010498;
    }
    iVar4 = fcn.00010b64();
    cVar1 = (**(iVar4 + 0x30))(0x14a);
    if (cVar1 == '\0') {
        return -0x7ffffffffffffffd;
    }
    auStack_48[0] = 0xca9;
    (**(*0x10df8 + 0x48))(L"Setup",0x10d10,0,auStack_48,0x10e20);
    iVar4 = (**(*0x10de8 + 0x140))(0x10d20,0,0x10e10);
    cVar1 = *0x11683;
    if (iVar4 < 0) {
        return iVar4;
    }
    *0x10e18 = **0x10e10;
    puStackX_10 = 0xffffffff;
    iVar4 = (**(*0x10de8 + 0x28))(1,10,1,&puStackX_10);
    puVar5 = puStackX_10;
    if (iVar4 < 0) {
        return iVar4;
    }
    fcn.000102a0(puStackX_10,0x30,0);
    if (cVar1 == '\x01') {
        *puVar5 = 0x100;
    }
    puVar6 = *0x10e18 + 0x855;
    *puVar6 = puVar5;
    iVar4 = (**(*0x10df8 + 0x58))(L"UsbTypeC",0x10d60,3,4,puVar6);
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x12d);
    *(*0x10e18 + 0x971) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x13b);
    *(*0x10e18 + 0x972) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x13c);
    *(*0x10e18 + 0x973) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x131);
    *(*0x10e18 + 0x974) = uVar2;
    if (*0x11908 == '\x02') {
code_r0x000106b5:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x131);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x000106b5;
    }
    *(*0x10e18 + 0xbbc) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x13d);
    *(*0x10e18 + 0x975) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x13e);
    *(*0x10e18 + 0x976) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x132);
    *(*0x10e18 + 0x977) = uVar2;
    if (*0x11909 == '\x02') {
code_r0x00010737:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x132);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x00010737;
    }
    *(*0x10e18 + 0xbbd) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x13f);
    *(*0x10e18 + 0x978) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x140);
    *(*0x10e18 + 0x979) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x133);
    *(*0x10e18 + 0x97a) = uVar2;
    if (*0x1190a == '\x02') {
code_r0x000107b9:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x133);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x000107b9;
    }
    *(*0x10e18 + 0xbbe) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x141);
    *(*0x10e18 + 0x97b) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x142);
    *(*0x10e18 + 0x97c) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x134);
    *(*0x10e18 + 0x97d) = uVar2;
    if (*0x1190b == '\x02') {
code_r0x0001083b:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x134);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x0001083b;
    }
    *(*0x10e18 + 0xbbf) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x143);
    *(*0x10e18 + 0x97e) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x144);
    *(*0x10e18 + 0x97f) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x135);
    *(*0x10e18 + 0x980) = uVar2;
    if (*0x1190c == '\x02') {
code_r0x000108bd:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x135);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x000108bd;
    }
    *(*0x10e18 + 0xbc0) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x21a);
    *(*0x10e18 + 0x981) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x145);
    *(*0x10e18 + 0x982) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x136);
    *(*0x10e18 + 0x983) = uVar2;
    if (*0x1190d == '\x02') {
code_r0x0001093f:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x136);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x0001093f;
    }
    *(*0x10e18 + 0xbc1) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x21b);
    *(*0x10e18 + 0xbb0) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x146);
    *(*0x10e18 + 0xbb1) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x137);
    *(*0x10e18 + 0xbb2) = uVar2;
    if (*0x1190e == '\x02') {
code_r0x000109c1:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x137);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x000109c1;
    }
    *(*0x10e18 + 0xbc2) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x21c);
    *(*0x10e18 + 0xbb3) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x147);
    *(*0x10e18 + 0xbb4) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x138);
    *(*0x10e18 + 0xbb5) = uVar2;
    if (*0x1190f == '\x02') {
code_r0x00010a43:
        cVar7 = cVar9;
    }
    else {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x138);
        cVar7 = cVar1;
        if (2 < (uVar3 >> 1 & 3)) goto code_r0x00010a43;
    }
    *(*0x10e18 + 0xbc3) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x21d);
    *(*0x10e18 + 0xbb6) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x148);
    *(*0x10e18 + 2999) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x139);
    *(*0x10e18 + 3000) = uVar2;
    if (*0x11910 != '\x02') {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x139);
        cVar7 = cVar1;
        if ((uVar3 >> 1 & 3) < 3) goto code_r0x00010ac7;
    }
    cVar7 = cVar9;
code_r0x00010ac7:
    *(*0x10e18 + 0xbc4) = cVar7;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x21e);
    *(*0x10e18 + 0xbb9) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x149);
    *(*0x10e18 + 0xbba) = uVar2;
    iVar8 = fcn.00010b64();
    uVar2 = (**(iVar8 + 8))(0x13a);
    *(*0x10e18 + 0xbbb) = uVar2;
    if (*0x11911 != '\x02') {
        iVar8 = fcn.00010b64();
        uVar3 = (**(iVar8 + 8))(0x13a);
        if ((uVar3 >> 1 & 3) < 3) {
            cVar9 = cVar1;
        }
    }
    *(*0x10e18 + 0xbc5) = cVar9;
    return iVar4;
}


/* fcn.00010ba0 @ 0x10ba0 */

int64_t fcn.00010ba0(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x10e08 == 0) {
        *0x10e08 = 0;
        if (*(*0x10de0 + 0x68) != 0) {
            piVar2 = *(*0x10de0 + 0x70);
            do {
                if ((*0x10d40 == *piVar2) && (*0x10d48 == piVar2[1])) {
                    *0x10e08 = (*(*0x10de0 + 0x70))[uVar1 * 3 + 2];
                    return *0x10e08;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x10de0 + 0x68));
        }
    }
    return *0x10e08;
}


/* fcn.00010360 @ 0x10360 */

uint64_t fcn.00010360(void)

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


/* fcn.00010350 @ 0x10350 */

void fcn.00010350(void)

{
    return;
}


/* fcn.00010330 @ 0x10330 */

uint64_t fcn.00010330(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010322 @ 0x10322 */

void fcn.00010322(void)

{
    return;
}


/* fcn.00010340 @ 0x10340 */

void fcn.00010340(void)

{
    return;
}


/* fcn.00010b64 @ 0x10b64 */

int64_t fcn.00010b64(void)

{
    if (*0x10e00 == 0) {
        (**(*0x10de8 + 0x140))(0x10cf0,0,0x10e00);
    }
    return *0x10e00;
}


/* fcn.00010c0c @ 0x10c0c */

ulong fcn.00010c0c(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t aiStackX_8 [4];
    
    aiStackX_8[0] = arg1;
    iVar1 = (**(*0x10de8 + 0x98))(*0x10df0,0x10ce0,aiStackX_8);
    if (iVar1 < 0) {
        uVar2 = 0;
    }
    else {
        uVar2 = *(aiStackX_8[0] + 0x18);
    }
    return uVar2;
}


/* fcn.00010c4c @ 0x10c4c */

ulong fcn.00010c4c(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    uchar auStackX_18 [8];
    int64_t iStackX_20;
    ulong *in_stack_00000028;
    ulong *in_stack_00000030;
    
    auStackX_18[0] = arg2;
    if (arg1 != 0) {
        iStackX_20 = arg3;
        iVar1 = (**(*0x10de8 + 0x98))(arg1,0x10d00,&iStackX_20);
        if (-1 < iVar1) {
            *in_stack_00000028 = 0;
            *in_stack_00000030 = 0;
            uVar2 = (**(iStackX_20 + 0x18))
                              (iStackX_20,0x10d50,0x19,0,in_stack_00000028,in_stack_00000030,auStackX_18);
            return uVar2;
        }
    }
    return 0x800000000000000e;
}


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 2688 named .text
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


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


