#include "main.h"

/**
 * _strcat() - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *d = dest;
	char *s = src;

	while (d != '\0')
		d++;
	while (s != '\0')
	{
		*d = *s;
		d++;
		s++
	}
	*d = '\0';
	return (dest);
}
