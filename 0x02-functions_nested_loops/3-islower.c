#include "main.h"

/**
 * _islower - checks if c is lowercase or uppercase
 * @c: input integer
 * Return: 0 if c is lowercase, 1 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
