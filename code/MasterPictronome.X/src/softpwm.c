
#include "../include/softpwm.h"

void InitSoftPWMHardware()
{
    //Init GPIO for software PWM
    TRISCbits.TRISC5 = 0;
    LATCbits.LATC5 = 0;
    
    //Init Timer for software PWM
    T4CONbits.T4CKPS = PRESCALER4;
    T4CONbits.T4OUTPS = PRESCALER1;
    T4CONbits.TMR4ON = 1;
    
    PIE2bits.TMR4IE = 1;
}

void InitSoftPWMConfiguration(SoftPWMSettings* settings, uint16_t period, uint16_t tickTrigger)
{
    settings->ActualTicks = 0;
    settings->Period = period;
    settings->TriggerTick = tickTrigger;
}

void PWMController(SoftPWMSettings* settings)
{
    settings->ActualTicks++;
    
    if(settings->ActualTicks >= settings->TriggerTick)
    {
        LATCbits.LATC5 = 1;
    }
    
    if(settings->ActualTicks >= settings->Period)
    {
        LATCbits.LATC5 = 0;
        settings->ActualTicks = 0;
    }
}