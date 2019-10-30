#include "led.h"

void delay(unsigned int time){
    unsigned int i,j;
    for(i=0;i<time;i++){
        for(j=0;j<475;j++){
            asm("NOP");
            asm("NOP");
            asm("NOP");
        }
    }
}

void LedInit(void){
    P1SEL&=~0x13;
    P1DIR|=0x13;
    
    LED1=0;
    LED2=1;
    LED3=1;
}

void LedKey1(void){
    LED2=0;
    LED3=0;
    delay(2000);
    LED2=1;
    LED3=1;
}

void LedKey2(void){
    LED2=0;
    delay(500);
    LED3=0;
    delay(500);
    LED1=1;
    delay(500);
    LED2=1;
    delay(500);
    LED3=1;
    delay(500);
    LedInit();
}
    