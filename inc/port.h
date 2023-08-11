#ifndef PORT_H
#define PORT_H

#include <stdint.h>

#define PORT_P00_ADDR 0xF003A000u
#define PORT_P01_ADDR 0xF003A100u
#define PORT_P02_ADDR 0xF003A200u
#define PORT_P10_ADDR 0xF003AA00u
#define PORT_P11_ADDR 0xF003AB00u
#define PORT_P12_ADDR 0xF003AC00u
#define PORT_P13_ADDR 0xF003AD00u
#define PORT_P14_ADDR 0xF003AE00u
#define PORT_P15_ADDR 0xF003AF00u
#define PORT_P20_ADDR 0xF003B400u
#define PORT_P21_ADDR 0xF003B500u
#define PORT_P22_ADDR 0xF003B600u
#define PORT_P23_ADDR 0xF003B700u
#define PORT_P24_ADDR 0xF003B800u
#define PORT_P25_ADDR 0xF003B900u
#define PORT_P26_ADDR 0xF003BA00u
#define PORT_P30_ADDR 0xF003BE00u
#define PORT_P31_ADDR 0xF003BF00u
#define PORT_P32_ADDR 0xF003C000u
#define PORT_P33_ADDR 0xF003C100u
#define PORT_P34_ADDR 0xF003C200u
#define PORT_P40_ADDR 0xF003C800u
#define PORT_P41_ADDR 0xF003C900u

typedef union port_out
{
	uint32_t U;
	struct
	{
		uint32_t P0 : 1;
		uint32_t P1 : 1;
		uint32_t P2 : 1;
		uint32_t P3 : 1;
		uint32_t P4 : 1;
		uint32_t P5 : 1;
		uint32_t P6 : 1;
		uint32_t P7 : 1;
		uint32_t P8 : 1;
		uint32_t P9 : 1;
		uint32_t P10: 1;
		uint32_t P11: 1;
		uint32_t P12: 1;
		uint32_t P13: 1;
		uint32_t P14: 1;
		uint32_t P15: 1;
		uint32_t    :16;
	} B;
} port_out_t;

#define PORT_OUT_OFF 0x000u

#define PORT_P00_OUT_ADDR (PORT_P00_ADDR + PORT_OUT_OFF)
#define PORT_P01_OUT_ADDR (PORT_P01_ADDR + PORT_OUT_OFF)
#define PORT_P02_OUT_ADDR (PORT_P02_ADDR + PORT_OUT_OFF)
#define PORT_P10_OUT_ADDR (PORT_P10_ADDR + PORT_OUT_OFF)
#define PORT_P11_OUT_ADDR (PORT_P11_ADDR + PORT_OUT_OFF)
#define PORT_P12_OUT_ADDR (PORT_P12_ADDR + PORT_OUT_OFF)
#define PORT_P13_OUT_ADDR (PORT_P13_ADDR + PORT_OUT_OFF)
#define PORT_P14_OUT_ADDR (PORT_P14_ADDR + PORT_OUT_OFF)
#define PORT_P15_OUT_ADDR (PORT_P15_ADDR + PORT_OUT_OFF)
#define PORT_P20_OUT_ADDR (PORT_P20_ADDR + PORT_OUT_OFF)
#define PORT_P21_OUT_ADDR (PORT_P21_ADDR + PORT_OUT_OFF)
#define PORT_P22_OUT_ADDR (PORT_P22_ADDR + PORT_OUT_OFF)
#define PORT_P23_OUT_ADDR (PORT_P23_ADDR + PORT_OUT_OFF)
#define PORT_P24_OUT_ADDR (PORT_P24_ADDR + PORT_OUT_OFF)
#define PORT_P25_OUT_ADDR (PORT_P25_ADDR + PORT_OUT_OFF)
#define PORT_P26_OUT_ADDR (PORT_P26_ADDR + PORT_OUT_OFF)
#define PORT_P30_OUT_ADDR (PORT_P30_ADDR + PORT_OUT_OFF)
#define PORT_P31_OUT_ADDR (PORT_P31_ADDR + PORT_OUT_OFF)
#define PORT_P32_OUT_ADDR (PORT_P32_ADDR + PORT_OUT_OFF)
#define PORT_P33_OUT_ADDR (PORT_P33_ADDR + PORT_OUT_OFF)
#define PORT_P34_OUT_ADDR (PORT_P34_ADDR + PORT_OUT_OFF)
#define PORT_P40_OUT_ADDR (PORT_P40_ADDR + PORT_OUT_OFF)
#define PORT_P41_OUT_ADDR (PORT_P41_ADDR + PORT_OUT_OFF)

