/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20260930 (64-bit version)
 * Copyright (c) 2000 - 2026 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT_13.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x000009EA (2538)
 *     Revision         0x01
 *     Checksum         0xA2
 *     OEM ID           "AmdRef"
 *     OEM Table ID     "AmdPch"
 *     OEM Revision     0x00001000 (4096)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20200717 (538969879)
 */
DefinitionBlock ("", "SSDT", 1, "AmdRef", "AmdPch", 0x00001000)
{
    External (_SB_.PC00.GFX0, DeviceObj)
    External (_SB_.PC00.GFX0.AGXA, UnknownObj)
    External (_SB_.PC00.GFX0.AINT, MethodObj)    // 2 Arguments
    External (_SB_.PC00.GFX0.DD1F, DeviceObj)
    External (_SB_.PC00.GFX0.DSWR, UnknownObj)
    External (_SB_.PC00.GFX0.EMDR, UnknownObj)
    External (_SB_.PC00.GFX0.EXPM, UnknownObj)
    External (_SB_.PC00.GFX0.GSTP, UnknownObj)
    External (_SB_.PC00.GFX0.PXGS, UnknownObj)
    External (_SB_.PC00.LPCB.H_EC.ECRD, MethodObj)    // 1 Arguments
    External (_SB_.PC00.LPCB.H_EC.LSTE, UnknownObj)
    External (_SB_.PC00.NTRP, MethodObj)    // 0 Arguments
    External (AMDA, UnknownObj)
    External (CACD, UnknownObj)
    External (CCND, UnknownObj)
    External (DSEN, UnknownObj)
    External (DSWR, UnknownObj)
    External (ECON, IntObj)
    External (HGMD, UnknownObj)
    External (NACD, UnknownObj)
    External (NTLE, UnknownObj)
    External (NXD1, UnknownObj)
    External (NXD2, UnknownObj)
    External (NXD3, UnknownObj)
    External (NXD4, UnknownObj)
    External (NXD5, UnknownObj)
    External (NXD6, UnknownObj)
    External (NXD7, UnknownObj)
    External (NXD8, UnknownObj)
    External (PXGS, UnknownObj)
    External (TL10, UnknownObj)
    External (TL11, UnknownObj)
    External (TL12, UnknownObj)
    External (TL13, UnknownObj)
    External (TL14, UnknownObj)
    External (TL15, UnknownObj)
    External (TLE1, UnknownObj)
    External (TLE2, UnknownObj)
    External (TLE3, UnknownObj)
    External (TLE4, UnknownObj)
    External (TLE5, UnknownObj)
    External (TLE6, UnknownObj)
    External (TLE7, UnknownObj)
    External (TLE8, UnknownObj)
    External (TLE9, UnknownObj)
    External (TLSN, UnknownObj)

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
                            \_SB.PC00.NTRP ()
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
                        \_SB.PC00.NTRP ()
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
                        \_SB.PC00.NTRP ()
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
                Local1 = CACD /* External reference */
                Local0 = NTLE /* External reference */
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
                F3SD = NACD /* External reference */
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
                    Return (TLE2) /* External reference */
                }

                If ((Arg0 == 0x02))
                {
                    Return (TLE3) /* External reference */
                }

                If ((Arg0 == 0x03))
                {
                    Return (TLE4) /* External reference */
                }

                If ((Arg0 == 0x04))
                {
                    Return (TLE5) /* External reference */
                }

                If ((Arg0 == 0x05))
                {
                    Return (TLE6) /* External reference */
                }

                If ((Arg0 == 0x06))
                {
                    Return (TLE7) /* External reference */
                }

                If ((Arg0 == 0x07))
                {
                    Return (TLE8) /* External reference */
                }

                If ((Arg0 == 0x08))
                {
                    Return (TLE9) /* External reference */
                }

                If ((Arg0 == 0x09))
                {
                    Return (TL10) /* External reference */
                }

                If ((Arg0 == 0x0A))
                {
                    Return (TL11) /* External reference */
                }

                If ((Arg0 == 0x0B))
                {
                    Return (TL12) /* External reference */
                }

                If ((Arg0 == 0x0C))
                {
                    Return (TL13) /* External reference */
                }

                If ((Arg0 == 0x0D))
                {
                    Return (TL14) /* External reference */
                }

                If ((Arg0 == 0x0E))
                {
                    Return (TL15) /* External reference */
                }

                If ((Arg0 == 0x0F))
                {
                    Return (TLE1) /* External reference */
                }
            }

            Return (Zero)
        }
    }
}

