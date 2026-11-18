// decompiled by r2ghidra: 2354_TpvPei.te
// functions: 31

/* entry0 @ 0x225 */

void entry0(uint param_1,int *param_2)

{
    fcn.0000023c();
    (**(*param_2 + 0x24))(param_2,0xffd1ff4c);
    return;
}


/* fcn.000006ee @ 0x6ee */

uint fcn.000006ee(void)

{
    uint8_t uVar1;
    char cVar2;
    uint extraout_ECX;
    uint32_t uVar3;
    int64_t iVar4;
    uchar auStack_10 [12];
    
    uVar1 = fcn.0000080c();
    if (uVar1 != 0) {
        uVar3 = uVar1;
        do {
            cVar2 = fcn.000008be();
            if (cVar2 == '\x01') {
                cVar2 = fcn.00000918();
                if (cVar2 == '\0') {
                    fcn.000008e5(extraout_ECX);
                    fcn.000007fc();
                }
                else {
                    iVar4 = fcn.00000892();
                    fcn.000005f4(iVar4 + 0x10);
                    fcn.000005f4(iVar4 + 0x14);
                    fcn.000005ce(iVar4 + 0x10);
                    fcn.0000082a(auStack_10);
                }
            }
            uVar3 = uVar3 - 1;
        } while (uVar3 != 0);
    }
    return 0;
}


/* fcn.0000023c @ 0x23c */

uint __fastcall fcn.0000023c(uint param_1)

