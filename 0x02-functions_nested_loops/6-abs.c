#include <stdio.h> 

/**
 * _abs - compute the abolute value of a number
 * @c: input integer to be computed.
 *
 * Return: c if c > 0 and -c if c < 0
 */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (-c);
}
