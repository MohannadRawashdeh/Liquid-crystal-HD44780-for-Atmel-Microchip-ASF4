/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "driver_init.h"
#include <peripheral_clk_config.h>
#include <utils.h>
#include <hal_init.h>
#include <hpl_gclk_base.h>
#include <hpl_pm_base.h>

struct usart_sync_descriptor TARGET_IO;

void TARGET_IO_PORT_init(void)
{

	gpio_set_pin_function(PA22, PINMUX_PA22C_SERCOM3_PAD0);

	gpio_set_pin_function(PA23, PINMUX_PA23C_SERCOM3_PAD1);
}

void TARGET_IO_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, SERCOM3);
	_gclk_enable_channel(SERCOM3_GCLK_ID_CORE, CONF_GCLK_SERCOM3_CORE_SRC);
}

void TARGET_IO_init(void)
{
	TARGET_IO_CLOCK_init();
	usart_sync_init(&TARGET_IO, SERCOM3, (void *)NULL);
	TARGET_IO_PORT_init();
}

void delay_driver_init(void)
{
	delay_init(SysTick);
}

void system_init(void)
{
	init_mcu();

	// GPIO on PA10

	gpio_set_pin_level(Data_pin_0,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_0, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_0, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA11

	gpio_set_pin_level(Data_pin_1,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_1, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_1, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA15

	// Set pin direction to input
	gpio_set_pin_direction(SW0, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(SW0,
	                       // <y> Pull configuration
	                       // <id> pad_pull_config
	                       // <GPIO_PULL_OFF"> Off
	                       // <GPIO_PULL_UP"> Pull-up
	                       // <GPIO_PULL_DOWN"> Pull-down
	                       GPIO_PULL_UP);

	gpio_set_pin_function(SW0, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA20

	gpio_set_pin_level(Data_pin_2,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_2, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_2, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PA21

	gpio_set_pin_level(Data_pin_3,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_3, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_3, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB00

	gpio_set_pin_level(Data_pin_4,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_4, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_4, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB01

	gpio_set_pin_level(Data_pin_5,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_5, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_5, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB02

	gpio_set_pin_level(LCD_WR,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LCD_WR, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LCD_WR, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB03

	gpio_set_pin_level(LCD_RS,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LCD_RS, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LCD_RS, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB04

	gpio_set_pin_level(LCD_EN,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LCD_EN, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LCD_EN, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB06

	gpio_set_pin_level(Data_pin_6,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_6, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_6, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB07

	gpio_set_pin_level(Data_pin_7,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(Data_pin_7, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(Data_pin_7, GPIO_PIN_FUNCTION_OFF);

	// GPIO on PB30

	gpio_set_pin_level(LED0,
	                   // <y> Initial level
	                   // <id> pad_initial_level
	                   // <false"> Low
	                   // <true"> High
	                   false);

	// Set pin direction to output
	gpio_set_pin_direction(LED0, GPIO_DIRECTION_OUT);

	gpio_set_pin_function(LED0, GPIO_PIN_FUNCTION_OFF);

	TARGET_IO_init();

	delay_driver_init();
}
