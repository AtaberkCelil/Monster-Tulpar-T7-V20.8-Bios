// decompiled by r2ghidra: 1938_Ip4Dxe.pe32
// functions: 146

/* entry0 @ 0x10508 */

void entry0(int64_t arg1)

{
    int64_t in_RDX;
    int64_t arg2;
    int64_t aiStackX_18 [2];
    
    fcn.00010550(arg1,in_RDX);
    arg2 = 0x1e800;
    (**(*0x1f920 + 0x98))(arg1,0x1e800,aiStackX_18);
    *(aiStackX_18[0] + 0x58) = 0x10384;
    fcn.00010620(arg1,arg2);
    return;
}


/* fcn.00010550 @ 0x10550 */

void fcn.00010550(ulong noname_0,int64_t arg1)

{
    *0x1f920 = *(arg1 + 0x60);
    *0x1f928 = *(arg1 + 0x58);
    *0x1f918 = arg1;
    (**(*0x1f920 + 0x140))(0x1e8f0,0,0x1f938);
    (**(*0x1f920 + 0x140))(0x1e8e0,0,0x1f950);
    (**(*0x1f920 + 0x140))(0x1e890,0,0x1f930);
    (**(*0x1f920 + 0x140))(0x1ee40,0,0x1f940);
    (**(*0x1f920 + 0x140))(0x1e8c0,0,0x1f948);
    //WARNING: Could not recover jumptable at 0x00010617. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1f920 + 0x140))(0x1ede0,0,0x1f960);
    return;
}


/* fcn.00010620 @ 0x10620 */

ulong fcn.00010620(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t arg2_00;
    ulong uStackX_10;
    char acStackX_18 [16];
    
    uStackX_10 = 8;
    arg2_00 = 0x1ee10;
    iVar1 = (**(*0x1f928 + 0x48))(L"NetworkStackVar",0x1ee10,0,&uStackX_10,acStackX_18);
    if ((iVar1 == 0) && (acStackX_18[0] == '\0')) {
        uVar2 = 0x8000000000000003;
    }
    else {
        fcn.0001be30(0x1e880,arg2_00);
        *0x1ee70 = arg1;
        *0x1ee78 = arg1;
        uVar2 = (**(*0x1f920 + 0x148))(0x1ee78,0x1e940,0x1ee50,0x1edd0,0x1eed0,0x1e830,0x1eee8,0);
    }
    return uVar2;
}


/* fcn.0001be30 @ 0x1be30 */

int64_t fcn.0001be30(int64_t arg1,int64_t arg2)

{
    ulong in_R8;
    ulong in_R9;
    int64_t aiStackX_10 [3];
    ulong in_stack_00000028;
    
    aiStackX_10[0] = arg2;
    (**(*0x1f920 + 0x50))(0x200,8,in_R8,in_R9,aiStackX_10);
    (**(*0x1f920 + 0xa8))(arg1,aiStackX_10[0],in_stack_00000028);
    (**(*0x1f920 + 0x68))(aiStackX_10[0]);
    return aiStackX_10[0];
}


/* fcn.0001e6d8 @ 0x1e6d8 */

ulong fcn.0001e6d8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_8;
    char *pcStackX_10;
    int64_t var_bp_20h;
    uchar auStack_28 [8];
    int16_t var_18h;
    int16_t var_16h;
    
    iVar2 = 0;
    var_bp_20h = 0;
    if (arg1 != 0) {
        iStackX_8 = arg1;
        pcStackX_10 = arg2;
        iVar1 = (**(*0x1f920 + 0x98))(arg1,0x1e860,&pcStackX_10);
        if (-1 < iVar1) {
            iVar1 = (**(*0x1f920 + 0xb8))(0x1e8a0,&pcStackX_10,&iStackX_8);
            if (iVar1 < 0) {
                while( true ) {
                    if ((*pcStackX_10 == '\x7f') && (pcStackX_10[1] == -1)) {
                        return 0;
                    }
                    if ((*pcStackX_10 == '\x03') && (pcStackX_10[1] == '\x05')) break;
                    pcStackX_10 = pcStackX_10 + *(pcStackX_10 + 2);
                }
                return 1;
            }
            iVar1 = (**(*0x1f920 + 0x98))(iStackX_8,0x1e8a0,&var_bp_20h);
            if (((-1 < iVar1) && (iVar1 = (**(var_bp_20h + 0x30))(var_bp_20h,auStack_28), -1 < iVar1)) &&
               (*0x1ee80 != -1)) {
                iVar1 = iVar2;
                do {
                    if (*(iVar2 + 0x1ee82) == -1) {
                        return 0;
                    }
                    if ((*(iVar2 + 0x1ee80) == var_18h) && (*(iVar2 + 0x1ee82) == var_16h)) {
                        return 1;
                    }
                    iVar1 = iVar1 + 1;
                    iVar2 = iVar1 * 4;
                } while (*(iVar2 + 0x1ee80) != -1);
            }
        }
    }
    return 0;
}


/* fcn.0001ab08 @ 0x1ab08 */

void fcn.0001ab08(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001aad8(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010280(arg1_00,arg1);
    }
    return;
}


/* fcn.0001aad8 @ 0x1aad8 */

