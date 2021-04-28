#include "activity3.h"
#include "activity1.h"

void InitializePWM(void){
    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
    TCCR1B=(1<<CS11)|(1<<WGM12)|(1<<CS10);
    DDRB|=(1<<PB1);
}

void GeneratePWM(uint16_t Temperature){
    InitializePWM();
    if(Temperature>=0 && Temperature<=200){
        OCR1A = 204.8;
        DelayMilliSecond(200);
    }
    else if(Temperature>=201 && Temperature<=500){
        OCR1A = 409.6;
        DelayMilliSecond(200);
    }
    else if(Temperature>=501 && Temperature<=700){
        OCR1A = 716.8;
        DelayMilliSecond(200);
    }
    else{
        OCR1A = 972.8;
        DelayMilliSecond(200);
    }
}
