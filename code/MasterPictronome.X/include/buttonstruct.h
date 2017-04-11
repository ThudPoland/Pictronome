/* 
 * File:   buttonstruct.h
 * Author: kozok
 *
 * Created on 11 kwietnia 2017, 20:30
 */

#ifndef BUTTONSTRUCT_H
#define	BUTTONSTRUCT_H

#ifdef	__cplusplus
extern "C" {
#endif

    typedef struct
    {
        uint8_t button1Flag : 1;
        uint8_t button2Flag : 1;
        uint8_t button3Flag : 1;
        uint8_t button4Flag : 1;
        uint8_t button5Flag : 1;
    } ButtonFlags;


#ifdef	__cplusplus
}
#endif

#endif	/* BUTTONSTRUCT_H */

