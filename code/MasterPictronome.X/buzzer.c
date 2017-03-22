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

void InitBuzzerPinout(struct BuzzerAlgorithmData *data, void *pin, uint8_t pinMask)
{
    data->pointerToGPIO = pin;
    data->pinMask = pinMask;
}

void InitBuzzerData(struct BuzzerAlgorithmData *data)
{
    data->timeAccent = 3;
    data->timeNormal = 5;

    data->soundTime = 25;
    data->ticksDelay = 50;
    data->metrumTicksNumber = 2;
    data->pinMask = 0;
    data->controlGPIO = false;

    data->actualMetrumTick = 0;
    data->actualTicksCounter = 0;
    data->ticksCounter = 0;

    data->timeCounter = 0;
}

void ControlBuzzer(struct BuzzerAlgorithmData* data)
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

}