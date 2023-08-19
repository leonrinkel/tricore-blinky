/* SPDX-License-Identifier: MIT */
/**
 * \file      inc/port.h
 * \brief     Definitions regarding PORT registers structure
 * \copyright Copyright (c) 2023 Leon Rinkel
 */

#ifndef PORT_H
#define PORT_H

#include <stdint.h>

/** \brief PORT P00 register base address */
#define PORT_P00_ADDR 0xF003A000u
/** \brief PORT P01 register base address */
#define PORT_P01_ADDR 0xF003A100u
/** \brief PORT P02 register base address */
#define PORT_P02_ADDR 0xF003A200u
/** \brief PORT P10 register base address */
#define PORT_P10_ADDR 0xF003AA00u
/** \brief PORT P11 register base address */
#define PORT_P11_ADDR 0xF003AB00u
/** \brief PORT P12 register base address */
#define PORT_P12_ADDR 0xF003AC00u
/** \brief PORT P13 register base address */
#define PORT_P13_ADDR 0xF003AD00u
/** \brief PORT P14 register base address */
#define PORT_P14_ADDR 0xF003AE00u
/** \brief PORT P15 register base address */
#define PORT_P15_ADDR 0xF003AF00u
/** \brief PORT P20 register base address */
#define PORT_P20_ADDR 0xF003B400u
/** \brief PORT P21 register base address */
#define PORT_P21_ADDR 0xF003B500u
/** \brief PORT P22 register base address */
#define PORT_P22_ADDR 0xF003B600u
/** \brief PORT P23 register base address */
#define PORT_P23_ADDR 0xF003B700u
/** \brief PORT P24 register base address */
#define PORT_P24_ADDR 0xF003B800u
/** \brief PORT P25 register base address */
#define PORT_P25_ADDR 0xF003B900u
/** \brief PORT P26 register base address */
#define PORT_P26_ADDR 0xF003BA00u
/** \brief PORT P30 register base address */
#define PORT_P30_ADDR 0xF003BE00u
/** \brief PORT P31 register base address */
#define PORT_P31_ADDR 0xF003BF00u
/** \brief PORT P32 register base address */
#define PORT_P32_ADDR 0xF003C000u
/** \brief PORT P33 register base address */
#define PORT_P33_ADDR 0xF003C100u
/** \brief PORT P34 register base address */
#define PORT_P34_ADDR 0xF003C200u
/** \brief PORT P40 register base address */
#define PORT_P40_ADDR 0xF003C800u
/** \brief PORT P41 register base address */
#define PORT_P41_ADDR 0xF003C900u

/** \name PORT OUT register */
/**@{*/

/** \brief PORT OUT register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Output bit 0 */
		uint32_t P0:1;
		/** \brief Output bit 1 */
		uint32_t P1:1;
		/** \brief Output bit 2 */
		uint32_t P2:1;
		/** \brief Output bit 3 */
		uint32_t P3:1;
		/** \brief Output bit 4 */
		uint32_t P4:1;
		/** \brief Output bit 5 */
		uint32_t P5:1;
		/** \brief Output bit 6 */
		uint32_t P6:1;
		/** \brief Output bit 7 */
		uint32_t P7:1;
		/** \brief Output bit 8 */
		uint32_t P8:1;
		/** \brief Output bit 9 */
		uint32_t P9:1;
		/** \brief Output bit 10 */
		uint32_t P10:1;
		/** \brief Output bit 11 */
		uint32_t P11:1;
		/** \brief Output bit 12 */
		uint32_t P12:1;
		/** \brief Output bit 13 */
		uint32_t P13:1;
		/** \brief Output bit 14 */
		uint32_t P14:1;
		/** \brief Output bit 15 */
		uint32_t P15:1;
		/** \brief Reserved */
		uint32_t :16;
	} B;
} port_out_t;

/** \brief PORT OUT register address offset */
#define PORT_OUT_OFF 0x000u

/** \brief PORT P00 OUT register address */
#define PORT_P00_OUT_ADDR (PORT_P00_ADDR + PORT_OUT_OFF)
/** \brief PORT P01 OUT register address */
#define PORT_P01_OUT_ADDR (PORT_P01_ADDR + PORT_OUT_OFF)
/** \brief PORT P02 OUT register address */
#define PORT_P02_OUT_ADDR (PORT_P02_ADDR + PORT_OUT_OFF)
/** \brief PORT P10 OUT register address */
#define PORT_P10_OUT_ADDR (PORT_P10_ADDR + PORT_OUT_OFF)
/** \brief PORT P11 OUT register address */
#define PORT_P11_OUT_ADDR (PORT_P11_ADDR + PORT_OUT_OFF)
/** \brief PORT P12 OUT register address */
#define PORT_P12_OUT_ADDR (PORT_P12_ADDR + PORT_OUT_OFF)
/** \brief PORT P13 OUT register address */
#define PORT_P13_OUT_ADDR (PORT_P13_ADDR + PORT_OUT_OFF)
/** \brief PORT P14 OUT register address */
#define PORT_P14_OUT_ADDR (PORT_P14_ADDR + PORT_OUT_OFF)
/** \brief PORT P15 OUT register address */
#define PORT_P15_OUT_ADDR (PORT_P15_ADDR + PORT_OUT_OFF)
/** \brief PORT P20 OUT register address */
#define PORT_P20_OUT_ADDR (PORT_P20_ADDR + PORT_OUT_OFF)
/** \brief PORT P21 OUT register address */
#define PORT_P21_OUT_ADDR (PORT_P21_ADDR + PORT_OUT_OFF)
/** \brief PORT P22 OUT register address */
#define PORT_P22_OUT_ADDR (PORT_P22_ADDR + PORT_OUT_OFF)
/** \brief PORT P23 OUT register address */
#define PORT_P23_OUT_ADDR (PORT_P23_ADDR + PORT_OUT_OFF)
/** \brief PORT P24 OUT register address */
#define PORT_P24_OUT_ADDR (PORT_P24_ADDR + PORT_OUT_OFF)
/** \brief PORT P25 OUT register address */
#define PORT_P25_OUT_ADDR (PORT_P25_ADDR + PORT_OUT_OFF)
/** \brief PORT P26 OUT register address */
#define PORT_P26_OUT_ADDR (PORT_P26_ADDR + PORT_OUT_OFF)
/** \brief PORT P30 OUT register address */
#define PORT_P30_OUT_ADDR (PORT_P30_ADDR + PORT_OUT_OFF)
/** \brief PORT P31 OUT register address */
#define PORT_P31_OUT_ADDR (PORT_P31_ADDR + PORT_OUT_OFF)
/** \brief PORT P32 OUT register address */
#define PORT_P32_OUT_ADDR (PORT_P32_ADDR + PORT_OUT_OFF)
/** \brief PORT P33 OUT register address */
#define PORT_P33_OUT_ADDR (PORT_P33_ADDR + PORT_OUT_OFF)
/** \brief PORT P34 OUT register address */
#define PORT_P34_OUT_ADDR (PORT_P34_ADDR + PORT_OUT_OFF)
/** \brief PORT P40 OUT register address */
#define PORT_P40_OUT_ADDR (PORT_P40_ADDR + PORT_OUT_OFF)
/** \brief PORT P41 OUT register address */
#define PORT_P41_OUT_ADDR (PORT_P41_ADDR + PORT_OUT_OFF)

