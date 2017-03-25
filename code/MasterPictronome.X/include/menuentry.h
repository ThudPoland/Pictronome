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
    
struct MenuEntry
{
    struct MenuEntry *parent;
    struct MenuEntry *leftNeighbor;
    struct MenuEntry *rightNeighbor;  
    
    void (*firstMenuAction)();
    void (*secondMenuAction)();
    void (*thirdMenuAction)();
    void (*fourthMenuAction)();
    
    char* firstLineContent;
    char* secondLineContent;
};

#ifdef	__cplusplus
}
#endif

#endif	/* MENUENTRY_H */

