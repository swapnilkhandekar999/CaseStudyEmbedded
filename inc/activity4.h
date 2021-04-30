#ifndef _ACTIVITY4_H_
#define _ACTIVITY4_H_

/**
 * @file activity4.h
 * @author Swapnil Khandekar ()
 * @brief Activity4 in the embedded case study
 * @version 0.1
 * @date 2021-04-29
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/**
 * Defining macros
 * 
 */
#define BAUD 9600 /**< Baud Rate */
#define BAUDRATE ((F_CPU)/(BAUD*16UL)-1) /**< set baud rate value for UBRR */
#define DATA_IS_TRANSMITTING !(UCSR0A & (1<<UDRE0)) /**< Data is transmitting */
#define DATA_IS_RECEIVING !(UCSR0A & (1<<RXC0)) /**< Data is receiving */
#define DATA UDR0 /**< Data register */

/**
 * @brief Function to initialize UART 
 * 
 */
void USARTInit(void);

/**
 * @brief Function to Read character   
 * 
 */
//char USARTReadChar();

/**
 * @brief Function to write character   
 * @param[in] character single character
 */
//void USARTWriteChar(char character);

/**
 * @brief Function to write string 
 *  
 * @param[in] letter single character
 */
void USARTWriteString(char letter);

#endif  /* _ACTIVITY4_H_ */