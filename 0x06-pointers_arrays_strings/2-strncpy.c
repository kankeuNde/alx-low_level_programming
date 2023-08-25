#include "main.h"

/**
 * _strncpy - copy string from src to dest
 * @dest: input destination string
 * @src: input string to be copied
 * @n: input n number of bytes to copy
 *
 * Return: string copied
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *d = dest;
	char *s = src;
	int i = 0;

	while (i < n && *d != '\0')
	{
		*d = *s;
		d++;
		s++;
		i++;
	}
	for (; i < n; i++)
	{
		*d = '\0';
		d++;
	}
	return (dest);
}
