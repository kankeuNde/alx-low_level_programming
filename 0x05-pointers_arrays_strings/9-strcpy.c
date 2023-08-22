#include "main.h"

/**
 * _strcpy - copy a string
 * @dest: pointer to dest
 * @src: pointer to src
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
