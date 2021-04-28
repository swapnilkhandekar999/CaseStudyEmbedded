/**
 * @file project_main.c
 * @author Swapnil Khandekar ()
 * @brief Project to complete activities as described in Embedded track
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#define ON 1
/**
 * @brief Main function where the code execution starts
 * 
 * @return int Return 0 if the program completes successfully
 * @note PORTB0 is in sink config. i.e when pin is Low, the LED will turn OFF
 * @note PORTB0 is in sink config. i.e when pin is High, the LED will turn ON
 */
int main(void)
{
	uint16_t Temperature=0, ADCchannel=0;
	uint8_t Status=0;
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
	return 0;
}
