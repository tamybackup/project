#ifndef _LED_H
#define _LED_H

#include<ioCC2530.h>

#define LED1 P1_0
#define LED2 P1_1
#define LED3 P1_4

typedef enum enLedNum{
    LED1_E,
    LED2_E,
    LED3_E,
    LEDMAX_E
}LED_NUM_E;

void LedInit(void);
void LedKey1(void);
void LedKey2(void);
#endif