#include "main.h"

/**
 * _strncat - concatenate dest with n bytes from the src
 * @dest: input string destination
 * @src: input string source
 * @n: input number of bytes
 *
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;
	int i = n;

	while (*d != '\0')
		d++;
	while (i > 0 && *s != '\0')
	{
		*d = *s;
		d++;
		s++;
		i--;
	}
	*d = '\0';
	return (dest);
}
