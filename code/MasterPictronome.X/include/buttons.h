/* 
 * File:   buttons.h
 * Author: slawomir
 *
 * Created on 20 stycznia 2017, 14:04
 */

#ifndef BUTTONS_H
#define	BUTTONS_H

#include <xc.h>
#include <pic16f1709.h>
#include <stdint.h>

#include "data.h"
#include "definitions.h"
#include "i2c.h"
#include "buttonstruct.h"

#ifdef	__cplusplus
extern "C" {
#endif
    
void InitButtons();
void ButtonInterruptFunction(ButtonFlags* flags);


#ifdef	__cplusplus
}
#endif

#endif	/* BUTTONS_H */

