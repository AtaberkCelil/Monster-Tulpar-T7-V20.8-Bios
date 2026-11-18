// decompiled by r2ghidra: 0723_OemDisplayModeDxe.pe32
// functions: 10

/* entry0 @ 0x103c0 */

void entry0(int64_t arg1,int64_t arg2)

{
    fcn.000103dc(arg1,arg2);
    fcn.000104ac(arg1,arg2);
    return;
}


/* fcn.000103dc @ 0x103dc */

void fcn.000103dc(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    *0x109c8 = *(arg1 + 0x60);
    *0x109c0 = arg1;
    fcn.000106ec();
    iVar3 = fcn.00010758();
    if (iVar3 == 0) {
        uVar4 = fcn.00010300();
        fcn.000102f0();
        uVar1 = in(0x1808);
        fcn.000102d0(noname_0,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x000102c0();
        }
        fcn.000102d0(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000102f0();
        }
        else {
            fcn.000102e0();
        }
    }
    if ((*0x109e8 != NULL) || (iVar3 = (**(*0x109c8 + 0x140))(0x10930,0,0x109e8), -1 < iVar3)) {
        (***0x109e8)(*0x109e8,0x109f0);
    }
    return;
}


/* fcn.000104ac @ 0x104ac */

int64_t fcn.000104ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    uint auStackX_18 [2];
    uint auStackX_20 [2];
    int64_t var_bp_30h;
    int8_t var_e1h;
    int8_t var_2a9h;
    int64_t var_5b0h;
    uint32_t var_1208h;
    int32_t var_1280h;
    int32_t var_1288h;
    uint uStack_1338;
    uint uStack_1334;
    uint uStack_1330;
    uint uStack_132c;
    uint uStack_1328;
    uint uStack_1324;
    uint uStack_1320;
    uint uStack_131c;
    ulong uStack_1318;
    ulong uStack_1310;
    ulong auStack_1308 [2];
    uchar auStack_12f8 [98];
    char cStack_1296;
    uchar auStack_1238 [177];
    uchar uStack_1187;
    uchar uStack_fbf;
    uchar auStack_cb8 [3160];
    char cStack_60;
    int8_t var_2eh;
    
    auStackX_18[0] = 0;
    auStackX_20[0] = 0;
    uStack_1310 = 0xca9;
    uStack_1338 = 0xec87d643;
    uStack_1334 = 0x4bb5eba4;
    uStack_1330 = 0x3e3fe5a1;
    uStack_132c = 0xa90db236;
    uStack_1318 = 0xb4;
    uStackX_8 = CONCAT44(arg1 >> 0x20,7);
    uStack_1328 = 0x72c5e28c;
    uStack_1324 = 0x43a17783;
    uStack_1320 = 0xd7fa6787;
    uStack_131c = 0xa4afcc3f;
    auStack_1308[0] = 0x578;
    if (*0x109d8 == 0) {
        *0x109d0 = *(arg2 + 0x58);
        *0x109d8 = arg2;
    }
    iVar1 = (**(*0x109d0 + 0x48))(L"UniWillVariable",0x10940,&uStackX_8,&uStack_1318,auStack_12f8);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = (**(*0x109d0 + 0x48))(L"Setup",&uStack_1338,auStackX_18,&uStack_1310,auStack_cb8);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = (**(*0x109d0 + 0x48))(L"SaSetup",&uStack_1328,auStackX_20,auStack_1308,auStack_1238);
    if (iVar1 < 0) {
        return iVar1;
    }
    if (cStack_1296 == cStack_60) {
        return 0;
    }
    if (cStack_1296 == -1) {
        return 0;
    }
    cStack_60 = cStack_1296;
    if (cStack_1296 == '\x04') {
code_r0x00010641:
        uStack_1187 = 4;
    }
    else {
        if (cStack_1296 != '\x02') {
            if (cStack_1296 == '\x01') {
                uStack_1187 = 0;
                uStack_fbf = 0;
                goto code_r0x0001064f;
            }
            cStack_60 = '\x04';
            goto code_r0x00010641;
        }
        uStack_1187 = 1;
    }
    uStack_fbf = 1;
code_r0x0001064f:
    cStack_1296 = cStack_60;
    (**(*0x109d0 + 0x58))(L"UniWillVariable",0x10940,uStackX_8 & 0xffffffff,uStack_1318,auStack_12f8);
    (**(*0x109d0 + 0x58))(L"Setup",&uStack_1338,auStackX_18[0],uStack_1310,auStack_cb8);
    (**(*0x109d0 + 0x58))(L"SaSetup",&uStack_1328,auStackX_20[0],auStack_1308[0],auStack_1238);
    out(0xcf9,0xe);
    return 0;
}


/* fcn.000106ec @ 0x106ec */

int64_t fcn.000106ec(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x109e0 == 0) {
        *0x109e0 = 0;
        if (*(*0x109c0 + 0x68) != 0) {
            piVar2 = *(*0x109c0 + 0x70);
            do {
                if ((*0x10920 == *piVar2) && (*0x10928 == piVar2[1])) {
                    *0x109e0 = (*(*0x109c0 + 0x70))[uVar1 * 3 + 2];
                    return *0x109e0;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x109c0 + 0x68));
        }
    }
    return *0x109e0;
}


/* fcn.00010758 @ 0x10758 */

void fcn.00010758(void)

{
    int16_t *piVar1;
    
    piVar1 = fcn.000106ec();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001078f:
            if ((piVar1 == NULL) || ((*0x10950 == *(piVar1 + 4) && (*0x10958 == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001078f;
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


/* fcn.000102c2 @ 0x102c2 */

void fcn.000102c2(void)

{
    return;
}


/* fcn.000102e0 @ 0x102e0 */

void fcn.000102e0(void)

{
    return;
}


