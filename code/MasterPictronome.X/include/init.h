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

#include "bar.h"
#include "data.h"
#include "utils.h"
#include "lcdtools.h"
    
void EntriesInit(struct SystemUI* status, struct DataSource *source);
void NavigateLeft(void** object);
void NavigateRight(void** object);
void NavigateDown(void** object);
void NavigateUp(void** object);

#define CONTENT_LENGTH 16

#ifdef	__cplusplus
}
#endif

#endif	/* INIT_H */

