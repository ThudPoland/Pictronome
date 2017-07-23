/* 
 * File:   interrupts.h
 * Author: slawomir
 *
 * Created on 10 pa?dziernika 2016, 20:45
 */

#ifndef INTERRUPTS_H
#define	INTERRUPTS_H

#include <pic16f1709.h>
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <xc.h>
#include "definitions.h"
#include "data.h"
#include "buttons.h"
#include "buzzer.h"
#include "timer.h"

#include "i2c.h"

#include "softpwm.h"

#include "systicktimer.h"

#ifdef	__cplusplus
extern "C" {
#endif

void interrupt ISRInterruptController();
void MainInterruptController(struct SystemStatus* status);
//Interrupt register:
//bit 0 -> I2CProcessing
//bit 1 ->
//volatile uint8_t interruptRegister;



#ifdef	__cplusplus
}
#endif

#endif	/* INTERRUPTS_H */

