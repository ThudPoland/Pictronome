/* 
 * File:   utils.h
 * Author: kozok
 *
 * Created on 11 maja 2017, 18:44
 */

#ifndef UTILS_H
#define	UTILS_H

#include "data.h"
#include "bar.h"
#include "lcdtools.h"
#include <stdint.h>

#ifdef	__cplusplus
extern "C" {
#endif


void ToggleBuzzer(void** object);

void DecreaseDisplayBrightness(void** object);
void IncreaseDisplayBrightness(void** object);

void DecreaseTempo(void** object);
void IncreaseTempo(void** object);

#ifdef	__cplusplus
}
#endif

#endif	/* UTILS_H */

