#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day
 *Return: 0
 */
void jack_bauer(void)
{	
	int hours = 0;
	int minutes = 0;
	int hours_remaining;
	int minutes_remaining;

	while (hour <= 23)
	{
	while (minutes <= 59)
	{
	minutes_remaining = minutes % 10;
	hours_remaining = hours % 10;
	_putchar(hours / 10 + '0');
	_putchar(hours_remaining + '0')
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(minutes_remaining + '0');
	minutes++;
	_putchar('\n');
	}
	hours++;
	minutes = 0;
	}
}
