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
    
#define BAR_BASE "  X          X  "
#define PROGRESS_OFFSET 3
    
struct SystemStatus
{
    uint8_t isSoftwarePWMInterrupt : 1;
    uint8_t isKeyboardInterrupt : 1;
    uint8_t isI2CReadyForWork : 1;
    uint8_t isSysTickReady : 1;
    uint8_t isBuzzerReady : 1;
    BuzzerAlgorithmData buzzerData;
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
    uint8_t brightness;
    char* bar;
};

struct SystemStatus LocalInterruptsStatus;
struct SystemUI SystemUIStatus;
struct DataSource LocalDataSource;

const char* toggleMetronomeOnText = "    Turned on   ";
const char* toggleMetronomeOffText = "   Turned off   ";
const char* metrumText = "     Metrum     ";
const char* tempoText = "     Tempo      ";
const char* brightnessText = "   Brightness   ";
const char* brightnessSetText = "   Brightness:  ";
const char* barBase = BAR_BASE;

void InitDataSource(struct DataSource* localDataSource, struct SystemStatus *localInterruptStatus);

#ifdef	__cplusplus
}
#endif

#endif	/* DATA_H */

