/* 
 * File:   init.h
 * Author: kozok
 *
 * Created on 25 marca 2017, 18:45
 */

#ifndef INIT_H
#define	INIT_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "data.h"

void EntriesInit(struct SystemUI* status);
void NavigateLeft(void* object, void* parameter);
void NavigateRight(void* object, void* parameter);

#define CONTENT_LENGTH 16
const char* toggleMetronomeOnText = "    Turn on     ";
const char* toggleMetronomeOffText = "    Turn off    ";
const char* metrumText = "     Metrum     ";
const char* tempoText = "     Tempo      ";
const char* brightnessText = "   Brightness   ";

#ifdef	__cplusplus
}
#endif

#endif	/* INIT_H */

