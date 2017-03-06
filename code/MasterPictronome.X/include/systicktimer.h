/* 
 * File:   systicktimer.h
 * Author: slawomir
 *
 * Created on 17 stycznia 2017, 21:35
 */

#ifndef SYSTICKTIMER_H
#define	SYSTICKTIMER_H

#include <pic16f1709.h>
#include "definitions.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <xc.h>

#define SYSTICK_PRESCALER1 0x00
#define SYSTICK_POSTSCALER1 0x00
#define SYSTICK_PRESCALER64 0x11
#define SYSTICK_PRESCALER4 0x01
#define SYSTICK_POSTSCALER16 0x0F

typedef struct
{
    uint32_t milliseconds;
    
    uint32_t lastOverflowValue;
    
    bool isOverflow;
    bool enabled;
} SysTick;

void InitSysTickHardware();
void InitSysTickObject(SysTick* timer);
uint32_t GetTime(SysTick* timer);
uint32_t GetTimeFromLastAction(SysTick* timer, uint32_t lastTime);
void IncreaseSysTick(SysTick* timer);
void OverflowSysTick(SysTick* timer);
void Wait(SysTick* timer, uint32_t waitTime);

#ifdef	__cplusplus
}
#endif

#endif	/* SYSTICKTIMER_H */

