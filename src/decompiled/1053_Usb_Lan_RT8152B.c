// decompiled by r2ghidra: 1053_Usb_Lan_RT8152B.pe32
// functions: 113

/* entry0 @ 0x1103c */

int64_t entry0(int64_t arg1,int64_t arg2)

{
    int64_t arg2_00;
    int64_t iVar1;
    int64_t iStackX_8;
    
    iVar1 = 0;
    *0x2a998 = arg2;
    (**(*(arg2 + 0x60) + 0x50))(0x201,0x10,0x23808,0,0x2a990);
    *0x2a980 = arg1;
    if (arg1 == 0) {
        fcn.00023788(0x2a150,0x2c,0x2a128);
    }
    *0x2a978 = *(arg2 + 0x60);
    *0x2a970 = arg2;
    if (*0x2a978 == 0) {
        fcn.00023788(0x2a150,0x38,0x2a1a0);
    }
    *0x2a988 = *(arg2 + 0x58);
    if (*0x2a988 == 0) {
        fcn.00023788(0x2a1d0,0x29,0x2a1b8);
    }
    arg2_00 = (**(*0x2a978 + 0x98))(arg1,0x25000,&iStackX_8);
    if (arg2_00 < 0) {
        fcn.000236d0(0x80000000,0x276c0,arg2_00,iVar1);
        fcn.00023788(0x27710,0x74,0x276e8);
    }
    *(iStackX_8 + 0x58) = 0x11004;
    iVar1 = fcn.0001117c(arg1);
    if ((iVar1 < 0) && (*0x2a990 != 0)) {
        (**(*(arg2 + 0x60) + 0x70))();
    }
    return iVar1;
}


/* fcn.00011d88 @ 0x11d88 */

//WARNING: Variable defined which should be unmapped: var_10h

