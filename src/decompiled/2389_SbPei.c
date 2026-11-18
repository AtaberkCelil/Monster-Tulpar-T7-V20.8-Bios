// decompiled by r2ghidra: 2389_SbPei.te
// functions: 33

/* entry0 @ 0x225 */

void __cdecl entry0(uint noname_0,int32_t arg_ch)

{
    uint in_ECX;
    int32_t var_4h;
    
    fcn.00001036(in_ECX,&var_4h);
    fcn.00000307();
    return;
}


/* fcn.00001036 @ 0x1036 */

//WARNING: Removing unreachable block (ram,0x00001061)
//WARNING: Removing unreachable block (ram,0x00001052)
//WARNING: Removing unreachable block (ram,0x0000105a)
//WARNING: Removing unreachable block (ram,0x00001070)

uint __cdecl fcn.00001036(uint noname_0,int32_t arg_ch)

{
    int iVar1;
    int32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    iVar1 = cpuid_Version_info(1);
    if (arg_ch != 0) {
        *arg_ch = *(iVar1 + 0xc);
    }
    return 1;
}


/* fcn.00000307 @ 0x307 */

void __fastcall fcn.00000307(int32_t param_1,int *param_2)

{
    uint16_t uVar1;
    code *pcVar2;
    uint32_t extraout_ECX;
    uint32_t uVar3;
    int iVar4;
    int32_t var_8h;
    unkbyte3 Stack_8;
    int8_t var_1h;
    
    var_8h = param_1;
    _Stack_8 = param_1;
    fcn.00000bfc(param_1,param_1);
    iVar4 = 0;
    (**(*param_2 + 0x58))(param_2,1,0x61000,0,0,0);
    fcn.00000833();
    fcn.000007ad();
    out(0x61,0xc);
    uVar1 = in(0x406);
    out(0x406,uVar1 & 0xfffe);
    (**(*param_2 + 0x18))(param_2,0xffd2edf0);
    var_1h = ~(*0xfe001024 >> 2) & 1;
    pcVar2 = *0xffd2eeb8;
    while (pcVar2 != NULL) {
        var_1h = (*pcVar2)();
        iVar4 = iVar4 + 1;
        pcVar2 = *(iVar4 * 4 + -0x2d1148);
    }
    iVar4 = (**(*param_2 + 0x34))(param_2,4,0x19,&var_8h);
    uVar3 = extraout_ECX;
    if (-1 < iVar4) {
        uVar3 = var_1h;
        *(var_8h + 8) = *0xffd2ee6c;
        *(var_8h + 0xc) = *0xffd2ee70;
        *(var_8h + 0x10) = *0xffd2ee74;
        *(var_8h + 0x14) = *0xffd2ee78;
        *(var_8h + 0x18) = var_1h;
    }
    fcn.0000059b(uVar3);
    return;
}


/* fcn.00000bfc @ 0xbfc */

uint fcn.00000bfc(void)

{
    int32_t var_30h;
    int32_t var_2ch;
    int32_t var_28h;
    int32_t var_24h;
    int32_t var_20h;
    int16_t var_1ch;
    int32_t var_18h;
    int32_t var_14h;
    int32_t var_10h;
    int16_t var_ch;
    int32_t var_8h;
    int32_t var_4h;
    
    fcn.00001097();
    fcn.000010f0();
    fcn.00001097();
    fcn.000010f0();
    *0xfd882774 = *0xfd882774 | 0x800;
    return 0;
}


/* fcn.00001097 @ 0x1097 */

ulong __fastcall fcn.00001097(uint32_t param_1)

{
    ushort uVar1;
    uint uVar2;
    
    uVar2 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar1 = in((param_1 & 2) + 0xcfc);
    out(0xcf8,uVar2);
    return CONCAT44(0xcf8,CONCAT22(uVar2 >> 0x10,uVar1));
}


/* fcn.000010f0 @ 0x10f0 */

ulong __fastcall fcn.000010f0(uint32_t param_1,ushort param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out((param_1 & 2) + 0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,CONCAT22(uVar1 >> 0x10,param_2));
}


/* fcn.00000833 @ 0x833 */

//WARNING: Variable defined which should be unmapped: var_8h
//WARNING: Variable defined which should be unmapped: var_4h

void fcn.00000833(void)

