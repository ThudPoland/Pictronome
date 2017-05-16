#include "../include/pwm.h"

void InitPWMController()
{
    T2CONbits.T2CKPS = PWM_PRESCALER4;
    T2CONbits.T2OUTPS = PWM_PRESCALER1;
    T2CONbits.TMR2ON = 1;
    
    PIE2bits.TMR4IE = 1;
    
    //Set maximum period for maximum resolution
    PR2 = 99;
    CCP1CONbits.CCP1M = PWM_MODE; //PWM mode
}