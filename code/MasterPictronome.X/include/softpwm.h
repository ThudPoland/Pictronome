/* 
 * File:   softpwm.h
 * Author: slawomir
 *
 * Created on 24 stycznia 2017, 20:41
 */

#ifndef SOFTPWM_H
#define	SOFTPWM_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <xc.h>
#include <pic16f1709.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define PWM_PRESCALER1 0x00
#define PWM_POSTSCALER1 0x00
#define PWM_PRESCALER64 0x11
#define PWM_PRESCALER4 0x01
    
typedef struct
{
    uint16_t Period;
    uint16_t ActualTicks;
    uint16_t TriggerTick;
} SoftPWMSettings;
    
    void InitSoftPWM();
    void InitSoftPWMConfiguration(SoftPWMSettings* settings, uint16_t period, uint16_t tickTrigger);
    void PWMController(SoftPWMSettings* settings);


#ifdef	__cplusplus
}
#endif

#endif	/* SOFTPWM_H */

