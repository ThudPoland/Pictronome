#include "../include/i2c-tools.h"

void InitI2CDisplay(struct I2CProcess *process)
{
    const uint8_t table[16] = {
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
        //SendI2CData(process, &table[Counter*2], 2, 0b00111110<<1, IgnoreErrors);
        SendData(&table[Counter*2], 2, process);
        __delay_ms(100);
    }
    
    __delay_ms(200);
}

void SendData(char* text, int length, I2CProcess* process)
{   
    if(length > 20) return;
    
    for(int x = 0; x < length; x++)
    {
        process->buffer[x] = text[x];
    }
    
    SendI2CData(process, process->buffer, length, 0b00111110<<1, IgnoreErrors);
}

void SendTextToFirstLine(char* text, int length, I2CProcess* process)
{
    process->buffer[0] = '@';
    
    if(length > 20) return;
    
    for(int x = 0; x < length; x++)
    {
        process->buffer[x + 1] = text[x];
    }
    
    SendI2CData(process, process->buffer, length+1, 0b00111110<<1, IgnoreErrors);
}

void ClearDisplay(struct I2CProcess* process)
{
    const uint8_t clearTable[2] = {
        0,
        0x01,
    };
    
    _delay(27);
    SendData(clearTable, 2, process);
    _delay(27);
}

void SetSecondLine(struct I2CProcess* process)
{
    const uint8_t secondLineTable[2] = {
        0,
        0xC0,
    };
    
    _delay(100);
    SendData(secondLineTable, 2, process);
    _delay(100);
}