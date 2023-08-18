#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 followed by a new line
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j, res, mod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			res = j / 10;
			mod = j % 10;
			if (res == 1)
				_putchar('0' + res);
			_putchar('0' + mod);
		}
		_putchar('\n');
	}
}
