#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = '0'; i <= '9'; i++)
			_putchar(i);
		for (i = '0'; i <= '4'; i++)
		{
			_putchar('1');
			_putchar(i);
		}
		_putchar('\n');
	}
}
