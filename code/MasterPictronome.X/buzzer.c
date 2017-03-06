#include "buzzer.h"

void InitBuzzerHardware()
{
    ANSELCbits.ANSC7 = 0;
    TRISCbits.TRISC7 = 0;
    LATCbits.LATC7 = 0;
    
    ANSELCbits.ANSC6 = 0;
    TRISCbits.TRISC6 = 0;
    LATCbits.LATC6 = 0;
    
    T6CONbits.T6CKPS = BUZZER_PRESCALER4;
    T6CONbits.T6OUTPS = BUZZER_PRESCALER1;
    T6CONbits.TMR6ON = 1;
    
    PIE2bits.TMR6IE = 1;
}