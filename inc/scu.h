/* SPDX-License-Identifier: MIT */
/**
 * \file      inc/scu.h
 * \brief     Definitions regarding SCU registers structure
 * \copyright Copyright (c) 2023 Leon Rinkel
 */

#ifndef SCU_H
#define SCU_H

#include <stdint.h>

/** \brief SCU registers base address */
#define SCU_ADDR 0xF0036000u

/** \name SCU OSCCON register */
/**@{*/

/** \brief SCU OSCCON register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Oscillator for PLL valid low status bit */
		uint32_t PLLLV:1;
		/** \brief Oscillator watchdog reset */
		uint32_t OSCRES:1;
		/** \brief Oscillator gain selection */
		uint32_t GAINSEL:2;
		/** \brief Oscillator mode */
		uint32_t MODE:2;
		/** \brief Shaper bypass */
		uint32_t SHBY:1;
		/** \brief Oscillator for PLL valid high status bit */
		uint32_t PLLHV:1;
		/** \brief Reserved */
		uint32_t :7;
		/** \brief OSC frequency value */
		uint32_t OSCVAL:5;
		/** \brief Reserved */
		uint32_t :2;
		/** \brief Amplitude regulation enable */
		uint32_t APREN:1;
		/** \brief Capacitance 0 enable */
		uint32_t CAP0EN:1;
		/** \brief Capacitance 1 enable */
		uint32_t CAP1EN:1;
		/** \brief Capacitance 2 enable */
		uint32_t CAP2EN:1;
		/** \brief Capacitance 3 enable */
		uint32_t CAP3EN:1;
		/** \brief Reserved */
		uint32_t :4;
	} B;
} scu_osccon_t;

/** \brief SCU OSCCON register address offset */
#define SCU_OSCCON_OFF 0x0010u

/** \brief SCU OSCCON register address */
#define SCU_OSCCON_ADDR (SCU_ADDR + SCU_OSCCON_OFF)

/** \brief SCU OSCCON register */
#define SCU_OSCCON (*((volatile scu_osccon_t*) SCU_OSCCON_ADDR))

/** \brief SCU OSCCON.PLLLV bit offset */
#define SCU_OSCCON_PLLLV_OFF 1u
/** \brief SCU OSCCON.PLLLV bit mask */
#define SCU_OSCCON_PLLLV_MSK 0x00000002u

/** \brief SCU OSCCON.OSCRES bit offset */
#define SCU_OSCCON_OSCRES_OFF 2u
/** \brief SCU OSCCON.OSCRES bit mask */
#define SCU_OSCCON_OSCRES_MSK 0x00000004u

/** \brief SCU OSCCON.GAINSEL bit offset */
#define SCU_OSCCON_GAINSEL_OFF 3u
/** \brief SCU OSCCON.GAINSEL bit mask */
#define SCU_OSCCON_GAINSEL_MSK 0x00000018u

/** \brief SCU OSCCON.MODE bit offset */
#define SCU_OSCCON_MODE_OFF 5u
/** \brief SCU OSCCON.MODE bit mask */
#define SCU_OSCCON_MODE_MSK 0x00000060u

/** \brief SCU OSCCON.SHBY bit offset */
#define SCU_OSCCON_SHBY_OFF 7u
/** \brief SCU OSCCON.SHBY bit mask */
#define SCU_OSCCON_SHBY_MSK 0x00000080u

/** \brief SCU OSCCON.PLLHV bit offset */
#define SCU_OSCCON_PLLHV_OFF 8u
/** \brief SCU OSCCON.PLLHV bit mask */
#define SCU_OSCCON_PLLHV_MSK 0x00000100u

/** \brief SCU OSCCON.OSCVAL bit offset */
#define SCU_OSCCON_OSCVAL_OFF 16u
/** \brief SCU OSCCON.OSCVAL bit mask */
#define SCU_OSCCON_OSCVAL_MSK 0x001F0000u

