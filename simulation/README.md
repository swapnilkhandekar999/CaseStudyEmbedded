# Blinky Project In Action

|ON|OFF|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/42568338/115950301-094fc700-a4f8-11eb-8202-671ef032d3a6.png)|![image](https://user-images.githubusercontent.com/42568338/115950307-0e147b00-a4f8-11eb-8e6f-bc93a721cd29.png)|

## Code 
```
	for(;;)
	{
        change_led_state(HIGH);
		delay_ms(LED_ON_TIME);
        change_led_state(LOW);
		delay_ms(LED_OFF_TIME);	
	}
```
