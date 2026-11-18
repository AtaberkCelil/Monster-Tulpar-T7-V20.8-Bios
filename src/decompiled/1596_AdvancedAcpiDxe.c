// decompiled by r2ghidra: 1596_AdvancedAcpiDxe.pe32
// functions: 54

/* entry0 @ 0x10434 */

void entry0(int64_t arg1)

{
    uint32_t arg1_00;
    uint32_t in_EDX;
    uint in_register_00000014;
    
    arg1_00 = arg1;
    fcn.00010448(arg1,CONCAT44(in_register_00000014,in_EDX));
    fcn.00011e4c(arg1_00,in_EDX);
    return;
}


/* fcn.00010448 @ 0x10448 */

void fcn.00010448(ulong noname_0,int64_t arg1)

{
    uint32_t uVar1;
    int iVar2;
    int64_t iVar3;
    uint64_t uVar4;
    uint32_t uVar5;
    ulong noname_0_00;
    
    *0x1bb10 = *(arg1 + 0x60);
    *0x1bb18 = *(arg1 + 0x58);
    *0x1bb08 = arg1;
    fcn.0001a508();
    noname_0_00 = 0x1b490;
    iVar3 = fcn.0001a574(0x1b490);
    if (iVar3 == 0) {
        uVar4 = fcn.000103e0();
        fcn.000103d0();
        uVar1 = in(0x1808);
        fcn.00010380(noname_0_00,0x1808);
        while( true ) {
            iVar2 = in(0x1808);
            uVar5 = ((uVar1 & 0xffffff) + 0x16b) - iVar2;
            if ((uVar5 >> 0x17 & 1) != 0) break;
            func_0x00010310();
        }
        fcn.00010380(uVar5,0x1808);
        if ((uVar4 >> 9 & 1) == 0) {
            fcn.000103d0();
        }
        else {
            fcn.000103c0();
        }
    }
    //WARNING: Could not recover jumptable at 0x000104fc. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1bb10 + 0x140))(0x1b2c0,0,0x1bb48);
    return;
}


/* fcn.00011e4c @ 0x11e4c */

//WARNING: Variable defined which should be unmapped: var_bp_10h
//WARNING: Variable defined which should be unmapped: var_bp_20h
//WARNING: Variable defined which should be unmapped: var_bp_30h

int64_t fcn.00011e4c(uint32_t arg1,uint32_t arg2)