/** \brief PORT P00 OUT register */
#define PORT_P00_OUT (*((volatile port_out_t*) PORT_P00_OUT_ADDR))
/** \brief PORT P01 OUT register */
#define PORT_P01_OUT (*((volatile port_out_t*) PORT_P01_OUT_ADDR))
/** \brief PORT P02 OUT register */
#define PORT_P02_OUT (*((volatile port_out_t*) PORT_P02_OUT_ADDR))
/** \brief PORT P10 OUT register */
#define PORT_P10_OUT (*((volatile port_out_t*) PORT_P10_OUT_ADDR))
/** \brief PORT P11 OUT register */
#define PORT_P11_OUT (*((volatile port_out_t*) PORT_P11_OUT_ADDR))
/** \brief PORT P12 OUT register */
#define PORT_P12_OUT (*((volatile port_out_t*) PORT_P12_OUT_ADDR))
/** \brief PORT P13 OUT register */
#define PORT_P13_OUT (*((volatile port_out_t*) PORT_P13_OUT_ADDR))
/** \brief PORT P14 OUT register */
#define PORT_P14_OUT (*((volatile port_out_t*) PORT_P14_OUT_ADDR))
/** \brief PORT P15 OUT register */
#define PORT_P15_OUT (*((volatile port_out_t*) PORT_P15_OUT_ADDR))
/** \brief PORT P20 OUT register */
#define PORT_P20_OUT (*((volatile port_out_t*) PORT_P20_OUT_ADDR))
/** \brief PORT P21 OUT register */
#define PORT_P21_OUT (*((volatile port_out_t*) PORT_P21_OUT_ADDR))
/** \brief PORT P22 OUT register */
#define PORT_P22_OUT (*((volatile port_out_t*) PORT_P22_OUT_ADDR))
/** \brief PORT P23 OUT register */
#define PORT_P23_OUT (*((volatile port_out_t*) PORT_P23_OUT_ADDR))
/** \brief PORT P24 OUT register */
#define PORT_P24_OUT (*((volatile port_out_t*) PORT_P24_OUT_ADDR))
/** \brief PORT P25 OUT register */
#define PORT_P25_OUT (*((volatile port_out_t*) PORT_P25_OUT_ADDR))
/** \brief PORT P26 OUT register */
#define PORT_P26_OUT (*((volatile port_out_t*) PORT_P26_OUT_ADDR))
/** \brief PORT P30 OUT register */
#define PORT_P30_OUT (*((volatile port_out_t*) PORT_P30_OUT_ADDR))
/** \brief PORT P31 OUT register */
#define PORT_P31_OUT (*((volatile port_out_t*) PORT_P31_OUT_ADDR))
/** \brief PORT P32 OUT register */
#define PORT_P32_OUT (*((volatile port_out_t*) PORT_P32_OUT_ADDR))
/** \brief PORT P33 OUT register */
#define PORT_P33_OUT (*((volatile port_out_t*) PORT_P33_OUT_ADDR))
/** \brief PORT P34 OUT register */
#define PORT_P34_OUT (*((volatile port_out_t*) PORT_P34_OUT_ADDR))
/** \brief PORT P40 OUT register */
#define PORT_P40_OUT (*((volatile port_out_t*) PORT_P40_OUT_ADDR))
/** \brief PORT P41 OUT register */
#define PORT_P41_OUT (*((volatile port_out_t*) PORT_P41_OUT_ADDR))

/** \brief PORT OUT.P0 bit offset */
#define PORT_OUT_P0_OFF 0u
/** \brief PORT OUT.P0 bit mask */
#define PORT_OUT_P0_MSK 0x00000001u

/** \brief PORT OUT.P1 bit offset */
#define PORT_OUT_P1_OFF 1u
/** \brief PORT OUT.P1 bit mask */
#define PORT_OUT_P1_MSK 0x00000002u

/** \brief PORT OUT.P2 bit offset */
#define PORT_OUT_P2_OFF 2u
/** \brief PORT OUT.P2 bit mask */
#define PORT_OUT_P2_MSK 0x00000004u