#define PORT_P00_OUT (*((volatile port_out_t*) PORT_P00_OUT_ADDR))
#define PORT_P01_OUT (*((volatile port_out_t*) PORT_P01_OUT_ADDR))
#define PORT_P02_OUT (*((volatile port_out_t*) PORT_P02_OUT_ADDR))
#define PORT_P10_OUT (*((volatile port_out_t*) PORT_P10_OUT_ADDR))
#define PORT_P11_OUT (*((volatile port_out_t*) PORT_P11_OUT_ADDR))
#define PORT_P12_OUT (*((volatile port_out_t*) PORT_P12_OUT_ADDR))
#define PORT_P13_OUT (*((volatile port_out_t*) PORT_P13_OUT_ADDR))
#define PORT_P14_OUT (*((volatile port_out_t*) PORT_P14_OUT_ADDR))
#define PORT_P15_OUT (*((volatile port_out_t*) PORT_P15_OUT_ADDR))
#define PORT_P20_OUT (*((volatile port_out_t*) PORT_P20_OUT_ADDR))
#define PORT_P21_OUT (*((volatile port_out_t*) PORT_P21_OUT_ADDR))
#define PORT_P22_OUT (*((volatile port_out_t*) PORT_P22_OUT_ADDR))
#define PORT_P23_OUT (*((volatile port_out_t*) PORT_P23_OUT_ADDR))
#define PORT_P24_OUT (*((volatile port_out_t*) PORT_P24_OUT_ADDR))
#define PORT_P25_OUT (*((volatile port_out_t*) PORT_P25_OUT_ADDR))
#define PORT_P26_OUT (*((volatile port_out_t*) PORT_P26_OUT_ADDR))
#define PORT_P30_OUT (*((volatile port_out_t*) PORT_P30_OUT_ADDR))
#define PORT_P31_OUT (*((volatile port_out_t*) PORT_P31_OUT_ADDR))
#define PORT_P32_OUT (*((volatile port_out_t*) PORT_P32_OUT_ADDR))
#define PORT_P33_OUT (*((volatile port_out_t*) PORT_P33_OUT_ADDR))
#define PORT_P34_OUT (*((volatile port_out_t*) PORT_P34_OUT_ADDR))
#define PORT_P40_OUT (*((volatile port_out_t*) PORT_P40_OUT_ADDR))
#define PORT_P41_OUT (*((volatile port_out_t*) PORT_P41_OUT_ADDR))

#define PORT_OUT_P0_OFF 0u
#define PORT_OUT_P0_MSK 0x00000001u

#define PORT_OUT_P1_OFF 1u
#define PORT_OUT_P1_MSK 0x00000002u

#define PORT_OUT_P2_OFF 2u
#define PORT_OUT_P2_MSK 0x00000004u

#define PORT_OUT_P3_OFF 3u
#define PORT_OUT_P3_MSK 0x00000008u

#define PORT_OUT_P4_OFF 4u
#define PORT_OUT_P4_MSK 0x00000010u

#define PORT_OUT_P5_OFF 5u
#define PORT_OUT_P5_MSK 0x00000020u

#define PORT_OUT_P6_OFF 6u
#define PORT_OUT_P6_MSK 0x00000040u

#define PORT_OUT_P7_OFF 7u
#define PORT_OUT_P7_MSK 0x00000080u

#define PORT_OUT_P8_OFF 8u
#define PORT_OUT_P8_MSK 0x00000100u

#define PORT_OUT_P9_OFF 9u
#define PORT_OUT_P9_MSK 0x00000200u

#define PORT_OUT_P10_OFF 10u
#define PORT_OUT_P10_MSK 0x00000400u

#define PORT_OUT_P11_OFF 11u
#define PORT_OUT_P11_MSK 0x00000800u

#define PORT_OUT_P12_OFF 12u
#define PORT_OUT_P12_MSK 0x00001000u

#define PORT_OUT_P13_OFF 13u
#define PORT_OUT_P13_MSK 0x00002000u

#define PORT_OUT_P14_OFF 14u
#define PORT_OUT_P14_MSK 0x00004000u

