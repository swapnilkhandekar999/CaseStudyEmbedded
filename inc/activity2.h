#ifndef _ACTIVITY2_H_
#define _ACTIVITY2_H_

/**
 * @file activity2.h
 * @author Swapnil Khandekar ()
 * @brief Activity2 in the embedded case study
 * @version 0.1
 * @date 2021-04-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Macro definitions
 * 
 */
#define CONVERSION_IS_INCOMPLETE  ADCSRA & (1<<ADSC)
/**
 * @brief Function to initialize ADC
 * 
 */
void InitializeADC();

/**
 * @brief Function to read values from a channel 
 * @param[in] channel channel number
 */
uint16_t ReadADC(uint8_t channel);

#endif /* _ACTIVITY2_H_ */