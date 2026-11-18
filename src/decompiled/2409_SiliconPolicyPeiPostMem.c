// decompiled by r2ghidra: 2409_SiliconPolicyPeiPostMem.te
// functions: 195

/* fcn.00000258 @ 0x258 */

uint __fastcall fcn.00000258(uint param_1)

{
    int iVar1;
    uint *puVar2;
    uint noname_0;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0;
    var_4h = 0;
    fcn.0000379c(param_1,&var_4h);
    if (var_4h != 0) {
        iVar1 = (**var_4h)();
        if (iVar1 == 0) {
            fcn.0000379c(noname_0,&var_8h);
        }
    }
    fcn.00001b15();
    puVar2 = fcn.0000375f();
    if (puVar2 != NULL) {
        *puVar2 = 0x80000010;
        puVar2[1] = 0xffd4586c;
        puVar2[2] = 0;
        fcn.00003777();
    }
    return 0;
}


/* entry0 @ 0x238 */

//WARNING: Variable defined which should be unmapped: var_ch
//WARNING: Variable defined which should be unmapped: var_8h

uint entry0(void)

{
    int iVar1;
    uint noname_0;
    uint noname_0_00;
    int32_t var_ch;
    int32_t var_8h;
    uint *puVar2;
    
    var_8h = &stack0xfffffffc;
    fcn.00003572(0,&stack0xfffffffc,0);
    var_8h = 0x250;
    fcn.0000396e();
    var_8h = 0;
    puVar2 = NULL;
    fcn.0000379c(noname_0,&stack0xfffffff8);
    if (puVar2 != NULL) {
        iVar1 = (**puVar2)();
        if (iVar1 == 0) {
            fcn.0000379c(noname_0_00,&var_8h);
        }
    }
    fcn.00001b15();
    puVar2 = fcn.0000375f();
    if (puVar2 != NULL) {
        *puVar2 = 0x80000010;
        puVar2[1] = 0xffd4586c;
        puVar2[2] = 0;
        fcn.00003777();
    }
    return 0;
}


/* fcn.00003572 @ 0x3572 */

//WARNING: Removing unreachable block (ram,0x00003586)

uint __cdecl fcn.00003572(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint *puVar1;
    uint uVar2;
    uint *in_EDX;
    uint uVar3;
    uint uVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    uVar4 = puVar1[1];
    uVar3 = puVar1[2];
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_8h != 0) {
        *arg_8h = uVar4;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    if (arg_10h != 0) {
        *arg_10h = uVar3;
    }
    return 1;
}


/* fcn.0000396e @ 0x396e */

int __fastcall fcn.0000396e(int param_1)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar3 = fcn.000038da();
    if (-1 < iVar3) {
        uVar4 = 0;
        uVar1 = *(param_1 + 4);
        if (uVar1 != 0) {
            do {
                cVar2 = fcn.000036bb();
                if (cVar2 != '\0') {
                    *(*(param_1 + 0xc) + uVar4 * 4) = 0xffd3a85d;
                    *(*(param_1 + 0x10) + uVar4 * 4) = 0xffd3a7df;
                    goto code_r0x000039fe;
                }
                uVar4 = uVar4 + 1;
            } while (uVar4 < uVar1);
        }
        if (uVar1 < 0x10) {
            fcn.000036a2();
            *(*(param_1 + 0xc) + *(param_1 + 4) * 4) = 0xffd3a85d;
            iVar3 = *(param_1 + 4);
            *(*(param_1 + 0x10) + iVar3 * 4) = 0xffd3a7df;
            *(param_1 + 4) = *(param_1 + 4) + 1;
            fcn.0000367e(iVar3);
code_r0x000039fe:
            iVar3 = 0;
        }
        else {
            iVar3 = -0x7ffffff7;
        }
    }
    return iVar3;
}


/* fcn.0000379c @ 0x379c */

void __cdecl fcn.0000379c(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00001b15 @ 0x1b15 */

uint __fastcall fcn.00001b15(uint param_1)

{
    uint noname_0;
    int32_t var_ch;
    int32_t var_4h;
    
    fcn.0000379c(param_1,&var_4h);
    fcn.00007e3c();
    fcn.00007d78();
    var_4h = 0;
    fcn.0000379c(noname_0,&var_4h);
    fcn.0000827a();
    fcn.00001a6e();
    var_4h = &var_ch;
    var_ch = InterruptDescriptorTableRegister();
    fcn.00003898();
    fcn.00001bba();
    fcn.000029bc();
    var_4h = &var_ch;
    var_ch = InterruptDescriptorTableRegister();
    fcn.00003898();
    var_4h = 0;
    fcn.000034c4(&var_4h);
    *(var_4h + 0x1e) = 1;
    return param_1;
}


/* fcn.00007e3c @ 0x7e3c */

uint __fastcall fcn.00007e3c(uint param_1)

{
    uint8_t uVar1;
    uint16_t uVar2;
    int iVar3;
    uint8_t *puVar4;
    int iVar5;
    uint noname_0;
    int *piVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint32_t uVar9;
    int *piVar10;
    uint8_t *puVar11;
    uint32_t *puVar12;
    bool bVar13;
    uint uStack_cc0;
    int aiStack_cbc [2];
    uint *puStack_cb4;
    uint uStack_cb0;
    uchar auStack_cac [2155];
    char cStack_441;
    
    uVar8 = 0;
    uStack_cc0 = 0;
    aiStack_cbc[0] = 0;
    fcn.0000379c(param_1,&uStack_cc0);
    fcn.000034c4(aiStack_cbc);
    fcn.0000379c(noname_0,&puStack_cb4);
    aiStack_cbc[1] = 0xca9;
    uStack_cb0 = (**puStack_cb4)(puStack_cb4,0xffd4764c,0xffd455bc,0,aiStack_cbc + 1,auStack_cac);
    iVar5 = aiStack_cbc[0];
    if (aiStack_cbc[0] == 0) {
        return uStack_cb0;
    }
    iVar3 = fcn.0000353a();
    uVar2 = (**(iVar3 + 8))(0x1d);
    uVar9 = 0;
    piVar6 = 0xffd477fc;
    if (cStack_441 != '\x01') goto code_r0x00007f28;
    if (uVar2 < 0x14) {
        if (uVar2 != 0x13) {
            if (uVar2 == 1) {
                piVar6 = 0xffd4595c;
                goto code_r0x00007f28;
            }
            if ((uVar2 == 2) || (uVar2 == 4)) {
                piVar6 = 0xffd459bc;
                goto code_r0x00007f28;
            }
            bVar13 = uVar2 == 5;
            goto code_r0x00007f13;
        }
    }
    else {
        if (uVar2 == 0x14) {
            piVar6 = 0xffd4597c;
            goto code_r0x00007f28;
        }
        if (uVar2 == 0x15) {
            piVar6 = 0xffd4593c;
            goto code_r0x00007f28;
        }
        bVar13 = uVar2 == 0x3f;
code_r0x00007f13:
        if (!bVar13) goto code_r0x00007f28;
    }
    piVar6 = 0xffd4599c;
code_r0x00007f28:
    uVar7 = 0;
    piVar10 = iVar5 + 0x138;
    do {
        piVar10[-1] = *piVar6;
        *piVar10 = piVar6[1];
        if ((*piVar6 != 0) && (piVar6[1] != 0)) {
            uVar9 = uVar9 | 1 << (uVar7 & 0x1f) & 0xffffU;
        }
        uVar7 = uVar7 + 2;
        piVar10 = piVar10 + 2;
        piVar6 = piVar6 + 2;
    } while (uVar7 < 8);
    *(iVar5 + 0x154) = uVar9;
    *(iVar5 + 0x156) = 0;
    iVar3 = fcn.0000353a();
    puVar4 = (**(iVar3 + 0xc))(0x2d);
    if (puVar4 == NULL) {
        uStack_cb0 = 0x80000002;
    }
    else {
        uVar1 = *puVar4;
        if (4 < uVar1) {
            uVar1 = 4;
        }
        uVar9 = uVar1;
        if (uVar1 != 0) {
            puVar11 = iVar5 + 0x108;
            do {
                puVar4 = puVar4 + 1;
                uVar1 = *puVar4;
                if ((uVar1 < 0x10) || (uVar1 == 0xff)) {
                    *puVar11 = uVar1;
                }
                puVar11 = puVar11 + 4;
                uVar9 = uVar9 - 1;
            } while (uVar9 != 0);
        }
        puVar12 = iVar5 + 0x108;
        do {
            iVar5 = fcn.0000353a();
            uVar9 = (**(iVar5 + 4))(0x2e);
            uVar1 = uVar8;
            uVar8 = uVar8 + 1;
            *puVar12 = *puVar12 & 0xfffffeff | ((uVar9 & 0xff) >> (uVar1 & 0x1f) & 1) << 8;
            puVar12 = puVar12 + 1;
        } while (uVar8 < 4);
    }
    return uStack_cb0;
}


/* fcn.00007d78 @ 0x7d78 */

uint __fastcall fcn.00007d78(uint param_1)

{
    uint uVar1;
    int iVar2;
    uint noname_0;
    int32_t *arg_ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    arg_ch = &var_4h;
    var_8h = 0;
    var_10h = 0;
    var_4h = 0;
    var_ch = 0;
    fcn.0000379c(param_1,arg_ch);
    fcn.0000379c(arg_ch,&var_8h);
    fcn.000034c4(&var_ch);
    fcn.000034c4(&var_10h);
    uVar1 = fcn.0000379c(noname_0,&var_14h);
    if ((*(var_ch + 0x24) & 1) != 0) {
        iVar2 = fcn.0000361f();
        if (iVar2 == 0) {
            return 0x8000000e;
        }
        *(var_10h + 0x50) = 0xb2b1;
        *(var_10h + 0x48) = 0xffd42270;
        *(var_10h + 0x4c) = 0;
        *(var_10h + 0x1c) = *(iVar2 + 0x9c);
        *(var_10h + 0x40) = *(iVar2 + 0x308);
        *(var_10h + 0x44) = *(iVar2 + 0x30c);
    }
    return uVar1;
}


/* fcn.0000827a @ 0x827a */

//WARNING: Control flow encountered bad instruction data

uint fcn.0000827a(void)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    uint noname_0;
    uint uVar4;
    int iStack_4;
    
    iStack_4 = 0;
    iVar2 = fcn.0000353a();
    (**(iVar2 + 0x44))(0x24,0);
    iVar2 = fcn.0000353a();
    (**(iVar2 + 0x44))(0x25,0);
    iVar2 = fcn.0000353a();
    (**(iVar2 + 0x44))(0x26,0);
    iVar2 = fcn.0000353a();
    (**(iVar2 + 0x44))(0x27,0);
    iVar2 = fcn.0000353a();
    uVar1 = (**(iVar2 + 8))(0x1d);
    uVar3 = fcn.0000379c(noname_0,&iStack_4);
    if (iStack_4 != 0) {
        switch(uVar1) {
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        default:
            *(iStack_4 + 5) = 8;
        }
    }
    if (uVar1 == 0x16) {
        iVar2 = fcn.0000353a();
        uVar4 = 0x9020007;
    }
    else {
        if ((uVar1 < 0x3a) || ((0x3b < uVar1 && (uVar1 != 0x3d)))) goto code_r0x00008713;
        iVar2 = fcn.0000353a();
        uVar4 = 0x8100000;
    }
    (**(iVar2 + 0x44))(0x38,uVar4);
code_r0x00008713:
    fcn.000081d5();
    fcn.00007fee();
    return uVar3;
}


/* fcn.0000353a @ 0x353a */

int32_t __fastcall fcn.0000353a(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.0000379c(param_1,&var_4h);
    return var_4h;
}


/* fcn.000081d5 @ 0x81d5 */

void __fastcall fcn.000081d5(uint param_1)

{
    int iVar1;
    int32_t var_cbch;
    uint32_t var_1dch;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = 0;
    iVar1 = fcn.0000379c(param_1,&var_10h);
    if (-1 < iVar1) {
        var_4h = 0xca9;
        iVar1 = (**var_10h)(var_10h,0xffd4764c,0xffd455bc,0,&var_4h,&var_cbch);
        if (-1 < iVar1) {
            iVar1 = fcn.0000353a();
            iVar1 = (**(iVar1 + 0xc))(0x38);
            if (iVar1 != 0) {
                iVar1 = fcn.0000353a();
                (**(iVar1 + 0xc))(0x38);
                fcn.000094eb();
                if (var_1dch == '\x01') {
                    var_ch = var_ch | 0x6000;
                }
                else {
                    var_ch = var_ch & 0xffffbfffU | 0x2000;
                }
                fcn.00009613();
            }
        }
    }
    return;
}


/* fcn.00007fee @ 0x7fee */

void __fastcall fcn.00007fee(uint param_1)

