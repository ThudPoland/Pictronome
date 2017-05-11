/*
 * File:   main.c
 * Author: slawomir
 *
 * Created on 6 pa?dziernika 2016, 21:21
 */


// PIC16F1709 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
#pragma config FOSC = ECH       // Oscillator Selection Bits (ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)
#pragma config IESO = ON        // Internal/External Switchover Mode (Internal/External Switchover Mode is enabled)
#pragma config FCMEN = ON       // Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config PPS1WAY = ON     // Peripheral Pin Select one-way control (The PPSLOCK bit cannot be cleared once it is set by software)
#pragma config ZCDDIS = ON      // Zero-cross detect disable (Zero-cross detect circuit is disabled at POR)
#pragma config PLLEN = OFF      // Phase Lock Loop enable (4x PLL is enabled when software sets the SPLLEN bit)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

#define mainLoop() while(1)

#include "../include/definitions.h"

#include <xc.h>
#include <pic16f1709.h>
#include <stdint.h>

#include "../include/oscillator.h"
#include "../include/data.h"
#include "../include/i2c-tools.h"
#include "../include/systicktimer.h"
#include "../include/buttons.h"
#include "../include/softpwm.h"
#include "../include/systicktimer.h"
#include "../include/buzzer.h"
#include "../include/menuentry.h"
#include "../include/init.h"
#include "../include/navigation.h"

void main(void) {
    
    EntriesInit(&(SystemUIStatus), &LocalDataSource);
    struct MenuEntry *actualEntry;
    actualEntry = &(SystemUIStatus.entries[0]);
    
    InitOscillator();
    
    InitI2CIO();
    
    __delay_ms(1000);
    
    TRISCbits.TRISC5 = 0;
    
    LATCbits.LATC5 = 1;
    
    CreateI2C(&(LocalInterruptsStatus.communicationProcess));
    
    //InitSysTickTimer0();
    
    InitInterrupts();
    
    //EnableSysTickInterrupt();
   
    InitI2CDisplay(&(LocalInterruptsStatus.communicationProcess));
    
    
    //SendI2CData(&(LocalInterruptsStatus.communicationProcess), napis, 17, 0b00111110<<1, IgnoreErrors);
    
    InitButtons();
   
    
    __delay_ms(400);
    
    InitSysTickHardware();
    
    InitBuzzerHardware();
    InitBuzzerData(&(LocalInterruptsStatus.buzzerData));
    InitBuzzerPinout(&(LocalInterruptsStatus.buzzerData), &LATC, 7);
    
    LocalInterruptsStatus.timer.enabled = true;
    //InitSoftPWMConfiguration(&(LocalInterruptsStatus.settings), 100, 10);
    
    //InitSoftPWMHardware();
    
    mainLoop()
    {
        if(Navigate(&actualEntry, &(LocalInterruptsStatus.flags))) DisplayMenu(actualEntry, &LocalInterruptsStatus);
    }
    
}
