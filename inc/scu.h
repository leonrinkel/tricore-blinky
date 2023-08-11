#ifndef SCU_H
#define SCU_H

#include <stdint.h>

#define SCU_ADDR 0xF0036000u

typedef union scu_osccon
{
	uint32_t U;
	struct
	{
		uint32_t        :1;
		uint32_t PLLLV  :1;
		uint32_t OSCRES :1;
		uint32_t GAINSEL:2;
		uint32_t MODE   :2;
		uint32_t SHBY   :1;
		uint32_t PLLHV  :1;
		uint32_t        :7;
		uint32_t OSCVAL :5;
		uint32_t        :2;
		uint32_t APREN  :1;
		uint32_t CAP0EN :1;
		uint32_t CAP1EN :1;
		uint32_t CAP2EN :1;
		uint32_t CAP3EN :1;
		uint32_t        :4;
	} B;
} scu_osccon_t;

#define SCU_OSCCON_OFF 0x0010u

#define SCU_OSCCON_ADDR (SCU_ADDR + SCU_OSCCON_OFF)

#define SCU_OSCCON (*((volatile scu_osccon_t*) SCU_OSCCON_ADDR))

#define SCU_OSCCON_PLLLV_OFF 1u
#define SCU_OSCCON_PLLLV_MSK 0x00000002u

#define SCU_OSCCON_OSCRES_OFF 2u
#define SCU_OSCCON_OSCRES_MSK 0x00000004u

#define SCU_OSCCON_GAINSEL_OFF 3u
#define SCU_OSCCON_GAINSEL_MSK 0x00000018u

#define SCU_OSCCON_MODE_OFF 5u
#define SCU_OSCCON_MODE_MSK 0x00000060u

#define SCU_OSCCON_SHBY_OFF 7u
#define SCU_OSCCON_SHBY_MSK 0x00000080u

#define SCU_OSCCON_PLLHV_OFF 8u
#define SCU_OSCCON_PLLHV_MSK 0x00000100u

#define SCU_OSCCON_OSCVAL_OFF 16u
#define SCU_OSCCON_OSCVAL_MSK 0x001F0000u

#define SCU_OSCCON_APREN_OFF 23u
#define SCU_OSCCON_APREN_MSK 0x00800000u

#define SCU_OSCCON_CAP0EN_OFF 24u
#define SCU_OSCCON_CAP0EN_MSK 0x01000000u

#define SCU_OSCCON_CAP1EN_OFF 25u
#define SCU_OSCCON_CAP1EN_MSK 0x02000000u

#define SCU_OSCCON_CAP2EN_OFF 26u
#define SCU_OSCCON_CAP2EN_MSK 0x04000000u

#define SCU_OSCCON_CAP3EN_OFF 27u
#define SCU_OSCCON_CAP3EN_MSK 0x08000000u

typedef union scu_syspllstat
{
	uint32_t U;
	struct
	{
		uint32_t        : 1;
		uint32_t PWDSTAT: 1;
		uint32_t LOCK   : 1;
		uint32_t        : 2;
		uint32_t K2RDY  : 1;
		uint32_t        : 1;
		uint32_t MODRUN : 1;
		uint32_t        : 8;
		uint32_t        :16;
	} B;
} scu_syspllstat_t;

#define SCU_SYSPLLSTAT_OFF 0x0014u

#define SCU_SYSPLLSTAT_ADDR (SCU_ADDR + SCU_SYSPLLSTAT_OFF)

#define SCU_SYSPLLSTAT (*((volatile scu_syspllstat_t*) SCU_SYSPLLSTAT_ADDR))

#define SCU_SYSPLLSTAT_PWDSTAT_OFF 1u
#define SCU_SYSPLLSTAT_PWDSTAT_MSK 0x00000002u

#define SCU_SYSPLLSTAT_LOCK_OFF 2u
#define SCU_SYSPLLSTAT_LOCK_MSK 0x00000004u

#define SCU_SYSPLLSTAT_K2RDY_OFF 5u
#define SCU_SYSPLLSTAT_K2RDY_MSK 0x00000020u

#define SCU_SYSPLLSTAT_MODRUN_OFF 7u
#define SCU_SYSPLLSTAT_MODRUN_MSK 0x00000080u

typedef union scu_syspllcon0
{
	uint32_t U;
	struct
	{
		uint32_t       :2;
		uint32_t MODEN :1;
		uint32_t       :6;
		uint32_t NDIV  :7;
		uint32_t PLLPWD:1;
		uint32_t       :1;
		uint32_t RESLD :1;
		uint32_t       :5;
		uint32_t PDIV  :3;
		uint32_t       :3;
		uint32_t INSEL :2;
	} B;
} scu_syspllcon0_t;

