#include "main.h"

/**
 * _isdigit - determine if it is a number
 * @c: integer value of the character
 *
 * Return: returns 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
