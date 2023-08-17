#include "main.h"

/**
 * jack_baeur - print the 24 hours
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;
	
	for (hour = 0; hour <= 13; hour++)
	{
		for (minute = 0; minute <= 59; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}