#define SCU_SYSPLLCON0_OFF 0x0018u

#define SCU_SYSPLLCON0_ADDR (SCU_ADDR + SCU_SYSPLLCON0_OFF)

#define SCU_SYSPLLCON0 (*((volatile scu_syspllcon0_t*) SCU_SYSPLLCON0_ADDR))

#define SCU_SYSPLLCON0_MODEN_OFF 2u
#define SCU_SYSPLLCON0_MODEN_MSK 0x00000004u

#define SCU_SYSPLLCON0_NDIV_OFF 9u
#define SCU_SYSPLLCON0_NDIV_MSK 0x0000FE00u

#define SCU_SYSPLLCON0_PLLPWD_OFF 16u
#define SCU_SYSPLLCON0_PLLPWD_MSK 0x00010000u

#define SCU_SYSPLLCON0_RESLD_OFF 18u
#define SCU_SYSPLLCON0_RESLD_MSK 0x00040000u

#define SCU_SYSPLLCON0_PDIV_OFF 24u
#define SCU_SYSPLLCON0_PDIV_MSK 0x07000000u

#define SCU_SYSPLLCON0_INSEL_OFF 30u
#define SCU_SYSPLLCON0_INSEL_MSK 0xC0000000u

typedef union scu_syspllcon1
{
	uint32_t U;
	struct
	{
		uint32_t K2DIV: 3;
		uint32_t      :13;
		uint32_t      :16;
	} B;
} scu_syspllcon1_t;

#define SCU_SYSPLLCON1_OFF 0x001Cu

#define SCU_SYSPLLCON1_ADDR (SCU_ADDR + SCU_SYSPLLCON1_OFF)

#define SCU_SYSPLLCON1 (*((volatile scu_syspllcon1_t*) SCU_SYSPLLCON1_ADDR))

#define SCU_SYSPLLCON1_K2DIV_OFF 0u
#define SCU_SYSPLLCON1_K2DIV_MSK 0x00000007u

typedef union scu_perpllstat
{
	uint32_t U;
	struct
	{
		uint32_t        : 1;
		uint32_t PWDSTAT: 1;
		uint32_t LOCK   : 1;
		uint32_t        : 1;
		uint32_t K3RDY  : 1;
		uint32_t K2RDY  : 1;
		uint32_t        : 2;
		uint32_t        : 8;
		uint32_t        :16;
	} B;
} scu_perpllstat_t;

#define SCU_PERPLLSTAT_OFF 0x0024u

#define SCU_PERPLLSTAT_ADDR (SCU_ADDR + SCU_PERPLLSTAT_OFF)

#define SCU_PERPLLSTAT (*((volatile scu_perpllstat_t*) SCU_PERPLLSTAT_ADDR))

#define SCU_PERPLLSTAT_PWDSTAT_OFF 1u
#define SCU_PERPLLSTAT_PWDSTAT_MSK 0x00000001u

#define SCU_PERPLLSTAT_LOCK_OFF 2u
#define SCU_PERPLLSTAT_LOCK_MSK 0x00000004u

#define SCU_PERPLLSTAT_K3RDY_OFF 4u
#define SCU_PERPLLSTAT_K3RDY_MSK 0x00000010u

#define SCU_PERPLLSTAT_K2RDY_OFF 5u
#define SCU_PERPLLSTAT_K2RDY_MSK 0x00000020u

typedef union scu_perpllcon0
{
	uint32_t U;
	struct
	{
		uint32_t DIVBY :1;
		uint32_t       :8;
		uint32_t NDIV  :7;
		uint32_t PLLPWD:1;
		uint32_t       :1;
		uint32_t RESLD :1;
		uint32_t       :5;
		uint32_t PDIV  :3;
		uint32_t       :5;
	} B;
} scu_perpllcon0_t;

#define SCU_PERPLLCON0_OFF 0x0028u

#define SCU_PERPLLCON0_ADDR (SCU_ADDR + SCU_PERPLLCON0_OFF)

#define SCU_PERPLLCON0 (*((volatile scu_perpllcon0_t*) SCU_PERPLLCON0_ADDR))

#define SCU_PERPLLCON0_DIVBY_OFF 1u
#define SCU_PERPLLCON0_DIVBY_MSK 0x00000001u

