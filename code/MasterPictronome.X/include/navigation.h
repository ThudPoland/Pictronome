/* 
 * File:   navigation.h
 * Author: kozok
 *
 * Created on 12 kwietnia 2017, 19:32
 */

#ifndef NAVIGATION_H
#define	NAVIGATION_H

#include "stdbool.h"
#include "menuentry.h"
#include "buttonstruct.h"
#include "init.h"
#include "i2c-tools.h"

#ifdef	__cplusplus
extern "C" {
#endif

bool Navigate(struct MenuEntry **entry, ButtonFlags* flags);
void DisplayMenu(struct MenuEntry *entry, struct SystemStatus *system);


#ifdef	__cplusplus
}
#endif

#endif	/* NAVIGATION_H */