ulong fcn.0001aad8(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1f920 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010280 @ 0x10280 */

int64_t fcn.00010280(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 58752 named .text
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


/* fcn.00017bb4 @ 0x17bb4 */

void fcn.00017bb4(ulong param_1)

{
    ulong *puVar1;
    ulong *puVar2;
    ulong *puVar3;
    int64_t iVar4;
    
    puVar2 = fcn.0001aad8(param_1,0x418);
    if (puVar2 != NULL) {
        *(puVar2 + 1) = 0;
        *puVar2 = 1;
        iVar4 = 0x21;
        puVar1 = puVar2;
        do {
            puVar3 = puVar1 + 2;
            *puVar3 = puVar3;
            puVar1[3] = puVar3;
            iVar4 = iVar4 + -1;
            puVar1 = puVar3;
        } while (iVar4 != 0);
        puVar2[0x44] = 0;
        puVar2 = puVar2 + 0x45;
        iVar4 = 0x1f;
        do {
            *puVar2 = puVar2;
            puVar2[1] = puVar2;
            puVar2 = puVar2 + 2;
            iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
    }
    return;
}


/* fcn.00010ba4 @ 0x10ba4 */

int64_t fcn.00010ba4(int64_t arg1)

{
    int64_t iVar1;
    
    *(arg1 + 0x18) = 3;
    if (*(arg1 + 0x528) != 0) {
        (**(*0x1f920 + 0x58))(*(arg1 + 0x528),0,0);
        (**(*0x1f920 + 0x70))(*(arg1 + 0x528));
        *(arg1 + 0x528) = 0;
    }
    if (*(arg1 + 0x530) != 0) {
        (**(*0x1f920 + 0x58))(*(arg1 + 0x530),0,0);
        (**(*0x1f920 + 0x70))(*(arg1 + 0x530));
        *(arg1 + 0x530) = 0;
    }
    if (*(arg1 + 0x48) != 0) {
        iVar1 = fcn.00014f58(*(arg1 + 0x48),0);
        if (iVar1 < 0) {
            return iVar1;
        }
        *(arg1 + 0x48) = 0;
    }
    if (*(arg1 + 0x50) != 0) {
        fcn.00017c18(*(arg1 + 0x50));
        *(arg1 + 0x50) = 0;
    }
    fcn.00013430(arg1 + 0x58);
    if (*(arg1 + 0x270) != 0) {
        if (*(arg1 + 0x278) != 0) {
            (**(*0x1f920 + 0x120))(*(arg1 + 0x270),0x1ee20,*(arg1 + 0x260),*(arg1 + 0x268));
            *(arg1 + 0x278) = 0;
        }
        fcn.0001cb5c(*(arg1 + 0x268),*(arg1 + 0x260),0x1e920,*(arg1 + 0x270));
        *(arg1 + 0x270) = 0;
    }
    if (*(arg1 + 0x538) != 0) {
        (**(*0x1f920 + 0x70))();
        *(arg1 + 0x538) = 0;
    }
    *(arg1 + 0x540) = 0;
    if (*(arg1 + 0x880) != 0) {
        (**(*0x1f920 + 0x48))();
    }
    fcn.0001771c(arg1 + 0x548);
    return 0;
}


/* fcn.0001cb10 @ 0x1cb10 */

void fcn.0001cb10(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint in_register_00000014;
    ulong *apuStack_18 [2];
    
    iVar1 = (**(*0x1f920 + 0x118))
                      (CONCAT44(in_register_0000000c,arg1),arg3,apuStack_18,CONCAT44(in_register_00000014,arg2),
                       CONCAT44(in_register_0000000c,arg1),2);
    if (-1 < iVar1) {
        (**apuStack_18[0])(apuStack_18[0],arg4);
    }
    return;
}


/* fcn.0001782c @ 0x1782c */

int64_t fcn.0001782c(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t iVar4;
    uint auStack_18 [4];
    
    piVar3 = fcn.0001aad8(arg1,0x50);
    if (piVar3 == NULL) {
        iVar4 = -0x7ffffffffffffff7;
    }
    else {
        iVar2 = *(arg1 + 0x278);
        piVar3[4] = 0;
        *(piVar3 + 3) = 0xe0000001;
        piVar3[2] = 1;
        *(piVar3 + 5) = 0;
        auStack_18[0] = 0x10000e0;
        iVar4 = (**(iVar2 + 0x10))(iVar2,0,auStack_18,piVar3 + 0x29);
        if ((-1 < iVar4) &&
           ((iVar4 = (**(iVar2 + 0x18))(iVar2,1,piVar3 + 0x29), -1 < iVar4 || (iVar4 == -0x7fffffffffffffec)))) {
            piVar1 = arg1 + 0x250;
            iVar2 = *piVar1;
            *piVar3 = iVar2;
            piVar3[1] = piVar1;
            *(iVar2 + 8) = piVar3;
            *piVar1 = piVar3;
            return 0;
        }
        (**(*0x1f920 + 0x48))(piVar3);
    }
    return iVar4;
}


/* fcn.0001cc70 @ 0x1cc70 */

int64_t fcn.0001cc70(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint32_t uVar1;
    int64_t iVar2;
    ushort *puVar3;
    int64_t iVar4;
    char *pcVar5;
    uint64_t uVar6;
    ulong **arg3_00;
    ushort *puVar7;
    ulong **ppuVar8;
    uint64_t auStackX_10 [2];
    ulong *puStackX_20;
    int64_t var_248h;
    int64_t iStack_2f8;
    ulong *puStack_2f0;
    ulong *apuStack_2e8 [4];
    ulong *apuStack_2c8 [82];
    
    iStack_2f8 = 0;
    arg3_00 = arg3;
    auStackX_10[0] = arg2;
    iVar2 = fcn.0001cba8(arg1,&iStack_2f8);
    if (iVar2 == 0) {
        arg3_00 = &puStackX_20;
        auStackX_10[0] = 0;
        iVar2 = (**(*0x1f920 + 0x98))(arg1,0x1e920);
        if ((-1 < iVar2) && (iVar2 = (**puStackX_20)(puStackX_20,auStackX_10), -1 < iVar2)) {
            arg3_00 = &puStack_2f0;
            iVar2 = (**(*0x1f920 + 0x98))(auStackX_10[0],0x1ee20);
            if (-1 < iVar2) {
                arg3_00 = apuStack_2c8;
                iVar2 = (**puStack_2f0)(puStack_2f0,0);
                if ((-1 < iVar2) || (iVar2 == -0x7fffffffffffffed)) {
                    ppuVar8 = apuStack_2c8;
                    (*puStackX_20[1])(puStackX_20,auStackX_10[0]);
                    goto code_r0x0001cd92;
                }
            }
            (*puStackX_20[1])(puStackX_20,auStackX_10[0]);
        }
        uVar6 = auStackX_10[0];
    }
    else {
        ppuVar8 = *(iStack_2f8 + 0x78);
code_r0x0001cd92:
        uVar1 = *(ppuVar8 + 4);
        if ((uVar1 != 0) && (apuStack_2e8 != ppuVar8 + 0x45)) {
            arg3_00 = uVar1;
            fcn.000102a0(apuStack_2e8,ppuVar8 + 0x45,arg3_00);
        }
        iVar2 = 0;
        uVar6 = uVar1;
    }
    if (-1 < iVar2) {
        iVar2 = uVar6 * 4 + 0xc;
        puVar3 = fcn.0001ab08(iVar2);
        if (puVar3 == NULL) {
            iVar2 = -0x7ffffffffffffff7;
        }
        else {
            *arg3 = puVar3;
            ppuVar8 = apuStack_2e8;
            if (uVar6 != 0) {
                puVar7 = puVar3;
                do {
                    fcn.0001ac68(puVar3,puVar7 + (iVar2 - puVar3),arg3_00,*ppuVar8);
                    puVar7 = *arg3;
                    ppuVar8 = ppuVar8 + 1;
                    iVar4 = fcn.0001a838(puVar3,puVar7 + (iVar2 - puVar3) >> 1);
                    puVar3 = puVar3 + iVar4;
                    uVar6 = uVar6 - 1;
                } while (uVar6 != 0);
            }
            pcVar5 = fcn.0001bdfc(arg1);
            if (pcVar5 != NULL) {
                while( true ) {
                    if ((*pcVar5 == '\x7f') && (pcVar5[1] == -1)) {
                        uVar6 = 0;
                        goto code_r0x0001ce79;
                    }
                    if ((*pcVar5 == '\x03') && (pcVar5[1] == '\x14')) break;
                    pcVar5 = pcVar5 + *(pcVar5 + 2);
                }
                uVar6 = *(pcVar5 + 4);
code_r0x0001ce79:
                if (uVar6 != 0) {
                    *puVar3 = 0x5c;
                    puVar3 = puVar3 + 1;
                    fcn.0001ac68(puVar3,(*arg3 - puVar3) + iVar2,arg3_00,uVar6);
                    iVar2 = fcn.0001a838(puVar3,(*arg3 - puVar3) + iVar2 >> 1);
                    puVar3 = puVar3 + iVar2;
                }
            }
            *puVar3 = 0;
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00014c18 @ 0x14c18 */

uint * fcn.00014c18(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint *puVar1;
    uint *puVar2;
    int64_t iVar3;
    uchar auStack_298 [4];
    uint uStack_294;
    uint auStack_70 [8];
    uint auStack_50 [18];
    
    if ((arg1 != 0) && (puVar1 = fcn.0001aad8(arg1,0xe8), puVar1 != NULL)) {
        *puVar1 = 0x46495049;
        puVar2 = puVar1 + 2;
        *puVar2 = puVar2;
        *(puVar1 + 4) = puVar2;
        puVar2 = puVar1 + 0x18;
        puVar1[8] = 0;
        puVar1[9] = 0;
        *(puVar1 + 0x14) = 0;
        *(puVar1 + 0x16) = 0;
        *(puVar1 + 6) = 1;
        *(puVar1 + 0xc) = 0;
        *(puVar1 + 0xe) = arg2;
        *(puVar1 + 0x10) = arg3;
        *(puVar1 + 0x12) = arg1;
        *puVar2 = puVar2;
        *(puVar1 + 0x1a) = puVar2;
        puVar2 = puVar1 + 0x1c;
        *puVar2 = puVar2;
        *(puVar1 + 0x1e) = puVar2;
        *(puVar1 + 0x20) = 0;
        iVar3 = (**arg1)(arg1,0,auStack_298);
        if (-1 < iVar3) {
            if (puVar1 + 0x22 != auStack_70) {
                fcn.000102a0(puVar1 + 0x22,auStack_70,0x20);
            }
            if (puVar1 + 0x2a != auStack_50) {
                fcn.000102a0(puVar1 + 0x2a,auStack_50,0x20);
            }
            puVar1[0x32] = uStack_294;
            puVar2 = puVar1 + 0x34;
            *puVar2 = puVar2;
            *(puVar1 + 0x36) = puVar2;
            *(puVar1 + 0x38) = 0;
            return puVar1;
        }
        (**(*0x1f920 + 0x48))(puVar1);
    }
    return NULL;
}


/* fcn.000174b4 @ 0x174b4 */

int64_t fcn.000174b4(int64_t arg1)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint16_t uVar5;
    int64_t iVar6;
    ulong *puVar7;
    int64_t iVar8;
    uint64_t arg3;
    bool bVar9;
    char *pcStackX_8;
    
    *arg1 = 0x32435049;
    uVar5 = 0;
    for (puVar7 = *0x1ef20; (puVar7 != 0x1ef20 && (*(puVar7 + 2) <= uVar5)); puVar7 = *puVar7) {
        uVar5 = uVar5 + 1;
    }
    *(arg1 + 0x18) = uVar5;
    puVar1 = arg1 + 8;
    *puVar1 = puVar7;
    *(arg1 + 0x10) = puVar7[1];
    *puVar7[1] = puVar1;
    puVar7[1] = puVar1;
    iVar6 = arg1 + 0xf8;
    iVar8 = 5;
    do {
        iVar2 = iVar6 + -0x10;
        *(iVar6 + -8) = iVar2;
        *iVar2 = iVar2;
        *iVar6 = iVar6;
        *(iVar6 + 8) = iVar6;
        *(iVar6 + 0x10) = 0;
        iVar6 = iVar6 + 0x58;
        iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    *(arg1 + 0xe0) = *(arg1 + 0xe0) | 3;
    *(arg1 + 0xd0) = 0x167c4;
    *(arg1 + 0x110) = arg1 + 0x40;
    *(arg1 + 0x118) = 0x80;
    arg3 = *(arg1 + 0x18);
    fcn.0001ac04(arg1 + 0x40,0x20,0x1f1a8,arg3);
    *(arg1 + 0x80) = *(arg1 + -0x2c);
    uVar3 = *(arg1 + -0x2b0);
    *(arg1 + 0x84) = uVar3;
    if ((uVar3 != 0) && (arg1 + 0x88 != arg1 + -0x8c)) {
        fcn.000102a0(arg1 + 0x88,arg1 + -0x8c,uVar3);
    }
    *(arg1 + 0x170) = 4;
    *(arg1 + 0x120) = 0x168dc;
    pcStackX_8 = NULL;
    *(arg1 + 0x168) = arg1 + 0xc0;
    *(arg1 + 0xc0) = 0;
    *(arg1 + 0x138) = *(arg1 + 0x138) | 1;
    *(arg1 + 0x178) = 0x16a7c;
    *(arg1 + 0x188) = 0x800000000000000e;
    *(arg1 + 0x1d0) = 0x16cec;
    *(arg1 + 0x1e0) = 0x800000000000000e;
    *(arg1 + 0x228) = 0x17014;
    *(arg1 + 0x238) = 0x800000000000000e;
    *(arg1 + 4) = 1;
    iVar6 = fcn.0001c280(*(arg1 + 0x338),0x1e840,&pcStackX_8,arg3);
    pcVar4 = pcStackX_8;
    if (-1 < iVar6) {
        bVar9 = false;
        if (*pcStackX_8 == '\x01') {
            iVar6 = fcn.00015b18(*(arg1 + 0x338),arg1);
            bVar9 = true;
            if (iVar6 == -0x7ffffffffffffff2) {
                iVar6 = fcn.00015ce4(*(arg1 + 0x338),arg1);
            }
        }
        (**(*0x1f920 + 0x48))(pcVar4);
        if (bVar9) goto code_r0x000176b8;
    }
    iVar6 = fcn.00015ce4(*(arg1 + 0x338),arg1);
code_r0x000176b8:
    if (-1 < iVar6) {
        bVar9 = *0x1f901 == '\x01';
        *(arg1 + 0x20) = 0x170a0;
        *(arg1 + 0x28) = 0x171e0;
        *(arg1 + 0x30) = 0x172ec;
        *(arg1 + 0x38) = 0x173c8;
        if (bVar9) {
            iVar6 = 0;
        }
        else {
            iVar6 = fcn.0001a3e4(arg1);
        }
    }
    return iVar6;
}


/* fcn.0001bdfc @ 0x1bdfc */

ulong fcn.0001bdfc(ulong param_1)

{
    int64_t iVar1;
    ulong auStackX_10 [3];
    
    iVar1 = (**(*0x1f920 + 0x98))(param_1,0x1e860,auStackX_10);
    if (iVar1 < 0) {
        auStackX_10[0] = 0;
    }
    return auStackX_10[0];
}


/* fcn.00014f58 @ 0x14f58 */

ulong fcn.00014f58(int64_t arg1,int64_t arg2)

{
    fcn.00014b48(arg1,-0x7fffffffffffffeb,0x14eec,arg2);
    *(arg1 + 0x18) = *(arg1 + 0x18) + -1;
    if (*(arg1 + 0x18) < 1) {
        fcn.00014b48(arg1,-0x7fffffffffffffeb,0x14eec,0);
        fcn.00014ef4(arg1);
        if (*(arg1 + 0x50) != 0) {
            (**(*0x1f920 + 0x120))(*(arg1 + 0x58),0x1ee30,*(arg1 + 0x40),*(arg1 + 0x38));
            fcn.0001cb5c(*(arg1 + 0x38),*(arg1 + 0x40),0x1edc0,*(arg1 + 0x58));
        }
        *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
        **(arg1 + 0x10) = *(arg1 + 8);
        (**(*0x1f920 + 0x48))(arg1);
    }
    return 0;
}


/* fcn.00014b48 @ 0x14b48 */

void fcn.00014b48(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong *puVar2;
    ulong *puVar3;
    
    puVar2 = *(arg1 + 0x60);
    puVar3 = *puVar2;
    while (puVar2 != arg1 + 0x60) {
        fcn.00014aa0(puVar2 + -1,arg2,arg3,arg4);
        if (puVar2[2] == puVar2 + 2) {
            (**(*(arg1 + 0x50) + 0x30))(*(arg1 + 0x50),puVar2 + 6,puVar2[5]);
        }
        puVar2 = puVar3;
        puVar3 = *puVar3;
    }
    puVar2 = *(arg1 + 0x70);
    puVar3 = *puVar2;
    do {
        if (puVar2 == arg1 + 0x70) {
            return;
        }
        if (arg3 == 0) {
code_r0x00014bda:
            (**(*(arg1 + 0x48) + 0x30))(*(arg1 + 0x48),puVar2 + 0x10);
        }
        else {
            cVar1 = (*arg3)(puVar2 + -1,arg4);
            if (cVar1 != '\0') goto code_r0x00014bda;
        }
        puVar2 = puVar3;
        puVar3 = *puVar3;
    } while( true );
}


/* fcn.00014ef4 @ 0x14ef4 */

void fcn.00014ef4(int64_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    
    iVar1 = *(arg1 + 0x80);
    if (iVar1 != 0) {
        uVar2 = (**(*0x1f920 + 0x18))(8);
        *(arg1 + 0x80) = 0;
        (**(*(arg1 + 0x48) + 0x30))(*(arg1 + 0x48),iVar1 + 0x28);
        (**(*0x1f920 + 0x20))(uVar2);
    }
    return;
}


/* fcn.0001cb5c @ 0x1cb5c */

void fcn.0001cb5c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t aiStack_18 [2];
    
    iVar1 = (**(*0x1f920 + 0x118))(arg1,arg3,aiStack_18,arg2,arg1,2);
    if (-1 < iVar1) {
        (**(aiStack_18[0] + 8))(aiStack_18[0],arg4);
    }
    return;
}


/* fcn.00017c18 @ 0x17c18 */

void fcn.00017c18(int64_t arg1)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    
    *arg1 = *arg1 + -1;
    if (*arg1 < 1) {
        piVar3 = arg1 + 0x10;
        iVar2 = 0x21;
        piVar4 = piVar3;
        do {
            piVar1 = *piVar3;
            piVar5 = **piVar3;
            while (piVar1 != piVar4) {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                piVar1 = piVar1 + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    (**(*0x1f920 + 0x48))();
                }
                piVar1 = piVar5;
                piVar5 = *piVar5;
            }
            piVar4 = piVar4 + 2;
            piVar3 = piVar3 + 2;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        piVar3 = arg1 + 0x228;
        iVar2 = 0x1f;
        piVar4 = piVar3;
        do {
            piVar1 = *piVar3;
            piVar5 = **piVar3;
            while (piVar1 != piVar4) {
                *(*piVar1 + 8) = piVar1[1];
                *piVar1[1] = *piVar1;
                piVar1 = piVar1 + 2;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                    (**(*0x1f920 + 0x48))();
                }
                piVar1 = piVar5;
                piVar5 = *piVar5;
            }
            piVar4 = piVar4 + 2;
            piVar3 = piVar3 + 2;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        (**(*0x1f920 + 0x48))(arg1);
    }
    return;
}


/* fcn.00013430 @ 0x13430 */

void fcn.00013430(int64_t arg1)

{
    int64_t *arg1_00;
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    iVar1 = 0x1f;
    piVar2 = arg1;
    do {
        arg1_00 = *arg1;
        piVar3 = **arg1;
        while (arg1_00 != piVar2) {
            *(*arg1_00 + 8) = arg1_00[1];
            *arg1_00[1] = *arg1_00;
            fcn.000133cc(arg1_00);
            arg1_00 = piVar3;
            piVar3 = *piVar3;
        }
        piVar2 = piVar2 + 2;
        arg1 = arg1 + 0x10;
        iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    return;
}


/* fcn.0001771c @ 0x1771c */

void fcn.0001771c(int64_t arg1)

{
    int64_t iVar1;
    int64_t *piVar2;
    
    if (*(arg1 + 0x2b8) != 0) {
        (**(*0x1f920 + 0x48))();
    }
    if (*(arg1 + 4) != '\0') {
        if (*(arg1 + 0x290) != 0) {
            fcn.00015984(arg1);
        }
        if (*(arg1 + 0x2a8) != 0) {
            (**(*0x1f920 + 0x70))();
            *(arg1 + 0x2a8) = 0;
        }
        piVar2 = arg1 + 0x110;
        iVar1 = 5;
        do {
            if ((*(piVar2 + -6) & 1) == 0) {
                if (*piVar2 != 0) {
                    (**(*0x1f920 + 0x48))();
                }
                *piVar2 = 0;
                piVar2[1] = 0;
            }
            fcn.0001c964(piVar2 - 0x28);
            piVar2 = piVar2 + 0xb;
            iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        fcn.0001a678(arg1);
        *(*(arg1 + 8) + 8) = *(arg1 + 0x10);
        **(arg1 + 0x10) = *(arg1 + 8);
    }
    return;
}


/* fcn.000107f8 @ 0x107f8 */

int64_t fcn.000107f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong *arg4;
    uint *arg1_00;
    uint *puVar3;
    char *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int16_t iVar7;
    
    *arg3 = 0;
    arg1_00 = fcn.0001ab08(0x890);
    if (arg1_00 == NULL) {
        return -0x7ffffffffffffff7;
    }
    *arg1_00 = 0x53345049;
    piVar1 = arg1_00 + 0xe;
    *(arg1_00 + 6) = 0;
    *(arg1_00 + 2) = 0x11300;
    iVar5 = 0x1f;
    *(arg1_00 + 8) = 0;
    *(arg1_00 + 4) = 0x11454;
    puVar3 = arg1_00 + 10;
    *puVar3 = puVar3;
    *(arg1_00 + 0xc) = puVar3;
    puVar3 = arg1_00 + 0x16;
    *piVar1 = piVar1;
    *(arg1_00 + 0x10) = piVar1;
    *(arg1_00 + 0x12) = 0;
    *(arg1_00 + 0x14) = 0;
    do {
        *puVar3 = puVar3;
        *(puVar3 + 2) = puVar3;
        puVar3 = puVar3 + 4;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    puVar3 = arg1_00 + 0x94;
    *(arg1_00 + 0x92) = 0;
    *puVar3 = puVar3;
    arg4 = arg1_00 + 0x9c;
    *(arg1_00 + 0x96) = puVar3;
    piVar2 = arg1_00 + 0x9e;
    *(arg1_00 + 0x98) = arg2;
    *(arg1_00 + 0x9a) = arg1;
    *arg4 = 0;
    *piVar2 = 0;
    *(arg1_00 + 0xa0) = 0;
    arg1_00[0xa2] = 0x1010800;
    arg1_00[0xa3] = 0x10001;
    *(arg1_00 + 0xa4) = 0;
    fcn.00010280(arg1_00 + 0xa5,0x290);
    *(arg1_00 + 0x150) = 0x100;
    *(arg1_00 + 0x14c) = 0;
    *(arg1_00 + 0x14a) = 0;
    *(arg1_00 + 0x14e) = 0;
    iVar5 = fcn.00017bb4();
    *(arg1_00 + 0x14) = iVar5;
    if (iVar5 != 0) {
        iVar5 = (**(*0x1f920 + 0x50))(0x80000200,8,0x131e0,arg1_00,arg1_00 + 0x14a);
        if (((((iVar5 < 0) ||
              (iVar5 = (**(*0x1f920 + 0x50))(0x80000200,8,0x13338,arg1_00,arg1_00 + 0x14c), iVar5 < 0)) ||
             (iVar5 = (**(*0x1f920 + 0x50))(0x200,0x10,0x17810,arg1_00,arg1_00 + 0x14e), iVar5 < 0)) ||
            ((iVar5 = fcn.0001cb10(arg1,arg2,0x1e920,arg4), iVar5 < 0 ||
             (iVar5 = (**(*0x1f920 + 0x118))(*arg4,0x1ee20,piVar2,arg2,arg1,0x10), iVar5 < 0)))) ||
           (iVar5 = (**(*piVar2 + 8))(*piVar2), iVar5 < 0)) goto code_r0x00010944;
        iVar6 = 0;
        iVar5 = (***piVar2)(*piVar2,0,arg1_00 + 0xa5);
        if ((iVar5 < 0) || (iVar5 = fcn.0001782c(arg1_00), iVar5 < 0)) goto code_r0x00010944;
        *(arg1_00 + 0x220) = 0;
        iVar5 = fcn.0001cc70(*(arg1_00 + 0x9a),iVar6,arg1_00 + 0x220);
        if (iVar5 < 0) goto code_r0x00010944;
        iVar5 = fcn.00014c18(*piVar2,arg1,arg2);
        *(arg1_00 + 0x12) = iVar5;
        if (iVar5 != 0) {
            piVar2 = iVar5 + 8;
            iVar6 = *piVar1;
            *piVar2 = iVar6;
            *(iVar5 + 0x10) = piVar1;
            *(iVar6 + 8) = piVar2;
            *piVar1 = piVar2;
            fcn.00010280(arg1_00 + 0x152,0x338);
            iVar5 = fcn.000174b4(arg1_00 + 0x152);
            if (-1 < iVar5) {
                arg1_00[0x222] = arg1_00[0xa8] + -0x14;
                pcVar4 = fcn.0001bdfc(*(arg1_00 + 0x9a));
                if (pcVar4 != NULL) {
                    while( true ) {
                        if ((*pcVar4 == '\x7f') && (pcVar4[1] == -1)) {
                            iVar7 = 0;
                            goto code_r0x00010b7e;
                        }
                        if ((*pcVar4 == '\x03') && (pcVar4[1] == '\x14')) break;
                        pcVar4 = pcVar4 + *(pcVar4 + 2);
                    }
                    iVar7 = *(pcVar4 + 4);
code_r0x00010b7e:
                    if (iVar7 != 0) {
                        arg1_00[0x222] = arg1_00[0x222] + -4;
                    }
                }
                arg1_00[0x223] = arg1_00[0x222];
                *arg3 = arg1_00;
                return 0;
            }
            goto code_r0x00010944;
        }
    }
    iVar5 = -0x7ffffffffffffff7;
code_r0x00010944:
    fcn.00010ba4(arg1_00);
    (**(*0x1f920 + 0x48))(arg1_00);
    return iVar5;
}


/* fcn.00015b18 @ 0x15b18 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00015b18(int64_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    int16_t iVar2;
    int64_t iVar3;
    uint16_t *arg1_00;
    int64_t iVar4;
    uint8_t uVar5;
    uint16_t *arg1_01;
    uint16_t *arg2_00;
    uint64_t uVar6;
    ulong auStackX_18 [2];
    int64_t var_40h;
    uint16_t auStack_38 [2];
    uint32_t uStack_34;
    int iStack_30;
    int64_t var_bp_10h;
    int32_t var_bp_8h;
    
    uVar6 = 0;
    auStackX_18[0] = 0;
    iVar3 = (**(*0x1f928 + 0x48))(arg1,0x1e8b0,0,auStackX_18,0);
    if (iVar3 == -0x7ffffffffffffffb) {
        arg1_00 = fcn.0001aad8(0x8000000000000005,auStackX_18[0]);
        if (arg1_00 == NULL) {
            iVar3 = -0x7ffffffffffffff7;
        }
        else {
            iVar3 = (**(*0x1f928 + 0x48))(arg1,0x1e8b0,0,auStackX_18,arg1_00);
            if (-1 < iVar3) {
                arg1_01 = arg1_00;
                iVar2 = fcn.0001dc14(arg1_00,auStackX_18[0]);
                if ((iVar2 == -1) && (arg1_00[1] < 5)) {
                    if (arg1_00[1] != 0) {
                        arg2_00 = arg1_00 + 2;
                        do {
                            if (auStack_38 != arg2_00) {
                                arg1_01 = auStack_38;
                                fcn.000102a0(arg1_01,arg2_00,0xc);
                            }
                            iVar3 = iStack_30 * 0x58;
                            uVar1 = *(iVar3 + 0xe0 + arg2);
                            uVar5 = uVar1 & 1;
                            arg1_01 = CONCAT71(arg1_01 >> 8,uVar1) & 0xffffffffffffff01;
                            if ((uVar5 == 0) || (*(iVar3 + 0x118 + arg2) == uStack_34)) {
                                if ((uVar5 & arg1_01) == 0) {
                                    iVar4 = fcn.0001aad8(arg1_01,uStack_34);
                                    *(iVar3 + 0x110 + arg2) = iVar4;
                                    if (iVar4 == 0) goto code_r0x00015c75;
                                }
                                arg1_01 = *(iVar3 + 0x110 + arg2);
                                if ((uStack_34 != 0) && (arg1_01 != auStack_38[0] + arg1_00)) {
                                    fcn.000102a0(arg1_01,auStack_38[0] + arg1_00,uStack_34);
                                }
                                *(iVar3 + 0x118 + arg2) = uStack_34;
                                *(iVar3 + 0xd8 + arg2) = 0;
                            }
code_r0x00015c75:
                            uVar6 = uVar6 + 1;
                            arg2_00 = arg2_00 + 6;
                        } while (uVar6 < arg1_00[1]);
                    }
                    (**(*0x1f920 + 0x48))(arg1_00);
                    return 0;
                }
            }
            (**(*0x1f920 + 0x48))(arg1_00);
            (**(*0x1f928 + 0x58))(arg1,0x1e8b0,3,0,0);
            iVar3 = -0x7ffffffffffffff2;
        }
    }
    return iVar3;
}


/* fcn.000158e0 @ 0x158e0 */

int64_t fcn.000158e0(uint32_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong in_RDX;
    ulong in_R8;
    int64_t in_R9;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (*(arg1_00 + 0x80) == 0) {
        iVar2 = fcn.000149f4(arg1_00,in_RDX,in_R8,in_R9);
        if (iVar2 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            *(arg1_00 + 0x80) = iVar2;
            iVar1 = (**(*(arg1_00 + 0x48) + 0x28))(*(arg1_00 + 0x48),iVar2 + 0x28);
            if (iVar1 < 0) {
                *(arg1_00 + 0x80) = 0;
                (**(*0x1f920 + 0x70))(*(iVar2 + 0x28));
                (**(*0x1f920 + 0x48))(iVar2);
            }
            else {
                iVar1 = 0;
            }
        }
    }
    else {
        iVar1 = -0x7fffffffffffffec;
    }
    return iVar1;
}


/* fcn.0001cee4 @ 0x1cee4 */

uint64_t fcn.0001cee4(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint8_t *puVar2;
    uint64_t uVar3;
    
    uVar3 = 0;
    if (*arg2 != 0) {
        puVar2 = *arg1 + 0x10;
        uVar1 = uVar3;
        do {
            if ((*puVar2 & 0x10) != 0) {
                uVar3 = *(*arg1 + 8 + uVar1 * 0x18);
                break;
            }
            uVar1 = uVar1 + 1;
            puVar2 = puVar2 + 0x18;
        } while (uVar1 < *arg2);
    }
    (**(*0x1f920 + 0x48))(*arg1);
    return uVar3;
}


/* fcn.00015984 @ 0x15984 */

void fcn.00015984(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = *(arg1 + 0x298);
    (**(iVar1 + 0x28))(iVar1);
    (**(iVar1 + 8))(iVar1,0);
    *(arg1 + 0x298) = 0;
    iVar1 = (**(*0x1f920 + 0x120))(*(arg1 + 0x290),0x1ee00,*(arg1 + -0x2e8),*(arg1 + -0x2e0));
    if (-1 < iVar1) {
        fcn.0001cb5c(*(arg1 + -0x2e0),*(arg1 + -0x2e8),0x1e850,*(arg1 + 0x290));
        *(arg1 + 0x290) = 0;
    }
    return;
}


/* fcn.00010d10 @ 0x10d10 */

ulong fcn.00010d10(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong uVar3;
    
    uVar2 = 0;
    if ((arg1 == 0) || (arg2 == 0)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        uVar1 = *(arg2 + 8);
        if (((uVar1 != 0) && (*(arg2 + 0x10) != 0)) && (uVar1 != 0)) {
            do {
                if (*(arg1 + -0x20) == *(*(arg2 + 0x10) + uVar2 * 8)) {
    //WARNING: Could not recover jumptable at 0x00010d4f. Too many branches
    //WARNING: Treating indirect jump as call
                    uVar3 = (**(*arg2 + 8))(*arg2);
                    return uVar3;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uVar1);
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001c208 @ 0x1c208 */

ulong fcn.0001c208(void)

{
    int64_t *piVar1;
    int64_t iVar2;
    int64_t *piVar3;
    
    piVar1 = *0x1f910;
    if (*0x1f910 != NULL) {
        iVar2 = 0;
        if (**0x1f910 != 0) {
            piVar3 = *0x1f910;
            do {
                (**(*0x1f920 + 0x48))(*piVar3);
                if (piVar3[1] != 0) {
                    (**(*0x1f920 + 0x48))();
                }
                iVar2 = iVar2 + 1;
                piVar3 = piVar1 + iVar2 * 2;
            } while (*piVar3 != 0);
        }
        (**(*0x1f920 + 0x48))(piVar1);
    }
    return 0;
}


/* fcn.000118b0 @ 0x118b0 */

void fcn.000118b0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    
    fcn.00010280(arg2,0x158);
    *arg2 = 0x50345049;
    if (arg2 + 8 != 0x1ee90) {
        fcn.000102a0(arg2 + 8,0x1ee90,0x40);
    }
    *(arg2 + 0x60) = arg1;
    iVar1 = arg2 + 0x78;
    iVar2 = arg2 + 0x68;
    *(arg2 + 0x50) = 0;
    *(arg2 + 0x58) = 0;
    *iVar2 = iVar2;
    *(arg2 + 0x70) = iVar2;
    iVar2 = arg2 + 0x88;
    *iVar1 = iVar1;
    *(arg2 + 0x80) = iVar1;
    *iVar2 = iVar2;
    *(arg2 + 0x90) = iVar2;
    *(arg2 + 0x98) = 0;
    iVar2 = arg2 + 0xa0;
    *iVar2 = iVar2;
    iVar1 = arg2 + 0xb0;
    *(arg2 + 0xa8) = iVar2;
    *iVar1 = iVar1;
    *(arg2 + 0xb8) = iVar1;
    iVar1 = arg2 + 200;
    *(arg2 + 0xc0) = 0;
    *iVar1 = iVar1;
    *(arg2 + 0xd0) = iVar1;
    iVar1 = arg2 + 0xd8;
    *iVar1 = iVar1;
    *(arg2 + 0xe0) = iVar1;
    iVar1 = arg2 + 0x108;
    *iVar1 = iVar1;
    *(arg2 + 0x110) = iVar1;
    *(arg2 + 0xe8) = 0x10;
    *(arg2 + 0xf0) = 4;
    *(arg2 + 0xf8) = 1;
    return;
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011c8c @ 0x11c8c */

ulong fcn.00011c8c(int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.00012ffc(arg1,0);
    if ((-1 < iVar1) && (iVar1 = fcn.00011f94(arg1,0,0), -1 < iVar1)) {
        if (*(arg1 + 0x100) != 0) {
            *(*(arg1 + 0x108) + 8) = *(arg1 + 0x110);
            **(arg1 + 0x110) = *(arg1 + 0x108);
            if (*(*(arg1 + 0x100) + 0x50) != 0) {
                (**(*0x1f920 + 0x120))(*(*(arg1 + 0x100) + 0x58),0x1ee30,*0x1ee78,*(arg1 + 0x48));
            }
            fcn.00014f58(*(arg1 + 0x100),arg1);
            *(arg1 + 0x100) = 0;
        }
        if (*(arg1 + 0x118) != 0) {
            iVar1 = *(*(arg1 + 0x118) + 0x220);
            if (iVar1 != 0) {
                fcn.00017c18(iVar1);
            }
            fcn.00017c18(*(arg1 + 0x118));
            *(arg1 + 0x118) = 0;
        }
        if (*(arg1 + 0x120) != 0) {
            (**(*0x1f920 + 0x48))();
            *(arg1 + 0x120) = 0;
            *(arg1 + 0x128) = 0;
        }
        if (*(arg1 + 0x130) != 0) {
            (**(*0x1f920 + 0x48))();
            *(arg1 + 0x130) = 0;
            *(arg1 + 0x138) = 0;
        }
        fcn.0001c964(arg1 + 0xa0);
        fcn.0001c964(arg1 + 0x78);
        return 0;
    }
    return 0x8000000000000007;
}


/* fcn.00018164 @ 0x18164 */

//WARNING: Variable defined which should be unmapped: var_20h

ulong fcn.00018164(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int iVar9;
    ulong *puVar10;
    int32_t var_20h;
    
    iVar3 = *(arg1 + 0x118);
    if (*(arg1 + 0x120) != 0) {
        (**(*0x1f920 + 0x48))();
        *(arg1 + 0x120) = 0;
        *(arg1 + 0x128) = 0;
    }
    iVar6 = *(iVar3 + 0x220);
    uVar2 = *(iVar3 + 8);
    if (iVar6 != 0) {
        uVar2 = uVar2 + *(iVar6 + 8);
    }
    if (uVar2 != 0) {
        iVar3 = fcn.0001aad8(iVar6,uVar2 * 0xc);
        if (iVar3 == 0) {
            return 0x8000000000000009;
        }
        uVar5 = 0;
        iVar8 = 0x210;
        iVar6 = 0x210;
        iVar9 = 0x20;
        do {
            for (iVar7 = *(arg1 + 0x118); iVar7 != 0; iVar7 = *(iVar7 + 0x220)) {
                for (puVar10 = *(iVar8 + iVar7); puVar10 != iVar6 + iVar7; puVar10 = *puVar10) {
                    uVar2 = *(puVar10 + 3) & *(puVar10 + 0x1c);
                    uVar4 = uVar2;
                    uVar1 = uVar2 >> 0x10;
                    *(iVar3 + uVar5 * 0xc) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
                    uVar1 = *(puVar10 + 0x1c) >> 0x10;
                    uVar4 = *(puVar10 + 0x1c);
                    *(iVar3 + 4 + uVar5 * 0xc) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
                    uVar1 = *(puVar10 + 4) >> 0x10;
                    uVar4 = *(puVar10 + 4);
                    *(iVar3 + 8 + uVar5 * 0xc) = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar1 << 8 | uVar1 >> 8);
                    uVar5 = uVar5 + 1;
                }
            }
            iVar6 = iVar6 + -0x10;
            iVar8 = iVar8 + -0x10;
            iVar9 = iVar9 + -1;
        } while (-1 < iVar9);
        *(arg1 + 0x120) = iVar3;
        *(arg1 + 0x128) = uVar5;
    }
    return 0;
}


/* fcn.00012ffc @ 0x12ffc */

int64_t fcn.00012ffc(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001cab4(arg1 + 0xa0,0x12f18,arg2);
    if (iVar1 < 0) {
        if (arg2 == 0) {
            return iVar1;
        }
        if (iVar1 != -0x7fffffffffffffeb) {
            return iVar1;
        }
    }
    else {
        iVar1 = fcn.0001cab4(arg1 + 0x78,0x12f74,arg2);
        (**(*0x1f960 + 8))(*0x1f960);
        if (iVar1 < 0) {
            if ((arg2 == 0) || (iVar1 != -0x7fffffffffffffeb)) {
                return iVar1;
            }
        }
        else {
            if (arg2 != 0) {
                return -0x7ffffffffffffff2;
            }
            if ((*(arg1 + 0xc0) != 0) || (*(arg1 + 0x98) != 0)) {
                return -0x7ffffffffffffff9;
            }
        }
    }
    return 0;
}


/* fcn.00014d5c @ 0x14d5c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.00014d5c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *arg4;
    uint16_t uVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint32_t auStackX_10 [2];
    ushort uStack_38;
    uchar uStack_36;
    uint32_t *puStack_30;
    int64_t var_bp_20h;
    int64_t var_bp_18h;
    int32_t var_bp_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    
    auStackX_10[0] = arg2;
    *(arg1 + 0x24) = arg3;
    arg4 = arg1 + 0x58;
    *(arg1 + 0x20) = auStackX_10[0];
    uVar3 = ~arg3 | auStackX_10[0];
    *(arg1 + 0x28) = uVar3;
    *(arg1 + 0x2c) = uVar3;
    if (*arg4 != 0) {
        if (*(arg1 + 0x50) != 0) {
            (**(*0x1f920 + 0x120))(*arg4,0x1ee30,*(arg1 + 0x40),*(arg1 + 0x38));
            *(arg1 + 0x50) = 0;
        }
        fcn.0001cb5c(*(arg1 + 0x38),*(arg1 + 0x40),0x1edc0,*arg4);
        *arg4 = 0;
    }
    if (auStackX_10[0] == 0) {
code_r0x00014ece:
        *(arg1 + 0x30) = 1;
        iVar2 = 0;
    }
    else {
        iVar2 = fcn.0001cb10(*(arg1 + 0x38),*(arg1 + 0x40),0x1edc0,arg4);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = (**(*0x1f920 + 0x118))(*arg4,0x1ee30,arg1 + 0x50,*(arg1 + 0x40),*(arg1 + 0x38),0x10);
        if (-1 < iVar2) {
            var_bp_20h._0_4_ = 0;
            var_bp_20h._4_4_ = 0;
            var_bp_18h._0_4_ = 0;
            uVar1 = auStackX_10[0] >> 0x10;
            auStackX_10[0] = CONCAT22(auStackX_10[0] << 8 | auStackX_10[0] >> 8,uVar1 << 8 | uVar1 >> 8);
            uStack_36 = 4;
            uStack_38 = 0x800;
            puStack_30 = auStackX_10;
            iVar2 = (***(arg1 + 0x50))(*(arg1 + 0x50),&uStack_38);
            if (-1 < iVar2) goto code_r0x00014ece;
            (**(*0x1f920 + 0x120))(*arg4,0x1ee30,*(arg1 + 0x40),*(arg1 + 0x38));
        }
        fcn.0001cb5c(*(arg1 + 0x38),*(arg1 + 0x40),0x1edc0,*arg4);
    }
    return iVar2;
}


/* fcn.00017d14 @ 0x17d14 */

ulong fcn.00017d14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t *piVar3;
    uint64_t uVar4;
    int64_t *piVar5;
    uint32_t uVar6;
    int iVar7;
    
    iVar7 = arg4;
    uVar6 = arg3;
    uVar4 = 0;
    do {
        if (uVar6 == *(uVar4 * 4 + 0x1f740)) break;
        uVar4 = uVar4 + 1;
    } while (uVar4 < 0x21);
    if (uVar4 < 0x21) {
        piVar5 = (uVar4 + 1) * 0x10 + arg1;
        piVar3 = *piVar5;
        if (piVar3 != piVar5) {
            do {
                if (((*(piVar3 + 3) & uVar6) == (arg2 & uVar6)) && (piVar3[4] == iVar7)) {
                    return 0x800000000000000f;
                }
                piVar3 = *piVar3;
            } while (piVar3 != piVar5);
        }
        piVar3 = fcn.0001aad8(piVar3,0x28);
        if (piVar3 == NULL) {
            uVar2 = 0x8000000000000009;
        }
        else {
            *piVar3 = piVar3;
            piVar3[1] = piVar3;
            *(piVar3 + 0x24) = 0;
            piVar3[2] = 1;
            *(piVar3 + 3) = arg2;
            *(piVar3 + 0x1c) = uVar6;
            *(piVar3 + 4) = iVar7;
            if (iVar7 == 0) {
                *(piVar3 + 0x24) = 1;
            }
            iVar1 = *piVar5;
            *piVar3 = iVar1;
            piVar3[1] = piVar5;
            *(iVar1 + 8) = piVar3;
            *piVar5 = piVar3;
            *(arg1 + 8) = *(arg1 + 8) + 1;
            uVar2 = 0;
        }
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00011f94 @ 0x11f94 */

//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_20h

uint64_t fcn.00011f94(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int *piVar7;
    uint16_t uVar8;
    uint32_t uVar9;
    int64_t iVar10;
    int *piVar11;
    int64_t *piVar12;
    int *piVar13;
    int64_t iVar14;
    int *piVar15;
    uint in_R8;
    int *arg2_00;
    unkbyte7 Var16;
    int iVar17;
    uint32_t uVar18;
    int aiStackX_10 [4];
    int64_t iStackX_20;
    int32_t var_48h;
    int32_t var_58h;
    int64_t aiStack_50 [3];
    int64_t var_20h;
    int64_t var_18h;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    if (arg2 == '\0') {
        iVar17 = *(arg1 + 0x138);
        iStackX_20 = CONCAT44(iStackX_20._4_4_,iVar17);
        piVar7 = arg2_00;
        do {
            if (iVar17 == 0) {
                return -(arg2_00 != NULL) & 0x800000000000000e;
            }
            aiStackX_10[0] = 0;
            if (*(arg1 + 0x130) != 0) {
                aiStackX_10[0] = *(*(arg1 + 0x130) + (iVar17 - 1) * 4);
            }
            if ((arg2_00 == NULL) || (aiStackX_10 == arg2_00)) {
code_r0x00012232:
                uVar2 = aiStackX_10[0] >> 0x10;
                iVar6 = *(arg1 + 0x60);
                aiStack_50[0] = *(iVar6 + 0x278);
                piVar1 = iVar6 + 0x250;
                piVar4 = *piVar1;
                if (piVar4 != piVar1) {
                    do {
                        if (piVar4[3] == CONCAT22(aiStackX_10[0] << 8 | aiStackX_10[0] >> 8,uVar2 << 8 | uVar2 >> 8))
                        goto code_r0x0001227c;
                        piVar4 = *piVar4;
                    } while (piVar4 != piVar1);
                }
                piVar4 = NULL;
code_r0x0001227c:
                if (piVar4 == NULL) goto code_r0x000121af;
                piVar4[2] = piVar4[2] + -1;
                if (piVar4[2] < 1) {
                    piVar12 = *piVar1;
                    piVar15 = piVar4 + 0x29;
                    iVar3 = 0;
                    if (piVar12 == piVar1) {
code_r0x00012301:
                        if ((piVar4[5] != '\0') && (*(iVar6 + 0x248) == 0)) {
                            fcn.00017914(iVar6,0xe0000002,CONCAT71(piVar7 >> 8,0x17),*(piVar4 + 3));
                        }
                        *(*piVar4 + 8) = piVar4[1];
                        *piVar4[1] = *piVar4;
                        (**(*0x1f920 + 0x48))(piVar4);
                        iVar3 = 0;
                    }
                    else {
                        do {
                            if (piVar12 + 0x29 == piVar15) {
                                iVar14 = 0;
                            }
                            else {
                                piVar7 = NULL;
                                iVar14 = fcn.000102e0(piVar12 + 0x29,piVar15,0x20);
                            }
                            piVar12 = *piVar12;
                            iVar10 = iVar3 + 1;
                            if (iVar14 != 0) {
                                iVar10 = iVar3;
                            }
                            iVar3 = iVar10;
                        } while (piVar12 != piVar1);
                        if (((iVar10 != 1) ||
                            (iVar3 = (**(aiStack_50[0] + 0x18))(aiStack_50[0],0,piVar15), piVar7 = piVar15,
                            -1 < iVar3)) || (iVar3 == -0x7ffffffffffffff2)) goto code_r0x00012301;
                    }
                    if (iVar3 < 0) goto code_r0x000121af;
                    iVar17 = iStackX_20;
                }
                uVar18 = *(arg1 + 0x138);
                uVar5 = 0;
                piVar15 = *(arg1 + 0x130);
                if (uVar18 != 0) {
                    piVar7 = piVar15;
                    do {
                        if (*piVar7 == aiStackX_10[0]) break;
                        uVar9 = uVar5 + 1;
                        uVar5 = uVar9;
                        piVar7 = piVar7 + 1;
                    } while (uVar9 < uVar18);
                }
                uVar18 = uVar18 - 1;
                piVar7 = uVar18;
                uVar9 = uVar5;
                if (uVar9 < uVar18) {
                    piVar7 = uVar18 - uVar9;
                    piVar13 = piVar15 + (uVar9 + 1);
                    piVar15 = piVar15 + uVar5;
                    for (piVar11 = piVar7; piVar11 != NULL; piVar11 = piVar11 + -1) {
                        *piVar15 = *piVar13;
                        piVar13 = piVar13 + 1;
                        piVar15 = piVar15 + 1;
                    }
                }
                piVar15 = arg1 + 0x138;
                *piVar15 = *piVar15 + -1;
                if (*piVar15 == 0) {
                    (**(*0x1f920 + 0x48))();
                    *(arg1 + 0x130) = 0;
                }
                if (arg2_00 != NULL) goto code_r0x0001219b;
            }
            else {
                piVar7 = NULL;
                iVar6 = fcn.000102e0(aiStackX_10,arg2_00,4);
                if (iVar6 == 0) goto code_r0x00012232;
            }
            iVar17 = iVar17 + -1;
            iStackX_20 = CONCAT44(iStackX_20._4_4_,iVar17);
        } while( true );
    }
    if (aiStackX_10 != arg2_00) {
        fcn.000102a0(aiStackX_10,arg2_00,4);
    }
    iVar17 = aiStackX_10[0];
    uVar18 = *(arg1 + 0x138);
    uVar5 = 0;
    if (uVar18 != 0) {
        do {
            if (*(*(arg1 + 0x130) + uVar5 * 4) == aiStackX_10[0]) {
                return 0x8000000000000014;
            }
            uVar9 = uVar5 + 1;
            uVar5 = uVar9;
        } while (uVar9 < uVar18);
    }
    iVar6 = *(arg1 + 0x130);
    iVar3 = fcn.0001aad8(uVar5,uVar18 + 1 << 2);
    if (iVar3 == 0) {
        return 0x8000000000000009;
    }
    iVar14 = uVar18 * 4;
    if ((uVar18 != 0) && (iVar3 != iVar6)) {
        fcn.000102a0(iVar3,iVar6,iVar14);
    }
    *(iVar14 + iVar3) = iVar17;
    iVar6 = *(arg1 + 0x60);
    uVar2 = aiStackX_10[0] >> 0x10;
    iVar14 = *(iVar6 + 0x278);
    piVar1 = iVar6 + 0x250;
    uVar8 = aiStackX_10[0];
    iVar17 = CONCAT22(uVar2,uVar8 << 8 | uVar8 >> 8);
    uVar18 = uVar2 << 8 | uVar2 >> 8 | iVar17 << 0x10;
    for (piVar4 = *piVar1; piVar4 != piVar1; piVar4 = *piVar4) {
        if (*(piVar4 + 3) == uVar18) goto code_r0x0001208e;
    }
    piVar4 = NULL;
code_r0x0001208e:
    iStackX_20 = iVar14;
    if (piVar4 == NULL) {
        piVar4 = fcn.0001aad8(iVar17,0x50);
        if (piVar4 != NULL) {
            *(piVar4 + 3) = uVar18;
            piVar4[2] = 1;
            piVar12 = aiStack_50;
            piVar4[4] = 10;
            *(piVar4 + 5) = 1;
            aiStack_50[0] =
                 CONCAT44(aiStack_50[0]._4_4_,
                          CONCAT22((uVar2 >> 8) << 8 | uVar2 & 0xff,(uVar8 >> 8) << 8 | uVar8 & 0xff));
            iVar14 = (**(iVar14 + 0x10))(iVar14,0,piVar12,piVar4 + 0x29);
            if (iVar14 < 0) {
code_r0x00012166:
                (**(*0x1f920 + 0x48))(piVar4);
            }
            else {
                Var16 = piVar12 >> 8;
                iVar14 = CONCAT71(Var16,0x12);
                if (*(iVar6 + 0x248) == 0) {
                    iVar14 = CONCAT71(Var16,0x16);
                }
                iVar14 = fcn.00017914(iVar6,uVar18,iVar14,uVar18);
                if ((iVar14 < 0) ||
                   ((iVar14 = (**(iStackX_20 + 0x18))(iStackX_20,1,piVar4 + 0x29), iVar14 < 0 &&
                    (iVar14 != -0x7fffffffffffffec)))) goto code_r0x00012166;
                iVar6 = *piVar1;
                iVar14 = 0;
                *piVar4 = iVar6;
                piVar4[1] = piVar1;
                *(iVar6 + 8) = piVar4;
                *piVar1 = piVar4;
            }
            if (-1 < iVar14) goto code_r0x00012178;
        }
        (**(*0x1f920 + 0x48))(iVar3);
code_r0x000121af:
        uVar5 = 0x8000000000000007;
    }
    else {
        piVar4[2] = piVar4[2] + 1;
code_r0x00012178:
        if (*(arg1 + 0x130) != 0) {
            (**(*0x1f920 + 0x48))();
        }
        *(arg1 + 0x138) = *(arg1 + 0x138) + 1;
        *(arg1 + 0x130) = iVar3;
code_r0x0001219b:
        uVar5 = 0;
    }
    return uVar5;
}


/* fcn.0001c964 @ 0x1c964 */

void fcn.0001c964(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    piVar3 = *piVar2;
    piVar4 = **piVar2;
    while (piVar3 != piVar2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        iVar1 = *0x1f920;
        piVar2[4] = piVar2[4] + -1;
        (**(iVar1 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    piVar3 = piVar2[2];
    piVar4 = *piVar3;
    while (piVar3 != piVar2 + 2) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        (**(*0x1f920 + 0x48))();
        piVar3 = piVar4;
        piVar4 = *piVar4;
    }
    return;
}


/* fcn.00018d30 @ 0x18d30 */

uint64_t fcn.00018d30(int64_t arg1,int64_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar2 = 0;
    uVar3 = arg2;
    uVar1 = arg1;
    if (uVar3 == 0) {
        return uVar1 == 0;
    }
    do {
        if (uVar3 == *(uVar2 * 4 + 0x1f740)) break;
        uVar2 = uVar2 + 1;
    } while (uVar2 < 0x21);
    if (uVar2 != 0x21) {
        uVar2 = fcn.0001c8f0(uVar1);
        if (uVar2 < 4) {
            uVar2 = uVar1 - 1;
            if (uVar1 - 1 < 0xfffffffe) {
                uVar2 = 0;
                do {
                    if (uVar3 == *(uVar2 * 4 + 0x1f740)) break;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < 0x21);
                if (uVar2 < 0x1f) {
                    uVar1 = ~uVar3 & uVar1;
                    uVar2 = uVar1;
                    if ((uVar1 == ~uVar3) || (uVar1 == 0)) goto code_r0x0001c95f;
                }
                return CONCAT71(uVar2 >> 8,1);
            }
code_r0x0001c95f:
            return uVar2 & 0xffffffffffffff00;
        }
    }
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.0001c8f0 @ 0x1c8f0 */

char fcn.0001c8f0(uint32_t arg1)

{
    uint8_t uVar1;
    
    if (-1 < arg1) {
        return '\x01';
    }
    uVar1 = arg1 >> 0x18;
    if ((uVar1 & 0xc0) == 0x80) {
        return '\x02';
    }
    if ((uVar1 & 0xe0) == 0xc0) {
        return '\x03';
    }
    return ((uVar1 & 0xf0) != 0xe0) + '\x04';
}


/* fcn.000102e0 @ 0x102e0 */

int64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* fcn.00011994 @ 0x11994 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00011994(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    ulong *puVar7;
    ulong *arg1_00;
    uint in_register_0000000c;
    int64_t arg2_00;
    int64_t iVar8;
    uint32_t auStackX_8 [4];
    uint32_t auStackX_18 [2];
    int aiStackX_20 [2];
    int64_t var_40h;
    int64_t var_50h;
    int32_t var_58h;
    ulong auStack_48 [2];
    int64_t var_10h;
    
    arg2_00 = CONCAT44(in_register_0000000c,arg1);
    iVar5 = *(arg2_00 + 0x60);
    if (*(arg2_00 + 0x50) == 1) {
        iVar5 = fcn.00012ffc(arg2_00,0);
        if (iVar5 < 0) {
            return -0x7ffffffffffffff9;
        }
        if (arg2_00 + 0x13c != arg2) {
            fcn.000102a0(arg2_00 + 0x13c,arg2,0x1c);
        }
    }
    else {
        iVar8 = -0x7ffffffffffffff7;
        iVar6 = fcn.00017bb4();
        *(arg2_00 + 0x118) = iVar6;
        if (iVar6 == 0) goto code_r0x000119ec;
        if (auStackX_18 != arg2 + 6) {
            fcn.000102a0(auStackX_18,arg2 + 6,4);
        }
        if (auStackX_8 != arg2 + 10) {
            fcn.000102a0(auStackX_8,arg2 + 10,4);
        }
        uVar4 = auStackX_18[0] >> 0x10;
        auStackX_18[0] = CONCAT22(auStackX_18[0] << 8 | auStackX_18[0] >> 8,uVar4 << 8 | uVar4 >> 8);
        uVar4 = auStackX_8[0] >> 0x10;
        auStackX_8[0] = CONCAT22(auStackX_8[0] << 8 | auStackX_8[0] >> 8,uVar4 << 8 | uVar4 >> 8);
        if (*(arg2 + 5) == '\0') {
            puVar1 = iVar5 + 0x38;
            for (puVar7 = *puVar1; puVar7 != puVar1; puVar7 = *puVar7) {
                arg1_00 = puVar7 + -1;
                if (((*(puVar7 + 5) != '\0') && (*(puVar7 + 3) == auStackX_18[0])) &&
                   (*(puVar7 + 0x1c) == auStackX_8[0])) goto code_r0x00011ac6;
            }
            arg1_00 = NULL;
code_r0x00011ac6:
            if (arg1_00 != NULL) {
                arg1_00[3] = arg1_00[3] + 1;
code_r0x00011b32:
                fcn.00017d14(*(arg2_00 + 0x118),auStackX_8[0] & auStackX_18[0],auStackX_8[0],0);
                goto code_r0x00011bab;
            }
            arg1_00 = fcn.00014c18(*(iVar5 + 0x278),*(iVar5 + 0x268),*(iVar5 + 0x260));
            if (arg1_00 != NULL) {
                iVar8 = fcn.00014d5c(arg1_00,auStackX_18[0],auStackX_8[0]);
                if (-1 < iVar8) {
                    piVar2 = arg1_00 + 1;
                    *piVar2 = puVar1;
                    puVar1 = *(iVar5 + 0x40);
                    arg1_00[2] = puVar1;
                    *puVar1 = piVar2;
                    *(iVar5 + 0x40) = piVar2;
                    goto code_r0x00011b32;
                }
                iVar8 = -0x7ffffffffffffff9;
                goto code_r0x00011bfa;
            }
code_r0x00011c05:
            fcn.00017c18(*(arg2_00 + 0x118));
            *(arg2_00 + 0x118) = 0;
            goto code_r0x000119ec;
        }
        if ((*(iVar5 + 0x18) == 0) && (aiStackX_20[0] = *(iVar5 + 0x608), aiStackX_20[0] != 1)) {
            aiStackX_20[0] = 1;
            iVar8 = (**(iVar5 + 0x568))(iVar5 + 0x568,1,4,aiStackX_20);
            if (iVar8 < 0) goto code_r0x00011c05;
        }
        arg1_00 = *(iVar5 + 0x48);
        arg1_00[3] = arg1_00[3] + 1;
        **(iVar5 + 0x50) = **(iVar5 + 0x50) + 1;
        *(*(arg2_00 + 0x118) + 0x220) = *(iVar5 + 0x50);
code_r0x00011bab:
        *(arg2_00 + 0x100) = arg1_00;
        if (arg1_00[10] != 0) {
            auStack_48[0] = 0;
            iVar8 = (**(*0x1f920 + 0x118))(arg1_00[0xb],0x1ee30,auStack_48,*0x1ee78,*(arg2_00 + 0x48),8);
            if (iVar8 < 0) {
code_r0x00011bfa:
                fcn.00014f58(arg1_00,arg2_00);
                goto code_r0x00011c05;
            }
        }
        piVar2 = arg2_00 + 0x108;
        *piVar2 = arg1_00 + 0x1a;
        piVar3 = arg1_00[0x1b];
        *(arg2_00 + 0x110) = piVar3;
        *piVar3 = piVar2;
        arg1_00[0x1b] = piVar2;
        if (arg2_00 + 0x13c != arg2) {
            fcn.000102a0(arg2_00 + 0x13c,arg2,0x1c);
        }
        *(arg2_00 + 0x50) = 1;
        if ((*(arg2 + 5) != '\0') && (*(*(arg2_00 + 0x100) + 0x30) == '\0')) {
            return -0x7fffffffffffffef;
        }
    }
    iVar8 = 0;
code_r0x000119ec:
    return iVar8;
}


/* fcn.00011804 @ 0x11804 */

int64_t fcn.00011804(int64_t arg1,int64_t arg2)

{
    bool bVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong *puVar4;
    char cVar5;
    
    bVar1 = false;
    cVar5 = '\0';
    if (arg2 == '\0') {
        bVar1 = true;
        for (puVar2 = *(arg1 + 0x38); puVar2 != arg1 + 0x38; puVar2 = *puVar2) {
            *(puVar2 + 0x1b) = 0;
            for (puVar4 = puVar2[0x19]; puVar4 != puVar2 + 0x19; puVar4 = *puVar4) {
                if (*(puVar4 + 7) != '\0') {
                    cVar5 = '\x01';
                    *(puVar2 + 0x1b) = 1;
                }
            }
        }
        if (cVar5 == *(arg1 + 0x28d)) {
            return 0;
        }
        *(arg1 + 0x28d) = cVar5;
    }
    iVar3 = (**(*(arg1 + 0x278) + 8))(*(arg1 + 0x278),arg1 + 0x280);
    if ((iVar3 < 0) && (bVar1)) {
        *(arg1 + 0x28d) = cVar5 == '\0';
    }
    return iVar3;
}


/* fcn.00017914 @ 0x17914 */

ulong fcn.00017914(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    int64_t arg3_00;
    uchar *arg1_00;
    ulong uVar2;
    uint16_t uVar3;
    int64_t unaff_R14;
    int64_t unaff_R15;
    uchar uStackY_38;
    uchar uStackY_37;
    ushort uStackY_32;
    ushort in_stack_ffffffffffffffd2;
    int32_t in_stack_ffffffffffffffe0;
    
    arg3_00 = fcn.0001cfd4(0x44);
    if (arg3_00 != 0) {
        *(arg3_00 + 0x98) = *(arg3_00 + 0x98) + 0x3c;
        *(arg3_00 + 0xa0) = *(arg3_00 + 0xa0) + 0x3c;
        arg1_00 = fcn.0001d8b8(arg3_00,8,0);
        if (arg1_00 != NULL) {
            *arg1_00 = arg3;
            arg1_00[1] = 0;
            *(arg1_00 + 2) = 0;
            uVar1 = (arg4 & 0xffffffffU) >> 0x10;
            uVar3 = arg4 & 0xffffffffU;
            *(arg1_00 + 4) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
            uVar1 = fcn.0001dc14(arg1_00,8);
            *(arg1_00 + 2) = ~uVar1;
            uStackY_37 = 0;
            uStackY_32 = 0;
            uVar2 = fcn.00018434(arg1,0,arg3_00,&uStackY_38,CONCAT22(in_stack_ffffffffffffffd2,0x201),arg2,
                                 in_stack_ffffffffffffffe0,unaff_R15,unaff_R14);
            return uVar2;
        }
    }
    return 0x8000000000000009;
}


/* fcn.00017e14 @ 0x17e14 */

ulong fcn.00017e14(int64_t arg1,int64_t arg2,uint32_t arg3,uint32_t arg4)

{
    uint64_t uVar1;
    ulong uVar2;
    int64_t *piVar3;
    int64_t *piVar4;
    int64_t *piVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t iVar8;
    
    uVar1 = 0;
    do {
        if (arg3 == *(uVar1 * 4 + 0x1f740)) break;
        uVar1 = uVar1 + 1;
    } while (uVar1 < 0x21);
    if (uVar1 < 0x21) {
        piVar3 = (uVar1 + 1) * 0x10 + arg1;
        piVar5 = *piVar3;
        if (piVar5 != piVar3) {
            piVar6 = *piVar5;
            do {
                piVar4 = piVar6;
                if (((*(piVar5 + 3) & arg3) == (arg2 & arg3)) && (*(piVar5 + 4) == arg4)) {
                    piVar3 = arg1 + 0x228;
                    iVar8 = 0x1f;
                    piVar6 = piVar3;
                    do {
                        piVar4 = *piVar3;
                        piVar7 = **piVar3;
                        while (piVar4 != piVar6) {
                            if (piVar4[5] == piVar5) {
                                *(*piVar4 + 8) = piVar4[1];
                                *piVar4[1] = *piVar4;
                                piVar4 = piVar4 + 2;
                                *piVar4 = *piVar4 + -1;
                                if (*piVar4 == 0) {
                                    (**(*0x1f920 + 0x48))();
                                }
                            }
                            piVar4 = piVar7;
                            piVar7 = *piVar7;
                        }
                        piVar6 = piVar6 + 2;
                        piVar3 = piVar3 + 2;
                        iVar8 = iVar8 + -1;
                    } while (iVar8 != 0);
                    *(*piVar5 + 8) = piVar5[1];
                    *piVar5[1] = *piVar5;
                    piVar3 = piVar5 + 2;
                    *piVar3 = *piVar3 + -1;
                    if (*piVar3 == 0) {
                        (**(*0x1f920 + 0x48))(piVar5);
                    }
                    *(arg1 + 8) = *(arg1 + 8) + -1;
                    return 0;
                }
                piVar6 = *piVar4;
                piVar5 = piVar4;
            } while (piVar4 != piVar3);
        }
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar2 = 0x8000000000000002;
    }
    return uVar2;
}


/* fcn.00018d8c @ 0x18d8c */

ulong fcn.00018d8c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint64_t uVar7;
    bool bVar8;
    
    uVar7 = 0;
    uVar5 = arg2;
    if (uVar5 != 0) {
        do {
            iVar6 = uVar7;
            cVar1 = *(uVar7 + arg1);
            if (cVar1 == '\0') {
                uVar7 = arg2 & 0xffffffff;
            }
            else if (cVar1 == '\x01') {
                uVar7 = iVar6 + 1;
            }
            else if (((cVar1 == '\a') || (cVar1 == -0x7d)) || (cVar1 == -0x77)) {
                uVar2 = *(iVar6 + 1 + arg1);
                uVar3 = *(iVar6 + 2 + arg1);
                if (uVar5 - iVar6 < uVar2) {
                    return 0;
                }
                if (uVar2 < 3) {
                    return 0;
                }
                uVar4 = uVar2 + 1;
                if ((uVar4 & 3) != 0) {
                    return 0;
                }
                if (uVar4 < uVar3) {
                    return 0;
                }
                if ((uVar3 & 3) != 0) {
                    return 0;
                }
                if (cVar1 != '\a') {
                    if (arg3 == '\0') {
                        bVar8 = uVar3 == 4;
                    }
                    else {
                        bVar8 = uVar3 == uVar4;
                    }
                    if (!bVar8) {
                        return 0;
                    }
                }
                uVar7 = iVar6 + uVar2;
            }
            else {
                uVar2 = *(iVar6 + 1 + arg1);
                if ((uVar5 - iVar6 < uVar2) || (uVar2 < 2)) {
                    return 0;
                }
                uVar7 = iVar6 + uVar2;
            }
        } while (uVar7 < uVar5);
    }
    return 1;
}


/* fcn.00012724 @ 0x12724 */

ulong fcn.00012724(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint32_t *arg2_00;
    char cVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t *piVar6;
    int *piVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    uint32_t auStackX_8 [2];
    uint32_t auStackX_20 [2];
    
    piVar6 = CONCAT44(in_register_0000000c,arg1);
    if ((((piVar6 != NULL) && (*piVar6 != 0)) && (iVar1 = piVar6[2], iVar1 != 0)) &&
       ((uVar4 = *(iVar1 + 0x20), uVar4 != 0 && (uVar9 = *(iVar1 + 0x24), uVar9 != 0)))) {
        if (0xffff < uVar4) {
            return 0x8000000000000004;
        }
        uVar8 = 0;
        if (uVar9 != 0) {
            piVar7 = iVar1 + 0x28;
            do {
                if (*(piVar7 + 2) == 0) {
                    return 0x8000000000000002;
                }
                if (*piVar7 == 0) {
                    return 0x8000000000000002;
                }
                uVar4 = uVar4 - *piVar7;
                uVar8 = uVar8 + 1;
                piVar7 = piVar7 + 4;
            } while (uVar8 < uVar9);
        }
        if (uVar4 == 0) {
            if (arg3 == '\0') {
                uVar4 = *(iVar1 + 0x10);
                if (uVar4 != 0) {
                    if (0x28 < uVar4) {
                        return 0x8000000000000002;
                    }
                    if (*(iVar1 + 0x18) == 0) {
                        return 0x8000000000000002;
                    }
                    cVar2 = fcn.00018d8c(*(iVar1 + 0x18),uVar4,0);
                    if (cVar2 == '\0') {
                        return 0x8000000000000002;
                    }
                }
                arg2_00 = *(iVar1 + 8);
                if (arg2_00 != NULL) {
                    if (auStackX_8 != arg2_00) {
                        fcn.000102a0(auStackX_8,arg2_00,4);
                    }
                    if (auStackX_20 != arg2_00 + 1) {
                        fcn.000102a0(auStackX_20,arg2_00 + 1,4);
                    }
                    uVar3 = auStackX_8[0] >> 0x10;
                    uVar9 = CONCAT22(auStackX_8[0] << 8 | auStackX_8[0] >> 8,uVar3 << 8 | uVar3 >> 8);
                    uVar3 = auStackX_20[0] >> 0x10;
                    uVar4 = CONCAT22(auStackX_20[0] << 8 | auStackX_20[0] >> 8,uVar3 << 8 | uVar3 >> 8);
                    auStackX_8[0] = uVar9;
                    auStackX_20[0] = uVar4;
                    iVar5 = fcn.0001c8f0(uVar9);
                    if (3 < iVar5) {
                        return 0x8000000000000002;
                    }
                    if (uVar9 == 0xffffffff) {
                        return 0x8000000000000002;
                    }
                    if (uVar9 != *(arg2 + 0x20)) {
                        if (uVar9 == *(arg2 + 0x28)) {
                            return 0x8000000000000002;
                        }
                        if (uVar9 == *(arg2 + 0x2c)) {
                            return 0x8000000000000002;
                        }
                    }
                    if (uVar4 != 0) {
                        iVar5 = fcn.0001c8f0(uVar4);
                        if (3 < iVar5) {
                            return 0x8000000000000002;
                        }
                        if ((*(arg2 + 0x24) & uVar4) != (*(arg2 + 0x24) & *(arg2 + 0x20))) {
                            return 0x8000000000000002;
                        }
                        if (uVar4 != *(arg2 + 0x20)) {
                            if (uVar4 == *(arg2 + 0x28)) {
                                return 0x8000000000000002;
                            }
                            if (uVar4 == *(arg2 + 0x2c)) {
                                return 0x8000000000000002;
                            }
                        }
                    }
                }
                uVar4 = (*(iVar1 + 0x10) + 3U & 0xfffffffc) + 0x14;
                if (0x3c < uVar4) {
                    return 0x8000000000000004;
                }
                if (0xffff < uVar4 + *(iVar1 + 0x20)) {
                    return 0x8000000000000004;
                }
            }
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.0001cab4 @ 0x1cab4 */

int64_t fcn.0001cab4(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t *piVar3;
    int64_t *piVar4;
    bool bVar5;
    
    piVar3 = CONCAT44(in_register_0000000c,arg1);
    piVar1 = *piVar3;
    if (piVar1 != piVar3) {
        piVar4 = *piVar1;
        do {
            iVar2 = (*arg2)(piVar3,piVar1,arg3);
            if (iVar2 < 0) {
                return iVar2;
            }
            bVar5 = piVar4 != piVar3;
            piVar1 = piVar4;
            piVar4 = *piVar4;
        } while (bVar5);
    }
    return 0;
}


/* fcn.00018cc4 @ 0x18cc4 */

int64_t fcn.00018cc4(int64_t arg1)

{
    uint16_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    
    *(arg1 + 2) = *(arg1 + 2) << 8 | *(arg1 + 2) >> 8;
    *(arg1 + 4) = *(arg1 + 4) << 8 | *(arg1 + 4) >> 8;
    *(arg1 + 6) = *(arg1 + 6) << 8 | *(arg1 + 6) >> 8;
    uVar1 = *(arg1 + 0xc) >> 0x10;
    uVar3 = *(arg1 + 0xc);
    uVar2 = *(arg1 + 0x10) >> 0x10;
    *(arg1 + 0xc) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
    uVar1 = *(arg1 + 0x10);
    *(arg1 + 0x10) = CONCAT22(uVar1 << 8 | uVar1 >> 8,uVar2 << 8 | uVar2 >> 8);
    return arg1;
}


/* fcn.0001d590 @ 0x1d590 */

int64_t fcn.0001d590(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int *piVar1;
    uint64_t *puVar2;
    int64_t *piVar3;
    uint32_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint64_t uVar8;
    uint32_t *puVar9;
    uint32_t uVar10;
    int iVar11;
    uint32_t uVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    int iVar15;
    uint32_t *puVar16;
    uint32_t uVar17;
    uint64_t uVar18;
    int64_t iVar19;
    uint32_t uVar20;
    uint32_t uStackX_8;
    uint32_t uStackX_10;
    int iStackX_20;
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    uint32_t uStack_68;
    uint64_t uStack_60;
    uint64_t uStack_58;
    
    iVar15 = arg3;
    uVar14 = 0;
    uVar20 = arg2;
    uStack_58 = 0;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    iStackX_20 = 0;
    uStack_68 = 0;
    uStackX_10 = 0;
    if ((arg4 <= *arg1) || (uVar8 = arg4 & 0xffffffff, uVar20 == 1)) {
        uVar8 = uVar14;
    }
    iVar11 = uVar8;
    if (iVar15 == 0) {
        uVar7 = uVar14;
        uVar18 = uVar14;
        uVar12 = 0;
        uStackX_8 = uVar20;
        if (iVar11 == 0) goto code_r0x0001d6e5;
    }
    iStackX_20 = iVar15 + iVar11;
    uVar7 = fcn.0001aad8(arg1,iStackX_20);
    if (uVar7 == 0) {
        return 0;
    }
    uStackX_8 = uVar20 + 1;
    uVar18 = 0;
    uVar12 = 0;
    if (iVar11 != 0) {
        iVar19 = (arg3 & 0xffffffffU) + uVar7;
        uVar18 = uVar14;
        uVar12 = 0;
        if (uVar20 != 0) {
            puVar16 = arg1;
            uVar13 = uVar14;
            do {
                uVar17 = uVar8;
                uVar12 = uVar13;
                if (uVar17 < *puVar16) {
                    iVar5 = *(arg1 + 8 + uVar13 * 0x10);
                    if ((uVar17 != 0) && (iVar19 != iVar5)) {
                        fcn.000102a0(iVar19,iVar5,uVar8);
                    }
                    puVar2 = arg1 + uVar13 * 0x10;
                    uStack_60 = *puVar2;
                    uStack_58 = puVar2[1];
                    uStackX_10 = uStackX_10 + uVar17;
                    uVar18 = uVar18 + uVar17;
                    piVar3 = arg1 + 8 + uVar13 * 0x10;
                    *piVar3 = *piVar3 + uVar8;
                    piVar1 = arg1 + uVar13 * 0x10;
                    *piVar1 = *piVar1 - uVar17;
                    uStack_68 = uVar12;
                    break;
                }
                uVar10 = uVar14;
                if ((*puVar16 != 0) && (iVar19 != *(puVar16 + 2))) {
                    fcn.000102a0(iVar19,*(puVar16 + 2),*puVar16);
                    uVar10 = uStackX_10;
                }
                uVar4 = *puVar16;
                uStackX_8 = uStackX_8 - 1;
                uStackX_10 = uVar10 + uVar4;
                uVar14 = uStackX_10;
                iVar19 = iVar19 + uVar4;
                uVar18 = uVar18 + uVar4;
                uVar8 = uVar17 - uVar4;
                if (uVar17 - uVar4 == 0) {
                    uVar12 = uVar12 + 1;
                    break;
                }
                uVar12 = uVar12 + 1;
                uVar13 = uVar12;
                puVar16 = puVar16 + 4;
            } while (uVar12 < uVar20);
        }
    }
code_r0x0001d6e5:
    uVar17 = uVar18;
    iVar19 = fcn.0001cf30(uStackX_8,uStackX_8);
    if (iVar19 != 0) {
        iVar5 = *(iVar19 + 0x78);
        *(iVar5 + 0x10) = in_stack_00000028;
        *(iVar5 + 0x18) = in_stack_00000030;
        *(iVar5 + 0x20) = iStackX_20 != 0;
        if (iStackX_20 != 0) {
            iVar6 = *(iVar19 + 0x78);
            *(iVar6 + 0x38) = uVar7;
            uVar10 = uStackX_10 + iVar15;
            *(iVar6 + 0x30) = uVar10;
            *(iVar19 + 0x88) = uVar7;
            *(iVar19 + 0x98) = uVar7;
            *(iVar19 + 0xa8) = uVar10;
            *(iVar19 + 0x90) = uVar10 + uVar7;
            *(iVar19 + 0xa0) = uVar10 + uVar7;
            *(iVar19 + 0x98) = *(iVar19 + 0x98) + (arg3 & 0xffffffffU);
            *(iVar19 + 0xa8) = uStackX_10;
        }
        uVar10 = iStackX_20 != 0;
        if (uVar12 < uVar20) {
            puVar16 = uVar12 * 0x10 + arg1;
            uVar14 = uVar20 - uVar12;
            do {
                uVar20 = *puVar16;
                iVar6 = *(puVar16 + 2);
                uVar8 = uVar10;
                uVar10 = uVar10 + 1;
                puVar9 = (uVar8 + 3) * 0x10 + *(iVar19 + 0x78);
                *puVar9 = uVar20;
                *(puVar9 + 2) = iVar6;
                *(iVar19 + 0x90 + uVar8 * 0x28) = iVar6 + uVar20;
                *(iVar19 + 0xa0 + uVar8 * 0x28) = iVar6 + uVar20;
                *(iVar19 + 0x88 + uVar8 * 0x28) = iVar6;
                *(iVar19 + 0x98 + uVar8 * 0x28) = iVar6;
                *(iVar19 + 0xa8 + uVar8 * 0x28) = uVar20;
                uVar17 = uVar18 + *puVar16;
                uVar18 = uVar17;
                puVar16 = puVar16 + 4;
                uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
        }
        *(iVar5 + 0x24) = iVar15 + uVar17;
        *(iVar19 + 0x84) = uVar17;
        if (uStack_68 != 0) {
            puVar2 = arg1 + uStack_68 * 0x10;
            *puVar2 = uStack_60;
            puVar2[1] = uStack_58;
        }
        return iVar19;
    }
    if (uVar7 != 0) {
        (**(*0x1f920 + 0x48))(uVar7);
    }
    return 0;
}


/* fcn.0001ca50 @ 0x1ca50 */

ulong fcn.0001ca50(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    ulong uVar3;
    
    piVar2 = fcn.0001c9e8(arg1);
    if (piVar2 == NULL) {
        uVar3 = 0x8000000000000009;
    }
    else {
        piVar2[2] = arg2;
        piVar2[3] = arg3;
        *piVar2 = arg1;
        piVar1 = *(arg1 + 8);
        piVar2[1] = piVar1;
        *piVar1 = piVar2;
        *(arg1 + 8) = piVar2;
        *(arg1 + 0x20) = *(arg1 + 0x20) + 1;
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001d0d8 @ 0x1d0d8 */

void fcn.0001d0d8(int64_t arg1)

{
    int64_t *piVar1;
    
    piVar1 = arg1 + 8;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
        fcn.0001d064(*(arg1 + 0x78));
        (**(*0x1f920 + 0x48))(arg1);
    }
    return;
}


/* fcn.0001d064 @ 0x1d064 */

void fcn.0001d064(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    *(arg1 + 8) = *(arg1 + 8) + -1;
    uVar2 = 0;
    if (*(arg1 + 8) < 1) {
        if (*(arg1 + 0x10) == 0) {
            if (*(arg1 + 0x28) != 0) {
                do {
                    (**(*0x1f920 + 0x48))(*(arg1 + 0x38 + uVar2 * 0x10));
                    uVar1 = uVar2 + 1;
                    uVar2 = uVar1;
                } while (uVar1 < *(arg1 + 0x28));
            }
        }
        else {
            if ((*(arg1 + 0x20) & 1) != 0) {
                (**(*0x1f920 + 0x48))(*(arg1 + 0x38));
            }
            (**(arg1 + 0x10))(*(arg1 + 0x18));
        }
        (**(*0x1f920 + 0x48))(arg1);
    }
    return;
}


/* fcn.00018434 @ 0x18434 */

//WARNING: Variable defined which should be unmapped: var_bp_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_28h

int64_t fcn.00018434(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_68h,int32_t arg_70h,
                    int32_t arg_78h,int64_t arg_80h,int64_t arg_88h)

{
    ulong *puVar1;
    int64_t *piVar2;
    int iVar3;
    ulong *puVar4;
    bool bVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t arg2_00;
    ulong *puVar9;
    ulong *arg1_00;
    uint32_t uVar10;
    uint32_t uVar11;
    uint64_t arg3_00;
    ulong *puVar12;
    uint64_t arg4_00;
    uint32_t uVar13;
    uint32_t arg2_01;
    uint32_t uStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t in_stack_00000028;
    uint32_t in_stack_00000030;
    uint32_t in_stack_00000038;
    uint32_t var_50h;
    uint32_t uStack_68;
    int32_t var_bp_28h;
    int32_t var_24h;
    uint32_t var_bp_20h;
    int64_t var_bp_18h;
    
    puVar9 = NULL;
    if (arg2 == 0) {
        puVar1 = arg1 + 0x38;
        puVar12 = *puVar1;
        for (puVar4 = puVar12; puVar4 != puVar1; puVar4 = *puVar4) {
            if ((*(puVar4 + 5) != '\0') &&
               (arg1_00 = puVar4 + -1, (*(puVar4 + 0x1c) & *(arg4 + 0x10)) == (*(puVar4 + 3) & *(puVar4 + 0x1c))))
            goto code_r0x0001849e;
        }
        arg1_00 = puVar9;
code_r0x0001849e:
        puVar4 = puVar12;
        if ((arg1_00 == NULL) || (*(arg1_00 + 4) == 0)) {
            for (; puVar4 != puVar1; puVar4 = *puVar4) {
                if ((*(puVar4 + 5) != '\0') && (arg1_00 = puVar4 + -1, *(puVar4 + 3) == *(arg4 + 0xc)))
                goto code_r0x000184ce;
            }
            arg1_00 = puVar9;
code_r0x000184ce:
            if ((arg1_00 == NULL) || (*(arg1_00 + 4) == 0)) {
                for (; arg1_00 = puVar9, puVar12 != puVar1; puVar12 = *puVar12) {
                    if ((*(puVar12 + 5) != '\0') && ((puVar9 == NULL || (*(puVar9 + 4) == 0)))) {
                        puVar9 = puVar12 + -1;
                    }
                }
            }
        }
    }
    else {
        arg1_00 = *(arg2 + 0x100);
    }
    if (arg1_00 == NULL) {
        return -0x7fffffffffffffef;
    }
    if ((*(arg4 + 0xc) == 0) && (arg2 == 0)) {
        *(arg4 + 0xc) = *(arg1_00 + 4);
    }
    uVar13 = (in_stack_00000030 + 3 & 0xfffffffc) + 0x14;
    if ((arg2 == 0) || (*(arg2 + 0x14d) == '\0')) {
        *arg4 = *arg4 & 0xf0;
        bVar5 = false;
        *arg4 = *arg4 | uVar13 >> 2 & 0xf;
        *(arg4 + 4) = *0x1f968;
        *0x1f968 = *0x1f968 + 1;
        *arg4 = *arg4 & 0xf;
        *arg4 = *arg4 | 0x40;
    }
    else {
        bVar5 = true;
    }
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    iVar6 = fcn.000138a8(arg1,&iStackX_20,&iStackX_18,&stack0x00000028);
    if (iVar6 < 0) {
        return iVar6;
    }
    uVar8 = *(arg4 + 0x10);
    arg2_00 = uVar8;
    uStack_68 = 0xffffffff;
    if (((uVar8 != *(arg1_00 + 4)) && ((uVar8 == *(arg1_00 + 5) || (uVar8 == *(arg1_00 + 0x2c))))) ||
       (uVar8 == 0xffffffff)) goto code_r0x0001866c;
    if ((uVar8 & 0xf0000000) == 0xe0000000) {
        uStack_68 = uVar8;
        goto code_r0x0001866c;
    }
    uStack_68 = in_stack_00000038;
    if (in_stack_00000038 != 0) goto code_r0x0001866c;
    arg4_00 = *(arg1_00 + 0x24);
    arg3_00 = *(arg4 + 0xc);
    if (arg2 == 0) {
code_r0x00018630:
        iVar6 = fcn.00017f9c(*(arg1 + 0x50),arg2_00,arg3_00,arg4_00);
        if (iVar6 == 0) {
            return -0x7ffffffffffffff2;
        }
    }
    else {
        iVar6 = fcn.00017f9c(*(arg2 + 0x118),arg2_00,arg3_00,arg4_00);
        if (iVar6 == 0) {
            arg4_00 = *(arg1_00 + 0x24);
            arg3_00 = *(arg4 + 0xc);
            arg2_00 = *(arg4 + 0x10);
            goto code_r0x00018630;
        }
    }
    piVar2 = iVar6 + 0x10;
    *piVar2 = *piVar2 + -1;
    uStack_68 = *(iVar6 + 0x20);
    if (*piVar2 == 0) {
        (**(*0x1f920 + 0x48))(iVar6);
    }
code_r0x0001866c:
    iVar6 = iStackX_18;
    uVar10 = *(arg1 + 0x888) + 0x14;
    iVar3 = *(iStackX_18 + 0x84);
    uVar8 = iStackX_18;
    if (uVar10 < iVar3 + uVar13) {
        if (bVar5) {
            return -0x7ffffffffffffffc;
        }
        uStackX_10 = 0;
        uVar11 = uVar10 - uVar13 & 0xfffffff8;
        uVar10 = (iVar3 + -1 + uVar11) / uVar11 - 1;
        arg2_01 = uVar10 * uVar11;
        uVar13 = iVar3 - arg2_01;
        if (uVar10 != 0) {
            do {
                iVar7 = fcn.0001d2cc(uVar8,arg2_01,uVar13);
                if (iVar7 == 0) {
                    iVar7 = -0x7ffffffffffffff7;
                    goto code_r0x000187e8;
                }
                *(arg4 + 6) = arg2_01 >> 3 & 0x1fff | -(uStackX_10 != 0) & 0x2000;
                fcn.000182d4(iVar7,arg4,in_stack_00000028,in_stack_00000030);
                iVar7 = fcn.000153d0(arg1_00,arg2,iVar7,uStack_68);
                if (iVar7 < 0) goto code_r0x000187e8;
                uStackX_10 = uStackX_10 + 1;
                arg2_01 = arg2_01 - uVar11;
                uVar13 = uVar11;
            } while (uStackX_10 < uVar10);
        }
        fcn.0001d9f8(iVar6,*(iVar6 + 0x84) - uVar11,0);
        *(arg4 + 6) = 0x2000;
    }
    fcn.000182d4(uVar8,arg4,in_stack_00000028,in_stack_00000030);
    iVar7 = fcn.000153d0(arg1_00,arg2,iVar6,uStack_68);
    if (iVar7 < 0) {
code_r0x000187e8:
        fcn.00014b48(arg1_00,iVar7,0x18824,iVar6);
    }
    else {
        iVar7 = 0;
    }
    return iVar7;
}


/* fcn.00014118 @ 0x14118 */

ulong fcn.00014118(int64_t arg1,int64_t *noname_1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint8_t *arg2_00;
    int64_t iVar3;
    ulong *puVar4;
    int64_t *piVar5;
    int64_t *arg1_00;
    uint8_t *arg1_01;
    ulong uVar6;
    int64_t *arg1_02;
    uint64_t uVar7;
    
    piVar1 = arg1 + 200;
    do {
        if ((*piVar1 == piVar1) || (*(arg1 + 0x98) == 0)) {
            return 0;
        }
        piVar2 = *piVar1;
        arg1_02 = piVar2 + -2;
        if ((piVar2[-1] < 2) && (*(piVar2[0xd] + 8) < 2)) {
            piVar5 = fcn.00014004(arg1,arg1_02);
            if (piVar5 == NULL) {
                return 0x8000000000000009;
            }
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            arg1_00 = arg1_02;
        }
        else {
            uVar7 = ~-(*(arg1 + 0x14d) != '\0') & 0x3c;
            arg1_00 = fcn.0001d1d8(arg1_02,noname_1,uVar7);
            if (arg1_00 == NULL) {
                return 0x8000000000000009;
            }
            if (*(arg1 + 0x14d) == '\0') {
                arg1_01 = fcn.0001d8b8(arg1_00,0x3c,CONCAT71(uVar7 >> 8,1));
                arg1_00[4] = arg1_01;
                arg2_00 = piVar2[2];
                uVar7 = (*arg2_00 & 0xf) << 2;
                if (((*arg2_00 & 0xf) != 0) && (arg1_01 != arg2_00)) {
                    fcn.000102a0(arg1_01,arg2_00,uVar7);
                }
                fcn.0001d9f8(arg1_00,0x3c,CONCAT71(uVar7 >> 8,1));
            }
            piVar5 = fcn.00014004(arg1,arg1_00);
            if (piVar5 == NULL) {
                fcn.0001d0d8(arg1_00);
                return 0x8000000000000009;
            }
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            fcn.0001d0d8(arg1_02);
        }
        if (*(arg1 + 0xf8) != 2) {
            uVar6 = (**(*0x1f920 + 0x18))(*(arg1 + 0xe8));
            *(arg1 + 0xf0) = uVar6;
            *(arg1 + 0xf8) = 2;
        }
        piVar2 = arg1 + 0xd8;
        iVar3 = *piVar2;
        *piVar5 = iVar3;
        piVar5[1] = piVar2;
        *(iVar3 + 8) = piVar5;
        iVar3 = *0x1f920;
        *piVar2 = piVar5;
        *(arg1 + 0xf8) = 1;
        (**(iVar3 + 0x20))(*(arg1 + 0xf0));
        noname_1 = *(arg1 + 0x78);
        *(*noname_1 + 8) = noname_1[1];
        *noname_1[1] = *noname_1;
        piVar2 = arg1 + 0x88;
        *(arg1 + 0x98) = *(arg1 + 0x98) + -1;
        iVar3 = *piVar2;
        *noname_1 = iVar3;
        noname_1[1] = piVar2;
        *(iVar3 + 8) = noname_1;
        *piVar2 = noname_1;
        puVar4 = noname_1[2];
        puVar4[1] = arg1_00[0xd];
        puVar4[2] = piVar5 + 4;
        (**(*0x1f920 + 0x68))(*puVar4);
    } while( true );
}


/* fcn.000133cc @ 0x133cc */

void fcn.000133cc(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar3 = *(arg1 + 0x30);
    piVar1 = *piVar3;
    while (piVar2 = piVar1, piVar3 != arg1 + 0x30) {
        *(*piVar3 + 8) = piVar3[1];
        *piVar3[1] = *piVar3;
        fcn.0001d0d8(piVar3 + -2);
        piVar1 = *piVar2;
        piVar3 = piVar2;
    }
    //WARNING: Could not recover jumptable at 0x0001342c. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1f920 + 0x48))(arg1);
    return;
}


/* fcn.0001d9f8 @ 0x1d9f8 */

int fcn.0001d9f8(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t *piVar2;
    uint32_t uVar3;
    char cVar4;
    uint64_t uVar5;
    int iVar6;
    
    cVar4 = arg3;
    if ((arg2 != 0) && (uVar3 = *(arg1 + 0x84), uVar3 != 0)) {
        if (uVar3 < arg2) {
            arg2 = uVar3;
        }
        iVar6 = 0;
        *(arg1 + 0x84) = uVar3 - arg2;
        if (cVar4 == '\0') {
            uVar5 = *(arg1 + 0x80) - 1;
        }
        else {
            uVar5 = 0;
            iVar6 = 0;
        }
        do {
            uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
            if (uVar3 != 0) {
                if (arg2 <= uVar3) {
                    piVar1 = arg1 + 0xa8 + uVar5 * 0x28;
                    *piVar1 = *piVar1 - arg2;
                    if (cVar4 == '\0') {
                        piVar2 = arg1 + 0xa0 + uVar5 * 0x28;
                        *piVar2 = *piVar2 - arg2;
                    }
                    else {
                        piVar2 = arg1 + 0x98 + uVar5 * 0x28;
                        *piVar2 = *piVar2 + arg2;
                    }
                    return iVar6 + arg2;
                }
                piVar1 = arg1 + 0xa8 + uVar5 * 0x28;
                *piVar1 = *piVar1 - uVar3;
                arg2 = arg2 - uVar3;
                iVar6 = iVar6 + uVar3;
                if (cVar4 == '\0') {
                    piVar2 = arg1 + 0xa0 + uVar5 * 0x28;
                    *piVar2 = *piVar2 - uVar3;
                }
                else {
                    piVar2 = arg1 + 0x98 + uVar5 * 0x28;
                    *piVar2 = *piVar2 + uVar3;
                }
            }
            uVar5 = uVar5 + ((-(cVar4 != '\0') & 2) - 1);
        } while( true );
    }
    return 0;
}


/* fcn.000134a4 @ 0x134a4 */

void fcn.000134a4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (*(arg1 + 0x48) < arg2) {
        iVar1 = arg2 - *(arg1 + 0x48);
        fcn.0001d9f8(arg1,iVar1,CONCAT71(arg3 >> 8,1));
        *(arg1 + 0x58) = *(arg1 + 0x58) - iVar1;
        *(arg1 + 0x48) = arg2;
    }
    if (arg3 < *(arg1 + 0x50)) {
        iVar1 = arg3 - *(arg1 + 0x50);
        fcn.0001d9f8(arg1,iVar1,0);
        *(arg1 + 0x58) = *(arg1 + 0x58) - iVar1;
        *(arg1 + 0x50) = arg3;
    }
    return;
}


/* fcn.0001d844 @ 0x1d844 */

ulong fcn.0001d844(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uint in_register_0000000c;
    int64_t iVar1;
    uint64_t uVar2;
    uint in_R8;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    
    iVar1 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar5 = 0;
    if (*(iVar1 + 0x80) != 0) {
        do {
            if (*(iVar1 + 0xa8 + uVar5 * 0x28) != 0) {
                if (*CONCAT44(in_R8,arg3) <= uVar3) {
                    return 0x8000000000000005;
                }
                uVar2 = uVar3;
                uVar3 = uVar3 + 1;
                *(arg2 + 8 + uVar2 * 0x10) = *(iVar1 + 0x98 + uVar5 * 0x28);
                *(arg2 + uVar2 * 0x10) = *(iVar1 + 0xa8 + uVar5 * 0x28);
            }
            uVar4 = uVar5 + 1;
            uVar5 = uVar4;
        } while (uVar4 < *(iVar1 + 0x80));
    }
    *CONCAT44(in_R8,arg3) = uVar3;
    return 0;
}


/* fcn.000182d4 @ 0x182d4 */

ulong fcn.000182d4(uint32_t arg1,int64_t arg2,int64_t arg3,uint32_t arg4)

{
    uint16_t uVar1;
    uint8_t *arg1_00;
    ulong uVar2;
    uint in_register_0000000c;
    uint16_t uVar3;
    uint32_t arg2_00;
    int64_t iVar4;
    bool bVar5;
    int iStackX_10;
    
    bVar5 = (*(arg2 + 6) & 0x1fff) == 0;
    iVar4 = CONCAT71(arg3 >> 8,bVar5);
    fcn.00018e5c(arg3,arg4,iVar4,0);
    iVar4 = CONCAT71(iVar4 >> 8,1);
    arg2_00 = iStackX_10 + 0x14;
    arg1_00 = fcn.0001d8b8(arg1,arg2_00,iVar4);
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000004;
    }
    else {
        fcn.00018e5c(arg3,arg4,CONCAT71(iVar4 >> 8,bVar5),arg1_00 + 0x14);
        *arg1_00 = arg2_00 >> 2 & 0xf | 0x40;
        arg1_00[1] = *(arg2 + 1);
        uVar1 = *(CONCAT44(in_register_0000000c,arg1) + 0x84);
        *(arg1_00 + 2) = uVar1 << 8 | uVar1 >> 8;
        *(arg1_00 + 4) = *(arg2 + 4) << 8 | *(arg2 + 4) >> 8;
        *(arg1_00 + 6) = *(arg2 + 6) << 8 | *(arg2 + 6) >> 8;
        arg1_00[10] = 0;
        arg1_00[0xb] = 0;
        arg1_00[8] = *(arg2 + 8);
        arg1_00[9] = *(arg2 + 9);
        uVar1 = *(arg2 + 0xc) >> 0x10;
        uVar3 = *(arg2 + 0xc);
        *(arg1_00 + 0xc) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
        uVar1 = *(arg2 + 0x10) >> 0x10;
        uVar3 = *(arg2 + 0x10);
        *(arg1_00 + 0x10) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
        uVar1 = fcn.0001dc14(arg1_00,arg2_00);
        *(arg1_00 + 10) = ~uVar1;
        uVar2 = 0;
        *(CONCAT44(in_register_0000000c,arg1) + 0x20) = arg1_00;
    }
    return uVar2;
}


/* fcn.0001dc14 @ 0x1dc14 */

uint32_t fcn.0001dc14(int64_t arg1,uint32_t arg2)

{
    uint16_t uVar1;
    uint64_t uVar2;
    uint32_t uVar3;
    
    uVar3 = 0;
    if ((arg2 & 1) != 0) {
        uVar3 = *((arg2 - 1) + arg1);
    }
    if (1 < arg2) {
        uVar2 = (arg2 - 2 >> 1) + 1;
        do {
            uVar1 = *arg1;
            arg1 = arg1 + 2;
            uVar3 = uVar3 + uVar1;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    for (; uVar3 >> 0x10 != 0; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
    }
    return uVar3 & 0xffff;
}


/* fcn.00018bc8 @ 0x18bc8 */

bool fcn.00018bc8(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    ulong *puVar2;
    uint8_t uVar3;
    uint in_register_0000000c;
    int64_t iVar4;
    ulong *puVar5;
    bool bVar6;
    
    iVar4 = CONCAT44(in_register_0000000c,arg1);
    puVar2 = iVar4 + 0x38;
    bVar6 = *(iVar4 + 0x28d) != '\0';
    puVar5 = *puVar2;
    for (puVar1 = puVar5; puVar1 != puVar2; puVar1 = *puVar1) {
        if ((*(puVar1 + 5) != '\0') &&
           ((arg3 == *(puVar1 + 3) || ((arg3 != *(puVar1 + 4) && (arg3 != *(puVar1 + 0x24))))))) {
            if (arg2 == *(puVar1 + 3)) {
                uVar3 = 2;
            }
            else if (arg2 == *(puVar1 + 4)) {
                uVar3 = 5;
            }
            else {
                uVar3 = 0;
                if (arg2 == *(puVar1 + 0x24)) {
                    uVar3 = 6;
                }
            }
            if (bVar6 < uVar3) {
                return uVar3;
            }
        }
    }
    if (arg2 == 0xffffffff) {
        for (; puVar5 != puVar2; puVar5 = *puVar5) {
            puVar1 = puVar5 + -1;
            if ((*(puVar5 + 5) != '\0') && ((*(puVar5 + 0x1c) & arg3) == (*(puVar5 + 3) & *(puVar5 + 0x1c))))
            goto code_r0x00018c7e;
        }
        puVar1 = NULL;
code_r0x00018c7e:
        if ((puVar1 != NULL) && ((arg3 == *(puVar1 + 4) || ((arg3 != *(puVar1 + 5) && (arg3 != *(puVar1 + 0x2c))))))) {
            return 4;
        }
    }
    else if ((arg2 & 0xf0000000) == 0xe0000000) {
        for (puVar2 = *(iVar4 + 0x250); puVar2 != iVar4 + 0x250; puVar2 = *puVar2) {
            if (*(puVar2 + 3) == arg2) goto code_r0x00018cab;
        }
        puVar2 = NULL;
code_r0x00018cab:
        if (puVar2 != NULL) {
            return 3;
        }
    }
    return bVar6;
}


/* fcn.00013520 @ 0x13520 */

int64_t fcn.00013520(int64_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    uint8_t uVar2;
    uint16_t uVar3;
    int iVar4;
    int iVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    int64_t *arg1_00;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    uint32_t uVar11;
    uint64_t uVar12;
    int64_t *piVar13;
    uint64_t uVar14;
    uint64_t uVar15;
    
    iVar8 = *(arg2 + 0x20);
    uVar3 = *(iVar8 + 4);
    iVar4 = *(iVar8 + 0xc);
    uVar2 = *(iVar8 + 9);
    iVar5 = *(iVar8 + 0x10);
    piVar13 = ((uVar3 * 0x10000 + iVar4 + uVar2 + iVar5) % 0x1f) * 0x10 + arg1;
    piVar7 = *piVar13;
    if (*piVar13 == piVar13) {
code_r0x000135c1:
        arg1_00 = fcn.0001aad8(arg1,0x58);
        if (arg1_00 != NULL) {
            *arg1_00 = arg1_00;
            arg1_00[1] = arg1_00;
            piVar7 = arg1_00 + 6;
            *piVar7 = piVar7;
            arg1_00[7] = piVar7;
            *(arg1_00 + 0x14) = iVar4;
            arg1_00[4] = 0;
            arg1_00[5] = 0;
            arg1_00[8] = 0;
            arg1_00[9] = 0;
            *(arg1_00 + 2) = iVar5;
            *(arg1_00 + 3) = uVar3;
            *(arg1_00 + 0x1a) = uVar2;
            arg1_00[10] = 0x78;
            iVar9 = *piVar13;
            *arg1_00 = iVar9;
            arg1_00[1] = piVar13;
            *(iVar9 + 8) = arg1_00;
            *piVar13 = arg1_00;
            goto code_r0x0001362a;
        }
code_r0x000136f2:
        fcn.0001d0d8(arg2);
    }
    else {
        do {
            arg1_00 = piVar7;
            if ((((arg1_00[2] == iVar5) && (*(arg1_00 + 0x14) == iVar4)) && (*(arg1_00 + 3) == uVar3)) &&
               (piVar7 = arg1_00, *(arg1_00 + 0x1a) == uVar2)) break;
            piVar7 = *arg1_00;
        } while (piVar7 != piVar13);
        if (piVar7 == piVar13) goto code_r0x000135c1;
code_r0x0001362a:
        uVar15 = 0;
        piVar7 = arg1_00 + 6;
        piVar13 = *piVar7;
        if (piVar13 != piVar7) {
            do {
                if (*(arg2 + 0x48) < piVar13[7]) break;
                piVar13 = *piVar13;
            } while (piVar13 != piVar7);
        }
        if ((piVar13[1] != piVar7) && (iVar9 = piVar13[1][8], *(arg2 + 0x48) < iVar9)) {
            if (*(arg2 + 0x50) <= iVar9) goto code_r0x000136f2;
            fcn.000134a4(arg2,iVar9,*(arg2 + 0x50));
        }
        piVar1 = arg2 + 0x10;
        *piVar1 = piVar13;
        *(arg2 + 0x18) = piVar13[1];
        *piVar13[1] = piVar1;
        piVar13[1] = piVar1;
        while (piVar13 != piVar7) {
            if (*(arg2 + 0x50) < piVar13[8]) {
                iVar9 = piVar13[7];
                if (iVar9 < *(arg2 + 0x50)) {
                    if (*(arg2 + 0x48) == iVar9) {
                        *(*piVar1 + 8) = *(arg2 + 0x18);
                        **(arg2 + 0x18) = *piVar1;
                        goto code_r0x000136f2;
                    }
                    fcn.000134a4(arg2,*(arg2 + 0x48),iVar9);
                }
                break;
            }
            piVar6 = *piVar13;
            *(*piVar13 + 8) = piVar13[1];
            *piVar13[1] = *piVar13;
            arg1_00[5] = arg1_00[5] - piVar13[9];
            fcn.0001d0d8(piVar13 + -2);
            piVar13 = piVar6;
        }
        arg1_00[5] = arg1_00[5] + *(arg2 + 0x58);
        if (*(arg2 + 0x48) == 0) {
            arg1_00[8] = iVar8;
            arg1_00[9] = arg2 + 0x38;
        }
        if (((*(iVar8 + 6) & 0x2000) == 0) && (arg1_00[4] == 0)) {
            arg1_00[4] = *(arg2 + 0x50);
        }
        if ((arg1_00[4] != 0) && (arg1_00[4] <= arg1_00[5])) {
            *(*arg1_00 + 8) = arg1_00[1];
            *arg1_00[1] = *arg1_00;
            if (*(arg1_00[7] + 0x40) == arg1_00[4]) {
                uVar10 = uVar15;
                for (piVar13 = *piVar7; piVar13 != piVar7; piVar13 = *piVar13) {
                    uVar10 = uVar10 + piVar13[0xe];
                }
                iVar8 = fcn.0001aad8(uVar10,uVar10 << 4);
                if (iVar8 != 0) {
                    uVar10 = uVar15;
                    for (piVar13 = *piVar7; piVar13 != piVar7; piVar13 = *piVar13) {
                        uVar12 = uVar15;
                        uVar14 = uVar10;
                        if (piVar13[0xe] != 0) {
                            do {
                                uVar10 = uVar14;
                                if (piVar13[uVar12 * 5 + 0x13] != 0) {
                                    uVar10 = uVar14 + 1;
                                    *(iVar8 + 8 + uVar14 * 0x10) = piVar13[uVar12 * 5 + 0x11];
                                    *(iVar8 + uVar14 * 0x10) = piVar13[uVar12 * 5 + 0x13];
                                }
                                uVar11 = uVar12 + 1;
                                uVar12 = uVar11;
                                uVar14 = uVar10;
                            } while (uVar11 < *(piVar13 + 0xe));
                        }
                    }
                    iVar9 = fcn.0001d590(iVar8,uVar10,0,0);
                    (**(*0x1f920 + 0x48))(iVar8);
                    if (iVar9 != 0) {
                        *(iVar9 + 0x20) = arg1_00[8];
                        if (iVar9 + 0x38 != arg1_00[9]) {
                            fcn.000102a0(iVar9 + 0x38,arg1_00[9],0x38);
                        }
                        return iVar9;
                    }
                }
            }
            fcn.000133cc(arg1_00);
        }
    }
    return 0;
}


/* fcn.0001d268 @ 0x1d268 */

int64_t fcn.0001d268(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    uint32_t uVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    uint64_t uVar4;
    int *piVar5;
    uint32_t uVar6;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    if (arg2 < *(iVar3 + 0x84)) {
        uVar4 = 0;
        if (*(iVar3 + 0x80) != 0) {
            piVar5 = iVar3 + 0xa8;
            uVar6 = 0;
            do {
                iVar1 = *piVar5;
                if (arg2 < iVar1 + uVar6) {
                    if (arg3 != 0) {
                        *arg3 = uVar4;
                    }
                    return (arg2 - uVar6) + *(iVar3 + 0x98 + uVar4 * 0x28);
                }
                uVar2 = uVar4 + 1;
                uVar4 = uVar2;
                piVar5 = piVar5 + 10;
                uVar6 = iVar1 + uVar6;
            } while (uVar2 < *(iVar3 + 0x80));
        }
    }
    return 0;
}


/* fcn.00013c08 @ 0x13c08 */

ulong fcn.00013c08(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char cVar2;
    uint16_t uVar3;
    int16_t iVar4;
    ulong uVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t arg2_00;
    int64_t arg3_00;
    uint32_t in_stack_00000028;
    uint32_t in_stack_00000030;
    
    uVar1 = *arg3;
    uVar3 = *(arg3 + 2) << 8 | *(arg3 + 2) >> 8;
    arg2_00 = (uVar1 & 0xf) * 4;
    uVar8 = *(*arg2 + 0x84);
    if (uVar3 < uVar8) {
        fcn.0001d9f8(*arg2,uVar8 - uVar3,0);
    }
    if ((((((*arg3 & 0xf0) == 0x40) && (0x13 < arg2_00)) && (arg2_00 <= uVar3)) && (uVar3 == *(*arg2 + 0x84))) &&
       ((*(arg3 + 10) == 0 || (iVar4 = fcn.0001dc14(arg3,arg2_00), iVar4 == -1)))) {
        uVar5 = fcn.00018cc4(arg3);
        *(*arg2 + 0x20) = uVar5;
        iVar7 = *arg2;
        *(iVar7 + 0x38) = in_stack_00000030;
        iVar6 = fcn.00018bc8(arg1,*(arg3 + 0x10),*(arg3 + 0xc));
        *(iVar7 + 0x40) = iVar6;
        arg3_00 = (*(arg3 + 6) & 0x1fff) * 8;
        *(iVar7 + 0x48) = arg3_00;
        uVar8 = *(arg3 + 2) + (uVar1 & 0xf) * -4;
        *(iVar7 + 0x68) = 0;
        uVar9 = uVar8 + arg3_00;
        *(iVar7 + 0x58) = uVar8;
        *(iVar7 + 0x50) = uVar9;
        if ((iVar6 != 0) && (uVar9 < 0x10000)) {
            if (in_stack_00000028 != 0) {
                arg3_00 = CONCAT71(arg3_00 >> 8,1);
                cVar2 = fcn.00018d8c(arg4,in_stack_00000028,arg3_00);
                if (cVar2 == '\0') {
                    return 0x8000000000000002;
                }
            }
            fcn.0001d9f8(*arg2,arg2_00,CONCAT71(arg3_00 >> 8,1));
            uVar3 = *(arg3 + 6) & 0x2000;
            if ((uVar3 == 0) && (*(iVar7 + 0x48) == 0)) {
                return 0;
            }
            if (((*(arg3 + 6) & 0x4000) == 0) &&
               ((uVar3 == 0 || (uVar8 = *(iVar7 + 0x58) >> 0x3f & 7, (*(iVar7 + 0x58) + uVar8 & 7) == uVar8)))) {
                iVar7 = fcn.00013520(arg1 + 0x58,*arg2);
                *arg2 = iVar7;
                if (iVar7 != 0) {
                    return 0;
                }
            }
        }
    }
    return 0x8000000000000002;
}


/* fcn.000138a8 @ 0x138a8 */

int64_t fcn.000138a8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t iVar2;
    ulong *puVar3;
    int64_t iVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *in_stack_00000028;
    int in_stack_00000030;
    int64_t in_stack_00000038;
    uint32_t uStack_58;
    uint32_t uStack_54;
    int64_t iStack_50;
    ulong uStack_48;
    uchar auStack_40 [24];
    
    if (*0x1f900 == '\0') {
        return 0;
    }
    iVar2 = *arg3;
    uStack_48 = 0;
    iStack_50 = 0;
    uStack_58 = *(iVar2 + 0x80);
    fcn.00010280(auStack_40,0x14);
    if (*(*0x1f908 + 2) != '\0') {
        *(arg1 + 0x888) = *(arg1 + 0x88c);
        return 0;
    }
    *(arg1 + 0x888) = *(arg1 + 0x88c) + -0x36;
    iStack_50 = fcn.0001ab08(uStack_58 << 4);
    if (iStack_50 == 0) {
code_r0x00013949:
        iVar6 = -0x7ffffffffffffff7;
    }
    else {
        iVar6 = fcn.0001d844(iVar2,iStack_50,&uStack_58);
        iVar4 = iStack_50;
        uStack_54 = uStack_58;
        if (iVar6 < 0) {
            (**(*0x1f920 + 0x48))(iStack_50);
            return iVar6;
        }
        fcn.00018cc4(*arg2);
        iVar6 = (***0x1f908)(*0x1f908,*(arg1 + 0x268),4,*arg2,*arg2 + 9,arg4,in_stack_00000028,&iStack_50,
                             &uStack_58,in_stack_00000030,&uStack_48);
        fcn.00018cc4(*arg2);
        if (iVar6 < 0) {
            iVar5 = iVar4;
        }
        else if ((iVar4 != iStack_50) || (iVar5 = iStack_50, uStack_54 != uStack_58)) {
            (**(*0x1f920 + 0x48))(iVar4);
            if ((in_stack_00000030 == 1) && (in_stack_00000038 != 0)) {
                *(in_stack_00000038 + 0x10) = uStack_48;
                iVar2 = fcn.0001d590(iStack_50,uStack_58,0x3c,0);
                *(in_stack_00000038 + 0x18) = iVar2;
                if (iVar2 != 0) {
                    iVar2 = *arg3;
                    piVar1 = iVar2 + 8;
                    *piVar1 = *piVar1 + -1;
                    if (*piVar1 == 0) {
                        piVar1 = *(iVar2 + 0x78) + 8;
                        *piVar1 = *piVar1 + -1;
                        iVar4 = *(iVar2 + 0x78);
                        if (*(iVar4 + 8) < 1) {
                            if ((*(iVar4 + 0x20) & 1) != 0) {
                                (**(*0x1f920 + 0x48))(*(iVar4 + 0x38));
                            }
                            (**(*0x1f920 + 0x48))(*(iVar2 + 0x78));
                            (**(*0x1f920 + 0x48))(iVar2);
                        }
                    }
                    *arg3 = *(in_stack_00000038 + 0x18);
                    return iVar6;
                }
                *(in_stack_00000038 + 0x18) = *arg3;
            }
            else {
                puVar3 = fcn.0001ab08(0x10);
                if (puVar3 == NULL) {
                    (**(*0x1f920 + 0x68))(uStack_48);
                    return -0x7ffffffffffffff7;
                }
                *puVar3 = uStack_48;
                puVar3[1] = iVar2;
                iVar2 = fcn.0001d590(iStack_50,uStack_58,0x3c,0);
                if (iVar2 != 0) {
                    if (((in_stack_00000030 == 0) && (*arg2 != auStack_40)) &&
                       (iVar4 = fcn.000102e0(*arg2,auStack_40,0x14), iVar4 != 0)) {
                        arg4 = *arg4;
                        fcn.000182d4(iVar2,*arg2,arg4,*in_stack_00000028);
                        fcn.00018cc4(*(iVar2 + 0x20));
                        fcn.0001d9f8(iVar2,(**arg2 & 0xf) << 2,CONCAT71(arg4 >> 8,1));
                        if (iVar2 + 0x38 != puVar3[1] + 0x38) {
                            fcn.000102a0(iVar2 + 0x38,puVar3[1] + 0x38,0x38);
                        }
                    }
                    *arg3 = iVar2;
                    return iVar6;
                }
                (**(*0x1f920 + 0x68))(uStack_48);
                (**(*0x1f920 + 0x48))(puVar3);
            }
            goto code_r0x00013949;
        }
        (**(*0x1f920 + 0x48))(iVar5);
    }
    return iVar6;
}


/* fcn.000145e4 @ 0x145e4 */

ulong fcn.000145e4(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t noname_1;
    ulong *puVar4;
    int64_t iVar5;
    ulong *puVar6;
    int64_t arg2_00;
    
    puVar1 = arg1 + 0x38;
    iVar5 = 0;
    noname_1 = arg2;
    arg2_00 = arg3;
    for (puVar4 = *puVar1; puVar4 != puVar1; puVar4 = *puVar4) {
        if (*(puVar4 + 5) != '\0') {
            noname_1 = arg2;
            arg2_00 = arg3;
            iVar2 = fcn.00014338(arg1,arg2,arg3,arg4);
            iVar5 = iVar5 + iVar2;
        }
    }
    fcn.0001d0d8(arg3);
    if (iVar5 == 0) {
        uVar3 = 0x800000000000000e;
    }
    else {
        for (puVar4 = *puVar1; puVar4 != puVar1; puVar4 = *puVar4) {
            if (*(puVar4 + 5) != '\0') {
                for (puVar6 = puVar4[0x19]; puVar6 != puVar4 + 0x19; puVar6 = *puVar6) {
                    fcn.00014118(puVar6 + -0x21,noname_1,arg2_00);
                }
            }
        }
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.00017a2c @ 0x17a2c */

ulong fcn.00017a2c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    uint64_t uVar1;
    uint8_t uVar2;
    int16_t iVar3;
    uint16_t uVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int iVar7;
    uint in_R8;
    int64_t arg1_00;
    ulong uStackX_10;
    
    arg1_00 = CONCAT44(in_R8,arg3);
    uStackX_10 = arg2;
    if (7 < *(arg1_00 + 0x84)) {
        iVar3 = fcn.0001dc58(arg1_00);
        if (iVar3 == 0) {
            fcn.0001dab4(arg1_00,8,&uStackX_10);
            uVar4 = uStackX_10 >> 0x30;
            if (uStackX_10 == '\x11') {
                uVar2 = uStackX_10._1_1_;
                if (uStackX_10._1_1_ == 0) {
                    *(arg1 + 0x248) = 400;
                    uVar2 = 100;
                }
                uVar1 = uVar2 / 10;
                iVar7 = CONCAT22(uStackX_10._4_2_ << 8 | uStackX_10._4_2_ >> 8,uVar4 << 8 | uVar4 >> 8);
                uStackX_10._0_2_ = CONCAT11(uVar1,0x11);
                if (iVar7 != -0x1fffffff) {
                    for (puVar5 = *(arg1 + 0x250); puVar5 != arg1 + 0x250; puVar5 = *puVar5) {
                        if (((iVar7 == 0) || (iVar7 == *(puVar5 + 3))) && ((puVar5[4] == 0 || (uVar1 < puVar5[4])))) {
                            uVar6 = uVar1;
                            if (uVar1 == '\0') {
                                uVar6 = 1;
                            }
                            puVar5[4] = uVar6;
                        }
                    }
                }
            }
            else if ((uStackX_10 == '\x12') || (uStackX_10 == '\x16')) {
                for (puVar5 = *(arg1 + 0x250); puVar5 != arg1 + 0x250; puVar5 = *puVar5) {
                    if (*(puVar5 + 3) ==
                        CONCAT22(uStackX_10._4_2_ << 8 | uStackX_10._4_2_ >> 8,uVar4 << 8 | uVar4 >> 8))
                    goto code_r0x00017aca;
                }
                puVar5 = NULL;
code_r0x00017aca:
                if ((puVar5 != NULL) && (0 < puVar5[4])) {
                    puVar5[4] = 0;
                    *(puVar5 + 5) = 0;
                }
            }
            fcn.0001d0d8(arg1_00);
            return 0;
        }
    }
    fcn.0001d0d8(arg1_00);
    return 0x8000000000000002;
}


/* fcn.00018a9c @ 0x18a9c */

ulong fcn.00018a9c(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char cVar1;
    int16_t iVar2;
    ulong uVar3;
    uint in_R8;
    int64_t arg1_00;
    uint8_t auStackX_18 [2];
    int16_t iStackX_1a;
    char acStackX_20 [8];
    char acStack_38 [32];
    
    arg1_00 = CONCAT44(in_R8,arg3);
    if (((3 < *(arg1_00 + 0x84)) && (fcn.0001dab4(arg1_00,4,auStackX_18), auStackX_18[0] < 0x11)) &&
       ((iStackX_1a == 0 || (iVar2 = fcn.0001dc58(arg1_00), iVar2 == -1)))) {
        cVar1 = *(auStackX_18[0] * 2 + 0x1ef69);
        if (cVar1 == '\x01') {
            if (0x1b < *(arg1_00 + 0x84)) {
                fcn.0001dab4(arg1_00,0x1c,acStack_38);
                if (acStack_38[0] == '\x05') {
                    uVar3 = fcn.00018838(arg1,arg2,arg1_00,acStack_38);
                    return uVar3;
                }
                *(arg1_00 + 0x68) = 0x8000000000000016;
code_r0x00018b5e:
                uVar3 = fcn.000145e4(arg1,arg2,arg1_00,0);
                return uVar3;
            }
        }
        else if ((cVar1 == '\x02') && (7 < *(arg1_00 + 0x84))) {
            fcn.0001dab4(arg1_00,8,acStackX_20);
            if (acStackX_20[0] == '\b') {
                uVar3 = fcn.000189a0(arg1,arg2,arg1_00);
                return uVar3;
            }
            goto code_r0x00018b5e;
        }
    }
    fcn.0001d0d8(arg1_00);
    return 0x8000000000000002;
}


/* fcn.00014004 @ 0x14004 */

int64_t fcn.00014004(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int iVar3;
    
    iVar1 = fcn.0001aad8(arg1,((*(arg2 + 0x80) - 1) + 7) * 0x10);
    if (iVar1 != 0) {
        *iVar1 = iVar1;
        *(iVar1 + 8) = iVar1;
        *(iVar1 + 0x10) = arg1;
        *(iVar1 + 0x18) = arg2;
        fcn.00010280(iVar1 + 0x20,0x50);
        iVar2 = (**(*0x1f920 + 0x50))(0x200,0x10,0x13f64,iVar1,iVar1 + 0x30);
        if (-1 < iVar2) {
            if (*(arg1 + 0x14d) == '\0') {
                *(iVar1 + 0x38) = (**(arg2 + 0x20) & 0xf) << 2;
                iVar2 = fcn.00018cc4(*(arg2 + 0x20));
                iVar3 = *(iVar1 + 0x38) + -0x14;
                *(iVar1 + 0x40) = iVar2;
                *(iVar1 + 0x48) = iVar3;
                *(iVar1 + 0x50) = 0;
                if (iVar3 != 0) {
                    *(iVar1 + 0x50) = iVar2 + 0x14;
                }
            }
            *(iVar1 + 0x58) = *(arg2 + 0x84);
            *(iVar1 + 0x5c) = *(arg2 + 0x80);
            fcn.0001d844(arg2,iVar1 + 0x60,iVar1 + 0x5c);
            return iVar1;
        }
        (**(*0x1f920 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.0001d1d8 @ 0x1d1d8 */

int64_t fcn.0001d1d8(int64_t arg1,ulong noname_1,int64_t arg2)

{
    int64_t iVar1;
    int64_t arg3;
    
    iVar1 = fcn.0001cfd4(*(arg1 + 0x84) + arg2);
    if (iVar1 != 0) {
        if (iVar1 + 0x38 != arg1 + 0x38) {
            fcn.000102a0(iVar1 + 0x38,arg1 + 0x38,0x40);
        }
        *(iVar1 + 0x98) = *(iVar1 + 0x98) + (arg2 & 0xffffffffU);
        *(iVar1 + 0xa0) = *(iVar1 + 0xa0) + (arg2 & 0xffffffffU);
        arg3 = fcn.0001d8b8(iVar1,*(arg1 + 0x84),0);
        if (*(arg1 + 0x84) != 0) {
            fcn.0001dab4(arg1,*(arg1 + 0x84),arg3);
        }
    }
    return iVar1;
}


/* fcn.0001d8b8 @ 0x1d8b8 */

int64_t fcn.0001d8b8(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int *piVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t iVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    uint32_t auStackX_18 [4];
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar5 = arg2 & 0xffffffff;
    auStackX_18[0] = 0;
    iVar4 = arg2;
    if (arg3 == '\0') {
        if (*(iVar3 + 0x84) != 0) {
            fcn.0001d268(arg1,*(iVar3 + 0x84) - 1,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((*(iVar3 + 0x90 + uVar6 * 0x28) - *(iVar3 + 0xa0 + uVar6 * 0x28) < uVar5) &&
               (auStackX_18[0] < *(iVar3 + 0x80) - 1U)) {
                uVar6 = auStackX_18[0] + 1;
            }
        }
        iVar2 = *(iVar3 + 0xa0 + uVar6 * 0x28);
        if (uVar5 <= *(iVar3 + 0x90 + uVar6 * 0x28) - iVar2) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0xa0 + uVar6 * 0x28) = uVar5 + iVar2;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return iVar2;
        }
    }
    else {
        if (*(iVar3 + 0x84) != 0) {
            fcn.0001d268(arg1,0,auStackX_18);
            uVar6 = auStackX_18[0];
            if ((auStackX_18[0] != 0) && (*(iVar3 + 0x98 + uVar6 * 0x28) - *(iVar3 + 0x88 + uVar6 * 0x28) < uVar5)) {
                uVar6 = auStackX_18[0] - 1;
            }
        }
        iVar2 = *(iVar3 + 0x98 + uVar6 * 0x28);
        if (uVar5 <= iVar2 - *(iVar3 + 0x88 + uVar6 * 0x28)) {
            piVar1 = iVar3 + 0xa8 + uVar6 * 0x28;
            *piVar1 = *piVar1 + iVar4;
            *(iVar3 + 0x98 + uVar6 * 0x28) = iVar2 - uVar5;
            *(iVar3 + 0x84) = *(iVar3 + 0x84) + iVar4;
            return *(iVar3 + 0x98 + uVar6 * 0x28);
        }
    }
    return 0;
}


/* fcn.0001dab4 @ 0x1dab4 */

uint32_t fcn.0001dab4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int *piVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    
    uVar3 = *(arg1 + 0x84);
    if (uVar3 != 0) {
        uVar6 = arg2;
        if (uVar3 < arg2) {
            uVar6 = uVar3;
        }
        uVar5 = 0;
        if (*(arg1 + 0x80) != 0) {
            piVar2 = arg1 + 0xa8;
            do {
                if ((*piVar2 != 0) && (*piVar2 != 0)) break;
                uVar3 = uVar5 + 1;
                uVar5 = uVar3;
                piVar2 = piVar2 + 10;
            } while (uVar3 < *(arg1 + 0x80));
        }
        uVar3 = *(arg1 + 0xa8 + uVar5 * 0x28);
        iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
        if (uVar3 < uVar6) {
            if ((uVar3 != 0) && (arg3 != iVar1)) {
                fcn.000102a0(arg3,iVar1,uVar3);
            }
            arg3 = arg3 + uVar3;
            uVar6 = uVar6 - uVar3;
            while (uVar4 = uVar5 + 1, uVar5 = uVar4, uVar4 < *(arg1 + 0x80)) {
                uVar4 = *(arg1 + 0xa8 + uVar5 * 0x28);
                if (uVar6 <= uVar4) {
                    uVar3 = uVar3 + uVar6;
                    iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                    if ((uVar6 != 0) && (arg3 != iVar1)) {
                        fcn.000102a0(arg3,iVar1,uVar6);
                    }
                    break;
                }
                iVar1 = *(arg1 + 0x98 + uVar5 * 0x28);
                uVar6 = uVar6 - uVar4;
                uVar3 = uVar3 + uVar4;
                if ((uVar4 != 0) && (arg3 != iVar1)) {
                    fcn.000102a0(arg3,iVar1,uVar4);
                }
                arg3 = arg3 + *(arg1 + 0xa8 + uVar5 * 0x28);
            }
        }
        else {
            if ((uVar6 != 0) && (arg3 != iVar1)) {
                fcn.000102a0(arg3,iVar1,uVar6);
            }
            uVar3 = uVar6;
        }
    }
    return uVar3;
}


/* fcn.0001d104 @ 0x1d104 */

uint * fcn.0001d104(int64_t arg1)

{
    int64_t *piVar1;
    uint *puVar2;
    uint *puVar3;
    
    puVar2 = fcn.0001aad8(arg1,(*(arg1 + 0x80) - 1) * 0x28 + 0xb0);
    if (puVar2 != NULL) {
        *puVar2 = 0x6675626e;
        *(puVar2 + 2) = 1;
        puVar3 = puVar2 + 4;
        *puVar3 = puVar3;
        *(puVar2 + 6) = puVar3;
        *(puVar2 + 8) = *(arg1 + 0x20);
        *(puVar2 + 10) = *(arg1 + 0x28);
        if (puVar2 + 0xe != arg1 + 0x38) {
            fcn.000102a0(puVar2 + 0xe,arg1 + 0x38,0x40);
        }
        piVar1 = *(arg1 + 0x78) + 8;
        *piVar1 = *piVar1 + 1;
        *(puVar2 + 0x1e) = *(arg1 + 0x78);
        puVar2[0x20] = *(arg1 + 0x80);
        puVar2[0x21] = *(arg1 + 0x84);
        if ((*(arg1 + 0x80) * 5 != 0) && (puVar2 + 0x22 != arg1 + 0x88)) {
            fcn.000102a0(puVar2 + 0x22,arg1 + 0x88,*(arg1 + 0x80) * 0x28);
        }
    }
    return puVar2;
}


/* fcn.00014338 @ 0x14338 */

int64_t fcn.00014338(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int iVar3;
    int64_t iVar4;
    ulong *puVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint32_t uVar10;
    uint64_t uVar11;
    int64_t *piVar12;
    int64_t iVar13;
    char cVar14;
    uint32_t in_stack_00000028;
    int64_t in_stack_00000030;
    uint8_t auStack_48 [17];
    char cStack_37;
    
    iVar4 = *(arg3 + 0x40);
    if (iVar4 == 3 || iVar4 == 4) {
        iVar9 = iVar4;
        if (iVar4 == 0) {
            return 0;
        }
    }
    else if ((*(in_stack_00000030 + 0x20) == 0) || (iVar3 = *(arg2 + 0x10), iVar3 == *(in_stack_00000030 + 0x20))) {
        iVar9 = 2;
    }
    else if (iVar3 == *(in_stack_00000030 + 0x28)) {
        iVar9 = 5;
    }
    else if (iVar3 == *(in_stack_00000030 + 0x2c)) {
        iVar9 = 6;
    }
    else {
        if (*(in_stack_00000030 + 0xe0) == '\0') {
            return 0;
        }
        iVar9 = 1;
    }
    piVar2 = in_stack_00000030 + 0xd0;
    *(arg3 + 0x40) = iVar9;
    piVar12 = *piVar2;
    iVar13 = 0;
    iVar9 = iVar13;
    if (piVar12 != piVar2) {
        do {
            if (((*(piVar12 + 0x45) != '\0') && (arg4 != 0)) && (in_stack_00000028 != 0)) {
                fcn.000182d4(arg3,arg2,arg4,in_stack_00000028);
            }
            if (piVar12[-0x17] == 1) {
                if (piVar12[9] == -1) {
code_r0x00014597:
                    iVar8 = -0x7ffffffffffffffe;
                }
                else {
                    if (piVar12[7] == '\0') {
                        cVar14 = *(arg2 + 9);
                        if (*(arg2 + 9) == '\x01') {
                            if (*(piVar12 + 0x35) == '\0') {
                                cVar14 = '\x01';
                                if ((*(piVar12 + 0x34) != '\x01') &&
                                   (fcn.0001dab4(arg3,4,auStack_48), *(auStack_48[0] * 2 + 0x1ef69) == '\x01')) {
                                    if (*(piVar12 + 0x36) == '\0') goto code_r0x00014597;
                                    fcn.0001dab4(arg3,0x1c,auStack_48);
                                    cVar14 = cStack_37;
                                }
                                goto code_r0x000144bb;
                            }
                        }
                        else {
code_r0x000144bb:
                            if ((*(piVar12 + 0x35) == '\0') && (cVar14 != *(piVar12 + 0x34))) goto code_r0x00014597;
                        }
                        if (*(arg3 + 0x40) < 4) {
                            if (*(arg3 + 0x40) == 3) {
                                if ((*(piVar12 + 0x39) == '\0') && (*(piVar12[-1] + 0x20) == 0)) goto code_r0x00014540;
                                uVar11 = 0;
                                cVar14 = false;
                                if (piVar12[6] != 0) {
                                    uVar6 = *(arg2 + 0x10);
                                    do {
                                        uVar7 = *(arg2 + 0x10) >> 0x10;
                                        if (*(piVar12[5] + uVar11 * 4) ==
                                            CONCAT22(uVar6 << 8 | uVar6 >> 8,uVar7 << 8 | uVar7 >> 8)) break;
                                        uVar10 = uVar11 + 1;
                                        uVar11 = uVar10;
                                    } while (uVar10 < *(piVar12 + 6));
                                    cVar14 = uVar11 < *(piVar12 + 6);
                                }
                            }
                            else {
                                cVar14 = '\x01';
                            }
                        }
                        else {
                            cVar14 = *(piVar12 + 0x37);
                        }
                        if (cVar14 == '\0') goto code_r0x00014597;
                    }
code_r0x00014540:
                    iVar9 = fcn.0001d104(arg3);
                    if (iVar9 == 0) {
                        iVar8 = -0x7ffffffffffffff7;
                    }
                    else {
                        *(iVar9 + 0x60) = (piVar12[9] + 999999U) / 1000000;
                        piVar1 = iVar9 + 0x10;
                        *piVar1 = piVar12 + -8;
                        puVar5 = piVar12[-7];
                        *(iVar9 + 0x18) = puVar5;
                        *puVar5 = piVar1;
                        iVar8 = 0;
                        piVar12[-7] = piVar1;
                    }
                }
            }
            else {
                iVar8 = -0x7fffffffffffffed;
            }
            piVar12 = *piVar12;
            iVar9 = iVar13 + 1;
            if (iVar8 != 0) {
                iVar9 = iVar13;
            }
            iVar13 = iVar9;
        } while (piVar12 != piVar2);
    }
    *(arg3 + 0x40) = iVar4;
    return iVar9;
}


/* fcn.0001bf00 @ 0x1bf00 */

ulong fcn.0001bf00(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    char *pcVar4;
    char *arg1_00;
    int64_t iVar5;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar5 = fcn.0001be90(arg2,arg1);
                if (iVar5 == 0) {
code_r0x0001bfd3:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
code_r0x0001bfc8:
                        cVar1 = *arg1_00;
                        if (cVar1 != '\0') {
                            iVar5 = 0;
                            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                                iVar5 = iVar5 + 1;
                                cVar1 = arg1_00[iVar5];
                            }
                            iVar3 = fcn.0001a804(arg1_00,arg1,iVar5);
                            if (iVar3 == 0) {
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                            arg1_00 = arg1_00 + iVar5;
                            if (*arg1_00 != '\0') {
                                cVar1 = *arg1_00;
                                pcVar4 = arg1_00;
                                do {
                                    if (cVar1 != ';') break;
                                    pcVar4 = pcVar4 + 1;
                                    cVar1 = *pcVar4;
                                } while (cVar1 != '\0');
                            }
                            goto code_r0x0001bfc8;
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x0001bfd3;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.0001ac04 @ 0x1ac04 */

void fcn.0001ac04(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001adf8(noname_0,arg1 >> 1,0x140,arg2,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001adf8 @ 0x1adf8 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_bp_30h

uint64_t fcn.0001adf8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_80h,int8_t arg_88h)

{
    uint16_t uVar1;
    uint32_t uVar2;
    char cVar3;
    int iVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    char *pcVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int64_t iVar11;
    int64_t iVar12;
    char cVar13;
    uint64_t uVar14;
    char *pcVar15;
    uint32_t uVar16;
    uint64_t *puVar17;
    uint64_t *puVar18;
    int64_t *piVar19;
    uint8_t *puVar20;
    uint64_t uVar21;
    uint64_t uVar22;
    bool bVar23;
    int64_t var_10h;
    uint64_t uStackX_18;
    uint8_t *puStackX_20;
    uint64_t *in_stack_00000028;
    char cStack0000000000000030;
    int8_t var_68h;
    int64_t var_70h_2;
    char *pcStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t *puStack_b0;
    uint64_t uStack_a8;
    uint64_t uStack_a0;
    uint64_t uStack_98;
    int64_t iStack_90;
    int64_t var_80h;
    int64_t var_78h;
    int32_t var_70h;
    int32_t var_6ch;
    int64_t var_68h_2;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_bp_30h;
    int64_t var_28h;
    int64_t var_bp_20h;
    int8_t var_18h;
    
    puVar17 = NULL;
    puStack_b0 = NULL;
    if (arg2 == 0) {
        uVar22 = arg3 & 0x2000;
        if ((arg3 & 0x2000U) == 0) goto code_r0x0001ae57;
    }
    else {
        uVar22 = arg3 & 0x2000;
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            return 0;
        }
    }
    if (arg4 == 0) {
        return 0;
    }
code_r0x0001ae57:
    uVar5 = 1;
    if ((arg3 & 0x40U) == 0) {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = uVar5;
    }
    else {
        if (1000000 < arg2) {
            return 0;
        }
        uVar14 = 2;
    }
    if ((arg3 >> 8 & 1) == 0) {
        uVar21 = fcn.0001aab4(arg4);
        if (1000000 < uVar21) {
            return 0;
        }
        uStack_98 = 0xff;
    }
    else {
        uVar5 = fcn.0001a838(arg4,0xf4241);
        if (1000000 < uVar5) {
            return 0;
        }
        puVar17 = NULL;
        uStack_98 = 0xffff;
        uVar5 = 2;
    }
    var_78h = uVar5;
    if (uVar22 == 0) {
        if (arg2 == 0) {
            return 0;
        }
    }
    else {
        arg1 = arg1 & -(arg2 != 0);
    }
    _var_70h = NULL;
    uStack_d0 = 0;
    pcStack_d8 = NULL;
    if (arg1 != NULL) {
        _var_70h = arg1;
        pcStack_d8 = arg1 + (arg2 + -1) * uVar14;
    }
    if (uVar5 == 1) {
        iVar4 = 0;
    }
    else {
        iVar4 = *(arg4 + 1) << 8;
    }
    uStack_a8 = (*arg4 | iVar4) & uStack_98;
    puStackX_20 = arg4;
    while( true ) {
        uVar22 = 1;
        if ((uStack_a8 == 0) || ((arg1 != NULL && (pcStack_d8 <= arg1)))) break;
        uStack_a0 = 0;
        uVar5 = 0;
        iStack_90 = 0;
        cVar3 = '\0';
        uVar21 = arg3 & 0x2140;
        uStack_b8 = 1;
        cVar13 = '\0';
        bVar23 = false;
        _cStack0000000000000030 = _cStack0000000000000030 & 0xffffffffffffff00;
        uStack_c0 = 0;
        uStackX_18 = uVar21;
        if (uStack_a8 == 10) {
            puVar20 = puStackX_20 + var_78h;
            pcVar8 = 0x1f3ac;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uStack_a8 = (iVar4 | *puVar20) & uStack_98;
            if (uStack_a8 != 0xd) {
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0xd) {
            puVar20 = puStackX_20 + var_78h;
            if (var_78h == 1) {
                iVar4 = 0;
            }
            else {
                iVar4 = puVar20[1] << 8;
            }
            uVar10 = iVar4 | *puVar20;
code_r0x0001b212:
            uStack_a8 = uVar10 & uStack_98;
            if ((uVar10 & uStack_98) == 10) {
                pcVar8 = 0x1f3ac;
            }
            else {
                pcVar8 = 0x1f3b0;
                puVar20 = puStackX_20;
            }
        }
        else if (uStack_a8 == 0x25) {
            puVar18 = in_stack_00000028;
            puVar20 = puStackX_20;
code_r0x0001afa9:
            while( true ) {
                puStackX_20 = puVar20 + var_78h;
                if (var_78h == 1) {
                    iVar4 = 0;
                }
                else {
                    iVar4 = puStackX_20[1] << 8;
                }
                uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                if (uStack_a8 < 0x2e) break;
                if (uStack_a8 == 0x2e) {
                    uVar21 = uVar21 | 0x800;
                    goto code_r0x0001b14c;
                }
                if (uStack_a8 == 0x30) {
                    if ((uVar21 & 0x800) == 0) {
                        uVar21 = uVar21 | 0x20;
                        uStackX_18 = uVar21;
                    }
                }
                else {
                    if (uStack_a8 < 0x31) goto code_r0x0001b163;
                    if (0x39 < uStack_a8) {
                        if ((uStack_a8 - 0x4c & 0xffffffffffffffdf) == 0) {
                            uVar21 = uVar21 | 0x10;
                            goto code_r0x0001b14c;
                        }
                        goto code_r0x0001b163;
                    }
                }
                uVar5 = 0;
                uStack_c0 = 0;
                if (0x2f < uStack_a8) {
                    do {
                        if (0x39 < uStack_a8) break;
                        puStackX_20 = puStackX_20 + var_78h;
                        uVar5 = uStack_a8 + (uVar5 * 5 + -0x18) * 2;
                        if (var_78h == 1) {
                            iVar4 = 0;
                        }
                        else {
                            iVar4 = puStackX_20[1] << 8;
                        }
                        uStack_a8 = (*puStackX_20 | iVar4) & uStack_98;
                    } while (0x2f < uStack_a8);
                    uStack_c0 = uVar5;
                }
                puVar20 = puStackX_20 + -var_78h;
                uVar5 = uStack_c0;
                if ((uVar21 & 0x800) == 0) {
                    uVar21 = uVar21 | 0x200;
                    uStack_a0 = uStack_c0;
                    uStackX_18 = uVar21;
                }
                else {
                    uVar22 = uStack_c0;
                    uStack_b8 = uStack_c0;
                }
            }
            if (uStack_a8 == 0x2d) {
                uVar21 = uVar21 | 1;
code_r0x0001b14c:
                puVar20 = puStackX_20;
                uStackX_18 = uVar21;
                goto code_r0x0001afa9;
            }
            if (uStack_a8 != 0) {
                if (uStack_a8 == 0x20) {
                    uVar21 = uVar21 | 4;
                }
                else {
                    if (uStack_a8 == 0x2a) {
                        if ((uVar21 & 0x800) == 0) {
                            uVar21 = uVar21 | 0x200;
                            if (puVar17 == NULL) {
                                uStack_a0 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_a0 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uStackX_18 = uVar21;
                        }
                        else {
                            if (puVar17 == NULL) {
                                uStack_b8 = *puVar18;
                                puVar18 = puVar18 + 1;
                                in_stack_00000028 = puVar18;
                            }
                            else {
                                uStack_b8 = *puVar17;
                                puVar17 = puVar17 + 1;
                                puStack_b0 = puVar17;
                            }
                            puVar20 = puStackX_20;
                            uVar22 = uStack_b8;
                        }
                        goto code_r0x0001afa9;
                    }
                    if (uStack_a8 == 0x2b) {
                        uVar21 = uVar21 | 2;
                    }
                    else {
                        if (uStack_a8 != 0x2c) goto code_r0x0001b163;
                        uVar21 = uVar21 | 8;
                    }
                }
                goto code_r0x0001b14c;
            }
            uVar22 = 0;
            uStack_b8 = 0;
            puStackX_20 = puVar20;
code_r0x0001b163:
            puVar20 = puStackX_20;
            if (uStack_a8 < 0x68) {
                if (uStack_a8 == 0x67) {
                    if (puVar17 == NULL) {
                        uVar22 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar22 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    if (uVar22 == 0) {
                        pcVar8 = "<null guid>";
                    }
                    else {
                        fcn.0001bb60(&var_68h_2,0x26,0,0x1f340);
                        pcVar8 = &var_68h_2;
                        uVar5 = uStack_c0;
                        cVar13 = cStack0000000000000030;
                    }
                    uVar22 = uStack_b8;
                }
                else {
                    if (uStack_a8 != 10) {
                        if (uStack_a8 == 0xd) {
                            puVar20 = puStackX_20 + var_78h;
                            if (var_78h == 1) {
                                iVar4 = 0;
                            }
                            else {
                                iVar4 = puVar20[1] << 8;
                            }
                            uVar10 = iVar4 | *puVar20;
                            goto code_r0x0001b212;
                        }
                        if (uStack_a8 == 0x53) goto code_r0x0001b3fb;
                        if (uStack_a8 == 0x58) goto code_r0x0001b4f0;
                        if (uStack_a8 == 0x61) goto code_r0x0001b404;
                        if (uStack_a8 == 99) {
                            if (puVar17 == NULL) {
                                uVar1 = *puVar18;
                                in_stack_00000028 = puVar18 + 1;
                            }
                            else {
                                uVar1 = *puVar17;
                                puStack_b0 = puVar17 + 1;
                            }
                            var_80h = uVar1;
                            pcVar8 = &var_80h;
                            goto code_r0x0001af8a;
                        }
                        if (uStack_a8 != 100) goto code_r0x0001af86;
                        goto code_r0x0001b507;
                    }
                    puVar20 = puStackX_20 + var_78h;
                    pcVar8 = 0x1f3ac;
                    if (var_78h == 1) {
                        iVar4 = 0;
                    }
                    else {
                        iVar4 = puVar20[1] << 8;
                    }
                    uStack_a8 = (iVar4 | *puVar20) & uStack_98;
                    if (uStack_a8 != 0xd) {
                        puVar20 = puStackX_20;
                    }
                }
                goto code_r0x0001b734;
            }
            if (uStack_a8 != 0x70) {
                if (uStack_a8 == 0x72) {
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        uVar10 = *puVar17;
                        puStack_b0 = puVar17 + 1;
                    }
                    pcVar8 = &var_68h_2;
                    if (uVar10 < 0) {
                        if ((uVar10 & 0x7fffffffffffffff) - 1 < 0x21) {
                            pcVar8 = (uVar10 & 0x7fffffffffffffff) * 0x15;
                            iVar12 = 0x1f44b;
                            goto code_r0x0001b4b7;
                        }
                    }
                    else if (uVar10 < 6) {
                        iVar12 = uVar10 * 0x19;
                        pcVar8 = "Success";
code_r0x0001b4b7:
                        pcVar8 = pcVar8 + iVar12;
                        if (pcVar8 != &var_68h_2) goto code_r0x0001b734;
                    }
                    fcn.0001bb60(&var_68h_2,0x26,0,0x1f3a4);
                }
                else {
                    if (uStack_a8 == 0x73) {
code_r0x0001b3fb:
                        uVar21 = uVar21 | 0x400;
                        uStackX_18 = uVar21;
code_r0x0001b404:
                        if (puVar17 == NULL) {
                            pcVar8 = *puVar18;
                            in_stack_00000028 = puVar18 + 1;
                        }
                        else {
                            pcVar8 = *puVar17;
                            puStack_b0 = puVar17 + 1;
                        }
                        if (pcVar8 == NULL) {
                            uVar21 = uVar21 & 0xfffffffffffffbff;
                            pcVar8 = "<null string>";
                            uStackX_18 = uVar21;
                        }
                        uVar22 = uVar22 & -((uVar21 & 0x800) != 0);
                        goto code_r0x0001b734;
                    }
                    if (uStack_a8 != 0x74) {
                        if (uStack_a8 != 0x75) {
                            if (uStack_a8 != 0x78) goto code_r0x0001af86;
                            goto code_r0x0001b4f4;
                        }
                        goto code_r0x0001b4f9;
                    }
                    if (puVar17 == NULL) {
                        uVar10 = *puVar18;
                        in_stack_00000028 = puVar18 + 1;
                    }
                    else {
                        puStack_b0 = puVar17 + 1;
                        uVar10 = *puVar17;
                    }
                    if (uVar10 == 0) {
                        pcVar8 = "<null time>";
                        goto code_r0x0001b734;
                    }
                    fcn.0001bb60(&var_68h_2,0x26,0,0x1f388);
                    pcVar8 = &var_68h_2;
                }
                uVar5 = uStack_c0;
                goto code_r0x0001b734;
            }
            uVar21 = uVar21 & 0xffffffffffffffd9 | 0x10;
code_r0x0001b4f0:
            uVar21 = uVar21 | 0x20;
code_r0x0001b4f4:
            uVar21 = uVar21 | 0x80;
code_r0x0001b4f9:
            if (-1 < uVar21) {
                uVar21 = uVar21 & 0xfffffffffffffffd | 0x4000;
            }
code_r0x0001b507:
            if ((uVar21 & 0x10) == 0) {
                if (puVar17 != NULL) {
                    uVar5 = *puVar17;
                    goto code_r0x0001b549;
                }
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else if (puVar17 == NULL) {
                uVar5 = *puVar18;
                in_stack_00000028 = puVar18 + 1;
            }
            else {
                uVar5 = *puVar17;
code_r0x0001b549:
                puStack_b0 = puVar17 + 1;
            }
            cVar3 = (uVar21 & 4) << 3;
            if ((uVar21 & 2) != 0) {
                cVar3 = '+';
            }
            bVar23 = (uVar21 & 8) != 0;
            if (uVar21 < '\0') {
                uVar16 = 0x10;
                bVar23 = false;
                if (((uVar21 & 0x10) == 0) && (uVar2 = 0x10, uVar5 < 0)) {
code_r0x0001b5d1:
                    uVar16 = uVar2;
                    uVar5 = uVar5 & 0xffffffff;
                }
            }
            else {
                uVar16 = 10;
                if ((uVar21 & 8) != 0) {
                    uVar21 = uVar21 & 0xffffffffffffffdf;
                    uVar22 = 1;
                }
                if ((uVar5 < 0) && (uVar21 >> 0xe == 0)) {
                    cVar3 = '-';
                    uVar5 = -uVar5;
                }
                else {
                    uVar2 = 10;
                    if ((uVar21 & 0x4010) == 0x4000) goto code_r0x0001b5d1;
                }
            }
            var_68h_2._0_1_ = 0;
            piVar19 = &var_68h_2;
            uVar10 = uVar5;
            do {
                uVar6 = uVar10 / uVar16;
                piVar19 = piVar19 + 1;
                *piVar19 = str.0123456789ABCDEF[uVar10 % uVar16];
                uVar10 = uVar6;
            } while (uVar6 != 0);
            uStack_c0 = piVar19 - &var_68h_2;
            if (uVar5 == 0) {
                uStack_c0 = uStack_c0 & -(uVar22 != 0);
            }
            pcVar8 = &var_68h_2 + uStack_c0;
            iStack_90 = 3 - uStack_c0 % 3;
            if (uStack_c0 % 3 == 0) {
                iStack_90 = 0;
            }
            if ((bVar23) && (uStack_c0 != 0)) {
                uStack_c0 = uStack_c0 + (uStack_c0 - 1) / 3;
            }
            if (cVar3 != '\0') {
                uStack_c0 = uStack_c0 + 1;
                uVar22 = uVar22 + 1;
            }
            uVar21 = uVar21 | 0x1000;
            cVar13 = '\x01';
            uVar5 = uStack_c0;
            uStackX_18 = uVar21;
            if ((uVar21 & 0xa21) == 0x220) {
                uVar22 = uStack_a0;
            }
        }
        else {
code_r0x0001af86:
            pcVar8 = &uStack_a8;
code_r0x0001af8a:
            uVar21 = uVar21 | 0x400;
            uStackX_18 = uVar21;
            puVar20 = puStackX_20;
        }
code_r0x0001b734:
        puStackX_20 = puVar20;
        uVar16 = uVar21;
        iVar12 = ((uVar21 & 0x400) != 0) + 1;
        _cStack0000000000000030 = (-((uVar21 & 0x400) != 0) & 0xff00) + 0xff;
        if ((uVar21 >> 0xc & 1) == 0) {
            uVar5 = 0;
            pcVar15 = pcVar8 + 1;
            while ((((pcVar15[-1] != '\0' || (((uVar21 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                    ((uVar5 < uVar22 || ((uVar21 >> 0xb & 1) == 0)))) &&
                   ((_cStack0000000000000030 & (*pcVar15 << 8 | pcVar15[-1])) != 0))) {
                uVar5 = uVar5 + 1;
                pcVar15 = pcVar15 + iVar12;
            }
            uStack_c0 = uVar5;
        }
        else {
            iVar12 = -iVar12;
        }
        if (uVar22 < uVar5) {
            uVar22 = uVar5;
        }
        uVar10 = uVar16 & 0x201;
        var_40h = uVar10;
        pcVar15 = pcStack_d8;
        if (uVar10 == 0x200) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar14;
            if (((uVar21 >> 0xd & 1) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001ac34(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        uVar6 = uVar14;
        if (cVar13 == '\0') {
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001ac34(arg1,pcVar15,uVar22 - uVar5,(uVar16 & 0x2000) + 0x20);
            }
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar6, (uVar21 & 0x2000) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar6 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar6;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
        }
        else {
            if (((cVar3 != '\0') && (uStack_d0 = uStack_d0 + uVar14, (uVar21 >> 0xd & 1) == 0)) && (arg1 != NULL)) {
                iVar9 = 0;
                do {
                    if (pcStack_d8 <= arg1) break;
                    *arg1 = cVar3;
                    if (uVar14 != 1) {
                        *(arg1 + 1) = '\0';
                    }
                    arg1 = arg1 + uVar14;
                    iVar9 = iVar9 + 1;
                } while (iVar9 < 1);
            }
            uStack_d0 = uStack_d0 + (uVar22 - uVar5) * uVar14;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001ac34(arg1,pcStack_d8,uVar22 - uVar5,(uVar16 & 0x2000) + 0x30);
            }
        }
        arg3 = uVar21;
        if ((cVar3 != '\0') < uStack_c0) {
            uVar5 = cVar3 != '\0';
            iVar9 = iStack_90;
            do {
                if ((*pcVar8 == '\0') && ((iVar12 < 2 || (*(pcVar8 + 1) == '\0')))) break;
                uStack_d0 = uStack_d0 + uVar6;
                uVar10 = *pcVar8 & _cStack0000000000000030;
                if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                    iVar11 = 0;
                    do {
                        if (pcStack_d8 <= arg1) break;
                        *arg1 = uVar10;
                        if (uVar6 != 1) {
                            *(arg1 + 1) = uVar10 >> 8;
                        }
                        arg1 = arg1 + uVar6;
                        iVar11 = iVar11 + 1;
                    } while (iVar11 < 1);
                }
                pcVar8 = pcVar8 + iVar12;
                uVar10 = uVar5 + 1;
                if ((bVar23) && (iVar9 = iVar9 + 1, iVar9 == 3)) {
                    iVar11 = 0;
                    uVar10 = uVar5 + 2;
                    if (uStack_c0 <= uVar10) break;
                    uStack_d0 = uStack_d0 + uVar6;
                    iVar9 = iVar11;
                    if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                        iVar7 = 0;
                        do {
                            iVar9 = iVar11;
                            if (pcStack_d8 <= arg1) break;
                            *arg1 = ',';
                            if (uVar6 != 1) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + uVar6;
                            iVar7 = iVar7 + 1;
                            iVar9 = 0;
                        } while (iVar7 < 1);
                    }
                }
                uVar5 = uVar10;
            } while (uVar10 < uStack_c0);
            arg3 = uStackX_18;
            uVar10 = var_40h;
        }
        if (uVar10 == 0x201) {
            uStack_d0 = uStack_d0 + (uStack_a0 - uVar22) * uVar6;
            if (((uVar21 & 0x2000) == 0) && (arg1 != NULL)) {
                arg1 = fcn.0001ac34(arg1,pcStack_d8,uStack_a0 - uVar22,0x20);
            }
        }
        puStackX_20 = puStackX_20 + var_78h;
        if (var_78h == 1) {
            iVar4 = 0;
        }
        else {
            iVar4 = puStackX_20[1] << 8;
        }
        uStack_a8 = (iVar4 | *puStackX_20) & uStack_98;
        puVar17 = puStack_b0;
    }
    iVar12 = 0;
    if ((arg3 >> 0xd & 1) != 0) {
        return uStack_d0 / uVar14;
    }
    pcVar8 = arg1;
    do {
        if (pcStack_d8 + uVar14 <= pcVar8) break;
        *pcVar8 = '\0';
        if (uVar14 != 1) {
            pcVar8[1] = '\0';
        }
        pcVar8 = pcVar8 + uVar14;
        iVar12 = iVar12 + 1;
    } while (iVar12 < 1);
    return (arg1 - _var_70h) / uVar14;
}


/* fcn.0001c004 @ 0x1c004 */

ulong fcn.0001c004(int64_t arg1,int64_t arg2,uint32_t arg3,int64_t arg4)

{
    int16_t iVar1;
    int16_t *piVar2;
    char cVar3;
    ulong uVar4;
    ulong *puVar5;
    int64_t iVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint in_R8;
    int16_t *arg2_00;
    char *pcVar10;
    uint32_t *puVar11;
    
    arg2_00 = CONCAT44(in_R8,arg3);
    iVar8 = 0;
    if (arg2_00 == NULL) {
code_r0x0001c1e8:
        uVar4 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg2_00 == 0) goto code_r0x0001c1e8;
            if (arg4 == '\0') {
                iVar9 = fcn.0001be90(arg2,arg1);
                if (iVar9 == 0) {
code_r0x0001c084:
                    iVar9 = iVar8;
                    puVar5 = *0x1f910;
                    if (*0x1f910 != NULL) {
                        for (; pcVar10 = *puVar5, pcVar10 != NULL; puVar5 = puVar5 + 2) {
code_r0x0001c0f6:
                            cVar3 = *pcVar10;
                            if (cVar3 != '\0') {
                                iVar7 = iVar8;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    iVar7 = iVar7 + 1;
                                    cVar3 = pcVar10[iVar7];
                                }
                                arg2 = arg1;
                                iVar6 = fcn.0001a804(arg1,pcVar10,iVar7);
                                if (iVar6 == 0) {
                                    return 0x8000000000000014;
                                }
                                pcVar10 = pcVar10 + iVar7;
                                cVar3 = *pcVar10;
                                if (cVar3 == '\0') goto code_r0x0001c0fd;
                                do {
                                    if (cVar3 != ';') break;
                                    pcVar10 = pcVar10 + 1;
                                    cVar3 = *pcVar10;
                                } while (cVar3 != '\0');
                                goto code_r0x0001c0f6;
                            }
code_r0x0001c0fd:
                            iVar9 = iVar9 + 1;
                        }
                    }
                    puVar5 = fcn.0001aad8();
                    if (puVar5 != NULL) {
                        if (((*0x1f910 != NULL) && (iVar9 << 4 != 0)) && (puVar5 != *0x1f910)) {
                            arg2 = puVar5;
                            fcn.000102a0(puVar5,*0x1f910,iVar9 << 4);
                        }
                        cVar3 = *arg1;
                        iVar7 = iVar8;
                        while (cVar3 != '\0') {
                            iVar7 = iVar7 + 1;
                            cVar3 = *(iVar7 + arg1);
                        }
                        iVar7 = fcn.0001ab34(arg2,iVar7 + 1,arg1);
                        puVar5[iVar9 * 2] = iVar7;
                        if (iVar7 != 0) {
                            iVar1 = *arg2_00;
                            piVar2 = arg2_00;
                            while (iVar1 != 0) {
                                piVar2 = piVar2 + 1;
                                iVar8 = iVar8 + 1;
                                iVar1 = *piVar2;
                            }
                            iVar8 = fcn.0001ab34(arg2,iVar8 * 2 + 2,arg2_00);
                            puVar5[iVar9 * 2 + 1] = iVar8;
                            if (iVar8 != 0) {
                                puVar5[iVar9 * 2 + 2] = 0;
                                puVar5[iVar9 * 2 + 3] = 0;
                                if (*0x1f910 != NULL) {
                                    (**(*0x1f920 + 0x48))();
                                }
                                *0x1f910 = puVar5;
                                return 0;
                            }
                            (**(*0x1f920 + 0x48))(puVar5[iVar9 * 2]);
                        }
                        (**(*0x1f920 + 0x48))(puVar5);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar11 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar11 & 0xffffff)) goto code_r0x0001c084;
                    puVar11 = puVar11 + 3;
                } while (*puVar11 != '\0');
            }
        }
        uVar4 = 0x8000000000000003;
    }
    return uVar4;
}


/* fcn.000146ec @ 0x146ec */

int64_t fcn.000146ec(int64_t arg1)

{
    int64_t iVar1;
    uint64_t arg3;
    char acStack_108 [14];
    uint8_t uStack_fa;
    char cStack_e4;
    uchar auStack_a8 [168];
    
    if (arg1 == 0) {
        iVar1 = -0x7ffffffffffffffe;
    }
    else {
        arg3 = 0;
        iVar1 = (**arg1)(arg1,acStack_108,0);
        if (-1 < iVar1) {
            if ((acStack_108[0] == '\0') || (cStack_e4 == '\0')) {
                fcn.0001ac04(auStack_a8,0xa0,0x1f148,arg3);
            }
            else {
                arg3 = uStack_fa;
                fcn.0001ac04(auStack_a8,0xa0,0x1f170,arg3);
            }
            if (*0x1f910 != 0) {
                fcn.0001c208();
                *0x1f910 = 0;
            }
            iVar1 = fcn.0001c004(0x1f100,*0x1eee0,auStack_a8,CONCAT71(arg3 >> 8,1));
            if (-1 < iVar1) {
                iVar1 = fcn.0001c004(0x1f104,*0x1eef8,auStack_a8,0);
            }
        }
    }
    return iVar1;
}


/* fcn.0001490c @ 0x1490c */

void fcn.0001490c(int64_t arg1)

{
    (**(*0x1f920 + 0x70))(*(arg1 + 0x88));
    //WARNING: Could not recover jumptable at 0x00014935. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1f920 + 0x48))(arg1);
    return;
}


/* fcn.00014aa0 @ 0x14aa0 */

void fcn.00014aa0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    
    piVar2 = *(arg1 + 0x18);
    piVar3 = *piVar2;
    do {
        if (piVar2 == arg1 + 0x18) {
            return;
        }
        if (arg3 == 0) {
code_r0x00014ae4:
            *(*piVar2 + 8) = piVar2[1];
            *piVar2[1] = *piVar2;
            (*piVar2[5])(piVar2[4],piVar2[6],arg2,0,piVar2[7]);
            fcn.0001490c(piVar2 + -1);
        }
        else {
            cVar1 = (*arg3)(piVar2 + -1,arg4);
            if (cVar1 != '\0') goto code_r0x00014ae4;
        }
        piVar2 = piVar3;
        piVar3 = *piVar3;
    } while( true );
}


/* fcn.00017f44 @ 0x17f44 */

ulong * fcn.00017f44(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    ulong *puVar1;
    ulong *puVar2;
    
    puVar2 = arg1 + 0x228 + ((arg2 ^ arg3) % 0x1f) * 0x10;
    puVar1 = *puVar2;
    while( true ) {
        if (puVar1 == puVar2) {
            return NULL;
        }
        if ((*(puVar1 + 3) == arg2) && (*(puVar1 + 0x1c) == arg3)) break;
        puVar1 = *puVar1;
    }
    puVar1[2] = puVar1[2] + 1;
    return puVar1;
}


/* fcn.000153d0 @ 0x153d0 */

int64_t fcn.000153d0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *arg1_00;
    uint *arg1_01;
    int64_t *piVar1;
    int64_t *piVar2;
    uint uVar3;
    ulong *puVar4;
    uint16_t uVar5;
    uint *arg1_02;
    int64_t iVar6;
    int64_t iVar7;
    int64_t *piVar8;
    int64_t arg1_03;
    int64_t *piVar9;
    uint16_t uVar10;
    uint auStackX_18 [2];
    uint32_t auStackX_20 [2];
    ulong in_stack_00000028;
    ulong in_stack_00000030;
    ulong in_stack_00000038;
    uint auStack_48 [4];
    
    auStackX_20[0] = arg4;
    arg1_02 = fcn.0001aad8(arg1,((*(arg3 + 0x80) - 1) + 0xd) * 0x10);
    if (arg1_02 == NULL) {
        return -0x7ffffffffffffff7;
    }
    piVar2 = arg1_02 + 2;
    *arg1_02 = 0x54465049;
    arg1_00 = arg1_02 + 0x12;
    *piVar2 = piVar2;
    *(arg1_02 + 4) = piVar2;
    *(arg1_02 + 8) = in_stack_00000038;
    *(arg1_02 + 0xc) = in_stack_00000028;
    *(arg1_02 + 6) = arg1;
    *(arg1_02 + 10) = arg2;
    *(arg1_02 + 0xe) = arg3;
    *(arg1_02 + 0x10) = in_stack_00000030;
    if (arg1_00 != 0x1f980) {
        fcn.000102a0(arg1_00,0x1f980,0x20);
    }
    arg1_01 = arg1_02 + 0x1a;
    if (arg1_01 != arg1 + 0x88) {
        fcn.000102a0(arg1_01,arg1 + 0x88,0x20);
    }
    *(arg1_02 + 0x24) = 0x8000000000000006;
    iVar6 = (**(*0x1f920 + 0x50))(0x200,0x10,0x153b4,arg1_02,arg1_02 + 0x22);
    if (iVar6 < 0) {
        (**(*0x1f920 + 0x48))(arg1_02);
        return -0x7ffffffffffffff7;
    }
    *(arg1_02 + 0x26) = arg1_02 + 0x28;
    *(arg1_02 + 0x28) = arg1_00;
    *(arg1_02 + 0x2a) = arg1_01;
    *(arg1_02 + 0x2c) = 0x800;
    uVar3 = *(arg3 + 0x84);
    *(arg1_02 + 0x2e) = 0;
    arg1_02[0x2d] = uVar3;
    auStackX_18[0] = *(arg3 + 0x80);
    fcn.0001d844(arg3,arg1_02 + 0x30,auStackX_18);
    *(arg1_02 + 0xba) = auStackX_18[0];
    if (auStackX_20[0] == 0xffffffff) {
        if (arg1_00 != arg1 + 0xa8) {
            fcn.000102a0(arg1_00,arg1 + 0xa8,0x20);
        }
    }
    else {
        uVar10 = auStackX_20[0];
        uVar5 = auStackX_20[0] >> 0x10;
        if ((auStackX_20[0] & 0xf0000000) == 0xe0000000) {
            auStack_48[0] = CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar5 << 8 | uVar5 >> 8);
            iVar7 = (**(*(arg1 + 0x48) + 0x10))(*(arg1 + 0x48),0,auStack_48,arg1_00);
            if (iVar7 < 0) goto code_r0x000155ce;
        }
        else {
            iVar6 = *(arg1 + 0x50);
            if (iVar6 == 0) {
                iVar7 = -0x7fffffffffffffef;
                goto code_r0x000155ce;
            }
            auStackX_20[0] = CONCAT22(uVar10 << 8 | uVar10 >> 8,uVar5 << 8 | uVar5 >> 8);
            iVar7 = (**(iVar6 + 0x28))(iVar6,auStackX_20,0,arg1_00);
            if (iVar7 != 0) {
                if (iVar7 == -0x7ffffffffffffffa) {
                    piVar1 = arg1 + 0x60;
                    piVar9 = NULL;
                    for (piVar8 = *piVar1;
                        (piVar8 != piVar1 && (piVar9 = piVar8 + -1, *(piVar8 + 6) != auStackX_20[0])); piVar8 = *piVar8
                        ) {
                    }
                    if (piVar8 != piVar1) {
                        *piVar2 = piVar9 + 3;
                        puVar4 = piVar9[4];
                        *(arg1_02 + 4) = puVar4;
                        *puVar4 = piVar2;
                        piVar9[4] = piVar2;
                        return 0;
                    }
                    arg1_03 = fcn.0001493c(arg1,auStackX_20[0]);
                    if (arg1_03 == 0) {
                        iVar7 = -0x7ffffffffffffff7;
                    }
                    else {
                        iVar7 = (**(iVar6 + 0x28))(iVar6,arg1_03 + 0x38);
                        if ((-1 < iVar7) || (iVar7 == -0x7ffffffffffffffa)) {
                            piVar9 = arg1_03 + 0x18;
                            iVar6 = *piVar9;
                            *(arg1_02 + 4) = piVar9;
                            *piVar2 = iVar6;
                            *(iVar6 + 8) = piVar2;
                            *piVar9 = piVar2;
                            piVar2 = arg1_03 + 8;
                            iVar6 = *piVar1;
                            *piVar2 = iVar6;
                            *(arg1_03 + 0x10) = piVar1;
                            *(iVar6 + 8) = piVar2;
                            *piVar1 = piVar2;
                            return 0;
                        }
                        fcn.00014aa0(arg1_03,-0x7fffffffffffffef,0,0);
                        (**(*0x1f920 + 0x70))(*(arg1_03 + 0x30));
                        (**(*0x1f920 + 0x48))(arg1_03);
                    }
                }
                goto code_r0x000155ce;
            }
        }
    }
    *piVar2 = arg1 + 0x70;
    puVar4 = *(arg1 + 0x78);
    *(arg1_02 + 4) = puVar4;
    *puVar4 = piVar2;
    *(arg1 + 0x78) = piVar2;
    iVar7 = (**(*(arg1 + 0x48) + 0x20))(*(arg1 + 0x48),arg1_02 + 0x22);
    if (-1 < iVar7) {
        return 0;
    }
    *(*piVar2 + 8) = *(arg1_02 + 4);
    **(arg1_02 + 4) = *piVar2;
code_r0x000155ce:
    fcn.0001490c(arg1_02);
    return iVar7;
}


/* fcn.00015020 @ 0x15020 */

ulong fcn.00015020(int64_t arg1)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint16_t uVar5;
    int64_t *piVar6;
    int64_t *piVar7;
    
    piVar6 = *(arg1 + 0x18);
    piVar7 = *piVar6;
    while( true ) {
        if (piVar6 == arg1 + 0x18) {
            return 0;
        }
        *(*piVar6 + 8) = piVar6[1];
        *piVar6[1] = *piVar6;
        if (((piVar6[4] == 0) ||
            (uVar2 = *(arg1 + 0x38) >> 0x10, uVar5 = *(arg1 + 0x38),
            iVar3 = fcn.00017f44(*(piVar6[4] + 0x118),CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar2 << 8 | uVar2 >> 8),
                                 *(piVar6[2] + 0x20)), iVar3 == 0)) &&
           (uVar2 = *(arg1 + 0x38) >> 0x10, uVar5 = *(arg1 + 0x38),
           iVar3 = fcn.00017f44(*(piVar6[3] + 0x50),CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar2 << 8 | uVar2 >> 8),
                                *(piVar6[2] + 0x20)), iVar3 == 0)) goto code_r0x00015180;
        if (*(iVar3 + 0x28) == 0) break;
        uVar1 = *(*(iVar3 + 0x28) + 0x20);
        if (*(arg1 + 0x38) == uVar1) break;
        *(iVar3 + 0x20) = uVar1;
        iVar4 = fcn.000153d0(piVar6[2],piVar6[4],piVar6[6],uVar1);
        if (iVar4 < 0) break;
        piVar6 = iVar3 + 0x10;
        *piVar6 = *piVar6 + -1;
        if (*piVar6 == 0) {
            (**(*0x1f920 + 0x48))(iVar3);
        }
        piVar6 = piVar7;
        piVar7 = *piVar7;
    }
    piVar7 = iVar3 + 0x10;
    *piVar7 = *piVar7 + -1;
    if (*piVar7 == 0) {
        (**(*0x1f920 + 0x48))(iVar3);
    }
code_r0x00015180:
    (*piVar6[5])(piVar6[4],piVar6[6],0x8000000000000011,0,piVar6[7]);
    fcn.0001490c(piVar6 + -1);
    return 0x8000000000000011;
}


/* fcn.0001493c @ 0x1493c */

uint * fcn.0001493c(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int64_t iVar3;
    
    puVar1 = fcn.0001aad8(arg1,0x60);
    if (puVar1 != NULL) {
        *puVar1 = 0x41465049;
        puVar2 = puVar1 + 2;
        *puVar2 = puVar2;
        *(puVar1 + 4) = puVar2;
        puVar2 = puVar1 + 6;
        *puVar2 = puVar2;
        *(puVar1 + 8) = puVar2;
        iVar3 = *0x1f920;
        *(puVar1 + 10) = arg1;
        iVar3 = (**(iVar3 + 0x50))(0x200,0x10,0x1534c,puVar1,puVar1 + 0xc);
        if (-1 < iVar3) {
            puVar1[0xe] = arg2;
            if (puVar1 + 0xf != 0x1f980) {
                fcn.000102a0(puVar1 + 0xf,0x1f980,0x20);
            }
            return puVar1;
        }
        (**(*0x1f920 + 0x48))(puVar1);
    }
    return NULL;
}


/* fcn.000149f4 @ 0x149f4 */

uint * fcn.000149f4(int64_t arg1,ulong noname_1,ulong noname_2,int64_t arg2)

{
    uint *puVar1;
    int64_t iVar2;
    
    puVar1 = fcn.0001aad8(arg1,0x40);
    if (puVar1 != NULL) {
        *(puVar1 + 4) = 0;
        *puVar1 = 0x52465049;
        *(puVar1 + 2) = arg1;
        *(puVar1 + 8) = arg2;
        *(puVar1 + 6) = 0x13dac;
        *(puVar1 + 0xc) = 0x8000000000000006;
        iVar2 = (**(*0x1f920 + 0x50))(0x200,0x10,0x158c4,puVar1,puVar1 + 10);
        if (-1 < iVar2) {
            *(puVar1 + 0xe) = 0;
            return puVar1;
        }
        (**(*0x1f920 + 0x48))(puVar1);
    }
    return NULL;
}


/* fcn.00016558 @ 0x16558 */

//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h

int64_t fcn.00016558(uint32_t arg1)

{
    int64_t *piVar1;
    ulong *puVar2;
    int64_t iVar3;
    ulong uVar4;
    int64_t iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t *arg4;
    uint uStackX_8;
    uchar uStackX_c;
    uint *puStackX_10;
    int64_t var_67h;
    int64_t var_6fh;
    int aiStack_b8 [2];
    uchar auStack_b0 [56];
    uint uStack_78;
    uint **ppuStack_70;
    uint32_t var_59h;
    int64_t var_51h;
    int32_t var_19h;
    int64_t var_11h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if (0 < *(arg1_00 + -0x530)) {
        return 0;
    }
    arg4 = arg1_00 + 0x290;
    if (*arg4 != 0) {
        return 0;
    }
    iVar5 = *(arg1_00 + -0x2e8);
    iVar3 = fcn.0001cb10(*(arg1_00 + -0x2e0),iVar5,0x1e850,arg4);
    if (iVar3 == -0x7ffffffffffffffd) {
        if (*(arg1_00 + 0x280) != 0) goto code_r0x000165f9;
        uVar4 = fcn.0001be30(0x1e850,iVar5);
        *(arg1_00 + 0x280) = uVar4;
    }
    if (-1 < iVar3) {
        if (*(arg1_00 + 0x280) != 0) {
            (**(*0x1f920 + 0x70))();
        }
        piVar1 = arg1_00 + 0x298;
        iVar3 = (**(*0x1f920 + 0x118))(*arg4,0x1ee00,piVar1,*(arg1_00 + -0x2e8),*(arg1_00 + -0x2e0),0x10);
        if (-1 < iVar3) {
            puVar2 = *piVar1;
            (**puVar2)(puVar2,aiStack_b8);
            if (aiStack_b8[0] == 4) {
                fcn.00016300(0,arg1_00);
            }
            else {
                puStackX_10 = &uStackX_8;
                uStackX_8 = 0x3010337;
                ppuStack_70 = &puStackX_10;
                uStackX_c = 6;
                uStack_78 = 1;
                iVar5 = (*puVar2[1])(puVar2,auStack_b0);
                if (iVar5 < 0) {
                    (**(*0x1f920 + 0x120))(*arg4,0x1ee00,*(arg1_00 + -0x2e8),*(arg1_00 + -0x2e0));
                    fcn.0001cb5c(*(arg1_00 + -0x2e0),*(arg1_00 + -0x2e8),0x1e850,*arg4);
                    *piVar1 = 0;
                    *arg4 = 0;
                    return iVar5;
                }
                arg4 = arg1_00 + 0x2a8;
                iVar5 = (**(*0x1f920 + 0x50))(0x200,8,fcn.00016300,arg1_00,arg4);
                if (iVar5 < 0) {
                    fcn.00015984(arg1_00);
                    return iVar5;
                }
                iVar3 = (*puVar2[2])(puVar2,*arg4);
                if (iVar3 < 0) {
                    fcn.00015984(arg1_00);
                    (**(*0x1f920 + 0x70))(*arg4);
                    goto code_r0x000165f9;
                }
                *(arg1_00 + -0x530) = 1;
                (**(*0x1f960 + 8))(*0x1f960);
            }
            return 0;
        }
        fcn.0001cb5c(*(arg1_00 + -0x2e0),*(arg1_00 + -0x2e8),0x1e850,*arg4);
    }
code_r0x000165f9:
    *arg4 = 0;
    return iVar3;
}


/* fcn.00015f50 @ 0x15f50 */

int64_t fcn.00015f50(uint32_t arg1,uint32_t arg2,uint32_t arg3)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t arg1_00;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    ulong *puVar6;
    ulong uStackX_8;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    arg1_00 = *(iVar5 + 0x48);
    if ((*(arg1_00 + 0x20) == arg2) && (*(arg1_00 + 0x24) == arg3)) {
        *(iVar5 + 0x18) = 2;
    }
    else {
        if (*(iVar5 + 0x540) != '\0') {
            if (*(iVar5 + 0x50) != 0) {
                fcn.00017c18(*(iVar5 + 0x50));
                *(iVar5 + 0x50) = 0;
            }
            fcn.00014ef4(*(iVar5 + 0x48));
            fcn.00014f58(*(iVar5 + 0x48),0);
            *(iVar5 + 0x48) = 0;
            arg1_00 = fcn.00014c18(*(iVar5 + 0x278),*(iVar5 + 0x268),*(iVar5 + 0x260));
            if (arg1_00 == 0) {
                return -0x7ffffffffffffff7;
            }
            iVar4 = fcn.00017bb4();
            if (iVar4 == 0) {
                fcn.00014f58(arg1_00,0);
                return -0x7ffffffffffffff7;
            }
            *(iVar5 + 0x48) = arg1_00;
            piVar1 = arg1_00 + 8;
            piVar2 = iVar5 + 0x38;
            iVar3 = *piVar2;
            *(arg1_00 + 0x10) = piVar2;
            *piVar1 = iVar3;
            *(iVar3 + 8) = piVar1;
            *piVar2 = piVar1;
            *(iVar5 + 0x50) = iVar4;
            fcn.000158e0(arg1_00);
        }
        if (*(iVar5 + 0x18) == 2) {
            *(iVar5 + 0x18) = 0;
        }
        iVar4 = fcn.00014d5c(arg1_00,arg2,arg3);
        if (iVar4 < 0) {
            return iVar4;
        }
        if (*(arg1_00 + 0x50) != 0) {
            uStackX_8 = 0;
            for (puVar6 = *(arg1_00 + 0xd0); puVar6 != arg1_00 + 0xd0; puVar6 = *puVar6) {
                iVar4 = (**(*0x1f920 + 0x118))(*(arg1_00 + 0x58),0x1ee30,&uStackX_8,*0x1ee78,puVar6[-0x18],8);
                if (iVar4 < 0) {
                    return iVar4;
                }
            }
        }
        fcn.00017d14(*(iVar5 + 0x50),arg2 & arg3,arg3,0);
        *(iVar5 + 0x18) = 2;
        *(iVar5 + 0x540) = 0;
    }
    return 0;
}


/* fcn.000160fc @ 0x160fc */

ulong fcn.000160fc(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar *puVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    ulong uVar5;
    uint64_t uVar6;
    uchar *arg2_00;
    uchar *arg2_01;
    uint64_t uVar7;
    uchar auStackX_10 [8];
    uchar *puStackX_18;
    uint64_t uStackX_20;
    uint64_t uStack_48;
    
    if (((arg2 & 3U) != 0) || (arg2 == 0)) {
        return 0x8000000000000004;
    }
    puVar1 = *(arg1 + 0x270);
    bVar2 = false;
    uVar7 = arg2 >> 2;
    uVar6 = *(arg1 + 0x278) >> 2;
    puStackX_18 = arg3;
    if (uVar7 == uVar6) {
        iVar3 = 0;
    }
    else {
        iVar3 = fcn.0001aad8();
        if (iVar3 == 0) {
            return 0x8000000000000009;
        }
    }
    uStack_48 = 0;
    if (uVar7 == 0) {
code_r0x0001625a:
        if (arg2 == *(arg1 + 0x278)) {
            uVar5 = 0x8000000000000015;
            goto code_r0x000162d4;
        }
    }
    else {
        arg2_01 = puStackX_18;
        do {
            if (auStackX_10 != arg2_01) {
                fcn.000102a0(auStackX_10,arg2_01,4);
            }
            if (0xfffffffd <
                CONCAT22(auStackX_10._0_4_ << 8 | auStackX_10._0_4_ >> 8,
                         SUB42(auStackX_10._0_4_,2) << 8 | SUB42(auStackX_10._0_4_,2) >> 8) - 1U) {
                if (iVar3 != 0) {
                    (**(*0x1f920 + 0x48))(iVar3);
                }
                return 0x8000000000000002;
            }
            if (!bVar2) {
                uStackX_20 = 0;
                if (uVar6 != 0) {
                    arg2_00 = puVar1;
                    do {
                        if ((arg2_01 == arg2_00) || (iVar4 = fcn.000102e0(arg2_01,arg2_00,4), iVar4 == 0)) break;
                        uStackX_20 = uStackX_20 + 1;
                        arg2_00 = arg2_00 + 4;
                    } while (uStackX_20 < uVar6);
                }
                if (uStackX_20 == uVar6) {
                    bVar2 = true;
                }
            }
            uStack_48 = uStack_48 + 1;
            arg2_01 = arg2_01 + 4;
        } while (uStack_48 < uVar7);
        if (!bVar2) goto code_r0x0001625a;
    }
    if (iVar3 != 0) {
        if (*(arg1 + 0x270) != 0) {
            (**(*0x1f920 + 0x48))();
        }
        *(arg1 + 0x270) = iVar3;
    }
    if (*(arg1 + 0x270) != puStackX_18) {
        fcn.000102a0(*(arg1 + 0x270),puStackX_18,arg2);
    }
    *(arg1 + 0x278) = arg2;
    uVar5 = 0;
code_r0x000162d4:
    *(arg1 + 0x238) = 0;
    return uVar5;
}


/* fcn.00016300 @ 0x16300 */

void fcn.00016300(ulong noname_0,int64_t arg1)

{
    uint8_t uVar1;
    char *pcVar2;
    char cVar3;
    uint16_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t uVar8;
    uint32_t arg2;
    uint32_t arg3;
    uint32_t auStackX_10 [2];
    int aiStack_98 [34];
    ulong uStack_10;
    
    iVar5 = (***(arg1 + 0x298))(*(arg1 + 0x298),aiStack_98);
    if ((-1 < iVar5) && (aiStack_98[0] == 4)) {
        uVar4 = aiStack_98[0x14] >> 0x10;
        arg2 = CONCAT22(aiStack_98[0x14] << 8 | aiStack_98[0x14] >> 8,uVar4 << 8 | uVar4 >> 8);
        uVar4 = aiStack_98[0x1f] >> 0x10;
        arg3 = CONCAT22(aiStack_98[0x1f] << 8 | aiStack_98[0x1f] >> 8,uVar4 << 8 | uVar4 >> 8);
        uVar4 = aiStack_98[0x1e] >> 0x10;
        uVar8 = CONCAT22(aiStack_98[0x1e] << 8 | aiStack_98[0x1e] >> 8,uVar4 << 8 | uVar4 >> 8);
        cVar3 = fcn.00018d30(arg2,arg3);
        if ((cVar3 != '\0') && (iVar5 = fcn.00015f50(arg1 - 0x548,arg2,arg3), -1 < iVar5)) {
            if (uVar8 != 0) {
                fcn.00017d14(*(arg1 + -0x4f8),0,0,uVar8);
            }
            auStackX_10[0] = 0;
            iVar5 = (**(*(arg1 + 0x298) + 0x40))(*(arg1 + 0x298),uStack_10,auStackX_10,0);
            if ((iVar5 == -0x7ffffffffffffffb) && (iVar5 = fcn.0001ab08(auStackX_10[0] << 3), iVar5 != 0)) {
                iVar6 = (**(*(arg1 + 0x298) + 0x40))(*(arg1 + 0x298),uStack_10,auStackX_10,iVar5);
                if (iVar6 < 0) {
                    (**(*0x1f920 + 0x48))(iVar5);
                }
                else {
                    uVar7 = 0;
                    if (auStackX_10[0] != 0) {
                        do {
                            pcVar2 = *(iVar5 + uVar7 * 8);
                            if (*pcVar2 == '\x06') {
                                uVar1 = pcVar2[1];
                                if (((uVar1 & 3) == 0) && (uVar1 != 0)) {
                                    fcn.000160fc(arg1,uVar1,pcVar2 + 2);
                                }
                                break;
                            }
                            uVar8 = uVar7 + 1;
                            uVar7 = uVar8;
                        } while (uVar8 < auStackX_10[0]);
                    }
                    (**(*0x1f920 + 0x48))(iVar5);
                    *(arg1 + 0x2a0) = 1;
                }
            }
        }
    }
    iVar5 = *(arg1 + 0x298);
    if (iVar5 != 0) {
        (**(iVar5 + 0x28))(iVar5);
        (**(*0x1f920 + 0x120))(*(arg1 + 0x290),0x1ee00,*(arg1 + -0x2e8),*(arg1 + -0x2e0));
        *(arg1 + 0x298) = 0;
    }
    if (*(arg1 + 0x290) != 0) {
        fcn.0001cb5c(*(arg1 + -0x2e0),*(arg1 + -0x2e8),0x1e850,*(arg1 + 0x290));
        *(arg1 + 0x290) = 0;
    }
    if (*(arg1 + 0x2a8) != 0) {
        (**(*0x1f920 + 0x70))();
        *(arg1 + 0x2a8) = 0;
    }
    (**(*0x1f960 + 8))(*0x1f960);
    return;
}


/* fcn.00015e2c @ 0x15e2c */

ulong fcn.00015e2c(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    ulong uVar2;
    uint16_t uVar3;
    uint32_t uVar4;
    ulong *puVar5;
    uint64_t uVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iVar9;
    int iVar10;
    
    iVar7 = *(arg1 + 0x50);
    if ((iVar7 == 0) || (*(iVar7 + 8) == 0)) {
        uVar2 = 0x800000000000000e;
    }
    else {
        uVar6 = 0;
        iVar8 = 0x200;
        iVar9 = 0x200;
        iVar10 = 0x20;
        do {
            for (puVar5 = *(iVar8 + 0x10 + iVar7); puVar5 != iVar7 + 0x10 + iVar9; puVar5 = *puVar5) {
                uVar4 = *(puVar5 + 3) & *(puVar5 + 0x1c);
                uVar3 = uVar4;
                uVar1 = uVar4 >> 0x10;
                *(arg2 + uVar6 * 0xc) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
                uVar1 = *(puVar5 + 0x1c) >> 0x10;
                uVar3 = *(puVar5 + 0x1c);
                *(arg2 + 4 + uVar6 * 0xc) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
                uVar1 = *(puVar5 + 4) >> 0x10;
                uVar3 = *(puVar5 + 4);
                *(arg2 + 8 + uVar6 * 0xc) = CONCAT22(uVar3 << 8 | uVar3 >> 8,uVar1 << 8 | uVar1 >> 8);
                uVar6 = uVar6 + 1;
                iVar7 = *(arg1 + 0x50);
            }
            iVar9 = iVar9 + -0x10;
            iVar8 = iVar8 + -0x10;
            iVar10 = iVar10 + -1;
        } while (-1 < iVar10);
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00015a10 @ 0x15a10 */

void fcn.00015a10(uint32_t arg1,int64_t arg2)

{
    int64_t *piVar1;
    int64_t *piVar2;
    int64_t iVar3;
    int64_t arg1_00;
    int64_t iVar4;
    uint in_register_0000000c;
    int64_t iVar5;
    
    iVar5 = CONCAT44(in_register_0000000c,arg1);
    if (*(iVar5 + 0x48) != 0) {
        if (*(iVar5 + 0x50) != 0) {
            fcn.00017c18(*(iVar5 + 0x50));
            *(iVar5 + 0x50) = 0;
        }
        fcn.00014ef4(*(iVar5 + 0x48));
        fcn.00014f58(*(iVar5 + 0x48),0);
        *(iVar5 + 0x48) = 0;
    }
    fcn.00013430(iVar5 + 0x58);
    arg1_00 = fcn.00014c18(*(iVar5 + 0x278),*(iVar5 + 0x268),*(iVar5 + 0x260));
    if (arg1_00 != 0) {
        iVar4 = fcn.00017bb4();
        if (iVar4 == 0) {
            fcn.00014f58(arg1_00,0);
        }
        else {
            *(iVar5 + 0x48) = arg1_00;
            piVar1 = arg1_00 + 8;
            piVar2 = iVar5 + 0x38;
            iVar3 = *piVar2;
            *(arg1_00 + 0x10) = piVar2;
            *piVar1 = iVar3;
            *(iVar3 + 8) = piVar1;
            *piVar2 = piVar1;
            *(iVar5 + 0x50) = iVar4;
            fcn.000158e0(arg1_00);
            if (*(iVar5 + 0x18) - 1U < 2) {
                *(iVar5 + 0x18) = 0;
            }
            if (arg2 == 1) {
                fcn.00016558(arg1 + 0x548);
            }
        }
    }
    return;
}


/* fcn.0001ab34 @ 0x1ab34 */

void fcn.0001ab34(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001aad8();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        fcn.000102a0(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.0001c928 @ 0x1c928 */

uint64_t fcn.0001c928(int64_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uint64_t uVar2;
    
    uVar1 = arg1 - 1;
    uVar2 = uVar1;
    if (uVar1 < 0xfffffffe) {
        uVar2 = 0;
        do {
            if (arg2 == *(uVar2 * 4 + 0x1f740)) break;
            uVar2 = uVar2 + 1;
        } while (uVar2 < 0x21);
        if (uVar2 < 0x1f) {
            uVar1 = ~arg2 & arg1;
            uVar2 = uVar1;
            if ((uVar1 == ~arg2) || (uVar1 == 0)) goto code_r0x0001c95f;
        }
        return CONCAT71(uVar2 >> 8,1);
    }
code_r0x0001c95f:
    return uVar2 & 0xffffffffffffff00;
}


/* fcn.00015ce4 @ 0x15ce4 */

ulong fcn.00015ce4(int64_t arg1,int64_t arg2)

{
    int64_t arg3;
    uint16_t uVar1;
    uint16_t *arg1_00;
    ulong uVar2;
    uint64_t uVar3;
    int64_t *piVar4;
    uint64_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    
    iVar6 = 4;
    piVar4 = arg2 + 0xd8;
    uVar5 = 0;
    iVar7 = 5;
    do {
        if (((*(piVar4 + 1) & 2) == 0) && (-1 < *piVar4)) {
            iVar6 = iVar6 + 0xc + piVar4[8];
        }
        piVar4 = piVar4 + 0xb;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    arg1_00 = fcn.0001aad8(arg1,iVar6);
    if (arg1_00 == NULL) {
        uVar2 = 0x8000000000000009;
    }
    else {
        iVar7 = arg1_00 + iVar6;
        arg1_00[1] = 0;
        piVar4 = arg2 + 0x118;
        do {
            if (((*(piVar4 + -7) & 2) == 0) && (-1 < piVar4[-8])) {
                arg3 = *piVar4;
                iVar7 = iVar7 - arg3;
                if ((arg3 != 0) && (iVar7 != piVar4[-1])) {
                    fcn.000102a0(iVar7,piVar4[-1],arg3);
                }
                uVar3 = arg1_00[1];
                *(arg1_00 + uVar3 * 6 + 6) = uVar5;
                *(arg1_00 + uVar3 * 6 + 4) = *piVar4;
                arg1_00[uVar3 * 6 + 2] = iVar7 - arg1_00;
                arg1_00[1] = arg1_00[1] + 1;
            }
            uVar5 = uVar5 + 1;
            piVar4 = piVar4 + 0xb;
        } while (uVar5 < 5);
        *arg1_00 = 0;
        uVar1 = fcn.0001dc14(arg1_00,iVar6);
        *arg1_00 = ~uVar1;
        uVar2 = (**(*0x1f928 + 0x58))(arg1,0x1e8b0,3,iVar6,arg1_00);
        (**(*0x1f920 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.0001c280 @ 0x1c280 */

int64_t fcn.0001c280(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong uStackX_20;
    
    uStackX_20 = 0;
    *arg3 = 0;
    iVar1 = (**(*0x1f928 + 0x48))(arg1,arg2,0,&uStackX_20,0);
    if (iVar1 == -0x7ffffffffffffffb) {
        iVar1 = fcn.0001aad8(0x8000000000000005,uStackX_20);
        *arg3 = iVar1;
        if (iVar1 == 0) {
            iVar1 = -0x7ffffffffffffff7;
        }
        else {
            iVar1 = (**(*0x1f928 + 0x48))(arg1,arg2,0,&uStackX_20,iVar1);
            if (iVar1 < 0) {
                (**(*0x1f920 + 0x48))(*arg3);
                *arg3 = 0;
            }
        }
    }
    return iVar1;
}


/* fcn.0001a3e4 @ 0x1a3e4 */

int64_t fcn.0001a3e4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    ulong uVar3;
    int64_t *piVar4;
    uchar *arg3;
    int64_t arg4;
    int64_t iStackX_8;
    int64_t iStackX_10;
    uchar auStackX_18 [16];
    int64_t var_bp_50h;
    int64_t var_180h;
    int64_t var_188h;
    int64_t var_190h;
    uint uVar5;
    uint uStack_248;
    ulong uStack_244;
    ulong uStack_23c;
    uchar auStack_228 [256];
    uchar auStack_128 [256];
    
    iVar1 = *0x1f920;
    *(arg1 + 0x2c8) = 0x49434649;
    iVar1 = (**(iVar1 + 0x98))(*(arg1 + -0x2e0),0x1e860,&iStackX_8);
    if (iVar1 < 0) {
        return iVar1;
    }
    fcn.00010280(&uStack_248,0x14);
    uStack_244 = *0x1edf0;
    uStack_23c = *0x1edf8;
    uStack_248 = 0x140401;
    iVar1 = fcn.0001bd20(iStackX_8,&uStack_248);
    *(arg1 + 0x2f0) = iVar1;
    if (iVar1 != 0) {
        uVar5 = 0;
        *(arg1 + 0x2d8) = 0x19c40;
        piVar4 = arg1 + 0x2d0;
        *(arg1 + 0x2e0) = 0x19e64;
        *(arg1 + 0x2e8) = 0x19f70;
        iVar1 = (**(*0x1f920 + 0x148))(piVar4,0x1e860,*(arg1 + 0x2f0),0x1e900,arg1 + 0x2d8,0);
        if ((iVar1 < 0) ||
           (iVar1 = (**(*0x1f920 + 0x118))
                              (*(arg1 + -0x2e0),0x1e920,auStackX_18,*(arg1 + -0x2e8),*piVar4,CONCAT44(uVar5,8)),
           iVar1 < 0)) goto code_r0x0001a484;
        iVar1 = *piVar4;
        arg4 = 0x1efc0;
        iVar2 = fcn.0001dfc0(0x1e840,iVar1,0x1e950,0x1efc0);
        *(arg1 + 0x2f8) = iVar2;
        if (iVar2 != 0) {
            piVar4 = &iStackX_10;
            iVar1 = fcn.0001cc70(*(arg1 + -0x2e0),iVar1,piVar4);
            if (-1 < iVar1) {
                iVar1 = fcn.0001dde8(*(arg1 + 0x2f8),3,piVar4,arg4);
                fcn.0001ac04(auStack_228,0x80,0x1f2e0,iVar1);
                arg3 = auStack_228;
                fcn.0001dcd0(*(arg1 + 0x2f8),3,arg3);
                uVar3 = fcn.0001dde8(*(arg1 + 0x2f8),2,arg3,iVar1);
                fcn.0001ac04(auStack_228,0x80,0x1f2f8,iStackX_10);
                fcn.0001dcd0(*(arg1 + 0x2f8),2,auStack_228);
                fcn.0001ac04(auStack_128,0x80,0x1f310,iStackX_10);
                fcn.0001dcd0(*(arg1 + 0x2f8),5,auStack_128);
                (**(*0x1f920 + 0x48))(iStackX_10);
                (**(*0x1f920 + 0x48))(uVar3);
                return 0;
            }
            goto code_r0x0001a484;
        }
    }
    iVar1 = -0x7ffffffffffffff7;
code_r0x0001a484:
    fcn.0001a678(arg1);
    return iVar1;
}


/* fcn.0001a678 @ 0x1a678 */

void fcn.0001a678(int64_t arg1)

{
    if (*(arg1 + 0x2d0) != 0) {
        (**(*0x1f920 + 0x120))(*(arg1 + -0x2e0),0x1e920,*(arg1 + -0x2e8));
        (**(*0x1f920 + 0x150))(*(arg1 + 0x2d0),0x1e860,*(arg1 + 0x2f0),0x1e900,arg1 + 0x2d8,0);
    }
    if (*(arg1 + 0x2f0) != 0) {
        (**(*0x1f920 + 0x48))();
    }
    if (*(arg1 + 0x2f8) != 0) {
        (**(*0x1f950 + 8))(*0x1f950);
    }
    if (*(arg1 + 0x308) != 0) {
        (**(*0x1f920 + 0x48))();
    }
    if (*(arg1 + 0x318) != 0) {
        (**(*0x1f920 + 0x48))();
    }
    if (*(arg1 + 0x328) != 0) {
        (**(*0x1f920 + 0x48))();
    }
    *(arg1 + 0x310) = 0;
    *(arg1 + 800) = 0;
    *(arg1 + 0x330) = 0;
    return;
}


/* fcn.0001cfd4 @ 0x1cfd4 */

int64_t fcn.0001cfd4(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    iVar2 = fcn.0001cf30(1,1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001aad8();
        if (iVar3 != 0) {
            iVar1 = *(iVar2 + 0x78);
            *(iVar1 + 0x24) = arg1;
            *(iVar1 + 0x38) = iVar3;
            *(iVar1 + 0x30) = arg1;
            *(iVar2 + 0xa8) = 0;
            *(iVar2 + 0x90) = (arg1 & 0xffffffffU) + iVar3;
            *(iVar2 + 0x88) = iVar3;
            *(iVar2 + 0x98) = iVar3;
            *(iVar2 + 0xa0) = iVar3;
            return iVar2;
        }
        (**(*0x1f920 + 0x48))(iVar2);
    }
    return 0;
}


/* fcn.0001dc58 @ 0x1dc58 */

uint32_t fcn.0001dc58(int64_t arg1)

{
    uint16_t uVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t *puVar5;
    
    uVar4 = 0;
    uVar2 = 0;
    if (*(arg1 + 0x80) != 0) {
        puVar5 = arg1 + 0xa8;
        uVar3 = *(arg1 + 0x80);
        do {
            if (*puVar5 != 0) {
                uVar1 = fcn.0001dc14(*(puVar5 + -4),*puVar5);
                if ((uVar4 & 1) != 0) {
                    uVar1 = uVar1 << 8 | uVar1 >> 8;
                }
                uVar2 = uVar1 + (uVar2 & 0xffff);
                if ((uVar2 & 0xffff0000) != 0) {
                    uVar2 = (uVar2 & 0xffff) + 1;
                }
                uVar4 = uVar4 + *puVar5;
            }
            puVar5 = puVar5 + 10;
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return uVar2 & 0xffff;
}


/* fcn.00018e5c @ 0x18e5c */

ulong fcn.00018e5c(int64_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint8_t uVar1;
    char *arg2_00;
    uint64_t arg3_00;
    uint32_t uVar2;
    uint64_t uVar3;
    uint32_t *in_stack_00000028;
    char acStack_48 [48];
    
    uVar3 = 0;
    arg3_00 = 0;
    if (arg2 != 0) {
        do {
            uVar1 = *(uVar3 + 1 + arg1);
            uVar2 = uVar1;
            arg2_00 = uVar3 + arg1;
            if (*arg2_00 == '\x01') {
                acStack_48[arg3_00] = '\x01';
                uVar2 = 1;
                arg3_00 = arg3_00 + 1;
            }
            else {
                if (*arg2_00 == '\0') break;
                if ((arg3 != '\0') || (*arg2_00 < '\0')) {
                    if ((uVar1 != 0) && (acStack_48 + arg3_00 != arg2_00)) {
                        fcn.000102a0(acStack_48 + arg3_00,arg2_00,uVar1);
                    }
                    arg3_00 = arg3_00 + uVar1;
                }
            }
            uVar2 = uVar3 + uVar2;
            uVar3 = uVar2;
        } while (uVar2 < arg2);
        if (arg3_00 != 0) {
            if ((arg3_00 & 3) != 0) {
                acStack_48[arg3_00] = '\0';
                arg3_00 = arg3_00 + 1;
            }
            uVar2 = arg3_00 + 3U & 0xfffffffc;
            if ((arg4 != 0) && (uVar2 <= *in_stack_00000028)) {
                if (uVar2 != 0) {
                    fcn.00010280(arg4,uVar2);
                }
                if ((arg3_00 != 0) && (arg4 != acStack_48)) {
                    fcn.000102a0(arg4,acStack_48,arg3_00);
                }
                *in_stack_00000028 = uVar2;
                return 0;
            }
            *in_stack_00000028 = uVar2;
            return 0x8000000000000005;
        }
    }
    *in_stack_00000028 = 0;
    return 0;
}


/* fcn.00017f9c @ 0x17f9c */

int64_t * fcn.00017f9c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    int64_t *piVar2;
    int64_t *piVar3;
    int64_t iVar4;
    ulong *puVar5;
    int64_t *piVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    ulong *puVar9;
    uint32_t arg3_00;
    int64_t *piVar10;
    char in_stack_00000028;
    
    uVar8 = arg2;
    arg3_00 = arg3;
    piVar10 = arg1 + 0x228 + ((uVar8 ^ arg3_00) % 0x1f) * 0x10;
    piVar2 = fcn.00017f44(arg1,arg2 & 0xffffffff,arg3_00);
    puVar9 = NULL;
    if (piVar2 != NULL) {
        *(*piVar2 + 8) = piVar2[1];
        *piVar2[1] = *piVar2;
        iVar1 = *piVar10;
        *piVar2 = iVar1;
        piVar2[1] = piVar10;
        *(iVar1 + 8) = piVar2;
        *piVar10 = piVar2;
        return piVar2;
    }
    iVar4 = 0x210;
    iVar1 = arg1;
    do {
        for (; iVar1 != 0; iVar1 = *(iVar1 + 0x220)) {
            for (puVar5 = *(iVar4 + iVar1); puVar5 != iVar4 + iVar1; puVar5 = *puVar5) {
                if ((*(puVar5 + 3) & *(puVar5 + 0x1c)) == (*(puVar5 + 0x1c) & uVar8)) {
                    puVar5[2] = puVar5[2] + 1;
                    goto code_r0x00018073;
                }
            }
        }
        iVar4 = iVar4 + -0x10;
        iVar1 = arg1;
    } while (0xf < iVar4);
    puVar5 = puVar9;
code_r0x00018073:
    if (puVar5 == NULL) {
        if (arg4 != -1) {
            return NULL;
        }
        if (in_stack_00000028 == '\0') {
            return NULL;
        }
    }
    else if ((arg4 != -1) && ((*(puVar5 + 0x24) & 1) == 0)) {
        uVar7 = *(puVar5 + 4);
        goto code_r0x000180be;
    }
    uVar7 = uVar8;
code_r0x000180be:
    if (puVar5 != NULL) {
        piVar2 = puVar5 + 2;
        *piVar2 = *piVar2 + -1;
        if (*piVar2 == 0) {
            (**(*0x1f920 + 0x48))(puVar5);
        }
    }
    piVar2 = fcn.0001aad8();
    if (piVar2 == NULL) {
        return NULL;
    }
    *piVar2 = piVar2;
    piVar2[1] = piVar2;
    piVar2[2] = 1;
    *(piVar2 + 3) = uVar8;
    *(piVar2 + 0x1c) = arg3_00;
    *(piVar2 + 4) = uVar7;
    piVar2[5] = puVar5;
    iVar1 = *piVar10;
    *piVar2 = iVar1;
    piVar2[1] = piVar10;
    *(iVar1 + 8) = piVar2;
    *piVar10 = piVar2;
    piVar2[2] = piVar2[2] + 1;
    piVar3 = *piVar10;
    piVar6 = **piVar10;
    while (piVar3 != piVar10) {
        uVar8 = puVar9 + 1;
        puVar9 = uVar8;
        if (0x3f < uVar8) {
            *(*piVar3 + 8) = piVar3[1];
            *piVar3[1] = *piVar3;
            piVar3 = piVar3 + 2;
            *piVar3 = *piVar3 + -1;
            if (*piVar3 == 0) {
                (**(*0x1f920 + 0x48))();
            }
        }
        piVar3 = piVar6;
        piVar6 = *piVar6;
    }
    return piVar2;
}


/* fcn.0001d2cc @ 0x1d2cc */

int64_t fcn.0001d2cc(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint in_register_0000000c;
    int64_t iVar6;
    int *piVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint64_t uVar14;
    uint32_t uVar15;
    int64_t *piVar16;
    uint32_t uVar17;
    uint32_t uVar18;
    
    iVar6 = CONCAT44(in_register_0000000c,arg1);
    uVar8 = arg3;
    if ((uVar8 != 0) && (arg2 + uVar8 <= *(iVar6 + 0x84))) {
        uVar18 = *(iVar6 + 0x80);
        uVar9 = 0;
        uVar15 = 0;
        if (uVar18 != 0) {
            piVar7 = iVar6 + 0xa8;
            do {
                uVar17 = *piVar7 + uVar15;
                if (arg2 < uVar17) break;
                uVar11 = uVar9 + 1;
                uVar9 = uVar11;
                piVar7 = piVar7 + 10;
                uVar15 = uVar17;
            } while (uVar11 < uVar18);
        }
        uVar11 = uVar9;
        uVar14 = 0;
        iVar1 = *(iVar6 + 0xa8 + uVar9 * 0x28);
        uVar17 = iVar1 - (arg2 - uVar15);
        if (uVar17 < uVar8) {
            uVar12 = uVar11 + 1;
            uVar5 = uVar12;
            uVar10 = 0;
            if (uVar12 < uVar18) {
                piVar7 = iVar6 + (uVar5 * 4 + 0x15 + uVar12) * 8;
                uVar12 = uVar15 + iVar1;
                do {
                    iVar1 = *piVar7;
                    if (arg2 + uVar8 <= iVar1 + uVar12) {
                        uVar14 = uVar5;
                        uVar10 = (arg2 - uVar12) + uVar8;
                        goto code_r0x0001d3ac;
                    }
                    uVar13 = uVar5 + 1;
                    uVar5 = uVar13;
                    piVar7 = piVar7 + 10;
                    uVar12 = iVar1 + uVar12;
                    uVar10 = 0;
                } while (uVar13 < uVar18);
            }
        }
        else {
            uVar14 = uVar9;
            uVar17 = uVar8;
            uVar10 = uVar8;
code_r0x0001d3ac:
        }
        uVar18 = uVar14;
        iVar3 = fcn.0001cf30(1,(uVar18 - uVar11) + 2);
        if (iVar3 != 0) {
            iVar4 = fcn.0001aad8();
            if (iVar4 != 0) {
                iVar2 = *(iVar3 + 0x78);
                *(iVar2 + 0x10) = 0x1d2c4;
                uVar12 = 2;
                *(iVar2 + 0x18) = *(iVar6 + 0x78);
                *(iVar2 + 0x20) = 1;
                *(iVar2 + 0x24) = 0x3c;
                iVar2 = *(iVar3 + 0x78);
                *(iVar2 + 0x38) = iVar4;
                *(iVar2 + 0x30) = 0x3c;
                *(iVar3 + 0x90) = iVar4 + 0x3c;
                *(iVar3 + 0xa0) = iVar4 + 0x3c;
                *(iVar3 + 0x88) = iVar4;
                *(iVar3 + 0x98) = iVar4;
                *(iVar3 + 0xa8) = 0x3c;
                *(iVar3 + 0x98) = *(iVar3 + 0x98) + 0x3c;
                *(iVar3 + 0xa8) = 0;
                piVar16 = *(iVar6 + 0x78) + 8;
                *piVar16 = *piVar16 + 1;
                *(iVar3 + 0x84) = uVar8;
                iVar4 = (arg2 - uVar15) + *(iVar6 + 0x98 + uVar9 * 0x28);
                *(iVar3 + 0xb0) = iVar4;
                *(iVar3 + 0xc0) = iVar4;
                uVar8 = uVar11 + 1;
                *(iVar3 + 0xb8) = uVar17 + iVar4;
                *(iVar3 + 200) = uVar17 + iVar4;
                *(iVar3 + 0xd0) = uVar17;
                if (uVar8 < uVar18) {
                    uVar9 = uVar18 - uVar8;
                    piVar16 = iVar6 + (uVar8 * 4 + 0x13 + uVar8) * 8;
                    do {
                        uVar8 = *(piVar16 + 2);
                        iVar2 = *piVar16;
                        piVar16 = piVar16 + 5;
                        uVar5 = uVar12;
                        uVar12 = uVar12 + 1;
                        iVar4 = iVar2 + uVar8;
                        *(iVar3 + 0x88 + uVar5 * 0x28) = iVar2;
                        *(iVar3 + 0x90 + uVar5 * 0x28) = iVar4;
                        *(iVar3 + 0x98 + uVar5 * 0x28) = iVar2;
                        *(iVar3 + 0xa0 + uVar5 * 0x28) = iVar4;
                        *(iVar3 + 0xa8 + uVar5 * 0x28) = uVar8;
                        uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                }
                if (uVar11 != uVar18) {
                    uVar9 = uVar12;
                    iVar4 = *(iVar6 + 0x98 + uVar14 * 0x28);
                    *(iVar3 + 0x88 + uVar9 * 0x28) = iVar4;
                    *(iVar3 + 0x90 + uVar9 * 0x28) = uVar10 + iVar4;
                    *(iVar3 + 0x98 + uVar9 * 0x28) = iVar4;
                    *(iVar3 + 0xa0 + uVar9 * 0x28) = uVar10 + iVar4;
                    *(iVar3 + 0xa8 + uVar9 * 0x28) = uVar10;
                }
                if (iVar3 + 0x38 != iVar6 + 0x38) {
                    fcn.000102a0(iVar3 + 0x38,iVar6 + 0x38,0x40);
                }
                return iVar3;
            }
            (**(*0x1f920 + 0x48))(iVar3);
        }
    }
    return 0;
}


/* fcn.00018838 @ 0x18838 */

ulong fcn.00018838(int64_t arg1,int64_t arg2,int64_t arg3,uint32_t *arg4)

{
    uint16_t uVar1;
    uint16_t uVar2;
    int64_t iVar3;
    ulong uVar4;
    uint16_t uVar5;
    ulong *puVar6;
    ulong *puVar7;
    uint32_t uVar8;
    uint16_t uVar9;
    
    uVar1 = arg4[5];
    uVar2 = arg4[5] >> 0x10;
    for (puVar6 = *(arg1 + 0x38); puVar6 != arg1 + 0x38; puVar6 = *puVar6) {
        puVar7 = puVar6 + -1;
        if ((*(puVar6 + 5) != '\0') && (*(puVar6 + 3) == CONCAT22(uVar1 << 8 | uVar1 >> 8,uVar2 << 8 | uVar2 >> 8)))
        goto code_r0x000188a2;
    }
    puVar7 = NULL;
code_r0x000188a2:
    uVar1 = arg4[1] >> 0x10;
    uVar2 = arg4[1];
    uVar8 = CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8);
    if ((puVar7 == NULL) || ((*(puVar7 + 0x24) & uVar8) != (*(puVar7 + 4) & *(puVar7 + 0x24)))) {
        fcn.0001d0d8(arg3);
        uVar4 = 0x8000000000000002;
    }
    else {
        for (puVar6 = puVar7[0x1a]; puVar6 != puVar7 + 0x1a; puVar6 = *puVar6) {
            if (puVar6[2] != 0) {
                uVar1 = arg4[5] >> 0x10;
                uVar5 = arg4[5];
                uVar2 = arg4[6] >> 0x10;
                uVar9 = arg4[6];
                iVar3 = fcn.00017f44(puVar6[2],CONCAT22(uVar9 << 8 | uVar9 >> 8,uVar2 << 8 | uVar2 >> 8),
                                     CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar1 << 8 | uVar1 >> 8));
                if ((iVar3 != 0) &&
                   (uVar1 = *(arg2 + 0xc) >> 0x10, uVar2 = *(arg2 + 0xc),
                   CONCAT22(uVar2 << 8 | uVar2 >> 8,uVar1 << 8 | uVar1 >> 8) == *(iVar3 + 0x20))) {
                    *(iVar3 + 0x20) = uVar8;
                }
            }
        }
        fcn.0001d0d8(arg3);
        uVar4 = 0;
    }
    return uVar4;
}


/* fcn.000189a0 @ 0x189a0 */

int64_t fcn.000189a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint16_t uVar1;
    int64_t arg3_00;
    uchar *arg1_00;
    int64_t iVar2;
    int64_t unaff_R14;
    int64_t unaff_retaddr;
    uchar uStack_28;
    uchar uStack_27;
    ushort uStack_22;
    ushort in_stack_ffffffffffffffe2;
    int32_t in_stack_fffffffffffffff0;
    
    arg3_00 = fcn.0001d1d8(arg3,arg2,0x3c);
    if (arg3_00 == 0) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        arg1_00 = fcn.0001d268(arg3_00,0,0);
        *arg1_00 = 0;
        *(arg1_00 + 2) = 0;
        uVar1 = fcn.0001dc14(arg1_00,*(arg3_00 + 0x84));
        *(arg1_00 + 2) = ~uVar1;
        uStack_27 = 0;
        uStack_22 = 0;
        iVar2 = fcn.00018434(arg1,0,arg3_00,&uStack_28,CONCAT22(in_stack_ffffffffffffffe2,0x140),*(arg2 + 0xc),
                             in_stack_fffffffffffffff0,unaff_R14,unaff_retaddr);
        if (iVar2 < 0) {
            fcn.0001d0d8(arg3_00);
        }
    }
    fcn.0001d0d8(arg3);
    return iVar2;
}


/* fcn.00018f78 @ 0x18f78 */

ulong fcn.00018f78(uint32_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    uint16_t *puVar2;
    uint in_register_0000000c;
    uint64_t uVar3;
    uint16_t *puVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    puVar2 = CONCAT44(in_register_0000000c,arg1);
    uVar6 = 0;
    uVar5 = uVar6;
    if (*puVar2 != 0) {
        do {
            if (3 < uVar5) {
                return 0x8000000000000002;
            }
            uVar1 = *puVar2;
            uVar3 = uVar6;
            puVar4 = puVar2;
            if (0x2f < uVar1) {
                do {
                    if (0x39 < uVar1) break;
                    puVar2 = puVar2 + 1;
                    uVar3 = (uVar1 - 0x30) + uVar3 * 10;
                    uVar1 = *puVar2;
                } while (0x2f < uVar1);
                puVar4 = puVar2;
                if (0xff < uVar3) {
                    return 0x8000000000000002;
                }
            }
            *(uVar5 + arg2) = uVar3;
            if ((*puVar4 != 0) && (*puVar4 != 0x2e)) {
                return 0x8000000000000002;
            }
            puVar2 = puVar4 + 1;
            if (*puVar4 != 0x2e) {
                puVar2 = puVar4;
            }
            uVar5 = uVar5 + 1;
        } while (*puVar2 != 0);
        if (uVar5 == 4) {
            return 0;
        }
    }
    return 0x8000000000000002;
}


/* fcn.00019260 @ 0x19260 */

void fcn.00019260(int64_t arg1,int64_t arg2)

{
    fcn.0001ac04(arg2,0x20,0x1f1b8,*arg1);
    return;
}


/* fcn.000192a0 @ 0x192a0 */

ulong fcn.000192a0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    uint64_t noname_0;
    uint64_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    
    uVar6 = 0;
    if (arg2 != 0) {
        arg1 = arg1 + 2;
        uVar4 = uVar6;
        uVar5 = uVar6;
        noname_0 = uVar6;
        do {
            if ((noname_0 == 0) && (noname_0 = fcn.0001ab08(0x20), noname_0 == 0)) {
                return 0x8000000000000009;
            }
            fcn.0001ac04(noname_0,0x20,0x1f1b8,*(arg1 + -2));
            uVar2 = uVar6;
            do {
                uVar3 = uVar4;
                iVar1 = *(noname_0 + uVar2 * 2);
                if (iVar1 == 0) {
                    if (uVar5 == arg2 - 1U) {
                        *(arg3 + uVar3 * 2) = 0;
                    }
                    else {
                        *(arg3 + uVar3 * 2) = 0x20;
                    }
                    break;
                }
                *(arg3 + uVar3 * 2) = iVar1;
                uVar2 = uVar2 + 1;
                uVar4 = uVar3 + 1;
            } while (uVar2 < 0x10);
            uVar4 = uVar3 + 1;
            uVar5 = uVar5 + 1;
            arg1 = arg1 + 4;
        } while (uVar5 < arg2);
        if (noname_0 != 0) {
            (**(*0x1f920 + 0x48))(noname_0);
        }
    }
    return 0;
}


/* fcn.00019018 @ 0x19018 */

ulong fcn.00019018(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int16_t iVar1;
    bool bVar2;
    int64_t iVar3;
    int64_t iVar4;
    int64_t arg1_00;
    ulong uVar5;
    int16_t *piVar6;
    int64_t iVar7;
    int64_t iVar8;
    int64_t iStackX_8;
    int64_t iStackX_20;
    
    iVar7 = 0;
    bVar2 = true;
    iVar1 = *arg1;
    iVar3 = iVar7;
    while (iVar1 != 0) {
        if (iVar1 == 0x20) {
            bVar2 = true;
        }
        else if (bVar2) {
            *arg3 = *arg3 + 1;
            bVar2 = false;
        }
        iVar3 = iVar3 + 1;
        iVar1 = *(arg1 + iVar3 * 2);
    }
    if (*arg3 != 0) {
        iVar3 = fcn.0001ab08(*arg3 << 2);
        *arg2 = iVar3;
        if (iVar3 == 0) {
            return 0x8000000000000009;
        }
        iStackX_20 = 0;
        if (*arg1 != 0) {
            iStackX_8 = 0;
            piVar6 = arg1;
            iVar8 = iVar7;
            iVar3 = iVar7;
            do {
                do {
                    if (*piVar6 == 0x20) {
                        if (bVar2) {
code_r0x0001914c:
                            iVar8 = iVar8 + 1;
                            bVar2 = true;
                            iVar3 = iVar3 + 2;
                            goto code_r0x0001915a;
                        }
                        iVar8 = (iVar7 - iVar8) * 2;
                        iVar4 = fcn.0001ab08(iVar8 + 2);
                        if (iVar4 != 0) {
                            if ((iVar8 != 0) && (iVar4 != iVar3 + arg1)) {
                                fcn.000102a0(iVar4,iVar3 + arg1,iVar8);
                            }
                            iVar3 = *arg2;
                            *(iVar8 + iVar4) = 0;
                            iVar3 = fcn.00018f78(iVar4,iVar3 + iStackX_8);
                            if (iVar3 != 0) {
                                (**(*0x1f920 + 0x48))(iVar4);
                                uVar5 = 0x8000000000000002;
                                goto code_r0x0001923c;
                            }
                            iStackX_8 = iStackX_8 + 4;
                            iVar3 = iVar7 * 2;
                            (**(*0x1f920 + 0x48))();
                            iVar8 = iVar7;
                            goto code_r0x0001914c;
                        }
code_r0x00019232:
                        uVar5 = 0x8000000000000009;
code_r0x0001923c:
                        (**(*0x1f920 + 0x48))(*arg2);
                        *arg2 = 0;
                        *arg3 = 0;
                        return uVar5;
                    }
                    bVar2 = false;
code_r0x0001915a:
                    iStackX_20 = iStackX_20 + 1;
                    iVar7 = iVar7 + 1;
                    piVar6 = arg1 + iStackX_20 * 2;
                } while (*piVar6 != 0);
                if (!bVar2) {
                    iVar4 = (iVar7 - iVar8) * 2;
                    arg1_00 = fcn.0001ab08(iVar4 + 2);
                    if (arg1_00 == 0) goto code_r0x00019232;
                    if ((iVar4 != 0) && (arg1_00 != iVar3 + arg1)) {
                        fcn.000102a0(arg1_00,iVar3 + arg1,iVar4);
                    }
                    *(iVar4 + arg1_00) = 0;
                    iVar4 = fcn.00018f78(arg1_00,iStackX_8 + *arg2);
                    if (iVar4 != 0) {
                        (**(*0x1f920 + 0x48))(arg1_00);
                        uVar5 = 0x8000000000000002;
                        goto code_r0x0001923c;
                    }
                    (**(*0x1f920 + 0x48))();
                }
            } while (*piVar6 != 0);
        }
    }
    return 0;
}


/* fcn.0001c510 @ 0x1c510 */

void fcn.0001c510(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    ushort *arg1_00;
    int64_t iVar4;
    ulong uVar5;
    int64_t *piVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint uStack_c8;
    uint uStack_c4;
    uint uStack_c0;
    uint uStack_bc;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t *piStack_a0;
    int64_t iStack_98;
    uchar auStack_90 [4];
    int iStack_8c;
    int iStack_88;
    int iStack_84;
    int iStack_80;
    uchar uStack_7c;
    ulong *puStack_78;
    int64_t iStack_70;
    int64_t iStack_68;
    uint64_t uStack_60;
    uchar auStack_58 [24];
    
    uStack_c8 = 0xf31fcbb5;
    uStack_c4 = 0x4215b53d;
    uStack_c0 = 0x3361db81;
    uStack_bc = 0x6a98d4e4;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    iVar1 = (**(*0x1f920 + 0x140))(&uStack_c8);
    uVar3 = 0;
    if (iVar1 < 0) {
        uVar9 = uVar3;
        if (iStackX_18 != 0) {
            piVar6 = &iStackX_18;
            iVar1 = iStackX_18;
            do {
                iVar8 = 0;
                uVar2 = fcn.0001c468(iVar1,0,0,0);
                if (uVar3 <= uVar2 >> 1) {
                    uVar3 = fcn.0001c468(iVar1,0,0,iVar8);
                    uVar3 = uVar3 >> 1;
                }
                piVar6 = piVar6 + 1;
                uVar9 = uVar9 + 1;
                iVar1 = *piVar6;
            } while (iVar1 != 0);
        }
        iVar1 = *(*0x1f918 + 0x40);
        if (auStack_90 != *(iVar1 + 0x48)) {
            fcn.000102a0(auStack_90,*(iVar1 + 0x48),0x18);
        }
        (**(iVar1 + 0x18))(iVar1,iStack_8c,&iStack_68);
        (**(iVar1 + 0x40))(iVar1,0);
        (**(iVar1 + 0x28))(iVar1,arg1);
        uStack_b8 = iStack_70 - 3U;
        if (uVar9 < iStack_70 - 3U) {
            uStack_b8 = uVar9;
        }
        uVar9 = iStack_68 - 2U;
        if (uVar3 < iStack_68 - 2U) {
            uVar9 = uVar3;
        }
        uVar2 = (iStack_68 - uVar9) - 2 >> 1;
        uVar7 = (iStack_70 - uStack_b8) - 3 >> 1;
        uStack_a8 = uVar2;
        uStack_60 = uVar9;
        arg1_00 = fcn.0001ab08(uVar9 * 2 + 6);
        uVar3 = uVar9 * 2 + 4;
        if (uVar3 != 0) {
            fcn.00010300(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x250c;
        *(arg1_00 + uVar9 + 1) = 0x2510;
        (**(iVar1 + 0x38))(iVar1,uVar2,uVar7);
        iVar8 = uVar7 + 1;
        (**(iVar1 + 8))(iVar1,arg1_00);
        iStack_98 = iStackX_18;
        if (iStackX_18 != 0) {
            piStack_a0 = &iStackX_18;
            iVar4 = iStackX_18;
            do {
                iStack_98 = iVar4;
                if (uStack_b8 == 0) break;
                if (uVar3 != 0) {
                    fcn.00010300(arg1_00,uVar3 >> 1,0x20);
                }
                *arg1_00 = 0x2502;
                *(arg1_00 + uVar9 + 1) = 0x2502;
                (**(iVar1 + 0x38))(iVar1,uVar2);
                (**(iVar1 + 8))(iVar1);
                uVar5 = 0;
                uStack_b0 = fcn.0001c468(iVar4,0,0,0);
                uStack_b0 = uStack_b0 >> 1;
                if (uVar9 < uStack_b0) {
                    fcn.0001c468(iVar4,CONCAT71(uVar5 >> 8,1),uVar9,&uStack_b0);
                    uVar9 = uStack_b0;
                    iVar4 = fcn.0001ab08(uStack_b0 * 2 + 2);
                    fcn.0001a904(iVar4,uVar9 + 1,iStack_98,uVar9 - 3);
                    fcn.0001a9e4(iVar4,uVar9 + 1,0x1f738);
                    (**(iVar1 + 0x38))(iVar1,uStack_a8 + 1,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                    (**(*0x1f920 + 0x48))();
                    uVar9 = uStack_60;
                    uVar2 = uStack_a8;
                }
                else {
                    (**(iVar1 + 0x38))(iVar1,(uVar9 - uStack_b0 >> 1) + 1 + uVar2,iVar8);
                    (**(iVar1 + 8))(iVar1,iVar4);
                }
                iVar8 = iVar8 + 1;
                uStack_b8 = uStack_b8 - 1;
                piStack_a0 = piStack_a0 + 1;
                iVar4 = *piStack_a0;
                iStack_98 = iVar4;
            } while (iVar4 != 0);
        }
        if (uVar3 != 0) {
            fcn.00010300(arg1_00,uVar3 >> 1,0x2500);
        }
        *arg1_00 = 0x2514;
        *(arg1_00 + uVar9 + 1) = 0x2518;
        (**(iVar1 + 0x38))(iVar1,uVar2,iVar8);
        (**(iVar1 + 8))(iVar1,arg1_00);
        (**(*0x1f920 + 0x48))(arg1_00);
        (**(iVar1 + 0x40))(iVar1,uStack_7c);
        (**(iVar1 + 0x38))(iVar1,iStack_84,iStack_80);
        (**(iVar1 + 0x28))(iVar1,iStack_88);
        if (arg2 != 0) {
            while (iVar1 = (**(*(*0x1f918 + 0x30) + 8))(*(*0x1f918 + 0x30),arg2), iVar1 < 0) {
                if (iVar1 == -0x7ffffffffffffffa) {
                    (**(*0x1f920 + 0x60))(1,*(*0x1f918 + 0x30) + 0x10,auStack_58);
                }
            }
        }
    }
    else {
        (**puStack_78)(arg1,arg2,&iStackX_18);
    }
    return;
}


/* fcn.0001e4d0 @ 0x1e4d0 */

uchar fcn.0001e4d0(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    int64_t arg1_00;
    ulong in_RDX;
    
    arg1_00 = fcn.0001e1d0(arg1,in_RDX,0);
    uVar2 = 0;
    if (arg1_00 != 0) {
        cVar1 = fcn.0001e438(arg1,arg1_00,0x1f7f0,0x1f800);
        uVar2 = 0;
        if (cVar1 != '\0') {
            uVar2 = fcn.0001e438(arg1,arg1_00,0x1f800,0x1f810);
        }
        (**(*0x1f920 + 0x48))(arg1_00);
    }
    return uVar2;
}


/* fcn.0001e1d0 @ 0x1e1d0 */

int16_t * fcn.0001e1d0(ulong noname_0,ulong noname_1,int64_t arg1)

{
    int64_t arg2;
    int16_t iVar1;
    int64_t arg1_00;
    bool bVar2;
    uint16_t uVar3;
    uint16_t *puVar4;
    uint64_t arg1_01;
    uint64_t uVar5;
    int16_t *arg1_02;
    int64_t iVar6;
    int16_t *piVar7;
    uint64_t uVar8;
    int16_t *piVar9;
    ulong noname_2;
    char16_t *noname_2_00;
    uint16_t *puVar10;
    uint64_t uVar11;
    
    uVar11 = 0;
    puVar10 = 0x1ef90;
    puVar4 = 0x1ef90;
    uVar8 = uVar11;
    uVar3 = *0x1ef90;
    while (uVar3 != 0) {
        puVar4 = puVar4 + 1;
        uVar8 = uVar8 + 1;
        uVar3 = *puVar4;
    }
    arg1_01 = uVar11;
    uVar5 = uVar11;
    if (arg1 != 0) {
        arg1_01 = fcn.0001bdfc(arg1);
        if (arg1_01 == 0) {
            return NULL;
        }
        uVar5 = fcn.0001bbe0(arg1_01);
    }
    arg2 = (uVar5 + uVar8 * 2) * 2 + 0x32;
    arg1_00 = arg2 * 2;
    arg1_02 = fcn.0001ab08(arg1_00);
    if (arg1_02 == NULL) {
        return NULL;
    }
    fcn.0001a86c(arg1_02,arg2);
    iVar1 = *arg1_02;
    piVar9 = arg1_02;
    uVar8 = uVar11;
    while (iVar1 != 0) {
        piVar9 = piVar9 + 1;
        uVar8 = uVar8 + 1;
        iVar1 = *piVar9;
    }
    piVar9 = arg1_02 + uVar8;
    do {
        fcn.0001ac68(piVar9,(arg1_00 - piVar9) + arg1_02,arg1,*(uVar11 + 0x1e840));
        iVar6 = fcn.0001a838(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
        uVar11 = uVar11 + 1;
        piVar9 = piVar9 + iVar6;
    } while (uVar11 < 0x10);
    noname_2 = 0x1f800;
    fcn.0001a9e4(arg1_02,arg2,0x1f800);
    uVar11 = 0;
    iVar1 = *piVar9;
    piVar7 = piVar9;
    uVar8 = uVar11;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        uVar8 = uVar8 + 1;
        iVar1 = *piVar7;
    }
    piVar9 = piVar9 + uVar8;
    uVar3 = *0x1ef90;
    while (uVar3 != 0) {
        fcn.0001ac68(piVar9,(arg1_00 - piVar9) + arg1_02,noname_2,uVar3);
        iVar6 = fcn.0001a838(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
        puVar10 = puVar10 + 1;
        piVar9 = piVar9 + iVar6;
        uVar3 = *puVar10;
    }
    noname_2_00 = L"&PATH=";
    fcn.0001a9e4(arg1_02,arg2,0x1f810);
    iVar6 = 0;
    iVar1 = *piVar9;
    piVar7 = piVar9;
    while (iVar1 != 0) {
        piVar7 = piVar7 + 1;
        iVar6 = iVar6 + 1;
        iVar1 = *piVar7;
    }
    piVar9 = piVar9 + iVar6;
    if (uVar5 != 0) {
        do {
            fcn.0001ac68(piVar9,(arg1_00 - piVar9) + arg1_02,noname_2_00,*(uVar11 + arg1_01));
            iVar6 = fcn.0001a838(piVar9,arg2 - (piVar9 - arg1_02 >> 1));
            uVar11 = uVar11 + 1;
            piVar9 = piVar9 + iVar6;
        } while (uVar11 < uVar5);
    }
    *piVar9 = 0;
    bVar2 = false;
    iVar1 = *arg1_02;
    piVar9 = arg1_02;
    while (iVar1 != 0) {
        iVar1 = *piVar9;
        if (iVar1 == 0x3d) {
            bVar2 = true;
        }
        else if (iVar1 == 0x26) {
            bVar2 = false;
        }
        else if ((bVar2) && (iVar1 - 0x41U < 6)) {
            *piVar9 = iVar1 + 0x20;
        }
        piVar9 = piVar9 + 1;
        iVar1 = *piVar9;
    }
    return arg1_02;
}


/* fcn.0001e438 @ 0x1e438 */

bool fcn.0001e438(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uint32_t arg2_00;
    
    arg2_00 = arg2;
    iVar1 = fcn.0001a7b4(noname_0,arg2_00);
    if (iVar1 != 0) {
        iVar2 = fcn.0001a7b4(arg1,arg2_00);
        if (iVar2 != 0) {
            iVar3 = fcn.0001a7b4(iVar1,arg3);
            if (iVar3 != 0) {
                iVar4 = fcn.0001a7b4(iVar2,arg3);
                if (iVar4 != 0) {
                    iVar3 = iVar3 - iVar1 >> 1;
                    if (iVar3 == iVar4 - iVar2 >> 1) {
                        iVar1 = fcn.0001a778(iVar1,iVar2,iVar3);
                        return iVar1 == 0;
                    }
                }
            }
        }
    }
    return false;
}


/* fcn.000193b4 @ 0x193b4 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h

int64_t fcn.000193b4(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    char *pcVar3;
    int64_t iVar4;
    int64_t arg1_00;
    uint64_t uVar5;
    uchar auStackX_8 [8];
    uchar auStackX_10 [8];
    int64_t iStackX_18;
    int64_t iStackX_20;
    int64_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int64_t var_60h;
    uint64_t auStack_58 [3];
    int64_t var_18h;
    int64_t var_10h;
    
    iVar4 = 0;
    auStack_58[1] = 4;
    arg1_00 = 0;
    iVar1 = arg1 + 0x20;
    if ((arg2 == 0) || (arg1 == 0)) {
        return -0x7ffffffffffffffe;
    }
    iStackX_20 = 0;
    pcVar3 = NULL;
    iVar2 = (**(*0x1f928 + 0x48))(*(arg1 + 0x338),0x1e840,0,&iStackX_20,0);
    if (iVar2 == -0x7ffffffffffffffb) {
        pcVar3 = fcn.0001ab08(iStackX_20);
        if (pcVar3 == NULL) {
            return -0x7ffffffffffffff7;
        }
        iVar2 = (**(*0x1f928 + 0x48))(*(arg1 + 0x338),0x1e840,0,&iStackX_20,pcVar3);
    }
    else if (iVar2 == -0x7ffffffffffffff2) {
        *arg2 = 0;
        return -0x7ffffffffffffff2;
    }
    if (*pcVar3 == '\x01') {
        *arg2 = 1;
        iStackX_18 = 4;
        iVar2 = (**(arg1 + 0x28))(iVar1,1,&iStackX_18,auStackX_10);
        if (iVar2 < 0) goto code_r0x0001969f;
        if (pcVar3[1] == '\0') {
            *(arg2 + 1) = 0;
            if (arg2 + 2 != pcVar3 + 2) {
                fcn.000102a0(arg2 + 2,pcVar3 + 2,0x20);
            }
            if (arg2 + 0x22 != pcVar3 + 0x22) {
                fcn.000102a0(arg2 + 0x22,pcVar3 + 0x22,0x20);
            }
            if (arg2 + 0x42 != pcVar3 + 0x42) {
                fcn.000102a0(arg2 + 0x42,pcVar3 + 0x42,0x20);
            }
            if (arg2 + 0x62 != pcVar3 + 0x62) {
                fcn.000102a0(arg2 + 0x62,pcVar3 + 0x62,0x1fe);
            }
            goto code_r0x0001969f;
        }
        if (pcVar3[1] == '\x01') {
            *(arg2 + 1) = 1;
            goto code_r0x0001969f;
        }
        iStackX_18 = 0;
        iVar4 = (**(arg1 + 0x28))(iVar1,0,&iStackX_18,0);
        if (iVar4 != -0x7ffffffffffffffb) {
            return iVar4;
        }
        iVar4 = fcn.0001ab08(iStackX_18);
        if (iVar4 == 0) {
            return -0x7ffffffffffffff7;
        }
        iVar2 = (**(arg1 + 0x28))(iVar1,0,&iStackX_18,iVar4);
        if ((-1 < iVar2) && (iVar2 = (**(arg1 + 0x28))(iVar1,3,auStack_58 + 1,auStackX_8), -1 < iVar2)) {
            auStack_58[0] = 0;
            iVar2 = (**(arg1 + 0x28))(iVar1,4,auStack_58,0);
            if ((iVar2 == -0x7ffffffffffffffb) || (iVar2 == -0x7ffffffffffffff2)) {
                uVar5 = auStack_58[0] >> 2;
                if (auStack_58[0] != 0) {
                    arg1_00 = fcn.0001ab08(auStack_58[0]);
                    if (arg1_00 == 0) {
                        iVar2 = -0x7ffffffffffffff7;
                        goto code_r0x0001968d;
                    }
                    iVar2 = (**(arg1 + 0x28))(iVar1,4,auStack_58,arg1_00);
                    if (iVar2 < 0) goto code_r0x0001967b;
                }
                fcn.00019260(iVar4 + 0x68,arg2 + 2);
                fcn.00019260(iVar4 + 0x6c,arg2 + 0x22);
                fcn.00019260(auStackX_8,arg2 + 0x42);
                iVar2 = fcn.000192a0(arg1_00,uVar5 & 0xffffffff,arg2 + 0x62);
                goto code_r0x0001967b;
            }
        }
    }
    else {
        *arg2 = 0;
code_r0x0001967b:
        if (arg1_00 != 0) {
            (**(*0x1f920 + 0x48))(arg1_00);
        }
    }
code_r0x0001968d:
    if (iVar4 != 0) {
        (**(*0x1f920 + 0x48))(iVar4);
    }
code_r0x0001969f:
    (**(*0x1f920 + 0x48))(pcVar3);
    return iVar2;
}


/* fcn.0001a7b4 @ 0x1a7b4 */

int16_t * fcn.0001a7b4(uint32_t arg1,uint32_t arg2)

{
    int16_t iVar1;
    uint in_register_0000000c;
    int16_t *piVar2;
    int16_t *piVar3;
    uint in_register_00000014;
    int16_t *piVar4;
    int16_t *piVar5;
    
    piVar4 = CONCAT44(in_register_00000014,arg2);
    piVar2 = CONCAT44(in_register_0000000c,arg1);
    if (*piVar4 == 0) {
        return piVar2;
    }
    do {
        iVar1 = *piVar2;
        if (iVar1 == 0) {
            return NULL;
        }
        piVar3 = piVar2;
        piVar5 = piVar4;
        if (iVar1 == *piVar4) {
            do {
                if (iVar1 == 0) break;
                piVar3 = piVar3 + 1;
                piVar5 = piVar5 + 1;
                iVar1 = *piVar3;
            } while (iVar1 == *piVar5);
        }
        if (*piVar5 == 0) {
            return piVar2;
        }
        if (*piVar3 == 0) {
            return NULL;
        }
        piVar2 = piVar2 + 1;
    } while( true );
}


/* fcn.000196cc @ 0x196cc */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_20h
//WARNING: Variable defined which should be unmapped: var_30h

int64_t fcn.000196cc(uint32_t arg1,int64_t arg2)

{
    ulong *puVar1;
    uint *puVar2;
    uint16_t uVar3;
    uint16_t uVar4;
    uint16_t uVar5;
    int64_t iVar6;
    int64_t iVar7;
    char cVar8;
    uint in_register_0000000c;
    char *pcVar9;
    int64_t *piVar10;
    uint32_t uVar11;
    uint *puVar12;
    uint uVar13;
    char16_t *arg3;
    uint *arg2_00;
    uint *puVar14;
    uint *puVar15;
    char acStackX_10 [8];
    uchar auStackX_18 [8];
    uint auStackX_20 [2];
    uint32_t var_48h_2;
    int64_t var_50h_2;
    int32_t var_58h;
    int64_t iStack_88;
    uint *puStack_80;
    int64_t iStack_78;
    uint *puStack_70;
    uint auStack_68 [4];
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    int64_t var_20h;
    int64_t var_10h;
    
    pcVar9 = CONCAT44(in_register_0000000c,arg1);
    puVar14 = NULL;
    puVar1 = arg2 + 0x20;
    iStack_88 = 0;
    iStack_78 = 0;
    puVar2 = arg2 + 0x300;
    if (arg2 == 0) {
        return -0x7ffffffffffffffe;
    }
    if (pcVar9 == NULL) {
        return -0x7ffffffffffffffe;
    }
    if (*pcVar9 != '\x01') {
        return 0;
    }
    if (pcVar9[1] == '\x01') {
        *puVar2 = 1;
        iVar6 = (**puVar1)(puVar1,1,4,puVar2);
        if (iVar6 < 0) {
            return iVar6;
        }
        goto code_r0x00019bc5;
    }
    *puVar2 = 0;
    iVar6 = fcn.00018f78(arg1 + 0x22,&var_50h);
    if (-1 < iVar6) {
        uVar5 = var_50h;
        uVar3 = var_50h >> 0x10;
        if (var_50h == 0) {
code_r0x000197ae:
            iVar6 = fcn.00018f78(arg1 + 2,auStack_68);
            if ((-1 < iVar6) &&
               ((var_50h == 0 ||
                (uVar4 = auStack_68[0] >> 0x10,
                cVar8 = fcn.0001c928(CONCAT22(auStack_68[0] << 8 | auStack_68[0] >> 8,uVar4 << 8 | uVar4 >> 8),
                                     CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar3 << 8 | uVar3 >> 8)), cVar8 != '\0')))) {
                uVar4 = auStack_68[0] >> 0x10;
                uVar11 = CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar3 << 8 | uVar3 >> 8);
                cVar8 = fcn.00018d30(CONCAT22(auStack_68[0] << 8 | auStack_68[0] >> 8,uVar4 << 8 | uVar4 >> 8),uVar11)
                ;
                if (cVar8 != '\0') {
                    iVar6 = fcn.00018f78(arg1 + 0x42,&var_40h);
                    if ((-1 < iVar6) &&
                       (((var_40h == 0 || (var_50h == 0)) ||
                        (uVar5 = var_40h >> 0x10,
                        cVar8 = fcn.0001c928(CONCAT22(var_40h << 8 | var_40h >> 8,uVar5 << 8 | uVar5 >> 8),uVar11),
                        cVar8 != '\0')))) {
                        puStack_80 = NULL;
                        puStack_70 = NULL;
                        puVar12 = puVar14;
                        puVar15 = puVar14;
                        if (pcVar9 + 0x62 != NULL) {
                            iVar6 = fcn.00019018(pcVar9 + 0x62,&puStack_80,&puStack_70);
                            puVar15 = puStack_70;
                            puVar12 = puStack_80;
                            if (iVar6 < 0) {
                                fcn.0001c510(0x17,auStackX_18,0x1f250,0);
                                puVar12 = puStack_80;
                                puVar15 = puStack_70;
                            }
                            else if (puStack_70 != NULL) {
                                arg2_00 = puStack_80;
                                uVar13 = auStackX_20[0];
                                do {
                                    if (auStackX_20 != arg2_00) {
                                        fcn.000102a0(auStackX_20,arg2_00,4);
                                        uVar13 = auStackX_20[0];
                                    }
                                    uVar5 = uVar13 >> 0x10;
                                    if (0xfffffffd < CONCAT22(uVar13 << 8 | uVar13 >> 8,uVar5 << 8 | uVar5 >> 8) - 1U)
                                    {
                                        fcn.0001c510(0x17,auStackX_18,0x1f250,0);
                                        (**(*0x1f920 + 0x48))(puVar12);
                                        return -0x7ffffffffffffffe;
                                    }
                                    puVar14 = puVar14 + 1;
                                    arg2_00 = arg2_00 + 1;
                                } while (puVar14 < puVar15);
                            }
                        }
                        if (*(arg2 + 0x308) != 0) {
                            (**(*0x1f920 + 0x48))();
                        }
                        *(arg2 + 0x310) = 1;
                        puVar14 = fcn.0001ab08(8);
                        *(arg2 + 0x308) = puVar14;
                        if (puVar14 != NULL) {
                            if (puVar14 != auStack_68) {
                                fcn.000102a0(puVar14,auStack_68,4);
                            }
                            piVar10 = *(arg2 + 0x308) + 4;
                            if (piVar10 != &var_50h) {
                                fcn.000102a0(piVar10,&var_50h,4);
                            }
                            if (*(arg2 + 0x318) != 0) {
                                (**(*0x1f920 + 0x48))();
                            }
                            *(arg2 + 800) = 1;
                            piVar10 = fcn.0001ab08(4);
                            *(arg2 + 0x318) = piVar10;
                            if (piVar10 != NULL) {
                                if (piVar10 != &var_40h) {
                                    fcn.000102a0(piVar10,&var_40h,4);
                                }
                                if (*(arg2 + 0x328) != 0) {
                                    (**(*0x1f920 + 0x48))();
                                }
                                *(arg2 + 0x330) = puVar15;
                                *(arg2 + 0x328) = puVar12;
                                iVar6 = (**puVar1)(puVar1,1,4,puVar2);
                                if (iVar6 < 0) {
                                    return iVar6;
                                }
                                iVar6 = (**(*0x1f920 + 0x50))(0x80000000,8,0,0,&iStack_88);
                                if (iVar6 < 0) {
                                    return -0x7ffffffffffffff7;
                                }
                                iVar6 = (**(*0x1f920 + 0x50))(0x200,0x10,0x193b0,acStackX_10,&iStack_78);
                                if (-1 < iVar6) {
                                    acStackX_10[0] = '\0';
                                    iVar6 = (**(arg2 + 0x30))(puVar1,2,iStack_78);
                                    if (-1 < iVar6) {
                                        iVar6 = (**puVar1)(puVar1,2,*(arg2 + 0x310) << 3,*(arg2 + 0x308));
                                        if (iVar6 == -0x7ffffffffffffffa) {
                                            (**(*0x1f920 + 0x58))(iStack_88,2,50000000);
                                            do {
                                                iVar7 = (**(*0x1f920 + 0x78))(iStack_88);
                                                if (-1 < iVar7) goto code_r0x00019b71;
                                            } while (acStackX_10[0] == '\0');
                                            iVar6 = 0;
                                        }
code_r0x00019b71:
                                        (**(arg2 + 0x38))(puVar1,2,iStack_78);
                                        if (((-1 < iVar6) &&
                                            (iVar6 = (**puVar1)(puVar1,3,*(arg2 + 800) << 2,*(arg2 + 0x318)),
                                            -1 < iVar6)) && ((*(arg2 + 0x330) != 0 && (*(arg2 + 0x328) != 0)))) {
                                            iVar6 = (**puVar1)(puVar1,4,*(arg2 + 0x330) << 2);
                                        }
                                    }
                                }
code_r0x00019bc5:
                                if (iStack_78 != 0) {
                                    (**(*0x1f920 + 0x70))();
                                }
                                if (iStack_88 != 0) {
                                    (**(*0x1f920 + 0x70))();
                                }
                                return iVar6;
                            }
                        }
                        if (puVar12 != NULL) {
                            (**(*0x1f920 + 0x48))(puVar12);
                        }
                        return -0x7ffffffffffffff7;
                    }
                    arg3 = L"Invalid Gateway!";
                    goto code_r0x00019c09;
                }
            }
            arg3 = L"Invalid IP address!";
            goto code_r0x00019c09;
        }
        uVar11 = ~CONCAT22(uVar5 << 8 | uVar5 >> 8,uVar3 << 8 | uVar3 >> 8);
        if ((uVar11 & uVar11 + 1) == 0) {
            cVar8 = '\0';
            for (; uVar11 != 0; uVar11 = uVar11 >> 1) {
                cVar8 = cVar8 + '\x01';
            }
            if (cVar8 != ' ') goto code_r0x000197ae;
        }
    }
    arg3 = L"Invalid Subnet Mask!";
code_r0x00019c09:
    fcn.0001c510(0x17,auStackX_18,arg3,0);
    return -0x7ffffffffffffffe;
}


/* fcn.0001e550 @ 0x1e550 */

bool fcn.0001e550(ulong noname_0,int64_t noname_1,int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int16_t *piVar2;
    int16_t *piVar3;
    char16_t *pcVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t aiStackX_18 [2];
    ulong auStack_28 [2];
    
    auStack_28[0] = 0x260;
    aiStackX_18[0] = arg1;
    piVar3 = fcn.0001e0dc(noname_0,noname_1,arg1);
    iVar6 = 0;
    if (piVar3 != NULL) {
        pcVar4 = L"GUID=00000000000000000000000000000000&NAME=0000&PATH=00";
        iVar5 = iVar6;
        do {
            pcVar4 = pcVar4 + 1;
            iVar5 = iVar5 + 1;
        } while (*pcVar4 != L'\0');
        iVar1 = *piVar3;
        piVar2 = piVar3;
        while (iVar1 != 0) {
            piVar2 = piVar2 + 1;
            iVar6 = iVar6 + 1;
            iVar1 = *piVar2;
        }
        iVar6 = iVar5 * 2 + iVar6 * 2;
        iVar5 = fcn.0001ab08(iVar6 + 4);
        fcn.0001ac04(iVar5,iVar6 + 4,0x1f820,0x1f830);
        (**(*0x1f920 + 0x48))(piVar3);
        if (iVar5 != 0) {
            iVar6 = (**(*0x1f930 + 0x20))(*0x1f930,iVar5,arg2,auStack_28,aiStackX_18);
            (**(*0x1f920 + 0x48))(iVar5);
            return -1 < iVar6;
        }
    }
    return false;
}


/* fcn.0001ab74 @ 0x1ab74 */

int64_t fcn.0001ab74(ulong noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001aad8(noname_0,arg2);
    if (arg1_00 != 0) {
        if (arg2 != 0) {
            arg1_00 = fcn.00010280(arg1_00,arg2);
        }
        if ((arg1_00 != 0) && (arg3 != 0)) {
            if (arg1 < arg2) {
                arg2 = arg1;
            }
            if ((arg2 != 0) && (arg1_00 != arg3)) {
                fcn.000102a0(arg1_00,arg3,arg2);
            }
            (**(*0x1f920 + 0x48))(arg3);
        }
    }
    return arg1_00;
}


/* fcn.0001bd20 @ 0x1bd20 */

ulong fcn.0001bd20(int64_t arg1,int64_t arg2)

{
    uint16_t uVar1;
    int64_t arg1_00;
    ulong uVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg2 == 0) {
        iVar3 = 0x1f730;
        if (arg1 != 0) {
            iVar3 = arg1;
        }
        iVar4 = iVar3;
        arg1_00 = fcn.0001bbe0(iVar3);
        if (arg1_00 != 0) {
            uVar2 = fcn.0001ab34(iVar4,arg1_00,iVar3);
        }
    }
    else {
        uVar1 = *(arg2 + 2);
        iVar3 = fcn.0001aad8(arg1,uVar1 + 4);
        if (iVar3 != 0) {
            if ((uVar1 != 0) && (iVar3 != arg2)) {
                iVar3 = fcn.000102a0(iVar3,arg2,uVar1);
            }
            iVar4 = *(iVar3 + 2) + iVar3;
            if (iVar4 != 0x1f730) {
                fcn.000102a0(iVar4,0x1f730,4);
            }
            uVar2 = fcn.0001bc30(arg1,iVar3);
            (**(*0x1f920 + 0x48))(iVar3);
        }
    }
    return uVar2;
}


/* fcn.0001dfc0 @ 0x1dfc0 */

uint64_t fcn.0001dfc0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong *puVar1;
    int64_t iVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int *piVar5;
    int64_t *piVar6;
    int64_t iStackX_18;
    int64_t iStackX_20;
    uint64_t auStack_48 [2];
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        piVar5 = arg3;
        uVar4 = 0;
        do {
            piVar6 = piVar6 + 1;
            uVar3 = uVar4 + *piVar5 + -4;
            uVar4 = uVar3;
            piVar5 = *piVar6;
        } while (piVar5 != NULL);
        if (uVar3 != 0) {
            iStackX_18 = arg3;
            puVar1 = fcn.0001ab08(uVar3 + 0x18);
            if (puVar1 != NULL) {
                *puVar1 = *arg1;
                piVar6 = &iStackX_18;
                puVar1[1] = *(arg1 + 8);
                *(puVar1 + 2) = uVar3 + 0x18;
                piVar5 = puVar1 + 0x14;
                do {
                    uVar3 = *arg3 - 4;
                    if ((uVar3 != 0) && (piVar5 != arg3 + 4)) {
                        fcn.000102a0(piVar5,arg3 + 4,uVar3);
                    }
                    piVar6 = piVar6 + 1;
                    piVar5 = piVar5 + uVar3;
                    arg3 = *piVar6;
                } while (arg3 != NULL);
                if (piVar5 != 0x1f8a0) {
                    fcn.000102a0(piVar5,0x1f8a0,4);
                }
                iVar2 = (***0x1f950)(*0x1f950,puVar1,arg2,auStack_48);
                if (iVar2 < 0) {
                    auStack_48[0] = 0;
                }
                (**(*0x1f920 + 0x48))(puVar1);
                return auStack_48[0];
            }
        }
    }
    return 0;
}


/* fcn.0001dde8 @ 0x1dde8 */

int64_t fcn.0001dde8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int64_t iVar3;
    int64_t iVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iStackX_18;
    uchar auStackX_20 [8];
    int64_t aiStack_38 [2];
    
    auStackX_20[0] = arg4;
    aiStack_38[0] = 0;
    iVar5 = 0;
    iStackX_18 = arg3;
    arg1_00 = fcn.0001e64c(arg1);
    if (arg1_00 != NULL) {
        fcn.0001c280(0x1f7d0,0x1e810,aiStack_38,arg4);
        pcVar6 = arg1_00;
        iVar7 = aiStack_38[0];
        do {
            while( true ) {
                iVar3 = 0x1f7ea;
                if (iVar7 != 0) {
                    iVar3 = iVar7;
                }
                iVar3 = fcn.0001c334(arg1_00,0,0x1f7ea,iVar3);
                if (iVar3 == 0) goto code_r0x0001df72;
                iStackX_18 = 0;
                iVar4 = (**(*0x1f938 + 8))(*0x1f938,iVar3,arg1,arg2 & 0xffff,auStackX_20,&iStackX_18,0);
                if (iVar4 == -0x7ffffffffffffffb) {
                    iVar5 = fcn.0001ab08(iStackX_18);
                    if ((iVar5 != 0) &&
                       (iVar4 = (**(*0x1f938 + 8))(*0x1f938,iVar3,arg1,arg2 & 0xffff,iVar5,&iStackX_18,0),
                       iVar4 < 0)) {
                        (**(*0x1f920 + 0x48))(iVar5);
                        iVar5 = 0;
                    }
                    goto code_r0x0001df72;
                }
                if (iVar4 != -0x7fffffffffffffe0) goto code_r0x0001df72;
                if (iVar7 == 0) break;
                (**(*0x1f920 + 0x48))(iVar7);
                iVar7 = 0;
            }
            for (; (*pcVar6 != '\0' && (*pcVar6 != ';')); pcVar6 = pcVar6 + 1) {
            }
            cVar2 = *pcVar6;
            pcVar1 = pcVar6 + 1;
            pcVar6 = NULL;
            if (cVar2 == ';') {
                pcVar6 = pcVar1;
            }
        } while (pcVar6 != NULL);
code_r0x0001df72:
        (**(*0x1f920 + 0x48))(arg1_00);
        if (iVar7 != 0) {
            (**(*0x1f920 + 0x48))(iVar7);
        }
        if (iVar3 != 0) {
            (**(*0x1f920 + 0x48))(iVar3);
        }
    }
    return iVar5;
}


/* fcn.0001dcd0 @ 0x1dcd0 */

int16_t fcn.0001dcd0(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char *pcVar1;
    char cVar2;
    char *arg1_00;
    int16_t iVar3;
    char *pcVar4;
    int64_t iVar5;
    char *pcVar6;
    int64_t iVar7;
    int64_t iVar8;
    int16_t aiStackX_10 [4];
    
    aiStackX_10[0] = arg2;
    pcVar4 = fcn.0001e64c(arg1);
    if (pcVar4 == NULL) {
        iVar3 = 0;
    }
    else {
        iVar7 = -0x7ffffffffffffffe;
        cVar2 = *pcVar4;
        arg1_00 = pcVar4;
        while (cVar2 != '\0') {
            pcVar6 = arg1_00;
            if (*arg1_00 != '\0') {
                do {
                    if (*pcVar6 == ';') break;
                    pcVar6 = pcVar6 + 1;
                } while (*pcVar6 != '\0');
                if (*pcVar6 != '\0') {
                    *pcVar6 = '\0';
                    pcVar6 = pcVar6 + 1;
                }
            }
            iVar5 = 0;
            do {
                iVar8 = iVar5 + 1;
                pcVar1 = iVar5 + 0x1f7c5;
                iVar5 = iVar8;
            } while (*pcVar1 != '\0');
            iVar5 = fcn.0001a804(arg1_00,0x1f7c4,iVar8);
            if (iVar5 != 0) {
                if (aiStackX_10[0] == 0) {
                    iVar7 = (***0x1f938)(*0x1f938,arg1,aiStackX_10);
                }
                else {
                    iVar7 = (*(*0x1f938)[2])(*0x1f938,arg1);
                }
                if (iVar7 < 0) break;
            }
            arg1_00 = pcVar6;
            cVar2 = *pcVar6;
        }
        (**(*0x1f920 + 0x48))(pcVar4);
        iVar3 = 0;
        if (-1 < iVar7) {
            iVar3 = aiStackX_10[0];
        }
    }
    return iVar3;
}


/* fcn.0001a838 @ 0x1a838 */

uint64_t fcn.0001a838(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


/* fcn.0001ac34 @ 0x1ac34 */

uchar * fcn.0001ac34(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (arg2 <= puVar1) {
                return puVar1;
            }
            *puVar1 = arg4;
            if (in_stack_00000028 != 1) {
                puVar1[1] = arg4 >> 8;
            }
            puVar1 = puVar1 + in_stack_00000028;
            iVar2 = iVar2 + 1;
        } while (iVar2 < arg3);
    }
    return puVar1;
}


/* fcn.0001aab4 @ 0x1aab4 */

uint64_t fcn.0001aab4(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != '\0')) {
        while (uVar1 < 1000000) {
            uVar1 = uVar1 + 1;
            if (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) == '\0') {
                return uVar1;
            }
        }
        uVar1 = 0xf4241;
    }
    return uVar1;
}


/* fcn.0001bb60 @ 0x1bb60 */

void fcn.0001bb60(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000038;
    int8_t in_stack_00000040;
    
    fcn.0001adf8(arg1,arg2,arg3,arg4,in_stack_00000038,in_stack_00000040);
    return;
}


/* fcn.0001bb84 @ 0x1bb84 */

bool fcn.0001bb84(uint32_t arg1)

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


/* fcn.0001bbe0 @ 0x1bbe0 */

char * fcn.0001bbe0(int64_t arg1)

{
    char cVar1;
    char *pcVar2;
    char *pcVar3;
    
    pcVar3 = NULL;
    if (arg1 != 0) {
        cVar1 = fcn.0001bb84(arg1);
        pcVar2 = arg1;
        if (cVar1 != '\0') {
            for (; (*pcVar2 != '\x7f' || (pcVar2[1] != -1)); pcVar2 = pcVar2 + *(pcVar2 + 2)) {
            }
            pcVar3 = pcVar2 + (*(pcVar2 + 2) - arg1);
        }
    }
    return pcVar3;
}


/* fcn.0001bc30 @ 0x1bc30 */

int64_t fcn.0001bc30(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    
    iVar3 = 0;
    if (arg1 == 0) {
        arg1 = 0x1f730;
        if (arg2 != 0) {
            arg1 = arg2;
        }
    }
    else if (arg2 != 0) {
        cVar1 = fcn.0001bb84(arg1);
        if (cVar1 == '\0') {
            return 0;
        }
        cVar1 = fcn.0001bb84(arg2);
        if (cVar1 == '\0') {
            return 0;
        }
        iVar3 = fcn.0001bbe0(arg1);
        iVar4 = fcn.0001bbe0(arg2);
        iVar2 = fcn.0001aad8();
        if (iVar2 != 0) {
            if ((iVar3 != 0) && (iVar2 != arg1)) {
                iVar2 = fcn.000102a0(iVar2,arg1,iVar3);
            }
            iVar3 = iVar3 + -4 + iVar2;
            if ((iVar4 != 0) && (iVar3 != arg2)) {
                fcn.000102a0(iVar3,arg2,iVar4);
            }
        }
        return iVar2;
    }
    iVar4 = arg1;
    iVar2 = fcn.0001bbe0(arg1);
    if (iVar2 != 0) {
        iVar3 = fcn.0001ab34(iVar4,iVar2,arg1);
    }
    return iVar3;
}


/* fcn.0001a804 @ 0x1a804 */

int64_t fcn.0001a804(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    char *pcVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    pcVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != '\0' && (*pcVar1 != '\0')) && (*arg1 == *pcVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 1;
        pcVar1 = pcVar1 + 1;
    }
    return *arg1 - *pcVar1;
}


/* fcn.0001be90 @ 0x1be90 */

ulong fcn.0001be90(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t iVar3;
    
    cVar1 = *arg1;
    do {
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        iVar3 = 0;
        while ((cVar1 != '\0' && (cVar1 != ';'))) {
            iVar3 = iVar3 + 1;
            cVar1 = *(arg1 + iVar3);
        }
        iVar2 = fcn.0001a804(arg1,arg2,iVar3);
        if ((iVar2 == 0) && (*(iVar3 + arg2) == '\0')) {
            return 0;
        }
        arg1 = arg1 + iVar3;
        cVar1 = *arg1;
        if (cVar1 == '\0') {
            return 0x8000000000000003;
        }
        do {
            if (cVar1 != ';') break;
            arg1 = arg1 + 1;
            cVar1 = *arg1;
        } while (cVar1 != '\0');
        cVar1 = *arg1;
    } while( true );
}


/* fcn.0001c468 @ 0x1c468 */

int64_t fcn.0001c468(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    uint64_t uVar3;
    int64_t iVar4;
    
    uVar2 = 0;
    if (arg1 == 0) {
        iVar4 = 0;
    }
    else {
        iVar4 = 1;
        uVar3 = uVar2;
        do {
            while ((((iVar1 = *(arg1 + uVar2 * 2), iVar1 != -0x10 && (iVar1 != -0xf)) && (iVar1 != 0)) &&
                   ((uVar3 = uVar3 + iVar4, arg2 == '\0' || (uVar3 <= arg3))))) {
                uVar2 = uVar2 + 1;
            }
            if (*(arg1 + uVar2 * 2) == 0) break;
            if ((arg2 != '\0') && (arg3 < uVar3)) {
                *arg4 = uVar2;
                break;
            }
            iVar4 = (*(arg1 + uVar2 * 2) != -0x10) + 1;
            uVar2 = uVar2 + 1;
        } while (*(arg1 + uVar2 * 2) != 0);
        iVar4 = uVar3 * 2;
    }
    return iVar4;
}


/* fcn.00010300 @ 0x10300 */

int64_t fcn.00010300(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    ushort *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001a904 @ 0x1a904 */

ulong fcn.0001a904(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int16_t iVar1;
    uint64_t uVar2;
    int64_t arg2_00;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < arg2)) || ((1000000 < arg4 || (arg2 == 0)))) {
        return 0x8000000000000002;
    }
    arg2_00 = arg4;
    if (arg2 < arg4) {
        arg2_00 = arg2;
    }
    uVar2 = fcn.0001a838(arg3,arg2_00);
    if ((arg2 <= arg4) && (arg2 <= uVar2)) {
        return 0x8000000000000005;
    }
    if (arg4 < uVar2) {
        uVar2 = arg4;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x0001a9ac;
    }
    if (arg3 < arg1 + arg2 * 2) {
        return 0x800000000000000f;
    }
code_r0x0001a9ac:
    if (uVar2 != 0) {
        arg3 = arg3 - arg1;
        do {
            iVar1 = *(arg3 + arg1);
            if (iVar1 == 0) break;
            *arg1 = iVar1;
            arg1 = arg1 + 2;
            uVar2 = uVar2 - 1;
        } while (uVar2 != 0);
    }
    *arg1 = 0;
    return 0;
}


/* fcn.0001a9e4 @ 0x1a9e4 */

ulong fcn.0001a9e4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint64_t uVar2;
    int16_t *piVar3;
    int64_t iVar4;
    uint64_t arg2_00;
    
    iVar4 = arg2;
    piVar3 = arg1;
    iVar1 = fcn.0001a838(arg1,arg2);
    arg2_00 = iVar4 - iVar1;
    if ((((arg1 == 0) || (arg3 == NULL)) || (1000000 < arg2)) || (arg2 == 0)) {
        return 0x8000000000000002;
    }
    if (arg2_00 == 0) {
        return 0x8000000000000004;
    }
    uVar2 = fcn.0001a838(arg3,arg2_00);
    if (arg2_00 <= uVar2) {
        return 0x8000000000000005;
    }
    if (arg3 <= piVar3) {
        if (piVar3 < arg3 + (uVar2 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg3 < piVar3) goto code_r0x0001aa85;
    }
    if (arg3 < piVar3 + arg2) {
        return 0x800000000000000f;
    }
code_r0x0001aa85:
    piVar3 = piVar3 + iVar1;
    for (; *arg3 != 0; arg3 = arg3 + 2) {
        *piVar3 = *arg3;
        piVar3 = piVar3 + 1;
    }
    *piVar3 = 0;
    return 0;
}


/* fcn.0001c9e8 @ 0x1c9e8 */

int64_t * fcn.0001c9e8(int64_t arg1)

{
    int64_t *piVar1;
    int64_t *piVar2;
    uint64_t uVar3;
    
    piVar1 = arg1 + 0x10;
    if (*piVar1 == piVar1) {
        uVar3 = 0;
        do {
            piVar2 = fcn.0001aad8(arg1,0x20);
            if (piVar2 == NULL) {
                if (uVar3 == 0) {
                    return NULL;
                }
                break;
            }
            arg1 = *piVar1;
            uVar3 = uVar3 + 1;
            *piVar2 = arg1;
            piVar2[1] = piVar1;
            *(arg1 + 8) = piVar2;
            *piVar1 = piVar2;
        } while (uVar3 < 0x40);
    }
    piVar2 = *piVar1;
    if (piVar2 != piVar1) {
        *piVar1 = *piVar2;
        *(*piVar2 + 8) = piVar1;
    }
    return piVar2;
}


/* fcn.0001cba8 @ 0x1cba8 */

int64_t fcn.0001cba8(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_18;
    int64_t iStackX_20;
    int64_t aiStack_18 [2];
    
    uStackX_18 = 0;
    iVar1 = (**(*0x1f920 + 0x98))(arg1,0x1e870,&uStackX_18);
    if (iVar1 < 0) {
        aiStack_18[0] = fcn.0001bdfc(arg1);
        if (aiStack_18[0] != 0) {
            iStackX_20 = 0;
            iVar1 = (**(*0x1f920 + 0xb8))(0x1e870,aiStack_18,&iStackX_20);
            if ((-1 < iVar1) && (iVar1 = (**(*0x1f920 + 0x98))(iStackX_20,0x1e870,&uStackX_18), -1 < iVar1)) {
                if (arg2 != 0) {
                    *arg2 = uStackX_18;
                }
                return iStackX_20;
            }
        }
        arg1 = 0;
    }
    else if (arg2 != 0) {
        *arg2 = uStackX_18;
    }
    return arg1;
}


/* fcn.0001ac68 @ 0x1ac68 */

ulong fcn.0001ac68(uint32_t arg1,int64_t arg2,ulong noname_2,int64_t arg3)

{
    char cVar1;
    uchar auVar2 [16];
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    char *pcVar6;
    uint in_register_0000000c;
    int64_t iVar7;
    char *pcVar8;
    uint64_t uVar9;
    char *pcVar10;
    int64_t iVar11;
    bool bVar12;
    uint64_t in_stack_00000028;
    char cStack_38;
    char acStack_37 [47];
    
    pcVar6 = CONCAT44(in_register_0000000c,arg1);
    if (((pcVar6 == NULL) || (0x1e8481 < arg2)) || (0x25 < in_stack_00000028)) {
        uVar3 = 0x8000000000000002;
    }
    else {
        bVar12 = in_stack_00000028 != 0;
        uVar9 = 0x25;
        if (bVar12) {
            uVar9 = in_stack_00000028;
        }
        else {
            pcVar10 = &cStack_38;
            uVar5 = arg3;
            do {
                uVar4 = uVar5 / 0x10;
                pcVar10 = pcVar10 + 1;
                *pcVar10 = str.0123456789ABCDEF[uVar5 % 0x10];
                uVar5 = uVar4;
            } while (uVar4 != 0);
            in_stack_00000028 = pcVar10 - &cStack_38;
        }
        if (in_stack_00000028 < uVar9) {
            uVar9 = in_stack_00000028;
        }
        if (arg2 < uVar9 * 2 + 2) {
            uVar3 = 0x8000000000000005;
        }
        else {
            pcVar10 = pcVar6 + uVar9 * 2;
            cStack_38 = '\0';
            pcVar8 = &cStack_38;
            do {
                auVar2._8_8_ = 0;
                auVar2._0_8_ = arg3;
                uVar5 = SUB168(auVar2 / ZEXT816(0x10),0);
                pcVar8 = pcVar8 + 1;
                *pcVar8 = str.0123456789ABCDEF[arg3 % 0x10];
                arg3 = uVar5;
            } while (uVar5 != 0);
            iVar11 = pcVar8 - &cStack_38;
            if (bVar12) {
                pcVar6 = fcn.0001ac34(arg1,pcVar10,uVar9 - iVar11,SUB164(auVar2 / ZEXT816(0x10),0) + 0x30);
            }
            for (; iVar11 != 0; iVar11 = iVar11 + -1) {
                cVar1 = *pcVar8;
                iVar7 = 0;
                do {
                    if (pcVar10 <= pcVar6) break;
                    *pcVar6 = cVar1;
                    iVar7 = iVar7 + 1;
                    pcVar6[1] = cVar1 >> 7;
                    pcVar6 = pcVar6 + 2;
                } while (iVar7 < 1);
                pcVar8 = pcVar8 + -1;
            }
            iVar11 = 0;
            do {
                if (pcVar10 + 2 <= pcVar6) break;
                pcVar6[0] = '\0';
                pcVar6[1] = '\0';
                iVar11 = iVar11 + 1;
                pcVar6 = pcVar6 + 2;
            } while (iVar11 < 1);
            uVar3 = 0;
        }
    }
    return uVar3;
}


/* fcn.0001cf30 @ 0x1cf30 */

uint * fcn.0001cf30(int64_t arg1,int64_t arg2)

{
    uint *puVar1;
    uint *puVar2;
    int iVar3;
    
    puVar1 = fcn.0001ab08((arg2 - 1) * 0x28 + 0xb0);
    if (puVar1 != NULL) {
        *puVar1 = 0x6675626e;
        *(puVar1 + 2) = 1;
        puVar1[0x20] = arg2;
        puVar2 = puVar1 + 4;
        *puVar2 = puVar2;
        *(puVar1 + 6) = puVar2;
        iVar3 = arg1;
        if (iVar3 == 0) goto code_r0x0001cfc2;
        puVar2 = fcn.0001ab08(((iVar3 - 1) + 4) * 0x10);
        if (puVar2 != NULL) {
            *puVar2 = 0x6365766e;
            *(puVar2 + 2) = 1;
            puVar2[10] = iVar3;
            *(puVar1 + 0x1e) = puVar2;
            goto code_r0x0001cfc2;
        }
        (**(*0x1f920 + 0x48))(puVar1);
    }
    puVar1 = NULL;
code_r0x0001cfc2:
    return puVar1;
}


/* fcn.0001e64c @ 0x1e64c */

int64_t fcn.0001e64c(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar auStackX_10 [8];
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = 0;
    iVar1 = (**(*0x1f938 + 0x18))(*0x1f938,arg1,auStackX_10,aiStackX_18);
    if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.0001ab08(aiStackX_18[0]), iVar1 != 0)) {
        iVar2 = (**(*0x1f938 + 0x18))(*0x1f938,arg1,iVar1,aiStackX_18);
        if (-1 < iVar2) {
            return iVar1;
        }
        (**(*0x1f920 + 0x48))(iVar1);
    }
    return 0;
}


/* fcn.0001c334 @ 0x1c334 */

char * fcn.0001c334(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    char cVar2;
    int64_t iVar3;
    char *arg1_00;
    uint64_t uVar4;
    char *pcVar5;
    int64_t *piVar6;
    uint64_t arg3_00;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    if (arg3 != 0) {
        piVar6 = &iStackX_18;
        iStackX_18 = arg3;
        do {
            cVar2 = *arg3;
            uVar4 = 0;
            arg3_00 = 3;
            if (cVar2 == '\0') {
code_r0x0001c384:
                uVar4 = 0;
                cVar1 = cVar2;
                while (cVar1 != '\0') {
                    uVar4 = uVar4 + 1;
                    cVar1 = *(arg3 + uVar4);
                }
            }
            else {
                do {
                    uVar4 = uVar4 + 1;
                } while (*(arg3 + uVar4) != '\0');
                if (uVar4 < 4) goto code_r0x0001c384;
                uVar4 = 3;
            }
            if (arg2 == 0) {
                uVar4 = 0;
                if (cVar2 != '\0') {
                    do {
                        if (cVar2 == ';') break;
                        uVar4 = uVar4 + 1;
                        cVar2 = *(arg3 + uVar4);
                    } while (cVar2 != '\0');
                    goto code_r0x0001c41f;
                }
            }
            else {
code_r0x0001c41f:
                if (uVar4 != 0) {
                    cVar2 = *arg1;
                    pcVar5 = arg1;
                    while (cVar2 != '\0') {
                        if (arg2 == 0) {
                            for (; (*pcVar5 != '\0' && (*pcVar5 == ';')); pcVar5 = pcVar5 + 1) {
                            }
                            arg3_00 = 0;
                            cVar2 = *pcVar5;
                            while ((cVar2 != '\0' && (cVar2 != ';'))) {
                                arg3_00 = arg3_00 + 1;
                                cVar2 = pcVar5[arg3_00];
                            }
                            if (uVar4 <= arg3_00) goto code_r0x0001c3ec;
                        }
                        else {
code_r0x0001c3ec:
                            iVar3 = fcn.0001a804(pcVar5,arg3,uVar4);
                            if (iVar3 == 0) {
                                arg1_00 = fcn.0001ab08(arg3_00 + 1);
                                if (arg1_00 == NULL) {
                                    return NULL;
                                }
                                if (arg3_00 != 0) {
                                    if (arg1_00 != pcVar5) {
                                        pcVar5 = fcn.000102a0(arg1_00,pcVar5,arg3_00);
                                        return pcVar5;
                                    }
                                    return arg1_00;
                                }
                                return arg1_00;
                            }
                        }
                        pcVar5 = pcVar5 + arg3_00;
                        cVar2 = *pcVar5;
                    }
                    if ((arg2 != 0) || (uVar4 = uVar4 - 1, uVar4 == 0)) goto code_r0x0001c424;
                    do {
                        if (*(arg3 + uVar4) == '-') break;
                        uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                    goto code_r0x0001c41f;
                }
            }
code_r0x0001c424:
            piVar6 = piVar6 + 1;
            arg3 = *piVar6;
        } while (arg3 != NULL);
    }
    return NULL;
}


/* fcn.0001a86c @ 0x1a86c */

ulong fcn.0001a86c(int64_t arg1,uint32_t arg2)

{
    char16_t cVar1;
    uint64_t extraout_RAX;
    char16_t *pcVar2;
    int64_t iVar3;
    uint in_register_00000014;
    char16_t cVar4;
    
    cVar4 = L'\0';
    if (((arg1 == 0) || (1000000 < CONCAT44(in_register_00000014,arg2))) || (CONCAT44(in_register_00000014,arg2) == 0)
       ) {
        return 0x8000000000000002;
    }
    pcVar2 = L"GUID=";
    fcn.0001a838(0x1f7f0,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (pcVar2 <= arg1) {
        if (arg1 < pcVar2 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (pcVar2 < arg1) goto code_r0x0001a8dd;
    }
    if (pcVar2 < arg1 + CONCAT44(in_register_00000014,arg2) * 2) {
        return 0x800000000000000f;
    }
code_r0x0001a8dd:
    cVar1 = L'G';
    iVar3 = pcVar2 - arg1;
    do {
        *arg1 = cVar1;
        arg1 = arg1 + 2;
        cVar1 = *(iVar3 + arg1);
    } while (cVar1 != L'\0');
    *arg1 = cVar4;
    return 0;
}


/* fcn.0001a778 @ 0x1a778 */

int64_t fcn.0001a778(int64_t arg1,uint32_t arg2,uint32_t arg3)

{
    uint in_register_00000014;
    uint16_t *puVar1;
    uint in_R8;
    uint64_t uVar2;
    
    uVar2 = CONCAT44(in_R8,arg3);
    puVar1 = CONCAT44(in_register_00000014,arg2);
    if (uVar2 == 0) {
        return 0;
    }
    for (; (((*arg1 != 0 && (*puVar1 != 0)) && (*arg1 == *puVar1)) && (1 < uVar2)); uVar2 = uVar2 - 1) {
        arg1 = arg1 + 2;
        puVar1 = puVar1 + 1;
    }
    return *arg1 - *puVar1;
}


/* fcn.0001e0dc @ 0x1e0dc */

int64_t fcn.0001e0dc(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iStackX_10;
    int64_t aiStackX_18 [2];
    
    aiStackX_18[0] = arg2;
    if ((*0x1f958 != 0) ||
       ((iStackX_10 = arg1, iVar1 = (**(*0x1f920 + 0x140))(0x1e930,0,0x1f958), -1 < iVar1 && (*0x1f958 != 0)))) {
        iStackX_10 = 0;
        iVar1 = (**(*0x1f958 + 8))(*0x1f958,&iStackX_10,aiStackX_18,1,0x1e840,0x1ef90);
        if (-1 < iVar1) {
            iVar1 = fcn.0001ab08(2);
            return iVar1;
        }
        if ((iVar1 == -0x7ffffffffffffffb) && (iVar1 = fcn.0001ab08(iStackX_10), iVar1 != 0)) {
            iVar2 = (**(*0x1f958 + 8))(*0x1f958,&iStackX_10,iVar1,1,0x1e840,0x1ef90);
            if (iVar2 < 0) {
                iVar1 = 0;
            }
            return iVar1;
        }
    }
    return 0;
}


