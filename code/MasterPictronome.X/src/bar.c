/*
 * File:   bar.c
 * Author: slawomir
 *
 * Created on July 20, 2017, 7:57 PM
 */


#include "../include/bar.h"

void InitBar(char* bar)
{
    for(int counter = 0; counter < 16; counter++)
    {
        bar[counter] = barBase[counter];
    }
}
