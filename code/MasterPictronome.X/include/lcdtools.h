/* 
 * File:   lcdtools.h
 * Author: kozok
 *
 * Created on 25 marca 2017, 20:52
 */

#ifndef LCDTOOLS_H
#define	LCDTOOLS_H

#ifdef	__cplusplus
extern "C" {
#endif

#include <stdint.h>
    
void NumberToString(uint16_t number, uint8_t offset, uint8_t overallLength, char *buffer);


#ifdef	__cplusplus
}
#endif

#endif	/* LCDTOOLS_H */

