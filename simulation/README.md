# Activity1, Activity2, Activity3 and Activity4 In Action

|ON|OFF|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/42568338/116721469-f6a72780-a9fa-11eb-9361-8c530324999b.png)|![image](https://user-images.githubusercontent.com/42568338/116721494-fdce3580-a9fa-11eb-9569-e11a843469e7.png)|

## Code 
```
while(1){
	uint8_t Status;
	/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
	Status=StatusOfLedActuator();
	if(Status==ON){
		Temperature=ReadADC(ADCchannel); /*reads sensor data from ADCChannel*/
		TempType=GeneratePWM(Temperature);/*Generates PWM according to data received from sensor*/
		USARTWriteString(TempType);/*Sends data to serial monitor*/
	}
}
```
