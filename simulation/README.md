# Blinky Project In Action

|ON|OFF|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/42568338/115950301-094fc700-a4f8-11eb-8202-671ef032d3a6.png)|![image](https://user-images.githubusercontent.com/42568338/115950307-0e147b00-a4f8-11eb-8e6f-bc93a721cd29.png)|

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