#define SCU_PERPLLCON0_NDIV_OFF 9u
#define SCU_PERPLLCON0_NDIV_MSK 0x0000FE00u

#define SCU_PERPLLCON0_PLLPWD_OFF 16u
#define SCU_PERPLLCON0_PLLPWD_MSK 0x00010000u

#define SCU_PERPLLCON0_RESLD_OFF 18u
#define SCU_PERPLLCON0_RESLD_MSK 0x00040000u

#define SCU_PERPLLCON0_PDIV_OFF 24u
#define SCU_PERPLLCON0_PDIV_MSK 0x01000000u

typedef union scu_perpllcon1
{
	uint32_t U;
	struct
	{
		uint32_t K2DIV: 3;
		uint32_t      : 5;
		uint32_t K3DIV: 3;
		uint32_t      : 5;
		uint32_t      :16;
	} B;
} scu_perpllcon1_t;

#define SCU_PERPLLCON1_OFF 0x002Cu

#define SCU_PERPLLCON1_ADDR (SCU_ADDR + SCU_PERPLLCON1_OFF)

#define SCU_PERPLLCON1 (*((volatile scu_perpllcon1_t*) SCU_PERPLLCON1_ADDR))

#define SCU_PERPLLCON1_K2DIV_OFF 0u
#define SCU_PERPLLCON1_K2DIV_MSK 0x00000007u

#define SCU_PERPLLCON1_K3DIV_OFF 8u
#define SCU_PERPLLCON1_K3DIV_MSK 0x00000700u

typedef union scu_ccucon0
{
	uint32_t U;
	struct
	{
		uint32_t STMDIV :4;
		uint32_t GTMDIV :4;
		uint32_t SRIDIV :4;
		uint32_t LPDIV  :3;
		uint32_t        :1;
		uint32_t SPBDIV :4;
		uint32_t BBBDIV :4;
		uint32_t FSIDIV :2;
		uint32_t FSI2DIV:2;
		uint32_t CLKSEL :2;
		uint32_t UP     :1;
		uint32_t LCK    :1;
	} B;
} scu_ccucon0_t;

#define SCU_CCUCON0_OFF 0x0030u

#define SCU_CCUCON0_ADDR (SCU_ADDR + SCU_CCUCON0_OFF)

#define SCU_CCUCON0 (*((volatile scu_ccucon0_t*) SCU_CCUCON0_ADDR))

#define SCU_CCUCON0_STMDIV_OFF 0u
#define SCU_CCUCON0_STMDIV_MSK 0x0000000Fu

#define SCU_CCUCON0_GTMDIV_OFF 4u
#define SCU_CCUCON0_GTMDIV_MSK 0x000000F0u

#define SCU_CCUCON0_SRIDIV_OFF 8u
#define SCU_CCUCON0_SRIDIV_MSK 0x00000F00u

#define SCU_CCUCON0_LPDIV_OFF 12u
#define SCU_CCUCON0_LPDIV_MSK 0x00007000u

#define SCU_CCUCON0_SPBDIV_OFF 16u
#define SCU_CCUCON0_SPBDIV_MSK 0x000F0000u

#define SCU_CCUCON0_BBBDIV_OFF 20u
#define SCU_CCUCON0_BBBDIV_MSK 0x00F00000u

#define SCU_CCUCON0_FSIDIV_OFF 24u
#define SCU_CCUCON0_FSIDIV_MSK 0x03000000u

#define SCU_CCUCON0_FSI2DIV_OFF 26u
#define SCU_CCUCON0_FSI2DIV_MSK 0x0C000000u

#define SCU_CCUCON0_CLKSEL_OFF 28u
#define SCU_CCUCON0_CLKSEL_MSK 0x30000000u

#define SCU_CCUCON0_UP_OFF 30u
#define SCU_CCUCON0_UP_MSK 0x40000000u

#define SCU_CCUCON0_LCK_OFF 31u
#define SCU_CCUCON0_LCK_MSK 0x80000000u

typedef union scu_ccucon1
{
	uint32_t U;
	struct
	{
		uint32_t MCANDIV   :4;
		uint32_t CLKSELMCAN:2;
		uint32_t           :1;
		uint32_t PLL1DIVDIS:1;
		uint32_t           :8;
		uint32_t MSCDIV    :4;
		uint32_t CLKSELMSC :2;
		uint32_t           :2;
		uint32_t QSPIDIV   :4;
		uint32_t CLKSELQSPI:2;
		uint32_t           :1;
		uint32_t LCK       :1;
	} B;
} scu_ccucon1_t;

