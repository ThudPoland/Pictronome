#include "../include/i2c-tools.h"

void InitI2CDisplay(struct I2CProcess *process)
{
    uint8_t table[16] = {
    0,
    0x38,
    0,
    0x39,
    0,
    0x14,
    0,
    0x79,
    0,
    0x50,
    0,
    0x6C,
    0,
    0x0C,
    0,
    0x01,
};
    __delay_ms(200);
    
    //SendI2CData(&(LocalInterruptsStatus.communicationProcess), table, 16, 0b00111110<<1, IgnoreErrors);
    for(unsigned int Counter = 0; Counter < 8; Counter++)
    {
        SendI2CData(process, &table[Counter*2], 2, 0b00111110<<1, IgnoreErrors);
        __delay_ms(100);
    }
    
    __delay_ms(200);
}