#define PORT_OUT_P15_OFF 15u
#define PORT_OUT_P15_MSK 0x00008000u

typedef union port_iocr0
{
	uint32_t U;
	struct
	{
		uint32_t    :3;
		uint32_t PC0:5;
		uint32_t    :3;
		uint32_t PC1:5;
		uint32_t    :3;
		uint32_t PC2:5;
		uint32_t    :3;
		uint32_t PC3:5;
	} B;
} port_iocr0_t;

#define PORT_IOCR0_OFF 0x010u

#define PORT_P00_IOCR0_ADDR (PORT_P00_ADDR + PORT_IOCR0_OFF)
#define PORT_P01_IOCR0_ADDR (PORT_P01_ADDR + PORT_IOCR0_OFF)
#define PORT_P02_IOCR0_ADDR (PORT_P02_ADDR + PORT_IOCR0_OFF)
#define PORT_P10_IOCR0_ADDR (PORT_P10_ADDR + PORT_IOCR0_OFF)
#define PORT_P11_IOCR0_ADDR (PORT_P11_ADDR + PORT_IOCR0_OFF)
#define PORT_P12_IOCR0_ADDR (PORT_P12_ADDR + PORT_IOCR0_OFF)
#define PORT_P13_IOCR0_ADDR (PORT_P13_ADDR + PORT_IOCR0_OFF)
#define PORT_P14_IOCR0_ADDR (PORT_P14_ADDR + PORT_IOCR0_OFF)
#define PORT_P15_IOCR0_ADDR (PORT_P15_ADDR + PORT_IOCR0_OFF)
#define PORT_P20_IOCR0_ADDR (PORT_P20_ADDR + PORT_IOCR0_OFF)
#define PORT_P21_IOCR0_ADDR (PORT_P21_ADDR + PORT_IOCR0_OFF)
#define PORT_P22_IOCR0_ADDR (PORT_P22_ADDR + PORT_IOCR0_OFF)
#define PORT_P23_IOCR0_ADDR (PORT_P23_ADDR + PORT_IOCR0_OFF)
#define PORT_P24_IOCR0_ADDR (PORT_P24_ADDR + PORT_IOCR0_OFF)
#define PORT_P25_IOCR0_ADDR (PORT_P25_ADDR + PORT_IOCR0_OFF)
#define PORT_P26_IOCR0_ADDR (PORT_P26_ADDR + PORT_IOCR0_OFF)
#define PORT_P30_IOCR0_ADDR (PORT_P30_ADDR + PORT_IOCR0_OFF)
#define PORT_P31_IOCR0_ADDR (PORT_P31_ADDR + PORT_IOCR0_OFF)
#define PORT_P32_IOCR0_ADDR (PORT_P32_ADDR + PORT_IOCR0_OFF)
#define PORT_P33_IOCR0_ADDR (PORT_P33_ADDR + PORT_IOCR0_OFF)
#define PORT_P34_IOCR0_ADDR (PORT_P34_ADDR + PORT_IOCR0_OFF)
#define PORT_P40_IOCR0_ADDR (PORT_P40_ADDR + PORT_IOCR0_OFF)
#define PORT_P41_IOCR0_ADDR (PORT_P41_ADDR + PORT_IOCR0_OFF)