{
    int iVar1;
    uint8_t uVar2;
    int aiStack_cc8 [3];
    uint *puStack_cbc;
    uchar auStack_cb8 [3252];
    
    uVar2 = 0;
    aiStack_cc8[0] = 0;
    aiStack_cc8[1] = 0;
    iVar1 = fcn.0000379c(param_1,&puStack_cbc);
    if (-1 < iVar1) {
        aiStack_cc8[2] = 0xca9;
        iVar1 = (**puStack_cbc)(puStack_cbc,0xffd4764c,0xffd455bc,0,aiStack_cc8 + 2,auStack_cb8);
        if (-1 < iVar1) {
            do {
                iVar1 = fcn.0000353a();
                if (uVar2 == 0) {
                    iVar1 = (**(iVar1 + 0xc))(0x24);
                    if (iVar1 != 0) {
                        iVar1 = fcn.0000353a();
                        aiStack_cc8[0] = (**(iVar1 + 0xc))(0x24);
                    }
                }
                else {
                    iVar1 = (**(iVar1 + 0xc))(0x25);
                    if (iVar1 != 0) {
                        iVar1 = fcn.0000353a();
                        iVar1 = (**(iVar1 + 0xc))(0x25);
                        aiStack_cc8[uVar2] = iVar1;
                    }
                }
                if (aiStack_cc8[uVar2] != 0) {
                    fcn.000094eb();
                    fcn.00009613();
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < 2);
        }
    }
    return;
}


/* fcn.00001a6e @ 0x1a6e */

void __fastcall fcn.00001a6e(uint param_1)

{
    int iVar1;
    uint noname_0;
    char cVar2;
    uint uStack_cc4;
    uint *puStack_cc0;
    uint uStack_cbc;
    uchar auStack_cb8 [50];
    char cStack_c86;
    
    iVar1 = fcn.0000379c(param_1,&puStack_cc0);
    if (-1 < iVar1) {
        uStack_cc4 = 0xca9;
        iVar1 = (**puStack_cc0)(puStack_cc0,0xffd4764c,0xffd455bc,0,&uStack_cc4,auStack_cb8);
        cVar2 = '\x02';
        if ((iVar1 < 0) || (cVar2 = cStack_c86, cStack_c86 != '\0')) {
            uStack_cbc = 0;
            fcn.0000379c(noname_0,&uStack_cbc);
            fcn.0000415c();
            fcn.000060e0();
            fcn.00006871();
            fcn.00007b8f();
            fcn.000072f9();
            if (cVar2 == '\x02') {
                fcn.00003b3c();
                fcn.00003cd1();
                fcn.00003c7d();
                fcn.0000405b();
            }
        }
    }
    return;
}


/* fcn.00003898 @ 0x3898 */

uint __fastcall fcn.00003898(ushort *param_1)

{
    ushort uVar1;
    int iVar2;
    
    iVar2 = fcn.0000353a();
    uVar1 = (**(iVar2 + 8))(0x1d);
    *param_1 = uVar1;
    return 0;
}


/* fcn.00001bba @ 0x1bba */

//WARNING: Removing unreachable block (ram,0x00001d33)
//WARNING: Removing unreachable block (ram,0x00001c36)
//WARNING: Removing unreachable block (ram,0x00001d52)

void __fastcall fcn.00001bba(int *param_1)

{
    ulong uVar1;
    int32_t iVar2;
    int iVar3;
    int iVar4;
    uint uVar5;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0;
    var_ch = 0;
    fcn.000034c4(&var_8h);
    (**(*param_1 + 0x20))(param_1,0xffd4547c,0,0,&var_ch);
    (**(*param_1 + 0x34))(param_1,4,0x2f,&var_4h);
    *(var_4h + 8) = *0xffd4762c;
    *(var_4h + 0xc) = *0xffd47630;
    *(var_4h + 0x10) = *0xffd47634;
    *(var_4h + 0x14) = *0xffd47638;
    *(var_4h + 0x18) = 1;
    uVar1 = rdmsr(0x610);
    *(var_4h + 0x1b) = uVar1 >> 0x20 & 0x7fff;
    *(var_4h + 0x1d) = uVar1 & 0x7fff;
    *(var_4h + 0x1f) = uVar1 >> 0x11 & 0x7f;
    uVar1 = rdmsr(0x614);
    *(var_4h + 0x19) = '\x01' << (uVar1 & 0xf);
    *(var_4h + 0x1a) = uVar1 >> 0x10 & 0xf;
    uVar1 = rdmsr(0x1ad);
    *(var_4h + 0x20) = uVar1;
    *(var_4h + 0x21) = uVar1 >> 8;
    *(var_4h + 0x22) = uVar1 >> 0x10;
    *(var_4h + 0x23) = uVar1 >> 0x18;
    var_1ch = 0;
    *(var_4h + 0x24) = uVar1 >> 0x20;
    *(var_4h + 0x25) = uVar1 >> 0x28;
    uVar1 = rdmsr(0x601);
    *(var_4h + 0x26) = uVar1 & 0xfff;
    fcn.00003572(&var_1ch,&var_10h,&var_14h);
    *(var_4h + 0x2e) = var_10h._3_1_ >> 1 & 1;
    iVar3 = fcn.00008d38();
    if ((*0xc00fd0dc & *0xc00f80dc & 0x10) != 0) {
        iVar3 = fcn.00008d38();
    }
    iVar2 = var_8h;
    if (iVar3 != 0) {
        uVar5 = 0x800;
        if (*(iVar3 + 0x1c) != 0) {
            uVar5 = *(iVar3 + 0x20);
        }
        *(var_8h + 0x20) = iVar3;
        *(var_8h + 0x24) = 0;
        iVar4 = fcn.00003556();
        (**(iVar4 + 0x2c))(0xffd453ac,5,iVar3,0);
        *(iVar2 + 0x1c) = uVar5;
        iVar3 = fcn.00003556();
        (**(iVar3 + 0x2c))(0xffd453ac,6,uVar5,0);
    }
    return;
}


/* fcn.000029bc @ 0x29bc */

uint __fastcall fcn.000029bc(int32_t param_1)

{
    int *piVar1;
    int iVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint uVar3;
    int32_t iVar4;
    uchar *puVar5;
    uint *puStack_2220;
    int iStack_221c;
    uchar auStack_2218 [8];
    uchar auStack_2210 [152];
    uchar auStack_2178 [1423];
    char cStack_1be9;
    uchar auStack_1968 [3172];
    char cStack_d04;
    uchar auStack_cb8 [3252];
    
    fcn.0000ae08(auStack_2178,0,0x80d);
    fcn.0000ae08(auStack_2210,0,0x97);
    puStack_2220 = auStack_2218;
    InterruptDescriptorTableRegister();
    piVar1 = *(auStack_2218._2_4_ + -4);
    fcn.00003898();
    iVar2 = (**(*piVar1 + 0x20))(piVar1,0xffd4545c,0,0,&puStack_2220);
    if (-1 < iVar2) {
        iStack_221c = 0x80d;
        iVar2 = (**puStack_2220)(puStack_2220,0xffd476b0,0xffd457dc,0,&iStack_221c,auStack_2178);
        if (-1 < iVar2) {
            iStack_221c = 0xca9;
            (**puStack_2220)(puStack_2220,0xffd4764c,0xffd455bc,0,&iStack_221c,auStack_1968);
        }
    }
    puStack_2220 = NULL;
    iStack_221c = 0xca9;
    fcn.000001b8(auStack_2210,0x97);
    iVar2 = (**(*piVar1 + 0x20))(piVar1,0xffd4545c,0,0,&puStack_2220);
    uVar3 = extraout_ECX;
    if (-1 < iVar2) {
        iVar2 = (**puStack_2220)(puStack_2220,0xffd4764c,0xffd45918,0,&iStack_221c,auStack_cb8);
        uVar3 = extraout_ECX_00;
        if (-1 < iVar2) {
            puVar5 = auStack_cb8;
            goto code_r0x00002aed;
        }
    }
    puVar5 = NULL;
code_r0x00002aed:
    fcn.000038ad(puVar5,uVar3);
    iVar4 = param_1;
    fcn.00002883(auStack_1968,param_1);
    if (cStack_1be9 != '\0') {
        fcn.00008bf9(iVar4);
    }
    fcn.00002004(param_1,iVar4);
    fcn.00002143();
    fcn.00002564(param_1);
    iVar2 = fcn.000034c4(&puStack_2220);
    if (-1 < iVar2) {
        iVar2 = fcn.000034c4(&iStack_221c);
        if ((-1 < iVar2) && (cStack_d04 == '\x01')) {
            puStack_2220[7] = puStack_2220[7] & 0xfffffffd | 4;
            *(iStack_221c + 0x1c) = *(iStack_221c + 0x1c) | 2;
        }
    }
    iVar2 = fcn.000034c4(&puStack_2220);
    if (-1 < iVar2) {
        puStack_2220[8] = 0xf8000000;
        puStack_2220[9] = 0xf9ffffff;
    }
    return 0;
}


/* fcn.000034c4 @ 0x34c4 */

uint __cdecl fcn.000034c4(int32_t arg_8h)

{
    uint16_t uVar1;
    uint16_t uVar2;
    char cVar3;
    int in_ECX;
    uint16_t uVar4;
    int iVar5;
    int iVar6;
    
    uVar1 = *(in_ECX + 0x1e);
    iVar5 = 0;
    uVar4 = 0;
    if (uVar1 != 0) {
        uVar2 = *(in_ECX + 2);
        do {
            if (uVar2 < iVar5 + 0x24U) {
                return 0x8000000e;
            }
            iVar6 = in_ECX + 0x24 + iVar5;
            cVar3 = fcn.000036bb();
            if (cVar3 != '\0') {
                *arg_8h = iVar6;
                return 0;
            }
            iVar5 = iVar5 + *(iVar6 + 2);
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0x8000000e;
}


/* fcn.0000375f @ 0x375f */

int __fastcall fcn.0000375f(int param_1)

{
    int iVar1;
    
    iVar1 = fcn.00003728();
    if (iVar1 == 0) {
        return 0;
    }
    if (param_1 == 0) {
        return iVar1;
    }
    iVar1 = fcn.000001b8(iVar1,param_1);
    return iVar1;
}


/* fcn.000001b8 @ 0x1b8 */

uint * fcn.000001b8(uint *param_1,uint32_t param_2)

{
    uint32_t uVar1;
    uint *puVar2;
    
    uVar1 = param_2 & 3;
    puVar2 = param_1;
    for (param_2 = param_2 >> 2; param_2 != 0; param_2 = param_2 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
    }
    return param_1;
}


/* fcn.00003728 @ 0x3728 */

int32_t __fastcall fcn.00003728(uint param_1)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    iVar1 = (**(**(stack0xffffffee + -4) + 0x4c))(*(stack0xffffffee + -4),param_1,&var_8h);
    if (iVar1 < 0) {
        var_8h = 0;
    }
    return var_8h;
}


/* fcn.00003777 @ 0x3777 */

void __fastcall fcn.00003777(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x18))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000036bb @ 0x36bb */

uint32_t __fastcall fcn.000036bb(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000455 @ 0x455 */

uint __thiscall fcn.00000455(uint param_1,uint *param_2,uint *param_3)

{
    ulong uVar1;
    
    uVar1 = fcn.0000040a(param_1);
    if (uVar1 >> 0x20 != 0) {
        return 0x80000003;
    }
    *param_2 = uVar1;
    *param_3 = 0x10000;
    return 0;
}


/* fcn.0000040a @ 0x40a */

void fcn.0000040a(void)

{
    int iVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = 0xc;
    do {
        iVar1 = iVar1 + -1;
    } while (4 < iVar1);
    return;
}


/* fcn.0000047f @ 0x47f */

uint32_t __cdecl fcn.0000047f(int32_t arg_8h,int32_t arg_ch)

{
    int iVar1;
    int in_ECX;
    int in_EDX;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.0000040a();
    arg_ch = in_EDX + -0xd;
    iVar1 = fcn.00001971(in_ECX + 0xd,&arg_ch);
    return -(iVar1 != 0) & 0x80000002;
}


/* fcn.00001971 @ 0x1971 */

int __fastcall fcn.00001971(uint param_1,uint *param_2,uint param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    int iVar2;
    int *in_stack_00000018;
    int in_stack_0000001c;
    int iVar3;
    
    *in_stack_00000018 = 0;
    uVar1 = *param_4;
    *param_4 = 0;
    *param_2 = 0;
    if (uVar1 < 5) {
        iVar2 = 6;
    }
    else {
        iVar2 = fcn.000018be();
        if ((iVar2 == 0) && (iVar3 = in_stack_0000001c, iVar2 = fcn.00001915(in_stack_0000001c), iVar2 == 0)) {
            *param_4 = uVar1;
            iVar2 = fcn.0000161a(param_3,param_4,iVar3,in_stack_00000018);
            *param_2 = 0;
            if ((iVar2 == 0) && (*in_stack_00000018 == 3)) {
                iVar2 = 6;
            }
            (**(in_stack_0000001c + 4))(in_stack_0000001c,0);
        }
    }
    return iVar2;
}


/* fcn.000004e4 @ 0x4e4 */

uint __fastcall fcn.000004e4(uint8_t *param_1,uint32_t param_2,uint8_t *param_3)

{
    uchar *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    uint16_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int iVar8;
    uint32_t uVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint16_t *puVar15;
    int iVar16;
    int iVar17;
    uchar *puVar18;
    int iVar19;
    uint32_t uVar20;
    int iVar21;
    uint32_t uVar22;
    uint32_t uVar23;
    int iStack_68;
    uint8_t *puStack_54;
    uint32_t uStack_4c;
    uint32_t uStack_48;
    uint32_t uStack_44;
    int iStack_40;
    uint32_t uStack_3c;
    uint32_t uStack_30;
    uint32_t uStack_2c;
    uint32_t uStack_24;
    
    iVar6 = *(param_1 + 0xc);
    uVar2 = param_1[2];
    uStack_4c = *(param_1 + 0x40);
    uStack_3c = *(param_1 + 0x30);
    uVar3 = *param_1;
    uStack_30 = *(param_1 + 0x34);
    uStack_2c = *(param_1 + 0x38);
    uStack_24 = *(param_1 + 0x3c);
    uVar10 = *(param_1 + 0x20);
    uVar22 = *(param_1 + 0x24);
    uVar4 = param_1[1];
    uVar7 = *(param_1 + 0x2c);
    iVar8 = *(param_1 + 0x10);
    uVar9 = *(param_1 + 0x14);
    uStack_48 = *(param_1 + 0x18);
    puStack_54 = *(param_1 + 0x1c);
    uStack_44 = *(param_1 + 0x28);
    iStack_40 = 0;
    do {
        uVar14 = uStack_24;
        iVar19 = (uStack_44 & (1 << (uVar2 & 0x1f)) - 1U) * 0x10;
        iVar17 = uStack_4c + iVar19;
        uVar5 = *(iVar6 + -0x200 + iVar17 * 2);
        uVar23 = uVar10;
        if (uVar10 < 0x1000000) {
            uVar23 = uVar10 << 8;
            uVar22 = uVar22 << 8 | *puStack_54;
            puStack_54 = puStack_54 + 1;
        }
        uVar10 = (uVar23 >> 0xb) * uVar5;
        if (uVar22 < uVar10) {
            *(iVar6 + -0x200 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
            iVar17 = iVar6 + 0x280;
            if ((uStack_44 != 0) || (uVar7 != 0)) {
                uVar14 = uVar9;
                if (uStack_48 != 0) {
                    uVar14 = uStack_48;
                }
                iVar17 = iVar17 + ((*((uVar14 - 1) + iVar8) + uStack_44 * 0x100 &
                                   (0x100 << (uVar4 & 0x1f)) - (0x100U >> (uVar3 & 0x1f))) << (uVar3 & 0x1f)) * 6;
            }
            uStack_44 = uStack_44 + 1;
            if (uStack_4c < 7) {
                if (uStack_4c < 4) {
                    uVar23 = uStack_4c;
                }
                else {
                    uVar23 = 3;
                }
                uVar14 = 1;
                do {
                    uVar14 = uVar14 * 2;
                    uVar5 = *(uVar14 + iVar17);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar11 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar11) {
                        *(uVar14 + iVar17) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar11;
                    }
                    else {
                        uVar10 = uVar10 - uVar11;
                        uVar22 = uVar22 - uVar11;
                        *(uVar14 + iVar17) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar14 + 1;
                    }
                } while (uVar14 < 0x100);
            }
            else {
                uVar11 = *(((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48 + iVar8);
                uVar23 = (-(uStack_4c < 10) & 0xfffffffd) + 6;
                uVar14 = 1;
                uVar13 = 0x100;
                do {
                    uVar11 = uVar11 * 2;
                    uVar20 = uVar13 & uVar11;
                    iVar19 = uVar13 + uVar20 + uVar14;
                    uVar5 = *(iVar17 + iVar19 * 2);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar12 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar12) {
                        uVar14 = uVar14 * 2;
                        uVar20 = uVar20 ^ uVar13;
                        *(iVar17 + iVar19 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar12;
                    }
                    else {
                        uVar10 = uVar10 - uVar12;
                        uVar14 = uVar14 * 2 + 1;
                        uVar22 = uVar22 - uVar12;
                        *(iVar17 + iVar19 * 2) = uVar5 - (uVar5 >> 5);
                    }
                    uVar13 = uVar20;
                } while (uVar14 < 0x100);
            }
            uStack_4c = uStack_4c - uVar23;
            *(iVar8 + uStack_48) = uVar14;
            uStack_48 = uStack_48 + 1;
        }
        else {
            uVar23 = uVar23 - uVar10;
            uVar22 = uVar22 - uVar10;
            *(iVar6 + -0x200 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
            uVar5 = *(iVar6 + 0x20 + uStack_4c * 2);
            if (uVar23 < 0x1000000) {
                uVar23 = uVar23 * 0x100;
                uVar22 = uVar22 * 0x100 | *puStack_54;
                puStack_54 = puStack_54 + 1;
            }
            uVar11 = (uVar23 >> 0xb) * uVar5;
            if (uVar22 < uVar11) {
                *(iVar6 + 0x20 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                uStack_4c = uStack_4c + 0xc;
                puVar15 = iVar6 + -0x600;
            }
            else {
                uVar23 = uVar23 - uVar11;
                uVar22 = uVar22 - uVar11;
                *(iVar6 + 0x20 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                uVar5 = *(iVar6 + 0x38 + uStack_4c * 2);
                if (uVar23 < 0x1000000) {
                    uVar23 = uVar23 * 0x100;
                    uVar22 = uVar22 * 0x100 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar11 = (uVar23 >> 0xb) * uVar5;
                if (uVar22 < uVar11) {
                    *(iVar6 + 0x38 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                    iVar17 = uStack_4c + iVar19;
                    uVar5 = *(iVar6 + -0xc00 + iVar17 * 2);
                    if (uVar11 < 0x1000000) {
                        uVar11 = uVar11 * 0x100;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar10 = (uVar11 >> 0xb) * uVar5;
                    if (uVar22 < uVar10) {
                        *(iVar6 + -0xc00 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        *(iVar8 + uStack_48) = *(((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48 + iVar8);
                        uStack_48 = uStack_48 + 1;
                        uStack_44 = uStack_44 + 1;
                        uStack_4c = (-(uStack_4c < 7) & 0xfffffffe) + 0xb;
                        goto code_r0x00000edf;
                    }
                    uVar11 = uVar11 - uVar10;
                    uVar22 = uVar22 - uVar10;
                    *(iVar6 + -0xc00 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                }
                else {
                    uVar23 = uVar23 - uVar11;
                    uVar22 = uVar22 - uVar11;
                    *(iVar6 + 0x38 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                    uVar5 = *(iVar6 + 0x50 + uStack_4c * 2);
                    if (uVar23 < 0x1000000) {
                        uVar23 = uVar23 * 0x100;
                        uVar22 = uVar22 * 0x100 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar11 = (uVar23 >> 0xb) * uVar5;
                    if (uVar22 < uVar11) {
                        *(iVar6 + 0x50 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar14 = uStack_30;
                    }
                    else {
                        uVar23 = uVar23 - uVar11;
                        uVar22 = uVar22 - uVar11;
                        *(iVar6 + 0x50 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                        uVar5 = *(iVar6 + 0x68 + uStack_4c * 2);
                        if (uVar23 < 0x1000000) {
                            uVar23 = uVar23 * 0x100;
                            uVar22 = uVar22 * 0x100 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar10 = (uVar23 >> 0xb) * uVar5;
                        if (uVar22 < uVar10) {
                            *(iVar6 + 0x68 + uStack_4c * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = uStack_2c;
                            uVar11 = uVar10;
                        }
                        else {
                            uVar11 = uVar23 - uVar10;
                            uVar22 = uVar22 - uVar10;
                            *(iVar6 + 0x68 + uStack_4c * 2) = uVar5 - (uVar5 >> 5);
                            uStack_24 = uStack_2c;
                        }
                        uStack_2c = uStack_30;
                    }
                    uStack_30 = uStack_3c;
                    uStack_3c = uVar14;
                }
                puVar15 = iVar6 + -0xa00;
                uStack_4c = (-(uStack_4c < 7) & 0xfffffffd) + 0xb;
            }
            uVar5 = *puVar15;
            if (uVar11 < 0x1000000) {
                uVar11 = uVar11 << 8;
                uVar22 = uVar22 << 8 | *puStack_54;
                puStack_54 = puStack_54 + 1;
            }
            uVar10 = (uVar11 >> 0xb) * uVar5;
            if (uVar22 < uVar10) {
                iStack_68 = 0;
                *puVar15 = (0x800 - uVar5 >> 5) + uVar5;
code_r0x00000a50:
                puVar15 = puVar15 + iVar19;
                uVar14 = 8;
            }
            else {
                uVar11 = uVar11 - uVar10;
                uVar22 = uVar22 - uVar10;
                *puVar15 = uVar5 - (uVar5 >> 5);
                uVar5 = puVar15[8];
                if (uVar11 < 0x1000000) {
                    uVar11 = uVar11 * 0x100;
                    uVar22 = uVar22 * 0x100 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar14 = (uVar11 >> 0xb) * uVar5;
                if (uVar22 < uVar14) {
                    iVar19 = iVar19 + 8;
                    iStack_68 = 8;
                    puVar15[8] = (0x800 - uVar5 >> 5) + uVar5;
                    uVar10 = uVar14;
                    goto code_r0x00000a50;
                }
                uVar10 = uVar11 - uVar14;
                uVar22 = uVar22 - uVar14;
                uVar14 = 0x100;
                puVar15[8] = uVar5 - (uVar5 >> 5);
                puVar15 = puVar15 + 0x100;
                iStack_68 = 0x10;
            }
            uVar23 = 1;
            do {
                uVar11 = uVar23 * 2;
                uVar5 = puVar15[uVar23];
                if (uVar10 < 0x1000000) {
                    uVar10 = uVar10 << 8;
                    uVar22 = uVar22 << 8 | *puStack_54;
                    puStack_54 = puStack_54 + 1;
                }
                uVar13 = (uVar10 >> 0xb) * uVar5;
                if (uVar22 < uVar13) {
                    puVar15[uVar23] = (0x800 - uVar5 >> 5) + uVar5;
                    uVar10 = uVar13;
                }
                else {
                    uVar10 = uVar10 - uVar13;
                    uVar22 = uVar22 - uVar13;
                    puVar15[uVar23] = uVar5 - (uVar5 >> 5);
                    uVar11 = uVar11 + 1;
                }
                uVar23 = uVar11;
            } while (uVar11 < uVar14);
            uVar11 = uVar11 + (iStack_68 - uVar14);
            if (0xb < uStack_4c) {
                if (uVar11 < 4) {
                    uVar14 = uVar11;
                }
                else {
                    uVar14 = 3;
                }
                iVar17 = (uVar14 + 1) * 0x80 + iVar6;
                uVar14 = 1;
                do {
                    uVar14 = uVar14 * 2;
                    uVar5 = *(uVar14 + iVar17);
                    if (uVar10 < 0x1000000) {
                        uVar10 = uVar10 << 8;
                        uVar22 = uVar22 << 8 | *puStack_54;
                        puStack_54 = puStack_54 + 1;
                    }
                    uVar23 = (uVar10 >> 0xb) * uVar5;
                    if (uVar22 < uVar23) {
                        *(uVar14 + iVar17) = (0x800 - uVar5 >> 5) + uVar5;
                        uVar10 = uVar23;
                    }
                    else {
                        uVar10 = uVar10 - uVar23;
                        uVar22 = uVar22 - uVar23;
                        *(uVar14 + iVar17) = uVar5 - (uVar5 >> 5);
                        uVar14 = uVar14 + 1;
                    }
                } while (uVar14 < 0x40);
                uVar14 = uVar14 - 0x40;
                if (3 < uVar14) {
                    iVar17 = (uVar14 >> 1) - 1;
                    uVar23 = uVar14 & 1 | 2;
                    if (uVar14 < 0xe) {
                        iVar16 = (uVar23 << (iVar17 & 0x1f)) + 1;
                        iVar19 = 1;
                        do {
                            iVar21 = iVar19;
                            uVar5 = *(iVar6 + -0xd00 + iVar16 * 2);
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            uVar14 = (uVar10 >> 0xb) * uVar5;
                            if (uVar22 < uVar14) {
                                *(iVar6 + -0xd00 + iVar16 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                                iVar19 = iVar21;
                                uVar10 = uVar14;
                            }
                            else {
                                uVar10 = uVar10 - uVar14;
                                uVar22 = uVar22 - uVar14;
                                iVar19 = iVar21 * 2;
                                *(iVar6 + -0xd00 + iVar16 * 2) = uVar5 - (uVar5 >> 5);
                            }
                            iVar16 = iVar16 + iVar19;
                            iVar17 = iVar17 + -1;
                            iVar19 = iVar21 * 2;
                        } while (iVar17 != 0);
                        uVar14 = iVar16 + iVar21 * -2;
                    }
                    else {
                        iVar17 = (uVar14 >> 1) - 5;
                        do {
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            uVar10 = uVar10 >> 1;
                            uVar14 = uVar22 - uVar10 >> 0x1f;
                            uVar23 = uVar23 * 2 + 1 + uVar14;
                            uVar22 = (uVar22 - uVar10) + (uVar14 & uVar10);
                            iVar17 = iVar17 + -1;
                        } while (iVar17 != 0);
                        uVar5 = *(iVar6 + 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 * 0x100 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar14 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar14) {
                            *(iVar6 + 2) = (0x800 - uVar5 >> 5) + uVar5;
                            iStack_68 = 2;
                            uVar10 = uVar14;
                        }
                        else {
                            uVar10 = uVar10 - uVar14;
                            uVar22 = uVar22 - uVar14;
                            *(iVar6 + 2) = uVar5 - (uVar5 >> 5);
                            iStack_68 = 3;
                        }
                        iVar17 = iStack_68;
                        uVar5 = *(iVar6 + iStack_68 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar14 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar14) {
                            iStack_68 = 2;
                            *(iVar6 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar10 = uVar14;
                        }
                        else {
                            uVar10 = uVar10 - uVar14;
                            uVar22 = uVar22 - uVar14;
                            iStack_68 = 4;
                            *(iVar6 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                        }
                        iVar17 = iVar17 + iStack_68;
                        uVar5 = *(iVar6 + iVar17 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar13 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar13) {
                            *(iVar6 + iVar17 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = iVar17 + 4;
                            uVar10 = uVar13;
                        }
                        else {
                            uVar10 = uVar10 - uVar13;
                            uVar22 = uVar22 - uVar13;
                            *(iVar6 + iVar17 * 2) = uVar5 - (uVar5 >> 5);
                            uVar14 = iVar17 + 8;
                        }
                        uVar5 = *(iVar6 + uVar14 * 2);
                        if (uVar10 < 0x1000000) {
                            uVar10 = uVar10 << 8;
                            uVar22 = uVar22 << 8 | *puStack_54;
                            puStack_54 = puStack_54 + 1;
                        }
                        uVar13 = (uVar10 >> 0xb) * uVar5;
                        if (uVar22 < uVar13) {
                            *(iVar6 + uVar14 * 2) = (0x800 - uVar5 >> 5) + uVar5;
                            uVar14 = uVar14 - 8;
                            uVar10 = uVar13;
                        }
                        else {
                            uVar10 = uVar10 - uVar13;
                            uVar22 = uVar22 - uVar13;
                            *(iVar6 + uVar14 * 2) = uVar5 - (uVar5 >> 5);
                        }
                        uVar14 = uVar23 * 0x10 | uVar14;
                        if (uVar14 == 0xffffffff) {
                            iStack_40 = 0x112;
                            uStack_4c = uStack_4c - 0xc;
code_r0x00000ef7:
                            if (uVar10 < 0x1000000) {
                                uVar10 = uVar10 << 8;
                                uVar22 = uVar22 << 8 | *puStack_54;
                                puStack_54 = puStack_54 + 1;
                            }
                            *(param_1 + 0x18) = uStack_48;
                            *(param_1 + 0x1c) = puStack_54;
                            *(param_1 + 0x28) = uStack_44;
                            *(param_1 + 0x20) = uVar10;
                            *(param_1 + 0x24) = uVar22;
                            *(param_1 + 0x44) = iStack_40;
                            *(param_1 + 0x30) = uStack_3c;
                            *(param_1 + 0x34) = uStack_30;
                            *(param_1 + 0x3c) = uStack_24;
                            *(param_1 + 0x38) = uStack_2c;
                            *(param_1 + 0x40) = uStack_4c;
                            return 0;
                        }
                    }
                }
                uStack_24 = uStack_2c;
                uStack_4c = (-(uStack_4c < 0x13) & 0xfffffffd) + 10;
                uStack_2c = uStack_30;
                uStack_30 = uStack_3c;
                uVar23 = uVar7;
                if (uVar7 == 0) {
                    uVar23 = uStack_44;
                }
                uStack_3c = uVar14 + 1;
                if (uVar23 <= uVar14) {
                    *(param_1 + 0x18) = uStack_48;
                    return 1;
                }
            }
            uVar11 = uVar11 + 2;
            uVar14 = param_2 - uStack_48;
            if (uVar14 == 0) {
                *(param_1 + 0x18) = uStack_48;
                return 1;
            }
            if (uVar11 <= uVar14) {
                uVar14 = uVar11;
            }
            uStack_44 = uStack_44 + uVar14;
            iStack_40 = uVar11 - uVar14;
            uVar23 = ((-(uStack_48 < uStack_3c) & uVar9) - uStack_3c) + uStack_48;
            if (uVar9 - uVar23 < uVar14) {
                do {
                    *(iVar8 + uStack_48) = *(uVar23 + iVar8);
                    uStack_48 = uStack_48 + 1;
                    uVar23 = -(uVar23 + 1 != uVar9) & uVar23 + 1;
                    uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
            }
            else {
                puVar18 = iVar8 + uStack_48;
                iVar17 = uVar23 - uStack_48;
                uStack_48 = uStack_48 + uVar14;
                puVar1 = puVar18 + uVar14;
                do {
                    *puVar18 = puVar18[iVar17];
                    puVar18 = puVar18 + 1;
                } while (puVar18 != puVar1);
            }
        }
code_r0x00000edf:
        if ((param_2 <= uStack_48) || (param_3 <= puStack_54)) goto code_r0x00000ef7;
    } while( true );
}


/* fcn.00000f7f @ 0xf7f */

void __fastcall fcn.00000f7f(int param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    uint32_t uVar6;
    
    uVar1 = *(param_1 + 0x44);
    if ((uVar1 != 0) && (uVar1 < 0x112)) {
        uVar5 = *(param_1 + 0x18);
        uVar2 = *(param_1 + 0x14);
        iVar3 = *(param_1 + 0x10);
        uVar4 = *(param_1 + 0x30);
        uVar6 = uVar1;
        if (param_2 - uVar5 < uVar1) {
            uVar6 = param_2 - uVar5;
        }
        if ((*(param_1 + 0x2c) == 0) && (*(param_1 + 4) - *(param_1 + 0x28) <= uVar6)) {
            *(param_1 + 0x2c) = *(param_1 + 4);
        }
        *(param_1 + 0x28) = *(param_1 + 0x28) + uVar6;
        *(param_1 + 0x44) = uVar1 - uVar6;
        for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(uVar5 + iVar3) = *(((-(uVar5 < uVar4) & uVar2) - uVar4) + uVar5 + iVar3);
            uVar5 = uVar5 + 1;
        }
        *(param_1 + 0x18) = uVar5;
    }
    return;
}


/* fcn.0000107a @ 0x107a */

uint __fastcall fcn.0000107a(uint8_t *param_1,uint8_t *param_2,int param_3)

{
    uint8_t *puVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint16_t *puVar9;
    uint32_t uVar10;
    uint32_t uVar11;
    int iVar12;
    uint32_t uVar13;
    uint uStack_18;
    int iStack_14;
    int iStack_10;
    uint32_t uStack_c;
    
    puVar1 = param_2 + param_3;
    iVar6 = *(param_1 + 0xc);
    uVar8 = *(param_1 + 0x40);
    uVar11 = *(param_1 + 0x20);
    uVar13 = *(param_1 + 0x24);
    iStack_10 = 1;
    uVar2 = (1 << (param_1[2] & 0x1f)) - 1U & *(param_1 + 0x28);
    iVar3 = uVar2 * 0x10;
    iVar4 = iVar3 + uVar8;
    if (uVar11 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar11 = uVar11 << 8;
        uVar13 = uVar13 << 8 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar5 = (uVar11 >> 0xb) * *(iVar6 + -0x200 + iVar4 * 2);
    if (uVar13 < uVar5) {
        iVar6 = *(param_1 + 0xc) + 0x280;
        if ((*(param_1 + 0x2c) != 0) || (*(param_1 + 0x28) != 0)) {
            iVar3 = *(param_1 + 0x18);
            if (iVar3 == 0) {
                iVar3 = *(param_1 + 0x14);
            }
            iVar6 = iVar6 + ((*(*(param_1 + 0x10) + -1 + iVar3) >> (8 - *param_1 & 0x1f)) +
                            (((1 << (param_1[1] & 0x1f)) - 1U & *(param_1 + 0x28)) << (*param_1 & 0x1f))) * 0x600;
        }
        if (uVar8 < 7) {
            uVar8 = 1;
            do {
                uVar8 = uVar8 * 2;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar11 = (uVar5 >> 0xb) * *(uVar8 + iVar6);
                if (uVar13 < uVar11) {
                    uVar5 = uVar11;
                }
                else {
                    uVar5 = uVar5 - uVar11;
                    uVar13 = uVar13 - uVar11;
                    uVar8 = uVar8 + 1;
                }
            } while (uVar8 < 0x100);
        }
        else {
            if (*(param_1 + 0x18) < *(param_1 + 0x30)) {
                iVar3 = *(param_1 + 0x14);
            }
            else {
                iVar3 = 0;
            }
            uVar8 = 1;
            uVar11 = *((*(param_1 + 0x10) - *(param_1 + 0x30)) + *(param_1 + 0x18) + iVar3);
            uVar2 = 0x100;
            while( true ) {
                uVar11 = uVar11 * 2;
                uVar10 = uVar2 & uVar11;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar7 = (uVar5 >> 0xb) * *(iVar6 + (uVar2 + uVar8 + uVar10) * 2);
                if (uVar13 < uVar7) {
                    uVar8 = uVar8 * 2;
                    uVar10 = uVar10 ^ uVar2;
                    uVar5 = uVar7;
                }
                else {
                    uVar5 = uVar5 - uVar7;
                    uVar8 = uVar8 * 2 + 1;
                    uVar13 = uVar13 - uVar7;
                }
                if (0xff < uVar8) break;
                uVar2 = uVar10;
            }
        }
        uStack_18 = 1;
        goto code_r0x00001602;
    }
    uVar11 = uVar11 - uVar5;
    uVar13 = uVar13 - uVar5;
    if (uVar11 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar11 = uVar11 * 0x100;
        uVar13 = uVar13 * 0x100 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar10 = (uVar11 >> 0xb) * *(iVar6 + 0x20 + uVar8 * 2);
    iStack_14 = 0;
    if (uVar13 < uVar10) {
        uStack_c = 0;
        puVar9 = iVar6 + -0x600;
        uStack_18 = 2;
    }
    else {
        uVar11 = uVar11 - uVar10;
        uVar13 = uVar13 - uVar10;
        uStack_18 = 3;
        if (uVar11 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar11 = uVar11 * 0x100;
            uVar13 = uVar13 * 0x100 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar5 = (uVar11 >> 0xb) * *(iVar6 + 0x38 + uVar8 * 2);
        if (uVar13 < uVar5) {
            if (uVar5 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar5 = uVar5 * 0x100;
                uVar13 = uVar13 << 8 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar10 = (uVar5 >> 0xb) * *(iVar6 + -0xc00 + iVar4 * 2);
            if (uVar13 < uVar10) {
                if ((uVar10 < 0x1000000) && (puVar1 <= param_2)) {
                    return 0;
                }
                return 3;
            }
code_r0x000013c2:
            uVar13 = uVar13 - uVar10;
            uVar10 = uVar5 - uVar10;
        }
        else {
            uVar11 = uVar11 - uVar5;
            uVar13 = uVar13 - uVar5;
            if (uVar11 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar11 = uVar11 * 0x100;
                uVar13 = uVar13 * 0x100 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar10 = (uVar11 >> 0xb) * *(iVar6 + 0x50 + uVar8 * 2);
            if (uVar10 <= uVar13) {
                uVar5 = uVar11 - uVar10;
                uVar13 = uVar13 - uVar10;
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 * 0x100;
                    uVar13 = uVar13 * 0x100 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar10 = (uVar5 >> 0xb) * *(iVar6 + 0x68 + uVar8 * 2);
                if (uVar10 <= uVar13) goto code_r0x000013c2;
            }
        }
        uStack_c = 0xc;
        puVar9 = iVar6 + -0xa00;
    }
    if (uVar10 < 0x1000000) {
        if (puVar1 <= param_2) {
            return 0;
        }
        uVar10 = uVar10 << 8;
        uVar13 = uVar13 << 8 | *param_2;
        param_2 = param_2 + 1;
    }
    uVar8 = (uVar10 >> 0xb) * *puVar9;
    if (uVar13 < uVar8) {
        uVar11 = 8;
        puVar9 = puVar9 + uVar2 * 0x10;
code_r0x00001478:
        uVar5 = uVar8;
    }
    else {
        uVar10 = uVar10 - uVar8;
        uVar13 = uVar13 - uVar8;
        if (uVar10 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar10 = uVar10 * 0x100;
            uVar13 = uVar13 * 0x100 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar5 = (uVar10 >> 0xb) * puVar9[8];
        if (uVar5 <= uVar13) {
            uVar8 = uVar10 - uVar5;
            iStack_14 = 0x10;
            uVar13 = uVar13 - uVar5;
            uVar11 = 0x100;
            puVar9 = puVar9 + 0x100;
            goto code_r0x00001478;
        }
        puVar9 = puVar9 + iVar3 + 8;
        uVar11 = 8;
        iStack_14 = 8;
    }
    uVar8 = 1;
    do {
        uVar2 = uVar8 * 2;
        if (uVar5 < 0x1000000) {
            if (puVar1 <= param_2) {
                return 0;
            }
            uVar5 = uVar5 << 8;
            uVar13 = uVar13 << 8 | *param_2;
            param_2 = param_2 + 1;
        }
        uVar8 = (uVar5 >> 0xb) * puVar9[uVar8];
        if (uVar13 < uVar8) {
            uVar5 = uVar8;
        }
        else {
            uVar5 = uVar5 - uVar8;
            uVar13 = uVar13 - uVar8;
            uVar2 = uVar2 + 1;
        }
        uVar8 = uVar2;
    } while (uVar2 < uVar11);
    uVar2 = uVar2 + (iStack_14 - uVar11);
    if (uStack_c < 4) {
        if (2 < uVar2) {
            uVar2 = 3;
        }
        uVar8 = 1;
        do {
            uVar8 = uVar8 * 2;
            if (uVar5 < 0x1000000) {
                if (puVar1 <= param_2) {
                    return 0;
                }
                uVar5 = uVar5 << 8;
                uVar13 = uVar13 << 8 | *param_2;
                param_2 = param_2 + 1;
            }
            uVar11 = (uVar5 >> 0xb) * *(uVar8 + 0x80 + iVar6 + uVar2 * 0x80);
            if (uVar13 < uVar11) {
                uVar5 = uVar11;
            }
            else {
                uVar5 = uVar5 - uVar11;
                uVar13 = uVar13 - uVar11;
                uVar8 = uVar8 + 1;
            }
        } while (uVar8 < 0x40);
        uVar8 = uVar8 - 0x40;
        if (3 < uVar8) {
            iVar3 = (uVar8 >> 1) - 1;
            if (uVar8 < 0xe) {
                iVar6 = iVar6 + ((uVar8 & 1 | 2) << (iVar3 & 0x1f)) * 2 + -0xd00;
            }
            else {
                iVar3 = (uVar8 >> 1) - 5;
                do {
                    if (uVar5 < 0x1000000) {
                        if (puVar1 <= param_2) {
                            return 0;
                        }
                        uVar5 = uVar5 << 8;
                        uVar13 = uVar13 << 8 | *param_2;
                        param_2 = param_2 + 1;
                    }
                    uVar5 = uVar5 >> 1;
                    uVar13 = uVar13 - (0xffffffffU - (uVar13 - uVar5 >> 0x1f) & uVar5);
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
                iVar3 = 4;
            }
            iVar4 = 1;
            while( true ) {
                if (uVar5 < 0x1000000) {
                    if (puVar1 <= param_2) {
                        return 0;
                    }
                    uVar5 = uVar5 << 8;
                    uVar13 = uVar13 << 8 | *param_2;
                    param_2 = param_2 + 1;
                }
                uVar8 = (uVar5 >> 0xb) * *(iVar6 + iStack_10 * 2);
                if (uVar13 < uVar8) {
                    uVar5 = uVar8;
                    iVar12 = iVar4;
                }
                else {
                    uVar5 = uVar5 - uVar8;
                    uVar13 = uVar13 - uVar8;
                    iVar12 = iVar4 * 2;
                }
                iVar4 = iVar4 * 2;
                iVar3 = iVar3 + -1;
                if (iVar3 == 0) break;
                iStack_10 = iStack_10 + iVar12;
            }
        }
    }
code_r0x00001602:
    if (0xffffff < uVar5) {
        return uStack_18;
    }
    if (param_2 < puVar1) {
        return uStack_18;
    }
    return 0;
}


/* fcn.00000ffd @ 0xffd */

int __fastcall fcn.00000ffd(int param_1,uint32_t param_2,uint32_t param_3)

{
    int iVar1;
    
    do {
        if (((*(param_1 + 0x2c) == 0) && (*(param_1 + 0x28) == 0)) && (0xbffffbff < *(param_1 + 0x24))) {
            return 1;
        }
        iVar1 = fcn.000004e4();
        if (iVar1 != 0) {
            return iVar1;
        }
        if ((*(param_1 + 0x2c) == 0) && (*(param_1 + 4) <= *(param_1 + 0x28))) {
            *(param_1 + 0x2c) = *(param_1 + 4);
        }
        fcn.00000f7f();
    } while (((*(param_1 + 0x18) < param_2) && (*(param_1 + 0x1c) < param_3)) && (*(param_1 + 0x44) < 0x112));
    return 0;
}


/* fcn.000036df @ 0x36df */

int __fastcall fcn.000036df(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.00000178(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.00000178 @ 0x178 */

uint * fcn.00000178(uint *param_1,uint *param_2,uint32_t param_3)

{
    uint32_t uVar1;
    uint *puVar2;
    uint *puVar3;
    uint8_t uVar4;
    
    uVar4 = 0;
    puVar2 = param_2 + (param_3 - 1);
    if ((param_2 < param_1) && (param_1 <= puVar2)) {
        puVar3 = param_1 + (param_3 - 1);
        uVar4 = 1;
        uVar1 = param_3;
    }
    else {
        uVar1 = param_3 & 3;
        puVar2 = param_2;
        puVar3 = param_1;
        for (param_3 = param_3 >> 2; param_3 != 0; param_3 = param_3 - 1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
        }
    }
    for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + uVar4 * -2 + 1;
        puVar3 = puVar3 + uVar4 * -2 + 1;
    }
    return param_1;
}


/* fcn.000018be @ 0x18be */

uint __fastcall fcn.000018be(uint8_t *param_1,uint8_t *param_2)

{
    uint8_t uVar1;
    uint32_t uVar2;
    
    uVar2 = *(param_2 + 1);
    if (uVar2 < 0x1000) {
        uVar2 = 0x1000;
    }
    uVar1 = *param_2;
    *(param_1 + 4) = uVar2;
    if (0xe0 < uVar1) {
        return 4;
    }
    *param_1 = uVar1 % 9;
    param_1[2] = (uVar1 / 9) / 5;
    param_1[1] = (uVar1 / 9) % 5;
    return 0;
}


/* fcn.00001915 @ 0x1915 */

uint __fastcall fcn.00001915(int param_1,char *param_2,uint *param_3)

{
    int iVar1;
    int iVar2;
    
    iVar2 = (0x300 << (param_2[1] + *param_2 & 0x1fU)) + 0x7c0;
    if ((*(param_1 + 8) == 0) || (iVar2 != *(param_1 + 0x48))) {
        (*param_3[1])(param_3,*(param_1 + 8));
        *(param_1 + 8) = 0;
        iVar1 = (**param_3)(param_3,iVar2 * 2);
        *(param_1 + 8) = iVar1;
        if (iVar1 == 0) {
            return 2;
        }
        *(param_1 + 0x48) = iVar2;
        *(param_1 + 0xc) = iVar1 + 0xd00;
    }
    return 0;
}


/* fcn.0000161a @ 0x161a */

uint __fastcall
fcn.0000161a(char *param_1,uint32_t param_2,int *param_3,uint32_t *param_4,uint param_5,uint *param_6)

{
    bool bVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int *piVar6;
    uint *puVar7;
    uint32_t uStack_8;
    uint32_t uStack_4;
    
    uVar5 = *param_4;
    *param_4 = 0;
    *param_6 = 0;
    piVar6 = param_3;
    if (0x112 < *(param_1 + 0x44)) {
        while ((uVar5 != 0 && (*(param_1 + 0x4c) < 5))) {
            param_1[*(param_1 + 0x4c) + 0x50] = *piVar6;
            *(param_1 + 0x4c) = *(param_1 + 0x4c) + 1;
            *param_4 = *param_4 + 1;
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 1;
        }
        if ((*(param_1 + 0x4c) != 0) && (param_1[0x50] != '\0')) {
            return 1;
        }
        if (*(param_1 + 0x4c) < 5) {
            *param_6 = 3;
            return 0;
        }
        param_1[0x20] = -1;
        param_1[0x21] = -1;
        param_1[0x22] = -1;
        param_1[0x23] = -1;
        param_1[0x4c] = '\0';
        param_1[0x4d] = '\0';
        param_1[0x4e] = '\0';
        param_1[0x4f] = '\0';
        *(param_1 + 0x24) = CONCAT31(CONCAT21(CONCAT11(param_1[0x51],param_1[0x52]),param_1[0x53]),param_1[0x54]);
        if (0x113 < *(param_1 + 0x44)) {
            uVar4 = (0x300 << (param_1[1] + *param_1 & 0x1fU)) + 0x7c0;
            puVar7 = *(param_1 + 8);
            for (uVar3 = uVar4 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
                *puVar7 = 0x4000400;
                puVar7 = puVar7 + 1;
            }
            for (uVar4 = (uVar4 & 1) != 0; uVar4 != 0; uVar4 = uVar4 - 1) {
                *puVar7 = 0x400;
                puVar7 = puVar7 + 2;
            }
            param_1[0x3c] = '\x01';
            param_1[0x3d] = '\0';
            param_1[0x3e] = '\0';
            param_1[0x3f] = '\0';
            param_1[0x38] = '\x01';
            param_1[0x39] = '\0';
            param_1[0x3a] = '\0';
            param_1[0x3b] = '\0';
            param_1[0x34] = '\x01';
            param_1[0x35] = '\0';
            param_1[0x36] = '\0';
            param_1[0x37] = '\0';
            param_1[0x30] = '\x01';
            param_1[0x31] = '\0';
            param_1[0x32] = '\0';
            param_1[0x33] = '\0';
            param_1[0x40] = '\0';
            param_1[0x41] = '\0';
            param_1[0x42] = '\0';
            param_1[0x43] = '\0';
        }
        param_1[0x44] = '\0';
        param_1[0x45] = '\0';
        param_1[0x46] = '\0';
        param_1[0x47] = '\0';
    }
    fcn.00000f7f();
    do {
        while( true ) {
            if (*(param_1 + 0x44) == 0x112) {
                if (*(param_1 + 0x24) != 0) {
                    return 1;
                }
                *param_6 = 1;
                return 0;
            }
            bVar1 = false;
            uStack_8 = 0;
            if (param_2 <= *(param_1 + 0x18)) {
                if (*(param_1 + 0x44) != 0) {
                    *param_6 = 2;
                    return 1;
                }
                if (*(param_1 + 0x24) == 0) {
                    *param_6 = 4;
                    return 0;
                }
                bVar1 = true;
                uStack_8 = 1;
            }
            uVar4 = *(param_1 + 0x4c);
            if (uVar4 == 0) break;
            uVar3 = 0;
            uStack_4 = 0;
            if (uVar4 < 0x14) {
                do {
                    if (uVar5 <= uVar3) break;
                    param_1[uVar4 + 0x50] = *(uVar3 + piVar6);
                    uVar4 = uVar4 + 1;
                    uVar3 = uVar3 + 1;
                } while (uVar4 < 0x14);
                uStack_4 = uVar3;
            }
            *(param_1 + 0x4c) = uVar4;
            if ((uVar4 < 0x14) || (bVar1)) {
                iVar2 = fcn.0000107a(uVar4);
                if (iVar2 == 0) {
                    *param_4 = *param_4 + uStack_4;
                    goto code_r0x000018a1;
                }
                if ((uStack_8 != 0) && (iVar2 != 2)) goto code_r0x0000187d;
            }
            *(param_1 + 0x1c) = param_1 + 0x50;
            iVar2 = fcn.00000ffd();
            if (iVar2 != 0) {
                return 1;
            }
            uVar3 = (*(param_1 + 0x1c) - param_1) - 0x50;
            if ((uVar4 < uVar3) || (uVar4 = uVar4 - uVar3, uStack_8 < uVar4)) {
                return 0xb;
            }
            iVar2 = uStack_8 - uVar4;
            piVar6 = piVar6 + iVar2;
            uVar5 = uVar5 - iVar2;
            *param_3 = *param_3 + iVar2;
            param_1[0x4c] = '\0';
            param_1[0x4d] = '\0';
            param_1[0x4e] = '\0';
            param_1[0x4f] = '\0';
        }
        if ((uVar5 < 0x14) || (bVar1)) {
            iVar2 = fcn.0000107a(uVar5);
            if (iVar2 == 0) {
                if (uVar5 != 0) {
                    fcn.000036df(uVar5);
                }
                *(param_1 + 0x4c) = uVar5;
                *param_4 = *param_4 + uVar5;
code_r0x000018a1:
                *param_6 = 3;
                return 0;
            }
            if ((uStack_8 != 0) && (iVar2 != 2)) {
code_r0x0000187d:
                *param_6 = 2;
                return 1;
            }
        }
        *(param_1 + 0x1c) = piVar6;
        iVar2 = fcn.00000ffd();
        if (iVar2 != 0) {
            return 1;
        }
        iVar2 = *(param_1 + 0x1c) - piVar6;
        piVar6 = *(param_1 + 0x1c);
        *param_3 = *param_3 + iVar2;
        uVar5 = uVar5 - iVar2;
    } while( true );
}


/* fcn.0000415c @ 0x415c */

int __fastcall fcn.0000415c(uint param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    uint noname_0;
    int iVar5;
    char *pcVar6;
    uint8_t *puVar7;
    uchar **arg_ch;
    uchar *puStack_1244;
    int iStack_1240;
    uchar uStack_1239;
    uint *puStack_1238;
    uint uStack_1234;
    int iStack_1230;
    uchar auStack_122c [1947];
    char cStack_a91;
    uchar uStack_a8c;
    char acStack_a83 [38];
    uint8_t auStack_a5d [48];
    ushort uStack_a2d;
    ushort uStack_a2b;
    char cStack_882;
    char cStack_74d;
    uchar auStack_57c [192];
    char cStack_4bc;
    char cStack_4bb;
    
    uStack_1234 = 0;
    puStack_1244 = NULL;
    fcn.0000379c(param_1,&uStack_1234);
    iStack_1230 = 0;
    fcn.000034c4(&iStack_1230);
    arg_ch = &puStack_1244;
    fcn.0000379c(noname_0,arg_ch);
    iVar3 = fcn.0000379c(arg_ch,&puStack_1238);
    if (iVar3 != 0) {
        return iVar3;
    }
    iStack_1240 = 0xca9;
    iVar3 = (**puStack_1238)(puStack_1238,0xffd4764c,0xffd455bc,0,&iStack_1240,auStack_122c);
    if (iVar3 != 0) {
        return iVar3;
    }
    uVar2 = 1;
    if (cStack_74d == '\0') {
        uVar2 = 0;
        goto code_r0x00004267;
    }
    if (cStack_74d != '\x02') goto code_r0x00004267;
    iStack_1240 = 1;
    iVar3 = (**puStack_1238)(puStack_1238,0xffd476f0,0xffd455bc,0,&iStack_1240,&uStack_1239);
    if ((iVar3 == -0x7ffffff2) || (iStack_1240 != 1)) {
code_r0x0000424c:
        fcn.00009e1b();
    }
    else if ((~(*0xfe001024 >> 2) & 1) == 0) {
        fcn.00009df1();
        goto code_r0x0000424c;
    }
    uVar2 = fcn.00009df1();
    if ((uVar2 != 1) && (uVar2 != 0)) {
        uVar2 = 1;
    }
code_r0x00004267:
    iStack_1240 = 0x578;
    iVar3 = (**puStack_1238)(puStack_1238,0xffd47658,0xffd457fc,0,&iStack_1240,auStack_57c);
    if (iVar3 == 0) {
        if (cStack_4bc == '\0') {
            uVar2 = uVar2 & (cStack_4bb == '\0') - 1U;
        }
        iVar4 = fcn.0000361f();
        iVar5 = 0;
        iVar3 = 4;
        puVar7 = iStack_1230 + 0x24;
        do {
            uVar1 = auStack_a5d[iVar5];
            *puVar7 = uVar1;
            if (iVar4 != 0) {
                *puVar7 = *(iVar5 + 0x30 + iVar4) & uVar1;
            }
            iVar5 = iVar5 + 1;
            puVar7 = puVar7 + 4;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        *(iStack_1230 + 0x22) = uVar2;
        *(iStack_1230 + 0x1c) = uStack_a2d;
        *(iStack_1230 + 0x1e) = uStack_a2b;
        *(iStack_1230 + 0x21) = cStack_882;
        if (puStack_1244 != NULL) {
            iVar4 = 0;
            pcVar6 = acStack_a83 + 2;
            iVar3 = 2;
            do {
                puStack_1244[iVar4 + 8] = pcVar6[-2];
                if ((cStack_a91 != '\0') && (*pcVar6 == '\x02')) {
                    puStack_1244[iVar4 + 9] = 2;
                    puStack_1244[iVar4 + 10] = 1;
                }
                pcVar6 = pcVar6 + 1;
                iVar4 = iVar4 + 0x20;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
            *puStack_1244 = uStack_a8c;
            puStack_1244[1] = 0;
            puStack_1244[2] = (cStack_882 == '\x01') - 1U & 5;
            if ((puStack_1244[5] & 8) == 0) {
                puStack_1244[5] = uVar2;
            }
        }
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.000060e0 @ 0x60e0 */

int __fastcall fcn.000060e0(uint param_1)

{
    uint ****ppppuVar1;
    uint ***pppuVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    uint noname_0;
    uint32_t extraout_ECX;
    uint32_t uVar6;
    uint ****ppppuVar7;
    uint8_t uVar8;
    uint32_t uVar9;
    uint *arg_ch;
    uchar *noname_0_00;
    uint uStack_1e2c;
    uint ****ppppuStack_1e28;
    uint uStack_1e24;
    uint *puStack_1e20;
    uint uStack_1e1c;
    uchar auStack_1e18 [20];
    uchar auStack_1e04 [1303];
    uint8_t uStack_18ed;
    uint8_t uStack_18e6;
    uint8_t auStack_1745 [80];
    uint8_t uStack_16f5;
    uint8_t uStack_16cb;
    uint8_t uStack_16ca;
    uchar uStack_168f;
    uint8_t uStack_1686;
    uchar uStack_167d;
    uchar uStack_167c;
    uchar auStack_15f4 [968];
    uchar auStack_122c [1400];
    uchar auStack_cb4 [3252];
    
    arg_ch = &uStack_1e2c;
    uVar9 = 0;
    uStack_1e2c = 0;
    ppppuStack_1e28 = NULL;
    uStack_1e1c = 0;
    fcn.0000379c(param_1,arg_ch);
    fcn.0000379c(arg_ch,&uStack_1e1c);
    iVar5 = fcn.000034c4(&ppppuStack_1e28);
    if (-1 < iVar5) {
        pppuVar2 = ppppuStack_1e28[9];
        fcn.0000379c(noname_0,&puStack_1e20);
        uStack_1e24 = 0xca9;
        (**puStack_1e20)(puStack_1e20,0xffd4764c,0xffd455bc,0,&uStack_1e24,auStack_cb4);
        uStack_1e24 = 0x578;
        (**puStack_1e20)(puStack_1e20,0xffd47658,0xffd457fc,0,&uStack_1e24,auStack_122c);
        uStack_1e24 = 0x3c1;
        (**puStack_1e20)(puStack_1e20,0xffd476dc,0xffd454bc,0,&uStack_1e24,auStack_15f4);
        uStack_1e24 = 0x80d;
        (**puStack_1e20)(puStack_1e20,0xffd476b0,0xffd457dc,0,&uStack_1e24,auStack_1e04);
        uStack_1e24 = 0x11;
        (**puStack_1e20)(puStack_1e20,0xffd47714,0xffd453fc,0,&uStack_1e24,auStack_1e18);
        fcn.00005e5e(auStack_1e04);
        fcn.000055b1(auStack_1e04);
        fcn.00005b3c(auStack_1e04);
        fcn.0000526c(auStack_1e04);
        iVar5 = fcn.000034c4(&ppppuStack_1e28);
        if (-1 < iVar5) {
            ppppuStack_1e28[7] = uStack_18ed * 2 | ppppuStack_1e28[7] & 0xfffffe01;
        }
        noname_0_00 = auStack_cb4;
        fcn.00004d5a(auStack_1e04);
        fcn.00004c6c(noname_0_00,noname_0_00,auStack_1e04);
        fcn.0000560d(auStack_1e04,pppuVar2 & 1);
        fcn.00005ac5(auStack_1e04);
        fcn.0000589f(auStack_1e04);
        iVar5 = fcn.000034c4(&ppppuStack_1e28);
        if (-1 < iVar5) {
            ppppuStack_1e28[7] = ppppuStack_1e28[7] ^ (uStack_18e6 ^ ppppuStack_1e28[7]) & 1;
        }
        fcn.00004d03(auStack_1e04);
        iVar5 = fcn.000034c4(&ppppuStack_1e28);
        uVar6 = extraout_ECX;
        if (-1 < iVar5) {
            uVar6 = uStack_16f5;
            *(ppppuStack_1e28 + 0x88) = uStack_16f5;
        }
        fcn.00004435(auStack_1e04,uVar6,auStack_cb4);
        fcn.0000565b(auStack_1e04,auStack_cb4);
        fcn.000053c6(auStack_1e04,auStack_122c);
        fcn.00004acc(auStack_1e04);
        fcn.00004bf1();
        iVar5 = fcn.000034c4(&ppppuStack_1e28);
        if ((-1 < iVar5) && (cVar3 = fcn.000033a4(), ppppuVar7 = ppppuStack_1e28, cVar3 != '\0')) {
            do {
                ppppuVar1 = ppppuVar7 + uVar9 + 7;
                *ppppuVar1 = *ppppuVar1 ^ (auStack_1745[uVar9] ^ ppppuVar7[uVar9 + 7]) & 1;
                uVar8 = uVar9 + 1;
                uVar9 = uVar8;
                uVar4 = fcn.000033a4();
            } while (uVar8 < uVar4);
        }
        fcn.00005169(auStack_1e04);
        fcn.00005eb7();
        fcn.00005336(auStack_1e04);
        iVar5 = fcn.000034c4(&ppppuStack_1e28);
        if (-1 < iVar5) {
            ppppuStack_1e28[7] = ppppuStack_1e28[7] ^ (uStack_16cb ^ ppppuStack_1e28[7]) & 1;
            ppppuStack_1e28[7] = ppppuStack_1e28[7] ^ (uStack_16ca << 2 ^ ppppuStack_1e28[7]) & 4;
        }
        iVar5 = fcn.000034c4(&ppppuStack_1e28);
        if (-1 < iVar5) {
            *(ppppuStack_1e28 + 7) = uStack_168f;
            *(ppppuStack_1e28 + 0x1d) = uStack_167d;
            *(ppppuStack_1e28 + 0x1e) = uStack_167c;
        }
        ppppuVar7 = &ppppuStack_1e28;
        iVar5 = fcn.000034c4(ppppuVar7);
        if (-1 < iVar5) {
            ppppuStack_1e28[7] = ppppuStack_1e28[7] ^ (uStack_1686 ^ ppppuStack_1e28[7]) & 1;
            ppppuVar7 = ppppuStack_1e28;
        }
        fcn.00005f47(ppppuVar7);
        fcn.0000602f();
        iVar5 = 0;
    }
    return iVar5;
}


/* fcn.00006871 @ 0x6871 */

int __fastcall fcn.00006871(uint param_1)

{
    uchar *puVar1;
    char *pcVar2;
    uint32_t *puVar3;
    ushort uVar4;
    int *piVar5;
    char *pcVar6;
    char cVar7;
    uint8_t uVar8;
    int iVar9;
    int iVar10;
    uint *puVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint noname_0;
    uchar *puVar14;
    char *pcVar15;
    uchar *puVar16;
    char *pcVar17;
    uint8_t uVar18;
    ushort *puVar19;
    uint32_t uVar20;
    uint uVar21;
    int iStack_1ab4;
    char *pcStack_1ab0;
    uint uStack_1aac;
    uint uStack_1aa8;
    ushort *puStack_1aa4;
    uint uStack_1aa0;
    uint *puStack_1a9c;
    ushort uStack_1a98;
    ushort uStack_1a96;
    ushort uStack_1a94;
    uint uStack_1a90;
    int iStack_1a8c;
    int iStack_1a88;
    int iStack_1a84;
    int iStack_1a80;
    int iStack_1a7c;
    int iStack_1a78;
    int32_t iStack_1a74;
    uint uStack_1a70;
    uint uStack_1a6c;
    uint uStack_1a68;
    uint uStack_1a64;
    int iStack_1a60;
    uchar auStack_1a5c [16];
    int32_t aiStack_1a4c [4];
    uchar auStack_1a3c [46];
    uchar uStack_1a0e;
    uchar uStack_1a04;
    char cStack_1a03;
    uchar uStack_1a02;
    char cStack_1a01;
    uchar uStack_19ff;
    uint8_t uStack_19fe;
    uint8_t uStack_19fd;
    uchar uStack_19fc;
    uchar uStack_19fb;
    uchar uStack_19fa;
    uchar uStack_19c0;
    uint8_t uStack_19bd;
    uchar uStack_19ba;
    uint8_t uStack_197a;
    uint8_t uStack_1979;
    uint8_t uStack_1978;
    uint8_t uStack_1977;
    char acStack_1976 [4];
    char acStack_1972 [4];
    char acStack_196e [4];
    char acStack_196a [4];
    ushort auStack_1966 [4];
    char acStack_195e [4];
    char acStack_195a [4];
    ushort auStack_1956 [4];
    char acStack_194e [4];
    char acStack_194a [6];
    uchar uStack_1944;
    uchar auStack_1943 [31];
    uchar auStack_1924 [31];
    uchar auStack_1905 [62];
    uchar uStack_18c7;
    uchar uStack_18c6;
    uchar uStack_18c5;
    uchar uStack_18c4;
    uchar uStack_18c3;
    uchar uStack_18c2;
    uint8_t uStack_1798;
    uint8_t auStack_1797 [4];
    uint8_t auStack_1793 [4];
    uint8_t uStack_178f;
    uint8_t uStack_1710;
    uint8_t auStack_170f [4];
    uint8_t auStack_170b [4];
    uint8_t auStack_1707 [4];
    uint8_t auStack_1703 [4];
    uint8_t auStack_16ff [4];
    uint8_t auStack_16fb [4];
    uint8_t auStack_16f7 [4];
    uint8_t auStack_16f3 [4];
    uint8_t auStack_16ef [4];
    uint8_t auStack_16eb [4];
    uint8_t auStack_16e7 [4];
    uint8_t auStack_16e3 [4];
    uint8_t auStack_16df [4];
    uint8_t auStack_16db [4];
    uint8_t auStack_16d7 [8];
    uchar auStack_16cf [12];
    uchar auStack_16c3 [4];
    uchar auStack_16bf [4];
    uint8_t auStack_16bb [4];
    uint8_t auStack_16b7 [4];
    uint8_t auStack_16b3 [4];
    uint8_t auStack_16af [4];
    uint8_t auStack_16ab [4];
    uint8_t auStack_16a7 [4];
    uint8_t auStack_16a3 [4];
    ushort auStack_169f [4];
    uint8_t auStack_1697 [8];
    uint8_t auStack_168f [459];
    uchar auStack_14c4 [1747];
    char cStack_df1;
    char cStack_def;
    char cStack_ca4;
    uint8_t uStack_c6c;
    char cStack_ae8;
    uchar auStack_814 [67];
    uint8_t uStack_7d1;
    
    uVar18 = 0;
    iStack_1a74 = 0x52bf7d53;
    puVar11 = &uStack_1a64;
    uStack_1a70 = 0x455579cf;
    uStack_1a6c = 0x8b1e17a5;
    uStack_1a68 = 0x322304b3;
    uStack_1aa0 = 0;
    uStack_1aa8 = 0;
    iStack_1ab4 = 0;
    uStack_1a90 = 0;
    iStack_1a88 = 0;
    iStack_1a84 = 0;
    pcStack_1ab0 = NULL;
    uStack_1a64 = 0;
    iStack_1a78 = 0;
    iStack_1a7c = 0;
    fcn.0000379c(param_1,puVar11);
    fcn.0000379c(puVar11,&uStack_1a90);
    fcn.000034c4(&iStack_1ab4);
    fcn.000034c4(&iStack_1a88);
    fcn.000034c4(&iStack_1a84);
    fcn.000034c4(&pcStack_1ab0);
    fcn.000034c4(&iStack_1a78);
    iStack_1a80 = 0;
    fcn.000034c4(&iStack_1a80);
    fcn.000034c4(&iStack_1a7c);
    fcn.000037c9();
    fcn.0000379c(noname_0,&puStack_1a9c);
    uStack_1aac = 0x80d;
    iVar9 = (**puStack_1a9c)(puStack_1a9c,0xffd476b0,0xffd457dc,0,&uStack_1aac,auStack_814);
    pcVar6 = pcStack_1ab0;
    if (-1 < iVar9) {
        *(pcStack_1ab0 + 0xb8) = *(pcStack_1ab0 + 0xb8) ^ (uStack_7d1 * 2 ^ *(pcStack_1ab0 + 0xb8)) & 2;
    }
    uStack_1aac = 0xca9;
    iVar9 = (**puStack_1a9c)(puStack_1a9c,0xffd4764c,0xffd455bc,0,&uStack_1aac,auStack_14c4);
    uStack_1aac = 0x578;
    iVar10 = (**puStack_1a9c)(puStack_1a9c,0xffd47658,0xffd457fc,0,&uStack_1aac,auStack_1a3c);
    if (-1 < iVar10) {
        *(pcVar6 + 0xb8) = *(pcVar6 + 0xb8) ^ (auStack_168f[0x3b] ^ *(pcVar6 + 0xb8)) & 1;
    }
    if (cStack_1a01 == '\x01') {
        uVar21 = 0xffd4761c;
    }
    else {
        uVar21 = 0xffd4763c;
    }
    fcn.00000178(auStack_1a5c,uVar21,0x10);
    if (-1 < iVar9) {
        *(iStack_1ab4 + 0x27) = uStack_1a02;
        *(iStack_1ab4 + 0x1e) = uStack_19fe;
        *(iStack_1ab4 + 0x20) = cStack_1a03;
        *(iStack_1ab4 + 0x22) = uStack_19fd;
        *(iStack_1ab4 + 0x24) = uStack_19fc;
        *(iStack_1ab4 + 0x21) = uStack_19ff;
        *(iStack_1ab4 + 0x26) = uStack_19fa;
        *(iStack_1ab4 + 0x25) = uStack_19fb;
        *(iStack_1ab4 + 0x1c) = uStack_1a0e;
        *(iStack_1ab4 + 0x1d) = uStack_1a04;
        *(iStack_1ab4 + 0x3d) = 0;
        if (cStack_1a03 == '\x01') {
            pcStack_1ab0 = NULL;
            fcn.00000178(aiStack_1a4c,auStack_1a5c,0x10);
            fcn.00009e39(aiStack_1a4c[0]);
            if (iStack_1a60 == 0x11) {
                *(iStack_1ab4 + 0x30) = 0;
            }
            else {
                *(iStack_1ab4 + 0x30) = pcStack_1ab0;
            }
            puStack_1aa4 = *(iStack_1ab4 + 0x30);
            pcStack_1ab0 = NULL;
            fcn.00009e39(iStack_1a74);
            pcVar17 = pcStack_1ab0;
            iVar9 = iStack_1ab4;
            *(iStack_1ab4 + 0x28) = pcStack_1ab0;
            *(iStack_1ab4 + 0x2c) = uStack_1aa0;
            puVar11 = fcn.0000375f();
            if (puVar11 == NULL) {
                return -0x7ffffff7;
            }
            puVar11[2] = puStack_1aa4;
            *puVar11 = 0x80000010;
            puVar11[1] = 0xffd4555c;
            iVar10 = fcn.00003777();
            if (*pcVar17 != 'B') {
                return iVar10;
            }
            if (pcVar17[1] != 'M') {
                return iVar10;
            }
            iVar10 = fcn.00009d08(&uStack_1aa8);
            if (iVar10 < 0) {
                return iVar10;
            }
            iVar10 = fcn.00009d08(&uStack_1aa8);
            if (iVar10 < 0) {
                return iVar10;
            }
            iStack_1ab4 = fcn.00003706();
            iStack_1a8c = fcn.00009ef9(&iStack_1ab4,&uStack_1aa8,&uStack_1a98,&puStack_1aa4);
            if (iStack_1a8c == -0x7ffffffb) {
                fcn.00003869(iStack_1ab4,0);
                iStack_1ab4 = fcn.00003706();
                iStack_1a8c = fcn.00009ef9(&iStack_1ab4,&uStack_1aa8,&uStack_1a98,&puStack_1aa4);
            }
            if (iStack_1a8c < 0) {
                fcn.00003869(iStack_1ab4,0);
                return iStack_1a8c;
            }
            iVar10 = iStack_1ab4;
        }
        else {
            iVar10 = 0;
            iVar9 = iStack_1ab4;
        }
        *(iVar9 + 0x34) = iVar10;
        *(iVar9 + 0x38) = uStack_1aa8;
        *(iVar9 + 0x40) = CONCAT22(uStack_1a96,uStack_1a98);
        *(iVar9 + 0x44) = puStack_1aa4;
        puStack_1aa4 = &uStack_1a98;
        uVar21 = InterruptDescriptorTableRegister();
        uStack_1a96 = uVar21 >> 0x10;
        piVar5 = *(CONCAT22(uStack_1a94,uStack_1a96) + -4);
        (**(*piVar5 + 0x24))(piVar5,0xffd45928);
        *(iStack_1a88 + 0x1c) = *(iStack_1a88 + 0x1c) ^ (uStack_19bd ^ *(iStack_1a88 + 0x1c)) & 1;
        *(iStack_1a84 + 0x1f) = uStack_19ba;
        if ((cStack_df1 == '\x01') && (cStack_def == '\x01')) {
            uStack_19c0 = 1;
        }
        *(iStack_1a84 + 0x1c) = uStack_19c0;
    }
    iVar10 = iStack_1a80;
    puVar14 = auStack_1924;
    iVar9 = 0x1f;
    *(iStack_1a80 + 0x1c) = uStack_1944;
    *(iStack_1a80 + 0x27) = auStack_168f[0x39];
    puVar16 = iStack_1a80 + 0x29;
    do {
        puVar16[2] = puVar14[-0x1f];
        *puVar16 = *puVar14;
        puVar1 = puVar14 + 0x1f;
        puVar14 = puVar14 + 1;
        puVar16[1] = *puVar1;
        iVar9 = iVar9 + -1;
        puVar16 = puVar16 + 4;
    } while (iVar9 != 0);
    uVar21 = 0;
    *(iStack_1a80 + 0x21) = uStack_18c7;
    *(iStack_1a80 + 0x22) = uStack_18c6;
    *(iStack_1a80 + 0x23) = uStack_18c5;
    *(iStack_1a80 + 0x24) = uStack_18c4;
    *(iStack_1a80 + 0x25) = uStack_18c3;
    *(iStack_1a80 + 0x26) = uStack_18c2;
    *(iStack_1a80 + 0xa8) = 0xa0000000;
    *(iStack_1a80 + 0xac) = 0xa2000000;
    *(iStack_1a80 + 0xb0) = 0xa4000000;
    uStack_1aac = 0;
    iVar9 = (**puStack_1a9c)(puStack_1a9c,0xffd4775c,0xffd4578c,0,&uStack_1aac,0);
    if (iVar9 == -0x7ffffffb) {
        uVar21 = fcn.0000375f();
        (**puStack_1a9c)(puStack_1a9c,0xffd4775c,0xffd4578c,0,&uStack_1aac,uVar21);
    }
    *(iVar10 + 0xa4) = uVar21;
    *(iStack_1a7c + 0x1c) = uStack_c6c;
    *(pcVar6 + 0x15c) = uStack_1979;
    if (cStack_ae8 == '\x03') {
        pcVar6[0x158] = '\0';
        pcVar6[0x159] = '\0';
        pcVar6[0x15a] = '\0';
        pcVar6[0x15b] = '\0';
    }
    else {
        *(pcVar6 + 0x158) = uStack_197a;
    }
    *(pcVar6 + 0x164) = uStack_1977;
    *(pcVar6 + 0x160) = uStack_1978;
    pcVar6[0x16c] = auStack_168f[0x3a];
    if (auStack_168f[0x83] == '\0') {
        pcVar6[0x17c] = '\0';
        pcVar6[0x17d] = '\0';
    }
    else {
        pcVar6[0x17c] = auStack_168f[0x84];
        pcVar6[0x17d] = auStack_168f[0x85];
    }
    pcVar17 = acStack_1972;
    puVar19 = auStack_1956;
    iVar9 = 4;
    pcVar15 = pcVar6 + 0x1f;
    do {
        pcVar15[1] = pcVar17[-4];
        *pcVar15 = *pcVar17;
        pcVar15[0x13] = pcVar17[4];
        pcVar15[0x14] = pcVar17[8];
        *(pcVar15 + 0x15) = puVar19[-8];
        pcVar15[0x17] = pcVar17[0x14];
        pcVar15[0x18] = pcVar17[0x18];
        uVar4 = *puVar19;
        puVar19 = puVar19 + 1;
        *(pcVar15 + 0x19) = uVar4;
        pcVar15[0x1b] = pcVar17[0x24];
        pcVar2 = pcVar17 + 0x28;
        pcVar17 = pcVar17 + 1;
        pcVar15[0x1c] = *pcVar2;
        iVar9 = iVar9 + -1;
        pcVar15 = pcVar15 + 0x20;
    } while (iVar9 != 0);
    if (cStack_ca4 == '\x01') {
        iVar9 = fcn.0000353a();
        cVar7 = (**(iVar9 + 0x18))(0x1f);
        if (cVar7 != '\0') {
            pcVar6[0x168] = cStack_ca4;
            goto code_r0x00006f43;
        }
    }
    pcVar6[0x168] = '\0';
code_r0x00006f43:
    iVar9 = 0;
    do {
        cVar7 = fcn.00006566();
        iVar10 = iStack_1a78;
        if (cVar7 - 1U < 0xf) {
            pcVar6[iVar9 + 0x174] = '\x01';
            pcVar6[iVar9 + 0x178] = cVar7;
        }
        uVar18 = uVar18 + 1;
        iVar9 = iVar9 + 1;
    } while (uVar18 < 4);
    *(iStack_1a78 + 0x8ac) = *(iStack_1a78 + 0x8ac) ^ (uStack_1798 ^ *(iStack_1a78 + 0x8ac)) & 1;
    *(iStack_1a78 + 0x890) = *(iStack_1a78 + 0x890) ^ (uStack_178f * 2 ^ *(iStack_1a78 + 0x890)) & 2;
    *(iStack_1a78 + 0x8ac) = *(iStack_1a78 + 0x8ac) ^ (uStack_1710 << 4 ^ *(iStack_1a78 + 0x8ac)) & 0x10;
    uVar12 = fcn.000091da();
    if (uVar12 != '\0') {
        uVar20 = 0;
        do {
            iVar9 = uVar20 * 0x1f0;
            *(iVar9 + 0x28 + iVar10) = *(iVar9 + 0x28 + iVar10) & 0xffffdfff | 0x1000;
            *(iVar9 + 0x31 + iVar10) = uVar20;
            *(iVar9 + 0x33 + iVar10) = auStack_16c3[uVar20];
            *(iVar9 + 0x34 + iVar10) = auStack_16bf[uVar20];
            *(iVar9 + 0x30 + iVar10) = auStack_16cf[uVar20];
            puVar3 = iVar9 + 0x28 + iVar10;
            *puVar3 = *puVar3 ^ (auStack_16ff[uVar20] << 3 ^ *(iVar9 + 0x28 + iVar10)) & 8;
            uVar13 = (auStack_16a3[uVar20] << 0x11 ^ *(iVar9 + 0x28 + iVar10)) & 0x20000 ^ *(iVar9 + 0x28 + iVar10);
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16db[uVar20] << 0xe ^ uVar13) & 0x4000 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            *(iVar9 + 0x28 + iVar10) = (auStack_16d7[uVar20] << 0xf ^ uVar13) & 0x8000 ^ uVar13;
            puVar3 = iVar9 + 0x1c + iVar10;
            *puVar3 = *puVar3 ^ (auStack_1697[uVar20] * 2 ^ *(iVar9 + 0x1c + iVar10)) & 2;
            puVar3 = iVar9 + 0x2c + iVar10;
            *puVar3 = *puVar3 ^ (auStack_168f[uVar20 + 0x35] << 4 ^ *(iVar9 + 0x2c + iVar10)) & 0x10;
            *(iVar9 + 0x21 + iVar10) = auStack_168f[uVar20 + 0x30];
            puVar3 = iVar9 + 0x28 + iVar10;
            *puVar3 = *puVar3 ^ (auStack_170b[uVar20] << 0x10 ^ *(iVar9 + 0x28 + iVar10)) & 0x10000;
            uVar13 = (auStack_1707[uVar20] * 2 ^ *(iVar9 + 0x28 + iVar10)) & 2 ^ *(iVar9 + 0x28 + iVar10);
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_170f[uVar20] ^ uVar13) & 1 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16fb[uVar20] << 4 ^ uVar13) & 0x10 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16f7[uVar20] << 5 ^ uVar13) & 0x20 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16f3[uVar20] << 6 ^ uVar13) & 0x40 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16ef[uVar20] << 7 ^ uVar13) & 0x80 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16eb[uVar20] << 8 ^ uVar13) & 0x100 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16e7[uVar20] << 9 ^ uVar13) & 0x200 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16e3[uVar20] << 10 ^ uVar13) & 0x400 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            uVar13 = (auStack_16df[uVar20] << 0xb ^ uVar13) & 0x800 ^ uVar13;
            *(iVar9 + 0x28 + iVar10) = uVar13;
            *(iVar9 + 0x28 + iVar10) = (auStack_1703[uVar20] << 2 ^ uVar13) & 4 ^ uVar13;
            puVar3 = iVar9 + 0x24 + iVar10;
            *puVar3 = *puVar3 ^ (auStack_16bb[uVar20] ^ *(iVar9 + 0x24 + iVar10)) & 0xf;
            uVar13 = (auStack_16b7[uVar20] << 4 ^ *(iVar9 + 0x24 + iVar10)) & 0xf0 ^ *(iVar9 + 0x24 + iVar10);
            *(iVar9 + 0x24 + iVar10) = uVar13;
            uVar13 = (auStack_16b3[uVar20] << 8 ^ uVar13) & 0xf00 ^ uVar13;
            *(iVar9 + 0x24 + iVar10) = uVar13;
            uVar13 = (auStack_16af[uVar20] << 0xc ^ uVar13) & 0xf000 ^ uVar13;
            *(iVar9 + 0x24 + iVar10) = uVar13;
            uVar13 = (auStack_16ab[uVar20] << 0x10 ^ uVar13) & 0xf0000 ^ uVar13;
            *(iVar9 + 0x24 + iVar10) = uVar13;
            *(iVar9 + 0x24 + iVar10) = (auStack_16a7[uVar20] << 0x14 ^ uVar13) & 0xf00000 ^ uVar13;
            *(iVar9 + 0x48 + iVar10) = auStack_169f[uVar20];
            puVar3 = iVar9 + 0x2c + iVar10;
            *puVar3 = *puVar3 ^ (auStack_1797[uVar20] << 5 ^ *(iVar9 + 0x2c + iVar10)) & 0x20;
            *(iVar10 + 0x8b7 + uVar20 * 4) = auStack_168f[uVar20 + 0x76];
            if (uStack_178f == 1) {
                puVar3 = iVar9 + 0x2c + iVar10;
                *puVar3 = *puVar3 & 0xffffffbf;
            }
            else {
                puVar3 = iVar9 + 0x2c + iVar10;
                *puVar3 = *puVar3 ^ (auStack_1793[uVar20] << 6 ^ *(iVar9 + 0x2c + iVar10)) & 0x40;
            }
            uVar20 = uVar20 + 1;
        } while (uVar20 < (uVar12 & 0xff));
    }
    uVar18 = 0;
    *(iVar10 + 0x218) = *(iVar10 + 0x218) & 0xfffffffe;
    cVar7 = fcn.000091da();
    if (cVar7 != '\0') {
        do {
            uVar12 = uVar18;
            uVar18 = uVar18 + 1;
            *(uVar12 * 0x1f0 + 0x44 + iVar10) = auStack_168f[uVar12 + 4];
            *(uVar12 * 0x1f0 + 0x35 + iVar10) = auStack_168f[uVar12];
            uVar8 = fcn.000091da();
        } while (uVar18 < uVar8);
    }
    return 0;
}


/* fcn.00007b8f @ 0x7b8f */

uint fcn.00007b8f(void)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    int iVar4;
    uint noname_0;
    int32_t *piVar5;
    int32_t var_1090h;
    int32_t var_3e0h;
    int8_t var_361h;
    int8_t var_326h;
    int8_t var_31fh;
    int32_t var_218h;
    int8_t var_214h;
    int8_t var_213h;
    int8_t var_1d2h;
    int8_t var_1d1h;
    int8_t var_104h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    var_10h = 0;
    var_18h = 0;
    var_14h = 0;
    cVar1 = fcn.000033e5();
    piVar5 = &var_18h;
    fcn.0000379c(noname_0,piVar5);
    fcn.0000379c(piVar5,&var_4h);
    fcn.000034c4(&var_10h);
    piVar5 = &var_14h;
    fcn.000034c4(piVar5);
    fcn.0000379c(piVar5,&var_ch);
    var_8h = 0xca9;
    (**var_ch)(var_ch,0xffd4764c,0xffd455bc,0,&var_8h,&var_1090h);
    var_8h = 0x3c1;
    (**var_ch)(var_ch,0xffd476dc,0xffd454bc,0,&var_8h,&var_3e0h);
    *(var_10h + 0x28) = *(var_10h + 0x28) ^ (var_326h ^ *(var_10h + 0x28)) & 1;
    uVar3 = (var_31fh * 2 ^ *(var_10h + 0x28)) & 2 ^ *(var_10h + 0x28);
    *(var_10h + 0x28) = uVar3;
    if (var_1d2h == 0) {
        uVar3 = uVar3 & 0xffffffe7;
    }
    else {
        if (var_1d2h != 1) goto code_r0x00007caa;
        if (var_1d1h == 0) {
            uVar3 = uVar3 & 0xfffffff7 | 0x10;
        }
        else {
            if (var_1d1h != 1) goto code_r0x00007caa;
            uVar3 = uVar3 & 0xffffffef | 8;
        }
    }
    *(var_10h + 0x28) = uVar3;
code_r0x00007caa:
    *(var_10h + 0x28) = (var_104h & 1) << 6 | *(var_10h + 0x28) & 0xfffffebf;
    if (((var_361h == 0) && ((iVar2 = fcn.0000341e(), iVar2 == 15000 || (cVar1 == '\x02')))) &&
       ((iVar4 = fcn.000033c5(), iVar4 == 0x90670 || (iVar4 = fcn.000033c5(), iVar4 == 0x906a0)))) {
        var_361h = 10;
    }
    *(var_14h + 0x28) = var_361h;
    *(var_14h + 0x3c) = var_218h;
    *(var_14h + 0x1c) = *(var_14h + 0x1c) ^ (var_214h << 0x13 ^ *(var_14h + 0x1c)) & 0x80000;
    *(var_14h + 0x1c) = *(var_14h + 0x1c) ^ (var_213h << 0x14 ^ *(var_14h + 0x1c)) & 0x100000;
    fcn.000073e2();
    return 0;
}


/* fcn.000072f9 @ 0x72f9 */

int __fastcall fcn.000072f9(uint param_1)

{
    int iVar1;
    uint32_t uVar2;
    uint noname_0;
    int32_t var_48h;
    int8_t var_3bh;
    int8_t var_38h;
    int8_t var_36h;
    int8_t var_13h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_8h = 0;
    var_4h = 0;
    fcn.0000379c(param_1,&var_8h);
    iVar1 = fcn.000034c4(&var_4h);
    if ((-1 < iVar1) && (iVar1 = fcn.0000379c(noname_0,&var_10h), -1 < iVar1)) {
        var_ch = 0x36;
        iVar1 = (**var_10h)(var_10h,0xffd47784,0xffd457cc,0,&var_ch,&var_48h);
        if (-1 < iVar1) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (var_36h ^ *(var_4h + 0x1c)) & 3;
            uVar2 = (var_38h << 4 ^ *(var_4h + 0x1c)) & 0x30 ^ *(var_4h + 0x1c);
            *(var_4h + 0x1c) = uVar2;
            uVar2 = (var_3bh << 6 ^ uVar2) & 0x40 ^ uVar2;
            *(var_4h + 0x1c) = uVar2;
            *(var_4h + 0x1c) = (var_13h << 8 ^ uVar2) & 0x100 ^ uVar2;
        }
        if ((~(*0xfe001024 >> 2) & 1) == 0) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) & 0xffffffef | 0x20;
        }
    }
    return iVar1;
}


/* fcn.00003b3c @ 0x3b3c */

int __fastcall fcn.00003b3c(uint param_1)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    int iVar4;
    uint8_t uVar5;
    uint32_t uVar6;
    int32_t *arg_ch;
    int32_t var_820h;
    int8_t var_7dch;
    int8_t var_78dh;
    uint32_t var_43dh;
    uint32_t var_e4h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    arg_ch = &var_8h;
    iVar3 = fcn.0000379c(param_1,arg_ch);
    if (-1 < iVar3) {
        fcn.0000379c(arg_ch,&var_10h);
        var_ch = 0x80d;
        uVar6 = 0;
        iVar3 = (**var_10h)(var_10h,0xffd476b0,0xffd457dc,0,&var_ch,&var_820h);
        fcn.00003a07(&var_820h);
        iVar4 = fcn.000034c4(&var_4h);
        if ((-1 < iVar4) && (cVar1 = fcn.00003338(), cVar1 != '\0')) {
            do {
                if (*(&var_43dh + uVar6) == '\x01') {
                    *(var_4h + 0x1c) = *(var_4h + 0x1c) | 1;
                    break;
                }
                uVar5 = uVar6 + 1;
                uVar6 = uVar5;
                uVar2 = fcn.00003338();
            } while (uVar5 < uVar2);
        }
        iVar4 = fcn.000034c4(&var_4h);
        if (-1 < iVar4) {
            *(var_4h + 0x1d) = var_78dh;
        }
        iVar4 = fcn.000034c4(&var_4h);
        if (-1 < iVar4) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (var_7dch << 2 ^ *(var_4h + 0x1c)) & 4;
        }
        fcn.00003ac0(&var_820h);
        iVar4 = fcn.000034c4(&var_4h);
        if (-1 < iVar4) {
            *(var_4h + 0x1c) = var_e4h == '\0' | *(var_4h + 0x1c) & 0xfffffffe;
        }
    }
    return iVar3;
}


/* fcn.00003cd1 @ 0x3cd1 */

uint __fastcall fcn.00003cd1(uint param_1)

{
    uint32_t uVar1;
    uint noname_0;
    int32_t *arg_ch;
    int32_t var_3e0h;
    int8_t var_3d7h;
    int8_t var_3d6h;
    int8_t var_3cch;
    int8_t var_3cbh;
    int8_t var_3a4h;
    int8_t var_3a3h;
    int8_t var_3a2h;
    int8_t var_3a1h;
    int8_t var_3a0h;
    int8_t var_39fh;
    int8_t var_39eh;
    int8_t var_39dh;
    int8_t var_399h;
    int8_t var_398h;
    int8_t var_397h;
    int8_t var_395h;
    int8_t var_394h;
    int8_t var_393h;
    int8_t var_392h;
    int8_t var_391h;
    int8_t var_390h;
    int16_t var_38fh;
    int16_t var_38dh;
    int16_t var_38bh;
    int16_t var_389h;
    int16_t var_387h;
    int8_t var_367h;
    int8_t var_366h;
    int8_t var_365h;
    int8_t var_364h;
    int8_t var_363h;
    int8_t var_362h;
    int8_t var_325h;
    int8_t var_324h;
    int8_t var_321h;
    int8_t var_320h;
    int8_t var_2bfh;
    int8_t var_2beh;
    int8_t var_2bdh;
    int8_t var_2bbh;
    int8_t var_20bh;
    int8_t var_1efh;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    arg_ch = &var_10h;
    var_10h = 0;
    var_4h = 0;
    var_8h = 0;
    var_ch = 0;
    fcn.0000379c(param_1,arg_ch);
    fcn.0000379c(arg_ch,&var_4h);
    fcn.000034c4(&var_8h);
    fcn.000034c4(&var_ch);
    fcn.0000379c(noname_0,&var_18h);
    var_14h = 0x3c1;
    (**var_18h)(var_18h,0xffd476dc,0xffd454bc,0,&var_14h,&var_3e0h);
    *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (var_2bfh << 4 ^ *(var_8h + 0x1c)) & 0x10;
    *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (var_2bdh << 5 ^ *(var_8h + 0x1c)) & 0x20;
    *(var_8h + 0x20) = var_2beh;
    *(var_8h + 0x1c) = *(var_8h + 0x1c) ^ (var_325h << 3 ^ *(var_8h + 0x1c)) & 8;
    uVar1 = (var_324h << 2 ^ *(var_8h + 0x1c)) & 4 ^ *(var_8h + 0x1c);
    *(var_8h + 0x1c) = uVar1;
    uVar1 = (var_321h ^ uVar1) & 1 ^ uVar1;
    *(var_8h + 0x1c) = uVar1;
    uVar1 = (var_320h * 2 ^ uVar1) & 2 ^ uVar1;
    *(var_8h + 0x1c) = uVar1;
    *(var_8h + 0x1c) = (var_2bbh << 6 ^ uVar1) & 0x40 ^ uVar1;
    *(var_ch + 0x1c) = *(var_ch + 0x1c) ^ (var_398h << 0x15 ^ *(var_ch + 0x1c)) & 0x200000;
    *(var_ch + 0x4c) = var_397h;
    *(var_ch + 0x1c) = *(var_ch + 0x1c) ^ (var_3cch << 10 ^ *(var_ch + 0x1c)) & 0x400;
    uVar1 = (var_3d7h ^ *(var_ch + 0x1c)) & 1 ^ *(var_ch + 0x1c);
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_3a4h * 2 ^ uVar1) & 2 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_3a3h << 0x13 ^ uVar1) & 0x80000 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_399h << 0x14 ^ uVar1) & 0x100000 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_39dh << 0xb ^ uVar1) & 0x800 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_363h << 0x16 ^ uVar1) & 0x400000 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_366h << 4 ^ uVar1) & 0x10 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_365h << 5 ^ uVar1) & 0x20 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_364h << 7 ^ uVar1) & 0x80 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_362h << 6 ^ uVar1) & 0x40 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_1efh << 8 ^ uVar1) & 0x100 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_367h << 3 ^ uVar1) & 8 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_39eh << 9 ^ uVar1) & 0x200 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    uVar1 = (var_20bh << 2 ^ uVar1) & 4 ^ uVar1;
    *(var_ch + 0x1c) = uVar1;
    *(var_ch + 0x1c) = (var_3d6h << 0x17 ^ uVar1) & 0x800000 ^ uVar1;
    *(var_ch + 0x2c) = var_395h;
    if ((*(var_ch + 0x1c) & 0x400) != 0) {
        uVar1 = (var_3cbh << 0xc ^ *(var_ch + 0x1c)) & 0x1000 ^ *(var_ch + 0x1c);
        *(var_ch + 0x1c) = uVar1;
        uVar1 = ((var_3a1h & 1) * 2 | var_3a2h & 1) << 0xd | uVar1 & 0xffff9fff;
        *(var_ch + 0x1c) = uVar1;
        uVar1 = (var_3a0h << 0x11 ^ uVar1) & 0x20000 ^ uVar1;
        *(var_ch + 0x1c) = uVar1;
        *(var_ch + 0x1c) = (var_39fh << 0x12 ^ uVar1) & 0x40000 ^ uVar1;
        *(var_ch + 0x34) = var_394h;
        *(var_ch + 0x38) = var_393h;
        *(var_ch + 0x20) = var_38fh;
        *(var_ch + 0x22) = var_38dh;
        *(var_ch + 0x3c) = var_392h;
        *(var_ch + 0x40) = var_391h;
        *(var_ch + 0x44) = var_390h;
        *(var_ch + 0x24) = var_38bh;
        *(var_ch + 0x26) = var_389h;
        *(var_ch + 0x28) = var_387h;
    }
    return 0;
}


/* fcn.00003c7d @ 0x3c7d */

uint __fastcall fcn.00003c7d(uint param_1)

{
    int32_t *arg_ch;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    arg_ch = &var_4h;
    fcn.0000379c(param_1,arg_ch);
    fcn.0000379c(arg_ch,&var_ch);
    var_8h = 7;
    (**var_ch)(var_ch,0xffd476cc,0xffd4548c,0,&var_8h,&var_14h);
    return 0;
}


/* fcn.0000405b @ 0x405b */

uint __fastcall fcn.0000405b(uint param_1)

{
    int iVar1;
    char cVar2;
    uint8_t uVar3;
    uint uVar4;
    uint noname_0;
    int iVar5;
    uint8_t uVar6;
    uint32_t uVar7;
    uint uStack_58c;
    int aiStack_588 [2];
    uint *puStack_580;
    uchar auStack_57c [941];
    char acStack_1cf [8];
    uchar auStack_1c7 [4];
    uchar auStack_1c3 [4];
    ushort auStack_1bf [4];
    uchar auStack_1b7 [4];
    uchar auStack_1b3 [4];
    ushort auStack_1af [215];
    
    uVar7 = 0;
    uStack_58c = 0;
    aiStack_588[0] = 0;
    fcn.0000379c(param_1,&uStack_58c);
    fcn.000034c4(aiStack_588);
    fcn.0000379c(noname_0,&puStack_580);
    aiStack_588[1] = 0x578;
    uVar4 = (**puStack_580)(puStack_580,0xffd47658,0xffd457fc,0,aiStack_588 + 1,auStack_57c);
    cVar2 = fcn.000091da();
    iVar1 = aiStack_588[0];
    if (cVar2 != '\0') {
        do {
            iVar5 = uVar7 * 0x1f0;
            *(iVar5 + 0x38 + iVar1) = 0x100f100f;
            if (acStack_1cf[uVar7] == '\x01') {
                *(iVar5 + 0x38 + iVar1) = 0x100f100f;
                *(iVar5 + 0x3c + iVar1) = auStack_1c7[uVar7];
                *(iVar5 + 0x3d + iVar1) = auStack_1c3[uVar7];
                *(iVar5 + 0x40 + iVar1) = auStack_1b7[uVar7];
                *(iVar5 + 0x41 + iVar1) = auStack_1b3[uVar7];
                *(iVar5 + 0x3e + iVar1) = auStack_1bf[uVar7];
                *(iVar5 + 0x42 + iVar1) = auStack_1af[uVar7];
            }
            uVar6 = uVar7 + 1;
            uVar7 = uVar6;
            uVar3 = fcn.000091da();
        } while (uVar6 < uVar3);
    }
    return uVar4;
}


/* fcn.00008d38 @ 0x8d38 */

//WARNING: Removing unreachable block (ram,0x00008d6a)

int * __fastcall fcn.00008d38(int param_1)

{
    int iVar1;
    ulong uVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t extraout_ECX;
    int *piVar7;
    uint32_t uVar8;
    uint8_t uVar9;
    uint32_t uVar10;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    iVar1 = *(param_1 + 0x20);
    iVar4 = fcn.00008d14();
    uVar2 = rdmsr(0x17);
    uVar10 = ('\x01' << (uVar2 >> 0x32 & 7)) << 8;
    if (*(param_1 + 0x28) == 0x4856465f) {
        if (*(param_1 + 0x34) == 0) {
            uVar6 = *(param_1 + 0x30) + param_1;
        }
        else {
            iVar5 = *(param_1 + 0x34) + param_1;
            uVar6 = *(iVar5 + 0x10) + iVar5;
        }
        do {
            uVar6 = uVar6 + 7 & 0xfffffff8;
            if (param_1 + -1 + iVar1 <= uVar6) {
                return NULL;
            }
            uVar6 = *(uVar6 + 0x14);
            cVar3 = fcn.000036bb();
            if (cVar3 != '\0') {
                piVar7 = extraout_ECX + 0x18;
                while( true ) {
                    if (*piVar7 != 1) {
                        return NULL;
                    }
                    if ((piVar7[3] == iVar4) && ((*(piVar7 + 6) & uVar10 >> 8) != 0)) {
                        return piVar7;
                    }
                    iVar1 = piVar7[7];
                    if (iVar1 + 0x30U < piVar7[8]) {
                        if (0x13 < *(piVar7 + iVar1 + 0x30)) {
                            return NULL;
                        }
                        uVar10 = uVar10 & 0xffffff00;
                        if (*(piVar7 + iVar1 + 0x30) != 0) {
                            uVar8 = 0;
                            do {
                                if ((*(piVar7 + uVar8 * 0xc + 0x44 + iVar1) == iVar4) &&
                                   ((*(piVar7 + (uVar8 + 2) * 0xc + 0x30 + iVar1) & uVar10 >> 8) != 0)) {
                                    return piVar7;
                                }
                                uVar9 = uVar10 + 1;
                                uVar10 = CONCAT31(uVar10 >> 8,uVar9);
                                uVar8 = uVar9;
                            } while (uVar8 < *(piVar7 + iVar1 + 0x30));
                        }
                    }
                    if (0xfffc5fff < piVar7) {
                        return NULL;
                    }
                    if (uVar6 + extraout_ECX <= piVar7 + 0xe800) break;
                    piVar7 = piVar7 + 0xe800;
                }
                return NULL;
            }
            uVar6 = uVar6 + extraout_ECX;
        } while (extraout_ECX < uVar6);
    }
    return NULL;
}


/* fcn.00003556 @ 0x3556 */

int32_t __fastcall fcn.00003556(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.0000379c(param_1,&var_4h);
    return var_4h;
}


/* fcn.000089b2 @ 0x89b2 */

int __fastcall fcn.000089b2(int *param_1,int param_2)

{
    uint *puVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint uVar5;
    uint32_t uVar6;
    int16_t aiStack_d0 [2];
    uint32_t uStack_cc;
    uint *puStack_c8;
    uint32_t uStack_c4;
    int aiStack_c0 [47];
    
    puVar1 = *(*param_1 + 100);
    if (param_2 != 0) {
        iVar2 = fcn.000034c4(&uStack_cc);
        if (iVar2 < 0) {
            return iVar2;
        }
        *(uStack_cc + 0x1d) = 1;
    }
    *0xffd4781c = 0x12411d05;
    iVar2 = (**(*param_1 + 0x20))(param_1,0xffd4545c,0,0,&puStack_c8);
    if (-1 < iVar2) {
        uStack_cc = 0xb4;
        iVar2 = (**puStack_c8)(puStack_c8,0xffd47794,0xffd458bc,0,&uStack_cc,aiStack_c0);
        if (-1 < iVar2) {
            *0xffd4781c = aiStack_c0[0];
        }
        fcn.00008801();
        uVar6 = 0;
        do {
            uVar3 = *(uVar6 - 0x2ba624);
            if ((uVar3 & *(uVar6 - 0x2ba620)) == 0xffffffff) break;
            fcn.00008777(uVar3,*(uVar6 - 0x2ba620),&puStack_c8);
            if (((*0xffd4781c != 0) &&
                (iVar2 = (**puVar1)(param_1,puVar1,1,uVar3,*(uVar6 - 0x2ba620),aiStack_d0), iVar2 == 0)) &&
               (aiStack_d0[0] != -1)) {
                uVar3 = fcn.000087b8((((uStack_cc & 0xff) << 5 | uStack_c4 & 0x1f) << 3 | puStack_c8 & 7) << 0xc,0);
                (*puVar1[1])(param_1,puVar1,2,uVar3 & 0xffff | *(uVar6 - 0x2ba624),*(uVar6 - 0x2ba620),0xffd4781c);
            }
            uVar6 = uVar6 + 0x10;
        } while (uVar6 < 0x460);
        uVar6 = 0;
        do {
            uVar3 = *(uVar6 - 0x2ba584);
            if ((uVar3 & *(uVar6 - 0x2ba580)) == 0xffffffff) break;
            fcn.00008777(uVar3,*(uVar6 - 0x2ba580),&puStack_c8);
            if (((*0xffd4781c != 0) &&
                (iVar2 = (**puVar1)(param_1,puVar1,1,uVar3,*(uVar6 - 0x2ba580),aiStack_d0), uVar3 = uStack_cc,
                iVar2 == 0)) && (aiStack_d0[0] != -1)) {
                uVar4 = fcn.000087b8((((uStack_cc & 0xff) << 5 | uStack_c4 & 0x1f) << 3 | puStack_c8 & 7) << 0xc,0);
                if (((uVar3 != 0) || (uStack_c4 != 0x1f)) ||
                   ((puStack_c8 != 0x3 || (uVar5 = 0xffd47820, *0xffd47820 == 0)))) {
                    uVar5 = 0xffd4781c;
                }
                (*puVar1[1])(param_1,puVar1,2,uVar4 & 0xffff | *(uVar6 - 0x2ba584),*(uVar6 - 0x2ba580),uVar5);
            }
            uVar6 = uVar6 + 0x10;
        } while (uVar6 < 0x460);
        iVar2 = 0;
    }
    return iVar2;
}


/* fcn.00003193 @ 0x3193 */

uint __fastcall fcn.00003193(uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
    char cVar1;
    uint32_t uVar2;
    uint uVar3;
    int iVar4;
    
    uVar2 = fcn.00003338();
    if (param_1 < (uVar2 & 0xff)) {
        iVar4 = (param_1 >> 2) * 3;
        cVar1 = *(iVar4 + -0x2ba6fa);
        *param_2 = *(iVar4 + -0x2ba6fc);
        uVar2 = fcn.00009cc0();
        *param_3 = uVar2 >> ((param_1 - cVar1) * '\x04' & 0x1fU) & 7;
        uVar3 = 0;
    }
    else {
        uVar3 = 0x80000002;
    }
    return uVar3;
}


/* fcn.0000335c @ 0x335c */

uint32_t __fastcall fcn.0000335c(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000031f9(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0xe;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 10;
}


/* fcn.000031f9 @ 0x31f9 */

char fcn.000031f9(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd45917 == -1) {
        uVar1 = fcn.000031e8();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd45917 = cVar2;
    }
    return *0xffd45917;
}


/* fcn.00003380 @ 0x3380 */

uint32_t __fastcall fcn.00003380(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000031f9(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 10;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 4;
}


/* fcn.000020fa @ 0x20fa */

uint __fastcall fcn.000020fa(int param_1,int param_2,uint param_3,uint param_4,int *param_5)

{
    int *piVar1;
    uint32_t uVar2;
    uint uVar3;
    
    if (((param_1 == 0) || (param_5 == NULL)) || (param_2 == 0)) {
        uVar3 = 0x80000002;
    }
    else {
        uVar2 = 0;
        if (param_2 != 8) {
            do {
                piVar1 = uVar2 + param_1;
                if ((*piVar1 == 0x49435024) && (piVar1[1] == 0x41544144)) {
                    *param_5 = piVar1;
                    return 0;
                }
                uVar2 = uVar2 + 1;
            } while (uVar2 < param_2 - 8U);
        }
        uVar3 = 0x8000000e;
    }
    return uVar3;
}


/* fcn.00002eeb @ 0x2eeb */

uint __fastcall fcn.00002eeb(uint param_1,int16_t param_2,uint8_t param_3,uint32_t param_4)

{
    uint32_t uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    uint32_t uVar4;
    uint8_t uVar5;
    uint16_t uVar6;
    uint16_t uVar7;
    uint16_t uVar8;
    uint16_t uStack_30;
    int16_t aiStack_28 [4];
    int16_t aiStack_20 [16];
    
    aiStack_20[0xe] = 0;
    uVar6 = 0;
    aiStack_28[2] = 0;
    uVar7 = 0;
    aiStack_20[4] = 0x3f8;
    aiStack_20[5] = 0x2f8;
    uVar1 = param_4 & 0xf00;
    uStack_30 = param_4 & 0xf00;
    aiStack_20[6] = 0x220;
    aiStack_20[7] = 0x228;
    uVar4 = param_4 & 0xff;
    aiStack_20[8] = 0x238;
    aiStack_20[9] = 0x2e8;
    aiStack_20[10] = 0x338;
    aiStack_20[0xb] = 1000;
    aiStack_20[0xc] = 0x2f0;
    aiStack_20[0xd] = 0x2e0;
    aiStack_20[0] = 0x378;
    aiStack_20[1] = 0x278;
    aiStack_20[2] = 0x3bc;
    aiStack_20[3] = 0;
    aiStack_28[0] = 0x3f0;
    aiStack_28[1] = 0x370;
    uVar8 = 0xffff;
    if (uVar4 == 1) {
        iVar3 = 0x3f0;
        uVar5 = 0;
        do {
            if (iVar3 == param_2) break;
            uVar5 = uVar5 + 1;
            iVar3 = aiStack_28[uVar5];
        } while (iVar3 != 0);
        if (aiStack_28[uVar5] == 0) {
            return 0x80000003;
        }
        uVar8 = 0xefff;
        uVar7 = 8;
        uVar6 = uVar5 << 0xc;
    }
    else {
        if (uVar4 < 2) {
            return 0x80000003;
        }
        if (uVar4 < 6) {
            uVar7 = 0x400;
        }
        else {
            if (uVar4 == 6) {
                iVar3 = 0x3f8;
                if ((((param_2 != 0x3f8) && (param_4 = 1000, param_2 != 1000)) && (param_4 = 0x2f8, param_2 != 0x2f8))
                   && (param_4 = 0x2e8, param_2 != 0x2e8)) {
                    uVar5 = 0;
                    do {
                        if (iVar3 == param_2) break;
                        uVar5 = uVar5 + 1;
                        iVar3 = aiStack_20[uVar5 + 4];
                    } while (iVar3 != 0);
                    if (aiStack_20[uVar5 + 4] == 0) {
                        return 0x80000003;
                    }
                    if (param_3 == 0) {
                        uVar6 = uVar5;
                        uVar7 = 1;
                        uVar8 = 0xfff8;
                    }
                    else {
                        uVar8 = 0xff8f;
                        uVar7 = 2;
                        uVar6 = uVar5 << 4;
                    }
                    goto code_r0x000030b6;
                }
                uVar7 = 3;
                uVar6 = 0x70;
                uVar8 = 0xff88;
                uVar2 = 0x100;
            }
            else {
                if (uVar4 == 7) {
                    iVar3 = 0x378;
                    uVar5 = 0;
                    do {
                        if (iVar3 == param_2) break;
                        uVar5 = uVar5 + 1;
                        iVar3 = aiStack_20[uVar5];
                    } while (iVar3 != 0);
                    if (aiStack_20[uVar5] == 0) {
                        return 0x80000003;
                    }
                    uVar8 = 0xfcff;
                    uVar7 = 4;
                    uVar6 = uVar5 << 8;
                    goto code_r0x000030b6;
                }
                if (uVar4 == 8) {
                    return 0x80000003;
                }
                if (uVar4 != 0xff) {
                    return 0x80000003;
                }
                uVar2 = param_3 | uStack_30;
                uVar8 = 0xffff;
            }
            fcn.00002d65(uVar2,param_4);
        }
    }
code_r0x000030b6:
    fcn.00008e72();
    fcn.00008ecb();
    *0xfd882770 = *0xfd882770 & uVar8 | uVar6;
    uStack_30 = uStack_30 >> 8;
    if (((uStack_30 != 0) && (uStack_30 != 1)) && ((uStack_30 != 2 && (uStack_30 != 3)))) {
        return 0x80000003;
    }
    fcn.00008e72();
    if (uVar1 != 0) {
        fcn.00008e72();
        fcn.00008ecb();
    }
    fcn.00008ecb();
    *0xfd882774 = *0xfd882774 | uVar7;
    return 0;
}


/* fcn.000037c9 @ 0x37c9 */

void __fastcall fcn.000037c9(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x28))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.0000361f @ 0x361f */

void fcn.0000361f(void)

{
    int32_t var_4h;
    
    fcn.000037ee();
    fcn.000035ec();
    return;
}


/* fcn.000037ee @ 0x37ee */

void __fastcall fcn.000037ee(uint param_1)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x30))(*(stack0xfffffff2 + -4),param_1);
    return;
}


/* fcn.000035ec @ 0x35ec */

int fcn.000035ec(void)

{
    char cVar1;
    int iVar2;
    
    do {
        iVar2 = fcn.000035cb();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.000036bb();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00002384 @ 0x2384 */

void __fastcall fcn.00002384(int *param_1)

{
    int iVar1;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    var_1ch = 0x560bf58a;
    var_18h = 0x4d7e1e0d;
    var_14h = -0x7fd6c06b;
    var_10h = 0x31e061a2;
    iVar1 = (**(*param_1 + 0x20))(param_1,0xffd4545c,0,0,&var_ch);
    if (-1 < iVar1) {
        var_8h = 3;
        iVar1 = (**var_ch)(var_ch,0xffd47668,&var_1ch,0,&var_8h,&var_4h);
        if ((-1 < iVar1) && (var_4h != '\0')) {
            fcn.00002eeb(0,6);
        }
        iVar1 = (**var_ch)(var_ch,0xffd47680,&var_1ch,0,&var_8h,&var_4h);
        if ((-1 < iVar1) && (var_4h != '\0')) {
            fcn.00002eeb(1,6);
        }
        iVar1 = (**var_ch)(var_ch,0xffd47698,&var_1ch,0,&var_8h,&var_4h);
        if ((-1 < iVar1) && (var_4h != '\0')) {
            fcn.00002eeb(0,7);
        }
    }
    return;
}


/* fcn.00003338 @ 0x3338 */

uint32_t __fastcall fcn.00003338(uint param_1)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000031f9(param_1);
    uVar1 = uVar1 & 0xff;
    if (uVar1 != 3) {
        if (uVar1 == 4) {
            return 0x1c;
        }
        if (uVar1 - 5 != 0) {
            return uVar1 - 5 & 0xffffff00;
        }
    }
    return 0xc;
}


/* fcn.00001e26 @ 0x1e26 */

//WARNING: Removing unreachable block (ram,0x00001ee5)
//WARNING: Removing unreachable block (ram,0x00001f31)
//WARNING: Removing unreachable block (ram,0x00001f9b)
//WARNING: Removing unreachable block (ram,0x00001fd8)

void fcn.00001e26(uint32_t param_1,uint param_2,uint param_3,int param_4)

{
    uint32_t uVar1;
    int iStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    int iStack_8;
    
    uStack_10 = 0;
    uStack_c = 0;
    iStack_14 = 0;
    fcn.000034c4(&iStack_14);
    iStack_8 = iStack_14;
    if ((*(param_1 * 0x1ec + 0x47 + iStack_14) == '\0') && (*(param_1 + 0xff + param_4) != '\0')) {
        fcn.00003193(&uStack_c);
        uVar1 = (uStack_10 & 0x1f) << 3;
        *(((uStack_c & 7 | uVar1) << 0xc | 0x18) + 0xc0000000) = 0x10100;
        *0xc0100000 = 0x12345678;
        *(((param_1 & 7 | uVar1) << 0xc | 0x18) + 0xc0000000) = 0xff000000;
    }
    return;
}


/* fcn.00002cf1 @ 0x2cf1 */

uint __cdecl fcn.00002cf1(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000ae08 @ 0xae08 */

uint * fcn.0000ae08(uint *param_1,uchar param_2,uint32_t param_3)

{
    uint32_t uVar1;
    int iVar2;
    uint *puVar3;
    
    puVar3 = param_1;
    if (3 < param_3) {
        if ((param_1 & 3) != 0) {
            iVar2 = 4 - (param_1 & 3);
            param_3 = param_3 - iVar2;
            for (; iVar2 != 0; iVar2 = iVar2 + -1) {
                *puVar3 = param_2;
                puVar3 = puVar3 + 1;
            }
        }
        for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = CONCAT22(CONCAT11(param_2,param_2),CONCAT11(param_2,param_2));
            puVar3 = puVar3 + 1;
        }
        param_3 = param_3 & 3;
    }
    for (; param_3 != 0; param_3 = param_3 - 1) {
        *puVar3 = param_2;
        puVar3 = puVar3 + 1;
    }
    return param_1;
}


/* fcn.000038ad @ 0x38ad */

void __fastcall fcn.000038ad(uint param_1,uint param_2,uint param_3)

{
    int iVar1;
    code *pcVar2;
    int iVar3;
    
    iVar3 = 0;
    pcVar2 = 0xffd4424d;
    while (pcVar2 != NULL) {
        (*pcVar2)(param_1,param_2,param_3,1);
        iVar1 = iVar3 * 4;
        iVar3 = iVar3 + 1;
        pcVar2 = *(iVar1 + -0x2b8938);
    }
    return;
}


/* fcn.00002883 @ 0x2883 */

void __fastcall fcn.00002883(int *param_1,int param_2,int param_3,uint param_4)

{
    char cVar1;
    uint32_t uVar2;
    uint extraout_ECX;
    uint extraout_ECX_00;
    uint uVar3;
    uint32_t uVar4;
    char *pcVar5;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    uchar auStack_4 [4];
    
    uVar4 = 0;
    iStack_18 = 0;
    iStack_14 = 0;
    iStack_c = 0;
    iStack_8 = param_2;
    fcn.000034c4(&iStack_18);
    fcn.000034c4(&iStack_14);
    fcn.000034c4(&iStack_c);
    fcn.000037c9();
    fcn.00002384();
    (**(*param_1 + 0x20))(param_1,0xffd4551c,0,0,auStack_4);
    cVar1 = fcn.00003338();
    uVar3 = extraout_ECX;
    if (cVar1 != '\0') {
        pcVar5 = iStack_18 + 0x41;
        do {
            *pcVar5 = uVar4 + '\x04';
            if ((*(param_3 + 0xbbe + uVar4) == '\x01') && (*(uVar4 + 0xff + iStack_8) != '\0')) {
                fcn.00001e26(uVar4,param_4,uVar3,iStack_8);
            }
            uVar4 = uVar4 + 1;
            pcVar5 = pcVar5 + 0x1ec;
            uVar2 = fcn.00003338();
            uVar3 = extraout_ECX_00;
        } while (uVar4 < (uVar2 & 0xff));
    }
    fcn.000089b2(uVar3);
    (**(*param_1 + 0x24))(param_1,0xffd458f8);
    *(iStack_14 + 0x20) = *(iStack_14 + 0x20) & 0xfff1111f | 0x11110;
    *(iStack_14 + 0x2c) = 0;
    *(iStack_14 + 0x24) = *(iStack_14 + 0x24) & 0xfffffffe;
    if (((iStack_10 != 0x12) && (iStack_10 != 0x20)) && (uVar4 = fcn.00002cf1(0xfd0dc,0), (uVar4 >> 4 & 1) == 0)) {
        return;
    }
    *(iStack_c + 0x1c) = *(iStack_c + 0x1c) & 0xfffffffe;
    return;
}


/* fcn.00008bf9 @ 0x8bf9 */

void __fastcall fcn.00008bf9(int *param_1)

{
    int iVar1;
    uint *puVar2;
    uint8_t uStack_95;
    int16_t *piStack_94;
    uint *puStack_90;
    uint32_t uStack_8c;
    int iStack_88;
    uint uStack_84;
    uint auStack_80 [32];
    
    puStack_90 = NULL;
    iStack_88 = 0;
    iVar1 = fcn.000034c4(&iStack_88);
    if (-1 < iVar1) {
        fcn.0000a2b6(&uStack_95);
        if ((puStack_90 != NULL) && (uStack_95 != 0)) {
            uStack_8c = uStack_95;
            puVar2 = puStack_90;
            puStack_90 = auStack_80;
            do {
                iVar1 = *(puVar2 + 6) * 4;
                (**(*param_1 + 0x4c))(param_1,iVar1 + 8,&piStack_94);
                (**(*param_1 + 0x50))(piStack_94,puVar2,8);
                (**(*param_1 + 0x50))(piStack_94 + 4,*(puVar2 + 8),iVar1);
                if (*piStack_94 == -0x7f7a) {
                    *(piStack_94 + 0x14) = *(piStack_94 + 0x14) | 0x40;
                    *(piStack_94 + 0x1c) = *(piStack_94 + 0x1c) | 0x40;
                }
                puVar2 = puVar2 + 0xc;
                *puStack_90 = piStack_94;
                puStack_90 = puStack_90 + 1;
                uStack_8c = uStack_8c - 1;
            } while (uStack_8c != 0);
            (**(*param_1 + 0x4c))(param_1,uStack_95 << 2,&uStack_84);
            (**(*param_1 + 0x50))(uStack_84,auStack_80,uStack_95 << 2);
            *(iStack_88 + 0x24) = uStack_84;
            *(iStack_88 + 0x20) = uStack_95;
        }
    }
    return;
}


/* fcn.00002004 @ 0x2004 */

void __fastcall fcn.00002004(uint param_1,int param_2)

{
    uchar *puVar1;
    uint8_t uVar2;
    uint8_t uVar3;
    int iVar4;
    uint32_t *puVar5;
    uint32_t uVar6;
    int iVar7;
    uchar *puVar8;
    uint32_t uVar9;
    int iStack_8;
    uint32_t uStack_4;
    
    uVar9 = 0;
    iStack_8 = 0;
    iVar4 = fcn.000034c4(&iStack_8);
    if (iVar4 < 0) {
        return;
    }
    if (*(param_2 + 0x8c) != '\x01') {
        return;
    }
    uVar3 = *(param_2 + 0x8d);
    uVar2 = fcn.0000335c();
    if (uVar2 <= uVar3) {
        uVar3 = fcn.0000335c();
    }
    iVar4 = iStack_8;
    uVar6 = 0;
    uStack_4 = uVar3;
    if (uVar3 != 0) {
        puVar8 = iStack_8 + 0x2c;
        do {
            puVar1 = uVar6 + *(param_2 + 0x8f);
            uVar6 = uVar6 + 1;
            *puVar8 = *puVar1;
            puVar8 = puVar8 + 4;
        } while (uVar6 < uStack_4);
        if (0xf < uVar6) goto code_r0x0000209f;
    }
    puVar5 = uVar6 * 4 + 0x2c + iStack_8;
    iVar7 = 0x10 - uVar6;
    do {
        *puVar5 = *puVar5 | 0xff;
        puVar5 = puVar5 + 1;
        iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
code_r0x0000209f:
    uVar3 = *(param_2 + 0x8e);
    uVar2 = fcn.00003380();
    if (uVar2 <= uVar3) {
        uVar3 = fcn.00003380();
    }
    if (uVar3 != 0) {
        puVar8 = iVar4 + 0x6c;
        do {
            puVar1 = uVar9 + *(param_2 + 0x93);
            uVar9 = uVar9 + 1;
            *puVar8 = *puVar1;
            puVar8 = puVar8 + 4;
        } while (uVar9 < uVar3);
        if (9 < uVar9) {
            return;
        }
    }
    puVar5 = uVar9 * 4 + 0x6c + iVar4;
    iVar4 = 10 - uVar9;
    do {
        *puVar5 = *puVar5 | 0xff;
        puVar5 = puVar5 + 1;
        iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return;
}


/* fcn.00002143 @ 0x2143 */

void __fastcall fcn.00002143(int *param_1)

{
    uint8_t uVar1;
    uint32_t uVar2;
    char cVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    unkuint3 Var8;
    uint32_t uVar7;
    unkbyte3 Var9;
    uint8_t *puVar10;
    int iVar11;
    int32_t var_30h;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    uint32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    var_ch = 0x110010;
    var_14h = 0;
    fcn.000034c4(&var_14h);
    (**(*param_1 + 0x38))(param_1,0,&var_10h);
    iVar11 = 0;
    do {
        iVar5 = (**(*param_1 + 0x38))(param_1,iVar11,&var_10h);
        if (iVar5 < 0) {
            return;
        }
        var_8h = 0;
        while (iVar5 = (**(*param_1 + 0x3c))(param_1,0,var_10h,&var_8h), iVar5 != -0x7ffffff2) {
            cVar3 = fcn.000036bb();
            if (cVar3 != '\0') {
                var_28h = *(var_8h + 0x16);
                var_24h = 0;
                var_20h = var_8h + 0x30;
                iVar11 = fcn.00000455(&var_18h,&var_24h);
                if (iVar11 < 0) {
                    return;
                }
                iVar11 = (**(*param_1 + 0x4c))(param_1,var_18h,&var_1ch);
                if (iVar11 < 0) {
                    return;
                }
                iVar11 = (**(*param_1 + 0x48))(param_1,4,((var_24h & 0xfffU) != 0) + (var_24h >> 0xc),&var_30h);
                if (iVar11 < 0) {
                    return;
                }
                iVar11 = fcn.0000047f(var_1ch,var_30h);
                if (iVar11 < 0) {
                    return;
                }
                fcn.000020fa(var_30h,var_30h,&var_24h);
                uVar7 = 0;
                uVar2 = *(var_24h + 0x18);
                var_1h = *(var_14h + 0x1c);
                if (uVar2 == 0) {
                    return;
                }
                uVar6 = 0;
                do {
                    cVar3 = uVar7 >> 8;
                    if (var_1h != 0) {
                        iVar11 = uVar6 * 0x159;
                        puVar10 = var_14h + 0x22;
                        var_20h = var_1h;
                        do {
                            uVar4 = *(iVar11 + 0x29 + var_24h);
                            if (puVar10[-2] == uVar4) {
                                uVar1 = *(iVar11 + 0x2a + var_24h);
                                Var8 = uVar7 >> 8;
                                uVar7 = CONCAT31(Var8,uVar1);
                                if (puVar10[-1] == uVar1) {
                                    uVar6 = uVar4 << 8;
                                    do {
                                        iVar5 = (uVar6 & 0xff) * 2;
                                        if ((*(&var_ch + iVar5) == uVar6 >> 8) && (*(&var_ch + iVar5 + 1) == uVar1))
                                        goto code_r0x0000235e;
                                        uVar4 = uVar6 + 1;
                                        uVar6 = CONCAT31(uVar6 >> 8,uVar4);
                                    } while (uVar4 < 2);
                                    uVar7 = Var8 << 8;
                                    do {
                                        Var9 = uVar7 >> 8;
                                        if (*(iVar11 + (uVar7 & 0xff) * 2 + 0x49 + var_24h) != '\0') {
                                            uVar6 = uVar7 & 0xff;
                                            if ((uVar6 + 1 != *puVar10) ||
                                               (*(iVar11 + uVar6 * 2 + 0x49 + var_24h) != puVar10[1])) {
                                                uVar4 = uVar7 + 1;
                                                uVar7 = CONCAT31(Var9,uVar4);
                                                *puVar10 = uVar4;
                                                puVar10[1] = *(iVar11 + uVar6 * 2 + 0x49 + var_24h);
                                            }
                                            break;
                                        }
                                        uVar4 = uVar7 + 1;
                                        uVar7 = CONCAT31(Var9,uVar4);
                                    } while (uVar4 < 4);
                                }
                            }
code_r0x0000235e:
                            cVar3 = uVar7 >> 8;
                            puVar10 = puVar10 + 4;
                            var_20h = var_20h + -1;
                        } while (var_20h != 0);
                    }
                    uVar6 = cVar3 + 1;
                    uVar7 = uVar6 << 8;
                    if (uVar2 <= uVar6) {
                        return;
                    }
                } while( true );
            }
        }
        iVar11 = iVar11 + 1;
    } while( true );
}


/* fcn.00002564 @ 0x2564 */

void __cdecl fcn.00002564(int32_t arg_8h)

{
    uint8_t uVar1;
    int iVar2;
    int iVar3;
    ushort uVar4;
    int iVar5;
    int *in_ECX;
    int in_EDX;
    uint32_t uVar6;
    uint32_t *puVar7;
    uint8_t *puVar8;
    uint uVar9;
    int32_t var_a8h;
    int16_t var_a4h;
    int32_t var_a0h;
    int32_t var_9ch;
    int32_t var_98h;
    int16_t var_94h;
    int32_t var_90h;
    int32_t var_8ch;
    int32_t var_88h;
    int16_t var_84h;
    int32_t var_80h;
    int32_t var_7ch;
    int32_t var_78h;
    int16_t var_74h;
    int32_t var_70h;
    int32_t var_6ch;
    int32_t var_68h;
    int16_t var_64h;
    int32_t var_60h;
    int32_t var_5ch;
    int32_t var_58h;
    int32_t var_50h;
    int32_t var_4ch;
    int32_t var_48h;
    int32_t var_44h;
    int32_t var_40h;
    int32_t var_3ch;
    int32_t var_38h;
    int32_t var_34h;
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_20h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    uint32_t var_8h;
    int8_t var_1h;
    
    var_a4h = 1;
    var_a0h = 0x252000;
    var_9ch = 0xdae000;
    var_98h = 0;
    var_94h = 0;
    var_90h = 0;
    var_8ch = 0;
    var_88h = 0;
    var_84h = 0;
    var_80h = 0;
    var_7ch = 0;
    var_78h = 0;
    var_74h = 0;
    var_70h = 0;
    var_6ch = 0;
    var_68h = 0;
    var_64h = 0;
    var_60h = 0;
    var_5ch = 0;
    fcn.000037c9();
    var_1ch = 0;
    if (((((*(in_EDX + 0x73d) != '\0') && (var_8h != 0x12)) && (var_8h != 0x20)) &&
        (((*0xc00fd0dc & *0xc00f80dc & 0x10) == 0 && (iVar5 = fcn.000034c4(&var_1ch), -1 < iVar5)))) &&
       (iVar5 = (**(*in_ECX + 0x20))(), -1 < iVar5)) {
        puVar8 = &var_a4h;
        puVar7 = var_1ch + 0x1c;
        var_8h = 5;
        do {
            *puVar7 = *puVar7 & 0xfffffffc;
            puVar7[1] = 0;
            var_1h = *puVar8;
            if (((var_1h != 0) || (puVar8[1] != 0)) &&
               ((*(puVar8 + 8) != 0 &&
                (((*(puVar8 + 8) & 0xfff) == 0 && (uVar6 = *(puVar8 + 4), (uVar6 & 0xfff) == 0)))))) {
                iVar2 = *(puVar8 + -4);
                if (iVar2 == 0) {
                    var_44h = 0;
                    var_48h = uVar6;
                    *puVar7 = (puVar8[1] & 1) * 2 | var_1h & 1 | *puVar7 & 0xfffffffc;
                    *(puVar7 + 6) = uVar6 >> 0xc;
                    var_50h = *(puVar8 + 8) + -1 + *(puVar8 + 4);
                    var_4ch = 0;
                    *(puVar7 + 1) = var_50h >> 0xc;
                }
                else {
                    if (iVar2 == 1) {
                        uVar9 = 0;
code_r0x0000270e:
                        iVar5 = (**(var_10h + 0x20))(var_10h,uVar9,&var_ch,&var_14h);
                        uVar6 = *(puVar8 + 4);
                    }
                    else {
                        if (iVar2 == 2) {
                            uVar9 = 1;
                            goto code_r0x0000270e;
                        }
                        if (iVar2 == 3) {
                            uVar9 = 2;
                            goto code_r0x0000270e;
                        }
                        if (iVar2 == 4) {
                            uVar9 = 3;
                            goto code_r0x0000270e;
                        }
                        if (iVar2 == 5) {
                            uVar9 = 4;
                            goto code_r0x0000270e;
                        }
                    }
                    if (-1 < iVar5) {
                        if (*(puVar8 + -4) == 2) {
                            var_1ch = 0;
                            var_20h = var_ch + uVar6;
                            iVar2 = *(puVar8 + 4);
                            iVar3 = *(puVar8 + 8);
                            *(puVar7 + 6) = var_ch + uVar6 >> 0xc;
                            var_30h = var_ch + -1 + iVar2 + iVar3;
                            var_2ch = 0;
                            uVar4 = var_30h >> 0xc;
                        }
                        else {
                            var_34h = 0;
                            var_38h = var_ch;
                            *(puVar7 + 6) = var_ch >> 0xc;
                            var_3ch = 0;
                            var_40h = var_14h + var_ch;
                            uVar4 = var_14h + var_ch >> 0xc;
                        }
                        uVar1 = puVar8[1];
                        *(puVar7 + 1) = uVar4;
                        *puVar7 = (uVar1 & 1) * 2 | var_1h & 1 | *puVar7 & 0xfffffffc;
                    }
                }
            }
            puVar7 = puVar7 + 2;
            puVar8 = puVar8 + 0x10;
            var_8h = var_8h - 1;
        } while (var_8h != 0);
        var_1ch = &var_58h;
        InterruptDescriptorTableRegister();
        (**(**(stack0xffffffa6 + -4) + 0x24))(*(stack0xffffffa6 + -4),0xffd458dc);
    }
    return;
}


/* fcn.00002c1a @ 0x2c1a */

ushort __cdecl fcn.00002c1a(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00002c55 @ 0x2c55 */

uint __cdecl fcn.00002c55(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.00008f29 @ 0x8f29 */

ulong __fastcall fcn.00008f29(uint32_t param_1)

{
    uint uVar1;
    uint uVar2;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar2 = in(0xcfc);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,uVar2);
}


/* fcn.00008f74 @ 0x8f74 */

ulong __fastcall fcn.00008f74(uint32_t param_1,uint param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out(0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,param_2);
}


/* fcn.00002d65 @ 0x2d65 */

uint __fastcall fcn.00002d65(uint param_1,uint16_t param_2,uint32_t param_3)

{
    int16_t iVar1;
    uint32_t uVar2;
    uint16_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint16_t uVar6;
    uint8_t uVar7;
    uint16_t uVar8;
    uint16_t uVar9;
    uint8_t uStack_11;
    
    uStack_11 = 0;
    if (param_3 == 0x100) {
        param_3 = 0xff;
    }
    uVar8 = param_3;
    uVar2 = param_3 >> 8;
    uVar5 = param_3 & 0xf00;
    if (param_3 == 0) {
        uVar4 = 0x80000002;
    }
    else {
        uVar6 = 4;
        param_3 = param_3 & 0xff;
        if (uVar8 < 4) {
            param_3 = 0;
            uVar8 = 4;
        }
        if (uVar5 == 0) {
            iVar1 = 0x2730;
        }
        else {
            if ((uVar2 & 0xf) != 1) {
                return 0x80000003;
            }
            iVar1 = 0x27bc;
            uVar6 = 1;
        }
        uVar9 = 0;
        do {
            uVar3 = fcn.00008f29();
            if (((uVar3 & 1) == 0) || ((uVar3 & 0xfffc) == param_2)) break;
            uVar9 = uVar9 + 1;
        } while (uVar9 < uVar6);
        uVar7 = 0;
        if (uVar9 == uVar6) {
            uVar4 = 0x80000009;
        }
        else {
            uVar5 = uVar8;
            while ((param_3 & 1) == 0) {
                uVar7 = uVar7 + 1;
                uVar5 = uVar5 >> 1;
                param_3 = uVar5;
            }
            for (; uVar8 != 0; uVar8 = uVar8 >> 1) {
                uStack_11 = uStack_11 + 1;
            }
            if (uVar7 == uStack_11 - 1) {
                uStack_11 = uStack_11 - 1;
            }
            uVar5 = (1 << (uStack_11 & 0x1f)) - 1;
            fcn.00008f74();
            *(iVar1 + uVar9 * 4 | 0xfd880000) = ~uVar5 & 0xffff & param_2 | (uVar5 & 0xfffffffc) << 0x10 | 1;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.00008e72 @ 0x8e72 */

ulong __fastcall fcn.00008e72(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.00008ecb @ 0x8ecb */

ulong __fastcall fcn.00008ecb(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.00009cc0 @ 0x9cc0 */

uint __fastcall fcn.00009cc0(uint32_t param_1,uint32_t param_2)

{
    return *(((param_1 & 0xff | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.000031e8 @ 0x31e8 */

void fcn.000031e8(void)

{
    fcn.00002c1a(0xf8002,0);
    return;
}


/* fcn.00002be3 @ 0x2be3 */

uint __cdecl fcn.00002be3(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


/* fcn.000032bb @ 0x32bb */

int __fastcall fcn.000032bb(uint param_1)

{
    uint uVar1;
    
    uVar1 = fcn.000031e8(param_1);
    return CONCAT31(uVar1 >> 8,(uVar1 & 0xffe0) == 0x7a00) * 2 + 7;
}


/* fcn.00003288 @ 0x3288 */

bool __fastcall fcn.00003288(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000031f9(param_1);
    return cVar1 == '\x04';
}


/* fcn.00008fc3 @ 0x8fc3 */

//WARNING: Control flow encountered bad instruction data

uchar __fastcall fcn.00008fc3(int param_1,uint16_t param_2)

{
    uint32_t uVar1;
    uchar uVar2;
    
    uVar2 = 4;
    if (param_1 == 0x906a0) {
        switch(param_2) {
        case 0x4601:
        case 0x4602:
        case 0x4603:
        case 0x4604:
        case 0x4605:
        case 0x4606:
        case 0x4607:
        case 0x4608:
        case 0x4609:
        case 0x460a:
        case 0x460b:
        case 0x460c:
        case 0x460d:
        case 0x460e:
        case 0x460f:
        case 0x4610:
        case 0x4611:
        case 0x4612:
        case 0x4613:
        case 0x4614:
        case 0x4615:
        case 0x4616:
        case 0x4617:
        case 0x4618:
        case 0x4619:
        case 0x461a:
        case 0x461b:
        case 0x461c:
        case 0x461d:
        case 0x461e:
        case 0x461f:
        case 0x4620:
        case 0x4621:
        case 0x4622:
        case 0x4623:
        case 0x4624:
        case 0x4625:
        case 0x4626:
        case 0x4627:
        case 0x4628:
        case 0x4629:
        case 0x462a:
        case 0x462b:
        case 0x462c:
        case 0x462d:
        case 0x462e:
        case 0x462f:
        case 0x4630:
        case 0x4631:
        case 0x4632:
        case 0x4633:
        case 0x4634:
        case 0x4635:
        case 0x4636:
        case 0x4637:
        case 0x4638:
        case 0x4639:
        case 0x463a:
        case 0x463b:
        case 0x463c:
        case 0x463d:
        case 0x463e:
        case 0x463f:
        case 0x4640:
        case 0x4641:
        case 0x4642:
        case 0x4643:
        case 0x4644:
        case 0x4645:
        case 0x4646:
        case 0x4647:
        case 0x4648:
        case 0x4649:
        case 0x464a:
        case 0x464b:
        case 0x464c:
        case 0x464d:
        case 0x464e:
        case 17999:
        case 18000:
        case 0x4651:
        case 0x4652:
        case 0x4653:
        case 0x4654:
        case 0x4655:
        case 0x4656:
        case 0x4657:
        case 0x4658:
        case 0x4659:
        case 0x465a:
        case 0x465b:
        case 0x465c:
        case 0x465d:
        case 0x465e:
        case 0x465f:
        case 0x4660:
        case 0x4661:
    //WARNING: Bad instruction - Truncating control flow here
            halt_baddata();
        }
    }
    else if (param_1 == 0xb06a0) {
        uVar1 = param_2;
        if ((0xa705 < uVar1) && ((uVar1 < 0xa70c || ((0xa714 < uVar1 && ((uVar1 < 0xa717 || (uVar1 - 0xa71b < 2))))))))
        {
            uVar2 = 0;
        }
    }
    else if ((param_1 == 0xb06e0) &&
            ((param_2 == 0x4614 ||
             ((0x4616 < param_2 && ((param_2 < 0x4619 || ((0x461a < param_2 && (param_2 < 0x461d)))))))))) {
        uVar2 = 2;
    }
    return uVar2;
}


/* fcn.000091c0 @ 0x91c0 */

bool fcn.000091c0(void)

{
    char cVar1;
    
    cVar1 = fcn.00002be3(0xfc,0);
    return cVar1 == '\x04';
}


/* fcn.000035cb @ 0x35cb */

int16_t * __fastcall fcn.000035cb(uint param_1,int16_t *param_2)

{
    while( true ) {
        if (*param_2 == -1) {
            return NULL;
        }
        if (*param_2 == 4) break;
        param_2 = param_2 + param_2[1];
    }
    return param_2;
}


/* fcn.00003813 @ 0x3813 */

void __cdecl fcn.00003813(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x34))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.0000363d @ 0x363d */

int32_t fcn.0000363d(void)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.00003813(&var_4h);
    if (iVar1 < 0) {
        var_4h = 0;
    }
    return var_4h;
}


/* fcn.000036a2 @ 0x36a2 */

uint * __fastcall fcn.000036a2(uint *param_1,uint *param_2)

{
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    return param_1;
}


/* fcn.0000365a @ 0x365a */

int fcn.0000365a(void)

{
    int iVar1;
    
    iVar1 = fcn.0000363d();
    if (iVar1 != 0) {
        fcn.000036a2();
        iVar1 = iVar1 + 0x18;
    }
    return iVar1;
}


/* fcn.0000383e @ 0x383e */

void __cdecl fcn.0000383e(int32_t arg_8h)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x48))(*(stack0xfffffff2 + -4),4);
    return;
}


/* fcn.000038da @ 0x38da */

uint __fastcall fcn.000038da(uint *param_1)

{
    char cVar1;
    int iVar2;
    int *piVar3;
    uint uVar4;
    int *piVar5;
    
    fcn.000037ee();
    iVar2 = fcn.000035cb();
    do {
        if (iVar2 == 0) {
            piVar3 = fcn.0000365a();
            if (piVar3 == NULL) {
                *param_1 = 0;
                uVar4 = 0x80000009;
            }
            else {
                piVar3[1] = 0;
                piVar5 = piVar3 + 5;
                *piVar3 = 0x49484550;
code_r0x00003953:
                piVar3[2] = piVar5;
                piVar3[3] = piVar5 + 0x40;
                piVar3[4] = piVar5 + 0x50;
code_r0x00003964:
                uVar4 = 0;
                *param_1 = piVar3;
            }
            return uVar4;
        }
        cVar1 = fcn.000036bb();
        if ((cVar1 != '\0') && (piVar3 = iVar2 + 0x18, *piVar3 == 0x49484550)) {
            piVar5 = iVar2 + 0x2c;
            if (*(iVar2 + 0x20) != piVar5) goto code_r0x00003953;
            goto code_r0x00003964;
        }
        iVar2 = fcn.000035cb();
    } while( true );
}


/* fcn.0000367e @ 0x367e */

void fcn.0000367e(void)

{
    int iVar1;
    
    iVar1 = fcn.0000365a();
    if (iVar1 == 0) {
        return;
    }
    fcn.000036df(0x10);
    return;
}


/* fcn.00003a07 @ 0x3a07 */

void fcn.00003a07(int param_1)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iStack_4;
    
    iVar3 = fcn.000034c4(&iStack_4);
    if (-1 < iVar3) {
        uVar5 = 0;
        *(iStack_4 + 0x20) = *(param_1 + 0xbc);
        *(iStack_4 + 0x37f4) = *(param_1 + 0xbd);
        cVar1 = fcn.00003338();
        if (cVar1 != '\0') {
            do {
                if (*(uVar5 + 0x3e3 + param_1) != '\0') {
                    iVar3 = uVar5 * 0x1ec;
                    *(iVar3 + 0x48 + iStack_4) = 0x10031003;
                    *(iVar3 + 0x4c + iStack_4) = *(uVar5 + 0x41b + param_1);
                    *(iVar3 + 0x4d + iStack_4) = *(uVar5 + 0x437 + param_1);
                    *(iVar3 + 0x50 + iStack_4) = *(uVar5 + 0x453 + param_1);
                    *(iVar3 + 0x51 + iStack_4) = *(uVar5 + 0x46f + param_1);
                    *(iVar3 + 0x4e + iStack_4) = *(param_1 + 0x48b + uVar5 * 2);
                    *(iVar3 + 0x52 + iStack_4) = *(param_1 + 0x4c3 + uVar5 * 2);
                }
                uVar4 = uVar5 + 1;
                uVar5 = uVar4;
                uVar2 = fcn.00003338();
            } while (uVar4 < uVar2);
        }
    }
    return;
}


/* fcn.00003ac0 @ 0x3ac0 */

void __cdecl fcn.00003ac0(int32_t arg_8h)

{
    int iVar1;
    int32_t var_4h;
    
    iVar1 = fcn.000034c4(&var_4h);
    if (-1 < iVar1) {
        *(var_4h + 0x24) = -(*(arg_8h + 0x10) != '\x01') & 0x20 | *(var_4h + 0x24) & 0xffffffdf;
        *(var_4h + 0x30) =
             ((((((*(arg_8h + 0x1a) * 2 | *(arg_8h + 0x19)) * 2 | *(arg_8h + 0x18)) * 2 | *(arg_8h + 0x17)) * 2 |
               *(arg_8h + 0x16)) * 2 | *(arg_8h + 0x15)) * 2 | *(arg_8h + 0x14)) * 2 | *(arg_8h + 0x13);
    }
    return;
}


/* fcn.000091da @ 0x91da */

uint __fastcall fcn.000091da(uint param_1)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.000033e5(param_1);
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.00009df1 @ 0x9df1 */

uchar fcn.00009df1(void)

{
    uchar uVar1;
    int8_t var_1h;
    
    out(0x72,0x72);
    uVar1 = in(0x73);
    return uVar1;
}


/* fcn.00009e1b @ 0x9e1b */

void fcn.00009e1b(void)

{
    out(0x72,0x72);
    out(0x73,1);
    return;
}


/* fcn.0000439d @ 0x439d */

//WARNING: Control flow encountered bad instruction data

uint __fastcall fcn.0000439d(uchar param_1)

{
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return 0;
    }
}


/* fcn.00003277 @ 0x3277 */

bool __fastcall fcn.00003277(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000031f9(param_1);
    return cVar1 == '\x05';
}


/* fcn.000032f9 @ 0x32f9 */

bool __fastcall fcn.000032f9(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000031f9(param_1);
    return cVar1 == '\x03';
}


/* fcn.0000a265 @ 0xa265 */

uint fcn.0000a265(void)

{
    char cVar1;
    int16_t iVar2;
    uint32_t uVar3;
    uint extraout_var;
    
    iVar2 = fcn.00002c1a(0xa3000,0);
    if (iVar2 == -1) {
        cVar1 = fcn.0000330a(extraout_var);
        if (cVar1 == '\0') {
            fcn.000032dd();
        }
        uVar3 = fcn.0000a7bd();
        if ((uVar3 & 0x800) != 0) {
            return 0;
        }
    }
    return 1;
}


/* fcn.00003299 @ 0x3299 */

bool __fastcall fcn.00003299(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000032bb(param_1);
    return cVar1 == '\a';
}


/* fcn.000032aa @ 0x32aa */

bool __fastcall fcn.000032aa(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000032bb(param_1);
    return cVar1 == '\t';
}


/* fcn.000032dd @ 0x32dd */

uint __fastcall fcn.000032dd(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000031f9(param_1);
    if (cVar1 != '\x01') {
        cVar1 = fcn.000031f9(param_1);
        if (cVar1 != '\x04') {
            return 0;
        }
    }
    return 1;
}


/* fcn.00004646 @ 0x4646 */

void __fastcall fcn.00004646(int param_1)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint8_t *puVar6;
    uint32_t uVar7;
    
    iVar3 = fcn.0000353a();
    puVar4 = (**(iVar3 + 0xc))(0x12e);
    if (puVar4 != NULL) {
        fcn.0000335c();
        uVar2 = *puVar4;
        uVar1 = fcn.0000335c();
        if (uVar1 < uVar2) {
            uVar2 = fcn.0000335c();
        }
        if (uVar2 != 0) {
            puVar6 = param_1 + 0x2c;
            uVar7 = uVar2;
            puVar5 = puVar4 + 1;
            do {
                if ((*puVar5 < 0x10) || (*puVar5 == 0xff)) {
                    *puVar6 = (puVar5 + (-1 - puVar4))[puVar4 + 1];
                }
                puVar6 = puVar6 + 4;
                puVar5 = puVar5 + 1;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
        iVar3 = fcn.0000353a();
        puVar4 = (**(iVar3 + 0xc))(0x130);
        if (puVar4 != NULL) {
            fcn.00003380();
            uVar2 = *puVar4;
            uVar1 = fcn.00003380();
            if (uVar1 < uVar2) {
                uVar2 = fcn.00003380();
            }
            if (uVar2 != 0) {
                puVar5 = param_1 + 0x6c;
                uVar7 = uVar2;
                puVar6 = puVar4 + 1;
                do {
                    if ((*puVar6 < 0x10) || (*puVar6 == 0xff)) {
                        *puVar5 = (puVar6 + (-1 - puVar4))[puVar4 + 1];
                    }
                    puVar5 = puVar5 + 4;
                    puVar6 = puVar6 + 1;
                    uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
            }
        }
    }
    return;
}


/* fcn.00003256 @ 0x3256 */

int __fastcall fcn.00003256(uint param_1)

{
    uint uVar1;
    unkuint3 Var2;
    
    uVar1 = fcn.000031e8(param_1);
    Var2 = uVar1 >> 8 & 0xff;
    if ((uVar1 != 0x5186) && (uVar1 != 0x5187)) {
        return Var2 << 8;
    }
    return CONCAT31(Var2,1);
}


/* fcn.0000330a @ 0x330a */

uint __fastcall fcn.0000330a(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.000031f9(param_1);
    if (cVar1 != '\x02') {
        cVar1 = fcn.000031f9(param_1);
        if (cVar1 != '\x05') {
            cVar1 = fcn.000031f9(param_1);
            if (cVar1 != '\x06') {
                cVar1 = fcn.000031f9(param_1);
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00002bcd @ 0x2bcd */

uint32_t fcn.00002bcd(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00002cf1(0xfd010,0);
    return uVar1 & 0xfffff000;
}


/* fcn.00009103 @ 0x9103 */

uint8_t __fastcall fcn.00009103(uint param_1)

{
    char cVar1;
    
    cVar1 = fcn.0000330a(param_1);
    if (cVar1 != '\0') {
        return 2;
    }
    cVar1 = fcn.000032dd();
    if (cVar1 != '\0') {
        return 8;
    }
    cVar1 = fcn.00003288();
    return -(cVar1 != '\0') & 8;
}


/* fcn.00003237 @ 0x3237 */

void fcn.00003237(void)

{
    if (*0xffd45916 == -1) {
        *0xffd45916 = fcn.00002be3(0xf8008,0);
    }
    return;
}


/* fcn.00005e5e @ 0x5e5e */

void __cdecl fcn.00005e5e(int32_t arg_8h)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.000034c4(&var_4h);
    if (-1 < iVar1) {
        *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(arg_8h + 0x12) ^ *(var_4h + 0x1c)) & 1;
        uVar2 = (*(arg_8h + 0x76f) * 2 ^ *(var_4h + 0x1c)) & 2 ^ *(var_4h + 0x1c);
        *(var_4h + 0x1c) = uVar2;
        *(var_4h + 0x1c) = (*(arg_8h + 0x78a) << 2 ^ uVar2) & 4 ^ uVar2;
    }
    return;
}


/* fcn.000055b1 @ 0x55b1 */

void __cdecl fcn.000055b1(int32_t arg_8h)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    iVar2 = fcn.000034c4(&var_4h);
    if (-1 < iVar2) {
        cVar1 = fcn.00003256();
        if (((cVar1 == '\0') && ((~*0xfe001e44 & 1) != 0)) && (iVar2 = fcn.00002bcd(), *(iVar2 + 0x60) != 0x7fff)) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(arg_8h + 9) ^ *(var_4h + 0x1c)) & 1;
            return;
        }
        *(var_4h + 0x1c) = *(var_4h + 0x1c) & 0xfffffffe;
    }
    return;
}


/* fcn.00005b3c @ 0x5b3c */

void fcn.00005b3c(int param_1)

{
    uint8_t uVar1;
    char cVar2;
    uchar uVar3;
    uint32_t uVar4;
    uint32_t *puVar5;
    int iVar6;
    int iVar7;
    uint8_t *puVar8;
    uint16_t *puStack_28;
    uint32_t *puStack_24;
    int iStack_20;
    uint32_t uStack_1c;
    int iStack_18;
    int iStack_14;
    int iStack_10;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    
    fcn.000034c4(&iStack_18);
    iVar6 = iStack_18;
    *(iStack_18 + 0x1c) = *(param_1 + 0x48);
    uVar1 = fcn.00009103();
    *(iVar6 + 0x24) = *(param_1 + 0x49);
    *(iVar6 + 0x1f) = 1;
    if (uVar1 != 0) {
        puStack_28 = param_1 + 0xa4;
        puStack_24 = 0xffd4773c;
        puVar5 = iVar6 + 0x28;
        puVar8 = param_1 + 0x62;
        iStack_14 = param_1 - puVar8;
        iStack_20 = 0;
        iStack_10 = param_1 - puVar8;
        iStack_4 = param_1 - puVar8;
        iStack_c = param_1 - puVar8;
        iVar6 = param_1 - puVar8;
        iStack_8 = param_1 - puVar8;
        uStack_1c = uVar1;
        do {
            if (*(param_1 + 0x93) == '\0') {
                *puVar5 = *puVar5 ^ (*(iStack_20 + 0x4a + param_1) ^ *puVar5) & 1;
            }
            else {
                *puVar5 = *puVar5 | 1;
            }
            *puVar5 = *puVar5 ^ (puVar8[iVar6 + 0x52] * 2 ^ *puVar5) & 2;
            uVar4 = (*puVar8 << 4 ^ *puVar5) & 0x10 ^ *puVar5;
            *puVar5 = uVar4;
            uVar4 = (puVar8[iStack_4 + 0x6a] << 3 ^ uVar4) & 8 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar8[iStack_14 + 0x94] & 1 | 0x20000) << 6 | uVar4 & 0xf8ffffbf;
            *puVar5 = uVar4;
            uVar4 = (puVar8[iStack_10 + 0x9c] << 7 ^ uVar4) & 0x80 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (puVar8[iStack_c + 0xb4] << 8 ^ uVar4) & 0xf00 ^ uVar4;
            *puVar5 = uVar4;
            uVar4 = (*puStack_28 << 0xc ^ uVar4) & 0x3ff000 ^ uVar4;
            *puVar5 = uVar4;
            *puVar5 = (puVar8[iStack_8 + 0x72] << 5 ^ uVar4) & 0x20 ^ uVar4;
            cVar2 = fcn.00003277();
            if ((cVar2 != '\0') || (cVar2 = fcn.000032f9(), cVar2 != '\0')) {
                puVar5[1] = *puStack_24;
            }
            puStack_24 = puStack_24 + 1;
            puStack_28 = puStack_28 + 1;
            iStack_20 = iStack_20 + 1;
            puVar8 = puVar8 + 1;
            puVar5 = puVar5 + 2;
            uStack_1c = uStack_1c - 1;
        } while (uStack_1c != 0);
        iVar6 = iStack_18;
    }
    iVar7 = 0;
    uVar4 = uVar1;
    cVar2 = fcn.000031f9();
    if ((cVar2 == '\x02') && (uVar1 != 0)) {
        puVar5 = iVar6 + 0x28;
        do {
            if (*(param_1 + 0x52 + iVar7) != '\0') {
                *puVar5 = *puVar5 ^ (*(param_1 + 0x5a + iVar7) << 2 ^ *puVar5) & 4;
            }
            iVar7 = iVar7 + 1;
            puVar5 = puVar5 + 2;
            uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
    }
    iVar7 = fcn.0000353a();
    uVar3 = (**(iVar7 + 0x18))(0x112);
    *(iVar6 + 0x21) = uVar3;
    *(iVar6 + 0x1e) = *(param_1 + 0x92);
    *(iVar6 + 0x68) = *(iVar6 + 0x68) ^ (*(param_1 + 0x727) << 0x16 ^ *(iVar6 + 0x68)) & 0x400000;
    uVar4 = (*(param_1 + 0x733) << 0x15 ^ *(iVar6 + 0x68)) & 0x200000 ^ *(iVar6 + 0x68);
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x732) << 0x13 ^ uVar4) & 0x180000 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x731) << 0xe ^ uVar4) & 0xc000 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x730) << 0xc ^ uVar4) & 0x3000 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x72f) << 10 ^ uVar4) & 0xc00 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x72e) << 8 ^ uVar4) & 0x300 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x72d) << 0x12 ^ uVar4) & 0x40000 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x72c) << 0x10 ^ uVar4) & 0x30000 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x72b) << 6 ^ uVar4) & 0xc0 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x72a) << 4 ^ uVar4) & 0x30 ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    uVar4 = (*(param_1 + 0x729) << 2 ^ uVar4) & 0xc ^ uVar4;
    *(iVar6 + 0x68) = uVar4;
    *(iVar6 + 0x68) = (*(param_1 + 0x728) ^ uVar4) & 3 ^ uVar4;
    return;
}