/** \brief SCU OSCCON.APREN bit offset */
#define SCU_OSCCON_APREN_OFF 23u
/** \brief SCU OSCCON.APREN bit mask */
#define SCU_OSCCON_APREN_MSK 0x00800000u

/** \brief SCU OSCCON.CAP0EN bit offset */
#define SCU_OSCCON_CAP0EN_OFF 24u
/** \brief SCU OSCCON.CAP0EN bit mask */
#define SCU_OSCCON_CAP0EN_MSK 0x01000000u

/** \brief SCU OSCCON.CAP1EN bit offset */
#define SCU_OSCCON_CAP1EN_OFF 25u
/** \brief SCU OSCCON.CAP1EN bit mask */
#define SCU_OSCCON_CAP1EN_MSK 0x02000000u

/** \brief SCU OSCCON.CAP2EN bit offset */
#define SCU_OSCCON_CAP2EN_OFF 26u
/** \brief SCU OSCCON.CAP2EN bit mask */
#define SCU_OSCCON_CAP2EN_MSK 0x04000000u

/** \brief SCU OSCCON.CAP3EN bit offset */
#define SCU_OSCCON_CAP3EN_OFF 27u
/** \brief SCU OSCCON.CAP3EN bit mask */
#define SCU_OSCCON_CAP3EN_MSK 0x08000000u

/**@}*/

/** \name SCU SYSPLLSTAT register */
/**@{*/

/** \brief SCU SYSPLLSTAT register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :1;
		/** \brief System PLL power-saving mode status */
		uint32_t PWDSTAT:1;
		/** \brief System PLL lock status */
		uint32_t LOCK:1;
		/** \brief Reserved */
		uint32_t :2;
		/** \brief K2 divider ready status */
		uint32_t K2RDY:1;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Modulation run */
		uint32_t MODRUN:1;
		/** \brief Reserved */
		uint32_t :8;
		/** \brief Reserved */
		uint32_t :16;
	} B;
} scu_syspllstat_t;

/** \brief SCU SYSPLLSTAT register address offset */
#define SCU_SYSPLLSTAT_OFF 0x0014u

/** \brief SCU SYSPLLSTAT register address */
#define SCU_SYSPLLSTAT_ADDR (SCU_ADDR + SCU_SYSPLLSTAT_OFF)

/** \brief SCU SYSPLLSTAT register */
#define SCU_SYSPLLSTAT (*((volatile scu_syspllstat_t*) SCU_SYSPLLSTAT_ADDR))

/** \brief SCU SYSPLLSTAT.PWDSTAT bit offset */
#define SCU_SYSPLLSTAT_PWDSTAT_OFF 1u
/** \brief SCU SYSPLLSTAT.PWDSTAT bit mask */
#define SCU_SYSPLLSTAT_PWDSTAT_MSK 0x00000002u

/** \brief SCU SYSPLLSTAT.LOCK bit offset */
#define SCU_SYSPLLSTAT_LOCK_OFF 2u
/** \brief SCU SYSPLLSTAT.LOCK bit mask */
#define SCU_SYSPLLSTAT_LOCK_MSK 0x00000004u

/** \brief SCU SYSPLLSTAT.K2RDY bit offset */
#define SCU_SYSPLLSTAT_K2RDY_OFF 5u
/** \brief SCU SYSPLLSTAT.K2RDY bit mask */
#define SCU_SYSPLLSTAT_K2RDY_MSK 0x00000020u

/** \brief SCU SYSPLLSTAT.MODRUN bit offset */
#define SCU_SYSPLLSTAT_MODRUN_OFF 7u
/** \brief SCU SYSPLLSTAT.MODRUN bit mask */
#define SCU_SYSPLLSTAT_MODRUN_MSK 0x00000080u

/**@}*/

/** \name SCU SYSPLLCON0 register */
/**@{*/

