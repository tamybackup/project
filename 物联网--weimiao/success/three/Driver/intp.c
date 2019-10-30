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
    //P0_1���ж�
    P0IE=1;
    //P0_1���ж�
    P0IEN|=0x02;
    //P0���½����ж�
    PICTL|=0x01;
    
    //P2_0���ж�
    IEN2|=0x02;
    //P0_1���ж�
    P2IEN|=0x01;
    //P0���½����ж�
    PICTL|=0x08;
    //�ж��ܿ���
    EA=1;
}
#pragma vector=P1INT_VECTOR
__interrupt void P0_ISR(void){
    //�ж��ж��Ƿ񴥷�
    if(P0IFG&0x02){
        Delay(10);
        //��KEY1����ʱ����LED2�ƽ��п���
        if(KEY_PRESS==GetKeyState(KEY_KEY1_E)){
            LedOff();
        }
    }
}