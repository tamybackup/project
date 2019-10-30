#include "led.h"
#include"key.h"

void main(void){
	LedInit();
	KeyInit();
	while(1){
		if(KEY_PRESS==GetKeyState(KEY_KEY1_E)){
			LedKey1();
		}
		if(KEY_PRESS==GetKeyState(KEY_KEY2_E)){
			LedKey2();
		}
	}
}