#include "main.h"

/**
 * islower(int c) - checks if c is lowercase or uppercase
 *
 * Return: 0 if c is lowercase, 1 otherwise
 */
int _islower(int c)
{
	if (islower(c))
		return 1;
	else
		return 0;
}