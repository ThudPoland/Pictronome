/* 
 * File:   data.h
 * Author: slawomir
 *
 * Created on 25 pa?dziernika 2016, 15:35
 */

#ifndef DATA_H
#define	DATA_H

#include "i2c.h"
#include "softpwm.h"
#include "systicktimer.h"

#ifdef	__cplusplus
extern "C" {
#endif

struct InterruptsStatus
{
    uint8_t isSoftwarePWMInterrupt;
    uint8_t isKeyboardInterrupt;
    uint8_t isI2CReadyForWork;
    uint8_t isSysTickReady;
    uint8_t isBuzzerReady;
    SoftPWMSettings settings;
    I2CProcess communicationProcess;
    SysTick timer;
};

struct InterruptsStatus LocalInterruptsStatus;

#ifdef	__cplusplus
}
#endif

#endif	/* DATA_H */

