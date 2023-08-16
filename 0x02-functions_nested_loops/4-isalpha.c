#include <stdio.h>

/**
 * _isalpha - checks if c is lowercase or uppercase
 * @c: input integer
 * Return: 1 if c is a letter, 1 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
