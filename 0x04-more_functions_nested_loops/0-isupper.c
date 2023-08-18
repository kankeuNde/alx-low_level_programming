#include "main.h"

/**
 * _isupper - decide if a character is an Uppercase
 * @c: input character
 * Return: returns 1 if it is uppercase , o else
 */
int _isupper(int c)
{
	if ((c >= 'A')&&(c <= 'Z'))
		return (1);
	return (0);
}	
