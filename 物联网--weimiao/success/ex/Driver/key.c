#include"key.h"

void KeyInit(void){
    P0SEL&=0x02;
    P0DIR&=0x02;
    P0INP|=0x02;
    P2SEL&=0x01;
    P2DIR&=0x01;
    P2INP|=0x01;
}

unsigned char GetKeyState(unsigned char KeyNum){
    unsigned char KeyState=KEY_ERROR;
    switch(KeyNum){
        case KEY1_E:
            KeyState=KEY1;
            break;
        case KEY2_E:
            KeyState=KEY2;
            break;
        default:
            break;
    }
    return KeyState;
    
}