/* fcn.0000526c @ 0x526c */

void __cdecl fcn.0000526c(int32_t arg_8h)

{
    int iVar1;
    uint *puVar2;
    uint *puVar3;
    uchar *puVar4;
    int32_t var_4h;
    
    iVar1 = fcn.000034c4(&var_4h);
    if (-1 < iVar1) {
        iVar1 = 2;
        *(var_4h + 0x1c) = *(arg_8h + 0x518);
        *(var_4h + 0x24) = *(arg_8h + 0x51a);
        *(var_4h + 0x5c) = 300;
        *(var_4h + 0x60) = *(arg_8h + 0x51b);
        *(var_4h + 0x68) = *(arg_8h + 0x51d);
        *(var_4h + 0xa0) = 300;
        puVar4 = arg_8h + 0x792;
        puVar2 = arg_8h + 0x79c;
        puVar3 = var_4h + 0x4c;
        do {
            *(puVar3 + -0x27) = *puVar4;
            *puVar3 = puVar2[-2];
            puVar3[1] = *puVar2;
            puVar3[2] = puVar2[2];
            puVar3[3] = puVar2[4];
            puVar3[-9] = 0;
            puVar4 = puVar4 + 1;
            puVar3[-8] = puVar2[0x14];
            puVar3[-7] = puVar2[8];
            puVar3[-6] = puVar2[0xc];
            puVar3[-5] = puVar2[10];
            puVar3[-4] = puVar2[0xe];
            puVar3[-3] = puVar2[0x10];
            puVar3[-2] = puVar2[0x12];
            puVar3[-1] = puVar2[6];
            iVar1 = iVar1 + -1;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 0x11;
        } while (iVar1 != 0);
    }
    return;
}


