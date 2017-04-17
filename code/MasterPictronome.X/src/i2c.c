#include "../include/i2c.h"

#define I2CSDAPPS 0b00010001
#define I2CSCLPPS 0b00010000
#define RC4SDAPPS 0b00010100
#define RC3SCLPPS 0b00010011

void InitI2CIO()
{
    
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x00; // unlock PPS
        //Disable analog functions on I2C pin
    ANSELCbits.ANSC3 = 0;
    ANSELCbits.ANSC0 = 0;
    
    RC4PPSbits.RC4PPS = I2CSDAPPS;
    RC3PPSbits.RC3PPS = I2CSCLPPS;
    
    SSPDATPPSbits.SSPDATPPS = RC4SDAPPS;
    SSPCLKPPSbits.SSPCLKPPS = RC3SCLPPS;
    
    TRISCbits.TRISC3 = 1;
    TRISCbits.TRISC4 = 1;
    TRISCbits.TRISC0 = 0;
    
    LATCbits.LATC0 = 1;
    
    PPSLOCK = 0x55;
    PPSLOCK = 0xAA;
    PPSLOCKbits.PPSLOCKED = 0x01; // lock PPS
}

void CreateI2C(I2CProcess* process)
{
    //Init of I2CProcess object
    process->isBusy = false;
    process->tableCounter = 0;
    
    //Enabling MSSP operation
    SSP1CONbits.SSPM = I2CMasterMode;
    
    //Interrupts
    
    
    //Calculations:
    //SSPADD = 19
    
    SSPADDbits.ADD = 0xFF;
    
    SSP1CONbits.SSPEN = Enable;
    SSP1CONbits.CKP = Enable;
    
    SSP1CON3bits.SCIE = Enable;
    SSP1CON3bits.PCIE = Enable;
    
    SSP1CON3bits.SDAHT = Enable;
}

bool SendI2CData(I2CProcess* process, uint8_t *data, uint8_t dataLength, uint8_t address, enum I2CBehaviour behaviour)
{
    if(process->isBusy)     //Disable analog functions on I2C pin
    ANSELCbits.ANSC3 = 0;
    
    process->isReadyForNextStep = false;
    process->hasProcessStarted = false;
    process->isAddressSent = false;
    process->isBusy = true;
    process->tableCounter = 0;
    process->address = address;
    process->length = dataLength;
    process->error = NoError;
    process->behaviour = behaviour;
    process->errorCounter+ = 0;
    
    //Enable I2C interupt
    PIE1bits.SSP1IE = Enable;
    
    I2CProcessData(process);
}

bool I2CStartCondition(I2CProcess* process)
{
    //StartSysTick(&programClock);
    
    //Start condition
    SSP1CON2bits.SEN = 1;
    
    return true;
}

bool I2CStopCondition(I2CProcess* process)
{
    //Stop condition
    SSP1CON2bits.PEN = 1;
    
    process->isBusy = false;
    process->tableCounter = 0;
    
    return true;
}

void I2CSendAddress(I2CProcess* process)
{
    SSP1BUFbits.BUF = process->address;
}

void I2CSendNextByte(I2CProcess* process)
{
    
    uint8_t* pointer = (*process).buffer;
    
    SSP1BUFbits.BUF = pointer[process->tableCounter];
    
    process->tableCounter++;
}

bool I2CProcessData(I2CProcess* process)
{    
    process->isReadyForNextStep = false;

	while ((SSPCON2 & 0x1F ) || ( SSPSTAT & 0x04 ) );
    while (SSP1STATbits.BF == 1);
    
    if(process->hasProcessStarted == False)
    {
        I2CStartCondition(process);

        process->hasProcessStarted = True;

        return true;
    }

    if(process->isAddressSent == False)
    {
        I2CSendAddress(process);

        process->isAddressSent = True;

        return true;
    }
    
    if(SSP1CON2bits.ACKSTAT == 1 && process->behaviour == CheckErrors)
    {
        process->error = NoAcknowledgeError;
        process->isBusy = false;

        return false;
    }
    
    if(SSP1CON2bits.ACKSTAT == 1)
    {
        process->errorCounter++;
        //process->tableCounter--;
    }

    if(process->tableCounter < process->length)
    {
        I2CSendNextByte(process);

        return true;
    }

    else
    {
        I2CStopCondition(process);
        
        PIE1bits.SSP1IE = Disable;
    }
}
