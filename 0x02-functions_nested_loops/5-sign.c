#include <stdio.h>

/**
 * islower(int c) - checks if c is lowercase or uppercase
 *
 * Return: 0 if c is lowercase, 1 otherwise
 */
int print_sign(int c)
{
	if (c > 0)
	{
		putchar('+');
		return 1;
	}else if (c ==0)
	{
		putchar('0');
		return 0;
	}else
	{
		putchar('-1');
		return -1;
	}
}
