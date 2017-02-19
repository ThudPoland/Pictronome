#include "../include/pwm.h"

void InitPWMController()
{
    //Set PWM output bits to input.
    ANSELCbits.ANSC6 = 0;
    ANSELCbits.ANSC7 = 0;
    TRISCbits.TRISC6 = 1;
    TRISCbits.TRISC7 = 1;
    
    //Clear actual config
    PWM3CON = 0;
    PWM4CON = 0;
    
    //Set maximum period for maximum resolution
    PR2 = 255;
    
}