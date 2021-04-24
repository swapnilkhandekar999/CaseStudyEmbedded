#include "user_utils.h"
#include "blinky.h"
void activity1(void)
{
    change_led_state(LED_OFF);
    while(1){
        /*checks whether button sensor is ON or OFF */
        if((PIND & 1<<PD0)){
            /*checks whether heater button is ON or OFF */
            if((PIND & 1<<PD1)){
                change_led_state(LED_ON);
            }
            else change_led_state(LED_OFF);
        }
        else change_led_state(LED_OFF);
    }
}