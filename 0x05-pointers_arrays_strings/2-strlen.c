#include "main.h"

/**
 * _strlen - compute the length of a string
 * @s: string to compute
 * Return: returns the lenght of s
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