/** \brief PORT OUT.P3 bit offset */
#define PORT_OUT_P3_OFF 3u
/** \brief PORT OUT.P3 bit mask */
#define PORT_OUT_P3_MSK 0x00000008u

/** \brief PORT OUT.P4 bit offset */
#define PORT_OUT_P4_OFF 4u
/** \brief PORT OUT.P4 bit mask */
#define PORT_OUT_P4_MSK 0x00000010u

/** \brief PORT OUT.P5 bit offset */
#define PORT_OUT_P5_OFF 5u
/** \brief PORT OUT.P5 bit mask */
#define PORT_OUT_P5_MSK 0x00000020u

/** \brief PORT OUT.P6 bit offset */
#define PORT_OUT_P6_OFF 6u
/** \brief PORT OUT.P6 bit mask */
#define PORT_OUT_P6_MSK 0x00000040u

/** \brief PORT OUT.P7 bit offset */
#define PORT_OUT_P7_OFF 7u
/** \brief PORT OUT.P7 bit mask */
#define PORT_OUT_P7_MSK 0x00000080u

/** \brief PORT OUT.P8 bit offset */
#define PORT_OUT_P8_OFF 8u
/** \brief PORT OUT.P8 bit mask */
#define PORT_OUT_P8_MSK 0x00000100u

/** \brief PORT OUT.P9 bit offset */
#define PORT_OUT_P9_OFF 9u
/** \brief PORT OUT.P9 bit mask */
#define PORT_OUT_P9_MSK 0x00000200u

/** \brief PORT OUT.P10 bit offset */
#define PORT_OUT_P10_OFF 10u
/** \brief PORT OUT.P10 bit mask */
#define PORT_OUT_P10_MSK 0x00000400u

/** \brief PORT OUT.P11 bit offset */
#define PORT_OUT_P11_OFF 11u
/** \brief PORT OUT.P11 bit mask */
#define PORT_OUT_P11_MSK 0x00000800u

/** \brief PORT OUT.P12 bit offset */
#define PORT_OUT_P12_OFF 12u
/** \brief PORT OUT.P12 bit mask */
#define PORT_OUT_P12_MSK 0x00001000u

/** \brief PORT OUT.P13 bit offset */
#define PORT_OUT_P13_OFF 13u
/** \brief PORT OUT.P13 bit mask */
#define PORT_OUT_P13_MSK 0x00002000u

/** \brief PORT OUT.P14 bit offset */
#define PORT_OUT_P14_OFF 14u
/** \brief PORT OUT.P14 bit mask */
#define PORT_OUT_P14_MSK 0x00004000u

/** \brief PORT OUT.P15 bit offset */
#define PORT_OUT_P15_OFF 15u
/** \brief PORT OUT.P15 bit mask */
#define PORT_OUT_P15_MSK 0x00008000u

/**@}*/

/** \name PORT IOCR register */
/**@{*/

/** \brief PORT IOCR0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 0 */
		uint32_t PC0:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 1 */
		uint32_t PC1:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 2 */
		uint32_t PC2:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 3 */
		uint32_t PC3:5;
	} B;
} port_iocr0_t;

/** \brief PORT IOCR0 register address offset */
#define PORT_IOCR0_OFF 0x010u

/** \brief PORT P00 IOCR0 register address */
#define PORT_P00_IOCR0_ADDR (PORT_P00_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P01 IOCR0 register address */
#define PORT_P01_IOCR0_ADDR (PORT_P01_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P02 IOCR0 register address */
#define PORT_P02_IOCR0_ADDR (PORT_P02_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P10 IOCR0 register address */
#define PORT_P10_IOCR0_ADDR (PORT_P10_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P11 IOCR0 register address */
#define PORT_P11_IOCR0_ADDR (PORT_P11_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P12 IOCR0 register address */
#define PORT_P12_IOCR0_ADDR (PORT_P12_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P13 IOCR0 register address */
#define PORT_P13_IOCR0_ADDR (PORT_P13_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P14 IOCR0 register address */
#define PORT_P14_IOCR0_ADDR (PORT_P14_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P15 IOCR0 register address */
#define PORT_P15_IOCR0_ADDR (PORT_P15_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P20 IOCR0 register address */
#define PORT_P20_IOCR0_ADDR (PORT_P20_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P21 IOCR0 register address */
#define PORT_P21_IOCR0_ADDR (PORT_P21_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P22 IOCR0 register address */
#define PORT_P22_IOCR0_ADDR (PORT_P22_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P23 IOCR0 register address */
#define PORT_P23_IOCR0_ADDR (PORT_P23_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P24 IOCR0 register address */
#define PORT_P24_IOCR0_ADDR (PORT_P24_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P25 IOCR0 register address */
#define PORT_P25_IOCR0_ADDR (PORT_P25_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P26 IOCR0 register address */
#define PORT_P26_IOCR0_ADDR (PORT_P26_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P30 IOCR0 register address */
#define PORT_P30_IOCR0_ADDR (PORT_P30_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P31 IOCR0 register address */
#define PORT_P31_IOCR0_ADDR (PORT_P31_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P32 IOCR0 register address */
#define PORT_P32_IOCR0_ADDR (PORT_P32_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P33 IOCR0 register address */
#define PORT_P33_IOCR0_ADDR (PORT_P33_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P34 IOCR0 register address */
#define PORT_P34_IOCR0_ADDR (PORT_P34_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P40 IOCR0 register address */
#define PORT_P40_IOCR0_ADDR (PORT_P40_ADDR + PORT_IOCR0_OFF)
/** \brief PORT P41 IOCR0 register address */
#define PORT_P41_IOCR0_ADDR (PORT_P41_ADDR + PORT_IOCR0_OFF)

