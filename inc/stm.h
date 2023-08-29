/* SPDX-License-Identifier: MIT */
/**
 * \file      inc/stm.h
 * \brief     Definitions regarding STM registers structure
 * \copyright Copyright (c) 2023 Leon Rinkel
 */

#ifndef STM_H
#define STM_H

#include <stdint.h>

/** \brief STM0 registers base address */
#define STM0_ADDR 0xF0001000u
/** \brief STM1 registers base address */
#define STM1_ADDR 0xF0001100u
/** \brief STM2 registers base address */
#define STM2_ADDR 0xF0001200u
/** \brief STM3 registers base address */
#define STM3_ADDR 0xF0001300u
/** \brief STM4 registers base address */
#define STM4_ADDR 0xF0001400u
/** \brief STM5 registers base address */
#define STM5_ADDR 0xF0001500u

/** \name STM TIM0 register */
/**@{*/

/** \brief STM TIM0 register address offset */
#define STM_TIM0_OFF 0x0010u

/** \brief STM0 TIM0 register address */
#define STM0_TIM0_ADDR (STM0_ADDR + STM_TIM0_OFF)
/** \brief STM1 TIM0 register address */
#define STM1_TIM0_ADDR (STM1_ADDR + STM_TIM0_OFF)
/** \brief STM2 TIM0 register address */
#define STM2_TIM0_ADDR (STM2_ADDR + STM_TIM0_OFF)
/** \brief STM3 TIM0 register address */
#define STM3_TIM0_ADDR (STM3_ADDR + STM_TIM0_OFF)
/** \brief STM4 TIM0 register address */
#define STM4_TIM0_ADDR (STM4_ADDR + STM_TIM0_OFF)
/** \brief STM5 TIM0 register address */
#define STM5_TIM0_ADDR (STM5_ADDR + STM_TIM0_OFF)

/** \brief STM0 TIM0 register */
#define STM0_TIM0 (*((volatile uint32_t*) STM0_TIM0_ADDR))
/** \brief STM1 TIM0 register */
#define STM1_TIM0 (*((volatile uint32_t*) STM1_TIM0_ADDR))
/** \brief STM2 TIM0 register */
#define STM2_TIM0 (*((volatile uint32_t*) STM2_TIM0_ADDR))
/** \brief STM3 TIM0 register */
#define STM3_TIM0 (*((volatile uint32_t*) STM3_TIM0_ADDR))
/** \brief STM4 TIM0 register */
#define STM4_TIM0 (*((volatile uint32_t*) STM4_TIM0_ADDR))
/** \brief STM5 TIM0 register */
#define STM5_TIM0 (*((volatile uint32_t*) STM5_TIM0_ADDR))

/**@}*/

/** \name STM TIM1 register */
/**@{*/

/** \brief STM TIM1 register address offset */
#define STM_TIM1_OFF 0x0014u

/** \brief STM0 TIM1 register address */
#define STM0_TIM1_ADDR (STM0_ADDR + STM_TIM1_OFF)
/** \brief STM1 TIM1 register address */
#define STM1_TIM1_ADDR (STM1_ADDR + STM_TIM1_OFF)
/** \brief STM2 TIM1 register address */
#define STM2_TIM1_ADDR (STM2_ADDR + STM_TIM1_OFF)
/** \brief STM3 TIM1 register address */
#define STM3_TIM1_ADDR (STM3_ADDR + STM_TIM1_OFF)
/** \brief STM4 TIM1 register address */
#define STM4_TIM1_ADDR (STM4_ADDR + STM_TIM1_OFF)
/** \brief STM5 TIM1 register address */
#define STM5_TIM1_ADDR (STM5_ADDR + STM_TIM1_OFF)

/** \brief STM0 TIM1 register */
#define STM0_TIM1 (*((volatile uint32_t*) STM0_TIM1_ADDR))
/** \brief STM1 TIM1 register */
#define STM1_TIM1 (*((volatile uint32_t*) STM1_TIM1_ADDR))
/** \brief STM2 TIM1 register */
#define STM2_TIM1 (*((volatile uint32_t*) STM2_TIM1_ADDR))
/** \brief STM3 TIM1 register */
#define STM3_TIM1 (*((volatile uint32_t*) STM3_TIM1_ADDR))
/** \brief STM4 TIM1 register */
#define STM4_TIM1 (*((volatile uint32_t*) STM4_TIM1_ADDR))
/** \brief STM5 TIM1 register */
#define STM5_TIM1 (*((volatile uint32_t*) STM5_TIM1_ADDR))

/**@}*/

/** \name STM TIM2 register */
/**@{*/

