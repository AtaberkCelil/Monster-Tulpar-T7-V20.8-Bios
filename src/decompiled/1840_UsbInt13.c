// decompiled by r2ghidra: 1840_UsbInt13.pe32
// functions: 8

/* entry0 @ 0x10320 */

void entry0(int64_t arg1,int64_t arg2)

{
    *0x11130 = *(arg2 + 0x60);
    *0x11128 = arg2;
    fcn.00010340(arg1,arg2);
    return;
}


/* fcn.00010340 @ 0x10340 */

int64_t fcn.00010340(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    int64_t aiStackX_10 [3];
    
    aiStackX_10[0] = arg1;
    iVar1 = (**(*0x11130 + 0x140))(0x11020,0,0x11120);
    if (-1 < iVar1) {
        *0x11100 = **0x11120;
        *0x11118 = *(*0x11100 + 0x6a1);
        iVar1 = fcn.0001042c();
        if (-1 < iVar1) {
            (*0x11120)[5] = 0x10a94;
            (*0x11120)[6] = fcn.00010bd0;
            (*0x11120)[7] = fcn.00010e50;
            if (*(*0x11128 + 8) < 0x20000) {
                iVar1 = -0x7ffffffffffffffd;
            }
            else {
                iVar1 = (**(*0x11130 + 0x170))(0x200,8,0x106e8,0,0x11010,aiStackX_10);
            }
        }
    }
    return iVar1;
}


/* fcn.0001042c @ 0x1042c */

int64_t fcn.0001042c(void)

{
    int64_t iVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    int64_t var_10h;
    int64_t var_bp_18h;
    int64_t var_10h_2;
    int32_t var_8h;
    
    var_10h = 0;
    var_10h_2._0_1_ = str.USB_Storage._0_8_;
    var_10h_2._1_2_ = SUB82(str.USB_Storage._0_8_,1);
    var_10h_2._3_4_ = SUB84(str.USB_Storage._0_8_,3);
    var_10h_2._7_1_ = SUB81(str.USB_Storage._0_8_,7);
    var_8h._0_2_ = str.USB_Storage._8_4_;
    var_8h._2_1_ = SUB41(str.USB_Storage._8_4_,2);
    var_8h._3_1_ = SUB41(str.USB_Storage._8_4_,3);
    if ((*0xf0018 < 8) && (*0xf0019 < 0x55)) {
        iVar1 = -0x7ffffffffffffffd;
    }
    else {
        *0x110f0 = *0xfff4c + 0xf0000;
        iVar1 = (**(*0x11130 + 0x140))(0x11000,0,0x11110);
        if ((-1 < iVar1) && (iVar1 = (***0x11110)(1,0,2,&var_bp_18h,&var_10h), -1 < iVar1)) {
            if (var_bp_18h != 0) {
                uVar2 = 0;
                do {
                    uVar3 = uVar2;
                    if (*(var_bp_18h + 0x590 + uVar2) != *(&var_10h_2 + uVar2)) break;
                    uVar3 = uVar3 + 1;
                    uVar2 = uVar3;
                } while (uVar3 < 0xc);
                if (uVar3 == 0xc) {
                    var_10h_2._0_1_ = 1;
                    var_10h_2._1_2_ = 0;
                    var_10h_2._3_4_ = 0xb2;
                    var_10h_2._7_1_ = *(*0x11100 + 0x71a);
                    var_8h._0_2_ = 0;
                    var_8h._2_1_ = 0;
                    uVar2 = *(var_bp_18h + 0x5a0);
                    *(uVar2 + var_bp_18h) = CONCAT17(var_10h_2._7_1_,0xb2000001);
                    *(uVar2 + 8 + var_bp_18h) = 0;
                    *(uVar2 + 10 + var_bp_18h) = 0;
                    *0x11108 = (*(*0x11110)[8])(var_bp_18h,var_10h & 0xffff,0x10);
                    if (*0x11108 == 0) {
                        return -0x7ffffffffffffff7;
                    }
                    *0x110e0 = *(*0x11108 + 0x5a2) + *0x11108;
                    return 0;
                }
            }
            iVar1 = -0x7ffffffffffffff2;
        }
    }
    return iVar1;
}


