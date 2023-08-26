#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: input string
 *
 * Return: string capitalized
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0' &&
			s[i] != ',' &&
			s[i] != ';' &&
			s[i] != '.' &&
			s[i] != '!' &&
			s[i] != '?' &&
			s[i] != '"' &&
			s[i] != ')' &&
			s[i] != '(' &&
			s[i] != '{' &&
			s[i] != '}')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