{
    uint32_t uVar1;
    uchar uVar2;
    char cVar3;
    ushort uVar4;
    uint uVar5;
    uint32_t uVar6;
    int iVar7;
    int64_t iVar8;
    int64_t iVar9;
    uint64_t uVar10;
    int16_t iVar11;
    uint32_t uVar12;
    uint32_t uVar13;
    uint32_t uVar14;
    uint in_register_0000000c;
    char *pcVar15;
    uint64_t uVar16;
    ulong *arg1_00;
    ulong uVar17;
    uint8_t uVar18;
    uint in_register_00000014;
    uint8_t uVar19;
    uint64_t uVar20;
    uint32_t uVar21;
    uint32_t uVar22;
    uint64_t uVar23;
    uint8_t uVar24;
    uint32_t uVar25;
    uint64_t uVar26;
    uint64_t uVar27;
    uint32_t uVar28;
    uint32_t uVar29;
    uint32_t uVar30;
    ulong uStackX_8;
    uint64_t uStackX_10;
    uint64_t uStackX_18;
    uint32_t uStackX_20;
    int64_t var_50h_2;
    uint32_t var_d0h;
    int8_t var_2a8h;
    int8_t var_2a9h;
    int8_t var_2aah;
    int8_t var_2abh;
    int8_t var_2ach;
    int8_t var_2adh;
    int8_t var_2aeh;
    int64_t var_5d0h;
    uint32_t var_615h;
    uint32_t var_9f1h;
    int32_t var_a00h;
    int32_t var_a08h;
    uchar auStack_ab8 [32];
    char acStack_a98 [4];
    char cStack_a94;
    char cStack_a93;
    char cStack_a92;
    char cStack_a91;
    ulong uStack_a90;
    char acStack_a88 [8];
    char acStack_a80 [8];
    uint32_t uStack_a78;
    uint32_t uStack_a74;
    uint32_t uStack_a70;
    uint32_t uStack_a6c;
    uint32_t uStack_a68;
    ulong uStack_a60;
    ulong uStack_a58;
    uint32_t uStack_a50;
    int iStack_a4c;
    ulong *puStack_a48;
    ulong *puStack_a40;
    ulong uStack_a38;
    int64_t iStack_a30;
    uchar auStack_a28 [16];
    ulong uStack_a18;
    ulong uStack_a10;
    ulong uStack_a08;
    ulong uStack_a00;
    ulong uStack_9f8;
    ulong uStack_9f0;
    uchar auStack_9e8 [80];
    uchar auStack_998 [127];
    char cStack_919;
    char cStack_918;
    char cStack_740;
    char cStack_73f;
    char cStack_73e;
    char cStack_73d;
    uchar uStack_73c;
    uchar uStack_73b;
    uchar uStack_73a;
    uchar auStack_418 [69];
    char cStack_3d3;
    uchar uStack_3d2;
    int32_t var_80h;
    int64_t var_bp_78h;
    int64_t var_bp_70h;
    int64_t var_68h;
    int64_t var_bp_60h;
    int64_t var_bp_58h;
    int64_t var_50h;
    int64_t var_48h;
    int64_t var_40h;
    int64_t var_bp_30h;
    int64_t var_bp_20h;
    int64_t var_bp_10h;
    
    uStackX_10 = CONCAT44(in_register_00000014,arg2);
    uStackX_8 = CONCAT44(in_register_0000000c,arg1);
    uStack_a38 = 0;
    *0x1bb50 = 0;
    *0x1d0a8 = 0;
    fcn.000102e0(1,&uStack_a50,0,0);
    uStack_a90 = 0xca9;
    (**(*0x1bb18 + 0x48))(L"Setup",0x1b2a0,0,&uStack_a90,0x1bbc0);
    uStack_a90 = 0x578;
    (**(*0x1bb18 + 0x48))(L"SaSetup",0x1b360,0,&uStack_a90,auStack_998);
    uStack_a90 = 0x36;
    (**(*0x1bb18 + 0x48))(L"MeSetup",0x1b330,0,&uStack_a90,0x1bb80);
    uStack_a90 = 0x3c1;
    (**(*0x1bb18 + 0x48))(L"CpuSetup",0x1b270,0,&uStack_a90,auStack_418);
    uStack_a90 = 0x80d;
    (**(*0x1bb18 + 0x48))(L"PchSetup",0x1b350,0,&uStack_a90,0x1c880);
    iVar8 = (**(*0x1bb10 + 0x140))(0x1b200,0,&puStack_a40);
    if (-1 < iVar8) {
        (**puStack_a40)(puStack_a40,0x1d098,0x1d0a0);
        *0x1bb50 = fcn.0001a23c(*0x1d098 * 0xc);
        if (*0x1bb50 != 0) {
            iVar8 = *0x1d098 * 0xc;
            *0x1d0a8 = fcn.0001a23c(iVar8);
            if (*0x1d0a8 != 0) {
                fcn.0001a6a4(iVar8);
                *(*0x1bb58 + 0xe) = *0x1c279;
                *(*0x1bb58 + 0xf) = *0x1c27a;
                *(*0x1bb58 + 0x61) = *0x1c27b;
                *(*0x1bb58 + 0x60) = *0x1c27c;
                *(*0x1bb58 + 0x10) = *0x1c27d;
                *(*0x1bb58 + 0x11) = *0x1c27f;
                *(*0x1bb58 + 0x12) = *0x1c280;
                *(*0x1bb58 + 0x13) = *0x1c281;
                *(*0x1bb58 + 0x14) = *0x1c27e;
                *(*0x1bb58 + 0x2a) = 0;
                *(*0x1bb58 + 0x17) = *0x1d0a0;
                *(*0x1bb58 + 0x2f) = 0;
                *(*0x1bb58 + 0x72) = *0x1c293;
                if (*0x1c293 == '\x01') {
                    *(*0x1bb58 + 0x73) = *0x1c294;
                    *(*0x1bb58 + 0x75) = *0x1c295;
                    *(*0x1bb58 + 0x8f) = *0x1c296;
                    *(*0x1bb58 + 0x76) = *0x1c29d;
                    *(*0x1bb58 + 0xb54) = *0x1c65a;
                    *(*0x1bb58 + 0xb55) = *0x1c65b;
                    *(*0x1bb58 + 0x84f) = *0x1c2bc;
                    *(*0x1bb58 + 0x850) = *0x1c2bd;
                    *(*0x1bb58 + 0x851) = *0x1c2be;
                    *(*0x1bb58 + 0x852) = *0x1c2bf;
                    *(*0x1bb58 + 0x853) = *0x1c2c0;
                    *(*0x1bb58 + 0x854) = *0x1c2c1;
                    *(*0x1bb58 + 0x327) = *0x1c29e;
                    *(*0x1bb58 + 500) = *0x1c29f;
                    *(*0x1bb58 + 0x1f7) = *0x1c2a0;
                    *(*0x1bb58 + 0x32f) = *0x1c2a2;
                    *(*0x1bb58 + 0x330) = *0x1c2a3;
                    *(*0x1bb58 + 0x969) = *0x1c2af;
                    *(*0x1bb58 + 0x333) = *0x1c2aa;
                    *(*0x1bb58 + 0x334) = *0x1c2ab;
                    *(*0x1bb58 + 0x335) = *0x1c2ac;
                    *(*0x1bb58 + 0x336) = *0x1c2ad;
                    *(*0x1bb58 + 0x337) = *0x1c2ae;
                    *(*0x1bb58 + 0xb56) = *0x1c65c;
                }
                *(*0x1bb58 + 0x911) = *0x1c3da;
                if ((cStack_3d3 == '\x01') || (*0x1c293 == '\x01')) {
                    *(*0x1bb58 + 0x9e) = 0;
                }
                else {
                    *(*0x1bb58 + 0x9e) = uStack_3d2;
                }
                *(*0x1bb58 + 0x5f) = *0x1bbfd;
                *(*0x1bb58 + 0x33d) = *0x1c2e1;
                *(*0x1bb58 + 0x33e) = *0x1c2e2;
                *(*0x1bb58 + 0x33f) = *0x1c2e3;
                *(*0x1bb58 + 0x343) = *0x1c2e7;
                *(*0x1bb58 + 0x347) = *0x1c2eb;
                *(*0x1bb58 + 0x348) = *0x1c2ec;
                *(*0x1bb58 + 0x349) = *0x1c2ed;
                *(*0x1bb58 + 0x34b) = *0x1c2ef;
                *(*0x1bb58 + 0x34d) = *0x1c2f1;
                *(*0x1bb58 + 0x351) = *0x1c2f5;
                *(*0x1bb58 + 0x353) = *0x1c2f7;
                *(*0x1bb58 + 0x355) = *0x1c2f9;
                *(*0x1bb58 + 0x357) = *0x1c2fb;
                if (*0x1c2fb == '\x01') {
                    *(*0x1bb58 + 0x358) = *0x1c2fc;
                    *(*0x1bb58 + 0x359) = *0x1c2fd;
                    *(*0x1bb58 + 0x35b) = *0x1c2ff;
                    *(*0x1bb58 + 0x35f) = *0x1c303;
                    *(*0x1bb58 + 0x360) = *0x1c304;
                    *(*0x1bb58 + 0x361) = *0x1c305;
                    *(*0x1bb58 + 0x362) = *0x1c306;
                    *(*0x1bb58 + 0x363) = *0x1c307;
                    *(*0x1bb58 + 0x364) = *0x1c308;
                    *(*0x1bb58 + 0x896) = *0x1c30d;
                    *(*0x1bb58 + 0x90d) = *0x1c353;
                    if (*(*0x1bb58 + 0x896) == '\x01') {
                        *(*0x1bb58 + 0x897) = *0x1c30e;
                        *(*0x1bb58 + 0x898) = *0x1c30f;
                        *(*0x1bb58 + 0x899) = *0x1c310;
                        *(*0x1bb58 + 0x89a) = *0x1c311;
                        *(*0x1bb58 + 0x89b) = *0x1c312;
                        *(*0x1bb58 + 0x89c) = *0x1c313;
                        *(*0x1bb58 + 0x89d) = *0x1c314;
                        *(*0x1bb58 + 0x89e) = *0x1c315;
                        *(*0x1bb58 + 0x89f) = *0x1c316;
                        *(*0x1bb58 + 0x8a0) = *0x1c317;
                        *(*0x1bb58 + 0xa89) = *0x1c5a3;
                        *(*0x1bb58 + 0xa8a) = *0x1c5a4;
                        *(*0x1bb58 + 0xa8b) = *0x1c5a5;
                        *(*0x1bb58 + 0xa8c) = *0x1c5a6;
                        *(*0x1bb58 + 0xa8d) = *0x1c5a7;
                        *(*0x1bb58 + 0xa8e) = *0x1c5a8;
                        *(*0x1bb58 + 0xa8f) = *0x1c5a9;
                        *(*0x1bb58 + 0xa90) = *0x1c5aa;
                        *(*0x1bb58 + 0xa91) = *0x1c5ab;
                        *(*0x1bb58 + 0xa92) = *0x1c5ac;
                        *(*0x1bb58 + 0xa93) = *0x1c5ad;
                        *(*0x1bb58 + 0xa94) = *0x1c5ae;
                        *(*0x1bb58 + 0xad6) = *0x1c5ec;
                        *(*0x1bb58 + 0xad7) = *0x1c5ed;
                        *(*0x1bb58 + 0xad8) = *0x1c5ee;
                        *(*0x1bb58 + 0xad9) = *0x1c5ef;
                        *(*0x1bb58 + 0xada) = *0x1c5f0;
                        *(*0x1bb58 + 0xadb) = *0x1c5f1;
                        *(*0x1bb58 + 0xadc) = *0x1c5f2;
                        *(*0x1bb58 + 0xadd) = *0x1c5f3;
                        *(*0x1bb58 + 0xade) = *0x1c5f4;
                        *(*0x1bb58 + 0xadf) = *0x1c5f5;
                        *(*0x1bb58 + 0xae0) = *0x1c5f6;
                        *(*0x1bb58 + 0xae1) = *0x1c5f7;
                        *(*0x1bb58 + 0xae2) = *0x1c5f8;
                        *(*0x1bb58 + 0xae3) = *0x1c5f9;
                        *(*0x1bb58 + 0xae4) = *0x1c5fa;
                        *(*0x1bb58 + 0xae5) = *0x1c5fb;
                        *(*0x1bb58 + 0xae6) = *0x1c5fc;
                        *(*0x1bb58 + 0xae7) = *0x1c5fd;
                        *(*0x1bb58 + 0xae8) = *0x1c5fe;
                        *(*0x1bb58 + 0xae9) = *0x1c5ff;
                        *(*0x1bb58 + 0xaea) = *0x1c600;
                        *(*0x1bb58 + 0xaeb) = *0x1c601;
                    }
                    else {
                        *(*0x1bb58 + 0x897) = 0;
                        *(*0x1bb58 + 0x898) = 0;
                        *(*0x1bb58 + 0x899) = 0;
                        *(*0x1bb58 + 0x89a) = 0;
                        *(*0x1bb58 + 0x89b) = 0;
                        *(*0x1bb58 + 0x89c) = 0;
                        *(*0x1bb58 + 0x89d) = 0;
                        *(*0x1bb58 + 0x89e) = 0;
                        *(*0x1bb58 + 0x89f) = 0;
                        *(*0x1bb58 + 0x8a0) = 0;
                        *(*0x1bb58 + 0xa89) = 0;
                        *(*0x1bb58 + 0xa8a) = 0;
                        *(*0x1bb58 + 0xa8b) = 0;
                        *(*0x1bb58 + 0xa8c) = 0;
                        *(*0x1bb58 + 0xa8d) = 0;
                        *(*0x1bb58 + 0xa8e) = 0;
                        *(*0x1bb58 + 0xa8f) = 0;
                        *(*0x1bb58 + 0xa90) = 0;
                        *(*0x1bb58 + 0xa91) = 0;
                        *(*0x1bb58 + 0xa92) = 0;
                        *(*0x1bb58 + 0xa93) = 0;
                        *(*0x1bb58 + 0xa94) = 0;
                        *(*0x1bb58 + 0xad6) = 0;
                        *(*0x1bb58 + 0xad7) = 0;
                        *(*0x1bb58 + 0xad8) = 0;
                        *(*0x1bb58 + 0xad9) = 0;
                        *(*0x1bb58 + 0xada) = 0;
                        *(*0x1bb58 + 0xadb) = 0;
                        *(*0x1bb58 + 0xadc) = 0;
                        *(*0x1bb58 + 0xadd) = 0;
                        *(*0x1bb58 + 0xade) = 0;
                        *(*0x1bb58 + 0xadf) = 0;
                        *(*0x1bb58 + 0xae0) = 0;
                        *(*0x1bb58 + 0xae1) = 0;
                        *(*0x1bb58 + 0xae2) = 0;
                        *(*0x1bb58 + 0xae3) = 0;
                        *(*0x1bb58 + 0xae4) = 0;
                        *(*0x1bb58 + 0xae5) = 0;
                        *(*0x1bb58 + 0xae6) = 0;
                        *(*0x1bb58 + 0xae7) = 0;
                        *(*0x1bb58 + 0xae8) = 0;
                        *(*0x1bb58 + 0xae9) = 0;
                        *(*0x1bb58 + 0xaea) = 0;
                        *(*0x1bb58 + 0xaeb) = 0;
                    }
                    *(*0x1bb58 + 0x8a7) = *0x1c318;
                    *(*0x1bb58 + 0x8a8) = *0x1c319;
                    if (*(*0x1bb58 + 0x8a7) == '\x01') {
                        *(*0x1bb58 + 0x8a9) = *0x1c31a;
                        *(*0x1bb58 + 0x8aa) = *0x1c31b;
                        *(*0x1bb58 + 0x8ab) = *0x1c31c;
                        *(*0x1bb58 + 0x8ac) = *0x1c31d;
                        *(*0x1bb58 + 0x8ad) = *0x1c31e;
                        *(*0x1bb58 + 0x8ae) = *0x1c31f;
                        *(*0x1bb58 + 0x8af) = *0x1c320;
                        *(*0x1bb58 + 0x8b0) = *0x1c321;
                        *(*0x1bb58 + 0x8b1) = *0x1c322;
                        *(*0x1bb58 + 0x8b2) = *0x1c323;
                        *(*0x1bb58 + 0xa95) = *0x1c5af;
                        *(*0x1bb58 + 0xa96) = *0x1c5b0;
                        *(*0x1bb58 + 0xa97) = *0x1c5b1;
                        *(*0x1bb58 + 0xa98) = *0x1c5b2;
                        *(*0x1bb58 + 0xa99) = *0x1c5b3;
                        *(*0x1bb58 + 0xa9a) = *0x1c5b4;
                        *(*0x1bb58 + 0xa9b) = *0x1c5b5;
                        *(*0x1bb58 + 0xa9c) = *0x1c5b6;
                        *(*0x1bb58 + 0xa9d) = *0x1c5b7;
                        *(*0x1bb58 + 0xa9e) = *0x1c5b8;
                        *(*0x1bb58 + 0xa9f) = *0x1c5b9;
                        *(*0x1bb58 + 0xaa0) = *0x1c5ba;
                        *(*0x1bb58 + 0xaec) = *0x1c602;
                        *(*0x1bb58 + 0xaed) = *0x1c603;
                        *(*0x1bb58 + 0xaee) = *0x1c604;
                        *(*0x1bb58 + 0xaef) = *0x1c605;
                        *(*0x1bb58 + 0xaf0) = *0x1c606;
                        *(*0x1bb58 + 0xaf1) = *0x1c607;
                        *(*0x1bb58 + 0xaf2) = *0x1c608;
                        *(*0x1bb58 + 0xaf3) = *0x1c609;
                        *(*0x1bb58 + 0xaf4) = *0x1c60a;
                        *(*0x1bb58 + 0xaf5) = *0x1c60b;
                        *(*0x1bb58 + 0xaf6) = *0x1c60c;
                        *(*0x1bb58 + 0xaf7) = *0x1c60d;
                        *(*0x1bb58 + 0xaf8) = *0x1c60e;
                        *(*0x1bb58 + 0xaf9) = *0x1c60f;
                        *(*0x1bb58 + 0xafa) = *0x1c610;
                        *(*0x1bb58 + 0xafb) = *0x1c611;
                        *(*0x1bb58 + 0xafc) = *0x1c612;
                        *(*0x1bb58 + 0xafd) = *0x1c613;
                        *(*0x1bb58 + 0xafe) = *0x1c614;
                        *(*0x1bb58 + 0xaff) = *0x1c615;
                        *(*0x1bb58 + 0xb00) = *0x1c616;
                        *(*0x1bb58 + 0xb01) = *0x1c617;
                        *(*0x1bb58 + 0x8b3) = *0x1c324;
                        *(*0x1bb58 + 0x8b4) = *0x1c325;
                        *(*0x1bb58 + 0x8b5) = *0x1c326;
                        *(*0x1bb58 + 0x8b6) = *0x1c327;
                        *(*0x1bb58 + 0x8b7) = *0x1c328;
                        *(*0x1bb58 + 0x8b8) = *0x1c329;
                        *(*0x1bb58 + 0x8b9) = *0x1c32a;
                        *(*0x1bb58 + 0x8ba) = *0x1c32b;
                        *(*0x1bb58 + 0x8bb) = *0x1c32c;
                        *(*0x1bb58 + 0x8bc) = *0x1c32d;
                        *(*0x1bb58 + 0xaa1) = *0x1c5bb;
                        *(*0x1bb58 + 0xaa2) = *0x1c5bc;
                        *(*0x1bb58 + 0xaa3) = *0x1c5bd;
                        *(*0x1bb58 + 0xaa4) = *0x1c5be;
                        *(*0x1bb58 + 0xaa5) = *0x1c5bf;
                        *(*0x1bb58 + 0xaa6) = *0x1c5c0;
                        *(*0x1bb58 + 0xaa7) = *0x1c5c1;
                        *(*0x1bb58 + 0xaa8) = *0x1c5c2;
                        *(*0x1bb58 + 0xaa9) = *0x1c5c3;
                        *(*0x1bb58 + 0xaaa) = *0x1c5c4;
                        *(*0x1bb58 + 0xaab) = *0x1c5c5;
                        *(*0x1bb58 + 0xaac) = *0x1c5c6;
                        *(*0x1bb58 + 0xb02) = *0x1c618;
                        *(*0x1bb58 + 0xb03) = *0x1c619;
                        *(*0x1bb58 + 0xb04) = *0x1c61a;
                        *(*0x1bb58 + 0xb05) = *0x1c61b;
                        *(*0x1bb58 + 0xb06) = *0x1c61c;
                        *(*0x1bb58 + 0xb07) = *0x1c61d;
                        *(*0x1bb58 + 0xb08) = *0x1c61e;
                        *(*0x1bb58 + 0xb09) = *0x1c61f;
                        *(*0x1bb58 + 0xb0a) = *0x1c620;
                        *(*0x1bb58 + 0xb0b) = *0x1c621;
                        *(*0x1bb58 + 0xb0c) = *0x1c622;
                        *(*0x1bb58 + 0xb0d) = *0x1c623;
                        *(*0x1bb58 + 0xb0e) = *0x1c624;
                        *(*0x1bb58 + 0xb0f) = *0x1c625;
                        *(*0x1bb58 + 0xb10) = *0x1c626;
                        *(*0x1bb58 + 0xb11) = *0x1c627;
                        *(*0x1bb58 + 0xb12) = *0x1c628;
                        *(*0x1bb58 + 0xb13) = *0x1c629;
                        *(*0x1bb58 + 0xb14) = *0x1c62a;
                        *(*0x1bb58 + 0xb15) = *0x1c62b;
                        *(*0x1bb58 + 0xb16) = *0x1c62c;
                        *(*0x1bb58 + 0xb17) = *0x1c62d;
                        *(*0x1bb58 + 0x8bd) = *0x1c32e;
                        *(*0x1bb58 + 0x8be) = *0x1c32f;
                        *(*0x1bb58 + 0x8bf) = *0x1c330;
                        *(*0x1bb58 + 0x8c0) = *0x1c331;
                        *(*0x1bb58 + 0x8c1) = *0x1c332;
                        *(*0x1bb58 + 0x8c2) = *0x1c333;
                        *(*0x1bb58 + 0x8c3) = *0x1c334;
                        *(*0x1bb58 + 0x8c4) = *0x1c335;
                        *(*0x1bb58 + 0x8c5) = *0x1c336;
                        *(*0x1bb58 + 0x8c6) = *0x1c337;
                        *(*0x1bb58 + 0xaad) = *0x1c5c7;
                        *(*0x1bb58 + 0xaae) = *0x1c5c8;
                        *(*0x1bb58 + 0xaaf) = *0x1c5c9;
                        *(*0x1bb58 + 0xab0) = *0x1c5ca;
                        *(*0x1bb58 + 0xab1) = *0x1c5cb;
                        *(*0x1bb58 + 0xab2) = *0x1c5cc;
                        *(*0x1bb58 + 0xab3) = *0x1c5cd;
                        *(*0x1bb58 + 0xab4) = *0x1c5ce;
                        *(*0x1bb58 + 0xab5) = *0x1c5cf;
                        *(*0x1bb58 + 0xab6) = *0x1c5d0;
                        *(*0x1bb58 + 0xab7) = *0x1c5d1;
                        *(*0x1bb58 + 0xab8) = *0x1c5d2;
                        *(*0x1bb58 + 0xb18) = *0x1c62e;
                        *(*0x1bb58 + 0xb19) = *0x1c62f;
                        *(*0x1bb58 + 0xb1a) = *0x1c630;
                        *(*0x1bb58 + 0xb1b) = *0x1c631;
                        *(*0x1bb58 + 0xb1c) = *0x1c632;
                        *(*0x1bb58 + 0xb1d) = *0x1c633;
                        *(*0x1bb58 + 0xb1e) = *0x1c634;
                        *(*0x1bb58 + 0xb1f) = *0x1c635;
                        *(*0x1bb58 + 0xb20) = *0x1c636;
                        *(*0x1bb58 + 0xb21) = *0x1c637;
                        *(*0x1bb58 + 0xb22) = *0x1c638;
                        *(*0x1bb58 + 0xb23) = *0x1c639;
                        *(*0x1bb58 + 0xb24) = *0x1c63a;
                        *(*0x1bb58 + 0xb25) = *0x1c63b;
                        *(*0x1bb58 + 0xb26) = *0x1c63c;
                        *(*0x1bb58 + 0xb27) = *0x1c63d;
                        *(*0x1bb58 + 0xb28) = *0x1c63e;
                        *(*0x1bb58 + 0xb29) = *0x1c63f;
                        *(*0x1bb58 + 0xb2a) = *0x1c640;
                        *(*0x1bb58 + 0xb2b) = *0x1c641;
                        *(*0x1bb58 + 0xb2c) = *0x1c642;
                        *(*0x1bb58 + 0xb2d) = *0x1c643;
                    }
                    else {
                        *(*0x1bb58 + 0x8a9) = 0;
                        *(*0x1bb58 + 0x8aa) = 0;
                        *(*0x1bb58 + 0x8ab) = 0;
                        *(*0x1bb58 + 0x8ac) = 0;
                        *(*0x1bb58 + 0x8ad) = 0;
                        *(*0x1bb58 + 0x8ae) = 0;
                        *(*0x1bb58 + 0x8af) = 0;
                        *(*0x1bb58 + 0x8b0) = 0;
                        *(*0x1bb58 + 0x8b1) = 0;
                        *(*0x1bb58 + 0x8b2) = 0;
                        *(*0x1bb58 + 0xa95) = 0;
                        *(*0x1bb58 + 0xa96) = 0;
                        *(*0x1bb58 + 0xa97) = 0;
                        *(*0x1bb58 + 0xa98) = 0;
                        *(*0x1bb58 + 0xa99) = 0;
                        *(*0x1bb58 + 0xa9a) = 0;
                        *(*0x1bb58 + 0xa9b) = 0;
                        *(*0x1bb58 + 0xa9c) = 0;
                        *(*0x1bb58 + 0xa9d) = 0;
                        *(*0x1bb58 + 0xa9e) = 0;
                        *(*0x1bb58 + 0xa9f) = 0;
                        *(*0x1bb58 + 0xaa0) = 0;
                        *(*0x1bb58 + 0xaec) = 0;
                        *(*0x1bb58 + 0xaed) = 0;
                        *(*0x1bb58 + 0xaee) = 0;
                        *(*0x1bb58 + 0xaef) = 0;
                        *(*0x1bb58 + 0xaf0) = 0;
                        *(*0x1bb58 + 0xaf1) = 0;
                        *(*0x1bb58 + 0xaf2) = 0;
                        *(*0x1bb58 + 0xaf3) = 0;
                        *(*0x1bb58 + 0xaf4) = 0;
                        *(*0x1bb58 + 0xaf5) = 0;
                        *(*0x1bb58 + 0xaf6) = 0;
                        *(*0x1bb58 + 0xaf7) = 0;
                        *(*0x1bb58 + 0xaf8) = 0;
                        *(*0x1bb58 + 0xaf9) = 0;
                        *(*0x1bb58 + 0xafa) = 0;
                        *(*0x1bb58 + 0xafb) = 0;
                        *(*0x1bb58 + 0xafc) = 0;
                        *(*0x1bb58 + 0xafd) = 0;
                        *(*0x1bb58 + 0xafe) = 0;
                        *(*0x1bb58 + 0xaff) = 0;
                        *(*0x1bb58 + 0xb00) = 0;
                        *(*0x1bb58 + 0xb01) = 0;
                        *(*0x1bb58 + 0x8b3) = 0;
                        *(*0x1bb58 + 0x8b4) = 0;
                        *(*0x1bb58 + 0x8b5) = 0;
                        *(*0x1bb58 + 0x8b6) = 0;
                        *(*0x1bb58 + 0x8b7) = 0;
                        *(*0x1bb58 + 0x8b8) = 0;
                        *(*0x1bb58 + 0x8b9) = 0;
                        *(*0x1bb58 + 0x8ba) = 0;
                        *(*0x1bb58 + 0x8bb) = 0;
                        *(*0x1bb58 + 0x8bc) = 0;
                        *(*0x1bb58 + 0xaa1) = 0;
                        *(*0x1bb58 + 0xaa2) = 0;
                        *(*0x1bb58 + 0xaa3) = 0;
                        *(*0x1bb58 + 0xaa4) = 0;
                        *(*0x1bb58 + 0xaa5) = 0;
                        *(*0x1bb58 + 0xaa6) = 0;
                        *(*0x1bb58 + 0xaa7) = 0;
                        *(*0x1bb58 + 0xaa8) = 0;
                        *(*0x1bb58 + 0xaa9) = 0;
                        *(*0x1bb58 + 0xaaa) = 0;
                        *(*0x1bb58 + 0xaab) = 0;
                        *(*0x1bb58 + 0xaac) = 0;
                        *(*0x1bb58 + 0xb02) = 0;
                        *(*0x1bb58 + 0xb03) = 0;
                        *(*0x1bb58 + 0xb04) = 0;
                        *(*0x1bb58 + 0xb05) = 0;
                        *(*0x1bb58 + 0xb06) = 0;
                        *(*0x1bb58 + 0xb07) = 0;
                        *(*0x1bb58 + 0xb08) = 0;
                        *(*0x1bb58 + 0xb09) = 0;
                        *(*0x1bb58 + 0xb0a) = 0;
                        *(*0x1bb58 + 0xb0b) = 0;
                        *(*0x1bb58 + 0xb0c) = 0;
                        *(*0x1bb58 + 0xb0d) = 0;
                        *(*0x1bb58 + 0xb0e) = 0;
                        *(*0x1bb58 + 0xb0f) = 0;
                        *(*0x1bb58 + 0xb10) = 0;
                        *(*0x1bb58 + 0xb11) = 0;
                        *(*0x1bb58 + 0xb12) = 0;
                        *(*0x1bb58 + 0xb13) = 0;
                        *(*0x1bb58 + 0xb14) = 0;
                        *(*0x1bb58 + 0xb15) = 0;
                        *(*0x1bb58 + 0xb16) = 0;
                        *(*0x1bb58 + 0xb17) = 0;
                        *(*0x1bb58 + 0x8bd) = 0;
                        *(*0x1bb58 + 0x8be) = 0;
                        *(*0x1bb58 + 0x8bf) = 0;
                        *(*0x1bb58 + 0x8c0) = 0;
                        *(*0x1bb58 + 0x8c1) = 0;
                        *(*0x1bb58 + 0x8c2) = 0;
                        *(*0x1bb58 + 0x8c3) = 0;
                        *(*0x1bb58 + 0x8c4) = 0;
                        *(*0x1bb58 + 0x8c5) = 0;
                        *(*0x1bb58 + 0x8c6) = 0;
                        *(*0x1bb58 + 0xaad) = 0;
                        *(*0x1bb58 + 0xaae) = 0;
                        *(*0x1bb58 + 0xaaf) = 0;
                        *(*0x1bb58 + 0xab0) = 0;
                        *(*0x1bb58 + 0xab1) = 0;
                        *(*0x1bb58 + 0xab2) = 0;
                        *(*0x1bb58 + 0xab3) = 0;
                        *(*0x1bb58 + 0xab4) = 0;
                        *(*0x1bb58 + 0xab5) = 0;
                        *(*0x1bb58 + 0xab6) = 0;
                        *(*0x1bb58 + 0xab7) = 0;
                        *(*0x1bb58 + 0xab8) = 0;
                        *(*0x1bb58 + 0xb18) = 0;
                        *(*0x1bb58 + 0xb19) = 0;
                        *(*0x1bb58 + 0xb1a) = 0;
                        *(*0x1bb58 + 0xb1b) = 0;
                        *(*0x1bb58 + 0xb1c) = 0;
                        *(*0x1bb58 + 0xb1d) = 0;
                        *(*0x1bb58 + 0xb1e) = 0;
                        *(*0x1bb58 + 0xb1f) = 0;
                        *(*0x1bb58 + 0xb20) = 0;
                        *(*0x1bb58 + 0xb21) = 0;
                        *(*0x1bb58 + 0xb22) = 0;
                        *(*0x1bb58 + 0xb23) = 0;
                        *(*0x1bb58 + 0xb24) = 0;
                        *(*0x1bb58 + 0xb25) = 0;
                        *(*0x1bb58 + 0xb26) = 0;
                        *(*0x1bb58 + 0xb27) = 0;
                        *(*0x1bb58 + 0xb28) = 0;
                        *(*0x1bb58 + 0xb29) = 0;
                        *(*0x1bb58 + 0xb2a) = 0;
                        *(*0x1bb58 + 0xb2b) = 0;
                        *(*0x1bb58 + 0xb2c) = 0;
                        *(*0x1bb58 + 0xb2d) = 0;
                    }
                    *(*0x1bb58 + 0x902) = *0x1c34a;
                    *(*0x1bb58 + 0x903) = *0x1c34b;
                    *(*0x1bb58 + 0x8c7) = *0x1c338;
                    *(*0x1bb58 + 0x8c8) = *0x1c339;
                    *(*0x1bb58 + 0x8c9) = *0x1c33a;
                    *(*0x1bb58 + 0x8ca) = *0x1c33b;
                    *(*0x1bb58 + 0x8cb) = *0x1c33c;
                    *(*0x1bb58 + 0x8cc) = *0x1c33d;
                    *(*0x1bb58 + 0xab9) = *0x1c5e3;
                    *(*0x1bb58 + 0xaba) = *0x1c5e4;
                    *(*0x1bb58 + 0xabb) = *0x1c5e5;
                    *(*0x1bb58 + 0x8cd) = *0x1c33e;
                    *(*0x1bb58 + 0x8ce) = *0x1c33f;
                    *(*0x1bb58 + 0x8cf) = *0x1c340;
                    *(*0x1bb58 + 0x8d0) = *0x1c341;
                    *(*0x1bb58 + 0x8d1) = *0x1c342;
                    *(*0x1bb58 + 0x8d2) = *0x1c343;
                    *(*0x1bb58 + 0xabc) = *0x1c5e6;
                    *(*0x1bb58 + 0xabd) = *0x1c5e7;
                    *(*0x1bb58 + 0xabe) = *0x1c5e8;
                    *(*0x1bb58 + 0x8d3) = *0x1c344;
                    *(*0x1bb58 + 0x8d4) = *0x1c345;
                    *(*0x1bb58 + 0x8d5) = *0x1c346;
                    *(*0x1bb58 + 0x8d6) = *0x1c347;
                    *(*0x1bb58 + 0x8d7) = *0x1c348;
                    *(*0x1bb58 + 0x8d8) = *0x1c349;
                    *(*0x1bb58 + 0xabf) = *0x1c5e9;
                    *(*0x1bb58 + 0xac0) = *0x1c5ea;
                    *(*0x1bb58 + 0xac1) = *0x1c5eb;
                    *(*0x1bb58 + 0xc66) = *0x1c71b;
                    *(*0x1bb58 + 0xc67) = *0x1c71c;
                    *(*0x1bb58 + 0xc68) = *0x1c71d;
                    *(*0x1bb58 + 0xc69) = *0x1c71e;
                    *(*0x1bb58 + 0xc6a) = *0x1c71f;
                    *(*0x1bb58 + 0xc6b) = *0x1c720;
                    *(*0x1bb58 + 0xc6c) = *0x1c721;
                    *(*0x1bb58 + 0xc6d) = *0x1c722;
                    *(*0x1bb58 + 0xc6e) = *0x1c723;
                    *(*0x1bb58 + 0xc6f) = *0x1c724;
                    *(*0x1bb58 + 0xc70) = *0x1c725;
                    *(*0x1bb58 + 0xc71) = *0x1c726;
                    *(*0x1bb58 + 0xc72) = *0x1c727;
                    *(*0x1bb58 + 0xc73) = *0x1c728;
                    *(*0x1bb58 + 0xc74) = *0x1c729;
                    *(*0x1bb58 + 0xc75) = *0x1c72a;
                    *(*0x1bb58 + 0xc76) = *0x1c72b;
                    *(*0x1bb58 + 0xc77) = *0x1c72c;
                    *(*0x1bb58 + 0xc78) = *0x1c72d;
                    *(*0x1bb58 + 0xc79) = *0x1c72e;
                    *(*0x1bb58 + 0xc7a) = *0x1c72f;
                    *(*0x1bb58 + 0xc7b) = *0x1c730;
                    *(*0x1bb58 + 0xc7c) = *0x1c731;
                    *(*0x1bb58 + 0xc7d) = *0x1c732;
                    *(*0x1bb58 + 0xc7e) = *0x1c733;
                    *(*0x1bb58 + 0xc7f) = *0x1c734;
                    *(*0x1bb58 + 0xc80) = *0x1c735;
                    *(*0x1bb58 + 0xc81) = *0x1c736;
                    *(*0x1bb58 + 0xc82) = *0x1c737;
                    *(*0x1bb58 + 0xc83) = *0x1c738;
                    *(*0x1bb58 + 0xc84) = *0x1c739;
                    *(*0x1bb58 + 0xc85) = *0x1c73a;
                    *(*0x1bb58 + 0xc86) = *0x1c73b;
                    *(*0x1bb58 + 0xc87) = *0x1c73c;
                    *(*0x1bb58 + 0xc88) = *0x1c73d;
                    *(*0x1bb58 + 0xc89) = *0x1c73e;
                    *(*0x1bb58 + 0xc81) = *0x1c73f;
                    *(*0x1bb58 + 0xc8b) = *0x1c740;
                    *(*0x1bb58 + 0xc8c) = *0x1c741;
                    *(*0x1bb58 + 0xc8d) = *0x1c742;
                    *(*0x1bb58 + 0xc8e) = *0x1c743;
                    *(*0x1bb58 + 0xc8f) = *0x1c744;
                    *(*0x1bb58 + 0xc90) = *0x1c745;
                    *(*0x1bb58 + 0xc91) = *0x1c746;
                    *(*0x1bb58 + 0xc92) = *0x1c747;
                    *(*0x1bb58 + 0xc65) = *0x1c71a;
                    *(*0x1bb58 + 0xa17) = *0x1c56c;
                    *(*0x1bb58 + 0xa18) = *0x1c56d;
                    *(*0x1bb58 + 0xa19) = *0x1c56e;
                    *(*0x1bb58 + 0xa1a) = *0x1c56f;
                    *(*0x1bb58 + 0xa1b) = *0x1c570;
                    *(*0x1bb58 + 0xa1c) = *0x1c571;
                    *(*0x1bb58 + 0xac2) = *0x1c5d3;
                    *(*0x1bb58 + 0xac3) = *0x1c5d4;
                    *(*0x1bb58 + 0xac4) = *0x1c5d5;
                    *(*0x1bb58 + 0xac5) = *0x1c5d6;
                    *(*0x1bb58 + 0xac6) = *0x1c5d7;
                    *(*0x1bb58 + 0xac7) = *0x1c5d8;
                    *(*0x1bb58 + 0xa1d) = *0x1c572;
                    *(*0x1bb58 + 0xa1e) = *0x1c573;
                    *(*0x1bb58 + 0xa1f) = *0x1c574;
                    *(*0x1bb58 + 0xa20) = *0x1c575;
                    *(*0x1bb58 + 0xa21) = *0x1c576;
                    *(*0x1bb58 + 0xac8) = *0x1c5d9;
                    *(*0x1bb58 + 0xac9) = *0x1c5da;
                    *(*0x1bb58 + 0xaca) = *0x1c5db;
                    *(*0x1bb58 + 0xacb) = *0x1c5dc;
                    *(*0x1bb58 + 0xacc) = *0x1c5dd;
                    *(*0x1bb58 + 0xacd) = *0x1c5de;
                    *(*0x1bb58 + 0xad2) = *0x1c5df;
                    *(*0x1bb58 + 0xad3) = *0x1c5e0;
                    *(*0x1bb58 + 0xad4) = *0x1c5e1;
                    *(*0x1bb58 + 0xad5) = *0x1c5e2;
                    *(*0x1bb58 + 0xa36) = *0x1c599;
                    *(*0x1bb58 + 0xa37) = *0x1c59a;
                    *(*0x1bb58 + 0xace) = *0x1c59f;
                    *(*0x1bb58 + 0xc32) = *0x1c700;
                    *(*0x1bb58 + 0xc36) = *0x1c704;
                    *(*0x1bb58 + 0xc3a) = *0x1c708;
                    *(*0x1bb58 + 0xc3e) = *0x1c70c;
                    *(*0x1bb58 + 0xc94) = *0x1c74b;
                    *(*0x1bb58 + 0xb58) = *0x1c65f;
                    *(*0x1bb58 + 0xb59) = *0x1c669;
                    *(*0x1bb58 + 0xb5b) = *0x1c66b;
                    *(*0x1bb58 + 0xb5d) = *0x1c66d;
                    *(*0x1bb58 + 0xb5f) = *0x1c66f;
                    *(*0x1bb58 + 0xb61) = *0x1c671;
                    *(*0x1bb58 + 0xb63) = *0x1c673;
                    *(*0x1bb58 + 0xb65) = *0x1c675;
                    *(*0x1bb58 + 0xb67) = *0x1c677;
                    *(*0x1bb58 + 0xb69) = *0x1c679;
                    *(*0x1bb58 + 0xb6b) = *0x1c67b;
                    *(*0x1bb58 + 0xb6d) = *0x1c67d;
                    *(*0x1bb58 + 0xb6f) = *0x1c67f;
                    *(*0x1bb58 + 0xb71) = *0x1c681;
                    *(*0x1bb58 + 0xb73) = *0x1c683;
                    *(*0x1bb58 + 0xb75) = *0x1c685;
                    *(*0x1bb58 + 0xb77) = *0x1c687;
                    *(*0x1bb58 + 0xc63) = *0x1c718;
                    *(*0x1bb58 + 0xc64) = *0x1c719;
                    *(*0x1bb58 + 0x904) = *0x1c34c;
                    if (*0x1c34c == '\x01') {
                        *(*0x1bb58 + 0x905) = *0x1c34d;
                        *(*0x1bb58 + 0x906) = *0x1c34e;
                        *(*0x1bb58 + 0x907) = *0x1c34f;
                        *(*0x1bb58 + 0x908) = *0x1c350;
                        *(*0x1bb58 + 0x909) = *0x1c351;
                        *(*0x1bb58 + 0x90a) = *0x1c352;
                    }
                    else {
                        *(*0x1bb58 + 0x905) = 0;
                        *(*0x1bb58 + 0x906) = 0;
                        *(*0x1bb58 + 0x907) = 0;
                        *(*0x1bb58 + 0x908) = 0;
                        *(*0x1bb58 + 0x909) = 0;
                        *(*0x1bb58 + 0x90a) = 0;
                    }
                    *(*0x1bb58 + 0xa11) = *0x1c56b;
                }
                *(*0x1bb58 + 0xb87) = *0x1c68b;
                *(*0x1bb58 + 0xb88) = *0x1c68c;
                *(*0x1bb58 + 0xb89) = *0x1c68d;
                *(*0x1bb58 + 0xb8a) = *0x1c68e;
                *(*0x1bb58 + 0xb8b) = *0x1c68f;
                *(*0x1bb58 + 0xc2f) = *0x1c6fd;
                *(*0x1bb58 + 0xc30) = *0x1c6fe;
                *(*0x1bb58 + 0xc31) = *0x1c6ff;
                *(*0x1bb58 + 0x984) = *0x1c415;
                *(*0x1bb58 + 0x90e) = *0x1c354;
                *(*0x1bb58 + 0x895) = *0x1c8c7;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x10))(0x1d);
                *(*0x1bb58 + 0x3a) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xf8);
                *(*0x1bb58 + 0x315) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xf7);
                *(*0x1bb58 + 0x5c) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar4 = (**(iVar8 + 0x10))(0x21);
                *(*0x1bb58 + 0x5d) = uVar4;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x23);
                *(*0x1bb58 + 0x3b) = uVar2;
                *(*0x1bb58 + 0x6f) = *0x1c2c2;
                *(*0x1bb58 + 0x70) = *0x1c2c3;
                *(*0x1bb58 + 0x20a) = *0x1c2c6;
                *(*0x1bb58 + 0x210) = *0x1c2cc;
                *(*0x1bb58 + 0x20e) = *0x1c2ca;
                *(*0x1bb58 + 0x20c) = *0x1c2c8;
                *(*0x1bb58 + 0x212) = *0x1c2ce;
                *(*0x1bb58 + 0x214) = *0x1c2d0;
                *(*0x1bb58 + 0x203) = *0x1c2c5 << 4 | *0x1c2c4;
                *(*0x1bb58 + 0x2f3) = *0x1bc1a;
                if ((*0x1c3df == '\0') || (iVar11 = 1, *0x1c2d3 == '\0')) {
                    iVar11 = 0;
                }
                *(*0x1bb58 + 0x219) = (iVar11 << 3 | *0x1c2e0) << 4;
                *(*0x1bb58 + 0x21b) =
                     (((((((((*0x1c2df * 2 | *0x1c2de) * 2 | *0x1c2dd) * 2 | *0x1c2db) * 2 | *0x1c2da) * 2 | *0x1c2d9) *
                         2 | *0x1c2d8) * 2 | *0x1c2d7) * 2 | *0x1c2d6) * 2 | *0x1c2d5) * 2 | *0x1c2d4;
                *(*0x1bb58 + 0xb90) = *0x1c694;
                *(*0x1bb58 + 0xb) = 1;
                *(*0x1bb58 + 0x39) = 0;
                iVar8 = fcn.0001a2e4();
                cVar3 = (**(iVar8 + 0x30))(0x45);
                if (cVar3 == '\x01') {
                    uStackX_10 = uStackX_10 & 0xffffffffffffff00;
                    *(*0x1bb58 + 0x30) = 0;
                }
                *(*0x1bb58 + 0x3d) = *0x1bbf3;
                *(*0x1bb58 + 0x4f) = uStack_a50 & 0xfffff;
                (**(*0x1bb10 + 0x170))(0x200,8,0x119a4,0,0x1b370,auStack_a28);
                (**(*0x1bb10 + 0x140))(0x1b340,0,0x1d090);
                *(*0x1bb58 + 0x28) = 0;
                *(*0x1bb58 + 0x20) = 0;
                *(*0x1bb58 + 0x21) = 0;
                *(*0x1bb58 + 0x22) = 0;
                *(*0x1bb58 + 0x23) = 0;
                *(*0x1bb58 + 0x24) = 0;
                uStackX_10._0_1_ = ' ';
                (**(*0x1d090 + 0x18))(*0x1d090,0,0x2e,1,&uStackX_10);
                (**(*0x1d090 + 0x10))(*0x1d090,0,0x2f,1,&uStackX_10);
                if (uStackX_10 == -0x16) {
                    *(*0x1bb58 + 0x20) = 1;
                    *(*0x1bb58 + 0x21) = 1;
                    *(*0x1bb58 + 0x22) = 1;
                }
                if ((*(*0x1bb58 + 0x20) != '\x01') &&
                   ((**(*0x1d090 + 0x10))(*0x1d090,0,0x2e,1,&uStackX_10), uStackX_10 != -1)) {
                    uStackX_10._0_1_ = ' ';
                    (**(*0x1d090 + 0x18))(*0x1d090,0,0x2e,1,&uStackX_10);
                    (**(*0x1d090 + 0x10))(*0x1d090,0,0x2f,1,&uStackX_10);
                    if ((uStackX_10 == -0xc) || (uStackX_10 == -0xf)) {
                        *(*0x1bb58 + 0x28) = 1;
                    }
                }
                *(*0x1bb58 + 0x16) = 1;
                iVar8 = fcn.0001a2e4();
                cVar3 = (**(iVar8 + 0x30))(0x45);
                if (cVar3 == '\x01') {
                    *(*0x1bb58 + 0x40) = 1;
                    *(*0x1bb58 + 0x331) = *0x1bc15;
                    iVar8 = fcn.0001a2e4();
                    uVar5 = (**(iVar8 + 0x18))(0x46);
                    *(*0x1bb58 + 0x93f) = uVar5;
                    iVar8 = fcn.0001a2e4();
                    uVar5 = (**(iVar8 + 0x18))(0x41);
                    *(*0x1bb58 + 0x93b) = uVar5;
                }
                else {
                    *(*0x1bb58 + 0x40) = 0;
                    *(*0x1bb58 + 0x331) = 0;
                    *(*0x1bb58 + 0x93f) = 0;
                    *(*0x1bb58 + 0x93b) = 0;
                }
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x1f2);
                *(*0x1bb58 + 0x8a1) = uVar2;
                *(*0x1bb58 + 0x9c) = *0x1bb84;
                *(*0x1bb58 + 0x206) = uStack_73c;
                if (*0x1bbfe == '\x01') {
                    *(*0x1bb58 + 0x314) = *(*0x1bb58 + 0x314) | 1;
                    *(*0x1bb58 + 0x894) = *0x1c3d7 != '\0';
                }
                else {
                    *(*0x1bb58 + 0x314) = *(*0x1bb58 + 0x314) & 0xfe;
                    *(*0x1bb58 + 0x894) = *0x1c3d7;
                }
                *(*0x1bb58 + 0x314) = *(*0x1bb58 + 0x314) | cStack_740 << 3;
                *(*0x1bb58 + 0x314) = *(*0x1bb58 + 0x314) | cStack_73e << 4;
                *(*0x1bb58 + 0x207) = uStack_73b;
                *(*0x1bb58 + 0x208) = uStack_73a;
                *(*0x1bb58 + 0x205) = 0;
                *(*0x1bb58 + 0x205) = *(*0x1bb58 + 0x205) | cStack_73f << 6;
                *(*0x1bb58 + 0x205) = *(*0x1bb58 + 0x205) | cStack_73d << 7;
                *(*0x1bb58 + 0x9d) = *0x1bbfe;
                *(*0x1bb58 + 499) = *0x1bc21;
                *(*0x1bb58 + 0x98b) = *0x1c430;
                *(*0x1bb58 + 0x985) = *0x1c2d3;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x15b);
                *(*0x1bb58 + 0x986) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x15c);
                *(*0x1bb58 + 0x98a) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x156);
                *(*0x1bb58 + 0x99c) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x157);
                *(*0x1bb58 + 0x9a0) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x160);
                *(*0x1bb58 + 0x9a1) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x158);
                *(*0x1bb58 + 0x997) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x159);
                *(*0x1bb58 + 0x99b) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x15f);
                *(*0x1bb58 + 0xa0f) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x15e);
                *(*0x1bb58 + 0xa15) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x56);
                *(*0x1bb58 + 0xa16) = uVar2;
                *(*0x1bb58 + 0xb98) = *0x1c69d;
                *(*0x1bb58 + 0xc61) = *0x1c713;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xea);
                *(*0x1bb58 + 0xb97) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x141);
                *(*0x1bb58 + 0xb99) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x142);
                *(*0x1bb58 + 0xb9b) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x143);
                *(*0x1bb58 + 0xb9d) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x144);
                *(*0x1bb58 + 0xb9f) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x145);
                *(*0x1bb58 + 0xba1) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x146);
                *(*0x1bb58 + 0xba3) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210,0x147);
                *(*0x1bb58 + 0xba5) = uVar4;
                iVar8 = fcn.0001a2a8();
                uVar4 = (**(iVar8 + 0x10))(0x1b210);
                *(*0x1bb58 + 0xc1b) = uVar4;
                *(*0x1bb58 + 0xc2a) = *0x1c6f9;
                *(*0x1bb58 + 0xc2c) = *0x1c6fb;
                *(*0x1bb58 + 0xc42) = *0x1c749;
                *(*0x1bb58 + 0xc62) = 0;
                *(*0x1bb58 + 0xc93) = *0x1c74a;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xdd);
                *(*0x1bb58 + 0x98c) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xda);
                *(*0x1bb58 + 0x9c0) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xdb);
                *(*0x1bb58 + 0x9c4) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xd7);
                *(*0x1bb58 + 0x9c5) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xd8);
                *(*0x1bb58 + 0x9c9) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xdc);
                *(*0x1bb58 + 0x990) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x33);
                *(*0x1bb58 + 0xa38) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x36);
                *(*0x1bb58 + 0xc98) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xdf);
                *(*0x1bb58 + 0x992) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x8b);
                *(*0x1bb58 + 0x9ca) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x8c);
                *(*0x1bb58 + 0x9ce) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x8d);
                *(*0x1bb58 + 0x9cf) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x8e);
                *(*0x1bb58 + 0x9d3) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xde);
                *(*0x1bb58 + 0x996) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xe1);
                *(*0x1bb58 + 0xa6b) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x8f);
                *(*0x1bb58 + 0xa61) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x90);
                *(*0x1bb58 + 0xa65) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x91);
                *(*0x1bb58 + 0xa66) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x92);
                *(*0x1bb58 + 0xa6a) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xe0);
                *(*0x1bb58 + 0xa6f) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xe2);
                *(*0x1bb58 + 0x9e8) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xe3);
                *(*0x1bb58 + 0x9ec) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xe4);
                *(*0x1bb58 + 0x9ed) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xe5);
                *(*0x1bb58 + 0x9f1) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xe6);
                *(*0x1bb58 + 0x9f2) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xe7);
                *(*0x1bb58 + 0x9f6) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xe8);
                *(*0x1bb58 + 0x9f7) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xe9);
                *(*0x1bb58 + 0x9fb) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xd0);
                *(*0x1bb58 + 0x9fc) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xd1);
                *(*0x1bb58 + 0xa00) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xd2);
                *(*0x1bb58 + 0xa01) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xd3);
                *(*0x1bb58 + 0xa05) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xd4);
                *(*0x1bb58 + 0xa06) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x9d);
                *(*0x1bb58 + 0x9de) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x9e);
                *(*0x1bb58 + 0x9e2) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x9f);
                *(*0x1bb58 + 0x9e3) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xa0);
                *(*0x1bb58 + 0x9e7) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x202);
                *(*0x1bb58 + 0xa70) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x203);
                *(*0x1bb58 + 0xa74) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x204);
                *(*0x1bb58 + 0xa75) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x205);
                *(*0x1bb58 + 0xa79) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x206);
                *(*0x1bb58 + 0xa7a) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x207);
                *(*0x1bb58 + 0xa7e) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x208);
                *(*0x1bb58 + 0xa7f) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x209);
                *(*0x1bb58 + 0xa83) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar5 = (**(iVar8 + 0x18))(0x1b210,0x149);
                *(*0x1bb58 + 0xc43) = uVar5;
                iVar8 = fcn.0001a2a8();
                uVar2 = (**(iVar8 + 0x30))(0x1b210,0x150);
                *(*0x1bb58 + 0xc47) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar5 = (**(iVar8 + 0x18))(0x1b210,0x151);
                *(*0x1bb58 + 0xc48) = uVar5;
                iVar8 = fcn.0001a2a8();
                uVar2 = (**(iVar8 + 0x30))(0x1b210,0x152);
                *(*0x1bb58 + 0xc4c) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar5 = (**(iVar8 + 0x18))(0x1b210,0x153);
                *(*0x1bb58 + 0xc4d) = uVar5;
                iVar8 = fcn.0001a2a8();
                uVar2 = (**(iVar8 + 8))(0x1b210,0x154);
                *(*0x1bb58 + 0xc51) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar5 = (**(iVar8 + 0x18))(0x1b210,0x155);
                *(*0x1bb58 + 0xc52) = uVar5;
                iVar8 = fcn.0001a2a8();
                uVar2 = (**(iVar8 + 0x30))(0x1b210,0x156);
                *(*0x1bb58 + 0xc56) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar5 = (**(iVar8 + 0x18))(0x1b210,0x157);
                *(*0x1bb58 + 0xc57) = uVar5;
                iVar8 = fcn.0001a2a8();
                uVar2 = (**(iVar8 + 0x30))(0x1b210,0x158);
                *(*0x1bb58 + 0xc5b) = uVar2;
                iVar8 = fcn.0001a2a8();
                uVar5 = (**(iVar8 + 0x18))(0x1b210,0x159);
                *(*0x1bb58 + 0xc5c) = uVar5;
                iVar8 = fcn.0001a2a8();
                uVar2 = (**(iVar8 + 8))(0x1b210,0x160);
                *(*0x1bb58 + 0xc60) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x93);
                *(*0x1bb58 + 0x9d9) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x94);
                *(*0x1bb58 + 0x9dd) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xeb);
                *(*0x1bb58 + 0xa43) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xec);
                *(*0x1bb58 + 0xa47) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xee);
                *(*0x1bb58 + 0xa48) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xef);
                *(*0x1bb58 + 0xa4c) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xf0);
                *(*0x1bb58 + 0xa4d) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xed);
                *(*0x1bb58 + 0xa51) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xf1);
                *(*0x1bb58 + 0xa52) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xf2);
                *(*0x1bb58 + 0xa56) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xf4);
                *(*0x1bb58 + 0xa57) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xf5);
                *(*0x1bb58 + 0xa5b) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xf6);
                *(*0x1bb58 + 0xa5c) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xf3);
                *(*0x1bb58 + 0xa60) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x48);
                *(*0x1bb58 + 0xbc6) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x1f5);
                *(*0x1bb58 + 0xbcf) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x1f6);
                *(*0x1bb58 + 0xbd3) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x1f7);
                *(*0x1bb58 + 0xbca) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x1f8);
                *(*0x1bb58 + 0xbce) = uVar2;
                *(*0x1bb58 + 0xbd4) = *0x1d004;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x1f9);
                *(*0x1bb58 + 0xbd5) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x11f);
                *(*0x1bb58 + 0x479) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x120);
                *(*0x1bb58 + 0x9b9) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x127);
                *(*0x1bb58 + 0x47d) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x129);
                *(*0x1bb58 + 0x9a5) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(299);
                *(*0x1bb58 + 0x9a9) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x128);
                *(*0x1bb58 + 0x9ba) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x12a);
                *(*0x1bb58 + 0x9bb) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(300);
                *(*0x1bb58 + 0x9bc) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x121);
                *(*0x1bb58 + 0x9ad) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x123);
                *(*0x1bb58 + 0x9b1) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x125);
                *(*0x1bb58 + 0x9b5) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x122);
                *(*0x1bb58 + 0x9bd) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x124);
                *(*0x1bb58 + 0x9be) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x126);
                *(*0x1bb58 + 0x9bf) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x200);
                *(*0x1bb58 + 0xce1) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x1ff);
                *(*0x1bb58 + 0xce5) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x21f);
                *(*0x1bb58 + 0xc1d) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x220);
                *(*0x1bb58 + 0xc21) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x221);
                *(*0x1bb58 + 0xc25) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x222);
                uVar21 = 0;
                iVar8 = 0;
                *(*0x1bb58 + 0xc29) = uVar2;
                uVar19 = 0;
                if ((*0x1c771 != '\0') && (*0xc0070002 != -1)) {
                    iVar9 = fcn.0001a2e4();
                    uVar2 = (**(iVar9 + 8))(0x223);
                    *(*0x1bb58 + 0xce0) = uVar2;
                }
                iVar9 = fcn.0001a2e4();
                uVar5 = (**(iVar9 + 0x18))(0x155);
                *(*0x1bb58 + 0x9d4) = uVar5;
                iVar9 = fcn.0001a2e4();
                uVar2 = (**(iVar9 + 8))(0x154);
                *(*0x1bb58 + 0x9d8) = uVar2;
                iVar9 = fcn.0001a2e4();
                uVar5 = (**(iVar9 + 0x18))(0x57);
                *(*0x1bb58 + 0xba7) = uVar5;
                *(*0x1bb58 + 800) = *0x1c666 * 1000;
                fcn.0001a1b0();
                if (*0xc0028000 == -1) {
                    *0x1bc0c = uVar19;
                }
                if (*0xc0040000 == -1) {
                    *0x1bc0d = uVar19;
                }
                if (*0xc0070002 == -1) {
                    *0x1c55f = uVar19;
                }
                if (*0xc0030000 == -1) {
                    *0x1c422 = uVar19;
                }
                if (*0xc0008000 == -1) {
                    *0x1c667 = uVar19;
                }
                if (*0xc0010000 == -1) {
                    *0x1bc00 = uVar19;
                }
                if (((*0xc00f8002 + 0xae7aU < 2) || ((~*0xfe001e44 & 1) == 0)) ||
                   (*((*0xc00fd010 & 0xfffff000) + 0x60) == 0x7fff)) {
                    *0x1bc0f = '\0';
                }
                if ((*0xc00b8000 == -1) || (*0xc00b8002 == 0x9ab)) {
                    *0x1bc01 = 0;
                }
                uVar12 = *0x1bc10;
                if (*0x1cd98 != '\x01') {
                    uVar12 = uVar21;
                }
                *0x1bc10 = uVar12;
                if (*0x1cd9b != '\x02') {
                    *0x1bc11 = uVar19;
                }
                if (*0xc00fb000 == -1) {
                    *0x1bc0b = uVar19;
                }
                if (*0xc00a0000 == -1) {
                    *0x1bc0a = uVar19;
                }
                uVar12 = *0x1bc0e;
                if (*0xc00b0000 == -1) {
                    uVar12 = uVar21;
                }
                *0x1bc0e = uVar12;
                cVar3 = fcn.0001a174();
                if (cVar3 != '\x03') {
                    *0x1c710 = uVar19;
                }
                if (*0xc00b4000 == -1) {
                    *0x1c59e = uVar19;
                }
                pcVar15 = acStack_a80;
                fcn.000102a0(pcVar15,7);
                iVar9 = iVar8;
                uVar24 = uVar19;
                do {
                    cVar3 = *(iVar9 + 0x1cf60);
                    acStack_a80[iVar9] = cVar3;
                    if (cVar3 == '\0') {
                        pcVar15 = CONCAT71(pcVar15 >> 8,uVar24);
                        cVar3 = fcn.00019e94(pcVar15);
                        if (cVar3 == '\0') {
                            uVar17 = CONCAT71(pcVar15 >> 8,uVar24);
                            uVar2 = fcn.00019e20(uVar17);
                            pcVar15 = CONCAT71(uVar17 >> 8,uVar2);
                            cVar3 = fcn.0001b0fc(pcVar15);
                            if (cVar3 != '\0') {
                                acStack_a80[iVar9] = '\x01';
                            }
                        }
                    }
                    uVar24 = uVar24 + 1;
                    iVar9 = iVar9 + 1;
                } while (uVar24 < 7);
                pcVar15 = acStack_a98;
                fcn.000102a0(pcVar15,8);
                iVar9 = iVar8;
                uVar24 = uVar19;
                do {
                    cVar3 = *(iVar9 + 0x1cf85);
                    acStack_a98[iVar9] = cVar3;
                    if (cVar3 == '\0') {
                        pcVar15 = CONCAT71(pcVar15 >> 8,uVar24);
                        cVar3 = fcn.00019de0(pcVar15);
                        if (cVar3 == '\0') {
                            uVar17 = CONCAT71(pcVar15 >> 8,uVar24);
                            uVar2 = fcn.00019da4(uVar17);
                            pcVar15 = CONCAT71(uVar17 >> 8,uVar2);
                            cVar3 = fcn.0001b0fc(pcVar15);
                            if (cVar3 != '\0') {
                                acStack_a98[iVar9] = '\x01';
                            }
                        }
                    }
                    uVar24 = uVar24 + 1;
                    iVar9 = iVar9 + 1;
                } while (uVar24 < 8);
                pcVar15 = acStack_a88;
                fcn.000102a0(pcVar15,7);
                uVar24 = uVar19;
                do {
                    cVar3 = *(iVar8 + 0x1cf69);
                    acStack_a88[iVar8] = cVar3;
                    if (cVar3 == '\0') {
                        pcVar15 = CONCAT71(pcVar15 >> 8,uVar24);
                        cVar3 = fcn.00019f4c(pcVar15);
                        if (cVar3 == '\0') {
                            uVar17 = CONCAT71(pcVar15 >> 8,uVar24);
                            uVar2 = fcn.00019f14(uVar17);
                            pcVar15 = CONCAT71(uVar17 >> 8,uVar2);
                            cVar3 = fcn.0001b0fc(pcVar15);
                            if (cVar3 != '\0') {
                                acStack_a88[iVar8] = '\x01';
                            }
                        }
                    }
                    uVar24 = uVar24 + 1;
                    iVar8 = iVar8 + 1;
                } while (uVar24 < 7);
                fcn.000102a0(&uStackX_8,2);
                uVar16 = 0;
                uVar23 = 4;
                uVar27 = 0x10000000;
                while( true ) {
                    cVar3 = fcn.0001a174();
                    if ((cVar3 == uVar23) || (uVar24 = 2, *0xc00f8002 == 0x5183)) {
                        uVar24 = uVar19;
                    }
                    uVar18 = uVar16;
                    if (uVar24 <= uVar18) break;
                    uVar20 = uVar16 & 0xff;
                    uVar26 = 0x7000;
                    *(&uStackX_8 + uVar20) = *(uVar20 + 0x1cf3f);
                    if (uVar18 == 0) {
                        uVar26 = 0x5000;
code_r0x00015cf6:
                        uVar10 = 0x90000;
                    }
                    else {
                        uVar10 = 0xf8000;
                        if ((uVar16 & 0xff) == 1) goto code_r0x00015cf6;
                    }
                    uVar12 = *(&uStackX_8 + uVar20);
                    if (*(((uVar10 | uVar26) >> 4 & uVar27 | uVar10 | uVar26) + 0xc0000000) == -1) {
                        uVar12 = uVar21;
                    }
                    uVar16 = uVar18 + 1;
                    *(&uStackX_8 + uVar20) = uVar12;
                }
                if ((acStack_a88[0] == '\0') || (uStack_a68 = uVar23, *0x1bc02 == '\0')) {
                    uStack_a68 = 0;
                }
                if ((acStack_a88[1] == '\0') || (uStack_a6c = 8, *0x1bc02 == '\0')) {
                    uStack_a6c = 0;
                }
                if ((acStack_a98[0] == '\0') || (uStack_a70 = 0x10, *0x1bc03 == '\0')) {
                    uStack_a70 = 0;
                }
                if ((acStack_a98[1] == '\0') || (uStack_a74 = 0x20, *0x1bc04 == '\0')) {
                    uStack_a74 = 0;
                }
                if ((*0x1d00c == '\0') || (uStack_a78 = 2, *0x1c710 == 0)) {
                    uStack_a78 = 0;
                }
                if (acStack_a98[2] != '\0') {
                    uStackX_18 = CONCAT44(uStackX_18._4_4_,1);
                    if (*0x1bc05 != '\0') goto code_r0x00015dd5;
                }
                uStackX_18 = uStackX_18 & 0xffffffff00000000;
