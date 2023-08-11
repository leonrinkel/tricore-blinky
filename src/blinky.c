#include <stdint.h>

#include <port.h>
#include <scu.h>

void unprotect_wdtscon0(void);
void unprotect_eicon0(void);
void unprotect_seicon0(void);
void ramp_clocks(void);
void blink_loop(void);

int main(void)
{
	unprotect_wdtscon0();
	unprotect_eicon0();
	unprotect_seicon0();
	ramp_clocks();

	blink_loop();

	return 0;
}

void unprotect_wdtscon0(void)
{
	uint32_t password;

	/* Calculate password */
	password =
		((~SCU_WDTSCON0.B.PW) & 0x003Fu) |
		(( SCU_WDTSCON0.B.PW) & 0x3FC0u);

	/* Is locked? */
	if (SCU_WDTSCON0.B.LCK)
	{
		/* Clear lock */
		SCU_WDTSCON0.U =
			(0x1u               << SCU_WDTSCON0_ENDINIT_OFF) |
			(0x0u               << SCU_WDTSCON0_LCK_OFF    ) |
			(password           << SCU_WDTSCON0_PW_OFF     ) |
			(SCU_WDTSCON0.B.REL << SCU_WDTSCON0_REL_OFF    );
	}

	/* Clear endinit */
	SCU_WDTSCON0.U =
		(0x0u               << SCU_WDTSCON0_ENDINIT_OFF) |
		(0x1u               << SCU_WDTSCON0_LCK_OFF    ) |
		(password           << SCU_WDTSCON0_PW_OFF     ) |
		(SCU_WDTSCON0.B.REL << SCU_WDTSCON0_REL_OFF    );

	/* Wait till cleared */
	while (SCU_WDTSCON0.U & SCU_WDTSCON0_ENDINIT_MSK);
}

void unprotect_eicon0(void)
{
	uint32_t password;

	/* Calculate password */
	password =
		((~SCU_EICON0.B.EPW) & 0x003Fu) |
		(( SCU_EICON0.B.EPW) & 0x3FC0u);

	/* Clear endinit */
	SCU_EICON0.U =
		(0x0u             << SCU_EICON0_ENDINIT_OFF) |
		(password         << SCU_EICON0_EPW_OFF    ) |
		(SCU_EICON0.B.REL << SCU_EICON0_REL_OFF    );

	/* Wait till cleared */
	while (SCU_EICON0.U & SCU_EICON0_ENDINIT_MSK);
}

void unprotect_seicon0(void)
{
	uint32_t password;

	/* Calculate password */
	password =
		((~SCU_SEICON0.B.EPW) & 0x003Fu) |
		(( SCU_SEICON0.B.EPW) & 0x3FC0u);

	/* Clear endinit */
	SCU_SEICON0.U =
		(0x0u              << SCU_SEICON0_ENDINIT_OFF) |
		(password          << SCU_SEICON0_EPW_OFF    ) |
		(SCU_SEICON0.B.REL << SCU_SEICON0_REL_OFF    );

	/* Wait till cleared */
	while (SCU_SEICON0.U & SCU_SEICON0_ENDINIT_MSK);
}