/** \brief PORT P00 IOCR0 register */
#define PORT_P00_IOCR0 (*((volatile port_iocr0_t*) PORT_P00_IOCR0_ADDR))
/** \brief PORT P01 IOCR0 register */
#define PORT_P01_IOCR0 (*((volatile port_iocr0_t*) PORT_P01_IOCR0_ADDR))
/** \brief PORT P02 IOCR0 register */
#define PORT_P02_IOCR0 (*((volatile port_iocr0_t*) PORT_P02_IOCR0_ADDR))
/** \brief PORT P10 IOCR0 register */
#define PORT_P10_IOCR0 (*((volatile port_iocr0_t*) PORT_P10_IOCR0_ADDR))
/** \brief PORT P11 IOCR0 register */
#define PORT_P11_IOCR0 (*((volatile port_iocr0_t*) PORT_P11_IOCR0_ADDR))
/** \brief PORT P12 IOCR0 register */
#define PORT_P12_IOCR0 (*((volatile port_iocr0_t*) PORT_P12_IOCR0_ADDR))
/** \brief PORT P13 IOCR0 register */
#define PORT_P13_IOCR0 (*((volatile port_iocr0_t*) PORT_P13_IOCR0_ADDR))
/** \brief PORT P14 IOCR0 register */
#define PORT_P14_IOCR0 (*((volatile port_iocr0_t*) PORT_P14_IOCR0_ADDR))
/** \brief PORT P15 IOCR0 register */
#define PORT_P15_IOCR0 (*((volatile port_iocr0_t*) PORT_P15_IOCR0_ADDR))
/** \brief PORT P20 IOCR0 register */
#define PORT_P20_IOCR0 (*((volatile port_iocr0_t*) PORT_P20_IOCR0_ADDR))
/** \brief PORT P21 IOCR0 register */
#define PORT_P21_IOCR0 (*((volatile port_iocr0_t*) PORT_P21_IOCR0_ADDR))
/** \brief PORT P22 IOCR0 register */
#define PORT_P22_IOCR0 (*((volatile port_iocr0_t*) PORT_P22_IOCR0_ADDR))
/** \brief PORT P23 IOCR0 register */
#define PORT_P23_IOCR0 (*((volatile port_iocr0_t*) PORT_P23_IOCR0_ADDR))
/** \brief PORT P24 IOCR0 register */
#define PORT_P24_IOCR0 (*((volatile port_iocr0_t*) PORT_P24_IOCR0_ADDR))
/** \brief PORT P25 IOCR0 register */
#define PORT_P25_IOCR0 (*((volatile port_iocr0_t*) PORT_P25_IOCR0_ADDR))
/** \brief PORT P26 IOCR0 register */
#define PORT_P26_IOCR0 (*((volatile port_iocr0_t*) PORT_P26_IOCR0_ADDR))
/** \brief PORT P30 IOCR0 register */
#define PORT_P30_IOCR0 (*((volatile port_iocr0_t*) PORT_P30_IOCR0_ADDR))
/** \brief PORT P31 IOCR0 register */
#define PORT_P31_IOCR0 (*((volatile port_iocr0_t*) PORT_P31_IOCR0_ADDR))
/** \brief PORT P32 IOCR0 register */
#define PORT_P32_IOCR0 (*((volatile port_iocr0_t*) PORT_P32_IOCR0_ADDR))
/** \brief PORT P33 IOCR0 register */
#define PORT_P33_IOCR0 (*((volatile port_iocr0_t*) PORT_P33_IOCR0_ADDR))
/** \brief PORT P34 IOCR0 register */
#define PORT_P34_IOCR0 (*((volatile port_iocr0_t*) PORT_P34_IOCR0_ADDR))
/** \brief PORT P40 IOCR0 register */
#define PORT_P40_IOCR0 (*((volatile port_iocr0_t*) PORT_P40_IOCR0_ADDR))
/** \brief PORT P41 IOCR0 register */
#define PORT_P41_IOCR0 (*((volatile port_iocr0_t*) PORT_P41_IOCR0_ADDR))

/** \brief PORT IOCR0.PC0 bit offset */
#define PORT_IOCR0_PC0_OFF 3u
/** \brief PORT IOCR0.PC0 bit mask */
#define PORT_IOCR0_PC0_MSK 0x000000F8u

/** \brief PORT IOCR0.PC1 bit offset */
#define PORT_IOCR0_PC1_OFF 11u
/** \brief PORT IOCR0.PC1 bit mask */
#define PORT_IOCR0_PC1_MSK 0x0000F800u

/** \brief PORT IOCR0.PC2 bit offset */
#define PORT_IOCR0_PC2_OFF 19u
/** \brief PORT IOCR0.PC2 bit mask */
#define PORT_IOCR0_PC2_MSK 0x00F80000u

/** \brief PORT IOCR0.PC3 bit offset */
#define PORT_IOCR0_PC3_OFF 27u
/** \brief PORT IOCR0.PC3 bit mask */
#define PORT_IOCR0_PC3_MSK 0xF8000000u

/** \brief PORT IOCR4 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 4 */
		uint32_t PC4:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 5 */
		uint32_t PC5:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 6 */
		uint32_t PC6:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 7 */
		uint32_t PC7:5;
	} B;
} port_iocr4_t;

/** \brief PORT IOCR4 register address offset */
#define PORT_IOCR4_OFF 0x014u