{
    uint8_t uVar1;
    int iVar2;
    uint8_t uVar3;
    int32_t var_8h;
    int16_t var_4h;
    
    out(0x70,0xd);
    uVar1 = in(0x71);
    uVar3 = (*0xfe001924 & 0x1800) != 0;
    if ((*0xfe001020 & 0x40000) != 0) {
        uVar3 = uVar3 | 4;
    }
    if ((*0xfe001924 & 0x20) != 0) {
        uVar3 = uVar3 | 8;
    }
    if ((*0xfe001020 & 0x4000) != 0) {
        uVar3 = uVar3 | 0x20;
    }
    if ((*0xfe001024 & 4) != 0) {
        uVar3 = uVar3 | 0x40;
    }
    if (uVar1 < 0x80) {
        uVar3 = uVar3 | 0x40;
    }
    iVar2 = fcn.00000974(*0xfe001024,uVar3);
    (**(iVar2 + 0x40))(4,uVar3);
    return;
}


/* fcn.000007ad @ 0x7ad */

void fcn.000007ad(void)

{
    uint16_t uVar1;
    uint32_t uVar2;
    int iVar3;
    int iVar4;
    
    iVar4 = 6;
    uVar1 = in(0x1800);
    uVar2 = in(0x186c);
    if ((uVar1 < 0) && ((uVar1 & 0x100) == 0)) {
        if (((uVar1 & 0x400) == 0) && ((uVar2 & 0x40000) == 0)) {
            if ((((uVar2 & 0x2000) != 0) && (iVar4 = 7, *0xc00fe000 != -1)) && (*0xc00fe0cc < 0)) {
                iVar4 = 5;
            }
        }
        else {
            iVar4 = 3;
        }
    }
    iVar3 = fcn.00000974();
    (**(iVar3 + 0x3c))(5,iVar4);
    if (iVar4 != 3) {
        iVar3 = fcn.00000974();
    }
    else {
        iVar3 = fcn.00000974();
    }
    (**(iVar3 + 0x3c))(1,iVar4 != 3);
    return;
}


/* fcn.0000059b @ 0x59b */

uint fcn.0000059b(void)

{
    uint16_t uVar1;
    bool bVar2;
    bool bVar3;
    
    bVar2 = (*0xfe001020 >> 0xe & 1) != 0;
    if (bVar2) {
        *0xfe001020 = *0xfe001020 & 0xfdff | 0x4000;
    }
    uVar1 = in(0x1800);
    bVar3 = (uVar1 >> 0xb & 1) != 0;
    if (bVar3) {
        out(0x1800,0x800);
    }
    if ((bVar3 || bVar2) || ((~(*0xfe001024 >> 2) & 1) == 0)) {
        out(0x1800,0x8000);
        uVar1 = in(0x1804);
        out(0x1804,uVar1 & 0xe3ff);
    }
    return 0;
}


/* fcn.00000479 @ 0x479 */

void __fastcall fcn.00000479(int *param_1)

{
    bool bVar1;
    uint16_t uVar2;
    char cVar3;
    int iVar4;
    uint32_t uVar5;
    int32_t var_ch;
    int32_t var_8h;
    int8_t var_2h;
    int8_t var_1h;
    
    var_1h = fcn.00000990();
    var_2h = fcn.00000990();
    uVar2 = *0xfe001024;
    cVar3 = fcn.00000990();
    if (cVar3 < '\0') {
        bVar1 = false;
        iVar4 = (**(*param_1 + 0x20))(param_1,0xffd2ed4c,0,0,&var_8h);
        if (iVar4 < 0) {
            bVar1 = true;
        }
        else {
            uVar5 = 0;
            do {
                (**(var_8h + 4))(param_1,var_8h,3000);
                cVar3 = fcn.00000990();
                if (-1 < cVar3) goto code_r0x000004fc;
                uVar5 = uVar5 + 1;
            } while (uVar5 < 500);
            bVar1 = true;
        }
    }
    else {
        bVar1 = false;
    }
code_r0x000004fc:
    if ((uVar2 & 4) == 0) {
        if (((!bVar1) && ((var_1h & 0x70U) == 0x20)) && ((var_2h & 0x80U) == 0)) goto code_r0x00000583;
    }
    else {
        fcn.000009d1();
        fcn.000009d1();
    }
    fcn.000009d1();
    fcn.00000990();
    fcn.000009d1();
    fcn.00000990();
    fcn.000009d1();
    fcn.00000990();
    fcn.000009d1();
    fcn.000009d1();
    fcn.000009d1();
    fcn.000009d1();
code_r0x00000583:
    fcn.00000990();
    fcn.000009d1();
    return;
}


/* fcn.00000271 @ 0x271 */

ulong __fastcall fcn.00000271(char param_1,uint param_2)