/* fcn.00004d5a @ 0x4d5a */

void fcn.00004d5a(int param_1,int param_2)

{
    char cVar1;
    uint8_t uVar2;
    int iVar3;
    uint32_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint8_t *puVar7;
    int iVar8;
    uint8_t uVar9;
    uint32_t *puVar10;
    int iVar11;
    int *arg_8h;
    uint8_t uStack_11;
    int iStack_10;
    int iStack_c;
    uint32_t uStack_8;
    uint8_t *puStack_4;
    
    uStack_8 = fcn.00003338();
    uStack_8 = uStack_8 & 0xff;
    arg_8h = &iStack_10;
    iStack_c = 0;
    iStack_10 = 0;
    iVar3 = fcn.000034c4(arg_8h);
    iVar11 = iStack_10;
    if (-1 < iVar3) {
        if (*(param_2 + 0x79c) == '\x01') {
            iVar3 = fcn.0000379c(arg_8h,&iStack_c);
            if (iVar3 < 0) {
                return;
            }
            if (iStack_c != 0) {
                iVar3 = 2;
                iVar8 = 0;
                do {
                    if ((*(iVar8 + 9 + iStack_c) == '\x01') && (*(iVar8 + 8 + iStack_c) == '\x01')) {
                        uVar4 = *(iVar8 + 10 + iStack_c) - 1;
                        iVar6 = uVar4 * 0x1ec;
                        puVar10 = iVar6 + 0x38 + iVar11;
                        *puVar10 = *puVar10 & 0xffffcfff;
                        if (*(uVar4 + 0x3e3 + param_1) == '\x01') {
                            *(iVar6 + 0x4c + iVar11) = 0x201;
                            *(iVar6 + 0x4e + iVar11) = 0x55;
                            *(iVar6 + 0x50 + iVar11) = 0x201;
                            *(iVar6 + 0x52 + iVar11) = 0x55;
                        }
                    }
                    iVar8 = iVar8 + 0x20;
                    iVar3 = iVar3 + -1;
                } while (iVar3 != 0);
            }
        }
        uStack_11 = 0;
        *(iVar11 + 0x1c) = *(iVar11 + 0x1c) ^ (*(param_1 + 0xda) * 2 ^ *(iVar11 + 0x1c)) & 2;
        *(iVar11 + 0x1c) = *(iVar11 + 0x1c) ^ (*(param_1 + 0x3bb) ^ *(iVar11 + 0x1c)) & 1;
        if (uStack_8 != 0) {
            uVar4 = 0;
            do {
                iVar3 = uVar4 * 0x1ec;
                *(iVar3 + 0x38 + iVar11) = *(iVar3 + 0x38 + iVar11) & 0xffffdfff | 0x1000;
                *(iVar3 + 0x41 + iVar11) = uStack_11;
                puVar10 = iVar3 + 0x3c + iVar11;
                *puVar10 = *puVar10 | 1;
                *(iVar3 + 0x43 + iVar11) = *(param_1 + 0x11b + uVar4);
                *(iVar3 + 0x44 + iVar11) = *(param_1 + 0x2bf + uVar4);
                *(iVar3 + 0x47 + iVar11) = *(param_1 + 0x287 + uVar4);
                puVar10 = iVar3 + 0x38 + iVar11;
                *puVar10 = *puVar10 ^ (*(param_1 + 0x2f7 + uVar4) << 3 ^ *(iVar3 + 0x38 + iVar11)) & 8;
                uVar5 = (*(param_1 + 0x313 + uVar4) << 0x11 ^ *(iVar3 + 0x38 + iVar11)) & 0x20000 ^
                        *(iVar3 + 0x38 + iVar11);
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x32f + uVar4) << 0xe ^ uVar5) & 0x4000 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x34b + uVar4) << 0xf ^ uVar5) & 0x8000 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x367 + uVar4) << 0x10 ^ uVar5) & 0x10000 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x233 + uVar4) * 2 ^ uVar5) & 2 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x24f + uVar4) ^ uVar5) & 1 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x26b + uVar4) << 4 ^ uVar5) & 0x10 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x137 + uVar4) << 5 ^ uVar5) & 0x20 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x153 + uVar4) << 6 ^ uVar5) & 0x40 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x16f + uVar4) << 7 ^ uVar5) & 0x80 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x18b + uVar4) << 8 ^ uVar5) & 0x100 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x1df + uVar4) << 9 ^ uVar5) & 0x200 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x1fb + uVar4) << 10 ^ uVar5) & 0x400 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                uVar5 = (*(param_1 + 0x217 + uVar4) << 0xb ^ uVar5) & 0x800 ^ uVar5;
                *(iVar3 + 0x38 + iVar11) = uVar5;
                *(iVar3 + 0x38 + iVar11) = (*(param_1 + 0x2a3 + uVar4) << 2 ^ uVar5) & 4 ^ uVar5;
                *(iVar3 + 0x58 + iVar11) = *(param_1 + 899 + uVar4 * 2);
                puVar10 = iVar3 + 0x3c + iVar11;
                *puVar10 = *puVar10 ^ (*(param_1 + 0xbe + uVar4) << 4 ^ *(iVar3 + 0x3c + iVar11)) & 0x10;
                uStack_11 = uStack_11 + 1;
                uVar4 = uStack_11;
            } while (uVar4 < uStack_8);
        }
        uVar9 = 0;
        cVar1 = fcn.00003338();
        if (cVar1 != '\0') {
            uStack_8 = -0x3cd;
            puStack_4 = param_1 + 0x3d7;
            do {
                iVar3 = iStack_10;
                puVar7 = param_1 + 0x3cd;
                uVar4 = uVar9;
                iVar8 = uVar4 * 0x1ec;
                *(iVar8 + 0x45 + iVar11) = *(param_1 + 0x3e3 + uVar4);
                *(iVar8 + 0x54 + iVar11) = *(uVar4 + 0x3ff + param_1);
                puVar10 = iVar11 + 0x68 + iVar8;
                *(iVar8 + 0x60 + iVar11) = *(param_1 + 0x3bd);
                *(iVar8 + 0x61 + iVar11) = *(param_1 + 0x3be);
                *(iVar8 + 0x62 + iVar11) = *(param_1 + 0x3bf);
                *(iVar8 + 0xe0 + iVar11) = *(param_1 + 0x3c0);
                *(iVar8 + 0xe4 + iVar11) = *(param_1 + 0x3c1);
                *(iVar8 + 99 + iVar11) = *(param_1 + 0x3c2);
                iVar11 = 10;
                do {
                    puVar10[-1] = puVar7[uStack_8 + 0x3c3];
                    uVar2 = *puVar7;
                    puVar7 = puVar7 + 1;
                    *puVar10 = uVar2;
                    puVar10 = puVar10 + 2;
                    iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                puVar10 = iStack_10 + 0xb4 + iVar8;
                iVar11 = 0xb;
                puVar7 = puStack_4;
                do {
                    uVar2 = *puVar7;
                    puVar7 = puVar7 + 1;
                    *puVar10 = uVar2;
                    puVar10 = puVar10 + 1;
                    iVar11 = iVar11 + -1;
                } while (iVar11 != 0);
                if (*(param_1 + 0x3bf) != '\0') {
                    *(iVar8 + 0xe8 + iStack_10) = *(param_1 + 0x3e2);
                }
                uVar9 = uVar9 + 1;
                *(iVar8 + 0x5d + iStack_10) = *(param_1 + 0x3bc);
                uVar2 = fcn.00003338();
                iVar11 = iVar3;
            } while (uVar9 < uVar2);
        }
    }
    return;
}


