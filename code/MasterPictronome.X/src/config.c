/*
 * File:   config.c
 * Author: slawomir
 *
 * Created on 10 pa?dziernika 2016, 20:43
 */


#include "../include/config.h"

void InitInterrupts()
{
    //Enable global interrupts
    INTCONbits.GIE = 1;
    //Enable peripheral interrupts
    INTCONbits.PEIE = 1;
}