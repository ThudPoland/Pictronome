/* 
 * File:   buzzer.h
 * Author: kozok
 *
 * Created on 22 lutego 2017, 22:50
 */

#ifndef BUZZER_H
#define	BUZZER_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include <pic16f1709.h>
#include <stdint.h>
#include <stdbool.h>

#define BUZZER_PRESCALER1 0x00
#define BUZZER_POSTSCALER1 0x00
#define BUZZER_PRESCALER64 0x11
#define BUZZER_PRESCALER4 0x01

struct BuzzerAlgorithmData
{
    uint8_t timeAccent; 
    uint8_t timeNormal;
    uint8_t timeCounter;
    
    uint16_t soundTime; //Time of playing wave
    uint16_t ticksDelay; //Delay between end and beggining of new wave generation
    uint8_t metrumTicksNumber; //Number of ticks (metrum)
    uint8_t actualMetrumTick; //Actual sound tick
    
    uint16_t ticksCounter;
    uint8_t actualTicksCounter;
    
    bool controlGPIO;
    uint8_t pinMask;
    
    uint8_t *pointerToGPIO;
};

void InitBuzzerHardware();
void InitBuzzerPinout(struct BuzzerAlgorithmData *data, void *pin, uint8_t pinMask);
void InitBuzzerData(struct BuzzerAlgorithmData *data);

void ControlBuzzer(struct BuzzerAlgorithmData* data);

#ifdef	__cplusplus
}
#endif

#endif	/* BUZZER_H */

