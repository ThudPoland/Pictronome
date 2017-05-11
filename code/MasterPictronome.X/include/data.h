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
    uint8_t isSoftwarePWMInterrupt : 1;
    uint8_t isKeyboardInterrupt : 1;
    uint8_t isI2CReadyForWork : 1;
    uint8_t isSysTickReady : 1;
    uint8_t isBuzzerReady : 1;
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

struct DataSource
{
    BuzzerAlgorithmData *buzzer;
};

struct SystemStatus LocalInterruptsStatus;
struct SystemUI SystemUIStatus;
struct DataSource LocalDataSource;

const char* toggleMetronomeOnText = "    Turn on     ";
const char* toggleMetronomeOffText = "    Turn off    ";
const char* metrumText = "     Metrum     ";
const char* tempoText = "     Tempo      ";
const char* brightnessText = "   Brightness   ";

void InitDataSource(struct DataSource** localDataSource, struct SystemStatus *localInterruptStatus);

#ifdef	__cplusplus
}
#endif

#endif	/* DATA_H */

