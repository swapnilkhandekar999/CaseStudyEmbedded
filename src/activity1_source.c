#include "user_utils.h"
#include "blinky.h"
void activity1(void)
{   
    uint16_t temp=0;
    InitADC();
    change_led_state(LED_OFF);
    while(1){
        /*checks whether button sensor is ON or OFF */
        if(!(PIND & 1<<PD0)){
            /*checks whether heater button is ON or OFF */
            if(!(PIND & 1<<PD1)){
                change_led_state(LED_ON);
                temp = ReadADC(0);
                _delay_ms(200);
            }
            else change_led_state(LED_OFF);
        }
        else change_led_state(LED_OFF);
    }
}