/* fcn.00004c6c @ 0x4c6c */

void __cdecl fcn.00004c6c(uint noname_0,uint noname_1,int32_t arg_10h)

{
    int iVar1;
    uchar *puVar2;
    uint32_t uVar3;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = fcn.000034c4(&var_4h);
    if (-1 < iVar1) {
        iVar1 = fcn.000034c4(&var_8h);
        if (-1 < iVar1) {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(arg_10h + 0x593) ^ *(var_4h + 0x1c)) & 1;
            uVar3 = (*(arg_10h + 0x5a3) << 2 ^ *(var_4h + 0x1c)) & 0x3c ^ *(var_4h + 0x1c);
            *(var_4h + 0x1c) = uVar3;
            *(var_4h + 0x1c) = (*(arg_10h + 0x5a6) * 2 ^ uVar3) & 2 ^ uVar3;
            if (*(arg_10h + 0x58f) != '\0') {
                iVar1 = fcn.0000353a();
                puVar2 = (**(iVar1 + 0xc))(0x53);
                if (puVar2 != NULL) {
                    *(var_4h + 0x20) = *puVar2;
                    *(var_4h + 0x24) = puVar2 + 4;
                }
            }
        }
    }
    return;
}


/* fcn.0000560d @ 0x560d */

void __cdecl fcn.0000560d(int32_t arg_8h,uint32_t arg_ch)

{
    int iVar1;
    uint32_t *puVar2;
    int32_t var_4h;
    
    iVar1 = fcn.000034c4(&var_4h);
    if (-1 < iVar1) {
        if (arg_ch == 0) {
            puVar2 = var_4h + 0x1c;
            *puVar2 = *puVar2 ^ (*(arg_8h + 0x1c) << 2 ^ *puVar2) & 4;
        }
        else {
            *(var_4h + 0x1c) = *(var_4h + 0x1c) | 4;
        }
        puVar2 = var_4h + 0x1c;
        *puVar2 = *puVar2 ^ (*(arg_8h + 0x1d) << 4 ^ *puVar2) & 0x10;
    }
    return;
}


/* fcn.00005ac5 @ 0x5ac5 */

void __cdecl fcn.00005ac5(int32_t arg_8h)

{
    uint8_t uVar1;
    int iVar2;
    uint32_t uVar3;
    int32_t var_ch;
    uint32_t var_8h;
    uint32_t var_4h;
    
    iVar2 = fcn.000034c4(&var_ch);
    if (-1 < iVar2) {
        fcn.000037c9();
        if ((var_4h == 0x12) || (fcn.000037c9(), var_8h == 0x20)) {
            uVar1 = 1;
        }
        else {
            uVar3 = fcn.00002cf1(0xfd0dc,0);
            uVar1 = uVar3 >> 4 & 1;
        }
        uVar3 = uVar1 ^ 1 | *(var_ch + 0x1c) & 0xfffffffe;
        *(var_ch + 0x1c) = uVar3;
        *(var_ch + 0x1c) = (*(arg_8h + 0x1b) * 2 ^ uVar3) & 2 ^ uVar3;
        return;
    }
    return;
}


/* fcn.0000589f @ 0x589f */

void fcn.0000589f(int param_1)

