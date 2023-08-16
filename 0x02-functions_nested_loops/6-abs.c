#include <stdio.h> 

/**
 * abs(int c) - compute the abolute value of a number
 *
 * Return: c if c > 0 and -c if c < 0
 */
int abs(int c)
{
	if (c >= 0)
		return c;
	else
		return -c;
}
