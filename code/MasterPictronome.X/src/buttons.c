#include "../include/buttons.h"

void Action1()
{
    SendI2CData(&(LocalInterruptsStatus.communicationProcess), "@a", 2, 0b00111110<<1, IgnoreErrors);
}

void Action2()
{
    //SendI2CData(&(LocalInterruptsStatus.communicationProcess), "@b", 2, 0b00111110<<1, IgnoreErrors);
    
    LocalInterruptsStatus.settings.TriggerTick += 10;
    
    if(LocalInterruptsStatus.settings.TriggerTick >= LocalInterruptsStatus.settings.Period) LocalInterruptsStatus.settings.TriggerTick = LocalInterruptsStatus.settings.Period;
}

void Action3()
{
    SendI2CData(&(LocalInterruptsStatus.communicationProcess), "@c", 2, 0b00111110<<1, IgnoreErrors);
}

void Action4()
{
    SendI2CData(&(LocalInterruptsStatus.communicationProcess), "@d", 2, 0b00111110<<1, IgnoreErrors);
}

void Action5()
{
    LocalInterruptsStatus.settings.TriggerTick -= 10;
    if(LocalInterruptsStatus.settings.TriggerTick >= LocalInterruptsStatus.settings.Period) LocalInterruptsStatus.settings.TriggerTick = 0;
    //SendI2CData(&(LocalInterruptsStatus.communicationProcess), "@e", 2, 0b00111110<<1, IgnoreErrors);
}

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

void ButtonInterruptFunction()
{
    if(IOCCFbits.IOCCF1 == 1)
    {
        Action1();
    }
    if(IOCCFbits.IOCCF2 == 1)
    {
        Action2();
    }
    
    if(IOCBFbits.IOCBF4 == 1)
    {
        Action3();
    }
    if(IOCBFbits.IOCBF5 == 1)
    {
        Action4();
    }
    if(IOCBFbits.IOCBF6 == 1)
    {
        Action5();
    }
    
    IOCCF = 0;
    IOCBF = 0;
}