/** \brief SCU SYSPLLCON0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :2;
		/** \brief Modulation enable */
		uint32_t MODEN:1;
		/** \brief Reserved */
		uint32_t :6;
		/** \brief N-divider value */
		uint32_t NDIV:7;
		/** \brief System PLL power saving mode */
		uint32_t PLLPWD:1;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Restart DCO lock detection */
		uint32_t RESLD:1;
		/** \brief Reserved */
		uint32_t :5;
		/** \brief P-divider value */
		uint32_t PDIV:3;
		/** \brief Reserved */
		uint32_t :3;
		/** \brief Input selection */
		uint32_t INSEL:2;
	} B;
} scu_syspllcon0_t;

/** \brief SCU SYSPLLCON0 register address offset */
#define SCU_SYSPLLCON0_OFF 0x0018u

/** \brief SCU SYSPLLCON0 register address */
#define SCU_SYSPLLCON0_ADDR (SCU_ADDR + SCU_SYSPLLCON0_OFF)

/** \brief SCU SYSPLLCON0 register */
#define SCU_SYSPLLCON0 (*((volatile scu_syspllcon0_t*) SCU_SYSPLLCON0_ADDR))

/** \brief SCU SYSPLLCON0.MODEN bit offset */
#define SCU_SYSPLLCON0_MODEN_OFF 2u
/** \brief SCU SYSPLLCON0.MODEN bit mask */
#define SCU_SYSPLLCON0_MODEN_MSK 0x00000004u

/** \brief SCU SYSPLLCON0.NDIV bit offset */
#define SCU_SYSPLLCON0_NDIV_OFF 9u
/** \brief SCU SYSPLLCON0.NDIV bit mask */
#define SCU_SYSPLLCON0_NDIV_MSK 0x0000FE00u

/** \brief SCU SYSPLLCON0.PLLPWD bit offset */
#define SCU_SYSPLLCON0_PLLPWD_OFF 16u
/** \brief SCU SYSPLLCON0.PLLPWD bit mask */
#define SCU_SYSPLLCON0_PLLPWD_MSK 0x00010000u

/** \brief SCU SYSPLLCON0.RESLD bit offset */
#define SCU_SYSPLLCON0_RESLD_OFF 18u
/** \brief SCU SYSPLLCON0.RESLD bit mask */
#define SCU_SYSPLLCON0_RESLD_MSK 0x00040000u

/** \brief SCU SYSPLLCON0.PDIV bit offset */
#define SCU_SYSPLLCON0_PDIV_OFF 24u
/** \brief SCU SYSPLLCON0.PDIV bit mask */
#define SCU_SYSPLLCON0_PDIV_MSK 0x07000000u

/** \brief SCU SYSPLLCON0.INSEL bit offset */
#define SCU_SYSPLLCON0_INSEL_OFF 30u
/** \brief SCU SYSPLLCON0.INSEL bit mask */
#define SCU_SYSPLLCON0_INSEL_MSK 0xC0000000u

/**@}*/

/** \name SCU SYSPLLCON1 register */
/**@{*/

/** \brief PORT SYSPLLCON1 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief K2-divider value */
		uint32_t K2DIV:3;
		/** \brief Reserved */
		uint32_t :13;
		/** \brief Reserved */
		uint32_t :16;
	} B;
} scu_syspllcon1_t;

/** \brief SCU SYSPLLCON1 register address offset */
#define SCU_SYSPLLCON1_OFF 0x001Cu

/** \brief SCU SYSPLLCON1 register address */
#define SCU_SYSPLLCON1_ADDR (SCU_ADDR + SCU_SYSPLLCON1_OFF)

/** \brief SCU SYSPLLCON1 register */
#define SCU_SYSPLLCON1 (*((volatile scu_syspllcon1_t*) SCU_SYSPLLCON1_ADDR))

/** \brief SCU SYSPLLCON1.K2DIV bit offset */
#define SCU_SYSPLLCON1_K2DIV_OFF 0u
/** \brief SCU SYSPLLCON1.K2DIV bit mask */
#define SCU_SYSPLLCON1_K2DIV_MSK 0x00000007u

/**@}*/

/** \name SCU PERPLLSTAT register */
/**@{*/

