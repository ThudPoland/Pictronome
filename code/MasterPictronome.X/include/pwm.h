/* 
 * File:   pwm.h
 * Author: slawomir
 *
 * Created on 24 stycznia 2017, 20:25
 */

#ifndef PWM_H
#define	PWM_H

#include <pic16f1709.h>

#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif

#define PWM_MODE 0b00001111
#define PWM_PRESCALER1 0x00
#define PWM_POSTSCALER1 0x00
#define PWM_PRESCALER64 0x11
#define PWM_PRESCALER4 0x01
#define PWM3_PPS 0b01110
    
void InitPWMController();
void SetPWMValue(uint8_t duty);


#ifdef	__cplusplus
}
#endif

#endif	/* PWM_H */