/** \brief PORT P00 IOCR4 register address */
#define PORT_P00_IOCR4_ADDR (PORT_P00_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P01 IOCR4 register address */
#define PORT_P01_IOCR4_ADDR (PORT_P01_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P02 IOCR4 register address */
#define PORT_P02_IOCR4_ADDR (PORT_P02_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P10 IOCR4 register address */
#define PORT_P10_IOCR4_ADDR (PORT_P10_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P11 IOCR4 register address */
#define PORT_P11_IOCR4_ADDR (PORT_P11_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P12 IOCR4 register address */
#define PORT_P12_IOCR4_ADDR (PORT_P12_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P13 IOCR4 register address */
#define PORT_P13_IOCR4_ADDR (PORT_P13_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P14 IOCR4 register address */
#define PORT_P14_IOCR4_ADDR (PORT_P14_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P15 IOCR4 register address */
#define PORT_P15_IOCR4_ADDR (PORT_P15_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P20 IOCR4 register address */
#define PORT_P20_IOCR4_ADDR (PORT_P20_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P21 IOCR4 register address */
#define PORT_P21_IOCR4_ADDR (PORT_P21_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P22 IOCR4 register address */
#define PORT_P22_IOCR4_ADDR (PORT_P22_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P23 IOCR4 register address */
#define PORT_P23_IOCR4_ADDR (PORT_P23_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P24 IOCR4 register address */
#define PORT_P24_IOCR4_ADDR (PORT_P24_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P25 IOCR4 register address */
#define PORT_P25_IOCR4_ADDR (PORT_P25_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P26 IOCR4 register address */
#define PORT_P26_IOCR4_ADDR (PORT_P26_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P30 IOCR4 register address */
#define PORT_P30_IOCR4_ADDR (PORT_P30_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P31 IOCR4 register address */
#define PORT_P31_IOCR4_ADDR (PORT_P31_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P32 IOCR4 register address */
#define PORT_P32_IOCR4_ADDR (PORT_P32_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P33 IOCR4 register address */
#define PORT_P33_IOCR4_ADDR (PORT_P33_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P34 IOCR4 register address */
#define PORT_P34_IOCR4_ADDR (PORT_P34_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P40 IOCR4 register address */
#define PORT_P40_IOCR4_ADDR (PORT_P40_ADDR + PORT_IOCR4_OFF)
/** \brief PORT P41 IOCR4 register address */
#define PORT_P41_IOCR4_ADDR (PORT_P41_ADDR + PORT_IOCR4_OFF)

/** \brief PORT P00 IOCR4 register */
#define PORT_P00_IOCR4 (*((volatile port_iocr4_t*) PORT_P00_IOCR4_ADDR))
/** \brief PORT P01 IOCR4 register */
#define PORT_P01_IOCR4 (*((volatile port_iocr4_t*) PORT_P01_IOCR4_ADDR))
/** \brief PORT P02 IOCR4 register */
#define PORT_P02_IOCR4 (*((volatile port_iocr4_t*) PORT_P02_IOCR4_ADDR))
/** \brief PORT P10 IOCR4 register */
#define PORT_P10_IOCR4 (*((volatile port_iocr4_t*) PORT_P10_IOCR4_ADDR))
/** \brief PORT P11 IOCR4 register */
#define PORT_P11_IOCR4 (*((volatile port_iocr4_t*) PORT_P11_IOCR4_ADDR))
/** \brief PORT P12 IOCR4 register */
#define PORT_P12_IOCR4 (*((volatile port_iocr4_t*) PORT_P12_IOCR4_ADDR))
/** \brief PORT P13 IOCR4 register */
#define PORT_P13_IOCR4 (*((volatile port_iocr4_t*) PORT_P13_IOCR4_ADDR))
/** \brief PORT P14 IOCR4 register */
#define PORT_P14_IOCR4 (*((volatile port_iocr4_t*) PORT_P14_IOCR4_ADDR))
/** \brief PORT P15 IOCR4 register */
#define PORT_P15_IOCR4 (*((volatile port_iocr4_t*) PORT_P15_IOCR4_ADDR))
/** \brief PORT P20 IOCR4 register */
#define PORT_P20_IOCR4 (*((volatile port_iocr4_t*) PORT_P20_IOCR4_ADDR))
/** \brief PORT P21 IOCR4 register */
#define PORT_P21_IOCR4 (*((volatile port_iocr4_t*) PORT_P21_IOCR4_ADDR))
/** \brief PORT P22 IOCR4 register */
#define PORT_P22_IOCR4 (*((volatile port_iocr4_t*) PORT_P22_IOCR4_ADDR))
/** \brief PORT P23 IOCR4 register */
#define PORT_P23_IOCR4 (*((volatile port_iocr4_t*) PORT_P23_IOCR4_ADDR))
/** \brief PORT P24 IOCR4 register */
#define PORT_P24_IOCR4 (*((volatile port_iocr4_t*) PORT_P24_IOCR4_ADDR))
/** \brief PORT P25 IOCR4 register */
#define PORT_P25_IOCR4 (*((volatile port_iocr4_t*) PORT_P25_IOCR4_ADDR))
/** \brief PORT P26 IOCR4 register */
#define PORT_P26_IOCR4 (*((volatile port_iocr4_t*) PORT_P26_IOCR4_ADDR))
/** \brief PORT P30 IOCR4 register */
#define PORT_P30_IOCR4 (*((volatile port_iocr4_t*) PORT_P30_IOCR4_ADDR))
/** \brief PORT P31 IOCR4 register */
#define PORT_P31_IOCR4 (*((volatile port_iocr4_t*) PORT_P31_IOCR4_ADDR))
/** \brief PORT P32 IOCR4 register */
#define PORT_P32_IOCR4 (*((volatile port_iocr4_t*) PORT_P32_IOCR4_ADDR))
/** \brief PORT P33 IOCR4 register */
#define PORT_P33_IOCR4 (*((volatile port_iocr4_t*) PORT_P33_IOCR4_ADDR))
/** \brief PORT P34 IOCR4 register */
#define PORT_P34_IOCR4 (*((volatile port_iocr4_t*) PORT_P34_IOCR4_ADDR))
/** \brief PORT P40 IOCR4 register */
#define PORT_P40_IOCR4 (*((volatile port_iocr4_t*) PORT_P40_IOCR4_ADDR))
/** \brief PORT P41 IOCR4 register */
#define PORT_P41_IOCR4 (*((volatile port_iocr4_t*) PORT_P41_IOCR4_ADDR))