/** \brief SCU PERPLLSTAT register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Peripheral PLL power-saving mode status */
		uint32_t PWDSTAT:1;
		/** \brief Peripheral PLL lock status */
		uint32_t LOCK:1;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief K3 divider ready status */
		uint32_t K3RDY:1;
		/** \brief K2 divider ready status */
		uint32_t K2RDY:1;
		/** \brief Reserved */
		uint32_t :2;
		/** \brief Reserved */
		uint32_t :8;
		/** \brief Reserved */
		uint32_t :16;
	} B;
} scu_perpllstat_t;

/** \brief SCU PERPLLSTAT register address offset */
#define SCU_PERPLLSTAT_OFF 0x0024u

/** \brief SCU PERPLLSTAT register address */
#define SCU_PERPLLSTAT_ADDR (SCU_ADDR + SCU_PERPLLSTAT_OFF)

/** \brief SCU PERPLLSTAT register */
#define SCU_PERPLLSTAT (*((volatile scu_perpllstat_t*) SCU_PERPLLSTAT_ADDR))

/** \brief SCU PERPLLSTAT.PWDSTAT register offset */
#define SCU_PERPLLSTAT_PWDSTAT_OFF 1u
/** \brief SCU PERPLLSTAT.PWDSTAT register mask */
#define SCU_PERPLLSTAT_PWDSTAT_MSK 0x00000001u

/** \brief SCU PERPLLSTAT.LOCK register offset */
#define SCU_PERPLLSTAT_LOCK_OFF 2u
/** \brief SCU PERPLLSTAT.LOCK register mask */
#define SCU_PERPLLSTAT_LOCK_MSK 0x00000004u

/** \brief SCU PERPLLSTAT.K3RDY register offset */
#define SCU_PERPLLSTAT_K3RDY_OFF 4u
/** \brief SCU PERPLLSTAT.K3RDY register mask */
#define SCU_PERPLLSTAT_K3RDY_MSK 0x00000010u

/** \brief SCU PERPLLSTAT.K2RDY register offset */
#define SCU_PERPLLSTAT_K2RDY_OFF 5u
/** \brief SCU PERPLLSTAT.K2RDY register mask */
#define SCU_PERPLLSTAT_K2RDY_MSK 0x00000020u

/**@}*/

/** \name SCU PERPLLCON0 register */
/**@{*/

/** \brief SCU PERPLLCON0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Divider bypass */
		uint32_t DIVBY:1;
		/** \brief Reserved */
		uint32_t :8;
		/** \brief N-divider value */
		uint32_t NDIV:7;
		/** \brief Peripheral PLL power saving mode */
		uint32_t PLLPWD:1;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Restart DCO lock detection */
		uint32_t RESLD:1;
		/** \brief Reserved */
		uint32_t :5;
		/** \brief P-divider value */
		uint32_t PDIV:3;
		/** \brief Reserved */
		uint32_t :5;
	} B;
} scu_perpllcon0_t;

/** \brief SCU PERPLLCON0 register address offset */
#define SCU_PERPLLCON0_OFF 0x0028u

/** \brief SCU PERPLLCON0 register address */
#define SCU_PERPLLCON0_ADDR (SCU_ADDR + SCU_PERPLLCON0_OFF)

/** \brief SCU PERPLLCON0 register */
#define SCU_PERPLLCON0 (*((volatile scu_perpllcon0_t*) SCU_PERPLLCON0_ADDR))

/** \brief SCU PERPLLCON0.DIVBY bit offset */
#define SCU_PERPLLCON0_DIVBY_OFF 1u
/** \brief SCU PERPLLCON0.DIVBY bit mask */
#define SCU_PERPLLCON0_DIVBY_MSK 0x00000001u

/** \brief SCU PERPLLCON0.NDIV bit offset */
#define SCU_PERPLLCON0_NDIV_OFF 9u
/** \brief SCU PERPLLCON0.NDIV bit mask */
#define SCU_PERPLLCON0_NDIV_MSK 0x0000FE00u

