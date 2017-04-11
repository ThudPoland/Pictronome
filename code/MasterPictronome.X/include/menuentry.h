/* 
 * File:   menuentry.h
 * Author: slawomir
 *
 * Created on 17 stycznia 2017, 17:59
 */

#ifndef MENUENTRY_H
#define	MENUENTRY_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include <stdint.h>
    
struct MenuEntry
{
    struct MenuEntry *parent;
    struct MenuEntry *leftNeighbor;
    struct MenuEntry *rightNeighbor;  
    
    void (*firstMenuAction)(void* object, void* parameter);
    void (*secondMenuAction)(void* object, void* parameter);
    void (*thirdMenuAction)(void* object, void* parameter);
    void (*fourthMenuAction)(void* object, void* parameter);
    
    char* firstLineContent;
    char* secondLineContent;
    
    uint8_t firstLineContentLength;
    uint8_t secondLineContentLength;
};


#ifdef	__cplusplus
}
#endif

#endif	/* MENUENTRY_H */

