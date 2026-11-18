// decompiled by r2ghidra: 2324_PlatformInfoPei.te
// functions: 14

/* entry0 @ 0x179 */

uint entry0(void)

{
    uint16_t uVar1;
    char cVar2;
    int iVar3;
    uint *puVar4;
    uint uVar5;
    uint auStack_24 [9];
    
    uVar1 = *0xc00f8082;
    puVar4 = auStack_24;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
    }
    *0xc00f8082 = *0xc00f8082 | 0x800;
    iVar3 = fcn.00000469();
    (**(iVar3 + 0x40))(0x1d,0x14);
    iVar3 = fcn.00000469();
    (**(iVar3 + 0x50))(0x45,0);
    iVar3 = fcn.00000469();
    (**(iVar3 + 0x50))(0x11a,1);
    cVar2 = fcn.00000425();
    if (cVar2 == '\0') {
        cVar2 = fcn.0000043e();
        if (cVar2 == '\0') {
            iVar3 = fcn.00000469();
            uVar5 = 0;
        }
        else {
            iVar3 = fcn.00000469();
            uVar5 = 2;
        }
    }
    else {
        iVar3 = fcn.00000469();
        uVar5 = 1;
    }
    (**(iVar3 + 0x3c))(0xf9,uVar5);
    iVar3 = fcn.00000469();
    (**(iVar3 + 0x3c))(0x23,0);
    cVar2 = fcn.00000367();
    if (cVar2 == '\0') {
        cVar2 = fcn.000004ef();
        if (cVar2 == '\x01') {
            iVar3 = fcn.00000469();
            uVar5 = 2;
        }
        else {
            iVar3 = fcn.00000469();
            uVar5 = 1;
        }
    }
    else {
        iVar3 = fcn.00000469();
        uVar5 = 6;
    }
    (**(iVar3 + 0x3c))(0xf7,uVar5);
    *0xc00f8082 = uVar1;
    iVar3 = fcn.00000469();
    (**(iVar3 + 8))(0x1d);
    iVar3 = fcn.00000469();
    (**(iVar3 + 0x18))(0x11a);
    return 0;
}


/* fcn.00000469 @ 0x469 */

int32_t __fastcall fcn.00000469(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000480(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000480 @ 0x480 */

void __cdecl fcn.00000480(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4),0xffd12154,0,0,arg_ch);
    return;
}


/* fcn.00000425 @ 0x425 */

uint fcn.00000425(void)

{
    char cVar1;
    
    cVar1 = fcn.000003e7();
    if (cVar1 != '\x01') {
        cVar1 = fcn.000003e7();
        if (cVar1 != '\x04') {
            return 0;
        }
    }
    return 1;
}


/* fcn.000003e7 @ 0x3e7 */

char fcn.000003e7(void)

{
    uint32_t uVar1;
    char cVar2;
    
    cVar2 = -1;
    if (*0xffd12164 == -1) {
        uVar1 = fcn.000003d8();
        uVar1 = uVar1 & 0xffe0;
        if (uVar1 == 0x5180) {
            cVar2 = '\x05';
        }
        else if ((uVar1 == 0x7a00) || (uVar1 == 0x7a80)) {
            cVar2 = '\x04';
        }
        *0xffd12164 = cVar2;
    }
    return *0xffd12164;
}


/* fcn.0000043e @ 0x43e */

uint fcn.0000043e(void)

{
    char cVar1;
    
    cVar1 = fcn.000003e7();
    if (cVar1 != '\x02') {
        cVar1 = fcn.000003e7();
        if (cVar1 != '\x05') {
            cVar1 = fcn.000003e7();
            if (cVar1 != '\x06') {
                cVar1 = fcn.000003e7();
                if (cVar1 != '\x03') {
                    return 0;
                }
            }
        }
    }
    return 1;
}


/* fcn.00000367 @ 0x367 */

uint8_t fcn.00000367(void)

{
    uint8_t uVar1;
    int16_t iVar2;
    int iVar3;
    
    uVar1 = 0;
    iVar2 = fcn.000004b1(2,0);
    if (((((iVar2 == 0x4663) || (iVar2 == 0x466b)) || (iVar2 == 0x4653)) || ((iVar2 == 0x4633 || (iVar2 == 0x4637)))) ||
       ((iVar2 == 0x463b || ((iVar2 == 0x4623 || (iVar2 == 0x462b)))))) {
        uVar1 = 1;
    }
    iVar3 = fcn.000004d1();
    return uVar1 & iVar3 == 0x90670;
}


/* fcn.000004ef @ 0x4ef */

void fcn.000004ef(void)

{
    int32_t var_4h;
    
    fcn.00000522();
    fcn.000004b1(2,0);
    fcn.0000026e();
    return;
}


/* fcn.00000522 @ 0x522 */

//WARNING: Removing unreachable block (ram,0x00000558)
//WARNING: Removing unreachable block (ram,0x00000541)
//WARNING: Removing unreachable block (ram,0x00000550)
//WARNING: Removing unreachable block (ram,0x0000055f)

uint __fastcall fcn.00000522(uint param_1,uint *param_2)

{
    uint *puVar1;
    int32_t var_14h;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    puVar1 = cpuid_Version_info(1);
    if (param_2 != NULL) {
        *param_2 = *puVar1;
    }
    return 1;
}


/* fcn.000004b1 @ 0x4b1 */

ushort fcn.000004b1(uint32_t param_1,uint32_t param_2)

{
    uint32_t uVar1;
    
    uVar1 = fcn.00000569(0,param_2 & 1);
    return *((uVar1 | param_1) + 0xc0000000);
}


/* fcn.00000569 @ 0x569 */

ulong __cdecl fcn.00000569(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_4h;
    
    return CONCAT44(arg_ch >> 4,arg_8h >> 4 | arg_ch << 0x1c);
}


/* fcn.0000026e @ 0x26e */

//WARNING: Control flow encountered bad instruction data

uchar __fastcall fcn.0000026e(int param_1,uint16_t param_2)

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


/* fcn.000004d1 @ 0x4d1 */

uint32_t __fastcall fcn.000004d1(uint32_t param_1)

{
    int32_t var_4h;
    
    fcn.00000522();
    return param_1 & 0xfff0ff0;
}


/* fcn.000003d8 @ 0x3d8 */

void fcn.000003d8(void)

{
    fcn.000004b1(0xf8002,0);
    return;
}