#define PORT_P00_IOCR0 (*((volatile port_iocr0_t*) PORT_P00_IOCR0_ADDR))
#define PORT_P01_IOCR0 (*((volatile port_iocr0_t*) PORT_P01_IOCR0_ADDR))
#define PORT_P02_IOCR0 (*((volatile port_iocr0_t*) PORT_P02_IOCR0_ADDR))
#define PORT_P10_IOCR0 (*((volatile port_iocr0_t*) PORT_P10_IOCR0_ADDR))
#define PORT_P11_IOCR0 (*((volatile port_iocr0_t*) PORT_P11_IOCR0_ADDR))
#define PORT_P12_IOCR0 (*((volatile port_iocr0_t*) PORT_P12_IOCR0_ADDR))
#define PORT_P13_IOCR0 (*((volatile port_iocr0_t*) PORT_P13_IOCR0_ADDR))
#define PORT_P14_IOCR0 (*((volatile port_iocr0_t*) PORT_P14_IOCR0_ADDR))
#define PORT_P15_IOCR0 (*((volatile port_iocr0_t*) PORT_P15_IOCR0_ADDR))
#define PORT_P20_IOCR0 (*((volatile port_iocr0_t*) PORT_P20_IOCR0_ADDR))
#define PORT_P21_IOCR0 (*((volatile port_iocr0_t*) PORT_P21_IOCR0_ADDR))
#define PORT_P22_IOCR0 (*((volatile port_iocr0_t*) PORT_P22_IOCR0_ADDR))
#define PORT_P23_IOCR0 (*((volatile port_iocr0_t*) PORT_P23_IOCR0_ADDR))
#define PORT_P24_IOCR0 (*((volatile port_iocr0_t*) PORT_P24_IOCR0_ADDR))
#define PORT_P25_IOCR0 (*((volatile port_iocr0_t*) PORT_P25_IOCR0_ADDR))
#define PORT_P26_IOCR0 (*((volatile port_iocr0_t*) PORT_P26_IOCR0_ADDR))
#define PORT_P30_IOCR0 (*((volatile port_iocr0_t*) PORT_P30_IOCR0_ADDR))
#define PORT_P31_IOCR0 (*((volatile port_iocr0_t*) PORT_P31_IOCR0_ADDR))
#define PORT_P32_IOCR0 (*((volatile port_iocr0_t*) PORT_P32_IOCR0_ADDR))
#define PORT_P33_IOCR0 (*((volatile port_iocr0_t*) PORT_P33_IOCR0_ADDR))
#define PORT_P34_IOCR0 (*((volatile port_iocr0_t*) PORT_P34_IOCR0_ADDR))
#define PORT_P40_IOCR0 (*((volatile port_iocr0_t*) PORT_P40_IOCR0_ADDR))
#define PORT_P41_IOCR0 (*((volatile port_iocr0_t*) PORT_P41_IOCR0_ADDR))

#define PORT_IOCR0_PC0_OFF 3u
#define PORT_IOCR0_PC0_MSK 0x000000F8u

#define PORT_IOCR0_PC1_OFF 11u
#define PORT_IOCR0_PC1_MSK 0x0000F800u

#define PORT_IOCR0_PC2_OFF 19u
#define PORT_IOCR0_PC2_MSK 0x00F80000u

#define PORT_IOCR0_PC3_OFF 27u
#define PORT_IOCR0_PC3_MSK 0xF8000000u

typedef union port_iocr4
{
	uint32_t U;
	struct
	{
		uint32_t    :3;
		uint32_t PC4:5;
		uint32_t    :3;
		uint32_t PC5:5;
		uint32_t    :3;
		uint32_t PC6:5;
		uint32_t    :3;
		uint32_t PC7:5;
	} B;
} port_iocr4_t;

#define PORT_IOCR4_OFF 0x014u

#define PORT_P00_IOCR4_ADDR (PORT_P00_ADDR + PORT_IOCR4_OFF)
#define PORT_P01_IOCR4_ADDR (PORT_P01_ADDR + PORT_IOCR4_OFF)
#define PORT_P02_IOCR4_ADDR (PORT_P02_ADDR + PORT_IOCR4_OFF)
#define PORT_P10_IOCR4_ADDR (PORT_P10_ADDR + PORT_IOCR4_OFF)
#define PORT_P11_IOCR4_ADDR (PORT_P11_ADDR + PORT_IOCR4_OFF)
#define PORT_P12_IOCR4_ADDR (PORT_P12_ADDR + PORT_IOCR4_OFF)
#define PORT_P13_IOCR4_ADDR (PORT_P13_ADDR + PORT_IOCR4_OFF)
#define PORT_P14_IOCR4_ADDR (PORT_P14_ADDR + PORT_IOCR4_OFF)
#define PORT_P15_IOCR4_ADDR (PORT_P15_ADDR + PORT_IOCR4_OFF)
#define PORT_P20_IOCR4_ADDR (PORT_P20_ADDR + PORT_IOCR4_OFF)
#define PORT_P21_IOCR4_ADDR (PORT_P21_ADDR + PORT_IOCR4_OFF)
#define PORT_P22_IOCR4_ADDR (PORT_P22_ADDR + PORT_IOCR4_OFF)
#define PORT_P23_IOCR4_ADDR (PORT_P23_ADDR + PORT_IOCR4_OFF)
#define PORT_P24_IOCR4_ADDR (PORT_P24_ADDR + PORT_IOCR4_OFF)
#define PORT_P25_IOCR4_ADDR (PORT_P25_ADDR + PORT_IOCR4_OFF)
#define PORT_P26_IOCR4_ADDR (PORT_P26_ADDR + PORT_IOCR4_OFF)
#define PORT_P30_IOCR4_ADDR (PORT_P30_ADDR + PORT_IOCR4_OFF)
#define PORT_P31_IOCR4_ADDR (PORT_P31_ADDR + PORT_IOCR4_OFF)
#define PORT_P32_IOCR4_ADDR (PORT_P32_ADDR + PORT_IOCR4_OFF)
#define PORT_P33_IOCR4_ADDR (PORT_P33_ADDR + PORT_IOCR4_OFF)
#define PORT_P34_IOCR4_ADDR (PORT_P34_ADDR + PORT_IOCR4_OFF)
#define PORT_P40_IOCR4_ADDR (PORT_P40_ADDR + PORT_IOCR4_OFF)
#define PORT_P41_IOCR4_ADDR (PORT_P41_ADDR + PORT_IOCR4_OFF)

