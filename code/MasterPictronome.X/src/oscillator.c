#include "../include/oscillator.h"

void InitOscillator()
{
    //Setting external clock source as default source.
    OSCCONbits.SCS = 0;
    
    //Enabling PLL
    OSCCONbits.SPLLEN = Enable;
    
    //Waiting for PLL stabilisation
    while(OSCSTATbits.PLLR != True);
}