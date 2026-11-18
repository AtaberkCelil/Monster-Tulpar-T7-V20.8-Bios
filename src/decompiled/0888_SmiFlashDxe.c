// decompiled by r2ghidra: 0888_SmiFlashDxe.pe32
// functions: 12

/* entry0 @ 0x11110 */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    fcn.0001113c(arg1,arg2);
    iVar1 = fcn.000113ac(arg1,arg2);
    if (iVar1 < 0) {
        fcn.0001133c();
    }
    return iVar1;
}


/* fcn.0001113c @ 0x1113c */

void fcn.0001113c(ulong noname_0,int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint64_t noname_0_00;
    
    *0x12098 = *(arg1 + 0x58);
    *0x12090 = *(arg1 + 0x60);
    *0x12088 = arg1;
    *0x120a0 = *0x12098;
    *0x120b8 = *0x12090;
    (**(*0x12090 + 0x50))(0x201,8,0x11484,0,0x120a8);
    (**(*0x120b8 + 0x50))(0x60000202,8,0x11490,0,0x120b0);
    fcn.000114b8();
    puVar4 = fcn.000114b8();
    do {
        uVar1 = *puVar4;
        noname_0_00 = uVar1;
        if (uVar1 == 0xffff) {
            puVar4 = NULL;
code_r0x000111f5:
            if (puVar4 == NULL) {
                uVar5 = fcn.000110a0();
                fcn.00011090();
                uVar2 = in(0x1808);
                fcn.00011070(noname_0_00,0x1808);
                while( true ) {
                    iVar3 = in(0x1808);
                    uVar6 = ((uVar2 & 0xffffff) + 0x16b) - iVar3;
                    if ((uVar6 >> 0x17 & 1) != 0) break;
                    func_0x00011060();
                }
                fcn.00011070(uVar6,0x1808);
                if ((uVar5 >> 9 & 1) == 0) {
                    fcn.00011090();
                }
                else {
                    fcn.00011080();
                }
code_r0x0001125e:
                *0x12108 = *0x12098;
                (**(*0x12090 + 0x50))(0x60000202,0x10,0x11528,0,0x12100);
                (**(*0x12090 + 0x50))(0x201,0x10,0x11524,0,74000);
                fcn.0001153c();
                (**(*0x12090 + 0x170))(0x200,0x10,0x1159c,0,0x12030,0x120f0);
                (**(*0x12090 + 0x170))(0x200,0x10,0x115c4,0,0x12020,0x120f8);
                return;
            }
            if ((*0x12040 == *(puVar4 + 4)) && (*0x12048 == *(puVar4 + 8))) goto code_r0x0001125e;
        }
        else if (uVar1 == 4) goto code_r0x000111f5;
        puVar4 = puVar4 + puVar4[1];
    } while( true );
}


/* fcn.000113ac @ 0x113ac */

void fcn.000113ac(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    code *pcVar2;
    uint64_t uVar3;
    int64_t iStackX_8;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    if (*0x120e8 == 0) {
        *0x120e0 = *(arg2 + 0x58);
        *0x120e8 = arg2;
    }
    var_bp_10h = 0x1368881;
    var_ch = 0x4b1dc4ad;
    var_bp_8h = 0x7ad531b6;
    var_4h = 0x6bdbc88e;
    iStackX_8 = arg1;
    iVar1 = fcn.000114b8();
    if ((*(iVar1 + 0xc) == 0x12) || (*(iVar1 + 0xc) == 0x20)) {
        iVar1 = (**(*0x12090 + 0x40))(6,0x19);
        if (-1 < iVar1) {
            fcn.00011000(iStackX_8,0x19,0);
            (**(*0x12098 + 0x58))(L"SFPFREC",&var_bp_10h,2,8,&iStackX_8);
        }
    }
    uVar3 = 0;
    pcVar2 = *0x12080;
    while (pcVar2 != NULL) {
        uVar3 = uVar3 + 1;
        (*pcVar2)();
        pcVar2 = *(uVar3 * 8 + 0x12080);
    }
    return;
}


/* fcn.0001133c @ 0x1133c */

void fcn.0001133c(void)

{
    (**(*0x12090 + 0x70))(*0x120f0);
    (**(*0x12090 + 0x70))(*0x120f8);
    (**(*0x12090 + 0x70))(*0x12100);
    (**(*0x12090 + 0x70))(*0x12110);
    (**(*0x120b8 + 0x70))(*0x120a8);
    //WARNING: Could not recover jumptable at 0x000113a7. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x120b8 + 0x70))(*0x120b0);
    return;
}


/* fcn.000114b8 @ 0x114b8 */

int64_t fcn.000114b8(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x120c8 == 0) {
        *0x120c8 = 0;
        if (*(*0x12088 + 0x68) != 0) {
            piVar2 = *(*0x12088 + 0x70);
            do {
                if ((*0x12010 == *piVar2) && (*0x12018 == piVar2[1])) {
                    *0x120c8 = (*(*0x12088 + 0x70))[uVar1 * 3 + 2];
                    return *0x120c8;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x12088 + 0x68));
        }
    }
    return *0x120c8;
}


/* fcn.000110a0 @ 0x110a0 */

uint64_t fcn.000110a0(void)

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


/* fcn.00011090 @ 0x11090 */

void fcn.00011090(void)

{
    return;
}


/* fcn.00011070 @ 0x11070 */

uint64_t fcn.00011070(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00011062 @ 0x11062 */

void fcn.00011062(void)

{
    return;
}


/* fcn.00011080 @ 0x11080 */

void fcn.00011080(void)

{
    return;
}


/* fcn.0001153c @ 0x1153c */

void fcn.0001153c(void)

{
    int64_t iVar1;
    
    if ((((*0x120d8 == 0) && (*0x120d0 == '\0')) && (*0x12090 != 0)) && (*(*0x12090 + 0x140) != NULL)) {
        iVar1 = (**(*0x12090 + 0x140))(0x12000,0,0x120d8);
        if (iVar1 < 0) {
            *0x120d8 = 0;
        }
    }
    return;
}


/* fcn.00011000 @ 0x11000 */

int64_t fcn.00011000(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 4096 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


