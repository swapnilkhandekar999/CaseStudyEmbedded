#include <avr/io.h>
int main(void)
{
    DDRB |= (1<<PB0);//Makes first pin of PORTB as Output
    DDRD = 0x00; //Makes all pins of PORTD input
    PORTB &=~(1<<PB0); //Turns LED OFF
    while(1){
        /*checks whether button sensor is ON or OFF */
        if((PIND & 1<<PD0)){
            /*checks whether heater button is ON or OFF */
            if((PIND & 1<<PD1)){
                PORTB |= (1<<PB0); //Turns LED ON
            }
            else PORTB &=~(1<<PB0); //Turns LED OFF
        }
        else PORTB &=~(1<<PB0); //Turns LED OFF
    }
    return 0;
}

