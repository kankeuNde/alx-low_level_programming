#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to uppercase
 * @s: input string
 *
 * Return: string containing all uppercase
 */
char *string_toupper(char *s)
{
	int len, i;

	while (*s != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - ('a' - 'A');
	}
	return (s);
}