{
    char *pcVar1;
    uint8_t uVar2;
    char cVar3;
    int iVar4;
    uint extraout_ECX;
    uint unaff_EBX;
    uint32_t uVar5;
    uint unaff_ESI;
    uint32_t uVar6;
    uint unaff_EDI;
    int iVar7;
    int64_t iVar8;
    
    fcn.00000956(param_1,&stack0xfffffffc);
    iVar4 = fcn.000006b4();
    if ((iVar4 != 0) && ((*(iVar4 + 0x18) & 1) != 0)) {
        uVar5 = *(iVar4 + 0x2c);
        uVar2 = 0;
        iVar7 = 0;
        uVar6 = 0;
        do {
            *(uVar6 - 0x2e0084) = 0;
            *(uVar6 - 0x2e0081) = uVar5 >> (uVar2 & 0x1f) & 7;
            pcVar1 = iVar4 + 0x30 + iVar7;
            iVar7 = iVar7 + 1;
            *(uVar6 - 0x2e0080) = *pcVar1 != '\0';
            uVar2 = uVar2 + 3;
            uVar6 = uVar6 + 5;
        } while (uVar6 < 0x14);
    }
    uVar2 = fcn.0000080c(unaff_EDI,unaff_ESI,&stack0xfffffffc,unaff_EBX);
    if (uVar2 != 0) {
        uVar5 = uVar2;
        do {
            cVar3 = fcn.000008be();
            if (cVar3 == '\x01') {
                cVar3 = fcn.00000918();
                if (cVar3 == '\0') {
                    fcn.000008e5(extraout_ECX);
                    fcn.000007fc();
                }
                else {
                    iVar8 = fcn.00000892();
                    fcn.000005f4(iVar8 + 0x10);
                    fcn.000005f4(iVar8 + 0x14);
                    fcn.000005ce(iVar8 + 0x10);
                    fcn.0000082a(&stack0xfffffff0);
                }
            }
            uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
    }
    return 0;
}


/* fcn.00000956 @ 0x956 */

//WARNING: Removing unreachable block (ram,0x00000981)
//WARNING: Removing unreachable block (ram,0x00000972)
//WARNING: Removing unreachable block (ram,0x00000990)

uint __cdecl fcn.00000956(uint noname_0,int32_t arg_ch)

{
    uint *puVar1;
    uint uVar2;
    uint *in_EDX;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    uVar2 = puVar1[3];
    if (in_EDX != NULL) {
        *in_EDX = *puVar1;
    }
    if (arg_ch != 0) {
        *arg_ch = uVar2;
    }
    return 1;
}


/* fcn.000006b4 @ 0x6b4 */

int fcn.000006b4(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00000668();
    do {
        iVar2 = fcn.00000693();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00000932();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.000002a8 @ 0x2a8 */

uint __fastcall fcn.000002a8(uint8_t param_1)

{
    uint8_t uVar1;
    int16_t iVar2;
    bool bVar3;
    uint uVar4;
    uint32_t uVar5;
    uint8_t uVar6;
    uint8_t uVar7;
    uint32_t uVar8;
    
    uVar8 = param_1 << 8;
    do {
        bVar3 = false;
        uVar6 = 0;
        do {
            if ((uVar6 != 0) && (!bVar3)) break;
            uVar5 = (uVar8 & 0x1f | (uVar8 >> 8) << 5) << 3 | uVar6 & 7;
            if (*(uVar5 * 0x1000 + -0x40000000) != -1) {
                uVar5 = uVar5 << 0xc;
                uVar1 = *((uVar5 | 0xe) + 0xc0000000);
                if ((uVar6 == 0) && (uVar1 < '\0')) {
                    bVar3 = true;
                }
                uVar7 = uVar8 >> 8;
                if ((uVar1 & 3) == 0) {
                    if (*((uVar5 | 0xb) + 0xc0000000) == '\x03') {
                        iVar2 = *(((uVar8 & 0x1f | uVar7 << 5) << 3 | uVar6 & 7) * 0x1000 + -0x40000000);
                        if (((iVar2 != 0x10de) && (iVar2 != 0x1002)) && (iVar2 != -0x7f7a)) {
                            return 0x8000000e;
                        }
                        return 0;
                    }
                }
                else if ((uVar1 & 3) == 1) {
                    uVar8 = ((uVar8 & 0x1f | uVar7 << 5) << 3 | uVar6 & 7) << 0xc;
                    *((uVar8 | 0x18) + 0xc0000000) = uVar7;
                    *((uVar8 | 0x19) + 0xc0000000) = uVar7 + 1;
                    *((uVar8 | 0x1a) + 0xc0000000) = 0xff;
                    uVar4 = fcn.000002a8();
                    *((uVar8 | 0x19) + 0xc0000000) = 0;
                    *((uVar8 | 0x1a) + 0xc0000000) = 0;
                    return uVar4;
                }
            }
            uVar6 = uVar6 + 1;
        } while (uVar6 < 8);
        uVar6 = uVar8 + 1;
        uVar8 = CONCAT31(uVar8 >> 8,uVar6);
        if (0x1f < uVar6) {
            return 0x8000000e;
        }
    } while( true );
}


/* fcn.00000622 @ 0x622 */

uint __fastcall fcn.00000622(uint param_1,uint32_t *param_2,uint32_t *param_3)

{
    char cVar1;
    char cVar2;
    
    cVar2 = fcn.000004c8();
    cVar1 = *0xffd1ff6a;
    if (cVar2 == '\0') {
        return 0x80000002;
    }
    *param_2 = *0xffd1ff68;
    *param_3 = *((*0xffd1ff69 | 0xfffffd00) << 0x10) >> (cVar1 * -4 & 0x1fU) & 7;
    return 0;
}


/* fcn.000004c8 @ 0x4c8 */

uint32_t fcn.000004c8(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.0000048a();
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


/* fcn.0000048a @ 0x48a */

char fcn.0000048a(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd1ff64 == -1) {
        uVar1 = fcn.00000479();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd1ff64 = cVar2;
    }
    return *0xffd1ff64;
}


/* fcn.0000051f @ 0x51f */

ushort __cdecl fcn.0000051f(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000479 @ 0x479 */

void fcn.00000479(void)

{
    fcn.0000051f(0xf8002,0);
    return;
}


/* fcn.0000055a @ 0x55a */

uint __cdecl fcn.0000055a(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.00000591 @ 0x591 */

void __cdecl fcn.00000591(int32_t arg_8h,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_8h;
    int32_t var_4h;
    
    *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000) = in_ECX;
    return;
}


/* fcn.00000668 @ 0x668 */

int32_t fcn.00000668(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000932 @ 0x932 */

uint32_t __fastcall fcn.00000932(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000693 @ 0x693 */

int16_t * __fastcall fcn.00000693(uint param_1,int16_t *param_2)

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


/* fcn.0000080c @ 0x80c */

uint __fastcall fcn.0000080c(uint param_1)

{
    uint32_t uVar1;
    uint uVar2;
    
    uVar1 = fcn.000009d6(param_1);
    uVar1 = uVar1 & 0xff;
    uVar2 = 0;
    if (((uVar1 == 0) || (uVar2 = 0, uVar1 == 1)) || (uVar2 = CONCAT31(uVar1 - 2 >> 8,1), uVar1 - 2 != 0)) {
        uVar2 = CONCAT31(uVar2 >> 8,3);
    }
    return uVar2;
}


/* fcn.000008be @ 0x8be */

char __fastcall fcn.000008be(int param_1)

{
    char cVar1;
    
    if (param_1 != 0) {
        if (param_1 == 1) {
            return '\x01';
        }
        if (param_1 == 2) {
            cVar1 = fcn.000009d6(2);
            return '\x01' - (cVar1 != '\x01');
        }
    }
    return '\0';
}


/* fcn.000009d6 @ 0x9d6 */

void __fastcall fcn.000009d6(uint param_1)

{
    int32_t var_4h;
    
    fcn.00000956(param_1,0);
    fcn.0000051f(2,0);
    fcn.00000a0c();
    return;
}


/* fcn.00000a0c @ 0xa0c */

//WARNING: Control flow encountered bad instruction data

uchar __fastcall fcn.00000a0c(int param_1,uint16_t param_2)

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


/* fcn.00000918 @ 0x918 */

bool fcn.00000918(void)

{
    char cVar1;
    
    cVar1 = fcn.000004e8(0xfc,0);
    return cVar1 == '\x04';
}


/* fcn.000004e8 @ 0x4e8 */

uint __cdecl fcn.000004e8(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    return CONCAT31(uVar1 >> 8,*((arg_8h | uVar1) + 0xc0000000));
}


/* fcn.00000892 @ 0x892 */

int fcn.00000892(void)

{
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.0000082a(&var_8h);
    return ((var_4h & 0x1fU) << 3 | var_8h & 7U) << 0xc;
}


/* fcn.0000082a @ 0x82a */

uint __cdecl fcn.0000082a(int32_t arg_8h)

{
    char cVar1;
    uint32_t uVar2;
    uint32_t in_ECX;
    uint uVar3;
    uint *in_EDX;
    
    uVar2 = fcn.0000080c();
    if ((uVar2 & 0xff) < in_ECX) {
        return 0x80000002;
    }
    uVar3 = 0;
    if (in_ECX != 0) {
        if (in_ECX == 1) {
            *in_EDX = 1;
            goto code_r0x00000889;
        }
        if (in_ECX == 2) {
            cVar1 = fcn.000009d6();
            if (cVar1 != '\x01') {
                *in_EDX = 6;
                *arg_8h = 2;
                return 0;
            }
            uVar3 = 1;
            *in_EDX = 1;
            goto code_r0x00000889;
        }
    }
    *in_EDX = 6;
code_r0x00000889:
    *arg_8h = uVar3;
    return 0;
}


/* fcn.000005f4 @ 0x5f4 */

void fcn.000005f4(int32_t param_1,int32_t param_2)

{
    fcn.0000055a(param_1,param_2);
    fcn.00000591(param_1,param_2);
    return;
}


/* fcn.000005ce @ 0x5ce */

void fcn.000005ce(int32_t param_1,int32_t param_2)

{
    fcn.0000055a(param_1,param_2);
    fcn.00000591(param_1,param_2);
    return;
}


/* fcn.000008e5 @ 0x8e5 */

uint __fastcall fcn.000008e5(int param_1)

{
    int iVar1;
    
    if (param_1 != 0) {
        if (param_1 == 1) {
            return 0x4b;
        }
        if (param_1 == 2) {
            iVar1 = fcn.000009b7();
            if (iVar1 != 0x906a0) {
                iVar1 = fcn.000009b7();
                if (iVar1 != 0xb06a0) {
                    return 0x4a;
                }
            }
            return 0x59;
        }
    }
    return 0x50;
}


/* fcn.000009b7 @ 0x9b7 */

uint32_t __fastcall fcn.000009b7(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00000956(param_1,0);
    return param_1 & 0xfff0ff0;
}


/* fcn.000007fc @ 0x7fc */

void fcn.000007fc(void)

{
    uint32_t uVar1;
    
    uVar1 = fcn.000007c9();
    fcn.000007e0(uVar1 & 0xfffffff9);
    return;
}


/* fcn.000007c9 @ 0x7c9 */

uint __fastcall fcn.000007c9(uint8_t param_1)

{
    if (param_1 != 0xff) {
        return *(param_1 << 0x10 | 0xfb000010);
    }
    return 0xffffffff;
}


/* fcn.000007e0 @ 0x7e0 */

uint __thiscall fcn.000007e0(uint8_t param_1,uint param_2)

{
    if (param_1 != 0xff) {
        *(param_1 << 0x10 | 0xfb000010) = param_2;
        return param_2;
    }
    return 0xffffffff;
}


