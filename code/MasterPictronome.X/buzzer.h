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

#define BUZZER_PRESCALER1 0x00
#define BUZZER_POSTSCALER1 0x00
#define BUZZER_PRESCALER64 0x11
#define BUZZER_PRESCALER4 0x01
    
void InitBuzzerHardware();

struct BuzzerAlgorithmData
{
    uint8_t ticksAccent;
    uint8_t ticksNormal;
    uint16_t ticksTime;
    uint16_t ticksDelay;
};

#ifdef	__cplusplus
}
#endif

#endif	/* BUZZER_H */