/** \brief PORT IOCR4.PC4 bit offset */
#define PORT_IOCR4_PC4_OFF 3u
/** \brief PORT IOCR4.PC4 bit mask */
#define PORT_IOCR4_PC4_MSK 0x000000F8u

/** \brief PORT IOCR4.PC5 bit offset */
#define PORT_IOCR4_PC5_OFF 11u
/** \brief PORT IOCR4.PC5 bit mask */
#define PORT_IOCR4_PC5_MSK 0x0000F800u

/** \brief PORT IOCR4.PC6 bit offset */
#define PORT_IOCR4_PC6_OFF 19u
/** \brief PORT IOCR4.PC6 bit mask */
#define PORT_IOCR4_PC6_MSK 0x00F80000u

/** \brief PORT IOCR4.PC7 bit offset */
#define PORT_IOCR4_PC7_OFF 27u
/** \brief PORT IOCR4.PC7 bit mask */
#define PORT_IOCR4_PC7_MSK 0xF8000000u

/** \brief PORT IOCR8 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 8 */
		uint32_t PC8:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 9 */
		uint32_t PC9:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 10 */
		uint32_t PC10:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 11 */
		uint32_t PC11:5;
	} B;
} port_iocr8_t;

/** \brief PORT IOCR8 register address offset */
#define PORT_IOCR8_OFF 0x018u

/** \brief PORT P00 IOCR8 register address */
#define PORT_P00_IOCR8_ADDR (PORT_P00_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P01 IOCR8 register address */
#define PORT_P01_IOCR8_ADDR (PORT_P01_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P02 IOCR8 register address */
#define PORT_P02_IOCR8_ADDR (PORT_P02_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P10 IOCR8 register address */
#define PORT_P10_IOCR8_ADDR (PORT_P10_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P11 IOCR8 register address */
#define PORT_P11_IOCR8_ADDR (PORT_P11_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P12 IOCR8 register address */
#define PORT_P12_IOCR8_ADDR (PORT_P12_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P13 IOCR8 register address */
#define PORT_P13_IOCR8_ADDR (PORT_P13_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P14 IOCR8 register address */
#define PORT_P14_IOCR8_ADDR (PORT_P14_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P15 IOCR8 register address */
#define PORT_P15_IOCR8_ADDR (PORT_P15_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P20 IOCR8 register address */
#define PORT_P20_IOCR8_ADDR (PORT_P20_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P21 IOCR8 register address */
#define PORT_P21_IOCR8_ADDR (PORT_P21_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P22 IOCR8 register address */
#define PORT_P22_IOCR8_ADDR (PORT_P22_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P23 IOCR8 register address */
#define PORT_P23_IOCR8_ADDR (PORT_P23_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P24 IOCR8 register address */
#define PORT_P24_IOCR8_ADDR (PORT_P24_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P25 IOCR8 register address */
#define PORT_P25_IOCR8_ADDR (PORT_P25_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P26 IOCR8 register address */
#define PORT_P26_IOCR8_ADDR (PORT_P26_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P30 IOCR8 register address */
#define PORT_P30_IOCR8_ADDR (PORT_P30_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P31 IOCR8 register address */
#define PORT_P31_IOCR8_ADDR (PORT_P31_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P32 IOCR8 register address */
#define PORT_P32_IOCR8_ADDR (PORT_P32_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P33 IOCR8 register address */
#define PORT_P33_IOCR8_ADDR (PORT_P33_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P34 IOCR8 register address */
#define PORT_P34_IOCR8_ADDR (PORT_P34_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P40 IOCR8 register address */
#define PORT_P40_IOCR8_ADDR (PORT_P40_ADDR + PORT_IOCR8_OFF)
/** \brief PORT P41 IOCR8 register address */
#define PORT_P41_IOCR8_ADDR (PORT_P41_ADDR + PORT_IOCR8_OFF)