/** \brief STM TIM2 register address offset */
#define STM_TIM2_OFF 0x0018u

/** \brief STM0 TIM2 register address */
#define STM0_TIM2_ADDR (STM0_ADDR + STM_TIM2_OFF)
/** \brief STM1 TIM2 register address */
#define STM1_TIM2_ADDR (STM1_ADDR + STM_TIM2_OFF)
/** \brief STM2 TIM2 register address */
#define STM2_TIM2_ADDR (STM2_ADDR + STM_TIM2_OFF)
/** \brief STM3 TIM2 register address */
#define STM3_TIM2_ADDR (STM3_ADDR + STM_TIM2_OFF)
/** \brief STM4 TIM2 register address */
#define STM4_TIM2_ADDR (STM4_ADDR + STM_TIM2_OFF)
/** \brief STM5 TIM2 register address */
#define STM5_TIM2_ADDR (STM5_ADDR + STM_TIM2_OFF)

/** \brief STM0 TIM2 register */
#define STM0_TIM2 (*((volatile uint32_t*) STM0_TIM2_ADDR))
/** \brief STM1 TIM2 register */
#define STM1_TIM2 (*((volatile uint32_t*) STM1_TIM2_ADDR))
/** \brief STM2 TIM2 register */
#define STM2_TIM2 (*((volatile uint32_t*) STM2_TIM2_ADDR))
/** \brief STM3 TIM2 register */
#define STM3_TIM2 (*((volatile uint32_t*) STM3_TIM2_ADDR))
/** \brief STM4 TIM2 register */
#define STM4_TIM2 (*((volatile uint32_t*) STM4_TIM2_ADDR))
/** \brief STM5 TIM2 register */
#define STM5_TIM2 (*((volatile uint32_t*) STM5_TIM2_ADDR))

/**@}*/

/** \name STM TIM3 register */
/**@{*/

/** \brief STM TIM3 register address offset */
#define STM_TIM3_OFF 0x001Cu

/** \brief STM0 TIM3 register address */
#define STM0_TIM3_ADDR (STM0_ADDR + STM_TIM3_OFF)
/** \brief STM1 TIM3 register address */
#define STM1_TIM3_ADDR (STM1_ADDR + STM_TIM3_OFF)
/** \brief STM2 TIM3 register address */
#define STM2_TIM3_ADDR (STM2_ADDR + STM_TIM3_OFF)
/** \brief STM3 TIM3 register address */
#define STM3_TIM3_ADDR (STM3_ADDR + STM_TIM3_OFF)
/** \brief STM4 TIM3 register address */
#define STM4_TIM3_ADDR (STM4_ADDR + STM_TIM3_OFF)
/** \brief STM5 TIM3 register address */
#define STM5_TIM3_ADDR (STM5_ADDR + STM_TIM3_OFF)

/** \brief STM0 TIM3 register */
#define STM0_TIM3 (*((volatile uint32_t*) STM0_TIM3_ADDR))
/** \brief STM1 TIM3 register */
#define STM1_TIM3 (*((volatile uint32_t*) STM1_TIM3_ADDR))
/** \brief STM2 TIM3 register */
#define STM2_TIM3 (*((volatile uint32_t*) STM2_TIM3_ADDR))
/** \brief STM3 TIM3 register */
#define STM3_TIM3 (*((volatile uint32_t*) STM3_TIM3_ADDR))
/** \brief STM4 TIM3 register */
#define STM4_TIM3 (*((volatile uint32_t*) STM4_TIM3_ADDR))
/** \brief STM5 TIM3 register */
#define STM5_TIM3 (*((volatile uint32_t*) STM5_TIM3_ADDR))

/**@}*/

/** \name STM TIM4 register */
/**@{*/

/** \brief STM TIM4 register address offset */
#define STM_TIM4_OFF 0x0020u

/** \brief STM0 TIM4 register address */
#define STM0_TIM4_ADDR (STM0_ADDR + STM_TIM4_OFF)
/** \brief STM1 TIM4 register address */
#define STM1_TIM4_ADDR (STM1_ADDR + STM_TIM4_OFF)
/** \brief STM2 TIM4 register address */
#define STM2_TIM4_ADDR (STM2_ADDR + STM_TIM4_OFF)
/** \brief STM3 TIM4 register address */
#define STM3_TIM4_ADDR (STM3_ADDR + STM_TIM4_OFF)
/** \brief STM4 TIM4 register address */
#define STM4_TIM4_ADDR (STM4_ADDR + STM_TIM4_OFF)
/** \brief STM5 TIM4 register address */
#define STM5_TIM4_ADDR (STM5_ADDR + STM_TIM4_OFF)