{
    uint8_t uVar1;
    uint16_t uVar2;
    uint16_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    uint uVar6;
    
    uVar6 = CONCAT22(param_2 >> 0x10,0x404);
    uVar2 = in(0x404);
    uVar4 = 0x80;
    if ((uVar2 & 0x80) != 0) {
        uVar3 = in(0x406);
        uVar5 = uVar3;
        if (param_1 != '\0') {
            out(0x70,0x32);
            uVar1 = in(0x71);
            if ((uVar1 < 0xa0) && ((uVar1 & 0xf) < 10)) {
                uVar1 = (uVar1 >> 4) * '\n' + (uVar1 & 0xf) + 1;
                out(0x70,0x32);
                out(0x71,uVar1 / 10 << 4 | uVar1 % 10);
            }
            uVar5 = 0;
        }
        uVar6 = 0x404;
        uVar4 = CONCAT31(uVar5 >> 8,0x80);
        out(0x404,0x80);
        if ((uVar2 == 0x80) && (uVar3 == 0)) {
            uVar6 = 0x1834;
            uVar4 = 0x2000;
            out(0x1834,0x2000);
        }
    }
    return CONCAT44(uVar6,uVar4);
}


/* fcn.00000a76 @ 0xa76 */

uint __fastcall fcn.00000a76(uint param_1,uint16_t param_2,uint32_t param_3)

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
            uVar3 = fcn.0000114e();
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
            fcn.00001199();
            *(iVar1 + uVar9 * 4 | 0xfd880000) = ~uVar5 & 0xffff & param_2 | (uVar5 & 0xfffffffc) << 0x10 | 1;
            uVar4 = 0;
        }
    }
    return uVar4;
}


/* fcn.000009d1 @ 0x9d1 */

unkbyte6 __fastcall fcn.000009d1(uint8_t param_1,uchar param_2)

{
    ushort uVar1;
    uint8_t uVar2;
    ushort uVar3;
    uint32_t uVar4;
    uint32_t var_4h;
    
    uVar2 = 0;
    if (param_1 < 0x80) {
        uVar2 = fcn.00000a22();
        uVar3 = 0x70;
        uVar2 = uVar2 & 0x80;
        uVar1 = 0x71;
    }
    else {
        uVar3 = 0x72;
        uVar1 = 0x73;
    }
    uVar4 = CONCAT11(param_2,param_1) & 0xffffff7f;
    out(uVar3,uVar4 | uVar2);
    uVar2 = uVar4 >> 8;
    out(uVar1,uVar2);
    return CONCAT24(uVar1,uVar2);
}


/* fcn.00000e70 @ 0xe70 */

uint32_t __fastcall fcn.00000e70(uint param_1,int param_2,uint *param_3)

{
    int iVar1;
    uint32_t uVar2;
    uint uStack_58;
    uint *puStack_54;
    uint uStack_50;
    uint uStack_4c;
    uchar auStack_48 [16];
    uchar auStack_38 [8];
    uint uStack_30;
    uint uStack_2c;
    uint32_t uStack_28;
    uint uStack_24;
    uchar auStack_20 [16];
    int iStack_10;
    uint uStack_c;
    uint uStack_8;
    uint uStack_4;
    
    if (param_2 == 0) {
        if (param_3 != NULL) {
            return 0x80000002;
        }
    }
    else if (param_3 == NULL) {
        return 0x80000002;
    }
    iVar1 = fcn.00000a49(param_1,&puStack_54);
    if (iVar1 < 0) {
        uVar2 = fcn.00000d9c(param_3);
        return uVar2;
    }
    fcn.000000c0(auStack_48,0xffd2ed7c,0x10);
    uStack_50 = 0x30;
    uStack_4c = 0;
    fcn.000000c0(auStack_38,&uStack_50,8);
    uStack_28 = 0xffffffff;
    uStack_24 = 0xffffffff;
    uStack_30 = 3;
    uStack_2c = 0x30;
    fcn.000000c0(auStack_20,0xffd2edac,0x10);
    uStack_c = 0;
    uStack_4 = 0;
    if (param_3 == NULL) {
        uStack_8 = 0;
    }
    else {
        uStack_8 = *param_3;
    }
    uStack_58 = 0x48;
    iStack_10 = param_2;
    iVar1 = (**puStack_54)(puStack_54,auStack_48,&uStack_58);
    if (iVar1 == -0x7fffffed) {
        uStack_28 = fcn.00000d9c(param_3);
        if (param_3 == NULL) goto code_r0x00000f6c;
        uStack_8 = *param_3;
    }
    if (param_3 != NULL) {
        *param_3 = uStack_8;
    }
code_r0x00000f6c:
    if (uStack_28 == 0) {
        return 0;
    }
    return uStack_28 | 0x80000000;
}