code_r0x00015dd5:
                if ((acStack_a98[3] == '\0') || (uStackX_20 = 2, *0x1bc06 == '\0')) {
                    uStackX_20 = 0;
                }
                if ((cStack_a94 == '\0') || (uVar12 = uVar23, *0x1bc07 == '\0')) {
                    uVar12 = uVar21;
                }
                if ((cStack_a93 == '\0') || (uVar28 = 8, *0x1bc08 == '\0')) {
                    uVar28 = uVar21;
                }
                if ((acStack_a88[2] == '\0') || (uVar30 = 0x10, *0x1bc02 == '\0')) {
                    uVar30 = uVar21;
                }
                if ((acStack_a80[0] == '\0') || (uVar29 = 0x20, *0x1bc09 == '\0')) {
                    uVar29 = uVar21;
                }
                if ((acStack_a80[1] != '\0') && (uVar21 = 0, *0x1bc09 != '\0')) {
                    uVar21 = 0x40;
                }
                uVar16 = 0;
                if ((acStack_a80[2] == '\0') || (uVar25 = 0x80, *0x1bc09 == '\0')) {
                    uVar25 = 0;
                }
                if ((cStack_918 == '\0') || (uVar22 = 0x100, *0x1bc0c == 0)) {
                    uVar22 = 0;
                }
                if ((*0x1c889 == '\0') || (uVar13 = 2, *0x1bc0f == '\0')) {
                    uVar13 = 0;
                }
                if ((cStack_a92 == '\0') || (*0x1c6da == '\0')) {
                    uVar27 = uVar16;
                }
                if ((cStack_919 == '\0') || (uVar6 = 2, *0x1bc0d == 0)) {
                    uVar6 = 0;
                }
                if ((uStackX_8 == '\0') || (uVar20 = 2, *0x1c6a1 == '\0')) {
                    uVar20 = uVar16;
                }
                if ((uStackX_8._1_1_ == '\0') || (*0x1c6a2 == '\0')) {
                    uVar23 = uVar16;
                }
                if ((cStack_a91 == '\0') || (uVar26 = 8, *0x1c6f7 == '\0')) {
                    uVar26 = uVar16;
                }
                uVar16 = 0;
                uVar14 = 0;
                if (*0x1ce0f == '\x01') {
                    uVar14 = 3;
                }
                uVar1 = 0;
                if (*0x1c8c8 == '\x01') {
                    uVar1 = 3;
                }
                *(*0x1bb58 + 0x30a) =
                     (((((((((*0x1bc12 | uVar6) << 3 | *0x1bc11) * 2 | *0x1bc10) << 3 | *0x1bc0e | uVar13) << 9 |
                          uStackX_18 | uVar22 | uVar25 | uVar21 | uVar29 | uVar30 | uVar28 | uVar12 | uStackX_20) << 3 |
                         *0x1bbff | uStack_a78) * 2 | *0x1bc00) << 2 | uVar14 & *0x1bc0b) * 2 | *0x1bc0a) << 6 |
                     uStack_a74 | uStack_a70 | uStack_a6c | uStack_a68 |
                     (((((((*0x1c667 | uVar26 | uVar23 | uVar20) << 2 | *0x1c665) << 2 | *0x1c664) << 2 | *0x1c663) << 2
                       | *0x1c662) << 2 | *0x1c424) * 2 | *0x1c59e) << 0x20 | uVar1 & *0x1bc01 | *0x1c55f << 0x1f |
                     uVar27;
                uVar19 = 0;
                if (((*0x1c8c8 == '\0') || (*0x1c59d == '\0')) || (*0x1c8c9 == '\x01')) {
                    *(*0x1bb58 + 0x32e) = 0;
                }
                else {
                    *(*0x1bb58 + 0x32e) = 1;
                }
                *(*0x1bb58 + 0x991) = *0x1c42e;
                *(*0x1bb58 + 0x209) = *0x1bc13;
                *(*0x1bb58 + 0x2f4) = *0x1bc1b;
                *(*0x1bb58 + 0x2f5) = *0x1bc1c;
                *(*0x1bb58 + 0x40c) = *0x1c19a;
                *(*0x1bb58 + 0x40d) = *0x1c19b;
                *(*0x1bb58 + 0x40e) = *0x1c19c;
                *(*0x1bb58 + 0x40f) = *0x1c19d;
                *(*0x1bb58 + 0x411) = *0x1c19f;
                *(*0x1bb58 + 0x406) = *0x1c1a0;
                *(*0x1bb58 + 0x407) = *0x1c1a1;
                *(*0x1bb58 + 0x408) = *0x1c1a2;
                *(*0x1bb58 + 0x409) = *0x1c1a3;
                *(*0x1bb58 + 0x40b) = *0x1c1a5;
                *(*0x1bb58 + 0x412) = *0x1c1ad;
                *(*0x1bb58 + 0x413) = *0x1c1ae;
                *(*0x1bb58 + 0x3fb) = *0x1c192;
                *(*0x1bb58 + 0x3fc) = *0x1c193;
                *(*0x1bb58 + 0x3fd) = *0x1c194;
                *(*0x1bb58 + 0x3fe) = *0x1c195;
                *(*0x1bb58 + 0x3ff) = *0x1c196;
                *(*0x1bb58 + 0x400) = *0x1c197;
                *(*0x1bb58 + 0x402) = *0x1c1a7;
                *(*0x1bb58 + 0x403) = *0x1c1a8;
                *(*0x1bb58 + 0x404) = *0x1c1b4;
                *(*0x1bb58 + 0x437) = *0x1c1b5;
                *(*0x1bb58 + 0x414) = *0x1c1b2;
                *(*0x1bb58 + 0x415) = *0x1c1b1;
                *(*0x1bb58 + 0x419) = *0x1c1b3;
                *(*0x1bb58 + 0x417) = *0x1cf90;
                *(*0x1bb58 + 0x416) = *0x1cf92;
                *(*0x1bb58 + 0x41a) = *0x1cf93;
                *(*0x1bb58 + 0xa0e) = 0;
                *(*0x1bb58 + 0x943) = *0x1c423;
                iVar8 = fcn.0001a2e4();
                iVar7 = (**(iVar8 + 0x18))(0x1e9);
                if (iVar7 != 0) {
                    iVar8 = fcn.0001a2e4();
                    uVar5 = (**(iVar8 + 0x18))(0x1e9);
                    *(*0x1bb58 + 0x944) = uVar5;
                }
                iVar8 = fcn.0001a2e4();
                iVar7 = (**(iVar8 + 0x18))(0x1ea);
                if (iVar7 != 0) {
                    iVar8 = fcn.0001a2e4();
                    uVar5 = (**(iVar8 + 0x18))(0x1ea);
                    *(*0x1bb58 + 0x948) = uVar5;
                }
                iVar8 = fcn.0001a2e4();
                iVar7 = (**(iVar8 + 0x18))(0x1eb);
                if (iVar7 != 0) {
                    iVar8 = fcn.0001a2e4();
                    uVar5 = (**(iVar8 + 0x18))(0x1eb);
                    *(*0x1bb58 + 0x94c) = uVar5;
                }
                iVar8 = fcn.0001a2e4();
                iVar7 = (**(iVar8 + 0x18))(0x1ec);
                if (iVar7 != 0) {
                    iVar8 = fcn.0001a2e4();
                    uVar5 = (**(iVar8 + 0x18))(0x1ec);
                    *(*0x1bb58 + 0x950) = uVar5;
                }
                *(*0x1bb58 + 0x43b) = *0x1c1b6;
                *(*0x1bb58 + 0x21f) = *0x1c1b7;
                *(*0x1bb58 + 0x221) = *0x1c1b9;
                *(*0x1bb58 + 0x223) = *0x1c1bb;
                *(*0x1bb58 + 0x225) = *0x1c1bd;
                *(*0x1bb58 + 0x227) = *0x1c1bf;
                *(*0x1bb58 + 0x229) = *0x1c1c1;
                *(*0x1bb58 + 0x22b) = *0x1c1c3;
                *(*0x1bb58 + 0x22d) = *0x1c1c5;
                *(*0x1bb58 + 0x22f) = *0x1c1c7;
                *(*0x1bb58 + 0x231) = *0x1c1c9;
                *(*0x1bb58 + 0x233) = *0x1c1cb;
                *(*0x1bb58 + 0x235) = *0x1c1cd;
                *(*0x1bb58 + 0x23d) = *0x1c1cf;
                *(*0x1bb58 + 0x23f) = *0x1c1d1;
                *(*0x1bb58 + 0x241) = *0x1c1d3;
                *(*0x1bb58 + 0x243) = *0x1c1d5;
                *(*0x1bb58 + 0x245) = *0x1c1d7;
                *(*0x1bb58 + 0x247) = *0x1c1d9;
                *(*0x1bb58 + 0x249) = *0x1c1db;
                *(*0x1bb58 + 0x24b) = *0x1c1dd;
                *(*0x1bb58 + 0x24d) = *0x1c1df;
                *(*0x1bb58 + 0x24f) = *0x1c1e1;
                *(*0x1bb58 + 0x251) = *0x1c1e3;
                *(*0x1bb58 + 0x253) = *0x1c1e5;
                *(*0x1bb58 + 0x256) = *0x1c1e7;
                *(*0x1bb58 + 600) = *0x1c1e9;
                *(*0x1bb58 + 0x25a) = *0x1c1eb;
                *(*0x1bb58 + 0x25c) = *0x1c1ed;
                *(*0x1bb58 + 0x25e) = *0x1c1ef;
                *(*0x1bb58 + 0x260) = *0x1c1f1;
                *(*0x1bb58 + 0x262) = *0x1c1f3;
                *(*0x1bb58 + 0x264) = *0x1c1f5;
                *(*0x1bb58 + 0x266) = *0x1c1f7;
                *(*0x1bb58 + 0x268) = *0x1c1f9;
                *(*0x1bb58 + 0x26a) = *0x1c1fb;
                *(*0x1bb58 + 0x26c) = *0x1c1fd;
                *(*0x1bb58 + 0x26f) = *0x1c1ff;
                *(*0x1bb58 + 0x271) = *0x1c201;
                *(*0x1bb58 + 0x273) = *0x1c203;
                *(*0x1bb58 + 0x275) = *0x1c205;
                *(*0x1bb58 + 0x277) = *0x1c207;
                *(*0x1bb58 + 0x279) = *0x1c209;
                *(*0x1bb58 + 0x27b) = *0x1c20b;
                *(*0x1bb58 + 0x27d) = *0x1c20d;
                *(*0x1bb58 + 0x27f) = *0x1c20f;
                *(*0x1bb58 + 0x281) = *0x1c211;
                *(*0x1bb58 + 0x283) = *0x1c213;
                *(*0x1bb58 + 0x285) = *0x1c215;
                *(*0x1bb58 + 0x288) = *0x1c217;
                *(*0x1bb58 + 0x28a) = *0x1c219;
                *(*0x1bb58 + 0x28c) = *0x1c21b;
                *(*0x1bb58 + 0x28e) = *0x1c21d;
                *(*0x1bb58 + 0x290) = *0x1c21f;
                *(*0x1bb58 + 0x292) = *0x1c221;
                *(*0x1bb58 + 0x294) = *0x1c223;
                *(*0x1bb58 + 0x296) = *0x1c225;
                *(*0x1bb58 + 0x298) = *0x1c227;
                *(*0x1bb58 + 0x29a) = *0x1c229;
                *(*0x1bb58 + 0x29c) = *0x1c22b;
                *(*0x1bb58 + 0x29e) = *0x1c22d;
                *(*0x1bb58 + 0x2a1) = *0x1c22f;
                *(*0x1bb58 + 0x2a3) = *0x1c231;
                *(*0x1bb58 + 0x2a5) = *0x1c233;
                *(*0x1bb58 + 0x2a7) = *0x1c235;
                *(*0x1bb58 + 0x2a9) = *0x1c237;
                *(*0x1bb58 + 0x2ab) = *0x1c239;
                *(*0x1bb58 + 0x2ad) = *0x1c23b;
                *(*0x1bb58 + 0x2af) = *0x1c23d;
                *(*0x1bb58 + 0x2b1) = *0x1c23f;
                *(*0x1bb58 + 0x2b3) = *0x1c241;
                *(*0x1bb58 + 0x2b5) = *0x1c243;
                *(*0x1bb58 + 0x2b7) = *0x1c245;
                *(*0x1bb58 + 0xbe3) = *0x1c6be;
                *(*0x1bb58 + 0xbe5) = *0x1c6c0;
                *(*0x1bb58 + 0xbe7) = *0x1c6c2;
                *(*0x1bb58 + 0xbe9) = *0x1c6c4;
                *(*0x1bb58 + 0xbeb) = *0x1c6c6;
                *(*0x1bb58 + 0xbed) = *0x1c6c8;
                *(*0x1bb58 + 0xbef) = *0x1c6ca;
                *(*0x1bb58 + 0xbf1) = *0x1c6cc;
                *(*0x1bb58 + 0xbf3) = *0x1c6ce;
                *(*0x1bb58 + 0xbf5) = *0x1c6d0;
                *(*0x1bb58 + 0xbf7) = *0x1c6d2;
                *(*0x1bb58 + 0xbf9) = *0x1c6d4;
                *(*0x1bb58 + 0xbff) = *0x1c6db;
                *(*0x1bb58 + 0xc01) = *0x1c6dd;
                *(*0x1bb58 + 0xc03) = *0x1c6df;
                *(*0x1bb58 + 0xc05) = *0x1c6e1;
                *(*0x1bb58 + 0xc07) = *0x1c6e3;
                *(*0x1bb58 + 0xc09) = *0x1c6e5;
                *(*0x1bb58 + 0xc0b) = *0x1c6e7;
                *(*0x1bb58 + 0xc0d) = *0x1c6e9;
                *(*0x1bb58 + 0xc0f) = *0x1c6eb;
                *(*0x1bb58 + 0xc11) = *0x1c6ed;
                *(*0x1bb58 + 0xc13) = *0x1c6ef;
                *(*0x1bb58 + 0xc15) = *0x1c6f1;
                *(*0x1bb58 + 0x2ba) = *0x1c247;
                *(*0x1bb58 + 700) = *0x1c249;
                *(*0x1bb58 + 0x2be) = *0x1c24b;
                *(*0x1bb58 + 0x2c0) = *0x1c24d;
                *(*0x1bb58 + 0x2c2) = *0x1c24f;
                *(*0x1bb58 + 0x2c4) = *0x1c251;
                *(*0x1bb58 + 0x2c6) = *0x1c253;
                *(*0x1bb58 + 0x2c8) = *0x1c255;
                *(*0x1bb58 + 0x2ca) = *0x1c257;
                *(*0x1bb58 + 0x2cc) = *0x1c259;
                *(*0x1bb58 + 0x2ce) = *0x1c25b;
                *(*0x1bb58 + 0x2d0) = *0x1c25d;
                *(*0x1bb58 + 0xbfb) = *0x1c6d6;
                *(*0x1bb58 + 0xbfb) = *0x1c6d6;
                *(*0x1bb58 + 0xc17) = *0x1c6f3;
                *(*0x1bb58 + 0xc17) = *0x1c6f3;
                *(*0x1bb58 + 0x2d2) = *0x1c25f;
                *(*0x1bb58 + 0x2d4) = *0x1c261;
                *(*0x1bb58 + 0x2d6) = *0x1c263;
                *(*0x1bb58 + 0x2d8) = *0x1c265;
                *(*0x1bb58 + 0x2da) = *0x1c267;
                *(*0x1bb58 + 0x2dc) = *0x1c269;
                *(*0x1bb58 + 0x2df) = *0x1c26b;
                *(*0x1bb58 + 0x2e1) = *0x1c26d;
                *(*0x1bb58 + 0x2e3) = *0x1c26f;
                *(*0x1bb58 + 0x2e5) = *0x1c271;
                *(*0x1bb58 + 0x2e7) = *0x1c273;
                *(*0x1bb58 + 0x2e9) = *0x1c275;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(500);
                *(*0x1bb58 + 0x465) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(499);
                *(*0x1bb58 + 0x469) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x15a);
                *(*0x1bb58 + 0x46d) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x29);
                *(*0x1bb58 + 0x471) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x28);
                *(*0x1bb58 + 0x475) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x11f);
                *(*0x1bb58 + 0x479) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x127);
                iVar8 = *0x1bb58;
                *(*0x1bb58 + 0x47d) = uVar5;
                *(*0x1bb58 + 0x15) = 1;
                *(*0x1bb58 + 0x21e) = *0x1c277;
                uVar17 = CONCAT71(iVar8 >> 8,*0x1c6a3);
                *(*0x1bb58 + 0xbad) = *0x1c6a3;
                uVar2 = fcn.0001a320(uVar17,0x50000029);
                iVar8 = *0x1bb58;
                *(*0x1bb58 + 0xbae) = uVar2;
                uVar2 = fcn.0001a320(iVar8,0x5000002a);
                *(*0x1bb58 + 0xbaf) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x14a);
                *(*0x1bb58 + 0x910) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x219);
                *(*0x1bb58 + 0x954) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x215);
                *(*0x1bb58 + 0x916) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x102);
                *(*0x1bb58 + 0x919) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x103);
                *(*0x1bb58 + 0x91a) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x5b);
                *(*0x1bb58 + 0x91b) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x80);
                *(*0x1bb58 + 0x91c) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x82);
                *(*0x1bb58 + 0x91d) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x81);
                *(*0x1bb58 + 0x91e) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x4d);
                *(*0x1bb58 + 0x91f) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x4e);
                *(*0x1bb58 + 0xc2e) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x118);
                *(*0x1bb58 + 0x923) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x2b);
                *(*0x1bb58 + 0x927) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x3b);
                *(*0x1bb58 + 0x928) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x3c);
                *(*0x1bb58 + 0x929) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x3d);
                *(*0x1bb58 + 0x92a) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x3e);
                *(*0x1bb58 + 0x92b) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x3f);
                *(*0x1bb58 + 0x92c) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x40);
                *(*0x1bb58 + 0x92d) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x14f);
                *(*0x1bb58 + 0x92e) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x14e);
                *(*0x1bb58 + 0x92f) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x14c);
                *(*0x1bb58 + 0x930) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x14d);
                *(*0x1bb58 + 0x931) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0x116);
                *(*0x1bb58 + 0x932) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xc);
                *(*0x1bb58 + 0x934) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0xfa);
                *(*0x1bb58 + 0x935) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xd);
                *(*0x1bb58 + 0x939) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 0x30))(0xe);
                *(*0x1bb58 + 0x93a) = uVar2;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0xf);
                *(*0x1bb58 + 0x915) = uVar2;
                *(*0x1bb58 + 0xb50) = *0x1c661;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x216);
                *(*0x1bb58 + 0xb44) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x218);
                *(*0x1bb58 + 0xb48) = uVar5;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x217);
                *(*0x1bb58 + 0xb4c) = uVar5;
                *(*0x1bb58 + 0xbd6) = *0x1c6a0;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x38);
                *(*0x1bb58 + 0xbd7) = uVar5;
                *(*0x1bb58 + 0xbdb) = *0x1c6b6 != '\0';
                if (*(*0x1bb58 + 0x40) == '\0') {
                    *(*0x1bb58 + 0x21d) = 1;
                }
                *(*0x1bb58 + 0x2ff) = *0x1bc2d;
                *(*0x1bb58 + 0xb79) = *0x1c59b;
                iVar8 = fcn.0001a2e4();
                uVar2 = (**(iVar8 + 8))(0x30);
                *(*0x1bb58 + 0xb7a) = uVar2;
                *(*0x1bb58 + 0x481) = *0x1bc31;
                *(*0x1bb58 + 0x482) = *0x1bc32;
                *(*0x1bb58 + 0x483) = *0x1bc33;
                *(*0x1bb58 + 0x484) = *0x1bc34;
                *(*0x1bb58 + 0x485) = *0x1bc35;
                *(*0x1bb58 + 0x486) = *0x1bc36;
                *(*0x1bb58 + 0x487) = *0x1bc37;
                *(*0x1bb58 + 0x488) = *0x1bc38;
                *(*0x1bb58 + 0x489) = *0x1bc39;
                *(*0x1bb58 + 0x48a) = *0x1bc3a;
                *(*0x1bb58 + 0x48b) = *0x1bc3b;
                *(*0x1bb58 + 0x48c) = *0x1bc3c;
                *(*0x1bb58 + 0x48e) = 1;
                *(*0x1bb58 + 0x48f) = *0x1bc40;
                *(*0x1bb58 + 0x490) = *0x1bc41;
                *(*0x1bb58 + 0x491) = *0x1bc42;
                *(*0x1bb58 + 0x495) = *0x1bc47;
                *(*0x1bb58 + 0x496) = *0x1bc48;
                *(*0x1bb58 + 0x497) = *0x1bc49;
                *(*0x1bb58 + 0x4b7) = *0x1bc4b;
                *(*0x1bb58 + 0x4b8) = *0x1bc4c;
                *(*0x1bb58 + 0x4b9) = *0x1bc4d;
                *(*0x1bb58 + 0x4ba) = *0x1bc4e;
                *(*0x1bb58 + 0x4bb) = *0x1bc4f;
                *(*0x1bb58 + 0x4bc) = *0x1bc50;
                *(*0x1bb58 + 0x4bd) = *0x1bc51;
                *(*0x1bb58 + 0x4be) = *0x1bc52;
                *(*0x1bb58 + 0x4bf) = *0x1bc46;
                uVar23 = uVar16;
                do {
                    if (uVar23 < *0x1bc47) {
                        *(uVar23 + 0x499 + *0x1bb58) = *(uVar23 + 0x1bc53);
                        *(uVar23 + 0x49f + *0x1bb58) = *(uVar23 + 0x1bc59);
                        *(uVar23 + 0x4a5 + *0x1bb58) = *(uVar23 + 0x1bc5f);
                        *(uVar23 + 0x4ab + *0x1bb58) = *(uVar23 + 0x1bc65);
                        *(uVar23 + 0x4b1 + *0x1bb58) = *(uVar23 + 0x1bc6b);
                    }
                    else {
                        *(uVar23 + 0x499 + *0x1bb58) = 0;
                        *(uVar23 + 0x49f + *0x1bb58) = 0;
                        *(uVar23 + 0x4a5 + *0x1bb58) = 0;
                        *(uVar23 + 0x4ab + *0x1bb58) = 1;
                        *(uVar23 + 0x4b1 + *0x1bb58) = 0;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 6);
                *(*0x1bb58 + 0x4c0) = 1;
                *(*0x1bb58 + 0x4c1) = *0x1bc71;
                *(*0x1bb58 + 0x4c2) = *0x1bc72;
                *(*0x1bb58 + 0x4c3) = *0x1bc73;
                *(*0x1bb58 + 0x4c7) = *0x1bc78;
                *(*0x1bb58 + 0x4c8) = *0x1bc79;
                *(*0x1bb58 + 0x4c9) = *0x1bc7a;
                *(*0x1bb58 + 0x4e9) = *0x1bc7c;
                *(*0x1bb58 + 0x4ea) = *0x1bc7d;
                *(*0x1bb58 + 0x4eb) = *0x1bc7e;
                *(*0x1bb58 + 0x4ec) = *0x1bc7f;
                *(*0x1bb58 + 0x4ed) = *0x1bc80;
                *(*0x1bb58 + 0x4ee) = *0x1bc81;
                *(*0x1bb58 + 0x4ef) = *0x1bc82;
                *(*0x1bb58 + 0x4f0) = *0x1bc83;
                *(*0x1bb58 + 0x4f1) = *0x1bc77;
                uVar23 = uVar16;
                do {
                    if (uVar23 < *0x1bc78) {
                        *(uVar23 + 0x4cb + *0x1bb58) = *(uVar23 + 0x1bc84);
                        *(uVar23 + 0x4d1 + *0x1bb58) = *(uVar23 + 0x1bc8a);
                        *(uVar23 + 0x4d7 + *0x1bb58) = *(uVar23 + 0x1bc90);
                        *(uVar23 + 0x4dd + *0x1bb58) = *(uVar23 + 0x1bc96);
                        *(uVar23 + 0x4e3 + *0x1bb58) = *(uVar23 + 0x1bc9c);
                    }
                    else {
                        *(uVar23 + 0x4cb + *0x1bb58) = 0;
                        *(uVar23 + 0x4d1 + *0x1bb58) = 0;
                        *(uVar23 + 0x4d7 + *0x1bb58) = 0;
                        *(uVar23 + 0x4dd + *0x1bb58) = 1;
                        *(uVar23 + 0x4e3 + *0x1bb58) = 0;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 6);
                *(*0x1bb58 + 0x4f2) = 1;
                *(*0x1bb58 + 0x4f3) = *0x1bca2;
                *(*0x1bb58 + 0x4f4) = *0x1bca3;
                *(*0x1bb58 + 0x4f5) = *0x1bca4;
                *(*0x1bb58 + 0x4f9) = *0x1bca9;
                *(*0x1bb58 + 0x4fa) = *0x1bcaa;
                *(*0x1bb58 + 0x4fb) = *0x1bcab;
                *(*0x1bb58 + 0x51b) = *0x1bcad;
                *(*0x1bb58 + 0x51c) = *0x1bcae;
                *(*0x1bb58 + 0x51d) = *0x1bcaf;
                *(*0x1bb58 + 0x51e) = *0x1bcb0;
                *(*0x1bb58 + 0x51f) = *0x1bcb1;
                *(*0x1bb58 + 0x520) = *0x1bcb2;
                *(*0x1bb58 + 0x521) = *0x1bcb3;
                *(*0x1bb58 + 0x522) = *0x1bcb4;
                *(*0x1bb58 + 0x523) = *0x1bca8;
                uVar23 = uVar16;
                do {
                    if (uVar23 < *0x1bca9) {
                        *(uVar23 + 0x4fd + *0x1bb58) = *(uVar23 + 0x1bcb5);
                        *(uVar23 + 0x503 + *0x1bb58) = *(uVar23 + 0x1bcbb);
                        *(uVar23 + 0x509 + *0x1bb58) = *(uVar23 + 0x1bcc1);
                        *(uVar23 + 0x50f + *0x1bb58) = *(uVar23 + 0x1bcc7);
                        *(uVar23 + 0x515 + *0x1bb58) = *(uVar23 + 0x1bccd);
                    }
                    else {
                        *(uVar23 + 0x4fd + *0x1bb58) = 0;
                        *(uVar23 + 0x503 + *0x1bb58) = 0;
                        *(uVar23 + 0x509 + *0x1bb58) = 0;
                        *(uVar23 + 0x50f + *0x1bb58) = 1;
                        *(uVar23 + 0x515 + *0x1bb58) = 0;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 6);
                *(*0x1bb58 + 0x524) = 1;
                *(*0x1bb58 + 0x525) = *0x1bcd3;
                *(*0x1bb58 + 0x526) = *0x1bcd4;
                *(*0x1bb58 + 0x527) = *0x1bcd5;
                *(*0x1bb58 + 0x52b) = *0x1bcda;
                *(*0x1bb58 + 0x52c) = *0x1bcdb;
                *(*0x1bb58 + 0x52d) = *0x1bcdc;
                *(*0x1bb58 + 0x54d) = *0x1bcde;
                *(*0x1bb58 + 0x54e) = *0x1bcdf;
                *(*0x1bb58 + 0x54f) = *0x1bce0;
                *(*0x1bb58 + 0x550) = *0x1bce1;
                *(*0x1bb58 + 0x551) = *0x1bce2;
                *(*0x1bb58 + 0x552) = *0x1bce3;
                *(*0x1bb58 + 0x553) = *0x1bce4;
                *(*0x1bb58 + 0x554) = *0x1bce5;
                *(*0x1bb58 + 0x555) = *0x1bcd9;
                uVar23 = uVar16;
                do {
                    if (uVar23 < *0x1bcda) {
                        *(uVar23 + 0x52f + *0x1bb58) = *(uVar23 + 0x1bce6);
                        *(uVar23 + 0x535 + *0x1bb58) = *(uVar23 + 0x1bcec);
                        *(uVar23 + 0x53b + *0x1bb58) = *(uVar23 + 0x1bcf2);
                        *(uVar23 + 0x541 + *0x1bb58) = *(uVar23 + 0x1bcf8);
                        *(uVar23 + 0x547 + *0x1bb58) = *(uVar23 + 0x1bcfe);
                    }
                    else {
                        *(uVar23 + 0x52f + *0x1bb58) = 0;
                        *(uVar23 + 0x535 + *0x1bb58) = 0;
                        *(uVar23 + 0x53b + *0x1bb58) = 0;
                        *(uVar23 + 0x541 + *0x1bb58) = 1;
                        *(uVar23 + 0x547 + *0x1bb58) = 0;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 6);
                *(*0x1bb58 + 0x556) = 1;
                *(*0x1bb58 + 0x557) = *0x1bd04;
                *(*0x1bb58 + 0x558) = *0x1bd05;
                *(*0x1bb58 + 0x559) = *0x1bd06;
                *(*0x1bb58 + 0x55d) = *0x1bd0b;
                *(*0x1bb58 + 0x55e) = *0x1bd0c;
                *(*0x1bb58 + 0x55f) = *0x1bd0d;
                *(*0x1bb58 + 0x57f) = *0x1bd0f;
                *(*0x1bb58 + 0x580) = *0x1bd10;
                *(*0x1bb58 + 0x581) = *0x1bd11;
                *(*0x1bb58 + 0x582) = *0x1bd12;
                *(*0x1bb58 + 0x583) = *0x1bd13;
                *(*0x1bb58 + 0x584) = *0x1bd14;
                *(*0x1bb58 + 0x585) = *0x1bd15;
                *(*0x1bb58 + 0x586) = *0x1bd16;
                *(*0x1bb58 + 0x587) = *0x1bd0a;
                uVar23 = uVar16;
                do {
                    if (uVar23 < *0x1bd0b) {
                        *(uVar23 + 0x561 + *0x1bb58) = *(uVar23 + 0x1bd17);
                        *(uVar23 + 0x567 + *0x1bb58) = *(uVar23 + 0x1bd1d);
                        *(uVar23 + 0x56d + *0x1bb58) = *(uVar23 + 0x1bd23);
                        *(uVar23 + 0x573 + *0x1bb58) = *(uVar23 + 0x1bd29);
                        *(uVar23 + 0x579 + *0x1bb58) = *(uVar23 + 0x1bd2f);
                    }
                    else {
                        *(uVar23 + 0x561 + *0x1bb58) = 0;
                        *(uVar23 + 0x567 + *0x1bb58) = 0;
                        *(uVar23 + 0x56d + *0x1bb58) = 0;
                        *(uVar23 + 0x573 + *0x1bb58) = 1;
                        *(uVar23 + 0x579 + *0x1bb58) = 0;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 6);
                *(*0x1bb58 + 0x588) = 1;
                *(*0x1bb58 + 0x589) = *0x1bd35;
                *(*0x1bb58 + 0x58a) = *0x1bd36;
                *(*0x1bb58 + 0x58b) = *0x1bd37;
                *(*0x1bb58 + 0x58f) = *0x1bd3c;
                *(*0x1bb58 + 0x590) = *0x1bd3d;
                *(*0x1bb58 + 0x591) = *0x1bd3e;
                *(*0x1bb58 + 0x5b1) = *0x1bd40;
                *(*0x1bb58 + 0x5b2) = *0x1bd41;
                *(*0x1bb58 + 0x5b3) = *0x1bd42;
                *(*0x1bb58 + 0x5b4) = *0x1bd43;
                *(*0x1bb58 + 0x5b5) = *0x1bd44;
                *(*0x1bb58 + 0x5b6) = *0x1bd45;
                *(*0x1bb58 + 0x5b7) = *0x1bd46;
                *(*0x1bb58 + 0x5b8) = *0x1bd47;
                *(*0x1bb58 + 0x5b9) = *0x1bd3b;
                uVar23 = uVar16;
                do {
                    if (uVar23 < *0x1bd3c) {
                        *(uVar23 + 0x593 + *0x1bb58) = *(uVar23 + 0x1bd48);
                        *(uVar23 + 0x599 + *0x1bb58) = *(uVar23 + 0x1bd4e);
                        *(uVar23 + 0x59f + *0x1bb58) = *(uVar23 + 0x1bd54);
                        *(uVar23 + 0x5a5 + *0x1bb58) = *(uVar23 + 0x1bd5a);
                        *(uVar23 + 0x5ab + *0x1bb58) = *(uVar23 + 0x1bd60);
                    }
                    else {
                        *(uVar23 + 0x593 + *0x1bb58) = 0;
                        *(uVar23 + 0x599 + *0x1bb58) = 0;
                        *(uVar23 + 0x59f + *0x1bb58) = 0;
                        *(uVar23 + 0x5a5 + *0x1bb58) = 1;
                        *(uVar23 + 0x5ab + *0x1bb58) = 0;
                    }
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 6);
                *(*0x1bb58 + 0x5ba) = *0x1bd66;
                *(*0x1bb58 + 0x5c4) = *0x1bd8f;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bd90,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x5c5,0x10);
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bd67,0x28);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x5bb,9);
                *(*0x1bb58 + 0x5d5) = *0x1bdb0;
                *(*0x1bb58 + 0x5d6) = *0x1bdb1;
                uVar23 = uVar16;
                do {
                    *(*0x1bb58 + 0x5d7 + uVar23 * 2) = *(uVar23 * 2 + 0x1bdb2);
                    *(uVar23 + 0x5ef + *0x1bb58) = *(uVar23 + 0x1bdca);
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 0xc);
                *(*0x1bb58 + 0x5fb) = 1;
                *(*0x1bb58 + 0x5fc) = *0x1bdd7;
                *(*0x1bb58 + 0xb3e) = *0x1c654;
                *(*0x1bb58 + 0x5fd) = *0x1bdd8;
                *(*0x1bb58 + 0x5fe) = *0x1bdd9;
                *(*0x1bb58 + 0x5ff) = *0x1bddb;
                *(*0x1bb58 + 0x600) = *0x1bddc;
                *(*0x1bb58 + 0x604) = *0x1bde1;
                *(*0x1bb58 + 0x608) = *0x1bde5;
                *(*0x1bb58 + 0x601) = *0x1bde6;
                *(*0x1bb58 + 0x602) = *0x1bde7;
                *(*0x1bb58 + 0x603) = *0x1bde8;
                *(*0x1bb58 + 0x609) = *0x1bde9;
                *(*0x1bb58 + 0x60a) = *0x1bdea;
                *(*0x1bb58 + 0x60b) = *0x1bded;
                *(*0x1bb58 + 0x60c) = *0x1bdee;
                *(*0x1bb58 + 0x616) = *0x1be17;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1be18,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x617,0x10);
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bdef,0x28);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x60d,9);
                *(*0x1bb58 + 0x627) = *0x1be38;
                *(*0x1bb58 + 0x628) = *0x1be39;
                uVar23 = uVar16;
                do {
                    *(*0x1bb58 + 0x629 + uVar23 * 2) = *(uVar23 * 2 + 0x1be3a);
                    *(uVar23 + 0x641 + *0x1bb58) = *(uVar23 + 0x1be52);
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 0xc);
                *(*0x1bb58 + 0x64d) = 1;
                *(*0x1bb58 + 0x64e) = *0x1be60;
                *(*0x1bb58 + 0xb3f) = *0x1c655;
                *(*0x1bb58 + 0x64f) = *0x1be5f;
                *(*0x1bb58 + 0x650) = *0x1be61;
                *(*0x1bb58 + 0x651) = *0x1be63;
                *(*0x1bb58 + 0x652) = *0x1be64;
                *(*0x1bb58 + 0x656) = *0x1be69;
                *(*0x1bb58 + 0x65a) = *0x1be6d;
                *(*0x1bb58 + 0x653) = *0x1be6e;
                *(*0x1bb58 + 0x654) = *0x1be6f;
                *(*0x1bb58 + 0x655) = *0x1be70;
                *(*0x1bb58 + 0x65b) = *0x1be71;
                *(*0x1bb58 + 0x65c) = *0x1be72;
                *(*0x1bb58 + 0x65d) = *0x1be75;
                *(*0x1bb58 + 0x65e) = *0x1be76;
                *(*0x1bb58 + 0x668) = *0x1be9f;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bea0,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x669,0x10);
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1be77,0x28);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x65f,9);
                *(*0x1bb58 + 0x679) = *0x1bec0;
                *(*0x1bb58 + 0x67a) = *0x1bec1;
                uVar23 = uVar16;
                do {
                    *(*0x1bb58 + 0x67b + uVar23 * 2) = *(uVar23 * 2 + 0x1bec2);
                    *(uVar23 + 0x693 + *0x1bb58) = *(uVar23 + 0x1beda);
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 0xc);
                *(*0x1bb58 + 0x69f) = 1;
                *(*0x1bb58 + 0x6a0) = *0x1bee7;
                *(*0x1bb58 + 0xb40) = *0x1c656;
                *(*0x1bb58 + 0x6a1) = *0x1bee8;
                *(*0x1bb58 + 0x6a2) = *0x1bee9;
                *(*0x1bb58 + 0x6a3) = *0x1beeb;
                *(*0x1bb58 + 0x6a4) = *0x1beec;
                *(*0x1bb58 + 0x6a8) = *0x1bef1;
                *(*0x1bb58 + 0x6ac) = *0x1bef5;
                *(*0x1bb58 + 0x6a5) = *0x1bef6;
                *(*0x1bb58 + 0x6a6) = *0x1bef7;
                *(*0x1bb58 + 0x6a7) = *0x1bef8;
                *(*0x1bb58 + 0x6ad) = *0x1bef9;
                *(*0x1bb58 + 0x6ae) = *0x1befa;
                *(*0x1bb58 + 0x6af) = *0x1befd;
                *(*0x1bb58 + 0x6b0) = *0x1befe;
                *(*0x1bb58 + 0x6ba) = *0x1bf27;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bf28,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x6bb,0x10);
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1beff,0x28);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x6b1,9);
                *(*0x1bb58 + 0x6cb) = *0x1bf48;
                *(*0x1bb58 + 0x6cc) = *0x1bf49;
                uVar23 = uVar16;
                do {
                    *(*0x1bb58 + 0x6cd + uVar23 * 2) = *(uVar23 * 2 + 0x1bf4a);
                    *(uVar23 + 0x6e5 + *0x1bb58) = *(uVar23 + 0x1bf62);
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 0xc);
                *(*0x1bb58 + 0x6f1) = 1;
                *(*0x1bb58 + 0x6f2) = *0x1bf6f;
                *(*0x1bb58 + 0xb41) = *0x1c657;
                *(*0x1bb58 + 0x6f3) = *0x1bf70;
                *(*0x1bb58 + 0x6f4) = *0x1bf71;
                *(*0x1bb58 + 0x6f5) = *0x1bf73;
                *(*0x1bb58 + 0x6f6) = *0x1bf74;
                *(*0x1bb58 + 0x6fa) = *0x1bf79;
                *(*0x1bb58 + 0x6fe) = *0x1bf7d;
                *(*0x1bb58 + 0x6f7) = *0x1bf7e;
                *(*0x1bb58 + 0x6f8) = *0x1bf7f;
                *(*0x1bb58 + 0x6f9) = *0x1bf80;
                *(*0x1bb58 + 0x6ff) = *0x1bf81;
                *(*0x1bb58 + 0x700) = *0x1bf82;
                *(*0x1bb58 + 0x701) = *0x1bf85;
                *(*0x1bb58 + 0x702) = *0x1bf86;
                *(*0x1bb58 + 0x70c) = *0x1bfaf;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bfb0,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x70d,0x10);
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1bf87,0x28);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x703,9);
                *(*0x1bb58 + 0x71d) = *0x1bfd0;
                *(*0x1bb58 + 0x71e) = *0x1bfd1;
                uVar23 = uVar16;
                do {
                    *(*0x1bb58 + 0x71f + uVar23 * 2) = *(uVar23 * 2 + 0x1bfd2);
                    *(uVar23 + 0x737 + *0x1bb58) = *(uVar23 + 0x1bfea);
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 0xc);
                *(*0x1bb58 + 0x743) = 1;
                *(*0x1bb58 + 0x744) = *0x1bff7;
                *(*0x1bb58 + 0xb42) = *0x1c658;
                *(*0x1bb58 + 0x745) = *0x1bff8;
                *(*0x1bb58 + 0x746) = *0x1bff9;
                *(*0x1bb58 + 0x747) = *0x1bffb;
                *(*0x1bb58 + 0x748) = *0x1bffc;
                *(*0x1bb58 + 0x74c) = *0x1c001;
                *(*0x1bb58 + 0x750) = *0x1c005;
                *(*0x1bb58 + 0x749) = *0x1c006;
                *(*0x1bb58 + 0x74a) = *0x1c007;
                *(*0x1bb58 + 0x74b) = *0x1c008;
                *(*0x1bb58 + 0x751) = *0x1c009;
                *(*0x1bb58 + 0x752) = *0x1c00a;
                *(*0x1bb58 + 0x753) = *0x1c00d;
                *(*0x1bb58 + 0x754) = *0x1c00e;
                *(*0x1bb58 + 0x75e) = *0x1c037;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c038,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x75f,0x10);
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c00f,0x28);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x755,9);
                *(*0x1bb58 + 0x76f) = *0x1c058;
                *(*0x1bb58 + 0x770) = *0x1c059;
                uVar23 = uVar16;
                do {
                    *(*0x1bb58 + 0x771 + uVar23 * 2) = *(uVar23 * 2 + 0x1c05a);
                    *(uVar23 + 0x789 + *0x1bb58) = *(uVar23 + 0x1c072);
                    uVar23 = uVar23 + 1;
                } while (uVar23 < 0xc);
                *(*0x1bb58 + 0x795) = 1;
                *(*0x1bb58 + 0x796) = *0x1c07f;
                *(*0x1bb58 + 0xb43) = *0x1c659;
                *(*0x1bb58 + 0x797) = *0x1c080;
                *(*0x1bb58 + 0x798) = *0x1c081;
                *(*0x1bb58 + 0x799) = *0x1c083;
                *(*0x1bb58 + 0x79a) = *0x1c084;
                *(*0x1bb58 + 0x79e) = *0x1c089;
                *(*0x1bb58 + 0x7a2) = *0x1c08d;
                *(*0x1bb58 + 0x79b) = *0x1c08e;
                *(*0x1bb58 + 0x79c) = *0x1c08f;
                *(*0x1bb58 + 0x79d) = *0x1c090;
                *(*0x1bb58 + 0x7a3) = *0x1c091;
                *(*0x1bb58 + 0x7a4) = *0x1c092;
                *(*0x1bb58 + 0x7a5) = *0x1c095;
                *(*0x1bb58 + 0x7a6) = *0x1c096;
                *(*0x1bb58 + 0x7a7) = *0x1c58e;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c097,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x7a8,0x10);
                *(*0x1bb58 + 0x7b8) = *0x1c0b7;
                *(*0x1bb58 + 0x7b9) = *0x1c0b8;
                *(*0x1bb58 + 0x7bb) = *0x1c0ba;
                *(*0x1bb58 + 0x7bc) = *0x1c0bb;
                *(*0x1bb58 + 0x7be) = *0x1c0bd;
                *(*0x1bb58 + 0x7bf) = *0x1c0be;
                *(*0x1bb58 + 0x7c0) = *0x1c0bf;
                *(*0x1bb58 + 0x7c1) = *0x1c0c0;
                *(*0x1bb58 + 0x7c2) = *0x1c58f;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c0c1,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x7c3,0x10);
                *(*0x1bb58 + 0x7d3) = *0x1c0e1;
                *(*0x1bb58 + 0x7d4) = *0x1c0e2;
                *(*0x1bb58 + 0x7d6) = *0x1c0e4;
                *(*0x1bb58 + 0x7d7) = *0x1c0e5;
                *(*0x1bb58 + 0x7d9) = *0x1c0e7;
                *(*0x1bb58 + 0x7da) = *0x1c0e8;
                *(*0x1bb58 + 0x7db) = *0x1c0e9;
                *(*0x1bb58 + 0x7dc) = *0x1c0ea;
                *(*0x1bb58 + 0x7dd) = *0x1c590;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c0eb,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x7de,0x10);
                *(*0x1bb58 + 0x7ee) = *0x1c10b;
                *(*0x1bb58 + 0x7ef) = *0x1c10c;
                *(*0x1bb58 + 0x7f1) = *0x1c10e;
                *(*0x1bb58 + 0x7f2) = *0x1c10f;
                *(*0x1bb58 + 0x7f4) = *0x1c111;
                *(*0x1bb58 + 0x7f5) = *0x1c112;
                *(*0x1bb58 + 0x7f6) = *0x1c113;
                *(*0x1bb58 + 0x7f7) = *0x1c114;
                *(*0x1bb58 + 0x7f8) = *0x1c591;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c115,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x7f9,0x10);
                *(*0x1bb58 + 0x809) = *0x1c135;
                *(*0x1bb58 + 0x80a) = *0x1c136;
                *(*0x1bb58 + 0x80c) = *0x1c138;
                *(*0x1bb58 + 0x80d) = *0x1c139;
                *(*0x1bb58 + 0x80f) = *0x1c13b;
                *(*0x1bb58 + 0x810) = *0x1c13c;
                *(*0x1bb58 + 0x811) = *0x1c13d;
                *(*0x1bb58 + 0x812) = *0x1c13e;
                *(*0x1bb58 + 0x813) = *0x1c592;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c13f,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x814,0x10);
                *(*0x1bb58 + 0x824) = *0x1c15f;
                *(*0x1bb58 + 0x825) = *0x1c160;
                *(*0x1bb58 + 0x827) = *0x1c162;
                *(*0x1bb58 + 0x828) = *0x1c163;
                *(*0x1bb58 + 0x82a) = *0x1c165;
                *(*0x1bb58 + 0x82b) = *0x1c166;
                *(*0x1bb58 + 0x82c) = *0x1c167;
                *(*0x1bb58 + 0x82d) = *0x1c168;
                *(*0x1bb58 + 0x82e) = *0x1c593;
                fcn.000102a0(auStack_ab8,0x20);
                section..text(auStack_ab8,0x1c169,0x20);
                fcn.0001a370(auStack_ab8,*0x1bb58 + 0x82f,0x10);
                *(*0x1bb58 + 0x83f) = *0x1c189;
                *(*0x1bb58 + 0x840) = *0x1c18a;
                *(*0x1bb58 + 0x842) = *0x1c18c;
                *(*0x1bb58 + 0x843) = *0x1c18d;
                *(*0x1bb58 + 0x845) = *0x1c18f;
                *(*0x1bb58 + 0x846) = *0x1c190;
                *(*0x1bb58 + 0x847) = *0x1c191;
                *(*0x1bb58 + 0xbdd) = *0x1c6b8;
                *(*0x1bb58 + 0xbde) = *0x1c6b9;
                *(*0x1bb58 + 0xbdf) = *0x1c6ba;
                *(*0x1bb58 + 0xbe0) = *0x1c6bb;
                *(*0x1bb58 + 0xbe1) = *0x1c6bc;
                *(*0x1bb58 + 0xbe2) = *0x1c6bd;
                *(*0x1bb58 + 0x849) = *0x1ce33;
                iVar8 = fcn.0001a2e4();
                uVar5 = (**(iVar8 + 0x18))(0x52);
                *(*0x1bb58 + 0x84a) = uVar5;
                *(*0x1bb58 + 0x84e) = *0x1ce34;
                do {
                    pcVar15 = uVar16 + 0x1ce3e;
                    uVar24 = uVar16;
                    uVar16 = uVar16 + 1;
                    *(*0x1bb58 + 0x860) = *(*0x1bb58 + 0x860) | -(*pcVar15 != '\0') & 1 << (uVar24 & 0x1f);
                } while (uVar16 < 0x20);
                if (*0x1ce5b != '\0') {
                    section..text(auStack_9e8,0x1ce5e,0x4a);
                    fcn.00011c98(auStack_9e8,&uStack_a60,&uStack_a58);
                    *(*0x1bb58 + 0x864) = uStack_a60;
                    *(*0x1bb58 + 0x86c) = uStack_a58;
                }
                if (*0x1ce5c != '\0') {
                    section..text(auStack_9e8,0x1cea8,0x4a);
                    fcn.00011c98(auStack_9e8,&uStack_a60,&uStack_a58);
                    *(*0x1bb58 + 0x874) = uStack_a60;
                    *(*0x1bb58 + 0x87c) = uStack_a58;
                }
                if (*0x1ce5d != '\0') {
                    section..text(auStack_9e8,0x1cef2,0x4a);
                    fcn.00011c98(auStack_9e8,&uStack_a60,&uStack_a58);
                    *(*0x1bb58 + 0x884) = uStack_a60;
                    *(*0x1bb58 + 0x88c) = uStack_a58;
                }
                *(*0x1bb58 + 0xce6) = *0x1d07f;
                *(*0x1bb58 + 0xb91) = *0x1c695;
                *(*0x1bb58 + 0xb92) = *0x1c696;
                *(*0x1bb58 + 0xb93) = *0x1c697;
                *(*0x1bb58 + 0xb94) = *0x1c698;
                *(*0x1bb58 + 0xb95) = *0x1c699;
                *0x1c870 = fcn.0001a574(0x1b2e0);
                *(*0x1bb58 + 0x848) = *0x1bbfb;
                if ((*0x1c3f3 == '\x01') && (*0x1c431 != 0)) {
                    *(*0x1bb58 + 0xa0a) = *0x1c442;
                    *(*0x1bb58 + 0xa0c) = *0x1c434;
                    if (1 < *0x1c431) {
                        *(*0x1bb58 + 0xa0b) = *0x1c443;
                        *(*0x1bb58 + 0xa0d) = *0x1c435;
                    }
                }
                *(*0x1bb58 + 0xcdf) = *0x1c3f3;
                *(*0x1bb58 + 0xa88) = *0x1c59c;
                *(*0x1bb58 + 0x917) = *0x1c56a;
                iVar8 = fcn.0001a574(0x1b240);
                uVar18 = uVar19;
                uVar24 = uVar19;
                if (iVar8 != 0) {
                    uVar24 = *(iVar8 + 0x19);
                    uVar18 = *(iVar8 + 0x1c);
                    uVar19 = (*(iVar8 + 0x1b) | 0xf8) << 4 | *(iVar8 + 0x1a) & 7;
                }
                *(*0x1bb58 + 0xbab) = uVar19;
                *(*0x1bb58 + 0xbac) = uVar24;
                *(*0x1bb58 + 0xbdc) = uVar18;
                (**(*0x1bb10 + 0x148))(&uStack_a38,0x1b2d0,0x1bb58,0);
                fcn.00011954(10,0x10000,0x1bb60);
                fcn.00019b84();
                uStack_a18 = *0x1ba10;
                uStack_a10 = *0x1ba18;
                fcn.000117bc(&uStack_a18);
                arg1_00 = &uStack_a08;
                uStack_a08 = *0x1b9f0;
                uStack_a00 = *0x1b9f8;
                fcn.000117bc(arg1_00);
                uStackX_18 = 0;
                fcn.0001a604(arg1_00,&iStack_a30,&uStackX_18);
                fcn.0001091c(iStack_a30,&iStack_a4c);
                if (iStack_a4c != 1) {
                    uVar17 = 0x1b2f0;
                    iVar8 = (**(*0x1bb10 + 0x140))(0x1b2f0,0,&puStack_a48);
                    if ((-1 < iVar8) && (iVar8 = fcn.0001a268(uVar17,*(iStack_a30 + 4),iStack_a30), iVar8 != 0)) {
                        (*puStack_a48[1])(puStack_a48,uStackX_18);
                        uStackX_18 = 0;
                        (**puStack_a48)(puStack_a48,iVar8,*(iVar8 + 4),&uStackX_18);
                        (**(*0x1bb10 + 0x48))(iVar8);
                    }
                }
                uStack_9f8 = *0x1ba00;
                uStack_9f0 = *0x1ba08;
                fcn.000117bc(&uStack_9f8);
                return 0;
            }
        }
        iVar8 = -0x7ffffffffffffffd;
    }
    return iVar8;
}


