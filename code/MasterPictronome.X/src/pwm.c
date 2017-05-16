#include "../include/pwm.h"

void InitPWMController()
{
    TRISCbits.TRISC5 = 1;
    
    PWM3CON = 0;
    
    PR2 = 99;
    
    PIR1bits.TMR2IF = 0;
    T2CONbits.T2CKPS = PWM_PRESCALER4;
    T2CONbits.T2OUTPS = PWM_PRESCALER1;
    T2CONbits.TMR2ON = 1;
    
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS

    RC5PPSbits.RC5PPS = PWM3_PPS;
    
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS

    TRISCbits.TRISC5 = 0;

    PWM3CONbits.PWM3EN = 1;
}

void SetPWMValue(uint8_t duty)
{
    if(duty > 100) duty = 100;
    PWM3DCLbits.PWM3DCL = duty & 0b00000011;
    PWM3DCHbits.PWM3DCH = (duty & 0b11111100) >> 2;
}