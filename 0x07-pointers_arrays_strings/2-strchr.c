#include "main.h"

/**
 * _strchr - find the character c in string s
 * @s: input string where to search
 * @c: input char to search in s
 *
 * Return: return the position pointer to c
 */
char *_strchr(char *s, char c)
{
	char *res;

	res = '\0';
	while (*s != c && *s != '\0')
		s++;
	if (*s != '\0')
		res = s;
	return (res);
}