/* fcn.0001a508 @ 0x1a508 */

int64_t fcn.0001a508(void)

{
    uint64_t uVar1;
    int64_t *piVar2;
    
    uVar1 = 0;
    if (*0x1bb30 == 0) {
        *0x1bb30 = 0;
        if (*(*0x1bb08 + 0x68) != 0) {
            piVar2 = *(*0x1bb08 + 0x70);
            do {
                if ((*0x1b310 == *piVar2) && (*0x1b318 == piVar2[1])) {
                    *0x1bb30 = (*(*0x1bb08 + 0x70))[uVar1 * 3 + 2];
                    return *0x1bb30;
                }
                uVar1 = uVar1 + 1;
                piVar2 = piVar2 + 3;
            } while (uVar1 < *(*0x1bb08 + 0x68));
        }
    }
    return *0x1bb30;
}


/* fcn.0001a574 @ 0x1a574 */

void fcn.0001a574(int64_t arg1)

{
    int16_t *piVar1;
    
    piVar1 = fcn.0001a508();
    do {
        if (*piVar1 == -1) {
            piVar1 = NULL;
code_r0x0001a5a2:
            if ((piVar1 == NULL) || ((*arg1 == *(piVar1 + 4) && (*(arg1 + 8) == *(piVar1 + 8))))) {
                return;
            }
        }
        else if (*piVar1 == 4) goto code_r0x0001a5a2;
        piVar1 = piVar1 + piVar1[1];
    } while( true );
}


