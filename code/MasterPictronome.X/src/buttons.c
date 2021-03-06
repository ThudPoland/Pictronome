#include "../include/buttons.h"

void InitButtons()
{
    INTCONbits.IOCIE = 1;
    
    ANSELCbits.ANSC1 = 0;
    ANSELCbits.ANSC2 = 0;
    
    ANSELBbits.ANSB4 = 0;
    ANSELBbits.ANSB5 = 0;
    
    TRISCbits.TRISC1 = 1;
    TRISCbits.TRISC2 = 1;
    
    TRISBbits.TRISB4 = 1;
    TRISBbits.TRISB5 = 1;
    TRISBbits.TRISB6 = 1;
    
    IOCCNbits.IOCCN1 = 1;
    IOCCNbits.IOCCN2 = 1;
    
    IOCBNbits.IOCBN4 = 1;
    IOCBNbits.IOCBN5 = 1;
    IOCBNbits.IOCBN6 = 1;
}

void ButtonInterruptFunction(ButtonFlags* flags)
{
    if(IOCCFbits.IOCCF1 == 1)
    {
        flags->button5Flag = 1;
    }
    if(IOCCFbits.IOCCF2 == 1)
    {
        flags->button1Flag = 1;
    }
    
    if(IOCBFbits.IOCBF4 == 1)
    {
        flags->button2Flag = 1;
    }
    if(IOCBFbits.IOCBF5 == 1)
    {
        flags->button3Flag = 1;
    }
    if(IOCBFbits.IOCBF6 == 1)
    {
        flags->button4Flag = 1;
    }
    
    flags->interfaceNeedUpdate = 1;
    IOCCF = 0;
    IOCBF = 0;
}
