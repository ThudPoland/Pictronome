/* 
 * File:   data.h
 * Author: slawomir
 *
 * Created on 25 pa?dziernika 2016, 15:35
 */

#ifndef DATA_H
#define	DATA_H

#include "stdint.h"
#include "i2c.h"
#include "softpwm.h"
#include "systicktimer.h"
#include "buzzer.h"
#include "menuentry.h"
#include "buttons.h"
#include "buttonstruct.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
struct SystemStatus
{
    uint8_t isSoftwarePWMInterrupt;
    uint8_t isKeyboardInterrupt;
    uint8_t isI2CReadyForWork;
    uint8_t isSysTickReady;
    uint8_t isBuzzerReady;
    BuzzerAlgorithmData buzzerData;
    SoftPWMSettings settings;
    I2CProcess communicationProcess;
    SysTick timer;
    ButtonFlags flags;
};

struct SystemUI
{
    uint8_t numberOfEntries;
    struct MenuEntry entries[20];
};

struct SystemStatus LocalInterruptsStatus;
struct SystemUI LocalSystemStatus;

#ifdef	__cplusplus
}
#endif

#endif	/* DATA_H */

