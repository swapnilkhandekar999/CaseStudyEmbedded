# Activity1, Activity2 and Activity3 In Action

|ON|OFF|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/42568338/116396011-750c9980-a842-11eb-8ab0-2f9ce18906c0.png)|![image](https://user-images.githubusercontent.com/42568338/116396024-7ccc3e00-a842-11eb-9b73-15d632b1797c.png)|

## Code 
```
    while(1){
		InitializePeripherals();/* Initialize Peripherals */
		InitializeADC();/* Initialize Peripherals for ADC */
    	InitializePWM();/* Initialize Peripherals for PWM */
		/* Turns LED ON if and only if both switches ButtonSensor and Heater are closed */
		Status=StatusOfLedActuator();
		if(Status==ON){
			Temperature = ReadADC(ADCchannel); /*reads sensor data from ADCChannel*/
    	    GeneratePWM(Temperature); /*Generates PWM according to data received from sensor*/
		}
	}
```
