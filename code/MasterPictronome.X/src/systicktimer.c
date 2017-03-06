#include "../include/systicktimer.h"
void InitSysTickHardware()
{
    T6CONbits.T6CKPS = SYSTICK_PRESCALER4;
    T6CONbits.T6OUTPS = SYSTICK_POSTSCALER16;
    T6CONbits.TMR6ON = 1;
    PR6 = 124;
    
    PIE2bits.TMR6IE = 1;
}

uint32_t GetTime(SysTick* timer)
{
    if(timer != NULL)
    {
        return timer->milliseconds;
    }
    else return 0;
}

uint32_t GetTimeFromLastAction(SysTick* timer, uint32_t lastTime)
{
    if(timer != NULL)
    {
        if(timer->isOverflow)
        {
            return timer->lastOverflowValue - lastTime + timer->milliseconds;
        }
        else
        {
            return timer->milliseconds - lastTime;
        }
    }
    else return 0;
}

void IncreaseSysTick(SysTick* timer)
{
    if(timer != NULL && timer->enabled == true)
    {
        if(timer->milliseconds == 4294967295)
        {
            timer->isOverflow = true;
            timer->lastOverflowValue = timer->milliseconds;
            timer->milliseconds = 0;
        }
        
        else timer->milliseconds++;
    }
}

void OverflowSysTick(SysTick* timer)
{
    if(timer != NULL && timer->enabled == true)
    {
        timer->isOverflow = true;
        timer->lastOverflowValue = timer->milliseconds;
        timer->milliseconds = 0;
    }
}
void Wait(SysTick* timer, uint32_t waitTime)
{
    uint32_t actualTime = GetTime(timer);
    while(waitTime > GetTimeFromLastAction(timer, actualTime));
}