/* fcn.000103e0 @ 0x103e0 */

uint64_t fcn.000103e0(void)

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


/* fcn.000103d0 @ 0x103d0 */

void fcn.000103d0(void)

{
    return;
}


/* fcn.00010380 @ 0x10380 */

uint64_t fcn.00010380(ulong noname_0,int64_t arg1)

{
    uint64_t uVar1;
    ulong in_RAX;
    
    uVar1 = rdtsc();
    return CONCAT44(in_RAX >> 0x20,uVar1) | uVar1 & 0xffffffff00000000;
}


/* fcn.00010312 @ 0x10312 */

void fcn.00010312(void)

{
    return;
}


/* fcn.000103c0 @ 0x103c0 */

void fcn.000103c0(void)

{
    return;
}


/* fcn.0001a2e4 @ 0x1a2e4 */

int64_t fcn.0001a2e4(void)

{
    if (*0x1bb28 == 0) {
        (**(*0x1bb10 + 0x140))(0x1b260,0,0x1bb28);
    }
    return *0x1bb28;
}


/* fcn.00010828 @ 0x10828 */

int64_t fcn.00010828(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint64_t *puVar1;
    int64_t iVar2;
    uint64_t uVar3;
    int64_t in_stack_00000028;
    int64_t *in_stack_00000030;
    uint in_stack_00000038;
    uint in_stack_0000003c;
    ulong auStack_38 [2];
    
    puVar1 = CONCAT44(in_stack_0000003c,in_stack_00000038);
    uVar3 = 0;
    if (*puVar1 == 0) {
        iVar2 = in_stack_00000028;
    }
    else {
        while (iVar2 = (**(*0x1bb10 + 0x98))(*(*in_stack_00000030 + uVar3 * 8),arg1,arg3), arg4 != '\0') {
            auStack_38[0] = 0;
            in_stack_00000038 = 0;
            iVar2 = (**(*arg3 + 0x10))(*arg3,arg2,0,auStack_38,&stack0x00000030,&stack0x00000028,&stack0x00000038)
            ;
            if ((iVar2 == 0) || (uVar3 = uVar3 + 1, *puVar1 <= uVar3)) break;
        }
    }
    (**(*0x1bb10 + 0x48))(*in_stack_00000030);
    return iVar2;
}


