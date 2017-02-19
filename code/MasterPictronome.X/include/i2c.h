/* 
 * File:   i2c.h
 * Author: slawomir
 *
 * Created on 10 pa?dziernika 2016, 20:35
 */

#ifndef I2C_H
#define	I2C_H

#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>
#include <xc.h>
#include "definitions.h"
#include <pic16f1709.h>
#include "systicktimer.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
enum I2CBehaviour
{
    IgnoreErrors,
    CheckErrors
};

enum I2CError
{
    NoError,
    BufferError,
    NoAcknowledgeError
};

typedef struct 
{
    //Behaviour data
    enum I2CBehaviour behaviour;
    enum I2CError error;
    
    //Status data
    bool isReadyForNextStep;
    
    bool hasProcessStarted;
    bool isAddressSent;
    bool isBusy;
    bool hasStarted;
    uint8_t tableCounter;
    uint8_t length;
    
    //ProcessedData
    uint8_t address;
    uint8_t *dataPointer;
    
    //Error info
    uint8_t errorCounter;
} I2CProcess;
    
void InitI2CIO();

void CreateI2C(I2CProcess* process);

bool SendI2CData(I2CProcess* process, uint8_t *data, uint8_t dataLength, uint8_t address, enum I2CBehaviour behaviour);

//Not for use!

bool I2CProcessData(I2CProcess* process);

//void I2CStartCondition();

#ifdef	__cplusplus
}
#endif

#endif	/* I2C_H */

