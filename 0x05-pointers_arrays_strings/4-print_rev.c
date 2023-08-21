#include "main.h"

/**
 * print_rev - print string in reverse order
 * @s: string to be printed in reverse order
 * Return: noting
 */
void print_rev(char *s)
{
	int len;
	int i;

	len = _strlen(s);
	for (i = len; i > 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}

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