{
    uint8_t *puVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    uint8_t uVar5;
    int iVar6;
    uint32_t uVar7;
    int aiStack_c [2];
    int iStack_4;
    
    iVar4 = fcn.000034c4(aiStack_c);
    iVar2 = aiStack_c[0];
    if (iVar4 < 0) {
        return;
    }
    iVar6 = 0;
    aiStack_c[0] = 6;
    *(iVar2 + 0x1c) = *(iVar2 + 0x1c) & 0xffffffc0;
    *(iVar2 + 0x24) = *(iVar2 + 0x24) & 0xffffffc0;
    iVar4 = param_1 + 0x74a;
    *(iVar2 + 0x2c) = *(iVar2 + 0x2c) & 0xffffffc0;
    iStack_4 = param_1 - iVar4;
    do {
        puVar1 = iVar6 + iVar4;
        uVar5 = iVar6;
        *(iVar2 + 0x1c) =
             *(iVar2 + 0x1c) ^
             ((puVar1[(param_1 - iVar4) + 0x744] << (uVar5 & 0x1f) | *(iVar2 + 0x1c)) ^ *(iVar2 + 0x1c)) & 0x3f;
        *(iVar2 + 0x24) = *(iVar2 + 0x24) ^ ((*puVar1 << (uVar5 & 0x1f) | *(iVar2 + 0x24)) ^ *(iVar2 + 0x24)) & 0x3f;
        *(iVar2 + 0x2c) =
             *(iVar2 + 0x2c) ^ ((puVar1[iStack_4 + 0x750] << (uVar5 & 0x1f) | *(iVar2 + 0x2c)) ^ *(iVar2 + 0x2c)) & 0x3f
        ;
        iVar6 = iVar6 + 1;
        aiStack_c[0] = aiStack_c[0] + -1;
    } while (aiStack_c[0] != 0);
    *(iVar2 + 0x20) = *(iVar2 + 0x20) & 0xfffff2ff | 0x200;
    *(iVar2 + 0x28) = *(iVar2 + 0x28) & 0xfffff0ff;
    cVar3 = fcn.00003277();
    iVar4 = 0;
    if ((cVar3 == '\0') && (cVar3 = fcn.000032f9(), cVar3 == '\0')) goto code_r0x000059db;
    cVar3 = *(param_1 + 0x75e);
    if (cVar3 == '\0') {
        *(param_1 + 0x75b) = 0;
        *(param_1 + 0x75d) = 1;
code_r0x000059cf:
        *(param_1 + 0x75c) = 0;
    }
    else {
        if (cVar3 != '\x01') {
            if (cVar3 == '\x02') {
                *(param_1 + 0x75a) = 1;
                *(param_1 + 0x75b) = 0;
                *(param_1 + 0x75c) = 0x101;
                goto code_r0x000059db;
            }
            if (cVar3 != '\x03') goto code_r0x000059db;
            *(param_1 + 0x75b) = 1;
            *(param_1 + 0x75d) = 0;
            goto code_r0x000059cf;
        }
        *(param_1 + 0x75b) = 0;
        *(param_1 + 0x75c) = 1;
        *(param_1 + 0x75d) = 0;
    }
    *(param_1 + 0x75a) = 0;
code_r0x000059db:
    uVar7 = *(iVar2 + 0x28);
    iVar6 = 4;
    do {
        uVar7 = uVar7 ^ (((*(iVar4 + 0x75a + param_1) << (iVar4 & 0x1f)) << 8 | uVar7) ^ uVar7) & 0xf00;
        iVar4 = iVar4 + 1;
        *(iVar2 + 0x28) = uVar7;
        iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    *(iVar2 + 0x20) = *(param_1 + 0x777) << 0xc | *(iVar2 + 0x20) & 0xf0000fff;
    *(iVar2 + 0x1c) = *(iVar2 + 0x1c) ^ (*(param_1 + 0x760) << 6 ^ *(iVar2 + 0x1c)) & 0x1ffc0;
    *(iVar2 + 0x28) = *(param_1 + 0x779) << 0xc | *(iVar2 + 0x28) & 0xf0000fff;
    *(iVar2 + 0x24) = *(iVar2 + 0x24) ^ (*(param_1 + 0x763) << 6 ^ *(iVar2 + 0x24)) & 0x1ffc0;
    *(iVar2 + 0x30) = *(param_1 + 0x77b) << 0xc | *(iVar2 + 0x30) & 0xf0000fff;
    *(iVar2 + 0x2c) = *(iVar2 + 0x2c) ^ (*(param_1 + 0x766) << 6 ^ *(iVar2 + 0x2c)) & 0x1ffc0;
    *(iVar2 + 0x34) = *(param_1 + 0x76a);
    *(iVar2 + 0x35) = *(param_1 + 0x769);
    *(iVar2 + 0x36) = *(param_1 + 0x768);
    *(iVar2 + 0x3c) = *(iVar2 + 0x3c) ^ (*(param_1 + 0x76d) ^ *(iVar2 + 0x3c)) & 1;
    *(iVar2 + 0x38) = *(iVar2 + 0x38) ^ (*(param_1 + 0x76b) ^ *(iVar2 + 0x38)) & 0x7ff;
    return;
}


/* fcn.00004d03 @ 0x4d03 */

void __cdecl fcn.00004d03(int32_t arg_8h)

{
    int iVar1;
    uint32_t uVar2;
    int32_t var_4h;
    
    iVar1 = fcn.000034c4(&var_4h);
    if (-1 < iVar1) {
        *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(arg_8h + 0x6bc) ^ *(var_4h + 0x1c)) & 1;
        uVar2 = *(var_4h + 0x1c);
        if (*(arg_8h + 0x6bd) == '\x01') {
            uVar2 = uVar2 | 2;
        }
        else if (*(arg_8h + 0x6bd) == '\x02') {
            uVar2 = uVar2 & 0xfffffffd | 4;
        }
        else {
            uVar2 = uVar2 & 0xfffffff9;
        }
        *(var_4h + 0x1c) = uVar2;
    }
    return;
}


/* fcn.00004435 @ 0x4435 */

void fcn.00004435(int param_1,uint param_2,int param_3)

{
    uchar uVar1;
    char cVar2;
    int iVar3;
    uchar *puVar4;
    uchar *puVar5;
    uchar *puVar6;
    uint8_t uVar7;
    int iVar8;
    uchar *puVar9;
    int iVar10;
    uchar *puStack_c;
    int iStack_8;
    
    iVar3 = fcn.000034c4(&puStack_c);
    puVar6 = puStack_c;
    if (-1 < iVar3) {
        iVar3 = 7;
        puVar4 = param_1 + 0x6e0;
        iVar8 = iVar3;
        puVar5 = puStack_c;
        do {
            puVar5 = puVar5 + 0x1c;
            uVar1 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar5 = uVar1;
            iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
        puVar4 = puStack_c + 0x1e;
        puVar5 = param_1 + 0x6d2;
        do {
            iVar8 = 2;
            puVar9 = puVar4;
            do {
                uVar1 = *puVar5;
                puVar5 = puVar5 + 1;
                *puVar9 = uVar1;
                puVar9 = puVar9 + 1;
                iVar8 = iVar8 + -1;
            } while (iVar8 != 0);
            puVar4 = puVar4 + 0x1c;
            iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        if (*(param_3 + 0x5ed) != '\0') {
            puStack_c[0x3a] = 0;
        }
        puVar5 = param_1 + 0x705;
        uVar7 = 0;
        puVar4 = puStack_c + 0xe1;
        do {
            puVar4[-1] = *puVar5;
            uVar1 = fcn.0000439d();
            uVar7 = uVar7 + 1;
            *puVar4 = uVar1;
            puVar5 = puVar5 + 1;
            puVar4 = puVar4 + 0xc;
        } while (uVar7 < 8);
        cVar2 = fcn.00003277();
        if ((cVar2 != '\0') || (cVar2 = fcn.000032f9(), cVar2 != '\0')) {
            *(puVar6 + 0xe4) = 0x1947c404;
            *(puVar6 + 0xe8) = 0x1947a405;
            *(puVar6 + 0xf0) = 0x1947c606;
            *(puVar6 + 0xf4) = 0x1947a607;
            *(puVar6 + 0x138) = 0x1947d20c;
            *(puVar6 + 0x13c) = 0x1947b20d;
        }
        puVar4 = param_1 + 0x6f7;
        iStack_8 = param_1 - puVar4;
        iVar10 = param_1 - puVar4;
        iVar8 = param_1 - puVar4;
        iVar3 = 7;
        puVar6 = puVar6 + 0x147;
        do {
            puVar6[0x11] = puVar4[iVar10 + 0x6e9];
            *puVar6 = *puVar4;
            puVar6[0x13] = puVar4[iStack_8 + 0x6fe];
            puVar5 = puVar4 + iVar8 + 0x6f0;
            puVar4 = puVar4 + 1;
            puVar6[0x14] = *puVar5;
            iVar3 = iVar3 + -1;
            puVar6 = puVar6 + 0x1c;
        } while (iVar3 != 0);
        cVar2 = fcn.0000a265();
        if (cVar2 == '\0') {
            cVar2 = fcn.00003299();
            if ((cVar2 == '\0') && (cVar2 = fcn.000032aa(), cVar2 == '\0')) {
                cVar2 = fcn.000032dd();
                if (cVar2 != '\0') {
                    *(puStack_c + 0x148) = 0x18050208;
                    *(puStack_c + 0x14c) = 0x18051209;
                    *(puStack_c + 0x150) = 0x1805220a;
                    *(puStack_c + 0x154) = 0x1805320b;
                }
            }
            else {
                *(puStack_c + 0x148) = 0;
                *(puStack_c + 0x14c) = 0;
                *(puStack_c + 0x150) = 0;
                *(puStack_c + 0x154) = 0;
            }
        }
        else {
            cVar2 = fcn.00003299();
            if ((cVar2 == '\0') ||
               ((cVar2 = fcn.00003277(), cVar2 == '\0' && (cVar2 = fcn.000032f9(), cVar2 == '\0')))) {
                puStack_c[0x158] = 0;
            }
            else {
                puStack_c[400] = 0;
            }
        }
        uVar7 = *(param_1 + 8);
        if ((uVar7 != 0) && (uVar7 < 8)) {
            puStack_c[uVar7 * 0x1c + 0x13c] = 2;
            puStack_c[*(param_1 + 8) * 0x1c + 0x13d] = 1;
        }
        return;
    }
    return;
}


/* fcn.0000565b @ 0x565b */

void fcn.0000565b(int param_1,int param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    int iStack_8;
    int iStack_4;
    
    iVar2 = fcn.000034c4(&iStack_8);
    if (-1 < iVar2) {
        iVar2 = fcn.000034c4(&iStack_4);
        if (-1 < iVar2) {
            *(iStack_8 + 0x20) = *(iStack_8 + 0x20) ^ (*(param_1 + 4) ^ *(iStack_8 + 0x20)) & 0xf;
            *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_1 + 0xc) * 2 ^ *(iStack_8 + 0x1c)) & 2;
            cVar1 = fcn.0000a265();
            if (cVar1 == '\x01') {
                *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) | 8;
            }
            else {
                *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_1 + 0xe) << 3 ^ *(iStack_8 + 0x1c)) & 8;
            }
            *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_1 + 0xf) << 4 ^ *(iStack_8 + 0x1c)) & 0x10;
            *(iStack_8 + 0x1c) = *(iStack_8 + 0x1c) ^ (*(param_1 + 5) << 5 ^ *(iStack_8 + 0x1c)) & 0x20;
            *(iStack_8 + 0x24) = *(iStack_8 + 0x24) ^ (*(param_1 + 0xd) * 2 ^ *(iStack_8 + 0x24)) & 2;
            uVar3 = (*(param_1 + 0x1e) << 0xc ^ *(iStack_8 + 0x24)) & 0x1000 ^ *(iStack_8 + 0x24);
            *(iStack_8 + 0x24) = uVar3;
            uVar4 = -(*(param_2 + 0x3e) != '\0') & 4;
            *(iStack_8 + 0x24) = uVar4 | uVar3 & 0xffffffe3;
            *(iStack_8 + 0x24) = (*(param_1 + 6) & 1 | 4) << 6 | uVar4 | uVar3 & 0xffffffa3;
            *(iStack_8 + 0x2d) = *(param_1 + 0x23);
            *(iStack_8 + 0x24) = *(iStack_8 + 0x24) ^ (*(param_1 + 0x11) << 10 ^ *(iStack_8 + 0x24)) & 0x400;
            *(iStack_8 + 0x24) = *(iStack_8 + 0x24) ^ (*(param_1 + 0x741) << 0xe ^ *(iStack_8 + 0x24)) & 0x4000;
            iVar2 = fcn.0000353a();
            uVar3 = (**(iVar2 + 0x18))(0x151);
            *(iStack_8 + 0x24) = *(iStack_8 + 0x24) & 0xfffff7ff | (uVar3 & 1) << 0xb | 0x2000;
            uVar3 = fcn.0000330a();
            *(iStack_8 + 0x24) = *(iStack_8 + 0x24) ^ ((uVar3 & 0xff) << 0xf ^ *(iStack_8 + 0x24)) & 0x8000;
            cVar1 = fcn.0000330a();
            if (cVar1 == '\0') {
                *(iStack_8 + 0x24) = *(iStack_8 + 0x24) & 0xfffeffff;
            }
            else {
                *(iStack_8 + 0x24) = *(iStack_8 + 0x24) ^ (*(param_1 + 0x46) << 0x10 ^ *(iStack_8 + 0x24)) & 0x10000;
            }
            *(iStack_8 + 0x24) = *(iStack_8 + 0x24) ^ (*(param_1 + 0x76e) << 0x11 ^ *(iStack_8 + 0x24)) & 0x20000;
            uVar3 = (*(param_1 + 0x25) << 0x14 ^ *(iStack_8 + 0x24)) & 0x100000 ^ *(iStack_8 + 0x24);
            *(iStack_8 + 0x24) = uVar3;
            *(iStack_8 + 0x24) = (*(param_1 + 0x26) << 0x15 ^ uVar3) & 0x200000 ^ uVar3;
            *(iStack_8 + 0x2e) = *(param_1 + 0x77d);
            *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) ^ (*(param_1 + 0x77f) ^ *(iStack_4 + 0x1c)) & 3;
            *(iStack_8 + 0x44) = *(iStack_8 + 0x44) ^ (*(param_1 + 0x790) << 10 ^ *(iStack_8 + 0x44)) & 0x400;
            uVar3 = *(iStack_4 + 0x1c);
            *(iStack_4 + 0x1c) = uVar3 & 0xeffffff7 | 4;
            uVar3 = *(param_1 + 0x780) << 4 | uVar3 & 0xeffff007 | 4;
            *(iStack_4 + 0x1c) = uVar3;
            uVar3 = (*(param_1 + 0x781) << 0xc ^ uVar3) & 0x7000 ^ uVar3;
            *(iStack_4 + 0x1c) = uVar3;
            *(iStack_4 + 0x1c) = (*(param_1 + 0x782) << 0x1a ^ uVar3) & 0xc000000 ^ uVar3;
        }
    }
    return;
}


/* fcn.000053c6 @ 0x53c6 */

void fcn.000053c6(int param_1,int param_2)

{
    int iVar1;
    uint32_t uVar2;
    int iStack_4;
    
    iVar1 = fcn.000034c4(&iStack_4);
    if (-1 < iVar1) {
        *(iStack_4 + 0x30) = *(iStack_4 + 0x30) | 1;
        *(iStack_4 + 0x34) = *(iStack_4 + 0x34) | 1;
        *(iStack_4 + 0x30) = *(iStack_4 + 0x30) | 2;
        *(iStack_4 + 0x34) = *(iStack_4 + 0x34) | 2;
        if ((*(param_2 + 0x22c) == '\0') || ((*(param_2 + 0x22e) == '\0' && (*(param_2 + 0x22f) == '\0')))) {
            *(iStack_4 + 0x2c) = *(iStack_4 + 0x2c) & 0xfffffffe;
        }
        else {
            *(iStack_4 + 0x2c) = *(iStack_4 + 0x2c) | 1;
            iVar1 = fcn.0000353a();
            uVar2 = (**(iVar1 + 0x18))(0x58);
            *(iStack_4 + 0x30) = *(iStack_4 + 0x30) & 0xfffffffe | uVar2 & 1;
            iVar1 = fcn.0000353a();
            uVar2 = (**(iVar1 + 0x18))(0x59);
            *(iStack_4 + 0x34) = *(iStack_4 + 0x34) & 0xfffffffe | uVar2 & 1;
            *(iStack_4 + 0x30) = *(iStack_4 + 0x30) | 2;
            *(iStack_4 + 0x34) = *(iStack_4 + 0x34) | 2;
            *(iStack_4 + 0x30) = *(iStack_4 + 0x30) | 4;
            *(iStack_4 + 0x34) = *(iStack_4 + 0x34) & 0xfffffffb;
        }
        iVar1 = fcn.0000353a();
        uVar2 = (**(iVar1 + 0x18))(0xa1);
        *(iStack_4 + 0x1c) = *(iStack_4 + 0x1c) & 0xfffffffe | uVar2 & 1;
        *(iStack_4 + 0x20) = *(iStack_4 + 0x20) ^ (*(param_1 + 0x717) << 0x1e ^ *(iStack_4 + 0x20)) & 0x40000000;
        uVar2 = *(param_1 + 0x6be) << 0x1f | *(iStack_4 + 0x20) & 0x7fffffff;
        *(iStack_4 + 0x20) = uVar2;
        uVar2 = (*(param_1 + 0x720) << 0x1d ^ uVar2) & 0x20000000 ^ uVar2;
        *(iStack_4 + 0x20) = uVar2;
        uVar2 = (*(param_1 + 0x71f) << 0x1c ^ uVar2) & 0x10000000 ^ uVar2;
        *(iStack_4 + 0x20) = uVar2;
        uVar2 = (*(param_1 + 0x71e) << 0x1b ^ uVar2) & 0x8000000 ^ uVar2;
        *(iStack_4 + 0x20) = uVar2;
        uVar2 = (*(param_1 + 0x71c) << 0x12 ^ uVar2) & 0x7fc0000 ^ uVar2;
        *(iStack_4 + 0x20) = uVar2;
        uVar2 = (*(param_1 + 0x71a) << 9 ^ uVar2) & 0x3fe00 ^ uVar2;
        *(iStack_4 + 0x20) = uVar2;
        *(iStack_4 + 0x20) = (*(param_1 + 0x718) ^ uVar2) & 0x1ff ^ uVar2;
        *(iStack_4 + 0x28) = *(iStack_4 + 0x28) ^ (*(param_1 + 0x721) * 2 ^ *(iStack_4 + 0x28)) & 2;
        uVar2 = (*(param_1 + 0x725) << 0x11 ^ *(iStack_4 + 0x28)) & 0xe0000 ^ *(iStack_4 + 0x28);
        *(iStack_4 + 0x28) = uVar2;
        uVar2 = (*(param_1 + 0x724) << 0xe ^ uVar2) & 0x1c000 ^ uVar2;
        *(iStack_4 + 0x28) = uVar2;
        uVar2 = (*(param_1 + 0x723) << 0xb ^ uVar2) & 0x3800 ^ uVar2;
        *(iStack_4 + 0x28) = uVar2;
        uVar2 = (*(param_1 + 0x722) << 8 ^ uVar2) & 0x700 ^ uVar2;
        *(iStack_4 + 0x28) = uVar2;
        *(iStack_4 + 0x28) = (*(param_1 + 0x726) ^ uVar2) & 1 ^ uVar2;
    }
    return;
}


/* fcn.00004acc @ 0x4acc */

void fcn.00004acc(int param_1)

{
    char *pcVar1;
    bool bVar2;
    uint8_t uVar3;
    uint8_t uVar4;
    char cVar5;
    int iVar6;
    uint32_t uVar7;
    uint32_t uVar8;
    uint unaff_EBX;
    uint32_t uVar9;
    uint unaff_EBP;
    uint32_t *puVar10;
    uint unaff_ESI;
    int iVar11;
    uint unaff_EDI;
    uint uStack_4;
    
    iVar6 = fcn.000034c4(&uStack_4);
    iVar11 = uStack_4;
    if (iVar6 < 0) {
        return;
    }
    uVar9 = 0;
    *(uStack_4 + 0x1c) = *(uStack_4 + 0x1c) ^ (*(param_1 + 0x42) ^ *(uStack_4 + 0x1c)) & 1;
    uVar7 = 0;
    if (*(param_1 + 0xb) == '\0') {
        uVar7 = *(param_1 + 0x43);
    }
    uVar7 = (uVar7 * 2 ^ *(uStack_4 + 0x1c)) & 2 ^ *(uStack_4 + 0x1c);
    *(uStack_4 + 0x1c) = uVar7;
    uVar8 = -(*(param_1 + 0x783) != '\0') & 0x10;
    *(uStack_4 + 0x1c) = uVar8 | uVar7 & 0xffffffef;
    *(uStack_4 + 0x1c) = -(*(param_1 + 0x7f4) != '\0') & 0x20 | uVar8 | uVar7 & 0xffffffcf;
    cVar5 = fcn.0000335c();
    if (cVar5 != '\0') {
        puVar10 = iVar11 + 0x2c;
        uVar7 = 0;
        do {
            pcVar1 = param_1 + 0x28 + uVar7;
            uVar7 = uVar7 + 1;
            *puVar10 = -(*pcVar1 != '\0') & 0x100 | *puVar10 & 0xfffffeff;
            puVar10 = puVar10 + 1;
            uVar8 = fcn.0000335c();
        } while (uVar7 < (uVar8 & 0xff));
        iVar11 = uStack_4;
    }
    cVar5 = fcn.00003380();
    if (cVar5 != '\0') {
        puVar10 = iVar11 + 0x6c;
        do {
            pcVar1 = param_1 + 0x38 + uVar9;
            uVar9 = uVar9 + 1;
            *puVar10 = -(*pcVar1 != '\0') & 0x100 | *puVar10 & 0xfffffeff;
            puVar10 = puVar10 + 1;
            uVar7 = fcn.00003380();
        } while (uVar9 < (uVar7 & 0xff));
    }
    *(iVar11 + 0x94) = *(param_1 + 0x47) != '\0' | *(iVar11 + 0x94) & 0xfffffffe;
    fcn.00004646();
    uStack_4 = iVar11;
    iVar6 = fcn.0000353a(unaff_ESI);
    uVar3 = (**(iVar6 + 4))(0x2e);
    uStack_4._3_1_ = uVar3;
    iVar6 = fcn.0000353a();
    cVar5 = (**(iVar6 + 0x18))(0x14a);
    if (cVar5 == '\0') {
        return;
    }
    iVar6 = fcn.0000353a(unaff_EDI,unaff_EBX);
    uVar3 = (**(iVar6 + 4))(0x13c);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x131);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a(unaff_EDI,unaff_EBX);
        uVar7 = (**(iVar6 + 4))(0x131);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a(unaff_EBP);
    uVar3 = (**(iVar6 + 4))(0x13e);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x132);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a(unaff_EBP);
        uVar7 = (**(iVar6 + 4))(0x132);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x140);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x133);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x133);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x142);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x134);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x134);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x144);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x135);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x135);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x145);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x136);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x136);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x146);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x137);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x137);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x147);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x138);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x138);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x148);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x139);
    bVar2 = false;
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x139);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
        }
    }
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    iVar6 = fcn.0000353a();
    uVar3 = (**(iVar6 + 4))(0x149);
    iVar6 = fcn.0000353a();
    uVar4 = (**(iVar6 + 4))(0x13a);
    uVar4 = uVar4 >> 1 & 3;
    if ((uVar4 == 2) || (uVar4 == 3)) {
        iVar6 = fcn.0000353a();
        uVar7 = (**(iVar6 + 4))(0x13a);
        if ((uStack_4._3_1_ & 1 << ((uVar7 & 0xff) >> 3)) != 0) {
            bVar2 = true;
            goto code_r0x00004ab7;
        }
    }
    bVar2 = false;
code_r0x00004ab7:
    if ((uVar3 != 0) && (bVar2)) {
        puVar10 = iVar11 + 0x28 + uVar3 * 4;
        *puVar10 = *puVar10 | 0x200;
    }
    return;
}


/* fcn.00004bf1 @ 0x4bf1 */

void fcn.00004bf1(void)

{
    uint8_t uVar1;
    uint8_t uVar2;
    int iVar3;
    uint8_t *puVar4;
    uint8_t *puVar5;
    uint32_t uVar6;
    int32_t var_4h;
    
    iVar3 = fcn.000034c4(&var_4h);
    if (-1 < iVar3) {
        iVar3 = fcn.0000353a();
        puVar4 = (**(iVar3 + 0xc))(0x12f);
        if (puVar4 != NULL) {
            fcn.0000335c();
            uVar2 = *puVar4;
            uVar1 = fcn.0000335c();
            if (uVar1 <= uVar2) {
                uVar2 = fcn.0000335c();
            }
            if (uVar2 != 0) {
                uVar6 = uVar2;
                puVar5 = var_4h + 0x1d;
                puVar4 = puVar4 + 2;
                do {
                    puVar5[-1] = puVar4[-1];
                    *puVar5 = *puVar4;
                    puVar5[1] = puVar4[1];
                    puVar5[2] = puVar4[2];
                    uVar6 = uVar6 - 1;
                    puVar5 = puVar5 + 4;
                    puVar4 = puVar4 + 4;
                } while (uVar6 != 0);
            }
        }
    }
    return;
}


/* fcn.000033a4 @ 0x33a4 */

ushort __fastcall fcn.000033a4(uint param_1)

{
    char cVar1;
    int16_t iVar2;
    
    cVar1 = fcn.00003288(param_1);
    if (cVar1 == '\0') {
        iVar2 = fcn.000031e8();
        if (iVar2 != 0x5183) {
            return 2;
        }
    }
    return 0;
}


/* fcn.00005169 @ 0x5169 */

void __cdecl fcn.00005169(int32_t arg_8h)

{
    char cVar1;
    int iVar2;
    uint32_t *puVar3;
    uint8_t *puVar4;
    int32_t var_4h;
    
    iVar2 = fcn.000034c4(&var_4h);
    if (-1 < iVar2) {
        iVar2 = 2;
        puVar4 = arg_8h + 0x6c4;
        *(var_4h + 0x1c) = *(arg_8h + 0x6c2);
        puVar3 = var_4h + 0x40;
        *(var_4h + 0x1d) = *(arg_8h + 0x6c3);
        do {
            *puVar3 = *puVar3 ^ (*puVar4 ^ *puVar3) & 1;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 9;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        puVar4 = arg_8h + 0x6c6;
        puVar3 = var_4h + 0x88;
        iVar2 = 3;
        do {
            *puVar3 = *puVar3 ^ (*puVar4 ^ *puVar3) & 1;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 5;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        puVar4 = arg_8h + 0x6c9;
        puVar3 = var_4h + 0xc4;
        iVar2 = 8;
        do {
            *puVar3 = *puVar3 ^ (*puVar4 ^ *puVar3) & 1;
            puVar4 = puVar4 + 1;
            puVar3 = puVar3 + 3;
            iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
        cVar1 = fcn.00003277();
        if ((cVar1 != '\0') || (cVar1 = fcn.000032f9(), cVar1 != '\0')) {
            cVar1 = fcn.00003256();
            *(var_4h + 0xf8) = (-(cVar1 != '\0') & 0xe00e0006) + 0x4900a803;
            *(var_4h + 0x104) = 0x4900aa04;
            *(var_4h + 0x110) = 0x4907ac0c;
            *(var_4h + 0x11c) = 0x5900ae0f;
        }
        *(var_4h + 0x124) = *(var_4h + 0x124) ^ (*(arg_8h + 0x6d1) ^ *(var_4h + 0x124)) & 1;
        return;
    }
    return;
}


/* fcn.00005eb7 @ 0x5eb7 */

void fcn.00005eb7(void)

{
    char cVar1;
    char cVar2;
    char cVar3;
    int iVar4;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar4 = fcn.000034c4(&var_8h);
    if ((-1 < iVar4) && (iVar4 = fcn.000034c4(&var_4h), -1 < iVar4)) {
        cVar1 = *(var_4h + 0xf8);
        cVar2 = fcn.000032dd();
        if ((cVar2 != '\0') && (cVar1 != '\0')) {
            *(var_8h + 0x40) = *(var_8h + 0x40) & 0xfffffffe;
        }
        if (*(var_4h + 0x174) != '\0') {
            *(var_8h + 100) = *(var_8h + 100) & 0xfffffffe;
        }
        cVar1 = *(var_4h + 0x104);
        cVar2 = *(var_4h + 0x11c);
        cVar3 = fcn.0000330a();
        if ((cVar3 == '\0') || (cVar2 == '\0')) {
            cVar2 = fcn.000032dd();
            if (cVar2 == '\0') {
                return;
            }
            if (cVar1 == '\0') {
                return;
            }
        }
        *(var_8h + 0xb0) = *(var_8h + 0xb0) & 0xfffffffe;
    }
    return;
}


/* fcn.00005336 @ 0x5336 */

void __cdecl fcn.00005336(int32_t arg_8h)

{
    int32_t iVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    int32_t var_4h;
    
    var_4h = 0;
    iVar3 = fcn.000034c4(&var_4h);
    iVar1 = var_4h;
    if ((-1 < iVar3) && (var_4h != 0)) {
        *(var_4h + 0x1c) = *(var_4h + 0x1c) ^ (*(arg_8h + 0x734) ^ *(var_4h + 0x1c)) & 1;
        uVar4 = (*(arg_8h + 0x735) << 3 ^ *(var_4h + 0x1c)) & 8 ^ *(var_4h + 0x1c);
        *(var_4h + 0x1c) = uVar4;
        uVar4 = (*(arg_8h + 0x736) * 2 ^ uVar4) & 2 ^ uVar4;
        *(var_4h + 0x1c) = uVar4;
        *(var_4h + 0x1c) = (*(arg_8h + 0x737) << 2 ^ uVar4) & 4 ^ uVar4;
        cVar2 = fcn.0000330a();
        if (cVar2 != '\0') {
            *(iVar1 + 0x20) = 0x194ce404;
            *(iVar1 + 0x24) = 0x294ce605;
        }
    }
    return;
}


/* fcn.00005f47 @ 0x5f47 */

int fcn.00005f47(void)

{
    uint uVar1;
    char cVar2;
    char cVar3;
    int iVar4;
    int iVar5;
    uint uVar6;
    int32_t var_48h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_20h;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    cVar2 = fcn.00003237();
    fcn.000034c4(&var_18h);
    cVar3 = fcn.0000330a();
    if (cVar3 == '\0') {
        cVar2 = fcn.00003288();
        if (cVar2 == '\0') {
            return -0x7ffffff2;
        }
        uVar6 = 0xffd4582c;
    }
    else {
        if (cVar2 != '\0') {
            return -0x7ffffff2;
        }
        uVar6 = 0xffd455dc;
    }
    var_ch = &var_20h;
    var_8h = -0x590000;
    iVar5 = 0;
    do {
        uVar1 = InterruptDescriptorTableRegister();
        *var_ch = uVar1;
        iVar4 = (**(**(stack0xffffffde + -4) + 0x38))(*(stack0xffffffde + -4),iVar5,&var_8h);
        iVar5 = iVar5 + 1;
        if (iVar4 < 0) {
            return iVar4;
        }
        var_10h = &var_28h;
        InterruptDescriptorTableRegister();
        iVar4 = (**(**(stack0xffffffd6 + -4) + 0x68))(uVar6,var_8h,&var_14h);
    } while (iVar4 != 0);
    var_10h = &var_28h;
    InterruptDescriptorTableRegister();
    iVar5 = (**(**(stack0xffffffd6 + -4) + 0x6c))(var_14h,&var_48h);
    if (var_2ch == 0) {
        return -0x7ffffff2;
    }
    *(var_18h + 0x1c) = var_14h + 0x18;
    *(var_18h + 0x20) = var_2ch;
    return iVar5;
}


/* fcn.0000602f @ 0x602f */

void fcn.0000602f(void)

{
    uint uVar1;
    int iVar2;
    int iVar3;
    int32_t var_44h;
    uint32_t var_28h;
    int32_t var_24h;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = 0;
    fcn.000034c4(&var_14h);
    var_8h = &var_1ch;
    var_4h = -0x590000;
    iVar3 = 0;
    do {
        uVar1 = InterruptDescriptorTableRegister();
        *var_8h = uVar1;
        iVar2 = (**(**(stack0xffffffe2 + -4) + 0x38))(*(stack0xffffffe2 + -4),iVar3,&var_4h);
        if (iVar2 < 0) {
            return;
        }
        var_ch = &var_24h;
        InterruptDescriptorTableRegister();
        iVar2 = (**(**(stack0xffffffda + -4) + 0x68))(0xffd4575c,var_4h,&var_10h);
        iVar3 = iVar3 + 1;
    } while (iVar2 != 0);
    var_ch = &var_24h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffda + -4) + 0x6c))(var_10h,&var_44h);
    if (var_28h != 0) {
        *(var_14h + 0x28) = var_10h + 0x18;
        *(var_14h + 0x2c) = var_28h;
    }
    return;
}


/* fcn.00009e39 @ 0x9e39 */

uint __cdecl fcn.00009e39(int32_t arg_8h)

{
    int iVar1;
    int *in_ECX;
    int *in_EDX;
    int32_t var_2ch;
    int32_t var_14h;
    int32_t var_ch;
    int32_t var_8h;
    uint32_t var_4h;
    
    fcn.0000379c(in_ECX,&var_8h);
    iVar1 = fcn.0000361f();
    if ((((iVar1 != 0) && (iVar1 = (**(var_8h + 8))(var_8h,&arg_8h,*(iVar1 + 0x18) + 8,&var_4h), -1 < iVar1)) &&
        (var_4h != 0)) && (iVar1 = (**(var_8h + 0x14))(var_8h,0x19,var_4h,&var_ch), -1 < iVar1)) {
        (**(var_8h + 0xc))(var_8h,var_4h,&var_2ch);
        if (*var_14h == 0xffffff) {
            *in_EDX = *(var_14h + 4) + -8;
            iVar1 = var_14h + 8;
        }
        else {
            *in_EDX = *var_14h - 4;
            iVar1 = var_14h + 4;
        }
        *in_ECX = iVar1;
        return 0;
    }
    return 0x8000000e;
}


/* fcn.00009d08 @ 0x9d08 */

uint __fastcall fcn.00009d08(uint32_t param_1,uint32_t param_2,uint *param_3)

{
    if (param_3 == NULL) {
        return 0x80000002;
    }
    if (param_1 * param_2 >> 0x20 != 0) {
        *param_3 = 0xffffffff;
        return 0x80000005;
    }
    *param_3 = param_1 * param_2;
    return 0;
}


/* fcn.00003706 @ 0x3706 */

int32_t __fastcall fcn.00003706(uint param_1,int param_2)

{
    int iVar1;
    int32_t var_8h;
    
    if ((param_2 != 0) && (iVar1 = fcn.0000383e(&var_8h), -1 < iVar1)) {
        return var_8h;
    }
    return 0;
}


/* fcn.00009ef9 @ 0x9ef9 */

uint __fastcall
fcn.00009ef9(char *param_1,uint32_t param_2,int *param_3,uint32_t *param_4,uint32_t *param_5,uint32_t *param_6)