/** \brief SCU PERPLLCON0.PLLPWD bit offset */
#define SCU_PERPLLCON0_PLLPWD_OFF 16u
/** \brief SCU PERPLLCON0.PLLPWD bit mask */
#define SCU_PERPLLCON0_PLLPWD_MSK 0x00010000u

/** \brief SCU PERPLLCON0.RESLD bit offset */
#define SCU_PERPLLCON0_RESLD_OFF 18u
/** \brief SCU PERPLLCON0.RESLD bit mask */
#define SCU_PERPLLCON0_RESLD_MSK 0x00040000u

/** \brief SCU PERPLLCON0.PDIV bit offset */
#define SCU_PERPLLCON0_PDIV_OFF 24u
/** \brief SCU PERPLLCON0.PDIV bit mask */
#define SCU_PERPLLCON0_PDIV_MSK 0x01000000u

/**@}*/

/** \name SCU PERPLLCON1 register */
/**@{*/

/** \brief SCU PERPLLCON1 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief K2-divider value */
		uint32_t K2DIV:3;
		/** \brief Reserved */
		uint32_t :5;
		/** \brief K3-divider value */
		uint32_t K3DIV:3;
		/** \brief Reserved */
		uint32_t :5;
		/** \brief Reserved */
		uint32_t :16;
	} B;
} scu_perpllcon1_t;

/** \brief SCU PERPLLCON1 register address offset */
#define SCU_PERPLLCON1_OFF 0x002Cu

/** \brief SCU PERPLLCON1 register address */
#define SCU_PERPLLCON1_ADDR (SCU_ADDR + SCU_PERPLLCON1_OFF)

/** \brief SCU PERPLLCON1 register */
#define SCU_PERPLLCON1 (*((volatile scu_perpllcon1_t*) SCU_PERPLLCON1_ADDR))

/** \brief SCU PERPLLCON1.K2DIV bit offset */
#define SCU_PERPLLCON1_K2DIV_OFF 0u
/** \brief SCU PERPLLCON1.K2DIV bit mask */
#define SCU_PERPLLCON1_K2DIV_MSK 0x00000007u

/** \brief SCU PERPLLCON1.K3DIV bit offset */
#define SCU_PERPLLCON1_K3DIV_OFF 8u
/** \brief SCU PERPLLCON1.K3DIV bit mask */
#define SCU_PERPLLCON1_K3DIV_MSK 0x00000700u

/**@}*/

/** \name SCU CCUCON0 register */
/**@{*/

/** \brief SCU CCUCON0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief STM divider reload value */
		uint32_t STMDIV:4;
		/** \brief GTM divider reload value */
		uint32_t GTMDIV:4;
		/** \brief SRI divider reload value */
		uint32_t SRIDIV:4;
		/** \brief Low power divider reload value */
		uint32_t LPDIV:3;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief SPB divider reload value */
		uint32_t SPBDIV:4;
		/** \brief BBB divider reload value */
		uint32_t BBBDIV:4;
		/** \brief FSI divider reload value */
		uint32_t FSIDIV:2;
		/** \brief FSI2 divider reload value */
		uint32_t FSI2DIV:2;
		/** \brief Clock selection for source */
		uint32_t CLKSEL:2;
		/** \brief Update request */
		uint32_t UP:1;
		/** \brief Lock status */
		uint32_t LCK:1;
	} B;
} scu_ccucon0_t;

/** \brief SCU CCUCON0 register address offset */
#define SCU_CCUCON0_OFF 0x0030u

/** \brief SCU CCUCON0 register address */
#define SCU_CCUCON0_ADDR (SCU_ADDR + SCU_CCUCON0_OFF)

/** \brief SCU CCUCON0 register */
#define SCU_CCUCON0 (*((volatile scu_ccucon0_t*) SCU_CCUCON0_ADDR))

/** \brief SCU CCUCON0.STMDIV bit offset */
#define SCU_CCUCON0_STMDIV_OFF 0u
/** \brief SCU CCUCON0.STMDIV bit mask */
#define SCU_CCUCON0_STMDIV_MSK 0x0000000Fu

