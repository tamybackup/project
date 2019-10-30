#ifndef _KEY_H
#define _KEY_H

#include<ioCC2530.h>

#define KEY1 P0_1
#define KEY2 P2_0
#define KEY_PRESS 0
#define KEY_ERROR 2

typedef enum enKeyNum{
    KEY1_E,
    KEY2_E
}KEY_NUM_E;

void KeyInit(void);
unsigned char GetKeyState(unsigned char KeyNum);
#endif