{
    uint8_t *puVar1;
    int16_t iVar2;
    bool bVar3;
    uint8_t uVar4;
    int iVar5;
    uint32_t uVar6;
    uint32_t uVar7;
    uint8_t *puVar8;
    uint32_t uVar9;
    uint8_t *puVar10;
    uint32_t uStack_14;
    int iStack_10;
    uint32_t uStack_c;
    uint8_t *puStack_8;
    
    if ((((param_1 == NULL) || (param_3 == NULL)) || (param_4 == NULL)) || ((param_5 == NULL || (param_6 == NULL)))) {
        return 0x80000002;
    }
    if (param_2 < 0x36) {
        return 0x80000003;
    }
    if (*param_1 != 'B') {
        return 0x80000003;
    }
    if (param_1[1] != 'M') {
        return 0x80000003;
    }
    if (*(param_1 + 0x1e) != 0) {
        return 0x80000003;
    }
    if (*(param_1 + 0x16) == 0) {
        return 0x80000003;
    }
    if (*(param_1 + 0x12) == 0) {
        return 0x80000003;
    }
    if (*(param_1 + 0xe) != 0x28) {
        return 0x80000003;
    }
    iVar2 = *(param_1 + 0x1c);
    uStack_c = param_2;
    iVar5 = fcn.00009d08(&uStack_14);
    if (iVar5 < 0) {
        return 0x80000003;
    }
    iVar5 = fcn.00009ce0(&uStack_14);
    if (iVar5 < 0) {
        return 0x80000003;
    }
    iVar5 = fcn.00009d08(&uStack_14);
    if (iVar5 < 0) {
        return 0x80000003;
    }
    iVar5 = fcn.00009d08(&iStack_10);
    if (iVar5 < 0) {
        return 0x80000003;
    }
    uVar6 = *(param_1 + 2);
    if (uVar6 != uStack_c) {
        return 0x80000003;
    }
    uVar7 = *(param_1 + 10);
    if (uVar6 < uVar7) {
        return 0x80000003;
    }
    if (uVar6 - uVar7 != iStack_10) {
        return 0x80000003;
    }
    if (uVar7 < 0x36) {
        return 0x80000003;
    }
    if (0x36 < uVar7) {
        if (iVar2 == 1) {
            iVar5 = 2;
        }
        else if (iVar2 == 4) {
            iVar5 = 0x10;
        }
        else if (iVar2 == 8) {
            iVar5 = 0x100;
        }
        else {
            iVar5 = 0;
        }
        if (uVar7 - 0x36 < iVar5 << 2) {
            return 0x80000003;
        }
    }
    puVar10 = param_1 + uVar7;
    puStack_8 = puVar10;
    iVar5 = fcn.00009d08(&uStack_14);
    if ((iVar5 < 0) || (iVar5 = fcn.00009d08(&uStack_14), iVar5 < 0)) {
        return 0x80000003;
    }
    bVar3 = false;
    if (*param_3 == 0) {
        *param_4 = uStack_14;
        iVar5 = fcn.00003728();
        *param_3 = iVar5;
        bVar3 = true;
        if (iVar5 == 0) {
            return 0x80000009;
        }
    }
    else if (*param_4 < uStack_14) {
        *param_4 = uStack_14;
        return 0x80000005;
    }
    uVar7 = *(param_1 + 0x12);
    iVar5 = *param_3;
    *param_6 = uVar7;
    uVar6 = *(param_1 + 0x16);
    *param_5 = uVar6;
    uStack_c = 0;
    if (uVar6 == 0) {
        return 0;
    }
    do {
        uVar9 = 0;
        puVar8 = iVar5 + ((uVar6 - uStack_c) + -1) * uVar7 * 4;
        if (uVar7 != 0) {
            do {
                iVar2 = *(param_1 + 0x1c);
                if (iVar2 == 1) {
                    uStack_14 = 0;
                    uVar4 = 7;
                    do {
                        if (*(param_1 + 0x12) <= uVar9) break;
                        puVar8[2] = param_1[(*puVar10 >> (uVar4 & 0x1f) & 1) * 4 + 0x38];
                        puVar8[1] = param_1[(*puVar10 >> (uVar4 & 0x1f) & 1) * 4 + 0x37];
                        *puVar8 = param_1[(*puVar10 >> (uVar4 & 0x1f) & 1) * 4 + 0x36];
                        puVar8 = puVar8 + 4;
                        uVar9 = uVar9 + 1;
                        uStack_14 = uStack_14 + 1;
                        uVar4 = uVar4 - 1;
                    } while (uStack_14 < 8);
                    puVar8 = puVar8 + -4;
                    uVar9 = uVar9 - 1;
                }
                else if (iVar2 == 4) {
                    uVar6 = *puVar10 >> 4;
                    puVar8[2] = param_1[uVar6 * 4 + 0x38];
                    puVar8[1] = param_1[uVar6 * 4 + 0x37];
                    *puVar8 = param_1[uVar6 * 4 + 0x36];
                    if (uVar9 < *(param_1 + 0x12) - 1U) {
                        uVar9 = uVar9 + 1;
                        uVar6 = *puVar10 & 0xf;
                        puVar8[6] = param_1[uVar6 * 4 + 0x38];
                        puVar8[5] = param_1[uVar6 * 4 + 0x37];
                        uVar4 = param_1[uVar6 * 4 + 0x36];
                        puVar8 = puVar8 + 4;
                        goto code_r0x0000a19d;
                    }
                }
                else if (iVar2 == 8) {
                    puVar8[2] = param_1[*puVar10 * 4 + 0x38];
                    puVar8[1] = param_1[*puVar10 * 4 + 0x37];
                    uVar4 = param_1[*puVar10 * 4 + 0x36];
code_r0x0000a19d:
                    *puVar8 = uVar4;
                }
                else if (iVar2 == 0x18) {
                    *puVar8 = *puVar10;
                    puVar1 = puVar10 + 1;
                    puVar10 = puVar10 + 2;
                    puVar8[1] = *puVar1;
                    puVar8[2] = *puVar10;
                }
                else {
                    if (iVar2 != 0x20) {
                        if (bVar3) {
                            *param_3 = 0;
                            return 0x80000003;
                        }
                        return 0x80000003;
                    }
                    *puVar8 = *puVar10;
                    puVar8[1] = puVar10[1];
                    puVar1 = puVar10 + 2;
                    puVar10 = puVar10 + 3;
                    puVar8[2] = *puVar1;
                }
                uVar7 = *(param_1 + 0x12);
                uVar9 = uVar9 + 1;
                puVar10 = puVar10 + 1;
                puVar8 = puVar8 + 4;
            } while (uVar9 < uVar7);
        }
        uVar6 = puVar10 - puStack_8 & 3;
        if (uVar6 != 0) {
            puVar10 = puVar10 + (4 - uVar6);
        }
        uVar6 = *(param_1 + 0x16);
        uStack_c = uStack_c + 1;
        if (uVar6 <= uStack_c) {
            return 0;
        }
    } while( true );
}


/* fcn.00003869 @ 0x3869 */

void __cdecl fcn.00003869(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x84))(*(stack0xfffffff2 + -4),arg_8h,arg_ch);
    return;
}


/* fcn.00006566 @ 0x6566 */

uint32_t __fastcall fcn.00006566(uint8_t param_1)

