#include "main.h"

/**
 * print_sign - checks if c is lowercase or uppercase
 * @c: input integer
 * Return: 1 if c > 0 , 0 if c equal to 0 and -1 if c < 0
 */
int print_sign(int c)
{
	if (c > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (c == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
