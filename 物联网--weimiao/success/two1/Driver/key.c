#include"key.h"

void KeyInit(void){
    P0SEL&=~0x02;
    P2SEL&=~0x01;
    P0DIR|=~0x02;
    P2DIR|=~0x01;
    P0INP&=0x02;
    P2INP&=0x01;
}
unsigned char GetKeyState(unsigned char ucKeyNum){
    unsigned char ucKeyState=KEY_ERROR;
    switch(ucKeyNum){
        case KEY_KEY1_E:
            ucKeyState=KEY1;
            break;
        case KEY_KEY2_E:
            ucKeyState=KEY2;
            break;
        default:
            break;
    }
    return ucKeyState;
}