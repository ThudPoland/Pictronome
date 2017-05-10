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
#include <stdbool.h>
#include <stdio.h>
    
struct MenuEntry
{
    struct MenuEntry *child;
    struct MenuEntry *parent;
    struct MenuEntry *leftNeighbor;
    struct MenuEntry *rightNeighbor;  
    
    bool (*firstMenuAction)(void** object, void* parameter);
    bool (*secondMenuAction)(void** object, void* parameter);
    bool (*thirdMenuAction)(void** object, void* parameter);
    bool (*fourthMenuAction)(void** object, void* parameter);
    
    char* firstLineContent;
    char* secondLineContent;
    
    uint8_t firstLineContentLength;
    uint8_t secondLineContentLength;
};

bool ExecuteFirstAction(struct MenuEntry** entry);
bool ExecuteSecondAction(struct MenuEntry** entry);
bool ExecuteThirdAction(struct MenuEntry** entry);
bool ExecuteFourthAction(struct MenuEntry** entry);

#ifdef	__cplusplus
}
#endif

#endif	/* MENUENTRY_H */

