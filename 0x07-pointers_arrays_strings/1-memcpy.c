#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: input pointer where to copy
 * @src: input pointer source memory
 * @n: input number of elements to copy
 *
 * Return: pointer to memory area dest;
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
