#include "../include/interrupts.h"

    void interrupt ISRInterruptController()
    {
        if(IOCCF > 0)
        {
            LocalInterruptsStatus.isKeyboardInterrupt = True;
        }
        else if(IOCBF > 0)
        {
            LocalInterruptsStatus.isKeyboardInterrupt = True;
        }
        
        if(PIR2bits.TMR4IF == true)
        {
            LocalInterruptsStatus.isSoftwarePWMInterrupt = true;
        }
        
        if(PIR2bits.TMR6IF == true)
        {
            LocalInterruptsStatus.isSysTickReady = true;
        }
        
        if(PIR1bits.SSP1IF == True && SSP1STATbits.BF == False)
        {
            LocalInterruptsStatus.communicationProcess.isReadyForNextStep = true;
        }
        
        MainInterruptController(&LocalInterruptsStatus);
        
        if(PIR1bits.SSP1IF == True && SSP1STATbits.BF == False)
        {
            PIR1bits.SSP1IF = false;
        }
        
        if(IOCCF > 0)
        {
            IOCCF = 0;
        }
        else if(IOCBF > 0)
        {
            IOCBF = 0;
        }
        
        if(PIR2bits.TMR4IF == true)
        {
            PIR2bits.TMR4IF = false;
        }
        
        if(PIR2bits.TMR6IF == true)
        {
            PIR2bits.TMR6IF = false;
        }
    }
    
    void MainInterruptController(struct SystemStatus* status)
    {
        bool isI2CReady = status->communicationProcess.isReadyForNextStep;
        
        if(isI2CReady)
        {
            I2CProcessData(&(status->communicationProcess));
        }
        
        if(status->isSysTickReady)
        {
            IncreaseSysTick(&status->timer);
            ControlBuzzer(&status->buzzerData);
            status->isSysTickReady = false;
        }
        
        if(status->isKeyboardInterrupt == true)
        {
            ButtonInterruptFunction(&status->flags);
            status->isKeyboardInterrupt = false;
        }
        
        if(status->isSoftwarePWMInterrupt == true)
        {
            PWMController(&status->settings);
            status->isSoftwarePWMInterrupt = false;
        }
    }