/** \brief PORT P00 IOCR8 register */
#define PORT_P00_IOCR8 (*((volatile port_iocr8_t*) PORT_P00_IOCR8_ADDR))
/** \brief PORT P01 IOCR8 register */
#define PORT_P01_IOCR8 (*((volatile port_iocr8_t*) PORT_P01_IOCR8_ADDR))
/** \brief PORT P02 IOCR8 register */
#define PORT_P02_IOCR8 (*((volatile port_iocr8_t*) PORT_P02_IOCR8_ADDR))
/** \brief PORT P10 IOCR8 register */
#define PORT_P10_IOCR8 (*((volatile port_iocr8_t*) PORT_P10_IOCR8_ADDR))
/** \brief PORT P11 IOCR8 register */
#define PORT_P11_IOCR8 (*((volatile port_iocr8_t*) PORT_P11_IOCR8_ADDR))
/** \brief PORT P12 IOCR8 register */
#define PORT_P12_IOCR8 (*((volatile port_iocr8_t*) PORT_P12_IOCR8_ADDR))
/** \brief PORT P13 IOCR8 register */
#define PORT_P13_IOCR8 (*((volatile port_iocr8_t*) PORT_P13_IOCR8_ADDR))
/** \brief PORT P14 IOCR8 register */
#define PORT_P14_IOCR8 (*((volatile port_iocr8_t*) PORT_P14_IOCR8_ADDR))
/** \brief PORT P15 IOCR8 register */
#define PORT_P15_IOCR8 (*((volatile port_iocr8_t*) PORT_P15_IOCR8_ADDR))
/** \brief PORT P20 IOCR8 register */
#define PORT_P20_IOCR8 (*((volatile port_iocr8_t*) PORT_P20_IOCR8_ADDR))
/** \brief PORT P21 IOCR8 register */
#define PORT_P21_IOCR8 (*((volatile port_iocr8_t*) PORT_P21_IOCR8_ADDR))
/** \brief PORT P22 IOCR8 register */
#define PORT_P22_IOCR8 (*((volatile port_iocr8_t*) PORT_P22_IOCR8_ADDR))
/** \brief PORT P23 IOCR8 register */
#define PORT_P23_IOCR8 (*((volatile port_iocr8_t*) PORT_P23_IOCR8_ADDR))
/** \brief PORT P24 IOCR8 register */
#define PORT_P24_IOCR8 (*((volatile port_iocr8_t*) PORT_P24_IOCR8_ADDR))
/** \brief PORT P25 IOCR8 register */
#define PORT_P25_IOCR8 (*((volatile port_iocr8_t*) PORT_P25_IOCR8_ADDR))
/** \brief PORT P26 IOCR8 register */
#define PORT_P26_IOCR8 (*((volatile port_iocr8_t*) PORT_P26_IOCR8_ADDR))
/** \brief PORT P30 IOCR8 register */
#define PORT_P30_IOCR8 (*((volatile port_iocr8_t*) PORT_P30_IOCR8_ADDR))
/** \brief PORT P31 IOCR8 register */
#define PORT_P31_IOCR8 (*((volatile port_iocr8_t*) PORT_P31_IOCR8_ADDR))
/** \brief PORT P32 IOCR8 register */
#define PORT_P32_IOCR8 (*((volatile port_iocr8_t*) PORT_P32_IOCR8_ADDR))
/** \brief PORT P33 IOCR8 register */
#define PORT_P33_IOCR8 (*((volatile port_iocr8_t*) PORT_P33_IOCR8_ADDR))
/** \brief PORT P34 IOCR8 register */
#define PORT_P34_IOCR8 (*((volatile port_iocr8_t*) PORT_P34_IOCR8_ADDR))
/** \brief PORT P40 IOCR8 register */
#define PORT_P40_IOCR8 (*((volatile port_iocr8_t*) PORT_P40_IOCR8_ADDR))
/** \brief PORT P41 IOCR8 register */
#define PORT_P41_IOCR8 (*((volatile port_iocr8_t*) PORT_P41_IOCR8_ADDR))

/** \brief PORT IOCR8.PC8 bit offset */
#define PORT_IOCR8_PC8_OFF 3u
/** \brief PORT IOCR8.PC8 bit mask */
#define PORT_IOCR8_PC8_MSK 0x000000F8u

/** \brief PORT IOCR8.PC9 bit offset */
#define PORT_IOCR8_PC9_OFF 11u
/** \brief PORT IOCR8.PC9 bit mask */
#define PORT_IOCR8_PC9_MSK 0x0000F800u

/** \brief PORT IOCR8.PC10 bit offset */
#define PORT_IOCR8_PC10_OFF 19u
/** \brief PORT IOCR8.PC10 bit mask */
#define PORT_IOCR8_PC10_MSK 0x00F80000u

/** \brief PORT IOCR8.PC11 bit offset */
#define PORT_IOCR8_PC11_OFF 27u
/** \brief PORT IOCR8.PC11 bit mask */
#define PORT_IOCR8_PC11_MSK 0xF8000000u

/** \brief PORT IOCR12 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 12 */
		uint32_t PC12:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 13 */
		uint32_t PC13:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 14 */
		uint32_t PC14:5;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Port control for pin 15 */
		uint32_t PC15:5;
	} B;
} port_iocr12_t;

/** \brief PORT IOCR12 register address offset */
#define PORT_IOCR12_OFF 0x01Cu

/** \brief PORT P00 IOCR12 register address */
#define PORT_P00_IOCR12_ADDR (PORT_P00_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P01 IOCR12 register address */
#define PORT_P01_IOCR12_ADDR (PORT_P01_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P02 IOCR12 register address */
#define PORT_P02_IOCR12_ADDR (PORT_P02_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P10 IOCR12 register address */
#define PORT_P10_IOCR12_ADDR (PORT_P10_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P11 IOCR12 register address */
#define PORT_P11_IOCR12_ADDR (PORT_P11_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P12 IOCR12 register address */
#define PORT_P12_IOCR12_ADDR (PORT_P12_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P13 IOCR12 register address */
#define PORT_P13_IOCR12_ADDR (PORT_P13_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P14 IOCR12 register address */
#define PORT_P14_IOCR12_ADDR (PORT_P14_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P15 IOCR12 register address */
#define PORT_P15_IOCR12_ADDR (PORT_P15_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P20 IOCR12 register address */
#define PORT_P20_IOCR12_ADDR (PORT_P20_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P21 IOCR12 register address */
#define PORT_P21_IOCR12_ADDR (PORT_P21_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P22 IOCR12 register address */
#define PORT_P22_IOCR12_ADDR (PORT_P22_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P23 IOCR12 register address */
#define PORT_P23_IOCR12_ADDR (PORT_P23_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P24 IOCR12 register address */
#define PORT_P24_IOCR12_ADDR (PORT_P24_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P25 IOCR12 register address */
#define PORT_P25_IOCR12_ADDR (PORT_P25_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P26 IOCR12 register address */
#define PORT_P26_IOCR12_ADDR (PORT_P26_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P30 IOCR12 register address */
#define PORT_P30_IOCR12_ADDR (PORT_P30_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P31 IOCR12 register address */
#define PORT_P31_IOCR12_ADDR (PORT_P31_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P32 IOCR12 register address */
#define PORT_P32_IOCR12_ADDR (PORT_P32_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P33 IOCR12 register address */
#define PORT_P33_IOCR12_ADDR (PORT_P33_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P34 IOCR12 register address */
#define PORT_P34_IOCR12_ADDR (PORT_P34_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P40 IOCR12 register address */
#define PORT_P40_IOCR12_ADDR (PORT_P40_ADDR + PORT_IOCR12_OFF)
/** \brief PORT P41 IOCR12 register address */
#define PORT_P41_IOCR12_ADDR (PORT_P41_ADDR + PORT_IOCR12_OFF)

