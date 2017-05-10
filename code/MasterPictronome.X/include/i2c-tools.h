/* 
 * File:   i2c-tools.h
 * Author: slawomir
 *
 * Created on 24 listopada 2016, 18:21
 */

#ifndef I2C_TOOLS_H
#define	I2C_TOOLS_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "definitions.h"
#include "i2c.h"
#include "data.h"

void InitI2CDisplay(struct I2CProcess *process);
void SendTextToFirstLine(char* text, int length, I2CProcess* process);
void SendData(char* text, int length, I2CProcess* process);
void ClearDisplay(struct I2CProcess* process);
void SetSecondLine(struct I2CProcess* process);

#ifdef	__cplusplus
}
#endif

#endif	/* I2C_TOOLS_H */