int64_t fcn.00011d88(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iStackX_10;
    uint64_t uStackX_18;
    int64_t var_28h;
    uint32_t var_30h;
    int64_t var_38h;
    ulong uStack_38;
    ulong uStack_30;
    int64_t var_bp_20h;
    int64_t var_18h;
    int64_t var_10h;
    
    iVar1 = (**(*0x2a978 + 0x138))(0,0,0,&uStackX_18,&iStackX_10);
    if (-1 < iVar1) {
        uVar2 = 0;
        if (uStackX_18 != 0) {
            do {
                (**(*0x2a978 + 0x110))(*(iStackX_10 + uVar2 * 8),arg1,0);
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_18);
        }
        uVar2 = 0;
        if (uStackX_18 != 0) {
            do {
                iVar1 = (**(*0x2a978 + 0x98))(*(iStackX_10 + uVar2 * 8),0x25060,&var_28h);
                if ((-1 < iVar1) && (*(var_28h + 0x20) == arg1)) {
                    (**(*0x2a978 + 0x90))(arg1,0x25060);
                    iVar1 = (**(*0x2a978 + 0x98))(*(iStackX_10 + uVar2 * 8),0x25070,&uStack_38);
                    if (-1 < iVar1) {
                        (**(*0x2a978 + 0x90))(arg1,0x25070,uStack_38);
                    }
                    iVar1 = (**(*0x2a978 + 0x98))(*(iStackX_10 + uVar2 * 8),0x25020,&uStack_30);
                    if (-1 < iVar1) {
                        (**(*0x2a978 + 0x90))(arg1,0x25020,uStack_30);
                    }
                    iVar1 = (**(*0x2a978 + 0x98))(*(iStackX_10 + uVar2 * 8),0x25010,&var_bp_20h);
                    if (-1 < iVar1) {
                        (**(*0x2a978 + 0x90))(arg1,0x25010,var_bp_20h);
                    }
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < uStackX_18);
        }
        if (iStackX_10 != 0) {
            (**(*0x2a978 + 0x48))();
        }
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00023788 @ 0x23788 */

void fcn.00023788(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar auStack_208 [520];
    
    if (*0x2a968 != '\0') {
        return;
    }
    fcn.00023e54(auStack_208,0x200,0x2a110,0x27758);
    if ((*0x2a998 != 0) && (iVar1 = *(*0x2a998 + 0x50), iVar1 != 0)) {
        (**(iVar1 + 8))(iVar1,auStack_208);
    }
    do {
        func_0x00011000();
    } while( true );
}


/* fcn.000236d0 @ 0x236d0 */

void fcn.000236d0(int64_t noname_0,int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_18 = arg2;
    iStackX_20 = arg3;
    fcn.000236f4(noname_0,arg1,&iStackX_18);
    return;
}


/* fcn.000236f4 @ 0x236f4 */

void fcn.000236f4(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uchar auStack_208 [512];
    
    if (*0x2a968 == '\0') {
        if (arg2 == 0) {
            fcn.00023788(0x2a0d0,0x5d,0x2a0b8);
        }
        if ((arg1 & 0x80000042U) != 0) {
            fcn.00023de0(auStack_208,0x200,arg2,arg3);
            if ((*0x2a998 != 0) && (iVar1 = *(*0x2a998 + 0x50), iVar1 != 0)) {
                (**(iVar1 + 8))(iVar1,auStack_208);
            }
        }
    }
    return;
}


/* fcn.0001117c @ 0x1117c */

int64_t fcn.0001117c(int64_t arg1)

{
    int64_t arg2;
    int64_t arg3;
    
    arg3 = 0;
    *0x253c0 = arg1;
    *0x253c8 = arg1;
    arg2 = (**(*0x2a978 + 0x148))(0x253c8,0x25060,0x253a0);
    if (arg2 < 0) {
        fcn.000236d0(0x80000000,0x276c0,arg2,arg3);
        fcn.00023788(0x2a288,0x3f,0x276e8);
    }
    else {
        arg2 = (**(*0x2a978 + 0x148))(0x253c8,0x25070,0x27638,0x25020,0x27620,0x25010,0x276b0,0);
    }
    return arg2;
}


/* fcn.000232c8 @ 0x232c8 */

int64_t fcn.000232c8(int64_t arg1,int64_t arg2)

{
    if (arg2 != 0) {
        if (arg1 == 0) {
            fcn.00023788(0x29f40,0x2f,0x29f28);
        }
        if (-arg1 < arg2) {
            fcn.00023788(0x29f40,0x30,0x29f80);
        }
        arg1 = fcn.00023628(arg1,arg2,0);
    }
    return arg1;
}


/* fcn.00020240 @ 0x20240 */

void fcn.00020240(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    char cVar3;
    uint16_t uVar4;
    char cVar5;
    char *pcVar6;
    
    pcVar1 = *0x2a960;
    cVar5 = (*0x2a960)[7];
    if (arg1 != 0) {
        cVar2 = '\0';
        cVar3 = '\0';
        (*0x2a960)[7] = cVar5 + '\x01';
        uVar4 = pcVar1[4];
        pcVar6 = pcVar1;
        if (pcVar1[4] != 0) {
            do {
                cVar3 = cVar2 + *pcVar6;
                uVar4 = uVar4 - 1;
                pcVar6 = pcVar6 + 1;
                cVar2 = cVar3;
            } while (uVar4 != 0);
        }
        pcVar1[5] = pcVar1[5] - cVar3;
        return;
    }
    if (cVar5 != '\0') {
        (*0x2a960)[7] = cVar5 + -1;
    }
    uVar4 = pcVar1[4];
    cVar5 = '\0';
    pcVar6 = pcVar1;
    if (pcVar1[4] != 0) {
        do {
            cVar5 = cVar5 + *pcVar6;
            uVar4 = uVar4 - 1;
            pcVar6 = pcVar6 + 1;
        } while (uVar4 != 0);
    }
    pcVar1[5] = pcVar1[5] - cVar5;
    return;
}


/* fcn.00011f38 @ 0x11f38 */

int64_t fcn.00011f38(int64_t arg1)

{
    uint8_t uVar1;
    bool bVar2;
    bool bVar3;
    bool bVar4;
    int64_t iVar5;
    uint8_t uVar6;
    uchar auStackX_8 [2];
    uint8_t uStackX_a;
    uint8_t uStackX_b;
    
    iVar5 = (**(*(arg1 + 0x1308) + 0x30))(*(arg1 + 0x1308),arg1 + 0x13f2);
    if (iVar5 < 0) {
        return iVar5;
    }
    iVar5 = (**(*(arg1 + 0x1308) + 0x40))(*(arg1 + 0x1308),arg1 + 0x1404);
    if (iVar5 < 0) {
        return iVar5;
    }
    uVar1 = *(arg1 + 0x1408);
    bVar4 = false;
    bVar2 = false;
    bVar3 = false;
    uVar6 = 0;
    if (uVar1 != 0) {
        do {
            iVar5 = (**(*(arg1 + 0x1308) + 0x48))(*(arg1 + 0x1308),uVar6,auStackX_8);
            if (-1 < iVar5) {
                if ((uStackX_b & 3) == 2) {
                    if ((uStackX_a & 0x80) == 0) {
                        bVar2 = true;
                    }
                    else {
                        bVar3 = true;
                    }
                    fcn.0002322c((-((uStackX_a & 0x80) != 0) & 0xfffffffffffffff9) + 0x1317 + arg1,auStackX_8,7);
                }
                else if ((uStackX_b & 3) == 3) {
                    fcn.0002322c(arg1 + 0x140d,auStackX_8,7);
                    bVar4 = true;
                }
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < uVar1);
        if (bVar2) goto code_r0x00012045;
    }
    iVar5 = -0x7ffffffffffffff2;
code_r0x00012045:
    if (!bVar3) {
        iVar5 = -0x7ffffffffffffff2;
    }
    if (!bVar4) {
        iVar5 = -0x7ffffffffffffff2;
    }
    return iVar5;
}


/* fcn.00011b38 @ 0x11b38 */

//WARNING: Variable defined which should be unmapped: var_17h
//WARNING: Variable defined which should be unmapped: var_9h

int64_t fcn.00011b38(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uchar uVar2;
    int64_t iVar3;
    uint16_t uVar4;
    int64_t arg1_00;
    int64_t var_17h;
    int64_t iStackX_20;
    int32_t var_77h;
    int64_t var_7fh;
    int8_t in_stack_ffffffffffffff98;
    int64_t in_stack_ffffffffffffffa0;
    int in_stack_ffffffffffffffa8;
    uint uStack_48;
    uchar auStack_44 [51];
    int64_t var_9h;
    
    *(arg3 + 0x1348) = 0;
    *(arg3 + 0x1350) = 0;
    *(arg3 + 0x1360) = 0;
    *(arg3 + 0x1368) = 0;
    *(arg3 + 0x1370) = 0;
    *(arg3 + 0x1358) = 0;
    *(arg3 + 0x1340) = 0x11b28;
    *(arg3 + 0x50) = *(arg3 + 0x13fa);
    *(arg3 + 0x52) = *(arg3 + 0x13fc);
    *(arg3 + 0x1192) = 0x31;
    *(arg3 + 0x1300) = arg3;
    fcn.000232c8(&stack0xffffffffffffff98,0x20);
    cVar1 = fcn.0001466c(arg3);
    if (cVar1 == '\0') {
        iVar3 = -0x7ffffffffffffff9;
    }
    else {
        fcn.00019974(arg3);
        if ((*(arg3 + 5000) == 0xf) || (*(arg3 + 5000) == 0x10)) {
            fcn.0002107c(arg3,4,0xcfd8,0,in_stack_ffffffffffffff98,in_stack_ffffffffffffffa0,
                         in_stack_ffffffffffffffa8);
            *(arg3 + 0x1533) = 0;
        }
        fcn.00012764(arg3);
        if (*(arg3 + 0x1533) == '\x01') {
            uVar2 = fcn.0001f024(arg3);
            *(arg3 + 0x1547) = uVar2;
        }
        iVar3 = fcn.00012998(arg3);
        if (-1 < iVar3) {
            fcn.0002322c(&stack0xffffffffffffff98,arg3 + 0xfc,6);
            fcn.00015f08(arg3);
            *(arg3 + 0x1340) = 0;
            *(arg3 + 0x1358) = 0;
            fcn.000232c8(&uStack_48,0x25);
            fcn.0002322c(auStack_44,&stack0xffffffffffffff98,0x20);
            uStack_48 = 0x250b03;
            arg1_00 = arg2;
            while( true ) {
                cVar1 = fcn.00023858(arg1_00);
                if (cVar1 != '\0') break;
                if (arg1_00 == 0) {
                    fcn.00023788(0x2a240,200,0x2a228);
                }
                iVar3 = fcn.00023810(arg1_00);
                arg1_00 = arg1_00 + iVar3;
            }
            uVar4 = arg1_00 - arg2;
            iVar3 = (**(*0x2a978 + 0x40))(4,uVar4 + 0x29,&iStackX_20);
            if (iVar3 == 0) {
                *arg1 = iStackX_20;
                fcn.0002322c(iStackX_20,arg2,uVar4);
                iStackX_20 = iStackX_20 + uVar4;
                fcn.0002322c(iStackX_20,&uStack_48,0x25);
                iStackX_20 = iStackX_20 + 0x25;
                fcn.0002322c(iStackX_20,arg1_00,4);
                iVar3 = 0;
            }
        }
    }
    return iVar3;
}


/* fcn.000122d0 @ 0x122d0 */

ulong fcn.000122d0(int64_t arg1)

{
    int16_t iVar1;
    int iVar2;
    int iVar3;
    
    iVar3 = *(arg1 + 5000);
    *(arg1 + 0x1172) = 0x1f0;
    *(arg1 + 0x1176) = 0x400;
    if (iVar3 < 9) {
        if (iVar3 == 8) goto code_r0x00012344;
        if (iVar3 != 1) {
            if ((iVar3 != 2) && (iVar3 != 3)) {
                iVar2 = iVar3 + -4;
                goto code_r0x00012333;
            }
            goto code_r0x00012344;
        }
        *(arg1 + 0x117a) = 0xa08;
        if (*(arg1 + 0x1532) != '\0') {
            *(arg1 + 0x150e) = 0x200;
        }
code_r0x00012369:
        if (((iVar3 != 1) && (iVar3 != 2)) && (iVar3 != 3)) {
            iVar3 = iVar3 + -4;
code_r0x0001237b:
            if (((iVar3 != 0) && (iVar3 != 1)) && ((iVar3 != 2 && (iVar3 != 3)))) goto code_r0x00012423;
        }
    }
    else {
        if (((iVar3 == 9) || (iVar3 == 10)) || (iVar3 == 0xb)) {
code_r0x00012344:
            *(arg1 + 0x117a) = 0x1808;
            if (*(arg1 + 0x1532) != '\0') {
                *(arg1 + 0x150e) = 8;
            }
        }
        else {
            iVar2 = iVar3 + -0xd;
code_r0x00012333:
            if (((iVar2 == 0) || (iVar2 == 1)) || ((iVar2 == 2 || (iVar2 == 3)))) goto code_r0x00012344;
        }
        if (iVar3 < 9) {
            if (iVar3 != 8) goto code_r0x00012369;
        }
        else if (((iVar3 != 9) && (iVar3 != 10)) && (iVar3 != 0xb)) {
            iVar3 = iVar3 + -0xd;
            goto code_r0x0001237b;
        }
    }
    *(arg1 + 0x1174) = *(arg1 + 0x117a) + 2000;
    if (*(arg1 + 0x1532) == '\0') {
        iVar1 = *(arg1 + 0x117b) + 0x7d4;
    }
    else {
        iVar1 = -0x4000;
    }
    *(arg1 + 0x1178) = iVar1;
code_r0x00012423:
    (**(*0x2a978 + 0x40))(4,*(arg1 + 0x1174) * 0x1f0,arg1 + 0x68);
    (**(*0x2a978 + 0x40))(4,*(arg1 + 0x1174),arg1 + 0x78);
    (**(*0x2a978 + 0x40))(4,2000,arg1 + 0x88);
    (**(*0x2a978 + 0x40))(4,*(arg1 + 0x1178) << 10,arg1 + 0x70);
    if (*(arg1 + 0x1532) != '\0') {
        (**(*0x2a978 + 0x40))(4,0x800,arg1 + 0x90);
        (**(*0x2a978 + 0x40))(4,0x800,arg1 + 0x98);
    }
    *(arg1 + 0x1194) = 0;
    *(arg1 + 0x14c) = 0;
    return 0;
}


/* fcn.0002041c @ 0x2041c */

void fcn.0002041c(uint32_t arg1)

{
    ulong *arg3;
    int16_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    char16_t *arg4;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    arg4 = NULL;
    iVar4 = 0;
    if (*0x27670 != -1) {
        iVar3 = 0;
        iVar1 = *0x27670;
        do {
            if (((*(iVar2 + 0x1f8) == iVar1) && (*(iVar2 + 0x1fa) == *(iVar3 + 0x27672))) &&
               (arg4 = *(iVar3 + 0x27678), arg4 != NULL)) break;
            iVar4 = iVar4 + 1;
            iVar3 = iVar4 * 0x10;
            iVar1 = *(iVar3 + 0x27670);
        } while (iVar1 != -1);
    }
    arg3 = iVar2 + 0x1700;
    *arg3 = 0;
    if (arg4 == NULL) {
        *(iVar2 + 0x160) = 0;
        fcn.00023a4c(0x29bd4,*0x27648,arg3,0x29c50);
        arg4 = L"Realtek USB Ethernet Controller";
    }
    else {
        *(iVar2 + 0x160) = arg4;
        fcn.00023a4c(0x29bd4,*0x27648,arg3,arg4);
    }
    fcn.00023a4c(0x29bd0,*0x27630,arg3,arg4);
    return;
}


/* fcn.00020664 @ 0x20664 */

//WARNING: Removing unreachable block (ram,0x000206be)
//WARNING: Removing unreachable block (ram,0x000206dd)
//WARNING: Removing unreachable block (ram,0x000206fe)
//WARNING: Removing unreachable block (ram,0x00020720)
//WARNING: Removing unreachable block (ram,0x00020736)
//WARNING: Removing unreachable block (ram,0x00020729)
//WARNING: Removing unreachable block (ram,0x00020748)
//WARNING: Removing unreachable block (ram,0x00020772)
//WARNING: Removing unreachable block (ram,0x0002078b)
//WARNING: Removing unreachable block (ram,0x0002077e)
//WARNING: Removing unreachable block (ram,0x0002079d)
//WARNING: Removing unreachable block (ram,0x0002074b)
//WARNING: Removing unreachable block (ram,0x0002076b)

int64_t fcn.00020664(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    int64_t in_R8;
    
    fcn.00021650(arg1,in_RDX,in_R8,0x124);
    iVar1 = fcn.00021650(arg1,in_RDX,in_R8,0x128);
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.0001466c @ 0x1466c */

ulong fcn.0001466c(int64_t arg1)

{
    int iVar1;
    uint32_t arg_60h;
    int64_t iVar2;
    uint32_t arg1_00;
    uint32_t uVar3;
    int8_t unaff_R14B;
    int64_t unaff_retaddr;
    uint32_t in_stack_00000008;
    int32_t var_2h;
    
    *(arg1 + 5000) = 0;
    arg1_00 = arg1;
    iVar2 = fcn.0002107c(arg1_00,4,0xe610,0,unaff_R14B,unaff_retaddr,in_stack_00000008);
    if (iVar2 < 0) {
        return 0;
    }
    arg_60h = in_stack_00000008 >> 0x10 & 0x7cf0;
    uVar3 = in_stack_00000008 >> 0x10 & 0x7000;
    if (arg_60h == 0x4c00) {
        *(arg1 + 5000) = 2;
    }
    else if (arg_60h == 0x4c10) {
        *(arg1 + 5000) = 3;
    }
    else if (arg_60h == 0x4800) {
        *(arg1 + 5000) = 4;
    }
    if (uVar3 == 0x5000) {
        if (arg_60h == 0x5c00) {
            *(arg1 + 5000) = 6;
            goto code_r0x00014833;
        }
        if (arg_60h == 0x5c10) {
            *(arg1 + 5000) = 7;
            goto code_r0x00014833;
        }
        if (arg_60h == 0x5c20) {
            *(arg1 + 5000) = 8;
            goto code_r0x00014833;
        }
        if (arg_60h == 0x5c30) {
            *(arg1 + 5000) = 9;
        }
    }
    if (arg_60h == 0x6000) {
        *(arg1 + 5000) = 10;
    }
    else if (arg_60h == 0x6010) {
        *(arg1 + 5000) = 0xb;
    }
    if (uVar3 == 0x7000) {
        *(arg1 + 0x1550) = 0;
        if (arg_60h == 0x7010) {
            *(arg1 + 5000) = 0xc;
        }
        else if (arg_60h == 0x7020) {
            *(arg1 + 5000) = 0xd;
        }
        else if (arg_60h == 0x7030) {
            *(arg1 + 5000) = 0xe;
        }
        else {
            if (arg_60h != 0x7410) {
                if (arg_60h != 0x7420) goto code_r0x000147ed;
                *(arg1 + 0x1550) = 1;
            }
            *(arg1 + 5000) = 0xf;
        }
code_r0x000147ed:
        fcn.0002107c(arg1_00,4,0xd81c,0,unaff_R14B,unaff_retaddr,arg_60h);
        if (arg_60h < 0) {
            *(arg1 + 0x154c) = 1;
        }
    }
    if (arg_60h == 0x6400) {
        *(arg1 + 5000) = 0x10;
    }
code_r0x00014833:
    fcn.0002107c(arg1_00,4,0xd818,0,unaff_R14B,unaff_retaddr,arg_60h);
    iVar1 = *(arg1 + 5000);
    *(arg1 + 0x138c) = arg_60h >> 0x10 & 0xfef0;
    if ((iVar1 == 10) || (iVar1 == 0xb)) {
        iVar2 = fcn.0002107c(arg1_00,4,0xdc00,3,unaff_R14B,unaff_retaddr,arg_60h);
        if (iVar2 < 0) {
            return 0;
        }
        *(arg1 + 0x138e) = arg_60h;
    }
    else if ((iVar1 == 0xd) || (iVar1 == 0xe)) {
        iVar2 = fcn.0002107c(arg1_00,4,0xdc48,3,unaff_R14B,unaff_retaddr,arg_60h);
        if (iVar2 < 0) {
            return 0;
        }
        *(arg1 + 0x138e) = arg_60h & 7;
    }
    if (*(arg1 + 5000) == 0) {
        return 0;
    }
    return 1;
}


/* fcn.00019974 @ 0x19974 */

void fcn.00019974(int64_t arg1)

{
    int iVar1;
    uchar uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    int iVar5;
    int8_t unaff_DIL;
    uchar uVar6;
    int64_t unaff_retaddr;
    uint32_t in_stack_00000008;
    
    iVar1 = *(arg1 + 5000);
    uVar6 = 0;
    *(arg1 + 0x150b) = 0;
    *(arg1 + 0x154e) = 1;
    if (iVar1 < 10) {
        if (iVar1 == 9) goto code_r0x000199e5;
        if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) {
            iVar5 = iVar1 + -5;
            goto code_r0x000199cf;
        }
code_r0x000199e0:
        uVar2 = uVar6;
    }
    else {
        if ((iVar1 != 10) && (iVar1 != 0xb)) {
            iVar5 = iVar1 + -0xd;
code_r0x000199cf:
            if (((iVar5 != 0) && (iVar5 != 1)) && ((iVar5 != 2 && (iVar5 != 3)))) goto code_r0x000199e0;
        }
code_r0x000199e5:
        uVar2 = 1;
    }
    *(arg1 + 0x119a) = uVar2;
    *(arg1 + 0x1511) = 0;
    if (iVar1 < 9) {
        if ((((iVar1 != 8) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 != 4)) {
            iVar5 = iVar1 + -5;
            goto code_r0x00019a29;
        }
code_r0x00019a38:
        uVar6 = 1;
    }
    else {
        if (((iVar1 == 9) || (iVar1 == 10)) || (iVar1 == 0xb)) goto code_r0x00019a38;
        iVar5 = iVar1 + -0xd;
code_r0x00019a29:
        if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) goto code_r0x00019a38;
    }
    *(arg1 + 0x11ee) = uVar6;
    uVar4 = 0;
    if (iVar1 < 10) {
        if ((((iVar1 != 9) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 != 4)) {
            iVar5 = iVar1 + -5;
            goto code_r0x00019a6a;
        }
code_r0x00019a7e:
        uVar3 = 1;
    }
    else {
        if ((iVar1 == 10) || (iVar1 == 0xb)) goto code_r0x00019a7e;
        iVar5 = iVar1 + -0xd;
code_r0x00019a6a:
        if (((iVar5 == 0) || (iVar5 == 1)) || ((iVar5 == 2 || (uVar3 = uVar4, iVar5 == 3)))) goto code_r0x00019a7e;
    }
    *(arg1 + 0x1530) = uVar3;
    if (iVar1 < 9) {
        if (iVar1 == 8) goto code_r0x00019ace;
        if ((((iVar1 != 1) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar5 = iVar1 + -4, iVar5 != 0))
        goto code_r0x00019aba;
code_r0x00019ac9:
        uVar3 = uVar4;
    }
    else {
        if (((iVar1 != 9) && (iVar1 != 10)) && ((iVar1 != 0xb && (iVar5 = iVar1 + -0xd, iVar5 != 0)))) {
code_r0x00019aba:
            if (((iVar5 != 1) && (iVar5 != 2)) && (iVar5 != 3)) goto code_r0x00019ac9;
        }
code_r0x00019ace:
        uVar3 = 1;
    }
    *(arg1 + 0x1531) = uVar3;
    if (iVar1 < 9) {
        if ((((((iVar1 == 8) || (iVar1 == 1)) || (iVar1 == 2)) || ((iVar1 == 3 || (iVar1 == 4)))) || (iVar1 == 5)) ||
           ((iVar1 == 6 || (iVar1 == 7)))) goto code_r0x00019b02;
    }
    else if ((iVar1 == 9) || ((iVar1 == 10 || (iVar1 == 0xb)))) {
code_r0x00019b02:
        *(arg1 + 0x1546) = 0;
    }
    else if ((((iVar1 == 0xd) || (iVar1 == 0xe)) || (iVar1 == 0xf)) || (iVar1 == 0x10)) {
        *(arg1 + 0x1532) = 1;
        *(arg1 + 0x1546) = 0;
        goto code_r0x00019b10;
    }
    *(arg1 + 0x1532) = 0;
code_r0x00019b10:
    if (((iVar1 == 5) || (iVar1 == 6)) || ((iVar1 == 7 || ((iVar1 == 8 || (iVar1 == 9)))))) {
        if ((*(arg1 + 0x138c) == 0x1000) || (*(arg1 + 0x50) == 0x17ef)) {
            in_stack_00000008 = 0;
            fcn.0002107c(arg1,4,0xcfd8,0,unaff_DIL,unaff_retaddr,0);
            uVar4 = in_stack_00000008 >> 0x18 & 1;
        }
    }
    else if ((iVar1 == 10) || (iVar1 == 0xb)) {
        uVar4 = 1;
    }
    *(arg1 + 0x1533) = uVar4;
    if ((*(arg1 + 5000) == 0xd) || (*(arg1 + 5000) == 0xe)) {
        fcn.0002107c(arg1,4,0xd850,3,unaff_DIL,unaff_retaddr,in_stack_00000008);
        if ((in_stack_00000008 & 0xc000) == 0x4000) {
            *(arg1 + 0x154d) = 1;
        }
        else if ((in_stack_00000008 & 0xc000) == 0x8000) {
            *(arg1 + 0x154d) = 0;
        }
    }
    return;
}


/* fcn.0002107c @ 0x2107c */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.0002107c(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_50h,int64_t arg_58h,
                    int arg_60h)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int aiStackX_8 [2];
    uint32_t var_30h;
    int64_t in_stack_00000030;
    int in_stack_00000038;
    ushort uStack_38;
    ushort uStack_36;
    uint16_t uStack_34;
    uint16_t uStack_32;
    int64_t iStack_30;
    int16_t var_bp_10h;
    int16_t var_eh;
    int16_t var_ch;
    int16_t var_ah;
    int64_t var_8h;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iStack_30 = 0;
    if (*(iVar2 + 0x14f8) == 0) {
        uVar3 = arg2;
        if ((*(iVar2 + 5000) != 1) && ((arg2 & 3U) != 0)) {
            uVar3 = (uVar3 - (uVar3 & 3)) + 4;
        }
        (**(*0x2a978 + 0x40))(4,uVar3,&iStack_30);
        uStack_34 = var_30h << 8 | arg4;
        iVar4 = 0;
        uStack_38 = 0x5c0;
        uStack_36 = arg3;
        uStack_32 = uVar3;
        do {
            aiStackX_8[0] = 0;
            iVar1 = (***(iVar2 + 0x1308))
                              (*(iVar2 + 0x1308),&uStack_38,0,in_stack_00000038 * 1000,iStack_30,uVar3,aiStackX_8)
            ;
            if (-1 < iVar1) {
                fcn.0002322c(in_stack_00000030,iStack_30,arg2 & 0xffff);
                goto code_r0x00021186;
            }
        } while ((aiStackX_8[0] == 0x10) && (iVar4 = iVar4 + 1, iVar4 < 2));
        *(iVar2 + 0x14f8) = *(iVar2 + 0x14f8) + 1;
code_r0x00021186:
        (**(*0x2a978 + 0x48))(iStack_30);
    }
    else {
        iVar1 = -0x7ffffffffffffff9;
    }
    return iVar1;
}


/* fcn.00012764 @ 0x12764 */

//WARNING: Removing unreachable block (ram,0x00012923)
//WARNING: Removing unreachable block (ram,0x0001295e)

int64_t fcn.00012764(int64_t arg1)

{
    int64_t arg1_00;
    int iVar1;
    int64_t iVar2;
    int iVar3;
    uint32_t arg1_01;
    int unaff_R13D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    uint32_t uVar4;
    uchar auStackX_10 [8];
    uint32_t var_40h;
    int64_t var_48h;
    
    iVar1 = *(arg1 + 5000);
    uVar4 = 0;
    if (iVar1 < 9) {
        if (iVar1 != 8) {
            if (iVar1 == 1) {
                uVar4 = 0;
                goto code_r0x000127cf;
            }
            if ((iVar1 != 2) && (iVar1 != 3)) {
                iVar3 = iVar1 + -4;
                goto code_r0x000127b5;
            }
        }
    }
    else if (((iVar1 != 9) && (iVar1 != 10)) && (iVar1 != 0xb)) {
        iVar3 = iVar1 + -0xd;
code_r0x000127b5:
        if (((iVar3 != 0) && (iVar3 != 1)) && ((iVar3 != 2 && (iVar3 != 3)))) goto code_r0x000127cf;
    }
    uVar4 = 0xd000;
code_r0x000127cf:
    arg1_00 = arg1 + 0xdc;
    fcn.000232c8(arg1_00,0x20);
    arg1_01 = arg1;
    iVar2 = fcn.0002107c(arg1_01,6,uVar4,0,unaff_R15B,unaff_R14,unaff_R13D);
    if (-1 < iVar2) {
        fcn.0002322c(arg1_00,auStackX_10,6);
        fcn.0002322c(arg1 + 0xfc,arg1_00,6);
        if (iVar1 == 8) {
            fcn.0002107c(arg1_01,4,0xcf0c,0,unaff_R15B,unaff_R14,unaff_R13D);
            fcn.000211b0(arg1_01,6,53000,0x3f,unaff_R15B,unaff_R14,unaff_R13D);
            fcn.0002107c(arg1_01,4,0xcf0c,0,unaff_R15B,unaff_R14,unaff_R13D);
            iVar2 = fcn.000211b0(arg1_01,4,0xcf0c,0xf,unaff_R15B,unaff_R14,unaff_R13D);
        }
    }
    return iVar2;
}


/* fcn.0001f024 @ 0x1f024 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

uchar fcn.0001f024(int64_t arg1)

{
    uint8_t uVar1;
    char cVar2;
    uint8_t uVar3;
    uint32_t uVar4;
    int64_t iVar5;
    uint64_t uVar6;
    uchar uVar7;
    uint64_t uVar8;
    uint8_t *puVar9;
    uint64_t uVar10;
    int64_t iVar11;
    uint8_t uVar12;
    uint8_t auStackX_10 [8];
    uint32_t *apuStackX_18 [2];
    int64_t var_48h;
    int64_t var_50h;
    char acStack_48 [16];
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    uVar6 = 0;
    acStack_48[0] = 'q';
    acStack_48[1] = -0x18;
    acStack_48[2] = 'h';
    acStack_48[3] = -0x78;
    apuStackX_18[0] = NULL;
    acStack_48[4] = -0xf;
    acStack_48[5] = -0x1c;
    acStack_48[6] = -0x2d;
    acStack_48[7] = '\x11';
    uVar12 = 0;
    acStack_48[8] = -0x44;
    acStack_48[9] = '\"';
    acStack_48[10] = '\0';
    acStack_48[0xb] = -0x80;
    iVar11 = 4;
    acStack_48[0xc] = -0x39;
    acStack_48[0xd] = '<';
    acStack_48[0xe] = -0x78;
    acStack_48[0xf] = -0x7f;
    (**(*0x2a978 + 0x40))(4,8,apuStackX_18);
    if (*(*0x2a970 + 0x68) != 0) {
        uVar7 = 1;
        iVar5 = *(*0x2a970 + 0x70) - acStack_48;
        uVar10 = uVar6;
        do {
            uVar8 = uVar6;
            while (acStack_48[uVar8] == (acStack_48 + uVar8)[iVar5]) {
                uVar8 = uVar8 + 1;
                if (0xf < uVar8) {
                    puVar9 = *(*(*0x2a970 + 0x70) + 0x10 + uVar10 * 0x18) + 0x10;
                    uVar10 = uVar6;
                    uVar8 = uVar6;
                    iVar5 = iVar11;
                    do {
                        uVar1 = *puVar9;
                        puVar9 = puVar9 + 1;
                        uVar3 = uVar10;
                        uVar10 = uVar10 + 8;
                        uVar4 = uVar8 + (uVar1 << (uVar3 & 0x1f));
                        uVar8 = uVar4;
                        iVar5 = iVar5 + -1;
                    } while (iVar5 != 0);
                    apuStackX_18[0][1] = uVar4;
                    iVar5 = fcn.0002333c(uVar4,0x2811c,4);
                    if (iVar5 == 0) {
                        puVar9 = uVar4 + 0x24;
                        uVar10 = uVar6;
                        uVar8 = uVar6;
                        iVar5 = iVar11;
                        do {
                            uVar1 = *puVar9;
                            puVar9 = puVar9 + 1;
                            uVar3 = uVar10;
                            uVar10 = uVar10 + 8;
                            uVar4 = uVar8 + (uVar1 << (uVar3 & 0x1f));
                            uVar8 = uVar4;
                            iVar5 = iVar5 + -1;
                        } while (iVar5 != 0);
                        apuStackX_18[0][1] = uVar4;
                        iVar5 = fcn.0002333c(uVar4,0x28124,4);
                        if (iVar5 == 0) {
                            puVar9 = uVar4 + 0x28;
                            uVar10 = uVar6;
                            uVar8 = uVar6;
                            iVar5 = iVar11;
                            do {
                                uVar1 = *puVar9;
                                puVar9 = puVar9 + 1;
                                uVar3 = uVar10;
                                uVar10 = uVar10 + 8;
                                uVar4 = uVar8 + (uVar1 << (uVar3 & 0x1f));
                                uVar8 = uVar4;
                                iVar5 = iVar5 + -1;
                            } while (iVar5 != 0);
                            puVar9 = uVar8 + 4;
                            uVar8 = uVar4;
                            apuStackX_18[0][1] = uVar4;
                            *apuStackX_18[0] = 0;
                            uVar10 = uVar6;
                            do {
                                uVar1 = *puVar9;
                                puVar9 = puVar9 + 1;
                                uVar3 = uVar10;
                                uVar10 = uVar10 + 8;
                                *apuStackX_18[0] = *apuStackX_18[0] + (uVar1 << (uVar3 & 0x1f));
                                iVar11 = iVar11 + -1;
                            } while (iVar11 != 0);
                            iVar11 = fcn.0002333c(uVar4,0x2812c,4);
                            if (iVar11 == 0) {
                                uVar10 = uVar6;
                                do {
                                    iVar11 = fcn.0002333c(uVar8,0x28138,9);
                                    if (iVar11 == 0) {
                                        puVar9 = auStackX_10;
                                        uVar10 = uVar6;
                                        do {
                                            uVar4 = uVar6 * 2;
                                            cVar2 = *(uVar4 + 9 + uVar8);
                                            if (cVar2 - 0x30U < 10) {
                                                uVar12 = cVar2 - 0x30U;
                                            }
                                            else if (cVar2 + 0xbfU < 6) {
                                                uVar12 = cVar2 - 0x37;
                                            }
                                            else if (cVar2 + 0x9fU < 6) {
                                                uVar12 = cVar2 + 0xa9;
                                            }
                                            uVar1 = *(uVar4 + 10 + uVar8);
                                            if (uVar1 - 0x30 < 10) {
                                                uVar10 = uVar1 - 0x30;
                                            }
                                            else if (uVar1 + 0xbf < 6) {
                                                uVar10 = uVar1 - 0x37;
                                            }
                                            else if (uVar1 + 0x9f < 6) {
                                                uVar10 = uVar1 - 0x57;
                                            }
                                            uVar4 = uVar6 + 1;
                                            uVar6 = uVar4;
                                            *puVar9 = uVar12 << 4 | uVar10;
                                            puVar9 = puVar9 + 1;
                                        } while (uVar4 < 6);
                                        fcn.0002322c(arg1 + 0xfc,auStackX_10,0x20);
                                        goto code_r0x0001f1de;
                                    }
                                    uVar8 = uVar8 + 1;
                                    uVar4 = uVar10 + 1;
                                    uVar10 = uVar4;
                                } while (uVar4 <= *apuStackX_18[0]);
                            }
                        }
                    }
                    goto code_r0x0001f1db;
                }
            }
            uVar10 = uVar10 + 1;
            iVar5 = iVar5 + 0x18;
        } while (uVar10 < *(*0x2a970 + 0x68));
    }
code_r0x0001f1db:
    uVar7 = 0;
code_r0x0001f1de:
    (**(*0x2a978 + 0x48))(apuStackX_18[0]);
    return uVar7;
}


/* fcn.00012998 @ 0x12998 */

int64_t fcn.00012998(int64_t arg1)

{
    uint32_t arg_60h;
    int64_t iVar1;
    uint32_t arg1_00;
    int iVar2;
    int64_t arg2;
    int8_t unaff_BL;
    int64_t arg4;
    int64_t unaff_retaddr;
    uint32_t in_stack_00000008;
    
    iVar2 = *(arg1 + 5000);
    iVar1 = 0;
    arg1_00 = arg1;
    if (iVar2 < 9) {
        if (iVar2 != 8) {
            if (iVar2 == 1) {
                arg4 = 0;
                arg2 = 6;
                goto code_r0x00012ac6;
            }
            if ((iVar2 != 2) && (iVar2 != 3)) {
                iVar2 = iVar2 + -4;
                goto code_r0x000129d0;
            }
        }
    }
    else if (((iVar2 != 9) && (iVar2 != 10)) && (iVar2 != 0xb)) {
        iVar2 = iVar2 + -0xd;
code_r0x000129d0:
        if (((iVar2 != 0) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) {
            return 0;
        }
    }
    iVar1 = fcn.0002107c(arg1_00,4,0xe81c,0,unaff_BL,unaff_retaddr,in_stack_00000008);
    if (iVar1 < 0) {
        return iVar1;
    }
    arg_60h = 0xc0;
    iVar1 = fcn.000211b0(arg1_00,4,0xe81c,0xf,unaff_BL,unaff_retaddr,0xc0);
    if (iVar1 < 0) {
        return iVar1;
    }
    iVar1 = fcn.000211b0(arg1_00,6,0xc000,0x3f,unaff_BL,unaff_retaddr,arg_60h);
    if (iVar1 < 0) {
        return iVar1;
    }
    in_stack_00000008 = arg_60h & 0xffffff3f;
    arg2 = 4;
    iVar1 = 0xe81c;
    arg4 = 0xf;
code_r0x00012ac6:
    iVar1 = fcn.000211b0(arg1_00,arg2,iVar1,arg4,unaff_BL,unaff_retaddr,in_stack_00000008);
    return iVar1;
}


/* fcn.0002322c @ 0x2322c */

int64_t fcn.0002322c(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    
    if (arg3 != 0) {
        if (~arg1 < arg3 - 1U) {
            fcn.00023788(0x29ea8,0x33,0x29e60);
        }
        if (~arg2 < arg3 - 1U) {
            fcn.00023788(0x29ea8,0x34,0x29ee8);
        }
        if (arg1 != arg2) {
            iVar1 = fcn.00023474(arg1,arg2,arg3);
            return iVar1;
        }
    }
    return arg1;
}


/* fcn.00015f08 @ 0x15f08 */

ulong fcn.00015f08(uint32_t arg1)

{
    int64_t iVar1;
    ulong uVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    int iVar3;
    int unaff_ESI;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    uint32_t auStackX_8 [2];
    uint32_t uStackX_10;
    uint32_t uStackX_18;
    int64_t var_30h;
    int32_t var_38h;
    int32_t var_40h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    iVar3 = *(arg1_00 + 5000);
    if ((((iVar3 == 5) || (iVar3 == 6)) || (iVar3 == 7)) ||
       (((iVar3 == 8 || (iVar3 == 9)) || ((iVar3 == 10 || ((iVar3 == 0xb || (iVar3 == 0x10)))))))) {
        iVar1 = fcn.0002107c(arg1,4,0xe81c,0,unaff_R15B,unaff_R14,unaff_ESI);
        if (-1 < iVar1) {
            uStackX_10 = auStackX_8[0] | 0xc0;
            iVar1 = fcn.000211b0(arg1,4,0xe81c,0xf,unaff_R15B,unaff_R14,unaff_ESI);
            if (-1 < iVar1) {
                fcn.0002107c(arg1,4,0xe820,0,unaff_R15B,unaff_R14,unaff_ESI);
                uStackX_18 = auStackX_8[0] & 0xfff7ffff;
                fcn.000211b0(arg1,4,0xe820,0xf,unaff_R15B,unaff_R14,unaff_ESI);
                fcn.0002107c(arg1,4,0xcbf0,0,unaff_R15B,unaff_R14,unaff_ESI);
                uStackX_18 = auStackX_8[0] | 2;
                fcn.000211b0(arg1,4,0xcbf0,0xf,unaff_R15B,unaff_R14,unaff_ESI);
                uStackX_10 = uStackX_10 & 0xffffff3f;
                fcn.000211b0(arg1,4,0xe81c,0xf,unaff_R15B,unaff_R14,unaff_ESI);
            }
        }
    }
    iVar3 = *(arg1_00 + 5000);
    if (iVar3 < 0xd) {
        if (iVar3 == 0xc) goto code_r0x00016144;
        if (((iVar3 == 7) || (iVar3 == 8)) || (iVar3 == 9)) {
            fcn.00016318(arg1_00);
            fcn.0001aaec(arg1_00);
            fcn.000164e4(arg1_00);
            goto code_r0x00016154;
        }
        if ((iVar3 == 10) || (iVar3 == 0xb)) {
            fcn.000163f8(arg1_00);
            fcn.0001af4c(arg1_00);
            fcn.000169bc(arg1_00);
            goto code_r0x00016154;
        }
    }
    else {
        if ((iVar3 != 0xd) && (iVar3 != 0xe)) {
            if (iVar3 == 0xf) {
                fcn.000163f8(arg1_00);
                fcn.0001d3d8(arg1_00);
            }
            else {
                if (iVar3 != 0x10) goto code_r0x0001615c;
                fcn.00016318(arg1_00);
                fcn.0001d704(arg1_00);
            }
            goto code_r0x00016154;
        }
code_r0x00016144:
        fcn.000163f8(arg1_00);
        fcn.0001b120(arg1_00);
code_r0x00016154:
        fcn.00017950(arg1);
    }
code_r0x0001615c:
    fcn.0001a780(arg1_00);
    if ((*(arg1_00 + 0x154d) != '\0') && ((*(arg1_00 + 5000) == 0xd || (*(arg1_00 + 5000) == 0xe)))) {
        fcn.00020508(arg1_00);
    }
    uVar2 = fcn.00012074(arg1,auStackX_8,arg1_00 + 0xd4);
    iVar3 = 2 - (auStackX_8[0] != '\0');
    *(arg1_00 + 0x1384) = iVar3;
    fcn.00014ae4(arg1_00,CONCAT71(iVar3 >> 8,1));
    fcn.000144ac(arg1_00);
    iVar3 = *(arg1_00 + 5000);
    if (iVar3 < 10) {
        if (iVar3 != 9) {
            if (((iVar3 == 2) || (iVar3 == 3)) || (iVar3 == 4)) goto code_r0x00016283;
            if ((((iVar3 != 5) && (iVar3 != 6)) && (iVar3 != 7)) && (iVar3 != 8)) goto code_r0x000162e5;
        }
        auStackX_8[0] = 0xb000;
        fcn.000211b0(arg1,4,0xe86c,3,unaff_R15B,unaff_R14,unaff_ESI);
        auStackX_8[0] = 0x1c00000;
        fcn.000211b0(arg1,4,0xbc04,0xc,unaff_R15B,unaff_R14,unaff_ESI);
    }
    else if (((((iVar3 != 10) && (iVar3 != 0xb)) && (iVar3 != 0xd)) && ((iVar3 != 0xe && (iVar3 != 0xf)))) &&
            (iVar3 != 0x10)) goto code_r0x000162e5;
code_r0x00016283:
    auStackX_8[0] = 0xa000;
    fcn.000211b0(arg1,4,0xe86c,3,unaff_R15B,unaff_R14,unaff_ESI);
    auStackX_8[0] = 0x1000;
    fcn.000211b0(arg1,4,0xb400,3,unaff_R15B,unaff_R14,unaff_ESI);
code_r0x000162e5:
    fcn.000124ec(arg1_00);
    fcn.000183bc(arg1_00);
    fcn.00014ae4(arg1_00,0);
    fcn.0001a0ec(arg1_00);
    return uVar2;
}


/* fcn.00023810 @ 0x23810 */

ushort fcn.00023810(int64_t arg1)

{
    char *arg1_00;
    uint32_t arg2;
    char *arg3;
    
    if (arg1 == 0) {
        arg3 = "Node != ((void *) 0)";
        arg2 = 0xb0;
        arg1_00 = "d:\\uefi\\edk2\\MdePkg\\Library\\UefiDevicePathLib\\DevicePathUtilities.c";
    }
    else {
        if (arg1 + 2 != NULL) goto code_r0x0002384f;
        arg3 = "Buffer != ((void *) 0)";
        arg2 = 0x1e;
        arg1_00 = "d:\\uefi\\edk2\\MdePkg\\Library\\BaseLib\\Unaligned.c";
    }
    fcn.00023788(arg1_00,arg2,arg3);
code_r0x0002384f:
    return *(arg1 + 2);
}


/* fcn.00023858 @ 0x23858 */

uchar fcn.00023858(int64_t arg1)

{
    uchar uVar1;
    
    uVar1 = 0;
    if (arg1 == 0) {
        fcn.00023788(0x2a240,0x101,0x2a228);
        fcn.00023788(0x2a240,0xe6,0x2a228);
        fcn.00023788(0x2a240,0x81,0x2a228);
    }
    if ((*arg1 == '\x7f') && (*(arg1 + 1) == -1)) {
        uVar1 = 1;
    }
    return uVar1;
}


/* fcn.0002140c @ 0x2140c */

//WARNING: Removing unreachable block (ram,0x000214e9)

void fcn.0002140c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t arg1_00;
    ulong unaff_RBX;
    uint8_t uVar2;
    ulong unaff_R14;
    int64_t unaff_retaddr;
    
    arg1_00 = arg1;
    if (*(arg1 + 5000) == 1) {
        fcn.0002107c(arg1_00,2,arg2 << 8 | 0x60,0,unaff_R14,unaff_retaddr,unaff_RBX);
    }
    else {
        uVar2 = 0;
        iVar1 = fcn.000211b0(arg1_00,4,0xde00,0xf,unaff_R14,unaff_retaddr,unaff_RBX);
        if (-1 < iVar1) {
            while ((iVar1 = fcn.0002107c(arg1_00,4,0xde00,0,unaff_R14,unaff_retaddr,unaff_RBX), -1 < iVar1 &&
                   (uVar2 < 5))) {
                uVar2 = uVar2 + 1;
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(10000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
                }
            }
        }
    }
    return;
}


/* fcn.000211b0 @ 0x211b0 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

int64_t fcn.000211b0(uint32_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int8_t arg_50h,int64_t arg_58h,
                    int arg_60h)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t iVar2;
    uint16_t uVar3;
    int64_t iVar4;
    int aiStackX_8 [2];
    uint32_t var_30h;
    int64_t in_stack_00000030;
    int in_stack_00000038;
    ushort uStack_38;
    ushort uStack_36;
    uint16_t uStack_34;
    uint16_t uStack_32;
    int64_t iStack_30;
    int16_t var_bp_10h;
    int16_t var_eh;
    int16_t var_ch;
    int16_t var_ah;
    int64_t var_8h;
    
    iVar2 = CONCAT44(in_register_0000000c,arg1);
    iStack_30 = 0;
    if (*(iVar2 + 0x14f8) == 0) {
        uVar3 = arg2;
        if ((*(iVar2 + 5000) != 1) && ((arg2 & 3U) != 0)) {
            uVar3 = (uVar3 - (uVar3 & 3)) + 4;
        }
        (**(*0x2a978 + 0x40))(4,uVar3,&iStack_30);
        fcn.0002322c(iStack_30,in_stack_00000030,arg2 & 0xffff);
        uStack_34 = var_30h << 8 | arg4;
        iVar4 = 0;
        uStack_38 = 0x540;
        uStack_36 = arg3;
        uStack_32 = uVar3;
        do {
            aiStackX_8[0] = 0;
            iVar1 = (***(iVar2 + 0x1308))
                              (*(iVar2 + 0x1308),&uStack_38,1,in_stack_00000038 * 1000,iStack_30,uVar3,aiStackX_8)
            ;
            if (-1 < iVar1) goto code_r0x000212bb;
        } while ((aiStackX_8[0] == 0x10) && (iVar4 = iVar4 + 1, iVar4 < 2));
        *(iVar2 + 0x14f8) = *(iVar2 + 0x14f8) + 1;
code_r0x000212bb:
        (**(*0x2a978 + 0x48))(iStack_30);
    }
    else {
        iVar1 = -0x7ffffffffffffff9;
    }
    return iVar1;
}


/* fcn.00014118 @ 0x14118 */

void fcn.00014118(int64_t arg1)

{
    uint32_t arg1_00;
    ulong in_RDX;
    int unaff_EBP;
    int64_t unaff_R12;
    int8_t unaff_R15B;
    int32_t var_bp_28h;
    int64_t var_30h;
    
    fcn.000144ac(arg1);
    fcn.00014ae4(arg1,CONCAT71(in_RDX >> 8,1));
    fcn.000124ec(arg1);
    arg1_00 = arg1;
    fcn.0002107c(arg1_00,4,0xc0b4,0,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.000211b0(arg1_00,4,0xc0b4,0xf,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.000211b0(arg1_00,4,0xc0b4,0xf,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.0002107c(arg1_00,4,0xd4b0,0,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.000211b0(arg1_00,4,0xd4b0,3,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.0002107c(arg1_00,4,0xd4b0,0,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.000211b0(arg1_00,4,0xd4b0,3,unaff_R15B,unaff_R12,unaff_EBP);
    fcn.00012d04(arg1);
    fcn.00014ae4(arg1,0);
    fcn.00014588(arg1);
    return;
}


/* fcn.000144ac @ 0x144ac */

int64_t fcn.000144ac(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    int arg_60h;
    
    arg_60h = 0;
    iVar2 = *(arg1 + 5000);
    if (iVar2 < 9) {
        if (iVar2 == 8) goto code_r0x000144f5;
        if (iVar2 == 1) {
            return 0;
        }
        if ((iVar2 == 2) || (iVar2 == 3)) goto code_r0x000144f5;
        iVar2 = iVar2 + -4;
    }
    else {
        if (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xb)) goto code_r0x000144f5;
        iVar2 = iVar2 + -0xd;
    }
    if (((iVar2 != 0) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) {
        return 0;
    }
code_r0x000144f5:
    iVar1 = fcn.0002107c(arg1,4,0xc010,0,unaff_BL,unaff_retaddr,0);
    if (-1 < iVar1) {
        iVar1 = fcn.000211b0(arg1,4,0xc010,3,unaff_BL,unaff_retaddr,arg_60h);
    }
    return iVar1;
}


/* fcn.00014ae4 @ 0x14ae4 */

ulong fcn.00014ae4(int64_t arg1,int64_t arg2)

{
    ulong uVar1;
    int8_t unaff_DIL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    uVar1 = 0;
    if ((7 < *(arg1 + 5000)) || (*(arg1 + 5000) != 1)) {
        fcn.0002107c(arg1,4,0xe858,0,unaff_DIL,unaff_retaddr,in_stack_00000008);
        uVar1 = fcn.000211b0(arg1,4,0xe858,0xf,unaff_DIL,unaff_retaddr,in_stack_00000008);
    }
    return uVar1;
}


/* fcn.000124ec @ 0x124ec */

//WARNING: Removing unreachable block (ram,0x000126dc)
//WARNING: Removing unreachable block (ram,0x000126f2)
//WARNING: Removing unreachable block (ram,0x000126e5)
//WARNING: Removing unreachable block (ram,0x00012704)
//WARNING: Removing unreachable block (ram,0x00012733)
//WARNING: Removing unreachable block (ram,0x0001269b)

int64_t fcn.000124ec(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int iVar2;
    ulong unaff_R12;
    uint64_t uVar3;
    int64_t unaff_R13;
    ulong unaff_R15;
    int32_t var_30h;
    int32_t var_38h;
    int8_t arg_50h;
    int arg_60h;
    
    arg_60h = unaff_R12;
    arg_50h = unaff_R15;
    iVar2 = *(arg1 + 5000);
    uVar3 = 0;
    arg1_00 = arg1;
    if (iVar2 < 9) {
        if (iVar2 == 8) goto code_r0x00012551;
        if (iVar2 == 1) {
            fcn.000211b0(arg1_00,4,0x2379,0,arg_50h,unaff_R13,arg_60h);
            while( true ) {
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(20000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),20000);
                }
                iVar1 = fcn.0002107c(arg1_00,4,0x2379,0,unaff_R15,unaff_R13,unaff_R12);
                if (iVar1 < 0) break;
                uVar3 = uVar3 + 1;
                if (100 < uVar3) {
                    return -0x7ffffffffffffff9;
                }
            }
            return iVar1;
        }
        if ((iVar2 == 2) || (iVar2 == 3)) goto code_r0x00012551;
        iVar2 = iVar2 + -4;
    }
    else {
        if (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xb)) goto code_r0x00012551;
        iVar2 = iVar2 + -0xd;
    }
    if (((iVar2 != 0) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) {
        return 0;
    }
code_r0x00012551:
    iVar1 = fcn.0002107c(arg1_00,4,0xe810,0,arg_50h,unaff_R13,arg_60h);
    if ((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1_00,4,0xe810,0xf,arg_50h,unaff_R13,arg_60h), -1 < iVar1)) {
        fcn.0002107c(arg1_00,4,0xe810,0,arg_50h,unaff_R13,arg_60h);
    }
    return iVar1;
}


/* fcn.00012d04 @ 0x12d04 */

//WARNING: Removing unreachable block (ram,0x00012f07)

int64_t fcn.00012d04(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int iVar2;
    ulong unaff_RDI;
    int64_t unaff_R14;
    uint8_t uVar3;
    ulong unaff_R15;
    int32_t var_30h;
    int32_t var_38h;
    int8_t arg_50h;
    int arg_60h;
    
    arg_60h = unaff_RDI;
    arg_50h = unaff_R15;
    iVar2 = *(arg1 + 5000);
    uVar3 = 0;
    arg1_00 = arg1;
    if (iVar2 < 9) {
        if (iVar2 == 8) goto code_r0x00012d64;
        if (iVar2 == 1) {
            fcn.0002107c(arg1_00,4,0x2379,0,arg_50h,unaff_R14,arg_60h);
            fcn.000211b0(arg1_00,4,0x2379,0,unaff_R15,unaff_R14,unaff_RDI);
            while( true ) {
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(20000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),20000);
                }
                iVar1 = fcn.0002107c(arg1_00,4,0x2379,0,unaff_R15,unaff_R14,unaff_RDI);
                if (iVar1 < 0) break;
                uVar3 = uVar3 + 1;
                if (100 < uVar3) {
                    return -0x7ffffffffffffff9;
                }
            }
            return iVar1;
        }
        if ((iVar2 == 2) || (iVar2 == 3)) goto code_r0x00012d64;
        iVar2 = iVar2 + -4;
    }
    else {
        if (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xb)) goto code_r0x00012d64;
        iVar2 = iVar2 + -0xd;
    }
    if (((iVar2 != 0) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) {
        return 0;
    }
code_r0x00012d64:
    iVar1 = fcn.0002107c(arg1_00,4,0xe810,0,arg_50h,unaff_R14,arg_60h);
    if (((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1_00,4,0xe810,0xf,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) &&
       (iVar1 = fcn.0002107c(arg1_00,4,0xe858,0,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) {
        iVar1 = fcn.000211b0(arg1_00,4,0xe858,0xf,arg_50h,unaff_R14,arg_60h);
    }
    return iVar1;
}


/* fcn.00014588 @ 0x14588 */

int64_t fcn.00014588(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    int8_t unaff_DIL;
    int64_t unaff_retaddr;
    int arg_60h;
    
    arg_60h = 0;
    iVar2 = *(arg1 + 5000);
    if (iVar2 < 9) {
        if (iVar2 == 8) goto code_r0x000145d1;
        if (iVar2 == 1) {
            return 0;
        }
        if ((iVar2 == 2) || (iVar2 == 3)) goto code_r0x000145d1;
        iVar2 = iVar2 + -4;
    }
    else {
        if (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xb)) goto code_r0x000145d1;
        iVar2 = iVar2 + -0xd;
    }
    if (((iVar2 != 0) && (iVar2 != 1)) && ((iVar2 != 2 && (iVar2 != 3)))) {
        return 0;
    }
code_r0x000145d1:
    iVar1 = fcn.0002107c(arg1,4,0xc010,0,unaff_DIL,unaff_retaddr,0);
    if (-1 < iVar1) {
        iVar1 = fcn.000211b0(arg1,4,0xc010,3,unaff_DIL,unaff_retaddr,arg_60h);
    }
    return iVar1;
}


/* fcn.0001703c @ 0x1703c */

//WARNING: Removing unreachable block (ram,0x000175b6)

void fcn.0001703c(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int64_t arg2;
    int64_t arg4;
    int unaff_R14D;
    int64_t unaff_R15;
    int64_t var_48h;
    int64_t var_50h;
    int32_t var_58h;
    int32_t var_60h;
    int8_t in_stack_ffffffffffffffb8;
    
    arg1_00 = arg1;
    fcn.0002107c(arg1_00,2,0xe908,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    arg2 = 4;
    iVar2 = fcn.000211b0(arg1_00,4,0xfc38,1,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    arg4 = 3;
    if ((((-1 < iVar2) &&
         (iVar2 = fcn.000211b0(arg1_00,4,0xfc28,3,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D), -1 < iVar2))
        && (iVar2 = fcn.000211b0(arg1_00,4,0xfc28,0xc,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D), -1 < iVar2
           )) && ((((iVar2 = fcn.000211b0(arg1_00,4,0xfc2c,3,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D),
                    -1 < iVar2 &&
                    (iVar2 = fcn.000211b0(arg1_00,4,0xfc2c,0xc,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D),
                    -1 < iVar2)) &&
                   ((iVar2 = fcn.000211b0(arg1_00,4,0xfc30,3,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D),
                    -1 < iVar2 &&
                    ((iVar2 = fcn.000211b0(arg1_00,4,0xfc30,0xc,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D),
                     -1 < iVar2 &&
                     (iVar2 = fcn.000211b0(arg1_00,4,0xfc34,3,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D),
                     -1 < iVar2)))))) &&
                  (iVar2 = fcn.000211b0(arg1_00,4,0xfc34,0xc,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D),
                  -1 < iVar2)))) {
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(3000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),3000);
        }
        fcn.000211b0(arg1_00,4,0xfc24,0xc,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    }
    iVar1 = *(arg1 + 5000);
    if (((iVar1 != 7) && (iVar1 != 8)) && (iVar1 != 9)) {
        return;
    }
    if (iVar1 == 7) {
        fcn.000211b0(arg1_00,0x120,0xf800,0xff,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
code_r0x0001746d:
        arg4 = 0x3c;
        iVar2 = 0xfc24;
        arg2 = 0x18;
code_r0x0001747d:
        fcn.000211b0(arg1_00,arg2,iVar2,arg4,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    }
    else {
        if (iVar1 == 8) {
            fcn.000211b0(arg1_00,0x234,0xf800,0x3f,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
            fcn.000211b0(arg1_00,0x18,0xfc24,0x3c,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
            fcn.0002107c(arg1_00,4,0xcfec,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
            fcn.000211b0(arg1_00,4,0xfc36,3,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
            iVar2 = 0xfc38;
            goto code_r0x0001747d;
        }
        if (iVar1 == 9) {
            fcn.000211b0(arg1_00,4,0xd388,3,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
            fcn.000211b0(arg1_00,0x120,0xf800,0x3f,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
            goto code_r0x0001746d;
        }
    }
    fcn.0002107c(arg1_00,4,0xd404,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    fcn.000211b0(arg1_00,4,0xd404,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    fcn.0002107c(arg1_00,4,0xcbdc,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    fcn.000211b0(arg1_00,4,0xcbdc,0xc,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    fcn.0002107c(arg1_00,4,0xcbfc,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    fcn.000211b0(arg1_00,4,0xcbfc,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    if (*(arg1 + 0x1546) == '\0') {
        fcn.000211b0(arg1_00,4,0xd40c,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xd430,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.0002107c(arg1_00,4,0xcbd8,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xcbd8,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.0002107c(arg1_00,4,0xcbdc,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xcbdc,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.0002107c(arg1_00,4,0xe434,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xe434,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    }
    else {
        if (*(arg1 + 0x1546) != '\x01') goto code_r0x00017937;
        fcn.000211b0(arg1_00,4,0xd40c,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xd42c,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xd430,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.0002107c(arg1_00,4,0xcbd8,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xcbd8,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.0002107c(arg1_00,4,0xcbdc,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xcbdc,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.0002107c(arg1_00,4,0xe434,0,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
        fcn.000211b0(arg1_00,4,0xe434,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
    }
    fcn.000211b0(arg1_00,4,0xe434,0xf,in_stack_ffffffffffffffb8,unaff_R15,unaff_R14D);
code_r0x00017937:
    *(arg1 + 0x11f0) = 1;
    return;
}


/* fcn.00012254 @ 0x12254 */

void fcn.00012254(int64_t arg1,int64_t arg2)

{
    *(arg1 + 0x14c) = 0;
    *(arg1 + 0x1194) = 0;
    fcn.000232c8(*(arg1 + 0x68),*(arg1 + 0x1174) * 0x1f0);
    fcn.000232c8(*(arg1 + 0x70),*(arg1 + 0x1178) << 10);
    if (*(arg1 + 0x1532) != '\0') {
        fcn.000232c8(*(arg1 + 0x90),0x800);
        fcn.000232c8(*(arg1 + 0x98),0x800);
    }
    return;
}


/* fcn.0001d9dc @ 0x1d9dc */

//WARNING: Variable defined which should be unmapped: var_bp_20h

void fcn.0001d9dc(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int unaff_EBP;
    int64_t unaff_RDI;
    int8_t unaff_R15B;
    int32_t var_bp_20h;
    int32_t var_28h;
    
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if (((iVar1 == 7) || (iVar1 == 8)) || (iVar1 == 9)) {
code_r0x0001db59:
        fcn.0002107c(arg1_00,4,0xc0bc,0,unaff_R15B,unaff_RDI,unaff_EBP);
        fcn.000211b0(arg1_00,4,0xc0bc,3,unaff_R15B,unaff_RDI,unaff_EBP);
        fcn.000211b0(arg1_00,4,0xe428,3,unaff_R15B,unaff_RDI,unaff_EBP);
        fcn.000211b0(arg1_00,4,0xd2e8,3,unaff_R15B,unaff_RDI,unaff_EBP);
    }
    else {
        if ((iVar1 != 10) && (iVar1 != 0xb)) {
            if ((iVar1 == 0xd) || ((iVar1 == 0xe || (iVar1 == 0xf)))) goto code_r0x0001db59;
            if (iVar1 != 0x10) {
                return;
            }
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0bc,3,unaff_R15B,unaff_RDI,unaff_EBP);
        if (iVar2 < 0) {
            return;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xe428,3,unaff_R15B,unaff_RDI,unaff_EBP);
        if (iVar2 < 0) {
            return;
        }
        iVar2 = fcn.0002107c(arg1_00,4,0xc0c4,0,unaff_R15B,unaff_RDI,unaff_EBP);
        if (iVar2 < 0) {
            return;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0c4,0xf,unaff_R15B,unaff_RDI,unaff_EBP);
        if (iVar2 < 0) {
            return;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xd2e8,3,unaff_R15B,unaff_RDI,unaff_EBP);
        if (iVar2 < 0) {
            return;
        }
    }
    fcn.000211b0(arg1_00,4,0xd2cc,0xf,unaff_R15B,unaff_RDI,unaff_EBP);
    return;
}


/* fcn.00014bac @ 0x14bac */

int64_t fcn.00014bac(int64_t arg1)

{
    int64_t iVar1;
    int8_t unaff_DIL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    iVar1 = 0;
    if (*(arg1 + 5000) != 1) {
        iVar1 = fcn.0002107c(arg1,4,0xe810,0,unaff_DIL,unaff_retaddr,in_stack_00000008);
        if (-1 < iVar1) {
            iVar1 = fcn.000211b0(arg1,4,0xe810,0xf,unaff_DIL,unaff_retaddr,in_stack_00000008);
            if (-1 < iVar1) {
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(1000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
                }
            }
        }
    }
    return iVar1;
}


/* fcn.0001dc48 @ 0x1dc48 */

//WARNING: Removing unreachable block (ram,0x0001de9e)
//WARNING: Removing unreachable block (ram,0x0001deb7)
//WARNING: Removing unreachable block (ram,0x0001deaa)
//WARNING: Removing unreachable block (ram,0x0001dec9)
//WARNING: Removing unreachable block (ram,0x0001e27e)
//WARNING: Removing unreachable block (ram,0x0001e297)
//WARNING: Removing unreachable block (ram,0x0001e28a)
//WARNING: Removing unreachable block (ram,0x0001e2a9)

void fcn.0001dc48(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    int iVar2;
    uint64_t uVar3;
    ulong unaff_R12;
    int64_t unaff_R13;
    ulong unaff_R15;
    int32_t var_30h;
    int32_t var_38h;
    int8_t arg_50h;
    
    iVar2 = unaff_R12;
    arg_50h = unaff_R15;
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    if ((*(arg1_00 + 5000) == 10) || (*(arg1_00 + 5000) == 0xb)) {
        fcn.0001a52c(arg1_00);
        fcn.0002107c(arg1,4,0xd388,0xf,unaff_R15,unaff_R13,unaff_R12);
        fcn.000211b0(arg1,4,0xd388,0xf,unaff_R15,unaff_R13,unaff_R12);
        fcn.0002107c(arg1,4,0xd38c,3,unaff_R15,unaff_R13,unaff_R12);
        fcn.000211b0(arg1,4,0xd38c,3,unaff_R15,unaff_R13,unaff_R12);
        fcn.0002107c(arg1,4,0xd398,3,unaff_R15,unaff_R13,unaff_R12);
        fcn.000211b0(arg1,4,0xd398,3,unaff_R15,unaff_R13,unaff_R12);
        iVar1 = fcn.0001ec20(arg1_00,6);
        iVar2 = unaff_R12;
        arg_50h = unaff_R15;
        if (-1 < iVar1) {
            iVar1 = fcn.0002107c(arg1,4,0xc010,0xf,arg_50h,unaff_R13,iVar2);
            iVar2 = unaff_R12;
            arg_50h = unaff_R15;
            if (iVar1 == 0) {
                fcn.0001a360(arg1_00);
                iVar1 = fcn.0002107c(arg1,4,0xe810,0xf,unaff_R15,unaff_R13,unaff_R12);
                iVar2 = unaff_R12;
                arg_50h = unaff_R15;
                if (iVar1 == 0) {
                    iVar1 = fcn.000211b0(arg1,4,0xe810,0xf,arg_50h,unaff_R13,iVar2);
                    iVar2 = unaff_R12;
                    arg_50h = unaff_R15;
                    if (iVar1 == 0) {
                        fcn.0002107c(arg1,4,0xe810,0xf,arg_50h,unaff_R13,iVar2);
                        iVar1 = fcn.0002107c(arg1,4,0xd4b0,0,unaff_R15,unaff_R13,unaff_R12);
                        iVar2 = unaff_R12;
                        arg_50h = unaff_R15;
                        if (-1 < iVar1) {
                            iVar1 = fcn.000211b0(arg1,4,0xd4b0,3,arg_50h,unaff_R13,iVar2);
                            iVar2 = unaff_R12;
                            arg_50h = unaff_R15;
                            if (-1 < iVar1) {
                                iVar1 = fcn.0002107c(arg1,4,0xd4b0,0,arg_50h,unaff_R13,iVar2);
                                iVar2 = unaff_R12;
                                arg_50h = unaff_R15;
                                if (-1 < iVar1) {
                                    iVar1 = fcn.000211b0(arg1,4,0xd4b0,3,arg_50h,unaff_R13,iVar2);
                                    iVar2 = unaff_R12;
                                    arg_50h = unaff_R15;
                                    if (-1 < iVar1) {
                                        iVar1 = fcn.0002107c(arg1,4,0xe84c,0xf,arg_50h,unaff_R13,iVar2);
                                        iVar2 = unaff_R12;
                                        arg_50h = unaff_R15;
                                        if (-1 < iVar1) {
                                            iVar1 = fcn.000211b0(arg1,4,0xe84c,0xf,arg_50h,unaff_R13,iVar2);
                                            iVar2 = unaff_R12;
                                            arg_50h = unaff_R15;
                                            if (-1 < iVar1) {
                                                fcn.0001ed5c(arg1_00);
                                                iVar1 = fcn.0002107c(arg1,4,0xe8dc,0xf,unaff_R15,unaff_R13,
                                                                     unaff_R12);
                                                iVar2 = unaff_R12;
                                                arg_50h = unaff_R15;
                                                if (-1 < iVar1) {
                                                    iVar1 = fcn.000211b0(arg1,4,0xe8dc,0xf,arg_50h,unaff_R13,iVar2
                                                                        );
                                                    iVar2 = unaff_R12;
                                                    arg_50h = unaff_R15;
                                                    if (-1 < iVar1) {
                                                        uVar3 = 0;
                                                        do {
                                                            fcn.0002107c(arg1,4,0xe84c,0xf,unaff_R15,unaff_R13,
                                                                         unaff_R12);
                                                            uVar3 = uVar3 + 1;
                                                            if (*(arg1_00 + 0x1192) == '0') {
                                                                (**(arg1_00 + 0x1320))(1000);
                                                            }
                                                            else {
                                                                (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),1000);
                                                            }
                                                        } while (uVar3 < 0x3e9);
                                                        fcn.0002107c(arg1,4,0xe8dc,0xf,unaff_R15,unaff_R13,
                                                                     unaff_R12);
                                                        fcn.000211b0(arg1,4,0xe8dc,0xf,unaff_R15,unaff_R13,
                                                                     unaff_R12);
                                                        uVar3 = 0;
                                                        do {
                                                            iVar1 = fcn.0002107c(arg1,4,0xe84c,0xf,unaff_R15,
                                                                                 unaff_R13,unaff_R12);
                                                            iVar2 = unaff_R12;
                                                            arg_50h = unaff_R15;
                                                            if (iVar1 < 0) break;
                                                            uVar3 = uVar3 + 1;
                                                            if (*(arg1_00 + 0x1192) == '0') {
                                                                (**(arg1_00 + 0x1320))(1000);
                                                            }
                                                            else {
                                                                (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),1000);
                                                            }
                                                            iVar2 = unaff_R12;
                                                            arg_50h = unaff_R15;
                                                        } while (uVar3 < 0x3e9);
                                                        fcn.0002107c(arg1,4,0xe610,0xf,arg_50h,unaff_R13,iVar2);
                                                        fcn.000211b0(arg1,4,0xe610,0xf,arg_50h,unaff_R13,iVar2);
                                                        fcn.000211b0(arg1,4,0xe810,8,arg_50h,unaff_R13,iVar2);
                                                        fcn.0002107c(arg1,4,0xe810,0xf,arg_50h,unaff_R13,iVar2);
                                                        iVar1 = fcn.0002107c(arg1,4,0xe0cc,3,arg_50h,unaff_R13,
                                                                             iVar2);
                                                        if ((((-1 < iVar1) &&
                                                             (iVar1 = fcn.000211b0(arg1,4,0xe0cc,3,arg_50h,
                                                                                   unaff_R13,iVar2), -1 < iVar1)) &&
                                                            (iVar1 = fcn.0002107c(arg1,4,0xcffc,0xc,arg_50h,
                                                                                  unaff_R13,iVar2), -1 < iVar1)) &&
                                                           (iVar1 = fcn.000211b0(arg1,4,0xcffc,0xc,arg_50h,
                                                                                 unaff_R13,iVar2), -1 < iVar1)) {
                                                            fcn.0001f3a4(arg1_00);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (((*(arg1_00 + 5000) == 0x10) &&
        (iVar1 = fcn.0002107c(arg1,4,0xd388,0xf,arg_50h,unaff_R13,iVar2), -1 < iVar1)) &&
       ((iVar1 = fcn.000211b0(arg1,4,0xd388,0xf,arg_50h,unaff_R13,iVar2), -1 < iVar1 &&
        ((iVar1 = fcn.0002107c(arg1,4,0xd38c,3,arg_50h,unaff_R13,iVar2), -1 < iVar1 &&
         (iVar1 = fcn.000211b0(arg1,4,0xd38c,3,arg_50h,unaff_R13,iVar2), -1 < iVar1)))))) {
        if (*(arg1_00 + 0x1384) == 2) {
            iVar1 = fcn.0002107c(arg1,4,0xd398,3,arg_50h,unaff_R13,iVar2);
        }
        else {
            iVar1 = fcn.0002107c(arg1,4,0xd398,3,arg_50h,unaff_R13,iVar2);
        }
        if ((((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1,4,0xd398,3,arg_50h,unaff_R13,iVar2), -1 < iVar1)) &&
            (iVar1 = fcn.0002107c(arg1,4,0xd398,3,arg_50h,unaff_R13,iVar2), -1 < iVar1)) &&
           (iVar1 = fcn.000211b0(arg1,4,0xd398,3,arg_50h,unaff_R13,iVar2), -1 < iVar1)) {
            fcn.0001ec20(arg1_00,7);
            iVar1 = fcn.0002107c(arg1,4,0xd4b0,0,arg_50h,unaff_R13,iVar2);
            if (((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1,4,0xd4b0,3,arg_50h,unaff_R13,iVar2), -1 < iVar1)) &&
               ((iVar1 = fcn.0002107c(arg1,4,0xd4b0,0,arg_50h,unaff_R13,iVar2), -1 < iVar1 &&
                (iVar1 = fcn.000211b0(arg1,4,0xd4b0,3,arg_50h,unaff_R13,iVar2), -1 < iVar1)))) {
                fcn.000211b0(arg1,4,0xc0a0,0xf,arg_50h,unaff_R13,iVar2);
                fcn.000211b0(arg1,4,0xc0a4,3,arg_50h,unaff_R13,iVar2);
                fcn.000211b0(arg1,4,0xc0a8,3,arg_50h,unaff_R13,iVar2);
                fcn.000211b0(arg1,4,0xe618,0xf,arg_50h,unaff_R13,iVar2);
                iVar1 = fcn.0002107c(arg1,4,0xe0cc,3,arg_50h,unaff_R13,iVar2);
                if (-1 < iVar1) {
                    fcn.000211b0(arg1,4,0xe0cc,3,arg_50h,unaff_R13,iVar2);
                }
            }
        }
    }
    iVar2 = *(arg1_00 + 5000);
    if ((((iVar2 == 5) || (iVar2 == 6)) || ((iVar2 == 7 || (((iVar2 == 8 || (iVar2 == 9)) || (iVar2 == 10)))))) ||
       ((iVar2 == 0xb || (iVar2 == 0x10)))) {
        fcn.00015530(arg1_00);
        iVar2 = *(arg1_00 + 5000);
    }
    if (iVar2 == 0x10) {
        fcn.0001a688(arg1_00);
    }
    return;
}


/* fcn.0001e7c0 @ 0x1e7c0 */

//WARNING: Removing unreachable block (ram,0x0001e984)
//WARNING: Removing unreachable block (ram,0x0001e99b)
//WARNING: Removing unreachable block (ram,0x0001e9d2)
//WARNING: Removing unreachable block (ram,0x0001ea03)
//WARNING: Removing unreachable block (ram,0x0001ea3e)
//WARNING: Removing unreachable block (ram,0x0001ea6e)

void fcn.0001e7c0(uint32_t arg1)

{
    int iVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint in_register_0000000c;
    int unaff_R12D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    int32_t var_30h;
    int32_t var_38h;
    
    iVar3 = CONCAT44(in_register_0000000c,arg1);
    iVar1 = *(iVar3 + 5000);
    if ((((((iVar1 == 0xd) || (iVar1 == 0xe)) || (iVar1 == 0xf)) &&
         (((iVar2 = fcn.0002107c(arg1,4,0xd388,0xf,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2 &&
           (iVar2 = fcn.000211b0(arg1,4,0xd388,0xf,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2)) &&
          ((iVar2 = fcn.0002107c(arg1,4,0xd38c,3,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2 &&
           ((iVar2 = fcn.000211b0(arg1,4,0xd38c,3,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2 &&
            (iVar2 = fcn.0002107c(arg1,4,0xd398,3,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2)))))))) &&
        (iVar2 = fcn.000211b0(arg1,4,0xd398,3,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2)) &&
       ((iVar2 = fcn.0002107c(arg1,4,0xd818,0xf,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar2 &&
        (iVar2 = fcn.0001ec20(iVar3,4), -1 < iVar2)))) {
        fcn.0001b33c(iVar3);
        fcn.0001a360(iVar3);
        fcn.00015530(iVar3);
        fcn.0001c080(arg1);
        fcn.0001a480(iVar3);
        iVar3 = fcn.0002107c(arg1,4,0xe0cc,3,unaff_R15B,unaff_R14,unaff_R12D);
        if (((-1 < iVar3) &&
            (((iVar3 = fcn.000211b0(arg1,4,0xe0cc,3,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar3 &&
              (iVar3 = fcn.0002107c(arg1,4,0xd4b0,0,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar3)) &&
             (iVar3 = fcn.000211b0(arg1,4,0xd4b0,3,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar3)))) &&
           (iVar3 = fcn.0002107c(arg1,4,0xd4b0,0,unaff_R15B,unaff_R14,unaff_R12D), -1 < iVar3)) {
            fcn.000211b0(arg1,4,0xd4b0,3,unaff_R15B,unaff_R14,unaff_R12D);
        }
    }
    return;
}


/* fcn.00014c78 @ 0x14c78 */

int64_t fcn.00014c78(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int unaff_EDI;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    int32_t var_30h;
    int64_t var_38h;
    
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if (iVar1 < 10) {
        if (iVar1 != 9) {
            if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
                fcn.000211b0(arg1_00,4,0xc0a0,5,unaff_R15B,unaff_R14,unaff_EDI);
                iVar2 = fcn.000211b0(arg1_00,4,0xc0a4,3,unaff_R15B,unaff_R14,unaff_EDI);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xc0a8,3,unaff_R15B,unaff_R14,unaff_EDI);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xe618,0xf,unaff_R15B,unaff_R14,unaff_EDI);
                if (iVar2 < 0) {
                    return iVar2;
                }
                fcn.0002107c(arg1_00,4,0xd408,0,unaff_R15B,unaff_R14,unaff_EDI);
                fcn.000211b0(arg1_00,4,0xd408,0xf,unaff_R15B,unaff_R14,unaff_EDI);
                fcn.000211b0(arg1_00,4,0xd40c,0xf,unaff_R15B,unaff_R14,unaff_EDI);
                iVar2 = 0xd434;
                goto code_r0x0001539c;
            }
            if (((iVar1 != 5) && (iVar1 != 6)) && ((iVar1 != 7 && (iVar1 != 8)))) {
                return 0;
            }
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0a0,0xf,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0a4,3,unaff_R15B,unaff_R14,unaff_EDI);
joined_r0x00015239:
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0a8,3,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xe618,0xf,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.0002107c(arg1_00,4,0xe610,0,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0xe610;
code_r0x000152f0:
        iVar2 = fcn.000211b0(arg1_00,4,iVar2,0xf,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.0002107c(arg1_00,4,0xc0b4,0,unaff_R15B,unaff_R14,unaff_EDI);
    }
    else {
        if ((iVar1 == 10) || (iVar1 == 0xb)) {
            fcn.000211b0(arg1_00,4,0xc0a0,0xf,unaff_R15B,unaff_R14,unaff_EDI);
            iVar2 = fcn.000211b0(arg1_00,4,0xc0a4,3,unaff_R15B,unaff_R14,unaff_EDI);
            goto joined_r0x00015239;
        }
        if ((iVar1 != 0xd) && (iVar1 != 0xe)) {
            if (iVar1 == 0xf) {
                iVar2 = fcn.000211b0(arg1_00,4,0xc0a0,0xc,unaff_R15B,unaff_R14,unaff_EDI);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xc0a4,0xc,unaff_R15B,unaff_R14,unaff_EDI);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xc0a8,0xc,unaff_R15B,unaff_R14,unaff_EDI);
                goto joined_r0x00015095;
            }
            if (iVar1 != 0x10) {
                return 0;
            }
            iVar2 = fcn.000211b0(arg1_00,4,0xc0a0,0xf,unaff_R15B,unaff_R14,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.000211b0(arg1_00,4,0xc0a4,3,unaff_R15B,unaff_R14,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.000211b0(arg1_00,4,0xc0a8,3,unaff_R15B,unaff_R14,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = 0xe618;
            goto code_r0x000152f0;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0a0,0xc,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0a4,0xc,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xc0a8,0xc,unaff_R15B,unaff_R14,unaff_EDI);
joined_r0x00015095:
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.000211b0(arg1_00,4,0xe618,0xc,unaff_R15B,unaff_R14,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.0002107c(arg1_00,4,0xc0b4,0,unaff_R15B,unaff_R14,unaff_EDI);
    }
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = fcn.000211b0(arg1_00,4,0xc0b4,0xf,unaff_R15B,unaff_R14,unaff_EDI);
    if (iVar2 < 0) {
        return iVar2;
    }
    iVar2 = 0xc0b4;
code_r0x0001539c:
    iVar2 = fcn.000211b0(arg1_00,4,iVar2,0xf,unaff_R15B,unaff_R14,unaff_EDI);
    return iVar2;
}


/* fcn.000153c4 @ 0x153c4 */

//WARNING: Variable defined which should be unmapped: var_20h

int64_t fcn.000153c4(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int unaff_EBP;
    int64_t unaff_RSI;
    int8_t unaff_DIL;
    int32_t var_20h;
    int64_t var_bp_28h;
    
    iVar1 = 0;
    if (*(arg1 + 5000) != 1) {
        arg1_00 = arg1;
        iVar1 = fcn.000211b0(arg1_00,4,0xc014,0xf,unaff_DIL,unaff_RSI,unaff_EBP);
        if (-1 < iVar1) {
            iVar1 = fcn.0002107c(arg1_00,4,0xe610,0,unaff_DIL,unaff_RSI,unaff_EBP);
            if (-1 < iVar1) {
                fcn.000211b0(arg1_00,4,0xe610,0xf,unaff_DIL,unaff_RSI,unaff_EBP);
                iVar1 = fcn.0002107c(arg1_00,4,0xc0b4,0,unaff_DIL,unaff_RSI,unaff_EBP);
                if (-1 < iVar1) {
                    iVar1 = fcn.000211b0(arg1_00,4,0xc0b4,0xf,unaff_DIL,unaff_RSI,unaff_EBP);
                    if (-1 < iVar1) {
                        iVar1 = fcn.000211b0(arg1_00,4,0xc0b4,0xf,unaff_DIL,unaff_RSI,unaff_EBP);
                    }
                }
            }
        }
    }
    return iVar1;
}


/* fcn.00012b1c @ 0x12b1c */

void fcn.00012b1c(int64_t arg1)

{
    int64_t iVar1;
    int iVar2;
    uint32_t uVar3;
    int unaff_EDI;
    uint32_t uVar4;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    
    iVar2 = *(arg1 + 5000);
    uVar3 = 0;
    if (iVar2 < 9) {
        if (iVar2 != 8) {
            if (iVar2 == 1) {
                uVar3 = 0x2379;
                goto code_r0x00012b83;
            }
            if ((iVar2 != 2) && (iVar2 != 3)) {
                iVar2 = iVar2 + -4;
                goto code_r0x00012b6e;
            }
        }
code_r0x00012b7f:
        uVar3 = 0xd404;
    }
    else {
        if (((iVar2 == 9) || (iVar2 == 10)) || (iVar2 == 0xb)) goto code_r0x00012b7f;
        iVar2 = iVar2 + -0xd;
code_r0x00012b6e:
        if (((iVar2 == 0) || (iVar2 == 1)) || ((iVar2 == 2 || (iVar2 == 3)))) goto code_r0x00012b7f;
    }
code_r0x00012b83:
    iVar1 = fcn.0002107c(arg1,4,uVar3,0,unaff_R15B,unaff_R14,unaff_EDI);
    if (iVar1 < 0) {
        return;
    }
    iVar2 = *(arg1 + 5000);
    if (iVar2 < 9) {
        if (iVar2 != 8) {
            uVar4 = 0;
            if (iVar2 == 1) {
                uVar3 = 0x2379;
                goto code_r0x00012cc1;
            }
            if (((iVar2 != 2) && (iVar2 != 3)) && ((iVar2 != 4 && (((iVar2 != 5 && (iVar2 != 6)) && (iVar2 != 7))))))
            goto code_r0x00012cc1;
        }
    }
    else {
        uVar4 = 0;
        if (((((iVar2 != 9) && (iVar2 != 10)) && (iVar2 != 0xb)) && ((iVar2 != 0xd && (iVar2 != 0xe)))) &&
           ((iVar2 != 0xf && (iVar2 != 0x10)))) goto code_r0x00012cc1;
    }
    uVar3 = 0xd404;
    uVar4 = 0xf;
code_r0x00012cc1:
    fcn.000211b0(arg1,4,uVar3,uVar4,unaff_R15B,unaff_R14,unaff_EDI);
    return;
}


/* fcn.00012074 @ 0x12074 */

ulong fcn.00012074(int arg1,uint32_t *arg2,int64_t arg3)

{
    uint8_t uVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint32_t uVar5;
    int8_t unaff_R14B;
    int64_t unaff_retaddr;
    uint16_t uVar6;
    uint32_t in_stack_00000008;
    uint32_t arg_60h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    uVar2 = 0;
    uVar5 = 0;
    arg_60h = in_stack_00000008 & 0xffff0000;
    if (*(arg1_00 + 0x1511) != '\0') {
        return 0;
    }
    iVar4 = *(arg1_00 + 5000);
    if (iVar4 < 9) {
        if (iVar4 == 8) goto code_r0x000120e3;
        if (iVar4 != 1) {
            if ((iVar4 != 2) && (iVar4 != 3)) {
                iVar4 = iVar4 + -4;
                goto code_r0x000120d2;
            }
            goto code_r0x000120e3;
        }
        uVar3 = fcn.0002140c(arg1_00,CONCAT71(arg2 >> 8,0x11),&stack0x00000008,0);
        uVar6 = arg_60h;
code_r0x0001210b:
        uVar5 = uVar6;
    }
    else {
        if (((iVar4 == 9) || (iVar4 == 10)) || (iVar4 == 0xb)) {
code_r0x000120e3:
            uVar3 = fcn.0002107c(arg1,2,0xe908,0,unaff_R14B,unaff_retaddr,arg_60h);
            uVar6 = arg_60h;
            goto code_r0x0001210b;
        }
        iVar4 = iVar4 + -0xd;
code_r0x000120d2:
        if (((iVar4 == 0) || (iVar4 == 1)) || ((iVar4 == 2 || (iVar4 == 3)))) goto code_r0x000120e3;
    }
    iVar4 = *(arg1_00 + 5000);
    if (iVar4 < 9) {
        if (iVar4 != 8) {
            if (iVar4 == 1) {
                *arg2 = (uVar5 >> 8) >> 2 & 1;
                if ((uVar5 >> 10 & 1) != 0) {
                    if ((uVar5 >> 0xd & 1) == 0) {
                        uVar2 = (uVar5 & 0x4000 | 0x2000) >> 0xd;
                    }
                    else {
                        uVar2 = (-((uVar5 & 0x4000) != 0) & 2) + 2;
                    }
                }
                goto code_r0x000121e3;
            }
            if ((iVar4 != 2) && (iVar4 != 3)) {
                iVar4 = iVar4 + -4;
                goto code_r0x0001213b;
            }
        }
    }
    else if (((iVar4 != 9) && (iVar4 != 10)) && (iVar4 != 0xb)) {
        iVar4 = iVar4 + -0xd;
code_r0x0001213b:
        if (((iVar4 != 0) && (iVar4 != 1)) && ((iVar4 != 2 && (iVar4 != 3)))) {
            return uVar3;
        }
    }
    uVar1 = uVar5 >> 1 & 1;
    *arg2 = uVar1;
    if (uVar1 != 0) {
        if ((uVar5 & 1) == 0) {
            uVar2 = (uVar5 & 8 | 4) >> 2;
        }
        else {
            if ((uVar5 & 0x10) != 0) {
                *arg3 = 6;
                return uVar3;
            }
            uVar2 = (-((uVar5 & 8) != 0) & 2) + 2;
        }
        *arg3 = uVar2;
        return uVar3;
    }
code_r0x000121e3:
    *arg3 = uVar2;
    return uVar3;
}


/* fcn.00019c38 @ 0x19c38 */

void fcn.00019c38(uint32_t arg1,uint32_t arg2,ulong noname_2,int64_t arg3)

{
    int *arg3_00;
    int iVar1;
    int64_t iVar2;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint in_register_00000014;
    int64_t iVar3;
    uint32_t uVar4;
    int unaff_R12D;
    int64_t unaff_R13;
    int8_t unaff_R14B;
    bool bVar5;
    uint16_t auStackX_8 [4];
    uint32_t auStackX_10 [2];
    uint16_t auStackX_18 [4];
    uchar auStackX_20 [8];
    int16_t var_40h;
    int16_t var_50h;
    int64_t var_58h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    auStackX_10[0] = CONCAT31(auStackX_10[0]._1_3_,arg2);
    auStackX_8[0] = 0;
    auStackX_18[0] = 0;
    if (*(arg1_00 + 0x154b) == '\0') {
        iVar3 = CONCAT71(CONCAT44(in_register_00000014,arg2) >> 8,4);
        iVar2 = fcn.0002140c(arg1_00,iVar3,auStackX_8,arg3);
        if (iVar2 < 0) {
            return;
        }
        auStackX_8[0] = auStackX_8[0] & 0xf21f;
        iVar3 = CONCAT71(iVar3 >> 8,9);
        iVar2 = fcn.0002140c(arg1_00,iVar3,auStackX_18,arg3);
        if (iVar2 < 0) {
            return;
        }
        auStackX_18[0] = auStackX_18[0] & 0xfcff;
        if (*(arg1_00 + 0x11ee) != '\0') {
            auStackX_8[0] = auStackX_8[0] | 0xc00;
        }
        auStackX_8[0] = auStackX_8[0] | 0x1e0;
        if (*(arg1_00 + 0x1531) != '\0') {
            auStackX_18[0] = auStackX_18[0] | 0x300;
        }
        iVar3 = CONCAT71(iVar3 >> 8,4);
        iVar2 = fcn.000212e8(arg1_00,iVar3,auStackX_8[0],5);
        if (iVar2 < 0) {
            return;
        }
        iVar2 = fcn.000212e8(arg1_00,CONCAT71(iVar3 >> 8,9),auStackX_18[0],5);
        if (iVar2 < 0) {
            return;
        }
    }
    else {
        auStackX_10[0] = 0xa000;
        fcn.000211b0(arg1,4,0xe86c,3,unaff_R14B,unaff_R13,unaff_R12D);
        fcn.0002107c(arg1,4,0xb408,3,unaff_R14B,unaff_R13,unaff_R12D);
        auStackX_8[0] = auStackX_10[0] | 0xde0;
        fcn.0002107c(arg1,4,0xb410,0xc,unaff_R14B,unaff_R13,unaff_R12D);
        auStackX_18[0] = auStackX_10[0] >> 0x10 | 0x300;
        auStackX_10[0] = auStackX_8[0];
        fcn.000211b0(arg1,4,0xb408,3,unaff_R14B,unaff_R13,unaff_R12D);
        auStackX_10[0] = auStackX_18[0] << 0x10;
        fcn.000211b0(arg1,4,0xb410,0xc,unaff_R14B,unaff_R13,unaff_R12D);
        iVar1 = *(arg1_00 + 5000);
        if ((((iVar1 == 0xd) || (iVar1 == 0xe)) || (iVar1 == 0xf)) && (*(arg1_00 + 0x1550) == '\0')) {
            fcn.0002107c(arg1,4,0xb5d4,3,unaff_R14B,unaff_R13,unaff_R12D);
            if (*(arg1_00 + 0x154f) == '\0') {
                auStackX_10[0] = auStackX_10[0] & 0xffff | 0x80;
            }
            else {
                auStackX_10[0] = auStackX_10[0] & 0xff7f;
            }
            fcn.000211b0(arg1,4,0xb5d4,3,unaff_R14B,unaff_R13,unaff_R12D);
        }
    }
    arg3_00 = arg1_00 + 0xd4;
    fcn.00012074(arg1,auStackX_10,arg3_00);
    if (auStackX_10[0] != '\0') {
        if (*(arg1_00 + 0x119a) == '\x01') {
            bVar5 = *arg3_00 == 6;
        }
        else {
            bVar5 = *arg3_00 == 4;
        }
        if (bVar5) {
            return;
        }
    }
    if ((*(arg1_00 + 0x116e) == '\x01') && (iVar1 = fcn.00021898(arg1_00), iVar1 == 1)) {
        uVar4 = 0;
        if ((*(arg1_00 + 0x150b) != '\0') ||
           ((*(arg1_00 + 0x154e) != '\x01' || (iVar2 = fcn.00019fa4(arg1_00), -1 < iVar2)))) {
            if (*(arg1_00 + 0x1192) == '0') {
                (**(arg1_00 + 0x1320))(50000);
                uVar4 = 0;
            }
            else {
                (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),50000);
            }
            do {
                fcn.00012074(arg1,auStackX_10,auStackX_20);
                if (auStackX_10[0] != '\0') {
                    return;
                }
                if (*(arg1_00 + 0x1192) == '0') {
                    (**(arg1_00 + 0x1320))(50000);
                }
                else {
                    (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),50000);
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < 0x1e0);
        }
    }
    return;
}


/* fcn.0002333c @ 0x2333c */

int64_t fcn.0002333c(uint32_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    uint in_register_0000000c;
    uint64_t uVar2;
    uint8_t *puVar3;
    
    puVar3 = CONCAT44(in_register_0000000c,arg1);
    if (puVar3 == arg2) {
        iVar1 = 0;
    }
    else {
        if (puVar3 == NULL) {
            fcn.00023788(0x29fe0,arg1 + 0x37,0x29fb8);
        }
        if (arg2 == 0) {
            fcn.00023788(0x29fe0,0x38,0x2a020);
        }
        uVar2 = arg3 - 1;
        if (~puVar3 < uVar2) {
            fcn.00023788(0x29fe0,0x39,0x29e60);
        }
        if (~arg2 < uVar2) {
            fcn.00023788(0x29fe0,0x3a,0x29ee8);
        }
        for (; (uVar2 != 0 && (*puVar3 == *arg2)); puVar3 = puVar3 + 1) {
            arg2 = arg2 + 1;
            uVar2 = uVar2 - 1;
        }
        iVar1 = *puVar3 - *arg2;
    }
    return iVar1;
}


/* fcn.00023410 @ 0x23410 */

void fcn.00023410(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uchar uVar1;
    char *pcVar2;
    
    uVar1 = arg3;
    if (arg2 != 0) {
        if (~arg1 < arg2 - 1U) {
            pcVar2 = "(Length - 1) <= (0xFFFFFFFFFFFFFFFFULL - (UINTN)Buffer)";
            fcn.00023788(0x2a078,0x30,0x2a040);
            arg3 = pcVar2;
        }
        fcn.00023628(arg1,arg2,CONCAT71(arg3 >> 8,uVar1));
    }
    return;
}


/* fcn.00023628 @ 0x23628 */

int64_t fcn.00023628(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    uint64_t *puVar2;
    uint in_register_00000014;
    uint64_t uVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    
    uVar3 = CONCAT44(in_register_00000014,arg2);
    uVar5 = arg3 & 0xffU;
    puVar2 = arg1;
    if (((arg1 & 7U) == 0) && (7 < uVar3)) {
        uVar4 = uVar3 >> 3;
        uVar1 = ((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | arg3 & 0xffU;
        uVar3 = uVar3 + uVar4 * -8;
        do {
            *puVar2 = uVar1 << 0x20 | uVar1;
            puVar2 = puVar2 + 1;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    else if (((arg1 & 3U) == 0) && (3 < uVar3)) {
        uVar1 = uVar3 >> 2;
        uVar3 = uVar3 + uVar1 * -4;
        do {
            *puVar2 = ((uVar5 << 8 | uVar5) << 8 | uVar5) << 8 | uVar5;
            puVar2 = puVar2 + 4;
            uVar1 = uVar1 - 1;
        } while (uVar1 != 0);
    }
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = arg3;
        puVar2 = puVar2 + 1;
    }
    return arg1;
}


/* fcn.00012f48 @ 0x12f48 */

int64_t fcn.00012f48(int64_t arg1,int64_t arg2,ulong noname_2,uint32_t arg3)

{
    int64_t iVar1;
    uint8_t uVar2;
    uint in_R9;
    int aiStackX_10 [2];
    uint in_stack_00000028;
    
    if (*CONCAT44(in_R9,arg3) == 0) {
        return 0;
    }
    aiStackX_10[0] = 0;
    iVar1 = (**(*(arg1 + 0x1308) + 8))
                      (*(arg1 + 0x1308),*((-(arg2 != 0) & 7) + 0x1312 + arg1),noname_2,arg3,in_stack_00000028,
                       aiStackX_10);
    if (arg2 == 0) {
        if ((-1 < iVar1) && (aiStackX_10[0] == 0)) {
            return iVar1;
        }
        if (aiStackX_10[0] == 0x40) {
            fcn.00014118(arg1);
            uVar2 = aiStackX_10[0];
            iVar1 = -0x7ffffffffffffffa;
            goto code_r0x00012fec;
        }
        if (aiStackX_10[0] != 0x10) {
            fcn.00014118(arg1);
        }
    }
    uVar2 = aiStackX_10[0];
    if (-1 < iVar1) {
        return iVar1;
    }
code_r0x00012fec:
    if ((uVar2 & 0x12) == 0x10) {
        iVar1 = -0x7ffffffffffffffa;
    }
    return iVar1;
}


/* fcn.00014928 @ 0x14928 */

void fcn.00014928(int64_t arg1,int64_t arg2)

{
    int8_t unaff_BL;
    int iVar1;
    int64_t arg3;
    int64_t arg4;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    iVar1 = *(arg1 + 5000);
    arg4 = 0;
    arg3 = 0;
    if (iVar1 < 9) {
        if (iVar1 != 8) {
            if (iVar1 == 1) {
                arg3 = 8;
                goto code_r0x00014987;
            }
            if ((iVar1 != 2) && (iVar1 != 3)) {
                iVar1 = iVar1 + -4;
                goto code_r0x00014964;
            }
        }
    }
    else if (((iVar1 != 9) && (iVar1 != 10)) && (iVar1 != 0xb)) {
        iVar1 = iVar1 + -0xd;
code_r0x00014964:
        if (((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && (arg4 = 0, iVar1 != 3)))) goto code_r0x00014987;
    }
    arg3 = 0xcd00;
    arg4 = 0xff;
code_r0x00014987:
    fcn.000211b0(arg1,8,arg3,arg4,unaff_BL,unaff_retaddr,in_stack_00000008);
    return;
}


/* fcn.0001a2ac @ 0x1a2ac */

uint64_t fcn.0001a2ac(int64_t arg1)

{
    uint64_t in_RAX;
    int iVar1;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    uint32_t in_stack_00000008;
    
    iVar1 = *(arg1 + 5000);
    if (iVar1 < 10) {
        if ((((iVar1 != 9) && (iVar1 != 2)) && (iVar1 != 3)) && (iVar1 != 4)) {
            iVar1 = iVar1 + -5;
code_r0x0001a2e3:
            if (((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && (iVar1 != 3)))) goto code_r0x0001a357;
        }
    }
    else if ((iVar1 != 10) && (iVar1 != 0xb)) {
        iVar1 = iVar1 + -0xd;
        goto code_r0x0001a2e3;
    }
    fcn.0002107c(arg1,4,0xc3f0,0xf,unaff_BL,unaff_retaddr,in_stack_00000008);
    in_RAX = in_stack_00000008 & 0xffff0000;
    if ((in_stack_00000008 & 0xffff0000) == 0xd4500000) {
        *(arg1 + 0x1538) = in_stack_00000008 & 0xffff;
        *(arg1 + 0x1534) = 1;
        return 0xd4500001;
    }
    *(arg1 + 0x1538) = 0;
    *(arg1 + 0x1534) = 0;
code_r0x0001a357:
    return in_RAX & 0xffffffffffffff00;
}


/* fcn.000149cc @ 0x149cc */

uint16_t fcn.000149cc(int64_t arg1,int64_t arg2)

{
    int iVar1;
    
    iVar1 = *(arg1 + 5000);
    if (iVar1 < 9) {
        if (iVar1 == 8) goto code_r0x00014a08;
        if (iVar1 == 1) {
            return *arg2 & 0x3fff;
        }
        if ((iVar1 == 2) || (iVar1 == 3)) goto code_r0x00014a08;
        iVar1 = iVar1 + -4;
    }
    else {
        if (((iVar1 == 9) || (iVar1 == 10)) || (iVar1 == 0xb)) goto code_r0x00014a08;
        iVar1 = iVar1 + -0xd;
    }
    if (((iVar1 != 0) && (iVar1 != 1)) && ((iVar1 != 2 && (iVar1 != 3)))) {
        return 0;
    }
code_r0x00014a08:
    return (*arg2 & 0x7fff) - 4;
}


/* fcn.0001f2a8 @ 0x1f2a8 */

ulong fcn.0001f2a8(int64_t arg1)

{
    int16_t *piVar1;
    uint16_t uVar2;
    uint32_t uVar3;
    int64_t iVar4;
    uint32_t uVar5;
    uint64_t uVar6;
    
    uVar6 = *(arg1 + 0x1194);
    iVar4 = *(arg1 + 0x98);
    uVar5 = 0;
    do {
        uVar2 = fcn.00014a48(arg1,*(iVar4 + uVar6 * 2) + *(arg1 + 0x1178) * uVar6 + *(arg1 + 0x70));
        uVar3 = uVar2 % *(arg1 + 0x150e);
        if (uVar3 == 0) {
            piVar1 = *(arg1 + 0x98) + *(arg1 + 0x1194) * 2;
            *piVar1 = *piVar1 + uVar2;
            uVar3 = 0;
        }
        else {
            piVar1 = *(arg1 + 0x98) + *(arg1 + 0x1194) * 2;
            *piVar1 = *piVar1 + (*(arg1 + 0x150e) - uVar3) + uVar2;
            uVar3 = *(arg1 + 0x150e) - uVar2 % *(arg1 + 0x150e);
        }
        uVar6 = *(arg1 + 0x1194);
        iVar4 = *(arg1 + 0x98);
        uVar5 = uVar5 + uVar3 + uVar2;
    } while (*(iVar4 + uVar6 * 2) < *(*(arg1 + 0x90) + uVar6 * 2));
    *(iVar4 + *(arg1 + 0x1196) * 2) = 0;
    return CONCAT71(*(arg1 + 0x90) >> 8,uVar5 == *(*(arg1 + 0x90) + *(arg1 + 0x1194) * 2));
}


/* fcn.00014a48 @ 0x14a48 */

int16_t fcn.00014a48(int64_t arg1,int64_t arg2)

{
    int16_t iVar1;
    uint16_t uVar2;
    int iVar3;
    
    iVar3 = *(arg1 + 5000);
    iVar1 = 0;
    if (iVar3 < 9) {
        if (iVar3 == 8) goto code_r0x00014a8c;
        if (iVar3 != 1) {
            if ((iVar3 != 2) && (iVar3 != 3)) {
                iVar3 = iVar3 + -4;
                goto code_r0x00014a78;
            }
            goto code_r0x00014a8c;
        }
        uVar2 = 0x3fff;
    }
    else {
        if (((iVar3 != 9) && (iVar3 != 10)) && (iVar3 != 0xb)) {
            iVar3 = iVar3 + -0xd;
code_r0x00014a78:
            if (((iVar3 != 0) && (iVar3 != 1)) && ((iVar3 != 2 && (iVar3 != 3)))) goto code_r0x00014aa3;
        }
code_r0x00014a8c:
        uVar2 = 0x7fff;
    }
    iVar1 = *(arg1 + 0x117b) + (*arg2 & uVar2);
code_r0x00014aa3:
    if (0x5f1 < *arg2 - 1U) {
        fcn.00014118(arg1);
    }
    return iVar1;
}


/* fcn.00023d2c @ 0x23d2c */

void fcn.00023d2c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_10;
    int64_t iStackX_18;
    int64_t iStackX_20;
    
    iStackX_10 = arg2;
    iStackX_18 = arg3;
    iStackX_20 = arg4;
    fcn.00023c44(arg1,*(*0x2a970 + 0x40),&iStackX_10);
    return;
}


/* fcn.00023c44 @ 0x23c44 */

int64_t fcn.00023c44(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t arg1_00;
    int64_t iVar1;
    int64_t iVar2;
    uint32_t arg2_00;
    ulong noname_1;
    char *arg3_00;
    
    if (arg1 == 0) {
        arg3_00 = "Format != ((void *) 0)";
        arg2_00 = 0x3d;
    }
    else {
        if ((arg1 & 1U) == 0) goto code_r0x00023c97;
        arg3_00 = "((UINTN)Format & 0x00000001) == 0";
        arg2_00 = 0x3e;
    }
    fcn.00023788(0x2a2c0,arg2_00,arg3_00);
code_r0x00023c97:
    if (arg2 == 0) {
        fcn.00023788(0x2a2c0,0x3f,0x2a320);
    }
    noname_1 = 0x282;
    arg1_00 = fcn.00024d94();
    if (arg1_00 == 0) {
        noname_1 = 0x44;
        fcn.00023788(0x2a2c0,0x44,0x29f28);
    }
    iVar1 = fcn.00023d5c(arg1_00,noname_1,arg1,arg3);
    if ((arg2 != 0) && (iVar1 != 0)) {
        iVar2 = (**(arg2 + 8))(arg2,arg1_00);
        if (iVar2 < 0) {
            iVar1 = 0;
        }
    }
    fcn.00024e3c(arg1_00);
    return iVar1;
}


/* fcn.000163f8 @ 0x163f8 */

void fcn.000163f8(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    arg1_00 = arg1;
    iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,unaff_BL,unaff_retaddr,in_stack_00000008);
    if (iVar1 == 0) {
        iVar1 = fcn.000211b0(arg1_00,4,0xcfd8,3,unaff_BL,unaff_retaddr,in_stack_00000008);
        if (iVar1 == 0) {
            iVar1 = fcn.0002107c(arg1_00,4,0xb460,0,unaff_BL,unaff_retaddr,in_stack_00000008);
            if (-1 < iVar1) {
                fcn.000211b0(arg1_00,4,0xb460,1,unaff_BL,unaff_retaddr,in_stack_00000008);
            }
        }
    }
    return;
}


/* fcn.0001af4c @ 0x1af4c */

uint64_t fcn.0001af4c(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint32_t arg1_00;
    uint32_t uVar3;
    ulong unaff_R12;
    int64_t unaff_R14;
    ulong unaff_R15;
    uint32_t var_30h;
    int8_t arg_50h;
    int arg_60h;
    
    uVar2 = 0;
    do {
        arg1_00 = arg1;
        iVar1 = fcn.0002107c(arg1_00,4,0xe004,0,unaff_R15,unaff_R14,unaff_R12);
        arg_60h = unaff_R12;
        arg_50h = unaff_R15;
        if (iVar1 < 0) break;
        uVar3 = uVar2 + 1;
        uVar2 = uVar3;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
        arg_60h = unaff_R12;
        arg_50h = unaff_R15;
    } while (uVar3 < 0x65);
    fcn.0001a52c(arg1);
    fcn.000211b0(arg1_00,4,0xd4d8,0xc,arg_50h,unaff_R14,arg_60h);
    fcn.0002107c(arg1_00,4,0xcffc,0xc,arg_50h,unaff_R14,arg_60h);
    uVar2 = fcn.000211b0(arg1_00,4,0xcffc,0xc,arg_50h,unaff_R14,arg_60h);
    if ((*(arg1 + 0x138e) & 0x20) != 0) {
        fcn.0002107c(arg1_00,4,0xe84c,3,arg_50h,unaff_R14,arg_60h);
        uVar2 = fcn.000211b0(arg1_00,4,0xe84c,3,arg_50h,unaff_R14,arg_60h);
    }
    fcn.000211b0(arg1_00,4,0xd340,3,arg_50h,unaff_R14,arg_60h);
    if (uVar2 < 0) {
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.000169bc @ 0x169bc */

int64_t fcn.000169bc(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int unaff_R13D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    int64_t var_38h;
    
    arg1_00 = arg1;
    iVar1 = fcn.000211b0(arg1_00,4,0xfc38,1,unaff_R15B,unaff_R14,unaff_R13D);
    if (-1 < iVar1) {
        iVar1 = fcn.000211b0(arg1_00,4,0xfc48,3,unaff_R15B,unaff_R14,unaff_R13D);
        if (-1 < iVar1) {
            iVar1 = fcn.000211b0(arg1_00,4,0xfc28,3,unaff_R15B,unaff_R14,unaff_R13D);
            if (-1 < iVar1) {
                iVar1 = fcn.000211b0(arg1_00,4,0xfc28,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                if (-1 < iVar1) {
                    iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,3,unaff_R15B,unaff_R14,unaff_R13D);
                    if (-1 < iVar1) {
                        iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                        if (-1 < iVar1) {
                            iVar1 = fcn.000211b0(arg1_00,4,0xfc30,3,unaff_R15B,unaff_R14,unaff_R13D);
                            if (-1 < iVar1) {
                                iVar1 = fcn.000211b0(arg1_00,4,0xfc30,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                                if (-1 < iVar1) {
                                    iVar1 = fcn.000211b0(arg1_00,4,0xfc34,3,unaff_R15B,unaff_R14,unaff_R13D);
                                    if (-1 < iVar1) {
                                        iVar1 = fcn.000211b0(arg1_00,4,0xfc34,0xc,unaff_R15B,unaff_R14,unaff_R13D)
                                        ;
                                        if (-1 < iVar1) {
                                            iVar1 = fcn.000211b0(arg1_00,4,0xfc28,3,unaff_R15B,unaff_R14,
                                                                 unaff_R13D);
                                            if (-1 < iVar1) {
                                                iVar1 = fcn.000211b0(arg1_00,4,0xfc28,0xc,unaff_R15B,unaff_R14,
                                                                     unaff_R13D);
                                                if (-1 < iVar1) {
                                                    iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,3,unaff_R15B,unaff_R14,
                                                                         unaff_R13D);
                                                    if (-1 < iVar1) {
                                                        iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,0xc,unaff_R15B,
                                                                             unaff_R14,unaff_R13D);
                                                        if (-1 < iVar1) {
                                                            iVar1 = fcn.000211b0(arg1_00,4,0xfc30,3,unaff_R15B,
                                                                                 unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.000211b0(arg1_00,4,0xfc30,0xc,unaff_R15B
                                                                                     ,unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1_00,4,0xfc34,3,
                                                                                         unaff_R15B,unaff_R14,
                                                                                         unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1_00,4,0xfc34,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.000211b0(arg1_00,4,0xfc38,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1_00,4,0xfc38
                                                                                                     ,0xc,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1_00,4,
                                                                                                         0xfc3c,3,
                                                                                                         unaff_R15B,
                                                                                                         unaff_R14,
                                                                                                         unaff_R13D);
                                                                                    if (-1 < iVar1) {
                                                                                        iVar1 = fcn.000211b0(arg1_00,4
                                                                                                             ,0xfc3c,
                                                                                                             0xc,
                                                            unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.000211b0(arg1_00,4,0xfc40,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1_00,4,0xfc40,0xc,
                                                                                         unaff_R15B,unaff_R14,
                                                                                         unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1_00,4,0xfc44,3,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.000211b0(arg1_00,4,0xfc44,0xc
                                                                                                 ,unaff_R15B,unaff_R14
                                                                                                 ,unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                if (*(arg1 + 0x1192) == '0') {
                                                                                    (**(arg1 + 0x1320))(3000);
                                                                                }
                                                                                else {
                                                                                    (**(arg1 + 0x1340))(*(arg1 + 0x1300)
                                                                                                        ,3000);
                                                                                }
                                                                                iVar1 = fcn.000211b0(arg1_00,4,0xfc24
                                                                                                     ,0xc,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1_00,4,
                                                                                                         0xfc24,0xc,
                                                                                                         unaff_R15B,
                                                                                                         unaff_R14,
                                                                                                         unaff_R13D);
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    fcn.000211b0(arg1_00,4,0xcfd4,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    return iVar1;
}


/* fcn.00016318 @ 0x16318 */

void fcn.00016318(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    arg1_00 = arg1;
    iVar1 = fcn.000211b0(arg1_00,6,0xd490,0x3f,unaff_BL,unaff_retaddr,in_stack_00000008);
    if (-1 < iVar1) {
        iVar1 = fcn.000211b0(arg1_00,6,0xd494,3,unaff_BL,unaff_retaddr,in_stack_00000008);
        if (-1 < iVar1) {
            iVar1 = fcn.0002107c(arg1_00,4,0xb460,0,unaff_BL,unaff_retaddr,in_stack_00000008);
            if (-1 < iVar1) {
                fcn.000211b0(arg1_00,4,0xb460,1,unaff_BL,unaff_retaddr,in_stack_00000008);
            }
        }
    }
    return;
}


/* fcn.0001aaec @ 0x1aaec */

void fcn.0001aaec(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    ulong unaff_R12;
    int64_t unaff_R14;
    ulong unaff_R15;
    uint32_t uStackX_8;
    uint32_t var_bp_30h;
    uint32_t var_38h;
    int8_t arg_50h;
    int arg_60h;
    
    uVar2 = 0;
    do {
        arg1_00 = arg1;
        iVar1 = fcn.0002107c(arg1_00,4,0xe004,0,unaff_R15,unaff_R14,unaff_R12);
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
    } while (uVar2 < 0x65);
    fcn.000211b0(arg1_00,4,0xe86c,3,unaff_R15,unaff_R14,unaff_R12);
    uVar2 = 0;
    do {
        iVar1 = fcn.0002107c(arg1_00,4,0xb420,0,unaff_R15,unaff_R14,unaff_R12);
        arg_60h = unaff_R12;
        arg_50h = unaff_R15;
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
        arg_60h = unaff_R12;
        arg_50h = unaff_R15;
    } while (uVar2 < 0x65);
    if (*(arg1 + 5000) == 7) {
        fcn.0002107c(arg1_00,4,0xb428,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xb428,3,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xb41c,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xb41c,0xc,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xb460,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xb460,1,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xb464,0,arg_50h,unaff_R14,arg_60h);
    }
    else {
        if (1 < *(arg1 + 5000) - 8U) goto code_r0x0001ae42;
        fcn.0002107c(arg1_00,4,0xb464,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xb464,0xc,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xcfc0,0,arg_50h,unaff_R14,arg_60h);
        if ((uStackX_8 | 0x10000) == 0) {
            fcn.0002107c(arg1_00,4,0xb464,0,arg_50h,unaff_R14,arg_60h);
        }
        else {
            fcn.0002107c(arg1_00,4,0xb464,0,arg_50h,unaff_R14,arg_60h);
        }
    }
    fcn.000211b0(arg1_00,4,0xb464,0xc,arg_50h,unaff_R14,arg_60h);
code_r0x0001ae42:
    fcn.000211b0(arg1_00,4,0xcbf8,3,arg_50h,unaff_R14,arg_60h);
    if (*(arg1 + 5000) == 8) {
        fcn.0002107c(arg1_00,4,0xc0b0,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xc0b0,1,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xcfc8,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xcfc8,8,arg_50h,unaff_R14,arg_60h);
    }
    fcn.0001f3a4(arg1);
    return;
}


/* fcn.000164e4 @ 0x164e4 */

//WARNING: Removing unreachable block (ram,0x00016551)
//WARNING: Removing unreachable block (ram,0x00016565)
//WARNING: Removing unreachable block (ram,0x0001655a)
//WARNING: Removing unreachable block (ram,0x00016575)

void fcn.000164e4(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int unaff_R13D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    int32_t var_30h;
    
    arg1_00 = arg1;
    if (*(arg1 + 5000) - 7U < 2) {
        fcn.0002107c(arg1_00,4,0xe404,0,unaff_R15B,unaff_R14,unaff_R13D);
    }
    iVar1 = fcn.000211b0(arg1_00,4,0xfc38,1,unaff_R15B,unaff_R14,unaff_R13D);
    if (((((((-1 < iVar1) &&
            (iVar1 = fcn.000211b0(arg1_00,4,0xfc38,1,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)) &&
           (iVar1 = fcn.000211b0(arg1_00,4,0xfc28,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)) &&
          ((iVar1 = fcn.000211b0(arg1_00,4,0xfc28,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
           (iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)))) &&
         ((iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
          ((iVar1 = fcn.000211b0(arg1_00,4,0xfc30,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
           (iVar1 = fcn.000211b0(arg1_00,4,0xfc30,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)))))) &&
        (iVar1 = fcn.000211b0(arg1_00,4,0xfc34,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)) &&
       (((((iVar1 = fcn.000211b0(arg1_00,4,0xfc34,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
           (iVar1 = fcn.000211b0(arg1_00,4,0xfc28,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)) &&
          (iVar1 = fcn.000211b0(arg1_00,4,0xfc28,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)) &&
         (((iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
           (iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)) &&
          ((iVar1 = fcn.000211b0(arg1_00,4,0xfc30,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
           ((iVar1 = fcn.000211b0(arg1_00,4,0xfc30,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1 &&
            (iVar1 = fcn.000211b0(arg1_00,4,0xfc34,3,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)))))))) &&
        (iVar1 = fcn.000211b0(arg1_00,4,0xfc34,0xc,unaff_R15B,unaff_R14,unaff_R13D), -1 < iVar1)))) {
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(3000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),3000);
        }
        iVar1 = fcn.000211b0(arg1_00,4,0xfc24,0xc,unaff_R15B,unaff_R14,unaff_R13D);
        if (-1 < iVar1) {
            fcn.000211b0(arg1_00,4,0xfc24,0xc,unaff_R15B,unaff_R14,unaff_R13D);
        }
    }
    return;
}


/* fcn.0001d704 @ 0x1d704 */

int64_t fcn.0001d704(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    ulong unaff_R13;
    int64_t unaff_R14;
    ulong unaff_R15;
    uint32_t var_38h;
    int8_t arg_50h;
    int arg_60h;
    
    uVar2 = 0;
    do {
        arg1_00 = arg1;
        iVar1 = fcn.0002107c(arg1_00,4,0xe004,0,unaff_R15,unaff_R14,unaff_R13);
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
    } while (uVar2 < 0x65);
    fcn.000211b0(arg1_00,4,0xe86c,3,unaff_R15,unaff_R14,unaff_R13);
    uVar2 = 0;
    do {
        iVar1 = fcn.0002107c(arg1_00,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
        arg_60h = unaff_R13;
        arg_50h = unaff_R15;
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
        arg_60h = unaff_R13;
        arg_50h = unaff_R15;
    } while (uVar2 < 0x65);
    fcn.000211b0(arg1_00,4,0xd4d8,0xc,arg_50h,unaff_R14,arg_60h);
    iVar1 = fcn.000211b0(arg1_00,4,0xd340,3,arg_50h,unaff_R14,arg_60h);
    if (((-1 < iVar1) && (iVar1 = fcn.0002107c(arg1_00,4,0xe820,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) &&
       (iVar1 = fcn.000211b0(arg1_00,4,0xe820,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) {
        fcn.0001cee4(arg1);
        iVar1 = fcn.0002107c(arg1_00,4,0xd334,3,arg_50h,unaff_R14,arg_60h);
        if (((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1_00,4,0xd334,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) &&
           ((iVar1 = fcn.0002107c(arg1_00,4,0xd4e8,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1 &&
            (iVar1 = fcn.000211b0(arg1_00,4,0xd4e8,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)))) {
            return iVar1;
        }
    }
    return 0;
}


/* fcn.0001d3d8 @ 0x1d3d8 */

//WARNING: Variable defined which should be unmapped: var_10h

void fcn.0001d3d8(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    ulong unaff_R15;
    uint32_t var_48h;
    int64_t var_50h;
    int64_t var_58h;
    int8_t arg_50h;
    uint in_stack_ffffffffffffffb8;
    uint uVar3;
    int64_t in_stack_ffffffffffffffc0;
    int arg_60h;
    int32_t var_10h;
    
    arg1_00 = arg1;
    iVar1 = fcn.0002107c(arg1_00,4,0xb460,3,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,unaff_R15);
    if (-1 < iVar1) {
        fcn.000211b0(arg1_00,4,0xb460,3,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,unaff_R15);
    }
    uVar2 = 0;
    do {
        iVar1 = fcn.0002107c(arg1_00,4,0xe004,0xf,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,unaff_R15);
        arg_50h = in_stack_ffffffffffffffb8;
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
        arg_50h = in_stack_ffffffffffffffb8;
    } while (uVar2 < 0x65);
    uVar2 = 0;
    iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,arg_50h,in_stack_ffffffffffffffc0,unaff_R15);
    arg_60h = unaff_R15;
    if (-1 < iVar1) {
        uVar3 = 0;
        iVar1 = fcn.000211b0(arg1_00,4,0xcfd8,2,0,in_stack_ffffffffffffffc0,arg_60h);
        arg_50h = uVar3;
        arg_60h = unaff_R15;
        if (-1 < iVar1) {
            if (*(arg1 + 0x1192) == '0') {
                (**(arg1 + 0x1320))(1000);
            }
            else {
                (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
            }
            iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,uVar3,in_stack_ffffffffffffffc0,unaff_R15);
            arg_50h = uVar3;
            arg_60h = unaff_R15;
            if (-1 < iVar1) {
                do {
                    iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,uVar3,in_stack_ffffffffffffffc0,unaff_R15);
                    arg_50h = uVar3;
                    arg_60h = unaff_R15;
                    if (iVar1 < 0) break;
                    if (*(arg1 + 0x1192) == '0') {
                        (**(arg1 + 0x1320))(1000);
                    }
                    else {
                        (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
                    }
                    arg_50h = uVar3;
                    arg_60h = unaff_R15;
                    uVar2 = uVar2 + 1;
                } while (uVar2 < 0x32);
            }
        }
    }
    iVar1 = fcn.000211b0(arg1_00,4,0xd4d8,0xc,arg_50h,in_stack_ffffffffffffffc0,arg_60h);
    if ((((-1 < iVar1) &&
         (iVar1 = fcn.0002107c(arg1_00,4,0xd328,0xc,arg_50h,in_stack_ffffffffffffffc0,arg_60h), -1 < iVar1)) &&
        (iVar1 = fcn.000211b0(arg1_00,4,0xd328,0xc,arg_50h,in_stack_ffffffffffffffc0,arg_60h), -1 < iVar1)) &&
       (iVar1 = fcn.0002107c(arg1_00,4,0xcfcc,3,arg_50h,in_stack_ffffffffffffffc0,arg_60h), -1 < iVar1)) {
        fcn.000211b0(arg1_00,4,0xcfcc,3,arg_50h,in_stack_ffffffffffffffc0,arg_60h);
    }
    return;
}


/* fcn.0001b120 @ 0x1b120 */

//WARNING: Removing unreachable block (ram,0x0001b31f)

int64_t fcn.0001b120(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint32_t uVar2;
    ulong unaff_R13;
    int64_t unaff_R14;
    ulong unaff_R15;
    int64_t var_48h;
    int32_t var_50h;
    int32_t var_58h;
    
    uVar2 = 0;
    do {
        arg1_00 = arg1;
        iVar1 = fcn.0002107c(arg1_00,4,0xe004,0xf,unaff_R15,unaff_R14,unaff_R13);
        if (iVar1 < 0) break;
        uVar2 = uVar2 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(10000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
        }
    } while (uVar2 < 0x65);
    fcn.000211b0(arg1_00,4,0xd4d8,0xc,unaff_R15,unaff_R14,unaff_R13);
    uVar2 = 0;
    iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,unaff_R15,unaff_R14,unaff_R13);
    if ((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1_00,4,0xcfd8,2,unaff_R15,unaff_R14,unaff_R13), -1 < iVar1)) {
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(1000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
        }
        iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,unaff_R15,unaff_R14,unaff_R13);
        if (-1 < iVar1) {
            do {
                iVar1 = fcn.0002107c(arg1_00,4,0xcfd8,3,unaff_R15,unaff_R14,unaff_R13);
                if (iVar1 < 0) break;
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(1000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < 0x32);
        }
    }
    return iVar1;
}


/* fcn.00017950 @ 0x17950 */

//WARNING: Removing unreachable block (ram,0x00017e7b)
//WARNING: Removing unreachable block (ram,0x0001831e)

void fcn.00017950(uint32_t arg1)

{
    int iVar1;
    uint in_register_0000000c;
    int64_t arg2;
    uint32_t uVar2;
    int unaff_EDI;
    uint64_t arg3;
    int64_t arg4;
    int64_t unaff_R13;
    int8_t unaff_R14B;
    int32_t var_30h;
    uint32_t var_38h;
    
    iVar1 = *(CONCAT44(in_register_0000000c,arg1) + 5000);
    if (iVar1 == 7) {
        fcn.000211b0(arg1,0x15c,0xf800,0xff,unaff_R14B,unaff_R13,unaff_EDI);
        fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
        fcn.0002107c(arg1,4,0xd800,0,unaff_R14B,unaff_R13,unaff_EDI);
        fcn.0002107c(arg1,4,0xd814,0,unaff_R14B,unaff_R13,unaff_EDI);
        fcn.000211b0(arg1,4,0xd814,0xf,unaff_R14B,unaff_R13,unaff_EDI);
        fcn.0002107c(arg1,4,0xd38c,0,unaff_R14B,unaff_R13,unaff_EDI);
        fcn.000211b0(arg1,0x400,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
code_r0x00018380:
        arg2 = 0x18;
code_r0x00018393:
        arg4 = 0x3c;
        arg3 = 0xfc24;
    }
    else {
        if (iVar1 == 8) {
            fcn.000211b0(arg1,0x188,0xf800,0xff,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1,0x14,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.0002107c(arg1,4,0xcfec,0,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1,4,0xfc30,3,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1,4,0xfc38,3,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1,0x3fc,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.0002107c(arg1,4,0xb41c,0,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1,4,0xb41c,0xc,unaff_R14B,unaff_R13,unaff_EDI);
            uVar2 = 0xcfc8;
            fcn.0002107c(arg1,4,0xcfc8,0,unaff_R14B,unaff_R13,unaff_EDI);
            arg4 = 8;
        }
        else {
            if (iVar1 == 9) {
                fcn.000211b0(arg1,0x8c,0xf800,0xff,unaff_R14B,unaff_R13,unaff_EDI);
                fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                fcn.0002107c(arg1,4,0xcfec,0,unaff_R14B,unaff_R13,unaff_EDI);
                fcn.000211b0(arg1,4,0xfc28,3,unaff_R14B,unaff_R13,unaff_EDI);
                fcn.000211b0(arg1,4,0xfc38,3,unaff_R14B,unaff_R13,unaff_EDI);
                fcn.000211b0(arg1,0x74,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
                fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                uVar2 = 0xb41c;
                fcn.0002107c(arg1,4,0xb41c,0,unaff_R14B,unaff_R13,unaff_EDI);
            }
            else {
                if (iVar1 == 0xb) {
                    fcn.000211b0(arg1,0x450,0xe600,0xff,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x26,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x1e4,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.0002107c(arg1,4,0xd81c,0xf,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,4,0xfc38,3,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.0002107c(arg1,4,0xfc38,0xf,unaff_R14B,unaff_R13,unaff_EDI);
                    return;
                }
                if (iVar1 == 0xd) {
                    fcn.000211b0(arg1,4,0xfc28,3,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x10,0xe600,0xff,unaff_R14B,unaff_R13,unaff_EDI);
                    arg2 = 0x28;
                    goto code_r0x00018393;
                }
                if (iVar1 == 0xe) {
                    fcn.000211b0(arg1,4,0xfc48,3,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x14a,0xe600,0xff,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x26,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x70,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
                    goto code_r0x00018380;
                }
                if (iVar1 == 0xf) {
                    fcn.000211b0(arg1,4,0xfc48,3,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x250,0xe600,0xff,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x28,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x1e0,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.0002107c(arg1,4,0xcfd4,0xc,unaff_R14B,unaff_R13,unaff_EDI);
                }
                else {
                    if (iVar1 != 0x10) {
                        return;
                    }
                    fcn.000211b0(arg1,4,0xfc48,3,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x188,0xe600,0xff,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x28,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,4,0xfc38,3,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0xb0,0xf800,0x3f,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.000211b0(arg1,0x18,0xfc24,0x3c,unaff_R14B,unaff_R13,unaff_EDI);
                    fcn.0002107c(arg1,4,0xcfd4,0xc,unaff_R14B,unaff_R13,unaff_EDI);
                }
                uVar2 = 0xcfd4;
            }
            arg4 = 0xc;
        }
        arg2 = 4;
        arg3 = uVar2;
    }
    fcn.000211b0(arg1,arg2,arg3,arg4,unaff_R14B,unaff_R13,unaff_EDI);
    return;
}


/* fcn.0001a780 @ 0x1a780 */

//WARNING: Removing unreachable block (ram,0x0001a93f)

void fcn.0001a780(int64_t arg1)

{
    uint32_t arg1_00;
    int iVar1;
    int unaff_R12D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    int64_t var_30h;
    int32_t var_38h;
    
    iVar1 = *(arg1 + 5000);
    if ((iVar1 != 10) && (iVar1 != 0xb)) {
        if ((iVar1 == 0xd) || ((iVar1 == 0xe || (iVar1 == 0xf)))) {
            *(arg1 + 0x154a) = 0x101;
            goto code_r0x0001a7e6;
        }
        if (iVar1 != 0x10) {
            *(arg1 + 0x154a) = 0;
            goto code_r0x0001a7e6;
        }
    }
    *(arg1 + 0x154a) = 0x100;
code_r0x0001a7e6:
    arg1_00 = arg1;
    if (((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) || ((iVar1 == 5 || (iVar1 == 6)))) ||
       ((iVar1 == 7 || ((iVar1 == 8 || (iVar1 == 9)))))) {
        fcn.0002107c(arg1_00,4,0xdd90,0,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xdd90,0xf,unaff_R15B,unaff_R14,unaff_R12D);
        iVar1 = *(arg1 + 5000);
    }
    if ((iVar1 == 7) || (iVar1 == 8)) {
        fcn.000211b0(arg1_00,4,0xd388,3,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xd824,2,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.0002107c(arg1_00,4,0xd800,0,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.0002107c(arg1_00,4,0xd418,0,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xd418,0xf,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xd388,3,unaff_R15B,unaff_R14,unaff_R12D);
        iVar1 = *(arg1 + 5000);
    }
    if ((iVar1 == 8) || (iVar1 == 9)) {
        fcn.000211b0(arg1_00,4,0xd418,0xc,unaff_R15B,unaff_R14,unaff_R12D);
        iVar1 = *(arg1 + 5000);
    }
    if (iVar1 == 0xb) {
        fcn.0002107c(arg1_00,4,0xd334,3,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xd334,3,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.0002107c(arg1_00,4,0xd4e8,3,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xd4e8,3,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.0002107c(arg1_00,4,0xd4e8,3,unaff_R15B,unaff_R14,unaff_R12D);
        fcn.000211b0(arg1_00,4,0xd4e8,3,unaff_R15B,unaff_R14,unaff_R12D);
    }
    return;
}


/* fcn.00020508 @ 0x20508 */

//WARNING: Removing unreachable block (ram,0x0002055f)
//WARNING: Removing unreachable block (ram,0x00020585)
//WARNING: Removing unreachable block (ram,0x000205a6)
//WARNING: Removing unreachable block (ram,0x000205c8)
//WARNING: Removing unreachable block (ram,0x000205de)
//WARNING: Removing unreachable block (ram,0x000205d1)
//WARNING: Removing unreachable block (ram,0x000205f0)
//WARNING: Removing unreachable block (ram,0x000205f3)
//WARNING: Removing unreachable block (ram,0x00020613)
//WARNING: Removing unreachable block (ram,0x0002061a)
//WARNING: Removing unreachable block (ram,0x00020633)
//WARNING: Removing unreachable block (ram,0x00020626)
//WARNING: Removing unreachable block (ram,0x00020645)

int64_t fcn.00020508(int64_t arg1)

{
    int64_t iVar1;
    int64_t in_RDX;
    int64_t in_R8;
    
    iVar1 = fcn.00021650(arg1,in_RDX,in_R8,0x128);
    if (iVar1 < 0) {
        iVar1 = 0;
    }
    else {
        *(arg1 + 0x154e) = 1;
    }
    return iVar1;
}


/* fcn.000183bc @ 0x183bc */

//WARNING: Variable defined which should be unmapped: var_18h

void fcn.000183bc(int64_t arg1)

{
    int iVar1;
    uint32_t arg1_00;
    int64_t iVar2;
    uint64_t arg3;
    uint32_t uVar3;
    int64_t arg4;
    uint32_t uVar4;
    uint8_t uVar5;
    uint32_t uStackX_10;
    int32_t var_48h;
    int64_t var_50h;
    int32_t var_58h;
    int32_t var_60h;
    int8_t arg_50h;
    uint in_stack_ffffffffffffffa8;
    int64_t in_stack_ffffffffffffffb0;
    int in_stack_ffffffffffffffb8;
    int32_t var_18h;
    int32_t var_14h;
    
    arg_50h = in_stack_ffffffffffffffa8;
    uVar5 = 0;
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if (iVar1 < 10) {
        if (iVar1 == 9) {
code_r0x0001841d:
            fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.0002107c(arg1_00,4,0xb430,0,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,
                         in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xb430,3,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,
                         in_stack_ffffffffffffffb8);
            do {
                fcn.0002107c(arg1_00,4,0xe000,0,in_stack_ffffffffffffffa8,in_stack_ffffffffffffffb0,
                             in_stack_ffffffffffffffb8);
                arg_50h = in_stack_ffffffffffffffa8;
                if ((uStackX_10 & 0x100) != 0) break;
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(1000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
                }
                arg_50h = in_stack_ffffffffffffffa8;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 0x14);
            fcn.0002107c(arg1_00,4,0xe040,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.0002107c(arg1_00,4,0xb430,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xb430,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.0002107c(arg1_00,4,0xb5d0,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            arg4 = 0xf;
            iVar2 = 0xb5d0;
        }
        else {
            if (((iVar1 != 2) && (iVar1 != 3)) && (iVar1 != 4)) {
                if (((iVar1 != 5) && (iVar1 != 6)) && ((iVar1 != 7 && (iVar1 != 8)))) {
                    return;
                }
                goto code_r0x0001841d;
            }
            fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xb010,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.0002107c(arg1_00,4,0xe040,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xb080,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xb090,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            arg4 = 3;
            iVar2 = 0xb094;
        }
        fcn.000211b0(arg1_00,4,iVar2,arg4,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        uVar3 = 0xe080;
        fcn.0002107c(arg1_00,4,0xe080,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
code_r0x00018694:
        uVar4 = 0xf;
    }
    else {
        if ((iVar1 != 10) && (iVar1 != 0xb)) {
            if (iVar1 == 0xd) {
                iVar2 = fcn.0002107c(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                uVar4 = 3;
                iVar2 = fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xb430,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xb430,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xb5d0,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                arg3 = 0xb5d0;
                goto code_r0x00019947;
            }
            if (iVar1 == 0xe) {
                iVar2 = fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                uVar4 = 0xc;
                iVar2 = fcn.0002107c(arg1_00,4,0xbd4c,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd4c,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbd14,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd14,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbd30,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd30,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbc08,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbc08,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbcc0,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbcc0,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbd40,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd40,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbd40,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd40,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbc14,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbc14,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbc80,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbc80,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbc5c,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbc5c,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd4c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbc5c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbc5c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbc88,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbc88,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xb87c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xb87c,0xc,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xb87c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                arg3 = 0xb87c;
                goto code_r0x00019947;
            }
            if (iVar1 == 0xf) {
                iVar2 = fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.00021598(arg1);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.0002107c(arg1_00,4,0xbd30,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (iVar2 < 0) {
                    return;
                }
                iVar2 = fcn.000211b0(arg1_00,4,0xbd30,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                if (-1 < iVar2) {
                    iVar2 = fcn.0002107c(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,
                                         in_stack_ffffffffffffffb8);
                    if (iVar2 < 0) {
                        return;
                    }
                    iVar2 = fcn.000211b0(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,
                                         in_stack_ffffffffffffffb8);
                    if (-1 < iVar2) {
                        fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,
                                     in_stack_ffffffffffffffb8);
                        return;
                    }
                    return;
                }
                return;
            }
            if (iVar1 != 0x10) {
                return;
            }
            fcn.0002107c(arg1_00,4,0xe040,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.0002107c(arg1_00,4,0xb430,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xb430,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            uVar3 = 0xb5d0;
            fcn.0002107c(arg1_00,4,0xb5d0,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            goto code_r0x00018694;
        }
        fcn.0002107c(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xe040,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        uVar4 = 3;
        fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xb430,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb430,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xb5d0,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb5d0,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xb428,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb428,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xb4a0,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb4a0,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xd848,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xd848,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xd848,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xd848,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xe080,0,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xe080,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xb440,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb440,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xdd00,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xdd00,0xf,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        uVar3 = uStackX_10 >> 5 & 0xf;
        arg_50h = uVar3;
        if (((uStackX_10 >> 7 & 0x10000 | uStackX_10 & 0xe000) != 0x1e000) ||
           ((((uStackX_10 >> 9 & 0xf) != 0xf || (uVar3 != 0xf)) || ((uStackX_10 >> 1 & 8 | uStackX_10 & 7) != 0xf)))) {
            fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
            fcn.000211b0(arg1_00,4,0xbcfc,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        }
        fcn.000211b0(arg1_00,4,0xe86c,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb434,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb438,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb434,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb438,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb434,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        uVar3 = 0xb438;
        fcn.000211b0(arg1_00,4,0xb438,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.000211b0(arg1_00,4,0xb434,0xc,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
        fcn.0002107c(arg1_00,4,0xb438,3,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
    }
    arg3 = uVar3;
code_r0x00019947:
    fcn.000211b0(arg1_00,4,arg3,uVar4,arg_50h,in_stack_ffffffffffffffb0,in_stack_ffffffffffffffb8);
    return;
}


/* fcn.0001a0ec @ 0x1a0ec */

//WARNING: Variable defined which should be unmapped: var_20h

void fcn.0001a0ec(int64_t arg1)

{
    int iVar1;
    uint32_t arg1_00;
    int unaff_EBP;
    int64_t unaff_RSI;
    int8_t unaff_DIL;
    int64_t arg3;
    uint32_t uVar2;
    uint32_t uStackX_10;
    int32_t var_20h;
    int64_t var_bp_28h;
    
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if (iVar1 < 10) {
        if (((iVar1 != 9) && (iVar1 != 2)) &&
           ((iVar1 != 3 && ((((iVar1 != 4 && (iVar1 != 5)) && (iVar1 != 6)) && ((iVar1 != 7 && (iVar1 != 8)))))))) {
            return;
        }
        fcn.0002107c(arg1_00,4,0xe820,0,unaff_DIL,unaff_RSI,unaff_EBP);
        if ((uStackX_10 & 0x80000) == 0) {
            return;
        }
        fcn.0002107c(arg1_00,4,0xd428,0,unaff_DIL,unaff_RSI,unaff_EBP);
        fcn.000211b0(arg1_00,4,0xd428,0xf,unaff_DIL,unaff_RSI,unaff_EBP);
        fcn.0002107c(arg1_00,4,0xcbfc,0,unaff_DIL,unaff_RSI,unaff_EBP);
        fcn.000211b0(arg1_00,4,0xcbfc,3,unaff_DIL,unaff_RSI,unaff_EBP);
        fcn.0002107c(arg1_00,4,0xd428,0,unaff_DIL,unaff_RSI,unaff_EBP);
        uVar2 = 0xf;
        arg3 = 0xd428;
    }
    else {
        if ((((iVar1 != 10) && (iVar1 != 0xb)) && (iVar1 != 0xd)) &&
           (((iVar1 != 0xe && (iVar1 != 0xf)) && (iVar1 != 0x10)))) {
            return;
        }
        arg3 = 0xcbfc;
        uVar2 = 3;
    }
    fcn.000211b0(arg1_00,4,arg3,uVar2,unaff_DIL,unaff_RSI,unaff_EBP);
    return;
}


/* fcn.00021598 @ 0x21598 */

void fcn.00021598(int64_t arg1)

{
    int64_t iVar1;
    uint8_t uVar2;
    ulong unaff_RDI;
    uint64_t uVar3;
    int64_t in_stack_00000030;
    int64_t in_stack_00000038;
    ulong uVar4;
    int64_t in_stack_fffffffffffffff0;
    
    uVar2 = 0;
    uVar4 = 0;
    iVar1 = fcn.0002107c(arg1,4,0xbc44,0xc,0,in_stack_fffffffffffffff0,unaff_RDI);
    if (-1 < iVar1) {
        do {
            uVar3 = uVar2;
            uVar2 = uVar2 + 1;
            (&stack0xffffffffffffffe8)[uVar3] =
                 *(uVar3 + in_stack_00000038) & *(uVar3 + in_stack_00000030) |
                 ~*(uVar3 + in_stack_00000030) & (&stack0xffffffffffffffe8)[uVar3];
        } while (uVar2 < 4);
        fcn.000211b0(arg1,4,0xbc44,0xc,uVar4,in_stack_fffffffffffffff0,unaff_RDI);
    }
    return;
}


/* fcn.000212e8 @ 0x212e8 */

void fcn.000212e8(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t arg1_00;
    uint32_t arg_60h;
    uint8_t uVar2;
    ulong unaff_RDI;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    arg1_00 = arg1;
    if (*(arg1 + 5000) == 1) {
        fcn.000211b0(arg1_00,2,arg2 << 8 | 0x60,0,unaff_RDI,unaff_retaddr,in_stack_00000008);
    }
    else {
        uVar2 = 0;
        arg_60h = (arg2 & 0xff) << 0x10 | arg3 & 0xffff | 0x80000000;
        iVar1 = fcn.000211b0(arg1_00,4,0xde00,0xf,unaff_RDI,unaff_retaddr,arg_60h);
        if (-1 < iVar1) {
            while (((iVar1 = fcn.0002107c(arg1_00,4,0xde00,0,unaff_RDI,unaff_retaddr,arg_60h), -1 < iVar1 &&
                    ((arg_60h & 0x80000000) != 0)) && (uVar2 < 5))) {
                uVar2 = uVar2 + 1;
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(10000);
                }
                else {
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),10000);
                }
            }
        }
    }
    return;
}


/* fcn.00021898 @ 0x21898 */

uint64_t fcn.00021898(int64_t arg1)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uint32_t *arg2;
    unkbyte7 Var5;
    ulong uVar4;
    uint32_t uVar6;
    uint32_t uVar7;
    uint16_t uVar8;
    int64_t iVar9;
    uint16_t uVar10;
    ulong unaff_R13;
    uint16_t uVar11;
    uint32_t uVar12;
    int64_t unaff_R14;
    uint16_t uVar13;
    ulong unaff_R15;
    bool bVar14;
    char acStackX_8 [8];
    uint32_t auStackX_10 [2];
    uint32_t in_stack_00000018;
    uint64_t in_stack_00000020;
    int64_t var_48h;
    uint32_t var_50h;
    int64_t var_58h;
    int8_t iVar15;
    int iVar16;
    
    arg2 = acStackX_8;
    uVar6 = arg1;
    iVar1 = fcn.00012074(uVar6,arg2,arg1 + 0xd4);
    if (iVar1 < 0) {
        return 2;
    }
    if (acStackX_8[0] != '\0') {
        return 1;
    }
    iVar16 = *(arg1 + 5000);
    if (iVar16 < 9) {
        if (iVar16 == 8) {
code_r0x000218fd:
            uVar2 = fcn.00021e38(uVar6);
            return uVar2;
        }
        Var5 = arg2 >> 8;
        if (iVar16 != 1) {
            if (((iVar16 == 2) || (iVar16 == 3)) || (iVar16 == 4)) {
                iVar1 = CONCAT71(Var5,0x1f);
                uVar6 = 2;
                fcn.000212e8(arg1,iVar1,0,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x12);
                fcn.000212e8(arg1,iVar1,0x712,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x1f);
                fcn.000212e8(arg1,iVar1,2,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x10);
                fcn.000212e8(arg1,iVar1,0x6cfa,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x11);
                fcn.000212e8(arg1,iVar1,0x1480,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x12);
                fcn.000212e8(arg1,iVar1,0xb0c9,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x13);
                fcn.000212e8(arg1,iVar1,0x812f,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x14);
                fcn.000212e8(arg1,iVar1,0xc4c,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x15);
                fcn.000212e8(arg1,iVar1,0x8214,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x16);
                fcn.000212e8(arg1,iVar1,0x616c,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x17);
                fcn.000212e8(arg1,iVar1,0xa5,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x18);
                fcn.000212e8(arg1,iVar1,0x224e,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x19);
                fcn.000212e8(arg1,iVar1,0xb84,2);
                iVar9 = 2;
                iVar1 = CONCAT71(iVar1 >> 8,0x1a);
                fcn.000212e8(arg1,iVar1,0x7a27,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x10);
                fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
                iVar9 = 2;
                iVar1 = CONCAT71(iVar1 >> 8,0x10);
                fcn.000212e8(arg1,iVar1,auStackX_10[0] | 0x8000,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x10);
                fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
                uVar7 = 0;
                do {
                    if ((auStackX_10[0] & 0x8000) == 0) break;
                    if (*(arg1 + 0x1192) == '0') {
                        (**(arg1 + 0x1320))(1000);
                    }
                    else {
                        iVar1 = 1000;
                        (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
                    }
                    uVar7 = uVar7 + 1;
                    if (2000 < uVar7) goto code_r0x00021dcf;
                    iVar1 = CONCAT71(iVar1 >> 8,0x10);
                    iVar3 = fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
                } while (-1 < iVar3);
                iVar1 = CONCAT71(iVar1 >> 8,0x1c);
                fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
                uVar6 = ((auStackX_10[0] & 0xe00) == 0xa00) + 1;
code_r0x00021dcf:
                iVar1 = CONCAT71(iVar1 >> 8,0x10);
                fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
                iVar1 = CONCAT71(iVar1 >> 8,0x10);
                fcn.000212e8(arg1,iVar1,auStackX_10[0] & 0x7fff,2);
                iVar1 = CONCAT71(iVar1 >> 8,0x1f);
                fcn.000212e8(arg1,iVar1,0,2);
                fcn.000212e8(arg1,CONCAT71(iVar1 >> 8,0x12),0x12,2);
                return uVar6;
            }
            if (((iVar16 != 5) && (iVar16 != 6)) && (iVar16 != 7)) {
code_r0x00021948:
                return *(arg1 + 0x1384);
            }
            goto code_r0x000218fd;
        }
        iVar1 = CONCAT71(Var5,0x1f);
        uVar7 = 2;
        fcn.000212e8(arg1,iVar1,0,2);
        iVar1 = CONCAT71(iVar1 >> 8,0x11);
        fcn.000212e8(arg1,iVar1,0x401c,2);
        iVar9 = 2;
        iVar1 = CONCAT71(iVar1 >> 8,0xc);
        fcn.000212e8(arg1,iVar1,6,2);
        iVar1 = CONCAT71(iVar1 >> 8,0x14);
        fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
        iVar1 = CONCAT71(iVar1 >> 8,0x14);
        fcn.000212e8(arg1,iVar1,auStackX_10[0] | 0x1000,2);
        iVar9 = 2;
        iVar1 = CONCAT71(iVar1 >> 8,0x1f);
        fcn.000212e8(arg1,iVar1,5,2);
        iVar1 = CONCAT71(iVar1 >> 8,9);
        fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
        iVar1 = CONCAT71(iVar1 >> 8,9);
        fcn.000212e8(arg1,iVar1,auStackX_10[0] | 0x40,2);
        iVar9 = 2;
        fcn.000212e8(arg1,CONCAT71(iVar1 >> 8,0x1f),3,2);
        fcn.0002140c(arg1,0,auStackX_10,iVar9);
        uVar8 = auStackX_10[0] & 0xffcc;
        iVar1 = 2;
        auStackX_10[0] = auStackX_10[0] & 0xffffffcc;
        fcn.000212e8(arg1,0,uVar8,2);
        fcn.0002140c(arg1,0,auStackX_10,iVar1);
        iVar9 = 2;
        uVar4 = 0;
        fcn.000212e8(arg1,0,auStackX_10[0] | 0x8000,2);
        uVar6 = 0;
        iVar1 = CONCAT71(uVar4 >> 8,0x1d);
        fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
        if ((auStackX_10[0] & 0x1000) == 0) {
            do {
                if (*(arg1 + 0x1192) == '0') {
                    (**(arg1 + 0x1320))(100);
                }
                else {
                    iVar1 = 0;
                    (**(arg1 + 0x1340))(*(arg1 + 0x1300),100);
                }
                if (20000 < uVar6) goto code_r0x00021b55;
                iVar1 = CONCAT71(iVar1 >> 8,0x1d);
                uVar6 = uVar6 + 1;
                iVar3 = fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
            } while ((-1 < iVar3) && ((auStackX_10[0] & 0x1000) == 0));
            if (20000 < uVar6) goto code_r0x00021b55;
        }
        iVar1 = CONCAT71(iVar1 >> 8,0x1d);
        fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
        uVar7 = ((auStackX_10[0] & 0xe00) == 0xa00) + 1;
code_r0x00021b55:
        iVar9 = 2;
        iVar1 = CONCAT71(iVar1 >> 8,0x1f);
        fcn.000212e8(arg1,iVar1,5,2);
        iVar1 = CONCAT71(iVar1 >> 8,9);
        fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
        iVar1 = CONCAT71(iVar1 >> 8,9);
        fcn.000212e8(arg1,iVar1,auStackX_10[0] & 0xffbf,2);
        iVar9 = 2;
        iVar1 = CONCAT71(iVar1 >> 8,0x1f);
        fcn.000212e8(arg1,iVar1,0,2);
        iVar1 = CONCAT71(iVar1 >> 8,0x14);
        fcn.0002140c(arg1,iVar1,auStackX_10,iVar9);
        iVar1 = CONCAT71(iVar1 >> 8,0x14);
        fcn.000212e8(arg1,iVar1,auStackX_10[0] & 0xefff,2);
        fcn.000212e8(arg1,CONCAT71(iVar1 >> 8,0xc),0x1006,2);
        return uVar7;
    }
    if (iVar16 == 9) goto code_r0x000218fd;
    if ((iVar16 != 10) && (iVar16 != 0xb)) {
        if ((iVar16 == 0xd) || ((iVar16 == 0xe || (iVar16 == 0xf)))) {
            uVar2 = fcn.00022f50(uVar6);
            if (uVar2 == 1) {
                uVar7 = 0;
                fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                uVar8 = in_stack_00000018 >> 0xf & 1;
                fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                uVar11 = in_stack_00000018 >> 0xe & 1;
                fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                uVar13 = in_stack_00000018 >> 0xd & 1;
                fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                uVar10 = in_stack_00000018 >> 0xc & 1;
                fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                if (((in_stack_00000018 & 0x200000) != 0) || ((in_stack_00000018 & 0xf000) != 0xa000)) {
                    fcn.0002107c(uVar6,4,0xd840,0,unaff_R15,unaff_R14,unaff_R13);
                    auStackX_10[0] = 0xa000;
                    if ((in_stack_00000018 & 0x200000) == 0) {
                        fcn.000211b0(uVar6,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar10 << 8 | in_stack_00000018 & 0xfffffeff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar13 << 9 | in_stack_00000018 & 0xfffffdff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar11 << 10 | in_stack_00000018 & 0xfffffbff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar8 << 0xb | in_stack_00000018 & 0xfffff7ff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                    }
                    else {
                        fcn.000211b0(uVar6,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        iVar9 = 0;
                        iVar1 = 0xb438;
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        fcn.00023d2c(0x29d50,in_stack_00000018,iVar1,iVar9);
                        auStackX_10[0] = uVar8 << 8 | in_stack_00000018 & 0xfffffeff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar11 << 9 | in_stack_00000018 & 0xfffffdff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar13 << 10 | in_stack_00000018 & 0xfffffbff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = 0x81aa0000;
                        fcn.000211b0(uVar6,4,0xb434,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                        auStackX_10[0] = uVar10 << 0xb | in_stack_00000018 & 0xfffff7ff;
                        fcn.000211b0(uVar6,4,0xb438,0xf,unaff_R15,unaff_R14,unaff_R13);
                        fcn.0002107c(uVar6,4,0xb438,0,unaff_R15,unaff_R14,unaff_R13);
                    }
                }
                uVar12 = 2;
                auStackX_10[0] = 0xa000;
                fcn.000211b0(uVar6,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
                fcn.0002107c(uVar6,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
                auStackX_10[0] = in_stack_00000018 & 0xffff;
                fcn.000211b0(uVar6,4,0xb420,0xf,unaff_R15,unaff_R14,unaff_R13);
                fcn.0002107c(uVar6,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
                auStackX_10[0] = in_stack_00000018 & 0xff1fffff | 0x100000;
                fcn.000211b0(uVar6,4,0xb420,0xf,unaff_R15,unaff_R14,unaff_R13);
                auStackX_10[0] = 0xa000;
                fcn.000211b0(uVar6,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
                fcn.0002107c(uVar6,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
                auStackX_10[0] = in_stack_00000018 | 0x110000;
                fcn.000211b0(uVar6,4,0xb420,0xf,unaff_R15,unaff_R14,unaff_R13);
                fcn.0002107c(uVar6,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
                do {
                    iVar16 = unaff_R13;
                    iVar15 = unaff_R15;
                    if ((in_stack_00000018 & 0x80000000) != 0) break;
                    if (*(arg1 + 0x1192) == '0') {
                        (**(arg1 + 0x1320))(1000);
                    }
                    else {
                        (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
                    }
                    uVar7 = uVar7 + 1;
                    if (5000 < uVar7) goto code_r0x00022f30;
                    iVar1 = fcn.0002107c(uVar6,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
                    iVar16 = unaff_R13;
                    iVar15 = unaff_R15;
                } while (-1 < iVar1);
                auStackX_10[0] = 0xa000;
                fcn.000211b0(uVar6,4,0xe86c,0xf,iVar15,unaff_R14,iVar16);
                fcn.0002107c(uVar6,4,0xb434,0,iVar15,unaff_R14,iVar16);
                auStackX_10[0] = in_stack_00000018 & 0xffff | 0x80270000;
                fcn.000211b0(uVar6,4,0xb434,0xf,iVar15,unaff_R14,iVar16);
                fcn.0002107c(uVar6,4,0xb438,0,iVar15,unaff_R14,iVar16);
                auStackX_10[0] = 0xa000;
                uVar12 = ((in_stack_00000018 | 0x100000) == 0x48) + 1;
                fcn.000211b0(uVar6,4,0xe86c,0xf,iVar15,unaff_R14,iVar16);
                fcn.0002107c(uVar6,4,0xb400,0,iVar15,unaff_R14,iVar16);
                auStackX_10[0] = in_stack_00000018 | 0x108000;
                fcn.000211b0(uVar6,4,0xb400,0xf,iVar15,unaff_R14,iVar16);
code_r0x00022f30:
                return uVar12;
            }
            bVar14 = uVar2 == 0;
            goto code_r0x0002198f;
        }
        if (iVar16 != 0x10) goto code_r0x00021948;
    }
    uVar2 = fcn.00022f50(uVar6);
    if (uVar2 == 3) {
        uVar12 = 2;
        fcn.000211b0(uVar6,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
        fcn.0002107c(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        fcn.0002107c(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        fcn.0002107c(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(uVar6,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
        fcn.0002107c(uVar6,4,0xb420,0xc,unaff_R15,unaff_R14,unaff_R13);
        uVar7 = 0;
        do {
            iVar16 = unaff_R13;
            iVar15 = unaff_R15;
            if ((in_stack_00000020 & 0x80000000) != 0) break;
            if (*(arg1 + 0x1192) == '0') {
                (**(arg1 + 0x1320))(1000);
            }
            else {
                (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
            }
            iVar16 = unaff_R13;
            iVar15 = unaff_R15;
            uVar7 = uVar7 + 1;
            if (5000 < uVar7) break;
            iVar1 = fcn.0002107c(uVar6,4,0xb420,0xc,iVar15,unaff_R14,iVar16);
            iVar16 = unaff_R13;
            iVar15 = unaff_R15;
        } while (-1 < iVar1);
        fcn.000211b0(uVar6,4,0xb434,0xc,iVar15,unaff_R14,iVar16);
        if (uVar7 < 0x1389) {
            fcn.0002107c(uVar6,1,0xb438,3,iVar15,unaff_R14,iVar16);
            uVar8 = auStackX_10[0] & 0xff;
            auStackX_10[0] = auStackX_10[0] & 0xffff00ff;
            uVar12 = (uVar8 == 0x48) + 1;
        }
        fcn.000211b0(uVar6,4,0xe86c,0xf,iVar15,unaff_R14,iVar16);
        fcn.0002107c(uVar6,4,0xb420,0xc,iVar15,unaff_R14,iVar16);
        fcn.000211b0(uVar6,4,0xb420,0xc,iVar15,unaff_R14,iVar16);
        fcn.0002107c(uVar6,4,0xb420,0xc,iVar15,unaff_R14,iVar16);
        fcn.000211b0(uVar6,4,0xb420,0xc,iVar15,unaff_R14,iVar16);
        return uVar12;
    }
    bVar14 = uVar2 == 2;
code_r0x0002198f:
    if (bVar14) {
        return 2;
    }
    return uVar2;
}


/* fcn.00021e38 @ 0x21e38 */

uint fcn.00021e38(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int64_t arg1_00;
    ulong uVar2;
    uint32_t uVar3;
    uint uVar4;
    int64_t arg4;
    ulong unaff_R13;
    int64_t unaff_R14;
    ulong unaff_R15;
    int16_t aiStackX_10 [4];
    uint32_t uStackX_18;
    uint32_t uStackX_20;
    uint32_t var_48h;
    int32_t var_50h;
    int64_t var_58h;
    int8_t arg_50h;
    int arg_60h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_18 = 0xa000;
    fcn.000211b0(arg1,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
    fcn.0002107c(arg1,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
    uStackX_18 = uStackX_20 | 0xf00000;
    fcn.000211b0(arg1,4,0xb420,0xf,unaff_R15,unaff_R14,unaff_R13);
    fcn.0002107c(arg1,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
    uStackX_18 = uStackX_20 & 0x7fffffff;
    fcn.000211b0(arg1,4,0xb420,0xf,unaff_R15,unaff_R14,unaff_R13);
    fcn.0002107c(arg1,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
    uStackX_18 = uStackX_20 | 0x10000;
    fcn.000211b0(arg1,4,0xb420,0xf,unaff_R15,unaff_R14,unaff_R13);
    uStackX_18 = 0xa000;
    fcn.000211b0(arg1,4,0xe86c,0xf,unaff_R15,unaff_R14,unaff_R13);
    fcn.0002107c(arg1,4,0xb420,0,unaff_R15,unaff_R14,unaff_R13);
    uVar3 = 0;
    do {
        arg_60h = unaff_R13;
        arg_50h = unaff_R15;
        if ((uStackX_20 & 0x80000000) != 0) break;
        if (*(arg1_00 + 0x1192) == '0') {
            (**(arg1_00 + 0x1320))(1000);
        }
        else {
            (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),1000);
        }
        arg_60h = unaff_R13;
        arg_50h = unaff_R15;
        uVar3 = uVar3 + 1;
        if (5000 < uVar3) break;
        iVar1 = fcn.0002107c(arg1,4,0xb420,0,arg_50h,unaff_R14,arg_60h);
        arg_60h = unaff_R13;
        arg_50h = unaff_R15;
    } while (-1 < iVar1);
    uVar2 = 0;
    uStackX_18 = 0x802a0000;
    fcn.000211b0(arg1,4,0xb434,0xf,arg_50h,unaff_R14,arg_60h);
    if (uVar3 < 0x1389) {
        arg4 = 2;
        iVar1 = CONCAT71(uVar2 >> 8,0x1f);
        fcn.000212e8(arg1_00,iVar1,0xa43,2);
        fcn.0002140c(arg1_00,CONCAT71(iVar1 >> 8,0x14),aiStackX_10,arg4);
        if ((aiStackX_10[0] != 0x48) && (uVar4 = 1, aiStackX_10[0] != 0x41)) goto code_r0x0002209e;
    }
    uVar4 = 2;
code_r0x0002209e:
    uStackX_18 = 0xa000;
    fcn.000211b0(arg1,4,0xe86c,0xf,arg_50h,unaff_R14,arg_60h);
    fcn.0002107c(arg1,4,0xb420,0,arg_50h,unaff_R14,arg_60h);
    uStackX_18 = uStackX_20 & 0x7fffffff;
    fcn.000211b0(arg1,4,0xb420,0xf,arg_50h,unaff_R14,arg_60h);
    fcn.0002107c(arg1,4,0xb420,0,arg_50h,unaff_R14,arg_60h);
    uStackX_18 = uStackX_20 & 0xff0fffff;
    fcn.000211b0(arg1,4,0xb420,0xf,arg_50h,unaff_R14,arg_60h);
    return uVar4;
}


/* fcn.00022f50 @ 0x22f50 */

uint32_t fcn.00022f50(uint32_t arg1)

{
    uint32_t uVar1;
    uint in_register_0000000c;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    uint32_t in_stack_00000008;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 0x154a) == '\0') {
        fcn.000211b0(arg1,4,0xe86c,0xf,unaff_BL,unaff_retaddr,in_stack_00000008);
        fcn.0002107c(arg1,4,0xb434,3,unaff_BL,unaff_retaddr,in_stack_00000008);
        uVar1 = ~(in_stack_00000008 >> 0xe) & 1 | 2;
    }
    else {
        fcn.0002107c(arg1,4,0xe908,0,unaff_BL,unaff_retaddr,in_stack_00000008);
        uVar1 = in_stack_00000008 >> 7 & 1;
    }
    return uVar1;
}


/* fcn.00019fa4 @ 0x19fa4 */

void fcn.00019fa4(int64_t arg1)

{
    uint32_t uVar1;
    uint64_t uVar2;
    int8_t unaff_DIL;
    int64_t arg3;
    int64_t unaff_retaddr;
    int arg_60h;
    
    uVar1 = *(arg1 + 5000);
    uVar2 = uVar1;
    if (uVar1 < 9) {
        if ((uVar1 == 8) || (uVar2 = uVar1 - 1, uVar1 - 1 == 0)) goto code_r0x00019fe2;
        uVar2 = uVar1 - 2;
        if ((uVar1 - 2 != 0) && ((uVar2 = uVar1 - 3, uVar1 - 3 != 0 && (uVar2 = uVar1 - 4, uVar1 - 4 != 0)))) {
            uVar2 = uVar1 - 5;
            if (uVar1 - 5 != 0) {
                uVar1 = uVar1 - 6;
                uVar2 = uVar1;
                if ((uVar1 != 0) && (uVar1 != 1)) goto code_r0x0001a036;
            }
            goto code_r0x00019fe2;
        }
code_r0x0001a036:
        fcn.000212e8(arg1,CONCAT71(uVar2 >> 8,0x1f),0,2);
        arg3 = 0x1200;
    }
    else {
        uVar2 = uVar1 - 9;
        if (uVar1 - 9 != 0) {
            if ((((uVar1 != 10) && (uVar1 != 0xb)) && (uVar1 != 0xd)) && (uVar1 != 0xe)) {
                uVar1 = uVar1 - 0xf;
                uVar2 = uVar1;
                if ((uVar1 != 0) && (uVar1 != 1)) goto code_r0x0001a036;
            }
            arg_60h = 0xa000;
            uVar1 = arg1;
            fcn.000211b0(uVar1,4,0xe86c,3,unaff_DIL,unaff_retaddr,0xa000);
            fcn.0002107c(uVar1,4,0xb400,3,unaff_DIL,unaff_retaddr,arg_60h);
            fcn.000211b0(uVar1,4,0xb400,3,unaff_DIL,unaff_retaddr,0x8000);
            goto code_r0x0001a006;
        }
code_r0x00019fe2:
        fcn.000212e8(arg1,CONCAT71(uVar2 >> 8,0x1f),0,2);
        arg3 = 0x9200;
    }
    fcn.000212e8(arg1,0,arg3,2);
code_r0x0001a006:
    *(arg1 + 0x150b) = 1;
    return;
}


/* fcn.0001f3a4 @ 0x1f3a4 */

//WARNING: Variable defined which should be unmapped: var_20h

void fcn.0001f3a4(int64_t arg1)

{
    int iVar1;
    uint32_t arg1_00;
    int unaff_EBP;
    int64_t unaff_RDI;
    int8_t unaff_R14B;
    uint32_t var_20h;
    
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if (((iVar1 == 7) || (iVar1 == 8)) || (iVar1 == 9)) {
        fcn.0002107c(arg1_00,4,0xcf04,0,unaff_R14B,unaff_RDI,unaff_EBP);
    }
    else if (iVar1 != 0xb) {
        return;
    }
    fcn.0002107c(arg1_00,4,0xe908,0xc,unaff_R14B,unaff_RDI,unaff_EBP);
    fcn.000211b0(arg1_00,4,0xe908,0xc,unaff_R14B,unaff_RDI,unaff_EBP);
    fcn.0002107c(arg1_00,4,0xe004,0xc,unaff_R14B,unaff_RDI,unaff_EBP);
    fcn.000211b0(arg1_00,4,0xe004,0xc,unaff_R14B,unaff_RDI,unaff_EBP);
    return;
}


/* fcn.0001a52c @ 0x1a52c */

int64_t fcn.0001a52c(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int unaff_EBP;
    int64_t unaff_RSI;
    int8_t unaff_R14B;
    int32_t var_28h;
    int32_t var_bp_30h;
    
    arg1_00 = arg1;
    iVar1 = fcn.0002107c(arg1_00,4,0xd808,0,unaff_R14B,unaff_RSI,unaff_EBP);
    if ((((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1_00,4,0xd808,0xf,unaff_R14B,unaff_RSI,unaff_EBP), -1 < iVar1)
         ) && (iVar1 = fcn.0002107c(arg1_00,4,0xcffc,0xc,unaff_R14B,unaff_RSI,unaff_EBP), -1 < iVar1)) &&
       (((iVar1 = fcn.000211b0(arg1_00,4,0xcffc,0xc,unaff_R14B,unaff_RSI,unaff_EBP), -1 < iVar1 &&
         (iVar1 = fcn.0002107c(arg1_00,4,0xd818,0,unaff_R14B,unaff_RSI,unaff_EBP), -1 < iVar1)) &&
        (iVar1 = fcn.000211b0(arg1_00,4,0xd818,0xf,unaff_R14B,unaff_RSI,unaff_EBP), -1 < iVar1)))) {
        return iVar1;
    }
    return 0;
}


/* fcn.0001f4d4 @ 0x1f4d4 */

//WARNING: Variable defined which should be unmapped: var_20h

uint fcn.0001f4d4(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int unaff_EBP;
    int64_t unaff_RDI;
    int8_t unaff_R15B;
    int64_t var_20h;
    int32_t var_28h;
    
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if ((iVar1 != 10) && (iVar1 != 0xb)) {
        if ((iVar1 == 0xd) || ((iVar1 == 0xe || (iVar1 == 0xf)))) {
            iVar2 = fcn.000211b0(arg1_00,4,0xe86c,3,unaff_R15B,unaff_RDI,unaff_EBP);
            if (iVar2 < 0) {
                return 0;
            }
            iVar2 = fcn.000211b0(arg1_00,4,0xb434,0xc,unaff_R15B,unaff_RDI,unaff_EBP);
            if (iVar2 < 0) {
                return 0;
            }
            fcn.0002107c(arg1_00,4,0xb438,3,unaff_R15B,unaff_RDI,unaff_EBP);
            return 0;
        }
        if (iVar1 != 0x10) {
            return 0;
        }
    }
    iVar2 = fcn.000211b0(arg1_00,4,0xe86c,3,unaff_R15B,unaff_RDI,unaff_EBP);
    if ((-1 < iVar2) && (iVar2 = fcn.000211b0(arg1_00,4,0xb434,0xc,unaff_R15B,unaff_RDI,unaff_EBP), -1 < iVar2))
    {
        fcn.0002107c(arg1_00,4,0xb438,3,unaff_R15B,unaff_RDI,unaff_EBP);
    }
    return 0;
}


/* fcn.00021528 @ 0x21528 */

void fcn.00021528(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    fcn.000211b0(arg1,4,arg2 & 0xfffc,'\x03' << (arg2 & 3),unaff_BL,unaff_retaddr,in_stack_00000008);
    return;
}


/* fcn.0001cee4 @ 0x1cee4 */

void fcn.0001cee4(int64_t arg1)

{
    uint32_t arg1_00;
    int unaff_R13D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    int64_t var_38h;
    
    arg1_00 = arg1;
    fcn.000211b0(arg1_00,4,0xfc38,1,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc28,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc28,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc2c,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc2c,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc30,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc30,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc34,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc34,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc48,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc28,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc28,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc2c,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc2c,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc30,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc30,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc34,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc34,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc38,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc38,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc3c,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc3c,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc40,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc40,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc44,3,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc44,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc24,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    fcn.000211b0(arg1_00,4,0xfc24,0xc,unaff_R15B,unaff_R14,unaff_R13D);
    return;
}


/* fcn.0001ec20 @ 0x1ec20 */

int64_t fcn.0001ec20(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint16_t uVar2;
    ulong unaff_RSI;
    int64_t unaff_RDI;
    ulong unaff_R12;
    
    iVar1 = fcn.000211b0(arg1,4,0xe86c,3,unaff_R12,unaff_RDI,unaff_RSI);
    if (iVar1 == 0) {
        uVar2 = 0;
        do {
            iVar1 = fcn.0002107c(arg1,4,0xb420,3,unaff_R12,unaff_RDI,unaff_RSI);
            if (iVar1 != 0) {
                return iVar1;
            }
            if ((arg2 & 1U) != 0) {
                return 0;
            }
            uVar2 = uVar2 + 1;
            if (*(arg1 + 0x1192) == '0') {
                (**(arg1 + 0x1320))(1000);
            }
            else {
                (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
            }
            iVar1 = 0;
        } while (uVar2 < 0x3e9);
    }
    return iVar1;
}


/* fcn.0001a360 @ 0x1a360 */

void fcn.0001a360(int64_t arg1)

{
    uint32_t arg1_00;
    ulong unaff_RBX;
    uint8_t uVar1;
    ulong unaff_RDI;
    int64_t unaff_retaddr;
    uint32_t uStackX_18;
    
    uVar1 = 0;
    arg1_00 = arg1;
    fcn.000211b0(arg1_00,4,0xe86c,3,unaff_RDI,unaff_retaddr,unaff_RBX);
    fcn.0002107c(arg1_00,4,0xb430,3,unaff_RDI,unaff_retaddr,unaff_RBX);
    fcn.000211b0(arg1_00,4,0xb430,3,unaff_RDI,unaff_retaddr,unaff_RBX);
    do {
        fcn.0002107c(arg1_00,4,0xe000,0xf,unaff_RDI,unaff_retaddr,unaff_RBX);
        if ((uStackX_18 & 0x100) != 0) {
            return;
        }
        uVar1 = uVar1 + 1;
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(1000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
        }
    } while (uVar1 < 0x15);
    return;
}


/* fcn.0001ed5c @ 0x1ed5c */

void fcn.0001ed5c(int64_t arg1)

{
    int16_t iVar1;
    uint32_t arg1_00;
    uint8_t uVar2;
    int64_t arg4;
    uint32_t var_1f8h;
    int32_t var_200h;
    int32_t var_208h;
    int8_t in_stack_fffffffffffffd58;
    int64_t in_stack_fffffffffffffd60;
    int in_stack_fffffffffffffd68;
    uchar auStack_228 [480];
    int64_t var_bp_40h;
    
    uVar2 = 0;
    fcn.000232c8(&stack0xfffffffffffffd58,0x80);
    fcn.000232c8(auStack_228,0x200);
    arg1_00 = arg1;
    fcn.0002107c(arg1_00,4,0xc0b4,0xf,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,4,0xc0b4,0xf,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,0x80,0xcc00,0xff,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,0x200,0x7c00,0xff,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,0x200,0x7e00,0xff,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,8,0xc130,0xff,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    arg4 = 0xff;
    fcn.000211b0(arg1_00,8,0xc138,0xff,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    do {
        iVar1 = uVar2 * 2;
        fcn.00021528(arg1,iVar1 + 0xc020,0,arg4);
        fcn.00021528(arg1,iVar1 + 0xc100,0,arg4);
        fcn.00021528(arg1,iVar1 + 0xc110,0,arg4);
        fcn.00021528(arg1,iVar1 + 0xc120,0,arg4);
        uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    fcn.0002107c(arg1_00,4,0xe0c4,0xf,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,4,0xe0c4,0xf,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.0002107c(arg1_00,4,0xe820,0xf,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    fcn.000211b0(arg1_00,4,0xe820,0xf,in_stack_fffffffffffffd58,in_stack_fffffffffffffd60,
                 in_stack_fffffffffffffd68);
    return;
}


/* fcn.00015530 @ 0x15530 */

int64_t fcn.00015530(int64_t arg1)

{
    int iVar1;
    int64_t iVar2;
    uint32_t arg1_00;
    int unaff_EDI;
    int64_t arg4;
    int64_t unaff_R13;
    int8_t unaff_R14B;
    int64_t var_30h;
    int32_t var_38h;
    uint32_t var_40h;
    
    iVar1 = *(arg1 + 5000);
    arg1_00 = arg1;
    if (iVar1 < 10) {
        if (iVar1 != 9) {
            if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
                iVar2 = fcn.0002107c(arg1_00,4,0xd800,0,unaff_R14B,unaff_R13,unaff_EDI);
                if (iVar2 < 0) {
                    return iVar2;
                }
                iVar2 = 0xd800;
                goto code_r0x0001560f;
            }
            if (((iVar1 != 5) && (iVar1 != 6)) && ((iVar1 != 7 && (iVar1 != 8)))) {
                return 0;
            }
        }
        iVar2 = fcn.0002107c(arg1_00,4,0xd808,0,unaff_R14B,unaff_R13,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0xd808;
    }
    else {
        if ((iVar1 == 10) || (iVar1 == 0xb)) {
            fcn.0002107c(arg1_00,4,0xd808,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.000211b0(arg1_00,4,0xd808,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            fcn.0002107c(arg1_00,4,0xd818,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            iVar2 = fcn.000211b0(arg1_00,4,0xd818,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            return iVar2;
        }
        if (((iVar1 == 0xd) || (iVar1 == 0xe)) || (iVar1 == 0xf)) {
            iVar2 = fcn.0002107c(arg1_00,4,0xd808,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.000211b0(arg1_00,4,0xd808,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            iVar2 = fcn.0002107c(arg1_00,4,0xcffc,0xc,unaff_R14B,unaff_R13,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            arg4 = 0xc;
            iVar2 = 0xcffc;
        }
        else {
            if (iVar1 != 0x10) {
                return 0;
            }
            iVar2 = fcn.0002107c(arg1_00,4,0xd808,0xf,unaff_R14B,unaff_R13,unaff_EDI);
            if (iVar2 < 0) {
                return iVar2;
            }
            arg4 = 0xf;
            iVar2 = 0xd808;
        }
        iVar2 = fcn.000211b0(arg1_00,4,iVar2,arg4,unaff_R14B,unaff_R13,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = fcn.0002107c(arg1_00,4,0xd818,0xf,unaff_R14B,unaff_R13,unaff_EDI);
        if (iVar2 < 0) {
            return iVar2;
        }
        iVar2 = 0xd818;
    }
code_r0x0001560f:
    iVar2 = fcn.000211b0(arg1_00,4,iVar2,0xf,unaff_R14B,unaff_R13,unaff_EDI);
    if (iVar2 < 0) {
        return iVar2;
    }
    return iVar2;
}


/* fcn.0001a688 @ 0x1a688 */

void fcn.0001a688(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    arg1_00 = arg1;
    iVar1 = fcn.0002107c(arg1_00,4,0xd808,0xf,unaff_BL,unaff_retaddr,in_stack_00000008);
    if (-1 < iVar1) {
        iVar1 = fcn.000211b0(arg1_00,4,0xd808,0xf,unaff_BL,unaff_retaddr,in_stack_00000008);
        if (-1 < iVar1) {
            iVar1 = fcn.0002107c(arg1_00,4,0xcffc,0xc,unaff_BL,unaff_retaddr,in_stack_00000008);
            if (-1 < iVar1) {
                fcn.000211b0(arg1_00,4,0xcffc,0xc,unaff_BL,unaff_retaddr,in_stack_00000008);
            }
        }
    }
    return;
}


/* fcn.0001b33c @ 0x1b33c */

//WARNING: Removing unreachable block (ram,0x0001bbb5)
//WARNING: Removing unreachable block (ram,0x0001bbce)
//WARNING: Removing unreachable block (ram,0x0001bbc1)
//WARNING: Removing unreachable block (ram,0x0001bbe0)
//WARNING: Removing unreachable block (ram,0x0001bbe9)
//WARNING: Removing unreachable block (ram,0x0001c02f)
//WARNING: Removing unreachable block (ram,0x0001c048)
//WARNING: Removing unreachable block (ram,0x0001c03b)
//WARNING: Removing unreachable block (ram,0x0001c05a)
//WARNING: Removing unreachable block (ram,0x0001bff5)

uint64_t fcn.0001b33c(int64_t arg1)

{
    uint32_t uVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint16_t uVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    ulong unaff_R13;
    int64_t unaff_R14;
    ulong unaff_R15;
    uint32_t var_40h;
    int32_t var_48h;
    int8_t iVar8;
    int iVar9;
    
    uVar7 = 0;
    uVar1 = fcn.0001f4d4(arg1);
    if (((*(arg1 + 5000) != 0xd) && (uVar3 = uVar7, *(arg1 + 5000) != 0xe)) || (uVar3 = 0, 1 < uVar1))
    goto code_r0x0001c062;
    uVar1 = arg1;
    iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,unaff_R15,unaff_R14,unaff_R13);
    if (((-1 < iVar2) && (iVar2 = fcn.0002107c(uVar1,4,0xb820,3,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)) &&
       (iVar2 = fcn.000211b0(uVar1,4,0xb820,3,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)) {
        do {
            iVar2 = fcn.0002107c(uVar1,4,0xb800,3,unaff_R15,unaff_R14,unaff_R13);
            if (iVar2 < 0) goto code_r0x0001c07a;
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
            if (*(arg1 + 0x1192) == '0') {
                (**(arg1 + 0x1320))(1000);
            }
            else {
                (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
            }
        } while (uVar6 < 0x65);
        iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,unaff_R15,unaff_R14,unaff_R13);
        if (((-1 < iVar2) && (iVar2 = fcn.000211b0(uVar1,4,0xb434,0xc,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)
            ) && ((((*(arg1 + 5000) != 0xd && (*(arg1 + 5000) != 0xe)) ||
                   (iVar2 = fcn.000211b0(uVar1,4,0xb438,3,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)) &&
                  ((((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2 &&
                     (iVar2 = fcn.0002107c(uVar1,4,0xb82c,0xc,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)) &&
                    (iVar2 = fcn.000211b0(uVar1,4,0xb82c,4,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)) &&
                   ((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2 &&
                    (iVar2 = fcn.0002107c(uVar1,4,0xb820,3,unaff_R15,unaff_R14,unaff_R13), -1 < iVar2)))))))) {
            iVar2 = 3;
            uVar3 = fcn.000211b0(uVar1,4,0xb820,3,unaff_R15,unaff_R14,unaff_R13);
            if (-1 < uVar3) {
                if (*(arg1 + 5000) == 0xd) {
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x28150),*(uVar7 * 4 + 0x28152),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0x100);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x28640),*(uVar7 * 4 + 0x28642),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0xda);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x295d0),*(uVar7 * 4 + 0x295d2),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0x11b);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x29150),*(uVar7 * 4 + 0x29152),iVar2);
                        iVar9 = unaff_R13;
                        iVar8 = unaff_R15;
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0x11f);
                    iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9);
                    if (((((-1 < iVar2) &&
                          (iVar2 = fcn.0002107c(uVar1,4,0xb820,3,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                         ((iVar2 = fcn.000211b0(uVar1,4,0xb820,1,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                          (((((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                              (iVar2 = fcn.000211b0(uVar1,4,0xb434,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                             (iVar2 = fcn.000211b0(uVar1,4,0xb438,3,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                            ((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                             (iVar2 = fcn.0002107c(uVar1,4,0xb82c,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)))) &&
                           (iVar2 = fcn.000211b0(uVar1,4,0xb82c,4,iVar8,unaff_R14,iVar9), -1 < iVar2)))))) &&
                        ((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                         (iVar2 = fcn.000211b0(uVar1,4,0xb434,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)))) &&
                       ((iVar2 = fcn.000211b0(uVar1,4,0xb438,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                        (((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                          (iVar2 = fcn.0002107c(uVar1,4,0xb820,3,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                         (iVar2 = fcn.000211b0(uVar1,4,0xb820,1,iVar8,unaff_R14,iVar9), -1 < iVar2)))))) {
                        uVar3 = fcn.0002107c(uVar1,4,0xb800,3,iVar8,unaff_R14,iVar9);
joined_r0x0001c027:
                        if (-1 < uVar3) goto code_r0x0001c062;
                    }
                }
                else {
                    if (*(arg1 + 5000) != 0xe) goto code_r0x0001c062;
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x28a80),*(uVar7 * 4 + 0x28a82),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0xc4);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x289b0),*(uVar7 * 4 + 0x289b2),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0x32);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x28d90),*(uVar7 * 4 + 0x28d92),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0xef);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x28550),*(uVar7 * 4 + 0x28552),iVar2);
                        if (iVar4 < 0) goto code_r0x0001c07a;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0x3c);
                    uVar7 = 0;
                    do {
                        iVar4 = fcn.00021528(arg1,*(uVar7 * 4 + 0x29a40),*(uVar7 * 4 + 0x29a42),iVar2);
                        iVar9 = unaff_R13;
                        iVar8 = unaff_R15;
                        if (iVar4 < 0) break;
                        uVar5 = uVar7 + 1;
                        uVar7 = uVar5;
                    } while (uVar5 < 0x20);
                    iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9);
                    if (((((-1 < iVar2) &&
                          (iVar2 = fcn.0002107c(uVar1,4,0xb820,3,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                         ((iVar2 = fcn.000211b0(uVar1,4,0xb820,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                          ((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                           (iVar2 = fcn.000211b0(uVar1,4,0xb434,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)))))) &&
                        ((iVar2 = fcn.000211b0(uVar1,4,0xb438,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                         (((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                           (iVar2 = fcn.0002107c(uVar1,4,0xb82c,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                          (iVar2 = fcn.000211b0(uVar1,4,0xb82c,4,iVar8,unaff_R14,iVar9), -1 < iVar2)))))) &&
                       (((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                         (iVar2 = fcn.000211b0(uVar1,4,0xb434,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                        ((((iVar2 = fcn.000211b0(uVar1,4,0xb438,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                           ((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                            (iVar2 = fcn.000211b0(uVar1,4,0xb434,0xc,iVar8,unaff_R14,iVar9), -1 < iVar2)))) &&
                          (iVar2 = fcn.000211b0(uVar1,4,0xb438,3,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                         (((iVar2 = fcn.000211b0(uVar1,4,0xe86c,3,iVar8,unaff_R14,iVar9), -1 < iVar2 &&
                           (iVar2 = fcn.0002107c(uVar1,4,0xb820,3,iVar8,unaff_R14,iVar9), -1 < iVar2)) &&
                          (iVar2 = fcn.000211b0(uVar1,4,0xb820,3,iVar8,unaff_R14,iVar9), -1 < iVar2)))))))) {
                        uVar3 = fcn.0002107c(uVar1,4,0xb800,3,iVar8,unaff_R14,iVar9);
                        goto joined_r0x0001c027;
                    }
                }
            }
        }
    }
code_r0x0001c07a:
    uVar3 = 0;
code_r0x0001c062:
    return uVar3;
}


/* fcn.0001c080 @ 0x1c080 */

void fcn.0001c080(uint32_t arg1)

{
    int64_t iVar1;
    uint in_register_0000000c;
    int unaff_R13D;
    int64_t unaff_R14;
    int8_t unaff_R15B;
    uint32_t var_40h;
    int32_t var_48h;
    
    if (*(CONCAT44(in_register_0000000c,arg1) + 5000) == 0xd) {
        iVar1 = fcn.000211b0(arg1,4,0xe86c,3,unaff_R15B,unaff_R14,unaff_R13D);
        if (-1 < iVar1) {
            iVar1 = fcn.0002107c(arg1,4,0xbd4c,0xc,unaff_R15B,unaff_R14,unaff_R13D);
            if (-1 < iVar1) {
                iVar1 = fcn.000211b0(arg1,4,0xbd4c,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                if (-1 < iVar1) {
                    iVar1 = fcn.0002107c(arg1,4,0xbd14,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                    if (-1 < iVar1) {
                        iVar1 = fcn.000211b0(arg1,4,0xbd14,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                        if (-1 < iVar1) {
                            iVar1 = fcn.000211b0(arg1,4,0xbd30,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                            if (-1 < iVar1) {
                                iVar1 = fcn.0002107c(arg1,4,0xbc08,3,unaff_R15B,unaff_R14,unaff_R13D);
                                if (-1 < iVar1) {
                                    iVar1 = fcn.000211b0(arg1,4,0xbc08,3,unaff_R15B,unaff_R14,unaff_R13D);
                                    if (-1 < iVar1) {
                                        iVar1 = fcn.0002107c(arg1,4,0xbc88,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                                        if (-1 < iVar1) {
                                            iVar1 = fcn.000211b0(arg1,4,0xbc88,0xc,unaff_R15B,unaff_R14,unaff_R13D
                                                                );
                                            if (-1 < iVar1) {
                                                iVar1 = fcn.0002107c(arg1,4,0xbd18,3,unaff_R15B,unaff_R14,
                                                                     unaff_R13D);
                                                if (-1 < iVar1) {
                                                    iVar1 = fcn.000211b0(arg1,4,0xbd18,3,unaff_R15B,unaff_R14,
                                                                         unaff_R13D);
                                                    if (-1 < iVar1) {
                                                        iVar1 = fcn.0002107c(arg1,4,0xbd18,0xc,unaff_R15B,unaff_R14
                                                                             ,unaff_R13D);
                                                        if (-1 < iVar1) {
                                                            iVar1 = fcn.000211b0(arg1,4,0xbd18,0xc,unaff_R15B,
                                                                                 unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xbd1c,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xbd1c,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xe86c,3,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438
                                                                                                         ,3,unaff_R15B
                                                                                                         ,unaff_R14,
                                                                                                         unaff_R13D);
                                                                                    if (-1 < iVar1) {
                                                                                        iVar1 = fcn.000211b0(arg1,4,
                                                            0xb434,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.0002107c(arg1,4,0xb438,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xb434
                                                                                                         ,0xc,
                                                            unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xe86c,3,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438
                                                                                                         ,3,unaff_R15B
                                                                                                         ,unaff_R14,
                                                                                                         unaff_R13D);
                                                                                    if (-1 < iVar1) {
                                                                                        iVar1 = fcn.000211b0(arg1,4,
                                                            0xb434,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.0002107c(arg1,4,0xb438,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xb434
                                                                                                         ,0xc,
                                                            unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.0002107c(arg1,4,0xb438,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xb434
                                                                                                         ,0xc,
                                                            unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.0002107c(arg1,4,0xb438,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xb434
                                                                                                         ,0xc,
                                                            unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.0002107c(arg1,4,0xb438,3,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xb438,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.0002107c(arg1,4,0xb438,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1,4,0xb438,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xe86c
                                                                                                         ,3,unaff_R15B
                                                                                                         ,unaff_R14,
                                                                                                         unaff_R13D);
                                                                                    if (-1 < iVar1) {
                                                                                        iVar1 = fcn.0002107c(arg1,4,
                                                            0xbf04,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.000211b0(arg1,4,0xbf04,0xc,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xe86c,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.000211b0(arg1,4,0xb434,0xc,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            iVar1 = fcn.000211b0(arg1,4,0xb438,3,
                                                                                                 unaff_R15B,unaff_R14,
                                                                                                 unaff_R13D);
                                                                            if (-1 < iVar1) {
                                                                                iVar1 = fcn.000211b0(arg1,4,0xe86c,3
                                                                                                     ,unaff_R15B,
                                                                                                     unaff_R14,
                                                                                                     unaff_R13D);
                                                                                if (-1 < iVar1) {
                                                                                    iVar1 = fcn.000211b0(arg1,4,0xbc34
                                                                                                         ,3,unaff_R15B
                                                                                                         ,unaff_R14,
                                                                                                         unaff_R13D);
                                                                                    if (-1 < iVar1) {
                                                                                        iVar1 = fcn.0002107c(arg1,4,
                                                            0xbf08,0xc,unaff_R15B,unaff_R14,unaff_R13D);
                                                            if (-1 < iVar1) {
                                                                iVar1 = fcn.000211b0(arg1,4,0xbf08,0xc,unaff_R15B,
                                                                                     unaff_R14,unaff_R13D);
                                                                if (-1 < iVar1) {
                                                                    iVar1 = fcn.000211b0(arg1,4,0xe86c,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                    if (-1 < iVar1) {
                                                                        iVar1 = fcn.0002107c(arg1,4,0xbd2c,3,
                                                                                             unaff_R15B,unaff_R14,
                                                                                             unaff_R13D);
                                                                        if (-1 < iVar1) {
                                                                            fcn.000211b0(arg1,4,0xbd2c,3,unaff_R15B
                                                                                         ,unaff_R14,unaff_R13D);
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}


/* fcn.0001a480 @ 0x1a480 */

void fcn.0001a480(int64_t arg1)

{
    uint32_t arg1_00;
    int8_t unaff_BL;
    int64_t unaff_retaddr;
    int in_stack_00000008;
    
    arg1_00 = arg1;
    fcn.000211b0(arg1_00,4,0xe86c,3,unaff_BL,unaff_retaddr,in_stack_00000008);
    fcn.0002107c(arg1_00,4,0xb430,3,unaff_BL,unaff_retaddr,in_stack_00000008);
    fcn.000211b0(arg1_00,4,0xb430,3,unaff_BL,unaff_retaddr,in_stack_00000008);
    return;
}


/* fcn.00013014 @ 0x13014 */

ulong fcn.00013014(uint32_t arg1)

{
    uint32_t *arg2;
    int64_t iVar1;
    uchar *puVar2;
    int iVar3;
    uint32_t uVar4;
    uint in_register_0000000c;
    int64_t arg1_00;
    int64_t iVar5;
    int64_t in_RDX;
    uint32_t *puVar6;
    uint64_t uVar7;
    int64_t in_R9;
    ulong unaff_R13;
    int64_t unaff_R14;
    ulong unaff_R15;
    uint32_t uStackX_8;
    int64_t var_40h;
    int32_t var_48h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar7 = 0;
    *(arg1_00 + 0x150) = 0;
    if ((*(arg1_00 + 0x11f0) == '\0') && (((iVar3 = *(arg1_00 + 5000), iVar3 == 7 || (iVar3 == 8)) || (iVar3 == 9)))) {
        fcn.0001703c(arg1_00);
    }
    iVar3 = *(arg1_00 + 5000);
    if (iVar3 < 10) {
        if (((iVar3 != 9) && (iVar3 != 2)) && ((iVar3 != 3 && (iVar3 != 4)))) {
            iVar3 = iVar3 + -5;
            goto code_r0x00013091;
        }
    }
    else if ((iVar3 != 10) && (iVar3 != 0xb)) {
        iVar3 = iVar3 + -0xd;
code_r0x00013091:
        if ((((iVar3 != 0) && (iVar3 != 1)) && (iVar3 != 2)) && (iVar3 != 3)) goto code_r0x000131b3;
    }
    in_R9 = 0;
    in_RDX = 4;
    fcn.0002107c(arg1,4,0xc3f0,0,unaff_R15,unaff_R14,unaff_R13);
    if ((uStackX_8 & 0xffff0000) == 0xd4500000) {
        fcn.0002107c(arg1,4,0xd428,0,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(arg1,4,0xd428,0xf,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(arg1,4,0xc3f0,0xf,unaff_R15,unaff_R14,unaff_R13);
        fcn.0002107c(arg1,4,0xd428,0,unaff_R15,unaff_R14,unaff_R13);
        in_R9 = 0xf;
        in_RDX = 4;
        fcn.000211b0(arg1,4,0xd428,0xf,unaff_R15,unaff_R14,unaff_R13);
    }
code_r0x000131b3:
    if (*(arg1_00 + 0x11a8) == '\0') {
        *(arg1_00 + 0x11a0) = 1;
    }
    fcn.00012254(arg1_00,in_RDX);
    *(arg1_00 + 0x14e8) = 0;
    *(arg1_00 + 0x14d8) = 0;
    *(arg1_00 + 0x14c8) = 0;
    *(arg1_00 + 0x14b8) = 0;
    *(arg1_00 + 0x14a8) = 0;
    *(arg1_00 + 0x1498) = 0;
    fcn.00014ae4(arg1_00,CONCAT71(in_RDX >> 8,1));
    fcn.0001d9dc(arg1_00);
    fcn.000144ac(arg1_00);
    fcn.00014bac(arg1_00);
    if (*(arg1_00 + 5000) != 1) {
        in_R9 = 0;
        iVar1 = fcn.0002107c(arg1,4,0xe84c,0,unaff_R15,unaff_R14,unaff_R13);
        if (-1 < iVar1) {
            in_R9 = 0xf;
            iVar1 = fcn.000211b0(arg1,4,0xe84c,0xf,unaff_R15,unaff_R14,unaff_R13);
            if (-1 < iVar1) {
                in_R9 = 0;
                iVar1 = fcn.0002107c(arg1,4,0xe8dc,0,unaff_R15,unaff_R14,unaff_R13);
                if (-1 < iVar1) {
                    in_R9 = 0xf;
                    iVar1 = fcn.000211b0(arg1,4,0xe8dc,0xf,unaff_R15,unaff_R14,unaff_R13);
                    if (-1 < iVar1) {
                        do {
                            in_R9 = 0;
                            iVar1 = fcn.0002107c(arg1,4,0xe84c,0,unaff_R15,unaff_R14,unaff_R13);
                            if ((iVar1 < 0) || ((uStackX_8 & 0x2000000) != 0)) break;
                            uVar7 = uVar7 + 1;
                            if (*(arg1_00 + 0x1192) == '0') {
                                (**(arg1_00 + 0x1320))(10000);
                            }
                            else {
                                (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),10000);
                            }
                        } while (uVar7 < 0x65);
                    }
                }
            }
        }
    }
    fcn.000124ec(arg1_00);
    fcn.0001dc48(arg1);
    fcn.0001e7c0(arg1);
    fcn.00014c78(arg1_00);
    fcn.000153c4(arg1_00);
    fcn.00012b1c(arg1_00);
    iVar1 = arg1_00 + 0xd4;
    arg2 = arg1_00 + 0x1380;
    puVar6 = arg2;
    iVar5 = iVar1;
    fcn.00012074(arg1,arg2,iVar1);
    fcn.00019c38(arg1,puVar6,iVar5,in_R9);
    fcn.00012d04(arg1_00);
    iVar5 = 0x1a;
    *(arg1_00 + 0x11c) = 0xffffffff;
    *(arg1_00 + 0x120) = 0xffff;
    puVar2 = arg1_00 + 0xe2;
    do {
        puVar2[0x20] = 0;
        *puVar2 = 0;
        puVar2[0x40] = 0;
        puVar2 = puVar2 + 1;
        iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    fcn.00014ae4(arg1_00,0);
    fcn.00014588(arg1_00);
    fcn.00012074(arg1,arg2,iVar1);
    *(arg1_00 + 0x1190) = 2;
    uVar4 = *(arg1_00 + 0xd0) | 4;
    if (*arg2 == '\0') {
        uVar4 = *(arg1_00 + 0xd0) & 0xfffffffb;
    }
    *(arg1_00 + 0xd0) = uVar4;
    if (*(arg1_00 + 0x1511) != '\0') {
        (**(*(arg1_00 + 0x1308) + 0x10))(*(arg1_00 + 0x1308),*(arg1_00 + 0x140f),1,4,10,0x142b4,arg1_00);
    }
    *(arg1_00 + 0x48) = 0;
    *(arg1_00 + 0x115a) = 0;
    *(arg1_00 + 0x1158) = 0;
    if (*(arg1_00 + 0x1192) == '0') {
        (**(arg1_00 + 0x1320))(5000);
    }
    else {
        (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),5000);
    }
    return 0;
}


/* fcn.0001378c @ 0x1378c */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_bp_10h

void fcn.0001378c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint16_t uVar1;
    uint8_t uVar2;
    uint32_t uVar3;
    int iVar4;
    uint64_t uVar5;
    uint16_t uVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint64_t uVar9;
    uint64_t uVar10;
    uint16_t uVar11;
    uint8_t *puVar12;
    uint64_t uVar13;
    uint64_t uVar14;
    uint8_t *puVar15;
    uint8_t uVar16;
    int iVar17;
    int64_t iVar18;
    int64_t arg3_00;
    int64_t iVar19;
    ulong unaff_R15;
    ulong *arg1_00;
    int64_t iStackX_8;
    uint32_t auStackX_10 [2];
    uchar uStackX_18;
    int8_t var_50h;
    ushort in_stack_ffffffffffffffb8;
    int64_t in_stack_ffffffffffffffc0;
    int64_t var_bp_10h;
    int64_t var_bp_8h;
    
    uVar6 = arg2;
    auStackX_10[0] = CONCAT22(auStackX_10[0]._2_2_,uVar6);
    iVar17 = *(arg1 + 5000);
    uVar11 = 0;
    uStackX_18 = 0;
    arg3_00 = 0;
    if (iVar17 < 9) {
        if (iVar17 != 8) {
            if (iVar17 == 1) {
                arg3_00 = 0x44;
                uStackX_18 = 0;
                goto code_r0x0001381c;
            }
            if ((iVar17 != 2) && (iVar17 != 3)) {
                iVar17 = iVar17 + -4;
                goto code_r0x00013801;
            }
        }
code_r0x00013812:
        arg3_00 = 0xc010;
        uStackX_18 = 1;
    }
    else {
        if (((iVar17 == 9) || (iVar17 == 10)) || (iVar17 == 0xb)) goto code_r0x00013812;
        iVar17 = iVar17 + -0xd;
code_r0x00013801:
        if (((iVar17 == 0) || (iVar17 == 1)) || ((iVar17 == 2 || (iVar17 == 3)))) goto code_r0x00013812;
    }
code_r0x0001381c:
    iVar19 = arg3_00;
    iStackX_8 = arg1;
    fcn.0002107c(arg1,4,arg3_00,0,in_stack_ffffffffffffffb8,in_stack_ffffffffffffffc0,unaff_R15);
    uVar2 = in_stack_ffffffffffffffb8;
    iVar17 = unaff_R15;
    *(arg1 + 0x1190) = uVar6;
    if (((arg2 & 4U) != 0) || (arg3 != 0)) {
        if (arg3 != 0) {
            uVar1 = arg4 >> 5;
            *(arg1 + 0x11fc) = uVar1;
            if (uVar1 != 0) {
                do {
                    uVar2 = in_stack_ffffffffffffffb8;
                    iVar17 = unaff_R15;
                    if (7 < uVar11) break;
                    iVar19 = 0;
                    fcn.0002322c(arg1 + 0x11fe + uVar11 * 0x20,uVar11 * 0x20 + arg3,0x20);
                    uVar2 = in_stack_ffffffffffffffb8;
                    iVar17 = unaff_R15;
                    uVar11 = uVar11 + 1;
                } while (uVar11 < uVar1);
                uVar6 = auStackX_10[0];
            }
        }
        if ((arg2 & 4U) != 0) {
            *(arg1 + 0x1190) = *(arg1 + 0x1190) | 4;
            arg1_00 = arg1 + 0x1188;
            *arg1_00 = 0;
            uVar13 = *(arg1 + 0x11fc);
            if (uVar13 != 0) {
                puVar12 = arg1 + 0x11fe + uVar13 * 0x20;
                do {
                    uVar3 = 0xffffffff;
                    iVar19 = 6;
                    puVar15 = puVar12;
                    do {
                        uVar16 = *puVar15;
                        iVar18 = 8;
                        do {
                            uVar7 = uVar3 >> 0x1f;
                            uVar3 = uVar3 * 2;
                            uVar8 = uVar16;
                            uVar16 = uVar16 >> 1;
                            uVar8 = (uVar7 ^ uVar8) & 1;
                            if (uVar8 != 0) {
                                uVar3 = uVar3 ^ 0x4c11db6 | uVar8;
                            }
                            iVar18 = iVar18 + -1;
                        } while (iVar18 != 0);
                        puVar15 = puVar15 + 1;
                        iVar19 = iVar19 + -1;
                    } while (iVar19 != 0);
                    puVar12 = puVar12 + -0x20;
                    *((uVar3 >> 0x1d) + 0x1188 + iStackX_8) =
                         *((uVar3 >> 0x1d) + 0x1188 + iStackX_8) | 1 << (uVar3 >> 0x1a & 7);
                    uVar13 = uVar13 - 1;
                } while (uVar13 != 0);
                arg1_00 = iStackX_8 + 0x1188;
                arg1 = iStackX_8;
                uVar6 = auStackX_10[0];
            }
            uVar10 = 4;
            uVar5 = 0;
            uVar13 = uVar5;
            uVar9 = uVar5;
            uVar14 = uVar5;
            do {
                puVar12 = arg1_00 + uVar9;
                uVar9 = uVar9 + 1;
                uVar16 = uVar13;
                uVar13 = uVar13 + 8;
                uVar3 = uVar14 + (*puVar12 << (uVar16 & 0x1f));
                uVar14 = uVar3;
            } while (uVar13 < 0x20);
            uVar13 = uVar5;
            do {
                puVar12 = arg1_00 + uVar10;
                uVar10 = uVar10 + 1;
                uVar16 = uVar5;
                uVar5 = uVar5 + 8;
                uVar8 = uVar13 + (*puVar12 << (uVar16 & 0x1f));
                uVar13 = uVar8;
            } while (uVar10 < 8);
            iStackX_8 = CONCAT44(iStackX_8._4_4_,
                                 (uVar3 & 0xff0000 | uVar3 >> 0x10) >> 8 | (uVar3 * 0x10000 | uVar3 & 0xff00) << 8);
            auStackX_10[0] = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 * 0x1000000;
            fcn.0002322c(arg1_00,auStackX_10,4);
            iVar19 = 0;
            fcn.0002322c(arg1 + 0x118c,&iStackX_8,4);
            fcn.00014928(arg1,arg1_00);
        }
    }
    uVar2 = uVar2 & 0xc0;
    *(arg1 + 0x1190) = uVar6;
    uVar11 = 0;
    if (uVar6 != 0) {
        if ((uVar6 & 1) != 0) {
            uVar2 = uVar2 | 2;
        }
        if ((uVar6 & 2) != 0) {
            uVar2 = uVar2 | 8;
        }
        if ((uVar6 & 8) != 0) {
            iVar19 = CONCAT71(iVar19 >> 8,0xff);
            fcn.00023410(&stack0xffffffffffffffc0,8,iVar19);
            fcn.00014928(arg1,&stack0xffffffffffffffc0);
            uVar2 = uVar2 | 0x3f;
        }
        if ((uVar6 & 0x10) != 0) {
            iVar19 = CONCAT71(iVar19 >> 8,0xff);
            fcn.00023410(&stack0xffffffffffffffc0,8,iVar19);
            fcn.00014928(arg1,&stack0xffffffffffffffc0);
            uVar2 = uVar2 | 4;
        }
        if ((arg2 & 4U) != 0) {
            uVar2 = uVar2 | 4;
        }
    }
    fcn.00023410(&stack0xffffffffffffffc0,8,CONCAT71(iVar19 >> 8,0xff));
    fcn.00014928(arg1,&stack0xffffffffffffffc0);
    iVar4 = *(arg1 + 5000);
    if (iVar4 < 9) {
        if (iVar4 != 8) {
            if (iVar4 == 1) {
                arg3_00 = 0x44;
                goto code_r0x00013b7e;
            }
            if ((iVar4 != 2) && (iVar4 != 3)) {
                iVar4 = iVar4 + -4;
                goto code_r0x00013b5e;
            }
        }
    }
    else if (((iVar4 != 9) && (iVar4 != 10)) && (iVar4 != 0xb)) {
        iVar4 = iVar4 + -0xd;
code_r0x00013b5e:
        uVar11 = 0;
        if (((iVar4 != 0) && (iVar4 != 1)) && ((iVar4 != 2 && (iVar4 != 3)))) goto code_r0x00013b7e;
    }
    arg3_00 = 0xc010;
    uVar11 = 3;
code_r0x00013b7e:
    fcn.000211b0(arg1,4,arg3_00,uVar11,uVar2 | 0xe,in_stack_ffffffffffffffc0,iVar17);
    *(arg1 + 0x1549) = 1;
    return;
}


/* fcn.000158a8 @ 0x158a8 */

//WARNING: Removing unreachable block (ram,0x00015e9c)

void fcn.000158a8(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int iVar2;
    int64_t arg2;
    uint8_t uVar3;
    int64_t arg4;
    ulong unaff_R13;
    int64_t unaff_R14;
    ulong unaff_R15;
    uint32_t uStackX_8;
    int64_t var_40h;
    uint32_t var_48h;
    uint32_t var_50h;
    int8_t arg_50h;
    int arg_60h;
    
    iVar2 = *(arg1 + 5000);
    uVar3 = 0;
    arg2 = 4;
    arg1_00 = arg1;
    if (iVar2 == 8) {
        fcn.0002107c(arg1_00,4,0xcfc8,0,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(arg1_00,4,0xcfc8,8,unaff_R15,unaff_R14,unaff_R13);
        fcn.0002107c(arg1_00,4,0xc0b0,0,unaff_R15,unaff_R14,unaff_R13);
        fcn.000211b0(arg1_00,4,0xc0b0,1,unaff_R15,unaff_R14,unaff_R13);
        iVar2 = *(arg1 + 5000);
    }
    if (((iVar2 == 7) || (iVar2 == 8)) || (iVar2 == 9)) {
        uStackX_8 = 0;
        fcn.000211b0(arg1_00,4,0xe434,3,unaff_R15,unaff_R14,unaff_R13);
        iVar2 = *(arg1 + 5000);
    }
    arg_60h = unaff_R13;
    arg_50h = unaff_R15;
    if (iVar2 - 7U < 2) {
        do {
            fcn.0002107c(arg1_00,4,0xe404,0,unaff_R15,unaff_R14,unaff_R13);
            arg_60h = unaff_R13;
            arg_50h = unaff_R15;
            if ((uStackX_8 & 1) == 0) break;
            if (*(arg1 + 0x1192) == '0') {
                (**(arg1 + 0x1320))(1000);
            }
            else {
                (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
            }
            arg_60h = unaff_R13;
            arg_50h = unaff_R15;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 200);
    }
    iVar1 = fcn.000211b0(arg1_00,4,0xfc38,1,arg_50h,unaff_R14,arg_60h);
    if (((((-1 < iVar1) && (iVar1 = fcn.000211b0(arg1_00,4,0xfc28,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) &&
         ((iVar1 = fcn.000211b0(arg1_00,4,0xfc28,0xc,arg_50h,unaff_R14,arg_60h), -1 < iVar1 &&
          ((iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1 &&
           (iVar1 = fcn.000211b0(arg1_00,4,0xfc2c,0xc,arg_50h,unaff_R14,arg_60h), -1 < iVar1)))))) &&
        (iVar1 = fcn.000211b0(arg1_00,4,0xfc30,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) &&
       (((iVar1 = fcn.000211b0(arg1_00,4,0xfc30,0xc,arg_50h,unaff_R14,arg_60h), -1 < iVar1 &&
         (iVar1 = fcn.000211b0(arg1_00,4,0xfc34,3,arg_50h,unaff_R14,arg_60h), -1 < iVar1)) &&
        (iVar1 = fcn.000211b0(arg1_00,4,0xfc34,0xc,arg_50h,unaff_R14,arg_60h), -1 < iVar1)))) {
        if (*(arg1 + 0x1192) == '0') {
            (**(arg1 + 0x1320))(3000);
        }
        else {
            (**(arg1 + 0x1340))(*(arg1 + 0x1300),3000);
        }
        fcn.000211b0(arg1_00,4,0xfc24,0xc,arg_50h,unaff_R14,arg_60h);
    }
    iVar2 = *(arg1 + 5000);
    if (iVar2 == 7) {
        fcn.000211b0(arg1_00,0x15c,0xf800,0xff,arg_50h,unaff_R14,arg_60h);
        arg2 = 0x18;
        iVar1 = 0xfc24;
        arg4 = 0x3c;
    }
    else if (iVar2 == 8) {
        fcn.000211b0(arg1_00,0x188,0xf800,0xff,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,0x14,0xfc24,0x3c,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xcfec,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xfc30,3,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xfc38,3,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xcfc8,0,arg_50h,unaff_R14,arg_60h);
        arg4 = 8;
        iVar1 = 0xcfc8;
    }
    else {
        if (iVar2 != 9) goto code_r0x00015ee8;
        fcn.000211b0(arg1_00,0x8c,0xf800,0xff,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,0x18,0xfc24,0x3c,arg_50h,unaff_R14,arg_60h);
        fcn.0002107c(arg1_00,4,0xcfec,0,arg_50h,unaff_R14,arg_60h);
        fcn.000211b0(arg1_00,4,0xfc28,3,arg_50h,unaff_R14,arg_60h);
        iVar1 = 0xfc38;
        arg4 = 3;
    }
    fcn.000211b0(arg1_00,arg2,iVar1,arg4,arg_50h,unaff_R14,arg_60h);
code_r0x00015ee8:
    *(arg1 + 0x11f0) = 0;
    return;
}


/* fcn.000142f8 @ 0x142f8 */

ulong fcn.000142f8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t arg3_00;
    ulong uStack_248;
    int64_t iStack_240;
    int64_t iStack_238;
    int64_t iStack_218;
    int64_t iStack_210;
    int64_t iStack_208;
    int64_t iStack_1f8;
    int64_t iStack_1f0;
    int64_t iStack_1e8;
    int64_t iStack_1c8;
    int64_t iStack_1c0;
    int64_t iStack_1b8;
    int64_t iStack_1a8;
    
    arg3_00 = 0x208;
    fcn.000232c8(&uStack_248,0x208);
    if (arg3 == 0) {
        *(arg1 + 0x14e8) = 0;
        *(arg1 + 0x14d8) = 0;
        *(arg1 + 0x14c8) = 0;
        *(arg1 + 0x14b8) = 0;
        *(arg1 + 0x14a8) = 0;
        *(arg1 + 0x1498) = 0;
    }
    else {
        iStack_208 = *(arg1 + 0x14d8);
        iStack_218 = *(arg1 + 0x14c8);
        iStack_1b8 = *(arg1 + 0x14a8);
        iStack_1c8 = *(arg1 + 0x1498);
        iStack_210 = *(arg1 + 0x14e8);
        iStack_1c0 = *(arg1 + 0x14b8);
        iStack_240 = iStack_218 + iStack_208 + iStack_210;
        iStack_1f8 = *(arg1 + 0x14f0) + *(arg1 + 0x14e0) + *(arg1 + 0x14d0);
        iStack_1e8 = iStack_1c8 + iStack_1b8 + iStack_1c0;
        iStack_1a8 = *(arg1 + 0x14c0) + *(arg1 + 0x14b0) + *(arg1 + 0x14a0);
        if (arg3 < 0x209) {
            arg3_00 = arg3 & 0xffff;
        }
        *(arg1 + 0x1458) = iStack_1e8;
        *(arg1 + 0x1490) = iStack_1a8;
        *(arg1 + 0x1418) = iStack_240;
        *(arg1 + 0x1420) = iStack_240;
        *(arg1 + 0x1430) = iStack_218;
        *(arg1 + 0x1438) = iStack_210;
        *(arg1 + 0x1440) = iStack_208;
        *(arg1 + 0x1488) = iStack_1f8;
        *(arg1 + 0x1450) = iStack_240;
        *(arg1 + 0x1460) = iStack_1c8;
        *(arg1 + 0x1468) = iStack_1c0;
        *(arg1 + 0x1470) = iStack_1b8;
        uStack_248 = 0xb8ee3;
        iStack_238 = iStack_240;
        iStack_1f0 = iStack_240;
        fcn.0002322c(arg2,&uStack_248,arg3_00);
    }
    return 0;
}


/* fcn.000134e4 @ 0x134e4 */

ulong fcn.000134e4(uint32_t arg1,int64_t arg2)

{
    uint8_t uVar1;
    uint8_t *arg2_00;
    uchar uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    int iVar5;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar *puVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    int16_t iVar9;
    ulong uVar10;
    uint64_t uStackX_8;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    arg2_00 = *arg2;
    uVar8 = *(arg2 + 0xc) + *(arg2 + 8);
    uVar10 = 0;
    if (((*(arg1_00 + 0x1534) != '\0') || (*(arg1_00 + 0x1544) != '\0')) &&
       (iVar3 = fcn.0002333c(arg2_00,arg2_00 + 6,6), iVar3 != 0)) {
        return 3;
    }
    uVar7 = 0x3c;
    if (0x3b < uVar8) {
        if (2000 < uVar8) {
            uVar10 = 0xc;
            goto code_r0x00013735;
        }
        uVar7 = uVar8 & 0xffff;
    }
    fcn.00023410(*(arg1_00 + 0x14c) * *(arg1_00 + 0x1174) + *(arg1_00 + 0x68),*(arg1_00 + 0x1174),0);
    uVar1 = *(arg1_00 + 0x117a);
    puVar6 = *(arg1_00 + 0x14c) * *(arg1_00 + 0x1174) + *(arg1_00 + 0x68);
    iVar5 = *(arg1_00 + 5000);
    uVar2 = uVar7 >> 8;
    if (iVar5 < 9) {
        if (iVar5 != 8) {
            if (iVar5 == 1) {
                *puVar6 = uVar7;
                puVar6[1] = uVar2;
                puVar6[3] = 0x30;
                fcn.0002322c(puVar6 + uVar1,arg2_00,uVar7);
                uStackX_8 = uVar7 + *(arg1_00 + 0x117a);
                if ((uStackX_8 & 0x1ff) == 0) {
                    uStackX_8 = uStackX_8 + 1;
                }
                goto code_r0x00013682;
            }
            if ((iVar5 != 2) && (iVar5 != 3)) {
                iVar5 = iVar5 + -4;
                goto code_r0x00013630;
            }
        }
code_r0x0001364d:
        *puVar6 = uVar7;
        puVar6[1] = uVar2;
        puVar6[3] = 0xc0;
        fcn.0002322c(puVar6 + uVar1,arg2_00,uVar7);
        uStackX_8 = *(arg1_00 + 0x117a) + uVar7;
    }
    else {
        if (((iVar5 == 9) || (iVar5 == 10)) || (iVar5 == 0xb)) goto code_r0x0001364d;
        iVar5 = iVar5 + -0xd;
code_r0x00013630:
        if ((((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) || (iVar5 == 3)) goto code_r0x0001364d;
        uStackX_8 = 0;
    }
code_r0x00013682:
    uVar4 = *(arg2 + 8);
    if ((*arg2_00 == 0xff) && (arg2_00[1] == 0xff)) {
        *(arg1_00 + 0x14b8) = *(arg1_00 + 0x14b8) + 1;
        *(arg1_00 + 0x14c0) = *(arg1_00 + 0x14c0) + uVar4;
    }
    else if ((*arg2_00 & 1) == 0) {
        *(arg1_00 + 0x1498) = *(arg1_00 + 0x1498) + 1;
        *(arg1_00 + 0x14a0) = *(arg1_00 + 0x14a0) + uVar4;
    }
    else {
        *(arg1_00 + 0x14a8) = *(arg1_00 + 0x14a8) + 1;
        *(arg1_00 + 0x14b0) = *(arg1_00 + 0x14b0) + uVar4;
    }
    iVar3 = fcn.00012f48(arg1_00,1,*(arg1_00 + 0x14c) * *(arg1_00 + 0x1174) + *(arg1_00 + 0x68),&uStackX_8);
    uVar8 = *(arg1_00 + 0x14c) + 1;
    *(arg1_00 + 0x14c) = uVar8 + ((uVar8 * 0x108421085 >> 0x21) >> 8) * -0x1f0;
    if (iVar3 < 0) {
        uVar10 = 10;
    }
code_r0x00013735:
    *(arg1_00 + 0x158 + *(arg1_00 + 0x115a) * 8) = *arg2;
    *(arg1_00 + 0x115c) = *(arg1_00 + 0x115c) + 1;
    iVar9 = 0;
    if (*(arg1_00 + 0x115a) != 0x1ff) {
        iVar9 = *(arg1_00 + 0x115a) + 1;
    }
    *(arg1_00 + 0x115a) = iVar9;
    return uVar10;
}


/* fcn.00013bf0 @ 0x13bf0 */

uint fcn.00013bf0(uint32_t arg1,uint32_t arg2,int64_t arg3)

{
    int16_t *piVar1;
    uint8_t *puVar2;
    uint32_t uVar3;
    char cVar4;
    int16_t iVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    int64_t iVar8;
    uint64_t uVar9;
    uint in_register_0000000c;
    int64_t arg1_00;
    uint in_register_00000014;
    int64_t *piVar10;
    uint uVar11;
    int64_t iVar12;
    uint64_t uStackX_10;
    
    piVar10 = CONCAT44(in_register_00000014,arg2);
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uStackX_10 = 0;
    uVar11 = 0x13;
    if (piVar10[1] == 0x1fe8) {
        fcn.0001a2ac(arg1_00);
        return 0x13;
    }
    if ((*(arg1_00 + 0x1534) != '\0') && (*(piVar10 + 1) != *(arg1_00 + 0x1538))) {
        return 0x13;
    }
    if ((*(arg1_00 + 0x1544) != '\0') && (piVar10[1] != 3000)) {
        return 0x13;
    }
    uVar6 = *(arg1_00 + 0x1194);
    if (*(arg1_00 + 0x1532) != '\0') {
        uVar7 = *(arg1_00 + 0x1196);
        if (uVar7 == uVar6) {
            fcn.000232c8(uVar6 * *(arg1_00 + 0x1178) + *(arg1_00 + 0x70),*(arg1_00 + 0x1178));
            *(*(arg1_00 + 0x90) + *(arg1_00 + 0x1194) * 2) = 0;
            *(*(arg1_00 + 0x98) + *(arg1_00 + 0x1194) * 2) = 0;
            uStackX_10 = *(arg1_00 + 0x1178);
            iVar8 = fcn.00012f48(arg1_00,0,*(arg1_00 + 0x1178) * *(arg1_00 + 0x1194) + *(arg1_00 + 0x70),&uStackX_10)
            ;
            *(arg1_00 + 0x11ef) = 1;
            if ((-1 < iVar8) && (uStackX_10 < 0xc001)) {
                if (uStackX_10 != 0) {
                    uVar9 = uStackX_10;
                    if ((uStackX_10 % *(arg1_00 + 0x150e) != 0) &&
                       (iVar5 = fcn.000149cc(arg1_00,*(arg1_00 + 0x1194) * *(arg1_00 + 0x1178) + *(arg1_00 + 0x70)),
                       iVar5 == 0)) {
                        return 0x13;
                    }
                    *(*(arg1_00 + 0x90) + *(arg1_00 + 0x1194) * 2) = uVar9;
                    cVar4 = fcn.0001f2a8(arg1_00);
                    if (cVar4 == '\0') {
                        fcn.00014118(arg1_00);
                        return 0x13;
                    }
                    uVar7 = *(arg1_00 + 0x1196);
                    *(arg1_00 + 0x1194) = *(arg1_00 + 0x1194) + 1U & 0x3ff;
                    goto code_r0x00013dd2;
                }
                *(arg1_00 + 0x11ef) = 0;
            }
            uVar7 = *(arg1_00 + 0x1196);
            if (uVar7 == *(arg1_00 + 0x1194)) {
                return 0x13;
            }
        }
code_r0x00013dd2:
        uVar6 = *(*(arg1_00 + 0x98) + uVar7 * 2);
        if (uVar6 < *(*(arg1_00 + 0x90) + uVar7 * 2)) {
            iVar8 = uVar7 * *(arg1_00 + 0x1178) + uVar6 + *(arg1_00 + 0x70);
            uVar6 = fcn.000149cc(arg1_00,iVar8);
            uVar7 = fcn.00014a48(arg1_00,iVar8);
            if (uVar6 - 1 < 0x5f2) {
                fcn.0002322c(*piVar10,
                             *(arg1_00 + 0x1196) * *(arg1_00 + 0x1178) + *(*(arg1_00 + 0x98) + *(arg1_00 + 0x1196) * 2)
                             + *(arg1_00 + 0x117b) + *(arg1_00 + 0x70),uVar6);
                iVar8 = *piVar10;
                *(arg3 + 0x40) = uVar6;
                *(arg3 + 0x46) = 0xe;
                *(arg3 + 0x44) = *(iVar8 + 0xc);
                *(arg1_00 + 0x48) = *(arg1_00 + 0x48) + 1;
                puVar2 = *piVar10;
                uVar9 = *(arg3 + 0x40);
                if ((*puVar2 == 0xff) && (puVar2[1] == 0xff)) {
                    *(arg1_00 + 0x14e8) = *(arg1_00 + 0x14e8) + 1;
                    *(arg1_00 + 0x14f0) = *(arg1_00 + 0x14f0) + uVar9;
                }
                else if ((*puVar2 & 1) == 0) {
                    *(arg1_00 + 0x14c8) = *(arg1_00 + 0x14c8) + 1;
                    *(arg1_00 + 0x14d0) = *(arg1_00 + 0x14d0) + uVar9;
                }
                else {
                    *(arg1_00 + 0x14d8) = *(arg1_00 + 0x14d8) + 1;
                    *(arg1_00 + 0x14e0) = *(arg1_00 + 0x14e0) + uVar9;
                }
                uVar3 = uVar7 % *(arg1_00 + 0x150e);
                uVar11 = 0;
                piVar1 = *(arg1_00 + 0x98) + *(arg1_00 + 0x1196) * 2;
                iVar5 = *piVar1;
                if (uVar3 != 0) {
                    iVar5 = (iVar5 - uVar3) + *(arg1_00 + 0x150e);
                }
                *piVar1 = iVar5 + uVar7;
                uVar9 = *(arg1_00 + 0x1196);
                iVar8 = *(arg1_00 + 0x98);
                uVar6 = *(iVar8 + uVar9 * 2);
                if (((uVar6 != *(*(arg1_00 + 0x90) + uVar9 * 2)) || (*(*(arg1_00 + 0x90) + uVar9 * 2) == 0)) &&
                   (iVar5 = fcn.000149cc(arg1_00,*(arg1_00 + 0x1196) * *(arg1_00 + 0x1178) + uVar6 + *(arg1_00 + 0x70))
                   , iVar5 != 0)) {
                    return 0;
                }
                *(iVar8 + uVar9 * 2) = 0;
            }
            else {
                *(*(arg1_00 + 0x98) + *(arg1_00 + 0x1196) * 2) = 0;
            }
            *(*(arg1_00 + 0x90) + *(arg1_00 + 0x1196) * 2) = 0;
            *(arg1_00 + 0x1196) = *(arg1_00 + 0x1196) + 1U & 0x3ff;
        }
        return uVar11;
    }
    fcn.000232c8(uVar6 * *(arg1_00 + 0x1178) + *(arg1_00 + 0x70),*(arg1_00 + 0x1178));
    uStackX_10 = *(arg1_00 + 0x1178);
    iVar8 = fcn.00012f48(arg1_00,0,*(arg1_00 + 0x1178) * *(arg1_00 + 0x1194) + *(arg1_00 + 0x70),&uStackX_10);
    if (iVar8 < 0) {
        return 0x13;
    }
    if (uStackX_10 == 0) {
        *(arg1_00 + 0x11ef) = 0;
        return 0x13;
    }
    iVar8 = *(arg1_00 + 0x70);
    *(arg1_00 + 0x11ef) = 1;
    iVar12 = *(arg1_00 + 0x1194) * *(arg1_00 + 0x1178);
    uVar6 = fcn.000149cc(arg1_00,iVar12 + iVar8);
    uVar9 = uVar6;
    if (1999 < uVar6 - 1) {
        return 0x13;
    }
    fcn.0002322c(*piVar10,*(arg1_00 + 0x117b) + iVar12 + iVar8,uVar9);
    iVar8 = *piVar10;
    *(arg3 + 0x40) = uVar6;
    *(arg3 + 0x46) = 0xe;
    *(arg3 + 0x44) = *(iVar8 + 0xc);
    puVar2 = *piVar10;
    if (*puVar2 == 0xff) {
        if (puVar2[1] == 0xff) {
            *(arg1_00 + 0x14e8) = *(arg1_00 + 0x14e8) + 1;
            *(arg1_00 + 0x14f0) = *(arg1_00 + 0x14f0) + uVar9;
            goto code_r0x000140cf;
        }
    }
    else if ((*puVar2 & 1) == 0) {
        *(arg1_00 + 0x14c8) = *(arg1_00 + 0x14c8) + 1;
        *(arg1_00 + 0x14d0) = *(arg1_00 + 0x14d0) + uVar9;
        goto code_r0x000140cf;
    }
    *(arg1_00 + 0x14d8) = *(arg1_00 + 0x14d8) + 1;
    *(arg1_00 + 0x14e0) = *(arg1_00 + 0x14e0) + uVar9;
code_r0x000140cf:
    *(arg1_00 + 0x48) = *(arg1_00 + 0x48) + 1;
    *(arg1_00 + 0x1194) = *(arg1_00 + 0x1194) + 1U & 0x3ff;
    return 0;
}


/* fcn.00023958 @ 0x23958 */

ulong fcn.00023958(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    char cVar1;
    ulong uVar2;
    int64_t iVar3;
    char *arg1_00;
    int64_t iVar4;
    char in_stack_00000028;
    
    if ((arg1 == 0) || (arg4 == 0)) {
        uVar2 = 0x8000000000000002;
    }
    else {
        if ((arg2 != 0) && (arg3 != 0)) {
            if (in_stack_00000028 == '\0') {
                iVar4 = fcn.000238d0(arg2,arg1);
                if (iVar4 == 0) {
code_r0x00023a0f:
                    for (; arg1_00 = *arg3, arg1_00 != NULL; arg3 = arg3 + 0x10) {
                        for (; cVar1 = *arg1_00, cVar1 != '\0'; arg1_00 = arg1_00 + iVar4) {
                            iVar4 = 0;
                            do {
                                if (cVar1 == ';') break;
                                iVar4 = iVar4 + 1;
                                cVar1 = arg1_00[iVar4];
                            } while (cVar1 != '\0');
                            iVar3 = fcn.00023138(arg1_00,arg1,iVar4);
                            if (iVar3 == 0) {
                                *arg4 = *(arg3 + 8);
                                return 0;
                            }
                        }
                    }
                }
            }
            else if (*arg2 != '\0') {
                do {
                    if ((*arg1 & 0xffffff) == (*arg2 & 0xffffff)) goto code_r0x00023a0f;
                    arg2 = arg2 + 3;
                } while (*arg2 != '\0');
            }
        }
        uVar2 = 0x8000000000000003;
    }
    return uVar2;
}


/* fcn.00023a4c @ 0x23a4c */

ulong fcn.00023a4c(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    ulong uVar1;
    int64_t iVar2;
    uint64_t arg1_00;
    char cVar3;
    int64_t iVar4;
    char *arg2_00;
    int64_t iVar5;
    int64_t iVar6;
    uint32_t *puVar7;
    ulong *puVar8;
    char in_stack_00000028;
    
    iVar4 = 0;
    if (((arg1 == 0) || (arg4 == 0)) || (arg3 == 0)) {
code_r0x00023c1c:
        uVar1 = 0x8000000000000002;
    }
    else {
        if (arg2 != 0) {
            if (*arg4 == 0) goto code_r0x00023c1c;
            if (in_stack_00000028 == '\0') {
                iVar6 = fcn.000238d0(arg2,arg1);
                if (iVar6 == 0) {
code_r0x00023ae7:
                    puVar8 = *arg3;
                    iVar6 = iVar4;
                    if (puVar8 != NULL) {
                        for (; arg2_00 = *puVar8, arg2_00 != NULL; puVar8 = puVar8 + 2) {
                            cVar3 = *arg2_00;
joined_r0x00023b47:
                            if (cVar3 != '\0') {
                                cVar3 = *arg2_00;
                                iVar5 = iVar4;
                                while ((cVar3 != '\0' && (cVar3 != ';'))) {
                                    iVar5 = iVar5 + 1;
                                    cVar3 = arg2_00[iVar5];
                                }
                                arg2 = arg1;
                                iVar2 = fcn.00023138(arg1,arg2_00,iVar5);
                                if (iVar2 == 0) {
                                    return 0x8000000000000014;
                                }
                                arg2_00 = arg2_00 + iVar5;
                                if (*arg2_00 == '\0') goto code_r0x00023b49;
                                arg2 = CONCAT71(arg2 >> 8,*arg2_00);
                                do {
                                    cVar3 = arg2;
                                    if (cVar3 != ';') break;
                                    arg2_00 = arg2_00 + 1;
                                    arg2 = CONCAT71(arg2 >> 8,*arg2_00);
                                    cVar3 = '\0';
                                } while (*arg2_00 != '\0');
                                goto joined_r0x00023b47;
                            }
code_r0x00023b49:
                            iVar6 = iVar6 + 1;
                        }
                    }
                    arg1_00 = fcn.00024d94();
                    if (arg1_00 != 0) {
                        if (*arg3 != 0) {
                            arg2 = arg1_00;
                            fcn.0002322c(arg1_00,*arg3,iVar6 << 4);
                        }
                        cVar3 = *arg1;
                        while (cVar3 != '\0') {
                            iVar4 = iVar4 + 1;
                            cVar3 = *(iVar4 + arg1);
                        }
                        iVar4 = fcn.00024dc4(arg2,iVar4 + 1,arg1);
                        *(arg1_00 + iVar6 * 0x10) = iVar4;
                        if (iVar4 != 0) {
                            iVar4 = arg4;
                            iVar5 = fcn.00023004(arg4);
                            iVar4 = fcn.00024dc4(iVar4,iVar5 * 2 + 2,arg4);
                            *(arg1_00 + 8 + iVar6 * 0x10) = iVar4;
                            if (iVar4 != 0) {
                                *(arg1_00 + 0x10 + iVar6 * 0x10) = 0;
                                *(arg1_00 + 0x18 + iVar6 * 0x10) = 0;
                                if (*arg3 != 0) {
                                    fcn.00024e3c();
                                }
                                *arg3 = arg1_00;
                                return 0;
                            }
                            fcn.00024e3c(*(arg1_00 + iVar6 * 0x10));
                        }
                        fcn.00024e3c(arg1_00);
                    }
                    return 0x8000000000000009;
                }
            }
            else if (*arg2 != '\0') {
                puVar7 = arg2;
                do {
                    arg2 = *arg1 & 0xffffff;
                    if ((*arg1 & 0xffffff) == (*puVar7 & 0xffffff)) goto code_r0x00023ae7;
                    puVar7 = puVar7 + 3;
                } while (*puVar7 != '\0');
            }
        }
        uVar1 = 0x8000000000000003;
    }
    return uVar1;
}


/* fcn.00021650 @ 0x21650 */

//WARNING: Removing unreachable block (ram,0x0002172d)

int64_t fcn.00021650(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    ulong unaff_RBX;
    int64_t iVar2;
    ulong unaff_RDI;
    int64_t unaff_retaddr;
    
    iVar1 = fcn.000211b0(arg1,4,0xe8e4,0xf,unaff_RDI,unaff_retaddr,unaff_RBX);
    if (-1 < iVar1) {
        iVar2 = 0;
        do {
            iVar1 = fcn.0002107c(arg1,4,0xe8e4,0xf,unaff_RDI,unaff_retaddr,unaff_RBX);
            if (iVar1 < 0) {
                return iVar1;
            }
            iVar2 = iVar2 + 1;
            if (*(arg1 + 0x1192) == '0') {
                (**(arg1 + 0x1320))(1000);
            }
            else {
                (**(arg1 + 0x1340))(*(arg1 + 0x1300),1000);
            }
        } while (iVar2 < 0x33);
    }
    return iVar1;
}


/* fcn.00021774 @ 0x21774 */

//WARNING: Removing unreachable block (ram,0x00021854)
//WARNING: Removing unreachable block (ram,0x0002186d)
//WARNING: Removing unreachable block (ram,0x00021860)
//WARNING: Removing unreachable block (ram,0x0002187f)

int64_t fcn.00021774(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iVar1;
    uint32_t arg1_00;
    int unaff_EBX;
    int8_t unaff_DIL;
    int64_t unaff_retaddr;
    
    arg1_00 = arg1;
    iVar1 = fcn.000211b0(arg1_00,4,0xe8e0,0xf,unaff_DIL,unaff_retaddr,unaff_EBX);
    if ((-1 < iVar1) &&
       (iVar1 = fcn.000211b0(arg1_00,4,0xe8e4,0xf,unaff_DIL,unaff_retaddr,unaff_EBX), -1 < iVar1)) {
        iVar1 = fcn.0002107c(arg1_00,4,0xe8e4,0xf,unaff_DIL,unaff_retaddr,unaff_EBX);
    }
    return iVar1;
}


/* fcn.00023060 @ 0x23060 */

int64_t fcn.00023060(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    int64_t iVar2;
    char cVar3;
    
    if (arg1 == 0) {
        fcn.00023788(0x29d98,0x273,0x29d80);
    }
    iVar1 = 0;
    if (*arg1 != '\0') {
        do {
            iVar2 = iVar1;
            iVar1 = iVar2 + 1;
        } while (*(iVar1 + arg1) != '\0');
        if (iVar2 == -2) {
            fcn.00023788(0x29d98,0x2c0,0x29df0);
        }
    }
    if (arg2 == 0) {
        fcn.00023788(0x29d98,0x273,0x29d80);
    }
    iVar1 = 0;
    if (*arg2 != '\0') {
        do {
            iVar2 = iVar1;
            iVar1 = iVar2 + 1;
        } while (*(iVar1 + arg2) != '\0');
        if (iVar2 == -2) {
            fcn.00023788(0x29d98,0x2c1,0x29e10);
        }
    }
    cVar3 = *arg1;
    if (cVar3 != '\0') {
        arg1 = arg1 - arg2;
        do {
            if (cVar3 != *arg2) break;
            arg2 = arg2 + 1;
            cVar3 = *(arg2 + arg1);
        } while (cVar3 != '\0');
    }
    return cVar3 - *arg2;
}


/* fcn.000207bc @ 0x207bc */

//WARNING: Variable defined which should be unmapped: var_29h
//WARNING: Variable defined which should be unmapped: var_31h

uint64_t fcn.000207bc(uint32_t arg1,int64_t arg2)

{
    int16_t iVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t iVar4;
    int16_t iVar5;
    int iVar6;
    uint in_register_0000000c;
    int64_t arg1_00;
    uchar *puVar7;
    uint64_t uVar8;
    uint64_t uVar9;
    int64_t arg3;
    bool bVar10;
    int32_t var_17h;
    int32_t var_67h;
    int32_t var_6fh;
    int32_t var_77h;
    int8_t in_stack_ffffffffffffff58;
    unkbyte7 Stack_a7;
    uint in_stack_ffffffffffffff60;
    uint in_stack_ffffffffffffff64;
    int iVar11;
    ulong in_stack_ffffffffffffff68;
    ulong uVar12;
    uchar auStack_88 [55];
    int64_t var_49h;
    int32_t var_41h;
    int64_t var_39h;
    int32_t var_31h;
    int16_t var_2dh;
    int64_t var_29h;
    
    arg1_00 = CONCAT44(in_register_0000000c,arg1);
    uVar3 = 0;
    iVar11 = *(arg1_00 + 5000);
    iVar2 = arg2;
    if (((iVar11 == 0xd) || (iVar11 == 0xe)) || (iVar11 == 0xf)) {
        fcn.0001a360(arg1_00);
        if (*(arg1_00 + 0x1192) == '0') {
            (**(arg1_00 + 0x1320))(10000000);
        }
        else {
            iVar2 = 10000000;
            (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),10000000);
        }
    }
    *(arg1_00 + 0x1544) = 1;
    fcn.000144ac(arg1_00);
    fcn.00014ae4(arg1_00,CONCAT71(iVar2 >> 8,1));
    iVar11 = in_stack_ffffffffffffff68;
    if (*(arg1_00 + 5000) != 1) {
        uVar9 = uVar3;
        do {
            iVar2 = fcn.0002107c(arg1,4,0xe610,0,in_stack_ffffffffffffff58,
                                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),
                                 in_stack_ffffffffffffff68);
            if (iVar2 < 0) goto code_r0x000208d8;
            if ((stack0x00000010 & 0x800) != 0) break;
            uVar9 = uVar9 + 1;
            if (*(arg1_00 + 0x1192) == '0') {
                (**(arg1_00 + 0x1320))(10000);
            }
            else {
                (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300));
            }
        } while (uVar9 < 0x65);
code_r0x000208d2:
        iVar11 = in_stack_ffffffffffffff68;
        if (uVar9 < 0x65) {
code_r0x000208d8:
            iVar2 = fcn.0002107c(arg1,4,0xe84c,0,in_stack_ffffffffffffff58,
                                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),
                                 in_stack_ffffffffffffff68);
            iVar11 = in_stack_ffffffffffffff68;
            if ((iVar2 < 0) || ((stack0x00000010 & 0x30000000) == 0x30000000)) goto code_r0x00020945;
            uVar9 = uVar9 + 1;
            if (*(arg1_00 + 0x1192) == '0') {
                (**(arg1_00 + 0x1320))(10000);
            }
            else {
                (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300));
            }
            goto code_r0x000208d2;
        }
    }
code_r0x00020945:
    fcn.000153c4(arg1_00);
    fcn.00014bac(arg1_00);
    fcn.000124ec(arg1_00);
    fcn.00014ae4(arg1_00,0);
    fcn.00014588(arg1_00);
    fcn.0002107c(arg1,4,0xd4b0,0,in_stack_ffffffffffffff58,
                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
    fcn.000211b0(arg1,4,0xd4b0,0xf,in_stack_ffffffffffffff58,
                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
    if (*(arg1_00 + 0x1192) == '0') {
        (**(arg1_00 + 0x1320))(5000);
    }
    else {
        (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),5000);
    }
    fcn.0002107c(arg1,4,0xd4b0,0,in_stack_ffffffffffffff58,
                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
    iVar2 = 4;
    fcn.000211b0(arg1,4,0xd4b0,0xf,in_stack_ffffffffffffff58,
                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
    iVar6 = *(arg1_00 + 5000);
    if (iVar6 < 10) {
        if (iVar6 == 9) goto code_r0x00020a8a;
        if (((iVar6 != 2) && (iVar6 != 3)) && (iVar6 != 4)) {
            iVar6 = iVar6 + -5;
            goto code_r0x00020a79;
        }
        fcn.0002107c(arg1,4,0xe610,0xf,in_stack_ffffffffffffff58,
                     CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
        *(arg1_00 + 0x1540) = 3;
    }
    else {
        if ((iVar6 != 10) && (iVar6 != 0xb)) {
            iVar6 = iVar6 + -0xd;
code_r0x00020a79:
            if ((((iVar6 != 0) && (iVar6 != 1)) && (iVar6 != 2)) && (iVar6 != 3)) goto code_r0x00020aed;
        }
code_r0x00020a8a:
        fcn.0002107c(arg1,4,0xe610,0xf,in_stack_ffffffffffffff58,
                     CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
        *(arg1_00 + 0x1540) = 3;
    }
    iVar2 = 4;
    fcn.000211b0(arg1,4,0xe610,0xf,in_stack_ffffffffffffff58,
                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
code_r0x00020aed:
    *(arg1_00 + 0x1544) = 1;
    fcn.00012d04(arg1_00);
    fcn.00012254(arg1_00,iVar2);
    if (*(arg1_00 + 0x1192) == '0') {
        (**(arg1_00 + 0x1320))(3000000);
    }
    else {
        (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),3000000);
    }
    fcn.000232c8(0x2a9a0,0x5ea);
    puVar7 = arg1_00 + 0xfc;
    iVar2 = 6;
    do {
        puVar7[0x2a8a4 - arg1_00] = *puVar7;
        puVar7[0x2a8aa - arg1_00] = *puVar7;
        puVar7 = puVar7 + 1;
        iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    uVar9 = 0xc;
    do {
        *(uVar9 + 0x2a9a0) = uVar9;
        uVar9 = uVar9 + 1;
    } while (uVar9 < 0x3c);
    iVar2 = 0;
    uVar9 = uVar3;
    if (arg2 != 0) {
        do {
            uVar8 = 0;
            uVar12 = 0x2a9a0;
            fcn.000134e4(arg1,&stack0xffffffffffffff68);
            (**(*0x2a978 + 0xf8))(100);
            uVar3 = *(arg1_00 + 0x1158);
            if (*(arg1_00 + 0x1158) != *(arg1_00 + 0x115a)) {
                iVar2 = 0x1ff;
                do {
                    iVar1 = uVar3;
                    uVar3 = uVar8;
                    if (iVar1 != 0x1ff) {
                        uVar3 = iVar1 + 1;
                    }
                } while (uVar3 != *(arg1_00 + 0x115a));
                *(arg1_00 + 0x1158) = uVar3;
            }
            uVar3 = (**(*0x2a978 + 0x40))(4,3000,&stack0xffffffffffffff58);
            iVar11 = uVar12;
            if (uVar3 < 0) break;
            fcn.000232c8(CONCAT71(Stack_a7,in_stack_ffffffffffffff58),3000);
            in_stack_ffffffffffffff60 = 3000;
            do {
                iVar1 = fcn.00013bf0(arg1,&stack0xffffffffffffff58,auStack_88);
                (**(*0x2a978 + 0xf8))(10);
                iVar11 = uVar12;
                uVar8 = uVar8 + 1;
                if (100000 < uVar8) {
                    uVar3 = 0x8000000000000007;
                    (**(*0x2a978 + 0x48))(CONCAT71(Stack_a7,in_stack_ffffffffffffff58));
                    goto code_r0x00020d5a;
                }
            } while (iVar1 == 0x13);
            arg3 = 0x3c;
            iVar4 = fcn.0002333c(CONCAT71(Stack_a7,in_stack_ffffffffffffff58),0x2a9a0,0x3c);
            uVar3 = 0;
            if (iVar4 != 0) {
                uVar3 = 0x8000000000000007;
                fcn.00023d2c(0x29ca0,stack0xffffffffffffffb8,arg3,iVar2);
                (**(*0x2a978 + 0x48))(CONCAT71(Stack_a7,in_stack_ffffffffffffff58));
                break;
            }
            (**(*0x2a978 + 0x48))(CONCAT71(Stack_a7,in_stack_ffffffffffffff58));
            uVar9 = uVar9 + 1;
        } while (uVar9 < arg2);
    }
code_r0x00020d5a:
    iVar1 = *(arg1_00 + 0x1158);
    if (iVar1 != *(arg1_00 + 0x115a)) {
        do {
            iVar5 = iVar1 + 1;
            bVar10 = iVar1 != 0x1ff;
            iVar1 = 0;
            if (bVar10) {
                iVar1 = iVar5;
            }
        } while (iVar1 != *(arg1_00 + 0x115a));
        *(arg1_00 + 0x1158) = iVar1;
    }
    fcn.000211b0(arg1,4,0xe610,0xf,in_stack_ffffffffffffff58,
                 CONCAT44(in_stack_ffffffffffffff64,in_stack_ffffffffffffff60),iVar11);
    iVar11 = *(arg1_00 + 5000);
    *(arg1_00 + 0x1544) = 0;
    if (((iVar11 == 0xd) || (iVar11 == 0xe)) || (iVar11 == 0xf)) {
        fcn.0001a480(arg1_00);
        if (*(arg1_00 + 0x1192) == '0') {
            (**(arg1_00 + 0x1320))(7000000);
        }
        else {
            (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),7000000);
        }
    }
    if (*(arg1_00 + 0x1192) == '0') {
        (**(arg1_00 + 0x1320))(3000000);
    }
    else {
        (**(arg1_00 + 0x1340))(*(arg1_00 + 0x1300),3000000);
    }
    return uVar3;
}


/* fcn.00023474 @ 0x23474 */

ulong fcn.00023474(uint32_t arg1,int64_t arg2,uint32_t arg3)

{
    uchar uVar1;
    uint uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint in_register_0000000c;
    uint in_R8;
    int64_t iVar5;
    uint64_t uVar6;
    ulong *puVar7;
    ulong *puVar8;
    uint *puVar9;
    uint *puVar10;
    uchar *puVar11;
    uchar *puVar12;
    
    uVar6 = CONCAT44(in_R8,arg3);
    uVar4 = CONCAT44(in_register_0000000c,arg1) | arg2;
    if (((uVar4 & 7) == 0) && (7 < uVar6)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar7 = CONCAT44(in_register_0000000c,arg1);
            uVar4 = uVar6 >> 3;
            iVar5 = uVar6 + uVar4 * -8;
            do {
                uVar3 = *arg2;
                arg2 = arg2 + 8;
                *puVar7 = uVar3;
                puVar7 = puVar7 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            if (iVar5 != 0) {
                arg2 = arg2 - puVar7;
                do {
                    *puVar7 = *(arg2 + puVar7);
                    puVar7 = puVar7 + 1;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar7 = arg2 + uVar6;
            puVar8 = CONCAT44(in_register_0000000c,arg1) + uVar6;
            uVar4 = arg3 & 7;
            if ((arg3 & 7) != 0) {
                uVar6 = uVar6 - uVar4;
                do {
                    puVar7 = puVar7 + -1;
                    puVar8 = puVar8 + -1;
                    *puVar8 = *puVar7;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
                if (uVar6 == 0) goto code_r0x00023623;
            }
            iVar5 = (uVar6 - 1 >> 3) + 1;
            do {
                puVar7 = puVar7 + -1;
                puVar8 = puVar8 + -1;
                *puVar8 = *puVar7;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
    }
    else if (((uVar4 & 3) == 0) && (3 < uVar6)) {
        if (CONCAT44(in_register_0000000c,arg1) < arg2) {
            puVar9 = CONCAT44(in_register_0000000c,arg1);
            uVar4 = uVar6 >> 2;
            iVar5 = uVar6 + uVar4 * -4;
            do {
                uVar2 = *arg2;
                arg2 = arg2 + 4;
                *puVar9 = uVar2;
                puVar9 = puVar9 + 1;
                uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
            if (iVar5 != 0) {
                arg2 = arg2 - puVar9;
                do {
                    *puVar9 = *(arg2 + puVar9);
                    puVar9 = puVar9 + 1;
                    iVar5 = iVar5 + -1;
                } while (iVar5 != 0);
            }
        }
        else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
            puVar9 = arg2 + uVar6;
            puVar10 = CONCAT44(in_register_0000000c,arg1) + uVar6;
            uVar4 = arg3 & 3;
            if ((arg3 & 3) != 0) {
                uVar6 = uVar6 - uVar4;
                do {
                    puVar9 = puVar9 + -1;
                    puVar10 = puVar10 + -1;
                    *puVar10 = *puVar9;
                    uVar4 = uVar4 - 1;
                } while (uVar4 != 0);
                if (uVar6 == 0) goto code_r0x00023623;
            }
            iVar5 = (uVar6 - 1 >> 2) + 1;
            do {
                puVar9 = puVar9 + -1;
                puVar10 = puVar10 + -1;
                *puVar10 = *puVar9;
                iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
        }
    }
    else if (CONCAT44(in_register_0000000c,arg1) < arg2) {
        puVar11 = CONCAT44(in_register_0000000c,arg1);
        if (uVar6 != 0) {
            do {
                *puVar11 = puVar11[arg2 - CONCAT44(in_register_0000000c,arg1)];
                puVar11 = puVar11 + 1;
                uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
        }
    }
    else if (arg2 < CONCAT44(in_register_0000000c,arg1)) {
        puVar11 = (uVar6 - 1) + CONCAT44(in_register_0000000c,arg1);
        puVar12 = (uVar6 - 1) + arg2;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            uVar1 = *puVar12;
            puVar12 = puVar12 + -1;
            *puVar11 = uVar1;
            puVar11 = puVar11 + -1;
        }
    }
code_r0x00023623:
    return CONCAT44(in_register_0000000c,arg1);
}


/* fcn.00023de0 @ 0x23de0 */

void fcn.00023de0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    
    if ((arg1 & 1U) != 0) {
        fcn.00023788(0x2a390,0xea,0x2a368);
    }
    fcn.00023f14(arg1,arg2 >> 1,0x40,arg3,in_stack_00000058,in_stack_00000060);
    return;
}


/* fcn.00023f14 @ 0x23f14 */

//WARNING: Variable defined which should be unmapped: var_10h
//WARNING: Variable defined which should be unmapped: var_18h
//WARNING: Variable defined which should be unmapped: var_28h
//WARNING: Variable defined which should be unmapped: var_30h_2

uint64_t fcn.00023f14(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_a0h,uint32_t arg_a8h)

{
    uint32_t arg2_00;
    char cVar1;
    uint16_t uVar2;
    int iVar3;
    int iVar4;
    uint64_t *puVar5;
    int64_t iVar6;
    uint64_t uVar7;
    uint32_t arg2_01;
    uint8_t *puVar8;
    uint8_t *puVar9;
    int64_t iVar10;
    uint64_t *puVar11;
    uint64_t uVar12;
    uint64_t uVar13;
    char *pcVar14;
    char *pcVar15;
    uint64_t uVar16;
    uint32_t uVar17;
    uint64_t *puVar18;
    int iVar19;
    uint64_t uVar20;
    bool bVar21;
    bool bVar22;
    int64_t var_18h_2;
    int64_t var_bp_20h;
    uint32_t var_28h_2;
    int64_t var_30h;
    char in_stack_00000030;
    uint32_t var_88h;
    int64_t var_90h;
    uint64_t uStack_f8;
    char *pcStack_f0;
    uint64_t uStack_e0;
    uint64_t *puStack_d8;
    uint64_t uStack_d0;
    uint64_t uStack_c8;
    uint64_t uStack_c0;
    uint64_t uStack_b8;
    uint64_t uStack_b0;
    uint64_t uStack_a8;
    int64_t iStack_a0;
    char *pcStack_90;
    int64_t var_80h;
    uint32_t var_78h;
    uint32_t var_70h;
    int64_t var_68h;
    int64_t var_60h;
    int64_t var_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_18h;
    int64_t var_10h;
    
    uVar16 = 0;
    uVar17 = arg3;
    puStack_d8 = NULL;
    iVar19 = 0;
    if (arg2 == 0) {
        if ((arg3 & 0x2000U) != 0) goto code_r0x00023f82;
code_r0x00023f95:
        var_40h = uVar17 & 0x100;
        uStack_b0 = uVar17 & 0x40;
        uStack_b8 = (-(var_40h != 0) & 0xff00) + 0xff;
        iStack_a0 = ((arg3 & 0x100U) != 0) + 1;
        if ((arg3 & 0x2000U) == 0) {
            if (arg2 == 0) goto code_r0x00023f76;
        }
        else {
            arg1 = arg1 & -(arg2 != 0);
        }
        uStack_f8 = 0;
        pcStack_f0 = NULL;
        pcStack_90 = NULL;
        if (arg1 != NULL) {
            pcStack_90 = arg1;
            iVar10 = (arg2 + -1) * 2;
            if ((uVar17 & 0x40) == 0) {
                iVar10 = arg2 + -1;
            }
            pcStack_f0 = arg1 + iVar10;
        }
        if (var_40h == 0) {
            iVar4 = iVar19;
        }
        else {
            iVar4 = *(arg4 + 1) << 8;
        }
        uStack_d0 = (*arg4 | iVar4) & uStack_b8;
        if (uStack_d0 != 0) {
            do {
                uVar17 = arg3;
                if ((arg1 != NULL) && (pcStack_f0 <= arg1)) break;
                uVar20 = uVar17 & 0x2140;
                uStack_c8 = 0;
                uVar13 = 1;
                uStack_c0 = 1;
                cVar1 = '\0';
                bVar21 = false;
                in_stack_00000030 = '\0';
                uStack_e0 = 0;
                uStack_a8 = 0;
                iVar4 = 0;
                uVar12 = uVar16;
                var_bp_20h = uVar20;
                if (uStack_d0 == 10) {
                    pcVar14 = 0x2a4dc;
                    iVar3 = iVar19;
                    if (var_40h != 0) {
                        iVar3 = (arg4 + iStack_a0)[1] << 8;
                    }
                    uStack_d0 = (iVar3 | *(arg4 + iStack_a0)) & uStack_b8;
                    bVar22 = uStack_d0 == 0xd;
code_r0x00024920:
                    puVar8 = arg4 + iStack_a0;
                    if (!bVar22) {
                        puVar8 = arg4;
                    }
code_r0x00024924:
                    _var_28h_2 = puVar8;
                }
                else {
                    if (uStack_d0 == 0xd) {
                        iVar3 = iVar4;
                        if (var_40h != 0) {
                            iVar3 = (arg4 + iStack_a0)[1] << 8;
                        }
                        pcVar14 = 0x2a4dc;
                        uStack_d0 = (iVar3 | *(arg4 + iStack_a0)) & uStack_b8;
                        bVar22 = uStack_d0 == 10;
                        if (!bVar22) {
                            pcVar14 = 0x2a4e0;
                        }
                        goto code_r0x00024920;
                    }
                    _var_28h_2 = arg4;
                    if (uStack_d0 == 0x25) {
                        puVar11 = var_30h;
                        puVar18 = puStack_d8;
code_r0x000240d3:
                        while( true ) {
                            _var_28h_2 = arg4 + iStack_a0;
                            if (var_40h == 0) {
                                iVar3 = iVar19;
                            }
                            else {
                                iVar3 = _var_28h_2[1] << 8;
                            }
                            uStack_d0 = (*_var_28h_2 | iVar3) & uStack_b8;
                            if (uStack_d0 < 0x33) break;
                            if ((((((uStack_d0 != 0x33) && (uStack_d0 != 0x34)) && (uStack_d0 != 0x35)) &&
                                 ((uStack_d0 != 0x36 && (uStack_d0 != 0x37)))) && (uStack_d0 != 0x38)) &&
                               (uStack_d0 != 0x39)) {
                                if ((uStack_d0 == 0x4c) || (uStack_d0 == 0x6c)) {
                                    uVar20 = uVar20 | 0x10;
                                    goto code_r0x000241b3;
                                }
                                goto code_r0x000242fa;
                            }
code_r0x0002415c:
                            uStack_e0 = 0;
                            if (0x2f < uStack_d0) {
code_r0x0002416d:
                                uStack_e0 = uVar16;
                                do {
                                    if (0x39 < uStack_d0) break;
                                    _var_28h_2 = _var_28h_2 + iStack_a0;
                                    uStack_e0 = uStack_d0 + (uStack_e0 * 5 + -0x18) * 2;
                                    if (var_40h == 0) {
                                        iVar3 = iVar4;
                                    }
                                    else {
                                        iVar3 = _var_28h_2[1] << 8;
                                    }
                                    uStack_d0 = (*_var_28h_2 | iVar3) & uStack_b8;
                                } while (0x2f < uStack_d0);
                            }
                            arg4 = _var_28h_2 + -iStack_a0;
                            uVar12 = uStack_e0;
                            if ((uVar20 >> 0xb & 1) == 0) {
                                uVar20 = uVar20 | 0x200;
                                uStack_c8 = uStack_e0;
                                var_bp_20h = uVar20;
                            }
                            else {
                                uStack_c0 = uStack_e0;
                                uVar13 = uStack_e0;
                            }
                        }
                        if (uStack_d0 == 0x32) goto code_r0x0002415c;
                        if (uStack_d0 == 0) {
                            uVar13 = uVar16;
                            _var_28h_2 = arg4;
                            goto code_r0x000240b3;
                        }
                        if (uStack_d0 == 0x20) {
                            uVar20 = uVar20 | 4;
                            goto code_r0x000241b3;
                        }
                        if (uStack_d0 == 0x2a) {
                            if ((uVar20 >> 0xb & 1) == 0) {
                                uVar20 = uVar20 | 0x200;
                                if (puVar18 == NULL) {
                                    uStack_c8 = *puVar11;
                                    puVar11 = puVar11 + 1;
                                    var_30h = puVar11;
                                }
                                else {
                                    uStack_c8 = *puVar18;
                                    puVar18 = puVar18 + 1;
                                    puStack_d8 = puVar18;
                                }
                                arg4 = _var_28h_2;
                                var_bp_20h = uVar20;
                            }
                            else {
                                if (puVar18 == NULL) {
                                    uVar13 = *puVar11;
                                    puVar11 = puVar11 + 1;
                                    var_30h = puVar11;
                                }
                                else {
                                    uVar13 = *puVar18;
                                    puVar18 = puVar18 + 1;
                                    puStack_d8 = puVar18;
                                }
                                uStack_c0 = uVar13;
                                arg4 = _var_28h_2;
                            }
                            goto code_r0x000240d3;
                        }
                        if (uStack_d0 == 0x2b) {
                            uVar20 = uVar20 | 2;
code_r0x000241b3:
                            arg4 = _var_28h_2;
                            var_bp_20h = uVar20;
                            goto code_r0x000240d3;
                        }
                        if (uStack_d0 == 0x2c) {
                            uVar20 = uVar20 | 8;
                            goto code_r0x000241b3;
                        }
                        if (uStack_d0 == 0x2d) {
                            uVar20 = uVar20 | 1;
                            goto code_r0x000241b3;
                        }
                        if (uStack_d0 == 0x2e) {
                            uVar20 = uVar20 | 0x800;
                            goto code_r0x000241b3;
                        }
                        if (uStack_d0 == 0x30) {
                            if ((uVar20 >> 0xb & 1) != 0) goto code_r0x0002415c;
                            uVar20 = uVar20 | 0x20;
                            var_bp_20h = uVar20;
                            goto code_r0x0002416d;
                        }
                        if (uStack_d0 == 0x31) goto code_r0x0002415c;
code_r0x000242fa:
                        if (100 < uStack_d0) {
                            if (uStack_d0 == 0x67) {
                                if (puVar18 == NULL) {
                                    var_30h = puVar11 + 1;
                                    uVar7 = *puVar11;
                                }
                                else {
                                    uVar7 = *puVar18;
                                    puStack_d8 = puVar18 + 1;
                                }
                                if (uVar7 == 0) {
                                    pcVar14 = "<null guid>";
                                    goto code_r0x0002492f;
                                }
                                if (uVar7 == 0xfffffffffffffffc) {
                                    fcn.00023788(0x2a338,0x1e,0x29f28);
                                }
                                if (uVar7 == 0xfffffffffffffffa) {
                                    fcn.00023788(0x2a338,0x1e,0x29f28);
                                }
                                fcn.00024d70(&var_80h,0x26,0,0x2a470);
code_r0x000248b1:
                                pcVar14 = &var_80h;
                                uVar13 = uStack_c0;
                            }
                            else {
                                if (uStack_d0 == 0x70) {
                                    uVar20 = uVar20 & 0xffffffffffffffd9 | 0x10;
code_r0x00024605:
                                    uVar20 = uVar20 | 0x20;
code_r0x00024609:
                                    uVar20 = uVar20 | 0x80;
code_r0x0002460e:
                                    if (-1 < uVar20) {
                                        uVar20 = uVar20 & 0xfffffffffffffffd | 0x4000;
                                    }
                                    goto code_r0x0002461c;
                                }
                                if (uStack_d0 != 0x72) {
                                    if (uStack_d0 == 0x73) {
code_r0x00024508:
                                        uVar7 = uVar20 | 0x400;
code_r0x0002450d:
                                        if (puVar18 == NULL) {
                                            puVar5 = *puVar11;
                                            var_30h = puVar11 + 1;
                                        }
                                        else {
                                            puVar5 = *puVar18;
                                            puStack_d8 = puVar18 + 1;
                                        }
                                        pcVar14 = "<null string>";
                                        if (puVar5 != NULL) {
                                            pcVar14 = puVar5;
                                        }
                                        uVar20 = uVar7 & 0xfffffffffffffbff;
                                        if (puVar5 != NULL) {
                                            uVar20 = uVar7;
                                        }
                                        uVar13 = uVar13 & -((uVar20 & 0x800) != 0);
                                        var_bp_20h = uVar20;
                                    }
                                    else {
                                        if (uStack_d0 != 0x74) {
                                            if (uStack_d0 != 0x75) {
                                                if (uStack_d0 != 0x78) goto code_r0x000240b3;
                                                goto code_r0x00024609;
                                            }
                                            goto code_r0x0002460e;
                                        }
                                        if (puVar18 == NULL) {
                                            uVar7 = *puVar11;
                                            var_30h = puVar11 + 1;
                                        }
                                        else {
                                            uVar7 = *puVar18;
                                            puStack_d8 = puVar18 + 1;
                                        }
                                        if (uVar7 != 0) {
                                            fcn.00024d70(&var_80h,0x26,0,0x2a4b8);
                                            uStack_c0 = uVar13;
                                            goto code_r0x000248b1;
                                        }
                                        pcVar14 = "<null time>";
                                    }
                                    goto code_r0x0002492f;
                                }
                                if (puVar18 == NULL) {
                                    uVar7 = *puVar11;
                                    var_30h = puVar11 + 1;
                                }
                                else {
                                    uVar7 = *puVar18;
                                    puStack_d8 = puVar18 + 1;
                                }
                                pcVar14 = &var_80h;
                                if (uVar7 < 0) {
                                    if ((uVar7 & 0x7fffffffffffffff) - 1 < 0x21) {
                                        pcVar14 = (uVar7 & 0x7fffffffffffffff) * 0x15;
                                        iVar10 = 0x2a57b;
                                        goto code_r0x000245cc;
                                    }
                                }
                                else if (uVar7 < 6) {
                                    iVar10 = uVar7 * 0x19;
                                    pcVar14 = "Success";
code_r0x000245cc:
                                    pcVar14 = pcVar14 + iVar10;
                                    if (pcVar14 != &var_80h) goto code_r0x0002492f;
                                }
                                fcn.00024d70(&var_80h,0x26,0,0x2a4d4);
                            }
                            uVar12 = uStack_e0;
                            goto code_r0x0002492f;
                        }
                        if (uStack_d0 == 100) {
code_r0x0002461c:
                            if ((uVar20 & 0x10) == 0) {
                                if (puVar18 == NULL) {
                                    iVar3 = *puVar11;
                                    var_30h = puVar11 + 1;
                                }
                                else {
                                    iVar3 = *puVar18;
                                    puStack_d8 = puVar18 + 1;
                                }
                                uVar12 = iVar3;
                            }
                            else if (puVar18 == NULL) {
                                var_30h = puVar11 + 1;
                                uVar12 = *puVar11;
                            }
                            else {
                                uVar12 = *puVar18;
                                puStack_d8 = puVar18 + 1;
                            }
                            cVar1 = (uVar20 & 4) << 3;
                            if ((uVar20 & 2) != 0) {
                                cVar1 = '+';
                            }
                            bVar21 = (uVar20 & 8) != 0;
                            if (uVar20 < '\0') {
                                bVar21 = false;
                                iVar10 = 0x10;
                                if (((uVar20 & 0x10) == 0) && (uVar12 < 0)) {
code_r0x000246f0:
                                    uVar12 = uVar12 & 0xffffffff;
                                }
                            }
                            else {
                                iVar10 = 10;
                                if ((uVar20 & 8) != 0) {
                                    uVar20 = uVar20 & 0xffffffffffffffdf;
                                    uVar13 = 1;
                                }
                                if ((uVar12 < 0) && (uVar20 >> 0xe == 0)) {
                                    cVar1 = '-';
                                    uVar12 = -uVar12;
                                }
                                else if ((uVar20 & 0x4010) == 0x4000) goto code_r0x000246f0;
                            }
                            iVar10 = fcn.00023ea8(&var_80h,uVar12,iVar10);
                            uVar7 = iVar10 - &var_80h;
                            if ((uVar12 == 0) && (uVar13 == 0)) {
                                uStack_a8 = 0;
                                pcVar14 = &var_80h;
                                uVar7 = uVar16;
                            }
                            else {
                                pcVar14 = &var_80h + uVar7;
                                uStack_a8 = uVar7 % 3;
                                if (uVar7 % 3 != 0) {
                                    uStack_a8 = ((uVar7 / 3) * 3 - uVar7) + 3;
                                }
                            }
                            if ((bVar21) && (uVar7 != 0)) {
                                uVar7 = uVar7 + (uVar7 - 1) / 3;
                            }
                            if (cVar1 != '\0') {
                                uVar13 = uVar13 + 1;
                            }
                            in_stack_00000030 = '\x01';
                            uVar12 = uVar7 + 1;
                            if (cVar1 == '\0') {
                                uVar12 = uVar7;
                            }
                            uVar20 = uVar20 | 0x1000;
                            var_bp_20h = uVar20;
                            uStack_e0 = uVar12;
                            if ((uVar20 & 0xa21) == 0x220) {
                                uVar13 = uStack_c8;
                            }
                            goto code_r0x0002492f;
                        }
                        if (uStack_d0 == 10) {
                            pcVar14 = 0x2a4dc;
                            puVar9 = _var_28h_2 + iStack_a0;
                            iVar3 = iVar4;
                            if (var_40h != 0) {
                                iVar3 = puVar9[1] << 8;
                            }
                            uStack_d0 = (iVar3 | *puVar9) & uStack_b8;
                            puVar8 = _var_28h_2;
                            if (uStack_d0 == 0xd) {
                                puVar8 = puVar9;
                            }
                        }
                        else {
                            if (uStack_d0 != 0xd) {
                                if (uStack_d0 != 0x25) {
                                    if (uStack_d0 == 0x53) goto code_r0x00024508;
                                    if (uStack_d0 == 0x58) goto code_r0x00024605;
                                    uVar7 = uVar20;
                                    if (uStack_d0 == 0x61) goto code_r0x0002450d;
                                    if (uStack_d0 == 99) {
                                        if (puVar18 == NULL) {
                                            uVar2 = *puVar11;
                                            var_30h = puVar11 + 1;
                                        }
                                        else {
                                            uVar2 = *puVar18;
                                            puStack_d8 = puVar18 + 1;
                                        }
                                        pcVar14 = &var_58h;
                                        uVar20 = uVar20 | 0x400;
                                        var_58h = uVar2;
                                        var_bp_20h = uVar20;
                                        goto code_r0x0002492f;
                                    }
                                }
                                goto code_r0x000240b3;
                            }
                            puVar8 = _var_28h_2 + iStack_a0;
                            iVar3 = iVar4;
                            if (var_40h != 0) {
                                iVar3 = puVar8[1] << 8;
                            }
                            pcVar14 = 0x2a4dc;
                            uStack_d0 = (iVar3 | *puVar8) & uStack_b8;
                            if (uStack_d0 != 10) {
                                pcVar14 = 0x2a4e0;
                                puVar8 = _var_28h_2;
                            }
                        }
                        goto code_r0x00024924;
                    }
code_r0x000240b3:
                    uVar20 = uVar20 | 0x400;
                    pcVar14 = &uStack_d0;
                    var_bp_20h = uVar20;
                }
code_r0x0002492f:
                uVar17 = uVar20;
                iVar10 = ((uVar20 & 0x400) != 0) + 1;
                var_50h = (-((uVar20 & 0x400) != 0) & 0xff00) + 0xff;
                if ((uVar20 >> 0xc & 1) == 0) {
                    pcVar15 = pcVar14 + 1;
                    uVar12 = uVar16;
                    while (((pcVar15[-1] != '\0' || (((uVar20 & 0x400) != 0 && (*pcVar15 != '\0')))) &&
                           (((uVar12 < uVar13 || ((uVar20 >> 0xb & 1) == 0)) &&
                            ((var_50h & (*pcVar15 << 8 | pcVar15[-1])) != 0))))) {
                        uVar12 = uVar12 + 1;
                        pcVar15 = pcVar15 + iVar10;
                    }
                    uStack_e0 = uVar12;
                }
                else {
                    iVar10 = -iVar10;
                }
                if (uVar13 < uVar12) {
                    uVar13 = uVar12;
                }
                uStack_c0 = uVar13;
                var_48h = uVar17 & 0x201;
                arg2_00 = pcStack_f0;
                arg2_01 = arg2_00;
                if ((uVar17 & 0x201) == 0x200) {
                    uStack_f8 = uStack_f8 + ((uStack_b0 != 0) + 1) * (uStack_c8 - uVar13);
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.00023e74(arg1,arg2_00,uStack_c8 - uVar13,(uVar17 & 0x2000) + 0x20);
                    }
                }
                if (in_stack_00000030 == '\0') {
                    iVar6 = (uStack_b0 != 0) + 1;
                    uStack_f8 = uStack_f8 + (uVar13 - uVar12) * iVar6;
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.00023e74(arg1,arg2_01,uVar13 - uVar12,(uVar17 & 0x2000) + 0x20);
                    }
                    if ((((cVar1 != '\0') && (uStack_f8 = uStack_f8 + iVar6, (uVar20 & 0x2000) == 0)) && (arg1 != NULL)
                        ) && (arg1 < pcStack_f0)) {
                        *arg1 = cVar1;
                        if (uStack_b0 != 0) {
                            *(arg1 + 1) = '\0';
                        }
                        arg1 = arg1 + iVar6;
                    }
                }
                else {
                    if (cVar1 != '\0') {
                        iVar6 = (uStack_b0 != 0) + 1;
                        uStack_f8 = uStack_f8 + iVar6;
                        if ((((uVar20 & 0x2000) == 0) && (arg1 != NULL)) && (arg1 < pcStack_f0)) {
                            *arg1 = cVar1;
                            if (uStack_b0 != 0) {
                                *(arg1 + 1) = '\0';
                            }
                            arg1 = arg1 + iVar6;
                        }
                    }
                    iVar6 = (uStack_b0 != 0) + 1;
                    uStack_f8 = uStack_f8 + (uVar13 - uVar12) * iVar6;
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.00023e74(arg1,arg2_00,uVar13 - uVar12,(uVar17 & 0x2000) + 0x30);
                    }
                }
                arg3 = uVar20;
                if ((cVar1 != '\0') < uStack_e0) {
                    uVar13 = cVar1 != '\0';
                    uVar12 = uStack_a8;
                    do {
                        if ((*pcVar14 == '\0') && ((iVar10 < 2 || (*(pcVar14 + 1) == '\0')))) break;
                        uStack_f8 = uStack_f8 + iVar6;
                        uVar7 = *pcVar14 & var_50h;
                        if (((uVar20 & 0x2000) == 0) && ((arg1 != NULL && (arg1 < pcStack_f0)))) {
                            *arg1 = uVar7;
                            if (uStack_b0 != 0) {
                                *(arg1 + 1) = uVar7 >> 8;
                            }
                            arg1 = arg1 + iVar6;
                        }
                        pcVar14 = pcVar14 + iVar10;
                        uVar7 = uVar13 + 1;
                        if ((bVar21) && (uVar12 = uVar12 + 1, uVar12 == 3)) {
                            uVar7 = uVar13 + 2;
                            if (uStack_e0 <= uVar7) break;
                            uStack_f8 = uStack_f8 + iVar6;
                            uVar12 = uVar16;
                            if ((((uVar20 & 0x2000) == 0) && (arg1 != NULL)) && (uVar12 = 0, arg1 < pcStack_f0)) {
                                *arg1 = ',';
                                if (uStack_b0 != 0) {
                                    *(arg1 + 1) = '\0';
                                }
                                arg1 = arg1 + iVar6;
                            }
                        }
                        uVar13 = uVar7;
                    } while (uVar7 < uStack_e0);
                    arg3 = var_bp_20h;
                }
                uVar17 = arg3;
                if (var_48h == 0x201) {
                    uStack_f8 = uStack_f8 + iVar6 * (uStack_c8 - uStack_c0);
                    if (((uVar20 & 0x2000) == 0) && (arg1 != NULL)) {
                        arg1 = fcn.00023e74(arg1,arg2_00,uStack_c8 - uStack_c0,0x20);
                    }
                }
                arg4 = _var_28h_2 + iStack_a0;
                if (var_40h != 0) {
                    iVar4 = *(arg4 + 1) << 8;
                }
                uStack_d0 = (iVar4 | *arg4) & uStack_b8;
            } while (uStack_d0 != 0);
            uVar16 = uStack_f8;
        }
        uVar13 = uStack_b0;
        if ((uVar17 & 0x2000) == 0) {
            if (arg1 == NULL) {
                fcn.00023788(0x2a3f0,0x4fc,0x29f28);
            }
            iVar10 = (uVar13 != 0) + 1;
            if ((arg1 < pcStack_f0 + iVar10) && (*arg1 = '\0', uVar13 != 0)) {
                *(arg1 + 1) = '\0';
            }
            uVar16 = (arg1 - pcStack_90) / iVar10;
        }
        else {
            uVar16 = uVar16 >> (uStack_b0 != 0);
        }
    }
    else {
        if (((arg3 & 0x2000U) == 0) && (arg1 == 0)) {
            pcVar14 = "(Buffer != ((void *) 0))";
            uVar17 = 0x24b;
        }
        else {
code_r0x00023f82:
            if (arg4 != 0) goto code_r0x00023f95;
            pcVar14 = "(Format != ((void *) 0))";
            uVar17 = 0x253;
        }
        fcn.00023788(0x2a3f0,uVar17,pcVar14);
code_r0x00023f76:
        uVar16 = 0;
    }
    return uVar16;
}


/* fcn.00023e54 @ 0x23e54 */

void fcn.00023e54(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t iStackX_20;
    
    iStackX_20 = arg4;
    fcn.00023de0(arg1,arg2,arg3,&iStackX_20);
    return;
}


/* fcn.00011002 @ 0x11002 */

void fcn.00011002(void)

{
    return;
}


/* fcn.00023138 @ 0x23138 */

int64_t fcn.00023138(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    int64_t iVar2;
    
    if (arg3 == 0) {
        iVar1 = 0;
    }
    else {
        if (arg1 == 0) {
            fcn.00023788(0x29d98,0x273,0x29d80);
        }
        iVar1 = 0;
        if (*arg1 != '\0') {
            do {
                iVar2 = iVar1;
                iVar1 = iVar2 + 1;
            } while (*(iVar1 + arg1) != '\0');
            if (iVar2 == -2) {
                fcn.00023788(0x29d98,0x361,0x29df0);
            }
        }
        if (arg2 == 0) {
            fcn.00023788(0x29d98,0x273,0x29d80);
        }
        iVar1 = 0;
        if (*arg2 != '\0') {
            do {
                iVar2 = iVar1;
                iVar1 = iVar2 + 1;
            } while (*(iVar1 + arg2) != '\0');
            if (iVar2 == -2) {
                fcn.00023788(0x29d98,0x362,0x29e10);
            }
        }
        for (; (((*arg1 != '\0' && (*arg2 != '\0')) && (*arg1 == *arg2)) && (1 < arg3)); arg3 = arg3 - 1) {
            arg1 = arg1 + 1;
            arg2 = arg2 + 1;
        }
        iVar1 = *arg1 - *arg2;
    }
    return iVar1;
}


/* fcn.000238d0 @ 0x238d0 */

ulong fcn.000238d0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    int64_t iVar2;
    int64_t arg3;
    
    cVar1 = *arg1;
    do {
        do {
            if (cVar1 == '\0') {
                return 0x8000000000000003;
            }
            arg3 = 0;
            while ((cVar1 != '\0' && (cVar1 != ';'))) {
                arg3 = arg3 + 1;
                cVar1 = *(arg1 + arg3);
            }
            iVar2 = fcn.00023138(arg1,arg2,arg3);
            if ((iVar2 == 0) && (*(arg3 + arg2) == '\0')) {
                return 0;
            }
            arg1 = arg1 + arg3;
            cVar1 = *arg1;
        } while (cVar1 == '\0');
        do {
            if (cVar1 != ';') break;
            arg1 = arg1 + 1;
            cVar1 = *arg1;
        } while (cVar1 != '\0');
    } while( true );
}


/* fcn.00024d94 @ 0x24d94 */

ulong fcn.00024d94(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x2a978 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00024dc4 @ 0x24dc4 */

void fcn.00024dc4(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    if (arg2 == 0) {
        fcn.00023788(0x2a860,0x239,0x29f28);
    }
    if (-arg2 < arg1) {
        fcn.00023788(0x2a860,0x23a,0x2a8b0);
    }
    arg1_00 = fcn.00024d94();
    if (arg1_00 != 0) {
        fcn.0002322c(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00024e3c @ 0x24e3c */

void fcn.00024e3c(void)

{
    int64_t arg2;
    int64_t in_R9;
    
    arg2 = (**(*0x2a978 + 0x48))();
    if (arg2 < 0) {
        fcn.000236d0(0x80000000,0x276c0,arg2,in_R9);
        fcn.00023788(0x2a860,0x335,0x276e8);
    }
    return;
}


/* fcn.00023004 @ 0x23004 */

int64_t fcn.00023004(int64_t arg1)

{
    int64_t iVar1;
    uint32_t arg2;
    char *arg3;
    
    iVar1 = 0;
    if (arg1 == 0) {
        arg3 = "String != ((void *) 0)";
        arg2 = 0x24;
    }
    else {
        if ((arg1 & 1U) == 0) goto code_r0x0002304d;
        arg3 = "((UINTN)String & 0x00000001) == 0";
        arg2 = 0x25;
    }
    fcn.00023788(0x29d98,arg2,arg3);
code_r0x0002304d:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        iVar1 = iVar1 + 1;
    }
    return iVar1;
}


/* fcn.00023d5c @ 0x23d5c */

void fcn.00023d5c(int64_t arg1,ulong noname_1,int64_t arg2,int64_t arg3)

{
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    
    if ((arg1 & 1U) != 0) {
        fcn.00023788(0x2a390,0x47,0x2a368);
    }
    if ((arg2 & 1U) != 0) {
        fcn.00023788(0x2a390,0x48,0x2a3c8);
    }
    fcn.00023f14(arg1,0x141,0x140,arg2,in_stack_00000058,in_stack_00000060);
    return;
}


/* fcn.00024d70 @ 0x24d70 */

void fcn.00024d70(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    int64_t in_stack_00000058;
    uint32_t in_stack_00000060;
    
    fcn.00023f14(arg1,arg2,arg3,arg4,in_stack_00000058,in_stack_00000060);
    return;
}


/* fcn.00023ea8 @ 0x23ea8 */

char * fcn.00023ea8(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    *arg1 = 0;
    do {
        if (arg3 == 0) {
            fcn.00023788(0x2a8f0,0x26,0x29e50);
        }
        arg1 = arg1 + 1;
        uVar1 = arg2 / (arg3 & 0xffffffffU);
        *arg1 = "0123456789ABCDEFd:\\uefi\\edk2\\MdePkg\\Library\\UefiMemoryAllocationLib\\MemoryAllocationLib.c"
                [arg2 % (arg3 & 0xffffffffU)];
        arg2 = uVar1;
    } while (uVar1 != 0);
    return arg1;
}


/* fcn.00023e74 @ 0x23e74 */

uchar * fcn.00023e74(uint32_t arg1,uint32_t arg2,int64_t arg3,int64_t arg4)

{
    uint in_register_0000000c;
    uchar *puVar1;
    uint in_register_00000014;
    int64_t iVar2;
    int64_t in_stack_00000028;
    
    puVar1 = CONCAT44(in_register_0000000c,arg1);
    iVar2 = 0;
    if (0 < arg3) {
        do {
            if (CONCAT44(in_register_00000014,arg2) <= puVar1) {
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