/** \brief STM0 TIM4 register */
#define STM0_TIM4 (*((volatile uint32_t*) STM0_TIM4_ADDR))
/** \brief STM1 TIM4 register */
#define STM1_TIM4 (*((volatile uint32_t*) STM1_TIM4_ADDR))
/** \brief STM2 TIM4 register */
#define STM2_TIM4 (*((volatile uint32_t*) STM2_TIM4_ADDR))
/** \brief STM3 TIM4 register */
#define STM3_TIM4 (*((volatile uint32_t*) STM3_TIM4_ADDR))
/** \brief STM4 TIM4 register */
#define STM4_TIM4 (*((volatile uint32_t*) STM4_TIM4_ADDR))
/** \brief STM5 TIM4 register */
#define STM5_TIM4 (*((volatile uint32_t*) STM5_TIM4_ADDR))

/**@}*/

/** \name STM TIM5 register */
/**@{*/

/** \brief STM TIM5 register address offset */
#define STM_TIM5_OFF 0x0024u

/** \brief STM0 TIM5 register address */
#define STM0_TIM5_ADDR (STM0_ADDR + STM_TIM5_OFF)
/** \brief STM1 TIM5 register address */
#define STM1_TIM5_ADDR (STM1_ADDR + STM_TIM5_OFF)
/** \brief STM2 TIM5 register address */
#define STM2_TIM5_ADDR (STM2_ADDR + STM_TIM5_OFF)
/** \brief STM3 TIM5 register address */
#define STM3_TIM5_ADDR (STM3_ADDR + STM_TIM5_OFF)
/** \brief STM4 TIM5 register address */
#define STM4_TIM5_ADDR (STM4_ADDR + STM_TIM5_OFF)
/** \brief STM5 TIM5 register address */
#define STM5_TIM5_ADDR (STM5_ADDR + STM_TIM5_OFF)

/** \brief STM0 TIM5 register */
#define STM0_TIM5 (*((volatile uint32_t*) STM0_TIM5_ADDR))
/** \brief STM1 TIM5 register */
#define STM1_TIM5 (*((volatile uint32_t*) STM1_TIM5_ADDR))
/** \brief STM2 TIM5 register */
#define STM2_TIM5 (*((volatile uint32_t*) STM2_TIM5_ADDR))
/** \brief STM3 TIM5 register */
#define STM3_TIM5 (*((volatile uint32_t*) STM3_TIM5_ADDR))
/** \brief STM4 TIM5 register */
#define STM4_TIM5 (*((volatile uint32_t*) STM4_TIM5_ADDR))
/** \brief STM5 TIM5 register */
#define STM5_TIM5 (*((volatile uint32_t*) STM5_TIM5_ADDR))

/**@}*/

/** \name STM TIM6 register */
/**@{*/

/** \brief STM TIM6 register address offset */
#define STM_TIM6_OFF 0x0028u

/** \brief STM0 TIM6 register address */
#define STM0_TIM6_ADDR (STM0_ADDR + STM_TIM6_OFF)
/** \brief STM1 TIM6 register address */
#define STM1_TIM6_ADDR (STM1_ADDR + STM_TIM6_OFF)
/** \brief STM2 TIM6 register address */
#define STM2_TIM6_ADDR (STM2_ADDR + STM_TIM6_OFF)
/** \brief STM3 TIM6 register address */
#define STM3_TIM6_ADDR (STM3_ADDR + STM_TIM6_OFF)
/** \brief STM4 TIM6 register address */
#define STM4_TIM6_ADDR (STM4_ADDR + STM_TIM6_OFF)
/** \brief STM5 TIM6 register address */
#define STM5_TIM6_ADDR (STM5_ADDR + STM_TIM6_OFF)

/** \brief STM0 TIM6 register */
#define STM0_TIM6 (*((volatile uint32_t*) STM0_TIM6_ADDR))
/** \brief STM1 TIM6 register */
#define STM1_TIM6 (*((volatile uint32_t*) STM1_TIM6_ADDR))
/** \brief STM2 TIM6 register */
#define STM2_TIM6 (*((volatile uint32_t*) STM2_TIM6_ADDR))
/** \brief STM3 TIM6 register */
#define STM3_TIM6 (*((volatile uint32_t*) STM3_TIM6_ADDR))
/** \brief STM4 TIM6 register */
#define STM4_TIM6 (*((volatile uint32_t*) STM4_TIM6_ADDR))
/** \brief STM5 TIM6 register */
#define STM5_TIM6 (*((volatile uint32_t*) STM5_TIM6_ADDR))

/**@}*/

#endif /* STM_H */