/** \brief PORT P00 IOCR12 register */
#define PORT_P00_IOCR12 (*((volatile port_iocr12_t*) PORT_P00_IOCR12_ADDR))
/** \brief PORT P01 IOCR12 register */
#define PORT_P01_IOCR12 (*((volatile port_iocr12_t*) PORT_P01_IOCR12_ADDR))
/** \brief PORT P02 IOCR12 register */
#define PORT_P02_IOCR12 (*((volatile port_iocr12_t*) PORT_P02_IOCR12_ADDR))
/** \brief PORT P10 IOCR12 register */
#define PORT_P10_IOCR12 (*((volatile port_iocr12_t*) PORT_P10_IOCR12_ADDR))
/** \brief PORT P11 IOCR12 register */
#define PORT_P11_IOCR12 (*((volatile port_iocr12_t*) PORT_P11_IOCR12_ADDR))
/** \brief PORT P12 IOCR12 register */
#define PORT_P12_IOCR12 (*((volatile port_iocr12_t*) PORT_P12_IOCR12_ADDR))
/** \brief PORT P13 IOCR12 register */
#define PORT_P13_IOCR12 (*((volatile port_iocr12_t*) PORT_P13_IOCR12_ADDR))
/** \brief PORT P14 IOCR12 register */
#define PORT_P14_IOCR12 (*((volatile port_iocr12_t*) PORT_P14_IOCR12_ADDR))
/** \brief PORT P15 IOCR12 register */
#define PORT_P15_IOCR12 (*((volatile port_iocr12_t*) PORT_P15_IOCR12_ADDR))
/** \brief PORT P20 IOCR12 register */
#define PORT_P20_IOCR12 (*((volatile port_iocr12_t*) PORT_P20_IOCR12_ADDR))
/** \brief PORT P21 IOCR12 register */
#define PORT_P21_IOCR12 (*((volatile port_iocr12_t*) PORT_P21_IOCR12_ADDR))
/** \brief PORT P22 IOCR12 register */
#define PORT_P22_IOCR12 (*((volatile port_iocr12_t*) PORT_P22_IOCR12_ADDR))
/** \brief PORT P23 IOCR12 register */
#define PORT_P23_IOCR12 (*((volatile port_iocr12_t*) PORT_P23_IOCR12_ADDR))
/** \brief PORT P24 IOCR12 register */
#define PORT_P24_IOCR12 (*((volatile port_iocr12_t*) PORT_P24_IOCR12_ADDR))
/** \brief PORT P25 IOCR12 register */
#define PORT_P25_IOCR12 (*((volatile port_iocr12_t*) PORT_P25_IOCR12_ADDR))
/** \brief PORT P26 IOCR12 register */
#define PORT_P26_IOCR12 (*((volatile port_iocr12_t*) PORT_P26_IOCR12_ADDR))
/** \brief PORT P30 IOCR12 register */
#define PORT_P30_IOCR12 (*((volatile port_iocr12_t*) PORT_P30_IOCR12_ADDR))
/** \brief PORT P31 IOCR12 register */
#define PORT_P31_IOCR12 (*((volatile port_iocr12_t*) PORT_P31_IOCR12_ADDR))
/** \brief PORT P32 IOCR12 register */
#define PORT_P32_IOCR12 (*((volatile port_iocr12_t*) PORT_P32_IOCR12_ADDR))
/** \brief PORT P33 IOCR12 register */
#define PORT_P33_IOCR12 (*((volatile port_iocr12_t*) PORT_P33_IOCR12_ADDR))
/** \brief PORT P34 IOCR12 register */
#define PORT_P34_IOCR12 (*((volatile port_iocr12_t*) PORT_P34_IOCR12_ADDR))
/** \brief PORT P40 IOCR12 register */
#define PORT_P40_IOCR12 (*((volatile port_iocr12_t*) PORT_P40_IOCR12_ADDR))
/** \brief PORT P41 IOCR12 register */
#define PORT_P41_IOCR12 (*((volatile port_iocr12_t*) PORT_P41_IOCR12_ADDR))

/** \brief PORT IOCR12.PC12 bit offset */
#define PORT_IOCR12_PC12_OFF 3u
/** \brief PORT IOCR12.PC12 bit mask */
#define PORT_IOCR12_PC12_MSK 0x000000F8u

/** \brief PORT IOCR12.PC13 bit offset */
#define PORT_IOCR12_PC13_OFF 11u
/** \brief PORT IOCR12.PC13 bit mask */
#define PORT_IOCR12_PC13_MSK 0x0000F800u

/** \brief PORT IOCR12.PC14 bit offset */
#define PORT_IOCR12_PC14_OFF 19u
/** \brief PORT IOCR12.PC14 bit mask */
#define PORT_IOCR12_PC14_MSK 0x00F80000u

/** \brief PORT IOCR12.PC15 bit offset */
#define PORT_IOCR12_PC15_OFF 27u
/** \brief PORT IOCR12.PC15 bit mask */
#define PORT_IOCR12_PC15_MSK 0xF8000000u

/**@}*/

#endif /* PORT_H */
