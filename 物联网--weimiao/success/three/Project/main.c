#include"led.h"
#include"key.h"
#include"intp.h"

void main(void){
    LedInit();
    KeyInit();
    IntpInit();
    
    LedBegin();
    while(1){
        
    }
}