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

#define TIM0_FOSC 0
#define PRESCALER8 0b010
#define PRESCALER256 0b111
#define PRESCALER64 0b101
    
    
void InitSysTickTimer0();
void EnableSysTickInterrupt();
void DisableSysTickInterrupt();
void ClearSysTickInterruptFlag();
bool GetSysTickInterruptFlag();

typedef struct
{
    uint16_t milliseconds;
    uint8_t ticks;
    
    uint8_t ticksPerMillisecond;
    
    bool enabled;
} SysTick;

SysTick programClock;

#ifdef	__cplusplus
}
#endif

#endif	/* SYSTICKTIMER_H */

