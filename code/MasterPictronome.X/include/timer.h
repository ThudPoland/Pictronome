/* 
 * File:   timer.h
 * Author: S?awomir
 *
 * Created on 23 lipca 2017, 12:58
 */

#ifndef TIMER_H
#define	TIMER_H

#include <stdbool.h>
#include "systicktimer.h"


typedef struct
{
    
    SysTick* systemClock;
    
    uint32_t registeredTime;
    uint32_t actualTime;
    uint32_t timeDelay;
    void* dataSource;
    
    bool (*invokeEvent)(void* dataSource);
} Timer;


void InitTimer(Timer* timer, SysTick* source, void* dataSource, uint32_t timeDelay, bool (*event)(void* dataSource));
void RefreshTimer(Timer* timer);
#endif	/* TIMER_H */