#define PORT_P00_IOCR4 (*((volatile port_iocr4_t*) PORT_P00_IOCR4_ADDR))
#define PORT_P01_IOCR4 (*((volatile port_iocr4_t*) PORT_P01_IOCR4_ADDR))
#define PORT_P02_IOCR4 (*((volatile port_iocr4_t*) PORT_P02_IOCR4_ADDR))
#define PORT_P10_IOCR4 (*((volatile port_iocr4_t*) PORT_P10_IOCR4_ADDR))
#define PORT_P11_IOCR4 (*((volatile port_iocr4_t*) PORT_P11_IOCR4_ADDR))
#define PORT_P12_IOCR4 (*((volatile port_iocr4_t*) PORT_P12_IOCR4_ADDR))
#define PORT_P13_IOCR4 (*((volatile port_iocr4_t*) PORT_P13_IOCR4_ADDR))
#define PORT_P14_IOCR4 (*((volatile port_iocr4_t*) PORT_P14_IOCR4_ADDR))
#define PORT_P15_IOCR4 (*((volatile port_iocr4_t*) PORT_P15_IOCR4_ADDR))
#define PORT_P20_IOCR4 (*((volatile port_iocr4_t*) PORT_P20_IOCR4_ADDR))
#define PORT_P21_IOCR4 (*((volatile port_iocr4_t*) PORT_P21_IOCR4_ADDR))
#define PORT_P22_IOCR4 (*((volatile port_iocr4_t*) PORT_P22_IOCR4_ADDR))
#define PORT_P23_IOCR4 (*((volatile port_iocr4_t*) PORT_P23_IOCR4_ADDR))
#define PORT_P24_IOCR4 (*((volatile port_iocr4_t*) PORT_P24_IOCR4_ADDR))
#define PORT_P25_IOCR4 (*((volatile port_iocr4_t*) PORT_P25_IOCR4_ADDR))
#define PORT_P26_IOCR4 (*((volatile port_iocr4_t*) PORT_P26_IOCR4_ADDR))
#define PORT_P30_IOCR4 (*((volatile port_iocr4_t*) PORT_P30_IOCR4_ADDR))
#define PORT_P31_IOCR4 (*((volatile port_iocr4_t*) PORT_P31_IOCR4_ADDR))
#define PORT_P32_IOCR4 (*((volatile port_iocr4_t*) PORT_P32_IOCR4_ADDR))
#define PORT_P33_IOCR4 (*((volatile port_iocr4_t*) PORT_P33_IOCR4_ADDR))
#define PORT_P34_IOCR4 (*((volatile port_iocr4_t*) PORT_P34_IOCR4_ADDR))
#define PORT_P40_IOCR4 (*((volatile port_iocr4_t*) PORT_P40_IOCR4_ADDR))
#define PORT_P41_IOCR4 (*((volatile port_iocr4_t*) PORT_P41_IOCR4_ADDR))

#define PORT_IOCR4_PC4_OFF 3u
#define PORT_IOCR4_PC4_MSK 0x000000F8u

#define PORT_IOCR4_PC5_OFF 11u
#define PORT_IOCR4_PC5_MSK 0x0000F800u

#define PORT_IOCR4_PC6_OFF 19u
#define PORT_IOCR4_PC6_MSK 0x00F80000u

#define PORT_IOCR4_PC7_OFF 27u
#define PORT_IOCR4_PC7_MSK 0xF8000000u

