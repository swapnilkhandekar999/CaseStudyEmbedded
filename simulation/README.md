# Activity1 In Action

|ON|OFF|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/42568338/116000242-08f52000-a60d-11eb-8771-51928795259e.png)|![image](https://user-images.githubusercontent.com/42568338/116000247-0eeb0100-a60d-11eb-9f9b-8ea4069628c7.png)|

## Code 
```
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
```