/** \brief SCU CCUCON0.GTMDIV bit offset */
#define SCU_CCUCON0_GTMDIV_OFF 4u
/** \brief SCU CCUCON0.GTMDIV bit mask */
#define SCU_CCUCON0_GTMDIV_MSK 0x000000F0u

/** \brief SCU CCUCON0.SRIDIV bit offset */
#define SCU_CCUCON0_SRIDIV_OFF 8u
/** \brief SCU CCUCON0.SRIDIV bit mask */
#define SCU_CCUCON0_SRIDIV_MSK 0x00000F00u

/** \brief SCU CCUCON0.LPDIV bit offset */
#define SCU_CCUCON0_LPDIV_OFF 12u
/** \brief SCU CCUCON0.LPDIV bit mask */
#define SCU_CCUCON0_LPDIV_MSK 0x00007000u

/** \brief SCU CCUCON0.SPBDIV bit offset */
#define SCU_CCUCON0_SPBDIV_OFF 16u
/** \brief SCU CCUCON0.SPBDIV bit mask */
#define SCU_CCUCON0_SPBDIV_MSK 0x000F0000u

/** \brief SCU CCUCON0.BBBDIV bit offset */
#define SCU_CCUCON0_BBBDIV_OFF 20u
/** \brief SCU CCUCON0.BBBDIV bit mask */
#define SCU_CCUCON0_BBBDIV_MSK 0x00F00000u

/** \brief SCU CCUCON0.FSIDIV bit offset */
#define SCU_CCUCON0_FSIDIV_OFF 24u
/** \brief SCU CCUCON0.FSIDIV bit mask */
#define SCU_CCUCON0_FSIDIV_MSK 0x03000000u

/** \brief SCU CCUCON0.FSI2DIV bit offset */
#define SCU_CCUCON0_FSI2DIV_OFF 26u
/** \brief SCU CCUCON0.FSI2DIV bit mask */
#define SCU_CCUCON0_FSI2DIV_MSK 0x0C000000u

/** \brief SCU CCUCON0.CLKSEL bit offset */
#define SCU_CCUCON0_CLKSEL_OFF 28u
/** \brief SCU CCUCON0.CLKSEL bit mask */
#define SCU_CCUCON0_CLKSEL_MSK 0x30000000u

/** \brief SCU CCUCON0.UP bit offset */
#define SCU_CCUCON0_UP_OFF 30u
/** \brief SCU CCUCON0.UP bit mask */
#define SCU_CCUCON0_UP_MSK 0x40000000u

/** \brief SCU CCUCON0.LCK bit offset */
#define SCU_CCUCON0_LCK_OFF 31u
/** \brief SCU CCUCON0.LCK bit mask */
#define SCU_CCUCON0_LCK_MSK 0x80000000u

/**@}*/

/** \name SCU CCUCON1 register */
/**@{*/

/** \brief SCU CCUCON1 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief MCAN divider reload value */
		uint32_t MCANDIV:4;
		/** \brief Clock selection for MCAN */
		uint32_t CLKSELMCAN:2;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Divider disable for fPLL1 */
		uint32_t PLL1DIVDIS:1;
		/** \brief Reserved */
		uint32_t :8;
		/** \brief MSC divider reload value */
		uint32_t MSCDIV:4;
		/** \brief Clock selection for MSC */
		uint32_t CLKSELMSC:2;
		/** \brief Reserved */
		uint32_t :2;
		/** \brief QSPI divider reload value */
		uint32_t QSPIDIV:4;
		/** \brief Clock selection for QSPI */
		uint32_t CLKSELQSPI:2;
		/** \brief Reserved */
		uint32_t :1;
		/** \brief Lock status */
		uint32_t LCK:1;
	} B;
} scu_ccucon1_t;

/** \brief SCU CCUCON1 register address offset */
#define SCU_CCUCON1_OFF 0x0034u

/** \brief SCU CCUCON1 register address */
#define SCU_CCUCON1_ADDR (SCU_ADDR + SCU_CCUCON1_OFF)