typedef union port_iocr8
{
	uint32_t U;
	struct
	{
		uint32_t     :3;
		uint32_t PC8 :5;
		uint32_t     :3;
		uint32_t PC9 :5;
		uint32_t     :3;
		uint32_t PC10:5;
		uint32_t     :3;
		uint32_t PC11:5;
	} B;
} port_iocr8_t;

#define PORT_IOCR8_OFF 0x018u

#define PORT_P00_IOCR8_ADDR (PORT_P00_ADDR + PORT_IOCR8_OFF)
#define PORT_P01_IOCR8_ADDR (PORT_P01_ADDR + PORT_IOCR8_OFF)
#define PORT_P02_IOCR8_ADDR (PORT_P02_ADDR + PORT_IOCR8_OFF)
#define PORT_P10_IOCR8_ADDR (PORT_P10_ADDR + PORT_IOCR8_OFF)
#define PORT_P11_IOCR8_ADDR (PORT_P11_ADDR + PORT_IOCR8_OFF)
#define PORT_P12_IOCR8_ADDR (PORT_P12_ADDR + PORT_IOCR8_OFF)
#define PORT_P13_IOCR8_ADDR (PORT_P13_ADDR + PORT_IOCR8_OFF)
#define PORT_P14_IOCR8_ADDR (PORT_P14_ADDR + PORT_IOCR8_OFF)
#define PORT_P15_IOCR8_ADDR (PORT_P15_ADDR + PORT_IOCR8_OFF)
#define PORT_P20_IOCR8_ADDR (PORT_P20_ADDR + PORT_IOCR8_OFF)
#define PORT_P21_IOCR8_ADDR (PORT_P21_ADDR + PORT_IOCR8_OFF)
#define PORT_P22_IOCR8_ADDR (PORT_P22_ADDR + PORT_IOCR8_OFF)
#define PORT_P23_IOCR8_ADDR (PORT_P23_ADDR + PORT_IOCR8_OFF)
#define PORT_P24_IOCR8_ADDR (PORT_P24_ADDR + PORT_IOCR8_OFF)
#define PORT_P25_IOCR8_ADDR (PORT_P25_ADDR + PORT_IOCR8_OFF)
#define PORT_P26_IOCR8_ADDR (PORT_P26_ADDR + PORT_IOCR8_OFF)
#define PORT_P30_IOCR8_ADDR (PORT_P30_ADDR + PORT_IOCR8_OFF)
#define PORT_P31_IOCR8_ADDR (PORT_P31_ADDR + PORT_IOCR8_OFF)
#define PORT_P32_IOCR8_ADDR (PORT_P32_ADDR + PORT_IOCR8_OFF)
#define PORT_P33_IOCR8_ADDR (PORT_P33_ADDR + PORT_IOCR8_OFF)
#define PORT_P34_IOCR8_ADDR (PORT_P34_ADDR + PORT_IOCR8_OFF)
#define PORT_P40_IOCR8_ADDR (PORT_P40_ADDR + PORT_IOCR8_OFF)
#define PORT_P41_IOCR8_ADDR (PORT_P41_ADDR + PORT_IOCR8_OFF)

