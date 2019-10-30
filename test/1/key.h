#ifndef _KEY_H
#define _KEY_H

#include<ioCC2530.h>


#define KEY_PRESS 0
#define KEY_ERROR 2
#define KEY_KEY1 0
#defien KEY_KEY2 1
#define KEY1 P0_1
#define KEY2 P2_0

typedef enum enKeyNum{
	KEY_KEY1_E,
	KEY_KEY2_E
}KEY_ALL_NUM;

void KeyInit(void);
unsigned char GetKeyState(unsigned char ucKeyNum);

#endif