/* fcn.00000974 @ 0x974 */

int32_t __fastcall fcn.00000974(int32_t param_1)

{
    int32_t var_4h;
    
    var_4h = param_1;
    fcn.00000a49(param_1,&var_4h);
    return var_4h;
}


/* fcn.00000a49 @ 0xa49 */

void __cdecl fcn.00000a49(uint noname_0,int32_t arg_ch)

{
    int32_t var_ch;
    int32_t var_4h;
    
    var_4h = &var_ch;
    InterruptDescriptorTableRegister();
    (**(**(stack0xfffffff2 + -4) + 0x20))(*(stack0xfffffff2 + -4));
    return;
}


/* fcn.00000990 @ 0x990 */

uchar __fastcall fcn.00000990(uint8_t param_1)

{
    uint8_t uVar1;
    uchar uVar2;
    uint32_t var_8h;
    int8_t var_1h;
    
    uVar1 = fcn.00000a22();
    out(0x70,param_1 & 0x7f | uVar1 & 0x80);
    uVar2 = in(0x71);
    return uVar2;
}


/* fcn.00000a22 @ 0xa22 */

uchar fcn.00000a22(void)

{
    uchar uVar1;
    
    uVar1 = in(0x70);
    *0xfdc431fc = *0xfdc431fc & 0xfffdffff;
    return uVar1;
}


/* fcn.00000cf8 @ 0xcf8 */

bool fcn.00000cf8(void)

{
    uint32_t uVar1;
    char cVar2;
    int32_t var_10h;
    uint32_t var_8h;
    int32_t var_4h;
    
    uVar1 = *0xfe001020;
    var_4h = &var_10h;
    cVar2 = -1;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x28))(*(stack0xffffffee + -4),&var_8h);
    if (var_8h == 0x11) {
        cVar2 = '\x02';
    }
    else if ((uVar1 & 0x200000) != 0) {
        cVar2 = '\x01';
    }
    return cVar2 == '\x01';
}


/* fcn.0000094e @ 0x94e */

void fcn.0000094e(int32_t param_1,int32_t param_2)

{
    fcn.000008d3(param_1,param_2);
    fcn.0000090e(param_1,param_2);
    return;
}


/* fcn.000008d3 @ 0x8d3 */

ushort __cdecl fcn.000008d3(int32_t arg_8h,int32_t arg_ch)

{
    int32_t var_8h;
    int32_t var_4h;
    
    return *((arg_8h | (arg_ch & 1U) << 0x1c) + 0xc0000000);
}


/* fcn.0000090e @ 0x90e */

uint __cdecl fcn.0000090e(int32_t arg_8h,int32_t arg_ch)

{
    uint32_t uVar1;
    ushort in_CX;
    int32_t var_8h;
    int32_t var_4h;
    
    uVar1 = (arg_ch & 1U) << 0x1c;
    *((arg_8h | uVar1) + 0xc0000000) = in_CX;
    return CONCAT22(uVar1 >> 0x10,in_CX);
}


/* fcn.00000ca9 @ 0xca9 */

uint fcn.00000ca9(void)

{
    uint32_t uVar1;
    uint32_t uVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    bool bVar5;
    
    uVar1 = in(0x1808);
    uVar4 = uVar1 + 0x37f0;
    if (uVar4 < uVar1) {
        uVar3 = 1;
        uVar2 = uVar1;
        goto code_r0x00000cc4;
    }
    uVar3 = uVar4 >> 0x18;
    uVar4 = uVar4 & 0xffffff;
    while (uVar2 = uVar1, uVar3 != 0) {
code_r0x00000cc4:
        uVar1 = in(0x1808);
        if (uVar1 < uVar2) {
            uVar3 = uVar3 - 1;
        }
    }
    do {
        if (uVar4 <= uVar1) {
            return 0;
        }
        uVar2 = in(0x1808);
        bVar5 = uVar1 <= uVar2;
        uVar1 = uVar2;
    } while (bVar5);
    return 0;
}


/* fcn.0000114e @ 0x114e */

ulong __fastcall fcn.0000114e(uint32_t param_1)

{
    uint uVar1;
    uint uVar2;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    uVar2 = in(0xcfc);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,uVar2);
}


/* fcn.00001199 @ 0x1199 */

ulong __fastcall fcn.00001199(uint32_t param_1,uint param_2)

{
    uint uVar1;
    
    uVar1 = in(0xcf8);
    out(0xcf8,param_1 >> 4 & 0xffff00 | param_1 & 0xfc | 0x80000000);
    out(0xcfc,param_2);
    out(0xcf8,uVar1);
    return CONCAT44(0xcf8,param_2);
}


