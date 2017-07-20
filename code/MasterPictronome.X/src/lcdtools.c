#include "../include/lcdtools.h"

void NumberToString(uint16_t number, uint8_t offset, uint8_t overallLength, char *buffer)
{
    char temporaryBuffer[5] = { 0, 0, 0, 0, 0};
    uint16_t temporaryNumber = number;
    
    for(uint8_t counter = 0; counter < overallLength; counter++ )
    {
        buffer[counter] = ' ';
    }
    
    for(uint8_t counter = 0;; counter++ )
    {
        uint16_t value = temporaryNumber / 10;
        uint16_t rest = temporaryNumber % 10;
        
        temporaryBuffer[4 - counter] = '0' + rest;
        if(value == 0)
        {
            for(uint8_t internalCounter = 0; internalCounter < 5; internalCounter++)
            {
                buffer[internalCounter + offset] = temporaryBuffer[internalCounter];
            }
            break;
        }
        temporaryNumber = value;
    }
}