#define PORT_P00_IOCR8 (*((volatile port_iocr8_t*) PORT_P00_IOCR8_ADDR))
#define PORT_P01_IOCR8 (*((volatile port_iocr8_t*) PORT_P01_IOCR8_ADDR))
#define PORT_P02_IOCR8 (*((volatile port_iocr8_t*) PORT_P02_IOCR8_ADDR))
#define PORT_P10_IOCR8 (*((volatile port_iocr8_t*) PORT_P10_IOCR8_ADDR))
#define PORT_P11_IOCR8 (*((volatile port_iocr8_t*) PORT_P11_IOCR8_ADDR))
#define PORT_P12_IOCR8 (*((volatile port_iocr8_t*) PORT_P12_IOCR8_ADDR))
#define PORT_P13_IOCR8 (*((volatile port_iocr8_t*) PORT_P13_IOCR8_ADDR))
#define PORT_P14_IOCR8 (*((volatile port_iocr8_t*) PORT_P14_IOCR8_ADDR))
#define PORT_P15_IOCR8 (*((volatile port_iocr8_t*) PORT_P15_IOCR8_ADDR))
#define PORT_P20_IOCR8 (*((volatile port_iocr8_t*) PORT_P20_IOCR8_ADDR))
#define PORT_P21_IOCR8 (*((volatile port_iocr8_t*) PORT_P21_IOCR8_ADDR))
#define PORT_P22_IOCR8 (*((volatile port_iocr8_t*) PORT_P22_IOCR8_ADDR))
#define PORT_P23_IOCR8 (*((volatile port_iocr8_t*) PORT_P23_IOCR8_ADDR))
#define PORT_P24_IOCR8 (*((volatile port_iocr8_t*) PORT_P24_IOCR8_ADDR))
#define PORT_P25_IOCR8 (*((volatile port_iocr8_t*) PORT_P25_IOCR8_ADDR))
#define PORT_P26_IOCR8 (*((volatile port_iocr8_t*) PORT_P26_IOCR8_ADDR))
#define PORT_P30_IOCR8 (*((volatile port_iocr8_t*) PORT_P30_IOCR8_ADDR))
#define PORT_P31_IOCR8 (*((volatile port_iocr8_t*) PORT_P31_IOCR8_ADDR))
#define PORT_P32_IOCR8 (*((volatile port_iocr8_t*) PORT_P32_IOCR8_ADDR))
#define PORT_P33_IOCR8 (*((volatile port_iocr8_t*) PORT_P33_IOCR8_ADDR))
#define PORT_P34_IOCR8 (*((volatile port_iocr8_t*) PORT_P34_IOCR8_ADDR))
#define PORT_P40_IOCR8 (*((volatile port_iocr8_t*) PORT_P40_IOCR8_ADDR))
#define PORT_P41_IOCR8 (*((volatile port_iocr8_t*) PORT_P41_IOCR8_ADDR))

#define PORT_IOCR8_PC8_OFF 3u
#define PORT_IOCR8_PC8_MSK 0x000000F8u

#define PORT_IOCR8_PC9_OFF 11u
#define PORT_IOCR8_PC9_MSK 0x0000F800u

#define PORT_IOCR8_PC10_OFF 19u
#define PORT_IOCR8_PC10_MSK 0x00F80000u

#define PORT_IOCR8_PC11_OFF 27u
#define PORT_IOCR8_PC11_MSK 0xF8000000u

typedef union port_iocr12
{
	uint32_t U;
	struct
	{
		uint32_t     :3;
		uint32_t PC12:5;
		uint32_t     :3;
		uint32_t PC13:5;
		uint32_t     :3;
		uint32_t PC14:5;
		uint32_t     :3;
		uint32_t PC15:5;
	} B;
} port_iocr12_t;

#define PORT_IOCR12_OFF 0x01Cu

#define PORT_P00_IOCR12_ADDR (PORT_P00_ADDR + PORT_IOCR12_OFF)
#define PORT_P01_IOCR12_ADDR (PORT_P01_ADDR + PORT_IOCR12_OFF)
#define PORT_P02_IOCR12_ADDR (PORT_P02_ADDR + PORT_IOCR12_OFF)
#define PORT_P10_IOCR12_ADDR (PORT_P10_ADDR + PORT_IOCR12_OFF)
#define PORT_P11_IOCR12_ADDR (PORT_P11_ADDR + PORT_IOCR12_OFF)
#define PORT_P12_IOCR12_ADDR (PORT_P12_ADDR + PORT_IOCR12_OFF)
#define PORT_P13_IOCR12_ADDR (PORT_P13_ADDR + PORT_IOCR12_OFF)
#define PORT_P14_IOCR12_ADDR (PORT_P14_ADDR + PORT_IOCR12_OFF)
#define PORT_P15_IOCR12_ADDR (PORT_P15_ADDR + PORT_IOCR12_OFF)
#define PORT_P20_IOCR12_ADDR (PORT_P20_ADDR + PORT_IOCR12_OFF)
#define PORT_P21_IOCR12_ADDR (PORT_P21_ADDR + PORT_IOCR12_OFF)
#define PORT_P22_IOCR12_ADDR (PORT_P22_ADDR + PORT_IOCR12_OFF)
#define PORT_P23_IOCR12_ADDR (PORT_P23_ADDR + PORT_IOCR12_OFF)
#define PORT_P24_IOCR12_ADDR (PORT_P24_ADDR + PORT_IOCR12_OFF)
#define PORT_P25_IOCR12_ADDR (PORT_P25_ADDR + PORT_IOCR12_OFF)
#define PORT_P26_IOCR12_ADDR (PORT_P26_ADDR + PORT_IOCR12_OFF)
#define PORT_P30_IOCR12_ADDR (PORT_P30_ADDR + PORT_IOCR12_OFF)
#define PORT_P31_IOCR12_ADDR (PORT_P31_ADDR + PORT_IOCR12_OFF)
#define PORT_P32_IOCR12_ADDR (PORT_P32_ADDR + PORT_IOCR12_OFF)
#define PORT_P33_IOCR12_ADDR (PORT_P33_ADDR + PORT_IOCR12_OFF)
#define PORT_P34_IOCR12_ADDR (PORT_P34_ADDR + PORT_IOCR12_OFF)
#define PORT_P40_IOCR12_ADDR (PORT_P40_ADDR + PORT_IOCR12_OFF)
#define PORT_P41_IOCR12_ADDR (PORT_P41_ADDR + PORT_IOCR12_OFF)

