#include"led.h"
#include"key.h"

void main(void){
    LedInit();
    KeyInit();
    while(1){
        if(KEY_PRESS==GetKeyState(KEY1_E)){
            LedKey1();
        }
        if(KEY_PRESS==GetKeyState(KEY2_E)){
            LedKey2();
        }
    }
}