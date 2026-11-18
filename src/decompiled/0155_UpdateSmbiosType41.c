// decompiled by r2ghidra: 0155_UpdateSmbiosType41.pe32
// functions: 10

/* entry0 @ 0x102bc */

void entry0(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    ulong uStackX_8;
    int64_t var_18h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_bp_8h;
    int32_t var_4h;
    
    *0x10c88 = *(arg2 + 0x60);
    uStackX_8 = 0;
    var_10h = 0x60ff8964;
    var_ch = 0x41d0e906;
    var_bp_8h = 0x41f2edaf;
    var_4h = -0x711f8b17;
    *0x10c90 = arg2;
    *0x10c98 = *0x10c88;
    (**(*0x10c88 + 0x140))(0x10af0,0,0x10c70);
    iVar1 = (**(*0x10c88 + 0x50))(0x200,8,0x108d8,0,&var_18h);
    if (-1 < iVar1) {
        (**(*0x10c88 + 0xa8))(&var_10h,var_18h,&uStackX_8);
    }
    return;
}


/* fcn.00010a98 @ 0x10a98 */

void fcn.00010a98(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.00010a68(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.00010260(arg1_00,arg1);
    }
    return;
}


/* fcn.00010a68 @ 0x10a68 */

ulong fcn.00010a68(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x10c98 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.00010260 @ 0x10260 */

int64_t fcn.00010260(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
    //[00] -r-x section size 2176 named .text
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


/* fcn.000109e8 @ 0x109e8 */

ulong fcn.000109e8(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    int16_t iVar2;
    
    iVar2 = 0;
    if ((arg2 == 0) || (arg1 == 0)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.00010900(arg1);
    if (0x3f < uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x00010a56;
    }
    if (arg1 < arg2 + 0x40) {
        return 0x800000000000000f;
    }
code_r0x00010a56:
    for (; *arg1 != iVar2; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = iVar2;
    return 0;
}


/* fcn.00010954 @ 0x10954 */

ulong fcn.00010954(int64_t arg1,uint32_t arg2,int64_t arg3)

{
    char cVar1;
    uint64_t extraout_RAX;
    uint in_register_00000014;
    
    if ((((arg1 == 0) || (arg3 == 0)) || (1000000 < CONCAT44(in_register_00000014,arg2))) ||
       (CONCAT44(in_register_00000014,arg2) == 0)) {
        return 0x8000000000000002;
    }
    fcn.00010928(arg3,CONCAT44(in_register_00000014,arg2));
    if (CONCAT44(in_register_00000014,arg2) < extraout_RAX || CONCAT44(in_register_00000014,arg2) == extraout_RAX) {
        return 0x8000000000000005;
    }
    if (arg3 <= arg1) {
        if (arg1 < arg3 + extraout_RAX + 1) {
            return 0x800000000000000f;
        }
        if (arg3 < arg1) goto code_r0x000109c5;
    }
    if (arg3 < arg1 + CONCAT44(in_register_00000014,arg2)) {
        return 0x800000000000000f;
    }
code_r0x000109c5:
    cVar1 = *arg3;
    if (cVar1 != '\0') {
        arg3 = arg3 - arg1;
        do {
            *arg1 = cVar1;
            arg1 = arg1 + 1;
            cVar1 = *(arg1 + arg3);
        } while (cVar1 != '\0');
    }
    *arg1 = '\0';
    return 0;
}


/* fcn.00010364 @ 0x10364 */

void fcn.00010364(int64_t arg1)

{
    char cVar1;
    uchar uVar2;
    uchar uVar3;
    ushort uVar4;
    char16_t *pcVar5;
    char *arg2;
    ushort *puVar6;
    int64_t iVar7;
    uint8_t uVar8;
    int16_t *piVar9;
    
    uVar8 = *arg1 & 0x7f;
    if (uVar8 == 1) {
        iVar7 = 0;
        pcVar5 = L"Onboard - Other";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - Other";
    }
    else if (uVar8 == 3) {
        iVar7 = 0;
        pcVar5 = L"Onboard - Video";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - Video";
    }
    else if (uVar8 == 4) {
        iVar7 = 0;
        pcVar5 = L"Onboard - SCSI";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - SCSI";
    }
    else if (uVar8 == 5) {
        iVar7 = 0;
        pcVar5 = L"Onboard - Ethernet";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - Ethernet";
    }
    else if (uVar8 == 6) {
        iVar7 = 0;
        pcVar5 = L"Onboard - Token Ring";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - Token Ring";
    }
    else if (uVar8 == 7) {
        iVar7 = 0;
        pcVar5 = L"Onboard - Sound";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - Sound";
    }
    else if (uVar8 == 8) {
        iVar7 = 0;
        pcVar5 = L"Onboard - PATA";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - PATA";
    }
    else if (uVar8 == 9) {
        iVar7 = 0;
        pcVar5 = L"Onboard - SATA";
        do {
            pcVar5 = pcVar5 + 1;
            iVar7 = iVar7 + 1;
        } while (*pcVar5 != L'\0');
        arg2 = fcn.00010a98(iVar7 * 2 + 2);
        pcVar5 = L"Onboard - SATA";
    }
    else {
        iVar7 = 0;
        if (uVar8 == 10) {
            pcVar5 = L"Onboard - SAS";
            do {
                pcVar5 = pcVar5 + 1;
                iVar7 = iVar7 + 1;
            } while (*pcVar5 != L'\0');
            arg2 = fcn.00010a98(iVar7 * 2 + 2);
            pcVar5 = L"Onboard - SAS";
        }
        else {
            pcVar5 = L"Unknown";
            do {
                pcVar5 = pcVar5 + 1;
                iVar7 = iVar7 + 1;
            } while (*pcVar5 != L'\0');
            arg2 = fcn.00010a98(iVar7 * 2 + 2);
            pcVar5 = L"Unknown";
        }
    }
    iVar7 = 0;
    fcn.000109e8(pcVar5,arg2);
    cVar1 = *arg2;
    while (cVar1 != '\0') {
        iVar7 = iVar7 + 1;
        cVar1 = arg2[iVar7];
    }
    puVar6 = fcn.00010a98(iVar7 + 0xd);
    *puVar6 = 0xb29;
    uVar4 = (**(*0x10c70 + 0x18))();
    *(puVar6 + 5) = *arg1;
    uVar2 = *(arg1 + 1);
    puVar6[1] = uVar4;
    uVar3 = *(arg1 + 4);
    *(puVar6 + 3) = uVar2;
    uVar4 = *(arg1 + 2);
    *(puVar6 + 9) = uVar3;
    uVar2 = *(arg1 + 5);
    *(puVar6 + 7) = uVar4;
    *(puVar6 + 2) = 1;
    *(puVar6 + 5) = uVar2;
    fcn.00010954(puVar6 + 0xb,iVar7 + 1,arg2);
    for (piVar9 = *(puVar6 + 1) + puVar6; *piVar9 != 0; piVar9 = piVar9 + 1) {
    }
    (**(*0x10c70 + 0x20))(puVar6,CONCAT62(piVar9 >> 0x10,(piVar9 - puVar6) + 2));
    (**(*0x10c88 + 0x48))(puVar6);
    //WARNING: Could not recover jumptable at 0x00010666. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x10c88 + 0x48))(arg2);
    return;
}


/* fcn.0001066c @ 0x1066c */

void fcn.0001066c(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    char cVar3;
    int64_t iVar4;
    uchar uVar5;
    uint64_t uVar6;
    int8_t var_18h;
    int32_t var_19h;
    int8_t var_1dh;
    uint32_t var_20h;
    ushort uStackX_1c;
    int32_t var_28h_2;
    int16_t var_2ch;
    int64_t var_30h;
    uchar uStack_48;
    unkbyte7 Stack_47;
    int64_t var_38h;
    int64_t var_30h_2;
    int64_t var_28h;
    int64_t var_20h_2;
    int64_t var_18h_2;
    
    _var_18h = 0;
    _var_28h_2 = 0;
    iVar4 = (**(*0x10c88 + 0x138))(2,0x10ae0,0,&var_18h,&var_28h_2);
    if ((-1 < iVar4) && (uVar6 = 0, _var_18h != 0)) {
        do {
            iVar4 = (**(*0x10c88 + 0x98))(*(_var_28h_2 + uVar6 * 8),0x10ae0,&var_28h);
            if ((-1 < iVar4) &&
               ((iVar4 = (**(var_28h + 0x70))(var_28h,&var_20h_2,&uStack_48,&var_30h_2,&var_38h), -1 < iVar4 &&
                (CONCAT71(Stack_47,uStack_48) == 0)))) {
                iVar4 = (CONCAT71(var_38h._1_7_,var_38h) + (CONCAT71(var_30h_2._1_7_,var_30h_2) + 0x18000) * 8) *
                        0x1000;
                uVar1 = *(iVar4 + 0xb);
                uVar2 = *(iVar4 + 10);
                if (uVar1 == 6) {
                    if ((uVar2 != 4) && (uVar2 != 9)) {
code_r0x00010763:
                        if (uVar1 == 1) {
                            if (uVar2 == 7) {
                                uVar5 = 10;
                                cVar3 = *0x10c81 + '\x01';
                                *0x10c81 = cVar3;
                            }
                            else if (uVar2 - 5 < 2) {
                                uVar5 = 9;
                                cVar3 = *0x10c80 + '\x01';
                                *0x10c80 = cVar3;
                            }
                            else if (uVar2 == 0) {
                                uVar5 = 4;
                                cVar3 = *0x10c7b + '\x01';
                                *0x10c7b = cVar3;
                            }
                            else {
                                if (uVar2 != 1) goto code_r0x000107f2;
                                uVar5 = 8;
                                cVar3 = *0x10c7f + '\x01';
                                *0x10c7f = cVar3;
                            }
                        }
                        else if (uVar1 == 2) {
                            if ((uVar2 & 0x7f) == 0) {
code_r0x000107b5:
                                uVar5 = 5;
                                cVar3 = *0x10c7c + '\x01';
                                *0x10c7c = cVar3;
                            }
                            else {
                                if (uVar2 != 1) goto code_r0x000107f2;
                                uVar5 = 6;
                                cVar3 = *0x10c7d + '\x01';
                                *0x10c7d = cVar3;
                            }
                        }
                        else if (uVar1 == 3) {
code_r0x000107ce:
                            uVar5 = 3;
                            cVar3 = *0x10c7a + '\x01';
                            *0x10c7a = cVar3;
                        }
                        else {
                            if (uVar1 == 4) {
                                if (uVar2 == 0) goto code_r0x000107ce;
                                if (((uVar2 == 1) || (uVar2 == 3)) || (uVar2 == 0x80)) goto code_r0x00010794;
                            }
                            else if (uVar1 == 0xd) {
                                if (((uVar2 - 0x20 & 0xde) == 0) && (uVar2 != 0x40)) goto code_r0x000107b5;
                            }
                            else if ((uVar1 == 0xf) && (uVar2 - 2 < 2)) {
code_r0x00010794:
                                uVar5 = 7;
                                cVar3 = *0x10c7e + '\x01';
                                *0x10c7e = cVar3;
                                goto code_r0x0001087b;
                            }
code_r0x000107f2:
                            uVar5 = 1;
                            cVar3 = *0x10c78 + '\x01';
                            *0x10c78 = cVar3;
                        }
code_r0x0001087b:
                        var_20h = CONCAT22(var_20h_2,CONCAT11(cVar3,uVar5)) | 0x80;
                        uStackX_1c = CONCAT11(var_38h & 7 | var_30h_2 << 3,uStack_48);
                        if (*0x10c70 != 0) {
                            fcn.00010364(&var_20h);
                        }
                    }
                }
                else if (uVar1 < 0x14) goto code_r0x00010763;
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < _var_18h);
    }
    return;
}


/* fcn.00010928 @ 0x10928 */

uint64_t fcn.00010928(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    if (((CONCAT44(in_register_0000000c,arg1) != 0) && (arg2 != 0)) &&
       (uVar1 = 0, *CONCAT44(in_register_0000000c,arg1) != '\0')) {
        do {
            if (arg2 - 1U <= uVar1) {
                return arg2;
            }
            uVar1 = uVar1 + 1;
        } while (*(uVar1 + CONCAT44(in_register_0000000c,arg1)) != '\0');
        return uVar1;
    }
    return 0;
}


/* fcn.00010900 @ 0x10900 */

uint64_t fcn.00010900(uint32_t arg1)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
        do {
            if (0x3e < uVar1) {
                return 0x40;
            }
            uVar1 = uVar1 + 1;
        } while (*(CONCAT44(in_register_0000000c,arg1) + uVar1 * 2) != 0);
        return uVar1;
    }
    return 0;
}