#define PORT_P00_IOCR12 (*((volatile port_iocr12_t*) PORT_P00_IOCR12_ADDR))
#define PORT_P01_IOCR12 (*((volatile port_iocr12_t*) PORT_P01_IOCR12_ADDR))
#define PORT_P02_IOCR12 (*((volatile port_iocr12_t*) PORT_P02_IOCR12_ADDR))
#define PORT_P10_IOCR12 (*((volatile port_iocr12_t*) PORT_P10_IOCR12_ADDR))
#define PORT_P11_IOCR12 (*((volatile port_iocr12_t*) PORT_P11_IOCR12_ADDR))
#define PORT_P12_IOCR12 (*((volatile port_iocr12_t*) PORT_P12_IOCR12_ADDR))
#define PORT_P13_IOCR12 (*((volatile port_iocr12_t*) PORT_P13_IOCR12_ADDR))
#define PORT_P14_IOCR12 (*((volatile port_iocr12_t*) PORT_P14_IOCR12_ADDR))
#define PORT_P15_IOCR12 (*((volatile port_iocr12_t*) PORT_P15_IOCR12_ADDR))
#define PORT_P20_IOCR12 (*((volatile port_iocr12_t*) PORT_P20_IOCR12_ADDR))
#define PORT_P21_IOCR12 (*((volatile port_iocr12_t*) PORT_P21_IOCR12_ADDR))
#define PORT_P22_IOCR12 (*((volatile port_iocr12_t*) PORT_P22_IOCR12_ADDR))
#define PORT_P23_IOCR12 (*((volatile port_iocr12_t*) PORT_P23_IOCR12_ADDR))
#define PORT_P24_IOCR12 (*((volatile port_iocr12_t*) PORT_P24_IOCR12_ADDR))
#define PORT_P25_IOCR12 (*((volatile port_iocr12_t*) PORT_P25_IOCR12_ADDR))
#define PORT_P26_IOCR12 (*((volatile port_iocr12_t*) PORT_P26_IOCR12_ADDR))
#define PORT_P30_IOCR12 (*((volatile port_iocr12_t*) PORT_P30_IOCR12_ADDR))
#define PORT_P31_IOCR12 (*((volatile port_iocr12_t*) PORT_P31_IOCR12_ADDR))
#define PORT_P32_IOCR12 (*((volatile port_iocr12_t*) PORT_P32_IOCR12_ADDR))
#define PORT_P33_IOCR12 (*((volatile port_iocr12_t*) PORT_P33_IOCR12_ADDR))
#define PORT_P34_IOCR12 (*((volatile port_iocr12_t*) PORT_P34_IOCR12_ADDR))
#define PORT_P40_IOCR12 (*((volatile port_iocr12_t*) PORT_P40_IOCR12_ADDR))
#define PORT_P41_IOCR12 (*((volatile port_iocr12_t*) PORT_P41_IOCR12_ADDR))

#define PORT_IOCR12_PC12_OFF 3u
#define PORT_IOCR12_PC12_MSK 0x000000F8u

#define PORT_IOCR12_PC13_OFF 11u
#define PORT_IOCR12_PC13_MSK 0x0000F800u

#define PORT_IOCR12_PC14_OFF 19u
#define PORT_IOCR12_PC14_MSK 0x00F80000u

#define PORT_IOCR12_PC15_OFF 27u
#define PORT_IOCR12_PC15_MSK 0xF8000000u

#endif /* PORT_H */
