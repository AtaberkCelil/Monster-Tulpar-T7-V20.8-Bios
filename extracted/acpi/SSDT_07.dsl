/*
 * Intel ACPI Component Architecture
 * AML/ASL+ Disassembler version 20260930 (64-bit version)
 * Copyright (c) 2000 - 2026 Intel Corporation
 * 
 * Disassembling to symbolic ASL+ operators
 *
 * Disassembly of SSDT_07.dat
 *
 * Original Table Header:
 *     Signature        "SSDT"
 *     Length           0x00000601 (1537)
 *     Revision         0x01
 *     Checksum         0xD7
 *     OEM ID           "OemAti"
 *     OEM Table ID     "OemAti"
 *     OEM Revision     0x00001000 (4096)
 *     Compiler ID      "INTL"
 *     Compiler Version 0x20200717 (538969879)
 */
DefinitionBlock ("", "SSDT", 1, "OemAti", "OemAti", 0x00001000)
{
    External (_SB_.PC00.GFX0, DeviceObj)
    External (NCPT, UnknownObj)
    External (TBDT, UnknownObj)

    Scope (\_SB.PC00.GFX0)
    {
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
                F0SF = 0x03
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
                F1VM = 0x00037680
                F1FG = 0x00037680
                Return (TMP2) /* \_SB_.PC00.GFX0.ATPX.TMP2 */
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
                F0SN = 0x0A00
                F0SF = 0x00380003
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
                Return (TMP2) /* \_SB_.PC00.GFX0.ATIF.TMP2 */
            }

            If ((Arg0 == 0x14))
            {
                Name (TM20, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                OperationRegion (DGFX, SystemMemory, TBDT, 0x3E)
                Field (DGFX, ByteAcc, NoLock, Preserve)
                {
                    TBDS,   16, 
                    RPBN,   16, 
                    RPDN,   16, 
                    RPFN,   16, 
                    RPVI,   16, 
                    RPDI,   16, 
                    HUBN,   16, 
                    HUDN,   16, 
                    HUFN,   16, 
                    HUVI,   16, 
                    HUDI,   16, 
                    HDBN,   16, 
                    HDDN,   16, 
                    HDFN,   16, 
                    HDVI,   16, 
                    HDDI,   16, 
                    EUBN,   16, 
                    EUDN,   16, 
                    EUFN,   16, 
                    EUVI,   16, 
                    EUDI,   16, 
                    EDBN,   16, 
                    EDDN,   16, 
                    EDFN,   16, 
                    EDVI,   16, 
                    EDDI,   16, 
                    EPBN,   16, 
                    EPDN,   16, 
                    EPFN,   16, 
                    EPVI,   16, 
                    EPDI,   16
                }

                CreateWordField (TM20, Zero, F20S)
                CreateWordField (TM20, 0x02, P0BN)
                CreateWordField (TM20, 0x04, P0DN)
                CreateWordField (TM20, 0x06, P0FN)
                CreateWordField (TM20, 0x08, P0VI)
                CreateWordField (TM20, 0x0A, P0DI)
                CreateWordField (TM20, 0x0C, P1BN)
                CreateWordField (TM20, 0x0E, P1DN)
                CreateWordField (TM20, 0x10, P1FN)
                CreateWordField (TM20, 0x12, P1VI)
                CreateWordField (TM20, 0x14, P1DI)
                CreateWordField (TM20, 0x16, P2BN)
                CreateWordField (TM20, 0x18, P2DN)
                CreateWordField (TM20, 0x1A, P2FN)
                CreateWordField (TM20, 0x1C, P2VI)
                CreateWordField (TM20, 0x1E, P2DI)
                CreateWordField (TM20, 0x20, P3BN)
                CreateWordField (TM20, 0x22, P3DN)
                CreateWordField (TM20, 0x24, P3FN)
                CreateWordField (TM20, 0x26, P3VI)
                CreateWordField (TM20, 0x28, P3DI)
                CreateWordField (TM20, 0x2A, P4BN)
                CreateWordField (TM20, 0x2C, P4DN)
                CreateWordField (TM20, 0x2E, P4FN)
                CreateWordField (TM20, 0x30, P4VI)
                CreateWordField (TM20, 0x32, P4DI)
                CreateWordField (TM20, 0x34, P5BN)
                CreateWordField (TM20, 0x36, P5DN)
                CreateWordField (TM20, 0x38, P5FN)
                CreateWordField (TM20, 0x3A, P5VI)
                CreateWordField (TM20, 0x3C, P5DI)
                F20S = TBDS /* \_SB_.PC00.GFX0.ATIF.TBDS */
                P0BN = RPBN /* \_SB_.PC00.GFX0.ATIF.RPBN */
                P0DN = RPDN /* \_SB_.PC00.GFX0.ATIF.RPDN */
                P0FN = RPFN /* \_SB_.PC00.GFX0.ATIF.RPFN */
                P0VI = RPVI /* \_SB_.PC00.GFX0.ATIF.RPVI */
                P0DI = RPDI /* \_SB_.PC00.GFX0.ATIF.RPDI */
                P1BN = HUBN /* \_SB_.PC00.GFX0.ATIF.HUBN */
                P1DN = HUDN /* \_SB_.PC00.GFX0.ATIF.HUDN */
                P1FN = HUFN /* \_SB_.PC00.GFX0.ATIF.HUFN */
                P1VI = HUVI /* \_SB_.PC00.GFX0.ATIF.HUVI */
                P1DI = HUDI /* \_SB_.PC00.GFX0.ATIF.HUDI */
                P2BN = HDBN /* \_SB_.PC00.GFX0.ATIF.HDBN */
                P2DN = HDDN /* \_SB_.PC00.GFX0.ATIF.HDDN */
                P2FN = HDFN /* \_SB_.PC00.GFX0.ATIF.HDFN */
                P2VI = HDVI /* \_SB_.PC00.GFX0.ATIF.HDVI */
                P2DI = HDDI /* \_SB_.PC00.GFX0.ATIF.HDDI */
                P3BN = EUBN /* \_SB_.PC00.GFX0.ATIF.EUBN */
                P3DN = EUDN /* \_SB_.PC00.GFX0.ATIF.EUDN */
                P3FN = EUFN /* \_SB_.PC00.GFX0.ATIF.EUFN */
                P3VI = EUVI /* \_SB_.PC00.GFX0.ATIF.EUVI */
                P3DI = EUDI /* \_SB_.PC00.GFX0.ATIF.EUDI */
                P4BN = EDBN /* \_SB_.PC00.GFX0.ATIF.EDBN */
                P4DN = EDDN /* \_SB_.PC00.GFX0.ATIF.EDDN */
                P4FN = EDFN /* \_SB_.PC00.GFX0.ATIF.EDFN */
                P4VI = EDVI /* \_SB_.PC00.GFX0.ATIF.EDVI */
                P4DI = EDDI /* \_SB_.PC00.GFX0.ATIF.EDDI */
                P5BN = EPBN /* \_SB_.PC00.GFX0.ATIF.EPBN */
                P5DN = EPDN /* \_SB_.PC00.GFX0.ATIF.EPDN */
                P5FN = EPFN /* \_SB_.PC00.GFX0.ATIF.EPFN */
                P5VI = EPVI /* \_SB_.PC00.GFX0.ATIF.EPVI */
                P5DI = EPDI /* \_SB_.PC00.GFX0.ATIF.EPDI */
                Return (TM20) /* \_SB_.PC00.GFX0.ATIF.TM20 */
            }

            If ((Arg0 == 0x15))
            {
                Name (TM21, Buffer (0x0100)
                {
                     0x00                                             // .
                })
                CreateWordField (TM21, Zero, F21N)
                CreateWordField (TM21, 0x02, F21S)
                CreateWordField (TM21, 0x04, EGP1)
                CreateWordField (TM21, 0x06, EGB1)
                F21N = One
                F21S = 0x08
                EGP1 = One
                EGB1 = One
                Return (TM21) /* \_SB_.PC00.GFX0.ATIF.TM21 */
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
        }
    }
}

