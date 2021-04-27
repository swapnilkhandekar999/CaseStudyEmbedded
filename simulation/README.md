# Activity1 and Activity2 In Action

|ON|OFF|
|:--:|:--:|
|![image](https://user-images.githubusercontent.com/42568338/116281503-6a50f680-a7a7-11eb-8b08-dc74c8f9880d.png)|![image](https://user-images.githubusercontent.com/42568338/116281538-71780480-a7a7-11eb-8201-b2489d5fbe29.png)|

## Code 
```
    while(1){
        /*checks whether button sensor is ON or OFF */
        if(BUTTON_SENSOR_ON){
            /*checks whether heater button is ON or OFF */
            if(HEATER_SENSOR_ON){
                ChangeLEDState(LED_ON);
                Temperature = ReadADC(ADCchannel);
                DelayMilliSecond(200);
            }
            else ChangeLEDState(LED_OFF);
        }
        else ChangeLEDState(LED_OFF);
    }
```