#define SCU_CCUCON1_OFF 0x0034u

#define SCU_CCUCON1_ADDR (SCU_ADDR + SCU_CCUCON1_OFF)

#define SCU_CCUCON1 (*((volatile scu_ccucon1_t*) SCU_CCUCON1_ADDR))

#define SCU_CCUCON1_MCANDIV_OFF 0u
#define SCU_CCUCON1_MCANDIV_MSK 0x0000000Fu

#define SCU_CCUCON1_CLKSELMCAN_OFF 4u
#define SCU_CCUCON1_CLKSELMCAN_MSK 0x00000030u

#define SCU_CCUCON1_PLL1DIVDIS_OFF 7u
#define SCU_CCUCON1_PLL1DIVDIS_MSK 0x00000080u

#define SCU_CCUCON1_MSCDIV_OFF 16u
#define SCU_CCUCON1_MSCDIV_MSK 0x000F0000u

#define SCU_CCUCON1_CLKSELMSC_OFF 20u
#define SCU_CCUCON1_CLKSELMSC_MSK 0x00300000u

#define SCU_CCUCON1_QSPIDIV_OFF 24u
#define SCU_CCUCON1_QSPIDIV_MSK 0x0F000000u

#define SCU_CCUCON1_CLKSELQSPI_OFF 28u
#define SCU_CCUCON1_CLKSELQSPI_MSK 0x30000000u

#define SCU_CCUCON1_LCK_OFF 31u
#define SCU_CCUCON1_LCK_MSK 0x80000000u

typedef union scu_eicon0
{
	uint32_t U;
	struct
	{
		uint32_t        : 1;
		uint32_t ENDINIT: 1;
		uint32_t EPW    :14;
		uint32_t REL    :16;
	} B;
} scu_eicon0_t;

#define SCU_EICON0_OFF 0x029Cu

#define SCU_EICON0_ADDR (SCU_ADDR + SCU_EICON0_OFF)

#define SCU_EICON0 (*((volatile scu_eicon0_t*) SCU_EICON0_ADDR))

#define SCU_EICON0_ENDINIT_OFF 1u
#define SCU_EICON0_ENDINIT_MSK 0x00000002u

#define SCU_EICON0_EPW_OFF 2u
#define SCU_EICON0_EPW_MSK 0x0000FFFCu

#define SCU_EICON0_REL_OFF 16u
#define SCU_EICON0_REL_MSK 0xFFFF0000u

typedef union scu_wdtscon0
{
	uint32_t U;
	struct
	{
		uint32_t ENDINIT: 1;
		uint32_t LCK    : 1;
		uint32_t PW     :14;
		uint32_t REL    :16;
	} B;
} scu_wdtscon0_t;

#define SCU_WDTSCON0_OFF 0x02A8u

#define SCU_WDTSCON0_ADDR (SCU_ADDR + SCU_WDTSCON0_OFF)

#define SCU_WDTSCON0 (*((volatile scu_wdtscon0_t*) SCU_WDTSCON0_ADDR))

#define SCU_WDTSCON0_ENDINIT_OFF 0u
#define SCU_WDTSCON0_ENDINIT_MSK 0x00000001u

#define SCU_WDTSCON0_LCK_OFF 1u
#define SCU_WDTSCON0_LCK_MSK 0x00000002u

#define SCU_WDTSCON0_PW_OFF 2u
#define SCU_WDTSCON0_PW_MSK 0x0000FFFFCu

#define SCU_WDTSCON0_REL_OFF 16u
#define SCU_WDTSCON0_REL_MSK 0xFFFF0000u

typedef union scu_seicon0
{
	uint32_t U;
	struct
	{
		uint32_t        : 1;
		uint32_t ENDINIT: 1;
		uint32_t EPW    :14;
		uint32_t REL    :16;
	} B;
} scu_seicon0_t;

#define SCU_SEICON0_OFF 0x02B4u

#define SCU_SEICON0_ADDR (SCU_ADDR + SCU_SEICON0_OFF)

#define SCU_SEICON0 (*((volatile scu_seicon0_t*) SCU_SEICON0_ADDR))

#define SCU_SEICON0_ENDINIT_OFF 1u
#define SCU_SEICON0_ENDINIT_MSK 0x00000002u

#define SCU_SEICON0_EPW_OFF 2u
#define SCU_SEICON0_EPW_MSK 0x0000FFFCu

#define SCU_SEICON0_REL_OFF 16u
#define SCU_SEICON0_REL_MSK 0xFFFF0000u

#endif /* SCU_H */
