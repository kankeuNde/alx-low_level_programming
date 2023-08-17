#include "main.h"

/**
 * print_last_digit - compute the last digit of a number
 * @c: input integer

 * Return: n the last digit of a number
 */
int print_last_digit(int c)
{
	int l_digit;

	l_digit = c % 10;
	if (l_digit < 0)
		l_digit = l_digit * -1;
	_putchar(l_digit + '0');
	return (l_digit);
}