/** \brief SCU CCUCON1 register */
#define SCU_CCUCON1 (*((volatile scu_ccucon1_t*) SCU_CCUCON1_ADDR))

/** \brief SCU CCUCON1.MCANDIV bit offset */
#define SCU_CCUCON1_MCANDIV_OFF 0u
/** \brief SCU CCUCON1.MCANDIV bit mask */
#define SCU_CCUCON1_MCANDIV_MSK 0x0000000Fu

/** \brief SCU CCUCON1.CLKSELMCAN bit offset */
#define SCU_CCUCON1_CLKSELMCAN_OFF 4u
/** \brief SCU CCUCON1.CLKSELMCAN bit mask */
#define SCU_CCUCON1_CLKSELMCAN_MSK 0x00000030u

/** \brief SCU CCUCON1.PLL1DIVDIS bit offset */
#define SCU_CCUCON1_PLL1DIVDIS_OFF 7u
/** \brief SCU CCUCON1.PLL1DIVDIS bit mask */
#define SCU_CCUCON1_PLL1DIVDIS_MSK 0x00000080u

/** \brief SCU CCUCON1.MSCDIV bit offset */
#define SCU_CCUCON1_MSCDIV_OFF 16u
/** \brief SCU CCUCON1.MSCDIV bit mask */
#define SCU_CCUCON1_MSCDIV_MSK 0x000F0000u

/** \brief SCU CCUCON1.CLKSELMSC bit offset */
#define SCU_CCUCON1_CLKSELMSC_OFF 20u
/** \brief SCU CCUCON1.CLKSELMSC bit mask */
#define SCU_CCUCON1_CLKSELMSC_MSK 0x00300000u

/** \brief SCU CCUCON1.QSPIDIV bit offset */
#define SCU_CCUCON1_QSPIDIV_OFF 24u
/** \brief SCU CCUCON1.QSPIDIV bit mask */
#define SCU_CCUCON1_QSPIDIV_MSK 0x0F000000u

/** \brief SCU CCUCON1.CLKSELQSPI bit offset */
#define SCU_CCUCON1_CLKSELQSPI_OFF 28u
/** \brief SCU CCUCON1.CLKSELQSPI bit mask */
#define SCU_CCUCON1_CLKSELQSPI_MSK 0x30000000u

/** \brief SCU CCUCON1.LCK bit offset */
#define SCU_CCUCON1_LCK_OFF 31u
/** \brief SCU CCUCON1.LCK bit mask */
#define SCU_CCUCON1_LCK_MSK 0x80000000u

/**@}*/

/** \name SCU EICON0 register */
/**@{*/

/** \brief SCU EICON0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :1;
		/** \brief End-of-initialization control bit */
		uint32_t ENDINIT:1;
		/** \brief User-definable ENDINIT password field */
		uint32_t EPW:14;
		/** \brief Reload value for the ENDINIT timeout counter */
		uint32_t REL:16;
	} B;
} scu_eicon0_t;

/** \brief SCU EICON0 register address offset */
#define SCU_EICON0_OFF 0x029Cu

/** \brief SCU EICON0 register address */
#define SCU_EICON0_ADDR (SCU_ADDR + SCU_EICON0_OFF)

/** \brief SCU EICON0 register */
#define SCU_EICON0 (*((volatile scu_eicon0_t*) SCU_EICON0_ADDR))

/** \brief SCU EICON0.ENDINIT bit offset */
#define SCU_EICON0_ENDINIT_OFF 1u
/** \brief SCU EICON0.ENDINIT bit mask */
#define SCU_EICON0_ENDINIT_MSK 0x00000002u

/** \brief SCU EICON0.EPW bit offset */
#define SCU_EICON0_EPW_OFF 2u
/** \brief SCU EICON0.EPW bit mask */
#define SCU_EICON0_EPW_MSK 0x0000FFFCu

