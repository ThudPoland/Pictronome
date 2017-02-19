#include "../include/systicktimer.h"

void InitSysTickTimer0()
{
    OPTION_REGbits.PS = PRESCALER8; //Choose prescaler to get 1MHz
    OPTION_REGbits.PSA = 0; // Enable prescaler
    OPTION_REGbits.TMR0CS = TIM0_FOSC; //Internal clock as source
}

void EnableSysTickInterrupt()
{
    INTCONbits.TMR0IE = Enable; //Enable timer interrupt
}

void DisableSysTickInterrupt()
{
    INTCONbits.TMR0IE = Disable; //Enable timer interrupt
}

void ClearSysTickInterruptFlag()
{
    INTCONbits.TMR0IF = False;
}

bool GetSysTickInterruptFlag()
{
    return INTCONbits.TMR0IF == 1 ? true : false;
}