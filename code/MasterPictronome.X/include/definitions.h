/* 
 * File:   definitions.h
 * Author: slawomir
 *
 * Created on 18 pa?dziernika 2016, 21:22
 */

#ifndef DEFINITIONS_H
#define	DEFINITIONS_H

#include <stdint.h>

struct I2CProcess;

#ifdef	__cplusplus
extern "C" {
#endif

#define I2CMasterMode 0b1000;
    
#define Enable 1
#define Disable 0

#define True 1
#define False 0
    
#define GENFREQ 8000000
#define MCUFREQ 4 * GENFREQ
#define _XTAL_FREQ 32000000

volatile int i2ccounter = 0;
    
#ifdef	__cplusplus
}
#endif

#endif	/* DEFINITIONS_H */

