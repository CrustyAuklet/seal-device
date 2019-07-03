#include "device.h"

/**
 * Initial system clock frequency. The System RC Oscillator (RCSYS) provides
 *  the source for the main clock at chip startup.
 *  __SYSTEM_CLOCK should be defined by CMAKE or on the command line
 */

uint32_t SystemCoreClock = __SYSTEM_CLOCK;/*!< System Clock Frequency (Core Clock)*/

/**
 * Initialize the system
 *
 * @brief  Setup the microcontroller system.
 *         Initialize the System and update the SystemCoreClock variable.
 */
void SystemInit(void)
{
        // Keep the default device state after reset
        SystemCoreClock = __SYSTEM_CLOCK;
        return;
}

/**
 * Update SystemCoreClock variable
 *
 * @brief  Updates the SystemCoreClock with current core Clock
 *         retrieved from cpu registers.
 */
void SystemCoreClockUpdate(void)
{
        // Not implemented
        SystemCoreClock = __SYSTEM_CLOCK;
        return;
}
