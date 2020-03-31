/*

  Quick example to demonstrate how to use LCD Display driver HD44780 or equivalent
  tested on LCD 1602 / 2004 / 2002 displays
  Written By: Mohannad Rawashdeh
  https://mb-raw.blogspot.com/
  https://mb-raw.blogspot.com/2020/03/liquid-crystal-display-lcd-control.html
*/

#include "atmel_start.h"
#include <hal_gpio.h>
#include <hal_delay.h>
#include "Liquid_crystal/Liquid_Crystal.h"
#include "string.h"
struct LCD_param lcd1602;
int main(void)
{
	atmel_start_init();
	
	/*
	if you want to use this display in 4bit mode and save 4 pins , use this line
	*/
	Liquid_Crystal_setup(&lcd1602,LCD_4BITMODE,
	LCD_RS,LCD_WR,LCD_EN,Data_pin_4,Data_pin_5,Data_pin_6,Data_pin_7,0,0,0,0);
	
	/*setup the library's pins, and bit mode in 8 bit mode
	Liquid_Crystal_setup(&lcd1602,LCD_8BITMODE,
	LCD_RS,LCD_WR,LCD_EN,Data_pin_0,Data_pin_1,Data_pin_2,Data_pin_3,Data_pin_4,Data_pin_5,Data_pin_6,Data_pin_7);
	*/
	/*set the columns and rows of the display , here 16 x 2 */
	Liquid_Crystal_initi(&lcd1602,16,2);
	/*
	set the columns and rows of the display , here 20 x 4 
	Liquid_Crystal_initi(&lcd1602,20,4);
	*/
	Liquid_Crystal_clear(&lcd1602);
	delay_ms(100);
	/*set the cursor to 0,0 */
	Liquid_Crystal_setCursor(&lcd1602,0,0);
	/*print Simple message on the screen using write char method*/
	uint8_t message[12]="Samd21 X pro";
	for (uint8_t count=0;count<12;count++)
	{
		Liquid_Crystal_writeChar(&lcd1602,message[count]);
		
		delay_ms(10);
	}
	/*set the cursor to next row */
	Liquid_Crystal_setCursor(&lcd1602,1,1);
	/*print Simple message on the screen using write string method*/
	Liquid_Crystal_writeString(&lcd1602,(char *)"M.Rawashdeh");
	while(1)
	{
		/*move the text to the right and left by 2 digit back and forth*/
		Liquid_Crystal_scrollDisplayRight(&lcd1602);
		delay_ms(250);
		Liquid_Crystal_scrollDisplayRight(&lcd1602);
		delay_ms(1000);
		Liquid_Crystal_scrollDisplayLeft(&lcd1602);
		delay_ms(250);
		Liquid_Crystal_scrollDisplayLeft(&lcd1602);
		delay_ms(1000);
		/*using display on - off function to flicker the display a bit*/
		for (uint8_t i=0;i<3;i++)
		{
			Liquid_Crystal_display(&lcd1602);
			delay_ms(1000);
			Liquid_Crystal_noDisplay(&lcd1602);
			delay_ms(500);
		}
		Liquid_Crystal_display(&lcd1602);
		delay_ms(500);
	}
}