void ramp_clocks(void)
{
	volatile uint32_t i;

	/* Configure external oscillator */
	SCU_OSCCON.U =
		(0x1u  << SCU_OSCCON_OSCRES_OFF ) |
		(0x3u  << SCU_OSCCON_GAINSEL_OFF) |
		(0x0u  << SCU_OSCCON_MODE_OFF   ) |
		(0x0u  << SCU_OSCCON_SHBY_OFF   ) |
		(0x05u << SCU_OSCCON_OSCVAL_OFF );

	/* Wait till frequency usable */
	while (
		!(SCU_OSCCON.U & SCU_OSCCON_PLLLV_MSK) ||
		!(SCU_OSCCON.U & SCU_OSCCON_PLLHV_MSK)
	);

	/* Configure system PLL */
	SCU_SYSPLLCON0.U =
		(0x0u  << SCU_SYSPLLCON0_MODEN_OFF ) |
		(0x1Du << SCU_SYSPLLCON0_NDIV_OFF  ) |
		(0x1u  << SCU_SYSPLLCON0_PLLPWD_OFF) |
		(0x1u  << SCU_SYSPLLCON0_RESLD_OFF ) |
		(0x0u  << SCU_SYSPLLCON0_PDIV_OFF  ) |
		(0x1u  << SCU_SYSPLLCON0_INSEL_OFF );
	SCU_SYSPLLCON1.U =
		(0x5u << SCU_SYSPLLCON1_K2DIV_OFF);

	/* Configure peripheral PLL */
	SCU_PERPLLCON0.U =
		(0x0u  << SCU_PERPLLCON0_DIVBY_OFF ) |
		(0x1Fu << SCU_PERPLLCON0_NDIV_OFF  ) |
		(0x1u  << SCU_PERPLLCON0_PLLPWD_OFF) |
		(0x1u  << SCU_PERPLLCON0_RESLD_OFF ) |
		(0x0u  << SCU_PERPLLCON0_PDIV_OFF  );
	SCU_PERPLLCON1.U =
		(0x1u << SCU_PERPLLCON1_K2DIV_OFF) |
		(0x1u << SCU_PERPLLCON1_K3DIV_OFF);

	/* Wait for PLL lock */
	while (
		!(SCU_SYSPLLSTAT.U & SCU_SYSPLLSTAT_LOCK_MSK) ||
		!(SCU_PERPLLSTAT.U & SCU_PERPLLSTAT_LOCK_MSK)
	);

	/* Configure first CCUCON target */
	SCU_CCUCON0.U =
		(0x3u << SCU_CCUCON0_STMDIV_OFF ) |
		(0x1u << SCU_CCUCON0_GTMDIV_OFF ) |
		(0x1u << SCU_CCUCON0_SRIDIV_OFF ) |
		(0x0u << SCU_CCUCON0_LPDIV_OFF  ) |
		(0x3u << SCU_CCUCON0_SPBDIV_OFF ) |
		(0x2u << SCU_CCUCON0_BBBDIV_OFF ) |
		(0x3u << SCU_CCUCON0_FSIDIV_OFF ) |
		(0x1u << SCU_CCUCON0_FSI2DIV_OFF) |
		(0x0u << SCU_CCUCON0_CLKSEL_OFF ) |
		(0x0u << SCU_CCUCON0_UP_OFF     );
	SCU_CCUCON1.U =
		(0x2u << SCU_CCUCON1_MCANDIV_OFF   ) |
		(0x1u << SCU_CCUCON1_CLKSELMCAN_OFF) |
		(0x0u << SCU_CCUCON1_PLL1DIVDIS_OFF) |
		(0x1u << SCU_CCUCON1_MSCDIV_OFF    ) |
		(0x2u << SCU_CCUCON1_CLKSELMSC_OFF ) |
		(0x1u << SCU_CCUCON1_QSPIDIV_OFF   ) |
		(0x2u << SCU_CCUCON1_CLKSELQSPI_OFF);

	/* Wait a bit */
	for (i = 0x000FFFFFu; i > 0; i--);

	/* Switch CCU input clock to PLL */
	SCU_CCUCON0.U |=
		(0x1u << SCU_CCUCON0_CLKSEL_OFF) |
		(0x1u << SCU_CCUCON0_UP_OFF    );

	/* Wait a bit */
	for (i = 0x000FFFFFu; i > 0; i--);

	/* Ramp up frequency */
	SCU_SYSPLLCON1.U =
		(0x3u << SCU_SYSPLLCON1_K2DIV_OFF);

	/* Wait a bit */
	for (i = 0x000FFFFFu; i > 0; i--);

	/* Ramp up frequency */
	SCU_SYSPLLCON1.U =
		(0x2u << SCU_SYSPLLCON1_K2DIV_OFF);

	/* Wait a bit */
	for (i = 0x000FFFFFu; i > 0; i--);

	/* Ramp up frequency */
	SCU_SYSPLLCON1.U =
		(0x1u << SCU_SYSPLLCON1_K2DIV_OFF);

	/* Wait a bit */
	for (i = 0x000FFFFFu; i > 0; i--);
}

void blink_loop(void)
{
	/* Configure P33.4 as general-purpose output */
	PORT_P33_IOCR4.B.PC4 = 0x10u;

	/* Toggle P33.4 output value at roughly 6Hz */
	while (1)
	{
		PORT_P33_OUT.B.P4 =
			(*((volatile uint32_t*) 0xF0001010u) & 0x01000000u)
				? 0x1u : 0x0u;
	}
}