/* fcn.000102c0 @ 0x102c0 */

int64_t fcn.000102c0(int64_t arg1,int64_t arg2,int64_t arg3)

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


/* section..text @ 0x10260 */

int64_t section..text(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    ulong *puVar2;
    ulong *puVar3;
    uint64_t uVar4;
    uint8_t uVar5;
    
    //[00] -r-x section size 44960 named .text
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


/* fcn.0001b0c4 @ 0x1b0c4 */

char fcn.0001b0c4(void)

{
    uint64_t uVar1;
    char cVar2;
    
    cVar2 = fcn.0001b088();
    if (cVar2 == '\0') {
        cVar2 = '\x01';
    }
    else {
        uVar1 = rdmsr(0x1b);
        cVar2 = ((uVar1 & 0x400) != 0) + '\x01';
    }
    return cVar2;
}


/* fcn.0001a604 @ 0x1a604 */

int64_t fcn.0001a604(int64_t arg1,int64_t arg2,int64_t arg3)

{
    int64_t iVar1;
    ulong uVar2;
    int64_t noname_0;
    int64_t iVar3;
    uint auStackX_8 [2];
    int *piStackX_20;
    
    auStackX_8[0] = arg1;
    iVar3 = 0;
    if ((*0x1bb38 == 0) && (fcn.0001a5c0(), *0x1bb38 == 0)) {
        iVar1 = -0x7ffffffffffffffa;
    }
    else {
        auStackX_8[0] = 0;
        do {
            noname_0 = iVar3;
            iVar1 = (**(*0x1bb38 + 8))(iVar3,&piStackX_20,auStackX_8,arg3);
            if (iVar1 == -0x7ffffffffffffff2) goto code_r0x0001a697;
            iVar3 = iVar3 + 1;
        } while (*piStackX_20 != 0x50434146);
        uVar2 = fcn.0001a268(noname_0,piStackX_20[1],piStackX_20);
        *arg2 = uVar2;
    }
code_r0x0001a697:
    return iVar1;
}


/* fcn.0001a0b0 @ 0x1a0b0 */

ulong fcn.0001a0b0(int64_t arg1,int64_t arg2)

{
    char cVar1;
    uint32_t uVar2;
    ulong uVar3;
    uint64_t uVar4;
    uint64_t uVar5;
    uint32_t uVar6;
    uint32_t uStack_28;
    uchar auStack_24 [4];
    uchar auStack_20 [8];
    int iStack_18;
    uchar auStack_14 [4];
    uchar auStack_10 [8];
    
    uVar6 = arg1 & 0x1ff;
    cVar1 = fcn.0001b150(arg1);
    uVar4 = 0;
    if (cVar1 == '\0') {
        uVar3 = 0x8000000000000002;
    }
    else {
        fcn.00019f88(&uStack_28,&iStack_18,auStack_24,auStack_14,auStack_20,auStack_10);
        uVar5 = uVar4;
        do {
            if ((arg1 >> 0x10 & 0xf1f) == *(auStack_24 + (uVar4 - 4))) {
                uVar2 = *(auStack_14 + (uVar4 - 4)) * 0x20;
                if ((uVar2 <= uVar6) && (uVar6 < uVar2 + 0x20)) {
                    *arg2 = (uVar5 - *(auStack_14 + (uVar4 - 4))) * 0x20 + uVar6;
                    goto code_r0x0001a14e;
                }
            }
            uVar2 = uVar5 + 1;
            uVar5 = uVar2;
            uVar4 = uVar4 + 4;
        } while (uVar2 < 3);
        *arg2 = 0x6f;
code_r0x0001a14e:
        uVar3 = 0;
    }
    return uVar3;
}


/* fcn.0001a2a8 @ 0x1a2a8 */

int64_t fcn.0001a2a8(void)

{
    if (*0x1bb20 == 0) {
        (**(*0x1bb10 + 0x140))(0x1b2b0,0,0x1bb20);
    }
    return *0x1bb20;
}


/* fcn.00019678 @ 0x19678 */

ulong fcn.00019678(int64_t arg1)

{
    char *pcVar1;
    char cVar2;
    uint8_t uVar3;
    uint *puVar4;
    ulong uVar5;
    char *pcVar6;
    uint64_t uVar7;
    int64_t iVar8;
    uint *puVar9;
    uint *puVar10;
    uint8_t uVar11;
    uint64_t uStackX_8;
    
    puVar4 = NULL;
    uVar11 = 0;
    uVar3 = 0;
    (**(arg1 + 0x30))(arg1,&uStackX_8);
    uVar7 = 0;
    if (*0x1d098 == 0) {
        puVar10 = *0x1bb50;
    }
    else {
        iVar8 = 0;
        do {
            puVar4 = fcn.0001a20c();
            uVar5 = (**(arg1 + 8))(arg1,uVar7,puVar4);
            puVar10 = *0x1bb50;
            if (puVar4 == NULL) {
                return uVar5;
            }
            *(iVar8 + *0x1bb50) = *puVar4;
            *(iVar8 + 4 + puVar10) = puVar4[2] >> 1 & 1;
            *(iVar8 + 8 + puVar10) = *(puVar4 + 3);
            *(iVar8 + 9 + puVar10) = 0;
            *(iVar8 + 10 + puVar10) = *(puVar4 + 4);
            *(iVar8 + 0xb + puVar10) = *(puVar4 + 5);
            if (uVar3 < *(puVar4 + 5)) {
                uVar3 = *(puVar4 + 5);
            }
            if (uVar11 < *(puVar4 + 4)) {
                uVar11 = *(puVar4 + 4);
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 0xc;
        } while (uVar7 < *0x1d098);
    }
    pcVar1 = *0x1d0a8;
    uVar7 = 0;
    if (*0x1d098 != 0) {
        puVar9 = puVar10;
        do {
            if (uVar7 == uStackX_8) {
                *0x1d0b8 = *puVar9;
                *0x1d0bd = *(puVar9 + 2);
                *0x1d0be = 0;
                *0x1d0bc = '\0';
            }
            uVar7 = uVar7 + 1;
            puVar9 = puVar9 + 3;
        } while (uVar7 < *0x1d098);
        if (*0x1d098 != 0) {
            pcVar6 = puVar10 + 0xb;
            uVar7 = *0x1d098;
            do {
                if (pcVar6[-3] == *0x1d0bd) {
                    *0x1d0bc = *0x1d0bc + '\x01';
                    if (*pcVar6 == '\0') {
                        *0x1d0be = *0x1d0be + '\x01';
                    }
                    else {
                        *0x1d0bf = *0x1d0bf + '\x01';
                    }
                }
                pcVar6 = pcVar6 + 0xc;
                uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
        }
    }
    cVar2 = *0x1d0bd;
    *(*0x1d0a8 + 4) = *0x1d0b8;
    iVar8 = *0x1bb10;
    *pcVar1 = cVar2;
    pcVar1[8] = '\x01';
    pcVar1[9] = '\0';
    pcVar1[10] = '\0';
    pcVar1[0xb] = '\0';
    (**(iVar8 + 0x48))(puVar4);
    return 0;
}


/* fcn.0001091c @ 0x1091c */

ulong fcn.0001091c(int64_t arg1,int64_t arg2)

{
    int64_t *arg1_00;
    char cVar1;
    int iVar2;
    uint8_t uVar3;
    uint uVar4;
    uint32_t uVar5;
    int64_t iVar6;
    ulong uVar7;
    char *arg2_00;
    uchar uVar8;
    uint32_t *puVar9;
    uint32_t *puVar10;
    char *pcVar11;
    uint64_t uVar12;
    uchar *puVar13;
    uint32_t *puVar14;
    bool bVar15;
    bool bVar16;
    uint auStackX_8 [2];
    ulong uStackX_10;
    ulong uStackX_18;
    int64_t iStackX_20;
    uint32_t var_bp_38h;
    int32_t var_500h;
    int64_t var_508h;
    int64_t var_510h;
    int64_t var_518h;
    int64_t iStack_5c8;
    uchar auStack_5c0 [8];
    uchar auStack_5b8 [248];
    char cStack_4c0;
    
    uStackX_10 = 0x578;
    uVar12 = 0;
    (**(*0x1bb18 + 0x48))(L"SaSetup",0x1b360,0,&uStackX_10,auStack_5b8);
    if ((*arg1 != 0x53434146) && (*arg1 != 0x54445344)) {
        if ((*arg1 != 0x54445353) ||
           ((arg1 + 10 != "Rtd3" && (iVar6 = fcn.000102c0(arg1 + 10,0x1ba30,4), iVar6 != 0)))) {
            iVar6 = fcn.0001a2e4();
            iVar6 = (**(iVar6 + 0x28))(0x225);
            if (arg1 + 10 != iVar6) {
                section..text(arg1 + 10,iVar6,6);
            }
        }
        if (*arg1 != 0x54445353) {
            iVar6 = fcn.0001a2e4();
            uVar7 = (**(iVar6 + 0x20))(0x163);
            *(arg1 + 0x10) = uVar7;
            iVar6 = fcn.0001a2e4();
            uVar4 = (**(iVar6 + 0x18))(0x226);
            *(arg1 + 0x18) = uVar4;
            iVar6 = fcn.0001a2e4();
            uVar4 = (**(iVar6 + 0x18))(0x224);
            *(arg1 + 0x1c) = uVar4;
            *(arg1 + 0x20) = 0x1000013;
        }
    }
    (**(*0x1bb10 + 0x140))(0x1b220,0,auStack_5c0);
    (**(*0x1bb10 + 0x140))(0x1b200,0,&iStack_5c8);
    iVar6 = fcn.0001b0c4();
    iVar2 = *arg1;
    *0x1d0b0 = iVar6 == 2;
    *arg2 = 0xe;
    if (iVar2 == 0x43495041) {
        uVar5 = *(arg1 + 4);
        pcVar11 = arg1 + 0x2c;
        if (*0x1d0b0) {
            if (*pcVar11 != '\0') {
code_r0x00011711:
                fcn.00019678(iStack_5c8);
                iVar6 = *0x1bb50;
                do {
                    if (uVar5 + arg1 <= pcVar11) {
                        return 0;
                    }
                    if (*pcVar11 == '\0') {
                        if (uVar12 < *0x1d098) {
                            *(pcVar11 + 4) = *(iVar6 + 4 + uVar12 * 0xc);
                            pcVar11[3] = *(iVar6 + uVar12 * 0xc);
                        }
                        else {
                            pcVar11[4] = '\0';
                            pcVar11[5] = '\0';
                            pcVar11[6] = '\0';
                            pcVar11[7] = '\0';
                            pcVar11[3] = -1;
                        }
                        pcVar11[2] = uVar12;
code_r0x00011799:
                        uVar12 = uVar12 + 1;
                    }
                    else if (*pcVar11 == '\t') {
                        if (uVar12 < *0x1d098) {
                            *(pcVar11 + 8) = *(iVar6 + 4 + uVar12 * 0xc);
                            *(pcVar11 + 4) = *(iVar6 + uVar12 * 0xc);
                        }
                        else {
                            pcVar11[4] = -1;
                            pcVar11[5] = -1;
                            pcVar11[6] = -1;
                            pcVar11[7] = -1;
                            pcVar11[8] = '\0';
                            pcVar11[9] = '\0';
                            pcVar11[10] = '\0';
                            pcVar11[0xb] = '\0';
                        }
                        *(pcVar11 + 0xc) = uVar12;
                        goto code_r0x00011799;
                    }
                    pcVar11 = pcVar11 + pcVar11[1];
                } while( true );
            }
        }
        else if (*pcVar11 != '\t') goto code_r0x00011711;
    }
    else {
        if (iVar2 == 0x4746434d) {
            *(arg1 + 0x2c) = 0xc0000000;
            iVar6 = fcn.0001a2a8();
            uVar5 = (**(iVar6 + 0x18))(0x1b390,0x200001);
            uVar3 = (uVar5 >> 0x14) - 1;
            *(arg1 + 0x37) = uVar3;
            if ((0xe0 < uVar3) && (cStack_4c0 == '\x01')) {
                *(arg1 + 0x37) = 0xe0;
            }
            if ((*(*0x1c870 + 0x18) & 2) != 0) {
                *(arg1 + 0x3c) = 0xd0000000;
                return 0;
            }
            *(arg1 + 4) = *(arg1 + 4) + -0x10;
            return 0;
        }
        if (iVar2 == 0x50434146) {
            cVar1 = *(arg1 + 8);
            *arg2 = 1;
            if (cVar1 == '\x01') {
                *arg2 = 1;
            }
            else if (cVar1 == '\x03') {
                *arg2 = 6;
            }
            else if (cVar1 == '\x04') {
                *arg2 = 10;
            }
            else if (cVar1 == '\x05') {
                *arg2 = 0x22;
            }
            else {
                uVar4 = *arg2;
                if (cVar1 == '\x06') {
                    uVar4 = 0x20;
                }
                *arg2 = uVar4;
            }
            if (*0x1c368 == '\0') {
                *(arg1 + 0x6d) = *(arg1 + 0x6d) | 8;
            }
            iVar6 = fcn.0001a2e4();
            (**(iVar6 + 8))(0xfe);
            *(arg1 + 0x2d) = 2;
            if ((*0x1bbf3 == '\0') || (*0x1bbf4 == '\0')) {
                *(arg1 + 0x6d) = *(arg1 + 0x6d) | 0x10;
            }
            *(arg1 + 0x70) = *(arg1 + 0x70) | 0x4000;
            if (*0x1bbfe == '\0') {
                uVar5 = *(arg1 + 0x70) & 0xffdfffef;
            }
            else {
                uVar5 = *(arg1 + 0x70) & 0xfffffdff | 0x200010;
            }
            *(arg1 + 0x70) = uVar5;
            *(arg1 + 8) = 6;
            *(arg1 + 0x77) = 1;
            *(arg1 + 0x97) = 2;
            *(arg1 + 0xa3) = 2;
            *(arg1 + 0xaf) = 2;
            *(arg1 + 0xbb) = 2;
            *(arg1 + 199) = 1;
            *(arg1 + 0xd3) = 3;
            *(arg1 + 0xdf) = 1;
            *(arg1 + 0xeb) = 1;
            if ((uVar5 >> 0x14 & 1) != 0) {
                *(arg1 + 0xf4) = 0x3000801;
                *(arg1 + 0xf8) = 0x1804;
                *(arg1 + 0x100) = 0x3000801;
                *(arg1 + 0x104) = 0x1800;
            }
            *(arg1 + 0x36) = 0;
            return 0;
        }
        if (iVar2 == 0x54444345) {
            if (*(CONCAT44(*0x1bb5c,*0x1bb58) + 0x40) != '\0') {
                if ((*0xfd72c00c & 1) == 0) {
                    uVar8 = 0x17;
                    auStackX_8[0] = 0x17;
                    uVar5 = *(CONCAT44(*0x1bb5c,*0x1bb58) + 0x923);
                    if (uVar5 != 0) {
                        fcn.0001a0b0(uVar5,auStackX_8);
                        uVar8 = auStackX_8[0];
                    }
                }
                else {
                    uVar8 = 0x6e;
                }
                *(arg1 + 0x40) = uVar8;
                return 0;
            }
        }
        else {
            if (iVar2 == 0x54445344) {
                uStackX_18 = 0;
                *arg2 = 1;
                bVar15 = false;
                fcn.0001a604(0,&iStackX_20,&uStackX_18);
                puVar14 = *(iStackX_20 + 0x28);
                puVar10 = puVar14;
                if (puVar14 + (puVar14[1] - 4) <= puVar14) {
                    return 0;
                }
                do {
                    uVar5 = *puVar10;
                    if (uVar5 < 0x35305251) {
                        if (uVar5 == 0x35305250) goto code_r0x00010f4a;
                        if (uVar5 < 0x32434160) {
                            if (uVar5 == 0x3243415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x32434158;
                                }
                            }
                            else if (uVar5 < 0x31315251) {
                                if (((uVar5 + 0xcfcfadb0 & 0xfefeffff) == 0) && (uVar5 != 0x31305250))
                                goto code_r0x00010f4a;
                                if (uVar5 == 0x3043415f) {
                                    if ((*(puVar10 + -3) == '\x14') && (*0x1c282 == '\0')) {
                                        *puVar10 = 0x30434158;
                                    }
                                }
                                else if (uVar5 == 0x304a455f) {
                                    if ((*0x1bbfe != '\0') && (*(puVar10 + -3) == '\x14')) {
                                        *puVar10 = 0x304a4558;
                                        bVar15 = true;
                                    }
                                }
                                else {
                                    if (uVar5 != 0x304c415f) {
                                        bVar16 = uVar5 == 0x31305250;
                                        goto code_r0x00010f44;
                                    }
                                    if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                        *puVar10 = 0x304c4158;
                                    }
                                }
                            }
                            else if (uVar5 == 0x3143415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x31434158;
                                }
                            }
                            else if (uVar5 == 0x3143545f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c283 == '\0')) {
                                    *puVar10 = 0x31435458;
                                }
                            }
                            else {
                                if (uVar5 != 0x314c415f) {
                                    uVar5 = uVar5 + 0xcdcfadb0;
                                    goto code_r0x00011020;
                                }
                                if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x314c4158;
                                }
                            }
                        }
                        else if (uVar5 < 0x33434160) {
                            if (uVar5 == 0x3343415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x33434158;
                                }
                            }
                            else if (uVar5 == 0x3243545f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c283 == '\0')) {
                                    *puVar10 = 0x32435458;
                                }
                            }
                            else if (uVar5 == 0x324c415f) {
                                if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x324c4158;
                                }
                            }
                            else {
                                uVar5 = uVar5 + 0xcccfadb0;
code_r0x00011020:
                                bVar16 = (uVar5 & 0xfffeffff) == 0;
code_r0x00010f44:
                                if (bVar16) goto code_r0x00010f4a;
                            }
                        }
                        else if (uVar5 == 0x334c415f) {
                            if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x334c4158;
                            }
                        }
                        else {
                            if ((uVar5 + 0xcbcfadb0 & 0xfffeffff) == 0) goto code_r0x00010f4a;
                            if (uVar5 == 0x3443415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x34434158;
                                }
                            }
                            else if (((uVar5 == 0x344c415f) && (*(puVar10 + -1) == '\b')) && (*0x1c282 == '\0')) {
                                *puVar10 = 0x344c4158;
                            }
                        }
                    }
                    else if (uVar5 < 0x384c4160) {
                        if (uVar5 == 0x384c415f) {
                            if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x384c4158;
                            }
                        }
                        else if (uVar5 < 0x364c4160) {
                            if (uVar5 == 0x364c415f) {
                                if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x364c4158;
                                }
                            }
                            else {
                                if (uVar5 == 0x35315250) goto code_r0x00010f4a;
                                if (uVar5 == 0x3543415f) {
                                    if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                        *puVar10 = 0x35434158;
                                    }
                                }
                                else if (uVar5 == 0x354c415f) {
                                    if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                        *puVar10 = 0x354c4158;
                                    }
                                }
                                else {
                                    if (uVar5 == 0x36305250) goto code_r0x00010f4a;
                                    if (((uVar5 == 0x3643415f) && (*(puVar10 + -2) == '\x14')) && (*0x1c282 == '\0')) {
                                        *puVar10 = 0x36434158;
                                    }
                                }
                            }
                        }
                        else if (uVar5 == 0x37305250) {
code_r0x00010f4a:
                            if ((*0x1bbfe == '\0') && (puVar13 = ~-(puVar10 + 5 < puVar10) & 0x15, puVar13 != NULL)) {
                                puVar9 = puVar10;
                                do {
                                    if (*puVar9 == 0x5045445f) {
                                        *puVar9 = 0x58;
                                    }
                                    puVar9 = puVar9 + 1;
                                } while ((1 - puVar10) + puVar9 <= puVar13);
                            }
                        }
                        else if (uVar5 == 0x3743415f) {
                            if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x37434158;
                            }
                        }
                        else if (uVar5 == 0x374c415f) {
                            if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x374c4158;
                            }
                        }
                        else {
                            if (uVar5 == 0x38305250) goto code_r0x00010f4a;
                            if (((uVar5 == 0x3843415f) && (*(puVar10 + -2) == '\x14')) && (*0x1c282 == '\0')) {
                                *puVar10 = 0x38434158;
                            }
                        }
                    }
                    else if (uVar5 < 0x4c444560) {
                        if (uVar5 == 0x4c44455f) {
                            if ((*0x1bbfe != '\0') && (*(puVar10 + -1) == '\b')) {
                                *puVar10 = 0x4c444558;
                            }
                        }
                        else {
                            if (uVar5 == 0x39305250) goto code_r0x00010f4a;
                            if (uVar5 == 0x3943415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x39434158;
                                }
                            }
                            else if (uVar5 == 0x394c415f) {
                                if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x394c4158;
                                }
                            }
                            else if (uVar5 == 0x4154535f) {
                                if (((*0x1bbfe != '\0') && (*(puVar10 + -3) == '\x14')) && (bVar15)) {
                                    *puVar10 = 0x41545358;
                                    bVar15 = false;
                                }
                            }
                            else if (((uVar5 == 0x4b43445f) && (*0x1bbfe != '\0')) && (*(puVar10 + -3) == '\x14')) {
                                *puVar10 = 0x4b434458;
                            }
                        }
                    }
                    else if (uVar5 == 0x4c53505f) {
                        if ((*(puVar10 + -3) == '\x14') && (*0x1c283 == '\0')) {
                            *puVar10 = 0x4c535058;
                        }
                    }
                    else if (uVar5 == 0x5053545f) {
                        if ((*(puVar10 + -2) == '\x14') && (*0x1c283 == '\0')) {
                            *puVar10 = 0x50535458;
                        }
                    }
                    else if (uVar5 == 0x53564e47) {
                        if (*(puVar10 + -1) == -0x80) {
                            *(puVar10 + 6) = *0x1bb58;
                            *(puVar10 + 0xb) = 0xce7;
                        }
                    }
                    else if (uVar5 == 0x5452435f) {
                        if ((*(puVar10 + -3) == '\x14') && (*0x1c284 == '\0')) {
                            *puVar10 = 0x54524358;
                        }
                    }
                    else if (((uVar5 == 0x5653505f) && (*(puVar10 + -3) == '\x14')) && (*0x1c283 == '\0')) {
                        *puVar10 = 0x56535058;
                    }
                    puVar10 = puVar10 + 1;
                    if (puVar14 + (puVar14[1] - 4) <= puVar10) {
                        return 0;
                    }
                } while( true );
            }
            if (iVar2 == 0x54445350) {
                *arg2 = 2;
                return 0;
            }
            if (iVar2 == 0x54445353) {
                arg1_00 = arg1 + 0x10;
                if ((arg1_00 == 0x1ba38) || (iVar6 = fcn.000102c0(arg1_00,0x1ba38,3), iVar6 == 0)) {
                    *arg2 = 1;
                }
                if (((arg1_00 == "Ther_Rvp") || (iVar6 = fcn.000102c0(arg1_00,0x1ba40,8), iVar6 == 0)) &&
                   (puVar10 = arg1, arg1 < arg1 + -4 + *(arg1 + 4))) {
                    do {
                        if (*puVar10 < 0x33434160) {
                            if (*puVar10 == 0x3343415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x33434158;
                                }
                            }
                            else if (*puVar10 == 0x3043415f) {
                                if ((*(puVar10 + -3) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x30434158;
                                }
                            }
                            else if (*puVar10 == 0x304c415f) {
                                if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x304c4158;
                                }
                            }
                            else if (*puVar10 == 0x3143415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x31434158;
                                }
                            }
                            else if (*puVar10 == 0x3143545f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c283 == '\0')) {
                                    *puVar10 = 0x31435458;
                                }
                            }
                            else if (*puVar10 == 0x314c415f) {
                                if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x314c4158;
                                }
                            }
                            else if (*puVar10 == 0x3243415f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                    *puVar10 = 0x32434158;
                                }
                            }
                            else if (*puVar10 == 0x3243545f) {
                                if ((*(puVar10 + -2) == '\x14') && (*0x1c283 == '\0')) {
                                    *puVar10 = 0x32435458;
                                }
                            }
                            else if (((*puVar10 == 0x324c415f) && (*(puVar10 + -1) == '\b')) && (*0x1c282 == '\0')) {
                                *puVar10 = 0x324c4158;
                            }
                        }
                        else if (*puVar10 == 0x334c415f) {
                            if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x334c4158;
                            }
                        }
                        else if (*puVar10 == 0x3443415f) {
                            if ((*(puVar10 + -2) == '\x14') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x34434158;
                            }
                        }
                        else if (*puVar10 == 0x344c415f) {
                            if ((*(puVar10 + -1) == '\b') && (*0x1c282 == '\0')) {
                                *puVar10 = 0x344c4158;
                            }
                        }
                        else if (*puVar10 == 0x4c53505f) {
                            if ((*(puVar10 + -3) == '\x14') && (*0x1c283 == '\0')) {
                                *puVar10 = 0x4c535058;
                            }
                        }
                        else if (*puVar10 == 0x5053545f) {
                            if ((*(puVar10 + -2) == '\x14') && (*0x1c283 == '\0')) {
                                *puVar10 = 0x50535458;
                            }
                        }
                        else if (*puVar10 == 0x5452435f) {
                            if ((*(puVar10 + -3) == '\x14') && (*0x1c284 == '\0')) {
                                *puVar10 = 0x54524358;
                            }
                        }
                        else if (((*puVar10 == 0x5653505f) && (*(puVar10 + -3) == '\x14')) && (*0x1c283 == '\0')) {
                            *puVar10 = 0x56535058;
                        }
                        puVar10 = puVar10 + 1;
                    } while (puVar10 < arg1 + -4 + *(arg1 + 4));
                }
                pcVar11 = arg1 + 10;
                if ((pcVar11 != "Rtd3") && (iVar6 = fcn.000102c0(pcVar11,0x1ba30,4), iVar6 != 0)) {
                    return 0;
                }
                iVar6 = fcn.0001a2e4();
                arg2_00 = (**(iVar6 + 0x28))(0x225);
                if (pcVar11 != arg2_00) {
                    section..text(pcVar11,arg2_00,6);
                }
                bVar15 = *0x1c2c2 != '\x01';
                *arg2 = 1;
                if (bVar15) {
                    return 0;
                }
                iVar6 = fcn.0001a2e4();
                iVar6 = (**(iVar6 + 0x20))(0x22);
                if (*arg1_00 != iVar6) {
                    return 0;
                }
                *arg2 = 0xe;
                return 0;
            }
            if (iVar2 != 0x54455048) {
                return 0;
            }
            if (*0x1c89f != '\0') {
                *(arg1 + 0x2c) = 0xfed00000;
                return 0;
            }
        }
    }
    *arg2 = 1;
    return 0;
}


