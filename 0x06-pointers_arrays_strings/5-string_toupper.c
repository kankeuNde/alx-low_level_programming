#include "main.h"
#include <stdio.h>

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: input string
 *
 * Return: string containing all uppercase
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i++] != '\0')
	{
		if ((s[i] >= 'a') && (s[i] <= 'z'))
			s[i] = s[i] - 32;
	}
	return (s);
}