/* fcn.00010bd0 @ 0x10bd0 */

int64_t fcn.00010bd0(int64_t arg1,uint32_t arg2)

{
    uint32_t *puVar1;
    int64_t iVar2;
    int64_t iVar3;
    uint8_t uVar4;
    uint64_t uVar5;
    ulong uVar6;
    char acStackX_10 [8];
    char acStackX_18 [8];
    char acStackX_20 [8];
    uchar auStack_68 [35];
    uchar uStack_45;
    
    acStackX_10[0] = -1;
    uVar5 = 0;
    do {
        if (*(uVar5 * 0x59 + *0x11108) == *(arg1 + 0x78)) {
            return -0x7ffffffffffffffe;
        }
        uVar4 = uVar5 + 1;
        uVar5 = uVar4;
    } while (uVar4 < 0x10);
    uVar5 = 0;
    do {
        uVar4 = uVar5;
        if (*(uVar5 * 0x59 + *0x11108) == '\0') break;
        uVar4 = uVar4 + 1;
        uVar5 = uVar4;
    } while (uVar4 < 0x10);
    if (uVar4 == 0x10) {
        iVar2 = -0x7ffffffffffffff7;
    }
    else {
        uVar6 = 0;
        (**(*0x11110 + 0x28))(0,0,0,0);
        if (*0x11110 != 0) {
            fcn.00010840(CONCAT71(uVar6 >> 8,uVar4),arg1,auStack_68);
        }
        iVar2 = (**(*0x11110 + 0x10))(*0x11110,auStack_68,acStackX_10);
        iVar3 = *0x11108;
        if (iVar2 < 0) {
            (**(*0x11110 + 0x30))(0,0);
        }
        else {
            uVar5 = uVar4;
            iVar2 = uVar5 * 0x59;
            *(iVar2 + *0x11108) = *(arg1 + 0x78);
            *(iVar2 + 1 + iVar3) = acStackX_10[0];
            *(iVar2 + 2 + iVar3) = uStack_45;
            puVar1 = *(arg1 + 0x70);
            *(iVar2 + 3 + iVar3) = *(puVar1 + 0x6e);
            *(iVar2 + 5 + iVar3) = puVar1[0x1a];
            *(iVar2 + 7 + iVar3) = *(puVar1 + 0x72);
            *(iVar2 + 9 + iVar3) = puVar1[0x1b];
            *(iVar2 + 0xb + iVar3) = puVar1[0x1c];
            *(iVar2 + 0xc + iVar3) = *(puVar1 + 0x6a);
            *(iVar2 + 0xd + iVar3) = *(puVar1 + 0x5e);
            *(iVar2 + 0xf + iVar3) = *(puVar1 + 0x76);
            *(iVar2 + 0x10 + iVar3) = *(puVar1 + 0x18);
            *(iVar2 + 0x18 + iVar3) = *(puVar1 + 0x136);
            iVar3 = *0x110e0 + uVar5 * 2;
            *(uVar5 + iVar3) = *(arg1 + 0x78);
            *(uVar5 + 1 + iVar3) = *(arg1 + 0x88);
            (**(*0x11110 + 0x30))(0,0);
            *puVar1 = *puVar1 | 4;
            if ((((puVar1[3] < '\0') && (iVar3 = (**(*0x11120 + 0x40))(acStackX_18,acStackX_20), -1 < iVar3)) &&
                (*0x110f8 == '\0')) && ((*(puVar1 + 0xb) == acStackX_18[0] && (*(puVar1 + 0xd) == acStackX_20[0])))) {
                *0x110f8 = acStackX_10[0];
            }
            if (((arg1 != 0x11140) && (*(arg1 + 0x98) == '\x03')) && (*(*(*0x11118 + 0x3aa) + 4) == '\x03')) {
                fcn.00010e50(0x11140);
            }
            if (((arg1 != 0x111e0) && (*(arg1 + 0x98) == '\x01')) && (*(*(*0x11118 + 0x3aa) + 5) == '\x03')) {
                fcn.00010e50(0x111e0);
            }
            if (((arg1 != 0x11280) && (*(arg1 + 0x98) == '\x02')) && (*(*(*0x11118 + 0x3aa) + 6) == '\x03')) {
                fcn.00010e50(0x11280);
            }
            iVar2 = 0;
        }
    }
    return iVar2;
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    //[00] -r-x section size 3488 named .text
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.000105ac @ 0x105ac */

ulong fcn.000105ac(void)

{
    *0x111c0 = 0;
    *0x11260 = 0;
    *0x11300 = 0;
    *0x111b0 = *0x11100 + 0x65;
    *0x111c8 = 0xffff;
    *0x111b8 = 0x7e;
    *0x111d0 = "USB Hotplug FDD";
    *0x11250 = *0x11100 + 0x225;
    *0x11258 = 0x7d;
    *0x11270 = 0x11060;
    *0x112f0 = *0x11100 + 0x3e5;
    *0x112f8 = 0x7f;
    *0x11310 = "USB Hotplug CDROM";
    *0x111d8 = 3;
    *0x11268 = 0xffff;
    *0x11278 = 1;
    *0x11308 = 0xffff;
    *0x11318 = 2;
    if ((*(*(*0x11118 + 0x3aa) + 4) - 1U & 0xfd) == 0) {
        fcn.00010bd0(0x11140,*0x11118);
    }
    if ((*(*(*0x11118 + 0x3aa) + 5) - 1U & 0xfd) == 0) {
        fcn.00010bd0(0x111e0,*0x11118);
    }
    if ((*(*(*0x11118 + 0x3aa) + 6) - 1U & 0xfd) == 0) {
        fcn.00010bd0(0x11280,*0x11118);
    }
    return 0;
}


/* fcn.00010840 @ 0x10840 */

ulong fcn.00010840(int64_t arg1,int64_t arg2,int64_t arg3)

{
    char cVar1;
    uint16_t uVar2;
    int64_t iVar3;
    uint64_t uVar4;
    char *pcVar5;
    uchar *puVar6;
    char *pcVar7;
    int iVar8;
    uint8_t uVar9;
    char *pcVar10;
    bool bVar11;
    uint16_t auStackX_8 [4];
    
    iVar8 = 0;
    fcn.00010260(arg3,0x45,0);
    fcn.00010260(auStackX_8,2,0);
    uVar4 = *0x11108;
    *(arg3 + 2) = *(arg2 + 0x89);
    *(arg3 + 6) = *(arg2 + 0x88) >> 3 & 0x1f;
    uVar2 = *(arg2 + 0x88);
    *(arg3 + 0xe) = 0x30c;
    *(arg3 + 10) = uVar2 & 7;
    *(arg3 + 0x16) = auStackX_8[0] & 0xf7ff | 0x500;
    pcVar7 = *(arg2 + 0x90);
    pcVar10 = uVar4 + 0x19 + (arg1 & 0xffU) * 0x59;
    uVar9 = 0;
    pcVar5 = pcVar10;
    do {
        cVar1 = *pcVar7;
        if (cVar1 == '\0') break;
        if ((cVar1 != ' ') || (pcVar7[-1] != ' ')) {
            *pcVar5 = cVar1;
            pcVar5 = pcVar5 + 1;
        }
        uVar9 = uVar9 + 1;
        pcVar7 = pcVar7 + 1;
    } while (uVar9 < 0x3f);
    *pcVar5 = '\0';
    *(arg3 + 0x1c) = pcVar10;
    *(arg3 + 0x1e) = pcVar10 >> 4 & 0xf000;
    *(arg3 + 0x12) = uVar4 + 0x590 >> 4 & 0xf000;
    *(arg3 + 0x10) = uVar4 + 0x590;
    cVar1 = *(arg2 + 0x98);
    uVar9 = *(arg2 + 0x78);
    if (cVar1 == '\x01') {
        if ((*(*0x11100 + 0x921) & 0x40) == 0) {
            *(arg3 + 0x14) = 2;
        }
        else {
            *(arg3 + 0x14) = 5;
        }
        iVar8 = 2;
        uVar9 = uVar9 | 0x80;
    }
    else {
        if (cVar1 == '\x02') {
            if ((*(*0x11100 + 0x921) & 0x40) == 0) {
                *(arg3 + 0x14) = 3;
            }
            else {
                *(arg3 + 0x14) = 5;
            }
            iVar3 = *0x110f0;
            bVar11 = *0x110e8 == '\0';
            iVar8 = 3;
            *(arg3 + 0x1a) = 0xf000;
            *(arg3 + 0x18) = *(iVar3 + 0xc);
            if (bVar11) {
                uVar2 = *(uVar4 + 0x59e);
                *0x110e8 = '\x01';
                puVar6 = *(iVar3 + 0xe) + 0xf0005;
                *puVar6 = 0x9a;
                *(puVar6 + 1) = uVar2 + (uVar4 << 0xc);
            }
            goto code_r0x00010a57;
        }
        if (cVar1 != '\x03') {
            *(arg3 + 0x14) = 0xff;
            goto code_r0x00010a57;
        }
        if ((*(*0x11100 + 0x921) & 0x40) == 0) {
            *(arg3 + 0x14) = 1;
        }
        else {
            *(arg3 + 0x14) = 5;
        }
        iVar8 = 4;
    }
    *(arg3 + 0x1a) = uVar4 >> 4;
    *(arg3 + 0x18) = (arg1 & 0xffU) * 4 + *(uVar4 + 0x59c);
code_r0x00010a57:
    *(arg3 + 0x20) = (iVar8 * 0x10000 + uVar9) * 0x100 + 0x11;
    *(arg3 + 0x3d) = *(arg2 + 0x80);
    return 0;
}


/* fcn.00010e50 @ 0x10e50 */

int64_t fcn.00010e50(int64_t arg1)

{
    uchar *puVar1;
    int64_t iVar2;
    uint8_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    
    iVar2 = (**(*0x11110 + 0x28))(0,0,0,0);
    uVar4 = 0;
    do {
        if (*(uVar4 * 0x59 + *0x11108) == *(arg1 + 0x78)) {
            iVar5 = uVar4 * 0x59;
            puVar1 = iVar5 + 1 + *0x11108;
            *(iVar5 + *0x11108) = 0;
            iVar2 = (**(*0x11110 + 0x18))(*0x11110,CONCAT71(uVar4 * 0x59 >> 8,*puVar1));
            if (-1 < iVar2) {
                if ((*0x110f8 != '\0') && (*0x110f8 == *(iVar5 + 1 + *0x11108))) {
                    *0x110f8 = '\0';
                }
                *(*0x110e0 + uVar4 * 3) = 0;
            }
            break;
        }
        uVar3 = uVar4 + 1;
        uVar4 = uVar3;
    } while (uVar3 < 0x10);
    (**(*0x11110 + 0x30))(0,0);
    if (-1 < iVar2) {
        **(arg1 + 0x70) = **(arg1 + 0x70) & 0xfffffffa;
        if ((((arg1 != 0x11140) && (*(arg1 + 0x98) == '\x03')) && (*(*(*0x11118 + 0x3aa) + 4) == '\x03')) &&
           (*(*0x11100 + 0x727) == '\0')) {
            fcn.00010bd0(0x11140,*(*0x11118 + 0x3aa));
        }
        if (((arg1 != 0x111e0) && (*(arg1 + 0x98) == '\x01')) &&
           ((*(*(*0x11118 + 0x3aa) + 5) == '\x03' && (*(*0x11100 + 0x728) == '\0')))) {
            fcn.00010bd0(0x111e0,*(*0x11118 + 0x3aa));
        }
        if (((arg1 != 0x11280) && (*(arg1 + 0x98) == '\x02')) &&
           ((*(*(*0x11118 + 0x3aa) + 6) == '\x03' && (*(*0x11100 + 0x729) == '\0')))) {
            fcn.00010bd0(0x11280,*(*0x11118 + 0x3aa));
        }
    }
    return iVar2;
}


