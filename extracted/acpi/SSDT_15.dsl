/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20260930 (64-bit version)
 * Copyright (c) 2000 - 2026 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT_15.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x00000DC2 (3522)
 *     Revision         0x01
 *     Checksum         0xCE
 *     OEM ID           "AmdRef"
 *     OEM Table ID     "AmdPeg"
 *     OEM Revision     0x00001000 (4096)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20200717 (538969879)
 */
DefinitionBlock ("", "SSDT", 1, "AmdRef", "AmdPeg", 0x00001000)
{
    External (_SB_.PC00.GFX0, DeviceObj)
    External (_SB_.PC00.GFX0.AINT, MethodObj)    // 2 Arguments
    External (_SB_.PC00.GFX0.DD1F, DeviceObj)
    External (_SB_.PC00.LPCB.H_EC.ECRD, MethodObj)    // 1 Arguments
    External (_SB_.PC00.LPCB.H_EC.LSTE, UnknownObj)
    External (_SB_.PC00.PEG0, DeviceObj)
    External (_SB_.PC00.PEG0.PEGP, DeviceObj)
    External (_SB_.PC00.PEG0.PEGP._OFF, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG0.PEGP._ON_, MethodObj)    // 0 Arguments
    External (AMDA, UnknownObj)
    External (DID1, UnknownObj)
    External (DID2, UnknownObj)
    External (DID3, UnknownObj)
    External (DID4, UnknownObj)
    External (DID5, UnknownObj)
    External (DID6, UnknownObj)
    External (DID7, UnknownObj)
    External (DSEN, UnknownObj)
    External (ECON, IntObj)
    External (HGMD, UnknownObj)
    External (NXD1, UnknownObj)
    External (NXD2, UnknownObj)
    External (NXD3, UnknownObj)
    External (NXD4, UnknownObj)
    External (NXD5, UnknownObj)
    External (NXD6, UnknownObj)
    External (NXD7, UnknownObj)
    External (NXD8, UnknownObj)
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
                If (((SGGP == One) || (SGGP == 0x02)))
                {
                    If ((DGPR == Zero))
                    {
                        \_SB.PC00.PEG0.PEGP._OFF ()
                    }

                    If ((DGPR == One))
                    {
                        \_SB.PC00.PEG0.PEGP._ON ()
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

    Method (HGAS, 0, NotSerialized)
    {
        \_SB.PC00.GFX0.PXGS = One
        Notify (\_SB.PC00.GFX0, 0x81) // Information Change
    }

    Method (HBRT, 1, Serialized)
    {
        If ((0x04 & DSEN))
        {
            If ((Arg0 == 0x04))
            {
                Notify (\_SB.PC00.GFX0.DD1F, 0x87) // Device-Specific
            }

            If ((Arg0 == 0x03))
            {
                Notify (\_SB.PC00.GFX0.DD1F, 0x86) // Device-Specific
            }
        }
    }

    Method (HPFS, 0, Serialized)
    {
        If ((\_SB.PC00.GFX0.GSTP != One))
        {
            If ((\_SB.PC00.GFX0.AGXA == Zero))
            {
                \_SB.PC00.GFX0.AINT (0x02, Zero)
            }
            Else
            {
                \_SB.PC00.GFX0.EMDR = One
                If ((\_SB.PC00.GFX0.EXPM == 0x02))
                {
                    \_SB.PC00.GFX0.EXPM = Zero
                }
                Else
                {
                    \_SB.PC00.GFX0.EXPM++
                }

                Notify (\_SB.PC00.GFX0, 0x81) // Information Change
            }
        }
    }

    Method (HNOT, 1, Serialized)
    {
        Switch (ToInteger (Arg0))
        {
            Case (One)
            {
                If ((\_SB.PC00.GFX0.GSTP != One))
                {
                    If (((HGMD & 0x7F) == 0x02))
                    {
                        If ((\_SB.PC00.GFX0.AGXA == Zero))
                        {
                            Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                        }

                        If ((\_SB.PC00.GFX0.AGXA == One))
                        {
                            Notify (\_SB.PC00.PEG0.PEGP, 0x80) // Status Change
                        }
                    }
                    Else
                    {
                        \_SB.PC00.GFX0.DSWR = One
                        Notify (\_SB.PC00.GFX0, 0x81) // Information Change
                    }
                }
            }
            Case (0x02)
            {
                If (((HGMD & 0x7F) == 0x02))
                {
                    If ((\_SB.PC00.GFX0.AGXA == Zero))
                    {
                        Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                    }

                    If ((\_SB.PC00.GFX0.AGXA == One))
                    {
                        Notify (\_SB.PC00.PEG0.PEGP, 0x80) // Status Change
                    }
                }
                Else
                {
                    Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                }
            }
            Case (0x03)
            {
                If (((HGMD & 0x7F) == 0x02))
                {
                    If ((\_SB.PC00.GFX0.AGXA == Zero))
                    {
                        Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                    }

                    If ((\_SB.PC00.GFX0.AGXA == One))
                    {
                        Notify (\_SB.PC00.PEG0.PEGP, 0x80) // Status Change
                    }
                }
                Else
                {
                    Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                }
            }
            Default
            {
                Notify (\_SB.PC00.GFX0, 0x80) // Status Change
            }

        }
    }

    Scope (\_SB.PC00.GFX0)
    {
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

        Method (SNXD, 1, Serialized)
        {
            INDL ()
            Local0 = Arg0
            If ((Local0 & 0x02))
            {
                NXD1 = One
            }

            If ((Local0 & One))
            {
                NXD2 = One
            }

            If ((Local0 & 0x08))
            {
                NXD3 = One
            }

            If ((Local0 & 0x80))
            {
                NXD4 = One
            }

            If ((Local0 & 0x0200))
            {
                NXD5 = One
            }

            If ((Local0 & 0x0400))
            {
                NXD6 = One
            }

            If ((Local0 & 0x0800))
            {
                NXD7 = One
            }
        }

        Method (ATIF, 2, Serialized)
        {
            If ((Arg0 == Zero))
            {
                Name (TMP0, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TMP0, Zero, F0SS)
                CreateWordField (TMP0, 0x02, F0IV)
                CreateDWordField (TMP0, 0x04, F0SN)
                CreateDWordField (TMP0, 0x08, F0SF)
                F0SS = 0x0C
                F0IV = One
                F0SN = 0x41
                F0SF = 0x07
                If (((HGMD & 0x7F) == 0x02))
                {
                    F0SN = Zero
                    F0SF = Zero
                }

                Return (TMP0) /* \_SB_.PC00.GFX0.ATIF.TMP0 */
            }

            If ((Arg0 == One))
            {
                Name (TMP1, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TMP1, Zero, F1SS)
                CreateDWordField (TMP1, 0x02, F1VF)
                CreateDWordField (TMP1, 0x06, F1FG)
                F1SS = 0x0A
                F1VF = 0x03
                F1FG = One
                Return (TMP1) /* \_SB_.PC00.GFX0.ATIF.TMP1 */
            }

            If ((Arg0 == 0x02))
            {
                Name (TMP2, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TMP2, Zero, F2SS)
                CreateDWordField (TMP2, 0x02, F2PR)
                CreateByteField (TMP2, 0x06, F2EM)
                CreateByteField (TMP2, 0x07, F2TG)
                CreateByteField (TMP2, 0x08, F2SI)
                CreateByteField (TMP2, 0x09, F2FG)
                CreateByteField (TMP2, 0x0A, F2FI)
                CreateByteField (TMP2, 0x0B, F2SP)
                F2SS = 0x0A
                Name (STS2, Zero)
                STS2 |= DSWR /* \_SB_.PC00.GFX0.ATIF.STS2 */
                STS2 |= (PXGS << 0x06) /* \_SB_.PC00.GFX0.ATIF.STS2 */
                F2PR = STS2 /* \_SB_.PC00.GFX0.ATIF.STS2 */
                DSWR = Zero
                PXGS = Zero
                Return (TMP2) /* \_SB_.PC00.GFX0.ATIF.TMP2 */
            }

            If ((Arg0 == 0x03))
            {
                Name (TMP3, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TMP3, Zero, F3SS)
                CreateWordField (TMP3, 0x02, F3SD)
                CreateWordField (Arg1, Zero, AI3S)
                CreateWordField (Arg1, 0x02, SLDS)
                CreateWordField (Arg1, 0x04, CODS)
                CACD = SLDS /* \_SB_.PC00.GFX0.ATIF.SLDS */
                CCND = CODS /* \_SB_.PC00.GFX0.ATIF.CODS */
                If (\ECON)
                {
                    If ((\_SB.PC00.LPCB.H_EC.ECRD (RefOf (\_SB.PC00.LPCB.H_EC.LSTE)) == One))
                    {
                        CCND |= One
                    }
                }

                F3SS = 0x04
                TLSN = CTOI (CACD)
                Local1 = CACD /* \_SB_.PC00.GFX0.CACD */
                Local0 = NTLE /* \_SB_.PC00.GFX0.NTLE */
                While (Local0)
                {
                    Local1 = NATL (TLSN)
                    If ((Local1 != Zero))
                    {
                        If (((Local1 & CCND) == Local1))
                        {
                            Local0 = One
                        }
                    }

                    Local0--
                    TLSN++
                    If ((TLSN > NTLE))
                    {
                        TLSN = One
                    }
                }

                SNXD (Local1)
                NACD = Local1
                F3SD = NACD /* \_SB_.PC00.GFX0.NACD */
                Return (TMP3) /* \_SB_.PC00.GFX0.ATIF.TMP3 */
            }

            Return (Zero)
        }

        Method (CTOI, 1, NotSerialized)
        {
            If ((NTLE != Zero))
            {
                If ((TLE1 == Arg0))
                {
                    Return (One)
                }

                If ((TLE2 == Arg0))
                {
                    Return (0x02)
                }

                If ((TLE3 == Arg0))
                {
                    Return (0x03)
                }

                If ((TLE4 == Arg0))
                {
                    Return (0x04)
                }

                If ((TLE5 == Arg0))
                {
                    Return (0x05)
                }

                If ((TLE6 == Arg0))
                {
                    Return (0x06)
                }

                If ((TLE7 == Arg0))
                {
                    Return (0x07)
                }

                If ((TLE8 == Arg0))
                {
                    Return (0x08)
                }

                If ((TLE9 == Arg0))
                {
                    Return (0x09)
                }

                If ((TL10 == Arg0))
                {
                    Return (0x0A)
                }

                If ((TL11 == Arg0))
                {
                    Return (0x0B)
                }

                If ((TL12 == Arg0))
                {
                    Return (0x0C)
                }

                If ((TL13 == Arg0))
                {
                    Return (0x0D)
                }

                If ((TL14 == Arg0))
                {
                    Return (0x0E)
                }

                If ((TL15 == Arg0))
                {
                    Return (0x0F)
                }
            }

            Return (One)
        }

        Method (NATL, 1, NotSerialized)
        {
            If ((NTLE != Zero))
            {
                If ((Arg0 == One))
                {
                    Return (TLE2) /* \_SB_.PC00.GFX0.TLE2 */
                }

                If ((Arg0 == 0x02))
                {
                    Return (TLE3) /* \_SB_.PC00.GFX0.TLE3 */
                }

                If ((Arg0 == 0x03))
                {
                    Return (TLE4) /* \_SB_.PC00.GFX0.TLE4 */
                }

                If ((Arg0 == 0x04))
                {
                    Return (TLE5) /* \_SB_.PC00.GFX0.TLE5 */
                }

                If ((Arg0 == 0x05))
                {
                    Return (TLE6) /* \_SB_.PC00.GFX0.TLE6 */
                }

                If ((Arg0 == 0x06))
                {
                    Return (TLE7) /* \_SB_.PC00.GFX0.TLE7 */
                }

                If ((Arg0 == 0x07))
                {
                    Return (TLE8) /* \_SB_.PC00.GFX0.TLE8 */
                }

                If ((Arg0 == 0x08))
                {
                    Return (TLE9) /* \_SB_.PC00.GFX0.TLE9 */
                }

                If ((Arg0 == 0x09))
                {
                    Return (TL10) /* \_SB_.PC00.GFX0.TL10 */
                }

                If ((Arg0 == 0x0A))
                {
                    Return (TL11) /* \_SB_.PC00.GFX0.TL11 */
                }

                If ((Arg0 == 0x0B))
                {
                    Return (TL12) /* \_SB_.PC00.GFX0.TL12 */
                }

                If ((Arg0 == 0x0C))
                {
                    Return (TL13) /* \_SB_.PC00.GFX0.TL13 */
                }

                If ((Arg0 == 0x0D))
                {
                    Return (TL14) /* \_SB_.PC00.GFX0.TL14 */
                }

                If ((Arg0 == 0x0E))
                {
                    Return (TL15) /* \_SB_.PC00.GFX0.TL15 */
                }

                If ((Arg0 == 0x0F))
                {
                    Return (TLE1) /* \_SB_.PC00.GFX0.TLE1 */
                }
            }

            Return (Zero)
        }
    }
}

