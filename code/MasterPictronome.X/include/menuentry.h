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

    typedef int MenuLevel;
    
struct MenuEntry
{
    MenuLevel actualMenuLevel;
    MenuLevel nextMenuLevel;
    void (*menuAction)();
    
    char *text;
    int textLength;
};


#ifdef	__cplusplus
}
#endif

#endif	/* MENUENTRY_H */