{
    uint8_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int8_t var_1h;
    
    iVar3 = fcn.0000353a();
    uVar4 = (**(iVar3 + 0x18))(0x14a);
    if (uVar4 != '\0') {
        iVar3 = fcn.0000353a();
        uVar1 = (**(iVar3 + 4))(0x131);
        iVar3 = fcn.0000353a();
        cVar2 = (**(iVar3 + 4))(0x13c);
        iVar3 = fcn.0000353a();
        uVar5 = (**(iVar3 + 4))(0x12d);
        if ((((uVar5 == '\0') || (cVar2 == '\0')) ||
            (uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06')) || (uVar1 >> 3 != param_1)) {
            iVar3 = fcn.0000353a();
            uVar1 = (**(iVar3 + 4))(0x132);
            iVar3 = fcn.0000353a();
            cVar2 = (**(iVar3 + 4))(0x13e);
            iVar3 = fcn.0000353a();
            uVar5 = (**(iVar3 + 4))(0x12d);
            if (((uVar5 < 2) || (cVar2 == '\0')) ||
               ((uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06' || (uVar1 >> 3 != param_1)))) {
                iVar3 = fcn.0000353a();
                uVar1 = (**(iVar3 + 4))(0x133);
                iVar3 = fcn.0000353a();
                cVar2 = (**(iVar3 + 4))(0x140);
                iVar3 = fcn.0000353a();
                uVar5 = (**(iVar3 + 4))(0x12d);
                if (((uVar5 < 3) || (cVar2 == '\0')) ||
                   ((uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06' || (uVar1 >> 3 != param_1)))) {
                    iVar3 = fcn.0000353a();
                    uVar1 = (**(iVar3 + 4))(0x134);
                    iVar3 = fcn.0000353a();
                    cVar2 = (**(iVar3 + 4))(0x142);
                    iVar3 = fcn.0000353a();
                    uVar5 = (**(iVar3 + 4))(0x12d);
                    if ((((uVar5 < 4) || (cVar2 == '\0')) ||
                        (uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06')) || (uVar1 >> 3 != param_1)
                       ) {
                        iVar3 = fcn.0000353a();
                        uVar1 = (**(iVar3 + 4))(0x135);
                        iVar3 = fcn.0000353a();
                        cVar2 = (**(iVar3 + 4))(0x144);
                        iVar3 = fcn.0000353a();
                        uVar5 = (**(iVar3 + 4))(0x12d);
                        if (((uVar5 < 5) || (cVar2 == '\0')) ||
                           ((uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06' ||
                            (uVar1 >> 3 != param_1)))) {
                            iVar3 = fcn.0000353a();
                            uVar1 = (**(iVar3 + 4))(0x136);
                            iVar3 = fcn.0000353a();
                            cVar2 = (**(iVar3 + 4))(0x145);
                            iVar3 = fcn.0000353a();
                            uVar5 = (**(iVar3 + 4))(0x12d);
                            if (((uVar5 < 6) || (cVar2 == '\0')) ||
                               ((uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06' ||
                                (uVar1 >> 3 != param_1)))) {
                                iVar3 = fcn.0000353a();
                                uVar1 = (**(iVar3 + 4))(0x137);
                                iVar3 = fcn.0000353a();
                                cVar2 = (**(iVar3 + 4))(0x146);
                                iVar3 = fcn.0000353a();
                                uVar5 = (**(iVar3 + 4))(0x12d);
                                if ((((uVar5 < 7) || (cVar2 == '\0')) ||
                                    (uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06')) ||
                                   (uVar1 >> 3 != param_1)) {
                                    iVar3 = fcn.0000353a();
                                    uVar1 = (**(iVar3 + 4))(0x138);
                                    iVar3 = fcn.0000353a();
                                    cVar2 = (**(iVar3 + 4))(0x147);
                                    iVar3 = fcn.0000353a();
                                    uVar5 = (**(iVar3 + 4))(0x12d);
                                    if (((uVar5 < 8) || (cVar2 == '\0')) ||
                                       ((uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06' ||
                                        (uVar1 >> 3 != param_1)))) {
                                        iVar3 = fcn.0000353a();
                                        uVar1 = (**(iVar3 + 4))(0x139);
                                        iVar3 = fcn.0000353a();
                                        cVar2 = (**(iVar3 + 4))(0x148);
                                        iVar3 = fcn.0000353a();
                                        uVar5 = (**(iVar3 + 4))(0x12d);
                                        if ((((uVar5 < 9) || (cVar2 == '\0')) ||
                                            (uVar4 = CONCAT31(uVar5 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06')) ||
                                           (uVar1 >> 3 != param_1)) {
                                            iVar3 = fcn.0000353a();
                                            uVar1 = (**(iVar3 + 4))(0x13a);
                                            iVar3 = fcn.0000353a();
                                            cVar2 = (**(iVar3 + 4))(0x149);
                                            iVar3 = fcn.0000353a();
                                            uVar4 = (**(iVar3 + 4))(0x12d);
                                            if ((((uVar4 < 10) || (cVar2 == '\0')) ||
                                                (uVar4 = CONCAT31(uVar4 >> 8,uVar1) & 0xffffff06, uVar4 != '\x06')) ||
                                               (uVar1 >> 3 != param_1)) {
                                                return uVar4 & 0xffffff00;
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
        uVar4 = CONCAT31(uVar4 >> 8,cVar2);
    }
    return uVar4;
}


/* fcn.000090bc @ 0x90bc */

uint32_t fcn.000090bc(void)

{
    int16_t iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.00002c1a(2,0);
    uVar2 = fcn.000033c5();
    if ((uVar2 == 0x906a0) &&
       ((((uVar2 = 0x4602, iVar1 == 0x4602 || (uVar2 = 0x460a, iVar1 == 0x460a)) || (uVar2 = 0x461a, iVar1 == 0x461a)
         ) || (uVar2 = 0x4622, iVar1 == 0x4622)))) {
        return CONCAT31(uVar2 >> 8,1);
    }
    return uVar2 & 0xffffff00;
}


/* fcn.000033e5 @ 0x33e5 */

void fcn.000033e5(void)

{
    int32_t var_4h;
    
    fcn.00003572(0,0,0);
    fcn.00002c1a(2,0);
    fcn.00008fc3();
    return;
}


/* fcn.0000341e @ 0x341e */

int16_t fcn.0000341e(void)

{
    ulong uVar1;
    uint64_t uVar2;
    uint8_t uVar3;
    char cVar4;
    int iVar5;
    uint32_t uVar6;
    int16_t iVar7;
    uint32_t uVar8;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_4h;
    
    uVar1 = rdmsr(0x614);
    uVar2 = rdmsr(0x606);
    if ((uVar2 & 0xf) != 0) {
        uVar3 = (uVar2 & 0xf) - 1;
        iVar5 = 0;
        if ((uVar3 & 0x20) == 0) {
            iVar5 = 2;
        }
        uVar6 = iVar5 << (uVar3 & 0x1f);
        cVar4 = fcn.000091c0();
        if ((cVar4 == '\0') || (uVar6 != '\0')) goto code_r0x0000347e;
    }
    uVar6 = 1;
code_r0x0000347e:
    uVar8 = uVar1 & 0x7fff;
    uVar6 = uVar6 & 0xff;
    iVar7 = ((0U % uVar6 << 0x20 | uVar8) / uVar6) * 100;
    uVar8 = uVar8 % uVar6;
    if (uVar8 != 0) {
        iVar7 = iVar7 + (uVar8 * 100) / uVar6;
    }
    return iVar7;
}


/* fcn.000033c5 @ 0x33c5 */

uint32_t __fastcall fcn.000033c5(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00003572(0,0,0);
    return param_1 & 0xfff0ff0;
}


/* fcn.000073e2 @ 0x73e2 */

uint __fastcall fcn.000073e2(int param_1,int param_2)

{
    int16_t iVar1;
    uint32_t uVar2;
    ulong uVar3;
    int iVar4;
    char cVar5;
    uint16_t uVar6;
    uint8_t uVar7;
    uint noname_0;
    uint32_t uVar8;
    int iVar9;
    char cVar10;
    int iVar11;
    uchar *puVar12;
    int iVar13;
    int iStack_30;
    int iStack_2c;
    int aiStack_28 [5];
    int iStack_14;
    uint32_t uStack_10;
    int iStack_c;
    int iStack_8;
    int iStack_4;
    
    aiStack_28[1] = 0;
    aiStack_28[0] = 0;
    aiStack_28[2] = 0;
    iStack_30 = 0;
    iStack_14 = 0;
    aiStack_28[3] = 0;
    iStack_2c = 0;
    aiStack_28[4] = param_1;
    iStack_4 = param_2;
    fcn.0000379c(param_1,aiStack_28 + 1);
    fcn.000034c4(aiStack_28);
    fcn.0000379c(noname_0,aiStack_28 + 2);
    fcn.000034c4(&iStack_30);
    fcn.000034c4(&iStack_14);
    fcn.000034c4(aiStack_28 + 3);
    fcn.000034c4(&iStack_2c);
    iVar4 = iStack_14;
    uVar3 = rdmsr(0xce);
    uStack_10 = uVar3 >> 0x28;
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(param_2 + 0x16) << 0x15 ^ *(iStack_30 + 0x1c)) & 0x200000;
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(param_2 + 0x1d) << 7 ^ *(iStack_30 + 0x1c)) & 0x80;
    *(aiStack_28[3] + 0x74) = *(aiStack_28[3] + 0x74) ^ (*(param_2 + 0x45) ^ *(aiStack_28[3] + 0x74)) & 1;
    uVar8 = *(aiStack_28[3] + 0x74);
    if ((*(param_2 + 0x45) == '\x01') || (*(param_1 + 0x6d3) == '\x01')) {
        *(aiStack_28[3] + 0x74) = uVar8 & 0xfffffffd;
    }
    else {
        *(aiStack_28[3] + 0x74) = (*(param_2 + 0x46) * 2 ^ uVar8) & 2 ^ uVar8;
    }
    *(aiStack_28[3] + 0x60) = *(param_2 + 0x5b) / 0x7d;
    *(aiStack_28[3] + 0x62) = *(param_2 + 0x5f) / 0x7d;
    *(aiStack_28[3] + 0x5c) = *(param_2 + 99);
    *(aiStack_28[3] + 0x5d) = *(param_2 + 100);
    *(aiStack_28[3] + 0x68) = *(param_2 + 0x65) / 0x7d;
    *(aiStack_28[3] + 0x6a) = *(param_2 + 0x69) / 0x7d;
    *(aiStack_28[3] + 100) = *(param_2 + 0x6d);
    *(aiStack_28[3] + 0x65) = *(param_2 + 0x6e);
    *(aiStack_28[3] + 0x70) = *(param_2 + 0x6f) / 0x7d;
    *(aiStack_28[3] + 0x72) = *(param_2 + 0x73) / 0x7d;
    *(aiStack_28[3] + 0x6c) = *(param_2 + 0x77);
    *(aiStack_28[3] + 0x6d) = *(param_2 + 0x78);
    if (*(param_2 + 0x1b) != '\0') {
        *(iStack_30 + 0x2c) = *(param_2 + 0x17) / 0x7d;
        *(iStack_30 + 0x34) = *(param_2 + 0x1c);
    }
    *(iStack_30 + 0x2e) = *(param_2 + 0x1e) / 0x7d;
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(param_2 + 0x30) << 8 ^ *(iStack_30 + 0x1c)) & 0x100;
    if (*(param_2 + 0x22) != '\0') {
        *(iStack_30 + 0x30) = *(param_2 + 0x23) / 0x7d;
        *(iStack_30 + 0x38) = *(param_2 + 0x27);
        uVar8 = *(param_2 + 0x28) << 9 | *(iStack_30 + 0x1c) & 0xfffe01ff;
        *(iStack_30 + 0x1c) = uVar8;
        *(iStack_30 + 0x1c) = (*(param_2 + 0x29) << 0x11 ^ uVar8) & 0x20000 ^ uVar8;
    }
    if (*(param_2 + 0x2a) != '\0') {
        *(iStack_30 + 0x32) = *(param_2 + 0x2b) / 0x7d;
        *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(param_2 + 0x2f) << 0x12 ^ *(iStack_30 + 0x1c)) & 0x40000;
    }
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(param_2 + 0x31) ^ *(iStack_2c + 0x1c)) & 1;
    *(iStack_2c + 0x1c) = *(iStack_2c + 0x1c) ^ (*(param_2 + 0x37) << 9 ^ *(iStack_2c + 0x1c)) & 0x200;
    *(iStack_2c + 0x20) = *(param_2 + 0x32) / 0x7d;
    *(iStack_2c + 0x1c) = *(param_2 + 0x36) * 2 | *(iStack_2c + 0x1c) & 0xfffffe01;
    *(iStack_2c + 0x22) = *(param_2 + 0x38) / 0x7d;
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(param_2 + 0x4a) << 5 ^ *(iStack_30 + 0x1c)) & 0x60;
    uVar8 = (*(param_2 + 0xb) << 3 ^ *(iStack_30 + 0x1c)) & 0x18 ^ *(iStack_30 + 0x1c);
    *(iStack_30 + 0x1c) = uVar8;
    uVar8 = (*(param_2 + 0x20c) << 0x16 ^ uVar8) & 0x400000 ^ uVar8;
    *(iStack_30 + 0x1c) = uVar8;
    *(iStack_30 + 0x1c) = (*(param_2 + 0x228) << 0x18 ^ uVar8) & 0x1000000 ^ uVar8;
    *(iStack_30 + 0x29) = *(iStack_30 + 0x29) ^ (*(param_2 + 0xc) ^ *(iStack_30 + 0x29)) & 1;
    uVar7 = (*(param_2 + 0xe) << 2 ^ *(iStack_30 + 0x29)) & 4 ^ *(iStack_30 + 0x29);
    *(iStack_30 + 0x29) = uVar7;
    uVar7 = (*(param_2 + 0xf) << 3 ^ uVar7) & 8 ^ uVar7;
    *(iStack_30 + 0x29) = uVar7;
    uVar7 = (*(param_2 + 0x10) << 4 ^ uVar7) & 0x10 ^ uVar7;
    *(iStack_30 + 0x29) = uVar7;
    *(iStack_30 + 0x29) = (*(param_2 + 0x11) << 5 ^ uVar7) & 0x20 ^ uVar7;
    *(iStack_30 + 0x1c) = *(iStack_30 + 0x1c) ^ (*(param_2 + 0x227) << 0x17 ^ *(iStack_30 + 0x1c)) & 0x800000;
    uVar8 = *(iStack_30 + 0x1c);
    if (*(aiStack_28[4] + 0x6d3) == '\x01') {
        *(iStack_30 + 0x1c) = uVar8 & 0xfdffffff;
    }
    else {
        *(iStack_30 + 0x1c) = (*(param_2 + 0x2ad) << 0x19 ^ uVar8) & 0x2000000 ^ uVar8;
    }
    uVar7 = uVar3 >> 0x28;
    if (*(param_2 + 0x81) < uVar7) {
        *(aiStack_28[3] + 0x1c) = uVar7;
    }
    else {
        *(aiStack_28[3] + 0x1c) = *(param_2 + 0x81);
    }
    uVar7 = 0;
    *(aiStack_28[3] + 0x1d) = *(param_2 + 0x80);
    if (*(param_2 + 0x80) != '\0') {
        do {
            uVar8 = uVar7;
            uVar7 = uVar7 + 1;
            *(aiStack_28[3] + 0x24 + uVar8) = *(uVar8 + 0x81 + param_2);
        } while (uVar7 < *(param_2 + 0x80));
    }
    if (0x10 < *(param_2 + 0x80)) {
        puVar12 = aiStack_28[3] + 0x4c;
        iVar9 = param_2 - puVar12;
        iVar11 = 0x10;
        do {
            *puVar12 = puVar12[iVar9 + 0xa9];
            puVar12 = puVar12 + 1;
            iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
    }
    if (*(param_2 + 0xcc) != '\0') {
        puVar12 = iStack_30 + 0x48;
        aiStack_28[3] = 8;
        aiStack_28[4] = param_2 - puVar12;
        iVar11 = param_2 - puVar12;
        uStack_10 = iStack_30 - puVar12;
        iVar9 = param_2 - puVar12;
        iVar13 = iStack_30 - puVar12;
        iStack_c = param_2 - puVar12;
        iStack_8 = iStack_30 - puVar12;
        do {
            *puVar12 = puVar12[iVar11 + 0xe6];
            puVar12[iVar13 + 0x40] = puVar12[iVar9 + 0xd6];
            puVar12[uStack_10 + 0x58] = puVar12[aiStack_28[4] + 0x106];
            puVar12[iStack_8 + 0x50] = puVar12[iStack_c + 0xf6];
            puVar12 = puVar12 + 1;
            aiStack_28[3] = aiStack_28[3] + -1;
        } while (aiStack_28[3] != 0);
        aiStack_28[3] = 0;
        param_2 = iStack_4;
    }
    *(iStack_30 + 0x2a) = *(param_2 + 0x210);
    *(iStack_30 + 0x2b) = *(param_2 + 0x211);
    *(iStack_14 + 0x20) = *(param_2 + 0x127);
    uVar6 = *(param_2 + 0x128);
    if (*(param_2 + 0x12a) == '\x01') {
        uVar6 = ~uVar6 + 1;
    }
    *(iStack_14 + 0xb8) = uVar6;
    *(iStack_2c + 0x24) = *(param_2 + 299);
    *(iStack_14 + 0x24) = *(param_2 + 0x1f9);
    *(iStack_14 + 0x22) = *(param_2 + 0x1fb);
    *(iStack_14 + 0xd5) = *(param_2 + 0x2f6);
    *(iStack_14 + 0x1c) = *(iStack_14 + 0x1c) ^ (*(param_2 + 0x207) << 3 ^ *(iStack_14 + 0x1c)) & 8;
    *(iStack_14 + 0xb4) = *(param_2 + 0x208);
    *(iStack_14 + 0xb6) = *(param_2 + 0x20a);
    *(iStack_14 + 0xdc) = *(param_2 + 0x2e8);
    *(iStack_14 + 0xde) = *(param_2 + 0x2ea);
    *(iStack_14 + 0x138) = *(param_2 + 0x2ef);
    *(iStack_14 + 0x154) = *(param_2 + 0x385);
    *(iStack_14 + 0x158) = *(param_2 + 0x389);
    *(iStack_14 + 0x15c) = *(param_2 + 0x38d);
    *(iStack_14 + 0x160) = *(param_2 + 0x391);
    *(iStack_14 + 0x13b) = *(param_2 + 0x2f2);
    *(iStack_14 + 0x13c) = *(param_2 + 0x2f3);
    *(iStack_14 + 0x13d) = *(param_2 + 0x2f4);
    *(iStack_14 + 0x13e) = *(param_2 + 0x2f5);
    uVar6 = *(param_2 + 0x2ec);
    if (*(param_2 + 0x2ee) == '\x01') {
        uVar6 = ~uVar6 + 1;
    }
    *(iStack_14 + 0xe0) = uVar6;
    cVar5 = fcn.000090bc();
    uVar8 = 0;
    do {
        cVar10 = uVar8;
        if (*(uVar8 + 0x12d + param_2) != '\0') {
            *(uVar8 + 0x96 + iVar4) = *(uVar8 + 0x12d + param_2);
            *(iVar4 + 0x46 + uVar8 * 2) = *(param_2 + 0x146 + uVar8 * 2);
            *(iVar4 + 0x50 + uVar8 * 2) = *(param_2 + 0x150 + uVar8 * 2);
            *(iVar4 + 0x5a + uVar8 * 2) = *(param_2 + 0x15a + uVar8 * 2);
            *(uVar8 + 0x8c + iVar4) = *(uVar8 + 0x164 + param_2);
            *(uVar8 + 0x91 + iVar4) = *(uVar8 + 0x169 + param_2);
            *(iVar4 + 0x82 + uVar8 * 2) = *(param_2 + 0x16e + uVar8 * 2);
            uVar6 = *(param_2 + 0x178 + uVar8 * 2);
            if (*(uVar8 + 0x182 + param_2) == '\x01') {
                uVar6 = ~uVar6 + 1;
            }
            *(iVar4 + 100 + uVar8 * 2) = uVar6;
            iVar1 = *(param_2 + 0x187 + uVar8 * 2);
            if (iVar1 != 0) {
                *(iVar4 + 0x6e + uVar8 * 2) = iVar1;
            }
            *(uVar8 + 0x14c + iVar4) = 0;
            uVar2 = *(aiStack_28[0] + 0x38);
            if (((((*(aiStack_28[0] + 0x1c) & 1) == 0) || (((uVar2 >> 0x18 & 1) != 0 && (cVar10 == '\0')))) ||
                (((uVar2 >> 0x19 & 1) != 0 && (cVar10 == '\x01')))) ||
               (((uVar2 >> 0x1a & 1) != 0 && (cVar10 == '\x02')))) {
                *(uVar8 + 0x14c + iVar4) = *(uVar8 + 0x379 + param_2);
            }
            if ((*(uVar8 + 0x379 + param_2) == '\x01') && (iVar1 = *(param_2 + 0x32a + uVar8 * 2), iVar1 != 0)) {
                *(iVar4 + 0x140 + uVar8 * 2) = iVar1;
            }
            iVar1 = *(param_2 + 0x1be + uVar8 * 2);
            if (iVar1 != 0) {
                *(iVar4 + 0x78 + uVar8 * 2) = iVar1;
            }
            iVar1 = *(param_2 + 0x191 + uVar8 * 2);
            if (iVar1 != 0) {
                *(iVar4 + 0x28 + uVar8 * 2) = iVar1;
            }
            *(iVar4 + 0xbc + uVar8 * 4) = *(param_2 + 0x1a0 + uVar8 * 4);
            *(uVar8 + 0xd0 + iVar4) = *(uVar8 + 0x1b9 + param_2);
            *(uVar8 + 0x9b + iVar4) = *(uVar8 + 0x19b + param_2);
            *(uVar8 + 0xa5 + iVar4) = *(uVar8 + 0x1b4 + param_2);
        }
        iVar1 = *(param_2 + 0x132 + uVar8 * 2);
        if (iVar1 != 0) {
            *(iVar4 + 0x32 + uVar8 * 2) = iVar1;
        }
        iVar1 = *(param_2 + 0x13c + uVar8 * 2);
        if (iVar1 != 0) {
            *(iVar4 + 0x3c + uVar8 * 2) = iVar1;
        }
        *(uVar8 + 0xaa + iVar4) = *(uVar8 + 0x1fd + param_2);
        *(iVar4 + 0xaf + uVar8) = *(param_2 + 0x202 + uVar8);
        uVar8 = cVar10 + 1U;
    } while (cVar10 + 1U < (cVar5 != '\0') + 2U);
    *(iVar4 + 0x1c) = *(iVar4 + 0x1c) ^ (*(param_2 + 0x1fc) ^ *(iVar4 + 0x1c)) & 1;
    *(iVar4 + 0xd8) = *(param_2 + 0x2d9);
    *(iVar4 + 0xd9) = *(param_2 + 0x2da);
    *(iVar4 + 0xda) = *(param_2 + 0x2db);
    *(iVar4 + 0x116) = *(param_2 + 0x313);
    return 0;
}


/* fcn.000094eb @ 0x94eb */

int __fastcall fcn.000094eb(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    uint32_t uVar3;
    uint32_t uStack_1c;
    uint32_t uStack_18;
    uint uStack_14;
    uint uStack_10;
    uint uStack_c;
    
    uStack_18 = param_1 & 0x1f;
    cVar1 = fcn.0000a75e();
    if ((cVar1 == '\0') || (cVar1 = fcn.0000a73e(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    uStack_14 = fcn.0000a7bd();
    uStack_10 = fcn.0000a7bd();
    uStack_c = fcn.0000a7bd();
    fcn.0000a8ee(param_2);
    uVar3 = (param_1 & 0x1ff) >> 5;
    iVar2 = fcn.00009247(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    *param_2 = ((uStack_1c >> (uStack_18 & 0x1f)) << 6 ^ *param_2) & 0x40 ^ *param_2 | 0x20;
    iVar2 = fcn.00009247(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = ~((uStack_1c >> (uStack_18 & 0x1f)) << 10) & 0x400 | param_2[1] & 0xffffe3ff | 0x200;
    iVar2 = fcn.00009247(uVar3,&uStack_1c);
    if (iVar2 < 0) {
        return iVar2;
    }
    param_2[1] = param_2[1] | ~((uStack_1c >> (uStack_18 & 0x1f)) << 0xc) & 0x1000 | 0x800;
    return 0;
}


/* fcn.00009613 @ 0x9613 */

int __fastcall fcn.00009613(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint32_t uVar2;
    int iVar3;
    uint8_t uVar4;
    uint32_t uVar5;
    int iVar6;
    uint32_t uVar7;
    uint uStack_24;
    uint uStack_20;
    uint uStack_1c;
    uint32_t uStack_14;
    uint32_t uStack_10;
    uint32_t uStack_c;
    
    fcn.000001b8(&uStack_24,0x10);
    fcn.000001b8(&uStack_14,0x10);
    uVar7 = (param_1 & 0x1ff) >> 5;
    uVar4 = param_1 & 0x1f;
    cVar1 = fcn.0000a75e();
    if ((cVar1 == '\0') || (cVar1 = fcn.0000a73e(), cVar1 == '\0')) {
        return -0x7ffffffd;
    }
    if (((*param_2 & 0x48000) == 0x48000) && ((param_2[1] & 0x600) != 0x600)) {
        return -0x7ffffffe;
    }
    fcn.0000a9a2(&uStack_24,&uStack_14);
    fcn.0000a7f3(~uStack_14,uStack_24);
    fcn.0000a7f3(~uStack_10,uStack_20);
    fcn.0000a7f3(~uStack_c,uStack_1c);
    uVar5 = *param_2;
    if ((uVar5 & 0x28000) == 0x28000) {
        uVar2 = 1 << uVar4;
        uVar5 = uVar2;
    }
    else {
        uVar2 = (uVar5 >> 5 & 1) << uVar4;
        uVar5 = (uVar5 >> 6 & 1) << uVar4;
    }
    fcn.0000931f(uVar7,~uVar2,uVar5);
    fcn.0000931f(uVar7,~((*param_2 >> 0xf & 1) << uVar4),(*param_2 >> 0x12 & 1) << uVar4);
    iVar6 = (*param_2 >> 0x10 & 1) << uVar4;
    iVar3 = fcn.0000931f(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
    if ((iVar3 == -0x7ffffffd) && (iVar6 != 0)) {
code_r0x00009799:
        iVar3 = -0x7ffffffd;
    }
    else {
        iVar6 = (*param_2 >> 0x11 & 1) << uVar4;
        iVar3 = fcn.0000931f(uVar7,~((*param_2 >> 0xf & 1) << uVar4),iVar6);
        if (iVar3 == -0x7ffffffd) {
            if (iVar6 != 0) goto code_r0x00009799;
            iVar3 = 0;
        }
        if ((param_2[1] & 0x1e00) != 0) {
            iVar3 = fcn.0000a640();
        }
    }
    return iVar3;
}


/* fcn.00009c41 @ 0x9c41 */

uint __fastcall fcn.00009c41(int param_1)

{
    int iVar1;
    uint uVar2;
    uint32_t var_4h;
    
    iVar1 = fcn.00009bb9();
    if ((iVar1 < 0) || (param_1 != 0x6f)) {
        uVar2 = 0;
    }
    else {
        uVar2 = 1;
    }
    return uVar2;
}


/* fcn.000080f3 @ 0x80f3 */

void fcn.000080f3(void)

{
    int iVar1;
    int iVar2;
    int iVar3;
    int *piVar4;
    uint uVar5;
    uint uStack_cd0;
    uint *puStack_ccc;
    uint32_t uStack_cc8;
    int aiStack_cc0 [2];
    uchar auStack_cb8 [1948];
    char cStack_51c;
    char acStack_50f [1291];
    
    iVar3 = 2;
    uVar5 = 2;
    fcn.000001b8(aiStack_cc0);
    iVar1 = fcn.0000379c(uVar5,&puStack_ccc);
    if (-1 < iVar1) {
        uStack_cd0 = 0xca9;
        iVar1 = (**puStack_ccc)(puStack_ccc,0xffd4764c,0xffd455bc,0,&uStack_cd0,auStack_cb8);
        if (-1 < iVar1) {
            iVar1 = 0;
            piVar4 = aiStack_cc0;
            do {
                if ((cStack_51c == '\0') || (acStack_50f[iVar1] == '\0')) {
                    if (iVar1 == 0) {
                        iVar2 = fcn.0000353a();
                        uVar5 = 0x26;
                    }
                    else {
                        if (iVar1 != 1) {
                            *piVar4 = 0;
                            goto code_r0x000081c5;
                        }
                        iVar2 = fcn.0000353a();
                        uVar5 = 0x27;
                    }
                    iVar2 = (**(iVar2 + 0xc))(uVar5);
                    *piVar4 = iVar2;
                    if (iVar2 != 0) {
                        fcn.000094eb();
                        uStack_cc8 = uStack_cc8 & 0xffffbfff | 0x2000;
                        fcn.00009613();
                    }
                }
code_r0x000081c5:
                iVar1 = iVar1 + 1;
                piVar4 = piVar4 + 1;
                iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
        }
    }
    return;
}


/* fcn.0000912b @ 0x912b */

uint8_t __cdecl fcn.0000912b(int32_t arg_8h,int32_t arg_ch)

{
    uint8_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    char cVar4;
    
    uVar2 = fcn.00002be3(arg_8h + 6,arg_ch + (0xfffffff9 < arg_8h));
    if ((uVar2 & 0x10) != 0) {
        uVar1 = fcn.00002be3(arg_8h + 0xe,arg_ch + (0xfffffff1 < arg_8h));
        uVar2 = (-((uVar1 & 0x7f) != 2) & 0x20U) + 0x14;
        uVar1 = fcn.00002be3(uVar2 + arg_8h,arg_ch + CARRY4(uVar2,arg_8h));
        uVar2 = uVar1 & 0xfc;
        if ((uVar1 & 0xfc) != 0) {
            cVar4 = '\0';
            do {
                if (cVar4 == -1) {
                    return 0;
                }
                uVar3 = fcn.00002c1a(uVar2 + arg_8h,arg_ch + CARRY4(uVar2,arg_8h));
                uVar3 = uVar3 & 0xffff;
                cVar4 = uVar3;
                if (cVar4 == '\r') {
                    return -(0x3f < uVar2) & uVar2;
                }
                uVar2 = uVar3 >> 8;
            } while (uVar3 >> 8 != '\0');
        }
    }
    return 0;
}


/* fcn.00008801 @ 0x8801 */

uint fcn.00008801(void)

{
    uint noname_0;
    uchar uStack_be;
    char cStack_bd;
    uint *puStack_bc;
    uint uStack_b8;
    uint *apuStack_b4 [26];
    int iStack_4c;
    
    uStack_be = 0;
    fcn.00000178(&cStack_bd,0xfe410d41,1);
    fcn.00000178(&uStack_be,0xfe410d46,1);
    fcn.0000379c(noname_0,&puStack_bc);
    uStack_b8 = 0xb4;
    (**puStack_bc)(puStack_bc,0xffd47794,0xffd458bc,0,&uStack_b8,apuStack_b4);
    if (iStack_4c == 0x10ec0256) {
        *0xffd47820 = apuStack_b4[0];
        if (apuStack_b4[0] == 0x13051d05) {
            *0xffd47820 = 0x13531d05;
        }
        if (*0xffd47820 == 0x12411d05) {
            if (((cStack_bd != '\r') && (cStack_bd != '\v')) && (cStack_bd != '\x01')) {
                *0xffd47820 = 0x12411d05;
                return 0;
            }
            *0xffd47820 = 0x12841d05;
        }
        if (*0xffd47820 == 0x12431d05) {
            if (cStack_bd == '\x02') {
                *0xffd47820 = 0x128e1d05;
                return 0;
            }
            if (((cStack_bd != '\r') && (cStack_bd != '\v')) && (cStack_bd != '\x01')) {
                *0xffd47820 = 0x128d1d05;
                return 0;
            }
            *0xffd47820 = 0x12851d05;
        }
        puStack_bc = 0x12951d05;
        if (*0xffd47820 == 0x12951d05) {
            if (cStack_bd == '\x02') {
                *0xffd47820 = 0x12421d05;
                return 0;
            }
            if (((cStack_bd != '\r') && (cStack_bd != '\x01')) && (cStack_bd != '\v')) goto code_r0x000089a0;
            *0xffd47820 = 0x12961d05;
        }
        puStack_bc = 0x12971d05;
        if (*0xffd47820 != 0x12971d05) {
            return 0;
        }
        if ((((cStack_bd != '\t') && (cStack_bd != '\x03')) && (cStack_bd != '\b')) && (cStack_bd != '\0'))
        goto code_r0x000089a0;
        puStack_bc = 0x133e1d05;
    }
    if ((iStack_4c == 0x14f11f86) || (iStack_4c == 0x14f11f87)) {
        puStack_bc = apuStack_b4[0];
        if (apuStack_b4[0] == 0x12411d05) {
            if (cStack_bd == '\t') {
                *0xffd47820 = 0x12901d05;
                return 0;
            }
            puStack_bc = 0x12921d05;
        }
        if (puStack_bc == 0x13051d05) {
            if (cStack_bd != '\t') {
                *0xffd47820 = puStack_bc;
                return 0;
            }
            puStack_bc = 0x12081d05;
        }
        if (puStack_bc == 0x12431d05) {
            puStack_bc = ((cStack_bd != '\t') - 1 & 0xfffe0000) + 0x12931d05;
        }
    }
code_r0x000089a0:
    *0xffd47820 = puStack_bc;
    return 0;
}


/* fcn.00008777 @ 0x8777 */

void __fastcall fcn.00008777(uint32_t *param_1,uint32_t *param_2,uint32_t param_3,uint param_4,uint32_t *param_5)

{
    *param_1 = param_3 >> 0x18;
    *param_5 = param_3 >> 8 & 7;
    *param_2 = param_3 >> 0x10 & 0x1f;
    return;
}


/* fcn.000087b8 @ 0x87b8 */

int16_t fcn.000087b8(uint32_t param_1,int param_2)

{
    uint8_t uVar1;
    int16_t iVar2;
    
    iVar2 = fcn.00002c1a(param_1 + 10,param_2 + (0xfffffff5 < param_1));
    if (((iVar2 == 0x604) && (uVar1 = fcn.0000912b(param_1,param_2), uVar1 != 0)) && (uVar1 + 4 != 0)) {
        return uVar1 + 4;
    }
    return 0x2c;
}


/* fcn.0000a2b6 @ 0xa2b6 */

int __fastcall fcn.0000a2b6(uint param_1,uint *param_2,uchar *param_3)

{
    int iVar1;
    uint noname_0;
    ushort uVar2;
    char cStack_bd;
    uint uStack_bc;
    uint *puStack_b8;
    int aiStack_b4 [26];
    int iStack_4c;
    
    fcn.00000178(&cStack_bd,0xfe410d41,1);
    fcn.0000379c(noname_0,&puStack_b8);
    uStack_bc = 0xb4;
    iVar1 = (**puStack_b8)(puStack_b8,0xffd47794,0xffd458bc,0,&uStack_bc,aiStack_b4);
    if (iVar1 < 0) goto code_r0x0000a562;
    if (iStack_4c == 0x10ec0256) {
        uVar2 = 0x54;
        if (aiStack_b4[0] == 0x13051d05) {
            *0xffd46f5c = 0xffd46a14;
            *0xffd46f5a = uVar2;
        }
        if (aiStack_b4[0] == 0x12411d05) {
            if (((cStack_bd != '\r') && (cStack_bd != '\v')) && (cStack_bd != '\x01')) {
                *0xffd46f5c = 0xffd46b64;
                *0xffd46f5a = uVar2;
                goto code_r0x0000a562;
            }
            *0xffd46f5c = 0xffd46f84;
            *0xffd46f5a = uVar2;
        }
        if (aiStack_b4[0] == 0x12431d05) {
            if (cStack_bd == '\x02') {
                *0xffd46f5a = 0x54;
                *0xffd46f5c = 0xffd45e0c;
                goto code_r0x0000a562;
            }
            if (((cStack_bd != '\r') && (cStack_bd != '\v')) && (cStack_bd != '\x01')) {
                *0xffd46f5a = 0x54;
                *0xffd46f5c = 0xffd4606c;
                goto code_r0x0000a562;
            }
            *0xffd46f5c = 0xffd46cb4;
            *0xffd46f5a = uVar2;
        }
        if (aiStack_b4[0] == 0x12951d05) {
            if (cStack_bd == '\x02') {
                *0xffd46f5a = 0x54;
                *0xffd46f5c = 0xffd46774;
                goto code_r0x0000a562;
            }
            if (((cStack_bd != '\r') && (cStack_bd != '\x01')) && (cStack_bd != '\v')) {
                *0xffd46f5a = 0x54;
                *0xffd46f5c = 0xffd462c4;
                goto code_r0x0000a562;
            }
            *0xffd46f5c = 0xffd46414;
            *0xffd46f5a = uVar2;
        }
        if (aiStack_b4[0] != 0x12971d05) goto code_r0x0000a562;
        if ((((cStack_bd != '\t') && (cStack_bd != '\x03')) && (cStack_bd != '\b')) && (cStack_bd != '\0')) {
            *0xffd46f5a = 0x54;
            *0xffd46f5c = 0xffd46e04;
            goto code_r0x0000a562;
        }
        *0xffd46f5c = 0xffd468c4;
        *0xffd46f5a = uVar2;
    }
    uVar2 = 0x41;
    if (iStack_4c == 0x14f11f86) {
        if (aiStack_b4[0] == 0x12411d05) {
            if (cStack_bd != '\t') {
                *0xffd46f74 = 0xffd461bc;
                *0xffd46f72 = uVar2;
                goto code_r0x0000a4ae;
            }
        }
        else {
code_r0x0000a4ae:
            if (aiStack_b4[0] == 0x13051d05) {
                if (cStack_bd == '\t') {
                    *0xffd46f72 = 0x44;
                    *0xffd46f74 = 0xffd45f5c;
                }
                goto code_r0x0000a562;
            }
            if (cStack_bd != '\t') {
                *0xffd46f74 = 0xffd46564;
                *0xffd46f72 = uVar2;
                goto code_r0x0000a4f9;
            }
        }
        *0xffd46f72 = 0x41;
        *0xffd46f74 = 0xffd4666c;
        goto code_r0x0000a562;
    }
code_r0x0000a4f9:
    if (iStack_4c != 0x14f11f87) goto code_r0x0000a562;
    if (aiStack_b4[0] == 0x12411d05) {
        if (cStack_bd != '\t') {
            *0xffd46f80 = 0xffd461bc;
            *0xffd46f7e = uVar2;
            goto code_r0x0000a522;
        }
code_r0x0000a546:
        *0xffd46f80 = 0xffd4666c;
    }
    else {
code_r0x0000a522:
        if (aiStack_b4[0] == 0x13051d05) {
            if (cStack_bd == '\t') {
                *0xffd46f7e = 0x44;
                *0xffd46f80 = 0xffd45f5c;
            }
            goto code_r0x0000a562;
        }
        if (cStack_bd == '\t') goto code_r0x0000a546;
        *0xffd46f80 = 0xffd46564;
    }
    *0xffd46f7e = 0x41;
code_r0x0000a562:
    *param_2 = 0xffd46f54;
    *param_3 = 4;
    return iVar1;
}


/* fcn.00008d14 @ 0x8d14 */

int32_t fcn.00008d14(void)

{
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00003572(&var_10h,&var_ch,&var_8h);
    return var_4h;
}


/* fcn.0000ab76 @ 0xab76 */

uint __fastcall fcn.0000ab76(uint *param_1)

{
    char cVar1;
    
    cVar1 = fcn.0000330a();
    if (cVar1 != '\0') {
        *param_1 = 0x12;
        return 0xffd473f4;
    }
    *param_1 = 0x13;
    return 0xffd471b4;
}


/* fcn.00009ca7 @ 0x9ca7 */

uint32_t __fastcall fcn.00009ca7(uint32_t param_1)

{
    char cVar1;
    
    cVar1 = fcn.0000330a();
    return ((cVar1 != '\0') + 8) * 0x100 | param_1;
}


/* fcn.00009c8b @ 0x9c8b */

//WARNING: Variable defined which should be unmapped: var_4h

void __fastcall fcn.00009c8b(uint param_1)

{
    int32_t var_4h;
    
    fcn.0000ab76(param_1,param_1);
    fcn.00009ca7();
    return;
}


/* fcn.0000a6f2 @ 0xa6f2 */

uint __fastcall fcn.0000a6f2(uint8_t *param_1,uint32_t param_2)

{
    return *(((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff);
}


/* fcn.000098a1 @ 0x98a1 */

uint __fastcall fcn.000098a1(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000091f8();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00009247(param_2,param_3);
    }
    return uVar2;
}


/* fcn.000099b5 @ 0x99b5 */

uint __fastcall fcn.000099b5(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000091f8();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00009439(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.0000a712 @ 0xa712 */

uint __fastcall fcn.0000a712(uint8_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
    uint32_t *puVar1;
    
    puVar1 = ((*param_1 | 0xfffffd00) << 8 | param_2 & 0xffff0000) << 8 | param_2 & 0xffff;
    *puVar1 = *puVar1 & param_3 | param_4;
    return 0;
}


/* fcn.00009a11 @ 0x9a11 */

uint __fastcall fcn.00009a11(uint param_1,int32_t param_2,int32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000091f8();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00009439(param_2,-1,param_3);
    }
    return uVar2;
}


/* fcn.0000992b @ 0x992b */

uint __fastcall fcn.0000992b(uint param_1,uint param_2,uint param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000091f8();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00009247(param_2,param_3);
    }
    return uVar2;
}


/* fcn.0000abde @ 0xabde */

void __thiscall fcn.0000abde(uint param_1,int16_t param_2,int32_t param_3)

{
    int32_t in_stack_0000001c;
    int32_t in_stack_00000020;
    
    fcn.0000ac05(0xf9000,0,param_2,param_3,0,param_1,param_1,0,in_stack_0000001c,in_stack_00000020);
    return;
}


/* fcn.0000ac05 @ 0xac05 */

int __cdecl
fcn.0000ac05(int32_t arg_8h,int32_t arg_ch,int16_t arg_10h,int32_t arg_14h,int8_t arg_18h,uint noname_5,
            uint noname_6,int8_t arg_24h,int32_t arg_28h,int32_t arg_2ch)

{
    uint8_t uVar1;
    int16_t iVar2;
    int iVar3;
    uint32_t uVar4;
    uint uVar5;
    int in_EDX;
    int arg_ch_00;
    int arg_8h_00;
    int arg_ch_01;
    int32_t var_1ch;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_1h;
    
    if ((in_EDX < 0) || ((1 < in_EDX && ((in_EDX < 4 || ((7 < in_EDX && (in_EDX != 0x13)))))))) {
        iVar3 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00002c1a(arg_8h,arg_ch);
        if (iVar2 == -1) {
            iVar3 = -0x7ffffff9;
        }
        else {
            arg_8h_00 = arg_8h + 0xd8;
            iVar3 = 0xfffffff;
            arg_ch_00 = arg_ch + (0xffffff27 < arg_8h);
            do {
                uVar4 = fcn.00002c1a(arg_8h_00,arg_ch_00);
                if ((uVar4 & 1) == 0) break;
                iVar3 = iVar3 + -1;
            } while (0 < iVar3);
            if (iVar3 != 0) {
                *arg_2ch = 4;
                fcn.00002d28(arg_8h + 0xd0,arg_ch + (0xffffff2f < arg_8h));
                fcn.00002d28(arg_8h + 0xdc,arg_ch + (0xffffff23 < arg_8h));
                fcn.00002cbe(arg_8h_00,arg_ch_00);
                fcn.00002c55(arg_8h + 0xda,arg_ch + (0xffffff25 < arg_8h));
                arg_ch_01 = arg_ch + (0xffffff2b < arg_8h);
                fcn.00002d28(arg_8h + 0xd4,arg_ch_01);
                fcn.00002c95(arg_8h_00,arg_ch_00);
                iVar3 = 0xfffffff;
                do {
                    uVar1 = fcn.00002c1a(arg_8h_00,arg_ch_00);
                    if ((uVar1 & 1) == 0) break;
                    iVar3 = iVar3 + -1;
                } while (0 < iVar3);
                if (iVar3 != 0) {
                    uVar1 = uVar1 >> 1 & 3;
                    *arg_2ch = uVar1;
                    if (uVar1 == 0) {
                        if (((in_EDX == 0) || (in_EDX == 4)) || (in_EDX == 6)) {
                            uVar5 = fcn.00002cf1(arg_8h + 0xd4,arg_ch_01);
                            *arg_28h = uVar5;
                        }
                        return 0;
                    }
                    return ((uVar1 != 2) - 1 & 9) + 0x80000007;
                }
            }
            iVar3 = -0x7fffffee;
        }
    }
    return iVar3;
}


/* fcn.0000a75e @ 0xa75e */

uint32_t __fastcall fcn.0000a75e(uint32_t param_1)

{
    uint16_t uVar1;
    char cVar2;
    uint32_t uVar3;
    int iVar4;
    uint32_t uVar5;
    uint32_t var_4h;
    
    cVar2 = fcn.0000330a();
    uVar3 = param_1 >> 0x18 & 0xf;
    if (uVar3 == (cVar2 != '\0') + 8) {
        uVar3 = fcn.0000ab76();
        uVar5 = param_1 >> 0x10 & 0x1f;
        if (uVar5 < param_1) {
            iVar4 = fcn.0000ab76();
            uVar1 = *(uVar5 * 0x1e + 0x1c + iVar4);
            uVar3 = uVar1;
            if ((param_1 & 0x1ff) < uVar3) {
                return CONCAT31(uVar1 >> 8,1);
            }
        }
    }
    return uVar3 & 0xffffff00;
}


/* fcn.0000a73e @ 0xa73e */

bool __fastcall fcn.0000a73e(int param_1)

{
    int iVar1;
    uint32_t var_4h;
    
    iVar1 = fcn.0000982a(param_1);
    return -1 < iVar1 && param_1 == 0;
}


/* fcn.0000a7bd @ 0xa7bd */

uint __fastcall fcn.0000a7bd(uint32_t param_1)

{
    int iVar1;
    uint32_t uVar2;
    
    iVar1 = fcn.0000ab76();
    uVar2 = fcn.0000a6be();
    return *(((*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar1) | 0xfffffd00) << 8 | uVar2 & 0xffff0000) << 8 | uVar2 & 0xffff
            );
}


/* fcn.0000a6be @ 0xa6be */

int __fastcall fcn.0000a6be(uint32_t param_1,int param_2)

{
    int iVar1;
    
    iVar1 = fcn.0000ab76();
    return *((param_1 >> 0x10 & 0x1f) * 0x1e + 0x1a + iVar1) + (param_2 + (param_1 & 0x1ff) * 4) * 4;
}


/* fcn.0000a8ee @ 0xa8ee */

void __fastcall fcn.0000a8ee(uint param_1,uint32_t *param_2,uint32_t *param_3)

{
    uint32_t uVar1;
    uchar uVar2;
    uint32_t uVar3;
    
    uVar1 = *param_2;
    uVar2 = fcn.0000aacf();
    *(param_3 + 3) = uVar2;
    uVar3 = ((uVar1 & 0x6000000 | 0x1080800) >> 3 | uVar1 & 0x1e0000) >> 1 | *param_3 & 0xff10e0ff | uVar1 & 0x300;
    *param_3 = uVar3;
    if ((uVar1 & 0x200) == 0) {
        *param_3 = (uVar1 & 0x800000 | 0x400000) >> 0xc | uVar3;
    }
    uVar3 = param_2[1];
    *param_3 = (uVar1 & 0x1c00 | 0x400200) >> 9 | (uVar1 & 1) << 0xe | *param_3 & 0xffffbfe1;
    param_3[1] = ((uVar1 & 0x10000000 | 0x8004000) >> 5 | uVar3 & 0x3c00) >> 9 | param_3[1] & 0xffc03e01;
    return;
}


/* fcn.0000aacf @ 0xaacf */

uint fcn.0000aacf(void)

{
    char cVar1;
    uint32_t extraout_EDX;
    
    cVar1 = fcn.0000ab9c();
    if (cVar1 == '\0') {
        if (extraout_EDX < 4) {
            return *(extraout_EDX * 4 + -0x2b883c);
        }
    }
    else if (extraout_EDX < 4) {
        return *(extraout_EDX * 4 + -0x2b884c);
    }
    return 0;
}


/* fcn.0000ab9c @ 0xab9c */

uchar __fastcall fcn.0000ab9c(int param_1)

{
    if ((param_1 != 0x905) && (param_1 != 0x809)) {
        return 0;
    }
    return 1;
}


/* fcn.00009247 @ 0x9247 */

//WARNING: Control flow encountered bad instruction data

ulong __fastcall fcn.00009247(uint param_1)

{
    uint uVar1;
    int32_t var_4h;
    
    uVar1 = fcn.0000ab76();
    switch(param_1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    //WARNING: Bad instruction - Truncating control flow here
        halt_baddata();
    default:
        return CONCAT44(uVar1,0x80000003);
    }
}


/* fcn.0000a9a2 @ 0xa9a2 */

int __fastcall fcn.0000a9a2(uint param_1,uint32_t *param_2,uint32_t *param_3,uint32_t *param_4)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iStack_4;
    
    iVar3 = fcn.0000aafe(&iStack_4);
    if (-1 < iVar3) {
        uVar1 = *param_2;
        *param_4 = *param_4 | -((uVar1 & 0x3f000000) != 0) & 0xc0000000;
        *param_3 = *param_3 | iStack_4 << 0x1e;
        *param_4 = *param_4 | -((uVar1 & 0x700000) != 0) & 0x6000000;
        *param_3 = *param_3 | (uVar1 & 0x600000) << 4;
        *param_4 = *param_4 | -((uVar1 & 0xf8000) != 0) & 0x1e0000;
        *param_3 = *param_3 | (uVar1 & 0xf0000) * 2;
        *param_4 = *param_4 | -((uVar1 & 0x380) != 0) & 0x300;
        uVar2 = param_2[1];
        *param_3 = *param_3 | uVar1 & 0x300;
        *param_4 = *param_4 | -((uVar1 & 0xc00) != 0) & 0x800000;
        *param_3 = *param_3 | (uVar1 & 0x800) << 0xc;
        *param_4 = *param_4 | (uVar1 & 0x6000) != 0;
        *param_3 = *param_3 | uVar1 >> 0xe & 1;
        *param_4 = *param_4 | -((uVar2 & 0x6000) != 0) & 0x10000000;
        *param_3 = *param_3 | (uVar2 & 0x4000) << 0xe;
        *param_4 = *param_4 | -((uVar1 & 0xf) != 0) & 0x1c00;
        *param_3 = *param_3 | (uVar1 & 0xe) << 9;
        param_4[1] = param_4[1] | -((uVar2 & 0x1f) != 0) & 0x3c00;
        param_3[1] = param_3[1] | (uVar2 & 0x1e) << 9;
        iVar3 = 0;
    }
    return iVar3;
}


/* fcn.0000aafe @ 0xaafe */

uint __cdecl fcn.0000aafe(int32_t arg_8h)

{
    char cVar1;
    int in_EDX;
    
    if (in_EDX != 0) {
        if (in_EDX == 1) {
            cVar1 = fcn.0000ab9c();
            *arg_8h = -(cVar1 != '\0') & 3;
            return 0;
        }
        if (in_EDX == 3) {
            *arg_8h = 1;
            return 0;
        }
        if (in_EDX == 5) {
            *arg_8h = 2;
            return 0;
        }
        if (in_EDX != 7) {
            if (in_EDX == 9) {
                *arg_8h = 3;
                return 0;
            }
            return 0x80000002;
        }
        cVar1 = fcn.0000ab9c();
        if (cVar1 == '\0') {
            return 0x80000002;
        }
    }
    *arg_8h = 0;
    return 0;
}


/* fcn.0000a7f3 @ 0xa7f3 */

//WARNING: Removing unreachable block (ram,0x0000a89d)
//WARNING: Removing unreachable block (ram,0x0000a82d)
//WARNING: Removing unreachable block (ram,0x0000a84c)
//WARNING: Removing unreachable block (ram,0x0000a8c5)

void fcn.0000a7f3(uint32_t param_1,uint32_t param_2)

{
    if (((~param_1 | param_2) & 0xfffffffe) != 0) {
        fcn.000098cb();
    }
    if (((~param_1 | param_2) & 1) != 0) {
        fcn.00009955();
    }
    fcn.0000ab76();
    fcn.0000a6be();
    fcn.0000a712(param_1,param_2);
    return;
}


/* fcn.0000931f @ 0x931f */

uint __fastcall fcn.0000931f(int param_1,uint32_t param_2,uint param_3,uint32_t param_4,uint32_t param_5)

{
    bool bVar1;
    bool bVar2;
    int iVar3;
    uint32_t uVar4;
    int16_t iVar5;
    uint32_t auStack_8 [2];
    
    bVar2 = false;
    uVar4 = 0;
    param_2 = param_2 & 0x1f;
    auStack_8[0] = 0;
    iVar3 = fcn.0000ab76();
    if (param_1 == 0) {
        iVar5 = *(param_2 * 0x1e + iVar3 + 4);
code_r0x000093b1:
        bVar1 = false;
    }
    else {
        if (param_1 == 1) {
            iVar5 = *(param_2 * 0x1e + iVar3 + 0xc);
        }
        else {
            if (param_1 == 2) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 10);
                goto code_r0x000093b1;
            }
            if (param_1 == 3) {
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x10);
            }
            else {
                if (param_1 == 4) {
                    iVar5 = *(param_2 * 0x1e + iVar3 + 0xe);
                    goto code_r0x000093b1;
                }
                if (param_1 != 5) {
                    return 0x80000003;
                }
                iVar5 = *(param_2 * 0x1e + iVar3 + 0x14);
            }
        }
        bVar1 = true;
        bVar2 = true;
    }
    if (iVar5 == -1) {
        return 0x80000003;
    }
    if ((bVar1) && (fcn.000098a1(auStack_8), uVar4 = auStack_8[0], auStack_8[0] != 0)) {
        if ((auStack_8[0] & (~param_4 | param_5)) == 0) {
            uVar4 = 0;
        }
        else {
            fcn.000099b5(auStack_8[0]);
        }
    }
    fcn.0000a712(param_4,param_5);
    if ((bVar2) && (uVar4 != 0)) {
        fcn.00009a11(uVar4);
    }
    return 0;
}


/* fcn.0000a640 @ 0xa640 */

uint __fastcall fcn.0000a640(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    uint32_t uVar2;
    
    if (param_2 != 0) {
        uVar1 = fcn.0000a5fc();
        if (uVar1 == 0) {
            return 0x8000000e;
        }
        uVar2 = fcn.0000a57c();
        if (uVar1 <= uVar2) {
            return 0x80000002;
        }
        if ((param_2 & 3) == 3) {
            *(param_1 + uVar2 * 8) = *(param_1 + uVar2 * 8) | 1 << (param_1 & 0x1f);
        }
        if ((param_2 & 0xc) == 0xc) {
            *(param_1 + 4 + uVar2 * 8) = *(param_1 + 4 + uVar2 * 8) | 1 << (param_1 & 0x1f);
        }
    }
    return 0;
}


/* fcn.000091f8 @ 0x91f8 */

uint32_t __fastcall fcn.000091f8(uint32_t param_1,uint32_t param_2)

{
    int iVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    
    iVar1 = fcn.0000ab76();
    uVar2 = fcn.00009ca7();
    if (((uVar2 <= param_1) && (uVar2 = fcn.00009c8b(), param_1 <= uVar2)) && ((param_1 & 0x1f) < param_1)) {
        uVar3 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar1) - 1;
        uVar2 = uVar3 >> 5;
        if (param_2 <= uVar2) {
            return CONCAT31(uVar3 >> 0xd,1);
        }
    }
    return uVar2 & 0xffffff00;
}


/* fcn.00009439 @ 0x9439 */

uint __cdecl fcn.00009439(int32_t arg_8h,int32_t arg_ch,int32_t arg_10h)

{
    uint16_t uVar1;
    int iVar2;
    uint uVar3;
    int in_ECX;
    uint32_t in_EDX;
    uint32_t uStack_14;
    uint32_t uStack_10;
    
    uStack_14 = 0;
    iVar2 = fcn.0000ab76();
    if (in_ECX == 6) {
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x16);
        fcn.000098a1(&uStack_14);
    }
    else {
        if (in_ECX != 7) {
            return 0x80000003;
        }
        uVar1 = *((in_EDX & 0x1f) * 0x1e + iVar2 + 0x18);
        fcn.0000992b(&uStack_14);
    }
    if (uVar1 == 0xffff) {
        return 0x80000003;
    }
    uStack_10 = uStack_14 & arg_ch | arg_10h;
    uVar3 = fcn.0000abde(uVar1 + arg_8h * 8,0);
    return uVar3;
}


/* fcn.00009a3e @ 0x9a3e */

uint __fastcall fcn.00009a3e(uint param_1,int32_t param_2,uint32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000091f8();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00009439(param_2,~param_3,0);
    }
    return uVar2;
}


/* fcn.0000abb2 @ 0xabb2 */

void __fastcall fcn.0000abb2(uint *param_1,uint *param_2)

{
    char cVar1;
    
    cVar1 = fcn.0000330a();
    if (cVar1 == '\0') {
        *param_1 = 0xffd4713c;
        *param_2 = 0xf;
    }
    else {
        *param_1 = 0xffd470d4;
        *param_2 = 0xd;
    }
    return;
}


/* fcn.00009ac7 @ 0x9ac7 */

uint __fastcall fcn.00009ac7(int *param_1,uint *param_2,int *param_3,uint *param_4,int *param_5,uint *param_6)

{
    uint uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    uint8_t *puVar5;
    uint32_t uStack_30;
    int iStack_2c;
    int aiStack_24 [9];
    
    fcn.000001b8(aiStack_24,0xc);
    fcn.000001b8(aiStack_24 + 3,0xc);
    aiStack_24[6] = *0xfe001920 & 0xf;
    aiStack_24[8] = *0xfe001920 >> 8 & 0xf;
    aiStack_24[7] = *0xfe001920 >> 4 & 0xf;
    fcn.0000abb2();
    iVar3 = 0;
    iVar4 = 3;
    do {
        uVar2 = 0;
        if (uStack_30 != 0) {
            puVar5 = iStack_2c + 5;
            do {
                if (*puVar5 == *(aiStack_24 + iVar3 + 0x18)) {
                    *(aiStack_24 + iVar3) = *(iStack_2c + uVar2 * 8);
                    *(aiStack_24 + iVar3 + 0xc) = *(iStack_2c + 4 + uVar2 * 8);
                    break;
                }
                uVar2 = uVar2 + 1;
                puVar5 = puVar5 + 8;
            } while (uVar2 < uStack_30);
        }
        iVar3 = iVar3 + 4;
        iVar4 = iVar4 + -1;
        if (iVar4 == 0) {
            if (((aiStack_24[0] == 0) || (aiStack_24[1] == 0)) || (aiStack_24[2] == 0)) {
                uVar1 = 0x80000003;
            }
            else {
                *param_1 = aiStack_24[0];
                *param_2 = aiStack_24[3];
                *param_3 = aiStack_24[1];
                *param_4 = aiStack_24[4];
                *param_5 = aiStack_24[2];
                *param_6 = aiStack_24[5];
                uVar1 = 0;
            }
            return uVar1;
        }
    } while( true );
}


/* fcn.00009bb9 @ 0x9bb9 */

uint __fastcall fcn.00009bb9(uint32_t param_1,int *param_2)

{
    char cVar1;
    uint uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    uint32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar4 = param_1 & 0x1ff;
    cVar1 = fcn.0000a75e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        fcn.00009ac7(&var_14h,&var_8h,&var_10h,&var_4h);
        uVar3 = 0;
        do {
            if ((((param_1 >> 0x10 & 0xf1f) == (&var_18h)[uVar3]) && ((&var_ch)[uVar3] * 0x20 <= uVar4)) &&
               (uVar4 < (&var_ch)[uVar3] * 0x20 + 0x20U)) {
                *param_2 = (uVar3 - (&var_ch)[uVar3]) * 0x20 + uVar4;
                goto code_r0x00009c2b;
            }
            uVar3 = uVar3 + 1;
        } while (uVar3 < 3);
        *param_2 = 0x6f;
code_r0x00009c2b:
        uVar2 = 0;
    }
    return uVar2;
}


/* fcn.00009ce0 @ 0x9ce0 */

uint32_t __thiscall fcn.00009ce0(uint32_t param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    if (param_2 == NULL) {
        return 0x80000002;
    }
    uVar1 = param_1 + 0x1f;
    if (uVar1 < param_1) {
        *param_2 = 0xffffffff;
    }
    else {
        *param_2 = uVar1;
    }
    return -(uVar1 < param_1) & 0x80000005;
}


/* fcn.00009c61 @ 0x9c61 */

ushort __fastcall fcn.00009c61(uint32_t param_1)

{
    ushort uVar1;
    int iVar2;
    uint32_t var_4h;
    
    iVar2 = fcn.0000ab76();
    if ((param_1 & 0x1f) < param_1) {
        uVar1 = *((param_1 & 0x1f) * 0x1e + 0x1c + iVar2);
    }
    else {
        uVar1 = 0;
    }
    return uVar1;
}


/* fcn.000036f5 @ 0x36f5 */

uint __fastcall fcn.000036f5(uint param_1,int param_2)

{
    uint uVar1;
    
    if (param_2 == 0) {
        return param_1;
    }
    uVar1 = fcn.000001b8(param_1,param_2);
    return uVar1;
}


/* fcn.0000a5af @ 0xa5af */

int fcn.0000a5af(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    int iVar3;
    
    uVar1 = fcn.00009ca7();
    uVar2 = fcn.00009c8b();
    for (; uVar1 <= uVar2; uVar1 = uVar1 + 1) {
        fcn.00009c61();
    }
    iVar3 = fcn.0000365a();
    if (iVar3 != 0) {
        fcn.000036f5();
    }
    return iVar3;
}


/* fcn.0000a5fc @ 0xa5fc */

uint16_t __fastcall fcn.0000a5fc(int *param_1)

{
    int iVar1;
    
    iVar1 = fcn.0000361f();
    if (iVar1 == 0) {
        iVar1 = fcn.0000a5af();
        *param_1 = iVar1;
        if (iVar1 == 0) {
            return 0;
        }
        iVar1 = fcn.0000361f();
    }
    else {
        *param_1 = iVar1 + 0x18;
    }
    return *(iVar1 + 2) - 0x18U >> 3;
}


/* fcn.0000a57c @ 0xa57c */

int __fastcall fcn.0000a57c(uint32_t param_1,int param_2)

{
    uint32_t uVar1;
    int iVar2;
    uint32_t uVar3;
    
    iVar2 = 0;
    uVar3 = 0;
    if (param_1 != 0) {
        do {
            fcn.00009ca7();
            uVar1 = fcn.00009c61();
            iVar2 = iVar2 + 1 + (uVar1 >> 5);
            uVar3 = uVar3 + 1;
        } while (uVar3 < param_1);
    }
    return iVar2 + param_2;
}


/* fcn.0000982a @ 0x982a */

uint __fastcall fcn.0000982a(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    uint uVar2;
    int iVar3;
    uint32_t uVar4;
    int8_t iVar5;
    
    cVar1 = fcn.0000a75e();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        iVar3 = fcn.0000ab76();
        if (*((param_1 >> 0x10 & 0x1f) * 0x1e + iVar3 + 2) == -1) {
            *param_2 = 0;
            uVar2 = 0x80000003;
        }
        else {
            uVar4 = fcn.0000a6f2();
            iVar5 = (param_1 & 7) << 2;
            *param_2 = (uVar4 & 3 << iVar5) >> iVar5;
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.000098cb @ 0x98cb */

int __fastcall fcn.000098cb(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.0000a75e();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00009247((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.000099e5 @ 0x99e5 */

void __fastcall fcn.000099e5(uint8_t param_1)

{
    fcn.000099b5(1 << (param_1 & 0x1f));
    return;
}


/* fcn.00009955 @ 0x9955 */

int __fastcall fcn.00009955(uint32_t param_1,uint32_t *param_2)

{
    char cVar1;
    int iVar2;
    int32_t var_4h;
    
    var_4h = param_1;
    cVar1 = fcn.0000a75e();
    if (cVar1 == '\0') {
        iVar2 = -0x7ffffffe;
    }
    else {
        iVar2 = fcn.00009247((param_1 & 0x1ff) >> 5,&var_4h);
        if (-1 < iVar2) {
            *param_2 = var_4h >> (param_1 & 0x1f) & 1;
        }
    }
    return iVar2;
}


/* fcn.00009a6e @ 0x9a6e */

void __fastcall fcn.00009a6e(uint8_t param_1)

{
    fcn.00009a3e(1 << (param_1 & 0x1f));
    return;
}


/* fcn.00009a9a @ 0x9a9a */

uint __fastcall fcn.00009a9a(uint param_1,int32_t param_2,int32_t param_3)

{
    char cVar1;
    uint uVar2;
    
    cVar1 = fcn.000091f8();
    if (cVar1 == '\0') {
        uVar2 = 0x80000002;
    }
    else {
        uVar2 = fcn.00009439(param_2,-1,param_3);
    }
    return uVar2;
}


/* fcn.00002d28 @ 0x2d28 */

void __cdecl fcn.00002d28(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.00002cbe @ 0x2cbe */

void fcn.00002cbe(int32_t param_1,int32_t param_2)

{
    fcn.00002c1a(param_1,param_2);
    fcn.00002c55(param_1,param_2);
    return;
}


/* fcn.00002c95 @ 0x2c95 */

void fcn.00002c95(int32_t param_1,int32_t param_2)

{
    fcn.00002c1a(param_1,param_2);
    fcn.00002c55(param_1,param_2);
    return;
}


