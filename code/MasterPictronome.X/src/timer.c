
#include "../include/timer.h"

void InitTimer(Timer* timer, SysTick* source, void* dataSource, uint32_t timeDelay, bool (*event)(void* dataSource))
{
    timer->timeDelay = timeDelay;
    timer->systemClock = source;
    timer->dataSource = dataSource;
    timer->registeredTime = 0;
    timer->invokeEvent = event;
}

void RefreshTimer(Timer* timer)
{
    if(timer->registeredTime + timer->timeDelay <= timer->systemClock->milliseconds)
    {
        timer->registeredTime = timer->systemClock->milliseconds;
        
        if(timer->invokeEvent != NULL)
        {
            timer->invokeEvent(timer->dataSource);
        }
    }
}