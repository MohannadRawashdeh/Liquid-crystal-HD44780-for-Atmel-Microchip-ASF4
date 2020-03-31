/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_PINS_H_INCLUDED
#define ATMEL_START_PINS_H_INCLUDED

#include <hal_gpio.h>

// SAMD21 has 8 pin functions

#define GPIO_PIN_FUNCTION_A 0
#define GPIO_PIN_FUNCTION_B 1
#define GPIO_PIN_FUNCTION_C 2
#define GPIO_PIN_FUNCTION_D 3
#define GPIO_PIN_FUNCTION_E 4
#define GPIO_PIN_FUNCTION_F 5
#define GPIO_PIN_FUNCTION_G 6
#define GPIO_PIN_FUNCTION_H 7

#define Data_pin_0 GPIO(GPIO_PORTA, 10)
#define Data_pin_1 GPIO(GPIO_PORTA, 11)
#define SW0 GPIO(GPIO_PORTA, 15)
#define Data_pin_2 GPIO(GPIO_PORTA, 20)
#define Data_pin_3 GPIO(GPIO_PORTA, 21)
#define PA22 GPIO(GPIO_PORTA, 22)
#define PA23 GPIO(GPIO_PORTA, 23)
#define Data_pin_4 GPIO(GPIO_PORTB, 0)
#define Data_pin_5 GPIO(GPIO_PORTB, 1)
#define LCD_WR GPIO(GPIO_PORTB, 2)
#define LCD_RS GPIO(GPIO_PORTB, 3)
#define LCD_EN GPIO(GPIO_PORTB, 4)
#define Data_pin_6 GPIO(GPIO_PORTB, 6)
#define Data_pin_7 GPIO(GPIO_PORTB, 7)
#define LED0 GPIO(GPIO_PORTB, 30)

#endif // ATMEL_START_PINS_H_INCLUDED