/* fcn.00010674 @ 0x10674 */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_19h

void fcn.00010674(void)

{
    int64_t iVar1;
    int64_t iVar2;
    int64_t iVar3;
    int64_t iVar4;
    uchar *puVar5;
    bool bVar6;
    uchar auStackX_8 [7];
    int64_t var_17h;
    uchar auStackX_18 [7];
    int64_t var_27h;
    int64_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    uchar auStack_98 [8];
    uchar auStack_90 [8];
    uchar auStack_88 [8];
    uchar auStack_80 [8];
    ulong *apuStack_78 [2];
    uint uStack_68;
    uint uStack_64;
    uint uStack_60;
    uint uStack_5c;
    uchar auStack_58 [16];
    uint uStack_48;
    uchar auStack_44 [3];
    int64_t var_39h;
    int64_t var_31h;
    int64_t var_29h;
    int64_t var_21h;
    int64_t var_19h;
    int64_t var_9h;
    
    iVar4 = 0;
    stack0x00000020 = 0;
    stack0x00000010 = 0;
    _auStackX_18 = 0;
    uStack_68 = *0x1ba10;
    uStack_64 = *0x1ba14;
    uStack_60 = *0x1ba18;
    uStack_5c = *0x1ba1c;
    iVar1 = fcn.0001a2e4();
    iVar1 = (**(iVar1 + 0x20))(0x161);
    if (iVar1 != 0) {
        uStack_48 = uStack_68;
        _auStack_44 = uStack_64;
        var_39h._1_4_ = uStack_60;
        stack0xffffffffffffffc4 = uStack_5c;
        iVar1 = (**(*0x1bb10 + 0x138))(2,0x1b2f0,0,auStack_98,auStack_90);
        if (-1 < iVar1) {
            fcn.00010828(0x1b2f0,&uStack_48,apuStack_78,0);
        }
        puVar5 = auStack_88;
        var_31h._1_4_ = uStack_68;
        stack0xffffffffffffffcc = uStack_64;
        var_29h._1_4_ = uStack_60;
        stack0xffffffffffffffd4 = uStack_5c;
        iVar1 = (**(*0x1bb10 + 0x138))(2,0x1b290,0,puVar5,auStack_80);
        bVar6 = iVar1 == 0;
        if (-1 < iVar1) {
            iVar1 = fcn.00010828(0x1b290,&var_31h + 1,auStackX_18,CONCAT71(puVar5 >> 8,1));
            bVar6 = iVar1 == 0;
        }
        while (bVar6) {
            iVar2 = (**(_auStackX_18 + 0x18))
                              (_auStackX_18,&uStack_68,0x19,iVar4,&var_17h + 1,auStack_58,auStackX_8);
            iVar1 = stack0x00000010;
            if (-1 < iVar2) {
                iVar3 = fcn.0001a2e4();
                iVar3 = (**(iVar3 + 0x20))(0x161);
                if (*(iVar1 + 0x10) == iVar3) {
                    stack0x00000020 = 0;
                    (**apuStack_78[0])(apuStack_78[0],stack0x00000010,*(stack0x00000010 + 4),&var_27h + 1);
                    break;
                }
                iVar4 = iVar4 + 1;
                (**(*0x1bb10 + 0x48))(stack0x00000010);
                stack0x00000010 = 0;
            }
            bVar6 = iVar2 == 0;
        }
        if (stack0x00000010 != 0) {
            (**(*0x1bb10 + 0x48))();
        }
    }
    return;
}


/* fcn.00010504 @ 0x10504 */

//WARNING: Variable defined which should be unmapped: var_bp_8h
//WARNING: Variable defined which should be unmapped: var_10h

void fcn.00010504(int64_t arg1,int64_t arg2)

{
    int64_t iVar1;
    uint64_t uVar2;
    int64_t iVar3;
    uchar auStackX_18 [8];
    uint auStackX_20 [2];
    int64_t var_30h_2;
    int64_t var_38h_2;
    uchar auStack_58 [8];
    int64_t iStack_50;
    int64_t var_40h;
    int64_t var_38h;
    int64_t var_30h;
    uint32_t var_28h;
    int64_t var_20h;
    int64_t var_18h;
    int64_t var_10h;
    int64_t var_bp_8h;
    
    iStack_50 = 0;
    var_40h = 0;
    (**(*0x1bb10 + 0x138))(2,0x1b290,0,&var_38h,&var_30h);
    uVar2 = 0;
    if (var_38h != 0) {
        do {
            (**(*0x1bb10 + 0x98))(*(var_30h + uVar2 * 8),0x1b290,&iStack_50);
            if (iStack_50 == 0) {
                return;
            }
            _var_28h = 0;
            auStackX_20[0] = 0;
            iVar1 = (**(iStack_50 + 0x10))(iStack_50,arg1,0,&var_28h,auStackX_18,auStack_58,auStackX_20);
        } while ((iVar1 < 0) && (uVar2 = uVar2 + 1, uVar2 < var_38h));
    }
    (**(*0x1bb10 + 0x48))(var_30h);
    iVar1 = (**(*0x1bb10 + 0x140))(0x1b2f0,0,&var_18h);
    if ((iStack_50 != 0) && (iVar3 = 0, iVar1 == 0)) {
        do {
            iVar1 = (**(iStack_50 + 0x18))(iStack_50,arg1,0x19,iVar3,&var_40h,&var_28h,auStackX_20);
            if (-1 < iVar1) {
                if (*(var_40h + 0x10) == arg2) {
                    var_20h = 0;
                    iVar1 = (**var_18h)(var_18h,var_40h,*(var_40h + 4),&var_20h);
                }
                var_40h = 0;
                iVar3 = iVar3 + 1;
            }
        } while (iVar1 == 0);
    }
    return;
}


/* fcn.0001a23c @ 0x1a23c */

void fcn.0001a23c(int64_t arg1)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001a20c(arg1,arg1);
    if ((arg1_00 != 0) && (arg1 != 0)) {
        fcn.000102a0(arg1_00,arg1);
    }
    return;
}


/* fcn.0001a20c @ 0x1a20c */

ulong fcn.0001a20c(ulong param_1,ulong param_2)

{
    int64_t iVar1;
    ulong auStackX_18 [2];
    
    iVar1 = (**(*0x1bb10 + 0x40))(4,param_2,auStackX_18);
    if (iVar1 < 0) {
        auStackX_18[0] = 0;
    }
    return auStackX_18[0];
}


/* fcn.000102a0 @ 0x102a0 */

int64_t fcn.000102a0(int64_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint64_t uVar2;
    ulong *puVar3;
    
    uVar2 = arg2 & 7;
    puVar3 = arg1;
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


/* fcn.00011954 @ 0x11954 */

void fcn.00011954(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong auStackX_10 [3];
    
    auStackX_10[0] = 0xffffffff;
    (**(*0x1bb10 + 0x28))(1,arg1 & 0xffffffff,((arg2 & 0xfffU) != 0) + (arg2 >> 0xc),auStackX_10);
    *arg3 = auStackX_10[0];
    return;
}


/* fcn.0001a430 @ 0x1a430 */

uint64_t fcn.0001a430(int64_t arg1)

{
    uint64_t uVar1;
    int64_t iVar2;
    uint16_t uVar3;
    int16_t iVar4;
    uint64_t uVar5;
    uint64_t uStackX_8;
    
    uVar5 = 0;
    if ((arg1 != 0) && (uVar1 = fcn.0001a344(arg1,0xf4241), uVar1 < 0xf4241)) {
        for (; (*arg1 == 0x20 || (*arg1 == 9)); arg1 = arg1 + 2) {
        }
        iVar4 = 0x30;
        for (; *arg1 == 0x30; arg1 = arg1 + 2) {
        }
        uVar3 = *arg1;
        if (uVar3 - 0x61 < 0x1a) {
            uVar3 = uVar3 - 0x20;
        }
        if (uVar3 == 0x58) {
            if (*(arg1 + -2) != 0x30) {
                return uVar5;
            }
            arg1 = arg1 + 2;
        }
        uVar1 = 0xffffffffffffffff;
        for (; ((*arg1 - iVar4 < 10 || (*arg1 - 0x41 < 6)) || (*arg1 - 0x61 < 6)); arg1 = arg1 + 2) {
            iVar2 = fcn.0001a400(*arg1);
            if (uVar1 - iVar2 >> 4 < uVar5) {
                return uVar1;
            }
            uVar5 = uVar5 * 0x10 + iVar2;
        }
        return uVar5;
    }
    return uStackX_8;
}


/* fcn.000102e0 @ 0x102e0 */

uint64_t fcn.000102e0(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4)

{
    uint *puVar1;
    uint uVar2;
    uint uVar3;
    uint uVar4;
    int iVar5;
    uint *in_stack_00000028;
    
    iVar5 = arg1;
    if (iVar5 == 0) {
        puVar1 = cpuid_basic_info(0);
    }
    else if (iVar5 == 1) {
        puVar1 = cpuid_Version_info(1);
    }
    else if (iVar5 == 2) {
        puVar1 = cpuid_cache_tlb_info(2);
    }
    else if (iVar5 == 3) {
        puVar1 = cpuid_serial_info(3);
    }
    else if (iVar5 == 4) {
        puVar1 = cpuid_Deterministic_Cache_Parameters_info(4);
    }
    else if (iVar5 == 5) {
        puVar1 = cpuid_MONITOR_MWAIT_Features_info(5);
    }
    else if (iVar5 == 6) {
        puVar1 = cpuid_Thermal_Power_Management_info(6);
    }
    else if (iVar5 == 7) {
        puVar1 = cpuid_Extended_Feature_Enumeration_info(7);
    }
    else if (iVar5 == 9) {
        puVar1 = cpuid_Direct_Cache_Access_info(9);
    }
    else if (iVar5 == 10) {
        puVar1 = cpuid_Architectural_Performance_Monitoring_info(10);
    }
    else if (iVar5 == 0xb) {
        puVar1 = cpuid_Extended_Topology_info(0xb);
    }
    else if (iVar5 == 0xd) {
        puVar1 = cpuid_Processor_Extended_States_info(0xd);
    }
    else if (iVar5 == 0xf) {
        puVar1 = cpuid_Quality_of_Service_info(0xf);
    }
    else if (iVar5 == -0x7ffffffe) {
        puVar1 = cpuid_brand_part1_info(0x80000002);
    }
    else if (iVar5 == -0x7ffffffd) {
        puVar1 = cpuid_brand_part2_info(0x80000003);
    }
    else if (iVar5 == -0x7ffffffc) {
        puVar1 = cpuid_brand_part3_info(0x80000004);
    }
    else {
        puVar1 = cpuid(iVar5);
    }
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    uVar4 = puVar1[2];
    if (arg4 != 0) {
        *arg4 = puVar1[3];
    }
    if (arg2 != 0) {
        *arg2 = uVar2;
    }
    if (arg3 != 0) {
        *arg3 = uVar3;
    }
    if (in_stack_00000028 != NULL) {
        *in_stack_00000028 = uVar4;
    }
    return arg1 & 0xffffffff;
}


/* fcn.0001a6a4 @ 0x1a6a4 */

int64_t fcn.0001a6a4(int64_t arg1)

{
    int64_t iVar1;
    uint32_t uVar2;
    uint64_t uVar3;
    uint64_t uVar4;
    int64_t iStackX_8;
    
    iStackX_8 = 0xffffffff;
    iVar1 = (**(*0x1bb10 + 0x28))(1,10,1,&iStackX_8);
    uVar4 = 0;
    if (-1 < iVar1) {
        *0x1bb58 = iStackX_8;
        fcn.00010320(iStackX_8,0xce7,0);
        *(iStackX_8 + 0xf) = 0x47;
        *(iStackX_8 + 0xe) = 0x37;
        *(iStackX_8 + 0x60) = 100;
        *(iStackX_8 + 0x61) = 0x4b;
        *(iStackX_8 + 0x10) = 0x5f;
        *(iStackX_8 + 0x11) = 1;
        *(iStackX_8 + 0x12) = 5;
        *(iStackX_8 + 0x13) = 10;
        *(iStackX_8 + 0x14) = 0x77;
        *(iStackX_8 + 0x72) = 1;
        *(iStackX_8 + 0x75) = 1;
        *(iStackX_8 + 0x8f) = 500;
        *(iStackX_8 + 0x327) = 1;
        *(iStackX_8 + 0x32f) = 1;
        *(iStackX_8 + 0x330) = 1;
        *(iStackX_8 + 0x333) = 1;
        *(iStackX_8 + 0x334) = 1;
        *(iStackX_8 + 0x335) = 1;
        *(iStackX_8 + 0x336) = 1;
        *(iStackX_8 + 0x337) = 1;
        *(iStackX_8 + 0xb56) = 1;
        *(iStackX_8 + 500) = 1;
        *(iStackX_8 + 0x969) = 1;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x84f + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 6);
        *(iStackX_8 + 0x33d) = 1;
        *(iStackX_8 + 0x33e) = 9;
        *(iStackX_8 + 0x33f) = 4000;
        *(iStackX_8 + 0x343) = 30000;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x347 + iStackX_8) = 9;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x349) = 0;
        *(iStackX_8 + 0x34b) = 0x4b0;
        *(iStackX_8 + 0x34d) = 30000;
        *(iStackX_8 + 0x351) = 0x4b0;
        *(iStackX_8 + 0x353) = 0x4b0;
        *(iStackX_8 + 0x355) = 1000;
        *(iStackX_8 + 0x357) = 1;
        *(iStackX_8 + 0x358) = 7;
        *(iStackX_8 + 0x359) = 0xffff;
        *(iStackX_8 + 0x35b) = 30000;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x35f + iStackX_8) = 0x32;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 4);
        *(iStackX_8 + 0x363) = 7;
        *(iStackX_8 + 0x364) = 0x4150;
        *(iStackX_8 + 0x896) = 0;
        *(iStackX_8 + 0x897) = 0;
        *(iStackX_8 + 0x898) = 0;
        *(iStackX_8 + 0x899) = 0;
        *(iStackX_8 + 0x89a) = 0;
        *(iStackX_8 + 0x89b) = 0;
        *(iStackX_8 + 0x89c) = 0;
        *(iStackX_8 + 0x89d) = 0;
        *(iStackX_8 + 0x89e) = 0;
        *(iStackX_8 + 0x89f) = 0;
        *(iStackX_8 + 0x8a0) = 0;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xa89 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xad6 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x16);
        *(iStackX_8 + 0x90d) = 2;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8a7 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xa95 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xaec + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x16);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8b3 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 10);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xaa1 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xb02 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x16);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8bd + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 10);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xaad + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0xc);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xb18 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 0x16);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x902 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x8c7) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8c8 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x8ca) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8cb + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xab9) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xaba + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x8cd) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8ce + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x8d0) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8d1 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xabc) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xabd + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x8d3) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8d4 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x8d6) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0x8d7 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xabf) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xac0 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc66) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc67 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc69) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc6a + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc6c) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc6d + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc6f) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc70 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc72) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc73 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc75) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc76 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc78) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc79 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc7b) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc7c + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc7e) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc7f + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc81) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc82 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc84) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc85 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc87) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc88 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc8a) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc8b + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc8d) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc8e + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc90) = 0xff;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc91 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xc65) = 3;
        *(iStackX_8 + 0xa17) = 0;
        *(iStackX_8 + 0xa18) = 0x18;
        *(iStackX_8 + 0xa19) = 0x28;
        *(iStackX_8 + 0xa1a) = 0x28;
        *(iStackX_8 + 0xa1b) = 0x28;
        *(iStackX_8 + 0xa1c) = 0x28;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xac2 + iStackX_8) = 0x28;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 6);
        *(iStackX_8 + 0xa1d) = 0x18;
        *(iStackX_8 + 0xa1e) = 0x28;
        *(iStackX_8 + 0xa1f) = 0x28;
        *(iStackX_8 + 0xa20) = 0x28;
        *(iStackX_8 + 0xa21) = 0x28;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xac8 + iStackX_8) = 0x28;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 6);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xad2 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 4);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xa36 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xace) = 0;
        *(iStackX_8 + 0xc32) = 0;
        *(iStackX_8 + 0xc36) = 0;
        *(iStackX_8 + 0xc3a) = 0;
        *(iStackX_8 + 0xc3e) = 0;
        *(iStackX_8 + 0xc94) = 0;
        *(iStackX_8 + 0xb58) = 0;
        *(iStackX_8 + 0xb59) = 0;
        *(iStackX_8 + 0xb5b) = 0;
        *(iStackX_8 + 0xb5d) = 0;
        *(iStackX_8 + 0xb5f) = 0;
        *(iStackX_8 + 0xb61) = 0;
        *(iStackX_8 + 0xb63) = 0;
        *(iStackX_8 + 0xb65) = 0;
        *(iStackX_8 + 0xb67) = 0;
        *(iStackX_8 + 0xb69) = 0;
        *(iStackX_8 + 0xb6b) = 0;
        *(iStackX_8 + 0xb6d) = 0;
        *(iStackX_8 + 0xb6f) = 0;
        *(iStackX_8 + 0xb71) = 0;
        *(iStackX_8 + 0xb73) = 0;
        *(iStackX_8 + 0xb75) = 0;
        *(iStackX_8 + 0xb77) = 0;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc63 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0x904) = 0;
        *(iStackX_8 + 0x905) = 0;
        *(iStackX_8 + 0x906) = 0;
        *(iStackX_8 + 0x907) = 0;
        *(iStackX_8 + 0x908) = 0;
        *(iStackX_8 + 0x909) = 0;
        *(iStackX_8 + 0x90a) = 0;
        *(iStackX_8 + 0x90e) = 0;
        *(iStackX_8 + 0xa11) = 0;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xb87 + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        *(iStackX_8 + 0xb89) = 1;
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xb8a + iStackX_8) = 0;
            uVar3 = uVar3 + 1;
        } while (uVar3 < 2);
        uVar3 = uVar4;
        do {
            *(uVar3 + 0xc2f + iStackX_8) = uVar4;
            uVar2 = uVar4 + 1;
            uVar4 = uVar2;
            uVar3 = uVar3 + 1;
        } while (uVar2 < 2);
        *(iStackX_8 + 0xc31) = 10;
        *(iStackX_8 + 0xb98) = 0;
        *(iStackX_8 + 0xc61) = 1;
        *(iStackX_8 + 0x9e) = 0;
        *(iStackX_8 + 0x2f4) = 0;
        *(iStackX_8 + 0x2f5) = 0x1194;
        iVar1 = 0;
    }
    return iVar1;
}


/* fcn.00010320 @ 0x10320 */

int64_t fcn.00010320(int64_t arg1,int64_t noname_1,int64_t arg2)

{
    uchar *puVar1;
    
    puVar1 = arg1;
    for (; noname_1 != 0; noname_1 = noname_1 + -1) {
        *puVar1 = arg2;
        puVar1 = puVar1 + 1;
    }
    return arg1;
}


/* fcn.0001a1b0 @ 0x1a1b0 */

uchar fcn.0001a1b0(void)

{
    char cVar1;
    uchar uVar2;
    
    cVar1 = fcn.0001a174();
    uVar2 = 1;
    if (cVar1 != '\x01') {
        uVar2 = 1;
        cVar1 = fcn.0001a174();
        if (cVar1 != '\x04') {
            uVar2 = 0;
        }
    }
    return uVar2;
}


/* fcn.0001a174 @ 0x1a174 */

void fcn.0001a174(void)

{
    if (*0x1b489 == -1) {
        if ((*0xc00f8002 & 0xffe0) == 0x5180) {
            *0x1b489 = '\x05';
        }
        else {
            *0x1b489 = (-(((*0xc00f8002 & 0xffe0) - 0x7a00 & 0xffffff7f) != 0) & 0xfbU) + 4;
        }
    }
    return;
}


/* fcn.00019e94 @ 0x19e94 */

uchar fcn.00019e94(uint32_t arg1)

{
    uchar uVar1;
    char cVar2;
    uint8_t uVar3;
    
    uVar3 = arg1;
    if (uVar3 < 7) {
        cVar2 = fcn.0001a1b0();
        if (cVar2 == '\0') {
            if (uVar3 != 0) {
                if (uVar3 == 1) {
                    return 3;
                }
                if (uVar3 == 2) {
                    return 6;
                }
                if (uVar3 == 3) {
                    return 0;
                }
                if (uVar3 == 4) {
                    return 1;
                }
                if (uVar3 != 5) {
                    if (uVar3 == 6) {
                        return 3;
                    }
                    goto code_r0x00019e9f;
                }
            }
        }
        else if (uVar3 != 0) {
            if (uVar3 == 1) {
                return 3;
            }
            if (uVar3 == 2) {
                return 6;
            }
            if (uVar3 == 3) {
                return 0;
            }
            if (uVar3 == 4) {
                return 1;
            }
            if (uVar3 == 5) {
                return 4;
            }
            if (uVar3 == 6) {
                return 5;
            }
            goto code_r0x00019e9f;
        }
        uVar1 = 2;
    }
    else {
code_r0x00019e9f:
        uVar1 = 0xff;
    }
    return uVar1;
}


/* fcn.00019e20 @ 0x19e20 */

uchar fcn.00019e20(uint32_t arg1)

{
    char cVar1;
    uint8_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 < 7) {
        cVar1 = fcn.0001a1b0();
        if (cVar1 == '\0') {
            if (uVar2 == 0) {
                return 0x1e;
            }
            if (uVar2 == 1) {
                return 0x1e;
            }
            if (uVar2 == 2) {
                return 0x12;
            }
            if (uVar2 == 3) {
                return 0x13;
            }
            if (uVar2 == 4) {
                return 0x13;
            }
            if (uVar2 == 5) {
                return 0x13;
            }
            if (uVar2 == 6) {
                return 0x13;
            }
        }
        else {
            if ((uVar2 == 0) || (uVar2 == 1)) {
                return 0x1e;
            }
            if (uVar2 == 2) {
                return 0x12;
            }
            if ((uVar2 == 3) || (uVar2 == 4)) {
                return 0x13;
            }
            if ((uVar2 == 5) || (uVar2 == 6)) {
                return 0x11;
            }
        }
    }
    return 0xff;
}


/* fcn.0001b0fc @ 0x1b0fc */

ulong fcn.0001b0fc(int64_t arg1)

{
    int16_t iVar1;
    uint8_t uVar2;
    
    uVar2 = 1;
    do {
        iVar1 = *(((uVar2 & 7 | (arg1 & 0x1f) << 3) << 0xc | 2) + 0xc0000000);
        if (iVar1 != -1) {
            return CONCAT71(iVar1 >> 8,1);
        }
        uVar2 = uVar2 + 1;
    } while (uVar2 < 8);
    return 0xff00;
}


/* fcn.00019de0 @ 0x19de0 */

uchar fcn.00019de0(uint32_t arg1)

