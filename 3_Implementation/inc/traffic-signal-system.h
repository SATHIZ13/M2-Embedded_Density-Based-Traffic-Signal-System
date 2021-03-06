#ifndef _TRAFFIC_SIGNAL_SYSTEM_H__
#define __TRAFFIC-SIGNAL-SYSTEM_H__

#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
/**
 * @file traffic-signal-system.h
 * @author SATHIZ13 ()
 * @brief Configuration file to define pins and ports for the interfaced peripherals
 * @version 0.1
 * @date 2021-012-1
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#define F_CPU 16000000UL 	/**< Clock Frequency of MCU is 16 MHz */

#define LED_PORT (PORTB)    /**< LED Port Number */
#define LED_PIN  (PORTB1)   /**< LED Pin number  */

#include <avr/io.h>

#endif /* _TRAFFIC_SIGNAL_SYSTEM_H__ */
