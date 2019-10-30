#include"led.h"
#include"key.h"
#include"intp.h"

void Delay(unsigned int time){
    unsigned int i,j;
    for(i=0;i<time;i++){
        for(j=0;j<475;j++){
            asm("NOP");
            asm("NOP");
            asm("NOP");
        }
    }
}

void IntpInit(void){
    //P0_1组中断
    P0IE=1;
    //P0_1子中断
    P0IEN|=0x02;
    //P0组下降沿中断
    PICTL|=0x01;
    
    //P2_0组中断
    IEN2|=0x02;
    //P0_1子中断
    P2IEN|=0x01;
    //P0组下降沿中断
    PICTL|=0x08;
    //中断总开关
    EA=1;
}
#pragma vector=P1INT_VECTOR
__interrupt void P0_ISR(void){
    //判断中断是否触发
    if(P0IFG&0x02){
        Delay(10);
        //当KEY1按下时，对LED2灯进行开灯
        if(KEY_PRESS==GetKeyState(KEY_KEY1_E)){
            LedOff();
        }
    }
}