/** \brief SCU EICON0.REL bit offset */
#define SCU_EICON0_REL_OFF 16u
/** \brief SCU EICON0.REL bit mask */
#define SCU_EICON0_REL_MSK 0xFFFF0000u

/**@}*/

/** \name SCU WDTSCON0 register */
/**@{*/

/** \brief SCU WDTSCON0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief End-of-initialization control bit */
		uint32_t ENDINIT:1;
		/** \brief Lock bit to control access to WDTxCON0 */
		uint32_t LCK:1;
		/** \brief User-definable password field for access to WDTxCON0 */
		uint32_t PW:14;
		/** \brief Reload value for the WDT (also time check value) */
		uint32_t REL:16;
	} B;
} scu_wdtscon0_t;

/** \brief SCU WDTSCON0 register address offset */
#define SCU_WDTSCON0_OFF 0x02A8u

/** \brief SCU WDTSCON0 register address */
#define SCU_WDTSCON0_ADDR (SCU_ADDR + SCU_WDTSCON0_OFF)

/** \brief SCU WDTSCON0 register */
#define SCU_WDTSCON0 (*((volatile scu_wdtscon0_t*) SCU_WDTSCON0_ADDR))

/** \brief SCU WDTSCON0.ENDINIT offset */
#define SCU_WDTSCON0_ENDINIT_OFF 0u
/** \brief SCU WDTSCON0.ENDINIT mask */
#define SCU_WDTSCON0_ENDINIT_MSK 0x00000001u

/** \brief SCU WDTSCON0.LCK offset */
#define SCU_WDTSCON0_LCK_OFF 1u
/** \brief SCU WDTSCON0.LCK mask */
#define SCU_WDTSCON0_LCK_MSK 0x00000002u

/** \brief SCU WDTSCON0.PW offset */
#define SCU_WDTSCON0_PW_OFF 2u
/** \brief SCU WDTSCON0.PW mask */
#define SCU_WDTSCON0_PW_MSK 0x0000FFFFCu

/** \brief SCU WDTSCON0.REL offset */
#define SCU_WDTSCON0_REL_OFF 16u
/** \brief SCU WDTSCON0.REL mask */
#define SCU_WDTSCON0_REL_MSK 0xFFFF0000u

/**@}*/

/** \name SCU SEICON0 register */
/**@{*/

/** \brief SCU SEICON0 register structure */
typedef union
{
	/** \brief Unsigned access */
	uint32_t U;
	/** \brief Bitfield access */
	struct
	{
		/** \brief Reserved */
		uint32_t :1;
		/** \brief End-of-initialization control bit */
		uint32_t ENDINIT:1;
		/** \brief User-definable safety ENDINIT password field */
		uint32_t EPW:14;
		/** \brief Reload value for the safety ENDINIT timeout counter */
		uint32_t REL:16;
	} B;
} scu_seicon0_t;

/** \brief SCU SEICON0 register address offset */
#define SCU_SEICON0_OFF 0x02B4u

/** \brief SCU SEICON0 register address */
#define SCU_SEICON0_ADDR (SCU_ADDR + SCU_SEICON0_OFF)

/** \brief SCU SEICON0 register */
#define SCU_SEICON0 (*((volatile scu_seicon0_t*) SCU_SEICON0_ADDR))

/** \brief SCU SEICON0.ENDINIT bit offset */
#define SCU_SEICON0_ENDINIT_OFF 1u
/** \brief SCU SEICON0.ENDINIT bit mask */
#define SCU_SEICON0_ENDINIT_MSK 0x00000002u

/** \brief SCU SEICON0.EPW bit offset */
#define SCU_SEICON0_EPW_OFF 2u
/** \brief SCU SEICON0.EPW bit mask */
#define SCU_SEICON0_EPW_MSK 0x0000FFFCu

/** \brief SCU SEICON0.REL bit offset */
#define SCU_SEICON0_REL_OFF 16u
/** \brief SCU SEICON0.REL bit mask */
#define SCU_SEICON0_REL_MSK 0xFFFF0000u

/**@}*/

#endif /* SCU_H */
