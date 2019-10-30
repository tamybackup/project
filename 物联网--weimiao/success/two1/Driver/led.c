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
    P1SEL&=~(0x13);
    P1DIR|=0x13;
}
void LedBegin(void){
    LED1=LED_OFF;
    LED2=LED_OFF;
    LED3=LED_OFF;
}
void LedKey1(void){
    LED1=LED_ON;
    delay(500);
    LED2=LED_ON;
    delay(500);
    LED3=LED_ON;
    delay(500);
    LED1=LED_OFF;
    delay(500);
    LED2=LED_OFF;
    delay(500);
    LED3=LED_OFF;
    delay(500);
}
void LedKey2(void){
    LedBegin();
}