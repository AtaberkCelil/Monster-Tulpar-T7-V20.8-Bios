/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20260930 (64-bit version)
 * Copyright (c) 2000 - 2026 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT_05.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x00002E3C (11836)
 *     Revision         0x01
 *     Checksum         0xF7
 *     OEM ID           "OemNv1"
 *     OEM Table ID     "OemNv1T"
 *     OEM Revision     0x00001000 (4096)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20200717 (538969879)
 */
DefinitionBlock ("", "SSDT", 1, "OemNv1", "OemNv1T", 0x00001000)
{
    External (_SB_.GGIV, MethodObj)    // 1 Arguments
    External (_SB_.PC00, DeviceObj)
    External (_SB_.PC00.GFX0, DeviceObj)
    External (_SB_.PC00.GFX0._DSM, MethodObj)    // 4 Arguments
    External (_SB_.PC00.GFX0.DD02._DCS, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG1, DeviceObj)
    External (_SB_.PC00.PEG1.CEDR, IntObj)
    External (_SB_.PC00.PEG1.DL23, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG1.L23D, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG1.LREN, IntObj)
    External (_SB_.PC00.PEG1.PEGP, DeviceObj)
    External (_SB_.PC00.PEG1.PEGP._ADR, DeviceObj)
    External (_SB_.PC00.PEG1.PEGP._PS0, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG1.PRBN, IntObj)
    External (_SB_.PC00.PEG1.PXP_._OFF, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG1.PXP_._ON_, MethodObj)    // 0 Arguments
    External (_SB_.PR00, DeviceObj)
    External (_SB_.PR01, ProcessorObj)
    External (_SB_.PR02, ProcessorObj)
    External (_SB_.PR03, ProcessorObj)
    External (_SB_.PR04, ProcessorObj)
    External (_SB_.PR05, ProcessorObj)
    External (_SB_.PR06, ProcessorObj)
    External (_SB_.PR07, ProcessorObj)
    External (_SB_.PR08, ProcessorObj)
    External (_SB_.PR09, ProcessorObj)
    External (_SB_.PR10, ProcessorObj)
    External (_SB_.PR11, ProcessorObj)
    External (_SB_.PR12, ProcessorObj)
    External (_SB_.PR13, ProcessorObj)
    External (_SB_.PR14, ProcessorObj)
    External (_SB_.PR15, ProcessorObj)
    External (_SB_.PR16, ProcessorObj)
    External (_SB_.PR17, ProcessorObj)
    External (_SB_.PR18, ProcessorObj)
    External (_SB_.PR19, ProcessorObj)
    External (_SB_.SGOV, MethodObj)    // 2 Arguments
    External (BRTL, UnknownObj)
    External (CHPV, UnknownObj)
    External (DID1, UnknownObj)
    External (DID2, UnknownObj)
    External (DID3, UnknownObj)
    External (DID4, UnknownObj)
    External (DID5, UnknownObj)
    External (DID6, UnknownObj)
    External (DID7, UnknownObj)
    External (DID8, UnknownObj)
    External (EBAS, UnknownObj)
    External (HGFL, UnknownObj)
    External (HGMD, UnknownObj)
    External (HRA0, UnknownObj)
    External (HRE0, UnknownObj)
    External (HRG0, UnknownObj)
    External (IOBS, UnknownObj)
    External (NVGA, UnknownObj)
    External (NVHA, UnknownObj)
    External (NXD1, UnknownObj)
    External (NXD2, UnknownObj)
    External (NXD3, UnknownObj)
    External (NXD4, UnknownObj)
    External (NXD5, UnknownObj)
    External (NXD6, UnknownObj)
    External (NXD7, UnknownObj)
    External (NXD8, UnknownObj)
    External (OSYS, UnknownObj)
    External (P1GP, UnknownObj)
    External (P1RE, UnknownObj)
    External (P1RP, UnknownObj)
    External (P8XH, MethodObj)    // 2 Arguments
    External (PWA0, UnknownObj)
    External (PWE0, UnknownObj)
    External (PWG0, UnknownObj)
    External (SGGP, UnknownObj)
    External (SSMP, UnknownObj)
    External (TCNT, FieldUnitObj)
    External (XBAS, UnknownObj)

    Scope (\_SB.PC00)
    {
        Method (SGPO, 3, Serialized)
        {
            If ((Arg1 == Zero))
            {
                Arg2 = ~Arg2
                Arg2 &= One
            }

            If (CondRefOf (\_SB.SGOV))
            {
                \_SB.SGOV (Arg0, Arg2)
            }
        }
    }

    Scope (\_SB.PC00.PEG1.PEGP)
    {
        Name (LTRE, Zero)
        OperationRegion (MSID, SystemMemory, EBAS, 0x0500)
        Field (MSID, DWordAcc, NoLock, Preserve)
        {
            VEID,   16, 
            Offset (0x40), 
            NVID,   32, 
            Offset (0x4C), 
            ATID,   32
        }
    }

    Scope (\_SB.PC00.PEG1)
    {
        OperationRegion (RPCX, SystemMemory, ((\XBAS + 0x8000) + Zero), 0x1000)
        Field (RPCX, AnyAcc, NoLock, Preserve)
        {
            Offset (0x04), 
            CMDR,   8, 
            Offset (0x19), 
            PRBN,   8, 
            Offset (0x4A), 
            CEDR,   1, 
            Offset (0x50), 
            ASPM,   2, 
                ,   2, 
            LNKD,   1, 
            Offset (0x69), 
                ,   2, 
            LREN,   1, 
            Offset (0xA4), 
            D0ST,   2
        }
    }

    Scope (\_SB.PC00.PEG1.PEGP)
    {
        OperationRegion (PCIM, SystemMemory, (\XBAS + (\_SB.PC00.PEG1.PRBN << 0x14)), 0x0600)
        Field (PCIM, DWordAcc, NoLock, Preserve)
        {
            Offset (0x04), 
            CMDR,   8, 
            VGAR,   2000, 
            Offset (0x48B), 
                ,   1, 
            NHDA,   1
        }

        Name (VGAB, Buffer (0xFA)
        {
             0x00                                             // .
        })
        OperationRegion (NVHM, SystemMemory, NVHA, 0x00030400)
        Field (NVHM, DWordAcc, NoLock, Preserve)
        {
            NVSG,   128, 
            NVSZ,   32, 
            NVVR,   32, 
            NVHO,   32, 
            RVBS,   32, 
            RBF1,   262144, 
            RBF2,   262144, 
            RBF3,   262144, 
            RBF4,   262144, 
            RBF5,   262144, 
            RBF6,   262144, 
            MXML,   32, 
            MXM3,   1600
        }

        Name (OMPR, 0x02)
        Name (DGPS, Zero)
        Name (DPST, One)
        Name (NCSM, Zero)
        Name (NCIN, Zero)
        Name (GPRF, Zero)
        Method (_DOD, 0, NotSerialized)  // _DOD: Display Output Devices
        {
            Return (Package (0x01)
            {
                0x8000A450
            })
        }

        Device (EDP1)
        {
            Method (_ADR, 0, Serialized)  // _ADR: Address
            {
                Return (0x8000A450)
            }

            Method (_DCS, 0, NotSerialized)  // _DCS: Display Current Status
            {
                Return (\_SB.PC00.GFX0.DD02._DCS ())
            }

            Method (_DSS, 1, NotSerialized)  // _DSS: Device Set State
            {
            }

            Method (_BCL, 0, NotSerialized)  // _BCL: Brightness Control Levels
            {
                Return (Package (0x67)
                {
                    0x50, 
                    0x32, 
                    Zero, 
                    One, 
                    0x02, 
                    0x03, 
                    0x04, 
                    0x05, 
                    0x06, 
                    0x07, 
                    0x08, 
                    0x09, 
                    0x0A, 
                    0x0B, 
                    0x0C, 
                    0x0D, 
                    0x0E, 
                    0x0F, 
                    0x10, 
                    0x11, 
                    0x12, 
                    0x13, 
                    0x14, 
                    0x15, 
                    0x16, 
                    0x17, 
                    0x18, 
                    0x19, 
                    0x1A, 
                    0x1B, 
                    0x1C, 
                    0x1D, 
                    0x1E, 
                    0x1F, 
                    0x20, 
                    0x21, 
                    0x22, 
                    0x23, 
                    0x24, 
                    0x25, 
                    0x26, 
                    0x27, 
                    0x28, 
                    0x29, 
                    0x2A, 
                    0x2B, 
                    0x2C, 
                    0x2D, 
                    0x2E, 
                    0x2F, 
                    0x30, 
                    0x31, 
                    0x32, 
                    0x33, 
                    0x34, 
                    0x35, 
                    0x36, 
                    0x37, 
                    0x38, 
                    0x39, 
                    0x3A, 
                    0x3B, 
                    0x3C, 
                    0x3D, 
                    0x3E, 
                    0x3F, 
                    0x40, 
                    0x41, 
                    0x42, 
                    0x43, 
                    0x44, 
                    0x45, 
                    0x46, 
                    0x47, 
                    0x48, 
                    0x49, 
                    0x4A, 
                    0x4B, 
                    0x4C, 
                    0x4D, 
                    0x4E, 
                    0x4F, 
                    0x50, 
                    0x51, 
                    0x52, 
                    0x53, 
                    0x54, 
                    0x55, 
                    0x56, 
                    0x57, 
                    0x58, 
                    0x59, 
                    0x5A, 
                    0x5B, 
                    0x5C, 
                    0x5D, 
                    0x5E, 
                    0x5F, 
                    0x60, 
                    0x61, 
                    0x62, 
                    0x63, 
                    0x64
                })
            }

            Method (_BCM, 1, NotSerialized)  // _BCM: Brightness Control Method
            {
            }
        }

        Method (SGST, 0, Serialized)
        {
            If ((HGMD & 0x0F))
            {
                If ((SGGP != One))
                {
                    Return (0x0F)
                }

                Return (Zero)
            }

            If ((\_SB.PC00.PEG1.PEGP.VEID != 0xFFFF))
            {
                Return (0x0F)
            }

            Return (Zero)
        }

        Method (_PS0, 0, NotSerialized)  // _PS0: Power State 0
        {
            If ((DGPS != Zero))
            {
                _ON ()
                DGPS = Zero
            }
        }

        Method (_PS3, 0, NotSerialized)  // _PS3: Power State 3
        {
            If ((OMPR == 0x03))
            {
                If ((DGPS == Zero))
                {
                    _OFF ()
                    DGPS = One
                }

                OMPR = 0x02
            }
        }

        Method (_ROM, 2, NotSerialized)  // _ROM: Read-Only Memory
        {
            Local0 = Arg0
            Local1 = Arg1
            If ((Local1 > 0x1000))
            {
                Local1 = 0x1000
            }

            If ((Local0 > 0x00030000))
            {
                Return (Buffer (Local1)
                {
                     0x00                                             // .
                })
            }

            Local3 = (Local1 * 0x08)
            Name (ROM1, Buffer (0x8000)
            {
                 0x00                                             // .
            })
            Name (ROM2, Buffer (Local1)
            {
                 0x00                                             // .
            })
            If ((Local0 < 0x8000))
            {
                ROM1 = RBF1 /* \_SB_.PC00.PEG1.PEGP.RBF1 */
            }
            ElseIf ((Local0 < 0x00010000))
            {
                Local0 -= 0x8000
                ROM1 = RBF2 /* \_SB_.PC00.PEG1.PEGP.RBF2 */
            }
            ElseIf ((Local0 < 0x00018000))
            {
                Local0 -= 0x00010000
                ROM1 = RBF3 /* \_SB_.PC00.PEG1.PEGP.RBF3 */
            }
            ElseIf ((Local0 < 0x00020000))
            {
                Local0 -= 0x00018000
                ROM1 = RBF4 /* \_SB_.PC00.PEG1.PEGP.RBF4 */
            }
            ElseIf ((Local0 < 0x00028000))
            {
                Local0 -= 0x00020000
                ROM1 = RBF5 /* \_SB_.PC00.PEG1.PEGP.RBF5 */
            }
            ElseIf ((Local0 < 0x00030000))
            {
                Local0 -= 0x00028000
                ROM1 = RBF6 /* \_SB_.PC00.PEG1.PEGP.RBF6 */
            }

            Local2 = (Local0 * 0x08)
            CreateField (ROM1, Local2, Local3, TMPB)
            ROM2 = TMPB /* \_SB_.PC00.PEG1.PEGP._ROM.TMPB */
            Return (ROM2) /* \_SB_.PC00.PEG1.PEGP._ROM.ROM2 */
        }

        Method (HDSM, 4, Serialized)
        {
            Return (0x80000001)
        }

        Method (CMPB, 2, NotSerialized)
        {
            Local1 = SizeOf (Arg0)
            If ((Local1 != SizeOf (Arg1)))
            {
                Return (Zero)
            }

            Local0 = Zero
            While ((Local0 < Local1))
            {
                If ((DerefOf (Arg0 [Local0]) != DerefOf (Arg1 [Local0]
                    )))
                {
                    Return (Zero)
                }

                Local0++
            }

            Return (One)
        }

        Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
        {
            CreateByteField (Arg0, 0x03, GUID)
            If ((Arg0 == ToUUID ("d4a50b75-65c7-46f7-bfb7-41514cea0244") /* Unknown UUID */))
            {
                Return (NBCI (Arg0, Arg1, Arg2, Arg3))
            }
            ElseIf ((Arg0 == ToUUID ("a486d8f8-0bda-471b-a72b-6042a6b5bee0") /* Unknown UUID */))
            {
                Return (NVOP (Arg0, Arg1, Arg2, Arg3))
            }
            ElseIf ((Arg0 == ToUUID ("a3132d01-8cda-49ba-a52e-bc9d46df6b81") /* Unknown UUID */))
            {
                Return (\_SB.PC00.PEG1.PEGP.GPS (Arg0, Arg1, Arg2, Arg3))
            }
            Else
            {
                Return (0x80000002)
            }
        }

        Name (OPVK, Buffer (0x96)
        {
            /* 0000 */  0xE4, 0x57, 0x31, 0x0D, 0xD1, 0x7D, 0x49, 0x60,  // .W1..}I`
            /* 0008 */  0x4B, 0x56, 0x96, 0x00, 0x00, 0x00, 0x01, 0x00,  // KV......
            /* 0010 */  0x31, 0x35, 0x36, 0x32, 0x37, 0x33, 0x34, 0x36,  // 15627346
            /* 0018 */  0x38, 0x37, 0x33, 0x39, 0x47, 0x65, 0x6E, 0x75,  // 8739Genu
            /* 0020 */  0x69, 0x6E, 0x65, 0x20, 0x4E, 0x56, 0x49, 0x44,  // ine NVID
            /* 0028 */  0x49, 0x41, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69,  // IA Certi
            /* 0030 */  0x66, 0x69, 0x65, 0x64, 0x20, 0x4F, 0x70, 0x74,  // fied Opt
            /* 0038 */  0x69, 0x6D, 0x75, 0x73, 0x20, 0x52, 0x65, 0x61,  // imus Rea
            /* 0040 */  0x64, 0x79, 0x20, 0x4D, 0x6F, 0x74, 0x68, 0x65,  // dy Mothe
            /* 0048 */  0x72, 0x62, 0x6F, 0x61, 0x72, 0x64, 0x20, 0x2D,  // rboard -
            /* 0050 */  0x20, 0x43, 0x6F, 0x70, 0x79, 0x72, 0x69, 0x67,  //  Copyrig
            /* 0058 */  0x68, 0x74, 0x20, 0x32, 0x30, 0x31, 0x31, 0x20,  // ht 2011 
            /* 0060 */  0x4E, 0x56, 0x49, 0x44, 0x49, 0x41, 0x20, 0x43,  // NVIDIA C
            /* 0068 */  0x6F, 0x72, 0x70, 0x6F, 0x72, 0x61, 0x74, 0x69,  // orporati
            /* 0070 */  0x6F, 0x6E, 0x20, 0x41, 0x6C, 0x6C, 0x20, 0x52,  // on All R
            /* 0078 */  0x69, 0x67, 0x68, 0x74, 0x73, 0x20, 0x52, 0x65,  // ights Re
            /* 0080 */  0x73, 0x65, 0x72, 0x76, 0x65, 0x64, 0x2D, 0x31,  // served-1
            /* 0088 */  0x30, 0x33, 0x37, 0x35, 0x36, 0x33, 0x38, 0x35,  // 03756385
            /* 0090 */  0x36, 0x35, 0x32, 0x28, 0x52, 0x29               // 652(R)
        })
        Name (OPDR, Buffer (0xA1)
        {
            /* 0000 */  0x57, 0x74, 0xDC, 0x86, 0x75, 0x84, 0xEC, 0xE7,  // Wt..u...
            /* 0008 */  0x52, 0x44, 0xA1, 0x00, 0x00, 0x00, 0x00, 0x01,  // RD......
            /* 0010 */  0x00, 0x00, 0x00, 0x00, 0xDE, 0x10, 0x00, 0x00,  // ........
            /* 0018 */  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........
            /* 0020 */  0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x34, 0x00,  // ......4.
            /* 0028 */  0x00, 0x00, 0x01, 0x00, 0x47, 0x00, 0x00, 0x00,  // ....G...
            /* 0030 */  0x02, 0x00, 0x45, 0x00, 0x00, 0x00, 0x03, 0x00,  // ..E.....
            /* 0038 */  0x51, 0x00, 0x00, 0x00, 0x04, 0x00, 0x4F, 0x00,  // Q.....O.
            /* 0040 */  0x00, 0x00, 0x05, 0x00, 0x4D, 0x00, 0x00, 0x00,  // ....M...
            /* 0048 */  0x06, 0x00, 0x4B, 0x00, 0x00, 0x00, 0x07, 0x00,  // ..K.....
            /* 0050 */  0x49, 0x00, 0x00, 0x00, 0x08, 0x00, 0x47, 0x00,  // I.....G.
            /* 0058 */  0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xD9, 0x1C,  // ........
            /* 0060 */  0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,  // ........
            /* 0068 */  0x41, 0x5D, 0xC9, 0x00, 0x01, 0x24, 0x2E, 0x00,  // A]...$..
            /* 0070 */  0x02, 0x00, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x01,  // ........
            /* 0078 */  0x00, 0x00, 0x00, 0xD9, 0x1C, 0x04, 0x00, 0x00,  // ........
            /* 0080 */  0x00, 0x01, 0x00, 0x00, 0x00, 0x60, 0x68, 0x9E,  // .....`h.
            /* 0088 */  0x35, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // 5.......
            /* 0090 */  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........
            /* 0098 */  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  // ........
            /* 00A0 */  0x00                                             // .
        })
        Method (NBCI, 4, Serialized)
        {
            If ((Arg1 != 0x0102))
            {
                Return (0x80000002)
            }

            If ((Arg2 == Zero))
            {
                Return (Buffer (0x04)
                {
                     0x01, 0x00, 0x01, 0x00                           // ....
                })
            }

            If ((Arg2 == 0x10))
            {
                CreateWordField (Arg3, 0x02, USRG)
                If ((USRG == 0x564B))
                {
                    Return (OPVK) /* \_SB_.PC00.PEG1.PEGP.OPVK */
                }

                If ((USRG == 0x4452))
                {
                    Return (OPDR) /* \_SB_.PC00.PEG1.PEGP.OPDR */
                }
            }

            If ((Arg2 == 0x14))
            {
                Return (Package (0x20)
                {
                    0x8000A450, 
                    0x0200, 
                    Zero, 
                    Zero, 
                    0x05, 
                    One, 
                    0xC8, 
                    0x32, 
                    0x03E8, 
                    0x0B, 
                    0x32, 
                    0x64, 
                    0x96, 
                    0xC8, 
                    0x012C, 
                    0x0190, 
                    0x01FE, 
                    0x0276, 
                    0x02F8, 
                    0x0366, 
                    0x03E8, 
                    Zero, 
                    0x64, 
                    0xC8, 
                    0x012C, 
                    0x0190, 
                    0x01F4, 
                    0x0258, 
                    0x02BC, 
                    0x0320, 
                    0x0384, 
                    0x03E8
                })
            }
        }

        Method (NVOP, 4, Serialized)
        {
            Debug = "------- NV OPTIMUS DSM --------"
            If ((Arg1 != 0x0100))
            {
                Return (0x80000001)
            }

            Switch (ToInteger (Arg2))
            {
                Case (Zero)
                {
                    Return (Buffer (0x04)
                    {
                         0x01, 0x00, 0x00, 0x0C                           // ....
                    })
                }
                Case (0x1A)
                {
                    CreateField (Arg3, Zero, One, FLCH)
                    CreateField (Arg3, One, One, DVSR)
                    CreateField (Arg3, 0x02, One, DVSC)
                    CreateField (Arg3, 0x18, 0x02, OPCE)
                    If ((ToInteger (FLCH) & (ToInteger (OPCE) != OMPR)))
                    {
                        OMPR = OPCE /* \_SB_.PC00.PEG1.PEGP.NVOP.OPCE */
                    }

                    Local0 = Buffer (0x04)
                        {
                             0x00, 0x00, 0x00, 0x00                           // ....
                        }
                    CreateField (Local0, Zero, One, OPEN)
                    CreateField (Local0, 0x03, 0x02, CGCS)
                    CreateField (Local0, 0x06, One, SHPC)
                    CreateField (Local0, 0x08, One, SNSR)
                    CreateField (Local0, 0x18, 0x03, DGPC)
                    CreateField (Local0, 0x1B, 0x02, OHAC)
                    OPEN = One
                    SHPC = One
                    DGPC = One
                    OHAC = 0x03
                    If (ToInteger (DVSC))
                    {
                        If (ToInteger (DVSR))
                        {
                            GPRF = One
                        }
                        Else
                        {
                            GPRF = Zero
                        }
                    }

                    SNSR = GPRF /* \_SB_.PC00.PEG1.PEGP.GPRF */
                    If ((\_SB.PC00.PEG1.PEGP.DGPS == Zero))
                    {
                        CGCS = 0x03
                    }
                    Else
                    {
                        CGCS = Zero
                    }

                    Return (Local0)
                }
                Case (0x1B)
                {
                    CreateField (Arg3, Zero, One, OACC)
                    CreateField (Arg3, One, One, UOAC)
                    CreateField (Arg3, 0x02, 0x08, OPDA)
                    CreateField (Arg3, 0x0A, One, OPDE)
                    Local1 = Zero
                    Local1 = \_SB.PC00.PEG1.PEGP.NHDA
                    Return (Local1)
                }

            }

            Return (0x80000002)
        }

        Name (CTXT, Zero)
        Method (_ON, 0, Serialized)  // _ON_: Power On
        {
            If (CondRefOf (\_SB.PC00.PEG1.PXP._ON))
            {
                \_SB.PC00.PEG1.PXP._ON ()
            }

            If ((GPRF != One))
            {
                Local0 = CMDR /* \_SB_.PC00.PEG1.PEGP.CMDR */
                CMDR = Zero
                VGAR = VGAB /* \_SB_.PC00.PEG1.PEGP.VGAB */
                CMDR = 0x06
                NHDA = Zero
                CMDR = Local0
            }
        }

        Method (_OFF, 0, Serialized)  // _OFF: Power Off
        {
            If ((CTXT == Zero))
            {
                If ((GPRF != One))
                {
                    VGAB = VGAR /* \_SB_.PC00.PEG1.PEGP.VGAR */
                }

                CTXT = One
            }

            If (CondRefOf (\_SB.PC00.PEG1.PXP._OFF))
            {
                \_SB.PC00.PEG1.PXP._OFF ()
            }
        }
    }

    Scope (\_SB.PC00.GFX0)
    {
        Method (_INI, 0, NotSerialized)  // _INI: Initialize
        {
            TLPK [Zero] = DID1 /* External reference */
            TLPK [0x02] = DID2 /* External reference */
            TLPK [0x04] = DID3 /* External reference */
            TLPK [0x06] = DID4 /* External reference */
            TLPK [0x08] = DID5 /* External reference */
            TLPK [0x0A] = DID6 /* External reference */
            TLPK [0x0C] = DID7 /* External reference */
            TLPK [0x0E] = DID2 /* External reference */
            TLPK [0x0F] = DID1 /* External reference */
            TLPK [0x11] = DID2 /* External reference */
            TLPK [0x12] = DID3 /* External reference */
            TLPK [0x14] = DID2 /* External reference */
            TLPK [0x15] = DID4 /* External reference */
            TLPK [0x17] = DID2 /* External reference */
            TLPK [0x18] = DID5 /* External reference */
            TLPK [0x1A] = DID2 /* External reference */
            TLPK [0x1B] = DID6 /* External reference */
            TLPK [0x1D] = DID2 /* External reference */
            TLPK [0x1E] = DID7 /* External reference */
        }

        Method (MXMX, 1, Serialized)
        {
            If ((Arg0 == Zero))
            {
                P8XH (One, 0x77)
                P8XH (Zero, Zero)
                Return (One)
            }

            If ((Arg0 == One))
            {
                P8XH (One, 0x77)
                P8XH (Zero, One)
                Return (One)
            }

            If ((Arg0 == 0x02))
            {
                P8XH (One, 0x77)
                P8XH (Zero, 0x02)
            }

            Return (Zero)
        }

        Method (MXDS, 1, Serialized)
        {
            If ((Arg0 == Zero)){}
            If ((Arg0 == One)){}
            Return (Zero)
        }

        OperationRegion (NVIG, SystemMemory, NVGA, 0x0400)
        Field (NVIG, DWordAcc, NoLock, Preserve)
        {
            NISG,   128, 
            NISZ,   32, 
            NIVR,   32, 
            GPSS,   32, 
            GACD,   16, 
            GATD,   16, 
            LDES,   8, 
            DKST,   8, 
            DACE,   8, 
            DHPE,   8, 
            DHPS,   8, 
            SGNC,   8, 
            GPPO,   8, 
            USPM,   8, 
            GPSP,   8, 
            TLSN,   8, 
            DOSF,   8, 
            ELCL,   16
        }

        Name (TLPK, Package (0x20)
        {
            Ones, 
            0x2C, 
            Ones, 
            0x2C, 
            Ones, 
            0x2C, 
            Ones, 
            0x2C, 
            Ones, 
            0x2C, 
            Ones, 
            0x2C, 
            Ones, 
            0x2C, 
            Ones, 
            Ones, 
            0x2C, 
            Ones, 
            Ones, 
            0x2C, 
            Ones, 
            Ones, 
            0x2C, 
            Ones, 
            Ones, 
            0x2C, 
            Ones, 
            Ones, 
            0x2C, 
            Ones, 
            Ones, 
            0x2C
        })
        Method (INDL, 0, Serialized)
        {
            NXD1 = Zero
            NXD2 = Zero
            NXD3 = Zero
            NXD4 = Zero
            NXD5 = Zero
            NXD6 = Zero
            NXD7 = Zero
            NXD8 = Zero
        }

        Method (SND1, 1, Serialized)
        {
            If ((Arg0 == DID1))
            {
                NXD1 = One
            }

            If ((Arg0 == DID2))
            {
                NXD2 = One
            }

            If ((Arg0 == DID3))
            {
                NXD3 = One
            }

            If ((Arg0 == DID4))
            {
                NXD4 = One
            }

            If ((Arg0 == DID5))
            {
                NXD5 = One
            }

            If ((Arg0 == DID6))
            {
                NXD6 = One
            }

            If ((Arg0 == DID7))
            {
                NXD7 = One
            }

            If ((Arg0 == DID8))
            {
                NXD8 = One
            }
        }

        Method (SNXD, 1, Serialized)
        {
            INDL ()
            Local0 = One
            Local1 = Zero
            While ((Local0 < Arg0))
            {
                If ((DerefOf (TLPK [Local1]) == 0x2C))
                {
                    Local0++
                }

                Local1++
            }

            SND1 (DerefOf (TLPK [Local1]))
            Local1++
            If ((DerefOf (TLPK [Local1]) != 0x2C))
            {
                SND1 (DerefOf (TLPK [Local1]))
            }
        }

        Method (CTOI, 1, Serialized)
        {
            Switch (ToInteger (Arg0))
            {
                Case (One)
                {
                    Return (One)
                }
                Case (0x02)
                {
                    Return (0x02)
                }
                Case (0x04)
                {
                    Return (0x03)
                }
                Case (0x08)
                {
                    Return (0x04)
                }
                Case (0x10)
                {
                    Return (0x05)
                }
                Case (0x20)
                {
                    Return (0x06)
                }
                Case (0x40)
                {
                    Return (0x07)
                }
                Case (0x03)
                {
                    Return (0x08)
                }
                Case (0x06)
                {
                    Return (0x09)
                }
                Case (0x0A)
                {
                    Return (0x0A)
                }
                Case (0x12)
                {
                    Return (0x0B)
                }
                Case (0x22)
                {
                    Return (0x0C)
                }
                Case (0x42)
                {
                    Return (0x0D)
                }
                Default
                {
                    Return (One)
                }

            }
        }
    }

    Scope (\_SB.PC00.PEG1.PEGP)
    {
        Method (NVJT, 4, Serialized)
        {
            Debug = "------- NV JT DSM --------"
            If ((Arg1 < 0x0100))
            {
                Return (0x80000001)
            }

            Switch (ToInteger (Arg2))
            {
                Case (Zero)
                {
                    Debug = "JT fun0 JT_FUNC_SUPPORT"
                    Return (Unicode ("{"))
                }
                Case (One)
                {
                    Debug = "JT fun1 JT_FUNC_CAPS"
                    Name (JTCA, Buffer (0x04)
                    {
                         0x00                                             // .
                    })
                    CreateField (JTCA, Zero, One, JTEN)
                    CreateField (JTCA, One, 0x02, SREN)
                    CreateField (JTCA, 0x03, 0x02, PLPR)
                    CreateField (JTCA, 0x05, One, SRPR)
                    CreateField (JTCA, 0x06, 0x02, FBPR)
                    CreateField (JTCA, 0x08, 0x02, GUPR)
                    CreateField (JTCA, 0x0A, One, GC6R)
                    CreateField (JTCA, 0x0B, One, PTRH)
                    CreateField (JTCA, 0x0D, One, MHYB)
                    CreateField (JTCA, 0x0E, One, RPCL)
                    CreateField (JTCA, 0x0F, 0x02, GC6V)
                    CreateField (JTCA, 0x11, One, GEIS)
                    CreateField (JTCA, 0x12, One, GSWS)
                    CreateField (JTCA, 0x14, 0x0C, JTRV)
                    JTEN = One
                    GC6R = Zero
                    RPCL = One
                    SREN = One
                    FBPR = Zero
                    MHYB = One
                    GC6V = 0x02
                    JTRV = 0x0200
                    Return (JTCA) /* \_SB_.PC00.PEG1.PEGP.NVJT.JTCA */
                }
                Case (0x02)
                {
                    Debug = "JT fun2 JT_FUNC_POLICYSELECT"
                    Return (0x80000002)
                }
                Case (0x03)
                {
                    Debug = "JT fun3 JT_FUNC_POWERCONTROL"
                    CreateField (Arg3, Zero, 0x03, GPPC)
                    CreateField (Arg3, 0x04, One, PLPC)
                    CreateField (Arg3, 0x07, One, ECOC)
                    CreateField (Arg3, 0x0E, 0x02, DFGC)
                    CreateField (Arg3, 0x10, 0x03, GPCX)
                    If (((ToInteger (GPPC) != Zero) || (ToInteger (DFGC
                        ) != Zero))){}
                    Name (JTPC, Buffer (0x04)
                    {
                         0x00                                             // .
                    })
                    CreateField (JTPC, Zero, 0x03, GUPS)
                    CreateField (JTPC, 0x03, One, GPWO)
                    CreateField (JTPC, 0x07, One, PLST)
                    If ((ToInteger (DFGC) != Zero))
                    {
                        GPWO = One
                        GUPS = One
                        Return (JTPC) /* \_SB_.PC00.PEG1.PEGP.NVJT.JTPC */
                    }

                    If ((ToInteger (GPPC) == One))
                    {
                        GC6I ()
                        PLST = One
                        GUPS = Zero
                    }
                    ElseIf ((ToInteger (GPPC) == 0x02))
                    {
                        GC6I ()
                        If ((ToInteger (PLPC) == Zero))
                        {
                            PLST = Zero
                        }

                        GUPS = Zero
                    }
                    ElseIf ((ToInteger (GPPC) == 0x03))
                    {
                        GC6O ()
                        If ((ToInteger (PLPC) != Zero))
                        {
                            PLST = Zero
                        }

                        GPWO = One
                        GUPS = One
                    }
                    ElseIf ((ToInteger (GPPC) == 0x04))
                    {
                        GC6O ()
                        If ((ToInteger (PLPC) != Zero))
                        {
                            PLST = Zero
                        }

                        GPWO = One
                        GUPS = One
                    }
                    Else
                    {
                        Debug = "<<< GETS >>>"
                        If ((\_SB.GGIV (0x09000011) == One))
                        {
                            Debug = "<<< GETS() return 0x1 >>>"
                            GPWO = One
                            GUPS = One
                        }
                        Else
                        {
                            Debug = "<<< GETS() return 0x3 >>>"
                            GPWO = Zero
                            GUPS = 0x03
                        }
                    }

                    Return (JTPC) /* \_SB_.PC00.PEG1.PEGP.NVJT.JTPC */
                }
                Case (0x04)
                {
                    Debug = "JT fun4 JT_FUNC_PLATPOLICY"
                    CreateField (Arg3, 0x02, One, PAUD)
                    CreateField (Arg3, 0x03, One, PADM)
                    CreateField (Arg3, 0x04, 0x04, PDGS)
                    Local0 = Zero
                    Local0 = (\_SB.PC00.PEG1.PEGP.NHDA << 0x02)
                    Return (Local0)
                }

            }

            Return (0x80000002)
        }

        Method (GC6I, 0, Serialized)
        {
            Debug = "<<< GC6I >>>"
            \_SB.PC00.PEG1.PEGP.LTRE = \_SB.PC00.PEG1.LREN
            \_SB.PC00.PEG1.DL23 ()
            Sleep (0x0A)
            \_SB.PC00.SGPO (P1RE, P1RP, One)
        }

        Method (GC6O, 0, Serialized)
        {
            Debug = "<<< GC6O >>>"
            \_SB.PC00.SGPO (P1RE, P1RP, Zero)
            Sleep (0x0A)
            \_SB.PC00.PEG1.L23D ()
            \_SB.PC00.PEG1.CMDR |= 0x04
            \_SB.PC00.PEG1.LREN = \_SB.PC00.PEG1.PEGP.LTRE
            \_SB.PC00.PEG1.CEDR = One
        }
    }

    Scope (\_SB.PC00.PEG1.PEGP)
    {
        Name (NLIM, Zero)
        Name (PSLS, Zero)
        Name (PTGP, Zero)
        Name (TGPV, 0x2710)
        Name (GPSP, Buffer (0x28){})
        CreateDWordField (GPSP, Zero, RETN)
        CreateDWordField (GPSP, 0x04, VRV1)
        CreateDWordField (GPSP, 0x08, TGPU)
        CreateDWordField (GPSP, 0x0C, PDTS)
        CreateDWordField (GPSP, 0x10, SFAN)
        CreateDWordField (GPSP, 0x14, SKNT)
        CreateDWordField (GPSP, 0x18, CPUE)
        CreateDWordField (GPSP, 0x1C, TMP1)
        CreateDWordField (GPSP, 0x20, TMP2)
        CreateDWordField (GPSP, 0x24, PCGP)
        Method (GPS, 4, Serialized)
        {
            Debug = "------- NV GPS DSM --------"
            If ((Arg1 != 0x0200))
            {
                Return (0x80000002)
            }

            Switch (ToInteger (Arg2))
            {
                Case (Zero)
                {
                    Debug = "GPS fun 0"
                    Return (Buffer (0x08)
                    {
                         0x01, 0x00, 0x08, 0x00, 0x01, 0x04, 0x00, 0x00   // ........
                    })
                }
                Case (0x13)
                {
                    Debug = "GPS fun 19"
                    CreateDWordField (Arg3, Zero, TEMP)
                    If ((TEMP == Zero))
                    {
                        Return (0x04)
                    }

                    If ((TEMP && 0x04))
                    {
                        Return (0x04)
                    }
                }
                Case (0x20)
                {
                    Debug = "GPS fun 32"
                    Name (RET1, Zero)
                    CreateBitField (Arg3, 0x02, SPBI)
                    If (NLIM)
                    {
                        RET1 |= One
                    }

                    If (PSLS)
                    {
                        RET1 |= 0x02
                    }

                    If (PTGP)
                    {
                        RET1 |= 0x00100000
                    }

                    Return (RET1) /* \_SB_.PC00.PEG1.PEGP.GPS_.RET1 */
                }
                Case (0x2A)
                {
                    Debug = "GPS fun 42"
                    CreateField (Arg3, Zero, 0x04, PSH0)
                    CreateBitField (Arg3, 0x08, GPUT)
                    VRV1 = 0x00010000
                    PCGP = TGPV /* \_SB_.PC00.PEG1.PEGP.TGPV */
                    Switch (ToInteger (PSH0))
                    {
                        Case (Zero)
                        {
                            Return (GPSP) /* \_SB_.PC00.PEG1.PEGP.GPSP */
                        }
                        Case (One)
                        {
                            RETN = 0x0100
                            RETN |= ToInteger (PSH0)
                            If (PTGP)
                            {
                                RETN |= 0x8000
                            }

                            Return (GPSP) /* \_SB_.PC00.PEG1.PEGP.GPSP */
                        }
                        Case (0x02)
                        {
                            RETN = 0x0102
                            TGPU = Zero
                            If (PTGP)
                            {
                                RETN |= 0x8000
                            }

                            Return (GPSP) /* \_SB_.PC00.PEG1.PEGP.GPSP */
                        }

                    }

                    Return (0x80000002)
                }

            }

            Return (0x80000002)
        }
    }

    Scope (\_SB.PC00.PEG1.PEGP)
    {
        Name (AFST, 0xFF)
        Method (CAFL, 0, Serialized)
        {
            If ((AFST == 0xFF))
            {
                OperationRegion (SMIP, SystemIO, 0x0820, One)
                Field (SMIP, ByteAcc, NoLock, Preserve)
                {
                    IOB2,   8
                }

                OperationRegion (NVIO, SystemIO, IOBS, 0x10)
                Field (NVIO, ByteAcc, NoLock, Preserve)
                {
                    CPUC,   8
                }

                Local0 = IOB2 /* \_SB_.PC00.PEG1.PEGP.CAFL.IOB2 */
                CPUC = Local0
            }
        }
    }

    Scope (\_SB)
    {
        Device (NPCF)
        {
            Name (ACBT, 0x50)
            Name (DCBT, Zero)
            Name (DBAC, Zero)
            Name (DBDC, One)
            Name (AMAT, 0x78)
            Name (AMIT, 0xFF88)
            Name (ATPP, 0x0168)
            Name (DTPP, Zero)
            Name (TPPL, Zero)
            Name (DROS, Zero)
            Name (CDIS, Zero)
            Name (CUSL, Zero)
            Name (CUCT, Zero)
            Method (_HID, 0, NotSerialized)  // _HID: Hardware ID
            {
                CDIS = Zero
                Return ("NVDA0820")
            }

            Name (_UID, "NPCF")  // _UID: Unique ID
            Method (_STA, 0, NotSerialized)  // _STA: Status
            {
                If ((CDIS == One))
                {
                    Return (0x0D)
                }

                Return (0x0F)
            }

            Method (_DIS, 0, NotSerialized)  // _DIS: Disable Device
            {
                CDIS = One
            }

            Method (_DSM, 4, Serialized)  // _DSM: Device-Specific Method
            {
                If ((Arg0 == ToUUID ("36b49710-2483-11e7-9598-0800200c9a66") /* Unknown UUID */))
                {
                    Return (NPCF (Arg0, Arg1, Arg2, Arg3))
                }
            }

            Method (RCHV, 0, NotSerialized)
            {
                If ((IOBS != Zero))
                {
                    OperationRegion (NVIO, SystemIO, IOBS, 0x10)
                    Field (NVIO, ByteAcc, NoLock, Preserve)
                    {
                        CPUC,   8
                    }

                    CPUC = CHPV /* External reference */
                }
            }

            Method (NTCU, 0, Serialized)
            {
                Switch (ToInteger (TCNT))
                {
                    Case (0x14)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                        Notify (\_SB.PR12, 0x85) // Device-Specific
                        Notify (\_SB.PR13, 0x85) // Device-Specific
                        Notify (\_SB.PR14, 0x85) // Device-Specific
                        Notify (\_SB.PR15, 0x85) // Device-Specific
                        Notify (\_SB.PR16, 0x85) // Device-Specific
                        Notify (\_SB.PR17, 0x85) // Device-Specific
                        Notify (\_SB.PR18, 0x85) // Device-Specific
                        Notify (\_SB.PR19, 0x85) // Device-Specific
                    }
                    Case (0x13)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                        Notify (\_SB.PR12, 0x85) // Device-Specific
                        Notify (\_SB.PR13, 0x85) // Device-Specific
                        Notify (\_SB.PR14, 0x85) // Device-Specific
                        Notify (\_SB.PR15, 0x85) // Device-Specific
                        Notify (\_SB.PR16, 0x85) // Device-Specific
                        Notify (\_SB.PR17, 0x85) // Device-Specific
                        Notify (\_SB.PR18, 0x85) // Device-Specific
                    }
                    Case (0x12)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                        Notify (\_SB.PR12, 0x85) // Device-Specific
                        Notify (\_SB.PR13, 0x85) // Device-Specific
                        Notify (\_SB.PR14, 0x85) // Device-Specific
                        Notify (\_SB.PR15, 0x85) // Device-Specific
                        Notify (\_SB.PR16, 0x85) // Device-Specific
                        Notify (\_SB.PR17, 0x85) // Device-Specific
                    }
                    Case (0x11)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                        Notify (\_SB.PR12, 0x85) // Device-Specific
                        Notify (\_SB.PR13, 0x85) // Device-Specific
                        Notify (\_SB.PR14, 0x85) // Device-Specific
                        Notify (\_SB.PR15, 0x85) // Device-Specific
                        Notify (\_SB.PR16, 0x85) // Device-Specific
                    }
                    Case (0x10)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                        Notify (\_SB.PR12, 0x85) // Device-Specific
                        Notify (\_SB.PR13, 0x85) // Device-Specific
                        Notify (\_SB.PR14, 0x85) // Device-Specific
                        Notify (\_SB.PR15, 0x85) // Device-Specific
                    }
                    Case (0x0E)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                        Notify (\_SB.PR12, 0x85) // Device-Specific
                        Notify (\_SB.PR13, 0x85) // Device-Specific
                    }
                    Case (0x0C)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                        Notify (\_SB.PR10, 0x85) // Device-Specific
                        Notify (\_SB.PR11, 0x85) // Device-Specific
                    }
                    Case (0x0A)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                        Notify (\_SB.PR08, 0x85) // Device-Specific
                        Notify (\_SB.PR09, 0x85) // Device-Specific
                    }
                    Case (0x08)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                        Notify (\_SB.PR07, 0x85) // Device-Specific
                    }
                    Case (0x07)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                        Notify (\_SB.PR06, 0x85) // Device-Specific
                    }
                    Case (0x06)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                        Notify (\_SB.PR05, 0x85) // Device-Specific
                    }
                    Case (0x05)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                        Notify (\_SB.PR04, 0x85) // Device-Specific
                    }
                    Case (0x04)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                        Notify (\_SB.PR03, 0x85) // Device-Specific
                    }
                    Case (0x03)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                        Notify (\_SB.PR02, 0x85) // Device-Specific
                    }
                    Case (0x02)
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                        Notify (\_SB.PR01, 0x85) // Device-Specific
                    }
                    Default
                    {
                        Notify (\_SB.PR00, 0x85) // Device-Specific
                    }

                }
            }

            Method (NPCF, 4, Serialized)
            {
                Debug = "------- NVPCF DSM --------"
                If ((ToInteger (Arg1) != 0x0200))
                {
                    Return (0x80000001)
                }

                Switch (ToInteger (Arg2))
                {
                    Case (Zero)
                    {
                        Debug = "   NVPCF sub-func#0"
                        Return (Buffer (0x04)
                        {
                             0xBF, 0x07, 0x00, 0x00                           // ....
                        })
                    }
                    Case (One)
                    {
                        Debug = "   NVPCF sub-func#1"
                        Return (Buffer (0x0E)
                        {
                            /* 0000 */  0x20, 0x03, 0x01, 0x00, 0x23, 0x04, 0x05, 0x01,  //  ...#...
                            /* 0008 */  0x01, 0x01, 0x00, 0x00, 0x00, 0xAD               // ......
                        })
                    }
                    Case (0x02)
                    {
                        Debug = "   NVPCF sub-func#2"
                        Name (PBD2, Buffer (0x31)
                        {
                             0x00                                             // .
                        })
                        CreateByteField (PBD2, Zero, PTV2)
                        CreateByteField (PBD2, One, PHB2)
                        CreateByteField (PBD2, 0x02, GSB2)
                        CreateByteField (PBD2, 0x03, CTB2)
                        CreateByteField (PBD2, 0x04, NCE2)
                        PTV2 = 0x23
                        PHB2 = 0x05
                        GSB2 = 0x10
                        CTB2 = 0x1C
                        NCE2 = One
                        CreateWordField (PBD2, 0x05, TGPA)
                        CreateWordField (PBD2, 0x07, TGPD)
                        CreateByteField (PBD2, 0x15, PC01)
                        CreateByteField (PBD2, 0x16, PC02)
                        CreateWordField (PBD2, 0x19, TPPA)
                        CreateWordField (PBD2, 0x1B, TPPD)
                        CreateWordField (PBD2, 0x1D, MAGA)
                        CreateWordField (PBD2, 0x1F, MAGD)
                        CreateWordField (PBD2, 0x21, MIGA)
                        CreateWordField (PBD2, 0x23, MIGD)
                        CreateDWordField (PBD2, 0x25, DROP)
                        CreateDWordField (PBD2, 0x29, PA5O)
                        CreateDWordField (PBD2, 0x2D, PA6O)
                        CreateField (Arg3, 0x28, 0x02, NIGS)
                        CreateByteField (Arg3, 0x15, IORC)
                        CreateField (Arg3, 0xB0, One, PWCS)
                        CreateField (Arg3, 0xB1, One, PWTS)
                        CreateField (Arg3, 0xB2, One, CGPS)
                        If ((ToInteger (NIGS) == Zero))
                        {
                            TGPA = ACBT /* \_SB_.NPCF.ACBT */
                            TGPD = DCBT /* \_SB_.NPCF.DCBT */
                            PC01 = Zero
                            PC02 = (DBAC | (DBDC << One))
                            TPPA = ATPP /* \_SB_.NPCF.ATPP */
                            TPPD = DTPP /* \_SB_.NPCF.DTPP */
                            MAGA = AMAT /* \_SB_.NPCF.AMAT */
                            MIGA = AMIT /* \_SB_.NPCF.AMIT */
                            DROP = DROS /* \_SB_.NPCF.DROS */
                        }

                        If ((ToInteger (NIGS) == One))
                        {
                            If ((ToInteger (PWCS) == One)){}
                            Else
                            {
                            }

                            If ((ToInteger (PWTS) == One)){}
                            Else
                            {
                            }

                            If ((ToInteger (CGPS) == One)){}
                            Else
                            {
                            }

                            TGPA = Zero
                            TGPD = Zero
                            PC01 = Zero
                            PC02 = Zero
                            TPPA = Zero
                            TPPD = Zero
                            MAGA = Zero
                            MIGA = Zero
                            MAGD = Zero
                            MIGD = Zero
                        }

                        Return (PBD2) /* \_SB_.NPCF.NPCF.PBD2 */
                    }
                    Case (0x03)
                    {
                        Debug = "   NVPCF sub-func#3"
                        Return (Buffer (0x3D)
                        {
                            /* 0000 */  0x11, 0x04, 0x13, 0x03, 0x00, 0xFF, 0x00, 0x28,  // .......(
                            /* 0008 */  0x2D, 0x2D, 0x33, 0x33, 0x39, 0x39, 0x3F, 0x3F,  // --3399??
                            /* 0010 */  0x45, 0x42, 0x4B, 0x46, 0x50, 0xFF, 0xFF, 0x05,  // EBKFP...
                            /* 0018 */  0xFF, 0x00, 0x3C, 0x41, 0x41, 0x46, 0x46, 0x4B,  // ..<AAFFK
                            /* 0020 */  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  // ........
                            /* 0028 */  0xFF, 0xFF, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  // ........
                            /* 0030 */  0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  // ........
                            /* 0038 */  0x00, 0x30, 0x34, 0x34, 0x3A                     // .044:
                        })
                    }
                    Case (0x04)
                    {
                        Debug = "   NVPCF sub-func#4"
                        Return (Buffer (0x32)
                        {
                            /* 0000 */  0x11, 0x04, 0x2E, 0x01, 0x05, 0x00, 0x01, 0x02,  // ........
                            /* 0008 */  0x03, 0x04, 0x03, 0x01, 0x02, 0x03, 0x00, 0x02,  // ........
                            /* 0010 */  0x03, 0x04, 0x00, 0x02, 0x03, 0x04, 0x00, 0x02,  // ........
                            /* 0018 */  0x03, 0x04, 0x00, 0x02, 0x03, 0x04, 0x00, 0x02,  // ........
                            /* 0020 */  0x03, 0x04, 0x01, 0x02, 0x03, 0x04, 0x02, 0x02,  // ........
                            /* 0028 */  0x03, 0x04, 0x03, 0x03, 0x03, 0x04, 0x04, 0x04,  // ........
                            /* 0030 */  0x04, 0x04                                       // ..
                        })
                    }
                    Case (0x05)
                    {
                        Debug = "   NVPCF sub-func#5"
                        Name (PBD5, Buffer (0x28)
                        {
                             0x00                                             // .
                        })
                        CreateByteField (PBD5, Zero, PTV5)
                        CreateByteField (PBD5, One, PHB5)
                        CreateByteField (PBD5, 0x02, TEB5)
                        CreateByteField (PBD5, 0x03, NTE5)
                        PTV5 = 0x11
                        PHB5 = 0x04
                        TEB5 = 0x24
                        NTE5 = One
                        CreateDWordField (PBD5, 0x04, F5O0)
                        CreateDWordField (PBD5, 0x08, F5O1)
                        CreateDWordField (PBD5, 0x0C, F5O2)
                        CreateDWordField (PBD5, 0x10, F5O3)
                        CreateDWordField (PBD5, 0x14, F5O4)
                        CreateDWordField (PBD5, 0x18, F5O5)
                        CreateDWordField (PBD5, 0x1C, F5O6)
                        CreateDWordField (PBD5, 0x20, F5O7)
                        CreateDWordField (PBD5, 0x24, F5O8)
                        CreateField (Arg3, 0x20, 0x03, INC5)
                        CreateDWordField (Arg3, 0x08, F5P1)
                        CreateDWordField (Arg3, 0x0C, F5P2)
                        Switch (ToInteger (INC5))
                        {
                            Case (Zero)
                            {
                                F5O0 = One
                                F5O1 = Zero
                                F5O2 = Zero
                                F5O3 = Zero
                            }
                            Case (One)
                            {
                                F5O0 = Zero
                                F5O1 = Zero
                                F5O2 = Zero
                                F5O3 = Zero
                            }
                            Case (0x02)
                            {
                                F5O0 = Zero
                                F5O1 = Zero
                                F5O2 = Zero
                                F5O3 = Zero
                                F5O4 = Zero
                                F5O5 = Zero
                                F5O6 = Zero
                                F5O7 = Zero
                                F5O8 = Zero
                            }
                            Case (0x03)
                            {
                                CUSL = (F5P1 & 0xFF)
                            }
                            Case (0x04)
                            {
                                CUCT = F5P2 /* \_SB_.NPCF.NPCF.F5P2 */
                            }
                            Default
                            {
                                Return (0x80000002)
                            }

                        }

                        Return (PBD5) /* \_SB_.NPCF.NPCF.PBD5 */
                    }
                    Case (0x07)
                    {
                        Debug = "   NVPCF sub-func#7"
                        CreateDWordField (Arg3, 0x05, AMAX)
                        CreateDWordField (Arg3, 0x09, ARAT)
                        CreateDWordField (Arg3, 0x0D, DMAX)
                        CreateDWordField (Arg3, 0x11, DRAT)
                        CreateDWordField (Arg3, 0x15, TGPM)
                        Return (Zero)
                    }
                    Case (0x08)
                    {
                        Debug = "   NVPCF sub-func#8"
                        Return (Buffer (0x59)
                        {
                            /* 0000 */  0x10, 0x04, 0x11, 0x05, 0x64, 0x64, 0x19, 0x00,  // ....dd..
                            /* 0008 */  0x00, 0x30, 0x75, 0x00, 0x00, 0x38, 0x4A, 0x00,  // .0u..8J.
                            /* 0010 */  0x00, 0xA8, 0x61, 0x00, 0x00, 0x50, 0xCE, 0x18,  // ..a..P..
                            /* 0018 */  0x00, 0x00, 0x48, 0x71, 0x00, 0x00, 0x68, 0x42,  // ..Hq..hB
                            /* 0020 */  0x00, 0x00, 0xD8, 0x59, 0x00, 0x00, 0x3C, 0x38,  // ...Y..<8
                            /* 0028 */  0x18, 0x00, 0x00, 0x48, 0x71, 0x00, 0x00, 0x80,  // ...Hq...
                            /* 0030 */  0x3E, 0x00, 0x00, 0x08, 0x52, 0x00, 0x00, 0x28,  // >...R..(
                            /* 0038 */  0xA2, 0x17, 0x00, 0x00, 0x60, 0x6D, 0x00, 0x00,  // ....`m..
                            /* 0040 */  0xC8, 0x32, 0x00, 0x00, 0x68, 0x42, 0x00, 0x00,  // .2..hB..
                            /* 0048 */  0x14, 0x0C, 0x17, 0x00, 0x00, 0x78, 0x69, 0x00,  // .....xi.
                            /* 0050 */  0x00, 0xF8, 0x2A, 0x00, 0x00, 0xB0, 0x36, 0x00,  // ..*...6.
                            /* 0058 */  0x00                                             // .
                        })
                    }
                    Case (0x09)
                    {
                        Debug = "   NVPCF sub-func#9"
                        CreateDWordField (Arg3, 0x03, CPTD)
                        Return (Zero)
                    }
                    Case (0x0A)
                    {
                        Debug = "   NVPCF sub-func#10"
                        Name (PBDA, Buffer (0x08)
                        {
                             0x00                                             // .
                        })
                        CreateByteField (PBDA, Zero, DTTV)
                        CreateByteField (PBDA, One, DTSH)
                        CreateByteField (PBDA, 0x02, DTSE)
                        CreateByteField (PBDA, 0x03, DTTE)
                        CreateDWordField (PBDA, 0x04, DTTL)
                        DTTV = 0x10
                        DTSH = 0x04
                        DTSE = 0x04
                        DTTE = One
                        DTTL = TPPL /* \_SB_.NPCF.TPPL */
                        Return (PBDA) /* \_SB_.NPCF.NPCF.PBDA */
                    }

                }

                Return (0x80000002)
            }
        }
    }

    Scope (\_SB.PC00)
    {
        Device (WMI2)
        {
            Name (_HID, "PNP0C14" /* Windows Management Instrumentation Device */)  // _HID: Hardware ID
            Name (_UID, "OPTM")  // _UID: Unique ID
            Name (_WDG, Buffer (0x28)
            {
                /* 0000 */  0xBF, 0x82, 0x49, 0xCA, 0x30, 0xC2, 0x8E, 0x45,  // ..I.0..E
                /* 0008 */  0xB1, 0x2F, 0x6F, 0x16, 0x47, 0x5F, 0x35, 0x1B,  // ./o.G_5.
                /* 0010 */  0x4F, 0x50, 0x01, 0x02, 0xF8, 0xD8, 0x86, 0xA4,  // OP......
                /* 0018 */  0xDA, 0x0B, 0x1B, 0x47, 0xA7, 0x2B, 0x60, 0x42,  // ...G.+`B
                /* 0020 */  0xA6, 0xB5, 0xBE, 0xE0, 0x53, 0x4D, 0x01, 0x00   // ....SM..
            })
            Method (WMOP, 3, NotSerialized)
            {
                If ((Arg1 == One))
                {
                    \_SB.PC00.PEG1.PEGP._PS0 ()
                    Notify (\_SB.PC00.PEG1, Zero) // Bus Check
                    Return (Zero)
                }

                If ((Arg1 == 0x02))
                {
                    If ((\_SB.PC00.PEG1.PEGP.DGPS == Zero))
                    {
                        Return (0x10)
                    }
                    Else
                    {
                        Return (0x20)
                    }
                }
            }

            Method (WQSM, 1, NotSerialized)
            {
                Return (ATSM) /* \_SB_.PC00.WMI2.ATSM */
            }

            Name (ATSM, Buffer (0xE2)
            {
                /* 0000 */  0x52, 0xAA, 0x89, 0xC5, 0x44, 0xCE, 0xC3, 0x3A,  // R...D..:
                /* 0008 */  0x4B, 0x56, 0xE2, 0x00, 0x00, 0x00, 0x01, 0x00,  // KV......
                /* 0010 */  0x32, 0x37, 0x34, 0x35, 0x39, 0x31, 0x32, 0x35,  // 27459125
                /* 0018 */  0x33, 0x36, 0x38, 0x37, 0x47, 0x65, 0x6E, 0x75,  // 3687Genu
                /* 0020 */  0x69, 0x6E, 0x65, 0x20, 0x4E, 0x56, 0x49, 0x44,  // ine NVID
                /* 0028 */  0x49, 0x41, 0x20, 0x43, 0x65, 0x72, 0x74, 0x69,  // IA Certi
                /* 0030 */  0x66, 0x69, 0x65, 0x64, 0x20, 0x4F, 0x70, 0x74,  // fied Opt
                /* 0038 */  0x69, 0x6D, 0x75, 0x73, 0x20, 0x52, 0x65, 0x61,  // imus Rea
                /* 0040 */  0x64, 0x79, 0x20, 0x4D, 0x6F, 0x74, 0x68, 0x65,  // dy Mothe
                /* 0048 */  0x72, 0x62, 0x6F, 0x61, 0x72, 0x64, 0x20, 0x66,  // rboard f
                /* 0050 */  0x6F, 0x72, 0x20, 0x63, 0x6F, 0x6F, 0x6B, 0x69,  // or cooki
                /* 0058 */  0x65, 0x20, 0x66, 0x6F, 0x72, 0x20, 0x75, 0x6C,  // e for ul
                /* 0060 */  0x35, 0x30, 0x20, 0x75, 0x73, 0x69, 0x6E, 0x20,  // 50 usin 
                /* 0068 */  0x2D, 0x20, 0x5E, 0x57, 0x3C, 0x4A, 0x3D, 0x41,  // - ^W<J=A
                /* 0070 */  0x24, 0x4C, 0x3A, 0x4B, 0x38, 0x32, 0x26, 0x51,  // $L:K82&Q
                /* 0078 */  0x48, 0x35, 0x4C, 0x3E, 0x2B, 0x33, 0x52, 0x2B,  // H5L>+3R+
                /* 0080 */  0x54, 0x35, 0x2A, 0x52, 0x29, 0x3A, 0x5B, 0x4C,  // T5*R):[L
                /* 0088 */  0x4A, 0x3E, 0x36, 0x48, 0x22, 0x48, 0x41, 0x50,  // J>6H"HAP
                /* 0090 */  0x47, 0x39, 0x5A, 0x39, 0x5E, 0x3E, 0x44, 0x53,  // G9Z9^>DS
                /* 0098 */  0x54, 0x3C, 0x20, 0x2D, 0x20, 0x43, 0x6F, 0x70,  // T< - Cop
                /* 00A0 */  0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x32,  // yright 2
                /* 00A8 */  0x30, 0x30, 0x39, 0x20, 0x4E, 0x56, 0x49, 0x44,  // 009 NVID
                /* 00B0 */  0x49, 0x41, 0x20, 0x43, 0x6F, 0x72, 0x70, 0x6F,  // IA Corpo
                /* 00B8 */  0x72, 0x61, 0x74, 0x69, 0x6F, 0x6E, 0x20, 0x41,  // ration A
                /* 00C0 */  0x6C, 0x6C, 0x20, 0x52, 0x69, 0x67, 0x68, 0x74,  // ll Right
                /* 00C8 */  0x73, 0x20, 0x52, 0x65, 0x73, 0x65, 0x72, 0x76,  // s Reserv
                /* 00D0 */  0x65, 0x64, 0x2D, 0x32, 0x37, 0x34, 0x35, 0x39,  // ed-27459
                /* 00D8 */  0x31, 0x32, 0x35, 0x33, 0x36, 0x38, 0x37, 0x28,  // 1253687(
                /* 00E0 */  0x52, 0x29                                       // R)
            })
        }

        Device (WMI1)
        {
            Name (_HID, "PNP0C14" /* Windows Management Instrumentation Device */)  // _HID: Hardware ID
            Name (_UID, "MXM2")  // _UID: Unique ID
            Name (_WDG, Buffer (0xB4)
            {
                /* 0000 */  0x3C, 0x5C, 0xCB, 0xF6, 0xAE, 0x9C, 0xBD, 0x4E,  // <\.....N
                /* 0008 */  0xB5, 0x77, 0x93, 0x1E, 0xA3, 0x2A, 0x2C, 0xC0,  // .w...*,.
                /* 0010 */  0x4D, 0x58, 0x01, 0x02, 0x40, 0x2F, 0x1A, 0x92,  // MX..@/..
                /* 0018 */  0xC4, 0x0D, 0x2D, 0x40, 0xAC, 0x18, 0xB4, 0x84,  // ..-@....
                /* 0020 */  0x44, 0xEF, 0x9E, 0xD2, 0xD0, 0x00, 0x01, 0x08,  // D.......
                /* 0028 */  0x61, 0xD3, 0x2A, 0xC1, 0xA9, 0x9F, 0x74, 0x4C,  // a.*...tL
                /* 0030 */  0x90, 0x1F, 0x95, 0xCB, 0x09, 0x45, 0xCF, 0x3E,  // .....E.>
                /* 0038 */  0xD9, 0x00, 0x01, 0x08, 0x06, 0x80, 0x84, 0x42,  // .......B
                /* 0040 */  0x86, 0x88, 0x0E, 0x49, 0x8C, 0x72, 0x2B, 0xDC,  // ...I.r+.
                /* 0048 */  0xA9, 0x3A, 0x8A, 0x09, 0xDB, 0x00, 0x01, 0x08,  // .:......
                /* 0050 */  0x62, 0xDE, 0x6B, 0xE0, 0x75, 0xEE, 0xF4, 0x48,  // b.k.u..H
                /* 0058 */  0xA5, 0x83, 0xB2, 0x3E, 0x69, 0xAB, 0xF8, 0x91,  // ...>i...
                /* 0060 */  0x80, 0x00, 0x01, 0x08, 0x0F, 0xBD, 0xDE, 0x3A,  // .......:
                /* 0068 */  0x5F, 0x0C, 0xED, 0x46, 0xAB, 0x2E, 0x04, 0x96,  // _..F....
                /* 0070 */  0x2B, 0x4F, 0xDC, 0xBC, 0x81, 0x00, 0x01, 0x08,  // +O......
                /* 0078 */  0x11, 0x93, 0x51, 0x1E, 0x75, 0x3E, 0x08, 0x42,  // ..Q.u>.B
                /* 0080 */  0xB0, 0x5E, 0xEB, 0xE1, 0x7E, 0x3F, 0xF4, 0x1F,  // .^..~?..
                /* 0088 */  0x86, 0x00, 0x01, 0x08, 0x41, 0x53, 0xF8, 0x37,  // ....AS.7
                /* 0090 */  0x18, 0x44, 0x24, 0x4F, 0x85, 0x33, 0x38, 0xFF,  // .D$O.38.
                /* 0098 */  0xC7, 0x29, 0x55, 0x42, 0x87, 0x00, 0x01, 0x08,  // .)UB....
                /* 00A0 */  0x21, 0x12, 0x90, 0x05, 0x66, 0xD5, 0xD1, 0x11,  // !...f...
                /* 00A8 */  0xB2, 0xF0, 0x00, 0xA0, 0xC9, 0x06, 0x29, 0x10,  // ......).
                /* 00B0 */  0x58, 0x4D, 0x01, 0x00                           // XM..
            })
            Method (WMMX, 3, NotSerialized)
            {
                CreateDWordField (Arg2, Zero, FUNC)
                If ((FUNC == 0x534F525F))
                {
                    If ((SizeOf (Arg2) >= 0x08))
                    {
                        CreateDWordField (Arg2, 0x04, ARGS)
                        CreateDWordField (Arg2, 0x08, XARG)
                        Return (\_SB.PC00.PEG1.PEGP._ROM (ARGS, XARG))
                    }
                }

                If ((FUNC == 0x4D53445F))
                {
                    If ((SizeOf (Arg2) >= 0x1C))
                    {
                        CreateField (Arg2, Zero, 0x80, MUID)
                        CreateDWordField (Arg2, 0x10, REVI)
                        CreateDWordField (Arg2, 0x14, SFNC)
                        CreateField (Arg2, 0xE0, 0x20, XRG0)
                        If (CondRefOf (\_SB.PC00.GFX0._DSM))
                        {
                            Return (\_SB.PC00.GFX0._DSM (MUID, REVI, SFNC, XRG0))
                        }
                    }
                }

                Return (Zero)
            }
        }
    }
}