/* fcn.00000fcc @ 0xfcc */

int fcn.00000fcc(void)

{
    char cVar1;
    int iVar2;
    
    fcn.00000f80();
    do {
        iVar2 = fcn.00000fab();
        if (iVar2 == 0) {
            return 0;
        }
        cVar1 = fcn.00001012();
    } while (cVar1 == '\0');
    return iVar2;
}


/* fcn.00001012 @ 0x1012 */

uint32_t __fastcall fcn.00001012(uint32_t *param_1,uint32_t *param_2)

{
    uint32_t uVar1;
    
    uVar1 = *param_1;
    if ((((uVar1 == *param_2) && (uVar1 = param_1[1], uVar1 == param_2[1])) &&
        (uVar1 = param_1[2], uVar1 == param_2[2])) && (uVar1 = param_1[3], uVar1 == param_2[3])) {
        return CONCAT31(uVar1 >> 8,1);
    }
    return uVar1 & 0xffffff00;
}


/* fcn.00000d48 @ 0xd48 */

uint fcn.00000d48(void)

{
    uint32_t uVar1;
    char cVar2;
    int iVar3;
    uint32_t uVar4;
    
    iVar3 = fcn.00000fcc();
    uVar4 = 0;
    iVar3 = *(*(iVar3 + 0x20) + 0x5a);
    uVar1 = *(iVar3 + 0x98);
    iVar3 = *(iVar3 + 0xa0);
    if (uVar1 != 0) {
        do {
            cVar2 = fcn.00001012();
            if (cVar2 != '\0') {
                return *(uVar4 * 0x18 + 0x10 + iVar3);
            }
            uVar4 = uVar4 + 1;
        } while (uVar4 < uVar1);
    }
    return 0;
}


/* fcn.00000ffc @ 0xffc */

int __fastcall fcn.00000ffc(int param_1,int param_2,uint param_3)

{
    int iVar1;
    
    if (param_1 == param_2) {
        return param_1;
    }
    iVar1 = fcn.000000c0(param_1,param_2,param_3);
    return iVar1;
}


/* fcn.000000c0 @ 0xc0 */

uint * fcn.000000c0(uint *param_1,uint *param_2,uint32_t param_3)

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


/* fcn.00000d9c @ 0xd9c */

uint __cdecl fcn.00000d9c(int32_t arg_8h)

{
    uint *puVar1;
    uint *puVar2;
    uint32_t uVar3;
    uint32_t uVar4;
    char cVar5;
    int iVar6;
    int iVar7;
    uint uVar8;
    uint in_ECX;
    int in_EDX;
    uint *puVar9;
    uint *puStack_14;
    int iStack_e;
    
    iVar6 = fcn.00000a49(in_ECX,&puStack_14);
    if (-1 < iVar6) {
        iVar6 = 0;
        do {
            InterruptDescriptorTableRegister();
            iVar7 = (**puStack_14)(*(iStack_e + -4),puStack_14,iVar6);
            iVar6 = iVar6 + 1;
        } while (-1 < iVar7);
    }
    iVar6 = fcn.00000d48();
    puVar1 = *(iVar6 + 8);
    for (puVar2 = *puVar1; puVar2 != puVar1; puVar2 = *puVar2) {
        puVar9 = puVar2 + -0xe;
        cVar5 = fcn.00001012();
        if (cVar5 != '\0') goto code_r0x00000e19;
    }
    puVar9 = NULL;
code_r0x00000e19:
    if (puVar9 == NULL) {
        uVar8 = 0x8000000e;
    }
    else if ((in_EDX == 0) && ((puVar9[10] & 1) == 0)) {
        uVar8 = 0x80000008;
    }
    else if ((arg_8h == 0) || (uVar3 = puVar9[8], uVar4 = *arg_8h, *arg_8h = uVar3, uVar3 <= uVar4)) {
        if (puVar9[8] != 0) {
            fcn.00000ffc(puVar9[8]);
        }
        uVar8 = 0;
    }
    else {
        uVar8 = 0x80000005;
    }
    return uVar8;
}


/* fcn.00000f80 @ 0xf80 */

int32_t fcn.00000f80(void)

{
    int32_t var_10h;
    int32_t var_8h;
    int32_t var_4h;
    
    var_4h = &var_10h;
    InterruptDescriptorTableRegister();
    (**(**(stack0xffffffee + -4) + 0x30))(*(stack0xffffffee + -4),&var_8h);
    return var_8h;
}


/* fcn.00000fab @ 0xfab */

int16_t * __fastcall fcn.00000fab(uint param_1,int16_t *param_2)

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


