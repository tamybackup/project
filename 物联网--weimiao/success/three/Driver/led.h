#ifndef _LED_H
#define _LED_H

#include <ioCC2530.h>

#define LED_ON 0
#define LED_OFF 1

#define LED1 P1_0
#define LED2 P1_1
#define LED3 P1_4

void LedInit(void);
void LedBegin(void);
void LedOff(void);

#endif