{
    if (7 < arg1) {
        return 0xff;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 0) {
        return 0;
    }
    if (arg1 != 1) {
        if (arg1 == 2) {
            return 2;
        }
        if (arg1 == 3) {
            return 3;
        }
        if (arg1 == 4) {
            return 0;
        }
        if (arg1 != 5) {
            if (arg1 == 6) {
                return 0;
            }
            if (arg1 != 7) {
                return 0xff;
            }
        }
    }
    return 1;
}


/* fcn.00019da4 @ 0x19da4 */

uchar fcn.00019da4(uint32_t arg1)

{
    if (arg1 < 8) {
        arg1 = arg1 & 0xff;
        if ((((arg1 == 0) || (arg1 == 1)) || (arg1 == 2)) || (arg1 == 3)) {
            return 0x15;
        }
        if ((arg1 == 4) || (arg1 == 5)) {
            return 0x19;
        }
        if ((arg1 == 6) || (arg1 == 7)) {
            return 0x10;
        }
    }
    return 0xff;
}


/* fcn.00019f4c @ 0x19f4c */

uchar fcn.00019f4c(uint32_t arg1)

{
    if (6 < arg1) {
        return 0xff;
    }
    arg1 = arg1 & 0xff;
    if (arg1 == 0) {
        return 0;
    }
    if (arg1 == 1) {
        return 1;
    }
    if (arg1 != 2) {
        if (arg1 == 3) {
            return 0;
        }
        if (arg1 == 4) {
            return 1;
        }
        if (arg1 != 5) {
            if (arg1 != 6) {
                return 0xff;
            }
            return 3;
        }
    }
    return 2;
}


/* fcn.00019f14 @ 0x19f14 */

uchar fcn.00019f14(uint32_t arg1)

{
    if (arg1 < 7) {
        arg1 = arg1 & 0xff;
        if ((arg1 == 0) || (arg1 == 1)) {
            return 0x1e;
        }
        if (arg1 == 2) {
            return 0x19;
        }
        if ((((arg1 == 3) || (arg1 == 4)) || (arg1 == 5)) || (arg1 == 6)) {
            return 0x11;
        }
    }
    return 0xff;
}


/* fcn.0001a320 @ 0x1a320 */

void fcn.0001a320(ulong noname_0,int64_t arg1)

{
    int64_t iVar1;
    
    iVar1 = fcn.0001a2a8();
    //WARNING: Could not recover jumptable at 0x0001a33d. Too many branches
    //WARNING: Treating indirect jump as call
    (**(iVar1 + 8))(0x1b210,arg1);
    return;
}


/* fcn.0001a370 @ 0x1a370 */

ulong fcn.0001a370(int64_t arg1,int64_t arg2,int64_t arg3)

{
    uint64_t uVar1;
    
    if (((arg2 == 0) || (arg1 == 0)) || (1000000 < arg3)) {
        return 0x8000000000000002;
    }
    uVar1 = fcn.0001a344(arg1,arg3);
    if (arg3 <= uVar1) {
        return 0x8000000000000005;
    }
    if (arg1 <= arg2) {
        if (arg2 < arg1 + (uVar1 + 1) * 2) {
            return 0x800000000000000f;
        }
        if (arg1 < arg2) goto code_r0x0001a3ed;
    }
    if (arg1 < arg2 + arg3) {
        return 0x800000000000000f;
    }
code_r0x0001a3ed:
    for (; *arg1 != 0; arg1 = arg1 + 2) {
        *arg2 = *arg1;
        arg2 = arg2 + 1;
    }
    *arg2 = 0;
    return 0;
}


/* fcn.00011c98 @ 0x11c98 */

ulong fcn.00011c98(int64_t arg1,int64_t arg2,int64_t arg3)

{
    ulong uVar1;
    uint16_t uVar2;
    int16_t iVar3;
    uint uVar4;
    uint64_t uVar5;
    uint64_t uVar6;
    int64_t iVar7;
    uint8_t uVar8;
    uint16_t uVar9;
    uint16_t uVar10;
    
    uVar5 = 0;
    uVar8 = 0;
    do {
        if (uVar8 == 0) {
            uVar4 = fcn.0001a430(arg1);
            uVar2 = uVar4 >> 0x10;
            *arg2 = CONCAT22(uVar4 << 8 | uVar4 >> 8,uVar2 << 8 | uVar2 >> 8) << 0x20;
        }
        else {
            if (uVar8 == 1) {
                uVar2 = fcn.0001a430(arg1);
                uVar5 = uVar2 << 8 | uVar2 >> 8;
                uVar6 = uVar5 << 0x10;
            }
            else {
                if (uVar8 != 2) {
                    if (uVar8 != 3) {
                        return 0x8000000000000003;
                    }
                    uVar5 = fcn.0001a430(arg1);
                    goto code_r0x00011d42;
                }
                uVar2 = fcn.0001a430(arg1);
                uVar6 = uVar2 << 8 | uVar2 >> 8;
                uVar5 = uVar6;
            }
            *arg2 = *arg2 + uVar6;
        }
code_r0x00011d42:
        iVar3 = *arg1;
        if (iVar3 != 0x2d) {
            do {
                if (iVar3 == 0) break;
                arg1 = arg1 + 2;
                iVar3 = *arg1;
            } while (iVar3 != 0x2d);
            if (*arg1 != 0x2d) {
                return 0x8000000000000003;
            }
        }
        arg1 = arg1 + 2;
        uVar8 = uVar8 + 1;
        if (3 < uVar8) {
            iVar7 = fcn.0001a430(arg1);
            uVar1 = *arg2;
            iVar7 = (uVar5 << 0x30) + iVar7;
            uVar2 = uVar1 >> 0x10;
            uVar9 = uVar1 >> 0x20;
            uVar10 = uVar1 >> 0x30;
            *arg2 = CONCAT62(CONCAT42(CONCAT22(uVar1 << 8 | uVar1 >> 8,uVar2 << 8 | uVar2 >> 8),
                                      uVar9 << 8 | uVar9 >> 8),uVar10 << 8 | uVar10 >> 8);
            uVar2 = iVar7 >> 0x10;
            uVar9 = iVar7 >> 0x20;
            uVar10 = iVar7 >> 0x30;
            *arg3 = CONCAT22(iVar7 << 8 | iVar7 >> 8,uVar2 << 8 | uVar2 >> 8) << 0x20 |
                    (uVar9 << 8 | uVar9 >> 8) << 0x10 | uVar10 << 8 | uVar10 >> 8;
            return 0;
        }
    } while( true );
}


/* fcn.00019b84 @ 0x19b84 */

ulong fcn.00019b84(void)

{
    ulong uVar1;
    int64_t iVar2;
    char *pcVar3;
    uint32_t uVar4;
    char cVar5;
    uint32_t uVar6;
    uint64_t uVar7;
    char *arg1;
    uint64_t uVar8;
    int iVar9;
    int iVar10;
    uint32_t auStackX_8 [2];
    int64_t iStackX_10;
    ulong uStackX_18;
    ulong *puStackX_20;
    
    uVar1 = (**(*0x1bb10 + 0x140))(0x1b2f0,0,&puStackX_20);
    iVar2 = fcn.0001a2a8();
    pcVar3 = (**(iVar2 + 0x28))(0x1b210,0x5000001a);
    if (pcVar3 == NULL) {
        uVar1 = 0x8000000000000002;
    }
    else if (*pcVar3 != '\0') {
        arg1 = pcVar3 + 0x1c;
        for (uVar7 = *(pcVar3 + 0x12); uVar7 != 0; uVar7 = uVar7 - 1) {
            uVar8 = arg1[0x5e];
            iVar9 = 0;
            iVar10 = 0;
            if (uVar8 != 0) {
                pcVar3 = arg1 + 0x5f;
                iVar9 = 0;
                iVar10 = 0;
                do {
                    if (*pcVar3 == '\x01') {
                        pcVar3 = pcVar3 + 5;
                        iVar9 = iVar9 + 1;
                    }
                    else if (*pcVar3 == '\x02') {
                        pcVar3 = pcVar3 + 0xf;
                        iVar10 = iVar10 + 1;
                    }
                    uVar8 = uVar8 - 1;
                } while (uVar8 != 0);
            }
            uVar6 = iVar10 * 0x21 + iVar9 * 0x23 + 2;
            uVar4 = uVar6 + 0x37;
            cVar5 = uVar6;
            if (uVar6 < 0xfe) {
                *0x1bb00 = 10;
                uVar4 = uVar6 + 0x39;
code_r0x00019c64:
                *0x1bb01 = cVar5;
            }
            else if (uVar6 < 0xfffd) {
                *0x1bb00 = 0xb;
                *0x1bb02 = uVar6 >> 8;
                uVar4 = uVar6 + 0x3a;
                goto code_r0x00019c64;
            }
            if (uVar6 < 0x3d) {
                *0x1b421 = cVar5 + 3;
                uVar4 = uVar4 + 2;
            }
            else if (uVar6 < 0xfff) {
                *0x1b421 = cVar5 + 5U & 0xf | 0x40;
                *0x1b422 = uVar6 + 5 >> 4;
                uVar4 = uVar4 + 3;
            }
            iVar9 = 0;
            if (uVar4 < 0x3f) {
                iVar9 = 3;
                *0x1b3aa = uVar4;
            }
            else if (uVar4 < 0xffe) {
                *0x1b3aa = uVar4 + 2 & 0xf | 0x40;
                *0x1b3ab = uVar4 + 2 >> 4;
                iVar9 = 4;
            }
            uVar4 = uVar4 + 10 + iVar9;
            if (uVar4 < 0x3f) {
                *0x1b3a1 = uVar4;
            }
            else if (uVar4 < 0xffe) {
                uVar4 = uVar4 + 2;
                *0x1b3a1 = uVar4 & 0xf | 0x40;
                *0x1b3a2 = uVar4 >> 4;
            }
            uVar4 = uVar4 + 0x35;
            auStackX_8[0] = uVar4;
            (**(*0x1bb10 + 0x28))(1,10,(uVar4 >> 0xc) + ((uVar4 & 0xfff) != 0),&iStackX_10);
            if (uVar4 != 0) {
                fcn.000102a0(iStackX_10,uVar4);
            }
            fcn.00019810(arg1,auStackX_8,iStackX_10);
            uStackX_18 = 0;
            uVar1 = (**puStackX_20)(puStackX_20,iStackX_10,*(iStackX_10 + 4));
            arg1 = arg1 + *(arg1 + 4);
        }
    }
    return uVar1;
}


/* fcn.000117bc @ 0x117bc */

//WARNING: Variable defined which should be unmapped: var_9h
//WARNING: Variable defined which should be unmapped: var_1h
//WARNING: Variable defined which should be unmapped: var_11h
//WARNING: Variable defined which should be unmapped: var_19h

ulong fcn.000117bc(int64_t arg1)

{
    int64_t iVar1;
    int64_t iVar2;
    uchar *puVar3;
    int64_t var_fh;
    int64_t var_17h;
    uchar auStackX_18 [7];
    int64_t var_27h;
    uint32_t var_67h;
    int64_t var_6fh;
    int64_t var_77h;
    int64_t var_7fh;
    ulong uStack_78;
    uchar auStack_70 [8];
    uchar auStack_68 [8];
    uchar auStack_60 [8];
    ulong *puStack_58;
    uchar auStack_50 [8];
    uint uStack_48;
    uint uStack_44;
    uint uStack_40;
    uint uStack_3c;
    uint uStack_38;
    uint uStack_34;
    uint uStack_30;
    uint uStack_2c;
    int64_t var_19h;
    int64_t var_11h;
    int64_t var_9h;
    int64_t var_1h;
    
    uStack_48 = *arg1;
    uStack_44 = *(arg1 + 4);
    uStack_40 = *(arg1 + 8);
    uStack_3c = *(arg1 + 0xc);
    iVar2 = 0;
    uStack_78 = 0;
    _auStackX_18 = 0;
    stack0x00000020 = 0;
    iVar1 = (**(*0x1bb10 + 0x138))(2,0x1b2f0,0,&var_fh + 1,auStack_70);
    if (-1 < iVar1) {
        fcn.00010828(0x1b2f0,&uStack_48,&puStack_58,0);
    }
    uStack_38 = *arg1;
    uStack_34 = *(arg1 + 4);
    uStack_30 = *(arg1 + 8);
    uStack_2c = *(arg1 + 0xc);
    puVar3 = auStack_68;
    iVar1 = (**(*0x1bb10 + 0x138))(2,0x1b290,0,puVar3,auStack_60);
    if (-1 < iVar1) {
        iVar1 = fcn.00010828(0x1b290,&uStack_38,&var_27h + 1,CONCAT71(puVar3 >> 8,1));
    }
    while (iVar1 == 0) {
        iVar1 = (**(unique0x100001ea + 0x18))
                          (unique0x100001ea,arg1,0x19,iVar2,auStackX_18,auStack_50,&var_17h + 1);
        if (-1 < iVar1) {
            fcn.0001091c(_auStackX_18,&var_fh + 1);
            uStack_78 = 0;
            if (var_fh._1_4_ != 1) {
                iVar1 = (**puStack_58)(puStack_58,_auStackX_18,*(_auStackX_18 + 4),&uStack_78);
            }
            iVar2 = iVar2 + 1;
            (**(*0x1bb10 + 0x48))();
            _auStackX_18 = 0;
        }
        if (_auStackX_18 != 0) {
            (**(*0x1bb10 + 0x48))();
            _auStackX_18 = 0;
        }
    }
    return 0;
}


/* fcn.0001a268 @ 0x1a268 */

void fcn.0001a268(ulong noname_0,int64_t arg1,int64_t arg2)

{
    int64_t arg1_00;
    
    arg1_00 = fcn.0001a20c();
    if (((arg1_00 != 0) && (arg1 != 0)) && (arg1_00 != arg2)) {
        section..text(arg1_00,arg2,arg1);
    }
    return;
}


/* fcn.00019810 @ 0x19810 */

ulong fcn.00019810(int64_t arg1,int64_t arg2,uint32_t arg3)

{
    char *pcVar1;
    char *pcVar2;
    uint32_t uVar3;
    char *pcVar4;
    uint in_R8;
    uint64_t uVar5;
    
    pcVar2 = CONCAT44(in_R8,arg3);
    if (pcVar2 != "SSDT\b\x01") {
        section..text(pcVar2,0x1b3f8,0x27);
    }
    *(pcVar2 + 4) = *arg2;
    if (pcVar2 + 10 != arg1 + 10) {
        section..text(pcVar2 + 10,arg1 + 10,6);
    }
    if (pcVar2 + 0x10 != arg1 + 0x10) {
        section..text(pcVar2 + 0x10,arg1 + 0x10,8);
    }
    if (pcVar2 + 0x27 != 0x1b440) {
        section..text(pcVar2 + 0x27,0x1b440,0xd);
    }
    pcVar2[0x31] = '0';
    pcVar2 = pcVar2 + 0x34;
    uVar3 = (*0x1b3a1 >> 6) + 2;
    if (pcVar2 != 0x1b3a0) {
        section..text(pcVar2,0x1b3a0,uVar3);
    }
    pcVar2 = pcVar2 + uVar3;
    if (pcVar2 != "\\._SB_PCIX") {
        section..text(pcVar2,0x1b450,10);
    }
    pcVar2[9] = '0';
    pcVar2 = pcVar2 + 10;
    uVar3 = (*0x1b3aa >> 6) + 3;
    if (pcVar2 != 0x1b3a8) {
        section..text(pcVar2,0x1b3a8,uVar3);
    }
    pcVar2 = pcVar2 + uVar3;
    if (arg1 + 0x24 != str.TMP1) {
        section..text(0x1b45c,arg1 + 0x24,4);
    }
    if (pcVar2 != str.TMP1) {
        section..text(pcVar2,0x1b45c,4);
    }
    if (pcVar2 + 4 != "\b_HID\rINT00000") {
        section..text(pcVar2 + 4,0x1b3e8,0xf);
    }
    if (pcVar2 + 10 != arg1 + 0x28) {
        section..text(pcVar2 + 10,arg1 + 0x28,8);
    }
    if (pcVar2 + 0x13 != "\b_CID\rINT00000") {
        section..text(pcVar2 + 0x13,0x1b430,0xf);
    }
    if (pcVar2 + 0x19 != arg1 + 0x30) {
        section..text(pcVar2 + 0x19,arg1 + 0x30,8);
    }
    str._b_UID[5] = *(arg1 + 0x38);
    if (pcVar2 + 0x22 != "\b_UID") {
        section..text(pcVar2 + 0x22,0x1b428,6);
    }
    if (pcVar2 + 0x28 != str._b_CRS) {
        section..text(pcVar2 + 0x28,0x1b484,5);
    }
    uVar3 = (*0x1b421 >> 6) + 2;
    pcVar2 = pcVar2 + 0x2d;
    if (pcVar2 != 0x1b420) {
        section..text(pcVar2,0x1b420,uVar3);
    }
    pcVar2 = pcVar2 + uVar3;
    if (*0x1bb00 == '\n') {
        uVar3 = 2;
    }
    else if (*0x1bb00 == '\v') {
        uVar3 = 3;
    }
    if (pcVar2 != 0x1bb00) {
        section..text(pcVar2,0x1bb00,uVar3);
    }
    uVar5 = 0;
    pcVar2 = pcVar2 + uVar3;
    if (*(arg1 + 0x5e) != '\0') {
        pcVar4 = arg1 + 0x5f;
        do {
            if (*pcVar4 == '\x01') {
                if (pcVar2 != str.TMP1 + 4) {
                    section..text(pcVar2,0x1b460,0x23);
                }
                if (pcVar4[4] == '\x01') {
                    pcVar2[7] = pcVar2[7] | 0x10;
                    pcVar2[4] = '\0';
code_r0x00019afa:
                    pcVar2[0x17] = pcVar4[2];
                    pcVar2[0x18] = pcVar4[3];
                }
                else if (pcVar4[4] == '\x02') {
                    pcVar2[7] = pcVar2[7] & 0xf;
                    pcVar2[4] = '\x01';
                    goto code_r0x00019afa;
                }
                pcVar4 = pcVar4 + 5;
                pcVar2 = pcVar2 + 0x23;
            }
            else if (*pcVar4 == '\x02') {
                if (pcVar2 != 0x1b3c0) {
                    section..text(pcVar2,0x1b3c0,0x21);
                }
                *(pcVar2 + 0x10) = *(pcVar4 + 4);
                *(pcVar2 + 0xc) = *(pcVar4 + 8);
                pcVar1 = pcVar4 + 0xc;
                pcVar4 = pcVar4 + 0xf;
                pcVar2[0x1f] = *pcVar1 + '0';
                pcVar2 = pcVar2 + 0x21;
            }
            uVar5 = uVar5 + 1;
        } while (uVar5 < *(arg1 + 0x5e));
    }
    if (pcVar2 != 0x1b424) {
        section..text(pcVar2,0x1b424,2);
    }
    *0x1b3b9 = (*(arg1 + 0x5d) != '\x01') - 1U & 0xf;
    if (pcVar2 + 2 != 0x1b3b0) {
        section..text(pcVar2 + 2,0x1b3b0,10);
    }
    return 0;
}


/* fcn.0001a1d4 @ 0x1a1d4 */

ulong fcn.0001a1d4(void)

{
    char cVar1;
    
    cVar1 = fcn.0001a174();
    if ((((cVar1 != '\x02') && (cVar1 = fcn.0001a174(), cVar1 != '\x05')) && (cVar1 = fcn.0001a174(), cVar1 != '\x06')
        ) && (cVar1 = fcn.0001a174(), cVar1 != '\x03')) {
        return 0;
    }
    return 1;
}


/* fcn.0001b150 @ 0x1b150 */

uint64_t fcn.0001b150(int64_t arg1)

{
    uint16_t uVar1;
    char cVar2;
    uint64_t uVar3;
    int64_t iVar4;
    uint64_t uVar5;
    uint32_t auStackX_8 [8];
    
    uVar5 = arg1 & 0xffffffff;
    cVar2 = fcn.0001a1d4();
    uVar3 = 0;
    if (((arg1 >> 0x18 & 0xf) == (cVar2 != '\0') + 8) &&
       (uVar3 = fcn.0001b1c0(auStackX_8), (uVar5 >> 0x10 & 0x1f) < auStackX_8[0])) {
        iVar4 = fcn.0001b1c0(auStackX_8);
        uVar1 = *((uVar5 >> 0x10 & 0x1f) * 0x1e + 0x1c + iVar4);
        uVar3 = uVar1;
        if ((uVar5 & 0x1ff) < uVar1) {
            return CONCAT71(uVar1 >> 8,1);
        }
    }
    return uVar3 & 0xffffffffffffff00;
}


/* fcn.00019f88 @ 0x19f88 */

ulong fcn.00019f88(int64_t arg1,int64_t arg2,int64_t arg3,int64_t arg4,int64_t arg_30h,int64_t arg_38h)

{
    char cVar1;
    ulong uVar2;
    uint32_t uVar3;
    uint64_t uVar4;
    int64_t iVar5;
    int64_t iVar6;
    int64_t iVar7;
    uint32_t uVar8;
    int64_t var_30h;
    int32_t var_28h;
    int64_t var_20h;
    int32_t var_18h;
    uint32_t var_10h;
    int32_t var_ch;
    int32_t var_8h;
    
    fcn.000102a0(&var_30h,0xc);
    fcn.000102a0(&var_20h,0xc);
    uVar8 = 0xf;
    var_10h = *0xfe001920 & 0xf;
    var_ch = *0xfe001920 >> 4 & 0xf;
    var_8h = *0xfe001920 >> 8 & 0xf;
    cVar1 = fcn.0001a1d4();
    if (cVar1 == '\0') {
        iVar6 = 0x1b510;
    }
    else {
        iVar6 = 0x1b4a0;
        uVar8 = 0xd;
    }
    iVar5 = 0;
    iVar7 = 3;
    do {
        uVar4 = 0;
        do {
            if (*(iVar6 + 5 + uVar4 * 8) == *(&var_10h + iVar5)) {
                *(&var_30h + iVar5) = *(iVar6 + uVar4 * 8);
                *(&var_20h + iVar5) = *(iVar6 + 4 + uVar4 * 8);
                break;
            }
            uVar3 = uVar4 + 1;
            uVar4 = uVar3;
        } while (uVar3 < uVar8);
        iVar5 = iVar5 + 4;
        iVar7 = iVar7 + -1;
        if (iVar7 == 0) {
            if (((var_30h == 0) || (var_30h._4_4_ == 0)) || (var_28h == 0)) {
                uVar2 = 0x8000000000000003;
            }
            else {
                *arg1 = var_30h;
                *arg2 = var_20h;
                *arg3 = var_30h._4_4_;
                *arg4 = var_20h._4_4_;
                *arg_30h = var_28h;
                *arg_38h = var_18h;
                uVar2 = 0;
            }
            return uVar2;
        }
    } while( true );
}


/* fcn.0001a344 @ 0x1a344 */

uint64_t fcn.0001a344(uint32_t arg1,int64_t arg2)

{
    uint64_t uVar1;
    uint in_register_0000000c;
    
    uVar1 = 0;
    if ((CONCAT44(in_register_0000000c,arg1) != 0) && (*CONCAT44(in_register_0000000c,arg1) != 0)) {
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


/* fcn.0001a400 @ 0x1a400 */

int64_t fcn.0001a400(int64_t arg1)

{
    int iVar1;
    uint16_t uVar2;
    
    uVar2 = arg1;
    if (uVar2 - 0x30 < 10) {
        iVar1 = (arg1 & 0xffff) - 0x30;
    }
    else {
        if (uVar2 - 0x61 < 0x1a) {
            uVar2 = uVar2 - 0x20;
        }
        iVar1 = uVar2 - 0x37;
    }
    return iVar1;
}


/* fcn.0001a5c0 @ 0x1a5c0 */

void fcn.0001a5c0(void)

{
    (**(*0x1bb10 + 0x140))(0x1b300,0,0x1bb38);
    //WARNING: Could not recover jumptable at 0x0001a5fc. Too many branches
    //WARNING: Treating indirect jump as call
    (**(*0x1bb10 + 0x140))(0x1b2f0,0,0x1bb40);
    return;
}


/* fcn.0001b088 @ 0x1b088 */

ulong fcn.0001b088(void)

{
    uint64_t uVar1;
    uint32_t auStackX_8 [8];
    
    fcn.000102e0(1,auStackX_8,0,0);
    uVar1 = (auStackX_8[0] >> 8 & 0xf) - 4;
    return CONCAT71(uVar1 >> 8,1 < uVar1);
}


/* fcn.0001b1c0 @ 0x1b1c0 */

ulong fcn.0001b1c0(uint *param_1)

{
    char cVar1;
    ulong uVar2;
    
    cVar1 = fcn.0001a1d4();
    if (cVar1 == '\0') {
        *param_1 = 0x13;
        uVar2 = 0x1b590;
    }
    else {
        *param_1 = 0x12;
        uVar2 = 0x1b7d0;
    }
    return uVar2;
}


