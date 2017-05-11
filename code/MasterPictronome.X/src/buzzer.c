#include "../include/buzzer.h"

void InitBuzzerHardware()
{
    ANSELCbits.ANSC7 = 0;
    TRISCbits.TRISC7 = 0;
    LATCbits.LATC7 = 0;
    
    ANSELCbits.ANSC6 = 0;
    TRISCbits.TRISC6 = 0;
    LATCbits.LATC6 = 0;
    
    ANSELAbits.ANSA2 = 0;
    TRISAbits.TRISA2 = 0;
    LATAbits.LATA2 = 1;
    
    //T6CONbits.T6CKPS = BUZZER_PRESCALER4;
    //T6CONbits.T6OUTPS = BUZZER_PRESCALER1;
    //T6CONbits.TMR6ON = 1;
    
    //PIE2bits.TMR6IE = 1;
}

void InitBuzzerPinout(BuzzerAlgorithmData *data, void *pin, uint8_t pinMask)
{
    data->pointerToGPIO = pin;
    data->pinMask = pinMask;
}

void InitBuzzerData(BuzzerAlgorithmData *data)
{
    data->timeAccent = 5;
    data->timeNormal = 10;

    data->soundTime = 400;
    data->ticksDelay = 1000;
    data->metrumTicksNumber = 4;
    data->pinMask = 0;
    data->controlGPIO = false;

    data->actualMetrumTick = 0;
    data->actualTicksCounter = 0;
    data->ticksCounter = 0;

    data->timeCounter = 0;
}

void ControlBuzzer(BuzzerAlgorithmData* data)
{
    if(data->isEnabled)
    {
        if(++(data->ticksCounter) == data->ticksDelay && data->controlGPIO == false)
        {
            data->controlGPIO = true;
            *data->pointerToGPIO |= 0x00 + (0x01 << data->pinMask);
        }
        else if(data->controlGPIO == true && data->ticksCounter >= data->ticksDelay + data->soundTime)
        {
            data->timeCounter = 0;
            data->controlGPIO = false;
            data->ticksCounter = 0;

            *data->pointerToGPIO &= (0xFF - ((0x01) << data->pinMask));

            if(++(data->actualMetrumTick) > data->metrumTicksNumber)
            {
                data->actualMetrumTick = 0;
            }
        }
        else if(data->controlGPIO && data->ticksCounter < data->ticksDelay + data->soundTime)
        {
            uint8_t timeValueForActualTick = 0;

            if(data->actualMetrumTick == data->metrumTicksNumber) timeValueForActualTick = data->timeAccent;
            else timeValueForActualTick = data->timeNormal;

            if(++(data->timeCounter) >= timeValueForActualTick)
            {
                *(data->pointerToGPIO) ^= 1 << data->pinMask;
                data->timeCounter = 0;
            }
        }
        else
        {
            *data->pointerToGPIO = 0;
        }
    }
}