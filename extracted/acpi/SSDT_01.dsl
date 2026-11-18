/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20260930 (64-bit version)
 * Copyright (c) 2000 - 2026 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT_01.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x000010B9 (4281)
 *     Revision         0x01
 *     Checksum         0xF1
 *     OEM ID           "AmdRef"
 *     OEM Table ID     "AmdTabl"
 *     OEM Revision     0x00001000 (4096)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20200717 (538969879)
 */
DefinitionBlock ("", "SSDT", 1, "AmdRef", "AmdTabl", 0x00001000)
{
    External (_SB_.PC00, DeviceObj)
    External (_SB_.PC00.GFX0, DeviceObj)
    External (_SB_.PC00.GFX0.AINT, MethodObj)    // 2 Arguments
    External (_SB_.PC00.GFX0.IDAB, MethodObj)    // 0 Arguments
    External (_SB_.PC00.LPCB.H_EC.LSTE, UnknownObj)
    External (_SB_.PC00.PEG1, DeviceObj)
    External (_SB_.PC00.PEG1.PEGP, DeviceObj)
    External (_SB_.PC00.PEG1.PEGP._ADR, DeviceObj)
    External (_SB_.PC00.PEG1.PEGP.DD02, UnknownObj)
    External (_SB_.PC00.PEG1.PXP_._OFF, MethodObj)    // 0 Arguments
    External (_SB_.PC00.PEG1.PXP_._ON_, MethodObj)    // 0 Arguments
    External (_SB_.SGOV, MethodObj)    // 2 Arguments
    External (AMDA, UnknownObj)
    External (DSEN, UnknownObj)
    External (EBAS, UnknownObj)
    External (ECON, IntObj)
    External (HGFL, UnknownObj)
    External (HGMD, UnknownObj)
    External (HYSS, UnknownObj)
    External (MXD1, UnknownObj)
    External (MXD2, UnknownObj)
    External (MXD3, UnknownObj)
    External (MXD4, UnknownObj)
    External (MXD5, UnknownObj)
    External (MXD6, UnknownObj)
    External (MXD7, UnknownObj)
    External (MXD8, UnknownObj)
    External (NCPT, UnknownObj)
    External (NVAF, UnknownObj)
    External (NXD1, UnknownObj)
    External (NXD2, UnknownObj)
    External (NXD3, UnknownObj)
    External (NXD4, UnknownObj)
    External (NXD5, UnknownObj)
    External (NXD6, UnknownObj)
    External (NXD7, UnknownObj)
    External (NXD8, UnknownObj)
    External (OSYS, UnknownObj)
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
        Field (MSID, DWordAcc, Lock, Preserve)
        {
            VEID,   16, 
            Offset (0x40), 
            NVID,   32, 
            Offset (0x4C), 
            ATID,   32, 
            Offset (0x48B), 
                ,   1, 
            NHDA,   1
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
        Method (_ON, 0, Serialized)  // _ON_: Power On
        {
            If (CondRefOf (\_SB.PC00.PEG1.PXP._ON))
            {
                \_SB.PC00.PEG1.PXP._ON ()
            }

            Notify (\_SB.PC00.PEG1, Zero) // Bus Check
        }

        Method (_OFF, 0, Serialized)  // _OFF: Power Off
        {
            If (CondRefOf (\_SB.PC00.PEG1.PXP._OFF))
            {
                \_SB.PC00.PEG1.PXP._OFF ()
            }

            Notify (\_SB.PC00.PEG1, Zero) // Bus Check
        }
    }

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
            ELCL,   16, 
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
                If ((HGMD == 0x02))
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
                F1VM = 0x7FFF
                If ((HGMD == 0x02))
                {
                    F1FG = 0x4680
                    If ((OSYS < 0x07DD))
                    {
                        F1FG = 0x1E80
                    }
                }
                Else
                {
                    F1FG = 0x40
                }

                Return (TMP2) /* \_SB_.PC00.GFX0.ATPX.TMP2 */
            }

            If ((Arg0 == 0x02))
            {
                CreateWordField (Arg1, Zero, FN2S)
                CreateByteField (Arg1, 0x02, DGPR)
                If ((DGPR == Zero))
                {
                    \_SB.PC00.PEG1.PEGP._OFF ()
                }

                If ((DGPR == One))
                {
                    \_SB.PC00.PEG1.PEGP._ON ()
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
                TMP3 [0x0E] = ADPM (MXD2, One)
                TMP3 [0x13] = ADPM (MXD2, One)
                TMP3 [0x18] = ADPM (MXD3, One)
                TMP3 [0x1D] = ADPM (MXD3, 0x02)
                TMP3 [0x22] = ADPM (MXD4, One)
                TMP3 [0x27] = ADPM (MXD4, 0x02)
                TMP3 [0x2C] = ADPM (MXD5, One)
                TMP3 [0x31] = ADPM (MXD5, 0x02)
                TMP3 [0x36] = ADPM (MXD6, One)
                TMP3 [0x3B] = ADPM (MXD6, 0x02)
                TMP3 [0x40] = ADPM (MXD7, One)
                TMP3 [0x45] = ADPM (MXD7, 0x02)
                If ((HGFL & One))
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
                F0SF = 0x00200007
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
                F2SS = 0x0B
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
                    If ((\_SB.PC00.LPCB.H_EC.LSTE == One))
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

            If ((Arg0 == 0x16))
            {
                Name (TM22, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TM22, Zero, F22S)
                CreateByteField (TM22, 0x02, F22C)
                CreateDWordField (TM22, 0x03, F22V)
                F22S = 0x07
                F22C = 0x02
                F22V = NCPT /* External reference */
                Return (TM22) /* \_SB_.PC00.GFX0.ATIF.TM22 */
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

    Method (IDAB, 0, Serialized)
    {
        If (CondRefOf (\_SB.PC00.GFX0.IDAB))
        {
            \_SB.PC00.GFX0.IDAB ()
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
                Notify (\_SB.PC00.PEG1.PEGP.DD02, 0x87) // Device-Specific
            }

            If ((Arg0 == 0x03))
            {
                Notify (\_SB.PC00.PEG1.PEGP.DD02, 0x86) // Device-Specific
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
                    If ((HGMD == 0x02))
                    {
                        If ((\_SB.PC00.GFX0.AGXA == Zero))
                        {
                            Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                        }

                        If ((\_SB.PC00.GFX0.AGXA == One))
                        {
                            Notify (\_SB.PC00.PEG1.PEGP, 0x80) // Status Change
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
                If ((HGMD == 0x02))
                {
                    If ((\_SB.PC00.GFX0.AGXA == Zero))
                    {
                        Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                    }

                    If ((\_SB.PC00.GFX0.AGXA == One))
                    {
                        Notify (\_SB.PC00.PEG1.PEGP, 0x80) // Status Change
                    }
                }
                Else
                {
                    Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                }
            }
            Case (0x04)
            {
                If ((HGMD == 0x02))
                {
                    If ((\_SB.PC00.GFX0.AGXA == Zero))
                    {
                        Notify (\_SB.PC00.GFX0, 0x80) // Status Change
                    }

                    If ((\_SB.PC00.GFX0.AGXA == One))
                    {
                        Notify (\_SB.PC00.PEG1.PEGP, 0x80) // Status Change
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
}

