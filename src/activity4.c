#include "activity4.h"
#include "activity1.h"

void USARTInit(void){
    UBRR0H = (BAUDRATE>>8); //Set Baud rate 
    UBRR0L = BAUDRATE;
    sei();
    UCSR0C=(1<<UCSZ01)|(1<<UCSZ00); //Enable The receiver and transmitter 
    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0); 
}
/*
char USARTReadChar(){ 
    USARTInit(); // Initialize Peripherals for UART 
    while(DATA_IS_RECEIVING) //Wait untill a data is available 
    {
    //Do nothing
    }
    return DATA; 
}
*/
void USARTWriteChar(char letter){
    //while(DATA_IS_TRANSMITTING) //Wait untill the transmitter is ready 
    DATA = letter; //write the data to USART buffer 
}

void USARTWriteString(char* Temp){
    int i;
    for(i=0;i<5;i++) USARTWriteChar(*(Temp+i));
}