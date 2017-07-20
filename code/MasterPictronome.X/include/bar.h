/* 
 * File:   bar.h
 * Author: slawomir
 *
 * Created on July 20, 2017, 7:58 PM
 */

#ifndef BAR_H
#define	BAR_H

#ifdef	__cplusplus
extern "C" {
#endif

#define BAR_BASE "  X          X  "
const char* barBase = BAR_BASE;
    
void InitBar(char* bar);


#ifdef	__cplusplus
}
#endif

#endif	/* BAR_H */

