#include"led.h"

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
}

void LedBegin(void){
    unsigned char i;
    while(1){
        LED1=LED_ON;
        delay(10000);
        LED1=~LED1;
        for(i=0;i<4;i++){
            LED2=LED_ON;
            delay(250);
            LED2=~LED2;
            delay(250);
        }
        LED3=LED_ON;
        delay(10000);
        LED3=~LED3;
    }
}

void LedOff(void){
    LED1=LED_OFF;
    LED2=LED_OFF;
    LED3=LED_OFF;
    delay(10000);
    LedBegin();
}