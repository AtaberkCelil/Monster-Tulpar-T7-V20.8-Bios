/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20260930 (64-bit version)
 * Copyright (c) 2000 - 2026 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT_14.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x00000667 (1639)
 *     Revision         0x01
 *     Checksum         0x2E
 *     OEM ID           "AmdRef"
 *     OEM Table ID     "AmdSsdt"
 *     OEM Revision     0x00001000 (4096)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20200717 (538969879)
 */
DefinitionBlock ("", "SSDT", 1, "AmdRef", "AmdSsdt", 0x00001000)
{
    External (_SB_.PC00, DeviceObj)
    External (_SB_.PC00.GFX0, DeviceObj)
    External (_SB_.PC00.RP01, DeviceObj)
    External (_SB_.PC00.RP01.PEGP, DeviceObj)
    External (_SB_.PC00.RP01.PEGP._OFF, MethodObj)    // 0 Arguments
    External (_SB_.PC00.RP01.PEGP._ON_, MethodObj)    // 0 Arguments
    External (_SB_.PC00.RP05, DeviceObj)
    External (_SB_.PC00.RP05.PEGP, DeviceObj)
    External (_SB_.PC00.RP05.PEGP._OFF, MethodObj)    // 0 Arguments
    External (_SB_.PC00.RP05.PEGP._ON_, MethodObj)    // 0 Arguments
    External (AMDA, UnknownObj)
    External (DID1, UnknownObj)
    External (DID2, UnknownObj)
    External (DID3, UnknownObj)
    External (DID4, UnknownObj)
    External (DID5, UnknownObj)
    External (DID6, UnknownObj)
    External (DID7, UnknownObj)
    External (HGMD, UnknownObj)
    External (RPIN, UnknownObj)
    External (SGFL, UnknownObj)
    External (SGGP, UnknownObj)

    Scope (\_SB.PC00.GFX0)
    {
        OperationRegion (APXM, SystemMemory, AMDA, 0x00010400)
        Field (APXM, AnyAcc, NoLock, Preserve)
        {
            APSG,   128, 
            APSZ,   32, 
            APVR,   32, 
            APXA,   32, 
            RVBS,   32, 
            NTLE,   16, 
            TLE1,   16, 
            TLE2,   16, 
            TLE3,   16, 
            TLE4,   16, 
            TLE5,   16, 
            TLE6,   16, 
            TLE7,   16, 
            TLE8,   16, 
            TLE9,   16, 
            TL10,   16, 
            TL11,   16, 
            TL12,   16, 
            TL13,   16, 
            TL14,   16, 
            TL15,   16, 
            TGXA,   16, 
            AGXA,   16, 
            GSTP,   8, 
            DSWR,   8, 
            EMDR,   8, 
            PXGS,   8, 
            CACD,   16, 
            CCND,   16, 
            NACD,   16, 
            EXPM,   8, 
            TLSN,   16, 
            ELCT,   16, 
            RBF1,   262144, 
            RBF2,   262144
        }

        Method (ADPM, 2, Serialized)
        {
            Local1 = Zero
            Local0 = (Arg0 >> 0x10)
            If ((Arg1 == One))
            {
                Local1 |= (Local0 & One)
            }
            Else
            {
                Local1 |= ((Local0 & 0x02) >> One)
            }

            Local1 <<= One
            Local0 = (Arg0 >> 0x18)
            If ((Arg1 == One))
            {
                Local1 |= (Local0 & One)
            }
            Else
            {
                Local1 |= ((Local0 & 0x02) >> One)
            }

            Local1 <<= One
            Local0 = (Arg0 >> 0x08)
            If ((Arg1 == One))
            {
                Local1 |= (Local0 & One)
            }
            Else
            {
                Local1 |= ((Local0 & 0x02) >> One)
            }

            Return (Local1)
        }

        Method (ATPX, 2, Serialized)
        {
            If ((Arg0 == Zero))
            {
                Name (TMP1, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TMP1, Zero, F0SS)
                CreateWordField (TMP1, 0x02, F0IV)
                CreateDWordField (TMP1, 0x04, F0SF)
                F0SS = 0x08
                F0IV = One
                F0SF = 0xBF
                If (((HGMD & 0x7F) == 0x02))
                {
                    F0SF = 0x33
                }

                Return (TMP1) /* \_SB_.PC00.GFX0.ATPX.TMP1 */
            }

            If ((Arg0 == One))
            {
                Name (TMP2, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TMP2, Zero, F1SS)
                CreateDWordField (TMP2, 0x02, F1VM)
                CreateDWordField (TMP2, 0x06, F1FG)
                F1SS = 0x0A
                F1VM = 0x40
                F1FG = 0x40
                If (((HGMD & 0x7F) == 0x02))
                {
                    If ((SGGP != Zero))
                    {
                        F1VM = 0x4680
                        F1FG = 0x4680
                    }
                    Else
                    {
                        F1VM = 0x4280
                        F1FG = 0x4280
                    }
                }

                Return (TMP2) /* \_SB_.PC00.GFX0.ATPX.TMP2 */
            }

            If ((Arg0 == 0x02))
            {
                CreateWordField (Arg1, Zero, FN2S)
                CreateByteField (Arg1, 0x02, DGPR)
                If ((SGGP != Zero))
                {
                    If ((DGPR == Zero))
                    {
                        If ((RPIN == Zero))
                        {
                            \_SB.PC00.RP01.PEGP._OFF ()
                        }
                        ElseIf ((RPIN == 0x04))
                        {
                            \_SB.PC00.RP05.PEGP._OFF ()
                        }
                    }

                    If ((DGPR == One))
                    {
                        If ((RPIN == Zero))
                        {
                            \_SB.PC00.RP01.PEGP._ON ()
                        }
                        ElseIf ((RPIN == 0x04))
                        {
                            \_SB.PC00.RP05.PEGP._ON ()
                        }
                    }
                }

                Return (Zero)
            }

            If ((Arg0 == 0x03))
            {
                CreateWordField (Arg1, Zero, FN3S)
                CreateWordField (Arg1, 0x02, SDMG)
                If ((SDMG == Zero)){}
                If ((SDMG == One)){}
                Return (Zero)
            }

            If ((Arg0 == 0x04))
            {
                CreateWordField (Arg1, Zero, FN4S)
                CreateWordField (Arg1, 0x02, SIMG)
                If ((SIMG == Zero)){}
                If ((SIMG == One)){}
                Return (Zero)
            }

            If ((Arg0 == 0x05))
            {
                CreateWordField (Arg1, Zero, FN5S)
                CreateWordField (Arg1, 0x02, TGFX)
                TGXA = TGFX /* \_SB_.PC00.GFX0.ATPX.TGFX */
                GSTP = One
                Return (Zero)
            }

            If ((Arg0 == 0x06))
            {
                CreateWordField (Arg1, Zero, FN6S)
                CreateWordField (Arg1, 0x02, AGFX)
                AGXA = AGFX /* \_SB_.PC00.GFX0.ATPX.AGFX */
                GSTP = Zero
                Return (Zero)
            }

            If ((Arg0 == 0x08))
            {
                Name (TMP3, Buffer (0x0100)
                {
                    /* 0000 */  0x0E, 0x00, 0x46, 0x00, 0x07, 0x01, 0x00, 0x00,  // ..F.....
                    /* 0008 */  0x01, 0x07, 0x01, 0x01, 0x00, 0x01, 0x05, 0x00,  // ........
                    /* 0010 */  0x00, 0x00, 0x04, 0x05, 0x00, 0x01, 0x10, 0x01,  // ........
                    /* 0018 */  0x07, 0x03, 0x00, 0x00, 0x03, 0x07, 0x03, 0x01,  // ........
                    /* 0020 */  0x10, 0x02, 0x07, 0x07, 0x00, 0x01, 0x03, 0x07,  // ........
                    /* 0028 */  0x07, 0x01, 0x10, 0x02, 0x07, 0x09, 0x00, 0x02,  // ........
                    /* 0030 */  0x03, 0x07, 0x09, 0x01, 0x20, 0x02, 0x07, 0x0A,  // .... ...
                    /* 0038 */  0x00, 0x03, 0x03, 0x07, 0x0A, 0x01, 0x30, 0x02,  // ......0.
                    /* 0040 */  0x07, 0x0B, 0x00, 0x04, 0x03, 0x07, 0x0B, 0x01,  // ........
                    /* 0048 */  0x30, 0x02, 0x07, 0x0C, 0x00, 0x06, 0x03         // 0......
                })
                CreateWordField (TMP3, Zero, ATNO)
                CreateWordField (TMP3, 0x02, ATSZ)
                If ((SGFL & One))
                {
                    ATNO = (ATNO + One)
                    ATSZ = (ATSZ + 0x05)
                }

                Return (TMP3) /* \_SB_.PC00.GFX0.ATPX.TMP3 */
            }

            Return (Zero)
        }

        Method (ATRM, 2, Serialized)
        {
            Local0 = Arg0
            Local1 = Arg1
            If ((Local1 > 0x1000))
            {
                Local1 = 0x1000
            }

            If ((Local0 > 0x00010000))
            {
                Return (Buffer (Local1)
                {
                     0x00                                             // .
                })
            }

            If ((Local0 > RVBS))
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
                ROM1 = RBF1 /* \_SB_.PC00.GFX0.RBF1 */
            }
            Else
            {
                Local0 -= 0x8000
                ROM1 = RBF2 /* \_SB_.PC00.GFX0.RBF2 */
            }

            Local2 = (Local0 * 0x08)
            CreateField (ROM1, Local2, Local3, TMPB)
            ROM2 = TMPB /* \_SB_.PC00.GFX0.ATRM.TMPB */
            Return (ROM2) /* \_SB_.PC00.GFX0.ATRM.ROM2 */
        }
    }

    Scope (\_SB.PC00)
    {
        Method (NTRP, 0, NotSerialized)
        {
            If ((RPIN == Zero))
            {
                Notify (\_SB.PC00.RP01.PEGP, 0x80) // Status Change
            }
            ElseIf ((RPIN == 0x04))
            {
                Notify (\_SB.PC00.RP05.PEGP, 0x80) // Status Change
            }
        }
    }
}

